#include "nitc__nitni_utilities.sep.0.h"
/* method nitni_utilities$MMethod$build_cname for (self: MMethod, MClassType, MModule, nullable String, SignatureLength): String */
val* nitc__nitni_utilities___MMethod___build_cname(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : String */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var_suffix /* var suffix: nullable String */;
val* var_length /* var length: SignatureLength */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : String */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
short int var27 /* : Bool */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var_cname /* var cname: nullable Object */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Bool */;
val* var70 /* : nullable Bool */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : String */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
val* var81 /* : String */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
val* var86 /* : NativeArray[String] */;
static val* varonce85;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
val* var95 /* : String */;
val* var96 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
var_suffix = p2;
var_length = p3;
{
{ /* Inline model$MMethod$is_init (self) on <self:MMethod> */
var3 = self->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline model$MProperty$name (self) on <self:MMethod> */
var7 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MMethod> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "init";
var11 = (val*)(4l<<2|1);
var12 = (val*)(4l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
{
var15 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var8); /* == on <var5:String>*/
}
var_ = var15;
if (var15){
var4 = var_;
} else {
{
{ /* Inline model$MProperty$name (self) on <self:MMethod> */
var18 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MMethod> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "new";
var23 = (val*)(3l<<2|1);
var24 = (val*)(3l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
{
var27 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_core__kernel__Object___61d_61d]))(var16, var20); /* == on <var16:String>*/
}
var4 = var27;
}
if (var4){
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "new_";
var34 = (val*)(4l<<2|1);
var35 = (val*)(4l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[0]=var31;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var38 = ((val*(*)(val* self))(var_recv_mtype->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_recv_mtype); /* mangled_cname on <var_recv_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var29)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
var_cname = var39;
} else {
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "new_";
var46 = (val*)(4l<<2|1);
var47 = (val*)(4l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[0]=var43;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "_";
var54 = (val*)(1l<<2|1);
var55 = (val*)(1l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var41)->values[2]=var51;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var58 = ((val*(*)(val* self))(var_recv_mtype->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_recv_mtype); /* mangled_cname on <var_recv_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var41)->values[1]=var58;
{
var59 = nitc__nitni_base___MMethod___short_cname(self);
}
((struct instance_core__NativeArray*)var41)->values[3]=var59;
{
var60 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
var_cname = var60;
}
} else {
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "_";
var67 = (val*)(1l<<2|1);
var68 = (val*)(1l<<2|1);
var69 = (val*)((long)(0)<<2|3);
var70 = (val*)((long)(0)<<2|3);
var66 = core__flat___CString___to_s_unsafe(var65, var67, var68, var69, var70);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[1]=var64;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
var71 = ((val*(*)(val* self))(var_recv_mtype->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_recv_mtype); /* mangled_cname on <var_recv_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var62)->values[0]=var71;
{
var72 = nitc__nitni_base___MMethod___short_cname(self);
}
((struct instance_core__NativeArray*)var62)->values[2]=var72;
{
var73 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
var_cname = var73;
}
if (var_suffix == NULL) {
var74 = 0; /* is null */
} else {
var74 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_suffix,((val*)NULL)) on <var_suffix:nullable String> */
var_other = ((val*)NULL);
{
var77 = ((short int(*)(val* self, val* p0))(var_suffix->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_suffix, var_other); /* == on <var_suffix:nullable String(String)>*/
}
var78 = !var77;
var75 = var78;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (var74){
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
} else {
var80 = varonce79;
varonce79 = NULL;
}
((struct instance_core__NativeArray*)var80)->values[0]=var_cname;
((struct instance_core__NativeArray*)var80)->values[1]=var_suffix;
{
var81 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
var_cname = var81;
} else {
}
{
{ /* Inline nitni_utilities$SignatureLength$long (var_length) on <var_length:SignatureLength> */
var84 = var_length->attrs[COLOR_nitc__nitni_utilities__SignatureLength___long].s; /* _long on <var_length:SignatureLength> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (var82){
if (unlikely(varonce85==NULL)) {
var86 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "___";
var91 = (val*)(3l<<2|1);
var92 = (val*)(3l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var86)->values[1]=var88;
} else {
var86 = varonce85;
varonce85 = NULL;
}
{
var95 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_from_mmodule);
}
((struct instance_core__NativeArray*)var86)->values[0]=var95;
((struct instance_core__NativeArray*)var86)->values[2]=var_cname;
{
var96 = ((val*(*)(val* self))(var86->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var86); /* native_to_s on <var86:NativeArray[String]>*/
}
varonce85 = var86;
var_cname = var96;
} else {
}
var = var_cname;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities$MMethod$build_csignature for (self: MMethod, MClassType, MModule, nullable String, SignatureLength, CallContext): String */
val* nitc__nitni_utilities___MMethod___build_csignature(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var /* : String */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var_suffix /* var suffix: nullable String */;
val* var_length /* var length: SignatureLength */;
val* var_call_context /* var call_context: CallContext */;
val* var1 /* : MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var2 /* : nullable MSignature */;
val* var4 /* : nullable MSignature */;
val* var_signature /* var signature: nullable MSignature */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : String */;
val* var_creturn_type /* var creturn_type: nullable Object */;
val* var14 /* : nullable MType */;
val* var16 /* : nullable MType */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable MType */;
val* var24 /* : nullable MType */;
val* var_ret_mtype /* var ret_mtype: nullable MType */;
val* var25 /* : MType */;
val* var26 /* : String */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
val* var34 /* : String */;
val* var_cname /* var cname: String */;
val* var35 /* : List[String] */;
val* var_cparams /* var cparams: List[String] */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : Array[MParameter] */;
val* var55 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var56 /* : IndexedIterator[nullable Object] */;
val* var_57 /* var : IndexedIterator[MParameter] */;
short int var58 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var60 /* : MType */;
val* var62 /* : MType */;
val* var63 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var65 /* : NativeArray[String] */;
static val* varonce64;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Bool */;
val* var88 /* : nullable Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Bool */;
val* var96 /* : nullable Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Bool */;
val* var104 /* : nullable Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
val* var113 /* : String */;
val* var114 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
var_suffix = p2;
var_length = p3;
var_call_context = p4;
{
var1 = nitc___nitc__MProperty___lookup_first_definition(self, var_from_mmodule, var_recv_mtype);
}
var_mmethoddef = var1;
{
{ /* Inline model$MMethodDef$msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var4 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_signature = var2;
if (var_signature == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_signature,((val*)NULL)) on <var_signature:nullable MSignature> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_signature->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_signature, var_other); /* == on <var_signature:nullable MSignature(MSignature)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (unlikely(!var5)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_utilities, 58);
fatal_exit(1);
}
{
{ /* Inline model$MMethod$is_init (self) on <self:MMethod> */
var12 = self->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var13 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nitc__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_recv_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
var_creturn_type = var13;
} else {
{
{ /* Inline model$MSignature$return_mtype (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var16 = var_signature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_signature:nullable MSignature(MSignature)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var14,((val*)NULL)) on <var14:nullable MType> */
var_other = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_core__kernel__Object___61d_61d]))(var14, var_other); /* == on <var14:nullable MType(MType)>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
{
{ /* Inline model$MSignature$return_mtype (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var24 = var_signature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_signature:nullable MSignature(MSignature)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ret_mtype = var22;
if (var_ret_mtype == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_utilities, 65);
fatal_exit(1);
} else {
var25 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_ret_mtype, var_recv_mtype, var_recv_mtype, var_from_mmodule, 1); /* resolve_for on <var_ret_mtype:nullable MType>*/
}
var_ret_mtype = var25;
{
var26 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nitc__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_ret_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
var_creturn_type = var26;
} else {
if (likely(varonce!=NULL)) {
var27 = varonce;
} else {
var28 = "void";
var30 = (val*)(4l<<2|1);
var31 = (val*)(4l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce = var27;
}
var_creturn_type = var27;
}
}
{
var34 = nitc__nitni_utilities___MMethod___build_cname(self, var_recv_mtype, var_from_mmodule, var_suffix, var_length);
}
var_cname = var34;
var35 = NEW_core__List(&type_core__List__core__String);
{
{ /* Inline list$List$init (var35) on <var35:List[String]> */
{
((void(*)(val* self))(var35->class->vft[COLOR_core___core__List___core__kernel__Object__init]))(var35); /* init on <var35:List[String]>*/
}
RET_LABEL36:(void)0;
}
}
var_cparams = var35;
{
{ /* Inline model$MMethod$is_init (self) on <self:MMethod> */
var39 = self->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var40 = !var37;
if (var40){
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = " self";
var47 = (val*)(5l<<2|1);
var48 = (val*)(5l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[1]=var44;
} else {
var42 = varonce41;
varonce41 = NULL;
}
{
var51 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nitc__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_recv_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
((struct instance_core__NativeArray*)var42)->values[0]=var51;
{
var52 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
core___core__Sequence___SimpleCollection__add(var_cparams, var52); /* Direct call abstract_collection$Sequence$add on <var_cparams:List[String]>*/
}
} else {
}
{
{ /* Inline model$MSignature$mparameters (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var55 = var_signature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_signature:nullable MSignature(MSignature)> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_ = var53;
{
var56 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_57 = var56;
for(;;) {
{
var58 = ((short int(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_57); /* is_ok on <var_57:IndexedIterator[MParameter]>*/
}
if (var58){
} else {
goto BREAK_label;
}
{
var59 = ((val*(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_57); /* item on <var_57:IndexedIterator[MParameter]>*/
}
var_p = var59;
{
{ /* Inline model$MParameter$mtype (var_p) on <var_p:MParameter> */
var62 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var60->class->vft[COLOR_nitc__model__MType__resolve_for]))(var60, var_recv_mtype, var_recv_mtype, var_from_mmodule, 1); /* resolve_for on <var60:MType>*/
}
var_param_mtype = var63;
if (unlikely(varonce64==NULL)) {
var65 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = " ";
var70 = (val*)(1l<<2|1);
var71 = (val*)(1l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var65)->values[1]=var67;
} else {
var65 = varonce64;
varonce64 = NULL;
}
{
var74 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nitc__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_param_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
((struct instance_core__NativeArray*)var65)->values[0]=var74;
{
{ /* Inline model$MParameter$name (var_p) on <var_p:MParameter> */
var77 = var_p->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
((struct instance_core__NativeArray*)var65)->values[2]=var75;
{
var78 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
core___core__Sequence___SimpleCollection__add(var_cparams, var78); /* Direct call abstract_collection$Sequence$add on <var_cparams:List[String]>*/
}
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_57); /* next on <var_57:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_57); /* finish on <var_57:IndexedIterator[MParameter]>*/
}
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = " ";
var85 = (val*)(1l<<2|1);
var86 = (val*)(1l<<2|1);
var87 = (val*)((long)(0)<<2|3);
var88 = (val*)((long)(0)<<2|3);
var84 = core__flat___CString___to_s_unsafe(var83, var85, var86, var87, var88);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[1]=var82;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "( ";
var93 = (val*)(2l<<2|1);
var94 = (val*)(2l<<2|1);
var95 = (val*)((long)(0)<<2|3);
var96 = (val*)((long)(0)<<2|3);
var92 = core__flat___CString___to_s_unsafe(var91, var93, var94, var95, var96);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var80)->values[3]=var90;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = " )";
var101 = (val*)(2l<<2|1);
var102 = (val*)(2l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var80)->values[5]=var98;
} else {
var80 = varonce79;
varonce79 = NULL;
}
((struct instance_core__NativeArray*)var80)->values[0]=var_creturn_type;
((struct instance_core__NativeArray*)var80)->values[2]=var_cname;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = ", ";
var109 = (val*)(2l<<2|1);
var110 = (val*)(2l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
{
var113 = core__abstract_text___Collection___join(var_cparams, var106, ((val*)NULL));
}
((struct instance_core__NativeArray*)var80)->values[4]=var113;
{
var114 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
var = var114;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities$CallContext$name_mtype for (self: CallContext, MType): String */
val* nitc___nitc__CallContext___name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : String */;
var_mtype = p0;
{
var1 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__nitni_base__MType__cname_blind]))(var_mtype); /* cname_blind on <var_mtype:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities$SignatureLength$long for (self: SignatureLength): Bool */
short int nitc___nitc__SignatureLength___long(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__nitni_utilities__SignatureLength___long].s; /* _long on <self:SignatureLength> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities$SignatureLength$long= for (self: SignatureLength, Bool) */
void nitc___nitc__SignatureLength___long_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__nitni_utilities__SignatureLength___long].s = p0; /* _long on <self:SignatureLength> */
RET_LABEL:;
}
/* method nitni_utilities$SignatureLength$init for (self: SignatureLength) */
void nitc___nitc__SignatureLength___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__SignatureLength___core__kernel__Object__init]))(self); /* init on <self:SignatureLength>*/
}
RET_LABEL:;
}
/* method nitni_utilities$Sys$internal_call_context for (self: Sys): CallContext */
val* nitc__nitni_utilities___core__Sys___internal_call_context(val* self) {
val* var /* : CallContext */;
val* var1 /* : CallContext */;
var1 = NEW_nitc__CallContext(&type_nitc__CallContext);
{
{ /* Inline kernel$Object$init (var1) on <var1:CallContext> */
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities$Sys$long_signature for (self: Sys): SignatureLength */
val* nitc__nitni_utilities___core__Sys___long_signature(val* self) {
val* var /* : SignatureLength */;
static val* varonce;
static int varonce_guard;
val* var1 /* : SignatureLength */;
val* var2 /* : SignatureLength */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__SignatureLength(&type_nitc__SignatureLength);
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__nitni_utilities__SignatureLength__long_61d]))(var2, 1); /* long= on <var2:SignatureLength>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:SignatureLength>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
