#include "nit__separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompilerVisitor#native_array_instance for (self: SeparateCompilerVisitor, MType, RuntimeVariable): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_elttype /* var elttype: MType */;
val* var_length /* var length: RuntimeVariable */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : FlatString */;
val* var8 /* : MClass */;
val* var10 /* : MClass */;
val* var11 /* : String */;
val* var12 /* : String */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var14 /* : AbstractCompiler */;
val* var16 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
val* var20 /* : MClassType */;
val* var21 /* : RuntimeVariable */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable StaticFrame */;
val* var27 /* : nullable StaticFrame */;
val* var28 /* : MPropDef */;
val* var30 /* : MPropDef */;
val* var31 /* : MClassDef */;
val* var33 /* : MClassDef */;
val* var34 /* : nullable StaticFrame */;
val* var36 /* : nullable StaticFrame */;
val* var37 /* : Array[RuntimeVariable] */;
val* var39 /* : Array[RuntimeVariable] */;
val* var40 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var41 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var42 /* : String */;
val* var44 /* : NativeArray[String] */;
static val* varonce43;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
val* var65 /* : MClass */;
val* var67 /* : MClass */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : RuntimeVariable */;
val* var73 /* : Set[MType] */;
val* var75 /* : Set[MType] */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var85 /* : NativeArray[String] */;
static val* varonce84;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : FlatString */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : FlatString */;
val* var102 /* : MClass */;
val* var104 /* : MClass */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var109 /* : RuntimeVariable */;
var_elttype = p0;
var_length = p1;
{
var1 = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nit__model___MModule___native_array_type(var1, var_elttype);
}
var_mtype = var2;
if (unlikely(varonce==NULL)) {
var3 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "NEW_";
var7 = standard___standard__NativeString___to_s_with_length(var6, 4l);
var5 = var7;
varonce4 = var5;
}
((struct instance_standard__NativeArray*)var3)->values[0]=var5;
} else {
var3 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var10 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__MClass___nit__model_base__MEntity__c_name(var8);
}
((struct instance_standard__NativeArray*)var3)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var12); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_nit__MGenericType.color;
idtype = type_nit__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var13 = 0;
} else {
var13 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2035);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var16 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_compiler = var14;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:SeparateCompiler> */
var19 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:SeparateCompiler> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nit__model___MModule___int_type(var17);
}
{
var21 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_length, var20);
}
var_length = var21;
{
{ /* Inline model#MGenericType#need_anchor (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var24 = var_mtype->attrs[COLOR_nit__model__MGenericType___need_anchor].s; /* _need_anchor on <var_mtype:MClassType(MGenericType)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22){
{
nit___nit__SeparateCompilerVisitor___hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var27 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2040);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var25) on <var25:nullable StaticFrame> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var30 = var25->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var25:nullable StaticFrame> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var28) on <var28:MPropDef> */
var33 = var28->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var28:MPropDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
nit___nit__SeparateCompilerVisitor___link_unresolved_type(self, var31, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var36 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2041);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var34) on <var34:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var34:nullable StaticFrame> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = standard___standard__SequenceRead___Collection__first(var37);
}
var_recv = var40;
{
var41 = nit___nit__SeparateCompilerVisitor___type_info(self, var_recv);
}
var_recv_type_info = var41;
{
var42 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var42); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce43==NULL)) {
var44 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "NEW_";
var48 = standard___standard__NativeString___to_s_with_length(var47, 4l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "(";
var52 = standard___standard__NativeString___to_s_with_length(var51, 1l);
var50 = var52;
varonce49 = var50;
}
((struct instance_standard__NativeArray*)var44)->values[2]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = ", ";
var56 = standard___standard__NativeString___to_s_with_length(var55, 2l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var44)->values[4]=var54;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "->resolution_table->types[";
var60 = standard___standard__NativeString___to_s_with_length(var59, 26l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var44)->values[6]=var58;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "])";
var64 = standard___standard__NativeString___to_s_with_length(var63, 2l);
var62 = var64;
varonce61 = var62;
}
((struct instance_standard__NativeArray*)var44)->values[8]=var62;
} else {
var44 = varonce43;
varonce43 = NULL;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var67 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = nit___nit__MClass___nit__model_base__MEntity__c_name(var65);
}
((struct instance_standard__NativeArray*)var44)->values[1]=var68;
{
var69 = ((val*(*)(val* self))(var_length->class->vft[COLOR_standard__string__Object__to_s]))(var_length); /* to_s on <var_length:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var44)->values[3]=var69;
((struct instance_standard__NativeArray*)var44)->values[5]=var_recv_type_info;
{
var70 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
((struct instance_standard__NativeArray*)var44)->values[7]=var70;
{
var71 = ((val*(*)(val* self))(var44->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
{
var72 = nit___nit__AbstractCompilerVisitor___new_expr(self, var71, var_mtype);
}
var = var72;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var75 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 146);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var73&3)?class_info[((long)var73&3)]:var73->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var73, var_mtype); /* add on <var73:Set[MType]>*/
}
if (unlikely(varonce76==NULL)) {
var77 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "type_";
var81 = standard___standard__NativeString___to_s_with_length(var80, 5l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var77)->values[0]=var79;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
var82 = nit___nit__MGenericType___nit__model_base__MEntity__c_name(var_mtype);
}
((struct instance_standard__NativeArray*)var77)->values[1]=var82;
{
var83 = ((val*(*)(val* self))(var77->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var83); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce84==NULL)) {
var85 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "NEW_";
var89 = standard___standard__NativeString___to_s_with_length(var88, 4l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var85)->values[0]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "(";
var93 = standard___standard__NativeString___to_s_with_length(var92, 1l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var85)->values[2]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ", &type_";
var97 = standard___standard__NativeString___to_s_with_length(var96, 8l);
var95 = var97;
varonce94 = var95;
}
((struct instance_standard__NativeArray*)var85)->values[4]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ")";
var101 = standard___standard__NativeString___to_s_with_length(var100, 1l);
var99 = var101;
varonce98 = var99;
}
((struct instance_standard__NativeArray*)var85)->values[6]=var99;
} else {
var85 = varonce84;
varonce84 = NULL;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var104 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
var105 = nit___nit__MClass___nit__model_base__MEntity__c_name(var102);
}
((struct instance_standard__NativeArray*)var85)->values[1]=var105;
{
var106 = ((val*(*)(val* self))(var_length->class->vft[COLOR_standard__string__Object__to_s]))(var_length); /* to_s on <var_length:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var85)->values[3]=var106;
{
var107 = nit___nit__MGenericType___nit__model_base__MEntity__c_name(var_mtype);
}
((struct instance_standard__NativeArray*)var85)->values[5]=var107;
{
var108 = ((val*(*)(val* self))(var85->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
{
var109 = nit___nit__AbstractCompilerVisitor___new_expr(self, var108, var_mtype);
}
var = var109;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_def for (self: SeparateCompilerVisitor, String, nullable MType, Array[RuntimeVariable]) */
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
val* var_pname /* var pname: String */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable Object */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var4 /* : MModule */;
val* var5 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var20 /* : nullable Object */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_recv /* var recv: String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : nullable Object */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : AbstractCompiler */;
val* var43 /* : AbstractCompiler */;
val* var44 /* : MModule */;
val* var46 /* : MModule */;
val* var47 /* : MClassType */;
val* var48 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
short int var54 /* : Bool */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var69 /* : nullable Object */;
val* var70 /* : String */;
val* var71 /* : nullable Object */;
val* var72 /* : String */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
short int var78 /* : Bool */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
val* var93 /* : String */;
val* var94 /* : nullable Object */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : RuntimeVariable */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : FlatString */;
short int var102 /* : Bool */;
val* var104 /* : NativeArray[String] */;
static val* varonce103;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
val* var116 /* : FlatString */;
val* var117 /* : String */;
val* var118 /* : nullable Object */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var_recv1 /* var recv1: String */;
val* var122 /* : NativeArray[String] */;
static val* varonce121;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
val* var126 /* : FlatString */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
val* var130 /* : FlatString */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
val* var138 /* : FlatString */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
val* var142 /* : FlatString */;
val* var143 /* : nullable Object */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var146 /* : String */;
var_pname = p0;
var_ret_type = p1;
var_arguments = p2;
{
var = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var) on <var:nullable Object(RuntimeVariable)> */
var3 = var->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var:nullable Object(RuntimeVariable)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_elttype = var1;
{
var4 = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var5 = nit__model___MModule___native_array_class(var4);
}
var_nclass = var5;
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "((struct instance_";
var10 = standard___standard__NativeString___to_s_with_length(var9, 18l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "*)";
var14 = standard___standard__NativeString___to_s_with_length(var13, 2l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[2]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ")->values";
var18 = standard___standard__NativeString___to_s_with_length(var17, 9l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var6)->values[4]=var16;
} else {
var6 = varonce;
varonce = NULL;
}
{
var19 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
((struct instance_standard__NativeArray*)var6)->values[1]=var19;
{
var20 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_standard__string__Object__to_s]))(var20); /* to_s on <var20:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var6)->values[3]=var21;
{
var22 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var_recv = var22;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "[]";
var26 = standard___standard__NativeString___to_s_with_length(var25, 2l);
var24 = var26;
varonce23 = var24;
}
{
var27 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var24); /* == on <var_pname:String>*/
}
if (var27){
if (unlikely(varonce28==NULL)) {
var29 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "[";
var33 = standard___standard__NativeString___to_s_with_length(var32, 1l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var29)->values[1]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "]";
var37 = standard___standard__NativeString___to_s_with_length(var36, 1l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var29)->values[3]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
((struct instance_standard__NativeArray*)var29)->values[0]=var_recv;
{
var38 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var39 = ((val*(*)(val* self))(var38->class->vft[COLOR_standard__string__Object__to_s]))(var38); /* to_s on <var38:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var29)->values[2]=var39;
{
var40 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var43 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var41) on <var41:AbstractCompiler(SeparateCompiler)> */
var46 = var41->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var41:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = nit__model___MModule___object_type(var44);
}
{
var48 = nit___nit__AbstractCompilerVisitor___new_expr(self, var40, var47);
}
var_res = var48;
if (unlikely(var_ret_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2059);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype= (var_res,var_ret_type) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val = var_ret_type; /* _mcasttype on <var_res:RuntimeVariable> */
RET_LABEL49:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___ret(self, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "[]=";
var53 = standard___standard__NativeString___to_s_with_length(var52, 3l);
var51 = var53;
varonce50 = var51;
}
{
var54 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var51); /* == on <var_pname:String>*/
}
if (var54){
if (unlikely(varonce55==NULL)) {
var56 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "[";
var60 = standard___standard__NativeString___to_s_with_length(var59, 1l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var56)->values[1]=var58;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "]=";
var64 = standard___standard__NativeString___to_s_with_length(var63, 2l);
var62 = var64;
varonce61 = var62;
}
((struct instance_standard__NativeArray*)var56)->values[3]=var62;
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = ";";
var68 = standard___standard__NativeString___to_s_with_length(var67, 1l);
var66 = var68;
varonce65 = var66;
}
((struct instance_standard__NativeArray*)var56)->values[5]=var66;
} else {
var56 = varonce55;
varonce55 = NULL;
}
((struct instance_standard__NativeArray*)var56)->values[0]=var_recv;
{
var69 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var70 = ((val*(*)(val* self))(var69->class->vft[COLOR_standard__string__Object__to_s]))(var69); /* to_s on <var69:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var56)->values[2]=var70;
{
var71 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var72 = ((val*(*)(val* self))(var71->class->vft[COLOR_standard__string__Object__to_s]))(var71); /* to_s on <var71:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var56)->values[4]=var72;
{
var73 = ((val*(*)(val* self))(var56->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
nit___nit__AbstractCompilerVisitor___add(self, var73); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "length";
var77 = standard___standard__NativeString___to_s_with_length(var76, 6l);
var75 = var77;
varonce74 = var75;
}
{
var78 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var75); /* == on <var_pname:String>*/
}
if (var78){
if (unlikely(varonce79==NULL)) {
var80 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "((struct instance_";
var84 = standard___standard__NativeString___to_s_with_length(var83, 18l);
var82 = var84;
varonce81 = var82;
}
((struct instance_standard__NativeArray*)var80)->values[0]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "*)";
var88 = standard___standard__NativeString___to_s_with_length(var87, 2l);
var86 = var88;
varonce85 = var86;
}
((struct instance_standard__NativeArray*)var80)->values[2]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = ")->length";
var92 = standard___standard__NativeString___to_s_with_length(var91, 9l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var80)->values[4]=var90;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
var93 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
((struct instance_standard__NativeArray*)var80)->values[1]=var93;
{
var94 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var95 = ((val*(*)(val* self))(var94->class->vft[COLOR_standard__string__Object__to_s]))(var94); /* to_s on <var94:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var80)->values[3]=var95;
{
var96 = ((val*(*)(val* self))(var80->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
if (unlikely(var_ret_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2066);
fatal_exit(1);
}
{
var97 = nit___nit__AbstractCompilerVisitor___new_expr(self, var96, var_ret_type);
}
{
nit___nit__AbstractCompilerVisitor___ret(self, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "copy_to";
var101 = standard___standard__NativeString___to_s_with_length(var100, 7l);
var99 = var101;
varonce98 = var99;
}
{
var102 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pname, var99); /* == on <var_pname:String>*/
}
if (var102){
if (unlikely(varonce103==NULL)) {
var104 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "((struct instance_";
var108 = standard___standard__NativeString___to_s_with_length(var107, 18l);
var106 = var108;
varonce105 = var106;
}
((struct instance_standard__NativeArray*)var104)->values[0]=var106;
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "*)";
var112 = standard___standard__NativeString___to_s_with_length(var111, 2l);
var110 = var112;
varonce109 = var110;
}
((struct instance_standard__NativeArray*)var104)->values[2]=var110;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = ")->values";
var116 = standard___standard__NativeString___to_s_with_length(var115, 9l);
var114 = var116;
varonce113 = var114;
}
((struct instance_standard__NativeArray*)var104)->values[4]=var114;
} else {
var104 = varonce103;
varonce103 = NULL;
}
{
var117 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
((struct instance_standard__NativeArray*)var104)->values[1]=var117;
{
var118 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var119 = ((val*(*)(val* self))(var118->class->vft[COLOR_standard__string__Object__to_s]))(var118); /* to_s on <var118:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var104)->values[3]=var119;
{
var120 = ((val*(*)(val* self))(var104->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var104); /* native_to_s on <var104:NativeArray[String]>*/
}
varonce103 = var104;
var_recv1 = var120;
if (unlikely(varonce121==NULL)) {
var122 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "memmove(";
var126 = standard___standard__NativeString___to_s_with_length(var125, 8l);
var124 = var126;
varonce123 = var124;
}
((struct instance_standard__NativeArray*)var122)->values[0]=var124;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = ", ";
var130 = standard___standard__NativeString___to_s_with_length(var129, 2l);
var128 = var130;
varonce127 = var128;
}
((struct instance_standard__NativeArray*)var122)->values[2]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = ", ";
var134 = standard___standard__NativeString___to_s_with_length(var133, 2l);
var132 = var134;
varonce131 = var132;
}
((struct instance_standard__NativeArray*)var122)->values[4]=var132;
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "*sizeof(";
var138 = standard___standard__NativeString___to_s_with_length(var137, 8l);
var136 = var138;
varonce135 = var136;
}
((struct instance_standard__NativeArray*)var122)->values[6]=var136;
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "));";
var142 = standard___standard__NativeString___to_s_with_length(var141, 3l);
var140 = var142;
varonce139 = var140;
}
((struct instance_standard__NativeArray*)var122)->values[8]=var140;
} else {
var122 = varonce121;
varonce121 = NULL;
}
((struct instance_standard__NativeArray*)var122)->values[1]=var_recv1;
((struct instance_standard__NativeArray*)var122)->values[3]=var_recv;
{
var143 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var144 = ((val*(*)(val* self))(var143->class->vft[COLOR_standard__string__Object__to_s]))(var143); /* to_s on <var143:nullable Object(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var122)->values[5]=var144;
{
var145 = ((val*(*)(val* self))(var_elttype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_elttype); /* ctype on <var_elttype:MType>*/
}
((struct instance_standard__NativeArray*)var122)->values[7]=var145;
{
var146 = ((val*(*)(val* self))(var122->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var122); /* native_to_s on <var122:NativeArray[String]>*/
}
varonce121 = var122;
{
nit___nit__AbstractCompilerVisitor___add(self, var146); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_set for (self: SeparateCompilerVisitor, RuntimeVariable, Int, RuntimeVariable) */
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_set(val* self, val* p0, long p1, val* p2) {
val* var_nat /* var nat: RuntimeVariable */;
long var_i /* var i: Int */;
val* var_val /* var val: RuntimeVariable */;
val* var /* : MModule */;
val* var1 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var_recv /* var recv: String */;
val* var19 /* : NativeArray[String] */;
static val* varonce18;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
var_nat = p0;
var_i = p1;
var_val = p2;
{
var = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var1 = nit__model___MModule___native_array_class(var);
}
var_nclass = var1;
if (unlikely(varonce==NULL)) {
var2 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "((struct instance_";
var6 = standard___standard__NativeString___to_s_with_length(var5, 18l);
var4 = var6;
varonce3 = var4;
}
((struct instance_standard__NativeArray*)var2)->values[0]=var4;
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "*)";
var10 = standard___standard__NativeString___to_s_with_length(var9, 2l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var2)->values[2]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ")->values";
var14 = standard___standard__NativeString___to_s_with_length(var13, 9l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var2)->values[4]=var12;
} else {
var2 = varonce;
varonce = NULL;
}
{
var15 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
((struct instance_standard__NativeArray*)var2)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_standard__string__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var2)->values[3]=var16;
{
var17 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
var_recv = var17;
if (unlikely(varonce18==NULL)) {
var19 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "[";
var23 = standard___standard__NativeString___to_s_with_length(var22, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var19)->values[1]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "]=";
var27 = standard___standard__NativeString___to_s_with_length(var26, 2l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var19)->values[3]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = ";";
var31 = standard___standard__NativeString___to_s_with_length(var30, 1l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var19)->values[5]=var29;
} else {
var19 = varonce18;
varonce18 = NULL;
}
((struct instance_standard__NativeArray*)var19)->values[0]=var_recv;
var32 = standard__string___Int___Object__to_s(var_i);
((struct instance_standard__NativeArray*)var19)->values[2]=var32;
{
var33 = ((val*(*)(val* self))(var_val->class->vft[COLOR_standard__string__Object__to_s]))(var_val); /* to_s on <var_val:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var19)->values[4]=var33;
{
var34 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
{
nit___nit__AbstractCompilerVisitor___add(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#link_unresolved_type for (self: SeparateCompilerVisitor, MClassDef, MType) */
void nit___nit__SeparateCompilerVisitor___link_unresolved_type(val* self, val* p0, val* p1) {
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var4 /* : Map[MClassDef, Set[MType]] */;
val* var6 /* : Map[MClassDef, Set[MType]] */;
val* var7 /* : nullable StaticFrame */;
val* var9 /* : nullable StaticFrame */;
val* var10 /* : MPropDef */;
val* var12 /* : MPropDef */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Map[MClassDef, Set[MType]] */;
val* var20 /* : Map[MClassDef, Set[MType]] */;
val* var21 /* : nullable StaticFrame */;
val* var23 /* : nullable StaticFrame */;
val* var24 /* : MPropDef */;
val* var26 /* : MPropDef */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : HashSet[MType] */;
val* var31 /* : Map[MClassDef, Set[MType]] */;
val* var33 /* : Map[MClassDef, Set[MType]] */;
val* var34 /* : nullable StaticFrame */;
val* var36 /* : nullable StaticFrame */;
val* var37 /* : MPropDef */;
val* var39 /* : MPropDef */;
val* var40 /* : MClassDef */;
val* var42 /* : MClassDef */;
val* var43 /* : nullable Object */;
var_mclassdef = p0;
var_mtype = p1;
{
var = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2092);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_compiler = var1;
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var6 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 147);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var9 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2094);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var7) on <var7:nullable StaticFrame> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var12 = var7->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var7:nullable StaticFrame> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var10) on <var10:MPropDef> */
var15 = var10->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var10:MPropDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var4, var13); /* has_key on <var4:Map[MClassDef, Set[MType]]>*/
}
var17 = !var16;
if (var17){
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var20 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 147);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var23 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2095);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var21) on <var21:nullable StaticFrame> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var26 = var21->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var21:nullable StaticFrame> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var24) on <var24:MPropDef> */
var29 = var24->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var24:MPropDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = NEW_standard__HashSet(&type_standard__HashSet__nit__MType);
{
standard___standard__HashSet___standard__kernel__Object__init(var30); /* Direct call hash_collection#HashSet#init on <var30:HashSet[MType]>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var18, var27, var30); /* []= on <var18:Map[MClassDef, Set[MType]]>*/
}
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var33 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 147);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var36 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2097);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var34) on <var34:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var34:nullable StaticFrame> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var37) on <var37:MPropDef> */
var42 = var37->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var37:MPropDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self, val* p0))((((long)var31&3)?class_info[((long)var31&3)]:var31->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var31, var40); /* [] on <var31:Map[MClassDef, Set[MType]]>*/
}
{
((void(*)(val* self, val* p0))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var43, var_mtype); /* add on <var43:nullable Object(Set[MType])>*/
}
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#separate_runtime_function for (self: MMethodDef): SeparateRuntimeFunction */
val* nit__separate_compiler___MMethodDef___separate_runtime_function(val* self) {
val* var /* : SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
val* var3 /* : nullable SeparateRuntimeFunction */;
val* var_res /* var res: nullable SeparateRuntimeFunction */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var16 /* : nullable MSignature */;
val* var18 /* : nullable MSignature */;
val* var19 /* : MClassDef */;
val* var21 /* : MClassDef */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var25 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var26 /* : SeparateRuntimeFunction */;
val* var27 /* : String */;
{
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_nit__separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
if (var_res == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable SeparateRuntimeFunction> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var9 = var_res == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MMethodDef> */
var12 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MMethodDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_recv = var13;
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var18 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MMethodDef> */
var21 = self->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MMethodDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var19) on <var19:MClassDef> */
var24 = var19->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var19:MClassDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2108);
fatal_exit(1);
} else {
var25 = nit___nit__MSignature___MType__resolve_for(var16, var_recv, var_recv, var22, 1);
}
var_msignature = var25;
var26 = NEW_nit__SeparateRuntimeFunction(&type_nit__SeparateRuntimeFunction);
{
var27 = nit___nit__MPropDef___nit__model_base__MEntity__c_name(self);
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nit__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d]))(var26, self); /* mmethoddef= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__called_recv_61d]))(var26, var_recv); /* called_recv= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__called_signature_61d]))(var26, var_msignature); /* called_signature= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__build_c_name_61d]))(var26, var27); /* build_c_name= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_standard__kernel__Object__init]))(var26); /* init on <var26:SeparateRuntimeFunction>*/
}
var_res = var26;
{
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nit__separate_compiler__MMethodDef___separate_runtime_function_cache].val = var_res; /* _separate_runtime_function_cache on <self:MMethodDef> */
RET_LABEL28:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache for (self: MMethodDef): nullable SeparateRuntimeFunction */
val* nit__separate_compiler___MMethodDef___separate_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
var1 = self->attrs[COLOR_nit__separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache= for (self: MMethodDef, nullable SeparateRuntimeFunction) */
void nit__separate_compiler___MMethodDef___separate_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__MMethodDef___separate_runtime_function_cache].val = p0; /* _separate_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function for (self: MMethodDef): SeparateRuntimeFunction */
val* nit__separate_compiler___MMethodDef___virtual_runtime_function(val* self) {
val* var /* : SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
val* var3 /* : nullable SeparateRuntimeFunction */;
val* var_res /* var res: nullable SeparateRuntimeFunction */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MProperty */;
val* var12 /* : MProperty */;
val* var13 /* : MPropDef */;
val* var15 /* : MPropDef */;
val* var16 /* : MClassDef */;
val* var18 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var22 /* : SeparateRuntimeFunction */;
val* var23 /* : MType */;
val* var25 /* : MType */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
val* var32 /* : MProperty */;
val* var34 /* : MProperty */;
val* var35 /* : MPropDef */;
val* var37 /* : MPropDef */;
val* var38 /* : nullable MSignature */;
val* var40 /* : nullable MSignature */;
val* var41 /* : MModule */;
val* var43 /* : MModule */;
val* var44 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var45 /* : Bool */;
val* var46 /* : String */;
val* var47 /* : MType */;
val* var49 /* : MType */;
val* var50 /* : String */;
short int var51 /* : Bool */;
short int var_ /* var : Bool */;
val* var52 /* : MSignature */;
val* var54 /* : MSignature */;
short int var55 /* : Bool */;
val* var57 /* : SeparateRuntimeFunction */;
val* var58 /* : NativeArray[String] */;
static val* varonce;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
val* var63 /* : String */;
val* var64 /* : String */;
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
if (var_res == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable SeparateRuntimeFunction> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var9 = var_res == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var12 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var10) on <var10:MProperty(MMethod)> */
var15 = var10->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var10:MProperty(MMethod)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var13) on <var13:MPropDef(MMethodDef)> */
var18 = var13->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var13:MPropDef(MMethodDef)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_intromclassdef = var16;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var21 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_recv = var19;
{
var22 = nit__separate_compiler___MMethodDef___separate_runtime_function(self);
}
var_res = var22;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_recv (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var25 = var_res->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2170);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var23,var_recv) on <var23:MType> */
var_other = var_recv;
{
{ /* Inline kernel#Object#is_same_instance (var23,var_other) on <var23:MType> */
var30 = var23 == var_other;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL31:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var34 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var32) on <var32:MProperty(MMethod)> */
var37 = var32->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var32:MProperty(MMethod)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var35) on <var35:MPropDef(MMethodDef)> */
var40 = var35->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var35:MPropDef(MMethodDef)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var43 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2133);
fatal_exit(1);
} else {
var44 = nit___nit__MSignature___MType__resolve_for(var38, var_recv, var_recv, var41, 1);
}
var_msignature = var44;
{
var46 = nit__abstract_compiler___MClassType___MType__ctype(var_recv);
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_recv (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var49 = var_res->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2170);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val*(*)(val* self))(var47->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var47); /* ctype on <var47:MType>*/
}
{
var51 = ((short int(*)(val* self, val* p0))(var46->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var46, var50); /* == on <var46:String>*/
}
var_ = var51;
if (var51){
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var54 = var_res->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2173);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = nit__separate_compiler___MSignature___c_equiv(var_msignature, var52);
}
var45 = var55;
} else {
var45 = var_;
}
if (var45){
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL56:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
var57 = NEW_nit__SeparateRuntimeFunction(&type_nit__SeparateRuntimeFunction);
if (unlikely(varonce==NULL)) {
var58 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "VIRTUAL_";
var62 = standard___standard__NativeString___to_s_with_length(var61, 8l);
var60 = var62;
varonce59 = var60;
}
((struct instance_standard__NativeArray*)var58)->values[0]=var60;
} else {
var58 = varonce;
varonce = NULL;
}
{
var63 = nit___nit__MPropDef___nit__model_base__MEntity__c_name(self);
}
((struct instance_standard__NativeArray*)var58)->values[1]=var63;
{
var64 = ((val*(*)(val* self))(var58->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce = var58;
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nit__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d]))(var57, self); /* mmethoddef= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__called_recv_61d]))(var57, var_recv); /* called_recv= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__called_signature_61d]))(var57, var_msignature); /* called_signature= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nit__separate_compiler__SeparateRuntimeFunction__build_c_name_61d]))(var57, var64); /* build_c_name= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self))(var57->class->vft[COLOR_standard__kernel__Object__init]))(var57); /* init on <var57:SeparateRuntimeFunction>*/
}
var_res = var57;
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL65:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#is_thunk= (var_res,1) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var_res->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___is_thunk].s = 1; /* _is_thunk on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
RET_LABEL66:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache for (self: MMethodDef): nullable SeparateRuntimeFunction */
val* nit__separate_compiler___MMethodDef___virtual_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
var1 = self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache= for (self: MMethodDef, nullable SeparateRuntimeFunction) */
void nit__separate_compiler___MMethodDef___virtual_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = p0; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler#MSignature#c_equiv for (self: MSignature, MSignature): Bool */
short int nit__separate_compiler___MSignature___c_equiv(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: MSignature */;
short int var1 /* : Bool */;
val* var_other3 /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
long var_i /* var i: Int */;
long var13 /* : Int */;
long var_ /* var : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
val* var18 /* : Array[MParameter] */;
val* var20 /* : Array[MParameter] */;
val* var21 /* : nullable Object */;
val* var22 /* : MType */;
val* var24 /* : MType */;
val* var25 /* : String */;
val* var26 /* : Array[MParameter] */;
val* var28 /* : Array[MParameter] */;
val* var29 /* : nullable Object */;
val* var30 /* : MType */;
val* var32 /* : MType */;
val* var33 /* : String */;
short int var34 /* : Bool */;
val* var_other36 /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
long var39 /* : Int */;
val* var40 /* : nullable MType */;
val* var42 /* : nullable MType */;
val* var43 /* : nullable MType */;
val* var45 /* : nullable MType */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : nullable MType */;
val* var54 /* : nullable MType */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var_61 /* var : Bool */;
val* var62 /* : nullable MType */;
val* var64 /* : nullable MType */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : nullable MType */;
val* var73 /* : nullable MType */;
val* var74 /* : String */;
val* var75 /* : nullable MType */;
val* var77 /* : nullable MType */;
val* var78 /* : String */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
var_other = p0;
{
{ /* Inline kernel#Object#== (self,var_other) on <self:MSignature> */
var_other3 = var_other;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other3) on <self:MSignature> */
var6 = self == var_other3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
var7 = nit___nit__MSignature___arity(self);
}
{
var8 = nit___nit__MSignature___arity(var_other);
}
{
{ /* Inline kernel#Int#!= (var7,var8) on <var7:Int> */
var11 = var7 == var8;
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var_i = 0l;
{
var13 = nit___nit__MSignature___arity(self);
}
var_ = var13;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var16 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var17 = var_i < var_;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var20 = self->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var18, var_i);
}
{
{ /* Inline model#MParameter#mtype (var21) on <var21:nullable Object(MParameter)> */
var24 = var21->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var21:nullable Object(MParameter)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = ((val*(*)(val* self))(var22->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var22); /* ctype on <var22:MType>*/
}
{
{ /* Inline model#MSignature#mparameters (var_other) on <var_other:MSignature> */
var28 = var_other->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_other:MSignature> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var26, var_i);
}
{
{ /* Inline model#MParameter#mtype (var29) on <var29:nullable Object(MParameter)> */
var32 = var29->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var29:nullable Object(MParameter)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = ((val*(*)(val* self))(var30->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var30); /* ctype on <var30:MType>*/
}
{
{ /* Inline kernel#Object#!= (var25,var33) on <var25:String> */
var_other36 = var33;
{
var37 = ((short int(*)(val* self, val* p0))(var25->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var25, var_other36); /* == on <var25:String>*/
}
var38 = !var37;
var34 = var38;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var = 0;
goto RET_LABEL;
} else {
}
{
var39 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var39;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var42 = self->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var_other) on <var_other:MSignature> */
var45 = var_other->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var40 == NULL) {
var46 = (var43 != NULL);
} else {
{ /* Inline kernel#Object#!= (var40,var43) on <var40:nullable MType> */
var_other36 = var43;
{
var49 = ((short int(*)(val* self, val* p0))(var40->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var40, var_other36); /* == on <var40:nullable MType(MType)>*/
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var54 = self->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (var52 == NULL) {
var55 = 1; /* is null */
} else {
var55 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var52,((val*)NULL)) on <var52:nullable MType> */
var_other3 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other3) on <var52:nullable MType(MType)> */
var60 = var52 == var_other3;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
var_61 = var55;
if (var55){
var51 = var_61;
} else {
{
{ /* Inline model#MSignature#return_mtype (var_other) on <var_other:MSignature> */
var64 = var_other->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (var62 == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var62,((val*)NULL)) on <var62:nullable MType> */
var_other3 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var62,var_other3) on <var62:nullable MType(MType)> */
var70 = var62 == var_other3;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
var51 = var65;
}
if (var51){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var73 = self->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2160);
fatal_exit(1);
} else {
var74 = ((val*(*)(val* self))(var71->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var71); /* ctype on <var71:nullable MType>*/
}
{
{ /* Inline model#MSignature#return_mtype (var_other) on <var_other:MSignature> */
var77 = var_other->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (var75 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2160);
fatal_exit(1);
} else {
var78 = ((val*(*)(val* self))(var75->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var75); /* ctype on <var75:nullable MType>*/
}
{
{ /* Inline kernel#Object#!= (var74,var78) on <var74:String> */
var_other36 = var78;
{
var81 = ((short int(*)(val* self, val* p0))(var74->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var74, var_other36); /* == on <var74:String>*/
}
var82 = !var81;
var79 = var82;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#called_recv for (self: SeparateRuntimeFunction): MType */
val* nit___nit__SeparateRuntimeFunction___called_recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2170);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#called_recv= for (self: SeparateRuntimeFunction, MType) */
void nit___nit__SeparateRuntimeFunction___called_recv_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val = p0; /* _called_recv on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#called_signature for (self: SeparateRuntimeFunction): MSignature */
val* nit___nit__SeparateRuntimeFunction___called_signature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2173);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#called_signature= for (self: SeparateRuntimeFunction, MSignature) */
void nit___nit__SeparateRuntimeFunction___called_signature_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val = p0; /* _called_signature on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#build_c_name for (self: SeparateRuntimeFunction): String */
val* nit___nit__SeparateRuntimeFunction___nit__abstract_compiler__AbstractRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___build_c_name].val; /* _build_c_name on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _build_c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2176);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#build_c_name= for (self: SeparateRuntimeFunction, String) */
void nit___nit__SeparateRuntimeFunction___build_c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___build_c_name].val = p0; /* _build_c_name on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#is_thunk for (self: SeparateRuntimeFunction): Bool */
short int nit___nit__SeparateRuntimeFunction___is_thunk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___is_thunk].s; /* _is_thunk on <self:SeparateRuntimeFunction> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#is_thunk= for (self: SeparateRuntimeFunction, Bool) */
void nit___nit__SeparateRuntimeFunction___is_thunk_61d(val* self, short int p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___is_thunk].s = p0; /* _is_thunk on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#to_s for (self: SeparateRuntimeFunction): String */
val* nit___nit__SeparateRuntimeFunction___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1748);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MPropDef#to_s (var1) on <var1:MMethodDef> */
var6 = var1->attrs[COLOR_nit__model__MPropDef___to_s].val; /* _to_s on <var1:MMethodDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2303);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#c_ret for (self: SeparateRuntimeFunction): String */
val* nit___nit__SeparateRuntimeFunction___c_ret(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MSignature */;
val* var7 /* : MSignature */;
val* var8 /* : nullable MType */;
val* var10 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : String */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_ret].val != NULL; /* _c_ret on <self:SeparateRuntimeFunction> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_ret].val; /* _c_ret on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_ret");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2184);
fatal_exit(1);
}
} else {
{
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var7 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2173);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var5) on <var5:MSignature> */
var10 = var5->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var5:MSignature> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ret = var8;
if (var_ret == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
var16 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_ret); /* ctype on <var_ret:nullable MType(MType)>*/
}
var3 = var16;
goto RET_LABEL4;
} else {
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "void";
var19 = standard___standard__NativeString___to_s_with_length(var18, 4l);
var17 = var19;
varonce = var17;
}
var3 = var17;
goto RET_LABEL4;
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_ret].val = var3; /* _c_ret on <self:SeparateRuntimeFunction> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#c_sig for (self: SeparateRuntimeFunction): String */
val* nit___nit__SeparateRuntimeFunction___c_sig(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : FlatBuffer */;
val* var_sig /* var sig: FlatBuffer */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : MType */;
val* var18 /* : MType */;
val* var19 /* : String */;
val* var20 /* : String */;
long var_i /* var i: Int */;
val* var21 /* : MSignature */;
val* var23 /* : MSignature */;
long var24 /* : Int */;
long var_ /* var : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var28 /* : Bool */;
val* var29 /* : MSignature */;
val* var31 /* : MSignature */;
val* var32 /* : Array[MParameter] */;
val* var34 /* : Array[MParameter] */;
val* var35 /* : nullable Object */;
val* var36 /* : MType */;
val* var38 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var39 /* : MSignature */;
val* var41 /* : MSignature */;
long var42 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : MMethodDef */;
val* var50 /* : MMethodDef */;
val* var51 /* : MClassDef */;
val* var53 /* : MClassDef */;
val* var54 /* : MModule */;
val* var56 /* : MModule */;
val* var57 /* : MClassType */;
val* var59 /* : NativeArray[String] */;
static val* varonce58;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : String */;
long var71 /* : Int */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
val* var76 /* : String */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_sig].val != NULL; /* _c_sig on <self:SeparateRuntimeFunction> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_sig].val; /* _c_sig on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_sig");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2194);
fatal_exit(1);
}
} else {
{
var5 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var5) on <var5:FlatBuffer> */
{
((void(*)(val* self))(var5->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
RET_LABEL6:(void)0;
}
}
var_sig = var5;
if (unlikely(varonce==NULL)) {
var7 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "(";
var11 = standard___standard__NativeString___to_s_with_length(var10, 1l);
var9 = var11;
varonce8 = var9;
}
((struct instance_standard__NativeArray*)var7)->values[0]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = " self";
var15 = standard___standard__NativeString___to_s_with_length(var14, 5l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var7)->values[2]=var13;
} else {
var7 = varonce;
varonce = NULL;
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_recv (self) on <self:SeparateRuntimeFunction> */
var18 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2170);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((val*(*)(val* self))(var16->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var16); /* ctype on <var16:MType>*/
}
((struct instance_standard__NativeArray*)var7)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var7->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var20); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
var_i = 0l;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var23 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2173);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nit___nit__MSignature___arity(var21);
}
var_ = var24;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var27 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var28 = var_i < var_;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var31 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2173);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MSignature#mparameters (var29) on <var29:MSignature> */
var34 = var29->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var29:MSignature> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var32, var_i);
}
{
{ /* Inline model#MParameter#mtype (var35) on <var35:nullable Object(MParameter)> */
var38 = var35->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var35:nullable Object(MParameter)> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_mtype = var36;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var41 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2173);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MSignature#vararg_rank (var39) on <var39:MSignature> */
var44 = var39->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var39:MSignature> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var42) on <var_i:Int> */
var47 = var_i == var42;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var50 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1748);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var48) on <var48:MMethodDef> */
var53 = var48->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var48:MMethodDef> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var51) on <var51:MClassDef> */
var56 = var51->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var51:MClassDef> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nit__model___MModule___array_type(var54, var_mtype);
}
var_mtype = var57;
} else {
}
if (unlikely(varonce58==NULL)) {
var59 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ", ";
var63 = standard___standard__NativeString___to_s_with_length(var62, 2l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var59)->values[0]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = " p";
var67 = standard___standard__NativeString___to_s_with_length(var66, 2l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var59)->values[2]=var65;
} else {
var59 = varonce58;
varonce58 = NULL;
}
{
var68 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var59)->values[1]=var68;
var69 = standard__string___Int___Object__to_s(var_i);
((struct instance_standard__NativeArray*)var59)->values[3]=var69;
{
var70 = ((val*(*)(val* self))(var59->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var59); /* native_to_s on <var59:NativeArray[String]>*/
}
varonce58 = var59;
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var70); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
{
var71 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var71;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = ")";
var75 = standard___standard__NativeString___to_s_with_length(var74, 1l);
var73 = var75;
varonce72 = var73;
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var73); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
{
var76 = standard___standard__FlatBuffer___Object__to_s(var_sig);
}
var3 = var76;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_sig].val = var3; /* _c_sig on <self:SeparateRuntimeFunction> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#c_funptrtype for (self: SeparateRuntimeFunction): String */
val* nit___nit__SeparateRuntimeFunction___c_funptrtype(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_funptrtype].val != NULL; /* _c_funptrtype on <self:SeparateRuntimeFunction> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_funptrtype].val; /* _c_funptrtype on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_funptrtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2209);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "(*)";
var9 = standard___standard__NativeString___to_s_with_length(var8, 3l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = nit___nit__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_standard__NativeArray*)var5)->values[0]=var10;
{
var11 = nit___nit__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_standard__NativeArray*)var5)->values[2]=var11;
{
var12 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var12;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_funptrtype].val = var3; /* _c_funptrtype on <self:SeparateRuntimeFunction> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#arguments for (self: SeparateRuntimeFunction): Array[RuntimeVariable] */
val* nit___nit__SeparateRuntimeFunction___arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___arguments].val; /* _arguments on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2212);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#arguments= for (self: SeparateRuntimeFunction, Array[RuntimeVariable]) */
void nit___nit__SeparateRuntimeFunction___arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___arguments].val = p0; /* _arguments on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#compile_to_c for (self: SeparateRuntimeFunction, AbstractCompiler) */
void nit___nit__SeparateRuntimeFunction___nit__abstract_compiler__AbstractRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var4 /* : MMethodDef */;
val* var6 /* : MMethodDef */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var13 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var14 /* : RuntimeVariable */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
val* var18 /* : MType */;
val* var20 /* : MType */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var21 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var22 /* : StaticFrame */;
val* var_frame /* var frame: StaticFrame */;
val* var24 /* : MSignature */;
val* var26 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var27 /* : MSignature */;
val* var29 /* : MSignature */;
val* var30 /* : nullable MType */;
val* var32 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var33 /* : FlatBuffer */;
val* var_sig /* var sig: FlatBuffer */;
val* var35 /* : FlatBuffer */;
val* var_comment /* var comment: FlatBuffer */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
val* var54 /* : String */;
val* var55 /* : MType */;
val* var57 /* : MType */;
val* var58 /* : String */;
val* var59 /* : String */;
long var_i /* var i: Int */;
long var60 /* : Int */;
long var_ /* var : Int */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
short int var67 /* : Bool */;
val* var68 /* : Array[MParameter] */;
val* var70 /* : Array[MParameter] */;
val* var71 /* : nullable Object */;
val* var72 /* : MType */;
val* var74 /* : MType */;
val* var_mtype /* var mtype: MType */;
long var75 /* : Int */;
long var77 /* : Int */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
val* var81 /* : MModule */;
val* var82 /* : MClassType */;
val* var84 /* : NativeArray[String] */;
static val* varonce83;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : RuntimeVariable */;
val* var93 /* : NativeArray[String] */;
static val* varonce92;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : FlatString */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
long var100 /* : Int */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : FlatString */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
val* var111 /* : NativeArray[String] */;
static val* varonce110;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
val* var116 /* : String */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var120 /* : NativeArray[String] */;
static val* varonce119;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : FlatString */;
val* var125 /* : String */;
val* var126 /* : String */;
val* var127 /* : Array[nullable Object] */;
val* var130 /* : NativeArray[String] */;
static val* varonce129;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
val* var138 /* : FlatString */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
val* var142 /* : FlatString */;
val* var143 /* : String */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var147 /* : NativeArray[String] */;
static val* varonce146;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
val* var151 /* : FlatString */;
val* var152 /* : String */;
val* var153 /* : String */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
val* var159 /* : RuntimeVariable */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
val* var164 /* : FlatString */;
val* var165 /* : String */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
val* var170 /* : nullable RuntimeVariable */;
val* var_subret /* var subret: nullable RuntimeVariable */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
short int var177 /* : Bool */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
val* var181 /* : nullable RuntimeVariable */;
val* var183 /* : nullable RuntimeVariable */;
val* var184 /* : nullable RuntimeVariable */;
val* var186 /* : NativeArray[String] */;
static val* varonce185;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : FlatString */;
val* var191 /* : nullable String */;
val* var193 /* : nullable String */;
val* var194 /* : String */;
short int var195 /* : Bool */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
val* var201 /* : NativeArray[String] */;
static val* varonce200;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
val* var205 /* : FlatString */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
val* var209 /* : FlatString */;
val* var210 /* : nullable RuntimeVariable */;
val* var212 /* : nullable RuntimeVariable */;
val* var213 /* : String */;
val* var214 /* : String */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
val* var218 /* : FlatString */;
val* var219 /* : HashMap[String, String] */;
val* var221 /* : HashMap[String, String] */;
val* var222 /* : String */;
val* var224 /* : NativeArray[String] */;
static val* varonce223;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
val* var228 /* : FlatString */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
val* var232 /* : FlatString */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
val* var236 /* : FlatString */;
val* var237 /* : String */;
val* var238 /* : Location */;
val* var240 /* : Location */;
val* var241 /* : nullable SourceFile */;
val* var243 /* : nullable SourceFile */;
val* var244 /* : String */;
val* var246 /* : String */;
val* var247 /* : Location */;
val* var249 /* : Location */;
long var250 /* : Int */;
long var252 /* : Int */;
val* var253 /* : String */;
val* var254 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__AbstractRuntimeFunction__COMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2215);
fatal_exit(1);
}
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1748);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmethoddef = var1;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var6 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1748);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var4) on <var4:MMethodDef> */
var9 = var4->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var4:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_recv = var10;
{
var13 = ((val*(*)(val* self))(var_compiler->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler); /* new_visitor on <var_compiler:AbstractCompiler>*/
}
var_v = var13;
var14 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "self";
var17 = standard___standard__NativeString___to_s_with_length(var16, 4l);
var15 = var17;
varonce = var15;
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_recv (self) on <self:SeparateRuntimeFunction> */
var20 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2170);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var14, var15); /* name= on <var14:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var14, var18); /* mtype= on <var14:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var14, var_recv); /* mcasttype= on <var14:RuntimeVariable>*/
}
{
((void(*)(val* self))(var14->class->vft[COLOR_standard__kernel__Object__init]))(var14); /* init on <var14:RuntimeVariable>*/
}
var_selfvar = var14;
var21 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___standard__kernel__Object__init(var21); /* Direct call array#Array#init on <var21:Array[RuntimeVariable]>*/
}
var_arguments = var21;
var22 = NEW_nit__StaticFrame(&type_nit__StaticFrame);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nit__abstract_compiler__StaticFrame__visitor_61d]))(var22, var_v); /* visitor= on <var22:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nit__abstract_compiler__StaticFrame__mpropdef_61d]))(var22, var_mmethoddef); /* mpropdef= on <var22:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nit__abstract_compiler__StaticFrame__receiver_61d]))(var22, var_recv); /* receiver= on <var22:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nit__abstract_compiler__StaticFrame__arguments_61d]))(var22, var_arguments); /* arguments= on <var22:StaticFrame>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_standard__kernel__Object__init]))(var22); /* init on <var22:StaticFrame>*/
}
var_frame = var22;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var26 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2173);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_msignature = var24;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var29 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2173);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var27) on <var27:MSignature> */
var32 = var27->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var27:MSignature> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_ret = var30;
var33 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var33) on <var33:FlatBuffer> */
{
((void(*)(val* self))(var33->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var33); /* init on <var33:FlatBuffer>*/
}
RET_LABEL34:(void)0;
}
}
var_sig = var33;
var35 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var35) on <var35:FlatBuffer> */
{
((void(*)(val* self))(var35->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var35); /* init on <var35:FlatBuffer>*/
}
RET_LABEL36:(void)0;
}
}
var_comment = var35;
{
var37 = nit___nit__SeparateRuntimeFunction___c_ret(self);
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var37); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " ";
var41 = standard___standard__NativeString___to_s_with_length(var40, 1l);
var39 = var41;
varonce38 = var39;
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var39); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
{
var42 = nit___nit__AbstractRuntimeFunction___c_name(self);
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var42); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
{
var43 = nit___nit__SeparateRuntimeFunction___c_sig(self);
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var43); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (unlikely(varonce44==NULL)) {
var45 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "(";
var49 = standard___standard__NativeString___to_s_with_length(var48, 1l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var45)->values[0]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = ": ";
var53 = standard___standard__NativeString___to_s_with_length(var52, 2l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var45)->values[2]=var51;
} else {
var45 = varonce44;
varonce44 = NULL;
}
{
var54 = ((val*(*)(val* self))(var_selfvar->class->vft[COLOR_standard__string__Object__to_s]))(var_selfvar); /* to_s on <var_selfvar:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var45)->values[1]=var54;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var57 = var_selfvar->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = ((val*(*)(val* self))(var55->class->vft[COLOR_standard__string__Object__to_s]))(var55); /* to_s on <var55:MType>*/
}
((struct instance_standard__NativeArray*)var45)->values[3]=var58;
{
var59 = ((val*(*)(val* self))(var45->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
standard___standard__FlatBuffer___Buffer__append(var_comment, var59); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_arguments, var_selfvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
var_i = 0l;
{
var60 = nit___nit__MSignature___arity(var_msignature);
}
var_ = var60;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var63 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var67 = var_i < var_;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var70 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var68, var_i);
}
{
{ /* Inline model#MParameter#mtype (var71) on <var71:nullable Object(MParameter)> */
var74 = var71->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var71:nullable Object(MParameter)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_mtype = var72;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var77 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var75) on <var_i:Int> */
var80 = var_i == var75;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
if (var78){
{
var81 = nit___nit__AbstractCompilerVisitor___mmodule(var_v);
}
{
var82 = nit__model___MModule___array_type(var81, var_mtype);
}
var_mtype = var82;
} else {
}
if (unlikely(varonce83==NULL)) {
var84 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = ", ";
var88 = standard___standard__NativeString___to_s_with_length(var87, 2l);
var86 = var88;
varonce85 = var86;
}
((struct instance_standard__NativeArray*)var84)->values[0]=var86;
} else {
var84 = varonce83;
varonce83 = NULL;
}
{
var89 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var84)->values[1]=var89;
{
var90 = ((val*(*)(val* self))(var84->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var84); /* native_to_s on <var84:NativeArray[String]>*/
}
varonce83 = var84;
{
standard___standard__FlatBuffer___Buffer__append(var_comment, var90); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
var91 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
if (unlikely(varonce92==NULL)) {
var93 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "p";
var97 = standard___standard__NativeString___to_s_with_length(var96, 1l);
var95 = var97;
varonce94 = var95;
}
((struct instance_standard__NativeArray*)var93)->values[0]=var95;
} else {
var93 = varonce92;
varonce92 = NULL;
}
var98 = standard__string___Int___Object__to_s(var_i);
((struct instance_standard__NativeArray*)var93)->values[1]=var98;
{
var99 = ((val*(*)(val* self))(var93->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var93); /* native_to_s on <var93:NativeArray[String]>*/
}
varonce92 = var93;
{
((void(*)(val* self, val* p0))(var91->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var91, var99); /* name= on <var91:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var91->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var91, var_mtype); /* mtype= on <var91:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var91->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var91, var_mtype); /* mcasttype= on <var91:RuntimeVariable>*/
}
{
((void(*)(val* self))(var91->class->vft[COLOR_standard__kernel__Object__init]))(var91); /* init on <var91:RuntimeVariable>*/
}
var_argvar = var91;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_arguments, var_argvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
{
var100 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var100;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = ")";
var104 = standard___standard__NativeString___to_s_with_length(var103, 1l);
var102 = var104;
varonce101 = var102;
}
{
standard___standard__FlatBuffer___Buffer__append(var_comment, var102); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
if (var_ret == NULL) {
var105 = 0; /* is null */
} else {
var105 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var108 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var109 = !var108;
var106 = var109;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
var105 = var106;
}
if (var105){
if (unlikely(varonce110==NULL)) {
var111 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = ": ";
var115 = standard___standard__NativeString___to_s_with_length(var114, 2l);
var113 = var115;
varonce112 = var113;
}
((struct instance_standard__NativeArray*)var111)->values[0]=var113;
} else {
var111 = varonce110;
varonce110 = NULL;
}
{
var116 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_standard__string__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var111)->values[1]=var116;
{
var117 = ((val*(*)(val* self))(var111->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var111); /* native_to_s on <var111:NativeArray[String]>*/
}
varonce110 = var111;
{
standard___standard__FlatBuffer___Buffer__append(var_comment, var117); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
} else {
}
{
var118 = nit___nit__AbstractRuntimeFunction___c_name(self);
}
if (unlikely(varonce119==NULL)) {
var120 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = ";";
var124 = standard___standard__NativeString___to_s_with_length(var123, 1l);
var122 = var124;
varonce121 = var122;
}
((struct instance_standard__NativeArray*)var120)->values[1]=var122;
} else {
var120 = varonce119;
varonce119 = NULL;
}
{
var125 = ((val*(*)(val* self))(var_sig->class->vft[COLOR_standard__string__Object__to_s]))(var_sig); /* to_s on <var_sig:FlatBuffer>*/
}
((struct instance_standard__NativeArray*)var120)->values[0]=var125;
{
var126 = ((val*(*)(val* self))(var120->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var120); /* native_to_s on <var120:NativeArray[String]>*/
}
varonce119 = var120;
{
nit___nit__AbstractCompiler___provide_declaration(var_compiler, var118, var126); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var_compiler:AbstractCompiler>*/
}
{
var127 = standard__array___Collection___to_a(var_arguments);
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#arguments= (self,var127) on <self:SeparateRuntimeFunction> */
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___arguments].val = var127; /* _arguments on <self:SeparateRuntimeFunction> */
RET_LABEL128:(void)0;
}
}
if (unlikely(varonce129==NULL)) {
var130 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "/* method ";
var134 = standard___standard__NativeString___to_s_with_length(var133, 10l);
var132 = var134;
varonce131 = var132;
}
((struct instance_standard__NativeArray*)var130)->values[0]=var132;
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = " for ";
var138 = standard___standard__NativeString___to_s_with_length(var137, 5l);
var136 = var138;
varonce135 = var136;
}
((struct instance_standard__NativeArray*)var130)->values[2]=var136;
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = " */";
var142 = standard___standard__NativeString___to_s_with_length(var141, 3l);
var140 = var142;
varonce139 = var140;
}
((struct instance_standard__NativeArray*)var130)->values[4]=var140;
} else {
var130 = varonce129;
varonce129 = NULL;
}
{
var143 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Object__to_s]))(self); /* to_s on <self:SeparateRuntimeFunction>*/
}
((struct instance_standard__NativeArray*)var130)->values[1]=var143;
{
var144 = ((val*(*)(val* self))(var_comment->class->vft[COLOR_standard__string__Object__to_s]))(var_comment); /* to_s on <var_comment:FlatBuffer>*/
}
((struct instance_standard__NativeArray*)var130)->values[3]=var144;
{
var145 = ((val*(*)(val* self))(var130->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var130); /* native_to_s on <var130:NativeArray[String]>*/
}
varonce129 = var130;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var145); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce146==NULL)) {
var147 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = " {";
var151 = standard___standard__NativeString___to_s_with_length(var150, 2l);
var149 = var151;
varonce148 = var149;
}
((struct instance_standard__NativeArray*)var147)->values[1]=var149;
} else {
var147 = varonce146;
varonce146 = NULL;
}
{
var152 = ((val*(*)(val* self))(var_sig->class->vft[COLOR_standard__string__Object__to_s]))(var_sig); /* to_s on <var_sig:FlatBuffer>*/
}
((struct instance_standard__NativeArray*)var147)->values[0]=var152;
{
var153 = ((val*(*)(val* self))(var147->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var147); /* native_to_s on <var147:NativeArray[String]>*/
}
varonce146 = var147;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var153); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (var_ret == NULL) {
var154 = 0; /* is null */
} else {
var154 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var157 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var158 = !var157;
var155 = var158;
goto RET_LABEL156;
RET_LABEL156:(void)0;
}
var154 = var155;
}
if (var154){
{
var159 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var_ret);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar= (var_frame,var159) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val = var159; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL160:(void)0;
}
}
} else {
}
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "RET_LABEL";
var164 = standard___standard__NativeString___to_s_with_length(var163, 9l);
var162 = var164;
varonce161 = var162;
}
{
var165 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var162);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel= (var_frame,var165) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val = var165; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL166:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#is_thunk (self) on <self:SeparateRuntimeFunction> */
var169 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___is_thunk].s; /* _is_thunk on <self:SeparateRuntimeFunction> */
var167 = var169;
RET_LABEL168:(void)0;
}
}
if (var167){
{
var170 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call(var_v, var_mmethoddef, var_recv, var_arguments);
}
var_subret = var170;
if (var_ret == NULL) {
var171 = 0; /* is null */
} else {
var171 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var174 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var175 = !var174;
var172 = var175;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
var171 = var172;
}
if (var171){
if (var_subret == NULL) {
var176 = 0; /* is null */
} else {
var176 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_subret,((val*)NULL)) on <var_subret:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var179 = ((short int(*)(val* self, val* p0))(var_subret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_subret, var_other); /* == on <var_subret:nullable RuntimeVariable(RuntimeVariable)>*/
}
var180 = !var179;
var177 = var180;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
var176 = var177;
}
if (unlikely(!var176)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2263);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar (var_frame) on <var_frame:StaticFrame> */
var183 = var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var_frame:StaticFrame> */
var181 = var183;
RET_LABEL182:(void)0;
}
}
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2264);
fatal_exit(1);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var181, var_subret); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
{
var184 = nit__abstract_compiler___MMethodDef___compile_inside_to_c(var_mmethoddef, var_v, var_arguments);
}
}
if (unlikely(varonce185==NULL)) {
var186 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = ":;";
var190 = standard___standard__NativeString___to_s_with_length(var189, 2l);
var188 = var190;
varonce187 = var188;
}
((struct instance_standard__NativeArray*)var186)->values[1]=var188;
} else {
var186 = varonce185;
varonce185 = NULL;
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var_frame) on <var_frame:StaticFrame> */
var193 = var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var191 = var193;
RET_LABEL192:(void)0;
}
}
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2270);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var186)->values[0]=var191;
{
var194 = ((val*(*)(val* self))(var186->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var186); /* native_to_s on <var186:NativeArray[String]>*/
}
varonce185 = var186;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var194); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (var_ret == NULL) {
var195 = 0; /* is null */
} else {
var195 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var198 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var199 = !var198;
var196 = var199;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
var195 = var196;
}
if (var195){
if (unlikely(varonce200==NULL)) {
var201 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = "return ";
var205 = standard___standard__NativeString___to_s_with_length(var204, 7l);
var203 = var205;
varonce202 = var203;
}
((struct instance_standard__NativeArray*)var201)->values[0]=var203;
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = ";";
var209 = standard___standard__NativeString___to_s_with_length(var208, 1l);
var207 = var209;
varonce206 = var207;
}
((struct instance_standard__NativeArray*)var201)->values[2]=var207;
} else {
var201 = varonce200;
varonce200 = NULL;
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar (var_frame) on <var_frame:StaticFrame> */
var212 = var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var_frame:StaticFrame> */
var210 = var212;
RET_LABEL211:(void)0;
}
}
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2272);
fatal_exit(1);
}
{
var213 = ((val*(*)(val* self))(var210->class->vft[COLOR_standard__string__Object__to_s]))(var210); /* to_s on <var210:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_standard__NativeArray*)var201)->values[1]=var213;
{
var214 = ((val*(*)(val* self))(var201->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var201); /* native_to_s on <var201:NativeArray[String]>*/
}
varonce200 = var201;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var214); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = "}";
var218 = standard___standard__NativeString___to_s_with_length(var217, 1l);
var216 = var218;
varonce215 = var216;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var216); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (var_compiler) on <var_compiler:AbstractCompiler> */
var221 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val; /* _names on <var_compiler:AbstractCompiler> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 512);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var222 = nit___nit__AbstractRuntimeFunction___c_name(self);
}
if (unlikely(varonce223==NULL)) {
var224 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = " (";
var228 = standard___standard__NativeString___to_s_with_length(var227, 2l);
var226 = var228;
varonce225 = var226;
}
((struct instance_standard__NativeArray*)var224)->values[1]=var226;
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = ":";
var232 = standard___standard__NativeString___to_s_with_length(var231, 1l);
var230 = var232;
varonce229 = var230;
}
((struct instance_standard__NativeArray*)var224)->values[3]=var230;
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = ")";
var236 = standard___standard__NativeString___to_s_with_length(var235, 1l);
var234 = var236;
varonce233 = var234;
}
((struct instance_standard__NativeArray*)var224)->values[5]=var234;
} else {
var224 = varonce223;
varonce223 = NULL;
}
{
var237 = nit___nit__MPropDef___nit__model_base__MEntity__full_name(var_mmethoddef);
}
((struct instance_standard__NativeArray*)var224)->values[0]=var237;
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var240 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2215);
fatal_exit(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
{
{ /* Inline location#Location#file (var238) on <var238:Location> */
var243 = var238->attrs[COLOR_nit__location__Location___file].val; /* _file on <var238:Location> */
var241 = var243;
RET_LABEL242:(void)0;
}
}
if (var241 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2275);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var241) on <var241:nullable SourceFile> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var246 = var241->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var241:nullable SourceFile> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
((struct instance_standard__NativeArray*)var224)->values[2]=var244;
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var249 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2215);
fatal_exit(1);
}
var247 = var249;
RET_LABEL248:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var247) on <var247:Location> */
var252 = var247->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var247:Location> */
var250 = var252;
RET_LABEL251:(void)0;
}
}
var253 = standard__string___Int___Object__to_s(var250);
((struct instance_standard__NativeArray*)var224)->values[4]=var253;
{
var254 = ((val*(*)(val* self))(var224->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var224); /* native_to_s on <var224:NativeArray[String]>*/
}
varonce223 = var224;
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var219, var222, var254); /* Direct call hash_collection#HashMap#[]= on <var219:HashMap[String, String]>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#compile_trampolines for (self: SeparateRuntimeFunction, SeparateCompiler) */
void nit___nit__SeparateRuntimeFunction___compile_trampolines(val* self, val* p0) {
val* var_compiler /* var compiler: SeparateCompiler */;
val* var /* : MMethodDef */;
val* var2 /* : MMethodDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var9 /* : Array[RuntimeVariable] */;
val* var11 /* : Array[RuntimeVariable] */;
val* var12 /* : nullable Object */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var13 /* : MSignature */;
val* var15 /* : MSignature */;
val* var16 /* : nullable MType */;
val* var18 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var19 /* : Bool */;
val* var20 /* : MMethodDef */;
val* var22 /* : MMethodDef */;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : MMethodDef */;
val* var28 /* : MMethodDef */;
val* var29 /* : MProperty */;
val* var31 /* : MProperty */;
val* var_m /* var m: MMethod */;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var_n2 /* var n2: String */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
val* var47 /* : String */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : AbstractCompilerVisitor */;
val* var_v2 /* var v2: SeparateCompilerVisitor */;
val* var52 /* : NativeArray[String] */;
static val* varonce51;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var66 /* : NativeArray[String] */;
static val* varonce65;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : Array[RuntimeVariable] */;
val* var92 /* : Array[RuntimeVariable] */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var_call /* var call: String */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
val* var105 /* : NativeArray[String] */;
static val* varonce104;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : FlatString */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
short int var115 /* : Bool */;
val* var116 /* : MMethodDef */;
val* var118 /* : MMethodDef */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var_122 /* var : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var125 /* : MMethodDef */;
val* var127 /* : MMethodDef */;
val* var_m128 /* var m: MMethodDef */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
val* var133 /* : String */;
val* var134 /* : String */;
val* var_n2135 /* var n2: String */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : FlatString */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : FlatString */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var148 /* : String */;
val* var149 /* : AbstractCompilerVisitor */;
val* var_v2150 /* var v2: SeparateCompilerVisitor */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
val* var156 /* : FlatString */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
val* var160 /* : FlatString */;
val* var161 /* : String */;
val* var162 /* : String */;
val* var163 /* : String */;
val* var164 /* : String */;
val* var166 /* : NativeArray[String] */;
static val* varonce165;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
val* var170 /* : FlatString */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
val* var174 /* : FlatString */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : FlatString */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : FlatString */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
val* var186 /* : FlatString */;
val* var187 /* : String */;
val* var188 /* : String */;
val* var189 /* : String */;
val* var190 /* : Array[RuntimeVariable] */;
val* var192 /* : Array[RuntimeVariable] */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : FlatString */;
val* var197 /* : String */;
val* var198 /* : String */;
val* var_call199 /* var call: String */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
val* var206 /* : NativeArray[String] */;
static val* varonce205;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
val* var210 /* : FlatString */;
val* var211 /* : String */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
val* var215 /* : FlatString */;
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1748);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var) on <var:MMethodDef> */
var5 = var->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_recv = var6;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#arguments (self) on <self:SeparateRuntimeFunction> */
var11 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___arguments].val; /* _arguments on <self:SeparateRuntimeFunction> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2212);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = standard___standard__SequenceRead___Collection__first(var9);
}
var_selfvar = var12;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var15 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2173);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var13) on <var13:MSignature> */
var18 = var13->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var13:MSignature> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ret = var16;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var22 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1748);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit___nit__MPropDef___is_intro(var20);
}
var_ = var23;
if (var23){
{
var24 = nit__abstract_compiler___MClassType___MType__is_c_primitive(var_recv);
}
var25 = !var24;
var19 = var25;
} else {
var19 = var_;
}
if (var19){
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var28 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1748);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var26) on <var26:MMethodDef> */
var31 = var26->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var26:MMethodDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_m = var29;
if (likely(varonce!=NULL)) {
var32 = varonce;
} else {
var33 = "CALL_";
var34 = standard___standard__NativeString___to_s_with_length(var33, 5l);
var32 = var34;
varonce = var32;
}
{
var35 = nit__separate_compiler___MEntity___const_color(var_m);
}
{
var36 = ((val*(*)(val* self, val* p0))(var32->class->vft[COLOR_standard__string__String___43d]))(var32, var35); /* + on <var32:String>*/
}
var_n2 = var36;
if (unlikely(varonce37==NULL)) {
var38 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " ";
var42 = standard___standard__NativeString___to_s_with_length(var41, 1l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var38)->values[1]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = ";";
var46 = standard___standard__NativeString___to_s_with_length(var45, 1l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var38)->values[4]=var44;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
var47 = nit___nit__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_standard__NativeArray*)var38)->values[0]=var47;
((struct instance_standard__NativeArray*)var38)->values[2]=var_n2;
{
var48 = nit___nit__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_standard__NativeArray*)var38)->values[3]=var48;
{
var49 = ((val*(*)(val* self))(var38->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
nit___nit__AbstractCompiler___provide_declaration(var_compiler, var_n2, var49); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var_compiler:SeparateCompiler>*/
}
{
var50 = ((val*(*)(val* self))(var_compiler->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler); /* new_visitor on <var_compiler:SeparateCompiler>*/
}
var_v2 = var50;
if (unlikely(varonce51==NULL)) {
var52 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = " ";
var56 = standard___standard__NativeString___to_s_with_length(var55, 1l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var52)->values[1]=var54;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = " {";
var60 = standard___standard__NativeString___to_s_with_length(var59, 2l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var52)->values[4]=var58;
} else {
var52 = varonce51;
varonce51 = NULL;
}
{
var61 = nit___nit__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_standard__NativeArray*)var52)->values[0]=var61;
((struct instance_standard__NativeArray*)var52)->values[2]=var_n2;
{
var62 = nit___nit__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_standard__NativeArray*)var52)->values[3]=var62;
{
var63 = ((val*(*)(val* self))(var52->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
{
nit___nit__AbstractCompilerVisitor___add(var_v2, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v2:SeparateCompilerVisitor>*/
}
{
var64 = nit__separate_compiler___MEntity___const_color(var_m);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v2, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v2:SeparateCompilerVisitor>*/
}
if (unlikely(varonce65==NULL)) {
var66 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "((";
var70 = standard___standard__NativeString___to_s_with_length(var69, 2l);
var68 = var70;
varonce67 = var68;
}
((struct instance_standard__NativeArray*)var66)->values[0]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = ")(";
var74 = standard___standard__NativeString___to_s_with_length(var73, 2l);
var72 = var74;
varonce71 = var72;
}
((struct instance_standard__NativeArray*)var66)->values[2]=var72;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "->vft[";
var78 = standard___standard__NativeString___to_s_with_length(var77, 6l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var66)->values[4]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "]))(";
var82 = standard___standard__NativeString___to_s_with_length(var81, 4l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var66)->values[6]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = ");";
var86 = standard___standard__NativeString___to_s_with_length(var85, 2l);
var84 = var86;
varonce83 = var84;
}
((struct instance_standard__NativeArray*)var66)->values[8]=var84;
} else {
var66 = varonce65;
varonce65 = NULL;
}
{
var87 = nit___nit__SeparateRuntimeFunction___c_funptrtype(self);
}
((struct instance_standard__NativeArray*)var66)->values[1]=var87;
{
var88 = nit___nit__SeparateCompilerVisitor___class_info(var_v2, var_selfvar);
}
((struct instance_standard__NativeArray*)var66)->values[3]=var88;
{
var89 = nit__separate_compiler___MEntity___const_color(var_m);
}
((struct instance_standard__NativeArray*)var66)->values[5]=var89;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#arguments (self) on <self:SeparateRuntimeFunction> */
var92 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___arguments].val; /* _arguments on <self:SeparateRuntimeFunction> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2212);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = ", ";
var96 = standard___standard__NativeString___to_s_with_length(var95, 2l);
var94 = var96;
varonce93 = var94;
}
{
var97 = standard__string___Collection___join(var90, var94);
}
((struct instance_standard__NativeArray*)var66)->values[7]=var97;
{
var98 = ((val*(*)(val* self))(var66->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var66); /* native_to_s on <var66:NativeArray[String]>*/
}
varonce65 = var66;
var_call = var98;
if (var_ret == NULL) {
var99 = 0; /* is null */
} else {
var99 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var102 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var103 = !var102;
var100 = var103;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
var99 = var100;
}
if (var99){
if (unlikely(varonce104==NULL)) {
var105 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "return ";
var109 = standard___standard__NativeString___to_s_with_length(var108, 7l);
var107 = var109;
varonce106 = var107;
}
((struct instance_standard__NativeArray*)var105)->values[0]=var107;
} else {
var105 = varonce104;
varonce104 = NULL;
}
((struct instance_standard__NativeArray*)var105)->values[1]=var_call;
{
var110 = ((val*(*)(val* self))(var105->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var105); /* native_to_s on <var105:NativeArray[String]>*/
}
varonce104 = var105;
{
nit___nit__AbstractCompilerVisitor___add(var_v2, var110); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v2:SeparateCompilerVisitor>*/
}
} else {
{
nit___nit__AbstractCompilerVisitor___add(var_v2, var_call); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v2:SeparateCompilerVisitor>*/
}
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "}";
var114 = standard___standard__NativeString___to_s_with_length(var113, 1l);
var112 = var114;
varonce111 = var112;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v2, var112); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v2:SeparateCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var118 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1748);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline modelize_property#MPropDef#has_supercall (var116) on <var116:MMethodDef> */
var121 = var116->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <var116:MMethodDef> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
var_122 = var119;
if (var119){
{
var123 = nit__abstract_compiler___MClassType___MType__is_c_primitive(var_recv);
}
var124 = !var123;
var115 = var124;
} else {
var115 = var_122;
}
if (var115){
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var127 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1748);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
var_m128 = var125;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "CALL_";
var132 = standard___standard__NativeString___to_s_with_length(var131, 5l);
var130 = var132;
varonce129 = var130;
}
{
var133 = nit__separate_compiler___MEntity___const_color(var_m128);
}
{
var134 = ((val*(*)(val* self, val* p0))(var130->class->vft[COLOR_standard__string__String___43d]))(var130, var133); /* + on <var130:String>*/
}
var_n2135 = var134;
if (unlikely(varonce136==NULL)) {
var137 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = " ";
var141 = standard___standard__NativeString___to_s_with_length(var140, 1l);
var139 = var141;
varonce138 = var139;
}
((struct instance_standard__NativeArray*)var137)->values[1]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = ";";
var145 = standard___standard__NativeString___to_s_with_length(var144, 1l);
var143 = var145;
varonce142 = var143;
}
((struct instance_standard__NativeArray*)var137)->values[4]=var143;
} else {
var137 = varonce136;
varonce136 = NULL;
}
{
var146 = nit___nit__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_standard__NativeArray*)var137)->values[0]=var146;
((struct instance_standard__NativeArray*)var137)->values[2]=var_n2135;
{
var147 = nit___nit__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_standard__NativeArray*)var137)->values[3]=var147;
{
var148 = ((val*(*)(val* self))(var137->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
{
nit___nit__AbstractCompiler___provide_declaration(var_compiler, var_n2135, var148); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var_compiler:SeparateCompiler>*/
}
{
var149 = ((val*(*)(val* self))(var_compiler->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler); /* new_visitor on <var_compiler:SeparateCompiler>*/
}
var_v2150 = var149;
if (unlikely(varonce151==NULL)) {
var152 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = " ";
var156 = standard___standard__NativeString___to_s_with_length(var155, 1l);
var154 = var156;
varonce153 = var154;
}
((struct instance_standard__NativeArray*)var152)->values[1]=var154;
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = " {";
var160 = standard___standard__NativeString___to_s_with_length(var159, 2l);
var158 = var160;
varonce157 = var158;
}
((struct instance_standard__NativeArray*)var152)->values[4]=var158;
} else {
var152 = varonce151;
varonce151 = NULL;
}
{
var161 = nit___nit__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_standard__NativeArray*)var152)->values[0]=var161;
((struct instance_standard__NativeArray*)var152)->values[2]=var_n2135;
{
var162 = nit___nit__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_standard__NativeArray*)var152)->values[3]=var162;
{
var163 = ((val*(*)(val* self))(var152->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
{
nit___nit__AbstractCompilerVisitor___add(var_v2150, var163); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v2150:SeparateCompilerVisitor>*/
}
{
var164 = nit__separate_compiler___MEntity___const_color(var_m128);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v2150, var164); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v2150:SeparateCompilerVisitor>*/
}
if (unlikely(varonce165==NULL)) {
var166 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "((";
var170 = standard___standard__NativeString___to_s_with_length(var169, 2l);
var168 = var170;
varonce167 = var168;
}
((struct instance_standard__NativeArray*)var166)->values[0]=var168;
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = ")(";
var174 = standard___standard__NativeString___to_s_with_length(var173, 2l);
var172 = var174;
varonce171 = var172;
}
((struct instance_standard__NativeArray*)var166)->values[2]=var172;
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "->vft[";
var178 = standard___standard__NativeString___to_s_with_length(var177, 6l);
var176 = var178;
varonce175 = var176;
}
((struct instance_standard__NativeArray*)var166)->values[4]=var176;
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "]))(";
var182 = standard___standard__NativeString___to_s_with_length(var181, 4l);
var180 = var182;
varonce179 = var180;
}
((struct instance_standard__NativeArray*)var166)->values[6]=var180;
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = ");";
var186 = standard___standard__NativeString___to_s_with_length(var185, 2l);
var184 = var186;
varonce183 = var184;
}
((struct instance_standard__NativeArray*)var166)->values[8]=var184;
} else {
var166 = varonce165;
varonce165 = NULL;
}
{
var187 = nit___nit__SeparateRuntimeFunction___c_funptrtype(self);
}
((struct instance_standard__NativeArray*)var166)->values[1]=var187;
{
var188 = nit___nit__SeparateCompilerVisitor___class_info(var_v2150, var_selfvar);
}
((struct instance_standard__NativeArray*)var166)->values[3]=var188;
{
var189 = nit__separate_compiler___MEntity___const_color(var_m128);
}
((struct instance_standard__NativeArray*)var166)->values[5]=var189;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#arguments (self) on <self:SeparateRuntimeFunction> */
var192 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___arguments].val; /* _arguments on <self:SeparateRuntimeFunction> */
if (unlikely(var192 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2212);
fatal_exit(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = ", ";
var196 = standard___standard__NativeString___to_s_with_length(var195, 2l);
var194 = var196;
varonce193 = var194;
}
{
var197 = standard__string___Collection___join(var190, var194);
}
((struct instance_standard__NativeArray*)var166)->values[7]=var197;
{
var198 = ((val*(*)(val* self))(var166->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var166); /* native_to_s on <var166:NativeArray[String]>*/
}
varonce165 = var166;
var_call199 = var198;
if (var_ret == NULL) {
var200 = 0; /* is null */
} else {
var200 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var203 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var204 = !var203;
var201 = var204;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
var200 = var201;
}
if (var200){
if (unlikely(varonce205==NULL)) {
var206 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = "return ";
var210 = standard___standard__NativeString___to_s_with_length(var209, 7l);
var208 = var210;
varonce207 = var208;
}
((struct instance_standard__NativeArray*)var206)->values[0]=var208;
} else {
var206 = varonce205;
varonce205 = NULL;
}
((struct instance_standard__NativeArray*)var206)->values[1]=var_call199;
{
var211 = ((val*(*)(val* self))(var206->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var206); /* native_to_s on <var206:NativeArray[String]>*/
}
varonce205 = var206;
{
nit___nit__AbstractCompilerVisitor___add(var_v2150, var211); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v2150:SeparateCompilerVisitor>*/
}
} else {
{
nit___nit__AbstractCompilerVisitor___add(var_v2150, var_call199); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v2150:SeparateCompilerVisitor>*/
}
}
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "}";
var215 = standard___standard__NativeString___to_s_with_length(var214, 1l);
var213 = var215;
varonce212 = var213;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v2150, var213); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v2150:SeparateCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#init for (self: SeparateRuntimeFunction) */
void nit___nit__SeparateRuntimeFunction___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__SeparateRuntimeFunction___standard__kernel__Object__init]))(self); /* init on <self:SeparateRuntimeFunction>*/
}
RET_LABEL:;
}
/* method separate_compiler#MType#is_tagged for (self: MType): Bool */
short int nit__separate_compiler___MType___is_tagged(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s; /* _is_tagged on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MType#is_tagged= for (self: MType, Bool) */
void nit__separate_compiler___MType___is_tagged_61d(val* self, short int p0) {
self->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s = p0; /* _is_tagged on <self:MType> */
RET_LABEL:;
}
/* method separate_compiler#MEntity#const_color for (self: MEntity): String */
val* nit__separate_compiler___MEntity___const_color(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
var1 = self->attrs[COLOR_nit__separate_compiler__MEntity___const_color].val != NULL; /* _const_color on <self:MEntity> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__separate_compiler__MEntity___const_color].val; /* _const_color on <self:MEntity> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _const_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2330);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "COLOR_";
var9 = standard___standard__NativeString___to_s_with_length(var8, 6l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__c_name]))(self); /* c_name on <self:MEntity>*/
}
((struct instance_standard__NativeArray*)var5)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var11;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__separate_compiler__MEntity___const_color].val = var3; /* _const_color on <self:MEntity> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler#AMethPropdef#can_inline for (self: AMethPropdef): Bool */
short int nit__separate_compiler___AMethPropdef___nit__abstract_compiler__APropdef__can_inline(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable MPropDef */;
val* var3 /* : nullable MPropDef */;
val* var_m /* var m: nullable MMethodDef */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : MProperty */;
val* var13 /* : MProperty */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_m = var1;
if (var_m == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_m,((val*)NULL)) on <var_m:nullable MMethodDef> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_m->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_m, var_other); /* == on <var_m:nullable MMethodDef(MMethodDef)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
var_ = var6;
if (var6){
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:nullable MMethodDef(MMethodDef)> */
var13 = var_m->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_m:nullable MMethodDef(MMethodDef)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var11) on <var11:MProperty(MMethod)> */
var16 = var11->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var11:MProperty(MMethod)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var5 = var14;
} else {
var5 = var_;
}
var_17 = var5;
if (var5){
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:nullable MMethodDef(MMethodDef)> */
var20 = var_m->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:nullable MMethodDef(MMethodDef)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var4 = var18;
} else {
var4 = var_17;
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
var21 = ((short int(*)(val* self))(self->class->vft[COLOR_nit__separate_compiler___AMethPropdef___nit__abstract_compiler__APropdef__can_inline]))(self); /* can_inline on <self:AMethPropdef>*/
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#AAttrPropdef#init_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void nit__separate_compiler___AAttrPropdef___init_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
val* var13 /* : OptionBool */;
val* var15 /* : OptionBool */;
val* var16 /* : nullable Object */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
val* var20 /* : nullable MAttributeDef */;
val* var22 /* : nullable MAttributeDef */;
val* var23 /* : MProperty */;
val* var25 /* : MProperty */;
val* var_guard /* var guard: MAttribute */;
val* var26 /* : RuntimeVariable */;
var_v = p0;
var_recv = p1;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__separate_compiler___AAttrPropdef___init_expr]))(self, p0, p1); /* init_expr on <self:AAttrPropdef>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var3 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var6 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var7) on <var7:ModelBuilder> */
var12 = var7->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var7:ModelBuilder> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var10) on <var10:ToolContext> */
var15 = var10->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var10:ToolContext> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 28);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline opts#Option#value (var13) on <var13:OptionBool> */
var18 = var13->attrs[COLOR_opts__Option___value].val; /* _value on <var13:OptionBool> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = (short int)((long)(var16)>>2);
var = var19;
} else {
var = var_;
}
if (var){
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var22 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2358);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var20) on <var20:nullable MAttributeDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var25 = var20->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var20:nullable MAttributeDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_guard = var23;
{
var26 = nit___nit__AbstractCompilerVisitor___bool_instance(var_v, 0);
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_guard, var_recv, var26); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
