#include "nitni_utilities.sep.0.h"
/* method nitni_utilities#MMethod#build_cname for (self: MMethod, MClassType, MModule, nullable String, SignatureLength, CallContext): String */
val* nitni_utilities__MMethod__build_cname(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var /* : String */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var_suffix /* var suffix: nullable String */;
val* var_length /* var length: SignatureLength */;
val* var_call_context /* var call_context: CallContext */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
short int var8 /* : Bool */;
val* var9 /* : String */;
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
val* var21 /* : String */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
val* var_cname /* var cname: nullable Object */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : String */;
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : String */;
val* var53 /* : null */;
short int var54 /* : Bool */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var_ /* var : Array[Object] */;
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
val* var72 /* : String */;
short int var73 /* : Bool */;
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
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
val* var93 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
var_suffix = p2;
var_length = p3;
var_call_context = p4;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_model__MMethod__is_init]))(self) /* is_init on <self:MMethod>*/;
if (var1){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__name]))(self) /* name on <self:MMethod>*/;
if (varonce) {
var4 = varonce;
} else {
var5 = "init";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___61d_61d]))(var3, var4) /* == on <var3:String>*/;
if (var8) {
var2 = 1;
} else {
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__name]))(self) /* name on <self:MMethod>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "new";
var13 = 3;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_kernel__Object___61d_61d]))(var9, var11) /* == on <var9:String>*/;
var2 = var15;
}
if (var2){
if (varonce16) {
var17 = varonce16;
} else {
var18 = "new_";
var19 = 4;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = ((val* (*)(val*))(var_recv_mtype->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_recv_mtype) /* mangled_cname on <var_recv_mtype:MClassType>*/;
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 2;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var21;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
CHECK_NEW_array__Array(var22);
}
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
var_cname = var25;
} else {
if (varonce26) {
var27 = varonce26;
} else {
var28 = "new_";
var29 = 4;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = ((val* (*)(val*))(var_recv_mtype->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_recv_mtype) /* mangled_cname on <var_recv_mtype:MClassType>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "_";
var35 = 1;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MMethod__short_cname]))(self) /* short_cname on <self:MMethod>*/;
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 4;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var31;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var33;
((struct instance_array__NativeArray*)var40)->values[3] = (val*) var37;
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
CHECK_NEW_array__Array(var38);
}
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
var_cname = var41;
}
} else {
var42 = ((val* (*)(val*))(var_recv_mtype->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var_recv_mtype) /* mangled_cname on <var_recv_mtype:MClassType>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = "_";
var46 = 1;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_base__MMethod__short_cname]))(self) /* short_cname on <self:MMethod>*/;
var49 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 3;
var51 = NEW_array__NativeArray(var50, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var51)->values[0] = (val*) var42;
((struct instance_array__NativeArray*)var51)->values[1] = (val*) var44;
((struct instance_array__NativeArray*)var51)->values[2] = (val*) var48;
((void (*)(val*, val*, long))(var49->class->vft[COLOR_array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
CHECK_NEW_array__Array(var49);
}
var52 = ((val* (*)(val*))(var49->class->vft[COLOR_string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
var_cname = var52;
}
var53 = NULL;
if (var_suffix == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (var54){
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
var56 = 5;
((void (*)(val*, long))(var55->class->vft[COLOR_array__Array__with_capacity]))(var55, var56) /* with_capacity on <var55:Array[Object]>*/;
CHECK_NEW_array__Array(var55);
var_ = var55;
if (varonce57) {
var58 = varonce57;
} else {
var59 = "";
var60 = 0;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var58) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_cname) /* add on <var_:Array[Object]>*/;
if (varonce62) {
var63 = varonce62;
} else {
var64 = "";
var65 = 0;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var63) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_suffix) /* add on <var_:Array[Object]>*/;
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
var72 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_cname = var72;
} else {
}
var73 = ((short int (*)(val*))(var_length->class->vft[COLOR_nitni_utilities__SignatureLength__long]))(var_length) /* long on <var_length:SignatureLength>*/;
if (var73){
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
var75 = 5;
((void (*)(val*, long))(var74->class->vft[COLOR_array__Array__with_capacity]))(var74, var75) /* with_capacity on <var74:Array[Object]>*/;
CHECK_NEW_array__Array(var74);
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
var82 = ((val* (*)(val*))(var_from_mmodule->class->vft[COLOR_model_base__MModule__name]))(var_from_mmodule) /* name on <var_from_mmodule:MModule>*/;
((void (*)(val*, val*))(var_76->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_76, var82) /* add on <var_76:Array[Object]>*/;
if (varonce83) {
var84 = varonce83;
} else {
var85 = "___";
var86 = 3;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
((void (*)(val*, val*))(var_76->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_76, var84) /* add on <var_76:Array[Object]>*/;
((void (*)(val*, val*))(var_76->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_76, var_cname) /* add on <var_76:Array[Object]>*/;
if (varonce88) {
var89 = varonce88;
} else {
var90 = "";
var91 = 0;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
((void (*)(val*, val*))(var_76->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_76, var89) /* add on <var_76:Array[Object]>*/;
var93 = ((val* (*)(val*))(var_76->class->vft[COLOR_string__Object__to_s]))(var_76) /* to_s on <var_76:Array[Object]>*/;
var_cname = var93;
} else {
}
var = var_cname;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#MMethod#build_cname for (self: Object, MClassType, MModule, nullable String, SignatureLength, CallContext): String */
val* VIRTUAL_nitni_utilities__MMethod__build_cname(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_utilities__MMethod__build_cname(self, p0, p1, p2, p3, p4);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#MMethod#build_csignature for (self: MMethod, MClassType, MModule, nullable String, SignatureLength, CallContext): String */
val* nitni_utilities__MMethod__build_csignature(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var /* : String */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var_suffix /* var suffix: nullable String */;
val* var_length /* var length: SignatureLength */;
val* var_call_context /* var call_context: CallContext */;
val* var1 /* : MPropDef */;
val* var2 /* : nullable MSignature */;
val* var_signature /* var signature: nullable MSignature */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : String */;
val* var_creturn_type /* var creturn_type: nullable Object */;
val* var7 /* : nullable MType */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
val* var_ret_mtype /* var ret_mtype: nullable MType */;
short int var11 /* : Bool */;
val* var12 /* : MType */;
val* var13 /* : String */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_cname /* var cname: String */;
val* var19 /* : List[String] */;
val* var_cparams /* var cparams: List[String] */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
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
val* var32 /* : Array[MParameter] */;
val* var33 /* : Iterator[nullable Object] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var36 /* : MType */;
short int var37 /* : Bool */;
val* var38 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var_ /* var : Array[Object] */;
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
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
var_suffix = p2;
var_length = p3;
var_call_context = p4;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__intro]))(self) /* intro on <self:MMethod>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MMethodDef__msignature]))(var1) /* msignature on <var1:MPropDef(MMethodDef)>*/;
var_signature = var2;
var3 = NULL;
if (var_signature == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_utilities.nit", 46);
exit(1);
}
var5 = ((short int (*)(val*))(self->class->vft[COLOR_model__MMethod__is_init]))(self) /* is_init on <self:MMethod>*/;
if (var5){
var6 = ((val* (*)(val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__name_mtype]))(var_call_context, var_recv_mtype) /* name_mtype on <var_call_context:CallContext>*/;
var_creturn_type = var6;
} else {
var7 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__return_mtype]))(var_signature) /* return_mtype on <var_signature:nullable MSignature(MSignature)>*/;
var8 = NULL;
if (var7 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
var10 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__return_mtype]))(var_signature) /* return_mtype on <var_signature:nullable MSignature(MSignature)>*/;
var_ret_mtype = var10;
var11 = 1;
if (var_ret_mtype == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_utilities.nit", 53);
exit(1);
} else {
var12 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_ret_mtype, var_recv_mtype, var_recv_mtype, var_from_mmodule, var11) /* resolve_for on <var_ret_mtype:nullable MType>*/;
}
var_ret_mtype = var12;
var13 = ((val* (*)(val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__name_mtype]))(var_call_context, var_ret_mtype) /* name_mtype on <var_call_context:CallContext>*/;
var_creturn_type = var13;
} else {
if (varonce) {
var14 = varonce;
} else {
var15 = "void";
var16 = 4;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
var_creturn_type = var14;
}
}
var18 = ((val* (*)(val*, val*, val*, val*, val*, val*))(self->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(self, var_recv_mtype, var_from_mmodule, var_suffix, var_length, var_call_context) /* build_cname on <self:MMethod>*/;
var_cname = var18;
var19 = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var19->class->vft[COLOR_list__List__init]))(var19) /* init on <var19:List[String]>*/;
CHECK_NEW_list__List(var19);
var_cparams = var19;
var20 = ((short int (*)(val*))(self->class->vft[COLOR_model__MMethod__is_init]))(self) /* is_init on <self:MMethod>*/;
var21 = !var20;
if (var21){
var22 = ((val* (*)(val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__name_mtype]))(var_call_context, var_recv_mtype) /* name_mtype on <var_call_context:CallContext>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = " recv";
var26 = 5;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 2;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var24;
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
CHECK_NEW_array__Array(var28);
}
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var31) /* add on <var_cparams:List[String]>*/;
} else {
}
var32 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__mparameters]))(var_signature) /* mparameters on <var_signature:nullable MSignature(MSignature)>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Collection__iterator]))(var32) /* iterator on <var32:Array[MParameter]>*/;
for(;;) {
var34 = ((short int (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var33) /* is_ok on <var33:Iterator[nullable Object]>*/;
if(!var34) break;
var35 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__item]))(var33) /* item on <var33:Iterator[nullable Object]>*/;
var_p = var35;
var36 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var37 = 1;
var38 = ((val* (*)(val*, val*, val*, val*, short int))(var36->class->vft[COLOR_model__MType__resolve_for]))(var36, var_recv_mtype, var_recv_mtype, var_from_mmodule, var37) /* resolve_for on <var36:MType>*/;
var_param_mtype = var38;
var39 = ((val* (*)(val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__name_mtype]))(var_call_context, var_param_mtype) /* name_mtype on <var_call_context:CallContext>*/;
if (varonce40) {
var41 = varonce40;
} else {
var42 = " ";
var43 = 1;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var39;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var41;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var45;
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
CHECK_NEW_array__Array(var46);
}
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var49) /* add on <var_cparams:List[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__next]))(var33) /* next on <var33:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
var51 = 7;
((void (*)(val*, long))(var50->class->vft[COLOR_array__Array__with_capacity]))(var50, var51) /* with_capacity on <var50:Array[Object]>*/;
CHECK_NEW_array__Array(var50);
var_ = var50;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "";
var55 = 0;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var53) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_creturn_type) /* add on <var_:Array[Object]>*/;
if (varonce57) {
var58 = varonce57;
} else {
var59 = " ";
var60 = 1;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var58) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_cname) /* add on <var_:Array[Object]>*/;
if (varonce62) {
var63 = varonce62;
} else {
var64 = "( ";
var65 = 2;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var63) /* add on <var_:Array[Object]>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = ", ";
var70 = 2;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((val* (*)(val*, val*))(var_cparams->class->vft[COLOR_string__Collection__join]))(var_cparams, var68) /* join on <var_cparams:List[String]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var72) /* add on <var_:Array[Object]>*/;
if (varonce73) {
var74 = varonce73;
} else {
var75 = " )";
var76 = 2;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var74) /* add on <var_:Array[Object]>*/;
var78 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var78;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#MMethod#build_csignature for (self: Object, MClassType, MModule, nullable String, SignatureLength, CallContext): String */
val* VIRTUAL_nitni_utilities__MMethod__build_csignature(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_utilities__MMethod__build_csignature(self, p0, p1, p2, p3, p4);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#MMethod#build_ccall for (self: MMethod, MClassType, MModule, nullable String, SignatureLength, CallContext, nullable String): String */
val* nitni_utilities__MMethod__build_ccall(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var /* : String */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var_suffix /* var suffix: nullable String */;
val* var_length /* var length: SignatureLength */;
val* var_call_context /* var call_context: CallContext */;
val* var_param_suffix /* var param_suffix: nullable String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
var_suffix = p2;
var_length = p3;
var_call_context = p4;
var_param_suffix = p5;
var1 = 1;
var2 = ((val* (*)(val*, val*, val*, val*, val*, val*, val*, short int))(self->class->vft[COLOR_nitni_utilities__MMethod__build_ccall_intern]))(self, var_recv_mtype, var_from_mmodule, var_suffix, var_length, var_call_context, var_param_suffix, var1) /* build_ccall_intern on <self:MMethod>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#MMethod#build_ccall for (self: Object, MClassType, MModule, nullable String, SignatureLength, CallContext, nullable String): String */
val* VIRTUAL_nitni_utilities__MMethod__build_ccall(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_utilities__MMethod__build_ccall(self, p0, p1, p2, p3, p4, p5);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#MMethod#build_ccall_from_c for (self: MMethod, MClassType, MModule, nullable String, SignatureLength, CallContext, nullable String): String */
val* nitni_utilities__MMethod__build_ccall_from_c(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var /* : String */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var_suffix /* var suffix: nullable String */;
val* var_length /* var length: SignatureLength */;
val* var_call_context /* var call_context: CallContext */;
val* var_param_suffix /* var param_suffix: nullable String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
var_suffix = p2;
var_length = p3;
var_call_context = p4;
var_param_suffix = p5;
var1 = 0;
var2 = ((val* (*)(val*, val*, val*, val*, val*, val*, val*, short int))(self->class->vft[COLOR_nitni_utilities__MMethod__build_ccall_intern]))(self, var_recv_mtype, var_from_mmodule, var_suffix, var_length, var_call_context, var_param_suffix, var1) /* build_ccall_intern on <self:MMethod>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#MMethod#build_ccall_from_c for (self: Object, MClassType, MModule, nullable String, SignatureLength, CallContext, nullable String): String */
val* VIRTUAL_nitni_utilities__MMethod__build_ccall_from_c(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_utilities__MMethod__build_ccall_from_c(self, p0, p1, p2, p3, p4, p5);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#MMethod#build_ccall_intern for (self: MMethod, MClassType, MModule, nullable String, SignatureLength, CallContext, nullable String, Bool): String */
val* nitni_utilities__MMethod__build_ccall_intern(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, short int p6) {
val* var /* : String */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var_suffix /* var suffix: nullable String */;
val* var_length /* var length: SignatureLength */;
val* var_call_context /* var call_context: CallContext */;
val* var_param_suffix /* var param_suffix: nullable String */;
short int var_to_c /* var to_c: Bool */;
val* var1 /* : null */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MPropDef */;
val* var8 /* : nullable MSignature */;
val* var_signature /* var signature: nullable MSignature */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : null */;
val* var_return_mtype /* var return_mtype: nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : nullable MType */;
val* var14 /* : null */;
short int var15 /* : Bool */;
val* var16 /* : nullable MType */;
val* var17 /* : String */;
val* var_cname /* var cname: String */;
val* var18 /* : List[String] */;
val* var_cparams /* var cparams: List[String] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
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
val* var40 /* : String */;
val* var41 /* : Array[MParameter] */;
val* var42 /* : Iterator[nullable Object] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var45 /* : MType */;
val* var46 /* : String */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : MType */;
val* var53 /* : String */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : null */;
short int var60 /* : Bool */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var_ /* var : Array[Object] */;
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
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
val* var84 /* : Array[Object] */;
long var85 /* : Int */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : String */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : Array[Object] */;
long var96 /* : Int */;
val* var_97 /* var : Array[Object] */;
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
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : String */;
val* var129 /* : String */;
val* var130 /* : Array[Object] */;
long var131 /* : Int */;
val* var_132 /* var : Array[Object] */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
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
val* var154 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
var_suffix = p2;
var_length = p3;
var_call_context = p4;
var_param_suffix = p5;
var_to_c = p6;
var1 = NULL;
if (var_param_suffix == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var_param_suffix = var3;
} else {
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__intro]))(self) /* intro on <self:MMethod>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MMethodDef__msignature]))(var7) /* msignature on <var7:MPropDef(MMethodDef)>*/;
var_signature = var8;
var9 = NULL;
if (var_signature == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_utilities.nit", 91);
exit(1);
}
var11 = NULL;
var_return_mtype = var11;
var12 = ((short int (*)(val*))(self->class->vft[COLOR_model__MMethod__is_init]))(self) /* is_init on <self:MMethod>*/;
if (var12){
var_return_mtype = var_recv_mtype;
} else {
var13 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__return_mtype]))(var_signature) /* return_mtype on <var_signature:nullable MSignature(MSignature)>*/;
var14 = NULL;
if (var13 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
var16 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__return_mtype]))(var_signature) /* return_mtype on <var_signature:nullable MSignature(MSignature)>*/;
var_return_mtype = var16;
} else {
}
}
var17 = ((val* (*)(val*, val*, val*, val*, val*, val*))(self->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(self, var_recv_mtype, var_from_mmodule, var_suffix, var_length, var_call_context) /* build_cname on <self:MMethod>*/;
var_cname = var17;
var18 = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var18->class->vft[COLOR_list__List__init]))(var18) /* init on <var18:List[String]>*/;
CHECK_NEW_list__List(var18);
var_cparams = var18;
var19 = ((short int (*)(val*))(self->class->vft[COLOR_model__MMethod__is_init]))(self) /* is_init on <self:MMethod>*/;
var20 = !var19;
if (var20){
if (var_to_c){
if (varonce21) {
var22 = varonce21;
} else {
var23 = "recv";
var24 = 4;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 2;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var_param_suffix;
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
CHECK_NEW_array__Array(var26);
}
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
var30 = ((val* (*)(val*, val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__cast_to]))(var_call_context, var_recv_mtype, var29) /* cast_to on <var_call_context:CallContext>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var30) /* add on <var_cparams:List[String]>*/;
} else {
if (varonce31) {
var32 = varonce31;
} else {
var33 = "recv";
var34 = 4;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 2;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var32;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var_param_suffix;
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
CHECK_NEW_array__Array(var36);
}
var39 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
var40 = ((val* (*)(val*, val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__cast_from]))(var_call_context, var_recv_mtype, var39) /* cast_from on <var_call_context:CallContext>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var40) /* add on <var_cparams:List[String]>*/;
}
} else {
}
var41 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__mparameters]))(var_signature) /* mparameters on <var_signature:nullable MSignature(MSignature)>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_abstract_collection__Collection__iterator]))(var41) /* iterator on <var41:Array[MParameter]>*/;
for(;;) {
var43 = ((short int (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var42) /* is_ok on <var42:Iterator[nullable Object]>*/;
if(!var43) break;
var44 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__item]))(var42) /* item on <var42:Iterator[nullable Object]>*/;
var_p = var44;
if (var_to_c){
var45 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var46 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 2;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var46;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var_param_suffix;
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
CHECK_NEW_array__Array(var47);
}
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
var51 = ((val* (*)(val*, val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__cast_to]))(var_call_context, var45, var50) /* cast_to on <var_call_context:CallContext>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var51) /* add on <var_cparams:List[String]>*/;
} else {
var52 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var53 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 2;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var_param_suffix;
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
CHECK_NEW_array__Array(var54);
}
var57 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
var58 = ((val* (*)(val*, val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__cast_from]))(var_call_context, var52, var57) /* cast_from on <var_call_context:CallContext>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var58) /* add on <var_cparams:List[String]>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__next]))(var42) /* next on <var42:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var59 = NULL;
if (var_return_mtype == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (var60){
if (var_to_c){
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
var62 = 3;
((void (*)(val*, long))(var61->class->vft[COLOR_array__Array__with_capacity]))(var61, var62) /* with_capacity on <var61:Array[Object]>*/;
CHECK_NEW_array__Array(var61);
var_ = var61;
if (varonce63) {
var64 = varonce63;
} else {
var65 = "return ";
var66 = 7;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var64) /* add on <var_:Array[Object]>*/;
if (varonce68) {
var69 = varonce68;
} else {
var70 = "( ";
var71 = 2;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = ", ";
var76 = 2;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = ((val* (*)(val*, val*))(var_cparams->class->vft[COLOR_string__Collection__join]))(var_cparams, var74) /* join on <var_cparams:List[String]>*/;
if (varonce79) {
var80 = varonce79;
} else {
var81 = " )";
var82 = 2;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 4;
var86 = NEW_array__NativeArray(var85, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var86)->values[0] = (val*) var_cname;
((struct instance_array__NativeArray*)var86)->values[1] = (val*) var69;
((struct instance_array__NativeArray*)var86)->values[2] = (val*) var78;
((struct instance_array__NativeArray*)var86)->values[3] = (val*) var80;
((void (*)(val*, val*, long))(var84->class->vft[COLOR_array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
CHECK_NEW_array__Array(var84);
}
var87 = ((val* (*)(val*))(var84->class->vft[COLOR_string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
var88 = ((val* (*)(val*, val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__cast_from]))(var_call_context, var_return_mtype, var87) /* cast_from on <var_call_context:CallContext>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var88) /* add on <var_:Array[Object]>*/;
if (varonce89) {
var90 = varonce89;
} else {
var91 = ";";
var92 = 1;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var90) /* add on <var_:Array[Object]>*/;
var94 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var94;
goto RET_LABEL;
} else {
var95 = NEW_array__Array(&type_array__Arraykernel__Object);
var96 = 3;
((void (*)(val*, long))(var95->class->vft[COLOR_array__Array__with_capacity]))(var95, var96) /* with_capacity on <var95:Array[Object]>*/;
CHECK_NEW_array__Array(var95);
var_97 = var95;
if (varonce98) {
var99 = varonce98;
} else {
var100 = "return ";
var101 = 7;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
((void (*)(val*, val*))(var_97->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_97, var99) /* add on <var_97:Array[Object]>*/;
if (varonce103) {
var104 = varonce103;
} else {
var105 = "( ";
var106 = 2;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = ", ";
var111 = 2;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
var113 = ((val* (*)(val*, val*))(var_cparams->class->vft[COLOR_string__Collection__join]))(var_cparams, var109) /* join on <var_cparams:List[String]>*/;
if (varonce114) {
var115 = varonce114;
} else {
var116 = " )";
var117 = 2;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var119 = array_instance Array[Object] */
var120 = 4;
var121 = NEW_array__NativeArray(var120, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var121)->values[0] = (val*) var_cname;
((struct instance_array__NativeArray*)var121)->values[1] = (val*) var104;
((struct instance_array__NativeArray*)var121)->values[2] = (val*) var113;
((struct instance_array__NativeArray*)var121)->values[3] = (val*) var115;
((void (*)(val*, val*, long))(var119->class->vft[COLOR_array__Array__with_native]))(var119, var121, var120) /* with_native on <var119:Array[Object]>*/;
CHECK_NEW_array__Array(var119);
}
var122 = ((val* (*)(val*))(var119->class->vft[COLOR_string__Object__to_s]))(var119) /* to_s on <var119:Array[Object]>*/;
var123 = ((val* (*)(val*, val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__cast_to]))(var_call_context, var_return_mtype, var122) /* cast_to on <var_call_context:CallContext>*/;
((void (*)(val*, val*))(var_97->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_97, var123) /* add on <var_97:Array[Object]>*/;
if (varonce124) {
var125 = varonce124;
} else {
var126 = ";";
var127 = 1;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
((void (*)(val*, val*))(var_97->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_97, var125) /* add on <var_97:Array[Object]>*/;
var129 = ((val* (*)(val*))(var_97->class->vft[COLOR_string__Object__to_s]))(var_97) /* to_s on <var_97:Array[Object]>*/;
var = var129;
goto RET_LABEL;
}
} else {
var130 = NEW_array__Array(&type_array__Arraykernel__Object);
var131 = 5;
((void (*)(val*, long))(var130->class->vft[COLOR_array__Array__with_capacity]))(var130, var131) /* with_capacity on <var130:Array[Object]>*/;
CHECK_NEW_array__Array(var130);
var_132 = var130;
if (varonce133) {
var134 = varonce133;
} else {
var135 = "";
var136 = 0;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
((void (*)(val*, val*))(var_132->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_132, var134) /* add on <var_132:Array[Object]>*/;
((void (*)(val*, val*))(var_132->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_132, var_cname) /* add on <var_132:Array[Object]>*/;
if (varonce138) {
var139 = varonce138;
} else {
var140 = "( ";
var141 = 2;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
((void (*)(val*, val*))(var_132->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_132, var139) /* add on <var_132:Array[Object]>*/;
if (varonce143) {
var144 = varonce143;
} else {
var145 = ", ";
var146 = 2;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = ((val* (*)(val*, val*))(var_cparams->class->vft[COLOR_string__Collection__join]))(var_cparams, var144) /* join on <var_cparams:List[String]>*/;
((void (*)(val*, val*))(var_132->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_132, var148) /* add on <var_132:Array[Object]>*/;
if (varonce149) {
var150 = varonce149;
} else {
var151 = " );";
var152 = 3;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
((void (*)(val*, val*))(var_132->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_132, var150) /* add on <var_132:Array[Object]>*/;
var154 = ((val* (*)(val*))(var_132->class->vft[COLOR_string__Object__to_s]))(var_132) /* to_s on <var_132:Array[Object]>*/;
var = var154;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method nitni_utilities#MMethod#build_ccall_intern for (self: Object, MClassType, MModule, nullable String, SignatureLength, CallContext, nullable String, Bool): String */
val* VIRTUAL_nitni_utilities__MMethod__build_ccall_intern(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, short int p6) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_utilities__MMethod__build_ccall_intern(self, p0, p1, p2, p3, p4, p5, p6);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#CallContext#name_mtype for (self: CallContext, MType): String */
val* nitni_utilities__CallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : String */;
var_mtype = p0;
var1 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_mtype) /* cname_blind on <var_mtype:MType>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#CallContext#name_mtype for (self: Object, MType): String */
val* VIRTUAL_nitni_utilities__CallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_utilities__CallContext__name_mtype(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#CallContext#cast_from for (self: CallContext, MType, String): String */
val* nitni_utilities__CallContext__cast_from(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
var_mtype = p0;
var_name = p1;
var = var_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#CallContext#cast_from for (self: Object, MType, String): String */
val* VIRTUAL_nitni_utilities__CallContext__cast_from(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_utilities__CallContext__cast_from(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#CallContext#cast_to for (self: CallContext, MType, String): String */
val* nitni_utilities__CallContext__cast_to(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
var_mtype = p0;
var_name = p1;
var = var_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#CallContext#cast_to for (self: Object, MType, String): String */
val* VIRTUAL_nitni_utilities__CallContext__cast_to(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_utilities__CallContext__cast_to(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#CallContext#init for (self: CallContext) */
void nitni_utilities__CallContext__init(val* self) {
RET_LABEL:;
}
/* method nitni_utilities#CallContext#init for (self: Object) */
void VIRTUAL_nitni_utilities__CallContext__init(val* self) {
nitni_utilities__CallContext__init(self);
RET_LABEL:;
}
/* method nitni_utilities#Object#internal_call_context for (self: Object): CallContext */
val* nitni_utilities__Object__internal_call_context(val* self) {
val* var /* : CallContext */;
val* var1 /* : CallContext */;
var1 = NEW_nitni_utilities__CallContext(&type_nitni_utilities__CallContext);
((void (*)(val*))(var1->class->vft[COLOR_nitni_utilities__CallContext__init]))(var1) /* init on <var1:CallContext>*/;
CHECK_NEW_nitni_utilities__CallContext(var1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#Object#internal_call_context for (self: Object): CallContext */
val* VIRTUAL_nitni_utilities__Object__internal_call_context(val* self) {
val* var /* : CallContext */;
val* var1 /* : CallContext */;
var1 = nitni_utilities__Object__internal_call_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#Object#long_signature for (self: Object): SignatureLength */
val* nitni_utilities__Object__long_signature(val* self) {
val* var /* : SignatureLength */;
static val* varonce;
static int varonce_guard;
val* var1 /* : SignatureLength */;
val* var2 /* : SignatureLength */;
short int var3 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_nitni_utilities__SignatureLength(&type_nitni_utilities__SignatureLength);
var3 = 1;
((void (*)(val*, short int))(var2->class->vft[COLOR_nitni_utilities__SignatureLength__init]))(var2, var3) /* init on <var2:SignatureLength>*/;
CHECK_NEW_nitni_utilities__SignatureLength(var2);
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#Object#long_signature for (self: Object): SignatureLength */
val* VIRTUAL_nitni_utilities__Object__long_signature(val* self) {
val* var /* : SignatureLength */;
val* var1 /* : SignatureLength */;
var1 = nitni_utilities__Object__long_signature(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#Object#short_signature for (self: Object): SignatureLength */
val* nitni_utilities__Object__short_signature(val* self) {
val* var /* : SignatureLength */;
static val* varonce;
static int varonce_guard;
val* var1 /* : SignatureLength */;
val* var2 /* : SignatureLength */;
short int var3 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_nitni_utilities__SignatureLength(&type_nitni_utilities__SignatureLength);
var3 = 0;
((void (*)(val*, short int))(var2->class->vft[COLOR_nitni_utilities__SignatureLength__init]))(var2, var3) /* init on <var2:SignatureLength>*/;
CHECK_NEW_nitni_utilities__SignatureLength(var2);
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_utilities#Object#short_signature for (self: Object): SignatureLength */
val* VIRTUAL_nitni_utilities__Object__short_signature(val* self) {
val* var /* : SignatureLength */;
val* var1 /* : SignatureLength */;
var1 = nitni_utilities__Object__short_signature(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#SignatureLength#long for (self: SignatureLength): Bool */
short int nitni_utilities__SignatureLength__long(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitni_utilities__SignatureLength___64dlong].s; /* @long on <self:SignatureLength> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#SignatureLength#long for (self: Object): Bool */
short int VIRTUAL_nitni_utilities__SignatureLength__long(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = nitni_utilities__SignatureLength__long(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_utilities#SignatureLength#long= for (self: SignatureLength, Bool) */
void nitni_utilities__SignatureLength__long_61d(val* self, short int p0) {
self->attrs[COLOR_nitni_utilities__SignatureLength___64dlong].s = p0; /* @long on <self:SignatureLength> */
RET_LABEL:;
}
/* method nitni_utilities#SignatureLength#long= for (self: Object, Bool) */
void VIRTUAL_nitni_utilities__SignatureLength__long_61d(val* self, short int p0) {
nitni_utilities__SignatureLength__long_61d(self, p0);
RET_LABEL:;
}
/* method nitni_utilities#SignatureLength#init for (self: SignatureLength, Bool) */
void nitni_utilities__SignatureLength__init(val* self, short int p0) {
short int var_long /* var long: Bool */;
var_long = p0;
((void (*)(val*, short int))(self->class->vft[COLOR_nitni_utilities__SignatureLength__long_61d]))(self, var_long) /* long= on <self:SignatureLength>*/;
RET_LABEL:;
}
/* method nitni_utilities#SignatureLength#init for (self: Object, Bool) */
void VIRTUAL_nitni_utilities__SignatureLength__init(val* self, short int p0) {
nitni_utilities__SignatureLength__init(self, p0);
RET_LABEL:;
}
