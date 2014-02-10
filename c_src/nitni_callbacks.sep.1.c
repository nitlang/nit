#include "nitni_callbacks.sep.0.h"
/* method nitni_callbacks#ToolContext#verify_nitni_callback_phase for (self: ToolContext): Phase */
val* nitni_callbacks__ToolContext__verify_nitni_callback_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitni_callbacks__ToolContext___64dverify_nitni_callback_phase].val; /* @verify_nitni_callback_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @verify_nitni_callback_phase");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 26);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ToolContext#verify_nitni_callback_phase for (self: Object): Phase */
val* VIRTUAL_nitni_callbacks__ToolContext__verify_nitni_callback_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = nitni_callbacks__ToolContext__verify_nitni_callback_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ToolContext#verify_nitni_callback_phase= for (self: ToolContext, Phase) */
void nitni_callbacks__ToolContext__verify_nitni_callback_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__ToolContext___64dverify_nitni_callback_phase].val = p0; /* @verify_nitni_callback_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method nitni_callbacks#ToolContext#verify_nitni_callback_phase= for (self: Object, Phase) */
void VIRTUAL_nitni_callbacks__ToolContext__verify_nitni_callback_phase_61d(val* self, val* p0) {
nitni_callbacks__ToolContext__verify_nitni_callback_phase_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#VerifyNitniCallbacksPhase#process_npropdef for (self: VerifyNitniCallbacksPhase, APropdef) */
void nitni_callbacks__VerifyNitniCallbacksPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : ToolContext */;
var_npropdef = p0;
/* <var_npropdef:APropdef> isa AExternPropdef */
cltype = type_parser_nodes__AExternPropdef.color;
idtype = type_parser_nodes__AExternPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:VerifyNitniCallbacksPhase>*/;
((void (*)(val*, val*))(var_npropdef->class->vft[COLOR_nitni_callbacks__AExternPropdef__verify_nitni_callbacks]))(var_npropdef, var2) /* verify_nitni_callbacks on <var_npropdef:APropdef(AExternPropdef)>*/;
RET_LABEL:;
}
/* method nitni_callbacks#VerifyNitniCallbacksPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_nitni_callbacks__VerifyNitniCallbacksPhase__process_npropdef(val* self, val* p0) {
nitni_callbacks__VerifyNitniCallbacksPhase__process_npropdef(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#callbacks for (self: ForeignCallbackSet): Set[MExplicitCall] */
val* nitni_callbacks__ForeignCallbackSet__callbacks(val* self) {
val* var /* : Set[MExplicitCall] */;
val* var1 /* : Set[MExplicitCall] */;
var1 = self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dcallbacks].val; /* @callbacks on <self:ForeignCallbackSet> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @callbacks");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 45);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#callbacks for (self: Object): Set[MExplicitCall] */
val* VIRTUAL_nitni_callbacks__ForeignCallbackSet__callbacks(val* self) {
val* var /* : Set[MExplicitCall] */;
val* var1 /* : Set[MExplicitCall] */;
var1 = nitni_callbacks__ForeignCallbackSet__callbacks(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#callbacks= for (self: ForeignCallbackSet, Set[MExplicitCall]) */
void nitni_callbacks__ForeignCallbackSet__callbacks_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dcallbacks].val = p0; /* @callbacks on <self:ForeignCallbackSet> */
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#callbacks= for (self: Object, Set[MExplicitCall]) */
void VIRTUAL_nitni_callbacks__ForeignCallbackSet__callbacks_61d(val* self, val* p0) {
nitni_callbacks__ForeignCallbackSet__callbacks_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#supers for (self: ForeignCallbackSet): Set[MExplicitSuper] */
val* nitni_callbacks__ForeignCallbackSet__supers(val* self) {
val* var /* : Set[MExplicitSuper] */;
val* var1 /* : Set[MExplicitSuper] */;
var1 = self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dsupers].val; /* @supers on <self:ForeignCallbackSet> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @supers");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 48);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#supers for (self: Object): Set[MExplicitSuper] */
val* VIRTUAL_nitni_callbacks__ForeignCallbackSet__supers(val* self) {
val* var /* : Set[MExplicitSuper] */;
val* var1 /* : Set[MExplicitSuper] */;
var1 = nitni_callbacks__ForeignCallbackSet__supers(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#supers= for (self: ForeignCallbackSet, Set[MExplicitSuper]) */
void nitni_callbacks__ForeignCallbackSet__supers_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dsupers].val = p0; /* @supers on <self:ForeignCallbackSet> */
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#supers= for (self: Object, Set[MExplicitSuper]) */
void VIRTUAL_nitni_callbacks__ForeignCallbackSet__supers_61d(val* self, val* p0) {
nitni_callbacks__ForeignCallbackSet__supers_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#types for (self: ForeignCallbackSet): Set[MType] */
val* nitni_callbacks__ForeignCallbackSet__types(val* self) {
val* var /* : Set[MType] */;
val* var1 /* : Set[MType] */;
var1 = self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dtypes].val; /* @types on <self:ForeignCallbackSet> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @types");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 51);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#types for (self: Object): Set[MType] */
val* VIRTUAL_nitni_callbacks__ForeignCallbackSet__types(val* self) {
val* var /* : Set[MType] */;
val* var1 /* : Set[MType] */;
var1 = nitni_callbacks__ForeignCallbackSet__types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#types= for (self: ForeignCallbackSet, Set[MType]) */
void nitni_callbacks__ForeignCallbackSet__types_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dtypes].val = p0; /* @types on <self:ForeignCallbackSet> */
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#types= for (self: Object, Set[MType]) */
void VIRTUAL_nitni_callbacks__ForeignCallbackSet__types_61d(val* self, val* p0) {
nitni_callbacks__ForeignCallbackSet__types_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#casts for (self: ForeignCallbackSet): Set[MExplicitCast] */
val* nitni_callbacks__ForeignCallbackSet__casts(val* self) {
val* var /* : Set[MExplicitCast] */;
val* var1 /* : Set[MExplicitCast] */;
var1 = self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dcasts].val; /* @casts on <self:ForeignCallbackSet> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @casts");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 54);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#casts for (self: Object): Set[MExplicitCast] */
val* VIRTUAL_nitni_callbacks__ForeignCallbackSet__casts(val* self) {
val* var /* : Set[MExplicitCast] */;
val* var1 /* : Set[MExplicitCast] */;
var1 = nitni_callbacks__ForeignCallbackSet__casts(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#casts= for (self: ForeignCallbackSet, Set[MExplicitCast]) */
void nitni_callbacks__ForeignCallbackSet__casts_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dcasts].val = p0; /* @casts on <self:ForeignCallbackSet> */
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#casts= for (self: Object, Set[MExplicitCast]) */
void VIRTUAL_nitni_callbacks__ForeignCallbackSet__casts_61d(val* self, val* p0) {
nitni_callbacks__ForeignCallbackSet__casts_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#all_cached for (self: ForeignCallbackSet): nullable Set[NitniCallback] */
val* nitni_callbacks__ForeignCallbackSet__all_cached(val* self) {
val* var /* : nullable Set[NitniCallback] */;
val* var1 /* : nullable Set[NitniCallback] */;
var1 = self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dall_cached].val; /* @all_cached on <self:ForeignCallbackSet> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#all_cached for (self: Object): nullable Set[NitniCallback] */
val* VIRTUAL_nitni_callbacks__ForeignCallbackSet__all_cached(val* self) {
val* var /* : nullable Set[NitniCallback] */;
val* var1 /* : nullable Set[NitniCallback] */;
var1 = nitni_callbacks__ForeignCallbackSet__all_cached(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#all_cached= for (self: ForeignCallbackSet, nullable Set[NitniCallback]) */
void nitni_callbacks__ForeignCallbackSet__all_cached_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dall_cached].val = p0; /* @all_cached on <self:ForeignCallbackSet> */
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#all_cached= for (self: Object, nullable Set[NitniCallback]) */
void VIRTUAL_nitni_callbacks__ForeignCallbackSet__all_cached_61d(val* self, val* p0) {
nitni_callbacks__ForeignCallbackSet__all_cached_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#all for (self: ForeignCallbackSet): Set[NitniCallback] */
val* nitni_callbacks__ForeignCallbackSet__all(val* self) {
val* var /* : Set[NitniCallback] */;
val* var1 /* : nullable Set[NitniCallback] */;
val* var_cached /* var cached: nullable Set[NitniCallback] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : HashSet[NitniCallback] */;
val* var_set /* var set: HashSet[NitniCallback] */;
val* var5 /* : Set[MExplicitCall] */;
val* var6 /* : Set[MExplicitSuper] */;
val* var7 /* : Set[MType] */;
val* var8 /* : Set[MExplicitCast] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__all_cached]))(self) /* all_cached on <self:ForeignCallbackSet>*/;
var_cached = var1;
var2 = NULL;
if (var_cached == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_cached;
goto RET_LABEL;
} else {
}
var4 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetnitni_callbacks__NitniCallback);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashSet__init]))(var4) /* init on <var4:HashSet[NitniCallback]>*/;
CHECK_NEW_hash_collection__HashSet(var4);
var_set = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__callbacks]))(self) /* callbacks on <self:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var_set->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_set, var5) /* add_all on <var_set:HashSet[NitniCallback]>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__supers]))(self) /* supers on <self:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var_set->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_set, var6) /* add_all on <var_set:HashSet[NitniCallback]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(self) /* types on <self:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var_set->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_set, var7) /* add_all on <var_set:HashSet[NitniCallback]>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__casts]))(self) /* casts on <self:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var_set->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_set, var8) /* add_all on <var_set:HashSet[NitniCallback]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__all_cached_61d]))(self, var_set) /* all_cached= on <self:ForeignCallbackSet>*/;
var = var_set;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#all for (self: Object): Set[NitniCallback] */
val* VIRTUAL_nitni_callbacks__ForeignCallbackSet__all(val* self) {
val* var /* : Set[NitniCallback] */;
val* var1 /* : Set[NitniCallback] */;
var1 = nitni_callbacks__ForeignCallbackSet__all(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#join for (self: ForeignCallbackSet, ForeignCallbackSet) */
void nitni_callbacks__ForeignCallbackSet__join(val* self, val* p0) {
val* var_other /* var other: ForeignCallbackSet */;
val* var /* : Set[MExplicitCall] */;
val* var1 /* : Set[MExplicitCall] */;
val* var2 /* : Set[MExplicitSuper] */;
val* var3 /* : Set[MExplicitSuper] */;
val* var4 /* : Set[MType] */;
val* var5 /* : Set[MType] */;
val* var6 /* : Set[MExplicitCast] */;
val* var7 /* : Set[MExplicitCast] */;
var_other = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__callbacks]))(self) /* callbacks on <self:ForeignCallbackSet>*/;
var1 = ((val* (*)(val*))(var_other->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__callbacks]))(var_other) /* callbacks on <var_other:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var, var1) /* add_all on <var:Set[MExplicitCall]>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__supers]))(self) /* supers on <self:ForeignCallbackSet>*/;
var3 = ((val* (*)(val*))(var_other->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__supers]))(var_other) /* supers on <var_other:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var2, var3) /* add_all on <var2:Set[MExplicitSuper]>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(self) /* types on <self:ForeignCallbackSet>*/;
var5 = ((val* (*)(val*))(var_other->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var_other) /* types on <var_other:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var4, var5) /* add_all on <var4:Set[MType]>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__casts]))(self) /* casts on <self:ForeignCallbackSet>*/;
var7 = ((val* (*)(val*))(var_other->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__casts]))(var_other) /* casts on <var_other:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var6, var7) /* add_all on <var6:Set[MExplicitCast]>*/;
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#join for (self: Object, ForeignCallbackSet) */
void VIRTUAL_nitni_callbacks__ForeignCallbackSet__join(val* self, val* p0) {
nitni_callbacks__ForeignCallbackSet__join(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#init for (self: ForeignCallbackSet) */
void nitni_callbacks__ForeignCallbackSet__init(val* self) {
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#init for (self: Object) */
void VIRTUAL_nitni_callbacks__ForeignCallbackSet__init(val* self) {
nitni_callbacks__ForeignCallbackSet__init(self);
RET_LABEL:;
}
/* method nitni_callbacks#AExternPropdef#foreign_callbacks_cache for (self: AExternPropdef): nullable ForeignCallbackSet */
val* nitni_callbacks__AExternPropdef__foreign_callbacks_cache(val* self) {
val* var /* : nullable ForeignCallbackSet */;
val* var1 /* : nullable ForeignCallbackSet */;
var1 = self->attrs[COLOR_nitni_callbacks__AExternPropdef___64dforeign_callbacks_cache].val; /* @foreign_callbacks_cache on <self:AExternPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AExternPropdef#foreign_callbacks_cache for (self: Object): nullable ForeignCallbackSet */
val* VIRTUAL_nitni_callbacks__AExternPropdef__foreign_callbacks_cache(val* self) {
val* var /* : nullable ForeignCallbackSet */;
val* var1 /* : nullable ForeignCallbackSet */;
var1 = nitni_callbacks__AExternPropdef__foreign_callbacks_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AExternPropdef#foreign_callbacks_cache= for (self: AExternPropdef, nullable ForeignCallbackSet) */
void nitni_callbacks__AExternPropdef__foreign_callbacks_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__AExternPropdef___64dforeign_callbacks_cache].val = p0; /* @foreign_callbacks_cache on <self:AExternPropdef> */
RET_LABEL:;
}
/* method nitni_callbacks#AExternPropdef#foreign_callbacks_cache= for (self: Object, nullable ForeignCallbackSet) */
void VIRTUAL_nitni_callbacks__AExternPropdef__foreign_callbacks_cache_61d(val* self, val* p0) {
nitni_callbacks__AExternPropdef__foreign_callbacks_cache_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#AExternPropdef#foreign_callbacks for (self: AExternPropdef): ForeignCallbackSet */
val* nitni_callbacks__AExternPropdef__foreign_callbacks(val* self) {
val* var /* : ForeignCallbackSet */;
val* var1 /* : nullable ForeignCallbackSet */;
val* var_fcs /* var fcs: nullable ForeignCallbackSet */;
val* var2 /* : null */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks_cache]))(self) /* foreign_callbacks_cache on <self:AExternPropdef>*/;
var_fcs = var1;
var2 = NULL;
if (var_fcs == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (!var3) {
if (varonce) {
var4 = varonce;
} else {
var5 = "Error: attempting to access nitni callbacks before phase \'verify_nitni_callback_phase\'.";
var6 = 87;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var4) /* print on <self:AExternPropdef>*/;
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 89);
exit(1);
}
var = var_fcs;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AExternPropdef#foreign_callbacks for (self: Object): ForeignCallbackSet */
val* VIRTUAL_nitni_callbacks__AExternPropdef__foreign_callbacks(val* self) {
val* var /* : ForeignCallbackSet */;
val* var1 /* : ForeignCallbackSet */;
var1 = nitni_callbacks__AExternPropdef__foreign_callbacks(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AExternPropdef#verify_nitni_callbacks for (self: AExternPropdef, ToolContext) */
void nitni_callbacks__AExternPropdef__verify_nitni_callbacks(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable ForeignCallbackSet */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : ForeignCallbackSet */;
val* var_fcs /* var fcs: ForeignCallbackSet */;
val* var4 /* : nullable MPropDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var7 /* : nullable MPropDef */;
val* var8 /* : MClassDef */;
val* var9 /* : MClassType */;
val* var_recv_type /* var recv_type: MClassType */;
val* var10 /* : Set[MType] */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : nullable MSignature */;
val* var13 /* : nullable MType */;
val* var_rmt /* var rmt: nullable MType */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : nullable MPropDef */;
val* var22 /* : MClassDef */;
val* var23 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var24 /* : MType */;
short int var25 /* : Bool */;
val* var26 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var27 /* : Set[MType] */;
val* var28 /* : nullable MPropDef */;
val* var29 /* : nullable MSignature */;
val* var30 /* : Array[MParameter] */;
val* var31 /* : Iterator[nullable Object] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var34 /* : MType */;
short int var35 /* : Bool */;
val* var36 /* : MType */;
val* var_mtype37 /* var mtype: MType */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
short int var_42 /* var : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : nullable MPropDef */;
val* var47 /* : MClassDef */;
val* var48 /* : MClassType */;
val* var_mclass_type49 /* var mclass_type: MClassType */;
val* var50 /* : MType */;
val* var51 /* : Set[MType] */;
val* var52 /* : nullable AExternCalls */;
val* var53 /* : null */;
short int var54 /* : Bool */;
val* var55 /* : nullable AExternCalls */;
val* var56 /* : ANodes[AExternCall] */;
val* var57 /* : Iterator[nullable Object] */;
short int var58 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_ec /* var ec: AExternCall */;
var_toolcontext = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks_cache]))(self) /* foreign_callbacks_cache on <self:AExternPropdef>*/;
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = NEW_nitni_callbacks__ForeignCallbackSet(&type_nitni_callbacks__ForeignCallbackSet);
((void (*)(val*))(var3->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__init]))(var3) /* init on <var3:ForeignCallbackSet>*/;
CHECK_NEW_nitni_callbacks__ForeignCallbackSet(var3);
var_fcs = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AExternPropdef>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 101);
exit(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MPropDef__mclassdef]))(var4) /* mclassdef on <var4:nullable MPropDef(nullable MMethodDef)>*/;
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClassDef__mmodule]))(var5) /* mmodule on <var5:MClassDef>*/;
var_mmodule = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AExternPropdef>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 104);
exit(1);
} else {
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MPropDef__mclassdef]))(var7) /* mclassdef on <var7:nullable MPropDef(nullable MMethodDef)>*/;
}
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MClassDef__bound_mtype]))(var8) /* bound_mtype on <var8:MClassDef>*/;
var_recv_type = var9;
var10 = ((val* (*)(val*))(var_fcs->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var_fcs) /* types on <var_fcs:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var10, var_recv_type) /* add on <var10:Set[MType]>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AExternPropdef>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 108);
exit(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MMethodDef__msignature]))(var11) /* msignature on <var11:nullable MPropDef(nullable MMethodDef)>*/;
}
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 108);
exit(1);
} else {
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MSignature__return_mtype]))(var12) /* return_mtype on <var12:nullable MSignature>*/;
}
var_rmt = var13;
var14 = NULL;
if (var_rmt == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
/* <var_rmt:nullable MType(MType)> isa MParameterType */
cltype = type_model__MParameterType.color;
idtype = type_model__MParameterType.id;
if(cltype >= var_rmt->type->table_size) {
var17 = 0;
} else {
var17 = var_rmt->type->type_table[cltype] == idtype;
}
var_ = var17;
if (var17){
var16 = var_;
} else {
/* <var_rmt:nullable MType(MType)> isa MVirtualType */
cltype19 = type_model__MVirtualType.color;
idtype20 = type_model__MVirtualType.id;
if(cltype19 >= var_rmt->type->table_size) {
var18 = 0;
} else {
var18 = var_rmt->type->type_table[cltype19] == idtype20;
}
var16 = var18;
}
if (var16){
var21 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AExternPropdef>*/;
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 111);
exit(1);
} else {
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_model__MPropDef__mclassdef]))(var21) /* mclassdef on <var21:nullable MPropDef(nullable MMethodDef)>*/;
}
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_model__MClassDef__bound_mtype]))(var22) /* bound_mtype on <var22:MClassDef>*/;
var_mclass_type = var23;
if (var_rmt == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 112);
exit(1);
} else {
var24 = ((val* (*)(val*, val*, val*))(var_rmt->class->vft[COLOR_model__MType__anchor_to]))(var_rmt, var_mmodule, var_mclass_type) /* anchor_to on <var_rmt:nullable MType>*/;
}
var_rmt = var24;
} else {
}
var25 = 1;
var26 = ((val* (*)(val*, val*, val*, val*, short int))(var_rmt->class->vft[COLOR_model__MType__resolve_for]))(var_rmt, var_recv_type, var_recv_type, var_mmodule, var25) /* resolve_for on <var_rmt:nullable MType(MType)>*/;
var_mtype = var26;
var27 = ((val* (*)(val*))(var_fcs->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var_fcs) /* types on <var_fcs:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var27->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var27, var_mtype) /* add on <var27:Set[MType]>*/;
} else {
}
var28 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AExternPropdef>*/;
if (var28 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 119);
exit(1);
} else {
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_model__MMethodDef__msignature]))(var28) /* msignature on <var28:nullable MPropDef(nullable MMethodDef)>*/;
}
if (var29 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 119);
exit(1);
} else {
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_model__MSignature__mparameters]))(var29) /* mparameters on <var29:nullable MSignature>*/;
}
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_abstract_collection__Collection__iterator]))(var30) /* iterator on <var30:Array[MParameter]>*/;
for(;;) {
var32 = ((short int (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var31) /* is_ok on <var31:Iterator[nullable Object]>*/;
if(!var32) break;
var33 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__item]))(var31) /* item on <var31:Iterator[nullable Object]>*/;
var_p = var33;
var34 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var35 = 1;
var36 = ((val* (*)(val*, val*, val*, val*, short int))(var34->class->vft[COLOR_model__MType__resolve_for]))(var34, var_recv_type, var_recv_type, var_mmodule, var35) /* resolve_for on <var34:MType>*/;
var_mtype37 = var36;
/* <var_mtype37:MType> isa MParameterType */
cltype40 = type_model__MParameterType.color;
idtype41 = type_model__MParameterType.id;
if(cltype40 >= var_mtype37->type->table_size) {
var39 = 0;
} else {
var39 = var_mtype37->type->type_table[cltype40] == idtype41;
}
var_42 = var39;
if (var39){
var38 = var_42;
} else {
/* <var_mtype37:MType> isa MVirtualType */
cltype44 = type_model__MVirtualType.color;
idtype45 = type_model__MVirtualType.id;
if(cltype44 >= var_mtype37->type->table_size) {
var43 = 0;
} else {
var43 = var_mtype37->type->type_table[cltype44] == idtype45;
}
var38 = var43;
}
if (var38){
var46 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AExternPropdef>*/;
if (var46 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 122);
exit(1);
} else {
var47 = ((val* (*)(val*))(var46->class->vft[COLOR_model__MPropDef__mclassdef]))(var46) /* mclassdef on <var46:nullable MPropDef(nullable MMethodDef)>*/;
}
var48 = ((val* (*)(val*))(var47->class->vft[COLOR_model__MClassDef__bound_mtype]))(var47) /* bound_mtype on <var47:MClassDef>*/;
var_mclass_type49 = var48;
var50 = ((val* (*)(val*, val*, val*))(var_mtype37->class->vft[COLOR_model__MType__anchor_to]))(var_mtype37, var_mmodule, var_mclass_type49) /* anchor_to on <var_mtype37:MType>*/;
var_mtype37 = var50;
} else {
}
var51 = ((val* (*)(val*))(var_fcs->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var_fcs) /* types on <var_fcs:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var51->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var51, var_mtype37) /* add on <var51:Set[MType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__next]))(var31) /* next on <var31:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var52 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern_calls]))(self) /* n_extern_calls on <self:AExternPropdef>*/;
var53 = NULL;
if (var52 == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (var54){
var55 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern_calls]))(self) /* n_extern_calls on <self:AExternPropdef>*/;
if (var55 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 130);
exit(1);
} else {
var56 = ((val* (*)(val*))(var55->class->vft[COLOR_parser_nodes__AExternCalls__n_extern_calls]))(var55) /* n_extern_calls on <var55:nullable AExternCalls>*/;
}
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_abstract_collection__Collection__iterator]))(var56) /* iterator on <var56:ANodes[AExternCall]>*/;
for(;;) {
var58 = ((short int (*)(val*))(var57->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var57) /* is_ok on <var57:Iterator[nullable Object]>*/;
if(!var58) break;
var59 = ((val* (*)(val*))(var57->class->vft[COLOR_abstract_collection__Iterator__item]))(var57) /* item on <var57:Iterator[nullable Object]>*/;
var_ec = var59;
((void (*)(val*, val*, val*, val*))(var_ec->class->vft[COLOR_nitni_callbacks__AExternCall__verify_and_collect]))(var_ec, self, var_fcs, var_toolcontext) /* verify_and_collect on <var_ec:AExternCall>*/;
CONTINUE_label60: (void)0;
((void (*)(val*))(var57->class->vft[COLOR_abstract_collection__Iterator__next]))(var57) /* next on <var57:Iterator[nullable Object]>*/;
}
BREAK_label60: (void)0;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks_cache_61d]))(self, var_fcs) /* foreign_callbacks_cache= on <self:AExternPropdef>*/;
RET_LABEL:;
}
/* method nitni_callbacks#AExternPropdef#verify_nitni_callbacks for (self: Object, ToolContext) */
void VIRTUAL_nitni_callbacks__AExternPropdef__verify_nitni_callbacks(val* self, val* p0) {
nitni_callbacks__AExternPropdef__verify_nitni_callbacks(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#AExternPropdef#accept_rapid_type_visitor for (self: AExternPropdef, RapidTypeVisitor) */
void nitni_callbacks__AExternPropdef__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : ForeignCallbackSet */;
val* var1 /* : Set[MExplicitCall] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_cb /* var cb: MExplicitCall */;
val* var5 /* : MClassType */;
val* var6 /* : MProperty */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : ForeignCallbackSet */;
val* var9 /* : Set[MExplicitCast] */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_cast /* var cast: MExplicitCast */;
val* var13 /* : MType */;
val* var15 /* : ForeignCallbackSet */;
val* var16 /* : Set[MExplicitSuper] */;
val* var17 /* : Iterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_sup /* var sup: MExplicitSuper */;
val* var20 /* : RapidTypeAnalysis */;
val* var21 /* : MPropDef */;
val* var22 /* : MClassDef */;
val* var23 /* : MClass */;
val* var24 /* : MClassType */;
val* var25 /* : MPropDef */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var31 /* : ForeignCallbackSet */;
val* var32 /* : Set[MType] */;
val* var33 /* : Iterator[nullable Object] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__callbacks]))(var) /* callbacks on <var:ForeignCallbackSet>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:Set[MExplicitCall]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_cb = var4;
var5 = ((val* (*)(val*))(var_cb->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(var_cb) /* recv_mtype on <var_cb:MExplicitCall>*/;
var6 = ((val* (*)(val*))(var_cb->class->vft[COLOR_nitni_callbacks__MExplicitCall__mproperty]))(var_cb) /* mproperty on <var_cb:MExplicitCall>*/;
/* <var6:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var6->type->table_size) {
var7 = 0;
} else {
var7 = var6->type->type_table[cltype] == idtype;
}
if (!var7) {
var_class_name = var6 == NULL ? "null" : var6->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethod", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 141);
exit(1);
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_send]))(var_v, var5, var6) /* add_send on <var_v:RapidTypeVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__casts]))(var8) /* casts on <var8:ForeignCallbackSet>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var9) /* iterator on <var9:Set[MExplicitCast]>*/;
for(;;) {
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
if(!var11) break;
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
var_cast = var12;
var13 = ((val* (*)(val*))(var_cast->class->vft[COLOR_nitni_callbacks__MExplicitCast__to]))(var_cast) /* to on <var_cast:MExplicitCast>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_cast_type]))(var_v, var13) /* add_cast_type on <var_v:RapidTypeVisitor>*/;
CONTINUE_label14: (void)0;
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
BREAK_label14: (void)0;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__supers]))(var15) /* supers on <var15:ForeignCallbackSet>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__iterator]))(var16) /* iterator on <var16:Set[MExplicitSuper]>*/;
for(;;) {
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var17) /* is_ok on <var17:Iterator[nullable Object]>*/;
if(!var18) break;
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__item]))(var17) /* item on <var17:Iterator[nullable Object]>*/;
var_sup = var19;
var20 = ((val* (*)(val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__analysis]))(var_v) /* analysis on <var_v:RapidTypeVisitor>*/;
var21 = ((val* (*)(val*))(var_sup->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(var_sup) /* from on <var_sup:MExplicitSuper>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_model__MPropDef__mclassdef]))(var21) /* mclassdef on <var21:MPropDef>*/;
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_model__MClassDef__mclass]))(var22) /* mclass on <var22:MClassDef>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_model__MClass__mclass_type]))(var23) /* mclass_type on <var23:MClass>*/;
var25 = ((val* (*)(val*))(var_sup->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(var_sup) /* from on <var_sup:MExplicitSuper>*/;
/* <var25:MPropDef> isa MMethodDef */
cltype27 = type_model__MMethodDef.color;
idtype28 = type_model__MMethodDef.id;
if(cltype27 >= var25->type->table_size) {
var26 = 0;
} else {
var26 = var25->type->type_table[cltype27] == idtype28;
}
if (!var26) {
var_class_name29 = var25 == NULL ? "null" : var25->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name29);
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 143);
exit(1);
}
((void (*)(val*, val*, val*))(var20->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__add_super_send]))(var20, var24, var25) /* add_super_send on <var20:RapidTypeAnalysis>*/;
CONTINUE_label30: (void)0;
((void (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__next]))(var17) /* next on <var17:Iterator[nullable Object]>*/;
}
BREAK_label30: (void)0;
var31 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__AExternPropdef__foreign_callbacks]))(self) /* foreign_callbacks on <self:AExternPropdef>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var31) /* types on <var31:ForeignCallbackSet>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Collection__iterator]))(var32) /* iterator on <var32:Set[MType]>*/;
for(;;) {
var34 = ((short int (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var33) /* is_ok on <var33:Iterator[nullable Object]>*/;
if(!var34) break;
var35 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__item]))(var33) /* item on <var33:Iterator[nullable Object]>*/;
var_t = var35;
/* <var_t:MType> isa MClassType */
cltype37 = type_model__MClassType.color;
idtype38 = type_model__MClassType.id;
if(cltype37 >= var_t->type->table_size) {
var36 = 0;
} else {
var36 = var_t->type->type_table[cltype37] == idtype38;
}
if (var36){
((void (*)(val*, val*))(var_v->class->vft[COLOR_rapid_type_analysis__RapidTypeVisitor__add_type]))(var_v, var_t) /* add_type on <var_v:RapidTypeVisitor>*/;
} else {
}
CONTINUE_label39: (void)0;
((void (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__next]))(var33) /* next on <var33:Iterator[nullable Object]>*/;
}
BREAK_label39: (void)0;
RET_LABEL:;
}
/* method nitni_callbacks#AExternPropdef#accept_rapid_type_visitor for (self: Object, RapidTypeVisitor) */
void VIRTUAL_nitni_callbacks__AExternPropdef__accept_rapid_type_visitor(val* self, val* p0) {
nitni_callbacks__AExternPropdef__accept_rapid_type_visitor(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#recv_mtype for (self: MExplicitCall): MClassType */
val* nitni_callbacks__MExplicitCall__recv_mtype(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nitni_callbacks__MExplicitCall___64drecv_mtype].val; /* @recv_mtype on <self:MExplicitCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @recv_mtype");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 160);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#recv_mtype for (self: Object): MClassType */
val* VIRTUAL_nitni_callbacks__MExplicitCall__recv_mtype(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = nitni_callbacks__MExplicitCall__recv_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#recv_mtype= for (self: MExplicitCall, MClassType) */
void nitni_callbacks__MExplicitCall__recv_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__MExplicitCall___64drecv_mtype].val = p0; /* @recv_mtype on <self:MExplicitCall> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#recv_mtype= for (self: Object, MClassType) */
void VIRTUAL_nitni_callbacks__MExplicitCall__recv_mtype_61d(val* self, val* p0) {
nitni_callbacks__MExplicitCall__recv_mtype_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#mproperty for (self: MExplicitCall): MProperty */
val* nitni_callbacks__MExplicitCall__mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = self->attrs[COLOR_nitni_callbacks__MExplicitCall___64dmproperty].val; /* @mproperty on <self:MExplicitCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproperty");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 162);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#mproperty for (self: Object): MProperty */
val* VIRTUAL_nitni_callbacks__MExplicitCall__mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = nitni_callbacks__MExplicitCall__mproperty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#mproperty= for (self: MExplicitCall, MProperty) */
void nitni_callbacks__MExplicitCall__mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__MExplicitCall___64dmproperty].val = p0; /* @mproperty on <self:MExplicitCall> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#mproperty= for (self: Object, MProperty) */
void VIRTUAL_nitni_callbacks__MExplicitCall__mproperty_61d(val* self, val* p0) {
nitni_callbacks__MExplicitCall__mproperty_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#from_mmodule for (self: MExplicitCall): MModule */
val* nitni_callbacks__MExplicitCall__from_mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitni_callbacks__MExplicitCall___64dfrom_mmodule].val; /* @from_mmodule on <self:MExplicitCall> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @from_mmodule");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 163);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#from_mmodule for (self: Object): MModule */
val* VIRTUAL_nitni_callbacks__MExplicitCall__from_mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = nitni_callbacks__MExplicitCall__from_mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#from_mmodule= for (self: MExplicitCall, MModule) */
void nitni_callbacks__MExplicitCall__from_mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__MExplicitCall___64dfrom_mmodule].val = p0; /* @from_mmodule on <self:MExplicitCall> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#from_mmodule= for (self: Object, MModule) */
void VIRTUAL_nitni_callbacks__MExplicitCall__from_mmodule_61d(val* self, val* p0) {
nitni_callbacks__MExplicitCall__from_mmodule_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#fill_type_for for (self: MExplicitCall, ForeignCallbackSet, MModule) */
void nitni_callbacks__MExplicitCall__fill_type_for(val* self, val* p0, val* p1) {
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_from /* var from: MModule */;
val* var /* : MProperty */;
val* var1 /* : MClassType */;
val* var2 /* : MPropDef */;
val* var_first /* var first: MPropDef */;
val* var3 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var4 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var5 /* : MClassType */;
short int var6 /* : Bool */;
val* var7 /* : MType */;
val* var8 /* : MClassType */;
val* var9 /* : MType */;
val* var10 /* : Set[MType] */;
val* var11 /* : MClassType */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var13 /* : nullable MSignature */;
val* var14 /* : nullable MType */;
val* var_rmt /* var rmt: nullable MType */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : MType */;
val* var19 /* : MType */;
val* var20 /* : Set[MType] */;
val* var21 /* : nullable MSignature */;
val* var22 /* : Array[MParameter] */;
val* var23 /* : Iterator[nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var26 /* : MType */;
val* var27 /* : MClassType */;
val* var28 /* : MClassType */;
short int var29 /* : Bool */;
val* var30 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
short int var31 /* : Bool */;
val* var32 /* : MType */;
val* var33 /* : MType */;
val* var34 /* : Set[MType] */;
var_callback_set = p0;
var_from = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__mproperty]))(self) /* mproperty on <self:MExplicitCall>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var2 = ((val* (*)(val*, val*, val*))(var->class->vft[COLOR_model__MProperty__lookup_first_definition]))(var, var_from, var1) /* lookup_first_definition on <var:MProperty>*/;
var_first = var2;
var3 = ((val* (*)(val*))(var_first->class->vft[COLOR_model__MPropDef__mclassdef]))(var_first) /* mclassdef on <var_first:MPropDef>*/;
var_mclassdef = var3;
var4 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_mclassdef) /* bound_mtype on <var_mclassdef:MClassDef>*/;
var_bound_mtype = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var6 = 1;
var7 = ((val* (*)(val*, val*, val*, val*, short int))(var5->class->vft[COLOR_model__MType__resolve_for]))(var5, var_bound_mtype, var_bound_mtype, var_from, var6) /* resolve_for on <var5:MClassType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype_61d]))(self, var7) /* recv_mtype= on <self:MExplicitCall>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var9 = ((val* (*)(val*, val*, val*))(var8->class->vft[COLOR_model__MType__anchor_to]))(var8, var_from, var_bound_mtype) /* anchor_to on <var8:MClassType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype_61d]))(self, var9) /* recv_mtype= on <self:MExplicitCall>*/;
var10 = ((val* (*)(val*))(var_callback_set->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var_callback_set) /* types on <var_callback_set:ForeignCallbackSet>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var10, var11) /* add on <var10:Set[MType]>*/;
/* <var_first:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_first->type->table_size) {
var12 = 0;
} else {
var12 = var_first->type->type_table[cltype] == idtype;
}
if (var12){
var13 = ((val* (*)(val*))(var_first->class->vft[COLOR_model__MMethodDef__msignature]))(var_first) /* msignature on <var_first:MPropDef(MMethodDef)>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 177);
exit(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MSignature__return_mtype]))(var13) /* return_mtype on <var13:nullable MSignature>*/;
}
var_rmt = var14;
var15 = NULL;
if (var_rmt == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
var17 = 1;
var18 = ((val* (*)(val*, val*, val*, val*, short int))(var_rmt->class->vft[COLOR_model__MType__resolve_for]))(var_rmt, var_bound_mtype, var_bound_mtype, var_from, var17) /* resolve_for on <var_rmt:nullable MType(MType)>*/;
var_rmt = var18;
var19 = ((val* (*)(val*, val*, val*))(var_rmt->class->vft[COLOR_model__MType__anchor_to]))(var_rmt, var_from, var_bound_mtype) /* anchor_to on <var_rmt:nullable MType(MType)>*/;
var_rmt = var19;
var20 = ((val* (*)(val*))(var_callback_set->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var_callback_set) /* types on <var_callback_set:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var20, var_rmt) /* add on <var20:Set[MType]>*/;
} else {
}
var21 = ((val* (*)(val*))(var_first->class->vft[COLOR_model__MMethodDef__msignature]))(var_first) /* msignature on <var_first:MPropDef(MMethodDef)>*/;
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 184);
exit(1);
} else {
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_model__MSignature__mparameters]))(var21) /* mparameters on <var21:nullable MSignature>*/;
}
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Collection__iterator]))(var22) /* iterator on <var22:Array[MParameter]>*/;
for(;;) {
var24 = ((short int (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var23) /* is_ok on <var23:Iterator[nullable Object]>*/;
if(!var24) break;
var25 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__item]))(var23) /* item on <var23:Iterator[nullable Object]>*/;
var_p = var25;
var26 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var27 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var28 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var29 = 1;
var30 = ((val* (*)(val*, val*, val*, val*, short int))(var26->class->vft[COLOR_model__MType__resolve_for]))(var26, var27, var28, var_from, var29) /* resolve_for on <var26:MType>*/;
var_param_mtype = var30;
var31 = 1;
var32 = ((val* (*)(val*, val*, val*, val*, short int))(var_param_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_param_mtype, var_bound_mtype, var_bound_mtype, var_from, var31) /* resolve_for on <var_param_mtype:MType>*/;
var_param_mtype = var32;
var33 = ((val* (*)(val*, val*, val*))(var_param_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_param_mtype, var_from, var_bound_mtype) /* anchor_to on <var_param_mtype:MType>*/;
var_param_mtype = var33;
var34 = ((val* (*)(val*))(var_callback_set->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var_callback_set) /* types on <var_callback_set:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var34->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var34, var_param_mtype) /* add on <var34:Set[MType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__next]))(var23) /* next on <var23:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#fill_type_for for (self: Object, ForeignCallbackSet, MModule) */
void VIRTUAL_nitni_callbacks__MExplicitCall__fill_type_for(val* self, val* p0, val* p1) {
nitni_callbacks__MExplicitCall__fill_type_for(self, p0, p1);
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#csignature for (self: MExplicitCall): String */
val* nitni_callbacks__MExplicitCall__csignature(val* self) {
val* var /* : String */;
val* var1 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : MPropDef */;
val* var4 /* : nullable MSignature */;
val* var_signature /* var signature: nullable MSignature */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MClassType */;
val* var9 /* : String */;
val* var_creturn_type /* var creturn_type: nullable Object */;
val* var10 /* : nullable MType */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : nullable MType */;
val* var_ret_mtype /* var ret_mtype: nullable MType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassType */;
val* var16 /* : MModule */;
short int var17 /* : Bool */;
val* var18 /* : MType */;
val* var19 /* : String */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
short int var32 /* : Bool */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : MClassType */;
val* var46 /* : String */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
val* var_cname /* var cname: nullable Object */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : MClassType */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : String */;
val* var68 /* : MClassType */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
val* var80 /* : List[String] */;
val* var_cparams /* var cparams: List[String] */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
val* var83 /* : MClassType */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : String */;
val* var94 /* : Array[MParameter] */;
val* var95 /* : Iterator[nullable Object] */;
short int var96 /* : Bool */;
val* var97 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var98 /* : MType */;
val* var99 /* : MClassType */;
val* var100 /* : MClassType */;
val* var101 /* : MModule */;
short int var102 /* : Bool */;
val* var103 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var111 /* : Array[Object] */;
long var112 /* : Int */;
val* var113 /* : NativeArray[Object] */;
val* var114 /* : String */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__mproperty]))(self) /* mproperty on <self:MExplicitCall>*/;
var_mproperty = var1;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var2 = 0;
} else {
var2 = var_mproperty->type->type_table[cltype] == idtype;
}
if (var2){
var3 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__intro]))(var_mproperty) /* intro on <var_mproperty:MProperty(MMethod)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MMethodDef__msignature]))(var3) /* msignature on <var3:MPropDef(MMethodDef)>*/;
var_signature = var4;
var5 = NULL;
if (var_signature == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 199);
exit(1);
}
var7 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MProperty(MMethod)>*/;
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_nitni_base__MType__cname]))(var8) /* cname on <var8:MClassType>*/;
var_creturn_type = var9;
} else {
var10 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__return_mtype]))(var_signature) /* return_mtype on <var_signature:nullable MSignature(MSignature)>*/;
var11 = NULL;
if (var10 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
var13 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__return_mtype]))(var_signature) /* return_mtype on <var_signature:nullable MSignature(MSignature)>*/;
var_ret_mtype = var13;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__from_mmodule]))(self) /* from_mmodule on <self:MExplicitCall>*/;
var17 = 1;
if (var_ret_mtype == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 206);
exit(1);
} else {
var18 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_ret_mtype, var14, var15, var16, var17) /* resolve_for on <var_ret_mtype:nullable MType>*/;
}
var_ret_mtype = var18;
var19 = ((val* (*)(val*))(var_ret_mtype->class->vft[COLOR_nitni_base__MType__cname]))(var_ret_mtype) /* cname on <var_ret_mtype:nullable MType(MType)>*/;
var_creturn_type = var19;
} else {
if (varonce) {
var20 = varonce;
} else {
var21 = "void";
var22 = 4;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
var_creturn_type = var20;
}
}
var24 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MProperty(MMethod)>*/;
if (var24){
var26 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__name]))(var_mproperty) /* name on <var_mproperty:MProperty(MMethod)>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "init";
var30 = 4;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var28) /* == on <var26:String>*/;
if (var32) {
var25 = 1;
} else {
var33 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__name]))(var_mproperty) /* name on <var_mproperty:MProperty(MMethod)>*/;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "new";
var37 = 3;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = ((short int (*)(val*, val*))(var33->class->vft[COLOR_kernel__Object___61d_61d]))(var33, var35) /* == on <var33:String>*/;
var25 = var39;
}
if (var25){
if (varonce40) {
var41 = varonce40;
} else {
var42 = "new_";
var43 = 4;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var45) /* mangled_cname on <var45:MClassType>*/;
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 2;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var46;
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
CHECK_NEW_array__Array(var47);
}
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
var_cname = var50;
} else {
if (varonce51) {
var52 = varonce51;
} else {
var53 = "new_";
var54 = 4;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var56) /* mangled_cname on <var56:MClassType>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = "_";
var61 = 1;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_nitni_base__MMethod__short_cname]))(var_mproperty) /* short_cname on <var_mproperty:MProperty(MMethod)>*/;
var64 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 4;
var66 = NEW_array__NativeArray(var65, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var66)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var66)->values[1] = (val*) var57;
((struct instance_array__NativeArray*)var66)->values[2] = (val*) var59;
((struct instance_array__NativeArray*)var66)->values[3] = (val*) var63;
((void (*)(val*, val*, long))(var64->class->vft[COLOR_array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
CHECK_NEW_array__Array(var64);
}
var67 = ((val* (*)(val*))(var64->class->vft[COLOR_string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
var_cname = var67;
}
} else {
var68 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var69 = ((val* (*)(val*))(var68->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var68) /* mangled_cname on <var68:MClassType>*/;
if (varonce70) {
var71 = varonce70;
} else {
var72 = "_";
var73 = 1;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_nitni_base__MMethod__short_cname]))(var_mproperty) /* short_cname on <var_mproperty:MProperty(MMethod)>*/;
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 3;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var69;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var71;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var75;
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
CHECK_NEW_array__Array(var76);
}
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
var_cname = var79;
}
var80 = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var80->class->vft[COLOR_list__List__init]))(var80) /* init on <var80:List[String]>*/;
CHECK_NEW_list__List(var80);
var_cparams = var80;
var81 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MProperty(MMethod)>*/;
var82 = !var81;
if (var82){
var83 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var84 = ((val* (*)(val*))(var83->class->vft[COLOR_nitni_base__MType__cname]))(var83) /* cname on <var83:MClassType>*/;
if (varonce85) {
var86 = varonce85;
} else {
var87 = " self";
var88 = 5;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 2;
var92 = NEW_array__NativeArray(var91, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var92)->values[0] = (val*) var84;
((struct instance_array__NativeArray*)var92)->values[1] = (val*) var86;
((void (*)(val*, val*, long))(var90->class->vft[COLOR_array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
CHECK_NEW_array__Array(var90);
}
var93 = ((val* (*)(val*))(var90->class->vft[COLOR_string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var93) /* add on <var_cparams:List[String]>*/;
} else {
}
var94 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__mparameters]))(var_signature) /* mparameters on <var_signature:nullable MSignature(MSignature)>*/;
var95 = ((val* (*)(val*))(var94->class->vft[COLOR_abstract_collection__Collection__iterator]))(var94) /* iterator on <var94:Array[MParameter]>*/;
for(;;) {
var96 = ((short int (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var95) /* is_ok on <var95:Iterator[nullable Object]>*/;
if(!var96) break;
var97 = ((val* (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__item]))(var95) /* item on <var95:Iterator[nullable Object]>*/;
var_p = var97;
var98 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var99 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var100 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var101 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__from_mmodule]))(self) /* from_mmodule on <self:MExplicitCall>*/;
var102 = 1;
var103 = ((val* (*)(val*, val*, val*, val*, short int))(var98->class->vft[COLOR_model__MType__resolve_for]))(var98, var99, var100, var101, var102) /* resolve_for on <var98:MType>*/;
var_param_mtype = var103;
var104 = ((val* (*)(val*))(var_param_mtype->class->vft[COLOR_nitni_base__MType__cname]))(var_param_mtype) /* cname on <var_param_mtype:MType>*/;
if (varonce105) {
var106 = varonce105;
} else {
var107 = " ";
var108 = 1;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
var111 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var111 = array_instance Array[Object] */
var112 = 3;
var113 = NEW_array__NativeArray(var112, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var113)->values[0] = (val*) var104;
((struct instance_array__NativeArray*)var113)->values[1] = (val*) var106;
((struct instance_array__NativeArray*)var113)->values[2] = (val*) var110;
((void (*)(val*, val*, long))(var111->class->vft[COLOR_array__Array__with_native]))(var111, var113, var112) /* with_native on <var111:Array[Object]>*/;
CHECK_NEW_array__Array(var111);
}
var114 = ((val* (*)(val*))(var111->class->vft[COLOR_string__Object__to_s]))(var111) /* to_s on <var111:Array[Object]>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var114) /* add on <var_cparams:List[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__next]))(var95) /* next on <var95:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var115 = NEW_array__Array(&type_array__Arraykernel__Object);
var116 = 7;
((void (*)(val*, long))(var115->class->vft[COLOR_array__Array__with_capacity]))(var115, var116) /* with_capacity on <var115:Array[Object]>*/;
CHECK_NEW_array__Array(var115);
var_ = var115;
if (varonce117) {
var118 = varonce117;
} else {
var119 = "";
var120 = 0;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var118) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_creturn_type) /* add on <var_:Array[Object]>*/;
if (varonce122) {
var123 = varonce122;
} else {
var124 = " ";
var125 = 1;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var123) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_cname) /* add on <var_:Array[Object]>*/;
if (varonce127) {
var128 = varonce127;
} else {
var129 = "( ";
var130 = 2;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var128) /* add on <var_:Array[Object]>*/;
if (varonce132) {
var133 = varonce132;
} else {
var134 = ", ";
var135 = 2;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
var137 = ((val* (*)(val*, val*))(var_cparams->class->vft[COLOR_string__Collection__join]))(var_cparams, var133) /* join on <var_cparams:List[String]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var137) /* add on <var_:Array[Object]>*/;
if (varonce138) {
var139 = varonce138;
} else {
var140 = " )";
var141 = 2;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var139) /* add on <var_:Array[Object]>*/;
var143 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var143;
goto RET_LABEL;
} else {
if (varonce144) {
var145 = varonce144;
} else {
var146 = "Type of callback from foreign code not yet supported.";
var147 = 53;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var145) /* print on <self:MExplicitCall>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 235);
exit(1);
}
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#csignature for (self: Object): String */
val* VIRTUAL_nitni_callbacks__MExplicitCall__csignature(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_callbacks__MExplicitCall__csignature(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#csignature_blind for (self: MExplicitCall): String */
val* nitni_callbacks__MExplicitCall__csignature_blind(val* self) {
val* var /* : String */;
val* var1 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : MPropDef */;
val* var4 /* : nullable MSignature */;
val* var_signature /* var signature: nullable MSignature */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MClassType */;
val* var9 /* : String */;
val* var_creturn_type /* var creturn_type: nullable Object */;
val* var10 /* : nullable MType */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : nullable MType */;
val* var_ret_mtype /* var ret_mtype: nullable MType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassType */;
val* var16 /* : MModule */;
short int var17 /* : Bool */;
val* var18 /* : MType */;
val* var19 /* : String */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
short int var32 /* : Bool */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : MClassType */;
val* var46 /* : String */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
val* var_cname /* var cname: nullable Object */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : MClassType */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : String */;
val* var68 /* : MClassType */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
val* var80 /* : List[String] */;
val* var_cparams /* var cparams: List[String] */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
val* var83 /* : MClassType */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : String */;
val* var94 /* : Array[MParameter] */;
val* var95 /* : Iterator[nullable Object] */;
short int var96 /* : Bool */;
val* var97 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var98 /* : MType */;
val* var99 /* : MClassType */;
val* var100 /* : MClassType */;
val* var101 /* : MModule */;
short int var102 /* : Bool */;
val* var103 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var111 /* : Array[Object] */;
long var112 /* : Int */;
val* var113 /* : NativeArray[Object] */;
val* var114 /* : String */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__mproperty]))(self) /* mproperty on <self:MExplicitCall>*/;
var_mproperty = var1;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var2 = 0;
} else {
var2 = var_mproperty->type->type_table[cltype] == idtype;
}
if (var2){
var3 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__intro]))(var_mproperty) /* intro on <var_mproperty:MProperty(MMethod)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MMethodDef__msignature]))(var3) /* msignature on <var3:MPropDef(MMethodDef)>*/;
var_signature = var4;
var5 = NULL;
if (var_signature == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 245);
exit(1);
}
var7 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MProperty(MMethod)>*/;
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_nitni_base__MType__cname_blind]))(var8) /* cname_blind on <var8:MClassType>*/;
var_creturn_type = var9;
} else {
var10 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__return_mtype]))(var_signature) /* return_mtype on <var_signature:nullable MSignature(MSignature)>*/;
var11 = NULL;
if (var10 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
var13 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__return_mtype]))(var_signature) /* return_mtype on <var_signature:nullable MSignature(MSignature)>*/;
var_ret_mtype = var13;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__from_mmodule]))(self) /* from_mmodule on <self:MExplicitCall>*/;
var17 = 1;
if (var_ret_mtype == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 252);
exit(1);
} else {
var18 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_ret_mtype, var14, var15, var16, var17) /* resolve_for on <var_ret_mtype:nullable MType>*/;
}
var_ret_mtype = var18;
var19 = ((val* (*)(val*))(var_ret_mtype->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_ret_mtype) /* cname_blind on <var_ret_mtype:nullable MType(MType)>*/;
var_creturn_type = var19;
} else {
if (varonce) {
var20 = varonce;
} else {
var21 = "void";
var22 = 4;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
var_creturn_type = var20;
}
}
var24 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MProperty(MMethod)>*/;
if (var24){
var26 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__name]))(var_mproperty) /* name on <var_mproperty:MProperty(MMethod)>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "init";
var30 = 4;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var28) /* == on <var26:String>*/;
if (var32) {
var25 = 1;
} else {
var33 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__name]))(var_mproperty) /* name on <var_mproperty:MProperty(MMethod)>*/;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "new";
var37 = 3;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = ((short int (*)(val*, val*))(var33->class->vft[COLOR_kernel__Object___61d_61d]))(var33, var35) /* == on <var33:String>*/;
var25 = var39;
}
if (var25){
if (varonce40) {
var41 = varonce40;
} else {
var42 = "new_";
var43 = 4;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var45) /* mangled_cname on <var45:MClassType>*/;
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 2;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var46;
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
CHECK_NEW_array__Array(var47);
}
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
var_cname = var50;
} else {
if (varonce51) {
var52 = varonce51;
} else {
var53 = "new_";
var54 = 4;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var56) /* mangled_cname on <var56:MClassType>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = "_";
var61 = 1;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_nitni_base__MMethod__short_cname]))(var_mproperty) /* short_cname on <var_mproperty:MProperty(MMethod)>*/;
var64 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 4;
var66 = NEW_array__NativeArray(var65, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var66)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var66)->values[1] = (val*) var57;
((struct instance_array__NativeArray*)var66)->values[2] = (val*) var59;
((struct instance_array__NativeArray*)var66)->values[3] = (val*) var63;
((void (*)(val*, val*, long))(var64->class->vft[COLOR_array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
CHECK_NEW_array__Array(var64);
}
var67 = ((val* (*)(val*))(var64->class->vft[COLOR_string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
var_cname = var67;
}
} else {
var68 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var69 = ((val* (*)(val*))(var68->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var68) /* mangled_cname on <var68:MClassType>*/;
if (varonce70) {
var71 = varonce70;
} else {
var72 = "_";
var73 = 1;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_nitni_base__MMethod__short_cname]))(var_mproperty) /* short_cname on <var_mproperty:MProperty(MMethod)>*/;
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 3;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var69;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var71;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var75;
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
CHECK_NEW_array__Array(var76);
}
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
var_cname = var79;
}
var80 = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var80->class->vft[COLOR_list__List__init]))(var80) /* init on <var80:List[String]>*/;
CHECK_NEW_list__List(var80);
var_cparams = var80;
var81 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MProperty(MMethod)>*/;
var82 = !var81;
if (var82){
var83 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var84 = ((val* (*)(val*))(var83->class->vft[COLOR_nitni_base__MType__cname_blind]))(var83) /* cname_blind on <var83:MClassType>*/;
if (varonce85) {
var86 = varonce85;
} else {
var87 = " self";
var88 = 5;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 2;
var92 = NEW_array__NativeArray(var91, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var92)->values[0] = (val*) var84;
((struct instance_array__NativeArray*)var92)->values[1] = (val*) var86;
((void (*)(val*, val*, long))(var90->class->vft[COLOR_array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
CHECK_NEW_array__Array(var90);
}
var93 = ((val* (*)(val*))(var90->class->vft[COLOR_string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var93) /* add on <var_cparams:List[String]>*/;
} else {
}
var94 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__mparameters]))(var_signature) /* mparameters on <var_signature:nullable MSignature(MSignature)>*/;
var95 = ((val* (*)(val*))(var94->class->vft[COLOR_abstract_collection__Collection__iterator]))(var94) /* iterator on <var94:Array[MParameter]>*/;
for(;;) {
var96 = ((short int (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var95) /* is_ok on <var95:Iterator[nullable Object]>*/;
if(!var96) break;
var97 = ((val* (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__item]))(var95) /* item on <var95:Iterator[nullable Object]>*/;
var_p = var97;
var98 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var99 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var100 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var101 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__from_mmodule]))(self) /* from_mmodule on <self:MExplicitCall>*/;
var102 = 1;
var103 = ((val* (*)(val*, val*, val*, val*, short int))(var98->class->vft[COLOR_model__MType__resolve_for]))(var98, var99, var100, var101, var102) /* resolve_for on <var98:MType>*/;
var_param_mtype = var103;
var104 = ((val* (*)(val*))(var_param_mtype->class->vft[COLOR_nitni_base__MType__cname_blind]))(var_param_mtype) /* cname_blind on <var_param_mtype:MType>*/;
if (varonce105) {
var106 = varonce105;
} else {
var107 = " ";
var108 = 1;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
var111 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var111 = array_instance Array[Object] */
var112 = 3;
var113 = NEW_array__NativeArray(var112, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var113)->values[0] = (val*) var104;
((struct instance_array__NativeArray*)var113)->values[1] = (val*) var106;
((struct instance_array__NativeArray*)var113)->values[2] = (val*) var110;
((void (*)(val*, val*, long))(var111->class->vft[COLOR_array__Array__with_native]))(var111, var113, var112) /* with_native on <var111:Array[Object]>*/;
CHECK_NEW_array__Array(var111);
}
var114 = ((val* (*)(val*))(var111->class->vft[COLOR_string__Object__to_s]))(var111) /* to_s on <var111:Array[Object]>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var114) /* add on <var_cparams:List[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__next]))(var95) /* next on <var95:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var115 = NEW_array__Array(&type_array__Arraykernel__Object);
var116 = 7;
((void (*)(val*, long))(var115->class->vft[COLOR_array__Array__with_capacity]))(var115, var116) /* with_capacity on <var115:Array[Object]>*/;
CHECK_NEW_array__Array(var115);
var_ = var115;
if (varonce117) {
var118 = varonce117;
} else {
var119 = "";
var120 = 0;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var118) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_creturn_type) /* add on <var_:Array[Object]>*/;
if (varonce122) {
var123 = varonce122;
} else {
var124 = " ";
var125 = 1;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var123) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_cname) /* add on <var_:Array[Object]>*/;
if (varonce127) {
var128 = varonce127;
} else {
var129 = "( ";
var130 = 2;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var128) /* add on <var_:Array[Object]>*/;
if (varonce132) {
var133 = varonce132;
} else {
var134 = ", ";
var135 = 2;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
var137 = ((val* (*)(val*, val*))(var_cparams->class->vft[COLOR_string__Collection__join]))(var_cparams, var133) /* join on <var_cparams:List[String]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var137) /* add on <var_:Array[Object]>*/;
if (varonce138) {
var139 = varonce138;
} else {
var140 = " )";
var141 = 2;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var139) /* add on <var_:Array[Object]>*/;
var143 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var143;
goto RET_LABEL;
} else {
if (varonce144) {
var145 = varonce144;
} else {
var146 = "Type of callback from foreign code not yet supported.";
var147 = 53;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var145) /* print on <self:MExplicitCall>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 281);
exit(1);
}
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#csignature_blind for (self: Object): String */
val* VIRTUAL_nitni_callbacks__MExplicitCall__csignature_blind(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_callbacks__MExplicitCall__csignature_blind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#hash for (self: MExplicitCall): Int */
long nitni_callbacks__MExplicitCall__hash(val* self) {
long var /* : Int */;
val* var1 /* : MClassType */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : MProperty */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_kernel__Object__hash]))(var1) /* hash on <var1:MClassType>*/;
var3 = 1024;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__mproperty]))(self) /* mproperty on <self:MExplicitCall>*/;
var5 = ((long (*)(val*))(var4->class->vft[COLOR_kernel__Object__hash]))(var4) /* hash on <var4:MProperty>*/;
{ /* Inline kernel#Int#* (var3,var5) */
var8 = var3 * var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
{ /* Inline kernel#Int#+ (var2,var6) */
var11 = var2 + var6;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#hash for (self: Object): Int */
long VIRTUAL_nitni_callbacks__MExplicitCall__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = nitni_callbacks__MExplicitCall__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#== for (self: MExplicitCall, nullable Object): Bool */
short int nitni_callbacks__MExplicitCall___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClassType */;
val* var5 /* : MClassType */;
short int var6 /* : Bool */;
short int var_7 /* var : Bool */;
val* var8 /* : MProperty */;
val* var9 /* : MProperty */;
short int var10 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa MExplicitCall */
cltype = type_nitni_callbacks__MExplicitCall.color;
idtype = type_nitni_callbacks__MExplicitCall.id;
if(var_o == NULL) {
var3 = 0;
} else {
if(cltype >= var_o->type->table_size) {
var3 = 0;
} else {
var3 = var_o->type->type_table[cltype] == idtype;
}
}
var_ = var3;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var5 = ((val* (*)(val*))(var_o->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(var_o) /* recv_mtype on <var_o:nullable Object(MExplicitCall)>*/;
var6 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var5) /* == on <var4:MClassType>*/;
var2 = var6;
} else {
var2 = var_;
}
var_7 = var2;
if (var2){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__mproperty]))(self) /* mproperty on <self:MExplicitCall>*/;
var9 = ((val* (*)(val*))(var_o->class->vft[COLOR_nitni_callbacks__MExplicitCall__mproperty]))(var_o) /* mproperty on <var_o:nullable Object(MExplicitCall)>*/;
var10 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_kernel__Object___61d_61d]))(var8, var9) /* == on <var8:MProperty>*/;
var1 = var10;
} else {
var1 = var_7;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_nitni_callbacks__MExplicitCall___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = nitni_callbacks__MExplicitCall___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#init for (self: MExplicitCall, MClassType, MProperty, MModule) */
void nitni_callbacks__MExplicitCall__init(val* self, val* p0, val* p1, val* p2) {
self->attrs[COLOR_nitni_callbacks__MExplicitCall___64drecv_mtype].val = p0; /* @recv_mtype on <self:MExplicitCall> */
self->attrs[COLOR_nitni_callbacks__MExplicitCall___64dmproperty].val = p1; /* @mproperty on <self:MExplicitCall> */
self->attrs[COLOR_nitni_callbacks__MExplicitCall___64dfrom_mmodule].val = p2; /* @from_mmodule on <self:MExplicitCall> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#init for (self: Object, MClassType, MProperty, MModule) */
void VIRTUAL_nitni_callbacks__MExplicitCall__init(val* self, val* p0, val* p1, val* p2) {
nitni_callbacks__MExplicitCall__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitSuper#from for (self: MExplicitSuper): MPropDef */
val* nitni_callbacks__MExplicitSuper__from(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_nitni_callbacks__MExplicitSuper___64dfrom].val; /* @from on <self:MExplicitSuper> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @from");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 292);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitSuper#from for (self: Object): MPropDef */
val* VIRTUAL_nitni_callbacks__MExplicitSuper__from(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = nitni_callbacks__MExplicitSuper__from(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitSuper#from= for (self: MExplicitSuper, MPropDef) */
void nitni_callbacks__MExplicitSuper__from_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__MExplicitSuper___64dfrom].val = p0; /* @from on <self:MExplicitSuper> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitSuper#from= for (self: Object, MPropDef) */
void VIRTUAL_nitni_callbacks__MExplicitSuper__from_61d(val* self, val* p0) {
nitni_callbacks__MExplicitSuper__from_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitSuper#csignature for (self: MExplicitSuper): String */
val* nitni_callbacks__MExplicitSuper__csignature(val* self) {
val* var /* : String */;
val* var1 /* : MPropDef */;
val* var2 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : MPropDef */;
val* var5 /* : nullable MSignature */;
val* var_signature /* var signature: nullable MSignature */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : nullable MType */;
val* var12 /* : String */;
val* var_creturn_type /* var creturn_type: nullable Object */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : MPropDef */;
val* var25 /* : MClassDef */;
val* var26 /* : MClass */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var_cname /* var cname: String */;
val* var40 /* : List[String] */;
val* var_cparams /* var cparams: List[String] */;
val* var41 /* : MPropDef */;
val* var42 /* : MClassDef */;
val* var43 /* : MClass */;
val* var44 /* : MClassType */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
val* var55 /* : Array[MParameter] */;
val* var56 /* : Iterator[nullable Object] */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var59 /* : MType */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var67 /* : Array[Object] */;
long var68 /* : Int */;
val* var69 /* : NativeArray[Object] */;
val* var70 /* : String */;
val* var71 /* : Array[Object] */;
long var72 /* : Int */;
val* var_73 /* var : Array[Object] */;
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
val* var100 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(self) /* from on <self:MExplicitSuper>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MPropDef__mproperty]))(var1) /* mproperty on <var1:MPropDef>*/;
var_mproperty = var2;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var3 = 0;
} else {
var3 = var_mproperty->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 299);
exit(1);
}
var4 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__intro]))(var_mproperty) /* intro on <var_mproperty:MProperty(MMethod)>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MMethodDef__msignature]))(var4) /* msignature on <var4:MPropDef(MMethodDef)>*/;
var_signature = var5;
var6 = NULL;
if (var_signature == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 302);
exit(1);
}
var8 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__return_mtype]))(var_signature) /* return_mtype on <var_signature:nullable MSignature(MSignature)>*/;
var9 = NULL;
if (var8 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
var11 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__return_mtype]))(var_signature) /* return_mtype on <var_signature:nullable MSignature(MSignature)>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 306);
exit(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_nitni_base__MType__cname]))(var11) /* cname on <var11:nullable MType>*/;
}
var_creturn_type = var12;
} else {
if (varonce) {
var13 = varonce;
} else {
var14 = "void";
var15 = 4;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
var_creturn_type = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
var18 = 5;
((void (*)(val*, long))(var17->class->vft[COLOR_array__Array__with_capacity]))(var17, var18) /* with_capacity on <var17:Array[Object]>*/;
CHECK_NEW_array__Array(var17);
var_ = var17;
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
var24 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(self) /* from on <self:MExplicitSuper>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_model__MPropDef__mclassdef]))(var24) /* mclassdef on <var24:MPropDef>*/;
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_model__MClassDef__mclass]))(var25) /* mclass on <var25:MClassDef>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_model__MClass__name]))(var26) /* name on <var26:MClass>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var27) /* add on <var_:Array[Object]>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "_";
var31 = 1;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var29) /* add on <var_:Array[Object]>*/;
var33 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_nitni_base__MMethod__short_cname]))(var_mproperty) /* short_cname on <var_mproperty:MProperty(MMethod)>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var33) /* add on <var_:Array[Object]>*/;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "___super";
var37 = 8;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var35) /* add on <var_:Array[Object]>*/;
var39 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_cname = var39;
var40 = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var40->class->vft[COLOR_list__List__init]))(var40) /* init on <var40:List[String]>*/;
CHECK_NEW_list__List(var40);
var_cparams = var40;
var41 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(self) /* from on <self:MExplicitSuper>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_model__MPropDef__mclassdef]))(var41) /* mclassdef on <var41:MPropDef>*/;
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_model__MClassDef__mclass]))(var42) /* mclass on <var42:MClassDef>*/;
var44 = ((val* (*)(val*))(var43->class->vft[COLOR_model__MClass__mclass_type]))(var43) /* mclass_type on <var43:MClass>*/;
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_nitni_base__MType__cname]))(var44) /* cname on <var44:MClassType>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = " self";
var49 = 5;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 2;
var53 = NEW_array__NativeArray(var52, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var53)->values[0] = (val*) var45;
((struct instance_array__NativeArray*)var53)->values[1] = (val*) var47;
((void (*)(val*, val*, long))(var51->class->vft[COLOR_array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
CHECK_NEW_array__Array(var51);
}
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var54) /* add on <var_cparams:List[String]>*/;
var55 = ((val* (*)(val*))(var_signature->class->vft[COLOR_model__MSignature__mparameters]))(var_signature) /* mparameters on <var_signature:nullable MSignature(MSignature)>*/;
var56 = ((val* (*)(val*))(var55->class->vft[COLOR_abstract_collection__Collection__iterator]))(var55) /* iterator on <var55:Array[MParameter]>*/;
for(;;) {
var57 = ((short int (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var56) /* is_ok on <var56:Iterator[nullable Object]>*/;
if(!var57) break;
var58 = ((val* (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__item]))(var56) /* item on <var56:Iterator[nullable Object]>*/;
var_p = var58;
var59 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var60 = ((val* (*)(val*))(var59->class->vft[COLOR_nitni_base__MType__cname]))(var59) /* cname on <var59:MType>*/;
if (varonce61) {
var62 = varonce61;
} else {
var63 = " ";
var64 = 1;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
var67 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var67 = array_instance Array[Object] */
var68 = 3;
var69 = NEW_array__NativeArray(var68, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var69)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var69)->values[1] = (val*) var62;
((struct instance_array__NativeArray*)var69)->values[2] = (val*) var66;
((void (*)(val*, val*, long))(var67->class->vft[COLOR_array__Array__with_native]))(var67, var69, var68) /* with_native on <var67:Array[Object]>*/;
CHECK_NEW_array__Array(var67);
}
var70 = ((val* (*)(val*))(var67->class->vft[COLOR_string__Object__to_s]))(var67) /* to_s on <var67:Array[Object]>*/;
((void (*)(val*, val*))(var_cparams->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_cparams, var70) /* add on <var_cparams:List[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__next]))(var56) /* next on <var56:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var71 = NEW_array__Array(&type_array__Arraykernel__Object);
var72 = 7;
((void (*)(val*, long))(var71->class->vft[COLOR_array__Array__with_capacity]))(var71, var72) /* with_capacity on <var71:Array[Object]>*/;
CHECK_NEW_array__Array(var71);
var_73 = var71;
if (varonce74) {
var75 = varonce74;
} else {
var76 = "";
var77 = 0;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
((void (*)(val*, val*))(var_73->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_73, var75) /* add on <var_73:Array[Object]>*/;
((void (*)(val*, val*))(var_73->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_73, var_creturn_type) /* add on <var_73:Array[Object]>*/;
if (varonce79) {
var80 = varonce79;
} else {
var81 = " ";
var82 = 1;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
((void (*)(val*, val*))(var_73->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_73, var80) /* add on <var_73:Array[Object]>*/;
((void (*)(val*, val*))(var_73->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_73, var_cname) /* add on <var_73:Array[Object]>*/;
if (varonce84) {
var85 = varonce84;
} else {
var86 = "( ";
var87 = 2;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
((void (*)(val*, val*))(var_73->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_73, var85) /* add on <var_73:Array[Object]>*/;
if (varonce89) {
var90 = varonce89;
} else {
var91 = ", ";
var92 = 2;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
var94 = ((val* (*)(val*, val*))(var_cparams->class->vft[COLOR_string__Collection__join]))(var_cparams, var90) /* join on <var_cparams:List[String]>*/;
((void (*)(val*, val*))(var_73->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_73, var94) /* add on <var_73:Array[Object]>*/;
if (varonce95) {
var96 = varonce95;
} else {
var97 = " )";
var98 = 2;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
((void (*)(val*, val*))(var_73->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_73, var96) /* add on <var_73:Array[Object]>*/;
var100 = ((val* (*)(val*))(var_73->class->vft[COLOR_string__Object__to_s]))(var_73) /* to_s on <var_73:Array[Object]>*/;
var = var100;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitSuper#csignature for (self: Object): String */
val* VIRTUAL_nitni_callbacks__MExplicitSuper__csignature(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_callbacks__MExplicitSuper__csignature(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitSuper#hash for (self: MExplicitSuper): Int */
long nitni_callbacks__MExplicitSuper__hash(val* self) {
long var /* : Int */;
val* var1 /* : MPropDef */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(self) /* from on <self:MExplicitSuper>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_kernel__Object__hash]))(var1) /* hash on <var1:MPropDef>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitSuper#hash for (self: Object): Int */
long VIRTUAL_nitni_callbacks__MExplicitSuper__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = nitni_callbacks__MExplicitSuper__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitSuper#== for (self: MExplicitSuper, nullable Object): Bool */
short int nitni_callbacks__MExplicitSuper___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : MPropDef */;
val* var4 /* : MPropDef */;
short int var5 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa MExplicitSuper */
cltype = type_nitni_callbacks__MExplicitSuper.color;
idtype = type_nitni_callbacks__MExplicitSuper.id;
if(var_o == NULL) {
var2 = 0;
} else {
if(cltype >= var_o->type->table_size) {
var2 = 0;
} else {
var2 = var_o->type->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(self) /* from on <self:MExplicitSuper>*/;
var4 = ((val* (*)(val*))(var_o->class->vft[COLOR_nitni_callbacks__MExplicitSuper__from]))(var_o) /* from on <var_o:nullable Object(MExplicitSuper)>*/;
var5 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___61d_61d]))(var3, var4) /* == on <var3:MPropDef>*/;
var1 = var5;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitSuper#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_nitni_callbacks__MExplicitSuper___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = nitni_callbacks__MExplicitSuper___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitSuper#init for (self: MExplicitSuper, MPropDef) */
void nitni_callbacks__MExplicitSuper__init(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__MExplicitSuper___64dfrom].val = p0; /* @from on <self:MExplicitSuper> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitSuper#init for (self: Object, MPropDef) */
void VIRTUAL_nitni_callbacks__MExplicitSuper__init(val* self, val* p0) {
nitni_callbacks__MExplicitSuper__init(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCast#from for (self: MExplicitCast): MType */
val* nitni_callbacks__MExplicitCast__from(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitni_callbacks__MExplicitCast___64dfrom].val; /* @from on <self:MExplicitCast> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @from");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 329);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#from for (self: Object): MType */
val* VIRTUAL_nitni_callbacks__MExplicitCast__from(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = nitni_callbacks__MExplicitCast__from(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#from= for (self: MExplicitCast, MType) */
void nitni_callbacks__MExplicitCast__from_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__MExplicitCast___64dfrom].val = p0; /* @from on <self:MExplicitCast> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCast#from= for (self: Object, MType) */
void VIRTUAL_nitni_callbacks__MExplicitCast__from_61d(val* self, val* p0) {
nitni_callbacks__MExplicitCast__from_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCast#to for (self: MExplicitCast): MType */
val* nitni_callbacks__MExplicitCast__to(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitni_callbacks__MExplicitCast___64dto].val; /* @to on <self:MExplicitCast> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 330);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#to for (self: Object): MType */
val* VIRTUAL_nitni_callbacks__MExplicitCast__to(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = nitni_callbacks__MExplicitCast__to(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#to= for (self: MExplicitCast, MType) */
void nitni_callbacks__MExplicitCast__to_61d(val* self, val* p0) {
self->attrs[COLOR_nitni_callbacks__MExplicitCast___64dto].val = p0; /* @to on <self:MExplicitCast> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCast#to= for (self: Object, MType) */
void VIRTUAL_nitni_callbacks__MExplicitCast__to_61d(val* self, val* p0) {
nitni_callbacks__MExplicitCast__to_61d(self, p0);
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCast#check_cname for (self: MExplicitCast): String */
val* nitni_callbacks__MExplicitCast__check_cname(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MType */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : MType */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 5;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__from]))(self) /* from on <self:MExplicitCast>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var7) /* mangled_cname on <var7:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "_is_a_";
var12 = 6;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__to]))(self) /* to on <self:MExplicitCast>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var14) /* mangled_cname on <var14:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var15) /* add on <var_:Array[Object]>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "";
var19 = 0;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var17) /* add on <var_:Array[Object]>*/;
var21 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#check_cname for (self: Object): String */
val* VIRTUAL_nitni_callbacks__MExplicitCast__check_cname(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_callbacks__MExplicitCast__check_cname(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#check_csignature for (self: MExplicitCast): String */
val* nitni_callbacks__MExplicitCast__check_csignature(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : MType */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 5;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "int ";
var5 = 4;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__check_cname]))(self) /* check_cname on <self:MExplicitCast>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "(";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__from]))(self) /* from on <self:MExplicitCast>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_nitni_base__MType__cname]))(var13) /* cname on <var13:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = " from)";
var18 = 6;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#check_csignature for (self: Object): String */
val* VIRTUAL_nitni_callbacks__MExplicitCast__check_csignature(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_callbacks__MExplicitCast__check_csignature(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#check_csignature_blind for (self: MExplicitCast): String */
val* nitni_callbacks__MExplicitCast__check_csignature_blind(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : MType */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 5;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "int ";
var5 = 4;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__check_cname]))(self) /* check_cname on <self:MExplicitCast>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "(";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__from]))(self) /* from on <self:MExplicitCast>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_nitni_base__MType__cname_blind]))(var13) /* cname_blind on <var13:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = " from)";
var18 = 6;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#check_csignature_blind for (self: Object): String */
val* VIRTUAL_nitni_callbacks__MExplicitCast__check_csignature_blind(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_callbacks__MExplicitCast__check_csignature_blind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#cast_cname for (self: MExplicitCast): String */
val* nitni_callbacks__MExplicitCast__cast_cname(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MType */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : MType */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 5;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__from]))(self) /* from on <self:MExplicitCast>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var7) /* mangled_cname on <var7:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "_as_";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__to]))(self) /* to on <self:MExplicitCast>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_nitni_base__MType__mangled_cname]))(var14) /* mangled_cname on <var14:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var15) /* add on <var_:Array[Object]>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "";
var19 = 0;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var17) /* add on <var_:Array[Object]>*/;
var21 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#cast_cname for (self: Object): String */
val* VIRTUAL_nitni_callbacks__MExplicitCast__cast_cname(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_callbacks__MExplicitCast__cast_cname(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#cast_csignature for (self: MExplicitCast): String */
val* nitni_callbacks__MExplicitCast__cast_csignature(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MType */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : MType */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 7;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__to]))(self) /* to on <self:MExplicitCast>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_nitni_base__MType__cname]))(var7) /* cname on <var7:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = " ";
var12 = 1;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__cast_cname]))(self) /* cast_cname on <self:MExplicitCast>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "(";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__from]))(self) /* from on <self:MExplicitCast>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_nitni_base__MType__cname]))(var20) /* cname on <var20:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var21) /* add on <var_:Array[Object]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = " from)";
var25 = 6;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var23) /* add on <var_:Array[Object]>*/;
var27 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#cast_csignature for (self: Object): String */
val* VIRTUAL_nitni_callbacks__MExplicitCast__cast_csignature(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_callbacks__MExplicitCast__cast_csignature(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#cast_csignature_blind for (self: MExplicitCast): String */
val* nitni_callbacks__MExplicitCast__cast_csignature_blind(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MType */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : MType */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 7;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__to]))(self) /* to on <self:MExplicitCast>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_nitni_base__MType__cname_blind]))(var7) /* cname_blind on <var7:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = " ";
var12 = 1;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__cast_cname]))(self) /* cast_cname on <self:MExplicitCast>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "(";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__from]))(self) /* from on <self:MExplicitCast>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_nitni_base__MType__cname_blind]))(var20) /* cname_blind on <var20:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var21) /* add on <var_:Array[Object]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = " from)";
var25 = 6;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var23) /* add on <var_:Array[Object]>*/;
var27 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#cast_csignature_blind for (self: Object): String */
val* VIRTUAL_nitni_callbacks__MExplicitCast__cast_csignature_blind(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = nitni_callbacks__MExplicitCast__cast_csignature_blind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#hash for (self: MExplicitCast): Int */
long nitni_callbacks__MExplicitCast__hash(val* self) {
long var /* : Int */;
val* var1 /* : MType */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : MType */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__from]))(self) /* from on <self:MExplicitCast>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_kernel__Object__hash]))(var1) /* hash on <var1:MType>*/;
var3 = 1024;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__to]))(self) /* to on <self:MExplicitCast>*/;
var5 = ((long (*)(val*))(var4->class->vft[COLOR_kernel__Object__hash]))(var4) /* hash on <var4:MType>*/;
{ /* Inline kernel#Int#* (var3,var5) */
var8 = var3 * var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
{ /* Inline kernel#Int#+ (var2,var6) */
var11 = var2 + var6;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#hash for (self: Object): Int */
long VIRTUAL_nitni_callbacks__MExplicitCast__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = nitni_callbacks__MExplicitCast__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#== for (self: MExplicitCast, nullable Object): Bool */
short int nitni_callbacks__MExplicitCast___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MType */;
val* var5 /* : MType */;
short int var6 /* : Bool */;
short int var_7 /* var : Bool */;
val* var8 /* : MType */;
val* var9 /* : MType */;
short int var10 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa MExplicitCast */
cltype = type_nitni_callbacks__MExplicitCast.color;
idtype = type_nitni_callbacks__MExplicitCast.id;
if(var_o == NULL) {
var3 = 0;
} else {
if(cltype >= var_o->type->table_size) {
var3 = 0;
} else {
var3 = var_o->type->type_table[cltype] == idtype;
}
}
var_ = var3;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__from]))(self) /* from on <self:MExplicitCast>*/;
var5 = ((val* (*)(val*))(var_o->class->vft[COLOR_nitni_callbacks__MExplicitCast__from]))(var_o) /* from on <var_o:nullable Object(MExplicitCast)>*/;
var6 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var5) /* == on <var4:MType>*/;
var2 = var6;
} else {
var2 = var_;
}
var_7 = var2;
if (var2){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCast__to]))(self) /* to on <self:MExplicitCast>*/;
var9 = ((val* (*)(val*))(var_o->class->vft[COLOR_nitni_callbacks__MExplicitCast__to]))(var_o) /* to on <var_o:nullable Object(MExplicitCast)>*/;
var10 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_kernel__Object___61d_61d]))(var8, var9) /* == on <var8:MType>*/;
var1 = var10;
} else {
var1 = var_7;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_nitni_callbacks__MExplicitCast___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = nitni_callbacks__MExplicitCast___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#init for (self: MExplicitCast, MType, MType) */
void nitni_callbacks__MExplicitCast__init(val* self, val* p0, val* p1) {
self->attrs[COLOR_nitni_callbacks__MExplicitCast___64dfrom].val = p0; /* @from on <self:MExplicitCast> */
self->attrs[COLOR_nitni_callbacks__MExplicitCast___64dto].val = p1; /* @to on <self:MExplicitCast> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCast#init for (self: Object, MType, MType) */
void VIRTUAL_nitni_callbacks__MExplicitCast__init(val* self, val* p0, val* p1) {
nitni_callbacks__MExplicitCast__init(self, p0, p1);
RET_LABEL:;
}
/* method nitni_callbacks#AExternCall#verify_and_collect for (self: AExternCall, AExternPropdef, ForeignCallbackSet, ToolContext) */
void nitni_callbacks__AExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "verify_and_collect", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 361);
exit(1);
RET_LABEL:;
}
/* method nitni_callbacks#AExternCall#verify_and_collect for (self: Object, AExternPropdef, ForeignCallbackSet, ToolContext) */
void VIRTUAL_nitni_callbacks__AExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
nitni_callbacks__AExternCall__verify_and_collect(self, p0, p1, p2);
RET_LABEL:;
}
/* method nitni_callbacks#ALocalPropExternCall#verify_and_collect for (self: ALocalPropExternCall, AExternPropdef, ForeignCallbackSet, ToolContext) */
void nitni_callbacks__ALocalPropExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AExternPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable MPropDef */;
val* var1 /* : MClassDef */;
val* var2 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var3 /* : nullable MPropDef */;
val* var4 /* : MClassDef */;
val* var5 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var6 /* : AMethid */;
val* var7 /* : String */;
val* var_m_name /* var m_name: String */;
val* var8 /* : ModelBuilder */;
val* var9 /* : nullable MProperty */;
val* var_method /* var method: nullable MProperty */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : Location */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
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
val* var26 /* : MExplicitCall */;
val* var_explicit_call /* var explicit_call: MExplicitCall */;
val* var27 /* : Set[MExplicitCall] */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
var = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:AExternPropdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 368);
exit(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MPropDef__mclassdef]))(var) /* mclassdef on <var:nullable MPropDef(nullable MMethodDef)>*/;
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassDef__mmodule]))(var1) /* mmodule on <var1:MClassDef>*/;
var_mmodule = var2;
var3 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:AExternPropdef>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 369);
exit(1);
} else {
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MPropDef__mclassdef]))(var3) /* mclassdef on <var3:nullable MPropDef(nullable MMethodDef)>*/;
}
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MClassDef__bound_mtype]))(var4) /* bound_mtype on <var4:MClassDef>*/;
var_mclass_type = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALocalPropExternCall__n_methid]))(self) /* n_methid on <self:ALocalPropExternCall>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_modelize_property__Prod__collect_text]))(var6) /* collect_text on <var6:AMethid>*/;
var_m_name = var7;
var8 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var_toolcontext) /* modelbuilder on <var_toolcontext:ToolContext>*/;
var9 = ((val* (*)(val*, val*, val*, val*, val*))(var8->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2]))(var8, self, var_mmodule, var_mclass_type, var_m_name) /* try_get_mproperty_by_name2 on <var8:ModelBuilder>*/;
var_method = var9;
var10 = NULL;
if (var_method == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (var11){
var12 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:ALocalPropExternCall>*/;
if (varonce) {
var13 = varonce;
} else {
var14 = "Local method ";
var15 = 13;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " not found.";
var20 = 11;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 3;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var_m_name;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var18;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
CHECK_NEW_array__Array(var22);
}
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__error]))(var_toolcontext, var12, var25) /* error on <var_toolcontext:ToolContext>*/;
goto RET_LABEL;
} else {
}
var26 = NEW_nitni_callbacks__MExplicitCall(&type_nitni_callbacks__MExplicitCall);
((void (*)(val*, val*, val*, val*))(var26->class->vft[COLOR_nitni_callbacks__MExplicitCall__init]))(var26, var_mclass_type, var_method, var_mmodule) /* init on <var26:MExplicitCall>*/;
CHECK_NEW_nitni_callbacks__MExplicitCall(var26);
var_explicit_call = var26;
var27 = ((val* (*)(val*))(var_callback_set->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__callbacks]))(var_callback_set) /* callbacks on <var_callback_set:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var27->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var27, var_explicit_call) /* add on <var27:Set[MExplicitCall]>*/;
((void (*)(val*, val*, val*))(var_explicit_call->class->vft[COLOR_nitni_callbacks__MExplicitCall__fill_type_for]))(var_explicit_call, var_callback_set, var_mmodule) /* fill_type_for on <var_explicit_call:MExplicitCall>*/;
RET_LABEL:;
}
/* method nitni_callbacks#ALocalPropExternCall#verify_and_collect for (self: Object, AExternPropdef, ForeignCallbackSet, ToolContext) */
void VIRTUAL_nitni_callbacks__ALocalPropExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
nitni_callbacks__ALocalPropExternCall__verify_and_collect(self, p0, p1, p2);
RET_LABEL:;
}
/* method nitni_callbacks#AFullPropExternCall#verify_and_collect for (self: AFullPropExternCall, AExternPropdef, ForeignCallbackSet, ToolContext) */
void nitni_callbacks__AFullPropExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AExternPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable MPropDef */;
val* var1 /* : MClassDef */;
val* var2 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var3 /* : nullable MPropDef */;
val* var4 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var5 /* : ModelBuilder */;
val* var6 /* : HashMap[MClassDef, AClassdef] */;
val* var7 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var8 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var9 /* : ModelBuilder */;
val* var10 /* : AType */;
val* var11 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : MType */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : Location */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : AType */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var37 /* : NativeArray[Object] */;
val* var38 /* : String */;
val* var39 /* : AMethid */;
val* var40 /* : String */;
val* var_m_name /* var m_name: String */;
val* var41 /* : ModelBuilder */;
val* var42 /* : nullable MProperty */;
val* var_method /* var method: nullable MProperty */;
val* var43 /* : null */;
short int var44 /* : Bool */;
val* var45 /* : Location */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : AType */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Object] */;
val* var66 /* : String */;
val* var67 /* : MExplicitCall */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name;
val* var_explicit_call /* var explicit_call: MExplicitCall */;
val* var71 /* : Set[MExplicitCall] */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
var = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:AExternPropdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 389);
exit(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MPropDef__mclassdef]))(var) /* mclassdef on <var:nullable MPropDef(nullable MMethodDef)>*/;
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassDef__mmodule]))(var1) /* mmodule on <var1:MClassDef>*/;
var_mmodule = var2;
var3 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:AExternPropdef>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 390);
exit(1);
} else {
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MPropDef__mclassdef]))(var3) /* mclassdef on <var3:nullable MPropDef(nullable MMethodDef)>*/;
}
var_mclassdef = var4;
var5 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var_toolcontext) /* modelbuilder on <var_toolcontext:ToolContext>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var5) /* mclassdef2nclassdef on <var5:ModelBuilder>*/;
var7 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var6, var_mclassdef) /* [] on <var6:HashMap[MClassDef, AClassdef]>*/;
var_nclassdef = var7;
var8 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_mclassdef) /* bound_mtype on <var_mclassdef:MClassDef>*/;
var_mclass_type = var8;
var9 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var_toolcontext) /* modelbuilder on <var_toolcontext:ToolContext>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AFullPropExternCall__n_type]))(self) /* n_type on <self:AFullPropExternCall>*/;
var11 = ((val* (*)(val*, val*, val*))(var9->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(var9, var_nclassdef, var10) /* resolve_mtype on <var9:ModelBuilder>*/;
var_mtype = var11;
var12 = NULL;
if (var_mtype == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (var13){
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MParameterType */
cltype = type_model__MParameterType.color;
idtype = type_model__MParameterType.id;
if(cltype >= var_mtype->type->table_size) {
var15 = 0;
} else {
var15 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var15;
if (var15){
var14 = var_;
} else {
/* <var_mtype:nullable MType(MType)> isa MVirtualType */
cltype17 = type_model__MVirtualType.color;
idtype18 = type_model__MVirtualType.id;
if(cltype17 >= var_mtype->type->table_size) {
var16 = 0;
} else {
var16 = var_mtype->type->type_table[cltype17] == idtype18;
}
var14 = var16;
}
if (var14){
if (var_mtype == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 398);
exit(1);
} else {
var19 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var_mmodule, var_mclass_type) /* anchor_to on <var_mtype:nullable MType>*/;
}
var_mtype = var19;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MNullableType */
cltype21 = type_model__MNullableType.color;
idtype22 = type_model__MNullableType.id;
if(cltype21 >= var_mtype->type->table_size) {
var20 = 0;
} else {
var20 = var_mtype->type->type_table[cltype21] == idtype22;
}
if (var20){
var23 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AFullPropExternCall>*/;
if (varonce) {
var24 = varonce;
} else {
var25 = "Type ";
var26 = 5;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
var28 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AFullPropExternCall__n_type]))(self) /* n_type on <self:AFullPropExternCall>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_modelize_property__Prod__collect_text]))(var28) /* collect_text on <var28:AType>*/;
if (varonce30) {
var31 = varonce30;
} else {
var32 = " is nullable and thus cannot be the receiver.";
var33 = 45;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var35 = array_instance Array[Object] */
var36 = 3;
var37 = NEW_array__NativeArray(var36, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var37)->values[0] = (val*) var24;
((struct instance_array__NativeArray*)var37)->values[1] = (val*) var29;
((struct instance_array__NativeArray*)var37)->values[2] = (val*) var31;
((void (*)(val*, val*, long))(var35->class->vft[COLOR_array__Array__with_native]))(var35, var37, var36) /* with_native on <var35:Array[Object]>*/;
CHECK_NEW_array__Array(var35);
}
var38 = ((val* (*)(val*))(var35->class->vft[COLOR_string__Object__to_s]))(var35) /* to_s on <var35:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__error]))(var_toolcontext, var23, var38) /* error on <var_toolcontext:ToolContext>*/;
goto RET_LABEL;
} else {
}
var39 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AFullPropExternCall__n_methid]))(self) /* n_methid on <self:AFullPropExternCall>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_modelize_property__Prod__collect_text]))(var39) /* collect_text on <var39:AMethid>*/;
var_m_name = var40;
var41 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var_toolcontext) /* modelbuilder on <var_toolcontext:ToolContext>*/;
var42 = ((val* (*)(val*, val*, val*, val*, val*))(var41->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2]))(var41, self, var_mmodule, var_mtype, var_m_name) /* try_get_mproperty_by_name2 on <var41:ModelBuilder>*/;
var_method = var42;
var43 = NULL;
if (var_method == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (var44){
var45 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AFullPropExternCall>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "Method ";
var49 = 7;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = " not found in ";
var54 = 14;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AFullPropExternCall__n_type]))(self) /* n_type on <self:AFullPropExternCall>*/;
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_modelize_property__Prod__collect_text]))(var56) /* collect_text on <var56:AType>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = ".";
var61 = 1;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 5;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var47;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var_m_name;
((struct instance_array__NativeArray*)var65)->values[2] = (val*) var52;
((struct instance_array__NativeArray*)var65)->values[3] = (val*) var57;
((struct instance_array__NativeArray*)var65)->values[4] = (val*) var59;
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
CHECK_NEW_array__Array(var63);
}
var66 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__error]))(var_toolcontext, var45, var66) /* error on <var_toolcontext:ToolContext>*/;
goto RET_LABEL;
} else {
}
var67 = NEW_nitni_callbacks__MExplicitCall(&type_nitni_callbacks__MExplicitCall);
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype69 = type_model__MClassType.color;
idtype70 = type_model__MClassType.id;
if(cltype69 >= var_mtype->type->table_size) {
var68 = 0;
} else {
var68 = var_mtype->type->type_table[cltype69] == idtype70;
}
if (!var68) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 415);
exit(1);
}
((void (*)(val*, val*, val*, val*))(var67->class->vft[COLOR_nitni_callbacks__MExplicitCall__init]))(var67, var_mtype, var_method, var_mmodule) /* init on <var67:MExplicitCall>*/;
CHECK_NEW_nitni_callbacks__MExplicitCall(var67);
var_explicit_call = var67;
var71 = ((val* (*)(val*))(var_callback_set->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__callbacks]))(var_callback_set) /* callbacks on <var_callback_set:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var71->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var71, var_explicit_call) /* add on <var71:Set[MExplicitCall]>*/;
((void (*)(val*, val*, val*))(var_explicit_call->class->vft[COLOR_nitni_callbacks__MExplicitCall__fill_type_for]))(var_explicit_call, var_callback_set, var_mmodule) /* fill_type_for on <var_explicit_call:MExplicitCall>*/;
RET_LABEL:;
}
/* method nitni_callbacks#AFullPropExternCall#verify_and_collect for (self: Object, AExternPropdef, ForeignCallbackSet, ToolContext) */
void VIRTUAL_nitni_callbacks__AFullPropExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
nitni_callbacks__AFullPropExternCall__verify_and_collect(self, p0, p1, p2);
RET_LABEL:;
}
/* method nitni_callbacks#AInitPropExternCall#verify_and_collect for (self: AInitPropExternCall, AExternPropdef, ForeignCallbackSet, ToolContext) */
void nitni_callbacks__AInitPropExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AExternPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable MPropDef */;
val* var1 /* : MClassDef */;
val* var2 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var3 /* : nullable MPropDef */;
val* var4 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var5 /* : ModelBuilder */;
val* var6 /* : HashMap[MClassDef, AClassdef] */;
val* var7 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var8 /* : ModelBuilder */;
val* var9 /* : AType */;
val* var10 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var14 /* : Bool */;
val* var15 /* : Location */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : AType */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var_meth_name /* var meth_name: String */;
val* var36 /* : ModelBuilder */;
val* var37 /* : nullable MProperty */;
val* var_meth /* var meth: nullable MProperty */;
val* var38 /* : null */;
short int var39 /* : Bool */;
val* var40 /* : Location */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : AType */;
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
val* var62 /* : MExplicitCall */;
val* var_explicit_call /* var explicit_call: MExplicitCall */;
val* var63 /* : Set[MExplicitCall] */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
var = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:AExternPropdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 424);
exit(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MPropDef__mclassdef]))(var) /* mclassdef on <var:nullable MPropDef(nullable MMethodDef)>*/;
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassDef__mmodule]))(var1) /* mmodule on <var1:MClassDef>*/;
var_mmodule = var2;
var3 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:AExternPropdef>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 425);
exit(1);
} else {
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MPropDef__mclassdef]))(var3) /* mclassdef on <var3:nullable MPropDef(nullable MMethodDef)>*/;
}
var_mclassdef = var4;
var5 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var_toolcontext) /* modelbuilder on <var_toolcontext:ToolContext>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var5) /* mclassdef2nclassdef on <var5:ModelBuilder>*/;
var7 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var6, var_mclassdef) /* [] on <var6:HashMap[MClassDef, AClassdef]>*/;
var_nclassdef = var7;
var8 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var_toolcontext) /* modelbuilder on <var_toolcontext:ToolContext>*/;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AInitPropExternCall__n_type]))(self) /* n_type on <self:AInitPropExternCall>*/;
var10 = ((val* (*)(val*, val*, val*))(var8->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(var8, var_nclassdef, var9) /* resolve_mtype on <var8:ModelBuilder>*/;
var_mtype = var10;
var11 = NULL;
if (var_mtype == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (var12){
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var13 = 0;
} else {
var13 = var_mtype->type->type_table[cltype] == idtype;
}
var14 = !var13;
if (var14){
var15 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AInitPropExternCall>*/;
if (varonce) {
var16 = varonce;
} else {
var17 = "Type ";
var18 = 5;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
var20 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AInitPropExternCall__n_type]))(self) /* n_type on <self:AInitPropExternCall>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_modelize_property__Prod__collect_text]))(var20) /* collect_text on <var20:AType>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = " is not a class and thus cannot be used to instanciate a new instance.";
var25 = 70;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var23;
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
CHECK_NEW_array__Array(var27);
}
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__error]))(var_toolcontext, var15, var30) /* error on <var_toolcontext:ToolContext>*/;
goto RET_LABEL;
} else {
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "init";
var34 = 4;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var_meth_name = var32;
var36 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var_toolcontext) /* modelbuilder on <var_toolcontext:ToolContext>*/;
var37 = ((val* (*)(val*, val*, val*, val*, val*))(var36->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2]))(var36, self, var_mmodule, var_mtype, var_meth_name) /* try_get_mproperty_by_name2 on <var36:ModelBuilder>*/;
var_meth = var37;
var38 = NULL;
if (var_meth == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (var39){
var40 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AInitPropExternCall>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Method ";
var44 = 7;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = " not found in ";
var49 = 14;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AInitPropExternCall__n_type]))(self) /* n_type on <self:AInitPropExternCall>*/;
var52 = ((val* (*)(val*))(var51->class->vft[COLOR_modelize_property__Prod__collect_text]))(var51) /* collect_text on <var51:AType>*/;
if (varonce53) {
var54 = varonce53;
} else {
var55 = ".";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 5;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var42;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var_meth_name;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var47;
((struct instance_array__NativeArray*)var60)->values[3] = (val*) var52;
((struct instance_array__NativeArray*)var60)->values[4] = (val*) var54;
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
CHECK_NEW_array__Array(var58);
}
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__error]))(var_toolcontext, var40, var61) /* error on <var_toolcontext:ToolContext>*/;
goto RET_LABEL;
} else {
}
var62 = NEW_nitni_callbacks__MExplicitCall(&type_nitni_callbacks__MExplicitCall);
((void (*)(val*, val*, val*, val*))(var62->class->vft[COLOR_nitni_callbacks__MExplicitCall__init]))(var62, var_mtype, var_meth, var_mmodule) /* init on <var62:MExplicitCall>*/;
CHECK_NEW_nitni_callbacks__MExplicitCall(var62);
var_explicit_call = var62;
var63 = ((val* (*)(val*))(var_callback_set->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__callbacks]))(var_callback_set) /* callbacks on <var_callback_set:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var63, var_explicit_call) /* add on <var63:Set[MExplicitCall]>*/;
((void (*)(val*, val*, val*))(var_explicit_call->class->vft[COLOR_nitni_callbacks__MExplicitCall__fill_type_for]))(var_explicit_call, var_callback_set, var_mmodule) /* fill_type_for on <var_explicit_call:MExplicitCall>*/;
RET_LABEL:;
}
/* method nitni_callbacks#AInitPropExternCall#verify_and_collect for (self: Object, AExternPropdef, ForeignCallbackSet, ToolContext) */
void VIRTUAL_nitni_callbacks__AInitPropExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
nitni_callbacks__AInitPropExternCall__verify_and_collect(self, p0, p1, p2);
RET_LABEL:;
}
/* method nitni_callbacks#ASuperExternCall#verify_and_collect for (self: ASuperExternCall, AExternPropdef, ForeignCallbackSet, ToolContext) */
void nitni_callbacks__ASuperExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AExternPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : Set[MExplicitSuper] */;
val* var1 /* : MExplicitSuper */;
val* var2 /* : nullable MPropDef */;
val* var3 /* : Set[MType] */;
val* var4 /* : nullable MPropDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClass */;
val* var7 /* : MClassType */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
var = ((val* (*)(val*))(var_callback_set->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__supers]))(var_callback_set) /* supers on <var_callback_set:ForeignCallbackSet>*/;
var1 = NEW_nitni_callbacks__MExplicitSuper(&type_nitni_callbacks__MExplicitSuper);
var2 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:AExternPropdef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 453);
exit(1);
}
((void (*)(val*, val*))(var1->class->vft[COLOR_nitni_callbacks__MExplicitSuper__init]))(var1, var2) /* init on <var1:MExplicitSuper>*/;
CHECK_NEW_nitni_callbacks__MExplicitSuper(var1);
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, var1) /* add on <var:Set[MExplicitSuper]>*/;
var3 = ((val* (*)(val*))(var_callback_set->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var_callback_set) /* types on <var_callback_set:ForeignCallbackSet>*/;
var4 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:AExternPropdef>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 454);
exit(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MPropDef__mclassdef]))(var4) /* mclassdef on <var4:nullable MPropDef(nullable MMethodDef)>*/;
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClassDef__mclass]))(var5) /* mclass on <var5:MClassDef>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_model__MClass__mclass_type]))(var6) /* mclass_type on <var6:MClass>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var3, var7) /* add on <var3:Set[MType]>*/;
RET_LABEL:;
}
/* method nitni_callbacks#ASuperExternCall#verify_and_collect for (self: Object, AExternPropdef, ForeignCallbackSet, ToolContext) */
void VIRTUAL_nitni_callbacks__ASuperExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
nitni_callbacks__ASuperExternCall__verify_and_collect(self, p0, p1, p2);
RET_LABEL:;
}
/* method nitni_callbacks#ACastExternCall#from_mtype for (self: ACastExternCall): MType */
val* nitni_callbacks__ACastExternCall__from_mtype(val* self) {
val* var /* : MType */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "from_mtype", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 459);
exit(1);
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ACastExternCall#from_mtype for (self: Object): MType */
val* VIRTUAL_nitni_callbacks__ACastExternCall__from_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = nitni_callbacks__ACastExternCall__from_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ACastExternCall#to_mtype for (self: ACastExternCall): MType */
val* nitni_callbacks__ACastExternCall__to_mtype(val* self) {
val* var /* : MType */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "to_mtype", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 460);
exit(1);
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ACastExternCall#to_mtype for (self: Object): MType */
val* VIRTUAL_nitni_callbacks__ACastExternCall__to_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = nitni_callbacks__ACastExternCall__to_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ACastExternCall#verify_and_collect for (self: ACastExternCall, AExternPropdef, ForeignCallbackSet, ToolContext) */
void nitni_callbacks__ACastExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AExternPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : MType */;
val* var_from /* var from: MType */;
val* var1 /* : MType */;
val* var_to /* var to: MType */;
val* var2 /* : Set[MType] */;
val* var3 /* : Set[MType] */;
val* var4 /* : Set[MExplicitCast] */;
val* var5 /* : MExplicitCast */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
var = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__ACastExternCall__from_mtype]))(self) /* from_mtype on <self:ACastExternCall>*/;
var_from = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__ACastExternCall__to_mtype]))(self) /* to_mtype on <self:ACastExternCall>*/;
var_to = var1;
var2 = ((val* (*)(val*))(var_callback_set->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var_callback_set) /* types on <var_callback_set:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_from) /* add on <var2:Set[MType]>*/;
var3 = ((val* (*)(val*))(var_callback_set->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__types]))(var_callback_set) /* types on <var_callback_set:ForeignCallbackSet>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var3, var_to) /* add on <var3:Set[MType]>*/;
var4 = ((val* (*)(val*))(var_callback_set->class->vft[COLOR_nitni_callbacks__ForeignCallbackSet__casts]))(var_callback_set) /* casts on <var_callback_set:ForeignCallbackSet>*/;
var5 = NEW_nitni_callbacks__MExplicitCast(&type_nitni_callbacks__MExplicitCast);
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_nitni_callbacks__MExplicitCast__init]))(var5, var_from, var_to) /* init on <var5:MExplicitCast>*/;
CHECK_NEW_nitni_callbacks__MExplicitCast(var5);
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var5) /* add on <var4:Set[MExplicitCast]>*/;
RET_LABEL:;
}
/* method nitni_callbacks#ACastExternCall#verify_and_collect for (self: Object, AExternPropdef, ForeignCallbackSet, ToolContext) */
void VIRTUAL_nitni_callbacks__ACastExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
nitni_callbacks__ACastExternCall__verify_and_collect(self, p0, p1, p2);
RET_LABEL:;
}
/* method nitni_callbacks#ACastAsExternCall#from_mtype for (self: ACastAsExternCall): MType */
val* nitni_callbacks__ACastAsExternCall__from_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACastAsExternCall__n_from_type]))(self) /* n_from_type on <self:ACastAsExternCall>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AType__mtype]))(var1) /* mtype on <var1:AType>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 475);
exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ACastAsExternCall#from_mtype for (self: Object): MType */
val* VIRTUAL_nitni_callbacks__ACastAsExternCall__from_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = nitni_callbacks__ACastAsExternCall__from_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ACastAsExternCall#to_mtype for (self: ACastAsExternCall): MType */
val* nitni_callbacks__ACastAsExternCall__to_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACastAsExternCall__n_to_type]))(self) /* n_to_type on <self:ACastAsExternCall>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AType__mtype]))(var1) /* mtype on <var1:AType>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 476);
exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ACastAsExternCall#to_mtype for (self: Object): MType */
val* VIRTUAL_nitni_callbacks__ACastAsExternCall__to_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = nitni_callbacks__ACastAsExternCall__to_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ACastAsExternCall#verify_and_collect for (self: ACastAsExternCall, AExternPropdef, ForeignCallbackSet, ToolContext) */
void nitni_callbacks__ACastAsExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AExternPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable ANode */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_parent_aclassdef /* var parent_aclassdef: AClassdef */;
val* var2 /* : ModelBuilder */;
val* var3 /* : AType */;
short int var4 /* : Bool */;
val* var5 /* : nullable MType */;
val* var6 /* : ModelBuilder */;
val* var7 /* : AType */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
var = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__ANode__parent]))(var_npropdef) /* parent on <var_npropdef:AExternPropdef>*/;
/* <var:nullable ANode> isa AClassdef */
cltype = type_parser_nodes__AClassdef.color;
idtype = type_parser_nodes__AClassdef.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AClassdef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 480);
exit(1);
}
var_parent_aclassdef = var;
var2 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var_toolcontext) /* modelbuilder on <var_toolcontext:ToolContext>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACastAsExternCall__n_from_type]))(self) /* n_from_type on <self:ACastAsExternCall>*/;
var4 = 1;
var5 = ((val* (*)(val*, val*, val*, short int))(var2->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype_unchecked]))(var2, var_parent_aclassdef, var3, var4) /* resolve_mtype_unchecked on <var2:ModelBuilder>*/;
var5;
var6 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var_toolcontext) /* modelbuilder on <var_toolcontext:ToolContext>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACastAsExternCall__n_to_type]))(self) /* n_to_type on <self:ACastAsExternCall>*/;
var8 = 1;
var9 = ((val* (*)(val*, val*, val*, short int))(var6->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype_unchecked]))(var6, var_parent_aclassdef, var7, var8) /* resolve_mtype_unchecked on <var6:ModelBuilder>*/;
var9;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_nitni_callbacks__ACastAsExternCall__verify_and_collect]))(self, p0, p1, p2) /* verify_and_collect on <self:ACastAsExternCall>*/;
RET_LABEL:;
}
/* method nitni_callbacks#ACastAsExternCall#verify_and_collect for (self: Object, AExternPropdef, ForeignCallbackSet, ToolContext) */
void VIRTUAL_nitni_callbacks__ACastAsExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
nitni_callbacks__ACastAsExternCall__verify_and_collect(self, p0, p1, p2);
RET_LABEL:;
}
/* method nitni_callbacks#AAsNullableExternCall#from_mtype for (self: AAsNullableExternCall): MType */
val* nitni_callbacks__AAsNullableExternCall__from_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsNullableExternCall__n_type]))(self) /* n_type on <self:AAsNullableExternCall>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AType__mtype]))(var1) /* mtype on <var1:AType>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 488);
exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNullableExternCall#from_mtype for (self: Object): MType */
val* VIRTUAL_nitni_callbacks__AAsNullableExternCall__from_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = nitni_callbacks__AAsNullableExternCall__from_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNullableExternCall#to_mtype for (self: AAsNullableExternCall): MType */
val* nitni_callbacks__AAsNullableExternCall__to_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
val* var3 /* : MType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsNullableExternCall__n_type]))(self) /* n_type on <self:AAsNullableExternCall>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AType__mtype]))(var1) /* mtype on <var1:AType>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 489);
exit(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MType__as_nullable]))(var2) /* as_nullable on <var2:nullable MType>*/;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNullableExternCall#to_mtype for (self: Object): MType */
val* VIRTUAL_nitni_callbacks__AAsNullableExternCall__to_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = nitni_callbacks__AAsNullableExternCall__to_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNullableExternCall#verify_and_collect for (self: AAsNullableExternCall, AExternPropdef, ForeignCallbackSet, ToolContext) */
void nitni_callbacks__AAsNullableExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AExternPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable ANode */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_parent_aclassdef /* var parent_aclassdef: AClassdef */;
val* var2 /* : ModelBuilder */;
val* var3 /* : AType */;
short int var4 /* : Bool */;
val* var5 /* : nullable MType */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
var = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__ANode__parent]))(var_npropdef) /* parent on <var_npropdef:AExternPropdef>*/;
/* <var:nullable ANode> isa AClassdef */
cltype = type_parser_nodes__AClassdef.color;
idtype = type_parser_nodes__AClassdef.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AClassdef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 493);
exit(1);
}
var_parent_aclassdef = var;
var2 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var_toolcontext) /* modelbuilder on <var_toolcontext:ToolContext>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsNullableExternCall__n_type]))(self) /* n_type on <self:AAsNullableExternCall>*/;
var4 = 1;
var5 = ((val* (*)(val*, val*, val*, short int))(var2->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype_unchecked]))(var2, var_parent_aclassdef, var3, var4) /* resolve_mtype_unchecked on <var2:ModelBuilder>*/;
var5;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_nitni_callbacks__AAsNullableExternCall__verify_and_collect]))(self, p0, p1, p2) /* verify_and_collect on <self:AAsNullableExternCall>*/;
RET_LABEL:;
}
/* method nitni_callbacks#AAsNullableExternCall#verify_and_collect for (self: Object, AExternPropdef, ForeignCallbackSet, ToolContext) */
void VIRTUAL_nitni_callbacks__AAsNullableExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
nitni_callbacks__AAsNullableExternCall__verify_and_collect(self, p0, p1, p2);
RET_LABEL:;
}
/* method nitni_callbacks#AAsNotNullableExternCall#from_mtype for (self: AAsNotNullableExternCall): MType */
val* nitni_callbacks__AAsNotNullableExternCall__from_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
val* var3 /* : MType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsNotNullableExternCall__n_type]))(self) /* n_type on <self:AAsNotNullableExternCall>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AType__mtype]))(var1) /* mtype on <var1:AType>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 500);
exit(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MType__as_nullable]))(var2) /* as_nullable on <var2:nullable MType>*/;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNotNullableExternCall#from_mtype for (self: Object): MType */
val* VIRTUAL_nitni_callbacks__AAsNotNullableExternCall__from_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = nitni_callbacks__AAsNotNullableExternCall__from_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNotNullableExternCall#to_mtype for (self: AAsNotNullableExternCall): MType */
val* nitni_callbacks__AAsNotNullableExternCall__to_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : MType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsNotNullableExternCall__n_type]))(self) /* n_type on <self:AAsNotNullableExternCall>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AType__mtype]))(var1) /* mtype on <var1:AType>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 502);
exit(1);
}
var_mtype = var2;
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
if (var3){
var4 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
var = var4;
goto RET_LABEL;
} else {
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNotNullableExternCall#to_mtype for (self: Object): MType */
val* VIRTUAL_nitni_callbacks__AAsNotNullableExternCall__to_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = nitni_callbacks__AAsNotNullableExternCall__to_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNotNullableExternCall#verify_and_collect for (self: AAsNotNullableExternCall, AExternPropdef, ForeignCallbackSet, ToolContext) */
void nitni_callbacks__AAsNotNullableExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AExternPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable ANode */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_parent_aclassdef /* var parent_aclassdef: AClassdef */;
val* var2 /* : ModelBuilder */;
val* var3 /* : AType */;
short int var4 /* : Bool */;
val* var5 /* : nullable MType */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
var = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__ANode__parent]))(var_npropdef) /* parent on <var_npropdef:AExternPropdef>*/;
/* <var:nullable ANode> isa AClassdef */
cltype = type_parser_nodes__AClassdef.color;
idtype = type_parser_nodes__AClassdef.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AClassdef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/nitni/nitni_callbacks.nit", 509);
exit(1);
}
var_parent_aclassdef = var;
var2 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var_toolcontext) /* modelbuilder on <var_toolcontext:ToolContext>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsNotNullableExternCall__n_type]))(self) /* n_type on <self:AAsNotNullableExternCall>*/;
var4 = 1;
var5 = ((val* (*)(val*, val*, val*, short int))(var2->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype_unchecked]))(var2, var_parent_aclassdef, var3, var4) /* resolve_mtype_unchecked on <var2:ModelBuilder>*/;
var5;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_nitni_callbacks__AAsNotNullableExternCall__verify_and_collect]))(self, p0, p1, p2) /* verify_and_collect on <self:AAsNotNullableExternCall>*/;
RET_LABEL:;
}
/* method nitni_callbacks#AAsNotNullableExternCall#verify_and_collect for (self: Object, AExternPropdef, ForeignCallbackSet, ToolContext) */
void VIRTUAL_nitni_callbacks__AAsNotNullableExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
nitni_callbacks__AAsNotNullableExternCall__verify_and_collect(self, p0, p1, p2);
RET_LABEL:;
}
