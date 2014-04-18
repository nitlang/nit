#include "separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompilerVisitor#type_info for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* separate_compiler__SeparateCompilerVisitor__type_info(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : AbstractCompiler */;
val* var22 /* : Set[MType] */;
val* var23 /* : MType */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : MType */;
val* var30 /* : String */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : String */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var_37 /* var : Array[Object] */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : MType */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : String */;
var_value = p0;
var1 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__MType__ctype]))(var1) /* ctype on <var1:MType>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "val*";
var5 = 4;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var3) /* == on <var2:String>*/;
if (var7){
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
var9 = 3;
((void (*)(val*, long))(var8->class->vft[COLOR_array__Array__with_capacity]))(var8, var9) /* with_capacity on <var8:Array[Object]>*/;
var_ = var8;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "";
var13 = 0;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_value) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "->type";
var18 = 6;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var20;
goto RET_LABEL;
} else {
var21 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_separate_compiler__SeparateCompiler__undead_types]))(var21) /* undead_types on <var21:AbstractCompiler(SeparateCompiler)>*/;
var23 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
((void (*)(val*, val*))(var22->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var22, var23) /* add on <var22:Set[MType]>*/;
if (varonce24) {
var25 = varonce24;
} else {
var26 = "type_";
var27 = 5;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_compiler__MType__c_name]))(var29) /* c_name on <var29:MType>*/;
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 2;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var30;
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
var34 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var34) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
var36 = 3;
((void (*)(val*, long))(var35->class->vft[COLOR_array__Array__with_capacity]))(var35, var36) /* with_capacity on <var35:Array[Object]>*/;
var_37 = var35;
if (varonce38) {
var39 = varonce38;
} else {
var40 = "(&type_";
var41 = 7;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
((void (*)(val*, val*))(var_37->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_37, var39) /* add on <var_37:Array[Object]>*/;
var43 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var44 = ((val* (*)(val*))(var43->class->vft[COLOR_abstract_compiler__MType__c_name]))(var43) /* c_name on <var43:MType>*/;
((void (*)(val*, val*))(var_37->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_37, var44) /* add on <var_37:Array[Object]>*/;
if (varonce45) {
var46 = varonce45;
} else {
var47 = ")";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
((void (*)(val*, val*))(var_37->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_37, var46) /* add on <var_37:Array[Object]>*/;
var50 = ((val* (*)(val*))(var_37->class->vft[COLOR_string__Object__to_s]))(var_37) /* to_s on <var_37:Array[Object]>*/;
var = var50;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#type_info for (self: Object, RuntimeVariable): String */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__SeparateCompilerVisitor__type_info(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : MPropDef */;
val* var2 /* : MPropDef */;
val* var3 /* : nullable MSignature */;
val* var4 /* : nullable Object */;
val* var5 /* : MType */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
short int var11 /* : Bool */;
val* var12 /* : AbstractCompiler */;
val* var13 /* : MModule */;
val* var_m /* var m: MModule */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : AbstractCompiler */;
val* var16 /* : MModule */;
val* var17 /* : nullable Object */;
val* var18 /* : MType */;
val* var19 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var20 /* : AbstractCompiler */;
val* var21 /* : String */;
val* var22 /* : nullable RuntimeVariable */;
var_mmethod = p0;
var_arguments = p1;
var1 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var2 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MMethodDef__msignature]))(var2) /* msignature on <var2:MPropDef(MMethodDef)>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 994);
show_backtrace(1);
}
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__varargize]))(self, var1, var3, var_arguments) /* varargize on <self:SeparateCompilerVisitor>*/;
var4 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var4) /* mcasttype on <var4:nullable Object(RuntimeVariable)>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_compiler__MType__ctype]))(var5) /* ctype on <var5:MType>*/;
if (varonce) {
var7 = varonce;
} else {
var8 = "val*";
var9 = 4;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___33d_61d]))(var6, var7) /* != on <var6:String>*/;
if (var11){
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var12) /* mainmodule on <var12:AbstractCompiler(SeparateCompiler)>*/;
var_m = var13;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_compiler__AbstractCompiler__realmainmodule]))(var15) /* realmainmodule on <var15:AbstractCompiler(SeparateCompiler)>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule_61d]))(var14, var16) /* mainmodule= on <var14:AbstractCompiler(SeparateCompiler)>*/;
var17 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var17) /* mcasttype on <var17:nullable Object(RuntimeVariable)>*/;
var19 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__monomorphic_send]))(self, var_mmethod, var18, var_arguments) /* monomorphic_send on <self:SeparateCompilerVisitor>*/;
var_res = var19;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule_61d]))(var20, var_m) /* mainmodule= on <var20:AbstractCompiler(SeparateCompiler)>*/;
var = var_res;
goto RET_LABEL;
} else {
}
var21 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_mmethod) /* const_color on <var_mmethod:MMethod>*/;
var22 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__table_send]))(self, var_mmethod, var_arguments, var21) /* table_send on <self:SeparateCompilerVisitor>*/;
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#send for (self: Object, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__send(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#table_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable], String): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__table_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var_const_color /* var const_color: String */;
long var1 /* : Int */;
val* var2 /* : MPropDef */;
val* var3 /* : nullable MSignature */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
long var21 /* : Int */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : Object */;
val* var31 /* : String */;
val* var32 /* : MPropDef */;
val* var33 /* : nullable MSignature */;
val* var34 /* : MPropDef */;
val* var35 /* : MClassDef */;
val* var36 /* : MClassType */;
val* var37 /* : MPropDef */;
val* var38 /* : MClassDef */;
val* var39 /* : MClassType */;
val* var40 /* : MPropDef */;
val* var41 /* : MClassDef */;
val* var42 /* : MModule */;
short int var43 /* : Bool */;
val* var44 /* : MType */;
val* var_msignature /* var msignature: MSignature */;
val* var45 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var48 /* : MType */;
val* var49 /* : RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var50 /* : null */;
short int var51 /* : Bool */;
val* var52 /* : null */;
val* var53 /* : RuntimeVariable */;
val* var54 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var55 /* : Buffer */;
val* var_ss /* var ss: Buffer */;
val* var56 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
val* var62 /* : Array[Object] */;
long var63 /* : Int */;
val* var64 /* : NativeArray[Object] */;
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
long var75 /* : Int */;
long var76 /* : Int */;
long var78 /* : Int */;
val* var79 /* : nullable Object */;
val* var_a /* var a: RuntimeVariable */;
val* var80 /* : Array[MParameter] */;
val* var81 /* : nullable Object */;
val* var82 /* : MType */;
val* var_t /* var t: MType */;
long var83 /* : Int */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
long var87 /* : Int */;
long var88 /* : Int */;
long var90 /* : Int */;
val* var91 /* : nullable Object */;
val* var92 /* : MType */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var99 /* : Array[Object] */;
long var100 /* : Int */;
val* var101 /* : NativeArray[Object] */;
val* var102 /* : String */;
val* var103 /* : RuntimeVariable */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
val* var109 /* : Array[Object] */;
long var110 /* : Int */;
val* var111 /* : NativeArray[Object] */;
val* var112 /* : String */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : AbstractCompiler */;
val* var116 /* : ModelBuilder */;
val* var117 /* : ToolContext */;
val* var118 /* : OptionBool */;
val* var119 /* : nullable Object */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var_ /* var : Bool */;
val* var122 /* : String */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : String */;
short int var128 /* : Bool */;
short int var_129 /* var : Bool */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
short int var136 /* : Bool */;
short int var_consider_null /* var consider_null: Bool */;
short int var137 /* : Bool */;
val* var138 /* : MType */;
short int var139 /* : Bool */;
int cltype;
int idtype;
short int var_140 /* var : Bool */;
short int var_maybenull /* var maybenull: Bool */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : String */;
val* var151 /* : Array[Object] */;
long var152 /* : Int */;
val* var153 /* : NativeArray[Object] */;
val* var154 /* : String */;
val* var155 /* : String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : String */;
short int var161 /* : Bool */;
val* var162 /* : null */;
short int var163 /* : Bool */;
long var164 /* : Int */;
val* var165 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var166 /* : MType */;
short int var167 /* : Bool */;
int cltype168;
int idtype169;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : String */;
val* var180 /* : Array[Object] */;
long var181 /* : Int */;
val* var182 /* : NativeArray[Object] */;
val* var183 /* : String */;
val* var184 /* : MType */;
short int var185 /* : Bool */;
int cltype186;
int idtype187;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : String */;
val* var193 /* : Array[Object] */;
long var194 /* : Int */;
val* var195 /* : NativeArray[Object] */;
val* var196 /* : String */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : String */;
val* var202 /* : String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : String */;
val* var208 /* : Array[Object] */;
long var209 /* : Int */;
val* var210 /* : NativeArray[Object] */;
val* var211 /* : String */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : String */;
short int var218 /* : Bool */;
val* var219 /* : null */;
short int var220 /* : Bool */;
long var221 /* : Int */;
val* var222 /* : nullable Object */;
val* var_arg223 /* var arg: RuntimeVariable */;
val* var224 /* : MType */;
short int var225 /* : Bool */;
int cltype226;
int idtype227;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : String */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
long var236 /* : Int */;
val* var237 /* : String */;
val* var238 /* : Array[Object] */;
long var239 /* : Int */;
val* var240 /* : NativeArray[Object] */;
val* var241 /* : String */;
val* var242 /* : MType */;
short int var243 /* : Bool */;
int cltype244;
int idtype245;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
long var249 /* : Int */;
val* var250 /* : String */;
val* var251 /* : Array[Object] */;
long var252 /* : Int */;
val* var253 /* : NativeArray[Object] */;
val* var254 /* : String */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
long var258 /* : Int */;
val* var259 /* : String */;
val* var260 /* : String */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : NativeString */;
long var264 /* : Int */;
val* var265 /* : String */;
val* var266 /* : Array[Object] */;
long var267 /* : Int */;
val* var268 /* : NativeArray[Object] */;
val* var269 /* : String */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
val* var274 /* : String */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : String */;
short int var280 /* : Bool */;
val* var281 /* : AbstractCompiler */;
val* var282 /* : ModelBuilder */;
val* var283 /* : ToolContext */;
val* var284 /* : OptionBool */;
val* var285 /* : nullable Object */;
short int var286 /* : Bool */;
short int var287 /* : Bool */;
short int var_288 /* var : Bool */;
short int var289 /* : Bool */;
val* var290 /* : String */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : String */;
short int var296 /* : Bool */;
short int var_297 /* var : Bool */;
val* var298 /* : String */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
long var302 /* : Int */;
val* var303 /* : String */;
short int var304 /* : Bool */;
val* var305 /* : null */;
short int var306 /* : Bool */;
long var307 /* : Int */;
val* var308 /* : nullable Object */;
val* var_arg309 /* var arg: RuntimeVariable */;
val* var310 /* : MType */;
short int var311 /* : Bool */;
int cltype312;
int idtype313;
val* var314 /* : String */;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : NativeString */;
long var318 /* : Int */;
val* var319 /* : String */;
short int var320 /* : Bool */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
long var324 /* : Int */;
val* var325 /* : String */;
val* var326 /* : Array[Object] */;
long var327 /* : Int */;
val* var328 /* : NativeArray[Object] */;
val* var329 /* : String */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
long var333 /* : Int */;
val* var334 /* : String */;
val* var335 /* : Array[Object] */;
long var336 /* : Int */;
val* var337 /* : NativeArray[Object] */;
val* var338 /* : String */;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : NativeString */;
long var342 /* : Int */;
val* var343 /* : String */;
val* var344 /* : null */;
short int var345 /* : Bool */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : NativeString */;
long var349 /* : Int */;
val* var350 /* : String */;
val* var_r /* var r: nullable Object */;
val* var351 /* : String */;
val* var352 /* : Array[Object] */;
long var353 /* : Int */;
val* var_354 /* var : Array[Object] */;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : NativeString */;
long var358 /* : Int */;
val* var359 /* : String */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : NativeString */;
long var363 /* : Int */;
val* var364 /* : String */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
long var368 /* : Int */;
val* var369 /* : String */;
val* var370 /* : nullable Object */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
long var374 /* : Int */;
val* var375 /* : String */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
long var379 /* : Int */;
val* var380 /* : String */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
long var384 /* : Int */;
val* var385 /* : String */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
long var389 /* : Int */;
val* var390 /* : String */;
val* var391 /* : nullable Object */;
val* var392 /* : String */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
long var396 /* : Int */;
val* var397 /* : String */;
val* var398 /* : String */;
val* var_call /* var call: String */;
val* var399 /* : null */;
short int var400 /* : Bool */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
long var404 /* : Int */;
val* var405 /* : String */;
static val* varonce406;
val* var407 /* : String */;
char* var408 /* : NativeString */;
long var409 /* : Int */;
val* var410 /* : String */;
val* var411 /* : Array[Object] */;
long var412 /* : Int */;
val* var413 /* : NativeArray[Object] */;
val* var414 /* : String */;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : NativeString */;
long var418 /* : Int */;
val* var419 /* : String */;
val* var420 /* : Array[Object] */;
long var421 /* : Int */;
val* var422 /* : NativeArray[Object] */;
val* var423 /* : String */;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : NativeString */;
long var427 /* : Int */;
val* var428 /* : String */;
var_mmethod = p0;
var_arguments = p1;
var_const_color = p2;
var1 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
var2 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MMethodDef__msignature]))(var2) /* msignature on <var2:MPropDef(MMethodDef)>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1011);
show_backtrace(1);
} else {
var4 = ((long (*)(val*))(var3->class->vft[COLOR_model__MSignature__arity]))(var3) /* arity on <var3:nullable MSignature>*/;
}
var5 = 1;
{ /* Inline kernel#Int#+ (var4,var5) */
var8 = var4 + var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
{ /* Inline kernel#Int#== (var1,var6) */
var11 = var1 == var6;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (!var9) {
if (varonce) {
var12 = varonce;
} else {
var13 = "Invalid arity for ";
var14 = 18;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = ". ";
var19 = 2;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = " arguments given.";
var25 = 17;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 5;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var_mmethod;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var17;
var30 = BOX_kernel__Int(var21); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var29)->values[3] = (val*) var30;
((struct instance_array__NativeArray*)var29)->values[4] = (val*) var23;
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
var31 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__debug]))(self, var31) /* debug on <self:SeparateCompilerVisitor>*/;
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1011);
show_backtrace(1);
}
var32 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_model__MMethodDef__msignature]))(var32) /* msignature on <var32:MPropDef(MMethodDef)>*/;
var34 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var35 = ((val* (*)(val*))(var34->class->vft[COLOR_model__MPropDef__mclassdef]))(var34) /* mclassdef on <var34:MPropDef(MMethodDef)>*/;
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_model__MClassDef__bound_mtype]))(var35) /* bound_mtype on <var35:MClassDef>*/;
var37 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_model__MPropDef__mclassdef]))(var37) /* mclassdef on <var37:MPropDef(MMethodDef)>*/;
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_model__MClassDef__bound_mtype]))(var38) /* bound_mtype on <var38:MClassDef>*/;
var40 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var41 = ((val* (*)(val*))(var40->class->vft[COLOR_model__MPropDef__mclassdef]))(var40) /* mclassdef on <var40:MPropDef(MMethodDef)>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_model__MClassDef__mmodule]))(var41) /* mmodule on <var41:MClassDef>*/;
var43 = 1;
if (var33 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1014);
show_backtrace(1);
} else {
var44 = ((val* (*)(val*, val*, val*, val*, short int))(var33->class->vft[COLOR_model__MType__resolve_for]))(var33, var36, var39, var42, var43) /* resolve_for on <var33:nullable MSignature>*/;
}
var_msignature = var44;
var45 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:MSignature>*/;
var_ret = var45;
var46 = ((short int (*)(val*))(var_mmethod->class->vft[COLOR_model__MMethod__is_new]))(var_mmethod) /* is_new on <var_mmethod:MMethod>*/;
if (var46){
var47 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var48 = ((val* (*)(val*))(var47->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var47) /* mtype on <var47:nullable Object(RuntimeVariable)>*/;
var_ret = var48;
var49 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_ret) /* new_var on <self:SeparateCompilerVisitor>*/;
var_res = var49;
} else {
var50 = NULL;
if (var_ret == NULL) {
var51 = 1; /* is null */
} else {
var51 = 0; /* arg is null but recv is not */
}
if (var51){
var52 = NULL;
var_res = var52;
} else {
var53 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_ret) /* new_var on <self:SeparateCompilerVisitor>*/;
var_res = var53;
}
}
var54 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var54->class->vft[COLOR_string__Buffer__init]))(var54) /* init on <var54:Buffer>*/;
var_s = var54;
var55 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var55->class->vft[COLOR_string__Buffer__init]))(var55) /* init on <var55:Buffer>*/;
var_ss = var55;
var56 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var_recv = var56;
if (varonce57) {
var58 = varonce57;
} else {
var59 = "val*";
var60 = 4;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var58) /* append on <var_s:Buffer>*/;
var62 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var62 = array_instance Array[Object] */
var63 = 1;
var64 = NEW_array__NativeArray(var63, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var64)->values[0] = (val*) var_recv;
((void (*)(val*, val*, long))(var62->class->vft[COLOR_array__Array__with_native]))(var62, var64, var63) /* with_native on <var62:Array[Object]>*/;
}
var65 = ((val* (*)(val*))(var62->class->vft[COLOR_string__Object__to_s]))(var62) /* to_s on <var62:Array[Object]>*/;
((void (*)(val*, val*))(var_ss->class->vft[COLOR_abstract_collection__Sequence__append]))(var_ss, var65) /* append on <var_ss:Buffer>*/;
var66 = NEW_range__Range(&type_range__Rangekernel__Int);
var67 = 0;
var68 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
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
var75 = 1;
{ /* Inline kernel#Int#+ (var_i,var75) */
var78 = var_i + var75;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var79 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var76) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var_a = var79;
var80 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:MSignature>*/;
var81 = ((val* (*)(val*, long))(var80->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var80, var_i) /* [] on <var80:Array[MParameter]>*/;
var82 = ((val* (*)(val*))(var81->class->vft[COLOR_model__MParameter__mtype]))(var81) /* mtype on <var81:nullable Object(MParameter)>*/;
var_t = var82;
var83 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__vararg_rank]))(var_msignature) /* vararg_rank on <var_msignature:MSignature>*/;
{ /* Inline kernel#Int#== (var_i,var83) */
var86 = var_i == var83;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
if (var84){
var87 = 1;
{ /* Inline kernel#Int#+ (var_i,var87) */
var90 = var_i + var87;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
var91 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var88) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var92 = ((val* (*)(val*))(var91->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var91) /* mcasttype on <var91:nullable Object(RuntimeVariable)>*/;
var_t = var92;
} else {
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = ", ";
var96 = 2;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t) /* ctype on <var_t:MType>*/;
var99 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var99 = array_instance Array[Object] */
var100 = 2;
var101 = NEW_array__NativeArray(var100, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var101)->values[0] = (val*) var94;
((struct instance_array__NativeArray*)var101)->values[1] = (val*) var98;
((void (*)(val*, val*, long))(var99->class->vft[COLOR_array__Array__with_native]))(var99, var101, var100) /* with_native on <var99:Array[Object]>*/;
}
var102 = ((val* (*)(val*))(var99->class->vft[COLOR_string__Object__to_s]))(var99) /* to_s on <var99:Array[Object]>*/;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var102) /* append on <var_s:Buffer>*/;
var103 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_a, var_t) /* autobox on <self:SeparateCompilerVisitor>*/;
var_a = var103;
if (varonce104) {
var105 = varonce104;
} else {
var106 = ", ";
var107 = 2;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 2;
var111 = NEW_array__NativeArray(var110, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var111)->values[0] = (val*) var105;
((struct instance_array__NativeArray*)var111)->values[1] = (val*) var_a;
((void (*)(val*, val*, long))(var109->class->vft[COLOR_array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
}
var112 = ((val* (*)(val*))(var109->class->vft[COLOR_string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
((void (*)(val*, val*))(var_ss->class->vft[COLOR_abstract_collection__Sequence__append]))(var_ss, var112) /* append on <var_ss:Buffer>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var71->class->vft[COLOR_abstract_collection__Iterator__next]))(var71) /* next on <var71:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var115 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var116 = ((val* (*)(val*))(var115->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var115) /* modelbuilder on <var115:AbstractCompiler(SeparateCompiler)>*/;
var117 = ((val* (*)(val*))(var116->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var116) /* toolcontext on <var116:ModelBuilder>*/;
var118 = ((val* (*)(val*))(var117->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_other]))(var117) /* opt_no_check_other on <var117:ToolContext>*/;
var119 = ((val* (*)(val*))(var118->class->vft[COLOR_opts__Option__value]))(var118) /* value on <var118:OptionBool>*/;
var120 = ((struct instance_kernel__Bool*)var119)->value; /* autounbox from nullable Object to Bool */;
var121 = !var120;
var_ = var121;
if (var121){
var114 = var_;
} else {
var122 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__name]))(var_mmethod) /* name on <var_mmethod:MMethod>*/;
if (varonce123) {
var124 = varonce123;
} else {
var125 = "==";
var126 = 2;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var128 = ((short int (*)(val*, val*))(var122->class->vft[COLOR_kernel__Object___61d_61d]))(var122, var124) /* == on <var122:String>*/;
var114 = var128;
}
var_129 = var114;
if (var114){
var113 = var_129;
} else {
var130 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__name]))(var_mmethod) /* name on <var_mmethod:MMethod>*/;
if (varonce131) {
var132 = varonce131;
} else {
var133 = "!=";
var134 = 2;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = ((short int (*)(val*, val*))(var130->class->vft[COLOR_kernel__Object___61d_61d]))(var130, var132) /* == on <var130:String>*/;
var113 = var136;
}
var_consider_null = var113;
var138 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_recv) /* mcasttype on <var_recv:RuntimeVariable>*/;
/* <var138:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var138->type->table_size) {
var139 = 0;
} else {
var139 = var138->type->type_table[cltype] == idtype;
}
var_140 = var139;
if (var139){
var137 = var_consider_null;
} else {
var137 = var_140;
}
var_maybenull = var137;
if (var_maybenull){
if (varonce141) {
var142 = varonce141;
} else {
var143 = "if (";
var144 = 4;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = " == NULL) {";
var149 = 11;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
var151 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var151 = array_instance Array[Object] */
var152 = 3;
var153 = NEW_array__NativeArray(var152, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var153)->values[0] = (val*) var142;
((struct instance_array__NativeArray*)var153)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var153)->values[2] = (val*) var147;
((void (*)(val*, val*, long))(var151->class->vft[COLOR_array__Array__with_native]))(var151, var153, var152) /* with_native on <var151:Array[Object]>*/;
}
var154 = ((val* (*)(val*))(var151->class->vft[COLOR_string__Object__to_s]))(var151) /* to_s on <var151:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var154) /* add on <self:SeparateCompilerVisitor>*/;
var155 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__name]))(var_mmethod) /* name on <var_mmethod:MMethod>*/;
if (varonce156) {
var157 = varonce156;
} else {
var158 = "==";
var159 = 2;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
var161 = ((short int (*)(val*, val*))(var155->class->vft[COLOR_kernel__Object___61d_61d]))(var155, var157) /* == on <var155:String>*/;
if (var161){
var162 = NULL;
if (var_res == NULL) {
var163 = 0; /* is null */
} else {
var163 = 1; /* arg is null and recv is not */
}
if (!var163) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1047);
show_backtrace(1);
}
var164 = 1;
var165 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var164) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var_arg = var165;
var166 = ((val* (*)(val*))(var_arg->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_arg) /* mcasttype on <var_arg:RuntimeVariable>*/;
/* <var166:MType> isa MNullableType */
cltype168 = type_model__MNullableType.color;
idtype169 = type_model__MNullableType.id;
if(cltype168 >= var166->type->table_size) {
var167 = 0;
} else {
var167 = var166->type->type_table[cltype168] == idtype169;
}
if (var167){
if (varonce170) {
var171 = varonce170;
} else {
var172 = " = (";
var173 = 4;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = " == NULL);";
var178 = 10;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
var180 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var180 = array_instance Array[Object] */
var181 = 4;
var182 = NEW_array__NativeArray(var181, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var182)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var182)->values[1] = (val*) var171;
((struct instance_array__NativeArray*)var182)->values[2] = (val*) var_arg;
((struct instance_array__NativeArray*)var182)->values[3] = (val*) var176;
((void (*)(val*, val*, long))(var180->class->vft[COLOR_array__Array__with_native]))(var180, var182, var181) /* with_native on <var180:Array[Object]>*/;
}
var183 = ((val* (*)(val*))(var180->class->vft[COLOR_string__Object__to_s]))(var180) /* to_s on <var180:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var183) /* add on <self:SeparateCompilerVisitor>*/;
} else {
var184 = ((val* (*)(val*))(var_arg->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_arg) /* mcasttype on <var_arg:RuntimeVariable>*/;
/* <var184:MType> isa MNullType */
cltype186 = type_model__MNullType.color;
idtype187 = type_model__MNullType.id;
if(cltype186 >= var184->type->table_size) {
var185 = 0;
} else {
var185 = var184->type->type_table[cltype186] == idtype187;
}
if (var185){
if (varonce188) {
var189 = varonce188;
} else {
var190 = " = 1; /* is null */";
var191 = 19;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
var193 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var193 = array_instance Array[Object] */
var194 = 2;
var195 = NEW_array__NativeArray(var194, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var195)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var195)->values[1] = (val*) var189;
((void (*)(val*, val*, long))(var193->class->vft[COLOR_array__Array__with_native]))(var193, var195, var194) /* with_native on <var193:Array[Object]>*/;
}
var196 = ((val* (*)(val*))(var193->class->vft[COLOR_string__Object__to_s]))(var193) /* to_s on <var193:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var196) /* add on <self:SeparateCompilerVisitor>*/;
} else {
if (varonce197) {
var198 = varonce197;
} else {
var199 = " = 0; /* ";
var200 = 9;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
var202 = ((val* (*)(val*))(var_arg->class->vft[COLOR_string__Object__inspect]))(var_arg) /* inspect on <var_arg:RuntimeVariable>*/;
if (varonce203) {
var204 = varonce203;
} else {
var205 = " cannot be null */";
var206 = 18;
var207 = string__NativeString__to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
var208 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var208 = array_instance Array[Object] */
var209 = 4;
var210 = NEW_array__NativeArray(var209, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var210)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var210)->values[1] = (val*) var198;
((struct instance_array__NativeArray*)var210)->values[2] = (val*) var202;
((struct instance_array__NativeArray*)var210)->values[3] = (val*) var204;
((void (*)(val*, val*, long))(var208->class->vft[COLOR_array__Array__with_native]))(var208, var210, var209) /* with_native on <var208:Array[Object]>*/;
}
var211 = ((val* (*)(val*))(var208->class->vft[COLOR_string__Object__to_s]))(var208) /* to_s on <var208:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var211) /* add on <self:SeparateCompilerVisitor>*/;
}
}
} else {
var212 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__name]))(var_mmethod) /* name on <var_mmethod:MMethod>*/;
if (varonce213) {
var214 = varonce213;
} else {
var215 = "!=";
var216 = 2;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
var218 = ((short int (*)(val*, val*))(var212->class->vft[COLOR_kernel__Object___61d_61d]))(var212, var214) /* == on <var212:String>*/;
if (var218){
var219 = NULL;
if (var_res == NULL) {
var220 = 0; /* is null */
} else {
var220 = 1; /* arg is null and recv is not */
}
if (!var220) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1057);
show_backtrace(1);
}
var221 = 1;
var222 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var221) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var_arg223 = var222;
var224 = ((val* (*)(val*))(var_arg223->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_arg223) /* mcasttype on <var_arg223:RuntimeVariable>*/;
/* <var224:MType> isa MNullableType */
cltype226 = type_model__MNullableType.color;
idtype227 = type_model__MNullableType.id;
if(cltype226 >= var224->type->table_size) {
var225 = 0;
} else {
var225 = var224->type->type_table[cltype226] == idtype227;
}
if (var225){
if (varonce228) {
var229 = varonce228;
} else {
var230 = " = (";
var231 = 4;
var232 = string__NativeString__to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
if (varonce233) {
var234 = varonce233;
} else {
var235 = " != NULL);";
var236 = 10;
var237 = string__NativeString__to_s_with_length(var235, var236);
var234 = var237;
varonce233 = var234;
}
var238 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var238 = array_instance Array[Object] */
var239 = 4;
var240 = NEW_array__NativeArray(var239, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var240)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var240)->values[1] = (val*) var229;
((struct instance_array__NativeArray*)var240)->values[2] = (val*) var_arg223;
((struct instance_array__NativeArray*)var240)->values[3] = (val*) var234;
((void (*)(val*, val*, long))(var238->class->vft[COLOR_array__Array__with_native]))(var238, var240, var239) /* with_native on <var238:Array[Object]>*/;
}
var241 = ((val* (*)(val*))(var238->class->vft[COLOR_string__Object__to_s]))(var238) /* to_s on <var238:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var241) /* add on <self:SeparateCompilerVisitor>*/;
} else {
var242 = ((val* (*)(val*))(var_arg223->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_arg223) /* mcasttype on <var_arg223:RuntimeVariable>*/;
/* <var242:MType> isa MNullType */
cltype244 = type_model__MNullType.color;
idtype245 = type_model__MNullType.id;
if(cltype244 >= var242->type->table_size) {
var243 = 0;
} else {
var243 = var242->type->type_table[cltype244] == idtype245;
}
if (var243){
if (varonce246) {
var247 = varonce246;
} else {
var248 = " = 0; /* is null */";
var249 = 19;
var250 = string__NativeString__to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
var251 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var251 = array_instance Array[Object] */
var252 = 2;
var253 = NEW_array__NativeArray(var252, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var253)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var253)->values[1] = (val*) var247;
((void (*)(val*, val*, long))(var251->class->vft[COLOR_array__Array__with_native]))(var251, var253, var252) /* with_native on <var251:Array[Object]>*/;
}
var254 = ((val* (*)(val*))(var251->class->vft[COLOR_string__Object__to_s]))(var251) /* to_s on <var251:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var254) /* add on <self:SeparateCompilerVisitor>*/;
} else {
if (varonce255) {
var256 = varonce255;
} else {
var257 = " = 1; /* ";
var258 = 9;
var259 = string__NativeString__to_s_with_length(var257, var258);
var256 = var259;
varonce255 = var256;
}
var260 = ((val* (*)(val*))(var_arg223->class->vft[COLOR_string__Object__inspect]))(var_arg223) /* inspect on <var_arg223:RuntimeVariable>*/;
if (varonce261) {
var262 = varonce261;
} else {
var263 = " cannot be null */";
var264 = 18;
var265 = string__NativeString__to_s_with_length(var263, var264);
var262 = var265;
varonce261 = var262;
}
var266 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var266 = array_instance Array[Object] */
var267 = 4;
var268 = NEW_array__NativeArray(var267, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var268)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var268)->values[1] = (val*) var256;
((struct instance_array__NativeArray*)var268)->values[2] = (val*) var260;
((struct instance_array__NativeArray*)var268)->values[3] = (val*) var262;
((void (*)(val*, val*, long))(var266->class->vft[COLOR_array__Array__with_native]))(var266, var268, var267) /* with_native on <var266:Array[Object]>*/;
}
var269 = ((val* (*)(val*))(var266->class->vft[COLOR_string__Object__to_s]))(var266) /* to_s on <var266:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var269) /* add on <self:SeparateCompilerVisitor>*/;
}
}
} else {
if (varonce270) {
var271 = varonce270;
} else {
var272 = "Receiver is null";
var273 = 16;
var274 = string__NativeString__to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(self, var271) /* add_abort on <self:SeparateCompilerVisitor>*/;
}
}
if (varonce275) {
var276 = varonce275;
} else {
var277 = "} else {";
var278 = 8;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var276) /* add on <self:SeparateCompilerVisitor>*/;
} else {
}
var281 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var282 = ((val* (*)(val*))(var281->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var281) /* modelbuilder on <var281:AbstractCompiler(SeparateCompiler)>*/;
var283 = ((val* (*)(val*))(var282->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var282) /* toolcontext on <var282:ModelBuilder>*/;
var284 = ((val* (*)(val*))(var283->class->vft[COLOR_separate_compiler__ToolContext__opt_no_shortcut_equate]))(var283) /* opt_no_shortcut_equate on <var283:ToolContext>*/;
var285 = ((val* (*)(val*))(var284->class->vft[COLOR_opts__Option__value]))(var284) /* value on <var284:OptionBool>*/;
var286 = ((struct instance_kernel__Bool*)var285)->value; /* autounbox from nullable Object to Bool */;
var287 = !var286;
var_288 = var287;
if (var287){
var290 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__name]))(var_mmethod) /* name on <var_mmethod:MMethod>*/;
if (varonce291) {
var292 = varonce291;
} else {
var293 = "==";
var294 = 2;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
var296 = ((short int (*)(val*, val*))(var290->class->vft[COLOR_kernel__Object___61d_61d]))(var290, var292) /* == on <var290:String>*/;
var_297 = var296;
if (var296){
var289 = var_297;
} else {
var298 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__name]))(var_mmethod) /* name on <var_mmethod:MMethod>*/;
if (varonce299) {
var300 = varonce299;
} else {
var301 = "!=";
var302 = 2;
var303 = string__NativeString__to_s_with_length(var301, var302);
var300 = var303;
varonce299 = var300;
}
var304 = ((short int (*)(val*, val*))(var298->class->vft[COLOR_kernel__Object___61d_61d]))(var298, var300) /* == on <var298:String>*/;
var289 = var304;
}
var280 = var289;
} else {
var280 = var_288;
}
if (var280){
var305 = NULL;
if (var_res == NULL) {
var306 = 0; /* is null */
} else {
var306 = 1; /* arg is null and recv is not */
}
if (!var306) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1072);
show_backtrace(1);
}
var307 = 1;
var308 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var307) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var_arg309 = var308;
var310 = ((val* (*)(val*))(var_arg309->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_arg309) /* mcasttype on <var_arg309:RuntimeVariable>*/;
/* <var310:MType> isa MNullType */
cltype312 = type_model__MNullType.color;
idtype313 = type_model__MNullType.id;
if(cltype312 >= var310->type->table_size) {
var311 = 0;
} else {
var311 = var310->type->type_table[cltype312] == idtype313;
}
if (var311){
var314 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__name]))(var_mmethod) /* name on <var_mmethod:MMethod>*/;
if (varonce315) {
var316 = varonce315;
} else {
var317 = "==";
var318 = 2;
var319 = string__NativeString__to_s_with_length(var317, var318);
var316 = var319;
varonce315 = var316;
}
var320 = ((short int (*)(val*, val*))(var314->class->vft[COLOR_kernel__Object___61d_61d]))(var314, var316) /* == on <var314:String>*/;
if (var320){
if (varonce321) {
var322 = varonce321;
} else {
var323 = " = 0; /* arg is null but recv is not */";
var324 = 39;
var325 = string__NativeString__to_s_with_length(var323, var324);
var322 = var325;
varonce321 = var322;
}
var326 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var326 = array_instance Array[Object] */
var327 = 2;
var328 = NEW_array__NativeArray(var327, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var328)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var328)->values[1] = (val*) var322;
((void (*)(val*, val*, long))(var326->class->vft[COLOR_array__Array__with_native]))(var326, var328, var327) /* with_native on <var326:Array[Object]>*/;
}
var329 = ((val* (*)(val*))(var326->class->vft[COLOR_string__Object__to_s]))(var326) /* to_s on <var326:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var329) /* add on <self:SeparateCompilerVisitor>*/;
} else {
if (varonce330) {
var331 = varonce330;
} else {
var332 = " = 1; /* arg is null and recv is not */";
var333 = 39;
var334 = string__NativeString__to_s_with_length(var332, var333);
var331 = var334;
varonce330 = var331;
}
var335 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var335 = array_instance Array[Object] */
var336 = 2;
var337 = NEW_array__NativeArray(var336, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var337)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var337)->values[1] = (val*) var331;
((void (*)(val*, val*, long))(var335->class->vft[COLOR_array__Array__with_native]))(var335, var337, var336) /* with_native on <var335:Array[Object]>*/;
}
var338 = ((val* (*)(val*))(var335->class->vft[COLOR_string__Object__to_s]))(var335) /* to_s on <var335:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var338) /* add on <self:SeparateCompilerVisitor>*/;
}
if (var_maybenull){
if (varonce339) {
var340 = varonce339;
} else {
var341 = "}";
var342 = 1;
var343 = string__NativeString__to_s_with_length(var341, var342);
var340 = var343;
varonce339 = var340;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var340) /* add on <self:SeparateCompilerVisitor>*/;
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var344 = NULL;
if (var_ret == NULL) {
var345 = 1; /* is null */
} else {
var345 = 0; /* arg is null but recv is not */
}
if (var345){
if (varonce346) {
var347 = varonce346;
} else {
var348 = "void";
var349 = 4;
var350 = string__NativeString__to_s_with_length(var348, var349);
var347 = var350;
varonce346 = var347;
}
var_r = var347;
} else {
var351 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MType)>*/;
var_r = var351;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var_const_color) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var352 = NEW_array__Array(&type_array__Arraykernel__Object);
var353 = 15;
((void (*)(val*, long))(var352->class->vft[COLOR_array__Array__with_capacity]))(var352, var353) /* with_capacity on <var352:Array[Object]>*/;
var_354 = var352;
if (varonce355) {
var356 = varonce355;
} else {
var357 = "((";
var358 = 2;
var359 = string__NativeString__to_s_with_length(var357, var358);
var356 = var359;
varonce355 = var356;
}
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var356) /* add on <var_354:Array[Object]>*/;
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var_r) /* add on <var_354:Array[Object]>*/;
if (varonce360) {
var361 = varonce360;
} else {
var362 = " (*)(";
var363 = 5;
var364 = string__NativeString__to_s_with_length(var362, var363);
var361 = var364;
varonce360 = var361;
}
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var361) /* add on <var_354:Array[Object]>*/;
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var_s) /* add on <var_354:Array[Object]>*/;
if (varonce365) {
var366 = varonce365;
} else {
var367 = "))(";
var368 = 3;
var369 = string__NativeString__to_s_with_length(var367, var368);
var366 = var369;
varonce365 = var366;
}
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var366) /* add on <var_354:Array[Object]>*/;
var370 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var370) /* add on <var_354:Array[Object]>*/;
if (varonce371) {
var372 = varonce371;
} else {
var373 = "->class->vft[";
var374 = 13;
var375 = string__NativeString__to_s_with_length(var373, var374);
var372 = var375;
varonce371 = var372;
}
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var372) /* add on <var_354:Array[Object]>*/;
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var_const_color) /* add on <var_354:Array[Object]>*/;
if (varonce376) {
var377 = varonce376;
} else {
var378 = "]))(";
var379 = 4;
var380 = string__NativeString__to_s_with_length(var378, var379);
var377 = var380;
varonce376 = var377;
}
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var377) /* add on <var_354:Array[Object]>*/;
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var_ss) /* add on <var_354:Array[Object]>*/;
if (varonce381) {
var382 = varonce381;
} else {
var383 = ") /* ";
var384 = 5;
var385 = string__NativeString__to_s_with_length(var383, var384);
var382 = var385;
varonce381 = var382;
}
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var382) /* add on <var_354:Array[Object]>*/;
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var_mmethod) /* add on <var_354:Array[Object]>*/;
if (varonce386) {
var387 = varonce386;
} else {
var388 = " on ";
var389 = 4;
var390 = string__NativeString__to_s_with_length(var388, var389);
var387 = var390;
varonce386 = var387;
}
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var387) /* add on <var_354:Array[Object]>*/;
var391 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var392 = ((val* (*)(val*))(var391->class->vft[COLOR_string__Object__inspect]))(var391) /* inspect on <var391:nullable Object(RuntimeVariable)>*/;
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var392) /* add on <var_354:Array[Object]>*/;
if (varonce393) {
var394 = varonce393;
} else {
var395 = "*/";
var396 = 2;
var397 = string__NativeString__to_s_with_length(var395, var396);
var394 = var397;
varonce393 = var394;
}
((void (*)(val*, val*))(var_354->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_354, var394) /* add on <var_354:Array[Object]>*/;
var398 = ((val* (*)(val*))(var_354->class->vft[COLOR_string__Object__to_s]))(var_354) /* to_s on <var_354:Array[Object]>*/;
var_call = var398;
var399 = NULL;
if (var_res == NULL) {
var400 = 0; /* is null */
} else {
var400 = 1; /* arg is null and recv is not */
}
if (var400){
if (varonce401) {
var402 = varonce401;
} else {
var403 = " = ";
var404 = 3;
var405 = string__NativeString__to_s_with_length(var403, var404);
var402 = var405;
varonce401 = var402;
}
if (varonce406) {
var407 = varonce406;
} else {
var408 = ";";
var409 = 1;
var410 = string__NativeString__to_s_with_length(var408, var409);
var407 = var410;
varonce406 = var407;
}
var411 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var411 = array_instance Array[Object] */
var412 = 4;
var413 = NEW_array__NativeArray(var412, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var413)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var413)->values[1] = (val*) var402;
((struct instance_array__NativeArray*)var413)->values[2] = (val*) var_call;
((struct instance_array__NativeArray*)var413)->values[3] = (val*) var407;
((void (*)(val*, val*, long))(var411->class->vft[COLOR_array__Array__with_native]))(var411, var413, var412) /* with_native on <var411:Array[Object]>*/;
}
var414 = ((val* (*)(val*))(var411->class->vft[COLOR_string__Object__to_s]))(var411) /* to_s on <var411:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var414) /* add on <self:SeparateCompilerVisitor>*/;
} else {
if (varonce415) {
var416 = varonce415;
} else {
var417 = ";";
var418 = 1;
var419 = string__NativeString__to_s_with_length(var417, var418);
var416 = var419;
varonce415 = var416;
}
var420 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var420 = array_instance Array[Object] */
var421 = 2;
var422 = NEW_array__NativeArray(var421, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var422)->values[0] = (val*) var_call;
((struct instance_array__NativeArray*)var422)->values[1] = (val*) var416;
((void (*)(val*, val*, long))(var420->class->vft[COLOR_array__Array__with_native]))(var420, var422, var421) /* with_native on <var420:Array[Object]>*/;
}
var423 = ((val* (*)(val*))(var420->class->vft[COLOR_string__Object__to_s]))(var420) /* to_s on <var420:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var423) /* add on <self:SeparateCompilerVisitor>*/;
}
if (var_maybenull){
if (varonce424) {
var425 = varonce424;
} else {
var426 = "}";
var427 = 1;
var428 = string__NativeString__to_s_with_length(var426, var427);
var425 = var428;
varonce424 = var425;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var425) /* add on <self:SeparateCompilerVisitor>*/;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#table_send for (self: Object, MMethod, Array[RuntimeVariable], String): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__table_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__table_send(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#call for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
long var1 /* : Int */;
val* var2 /* : nullable MSignature */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
long var20 /* : Int */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : Object */;
val* var30 /* : String */;
val* var31 /* : nullable MSignature */;
val* var32 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var33 /* : MProperty */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var36 /* : MType */;
val* var37 /* : RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var38 /* : null */;
short int var39 /* : Bool */;
val* var40 /* : null */;
val* var41 /* : MClassDef */;
val* var42 /* : MClassType */;
val* var43 /* : MClassDef */;
val* var44 /* : MClassType */;
val* var45 /* : MClassDef */;
val* var46 /* : MModule */;
short int var47 /* : Bool */;
val* var48 /* : MType */;
val* var49 /* : RuntimeVariable */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : AbstractCompiler */;
val* var53 /* : ModelBuilder */;
val* var54 /* : HashMap[MPropDef, APropdef] */;
short int var55 /* : Bool */;
short int var_ /* var : Bool */;
val* var56 /* : AbstractCompiler */;
val* var57 /* : ModelBuilder */;
val* var58 /* : HashMap[MPropDef, APropdef] */;
val* var59 /* : nullable Object */;
short int var60 /* : Bool */;
int cltype;
int idtype;
short int var_61 /* var : Bool */;
val* var62 /* : AbstractCompiler */;
val* var63 /* : ModelBuilder */;
val* var64 /* : ToolContext */;
val* var65 /* : OptionBool */;
val* var66 /* : nullable Object */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : Frame */;
val* var_frame /* var frame: Frame */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var100 /* : NativeArray[Object] */;
val* var101 /* : String */;
val* var102 /* : nullable RuntimeVariable */;
val* var103 /* : nullable String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
val* var109 /* : Array[Object] */;
long var110 /* : Int */;
val* var111 /* : NativeArray[Object] */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var119 /* : null */;
short int var120 /* : Bool */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
val* var138 /* : Array[Object] */;
long var139 /* : Int */;
val* var140 /* : NativeArray[Object] */;
val* var141 /* : String */;
val* var142 /* : null */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : String */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : String */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : String */;
val* var165 /* : Array[Object] */;
long var166 /* : Int */;
val* var167 /* : NativeArray[Object] */;
val* var168 /* : String */;
var_mmethoddef = p0;
var_recvtype = p1;
var_arguments = p2;
var1 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
var2 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1108);
show_backtrace(1);
} else {
var3 = ((long (*)(val*))(var2->class->vft[COLOR_model__MSignature__arity]))(var2) /* arity on <var2:nullable MSignature>*/;
}
var4 = 1;
{ /* Inline kernel#Int#+ (var3,var4) */
var7 = var3 + var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
{ /* Inline kernel#Int#== (var1,var5) */
var10 = var1 == var5;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (!var8) {
if (varonce) {
var11 = varonce;
} else {
var12 = "Invalid arity for ";
var13 = 18;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = ". ";
var18 = 2;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = " arguments given.";
var24 = 17;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 5;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var_mmethoddef;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var16;
var29 = BOX_kernel__Int(var20); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var28)->values[3] = (val*) var29;
((struct instance_array__NativeArray*)var28)->values[4] = (val*) var22;
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
}
var30 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__debug]))(self, var30) /* debug on <self:SeparateCompilerVisitor>*/;
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1108);
show_backtrace(1);
}
var31 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var31 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1111);
show_backtrace(1);
} else {
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_model__MSignature__return_mtype]))(var31) /* return_mtype on <var31:nullable MSignature>*/;
}
var_ret = var32;
var33 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var34 = ((short int (*)(val*))(var33->class->vft[COLOR_model__MMethod__is_new]))(var33) /* is_new on <var33:MProperty(MMethod)>*/;
if (var34){
var35 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var35) /* mtype on <var35:nullable Object(RuntimeVariable)>*/;
var_ret = var36;
var37 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_ret) /* new_var on <self:SeparateCompilerVisitor>*/;
var_res = var37;
} else {
var38 = NULL;
if (var_ret == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (var39){
var40 = NULL;
var_res = var40;
} else {
var41 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_model__MClassDef__bound_mtype]))(var41) /* bound_mtype on <var41:MClassDef>*/;
var43 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var44 = ((val* (*)(val*))(var43->class->vft[COLOR_model__MClassDef__bound_mtype]))(var43) /* bound_mtype on <var43:MClassDef>*/;
var45 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_model__MClassDef__mmodule]))(var45) /* mmodule on <var45:MClassDef>*/;
var47 = 1;
var48 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret->class->vft[COLOR_model__MType__resolve_for]))(var_ret, var42, var44, var46, var47) /* resolve_for on <var_ret:nullable MType(MType)>*/;
var_ret = var48;
var49 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_ret) /* new_var on <self:SeparateCompilerVisitor>*/;
var_res = var49;
}
}
var52 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var52) /* modelbuilder on <var52:AbstractCompiler(SeparateCompiler)>*/;
var54 = ((val* (*)(val*))(var53->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var53) /* mpropdef2npropdef on <var53:ModelBuilder>*/;
var55 = ((short int (*)(val*, val*))(var54->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var54, var_mmethoddef) /* has_key on <var54:HashMap[MPropDef, APropdef]>*/;
var_ = var55;
if (var55){
var56 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var56) /* modelbuilder on <var56:AbstractCompiler(SeparateCompiler)>*/;
var58 = ((val* (*)(val*))(var57->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var57) /* mpropdef2npropdef on <var57:ModelBuilder>*/;
var59 = ((val* (*)(val*, val*))(var58->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var58, var_mmethoddef) /* [] on <var58:HashMap[MPropDef, APropdef]>*/;
/* <var59:nullable Object(APropdef)> isa AInternMethPropdef */
cltype = type_parser_nodes__AInternMethPropdef.color;
idtype = type_parser_nodes__AInternMethPropdef.id;
if(cltype >= var59->type->table_size) {
var60 = 0;
} else {
var60 = var59->type->type_table[cltype] == idtype;
}
var51 = var60;
} else {
var51 = var_;
}
var_61 = var51;
if (var51){
var62 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var63 = ((val* (*)(val*))(var62->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var62) /* modelbuilder on <var62:AbstractCompiler(SeparateCompiler)>*/;
var64 = ((val* (*)(val*))(var63->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var63) /* toolcontext on <var63:ModelBuilder>*/;
var65 = ((val* (*)(val*))(var64->class->vft[COLOR_separate_compiler__ToolContext__opt_no_inline_intern]))(var64) /* opt_no_inline_intern on <var64:ToolContext>*/;
var66 = ((val* (*)(val*))(var65->class->vft[COLOR_opts__Option__value]))(var65) /* value on <var65:OptionBool>*/;
var67 = ((struct instance_kernel__Bool*)var66)->value; /* autounbox from nullable Object to Bool */;
var68 = !var67;
var50 = var68;
} else {
var50 = var_61;
}
if (var50){
var69 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
((void (*)(val*, val*, val*, val*, val*))(var69->class->vft[COLOR_abstract_compiler__Frame__init]))(var69, self, var_mmethoddef, var_recvtype, var_arguments) /* init on <var69:Frame>*/;
var_frame = var69;
if (varonce70) {
var71 = varonce70;
} else {
var72 = "RET_LABEL";
var73 = 9;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var71) /* get_name on <self:SeparateCompilerVisitor>*/;
((void (*)(val*, val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnlabel_61d]))(var_frame, var75) /* returnlabel= on <var_frame:Frame>*/;
((void (*)(val*, val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnvar_61d]))(var_frame, var_res) /* returnvar= on <var_frame:Frame>*/;
var76 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateCompilerVisitor>*/;
var_old_frame = var76;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(self, var_frame) /* frame= on <self:SeparateCompilerVisitor>*/;
if (varonce77) {
var78 = varonce77;
} else {
var79 = "{ /* Inline ";
var80 = 12;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = " (";
var85 = 2;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = ",";
var90 = 1;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var88) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce93) {
var94 = varonce93;
} else {
var95 = ") */";
var96 = 4;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var98 = array_instance Array[Object] */
var99 = 5;
var100 = NEW_array__NativeArray(var99, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var100)->values[0] = (val*) var78;
((struct instance_array__NativeArray*)var100)->values[1] = (val*) var_mmethoddef;
((struct instance_array__NativeArray*)var100)->values[2] = (val*) var83;
((struct instance_array__NativeArray*)var100)->values[3] = (val*) var92;
((struct instance_array__NativeArray*)var100)->values[4] = (val*) var94;
((void (*)(val*, val*, long))(var98->class->vft[COLOR_array__Array__with_native]))(var98, var100, var99) /* with_native on <var98:Array[Object]>*/;
}
var101 = ((val* (*)(val*))(var98->class->vft[COLOR_string__Object__to_s]))(var98) /* to_s on <var98:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var101) /* add on <self:SeparateCompilerVisitor>*/;
var102 = ((val* (*)(val*, val*, val*))(var_mmethoddef->class->vft[COLOR_abstract_compiler__MMethodDef__compile_inside_to_c]))(var_mmethoddef, self, var_arguments) /* compile_inside_to_c on <var_mmethoddef:MMethodDef>*/;
var102;
var103 = ((val* (*)(val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnlabel]))(var_frame) /* returnlabel on <var_frame:Frame>*/;
if (var103 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1132);
show_backtrace(1);
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = ":(void)0;";
var107 = 9;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 2;
var111 = NEW_array__NativeArray(var110, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var111)->values[0] = (val*) var103;
((struct instance_array__NativeArray*)var111)->values[1] = (val*) var105;
((void (*)(val*, val*, long))(var109->class->vft[COLOR_array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
}
var112 = ((val* (*)(val*))(var109->class->vft[COLOR_string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var112) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce113) {
var114 = varonce113;
} else {
var115 = "}";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var114) /* add on <self:SeparateCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(self, var_old_frame) /* frame= on <self:SeparateCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(self, var_mmethoddef, var_arguments) /* adapt_signature on <self:SeparateCompilerVisitor>*/;
var118 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var_mmethoddef) /* c_name on <var_mmethoddef:MMethodDef>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var118) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var119 = NULL;
if (var_res == NULL) {
var120 = 1; /* is null */
} else {
var120 = 0; /* arg is null but recv is not */
}
if (var120){
var121 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var_mmethoddef) /* c_name on <var_mmethoddef:MMethodDef>*/;
if (varonce122) {
var123 = varonce122;
} else {
var124 = "(";
var125 = 1;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = ", ";
var130 = 2;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var128) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce133) {
var134 = varonce133;
} else {
var135 = ");";
var136 = 2;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
var138 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var138 = array_instance Array[Object] */
var139 = 4;
var140 = NEW_array__NativeArray(var139, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var140)->values[0] = (val*) var121;
((struct instance_array__NativeArray*)var140)->values[1] = (val*) var123;
((struct instance_array__NativeArray*)var140)->values[2] = (val*) var132;
((struct instance_array__NativeArray*)var140)->values[3] = (val*) var134;
((void (*)(val*, val*, long))(var138->class->vft[COLOR_array__Array__with_native]))(var138, var140, var139) /* with_native on <var138:Array[Object]>*/;
}
var141 = ((val* (*)(val*))(var138->class->vft[COLOR_string__Object__to_s]))(var138) /* to_s on <var138:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var141) /* add on <self:SeparateCompilerVisitor>*/;
var142 = NULL;
var = var142;
goto RET_LABEL;
} else {
if (varonce143) {
var144 = varonce143;
} else {
var145 = " = ";
var146 = 3;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var_mmethoddef) /* c_name on <var_mmethoddef:MMethodDef>*/;
if (varonce149) {
var150 = varonce149;
} else {
var151 = "(";
var152 = 1;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
if (varonce154) {
var155 = varonce154;
} else {
var156 = ", ";
var157 = 2;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
var159 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var155) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce160) {
var161 = varonce160;
} else {
var162 = ");";
var163 = 2;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
var165 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var165 = array_instance Array[Object] */
var166 = 6;
var167 = NEW_array__NativeArray(var166, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var167)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var167)->values[1] = (val*) var144;
((struct instance_array__NativeArray*)var167)->values[2] = (val*) var148;
((struct instance_array__NativeArray*)var167)->values[3] = (val*) var150;
((struct instance_array__NativeArray*)var167)->values[4] = (val*) var159;
((struct instance_array__NativeArray*)var167)->values[5] = (val*) var161;
((void (*)(val*, val*, long))(var165->class->vft[COLOR_array__Array__with_native]))(var165, var167, var166) /* with_native on <var165:Array[Object]>*/;
}
var168 = ((val* (*)(val*))(var165->class->vft[COLOR_string__Object__to_s]))(var165) /* to_s on <var165:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var168) /* add on <self:SeparateCompilerVisitor>*/;
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#call for (self: Object, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__call(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#supercall for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
short int var8 /* : Bool */;
val* var9 /* : AbstractCompiler */;
val* var10 /* : MModule */;
val* var_main /* var main: MModule */;
val* var11 /* : AbstractCompiler */;
val* var12 /* : AbstractCompiler */;
val* var13 /* : MModule */;
val* var14 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var15 /* : AbstractCompiler */;
val* var16 /* : MProperty */;
val* var17 /* : String */;
val* var18 /* : nullable RuntimeVariable */;
var_m = p0;
var_recvtype = p1;
var_arguments = p2;
var1 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var1) /* mcasttype on <var1:nullable Object(RuntimeVariable)>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__MType__ctype]))(var2) /* ctype on <var2:MType>*/;
if (varonce) {
var4 = varonce;
} else {
var5 = "val*";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___33d_61d]))(var3, var4) /* != on <var3:String>*/;
if (var8){
var9 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var9) /* mainmodule on <var9:AbstractCompiler(SeparateCompiler)>*/;
var_main = var10;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_compiler__AbstractCompiler__realmainmodule]))(var12) /* realmainmodule on <var12:AbstractCompiler(SeparateCompiler)>*/;
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule_61d]))(var11, var13) /* mainmodule= on <var11:AbstractCompiler(SeparateCompiler)>*/;
var14 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send]))(self, var_m, var_recvtype, var_arguments) /* monomorphic_super_send on <self:SeparateCompilerVisitor>*/;
var_res = var14;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
((void (*)(val*, val*))(var15->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule_61d]))(var15, var_main) /* mainmodule= on <var15:AbstractCompiler(SeparateCompiler)>*/;
var = var_res;
goto RET_LABEL;
} else {
}
var16 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MPropDef__mproperty]))(var_m) /* mproperty on <var_m:MMethodDef>*/;
var17 = ((val* (*)(val*))(var_m->class->vft[COLOR_separate_compiler__MPropDef__const_color]))(var_m) /* const_color on <var_m:MMethodDef>*/;
var18 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__table_send]))(self, var16, var_arguments, var17) /* table_send on <self:SeparateCompilerVisitor>*/;
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#supercall for (self: Object, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__supercall(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#vararg_instance for (self: SeparateCompilerVisitor, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_varargs /* var varargs: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
val* var2 /* : Frame */;
val* var3 /* : MClassDef */;
val* var4 /* : MClassType */;
val* var5 /* : Array[RuntimeVariable] */;
long var6 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: Frame */;
val* var7 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
var_mpropdef = p0;
var_recv = p1;
var_varargs = p2;
var_elttype = p3;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateCompilerVisitor>*/;
var_old_frame = var1;
var2 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
var3 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MPropDef>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClassDef__bound_mtype]))(var3) /* bound_mtype on <var3:MClassDef>*/;
var5 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var6 = 1;
((void (*)(val*, long))(var5->class->vft[COLOR_array__Array__with_capacity]))(var5, var6) /* with_capacity on <var5:Array[RuntimeVariable]>*/;
var_ = var5;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_recv) /* push on <var_:Array[RuntimeVariable]>*/;
((void (*)(val*, val*, val*, val*, val*))(var2->class->vft[COLOR_abstract_compiler__Frame__init]))(var2, self, var_mpropdef, var4, var_) /* init on <var2:Frame>*/;
var_frame = var2;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(self, var_frame) /* frame= on <self:SeparateCompilerVisitor>*/;
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__array_instance]))(self, var_varargs, var_elttype) /* array_instance on <self:SeparateCompilerVisitor>*/;
var_res = var7;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(self, var_old_frame) /* frame= on <self:SeparateCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#vararg_instance for (self: Object, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__vararg_instance(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#isset_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : MPropDef */;
val* var4 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var5 /* : MPropDef */;
val* var6 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var7 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MModule */;
short int var10 /* : Bool */;
val* var11 /* : MType */;
short int var12 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : AbstractCompiler */;
val* var34 /* : ModelBuilder */;
val* var35 /* : ToolContext */;
val* var36 /* : OptionBool */;
val* var37 /* : nullable Object */;
short int var38 /* : Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
val* var66 /* : Array[Object] */;
long var67 /* : Int */;
val* var68 /* : NativeArray[Object] */;
val* var69 /* : String */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
short int var76 /* : Bool */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : String */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : String */;
val* var104 /* : Array[Object] */;
long var105 /* : Int */;
val* var106 /* : NativeArray[Object] */;
val* var107 /* : String */;
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
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : String */;
val* var124 /* : Array[Object] */;
long var125 /* : Int */;
val* var126 /* : NativeArray[Object] */;
val* var127 /* : String */;
var_a = p0;
var_recv = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull]))(self, var_recv) /* check_recv_notnull on <self:SeparateCompilerVisitor>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__bool_type]))(self) /* bool_type on <self:SeparateCompilerVisitor>*/;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var1) /* new_var on <self:SeparateCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var3) /* static_mtype on <var3:MPropDef(MAttributeDef)>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1191);
show_backtrace(1);
}
var_mtype = var4;
var5 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MPropDef__mclassdef]))(var5) /* mclassdef on <var5:MPropDef(MAttributeDef)>*/;
var_intromclassdef = var6;
var7 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_intromclassdef) /* bound_mtype on <var_intromclassdef:MClassDef>*/;
var8 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_intromclassdef) /* bound_mtype on <var_intromclassdef:MClassDef>*/;
var9 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__mmodule]))(var_intromclassdef) /* mmodule on <var_intromclassdef:MClassDef>*/;
var10 = 1;
var11 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var7, var8, var9, var10) /* resolve_for on <var_mtype:MType>*/;
var_mtype = var11;
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var12 = 0;
} else {
var12 = var_mtype->type->type_table[cltype] == idtype;
}
if (var12){
if (varonce) {
var13 = varonce;
} else {
var14 = " = 1; /* easy isset: ";
var15 = 21;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " on ";
var20 = 4;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = " */";
var26 = 3;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 6;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var13;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var_a;
((struct instance_array__NativeArray*)var30)->values[3] = (val*) var18;
((struct instance_array__NativeArray*)var30)->values[4] = (val*) var22;
((struct instance_array__NativeArray*)var30)->values[5] = (val*) var24;
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var31) /* add on <self:SeparateCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
}
var32 = ((val* (*)(val*))(var_a->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_a) /* const_color on <var_a:MAttribute>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var32) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var33 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var33) /* modelbuilder on <var33:AbstractCompiler(SeparateCompiler)>*/;
var35 = ((val* (*)(val*))(var34->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var34) /* toolcontext on <var34:ModelBuilder>*/;
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_separate_compiler__ToolContext__opt_no_union_attribute]))(var35) /* opt_no_union_attribute on <var35:ToolContext>*/;
var37 = ((val* (*)(val*))(var36->class->vft[COLOR_opts__Option__value]))(var36) /* value on <var36:OptionBool>*/;
var38 = ((struct instance_kernel__Bool*)var37)->value; /* autounbox from nullable Object to Bool */;
if (var38){
if (varonce39) {
var40 = varonce39;
} else {
var41 = " = ";
var42 = 3;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "->attrs[";
var47 = 8;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = ((val* (*)(val*))(var_a->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_a) /* const_color on <var_a:MAttribute>*/;
if (varonce50) {
var51 = varonce50;
} else {
var52 = "] != NULL; /* ";
var53 = 14;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = " on ";
var58 = 4;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce61) {
var62 = varonce61;
} else {
var63 = "*/";
var64 = 2;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var66 = array_instance Array[Object] */
var67 = 10;
var68 = NEW_array__NativeArray(var67, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var68)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var68)->values[1] = (val*) var40;
((struct instance_array__NativeArray*)var68)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var68)->values[3] = (val*) var45;
((struct instance_array__NativeArray*)var68)->values[4] = (val*) var49;
((struct instance_array__NativeArray*)var68)->values[5] = (val*) var51;
((struct instance_array__NativeArray*)var68)->values[6] = (val*) var_a;
((struct instance_array__NativeArray*)var68)->values[7] = (val*) var56;
((struct instance_array__NativeArray*)var68)->values[8] = (val*) var60;
((struct instance_array__NativeArray*)var68)->values[9] = (val*) var62;
((void (*)(val*, val*, long))(var66->class->vft[COLOR_array__Array__with_native]))(var66, var68, var67) /* with_native on <var66:Array[Object]>*/;
}
var69 = ((val* (*)(val*))(var66->class->vft[COLOR_string__Object__to_s]))(var66) /* to_s on <var66:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var69) /* add on <self:SeparateCompilerVisitor>*/;
} else {
var70 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce71) {
var72 = varonce71;
} else {
var73 = "val*";
var74 = 4;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = ((short int (*)(val*, val*))(var70->class->vft[COLOR_kernel__Object___61d_61d]))(var70, var72) /* == on <var70:String>*/;
if (var76){
if (varonce77) {
var78 = varonce77;
} else {
var79 = " = ";
var80 = 3;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = "->attrs[";
var85 = 8;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var87 = ((val* (*)(val*))(var_a->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_a) /* const_color on <var_a:MAttribute>*/;
if (varonce88) {
var89 = varonce88;
} else {
var90 = "].val != NULL; /* ";
var91 = 18;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = " on ";
var96 = 4;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce99) {
var100 = varonce99;
} else {
var101 = " */";
var102 = 3;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
var104 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 10;
var106 = NEW_array__NativeArray(var105, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var106)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var106)->values[1] = (val*) var78;
((struct instance_array__NativeArray*)var106)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var106)->values[3] = (val*) var83;
((struct instance_array__NativeArray*)var106)->values[4] = (val*) var87;
((struct instance_array__NativeArray*)var106)->values[5] = (val*) var89;
((struct instance_array__NativeArray*)var106)->values[6] = (val*) var_a;
((struct instance_array__NativeArray*)var106)->values[7] = (val*) var94;
((struct instance_array__NativeArray*)var106)->values[8] = (val*) var98;
((struct instance_array__NativeArray*)var106)->values[9] = (val*) var100;
((void (*)(val*, val*, long))(var104->class->vft[COLOR_array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
var107 = ((val* (*)(val*))(var104->class->vft[COLOR_string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var107) /* add on <self:SeparateCompilerVisitor>*/;
} else {
if (varonce108) {
var109 = varonce108;
} else {
var110 = " = 1; /* NOT YET IMPLEMENTED: isset of primitives: ";
var111 = 51;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = " on ";
var116 = 4;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce119) {
var120 = varonce119;
} else {
var121 = " */";
var122 = 3;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
var124 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var124 = array_instance Array[Object] */
var125 = 6;
var126 = NEW_array__NativeArray(var125, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var126)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var126)->values[1] = (val*) var109;
((struct instance_array__NativeArray*)var126)->values[2] = (val*) var_a;
((struct instance_array__NativeArray*)var126)->values[3] = (val*) var114;
((struct instance_array__NativeArray*)var126)->values[4] = (val*) var118;
((struct instance_array__NativeArray*)var126)->values[5] = (val*) var120;
((void (*)(val*, val*, long))(var124->class->vft[COLOR_array__Array__with_native]))(var124, var126, var125) /* with_native on <var124:Array[Object]>*/;
}
var127 = ((val* (*)(val*))(var124->class->vft[COLOR_string__Object__to_s]))(var124) /* to_s on <var124:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var127) /* add on <self:SeparateCompilerVisitor>*/;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#isset_attribute for (self: Object, MAttribute, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__isset_attribute(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#read_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__read_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : MPropDef */;
val* var2 /* : nullable MType */;
val* var_ret /* var ret: MType */;
val* var3 /* : MPropDef */;
val* var4 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var5 /* : MClassType */;
val* var6 /* : MClassType */;
val* var7 /* : MModule */;
short int var8 /* : Bool */;
val* var9 /* : MType */;
val* var10 /* : String */;
val* var11 /* : AbstractCompiler */;
val* var12 /* : ModelBuilder */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
val* var17 /* : MClassType */;
val* var18 /* : MType */;
val* var_cret /* var cret: MType */;
val* var19 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
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
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
int cltype;
int idtype;
short int var52 /* : Bool */;
short int var_ /* var : Bool */;
val* var53 /* : AbstractCompiler */;
val* var54 /* : ModelBuilder */;
val* var55 /* : ToolContext */;
val* var56 /* : OptionBool */;
val* var57 /* : nullable Object */;
short int var58 /* : Bool */;
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
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var80 /* : Array[Object] */;
long var81 /* : Int */;
val* var82 /* : NativeArray[Object] */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var89 /* : RuntimeVariable */;
val* var90 /* : RuntimeVariable */;
val* var_res91 /* var res: RuntimeVariable */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : String */;
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
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
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
short int var129 /* : Bool */;
short int var130 /* : Bool */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
short int var137 /* : Bool */;
short int var_138 /* var : Bool */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
short int var142 /* : Bool */;
short int var_143 /* var : Bool */;
val* var144 /* : AbstractCompiler */;
val* var145 /* : ModelBuilder */;
val* var146 /* : ToolContext */;
val* var147 /* : OptionBool */;
val* var148 /* : nullable Object */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : String */;
val* var161 /* : Array[Object] */;
long var162 /* : Int */;
val* var163 /* : NativeArray[Object] */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : String */;
val* var170 /* : String */;
val* var171 /* : Array[Object] */;
long var172 /* : Int */;
val* var173 /* : NativeArray[Object] */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : String */;
var_a = p0;
var_recv = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull]))(self, var_recv) /* check_recv_notnull on <self:SeparateCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var1) /* static_mtype on <var1:MPropDef(MAttributeDef)>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1219);
show_backtrace(1);
}
var_ret = var2;
var3 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MPropDef__mclassdef]))(var3) /* mclassdef on <var3:MPropDef(MAttributeDef)>*/;
var_intromclassdef = var4;
var5 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_intromclassdef) /* bound_mtype on <var_intromclassdef:MClassDef>*/;
var6 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_intromclassdef) /* bound_mtype on <var_intromclassdef:MClassDef>*/;
var7 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__mmodule]))(var_intromclassdef) /* mmodule on <var_intromclassdef:MClassDef>*/;
var8 = 1;
var9 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret->class->vft[COLOR_model__MType__resolve_for]))(var_ret, var5, var6, var7, var8) /* resolve_for on <var_ret:MType>*/;
var_ret = var9;
var10 = ((val* (*)(val*))(var_a->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_a) /* const_color on <var_a:MAttribute>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var10) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var11) /* modelbuilder on <var11:AbstractCompiler(SeparateCompiler)>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var12) /* toolcontext on <var12:ModelBuilder>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_separate_compiler__ToolContext__opt_no_union_attribute]))(var13) /* opt_no_union_attribute on <var13:ToolContext>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_opts__Option__value]))(var14) /* value on <var14:OptionBool>*/;
var16 = ((struct instance_kernel__Bool*)var15)->value; /* autounbox from nullable Object to Bool */;
if (var16){
var17 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__object_type]))(self) /* object_type on <self:SeparateCompilerVisitor>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_model__MType__as_nullable]))(var17) /* as_nullable on <var17:MClassType>*/;
var_cret = var18;
var19 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_cret) /* new_var on <self:SeparateCompilerVisitor>*/;
var_res = var19;
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype_61d]))(var_res, var_ret) /* mcasttype= on <var_res:RuntimeVariable>*/;
if (varonce) {
var20 = varonce;
} else {
var21 = " = ";
var22 = 3;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "->attrs[";
var27 = 8;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = ((val* (*)(val*))(var_a->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_a) /* const_color on <var_a:MAttribute>*/;
if (varonce30) {
var31 = varonce30;
} else {
var32 = "]; /* ";
var33 = 6;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = " on ";
var38 = 4;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = " */";
var44 = 3;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 10;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var20;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var48)->values[3] = (val*) var25;
((struct instance_array__NativeArray*)var48)->values[4] = (val*) var29;
((struct instance_array__NativeArray*)var48)->values[5] = (val*) var31;
((struct instance_array__NativeArray*)var48)->values[6] = (val*) var_a;
((struct instance_array__NativeArray*)var48)->values[7] = (val*) var36;
((struct instance_array__NativeArray*)var48)->values[8] = (val*) var40;
((struct instance_array__NativeArray*)var48)->values[9] = (val*) var42;
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var49) /* add on <self:SeparateCompilerVisitor>*/;
/* <var_ret:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_ret->type->table_size) {
var51 = 0;
} else {
var51 = var_ret->type->type_table[cltype] == idtype;
}
var52 = !var51;
var_ = var52;
if (var52){
var53 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var54 = ((val* (*)(val*))(var53->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var53) /* modelbuilder on <var53:AbstractCompiler(SeparateCompiler)>*/;
var55 = ((val* (*)(val*))(var54->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var54) /* toolcontext on <var54:ModelBuilder>*/;
var56 = ((val* (*)(val*))(var55->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_initialization]))(var55) /* opt_no_check_initialization on <var55:ToolContext>*/;
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_opts__Option__value]))(var56) /* value on <var56:OptionBool>*/;
var58 = ((struct instance_kernel__Bool*)var57)->value; /* autounbox from nullable Object to Bool */;
var59 = !var58;
var50 = var59;
} else {
var50 = var_;
}
if (var50){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "if (";
var63 = 4;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " == NULL) {";
var68 = 11;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 3;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var61;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var72)->values[2] = (val*) var66;
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var73) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce74) {
var75 = varonce74;
} else {
var76 = "Uninitialized attribute ";
var77 = 24;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var79 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__name]))(var_a) /* name on <var_a:MAttribute>*/;
var80 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var80 = array_instance Array[Object] */
var81 = 2;
var82 = NEW_array__NativeArray(var81, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var82)->values[0] = (val*) var75;
((struct instance_array__NativeArray*)var82)->values[1] = (val*) var79;
((void (*)(val*, val*, long))(var80->class->vft[COLOR_array__Array__with_native]))(var80, var82, var81) /* with_native on <var80:Array[Object]>*/;
}
var83 = ((val* (*)(val*))(var80->class->vft[COLOR_string__Object__to_s]))(var80) /* to_s on <var80:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(self, var83) /* add_abort on <self:SeparateCompilerVisitor>*/;
if (varonce84) {
var85 = varonce84;
} else {
var86 = "}";
var87 = 1;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var85) /* add on <self:SeparateCompilerVisitor>*/;
} else {
}
var89 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_res, var_ret) /* autobox on <self:SeparateCompilerVisitor>*/;
var = var89;
goto RET_LABEL;
} else {
var90 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_ret) /* new_var on <self:SeparateCompilerVisitor>*/;
var_res91 = var90;
if (varonce92) {
var93 = varonce92;
} else {
var94 = " = ";
var95 = 3;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = "->attrs[";
var100 = 8;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = ((val* (*)(val*))(var_a->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_a) /* const_color on <var_a:MAttribute>*/;
if (varonce103) {
var104 = varonce103;
} else {
var105 = "].";
var106 = 2;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var108 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctypename]))(var_ret) /* ctypename on <var_ret:MType>*/;
if (varonce109) {
var110 = varonce109;
} else {
var111 = "; /* ";
var112 = 5;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = " on ";
var117 = 4;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce120) {
var121 = varonce120;
} else {
var122 = " */";
var123 = 3;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var125 = array_instance Array[Object] */
var126 = 12;
var127 = NEW_array__NativeArray(var126, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var127)->values[0] = (val*) var_res91;
((struct instance_array__NativeArray*)var127)->values[1] = (val*) var93;
((struct instance_array__NativeArray*)var127)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var127)->values[3] = (val*) var98;
((struct instance_array__NativeArray*)var127)->values[4] = (val*) var102;
((struct instance_array__NativeArray*)var127)->values[5] = (val*) var104;
((struct instance_array__NativeArray*)var127)->values[6] = (val*) var108;
((struct instance_array__NativeArray*)var127)->values[7] = (val*) var110;
((struct instance_array__NativeArray*)var127)->values[8] = (val*) var_a;
((struct instance_array__NativeArray*)var127)->values[9] = (val*) var115;
((struct instance_array__NativeArray*)var127)->values[10] = (val*) var119;
((struct instance_array__NativeArray*)var127)->values[11] = (val*) var121;
((void (*)(val*, val*, long))(var125->class->vft[COLOR_array__Array__with_native]))(var125, var127, var126) /* with_native on <var125:Array[Object]>*/;
}
var128 = ((val* (*)(val*))(var125->class->vft[COLOR_string__Object__to_s]))(var125) /* to_s on <var125:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var128) /* add on <self:SeparateCompilerVisitor>*/;
var131 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:MType>*/;
if (varonce132) {
var133 = varonce132;
} else {
var134 = "val*";
var135 = 4;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
var137 = ((short int (*)(val*, val*))(var131->class->vft[COLOR_kernel__Object___61d_61d]))(var131, var133) /* == on <var131:String>*/;
var_138 = var137;
if (var137){
/* <var_ret:MType> isa MNullableType */
cltype140 = type_model__MNullableType.color;
idtype141 = type_model__MNullableType.id;
if(cltype140 >= var_ret->type->table_size) {
var139 = 0;
} else {
var139 = var_ret->type->type_table[cltype140] == idtype141;
}
var142 = !var139;
var130 = var142;
} else {
var130 = var_138;
}
var_143 = var130;
if (var130){
var144 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var145 = ((val* (*)(val*))(var144->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var144) /* modelbuilder on <var144:AbstractCompiler(SeparateCompiler)>*/;
var146 = ((val* (*)(val*))(var145->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var145) /* toolcontext on <var145:ModelBuilder>*/;
var147 = ((val* (*)(val*))(var146->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_initialization]))(var146) /* opt_no_check_initialization on <var146:ToolContext>*/;
var148 = ((val* (*)(val*))(var147->class->vft[COLOR_opts__Option__value]))(var147) /* value on <var147:OptionBool>*/;
var149 = ((struct instance_kernel__Bool*)var148)->value; /* autounbox from nullable Object to Bool */;
var150 = !var149;
var129 = var150;
} else {
var129 = var_143;
}
if (var129){
if (varonce151) {
var152 = varonce151;
} else {
var153 = "if (";
var154 = 4;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
if (varonce156) {
var157 = varonce156;
} else {
var158 = " == NULL) {";
var159 = 11;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
var161 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var161 = array_instance Array[Object] */
var162 = 3;
var163 = NEW_array__NativeArray(var162, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var163)->values[0] = (val*) var152;
((struct instance_array__NativeArray*)var163)->values[1] = (val*) var_res91;
((struct instance_array__NativeArray*)var163)->values[2] = (val*) var157;
((void (*)(val*, val*, long))(var161->class->vft[COLOR_array__Array__with_native]))(var161, var163, var162) /* with_native on <var161:Array[Object]>*/;
}
var164 = ((val* (*)(val*))(var161->class->vft[COLOR_string__Object__to_s]))(var161) /* to_s on <var161:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var164) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce165) {
var166 = varonce165;
} else {
var167 = "Uninitialized attribute ";
var168 = 24;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
var170 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__name]))(var_a) /* name on <var_a:MAttribute>*/;
var171 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var171 = array_instance Array[Object] */
var172 = 2;
var173 = NEW_array__NativeArray(var172, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var173)->values[0] = (val*) var166;
((struct instance_array__NativeArray*)var173)->values[1] = (val*) var170;
((void (*)(val*, val*, long))(var171->class->vft[COLOR_array__Array__with_native]))(var171, var173, var172) /* with_native on <var171:Array[Object]>*/;
}
var174 = ((val* (*)(val*))(var171->class->vft[COLOR_string__Object__to_s]))(var171) /* to_s on <var171:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(self, var174) /* add_abort on <self:SeparateCompilerVisitor>*/;
if (varonce175) {
var176 = varonce175;
} else {
var177 = "}";
var178 = 1;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var176) /* add on <self:SeparateCompilerVisitor>*/;
} else {
}
var = var_res91;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#read_attribute for (self: Object, MAttribute, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__read_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__read_attribute(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#write_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable, RuntimeVariable) */
void separate_compiler__SeparateCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2) {
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var /* : MPropDef */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var2 /* : MPropDef */;
val* var3 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var4 /* : MClassType */;
val* var5 /* : MClassType */;
val* var6 /* : MModule */;
short int var7 /* : Bool */;
val* var8 /* : MType */;
val* var9 /* : RuntimeVariable */;
val* var10 /* : String */;
val* var11 /* : AbstractCompiler */;
val* var12 /* : ModelBuilder */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var_attr /* var attr: String */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
int cltype;
int idtype;
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
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : String */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var89 /* : Array[Object] */;
long var90 /* : Int */;
val* var91 /* : NativeArray[Object] */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : MClassType */;
val* var99 /* : MType */;
val* var100 /* : RuntimeVariable */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
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
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : String */;
val* var122 /* : Array[Object] */;
long var123 /* : Int */;
val* var124 /* : NativeArray[Object] */;
val* var125 /* : String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
val* var146 /* : String */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : String */;
val* var152 /* : Array[Object] */;
long var153 /* : Int */;
val* var154 /* : NativeArray[Object] */;
val* var155 /* : String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : String */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : String */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : String */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : String */;
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
long var187 /* : Int */;
val* var188 /* : String */;
val* var189 /* : Array[Object] */;
long var190 /* : Int */;
val* var191 /* : NativeArray[Object] */;
val* var192 /* : String */;
var_a = p0;
var_recv = p1;
var_value = p2;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull]))(self, var_recv) /* check_recv_notnull on <self:SeparateCompilerVisitor>*/;
var = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var) /* static_mtype on <var:MPropDef(MAttributeDef)>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1262);
show_backtrace(1);
}
var_mtype = var1;
var2 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MPropDef__mclassdef]))(var2) /* mclassdef on <var2:MPropDef(MAttributeDef)>*/;
var_intromclassdef = var3;
var4 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_intromclassdef) /* bound_mtype on <var_intromclassdef:MClassDef>*/;
var5 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_intromclassdef) /* bound_mtype on <var_intromclassdef:MClassDef>*/;
var6 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__mmodule]))(var_intromclassdef) /* mmodule on <var_intromclassdef:MClassDef>*/;
var7 = 1;
var8 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var4, var5, var6, var7) /* resolve_for on <var_mtype:MType>*/;
var_mtype = var8;
var9 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_value, var_mtype) /* autobox on <self:SeparateCompilerVisitor>*/;
var_value = var9;
var10 = ((val* (*)(val*))(var_a->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_a) /* const_color on <var_a:MAttribute>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var10) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var11) /* modelbuilder on <var11:AbstractCompiler(SeparateCompiler)>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var12) /* toolcontext on <var12:ModelBuilder>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_separate_compiler__ToolContext__opt_no_union_attribute]))(var13) /* opt_no_union_attribute on <var13:ToolContext>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_opts__Option__value]))(var14) /* value on <var14:OptionBool>*/;
var16 = ((struct instance_kernel__Bool*)var15)->value; /* autounbox from nullable Object to Bool */;
if (var16){
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
var18 = 5;
((void (*)(val*, long))(var17->class->vft[COLOR_array__Array__with_capacity]))(var17, var18) /* with_capacity on <var17:Array[Object]>*/;
var_ = var17;
if (varonce) {
var19 = varonce;
} else {
var20 = "";
var21 = 0;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce = var19;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var19) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_recv) /* add on <var_:Array[Object]>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "->attrs[";
var26 = 8;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var24) /* add on <var_:Array[Object]>*/;
var28 = ((val* (*)(val*))(var_a->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_a) /* const_color on <var_a:MAttribute>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var28) /* add on <var_:Array[Object]>*/;
if (varonce29) {
var30 = varonce29;
} else {
var31 = "]";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var30) /* add on <var_:Array[Object]>*/;
var34 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_attr = var34;
var35 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "val*";
var39 = 4;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = ((short int (*)(val*, val*))(var35->class->vft[COLOR_kernel__Object___33d_61d]))(var35, var37) /* != on <var35:String>*/;
if (var41){
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var42 = 0;
} else {
var42 = var_mtype->type->type_table[cltype] == idtype;
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1273);
show_backtrace(1);
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = "if (";
var46 = 4;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = " != NULL) {";
var51 = 11;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 3;
var55 = NEW_array__NativeArray(var54, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var55)->values[0] = (val*) var44;
((struct instance_array__NativeArray*)var55)->values[1] = (val*) var_attr;
((struct instance_array__NativeArray*)var55)->values[2] = (val*) var49;
((void (*)(val*, val*, long))(var53->class->vft[COLOR_array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
var56 = ((val* (*)(val*))(var53->class->vft[COLOR_string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var56) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce57) {
var58 = varonce57;
} else {
var59 = "((struct instance_";
var60 = 18;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
var62 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__c_instance_name]))(var_mtype) /* c_instance_name on <var_mtype:MType(MClassType)>*/;
if (varonce63) {
var64 = varonce63;
} else {
var65 = "*)";
var66 = 2;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = ")->value = ";
var71 = 11;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "; /* ";
var76 = 5;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = " on ";
var81 = 4;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
var83 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce84) {
var85 = varonce84;
} else {
var86 = " */";
var87 = 3;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var89 = array_instance Array[Object] */
var90 = 11;
var91 = NEW_array__NativeArray(var90, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var91)->values[0] = (val*) var58;
((struct instance_array__NativeArray*)var91)->values[1] = (val*) var62;
((struct instance_array__NativeArray*)var91)->values[2] = (val*) var64;
((struct instance_array__NativeArray*)var91)->values[3] = (val*) var_attr;
((struct instance_array__NativeArray*)var91)->values[4] = (val*) var69;
((struct instance_array__NativeArray*)var91)->values[5] = (val*) var_value;
((struct instance_array__NativeArray*)var91)->values[6] = (val*) var74;
((struct instance_array__NativeArray*)var91)->values[7] = (val*) var_a;
((struct instance_array__NativeArray*)var91)->values[8] = (val*) var79;
((struct instance_array__NativeArray*)var91)->values[9] = (val*) var83;
((struct instance_array__NativeArray*)var91)->values[10] = (val*) var85;
((void (*)(val*, val*, long))(var89->class->vft[COLOR_array__Array__with_native]))(var89, var91, var90) /* with_native on <var89:Array[Object]>*/;
}
var92 = ((val* (*)(val*))(var89->class->vft[COLOR_string__Object__to_s]))(var89) /* to_s on <var89:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var92) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce93) {
var94 = varonce93;
} else {
var95 = "} else {";
var96 = 8;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var94) /* add on <self:SeparateCompilerVisitor>*/;
var98 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__object_type]))(self) /* object_type on <self:SeparateCompilerVisitor>*/;
var99 = ((val* (*)(val*))(var98->class->vft[COLOR_model__MType__as_nullable]))(var98) /* as_nullable on <var98:MClassType>*/;
var100 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_value, var99) /* autobox on <self:SeparateCompilerVisitor>*/;
var_value = var100;
if (varonce101) {
var102 = varonce101;
} else {
var103 = " = ";
var104 = 3;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = "; /* ";
var109 = 5;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = " on ";
var114 = 4;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce117) {
var118 = varonce117;
} else {
var119 = " */";
var120 = 3;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
var122 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var122 = array_instance Array[Object] */
var123 = 8;
var124 = NEW_array__NativeArray(var123, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var124)->values[0] = (val*) var_attr;
((struct instance_array__NativeArray*)var124)->values[1] = (val*) var102;
((struct instance_array__NativeArray*)var124)->values[2] = (val*) var_value;
((struct instance_array__NativeArray*)var124)->values[3] = (val*) var107;
((struct instance_array__NativeArray*)var124)->values[4] = (val*) var_a;
((struct instance_array__NativeArray*)var124)->values[5] = (val*) var112;
((struct instance_array__NativeArray*)var124)->values[6] = (val*) var116;
((struct instance_array__NativeArray*)var124)->values[7] = (val*) var118;
((void (*)(val*, val*, long))(var122->class->vft[COLOR_array__Array__with_native]))(var122, var124, var123) /* with_native on <var122:Array[Object]>*/;
}
var125 = ((val* (*)(val*))(var122->class->vft[COLOR_string__Object__to_s]))(var122) /* to_s on <var122:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var125) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce126) {
var127 = varonce126;
} else {
var128 = "}";
var129 = 1;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var127) /* add on <self:SeparateCompilerVisitor>*/;
} else {
if (varonce131) {
var132 = varonce131;
} else {
var133 = " = ";
var134 = 3;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = "; /* ";
var139 = 5;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = " on ";
var144 = 4;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce147) {
var148 = varonce147;
} else {
var149 = " */";
var150 = 3;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
var152 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var152 = array_instance Array[Object] */
var153 = 8;
var154 = NEW_array__NativeArray(var153, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var154)->values[0] = (val*) var_attr;
((struct instance_array__NativeArray*)var154)->values[1] = (val*) var132;
((struct instance_array__NativeArray*)var154)->values[2] = (val*) var_value;
((struct instance_array__NativeArray*)var154)->values[3] = (val*) var137;
((struct instance_array__NativeArray*)var154)->values[4] = (val*) var_a;
((struct instance_array__NativeArray*)var154)->values[5] = (val*) var142;
((struct instance_array__NativeArray*)var154)->values[6] = (val*) var146;
((struct instance_array__NativeArray*)var154)->values[7] = (val*) var148;
((void (*)(val*, val*, long))(var152->class->vft[COLOR_array__Array__with_native]))(var152, var154, var153) /* with_native on <var152:Array[Object]>*/;
}
var155 = ((val* (*)(val*))(var152->class->vft[COLOR_string__Object__to_s]))(var152) /* to_s on <var152:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var155) /* add on <self:SeparateCompilerVisitor>*/;
}
} else {
if (varonce156) {
var157 = varonce156;
} else {
var158 = "->attrs[";
var159 = 8;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
var161 = ((val* (*)(val*))(var_a->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var_a) /* const_color on <var_a:MAttribute>*/;
if (varonce162) {
var163 = varonce162;
} else {
var164 = "].";
var165 = 2;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
var167 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctypename]))(var_mtype) /* ctypename on <var_mtype:MType>*/;
if (varonce168) {
var169 = varonce168;
} else {
var170 = " = ";
var171 = 3;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = "; /* ";
var176 = 5;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = " on ";
var181 = 4;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
var183 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce184) {
var185 = varonce184;
} else {
var186 = " */";
var187 = 3;
var188 = string__NativeString__to_s_with_length(var186, var187);
var185 = var188;
varonce184 = var185;
}
var189 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var189 = array_instance Array[Object] */
var190 = 12;
var191 = NEW_array__NativeArray(var190, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var191)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var191)->values[1] = (val*) var157;
((struct instance_array__NativeArray*)var191)->values[2] = (val*) var161;
((struct instance_array__NativeArray*)var191)->values[3] = (val*) var163;
((struct instance_array__NativeArray*)var191)->values[4] = (val*) var167;
((struct instance_array__NativeArray*)var191)->values[5] = (val*) var169;
((struct instance_array__NativeArray*)var191)->values[6] = (val*) var_value;
((struct instance_array__NativeArray*)var191)->values[7] = (val*) var174;
((struct instance_array__NativeArray*)var191)->values[8] = (val*) var_a;
((struct instance_array__NativeArray*)var191)->values[9] = (val*) var179;
((struct instance_array__NativeArray*)var191)->values[10] = (val*) var183;
((struct instance_array__NativeArray*)var191)->values[11] = (val*) var185;
((void (*)(val*, val*, long))(var189->class->vft[COLOR_array__Array__with_native]))(var189, var191, var190) /* with_native on <var189:Array[Object]>*/;
}
var192 = ((val* (*)(val*))(var189->class->vft[COLOR_string__Object__to_s]))(var189) /* to_s on <var189:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var192) /* add on <self:SeparateCompilerVisitor>*/;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#write_attribute for (self: Object, MAttribute, RuntimeVariable, RuntimeVariable) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2) {
separate_compiler__SeparateCompilerVisitor__write_attribute(self, p0, p1, p2);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#hardening_live_open_type for (self: SeparateCompilerVisitor, MType) */
void separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : AbstractCompiler */;
val* var1 /* : ModelBuilder */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var_col /* var col: String */;
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
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
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
var_mtype = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var) /* modelbuilder on <var:AbstractCompiler(SeparateCompiler)>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var1) /* toolcontext on <var1:ModelBuilder>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__ToolContext__opt_hardening]))(var2) /* opt_hardening on <var2:ToolContext>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_opts__Option__value]))(var3) /* value on <var3:OptionBool>*/;
var5 = ((struct instance_kernel__Bool*)var4)->value; /* autounbox from nullable Object to Bool */;
var6 = !var5;
if (var6){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__const_color]))(var_mtype) /* const_color on <var_mtype:MType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var7) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var8 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__const_color]))(var_mtype) /* const_color on <var_mtype:MType>*/;
var_col = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "if(";
var11 = 3;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = " == -1) {";
var16 = 9;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_col;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var21) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "fprintf(stderr, \"Resolution of a dead open type: %s\\n\", \"";
var25 = 57;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_string__Object__to_s]))(var_mtype) /* to_s on <var_mtype:MType>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_string__AbstractString__escape_to_c]))(var27) /* escape_to_c on <var27:String>*/;
if (varonce29) {
var30 = varonce29;
} else {
var31 = "\");";
var32 = 3;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 3;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var28;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var30;
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var37) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce38) {
var39 = varonce38;
} else {
var40 = "open type dead";
var41 = 14;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(self, var39) /* add_abort on <self:SeparateCompilerVisitor>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = "}";
var46 = 1;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var44) /* add on <self:SeparateCompilerVisitor>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#hardening_live_open_type for (self: Object, MType) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(val* self, val* p0) {
separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#hardening_cast_type for (self: SeparateCompilerVisitor, String) */
void separate_compiler__SeparateCompilerVisitor__hardening_cast_type(val* self, val* p0) {
val* var_t /* var t: String */;
val* var /* : AbstractCompiler */;
val* var1 /* : ModelBuilder */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
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
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
var_t = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var) /* modelbuilder on <var:AbstractCompiler(SeparateCompiler)>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var1) /* toolcontext on <var1:ModelBuilder>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__ToolContext__opt_hardening]))(var2) /* opt_hardening on <var2:ToolContext>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_opts__Option__value]))(var3) /* value on <var3:OptionBool>*/;
var5 = ((struct instance_kernel__Bool*)var4)->value; /* autounbox from nullable Object to Bool */;
var6 = !var5;
if (var6){
goto RET_LABEL;
} else {
}
if (varonce) {
var7 = varonce;
} else {
var8 = "if(";
var9 = 3;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = " == NULL) {";
var14 = 11;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var19) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "cast type null";
var23 = 14;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(self, var21) /* add_abort on <self:SeparateCompilerVisitor>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "}";
var28 = 1;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var26) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce30) {
var31 = varonce30;
} else {
var32 = "if(";
var33 = 3;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "->id == -1 || ";
var38 = 14;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "->color == -1) {";
var43 = 16;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 5;
var47 = NEW_array__NativeArray(var46, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var47)->values[0] = (val*) var31;
((struct instance_array__NativeArray*)var47)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var47)->values[2] = (val*) var36;
((struct instance_array__NativeArray*)var47)->values[3] = (val*) var_t;
((struct instance_array__NativeArray*)var47)->values[4] = (val*) var41;
((void (*)(val*, val*, long))(var45->class->vft[COLOR_array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var48) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce49) {
var50 = varonce49;
} else {
var51 = "fprintf(stderr, \"Try to cast on a dead cast type: %s\\n\", ";
var52 = 57;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "->name);";
var57 = 8;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 3;
var61 = NEW_array__NativeArray(var60, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var61)->values[0] = (val*) var50;
((struct instance_array__NativeArray*)var61)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var61)->values[2] = (val*) var55;
((void (*)(val*, val*, long))(var59->class->vft[COLOR_array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
var62 = ((val* (*)(val*))(var59->class->vft[COLOR_string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var62) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce63) {
var64 = varonce63;
} else {
var65 = "cast type dead";
var66 = 14;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(self, var64) /* add_abort on <self:SeparateCompilerVisitor>*/;
if (varonce68) {
var69 = varonce68;
} else {
var70 = "}";
var71 = 1;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var69) /* add on <self:SeparateCompilerVisitor>*/;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#hardening_cast_type for (self: Object, String) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_cast_type(val* self, val* p0) {
separate_compiler__SeparateCompilerVisitor__hardening_cast_type(self, p0);
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#init_instance for (self: SeparateCompilerVisitor, MClassType): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : String */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
val* var11 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable Frame */;
val* var16 /* : MPropDef */;
val* var17 /* : MClassDef */;
val* var18 /* : nullable Frame */;
val* var19 /* : Array[RuntimeVariable] */;
val* var20 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var21 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var22 /* : String */;
short int var23 /* : Bool */;
val* var24 /* : ModelBuilder */;
val* var25 /* : ToolContext */;
val* var26 /* : OptionBool */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
short int var_29 /* var : Bool */;
val* var30 /* : ModelBuilder */;
val* var31 /* : ToolContext */;
val* var32 /* : OptionBool */;
val* var33 /* : nullable Object */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : MClass */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Object] */;
val* var66 /* : String */;
val* var67 /* : RuntimeVariable */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
val* var73 /* : MClass */;
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
val* var95 /* : RuntimeVariable */;
val* var96 /* : Set[MType] */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : Array[Object] */;
long var104 /* : Int */;
val* var105 /* : NativeArray[Object] */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
val* var112 /* : MClass */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
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
val* var129 /* : RuntimeVariable */;
var_mtype = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "NEW_";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var5) /* c_name on <var5:MClass>*/;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var6;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var10) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var_compiler = var11;
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var13 = 0;
} else {
var13 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var13;
if (var13){
var14 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MClassType(MGenericType)>*/;
var12 = var14;
} else {
var12 = var_;
}
if (var12){
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__hardening_live_open_type]))(self, var_mtype) /* hardening_live_open_type on <self:SeparateCompilerVisitor>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateCompilerVisitor>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1322);
show_backtrace(1);
} else {
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_compiler__Frame__mpropdef]))(var15) /* mpropdef on <var15:nullable Frame>*/;
}
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_model__MPropDef__mclassdef]))(var16) /* mclassdef on <var16:MPropDef>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__link_unresolved_type]))(self, var17, var_mtype) /* link_unresolved_type on <self:SeparateCompilerVisitor>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateCompilerVisitor>*/;
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1323);
show_backtrace(1);
} else {
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_compiler__Frame__arguments]))(var18) /* arguments on <var18:nullable Frame>*/;
}
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Collection__first]))(var19) /* first on <var19:Array[RuntimeVariable]>*/;
var_recv = var20;
var21 = ((val* (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__type_info]))(self, var_recv) /* type_info on <self:SeparateCompilerVisitor>*/;
var_recv_type_info = var21;
var22 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__const_color]))(var_mtype) /* const_color on <var_mtype:MClassType(MGenericType)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var22) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var24 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var_compiler) /* modelbuilder on <var_compiler:SeparateCompiler>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var24) /* toolcontext on <var24:ModelBuilder>*/;
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(var25) /* opt_phmod_typing on <var25:ToolContext>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_opts__Option__value]))(var26) /* value on <var26:OptionBool>*/;
var28 = ((struct instance_kernel__Bool*)var27)->value; /* autounbox from nullable Object to Bool */;
var_29 = var28;
if (var28){
var23 = var_29;
} else {
var30 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var_compiler) /* modelbuilder on <var_compiler:SeparateCompiler>*/;
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var30) /* toolcontext on <var30:ModelBuilder>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(var31) /* opt_phand_typing on <var31:ToolContext>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_opts__Option__value]))(var32) /* value on <var32:OptionBool>*/;
var34 = ((struct instance_kernel__Bool*)var33)->value; /* autounbox from nullable Object to Bool */;
var23 = var34;
}
if (var23){
if (varonce35) {
var36 = varonce35;
} else {
var37 = "NEW_";
var38 = 4;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType(MGenericType)>*/;
var41 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var40) /* c_name on <var40:MClass>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "(";
var45 = 1;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "->resolution_table->types[HASH(";
var50 = 31;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "->resolution_table->mask, ";
var55 = 26;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__const_color]))(var_mtype) /* const_color on <var_mtype:MClassType(MGenericType)>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = ")])";
var61 = 3;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 9;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var41;
((struct instance_array__NativeArray*)var65)->values[2] = (val*) var43;
((struct instance_array__NativeArray*)var65)->values[3] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var65)->values[4] = (val*) var48;
((struct instance_array__NativeArray*)var65)->values[5] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var65)->values[6] = (val*) var53;
((struct instance_array__NativeArray*)var65)->values[7] = (val*) var57;
((struct instance_array__NativeArray*)var65)->values[8] = (val*) var59;
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
}
var66 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
var67 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var66, var_mtype) /* new_expr on <self:SeparateCompilerVisitor>*/;
var = var67;
goto RET_LABEL;
} else {
if (varonce68) {
var69 = varonce68;
} else {
var70 = "NEW_";
var71 = 4;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var73 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType(MGenericType)>*/;
var74 = ((val* (*)(val*))(var73->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var73) /* c_name on <var73:MClass>*/;
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
var82 = "->resolution_table->types[";
var83 = 26;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__const_color]))(var_mtype) /* const_color on <var_mtype:MClassType(MGenericType)>*/;
if (varonce86) {
var87 = varonce86;
} else {
var88 = "])";
var89 = 2;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 7;
var93 = NEW_array__NativeArray(var92, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var93)->values[0] = (val*) var69;
((struct instance_array__NativeArray*)var93)->values[1] = (val*) var74;
((struct instance_array__NativeArray*)var93)->values[2] = (val*) var76;
((struct instance_array__NativeArray*)var93)->values[3] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var93)->values[4] = (val*) var81;
((struct instance_array__NativeArray*)var93)->values[5] = (val*) var85;
((struct instance_array__NativeArray*)var93)->values[6] = (val*) var87;
((void (*)(val*, val*, long))(var91->class->vft[COLOR_array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
var94 = ((val* (*)(val*))(var91->class->vft[COLOR_string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
var95 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var94, var_mtype) /* new_expr on <self:SeparateCompilerVisitor>*/;
var = var95;
goto RET_LABEL;
}
} else {
}
var96 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__undead_types]))(var_compiler) /* undead_types on <var_compiler:SeparateCompiler>*/;
((void (*)(val*, val*))(var96->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var96, var_mtype) /* add on <var96:Set[MType]>*/;
if (varonce97) {
var98 = varonce97;
} else {
var99 = "type_";
var100 = 5;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
var103 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var103 = array_instance Array[Object] */
var104 = 2;
var105 = NEW_array__NativeArray(var104, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var105)->values[0] = (val*) var98;
((struct instance_array__NativeArray*)var105)->values[1] = (val*) var102;
((void (*)(val*, val*, long))(var103->class->vft[COLOR_array__Array__with_native]))(var103, var105, var104) /* with_native on <var103:Array[Object]>*/;
}
var106 = ((val* (*)(val*))(var103->class->vft[COLOR_string__Object__to_s]))(var103) /* to_s on <var103:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var106) /* require_declaration on <self:SeparateCompilerVisitor>*/;
if (varonce107) {
var108 = varonce107;
} else {
var109 = "NEW_";
var110 = 4;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var113 = ((val* (*)(val*))(var112->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var112) /* c_name on <var112:MClass>*/;
if (varonce114) {
var115 = varonce114;
} else {
var116 = "(&type_";
var117 = 7;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce120) {
var121 = varonce120;
} else {
var122 = ")";
var123 = 1;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var125 = array_instance Array[Object] */
var126 = 5;
var127 = NEW_array__NativeArray(var126, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var127)->values[0] = (val*) var108;
((struct instance_array__NativeArray*)var127)->values[1] = (val*) var113;
((struct instance_array__NativeArray*)var127)->values[2] = (val*) var115;
((struct instance_array__NativeArray*)var127)->values[3] = (val*) var119;
((struct instance_array__NativeArray*)var127)->values[4] = (val*) var121;
((void (*)(val*, val*, long))(var125->class->vft[COLOR_array__Array__with_native]))(var125, var127, var126) /* with_native on <var125:Array[Object]>*/;
}
var128 = ((val* (*)(val*))(var125->class->vft[COLOR_string__Object__to_s]))(var125) /* to_s on <var125:Array[Object]>*/;
var129 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var128, var_mtype) /* new_expr on <self:SeparateCompilerVisitor>*/;
var = var129;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#init_instance for (self: Object, MClassType): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__init_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#type_test for (self: SeparateCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var21 /* : nullable Frame */;
val* var22 /* : Array[RuntimeVariable] */;
val* var23 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var24 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var25 /* : MClassType */;
val* var26 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var_cltype /* var cltype: String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[Object] */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var_idtype /* var idtype: String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Object] */;
val* var66 /* : String */;
short int var67 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
val* var_accept_null /* var accept_null: String */;
val* var_ntype /* var ntype: MType */;
short int var73 /* : Bool */;
int cltype;
int idtype;
val* var74 /* : MType */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : String */;
val* var80 /* : MType */;
val* var81 /* : nullable Frame */;
val* var82 /* : MPropDef */;
val* var83 /* : MClassDef */;
val* var84 /* : MModule */;
val* var85 /* : nullable Frame */;
val* var86 /* : MPropDef */;
val* var87 /* : MClassDef */;
val* var88 /* : MClassType */;
short int var89 /* : Bool */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : String */;
val* var95 /* : String */;
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
val* var110 /* : ModelBuilder */;
val* var111 /* : ToolContext */;
val* var112 /* : OptionBool */;
val* var113 /* : nullable Object */;
short int var114 /* : Bool */;
val* var115 /* : AbstractCompiler */;
val* var116 /* : HashMap[String, Int] */;
val* var_ /* var : HashMap[String, Int] */;
val* var_117 /* var : String */;
val* var118 /* : nullable Object */;
long var119 /* : Int */;
long var120 /* : Int */;
long var122 /* : Int */;
long var123 /* : Int */;
val* var124 /* : nullable Object */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : String */;
val* var135 /* : Array[Object] */;
long var136 /* : Int */;
val* var137 /* : NativeArray[Object] */;
val* var138 /* : String */;
short int var139 /* : Bool */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var_type_struct /* var type_struct: String */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
val* var156 /* : Array[Object] */;
long var157 /* : Int */;
val* var158 /* : NativeArray[Object] */;
val* var159 /* : String */;
val* var160 /* : nullable Frame */;
val* var161 /* : MPropDef */;
val* var162 /* : MClassDef */;
val* var163 /* : String */;
short int var164 /* : Bool */;
val* var165 /* : ModelBuilder */;
val* var166 /* : ToolContext */;
val* var167 /* : OptionBool */;
val* var168 /* : nullable Object */;
short int var169 /* : Bool */;
short int var_170 /* var : Bool */;
val* var171 /* : ModelBuilder */;
val* var172 /* : ToolContext */;
val* var173 /* : OptionBool */;
val* var174 /* : nullable Object */;
short int var175 /* : Bool */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : String */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
long var189 /* : Int */;
val* var190 /* : String */;
val* var191 /* : String */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : String */;
val* var197 /* : Array[Object] */;
long var198 /* : Int */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : String */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
long var204 /* : Int */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : String */;
val* var211 /* : String */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
long var215 /* : Int */;
val* var216 /* : String */;
val* var217 /* : Array[Object] */;
long var218 /* : Int */;
val* var219 /* : NativeArray[Object] */;
val* var220 /* : String */;
val* var221 /* : ModelBuilder */;
val* var222 /* : ToolContext */;
val* var223 /* : OptionBool */;
val* var224 /* : nullable Object */;
short int var225 /* : Bool */;
val* var226 /* : AbstractCompiler */;
val* var227 /* : HashMap[String, Int] */;
val* var_228 /* var : HashMap[String, Int] */;
val* var_229 /* var : String */;
val* var230 /* : nullable Object */;
long var231 /* : Int */;
long var232 /* : Int */;
long var234 /* : Int */;
long var235 /* : Int */;
val* var236 /* : nullable Object */;
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
val* var247 /* : Array[Object] */;
long var248 /* : Int */;
val* var249 /* : NativeArray[Object] */;
val* var250 /* : String */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
long var254 /* : Int */;
val* var255 /* : String */;
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
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
val* var274 /* : String */;
val* var275 /* : Array[Object] */;
long var276 /* : Int */;
val* var277 /* : NativeArray[Object] */;
val* var278 /* : String */;
short int var279 /* : Bool */;
short int var_280 /* var : Bool */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : String */;
short int var286 /* : Bool */;
static val* varonce287;
val* var288 /* : String */;
char* var289 /* : NativeString */;
long var290 /* : Int */;
val* var291 /* : String */;
val* var292 /* : String */;
val* var_is_nullable /* var is_nullable: String */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
long var296 /* : Int */;
val* var297 /* : String */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : String */;
val* var303 /* : Array[Object] */;
long var304 /* : Int */;
val* var305 /* : NativeArray[Object] */;
val* var306 /* : String */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
long var310 /* : Int */;
val* var311 /* : String */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
long var315 /* : Int */;
val* var316 /* : String */;
val* var317 /* : Array[Object] */;
long var318 /* : Int */;
val* var319 /* : NativeArray[Object] */;
val* var320 /* : String */;
val* var321 /* : String */;
short int var322 /* : Bool */;
int cltype323;
int idtype324;
val* var325 /* : Set[MType] */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
long var329 /* : Int */;
val* var330 /* : String */;
val* var331 /* : String */;
val* var332 /* : Array[Object] */;
long var333 /* : Int */;
val* var334 /* : NativeArray[Object] */;
val* var335 /* : String */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
long var339 /* : Int */;
val* var340 /* : String */;
val* var341 /* : String */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : NativeString */;
long var345 /* : Int */;
val* var346 /* : String */;
val* var347 /* : Array[Object] */;
long var348 /* : Int */;
val* var349 /* : NativeArray[Object] */;
val* var350 /* : String */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
long var354 /* : Int */;
val* var355 /* : String */;
val* var356 /* : String */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
long var360 /* : Int */;
val* var361 /* : String */;
val* var362 /* : Array[Object] */;
long var363 /* : Int */;
val* var364 /* : NativeArray[Object] */;
val* var365 /* : String */;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
long var369 /* : Int */;
val* var370 /* : String */;
val* var371 /* : String */;
static val* varonce372;
val* var373 /* : String */;
char* var374 /* : NativeString */;
long var375 /* : Int */;
val* var376 /* : String */;
val* var377 /* : Array[Object] */;
long var378 /* : Int */;
val* var379 /* : NativeArray[Object] */;
val* var380 /* : String */;
val* var381 /* : ModelBuilder */;
val* var382 /* : ToolContext */;
val* var383 /* : OptionBool */;
val* var384 /* : nullable Object */;
short int var385 /* : Bool */;
val* var386 /* : AbstractCompiler */;
val* var387 /* : HashMap[String, Int] */;
val* var_388 /* var : HashMap[String, Int] */;
val* var_389 /* var : String */;
val* var390 /* : nullable Object */;
long var391 /* : Int */;
long var392 /* : Int */;
long var394 /* : Int */;
long var395 /* : Int */;
val* var396 /* : nullable Object */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
long var400 /* : Int */;
val* var401 /* : String */;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : NativeString */;
long var405 /* : Int */;
val* var406 /* : String */;
val* var407 /* : Array[Object] */;
long var408 /* : Int */;
val* var409 /* : NativeArray[Object] */;
val* var410 /* : String */;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
long var414 /* : Int */;
val* var415 /* : String */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
long var419 /* : Int */;
val* var420 /* : String */;
val* var421 /* : String */;
static val* varonce422;
val* var423 /* : String */;
char* var424 /* : NativeString */;
long var425 /* : Int */;
val* var426 /* : String */;
val* var427 /* : Array[Object] */;
long var428 /* : Int */;
val* var429 /* : NativeArray[Object] */;
val* var430 /* : String */;
static val* varonce431;
val* var432 /* : String */;
char* var433 /* : NativeString */;
long var434 /* : Int */;
val* var435 /* : String */;
static val* varonce436;
val* var437 /* : String */;
char* var438 /* : NativeString */;
long var439 /* : Int */;
val* var440 /* : String */;
val* var441 /* : Array[Object] */;
long var442 /* : Int */;
val* var443 /* : NativeArray[Object] */;
val* var444 /* : String */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
long var448 /* : Int */;
val* var449 /* : String */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
long var453 /* : Int */;
val* var454 /* : String */;
val* var455 /* : Array[Object] */;
long var456 /* : Int */;
val* var457 /* : NativeArray[Object] */;
val* var458 /* : String */;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : NativeString */;
long var462 /* : Int */;
val* var463 /* : String */;
val* var464 /* : String */;
val* var_value_type_info /* var value_type_info: String */;
short int var465 /* : Bool */;
val* var466 /* : ModelBuilder */;
val* var467 /* : ToolContext */;
val* var468 /* : OptionBool */;
val* var469 /* : nullable Object */;
short int var470 /* : Bool */;
short int var_471 /* var : Bool */;
val* var472 /* : ModelBuilder */;
val* var473 /* : ToolContext */;
val* var474 /* : OptionBool */;
val* var475 /* : nullable Object */;
short int var476 /* : Bool */;
static val* varonce477;
val* var478 /* : String */;
char* var479 /* : NativeString */;
long var480 /* : Int */;
val* var481 /* : String */;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : NativeString */;
long var485 /* : Int */;
val* var486 /* : String */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
long var490 /* : Int */;
val* var491 /* : String */;
val* var492 /* : Array[Object] */;
long var493 /* : Int */;
val* var494 /* : NativeArray[Object] */;
val* var495 /* : String */;
static val* varonce496;
val* var497 /* : String */;
char* var498 /* : NativeString */;
long var499 /* : Int */;
val* var500 /* : String */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : NativeString */;
long var504 /* : Int */;
val* var505 /* : String */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
long var509 /* : Int */;
val* var510 /* : String */;
val* var511 /* : Array[Object] */;
long var512 /* : Int */;
val* var513 /* : NativeArray[Object] */;
val* var514 /* : String */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
long var518 /* : Int */;
val* var519 /* : String */;
val* var520 /* : Array[Object] */;
long var521 /* : Int */;
val* var522 /* : NativeArray[Object] */;
val* var523 /* : String */;
static val* varonce524;
val* var525 /* : String */;
char* var526 /* : NativeString */;
long var527 /* : Int */;
val* var528 /* : String */;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : NativeString */;
long var532 /* : Int */;
val* var533 /* : String */;
static val* varonce534;
val* var535 /* : String */;
char* var536 /* : NativeString */;
long var537 /* : Int */;
val* var538 /* : String */;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : NativeString */;
long var542 /* : Int */;
val* var543 /* : String */;
static val* varonce544;
val* var545 /* : String */;
char* var546 /* : NativeString */;
long var547 /* : Int */;
val* var548 /* : String */;
val* var549 /* : Array[Object] */;
long var550 /* : Int */;
val* var551 /* : NativeArray[Object] */;
val* var552 /* : String */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
long var556 /* : Int */;
val* var557 /* : String */;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : NativeString */;
long var561 /* : Int */;
val* var562 /* : String */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
if (varonce) {
var1 = varonce;
} else {
var2 = "/* ";
var3 = 3;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(var_value->class->vft[COLOR_string__Object__inspect]))(var_value) /* inspect on <var_value:RuntimeVariable>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = " isa ";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = " */";
var14 = 3;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 5;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var18)->values[4] = (val*) var12;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var19) /* add on <self:SeparateCompilerVisitor>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var_compiler = var20;
var21 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateCompilerVisitor>*/;
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1342);
show_backtrace(1);
} else {
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_compiler__Frame__arguments]))(var21) /* arguments on <var21:nullable Frame>*/;
}
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Collection__first]))(var22) /* first on <var22:Array[RuntimeVariable]>*/;
var_recv = var23;
var24 = ((val* (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__type_info]))(self, var_recv) /* type_info on <self:SeparateCompilerVisitor>*/;
var_recv_type_info = var24;
var25 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__bool_type]))(self) /* bool_type on <self:SeparateCompilerVisitor>*/;
var26 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var25) /* new_var on <self:SeparateCompilerVisitor>*/;
var_res = var26;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "cltype";
var30 = 6;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var28) /* get_name on <self:SeparateCompilerVisitor>*/;
var_cltype = var32;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "int ";
var36 = 4;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = ";";
var41 = 1;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 3;
var45 = NEW_array__NativeArray(var44, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var45)->values[0] = (val*) var34;
((struct instance_array__NativeArray*)var45)->values[1] = (val*) var_cltype;
((struct instance_array__NativeArray*)var45)->values[2] = (val*) var39;
((void (*)(val*, val*, long))(var43->class->vft[COLOR_array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
var46 = ((val* (*)(val*))(var43->class->vft[COLOR_string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var46) /* add_decl on <self:SeparateCompilerVisitor>*/;
if (varonce47) {
var48 = varonce47;
} else {
var49 = "idtype";
var50 = 6;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var48) /* get_name on <self:SeparateCompilerVisitor>*/;
var_idtype = var52;
if (varonce53) {
var54 = varonce53;
} else {
var55 = "int ";
var56 = 4;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = ";";
var61 = 1;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 3;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var_idtype;
((struct instance_array__NativeArray*)var65)->values[2] = (val*) var59;
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
}
var66 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var66) /* add_decl on <self:SeparateCompilerVisitor>*/;
var67 = ((short int (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__maybe_null]))(self, var_value) /* maybe_null on <self:SeparateCompilerVisitor>*/;
var_maybe_null = var67;
if (varonce68) {
var69 = varonce68;
} else {
var70 = "0";
var71 = 1;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var_accept_null = var69;
var_ntype = var_mtype;
/* <var_ntype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_ntype->type->table_size) {
var73 = 0;
} else {
var73 = var_ntype->type->type_table[cltype] == idtype;
}
if (var73){
var74 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_model__MNullableType__mtype]))(var_ntype) /* mtype on <var_ntype:MType(MNullableType)>*/;
var_ntype = var74;
if (varonce75) {
var76 = varonce75;
} else {
var77 = "1";
var78 = 1;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
var_accept_null = var76;
} else {
}
var80 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value) /* mcasttype on <var_value:RuntimeVariable>*/;
var81 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateCompilerVisitor>*/;
if (var81 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1360);
show_backtrace(1);
} else {
var82 = ((val* (*)(val*))(var81->class->vft[COLOR_abstract_compiler__Frame__mpropdef]))(var81) /* mpropdef on <var81:nullable Frame>*/;
}
var83 = ((val* (*)(val*))(var82->class->vft[COLOR_model__MPropDef__mclassdef]))(var82) /* mclassdef on <var82:MPropDef>*/;
var84 = ((val* (*)(val*))(var83->class->vft[COLOR_model__MClassDef__mmodule]))(var83) /* mmodule on <var83:MClassDef>*/;
var85 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateCompilerVisitor>*/;
if (var85 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1360);
show_backtrace(1);
} else {
var86 = ((val* (*)(val*))(var85->class->vft[COLOR_abstract_compiler__Frame__mpropdef]))(var85) /* mpropdef on <var85:nullable Frame>*/;
}
var87 = ((val* (*)(val*))(var86->class->vft[COLOR_model__MPropDef__mclassdef]))(var86) /* mclassdef on <var86:MPropDef>*/;
var88 = ((val* (*)(val*))(var87->class->vft[COLOR_model__MClassDef__bound_mtype]))(var87) /* bound_mtype on <var87:MClassDef>*/;
var89 = ((short int (*)(val*, val*, val*, val*))(var80->class->vft[COLOR_model__MType__is_subtype]))(var80, var84, var88, var_mtype) /* is_subtype on <var80:MType>*/;
if (var89){
if (varonce90) {
var91 = varonce90;
} else {
var92 = " = 1; /* easy ";
var93 = 14;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = ((val* (*)(val*))(var_value->class->vft[COLOR_string__Object__inspect]))(var_value) /* inspect on <var_value:RuntimeVariable>*/;
if (varonce96) {
var97 = varonce96;
} else {
var98 = " isa ";
var99 = 5;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "*/";
var104 = 2;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var106 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var106 = array_instance Array[Object] */
var107 = 6;
var108 = NEW_array__NativeArray(var107, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var108)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var108)->values[1] = (val*) var91;
((struct instance_array__NativeArray*)var108)->values[2] = (val*) var95;
((struct instance_array__NativeArray*)var108)->values[3] = (val*) var97;
((struct instance_array__NativeArray*)var108)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var108)->values[5] = (val*) var102;
((void (*)(val*, val*, long))(var106->class->vft[COLOR_array__Array__with_native]))(var106, var108, var107) /* with_native on <var106:Array[Object]>*/;
}
var109 = ((val* (*)(val*))(var106->class->vft[COLOR_string__Object__to_s]))(var106) /* to_s on <var106:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var109) /* add on <self:SeparateCompilerVisitor>*/;
var110 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var_compiler) /* modelbuilder on <var_compiler:SeparateCompiler>*/;
var111 = ((val* (*)(val*))(var110->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var110) /* toolcontext on <var110:ModelBuilder>*/;
var112 = ((val* (*)(val*))(var111->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var111) /* opt_typing_test_metrics on <var111:ToolContext>*/;
var113 = ((val* (*)(val*))(var112->class->vft[COLOR_opts__Option__value]))(var112) /* value on <var112:OptionBool>*/;
var114 = ((struct instance_kernel__Bool*)var113)->value; /* autounbox from nullable Object to Bool */;
if (var114){
var115 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var116 = ((val* (*)(val*))(var115->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_skipped]))(var115) /* count_type_test_skipped on <var115:AbstractCompiler(SeparateCompiler)>*/;
var_ = var116;
var_117 = var_tag;
var118 = ((val* (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_, var_117) /* [] on <var_:HashMap[String, Int]>*/;
var119 = 1;
{ /* Inline kernel#Int#+ (var118,var119) */
var122 = ((struct instance_kernel__Int*)var118)->value; /* autounbox from nullable Object to Int */;
var123 = var122 + var119;
var120 = var123;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
var124 = BOX_kernel__Int(var120); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_, var_117, var124) /* []= on <var_:HashMap[String, Int]>*/;
if (varonce125) {
var126 = varonce125;
} else {
var127 = "count_type_test_skipped_";
var128 = 24;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = "++;";
var133 = 3;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
var135 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var135 = array_instance Array[Object] */
var136 = 3;
var137 = NEW_array__NativeArray(var136, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var137)->values[0] = (val*) var126;
((struct instance_array__NativeArray*)var137)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var137)->values[2] = (val*) var131;
((void (*)(val*, val*, long))(var135->class->vft[COLOR_array__Array__with_native]))(var135, var137, var136) /* with_native on <var135:Array[Object]>*/;
}
var138 = ((val* (*)(val*))(var135->class->vft[COLOR_string__Object__to_s]))(var135) /* to_s on <var135:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var138) /* add on <self:SeparateCompilerVisitor>*/;
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
var139 = ((short int (*)(val*))(var_ntype->class->vft[COLOR_model__MType__need_anchor]))(var_ntype) /* need_anchor on <var_ntype:MType>*/;
if (var139){
if (varonce140) {
var141 = varonce140;
} else {
var142 = "type_struct";
var143 = 11;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
var145 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var141) /* get_name on <self:SeparateCompilerVisitor>*/;
var_type_struct = var145;
if (varonce146) {
var147 = varonce146;
} else {
var148 = "const struct type* ";
var149 = 19;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
if (varonce151) {
var152 = varonce151;
} else {
var153 = ";";
var154 = 1;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var156 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var156 = array_instance Array[Object] */
var157 = 3;
var158 = NEW_array__NativeArray(var157, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var158)->values[0] = (val*) var147;
((struct instance_array__NativeArray*)var158)->values[1] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var158)->values[2] = (val*) var152;
((void (*)(val*, val*, long))(var156->class->vft[COLOR_array__Array__with_native]))(var156, var158, var157) /* with_native on <var156:Array[Object]>*/;
}
var159 = ((val* (*)(val*))(var156->class->vft[COLOR_string__Object__to_s]))(var156) /* to_s on <var156:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var159) /* add_decl on <self:SeparateCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__hardening_live_open_type]))(self, var_mtype) /* hardening_live_open_type on <self:SeparateCompilerVisitor>*/;
var160 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateCompilerVisitor>*/;
if (var160 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1375);
show_backtrace(1);
} else {
var161 = ((val* (*)(val*))(var160->class->vft[COLOR_abstract_compiler__Frame__mpropdef]))(var160) /* mpropdef on <var160:nullable Frame>*/;
}
var162 = ((val* (*)(val*))(var161->class->vft[COLOR_model__MPropDef__mclassdef]))(var161) /* mclassdef on <var161:MPropDef>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__link_unresolved_type]))(self, var162, var_mtype) /* link_unresolved_type on <self:SeparateCompilerVisitor>*/;
var163 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__const_color]))(var_mtype) /* const_color on <var_mtype:MType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var163) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var165 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var_compiler) /* modelbuilder on <var_compiler:SeparateCompiler>*/;
var166 = ((val* (*)(val*))(var165->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var165) /* toolcontext on <var165:ModelBuilder>*/;
var167 = ((val* (*)(val*))(var166->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(var166) /* opt_phmod_typing on <var166:ToolContext>*/;
var168 = ((val* (*)(val*))(var167->class->vft[COLOR_opts__Option__value]))(var167) /* value on <var167:OptionBool>*/;
var169 = ((struct instance_kernel__Bool*)var168)->value; /* autounbox from nullable Object to Bool */;
var_170 = var169;
if (var169){
var164 = var_170;
} else {
var171 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var_compiler) /* modelbuilder on <var_compiler:SeparateCompiler>*/;
var172 = ((val* (*)(val*))(var171->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var171) /* toolcontext on <var171:ModelBuilder>*/;
var173 = ((val* (*)(val*))(var172->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(var172) /* opt_phand_typing on <var172:ToolContext>*/;
var174 = ((val* (*)(val*))(var173->class->vft[COLOR_opts__Option__value]))(var173) /* value on <var173:OptionBool>*/;
var175 = ((struct instance_kernel__Bool*)var174)->value; /* autounbox from nullable Object to Bool */;
var164 = var175;
}
if (var164){
if (varonce176) {
var177 = varonce176;
} else {
var178 = " = ";
var179 = 3;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
if (varonce181) {
var182 = varonce181;
} else {
var183 = "->resolution_table->types[HASH(";
var184 = 31;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
if (varonce186) {
var187 = varonce186;
} else {
var188 = "->resolution_table->mask, ";
var189 = 26;
var190 = string__NativeString__to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
var191 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__const_color]))(var_mtype) /* const_color on <var_mtype:MType>*/;
if (varonce192) {
var193 = varonce192;
} else {
var194 = ")];";
var195 = 3;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
var197 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var197 = array_instance Array[Object] */
var198 = 8;
var199 = NEW_array__NativeArray(var198, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var199)->values[0] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var199)->values[1] = (val*) var177;
((struct instance_array__NativeArray*)var199)->values[2] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var199)->values[3] = (val*) var182;
((struct instance_array__NativeArray*)var199)->values[4] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var199)->values[5] = (val*) var187;
((struct instance_array__NativeArray*)var199)->values[6] = (val*) var191;
((struct instance_array__NativeArray*)var199)->values[7] = (val*) var193;
((void (*)(val*, val*, long))(var197->class->vft[COLOR_array__Array__with_native]))(var197, var199, var198) /* with_native on <var197:Array[Object]>*/;
}
var200 = ((val* (*)(val*))(var197->class->vft[COLOR_string__Object__to_s]))(var197) /* to_s on <var197:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var200) /* add on <self:SeparateCompilerVisitor>*/;
} else {
if (varonce201) {
var202 = varonce201;
} else {
var203 = " = ";
var204 = 3;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
if (varonce206) {
var207 = varonce206;
} else {
var208 = "->resolution_table->types[";
var209 = 26;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
var211 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__const_color]))(var_mtype) /* const_color on <var_mtype:MType>*/;
if (varonce212) {
var213 = varonce212;
} else {
var214 = "];";
var215 = 2;
var216 = string__NativeString__to_s_with_length(var214, var215);
var213 = var216;
varonce212 = var213;
}
var217 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var217 = array_instance Array[Object] */
var218 = 6;
var219 = NEW_array__NativeArray(var218, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var219)->values[0] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var219)->values[1] = (val*) var202;
((struct instance_array__NativeArray*)var219)->values[2] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var219)->values[3] = (val*) var207;
((struct instance_array__NativeArray*)var219)->values[4] = (val*) var211;
((struct instance_array__NativeArray*)var219)->values[5] = (val*) var213;
((void (*)(val*, val*, long))(var217->class->vft[COLOR_array__Array__with_native]))(var217, var219, var218) /* with_native on <var217:Array[Object]>*/;
}
var220 = ((val* (*)(val*))(var217->class->vft[COLOR_string__Object__to_s]))(var217) /* to_s on <var217:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var220) /* add on <self:SeparateCompilerVisitor>*/;
}
var221 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var_compiler) /* modelbuilder on <var_compiler:SeparateCompiler>*/;
var222 = ((val* (*)(val*))(var221->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var221) /* toolcontext on <var221:ModelBuilder>*/;
var223 = ((val* (*)(val*))(var222->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var222) /* opt_typing_test_metrics on <var222:ToolContext>*/;
var224 = ((val* (*)(val*))(var223->class->vft[COLOR_opts__Option__value]))(var223) /* value on <var223:OptionBool>*/;
var225 = ((struct instance_kernel__Bool*)var224)->value; /* autounbox from nullable Object to Bool */;
if (var225){
var226 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var227 = ((val* (*)(val*))(var226->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_unresolved]))(var226) /* count_type_test_unresolved on <var226:AbstractCompiler(SeparateCompiler)>*/;
var_228 = var227;
var_229 = var_tag;
var230 = ((val* (*)(val*, val*))(var_228->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_228, var_229) /* [] on <var_228:HashMap[String, Int]>*/;
var231 = 1;
{ /* Inline kernel#Int#+ (var230,var231) */
var234 = ((struct instance_kernel__Int*)var230)->value; /* autounbox from nullable Object to Int */;
var235 = var234 + var231;
var232 = var235;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
var236 = BOX_kernel__Int(var232); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_228->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_228, var_229, var236) /* []= on <var_228:HashMap[String, Int]>*/;
if (varonce237) {
var238 = varonce237;
} else {
var239 = "count_type_test_unresolved_";
var240 = 27;
var241 = string__NativeString__to_s_with_length(var239, var240);
var238 = var241;
varonce237 = var238;
}
if (varonce242) {
var243 = varonce242;
} else {
var244 = "++;";
var245 = 3;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
var247 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var247 = array_instance Array[Object] */
var248 = 3;
var249 = NEW_array__NativeArray(var248, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var249)->values[0] = (val*) var238;
((struct instance_array__NativeArray*)var249)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var249)->values[2] = (val*) var243;
((void (*)(val*, val*, long))(var247->class->vft[COLOR_array__Array__with_native]))(var247, var249, var248) /* with_native on <var247:Array[Object]>*/;
}
var250 = ((val* (*)(val*))(var247->class->vft[COLOR_string__Object__to_s]))(var247) /* to_s on <var247:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var250) /* add on <self:SeparateCompilerVisitor>*/;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__hardening_cast_type]))(self, var_type_struct) /* hardening_cast_type on <self:SeparateCompilerVisitor>*/;
if (varonce251) {
var252 = varonce251;
} else {
var253 = " = ";
var254 = 3;
var255 = string__NativeString__to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
if (varonce256) {
var257 = varonce256;
} else {
var258 = "->color;";
var259 = 8;
var260 = string__NativeString__to_s_with_length(var258, var259);
var257 = var260;
varonce256 = var257;
}
var261 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var261 = array_instance Array[Object] */
var262 = 4;
var263 = NEW_array__NativeArray(var262, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var263)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var263)->values[1] = (val*) var252;
((struct instance_array__NativeArray*)var263)->values[2] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var263)->values[3] = (val*) var257;
((void (*)(val*, val*, long))(var261->class->vft[COLOR_array__Array__with_native]))(var261, var263, var262) /* with_native on <var261:Array[Object]>*/;
}
var264 = ((val* (*)(val*))(var261->class->vft[COLOR_string__Object__to_s]))(var261) /* to_s on <var261:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var264) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce265) {
var266 = varonce265;
} else {
var267 = " = ";
var268 = 3;
var269 = string__NativeString__to_s_with_length(var267, var268);
var266 = var269;
varonce265 = var266;
}
if (varonce270) {
var271 = varonce270;
} else {
var272 = "->id;";
var273 = 5;
var274 = string__NativeString__to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
var275 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var275 = array_instance Array[Object] */
var276 = 4;
var277 = NEW_array__NativeArray(var276, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var277)->values[0] = (val*) var_idtype;
((struct instance_array__NativeArray*)var277)->values[1] = (val*) var266;
((struct instance_array__NativeArray*)var277)->values[2] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var277)->values[3] = (val*) var271;
((void (*)(val*, val*, long))(var275->class->vft[COLOR_array__Array__with_native]))(var275, var277, var276) /* with_native on <var275:Array[Object]>*/;
}
var278 = ((val* (*)(val*))(var275->class->vft[COLOR_string__Object__to_s]))(var275) /* to_s on <var275:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var278) /* add on <self:SeparateCompilerVisitor>*/;
var_280 = var_maybe_null;
if (var_maybe_null){
if (varonce281) {
var282 = varonce281;
} else {
var283 = "0";
var284 = 1;
var285 = string__NativeString__to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
var286 = ((short int (*)(val*, val*))(var_accept_null->class->vft[COLOR_kernel__Object___61d_61d]))(var_accept_null, var282) /* == on <var_accept_null:String>*/;
var279 = var286;
} else {
var279 = var_280;
}
if (var279){
if (varonce287) {
var288 = varonce287;
} else {
var289 = "is_nullable";
var290 = 11;
var291 = string__NativeString__to_s_with_length(var289, var290);
var288 = var291;
varonce287 = var288;
}
var292 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var288) /* get_name on <self:SeparateCompilerVisitor>*/;
var_is_nullable = var292;
if (varonce293) {
var294 = varonce293;
} else {
var295 = "short int ";
var296 = 10;
var297 = string__NativeString__to_s_with_length(var295, var296);
var294 = var297;
varonce293 = var294;
}
if (varonce298) {
var299 = varonce298;
} else {
var300 = ";";
var301 = 1;
var302 = string__NativeString__to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
var303 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var303 = array_instance Array[Object] */
var304 = 3;
var305 = NEW_array__NativeArray(var304, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var305)->values[0] = (val*) var294;
((struct instance_array__NativeArray*)var305)->values[1] = (val*) var_is_nullable;
((struct instance_array__NativeArray*)var305)->values[2] = (val*) var299;
((void (*)(val*, val*, long))(var303->class->vft[COLOR_array__Array__with_native]))(var303, var305, var304) /* with_native on <var303:Array[Object]>*/;
}
var306 = ((val* (*)(val*))(var303->class->vft[COLOR_string__Object__to_s]))(var303) /* to_s on <var303:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var306) /* add_decl on <self:SeparateCompilerVisitor>*/;
if (varonce307) {
var308 = varonce307;
} else {
var309 = " = ";
var310 = 3;
var311 = string__NativeString__to_s_with_length(var309, var310);
var308 = var311;
varonce307 = var308;
}
if (varonce312) {
var313 = varonce312;
} else {
var314 = "->is_nullable;";
var315 = 14;
var316 = string__NativeString__to_s_with_length(var314, var315);
var313 = var316;
varonce312 = var313;
}
var317 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var317 = array_instance Array[Object] */
var318 = 4;
var319 = NEW_array__NativeArray(var318, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var319)->values[0] = (val*) var_is_nullable;
((struct instance_array__NativeArray*)var319)->values[1] = (val*) var308;
((struct instance_array__NativeArray*)var319)->values[2] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var319)->values[3] = (val*) var313;
((void (*)(val*, val*, long))(var317->class->vft[COLOR_array__Array__with_native]))(var317, var319, var318) /* with_native on <var317:Array[Object]>*/;
}
var320 = ((val* (*)(val*))(var317->class->vft[COLOR_string__Object__to_s]))(var317) /* to_s on <var317:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var320) /* add on <self:SeparateCompilerVisitor>*/;
var321 = ((val* (*)(val*))(var_is_nullable->class->vft[COLOR_string__Object__to_s]))(var_is_nullable) /* to_s on <var_is_nullable:String>*/;
var_accept_null = var321;
} else {
}
} else {
/* <var_ntype:MType> isa MClassType */
cltype323 = type_model__MClassType.color;
idtype324 = type_model__MClassType.id;
if(cltype323 >= var_ntype->type->table_size) {
var322 = 0;
} else {
var322 = var_ntype->type->type_table[cltype323] == idtype324;
}
if (var322){
var325 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__undead_types]))(var_compiler) /* undead_types on <var_compiler:SeparateCompiler>*/;
((void (*)(val*, val*))(var325->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var325, var_mtype) /* add on <var325:Set[MType]>*/;
if (varonce326) {
var327 = varonce326;
} else {
var328 = "type_";
var329 = 5;
var330 = string__NativeString__to_s_with_length(var328, var329);
var327 = var330;
varonce326 = var327;
}
var331 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
var332 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var332 = array_instance Array[Object] */
var333 = 2;
var334 = NEW_array__NativeArray(var333, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var334)->values[0] = (val*) var327;
((struct instance_array__NativeArray*)var334)->values[1] = (val*) var331;
((void (*)(val*, val*, long))(var332->class->vft[COLOR_array__Array__with_native]))(var332, var334, var333) /* with_native on <var332:Array[Object]>*/;
}
var335 = ((val* (*)(val*))(var332->class->vft[COLOR_string__Object__to_s]))(var332) /* to_s on <var332:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var335) /* require_declaration on <self:SeparateCompilerVisitor>*/;
if (varonce336) {
var337 = varonce336;
} else {
var338 = "(&type_";
var339 = 7;
var340 = string__NativeString__to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
var341 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
if (varonce342) {
var343 = varonce342;
} else {
var344 = ")";
var345 = 1;
var346 = string__NativeString__to_s_with_length(var344, var345);
var343 = var346;
varonce342 = var343;
}
var347 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var347 = array_instance Array[Object] */
var348 = 3;
var349 = NEW_array__NativeArray(var348, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var349)->values[0] = (val*) var337;
((struct instance_array__NativeArray*)var349)->values[1] = (val*) var341;
((struct instance_array__NativeArray*)var349)->values[2] = (val*) var343;
((void (*)(val*, val*, long))(var347->class->vft[COLOR_array__Array__with_native]))(var347, var349, var348) /* with_native on <var347:Array[Object]>*/;
}
var350 = ((val* (*)(val*))(var347->class->vft[COLOR_string__Object__to_s]))(var347) /* to_s on <var347:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__hardening_cast_type]))(self, var350) /* hardening_cast_type on <self:SeparateCompilerVisitor>*/;
if (varonce351) {
var352 = varonce351;
} else {
var353 = " = type_";
var354 = 8;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
var356 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
if (varonce357) {
var358 = varonce357;
} else {
var359 = ".color;";
var360 = 7;
var361 = string__NativeString__to_s_with_length(var359, var360);
var358 = var361;
varonce357 = var358;
}
var362 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var362 = array_instance Array[Object] */
var363 = 4;
var364 = NEW_array__NativeArray(var363, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var364)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var364)->values[1] = (val*) var352;
((struct instance_array__NativeArray*)var364)->values[2] = (val*) var356;
((struct instance_array__NativeArray*)var364)->values[3] = (val*) var358;
((void (*)(val*, val*, long))(var362->class->vft[COLOR_array__Array__with_native]))(var362, var364, var363) /* with_native on <var362:Array[Object]>*/;
}
var365 = ((val* (*)(val*))(var362->class->vft[COLOR_string__Object__to_s]))(var362) /* to_s on <var362:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var365) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce366) {
var367 = varonce366;
} else {
var368 = " = type_";
var369 = 8;
var370 = string__NativeString__to_s_with_length(var368, var369);
var367 = var370;
varonce366 = var367;
}
var371 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
if (varonce372) {
var373 = varonce372;
} else {
var374 = ".id;";
var375 = 4;
var376 = string__NativeString__to_s_with_length(var374, var375);
var373 = var376;
varonce372 = var373;
}
var377 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var377 = array_instance Array[Object] */
var378 = 4;
var379 = NEW_array__NativeArray(var378, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var379)->values[0] = (val*) var_idtype;
((struct instance_array__NativeArray*)var379)->values[1] = (val*) var367;
((struct instance_array__NativeArray*)var379)->values[2] = (val*) var371;
((struct instance_array__NativeArray*)var379)->values[3] = (val*) var373;
((void (*)(val*, val*, long))(var377->class->vft[COLOR_array__Array__with_native]))(var377, var379, var378) /* with_native on <var377:Array[Object]>*/;
}
var380 = ((val* (*)(val*))(var377->class->vft[COLOR_string__Object__to_s]))(var377) /* to_s on <var377:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var380) /* add on <self:SeparateCompilerVisitor>*/;
var381 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var_compiler) /* modelbuilder on <var_compiler:SeparateCompiler>*/;
var382 = ((val* (*)(val*))(var381->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var381) /* toolcontext on <var381:ModelBuilder>*/;
var383 = ((val* (*)(val*))(var382->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var382) /* opt_typing_test_metrics on <var382:ToolContext>*/;
var384 = ((val* (*)(val*))(var383->class->vft[COLOR_opts__Option__value]))(var383) /* value on <var383:OptionBool>*/;
var385 = ((struct instance_kernel__Bool*)var384)->value; /* autounbox from nullable Object to Bool */;
if (var385){
var386 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var387 = ((val* (*)(val*))(var386->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_resolved]))(var386) /* count_type_test_resolved on <var386:AbstractCompiler(SeparateCompiler)>*/;
var_388 = var387;
var_389 = var_tag;
var390 = ((val* (*)(val*, val*))(var_388->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_388, var_389) /* [] on <var_388:HashMap[String, Int]>*/;
var391 = 1;
{ /* Inline kernel#Int#+ (var390,var391) */
var394 = ((struct instance_kernel__Int*)var390)->value; /* autounbox from nullable Object to Int */;
var395 = var394 + var391;
var392 = var395;
goto RET_LABEL393;
RET_LABEL393:(void)0;
}
var396 = BOX_kernel__Int(var392); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_388->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_388, var_389, var396) /* []= on <var_388:HashMap[String, Int]>*/;
if (varonce397) {
var398 = varonce397;
} else {
var399 = "count_type_test_resolved_";
var400 = 25;
var401 = string__NativeString__to_s_with_length(var399, var400);
var398 = var401;
varonce397 = var398;
}
if (varonce402) {
var403 = varonce402;
} else {
var404 = "++;";
var405 = 3;
var406 = string__NativeString__to_s_with_length(var404, var405);
var403 = var406;
varonce402 = var403;
}
var407 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var407 = array_instance Array[Object] */
var408 = 3;
var409 = NEW_array__NativeArray(var408, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var409)->values[0] = (val*) var398;
((struct instance_array__NativeArray*)var409)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var409)->values[2] = (val*) var403;
((void (*)(val*, val*, long))(var407->class->vft[COLOR_array__Array__with_native]))(var407, var409, var408) /* with_native on <var407:Array[Object]>*/;
}
var410 = ((val* (*)(val*))(var407->class->vft[COLOR_string__Object__to_s]))(var407) /* to_s on <var407:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var410) /* add on <self:SeparateCompilerVisitor>*/;
} else {
}
} else {
if (varonce411) {
var412 = varonce411;
} else {
var413 = "printf(\"NOT YET IMPLEMENTED: type_test(%s, ";
var414 = 43;
var415 = string__NativeString__to_s_with_length(var413, var414);
var412 = var415;
varonce411 = var412;
}
if (varonce416) {
var417 = varonce416;
} else {
var418 = ").\\n\", \"";
var419 = 8;
var420 = string__NativeString__to_s_with_length(var418, var419);
var417 = var420;
varonce416 = var417;
}
var421 = ((val* (*)(val*))(var_value->class->vft[COLOR_string__Object__inspect]))(var_value) /* inspect on <var_value:RuntimeVariable>*/;
if (varonce422) {
var423 = varonce422;
} else {
var424 = "\"); show_backtrace(1);";
var425 = 22;
var426 = string__NativeString__to_s_with_length(var424, var425);
var423 = var426;
varonce422 = var423;
}
var427 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var427 = array_instance Array[Object] */
var428 = 5;
var429 = NEW_array__NativeArray(var428, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var429)->values[0] = (val*) var412;
((struct instance_array__NativeArray*)var429)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var429)->values[2] = (val*) var417;
((struct instance_array__NativeArray*)var429)->values[3] = (val*) var421;
((struct instance_array__NativeArray*)var429)->values[4] = (val*) var423;
((void (*)(val*, val*, long))(var427->class->vft[COLOR_array__Array__with_native]))(var427, var429, var428) /* with_native on <var427:Array[Object]>*/;
}
var430 = ((val* (*)(val*))(var427->class->vft[COLOR_string__Object__to_s]))(var427) /* to_s on <var427:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var430) /* add on <self:SeparateCompilerVisitor>*/;
}
}
if (var_maybe_null){
if (varonce431) {
var432 = varonce431;
} else {
var433 = "if(";
var434 = 3;
var435 = string__NativeString__to_s_with_length(var433, var434);
var432 = var435;
varonce431 = var432;
}
if (varonce436) {
var437 = varonce436;
} else {
var438 = " == NULL) {";
var439 = 11;
var440 = string__NativeString__to_s_with_length(var438, var439);
var437 = var440;
varonce436 = var437;
}
var441 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var441 = array_instance Array[Object] */
var442 = 3;
var443 = NEW_array__NativeArray(var442, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var443)->values[0] = (val*) var432;
((struct instance_array__NativeArray*)var443)->values[1] = (val*) var_value;
((struct instance_array__NativeArray*)var443)->values[2] = (val*) var437;
((void (*)(val*, val*, long))(var441->class->vft[COLOR_array__Array__with_native]))(var441, var443, var442) /* with_native on <var441:Array[Object]>*/;
}
var444 = ((val* (*)(val*))(var441->class->vft[COLOR_string__Object__to_s]))(var441) /* to_s on <var441:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var444) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce445) {
var446 = varonce445;
} else {
var447 = " = ";
var448 = 3;
var449 = string__NativeString__to_s_with_length(var447, var448);
var446 = var449;
varonce445 = var446;
}
if (varonce450) {
var451 = varonce450;
} else {
var452 = ";";
var453 = 1;
var454 = string__NativeString__to_s_with_length(var452, var453);
var451 = var454;
varonce450 = var451;
}
var455 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var455 = array_instance Array[Object] */
var456 = 4;
var457 = NEW_array__NativeArray(var456, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var457)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var457)->values[1] = (val*) var446;
((struct instance_array__NativeArray*)var457)->values[2] = (val*) var_accept_null;
((struct instance_array__NativeArray*)var457)->values[3] = (val*) var451;
((void (*)(val*, val*, long))(var455->class->vft[COLOR_array__Array__with_native]))(var455, var457, var456) /* with_native on <var455:Array[Object]>*/;
}
var458 = ((val* (*)(val*))(var455->class->vft[COLOR_string__Object__to_s]))(var455) /* to_s on <var455:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var458) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce459) {
var460 = varonce459;
} else {
var461 = "} else {";
var462 = 8;
var463 = string__NativeString__to_s_with_length(var461, var462);
var460 = var463;
varonce459 = var460;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var460) /* add on <self:SeparateCompilerVisitor>*/;
} else {
}
var464 = ((val* (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__type_info]))(self, var_value) /* type_info on <self:SeparateCompilerVisitor>*/;
var_value_type_info = var464;
var466 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var_compiler) /* modelbuilder on <var_compiler:SeparateCompiler>*/;
var467 = ((val* (*)(val*))(var466->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var466) /* toolcontext on <var466:ModelBuilder>*/;
var468 = ((val* (*)(val*))(var467->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(var467) /* opt_phmod_typing on <var467:ToolContext>*/;
var469 = ((val* (*)(val*))(var468->class->vft[COLOR_opts__Option__value]))(var468) /* value on <var468:OptionBool>*/;
var470 = ((struct instance_kernel__Bool*)var469)->value; /* autounbox from nullable Object to Bool */;
var_471 = var470;
if (var470){
var465 = var_471;
} else {
var472 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var_compiler) /* modelbuilder on <var_compiler:SeparateCompiler>*/;
var473 = ((val* (*)(val*))(var472->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var472) /* toolcontext on <var472:ModelBuilder>*/;
var474 = ((val* (*)(val*))(var473->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(var473) /* opt_phand_typing on <var473:ToolContext>*/;
var475 = ((val* (*)(val*))(var474->class->vft[COLOR_opts__Option__value]))(var474) /* value on <var474:OptionBool>*/;
var476 = ((struct instance_kernel__Bool*)var475)->value; /* autounbox from nullable Object to Bool */;
var465 = var476;
}
if (var465){
if (varonce477) {
var478 = varonce477;
} else {
var479 = " = HASH(";
var480 = 8;
var481 = string__NativeString__to_s_with_length(var479, var480);
var478 = var481;
varonce477 = var478;
}
if (varonce482) {
var483 = varonce482;
} else {
var484 = "->color, ";
var485 = 9;
var486 = string__NativeString__to_s_with_length(var484, var485);
var483 = var486;
varonce482 = var483;
}
if (varonce487) {
var488 = varonce487;
} else {
var489 = ");";
var490 = 2;
var491 = string__NativeString__to_s_with_length(var489, var490);
var488 = var491;
varonce487 = var488;
}
var492 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var492 = array_instance Array[Object] */
var493 = 6;
var494 = NEW_array__NativeArray(var493, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var494)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var494)->values[1] = (val*) var478;
((struct instance_array__NativeArray*)var494)->values[2] = (val*) var_value_type_info;
((struct instance_array__NativeArray*)var494)->values[3] = (val*) var483;
((struct instance_array__NativeArray*)var494)->values[4] = (val*) var_idtype;
((struct instance_array__NativeArray*)var494)->values[5] = (val*) var488;
((void (*)(val*, val*, long))(var492->class->vft[COLOR_array__Array__with_native]))(var492, var494, var493) /* with_native on <var492:Array[Object]>*/;
}
var495 = ((val* (*)(val*))(var492->class->vft[COLOR_string__Object__to_s]))(var492) /* to_s on <var492:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var495) /* add on <self:SeparateCompilerVisitor>*/;
} else {
}
if (varonce496) {
var497 = varonce496;
} else {
var498 = "if(";
var499 = 3;
var500 = string__NativeString__to_s_with_length(var498, var499);
var497 = var500;
varonce496 = var497;
}
if (varonce501) {
var502 = varonce501;
} else {
var503 = " >= ";
var504 = 4;
var505 = string__NativeString__to_s_with_length(var503, var504);
var502 = var505;
varonce501 = var502;
}
if (varonce506) {
var507 = varonce506;
} else {
var508 = "->table_size) {";
var509 = 15;
var510 = string__NativeString__to_s_with_length(var508, var509);
var507 = var510;
varonce506 = var507;
}
var511 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var511 = array_instance Array[Object] */
var512 = 5;
var513 = NEW_array__NativeArray(var512, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var513)->values[0] = (val*) var497;
((struct instance_array__NativeArray*)var513)->values[1] = (val*) var_cltype;
((struct instance_array__NativeArray*)var513)->values[2] = (val*) var502;
((struct instance_array__NativeArray*)var513)->values[3] = (val*) var_value_type_info;
((struct instance_array__NativeArray*)var513)->values[4] = (val*) var507;
((void (*)(val*, val*, long))(var511->class->vft[COLOR_array__Array__with_native]))(var511, var513, var512) /* with_native on <var511:Array[Object]>*/;
}
var514 = ((val* (*)(val*))(var511->class->vft[COLOR_string__Object__to_s]))(var511) /* to_s on <var511:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var514) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce515) {
var516 = varonce515;
} else {
var517 = " = 0;";
var518 = 5;
var519 = string__NativeString__to_s_with_length(var517, var518);
var516 = var519;
varonce515 = var516;
}
var520 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var520 = array_instance Array[Object] */
var521 = 2;
var522 = NEW_array__NativeArray(var521, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var522)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var522)->values[1] = (val*) var516;
((void (*)(val*, val*, long))(var520->class->vft[COLOR_array__Array__with_native]))(var520, var522, var521) /* with_native on <var520:Array[Object]>*/;
}
var523 = ((val* (*)(val*))(var520->class->vft[COLOR_string__Object__to_s]))(var520) /* to_s on <var520:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var523) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce524) {
var525 = varonce524;
} else {
var526 = "} else {";
var527 = 8;
var528 = string__NativeString__to_s_with_length(var526, var527);
var525 = var528;
varonce524 = var525;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var525) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce529) {
var530 = varonce529;
} else {
var531 = " = ";
var532 = 3;
var533 = string__NativeString__to_s_with_length(var531, var532);
var530 = var533;
varonce529 = var530;
}
if (varonce534) {
var535 = varonce534;
} else {
var536 = "->type_table[";
var537 = 13;
var538 = string__NativeString__to_s_with_length(var536, var537);
var535 = var538;
varonce534 = var535;
}
if (varonce539) {
var540 = varonce539;
} else {
var541 = "] == ";
var542 = 5;
var543 = string__NativeString__to_s_with_length(var541, var542);
var540 = var543;
varonce539 = var540;
}
if (varonce544) {
var545 = varonce544;
} else {
var546 = ";";
var547 = 1;
var548 = string__NativeString__to_s_with_length(var546, var547);
var545 = var548;
varonce544 = var545;
}
var549 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var549 = array_instance Array[Object] */
var550 = 8;
var551 = NEW_array__NativeArray(var550, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var551)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var551)->values[1] = (val*) var530;
((struct instance_array__NativeArray*)var551)->values[2] = (val*) var_value_type_info;
((struct instance_array__NativeArray*)var551)->values[3] = (val*) var535;
((struct instance_array__NativeArray*)var551)->values[4] = (val*) var_cltype;
((struct instance_array__NativeArray*)var551)->values[5] = (val*) var540;
((struct instance_array__NativeArray*)var551)->values[6] = (val*) var_idtype;
((struct instance_array__NativeArray*)var551)->values[7] = (val*) var545;
((void (*)(val*, val*, long))(var549->class->vft[COLOR_array__Array__with_native]))(var549, var551, var550) /* with_native on <var549:Array[Object]>*/;
}
var552 = ((val* (*)(val*))(var549->class->vft[COLOR_string__Object__to_s]))(var549) /* to_s on <var549:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var552) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce553) {
var554 = varonce553;
} else {
var555 = "}";
var556 = 1;
var557 = string__NativeString__to_s_with_length(var555, var556);
var554 = var557;
varonce553 = var554;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var554) /* add on <self:SeparateCompilerVisitor>*/;
if (var_maybe_null){
if (varonce558) {
var559 = varonce558;
} else {
var560 = "}";
var561 = 1;
var562 = string__NativeString__to_s_with_length(var560, var561);
var559 = var562;
varonce558 = var559;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var559) /* add on <self:SeparateCompilerVisitor>*/;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#type_test for (self: Object, RuntimeVariable, MType, String): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__type_test(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#is_same_type_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
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
val* var35 /* : MType */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
val* var41 /* : MType */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
val* var51 /* : MType */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
short int var58 /* : Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : MType */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : MType */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
val* var80 /* : MType */;
short int var81 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var88 /* : Array[Object] */;
long var89 /* : Int */;
val* var90 /* : NativeArray[Object] */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : String */;
val* var113 /* : Array[Object] */;
long var114 /* : Int */;
val* var115 /* : NativeArray[Object] */;
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : String */;
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
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : String */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : String */;
val* var152 /* : Array[Object] */;
long var153 /* : Int */;
val* var154 /* : NativeArray[Object] */;
val* var155 /* : String */;
var_value1 = p0;
var_value2 = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__bool_type]))(self) /* bool_type on <self:SeparateCompilerVisitor>*/;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var1) /* new_var on <self:SeparateCompilerVisitor>*/;
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
var32 = " = 1; /* is_same_type_test: compatible types ";
var33 = 45;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = " vs. ";
var39 = 5;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value2) /* mtype on <var_value2:RuntimeVariable>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = " */";
var45 = 3;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 6;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var31;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var35;
((struct instance_array__NativeArray*)var49)->values[3] = (val*) var37;
((struct instance_array__NativeArray*)var49)->values[4] = (val*) var41;
((struct instance_array__NativeArray*)var49)->values[5] = (val*) var43;
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var50) /* add on <self:SeparateCompilerVisitor>*/;
} else {
var51 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value2) /* mtype on <var_value2:RuntimeVariable>*/;
var52 = ((val* (*)(val*))(var51->class->vft[COLOR_abstract_compiler__MType__ctype]))(var51) /* ctype on <var51:MType>*/;
if (varonce53) {
var54 = varonce53;
} else {
var55 = "val*";
var56 = 4;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = ((short int (*)(val*, val*))(var52->class->vft[COLOR_kernel__Object___33d_61d]))(var52, var54) /* != on <var52:String>*/;
if (var58){
if (varonce59) {
var60 = varonce59;
} else {
var61 = " = 0; /* is_same_type_test: incompatible types ";
var62 = 47;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = " vs. ";
var68 = 5;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value2) /* mtype on <var_value2:RuntimeVariable>*/;
if (varonce71) {
var72 = varonce71;
} else {
var73 = "*/";
var74 = 2;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 6;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var60;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var64;
((struct instance_array__NativeArray*)var78)->values[3] = (val*) var66;
((struct instance_array__NativeArray*)var78)->values[4] = (val*) var70;
((struct instance_array__NativeArray*)var78)->values[5] = (val*) var72;
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var79) /* add on <self:SeparateCompilerVisitor>*/;
} else {
var80 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
/* <var80:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var80->type->table_size) {
var81 = 0;
} else {
var81 = var80->type->type_table[cltype] == idtype;
}
if (!var81) {
var_class_name = var80 == NULL ? "null" : var80->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1446);
show_backtrace(1);
}
var_mtype1 = var80;
if (varonce82) {
var83 = varonce82;
} else {
var84 = "class_";
var85 = 6;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var87 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
var88 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var88 = array_instance Array[Object] */
var89 = 2;
var90 = NEW_array__NativeArray(var89, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var90)->values[0] = (val*) var83;
((struct instance_array__NativeArray*)var90)->values[1] = (val*) var87;
((void (*)(val*, val*, long))(var88->class->vft[COLOR_array__Array__with_native]))(var88, var90, var89) /* with_native on <var88:Array[Object]>*/;
}
var91 = ((val* (*)(val*))(var88->class->vft[COLOR_string__Object__to_s]))(var88) /* to_s on <var88:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var91) /* require_declaration on <self:SeparateCompilerVisitor>*/;
if (varonce92) {
var93 = varonce92;
} else {
var94 = " = (";
var95 = 4;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = " != NULL) && (";
var100 = 14;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = "->class == &class_";
var105 = 18;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
if (varonce108) {
var109 = varonce108;
} else {
var110 = "); /* is_same_type_test */";
var111 = 26;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
var113 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var113 = array_instance Array[Object] */
var114 = 8;
var115 = NEW_array__NativeArray(var114, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var115)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var115)->values[1] = (val*) var93;
((struct instance_array__NativeArray*)var115)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var115)->values[3] = (val*) var98;
((struct instance_array__NativeArray*)var115)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var115)->values[5] = (val*) var103;
((struct instance_array__NativeArray*)var115)->values[6] = (val*) var107;
((struct instance_array__NativeArray*)var115)->values[7] = (val*) var109;
((void (*)(val*, val*, long))(var113->class->vft[COLOR_array__Array__with_native]))(var113, var115, var114) /* with_native on <var113:Array[Object]>*/;
}
var116 = ((val* (*)(val*))(var113->class->vft[COLOR_string__Object__to_s]))(var113) /* to_s on <var113:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var116) /* add on <self:SeparateCompilerVisitor>*/;
}
}
} else {
if (varonce117) {
var118 = varonce117;
} else {
var119 = " = (";
var120 = 4;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = " == ";
var125 = 4;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = ") || (";
var130 = 6;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = " != NULL && ";
var135 = 12;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = " != NULL && ";
var140 = 12;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = "->class == ";
var145 = 11;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
if (varonce147) {
var148 = varonce147;
} else {
var149 = "->class); /* is_same_type_test */";
var150 = 33;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
var152 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var152 = array_instance Array[Object] */
var153 = 14;
var154 = NEW_array__NativeArray(var153, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var154)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var154)->values[1] = (val*) var118;
((struct instance_array__NativeArray*)var154)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var154)->values[3] = (val*) var123;
((struct instance_array__NativeArray*)var154)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var154)->values[5] = (val*) var128;
((struct instance_array__NativeArray*)var154)->values[6] = (val*) var_value1;
((struct instance_array__NativeArray*)var154)->values[7] = (val*) var133;
((struct instance_array__NativeArray*)var154)->values[8] = (val*) var_value2;
((struct instance_array__NativeArray*)var154)->values[9] = (val*) var138;
((struct instance_array__NativeArray*)var154)->values[10] = (val*) var_value1;
((struct instance_array__NativeArray*)var154)->values[11] = (val*) var143;
((struct instance_array__NativeArray*)var154)->values[12] = (val*) var_value2;
((struct instance_array__NativeArray*)var154)->values[13] = (val*) var148;
((void (*)(val*, val*, long))(var152->class->vft[COLOR_array__Array__with_native]))(var152, var154, var153) /* with_native on <var152:Array[Object]>*/;
}
var155 = ((val* (*)(val*))(var152->class->vft[COLOR_string__Object__to_s]))(var152) /* to_s on <var152:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var155) /* add on <self:SeparateCompilerVisitor>*/;
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#is_same_type_test for (self: Object, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__is_same_type_test(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#class_name_string for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* separate_compiler__SeparateCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var_res /* var res: String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : MType */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
short int var27 /* : Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[Object] */;
val* var46 /* : String */;
short int var47 /* : Bool */;
val* var48 /* : MType */;
short int var49 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var50 /* : MType */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name;
val* var54 /* : MClass */;
val* var55 /* : MClassKind */;
val* var56 /* : MClassKind */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : MType */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
val* var68 /* : MClass */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var76 /* : NativeArray[Object] */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : String */;
val* var83 /* : MType */;
val* var84 /* : String */;
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var87 /* : NativeArray[Object] */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
val* var94 /* : MType */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : Array[Object] */;
long var102 /* : Int */;
val* var103 /* : NativeArray[Object] */;
val* var104 /* : String */;
var_value = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "var_class_name";
var3 = 14;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var1) /* get_name on <self:SeparateCompilerVisitor>*/;
var_res = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "const char* ";
var9 = 12;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ";";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var19) /* add_decl on <self:SeparateCompilerVisitor>*/;
var20 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_compiler__MType__ctype]))(var20) /* ctype on <var20:MType>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "val*";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var23) /* == on <var21:String>*/;
if (var27){
if (varonce28) {
var29 = varonce28;
} else {
var30 = " = ";
var31 = 3;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = " == NULL ? \"null\" : ";
var36 = 20;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = "->type->name;";
var41 = 13;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 6;
var45 = NEW_array__NativeArray(var44, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var45)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var45)->values[1] = (val*) var29;
((struct instance_array__NativeArray*)var45)->values[2] = (val*) var_value;
((struct instance_array__NativeArray*)var45)->values[3] = (val*) var34;
((struct instance_array__NativeArray*)var45)->values[4] = (val*) var_value;
((struct instance_array__NativeArray*)var45)->values[5] = (val*) var39;
((void (*)(val*, val*, long))(var43->class->vft[COLOR_array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
var46 = ((val* (*)(val*))(var43->class->vft[COLOR_string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var46) /* add on <self:SeparateCompilerVisitor>*/;
} else {
var48 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
/* <var48:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var48->type->table_size) {
var49 = 0;
} else {
var49 = var48->type->type_table[cltype] == idtype;
}
var_ = var49;
if (var49){
var50 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
/* <var50:MType> isa MClassType */
cltype52 = type_model__MClassType.color;
idtype53 = type_model__MClassType.id;
if(cltype52 >= var50->type->table_size) {
var51 = 0;
} else {
var51 = var50->type->type_table[cltype52] == idtype53;
}
if (!var51) {
var_class_name = var50 == NULL ? "null" : var50->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1462);
show_backtrace(1);
}
var54 = ((val* (*)(val*))(var50->class->vft[COLOR_model__MClassType__mclass]))(var50) /* mclass on <var50:MType(MClassType)>*/;
var55 = ((val* (*)(val*))(var54->class->vft[COLOR_model__MClass__kind]))(var54) /* kind on <var54:MClass>*/;
var56 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:SeparateCompilerVisitor>*/;
var57 = ((short int (*)(val*, val*))(var55->class->vft[COLOR_kernel__Object___61d_61d]))(var55, var56) /* == on <var55:MClassKind>*/;
var47 = var57;
} else {
var47 = var_;
}
if (var47){
if (varonce58) {
var59 = varonce58;
} else {
var60 = " = \"";
var61 = 4;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
/* <var63:MType> isa MClassType */
cltype65 = type_model__MClassType.color;
idtype66 = type_model__MClassType.id;
if(cltype65 >= var63->type->table_size) {
var64 = 0;
} else {
var64 = var63->type->type_table[cltype65] == idtype66;
}
if (!var64) {
var_class_name67 = var63 == NULL ? "null" : var63->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name67);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1463);
show_backtrace(1);
}
var68 = ((val* (*)(val*))(var63->class->vft[COLOR_model__MClassType__mclass]))(var63) /* mclass on <var63:MType(MClassType)>*/;
if (varonce69) {
var70 = varonce69;
} else {
var71 = "\";";
var72 = 2;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 4;
var76 = NEW_array__NativeArray(var75, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var76)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var76)->values[1] = (val*) var59;
((struct instance_array__NativeArray*)var76)->values[2] = (val*) var68;
((struct instance_array__NativeArray*)var76)->values[3] = (val*) var70;
((void (*)(val*, val*, long))(var74->class->vft[COLOR_array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
var77 = ((val* (*)(val*))(var74->class->vft[COLOR_string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var77) /* add on <self:SeparateCompilerVisitor>*/;
} else {
if (varonce78) {
var79 = varonce78;
} else {
var80 = "type_";
var81 = 5;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
var83 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var84 = ((val* (*)(val*))(var83->class->vft[COLOR_abstract_compiler__MType__c_name]))(var83) /* c_name on <var83:MType>*/;
var85 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var85 = array_instance Array[Object] */
var86 = 2;
var87 = NEW_array__NativeArray(var86, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var87)->values[0] = (val*) var79;
((struct instance_array__NativeArray*)var87)->values[1] = (val*) var84;
((void (*)(val*, val*, long))(var85->class->vft[COLOR_array__Array__with_native]))(var85, var87, var86) /* with_native on <var85:Array[Object]>*/;
}
var88 = ((val* (*)(val*))(var85->class->vft[COLOR_string__Object__to_s]))(var85) /* to_s on <var85:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var88) /* require_declaration on <self:SeparateCompilerVisitor>*/;
if (varonce89) {
var90 = varonce89;
} else {
var91 = " = type_";
var92 = 8;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
var94 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var95 = ((val* (*)(val*))(var94->class->vft[COLOR_abstract_compiler__MType__c_name]))(var94) /* c_name on <var94:MType>*/;
if (varonce96) {
var97 = varonce96;
} else {
var98 = ".name;";
var99 = 6;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
var101 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var101 = array_instance Array[Object] */
var102 = 4;
var103 = NEW_array__NativeArray(var102, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var103)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var103)->values[1] = (val*) var90;
((struct instance_array__NativeArray*)var103)->values[2] = (val*) var95;
((struct instance_array__NativeArray*)var103)->values[3] = (val*) var97;
((void (*)(val*, val*, long))(var101->class->vft[COLOR_array__Array__with_native]))(var101, var103, var102) /* with_native on <var101:Array[Object]>*/;
}
var104 = ((val* (*)(val*))(var101->class->vft[COLOR_string__Object__to_s]))(var101) /* to_s on <var101:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var104) /* add on <self:SeparateCompilerVisitor>*/;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#class_name_string for (self: Object, RuntimeVariable): String */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__SeparateCompilerVisitor__class_name_string(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#equal_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
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
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
val* var111 /* : Array[Object] */;
long var112 /* : Int */;
val* var113 /* : NativeArray[Object] */;
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
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : String */;
val* var134 /* : MType */;
val* var135 /* : RuntimeVariable */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
val* var146 /* : Array[Object] */;
long var147 /* : Int */;
val* var148 /* : NativeArray[Object] */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : String */;
short int var155 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
val* var156 /* : Array[String] */;
val* var_test /* var test: Array[String] */;
val* var157 /* : MType */;
val* var_t1 /* var t1: MType */;
short int var158 /* : Bool */;
int cltype159;
int idtype160;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : String */;
val* var166 /* : Array[Object] */;
long var167 /* : Int */;
val* var168 /* : NativeArray[Object] */;
val* var169 /* : String */;
val* var170 /* : MType */;
short int var171 /* : Bool */;
val* var172 /* : MType */;
val* var_t2 /* var t2: MType */;
short int var173 /* : Bool */;
int cltype174;
int idtype175;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : String */;
val* var181 /* : Array[Object] */;
long var182 /* : Int */;
val* var183 /* : NativeArray[Object] */;
val* var184 /* : String */;
val* var185 /* : MType */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
short int var_incompatible /* var incompatible: Bool */;
val* var188 /* : String */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
long var192 /* : Int */;
val* var193 /* : String */;
short int var194 /* : Bool */;
val* var_primitive /* var primitive: nullable Object */;
short int var195 /* : Bool */;
val* var196 /* : String */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : String */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
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
short int var219 /* : Bool */;
val* var220 /* : String */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
long var224 /* : Int */;
val* var225 /* : String */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : String */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
long var236 /* : Int */;
val* var237 /* : String */;
val* var238 /* : Array[Object] */;
long var239 /* : Int */;
val* var240 /* : NativeArray[Object] */;
val* var241 /* : String */;
short int var242 /* : Bool */;
val* var243 /* : null */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
long var247 /* : Int */;
val* var248 /* : String */;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : NativeString */;
long var252 /* : Int */;
val* var253 /* : String */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : String */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
long var262 /* : Int */;
val* var263 /* : String */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
long var267 /* : Int */;
val* var268 /* : String */;
val* var269 /* : Array[Object] */;
long var270 /* : Int */;
val* var271 /* : NativeArray[Object] */;
val* var272 /* : String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : String */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
long var281 /* : Int */;
val* var282 /* : String */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : NativeString */;
long var286 /* : Int */;
val* var287 /* : String */;
val* var288 /* : Array[Object] */;
long var289 /* : Int */;
val* var290 /* : NativeArray[Object] */;
val* var291 /* : String */;
val* var292 /* : null */;
short int var293 /* : Bool */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : NativeString */;
long var297 /* : Int */;
val* var298 /* : String */;
val* var299 /* : String */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
long var303 /* : Int */;
val* var304 /* : String */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
long var308 /* : Int */;
val* var309 /* : String */;
val* var310 /* : String */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : String */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
long var319 /* : Int */;
val* var320 /* : String */;
val* var321 /* : Array[Object] */;
long var322 /* : Int */;
val* var323 /* : NativeArray[Object] */;
val* var324 /* : String */;
short int var325 /* : Bool */;
short int var326 /* : Bool */;
short int var_327 /* var : Bool */;
short int var328 /* : Bool */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : String */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : String */;
val* var339 /* : Array[Object] */;
long var340 /* : Int */;
val* var341 /* : NativeArray[Object] */;
val* var342 /* : String */;
val* var343 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var344 /* : AbstractCompiler */;
val* var345 /* : HashMap[MClass, Int] */;
val* var346 /* : MapIterator[Object, nullable Object] */;
short int var347 /* : Bool */;
val* var348 /* : Object */;
val* var_t /* var t: MClass */;
val* var349 /* : nullable Object */;
long var_v /* var v: Int */;
long var350 /* : Int */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
long var354 /* : Int */;
val* var355 /* : String */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
long var359 /* : Int */;
val* var360 /* : String */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : NativeString */;
long var364 /* : Int */;
val* var365 /* : String */;
val* var366 /* : String */;
static val* varonce367;
val* var368 /* : String */;
char* var369 /* : NativeString */;
long var370 /* : Int */;
val* var371 /* : String */;
static val* varonce372;
val* var373 /* : String */;
char* var374 /* : NativeString */;
long var375 /* : Int */;
val* var376 /* : String */;
val* var377 /* : String */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : NativeString */;
long var381 /* : Int */;
val* var382 /* : String */;
static val* varonce383;
val* var384 /* : String */;
char* var385 /* : NativeString */;
long var386 /* : Int */;
val* var387 /* : String */;
val* var388 /* : Array[Object] */;
long var389 /* : Int */;
val* var390 /* : NativeArray[Object] */;
val* var391 /* : Object */;
val* var392 /* : String */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
long var396 /* : Int */;
val* var397 /* : String */;
static val* varonce398;
val* var399 /* : String */;
char* var400 /* : NativeString */;
long var401 /* : Int */;
val* var402 /* : String */;
val* var403 /* : String */;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : NativeString */;
long var407 /* : Int */;
val* var408 /* : String */;
val* var409 /* : Array[Object] */;
long var410 /* : Int */;
val* var411 /* : NativeArray[Object] */;
val* var412 /* : String */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
long var416 /* : Int */;
val* var417 /* : String */;
static val* varonce418;
val* var419 /* : String */;
char* var420 /* : NativeString */;
long var421 /* : Int */;
val* var422 /* : String */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
long var426 /* : Int */;
val* var427 /* : String */;
val* var428 /* : Array[Object] */;
long var429 /* : Int */;
val* var430 /* : NativeArray[Object] */;
val* var431 /* : String */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : NativeString */;
long var435 /* : Int */;
val* var436 /* : String */;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : NativeString */;
long var440 /* : Int */;
val* var441 /* : String */;
static val* varonce442;
val* var443 /* : String */;
char* var444 /* : NativeString */;
long var445 /* : Int */;
val* var446 /* : String */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
long var450 /* : Int */;
val* var451 /* : String */;
val* var452 /* : String */;
static val* varonce453;
val* var454 /* : String */;
char* var455 /* : NativeString */;
long var456 /* : Int */;
val* var457 /* : String */;
val* var458 /* : Array[Object] */;
long var459 /* : Int */;
val* var460 /* : NativeArray[Object] */;
val* var461 /* : String */;
var_value1 = p0;
var_value2 = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__bool_type]))(self) /* bool_type on <self:SeparateCompilerVisitor>*/;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var1) /* new_var on <self:SeparateCompilerVisitor>*/;
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
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var48) /* add on <self:SeparateCompilerVisitor>*/;
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
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var77) /* add on <self:SeparateCompilerVisitor>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1485);
show_backtrace(1);
}
var_mtype1 = var78;
if (varonce80) {
var81 = varonce80;
} else {
var82 = "class_";
var83 = 6;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 2;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var81;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var85;
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var89) /* require_declaration on <self:SeparateCompilerVisitor>*/;
if (varonce90) {
var91 = varonce90;
} else {
var92 = " = (";
var93 = 4;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = " != NULL) && (";
var98 = 14;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = "->class == &class_";
var103 = 18;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
var105 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
if (varonce106) {
var107 = varonce106;
} else {
var108 = ");";
var109 = 2;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
var111 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var111 = array_instance Array[Object] */
var112 = 8;
var113 = NEW_array__NativeArray(var112, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var113)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var113)->values[1] = (val*) var91;
((struct instance_array__NativeArray*)var113)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var113)->values[3] = (val*) var96;
((struct instance_array__NativeArray*)var113)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var113)->values[5] = (val*) var101;
((struct instance_array__NativeArray*)var113)->values[6] = (val*) var105;
((struct instance_array__NativeArray*)var113)->values[7] = (val*) var107;
((void (*)(val*, val*, long))(var111->class->vft[COLOR_array__Array__with_native]))(var111, var113, var112) /* with_native on <var111:Array[Object]>*/;
}
var114 = ((val* (*)(val*))(var111->class->vft[COLOR_string__Object__to_s]))(var111) /* to_s on <var111:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var114) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce115) {
var116 = varonce115;
} else {
var117 = "if (";
var118 = 4;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = ") {";
var123 = 3;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var125 = array_instance Array[Object] */
var126 = 3;
var127 = NEW_array__NativeArray(var126, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var127)->values[0] = (val*) var116;
((struct instance_array__NativeArray*)var127)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var127)->values[2] = (val*) var121;
((void (*)(val*, val*, long))(var125->class->vft[COLOR_array__Array__with_native]))(var125, var127, var126) /* with_native on <var125:Array[Object]>*/;
}
var128 = ((val* (*)(val*))(var125->class->vft[COLOR_string__Object__to_s]))(var125) /* to_s on <var125:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var128) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce129) {
var130 = varonce129;
} else {
var131 = " = (";
var132 = 4;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
var134 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
var135 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_value2, var134) /* autobox on <self:SeparateCompilerVisitor>*/;
if (varonce136) {
var137 = varonce136;
} else {
var138 = " == ";
var139 = 4;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = ");";
var144 = 2;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var146 = array_instance Array[Object] */
var147 = 6;
var148 = NEW_array__NativeArray(var147, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var148)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var148)->values[1] = (val*) var130;
((struct instance_array__NativeArray*)var148)->values[2] = (val*) var135;
((struct instance_array__NativeArray*)var148)->values[3] = (val*) var137;
((struct instance_array__NativeArray*)var148)->values[4] = (val*) var_value1;
((struct instance_array__NativeArray*)var148)->values[5] = (val*) var142;
((void (*)(val*, val*, long))(var146->class->vft[COLOR_array__Array__with_native]))(var146, var148, var147) /* with_native on <var146:Array[Object]>*/;
}
var149 = ((val* (*)(val*))(var146->class->vft[COLOR_string__Object__to_s]))(var146) /* to_s on <var146:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var149) /* add on <self:SeparateCompilerVisitor>*/;
if (varonce150) {
var151 = varonce150;
} else {
var152 = "}";
var153 = 1;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var151) /* add on <self:SeparateCompilerVisitor>*/;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
var155 = 1;
var_maybe_null = var155;
var156 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var156->class->vft[COLOR_array__Array__init]))(var156) /* init on <var156:Array[String]>*/;
var_test = var156;
var157 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value1) /* mcasttype on <var_value1:RuntimeVariable>*/;
var_t1 = var157;
/* <var_t1:MType> isa MNullableType */
cltype159 = type_model__MNullableType.color;
idtype160 = type_model__MNullableType.id;
if(cltype159 >= var_t1->type->table_size) {
var158 = 0;
} else {
var158 = var_t1->type->type_table[cltype159] == idtype160;
}
if (var158){
if (varonce161) {
var162 = varonce161;
} else {
var163 = " != NULL";
var164 = 8;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
var166 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var166 = array_instance Array[Object] */
var167 = 2;
var168 = NEW_array__NativeArray(var167, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var168)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var168)->values[1] = (val*) var162;
((void (*)(val*, val*, long))(var166->class->vft[COLOR_array__Array__with_native]))(var166, var168, var167) /* with_native on <var166:Array[Object]>*/;
}
var169 = ((val* (*)(val*))(var166->class->vft[COLOR_string__Object__to_s]))(var166) /* to_s on <var166:Array[Object]>*/;
((void (*)(val*, val*))(var_test->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_test, var169) /* add on <var_test:Array[String]>*/;
var170 = ((val* (*)(val*))(var_t1->class->vft[COLOR_model__MNullableType__mtype]))(var_t1) /* mtype on <var_t1:MType(MNullableType)>*/;
var_t1 = var170;
} else {
var171 = 0;
var_maybe_null = var171;
}
var172 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value2) /* mcasttype on <var_value2:RuntimeVariable>*/;
var_t2 = var172;
/* <var_t2:MType> isa MNullableType */
cltype174 = type_model__MNullableType.color;
idtype175 = type_model__MNullableType.id;
if(cltype174 >= var_t2->type->table_size) {
var173 = 0;
} else {
var173 = var_t2->type->type_table[cltype174] == idtype175;
}
if (var173){
if (varonce176) {
var177 = varonce176;
} else {
var178 = " != NULL";
var179 = 8;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
var181 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var181 = array_instance Array[Object] */
var182 = 2;
var183 = NEW_array__NativeArray(var182, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var183)->values[0] = (val*) var_value2;
((struct instance_array__NativeArray*)var183)->values[1] = (val*) var177;
((void (*)(val*, val*, long))(var181->class->vft[COLOR_array__Array__with_native]))(var181, var183, var182) /* with_native on <var181:Array[Object]>*/;
}
var184 = ((val* (*)(val*))(var181->class->vft[COLOR_string__Object__to_s]))(var181) /* to_s on <var181:Array[Object]>*/;
((void (*)(val*, val*))(var_test->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_test, var184) /* add on <var_test:Array[String]>*/;
var185 = ((val* (*)(val*))(var_t2->class->vft[COLOR_model__MNullableType__mtype]))(var_t2) /* mtype on <var_t2:MType(MNullableType)>*/;
var_t2 = var185;
} else {
var186 = 0;
var_maybe_null = var186;
}
var187 = 0;
var_incompatible = var187;
var188 = ((val* (*)(val*))(var_t1->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t1) /* ctype on <var_t1:MType>*/;
if (varonce189) {
var190 = varonce189;
} else {
var191 = "val*";
var192 = 4;
var193 = string__NativeString__to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
var194 = ((short int (*)(val*, val*))(var188->class->vft[COLOR_kernel__Object___33d_61d]))(var188, var190) /* != on <var188:String>*/;
if (var194){
var_primitive = var_t1;
var195 = ((short int (*)(val*, val*))(var_t1->class->vft[COLOR_kernel__Object___61d_61d]))(var_t1, var_t2) /* == on <var_t1:MType>*/;
if (var195){
} else {
var196 = ((val* (*)(val*))(var_t2->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t2) /* ctype on <var_t2:MType>*/;
if (varonce197) {
var198 = varonce197;
} else {
var199 = "val*";
var200 = 4;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
var202 = ((short int (*)(val*, val*))(var196->class->vft[COLOR_kernel__Object___33d_61d]))(var196, var198) /* != on <var196:String>*/;
if (var202){
var203 = 1;
var_incompatible = var203;
} else {
var204 = ((short int (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__can_be_primitive]))(self, var_value2) /* can_be_primitive on <self:SeparateCompilerVisitor>*/;
if (var204){
if (varonce205) {
var206 = varonce205;
} else {
var207 = "->class == ";
var208 = 11;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
if (varonce210) {
var211 = varonce210;
} else {
var212 = "->class";
var213 = 7;
var214 = string__NativeString__to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
var215 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var215 = array_instance Array[Object] */
var216 = 4;
var217 = NEW_array__NativeArray(var216, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var217)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var217)->values[1] = (val*) var206;
((struct instance_array__NativeArray*)var217)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var217)->values[3] = (val*) var211;
((void (*)(val*, val*, long))(var215->class->vft[COLOR_array__Array__with_native]))(var215, var217, var216) /* with_native on <var215:Array[Object]>*/;
}
var218 = ((val* (*)(val*))(var215->class->vft[COLOR_string__Object__to_s]))(var215) /* to_s on <var215:Array[Object]>*/;
((void (*)(val*, val*))(var_test->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_test, var218) /* add on <var_test:Array[String]>*/;
} else {
var219 = 1;
var_incompatible = var219;
}
}
}
} else {
var220 = ((val* (*)(val*))(var_t2->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t2) /* ctype on <var_t2:MType>*/;
if (varonce221) {
var222 = varonce221;
} else {
var223 = "val*";
var224 = 4;
var225 = string__NativeString__to_s_with_length(var223, var224);
var222 = var225;
varonce221 = var222;
}
var226 = ((short int (*)(val*, val*))(var220->class->vft[COLOR_kernel__Object___33d_61d]))(var220, var222) /* != on <var220:String>*/;
if (var226){
var_primitive = var_t2;
var227 = ((short int (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__can_be_primitive]))(self, var_value1) /* can_be_primitive on <self:SeparateCompilerVisitor>*/;
if (var227){
if (varonce228) {
var229 = varonce228;
} else {
var230 = "->class == ";
var231 = 11;
var232 = string__NativeString__to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
if (varonce233) {
var234 = varonce233;
} else {
var235 = "->class";
var236 = 7;
var237 = string__NativeString__to_s_with_length(var235, var236);
var234 = var237;
varonce233 = var234;
}
var238 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var238 = array_instance Array[Object] */
var239 = 4;
var240 = NEW_array__NativeArray(var239, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var240)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var240)->values[1] = (val*) var229;
((struct instance_array__NativeArray*)var240)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var240)->values[3] = (val*) var234;
((void (*)(val*, val*, long))(var238->class->vft[COLOR_array__Array__with_native]))(var238, var240, var239) /* with_native on <var238:Array[Object]>*/;
}
var241 = ((val* (*)(val*))(var238->class->vft[COLOR_string__Object__to_s]))(var238) /* to_s on <var238:Array[Object]>*/;
((void (*)(val*, val*))(var_test->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_test, var241) /* add on <var_test:Array[String]>*/;
} else {
var242 = 1;
var_incompatible = var242;
}
} else {
var243 = NULL;
var_primitive = var243;
}
}
if (var_incompatible){
if (var_maybe_null){
if (varonce244) {
var245 = varonce244;
} else {
var246 = " = ";
var247 = 3;
var248 = string__NativeString__to_s_with_length(var246, var247);
var245 = var248;
varonce244 = var245;
}
if (varonce249) {
var250 = varonce249;
} else {
var251 = " == ";
var252 = 4;
var253 = string__NativeString__to_s_with_length(var251, var252);
var250 = var253;
varonce249 = var250;
}
if (varonce254) {
var255 = varonce254;
} else {
var256 = "; /* incompatible types ";
var257 = 24;
var258 = string__NativeString__to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
if (varonce259) {
var260 = varonce259;
} else {
var261 = " vs. ";
var262 = 5;
var263 = string__NativeString__to_s_with_length(var261, var262);
var260 = var263;
varonce259 = var260;
}
if (varonce264) {
var265 = varonce264;
} else {
var266 = "; but may be NULL*/";
var267 = 19;
var268 = string__NativeString__to_s_with_length(var266, var267);
var265 = var268;
varonce264 = var265;
}
var269 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var269 = array_instance Array[Object] */
var270 = 10;
var271 = NEW_array__NativeArray(var270, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var271)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var271)->values[1] = (val*) var245;
((struct instance_array__NativeArray*)var271)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var271)->values[3] = (val*) var250;
((struct instance_array__NativeArray*)var271)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var271)->values[5] = (val*) var255;
((struct instance_array__NativeArray*)var271)->values[6] = (val*) var_t1;
((struct instance_array__NativeArray*)var271)->values[7] = (val*) var260;
((struct instance_array__NativeArray*)var271)->values[8] = (val*) var_t2;
((struct instance_array__NativeArray*)var271)->values[9] = (val*) var265;
((void (*)(val*, val*, long))(var269->class->vft[COLOR_array__Array__with_native]))(var269, var271, var270) /* with_native on <var269:Array[Object]>*/;
}
var272 = ((val* (*)(val*))(var269->class->vft[COLOR_string__Object__to_s]))(var269) /* to_s on <var269:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var272) /* add on <self:SeparateCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
if (varonce273) {
var274 = varonce273;
} else {
var275 = " = 0; /* incompatible types ";
var276 = 28;
var277 = string__NativeString__to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
if (varonce278) {
var279 = varonce278;
} else {
var280 = " vs. ";
var281 = 5;
var282 = string__NativeString__to_s_with_length(var280, var281);
var279 = var282;
varonce278 = var279;
}
if (varonce283) {
var284 = varonce283;
} else {
var285 = "; cannot be NULL */";
var286 = 19;
var287 = string__NativeString__to_s_with_length(var285, var286);
var284 = var287;
varonce283 = var284;
}
var288 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var288 = array_instance Array[Object] */
var289 = 6;
var290 = NEW_array__NativeArray(var289, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var290)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var290)->values[1] = (val*) var274;
((struct instance_array__NativeArray*)var290)->values[2] = (val*) var_t1;
((struct instance_array__NativeArray*)var290)->values[3] = (val*) var279;
((struct instance_array__NativeArray*)var290)->values[4] = (val*) var_t2;
((struct instance_array__NativeArray*)var290)->values[5] = (val*) var284;
((void (*)(val*, val*, long))(var288->class->vft[COLOR_array__Array__with_native]))(var288, var290, var289) /* with_native on <var288:Array[Object]>*/;
}
var291 = ((val* (*)(val*))(var288->class->vft[COLOR_string__Object__to_s]))(var288) /* to_s on <var288:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var291) /* add on <self:SeparateCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
}
} else {
}
var292 = NULL;
if (var_primitive == NULL) {
var293 = 0; /* is null */
} else {
var293 = 1; /* arg is null and recv is not */
}
if (var293){
if (varonce294) {
var295 = varonce294;
} else {
var296 = "((struct instance_";
var297 = 18;
var298 = string__NativeString__to_s_with_length(var296, var297);
var295 = var298;
varonce294 = var295;
}
var299 = ((val* (*)(val*))(var_primitive->class->vft[COLOR_separate_compiler__MType__c_instance_name]))(var_primitive) /* c_instance_name on <var_primitive:nullable Object(MType)>*/;
if (varonce300) {
var301 = varonce300;
} else {
var302 = "*)";
var303 = 2;
var304 = string__NativeString__to_s_with_length(var302, var303);
var301 = var304;
varonce300 = var301;
}
if (varonce305) {
var306 = varonce305;
} else {
var307 = ")->value == ((struct instance_";
var308 = 30;
var309 = string__NativeString__to_s_with_length(var307, var308);
var306 = var309;
varonce305 = var306;
}
var310 = ((val* (*)(val*))(var_primitive->class->vft[COLOR_separate_compiler__MType__c_instance_name]))(var_primitive) /* c_instance_name on <var_primitive:nullable Object(MType)>*/;
if (varonce311) {
var312 = varonce311;
} else {
var313 = "*)";
var314 = 2;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
if (varonce316) {
var317 = varonce316;
} else {
var318 = ")->value";
var319 = 8;
var320 = string__NativeString__to_s_with_length(var318, var319);
var317 = var320;
varonce316 = var317;
}
var321 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var321 = array_instance Array[Object] */
var322 = 9;
var323 = NEW_array__NativeArray(var322, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var323)->values[0] = (val*) var295;
((struct instance_array__NativeArray*)var323)->values[1] = (val*) var299;
((struct instance_array__NativeArray*)var323)->values[2] = (val*) var301;
((struct instance_array__NativeArray*)var323)->values[3] = (val*) var_value1;
((struct instance_array__NativeArray*)var323)->values[4] = (val*) var306;
((struct instance_array__NativeArray*)var323)->values[5] = (val*) var310;
((struct instance_array__NativeArray*)var323)->values[6] = (val*) var312;
((struct instance_array__NativeArray*)var323)->values[7] = (val*) var_value2;
((struct instance_array__NativeArray*)var323)->values[8] = (val*) var317;
((void (*)(val*, val*, long))(var321->class->vft[COLOR_array__Array__with_native]))(var321, var323, var322) /* with_native on <var321:Array[Object]>*/;
}
var324 = ((val* (*)(val*))(var321->class->vft[COLOR_string__Object__to_s]))(var321) /* to_s on <var321:Array[Object]>*/;
((void (*)(val*, val*))(var_test->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_test, var324) /* add on <var_test:Array[String]>*/;
} else {
var326 = ((short int (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__can_be_primitive]))(self, var_value1) /* can_be_primitive on <self:SeparateCompilerVisitor>*/;
var_327 = var326;
if (var326){
var328 = ((short int (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__can_be_primitive]))(self, var_value2) /* can_be_primitive on <self:SeparateCompilerVisitor>*/;
var325 = var328;
} else {
var325 = var_327;
}
if (var325){
if (varonce329) {
var330 = varonce329;
} else {
var331 = "->class == ";
var332 = 11;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
if (varonce334) {
var335 = varonce334;
} else {
var336 = "->class";
var337 = 7;
var338 = string__NativeString__to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
var339 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var339 = array_instance Array[Object] */
var340 = 4;
var341 = NEW_array__NativeArray(var340, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var341)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var341)->values[1] = (val*) var330;
((struct instance_array__NativeArray*)var341)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var341)->values[3] = (val*) var335;
((void (*)(val*, val*, long))(var339->class->vft[COLOR_array__Array__with_native]))(var339, var341, var340) /* with_native on <var339:Array[Object]>*/;
}
var342 = ((val* (*)(val*))(var339->class->vft[COLOR_string__Object__to_s]))(var339) /* to_s on <var339:Array[Object]>*/;
((void (*)(val*, val*))(var_test->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_test, var342) /* add on <var_test:Array[String]>*/;
var343 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var343->class->vft[COLOR_array__Array__init]))(var343) /* init on <var343:Array[String]>*/;
var_s = var343;
var344 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var345 = ((val* (*)(val*))(var344->class->vft[COLOR_separate_compiler__SeparateCompiler__box_kinds]))(var344) /* box_kinds on <var344:AbstractCompiler(SeparateCompiler)>*/;
var346 = ((val* (*)(val*))(var345->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var345) /* iterator on <var345:HashMap[MClass, Int]>*/;
for(;;) {
var347 = ((short int (*)(val*))(var346->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var346) /* is_ok on <var346:MapIterator[Object, nullable Object]>*/;
if(!var347) break;
var348 = ((val* (*)(val*))(var346->class->vft[COLOR_abstract_collection__MapIterator__key]))(var346) /* key on <var346:MapIterator[Object, nullable Object]>*/;
var_t = var348;
var349 = ((val* (*)(val*))(var346->class->vft[COLOR_abstract_collection__MapIterator__item]))(var346) /* item on <var346:MapIterator[Object, nullable Object]>*/;
var350 = ((struct instance_kernel__Int*)var349)->value; /* autounbox from nullable Object to Int */;
var_v = var350;
if (varonce351) {
var352 = varonce351;
} else {
var353 = "(";
var354 = 1;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
if (varonce356) {
var357 = varonce356;
} else {
var358 = "->class->box_kind == ";
var359 = 21;
var360 = string__NativeString__to_s_with_length(var358, var359);
var357 = var360;
varonce356 = var357;
}
if (varonce361) {
var362 = varonce361;
} else {
var363 = " && ((struct instance_";
var364 = 22;
var365 = string__NativeString__to_s_with_length(var363, var364);
var362 = var365;
varonce361 = var362;
}
var366 = ((val* (*)(val*))(var_t->class->vft[COLOR_separate_compiler__MClass__c_instance_name]))(var_t) /* c_instance_name on <var_t:MClass>*/;
if (varonce367) {
var368 = varonce367;
} else {
var369 = "*)";
var370 = 2;
var371 = string__NativeString__to_s_with_length(var369, var370);
var368 = var371;
varonce367 = var368;
}
if (varonce372) {
var373 = varonce372;
} else {
var374 = ")->value == ((struct instance_";
var375 = 30;
var376 = string__NativeString__to_s_with_length(var374, var375);
var373 = var376;
varonce372 = var373;
}
var377 = ((val* (*)(val*))(var_t->class->vft[COLOR_separate_compiler__MClass__c_instance_name]))(var_t) /* c_instance_name on <var_t:MClass>*/;
if (varonce378) {
var379 = varonce378;
} else {
var380 = "*)";
var381 = 2;
var382 = string__NativeString__to_s_with_length(var380, var381);
var379 = var382;
varonce378 = var379;
}
if (varonce383) {
var384 = varonce383;
} else {
var385 = ")->value)";
var386 = 9;
var387 = string__NativeString__to_s_with_length(var385, var386);
var384 = var387;
varonce383 = var384;
}
var388 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var388 = array_instance Array[Object] */
var389 = 13;
var390 = NEW_array__NativeArray(var389, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var390)->values[0] = (val*) var352;
((struct instance_array__NativeArray*)var390)->values[1] = (val*) var_value1;
((struct instance_array__NativeArray*)var390)->values[2] = (val*) var357;
var391 = BOX_kernel__Int(var_v); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var390)->values[3] = (val*) var391;
((struct instance_array__NativeArray*)var390)->values[4] = (val*) var362;
((struct instance_array__NativeArray*)var390)->values[5] = (val*) var366;
((struct instance_array__NativeArray*)var390)->values[6] = (val*) var368;
((struct instance_array__NativeArray*)var390)->values[7] = (val*) var_value1;
((struct instance_array__NativeArray*)var390)->values[8] = (val*) var373;
((struct instance_array__NativeArray*)var390)->values[9] = (val*) var377;
((struct instance_array__NativeArray*)var390)->values[10] = (val*) var379;
((struct instance_array__NativeArray*)var390)->values[11] = (val*) var_value2;
((struct instance_array__NativeArray*)var390)->values[12] = (val*) var384;
((void (*)(val*, val*, long))(var388->class->vft[COLOR_array__Array__with_native]))(var388, var390, var389) /* with_native on <var388:Array[Object]>*/;
}
var392 = ((val* (*)(val*))(var388->class->vft[COLOR_string__Object__to_s]))(var388) /* to_s on <var388:Array[Object]>*/;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_s, var392) /* add on <var_s:Array[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var346->class->vft[COLOR_abstract_collection__MapIterator__next]))(var346) /* next on <var346:MapIterator[Object, nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce393) {
var394 = varonce393;
} else {
var395 = "(";
var396 = 1;
var397 = string__NativeString__to_s_with_length(var395, var396);
var394 = var397;
varonce393 = var394;
}
if (varonce398) {
var399 = varonce398;
} else {
var400 = " || ";
var401 = 4;
var402 = string__NativeString__to_s_with_length(var400, var401);
var399 = var402;
varonce398 = var399;
}
var403 = ((val* (*)(val*, val*))(var_s->class->vft[COLOR_string__Collection__join]))(var_s, var399) /* join on <var_s:Array[String]>*/;
if (varonce404) {
var405 = varonce404;
} else {
var406 = ")";
var407 = 1;
var408 = string__NativeString__to_s_with_length(var406, var407);
var405 = var408;
varonce404 = var405;
}
var409 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var409 = array_instance Array[Object] */
var410 = 3;
var411 = NEW_array__NativeArray(var410, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var411)->values[0] = (val*) var394;
((struct instance_array__NativeArray*)var411)->values[1] = (val*) var403;
((struct instance_array__NativeArray*)var411)->values[2] = (val*) var405;
((void (*)(val*, val*, long))(var409->class->vft[COLOR_array__Array__with_native]))(var409, var411, var410) /* with_native on <var409:Array[Object]>*/;
}
var412 = ((val* (*)(val*))(var409->class->vft[COLOR_string__Object__to_s]))(var409) /* to_s on <var409:Array[Object]>*/;
((void (*)(val*, val*))(var_test->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_test, var412) /* add on <var_test:Array[String]>*/;
} else {
if (varonce413) {
var414 = varonce413;
} else {
var415 = " = ";
var416 = 3;
var417 = string__NativeString__to_s_with_length(var415, var416);
var414 = var417;
varonce413 = var414;
}
if (varonce418) {
var419 = varonce418;
} else {
var420 = " == ";
var421 = 4;
var422 = string__NativeString__to_s_with_length(var420, var421);
var419 = var422;
varonce418 = var419;
}
if (varonce423) {
var424 = varonce423;
} else {
var425 = ";";
var426 = 1;
var427 = string__NativeString__to_s_with_length(var425, var426);
var424 = var427;
varonce423 = var424;
}
var428 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var428 = array_instance Array[Object] */
var429 = 6;
var430 = NEW_array__NativeArray(var429, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var430)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var430)->values[1] = (val*) var414;
((struct instance_array__NativeArray*)var430)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var430)->values[3] = (val*) var419;
((struct instance_array__NativeArray*)var430)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var430)->values[5] = (val*) var424;
((void (*)(val*, val*, long))(var428->class->vft[COLOR_array__Array__with_native]))(var428, var430, var429) /* with_native on <var428:Array[Object]>*/;
}
var431 = ((val* (*)(val*))(var428->class->vft[COLOR_string__Object__to_s]))(var428) /* to_s on <var428:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var431) /* add on <self:SeparateCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
}
}
if (varonce432) {
var433 = varonce432;
} else {
var434 = " = ";
var435 = 3;
var436 = string__NativeString__to_s_with_length(var434, var435);
var433 = var436;
varonce432 = var433;
}
if (varonce437) {
var438 = varonce437;
} else {
var439 = " == ";
var440 = 4;
var441 = string__NativeString__to_s_with_length(var439, var440);
var438 = var441;
varonce437 = var438;
}
if (varonce442) {
var443 = varonce442;
} else {
var444 = " || (";
var445 = 5;
var446 = string__NativeString__to_s_with_length(var444, var445);
var443 = var446;
varonce442 = var443;
}
if (varonce447) {
var448 = varonce447;
} else {
var449 = " && ";
var450 = 4;
var451 = string__NativeString__to_s_with_length(var449, var450);
var448 = var451;
varonce447 = var448;
}
var452 = ((val* (*)(val*, val*))(var_test->class->vft[COLOR_string__Collection__join]))(var_test, var448) /* join on <var_test:Array[String]>*/;
if (varonce453) {
var454 = varonce453;
} else {
var455 = ");";
var456 = 2;
var457 = string__NativeString__to_s_with_length(var455, var456);
var454 = var457;
varonce453 = var454;
}
var458 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var458 = array_instance Array[Object] */
var459 = 8;
var460 = NEW_array__NativeArray(var459, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var460)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var460)->values[1] = (val*) var433;
((struct instance_array__NativeArray*)var460)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var460)->values[3] = (val*) var438;
((struct instance_array__NativeArray*)var460)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var460)->values[5] = (val*) var443;
((struct instance_array__NativeArray*)var460)->values[6] = (val*) var452;
((struct instance_array__NativeArray*)var460)->values[7] = (val*) var454;
((void (*)(val*, val*, long))(var458->class->vft[COLOR_array__Array__with_native]))(var458, var460, var459) /* with_native on <var458:Array[Object]>*/;
}
var461 = ((val* (*)(val*))(var458->class->vft[COLOR_string__Object__to_s]))(var458) /* to_s on <var458:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var461) /* add on <self:SeparateCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#equal_test for (self: Object, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__equal_test(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#can_be_primitive for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int separate_compiler__SeparateCompilerVisitor__can_be_primitive(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var_t /* var t: MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClass */;
val* var10 /* : MClassKind */;
val* var_k /* var k: MClassKind */;
short int var11 /* : Bool */;
val* var12 /* : MClassKind */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
short int var19 /* : Bool */;
var_value = p0;
var1 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value) /* mcasttype on <var_value:RuntimeVariable>*/;
var_t = var1;
/* <var_t:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_t->type->table_size) {
var2 = 0;
} else {
var2 = var_t->type->type_table[cltype] == idtype;
}
if (var2){
var3 = ((val* (*)(val*))(var_t->class->vft[COLOR_model__MNullableType__mtype]))(var_t) /* mtype on <var_t:MType(MNullableType)>*/;
var_t = var3;
} else {
}
/* <var_t:MType> isa MClassType */
cltype5 = type_model__MClassType.color;
idtype6 = type_model__MClassType.id;
if(cltype5 >= var_t->type->table_size) {
var4 = 0;
} else {
var4 = var_t->type->type_table[cltype5] == idtype6;
}
var7 = !var4;
if (var7){
var8 = 0;
var = var8;
goto RET_LABEL;
} else {
}
var9 = ((val* (*)(val*))(var_t->class->vft[COLOR_model__MClassType__mclass]))(var_t) /* mclass on <var_t:MType(MClassType)>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_model__MClass__kind]))(var9) /* kind on <var9:MClass>*/;
var_k = var10;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__interface_kind]))(self) /* interface_kind on <self:SeparateCompilerVisitor>*/;
var13 = ((short int (*)(val*, val*))(var_k->class->vft[COLOR_kernel__Object___61d_61d]))(var_k, var12) /* == on <var_k:MClassKind>*/;
var_ = var13;
if (var13){
var11 = var_;
} else {
var14 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t) /* ctype on <var_t:MType(MClassType)>*/;
if (varonce) {
var15 = varonce;
} else {
var16 = "val*";
var17 = 4;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
var19 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___33d_61d]))(var14, var15) /* != on <var14:String>*/;
var11 = var19;
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#can_be_primitive for (self: Object, RuntimeVariable): Bool */
short int VIRTUAL_separate_compiler__SeparateCompilerVisitor__can_be_primitive(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = separate_compiler__SeparateCompilerVisitor__can_be_primitive(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#maybe_null for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int separate_compiler__SeparateCompilerVisitor__maybe_null(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var_t /* var t: MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
var_value = p0;
var1 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value) /* mcasttype on <var_value:RuntimeVariable>*/;
var_t = var1;
/* <var_t:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_t->type->table_size) {
var3 = 0;
} else {
var3 = var_t->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
var2 = var_;
} else {
/* <var_t:MType> isa MNullType */
cltype5 = type_model__MNullType.color;
idtype6 = type_model__MNullType.id;
if(cltype5 >= var_t->type->table_size) {
var4 = 0;
} else {
var4 = var_t->type->type_table[cltype5] == idtype6;
}
var2 = var4;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#maybe_null for (self: Object, RuntimeVariable): Bool */
short int VIRTUAL_separate_compiler__SeparateCompilerVisitor__maybe_null(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = separate_compiler__SeparateCompilerVisitor__maybe_null(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#array_instance for (self: SeparateCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : MClass */;
val* var_arrayclass /* var arrayclass: MClass */;
val* var12 /* : Array[MType] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[MType] */;
val* var15 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
val* var16 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
long var36 /* : Int */;
val* var37 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
val* var38 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
val* var39 /* : Range[Int] */;
long var40 /* : Int */;
long var41 /* : Int */;
val* var42 /* : Discrete */;
val* var43 /* : Discrete */;
val* var44 /* : Iterator[nullable Object] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
long var_i /* var i: Int */;
long var47 /* : Int */;
val* var48 /* : nullable Object */;
val* var49 /* : MClassType */;
val* var50 /* : RuntimeVariable */;
val* var_r /* var r: RuntimeVariable */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[Object] */;
val* var80 /* : Object */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : String */;
val* var87 /* : MClassDef */;
val* var88 /* : MClassType */;
val* var89 /* : MMethod */;
val* var90 /* : Array[RuntimeVariable] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[RuntimeVariable] */;
val* var93 /* : nullable RuntimeVariable */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : String */;
var_array = p0;
var_elttype = p1;
if (varonce) {
var1 = varonce;
} else {
var2 = "NativeArray";
var3 = 11;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var1) /* get_class on <self:SeparateCompilerVisitor>*/;
var_nclass = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "Array";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var7) /* get_class on <self:SeparateCompilerVisitor>*/;
var_arrayclass = var11;
var12 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var12 = array_instance Array[MType] */
var13 = 1;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var_elttype;
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[MType]>*/;
}
var15 = ((val* (*)(val*, val*))(var_arrayclass->class->vft[COLOR_model__MClass__get_mtype]))(var_arrayclass, var12) /* get_mtype on <var_arrayclass:MClass>*/;
var_arraytype = var15;
var16 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_arraytype) /* init_instance on <self:SeparateCompilerVisitor>*/;
var_res = var16;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "{ /* ";
var20 = 5;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " = array_instance Array[";
var25 = 24;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "] */";
var30 = 4;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var18;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var_elttype;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var35) /* add on <self:SeparateCompilerVisitor>*/;
var36 = ((long (*)(val*))(var_array->class->vft[COLOR_abstract_collection__Collection__length]))(var_array) /* length on <var_array:Array[RuntimeVariable]>*/;
var37 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__int_instance]))(self, var36) /* int_instance on <self:SeparateCompilerVisitor>*/;
var_length = var37;
var38 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__native_array_instance]))(self, var_elttype, var_length) /* native_array_instance on <self:SeparateCompilerVisitor>*/;
var_nat = var38;
var39 = NEW_range__Range(&type_range__Rangekernel__Int);
var40 = 0;
var41 = ((long (*)(val*))(var_array->class->vft[COLOR_abstract_collection__Collection__length]))(var_array) /* length on <var_array:Array[RuntimeVariable]>*/;
var42 = BOX_kernel__Int(var40); /* autobox from Int to Discrete */
var43 = BOX_kernel__Int(var41); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var39->class->vft[COLOR_range__Range__without_last]))(var39, var42, var43) /* without_last on <var39:Range[Int]>*/;
var44 = ((val* (*)(val*))(var39->class->vft[COLOR_abstract_collection__Collection__iterator]))(var39) /* iterator on <var39:Range[Int]>*/;
for(;;) {
var45 = ((short int (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var44) /* is_ok on <var44:Iterator[nullable Object]>*/;
if(!var45) break;
var46 = ((val* (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__item]))(var44) /* item on <var44:Iterator[nullable Object]>*/;
var47 = ((struct instance_kernel__Int*)var46)->value; /* autounbox from nullable Object to Int */;
var_i = var47;
var48 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_i) /* [] on <var_array:Array[RuntimeVariable]>*/;
var49 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__object_type]))(self) /* object_type on <self:SeparateCompilerVisitor>*/;
var50 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var48, var49) /* autobox on <self:SeparateCompilerVisitor>*/;
var_r = var50;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "((struct instance_";
var54 = 18;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = ((val* (*)(val*))(var_nclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_nclass) /* c_name on <var_nclass:MClass>*/;
if (varonce57) {
var58 = varonce57;
} else {
var59 = "*)";
var60 = 2;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = ")->values[";
var65 = 10;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = "] = (val*) ";
var70 = 11;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = ";";
var75 = 1;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 9;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var79)->values[1] = (val*) var56;
((struct instance_array__NativeArray*)var79)->values[2] = (val*) var58;
((struct instance_array__NativeArray*)var79)->values[3] = (val*) var_nat;
((struct instance_array__NativeArray*)var79)->values[4] = (val*) var63;
var80 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var79)->values[5] = (val*) var80;
((struct instance_array__NativeArray*)var79)->values[6] = (val*) var68;
((struct instance_array__NativeArray*)var79)->values[7] = (val*) var_r;
((struct instance_array__NativeArray*)var79)->values[8] = (val*) var73;
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
var81 = ((val* (*)(val*))(var77->class->vft[COLOR_string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var81) /* add on <self:SeparateCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__next]))(var44) /* next on <var44:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce82) {
var83 = varonce82;
} else {
var84 = "with_native";
var85 = 11;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var87 = ((val* (*)(val*))(var_arrayclass->class->vft[COLOR_model__MClass__intro]))(var_arrayclass) /* intro on <var_arrayclass:MClass>*/;
var88 = ((val* (*)(val*))(var87->class->vft[COLOR_model__MClassDef__bound_mtype]))(var87) /* bound_mtype on <var87:MClassDef>*/;
var89 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(self, var83, var88) /* get_property on <self:SeparateCompilerVisitor>*/;
var90 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var90 = array_instance Array[RuntimeVariable] */
var91 = 3;
var92 = NEW_array__NativeArray(var91, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var92)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var92)->values[1] = (val*) var_nat;
((struct instance_array__NativeArray*)var92)->values[2] = (val*) var_length;
((void (*)(val*, val*, long))(var90->class->vft[COLOR_array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[RuntimeVariable]>*/;
}
var93 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(self, var89, var90) /* send on <self:SeparateCompilerVisitor>*/;
var93;
if (varonce94) {
var95 = varonce94;
} else {
var96 = "}";
var97 = 1;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var95) /* add on <self:SeparateCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#array_instance for (self: Object, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_instance for (self: SeparateCompilerVisitor, MType, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_elttype /* var elttype: MType */;
val* var_length /* var length: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : Array[MType] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[MType] */;
val* var9 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : MClass */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
short int var21 /* : Bool */;
int cltype;
int idtype;
val* var22 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
short int var23 /* : Bool */;
val* var24 /* : nullable Frame */;
val* var25 /* : MPropDef */;
val* var26 /* : MClassDef */;
val* var27 /* : nullable Frame */;
val* var28 /* : Array[RuntimeVariable] */;
val* var29 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var30 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var31 /* : String */;
short int var32 /* : Bool */;
val* var33 /* : ModelBuilder */;
val* var34 /* : ToolContext */;
val* var35 /* : OptionBool */;
val* var36 /* : nullable Object */;
short int var37 /* : Bool */;
short int var_ /* var : Bool */;
val* var38 /* : ModelBuilder */;
val* var39 /* : ToolContext */;
val* var40 /* : OptionBool */;
val* var41 /* : nullable Object */;
short int var42 /* : Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : MClass */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
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
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
val* var80 /* : RuntimeVariable */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var86 /* : MClass */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : String */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
val* var109 /* : Array[Object] */;
long var110 /* : Int */;
val* var111 /* : NativeArray[Object] */;
val* var112 /* : String */;
val* var113 /* : RuntimeVariable */;
val* var114 /* : Set[MType] */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
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
val* var130 /* : MClass */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
val* var142 /* : String */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : String */;
val* var148 /* : Array[Object] */;
long var149 /* : Int */;
val* var150 /* : NativeArray[Object] */;
val* var151 /* : String */;
val* var152 /* : RuntimeVariable */;
var_elttype = p0;
var_length = p1;
if (varonce) {
var1 = varonce;
} else {
var2 = "NativeArray";
var3 = 11;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var1) /* get_class on <self:SeparateCompilerVisitor>*/;
var6 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var6 = array_instance Array[MType] */
var7 = 1;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var_elttype;
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[MType]>*/;
}
var9 = ((val* (*)(val*, val*))(var5->class->vft[COLOR_model__MClass__get_mtype]))(var5, var6) /* get_mtype on <var5:MClass>*/;
var_mtype = var9;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "NEW_";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var15) /* c_name on <var15:MClass>*/;
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 2;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var16;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var20) /* require_declaration on <self:SeparateCompilerVisitor>*/;
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var21 = 0;
} else {
var21 = var_mtype->type->type_table[cltype] == idtype;
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1598);
show_backtrace(1);
}
var22 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateCompilerVisitor>*/;
var_compiler = var22;
var23 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MClassType(MGenericType)>*/;
if (var23){
((void (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__hardening_live_open_type]))(self, var_mtype) /* hardening_live_open_type on <self:SeparateCompilerVisitor>*/;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateCompilerVisitor>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1602);
show_backtrace(1);
} else {
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_compiler__Frame__mpropdef]))(var24) /* mpropdef on <var24:nullable Frame>*/;
}
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_model__MPropDef__mclassdef]))(var25) /* mclassdef on <var25:MPropDef>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__link_unresolved_type]))(self, var26, var_mtype) /* link_unresolved_type on <self:SeparateCompilerVisitor>*/;
var27 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateCompilerVisitor>*/;
if (var27 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1603);
show_backtrace(1);
} else {
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_compiler__Frame__arguments]))(var27) /* arguments on <var27:nullable Frame>*/;
}
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__first]))(var28) /* first on <var28:Array[RuntimeVariable]>*/;
var_recv = var29;
var30 = ((val* (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__type_info]))(self, var_recv) /* type_info on <self:SeparateCompilerVisitor>*/;
var_recv_type_info = var30;
var31 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__const_color]))(var_mtype) /* const_color on <var_mtype:MClassType(MGenericType)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var31) /* require_declaration on <self:SeparateCompilerVisitor>*/;
var33 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var_compiler) /* modelbuilder on <var_compiler:SeparateCompiler>*/;
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var33) /* toolcontext on <var33:ModelBuilder>*/;
var35 = ((val* (*)(val*))(var34->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(var34) /* opt_phmod_typing on <var34:ToolContext>*/;
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_opts__Option__value]))(var35) /* value on <var35:OptionBool>*/;
var37 = ((struct instance_kernel__Bool*)var36)->value; /* autounbox from nullable Object to Bool */;
var_ = var37;
if (var37){
var32 = var_;
} else {
var38 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var_compiler) /* modelbuilder on <var_compiler:SeparateCompiler>*/;
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var38) /* toolcontext on <var38:ModelBuilder>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(var39) /* opt_phand_typing on <var39:ToolContext>*/;
var41 = ((val* (*)(val*))(var40->class->vft[COLOR_opts__Option__value]))(var40) /* value on <var40:OptionBool>*/;
var42 = ((struct instance_kernel__Bool*)var41)->value; /* autounbox from nullable Object to Bool */;
var32 = var42;
}
if (var32){
if (varonce43) {
var44 = varonce43;
} else {
var45 = "NEW_";
var46 = 4;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType(MGenericType)>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var48) /* c_name on <var48:MClass>*/;
if (varonce50) {
var51 = varonce50;
} else {
var52 = "(";
var53 = 1;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = ", ";
var58 = 2;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "->resolution_table->types[HASH(";
var63 = 31;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "->resolution_table->mask, ";
var68 = 26;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__const_color]))(var_mtype) /* const_color on <var_mtype:MClassType(MGenericType)>*/;
if (varonce71) {
var72 = varonce71;
} else {
var73 = ")])";
var74 = 3;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 11;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var44;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var49;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var51;
((struct instance_array__NativeArray*)var78)->values[3] = (val*) var_length;
((struct instance_array__NativeArray*)var78)->values[4] = (val*) var56;
((struct instance_array__NativeArray*)var78)->values[5] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var78)->values[6] = (val*) var61;
((struct instance_array__NativeArray*)var78)->values[7] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var78)->values[8] = (val*) var66;
((struct instance_array__NativeArray*)var78)->values[9] = (val*) var70;
((struct instance_array__NativeArray*)var78)->values[10] = (val*) var72;
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
var80 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var79, var_mtype) /* new_expr on <self:SeparateCompilerVisitor>*/;
var = var80;
goto RET_LABEL;
} else {
if (varonce81) {
var82 = varonce81;
} else {
var83 = "NEW_";
var84 = 4;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType(MGenericType)>*/;
var87 = ((val* (*)(val*))(var86->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var86) /* c_name on <var86:MClass>*/;
if (varonce88) {
var89 = varonce88;
} else {
var90 = "(";
var91 = 1;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = ", ";
var96 = 2;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "->resolution_table->types[";
var101 = 26;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
var103 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_separate_compiler__MType__const_color]))(var_mtype) /* const_color on <var_mtype:MClassType(MGenericType)>*/;
if (varonce104) {
var105 = varonce104;
} else {
var106 = "])";
var107 = 2;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 9;
var111 = NEW_array__NativeArray(var110, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var111)->values[0] = (val*) var82;
((struct instance_array__NativeArray*)var111)->values[1] = (val*) var87;
((struct instance_array__NativeArray*)var111)->values[2] = (val*) var89;
((struct instance_array__NativeArray*)var111)->values[3] = (val*) var_length;
((struct instance_array__NativeArray*)var111)->values[4] = (val*) var94;
((struct instance_array__NativeArray*)var111)->values[5] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var111)->values[6] = (val*) var99;
((struct instance_array__NativeArray*)var111)->values[7] = (val*) var103;
((struct instance_array__NativeArray*)var111)->values[8] = (val*) var105;
((void (*)(val*, val*, long))(var109->class->vft[COLOR_array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
}
var112 = ((val* (*)(val*))(var109->class->vft[COLOR_string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
var113 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var112, var_mtype) /* new_expr on <self:SeparateCompilerVisitor>*/;
var = var113;
goto RET_LABEL;
}
} else {
}
var114 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__undead_types]))(var_compiler) /* undead_types on <var_compiler:SeparateCompiler>*/;
((void (*)(val*, val*))(var114->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var114, var_mtype) /* add on <var114:Set[MType]>*/;
if (varonce115) {
var116 = varonce115;
} else {
var117 = "type_";
var118 = 5;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType(MGenericType)>*/;
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 2;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var116;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var120;
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
var124 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var124) /* require_declaration on <self:SeparateCompilerVisitor>*/;
if (varonce125) {
var126 = varonce125;
} else {
var127 = "NEW_";
var128 = 4;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
var130 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType(MGenericType)>*/;
var131 = ((val* (*)(val*))(var130->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var130) /* c_name on <var130:MClass>*/;
if (varonce132) {
var133 = varonce132;
} else {
var134 = "(";
var135 = 1;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = ", &type_";
var140 = 8;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType(MGenericType)>*/;
if (varonce143) {
var144 = varonce143;
} else {
var145 = ")";
var146 = 1;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var148 = array_instance Array[Object] */
var149 = 7;
var150 = NEW_array__NativeArray(var149, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var150)->values[0] = (val*) var126;
((struct instance_array__NativeArray*)var150)->values[1] = (val*) var131;
((struct instance_array__NativeArray*)var150)->values[2] = (val*) var133;
((struct instance_array__NativeArray*)var150)->values[3] = (val*) var_length;
((struct instance_array__NativeArray*)var150)->values[4] = (val*) var138;
((struct instance_array__NativeArray*)var150)->values[5] = (val*) var142;
((struct instance_array__NativeArray*)var150)->values[6] = (val*) var144;
((void (*)(val*, val*, long))(var148->class->vft[COLOR_array__Array__with_native]))(var148, var150, var149) /* with_native on <var148:Array[Object]>*/;
}
var151 = ((val* (*)(val*))(var148->class->vft[COLOR_string__Object__to_s]))(var148) /* to_s on <var148:Array[Object]>*/;
var152 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var151, var_mtype) /* new_expr on <self:SeparateCompilerVisitor>*/;
var = var152;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_instance for (self: Object, MType, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__native_array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
