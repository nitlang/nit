#include "android_platform.sep.0.h"
/* method android_platform#ToolContext#platform_from_name for (self: ToolContext, String): nullable Platform */
val* android_platform__ToolContext__platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var_name /* var name: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
short int var5 /* : Bool */;
val* var6 /* : AndroidPlatform */;
val* var7 /* : nullable Platform */;
var_name = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "android";
var3 = 7;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((short int (*)(val*, val*))(var_name->class->vft[COLOR_kernel__Object___61d_61d]))(var_name, var1) /* == on <var_name:String>*/;
if (var5){
var6 = NEW_android_platform__AndroidPlatform(&type_android_platform__AndroidPlatform);
((void (*)(val*))(var6->class->vft[COLOR_android_platform__AndroidPlatform__init]))(var6) /* init on <var6:AndroidPlatform>*/;
var = var6;
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*, val*))(self->class->vft[COLOR_android_platform__ToolContext__platform_from_name]))(self, p0) /* platform_from_name on <self:ToolContext>*/;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method android_platform#ToolContext#platform_from_name for (self: Object, String): nullable Platform */
val* VIRTUAL_android_platform__ToolContext__platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
var1 = android_platform__ToolContext__platform_from_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method android_platform#ToolContext#exec_and_check for (self: ToolContext, Array[String]) */
void android_platform__ToolContext__exec_and_check(val* self, val* p0) {
val* var_args /* var args: Array[String] */;
val* var /* : nullable Object */;
val* var_prog /* var prog: String */;
long var1 /* : Int */;
val* var2 /* : IProcess */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : Array[String] */;
long var8 /* : Int */;
val* var_ /* var : Array[String] */;
val* var_proc_which /* var proc_which: IProcess */;
long var9 /* : Int */;
long var_res /* var res: Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
long var29 /* : Int */;
val* var30 /* : Process */;
val* var_proc /* var proc: Process */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
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
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
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
long var62 /* : Int */;
var_args = p0;
var = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[String]>*/;
var_prog = var;
var1 = 0;
((void (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var_args, var1) /* remove_at on <var_args:Array[String]>*/;
var2 = NEW_exec__IProcess(&type_exec__IProcess);
if (varonce) {
var3 = varonce;
} else {
var4 = "which";
var5 = 5;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = NEW_array__Array(&type_array__Arraystring__String);
var8 = 1;
((void (*)(val*, long))(var7->class->vft[COLOR_array__Array__with_capacity]))(var7, var8) /* with_capacity on <var7:Array[String]>*/;
var_ = var7;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_prog) /* push on <var_:Array[String]>*/;
((void (*)(val*, val*, val*))(var2->class->vft[COLOR_exec__IProcess__from_a]))(var2, var3, var_) /* from_a on <var2:IProcess>*/;
var_proc_which = var2;
((void (*)(val*))(var_proc_which->class->vft[COLOR_exec__Process__wait]))(var_proc_which) /* wait on <var_proc_which:IProcess>*/;
var9 = ((long (*)(val*))(var_proc_which->class->vft[COLOR_exec__Process__status]))(var_proc_which) /* status on <var_proc_which:IProcess>*/;
var_res = var9;
var10 = 0;
{ /* Inline kernel#Int#!= (var_res,var10) */
var13 = var_res == var10;
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
if (var11){
if (varonce15) {
var16 = varonce15;
} else {
var17 = "Android project error: executable \"";
var18 = 35;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "\" not found";
var23 = 11;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var_prog;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var21;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var28) /* print on <self:ToolContext>*/;
var29 = 1;
((void (*)(val*, long))(self->class->vft[COLOR_kernel__Object__exit]))(self, var29) /* exit on <self:ToolContext>*/;
} else {
}
var30 = NEW_exec__Process(&type_exec__Process);
((void (*)(val*, val*, val*))(var30->class->vft[COLOR_exec__Process__from_a]))(var30, var_prog, var_args) /* from_a on <var30:Process>*/;
var_proc = var30;
((void (*)(val*))(var_proc->class->vft[COLOR_exec__Process__wait]))(var_proc) /* wait on <var_proc:Process>*/;
var31 = ((long (*)(val*))(var_proc->class->vft[COLOR_exec__Process__status]))(var_proc) /* status on <var_proc:Process>*/;
var_res = var31;
var32 = 0;
{ /* Inline kernel#Int#!= (var_res,var32) */
var35 = var_res == var32;
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
if (var33){
if (varonce37) {
var38 = varonce37;
} else {
var39 = "Android project error: execution of \"";
var40 = 37;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = " ";
var45 = 1;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = " ";
var50 = 1;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = ((val* (*)(val*, val*))(var_args->class->vft[COLOR_string__Collection__join]))(var_args, var48) /* join on <var_args:Array[String]>*/;
if (varonce53) {
var54 = varonce53;
} else {
var55 = "\" failed";
var56 = 8;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 5;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var38;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var_prog;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var43;
((struct instance_array__NativeArray*)var60)->values[3] = (val*) var52;
((struct instance_array__NativeArray*)var60)->values[4] = (val*) var54;
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var61) /* print on <self:ToolContext>*/;
var62 = 1;
((void (*)(val*, long))(self->class->vft[COLOR_kernel__Object__exit]))(self, var62) /* exit on <self:ToolContext>*/;
} else {
}
RET_LABEL:;
}
/* method android_platform#ToolContext#exec_and_check for (self: Object, Array[String]) */
void VIRTUAL_android_platform__ToolContext__exec_and_check(val* self, val* p0) {
android_platform__ToolContext__exec_and_check(self, p0);
RET_LABEL:;
}
/* method android_platform#AndroidPlatform#supports_libunwind for (self: AndroidPlatform): Bool */
short int android_platform__AndroidPlatform__supports_libunwind(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method android_platform#AndroidPlatform#supports_libunwind for (self: Object): Bool */
short int VIRTUAL_android_platform__AndroidPlatform__supports_libunwind(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = android_platform__AndroidPlatform__supports_libunwind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method android_platform#AndroidPlatform#toolchain for (self: AndroidPlatform, ToolContext): Toolchain */
val* android_platform__AndroidPlatform__toolchain(val* self, val* p0) {
val* var /* : Toolchain */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var1 /* : AndroidToolchain */;
var_toolcontext = p0;
var1 = NEW_android_platform__AndroidToolchain(&type_android_platform__AndroidToolchain);
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_compiler__Toolchain__init]))(var1, var_toolcontext) /* init on <var1:AndroidToolchain>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method android_platform#AndroidPlatform#toolchain for (self: Object, ToolContext): Toolchain */
val* VIRTUAL_android_platform__AndroidPlatform__toolchain(val* self, val* p0) {
val* var /* : Toolchain */;
val* var1 /* : Toolchain */;
var1 = android_platform__AndroidPlatform__toolchain(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method android_platform#AndroidPlatform#init for (self: AndroidPlatform) */
void android_platform__AndroidPlatform__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_platform__Platform__init]))(self) /* init on <self:AndroidPlatform>*/;
RET_LABEL:;
}
/* method android_platform#AndroidPlatform#init for (self: Object) */
void VIRTUAL_android_platform__AndroidPlatform__init(val* self) {
android_platform__AndroidPlatform__init(self);
RET_LABEL:;
}
/* method android_platform#AndroidToolchain#android_project_root for (self: AndroidToolchain): String */
val* android_platform__AndroidToolchain__android_project_root(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_android_platform__AndroidToolchain___64dandroid_project_root].val; /* @android_project_root on <self:AndroidToolchain> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @android_project_root");
fprintf(stderr, " (%s:%d)\n", "src/android_platform.nit", 66);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method android_platform#AndroidToolchain#android_project_root for (self: Object): String */
val* VIRTUAL_android_platform__AndroidToolchain__android_project_root(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = android_platform__AndroidToolchain__android_project_root(self);
var = var1;
RET_LABEL:;
return var;
}
/* method android_platform#AndroidToolchain#android_project_root= for (self: AndroidToolchain, String) */
void android_platform__AndroidToolchain__android_project_root_61d(val* self, val* p0) {
self->attrs[COLOR_android_platform__AndroidToolchain___64dandroid_project_root].val = p0; /* @android_project_root on <self:AndroidToolchain> */
RET_LABEL:;
}
/* method android_platform#AndroidToolchain#android_project_root= for (self: Object, String) */
void VIRTUAL_android_platform__AndroidToolchain__android_project_root_61d(val* self, val* p0) {
android_platform__AndroidToolchain__android_project_root_61d(self, p0);
RET_LABEL:;
}
/* method android_platform#AndroidToolchain#compile_dir for (self: AndroidToolchain): String */
val* android_platform__AndroidToolchain__compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var_normal_compile_dir /* var normal_compile_dir: String */;
val* var2 /* : Array[Object] */;
long var3 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__compile_dir]))(self) /* compile_dir on <self:AndroidToolchain>*/;
var_normal_compile_dir = var1;
((void (*)(val*, val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__android_project_root_61d]))(self, var_normal_compile_dir) /* android_project_root= on <self:AndroidToolchain>*/;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
var3 = 3;
((void (*)(val*, long))(var2->class->vft[COLOR_array__Array__with_capacity]))(var2, var3) /* with_capacity on <var2:Array[Object]>*/;
var_ = var2;
if (varonce) {
var4 = varonce;
} else {
var5 = "";
var6 = 0;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var4) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_normal_compile_dir) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "/jni/nit_compile/";
var11 = 17;
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
/* method android_platform#AndroidToolchain#compile_dir for (self: Object): String */
val* VIRTUAL_android_platform__AndroidToolchain__compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = android_platform__AndroidToolchain__compile_dir(self);
var = var1;
RET_LABEL:;
return var;
}
/* method android_platform#AndroidToolchain#write_files for (self: AndroidToolchain, AbstractCompiler, String, Array[String]) */
void android_platform__AndroidToolchain__write_files(val* self, val* p0, val* p1, val* p2) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : MModule */;
val* var1 /* : String */;
val* var_app_name /* var app_name: String */;
val* var2 /* : Array[Object] */;
long var3 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var_app_package /* var app_package: String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var_app_version /* var app_version: String */;
val* var19 /* : Array[String] */;
long var20 /* : Int */;
val* var_21 /* var : Array[String] */;
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
val* var_args /* var args: Array[String] */;
val* var73 /* : ToolContext */;
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var_76 /* var : Array[Object] */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var_dir /* var dir: String */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
val* var93 /* : Array[ExternFile] */;
val* var94 /* : Iterator[nullable Object] */;
short int var95 /* : Bool */;
val* var96 /* : nullable Object */;
val* var_f /* var f: ExternFile */;
short int var97 /* : Bool */;
int cltype;
int idtype;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var105 /* : Array[Object] */;
long var106 /* : Int */;
val* var_107 /* var : Array[Object] */;
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
val* var119 /* : String */;
val* var120 /* : OFStream */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var_123 /* var : Array[Object] */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : String */;
val* var134 /* : String */;
val* var_file /* var file: OFStream */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : String */;
val* var140 /* : OFStream */;
val* var141 /* : Array[Object] */;
long var142 /* : Int */;
val* var_143 /* var : Array[Object] */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : String */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : String */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : String */;
val* var171 /* : Array[Object] */;
long var172 /* : Int */;
val* var173 /* : NativeArray[Object] */;
val* var174 /* : String */;
val* var175 /* : String */;
val* var176 /* : OFStream */;
val* var177 /* : Array[Object] */;
long var178 /* : Int */;
val* var_179 /* var : Array[Object] */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : String */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
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
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : String */;
val* var216 /* : Array[Object] */;
long var217 /* : Int */;
val* var218 /* : NativeArray[Object] */;
val* var219 /* : String */;
val* var220 /* : Array[Object] */;
long var221 /* : Int */;
val* var_222 /* var : Array[Object] */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : String */;
val* var228 /* : String */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : String */;
val* var234 /* : String */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
val* var237 /* : Array[Object] */;
long var238 /* : Int */;
val* var_239 /* var : Array[Object] */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
long var243 /* : Int */;
val* var244 /* : String */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
long var248 /* : Int */;
val* var249 /* : String */;
val* var250 /* : String */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
val* var253 /* : OFStream */;
val* var254 /* : Array[Object] */;
long var255 /* : Int */;
val* var_256 /* var : Array[Object] */;
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
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : String */;
val* var278 /* : Array[Object] */;
long var279 /* : Int */;
val* var280 /* : NativeArray[Object] */;
val* var281 /* : String */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : String */;
val* var287 /* : String */;
val* var_nit_dir /* var nit_dir: String */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
long var293 /* : Int */;
val* var294 /* : String */;
val* var295 /* : Array[Object] */;
long var296 /* : Int */;
val* var297 /* : NativeArray[Object] */;
val* var298 /* : String */;
val* var_share_dir /* var share_dir: nullable Object */;
val* var299 /* : Sys */;
val* var300 /* : String */;
val* var301 /* : String */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
long var305 /* : Int */;
val* var306 /* : String */;
val* var307 /* : Array[Object] */;
long var308 /* : Int */;
val* var309 /* : NativeArray[Object] */;
val* var310 /* : String */;
short int var311 /* : Bool */;
short int var312 /* : Bool */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : String */;
long var318 /* : Int */;
val* var319 /* : String */;
val* var320 /* : Array[Object] */;
long var321 /* : Int */;
val* var_322 /* var : Array[Object] */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : NativeString */;
long var326 /* : Int */;
val* var327 /* : String */;
val* var328 /* : String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : String */;
val* var334 /* : String */;
val* var_target_png_dir /* var target_png_dir: String */;
short int var335 /* : Bool */;
short int var336 /* : Bool */;
val* var337 /* : ToolContext */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
long var341 /* : Int */;
val* var342 /* : String */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
long var346 /* : Int */;
val* var347 /* : String */;
val* var348 /* : Array[Object] */;
long var349 /* : Int */;
val* var_350 /* var : Array[Object] */;
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
val* var361 /* : String */;
val* var362 /* : Array[String] */;
long var363 /* : Int */;
val* var364 /* : NativeArray[String] */;
val* var365 /* : MModule */;
val* var366 /* : Location */;
val* var367 /* : nullable SourceFile */;
val* var368 /* : String */;
val* var369 /* : String */;
val* var_mainmodule_dir /* var mainmodule_dir: String */;
val* var370 /* : Array[Object] */;
long var371 /* : Int */;
val* var_372 /* var : Array[Object] */;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : NativeString */;
long var376 /* : Int */;
val* var377 /* : String */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : NativeString */;
long var381 /* : Int */;
val* var382 /* : String */;
val* var383 /* : String */;
val* var_assets_dir /* var assets_dir: String */;
short int var384 /* : Bool */;
short int var385 /* : Bool */;
val* var386 /* : Array[Object] */;
long var387 /* : Int */;
val* var_388 /* var : Array[Object] */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
long var392 /* : Int */;
val* var393 /* : String */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
long var397 /* : Int */;
val* var398 /* : String */;
val* var399 /* : String */;
short int var400 /* : Bool */;
val* var401 /* : String */;
val* var402 /* : Array[Object] */;
long var403 /* : Int */;
val* var_404 /* var : Array[Object] */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
long var408 /* : Int */;
val* var409 /* : String */;
val* var410 /* : String */;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
long var414 /* : Int */;
val* var415 /* : String */;
val* var416 /* : String */;
val* var_target_assets_dir /* var target_assets_dir: String */;
short int var417 /* : Bool */;
short int var418 /* : Bool */;
val* var419 /* : ToolContext */;
static val* varonce420;
val* var421 /* : String */;
char* var422 /* : NativeString */;
long var423 /* : Int */;
val* var424 /* : String */;
static val* varonce425;
val* var426 /* : String */;
char* var427 /* : NativeString */;
long var428 /* : Int */;
val* var429 /* : String */;
val* var430 /* : Array[String] */;
long var431 /* : Int */;
val* var432 /* : NativeArray[String] */;
var_compiler = p0;
var_compile_dir = p1;
var_cfiles = p2;
var = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var_compiler) /* mainmodule on <var_compiler:AbstractCompiler>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_mmodule__MModule__name]))(var) /* name on <var:MModule>*/;
var_app_name = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
var3 = 3;
((void (*)(val*, long))(var2->class->vft[COLOR_array__Array__with_capacity]))(var2, var3) /* with_capacity on <var2:Array[Object]>*/;
var_ = var2;
if (varonce) {
var4 = varonce;
} else {
var5 = "org.nitlanguage.";
var6 = 16;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var4) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_app_name) /* add on <var_:Array[Object]>*/;
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
var_app_package = var13;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "0.1";
var17 = 3;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var_app_version = var15;
var19 = NEW_array__Array(&type_array__Arraystring__String);
var20 = 14;
((void (*)(val*, long))(var19->class->vft[COLOR_array__Array__with_capacity]))(var19, var20) /* with_capacity on <var19:Array[String]>*/;
var_21 = var19;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "android";
var25 = 7;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var23) /* push on <var_21:Array[String]>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "-s";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var28) /* push on <var_21:Array[String]>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "create";
var35 = 6;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var33) /* push on <var_21:Array[String]>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "project";
var40 = 7;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var38) /* push on <var_21:Array[String]>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "--name";
var45 = 6;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var43) /* push on <var_21:Array[String]>*/;
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var_app_name) /* push on <var_21:Array[String]>*/;
if (varonce47) {
var48 = varonce47;
} else {
var49 = "--target";
var50 = 8;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var48) /* push on <var_21:Array[String]>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "android-10";
var55 = 10;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var53) /* push on <var_21:Array[String]>*/;
if (varonce57) {
var58 = varonce57;
} else {
var59 = "--path";
var60 = 6;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var58) /* push on <var_21:Array[String]>*/;
var62 = ((val* (*)(val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__android_project_root]))(self) /* android_project_root on <self:AndroidToolchain>*/;
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var62) /* push on <var_21:Array[String]>*/;
if (varonce63) {
var64 = varonce63;
} else {
var65 = "--package";
var66 = 9;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var64) /* push on <var_21:Array[String]>*/;
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var_app_package) /* push on <var_21:Array[String]>*/;
if (varonce68) {
var69 = varonce68;
} else {
var70 = "--activity";
var71 = 10;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var69) /* push on <var_21:Array[String]>*/;
((void (*)(val*, val*))(var_21->class->vft[COLOR_abstract_collection__Sequence__push]))(var_21, var_app_name) /* push on <var_21:Array[String]>*/;
var_args = var_21;
var73 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:AndroidToolchain>*/;
((void (*)(val*, val*))(var73->class->vft[COLOR_android_platform__ToolContext__exec_and_check]))(var73, var_args) /* exec_and_check on <var73:ToolContext>*/;
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
var75 = 3;
((void (*)(val*, long))(var74->class->vft[COLOR_array__Array__with_capacity]))(var74, var75) /* with_capacity on <var74:Array[Object]>*/;
var_76 = var74;
if (varonce77) {
var78 = varonce77;
} else {
var79 = "";
var80 = 0;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
((void (*)(val*, val*))(var_76->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_76, var78) /* add on <var_76:Array[Object]>*/;
var82 = ((val* (*)(val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__android_project_root]))(self) /* android_project_root on <self:AndroidToolchain>*/;
((void (*)(val*, val*))(var_76->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_76, var82) /* add on <var_76:Array[Object]>*/;
if (varonce83) {
var84 = varonce83;
} else {
var85 = "/jni/";
var86 = 5;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
((void (*)(val*, val*))(var_76->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_76, var84) /* add on <var_76:Array[Object]>*/;
var88 = ((val* (*)(val*))(var_76->class->vft[COLOR_string__Object__to_s]))(var_76) /* to_s on <var_76:Array[Object]>*/;
var_dir = var88;
var89 = ((short int (*)(val*))(var_dir->class->vft[COLOR_file__String__file_exists]))(var_dir) /* file_exists on <var_dir:String>*/;
var90 = !var89;
if (var90){
((void (*)(val*))(var_dir->class->vft[COLOR_file__String__mkdir]))(var_dir) /* mkdir on <var_dir:String>*/;
} else {
}
var_dir = var_compile_dir;
var91 = ((short int (*)(val*))(var_dir->class->vft[COLOR_file__String__file_exists]))(var_dir) /* file_exists on <var_dir:String>*/;
var92 = !var91;
if (var92){
((void (*)(val*))(var_dir->class->vft[COLOR_file__String__mkdir]))(var_dir) /* mkdir on <var_dir:String>*/;
} else {
}
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__write_files]))(self, var_compiler, var_compile_dir, var_cfiles) /* write_files on <self:AndroidToolchain>*/;
var93 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var_compiler) /* extern_bodies on <var_compiler:AbstractCompiler>*/;
var94 = ((val* (*)(val*))(var93->class->vft[COLOR_abstract_collection__Collection__iterator]))(var93) /* iterator on <var93:Array[ExternFile]>*/;
for(;;) {
var95 = ((short int (*)(val*))(var94->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var94) /* is_ok on <var94:Iterator[nullable Object]>*/;
if(!var95) break;
var96 = ((val* (*)(val*))(var94->class->vft[COLOR_abstract_collection__Iterator__item]))(var94) /* item on <var94:Iterator[nullable Object]>*/;
var_f = var96;
/* <var_f:ExternFile> isa ExternCFile */
cltype = type_c__ExternCFile.color;
idtype = type_c__ExternCFile.id;
if(cltype >= var_f->type->table_size) {
var97 = 0;
} else {
var97 = var_f->type->type_table[cltype] == idtype;
}
if (var97){
var98 = ((val* (*)(val*))(var_f->class->vft[COLOR_ffi_base__ExternFile__filename]))(var_f) /* filename on <var_f:ExternFile(ExternCFile)>*/;
if (varonce99) {
var100 = varonce99;
} else {
var101 = "";
var102 = 0;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
var104 = ((val* (*)(val*, val*))(var98->class->vft[COLOR_file__String__basename]))(var98, var100) /* basename on <var98:String>*/;
((void (*)(val*, val*))(var_cfiles->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cfiles, var104) /* add on <var_cfiles:Array[String]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var94->class->vft[COLOR_abstract_collection__Iterator__next]))(var94) /* next on <var94:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var105 = NEW_array__Array(&type_array__Arraykernel__Object);
var106 = 3;
((void (*)(val*, long))(var105->class->vft[COLOR_array__Array__with_capacity]))(var105, var106) /* with_capacity on <var105:Array[Object]>*/;
var_107 = var105;
if (varonce108) {
var109 = varonce108;
} else {
var110 = "";
var111 = 0;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
((void (*)(val*, val*))(var_107->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_107, var109) /* add on <var_107:Array[Object]>*/;
var113 = ((val* (*)(val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__android_project_root]))(self) /* android_project_root on <self:AndroidToolchain>*/;
((void (*)(val*, val*))(var_107->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_107, var113) /* add on <var_107:Array[Object]>*/;
if (varonce114) {
var115 = varonce114;
} else {
var116 = "/jni/";
var117 = 5;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
((void (*)(val*, val*))(var_107->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_107, var115) /* add on <var_107:Array[Object]>*/;
var119 = ((val* (*)(val*))(var_107->class->vft[COLOR_string__Object__to_s]))(var_107) /* to_s on <var_107:Array[Object]>*/;
var_dir = var119;
var120 = NEW_file__OFStream(&type_file__OFStream);
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
var122 = 3;
((void (*)(val*, long))(var121->class->vft[COLOR_array__Array__with_capacity]))(var121, var122) /* with_capacity on <var121:Array[Object]>*/;
var_123 = var121;
if (varonce124) {
var125 = varonce124;
} else {
var126 = "";
var127 = 0;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
((void (*)(val*, val*))(var_123->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_123, var125) /* add on <var_123:Array[Object]>*/;
((void (*)(val*, val*))(var_123->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_123, var_dir) /* add on <var_123:Array[Object]>*/;
if (varonce129) {
var130 = varonce129;
} else {
var131 = "/Android.mk";
var132 = 11;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
((void (*)(val*, val*))(var_123->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_123, var130) /* add on <var_123:Array[Object]>*/;
var134 = ((val* (*)(val*))(var_123->class->vft[COLOR_string__Object__to_s]))(var_123) /* to_s on <var_123:Array[Object]>*/;
((void (*)(val*, val*))(var120->class->vft[COLOR_file__OFStream__open]))(var120, var134) /* open on <var120:OFStream>*/;
var_file = var120;
if (varonce135) {
var136 = varonce135;
} else {
var137 = "include $(call all-subdir-makefiles)\n";
var138 = 37;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var136) /* write on <var_file:OFStream>*/;
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:OFStream>*/;
var_dir = var_compile_dir;
var140 = NEW_file__OFStream(&type_file__OFStream);
var141 = NEW_array__Array(&type_array__Arraykernel__Object);
var142 = 3;
((void (*)(val*, long))(var141->class->vft[COLOR_array__Array__with_capacity]))(var141, var142) /* with_capacity on <var141:Array[Object]>*/;
var_143 = var141;
if (varonce144) {
var145 = varonce144;
} else {
var146 = "";
var147 = 0;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
((void (*)(val*, val*))(var_143->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_143, var145) /* add on <var_143:Array[Object]>*/;
((void (*)(val*, val*))(var_143->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_143, var_dir) /* add on <var_143:Array[Object]>*/;
if (varonce149) {
var150 = varonce149;
} else {
var151 = "/Android.mk";
var152 = 11;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
((void (*)(val*, val*))(var_143->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_143, var150) /* add on <var_143:Array[Object]>*/;
var154 = ((val* (*)(val*))(var_143->class->vft[COLOR_string__Object__to_s]))(var_143) /* to_s on <var_143:Array[Object]>*/;
((void (*)(val*, val*))(var140->class->vft[COLOR_file__OFStream__open]))(var140, var154) /* open on <var140:OFStream>*/;
var_file = var140;
if (varonce155) {
var156 = varonce155;
} else {
var157 = "LOCAL_PATH := $(call my-dir)\ninclude $(CLEAR_VARS)\n\nLOCAL_CFLAGS\11:= -D ANDROID\nLOCAL_MODULE    := main\nLOCAL_SRC_FILES := \\\n";
var158 = 124;
var159 = string__NativeString__to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
if (varonce160) {
var161 = varonce160;
} else {
var162 = " \\\n";
var163 = 3;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
var165 = ((val* (*)(val*, val*))(var_cfiles->class->vft[COLOR_string__Collection__join]))(var_cfiles, var161) /* join on <var_cfiles:Array[String]>*/;
if (varonce166) {
var167 = varonce166;
} else {
var168 = "\nLOCAL_LDLIBS    := -llog -landroid -lEGL -lGLESv1_CM -lz\nLOCAL_STATIC_LIBRARIES := android_native_app_glue png\n\ninclude $(BUILD_SHARED_LIBRARY)\n\n$(call import-module,android/native_app_glue)\n";
var169 = 192;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
var171 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var171 = array_instance Array[Object] */
var172 = 3;
var173 = NEW_array__NativeArray(var172, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var173)->values[0] = (val*) var156;
((struct instance_array__NativeArray*)var173)->values[1] = (val*) var165;
((struct instance_array__NativeArray*)var173)->values[2] = (val*) var167;
((void (*)(val*, val*, long))(var171->class->vft[COLOR_array__Array__with_native]))(var171, var173, var172) /* with_native on <var171:Array[Object]>*/;
}
var174 = ((val* (*)(val*))(var171->class->vft[COLOR_string__Object__to_s]))(var171) /* to_s on <var171:Array[Object]>*/;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var174) /* write on <var_file:OFStream>*/;
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:OFStream>*/;
var175 = ((val* (*)(val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__android_project_root]))(self) /* android_project_root on <self:AndroidToolchain>*/;
var_dir = var175;
var176 = NEW_file__OFStream(&type_file__OFStream);
var177 = NEW_array__Array(&type_array__Arraykernel__Object);
var178 = 3;
((void (*)(val*, long))(var177->class->vft[COLOR_array__Array__with_capacity]))(var177, var178) /* with_capacity on <var177:Array[Object]>*/;
var_179 = var177;
if (varonce180) {
var181 = varonce180;
} else {
var182 = "";
var183 = 0;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
((void (*)(val*, val*))(var_179->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_179, var181) /* add on <var_179:Array[Object]>*/;
((void (*)(val*, val*))(var_179->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_179, var_dir) /* add on <var_179:Array[Object]>*/;
if (varonce185) {
var186 = varonce185;
} else {
var187 = "/AndroidManifest.xml";
var188 = 20;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
((void (*)(val*, val*))(var_179->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_179, var186) /* add on <var_179:Array[Object]>*/;
var190 = ((val* (*)(val*))(var_179->class->vft[COLOR_string__Object__to_s]))(var_179) /* to_s on <var_179:Array[Object]>*/;
((void (*)(val*, val*))(var176->class->vft[COLOR_file__OFStream__open]))(var176, var190) /* open on <var176:OFStream>*/;
var_file = var176;
if (varonce191) {
var192 = varonce191;
} else {
var193 = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<!-- BEGIN_INCLUDE(manifest) -->\n<manifest xmlns:android=\"http://schemas.android.com/apk/res/android\"\n        package=\"";
var194 = 158;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = "\"\n        android:versionCode=\"1\"\n        android:versionName=\"";
var199 = 63;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
if (varonce201) {
var202 = varonce201;
} else {
var203 = "\"\n\11android:debuggable=\"true\">\n\n    <!-- This is the platform API where NativeActivity was introduced. -->\n    <uses-sdk android:minSdkVersion=\"9\" />\n\n    <!-- This .apk has no Java code itself, so set hasCode to false. -->\n    <application android:label=\"@string/app_name\" android:hasCode=\"false\" android:debuggable=\"true\">\n\n        <!-- Our activity is the built-in NativeActivity framework class.\n             This will take care of integrating with our NDK code. -->\n        <activity android:name=\"android.app.NativeActivity\"\n                android:label=\"@string/app_name\"\n                android:configChanges=\"orientation|keyboardHidden\"\n                android:screenOrientation=\"portrait\">\n            <!-- Tell NativeActivity the name of or .so -->\n            <meta-data android:name=\"";
var204 = 797;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
if (varonce206) {
var207 = varonce206;
} else {
var208 = "\"\n                    android:value=\"";
var209 = 37;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = "\" />\n            <intent-filter>\n                <action android:name=\"android.intent.action.MAIN\" />\n                <category android:name=\"android.intent.category.LAUNCHER\" />\n            </intent-filter>\n        </activity>\n    </application>\n\n</manifest> \n<!-- END_INCLUDE(manifest) -->\n";
var214 = 292;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
var216 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var216 = array_instance Array[Object] */
var217 = 9;
var218 = NEW_array__NativeArray(var217, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var218)->values[0] = (val*) var192;
((struct instance_array__NativeArray*)var218)->values[1] = (val*) var_app_package;
((struct instance_array__NativeArray*)var218)->values[2] = (val*) var197;
((struct instance_array__NativeArray*)var218)->values[3] = (val*) var_app_version;
((struct instance_array__NativeArray*)var218)->values[4] = (val*) var202;
((struct instance_array__NativeArray*)var218)->values[5] = (val*) var_app_package;
((struct instance_array__NativeArray*)var218)->values[6] = (val*) var207;
((struct instance_array__NativeArray*)var218)->values[7] = (val*) var_app_name;
((struct instance_array__NativeArray*)var218)->values[8] = (val*) var212;
((void (*)(val*, val*, long))(var216->class->vft[COLOR_array__Array__with_native]))(var216, var218, var217) /* with_native on <var216:Array[Object]>*/;
}
var219 = ((val* (*)(val*))(var216->class->vft[COLOR_string__Object__to_s]))(var216) /* to_s on <var216:Array[Object]>*/;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var219) /* write on <var_file:OFStream>*/;
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:OFStream>*/;
var220 = NEW_array__Array(&type_array__Arraykernel__Object);
var221 = 3;
((void (*)(val*, long))(var220->class->vft[COLOR_array__Array__with_capacity]))(var220, var221) /* with_capacity on <var220:Array[Object]>*/;
var_222 = var220;
if (varonce223) {
var224 = varonce223;
} else {
var225 = "";
var226 = 0;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
((void (*)(val*, val*))(var_222->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_222, var224) /* add on <var_222:Array[Object]>*/;
var228 = ((val* (*)(val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__android_project_root]))(self) /* android_project_root on <self:AndroidToolchain>*/;
((void (*)(val*, val*))(var_222->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_222, var228) /* add on <var_222:Array[Object]>*/;
if (varonce229) {
var230 = varonce229;
} else {
var231 = "/res/";
var232 = 5;
var233 = string__NativeString__to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
((void (*)(val*, val*))(var_222->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_222, var230) /* add on <var_222:Array[Object]>*/;
var234 = ((val* (*)(val*))(var_222->class->vft[COLOR_string__Object__to_s]))(var_222) /* to_s on <var_222:Array[Object]>*/;
var_dir = var234;
var235 = ((short int (*)(val*))(var_dir->class->vft[COLOR_file__String__file_exists]))(var_dir) /* file_exists on <var_dir:String>*/;
var236 = !var235;
if (var236){
((void (*)(val*))(var_dir->class->vft[COLOR_file__String__mkdir]))(var_dir) /* mkdir on <var_dir:String>*/;
} else {
}
var237 = NEW_array__Array(&type_array__Arraykernel__Object);
var238 = 3;
((void (*)(val*, long))(var237->class->vft[COLOR_array__Array__with_capacity]))(var237, var238) /* with_capacity on <var237:Array[Object]>*/;
var_239 = var237;
if (varonce240) {
var241 = varonce240;
} else {
var242 = "";
var243 = 0;
var244 = string__NativeString__to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
((void (*)(val*, val*))(var_239->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_239, var241) /* add on <var_239:Array[Object]>*/;
((void (*)(val*, val*))(var_239->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_239, var_dir) /* add on <var_239:Array[Object]>*/;
if (varonce245) {
var246 = varonce245;
} else {
var247 = "/values/";
var248 = 8;
var249 = string__NativeString__to_s_with_length(var247, var248);
var246 = var249;
varonce245 = var246;
}
((void (*)(val*, val*))(var_239->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_239, var246) /* add on <var_239:Array[Object]>*/;
var250 = ((val* (*)(val*))(var_239->class->vft[COLOR_string__Object__to_s]))(var_239) /* to_s on <var_239:Array[Object]>*/;
var_dir = var250;
var251 = ((short int (*)(val*))(var_dir->class->vft[COLOR_file__String__file_exists]))(var_dir) /* file_exists on <var_dir:String>*/;
var252 = !var251;
if (var252){
((void (*)(val*))(var_dir->class->vft[COLOR_file__String__mkdir]))(var_dir) /* mkdir on <var_dir:String>*/;
} else {
}
var253 = NEW_file__OFStream(&type_file__OFStream);
var254 = NEW_array__Array(&type_array__Arraykernel__Object);
var255 = 3;
((void (*)(val*, long))(var254->class->vft[COLOR_array__Array__with_capacity]))(var254, var255) /* with_capacity on <var254:Array[Object]>*/;
var_256 = var254;
if (varonce257) {
var258 = varonce257;
} else {
var259 = "";
var260 = 0;
var261 = string__NativeString__to_s_with_length(var259, var260);
var258 = var261;
varonce257 = var258;
}
((void (*)(val*, val*))(var_256->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_256, var258) /* add on <var_256:Array[Object]>*/;
((void (*)(val*, val*))(var_256->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_256, var_dir) /* add on <var_256:Array[Object]>*/;
if (varonce262) {
var263 = varonce262;
} else {
var264 = "/strings.xml";
var265 = 12;
var266 = string__NativeString__to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
((void (*)(val*, val*))(var_256->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_256, var263) /* add on <var_256:Array[Object]>*/;
var267 = ((val* (*)(val*))(var_256->class->vft[COLOR_string__Object__to_s]))(var_256) /* to_s on <var_256:Array[Object]>*/;
((void (*)(val*, val*))(var253->class->vft[COLOR_file__OFStream__open]))(var253, var267) /* open on <var253:OFStream>*/;
var_file = var253;
if (varonce268) {
var269 = varonce268;
} else {
var270 = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<resources>\n    <string name=\"app_name\">";
var271 = 79;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
if (varonce273) {
var274 = varonce273;
} else {
var275 = "</string>\n</resources>";
var276 = 22;
var277 = string__NativeString__to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
var278 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var278 = array_instance Array[Object] */
var279 = 3;
var280 = NEW_array__NativeArray(var279, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var280)->values[0] = (val*) var269;
((struct instance_array__NativeArray*)var280)->values[1] = (val*) var_app_name;
((struct instance_array__NativeArray*)var280)->values[2] = (val*) var274;
((void (*)(val*, val*, long))(var278->class->vft[COLOR_array__Array__with_native]))(var278, var280, var279) /* with_native on <var278:Array[Object]>*/;
}
var281 = ((val* (*)(val*))(var278->class->vft[COLOR_string__Object__to_s]))(var278) /* to_s on <var278:Array[Object]>*/;
((void (*)(val*, val*))(var_file->class->vft[COLOR_stream__OStream__write]))(var_file, var281) /* write on <var_file:OFStream>*/;
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:OFStream>*/;
if (varonce282) {
var283 = varonce282;
} else {
var284 = "NIT_DIR";
var285 = 7;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
var287 = ((val* (*)(val*))(var283->class->vft[COLOR_environ__String__environ]))(var283) /* environ on <var283:String>*/;
var_nit_dir = var287;
var288 = ((short int (*)(val*))(var_nit_dir->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_nit_dir) /* is_empty on <var_nit_dir:String>*/;
var289 = !var288;
if (var289){
if (varonce290) {
var291 = varonce290;
} else {
var292 = "/share/";
var293 = 7;
var294 = string__NativeString__to_s_with_length(var292, var293);
var291 = var294;
varonce290 = var291;
}
var295 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var295 = array_instance Array[Object] */
var296 = 2;
var297 = NEW_array__NativeArray(var296, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var297)->values[0] = (val*) var_nit_dir;
((struct instance_array__NativeArray*)var297)->values[1] = (val*) var291;
((void (*)(val*, val*, long))(var295->class->vft[COLOR_array__Array__with_native]))(var295, var297, var296) /* with_native on <var295:Array[Object]>*/;
}
var298 = ((val* (*)(val*))(var295->class->vft[COLOR_string__Object__to_s]))(var295) /* to_s on <var295:Array[Object]>*/;
var_share_dir = var298;
} else {
var299 = ((val* (*)(val*))(self->class->vft[COLOR_kernel__Object__sys]))(self) /* sys on <self:AndroidToolchain>*/;
var300 = ((val* (*)(val*))(var299->class->vft[COLOR_string__Sys__program_name]))(var299) /* program_name on <var299:Sys>*/;
var301 = ((val* (*)(val*))(var300->class->vft[COLOR_file__String__dirname]))(var300) /* dirname on <var300:String>*/;
if (varonce302) {
var303 = varonce302;
} else {
var304 = "/../share/";
var305 = 10;
var306 = string__NativeString__to_s_with_length(var304, var305);
var303 = var306;
varonce302 = var303;
}
var307 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var307 = array_instance Array[Object] */
var308 = 2;
var309 = NEW_array__NativeArray(var308, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var309)->values[0] = (val*) var301;
((struct instance_array__NativeArray*)var309)->values[1] = (val*) var303;
((void (*)(val*, val*, long))(var307->class->vft[COLOR_array__Array__with_native]))(var307, var309, var308) /* with_native on <var307:Array[Object]>*/;
}
var310 = ((val* (*)(val*))(var307->class->vft[COLOR_string__Object__to_s]))(var307) /* to_s on <var307:Array[Object]>*/;
var_share_dir = var310;
}
var311 = ((short int (*)(val*))(var_share_dir->class->vft[COLOR_file__String__file_exists]))(var_share_dir) /* file_exists on <var_share_dir:nullable Object(String)>*/;
var312 = !var311;
if (var312){
if (varonce313) {
var314 = varonce313;
} else {
var315 = "Android project error: Nit share directory not found, please use the environment variable NIT_DIR";
var316 = 97;
var317 = string__NativeString__to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var314) /* print on <self:AndroidToolchain>*/;
var318 = 1;
((void (*)(val*, long))(self->class->vft[COLOR_kernel__Object__exit]))(self, var318) /* exit on <self:AndroidToolchain>*/;
} else {
}
var319 = ((val* (*)(val*))(var_share_dir->class->vft[COLOR_file__String__realpath]))(var_share_dir) /* realpath on <var_share_dir:nullable Object(String)>*/;
var_share_dir = var319;
var320 = NEW_array__Array(&type_array__Arraykernel__Object);
var321 = 3;
((void (*)(val*, long))(var320->class->vft[COLOR_array__Array__with_capacity]))(var320, var321) /* with_capacity on <var320:Array[Object]>*/;
var_322 = var320;
if (varonce323) {
var324 = varonce323;
} else {
var325 = "";
var326 = 0;
var327 = string__NativeString__to_s_with_length(var325, var326);
var324 = var327;
varonce323 = var324;
}
((void (*)(val*, val*))(var_322->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_322, var324) /* add on <var_322:Array[Object]>*/;
var328 = ((val* (*)(val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__android_project_root]))(self) /* android_project_root on <self:AndroidToolchain>*/;
((void (*)(val*, val*))(var_322->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_322, var328) /* add on <var_322:Array[Object]>*/;
if (varonce329) {
var330 = varonce329;
} else {
var331 = "/jni/png";
var332 = 8;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
((void (*)(val*, val*))(var_322->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_322, var330) /* add on <var_322:Array[Object]>*/;
var334 = ((val* (*)(val*))(var_322->class->vft[COLOR_string__Object__to_s]))(var_322) /* to_s on <var_322:Array[Object]>*/;
var_target_png_dir = var334;
var335 = ((short int (*)(val*))(var_target_png_dir->class->vft[COLOR_file__String__file_exists]))(var_target_png_dir) /* file_exists on <var_target_png_dir:String>*/;
var336 = !var335;
if (var336){
var337 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:AndroidToolchain>*/;
if (varonce338) {
var339 = varonce338;
} else {
var340 = "ln";
var341 = 2;
var342 = string__NativeString__to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
if (varonce343) {
var344 = varonce343;
} else {
var345 = "-s";
var346 = 2;
var347 = string__NativeString__to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
var348 = NEW_array__Array(&type_array__Arraykernel__Object);
var349 = 3;
((void (*)(val*, long))(var348->class->vft[COLOR_array__Array__with_capacity]))(var348, var349) /* with_capacity on <var348:Array[Object]>*/;
var_350 = var348;
if (varonce351) {
var352 = varonce351;
} else {
var353 = "";
var354 = 0;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
((void (*)(val*, val*))(var_350->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_350, var352) /* add on <var_350:Array[Object]>*/;
((void (*)(val*, val*))(var_350->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_350, var_share_dir) /* add on <var_350:Array[Object]>*/;
if (varonce356) {
var357 = varonce356;
} else {
var358 = "/png/";
var359 = 5;
var360 = string__NativeString__to_s_with_length(var358, var359);
var357 = var360;
varonce356 = var357;
}
((void (*)(val*, val*))(var_350->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_350, var357) /* add on <var_350:Array[Object]>*/;
var361 = ((val* (*)(val*))(var_350->class->vft[COLOR_string__Object__to_s]))(var_350) /* to_s on <var_350:Array[Object]>*/;
var362 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var362 = array_instance Array[String] */
var363 = 4;
var364 = NEW_array__NativeArray(var363, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var364)->values[0] = (val*) var339;
((struct instance_array__NativeArray*)var364)->values[1] = (val*) var344;
((struct instance_array__NativeArray*)var364)->values[2] = (val*) var361;
((struct instance_array__NativeArray*)var364)->values[3] = (val*) var_target_png_dir;
((void (*)(val*, val*, long))(var362->class->vft[COLOR_array__Array__with_native]))(var362, var364, var363) /* with_native on <var362:Array[String]>*/;
}
((void (*)(val*, val*))(var337->class->vft[COLOR_android_platform__ToolContext__exec_and_check]))(var337, var362) /* exec_and_check on <var337:ToolContext>*/;
} else {
}
var365 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var_compiler) /* mainmodule on <var_compiler:AbstractCompiler>*/;
var366 = ((val* (*)(val*))(var365->class->vft[COLOR_mmodule__MModule__location]))(var365) /* location on <var365:MModule>*/;
var367 = ((val* (*)(val*))(var366->class->vft[COLOR_location__Location__file]))(var366) /* file on <var366:Location>*/;
if (var367 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/android_platform.nit", 201);
show_backtrace(1);
} else {
var368 = ((val* (*)(val*))(var367->class->vft[COLOR_location__SourceFile__filename]))(var367) /* filename on <var367:nullable SourceFile>*/;
}
var369 = ((val* (*)(val*))(var368->class->vft[COLOR_file__String__dirname]))(var368) /* dirname on <var368:String>*/;
var_mainmodule_dir = var369;
var370 = NEW_array__Array(&type_array__Arraykernel__Object);
var371 = 3;
((void (*)(val*, long))(var370->class->vft[COLOR_array__Array__with_capacity]))(var370, var371) /* with_capacity on <var370:Array[Object]>*/;
var_372 = var370;
if (varonce373) {
var374 = varonce373;
} else {
var375 = "";
var376 = 0;
var377 = string__NativeString__to_s_with_length(var375, var376);
var374 = var377;
varonce373 = var374;
}
((void (*)(val*, val*))(var_372->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_372, var374) /* add on <var_372:Array[Object]>*/;
((void (*)(val*, val*))(var_372->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_372, var_mainmodule_dir) /* add on <var_372:Array[Object]>*/;
if (varonce378) {
var379 = varonce378;
} else {
var380 = "/../assets";
var381 = 10;
var382 = string__NativeString__to_s_with_length(var380, var381);
var379 = var382;
varonce378 = var379;
}
((void (*)(val*, val*))(var_372->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_372, var379) /* add on <var_372:Array[Object]>*/;
var383 = ((val* (*)(val*))(var_372->class->vft[COLOR_string__Object__to_s]))(var_372) /* to_s on <var_372:Array[Object]>*/;
var_assets_dir = var383;
var384 = ((short int (*)(val*))(var_assets_dir->class->vft[COLOR_file__String__file_exists]))(var_assets_dir) /* file_exists on <var_assets_dir:String>*/;
var385 = !var384;
if (var385){
var386 = NEW_array__Array(&type_array__Arraykernel__Object);
var387 = 3;
((void (*)(val*, long))(var386->class->vft[COLOR_array__Array__with_capacity]))(var386, var387) /* with_capacity on <var386:Array[Object]>*/;
var_388 = var386;
if (varonce389) {
var390 = varonce389;
} else {
var391 = "";
var392 = 0;
var393 = string__NativeString__to_s_with_length(var391, var392);
var390 = var393;
varonce389 = var390;
}
((void (*)(val*, val*))(var_388->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_388, var390) /* add on <var_388:Array[Object]>*/;
((void (*)(val*, val*))(var_388->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_388, var_mainmodule_dir) /* add on <var_388:Array[Object]>*/;
if (varonce394) {
var395 = varonce394;
} else {
var396 = "/assets";
var397 = 7;
var398 = string__NativeString__to_s_with_length(var396, var397);
var395 = var398;
varonce394 = var395;
}
((void (*)(val*, val*))(var_388->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_388, var395) /* add on <var_388:Array[Object]>*/;
var399 = ((val* (*)(val*))(var_388->class->vft[COLOR_string__Object__to_s]))(var_388) /* to_s on <var_388:Array[Object]>*/;
var_assets_dir = var399;
} else {
}
var400 = ((short int (*)(val*))(var_assets_dir->class->vft[COLOR_file__String__file_exists]))(var_assets_dir) /* file_exists on <var_assets_dir:String>*/;
if (var400){
var401 = ((val* (*)(val*))(var_assets_dir->class->vft[COLOR_file__String__realpath]))(var_assets_dir) /* realpath on <var_assets_dir:String>*/;
var_assets_dir = var401;
var402 = NEW_array__Array(&type_array__Arraykernel__Object);
var403 = 3;
((void (*)(val*, long))(var402->class->vft[COLOR_array__Array__with_capacity]))(var402, var403) /* with_capacity on <var402:Array[Object]>*/;
var_404 = var402;
if (varonce405) {
var406 = varonce405;
} else {
var407 = "";
var408 = 0;
var409 = string__NativeString__to_s_with_length(var407, var408);
var406 = var409;
varonce405 = var406;
}
((void (*)(val*, val*))(var_404->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_404, var406) /* add on <var_404:Array[Object]>*/;
var410 = ((val* (*)(val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__android_project_root]))(self) /* android_project_root on <self:AndroidToolchain>*/;
((void (*)(val*, val*))(var_404->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_404, var410) /* add on <var_404:Array[Object]>*/;
if (varonce411) {
var412 = varonce411;
} else {
var413 = "/assets";
var414 = 7;
var415 = string__NativeString__to_s_with_length(var413, var414);
var412 = var415;
varonce411 = var412;
}
((void (*)(val*, val*))(var_404->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_404, var412) /* add on <var_404:Array[Object]>*/;
var416 = ((val* (*)(val*))(var_404->class->vft[COLOR_string__Object__to_s]))(var_404) /* to_s on <var_404:Array[Object]>*/;
var_target_assets_dir = var416;
var417 = ((short int (*)(val*))(var_target_assets_dir->class->vft[COLOR_file__String__file_exists]))(var_target_assets_dir) /* file_exists on <var_target_assets_dir:String>*/;
var418 = !var417;
if (var418){
var419 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:AndroidToolchain>*/;
if (varonce420) {
var421 = varonce420;
} else {
var422 = "ln";
var423 = 2;
var424 = string__NativeString__to_s_with_length(var422, var423);
var421 = var424;
varonce420 = var421;
}
if (varonce425) {
var426 = varonce425;
} else {
var427 = "-s";
var428 = 2;
var429 = string__NativeString__to_s_with_length(var427, var428);
var426 = var429;
varonce425 = var426;
}
var430 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var430 = array_instance Array[String] */
var431 = 4;
var432 = NEW_array__NativeArray(var431, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var432)->values[0] = (val*) var421;
((struct instance_array__NativeArray*)var432)->values[1] = (val*) var426;
((struct instance_array__NativeArray*)var432)->values[2] = (val*) var_assets_dir;
((struct instance_array__NativeArray*)var432)->values[3] = (val*) var_target_assets_dir;
((void (*)(val*, val*, long))(var430->class->vft[COLOR_array__Array__with_native]))(var430, var432, var431) /* with_native on <var430:Array[String]>*/;
}
((void (*)(val*, val*))(var419->class->vft[COLOR_android_platform__ToolContext__exec_and_check]))(var419, var430) /* exec_and_check on <var419:ToolContext>*/;
} else {
}
} else {
}
RET_LABEL:;
}
/* method android_platform#AndroidToolchain#write_files for (self: Object, AbstractCompiler, String, Array[String]) */
void VIRTUAL_android_platform__AndroidToolchain__write_files(val* self, val* p0, val* p1, val* p2) {
android_platform__AndroidToolchain__write_files(self, p0, p1, p2);
RET_LABEL:;
}
/* method android_platform#AndroidToolchain#write_makefile for (self: AndroidToolchain, AbstractCompiler, String, Array[String]) */
void android_platform__AndroidToolchain__write_makefile(val* self, val* p0, val* p1, val* p2) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
var_compiler = p0;
var_compile_dir = p1;
var_cfiles = p2;
RET_LABEL:;
}
/* method android_platform#AndroidToolchain#write_makefile for (self: Object, AbstractCompiler, String, Array[String]) */
void VIRTUAL_android_platform__AndroidToolchain__write_makefile(val* self, val* p0, val* p1, val* p2) {
android_platform__AndroidToolchain__write_makefile(self, p0, p1, p2);
RET_LABEL:;
}
/* method android_platform#AndroidToolchain#compile_c_code for (self: AndroidToolchain, AbstractCompiler, String) */
void android_platform__AndroidToolchain__compile_c_code(val* self, val* p0, val* p1) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_compile_dir /* var compile_dir: String */;
val* var /* : ToolContext */;
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
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : Array[String] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[String] */;
val* var29 /* : ToolContext */;
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
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : Array[String] */;
long var58 /* : Int */;
val* var59 /* : NativeArray[String] */;
val* var60 /* : ToolContext */;
val* var61 /* : OptionString */;
val* var62 /* : nullable Object */;
val* var_outname /* var outname: nullable String */;
val* var63 /* : null */;
short int var64 /* : Bool */;
val* var65 /* : Array[Object] */;
long var66 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var72 /* : MModule */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var80 /* : ToolContext */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var_88 /* var : Array[Object] */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : String */;
val* var100 /* : MModule */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : Array[String] */;
long var109 /* : Int */;
val* var110 /* : NativeArray[String] */;
var_compiler = p0;
var_compile_dir = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:AndroidToolchain>*/;
if (varonce) {
var1 = varonce;
} else {
var2 = "ndk-build";
var3 = 9;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = "-s";
var8 = 2;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "-j";
var13 = 2;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "4";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "-C";
var23 = 2;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = ((val* (*)(val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__android_project_root]))(self) /* android_project_root on <self:AndroidToolchain>*/;
var26 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var26 = array_instance Array[String] */
var27 = 6;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var6;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var11;
((struct instance_array__NativeArray*)var28)->values[3] = (val*) var16;
((struct instance_array__NativeArray*)var28)->values[4] = (val*) var21;
((struct instance_array__NativeArray*)var28)->values[5] = (val*) var25;
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[String]>*/;
}
((void (*)(val*, val*))(var->class->vft[COLOR_android_platform__ToolContext__exec_and_check]))(var, var26) /* exec_and_check on <var:ToolContext>*/;
var29 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:AndroidToolchain>*/;
if (varonce30) {
var31 = varonce30;
} else {
var32 = "ant";
var33 = 3;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "-q";
var38 = 2;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "debug";
var43 = 5;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "-f";
var48 = 2;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = ((val* (*)(val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__android_project_root]))(self) /* android_project_root on <self:AndroidToolchain>*/;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "/build.xml";
var54 = 10;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = ((val* (*)(val*, val*))(var50->class->vft[COLOR_string__String___43d]))(var50, var52) /* + on <var50:String>*/;
var57 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var57 = array_instance Array[String] */
var58 = 5;
var59 = NEW_array__NativeArray(var58, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var59)->values[0] = (val*) var31;
((struct instance_array__NativeArray*)var59)->values[1] = (val*) var36;
((struct instance_array__NativeArray*)var59)->values[2] = (val*) var41;
((struct instance_array__NativeArray*)var59)->values[3] = (val*) var46;
((struct instance_array__NativeArray*)var59)->values[4] = (val*) var56;
((void (*)(val*, val*, long))(var57->class->vft[COLOR_array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[String]>*/;
}
((void (*)(val*, val*))(var29->class->vft[COLOR_android_platform__ToolContext__exec_and_check]))(var29, var57) /* exec_and_check on <var29:ToolContext>*/;
var60 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:AndroidToolchain>*/;
var61 = ((val* (*)(val*))(var60->class->vft[COLOR_abstract_compiler__ToolContext__opt_output]))(var60) /* opt_output on <var60:ToolContext>*/;
var62 = ((val* (*)(val*))(var61->class->vft[COLOR_opts__Option__value]))(var61) /* value on <var61:OptionString>*/;
var_outname = var62;
var63 = NULL;
if (var_outname == NULL) {
var64 = 1; /* is null */
} else {
var64 = 0; /* arg is null but recv is not */
}
if (var64){
var65 = NEW_array__Array(&type_array__Arraykernel__Object);
var66 = 3;
((void (*)(val*, long))(var65->class->vft[COLOR_array__Array__with_capacity]))(var65, var66) /* with_capacity on <var65:Array[Object]>*/;
var_ = var65;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "";
var70 = 0;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var68) /* add on <var_:Array[Object]>*/;
var72 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var_compiler) /* mainmodule on <var_compiler:AbstractCompiler>*/;
var73 = ((val* (*)(val*))(var72->class->vft[COLOR_mmodule__MModule__name]))(var72) /* name on <var72:MModule>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var73) /* add on <var_:Array[Object]>*/;
if (varonce74) {
var75 = varonce74;
} else {
var76 = ".apk";
var77 = 4;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var75) /* add on <var_:Array[Object]>*/;
var79 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_outname = var79;
} else {
}
var80 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__Toolchain__toolcontext]))(self) /* toolcontext on <self:AndroidToolchain>*/;
if (varonce81) {
var82 = varonce81;
} else {
var83 = "mv";
var84 = 2;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
var87 = 5;
((void (*)(val*, long))(var86->class->vft[COLOR_array__Array__with_capacity]))(var86, var87) /* with_capacity on <var86:Array[Object]>*/;
var_88 = var86;
if (varonce89) {
var90 = varonce89;
} else {
var91 = "";
var92 = 0;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
((void (*)(val*, val*))(var_88->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_88, var90) /* add on <var_88:Array[Object]>*/;
var94 = ((val* (*)(val*))(self->class->vft[COLOR_android_platform__AndroidToolchain__android_project_root]))(self) /* android_project_root on <self:AndroidToolchain>*/;
((void (*)(val*, val*))(var_88->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_88, var94) /* add on <var_88:Array[Object]>*/;
if (varonce95) {
var96 = varonce95;
} else {
var97 = "/bin/";
var98 = 5;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
((void (*)(val*, val*))(var_88->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_88, var96) /* add on <var_88:Array[Object]>*/;
var100 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var_compiler) /* mainmodule on <var_compiler:AbstractCompiler>*/;
var101 = ((val* (*)(val*))(var100->class->vft[COLOR_mmodule__MModule__name]))(var100) /* name on <var100:MModule>*/;
((void (*)(val*, val*))(var_88->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_88, var101) /* add on <var_88:Array[Object]>*/;
if (varonce102) {
var103 = varonce102;
} else {
var104 = "-debug.apk";
var105 = 10;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
((void (*)(val*, val*))(var_88->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_88, var103) /* add on <var_88:Array[Object]>*/;
var107 = ((val* (*)(val*))(var_88->class->vft[COLOR_string__Object__to_s]))(var_88) /* to_s on <var_88:Array[Object]>*/;
var108 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var108 = array_instance Array[String] */
var109 = 3;
var110 = NEW_array__NativeArray(var109, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var110)->values[0] = (val*) var82;
((struct instance_array__NativeArray*)var110)->values[1] = (val*) var107;
((struct instance_array__NativeArray*)var110)->values[2] = (val*) var_outname;
((void (*)(val*, val*, long))(var108->class->vft[COLOR_array__Array__with_native]))(var108, var110, var109) /* with_native on <var108:Array[String]>*/;
}
((void (*)(val*, val*))(var80->class->vft[COLOR_android_platform__ToolContext__exec_and_check]))(var80, var108) /* exec_and_check on <var80:ToolContext>*/;
RET_LABEL:;
}
/* method android_platform#AndroidToolchain#compile_c_code for (self: Object, AbstractCompiler, String) */
void VIRTUAL_android_platform__AndroidToolchain__compile_c_code(val* self, val* p0, val* p1) {
android_platform__AndroidToolchain__compile_c_code(self, p0, p1);
RET_LABEL:;
}
