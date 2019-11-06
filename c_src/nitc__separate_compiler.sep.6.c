#include "nitc__separate_compiler.sep.0.h"
/* method separate_compiler$SeparateCompilerVisitor$native_array_def for (self: SeparateCompilerVisitor, String, nullable MType, Array[RuntimeVariable]): Bool */
short int nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_pname /* var pname: String */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var4 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var5 /* : MModule */;
val* var6 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : String */;
val* var33 /* : nullable Object */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var_recv /* var recv: String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
short int var44 /* : Bool */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
val* var63 /* : nullable Object */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : AbstractCompiler */;
val* var68 /* : AbstractCompiler */;
val* var69 /* : MModule */;
val* var71 /* : MModule */;
val* var72 /* : MClassType */;
val* var73 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
short int var83 /* : Bool */;
val* var85 /* : NativeArray[String] */;
static val* varonce84;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Bool */;
val* var93 /* : nullable Bool */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Bool */;
val* var101 /* : nullable Bool */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Bool */;
val* var109 /* : nullable Bool */;
val* var110 /* : nullable Object */;
val* var111 /* : String */;
val* var112 /* : nullable Object */;
val* var113 /* : String */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : CString */;
val* var118 /* : String */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Int */;
val* var121 /* : nullable Bool */;
val* var122 /* : nullable Bool */;
short int var123 /* : Bool */;
val* var125 /* : NativeArray[String] */;
static val* varonce124;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Bool */;
val* var133 /* : nullable Bool */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Bool */;
val* var141 /* : nullable Bool */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Bool */;
val* var149 /* : nullable Bool */;
val* var150 /* : String */;
val* var151 /* : nullable Object */;
val* var152 /* : String */;
val* var153 /* : String */;
val* var154 /* : RuntimeVariable */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : CString */;
val* var158 /* : String */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Int */;
val* var161 /* : nullable Bool */;
val* var162 /* : nullable Bool */;
short int var163 /* : Bool */;
val* var165 /* : NativeArray[String] */;
static val* varonce164;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : CString */;
val* var169 /* : String */;
val* var170 /* : nullable Int */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Bool */;
val* var173 /* : nullable Bool */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : CString */;
val* var177 /* : String */;
val* var178 /* : nullable Int */;
val* var179 /* : nullable Int */;
val* var180 /* : nullable Bool */;
val* var181 /* : nullable Bool */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : CString */;
val* var185 /* : String */;
val* var186 /* : nullable Int */;
val* var187 /* : nullable Int */;
val* var188 /* : nullable Bool */;
val* var189 /* : nullable Bool */;
val* var190 /* : String */;
val* var191 /* : nullable Object */;
val* var192 /* : String */;
val* var193 /* : String */;
val* var_recv1 /* var recv1: String */;
val* var195 /* : NativeArray[String] */;
static val* varonce194;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
val* var200 /* : nullable Int */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Bool */;
val* var203 /* : nullable Bool */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : CString */;
val* var207 /* : String */;
val* var208 /* : nullable Int */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Bool */;
val* var211 /* : nullable Bool */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : CString */;
val* var215 /* : String */;
val* var216 /* : nullable Int */;
val* var217 /* : nullable Int */;
val* var218 /* : nullable Bool */;
val* var219 /* : nullable Bool */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : CString */;
val* var223 /* : String */;
val* var224 /* : nullable Int */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Bool */;
val* var227 /* : nullable Bool */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : CString */;
val* var231 /* : String */;
val* var232 /* : nullable Int */;
val* var233 /* : nullable Int */;
val* var234 /* : nullable Bool */;
val* var235 /* : nullable Bool */;
val* var236 /* : nullable Object */;
val* var237 /* : String */;
val* var238 /* : String */;
val* var239 /* : String */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : CString */;
val* var243 /* : String */;
val* var244 /* : nullable Int */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Bool */;
val* var247 /* : nullable Bool */;
short int var248 /* : Bool */;
val* var250 /* : NativeArray[String] */;
static val* varonce249;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : CString */;
val* var254 /* : String */;
val* var255 /* : nullable Int */;
val* var256 /* : nullable Int */;
val* var257 /* : nullable Bool */;
val* var258 /* : nullable Bool */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : CString */;
val* var262 /* : String */;
val* var263 /* : nullable Int */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Bool */;
val* var266 /* : nullable Bool */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : CString */;
val* var270 /* : String */;
val* var271 /* : nullable Int */;
val* var272 /* : nullable Int */;
val* var273 /* : nullable Bool */;
val* var274 /* : nullable Bool */;
val* var275 /* : String */;
val* var276 /* : nullable Object */;
val* var277 /* : String */;
val* var278 /* : String */;
val* var_recv1279 /* var recv1: String */;
val* var281 /* : NativeArray[String] */;
static val* varonce280;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : CString */;
val* var285 /* : String */;
val* var286 /* : nullable Int */;
val* var287 /* : nullable Int */;
val* var288 /* : nullable Bool */;
val* var289 /* : nullable Bool */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : CString */;
val* var293 /* : String */;
val* var294 /* : nullable Int */;
val* var295 /* : nullable Int */;
val* var296 /* : nullable Bool */;
val* var297 /* : nullable Bool */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : CString */;
val* var301 /* : String */;
val* var302 /* : nullable Int */;
val* var303 /* : nullable Int */;
val* var304 /* : nullable Bool */;
val* var305 /* : nullable Bool */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : CString */;
val* var309 /* : String */;
val* var310 /* : nullable Int */;
val* var311 /* : nullable Int */;
val* var312 /* : nullable Bool */;
val* var313 /* : nullable Bool */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : CString */;
val* var317 /* : String */;
val* var318 /* : nullable Int */;
val* var319 /* : nullable Int */;
val* var320 /* : nullable Bool */;
val* var321 /* : nullable Bool */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : CString */;
val* var325 /* : String */;
val* var326 /* : nullable Int */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Bool */;
val* var329 /* : nullable Bool */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : CString */;
val* var333 /* : String */;
val* var334 /* : nullable Int */;
val* var335 /* : nullable Int */;
val* var336 /* : nullable Bool */;
val* var337 /* : nullable Bool */;
val* var338 /* : nullable Object */;
val* var339 /* : String */;
val* var340 /* : nullable Object */;
val* var341 /* : String */;
val* var342 /* : nullable Object */;
val* var343 /* : String */;
val* var344 /* : String */;
val* var345 /* : String */;
var_pname = p0;
var_ret_type = p1;
var_arguments = p2;
{
var1 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_elttype = var2;
{
var5 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var6 = nitc__model___MModule___native_array_class(var5);
}
var_nclass = var6;
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "((struct instance_";
var12 = (val*)(18l<<2|1);
var13 = (val*)(18l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "*)";
var20 = (val*)(2l<<2|1);
var21 = (val*)(2l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var7)->values[2]=var17;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = ")->values";
var28 = (val*)(9l<<2|1);
var29 = (val*)(9l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var7)->values[4]=var25;
} else {
var7 = varonce;
varonce = NULL;
}
{
var32 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var7)->values[1]=var32;
{
var33 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var34 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__Object__to_s]))(var33); /* to_s on <var33:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var7)->values[3]=var34;
{
var35 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
var_recv = var35;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "[]";
var40 = (val*)(2l<<2|1);
var41 = (val*)(2l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
var44 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var37); /* == on <var_pname:String>*/
}
if (var44){
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "[";
var51 = (val*)(1l<<2|1);
var52 = (val*)(1l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[1]=var48;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "]";
var59 = (val*)(1l<<2|1);
var60 = (val*)(1l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var46)->values[3]=var56;
} else {
var46 = varonce45;
varonce45 = NULL;
}
((struct instance_core__NativeArray*)var46)->values[0]=var_recv;
{
var63 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var64 = ((val*(*)(val* self))(var63->class->vft[COLOR_core__abstract_text__Object__to_s]))(var63); /* to_s on <var63:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var46)->values[2]=var64;
{
var65 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var68 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var66) on <var66:AbstractCompiler(SeparateCompiler)> */
var71 = var66->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var66:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = nitc__model___MModule___object_type(var69);
}
{
var73 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var65, var72);
}
var_res = var73;
if (unlikely(var_ret_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2116);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype= (var_res,var_ret_type) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val = var_ret_type; /* _mcasttype on <var_res:RuntimeVariable> */
RET_LABEL74:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___ret(self, var_res); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <self:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "[]=";
var79 = (val*)(3l<<2|1);
var80 = (val*)(3l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
{
var83 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var76); /* == on <var_pname:String>*/
}
if (var83){
if (unlikely(varonce84==NULL)) {
var85 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "[";
var90 = (val*)(1l<<2|1);
var91 = (val*)(1l<<2|1);
var92 = (val*)((long)(0)<<2|3);
var93 = (val*)((long)(0)<<2|3);
var89 = core__flat___CString___to_s_unsafe(var88, var90, var91, var92, var93);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var85)->values[1]=var87;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "]=";
var98 = (val*)(2l<<2|1);
var99 = (val*)(2l<<2|1);
var100 = (val*)((long)(0)<<2|3);
var101 = (val*)((long)(0)<<2|3);
var97 = core__flat___CString___to_s_unsafe(var96, var98, var99, var100, var101);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var85)->values[3]=var95;
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = ";";
var106 = (val*)(1l<<2|1);
var107 = (val*)(1l<<2|1);
var108 = (val*)((long)(0)<<2|3);
var109 = (val*)((long)(0)<<2|3);
var105 = core__flat___CString___to_s_unsafe(var104, var106, var107, var108, var109);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var85)->values[5]=var103;
} else {
var85 = varonce84;
varonce84 = NULL;
}
((struct instance_core__NativeArray*)var85)->values[0]=var_recv;
{
var110 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var111 = ((val*(*)(val* self))(var110->class->vft[COLOR_core__abstract_text__Object__to_s]))(var110); /* to_s on <var110:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var85)->values[2]=var111;
{
var112 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var113 = ((val*(*)(val* self))(var112->class->vft[COLOR_core__abstract_text__Object__to_s]))(var112); /* to_s on <var112:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var85)->values[4]=var113;
{
var114 = ((val*(*)(val* self))(var85->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var114); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "length";
var119 = (val*)(6l<<2|1);
var120 = (val*)(6l<<2|1);
var121 = (val*)((long)(0)<<2|3);
var122 = (val*)((long)(0)<<2|3);
var118 = core__flat___CString___to_s_unsafe(var117, var119, var120, var121, var122);
var116 = var118;
varonce115 = var116;
}
{
var123 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var116); /* == on <var_pname:String>*/
}
if (var123){
if (unlikely(varonce124==NULL)) {
var125 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "((struct instance_";
var130 = (val*)(18l<<2|1);
var131 = (val*)(18l<<2|1);
var132 = (val*)((long)(0)<<2|3);
var133 = (val*)((long)(0)<<2|3);
var129 = core__flat___CString___to_s_unsafe(var128, var130, var131, var132, var133);
var127 = var129;
varonce126 = var127;
}
((struct instance_core__NativeArray*)var125)->values[0]=var127;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "*)";
var138 = (val*)(2l<<2|1);
var139 = (val*)(2l<<2|1);
var140 = (val*)((long)(0)<<2|3);
var141 = (val*)((long)(0)<<2|3);
var137 = core__flat___CString___to_s_unsafe(var136, var138, var139, var140, var141);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var125)->values[2]=var135;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = ")->length";
var146 = (val*)(9l<<2|1);
var147 = (val*)(9l<<2|1);
var148 = (val*)((long)(0)<<2|3);
var149 = (val*)((long)(0)<<2|3);
var145 = core__flat___CString___to_s_unsafe(var144, var146, var147, var148, var149);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var125)->values[4]=var143;
} else {
var125 = varonce124;
varonce124 = NULL;
}
{
var150 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var125)->values[1]=var150;
{
var151 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var152 = ((val*(*)(val* self))(var151->class->vft[COLOR_core__abstract_text__Object__to_s]))(var151); /* to_s on <var151:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var125)->values[3]=var152;
{
var153 = ((val*(*)(val* self))(var125->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var125); /* native_to_s on <var125:NativeArray[String]>*/
}
varonce124 = var125;
if (unlikely(var_ret_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2123);
fatal_exit(1);
}
{
var154 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var153, var_ret_type);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(self, var154); /* Direct call abstract_compiler$AbstractCompilerVisitor$ret on <self:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "copy_to";
var159 = (val*)(7l<<2|1);
var160 = (val*)(7l<<2|1);
var161 = (val*)((long)(0)<<2|3);
var162 = (val*)((long)(0)<<2|3);
var158 = core__flat___CString___to_s_unsafe(var157, var159, var160, var161, var162);
var156 = var158;
varonce155 = var156;
}
{
var163 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var156); /* == on <var_pname:String>*/
}
if (var163){
if (unlikely(varonce164==NULL)) {
var165 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = "((struct instance_";
var170 = (val*)(18l<<2|1);
var171 = (val*)(18l<<2|1);
var172 = (val*)((long)(0)<<2|3);
var173 = (val*)((long)(0)<<2|3);
var169 = core__flat___CString___to_s_unsafe(var168, var170, var171, var172, var173);
var167 = var169;
varonce166 = var167;
}
((struct instance_core__NativeArray*)var165)->values[0]=var167;
if (likely(varonce174!=NULL)) {
var175 = varonce174;
} else {
var176 = "*)";
var178 = (val*)(2l<<2|1);
var179 = (val*)(2l<<2|1);
var180 = (val*)((long)(0)<<2|3);
var181 = (val*)((long)(0)<<2|3);
var177 = core__flat___CString___to_s_unsafe(var176, var178, var179, var180, var181);
var175 = var177;
varonce174 = var175;
}
((struct instance_core__NativeArray*)var165)->values[2]=var175;
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = ")->values";
var186 = (val*)(9l<<2|1);
var187 = (val*)(9l<<2|1);
var188 = (val*)((long)(0)<<2|3);
var189 = (val*)((long)(0)<<2|3);
var185 = core__flat___CString___to_s_unsafe(var184, var186, var187, var188, var189);
var183 = var185;
varonce182 = var183;
}
((struct instance_core__NativeArray*)var165)->values[4]=var183;
} else {
var165 = varonce164;
varonce164 = NULL;
}
{
var190 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var165)->values[1]=var190;
{
var191 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var192 = ((val*(*)(val* self))(var191->class->vft[COLOR_core__abstract_text__Object__to_s]))(var191); /* to_s on <var191:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var165)->values[3]=var192;
{
var193 = ((val*(*)(val* self))(var165->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var165); /* native_to_s on <var165:NativeArray[String]>*/
}
varonce164 = var165;
var_recv1 = var193;
if (unlikely(varonce194==NULL)) {
var195 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "memmove(";
var200 = (val*)(8l<<2|1);
var201 = (val*)(8l<<2|1);
var202 = (val*)((long)(0)<<2|3);
var203 = (val*)((long)(0)<<2|3);
var199 = core__flat___CString___to_s_unsafe(var198, var200, var201, var202, var203);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var195)->values[0]=var197;
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = ", ";
var208 = (val*)(2l<<2|1);
var209 = (val*)(2l<<2|1);
var210 = (val*)((long)(0)<<2|3);
var211 = (val*)((long)(0)<<2|3);
var207 = core__flat___CString___to_s_unsafe(var206, var208, var209, var210, var211);
var205 = var207;
varonce204 = var205;
}
((struct instance_core__NativeArray*)var195)->values[2]=var205;
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = ", ";
var216 = (val*)(2l<<2|1);
var217 = (val*)(2l<<2|1);
var218 = (val*)((long)(0)<<2|3);
var219 = (val*)((long)(0)<<2|3);
var215 = core__flat___CString___to_s_unsafe(var214, var216, var217, var218, var219);
var213 = var215;
varonce212 = var213;
}
((struct instance_core__NativeArray*)var195)->values[4]=var213;
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = "*sizeof(";
var224 = (val*)(8l<<2|1);
var225 = (val*)(8l<<2|1);
var226 = (val*)((long)(0)<<2|3);
var227 = (val*)((long)(0)<<2|3);
var223 = core__flat___CString___to_s_unsafe(var222, var224, var225, var226, var227);
var221 = var223;
varonce220 = var221;
}
((struct instance_core__NativeArray*)var195)->values[6]=var221;
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = "));";
var232 = (val*)(3l<<2|1);
var233 = (val*)(3l<<2|1);
var234 = (val*)((long)(0)<<2|3);
var235 = (val*)((long)(0)<<2|3);
var231 = core__flat___CString___to_s_unsafe(var230, var232, var233, var234, var235);
var229 = var231;
varonce228 = var229;
}
((struct instance_core__NativeArray*)var195)->values[8]=var229;
} else {
var195 = varonce194;
varonce194 = NULL;
}
((struct instance_core__NativeArray*)var195)->values[1]=var_recv1;
((struct instance_core__NativeArray*)var195)->values[3]=var_recv;
{
var236 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var237 = ((val*(*)(val* self))(var236->class->vft[COLOR_core__abstract_text__Object__to_s]))(var236); /* to_s on <var236:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var195)->values[5]=var237;
{
var238 = ((val*(*)(val* self))(var_elttype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_elttype); /* ctype on <var_elttype:MType>*/
}
((struct instance_core__NativeArray*)var195)->values[7]=var238;
{
var239 = ((val*(*)(val* self))(var195->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var195); /* native_to_s on <var195:NativeArray[String]>*/
}
varonce194 = var195;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var239); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "memmove";
var244 = (val*)(7l<<2|1);
var245 = (val*)(7l<<2|1);
var246 = (val*)((long)(0)<<2|3);
var247 = (val*)((long)(0)<<2|3);
var243 = core__flat___CString___to_s_unsafe(var242, var244, var245, var246, var247);
var241 = var243;
varonce240 = var241;
}
{
var248 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var241); /* == on <var_pname:String>*/
}
if (var248){
if (unlikely(varonce249==NULL)) {
var250 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "((struct instance_";
var255 = (val*)(18l<<2|1);
var256 = (val*)(18l<<2|1);
var257 = (val*)((long)(0)<<2|3);
var258 = (val*)((long)(0)<<2|3);
var254 = core__flat___CString___to_s_unsafe(var253, var255, var256, var257, var258);
var252 = var254;
varonce251 = var252;
}
((struct instance_core__NativeArray*)var250)->values[0]=var252;
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "*)";
var263 = (val*)(2l<<2|1);
var264 = (val*)(2l<<2|1);
var265 = (val*)((long)(0)<<2|3);
var266 = (val*)((long)(0)<<2|3);
var262 = core__flat___CString___to_s_unsafe(var261, var263, var264, var265, var266);
var260 = var262;
varonce259 = var260;
}
((struct instance_core__NativeArray*)var250)->values[2]=var260;
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = ")->values";
var271 = (val*)(9l<<2|1);
var272 = (val*)(9l<<2|1);
var273 = (val*)((long)(0)<<2|3);
var274 = (val*)((long)(0)<<2|3);
var270 = core__flat___CString___to_s_unsafe(var269, var271, var272, var273, var274);
var268 = var270;
varonce267 = var268;
}
((struct instance_core__NativeArray*)var250)->values[4]=var268;
} else {
var250 = varonce249;
varonce249 = NULL;
}
{
var275 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var250)->values[1]=var275;
{
var276 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 3l);
}
{
var277 = ((val*(*)(val* self))(var276->class->vft[COLOR_core__abstract_text__Object__to_s]))(var276); /* to_s on <var276:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var250)->values[3]=var277;
{
var278 = ((val*(*)(val* self))(var250->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var250); /* native_to_s on <var250:NativeArray[String]>*/
}
varonce249 = var250;
var_recv1279 = var278;
if (unlikely(varonce280==NULL)) {
var281 = NEW_core__NativeArray((int)13l, &type_core__NativeArray__core__String);
if (likely(varonce282!=NULL)) {
var283 = varonce282;
} else {
var284 = "memmove(";
var286 = (val*)(8l<<2|1);
var287 = (val*)(8l<<2|1);
var288 = (val*)((long)(0)<<2|3);
var289 = (val*)((long)(0)<<2|3);
var285 = core__flat___CString___to_s_unsafe(var284, var286, var287, var288, var289);
var283 = var285;
varonce282 = var283;
}
((struct instance_core__NativeArray*)var281)->values[0]=var283;
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = "+";
var294 = (val*)(1l<<2|1);
var295 = (val*)(1l<<2|1);
var296 = (val*)((long)(0)<<2|3);
var297 = (val*)((long)(0)<<2|3);
var293 = core__flat___CString___to_s_unsafe(var292, var294, var295, var296, var297);
var291 = var293;
varonce290 = var291;
}
((struct instance_core__NativeArray*)var281)->values[2]=var291;
if (likely(varonce298!=NULL)) {
var299 = varonce298;
} else {
var300 = ", ";
var302 = (val*)(2l<<2|1);
var303 = (val*)(2l<<2|1);
var304 = (val*)((long)(0)<<2|3);
var305 = (val*)((long)(0)<<2|3);
var301 = core__flat___CString___to_s_unsafe(var300, var302, var303, var304, var305);
var299 = var301;
varonce298 = var299;
}
((struct instance_core__NativeArray*)var281)->values[4]=var299;
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = "+";
var310 = (val*)(1l<<2|1);
var311 = (val*)(1l<<2|1);
var312 = (val*)((long)(0)<<2|3);
var313 = (val*)((long)(0)<<2|3);
var309 = core__flat___CString___to_s_unsafe(var308, var310, var311, var312, var313);
var307 = var309;
varonce306 = var307;
}
((struct instance_core__NativeArray*)var281)->values[6]=var307;
if (likely(varonce314!=NULL)) {
var315 = varonce314;
} else {
var316 = ", ";
var318 = (val*)(2l<<2|1);
var319 = (val*)(2l<<2|1);
var320 = (val*)((long)(0)<<2|3);
var321 = (val*)((long)(0)<<2|3);
var317 = core__flat___CString___to_s_unsafe(var316, var318, var319, var320, var321);
var315 = var317;
varonce314 = var315;
}
((struct instance_core__NativeArray*)var281)->values[8]=var315;
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = "*sizeof(";
var326 = (val*)(8l<<2|1);
var327 = (val*)(8l<<2|1);
var328 = (val*)((long)(0)<<2|3);
var329 = (val*)((long)(0)<<2|3);
var325 = core__flat___CString___to_s_unsafe(var324, var326, var327, var328, var329);
var323 = var325;
varonce322 = var323;
}
((struct instance_core__NativeArray*)var281)->values[10]=var323;
if (likely(varonce330!=NULL)) {
var331 = varonce330;
} else {
var332 = "));";
var334 = (val*)(3l<<2|1);
var335 = (val*)(3l<<2|1);
var336 = (val*)((long)(0)<<2|3);
var337 = (val*)((long)(0)<<2|3);
var333 = core__flat___CString___to_s_unsafe(var332, var334, var335, var336, var337);
var331 = var333;
varonce330 = var331;
}
((struct instance_core__NativeArray*)var281)->values[12]=var331;
} else {
var281 = varonce280;
varonce280 = NULL;
}
((struct instance_core__NativeArray*)var281)->values[1]=var_recv1279;
{
var338 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 4l);
}
{
var339 = ((val*(*)(val* self))(var338->class->vft[COLOR_core__abstract_text__Object__to_s]))(var338); /* to_s on <var338:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var281)->values[3]=var339;
((struct instance_core__NativeArray*)var281)->values[5]=var_recv;
{
var340 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var341 = ((val*(*)(val* self))(var340->class->vft[COLOR_core__abstract_text__Object__to_s]))(var340); /* to_s on <var340:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var281)->values[7]=var341;
{
var342 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var343 = ((val*(*)(val* self))(var342->class->vft[COLOR_core__abstract_text__Object__to_s]))(var342); /* to_s on <var342:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var281)->values[9]=var343;
{
var344 = ((val*(*)(val* self))(var_elttype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_elttype); /* ctype on <var_elttype:MType>*/
}
((struct instance_core__NativeArray*)var281)->values[11]=var344;
{
var345 = ((val*(*)(val* self))(var281->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var281); /* native_to_s on <var281:NativeArray[String]>*/
}
varonce280 = var281;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var345); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$native_array_set for (self: SeparateCompilerVisitor, RuntimeVariable, Int, RuntimeVariable) */
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set(val* self, val* p0, long p1, val* p2) {
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
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var_recv /* var recv: String */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Bool */;
val* var55 /* : nullable Bool */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : String */;
var_nat = p0;
var_i = p1;
var_val = p2;
{
var = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var1 = nitc__model___MModule___native_array_class(var);
}
var_nclass = var1;
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "((struct instance_";
var7 = (val*)(18l<<2|1);
var8 = (val*)(18l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "*)";
var15 = (val*)(2l<<2|1);
var16 = (val*)(2l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var2)->values[2]=var12;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = ")->values";
var23 = (val*)(9l<<2|1);
var24 = (val*)(9l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var2)->values[4]=var20;
} else {
var2 = varonce;
varonce = NULL;
}
{
var27 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_nclass);
}
((struct instance_core__NativeArray*)var2)->values[1]=var27;
{
var28 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var2)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
var_recv = var29;
if (unlikely(varonce30==NULL)) {
var31 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "[";
var36 = (val*)(1l<<2|1);
var37 = (val*)(1l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var31)->values[1]=var33;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "]=";
var44 = (val*)(2l<<2|1);
var45 = (val*)(2l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var31)->values[3]=var41;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = ";";
var52 = (val*)(1l<<2|1);
var53 = (val*)(1l<<2|1);
var54 = (val*)((long)(0)<<2|3);
var55 = (val*)((long)(0)<<2|3);
var51 = core__flat___CString___to_s_unsafe(var50, var52, var53, var54, var55);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var31)->values[5]=var49;
} else {
var31 = varonce30;
varonce30 = NULL;
}
((struct instance_core__NativeArray*)var31)->values[0]=var_recv;
var56 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var31)->values[2]=var56;
{
var57 = ((val*(*)(val* self))(var_val->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_val); /* to_s on <var_val:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var31)->values[4]=var57;
{
var58 = ((val*(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var58); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompilerVisitor$link_unresolved_type for (self: SeparateCompilerVisitor, MClassDef, MType) */
void nitc___nitc__SeparateCompilerVisitor___link_unresolved_type(val* self, val* p0, val* p1) {
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
var = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (unlikely(!var)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2155);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_compiler = var1;
{
{ /* Inline separate_compiler$SeparateCompiler$live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var6 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 147);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var9 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2157);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var7) on <var7:nullable StaticFrame> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var12 = var7->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var7:nullable StaticFrame> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var10) on <var10:MPropDef> */
var15 = var10->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var10:MPropDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var4, var13); /* has_key on <var4:Map[MClassDef, Set[MType]]>*/
}
var17 = !var16;
if (var17){
{
{ /* Inline separate_compiler$SeparateCompiler$live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var20 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 147);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var23 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2158);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var21) on <var21:nullable StaticFrame> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var26 = var21->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var21:nullable StaticFrame> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var24) on <var24:MPropDef> */
var29 = var24->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var24:MPropDef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = NEW_core__HashSet(&type_core__HashSet__nitc__MType);
{
core___core__HashSet___core__kernel__Object__init(var30); /* Direct call hash_collection$HashSet$init on <var30:HashSet[MType]>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var18, var27, var30); /* []= on <var18:Map[MClassDef, Set[MType]]>*/
}
} else {
}
{
{ /* Inline separate_compiler$SeparateCompiler$live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var33 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 147);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:SeparateCompilerVisitor> */
var36 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2160);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$mpropdef (var34) on <var34:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var34:nullable StaticFrame> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var37) on <var37:MPropDef> */
var42 = var37->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var37:MPropDef> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self, val* p0))((((long)var31&3)?class_info[((long)var31&3)]:var31->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var31, var40); /* [] on <var31:Map[MClassDef, Set[MType]]>*/
}
{
((void(*)(val* self, val* p0))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var43, var_mtype); /* add on <var43:nullable Object(Set[MType])>*/
}
RET_LABEL:;
}
/* method separate_compiler$MMethodDef$separate_runtime_function for (self: MMethodDef): SeparateRuntimeFunction */
val* nitc__separate_compiler___MMethodDef___separate_runtime_function(val* self) {
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
{ /* Inline separate_compiler$MMethodDef$separate_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_nitc__separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
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
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable SeparateRuntimeFunction> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
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
{ /* Inline model$MPropDef$mclassdef (self) on <self:MMethodDef> */
var12 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MMethodDef> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_recv = var13;
{
{ /* Inline model$MMethodDef$msignature (self) on <self:MMethodDef> */
var18 = self->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (self) on <self:MMethodDef> */
var21 = self->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <self:MMethodDef> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var19) on <var19:MClassDef> */
var24 = var19->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var19:MClassDef> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var16 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2171);
fatal_exit(1);
} else {
var25 = nitc___nitc__MSignature___MType__resolve_for(var16, var_recv, var_recv, var22, 1);
}
var_msignature = var25;
var26 = NEW_nitc__SeparateRuntimeFunction(&type_nitc__SeparateRuntimeFunction);
{
var27 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(self);
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d]))(var26, self); /* mmethoddef= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__called_recv_61d]))(var26, var_recv); /* called_recv= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__called_signature_61d]))(var26, var_msignature); /* called_signature= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__build_c_name_61d]))(var26, var27); /* build_c_name= on <var26:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_core__kernel__Object__init]))(var26); /* init on <var26:SeparateRuntimeFunction>*/
}
var_res = var26;
{
{ /* Inline separate_compiler$MMethodDef$separate_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___separate_runtime_function_cache].val = var_res; /* _separate_runtime_function_cache on <self:MMethodDef> */
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
/* method separate_compiler$MMethodDef$separate_runtime_function_cache for (self: MMethodDef): nullable SeparateRuntimeFunction */
val* nitc__separate_compiler___MMethodDef___separate_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
var1 = self->attrs[COLOR_nitc__separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$MMethodDef$separate_runtime_function_cache= for (self: MMethodDef, nullable SeparateRuntimeFunction) */
void nitc__separate_compiler___MMethodDef___separate_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___separate_runtime_function_cache].val = p0; /* _separate_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler$MMethodDef$virtual_runtime_function for (self: MMethodDef): SeparateRuntimeFunction */
val* nitc__separate_compiler___MMethodDef___virtual_runtime_function(val* self) {
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
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
val* var67 /* : String */;
val* var68 /* : String */;
{
{ /* Inline separate_compiler$MMethodDef$virtual_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
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
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable SeparateRuntimeFunction> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
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
{ /* Inline model$MPropDef$mproperty (self) on <self:MMethodDef> */
var12 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var10) on <var10:MProperty(MMethod)> */
var15 = var10->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var10:MProperty(MMethod)> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var13) on <var13:MPropDef(MMethodDef)> */
var18 = var13->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var13:MPropDef(MMethodDef)> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_intromclassdef = var16;
{
{ /* Inline model$MClassDef$bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var21 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_recv = var19;
{
var22 = nitc__separate_compiler___MMethodDef___separate_runtime_function(self);
}
var_res = var22;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_recv (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var25 = var_res->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var23,var_recv) on <var23:MType> */
var_other = var_recv;
{
{ /* Inline kernel$Object$is_same_instance (var23,var_other) on <var23:MType> */
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
{ /* Inline separate_compiler$MMethodDef$virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL31:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MPropDef$mproperty (self) on <self:MMethodDef> */
var34 = self->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var32) on <var32:MProperty(MMethod)> */
var37 = var32->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var32:MProperty(MMethod)> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var35) on <var35:MPropDef(MMethodDef)> */
var40 = var35->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var35:MPropDef(MMethodDef)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var43 = var_intromclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (var38 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2196);
fatal_exit(1);
} else {
var44 = nitc___nitc__MSignature___MType__resolve_for(var38, var_recv, var_recv, var41, 1);
}
var_msignature = var44;
{
var46 = nitc__abstract_compiler___MClassType___MType__ctype(var_recv);
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_recv (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var49 = var_res->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val*(*)(val* self))(var47->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var47); /* ctype on <var47:MType>*/
}
{
var51 = ((short int(*)(val* self, val* p0))(var46->class->vft[COLOR_core__kernel__Object___61d_61d]))(var46, var50); /* == on <var46:String>*/
}
var_ = var51;
if (var51){
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (var_res) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var54 = var_res->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = nitc__separate_compiler___MSignature___c_equiv(var_msignature, var52);
}
var45 = var55;
} else {
var45 = var_;
}
if (var45){
{
{ /* Inline separate_compiler$MMethodDef$virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL56:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
var57 = NEW_nitc__SeparateRuntimeFunction(&type_nitc__SeparateRuntimeFunction);
if (unlikely(varonce==NULL)) {
var58 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "VIRTUAL_";
var63 = (val*)(8l<<2|1);
var64 = (val*)(8l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var58)->values[0]=var60;
} else {
var58 = varonce;
varonce = NULL;
}
{
var67 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(self);
}
((struct instance_core__NativeArray*)var58)->values[1]=var67;
{
var68 = ((val*(*)(val* self))(var58->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce = var58;
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d]))(var57, self); /* mmethoddef= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__called_recv_61d]))(var57, var_recv); /* called_recv= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__called_signature_61d]))(var57, var_msignature); /* called_signature= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nitc__separate_compiler__SeparateRuntimeFunction__build_c_name_61d]))(var57, var68); /* build_c_name= on <var57:SeparateRuntimeFunction>*/
}
{
((void(*)(val* self))(var57->class->vft[COLOR_core__kernel__Object__init]))(var57); /* init on <var57:SeparateRuntimeFunction>*/
}
var_res = var57;
{
{ /* Inline separate_compiler$MMethodDef$virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL69:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$is_thunk= (var_res,1) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var_res->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___is_thunk].s = 1; /* _is_thunk on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
RET_LABEL70:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$MMethodDef$virtual_runtime_function_cache for (self: MMethodDef): nullable SeparateRuntimeFunction */
val* nitc__separate_compiler___MMethodDef___virtual_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
var1 = self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$MMethodDef$virtual_runtime_function_cache= for (self: MMethodDef, nullable SeparateRuntimeFunction) */
void nitc__separate_compiler___MMethodDef___virtual_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache].val = p0; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler$MSignature$c_equiv for (self: MSignature, MSignature): Bool */
short int nitc__separate_compiler___MSignature___c_equiv(val* self, val* p0) {
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
{ /* Inline kernel$Object$== (self,var_other) on <self:MSignature> */
var_other3 = var_other;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other3) on <self:MSignature> */
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
var7 = nitc___nitc__MSignature___arity(self);
}
{
var8 = nitc___nitc__MSignature___arity(var_other);
}
{
{ /* Inline kernel$Int$!= (var7,var8) on <var7:Int> */
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
var13 = nitc___nitc__MSignature___arity(self);
}
var_ = var13;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var16 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var17 = var_i < var_;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (self) on <self:MSignature> */
var20 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var18, var_i);
}
{
{ /* Inline model$MParameter$mtype (var21) on <var21:nullable Object(MParameter)> */
var24 = var21->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var21:nullable Object(MParameter)> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = ((val*(*)(val* self))(var22->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var22); /* ctype on <var22:MType>*/
}
{
{ /* Inline model$MSignature$mparameters (var_other) on <var_other:MSignature> */
var28 = var_other->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_other:MSignature> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var26, var_i);
}
{
{ /* Inline model$MParameter$mtype (var29) on <var29:nullable Object(MParameter)> */
var32 = var29->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var29:nullable Object(MParameter)> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = ((val*(*)(val* self))(var30->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var30); /* ctype on <var30:MType>*/
}
{
{ /* Inline kernel$Object$!= (var25,var33) on <var25:String> */
var_other36 = var33;
{
var37 = ((short int(*)(val* self, val* p0))(var25->class->vft[COLOR_core__kernel__Object___61d_61d]))(var25, var_other36); /* == on <var25:String>*/
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
var39 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var39;
}
BREAK_label: (void)0;
{
{ /* Inline model$MSignature$return_mtype (self) on <self:MSignature> */
var42 = self->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var_other) on <var_other:MSignature> */
var45 = var_other->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var40 == NULL) {
var46 = (var43 != NULL);
} else {
{ /* Inline kernel$Object$!= (var40,var43) on <var40:nullable MType> */
var_other36 = var43;
{
var49 = ((short int(*)(val* self, val* p0))(var40->class->vft[COLOR_core__kernel__Object___61d_61d]))(var40, var_other36); /* == on <var40:nullable MType(MType)>*/
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
{ /* Inline model$MSignature$return_mtype (self) on <self:MSignature> */
var54 = self->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
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
{ /* Inline kernel$Object$== (var52,((val*)NULL)) on <var52:nullable MType> */
var_other3 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var52,var_other3) on <var52:nullable MType(MType)> */
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
{ /* Inline model$MSignature$return_mtype (var_other) on <var_other:MSignature> */
var64 = var_other->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
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
{ /* Inline kernel$Object$== (var62,((val*)NULL)) on <var62:nullable MType> */
var_other3 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var62,var_other3) on <var62:nullable MType(MType)> */
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
{ /* Inline model$MSignature$return_mtype (self) on <self:MSignature> */
var73 = self->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2223);
fatal_exit(1);
} else {
var74 = ((val*(*)(val* self))(var71->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var71); /* ctype on <var71:nullable MType>*/
}
{
{ /* Inline model$MSignature$return_mtype (var_other) on <var_other:MSignature> */
var77 = var_other->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_other:MSignature> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (var75 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2223);
fatal_exit(1);
} else {
var78 = ((val*(*)(val* self))(var75->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var75); /* ctype on <var75:nullable MType>*/
}
{
{ /* Inline kernel$Object$!= (var74,var78) on <var74:String> */
var_other36 = var78;
{
var81 = ((short int(*)(val* self, val* p0))(var74->class->vft[COLOR_core__kernel__Object___61d_61d]))(var74, var_other36); /* == on <var74:String>*/
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
/* method separate_compiler$SeparateRuntimeFunction$called_recv for (self: SeparateRuntimeFunction): MType */
val* nitc___nitc__SeparateRuntimeFunction___called_recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$called_recv= for (self: SeparateRuntimeFunction, MType) */
void nitc___nitc__SeparateRuntimeFunction___called_recv_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val = p0; /* _called_recv on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$called_signature for (self: SeparateRuntimeFunction): MSignature */
val* nitc___nitc__SeparateRuntimeFunction___called_signature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$called_signature= for (self: SeparateRuntimeFunction, MSignature) */
void nitc___nitc__SeparateRuntimeFunction___called_signature_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val = p0; /* _called_signature on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$build_c_name for (self: SeparateRuntimeFunction): String */
val* nitc___nitc__SeparateRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___build_c_name].val; /* _build_c_name on <self:SeparateRuntimeFunction> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _build_c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2239);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$build_c_name= for (self: SeparateRuntimeFunction, String) */
void nitc___nitc__SeparateRuntimeFunction___build_c_name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___build_c_name].val = p0; /* _build_c_name on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$is_thunk for (self: SeparateRuntimeFunction): Bool */
short int nitc___nitc__SeparateRuntimeFunction___is_thunk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___is_thunk].s; /* _is_thunk on <self:SeparateRuntimeFunction> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$is_thunk= for (self: SeparateRuntimeFunction, Bool) */
void nitc___nitc__SeparateRuntimeFunction___is_thunk_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___is_thunk].s = p0; /* _is_thunk on <self:SeparateRuntimeFunction> */
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$to_s for (self: SeparateRuntimeFunction): String */
val* nitc___nitc__SeparateRuntimeFunction___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1947);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MPropDef$to_s (var1) on <var1:MMethodDef> */
var6 = var1->attrs[COLOR_nitc__model__MPropDef___to_s].val; /* _to_s on <var1:MMethodDef> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2450);
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
/* method separate_compiler$SeparateRuntimeFunction$c_ret for (self: SeparateRuntimeFunction): String */
val* nitc___nitc__SeparateRuntimeFunction___c_ret(val* self) {
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
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_ret].val != NULL; /* _c_ret on <self:SeparateRuntimeFunction> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_ret].val; /* _c_ret on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_ret");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2247);
fatal_exit(1);
}
} else {
{
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var7 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var5) on <var5:MSignature> */
var10 = var5->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var5:MSignature> */
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
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
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
var16 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_ret); /* ctype on <var_ret:nullable MType(MType)>*/
}
var3 = var16;
goto RET_LABEL4;
} else {
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "void";
var20 = (val*)(4l<<2|1);
var21 = (val*)(4l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce = var17;
}
var3 = var17;
goto RET_LABEL4;
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_ret].val = var3; /* _c_ret on <self:SeparateRuntimeFunction> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$c_sig for (self: SeparateRuntimeFunction): String */
val* nitc___nitc__SeparateRuntimeFunction___c_sig(val* self) {
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
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
val* var24 /* : MType */;
val* var26 /* : MType */;
val* var27 /* : String */;
val* var28 /* : String */;
long var_i /* var i: Int */;
val* var29 /* : MSignature */;
val* var31 /* : MSignature */;
long var32 /* : Int */;
long var_ /* var : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var36 /* : Bool */;
val* var37 /* : MSignature */;
val* var39 /* : MSignature */;
val* var40 /* : Array[MParameter] */;
val* var42 /* : Array[MParameter] */;
val* var43 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var44 /* : MType */;
val* var46 /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : MMethodDef */;
val* var52 /* : MMethodDef */;
val* var53 /* : MClassDef */;
val* var55 /* : MClassDef */;
val* var56 /* : MModule */;
val* var58 /* : MModule */;
val* var59 /* : MClassType */;
val* var61 /* : NativeArray[String] */;
static val* varonce60;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var80 /* : String */;
long var81 /* : Int */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
val* var90 /* : String */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_sig].val != NULL; /* _c_sig on <self:SeparateRuntimeFunction> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_sig].val; /* _c_sig on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_sig");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2257);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var5) on <var5:FlatBuffer> */
{
((void(*)(val* self))(var5->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
RET_LABEL6:(void)0;
}
}
var_sig = var5;
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "(";
var12 = (val*)(1l<<2|1);
var13 = (val*)(1l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = " self";
var20 = (val*)(5l<<2|1);
var21 = (val*)(5l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var7)->values[2]=var17;
} else {
var7 = varonce;
varonce = NULL;
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_recv (self) on <self:SeparateRuntimeFunction> */
var26 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((val*(*)(val* self))(var24->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var24); /* ctype on <var24:MType>*/
}
((struct instance_core__NativeArray*)var7)->values[1]=var27;
{
var28 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var28); /* Direct call flat$FlatBuffer$append on <var_sig:FlatBuffer>*/
}
var_i = 0l;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var31 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = nitc___nitc__MSignature___arity(var29);
}
var_ = var32;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var35 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var36 = var_i < var_;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
} else {
goto BREAK_label;
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var39 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model$MSignature$mparameters (var37) on <var37:MSignature> */
var42 = var37->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var37:MSignature> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var40, var_i);
}
var_mp = var43;
{
{ /* Inline model$MParameter$mtype (var_mp) on <var_mp:MParameter> */
var46 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_mtype = var44;
{
{ /* Inline model$MParameter$is_vararg (var_mp) on <var_mp:MParameter> */
var49 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (var47){
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var52 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1947);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var50) on <var50:MMethodDef> */
var55 = var50->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var50:MMethodDef> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var53) on <var53:MClassDef> */
var58 = var53->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var53:MClassDef> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc__model___MModule___array_type(var56, var_mtype);
}
var_mtype = var59;
} else {
}
if (unlikely(varonce60==NULL)) {
var61 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = ", ";
var66 = (val*)(2l<<2|1);
var67 = (val*)(2l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var61)->values[0]=var63;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = " p";
var74 = (val*)(2l<<2|1);
var75 = (val*)(2l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var61)->values[2]=var71;
} else {
var61 = varonce60;
varonce60 = NULL;
}
{
var78 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var61)->values[1]=var78;
var79 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var61)->values[3]=var79;
{
var80 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var80); /* Direct call flat$FlatBuffer$append on <var_sig:FlatBuffer>*/
}
{
var81 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var81;
}
BREAK_label: (void)0;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = ")";
var86 = (val*)(1l<<2|1);
var87 = (val*)(1l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var83); /* Direct call flat$FlatBuffer$append on <var_sig:FlatBuffer>*/
}
{
var90 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_sig);
}
var3 = var90;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_sig].val = var3; /* _c_sig on <self:SeparateRuntimeFunction> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$c_funptrtype for (self: SeparateRuntimeFunction): String */
val* nitc___nitc__SeparateRuntimeFunction___c_funptrtype(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_funptrtype].val != NULL; /* _c_funptrtype on <self:SeparateRuntimeFunction> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_funptrtype].val; /* _c_funptrtype on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_funptrtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2273);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "(*)";
var10 = (val*)(3l<<2|1);
var11 = (val*)(3l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var14 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var5)->values[0]=var14;
{
var15 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var5)->values[2]=var15;
{
var16 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var16;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_funptrtype].val = var3; /* _c_funptrtype on <self:SeparateRuntimeFunction> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateRuntimeFunction$compile_to_c for (self: SeparateRuntimeFunction, AbstractCompiler) */
void nitc___nitc__SeparateRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var_sig /* var sig: String */;
val* var17 /* : String */;
val* var19 /* : NativeArray[String] */;
static val* varonce18;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var28 /* : String */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
val* var33 /* : nullable RapidTypeAnalysis */;
val* var35 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
val* var36 /* : MMethodDef */;
val* var38 /* : MMethodDef */;
val* var39 /* : MClassDef */;
val* var41 /* : MClassDef */;
val* var42 /* : MClassType */;
val* var44 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var45 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var46 /* : RuntimeVariable */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
val* var55 /* : MType */;
val* var57 /* : MType */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var58 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var59 /* : StaticFrame */;
val* var_frame /* var frame: StaticFrame */;
val* var61 /* : MSignature */;
val* var63 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var64 /* : MSignature */;
val* var66 /* : MSignature */;
val* var67 /* : nullable MType */;
val* var69 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var70 /* : FlatBuffer */;
val* var_comment /* var comment: FlatBuffer */;
val* var73 /* : NativeArray[String] */;
static val* varonce72;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Bool */;
val* var81 /* : nullable Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
val* var90 /* : String */;
val* var91 /* : MType */;
val* var93 /* : MType */;
val* var94 /* : String */;
val* var95 /* : String */;
long var_i /* var i: Int */;
long var96 /* : Int */;
long var_ /* var : Int */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
const char* var_class_name102;
short int var103 /* : Bool */;
val* var104 /* : Array[MParameter] */;
val* var106 /* : Array[MParameter] */;
val* var107 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var108 /* : MType */;
val* var110 /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
val* var114 /* : MModule */;
val* var115 /* : MClassType */;
val* var117 /* : NativeArray[String] */;
static val* varonce116;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Bool */;
val* var125 /* : nullable Bool */;
val* var126 /* : String */;
val* var127 /* : String */;
val* var128 /* : RuntimeVariable */;
val* var130 /* : NativeArray[String] */;
static val* varonce129;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Bool */;
val* var138 /* : nullable Bool */;
val* var139 /* : String */;
val* var140 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
long var141 /* : Int */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Bool */;
val* var149 /* : nullable Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
val* var156 /* : NativeArray[String] */;
static val* varonce155;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : CString */;
val* var160 /* : String */;
val* var161 /* : nullable Int */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Bool */;
val* var164 /* : nullable Bool */;
val* var165 /* : String */;
val* var166 /* : String */;
val* var168 /* : NativeArray[String] */;
static val* varonce167;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : CString */;
val* var172 /* : String */;
val* var173 /* : nullable Int */;
val* var174 /* : nullable Int */;
val* var175 /* : nullable Bool */;
val* var176 /* : nullable Bool */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Bool */;
val* var184 /* : nullable Bool */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Bool */;
val* var192 /* : nullable Bool */;
val* var193 /* : String */;
val* var194 /* : String */;
val* var195 /* : String */;
val* var197 /* : NativeArray[String] */;
static val* varonce196;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
val* var202 /* : nullable Int */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Bool */;
val* var205 /* : nullable Bool */;
val* var206 /* : String */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
val* var212 /* : RuntimeVariable */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : CString */;
val* var217 /* : String */;
val* var218 /* : nullable Int */;
val* var219 /* : nullable Int */;
val* var220 /* : nullable Bool */;
val* var221 /* : nullable Bool */;
val* var222 /* : String */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
val* var227 /* : nullable RuntimeVariable */;
val* var_subret /* var subret: nullable RuntimeVariable */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
val* var238 /* : nullable RuntimeVariable */;
val* var240 /* : nullable RuntimeVariable */;
short int var241 /* : Bool */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
short int var_247 /* var : Bool */;
val* var248 /* : HashSet[MModule] */;
val* var250 /* : HashSet[MModule] */;
val* var251 /* : MClassDef */;
val* var253 /* : MClassDef */;
val* var254 /* : MModule */;
val* var256 /* : MModule */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : CString */;
val* var262 /* : String */;
val* var263 /* : nullable Int */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Bool */;
val* var266 /* : nullable Bool */;
val* var267 /* : nullable RuntimeVariable */;
val* var269 /* : NativeArray[String] */;
static val* varonce268;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : CString */;
val* var273 /* : String */;
val* var274 /* : nullable Int */;
val* var275 /* : nullable Int */;
val* var276 /* : nullable Bool */;
val* var277 /* : nullable Bool */;
val* var278 /* : nullable String */;
val* var280 /* : nullable String */;
val* var281 /* : String */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
short int var285 /* : Bool */;
short int var286 /* : Bool */;
val* var288 /* : NativeArray[String] */;
static val* varonce287;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : CString */;
val* var292 /* : String */;
val* var293 /* : nullable Int */;
val* var294 /* : nullable Int */;
val* var295 /* : nullable Bool */;
val* var296 /* : nullable Bool */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : CString */;
val* var300 /* : String */;
val* var301 /* : nullable Int */;
val* var302 /* : nullable Int */;
val* var303 /* : nullable Bool */;
val* var304 /* : nullable Bool */;
val* var305 /* : nullable RuntimeVariable */;
val* var307 /* : nullable RuntimeVariable */;
val* var308 /* : String */;
val* var309 /* : String */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : CString */;
val* var313 /* : String */;
val* var314 /* : nullable Int */;
val* var315 /* : nullable Int */;
val* var316 /* : nullable Bool */;
val* var317 /* : nullable Bool */;
val* var318 /* : HashMap[String, String] */;
val* var320 /* : HashMap[String, String] */;
val* var321 /* : String */;
val* var323 /* : NativeArray[String] */;
static val* varonce322;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : CString */;
val* var327 /* : String */;
val* var328 /* : nullable Int */;
val* var329 /* : nullable Int */;
val* var330 /* : nullable Bool */;
val* var331 /* : nullable Bool */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : CString */;
val* var335 /* : String */;
val* var336 /* : nullable Int */;
val* var337 /* : nullable Int */;
val* var338 /* : nullable Bool */;
val* var339 /* : nullable Bool */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : CString */;
val* var343 /* : String */;
val* var344 /* : nullable Int */;
val* var345 /* : nullable Int */;
val* var346 /* : nullable Bool */;
val* var347 /* : nullable Bool */;
val* var348 /* : String */;
val* var349 /* : Location */;
val* var351 /* : Location */;
val* var352 /* : nullable SourceFile */;
val* var354 /* : nullable SourceFile */;
val* var355 /* : String */;
val* var357 /* : String */;
val* var358 /* : Location */;
val* var360 /* : Location */;
long var361 /* : Int */;
long var363 /* : Int */;
val* var364 /* : String */;
val* var365 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__COMPILER];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2276);
fatal_exit(1);
}
var_compiler = p0;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1947);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmethoddef = var1;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " ";
var9 = (val*)(1l<<2|1);
var10 = (val*)(1l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var4)->values[0]=var13;
{
var14 = nitc___nitc__AbstractRuntimeFunction___c_name(self);
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
{
var15 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var4)->values[3]=var15;
{
var16 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
var_sig = var16;
{
var17 = nitc___nitc__AbstractRuntimeFunction___c_name(self);
}
if (unlikely(varonce18==NULL)) {
var19 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = ";";
var24 = (val*)(1l<<2|1);
var25 = (val*)(1l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[1]=var21;
} else {
var19 = varonce18;
varonce18 = NULL;
}
((struct instance_core__NativeArray*)var19)->values[0]=var_sig;
{
var28 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
{
nitc___nitc__AbstractCompiler___provide_declaration(var_compiler, var17, var28); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <var_compiler:AbstractCompiler>*/
}
/* <var_compiler:AbstractCompiler> isa SeparateCompiler */
cltype30 = type_nitc__SeparateCompiler.color;
idtype31 = type_nitc__SeparateCompiler.id;
if(cltype30 >= var_compiler->type->table_size) {
var29 = 0;
} else {
var29 = var_compiler->type->type_table[cltype30] == idtype31;
}
if (unlikely(!var29)) {
var_class_name32 = var_compiler == NULL ? "null" : var_compiler->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SeparateCompiler", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2283);
fatal_exit(1);
}
{
{ /* Inline separate_compiler$SeparateCompiler$runtime_type_analysis (var_compiler) on <var_compiler:AbstractCompiler(SeparateCompiler)> */
var35 = var_compiler->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var_compiler:AbstractCompiler(SeparateCompiler)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_rta = var33;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var38 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1947);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var36) on <var36:MMethodDef> */
var41 = var36->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var36:MMethodDef> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var39) on <var39:MClassDef> */
var44 = var39->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var39:MClassDef> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_recv = var42;
{
var45 = ((val*(*)(val* self))(var_compiler->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler); /* new_visitor on <var_compiler:AbstractCompiler>*/
}
var_v = var45;
var46 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "self";
var51 = (val*)(4l<<2|1);
var52 = (val*)(4l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_recv (self) on <self:SeparateRuntimeFunction> */
var57 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var46->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var46, var48); /* name= on <var46:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var46->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var46, var55); /* mtype= on <var46:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var46->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var46, var_recv); /* mcasttype= on <var46:RuntimeVariable>*/
}
{
((void(*)(val* self))(var46->class->vft[COLOR_core__kernel__Object__init]))(var46); /* init on <var46:RuntimeVariable>*/
}
var_selfvar = var46;
var58 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var58); /* Direct call array$Array$init on <var58:Array[RuntimeVariable]>*/
}
var_arguments = var58;
var59 = NEW_nitc__StaticFrame(&type_nitc__StaticFrame);
{
((void(*)(val* self, val* p0))(var59->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d]))(var59, var_v); /* visitor= on <var59:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var59->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d]))(var59, var_mmethoddef); /* mpropdef= on <var59:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var59->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d]))(var59, var_recv); /* receiver= on <var59:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var59->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d]))(var59, var_arguments); /* arguments= on <var59:StaticFrame>*/
}
{
((void(*)(val* self))(var59->class->vft[COLOR_core__kernel__Object__init]))(var59); /* init on <var59:StaticFrame>*/
}
var_frame = var59;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL60:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var63 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_msignature = var61;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var66 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var64) on <var64:MSignature> */
var69 = var64->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var64:MSignature> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var_ret = var67;
var70 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var70) on <var70:FlatBuffer> */
{
((void(*)(val* self))(var70->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var70); /* init on <var70:FlatBuffer>*/
}
RET_LABEL71:(void)0;
}
}
var_comment = var70;
if (unlikely(varonce72==NULL)) {
var73 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "(";
var78 = (val*)(1l<<2|1);
var79 = (val*)(1l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var73)->values[0]=var75;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = ": ";
var86 = (val*)(2l<<2|1);
var87 = (val*)(2l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var73)->values[2]=var83;
} else {
var73 = varonce72;
varonce72 = NULL;
}
{
var90 = ((val*(*)(val* self))(var_selfvar->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_selfvar); /* to_s on <var_selfvar:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var73)->values[1]=var90;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var93 = var_selfvar->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var93 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
var94 = ((val*(*)(val* self))(var91->class->vft[COLOR_core__abstract_text__Object__to_s]))(var91); /* to_s on <var91:MType>*/
}
((struct instance_core__NativeArray*)var73)->values[3]=var94;
{
var95 = ((val*(*)(val* self))(var73->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var73); /* native_to_s on <var73:NativeArray[String]>*/
}
varonce72 = var73;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var95); /* Direct call flat$FlatBuffer$append on <var_comment:FlatBuffer>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments, var_selfvar); /* Direct call array$Array$add on <var_arguments:Array[RuntimeVariable]>*/
}
var_i = 0l;
{
var96 = nitc___nitc__MSignature___arity(var_msignature);
}
var_ = var96;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var99 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var99)) {
var_class_name102 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name102);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var103 = var_i < var_;
var97 = var103;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
if (var97){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var106 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var106 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
var107 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var104, var_i);
}
var_mp = var107;
{
{ /* Inline model$MParameter$mtype (var_mp) on <var_mp:MParameter> */
var110 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var110 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
var_mtype = var108;
{
{ /* Inline model$MParameter$is_vararg (var_mp) on <var_mp:MParameter> */
var113 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (var111){
{
var114 = nitc___nitc__AbstractCompilerVisitor___mmodule(var_v);
}
{
var115 = nitc__model___MModule___array_type(var114, var_mtype);
}
var_mtype = var115;
} else {
}
if (unlikely(varonce116==NULL)) {
var117 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = ", ";
var122 = (val*)(2l<<2|1);
var123 = (val*)(2l<<2|1);
var124 = (val*)((long)(0)<<2|3);
var125 = (val*)((long)(0)<<2|3);
var121 = core__flat___CString___to_s_unsafe(var120, var122, var123, var124, var125);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var117)->values[0]=var119;
} else {
var117 = varonce116;
varonce116 = NULL;
}
{
var126 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var117)->values[1]=var126;
{
var127 = ((val*(*)(val* self))(var117->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var117); /* native_to_s on <var117:NativeArray[String]>*/
}
varonce116 = var117;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var127); /* Direct call flat$FlatBuffer$append on <var_comment:FlatBuffer>*/
}
var128 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce129==NULL)) {
var130 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "p";
var135 = (val*)(1l<<2|1);
var136 = (val*)(1l<<2|1);
var137 = (val*)((long)(0)<<2|3);
var138 = (val*)((long)(0)<<2|3);
var134 = core__flat___CString___to_s_unsafe(var133, var135, var136, var137, var138);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var130)->values[0]=var132;
} else {
var130 = varonce129;
varonce129 = NULL;
}
var139 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var130)->values[1]=var139;
{
var140 = ((val*(*)(val* self))(var130->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var130); /* native_to_s on <var130:NativeArray[String]>*/
}
varonce129 = var130;
{
((void(*)(val* self, val* p0))(var128->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var128, var140); /* name= on <var128:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var128->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var128, var_mtype); /* mtype= on <var128:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var128->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var128, var_mtype); /* mcasttype= on <var128:RuntimeVariable>*/
}
{
((void(*)(val* self))(var128->class->vft[COLOR_core__kernel__Object__init]))(var128); /* init on <var128:RuntimeVariable>*/
}
var_argvar = var128;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments, var_argvar); /* Direct call array$Array$add on <var_arguments:Array[RuntimeVariable]>*/
}
{
var141 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var141;
}
BREAK_label: (void)0;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = ")";
var146 = (val*)(1l<<2|1);
var147 = (val*)(1l<<2|1);
var148 = (val*)((long)(0)<<2|3);
var149 = (val*)((long)(0)<<2|3);
var145 = core__flat___CString___to_s_unsafe(var144, var146, var147, var148, var149);
var143 = var145;
varonce142 = var143;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var143); /* Direct call flat$FlatBuffer$append on <var_comment:FlatBuffer>*/
}
if (var_ret == NULL) {
var150 = 0; /* is null */
} else {
var150 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var153 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var154 = !var153;
var151 = var154;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
var150 = var151;
}
if (var150){
if (unlikely(varonce155==NULL)) {
var156 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = ": ";
var161 = (val*)(2l<<2|1);
var162 = (val*)(2l<<2|1);
var163 = (val*)((long)(0)<<2|3);
var164 = (val*)((long)(0)<<2|3);
var160 = core__flat___CString___to_s_unsafe(var159, var161, var162, var163, var164);
var158 = var160;
varonce157 = var158;
}
((struct instance_core__NativeArray*)var156)->values[0]=var158;
} else {
var156 = varonce155;
varonce155 = NULL;
}
{
var165 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var156)->values[1]=var165;
{
var166 = ((val*(*)(val* self))(var156->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var156); /* native_to_s on <var156:NativeArray[String]>*/
}
varonce155 = var156;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var166); /* Direct call flat$FlatBuffer$append on <var_comment:FlatBuffer>*/
}
} else {
}
if (unlikely(varonce167==NULL)) {
var168 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "/* method ";
var173 = (val*)(10l<<2|1);
var174 = (val*)(10l<<2|1);
var175 = (val*)((long)(0)<<2|3);
var176 = (val*)((long)(0)<<2|3);
var172 = core__flat___CString___to_s_unsafe(var171, var173, var174, var175, var176);
var170 = var172;
varonce169 = var170;
}
((struct instance_core__NativeArray*)var168)->values[0]=var170;
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = " for ";
var181 = (val*)(5l<<2|1);
var182 = (val*)(5l<<2|1);
var183 = (val*)((long)(0)<<2|3);
var184 = (val*)((long)(0)<<2|3);
var180 = core__flat___CString___to_s_unsafe(var179, var181, var182, var183, var184);
var178 = var180;
varonce177 = var178;
}
((struct instance_core__NativeArray*)var168)->values[2]=var178;
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = " */";
var189 = (val*)(3l<<2|1);
var190 = (val*)(3l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var168)->values[4]=var186;
} else {
var168 = varonce167;
varonce167 = NULL;
}
{
var193 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:SeparateRuntimeFunction>*/
}
((struct instance_core__NativeArray*)var168)->values[1]=var193;
{
var194 = ((val*(*)(val* self))(var_comment->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_comment); /* to_s on <var_comment:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var168)->values[3]=var194;
{
var195 = ((val*(*)(val* self))(var168->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var168); /* native_to_s on <var168:NativeArray[String]>*/
}
varonce167 = var168;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var195); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce196==NULL)) {
var197 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = " {";
var202 = (val*)(2l<<2|1);
var203 = (val*)(2l<<2|1);
var204 = (val*)((long)(0)<<2|3);
var205 = (val*)((long)(0)<<2|3);
var201 = core__flat___CString___to_s_unsafe(var200, var202, var203, var204, var205);
var199 = var201;
varonce198 = var199;
}
((struct instance_core__NativeArray*)var197)->values[1]=var199;
} else {
var197 = varonce196;
varonce196 = NULL;
}
((struct instance_core__NativeArray*)var197)->values[0]=var_sig;
{
var206 = ((val*(*)(val* self))(var197->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var197); /* native_to_s on <var197:NativeArray[String]>*/
}
varonce196 = var197;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var206); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (var_ret == NULL) {
var207 = 0; /* is null */
} else {
var207 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var210 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var211 = !var210;
var208 = var211;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
var207 = var208;
}
if (var207){
{
var212 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_ret);
}
{
{ /* Inline abstract_compiler$StaticFrame$returnvar= (var_frame,var212) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val = var212; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL213:(void)0;
}
}
} else {
}
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = "RET_LABEL";
var218 = (val*)(9l<<2|1);
var219 = (val*)(9l<<2|1);
var220 = (val*)((long)(0)<<2|3);
var221 = (val*)((long)(0)<<2|3);
var217 = core__flat___CString___to_s_unsafe(var216, var218, var219, var220, var221);
var215 = var217;
varonce214 = var215;
}
{
var222 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var215);
}
{
{ /* Inline abstract_compiler$StaticFrame$returnlabel= (var_frame,var222) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val = var222; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL223:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$is_thunk (self) on <self:SeparateRuntimeFunction> */
var226 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___is_thunk].s; /* _is_thunk on <self:SeparateRuntimeFunction> */
var224 = var226;
RET_LABEL225:(void)0;
}
}
if (var224){
{
var227 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(var_v, var_mmethoddef, var_recv, var_arguments);
}
var_subret = var227;
if (var_ret == NULL) {
var228 = 0; /* is null */
} else {
var228 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var231 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var232 = !var231;
var229 = var232;
goto RET_LABEL230;
RET_LABEL230:(void)0;
}
var228 = var229;
}
if (var228){
if (var_subret == NULL) {
var233 = 0; /* is null */
} else {
var233 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_subret,((val*)NULL)) on <var_subret:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var236 = ((short int(*)(val* self, val* p0))(var_subret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_subret, var_other); /* == on <var_subret:nullable RuntimeVariable(RuntimeVariable)>*/
}
var237 = !var236;
var234 = var237;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
var233 = var234;
}
if (unlikely(!var233)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2323);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$StaticFrame$returnvar (var_frame) on <var_frame:StaticFrame> */
var240 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var_frame:StaticFrame> */
var238 = var240;
RET_LABEL239:(void)0;
}
}
if (unlikely(var238 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2324);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var238, var_subret); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
if (var_rta == NULL) {
var242 = 0; /* is null */
} else {
var242 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var245 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var246 = !var245;
var243 = var246;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
var242 = var243;
}
var_247 = var242;
if (var242){
{
{ /* Inline rapid_type_analysis$RapidTypeAnalysis$live_mmodules (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var250 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_mmodules].val; /* _live_mmodules on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var250 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 85);
fatal_exit(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var253 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var253 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var251) on <var251:MClassDef> */
var256 = var251->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var251:MClassDef> */
if (unlikely(var256 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
var257 = core___core__HashSet___core__abstract_collection__Collection__has(var248, var254);
}
var258 = !var257;
var241 = var258;
} else {
var241 = var_247;
}
if (var241){
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "FATAL: Dead method executed.";
var263 = (val*)(28l<<2|1);
var264 = (val*)(28l<<2|1);
var265 = (val*)((long)(0)<<2|3);
var266 = (val*)((long)(0)<<2|3);
var262 = core__flat___CString___to_s_unsafe(var261, var263, var264, var265, var266);
var260 = var262;
varonce259 = var260;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var260); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
var267 = nitc__abstract_compiler___MMethodDef___compile_inside_to_c(var_mmethoddef, var_v, var_arguments);
}
}
}
if (unlikely(varonce268==NULL)) {
var269 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce270!=NULL)) {
var271 = varonce270;
} else {
var272 = ":;";
var274 = (val*)(2l<<2|1);
var275 = (val*)(2l<<2|1);
var276 = (val*)((long)(0)<<2|3);
var277 = (val*)((long)(0)<<2|3);
var273 = core__flat___CString___to_s_unsafe(var272, var274, var275, var276, var277);
var271 = var273;
varonce270 = var271;
}
((struct instance_core__NativeArray*)var269)->values[1]=var271;
} else {
var269 = varonce268;
varonce268 = NULL;
}
{
{ /* Inline abstract_compiler$StaticFrame$returnlabel (var_frame) on <var_frame:StaticFrame> */
var280 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var278 = var280;
RET_LABEL279:(void)0;
}
}
if (unlikely(var278 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2332);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var269)->values[0]=var278;
{
var281 = ((val*(*)(val* self))(var269->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var269); /* native_to_s on <var269:NativeArray[String]>*/
}
varonce268 = var269;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var281); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
if (var_ret == NULL) {
var282 = 0; /* is null */
} else {
var282 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var285 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var286 = !var285;
var283 = var286;
goto RET_LABEL284;
RET_LABEL284:(void)0;
}
var282 = var283;
}
if (var282){
if (unlikely(varonce287==NULL)) {
var288 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "return ";
var293 = (val*)(7l<<2|1);
var294 = (val*)(7l<<2|1);
var295 = (val*)((long)(0)<<2|3);
var296 = (val*)((long)(0)<<2|3);
var292 = core__flat___CString___to_s_unsafe(var291, var293, var294, var295, var296);
var290 = var292;
varonce289 = var290;
}
((struct instance_core__NativeArray*)var288)->values[0]=var290;
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = ";";
var301 = (val*)(1l<<2|1);
var302 = (val*)(1l<<2|1);
var303 = (val*)((long)(0)<<2|3);
var304 = (val*)((long)(0)<<2|3);
var300 = core__flat___CString___to_s_unsafe(var299, var301, var302, var303, var304);
var298 = var300;
varonce297 = var298;
}
((struct instance_core__NativeArray*)var288)->values[2]=var298;
} else {
var288 = varonce287;
varonce287 = NULL;
}
{
{ /* Inline abstract_compiler$StaticFrame$returnvar (var_frame) on <var_frame:StaticFrame> */
var307 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var_frame:StaticFrame> */
var305 = var307;
RET_LABEL306:(void)0;
}
}
if (unlikely(var305 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2334);
fatal_exit(1);
}
{
var308 = ((val*(*)(val* self))(var305->class->vft[COLOR_core__abstract_text__Object__to_s]))(var305); /* to_s on <var305:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var288)->values[1]=var308;
{
var309 = ((val*(*)(val* self))(var288->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var288); /* native_to_s on <var288:NativeArray[String]>*/
}
varonce287 = var288;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var309); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "}";
var314 = (val*)(1l<<2|1);
var315 = (val*)(1l<<2|1);
var316 = (val*)((long)(0)<<2|3);
var317 = (val*)((long)(0)<<2|3);
var313 = core__flat___CString___to_s_unsafe(var312, var314, var315, var316, var317);
var311 = var313;
varonce310 = var311;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var311); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$names (var_compiler) on <var_compiler:AbstractCompiler> */
var320 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <var_compiler:AbstractCompiler> */
if (unlikely(var320 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 542);
fatal_exit(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
{
var321 = nitc___nitc__AbstractRuntimeFunction___c_name(self);
}
if (unlikely(varonce322==NULL)) {
var323 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce324!=NULL)) {
var325 = varonce324;
} else {
var326 = " (";
var328 = (val*)(2l<<2|1);
var329 = (val*)(2l<<2|1);
var330 = (val*)((long)(0)<<2|3);
var331 = (val*)((long)(0)<<2|3);
var327 = core__flat___CString___to_s_unsafe(var326, var328, var329, var330, var331);
var325 = var327;
varonce324 = var325;
}
((struct instance_core__NativeArray*)var323)->values[1]=var325;
if (likely(varonce332!=NULL)) {
var333 = varonce332;
} else {
var334 = ":";
var336 = (val*)(1l<<2|1);
var337 = (val*)(1l<<2|1);
var338 = (val*)((long)(0)<<2|3);
var339 = (val*)((long)(0)<<2|3);
var335 = core__flat___CString___to_s_unsafe(var334, var336, var337, var338, var339);
var333 = var335;
varonce332 = var333;
}
((struct instance_core__NativeArray*)var323)->values[3]=var333;
if (likely(varonce340!=NULL)) {
var341 = varonce340;
} else {
var342 = ")";
var344 = (val*)(1l<<2|1);
var345 = (val*)(1l<<2|1);
var346 = (val*)((long)(0)<<2|3);
var347 = (val*)((long)(0)<<2|3);
var343 = core__flat___CString___to_s_unsafe(var342, var344, var345, var346, var347);
var341 = var343;
varonce340 = var341;
}
((struct instance_core__NativeArray*)var323)->values[5]=var341;
} else {
var323 = varonce322;
varonce322 = NULL;
}
{
var348 = nitc___nitc__MPropDef___nitc__model_base__MEntity__full_name(var_mmethoddef);
}
((struct instance_core__NativeArray*)var323)->values[0]=var348;
{
{ /* Inline model$MPropDef$location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var351 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var351 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2360);
fatal_exit(1);
}
var349 = var351;
RET_LABEL350:(void)0;
}
}
{
{ /* Inline location$Location$file (var349) on <var349:Location> */
var354 = var349->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var349:Location> */
var352 = var354;
RET_LABEL353:(void)0;
}
}
if (var352 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2337);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$filename (var352) on <var352:nullable SourceFile> */
if (unlikely(var352 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var357 = var352->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var352:nullable SourceFile> */
if (unlikely(var357 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var355 = var357;
RET_LABEL356:(void)0;
}
}
((struct instance_core__NativeArray*)var323)->values[2]=var355;
{
{ /* Inline model$MPropDef$location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var360 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var360 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2360);
fatal_exit(1);
}
var358 = var360;
RET_LABEL359:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var358) on <var358:Location> */
var363 = var358->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var358:Location> */
var361 = var363;
RET_LABEL362:(void)0;
}
}
var364 = core__flat___Int___core__abstract_text__Object__to_s(var361);
((struct instance_core__NativeArray*)var323)->values[4]=var364;
{
var365 = ((val*(*)(val* self))(var323->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var323); /* native_to_s on <var323:NativeArray[String]>*/
}
varonce322 = var323;
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var318, var321, var365); /* Direct call hash_collection$HashMap$[]= on <var318:HashMap[String, String]>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$compile_trampolines for (self: SeparateRuntimeFunction, SeparateCompiler) */
void nitc___nitc__SeparateRuntimeFunction___compile_trampolines(val* self, val* p0) {
val* var_compiler /* var compiler: SeparateCompiler */;
val* var /* : MMethodDef */;
val* var2 /* : MMethodDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var9 /* : RuntimeVariable */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var20 /* : MSignature */;
val* var22 /* : MSignature */;
val* var23 /* : nullable MType */;
val* var25 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var26 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
val* var_arguments /* var arguments: Array[String] */;
long var_i /* var i: Int */;
val* var35 /* : MSignature */;
val* var37 /* : MSignature */;
long var38 /* : Int */;
long var_39 /* var : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var43 /* : Bool */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
val* var54 /* : String */;
val* var55 /* : String */;
long var56 /* : Int */;
short int var57 /* : Bool */;
val* var58 /* : MMethodDef */;
val* var60 /* : MMethodDef */;
short int var61 /* : Bool */;
short int var_62 /* var : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var65 /* : MMethodDef */;
val* var67 /* : MMethodDef */;
val* var68 /* : MProperty */;
val* var70 /* : MProperty */;
val* var_m /* var m: MMethod */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Bool */;
val* var78 /* : nullable Bool */;
val* var79 /* : String */;
val* var80 /* : Text */;
val* var_n2 /* var n2: String */;
val* var82 /* : NativeArray[String] */;
static val* varonce81;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Bool */;
val* var98 /* : nullable Bool */;
val* var99 /* : String */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var102 /* : AbstractCompilerVisitor */;
val* var_v2 /* var v2: SeparateCompilerVisitor */;
val* var104 /* : NativeArray[String] */;
static val* varonce103;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Bool */;
val* var120 /* : nullable Bool */;
val* var121 /* : String */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var126 /* : NativeArray[String] */;
static val* varonce125;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Bool */;
val* var134 /* : nullable Bool */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Bool */;
val* var142 /* : nullable Bool */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : CString */;
val* var146 /* : String */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Bool */;
val* var150 /* : nullable Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : CString */;
val* var154 /* : String */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Bool */;
val* var158 /* : nullable Bool */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Bool */;
val* var166 /* : nullable Bool */;
val* var167 /* : String */;
val* var168 /* : String */;
val* var169 /* : String */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : CString */;
val* var173 /* : String */;
val* var174 /* : nullable Int */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Bool */;
val* var177 /* : nullable Bool */;
val* var178 /* : String */;
val* var179 /* : String */;
val* var_call /* var call: String */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
val* var186 /* : NativeArray[String] */;
static val* varonce185;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : CString */;
val* var190 /* : String */;
val* var191 /* : nullable Int */;
val* var192 /* : nullable Int */;
val* var193 /* : nullable Bool */;
val* var194 /* : nullable Bool */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
val* var200 /* : nullable Int */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Bool */;
val* var203 /* : nullable Bool */;
short int var204 /* : Bool */;
val* var205 /* : MMethodDef */;
val* var207 /* : MMethodDef */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
short int var_211 /* var : Bool */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
val* var214 /* : MMethodDef */;
val* var216 /* : MMethodDef */;
val* var_m217 /* var m: MMethodDef */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : CString */;
val* var221 /* : String */;
val* var222 /* : nullable Int */;
val* var223 /* : nullable Int */;
val* var224 /* : nullable Bool */;
val* var225 /* : nullable Bool */;
val* var226 /* : String */;
val* var227 /* : Text */;
val* var_n2228 /* var n2: String */;
val* var230 /* : NativeArray[String] */;
static val* varonce229;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : CString */;
val* var234 /* : String */;
val* var235 /* : nullable Int */;
val* var236 /* : nullable Int */;
val* var237 /* : nullable Bool */;
val* var238 /* : nullable Bool */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : CString */;
val* var242 /* : String */;
val* var243 /* : nullable Int */;
val* var244 /* : nullable Int */;
val* var245 /* : nullable Bool */;
val* var246 /* : nullable Bool */;
val* var247 /* : String */;
val* var248 /* : String */;
val* var249 /* : String */;
val* var250 /* : AbstractCompilerVisitor */;
val* var_v2251 /* var v2: SeparateCompilerVisitor */;
val* var253 /* : NativeArray[String] */;
static val* varonce252;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : CString */;
val* var257 /* : String */;
val* var258 /* : nullable Int */;
val* var259 /* : nullable Int */;
val* var260 /* : nullable Bool */;
val* var261 /* : nullable Bool */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : CString */;
val* var265 /* : String */;
val* var266 /* : nullable Int */;
val* var267 /* : nullable Int */;
val* var268 /* : nullable Bool */;
val* var269 /* : nullable Bool */;
val* var270 /* : String */;
val* var271 /* : String */;
val* var272 /* : String */;
val* var273 /* : String */;
val* var275 /* : NativeArray[String] */;
static val* varonce274;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : CString */;
val* var279 /* : String */;
val* var280 /* : nullable Int */;
val* var281 /* : nullable Int */;
val* var282 /* : nullable Bool */;
val* var283 /* : nullable Bool */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : CString */;
val* var287 /* : String */;
val* var288 /* : nullable Int */;
val* var289 /* : nullable Int */;
val* var290 /* : nullable Bool */;
val* var291 /* : nullable Bool */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : CString */;
val* var295 /* : String */;
val* var296 /* : nullable Int */;
val* var297 /* : nullable Int */;
val* var298 /* : nullable Bool */;
val* var299 /* : nullable Bool */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : CString */;
val* var303 /* : String */;
val* var304 /* : nullable Int */;
val* var305 /* : nullable Int */;
val* var306 /* : nullable Bool */;
val* var307 /* : nullable Bool */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : CString */;
val* var311 /* : String */;
val* var312 /* : nullable Int */;
val* var313 /* : nullable Int */;
val* var314 /* : nullable Bool */;
val* var315 /* : nullable Bool */;
val* var316 /* : String */;
val* var317 /* : String */;
val* var318 /* : String */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : CString */;
val* var322 /* : String */;
val* var323 /* : nullable Int */;
val* var324 /* : nullable Int */;
val* var325 /* : nullable Bool */;
val* var326 /* : nullable Bool */;
val* var327 /* : String */;
val* var328 /* : String */;
val* var_call329 /* var call: String */;
short int var330 /* : Bool */;
short int var331 /* : Bool */;
short int var333 /* : Bool */;
short int var334 /* : Bool */;
val* var336 /* : NativeArray[String] */;
static val* varonce335;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : CString */;
val* var340 /* : String */;
val* var341 /* : nullable Int */;
val* var342 /* : nullable Int */;
val* var343 /* : nullable Bool */;
val* var344 /* : nullable Bool */;
val* var345 /* : String */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : CString */;
val* var349 /* : String */;
val* var350 /* : nullable Int */;
val* var351 /* : nullable Int */;
val* var352 /* : nullable Bool */;
val* var353 /* : nullable Bool */;
var_compiler = p0;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1947);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var) on <var:MMethodDef> */
var5 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:MMethodDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_recv = var6;
var9 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "self";
var13 = (val*)(4l<<2|1);
var14 = (val*)(4l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce = var10;
}
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_recv (self) on <self:SeparateRuntimeFunction> */
var19 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2233);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var9, var10); /* name= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var9, var17); /* mtype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var9, var_recv); /* mcasttype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:RuntimeVariable>*/
}
var_selfvar = var9;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var22 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var20) on <var20:MSignature> */
var25 = var20->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var20:MSignature> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_ret = var23;
var26 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var26, 1l); /* Direct call array$Array$with_capacity on <var26:Array[String]>*/
}
var_ = var26;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "self";
var31 = (val*)(4l<<2|1);
var32 = (val*)(4l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var28); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
var_arguments = var_;
var_i = 0l;
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$called_signature (self) on <self:SeparateRuntimeFunction> */
var37 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2236);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nitc___nitc__MSignature___arity(var35);
}
var_39 = var38;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_39) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_39:Int> isa OTHER */
/* <var_39:Int> isa OTHER */
var42 = 1; /* easy <var_39:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var43 = var_i < var_39;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
} else {
goto BREAK_label;
}
if (unlikely(varonce44==NULL)) {
var45 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "p";
var50 = (val*)(1l<<2|1);
var51 = (val*)(1l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var45)->values[0]=var47;
} else {
var45 = varonce44;
varonce44 = NULL;
}
var54 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var45)->values[1]=var54;
{
var55 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments, var55); /* Direct call array$Array$add on <var_arguments:Array[String]>*/
}
{
var56 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var56;
}
BREAK_label: (void)0;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var60 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1947);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nitc___nitc__MPropDef___is_intro(var58);
}
var_62 = var61;
if (var61){
{
var63 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_recv);
}
var64 = !var63;
var57 = var64;
} else {
var57 = var_62;
}
if (var57){
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var67 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1947);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (var65) on <var65:MMethodDef> */
var70 = var65->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var65:MMethodDef> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_m = var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "CALL_";
var75 = (val*)(5l<<2|1);
var76 = (val*)(5l<<2|1);
var77 = (val*)((long)(0)<<2|3);
var78 = (val*)((long)(0)<<2|3);
var74 = core__flat___CString___to_s_unsafe(var73, var75, var76, var77, var78);
var72 = var74;
varonce71 = var72;
}
{
var79 = nitc__separate_compiler___MEntity___const_color(var_m);
}
{
var80 = ((val*(*)(val* self, val* p0))(var72->class->vft[COLOR_core__abstract_text__Text___43d]))(var72, var79); /* + on <var72:String>*/
}
var_n2 = var80;
if (unlikely(varonce81==NULL)) {
var82 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = " ";
var87 = (val*)(1l<<2|1);
var88 = (val*)(1l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var82)->values[1]=var84;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = ";";
var95 = (val*)(1l<<2|1);
var96 = (val*)(1l<<2|1);
var97 = (val*)((long)(0)<<2|3);
var98 = (val*)((long)(0)<<2|3);
var94 = core__flat___CString___to_s_unsafe(var93, var95, var96, var97, var98);
var92 = var94;
varonce91 = var92;
}
((struct instance_core__NativeArray*)var82)->values[4]=var92;
} else {
var82 = varonce81;
varonce81 = NULL;
}
{
var99 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var82)->values[0]=var99;
((struct instance_core__NativeArray*)var82)->values[2]=var_n2;
{
var100 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var82)->values[3]=var100;
{
var101 = ((val*(*)(val* self))(var82->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
{
nitc___nitc__AbstractCompiler___provide_declaration(var_compiler, var_n2, var101); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <var_compiler:SeparateCompiler>*/
}
{
var102 = ((val*(*)(val* self))(var_compiler->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler); /* new_visitor on <var_compiler:SeparateCompiler>*/
}
var_v2 = var102;
if (unlikely(varonce103==NULL)) {
var104 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = " ";
var109 = (val*)(1l<<2|1);
var110 = (val*)(1l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var104)->values[1]=var106;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = " {";
var117 = (val*)(2l<<2|1);
var118 = (val*)(2l<<2|1);
var119 = (val*)((long)(0)<<2|3);
var120 = (val*)((long)(0)<<2|3);
var116 = core__flat___CString___to_s_unsafe(var115, var117, var118, var119, var120);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var104)->values[4]=var114;
} else {
var104 = varonce103;
varonce103 = NULL;
}
{
var121 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var104)->values[0]=var121;
((struct instance_core__NativeArray*)var104)->values[2]=var_n2;
{
var122 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var104)->values[3]=var122;
{
var123 = ((val*(*)(val* self))(var104->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var104); /* native_to_s on <var104:NativeArray[String]>*/
}
varonce103 = var104;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2, var123); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2:SeparateCompilerVisitor>*/
}
{
var124 = nitc__separate_compiler___MEntity___const_color(var_m);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v2, var124); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v2:SeparateCompilerVisitor>*/
}
if (unlikely(varonce125==NULL)) {
var126 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "((";
var131 = (val*)(2l<<2|1);
var132 = (val*)(2l<<2|1);
var133 = (val*)((long)(0)<<2|3);
var134 = (val*)((long)(0)<<2|3);
var130 = core__flat___CString___to_s_unsafe(var129, var131, var132, var133, var134);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var126)->values[0]=var128;
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = ")(";
var139 = (val*)(2l<<2|1);
var140 = (val*)(2l<<2|1);
var141 = (val*)((long)(0)<<2|3);
var142 = (val*)((long)(0)<<2|3);
var138 = core__flat___CString___to_s_unsafe(var137, var139, var140, var141, var142);
var136 = var138;
varonce135 = var136;
}
((struct instance_core__NativeArray*)var126)->values[2]=var136;
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "->vft[";
var147 = (val*)(6l<<2|1);
var148 = (val*)(6l<<2|1);
var149 = (val*)((long)(0)<<2|3);
var150 = (val*)((long)(0)<<2|3);
var146 = core__flat___CString___to_s_unsafe(var145, var147, var148, var149, var150);
var144 = var146;
varonce143 = var144;
}
((struct instance_core__NativeArray*)var126)->values[4]=var144;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "]))(";
var155 = (val*)(4l<<2|1);
var156 = (val*)(4l<<2|1);
var157 = (val*)((long)(0)<<2|3);
var158 = (val*)((long)(0)<<2|3);
var154 = core__flat___CString___to_s_unsafe(var153, var155, var156, var157, var158);
var152 = var154;
varonce151 = var152;
}
((struct instance_core__NativeArray*)var126)->values[6]=var152;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = ");";
var163 = (val*)(2l<<2|1);
var164 = (val*)(2l<<2|1);
var165 = (val*)((long)(0)<<2|3);
var166 = (val*)((long)(0)<<2|3);
var162 = core__flat___CString___to_s_unsafe(var161, var163, var164, var165, var166);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var126)->values[8]=var160;
} else {
var126 = varonce125;
varonce125 = NULL;
}
{
var167 = nitc___nitc__SeparateRuntimeFunction___c_funptrtype(self);
}
((struct instance_core__NativeArray*)var126)->values[1]=var167;
{
var168 = nitc___nitc__SeparateCompilerVisitor___class_info(var_v2, var_selfvar);
}
((struct instance_core__NativeArray*)var126)->values[3]=var168;
{
var169 = nitc__separate_compiler___MEntity___const_color(var_m);
}
((struct instance_core__NativeArray*)var126)->values[5]=var169;
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = ", ";
var174 = (val*)(2l<<2|1);
var175 = (val*)(2l<<2|1);
var176 = (val*)((long)(0)<<2|3);
var177 = (val*)((long)(0)<<2|3);
var173 = core__flat___CString___to_s_unsafe(var172, var174, var175, var176, var177);
var171 = var173;
varonce170 = var171;
}
{
var178 = core__abstract_text___Collection___join(var_arguments, var171, ((val*)NULL));
}
((struct instance_core__NativeArray*)var126)->values[7]=var178;
{
var179 = ((val*(*)(val* self))(var126->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var126); /* native_to_s on <var126:NativeArray[String]>*/
}
varonce125 = var126;
var_call = var179;
if (var_ret == NULL) {
var180 = 0; /* is null */
} else {
var180 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var183 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var184 = !var183;
var181 = var184;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
var180 = var181;
}
if (var180){
if (unlikely(varonce185==NULL)) {
var186 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = "return ";
var191 = (val*)(7l<<2|1);
var192 = (val*)(7l<<2|1);
var193 = (val*)((long)(0)<<2|3);
var194 = (val*)((long)(0)<<2|3);
var190 = core__flat___CString___to_s_unsafe(var189, var191, var192, var193, var194);
var188 = var190;
varonce187 = var188;
}
((struct instance_core__NativeArray*)var186)->values[0]=var188;
} else {
var186 = varonce185;
varonce185 = NULL;
}
((struct instance_core__NativeArray*)var186)->values[1]=var_call;
{
var195 = ((val*(*)(val* self))(var186->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var186); /* native_to_s on <var186:NativeArray[String]>*/
}
varonce185 = var186;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2, var195); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2:SeparateCompilerVisitor>*/
}
} else {
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2, var_call); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2:SeparateCompilerVisitor>*/
}
}
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "}";
var200 = (val*)(1l<<2|1);
var201 = (val*)(1l<<2|1);
var202 = (val*)((long)(0)<<2|3);
var203 = (val*)((long)(0)<<2|3);
var199 = core__flat___CString___to_s_unsafe(var198, var200, var201, var202, var203);
var197 = var199;
varonce196 = var197;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2, var197); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2:SeparateCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var207 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var207 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1947);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
{ /* Inline modelize_property$MPropDef$has_supercall (var205) on <var205:MMethodDef> */
var210 = var205->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <var205:MMethodDef> */
var208 = var210;
RET_LABEL209:(void)0;
}
}
var_211 = var208;
if (var208){
{
var212 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_recv);
}
var213 = !var212;
var204 = var213;
} else {
var204 = var_211;
}
if (var204){
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$mmethoddef (self) on <self:SeparateRuntimeFunction> */
var216 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var216 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1947);
fatal_exit(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
var_m217 = var214;
if (likely(varonce218!=NULL)) {
var219 = varonce218;
} else {
var220 = "CALL_";
var222 = (val*)(5l<<2|1);
var223 = (val*)(5l<<2|1);
var224 = (val*)((long)(0)<<2|3);
var225 = (val*)((long)(0)<<2|3);
var221 = core__flat___CString___to_s_unsafe(var220, var222, var223, var224, var225);
var219 = var221;
varonce218 = var219;
}
{
var226 = nitc__separate_compiler___MEntity___const_color(var_m217);
}
{
var227 = ((val*(*)(val* self, val* p0))(var219->class->vft[COLOR_core__abstract_text__Text___43d]))(var219, var226); /* + on <var219:String>*/
}
var_n2228 = var227;
if (unlikely(varonce229==NULL)) {
var230 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce231!=NULL)) {
var232 = varonce231;
} else {
var233 = " ";
var235 = (val*)(1l<<2|1);
var236 = (val*)(1l<<2|1);
var237 = (val*)((long)(0)<<2|3);
var238 = (val*)((long)(0)<<2|3);
var234 = core__flat___CString___to_s_unsafe(var233, var235, var236, var237, var238);
var232 = var234;
varonce231 = var232;
}
((struct instance_core__NativeArray*)var230)->values[1]=var232;
if (likely(varonce239!=NULL)) {
var240 = varonce239;
} else {
var241 = ";";
var243 = (val*)(1l<<2|1);
var244 = (val*)(1l<<2|1);
var245 = (val*)((long)(0)<<2|3);
var246 = (val*)((long)(0)<<2|3);
var242 = core__flat___CString___to_s_unsafe(var241, var243, var244, var245, var246);
var240 = var242;
varonce239 = var240;
}
((struct instance_core__NativeArray*)var230)->values[4]=var240;
} else {
var230 = varonce229;
varonce229 = NULL;
}
{
var247 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var230)->values[0]=var247;
((struct instance_core__NativeArray*)var230)->values[2]=var_n2228;
{
var248 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var230)->values[3]=var248;
{
var249 = ((val*(*)(val* self))(var230->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var230); /* native_to_s on <var230:NativeArray[String]>*/
}
varonce229 = var230;
{
nitc___nitc__AbstractCompiler___provide_declaration(var_compiler, var_n2228, var249); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <var_compiler:SeparateCompiler>*/
}
{
var250 = ((val*(*)(val* self))(var_compiler->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler); /* new_visitor on <var_compiler:SeparateCompiler>*/
}
var_v2251 = var250;
if (unlikely(varonce252==NULL)) {
var253 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce254!=NULL)) {
var255 = varonce254;
} else {
var256 = " ";
var258 = (val*)(1l<<2|1);
var259 = (val*)(1l<<2|1);
var260 = (val*)((long)(0)<<2|3);
var261 = (val*)((long)(0)<<2|3);
var257 = core__flat___CString___to_s_unsafe(var256, var258, var259, var260, var261);
var255 = var257;
varonce254 = var255;
}
((struct instance_core__NativeArray*)var253)->values[1]=var255;
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = " {";
var266 = (val*)(2l<<2|1);
var267 = (val*)(2l<<2|1);
var268 = (val*)((long)(0)<<2|3);
var269 = (val*)((long)(0)<<2|3);
var265 = core__flat___CString___to_s_unsafe(var264, var266, var267, var268, var269);
var263 = var265;
varonce262 = var263;
}
((struct instance_core__NativeArray*)var253)->values[4]=var263;
} else {
var253 = varonce252;
varonce252 = NULL;
}
{
var270 = nitc___nitc__SeparateRuntimeFunction___c_ret(self);
}
((struct instance_core__NativeArray*)var253)->values[0]=var270;
((struct instance_core__NativeArray*)var253)->values[2]=var_n2228;
{
var271 = nitc___nitc__SeparateRuntimeFunction___c_sig(self);
}
((struct instance_core__NativeArray*)var253)->values[3]=var271;
{
var272 = ((val*(*)(val* self))(var253->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var253); /* native_to_s on <var253:NativeArray[String]>*/
}
varonce252 = var253;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2251, var272); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2251:SeparateCompilerVisitor>*/
}
{
var273 = nitc__separate_compiler___MEntity___const_color(var_m217);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v2251, var273); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <var_v2251:SeparateCompilerVisitor>*/
}
if (unlikely(varonce274==NULL)) {
var275 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce276!=NULL)) {
var277 = varonce276;
} else {
var278 = "((";
var280 = (val*)(2l<<2|1);
var281 = (val*)(2l<<2|1);
var282 = (val*)((long)(0)<<2|3);
var283 = (val*)((long)(0)<<2|3);
var279 = core__flat___CString___to_s_unsafe(var278, var280, var281, var282, var283);
var277 = var279;
varonce276 = var277;
}
((struct instance_core__NativeArray*)var275)->values[0]=var277;
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = ")(";
var288 = (val*)(2l<<2|1);
var289 = (val*)(2l<<2|1);
var290 = (val*)((long)(0)<<2|3);
var291 = (val*)((long)(0)<<2|3);
var287 = core__flat___CString___to_s_unsafe(var286, var288, var289, var290, var291);
var285 = var287;
varonce284 = var285;
}
((struct instance_core__NativeArray*)var275)->values[2]=var285;
if (likely(varonce292!=NULL)) {
var293 = varonce292;
} else {
var294 = "->vft[";
var296 = (val*)(6l<<2|1);
var297 = (val*)(6l<<2|1);
var298 = (val*)((long)(0)<<2|3);
var299 = (val*)((long)(0)<<2|3);
var295 = core__flat___CString___to_s_unsafe(var294, var296, var297, var298, var299);
var293 = var295;
varonce292 = var293;
}
((struct instance_core__NativeArray*)var275)->values[4]=var293;
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = "]))(";
var304 = (val*)(4l<<2|1);
var305 = (val*)(4l<<2|1);
var306 = (val*)((long)(0)<<2|3);
var307 = (val*)((long)(0)<<2|3);
var303 = core__flat___CString___to_s_unsafe(var302, var304, var305, var306, var307);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var275)->values[6]=var301;
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = ");";
var312 = (val*)(2l<<2|1);
var313 = (val*)(2l<<2|1);
var314 = (val*)((long)(0)<<2|3);
var315 = (val*)((long)(0)<<2|3);
var311 = core__flat___CString___to_s_unsafe(var310, var312, var313, var314, var315);
var309 = var311;
varonce308 = var309;
}
((struct instance_core__NativeArray*)var275)->values[8]=var309;
} else {
var275 = varonce274;
varonce274 = NULL;
}
{
var316 = nitc___nitc__SeparateRuntimeFunction___c_funptrtype(self);
}
((struct instance_core__NativeArray*)var275)->values[1]=var316;
{
var317 = nitc___nitc__SeparateCompilerVisitor___class_info(var_v2251, var_selfvar);
}
((struct instance_core__NativeArray*)var275)->values[3]=var317;
{
var318 = nitc__separate_compiler___MEntity___const_color(var_m217);
}
((struct instance_core__NativeArray*)var275)->values[5]=var318;
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = ", ";
var323 = (val*)(2l<<2|1);
var324 = (val*)(2l<<2|1);
var325 = (val*)((long)(0)<<2|3);
var326 = (val*)((long)(0)<<2|3);
var322 = core__flat___CString___to_s_unsafe(var321, var323, var324, var325, var326);
var320 = var322;
varonce319 = var320;
}
{
var327 = core__abstract_text___Collection___join(var_arguments, var320, ((val*)NULL));
}
((struct instance_core__NativeArray*)var275)->values[7]=var327;
{
var328 = ((val*(*)(val* self))(var275->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var275); /* native_to_s on <var275:NativeArray[String]>*/
}
varonce274 = var275;
var_call329 = var328;
if (var_ret == NULL) {
var330 = 0; /* is null */
} else {
var330 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var333 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var334 = !var333;
var331 = var334;
goto RET_LABEL332;
RET_LABEL332:(void)0;
}
var330 = var331;
}
if (var330){
if (unlikely(varonce335==NULL)) {
var336 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce337!=NULL)) {
var338 = varonce337;
} else {
var339 = "return ";
var341 = (val*)(7l<<2|1);
var342 = (val*)(7l<<2|1);
var343 = (val*)((long)(0)<<2|3);
var344 = (val*)((long)(0)<<2|3);
var340 = core__flat___CString___to_s_unsafe(var339, var341, var342, var343, var344);
var338 = var340;
varonce337 = var338;
}
((struct instance_core__NativeArray*)var336)->values[0]=var338;
} else {
var336 = varonce335;
varonce335 = NULL;
}
((struct instance_core__NativeArray*)var336)->values[1]=var_call329;
{
var345 = ((val*(*)(val* self))(var336->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var336); /* native_to_s on <var336:NativeArray[String]>*/
}
varonce335 = var336;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2251, var345); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2251:SeparateCompilerVisitor>*/
}
} else {
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2251, var_call329); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2251:SeparateCompilerVisitor>*/
}
}
if (likely(varonce346!=NULL)) {
var347 = varonce346;
} else {
var348 = "}";
var350 = (val*)(1l<<2|1);
var351 = (val*)(1l<<2|1);
var352 = (val*)((long)(0)<<2|3);
var353 = (val*)((long)(0)<<2|3);
var349 = core__flat___CString___to_s_unsafe(var348, var350, var351, var352, var353);
var347 = var349;
varonce346 = var347;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v2251, var347); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <var_v2251:SeparateCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method separate_compiler$SeparateRuntimeFunction$init for (self: SeparateRuntimeFunction) */
void nitc___nitc__SeparateRuntimeFunction___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__SeparateRuntimeFunction___core__kernel__Object__init]))(self); /* init on <self:SeparateRuntimeFunction>*/
}
RET_LABEL:;
}
/* method separate_compiler$MType$is_tagged for (self: MType): Bool */
short int nitc__separate_compiler___MType___is_tagged(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$MType$is_tagged= for (self: MType, Bool) */
void nitc__separate_compiler___MType___is_tagged_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = p0; /* _is_tagged on <self:MType> */
RET_LABEL:;
}
/* method separate_compiler$MType$tag_value for (self: MType): Int */
long nitc__separate_compiler___MType___tag_value(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l; /* _tag_value on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$MType$tag_value= for (self: MType, Int) */
void nitc__separate_compiler___MType___tag_value_61d(val* self, long p0) {
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = p0; /* _tag_value on <self:MType> */
RET_LABEL:;
}
/* method separate_compiler$MEntity$const_color for (self: MEntity): String */
val* nitc__separate_compiler___MEntity___const_color(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : String */;
val* var15 /* : String */;
var1 = self->attrs[COLOR_nitc__separate_compiler__MEntity___const_color].val != NULL; /* _const_color on <self:MEntity> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__separate_compiler__MEntity___const_color].val; /* _const_color on <self:MEntity> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _const_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2400);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "COLOR_";
var10 = (val*)(6l<<2|1);
var11 = (val*)(6l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(self); /* c_name on <self:MEntity>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var15;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__separate_compiler__MEntity___const_color].val = var3; /* _const_color on <self:MEntity> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler$AMethPropdef$can_inline for (self: AMethPropdef): Bool */
short int nitc__separate_compiler___AMethPropdef___nitc__abstract_compiler__APropdef__can_inline(val* self) {
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
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
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
{ /* Inline kernel$Object$!= (var_m,((val*)NULL)) on <var_m:nullable MMethodDef> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_m->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_m, var_other); /* == on <var_m:nullable MMethodDef(MMethodDef)>*/
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
{ /* Inline model$MPropDef$mproperty (var_m) on <var_m:nullable MMethodDef(MMethodDef)> */
var13 = var_m->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_m:nullable MMethodDef(MMethodDef)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var11) on <var11:MProperty(MMethod)> */
var16 = var11->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var11:MProperty(MMethod)> */
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
{ /* Inline model$MMethodDef$is_extern (var_m) on <var_m:nullable MMethodDef(MMethodDef)> */
var20 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:nullable MMethodDef(MMethodDef)> */
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
var21 = ((short int(*)(val* self))(self->class->vft[COLOR_nitc__separate_compiler___AMethPropdef___nitc__abstract_compiler__APropdef__can_inline]))(self); /* can_inline on <self:AMethPropdef>*/
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$AAttrPropdef$init_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void nitc__separate_compiler___AAttrPropdef___init_expr(val* self, val* p0, val* p1) {
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
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__separate_compiler___AAttrPropdef___init_expr]))(self, p0, p1); /* init_expr on <self:AAttrPropdef>*/
}
{
{ /* Inline modelize_property$AAttrPropdef$is_lazy (self) on <self:AAttrPropdef> */
var3 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var6 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var7) on <var7:ModelBuilder> */
var12 = var7->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var7:ModelBuilder> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_union_attribute (var10) on <var10:ToolContext> */
var15 = var10->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var10:ToolContext> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 28);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline opts$Option$value (var13) on <var13:OptionBool> */
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
{ /* Inline modelize_property$AAttrPropdef$mlazypropdef (self) on <self:AAttrPropdef> */
var22 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2428);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var20) on <var20:nullable MAttributeDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var25 = var20->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var20:nullable MAttributeDef> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_guard = var23;
{
var26 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 0);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_guard, var_recv, var26); /* Direct call separate_compiler$SeparateCompilerVisitor$write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
