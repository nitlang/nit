#include "nitni_utilities.sep.0.h"
/* method nitni_utilities#MMethod#build_cname for (self: MMethod, MClassType, MModule, nullable String, SignatureLength): String */
val* nitni_utilities__MMethod__build_cname(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : String */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var_suffix /* var suffix: nullable String */;
val* var_length /* var length: SignatureLength */;
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
var82 = ((val* (*)(val*))(var_from_mmodule->class->vft[COLOR_mmodule__MModule__name]))(var_from_mmodule) /* name on <var_from_mmodule:MModule>*/;
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
/* method nitni_utilities#MMethod#build_cname for (self: Object, MClassType, MModule, nullable String, SignatureLength): String */
val* VIRTUAL_nitni_utilities__MMethod__build_cname(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_utilities__MMethod__build_cname(self, p0, p1, p2, p3);
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
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
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
var1 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_model__MProperty__lookup_first_definition]))(self, var_from_mmodule, var_recv_mtype) /* lookup_first_definition on <self:MMethod>*/;
var_mmethoddef = var1;
var2 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
var_signature = var2;
var3 = NULL;
if (var_signature == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_utilities.nit", 58);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_utilities.nit", 65);
show_backtrace(1);
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
var18 = ((val* (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(self, var_recv_mtype, var_from_mmodule, var_suffix, var_length) /* build_cname on <self:MMethod>*/;
var_cname = var18;
var19 = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var19->class->vft[COLOR_list__List__init]))(var19) /* init on <var19:List[String]>*/;
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
val* var1 /* : null */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
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
val* var31 /* : Array[MParameter] */;
val* var32 /* : Iterator[nullable Object] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var35 /* : MType */;
val* var36 /* : String */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var_joined_cparams /* var joined_cparams: String */;
val* var48 /* : Array[Object] */;
long var49 /* : Int */;
val* var_ /* var : Array[Object] */;
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
val* var65 /* : String */;
val* var_ccall /* var ccall: String */;
val* var66 /* : null */;
short int var67 /* : Bool */;
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var_70 /* var : Array[Object] */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : Array[Object] */;
long var84 /* : Int */;
val* var_85 /* var : Array[Object] */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : String */;
val* var96 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
var_suffix = p2;
var_length = p3;
var_call_context = p4;
var_param_suffix = p5;
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
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_model__MProperty__lookup_first_definition]))(self, var_from_mmodule, var_recv_mtype) /* lookup_first_definition on <self:MMethod>*/;
var_mmethoddef = var7;
var8 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
var_signature = var8;
var9 = NULL;
if (var_signature == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_utilities.nit", 99);
show_backtrace(1);
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
var17 = ((val* (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_nitni_utilities__MMethod__build_cname]))(self, var_recv_mtype, var_from_mmodule, var_suffix, var_length) /* build_cname on <self:MMethod>*/;
var_cname = var17;
var18 = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var18->class->vft[COLOR_list__List__init]))(var18) /* init on <var18:List[String]>*/;
var_cparams = var18;
var19 = ((short int (*)(val*))(self->class->vft[COLOR_model__MMethod__is_init]))(self) /* is_init on <self:MMethod>*/;
var20 = !var19;
if (var20){
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
}
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
var30 = ((val* (*)(val*, val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__cast_to]))(var_call_context, var_recv_mtype, var29) /* cast_to on <var_call_context:CallContext>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var30) /* add on <var_cparams:List[String]>*/;
} else {
}
var31 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__mparameters]))(var_signature) /* mparameters on <var_signature:nullable MSignature(MSignature)>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Collection__iterator]))(var31) /* iterator on <var31:Array[MParameter]>*/;
for(;;) {
var33 = ((short int (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var32) /* is_ok on <var32:Iterator[nullable Object]>*/;
if(!var33) break;
var34 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__item]))(var32) /* item on <var32:Iterator[nullable Object]>*/;
var_p = var34;
var35 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var36 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 2;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var_param_suffix;
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
var41 = ((val* (*)(val*, val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__cast_to]))(var_call_context, var35, var40) /* cast_to on <var_call_context:CallContext>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var41) /* add on <var_cparams:List[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__next]))(var32) /* next on <var32:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce42) {
var43 = varonce42;
} else {
var44 = ", ";
var45 = 2;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = ((val* (*)(val*, val*))(var_cparams->class->vft[COLOR_string__Collection__join]))(var_cparams, var43) /* join on <var_cparams:List[String]>*/;
var_joined_cparams = var47;
var48 = NEW_array__Array(&type_array__Arraykernel__Object);
var49 = 5;
((void (*)(val*, long))(var48->class->vft[COLOR_array__Array__with_capacity]))(var48, var49) /* with_capacity on <var48:Array[Object]>*/;
var_ = var48;
if (varonce50) {
var51 = varonce50;
} else {
var52 = "";
var53 = 0;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var51) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_cname) /* add on <var_:Array[Object]>*/;
if (varonce55) {
var56 = varonce55;
} else {
var57 = "(";
var58 = 1;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var56) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_joined_cparams) /* add on <var_:Array[Object]>*/;
if (varonce60) {
var61 = varonce60;
} else {
var62 = ")";
var63 = 1;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var61) /* add on <var_:Array[Object]>*/;
var65 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_ccall = var65;
var66 = NULL;
if (var_return_mtype == NULL) {
var67 = 0; /* is null */
} else {
var67 = 1; /* arg is null and recv is not */
}
if (var67){
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
var69 = 3;
((void (*)(val*, long))(var68->class->vft[COLOR_array__Array__with_capacity]))(var68, var69) /* with_capacity on <var68:Array[Object]>*/;
var_70 = var68;
if (varonce71) {
var72 = varonce71;
} else {
var73 = "return ";
var74 = 7;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
((void (*)(val*, val*))(var_70->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_70, var72) /* add on <var_70:Array[Object]>*/;
var76 = ((val* (*)(val*, val*, val*))(var_call_context->class->vft[COLOR_nitni_utilities__CallContext__cast_from]))(var_call_context, var_return_mtype, var_ccall) /* cast_from on <var_call_context:CallContext>*/;
((void (*)(val*, val*))(var_70->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_70, var76) /* add on <var_70:Array[Object]>*/;
if (varonce77) {
var78 = varonce77;
} else {
var79 = ";";
var80 = 1;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
((void (*)(val*, val*))(var_70->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_70, var78) /* add on <var_70:Array[Object]>*/;
var82 = ((val* (*)(val*))(var_70->class->vft[COLOR_string__Object__to_s]))(var_70) /* to_s on <var_70:Array[Object]>*/;
var = var82;
goto RET_LABEL;
} else {
var83 = NEW_array__Array(&type_array__Arraykernel__Object);
var84 = 3;
((void (*)(val*, long))(var83->class->vft[COLOR_array__Array__with_capacity]))(var83, var84) /* with_capacity on <var83:Array[Object]>*/;
var_85 = var83;
if (varonce86) {
var87 = varonce86;
} else {
var88 = "";
var89 = 0;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var87) /* add on <var_85:Array[Object]>*/;
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var_ccall) /* add on <var_85:Array[Object]>*/;
if (varonce91) {
var92 = varonce91;
} else {
var93 = ";";
var94 = 1;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var92) /* add on <var_85:Array[Object]>*/;
var96 = ((val* (*)(val*))(var_85->class->vft[COLOR_string__Object__to_s]))(var_85) /* to_s on <var_85:Array[Object]>*/;
var = var96;
goto RET_LABEL;
}
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
