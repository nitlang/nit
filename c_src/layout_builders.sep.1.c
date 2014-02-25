#include "layout_builders.sep.0.h"
/* method layout_builders#Layout#ids for (self: Layout[Object]): Map[Object, Int] */
val* layout_builders__Layout__ids(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = self->attrs[COLOR_layout_builders__Layout___64dids].val; /* @ids on <self:Layout[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @ids");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 34);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#Layout#ids for (self: Object): Map[Object, Int] */
val* VIRTUAL_layout_builders__Layout__ids(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = layout_builders__Layout__ids(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#Layout#ids= for (self: Layout[Object], Map[Object, Int]) */
void layout_builders__Layout__ids_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (ids) <p0:Map[Object, Int]> isa Map[Layout#0, Int] */
/* <p0:Map[Object, Int]> isa Map[Layout#0, Int] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__Layout_FT0kernel__Int];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[Layout#0, Int]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 34);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__Layout___64dids].val = p0; /* @ids on <self:Layout[Object]> */
RET_LABEL:;
}
/* method layout_builders#Layout#ids= for (self: Object, Map[Object, Int]) */
void VIRTUAL_layout_builders__Layout__ids_61d(val* self, val* p0) {
layout_builders__Layout__ids_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#Layout#pos for (self: Layout[Object]): Map[Object, Int] */
val* layout_builders__Layout__pos(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = self->attrs[COLOR_layout_builders__Layout___64dpos].val; /* @pos on <self:Layout[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @pos");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 36);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#Layout#pos for (self: Object): Map[Object, Int] */
val* VIRTUAL_layout_builders__Layout__pos(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = layout_builders__Layout__pos(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#Layout#pos= for (self: Layout[Object], Map[Object, Int]) */
void layout_builders__Layout__pos_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (pos) <p0:Map[Object, Int]> isa Map[Layout#0, Int] */
/* <p0:Map[Object, Int]> isa Map[Layout#0, Int] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__Layout_FT0kernel__Int];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[Layout#0, Int]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 36);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__Layout___64dpos].val = p0; /* @pos on <self:Layout[Object]> */
RET_LABEL:;
}
/* method layout_builders#Layout#pos= for (self: Object, Map[Object, Int]) */
void VIRTUAL_layout_builders__Layout__pos_61d(val* self, val* p0) {
layout_builders__Layout__pos_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#Layout#init for (self: Layout[Object]) */
void layout_builders__Layout__init(val* self) {
RET_LABEL:;
}
/* method layout_builders#Layout#init for (self: Object) */
void VIRTUAL_layout_builders__Layout__init(val* self) {
layout_builders__Layout__init(self);
RET_LABEL:;
}
/* method layout_builders#PHLayout#masks for (self: PHLayout[Object, Object]): Map[Object, Int] */
val* layout_builders__PHLayout__masks(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = self->attrs[COLOR_layout_builders__PHLayout___64dmasks].val; /* @masks on <self:PHLayout[Object, Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @masks");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 44);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PHLayout#masks for (self: Object): Map[Object, Int] */
val* VIRTUAL_layout_builders__PHLayout__masks(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = layout_builders__PHLayout__masks(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PHLayout#masks= for (self: PHLayout[Object, Object], Map[Object, Int]) */
void layout_builders__PHLayout__masks_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (masks) <p0:Map[Object, Int]> isa Map[PHLayout#0, Int] */
/* <p0:Map[Object, Int]> isa Map[PHLayout#0, Int] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__PHLayout_FT0kernel__Int];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[PHLayout#0, Int]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 44);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__PHLayout___64dmasks].val = p0; /* @masks on <self:PHLayout[Object, Object]> */
RET_LABEL:;
}
/* method layout_builders#PHLayout#masks= for (self: Object, Map[Object, Int]) */
void VIRTUAL_layout_builders__PHLayout__masks_61d(val* self, val* p0) {
layout_builders__PHLayout__masks_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#PHLayout#hashes for (self: PHLayout[Object, Object]): Map[Object, Map[Object, Int]] */
val* layout_builders__PHLayout__hashes(val* self) {
val* var /* : Map[Object, Map[Object, Int]] */;
val* var1 /* : Map[Object, Map[Object, Int]] */;
var1 = self->attrs[COLOR_layout_builders__PHLayout___64dhashes].val; /* @hashes on <self:PHLayout[Object, Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @hashes");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 46);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PHLayout#hashes for (self: Object): Map[Object, Map[Object, Int]] */
val* VIRTUAL_layout_builders__PHLayout__hashes(val* self) {
val* var /* : Map[Object, Map[Object, Int]] */;
val* var1 /* : Map[Object, Map[Object, Int]] */;
var1 = layout_builders__PHLayout__hashes(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PHLayout#hashes= for (self: PHLayout[Object, Object], Map[Object, Map[Object, Int]]) */
void layout_builders__PHLayout__hashes_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (hashes) <p0:Map[Object, Map[Object, Int]]> isa Map[PHLayout#0, Map[PHLayout#1, Int]] */
/* <p0:Map[Object, Map[Object, Int]]> isa Map[PHLayout#0, Map[PHLayout#1, Int]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__PHLayout_FT0abstract_collection__Maplayout_builders__PHLayout_FT1kernel__Int];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[PHLayout#0, Map[PHLayout#1, Int]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 46);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__PHLayout___64dhashes].val = p0; /* @hashes on <self:PHLayout[Object, Object]> */
RET_LABEL:;
}
/* method layout_builders#PHLayout#hashes= for (self: Object, Map[Object, Map[Object, Int]]) */
void VIRTUAL_layout_builders__PHLayout__hashes_61d(val* self, val* p0) {
layout_builders__PHLayout__hashes_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#PHLayout#init for (self: PHLayout[Object, Object]) */
void layout_builders__PHLayout__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_layout_builders__Layout__init]))(self) /* init on <self:PHLayout[Object, Object]>*/;
RET_LABEL:;
}
/* method layout_builders#PHLayout#init for (self: Object) */
void VIRTUAL_layout_builders__PHLayout__init(val* self) {
layout_builders__PHLayout__init(self);
RET_LABEL:;
}
/* method layout_builders#TypingLayoutBuilder#build_layout for (self: TypingLayoutBuilder[Object], Set[Object]): Layout[Object] */
val* layout_builders__TypingLayoutBuilder__build_layout(val* self, val* p0) {
val* var /* : Layout[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
const char* var_class_name2;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[TypingLayoutBuilder#0] */
/* <p0:Set[Object]> isa Set[TypingLayoutBuilder#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingLayoutBuilder_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingLayoutBuilder#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 54);
show_backtrace(1);
}
var_class_name2 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "build_layout", var_class_name2);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 54);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method layout_builders#TypingLayoutBuilder#build_layout for (self: Object, Set[Object]): Layout[Object] */
val* VIRTUAL_layout_builders__TypingLayoutBuilder__build_layout(val* self, val* p0) {
val* var /* : Layout[Object] */;
val* var1 /* : Layout[Object] */;
var1 = layout_builders__TypingLayoutBuilder__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingLayoutBuilder#poset for (self: TypingLayoutBuilder[Object]): nullable POSet[Object] */
val* layout_builders__TypingLayoutBuilder__poset(val* self) {
val* var /* : nullable POSet[Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "poset", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 57);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method layout_builders#TypingLayoutBuilder#poset for (self: Object): nullable POSet[Object] */
val* VIRTUAL_layout_builders__TypingLayoutBuilder__poset(val* self) {
val* var /* : nullable POSet[Object] */;
val* var1 /* : nullable POSet[Object] */;
var1 = layout_builders__TypingLayoutBuilder__poset(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PropertyLayoutBuilder#build_layout for (self: PropertyLayoutBuilder[PropertyLayoutElement], Map[MClass, Set[PropertyLayoutElement]]): Layout[PropertyLayoutElement] */
val* layout_builders__PropertyLayoutBuilder__build_layout(val* self, val* p0) {
val* var /* : Layout[PropertyLayoutElement] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
const char* var_class_name2;
/* Covariant cast for argument 0 (elements) <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[PropertyLayoutBuilder#0]] */
/* <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[PropertyLayoutBuilder#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutBuilder_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[MClass, Set[PropertyLayoutBuilder#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 64);
show_backtrace(1);
}
var_class_name2 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "build_layout", var_class_name2);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 64);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method layout_builders#PropertyLayoutBuilder#build_layout for (self: Object, Map[MClass, Set[PropertyLayoutElement]]): Layout[PropertyLayoutElement] */
val* VIRTUAL_layout_builders__PropertyLayoutBuilder__build_layout(val* self, val* p0) {
val* var /* : Layout[PropertyLayoutElement] */;
val* var1 /* : Layout[PropertyLayoutElement] */;
var1 = layout_builders__PropertyLayoutBuilder__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionLayoutBuilder#build_layout for (self: ResolutionLayoutBuilder, Map[MClassType, Set[MType]]): Layout[MType] */
val* layout_builders__ResolutionLayoutBuilder__build_layout(val* self, val* p0) {
val* var /* : Layout[MType] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "build_layout", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 84);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionLayoutBuilder#build_layout for (self: Object, Map[MClassType, Set[MType]]): Layout[MType] */
val* VIRTUAL_layout_builders__ResolutionLayoutBuilder__build_layout(val* self, val* p0) {
val* var /* : Layout[MType] */;
val* var1 /* : Layout[MType] */;
var1 = layout_builders__ResolutionLayoutBuilder__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#POSetBuilder#mmodule for (self: POSetBuilder[Object]): MModule */
val* layout_builders__POSetBuilder__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_layout_builders__POSetBuilder___64dmmodule].val; /* @mmodule on <self:POSetBuilder[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 94);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#POSetBuilder#mmodule for (self: Object): MModule */
val* VIRTUAL_layout_builders__POSetBuilder__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = layout_builders__POSetBuilder__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#POSetBuilder#mmodule= for (self: POSetBuilder[Object], MModule) */
void layout_builders__POSetBuilder__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_layout_builders__POSetBuilder___64dmmodule].val = p0; /* @mmodule on <self:POSetBuilder[Object]> */
RET_LABEL:;
}
/* method layout_builders#POSetBuilder#mmodule= for (self: Object, MModule) */
void VIRTUAL_layout_builders__POSetBuilder__mmodule_61d(val* self, val* p0) {
layout_builders__POSetBuilder__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#POSetBuilder#init for (self: POSetBuilder[Object], MModule) */
void layout_builders__POSetBuilder__init(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
var_mmodule = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__POSetBuilder__mmodule_61d]))(self, var_mmodule) /* mmodule= on <self:POSetBuilder[Object]>*/;
RET_LABEL:;
}
/* method layout_builders#POSetBuilder#init for (self: Object, MModule) */
void VIRTUAL_layout_builders__POSetBuilder__init(val* self, val* p0) {
layout_builders__POSetBuilder__init(self, p0);
RET_LABEL:;
}
/* method layout_builders#POSetBuilder#build_poset for (self: POSetBuilder[Object], Set[Object]): POSet[Object] */
val* layout_builders__POSetBuilder__build_poset(val* self, val* p0) {
val* var /* : POSet[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
const char* var_class_name2;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[POSetBuilder#0] */
/* <p0:Set[Object]> isa Set[POSetBuilder#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__POSetBuilder_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[POSetBuilder#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 96);
show_backtrace(1);
}
var_class_name2 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "build_poset", var_class_name2);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 96);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method layout_builders#POSetBuilder#build_poset for (self: Object, Set[Object]): POSet[Object] */
val* VIRTUAL_layout_builders__POSetBuilder__build_poset(val* self, val* p0) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = layout_builders__POSetBuilder__build_poset(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MTypePOSetBuilder#build_poset for (self: MTypePOSetBuilder, Set[MType]): POSet[MType] */
val* layout_builders__MTypePOSetBuilder__build_poset(val* self, val* p0) {
val* var /* : POSet[MType] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_elements /* var elements: Set[MType] */;
val* var2 /* : POSet[MType] */;
val* var_poset /* var poset: POSet[MType] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: MType */;
val* var6 /* : POSetElement[Object] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_o /* var o: MType */;
short int var10 /* : Bool */;
val* var11 /* : MModule */;
val* var12 /* : null */;
short int var13 /* : Bool */;
/* Covariant cast for argument 0 (elements) <p0:Set[MType]> isa Set[POSetBuilder#0] */
/* <p0:Set[MType]> isa Set[POSetBuilder#0] */
var1 = 1; /* easy <p0:Set[MType]> isa Set[POSetBuilder#0]*/
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[POSetBuilder#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 104);
show_backtrace(1);
}
var_elements = p0;
var2 = NEW_poset__POSet(&type_poset__POSetmodel__MType);
((void (*)(val*))(var2->class->vft[COLOR_poset__POSet__init]))(var2) /* init on <var2:POSet[MType]>*/;
var_poset = var2;
var3 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_elements) /* iterator on <var_elements:Set[MType]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_e = var5;
var6 = ((val* (*)(val*, val*))(var_poset->class->vft[COLOR_poset__POSet__add_node]))(var_poset, var_e) /* add_node on <var_poset:POSet[MType]>*/;
var6;
var7 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_elements) /* iterator on <var_elements:Set[MType]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_o = var9;
var10 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___61d_61d]))(var_e, var_o) /* == on <var_e:MType>*/;
if (var10){
goto CONTINUE_label;
} else {
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__POSetBuilder__mmodule]))(self) /* mmodule on <self:MTypePOSetBuilder>*/;
var12 = NULL;
var13 = ((short int (*)(val*, val*, val*, val*))(var_e->class->vft[COLOR_model__MType__is_subtype]))(var_e, var11, var12, var_o) /* is_subtype on <var_e:MType>*/;
if (var13){
((void (*)(val*, val*, val*))(var_poset->class->vft[COLOR_poset__POSet__add_edge]))(var_poset, var_e, var_o) /* add_edge on <var_poset:POSet[MType]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label14: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label14: (void)0;
var = var_poset;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#MTypePOSetBuilder#build_poset for (self: Object, Set[Object]): POSet[Object] */
val* VIRTUAL_layout_builders__MTypePOSetBuilder__build_poset(val* self, val* p0) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[MType] */;
var1 = layout_builders__MTypePOSetBuilder__build_poset(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MClassPOSetBuilder#build_poset for (self: MClassPOSetBuilder, Set[MClass]): POSet[MClass] */
val* layout_builders__MClassPOSetBuilder__build_poset(val* self, val* p0) {
val* var /* : POSet[MClass] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_elements /* var elements: Set[MClass] */;
val* var2 /* : MModule */;
val* var3 /* : POSet[MClass] */;
/* Covariant cast for argument 0 (elements) <p0:Set[MClass]> isa Set[POSetBuilder#0] */
/* <p0:Set[MClass]> isa Set[POSetBuilder#0] */
var1 = 1; /* easy <p0:Set[MClass]> isa Set[POSetBuilder#0]*/
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[POSetBuilder#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 123);
show_backtrace(1);
}
var_elements = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__POSetBuilder__mmodule]))(self) /* mmodule on <self:MClassPOSetBuilder>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(var2) /* flatten_mclass_hierarchy on <var2:MModule>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#MClassPOSetBuilder#build_poset for (self: Object, Set[Object]): POSet[Object] */
val* VIRTUAL_layout_builders__MClassPOSetBuilder__build_poset(val* self, val* p0) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[MClass] */;
var1 = layout_builders__MClassPOSetBuilder__build_poset(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingBMizer#mmodule for (self: TypingBMizer[Object]): MModule */
val* layout_builders__TypingBMizer__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_layout_builders__TypingBMizer___64dmmodule].val; /* @mmodule on <self:TypingBMizer[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 132);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingBMizer#mmodule for (self: Object): MModule */
val* VIRTUAL_layout_builders__TypingBMizer__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = layout_builders__TypingBMizer__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingBMizer#mmodule= for (self: TypingBMizer[Object], MModule) */
void layout_builders__TypingBMizer__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_layout_builders__TypingBMizer___64dmmodule].val = p0; /* @mmodule on <self:TypingBMizer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingBMizer#mmodule= for (self: Object, MModule) */
void VIRTUAL_layout_builders__TypingBMizer__mmodule_61d(val* self, val* p0) {
layout_builders__TypingBMizer__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingBMizer#poset_builder for (self: TypingBMizer[Object]): POSetBuilder[Object] */
val* layout_builders__TypingBMizer__poset_builder(val* self) {
val* var /* : POSetBuilder[Object] */;
val* var1 /* : POSetBuilder[Object] */;
var1 = self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_builder].val; /* @poset_builder on <self:TypingBMizer[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @poset_builder");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 133);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingBMizer#poset_builder for (self: Object): POSetBuilder[Object] */
val* VIRTUAL_layout_builders__TypingBMizer__poset_builder(val* self) {
val* var /* : POSetBuilder[Object] */;
val* var1 /* : POSetBuilder[Object] */;
var1 = layout_builders__TypingBMizer__poset_builder(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingBMizer#poset_builder= for (self: TypingBMizer[Object], POSetBuilder[Object]) */
void layout_builders__TypingBMizer__poset_builder_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset_builder) <p0:POSetBuilder[Object]> isa POSetBuilder[TypingBMizer#0] */
/* <p0:POSetBuilder[Object]> isa POSetBuilder[TypingBMizer#0] */
type_struct = self->type->resolution_table->types[COLOR_layout_builders__POSetBuilderlayout_builders__TypingBMizer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetBuilder[TypingBMizer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 133);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_builder].val = p0; /* @poset_builder on <self:TypingBMizer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingBMizer#poset_builder= for (self: Object, POSetBuilder[Object]) */
void VIRTUAL_layout_builders__TypingBMizer__poset_builder_61d(val* self, val* p0) {
layout_builders__TypingBMizer__poset_builder_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingBMizer#poset_cache for (self: TypingBMizer[Object]): nullable POSet[Object] */
val* layout_builders__TypingBMizer__poset_cache(val* self) {
val* var /* : nullable POSet[Object] */;
val* var1 /* : nullable POSet[Object] */;
var1 = self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_cache].val; /* @poset_cache on <self:TypingBMizer[Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingBMizer#poset_cache for (self: Object): nullable POSet[Object] */
val* VIRTUAL_layout_builders__TypingBMizer__poset_cache(val* self) {
val* var /* : nullable POSet[Object] */;
val* var1 /* : nullable POSet[Object] */;
var1 = layout_builders__TypingBMizer__poset_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingBMizer#poset_cache= for (self: TypingBMizer[Object], nullable POSet[Object]) */
void layout_builders__TypingBMizer__poset_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset_cache) <p0:nullable POSet[Object]> isa nullable POSet[TypingBMizer#0] */
/* <p0:nullable POSet[Object]> isa nullable POSet[TypingBMizer#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetlayout_builders__TypingBMizer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable POSet[TypingBMizer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 134);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_cache].val = p0; /* @poset_cache on <self:TypingBMizer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingBMizer#poset_cache= for (self: Object, nullable POSet[Object]) */
void VIRTUAL_layout_builders__TypingBMizer__poset_cache_61d(val* self, val* p0) {
layout_builders__TypingBMizer__poset_cache_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingBMizer#init for (self: TypingBMizer[Object], MModule, POSetBuilder[Object]) */
void layout_builders__TypingBMizer__init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mmodule /* var mmodule: MModule */;
val* var_poset_builder /* var poset_builder: POSetBuilder[Object] */;
/* Covariant cast for argument 1 (poset_builder) <p1:POSetBuilder[Object]> isa POSetBuilder[TypingBMizer#0] */
/* <p1:POSetBuilder[Object]> isa POSetBuilder[TypingBMizer#0] */
type_struct = self->type->resolution_table->types[COLOR_layout_builders__POSetBuilderlayout_builders__TypingBMizer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetBuilder[TypingBMizer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 136);
show_backtrace(1);
}
var_mmodule = p0;
var_poset_builder = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingBMizer__mmodule_61d]))(self, var_mmodule) /* mmodule= on <self:TypingBMizer[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingBMizer__poset_builder_61d]))(self, var_poset_builder) /* poset_builder= on <self:TypingBMizer[Object]>*/;
RET_LABEL:;
}
/* method layout_builders#TypingBMizer#init for (self: Object, MModule, POSetBuilder[Object]) */
void VIRTUAL_layout_builders__TypingBMizer__init(val* self, val* p0, val* p1) {
layout_builders__TypingBMizer__init(self, p0, p1);
RET_LABEL:;
}
/* method layout_builders#TypingBMizer#poset for (self: TypingBMizer[Object]): nullable POSet[Object] */
val* layout_builders__TypingBMizer__poset(val* self) {
val* var /* : nullable POSet[Object] */;
val* var1 /* : nullable POSet[Object] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingBMizer__poset_cache]))(self) /* poset_cache on <self:TypingBMizer[Object]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingBMizer#poset for (self: Object): nullable POSet[Object] */
val* VIRTUAL_layout_builders__TypingBMizer__poset(val* self) {
val* var /* : nullable POSet[Object] */;
val* var1 /* : nullable POSet[Object] */;
var1 = layout_builders__TypingBMizer__poset(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingBMizer#build_layout for (self: TypingBMizer[Object], Set[Object]): Layout[Object] */
val* layout_builders__TypingBMizer__build_layout(val* self, val* p0) {
val* var /* : Layout[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Set[Object] */;
val* var2 /* : Layout[Object] */;
val* var_result /* var result: Layout[Object] */;
val* var3 /* : HashMap[Object, Int] */;
val* var_ids /* var ids: HashMap[Object, Int] */;
val* var4 /* : POSetBuilder[Object] */;
val* var5 /* : POSet[Object] */;
val* var6 /* : nullable POSet[Object] */;
val* var7 /* : Array[nullable Object] */;
val* var_lin /* var lin: Array[Object] */;
val* var8 /* : nullable POSet[Object] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_element /* var element: Object */;
long var12 /* : Int */;
val* var13 /* : nullable Object */;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[TypingBMizer#0] */
/* <p0:Set[Object]> isa Set[TypingBMizer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingBMizer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingBMizer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 143);
show_backtrace(1);
}
var_elements = p0;
var2 = NEW_layout_builders__Layout(self->type->resolution_table->types[COLOR_layout_builders__Layoutlayout_builders__TypingBMizer_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_layout_builders__Layout__init]))(var2) /* init on <var2:Layout[Object]>*/;
var_result = var2;
var3 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingBMizer_FT0kernel__Int]);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[Object, Int]>*/;
var_ids = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingBMizer__poset_builder]))(self) /* poset_builder on <self:TypingBMizer[Object]>*/;
var5 = ((val* (*)(val*, val*))(var4->class->vft[COLOR_layout_builders__POSetBuilder__build_poset]))(var4, var_elements) /* build_poset on <var4:POSetBuilder[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingBMizer__poset_cache_61d]))(self, var5) /* poset_cache= on <self:TypingBMizer[Object]>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingBMizer[Object]>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 148);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_array__Collection__to_a]))(var6) /* to_a on <var6:nullable POSet[Object]>*/;
}
var_lin = var7;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingBMizer[Object]>*/;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 149);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var8->class->vft[COLOR_sorter__AbstractSorter__sort]))(var8, var_lin) /* sort on <var8:nullable POSet[Object]>*/;
}
var9 = ((val* (*)(val*))(var_lin->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_lin) /* iterator on <var_lin:Array[Object]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_element = var11;
var12 = ((long (*)(val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead__length]))(var_ids) /* length on <var_ids:HashMap[Object, Int]>*/;
var13 = BOX_kernel__Int(var12); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_ids->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_ids, var_element, var13) /* []= on <var_ids:HashMap[Object, Int]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__ids_61d]))(var_result, var_ids) /* ids= on <var_result:Layout[Object]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__pos_61d]))(var_result, var_ids) /* pos= on <var_result:Layout[Object]>*/;
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingBMizer#build_layout for (self: Object, Set[Object]): Layout[Object] */
val* VIRTUAL_layout_builders__TypingBMizer__build_layout(val* self, val* p0) {
val* var /* : Layout[Object] */;
val* var1 /* : Layout[Object] */;
var1 = layout_builders__TypingBMizer__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MTypeBMizer#init for (self: MTypeBMizer, MModule) */
void layout_builders__MTypeBMizer__init(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MTypePOSetBuilder */;
var_mmodule = p0;
var = NEW_layout_builders__MTypePOSetBuilder(&type_layout_builders__MTypePOSetBuilder);
((void (*)(val*, val*))(var->class->vft[COLOR_layout_builders__POSetBuilder__init]))(var, var_mmodule) /* init on <var:MTypePOSetBuilder>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_layout_builders__TypingBMizer__init]))(self, var_mmodule, var) /* init on <self:MTypeBMizer>*/;
RET_LABEL:;
}
/* method layout_builders#MTypeBMizer#init for (self: Object, MModule) */
void VIRTUAL_layout_builders__MTypeBMizer__init(val* self, val* p0) {
layout_builders__MTypeBMizer__init(self, p0);
RET_LABEL:;
}
/* method layout_builders#MClassBMizer#init for (self: MClassBMizer, MModule) */
void layout_builders__MClassBMizer__init(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MClassPOSetBuilder */;
var_mmodule = p0;
var = NEW_layout_builders__MClassPOSetBuilder(&type_layout_builders__MClassPOSetBuilder);
((void (*)(val*, val*))(var->class->vft[COLOR_layout_builders__POSetBuilder__init]))(var, var_mmodule) /* init on <var:MClassPOSetBuilder>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_layout_builders__TypingBMizer__init]))(self, var_mmodule, var) /* init on <self:MClassBMizer>*/;
RET_LABEL:;
}
/* method layout_builders#MClassBMizer#init for (self: Object, MModule) */
void VIRTUAL_layout_builders__MClassBMizer__init(val* self, val* p0) {
layout_builders__MClassBMizer__init(self, p0);
RET_LABEL:;
}
/* method layout_builders#ResolutionBMizer#init for (self: ResolutionBMizer) */
void layout_builders__ResolutionBMizer__init(val* self) {
RET_LABEL:;
}
/* method layout_builders#ResolutionBMizer#init for (self: Object) */
void VIRTUAL_layout_builders__ResolutionBMizer__init(val* self) {
layout_builders__ResolutionBMizer__init(self);
RET_LABEL:;
}
/* method layout_builders#ResolutionBMizer#build_layout for (self: ResolutionBMizer, Map[MClassType, Set[MType]]): Layout[MType] */
val* layout_builders__ResolutionBMizer__build_layout(val* self, val* p0) {
val* var /* : Layout[MType] */;
val* var_elements /* var elements: Map[MClassType, Set[MType]] */;
val* var1 /* : Layout[MType] */;
val* var_result /* var result: Layout[MType] */;
val* var2 /* : HashMap[MType, Int] */;
val* var_ids /* var ids: HashMap[MType, Int] */;
long var3 /* : Int */;
long var_color /* var color: Int */;
val* var4 /* : MapIterator[Object, nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : Object */;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var7 /* : nullable Object */;
val* var_mclasstypes /* var mclasstypes: Set[MType] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_element /* var element: MType */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
var_elements = p0;
var1 = NEW_layout_builders__Layout(&type_layout_builders__Layoutmodel__MType);
((void (*)(val*))(var1->class->vft[COLOR_layout_builders__Layout__init]))(var1) /* init on <var1:Layout[MType]>*/;
var_result = var1;
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypekernel__Int);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[MType, Int]>*/;
var_ids = var2;
var3 = 0;
var_color = var3;
var4 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_elements) /* iterator on <var_elements:Map[MClassType, Set[MType]]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var4) /* is_ok on <var4:MapIterator[Object, nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__key]))(var4) /* key on <var4:MapIterator[Object, nullable Object]>*/;
var_mclasstype = var6;
var7 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__item]))(var4) /* item on <var4:MapIterator[Object, nullable Object]>*/;
var_mclasstypes = var7;
var8 = ((val* (*)(val*))(var_mclasstypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasstypes) /* iterator on <var_mclasstypes:Set[MType]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_element = var10;
var11 = ((short int (*)(val*, val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_ids, var_element) /* has_key on <var_ids:HashMap[MType, Int]>*/;
if (var11){
goto CONTINUE_label;
} else {
}
var12 = BOX_kernel__Int(var_color); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_ids->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_ids, var_element, var12) /* []= on <var_ids:HashMap[MType, Int]>*/;
var13 = 1;
{ /* Inline kernel#Int#+ (var_color,var13) */
var16 = var_color + var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var_color = var14;
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label17: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__next]))(var4) /* next on <var4:MapIterator[Object, nullable Object]>*/;
}
BREAK_label17: (void)0;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__ids_61d]))(var_result, var_ids) /* ids= on <var_result:Layout[MType]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__pos_61d]))(var_result, var_ids) /* pos= on <var_result:Layout[MType]>*/;
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionBMizer#build_layout for (self: Object, Map[MClassType, Set[MType]]): Layout[MType] */
val* VIRTUAL_layout_builders__ResolutionBMizer__build_layout(val* self, val* p0) {
val* var /* : Layout[MType] */;
val* var1 /* : Layout[MType] */;
var1 = layout_builders__ResolutionBMizer__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyBMizer#mmodule for (self: MPropertyBMizer[PropertyLayoutElement]): MModule */
val* layout_builders__MPropertyBMizer__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_layout_builders__MPropertyBMizer___64dmmodule].val; /* @mmodule on <self:MPropertyBMizer[PropertyLayoutElement]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 198);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyBMizer#mmodule for (self: Object): MModule */
val* VIRTUAL_layout_builders__MPropertyBMizer__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = layout_builders__MPropertyBMizer__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyBMizer#mmodule= for (self: MPropertyBMizer[PropertyLayoutElement], MModule) */
void layout_builders__MPropertyBMizer__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_layout_builders__MPropertyBMizer___64dmmodule].val = p0; /* @mmodule on <self:MPropertyBMizer[PropertyLayoutElement]> */
RET_LABEL:;
}
/* method layout_builders#MPropertyBMizer#mmodule= for (self: Object, MModule) */
void VIRTUAL_layout_builders__MPropertyBMizer__mmodule_61d(val* self, val* p0) {
layout_builders__MPropertyBMizer__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#MPropertyBMizer#init for (self: MPropertyBMizer[PropertyLayoutElement], MModule) */
void layout_builders__MPropertyBMizer__init(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
var_mmodule = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__MPropertyBMizer__mmodule_61d]))(self, var_mmodule) /* mmodule= on <self:MPropertyBMizer[PropertyLayoutElement]>*/;
RET_LABEL:;
}
/* method layout_builders#MPropertyBMizer#init for (self: Object, MModule) */
void VIRTUAL_layout_builders__MPropertyBMizer__init(val* self, val* p0) {
layout_builders__MPropertyBMizer__init(self, p0);
RET_LABEL:;
}
/* method layout_builders#MPropertyBMizer#build_layout for (self: MPropertyBMizer[PropertyLayoutElement], Map[MClass, Set[PropertyLayoutElement]]): Layout[PropertyLayoutElement] */
val* layout_builders__MPropertyBMizer__build_layout(val* self, val* p0) {
val* var /* : Layout[PropertyLayoutElement] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Map[MClass, Set[PropertyLayoutElement]] */;
val* var2 /* : Layout[PropertyLayoutElement] */;
val* var_result /* var result: Layout[PropertyLayoutElement] */;
val* var3 /* : HashMap[PropertyLayoutElement, Int] */;
val* var_ids /* var ids: HashMap[PropertyLayoutElement, Int] */;
val* var4 /* : Array[MClass] */;
val* var_lin /* var lin: Array[MClass] */;
val* var5 /* : Collection[Object] */;
val* var6 /* : MModule */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var10 /* : nullable Object */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mproperty /* var mproperty: PropertyLayoutElement */;
short int var14 /* : Bool */;
long var15 /* : Int */;
val* var16 /* : nullable Object */;
/* Covariant cast for argument 0 (elements) <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[PropertyLayoutBuilder#0]] */
/* <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[PropertyLayoutBuilder#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutBuilder_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[MClass, Set[PropertyLayoutBuilder#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 202);
show_backtrace(1);
}
var_elements = p0;
var2 = NEW_layout_builders__Layout(self->type->resolution_table->types[COLOR_layout_builders__Layoutlayout_builders__MPropertyBMizer_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_layout_builders__Layout__init]))(var2) /* init on <var2:Layout[PropertyLayoutElement]>*/;
var_result = var2;
var3 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__MPropertyBMizer_FT0kernel__Int]);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[PropertyLayoutElement, Int]>*/;
var_ids = var3;
var4 = NEW_array__Array(&type_array__Arraymodel__MClass);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[MClass]>*/;
var_lin = var4;
var5 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead__keys]))(var_elements) /* keys on <var_elements:Map[MClass, Set[PropertyLayoutElement]]>*/;
((void (*)(val*, val*))(var_lin->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_lin, var5) /* add_all on <var_lin:Array[MClass]>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyBMizer__mmodule]))(self) /* mmodule on <self:MPropertyBMizer[PropertyLayoutElement]>*/;
((void (*)(val*, val*))(var6->class->vft[COLOR_model__MModule__linearize_mclasses]))(var6, var_lin) /* linearize_mclasses on <var6:MModule>*/;
var7 = ((val* (*)(val*))(var_lin->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_lin) /* iterator on <var_lin:Array[MClass]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_mclass = var9;
var10 = ((val* (*)(val*, val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_elements, var_mclass) /* [] on <var_elements:Map[MClass, Set[PropertyLayoutElement]]>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__iterator]))(var10) /* iterator on <var10:nullable Object(Set[PropertyLayoutElement])>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var_mproperty = var13;
var14 = ((short int (*)(val*, val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_ids, var_mproperty) /* has_key on <var_ids:HashMap[PropertyLayoutElement, Int]>*/;
if (var14){
goto CONTINUE_label;
} else {
}
var15 = ((long (*)(val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead__length]))(var_ids) /* length on <var_ids:HashMap[PropertyLayoutElement, Int]>*/;
var16 = BOX_kernel__Int(var15); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_ids->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_ids, var_mproperty, var16) /* []= on <var_ids:HashMap[PropertyLayoutElement, Int]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label17: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label17: (void)0;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__pos_61d]))(var_result, var_ids) /* pos= on <var_result:Layout[PropertyLayoutElement]>*/;
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyBMizer#build_layout for (self: Object, Map[MClass, Set[PropertyLayoutElement]]): Layout[PropertyLayoutElement] */
val* VIRTUAL_layout_builders__MPropertyBMizer__build_layout(val* self, val* p0) {
val* var /* : Layout[PropertyLayoutElement] */;
val* var1 /* : Layout[PropertyLayoutElement] */;
var1 = layout_builders__MPropertyBMizer__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#core for (self: TypingColorer[Object]): Set[Object] */
val* layout_builders__TypingColorer__core(val* self) {
val* var /* : Set[Object] */;
val* var1 /* : Set[Object] */;
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dcore].val; /* @core on <self:TypingColorer[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @core");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 225);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#core for (self: Object): Set[Object] */
val* VIRTUAL_layout_builders__TypingColorer__core(val* self) {
val* var /* : Set[Object] */;
val* var1 /* : Set[Object] */;
var1 = layout_builders__TypingColorer__core(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#core= for (self: TypingColorer[Object], Set[Object]) */
void layout_builders__TypingColorer__core_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (core) <p0:Set[Object]> isa Set[TypingColorer#0] */
/* <p0:Set[Object]> isa Set[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 225);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingColorer___64dcore].val = p0; /* @core on <self:TypingColorer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingColorer#core= for (self: Object, Set[Object]) */
void VIRTUAL_layout_builders__TypingColorer__core_61d(val* self, val* p0) {
layout_builders__TypingColorer__core_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#crown for (self: TypingColorer[Object]): Set[Object] */
val* layout_builders__TypingColorer__crown(val* self) {
val* var /* : Set[Object] */;
val* var1 /* : Set[Object] */;
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dcrown].val; /* @crown on <self:TypingColorer[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @crown");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 226);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#crown for (self: Object): Set[Object] */
val* VIRTUAL_layout_builders__TypingColorer__crown(val* self) {
val* var /* : Set[Object] */;
val* var1 /* : Set[Object] */;
var1 = layout_builders__TypingColorer__crown(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#crown= for (self: TypingColorer[Object], Set[Object]) */
void layout_builders__TypingColorer__crown_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (crown) <p0:Set[Object]> isa Set[TypingColorer#0] */
/* <p0:Set[Object]> isa Set[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 226);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingColorer___64dcrown].val = p0; /* @crown on <self:TypingColorer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingColorer#crown= for (self: Object, Set[Object]) */
void VIRTUAL_layout_builders__TypingColorer__crown_61d(val* self, val* p0) {
layout_builders__TypingColorer__crown_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#border for (self: TypingColorer[Object]): Set[Object] */
val* layout_builders__TypingColorer__border(val* self) {
val* var /* : Set[Object] */;
val* var1 /* : Set[Object] */;
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dborder].val; /* @border on <self:TypingColorer[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @border");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 227);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#border for (self: Object): Set[Object] */
val* VIRTUAL_layout_builders__TypingColorer__border(val* self) {
val* var /* : Set[Object] */;
val* var1 /* : Set[Object] */;
var1 = layout_builders__TypingColorer__border(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#border= for (self: TypingColorer[Object], Set[Object]) */
void layout_builders__TypingColorer__border_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (border) <p0:Set[Object]> isa Set[TypingColorer#0] */
/* <p0:Set[Object]> isa Set[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 227);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingColorer___64dborder].val = p0; /* @border on <self:TypingColorer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingColorer#border= for (self: Object, Set[Object]) */
void VIRTUAL_layout_builders__TypingColorer__border_61d(val* self, val* p0) {
layout_builders__TypingColorer__border_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#coloration_result for (self: TypingColorer[Object]): Map[Object, Int] */
val* layout_builders__TypingColorer__coloration_result(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dcoloration_result].val; /* @coloration_result on <self:TypingColorer[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @coloration_result");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 228);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#coloration_result for (self: Object): Map[Object, Int] */
val* VIRTUAL_layout_builders__TypingColorer__coloration_result(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = layout_builders__TypingColorer__coloration_result(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#coloration_result= for (self: TypingColorer[Object], Map[Object, Int]) */
void layout_builders__TypingColorer__coloration_result_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (coloration_result) <p0:Map[Object, Int]> isa Map[TypingColorer#0, Int] */
/* <p0:Map[Object, Int]> isa Map[TypingColorer#0, Int] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__TypingColorer_FT0kernel__Int];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[TypingColorer#0, Int]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 228);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingColorer___64dcoloration_result].val = p0; /* @coloration_result on <self:TypingColorer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingColorer#coloration_result= for (self: Object, Map[Object, Int]) */
void VIRTUAL_layout_builders__TypingColorer__coloration_result_61d(val* self, val* p0) {
layout_builders__TypingColorer__coloration_result_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#mmodule for (self: TypingColorer[Object]): MModule */
val* layout_builders__TypingColorer__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dmmodule].val; /* @mmodule on <self:TypingColorer[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 230);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#mmodule for (self: Object): MModule */
val* VIRTUAL_layout_builders__TypingColorer__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = layout_builders__TypingColorer__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#mmodule= for (self: TypingColorer[Object], MModule) */
void layout_builders__TypingColorer__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_layout_builders__TypingColorer___64dmmodule].val = p0; /* @mmodule on <self:TypingColorer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingColorer#mmodule= for (self: Object, MModule) */
void VIRTUAL_layout_builders__TypingColorer__mmodule_61d(val* self, val* p0) {
layout_builders__TypingColorer__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#poset_builder for (self: TypingColorer[Object]): POSetBuilder[Object] */
val* layout_builders__TypingColorer__poset_builder(val* self) {
val* var /* : POSetBuilder[Object] */;
val* var1 /* : POSetBuilder[Object] */;
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dposet_builder].val; /* @poset_builder on <self:TypingColorer[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @poset_builder");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 231);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#poset_builder for (self: Object): POSetBuilder[Object] */
val* VIRTUAL_layout_builders__TypingColorer__poset_builder(val* self) {
val* var /* : POSetBuilder[Object] */;
val* var1 /* : POSetBuilder[Object] */;
var1 = layout_builders__TypingColorer__poset_builder(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#poset_builder= for (self: TypingColorer[Object], POSetBuilder[Object]) */
void layout_builders__TypingColorer__poset_builder_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset_builder) <p0:POSetBuilder[Object]> isa POSetBuilder[TypingColorer#0] */
/* <p0:POSetBuilder[Object]> isa POSetBuilder[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_layout_builders__POSetBuilderlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetBuilder[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 231);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingColorer___64dposet_builder].val = p0; /* @poset_builder on <self:TypingColorer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingColorer#poset_builder= for (self: Object, POSetBuilder[Object]) */
void VIRTUAL_layout_builders__TypingColorer__poset_builder_61d(val* self, val* p0) {
layout_builders__TypingColorer__poset_builder_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#poset_cache for (self: TypingColorer[Object]): nullable POSet[Object] */
val* layout_builders__TypingColorer__poset_cache(val* self) {
val* var /* : nullable POSet[Object] */;
val* var1 /* : nullable POSet[Object] */;
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dposet_cache].val; /* @poset_cache on <self:TypingColorer[Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#poset_cache for (self: Object): nullable POSet[Object] */
val* VIRTUAL_layout_builders__TypingColorer__poset_cache(val* self) {
val* var /* : nullable POSet[Object] */;
val* var1 /* : nullable POSet[Object] */;
var1 = layout_builders__TypingColorer__poset_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#poset_cache= for (self: TypingColorer[Object], nullable POSet[Object]) */
void layout_builders__TypingColorer__poset_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset_cache) <p0:nullable POSet[Object]> isa nullable POSet[TypingColorer#0] */
/* <p0:nullable POSet[Object]> isa nullable POSet[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable POSet[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 232);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingColorer___64dposet_cache].val = p0; /* @poset_cache on <self:TypingColorer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingColorer#poset_cache= for (self: Object, nullable POSet[Object]) */
void VIRTUAL_layout_builders__TypingColorer__poset_cache_61d(val* self, val* p0) {
layout_builders__TypingColorer__poset_cache_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#init for (self: TypingColorer[Object], MModule, POSetBuilder[Object]) */
void layout_builders__TypingColorer__init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mmodule /* var mmodule: MModule */;
val* var_poset_builder /* var poset_builder: POSetBuilder[Object] */;
/* Covariant cast for argument 1 (poset_builder) <p1:POSetBuilder[Object]> isa POSetBuilder[TypingColorer#0] */
/* <p1:POSetBuilder[Object]> isa POSetBuilder[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_layout_builders__POSetBuilderlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetBuilder[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 234);
show_backtrace(1);
}
var_mmodule = p0;
var_poset_builder = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__mmodule_61d]))(self, var_mmodule) /* mmodule= on <self:TypingColorer[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__poset_builder_61d]))(self, var_poset_builder) /* poset_builder= on <self:TypingColorer[Object]>*/;
RET_LABEL:;
}
/* method layout_builders#TypingColorer#init for (self: Object, MModule, POSetBuilder[Object]) */
void VIRTUAL_layout_builders__TypingColorer__init(val* self, val* p0, val* p1) {
layout_builders__TypingColorer__init(self, p0, p1);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#poset for (self: TypingColorer[Object]): nullable POSet[Object] */
val* layout_builders__TypingColorer__poset(val* self) {
val* var /* : nullable POSet[Object] */;
val* var1 /* : nullable POSet[Object] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__poset_cache]))(self) /* poset_cache on <self:TypingColorer[Object]>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#poset for (self: Object): nullable POSet[Object] */
val* VIRTUAL_layout_builders__TypingColorer__poset(val* self) {
val* var /* : nullable POSet[Object] */;
val* var1 /* : nullable POSet[Object] */;
var1 = layout_builders__TypingColorer__poset(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#build_layout for (self: TypingColorer[Object], Set[Object]): Layout[Object] */
val* layout_builders__TypingColorer__build_layout(val* self, val* p0) {
val* var /* : Layout[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Set[Object] */;
val* var2 /* : POSetBuilder[Object] */;
val* var3 /* : POSet[Object] */;
val* var4 /* : Layout[Object] */;
val* var_result /* var result: Layout[Object] */;
val* var5 /* : Map[Object, Int] */;
val* var6 /* : Map[Object, Int] */;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[TypingColorer#0] */
/* <p0:Set[Object]> isa Set[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 241);
show_backtrace(1);
}
var_elements = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__poset_builder]))(self) /* poset_builder on <self:TypingColorer[Object]>*/;
var3 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_layout_builders__POSetBuilder__build_poset]))(var2, var_elements) /* build_poset on <var2:POSetBuilder[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__poset_cache_61d]))(self, var3) /* poset_cache= on <self:TypingColorer[Object]>*/;
var4 = NEW_layout_builders__Layout(self->type->resolution_table->types[COLOR_layout_builders__Layoutlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var4->class->vft[COLOR_layout_builders__Layout__init]))(var4) /* init on <var4:Layout[Object]>*/;
var_result = var4;
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__compute_ids]))(self, var_elements) /* compute_ids on <self:TypingColorer[Object]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__ids_61d]))(var_result, var5) /* ids= on <var_result:Layout[Object]>*/;
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__colorize]))(self, var_elements) /* colorize on <self:TypingColorer[Object]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__pos_61d]))(var_result, var6) /* pos= on <var_result:Layout[Object]>*/;
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#build_layout for (self: Object, Set[Object]): Layout[Object] */
val* VIRTUAL_layout_builders__TypingColorer__build_layout(val* self, val* p0) {
val* var /* : Layout[Object] */;
val* var1 /* : Layout[Object] */;
var1 = layout_builders__TypingColorer__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#compute_ids for (self: TypingColorer[Object], Set[Object]): Map[Object, Int] */
val* layout_builders__TypingColorer__compute_ids(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Set[Object] */;
val* var2 /* : HashMap[Object, Int] */;
val* var_ids /* var ids: HashMap[Object, Int] */;
val* var3 /* : Array[Object] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_element /* var element: Object */;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[TypingColorer#0] */
/* <p0:Set[Object]> isa Set[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 250);
show_backtrace(1);
}
var_elements = p0;
var2 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingColorer_FT0kernel__Int]);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[Object, Int]>*/;
var_ids = var2;
var3 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__reverse_linearize]))(self, var_elements) /* reverse_linearize on <self:TypingColorer[Object]>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:Array[Object]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_element = var6;
var7 = ((long (*)(val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead__length]))(var_ids) /* length on <var_ids:HashMap[Object, Int]>*/;
var8 = BOX_kernel__Int(var7); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_ids->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_ids, var_element, var8) /* []= on <var_ids:HashMap[Object, Int]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_ids;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#compute_ids for (self: Object, Set[Object]): Map[Object, Int] */
val* VIRTUAL_layout_builders__TypingColorer__compute_ids(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = layout_builders__TypingColorer__compute_ids(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#colorize for (self: TypingColorer[Object], Set[Object]): Map[Object, Int] */
val* layout_builders__TypingColorer__colorize(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Set[Object] */;
val* var2 /* : Set[Object] */;
val* var3 /* : Set[Object] */;
val* var4 /* : Set[Object] */;
val* var5 /* : Map[Object, Int] */;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[TypingColorer#0] */
/* <p0:Set[Object]> isa Set[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 258);
show_backtrace(1);
}
var_elements = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__tag_elements]))(self, var_elements) /* tag_elements on <self:TypingColorer[Object]>*/;
((void (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__build_conflicts_graph]))(self) /* build_conflicts_graph on <self:TypingColorer[Object]>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__core]))(self) /* core on <self:TypingColorer[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__colorize_elements]))(self, var2) /* colorize_elements on <self:TypingColorer[Object]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__border]))(self) /* border on <self:TypingColorer[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__colorize_elements]))(self, var3) /* colorize_elements on <self:TypingColorer[Object]>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__crown]))(self) /* crown on <self:TypingColorer[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__colorize_elements]))(self, var4) /* colorize_elements on <self:TypingColorer[Object]>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__coloration_result]))(self) /* coloration_result on <self:TypingColorer[Object]>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#colorize for (self: Object, Set[Object]): Map[Object, Int] */
val* VIRTUAL_layout_builders__TypingColorer__colorize(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = layout_builders__TypingColorer__colorize(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#colorize_elements for (self: TypingColorer[Object], Set[Object]) */
void layout_builders__TypingColorer__colorize_elements(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Set[Object] */;
long var1 /* : Int */;
long var_min_color /* var min_color: Int */;
val* var2 /* : Array[Object] */;
val* var_lin /* var lin: Array[Object] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_element /* var element: Object */;
long var_color /* var color: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
val* var12 /* : Map[Object, Int] */;
val* var13 /* : nullable Object */;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[TypingColorer#0] */
/* <p0:Set[Object]> isa Set[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 267);
show_backtrace(1);
}
var_elements = p0;
var1 = 0;
var_min_color = var1;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__reverse_linearize]))(self, var_elements) /* reverse_linearize on <self:TypingColorer[Object]>*/;
var_lin = var2;
var3 = ((val* (*)(val*))(var_lin->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_lin) /* iterator on <var_lin:Array[Object]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_element = var5;
var_color = var_min_color;
for(;;) {
var6 = ((short int (*)(val*, val*, val*, long))(self->class->vft[COLOR_layout_builders__TypingColorer__is_color_free]))(self, var_element, var_elements, var_color) /* is_color_free on <self:TypingColorer[Object]>*/;
var7 = !var6;
if (!var7) break;
var8 = 1;
{ /* Inline kernel#Int#+ (var_color,var8) */
var11 = var_color + var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_color = var9;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__coloration_result]))(self) /* coloration_result on <self:TypingColorer[Object]>*/;
var13 = BOX_kernel__Int(var_color); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var12, var_element, var13) /* []= on <var12:Map[Object, Int]>*/;
var_color = var_min_color;
CONTINUE_label14: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label14: (void)0;
RET_LABEL:;
}
/* method layout_builders#TypingColorer#colorize_elements for (self: Object, Set[Object]) */
void VIRTUAL_layout_builders__TypingColorer__colorize_elements(val* self, val* p0) {
layout_builders__TypingColorer__colorize_elements(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#is_color_free for (self: TypingColorer[Object], Object, Set[Object], Int): Bool */
short int layout_builders__TypingColorer__is_color_free(val* self, val* p0, val* p1, long p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_element /* var element: Object */;
val* var_elements /* var elements: Set[Object] */;
long var_color /* var color: Int */;
val* var7 /* : nullable HashMap[Object, Set[Object]] */;
short int var8 /* : Bool */;
val* var9 /* : nullable HashMap[Object, Set[Object]] */;
val* var10 /* : nullable Object */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_st /* var st: Object */;
short int var14 /* : Bool */;
val* var15 /* : Map[Object, Int] */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : Map[Object, Int] */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var23 /* : Bool */;
val* var24 /* : nullable POSet[Object] */;
val* var25 /* : POSetElement[Object] */;
val* var26 /* : Collection[Object] */;
val* var27 /* : Iterator[nullable Object] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_st30 /* var st: Object */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : Map[Object, Int] */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
val* var37 /* : Map[Object, Int] */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
/* Covariant cast for argument 0 (element) <p0:Object> isa TypingColorer#0 */
/* <p0:Object> isa TypingColorer#0 */
type_struct = self->type->resolution_table->types[COLOR_layout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "TypingColorer#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 282);
show_backtrace(1);
}
/* Covariant cast for argument 1 (elements) <p1:Set[Object]> isa Set[TypingColorer#0] */
/* <p1:Set[Object]> isa Set[TypingColorer#0] */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingColorer#0]", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 282);
show_backtrace(1);
}
var_element = p0;
var_elements = p1;
var_color = p2;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__conflicts_graph]))(self) /* conflicts_graph on <self:TypingColorer[Object]>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 284);
show_backtrace(1);
} else {
var8 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var7, var_element) /* has_key on <var7:nullable HashMap[Object, Set[Object]]>*/;
}
if (var8){
var9 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__conflicts_graph]))(self) /* conflicts_graph on <self:TypingColorer[Object]>*/;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 285);
show_backtrace(1);
} else {
var10 = ((val* (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var9, var_element) /* [] on <var9:nullable HashMap[Object, Set[Object]]>*/;
}
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__iterator]))(var10) /* iterator on <var10:nullable Object(Set[Object])>*/;
for(;;) {
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
if(!var12) break;
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
var_st = var13;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__coloration_result]))(self) /* coloration_result on <self:TypingColorer[Object]>*/;
var16 = ((short int (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var15, var_st) /* has_key on <var15:Map[Object, Int]>*/;
var_ = var16;
if (var16){
var17 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__coloration_result]))(self) /* coloration_result on <self:TypingColorer[Object]>*/;
var18 = ((val* (*)(val*, val*))(var17->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var17, var_st) /* [] on <var17:Map[Object, Int]>*/;
{ /* Inline kernel#Int#== (var18,var_color) */
var21 = (var18 != NULL) && (var18->class == &class_kernel__Int);
if (var21) {
var22 = ((struct instance_kernel__Int*)var18)->value; /* autounbox from nullable Object to Int */;
var21 = (var22 == var_color);
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var14 = var19;
} else {
var14 = var_;
}
if (var14){
var23 = 0;
var = var23;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
var24 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingColorer[Object]>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 289);
show_backtrace(1);
} else {
var25 = ((val* (*)(val*, val*))(var24->class->vft[COLOR_poset__POSet___91d_93d]))(var24, var_element) /* [] on <var24:nullable POSet[Object]>*/;
}
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_poset__POSetElement__greaters]))(var25) /* greaters on <var25:POSetElement[Object]>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Collection__iterator]))(var26) /* iterator on <var26:Collection[Object]>*/;
for(;;) {
var28 = ((short int (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var27) /* is_ok on <var27:Iterator[nullable Object]>*/;
if(!var28) break;
var29 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__item]))(var27) /* item on <var27:Iterator[nullable Object]>*/;
var_st30 = var29;
var31 = ((short int (*)(val*, val*))(var_st30->class->vft[COLOR_kernel__Object___61d_61d]))(var_st30, var_element) /* == on <var_st30:Object>*/;
if (var31){
goto CONTINUE_label32;
} else {
}
var34 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__coloration_result]))(self) /* coloration_result on <self:TypingColorer[Object]>*/;
var35 = ((short int (*)(val*, val*))(var34->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var34, var_st30) /* has_key on <var34:Map[Object, Int]>*/;
var_36 = var35;
if (var35){
var37 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__coloration_result]))(self) /* coloration_result on <self:TypingColorer[Object]>*/;
var38 = ((val* (*)(val*, val*))(var37->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var37, var_st30) /* [] on <var37:Map[Object, Int]>*/;
{ /* Inline kernel#Int#== (var38,var_color) */
var41 = (var38 != NULL) && (var38->class == &class_kernel__Int);
if (var41) {
var42 = ((struct instance_kernel__Int*)var38)->value; /* autounbox from nullable Object to Int */;
var41 = (var42 == var_color);
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var33 = var39;
} else {
var33 = var_36;
}
if (var33){
var43 = 0;
var = var43;
goto RET_LABEL;
} else {
}
CONTINUE_label32: (void)0;
((void (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__next]))(var27) /* next on <var27:Iterator[nullable Object]>*/;
}
BREAK_label32: (void)0;
var44 = 1;
var = var44;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#is_color_free for (self: Object, Object, Set[Object], Int): Bool */
short int VIRTUAL_layout_builders__TypingColorer__is_color_free(val* self, val* p0, val* p1, long p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = layout_builders__TypingColorer__is_color_free(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#tag_elements for (self: TypingColorer[Object], Set[Object]) */
void layout_builders__TypingColorer__tag_elements(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Set[Object] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_element /* var element: Object */;
short int var4 /* : Bool */;
short int var_all_subelements_si /* var all_subelements_si: Bool */;
val* var5 /* : nullable POSet[Object] */;
val* var6 /* : POSetElement[Object] */;
val* var7 /* : Collection[Object] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_subelem /* var subelem: Object */;
val* var11 /* : nullable POSet[Object] */;
val* var12 /* : POSetElement[Object] */;
val* var13 /* : Collection[Object] */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : nullable POSet[Object] */;
val* var25 /* : POSetElement[Object] */;
val* var26 /* : Collection[Object] */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
val* var36 /* : Set[Object] */;
val* var37 /* : nullable POSet[Object] */;
val* var38 /* : POSetElement[Object] */;
val* var39 /* : Collection[Object] */;
val* var40 /* : Set[Object] */;
short int var41 /* : Bool */;
val* var42 /* : Set[Object] */;
val* var43 /* : nullable POSet[Object] */;
val* var44 /* : POSetElement[Object] */;
val* var45 /* : Collection[Object] */;
val* var46 /* : Set[Object] */;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[TypingColorer#0] */
/* <p0:Set[Object]> isa Set[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 296);
show_backtrace(1);
}
var_elements = p0;
var1 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_elements) /* iterator on <var_elements:Set[Object]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_element = var3;
var4 = 1;
var_all_subelements_si = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingColorer[Object]>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 301);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*, val*))(var5->class->vft[COLOR_poset__POSet___91d_93d]))(var5, var_element) /* [] on <var5:nullable POSet[Object]>*/;
}
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_poset__POSetElement__smallers]))(var6) /* smallers on <var6:POSetElement[Object]>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var7) /* iterator on <var7:Collection[Object]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_subelem = var10;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingColorer[Object]>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 302);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_poset__POSet___91d_93d]))(var11, var_subelem) /* [] on <var11:nullable POSet[Object]>*/;
}
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var12) /* direct_greaters on <var12:POSetElement[Object]>*/;
var14 = ((long (*)(val*))(var13->class->vft[COLOR_abstract_collection__Collection__length]))(var13) /* length on <var13:Collection[Object]>*/;
var15 = 1;
{ /* Inline kernel#Int#> (var14,var15) */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (!var18) {
var_class_name21 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var22 = var14 > var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
if (var16){
var23 = 0;
var_all_subelements_si = var23;
goto BREAK_label;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingColorer[Object]>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 309);
show_backtrace(1);
} else {
var25 = ((val* (*)(val*, val*))(var24->class->vft[COLOR_poset__POSet___91d_93d]))(var24, var_element) /* [] on <var24:nullable POSet[Object]>*/;
}
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var25) /* direct_greaters on <var25:POSetElement[Object]>*/;
var27 = ((long (*)(val*))(var26->class->vft[COLOR_abstract_collection__Collection__length]))(var26) /* length on <var26:Collection[Object]>*/;
var28 = 1;
{ /* Inline kernel#Int#> (var27,var28) */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (!var31) {
var_class_name34 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var35 = var27 > var28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
if (var29){
var36 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__core]))(self) /* core on <self:TypingColorer[Object]>*/;
var37 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingColorer[Object]>*/;
if (var37 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 310);
show_backtrace(1);
} else {
var38 = ((val* (*)(val*, val*))(var37->class->vft[COLOR_poset__POSet___91d_93d]))(var37, var_element) /* [] on <var37:nullable POSet[Object]>*/;
}
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_poset__POSetElement__greaters]))(var38) /* greaters on <var38:POSetElement[Object]>*/;
((void (*)(val*, val*))(var36->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var36, var39) /* add_all on <var36:Set[Object]>*/;
if (var_all_subelements_si){
var40 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__border]))(self) /* border on <self:TypingColorer[Object]>*/;
((void (*)(val*, val*))(var40->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var40, var_element) /* add on <var40:Set[Object]>*/;
} else {
}
} else {
var41 = !var_all_subelements_si;
if (var41){
var42 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__core]))(self) /* core on <self:TypingColorer[Object]>*/;
var43 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingColorer[Object]>*/;
if (var43 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 315);
show_backtrace(1);
} else {
var44 = ((val* (*)(val*, val*))(var43->class->vft[COLOR_poset__POSet___91d_93d]))(var43, var_element) /* [] on <var43:nullable POSet[Object]>*/;
}
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_poset__POSetElement__greaters]))(var44) /* greaters on <var44:POSetElement[Object]>*/;
((void (*)(val*, val*))(var42->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var42, var45) /* add_all on <var42:Set[Object]>*/;
} else {
var46 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__crown]))(self) /* crown on <self:TypingColorer[Object]>*/;
((void (*)(val*, val*))(var46->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var46, var_element) /* add on <var46:Set[Object]>*/;
}
}
CONTINUE_label47: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label47: (void)0;
RET_LABEL:;
}
/* method layout_builders#TypingColorer#tag_elements for (self: Object, Set[Object]) */
void VIRTUAL_layout_builders__TypingColorer__tag_elements(val* self, val* p0) {
layout_builders__TypingColorer__tag_elements(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#build_conflicts_graph for (self: TypingColorer[Object]) */
void layout_builders__TypingColorer__build_conflicts_graph(val* self) {
val* var /* : HashMap[Object, HashSet[Object]] */;
val* var1 /* : Set[Object] */;
val* var2 /* : Array[Object] */;
val* var_core /* var core: Array[Object] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_t /* var t: Object */;
val* var6 /* : Array[Object] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_i /* var i: Object */;
short int var10 /* : Bool */;
val* var11 /* : Array[Object] */;
val* var_lin_i /* var lin_i: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_j /* var j: Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
val* var20 /* : Array[Object] */;
val* var_lin_j /* var lin_j: Array[Object] */;
val* var21 /* : Array[nullable Object] */;
val* var_d_ij /* var d_ij: Array[Object] */;
val* var22 /* : Array[nullable Object] */;
val* var_d_ji /* var d_ji: Array[Object] */;
val* var23 /* : Iterator[nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_ed1 /* var ed1: Object */;
val* var26 /* : nullable HashMap[Object, Set[Object]] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable HashMap[Object, Set[Object]] */;
val* var30 /* : HashSet[Object] */;
val* var31 /* : Iterator[nullable Object] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_ed2 /* var ed2: Object */;
val* var34 /* : nullable HashMap[Object, Set[Object]] */;
val* var35 /* : nullable Object */;
val* var38 /* : Iterator[nullable Object] */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_ed141 /* var ed1: Object */;
val* var42 /* : nullable HashMap[Object, Set[Object]] */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : nullable HashMap[Object, Set[Object]] */;
val* var46 /* : HashSet[Object] */;
val* var47 /* : Iterator[nullable Object] */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_ed250 /* var ed2: Object */;
val* var51 /* : nullable HashMap[Object, Set[Object]] */;
val* var52 /* : nullable Object */;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingColorer_FT0hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[Object, HashSet[Object]]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__conflicts_graph_61d]))(self, var) /* conflicts_graph= on <self:TypingColorer[Object]>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__core]))(self) /* core on <self:TypingColorer[Object]>*/;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__reverse_linearize]))(self, var1) /* reverse_linearize on <self:TypingColorer[Object]>*/;
var_core = var2;
var3 = ((val* (*)(val*))(var_core->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_core) /* iterator on <var_core:Array[Object]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_t = var5;
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__linear_extension]))(self, var_t) /* linear_extension on <self:TypingColorer[Object]>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Collection__iterator]))(var6) /* iterator on <var6:Array[Object]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_i = var9;
var10 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___61d_61d]))(var_t, var_i) /* == on <var_t:Object>*/;
if (var10){
goto CONTINUE_label;
} else {
}
var11 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__linear_extension]))(self, var_i) /* linear_extension on <self:TypingColorer[Object]>*/;
var_lin_i = var11;
var12 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__linear_extension]))(self, var_t) /* linear_extension on <self:TypingColorer[Object]>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:Array[Object]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var_j = var15;
var17 = ((short int (*)(val*, val*))(var_i->class->vft[COLOR_kernel__Object___61d_61d]))(var_i, var_j) /* == on <var_i:Object>*/;
var_ = var17;
if (var17){
var16 = var_;
} else {
var18 = ((short int (*)(val*, val*))(var_j->class->vft[COLOR_kernel__Object___61d_61d]))(var_j, var_t) /* == on <var_j:Object>*/;
var16 = var18;
}
if (var16){
goto CONTINUE_label19;
} else {
}
var20 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__linear_extension]))(self, var_j) /* linear_extension on <self:TypingColorer[Object]>*/;
var_lin_j = var20;
var21 = ((val* (*)(val*, val*))(var_lin_i->class->vft[COLOR_abstract_compiler__Array___45d]))(var_lin_i, var_lin_j) /* - on <var_lin_i:Array[Object]>*/;
var_d_ij = var21;
var22 = ((val* (*)(val*, val*))(var_lin_j->class->vft[COLOR_abstract_compiler__Array___45d]))(var_lin_j, var_lin_i) /* - on <var_lin_j:Array[Object]>*/;
var_d_ji = var22;
var23 = ((val* (*)(val*))(var_d_ij->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_d_ij) /* iterator on <var_d_ij:Array[Object]>*/;
for(;;) {
var24 = ((short int (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var23) /* is_ok on <var23:Iterator[nullable Object]>*/;
if(!var24) break;
var25 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__item]))(var23) /* item on <var23:Iterator[nullable Object]>*/;
var_ed1 = var25;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__conflicts_graph]))(self) /* conflicts_graph on <self:TypingColorer[Object]>*/;
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 340);
show_backtrace(1);
} else {
var27 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var26, var_ed1) /* has_key on <var26:nullable HashMap[Object, Set[Object]]>*/;
}
var28 = !var27;
if (var28){
var29 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__conflicts_graph]))(self) /* conflicts_graph on <self:TypingColorer[Object]>*/;
var30 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var30->class->vft[COLOR_hash_collection__HashSet__init]))(var30) /* init on <var30:HashSet[Object]>*/;
if (var29 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 340);
show_backtrace(1);
} else {
((void (*)(val*, val*, val*))(var29->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var29, var_ed1, var30) /* []= on <var29:nullable HashMap[Object, Set[Object]]>*/;
}
} else {
}
var31 = ((val* (*)(val*))(var_d_ji->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_d_ji) /* iterator on <var_d_ji:Array[Object]>*/;
for(;;) {
var32 = ((short int (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var31) /* is_ok on <var31:Iterator[nullable Object]>*/;
if(!var32) break;
var33 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__item]))(var31) /* item on <var31:Iterator[nullable Object]>*/;
var_ed2 = var33;
var34 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__conflicts_graph]))(self) /* conflicts_graph on <self:TypingColorer[Object]>*/;
if (var34 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 342);
show_backtrace(1);
} else {
var35 = ((val* (*)(val*, val*))(var34->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var34, var_ed1) /* [] on <var34:nullable HashMap[Object, Set[Object]]>*/;
}
((void (*)(val*, val*))(var35->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var35, var_ed2) /* add on <var35:nullable Object(Set[Object])>*/;
CONTINUE_label36: (void)0;
((void (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__next]))(var31) /* next on <var31:Iterator[nullable Object]>*/;
}
BREAK_label36: (void)0;
CONTINUE_label37: (void)0;
((void (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__next]))(var23) /* next on <var23:Iterator[nullable Object]>*/;
}
BREAK_label37: (void)0;
var38 = ((val* (*)(val*))(var_d_ij->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_d_ij) /* iterator on <var_d_ij:Array[Object]>*/;
for(;;) {
var39 = ((short int (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var38) /* is_ok on <var38:Iterator[nullable Object]>*/;
if(!var39) break;
var40 = ((val* (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__item]))(var38) /* item on <var38:Iterator[nullable Object]>*/;
var_ed141 = var40;
var42 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__conflicts_graph]))(self) /* conflicts_graph on <self:TypingColorer[Object]>*/;
if (var42 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 345);
show_backtrace(1);
} else {
var43 = ((short int (*)(val*, val*))(var42->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var42, var_ed141) /* has_key on <var42:nullable HashMap[Object, Set[Object]]>*/;
}
var44 = !var43;
if (var44){
var45 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__conflicts_graph]))(self) /* conflicts_graph on <self:TypingColorer[Object]>*/;
var46 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var46->class->vft[COLOR_hash_collection__HashSet__init]))(var46) /* init on <var46:HashSet[Object]>*/;
if (var45 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 345);
show_backtrace(1);
} else {
((void (*)(val*, val*, val*))(var45->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var45, var_ed141, var46) /* []= on <var45:nullable HashMap[Object, Set[Object]]>*/;
}
} else {
}
var47 = ((val* (*)(val*))(var_d_ji->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_d_ji) /* iterator on <var_d_ji:Array[Object]>*/;
for(;;) {
var48 = ((short int (*)(val*))(var47->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var47) /* is_ok on <var47:Iterator[nullable Object]>*/;
if(!var48) break;
var49 = ((val* (*)(val*))(var47->class->vft[COLOR_abstract_collection__Iterator__item]))(var47) /* item on <var47:Iterator[nullable Object]>*/;
var_ed250 = var49;
var51 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__conflicts_graph]))(self) /* conflicts_graph on <self:TypingColorer[Object]>*/;
if (var51 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 347);
show_backtrace(1);
} else {
var52 = ((val* (*)(val*, val*))(var51->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var51, var_ed141) /* [] on <var51:nullable HashMap[Object, Set[Object]]>*/;
}
((void (*)(val*, val*))(var52->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var52, var_ed250) /* add on <var52:nullable Object(Set[Object])>*/;
CONTINUE_label53: (void)0;
((void (*)(val*))(var47->class->vft[COLOR_abstract_collection__Iterator__next]))(var47) /* next on <var47:Iterator[nullable Object]>*/;
}
BREAK_label53: (void)0;
CONTINUE_label54: (void)0;
((void (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__next]))(var38) /* next on <var38:Iterator[nullable Object]>*/;
}
BREAK_label54: (void)0;
CONTINUE_label19: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label19: (void)0;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label55: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label55: (void)0;
RET_LABEL:;
}
/* method layout_builders#TypingColorer#build_conflicts_graph for (self: Object) */
void VIRTUAL_layout_builders__TypingColorer__build_conflicts_graph(val* self) {
layout_builders__TypingColorer__build_conflicts_graph(self);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#conflicts_graph for (self: TypingColorer[Object]): nullable HashMap[Object, Set[Object]] */
val* layout_builders__TypingColorer__conflicts_graph(val* self) {
val* var /* : nullable HashMap[Object, Set[Object]] */;
val* var1 /* : nullable HashMap[Object, Set[Object]] */;
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dconflicts_graph].val; /* @conflicts_graph on <self:TypingColorer[Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#conflicts_graph for (self: Object): nullable HashMap[Object, Set[Object]] */
val* VIRTUAL_layout_builders__TypingColorer__conflicts_graph(val* self) {
val* var /* : nullable HashMap[Object, Set[Object]] */;
val* var1 /* : nullable HashMap[Object, Set[Object]] */;
var1 = layout_builders__TypingColorer__conflicts_graph(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#conflicts_graph= for (self: TypingColorer[Object], nullable HashMap[Object, Set[Object]]) */
void layout_builders__TypingColorer__conflicts_graph_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (conflicts_graph) <p0:nullable HashMap[Object, Set[Object]]> isa nullable HashMap[TypingColorer#0, Set[TypingColorer#0]] */
/* <p0:nullable HashMap[Object, Set[Object]]> isa nullable HashMap[TypingColorer#0, Set[TypingColorer#0]] */
type_struct = self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingColorer_FT0abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable HashMap[TypingColorer#0, Set[TypingColorer#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 354);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingColorer___64dconflicts_graph].val = p0; /* @conflicts_graph on <self:TypingColorer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingColorer#conflicts_graph= for (self: Object, nullable HashMap[Object, Set[Object]]) */
void VIRTUAL_layout_builders__TypingColorer__conflicts_graph_61d(val* self, val* p0) {
layout_builders__TypingColorer__conflicts_graph_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#linear_extensions_cache for (self: TypingColorer[Object]): Map[Object, Array[Object]] */
val* layout_builders__TypingColorer__linear_extensions_cache(val* self) {
val* var /* : Map[Object, Array[Object]] */;
val* var1 /* : Map[Object, Array[Object]] */;
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dlinear_extensions_cache].val; /* @linear_extensions_cache on <self:TypingColorer[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @linear_extensions_cache");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 356);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#linear_extensions_cache for (self: Object): Map[Object, Array[Object]] */
val* VIRTUAL_layout_builders__TypingColorer__linear_extensions_cache(val* self) {
val* var /* : Map[Object, Array[Object]] */;
val* var1 /* : Map[Object, Array[Object]] */;
var1 = layout_builders__TypingColorer__linear_extensions_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#linear_extensions_cache= for (self: TypingColorer[Object], Map[Object, Array[Object]]) */
void layout_builders__TypingColorer__linear_extensions_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (linear_extensions_cache) <p0:Map[Object, Array[Object]]> isa Map[TypingColorer#0, Array[TypingColorer#0]] */
/* <p0:Map[Object, Array[Object]]> isa Map[TypingColorer#0, Array[TypingColorer#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__TypingColorer_FT0array__Arraylayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[TypingColorer#0, Array[TypingColorer#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 356);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingColorer___64dlinear_extensions_cache].val = p0; /* @linear_extensions_cache on <self:TypingColorer[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingColorer#linear_extensions_cache= for (self: Object, Map[Object, Array[Object]]) */
void VIRTUAL_layout_builders__TypingColorer__linear_extensions_cache_61d(val* self, val* p0) {
layout_builders__TypingColorer__linear_extensions_cache_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingColorer#linear_extension for (self: TypingColorer[Object], Object): Array[Object] */
val* layout_builders__TypingColorer__linear_extension(val* self, val* p0) {
val* var /* : Array[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_element /* var element: Object */;
val* var2 /* : Map[Object, Array[Object]] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : HashSet[Object] */;
val* var_supers /* var supers: HashSet[Object] */;
val* var6 /* : nullable POSet[Object] */;
val* var7 /* : POSetElement[Object] */;
val* var8 /* : Collection[Object] */;
val* var9 /* : Map[Object, Array[Object]] */;
val* var10 /* : Array[Object] */;
val* var11 /* : Map[Object, Array[Object]] */;
val* var12 /* : nullable Object */;
/* Covariant cast for argument 0 (element) <p0:Object> isa TypingColorer#0 */
/* <p0:Object> isa TypingColorer#0 */
type_struct = self->type->resolution_table->types[COLOR_layout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "TypingColorer#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 359);
show_backtrace(1);
}
var_element = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__linear_extensions_cache]))(self) /* linear_extensions_cache on <self:TypingColorer[Object]>*/;
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var2, var_element) /* has_key on <var2:Map[Object, Array[Object]]>*/;
var4 = !var3;
if (var4){
var5 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var5->class->vft[COLOR_hash_collection__HashSet__init]))(var5) /* init on <var5:HashSet[Object]>*/;
var_supers = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingColorer[Object]>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 363);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_poset__POSet___91d_93d]))(var6, var_element) /* [] on <var6:nullable POSet[Object]>*/;
}
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_poset__POSetElement__greaters]))(var7) /* greaters on <var7:POSetElement[Object]>*/;
((void (*)(val*, val*))(var_supers->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_supers, var8) /* add_all on <var_supers:HashSet[Object]>*/;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__linear_extensions_cache]))(self) /* linear_extensions_cache on <self:TypingColorer[Object]>*/;
var10 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__linearize]))(self, var_supers) /* linearize on <self:TypingColorer[Object]>*/;
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var9, var_element, var10) /* []= on <var9:Map[Object, Array[Object]]>*/;
} else {
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingColorer__linear_extensions_cache]))(self) /* linear_extensions_cache on <self:TypingColorer[Object]>*/;
var12 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_element) /* [] on <var11:Map[Object, Array[Object]]>*/;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#linear_extension for (self: Object, Object): Array[Object] */
val* VIRTUAL_layout_builders__TypingColorer__linear_extension(val* self, val* p0) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = layout_builders__TypingColorer__linear_extension(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#reverse_linearize for (self: TypingColorer[Object], Set[Object]): Array[Object] */
val* layout_builders__TypingColorer__reverse_linearize(val* self, val* p0) {
val* var /* : Array[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Set[Object] */;
val* var2 /* : Array[Object] */;
val* var_lin /* var lin: Array[Object] */;
val* var3 /* : nullable POSet[Object] */;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[TypingColorer#0] */
/* <p0:Set[Object]> isa Set[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 369);
show_backtrace(1);
}
var_elements = p0;
var2 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraylayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
var_lin = var2;
((void (*)(val*, val*))(var_lin->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_lin, var_elements) /* add_all on <var_lin:Array[Object]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingColorer[Object]>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 372);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var3->class->vft[COLOR_sorter__AbstractSorter__sort]))(var3, var_lin) /* sort on <var3:nullable POSet[Object]>*/;
}
var = var_lin;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#reverse_linearize for (self: Object, Set[Object]): Array[Object] */
val* VIRTUAL_layout_builders__TypingColorer__reverse_linearize(val* self, val* p0) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = layout_builders__TypingColorer__reverse_linearize(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#linearize for (self: TypingColorer[Object], Set[Object]): Array[Object] */
val* layout_builders__TypingColorer__linearize(val* self, val* p0) {
val* var /* : Array[Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Set[Object] */;
val* var2 /* : Array[Object] */;
val* var3 /* : Array[nullable Object] */;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[TypingColorer#0] */
/* <p0:Set[Object]> isa Set[TypingColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 375);
show_backtrace(1);
}
var_elements = p0;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__reverse_linearize]))(self, var_elements) /* reverse_linearize on <self:TypingColorer[Object]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_array__AbstractArrayRead__reversed]))(var2) /* reversed on <var2:Array[Object]>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingColorer#linearize for (self: Object, Set[Object]): Array[Object] */
val* VIRTUAL_layout_builders__TypingColorer__linearize(val* self, val* p0) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = layout_builders__TypingColorer__linearize(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MTypeColorer#init for (self: MTypeColorer, MModule) */
void layout_builders__MTypeColorer__init(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MTypePOSetBuilder */;
var_mmodule = p0;
var = NEW_layout_builders__MTypePOSetBuilder(&type_layout_builders__MTypePOSetBuilder);
((void (*)(val*, val*))(var->class->vft[COLOR_layout_builders__POSetBuilder__init]))(var, var_mmodule) /* init on <var:MTypePOSetBuilder>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__init]))(self, var_mmodule, var) /* init on <self:MTypeColorer>*/;
RET_LABEL:;
}
/* method layout_builders#MTypeColorer#init for (self: Object, MModule) */
void VIRTUAL_layout_builders__MTypeColorer__init(val* self, val* p0) {
layout_builders__MTypeColorer__init(self, p0);
RET_LABEL:;
}
/* method layout_builders#MClassColorer#init for (self: MClassColorer, MModule) */
void layout_builders__MClassColorer__init(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MClassPOSetBuilder */;
var_mmodule = p0;
var = NEW_layout_builders__MClassPOSetBuilder(&type_layout_builders__MClassPOSetBuilder);
((void (*)(val*, val*))(var->class->vft[COLOR_layout_builders__POSetBuilder__init]))(var, var_mmodule) /* init on <var:MClassPOSetBuilder>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_layout_builders__TypingColorer__init]))(self, var_mmodule, var) /* init on <self:MClassColorer>*/;
RET_LABEL:;
}
/* method layout_builders#MClassColorer#init for (self: Object, MModule) */
void VIRTUAL_layout_builders__MClassColorer__init(val* self, val* p0) {
layout_builders__MClassColorer__init(self, p0);
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#mmodule for (self: MPropertyColorer[PropertyLayoutElement]): MModule */
val* layout_builders__MPropertyColorer__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_layout_builders__MPropertyColorer___64dmmodule].val; /* @mmodule on <self:MPropertyColorer[PropertyLayoutElement]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 394);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyColorer#mmodule for (self: Object): MModule */
val* VIRTUAL_layout_builders__MPropertyColorer__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = layout_builders__MPropertyColorer__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyColorer#mmodule= for (self: MPropertyColorer[PropertyLayoutElement], MModule) */
void layout_builders__MPropertyColorer__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_layout_builders__MPropertyColorer___64dmmodule].val = p0; /* @mmodule on <self:MPropertyColorer[PropertyLayoutElement]> */
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#mmodule= for (self: Object, MModule) */
void VIRTUAL_layout_builders__MPropertyColorer__mmodule_61d(val* self, val* p0) {
layout_builders__MPropertyColorer__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#class_colorer for (self: MPropertyColorer[PropertyLayoutElement]): MClassColorer */
val* layout_builders__MPropertyColorer__class_colorer(val* self) {
val* var /* : MClassColorer */;
val* var1 /* : MClassColorer */;
var1 = self->attrs[COLOR_layout_builders__MPropertyColorer___64dclass_colorer].val; /* @class_colorer on <self:MPropertyColorer[PropertyLayoutElement]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @class_colorer");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 395);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyColorer#class_colorer for (self: Object): MClassColorer */
val* VIRTUAL_layout_builders__MPropertyColorer__class_colorer(val* self) {
val* var /* : MClassColorer */;
val* var1 /* : MClassColorer */;
var1 = layout_builders__MPropertyColorer__class_colorer(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyColorer#class_colorer= for (self: MPropertyColorer[PropertyLayoutElement], MClassColorer) */
void layout_builders__MPropertyColorer__class_colorer_61d(val* self, val* p0) {
self->attrs[COLOR_layout_builders__MPropertyColorer___64dclass_colorer].val = p0; /* @class_colorer on <self:MPropertyColorer[PropertyLayoutElement]> */
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#class_colorer= for (self: Object, MClassColorer) */
void VIRTUAL_layout_builders__MPropertyColorer__class_colorer_61d(val* self, val* p0) {
layout_builders__MPropertyColorer__class_colorer_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#coloration_result for (self: MPropertyColorer[PropertyLayoutElement]): Map[PropertyLayoutElement, Int] */
val* layout_builders__MPropertyColorer__coloration_result(val* self) {
val* var /* : Map[PropertyLayoutElement, Int] */;
val* var1 /* : Map[PropertyLayoutElement, Int] */;
var1 = self->attrs[COLOR_layout_builders__MPropertyColorer___64dcoloration_result].val; /* @coloration_result on <self:MPropertyColorer[PropertyLayoutElement]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @coloration_result");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 396);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyColorer#coloration_result for (self: Object): Map[PropertyLayoutElement, Int] */
val* VIRTUAL_layout_builders__MPropertyColorer__coloration_result(val* self) {
val* var /* : Map[PropertyLayoutElement, Int] */;
val* var1 /* : Map[PropertyLayoutElement, Int] */;
var1 = layout_builders__MPropertyColorer__coloration_result(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyColorer#coloration_result= for (self: MPropertyColorer[PropertyLayoutElement], Map[PropertyLayoutElement, Int]) */
void layout_builders__MPropertyColorer__coloration_result_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (coloration_result) <p0:Map[PropertyLayoutElement, Int]> isa Map[MPropertyColorer#0, Int] */
/* <p0:Map[PropertyLayoutElement, Int]> isa Map[MPropertyColorer#0, Int] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__MPropertyColorer_FT0kernel__Int];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[MPropertyColorer#0, Int]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 396);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__MPropertyColorer___64dcoloration_result].val = p0; /* @coloration_result on <self:MPropertyColorer[PropertyLayoutElement]> */
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#coloration_result= for (self: Object, Map[PropertyLayoutElement, Int]) */
void VIRTUAL_layout_builders__MPropertyColorer__coloration_result_61d(val* self, val* p0) {
layout_builders__MPropertyColorer__coloration_result_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#init for (self: MPropertyColorer[PropertyLayoutElement], MModule, MClassColorer) */
void layout_builders__MPropertyColorer__init(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_class_colorer /* var class_colorer: MClassColorer */;
var_mmodule = p0;
var_class_colorer = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__mmodule_61d]))(self, var_mmodule) /* mmodule= on <self:MPropertyColorer[PropertyLayoutElement]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__class_colorer_61d]))(self, var_class_colorer) /* class_colorer= on <self:MPropertyColorer[PropertyLayoutElement]>*/;
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#init for (self: Object, MModule, MClassColorer) */
void VIRTUAL_layout_builders__MPropertyColorer__init(val* self, val* p0, val* p1) {
layout_builders__MPropertyColorer__init(self, p0, p1);
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#build_layout for (self: MPropertyColorer[PropertyLayoutElement], Map[MClass, Set[PropertyLayoutElement]]): Layout[PropertyLayoutElement] */
val* layout_builders__MPropertyColorer__build_layout(val* self, val* p0) {
val* var /* : Layout[PropertyLayoutElement] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Map[MClass, Set[PropertyLayoutElement]] */;
val* var2 /* : Layout[PropertyLayoutElement] */;
val* var_result /* var result: Layout[PropertyLayoutElement] */;
val* var3 /* : Map[PropertyLayoutElement, Int] */;
/* Covariant cast for argument 0 (elements) <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[MPropertyColorer#0]] */
/* <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[MPropertyColorer#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapmodel__MClassabstract_collection__Setlayout_builders__MPropertyColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[MClass, Set[MPropertyColorer#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 403);
show_backtrace(1);
}
var_elements = p0;
var2 = NEW_layout_builders__Layout(self->type->resolution_table->types[COLOR_layout_builders__Layoutlayout_builders__MPropertyColorer_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_layout_builders__Layout__init]))(var2) /* init on <var2:Layout[PropertyLayoutElement]>*/;
var_result = var2;
var3 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__colorize]))(self, var_elements) /* colorize on <self:MPropertyColorer[PropertyLayoutElement]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__pos_61d]))(var_result, var3) /* pos= on <var_result:Layout[PropertyLayoutElement]>*/;
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyColorer#build_layout for (self: Object, Map[MClass, Set[PropertyLayoutElement]]): Layout[PropertyLayoutElement] */
val* VIRTUAL_layout_builders__MPropertyColorer__build_layout(val* self, val* p0) {
val* var /* : Layout[PropertyLayoutElement] */;
val* var1 /* : Layout[PropertyLayoutElement] */;
var1 = layout_builders__MPropertyColorer__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyColorer#colorize for (self: MPropertyColorer[PropertyLayoutElement], Map[MClass, Set[PropertyLayoutElement]]): Map[PropertyLayoutElement, Int] */
val* layout_builders__MPropertyColorer__colorize(val* self, val* p0) {
val* var /* : Map[PropertyLayoutElement, Int] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Map[MClass, Set[PropertyLayoutElement]] */;
val* var2 /* : Map[PropertyLayoutElement, Int] */;
/* Covariant cast for argument 0 (elements) <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[MPropertyColorer#0]] */
/* <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[MPropertyColorer#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapmodel__MClassabstract_collection__Setlayout_builders__MPropertyColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[MClass, Set[MPropertyColorer#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 410);
show_backtrace(1);
}
var_elements = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__colorize_core]))(self, var_elements) /* colorize_core on <self:MPropertyColorer[PropertyLayoutElement]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__colorize_crown]))(self, var_elements) /* colorize_crown on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__coloration_result]))(self) /* coloration_result on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyColorer#colorize for (self: Object, Map[MClass, Set[PropertyLayoutElement]]): Map[PropertyLayoutElement, Int] */
val* VIRTUAL_layout_builders__MPropertyColorer__colorize(val* self, val* p0) {
val* var /* : Map[PropertyLayoutElement, Int] */;
val* var1 /* : Map[PropertyLayoutElement, Int] */;
var1 = layout_builders__MPropertyColorer__colorize(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyColorer#colorize_core for (self: MPropertyColorer[PropertyLayoutElement], Map[MClass, Set[PropertyLayoutElement]]) */
void layout_builders__MPropertyColorer__colorize_core(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Map[MClass, Set[PropertyLayoutElement]] */;
long var1 /* : Int */;
long var_min_color /* var min_color: Int */;
val* var2 /* : MClassColorer */;
val* var3 /* : Set[Object] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
long var_color /* var color: Int */;
val* var7 /* : MModule */;
val* var8 /* : POSetElement[MClass] */;
val* var9 /* : Collection[Object] */;
long var10 /* : Int */;
val* var11 /* : MClassColorer */;
val* var12 /* : nullable HashMap[Object, Set[Object]] */;
short int var13 /* : Bool */;
val* var14 /* : MClassColorer */;
val* var15 /* : nullable HashMap[Object, Set[Object]] */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
val* var18 /* : nullable Object */;
/* Covariant cast for argument 0 (elements) <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[MPropertyColorer#0]] */
/* <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[MPropertyColorer#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapmodel__MClassabstract_collection__Setlayout_builders__MPropertyColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[MClass, Set[MPropertyColorer#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 416);
show_backtrace(1);
}
var_elements = p0;
var1 = 0;
var_min_color = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__class_colorer]))(self) /* class_colorer on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_layout_builders__TypingColorer__core]))(var2) /* core on <var2:MClassColorer>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:Set[Object](Set[MClass])>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_mclass = var6;
var_color = var_min_color;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__mmodule]))(self) /* mmodule on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var8 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__in_hierarchy]))(var_mclass, var7) /* in_hierarchy on <var_mclass:MClass>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var8) /* direct_greaters on <var8:POSetElement[MClass]>*/;
var10 = ((long (*)(val*, long, val*, val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__max_color]))(self, var_color, var9, var_elements) /* max_color on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var_color = var10;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__class_colorer]))(self) /* class_colorer on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_layout_builders__TypingColorer__conflicts_graph]))(var11) /* conflicts_graph on <var11:MClassColorer>*/;
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 424);
show_backtrace(1);
} else {
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var12, var_mclass) /* has_key on <var12:nullable HashMap[Object, Set[Object]](nullable HashMap[MClass, Set[MClass]])>*/;
}
if (var13){
var14 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__class_colorer]))(self) /* class_colorer on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_layout_builders__TypingColorer__conflicts_graph]))(var14) /* conflicts_graph on <var14:MClassColorer>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 425);
show_backtrace(1);
} else {
var16 = ((val* (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var15, var_mclass) /* [] on <var15:nullable HashMap[Object, Set[Object]](nullable HashMap[MClass, Set[MClass]])>*/;
}
var17 = ((long (*)(val*, long, val*, val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__max_color]))(self, var_color, var16, var_elements) /* max_color on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var_color = var17;
} else {
}
var18 = ((val* (*)(val*, val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_elements, var_mclass) /* [] on <var_elements:Map[MClass, Set[PropertyLayoutElement]]>*/;
((void (*)(val*, val*, long))(self->class->vft[COLOR_layout_builders__MPropertyColorer__colorize_elements]))(self, var18, var_color) /* colorize_elements on <self:MPropertyColorer[PropertyLayoutElement]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#colorize_core for (self: Object, Map[MClass, Set[PropertyLayoutElement]]) */
void VIRTUAL_layout_builders__MPropertyColorer__colorize_core(val* self, val* p0) {
layout_builders__MPropertyColorer__colorize_core(self, p0);
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#colorize_crown for (self: MPropertyColorer[PropertyLayoutElement], Map[MClass, Set[PropertyLayoutElement]]) */
void layout_builders__MPropertyColorer__colorize_crown(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Map[MClass, Set[PropertyLayoutElement]] */;
val* var1 /* : MClassColorer */;
val* var2 /* : Set[Object] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var6 /* : HashSet[MClass] */;
val* var_parents /* var parents: HashSet[MClass] */;
val* var7 /* : MModule */;
val* var8 /* : POSet[MClass] */;
short int var9 /* : Bool */;
val* var10 /* : MModule */;
val* var11 /* : POSetElement[MClass] */;
val* var12 /* : Collection[Object] */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
long var15 /* : Int */;
/* Covariant cast for argument 0 (elements) <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[MPropertyColorer#0]] */
/* <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[MPropertyColorer#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapmodel__MClassabstract_collection__Setlayout_builders__MPropertyColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[MClass, Set[MPropertyColorer#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 431);
show_backtrace(1);
}
var_elements = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__class_colorer]))(self) /* class_colorer on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_layout_builders__TypingColorer__crown]))(var1) /* crown on <var1:MClassColorer>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Set[Object](Set[MClass])>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_mclass = var5;
var6 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
((void (*)(val*))(var6->class->vft[COLOR_hash_collection__HashSet__init]))(var6) /* init on <var6:HashSet[MClass]>*/;
var_parents = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__mmodule]))(self) /* mmodule on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(var7) /* flatten_mclass_hierarchy on <var7:MModule>*/;
var9 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__Collection__has]))(var8, var_mclass) /* has on <var8:POSet[MClass]>*/;
if (var9){
var10 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__mmodule]))(self) /* mmodule on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var11 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__in_hierarchy]))(var_mclass, var10) /* in_hierarchy on <var_mclass:MClass>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var11) /* direct_greaters on <var11:POSetElement[MClass]>*/;
((void (*)(val*, val*))(var_parents->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_parents, var12) /* add_all on <var_parents:HashSet[MClass]>*/;
} else {
}
var13 = ((val* (*)(val*, val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_elements, var_mclass) /* [] on <var_elements:Map[MClass, Set[PropertyLayoutElement]]>*/;
var14 = 0;
var15 = ((long (*)(val*, long, val*, val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__max_color]))(self, var14, var_parents, var_elements) /* max_color on <self:MPropertyColorer[PropertyLayoutElement]>*/;
((void (*)(val*, val*, long))(self->class->vft[COLOR_layout_builders__MPropertyColorer__colorize_elements]))(self, var13, var15) /* colorize_elements on <self:MPropertyColorer[PropertyLayoutElement]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#colorize_crown for (self: Object, Map[MClass, Set[PropertyLayoutElement]]) */
void VIRTUAL_layout_builders__MPropertyColorer__colorize_crown(val* self, val* p0) {
layout_builders__MPropertyColorer__colorize_crown(self, p0);
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#colorize_elements for (self: MPropertyColorer[PropertyLayoutElement], Collection[PropertyLayoutElement], Int) */
void layout_builders__MPropertyColorer__colorize_elements(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Collection[PropertyLayoutElement] */;
long var_start_color /* var start_color: Int */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_element /* var element: PropertyLayoutElement */;
val* var4 /* : Map[PropertyLayoutElement, Int] */;
short int var5 /* : Bool */;
val* var6 /* : Map[PropertyLayoutElement, Int] */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
/* Covariant cast for argument 0 (elements) <p0:Collection[PropertyLayoutElement]> isa Collection[MPropertyColorer#0] */
/* <p0:Collection[PropertyLayoutElement]> isa Collection[MPropertyColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionlayout_builders__MPropertyColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[MPropertyColorer#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 442);
show_backtrace(1);
}
var_elements = p0;
var_start_color = p1;
var1 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_elements) /* iterator on <var_elements:Collection[PropertyLayoutElement]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_element = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__coloration_result]))(self) /* coloration_result on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var5 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var4, var_element) /* has_key on <var4:Map[PropertyLayoutElement, Int]>*/;
if (var5){
goto CONTINUE_label;
} else {
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__coloration_result]))(self) /* coloration_result on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var7 = BOX_kernel__Int(var_start_color); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var6->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var6, var_element, var7) /* []= on <var6:Map[PropertyLayoutElement, Int]>*/;
var8 = 1;
{ /* Inline kernel#Int#+ (var_start_color,var8) */
var11 = var_start_color + var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_start_color = var9;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#colorize_elements for (self: Object, Collection[PropertyLayoutElement], Int) */
void VIRTUAL_layout_builders__MPropertyColorer__colorize_elements(val* self, val* p0, long p1) {
layout_builders__MPropertyColorer__colorize_elements(self, p0, p1);
RET_LABEL:;
}
/* method layout_builders#MPropertyColorer#max_color for (self: MPropertyColorer[PropertyLayoutElement], Int, Collection[MClass], Map[MClass, Set[PropertyLayoutElement]]): Int */
long layout_builders__MPropertyColorer__max_color(val* self, long p0, val* p1, val* p2) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_min_color /* var min_color: Int */;
val* var_mclasses /* var mclasses: Collection[MClass] */;
val* var_elements /* var elements: Map[MClass, Set[PropertyLayoutElement]] */;
long var_max_color /* var max_color: Int */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var5 /* : nullable Object */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mproperty /* var mproperty: PropertyLayoutElement */;
long var_color /* var color: Int */;
val* var9 /* : Map[PropertyLayoutElement, Int] */;
short int var10 /* : Bool */;
val* var11 /* : Map[PropertyLayoutElement, Int] */;
val* var12 /* : nullable Object */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
/* Covariant cast for argument 2 (elements) <p2:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[MPropertyColorer#0]] */
/* <p2:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[MPropertyColorer#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapmodel__MClassabstract_collection__Setlayout_builders__MPropertyColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p2->type->table_size) {
var1 = 0;
} else {
var1 = p2->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p2 == NULL ? "null" : p2->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[MClass, Set[MPropertyColorer#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 451);
show_backtrace(1);
}
var_min_color = p0;
var_mclasses = p1;
var_elements = p2;
var_max_color = var_min_color;
var2 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:Collection[MClass]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_mclass = var4;
var5 = ((val* (*)(val*, val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_elements, var_mclass) /* [] on <var_elements:Map[MClass, Set[PropertyLayoutElement]]>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:nullable Object(Set[PropertyLayoutElement])>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_mproperty = var8;
var_color = var_min_color;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__coloration_result]))(self) /* coloration_result on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var9, var_mproperty) /* has_key on <var9:Map[PropertyLayoutElement, Int]>*/;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyColorer__coloration_result]))(self) /* coloration_result on <self:MPropertyColorer[PropertyLayoutElement]>*/;
var12 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_mproperty) /* [] on <var11:Map[PropertyLayoutElement, Int]>*/;
var13 = ((struct instance_kernel__Int*)var12)->value; /* autounbox from nullable Object to Int */;
var_color = var13;
{ /* Inline kernel#Int#>= (var_color,var_max_color) */
/* Covariant cast for argument 0 (i) <var_max_color:Int> isa OTHER */
/* <var_max_color:Int> isa OTHER */
var16 = 1; /* easy <var_max_color:Int> isa OTHER*/
if (!var16) {
var_class_name19 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var20 = var_color >= var_max_color;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
if (var14){
var21 = 1;
{ /* Inline kernel#Int#+ (var_color,var21) */
var24 = var_color + var21;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var_max_color = var22;
} else {
}
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label25: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label25: (void)0;
var = var_max_color;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyColorer#max_color for (self: Object, Int, Collection[MClass], Map[MClass, Set[PropertyLayoutElement]]): Int */
long VIRTUAL_layout_builders__MPropertyColorer__max_color(val* self, long p0, val* p1, val* p2) {
long var /* : Int */;
long var1 /* : Int */;
var1 = layout_builders__MPropertyColorer__max_color(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#coloration_result for (self: ResolutionColorer): Map[MType, Int] */
val* layout_builders__ResolutionColorer__coloration_result(val* self) {
val* var /* : Map[MType, Int] */;
val* var1 /* : Map[MType, Int] */;
var1 = self->attrs[COLOR_layout_builders__ResolutionColorer___64dcoloration_result].val; /* @coloration_result on <self:ResolutionColorer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @coloration_result");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 471);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#coloration_result for (self: Object): Map[MType, Int] */
val* VIRTUAL_layout_builders__ResolutionColorer__coloration_result(val* self) {
val* var /* : Map[MType, Int] */;
val* var1 /* : Map[MType, Int] */;
var1 = layout_builders__ResolutionColorer__coloration_result(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#coloration_result= for (self: ResolutionColorer, Map[MType, Int]) */
void layout_builders__ResolutionColorer__coloration_result_61d(val* self, val* p0) {
self->attrs[COLOR_layout_builders__ResolutionColorer___64dcoloration_result].val = p0; /* @coloration_result on <self:ResolutionColorer> */
RET_LABEL:;
}
/* method layout_builders#ResolutionColorer#coloration_result= for (self: Object, Map[MType, Int]) */
void VIRTUAL_layout_builders__ResolutionColorer__coloration_result_61d(val* self, val* p0) {
layout_builders__ResolutionColorer__coloration_result_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#ResolutionColorer#init for (self: ResolutionColorer) */
void layout_builders__ResolutionColorer__init(val* self) {
RET_LABEL:;
}
/* method layout_builders#ResolutionColorer#init for (self: Object) */
void VIRTUAL_layout_builders__ResolutionColorer__init(val* self) {
layout_builders__ResolutionColorer__init(self);
RET_LABEL:;
}
/* method layout_builders#ResolutionColorer#build_layout for (self: ResolutionColorer, Map[MClassType, Set[MType]]): Layout[MType] */
val* layout_builders__ResolutionColorer__build_layout(val* self, val* p0) {
val* var /* : Layout[MType] */;
val* var_elements /* var elements: Map[MClassType, Set[MType]] */;
val* var1 /* : Layout[MType] */;
val* var_result /* var result: Layout[MType] */;
val* var2 /* : Map[MType, Int] */;
val* var3 /* : Map[MType, Int] */;
var_elements = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__build_conflicts_graph]))(self, var_elements) /* build_conflicts_graph on <self:ResolutionColorer>*/;
var1 = NEW_layout_builders__Layout(&type_layout_builders__Layoutmodel__MType);
((void (*)(val*))(var1->class->vft[COLOR_layout_builders__Layout__init]))(var1) /* init on <var1:Layout[MType]>*/;
var_result = var1;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__compute_ids]))(self, var_elements) /* compute_ids on <self:ResolutionColorer>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__ids_61d]))(var_result, var2) /* ids= on <var_result:Layout[MType]>*/;
var3 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__colorize_elements]))(self, var_elements) /* colorize_elements on <self:ResolutionColorer>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__pos_61d]))(var_result, var3) /* pos= on <var_result:Layout[MType]>*/;
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#build_layout for (self: Object, Map[MClassType, Set[MType]]): Layout[MType] */
val* VIRTUAL_layout_builders__ResolutionColorer__build_layout(val* self, val* p0) {
val* var /* : Layout[MType] */;
val* var1 /* : Layout[MType] */;
var1 = layout_builders__ResolutionColorer__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#compute_ids for (self: ResolutionColorer, Map[MClassType, Set[MType]]): Map[MType, Int] */
val* layout_builders__ResolutionColorer__compute_ids(val* self, val* p0) {
val* var /* : Map[MType, Int] */;
val* var_elements /* var elements: Map[MClassType, Set[MType]] */;
val* var1 /* : HashMap[MType, Int] */;
val* var_ids /* var ids: HashMap[MType, Int] */;
long var2 /* : Int */;
long var_color /* var color: Int */;
val* var3 /* : MapIterator[Object, nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : Object */;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var6 /* : nullable Object */;
val* var_mclasstypes /* var mclasstypes: Set[MType] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_element /* var element: MType */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
var_elements = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypekernel__Int);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[MType, Int]>*/;
var_ids = var1;
var2 = 0;
var_color = var2;
var3 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_elements) /* iterator on <var_elements:Map[MClassType, Set[MType]]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var3) /* is_ok on <var3:MapIterator[Object, nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__key]))(var3) /* key on <var3:MapIterator[Object, nullable Object]>*/;
var_mclasstype = var5;
var6 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__item]))(var3) /* item on <var3:MapIterator[Object, nullable Object]>*/;
var_mclasstypes = var6;
var7 = ((val* (*)(val*))(var_mclasstypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasstypes) /* iterator on <var_mclasstypes:Set[MType]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_element = var9;
var10 = ((short int (*)(val*, val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_ids, var_element) /* has_key on <var_ids:HashMap[MType, Int]>*/;
if (var10){
goto CONTINUE_label;
} else {
}
var11 = BOX_kernel__Int(var_color); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_ids->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_ids, var_element, var11) /* []= on <var_ids:HashMap[MType, Int]>*/;
var12 = 1;
{ /* Inline kernel#Int#+ (var_color,var12) */
var15 = var_color + var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var_color = var13;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label16: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__next]))(var3) /* next on <var3:MapIterator[Object, nullable Object]>*/;
}
BREAK_label16: (void)0;
var = var_ids;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#compute_ids for (self: Object, Map[MClassType, Set[MType]]): Map[MType, Int] */
val* VIRTUAL_layout_builders__ResolutionColorer__compute_ids(val* self, val* p0) {
val* var /* : Map[MType, Int] */;
val* var1 /* : Map[MType, Int] */;
var1 = layout_builders__ResolutionColorer__compute_ids(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#colorize_elements for (self: ResolutionColorer, Map[MClassType, Set[MType]]): Map[MType, Int] */
val* layout_builders__ResolutionColorer__colorize_elements(val* self, val* p0) {
val* var /* : Map[MType, Int] */;
val* var_elements /* var elements: Map[MClassType, Set[MType]] */;
long var1 /* : Int */;
long var_min_color /* var min_color: Int */;
val* var2 /* : MapIterator[Object, nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : Object */;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var5 /* : nullable Object */;
val* var_mclasstypes /* var mclasstypes: Set[MType] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_element /* var element: MType */;
val* var9 /* : Map[MType, Int] */;
short int var10 /* : Bool */;
long var_color /* var color: Int */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
val* var18 /* : Map[MType, Int] */;
val* var19 /* : nullable Object */;
val* var21 /* : Map[MType, Int] */;
var_elements = p0;
var1 = 0;
var_min_color = var1;
var2 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_elements) /* iterator on <var_elements:Map[MClassType, Set[MType]]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var2) /* is_ok on <var2:MapIterator[Object, nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapIterator__key]))(var2) /* key on <var2:MapIterator[Object, nullable Object]>*/;
var_mclasstype = var4;
var5 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapIterator__item]))(var2) /* item on <var2:MapIterator[Object, nullable Object]>*/;
var_mclasstypes = var5;
var6 = ((val* (*)(val*))(var_mclasstypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasstypes) /* iterator on <var_mclasstypes:Set[MType]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_element = var8;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__coloration_result]))(self) /* coloration_result on <self:ResolutionColorer>*/;
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var9, var_element) /* has_key on <var9:Map[MType, Int]>*/;
if (var10){
goto CONTINUE_label;
} else {
}
var_color = var_min_color;
for(;;) {
var11 = ((short int (*)(val*, val*, long))(self->class->vft[COLOR_layout_builders__ResolutionColorer__is_color_free]))(self, var_element, var_color) /* is_color_free on <self:ResolutionColorer>*/;
var12 = !var11;
if (!var12) break;
var13 = 1;
{ /* Inline kernel#Int#+ (var_color,var13) */
var16 = var_color + var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var_color = var14;
CONTINUE_label17: (void)0;
}
BREAK_label17: (void)0;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__coloration_result]))(self) /* coloration_result on <self:ResolutionColorer>*/;
var19 = BOX_kernel__Int(var_color); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var18->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var18, var_element, var19) /* []= on <var18:Map[MType, Int]>*/;
var_color = var_min_color;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label20: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapIterator__next]))(var2) /* next on <var2:MapIterator[Object, nullable Object]>*/;
}
BREAK_label20: (void)0;
var21 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__coloration_result]))(self) /* coloration_result on <self:ResolutionColorer>*/;
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#colorize_elements for (self: Object, Map[MClassType, Set[MType]]): Map[MType, Int] */
val* VIRTUAL_layout_builders__ResolutionColorer__colorize_elements(val* self, val* p0) {
val* var /* : Map[MType, Int] */;
val* var1 /* : Map[MType, Int] */;
var1 = layout_builders__ResolutionColorer__colorize_elements(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#is_color_free for (self: ResolutionColorer, MType, Int): Bool */
short int layout_builders__ResolutionColorer__is_color_free(val* self, val* p0, long p1) {
short int var /* : Bool */;
val* var_element /* var element: MType */;
long var_color /* var color: Int */;
val* var1 /* : Map[MType, Set[MType]] */;
short int var2 /* : Bool */;
val* var3 /* : Map[MType, Set[MType]] */;
val* var4 /* : nullable Object */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_st /* var st: MType */;
short int var8 /* : Bool */;
val* var9 /* : Map[MType, Int] */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : Map[MType, Int] */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
var_element = p0;
var_color = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__conflicts_graph]))(self) /* conflicts_graph on <self:ResolutionColorer>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_element) /* has_key on <var1:Map[MType, Set[MType]]>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__conflicts_graph]))(self) /* conflicts_graph on <self:ResolutionColorer>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_element) /* [] on <var3:Map[MType, Set[MType]]>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:nullable Object(Set[MType])>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_st = var7;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__coloration_result]))(self) /* coloration_result on <self:ResolutionColorer>*/;
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var9, var_st) /* has_key on <var9:Map[MType, Int]>*/;
var_ = var10;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__coloration_result]))(self) /* coloration_result on <self:ResolutionColorer>*/;
var12 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_st) /* [] on <var11:Map[MType, Int]>*/;
{ /* Inline kernel#Int#== (var12,var_color) */
var15 = (var12 != NULL) && (var12->class == &class_kernel__Int);
if (var15) {
var16 = ((struct instance_kernel__Int*)var12)->value; /* autounbox from nullable Object to Int */;
var15 = (var16 == var_color);
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var8 = var13;
} else {
var8 = var_;
}
if (var8){
var17 = 0;
var = var17;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
var18 = 1;
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#is_color_free for (self: Object, MType, Int): Bool */
short int VIRTUAL_layout_builders__ResolutionColorer__is_color_free(val* self, val* p0, long p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = layout_builders__ResolutionColorer__is_color_free(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#build_conflicts_graph for (self: ResolutionColorer, Map[MClassType, Set[MType]]) */
void layout_builders__ResolutionColorer__build_conflicts_graph(val* self, val* p0) {
val* var_elements /* var elements: Map[MClassType, Set[MType]] */;
val* var /* : MapIterator[Object, nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : Object */;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var3 /* : nullable Object */;
val* var_mtypes /* var mtypes: Set[MType] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_otype /* var otype: MType */;
short int var10 /* : Bool */;
var_elements = p0;
var = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_elements) /* iterator on <var_elements:Map[MClassType, Set[MType]]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var) /* is_ok on <var:MapIterator[Object, nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__MapIterator__key]))(var) /* key on <var:MapIterator[Object, nullable Object]>*/;
var_mclasstype = var2;
var3 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__MapIterator__item]))(var) /* item on <var:MapIterator[Object, nullable Object]>*/;
var_mtypes = var3;
var4 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mtypes) /* iterator on <var_mtypes:Set[MType]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_mtype = var6;
var7 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mtypes) /* iterator on <var_mtypes:Set[MType]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_otype = var9;
var10 = ((short int (*)(val*, val*))(var_otype->class->vft[COLOR_kernel__Object___61d_61d]))(var_otype, var_mtype) /* == on <var_otype:MType>*/;
if (var10){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__add_conflict]))(self, var_mtype, var_otype) /* add_conflict on <self:ResolutionColorer>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label11: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label11: (void)0;
CONTINUE_label12: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__MapIterator__next]))(var) /* next on <var:MapIterator[Object, nullable Object]>*/;
}
BREAK_label12: (void)0;
RET_LABEL:;
}
/* method layout_builders#ResolutionColorer#build_conflicts_graph for (self: Object, Map[MClassType, Set[MType]]) */
void VIRTUAL_layout_builders__ResolutionColorer__build_conflicts_graph(val* self, val* p0) {
layout_builders__ResolutionColorer__build_conflicts_graph(self, p0);
RET_LABEL:;
}
/* method layout_builders#ResolutionColorer#conflicts_graph for (self: ResolutionColorer): Map[MType, Set[MType]] */
val* layout_builders__ResolutionColorer__conflicts_graph(val* self) {
val* var /* : Map[MType, Set[MType]] */;
val* var1 /* : Map[MType, Set[MType]] */;
var1 = self->attrs[COLOR_layout_builders__ResolutionColorer___64dconflicts_graph].val; /* @conflicts_graph on <self:ResolutionColorer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @conflicts_graph");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 536);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#conflicts_graph for (self: Object): Map[MType, Set[MType]] */
val* VIRTUAL_layout_builders__ResolutionColorer__conflicts_graph(val* self) {
val* var /* : Map[MType, Set[MType]] */;
val* var1 /* : Map[MType, Set[MType]] */;
var1 = layout_builders__ResolutionColorer__conflicts_graph(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionColorer#conflicts_graph= for (self: ResolutionColorer, Map[MType, Set[MType]]) */
void layout_builders__ResolutionColorer__conflicts_graph_61d(val* self, val* p0) {
self->attrs[COLOR_layout_builders__ResolutionColorer___64dconflicts_graph].val = p0; /* @conflicts_graph on <self:ResolutionColorer> */
RET_LABEL:;
}
/* method layout_builders#ResolutionColorer#conflicts_graph= for (self: Object, Map[MType, Set[MType]]) */
void VIRTUAL_layout_builders__ResolutionColorer__conflicts_graph_61d(val* self, val* p0) {
layout_builders__ResolutionColorer__conflicts_graph_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#ResolutionColorer#add_conflict for (self: ResolutionColorer, MType, MType) */
void layout_builders__ResolutionColorer__add_conflict(val* self, val* p0, val* p1) {
val* var_mtype /* var mtype: MType */;
val* var_otype /* var otype: MType */;
short int var /* : Bool */;
val* var1 /* : Map[MType, Set[MType]] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Map[MType, Set[MType]] */;
val* var5 /* : HashSet[MType] */;
val* var6 /* : Map[MType, Set[MType]] */;
val* var7 /* : nullable Object */;
val* var8 /* : Map[MType, Set[MType]] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Map[MType, Set[MType]] */;
val* var12 /* : HashSet[MType] */;
val* var13 /* : Map[MType, Set[MType]] */;
val* var14 /* : nullable Object */;
var_mtype = p0;
var_otype = p1;
var = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_otype) /* == on <var_mtype:MType>*/;
if (var){
goto RET_LABEL;
} else {
}
var1 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__conflicts_graph]))(self) /* conflicts_graph on <self:ResolutionColorer>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_mtype) /* has_key on <var1:Map[MType, Set[MType]]>*/;
var3 = !var2;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__conflicts_graph]))(self) /* conflicts_graph on <self:ResolutionColorer>*/;
var5 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var5->class->vft[COLOR_hash_collection__HashSet__init]))(var5) /* init on <var5:HashSet[MType]>*/;
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var4, var_mtype, var5) /* []= on <var4:Map[MType, Set[MType]]>*/;
} else {
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__conflicts_graph]))(self) /* conflicts_graph on <self:ResolutionColorer>*/;
var7 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var6, var_mtype) /* [] on <var6:Map[MType, Set[MType]]>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var7, var_otype) /* add on <var7:nullable Object(Set[MType])>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__conflicts_graph]))(self) /* conflicts_graph on <self:ResolutionColorer>*/;
var9 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var8, var_otype) /* has_key on <var8:Map[MType, Set[MType]]>*/;
var10 = !var9;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__conflicts_graph]))(self) /* conflicts_graph on <self:ResolutionColorer>*/;
var12 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var12->class->vft[COLOR_hash_collection__HashSet__init]))(var12) /* init on <var12:HashSet[MType]>*/;
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var11, var_otype, var12) /* []= on <var11:Map[MType, Set[MType]]>*/;
} else {
}
var13 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__ResolutionColorer__conflicts_graph]))(self) /* conflicts_graph on <self:ResolutionColorer>*/;
var14 = ((val* (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var13, var_otype) /* [] on <var13:Map[MType, Set[MType]]>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var14, var_mtype) /* add on <var14:nullable Object(Set[MType])>*/;
RET_LABEL:;
}
/* method layout_builders#ResolutionColorer#add_conflict for (self: Object, MType, MType) */
void VIRTUAL_layout_builders__ResolutionColorer__add_conflict(val* self, val* p0, val* p1) {
layout_builders__ResolutionColorer__add_conflict(self, p0, p1);
RET_LABEL:;
}
/* method layout_builders#PerfectHasher#operator for (self: PerfectHasher[Object, Object]): PHOperator */
val* layout_builders__PerfectHasher__operator(val* self) {
val* var /* : PHOperator */;
val* var1 /* : PHOperator */;
var1 = self->attrs[COLOR_layout_builders__PerfectHasher___64doperator].val; /* @operator on <self:PerfectHasher[Object, Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @operator");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 552);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PerfectHasher#operator for (self: Object): PHOperator */
val* VIRTUAL_layout_builders__PerfectHasher__operator(val* self) {
val* var /* : PHOperator */;
val* var1 /* : PHOperator */;
var1 = layout_builders__PerfectHasher__operator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PerfectHasher#operator= for (self: PerfectHasher[Object, Object], PHOperator) */
void layout_builders__PerfectHasher__operator_61d(val* self, val* p0) {
self->attrs[COLOR_layout_builders__PerfectHasher___64doperator].val = p0; /* @operator on <self:PerfectHasher[Object, Object]> */
RET_LABEL:;
}
/* method layout_builders#PerfectHasher#operator= for (self: Object, PHOperator) */
void VIRTUAL_layout_builders__PerfectHasher__operator_61d(val* self, val* p0) {
layout_builders__PerfectHasher__operator_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#PerfectHasher#init for (self: PerfectHasher[Object, Object]) */
void layout_builders__PerfectHasher__init(val* self) {
RET_LABEL:;
}
/* method layout_builders#PerfectHasher#init for (self: Object) */
void VIRTUAL_layout_builders__PerfectHasher__init(val* self) {
layout_builders__PerfectHasher__init(self);
RET_LABEL:;
}
/* method layout_builders#PerfectHasher#compute_masks for (self: PerfectHasher[Object, Object], Map[Object, Set[Object]], Map[Object, Int]): Map[Object, Int] */
val* layout_builders__PerfectHasher__compute_masks(val* self, val* p0, val* p1) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_conflicts /* var conflicts: Map[Object, Set[Object]] */;
val* var_ids /* var ids: Map[Object, Int] */;
val* var7 /* : HashMap[Object, Int] */;
val* var_masks /* var masks: HashMap[Object, Int] */;
val* var8 /* : MapIterator[Object, nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : Object */;
val* var_mclasstype /* var mclasstype: Object */;
val* var11 /* : nullable Object */;
val* var_mtypes /* var mtypes: Set[Object] */;
long var12 /* : Int */;
val* var13 /* : nullable Object */;
/* Covariant cast for argument 0 (conflicts) <p0:Map[Object, Set[Object]]> isa Map[PerfectHasher#0, Set[PerfectHasher#1]] */
/* <p0:Map[Object, Set[Object]]> isa Map[PerfectHasher#0, Set[PerfectHasher#1]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__PerfectHasher_FT0abstract_collection__Setlayout_builders__PerfectHasher_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[PerfectHasher#0, Set[PerfectHasher#1]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 556);
show_backtrace(1);
}
/* Covariant cast for argument 1 (ids) <p1:Map[Object, Int]> isa Map[PerfectHasher#1, Int] */
/* <p1:Map[Object, Int]> isa Map[PerfectHasher#1, Int] */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__PerfectHasher_FT1kernel__Int];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[PerfectHasher#1, Int]", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 556);
show_backtrace(1);
}
var_conflicts = p0;
var_ids = p1;
var7 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__PerfectHasher_FT0kernel__Int]);
((void (*)(val*))(var7->class->vft[COLOR_hash_collection__HashMap__init]))(var7) /* init on <var7:HashMap[Object, Int]>*/;
var_masks = var7;
var8 = ((val* (*)(val*))(var_conflicts->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_conflicts) /* iterator on <var_conflicts:Map[Object, Set[Object]]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var8) /* is_ok on <var8:MapIterator[Object, nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__MapIterator__key]))(var8) /* key on <var8:MapIterator[Object, nullable Object]>*/;
var_mclasstype = var10;
var11 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__MapIterator__item]))(var8) /* item on <var8:MapIterator[Object, nullable Object]>*/;
var_mtypes = var11;
var12 = ((long (*)(val*, val*, val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__compute_mask]))(self, var_mtypes, var_ids) /* compute_mask on <self:PerfectHasher[Object, Object]>*/;
var13 = BOX_kernel__Int(var12); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_masks->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_masks, var_mclasstype, var13) /* []= on <var_masks:HashMap[Object, Int]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__MapIterator__next]))(var8) /* next on <var8:MapIterator[Object, nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_masks;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#PerfectHasher#compute_masks for (self: Object, Map[Object, Set[Object]], Map[Object, Int]): Map[Object, Int] */
val* VIRTUAL_layout_builders__PerfectHasher__compute_masks(val* self, val* p0, val* p1) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = layout_builders__PerfectHasher__compute_masks(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PerfectHasher#compute_mask for (self: PerfectHasher[Object, Object], Set[Object], Map[Object, Int]): Int */
long layout_builders__PerfectHasher__compute_mask(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_mtypes /* var mtypes: Set[Object] */;
val* var_ids /* var ids: Map[Object, Int] */;
long var7 /* : Int */;
long var_mask /* var mask: Int */;
val* var8 /* : List[Int] */;
val* var_used /* var used: List[Int] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_mtype /* var mtype: Object */;
val* var12 /* : PHOperator */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
long var15 /* : Int */;
long var_res /* var res: Int */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var18 /* : nullable Object */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
long var25 /* : Int */;
long var26 /* : Int */;
long var28 /* : Int */;
/* Covariant cast for argument 0 (mtypes) <p0:Set[Object]> isa Set[PerfectHasher#1] */
/* <p0:Set[Object]> isa Set[PerfectHasher#1] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__PerfectHasher_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[PerfectHasher#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 565);
show_backtrace(1);
}
/* Covariant cast for argument 1 (ids) <p1:Map[Object, Int]> isa Map[PerfectHasher#1, Int] */
/* <p1:Map[Object, Int]> isa Map[PerfectHasher#1, Int] */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__PerfectHasher_FT1kernel__Int];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[PerfectHasher#1, Int]", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 565);
show_backtrace(1);
}
var_mtypes = p0;
var_ids = p1;
var7 = 0;
var_mask = var7;
for(;;) {
var8 = NEW_list__List(&type_list__Listkernel__Int);
((void (*)(val*))(var8->class->vft[COLOR_list__List__init]))(var8) /* init on <var8:List[Int]>*/;
var_used = var8;
var9 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mtypes) /* iterator on <var_mtypes:Set[Object]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_mtype = var11;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__operator]))(self) /* operator on <self:PerfectHasher[Object, Object]>*/;
var13 = ((val* (*)(val*, val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_ids, var_mtype) /* [] on <var_ids:Map[Object, Int]>*/;
var15 = ((struct instance_kernel__Int*)var13)->value; /* autounbox from nullable Object to Int */;
var14 = ((long (*)(val*, long, long))(var12->class->vft[COLOR_layout_builders__PHOperator__op]))(var12, var_mask, var15) /* op on <var12:PHOperator>*/;
var_res = var14;
var17 = BOX_kernel__Int(var_res); /* autobox from Int to nullable Object */
var16 = ((short int (*)(val*, val*))(var_used->class->vft[COLOR_abstract_collection__Collection__has]))(var_used, var17) /* has on <var_used:List[Int]>*/;
if (var16){
goto BREAK_label;
} else {
var18 = BOX_kernel__Int(var_res); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_used->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_used, var18) /* add on <var_used:List[Int]>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var19 = ((long (*)(val*))(var_used->class->vft[COLOR_abstract_collection__Collection__length]))(var_used) /* length on <var_used:List[Int]>*/;
var20 = ((long (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__length]))(var_mtypes) /* length on <var_mtypes:Set[Object]>*/;
{ /* Inline kernel#Int#== (var19,var20) */
var23 = var19 == var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
if (var21){
goto BREAK_label24;
} else {
}
var25 = 1;
{ /* Inline kernel#Int#+ (var_mask,var25) */
var28 = var_mask + var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_mask = var26;
CONTINUE_label24: (void)0;
}
BREAK_label24: (void)0;
var = var_mask;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#PerfectHasher#compute_mask for (self: Object, Set[Object], Map[Object, Int]): Int */
long VIRTUAL_layout_builders__PerfectHasher__compute_mask(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = layout_builders__PerfectHasher__compute_mask(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PerfectHasher#compute_hashes for (self: PerfectHasher[Object, Object], Map[Object, Set[Object]], Map[Object, Int], Map[Object, Int]): Map[Object, Map[Object, Int]] */
val* layout_builders__PerfectHasher__compute_hashes(val* self, val* p0, val* p1, val* p2) {
val* var /* : Map[Object, Map[Object, Int]] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
const char* var_class_name11;
val* var_elements /* var elements: Map[Object, Set[Object]] */;
val* var_ids /* var ids: Map[Object, Int] */;
val* var_masks /* var masks: Map[Object, Int] */;
val* var12 /* : HashMap[Object, Map[Object, Int]] */;
val* var_hashes /* var hashes: HashMap[Object, Map[Object, Int]] */;
val* var13 /* : MapIterator[Object, nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : Object */;
val* var_mclasstype /* var mclasstype: Object */;
val* var16 /* : nullable Object */;
val* var_mtypes /* var mtypes: Set[Object] */;
val* var17 /* : nullable Object */;
long var18 /* : Int */;
long var_mask /* var mask: Int */;
val* var19 /* : HashMap[Object, Int] */;
val* var_inhashes /* var inhashes: HashMap[Object, Int] */;
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_mtype /* var mtype: Object */;
val* var23 /* : PHOperator */;
val* var24 /* : nullable Object */;
long var25 /* : Int */;
long var26 /* : Int */;
val* var27 /* : nullable Object */;
/* Covariant cast for argument 0 (elements) <p0:Map[Object, Set[Object]]> isa Map[PerfectHasher#0, Set[PerfectHasher#1]] */
/* <p0:Map[Object, Set[Object]]> isa Map[PerfectHasher#0, Set[PerfectHasher#1]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__PerfectHasher_FT0abstract_collection__Setlayout_builders__PerfectHasher_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[PerfectHasher#0, Set[PerfectHasher#1]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 583);
show_backtrace(1);
}
/* Covariant cast for argument 1 (ids) <p1:Map[Object, Int]> isa Map[PerfectHasher#1, Int] */
/* <p1:Map[Object, Int]> isa Map[PerfectHasher#1, Int] */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__PerfectHasher_FT1kernel__Int];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[PerfectHasher#1, Int]", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 583);
show_backtrace(1);
}
/* Covariant cast for argument 2 (masks) <p2:Map[Object, Int]> isa Map[PerfectHasher#0, Int] */
/* <p2:Map[Object, Int]> isa Map[PerfectHasher#0, Int] */
type_struct10 = self->type->resolution_table->types[COLOR_abstract_collection__Maplayout_builders__PerfectHasher_FT0kernel__Int];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
if(cltype8 >= p2->type->table_size) {
var7 = 0;
} else {
var7 = p2->type->type_table[cltype8] == idtype9;
}
if (!var7) {
var_class_name11 = p2 == NULL ? "null" : p2->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[PerfectHasher#0, Int]", var_class_name11);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 583);
show_backtrace(1);
}
var_elements = p0;
var_ids = p1;
var_masks = p2;
var12 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__PerfectHasher_FT0abstract_collection__Maplayout_builders__PerfectHasher_FT1kernel__Int]);
((void (*)(val*))(var12->class->vft[COLOR_hash_collection__HashMap__init]))(var12) /* init on <var12:HashMap[Object, Map[Object, Int]]>*/;
var_hashes = var12;
var13 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_elements) /* iterator on <var_elements:Map[Object, Set[Object]]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var13) /* is_ok on <var13:MapIterator[Object, nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__MapIterator__key]))(var13) /* key on <var13:MapIterator[Object, nullable Object]>*/;
var_mclasstype = var15;
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__MapIterator__item]))(var13) /* item on <var13:MapIterator[Object, nullable Object]>*/;
var_mtypes = var16;
var17 = ((val* (*)(val*, val*))(var_masks->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_masks, var_mclasstype) /* [] on <var_masks:Map[Object, Int]>*/;
var18 = ((struct instance_kernel__Int*)var17)->value; /* autounbox from nullable Object to Int */;
var_mask = var18;
var19 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__PerfectHasher_FT1kernel__Int]);
((void (*)(val*))(var19->class->vft[COLOR_hash_collection__HashMap__init]))(var19) /* init on <var19:HashMap[Object, Int]>*/;
var_inhashes = var19;
var20 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mtypes) /* iterator on <var_mtypes:Set[Object]>*/;
for(;;) {
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
if(!var21) break;
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
var_mtype = var22;
var23 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__operator]))(self) /* operator on <self:PerfectHasher[Object, Object]>*/;
var24 = ((val* (*)(val*, val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_ids, var_mtype) /* [] on <var_ids:Map[Object, Int]>*/;
var26 = ((struct instance_kernel__Int*)var24)->value; /* autounbox from nullable Object to Int */;
var25 = ((long (*)(val*, long, long))(var23->class->vft[COLOR_layout_builders__PHOperator__op]))(var23, var_mask, var26) /* op on <var23:PHOperator>*/;
var27 = BOX_kernel__Int(var25); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_inhashes->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_inhashes, var_mtype, var27) /* []= on <var_inhashes:HashMap[Object, Int]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*, val*))(var_hashes->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_hashes, var_mclasstype, var_inhashes) /* []= on <var_hashes:HashMap[Object, Map[Object, Int]]>*/;
CONTINUE_label28: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__MapIterator__next]))(var13) /* next on <var13:MapIterator[Object, nullable Object]>*/;
}
BREAK_label28: (void)0;
var = var_hashes;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#PerfectHasher#compute_hashes for (self: Object, Map[Object, Set[Object]], Map[Object, Int], Map[Object, Int]): Map[Object, Map[Object, Int]] */
val* VIRTUAL_layout_builders__PerfectHasher__compute_hashes(val* self, val* p0, val* p1, val* p2) {
val* var /* : Map[Object, Map[Object, Int]] */;
val* var1 /* : Map[Object, Map[Object, Int]] */;
var1 = layout_builders__PerfectHasher__compute_hashes(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PHOperator#op for (self: PHOperator, Int, Int): Int */
long layout_builders__PHOperator__op(val* self, long p0, long p1) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "op", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 600);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method layout_builders#PHOperator#op for (self: Object, Int, Int): Int */
long VIRTUAL_layout_builders__PHOperator__op(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = layout_builders__PHOperator__op(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PHOperator#init for (self: PHOperator) */
void layout_builders__PHOperator__init(val* self) {
RET_LABEL:;
}
/* method layout_builders#PHOperator#init for (self: Object) */
void VIRTUAL_layout_builders__PHOperator__init(val* self) {
layout_builders__PHOperator__init(self);
RET_LABEL:;
}
/* method layout_builders#PHModOperator#init for (self: PHModOperator) */
void layout_builders__PHModOperator__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_layout_builders__PHOperator__init]))(self) /* init on <self:PHModOperator>*/;
RET_LABEL:;
}
/* method layout_builders#PHModOperator#init for (self: Object) */
void VIRTUAL_layout_builders__PHModOperator__init(val* self) {
layout_builders__PHModOperator__init(self);
RET_LABEL:;
}
/* method layout_builders#PHModOperator#op for (self: PHModOperator, Int, Int): Int */
long layout_builders__PHModOperator__op(val* self, long p0, long p1) {
long var /* : Int */;
long var_mask /* var mask: Int */;
long var_id /* var id: Int */;
long var1 /* : Int */;
long var3 /* : Int */;
var_mask = p0;
var_id = p1;
{ /* Inline kernel#Int#% (var_mask,var_id) */
var3 = var_mask % var_id;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#PHModOperator#op for (self: Object, Int, Int): Int */
long VIRTUAL_layout_builders__PHModOperator__op(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = layout_builders__PHModOperator__op(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#PHAndOperator#init for (self: PHAndOperator) */
void layout_builders__PHAndOperator__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_layout_builders__PHOperator__init]))(self) /* init on <self:PHAndOperator>*/;
RET_LABEL:;
}
/* method layout_builders#PHAndOperator#init for (self: Object) */
void VIRTUAL_layout_builders__PHAndOperator__init(val* self) {
layout_builders__PHAndOperator__init(self);
RET_LABEL:;
}
/* method layout_builders#PHAndOperator#op for (self: PHAndOperator, Int, Int): Int */
long layout_builders__PHAndOperator__op(val* self, long p0, long p1) {
long var /* : Int */;
long var_mask /* var mask: Int */;
long var_id /* var id: Int */;
long var1 /* : Int */;
var_mask = p0;
var_id = p1;
var1 = math__Int__bin_and(var_mask, var_id);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#PHAndOperator#op for (self: Object, Int, Int): Int */
long VIRTUAL_layout_builders__PHAndOperator__op(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = layout_builders__PHAndOperator__op(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#mmodule for (self: TypingHasher[Object]): MModule */
val* layout_builders__TypingHasher__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_layout_builders__TypingHasher___64dmmodule].val; /* @mmodule on <self:TypingHasher[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 625);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#mmodule for (self: Object): MModule */
val* VIRTUAL_layout_builders__TypingHasher__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = layout_builders__TypingHasher__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#mmodule= for (self: TypingHasher[Object], MModule) */
void layout_builders__TypingHasher__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_layout_builders__TypingHasher___64dmmodule].val = p0; /* @mmodule on <self:TypingHasher[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingHasher#mmodule= for (self: Object, MModule) */
void VIRTUAL_layout_builders__TypingHasher__mmodule_61d(val* self, val* p0) {
layout_builders__TypingHasher__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingHasher#poset_builder for (self: TypingHasher[Object]): POSetBuilder[Object] */
val* layout_builders__TypingHasher__poset_builder(val* self) {
val* var /* : POSetBuilder[Object] */;
val* var1 /* : POSetBuilder[Object] */;
var1 = self->attrs[COLOR_layout_builders__TypingHasher___64dposet_builder].val; /* @poset_builder on <self:TypingHasher[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @poset_builder");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 626);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#poset_builder for (self: Object): POSetBuilder[Object] */
val* VIRTUAL_layout_builders__TypingHasher__poset_builder(val* self) {
val* var /* : POSetBuilder[Object] */;
val* var1 /* : POSetBuilder[Object] */;
var1 = layout_builders__TypingHasher__poset_builder(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#poset_builder= for (self: TypingHasher[Object], POSetBuilder[Object]) */
void layout_builders__TypingHasher__poset_builder_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset_builder) <p0:POSetBuilder[Object]> isa POSetBuilder[TypingHasher#0] */
/* <p0:POSetBuilder[Object]> isa POSetBuilder[TypingHasher#0] */
type_struct = self->type->resolution_table->types[COLOR_layout_builders__POSetBuilderlayout_builders__TypingHasher_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetBuilder[TypingHasher#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 626);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingHasher___64dposet_builder].val = p0; /* @poset_builder on <self:TypingHasher[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingHasher#poset_builder= for (self: Object, POSetBuilder[Object]) */
void VIRTUAL_layout_builders__TypingHasher__poset_builder_61d(val* self, val* p0) {
layout_builders__TypingHasher__poset_builder_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingHasher#poset_cache for (self: TypingHasher[Object]): nullable POSet[Object] */
val* layout_builders__TypingHasher__poset_cache(val* self) {
val* var /* : nullable POSet[Object] */;
val* var1 /* : nullable POSet[Object] */;
var1 = self->attrs[COLOR_layout_builders__TypingHasher___64dposet_cache].val; /* @poset_cache on <self:TypingHasher[Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#poset_cache for (self: Object): nullable POSet[Object] */
val* VIRTUAL_layout_builders__TypingHasher__poset_cache(val* self) {
val* var /* : nullable POSet[Object] */;
val* var1 /* : nullable POSet[Object] */;
var1 = layout_builders__TypingHasher__poset_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#poset_cache= for (self: TypingHasher[Object], nullable POSet[Object]) */
void layout_builders__TypingHasher__poset_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset_cache) <p0:nullable POSet[Object]> isa nullable POSet[TypingHasher#0] */
/* <p0:nullable POSet[Object]> isa nullable POSet[TypingHasher#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetlayout_builders__TypingHasher_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable POSet[TypingHasher#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 627);
show_backtrace(1);
}
self->attrs[COLOR_layout_builders__TypingHasher___64dposet_cache].val = p0; /* @poset_cache on <self:TypingHasher[Object]> */
RET_LABEL:;
}
/* method layout_builders#TypingHasher#poset_cache= for (self: Object, nullable POSet[Object]) */
void VIRTUAL_layout_builders__TypingHasher__poset_cache_61d(val* self, val* p0) {
layout_builders__TypingHasher__poset_cache_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#TypingHasher#init for (self: TypingHasher[Object], MModule, POSetBuilder[Object], PHOperator) */
void layout_builders__TypingHasher__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mmodule /* var mmodule: MModule */;
val* var_poset_builder /* var poset_builder: POSetBuilder[Object] */;
val* var_operator /* var operator: PHOperator */;
/* Covariant cast for argument 1 (poset_builder) <p1:POSetBuilder[Object]> isa POSetBuilder[TypingHasher#0] */
/* <p1:POSetBuilder[Object]> isa POSetBuilder[TypingHasher#0] */
type_struct = self->type->resolution_table->types[COLOR_layout_builders__POSetBuilderlayout_builders__TypingHasher_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetBuilder[TypingHasher#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 629);
show_backtrace(1);
}
var_mmodule = p0;
var_poset_builder = p1;
var_operator = p2;
((void (*)(val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__init]))(self) /* init on <self:TypingHasher[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__operator_61d]))(self, var_operator) /* operator= on <self:TypingHasher[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingHasher__mmodule_61d]))(self, var_mmodule) /* mmodule= on <self:TypingHasher[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingHasher__poset_builder_61d]))(self, var_poset_builder) /* poset_builder= on <self:TypingHasher[Object]>*/;
RET_LABEL:;
}
/* method layout_builders#TypingHasher#init for (self: Object, MModule, POSetBuilder[Object], PHOperator) */
void VIRTUAL_layout_builders__TypingHasher__init(val* self, val* p0, val* p1, val* p2) {
layout_builders__TypingHasher__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method layout_builders#TypingHasher#build_layout for (self: TypingHasher[Object], Set[Object]): PHLayout[Object, Object] */
val* layout_builders__TypingHasher__build_layout(val* self, val* p0) {
val* var /* : PHLayout[Object, Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Set[Object] */;
val* var2 /* : POSetBuilder[Object] */;
val* var3 /* : POSet[Object] */;
val* var4 /* : PHLayout[Object, Object] */;
val* var_result /* var result: PHLayout[Object, Object] */;
val* var5 /* : Map[Object, Set[Object]] */;
val* var_conflicts /* var conflicts: Map[Object, Set[Object]] */;
val* var6 /* : Map[Object, Int] */;
val* var7 /* : Map[Object, Int] */;
val* var8 /* : Map[Object, Int] */;
val* var9 /* : Map[Object, Int] */;
val* var10 /* : Map[Object, Int] */;
val* var11 /* : Map[Object, Map[Object, Int]] */;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[TypingHasher#0] */
/* <p0:Set[Object]> isa Set[TypingHasher#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingHasher_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingHasher#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 635);
show_backtrace(1);
}
var_elements = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingHasher__poset_builder]))(self) /* poset_builder on <self:TypingHasher[Object]>*/;
var3 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_layout_builders__POSetBuilder__build_poset]))(var2, var_elements) /* build_poset on <var2:POSetBuilder[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingHasher__poset_cache_61d]))(self, var3) /* poset_cache= on <self:TypingHasher[Object]>*/;
var4 = NEW_layout_builders__PHLayout(self->type->resolution_table->types[COLOR_layout_builders__PHLayoutlayout_builders__TypingHasher_FT0layout_builders__TypingHasher_FT0]);
((void (*)(val*))(var4->class->vft[COLOR_layout_builders__PHLayout__init]))(var4) /* init on <var4:PHLayout[Object, Object]>*/;
var_result = var4;
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__TypingHasher__build_conflicts]))(self, var_elements) /* build_conflicts on <self:TypingHasher[Object]>*/;
var_conflicts = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingHasher__compute_ids]))(self) /* compute_ids on <self:TypingHasher[Object]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__ids_61d]))(var_result, var6) /* ids= on <var_result:PHLayout[Object, Object]>*/;
var7 = ((val* (*)(val*))(var_result->class->vft[COLOR_layout_builders__Layout__ids]))(var_result) /* ids on <var_result:PHLayout[Object, Object]>*/;
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__compute_masks]))(self, var_conflicts, var7) /* compute_masks on <self:TypingHasher[Object]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__PHLayout__masks_61d]))(var_result, var8) /* masks= on <var_result:PHLayout[Object, Object]>*/;
var9 = ((val* (*)(val*))(var_result->class->vft[COLOR_layout_builders__Layout__ids]))(var_result) /* ids on <var_result:PHLayout[Object, Object]>*/;
var10 = ((val* (*)(val*))(var_result->class->vft[COLOR_layout_builders__PHLayout__masks]))(var_result) /* masks on <var_result:PHLayout[Object, Object]>*/;
var11 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__compute_hashes]))(self, var_conflicts, var9, var10) /* compute_hashes on <self:TypingHasher[Object]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__PHLayout__hashes_61d]))(var_result, var11) /* hashes= on <var_result:PHLayout[Object, Object]>*/;
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#build_layout for (self: Object, Set[Object]): Layout[Object] */
val* VIRTUAL_layout_builders__TypingHasher__build_layout(val* self, val* p0) {
val* var /* : Layout[Object] */;
val* var1 /* : PHLayout[Object, Object] */;
var1 = layout_builders__TypingHasher__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#compute_ids for (self: TypingHasher[Object]): Map[Object, Int] */
val* layout_builders__TypingHasher__compute_ids(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
val* var_ids /* var ids: HashMap[Object, Int] */;
val* var2 /* : nullable POSet[Object] */;
val* var3 /* : Array[nullable Object] */;
val* var_lin /* var lin: Array[Object] */;
val* var4 /* : nullable POSet[Object] */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_e /* var e: Object */;
long var8 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
val* var13 /* : nullable Object */;
var1 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingHasher_FT0kernel__Int]);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[Object, Int]>*/;
var_ids = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingHasher[Object]>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 648);
show_backtrace(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_array__Collection__to_a]))(var2) /* to_a on <var2:nullable POSet[Object]>*/;
}
var_lin = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingHasher[Object]>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 649);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var4->class->vft[COLOR_sorter__AbstractSorter__sort]))(var4, var_lin) /* sort on <var4:nullable POSet[Object]>*/;
}
var5 = ((val* (*)(val*))(var_lin->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_lin) /* iterator on <var_lin:Array[Object]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_e = var7;
var8 = ((long (*)(val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead__length]))(var_ids) /* length on <var_ids:HashMap[Object, Int]>*/;
var9 = 1;
{ /* Inline kernel#Int#+ (var8,var9) */
var12 = var8 + var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var13 = BOX_kernel__Int(var10); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_ids->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_ids, var_e, var13) /* []= on <var_ids:HashMap[Object, Int]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_ids;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#compute_ids for (self: Object): Map[Object, Int] */
val* VIRTUAL_layout_builders__TypingHasher__compute_ids(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = layout_builders__TypingHasher__compute_ids(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#build_conflicts for (self: TypingHasher[Object], Set[Object]): Map[Object, Set[Object]] */
val* layout_builders__TypingHasher__build_conflicts(val* self, val* p0) {
val* var /* : Map[Object, Set[Object]] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Set[Object] */;
val* var2 /* : HashMap[Object, Set[Object]] */;
val* var_conflicts /* var conflicts: HashMap[Object, Set[Object]] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: Object */;
val* var6 /* : HashSet[Object] */;
val* var_supers /* var supers: HashSet[Object] */;
val* var7 /* : nullable POSet[Object] */;
val* var8 /* : POSetElement[Object] */;
val* var9 /* : Collection[Object] */;
/* Covariant cast for argument 0 (elements) <p0:Set[Object]> isa Set[TypingHasher#0] */
/* <p0:Set[Object]> isa Set[TypingHasher#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setlayout_builders__TypingHasher_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[TypingHasher#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 656);
show_backtrace(1);
}
var_elements = p0;
var2 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingHasher_FT0abstract_collection__Setlayout_builders__TypingHasher_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[Object, Set[Object]]>*/;
var_conflicts = var2;
var3 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_elements) /* iterator on <var_elements:Set[Object]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_e = var5;
var6 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingHasher_FT0]);
((void (*)(val*))(var6->class->vft[COLOR_hash_collection__HashSet__init]))(var6) /* init on <var6:HashSet[Object]>*/;
var_supers = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__TypingLayoutBuilder__poset]))(self) /* poset on <self:TypingHasher[Object]>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 660);
show_backtrace(1);
} else {
var8 = ((val* (*)(val*, val*))(var7->class->vft[COLOR_poset__POSet___91d_93d]))(var7, var_e) /* [] on <var7:nullable POSet[Object]>*/;
}
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_poset__POSetElement__greaters]))(var8) /* greaters on <var8:POSetElement[Object]>*/;
((void (*)(val*, val*))(var_supers->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_supers, var9) /* add_all on <var_supers:HashSet[Object]>*/;
((void (*)(val*, val*))(var_supers->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_supers, var_e) /* add on <var_supers:HashSet[Object]>*/;
((void (*)(val*, val*, val*))(var_conflicts->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_conflicts, var_e, var_supers) /* []= on <var_conflicts:HashMap[Object, Set[Object]]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_conflicts;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#TypingHasher#build_conflicts for (self: Object, Set[Object]): Map[Object, Set[Object]] */
val* VIRTUAL_layout_builders__TypingHasher__build_conflicts(val* self, val* p0) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
var1 = layout_builders__TypingHasher__build_conflicts(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MTypeHasher#init for (self: MTypeHasher, PHOperator, MModule) */
void layout_builders__MTypeHasher__init(val* self, val* p0, val* p1) {
val* var_operator /* var operator: PHOperator */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MTypePOSetBuilder */;
var_operator = p0;
var_mmodule = p1;
var = NEW_layout_builders__MTypePOSetBuilder(&type_layout_builders__MTypePOSetBuilder);
((void (*)(val*, val*))(var->class->vft[COLOR_layout_builders__POSetBuilder__init]))(var, var_mmodule) /* init on <var:MTypePOSetBuilder>*/;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_layout_builders__TypingHasher__init]))(self, var_mmodule, var, var_operator) /* init on <self:MTypeHasher>*/;
RET_LABEL:;
}
/* method layout_builders#MTypeHasher#init for (self: Object, PHOperator, MModule) */
void VIRTUAL_layout_builders__MTypeHasher__init(val* self, val* p0, val* p1) {
layout_builders__MTypeHasher__init(self, p0, p1);
RET_LABEL:;
}
/* method layout_builders#MClassHasher#init for (self: MClassHasher, PHOperator, MModule) */
void layout_builders__MClassHasher__init(val* self, val* p0, val* p1) {
val* var_operator /* var operator: PHOperator */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MClassPOSetBuilder */;
var_operator = p0;
var_mmodule = p1;
var = NEW_layout_builders__MClassPOSetBuilder(&type_layout_builders__MClassPOSetBuilder);
((void (*)(val*, val*))(var->class->vft[COLOR_layout_builders__POSetBuilder__init]))(var, var_mmodule) /* init on <var:MClassPOSetBuilder>*/;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_layout_builders__TypingHasher__init]))(self, var_mmodule, var, var_operator) /* init on <self:MClassHasher>*/;
RET_LABEL:;
}
/* method layout_builders#MClassHasher#init for (self: Object, PHOperator, MModule) */
void VIRTUAL_layout_builders__MClassHasher__init(val* self, val* p0, val* p1) {
layout_builders__MClassHasher__init(self, p0, p1);
RET_LABEL:;
}
/* method layout_builders#MPropertyHasher#mmodule for (self: MPropertyHasher[PropertyLayoutElement]): MModule */
val* layout_builders__MPropertyHasher__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_layout_builders__MPropertyHasher___64dmmodule].val; /* @mmodule on <self:MPropertyHasher[PropertyLayoutElement]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 685);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyHasher#mmodule for (self: Object): MModule */
val* VIRTUAL_layout_builders__MPropertyHasher__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = layout_builders__MPropertyHasher__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyHasher#mmodule= for (self: MPropertyHasher[PropertyLayoutElement], MModule) */
void layout_builders__MPropertyHasher__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_layout_builders__MPropertyHasher___64dmmodule].val = p0; /* @mmodule on <self:MPropertyHasher[PropertyLayoutElement]> */
RET_LABEL:;
}
/* method layout_builders#MPropertyHasher#mmodule= for (self: Object, MModule) */
void VIRTUAL_layout_builders__MPropertyHasher__mmodule_61d(val* self, val* p0) {
layout_builders__MPropertyHasher__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method layout_builders#MPropertyHasher#init for (self: MPropertyHasher[PropertyLayoutElement], PHOperator, MModule) */
void layout_builders__MPropertyHasher__init(val* self, val* p0, val* p1) {
val* var_operator /* var operator: PHOperator */;
val* var_mmodule /* var mmodule: MModule */;
var_operator = p0;
var_mmodule = p1;
((void (*)(val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__init]))(self) /* init on <self:MPropertyHasher[PropertyLayoutElement]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__operator_61d]))(self, var_operator) /* operator= on <self:MPropertyHasher[PropertyLayoutElement]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__MPropertyHasher__mmodule_61d]))(self, var_mmodule) /* mmodule= on <self:MPropertyHasher[PropertyLayoutElement]>*/;
RET_LABEL:;
}
/* method layout_builders#MPropertyHasher#init for (self: Object, PHOperator, MModule) */
void VIRTUAL_layout_builders__MPropertyHasher__init(val* self, val* p0, val* p1) {
layout_builders__MPropertyHasher__init(self, p0, p1);
RET_LABEL:;
}
/* method layout_builders#MPropertyHasher#build_poset for (self: MPropertyHasher[PropertyLayoutElement], Set[MClass]): POSet[MClass] */
val* layout_builders__MPropertyHasher__build_poset(val* self, val* p0) {
val* var /* : POSet[MClass] */;
val* var_mclasses /* var mclasses: Set[MClass] */;
val* var1 /* : POSet[MClass] */;
val* var_poset /* var poset: POSet[MClass] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e /* var e: MClass */;
val* var5 /* : POSetElement[Object] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_o /* var o: MClass */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : MModule */;
val* var12 /* : POSet[MClass] */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MModule */;
val* var16 /* : POSetElement[MClass] */;
short int var17 /* : Bool */;
var_mclasses = p0;
var1 = NEW_poset__POSet(&type_poset__POSetmodel__MClass);
((void (*)(val*))(var1->class->vft[COLOR_poset__POSet__init]))(var1) /* init on <var1:POSet[MClass]>*/;
var_poset = var1;
var2 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:Set[MClass]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_e = var4;
var5 = ((val* (*)(val*, val*))(var_poset->class->vft[COLOR_poset__POSet__add_node]))(var_poset, var_e) /* add_node on <var_poset:POSet[MClass]>*/;
var5;
var6 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:Set[MClass]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_o = var8;
var10 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___61d_61d]))(var_e, var_o) /* == on <var_e:MClass>*/;
var_ = var10;
if (var10){
var9 = var_;
} else {
var11 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyHasher__mmodule]))(self) /* mmodule on <self:MPropertyHasher[PropertyLayoutElement]>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(var11) /* flatten_mclass_hierarchy on <var11:MModule>*/;
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__Collection__has]))(var12, var_e) /* has on <var12:POSet[MClass]>*/;
var14 = !var13;
var9 = var14;
}
if (var9){
goto CONTINUE_label;
} else {
}
var15 = ((val* (*)(val*))(self->class->vft[COLOR_layout_builders__MPropertyHasher__mmodule]))(self) /* mmodule on <self:MPropertyHasher[PropertyLayoutElement]>*/;
var16 = ((val* (*)(val*, val*))(var_e->class->vft[COLOR_model__MClass__in_hierarchy]))(var_e, var15) /* in_hierarchy on <var_e:MClass>*/;
var17 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_poset__POSetElement___60d]))(var16, var_o) /* < on <var16:POSetElement[MClass]>*/;
if (var17){
((void (*)(val*, val*, val*))(var_poset->class->vft[COLOR_poset__POSet__add_edge]))(var_poset, var_e, var_o) /* add_edge on <var_poset:POSet[MClass]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label18: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label18: (void)0;
var = var_poset;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyHasher#build_poset for (self: Object, Set[MClass]): POSet[MClass] */
val* VIRTUAL_layout_builders__MPropertyHasher__build_poset(val* self, val* p0) {
val* var /* : POSet[MClass] */;
val* var1 /* : POSet[MClass] */;
var1 = layout_builders__MPropertyHasher__build_poset(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyHasher#build_layout for (self: MPropertyHasher[PropertyLayoutElement], Map[MClass, Set[PropertyLayoutElement]]): Layout[PropertyLayoutElement] */
val* layout_builders__MPropertyHasher__build_layout(val* self, val* p0) {
val* var /* : Layout[PropertyLayoutElement] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_elements /* var elements: Map[MClass, Set[PropertyLayoutElement]] */;
val* var2 /* : PHLayout[MClass, PropertyLayoutElement] */;
val* var_result /* var result: PHLayout[MClass, PropertyLayoutElement] */;
val* var3 /* : HashMap[PropertyLayoutElement, Int] */;
val* var_ids /* var ids: HashMap[PropertyLayoutElement, Int] */;
val* var4 /* : HashSet[MClass] */;
val* var_mclasses /* var mclasses: HashSet[MClass] */;
val* var5 /* : Collection[Object] */;
val* var6 /* : POSet[MClass] */;
val* var_poset /* var poset: POSet[MClass] */;
val* var7 /* : Array[nullable Object] */;
val* var_lin /* var lin: Array[MClass] */;
val* var8 /* : Array[nullable Object] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var12 /* : nullable Object */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_mproperty /* var mproperty: PropertyLayoutElement */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
val* var22 /* : nullable Object */;
val* var24 /* : Map[Object, Int] */;
val* var25 /* : Map[Object, Int] */;
val* var26 /* : Map[Object, Map[Object, Int]] */;
/* Covariant cast for argument 0 (elements) <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[PropertyLayoutBuilder#0]] */
/* <p0:Map[MClass, Set[PropertyLayoutElement]]> isa Map[MClass, Set[PropertyLayoutBuilder#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapmodel__MClassabstract_collection__Setlayout_builders__PropertyLayoutBuilder_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[MClass, Set[PropertyLayoutBuilder#0]]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/layout_builders.nit", 704);
show_backtrace(1);
}
var_elements = p0;
var2 = NEW_layout_builders__PHLayout(self->type->resolution_table->types[COLOR_layout_builders__PHLayoutmodel__MClasslayout_builders__MPropertyHasher_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_layout_builders__PHLayout__init]))(var2) /* init on <var2:PHLayout[MClass, PropertyLayoutElement]>*/;
var_result = var2;
var3 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__MPropertyHasher_FT0kernel__Int]);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[PropertyLayoutElement, Int]>*/;
var_ids = var3;
var4 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashSet__init]))(var4) /* init on <var4:HashSet[MClass]>*/;
var_mclasses = var4;
var5 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead__keys]))(var_elements) /* keys on <var_elements:Map[MClass, Set[PropertyLayoutElement]]>*/;
((void (*)(val*, val*))(var_mclasses->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_mclasses, var5) /* add_all on <var_mclasses:HashSet[MClass]>*/;
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_layout_builders__MPropertyHasher__build_poset]))(self, var_mclasses) /* build_poset on <self:MPropertyHasher[PropertyLayoutElement]>*/;
var_poset = var6;
var7 = ((val* (*)(val*))(var_poset->class->vft[COLOR_array__Collection__to_a]))(var_poset) /* to_a on <var_poset:POSet[MClass]>*/;
var_lin = var7;
((void (*)(val*, val*))(var_poset->class->vft[COLOR_sorter__AbstractSorter__sort]))(var_poset, var_lin) /* sort on <var_poset:POSet[MClass]>*/;
var8 = ((val* (*)(val*))(var_lin->class->vft[COLOR_array__AbstractArrayRead__reversed]))(var_lin) /* reversed on <var_lin:Array[MClass]>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:Array[nullable Object](Array[MClass])>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_mclass = var11;
var12 = ((val* (*)(val*, val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_elements, var_mclass) /* [] on <var_elements:Map[MClass, Set[PropertyLayoutElement]]>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:nullable Object(Set[PropertyLayoutElement])>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var_mproperty = var15;
var16 = ((short int (*)(val*, val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_ids, var_mproperty) /* has_key on <var_ids:HashMap[PropertyLayoutElement, Int]>*/;
if (var16){
goto CONTINUE_label;
} else {
}
var17 = ((long (*)(val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead__length]))(var_ids) /* length on <var_ids:HashMap[PropertyLayoutElement, Int]>*/;
var18 = 1;
{ /* Inline kernel#Int#+ (var17,var18) */
var21 = var17 + var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var22 = BOX_kernel__Int(var19); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_ids->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_ids, var_mproperty, var22) /* []= on <var_ids:HashMap[PropertyLayoutElement, Int]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label23: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label23: (void)0;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__ids_61d]))(var_result, var_ids) /* ids= on <var_result:PHLayout[MClass, PropertyLayoutElement]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__pos_61d]))(var_result, var_ids) /* pos= on <var_result:PHLayout[MClass, PropertyLayoutElement]>*/;
var24 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__compute_masks]))(self, var_elements, var_ids) /* compute_masks on <self:MPropertyHasher[PropertyLayoutElement]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__PHLayout__masks_61d]))(var_result, var24) /* masks= on <var_result:PHLayout[MClass, PropertyLayoutElement]>*/;
var25 = ((val* (*)(val*))(var_result->class->vft[COLOR_layout_builders__PHLayout__masks]))(var_result) /* masks on <var_result:PHLayout[MClass, PropertyLayoutElement]>*/;
var26 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__compute_hashes]))(self, var_elements, var_ids, var25) /* compute_hashes on <self:MPropertyHasher[PropertyLayoutElement]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__PHLayout__hashes_61d]))(var_result, var26) /* hashes= on <var_result:PHLayout[MClass, PropertyLayoutElement]>*/;
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#MPropertyHasher#build_layout for (self: Object, Map[MClass, Set[PropertyLayoutElement]]): Layout[PropertyLayoutElement] */
val* VIRTUAL_layout_builders__MPropertyHasher__build_layout(val* self, val* p0) {
val* var /* : Layout[PropertyLayoutElement] */;
val* var1 /* : Layout[PropertyLayoutElement] */;
var1 = layout_builders__MPropertyHasher__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionHasher#init for (self: ResolutionHasher, PHOperator) */
void layout_builders__ResolutionHasher__init(val* self, val* p0) {
val* var_operator /* var operator: PHOperator */;
var_operator = p0;
((void (*)(val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__init]))(self) /* init on <self:ResolutionHasher>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__operator_61d]))(self, var_operator) /* operator= on <self:ResolutionHasher>*/;
RET_LABEL:;
}
/* method layout_builders#ResolutionHasher#init for (self: Object, PHOperator) */
void VIRTUAL_layout_builders__ResolutionHasher__init(val* self, val* p0) {
layout_builders__ResolutionHasher__init(self, p0);
RET_LABEL:;
}
/* method layout_builders#ResolutionHasher#build_layout for (self: ResolutionHasher, Map[MClassType, Set[MType]]): Layout[MType] */
val* layout_builders__ResolutionHasher__build_layout(val* self, val* p0) {
val* var /* : Layout[MType] */;
val* var_elements /* var elements: Map[MClassType, Set[MType]] */;
val* var1 /* : PHLayout[MClassType, MType] */;
val* var_result /* var result: PHLayout[MClassType, MType] */;
val* var2 /* : HashMap[MType, Int] */;
val* var_ids /* var ids: HashMap[MType, Int] */;
long var3 /* : Int */;
long var_color /* var color: Int */;
val* var4 /* : MapIterator[Object, nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : Object */;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var7 /* : nullable Object */;
val* var_mclasstypes /* var mclasstypes: Set[MType] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_element /* var element: MType */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
val* var18 /* : Map[Object, Int] */;
val* var19 /* : Map[Object, Int] */;
val* var20 /* : Map[Object, Map[Object, Int]] */;
var_elements = p0;
var1 = NEW_layout_builders__PHLayout(&type_layout_builders__PHLayoutmodel__MClassTypemodel__MType);
((void (*)(val*))(var1->class->vft[COLOR_layout_builders__PHLayout__init]))(var1) /* init on <var1:PHLayout[MClassType, MType]>*/;
var_result = var1;
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypekernel__Int);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[MType, Int]>*/;
var_ids = var2;
var3 = 1;
var_color = var3;
var4 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_elements) /* iterator on <var_elements:Map[MClassType, Set[MType]]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var4) /* is_ok on <var4:MapIterator[Object, nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__key]))(var4) /* key on <var4:MapIterator[Object, nullable Object]>*/;
var_mclasstype = var6;
var7 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__item]))(var4) /* item on <var4:MapIterator[Object, nullable Object]>*/;
var_mclasstypes = var7;
var8 = ((val* (*)(val*))(var_mclasstypes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasstypes) /* iterator on <var_mclasstypes:Set[MType]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_element = var10;
var11 = ((short int (*)(val*, val*))(var_ids->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_ids, var_element) /* has_key on <var_ids:HashMap[MType, Int]>*/;
if (var11){
goto CONTINUE_label;
} else {
}
var12 = BOX_kernel__Int(var_color); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_ids->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_ids, var_element, var12) /* []= on <var_ids:HashMap[MType, Int]>*/;
var13 = 1;
{ /* Inline kernel#Int#+ (var_color,var13) */
var16 = var_color + var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var_color = var14;
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label17: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__next]))(var4) /* next on <var4:MapIterator[Object, nullable Object]>*/;
}
BREAK_label17: (void)0;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__ids_61d]))(var_result, var_ids) /* ids= on <var_result:PHLayout[MClassType, MType]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__Layout__pos_61d]))(var_result, var_ids) /* pos= on <var_result:PHLayout[MClassType, MType]>*/;
var18 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__compute_masks]))(self, var_elements, var_ids) /* compute_masks on <self:ResolutionHasher>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__PHLayout__masks_61d]))(var_result, var18) /* masks= on <var_result:PHLayout[MClassType, MType]>*/;
var19 = ((val* (*)(val*))(var_result->class->vft[COLOR_layout_builders__PHLayout__masks]))(var_result) /* masks on <var_result:PHLayout[MClassType, MType]>*/;
var20 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_layout_builders__PerfectHasher__compute_hashes]))(self, var_elements, var_ids, var19) /* compute_hashes on <self:ResolutionHasher>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_layout_builders__PHLayout__hashes_61d]))(var_result, var20) /* hashes= on <var_result:PHLayout[MClassType, MType]>*/;
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method layout_builders#ResolutionHasher#build_layout for (self: Object, Map[MClassType, Set[MType]]): Layout[MType] */
val* VIRTUAL_layout_builders__ResolutionHasher__build_layout(val* self, val* p0) {
val* var /* : Layout[MType] */;
val* var1 /* : Layout[MType] */;
var1 = layout_builders__ResolutionHasher__build_layout(self, p0);
var = var1;
RET_LABEL:;
return var;
}
