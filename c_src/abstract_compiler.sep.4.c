#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AAsCastExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAsCastExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAsCastExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsNotnullExpr#expr for (self: AAsNotnullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAsNotnullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var7 /* : OptionBool */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsNotnullExpr__n_expr]))(self) /* n_expr on <self:AAsNotnullExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var3;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var4) /* modelbuilder on <var4:AbstractCompiler>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var5) /* toolcontext on <var5:ModelBuilder>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_assert]))(var6) /* opt_no_check_assert on <var6:ToolContext>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_opts__Option__value]))(var7) /* value on <var7:OptionBool>*/;
var9 = ((struct instance_kernel__Bool*)var8)->value; /* autounbox from nullable Object to Bool */;
if (var9){
var = var_i;
goto RET_LABEL;
} else {
}
if (varonce) {
var10 = varonce;
} else {
var11 = "if (";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = " == NULL) {";
var17 = 11;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 3;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var_i;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var15;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "Cast failed";
var26 = 11;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_v, var24) /* add_abort on <var_v:AbstractCompilerVisitor>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "}";
var31 = 1;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var29) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsNotnullExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAsNotnullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAsNotnullExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AParExpr#expr for (self: AParExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AParExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AProxyExpr__n_expr]))(self) /* n_expr on <self:AParExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AParExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AParExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AParExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOnceExpr#expr for (self: AOnceExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOnceExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var_name /* var name: String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var_guard /* var guard: String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
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
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
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
val* var48 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
val* var73 /* : Array[Object] */;
long var74 /* : Int */;
val* var75 /* : NativeArray[Object] */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
val* var82 /* : AExpr */;
val* var83 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
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
val* var94 /* : Array[Object] */;
long var95 /* : Int */;
val* var96 /* : NativeArray[Object] */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : String */;
val* var108 /* : Array[Object] */;
long var109 /* : Int */;
val* var110 /* : NativeArray[Object] */;
val* var111 /* : String */;
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
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AOnceExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2441);
show_backtrace(1);
}
var_mtype = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "varonce";
var4 = 7;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(var_v, var2) /* get_name on <var_v:AbstractCompilerVisitor>*/;
var_name = var6;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "_guard";
var10 = 6;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*, val*))(var_name->class->vft[COLOR_string__String___43d]))(var_name, var8) /* + on <var_name:String>*/;
var13 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(var_v, var12) /* get_name on <var_v:AbstractCompilerVisitor>*/;
var_guard = var13;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "static ";
var17 = 7;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = " ";
var23 = 1;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = ";";
var28 = 1;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 5;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var15;
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var19;
((struct instance_array__NativeArray*)var32)->values[2] = (val*) var21;
((struct instance_array__NativeArray*)var32)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var32)->values[4] = (val*) var26;
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
}
var33 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var33) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "static int ";
var37 = 11;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = ";";
var42 = 1;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 3;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var_guard;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var47) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var48 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_mtype) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var48;
if (varonce49) {
var50 = varonce49;
} else {
var51 = "if (";
var52 = 4;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = ") {";
var57 = 3;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 3;
var61 = NEW_array__NativeArray(var60, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var61)->values[0] = (val*) var50;
((struct instance_array__NativeArray*)var61)->values[1] = (val*) var_guard;
((struct instance_array__NativeArray*)var61)->values[2] = (val*) var55;
((void (*)(val*, val*, long))(var59->class->vft[COLOR_array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
var62 = ((val* (*)(val*))(var59->class->vft[COLOR_string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var62) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce63) {
var64 = varonce63;
} else {
var65 = " = ";
var66 = 3;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = ";";
var71 = 1;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var73 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var73 = array_instance Array[Object] */
var74 = 4;
var75 = NEW_array__NativeArray(var74, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var75)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var75)->values[1] = (val*) var64;
((struct instance_array__NativeArray*)var75)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var75)->values[3] = (val*) var69;
((void (*)(val*, val*, long))(var73->class->vft[COLOR_array__Array__with_native]))(var73, var75, var74) /* with_native on <var73:Array[Object]>*/;
}
var76 = ((val* (*)(val*))(var73->class->vft[COLOR_string__Object__to_s]))(var73) /* to_s on <var73:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var76) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce77) {
var78 = varonce77;
} else {
var79 = "} else {";
var80 = 8;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var78) /* add on <var_v:AbstractCompilerVisitor>*/;
var82 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AProxyExpr__n_expr]))(self) /* n_expr on <self:AOnceExpr>*/;
var83 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var82, var_mtype) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var83;
if (varonce84) {
var85 = varonce84;
} else {
var86 = " = ";
var87 = 3;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = ";";
var92 = 1;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
var94 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var94 = array_instance Array[Object] */
var95 = 4;
var96 = NEW_array__NativeArray(var95, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var96)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var96)->values[1] = (val*) var85;
((struct instance_array__NativeArray*)var96)->values[2] = (val*) var_i;
((struct instance_array__NativeArray*)var96)->values[3] = (val*) var90;
((void (*)(val*, val*, long))(var94->class->vft[COLOR_array__Array__with_native]))(var94, var96, var95) /* with_native on <var94:Array[Object]>*/;
}
var97 = ((val* (*)(val*))(var94->class->vft[COLOR_string__Object__to_s]))(var94) /* to_s on <var94:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var97) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce98) {
var99 = varonce98;
} else {
var100 = " = ";
var101 = 3;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = ";";
var106 = 1;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var108 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var108 = array_instance Array[Object] */
var109 = 4;
var110 = NEW_array__NativeArray(var109, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var110)->values[0] = (val*) var_name;
((struct instance_array__NativeArray*)var110)->values[1] = (val*) var99;
((struct instance_array__NativeArray*)var110)->values[2] = (val*) var_res;
((struct instance_array__NativeArray*)var110)->values[3] = (val*) var104;
((void (*)(val*, val*, long))(var108->class->vft[COLOR_array__Array__with_native]))(var108, var110, var109) /* with_native on <var108:Array[Object]>*/;
}
var111 = ((val* (*)(val*))(var108->class->vft[COLOR_string__Object__to_s]))(var108) /* to_s on <var108:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var111) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce112) {
var113 = varonce112;
} else {
var114 = " = 1;";
var115 = 5;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
var117 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var117 = array_instance Array[Object] */
var118 = 2;
var119 = NEW_array__NativeArray(var118, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var119)->values[0] = (val*) var_guard;
((struct instance_array__NativeArray*)var119)->values[1] = (val*) var113;
((void (*)(val*, val*, long))(var117->class->vft[COLOR_array__Array__with_native]))(var117, var119, var118) /* with_native on <var117:Array[Object]>*/;
}
var120 = ((val* (*)(val*))(var117->class->vft[COLOR_string__Object__to_s]))(var117) /* to_s on <var117:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var120) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce121) {
var122 = varonce121;
} else {
var123 = "}";
var124 = 1;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var122) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOnceExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOnceExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOnceExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendExpr#expr for (self: ASendExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASendExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : Array[RuntimeVariable] */;
long var5 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_a /* var a: AExpr */;
val* var10 /* : null */;
val* var11 /* : RuntimeVariable */;
val* var12 /* : nullable CallSite */;
val* var13 /* : nullable RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_recv = var3;
var4 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var5 = 1;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[RuntimeVariable]>*/;
var_ = var4;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_recv) /* push on <var_:Array[RuntimeVariable]>*/;
var_args = var_;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__raw_arguments]))(self) /* raw_arguments on <self:ASendExpr>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2464);
show_backtrace(1);
}
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Collection__iterator]))(var6) /* iterator on <var6:nullable Array[AExpr](Array[AExpr])>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_a = var9;
var10 = NULL;
var11 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_a, var10) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var11) /* add on <var_args:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__callsite]))(self) /* callsite on <self:ASendExpr>*/;
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2467);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var12, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASendExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASendExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendReassignFormExpr#stmt for (self: ASendReassignFormExpr, AbstractCompilerVisitor) */
void abstract_compiler__ASendReassignFormExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var1 /* : null */;
val* var2 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var3 /* : Array[RuntimeVariable] */;
long var4 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_a /* var a: AExpr */;
val* var9 /* : null */;
val* var10 /* : RuntimeVariable */;
val* var11 /* : AExpr */;
val* var12 /* : null */;
val* var13 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var14 /* : nullable CallSite */;
val* var15 /* : nullable RuntimeVariable */;
val* var_left /* var left: nullable RuntimeVariable */;
val* var16 /* : null */;
short int var17 /* : Bool */;
val* var18 /* : nullable CallSite */;
val* var19 /* : Array[RuntimeVariable] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[RuntimeVariable] */;
val* var22 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : nullable CallSite */;
val* var26 /* : nullable RuntimeVariable */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendReassignFormExpr>*/;
var1 = NULL;
var2 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var, var1) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_recv = var2;
var3 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var4 = 1;
((void (*)(val*, long))(var3->class->vft[COLOR_array__Array__with_capacity]))(var3, var4) /* with_capacity on <var3:Array[RuntimeVariable]>*/;
var_ = var3;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_recv) /* push on <var_:Array[RuntimeVariable]>*/;
var_args = var_;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__raw_arguments]))(self) /* raw_arguments on <self:ASendReassignFormExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2476);
show_backtrace(1);
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:nullable Array[AExpr](Array[AExpr])>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_a = var8;
var9 = NULL;
var10 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_a, var9) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var10) /* add on <var_args:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_value]))(self) /* n_value on <self:ASendReassignFormExpr>*/;
var12 = NULL;
var13 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var11, var12) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_value = var13;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__callsite]))(self) /* callsite on <self:ASendReassignFormExpr>*/;
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2481);
show_backtrace(1);
}
var15 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
var_left = var15;
var16 = NULL;
if (var_left == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2482);
show_backtrace(1);
}
var18 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:ASendReassignFormExpr>*/;
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2484);
show_backtrace(1);
}
var19 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var19 = array_instance Array[RuntimeVariable] */
var20 = 2;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var_left;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var_value;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[RuntimeVariable]>*/;
}
var22 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var18, var19) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
var_res = var22;
var23 = NULL;
if (var_res == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2485);
show_backtrace(1);
}
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var_res) /* add on <var_args:Array[RuntimeVariable]>*/;
var25 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendReassignFormExpr__write_callsite]))(self) /* write_callsite on <self:ASendReassignFormExpr>*/;
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2488);
show_backtrace(1);
}
var26 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var25, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
var26;
RET_LABEL:;
}
/* method abstract_compiler#ASendReassignFormExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ASendReassignFormExpr__stmt(val* self, val* p0) {
abstract_compiler__ASendReassignFormExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ASuperExpr#expr for (self: ASuperExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASuperExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Frame */;
val* var2 /* : Array[RuntimeVariable] */;
val* var3 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : Array[RuntimeVariable] */;
long var5 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var6 /* : AExprs */;
val* var7 /* : ANodes[AExpr] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_a /* var a: AExpr */;
val* var11 /* : null */;
val* var12 /* : RuntimeVariable */;
val* var13 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var14 /* : null */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : Range[Int] */;
long var22 /* : Int */;
val* var23 /* : MMethod */;
val* var24 /* : MPropDef */;
val* var25 /* : nullable MSignature */;
long var26 /* : Int */;
val* var27 /* : Discrete */;
val* var28 /* : Discrete */;
val* var29 /* : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
long var_i /* var i: Int */;
long var32 /* : Int */;
val* var33 /* : nullable Frame */;
val* var34 /* : Array[RuntimeVariable] */;
long var35 /* : Int */;
long var36 /* : Int */;
long var38 /* : Int */;
val* var39 /* : nullable Object */;
val* var41 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
val* var47 /* : nullable Frame */;
val* var48 /* : Array[RuntimeVariable] */;
val* var49 /* : nullable MMethodDef */;
val* var50 /* : MType */;
short int var51 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var52 /* : nullable RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2495);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__Frame__arguments]))(var1) /* arguments on <var1:nullable Frame>*/;
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__first]))(var2) /* first on <var2:Array[RuntimeVariable]>*/;
var_recv = var3;
var4 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var5 = 1;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[RuntimeVariable]>*/;
var_ = var4;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_recv) /* push on <var_:Array[RuntimeVariable]>*/;
var_args = var_;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASuperExpr__n_args]))(self) /* n_args on <self:ASuperExpr>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(var6) /* n_exprs on <var6:AExprs>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var7) /* iterator on <var7:ANodes[AExpr]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_a = var10;
var11 = NULL;
var12 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_a, var11) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var12) /* add on <var_args:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASuperExpr__callsite]))(self) /* callsite on <self:ASuperExpr>*/;
var_callsite = var13;
var14 = NULL;
if (var_callsite == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
var16 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[RuntimeVariable]>*/;
var17 = 1;
{ /* Inline kernel#Int#== (var16,var17) */
var20 = var16 == var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
if (var18){
var21 = NEW_range__Range(&type_range__Rangekernel__Int);
var22 = 0;
var23 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__mproperty]))(var_callsite) /* mproperty on <var_callsite:nullable CallSite(CallSite)>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_model__MProperty__intro]))(var23) /* intro on <var23:MMethod>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_model__MMethodDef__msignature]))(var24) /* msignature on <var24:MPropDef(MMethodDef)>*/;
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2505);
show_backtrace(1);
} else {
var26 = ((long (*)(val*))(var25->class->vft[COLOR_model__MSignature__arity]))(var25) /* arity on <var25:nullable MSignature>*/;
}
var27 = BOX_kernel__Int(var22); /* autobox from Int to Discrete */
var28 = BOX_kernel__Int(var26); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var21->class->vft[COLOR_range__Range__without_last]))(var21, var27, var28) /* without_last on <var21:Range[Int]>*/;
var29 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_collection__Collection__iterator]))(var21) /* iterator on <var21:Range[Int]>*/;
for(;;) {
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[nullable Object]>*/;
if(!var30) break;
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[nullable Object]>*/;
var32 = ((struct instance_kernel__Int*)var31)->value; /* autounbox from nullable Object to Int */;
var_i = var32;
var33 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var33 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2506);
show_backtrace(1);
} else {
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_compiler__Frame__arguments]))(var33) /* arguments on <var33:nullable Frame>*/;
}
var35 = 1;
{ /* Inline kernel#Int#+ (var_i,var35) */
var38 = var_i + var35;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var39 = ((val* (*)(val*, long))(var34->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var34, var36) /* [] on <var34:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var39) /* add on <var_args:Array[RuntimeVariable]>*/;
CONTINUE_label40: (void)0;
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[nullable Object]>*/;
}
BREAK_label40: (void)0;
} else {
}
var41 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
var_res = var41;
var = var_res;
goto RET_LABEL;
} else {
}
var42 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[RuntimeVariable]>*/;
var43 = 1;
{ /* Inline kernel#Int#== (var42,var43) */
var46 = var42 == var43;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
if (var44){
var47 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var47 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2515);
show_backtrace(1);
} else {
var48 = ((val* (*)(val*))(var47->class->vft[COLOR_abstract_compiler__Frame__arguments]))(var47) /* arguments on <var47:nullable Frame>*/;
}
var_args = var48;
} else {
}
var49 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASuperExpr__mpropdef]))(self) /* mpropdef on <self:ASuperExpr>*/;
if (var49 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2519);
show_backtrace(1);
}
var50 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_recv) /* mtype on <var_recv:RuntimeVariable>*/;
/* <var50:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var50->type->table_size) {
var51 = 0;
} else {
var51 = var50->type->type_table[cltype] == idtype;
}
if (!var51) {
var_class_name = var50 == NULL ? "null" : var50->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2519);
show_backtrace(1);
}
var52 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__supercall]))(var_v, var49, var50, var_args) /* supercall on <var_v:AbstractCompilerVisitor>*/;
var = var52;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASuperExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASuperExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANewExpr#expr for (self: ANewExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ANewExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var3 /* : String */;
val* var_ctype /* var ctype: String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
short int var8 /* : Bool */;
val* var9 /* : RuntimeVariable */;
val* var_recv /* var recv: nullable Object */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
short int var15 /* : Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : RuntimeVariable */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
val* var31 /* : Array[RuntimeVariable] */;
long var32 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var33 /* : AExprs */;
val* var34 /* : ANodes[AExpr] */;
val* var35 /* : Iterator[nullable Object] */;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
val* var_a /* var a: AExpr */;
val* var38 /* : null */;
val* var39 /* : RuntimeVariable */;
val* var40 /* : nullable CallSite */;
val* var41 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
val* var42 /* : null */;
short int var43 /* : Bool */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ANewExpr>*/;
/* <var1:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var1 == NULL) {
var2 = 0;
} else {
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2526);
show_backtrace(1);
}
var_mtype = var1;
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
var_ctype = var3;
if (varonce) {
var4 = varonce;
} else {
var5 = "val*";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = ((short int (*)(val*, val*))(var_ctype->class->vft[COLOR_kernel__Object___61d_61d]))(var_ctype, var4) /* == on <var_ctype:String>*/;
if (var8){
var9 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
var_recv = var9;
} else {
if (varonce10) {
var11 = varonce10;
} else {
var12 = "void*";
var13 = 5;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = ((short int (*)(val*, val*))(var_ctype->class->vft[COLOR_kernel__Object___61d_61d]))(var_ctype, var11) /* == on <var_ctype:String>*/;
if (var15){
if (varonce16) {
var17 = varonce16;
} else {
var18 = "NULL/*special!*/";
var19 = 16;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var17, var_mtype) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var_recv = var21;
} else {
if (varonce22) {
var23 = varonce22;
} else {
var24 = "cannot new ";
var25 = 11;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 2;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var_mtype;
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__debug]))(self, var30) /* debug on <self:ANewExpr>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2535);
show_backtrace(1);
}
}
var31 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var32 = 1;
((void (*)(val*, long))(var31->class->vft[COLOR_array__Array__with_capacity]))(var31, var32) /* with_capacity on <var31:Array[RuntimeVariable]>*/;
var_ = var31;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_recv) /* push on <var_:Array[RuntimeVariable]>*/;
var_args = var_;
var33 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANewExpr__n_args]))(self) /* n_args on <self:ANewExpr>*/;
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(var33) /* n_exprs on <var33:AExprs>*/;
var35 = ((val* (*)(val*))(var34->class->vft[COLOR_abstract_collection__Collection__iterator]))(var34) /* iterator on <var34:ANodes[AExpr]>*/;
for(;;) {
var36 = ((short int (*)(val*))(var35->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var35) /* is_ok on <var35:Iterator[nullable Object]>*/;
if(!var36) break;
var37 = ((val* (*)(val*))(var35->class->vft[COLOR_abstract_collection__Iterator__item]))(var35) /* item on <var35:Iterator[nullable Object]>*/;
var_a = var37;
var38 = NULL;
var39 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_a, var38) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var39) /* add on <var_args:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var35->class->vft[COLOR_abstract_collection__Iterator__next]))(var35) /* next on <var35:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var40 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ANewExpr__callsite]))(self) /* callsite on <self:ANewExpr>*/;
if (var40 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2541);
show_backtrace(1);
}
var41 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var40, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
var_res2 = var41;
var42 = NULL;
if (var_res2 == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (var43){
var = var_res2;
goto RET_LABEL;
} else {
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANewExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ANewExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ANewExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrExpr#expr for (self: AAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAttrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var5 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_recv = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__mproperty]))(self) /* mproperty on <self:AAttrExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2554);
show_backtrace(1);
}
var_mproperty = var4;
var5 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var_mproperty, var_recv) /* read_attribute on <var_v:AbstractCompilerVisitor>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAttrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAttrExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrAssignExpr#stmt for (self: AAttrAssignExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAttrAssignExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var1 /* : null */;
val* var2 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var6 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrAssignExpr>*/;
var1 = NULL;
var2 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var, var1) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_recv = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:AAttrAssignExpr>*/;
var4 = NULL;
var5 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var3, var4) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__mproperty]))(self) /* mproperty on <self:AAttrAssignExpr>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2564);
show_backtrace(1);
}
var_mproperty = var6;
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var_mproperty, var_recv, var_i) /* write_attribute on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AAttrAssignExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAttrAssignExpr__stmt(val* self, val* p0) {
abstract_compiler__AAttrAssignExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AAttrReassignExpr#stmt for (self: AAttrReassignExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAttrReassignExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var1 /* : null */;
val* var2 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var6 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var7 /* : RuntimeVariable */;
val* var_attr /* var attr: RuntimeVariable */;
val* var8 /* : nullable CallSite */;
val* var9 /* : Array[RuntimeVariable] */;
long var10 /* : Int */;
val* var11 /* : NativeArray[RuntimeVariable] */;
val* var12 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var13 /* : null */;
short int var14 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrReassignExpr>*/;
var1 = NULL;
var2 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var, var1) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_recv = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_value]))(self) /* n_value on <self:AAttrReassignExpr>*/;
var4 = NULL;
var5 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var3, var4) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_value = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__mproperty]))(self) /* mproperty on <self:AAttrReassignExpr>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2574);
show_backtrace(1);
}
var_mproperty = var6;
var7 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var_mproperty, var_recv) /* read_attribute on <var_v:AbstractCompilerVisitor>*/;
var_attr = var7;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:AAttrReassignExpr>*/;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2576);
show_backtrace(1);
}
var9 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var9 = array_instance Array[RuntimeVariable] */
var10 = 2;
var11 = NEW_array__NativeArray(var10, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var11)->values[0] = (val*) var_attr;
((struct instance_array__NativeArray*)var11)->values[1] = (val*) var_value;
((void (*)(val*, val*, long))(var9->class->vft[COLOR_array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[RuntimeVariable]>*/;
}
var12 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var8, var9) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
var_res = var12;
var13 = NULL;
if (var_res == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2577);
show_backtrace(1);
}
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var_mproperty, var_recv, var_res) /* write_attribute on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AAttrReassignExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAttrReassignExpr__stmt(val* self, val* p0) {
abstract_compiler__AAttrReassignExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AIssetAttrExpr#expr for (self: AIssetAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIssetAttrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var5 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AIssetAttrExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_recv = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__mproperty]))(self) /* mproperty on <self:AIssetAttrExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2586);
show_backtrace(1);
}
var_mproperty = var4;
var5 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__isset_attribute]))(var_v, var_mproperty, var_recv) /* isset_attribute on <var_v:AbstractCompilerVisitor>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIssetAttrExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIssetAttrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIssetAttrExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADebugTypeExpr#stmt for (self: ADebugTypeExpr, AbstractCompilerVisitor) */
void abstract_compiler__ADebugTypeExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler#ADebugTypeExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ADebugTypeExpr__stmt(val* self, val* p0) {
abstract_compiler__ADebugTypeExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Array#- for (self: Array[nullable Object], Array[nullable Object]): Array[nullable Object] */
val* abstract_compiler__Array___45d(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_o /* var o: Array[nullable Object] */;
val* var2 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (o) <p0:Array[nullable Object]> isa Array[Array#0] */
/* <p0:Array[nullable Object]> isa Array[Array#0] */
type_struct = self->type->resolution_table->types[COLOR_array__Arrayarray__Array_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[Array#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2601);
show_backtrace(1);
}
var_o = p0;
var2 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayarray__Array_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[nullable Object]>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Array[nullable Object]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_e = var5;
var6 = ((short int (*)(val*, val*))(var_o->class->vft[COLOR_abstract_collection__Collection__has]))(var_o, var_e) /* has on <var_o:Array[nullable Object]>*/;
var7 = !var6;
if (var7){
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var_e) /* add on <var_res:Array[nullable Object]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Array#- for (self: Object, Array[nullable Object]): Array[nullable Object] */
val* VIRTUAL_abstract_compiler__Array___45d(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
var1 = abstract_compiler__Array___45d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties for (self: MModule, MClass): Set[MProperty] */
val* abstract_compiler__MModule__properties(val* self, val* p0) {
val* var /* : Set[MProperty] */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : HashSet[MProperty] */;
val* var_properties /* var properties: HashSet[MProperty] */;
val* var5 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var6 /* : POSet[MClass] */;
short int var7 /* : Bool */;
val* var8 /* : POSetElement[MClass] */;
val* var9 /* : Collection[Object] */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
val* var13 /* : Set[MProperty] */;
val* var14 /* : Array[MClassDef] */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var18 /* : Array[MProperty] */;
val* var19 /* : Iterator[nullable Object] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
val* var24 /* : Map[MClass, Set[MProperty]] */;
val* var25 /* : Map[MClass, Set[MProperty]] */;
val* var26 /* : nullable Object */;
var_mclass = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MModule__properties_cache]))(self) /* properties_cache on <self:MModule>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_mclass) /* has_key on <var1:Map[MClass, Set[MProperty]]>*/;
var3 = !var2;
if (var3){
var4 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MProperty);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashSet__init]))(var4) /* init on <var4:HashSet[MProperty]>*/;
var_properties = var4;
var5 = NEW_array__Array(&type_array__Arraymodel__MClass);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[MClass]>*/;
var_parents = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(self) /* flatten_mclass_hierarchy on <self:MModule>*/;
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__Collection__has]))(var6, var_mclass) /* has on <var6:POSet[MClass]>*/;
if (var7){
var8 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__in_hierarchy]))(var_mclass, self) /* in_hierarchy on <var_mclass:MClass>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var8) /* direct_greaters on <var8:POSetElement[MClass]>*/;
((void (*)(val*, val*))(var_parents->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_parents, var9) /* add_all on <var_parents:Array[MClass]>*/;
} else {
}
var10 = ((val* (*)(val*))(var_parents->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_parents) /* iterator on <var_parents:Array[MClass]>*/;
for(;;) {
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
if(!var11) break;
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
var_parent = var12;
var13 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MModule__properties]))(self, var_parent) /* properties on <self:MModule>*/;
((void (*)(val*, val*))(var_properties->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_properties, var13) /* add_all on <var_properties:HashSet[MProperty]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var14 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclassdefs]))(var_mclass) /* mclassdefs on <var_mclass:MClass>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__iterator]))(var14) /* iterator on <var14:Array[MClassDef]>*/;
for(;;) {
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
if(!var16) break;
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
var_mclassdef = var17;
var18 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__intro_mproperties]))(var_mclassdef) /* intro_mproperties on <var_mclassdef:MClassDef>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Collection__iterator]))(var18) /* iterator on <var18:Array[MProperty]>*/;
for(;;) {
var20 = ((short int (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var19) /* is_ok on <var19:Iterator[nullable Object]>*/;
if(!var20) break;
var21 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__item]))(var19) /* item on <var19:Iterator[nullable Object]>*/;
var_mprop = var21;
((void (*)(val*, val*))(var_properties->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_properties, var_mprop) /* add on <var_properties:HashSet[MProperty]>*/;
CONTINUE_label22: (void)0;
((void (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__next]))(var19) /* next on <var19:Iterator[nullable Object]>*/;
}
BREAK_label22: (void)0;
CONTINUE_label23: (void)0;
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
BREAK_label23: (void)0;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MModule__properties_cache]))(self) /* properties_cache on <self:MModule>*/;
((void (*)(val*, val*, val*))(var24->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var24, var_mclass, var_properties) /* []= on <var24:Map[MClass, Set[MProperty]]>*/;
} else {
}
var25 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MModule__properties_cache]))(self) /* properties_cache on <self:MModule>*/;
var26 = ((val* (*)(val*, val*))(var25->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var25, var_mclass) /* [] on <var25:Map[MClass, Set[MProperty]]>*/;
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties for (self: Object, MClass): Set[MProperty] */
val* VIRTUAL_abstract_compiler__MModule__properties(val* self, val* p0) {
val* var /* : Set[MProperty] */;
val* var1 /* : Set[MProperty] */;
var1 = abstract_compiler__MModule__properties(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties_cache for (self: MModule): Map[MClass, Set[MProperty]] */
val* abstract_compiler__MModule__properties_cache(val* self) {
val* var /* : Map[MClass, Set[MProperty]] */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
var1 = self->attrs[COLOR_abstract_compiler__MModule___64dproperties_cache].val; /* @properties_cache on <self:MModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @properties_cache");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2630);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties_cache for (self: Object): Map[MClass, Set[MProperty]] */
val* VIRTUAL_abstract_compiler__MModule__properties_cache(val* self) {
val* var /* : Map[MClass, Set[MProperty]] */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
var1 = abstract_compiler__MModule__properties_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties_cache= for (self: MModule, Map[MClass, Set[MProperty]]) */
void abstract_compiler__MModule__properties_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MModule___64dproperties_cache].val = p0; /* @properties_cache on <self:MModule> */
RET_LABEL:;
}
/* method abstract_compiler#MModule#properties_cache= for (self: Object, Map[MClass, Set[MProperty]]) */
void VIRTUAL_abstract_compiler__MModule__properties_cache_61d(val* self, val* p0) {
abstract_compiler__MModule__properties_cache_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AModule#uses_legacy_ni for (self: AModule): Bool */
short int abstract_compiler__AModule__uses_legacy_ni(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "uses_legacy_ni", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2634);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AModule#uses_legacy_ni for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__AModule__uses_legacy_ni(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__AModule__uses_legacy_ni(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AModule#finalize_ffi for (self: AModule, AbstractCompilerVisitor, ModelBuilder) */
void abstract_compiler__AModule__finalize_ffi(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "finalize_ffi", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2637);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#AModule#finalize_ffi for (self: Object, AbstractCompilerVisitor, ModelBuilder) */
void VIRTUAL_abstract_compiler__AModule__finalize_ffi(val* self, val* p0, val* p1) {
abstract_compiler__AModule__finalize_ffi(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AModule#finalize_nitni for (self: AModule, AbstractCompilerVisitor) */
void abstract_compiler__AModule__finalize_nitni(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "finalize_nitni", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2640);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#AModule#finalize_nitni for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AModule__finalize_nitni(val* self, val* p0) {
abstract_compiler__AModule__finalize_nitni(self, p0);
RET_LABEL:;
}
