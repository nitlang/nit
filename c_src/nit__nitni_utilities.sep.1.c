#include "nit__nitni_utilities.sep.0.h"
/* method nitni_utilities#MMethod#build_cname for (self: MMethod, MClassType, MModule, nullable String, SignatureLength): String */
val* nit__nitni_utilities___MMethod___build_cname(val* self, val* p0, val* p1, val* p2, val* p3) {
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
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : String */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
short int var19 /* : Bool */;
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var_cname /* var cname: nullable Object */;
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
val* var38 /* : String */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
val* var47 /* : String */;
val* var48 /* : String */;
val* var49 /* : String */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
val* var57 /* : String */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
val* var67 /* : String */;
val* var69 /* : String */;
val* var70 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
var_suffix = p2;
var_length = p3;
{
{ /* Inline model#MMethod#is_init (self) on <self:MMethod> */
var3 = self->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline model#MProperty#name (self) on <self:MMethod> */
var7 = self->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <self:MMethod> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
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
var10 = standard___standard__NativeString___to_s_with_length(var9, 4l);
var8 = var10;
varonce = var8;
}
{
var11 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var8); /* == on <var5:String>*/
}
var_ = var11;
if (var11){
var4 = var_;
} else {
{
{ /* Inline model#MProperty#name (self) on <self:MMethod> */
var14 = self->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <self:MMethod> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "new";
var18 = standard___standard__NativeString___to_s_with_length(var17, 3l);
var16 = var18;
varonce15 = var16;
}
{
var19 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, var16); /* == on <var12:String>*/
}
var4 = var19;
}
if (var4){
if (unlikely(varonce20==NULL)) {
var21 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "new_";
var25 = standard___standard__NativeString___to_s_with_length(var24, 4l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var21)->values[0]=var23;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_recv_mtype->class->vft[COLOR_nit__nitni_base__MType__mangled_cname]))(var_recv_mtype); /* mangled_cname on <var_recv_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var21)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var21->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
var_cname = var27;
} else {
if (unlikely(varonce28==NULL)) {
var29 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "new_";
var33 = standard___standard__NativeString___to_s_with_length(var32, 4l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "_";
var37 = standard___standard__NativeString___to_s_with_length(var36, 1l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var29)->values[2]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var38 = ((val*(*)(val* self))(var_recv_mtype->class->vft[COLOR_nit__nitni_base__MType__mangled_cname]))(var_recv_mtype); /* mangled_cname on <var_recv_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var29)->values[1]=var38;
{
var39 = nit__nitni_base___MMethod___short_cname(self);
}
((struct instance_standard__NativeArray*)var29)->values[3]=var39;
{
var40 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
var_cname = var40;
}
} else {
if (unlikely(varonce41==NULL)) {
var42 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "_";
var46 = standard___standard__NativeString___to_s_with_length(var45, 1l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var42)->values[1]=var44;
} else {
var42 = varonce41;
varonce41 = NULL;
}
{
var47 = ((val*(*)(val* self))(var_recv_mtype->class->vft[COLOR_nit__nitni_base__MType__mangled_cname]))(var_recv_mtype); /* mangled_cname on <var_recv_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var42)->values[0]=var47;
{
var48 = nit__nitni_base___MMethod___short_cname(self);
}
((struct instance_standard__NativeArray*)var42)->values[2]=var48;
{
var49 = ((val*(*)(val* self))(var42->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
var_cname = var49;
}
if (var_suffix == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_suffix,((val*)NULL)) on <var_suffix:nullable String> */
var_other = ((val*)NULL);
{
var53 = ((short int(*)(val* self, val* p0))(var_suffix->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_suffix, var_other); /* == on <var_suffix:nullable String(String)>*/
}
var54 = !var53;
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
if (unlikely(varonce55==NULL)) {
var56 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
} else {
var56 = varonce55;
varonce55 = NULL;
}
((struct instance_standard__NativeArray*)var56)->values[0]=var_cname;
((struct instance_standard__NativeArray*)var56)->values[1]=var_suffix;
{
var57 = ((val*(*)(val* self))(var56->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
var_cname = var57;
} else {
}
{
{ /* Inline nitni_utilities#SignatureLength#long (var_length) on <var_length:SignatureLength> */
var60 = var_length->attrs[COLOR_nit__nitni_utilities__SignatureLength___long].s; /* _long on <var_length:SignatureLength> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58){
if (unlikely(varonce61==NULL)) {
var62 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "___";
var66 = standard___standard__NativeString___to_s_with_length(var65, 3l);
var64 = var66;
varonce63 = var64;
}
((struct instance_standard__NativeArray*)var62)->values[1]=var64;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
{ /* Inline mmodule#MModule#name (var_from_mmodule) on <var_from_mmodule:MModule> */
var69 = var_from_mmodule->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var_from_mmodule:MModule> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
((struct instance_standard__NativeArray*)var62)->values[0]=var67;
((struct instance_standard__NativeArray*)var62)->values[2]=var_cname;
{
var70 = ((val*(*)(val* self))(var62->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
var_cname = var70;
} else {
}
var = var_cname;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#MMethod#build_csignature for (self: MMethod, MClassType, MModule, nullable String, SignatureLength, CallContext): String */
val* nit__nitni_utilities___MMethod___build_csignature(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
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
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
val* var30 /* : String */;
val* var_cname /* var cname: String */;
val* var31 /* : List[String] */;
val* var_cparams /* var cparams: List[String] */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : Array[MParameter] */;
val* var47 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var48 /* : ArrayIterator[nullable Object] */;
val* var_49 /* var : ArrayIterator[MParameter] */;
short int var50 /* : Bool */;
val* var51 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var52 /* : MType */;
val* var54 /* : MType */;
val* var55 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var57 /* : NativeArray[String] */;
static val* varonce56;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var68 /* : NativeArray[String] */;
static val* varonce67;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
val* var85 /* : String */;
val* var86 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
var_suffix = p2;
var_length = p3;
var_call_context = p4;
{
var1 = nit___nit__MProperty___lookup_first_definition(self, var_from_mmodule, var_recv_mtype);
}
var_mmethoddef = var1;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var4 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
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
{ /* Inline kernel#Object#!= (var_signature,((val*)NULL)) on <var_signature:nullable MSignature> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_signature->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_signature, var_other); /* == on <var_signature:nullable MSignature(MSignature)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__nitni_utilities, 58);
fatal_exit(1);
}
{
{ /* Inline model#MMethod#is_init (self) on <self:MMethod> */
var12 = self->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var13 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nit__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_recv_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
var_creturn_type = var13;
} else {
{
{ /* Inline model#MSignature#return_mtype (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var16 = var_signature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_signature:nullable MSignature(MSignature)> */
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
{ /* Inline kernel#Object#!= (var14,((val*)NULL)) on <var14:nullable MType> */
var_other = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var14, var_other); /* == on <var14:nullable MType(MType)>*/
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
{ /* Inline model#MSignature#return_mtype (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var24 = var_signature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_signature:nullable MSignature(MSignature)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ret_mtype = var22;
if (var_ret_mtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__nitni_utilities, 65);
fatal_exit(1);
} else {
var25 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_ret_mtype, var_recv_mtype, var_recv_mtype, var_from_mmodule, 1); /* resolve_for on <var_ret_mtype:nullable MType>*/
}
var_ret_mtype = var25;
{
var26 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nit__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_ret_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
var_creturn_type = var26;
} else {
if (likely(varonce!=NULL)) {
var27 = varonce;
} else {
var28 = "void";
var29 = standard___standard__NativeString___to_s_with_length(var28, 4l);
var27 = var29;
varonce = var27;
}
var_creturn_type = var27;
}
}
{
var30 = nit__nitni_utilities___MMethod___build_cname(self, var_recv_mtype, var_from_mmodule, var_suffix, var_length);
}
var_cname = var30;
var31 = NEW_standard__List(&type_standard__List__standard__String);
{
{ /* Inline list#List#init (var31) on <var31:List[String]> */
RET_LABEL32:(void)0;
}
}
var_cparams = var31;
{
{ /* Inline model#MMethod#is_init (self) on <self:MMethod> */
var35 = self->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = !var33;
if (var36){
if (unlikely(varonce37==NULL)) {
var38 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " self";
var42 = standard___standard__NativeString___to_s_with_length(var41, 5l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var38)->values[1]=var40;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
var43 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nit__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_recv_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
((struct instance_standard__NativeArray*)var38)->values[0]=var43;
{
var44 = ((val*(*)(val* self))(var38->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
standard___standard__Sequence___SimpleCollection__add(var_cparams, var44); /* Direct call abstract_collection#Sequence#add on <var_cparams:List[String]>*/
}
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var47 = var_signature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_signature:nullable MSignature(MSignature)> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_ = var45;
{
var48 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_49 = var48;
for(;;) {
{
var50 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_49);
}
if (var50){
{
var51 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_49);
}
var_p = var51;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var54 = var_p->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var52->class->vft[COLOR_nit__model__MType__resolve_for]))(var52, var_recv_mtype, var_recv_mtype, var_from_mmodule, 1); /* resolve_for on <var52:MType>*/
}
var_param_mtype = var55;
if (unlikely(varonce56==NULL)) {
var57 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = " ";
var61 = standard___standard__NativeString___to_s_with_length(var60, 1l);
var59 = var61;
varonce58 = var59;
}
((struct instance_standard__NativeArray*)var57)->values[1]=var59;
} else {
var57 = varonce56;
varonce56 = NULL;
}
{
var62 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nit__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_param_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
((struct instance_standard__NativeArray*)var57)->values[0]=var62;
{
{ /* Inline model#MParameter#name (var_p) on <var_p:MParameter> */
var65 = var_p->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1876);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
((struct instance_standard__NativeArray*)var57)->values[2]=var63;
{
var66 = ((val*(*)(val* self))(var57->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce56 = var57;
{
standard___standard__Sequence___SimpleCollection__add(var_cparams, var66); /* Direct call abstract_collection#Sequence#add on <var_cparams:List[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_49); /* Direct call array#ArrayIterator#next on <var_49:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_49); /* Direct call array#ArrayIterator#finish on <var_49:ArrayIterator[MParameter]>*/
}
if (unlikely(varonce67==NULL)) {
var68 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = " ";
var72 = standard___standard__NativeString___to_s_with_length(var71, 1l);
var70 = var72;
varonce69 = var70;
}
((struct instance_standard__NativeArray*)var68)->values[1]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "( ";
var76 = standard___standard__NativeString___to_s_with_length(var75, 2l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var68)->values[3]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = " )";
var80 = standard___standard__NativeString___to_s_with_length(var79, 2l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var68)->values[5]=var78;
} else {
var68 = varonce67;
varonce67 = NULL;
}
((struct instance_standard__NativeArray*)var68)->values[0]=var_creturn_type;
((struct instance_standard__NativeArray*)var68)->values[2]=var_cname;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = ", ";
var84 = standard___standard__NativeString___to_s_with_length(var83, 2l);
var82 = var84;
varonce81 = var82;
}
{
var85 = standard__string___Collection___join(var_cparams, var82);
}
((struct instance_standard__NativeArray*)var68)->values[4]=var85;
{
var86 = ((val*(*)(val* self))(var68->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce67 = var68;
var = var86;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#CallContext#name_mtype for (self: CallContext, MType): String */
val* nit___nit__CallContext___name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : String */;
var_mtype = p0;
{
var1 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__nitni_base__MType__cname_blind]))(var_mtype); /* cname_blind on <var_mtype:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#Object#internal_call_context for (self: Object): CallContext */
val* nit__nitni_utilities___standard__Object___internal_call_context(val* self) {
val* var /* : CallContext */;
val* var1 /* : CallContext */;
var1 = NEW_nit__CallContext(&type_nit__CallContext);
{
{ /* Inline kernel#Object#init (var1) on <var1:CallContext> */
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#Object#long_signature for (self: Object): SignatureLength */
val* nit__nitni_utilities___standard__Object___long_signature(val* self) {
val* var /* : SignatureLength */;
static val* varonce;
static int varonce_guard;
val* var1 /* : SignatureLength */;
val* var2 /* : SignatureLength */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nit__SignatureLength(&type_nit__SignatureLength);
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nit__nitni_utilities__SignatureLength__long_61d]))(var2, 1); /* long= on <var2:SignatureLength>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:SignatureLength>*/
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
/* method nitni_utilities#SignatureLength#long for (self: SignatureLength): Bool */
short int nit___nit__SignatureLength___long(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__nitni_utilities__SignatureLength___long].s; /* _long on <self:SignatureLength> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#SignatureLength#long= for (self: SignatureLength, Bool) */
void nit___nit__SignatureLength___long_61d(val* self, short int p0) {
self->attrs[COLOR_nit__nitni_utilities__SignatureLength___long].s = p0; /* _long on <self:SignatureLength> */
RET_LABEL:;
}
/* method nitni_utilities#SignatureLength#init for (self: SignatureLength) */
void nit___nit__SignatureLength___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__SignatureLength___standard__kernel__Object__init]))(self); /* init on <self:SignatureLength>*/
}
RET_LABEL:;
}
