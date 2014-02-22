#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AExternInitPropdef#compile_to_c for (self: AExternInitPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AExternInitPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
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
val* var44 /* : nullable Object */;
val* var45 /* : MType */;
val* var_ret /* var ret: MType */;
val* var46 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var47 /* : nullable Object */;
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
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
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
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern]))(self) /* n_extern on <self:AExternInitPropdef>*/;
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
var4 = "printf(\"NOT YET IMPLEMENTED nitni for ";
var5 = 38;
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
var12 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternInitPropdef>*/;
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
var37 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternInitPropdef>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_location__Location__file]))(var37) /* file on <var37:Location>*/;
var39 = NULL;
if (var38 == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (var40){
var41 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExternInitPropdef>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_location__Location__file]))(var41) /* file on <var41:Location>*/;
if (var42 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1755);
show_backtrace(1);
} else {
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_location__SourceFile__filename]))(var42) /* filename on <var42:nullable SourceFile>*/;
}
var_file = var43;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_extern]))(var_v, var_file) /* add_extern on <var_v:AbstractCompilerVisitor>*/;
} else {
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments) /* adapt_signature on <var_v:AbstractCompilerVisitor>*/;
var44 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var44) /* mtype on <var44:nullable Object(RuntimeVariable)>*/;
var_ret = var45;
var46 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_ret) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var46;
var47 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Sequence__shift]))(var_arguments) /* shift on <var_arguments:Array[RuntimeVariable]>*/;
var47;
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
var55 = "(";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = ", ";
var61 = 2;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var59) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce64) {
var65 = varonce64;
} else {
var66 = ");";
var67 = 2;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 6;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var49;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var_externname;
((struct instance_array__NativeArray*)var71)->values[3] = (val*) var54;
((struct instance_array__NativeArray*)var71)->values[4] = (val*) var63;
((struct instance_array__NativeArray*)var71)->values[5] = (val*) var65;
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var72) /* add on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(var_v, var_res) /* ret on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AExternInitPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AExternInitPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AExternInitPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#compile_to_c for (self: AAttrPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AAttrPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable MPropDef */;
val* var6 /* : MProperty */;
val* var7 /* : nullable Object */;
val* var8 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var9 /* : nullable Frame */;
val* var10 /* : nullable RuntimeVariable */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : MProperty */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
val* var15 /* : nullable Object */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
var1 = 1;
{ /* Inline kernel#Int#== (var,var1) */
var4 = var == var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1773);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MPropDef__mproperty]))(var5) /* mproperty on <var5:nullable MPropDef(nullable MAttributeDef)>*/;
}
var7 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var8 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var6, var7) /* read_attribute on <var_v:AbstractCompilerVisitor>*/;
var_res = var8;
var9 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1774);
show_backtrace(1);
} else {
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_compiler__Frame__returnvar]))(var9) /* returnvar on <var9:nullable Frame>*/;
}
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1774);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var10, var_res) /* assign on <var_v:AbstractCompilerVisitor>*/;
} else {
var11 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1776);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MPropDef__mproperty]))(var11) /* mproperty on <var11:nullable MPropDef(nullable MAttributeDef)>*/;
}
var13 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var14 = 1;
var15 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var14) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var12, var13, var15) /* write_attribute on <var_v:AbstractCompilerVisitor>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AAttrPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AAttrPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#init_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AAttrPropdef__init_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var4 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
val* var5 /* : Frame */;
val* var6 /* : nullable MPropDef */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var9 /* : Array[RuntimeVariable] */;
long var10 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: Frame */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : nullable MType */;
val* var13 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var14 /* : nullable MPropDef */;
val* var15 /* : MProperty */;
var_v = p0;
var_recv = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_expr]))(self) /* n_expr on <self:AAttrPropdef>*/;
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(var_v) /* current_node on <var_v:AbstractCompilerVisitor>*/;
var_oldnode = var3;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, self) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
var_old_frame = var4;
var5 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
var6 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1787);
show_backtrace(1);
}
var7 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_recv) /* mtype on <var_recv:RuntimeVariable>*/;
/* <var7:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (!var8) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1787);
show_backtrace(1);
}
var9 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var10 = 1;
((void (*)(val*, long))(var9->class->vft[COLOR_array__Array__with_capacity]))(var9, var10) /* with_capacity on <var9:Array[RuntimeVariable]>*/;
var_ = var9;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_recv) /* push on <var_:Array[RuntimeVariable]>*/;
((void (*)(val*, val*, val*, val*, val*))(var5->class->vft[COLOR_abstract_compiler__Frame__init]))(var5, var_v, var6, var7, var_) /* init on <var5:Frame>*/;
var_frame = var5;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_frame) /* frame= on <var_v:AbstractCompilerVisitor>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1789);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var11) /* static_mtype on <var11:nullable MPropDef(nullable MAttributeDef)>*/;
}
var13 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_nexpr, var12) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_value = var13;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1790);
show_backtrace(1);
} else {
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_model__MPropDef__mproperty]))(var14) /* mproperty on <var14:nullable MPropDef(nullable MAttributeDef)>*/;
}
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var15, var_recv, var_value) /* write_attribute on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_old_frame) /* frame= on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_oldnode) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#init_expr for (self: Object, AbstractCompilerVisitor, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AAttrPropdef__init_expr(val* self, val* p0, val* p1) {
abstract_compiler__AAttrPropdef__init_expr(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#check_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AAttrPropdef__check_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var4 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
val* var5 /* : Frame */;
val* var6 /* : nullable MPropDef */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var9 /* : Array[RuntimeVariable] */;
long var10 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: Frame */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : MProperty */;
val* var13 /* : RuntimeVariable */;
var_v = p0;
var_recv = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_expr]))(self) /* n_expr on <self:AAttrPropdef>*/;
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(var_v) /* current_node on <var_v:AbstractCompilerVisitor>*/;
var_oldnode = var3;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, self) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
var_old_frame = var4;
var5 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
var6 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1804);
show_backtrace(1);
}
var7 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_recv) /* mtype on <var_recv:RuntimeVariable>*/;
/* <var7:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (!var8) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1804);
show_backtrace(1);
}
var9 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var10 = 1;
((void (*)(val*, long))(var9->class->vft[COLOR_array__Array__with_capacity]))(var9, var10) /* with_capacity on <var9:Array[RuntimeVariable]>*/;
var_ = var9;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_recv) /* push on <var_:Array[RuntimeVariable]>*/;
((void (*)(val*, val*, val*, val*, val*))(var5->class->vft[COLOR_abstract_compiler__Frame__init]))(var5, var_v, var6, var7, var_) /* init on <var5:Frame>*/;
var_frame = var5;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_frame) /* frame= on <var_v:AbstractCompilerVisitor>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1807);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MPropDef__mproperty]))(var11) /* mproperty on <var11:nullable MPropDef(nullable MAttributeDef)>*/;
}
var13 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var12, var_recv) /* read_attribute on <var_v:AbstractCompilerVisitor>*/;
var13;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_old_frame) /* frame= on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_oldnode) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#check_expr for (self: Object, AbstractCompilerVisitor, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AAttrPropdef__check_expr(val* self, val* p0, val* p1) {
abstract_compiler__AAttrPropdef__check_expr(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AClassdef#compile_to_c for (self: AClassdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AClassdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable MMethodDef */;
short int var1 /* : Bool */;
val* var2 /* : nullable Collection[MMethod] */;
val* var_super_inits /* var super_inits: nullable Collection[MMethod] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_su /* var su: MMethod */;
val* var13 /* : nullable RuntimeVariable */;
val* var14 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
long var15 /* : Int */;
long var_i /* var i: Int */;
val* var16 /* : ANodes[APropdef] */;
val* var17 /* : Iterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var22 /* : nullable AExpr */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : nullable MPropDef */;
val* var26 /* : MProperty */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
long var29 /* : Int */;
long var31 /* : Int */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__AClassdef__mfree_init]))(self) /* mfree_init on <self:AClassdef>*/;
var1 = ((short int (*)(val*, val*))(var_mpropdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mpropdef, var) /* == on <var_mpropdef:MMethodDef>*/;
if (var1){
var2 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__AClassdef__super_inits]))(self) /* super_inits on <self:AClassdef>*/;
var_super_inits = var2;
var3 = NULL;
if (var_super_inits == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[RuntimeVariable]>*/;
var6 = 1;
{ /* Inline kernel#Int#== (var5,var6) */
var9 = var5 == var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1819);
show_backtrace(1);
}
var10 = ((val* (*)(val*))(var_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_super_inits) /* iterator on <var_super_inits:nullable Collection[MMethod](Collection[MMethod])>*/;
for(;;) {
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
if(!var11) break;
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
var_su = var12;
var13 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_su, var_arguments) /* send on <var_v:AbstractCompilerVisitor>*/;
var13;
CONTINUE_label: (void)0;
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
goto RET_LABEL;
} else {
}
var14 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var_recv = var14;
var15 = 1;
var_i = var15;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(self) /* n_propdefs on <self:AClassdef>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__iterator]))(var16) /* iterator on <var16:ANodes[APropdef]>*/;
for(;;) {
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var17) /* is_ok on <var17:Iterator[nullable Object]>*/;
if(!var18) break;
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__item]))(var17) /* item on <var17:Iterator[nullable Object]>*/;
var_npropdef = var19;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype = type_parser_nodes__AAttrPropdef.color;
idtype = type_parser_nodes__AAttrPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var21 = 0;
} else {
var21 = var_npropdef->type->type_table[cltype] == idtype;
}
var_ = var21;
if (var21){
var22 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AAttrPropdef__n_expr]))(var_npropdef) /* n_expr on <var_npropdef:APropdef(AAttrPropdef)>*/;
var23 = NULL;
if (var22 == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
var20 = var24;
} else {
var20 = var_;
}
if (var20){
var25 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/;
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1830);
show_backtrace(1);
} else {
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_model__MPropDef__mproperty]))(var25) /* mproperty on <var25:nullable MPropDef(nullable MAttributeDef)>*/;
}
var27 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_i) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var26, var_recv, var27) /* write_attribute on <var_v:AbstractCompilerVisitor>*/;
var28 = 1;
{ /* Inline kernel#Int#+ (var_i,var28) */
var31 = var_i + var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var_i = var29;
} else {
}
CONTINUE_label32: (void)0;
((void (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__next]))(var17) /* next on <var17:Iterator[nullable Object]>*/;
}
BREAK_label32: (void)0;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1835);
show_backtrace(1);
}
RET_LABEL:;
}
/* method abstract_compiler#AClassdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AClassdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AClassdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#ADeferredMethPropdef#compile_to_c for (self: ADeferredMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__ADeferredMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable Object */;
val* var1 /* : String */;
val* var_cn /* var cn: String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : MProperty */;
val* var7 /* : String */;
val* var8 /* : String */;
static val* varonce9;
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
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
var_cn = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "fprintf(stderr, \"Runtime error: Abstract method `%s` called on `%s`\", \"";
var4 = 71;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_model__MProperty__name]))(var6) /* name on <var6:MProperty(MMethod)>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_string__AbstractString__escape_to_c]))(var7) /* escape_to_c on <var7:String>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "\", ";
var12 = 3;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = ");";
var17 = 2;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 5;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var2;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var8;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var10;
((struct instance_array__NativeArray*)var21)->values[3] = (val*) var_cn;
((struct instance_array__NativeArray*)var21)->values[4] = (val*) var15;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_raw_abort]))(var_v) /* add_raw_abort on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#ADeferredMethPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__ADeferredMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__ADeferredMethPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#ADeferredMethPropdef#can_inline for (self: ADeferredMethPropdef): Bool */
short int abstract_compiler__ADeferredMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADeferredMethPropdef#can_inline for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__ADeferredMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__ADeferredMethPropdef__can_inline(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AExpr#expr for (self: AExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
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
val* var11 /* : Location */;
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
val* var22 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : null */;
val* var26 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "printf(\"NOT YET IMPLEMENTED ";
var3 = 28;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__class_name]))(self) /* class_name on <self:AExpr>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = ":";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AExpr>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Location>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "\\n\");";
var16 = 5;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 5;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var7;
((struct instance_array__NativeArray*)var20)->values[3] = (val*) var12;
((struct instance_array__NativeArray*)var20)->values[4] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var21) /* add on <var_v:AbstractCompilerVisitor>*/;
var22 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
var_mtype = var22;
var23 = NULL;
if (var_mtype == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (var24){
var25 = NULL;
var = var25;
goto RET_LABEL;
} else {
var26 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_mtype) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var26;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "/* ";
var30 = 3;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = " = NOT YET ";
var35 = 11;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__class_name]))(self) /* class_name on <self:AExpr>*/;
if (varonce38) {
var39 = varonce38;
} else {
var40 = " */";
var41 = 3;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 5;
var45 = NEW_array__NativeArray(var44, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var45)->values[0] = (val*) var28;
((struct instance_array__NativeArray*)var45)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var45)->values[2] = (val*) var33;
((struct instance_array__NativeArray*)var45)->values[3] = (val*) var37;
((struct instance_array__NativeArray*)var45)->values[4] = (val*) var39;
((void (*)(val*, val*, long))(var43->class->vft[COLOR_array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
var46 = ((val* (*)(val*))(var43->class->vft[COLOR_string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var46) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AExpr#stmt for (self: AExpr, AbstractCompilerVisitor) */
void abstract_compiler__AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
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
var_v = p0;
var = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AExpr__expr]))(self, var_v) /* expr on <self:AExpr>*/;
var_res = var;
var1 = NULL;
if (var_res == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = ";";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var3;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var10) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AExpr__stmt(val* self, val* p0) {
abstract_compiler__AExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#stmt for (self: ABlockExpr, AbstractCompilerVisitor) */
void abstract_compiler__ABlockExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : ANodes[AExpr] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_e /* var e: AExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(self) /* n_expr on <self:ABlockExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[AExpr]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_e = var3;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var_e) /* stmt on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ABlockExpr__stmt(val* self, val* p0) {
abstract_compiler__ABlockExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#expr for (self: ABlockExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ABlockExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : ANodes[AExpr] */;
val* var2 /* : nullable Object */;
val* var_last /* var last: AExpr */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var7 /* : Bool */;
val* var8 /* : null */;
val* var9 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(self) /* n_expr on <self:ABlockExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var1) /* last on <var1:ANodes[AExpr]>*/;
var_last = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(self) /* n_expr on <self:ABlockExpr>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:ANodes[AExpr]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_e = var6;
var7 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___61d_61d]))(var_e, var_last) /* == on <var_e:AExpr>*/;
if (var7){
goto BREAK_label;
} else {
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var_e) /* stmt on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var8 = NULL;
var9 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_last, var8) /* expr on <var_v:AbstractCompilerVisitor>*/;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ABlockExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ABlockExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ABlockExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVardeclExpr#stmt for (self: AVardeclExpr, AbstractCompilerVisitor) */
void abstract_compiler__AVardeclExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : nullable AExpr */;
val* var_ne /* var ne: nullable AExpr */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable MType */;
val* var5 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var6 /* : RuntimeVariable */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVardeclExpr__variable]))(self) /* variable on <self:AVardeclExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1893);
show_backtrace(1);
}
var_variable = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AVardeclExpr__n_expr]))(self) /* n_expr on <self:AVardeclExpr>*/;
var_ne = var1;
var2 = NULL;
if (var_ne == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
var5 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_ne, var4) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var5;
var6 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var6, var_i) /* assign on <var_v:AbstractCompilerVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AVardeclExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AVardeclExpr__stmt(val* self, val* p0) {
abstract_compiler__AVardeclExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AVarExpr#expr for (self: AVarExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AVarExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Variable */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1905);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var1) /* variable on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AVarExpr>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1906);
show_backtrace(1);
}
var_mtype = var3;
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autoadapt]))(var_v, var_res, var_mtype) /* autoadapt on <var_v:AbstractCompilerVisitor>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AVarExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AVarExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarAssignExpr#stmt for (self: AVarAssignExpr, AbstractCompilerVisitor) */
void abstract_compiler__AVarAssignExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : AExpr */;
val* var2 /* : nullable MType */;
val* var3 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarAssignExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1914);
show_backtrace(1);
}
var_variable = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:AVarAssignExpr>*/;
var2 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var3;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var4, var_i) /* assign on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AVarAssignExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AVarAssignExpr__stmt(val* self, val* p0) {
abstract_compiler__AVarAssignExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AVarAssignExpr#expr for (self: AVarAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AVarAssignExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var5 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarAssignExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1920);
show_backtrace(1);
}
var_variable = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:AVarAssignExpr>*/;
var3 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var2, var3) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var4;
var5 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var5, var_i) /* assign on <var_v:AbstractCompilerVisitor>*/;
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarAssignExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AVarAssignExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AVarAssignExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarReassignExpr#stmt for (self: AVarReassignExpr, AbstractCompilerVisitor) */
void abstract_compiler__AVarReassignExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : RuntimeVariable */;
val* var_vari /* var vari: RuntimeVariable */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var5 /* : nullable CallSite */;
val* var6 /* : Array[RuntimeVariable] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[RuntimeVariable] */;
val* var9 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : RuntimeVariable */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarReassignExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1930);
show_backtrace(1);
}
var_variable = var;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
var_vari = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_value]))(self) /* n_value on <self:AVarReassignExpr>*/;
var3 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var2, var3) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_value = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:AVarReassignExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1933);
show_backtrace(1);
}
var6 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var6 = array_instance Array[RuntimeVariable] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var_vari;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var_value;
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[RuntimeVariable]>*/;
}
var9 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var5, var6) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
var_res = var9;
var10 = NULL;
if (var_res == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1934);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var12, var_res) /* assign on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AVarReassignExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AVarReassignExpr__stmt(val* self, val* p0) {
abstract_compiler__AVarReassignExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ASelfExpr#expr for (self: ASelfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASelfExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Frame */;
val* var2 /* : Array[RuntimeVariable] */;
val* var3 /* : nullable Object */;
var_v = p0;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1940);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__Frame__arguments]))(var1) /* arguments on <var1:nullable Frame>*/;
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__first]))(var2) /* first on <var2:Array[RuntimeVariable]>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASelfExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASelfExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASelfExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AContinueExpr#stmt for (self: AContinueExpr, AbstractCompilerVisitor) */
void abstract_compiler__AContinueExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable EscapeMark */;
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
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "goto CONTINUE_";
var2 = 14;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AContinueExpr__escapemark]))(self) /* escapemark on <self:AContinueExpr>*/;
var5 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var4) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
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
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var14) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AContinueExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AContinueExpr__stmt(val* self, val* p0) {
abstract_compiler__AContinueExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ABreakExpr#stmt for (self: ABreakExpr, AbstractCompilerVisitor) */
void abstract_compiler__ABreakExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable EscapeMark */;
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
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "goto BREAK_";
var2 = 11;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ABreakExpr__escapemark]))(self) /* escapemark on <self:ABreakExpr>*/;
var5 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var4) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
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
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var14) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#ABreakExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ABreakExpr__stmt(val* self, val* p0) {
abstract_compiler__ABreakExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AReturnExpr#stmt for (self: AReturnExpr, AbstractCompilerVisitor) */
void abstract_compiler__AReturnExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable Frame */;
val* var4 /* : nullable RuntimeVariable */;
val* var_returnvar /* var returnvar: RuntimeVariable */;
val* var5 /* : MType */;
val* var6 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : nullable Frame */;
val* var12 /* : nullable String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReturnExpr__n_expr]))(self) /* n_expr on <self:AReturnExpr>*/;
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1956);
show_backtrace(1);
} else {
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_compiler__Frame__returnvar]))(var3) /* returnvar on <var3:nullable Frame>*/;
}
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1956);
show_backtrace(1);
}
var_returnvar = var4;
var5 = ((val* (*)(val*))(var_returnvar->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_returnvar) /* mtype on <var_returnvar:RuntimeVariable>*/;
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_nexpr, var5) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var6;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_returnvar, var_i) /* assign on <var_v:AbstractCompilerVisitor>*/;
} else {
}
if (varonce) {
var7 = varonce;
} else {
var8 = "goto ";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1960);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_compiler__Frame__returnlabel]))(var11) /* returnlabel on <var11:nullable Frame>*/;
}
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1960);
show_backtrace(1);
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ";";
var16 = 1;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var12;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var21) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AReturnExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AReturnExpr__stmt(val* self, val* p0) {
abstract_compiler__AReturnExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AAbortExpr#stmt for (self: AAbortExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAbortExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Aborted";
var2 = 7;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_v, var) /* add_abort on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AAbortExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAbortExpr__stmt(val* self, val* p0) {
abstract_compiler__AAbortExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#stmt for (self: AIfExpr, AbstractCompilerVisitor) */
void abstract_compiler__AIfExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var1 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
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
val* var15 /* : nullable AExpr */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : nullable AExpr */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_expr]))(self) /* n_expr on <self:AIfExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "if (";
var4 = 4;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "){";
var9 = 2;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var2;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var14) /* add on <var_v:AbstractCompilerVisitor>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_then]))(self) /* n_then on <self:AIfExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var15) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "} else {";
var19 = 8;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
var21 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_else]))(self) /* n_else on <self:AIfExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var21) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "}";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var23) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AIfExpr__stmt(val* self, val* p0) {
abstract_compiler__AIfExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#expr for (self: AIfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIfExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
val* var18 /* : nullable AExpr */;
val* var19 /* : null */;
val* var20 /* : RuntimeVariable */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : nullable AExpr */;
val* var27 /* : null */;
val* var28 /* : RuntimeVariable */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AIfExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1981);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_expr]))(self) /* n_expr on <self:AIfExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var3) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "if (";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = "){";
var12 = 2;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_then]))(self) /* n_then on <self:AIfExpr>*/;
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1984);
show_backtrace(1);
}
var19 = NULL;
var20 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var18, var19) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var20) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "} else {";
var24 = 8;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_else]))(self) /* n_else on <self:AIfExpr>*/;
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1986);
show_backtrace(1);
}
var27 = NULL;
var28 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var26, var27) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var28) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce29) {
var30 = varonce29;
} else {
var31 = "}";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var30) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIfExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIfExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIfExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIfexprExpr#expr for (self: AIfexprExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIfexprExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
val* var18 /* : AExpr */;
val* var19 /* : null */;
val* var20 /* : RuntimeVariable */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : AExpr */;
val* var27 /* : null */;
val* var28 /* : RuntimeVariable */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AIfexprExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1995);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_expr]))(self) /* n_expr on <self:AIfexprExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var3) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "if (";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = "){";
var12 = 2;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_then]))(self) /* n_then on <self:AIfexprExpr>*/;
var19 = NULL;
var20 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var18, var19) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var20) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "} else {";
var24 = 8;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_else]))(self) /* n_else on <self:AIfexprExpr>*/;
var27 = NULL;
var28 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var26, var27) /* expr on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var28) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce29) {
var30 = varonce29;
} else {
var31 = "}";
var32 = 1;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var30) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIfexprExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIfexprExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIfexprExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADoExpr#stmt for (self: ADoExpr, AbstractCompilerVisitor) */
void abstract_compiler__ADoExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var1 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var2 /* : null */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ADoExpr__n_block]))(self) /* n_block on <self:ADoExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var) /* stmt on <var_v:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ADoExpr__escapemark]))(self) /* escapemark on <self:ADoExpr>*/;
var_escapemark = var1;
var2 = NULL;
if (var_escapemark == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
if (varonce) {
var4 = varonce;
} else {
var5 = "BREAK_";
var6 = 6;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var_escapemark) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = ": (void)0;";
var12 = 10;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var4;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var8;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#ADoExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ADoExpr__stmt(val* self, val* p0) {
abstract_compiler__ADoExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AWhileExpr#stmt for (self: AWhileExpr, AbstractCompilerVisitor) */
void abstract_compiler__AWhileExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : AExpr */;
val* var5 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
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
val* var20 /* : nullable AExpr */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : nullable EscapeMark */;
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
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : nullable EscapeMark */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
val* var57 /* : String */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = 9;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var) /* add on <var_v:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_expr]))(self) /* n_expr on <self:AWhileExpr>*/;
var5 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var4) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "if (!";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ") break;";
var14 = 8;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var19) /* add on <var_v:AbstractCompilerVisitor>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_block]))(self) /* n_block on <self:AWhileExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var20) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "CONTINUE_";
var24 = 9;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AWhileExpr__escapemark]))(self) /* escapemark on <self:AWhileExpr>*/;
var27 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var26) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = ": (void)0;";
var31 = 10;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 3;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var27;
((struct instance_array__NativeArray*)var35)->values[2] = (val*) var29;
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
var36 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var36) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "}";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var38) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "BREAK_";
var45 = 6;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AWhileExpr__escapemark]))(self) /* escapemark on <self:AWhileExpr>*/;
var48 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var47) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce49) {
var50 = varonce49;
} else {
var51 = ": (void)0;";
var52 = 10;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 3;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var43;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var48;
((struct instance_array__NativeArray*)var56)->values[2] = (val*) var50;
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
}
var57 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var57) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AWhileExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AWhileExpr__stmt(val* self, val* p0) {
abstract_compiler__AWhileExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: ALoopExpr, AbstractCompilerVisitor) */
void abstract_compiler__ALoopExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable AExpr */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : nullable EscapeMark */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
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
val* var31 /* : nullable EscapeMark */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = 9;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var) /* add on <var_v:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALoopExpr__n_block]))(self) /* n_block on <self:ALoopExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var4) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce5) {
var6 = varonce5;
} else {
var7 = "CONTINUE_";
var8 = 9;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ALoopExpr__escapemark]))(self) /* escapemark on <self:ALoopExpr>*/;
var11 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var10) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = ": (void)0;";
var15 = 10;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 3;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var11;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var13;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var20) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "}";
var24 = 1;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var22) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "BREAK_";
var29 = 6;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ALoopExpr__escapemark]))(self) /* escapemark on <self:ALoopExpr>*/;
var32 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var31) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce33) {
var34 = varonce33;
} else {
var35 = ": (void)0;";
var36 = 10;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var34;
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var41) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ALoopExpr__stmt(val* self, val* p0) {
abstract_compiler__ALoopExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AForExpr#stmt for (self: AForExpr, AbstractCompilerVisitor) */
void abstract_compiler__AForExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Array[Variable] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
short int var_10 /* var : Bool */;
val* var11 /* : AbstractCompiler */;
val* var12 /* : ModelBuilder */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : AExpr */;
val* var19 /* : null */;
val* var20 /* : RuntimeVariable */;
val* var_from /* var from: RuntimeVariable */;
val* var21 /* : AExpr */;
val* var22 /* : null */;
val* var23 /* : RuntimeVariable */;
val* var_to /* var to: RuntimeVariable */;
val* var24 /* : nullable Array[Variable] */;
val* var25 /* : nullable Object */;
val* var26 /* : RuntimeVariable */;
val* var_variable /* var variable: RuntimeVariable */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : MType */;
val* var37 /* : MMethod */;
val* var38 /* : Array[RuntimeVariable] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[RuntimeVariable] */;
val* var41 /* : nullable RuntimeVariable */;
val* var_ok /* var ok: nullable RuntimeVariable */;
val* var42 /* : null */;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
val* var57 /* : String */;
val* var58 /* : nullable AExpr */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : nullable EscapeMark */;
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
val* var80 /* : MType */;
val* var81 /* : MMethod */;
val* var82 /* : Array[RuntimeVariable] */;
long var83 /* : Int */;
val* var84 /* : NativeArray[RuntimeVariable] */;
val* var85 /* : nullable RuntimeVariable */;
val* var_succ /* var succ: nullable RuntimeVariable */;
val* var86 /* : null */;
short int var87 /* : Bool */;
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
val* var98 /* : nullable EscapeMark */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : Array[Object] */;
long var106 /* : Int */;
val* var107 /* : NativeArray[Object] */;
val* var108 /* : String */;
val* var109 /* : AExpr */;
val* var110 /* : null */;
val* var111 /* : RuntimeVariable */;
val* var_cl /* var cl: RuntimeVariable */;
val* var112 /* : nullable MMethod */;
val* var_it_meth /* var it_meth: nullable MMethod */;
val* var113 /* : null */;
short int var114 /* : Bool */;
val* var115 /* : Array[RuntimeVariable] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[RuntimeVariable] */;
val* var118 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
val* var119 /* : null */;
short int var120 /* : Bool */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
val* var126 /* : nullable MMethod */;
val* var_isok_meth /* var isok_meth: nullable MMethod */;
val* var127 /* : null */;
short int var128 /* : Bool */;
val* var129 /* : Array[RuntimeVariable] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[RuntimeVariable] */;
val* var132 /* : nullable RuntimeVariable */;
val* var_ok133 /* var ok: nullable RuntimeVariable */;
val* var134 /* : null */;
short int var135 /* : Bool */;
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
val* var150 /* : nullable Array[Variable] */;
long var151 /* : Int */;
long var152 /* : Int */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
val* var156 /* : nullable MMethod */;
val* var_item_meth /* var item_meth: nullable MMethod */;
val* var157 /* : null */;
short int var158 /* : Bool */;
val* var159 /* : Array[RuntimeVariable] */;
long var160 /* : Int */;
val* var161 /* : NativeArray[RuntimeVariable] */;
val* var162 /* : nullable RuntimeVariable */;
val* var_i /* var i: nullable RuntimeVariable */;
val* var163 /* : null */;
short int var164 /* : Bool */;
val* var165 /* : nullable Array[Variable] */;
val* var166 /* : nullable Object */;
val* var167 /* : RuntimeVariable */;
val* var168 /* : nullable Array[Variable] */;
long var169 /* : Int */;
long var170 /* : Int */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
val* var174 /* : nullable MMethod */;
val* var_key_meth /* var key_meth: nullable MMethod */;
val* var175 /* : null */;
short int var176 /* : Bool */;
val* var177 /* : Array[RuntimeVariable] */;
long var178 /* : Int */;
val* var179 /* : NativeArray[RuntimeVariable] */;
val* var180 /* : nullable RuntimeVariable */;
val* var_i181 /* var i: nullable RuntimeVariable */;
val* var182 /* : null */;
short int var183 /* : Bool */;
val* var184 /* : nullable Array[Variable] */;
long var185 /* : Int */;
val* var186 /* : nullable Object */;
val* var187 /* : RuntimeVariable */;
val* var188 /* : nullable MMethod */;
val* var_item_meth189 /* var item_meth: nullable MMethod */;
val* var190 /* : null */;
short int var191 /* : Bool */;
val* var192 /* : Array[RuntimeVariable] */;
long var193 /* : Int */;
val* var194 /* : NativeArray[RuntimeVariable] */;
val* var195 /* : nullable RuntimeVariable */;
val* var196 /* : null */;
short int var197 /* : Bool */;
val* var198 /* : nullable Array[Variable] */;
long var199 /* : Int */;
val* var200 /* : nullable Object */;
val* var201 /* : RuntimeVariable */;
val* var202 /* : nullable AExpr */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : String */;
val* var208 /* : nullable EscapeMark */;
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
val* var219 /* : nullable MMethod */;
val* var_next_meth /* var next_meth: nullable MMethod */;
val* var220 /* : null */;
short int var221 /* : Bool */;
val* var222 /* : Array[RuntimeVariable] */;
long var223 /* : Int */;
val* var224 /* : NativeArray[RuntimeVariable] */;
val* var225 /* : nullable RuntimeVariable */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
long var229 /* : Int */;
val* var230 /* : String */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : String */;
val* var236 /* : nullable EscapeMark */;
val* var237 /* : String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
long var241 /* : Int */;
val* var242 /* : String */;
val* var243 /* : Array[Object] */;
long var244 /* : Int */;
val* var245 /* : NativeArray[Object] */;
val* var246 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_expr]))(self) /* n_expr on <self:AForExpr>*/;
var_nexpr = var;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2047);
show_backtrace(1);
} else {
var4 = ((long (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__length]))(var3) /* length on <var3:nullable Array[Variable]>*/;
}
var5 = 1;
{ /* Inline kernel#Int#== (var4,var5) */
var8 = var4 == var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_ = var6;
if (var6){
/* <var_nexpr:AExpr> isa AOrangeExpr */
cltype = type_parser_nodes__AOrangeExpr.color;
idtype = type_parser_nodes__AOrangeExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var9 = 0;
} else {
var9 = var_nexpr->type->type_table[cltype] == idtype;
}
var2 = var9;
} else {
var2 = var_;
}
var_10 = var2;
if (var2){
var11 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var11) /* modelbuilder on <var11:AbstractCompiler>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var12) /* toolcontext on <var12:ModelBuilder>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_shortcut_range]))(var13) /* opt_no_shortcut_range on <var13:ToolContext>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_opts__Option__value]))(var14) /* value on <var14:OptionBool>*/;
var16 = ((struct instance_kernel__Bool*)var15)->value; /* autounbox from nullable Object to Bool */;
var17 = !var16;
var1 = var17;
} else {
var1 = var_10;
}
if (var1){
var18 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr]))(var_nexpr) /* n_expr on <var_nexpr:AExpr(AOrangeExpr)>*/;
var19 = NULL;
var20 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var18, var19) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_from = var20;
var21 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr2]))(var_nexpr) /* n_expr2 on <var_nexpr:AExpr(AOrangeExpr)>*/;
var22 = NULL;
var23 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var21, var22) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_to = var23;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2050);
show_backtrace(1);
} else {
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_collection__Collection__first]))(var24) /* first on <var24:nullable Array[Variable]>*/;
}
var26 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var25) /* variable on <var_v:AbstractCompilerVisitor>*/;
var_variable = var26;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_variable, var_from) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce) {
var27 = varonce;
} else {
var28 = "for(;;) { /* shortcut range */";
var29 = 30;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var27) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "<";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = ((val* (*)(val*))(var_variable->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_variable) /* mtype on <var_variable:RuntimeVariable>*/;
var37 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(var_v, var32, var36) /* get_property on <var_v:AbstractCompilerVisitor>*/;
var38 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var38 = array_instance Array[RuntimeVariable] */
var39 = 2;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var_variable;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var_to;
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[RuntimeVariable]>*/;
}
var41 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var37, var38) /* send on <var_v:AbstractCompilerVisitor>*/;
var_ok = var41;
var42 = NULL;
if (var_ok == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (!var43) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2056);
show_backtrace(1);
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "if(!";
var47 = 4;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = ") break;";
var52 = 8;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 3;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var45;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var_ok;
((struct instance_array__NativeArray*)var56)->values[2] = (val*) var50;
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
}
var57 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var57) /* add on <var_v:AbstractCompilerVisitor>*/;
var58 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_block]))(self) /* n_block on <self:AForExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var58) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce59) {
var60 = varonce59;
} else {
var61 = "CONTINUE_";
var62 = 9;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__escapemark]))(self) /* escapemark on <self:AForExpr>*/;
var65 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var64) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce66) {
var67 = varonce66;
} else {
var68 = ": (void)0;";
var69 = 10;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var71 = array_instance Array[Object] */
var72 = 3;
var73 = NEW_array__NativeArray(var72, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var73)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var73)->values[1] = (val*) var65;
((struct instance_array__NativeArray*)var73)->values[2] = (val*) var67;
((void (*)(val*, val*, long))(var71->class->vft[COLOR_array__Array__with_native]))(var71, var73, var72) /* with_native on <var71:Array[Object]>*/;
}
var74 = ((val* (*)(val*))(var71->class->vft[COLOR_string__Object__to_s]))(var71) /* to_s on <var71:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var74) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce75) {
var76 = varonce75;
} else {
var77 = "succ";
var78 = 4;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
var80 = ((val* (*)(val*))(var_variable->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_variable) /* mtype on <var_variable:RuntimeVariable>*/;
var81 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(var_v, var76, var80) /* get_property on <var_v:AbstractCompilerVisitor>*/;
var82 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var82 = array_instance Array[RuntimeVariable] */
var83 = 1;
var84 = NEW_array__NativeArray(var83, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var84)->values[0] = (val*) var_variable;
((void (*)(val*, val*, long))(var82->class->vft[COLOR_array__Array__with_native]))(var82, var84, var83) /* with_native on <var82:Array[RuntimeVariable]>*/;
}
var85 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var81, var82) /* send on <var_v:AbstractCompilerVisitor>*/;
var_succ = var85;
var86 = NULL;
if (var_succ == NULL) {
var87 = 0; /* is null */
} else {
var87 = 1; /* arg is null and recv is not */
}
if (!var87) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2063);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_variable, var_succ) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce88) {
var89 = varonce88;
} else {
var90 = "}";
var91 = 1;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var89) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce93) {
var94 = varonce93;
} else {
var95 = "BREAK_";
var96 = 6;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__escapemark]))(self) /* escapemark on <self:AForExpr>*/;
var99 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var98) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce100) {
var101 = varonce100;
} else {
var102 = ": (void)0;";
var103 = 10;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
var105 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var105 = array_instance Array[Object] */
var106 = 3;
var107 = NEW_array__NativeArray(var106, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var107)->values[0] = (val*) var94;
((struct instance_array__NativeArray*)var107)->values[1] = (val*) var99;
((struct instance_array__NativeArray*)var107)->values[2] = (val*) var101;
((void (*)(val*, val*, long))(var105->class->vft[COLOR_array__Array__with_native]))(var105, var107, var106) /* with_native on <var105:Array[Object]>*/;
}
var108 = ((val* (*)(val*))(var105->class->vft[COLOR_string__Object__to_s]))(var105) /* to_s on <var105:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var108) /* add on <var_v:AbstractCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
var109 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_expr]))(self) /* n_expr on <self:AForExpr>*/;
var110 = NULL;
var111 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var109, var110) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_cl = var111;
var112 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_iterator]))(self) /* method_iterator on <self:AForExpr>*/;
var_it_meth = var112;
var113 = NULL;
if (var_it_meth == NULL) {
var114 = 0; /* is null */
} else {
var114 = 1; /* arg is null and recv is not */
}
if (!var114) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2072);
show_backtrace(1);
}
var115 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var115 = array_instance Array[RuntimeVariable] */
var116 = 1;
var117 = NEW_array__NativeArray(var116, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var117)->values[0] = (val*) var_cl;
((void (*)(val*, val*, long))(var115->class->vft[COLOR_array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[RuntimeVariable]>*/;
}
var118 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_it_meth, var115) /* send on <var_v:AbstractCompilerVisitor>*/;
var_it = var118;
var119 = NULL;
if (var_it == NULL) {
var120 = 0; /* is null */
} else {
var120 = 1; /* arg is null and recv is not */
}
if (!var120) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2074);
show_backtrace(1);
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = "for(;;) {";
var124 = 9;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var122) /* add on <var_v:AbstractCompilerVisitor>*/;
var126 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_is_ok]))(self) /* method_is_ok on <self:AForExpr>*/;
var_isok_meth = var126;
var127 = NULL;
if (var_isok_meth == NULL) {
var128 = 0; /* is null */
} else {
var128 = 1; /* arg is null and recv is not */
}
if (!var128) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2077);
show_backtrace(1);
}
var129 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var129 = array_instance Array[RuntimeVariable] */
var130 = 1;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var_it;
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[RuntimeVariable]>*/;
}
var132 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_isok_meth, var129) /* send on <var_v:AbstractCompilerVisitor>*/;
var_ok133 = var132;
var134 = NULL;
if (var_ok133 == NULL) {
var135 = 0; /* is null */
} else {
var135 = 1; /* arg is null and recv is not */
}
if (!var135) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2079);
show_backtrace(1);
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = "if(!";
var139 = 4;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = ") break;";
var144 = 8;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var146 = array_instance Array[Object] */
var147 = 3;
var148 = NEW_array__NativeArray(var147, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var148)->values[0] = (val*) var137;
((struct instance_array__NativeArray*)var148)->values[1] = (val*) var_ok133;
((struct instance_array__NativeArray*)var148)->values[2] = (val*) var142;
((void (*)(val*, val*, long))(var146->class->vft[COLOR_array__Array__with_native]))(var146, var148, var147) /* with_native on <var146:Array[Object]>*/;
}
var149 = ((val* (*)(val*))(var146->class->vft[COLOR_string__Object__to_s]))(var146) /* to_s on <var146:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var149) /* add on <var_v:AbstractCompilerVisitor>*/;
var150 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var150 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2081);
show_backtrace(1);
} else {
var151 = ((long (*)(val*))(var150->class->vft[COLOR_abstract_collection__Collection__length]))(var150) /* length on <var150:nullable Array[Variable]>*/;
}
var152 = 1;
{ /* Inline kernel#Int#== (var151,var152) */
var155 = var151 == var152;
var153 = var155;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
if (var153){
var156 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_item]))(self) /* method_item on <self:AForExpr>*/;
var_item_meth = var156;
var157 = NULL;
if (var_item_meth == NULL) {
var158 = 0; /* is null */
} else {
var158 = 1; /* arg is null and recv is not */
}
if (!var158) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2083);
show_backtrace(1);
}
var159 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var159 = array_instance Array[RuntimeVariable] */
var160 = 1;
var161 = NEW_array__NativeArray(var160, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var161)->values[0] = (val*) var_it;
((void (*)(val*, val*, long))(var159->class->vft[COLOR_array__Array__with_native]))(var159, var161, var160) /* with_native on <var159:Array[RuntimeVariable]>*/;
}
var162 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_item_meth, var159) /* send on <var_v:AbstractCompilerVisitor>*/;
var_i = var162;
var163 = NULL;
if (var_i == NULL) {
var164 = 0; /* is null */
} else {
var164 = 1; /* arg is null and recv is not */
}
if (!var164) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2085);
show_backtrace(1);
}
var165 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var165 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2086);
show_backtrace(1);
} else {
var166 = ((val* (*)(val*))(var165->class->vft[COLOR_abstract_collection__Collection__first]))(var165) /* first on <var165:nullable Array[Variable]>*/;
}
var167 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var166) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var167, var_i) /* assign on <var_v:AbstractCompilerVisitor>*/;
} else {
var168 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
if (var168 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2087);
show_backtrace(1);
} else {
var169 = ((long (*)(val*))(var168->class->vft[COLOR_abstract_collection__Collection__length]))(var168) /* length on <var168:nullable Array[Variable]>*/;
}
var170 = 2;
{ /* Inline kernel#Int#== (var169,var170) */
var173 = var169 == var170;
var171 = var173;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
if (var171){
var174 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_key]))(self) /* method_key on <self:AForExpr>*/;
var_key_meth = var174;
var175 = NULL;
if (var_key_meth == NULL) {
var176 = 0; /* is null */
} else {
var176 = 1; /* arg is null and recv is not */
}
if (!var176) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2089);
show_backtrace(1);
}
var177 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var177 = array_instance Array[RuntimeVariable] */
var178 = 1;
var179 = NEW_array__NativeArray(var178, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var179)->values[0] = (val*) var_it;
((void (*)(val*, val*, long))(var177->class->vft[COLOR_array__Array__with_native]))(var177, var179, var178) /* with_native on <var177:Array[RuntimeVariable]>*/;
}
var180 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_key_meth, var177) /* send on <var_v:AbstractCompilerVisitor>*/;
var_i181 = var180;
var182 = NULL;
if (var_i181 == NULL) {
var183 = 0; /* is null */
} else {
var183 = 1; /* arg is null and recv is not */
}
if (!var183) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2091);
show_backtrace(1);
}
var184 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
var185 = 0;
if (var184 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2092);
show_backtrace(1);
} else {
var186 = ((val* (*)(val*, long))(var184->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var184, var185) /* [] on <var184:nullable Array[Variable]>*/;
}
var187 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var186) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var187, var_i181) /* assign on <var_v:AbstractCompilerVisitor>*/;
var188 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_item]))(self) /* method_item on <self:AForExpr>*/;
var_item_meth189 = var188;
var190 = NULL;
if (var_item_meth189 == NULL) {
var191 = 0; /* is null */
} else {
var191 = 1; /* arg is null and recv is not */
}
if (!var191) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2094);
show_backtrace(1);
}
var192 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var192 = array_instance Array[RuntimeVariable] */
var193 = 1;
var194 = NEW_array__NativeArray(var193, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var194)->values[0] = (val*) var_it;
((void (*)(val*, val*, long))(var192->class->vft[COLOR_array__Array__with_native]))(var192, var194, var193) /* with_native on <var192:Array[RuntimeVariable]>*/;
}
var195 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_item_meth189, var192) /* send on <var_v:AbstractCompilerVisitor>*/;
var_i181 = var195;
var196 = NULL;
if (var_i181 == NULL) {
var197 = 0; /* is null */
} else {
var197 = 1; /* arg is null and recv is not */
}
if (!var197) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2096);
show_backtrace(1);
}
var198 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
var199 = 1;
if (var198 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2097);
show_backtrace(1);
} else {
var200 = ((val* (*)(val*, long))(var198->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var198, var199) /* [] on <var198:nullable Array[Variable]>*/;
}
var201 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var200) /* variable on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var201, var_i181) /* assign on <var_v:AbstractCompilerVisitor>*/;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2099);
show_backtrace(1);
}
}
var202 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_block]))(self) /* n_block on <self:AForExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var202) /* stmt on <var_v:AbstractCompilerVisitor>*/;
if (varonce203) {
var204 = varonce203;
} else {
var205 = "CONTINUE_";
var206 = 9;
var207 = string__NativeString__to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
var208 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__escapemark]))(self) /* escapemark on <self:AForExpr>*/;
var209 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var208) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce210) {
var211 = varonce210;
} else {
var212 = ": (void)0;";
var213 = 10;
var214 = string__NativeString__to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
var215 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var215 = array_instance Array[Object] */
var216 = 3;
var217 = NEW_array__NativeArray(var216, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var217)->values[0] = (val*) var204;
((struct instance_array__NativeArray*)var217)->values[1] = (val*) var209;
((struct instance_array__NativeArray*)var217)->values[2] = (val*) var211;
((void (*)(val*, val*, long))(var215->class->vft[COLOR_array__Array__with_native]))(var215, var217, var216) /* with_native on <var215:Array[Object]>*/;
}
var218 = ((val* (*)(val*))(var215->class->vft[COLOR_string__Object__to_s]))(var215) /* to_s on <var215:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var218) /* add on <var_v:AbstractCompilerVisitor>*/;
var219 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AForExpr__method_next]))(self) /* method_next on <self:AForExpr>*/;
var_next_meth = var219;
var220 = NULL;
if (var_next_meth == NULL) {
var221 = 0; /* is null */
} else {
var221 = 1; /* arg is null and recv is not */
}
if (!var221) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2104);
show_backtrace(1);
}
var222 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var222 = array_instance Array[RuntimeVariable] */
var223 = 1;
var224 = NEW_array__NativeArray(var223, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var224)->values[0] = (val*) var_it;
((void (*)(val*, val*, long))(var222->class->vft[COLOR_array__Array__with_native]))(var222, var224, var223) /* with_native on <var222:Array[RuntimeVariable]>*/;
}
var225 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_next_meth, var222) /* send on <var_v:AbstractCompilerVisitor>*/;
var225;
if (varonce226) {
var227 = varonce226;
} else {
var228 = "}";
var229 = 1;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var227) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce231) {
var232 = varonce231;
} else {
var233 = "BREAK_";
var234 = 6;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
var236 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__escapemark]))(self) /* escapemark on <self:AForExpr>*/;
var237 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_name]))(var_v, var236) /* escapemark_name on <var_v:AbstractCompilerVisitor>*/;
if (varonce238) {
var239 = varonce238;
} else {
var240 = ": (void)0;";
var241 = 10;
var242 = string__NativeString__to_s_with_length(var240, var241);
var239 = var242;
varonce238 = var239;
}
var243 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var243 = array_instance Array[Object] */
var244 = 3;
var245 = NEW_array__NativeArray(var244, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var245)->values[0] = (val*) var232;
((struct instance_array__NativeArray*)var245)->values[1] = (val*) var237;
((struct instance_array__NativeArray*)var245)->values[2] = (val*) var239;
((void (*)(val*, val*, long))(var243->class->vft[COLOR_array__Array__with_native]))(var243, var245, var244) /* with_native on <var243:Array[Object]>*/;
}
var246 = ((val* (*)(val*))(var243->class->vft[COLOR_string__Object__to_s]))(var243) /* to_s on <var243:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var246) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AForExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AForExpr__stmt(val* self, val* p0) {
abstract_compiler__AForExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: AAssertExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAssertExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AbstractCompiler */;
val* var1 /* : ModelBuilder */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
val* var6 /* : AExpr */;
val* var7 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
val* var21 /* : nullable AExpr */;
val* var22 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var23 /* : null */;
short int var24 /* : Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var) /* modelbuilder on <var:AbstractCompiler>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var1) /* toolcontext on <var1:ModelBuilder>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_assert]))(var2) /* opt_no_check_assert on <var2:ToolContext>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_opts__Option__value]))(var3) /* value on <var3:OptionBool>*/;
var5 = ((struct instance_kernel__Bool*)var4)->value; /* autounbox from nullable Object to Bool */;
if (var5){
goto RET_LABEL;
} else {
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssertExpr__n_expr]))(self) /* n_expr on <self:AAssertExpr>*/;
var7 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var6) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var7;
if (varonce) {
var8 = varonce;
} else {
var9 = "if (!";
var10 = 5;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = ") {";
var15 = 3;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 3;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var13;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var20) /* add on <var_v:AbstractCompilerVisitor>*/;
var21 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssertExpr__n_else]))(self) /* n_else on <self:AAssertExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var21) /* stmt on <var_v:AbstractCompilerVisitor>*/;
var22 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssertExpr__n_id]))(self) /* n_id on <self:AAssertExpr>*/;
var_nid = var22;
var23 = NULL;
if (var_nid == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
if (varonce25) {
var26 = varonce25;
} else {
var27 = "Assert \'";
var28 = 8;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = ((val* (*)(val*))(var_nid->class->vft[COLOR_parser_nodes__Token__text]))(var_nid) /* text on <var_nid:nullable TId(TId)>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "\' failed";
var34 = 8;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 3;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var26;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var30;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var32;
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
var39 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_v, var39) /* add_abort on <var_v:AbstractCompilerVisitor>*/;
} else {
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Assert failed";
var43 = 13;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(var_v, var41) /* add_abort on <var_v:AbstractCompilerVisitor>*/;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "}";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var46) /* add on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAssertExpr__stmt(val* self, val* p0) {
abstract_compiler__AAssertExpr__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AOrExpr#expr for (self: AOrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
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
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var33 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
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
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AOrExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2132);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrExpr__n_expr]))(self) /* n_expr on <self:AOrExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var3) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "if (";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = ") {";
var12 = 3;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = " = 1;";
var21 = 5;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 2;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var19;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var26) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "} else {";
var30 = 8;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var28) /* add on <var_v:AbstractCompilerVisitor>*/;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrExpr__n_expr2]))(self) /* n_expr2 on <self:AOrExpr>*/;
var33 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var32) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = " = ";
var37 = 3;
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
var45 = 4;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var46)->values[3] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var47) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = "}";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var49) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: AImpliesExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AImpliesExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
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
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var33 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
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
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AImpliesExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2147);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AImpliesExpr__n_expr]))(self) /* n_expr on <self:AImpliesExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var3) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "if (!";
var7 = 5;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = ") {";
var12 = 3;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = " = 1;";
var21 = 5;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 2;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var19;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var26) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "} else {";
var30 = 8;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var28) /* add on <var_v:AbstractCompilerVisitor>*/;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AImpliesExpr__n_expr2]))(self) /* n_expr2 on <self:AImpliesExpr>*/;
var33 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var32) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = " = ";
var37 = 3;
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
var45 = 4;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var46)->values[3] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var47) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = "}";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var49) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AImpliesExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AImpliesExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: AAndExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAndExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
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
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var33 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
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
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AAndExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2162);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAndExpr__n_expr]))(self) /* n_expr on <self:AAndExpr>*/;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var3) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "if (!";
var7 = 5;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = ") {";
var12 = 3;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var17) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = " = 0;";
var21 = 5;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 2;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var19;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var26) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "} else {";
var30 = 8;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var28) /* add on <var_v:AbstractCompilerVisitor>*/;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAndExpr__n_expr2]))(self) /* n_expr2 on <self:AAndExpr>*/;
var33 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var32) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = " = ";
var37 = 3;
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
var45 = 4;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var46)->values[3] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var47) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = "}";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var49) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAndExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAndExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: ANotExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ANotExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
val* var11 /* : nullable MType */;
val* var12 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANotExpr__n_expr]))(self) /* n_expr on <self:ANotExpr>*/;
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr_bool]))(var_v, var1) /* expr_bool on <var_v:AbstractCompilerVisitor>*/;
var_cond = var2;
if (varonce) {
var3 = varonce;
} else {
var4 = "!";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var_cond;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ANotExpr>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2178);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var10, var11) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ANotExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ANotExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: AOrElseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrElseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : AExpr */;
val* var25 /* : null */;
val* var26 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AOrElseExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2185);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var1) /* new_var on <var_v:AbstractCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrElseExpr__n_expr]))(self) /* n_expr on <self:AOrElseExpr>*/;
var4 = NULL;
var5 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var3, var4) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var5;
if (varonce) {
var6 = varonce;
} else {
var7 = "if (";
var8 = 4;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "!=NULL) {";
var13 = 9;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 3;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var17)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var17)->values[2] = (val*) var11;
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
}
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var18) /* add on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var_i1) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "} else {";
var22 = 8;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var20) /* add on <var_v:AbstractCompilerVisitor>*/;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrElseExpr__n_expr2]))(self) /* n_expr2 on <self:AOrElseExpr>*/;
var25 = NULL;
var26 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var24, var25) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var26;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var_res, var_i2) /* assign on <var_v:AbstractCompilerVisitor>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "}";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var28) /* add on <var_v:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrElseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrElseExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntExpr#expr for (self: AIntExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIntExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Int */;
val* var2 /* : String */;
val* var3 /* : Array[Object] */;
long var4 /* : Int */;
val* var5 /* : NativeArray[Object] */;
val* var6 /* : String */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_literal__AIntExpr__value]))(self) /* value on <self:AIntExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2198);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_string__Object__to_s]))(var1) /* to_s on <var1:nullable Int>*/;
}
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var3 = array_instance Array[Object] */
var4 = 1;
var5 = NEW_array__NativeArray(var4, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var5)->values[0] = (val*) var2;
((void (*)(val*, val*, long))(var3->class->vft[COLOR_array__Array__with_native]))(var3, var5, var4) /* with_native on <var3:Array[Object]>*/;
}
var6 = ((val* (*)(val*))(var3->class->vft[COLOR_string__Object__to_s]))(var3) /* to_s on <var3:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AIntExpr>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2198);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var6, var7) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIntExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIntExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: AFloatExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AFloatExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : TFloat */;
val* var2 /* : String */;
val* var3 /* : Array[Object] */;
long var4 /* : Int */;
val* var5 /* : NativeArray[Object] */;
val* var6 /* : String */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AFloatExpr__n_float]))(self) /* n_float on <self:AFloatExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__Token__text]))(var1) /* text on <var1:TFloat>*/;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var3 = array_instance Array[Object] */
var4 = 1;
var5 = NEW_array__NativeArray(var4, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var5)->values[0] = (val*) var2;
((void (*)(val*, val*, long))(var3->class->vft[COLOR_array__Array__with_native]))(var3, var5, var4) /* with_native on <var3:Array[Object]>*/;
}
var6 = ((val* (*)(val*))(var3->class->vft[COLOR_string__Object__to_s]))(var3) /* to_s on <var3:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AFloatExpr>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2202);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var6, var7) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AFloatExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AFloatExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACharExpr#expr for (self: ACharExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ACharExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable Char */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
val* var17 /* : nullable MType */;
val* var18 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "\'";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_literal__ACharExpr__value]))(self) /* value on <self:ACharExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2206);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:nullable Char>*/;
}
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_string__AbstractString__escape_to_c]))(var6) /* escape_to_c on <var6:String>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "\'";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var15)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var15)->values[2] = (val*) var9;
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ACharExpr>*/;
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2206);
show_backtrace(1);
}
var18 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var16, var17) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACharExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ACharExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ACharExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: AArrayExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AArrayExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : Array[MType] */;
val* var4 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var5 /* : Array[RuntimeVariable] */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var6 /* : AExprs */;
val* var7 /* : ANodes[AExpr] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var11 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var12 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AArrayExpr>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2212);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassType__arguments]))(var1) /* arguments on <var1:nullable MType(MClassType)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__first]))(var3) /* first on <var3:Array[MType]>*/;
var_mtype = var4;
var5 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[RuntimeVariable]>*/;
var_array = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AArrayExpr__n_exprs]))(self) /* n_exprs on <self:AArrayExpr>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(var6) /* n_exprs on <var6:AExprs>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var7) /* iterator on <var7:ANodes[AExpr]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_nexpr = var10;
var11 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_nexpr, var_mtype) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var11;
((void (*)(val*, val*))(var_array->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_array, var_i) /* add on <var_array:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var12 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__array_instance]))(var_v, var_array, var_mtype) /* array_instance on <var_v:AbstractCompilerVisitor>*/;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AArrayExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AArrayExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringFormExpr#expr for (self: AStringFormExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AStringFormExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable String */;
val* var2 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_literal__AStringFormExpr__value]))(self) /* value on <self:AStringFormExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2223);
show_backtrace(1);
}
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__string_instance]))(var_v, var1) /* string_instance on <var_v:AbstractCompilerVisitor>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringFormExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AStringFormExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AStringFormExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: ASuperstringExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASuperstringExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : Array[RuntimeVariable] */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var8 /* : nullable String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
short int var13 /* : Bool */;
val* var14 /* : null */;
val* var15 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var16 /* : MClassType */;
val* var17 /* : RuntimeVariable */;
val* var_a /* var a: RuntimeVariable */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : MType */;
val* var24 /* : MMethod */;
val* var25 /* : Array[RuntimeVariable] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[RuntimeVariable] */;
val* var28 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
var_v = p0;
var1 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[RuntimeVariable]>*/;
var_array = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASuperstringExpr__n_exprs]))(self) /* n_exprs on <self:ASuperstringExpr>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:ANodes[AExpr]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_ne = var5;
/* <var_ne:AExpr> isa AStringFormExpr */
cltype = type_parser_nodes__AStringFormExpr.color;
idtype = type_parser_nodes__AStringFormExpr.id;
if(cltype >= var_ne->type->table_size) {
var7 = 0;
} else {
var7 = var_ne->type->type_table[cltype] == idtype;
}
var_ = var7;
if (var7){
var8 = ((val* (*)(val*))(var_ne->class->vft[COLOR_literal__AStringFormExpr__value]))(var_ne) /* value on <var_ne:AExpr(AStringFormExpr)>*/;
if (varonce) {
var9 = varonce;
} else {
var10 = "";
var11 = 0;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (var8 == NULL) {
var13 = 0; /* <var9:String> cannot be null */
} else {
var13 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_kernel__Object___61d_61d]))(var8, var9) /* == on <var8:nullable String>*/;
}
var6 = var13;
} else {
var6 = var_;
}
if (var6){
goto CONTINUE_label;
} else {
}
var14 = NULL;
var15 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var_ne, var14) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var15;
((void (*)(val*, val*))(var_array->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_array, var_i) /* add on <var_array:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var16 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__object_type]))(var_v) /* object_type on <var_v:AbstractCompilerVisitor>*/;
var17 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__array_instance]))(var_v, var_array, var16) /* array_instance on <var_v:AbstractCompilerVisitor>*/;
var_a = var17;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "to_s";
var21 = 4;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*))(var_a->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_a) /* mtype on <var_a:RuntimeVariable>*/;
var24 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(var_v, var19, var23) /* get_property on <var_v:AbstractCompilerVisitor>*/;
var25 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var25 = array_instance Array[RuntimeVariable] */
var26 = 1;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var_a;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[RuntimeVariable]>*/;
}
var28 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var24, var25) /* send on <var_v:AbstractCompilerVisitor>*/;
var_res = var28;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASuperstringExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASuperstringExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: ACrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ACrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var5 /* : null */;
val* var6 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var7 /* : nullable MType */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var9 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : MType */;
val* var15 /* : MMethod */;
val* var16 /* : Array[RuntimeVariable] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[RuntimeVariable] */;
val* var19 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr]))(self) /* n_expr on <self:ACrangeExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr2]))(self) /* n_expr2 on <self:ACrangeExpr>*/;
var5 = NULL;
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var4, var5) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ACrangeExpr>*/;
/* <var7:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var7 == NULL) {
var8 = 0;
} else {
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
}
if (!var8) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2246);
show_backtrace(1);
}
var_mtype = var7;
var9 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
var_res = var9;
if (varonce) {
var10 = varonce;
} else {
var11 = "init";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = ((val* (*)(val*))(var_res->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_res) /* mtype on <var_res:RuntimeVariable>*/;
var15 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(var_v, var10, var14) /* get_property on <var_v:AbstractCompilerVisitor>*/;
var16 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var16 = array_instance Array[RuntimeVariable] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var_i2;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[RuntimeVariable]>*/;
}
var19 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var15, var16) /* send on <var_v:AbstractCompilerVisitor>*/;
var_it = var19;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ACrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ACrangeExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: AOrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var5 /* : null */;
val* var6 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var7 /* : nullable MType */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var9 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : MType */;
val* var15 /* : MMethod */;
val* var16 /* : Array[RuntimeVariable] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[RuntimeVariable] */;
val* var19 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr]))(self) /* n_expr on <self:AOrangeExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i1 = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr2]))(self) /* n_expr2 on <self:AOrangeExpr>*/;
var5 = NULL;
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var4, var5) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i2 = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AOrangeExpr>*/;
/* <var7:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var7 == NULL) {
var8 = 0;
} else {
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
}
if (!var8) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2258);
show_backtrace(1);
}
var_mtype = var7;
var9 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
var_res = var9;
if (varonce) {
var10 = varonce;
} else {
var11 = "without_last";
var12 = 12;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = ((val* (*)(val*))(var_res->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_res) /* mtype on <var_res:RuntimeVariable>*/;
var15 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(var_v, var10, var14) /* get_property on <var_v:AbstractCompilerVisitor>*/;
var16 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var16 = array_instance Array[RuntimeVariable] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var_i2;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[RuntimeVariable]>*/;
}
var19 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var15, var16) /* send on <var_v:AbstractCompilerVisitor>*/;
var_it = var19;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrangeExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: ATrueExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ATrueExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable MType */;
val* var6 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "1";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ATrueExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2266);
show_backtrace(1);
}
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1, var5) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ATrueExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ATrueExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFalseExpr#expr for (self: AFalseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AFalseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable MType */;
val* var6 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "0";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AFalseExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2270);
show_backtrace(1);
}
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1, var5) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFalseExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AFalseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AFalseExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANullExpr#expr for (self: ANullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ANullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable MType */;
val* var6 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "NULL";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ANullExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2274);
show_backtrace(1);
}
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(var_v, var1, var5) /* new_expr on <var_v:AbstractCompilerVisitor>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANullExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ANullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ANullExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIsaExpr#expr for (self: AIsaExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIsaExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var2 /* : null */;
val* var3 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var4 /* : nullable MType */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIsaExpr__n_expr]))(self) /* n_expr on <self:AIsaExpr>*/;
var2 = NULL;
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(var_v, var1, var2) /* expr on <var_v:AbstractCompilerVisitor>*/;
var_i = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AIsaExpr__cast_type]))(self) /* cast_type on <self:AIsaExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2281);
show_backtrace(1);
}
if (varonce) {
var5 = varonce;
} else {
var6 = "isa";
var7 = 3;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(var_v, var_i, var4, var5) /* type_test on <var_v:AbstractCompilerVisitor>*/;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIsaExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIsaExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIsaExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsCastExpr#expr for (self: AAsCastExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAsCastExpr__expr(val* self, val* p0) {
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
val* var10 /* : nullable MType */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
var_v = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsCastExpr__n_expr]))(self) /* n_expr on <self:AAsCastExpr>*/;
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
var10 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AAsCastExpr>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2291);
show_backtrace(1);
}
if (varonce) {
var11 = varonce;
} else {
var12 = "as";
var13 = 2;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_cast]))(var_v, var_i, var10, var11) /* add_cast on <var_v:AbstractCompilerVisitor>*/;
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2316);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2339);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2342);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2351);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2356);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2357);
show_backtrace(1);
}
var18 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:ASendReassignFormExpr>*/;
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2359);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2360);
show_backtrace(1);
}
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var_res) /* add on <var_args:Array[RuntimeVariable]>*/;
var25 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendReassignFormExpr__write_callsite]))(self) /* write_callsite on <self:ASendReassignFormExpr>*/;
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2363);
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
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable Frame */;
val* var19 /* : Array[RuntimeVariable] */;
val* var20 /* : nullable MMethod */;
val* var_mproperty /* var mproperty: nullable MMethod */;
val* var21 /* : null */;
short int var22 /* : Bool */;
val* var23 /* : MPropDef */;
val* var24 /* : nullable MSignature */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : Array[RuntimeVariable] */;
long var31 /* : Int */;
val* var_32 /* var : Array[RuntimeVariable] */;
val* var33 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var34 /* : nullable Frame */;
val* var35 /* : MPropDef */;
short int var36 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var37 /* : MType */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
val* var42 /* : nullable RuntimeVariable */;
var_v = p0;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2370);
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
var13 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[RuntimeVariable]>*/;
var14 = 1;
{ /* Inline kernel#Int#== (var13,var14) */
var17 = var13 == var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (var15){
var18 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2376);
show_backtrace(1);
} else {
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_compiler__Frame__arguments]))(var18) /* arguments on <var18:nullable Frame>*/;
}
var_args = var19;
} else {
}
var20 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASuperExpr__mproperty]))(self) /* mproperty on <self:ASuperExpr>*/;
var_mproperty = var20;
var21 = NULL;
if (var_mproperty == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
var23 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__intro]))(var_mproperty) /* intro on <var_mproperty:nullable MMethod(MMethod)>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_model__MMethodDef__msignature]))(var23) /* msignature on <var23:MPropDef(MMethodDef)>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2381);
show_backtrace(1);
} else {
var25 = ((long (*)(val*))(var24->class->vft[COLOR_model__MSignature__arity]))(var24) /* arity on <var24:nullable MSignature>*/;
}
var26 = 0;
{ /* Inline kernel#Int#== (var25,var26) */
var29 = var25 == var26;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
if (var27){
var30 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var31 = 1;
((void (*)(val*, long))(var30->class->vft[COLOR_array__Array__with_capacity]))(var30, var31) /* with_capacity on <var30:Array[RuntimeVariable]>*/;
var_32 = var30;
((void (*)(val*, val*))(var_32->class->vft[COLOR_abstract_collection__Sequence__push]))(var_32, var_recv) /* push on <var_32:Array[RuntimeVariable]>*/;
var_args = var_32;
} else {
}
var33 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_mproperty, var_args) /* send on <var_v:AbstractCompilerVisitor>*/;
var_res = var33;
var = var_res;
goto RET_LABEL;
} else {
}
var34 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:AbstractCompilerVisitor>*/;
if (var34 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2390);
show_backtrace(1);
} else {
var35 = ((val* (*)(val*))(var34->class->vft[COLOR_abstract_compiler__Frame__mpropdef]))(var34) /* mpropdef on <var34:nullable Frame>*/;
}
/* <var35:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var35->type->table_size) {
var36 = 0;
} else {
var36 = var35->type->type_table[cltype] == idtype;
}
if (!var36) {
var_class_name = var35 == NULL ? "null" : var35->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2390);
show_backtrace(1);
}
var37 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_recv) /* mtype on <var_recv:RuntimeVariable>*/;
/* <var37:MType> isa MClassType */
cltype39 = type_model__MClassType.color;
idtype40 = type_model__MClassType.id;
if(cltype39 >= var37->type->table_size) {
var38 = 0;
} else {
var38 = var37->type->type_table[cltype39] == idtype40;
}
if (!var38) {
var_class_name41 = var37 == NULL ? "null" : var37->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name41);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2390);
show_backtrace(1);
}
var42 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__supercall]))(var_v, var35, var37, var_args) /* supercall on <var_v:AbstractCompilerVisitor>*/;
var = var42;
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2397);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2406);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2412);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2425);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2435);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2445);
show_backtrace(1);
}
var_mproperty = var6;
var7 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var_mproperty, var_recv) /* read_attribute on <var_v:AbstractCompilerVisitor>*/;
var_attr = var7;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:AAttrReassignExpr>*/;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2447);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2448);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2457);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2472);
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
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 2501);
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
