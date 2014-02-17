#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_string /* var string: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var_name /* var name: String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
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
val* var72 /* : MClass */;
val* var73 /* : MClassType */;
val* var_native_mtype /* var native_mtype: MClassType */;
val* var74 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
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
long var90 /* : Int */;
val* var91 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
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
val* var102 /* : MMethod */;
val* var103 /* : Array[RuntimeVariable] */;
long var104 /* : Int */;
val* var105 /* : NativeArray[RuntimeVariable] */;
val* var106 /* : nullable RuntimeVariable */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : String */;
var_string = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "String";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var1) /* get_class on <self:AbstractCompilerVisitor>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClass__mclass_type]))(var5) /* mclass_type on <var5:MClass>*/;
var_mtype = var6;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "varonce";
var10 = 7;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var8) /* get_name on <self:AbstractCompilerVisitor>*/;
var_name = var12;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "static ";
var16 = 7;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = " ";
var22 = 1;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = ";";
var27 = 1;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 5;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var18;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var20;
((struct instance_array__NativeArray*)var31)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var31)->values[4] = (val*) var25;
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var32) /* add_decl on <self:AbstractCompilerVisitor>*/;
var33 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_mtype) /* new_var on <self:AbstractCompilerVisitor>*/;
var_res = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "if (";
var37 = 4;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = ") {";
var42 = 3;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 3;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var47) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = " = ";
var51 = 3;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = ";";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 4;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var49;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var60)->values[3] = (val*) var54;
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var61) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce62) {
var63 = varonce62;
} else {
var64 = "} else {";
var65 = 8;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var63) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "NativeString";
var70 = 12;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var68) /* get_class on <self:AbstractCompilerVisitor>*/;
var73 = ((val* (*)(val*))(var72->class->vft[COLOR_model__MClass__mclass_type]))(var72) /* mclass_type on <var72:MClass>*/;
var_native_mtype = var73;
var74 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_native_mtype) /* new_var on <self:AbstractCompilerVisitor>*/;
var_nat = var74;
if (varonce75) {
var76 = varonce75;
} else {
var77 = " = \"";
var78 = 4;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
var80 = ((val* (*)(val*))(var_string->class->vft[COLOR_string__AbstractString__escape_to_c]))(var_string) /* escape_to_c on <var_string:String>*/;
if (varonce81) {
var82 = varonce81;
} else {
var83 = "\";";
var84 = 2;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 4;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var_nat;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var76;
((struct instance_array__NativeArray*)var88)->values[2] = (val*) var80;
((struct instance_array__NativeArray*)var88)->values[3] = (val*) var82;
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var89) /* add on <self:AbstractCompilerVisitor>*/;
var90 = ((long (*)(val*))(var_string->class->vft[COLOR_abstract_collection__Collection__length]))(var_string) /* length on <var_string:String>*/;
var91 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__int_instance]))(self, var90) /* int_instance on <self:AbstractCompilerVisitor>*/;
var_length = var91;
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
var99 = "to_s_with_length";
var100 = 16;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(self, var98, var_native_mtype) /* get_property on <self:AbstractCompilerVisitor>*/;
var103 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var103 = array_instance Array[RuntimeVariable] */
var104 = 2;
var105 = NEW_array__NativeArray(var104, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var105)->values[0] = (val*) var_nat;
((struct instance_array__NativeArray*)var105)->values[1] = (val*) var_length;
((void (*)(val*, val*, long))(var103->class->vft[COLOR_array__Array__with_native]))(var103, var105, var104) /* with_native on <var103:Array[RuntimeVariable]>*/;
}
var106 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(self, var102, var103) /* send on <self:AbstractCompilerVisitor>*/;
if (var106 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 937);
show_backtrace(1);
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = ";";
var110 = 1;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 4;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var93;
((struct instance_array__NativeArray*)var114)->values[2] = (val*) var106;
((struct instance_array__NativeArray*)var114)->values[3] = (val*) var108;
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var115) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce116) {
var117 = varonce116;
} else {
var118 = " = ";
var119 = 3;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = ";";
var124 = 1;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 4;
var128 = NEW_array__NativeArray(var127, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var128)->values[0] = (val*) var_name;
((struct instance_array__NativeArray*)var128)->values[1] = (val*) var117;
((struct instance_array__NativeArray*)var128)->values[2] = (val*) var_res;
((struct instance_array__NativeArray*)var128)->values[3] = (val*) var122;
((void (*)(val*, val*, long))(var126->class->vft[COLOR_array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
var129 = ((val* (*)(val*))(var126->class->vft[COLOR_string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var129) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce130) {
var131 = varonce130;
} else {
var132 = "}";
var133 = 1;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var131) /* add on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: Object, String): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__string_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#array_instance for (self: AbstractCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "array_instance", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 943);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#array_instance for (self: Object, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#vararg_instance for (self: AbstractCompilerVisitor, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "vararg_instance", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 946);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#vararg_instance for (self: Object, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__vararg_instance(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var1 /* : List[String] */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__writer]))(self) /* writer on <self:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var) /* lines on <var:CodeWriter>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, var_s) /* add on <var1:List[String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var1 /* : List[String] */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__writer]))(self) /* writer on <self:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var) /* decl_lines on <var:CodeWriter>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, var_s) /* add on <var1:List[String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_decl(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0) {
val* var_key /* var key: String */;
val* var /* : CodeWriter */;
val* var1 /* : CodeFile */;
val* var2 /* : HashSet[String] */;
var_key = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__writer]))(self) /* writer on <self:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__file]))(var) /* file on <var:CodeWriter>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__CodeFile__required_declarations]))(var1) /* required_declarations on <var1:CodeFile>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_key) /* add on <var2:HashSet[String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__declare_once(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : AbstractCompiler */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(var, var_s, var_s) /* provide_declaration on <var:AbstractCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var_s) /* require_declaration on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__declare_once(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__declare_once(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_extern for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_extern(val* self, val* p0) {
val* var_file /* var file: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_tryfile /* var tryfile: String */;
short int var11 /* : Bool */;
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
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : String */;
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
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : String */;
val* var59 /* : AbstractCompiler */;
val* var60 /* : ArraySet[String] */;
short int var61 /* : Bool */;
val* var62 /* : AbstractCompiler */;
val* var63 /* : ArraySet[String] */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : String */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
val* var77 /* : String */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : ExternCFile */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var_f /* var f: ExternCFile */;
val* var86 /* : AbstractCompiler */;
val* var87 /* : Array[ExternCFile] */;
var_file = p0;
if (varonce) {
var = varonce;
} else {
var1 = ".nit";
var2 = 4;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_file__String__strip_extension]))(var_file, var) /* strip_extension on <var_file:String>*/;
var_file = var4;
if (varonce5) {
var6 = varonce5;
} else {
var7 = ".nit.h";
var8 = 6;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var6) /* + on <var_file:String>*/;
var_tryfile = var10;
var11 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
if (var11){
if (varonce12) {
var13 = varonce12;
} else {
var14 = "#include \"";
var15 = 10;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "..";
var20 = 2;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((val* (*)(val*, val*))(var18->class->vft[COLOR_file__String__join_path]))(var18, var_tryfile) /* join_path on <var18:String>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "\"";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var22;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var24;
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__declare_once]))(self, var31) /* declare_once on <self:AbstractCompilerVisitor>*/;
} else {
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = "_nit.h";
var35 = 6;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var33) /* + on <var_file:String>*/;
var_tryfile = var37;
var38 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
if (var38){
if (varonce39) {
var40 = varonce39;
} else {
var41 = "#include \"";
var42 = 10;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "..";
var47 = 2;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = ((val* (*)(val*, val*))(var45->class->vft[COLOR_file__String__join_path]))(var45, var_tryfile) /* join_path on <var45:String>*/;
if (varonce50) {
var51 = varonce50;
} else {
var52 = "\"";
var53 = 1;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 3;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var40;
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var49;
((struct instance_array__NativeArray*)var57)->values[2] = (val*) var51;
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__declare_once]))(self, var58) /* declare_once on <self:AbstractCompilerVisitor>*/;
} else {
}
var59 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var60 = ((val* (*)(val*))(var59->class->vft[COLOR_abstract_compiler__AbstractCompiler__seen_extern]))(var59) /* seen_extern on <var59:AbstractCompiler>*/;
var61 = ((short int (*)(val*, val*))(var60->class->vft[COLOR_abstract_collection__Collection__has]))(var60, var_file) /* has on <var60:ArraySet[String]>*/;
if (var61){
goto RET_LABEL;
} else {
}
var62 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var63 = ((val* (*)(val*))(var62->class->vft[COLOR_abstract_compiler__AbstractCompiler__seen_extern]))(var62) /* seen_extern on <var62:AbstractCompiler>*/;
((void (*)(val*, val*))(var63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var63, var_file) /* add on <var63:ArraySet[String]>*/;
if (varonce64) {
var65 = varonce64;
} else {
var66 = ".nit.c";
var67 = 6;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var65) /* + on <var_file:String>*/;
var_tryfile = var69;
var70 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
var71 = !var70;
if (var71){
if (varonce72) {
var73 = varonce72;
} else {
var74 = "_nit.c";
var75 = 6;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var73) /* + on <var_file:String>*/;
var_tryfile = var77;
var78 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
var79 = !var78;
if (var79){
goto RET_LABEL;
} else {
}
} else {
}
var80 = NEW_abstract_compiler__ExternCFile(&type_abstract_compiler__ExternCFile);
if (varonce81) {
var82 = varonce81;
} else {
var83 = "";
var84 = 0;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
((void (*)(val*, val*, val*))(var80->class->vft[COLOR_abstract_compiler__ExternCFile__init]))(var80, var_tryfile, var82) /* init on <var80:ExternCFile>*/;
var_f = var80;
var86 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var87 = ((val* (*)(val*))(var86->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var86) /* extern_bodies on <var86:AbstractCompiler>*/;
((void (*)(val*, val*))(var87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var87, var_f) /* add on <var87:Array[ExternCFile]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_extern for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_extern(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_extern(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_expr for (self: AbstractCompilerVisitor, String, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_cexpr /* var cexpr: String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
var_cexpr = p0;
var_mtype = p1;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_mtype) /* new_var on <self:AbstractCompilerVisitor>*/;
var_res = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = " = ";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = ";";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 4;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var2;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var_cexpr;
((struct instance_array__NativeArray*)var13)->values[3] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var14) /* add on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_expr for (self: Object, String, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0) {
val* var_message /* var message: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
var_message = p0;
if (varonce) {
var = varonce;
} else {
var1 = "fprintf(stderr, \"Runtime error: %s\", \"";
var2 = 38;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(var_message->class->vft[COLOR_string__AbstractString__escape_to_c]))(var_message) /* escape_to_c on <var_message:String>*/;
if (varonce5) {
var6 = varonce5;
} else {
var7 = "\");";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var6;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var13) /* add on <self:AbstractCompilerVisitor>*/;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_raw_abort]))(self) /* add_raw_abort on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_abort(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_raw_abort for (self: AbstractCompilerVisitor) */
void abstract_compiler__AbstractCompilerVisitor__add_raw_abort(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ANode */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : nullable ANode */;
val* var5 /* : Location */;
val* var6 /* : nullable SourceFile */;
val* var7 /* : null */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : nullable ANode */;
val* var14 /* : Location */;
val* var15 /* : nullable SourceFile */;
val* var16 /* : String */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : nullable ANode */;
val* var24 /* : Location */;
long var25 /* : Int */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : Object */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
var_ = var3;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1015);
show_backtrace(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__ANode__location]))(var4) /* location on <var4:nullable ANode>*/;
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_location__Location__file]))(var5) /* file on <var5:Location>*/;
var7 = NULL;
if (var6 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
var = var8;
} else {
var = var_;
}
if (var){
if (varonce) {
var9 = varonce;
} else {
var10 = "fprintf(stderr, \" (%s:%d)\\n\", \"";
var11 = 31;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
var13 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1016);
show_backtrace(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_parser_nodes__ANode__location]))(var13) /* location on <var13:nullable ANode>*/;
}
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_location__Location__file]))(var14) /* file on <var14:Location>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1016);
show_backtrace(1);
} else {
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_location__SourceFile__filename]))(var15) /* filename on <var15:nullable SourceFile>*/;
}
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_string__AbstractString__escape_to_c]))(var16) /* escape_to_c on <var16:String>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "\", ";
var21 = 3;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1016);
show_backtrace(1);
} else {
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_parser_nodes__ANode__location]))(var23) /* location on <var23:nullable ANode>*/;
}
var25 = ((long (*)(val*))(var24->class->vft[COLOR_location__Location__line_start]))(var24) /* line_start on <var24:Location>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = ");";
var29 = 2;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var17;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var19;
var34 = BOX_kernel__Int(var25); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var33)->values[3] = (val*) var34;
((struct instance_array__NativeArray*)var33)->values[4] = (val*) var27;
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var35) /* add on <self:AbstractCompilerVisitor>*/;
} else {
if (varonce36) {
var37 = varonce36;
} else {
var38 = "fprintf(stderr, \"\\n\");";
var39 = 22;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var37) /* add on <self:AbstractCompilerVisitor>*/;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "show_backtrace(1);";
var44 = 18;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var42) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_raw_abort for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_raw_abort(val* self) {
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(self);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_cast for (self: AbstractCompilerVisitor, RuntimeVariable, MType, String) */
void abstract_compiler__AbstractCompilerVisitor__add_cast(val* self, val* p0, val* p1, val* p2) {
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_cn /* var cn: String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
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
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
var = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(self, var_value, var_mtype, var_tag) /* type_test on <self:AbstractCompilerVisitor>*/;
var_res = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "if (!";
var3 = 5;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = ") {";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var6;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var13) /* add on <self:AbstractCompilerVisitor>*/;
var14 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(self, var_value) /* class_name_string on <self:AbstractCompilerVisitor>*/;
var_cn = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "fprintf(stderr, \"Runtime error: Cast failed. Expected `%s`, got `%s`\", \"";
var18 = 72;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_string__Object__to_s]))(var_mtype) /* to_s on <var_mtype:MType>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_string__AbstractString__escape_to_c]))(var20) /* escape_to_c on <var20:String>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\", ";
var25 = 3;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ");";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var_cn;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var35) /* add on <self:AbstractCompilerVisitor>*/;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_raw_abort]))(self) /* add_raw_abort on <self:AbstractCompilerVisitor>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "}";
var39 = 1;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var37) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_cast for (self: Object, RuntimeVariable, MType, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_cast(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompilerVisitor__add_cast(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#ret for (self: AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AbstractCompilerVisitor__ret(val* self, val* p0) {
val* var_s /* var s: RuntimeVariable */;
val* var /* : nullable Frame */;
val* var1 /* : nullable RuntimeVariable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : nullable Frame */;
val* var7 /* : nullable String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:AbstractCompilerVisitor>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1037);
show_backtrace(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__Frame__returnvar]))(var) /* returnvar on <var:nullable Frame>*/;
}
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1037);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(self, var1, var_s) /* assign on <self:AbstractCompilerVisitor>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "goto ";
var4 = 5;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:AbstractCompilerVisitor>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1038);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_compiler__Frame__returnlabel]))(var6) /* returnlabel on <var6:nullable Frame>*/;
}
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1038);
show_backtrace(1);
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = ";";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var2;
((struct instance_array__NativeArray*)var15)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var15)->values[2] = (val*) var9;
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var16) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#ret for (self: Object, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__ret(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#stmt for (self: AbstractCompilerVisitor, nullable AExpr) */
void abstract_compiler__AbstractCompilerVisitor__stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
var_nexpr = p0;
var = NULL;
if (var_nexpr == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
var_old = var2;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(self, var_nexpr) /* current_node= on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nexpr->class->vft[COLOR_abstract_compiler__AExpr__stmt]))(var_nexpr, self) /* stmt on <var_nexpr:nullable AExpr(AExpr)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(self, var_old) /* current_node= on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#stmt for (self: Object, nullable AExpr) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr for (self: AbstractCompilerVisitor, AExpr, nullable MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
val* var2 /* : nullable RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : MType */;
val* var6 /* : RuntimeVariable */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
val* var9 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
short int var10 /* : Bool */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : AbstractCompiler */;
val* var14 /* : ModelBuilder */;
val* var15 /* : ToolContext */;
val* var16 /* : OptionBool */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : RuntimeVariable */;
var_nexpr = p0;
var_mtype = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
var_old = var1;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(self, var_nexpr) /* current_node= on <self:AbstractCompilerVisitor>*/;
var2 = ((val* (*)(val*, val*))(var_nexpr->class->vft[COLOR_abstract_compiler__AExpr__expr]))(var_nexpr, self) /* expr on <var_nexpr:AExpr>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1057);
show_backtrace(1);
}
var_res = var2;
var3 = NULL;
if (var_mtype == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:AbstractCompilerVisitor>*/;
var_mtype = var5;
var6 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_res, var_mtype) /* autobox on <self:AbstractCompilerVisitor>*/;
var_res = var6;
} else {
}
var7 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_typing__AExpr__mtype]))(var_nexpr) /* mtype on <var_nexpr:AExpr>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1062);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autoadapt]))(self, var_res, var7) /* autoadapt on <self:AbstractCompilerVisitor>*/;
var_res = var8;
var9 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_typing__AExpr__implicit_cast_to]))(var_nexpr) /* implicit_cast_to on <var_nexpr:AExpr>*/;
var_implicit_cast_to = var9;
var11 = NULL;
if (var_implicit_cast_to == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
var_ = var12;
if (var12){
var13 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var13) /* modelbuilder on <var13:AbstractCompiler>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var14) /* toolcontext on <var14:ModelBuilder>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_autocast]))(var15) /* opt_no_check_autocast on <var15:ToolContext>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_opts__Option__value]))(var16) /* value on <var16:OptionBool>*/;
var18 = ((struct instance_kernel__Bool*)var17)->value; /* autounbox from nullable Object to Bool */;
var19 = !var18;
var10 = var19;
} else {
var10 = var_;
}
if (var10){
if (varonce) {
var20 = varonce;
} else {
var21 = "auto";
var22 = 4;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_cast]))(self, var_res, var_implicit_cast_to, var20) /* add_cast on <self:AbstractCompilerVisitor>*/;
var24 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autoadapt]))(self, var_res, var_implicit_cast_to) /* autoadapt on <self:AbstractCompilerVisitor>*/;
var_res = var24;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(self, var_old) /* current_node= on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr for (self: Object, AExpr, nullable MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__expr(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr_bool for (self: AbstractCompilerVisitor, AExpr): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__expr_bool(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
var_nexpr = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__bool_type]))(self) /* bool_type on <self:AbstractCompilerVisitor>*/;
var2 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(self, var_nexpr, var1) /* expr on <self:AbstractCompilerVisitor>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr_bool for (self: Object, AExpr): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__expr_bool(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#debug for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__debug(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var1 /* : null */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
var_message = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
var_node = var;
var1 = NULL;
if (var_node == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "?: ";
var5 = 3;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var_message;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var10) /* print on <self:AbstractCompilerVisitor>*/;
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__debug]))(var_node, var_message) /* debug on <var_node:nullable ANode(ANode)>*/;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "/* DEBUG: ";
var14 = 10;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = " */";
var19 = 3;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var_message;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var17;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var24) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#debug for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__debug(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef for (self: AbstractRuntimeFunction): MMethodDef */
val* abstract_compiler__AbstractRuntimeFunction__mmethoddef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val; /* @mmethoddef on <self:AbstractRuntimeFunction> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmethoddef");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1095);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef for (self: Object): MMethodDef */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = abstract_compiler__AbstractRuntimeFunction__mmethoddef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef= for (self: AbstractRuntimeFunction, MMethodDef) */
void abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val = p0; /* @mmethoddef on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef= for (self: Object, MMethodDef) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d(val* self, val* p0) {
abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name for (self: AbstractRuntimeFunction): String */
val* abstract_compiler__AbstractRuntimeFunction__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name_cache]))(self) /* c_name_cache on <self:AbstractRuntimeFunction>*/;
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
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__build_c_name]))(self) /* build_c_name on <self:AbstractRuntimeFunction>*/;
var_res = var4;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:AbstractRuntimeFunction>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#build_c_name for (self: AbstractRuntimeFunction): String */
val* abstract_compiler__AbstractRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "build_c_name", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1109);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#build_c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractRuntimeFunction__build_c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache for (self: AbstractRuntimeFunction): nullable String */
val* abstract_compiler__AbstractRuntimeFunction__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dc_name_cache].val; /* @c_name_cache on <self:AbstractRuntimeFunction> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__AbstractRuntimeFunction__c_name_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache= for (self: AbstractRuntimeFunction, nullable String) */
void abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dc_name_cache].val = p0; /* @c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d(val* self, val* p0) {
abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#call for (self: AbstractRuntimeFunction, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__AbstractRuntimeFunction__call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
const char* var_class_name2;
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1114);
show_backtrace(1);
}
var_class_name2 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "call", var_class_name2);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1114);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#call for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AbstractRuntimeFunction__call(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#compile_to_c for (self: AbstractRuntimeFunction, AbstractCompiler) */
void abstract_compiler__AbstractRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
const char* var_class_name1;
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1118);
show_backtrace(1);
}
var_class_name1 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "compile_to_c", var_class_name1);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1118);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#compile_to_c for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__compile_to_c(val* self, val* p0) {
abstract_compiler__AbstractRuntimeFunction__compile_to_c(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#init for (self: AbstractRuntimeFunction, MMethodDef) */
void abstract_compiler__AbstractRuntimeFunction__init(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val = p0; /* @mmethoddef on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#init for (self: Object, MMethodDef) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init(val* self, val* p0) {
abstract_compiler__AbstractRuntimeFunction__init(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#name for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dname].val; /* @name on <self:RuntimeVariable> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1128);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#name for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__RuntimeVariable__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#name= for (self: RuntimeVariable, String) */
void abstract_compiler__RuntimeVariable__name_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dname].val = p0; /* @name on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#name= for (self: Object, String) */
void VIRTUAL_abstract_compiler__RuntimeVariable__name_61d(val* self, val* p0) {
abstract_compiler__RuntimeVariable__name_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mtype for (self: RuntimeVariable): MType */
val* abstract_compiler__RuntimeVariable__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmtype].val; /* @mtype on <self:RuntimeVariable> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mtype");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1131);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mtype for (self: Object): MType */
val* VIRTUAL_abstract_compiler__RuntimeVariable__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = abstract_compiler__RuntimeVariable__mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mtype= for (self: RuntimeVariable, MType) */
void abstract_compiler__RuntimeVariable__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmtype].val = p0; /* @mtype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mtype= for (self: Object, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__mtype_61d(val* self, val* p0) {
abstract_compiler__RuntimeVariable__mtype_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mcasttype for (self: RuntimeVariable): MType */
val* abstract_compiler__RuntimeVariable__mcasttype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmcasttype].val; /* @mcasttype on <self:RuntimeVariable> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mcasttype");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1134);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mcasttype for (self: Object): MType */
val* VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = abstract_compiler__RuntimeVariable__mcasttype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mcasttype= for (self: RuntimeVariable, MType) */
void abstract_compiler__RuntimeVariable__mcasttype_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmcasttype].val = p0; /* @mcasttype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mcasttype= for (self: Object, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype_61d(val* self, val* p0) {
abstract_compiler__RuntimeVariable__mcasttype_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#is_exact for (self: RuntimeVariable): Bool */
short int abstract_compiler__RuntimeVariable__is_exact(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dis_exact].s; /* @is_exact on <self:RuntimeVariable> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#is_exact for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__RuntimeVariable__is_exact(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__RuntimeVariable__is_exact(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#is_exact= for (self: RuntimeVariable, Bool) */
void abstract_compiler__RuntimeVariable__is_exact_61d(val* self, short int p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dis_exact].s = p0; /* @is_exact on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#is_exact= for (self: Object, Bool) */
void VIRTUAL_abstract_compiler__RuntimeVariable__is_exact_61d(val* self, short int p0) {
abstract_compiler__RuntimeVariable__is_exact_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#init for (self: RuntimeVariable, String, MType, MType) */
void abstract_compiler__RuntimeVariable__init(val* self, val* p0, val* p1, val* p2) {
val* var_name /* var name: String */;
val* var_mtype /* var mtype: MType */;
val* var_mcasttype /* var mcasttype: MType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var_name = p0;
var_mtype = p1;
var_mcasttype = p2;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__name_61d]))(self, var_name) /* name= on <self:RuntimeVariable>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype_61d]))(self, var_mtype) /* mtype= on <self:RuntimeVariable>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype_61d]))(self, var_mcasttype) /* mcasttype= on <self:RuntimeVariable>*/;
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
var1 = !var;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1146);
show_backtrace(1);
}
var2 = ((short int (*)(val*))(var_mcasttype->class->vft[COLOR_model__MType__need_anchor]))(var_mcasttype) /* need_anchor on <var_mcasttype:MType>*/;
var3 = !var2;
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1147);
show_backtrace(1);
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#init for (self: Object, String, MType, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__init(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__RuntimeVariable__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#to_s for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(self) /* name on <self:RuntimeVariable>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#to_s for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__RuntimeVariable__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#inspect for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__inspect(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var_exact_str /* var exact_str: nullable Object */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : MType */;
val* var12 /* : MType */;
short int var13 /* : Bool */;
val* var14 /* : MType */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
val* var18 /* : String */;
val* var_type_str /* var type_str: nullable Object */;
val* var19 /* : MType */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : MType */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : String */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var_ /* var : Array[Object] */;
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
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : String */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact]))(self) /* is_exact on <self:RuntimeVariable>*/;
if (var1){
if (varonce) {
var2 = varonce;
} else {
var3 = " exact";
var4 = 6;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var_exact_str = var2;
} else {
if (varonce6) {
var7 = varonce6;
} else {
var8 = "";
var9 = 0;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var_exact_str = var7;
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(self) /* mtype on <self:RuntimeVariable>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(self) /* mcasttype on <self:RuntimeVariable>*/;
var13 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var12) /* == on <var11:MType>*/;
if (var13){
var14 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(self) /* mtype on <self:RuntimeVariable>*/;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 2;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var17)->values[1] = (val*) var_exact_str;
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
}
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
var_type_str = var18;
} else {
var19 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(self) /* mtype on <self:RuntimeVariable>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "(";
var23 = 1;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(self) /* mcasttype on <self:RuntimeVariable>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = ")";
var29 = 1;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var19;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var25;
((struct instance_array__NativeArray*)var33)->values[3] = (val*) var_exact_str;
((struct instance_array__NativeArray*)var33)->values[4] = (val*) var27;
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
var34 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
var_type_str = var34;
}
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
var36 = 5;
((void (*)(val*, long))(var35->class->vft[COLOR_array__Array__with_capacity]))(var35, var36) /* with_capacity on <var35:Array[Object]>*/;
var_ = var35;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "<";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var38) /* add on <var_:Array[Object]>*/;
var42 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(self) /* name on <self:RuntimeVariable>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var42) /* add on <var_:Array[Object]>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = ":";
var46 = 1;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var44) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_type_str) /* add on <var_:Array[Object]>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = ">";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var49) /* add on <var_:Array[Object]>*/;
var53 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var53;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#inspect for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__inspect(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__RuntimeVariable__inspect(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#visitor for (self: Frame): AbstractCompilerVisitor */
val* abstract_compiler__Frame__visitor(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : AbstractCompilerVisitor */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dvisitor].val; /* @visitor on <self:Frame> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @visitor");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1175);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#visitor for (self: Object): AbstractCompilerVisitor */
val* VIRTUAL_abstract_compiler__Frame__visitor(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : AbstractCompilerVisitor */;
var1 = abstract_compiler__Frame__visitor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#visitor= for (self: Frame, AbstractCompilerVisitor) */
void abstract_compiler__Frame__visitor_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (visitor) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1175);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__Frame___64dvisitor].val = p0; /* @visitor on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#visitor= for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__Frame__visitor_61d(val* self, val* p0) {
abstract_compiler__Frame__visitor_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#mpropdef for (self: Frame): MPropDef */
val* abstract_compiler__Frame__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dmpropdef].val; /* @mpropdef on <self:Frame> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdef");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1178);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#mpropdef for (self: Object): MPropDef */
val* VIRTUAL_abstract_compiler__Frame__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = abstract_compiler__Frame__mpropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#mpropdef= for (self: Frame, MPropDef) */
void abstract_compiler__Frame__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___64dmpropdef].val = p0; /* @mpropdef on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#mpropdef= for (self: Object, MPropDef) */
void VIRTUAL_abstract_compiler__Frame__mpropdef_61d(val* self, val* p0) {
abstract_compiler__Frame__mpropdef_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#receiver for (self: Frame): MClassType */
val* abstract_compiler__Frame__receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dreceiver].val; /* @receiver on <self:Frame> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @receiver");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1182);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#receiver for (self: Object): MClassType */
val* VIRTUAL_abstract_compiler__Frame__receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = abstract_compiler__Frame__receiver(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#receiver= for (self: Frame, MClassType) */
void abstract_compiler__Frame__receiver_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___64dreceiver].val = p0; /* @receiver on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#receiver= for (self: Object, MClassType) */
void VIRTUAL_abstract_compiler__Frame__receiver_61d(val* self, val* p0) {
abstract_compiler__Frame__receiver_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#arguments for (self: Frame): Array[RuntimeVariable] */
val* abstract_compiler__Frame__arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64darguments].val; /* @arguments on <self:Frame> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @arguments");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1185);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#arguments for (self: Object): Array[RuntimeVariable] */
val* VIRTUAL_abstract_compiler__Frame__arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
var1 = abstract_compiler__Frame__arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#arguments= for (self: Frame, Array[RuntimeVariable]) */
void abstract_compiler__Frame__arguments_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___64darguments].val = p0; /* @arguments on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#arguments= for (self: Object, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__Frame__arguments_61d(val* self, val* p0) {
abstract_compiler__Frame__arguments_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnvar for (self: Frame): nullable RuntimeVariable */
val* abstract_compiler__Frame__returnvar(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dreturnvar].val; /* @returnvar on <self:Frame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnvar for (self: Object): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__Frame__returnvar(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__Frame__returnvar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnvar= for (self: Frame, nullable RuntimeVariable) */
void abstract_compiler__Frame__returnvar_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___64dreturnvar].val = p0; /* @returnvar on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnvar= for (self: Object, nullable RuntimeVariable) */
void VIRTUAL_abstract_compiler__Frame__returnvar_61d(val* self, val* p0) {
abstract_compiler__Frame__returnvar_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnlabel for (self: Frame): nullable String */
val* abstract_compiler__Frame__returnlabel(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dreturnlabel].val; /* @returnlabel on <self:Frame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnlabel for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__Frame__returnlabel(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__Frame__returnlabel(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnlabel= for (self: Frame, nullable String) */
void abstract_compiler__Frame__returnlabel_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___64dreturnlabel].val = p0; /* @returnlabel on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnlabel= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__Frame__returnlabel_61d(val* self, val* p0) {
abstract_compiler__Frame__returnlabel_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#init for (self: Frame, AbstractCompilerVisitor, MPropDef, MClassType, Array[RuntimeVariable]) */
void abstract_compiler__Frame__init(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (visitor) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1170);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__Frame___64dvisitor].val = p0; /* @visitor on <self:Frame> */
self->attrs[COLOR_abstract_compiler__Frame___64dmpropdef].val = p1; /* @mpropdef on <self:Frame> */
self->attrs[COLOR_abstract_compiler__Frame___64dreceiver].val = p2; /* @receiver on <self:Frame> */
self->attrs[COLOR_abstract_compiler__Frame___64darguments].val = p3; /* @arguments on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#init for (self: Object, AbstractCompilerVisitor, MPropDef, MClassType, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__Frame__init(val* self, val* p0, val* p1, val* p2, val* p3) {
abstract_compiler__Frame__init(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method abstract_compiler#ExternCFile#filename for (self: ExternCFile): String */
val* abstract_compiler__ExternCFile__filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__ExternCFile___64dfilename].val; /* @filename on <self:ExternCFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @filename");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1197);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ExternCFile#filename for (self: Object): String */
val* VIRTUAL_abstract_compiler__ExternCFile__filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__ExternCFile__filename(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ExternCFile#filename= for (self: ExternCFile, String) */
void abstract_compiler__ExternCFile__filename_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ExternCFile___64dfilename].val = p0; /* @filename on <self:ExternCFile> */
RET_LABEL:;
}
/* method abstract_compiler#ExternCFile#filename= for (self: Object, String) */
void VIRTUAL_abstract_compiler__ExternCFile__filename_61d(val* self, val* p0) {
abstract_compiler__ExternCFile__filename_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ExternCFile#cflags for (self: ExternCFile): String */
val* abstract_compiler__ExternCFile__cflags(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__ExternCFile___64dcflags].val; /* @cflags on <self:ExternCFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cflags");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1199);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ExternCFile#cflags for (self: Object): String */
val* VIRTUAL_abstract_compiler__ExternCFile__cflags(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__ExternCFile__cflags(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ExternCFile#cflags= for (self: ExternCFile, String) */
void abstract_compiler__ExternCFile__cflags_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__ExternCFile___64dcflags].val = p0; /* @cflags on <self:ExternCFile> */
RET_LABEL:;
}
/* method abstract_compiler#ExternCFile#cflags= for (self: Object, String) */
void VIRTUAL_abstract_compiler__ExternCFile__cflags_61d(val* self, val* p0) {
abstract_compiler__ExternCFile__cflags_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ExternCFile#init for (self: ExternCFile, String, String) */
void abstract_compiler__ExternCFile__init(val* self, val* p0, val* p1) {
self->attrs[COLOR_abstract_compiler__ExternCFile___64dfilename].val = p0; /* @filename on <self:ExternCFile> */
self->attrs[COLOR_abstract_compiler__ExternCFile___64dcflags].val = p1; /* @cflags on <self:ExternCFile> */
RET_LABEL:;
}
/* method abstract_compiler#ExternCFile#init for (self: Object, String, String) */
void VIRTUAL_abstract_compiler__ExternCFile__init(val* self, val* p0, val* p1) {
abstract_compiler__ExternCFile__init(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#MType#ctype for (self: MType): String */
val* abstract_compiler__MType__ctype(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "val*";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctype for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MType__ctype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctypename for (self: MType): String */
val* abstract_compiler__MType__ctypename(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "val";
var3 = 3;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctypename for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MType__ctypename(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name for (self: MType): String */
val* abstract_compiler__MType__c_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "c_name", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1209);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache for (self: MType): nullable String */
val* abstract_compiler__MType__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MType___64dc_name_cache].val; /* @c_name_cache on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MType__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__MType__c_name_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache= for (self: MType, nullable String) */
void abstract_compiler__MType__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MType___64dc_name_cache].val = p0; /* @c_name_cache on <self:MType> */
RET_LABEL:;
}
/* method abstract_compiler#MType#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MType__c_name_cache_61d(val* self, val* p0) {
abstract_compiler__MType__c_name_cache_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#MClassType#c_name for (self: MClassType): String */
val* abstract_compiler__MClassType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MClass */;
val* var11 /* : MModule */;
val* var12 /* : String */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : MClass */;
val* var20 /* : String */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache]))(self) /* c_name_cache on <self:MClassType>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MClass__intro_mmodule]))(var10) /* intro_mmodule on <var10:MClass>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_mmodule__MModule__name]))(var11) /* name on <var11:MModule>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_string__AbstractString__to_cmangle]))(var12) /* to_cmangle on <var12:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "__";
var17 = 2;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var15) /* add on <var_:Array[Object]>*/;
var19 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_model__MClass__name]))(var19) /* name on <var19:MClass>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_string__AbstractString__to_cmangle]))(var20) /* to_cmangle on <var20:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var21) /* add on <var_:Array[Object]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "";
var25 = 0;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var23) /* add on <var_:Array[Object]>*/;
var27 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var27;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MClassType>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype for (self: MClassType): String */
val* abstract_compiler__MClassType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : MClass */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : MClass */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : MClass */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : MClass */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var65 /* : MClass */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
short int var72 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : MClass */;
val* var79 /* : MClassKind */;
val* var80 /* : MClassKind */;
short int var81 /* : Bool */;
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
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClass__name]))(var1) /* name on <var1:MClass>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "Int";
var5 = 3;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var3) /* == on <var2:String>*/;
if (var7){
if (varonce8) {
var9 = varonce8;
} else {
var10 = "long";
var11 = 4;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var = var9;
goto RET_LABEL;
} else {
var13 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MClass__name]))(var13) /* name on <var13:MClass>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "Bool";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var16) /* == on <var14:String>*/;
if (var20){
if (varonce21) {
var22 = varonce21;
} else {
var23 = "short int";
var24 = 9;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var = var22;
goto RET_LABEL;
} else {
var26 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_model__MClass__name]))(var26) /* name on <var26:MClass>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Char";
var31 = 4;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_kernel__Object___61d_61d]))(var27, var29) /* == on <var27:String>*/;
if (var33){
if (varonce34) {
var35 = varonce34;
} else {
var36 = "char";
var37 = 4;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var = var35;
goto RET_LABEL;
} else {
var39 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_model__MClass__name]))(var39) /* name on <var39:MClass>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Float";
var44 = 5;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = ((short int (*)(val*, val*))(var40->class->vft[COLOR_kernel__Object___61d_61d]))(var40, var42) /* == on <var40:String>*/;
if (var46){
if (varonce47) {
var48 = varonce47;
} else {
var49 = "double";
var50 = 6;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var = var48;
goto RET_LABEL;
} else {
var52 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_model__MClass__name]))(var52) /* name on <var52:MClass>*/;
if (varonce54) {
var55 = varonce54;
} else {
var56 = "NativeString";
var57 = 12;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = ((short int (*)(val*, val*))(var53->class->vft[COLOR_kernel__Object___61d_61d]))(var53, var55) /* == on <var53:String>*/;
if (var59){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "char*";
var63 = 5;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var = var61;
goto RET_LABEL;
} else {
var65 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var66 = ((val* (*)(val*))(var65->class->vft[COLOR_model__MClass__name]))(var65) /* name on <var65:MClass>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "NativeArray";
var70 = 11;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((short int (*)(val*, val*))(var66->class->vft[COLOR_kernel__Object___61d_61d]))(var66, var68) /* == on <var66:String>*/;
if (var72){
if (varonce73) {
var74 = varonce73;
} else {
var75 = "val*";
var76 = 4;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var = var74;
goto RET_LABEL;
} else {
var78 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var79 = ((val* (*)(val*))(var78->class->vft[COLOR_model__MClass__kind]))(var78) /* kind on <var78:MClass>*/;
var80 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:MClassType>*/;
var81 = ((short int (*)(val*, val*))(var79->class->vft[COLOR_kernel__Object___61d_61d]))(var79, var80) /* == on <var79:MClassKind>*/;
if (var81){
if (varonce82) {
var83 = varonce82;
} else {
var84 = "void*";
var85 = 5;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var = var83;
goto RET_LABEL;
} else {
if (varonce87) {
var88 = varonce87;
} else {
var89 = "val*";
var90 = 4;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var = var88;
goto RET_LABEL;
}
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__ctype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctypename for (self: MClassType): String */
val* abstract_compiler__MClassType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : MClass */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : MClass */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : MClass */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : MClass */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var65 /* : MClass */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
short int var72 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : MClass */;
val* var79 /* : MClassKind */;
val* var80 /* : MClassKind */;
short int var81 /* : Bool */;
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
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClass__name]))(var1) /* name on <var1:MClass>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "Int";
var5 = 3;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var3) /* == on <var2:String>*/;
if (var7){
if (varonce8) {
var9 = varonce8;
} else {
var10 = "l";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var = var9;
goto RET_LABEL;
} else {
var13 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MClass__name]))(var13) /* name on <var13:MClass>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "Bool";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var16) /* == on <var14:String>*/;
if (var20){
if (varonce21) {
var22 = varonce21;
} else {
var23 = "s";
var24 = 1;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var = var22;
goto RET_LABEL;
} else {
var26 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_model__MClass__name]))(var26) /* name on <var26:MClass>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Char";
var31 = 4;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_kernel__Object___61d_61d]))(var27, var29) /* == on <var27:String>*/;
if (var33){
if (varonce34) {
var35 = varonce34;
} else {
var36 = "c";
var37 = 1;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var = var35;
goto RET_LABEL;
} else {
var39 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_model__MClass__name]))(var39) /* name on <var39:MClass>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Float";
var44 = 5;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = ((short int (*)(val*, val*))(var40->class->vft[COLOR_kernel__Object___61d_61d]))(var40, var42) /* == on <var40:String>*/;
if (var46){
if (varonce47) {
var48 = varonce47;
} else {
var49 = "d";
var50 = 1;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var = var48;
goto RET_LABEL;
} else {
var52 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_model__MClass__name]))(var52) /* name on <var52:MClass>*/;
if (varonce54) {
var55 = varonce54;
} else {
var56 = "NativeString";
var57 = 12;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = ((short int (*)(val*, val*))(var53->class->vft[COLOR_kernel__Object___61d_61d]))(var53, var55) /* == on <var53:String>*/;
if (var59){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "str";
var63 = 3;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var = var61;
goto RET_LABEL;
} else {
var65 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var66 = ((val* (*)(val*))(var65->class->vft[COLOR_model__MClass__name]))(var65) /* name on <var65:MClass>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "NativeArray";
var70 = 11;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((short int (*)(val*, val*))(var66->class->vft[COLOR_kernel__Object___61d_61d]))(var66, var68) /* == on <var66:String>*/;
if (var72){
if (varonce73) {
var74 = varonce73;
} else {
var75 = "val";
var76 = 3;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var = var74;
goto RET_LABEL;
} else {
var78 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var79 = ((val* (*)(val*))(var78->class->vft[COLOR_model__MClass__kind]))(var78) /* kind on <var78:MClass>*/;
var80 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:MClassType>*/;
var81 = ((short int (*)(val*, val*))(var79->class->vft[COLOR_kernel__Object___61d_61d]))(var79, var80) /* == on <var79:MClassKind>*/;
if (var81){
if (varonce82) {
var83 = varonce82;
} else {
var84 = "ptr";
var85 = 3;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var = var83;
goto RET_LABEL;
} else {
if (varonce87) {
var88 = varonce87;
} else {
var89 = "val";
var90 = 3;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var = var88;
goto RET_LABEL;
}
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctypename for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__ctypename(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MGenericType#c_name for (self: MGenericType): String */
val* abstract_compiler__MGenericType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : Array[MType] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var9 /* : String */;
val* var10 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache]))(self) /* c_name_cache on <self:MGenericType>*/;
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
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MGenericType__c_name]))(self) /* c_name on <self:MGenericType>*/;
var_res = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__arguments]))(self) /* arguments on <self:MGenericType>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Array[MType]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_t = var8;
var9 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_t) /* c_name on <var_t:MType>*/;
var10 = ((val* (*)(val*, val*))(var_res->class->vft[COLOR_string__String___43d]))(var_res, var9) /* + on <var_res:nullable String(String)>*/;
var_res = var10;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MGenericType>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MGenericType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MGenericType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MGenericType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MParameterType#c_name for (self: MParameterType): String */
val* abstract_compiler__MParameterType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MClass */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
long var17 /* : Int */;
val* var18 /* : nullable Object */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache]))(self) /* c_name_cache on <self:MParameterType>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MParameterType__mclass]))(self) /* mclass on <self:MParameterType>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var10) /* c_name on <var10:MClass>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "_FT";
var15 = 3;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = ((long (*)(val*))(self->class->vft[COLOR_model__MParameterType__rank]))(self) /* rank on <self:MParameterType>*/;
var18 = BOX_kernel__Int(var17); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var18) /* add on <var_:Array[Object]>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "";
var22 = 0;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var20) /* add on <var_:Array[Object]>*/;
var24 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var24;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MParameterType>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MParameterType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MParameterType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MParameterType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MVirtualType#c_name for (self: MVirtualType): String */
val* abstract_compiler__MVirtualType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MProperty */;
val* var11 /* : MPropDef */;
val* var12 /* : MClassDef */;
val* var13 /* : MClass */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : MProperty */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache]))(self) /* c_name_cache on <self:MVirtualType>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MVirtualType__mproperty]))(self) /* mproperty on <self:MVirtualType>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MProperty__intro]))(var10) /* intro on <var10:MProperty>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MPropDef__mclassdef]))(var11) /* mclassdef on <var11:MPropDef>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MClassDef__mclass]))(var12) /* mclass on <var12:MClassDef>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var13) /* c_name on <var13:MClass>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "_VT";
var18 = 3;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_model__MVirtualType__mproperty]))(self) /* mproperty on <self:MVirtualType>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_model__MProperty__name]))(var20) /* name on <var20:MProperty>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var21) /* add on <var_:Array[Object]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "";
var25 = 0;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var23) /* add on <var_:Array[Object]>*/;
var27 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var27;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MVirtualType>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MVirtualType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MVirtualType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MVirtualType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MNullableType#c_name for (self: MNullableType): String */
val* abstract_compiler__MNullableType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MType */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache]))(self) /* c_name_cache on <self:MNullableType>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 3;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "nullable_";
var8 = 9;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__MType__c_name]))(var10) /* c_name on <var10:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "";
var15 = 0;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var17;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MNullableType>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MNullableType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MNullableType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MNullableType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name for (self: MClass): String */
val* abstract_compiler__MClass__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MModule */;
val* var11 /* : String */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MClass__c_name_cache]))(self) /* c_name_cache on <self:MClass>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__intro_mmodule]))(self) /* intro_mmodule on <self:MClass>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_mmodule__MModule__name]))(var10) /* name on <var10:MModule>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_string__AbstractString__to_cmangle]))(var11) /* to_cmangle on <var11:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var12) /* add on <var_:Array[Object]>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "__";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__name]))(self) /* name on <self:MClass>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_string__AbstractString__to_cmangle]))(var18) /* to_cmangle on <var18:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var19) /* add on <var_:Array[Object]>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "";
var23 = 0;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var21) /* add on <var_:Array[Object]>*/;
var25 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var25;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MClass__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MClass>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClass__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClass__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache for (self: MClass): nullable String */
val* abstract_compiler__MClass__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MClass___64dc_name_cache].val; /* @c_name_cache on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MClass__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__MClass__c_name_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache= for (self: MClass, nullable String) */
void abstract_compiler__MClass__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MClass___64dc_name_cache].val = p0; /* @c_name_cache on <self:MClass> */
RET_LABEL:;
}
/* method abstract_compiler#MClass#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MClass__c_name_cache_61d(val* self, val* p0) {
abstract_compiler__MClass__c_name_cache_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#MProperty#c_name for (self: MProperty): String */
val* abstract_compiler__MProperty__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MPropDef */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MProperty__c_name_cache]))(self) /* c_name_cache on <self:MProperty>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 3;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__intro]))(self) /* intro on <self:MProperty>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var10) /* c_name on <var10:MPropDef>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "";
var15 = 0;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var17;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MProperty__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MProperty>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MProperty__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MProperty__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache for (self: MProperty): nullable String */
val* abstract_compiler__MProperty__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MProperty___64dc_name_cache].val; /* @c_name_cache on <self:MProperty> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MProperty__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__MProperty__c_name_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache= for (self: MProperty, nullable String) */
void abstract_compiler__MProperty__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MProperty___64dc_name_cache].val = p0; /* @c_name_cache on <self:MProperty> */
RET_LABEL:;
}
/* method abstract_compiler#MProperty#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MProperty__c_name_cache_61d(val* self, val* p0) {
abstract_compiler__MProperty__c_name_cache_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name_cache for (self: MPropDef): nullable String */
val* abstract_compiler__MPropDef__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MPropDef___64dc_name_cache].val; /* @c_name_cache on <self:MPropDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MPropDef__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__MPropDef__c_name_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name_cache= for (self: MPropDef, nullable String) */
void abstract_compiler__MPropDef__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MPropDef___64dc_name_cache].val = p0; /* @c_name_cache on <self:MPropDef> */
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MPropDef__c_name_cache_61d(val* self, val* p0) {
abstract_compiler__MPropDef__c_name_cache_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name for (self: MPropDef): String */
val* abstract_compiler__MPropDef__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MClassDef */;
val* var11 /* : MModule */;
val* var12 /* : String */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : MClassDef */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : MProperty */;
val* var29 /* : String */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MPropDef__c_name_cache]))(self) /* c_name_cache on <self:MPropDef>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 7;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mclassdef]))(self) /* mclassdef on <self:MPropDef>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MClassDef__mmodule]))(var10) /* mmodule on <var10:MClassDef>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_mmodule__MModule__name]))(var11) /* name on <var11:MModule>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_string__AbstractString__to_cmangle]))(var12) /* to_cmangle on <var12:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "__";
var17 = 2;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var15) /* add on <var_:Array[Object]>*/;
var19 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mclassdef]))(self) /* mclassdef on <self:MPropDef>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_model__MClassDef__mclass]))(var19) /* mclass on <var19:MClassDef>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_model__MClass__name]))(var20) /* name on <var20:MClass>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_string__AbstractString__to_cmangle]))(var21) /* to_cmangle on <var21:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var22) /* add on <var_:Array[Object]>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "__";
var26 = 2;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var24) /* add on <var_:Array[Object]>*/;
var28 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mproperty]))(self) /* mproperty on <self:MPropDef>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_model__MProperty__name]))(var28) /* name on <var28:MProperty>*/;
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_string__AbstractString__to_cmangle]))(var29) /* to_cmangle on <var29:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var30) /* add on <var_:Array[Object]>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "";
var34 = 0;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var32) /* add on <var_:Array[Object]>*/;
var36 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var36;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MPropDef__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MPropDef>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MPropDef__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MPropDef__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#can_inline for (self: MMethodDef, AbstractCompilerVisitor): Bool */
short int abstract_compiler__MMethodDef__can_inline(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var4 /* : HashMap[MPropDef, APropdef] */;
short int var5 /* : Bool */;
val* var6 /* : HashMap[MPropDef, APropdef] */;
val* var7 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var8 /* : Bool */;
val* var9 /* : MProperty */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1355);
show_backtrace(1);
}
var_v = p0;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var2) /* modelbuilder on <var2:AbstractCompiler>*/;
var_modelbuilder = var3;
var4 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
var5 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var4, self) /* has_key on <var4:HashMap[MPropDef, APropdef]>*/;
if (var5){
var6 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
var7 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var6, self) /* [] on <var6:HashMap[MPropDef, APropdef]>*/;
var_npropdef = var7;
var8 = ((short int (*)(val*))(var_npropdef->class->vft[COLOR_abstract_compiler__APropdef__can_inline]))(var_npropdef) /* can_inline on <var_npropdef:APropdef>*/;
var = var8;
goto RET_LABEL;
} else {
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mproperty]))(self) /* mproperty on <self:MMethodDef>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_model__MProperty__name]))(var9) /* name on <var9:MProperty(MMethod)>*/;
if (varonce) {
var11 = varonce;
} else {
var12 = "init";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
var15 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var11) /* == on <var10:String>*/;
if (var15){
var16 = 1;
var = var16;
goto RET_LABEL;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1366);
show_backtrace(1);
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#can_inline for (self: Object, AbstractCompilerVisitor): Bool */
short int VIRTUAL_abstract_compiler__MMethodDef__can_inline(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__MMethodDef__can_inline(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_inside_to_c for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__MMethodDef__compile_inside_to_c(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var4 /* : HashMap[MPropDef, APropdef] */;
short int var5 /* : Bool */;
val* var6 /* : HashMap[MPropDef, APropdef] */;
val* var7 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var8 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var9 /* : MProperty */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
short int var15 /* : Bool */;
val* var16 /* : HashMap[MClassDef, AClassdef] */;
val* var17 /* : MClassDef */;
val* var18 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var19 /* : nullable ANode */;
val* var_oldnode20 /* var oldnode: nullable ANode */;
val* var21 /* : null */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1370);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var2) /* modelbuilder on <var2:AbstractCompiler>*/;
var_modelbuilder = var3;
var4 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
var5 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var4, self) /* has_key on <var4:HashMap[MPropDef, APropdef]>*/;
if (var5){
var6 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
var7 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var6, self) /* [] on <var6:HashMap[MPropDef, APropdef]>*/;
var_npropdef = var7;
var8 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(var_v) /* current_node on <var_v:AbstractCompilerVisitor>*/;
var_oldnode = var8;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_npropdef) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__MMethodDef__compile_parameter_check]))(self, var_v, var_arguments) /* compile_parameter_check on <self:MMethodDef>*/;
((void (*)(val*, val*, val*, val*))(var_npropdef->class->vft[COLOR_abstract_compiler__APropdef__compile_to_c]))(var_npropdef, var_v, self, var_arguments) /* compile_to_c on <var_npropdef:APropdef>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_oldnode) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
} else {
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mproperty]))(self) /* mproperty on <self:MMethodDef>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_model__MProperty__name]))(var9) /* name on <var9:MProperty(MMethod)>*/;
if (varonce) {
var11 = varonce;
} else {
var12 = "init";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
var15 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var11) /* == on <var10:String>*/;
if (var15){
var16 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var_modelbuilder) /* mclassdef2nclassdef on <var_modelbuilder:ModelBuilder>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mclassdef]))(self) /* mclassdef on <self:MMethodDef>*/;
var18 = ((val* (*)(val*, val*))(var16->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var16, var17) /* [] on <var16:HashMap[MClassDef, AClassdef]>*/;
var_nclassdef = var18;
var19 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(var_v) /* current_node on <var_v:AbstractCompilerVisitor>*/;
var_oldnode20 = var19;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_nclassdef) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__MMethodDef__compile_parameter_check]))(self, var_v, var_arguments) /* compile_parameter_check on <self:MMethodDef>*/;
((void (*)(val*, val*, val*, val*))(var_nclassdef->class->vft[COLOR_abstract_compiler__AClassdef__compile_to_c]))(var_nclassdef, var_v, self, var_arguments) /* compile_to_c on <var_nclassdef:AClassdef>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_oldnode20) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1389);
show_backtrace(1);
}
}
var21 = NULL;
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_inside_to_c for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__MMethodDef__compile_inside_to_c(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__MMethodDef__compile_inside_to_c(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_parameter_check for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]) */
void abstract_compiler__MMethodDef__compile_parameter_check(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : AbstractCompiler */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionBool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
val* var7 /* : Range[Int] */;
long var8 /* : Int */;
val* var9 /* : nullable MSignature */;
long var10 /* : Int */;
val* var11 /* : Discrete */;
val* var12 /* : Discrete */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
long var_i /* var i: Int */;
long var16 /* : Int */;
val* var17 /* : nullable MSignature */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : MProperty */;
val* var23 /* : MPropDef */;
val* var24 /* : nullable MSignature */;
val* var25 /* : Array[MParameter] */;
val* var26 /* : nullable Object */;
val* var27 /* : MType */;
val* var_origmtype /* var origmtype: MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable MSignature */;
val* var31 /* : Array[MParameter] */;
val* var32 /* : nullable Object */;
val* var33 /* : MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : nullable MSignature */;
val* var44 /* : Array[MParameter] */;
val* var45 /* : nullable Object */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
long var52 /* : Int */;
long var53 /* : Int */;
long var55 /* : Int */;
val* var56 /* : nullable Object */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var70 /* : NativeArray[Object] */;
val* var71 /* : Object */;
val* var72 /* : String */;
long var73 /* : Int */;
long var74 /* : Int */;
long var76 /* : Int */;
val* var77 /* : nullable Object */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : String */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1394);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var1) /* modelbuilder on <var1:AbstractCompiler>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var2) /* toolcontext on <var2:ModelBuilder>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_covariance]))(var3) /* opt_no_check_covariance on <var3:ToolContext>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_opts__Option__value]))(var4) /* value on <var4:OptionBool>*/;
var6 = ((struct instance_kernel__Bool*)var5)->value; /* autounbox from nullable Object to Bool */;
if (var6){
goto RET_LABEL;
} else {
}
var7 = NEW_range__Range(&type_range__Rangekernel__Int);
var8 = 0;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model__MMethodDef__msignature]))(self) /* msignature on <self:MMethodDef>*/;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1399);
show_backtrace(1);
} else {
var10 = ((long (*)(val*))(var9->class->vft[COLOR_model__MSignature__arity]))(var9) /* arity on <var9:nullable MSignature>*/;
}
var11 = BOX_kernel__Int(var8); /* autobox from Int to Discrete */
var12 = BOX_kernel__Int(var10); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_range__Range__without_last]))(var7, var11, var12) /* without_last on <var7:Range[Int]>*/;
var13 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var7) /* iterator on <var7:Range[Int]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var16 = ((struct instance_kernel__Int*)var15)->value; /* autounbox from nullable Object to Int */;
var_i = var16;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_model__MMethodDef__msignature]))(self) /* msignature on <self:MMethodDef>*/;
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1401);
show_backtrace(1);
} else {
var18 = ((long (*)(val*))(var17->class->vft[COLOR_model__MSignature__vararg_rank]))(var17) /* vararg_rank on <var17:nullable MSignature>*/;
}
{ /* Inline kernel#Int#== (var18,var_i) */
var21 = var18 == var_i;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
if (var19){
goto CONTINUE_label;
} else {
}
var22 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mproperty]))(self) /* mproperty on <self:MMethodDef>*/;
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_model__MProperty__intro]))(var22) /* intro on <var22:MProperty(MMethod)>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_model__MMethodDef__msignature]))(var23) /* msignature on <var23:MPropDef(MMethodDef)>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1404);
show_backtrace(1);
} else {
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_model__MSignature__mparameters]))(var24) /* mparameters on <var24:nullable MSignature>*/;
}
var26 = ((val* (*)(val*, long))(var25->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var25, var_i) /* [] on <var25:Array[MParameter]>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_model__MParameter__mtype]))(var26) /* mtype on <var26:nullable Object(MParameter)>*/;
var_origmtype = var27;
var28 = ((short int (*)(val*))(var_origmtype->class->vft[COLOR_model__MType__need_anchor]))(var_origmtype) /* need_anchor on <var_origmtype:MType>*/;
var29 = !var28;
if (var29){
goto CONTINUE_label;
} else {
}
var30 = ((val* (*)(val*))(self->class->vft[COLOR_model__MMethodDef__msignature]))(self) /* msignature on <self:MMethodDef>*/;
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1408);
show_backtrace(1);
} else {
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_model__MSignature__mparameters]))(var30) /* mparameters on <var30:nullable MSignature>*/;
}
var32 = ((val* (*)(val*, long))(var31->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var31, var_i) /* [] on <var31:Array[MParameter]>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_model__MParameter__mtype]))(var32) /* mtype on <var32:nullable Object(MParameter)>*/;
var_mtype = var33;
if (varonce) {
var34 = varonce;
} else {
var35 = "/* Covariant cast for argument ";
var36 = 31;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce = var34;
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = " (";
var41 = 2;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = ((val* (*)(val*))(self->class->vft[COLOR_model__MMethodDef__msignature]))(self) /* msignature on <self:MMethodDef>*/;
if (var43 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1412);
show_backtrace(1);
} else {
var44 = ((val* (*)(val*))(var43->class->vft[COLOR_model__MSignature__mparameters]))(var43) /* mparameters on <var43:nullable MSignature>*/;
}
var45 = ((val* (*)(val*, long))(var44->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var44, var_i) /* [] on <var44:Array[MParameter]>*/;
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_model__MParameter__name]))(var45) /* name on <var45:nullable Object(MParameter)>*/;
if (varonce47) {
var48 = varonce47;
} else {
var49 = ") ";
var50 = 2;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = 1;
{ /* Inline kernel#Int#+ (var_i,var52) */
var55 = var_i + var52;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var56 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var53) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__inspect]))(var56) /* inspect on <var56:nullable Object(RuntimeVariable)>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = " isa ";
var61 = 5;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = " */";
var66 = 3;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var68 = array_instance Array[Object] */
var69 = 9;
var70 = NEW_array__NativeArray(var69, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var70)->values[0] = (val*) var34;
var71 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var70)->values[1] = (val*) var71;
((struct instance_array__NativeArray*)var70)->values[2] = (val*) var39;
((struct instance_array__NativeArray*)var70)->values[3] = (val*) var46;
((struct instance_array__NativeArray*)var70)->values[4] = (val*) var48;
((struct instance_array__NativeArray*)var70)->values[5] = (val*) var57;
((struct instance_array__NativeArray*)var70)->values[6] = (val*) var59;
((struct instance_array__NativeArray*)var70)->values[7] = (val*) var_mtype;
((struct instance_array__NativeArray*)var70)->values[8] = (val*) var64;
((void (*)(val*, val*, long))(var68->class->vft[COLOR_array__Array__with_native]))(var68, var70, var69) /* with_native on <var68:Array[Object]>*/;
}
var72 = ((val* (*)(val*))(var68->class->vft[COLOR_string__Object__to_s]))(var68) /* to_s on <var68:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var72) /* add on <var_v:AbstractCompilerVisitor>*/;
var73 = 1;
{ /* Inline kernel#Int#+ (var_i,var73) */
var76 = var_i + var73;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var77 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var74) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce78) {
var79 = varonce78;
} else {
var80 = "covariance";
var81 = 10;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_cast]))(var_v, var77, var_mtype, var79) /* add_cast on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_compiler#MMethodDef#compile_parameter_check for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__MMethodDef__compile_parameter_check(val* self, val* p0, val* p1) {
abstract_compiler__MMethodDef__compile_parameter_check(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#APropdef#compile_to_c for (self: APropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : Location */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (varonce) {
var = varonce;
} else {
var1 = "printf(\"NOT YET IMPLEMENTED ";
var2 = 28;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__class_name]))(self) /* class_name on <self:APropdef>*/;
if (varonce5) {
var6 = varonce5;
} else {
var7 = " ";
var8 = 1;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = " at ";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:APropdef>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Location>*/;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "\\n\");";
var20 = 5;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 7;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var6;
((struct instance_array__NativeArray*)var24)->values[3] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var24)->values[4] = (val*) var11;
((struct instance_array__NativeArray*)var24)->values[5] = (val*) var16;
((struct instance_array__NativeArray*)var24)->values[6] = (val*) var18;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var25) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Not yet implemented";
var29 = 19;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__debug]))(self, var27) /* debug on <self:APropdef>*/;
RET_LABEL:;
}
/* method abstract_compiler#APropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__APropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#APropdef#can_inline for (self: APropdef): Bool */
short int abstract_compiler__APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#APropdef#can_inline for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__APropdef__can_inline(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AConcreteMethPropdef#compile_to_c for (self: AConcreteMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AConcreteMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : Range[Int] */;
long var1 /* : Int */;
val* var2 /* : nullable MSignature */;
long var3 /* : Int */;
val* var4 /* : Discrete */;
val* var5 /* : Discrete */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var_i /* var i: Int */;
long var9 /* : Int */;
val* var10 /* : nullable ASignature */;
val* var11 /* : ANodes[AParam] */;
val* var12 /* : nullable Object */;
val* var13 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var14 /* : RuntimeVariable */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
val* var19 /* : nullable Object */;
val* var20 /* : nullable Array[MMethod] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[MMethod] */;
val* var21 /* : null */;
short int var22 /* : Bool */;
val* var23 /* : Array[RuntimeVariable] */;
long var24 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var25 /* : nullable Object */;
val* var_selfarg /* var selfarg: Array[RuntimeVariable] */;
val* var26 /* : Iterator[nullable Object] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: MMethod */;
val* var29 /* : MPropDef */;
val* var30 /* : nullable MSignature */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : nullable RuntimeVariable */;
val* var37 /* : nullable RuntimeVariable */;
val* var39 /* : nullable AExpr */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = NEW_range__Range(&type_range__Rangekernel__Int);
var1 = 0;
var2 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1433);
show_backtrace(1);
} else {
var3 = ((long (*)(val*))(var2->class->vft[COLOR_model__MSignature__arity]))(var2) /* arity on <var2:nullable MSignature>*/;
}
var4 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var5 = BOX_kernel__Int(var3); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var->class->vft[COLOR_range__Range__without_last]))(var, var4, var5) /* without_last on <var:Range[Int]>*/;
var6 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:Range[Int]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var9 = ((struct instance_kernel__Int*)var8)->value; /* autounbox from nullable Object to Int */;
var_i = var9;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_signature]))(self) /* n_signature on <self:AConcreteMethPropdef>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1434);
show_backtrace(1);
} else {
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_parser_nodes__ASignature__n_params]))(var10) /* n_params on <var10:nullable ASignature>*/;
}
var12 = ((val* (*)(val*, long))(var11->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var11, var_i) /* [] on <var11:ANodes[AParam]>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_scope__AParam__variable]))(var12) /* variable on <var12:nullable Object(AParam)>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1434);
show_backtrace(1);
}
var_variable = var13;
var14 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
var15 = 1;
{ /* Inline kernel#Int#+ (var_i,var15) */
var18 = var_i + var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var19 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var16) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var14, var19) /* assign on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_auto_super_init__AConcreteMethPropdef__auto_super_inits]))(self) /* auto_super_inits on <self:AConcreteMethPropdef>*/;
var_auto_super_inits = var20;
var21 = NULL;
if (var_auto_super_inits == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
var23 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var24 = 1;
((void (*)(val*, long))(var23->class->vft[COLOR_array__Array__with_capacity]))(var23, var24) /* with_capacity on <var23:Array[RuntimeVariable]>*/;
var_ = var23;
var25 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var25) /* push on <var_:Array[RuntimeVariable]>*/;
var_selfarg = var_;
var26 = ((val* (*)(val*))(var_auto_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_auto_super_inits) /* iterator on <var_auto_super_inits:nullable Array[MMethod](Array[MMethod])>*/;
for(;;) {
var27 = ((short int (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var26) /* is_ok on <var26:Iterator[nullable Object]>*/;
if(!var27) break;
var28 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__item]))(var26) /* item on <var26:Iterator[nullable Object]>*/;
var_auto_super_init = var28;
var29 = ((val* (*)(val*))(var_auto_super_init->class->vft[COLOR_model__MProperty__intro]))(var_auto_super_init) /* intro on <var_auto_super_init:MMethod>*/;
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_model__MMethodDef__msignature]))(var29) /* msignature on <var29:MPropDef(MMethodDef)>*/;
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1442);
show_backtrace(1);
} else {
var31 = ((long (*)(val*))(var30->class->vft[COLOR_model__MSignature__arity]))(var30) /* arity on <var30:nullable MSignature>*/;
}
var32 = 0;
{ /* Inline kernel#Int#== (var31,var32) */
var35 = var31 == var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
if (var33){
var36 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_auto_super_init, var_selfarg) /* send on <var_v:AbstractCompilerVisitor>*/;
var36;
} else {
var37 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_auto_super_init, var_arguments) /* send on <var_v:AbstractCompilerVisitor>*/;
var37;
}
CONTINUE_label38: (void)0;
((void (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__next]))(var26) /* next on <var26:Iterator[nullable Object]>*/;
}
BREAK_label38: (void)0;
} else {
}
var39 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(self) /* n_block on <self:AConcreteMethPropdef>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var39) /* stmt on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AConcreteMethPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AConcreteMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AConcreteMethPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AConcreteMethPropdef#can_inline for (self: AConcreteMethPropdef): Bool */
short int abstract_compiler__AConcreteMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable Array[MMethod] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : MProperty */;
val* var13 /* : String */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
short int var18 /* : Bool */;
short int var_ /* var : Bool */;
val* var19 /* : nullable MPropDef */;
val* var20 /* : MProperty */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
val* var29 /* : nullable MPropDef */;
val* var30 /* : MClassDef */;
val* var31 /* : MClass */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
int cltype;
int idtype;
short int var_42 /* var : Bool */;
val* var43 /* : ANodes[AExpr] */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_auto_super_init__AConcreteMethPropdef__auto_super_inits]))(self) /* auto_super_inits on <self:AConcreteMethPropdef>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = 0;
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(self) /* n_block on <self:AConcreteMethPropdef>*/;
var_nblock = var5;
var6 = NULL;
if (var_nblock == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (var7){
var8 = 1;
var = var8;
goto RET_LABEL;
} else {
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AConcreteMethPropdef>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1457);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MPropDef__mproperty]))(var11) /* mproperty on <var11:nullable MPropDef(nullable MMethodDef)>*/;
}
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MProperty__name]))(var12) /* name on <var12:MProperty(MMethod)>*/;
if (varonce) {
var14 = varonce;
} else {
var15 = "==";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
var18 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var14) /* == on <var13:String>*/;
var_ = var18;
if (var18){
var10 = var_;
} else {
var19 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AConcreteMethPropdef>*/;
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1457);
show_backtrace(1);
} else {
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_model__MPropDef__mproperty]))(var19) /* mproperty on <var19:nullable MPropDef(nullable MMethodDef)>*/;
}
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_model__MProperty__name]))(var20) /* name on <var20:MProperty(MMethod)>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "!=";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var23) /* == on <var21:String>*/;
var10 = var27;
}
var_28 = var10;
if (var10){
var29 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AConcreteMethPropdef>*/;
if (var29 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1457);
show_backtrace(1);
} else {
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_model__MPropDef__mclassdef]))(var29) /* mclassdef on <var29:nullable MPropDef(nullable MMethodDef)>*/;
}
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_model__MClassDef__mclass]))(var30) /* mclass on <var30:MClassDef>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_model__MClass__name]))(var31) /* name on <var31:MClass>*/;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "Object";
var36 = 6;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = ((short int (*)(val*, val*))(var32->class->vft[COLOR_kernel__Object___61d_61d]))(var32, var34) /* == on <var32:String>*/;
var9 = var38;
} else {
var9 = var_28;
}
if (var9){
var39 = 1;
var = var39;
goto RET_LABEL;
} else {
}
/* <var_nblock:nullable AExpr(AExpr)> isa ABlockExpr */
cltype = type_parser_nodes__ABlockExpr.color;
idtype = type_parser_nodes__ABlockExpr.id;
if(cltype >= var_nblock->type->table_size) {
var41 = 0;
} else {
var41 = var_nblock->type->type_table[cltype] == idtype;
}
var_42 = var41;
if (var41){
var43 = ((val* (*)(val*))(var_nblock->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var_nblock) /* n_expr on <var_nblock:nullable AExpr(ABlockExpr)>*/;
var44 = ((long (*)(val*))(var43->class->vft[COLOR_abstract_collection__Collection__length]))(var43) /* length on <var43:ANodes[AExpr]>*/;
var45 = 0;
{ /* Inline kernel#Int#== (var44,var45) */
var48 = var44 == var45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var40 = var46;
} else {
var40 = var_42;
}
if (var40){
var49 = 1;
var = var49;
goto RET_LABEL;
} else {
}
var50 = 0;
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AConcreteMethPropdef#can_inline for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__AConcreteMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__AConcreteMethPropdef__can_inline(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AInternMethPropdef#compile_to_c for (self: AInternMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AInternMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : MProperty */;
val* var1 /* : String */;
val* var_pname /* var pname: String */;
val* var2 /* : MClassDef */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var_cname /* var cname: String */;
val* var5 /* : nullable MSignature */;
val* var6 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var10 /* : MType */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : nullable Object */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
short int var62 /* : Bool */;
long var63 /* : Int */;
val* var64 /* : nullable Object */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
long var70 /* : Int */;
val* var71 /* : nullable Object */;
val* var72 /* : Array[Object] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Object] */;
val* var75 /* : String */;
val* var76 /* : RuntimeVariable */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
short int var82 /* : Bool */;
long var83 /* : Int */;
val* var84 /* : nullable Object */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
long var90 /* : Int */;
val* var91 /* : nullable Object */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : String */;
val* var96 /* : RuntimeVariable */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
short int var102 /* : Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : String */;
long var108 /* : Int */;
val* var109 /* : nullable Object */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
val* var114 /* : RuntimeVariable */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
short int var120 /* : Bool */;
long var121 /* : Int */;
val* var122 /* : nullable Object */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : String */;
val* var128 /* : Array[Object] */;
long var129 /* : Int */;
val* var130 /* : NativeArray[Object] */;
val* var131 /* : String */;
val* var132 /* : RuntimeVariable */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
short int var138 /* : Bool */;
long var139 /* : Int */;
val* var140 /* : nullable Object */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
val* var146 /* : Array[Object] */;
long var147 /* : Int */;
val* var148 /* : NativeArray[Object] */;
val* var149 /* : String */;
val* var150 /* : RuntimeVariable */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
short int var156 /* : Bool */;
long var157 /* : Int */;
val* var158 /* : nullable Object */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
long var164 /* : Int */;
val* var165 /* : nullable Object */;
val* var166 /* : Array[Object] */;
long var167 /* : Int */;
val* var168 /* : NativeArray[Object] */;
val* var169 /* : String */;
val* var170 /* : RuntimeVariable */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : String */;
short int var176 /* : Bool */;
long var177 /* : Int */;
val* var178 /* : nullable Object */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : String */;
long var184 /* : Int */;
val* var185 /* : nullable Object */;
val* var186 /* : Array[Object] */;
long var187 /* : Int */;
val* var188 /* : NativeArray[Object] */;
val* var189 /* : String */;
val* var190 /* : RuntimeVariable */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : String */;
short int var196 /* : Bool */;
long var197 /* : Int */;
val* var198 /* : nullable Object */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : String */;
long var204 /* : Int */;
val* var205 /* : nullable Object */;
val* var206 /* : Array[Object] */;
long var207 /* : Int */;
val* var208 /* : NativeArray[Object] */;
val* var209 /* : String */;
val* var210 /* : RuntimeVariable */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : String */;
short int var216 /* : Bool */;
long var217 /* : Int */;
val* var218 /* : nullable Object */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
long var222 /* : Int */;
val* var223 /* : String */;
long var224 /* : Int */;
val* var225 /* : nullable Object */;
val* var226 /* : Array[Object] */;
long var227 /* : Int */;
val* var228 /* : NativeArray[Object] */;
val* var229 /* : String */;
val* var230 /* : RuntimeVariable */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : String */;
short int var236 /* : Bool */;
long var237 /* : Int */;
val* var238 /* : nullable Object */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : String */;
long var244 /* : Int */;
val* var245 /* : nullable Object */;
val* var246 /* : Array[Object] */;
long var247 /* : Int */;
val* var248 /* : NativeArray[Object] */;
val* var249 /* : String */;
val* var250 /* : RuntimeVariable */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
long var254 /* : Int */;
val* var255 /* : String */;
short int var256 /* : Bool */;
long var257 /* : Int */;
val* var258 /* : nullable Object */;
long var259 /* : Int */;
val* var260 /* : nullable Object */;
val* var261 /* : RuntimeVariable */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
long var265 /* : Int */;
val* var266 /* : String */;
short int var267 /* : Bool */;
long var268 /* : Int */;
val* var269 /* : nullable Object */;
long var270 /* : Int */;
val* var271 /* : nullable Object */;
val* var272 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : String */;
val* var278 /* : Array[Object] */;
long var279 /* : Int */;
val* var280 /* : NativeArray[Object] */;
val* var281 /* : String */;
val* var282 /* : RuntimeVariable */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : NativeString */;
long var286 /* : Int */;
val* var287 /* : String */;
short int var288 /* : Bool */;
long var289 /* : Int */;
val* var290 /* : nullable Object */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : String */;
long var296 /* : Int */;
val* var297 /* : nullable Object */;
val* var298 /* : Array[Object] */;
long var299 /* : Int */;
val* var300 /* : NativeArray[Object] */;
val* var301 /* : String */;
val* var302 /* : RuntimeVariable */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
long var306 /* : Int */;
val* var307 /* : String */;
short int var308 /* : Bool */;
long var309 /* : Int */;
val* var310 /* : nullable Object */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : String */;
long var316 /* : Int */;
val* var317 /* : nullable Object */;
val* var318 /* : Array[Object] */;
long var319 /* : Int */;
val* var320 /* : NativeArray[Object] */;
val* var321 /* : String */;
val* var322 /* : RuntimeVariable */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : NativeString */;
long var326 /* : Int */;
val* var327 /* : String */;
short int var328 /* : Bool */;
long var329 /* : Int */;
val* var330 /* : nullable Object */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : String */;
long var336 /* : Int */;
val* var337 /* : nullable Object */;
val* var338 /* : Array[Object] */;
long var339 /* : Int */;
val* var340 /* : NativeArray[Object] */;
val* var341 /* : String */;
val* var342 /* : RuntimeVariable */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
long var346 /* : Int */;
val* var347 /* : String */;
short int var348 /* : Bool */;
long var349 /* : Int */;
val* var350 /* : nullable Object */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
long var354 /* : Int */;
val* var355 /* : String */;
long var356 /* : Int */;
val* var357 /* : nullable Object */;
val* var358 /* : Array[Object] */;
long var359 /* : Int */;
val* var360 /* : NativeArray[Object] */;
val* var361 /* : String */;
val* var362 /* : RuntimeVariable */;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : NativeString */;
long var366 /* : Int */;
val* var367 /* : String */;
short int var368 /* : Bool */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : NativeString */;
long var372 /* : Int */;
val* var373 /* : String */;
long var374 /* : Int */;
val* var375 /* : nullable Object */;
val* var376 /* : Array[Object] */;
long var377 /* : Int */;
val* var378 /* : NativeArray[Object] */;
val* var379 /* : String */;
val* var380 /* : RuntimeVariable */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
long var384 /* : Int */;
val* var385 /* : String */;
short int var386 /* : Bool */;
long var387 /* : Int */;
val* var388 /* : nullable Object */;
val* var389 /* : Array[Object] */;
long var390 /* : Int */;
val* var391 /* : NativeArray[Object] */;
val* var392 /* : String */;
val* var393 /* : RuntimeVariable */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
long var397 /* : Int */;
val* var398 /* : String */;
short int var399 /* : Bool */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
long var403 /* : Int */;
val* var404 /* : String */;
short int var405 /* : Bool */;
static val* varonce406;
val* var407 /* : String */;
char* var408 /* : NativeString */;
long var409 /* : Int */;
val* var410 /* : String */;
val* var411 /* : nullable Object */;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : NativeString */;
long var415 /* : Int */;
val* var416 /* : String */;
val* var417 /* : Array[Object] */;
long var418 /* : Int */;
val* var419 /* : NativeArray[Object] */;
val* var420 /* : String */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
long var424 /* : Int */;
val* var425 /* : String */;
short int var426 /* : Bool */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
long var430 /* : Int */;
val* var431 /* : String */;
val* var432 /* : nullable Object */;
val* var433 /* : Array[Object] */;
long var434 /* : Int */;
val* var435 /* : NativeArray[Object] */;
val* var436 /* : String */;
val* var437 /* : RuntimeVariable */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : NativeString */;
long var441 /* : Int */;
val* var442 /* : String */;
short int var443 /* : Bool */;
long var444 /* : Int */;
val* var445 /* : nullable Object */;
static val* varonce446;
val* var447 /* : String */;
char* var448 /* : NativeString */;
long var449 /* : Int */;
val* var450 /* : String */;
long var451 /* : Int */;
val* var452 /* : nullable Object */;
val* var453 /* : Array[Object] */;
long var454 /* : Int */;
val* var455 /* : NativeArray[Object] */;
val* var456 /* : String */;
val* var457 /* : RuntimeVariable */;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : NativeString */;
long var461 /* : Int */;
val* var462 /* : String */;
short int var463 /* : Bool */;
long var464 /* : Int */;
val* var465 /* : nullable Object */;
static val* varonce466;
val* var467 /* : String */;
char* var468 /* : NativeString */;
long var469 /* : Int */;
val* var470 /* : String */;
long var471 /* : Int */;
val* var472 /* : nullable Object */;
val* var473 /* : Array[Object] */;
long var474 /* : Int */;
val* var475 /* : NativeArray[Object] */;
val* var476 /* : String */;
val* var477 /* : RuntimeVariable */;
static val* varonce478;
val* var479 /* : String */;
char* var480 /* : NativeString */;
long var481 /* : Int */;
val* var482 /* : String */;
short int var483 /* : Bool */;
long var484 /* : Int */;
val* var485 /* : nullable Object */;
long var486 /* : Int */;
val* var487 /* : nullable Object */;
val* var488 /* : RuntimeVariable */;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : NativeString */;
long var492 /* : Int */;
val* var493 /* : String */;
short int var494 /* : Bool */;
long var495 /* : Int */;
val* var496 /* : nullable Object */;
long var497 /* : Int */;
val* var498 /* : nullable Object */;
val* var499 /* : RuntimeVariable */;
val* var_res500 /* var res: RuntimeVariable */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : NativeString */;
long var504 /* : Int */;
val* var505 /* : String */;
val* var506 /* : Array[Object] */;
long var507 /* : Int */;
val* var508 /* : NativeArray[Object] */;
val* var509 /* : String */;
val* var510 /* : RuntimeVariable */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : NativeString */;
long var514 /* : Int */;
val* var515 /* : String */;
short int var516 /* : Bool */;
long var517 /* : Int */;
val* var518 /* : nullable Object */;
static val* varonce519;
val* var520 /* : String */;
char* var521 /* : NativeString */;
long var522 /* : Int */;
val* var523 /* : String */;
val* var524 /* : Array[Object] */;
long var525 /* : Int */;
val* var526 /* : NativeArray[Object] */;
val* var527 /* : String */;
val* var528 /* : RuntimeVariable */;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : NativeString */;
long var532 /* : Int */;
val* var533 /* : String */;
short int var534 /* : Bool */;
long var535 /* : Int */;
val* var536 /* : nullable Object */;
static val* varonce537;
val* var538 /* : String */;
char* var539 /* : NativeString */;
long var540 /* : Int */;
val* var541 /* : String */;
val* var542 /* : Array[Object] */;
long var543 /* : Int */;
val* var544 /* : NativeArray[Object] */;
val* var545 /* : String */;
val* var546 /* : RuntimeVariable */;
static val* varonce547;
val* var548 /* : String */;
char* var549 /* : NativeString */;
long var550 /* : Int */;
val* var551 /* : String */;
short int var552 /* : Bool */;
long var553 /* : Int */;
val* var554 /* : nullable Object */;
static val* varonce555;
val* var556 /* : String */;
char* var557 /* : NativeString */;
long var558 /* : Int */;
val* var559 /* : String */;
long var560 /* : Int */;
val* var561 /* : nullable Object */;
val* var562 /* : Array[Object] */;
long var563 /* : Int */;
val* var564 /* : NativeArray[Object] */;
val* var565 /* : String */;
val* var566 /* : RuntimeVariable */;
static val* varonce567;
val* var568 /* : String */;
char* var569 /* : NativeString */;
long var570 /* : Int */;
val* var571 /* : String */;
short int var572 /* : Bool */;
long var573 /* : Int */;
val* var574 /* : nullable Object */;
static val* varonce575;
val* var576 /* : String */;
char* var577 /* : NativeString */;
long var578 /* : Int */;
val* var579 /* : String */;
long var580 /* : Int */;
val* var581 /* : nullable Object */;
val* var582 /* : Array[Object] */;
long var583 /* : Int */;
val* var584 /* : NativeArray[Object] */;
val* var585 /* : String */;
val* var586 /* : RuntimeVariable */;
static val* varonce587;
val* var588 /* : String */;
char* var589 /* : NativeString */;
long var590 /* : Int */;
val* var591 /* : String */;
short int var592 /* : Bool */;
long var593 /* : Int */;
val* var594 /* : nullable Object */;
static val* varonce595;
val* var596 /* : String */;
char* var597 /* : NativeString */;
long var598 /* : Int */;
val* var599 /* : String */;
long var600 /* : Int */;
val* var601 /* : nullable Object */;
val* var602 /* : Array[Object] */;
long var603 /* : Int */;
val* var604 /* : NativeArray[Object] */;
val* var605 /* : String */;
val* var606 /* : RuntimeVariable */;
static val* varonce607;
val* var608 /* : String */;
char* var609 /* : NativeString */;
long var610 /* : Int */;
val* var611 /* : String */;
short int var612 /* : Bool */;
long var613 /* : Int */;
val* var614 /* : nullable Object */;
static val* varonce615;
val* var616 /* : String */;
char* var617 /* : NativeString */;
long var618 /* : Int */;
val* var619 /* : String */;
long var620 /* : Int */;
val* var621 /* : nullable Object */;
val* var622 /* : Array[Object] */;
long var623 /* : Int */;
val* var624 /* : NativeArray[Object] */;
val* var625 /* : String */;
val* var626 /* : RuntimeVariable */;
static val* varonce627;
val* var628 /* : String */;
char* var629 /* : NativeString */;
long var630 /* : Int */;
val* var631 /* : String */;
short int var632 /* : Bool */;
long var633 /* : Int */;
val* var634 /* : nullable Object */;
static val* varonce635;
val* var636 /* : String */;
char* var637 /* : NativeString */;
long var638 /* : Int */;
val* var639 /* : String */;
val* var640 /* : Array[Object] */;
long var641 /* : Int */;
val* var642 /* : NativeArray[Object] */;
val* var643 /* : String */;
val* var644 /* : RuntimeVariable */;
static val* varonce645;
val* var646 /* : String */;
char* var647 /* : NativeString */;
long var648 /* : Int */;
val* var649 /* : String */;
short int var650 /* : Bool */;
static val* varonce651;
val* var652 /* : String */;
char* var653 /* : NativeString */;
long var654 /* : Int */;
val* var655 /* : String */;
long var656 /* : Int */;
val* var657 /* : nullable Object */;
val* var658 /* : Array[Object] */;
long var659 /* : Int */;
val* var660 /* : NativeArray[Object] */;
val* var661 /* : String */;
val* var662 /* : RuntimeVariable */;
static val* varonce663;
val* var664 /* : String */;
char* var665 /* : NativeString */;
long var666 /* : Int */;
val* var667 /* : String */;
short int var668 /* : Bool */;
static val* varonce669;
val* var670 /* : String */;
char* var671 /* : NativeString */;
long var672 /* : Int */;
val* var673 /* : String */;
short int var674 /* : Bool */;
static val* varonce675;
val* var676 /* : String */;
char* var677 /* : NativeString */;
long var678 /* : Int */;
val* var679 /* : String */;
val* var680 /* : nullable Object */;
static val* varonce681;
val* var682 /* : String */;
char* var683 /* : NativeString */;
long var684 /* : Int */;
val* var685 /* : String */;
val* var686 /* : Array[Object] */;
long var687 /* : Int */;
val* var688 /* : NativeArray[Object] */;
val* var689 /* : String */;
static val* varonce690;
val* var691 /* : String */;
char* var692 /* : NativeString */;
long var693 /* : Int */;
val* var694 /* : String */;
short int var695 /* : Bool */;
static val* varonce696;
val* var697 /* : String */;
char* var698 /* : NativeString */;
long var699 /* : Int */;
val* var700 /* : String */;
val* var701 /* : nullable Object */;
val* var702 /* : Array[Object] */;
long var703 /* : Int */;
val* var704 /* : NativeArray[Object] */;
val* var705 /* : String */;
val* var706 /* : RuntimeVariable */;
static val* varonce707;
val* var708 /* : String */;
char* var709 /* : NativeString */;
long var710 /* : Int */;
val* var711 /* : String */;
short int var712 /* : Bool */;
long var713 /* : Int */;
val* var714 /* : nullable Object */;
long var715 /* : Int */;
val* var716 /* : nullable Object */;
val* var717 /* : RuntimeVariable */;
static val* varonce718;
val* var719 /* : String */;
char* var720 /* : NativeString */;
long var721 /* : Int */;
val* var722 /* : String */;
short int var723 /* : Bool */;
long var724 /* : Int */;
val* var725 /* : nullable Object */;
long var726 /* : Int */;
val* var727 /* : nullable Object */;
val* var728 /* : RuntimeVariable */;
val* var_res729 /* var res: RuntimeVariable */;
static val* varonce730;
val* var731 /* : String */;
char* var732 /* : NativeString */;
long var733 /* : Int */;
val* var734 /* : String */;
val* var735 /* : Array[Object] */;
long var736 /* : Int */;
val* var737 /* : NativeArray[Object] */;
val* var738 /* : String */;
val* var739 /* : RuntimeVariable */;
static val* varonce740;
val* var741 /* : String */;
char* var742 /* : NativeString */;
long var743 /* : Int */;
val* var744 /* : String */;
short int var745 /* : Bool */;
static val* varonce746;
val* var747 /* : String */;
char* var748 /* : NativeString */;
long var749 /* : Int */;
val* var750 /* : String */;
short int var751 /* : Bool */;
static val* varonce752;
val* var753 /* : String */;
char* var754 /* : NativeString */;
long var755 /* : Int */;
val* var756 /* : String */;
val* var757 /* : nullable Object */;
static val* varonce758;
val* var759 /* : String */;
char* var760 /* : NativeString */;
long var761 /* : Int */;
val* var762 /* : String */;
val* var763 /* : Array[Object] */;
long var764 /* : Int */;
val* var765 /* : NativeArray[Object] */;
val* var766 /* : String */;
static val* varonce767;
val* var768 /* : String */;
char* var769 /* : NativeString */;
long var770 /* : Int */;
val* var771 /* : String */;
short int var772 /* : Bool */;
static val* varonce773;
val* var774 /* : String */;
char* var775 /* : NativeString */;
long var776 /* : Int */;
val* var777 /* : String */;
val* var778 /* : nullable Object */;
val* var779 /* : Array[Object] */;
long var780 /* : Int */;
val* var781 /* : NativeArray[Object] */;
val* var782 /* : String */;
val* var783 /* : RuntimeVariable */;
static val* varonce784;
val* var785 /* : String */;
char* var786 /* : NativeString */;
long var787 /* : Int */;
val* var788 /* : String */;
short int var789 /* : Bool */;
long var790 /* : Int */;
val* var791 /* : nullable Object */;
static val* varonce792;
val* var793 /* : String */;
char* var794 /* : NativeString */;
long var795 /* : Int */;
val* var796 /* : String */;
long var797 /* : Int */;
val* var798 /* : nullable Object */;
val* var799 /* : Array[Object] */;
long var800 /* : Int */;
val* var801 /* : NativeArray[Object] */;
val* var802 /* : String */;
val* var803 /* : RuntimeVariable */;
static val* varonce804;
val* var805 /* : String */;
char* var806 /* : NativeString */;
long var807 /* : Int */;
val* var808 /* : String */;
short int var809 /* : Bool */;
long var810 /* : Int */;
val* var811 /* : nullable Object */;
static val* varonce812;
val* var813 /* : String */;
char* var814 /* : NativeString */;
long var815 /* : Int */;
val* var816 /* : String */;
long var817 /* : Int */;
val* var818 /* : nullable Object */;
val* var819 /* : Array[Object] */;
long var820 /* : Int */;
val* var821 /* : NativeArray[Object] */;
val* var822 /* : String */;
val* var823 /* : RuntimeVariable */;
static val* varonce824;
val* var825 /* : String */;
char* var826 /* : NativeString */;
long var827 /* : Int */;
val* var828 /* : String */;
short int var829 /* : Bool */;
static val* varonce830;
val* var831 /* : String */;
char* var832 /* : NativeString */;
long var833 /* : Int */;
val* var834 /* : String */;
long var835 /* : Int */;
val* var836 /* : nullable Object */;
val* var837 /* : Array[Object] */;
long var838 /* : Int */;
val* var839 /* : NativeArray[Object] */;
val* var840 /* : String */;
val* var841 /* : RuntimeVariable */;
static val* varonce842;
val* var843 /* : String */;
char* var844 /* : NativeString */;
long var845 /* : Int */;
val* var846 /* : String */;
short int var847 /* : Bool */;
long var848 /* : Int */;
val* var849 /* : nullable Object */;
static val* varonce850;
val* var851 /* : String */;
char* var852 /* : NativeString */;
long var853 /* : Int */;
val* var854 /* : String */;
val* var855 /* : Array[Object] */;
long var856 /* : Int */;
val* var857 /* : NativeArray[Object] */;
val* var858 /* : String */;
val* var859 /* : RuntimeVariable */;
static val* varonce860;
val* var861 /* : String */;
char* var862 /* : NativeString */;
long var863 /* : Int */;
val* var864 /* : String */;
short int var865 /* : Bool */;
long var866 /* : Int */;
val* var867 /* : nullable Object */;
static val* varonce868;
val* var869 /* : String */;
char* var870 /* : NativeString */;
long var871 /* : Int */;
val* var872 /* : String */;
val* var873 /* : Array[Object] */;
long var874 /* : Int */;
val* var875 /* : NativeArray[Object] */;
val* var876 /* : String */;
val* var877 /* : RuntimeVariable */;
static val* varonce878;
val* var879 /* : String */;
char* var880 /* : NativeString */;
long var881 /* : Int */;
val* var882 /* : String */;
short int var883 /* : Bool */;
long var884 /* : Int */;
val* var885 /* : nullable Object */;
static val* varonce886;
val* var887 /* : String */;
char* var888 /* : NativeString */;
long var889 /* : Int */;
val* var890 /* : String */;
long var891 /* : Int */;
val* var892 /* : nullable Object */;
val* var893 /* : Array[Object] */;
long var894 /* : Int */;
val* var895 /* : NativeArray[Object] */;
val* var896 /* : String */;
val* var897 /* : RuntimeVariable */;
static val* varonce898;
val* var899 /* : String */;
char* var900 /* : NativeString */;
long var901 /* : Int */;
val* var902 /* : String */;
short int var903 /* : Bool */;
long var904 /* : Int */;
val* var905 /* : nullable Object */;
static val* varonce906;
val* var907 /* : String */;
char* var908 /* : NativeString */;
long var909 /* : Int */;
val* var910 /* : String */;
long var911 /* : Int */;
val* var912 /* : nullable Object */;
val* var913 /* : Array[Object] */;
long var914 /* : Int */;
val* var915 /* : NativeArray[Object] */;
val* var916 /* : String */;
val* var917 /* : RuntimeVariable */;
static val* varonce918;
val* var919 /* : String */;
char* var920 /* : NativeString */;
long var921 /* : Int */;
val* var922 /* : String */;
short int var923 /* : Bool */;
long var924 /* : Int */;
val* var925 /* : nullable Object */;
long var926 /* : Int */;
val* var927 /* : nullable Object */;
val* var928 /* : RuntimeVariable */;
static val* varonce929;
val* var930 /* : String */;
char* var931 /* : NativeString */;
long var932 /* : Int */;
val* var933 /* : String */;
short int var934 /* : Bool */;
long var935 /* : Int */;
val* var936 /* : nullable Object */;
long var937 /* : Int */;
val* var938 /* : nullable Object */;
val* var939 /* : RuntimeVariable */;
val* var_res940 /* var res: RuntimeVariable */;
static val* varonce941;
val* var942 /* : String */;
char* var943 /* : NativeString */;
long var944 /* : Int */;
val* var945 /* : String */;
val* var946 /* : Array[Object] */;
long var947 /* : Int */;
val* var948 /* : NativeArray[Object] */;
val* var949 /* : String */;
val* var950 /* : RuntimeVariable */;
static val* varonce951;
val* var952 /* : String */;
char* var953 /* : NativeString */;
long var954 /* : Int */;
val* var955 /* : String */;
short int var956 /* : Bool */;
long var957 /* : Int */;
val* var958 /* : nullable Object */;
static val* varonce959;
val* var960 /* : String */;
char* var961 /* : NativeString */;
long var962 /* : Int */;
val* var963 /* : String */;
long var964 /* : Int */;
val* var965 /* : nullable Object */;
val* var966 /* : Array[Object] */;
long var967 /* : Int */;
val* var968 /* : NativeArray[Object] */;
val* var969 /* : String */;
val* var970 /* : RuntimeVariable */;
static val* varonce971;
val* var972 /* : String */;
char* var973 /* : NativeString */;
long var974 /* : Int */;
val* var975 /* : String */;
short int var976 /* : Bool */;
long var977 /* : Int */;
val* var978 /* : nullable Object */;
static val* varonce979;
val* var980 /* : String */;
char* var981 /* : NativeString */;
long var982 /* : Int */;
val* var983 /* : String */;
long var984 /* : Int */;
val* var985 /* : nullable Object */;
val* var986 /* : Array[Object] */;
long var987 /* : Int */;
val* var988 /* : NativeArray[Object] */;
val* var989 /* : String */;
val* var990 /* : RuntimeVariable */;
static val* varonce991;
val* var992 /* : String */;
char* var993 /* : NativeString */;
long var994 /* : Int */;
val* var995 /* : String */;
short int var996 /* : Bool */;
long var997 /* : Int */;
val* var998 /* : nullable Object */;
static val* varonce999;
val* var1000 /* : String */;
char* var1001 /* : NativeString */;
long var1002 /* : Int */;
val* var1003 /* : String */;
long var1004 /* : Int */;
val* var1005 /* : nullable Object */;
val* var1006 /* : Array[Object] */;
long var1007 /* : Int */;
val* var1008 /* : NativeArray[Object] */;
val* var1009 /* : String */;
val* var1010 /* : RuntimeVariable */;
static val* varonce1011;
val* var1012 /* : String */;
char* var1013 /* : NativeString */;
long var1014 /* : Int */;
val* var1015 /* : String */;
short int var1016 /* : Bool */;
long var1017 /* : Int */;
val* var1018 /* : nullable Object */;
static val* varonce1019;
val* var1020 /* : String */;
char* var1021 /* : NativeString */;
long var1022 /* : Int */;
val* var1023 /* : String */;
long var1024 /* : Int */;
val* var1025 /* : nullable Object */;
val* var1026 /* : Array[Object] */;
long var1027 /* : Int */;
val* var1028 /* : NativeArray[Object] */;
val* var1029 /* : String */;
val* var1030 /* : RuntimeVariable */;
static val* varonce1031;
val* var1032 /* : String */;
char* var1033 /* : NativeString */;
long var1034 /* : Int */;
val* var1035 /* : String */;
short int var1036 /* : Bool */;
static val* varonce1037;
val* var1038 /* : String */;
char* var1039 /* : NativeString */;
long var1040 /* : Int */;
val* var1041 /* : String */;
long var1042 /* : Int */;
val* var1043 /* : nullable Object */;
val* var1044 /* : Array[Object] */;
long var1045 /* : Int */;
val* var1046 /* : NativeArray[Object] */;
val* var1047 /* : String */;
val* var1048 /* : RuntimeVariable */;
static val* varonce1049;
val* var1050 /* : String */;
char* var1051 /* : NativeString */;
long var1052 /* : Int */;
val* var1053 /* : String */;
short int var1054 /* : Bool */;
static val* varonce1055;
val* var1056 /* : String */;
char* var1057 /* : NativeString */;
long var1058 /* : Int */;
val* var1059 /* : String */;
short int var1060 /* : Bool */;
long var1061 /* : Int */;
val* var1062 /* : nullable Object */;
static val* varonce1063;
val* var1064 /* : String */;
char* var1065 /* : NativeString */;
long var1066 /* : Int */;
val* var1067 /* : String */;
long var1068 /* : Int */;
val* var1069 /* : nullable Object */;
static val* varonce1070;
val* var1071 /* : String */;
char* var1072 /* : NativeString */;
long var1073 /* : Int */;
val* var1074 /* : String */;
val* var1075 /* : Array[Object] */;
long var1076 /* : Int */;
val* var1077 /* : NativeArray[Object] */;
val* var1078 /* : String */;
val* var1079 /* : RuntimeVariable */;
static val* varonce1080;
val* var1081 /* : String */;
char* var1082 /* : NativeString */;
long var1083 /* : Int */;
val* var1084 /* : String */;
short int var1085 /* : Bool */;
long var1086 /* : Int */;
val* var1087 /* : nullable Object */;
static val* varonce1088;
val* var1089 /* : String */;
char* var1090 /* : NativeString */;
long var1091 /* : Int */;
val* var1092 /* : String */;
long var1093 /* : Int */;
val* var1094 /* : nullable Object */;
static val* varonce1095;
val* var1096 /* : String */;
char* var1097 /* : NativeString */;
long var1098 /* : Int */;
val* var1099 /* : String */;
long var1100 /* : Int */;
val* var1101 /* : nullable Object */;
static val* varonce1102;
val* var1103 /* : String */;
char* var1104 /* : NativeString */;
long var1105 /* : Int */;
val* var1106 /* : String */;
val* var1107 /* : Array[Object] */;
long var1108 /* : Int */;
val* var1109 /* : NativeArray[Object] */;
val* var1110 /* : String */;
static val* varonce1111;
val* var1112 /* : String */;
char* var1113 /* : NativeString */;
long var1114 /* : Int */;
val* var1115 /* : String */;
short int var1116 /* : Bool */;
static val* varonce1117;
val* var1118 /* : String */;
char* var1119 /* : NativeString */;
long var1120 /* : Int */;
val* var1121 /* : String */;
long var1122 /* : Int */;
val* var1123 /* : nullable Object */;
static val* varonce1124;
val* var1125 /* : String */;
char* var1126 /* : NativeString */;
long var1127 /* : Int */;
val* var1128 /* : String */;
long var1129 /* : Int */;
val* var1130 /* : nullable Object */;
static val* varonce1131;
val* var1132 /* : String */;
char* var1133 /* : NativeString */;
long var1134 /* : Int */;
val* var1135 /* : String */;
long var1136 /* : Int */;
val* var1137 /* : nullable Object */;
static val* varonce1138;
val* var1139 /* : String */;
char* var1140 /* : NativeString */;
long var1141 /* : Int */;
val* var1142 /* : String */;
long var1143 /* : Int */;
val* var1144 /* : nullable Object */;
static val* varonce1145;
val* var1146 /* : String */;
char* var1147 /* : NativeString */;
long var1148 /* : Int */;
val* var1149 /* : String */;
long var1150 /* : Int */;
val* var1151 /* : nullable Object */;
static val* varonce1152;
val* var1153 /* : String */;
char* var1154 /* : NativeString */;
long var1155 /* : Int */;
val* var1156 /* : String */;
val* var1157 /* : Array[Object] */;
long var1158 /* : Int */;
val* var1159 /* : NativeArray[Object] */;
val* var1160 /* : String */;
static val* varonce1161;
val* var1162 /* : String */;
char* var1163 /* : NativeString */;
long var1164 /* : Int */;
val* var1165 /* : String */;
short int var1166 /* : Bool */;
static val* varonce1167;
val* var1168 /* : String */;
char* var1169 /* : NativeString */;
long var1170 /* : Int */;
val* var1171 /* : String */;
long var1172 /* : Int */;
val* var1173 /* : nullable Object */;
static val* varonce1174;
val* var1175 /* : String */;
char* var1176 /* : NativeString */;
long var1177 /* : Int */;
val* var1178 /* : String */;
val* var1179 /* : Array[Object] */;
long var1180 /* : Int */;
val* var1181 /* : NativeArray[Object] */;
val* var1182 /* : String */;
val* var1183 /* : RuntimeVariable */;
static val* varonce1184;
val* var1185 /* : String */;
char* var1186 /* : NativeString */;
long var1187 /* : Int */;
val* var1188 /* : String */;
short int var1189 /* : Bool */;
static val* varonce1190;
val* var1191 /* : String */;
char* var1192 /* : NativeString */;
long var1193 /* : Int */;
val* var1194 /* : String */;
short int var1195 /* : Bool */;
static val* varonce1196;
val* var1197 /* : String */;
char* var1198 /* : NativeString */;
long var1199 /* : Int */;
val* var1200 /* : String */;
long var1201 /* : Int */;
val* var1202 /* : nullable Object */;
static val* varonce1203;
val* var1204 /* : String */;
char* var1205 /* : NativeString */;
long var1206 /* : Int */;
val* var1207 /* : String */;
val* var1208 /* : Array[Object] */;
long var1209 /* : Int */;
val* var1210 /* : NativeArray[Object] */;
val* var1211 /* : String */;
static val* varonce1212;
val* var1213 /* : String */;
char* var1214 /* : NativeString */;
long var1215 /* : Int */;
val* var1216 /* : String */;
short int var1217 /* : Bool */;
static val* varonce1218;
val* var1219 /* : String */;
char* var1220 /* : NativeString */;
long var1221 /* : Int */;
val* var1222 /* : String */;
val* var1223 /* : RuntimeVariable */;
static val* varonce1224;
val* var1225 /* : String */;
char* var1226 /* : NativeString */;
long var1227 /* : Int */;
val* var1228 /* : String */;
short int var1229 /* : Bool */;
static val* varonce1230;
val* var1231 /* : String */;
char* var1232 /* : NativeString */;
long var1233 /* : Int */;
val* var1234 /* : String */;
long var1235 /* : Int */;
val* var1236 /* : nullable Object */;
static val* varonce1237;
val* var1238 /* : String */;
char* var1239 /* : NativeString */;
long var1240 /* : Int */;
val* var1241 /* : String */;
val* var1242 /* : Array[Object] */;
long var1243 /* : Int */;
val* var1244 /* : NativeArray[Object] */;
val* var1245 /* : String */;
val* var1246 /* : RuntimeVariable */;
static val* varonce1247;
val* var1248 /* : String */;
char* var1249 /* : NativeString */;
long var1250 /* : Int */;
val* var1251 /* : String */;
short int var1252 /* : Bool */;
static val* varonce1253;
val* var1254 /* : String */;
char* var1255 /* : NativeString */;
long var1256 /* : Int */;
val* var1257 /* : String */;
short int var1258 /* : Bool */;
static val* varonce1259;
val* var1260 /* : String */;
char* var1261 /* : NativeString */;
long var1262 /* : Int */;
val* var1263 /* : String */;
val* var1264 /* : nullable Object */;
val* var1265 /* : Array[Object] */;
long var1266 /* : Int */;
val* var1267 /* : NativeArray[Object] */;
val* var1268 /* : String */;
val* var1269 /* : RuntimeVariable */;
static val* varonce1270;
val* var1271 /* : String */;
char* var1272 /* : NativeString */;
long var1273 /* : Int */;
val* var1274 /* : String */;
short int var1275 /* : Bool */;
long var1276 /* : Int */;
val* var1277 /* : nullable Object */;
long var1278 /* : Int */;
val* var1279 /* : nullable Object */;
val* var1280 /* : RuntimeVariable */;
static val* varonce1281;
val* var1282 /* : String */;
char* var1283 /* : NativeString */;
long var1284 /* : Int */;
val* var1285 /* : String */;
short int var1286 /* : Bool */;
long var1287 /* : Int */;
val* var1288 /* : nullable Object */;
long var1289 /* : Int */;
val* var1290 /* : nullable Object */;
val* var1291 /* : RuntimeVariable */;
static val* varonce1292;
val* var1293 /* : String */;
char* var1294 /* : NativeString */;
long var1295 /* : Int */;
val* var1296 /* : String */;
short int var1297 /* : Bool */;
val* var1298 /* : nullable Object */;
val* var1299 /* : String */;
val* var_nat /* var nat: String */;
static val* varonce1300;
val* var1301 /* : String */;
char* var1302 /* : NativeString */;
long var1303 /* : Int */;
val* var1304 /* : String */;
static val* varonce1305;
val* var1306 /* : String */;
char* var1307 /* : NativeString */;
long var1308 /* : Int */;
val* var1309 /* : String */;
val* var1310 /* : Array[Object] */;
long var1311 /* : Int */;
val* var1312 /* : NativeArray[Object] */;
val* var1313 /* : String */;
static val* varonce1314;
val* var1315 /* : String */;
char* var1316 /* : NativeString */;
long var1317 /* : Int */;
val* var1318 /* : String */;
short int var1319 /* : Bool */;
val* var1320 /* : nullable Object */;
val* var1321 /* : String */;
val* var_nat1322 /* var nat: String */;
static val* varonce1323;
val* var1324 /* : String */;
char* var1325 /* : NativeString */;
long var1326 /* : Int */;
val* var1327 /* : String */;
val* var1328 /* : Array[Object] */;
long var1329 /* : Int */;
val* var1330 /* : NativeArray[Object] */;
val* var1331 /* : String */;
val* var1332 /* : RuntimeVariable */;
static val* varonce1333;
val* var1334 /* : String */;
char* var1335 /* : NativeString */;
long var1336 /* : Int */;
val* var1337 /* : String */;
short int var1338 /* : Bool */;
static val* varonce1339;
val* var1340 /* : String */;
char* var1341 /* : NativeString */;
long var1342 /* : Int */;
val* var1343 /* : String */;
static val* varonce1344;
val* var1345 /* : String */;
char* var1346 /* : NativeString */;
long var1347 /* : Int */;
val* var1348 /* : String */;
short int var1349 /* : Bool */;
static val* varonce1350;
val* var1351 /* : String */;
char* var1352 /* : NativeString */;
long var1353 /* : Int */;
val* var1354 /* : String */;
val* var1355 /* : RuntimeVariable */;
static val* varonce1356;
val* var1357 /* : String */;
char* var1358 /* : NativeString */;
long var1359 /* : Int */;
val* var1360 /* : String */;
short int var1361 /* : Bool */;
static val* varonce1362;
val* var1363 /* : String */;
char* var1364 /* : NativeString */;
long var1365 /* : Int */;
val* var1366 /* : String */;
long var1367 /* : Int */;
val* var1368 /* : nullable Object */;
static val* varonce1369;
val* var1370 /* : String */;
char* var1371 /* : NativeString */;
long var1372 /* : Int */;
val* var1373 /* : String */;
val* var1374 /* : Array[Object] */;
long var1375 /* : Int */;
val* var1376 /* : NativeArray[Object] */;
val* var1377 /* : String */;
val* var1378 /* : RuntimeVariable */;
static val* varonce1379;
val* var1380 /* : String */;
char* var1381 /* : NativeString */;
long var1382 /* : Int */;
val* var1383 /* : String */;
val* var1384 /* : String */;
static val* varonce1385;
val* var1386 /* : String */;
char* var1387 /* : NativeString */;
long var1388 /* : Int */;
val* var1389 /* : String */;
static val* varonce1390;
val* var1391 /* : String */;
char* var1392 /* : NativeString */;
long var1393 /* : Int */;
val* var1394 /* : String */;
val* var1395 /* : Location */;
val* var1396 /* : String */;
static val* varonce1397;
val* var1398 /* : String */;
char* var1399 /* : NativeString */;
long var1400 /* : Int */;
val* var1401 /* : String */;
val* var1402 /* : Array[Object] */;
long var1403 /* : Int */;
val* var1404 /* : NativeArray[Object] */;
val* var1405 /* : String */;
static val* varonce1406;
val* var1407 /* : String */;
char* var1408 /* : NativeString */;
long var1409 /* : Int */;
val* var1410 /* : String */;
val* var1411 /* : Array[Object] */;
long var1412 /* : Int */;
val* var1413 /* : NativeArray[Object] */;
val* var1414 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MProperty__name]))(var) /* name on <var:MProperty(MMethod)>*/;
var_pname = var1;
var2 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__mclass]))(var2) /* mclass on <var2:MClassDef>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClass__name]))(var3) /* name on <var3:MClass>*/;
var_cname = var4;
var5 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1468);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MSignature__return_mtype]))(var5) /* return_mtype on <var5:nullable MSignature>*/;
}
var_ret = var6;
var7 = NULL;
if (var_ret == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var9 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var10 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(var_v, var_ret, var9) /* resolve_for on <var_v:AbstractCompilerVisitor>*/;
var_ret = var10;
} else {
}
if (varonce) {
var12 = varonce;
} else {
var13 = "==";
var14 = 2;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
var16 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___33d_61d]))(var_pname, var12) /* != on <var_pname:String>*/;
var_ = var16;
if (var16){
if (varonce17) {
var18 = varonce17;
} else {
var19 = "!=";
var20 = 2;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___33d_61d]))(var_pname, var18) /* != on <var_pname:String>*/;
var11 = var22;
} else {
var11 = var_;
}
if (var11){
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments) /* adapt_signature on <var_v:AbstractCompilerVisitor>*/;
} else {
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "Int";
var26 = 3;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var24) /* == on <var_cname:String>*/;
if (var28){
if (varonce29) {
var30 = varonce29;
} else {
var31 = "output";
var32 = 6;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var30) /* == on <var_pname:String>*/;
if (var34){
if (varonce35) {
var36 = varonce35;
} else {
var37 = "printf(\"%ld\\n\", ";
var38 = 16;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = ");";
var44 = 2;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var40;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var42;
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var49) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce50) {
var51 = varonce50;
} else {
var52 = "object_id";
var53 = 9;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var51) /* == on <var_pname:String>*/;
if (var55){
var56 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var56) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce57) {
var58 = varonce57;
} else {
var59 = "+";
var60 = 1;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
var62 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var58) /* == on <var_pname:String>*/;
if (var62){
var63 = 0;
var64 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var63) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = " + ";
var68 = 3;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = 1;
var71 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var70) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var72 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 3;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var64;
((struct instance_array__NativeArray*)var74)->values[1] = (val*) var66;
((struct instance_array__NativeArray*)var74)->values[2] = (val*) var71;
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
var75 = ((val* (*)(val*))(var72->class->vft[COLOR_string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1483);
show_backtrace(1);
}
var76 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var75, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var76) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce77) {
var78 = varonce77;
} else {
var79 = "-";
var80 = 1;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
var82 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var78) /* == on <var_pname:String>*/;
if (var82){
var83 = 0;
var84 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var83) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce85) {
var86 = varonce85;
} else {
var87 = " - ";
var88 = 3;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = 1;
var91 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var90) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var92 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 3;
var94 = NEW_array__NativeArray(var93, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var94)->values[0] = (val*) var84;
((struct instance_array__NativeArray*)var94)->values[1] = (val*) var86;
((struct instance_array__NativeArray*)var94)->values[2] = (val*) var91;
((void (*)(val*, val*, long))(var92->class->vft[COLOR_array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
}
var95 = ((val* (*)(val*))(var92->class->vft[COLOR_string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1486);
show_backtrace(1);
}
var96 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var95, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var96) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce97) {
var98 = varonce97;
} else {
var99 = "unary -";
var100 = 7;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var98) /* == on <var_pname:String>*/;
if (var102){
if (varonce103) {
var104 = varonce103;
} else {
var105 = "-";
var106 = 1;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var108 = 0;
var109 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var108) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var110 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 2;
var112 = NEW_array__NativeArray(var111, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var112)->values[0] = (val*) var104;
((struct instance_array__NativeArray*)var112)->values[1] = (val*) var109;
((void (*)(val*, val*, long))(var110->class->vft[COLOR_array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
var113 = ((val* (*)(val*))(var110->class->vft[COLOR_string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1489);
show_backtrace(1);
}
var114 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var113, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var114) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce115) {
var116 = varonce115;
} else {
var117 = "succ";
var118 = 4;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var116) /* == on <var_pname:String>*/;
if (var120){
var121 = 0;
var122 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var121) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce123) {
var124 = varonce123;
} else {
var125 = "+1";
var126 = 2;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var128 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var128 = array_instance Array[Object] */
var129 = 2;
var130 = NEW_array__NativeArray(var129, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var130)->values[0] = (val*) var122;
((struct instance_array__NativeArray*)var130)->values[1] = (val*) var124;
((void (*)(val*, val*, long))(var128->class->vft[COLOR_array__Array__with_native]))(var128, var130, var129) /* with_native on <var128:Array[Object]>*/;
}
var131 = ((val* (*)(val*))(var128->class->vft[COLOR_string__Object__to_s]))(var128) /* to_s on <var128:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1492);
show_backtrace(1);
}
var132 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var131, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var132) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce133) {
var134 = varonce133;
} else {
var135 = "prec";
var136 = 4;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
var138 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var134) /* == on <var_pname:String>*/;
if (var138){
var139 = 0;
var140 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var139) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce141) {
var142 = varonce141;
} else {
var143 = "-1";
var144 = 2;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var146 = array_instance Array[Object] */
var147 = 2;
var148 = NEW_array__NativeArray(var147, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var148)->values[0] = (val*) var140;
((struct instance_array__NativeArray*)var148)->values[1] = (val*) var142;
((void (*)(val*, val*, long))(var146->class->vft[COLOR_array__Array__with_native]))(var146, var148, var147) /* with_native on <var146:Array[Object]>*/;
}
var149 = ((val* (*)(val*))(var146->class->vft[COLOR_string__Object__to_s]))(var146) /* to_s on <var146:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1495);
show_backtrace(1);
}
var150 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var149, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var150) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce151) {
var152 = varonce151;
} else {
var153 = "*";
var154 = 1;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var156 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var152) /* == on <var_pname:String>*/;
if (var156){
var157 = 0;
var158 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var157) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce159) {
var160 = varonce159;
} else {
var161 = " * ";
var162 = 3;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = 1;
var165 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var164) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var166 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var166 = array_instance Array[Object] */
var167 = 3;
var168 = NEW_array__NativeArray(var167, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var168)->values[0] = (val*) var158;
((struct instance_array__NativeArray*)var168)->values[1] = (val*) var160;
((struct instance_array__NativeArray*)var168)->values[2] = (val*) var165;
((void (*)(val*, val*, long))(var166->class->vft[COLOR_array__Array__with_native]))(var166, var168, var167) /* with_native on <var166:Array[Object]>*/;
}
var169 = ((val* (*)(val*))(var166->class->vft[COLOR_string__Object__to_s]))(var166) /* to_s on <var166:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1498);
show_backtrace(1);
}
var170 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var169, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var170) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce171) {
var172 = varonce171;
} else {
var173 = "/";
var174 = 1;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
var176 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var172) /* == on <var_pname:String>*/;
if (var176){
var177 = 0;
var178 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var177) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce179) {
var180 = varonce179;
} else {
var181 = " / ";
var182 = 3;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
var184 = 1;
var185 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var184) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var186 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var186 = array_instance Array[Object] */
var187 = 3;
var188 = NEW_array__NativeArray(var187, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var188)->values[0] = (val*) var178;
((struct instance_array__NativeArray*)var188)->values[1] = (val*) var180;
((struct instance_array__NativeArray*)var188)->values[2] = (val*) var185;
((void (*)(val*, val*, long))(var186->class->vft[COLOR_array__Array__with_native]))(var186, var188, var187) /* with_native on <var186:Array[Object]>*/;
}
var189 = ((val* (*)(val*))(var186->class->vft[COLOR_string__Object__to_s]))(var186) /* to_s on <var186:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1501);
show_backtrace(1);
}
var190 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var189, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var190) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce191) {
var192 = varonce191;
} else {
var193 = "%";
var194 = 1;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
var196 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var192) /* == on <var_pname:String>*/;
if (var196){
var197 = 0;
var198 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var197) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce199) {
var200 = varonce199;
} else {
var201 = " % ";
var202 = 3;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
var204 = 1;
var205 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var204) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var206 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var206 = array_instance Array[Object] */
var207 = 3;
var208 = NEW_array__NativeArray(var207, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var208)->values[0] = (val*) var198;
((struct instance_array__NativeArray*)var208)->values[1] = (val*) var200;
((struct instance_array__NativeArray*)var208)->values[2] = (val*) var205;
((void (*)(val*, val*, long))(var206->class->vft[COLOR_array__Array__with_native]))(var206, var208, var207) /* with_native on <var206:Array[Object]>*/;
}
var209 = ((val* (*)(val*))(var206->class->vft[COLOR_string__Object__to_s]))(var206) /* to_s on <var206:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1504);
show_backtrace(1);
}
var210 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var209, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var210) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce211) {
var212 = varonce211;
} else {
var213 = "lshift";
var214 = 6;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
var216 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var212) /* == on <var_pname:String>*/;
if (var216){
var217 = 0;
var218 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var217) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce219) {
var220 = varonce219;
} else {
var221 = " << ";
var222 = 4;
var223 = string__NativeString__to_s_with_length(var221, var222);
var220 = var223;
varonce219 = var220;
}
var224 = 1;
var225 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var224) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var226 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var226 = array_instance Array[Object] */
var227 = 3;
var228 = NEW_array__NativeArray(var227, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var228)->values[0] = (val*) var218;
((struct instance_array__NativeArray*)var228)->values[1] = (val*) var220;
((struct instance_array__NativeArray*)var228)->values[2] = (val*) var225;
((void (*)(val*, val*, long))(var226->class->vft[COLOR_array__Array__with_native]))(var226, var228, var227) /* with_native on <var226:Array[Object]>*/;
}
var229 = ((val* (*)(val*))(var226->class->vft[COLOR_string__Object__to_s]))(var226) /* to_s on <var226:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1507);
show_backtrace(1);
}
var230 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var229, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var230) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce231) {
var232 = varonce231;
} else {
var233 = "rshift";
var234 = 6;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
var236 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var232) /* == on <var_pname:String>*/;
if (var236){
var237 = 0;
var238 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var237) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce239) {
var240 = varonce239;
} else {
var241 = " >> ";
var242 = 4;
var243 = string__NativeString__to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
var244 = 1;
var245 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var244) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var246 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var246 = array_instance Array[Object] */
var247 = 3;
var248 = NEW_array__NativeArray(var247, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var248)->values[0] = (val*) var238;
((struct instance_array__NativeArray*)var248)->values[1] = (val*) var240;
((struct instance_array__NativeArray*)var248)->values[2] = (val*) var245;
((void (*)(val*, val*, long))(var246->class->vft[COLOR_array__Array__with_native]))(var246, var248, var247) /* with_native on <var246:Array[Object]>*/;
}
var249 = ((val* (*)(val*))(var246->class->vft[COLOR_string__Object__to_s]))(var246) /* to_s on <var246:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1510);
show_backtrace(1);
}
var250 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var249, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var250) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce251) {
var252 = varonce251;
} else {
var253 = "==";
var254 = 2;
var255 = string__NativeString__to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
var256 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var252) /* == on <var_pname:String>*/;
if (var256){
var257 = 0;
var258 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var257) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var259 = 1;
var260 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var259) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var261 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var258, var260) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var261) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce262) {
var263 = varonce262;
} else {
var264 = "!=";
var265 = 2;
var266 = string__NativeString__to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
var267 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var263) /* == on <var_pname:String>*/;
if (var267){
var268 = 0;
var269 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var268) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var270 = 1;
var271 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var270) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var272 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var269, var271) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
var_res = var272;
if (varonce273) {
var274 = varonce273;
} else {
var275 = "!";
var276 = 1;
var277 = string__NativeString__to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
var278 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var278 = array_instance Array[Object] */
var279 = 2;
var280 = NEW_array__NativeArray(var279, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var280)->values[0] = (val*) var274;
((struct instance_array__NativeArray*)var280)->values[1] = (val*) var_res;
((void (*)(val*, val*, long))(var278->class->vft[COLOR_array__Array__with_native]))(var278, var280, var279) /* with_native on <var278:Array[Object]>*/;
}
var281 = ((val* (*)(val*))(var278->class->vft[COLOR_string__Object__to_s]))(var278) /* to_s on <var278:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1517);
show_backtrace(1);
}
var282 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var281, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var282) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce283) {
var284 = varonce283;
} else {
var285 = "<";
var286 = 1;
var287 = string__NativeString__to_s_with_length(var285, var286);
var284 = var287;
varonce283 = var284;
}
var288 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var284) /* == on <var_pname:String>*/;
if (var288){
var289 = 0;
var290 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var289) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce291) {
var292 = varonce291;
} else {
var293 = " < ";
var294 = 3;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
var296 = 1;
var297 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var296) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var298 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var298 = array_instance Array[Object] */
var299 = 3;
var300 = NEW_array__NativeArray(var299, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var300)->values[0] = (val*) var290;
((struct instance_array__NativeArray*)var300)->values[1] = (val*) var292;
((struct instance_array__NativeArray*)var300)->values[2] = (val*) var297;
((void (*)(val*, val*, long))(var298->class->vft[COLOR_array__Array__with_native]))(var298, var300, var299) /* with_native on <var298:Array[Object]>*/;
}
var301 = ((val* (*)(val*))(var298->class->vft[COLOR_string__Object__to_s]))(var298) /* to_s on <var298:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1520);
show_backtrace(1);
}
var302 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var301, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var302) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce303) {
var304 = varonce303;
} else {
var305 = ">";
var306 = 1;
var307 = string__NativeString__to_s_with_length(var305, var306);
var304 = var307;
varonce303 = var304;
}
var308 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var304) /* == on <var_pname:String>*/;
if (var308){
var309 = 0;
var310 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var309) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce311) {
var312 = varonce311;
} else {
var313 = " > ";
var314 = 3;
var315 = string__NativeString__to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
var316 = 1;
var317 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var316) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var318 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var318 = array_instance Array[Object] */
var319 = 3;
var320 = NEW_array__NativeArray(var319, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var320)->values[0] = (val*) var310;
((struct instance_array__NativeArray*)var320)->values[1] = (val*) var312;
((struct instance_array__NativeArray*)var320)->values[2] = (val*) var317;
((void (*)(val*, val*, long))(var318->class->vft[COLOR_array__Array__with_native]))(var318, var320, var319) /* with_native on <var318:Array[Object]>*/;
}
var321 = ((val* (*)(val*))(var318->class->vft[COLOR_string__Object__to_s]))(var318) /* to_s on <var318:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1523);
show_backtrace(1);
}
var322 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var321, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var322) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce323) {
var324 = varonce323;
} else {
var325 = "<=";
var326 = 2;
var327 = string__NativeString__to_s_with_length(var325, var326);
var324 = var327;
varonce323 = var324;
}
var328 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var324) /* == on <var_pname:String>*/;
if (var328){
var329 = 0;
var330 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var329) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce331) {
var332 = varonce331;
} else {
var333 = " <= ";
var334 = 4;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
var336 = 1;
var337 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var336) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var338 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var338 = array_instance Array[Object] */
var339 = 3;
var340 = NEW_array__NativeArray(var339, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var340)->values[0] = (val*) var330;
((struct instance_array__NativeArray*)var340)->values[1] = (val*) var332;
((struct instance_array__NativeArray*)var340)->values[2] = (val*) var337;
((void (*)(val*, val*, long))(var338->class->vft[COLOR_array__Array__with_native]))(var338, var340, var339) /* with_native on <var338:Array[Object]>*/;
}
var341 = ((val* (*)(val*))(var338->class->vft[COLOR_string__Object__to_s]))(var338) /* to_s on <var338:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1526);
show_backtrace(1);
}
var342 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var341, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var342) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce343) {
var344 = varonce343;
} else {
var345 = ">=";
var346 = 2;
var347 = string__NativeString__to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
var348 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var344) /* == on <var_pname:String>*/;
if (var348){
var349 = 0;
var350 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var349) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce351) {
var352 = varonce351;
} else {
var353 = " >= ";
var354 = 4;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
var356 = 1;
var357 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var356) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var358 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var358 = array_instance Array[Object] */
var359 = 3;
var360 = NEW_array__NativeArray(var359, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var360)->values[0] = (val*) var350;
((struct instance_array__NativeArray*)var360)->values[1] = (val*) var352;
((struct instance_array__NativeArray*)var360)->values[2] = (val*) var357;
((void (*)(val*, val*, long))(var358->class->vft[COLOR_array__Array__with_native]))(var358, var360, var359) /* with_native on <var358:Array[Object]>*/;
}
var361 = ((val* (*)(val*))(var358->class->vft[COLOR_string__Object__to_s]))(var358) /* to_s on <var358:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1529);
show_backtrace(1);
}
var362 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var361, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var362) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce363) {
var364 = varonce363;
} else {
var365 = "to_f";
var366 = 4;
var367 = string__NativeString__to_s_with_length(var365, var366);
var364 = var367;
varonce363 = var364;
}
var368 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var364) /* == on <var_pname:String>*/;
if (var368){
if (varonce369) {
var370 = varonce369;
} else {
var371 = "(double)";
var372 = 8;
var373 = string__NativeString__to_s_with_length(var371, var372);
var370 = var373;
varonce369 = var370;
}
var374 = 0;
var375 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var374) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var376 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var376 = array_instance Array[Object] */
var377 = 2;
var378 = NEW_array__NativeArray(var377, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var378)->values[0] = (val*) var370;
((struct instance_array__NativeArray*)var378)->values[1] = (val*) var375;
((void (*)(val*, val*, long))(var376->class->vft[COLOR_array__Array__with_native]))(var376, var378, var377) /* with_native on <var376:Array[Object]>*/;
}
var379 = ((val* (*)(val*))(var376->class->vft[COLOR_string__Object__to_s]))(var376) /* to_s on <var376:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1532);
show_backtrace(1);
}
var380 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var379, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var380) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce381) {
var382 = varonce381;
} else {
var383 = "ascii";
var384 = 5;
var385 = string__NativeString__to_s_with_length(var383, var384);
var382 = var385;
varonce381 = var382;
}
var386 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var382) /* == on <var_pname:String>*/;
if (var386){
var387 = 0;
var388 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var387) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var389 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var389 = array_instance Array[Object] */
var390 = 1;
var391 = NEW_array__NativeArray(var390, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var391)->values[0] = (val*) var388;
((void (*)(val*, val*, long))(var389->class->vft[COLOR_array__Array__with_native]))(var389, var391, var390) /* with_native on <var389:Array[Object]>*/;
}
var392 = ((val* (*)(val*))(var389->class->vft[COLOR_string__Object__to_s]))(var389) /* to_s on <var389:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1535);
show_backtrace(1);
}
var393 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var392, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var393) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (varonce394) {
var395 = varonce394;
} else {
var396 = "Char";
var397 = 4;
var398 = string__NativeString__to_s_with_length(var396, var397);
var395 = var398;
varonce394 = var395;
}
var399 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var395) /* == on <var_cname:String>*/;
if (var399){
if (varonce400) {
var401 = varonce400;
} else {
var402 = "output";
var403 = 6;
var404 = string__NativeString__to_s_with_length(var402, var403);
var401 = var404;
varonce400 = var401;
}
var405 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var401) /* == on <var_pname:String>*/;
if (var405){
if (varonce406) {
var407 = varonce406;
} else {
var408 = "printf(\"%c\", ";
var409 = 13;
var410 = string__NativeString__to_s_with_length(var408, var409);
var407 = var410;
varonce406 = var407;
}
var411 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce412) {
var413 = varonce412;
} else {
var414 = ");";
var415 = 2;
var416 = string__NativeString__to_s_with_length(var414, var415);
var413 = var416;
varonce412 = var413;
}
var417 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var417 = array_instance Array[Object] */
var418 = 3;
var419 = NEW_array__NativeArray(var418, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var419)->values[0] = (val*) var407;
((struct instance_array__NativeArray*)var419)->values[1] = (val*) var411;
((struct instance_array__NativeArray*)var419)->values[2] = (val*) var413;
((void (*)(val*, val*, long))(var417->class->vft[COLOR_array__Array__with_native]))(var417, var419, var418) /* with_native on <var417:Array[Object]>*/;
}
var420 = ((val* (*)(val*))(var417->class->vft[COLOR_string__Object__to_s]))(var417) /* to_s on <var417:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var420) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce421) {
var422 = varonce421;
} else {
var423 = "object_id";
var424 = 9;
var425 = string__NativeString__to_s_with_length(var423, var424);
var422 = var425;
varonce421 = var422;
}
var426 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var422) /* == on <var_pname:String>*/;
if (var426){
if (varonce427) {
var428 = varonce427;
} else {
var429 = "(long)";
var430 = 6;
var431 = string__NativeString__to_s_with_length(var429, var430);
var428 = var431;
varonce427 = var428;
}
var432 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var433 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var433 = array_instance Array[Object] */
var434 = 2;
var435 = NEW_array__NativeArray(var434, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var435)->values[0] = (val*) var428;
((struct instance_array__NativeArray*)var435)->values[1] = (val*) var432;
((void (*)(val*, val*, long))(var433->class->vft[COLOR_array__Array__with_native]))(var433, var435, var434) /* with_native on <var433:Array[Object]>*/;
}
var436 = ((val* (*)(val*))(var433->class->vft[COLOR_string__Object__to_s]))(var433) /* to_s on <var433:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1543);
show_backtrace(1);
}
var437 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var436, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var437) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce438) {
var439 = varonce438;
} else {
var440 = "+";
var441 = 1;
var442 = string__NativeString__to_s_with_length(var440, var441);
var439 = var442;
varonce438 = var439;
}
var443 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var439) /* == on <var_pname:String>*/;
if (var443){
var444 = 0;
var445 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var444) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce446) {
var447 = varonce446;
} else {
var448 = " + ";
var449 = 3;
var450 = string__NativeString__to_s_with_length(var448, var449);
var447 = var450;
varonce446 = var447;
}
var451 = 1;
var452 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var451) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var453 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var453 = array_instance Array[Object] */
var454 = 3;
var455 = NEW_array__NativeArray(var454, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var455)->values[0] = (val*) var445;
((struct instance_array__NativeArray*)var455)->values[1] = (val*) var447;
((struct instance_array__NativeArray*)var455)->values[2] = (val*) var452;
((void (*)(val*, val*, long))(var453->class->vft[COLOR_array__Array__with_native]))(var453, var455, var454) /* with_native on <var453:Array[Object]>*/;
}
var456 = ((val* (*)(val*))(var453->class->vft[COLOR_string__Object__to_s]))(var453) /* to_s on <var453:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1546);
show_backtrace(1);
}
var457 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var456, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var457) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce458) {
var459 = varonce458;
} else {
var460 = "-";
var461 = 1;
var462 = string__NativeString__to_s_with_length(var460, var461);
var459 = var462;
varonce458 = var459;
}
var463 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var459) /* == on <var_pname:String>*/;
if (var463){
var464 = 0;
var465 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var464) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce466) {
var467 = varonce466;
} else {
var468 = " - ";
var469 = 3;
var470 = string__NativeString__to_s_with_length(var468, var469);
var467 = var470;
varonce466 = var467;
}
var471 = 1;
var472 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var471) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var473 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var473 = array_instance Array[Object] */
var474 = 3;
var475 = NEW_array__NativeArray(var474, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var475)->values[0] = (val*) var465;
((struct instance_array__NativeArray*)var475)->values[1] = (val*) var467;
((struct instance_array__NativeArray*)var475)->values[2] = (val*) var472;
((void (*)(val*, val*, long))(var473->class->vft[COLOR_array__Array__with_native]))(var473, var475, var474) /* with_native on <var473:Array[Object]>*/;
}
var476 = ((val* (*)(val*))(var473->class->vft[COLOR_string__Object__to_s]))(var473) /* to_s on <var473:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1549);
show_backtrace(1);
}
var477 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var476, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var477) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce478) {
var479 = varonce478;
} else {
var480 = "==";
var481 = 2;
var482 = string__NativeString__to_s_with_length(var480, var481);
var479 = var482;
varonce478 = var479;
}
var483 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var479) /* == on <var_pname:String>*/;
if (var483){
var484 = 0;
var485 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var484) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var486 = 1;
var487 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var486) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var488 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var485, var487) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var488) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce489) {
var490 = varonce489;
} else {
var491 = "!=";
var492 = 2;
var493 = string__NativeString__to_s_with_length(var491, var492);
var490 = var493;
varonce489 = var490;
}
var494 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var490) /* == on <var_pname:String>*/;
if (var494){
var495 = 0;
var496 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var495) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var497 = 1;
var498 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var497) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var499 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var496, var498) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
var_res500 = var499;
if (varonce501) {
var502 = varonce501;
} else {
var503 = "!";
var504 = 1;
var505 = string__NativeString__to_s_with_length(var503, var504);
var502 = var505;
varonce501 = var502;
}
var506 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var506 = array_instance Array[Object] */
var507 = 2;
var508 = NEW_array__NativeArray(var507, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var508)->values[0] = (val*) var502;
((struct instance_array__NativeArray*)var508)->values[1] = (val*) var_res500;
((void (*)(val*, val*, long))(var506->class->vft[COLOR_array__Array__with_native]))(var506, var508, var507) /* with_native on <var506:Array[Object]>*/;
}
var509 = ((val* (*)(val*))(var506->class->vft[COLOR_string__Object__to_s]))(var506) /* to_s on <var506:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1556);
show_backtrace(1);
}
var510 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var509, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var510) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce511) {
var512 = varonce511;
} else {
var513 = "succ";
var514 = 4;
var515 = string__NativeString__to_s_with_length(var513, var514);
var512 = var515;
varonce511 = var512;
}
var516 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var512) /* == on <var_pname:String>*/;
if (var516){
var517 = 0;
var518 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var517) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce519) {
var520 = varonce519;
} else {
var521 = "+1";
var522 = 2;
var523 = string__NativeString__to_s_with_length(var521, var522);
var520 = var523;
varonce519 = var520;
}
var524 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var524 = array_instance Array[Object] */
var525 = 2;
var526 = NEW_array__NativeArray(var525, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var526)->values[0] = (val*) var518;
((struct instance_array__NativeArray*)var526)->values[1] = (val*) var520;
((void (*)(val*, val*, long))(var524->class->vft[COLOR_array__Array__with_native]))(var524, var526, var525) /* with_native on <var524:Array[Object]>*/;
}
var527 = ((val* (*)(val*))(var524->class->vft[COLOR_string__Object__to_s]))(var524) /* to_s on <var524:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1559);
show_backtrace(1);
}
var528 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var527, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var528) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce529) {
var530 = varonce529;
} else {
var531 = "prec";
var532 = 4;
var533 = string__NativeString__to_s_with_length(var531, var532);
var530 = var533;
varonce529 = var530;
}
var534 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var530) /* == on <var_pname:String>*/;
if (var534){
var535 = 0;
var536 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var535) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce537) {
var538 = varonce537;
} else {
var539 = "-1";
var540 = 2;
var541 = string__NativeString__to_s_with_length(var539, var540);
var538 = var541;
varonce537 = var538;
}
var542 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var542 = array_instance Array[Object] */
var543 = 2;
var544 = NEW_array__NativeArray(var543, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var544)->values[0] = (val*) var536;
((struct instance_array__NativeArray*)var544)->values[1] = (val*) var538;
((void (*)(val*, val*, long))(var542->class->vft[COLOR_array__Array__with_native]))(var542, var544, var543) /* with_native on <var542:Array[Object]>*/;
}
var545 = ((val* (*)(val*))(var542->class->vft[COLOR_string__Object__to_s]))(var542) /* to_s on <var542:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1562);
show_backtrace(1);
}
var546 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var545, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var546) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce547) {
var548 = varonce547;
} else {
var549 = "<";
var550 = 1;
var551 = string__NativeString__to_s_with_length(var549, var550);
var548 = var551;
varonce547 = var548;
}
var552 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var548) /* == on <var_pname:String>*/;
if (var552){
var553 = 0;
var554 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var553) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce555) {
var556 = varonce555;
} else {
var557 = " < ";
var558 = 3;
var559 = string__NativeString__to_s_with_length(var557, var558);
var556 = var559;
varonce555 = var556;
}
var560 = 1;
var561 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var560) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var562 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var562 = array_instance Array[Object] */
var563 = 3;
var564 = NEW_array__NativeArray(var563, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var564)->values[0] = (val*) var554;
((struct instance_array__NativeArray*)var564)->values[1] = (val*) var556;
((struct instance_array__NativeArray*)var564)->values[2] = (val*) var561;
((void (*)(val*, val*, long))(var562->class->vft[COLOR_array__Array__with_native]))(var562, var564, var563) /* with_native on <var562:Array[Object]>*/;
}
var565 = ((val* (*)(val*))(var562->class->vft[COLOR_string__Object__to_s]))(var562) /* to_s on <var562:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1565);
show_backtrace(1);
}
var566 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var565, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var566) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce567) {
var568 = varonce567;
} else {
var569 = ">";
var570 = 1;
var571 = string__NativeString__to_s_with_length(var569, var570);
var568 = var571;
varonce567 = var568;
}
var572 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var568) /* == on <var_pname:String>*/;
if (var572){
var573 = 0;
var574 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var573) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce575) {
var576 = varonce575;
} else {
var577 = " > ";
var578 = 3;
var579 = string__NativeString__to_s_with_length(var577, var578);
var576 = var579;
varonce575 = var576;
}
var580 = 1;
var581 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var580) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var582 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var582 = array_instance Array[Object] */
var583 = 3;
var584 = NEW_array__NativeArray(var583, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var584)->values[0] = (val*) var574;
((struct instance_array__NativeArray*)var584)->values[1] = (val*) var576;
((struct instance_array__NativeArray*)var584)->values[2] = (val*) var581;
((void (*)(val*, val*, long))(var582->class->vft[COLOR_array__Array__with_native]))(var582, var584, var583) /* with_native on <var582:Array[Object]>*/;
}
var585 = ((val* (*)(val*))(var582->class->vft[COLOR_string__Object__to_s]))(var582) /* to_s on <var582:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1568);
show_backtrace(1);
}
var586 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var585, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var586) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce587) {
var588 = varonce587;
} else {
var589 = "<=";
var590 = 2;
var591 = string__NativeString__to_s_with_length(var589, var590);
var588 = var591;
varonce587 = var588;
}
var592 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var588) /* == on <var_pname:String>*/;
if (var592){
var593 = 0;
var594 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var593) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce595) {
var596 = varonce595;
} else {
var597 = " <= ";
var598 = 4;
var599 = string__NativeString__to_s_with_length(var597, var598);
var596 = var599;
varonce595 = var596;
}
var600 = 1;
var601 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var600) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var602 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var602 = array_instance Array[Object] */
var603 = 3;
var604 = NEW_array__NativeArray(var603, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var604)->values[0] = (val*) var594;
((struct instance_array__NativeArray*)var604)->values[1] = (val*) var596;
((struct instance_array__NativeArray*)var604)->values[2] = (val*) var601;
((void (*)(val*, val*, long))(var602->class->vft[COLOR_array__Array__with_native]))(var602, var604, var603) /* with_native on <var602:Array[Object]>*/;
}
var605 = ((val* (*)(val*))(var602->class->vft[COLOR_string__Object__to_s]))(var602) /* to_s on <var602:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1571);
show_backtrace(1);
}
var606 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var605, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var606) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce607) {
var608 = varonce607;
} else {
var609 = ">=";
var610 = 2;
var611 = string__NativeString__to_s_with_length(var609, var610);
var608 = var611;
varonce607 = var608;
}
var612 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var608) /* == on <var_pname:String>*/;
if (var612){
var613 = 0;
var614 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var613) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce615) {
var616 = varonce615;
} else {
var617 = " >= ";
var618 = 4;
var619 = string__NativeString__to_s_with_length(var617, var618);
var616 = var619;
varonce615 = var616;
}
var620 = 1;
var621 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var620) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var622 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var622 = array_instance Array[Object] */
var623 = 3;
var624 = NEW_array__NativeArray(var623, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var624)->values[0] = (val*) var614;
((struct instance_array__NativeArray*)var624)->values[1] = (val*) var616;
((struct instance_array__NativeArray*)var624)->values[2] = (val*) var621;
((void (*)(val*, val*, long))(var622->class->vft[COLOR_array__Array__with_native]))(var622, var624, var623) /* with_native on <var622:Array[Object]>*/;
}
var625 = ((val* (*)(val*))(var622->class->vft[COLOR_string__Object__to_s]))(var622) /* to_s on <var622:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1574);
show_backtrace(1);
}
var626 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var625, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var626) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce627) {
var628 = varonce627;
} else {
var629 = "to_i";
var630 = 4;
var631 = string__NativeString__to_s_with_length(var629, var630);
var628 = var631;
varonce627 = var628;
}
var632 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var628) /* == on <var_pname:String>*/;
if (var632){
var633 = 0;
var634 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var633) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce635) {
var636 = varonce635;
} else {
var637 = "-\'0\'";
var638 = 4;
var639 = string__NativeString__to_s_with_length(var637, var638);
var636 = var639;
varonce635 = var636;
}
var640 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var640 = array_instance Array[Object] */
var641 = 2;
var642 = NEW_array__NativeArray(var641, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var642)->values[0] = (val*) var634;
((struct instance_array__NativeArray*)var642)->values[1] = (val*) var636;
((void (*)(val*, val*, long))(var640->class->vft[COLOR_array__Array__with_native]))(var640, var642, var641) /* with_native on <var640:Array[Object]>*/;
}
var643 = ((val* (*)(val*))(var640->class->vft[COLOR_string__Object__to_s]))(var640) /* to_s on <var640:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1577);
show_backtrace(1);
}
var644 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var643, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var644) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce645) {
var646 = varonce645;
} else {
var647 = "ascii";
var648 = 5;
var649 = string__NativeString__to_s_with_length(var647, var648);
var646 = var649;
varonce645 = var646;
}
var650 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var646) /* == on <var_pname:String>*/;
if (var650){
if (varonce651) {
var652 = varonce651;
} else {
var653 = "(unsigned char)";
var654 = 15;
var655 = string__NativeString__to_s_with_length(var653, var654);
var652 = var655;
varonce651 = var652;
}
var656 = 0;
var657 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var656) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var658 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var658 = array_instance Array[Object] */
var659 = 2;
var660 = NEW_array__NativeArray(var659, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var660)->values[0] = (val*) var652;
((struct instance_array__NativeArray*)var660)->values[1] = (val*) var657;
((void (*)(val*, val*, long))(var658->class->vft[COLOR_array__Array__with_native]))(var658, var660, var659) /* with_native on <var658:Array[Object]>*/;
}
var661 = ((val* (*)(val*))(var658->class->vft[COLOR_string__Object__to_s]))(var658) /* to_s on <var658:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1580);
show_backtrace(1);
}
var662 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var661, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var662) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (varonce663) {
var664 = varonce663;
} else {
var665 = "Bool";
var666 = 4;
var667 = string__NativeString__to_s_with_length(var665, var666);
var664 = var667;
varonce663 = var664;
}
var668 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var664) /* == on <var_cname:String>*/;
if (var668){
if (varonce669) {
var670 = varonce669;
} else {
var671 = "output";
var672 = 6;
var673 = string__NativeString__to_s_with_length(var671, var672);
var670 = var673;
varonce669 = var670;
}
var674 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var670) /* == on <var_pname:String>*/;
if (var674){
if (varonce675) {
var676 = varonce675;
} else {
var677 = "printf(";
var678 = 7;
var679 = string__NativeString__to_s_with_length(var677, var678);
var676 = var679;
varonce675 = var676;
}
var680 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce681) {
var682 = varonce681;
} else {
var683 = "?\"true\\n\":\"false\\n\");";
var684 = 21;
var685 = string__NativeString__to_s_with_length(var683, var684);
var682 = var685;
varonce681 = var682;
}
var686 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var686 = array_instance Array[Object] */
var687 = 3;
var688 = NEW_array__NativeArray(var687, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var688)->values[0] = (val*) var676;
((struct instance_array__NativeArray*)var688)->values[1] = (val*) var680;
((struct instance_array__NativeArray*)var688)->values[2] = (val*) var682;
((void (*)(val*, val*, long))(var686->class->vft[COLOR_array__Array__with_native]))(var686, var688, var687) /* with_native on <var686:Array[Object]>*/;
}
var689 = ((val* (*)(val*))(var686->class->vft[COLOR_string__Object__to_s]))(var686) /* to_s on <var686:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var689) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce690) {
var691 = varonce690;
} else {
var692 = "object_id";
var693 = 9;
var694 = string__NativeString__to_s_with_length(var692, var693);
var691 = var694;
varonce690 = var691;
}
var695 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var691) /* == on <var_pname:String>*/;
if (var695){
if (varonce696) {
var697 = varonce696;
} else {
var698 = "(long)";
var699 = 6;
var700 = string__NativeString__to_s_with_length(var698, var699);
var697 = var700;
varonce696 = var697;
}
var701 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var702 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var702 = array_instance Array[Object] */
var703 = 2;
var704 = NEW_array__NativeArray(var703, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var704)->values[0] = (val*) var697;
((struct instance_array__NativeArray*)var704)->values[1] = (val*) var701;
((void (*)(val*, val*, long))(var702->class->vft[COLOR_array__Array__with_native]))(var702, var704, var703) /* with_native on <var702:Array[Object]>*/;
}
var705 = ((val* (*)(val*))(var702->class->vft[COLOR_string__Object__to_s]))(var702) /* to_s on <var702:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1588);
show_backtrace(1);
}
var706 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var705, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var706) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce707) {
var708 = varonce707;
} else {
var709 = "==";
var710 = 2;
var711 = string__NativeString__to_s_with_length(var709, var710);
var708 = var711;
varonce707 = var708;
}
var712 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var708) /* == on <var_pname:String>*/;
if (var712){
var713 = 0;
var714 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var713) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var715 = 1;
var716 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var715) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var717 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var714, var716) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var717) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce718) {
var719 = varonce718;
} else {
var720 = "!=";
var721 = 2;
var722 = string__NativeString__to_s_with_length(var720, var721);
var719 = var722;
varonce718 = var719;
}
var723 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var719) /* == on <var_pname:String>*/;
if (var723){
var724 = 0;
var725 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var724) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var726 = 1;
var727 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var726) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var728 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var725, var727) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
var_res729 = var728;
if (varonce730) {
var731 = varonce730;
} else {
var732 = "!";
var733 = 1;
var734 = string__NativeString__to_s_with_length(var732, var733);
var731 = var734;
varonce730 = var731;
}
var735 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var735 = array_instance Array[Object] */
var736 = 2;
var737 = NEW_array__NativeArray(var736, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var737)->values[0] = (val*) var731;
((struct instance_array__NativeArray*)var737)->values[1] = (val*) var_res729;
((void (*)(val*, val*, long))(var735->class->vft[COLOR_array__Array__with_native]))(var735, var737, var736) /* with_native on <var735:Array[Object]>*/;
}
var738 = ((val* (*)(val*))(var735->class->vft[COLOR_string__Object__to_s]))(var735) /* to_s on <var735:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1595);
show_backtrace(1);
}
var739 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var738, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var739) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (varonce740) {
var741 = varonce740;
} else {
var742 = "Float";
var743 = 5;
var744 = string__NativeString__to_s_with_length(var742, var743);
var741 = var744;
varonce740 = var741;
}
var745 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var741) /* == on <var_cname:String>*/;
if (var745){
if (varonce746) {
var747 = varonce746;
} else {
var748 = "output";
var749 = 6;
var750 = string__NativeString__to_s_with_length(var748, var749);
var747 = var750;
varonce746 = var747;
}
var751 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var747) /* == on <var_pname:String>*/;
if (var751){
if (varonce752) {
var753 = varonce752;
} else {
var754 = "printf(\"%f\\n\", ";
var755 = 15;
var756 = string__NativeString__to_s_with_length(var754, var755);
var753 = var756;
varonce752 = var753;
}
var757 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce758) {
var759 = varonce758;
} else {
var760 = ");";
var761 = 2;
var762 = string__NativeString__to_s_with_length(var760, var761);
var759 = var762;
varonce758 = var759;
}
var763 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var763 = array_instance Array[Object] */
var764 = 3;
var765 = NEW_array__NativeArray(var764, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var765)->values[0] = (val*) var753;
((struct instance_array__NativeArray*)var765)->values[1] = (val*) var757;
((struct instance_array__NativeArray*)var765)->values[2] = (val*) var759;
((void (*)(val*, val*, long))(var763->class->vft[COLOR_array__Array__with_native]))(var763, var765, var764) /* with_native on <var763:Array[Object]>*/;
}
var766 = ((val* (*)(val*))(var763->class->vft[COLOR_string__Object__to_s]))(var763) /* to_s on <var763:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var766) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce767) {
var768 = varonce767;
} else {
var769 = "object_id";
var770 = 9;
var771 = string__NativeString__to_s_with_length(var769, var770);
var768 = var771;
varonce767 = var768;
}
var772 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var768) /* == on <var_pname:String>*/;
if (var772){
if (varonce773) {
var774 = varonce773;
} else {
var775 = "(double)";
var776 = 8;
var777 = string__NativeString__to_s_with_length(var775, var776);
var774 = var777;
varonce773 = var774;
}
var778 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var779 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var779 = array_instance Array[Object] */
var780 = 2;
var781 = NEW_array__NativeArray(var780, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var781)->values[0] = (val*) var774;
((struct instance_array__NativeArray*)var781)->values[1] = (val*) var778;
((void (*)(val*, val*, long))(var779->class->vft[COLOR_array__Array__with_native]))(var779, var781, var780) /* with_native on <var779:Array[Object]>*/;
}
var782 = ((val* (*)(val*))(var779->class->vft[COLOR_string__Object__to_s]))(var779) /* to_s on <var779:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1603);
show_backtrace(1);
}
var783 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var782, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var783) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce784) {
var785 = varonce784;
} else {
var786 = "+";
var787 = 1;
var788 = string__NativeString__to_s_with_length(var786, var787);
var785 = var788;
varonce784 = var785;
}
var789 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var785) /* == on <var_pname:String>*/;
if (var789){
var790 = 0;
var791 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var790) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce792) {
var793 = varonce792;
} else {
var794 = " + ";
var795 = 3;
var796 = string__NativeString__to_s_with_length(var794, var795);
var793 = var796;
varonce792 = var793;
}
var797 = 1;
var798 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var797) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var799 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var799 = array_instance Array[Object] */
var800 = 3;
var801 = NEW_array__NativeArray(var800, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var801)->values[0] = (val*) var791;
((struct instance_array__NativeArray*)var801)->values[1] = (val*) var793;
((struct instance_array__NativeArray*)var801)->values[2] = (val*) var798;
((void (*)(val*, val*, long))(var799->class->vft[COLOR_array__Array__with_native]))(var799, var801, var800) /* with_native on <var799:Array[Object]>*/;
}
var802 = ((val* (*)(val*))(var799->class->vft[COLOR_string__Object__to_s]))(var799) /* to_s on <var799:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1606);
show_backtrace(1);
}
var803 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var802, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var803) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce804) {
var805 = varonce804;
} else {
var806 = "-";
var807 = 1;
var808 = string__NativeString__to_s_with_length(var806, var807);
var805 = var808;
varonce804 = var805;
}
var809 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var805) /* == on <var_pname:String>*/;
if (var809){
var810 = 0;
var811 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var810) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce812) {
var813 = varonce812;
} else {
var814 = " - ";
var815 = 3;
var816 = string__NativeString__to_s_with_length(var814, var815);
var813 = var816;
varonce812 = var813;
}
var817 = 1;
var818 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var817) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var819 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var819 = array_instance Array[Object] */
var820 = 3;
var821 = NEW_array__NativeArray(var820, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var821)->values[0] = (val*) var811;
((struct instance_array__NativeArray*)var821)->values[1] = (val*) var813;
((struct instance_array__NativeArray*)var821)->values[2] = (val*) var818;
((void (*)(val*, val*, long))(var819->class->vft[COLOR_array__Array__with_native]))(var819, var821, var820) /* with_native on <var819:Array[Object]>*/;
}
var822 = ((val* (*)(val*))(var819->class->vft[COLOR_string__Object__to_s]))(var819) /* to_s on <var819:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1609);
show_backtrace(1);
}
var823 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var822, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var823) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce824) {
var825 = varonce824;
} else {
var826 = "unary -";
var827 = 7;
var828 = string__NativeString__to_s_with_length(var826, var827);
var825 = var828;
varonce824 = var825;
}
var829 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var825) /* == on <var_pname:String>*/;
if (var829){
if (varonce830) {
var831 = varonce830;
} else {
var832 = "-";
var833 = 1;
var834 = string__NativeString__to_s_with_length(var832, var833);
var831 = var834;
varonce830 = var831;
}
var835 = 0;
var836 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var835) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var837 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var837 = array_instance Array[Object] */
var838 = 2;
var839 = NEW_array__NativeArray(var838, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var839)->values[0] = (val*) var831;
((struct instance_array__NativeArray*)var839)->values[1] = (val*) var836;
((void (*)(val*, val*, long))(var837->class->vft[COLOR_array__Array__with_native]))(var837, var839, var838) /* with_native on <var837:Array[Object]>*/;
}
var840 = ((val* (*)(val*))(var837->class->vft[COLOR_string__Object__to_s]))(var837) /* to_s on <var837:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1612);
show_backtrace(1);
}
var841 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var840, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var841) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce842) {
var843 = varonce842;
} else {
var844 = "succ";
var845 = 4;
var846 = string__NativeString__to_s_with_length(var844, var845);
var843 = var846;
varonce842 = var843;
}
var847 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var843) /* == on <var_pname:String>*/;
if (var847){
var848 = 0;
var849 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var848) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce850) {
var851 = varonce850;
} else {
var852 = "+1";
var853 = 2;
var854 = string__NativeString__to_s_with_length(var852, var853);
var851 = var854;
varonce850 = var851;
}
var855 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var855 = array_instance Array[Object] */
var856 = 2;
var857 = NEW_array__NativeArray(var856, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var857)->values[0] = (val*) var849;
((struct instance_array__NativeArray*)var857)->values[1] = (val*) var851;
((void (*)(val*, val*, long))(var855->class->vft[COLOR_array__Array__with_native]))(var855, var857, var856) /* with_native on <var855:Array[Object]>*/;
}
var858 = ((val* (*)(val*))(var855->class->vft[COLOR_string__Object__to_s]))(var855) /* to_s on <var855:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1615);
show_backtrace(1);
}
var859 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var858, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var859) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce860) {
var861 = varonce860;
} else {
var862 = "prec";
var863 = 4;
var864 = string__NativeString__to_s_with_length(var862, var863);
var861 = var864;
varonce860 = var861;
}
var865 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var861) /* == on <var_pname:String>*/;
if (var865){
var866 = 0;
var867 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var866) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce868) {
var869 = varonce868;
} else {
var870 = "-1";
var871 = 2;
var872 = string__NativeString__to_s_with_length(var870, var871);
var869 = var872;
varonce868 = var869;
}
var873 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var873 = array_instance Array[Object] */
var874 = 2;
var875 = NEW_array__NativeArray(var874, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var875)->values[0] = (val*) var867;
((struct instance_array__NativeArray*)var875)->values[1] = (val*) var869;
((void (*)(val*, val*, long))(var873->class->vft[COLOR_array__Array__with_native]))(var873, var875, var874) /* with_native on <var873:Array[Object]>*/;
}
var876 = ((val* (*)(val*))(var873->class->vft[COLOR_string__Object__to_s]))(var873) /* to_s on <var873:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1618);
show_backtrace(1);
}
var877 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var876, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var877) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce878) {
var879 = varonce878;
} else {
var880 = "*";
var881 = 1;
var882 = string__NativeString__to_s_with_length(var880, var881);
var879 = var882;
varonce878 = var879;
}
var883 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var879) /* == on <var_pname:String>*/;
if (var883){
var884 = 0;
var885 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var884) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce886) {
var887 = varonce886;
} else {
var888 = " * ";
var889 = 3;
var890 = string__NativeString__to_s_with_length(var888, var889);
var887 = var890;
varonce886 = var887;
}
var891 = 1;
var892 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var891) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var893 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var893 = array_instance Array[Object] */
var894 = 3;
var895 = NEW_array__NativeArray(var894, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var895)->values[0] = (val*) var885;
((struct instance_array__NativeArray*)var895)->values[1] = (val*) var887;
((struct instance_array__NativeArray*)var895)->values[2] = (val*) var892;
((void (*)(val*, val*, long))(var893->class->vft[COLOR_array__Array__with_native]))(var893, var895, var894) /* with_native on <var893:Array[Object]>*/;
}
var896 = ((val* (*)(val*))(var893->class->vft[COLOR_string__Object__to_s]))(var893) /* to_s on <var893:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1621);
show_backtrace(1);
}
var897 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var896, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var897) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce898) {
var899 = varonce898;
} else {
var900 = "/";
var901 = 1;
var902 = string__NativeString__to_s_with_length(var900, var901);
var899 = var902;
varonce898 = var899;
}
var903 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var899) /* == on <var_pname:String>*/;
if (var903){
var904 = 0;
var905 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var904) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce906) {
var907 = varonce906;
} else {
var908 = " / ";
var909 = 3;
var910 = string__NativeString__to_s_with_length(var908, var909);
var907 = var910;
varonce906 = var907;
}
var911 = 1;
var912 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var911) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var913 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var913 = array_instance Array[Object] */
var914 = 3;
var915 = NEW_array__NativeArray(var914, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var915)->values[0] = (val*) var905;
((struct instance_array__NativeArray*)var915)->values[1] = (val*) var907;
((struct instance_array__NativeArray*)var915)->values[2] = (val*) var912;
((void (*)(val*, val*, long))(var913->class->vft[COLOR_array__Array__with_native]))(var913, var915, var914) /* with_native on <var913:Array[Object]>*/;
}
var916 = ((val* (*)(val*))(var913->class->vft[COLOR_string__Object__to_s]))(var913) /* to_s on <var913:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1624);
show_backtrace(1);
}
var917 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var916, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var917) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce918) {
var919 = varonce918;
} else {
var920 = "==";
var921 = 2;
var922 = string__NativeString__to_s_with_length(var920, var921);
var919 = var922;
varonce918 = var919;
}
var923 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var919) /* == on <var_pname:String>*/;
if (var923){
var924 = 0;
var925 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var924) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var926 = 1;
var927 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var926) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var928 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var925, var927) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var928) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce929) {
var930 = varonce929;
} else {
var931 = "!=";
var932 = 2;
var933 = string__NativeString__to_s_with_length(var931, var932);
var930 = var933;
varonce929 = var930;
}
var934 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var930) /* == on <var_pname:String>*/;
if (var934){
var935 = 0;
var936 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var935) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var937 = 1;
var938 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var937) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var939 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var936, var938) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
var_res940 = var939;
if (varonce941) {
var942 = varonce941;
} else {
var943 = "!";
var944 = 1;
var945 = string__NativeString__to_s_with_length(var943, var944);
var942 = var945;
varonce941 = var942;
}
var946 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var946 = array_instance Array[Object] */
var947 = 2;
var948 = NEW_array__NativeArray(var947, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var948)->values[0] = (val*) var942;
((struct instance_array__NativeArray*)var948)->values[1] = (val*) var_res940;
((void (*)(val*, val*, long))(var946->class->vft[COLOR_array__Array__with_native]))(var946, var948, var947) /* with_native on <var946:Array[Object]>*/;
}
var949 = ((val* (*)(val*))(var946->class->vft[COLOR_string__Object__to_s]))(var946) /* to_s on <var946:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1631);
show_backtrace(1);
}
var950 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var949, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var950) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce951) {
var952 = varonce951;
} else {
var953 = "<";
var954 = 1;
var955 = string__NativeString__to_s_with_length(var953, var954);
var952 = var955;
varonce951 = var952;
}
var956 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var952) /* == on <var_pname:String>*/;
if (var956){
var957 = 0;
var958 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var957) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce959) {
var960 = varonce959;
} else {
var961 = " < ";
var962 = 3;
var963 = string__NativeString__to_s_with_length(var961, var962);
var960 = var963;
varonce959 = var960;
}
var964 = 1;
var965 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var964) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var966 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var966 = array_instance Array[Object] */
var967 = 3;
var968 = NEW_array__NativeArray(var967, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var968)->values[0] = (val*) var958;
((struct instance_array__NativeArray*)var968)->values[1] = (val*) var960;
((struct instance_array__NativeArray*)var968)->values[2] = (val*) var965;
((void (*)(val*, val*, long))(var966->class->vft[COLOR_array__Array__with_native]))(var966, var968, var967) /* with_native on <var966:Array[Object]>*/;
}
var969 = ((val* (*)(val*))(var966->class->vft[COLOR_string__Object__to_s]))(var966) /* to_s on <var966:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var970 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var969, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var970) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce971) {
var972 = varonce971;
} else {
var973 = ">";
var974 = 1;
var975 = string__NativeString__to_s_with_length(var973, var974);
var972 = var975;
varonce971 = var972;
}
var976 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var972) /* == on <var_pname:String>*/;
if (var976){
var977 = 0;
var978 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var977) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce979) {
var980 = varonce979;
} else {
var981 = " > ";
var982 = 3;
var983 = string__NativeString__to_s_with_length(var981, var982);
var980 = var983;
varonce979 = var980;
}
var984 = 1;
var985 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var984) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var986 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var986 = array_instance Array[Object] */
var987 = 3;
var988 = NEW_array__NativeArray(var987, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var988)->values[0] = (val*) var978;
((struct instance_array__NativeArray*)var988)->values[1] = (val*) var980;
((struct instance_array__NativeArray*)var988)->values[2] = (val*) var985;
((void (*)(val*, val*, long))(var986->class->vft[COLOR_array__Array__with_native]))(var986, var988, var987) /* with_native on <var986:Array[Object]>*/;
}
var989 = ((val* (*)(val*))(var986->class->vft[COLOR_string__Object__to_s]))(var986) /* to_s on <var986:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var990 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var989, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var990) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce991) {
var992 = varonce991;
} else {
var993 = "<=";
var994 = 2;
var995 = string__NativeString__to_s_with_length(var993, var994);
var992 = var995;
varonce991 = var992;
}
var996 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var992) /* == on <var_pname:String>*/;
if (var996){
var997 = 0;
var998 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var997) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce999) {
var1000 = varonce999;
} else {
var1001 = " <= ";
var1002 = 4;
var1003 = string__NativeString__to_s_with_length(var1001, var1002);
var1000 = var1003;
varonce999 = var1000;
}
var1004 = 1;
var1005 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1004) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1006 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1006 = array_instance Array[Object] */
var1007 = 3;
var1008 = NEW_array__NativeArray(var1007, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1008)->values[0] = (val*) var998;
((struct instance_array__NativeArray*)var1008)->values[1] = (val*) var1000;
((struct instance_array__NativeArray*)var1008)->values[2] = (val*) var1005;
((void (*)(val*, val*, long))(var1006->class->vft[COLOR_array__Array__with_native]))(var1006, var1008, var1007) /* with_native on <var1006:Array[Object]>*/;
}
var1009 = ((val* (*)(val*))(var1006->class->vft[COLOR_string__Object__to_s]))(var1006) /* to_s on <var1006:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1640);
show_backtrace(1);
}
var1010 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1009, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1010) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1011) {
var1012 = varonce1011;
} else {
var1013 = ">=";
var1014 = 2;
var1015 = string__NativeString__to_s_with_length(var1013, var1014);
var1012 = var1015;
varonce1011 = var1012;
}
var1016 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1012) /* == on <var_pname:String>*/;
if (var1016){
var1017 = 0;
var1018 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1017) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1019) {
var1020 = varonce1019;
} else {
var1021 = " >= ";
var1022 = 4;
var1023 = string__NativeString__to_s_with_length(var1021, var1022);
var1020 = var1023;
varonce1019 = var1020;
}
var1024 = 1;
var1025 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1024) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1026 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1026 = array_instance Array[Object] */
var1027 = 3;
var1028 = NEW_array__NativeArray(var1027, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1028)->values[0] = (val*) var1018;
((struct instance_array__NativeArray*)var1028)->values[1] = (val*) var1020;
((struct instance_array__NativeArray*)var1028)->values[2] = (val*) var1025;
((void (*)(val*, val*, long))(var1026->class->vft[COLOR_array__Array__with_native]))(var1026, var1028, var1027) /* with_native on <var1026:Array[Object]>*/;
}
var1029 = ((val* (*)(val*))(var1026->class->vft[COLOR_string__Object__to_s]))(var1026) /* to_s on <var1026:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1643);
show_backtrace(1);
}
var1030 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1029, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1030) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1031) {
var1032 = varonce1031;
} else {
var1033 = "to_i";
var1034 = 4;
var1035 = string__NativeString__to_s_with_length(var1033, var1034);
var1032 = var1035;
varonce1031 = var1032;
}
var1036 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1032) /* == on <var_pname:String>*/;
if (var1036){
if (varonce1037) {
var1038 = varonce1037;
} else {
var1039 = "(long)";
var1040 = 6;
var1041 = string__NativeString__to_s_with_length(var1039, var1040);
var1038 = var1041;
varonce1037 = var1038;
}
var1042 = 0;
var1043 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1042) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1044 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1044 = array_instance Array[Object] */
var1045 = 2;
var1046 = NEW_array__NativeArray(var1045, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1046)->values[0] = (val*) var1038;
((struct instance_array__NativeArray*)var1046)->values[1] = (val*) var1043;
((void (*)(val*, val*, long))(var1044->class->vft[COLOR_array__Array__with_native]))(var1044, var1046, var1045) /* with_native on <var1044:Array[Object]>*/;
}
var1047 = ((val* (*)(val*))(var1044->class->vft[COLOR_string__Object__to_s]))(var1044) /* to_s on <var1044:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1646);
show_backtrace(1);
}
var1048 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1047, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1048) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (varonce1049) {
var1050 = varonce1049;
} else {
var1051 = "NativeString";
var1052 = 12;
var1053 = string__NativeString__to_s_with_length(var1051, var1052);
var1050 = var1053;
varonce1049 = var1050;
}
var1054 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var1050) /* == on <var_cname:String>*/;
if (var1054){
if (varonce1055) {
var1056 = varonce1055;
} else {
var1057 = "[]";
var1058 = 2;
var1059 = string__NativeString__to_s_with_length(var1057, var1058);
var1056 = var1059;
varonce1055 = var1056;
}
var1060 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1056) /* == on <var_pname:String>*/;
if (var1060){
var1061 = 0;
var1062 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1061) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1063) {
var1064 = varonce1063;
} else {
var1065 = "[";
var1066 = 1;
var1067 = string__NativeString__to_s_with_length(var1065, var1066);
var1064 = var1067;
varonce1063 = var1064;
}
var1068 = 1;
var1069 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1068) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1070) {
var1071 = varonce1070;
} else {
var1072 = "]";
var1073 = 1;
var1074 = string__NativeString__to_s_with_length(var1072, var1073);
var1071 = var1074;
varonce1070 = var1071;
}
var1075 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1075 = array_instance Array[Object] */
var1076 = 4;
var1077 = NEW_array__NativeArray(var1076, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1077)->values[0] = (val*) var1062;
((struct instance_array__NativeArray*)var1077)->values[1] = (val*) var1064;
((struct instance_array__NativeArray*)var1077)->values[2] = (val*) var1069;
((struct instance_array__NativeArray*)var1077)->values[3] = (val*) var1071;
((void (*)(val*, val*, long))(var1075->class->vft[COLOR_array__Array__with_native]))(var1075, var1077, var1076) /* with_native on <var1075:Array[Object]>*/;
}
var1078 = ((val* (*)(val*))(var1075->class->vft[COLOR_string__Object__to_s]))(var1075) /* to_s on <var1075:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1651);
show_backtrace(1);
}
var1079 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1078, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1079) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1080) {
var1081 = varonce1080;
} else {
var1082 = "[]=";
var1083 = 3;
var1084 = string__NativeString__to_s_with_length(var1082, var1083);
var1081 = var1084;
varonce1080 = var1081;
}
var1085 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1081) /* == on <var_pname:String>*/;
if (var1085){
var1086 = 0;
var1087 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1086) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1088) {
var1089 = varonce1088;
} else {
var1090 = "[";
var1091 = 1;
var1092 = string__NativeString__to_s_with_length(var1090, var1091);
var1089 = var1092;
varonce1088 = var1089;
}
var1093 = 1;
var1094 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1093) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1095) {
var1096 = varonce1095;
} else {
var1097 = "]=";
var1098 = 2;
var1099 = string__NativeString__to_s_with_length(var1097, var1098);
var1096 = var1099;
varonce1095 = var1096;
}
var1100 = 2;
var1101 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1100) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1102) {
var1103 = varonce1102;
} else {
var1104 = ";";
var1105 = 1;
var1106 = string__NativeString__to_s_with_length(var1104, var1105);
var1103 = var1106;
varonce1102 = var1103;
}
var1107 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1107 = array_instance Array[Object] */
var1108 = 6;
var1109 = NEW_array__NativeArray(var1108, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1109)->values[0] = (val*) var1087;
((struct instance_array__NativeArray*)var1109)->values[1] = (val*) var1089;
((struct instance_array__NativeArray*)var1109)->values[2] = (val*) var1094;
((struct instance_array__NativeArray*)var1109)->values[3] = (val*) var1096;
((struct instance_array__NativeArray*)var1109)->values[4] = (val*) var1101;
((struct instance_array__NativeArray*)var1109)->values[5] = (val*) var1103;
((void (*)(val*, val*, long))(var1107->class->vft[COLOR_array__Array__with_native]))(var1107, var1109, var1108) /* with_native on <var1107:Array[Object]>*/;
}
var1110 = ((val* (*)(val*))(var1107->class->vft[COLOR_string__Object__to_s]))(var1107) /* to_s on <var1107:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1110) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1111) {
var1112 = varonce1111;
} else {
var1113 = "copy_to";
var1114 = 7;
var1115 = string__NativeString__to_s_with_length(var1113, var1114);
var1112 = var1115;
varonce1111 = var1112;
}
var1116 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1112) /* == on <var_pname:String>*/;
if (var1116){
if (varonce1117) {
var1118 = varonce1117;
} else {
var1119 = "memcpy(";
var1120 = 7;
var1121 = string__NativeString__to_s_with_length(var1119, var1120);
var1118 = var1121;
varonce1117 = var1118;
}
var1122 = 1;
var1123 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1122) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1124) {
var1125 = varonce1124;
} else {
var1126 = "+";
var1127 = 1;
var1128 = string__NativeString__to_s_with_length(var1126, var1127);
var1125 = var1128;
varonce1124 = var1125;
}
var1129 = 4;
var1130 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1129) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1131) {
var1132 = varonce1131;
} else {
var1133 = ",";
var1134 = 1;
var1135 = string__NativeString__to_s_with_length(var1133, var1134);
var1132 = var1135;
varonce1131 = var1132;
}
var1136 = 0;
var1137 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1136) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1138) {
var1139 = varonce1138;
} else {
var1140 = "+";
var1141 = 1;
var1142 = string__NativeString__to_s_with_length(var1140, var1141);
var1139 = var1142;
varonce1138 = var1139;
}
var1143 = 3;
var1144 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1143) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1145) {
var1146 = varonce1145;
} else {
var1147 = ",";
var1148 = 1;
var1149 = string__NativeString__to_s_with_length(var1147, var1148);
var1146 = var1149;
varonce1145 = var1146;
}
var1150 = 2;
var1151 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1150) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1152) {
var1153 = varonce1152;
} else {
var1154 = ");";
var1155 = 2;
var1156 = string__NativeString__to_s_with_length(var1154, var1155);
var1153 = var1156;
varonce1152 = var1153;
}
var1157 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1157 = array_instance Array[Object] */
var1158 = 11;
var1159 = NEW_array__NativeArray(var1158, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1159)->values[0] = (val*) var1118;
((struct instance_array__NativeArray*)var1159)->values[1] = (val*) var1123;
((struct instance_array__NativeArray*)var1159)->values[2] = (val*) var1125;
((struct instance_array__NativeArray*)var1159)->values[3] = (val*) var1130;
((struct instance_array__NativeArray*)var1159)->values[4] = (val*) var1132;
((struct instance_array__NativeArray*)var1159)->values[5] = (val*) var1137;
((struct instance_array__NativeArray*)var1159)->values[6] = (val*) var1139;
((struct instance_array__NativeArray*)var1159)->values[7] = (val*) var1144;
((struct instance_array__NativeArray*)var1159)->values[8] = (val*) var1146;
((struct instance_array__NativeArray*)var1159)->values[9] = (val*) var1151;
((struct instance_array__NativeArray*)var1159)->values[10] = (val*) var1153;
((void (*)(val*, val*, long))(var1157->class->vft[COLOR_array__Array__with_native]))(var1157, var1159, var1158) /* with_native on <var1157:Array[Object]>*/;
}
var1160 = ((val* (*)(val*))(var1157->class->vft[COLOR_string__Object__to_s]))(var1157) /* to_s on <var1157:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1160) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1161) {
var1162 = varonce1161;
} else {
var1163 = "atoi";
var1164 = 4;
var1165 = string__NativeString__to_s_with_length(var1163, var1164);
var1162 = var1165;
varonce1161 = var1162;
}
var1166 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1162) /* == on <var_pname:String>*/;
if (var1166){
if (varonce1167) {
var1168 = varonce1167;
} else {
var1169 = "atoi(";
var1170 = 5;
var1171 = string__NativeString__to_s_with_length(var1169, var1170);
var1168 = var1171;
varonce1167 = var1168;
}
var1172 = 0;
var1173 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1172) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1174) {
var1175 = varonce1174;
} else {
var1176 = ");";
var1177 = 2;
var1178 = string__NativeString__to_s_with_length(var1176, var1177);
var1175 = var1178;
varonce1174 = var1175;
}
var1179 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1179 = array_instance Array[Object] */
var1180 = 3;
var1181 = NEW_array__NativeArray(var1180, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1181)->values[0] = (val*) var1168;
((struct instance_array__NativeArray*)var1181)->values[1] = (val*) var1173;
((struct instance_array__NativeArray*)var1181)->values[2] = (val*) var1175;
((void (*)(val*, val*, long))(var1179->class->vft[COLOR_array__Array__with_native]))(var1179, var1181, var1180) /* with_native on <var1179:Array[Object]>*/;
}
var1182 = ((val* (*)(val*))(var1179->class->vft[COLOR_string__Object__to_s]))(var1179) /* to_s on <var1179:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1660);
show_backtrace(1);
}
var1183 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1182, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1183) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (varonce1184) {
var1185 = varonce1184;
} else {
var1186 = "NativeArray";
var1187 = 11;
var1188 = string__NativeString__to_s_with_length(var1186, var1187);
var1185 = var1188;
varonce1184 = var1185;
}
var1189 = ((short int (*)(val*, val*))(var_cname->class->vft[COLOR_kernel__Object___61d_61d]))(var_cname, var1185) /* == on <var_cname:String>*/;
if (var1189){
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__native_array_def]))(var_v, var_pname, var_ret, var_arguments) /* native_array_def on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
}
}
}
if (varonce1190) {
var1191 = varonce1190;
} else {
var1192 = "exit";
var1193 = 4;
var1194 = string__NativeString__to_s_with_length(var1192, var1193);
var1191 = var1194;
varonce1190 = var1191;
}
var1195 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1191) /* == on <var_pname:String>*/;
if (var1195){
if (varonce1196) {
var1197 = varonce1196;
} else {
var1198 = "exit(";
var1199 = 5;
var1200 = string__NativeString__to_s_with_length(var1198, var1199);
var1197 = var1200;
varonce1196 = var1197;
}
var1201 = 1;
var1202 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1201) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1203) {
var1204 = varonce1203;
} else {
var1205 = ");";
var1206 = 2;
var1207 = string__NativeString__to_s_with_length(var1205, var1206);
var1204 = var1207;
varonce1203 = var1204;
}
var1208 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1208 = array_instance Array[Object] */
var1209 = 3;
var1210 = NEW_array__NativeArray(var1209, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1210)->values[0] = (val*) var1197;
((struct instance_array__NativeArray*)var1210)->values[1] = (val*) var1202;
((struct instance_array__NativeArray*)var1210)->values[2] = (val*) var1204;
((void (*)(val*, val*, long))(var1208->class->vft[COLOR_array__Array__with_native]))(var1208, var1210, var1209) /* with_native on <var1208:Array[Object]>*/;
}
var1211 = ((val* (*)(val*))(var1208->class->vft[COLOR_string__Object__to_s]))(var1208) /* to_s on <var1208:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1211) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1212) {
var1213 = varonce1212;
} else {
var1214 = "sys";
var1215 = 3;
var1216 = string__NativeString__to_s_with_length(var1214, var1215);
var1213 = var1216;
varonce1212 = var1213;
}
var1217 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1213) /* == on <var_pname:String>*/;
if (var1217){
if (varonce1218) {
var1219 = varonce1218;
} else {
var1220 = "glob_sys";
var1221 = 8;
var1222 = string__NativeString__to_s_with_length(var1220, var1221);
var1219 = var1222;
varonce1218 = var1219;
}
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1671);
show_backtrace(1);
}
var1223 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1219, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1223) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1224) {
var1225 = varonce1224;
} else {
var1226 = "calloc_string";
var1227 = 13;
var1228 = string__NativeString__to_s_with_length(var1226, var1227);
var1225 = var1228;
varonce1224 = var1225;
}
var1229 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1225) /* == on <var_pname:String>*/;
if (var1229){
if (varonce1230) {
var1231 = varonce1230;
} else {
var1232 = "(char*)nit_alloc(";
var1233 = 17;
var1234 = string__NativeString__to_s_with_length(var1232, var1233);
var1231 = var1234;
varonce1230 = var1231;
}
var1235 = 1;
var1236 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1235) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1237) {
var1238 = varonce1237;
} else {
var1239 = ")";
var1240 = 1;
var1241 = string__NativeString__to_s_with_length(var1239, var1240);
var1238 = var1241;
varonce1237 = var1238;
}
var1242 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1242 = array_instance Array[Object] */
var1243 = 3;
var1244 = NEW_array__NativeArray(var1243, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1244)->values[0] = (val*) var1231;
((struct instance_array__NativeArray*)var1244)->values[1] = (val*) var1236;
((struct instance_array__NativeArray*)var1244)->values[2] = (val*) var1238;
((void (*)(val*, val*, long))(var1242->class->vft[COLOR_array__Array__with_native]))(var1242, var1244, var1243) /* with_native on <var1242:Array[Object]>*/;
}
var1245 = ((val* (*)(val*))(var1242->class->vft[COLOR_string__Object__to_s]))(var1242) /* to_s on <var1242:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1674);
show_backtrace(1);
}
var1246 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1245, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1246) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1247) {
var1248 = varonce1247;
} else {
var1249 = "calloc_array";
var1250 = 12;
var1251 = string__NativeString__to_s_with_length(var1249, var1250);
var1248 = var1251;
varonce1247 = var1248;
}
var1252 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1248) /* == on <var_pname:String>*/;
if (var1252){
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1677);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__calloc_array]))(var_v, var_ret, var_arguments) /* calloc_array on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1253) {
var1254 = varonce1253;
} else {
var1255 = "object_id";
var1256 = 9;
var1257 = string__NativeString__to_s_with_length(var1255, var1256);
var1254 = var1257;
varonce1253 = var1254;
}
var1258 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1254) /* == on <var_pname:String>*/;
if (var1258){
if (varonce1259) {
var1260 = varonce1259;
} else {
var1261 = "(long)";
var1262 = 6;
var1263 = string__NativeString__to_s_with_length(var1261, var1262);
var1260 = var1263;
varonce1259 = var1260;
}
var1264 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var1265 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1265 = array_instance Array[Object] */
var1266 = 2;
var1267 = NEW_array__NativeArray(var1266, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1267)->values[0] = (val*) var1260;
((struct instance_array__NativeArray*)var1267)->values[1] = (val*) var1264;
((void (*)(val*, val*, long))(var1265->class->vft[COLOR_array__Array__with_native]))(var1265, var1267, var1266) /* with_native on <var1265:Array[Object]>*/;
}
var1268 = ((val* (*)(val*))(var1265->class->vft[COLOR_string__Object__to_s]))(var1265) /* to_s on <var1265:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1680);
show_backtrace(1);
}
var1269 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1268, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1269) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1270) {
var1271 = varonce1270;
} else {
var1272 = "is_same_type";
var1273 = 12;
var1274 = string__NativeString__to_s_with_length(var1272, var1273);
var1271 = var1274;
varonce1270 = var1271;
}
var1275 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1271) /* == on <var_pname:String>*/;
if (var1275){
var1276 = 0;
var1277 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1276) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1278 = 1;
var1279 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1278) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1280 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__is_same_type_test]))(var_v, var1277, var1279) /* is_same_type_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1280) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1281) {
var1282 = varonce1281;
} else {
var1283 = "is_same_instance";
var1284 = 16;
var1285 = string__NativeString__to_s_with_length(var1283, var1284);
var1282 = var1285;
varonce1281 = var1282;
}
var1286 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1282) /* == on <var_pname:String>*/;
if (var1286){
var1287 = 0;
var1288 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1287) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1289 = 1;
var1290 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1289) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var1291 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var1288, var1290) /* equal_test on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1291) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1292) {
var1293 = varonce1292;
} else {
var1294 = "output_class_name";
var1295 = 17;
var1296 = string__NativeString__to_s_with_length(var1294, var1295);
var1293 = var1296;
varonce1292 = var1293;
}
var1297 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1293) /* == on <var_pname:String>*/;
if (var1297){
var1298 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var1299 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1298) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
var_nat = var1299;
if (varonce1300) {
var1301 = varonce1300;
} else {
var1302 = "printf(\"%s\\n\", ";
var1303 = 15;
var1304 = string__NativeString__to_s_with_length(var1302, var1303);
var1301 = var1304;
varonce1300 = var1301;
}
if (varonce1305) {
var1306 = varonce1305;
} else {
var1307 = ");";
var1308 = 2;
var1309 = string__NativeString__to_s_with_length(var1307, var1308);
var1306 = var1309;
varonce1305 = var1306;
}
var1310 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1310 = array_instance Array[Object] */
var1311 = 3;
var1312 = NEW_array__NativeArray(var1311, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1312)->values[0] = (val*) var1301;
((struct instance_array__NativeArray*)var1312)->values[1] = (val*) var_nat;
((struct instance_array__NativeArray*)var1312)->values[2] = (val*) var1306;
((void (*)(val*, val*, long))(var1310->class->vft[COLOR_array__Array__with_native]))(var1310, var1312, var1311) /* with_native on <var1310:Array[Object]>*/;
}
var1313 = ((val* (*)(val*))(var1310->class->vft[COLOR_string__Object__to_s]))(var1310) /* to_s on <var1310:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1313) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1314) {
var1315 = varonce1314;
} else {
var1316 = "native_class_name";
var1317 = 17;
var1318 = string__NativeString__to_s_with_length(var1316, var1317);
var1315 = var1318;
varonce1314 = var1315;
}
var1319 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1315) /* == on <var_pname:String>*/;
if (var1319){
var1320 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var1321 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var1320) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
var_nat1322 = var1321;
if (varonce1323) {
var1324 = varonce1323;
} else {
var1325 = "(char*)";
var1326 = 7;
var1327 = string__NativeString__to_s_with_length(var1325, var1326);
var1324 = var1327;
varonce1323 = var1324;
}
var1328 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1328 = array_instance Array[Object] */
var1329 = 2;
var1330 = NEW_array__NativeArray(var1329, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1330)->values[0] = (val*) var1324;
((struct instance_array__NativeArray*)var1330)->values[1] = (val*) var_nat1322;
((void (*)(val*, val*, long))(var1328->class->vft[COLOR_array__Array__with_native]))(var1328, var1330, var1329) /* with_native on <var1328:Array[Object]>*/;
}
var1331 = ((val* (*)(val*))(var1328->class->vft[COLOR_string__Object__to_s]))(var1328) /* to_s on <var1328:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1694);
show_backtrace(1);
}
var1332 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1331, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1332) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1333) {
var1334 = varonce1333;
} else {
var1335 = "force_garbage_collection";
var1336 = 24;
var1337 = string__NativeString__to_s_with_length(var1335, var1336);
var1334 = var1337;
varonce1333 = var1334;
}
var1338 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1334) /* == on <var_pname:String>*/;
if (var1338){
if (varonce1339) {
var1340 = varonce1339;
} else {
var1341 = "nit_gcollect();";
var1342 = 15;
var1343 = string__NativeString__to_s_with_length(var1341, var1342);
var1340 = var1343;
varonce1339 = var1340;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1340) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1344) {
var1345 = varonce1344;
} else {
var1346 = "native_argc";
var1347 = 11;
var1348 = string__NativeString__to_s_with_length(var1346, var1347);
var1345 = var1348;
varonce1344 = var1345;
}
var1349 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1345) /* == on <var_pname:String>*/;
if (var1349){
if (varonce1350) {
var1351 = varonce1350;
} else {
var1352 = "glob_argc";
var1353 = 9;
var1354 = string__NativeString__to_s_with_length(var1352, var1353);
var1351 = var1354;
varonce1350 = var1351;
}
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1700);
show_backtrace(1);
}
var1355 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1351, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1355) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce1356) {
var1357 = varonce1356;
} else {
var1358 = "native_argv";
var1359 = 11;
var1360 = string__NativeString__to_s_with_length(var1358, var1359);
var1357 = var1360;
varonce1356 = var1357;
}
var1361 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var1357) /* == on <var_pname:String>*/;
if (var1361){
if (varonce1362) {
var1363 = varonce1362;
} else {
var1364 = "glob_argv[";
var1365 = 10;
var1366 = string__NativeString__to_s_with_length(var1364, var1365);
var1363 = var1366;
varonce1362 = var1363;
}
var1367 = 1;
var1368 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var1367) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce1369) {
var1370 = varonce1369;
} else {
var1371 = "]";
var1372 = 1;
var1373 = string__NativeString__to_s_with_length(var1371, var1372);
var1370 = var1373;
varonce1369 = var1370;
}
var1374 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1374 = array_instance Array[Object] */
var1375 = 3;
var1376 = NEW_array__NativeArray(var1375, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1376)->values[0] = (val*) var1363;
((struct instance_array__NativeArray*)var1376)->values[1] = (val*) var1368;
((struct instance_array__NativeArray*)var1376)->values[2] = (val*) var1370;
((void (*)(val*, val*, long))(var1374->class->vft[COLOR_array__Array__with_native]))(var1374, var1376, var1375) /* with_native on <var1374:Array[Object]>*/;
}
var1377 = ((val* (*)(val*))(var1374->class->vft[COLOR_string__Object__to_s]))(var1374) /* to_s on <var1374:Array[Object]>*/;
if (var_ret == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1703);
show_backtrace(1);
}
var1378 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1377, var_ret) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var1378) /* ret on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
if (varonce1379) {
var1380 = varonce1379;
} else {
var1381 = "printf(\"NOT YET IMPLEMENTED ";
var1382 = 28;
var1383 = string__NativeString__to_s_with_length(var1381, var1382);
var1380 = var1383;
varonce1379 = var1380;
}
var1384 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__class_name]))(self) /* class_name on <self:AInternMethPropdef>*/;
if (varonce1385) {
var1386 = varonce1385;
} else {
var1387 = ":";
var1388 = 1;
var1389 = string__NativeString__to_s_with_length(var1387, var1388);
var1386 = var1389;
varonce1385 = var1386;
}
if (varonce1390) {
var1391 = varonce1390;
} else {
var1392 = " at ";
var1393 = 4;
var1394 = string__NativeString__to_s_with_length(var1392, var1393);
var1391 = var1394;
varonce1390 = var1391;
}
var1395 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AInternMethPropdef>*/;
var1396 = ((val* (*)(val*))(var1395->class->vft[COLOR_string__Object__to_s]))(var1395) /* to_s on <var1395:Location>*/;
if (varonce1397) {
var1398 = varonce1397;
} else {
var1399 = "\\n\");";
var1400 = 5;
var1401 = string__NativeString__to_s_with_length(var1399, var1400);
var1398 = var1401;
varonce1397 = var1398;
}
var1402 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1402 = array_instance Array[Object] */
var1403 = 7;
var1404 = NEW_array__NativeArray(var1403, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1404)->values[0] = (val*) var1380;
((struct instance_array__NativeArray*)var1404)->values[1] = (val*) var1384;
((struct instance_array__NativeArray*)var1404)->values[2] = (val*) var1386;
((struct instance_array__NativeArray*)var1404)->values[3] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var1404)->values[4] = (val*) var1391;
((struct instance_array__NativeArray*)var1404)->values[5] = (val*) var1396;
((struct instance_array__NativeArray*)var1404)->values[6] = (val*) var1398;
((void (*)(val*, val*, long))(var1402->class->vft[COLOR_array__Array__with_native]))(var1402, var1404, var1403) /* with_native on <var1402:Array[Object]>*/;
}
var1405 = ((val* (*)(val*))(var1402->class->vft[COLOR_string__Object__to_s]))(var1402) /* to_s on <var1402:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var1405) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce1406) {
var1407 = varonce1406;
} else {
var1408 = "Not implemented ";
var1409 = 16;
var1410 = string__NativeString__to_s_with_length(var1408, var1409);
var1407 = var1410;
varonce1406 = var1407;
}
var1411 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var1411 = array_instance Array[Object] */
var1412 = 2;
var1413 = NEW_array__NativeArray(var1412, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var1413)->values[0] = (val*) var1407;
((struct instance_array__NativeArray*)var1413)->values[1] = (val*) var_mpropdef;
((void (*)(val*, val*, long))(var1411->class->vft[COLOR_array__Array__with_native]))(var1411, var1413, var1412) /* with_native on <var1411:Array[Object]>*/;
}
var1414 = ((val* (*)(val*))(var1411->class->vft[COLOR_string__Object__to_s]))(var1411) /* to_s on <var1411:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__debug]))(self, var1414) /* debug on <self:AInternMethPropdef>*/;
RET_LABEL:;
}
/* method abstract_compiler#AInternMethPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AInternMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AInternMethPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AExternMethPropdef#compile_to_c for (self: AExternMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AExternMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable TString */;
val* var_nextern /* var nextern: nullable TString */;
val* var1 /* : null */;
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
val* var12 /* : Location */;
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
val* var28 /* : String */;
long var29 /* : Int */;
val* var30 /* : String */;
long var31 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var_externname /* var externname: nullable Object */;
val* var37 /* : Location */;
val* var38 /* : nullable SourceFile */;
val* var39 /* : null */;
short int var40 /* : Bool */;
val* var41 /* : Location */;
val* var42 /* : nullable SourceFile */;
val* var43 /* : String */;
val* var_file /* var file: String */;
val* var44 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var45 /* : nullable MSignature */;
val* var46 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var47 /* : null */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var50 /* : MType */;
val* var51 /* : RuntimeVariable */;
val* var52 /* : null */;
short int var53 /* : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
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
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
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
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern]))(self) /* n_extern on <self:AExternMethPropdef>*/;
var_nextern = var;
var1 = NULL;
if (var_nextern == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "fprintf(stderr, \"NOT YET IMPLEMENTED nitni for ";
var5 = 47;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
if (varonce7) {
var8 = varonce7;
} else {
var9 = " at ";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternMethPropdef>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_string__Object__to_s]))(var12) /* to_s on <var12:Location>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "\\n\");";
var17 = 5;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 5;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var8;
((struct instance_array__NativeArray*)var21)->values[3] = (val*) var13;
((struct instance_array__NativeArray*)var21)->values[4] = (val*) var15;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "show_backtrace(1);";
var26 = 18;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var24) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
var28 = ((val* (*)(val*))(var_nextern->class->vft[COLOR_parser_nodes__Token__text]))(var_nextern) /* text on <var_nextern:nullable TString(TString)>*/;
var29 = 1;
var30 = ((val* (*)(val*))(var_nextern->class->vft[COLOR_parser_nodes__Token__text]))(var_nextern) /* text on <var_nextern:nullable TString(TString)>*/;
var31 = ((long (*)(val*))(var30->class->vft[COLOR_abstract_collection__Collection__length]))(var30) /* length on <var30:String>*/;
var32 = 2;
{ /* Inline kernel#Int#- (var31,var32) */
var35 = var31 - var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var36 = ((val* (*)(val*, long, long))(var28->class->vft[COLOR_string__AbstractString__substring]))(var28, var29, var33) /* substring on <var28:String>*/;
var_externname = var36;
var37 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternMethPropdef>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_location__Location__file]))(var37) /* file on <var37:Location>*/;
var39 = NULL;
if (var38 == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (var40){
var41 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternMethPropdef>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_location__Location__file]))(var41) /* file on <var41:Location>*/;
if (var42 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1723);
show_backtrace(1);
} else {
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_location__SourceFile__filename]))(var42) /* filename on <var42:nullable SourceFile>*/;
}
var_file = var43;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_extern]))(var_v, var_file) /* add_extern on <var_v:AbstractCompilerVisitor>*/;
} else {
}
var44 = NULL;
var_res = var44;
var45 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var45 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1727);
show_backtrace(1);
} else {
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_model__MSignature__return_mtype]))(var45) /* return_mtype on <var45:nullable MSignature>*/;
}
var_ret = var46;
var47 = NULL;
if (var_ret == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (var48){
var49 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var50 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(var_v, var_ret, var49) /* resolve_for on <var_v:AbstractCompilerVisitor>*/;
var_ret = var50;
var51 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_ret) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var51;
} else {
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments) /* adapt_signature on <var_v:AbstractCompilerVisitor>*/;
var52 = NULL;
if (var_res == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (var53){
if (varonce54) {
var55 = varonce54;
} else {
var56 = "(";
var57 = 1;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = ", ";
var62 = 2;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var60) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = ");";
var68 = 2;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 4;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var_externname;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var55;
((struct instance_array__NativeArray*)var72)->values[2] = (val*) var64;
((struct instance_array__NativeArray*)var72)->values[3] = (val*) var66;
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var73) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
if (varonce74) {
var75 = varonce74;
} else {
var76 = " = ";
var77 = 3;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "(";
var82 = 1;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = ", ";
var87 = 2;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var85) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce90) {
var91 = varonce90;
} else {
var92 = ");";
var93 = 2;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var95 = array_instance Array[Object] */
var96 = 6;
var97 = NEW_array__NativeArray(var96, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var97)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var97)->values[1] = (val*) var75;
((struct instance_array__NativeArray*)var97)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var97)->values[3] = (val*) var80;
((struct instance_array__NativeArray*)var97)->values[4] = (val*) var89;
((struct instance_array__NativeArray*)var97)->values[5] = (val*) var91;
((void (*)(val*, val*, long))(var95->class->vft[COLOR_array__Array__with_native]))(var95, var97, var96) /* with_native on <var95:Array[Object]>*/;
}
var98 = ((val* (*)(val*))(var95->class->vft[COLOR_string__Object__to_s]))(var95) /* to_s on <var95:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var98) /* add on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var_res) /* ret on <var_v:AbstractCompilerVisitor>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#AExternMethPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AExternMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AExternMethPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
