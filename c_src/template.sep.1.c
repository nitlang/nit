#include "template.sep.0.h"
/* method template#Template#rendering for (self: Template) */
void template__Template__rendering(val* self) {
RET_LABEL:;
}
/* method template#Template#rendering for (self: Object) */
void VIRTUAL_template__Template__rendering(val* self) {
template__Template__rendering(self);
RET_LABEL:;
}
/* method template#Template#add for (self: Template, Streamable) */
void template__Template__add(val* self, val* p0) {
val* var_element /* var element: Streamable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Array[Streamable] */;
var_element = p0;
var = ((short int (*)(val*))(self->class->vft[COLOR_template__Template__is_frozen]))(self) /* is_frozen on <self:Template>*/;
var1 = !var;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/template.nit", 108);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_template__Template__content]))(self) /* content on <self:Template>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_element) /* add on <var2:Array[Streamable]>*/;
RET_LABEL:;
}
/* method template#Template#add for (self: Object, Streamable) */
void VIRTUAL_template__Template__add(val* self, val* p0) {
template__Template__add(self, p0);
RET_LABEL:;
}
/* method template#Template#add_all for (self: Template, Collection[Streamable]) */
void template__Template__add_all(val* self, val* p0) {
val* var_elements /* var elements: Collection[Streamable] */;
val* var /* : Array[Streamable] */;
var_elements = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_template__Template__content]))(self) /* content on <self:Template>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var, var_elements) /* add_all on <var:Array[Streamable]>*/;
RET_LABEL:;
}
/* method template#Template#add_all for (self: Object, Collection[Streamable]) */
void VIRTUAL_template__Template__add_all(val* self, val* p0) {
template__Template__add_all(self, p0);
RET_LABEL:;
}
/* method template#Template#add_list for (self: Template, Collection[Streamable], Streamable, Streamable) */
void template__Template__add_list(val* self, val* p0, val* p1, val* p2) {
val* var_elements /* var elements: Collection[Streamable] */;
val* var_sep /* var sep: Streamable */;
val* var_last_sep /* var last_sep: Streamable */;
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_last /* var last: Int */;
long var5 /* : Int */;
long var_i /* var i: Int */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_e /* var e: Streamable */;
val* var9 /* : Array[Streamable] */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
val* var14 /* : Array[Streamable] */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Array[Streamable] */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
var_elements = p0;
var_sep = p1;
var_last_sep = p2;
var = ((long (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__Collection__length]))(var_elements) /* length on <var_elements:Collection[Streamable]>*/;
var1 = 2;
{ /* Inline kernel#Int#- (var,var1) */
var4 = var - var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var_last = var2;
var5 = 0;
var_i = var5;
var6 = ((val* (*)(val*))(var_elements->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_elements) /* iterator on <var_elements:Collection[Streamable]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_e = var8;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_template__Template__content]))(self) /* content on <self:Template>*/;
((void (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var9, var_e) /* add on <var9:Array[Streamable]>*/;
{ /* Inline kernel#Int#< (var_i,var_last) */
/* Covariant cast for argument 0 (i) <var_last:Int> isa OTHER */
/* <var_last:Int> isa OTHER */
var12 = 1; /* easy <var_last:Int> isa OTHER*/
if (!var12) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var13 = var_i < var_last;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
if (var10){
var14 = ((val* (*)(val*))(self->class->vft[COLOR_template__Template__content]))(self) /* content on <self:Template>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var14, var_sep) /* add on <var14:Array[Streamable]>*/;
} else {
{ /* Inline kernel#Int#== (var_i,var_last) */
var17 = var_i == var_last;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (var15){
var18 = ((val* (*)(val*))(self->class->vft[COLOR_template__Template__content]))(self) /* content on <self:Template>*/;
((void (*)(val*, val*))(var18->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var18, var_last_sep) /* add on <var18:Array[Streamable]>*/;
} else {
}
}
var19 = 1;
{ /* Inline kernel#Int#+ (var_i,var19) */
var22 = var_i + var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var_i = var20;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method template#Template#add_list for (self: Object, Collection[Streamable], Streamable, Streamable) */
void VIRTUAL_template__Template__add_list(val* self, val* p0, val* p1, val* p2) {
template__Template__add_list(self, p0, p1, p2);
RET_LABEL:;
}
/* method template#Template#is_frozen for (self: Template): Bool */
short int template__Template__is_frozen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___64dis_frozen].s; /* @is_frozen on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_frozen for (self: Object): Bool */
short int VIRTUAL_template__Template__is_frozen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = template__Template__is_frozen(self);
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_frozen= for (self: Template, Bool) */
void template__Template__is_frozen_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___64dis_frozen].s = p0; /* @is_frozen on <self:Template> */
RET_LABEL:;
}
/* method template#Template#is_frozen= for (self: Object, Bool) */
void VIRTUAL_template__Template__is_frozen_61d(val* self, short int p0) {
template__Template__is_frozen_61d(self, p0);
RET_LABEL:;
}
/* method template#Template#freeze for (self: Template) */
void template__Template__freeze(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var = ((short int (*)(val*))(self->class->vft[COLOR_template__Template__is_frozen]))(self) /* is_frozen on <self:Template>*/;
if (var){
goto RET_LABEL;
} else {
}
var1 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_template__Template__is_frozen_61d]))(self, var1) /* is_frozen= on <self:Template>*/;
RET_LABEL:;
}
/* method template#Template#freeze for (self: Object) */
void VIRTUAL_template__Template__freeze(val* self) {
template__Template__freeze(self);
RET_LABEL:;
}
/* method template#Template#new_sub for (self: Template): Template */
val* template__Template__new_sub(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
val* var_res /* var res: Template */;
var1 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var1->class->vft[COLOR_template__Template__init]))(var1) /* init on <var1:Template>*/;
var_res = var1;
((void (*)(val*, val*))(self->class->vft[COLOR_template__Template__add]))(self, var_res) /* add on <self:Template>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method template#Template#new_sub for (self: Object): Template */
val* VIRTUAL_template__Template__new_sub(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = template__Template__new_sub(self);
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#content for (self: Template): Array[Streamable] */
val* template__Template__content(val* self) {
val* var /* : Array[Streamable] */;
val* var1 /* : Array[Streamable] */;
var1 = self->attrs[COLOR_template__Template___64dcontent].val; /* @content on <self:Template> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @content");
fprintf(stderr, " (%s:%d)\n", "lib/template.nit", 170);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#content for (self: Object): Array[Streamable] */
val* VIRTUAL_template__Template__content(val* self) {
val* var /* : Array[Streamable] */;
val* var1 /* : Array[Streamable] */;
var1 = template__Template__content(self);
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#content= for (self: Template, Array[Streamable]) */
void template__Template__content_61d(val* self, val* p0) {
self->attrs[COLOR_template__Template___64dcontent].val = p0; /* @content on <self:Template> */
RET_LABEL:;
}
/* method template#Template#content= for (self: Object, Array[Streamable]) */
void VIRTUAL_template__Template__content_61d(val* self, val* p0) {
template__Template__content_61d(self, p0);
RET_LABEL:;
}
/* method template#Template#render_done for (self: Template): Bool */
short int template__Template__render_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___64drender_done].s; /* @render_done on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#render_done for (self: Object): Bool */
short int VIRTUAL_template__Template__render_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = template__Template__render_done(self);
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#render_done= for (self: Template, Bool) */
void template__Template__render_done_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___64drender_done].s = p0; /* @render_done on <self:Template> */
RET_LABEL:;
}
/* method template#Template#render_done= for (self: Object, Bool) */
void VIRTUAL_template__Template__render_done_61d(val* self, short int p0) {
template__Template__render_done_61d(self, p0);
RET_LABEL:;
}
/* method template#Template#force_render for (self: Template) */
void template__Template__force_render(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var = ((short int (*)(val*))(self->class->vft[COLOR_template__Template__render_done]))(self) /* render_done on <self:Template>*/;
if (var){
goto RET_LABEL;
} else {
}
var1 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_template__Template__render_done_61d]))(self, var1) /* render_done= on <self:Template>*/;
((void (*)(val*))(self->class->vft[COLOR_template__Template__rendering]))(self) /* rendering on <self:Template>*/;
((void (*)(val*))(self->class->vft[COLOR_template__Template__freeze]))(self) /* freeze on <self:Template>*/;
RET_LABEL:;
}
/* method template#Template#force_render for (self: Object) */
void VIRTUAL_template__Template__force_render(val* self) {
template__Template__force_render(self);
RET_LABEL:;
}
/* method template#Template#write_to for (self: Template, OStream) */
void template__Template__write_to(val* self, val* p0) {
val* var_stream /* var stream: OStream */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Array[Streamable] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: Streamable */;
short int var7 /* : Bool */;
var_stream = p0;
var = ((short int (*)(val*))(self->class->vft[COLOR_template__Template__is_writing]))(self) /* is_writing on <self:Template>*/;
var1 = !var;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/template.nit", 192);
show_backtrace(1);
}
var2 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_template__Template__is_writing_61d]))(self, var2) /* is_writing= on <self:Template>*/;
((void (*)(val*))(self->class->vft[COLOR_template__Template__force_render]))(self) /* force_render on <self:Template>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_template__Template__content]))(self) /* content on <self:Template>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:Array[Streamable]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_e = var6;
((void (*)(val*, val*))(var_e->class->vft[COLOR_stream__Streamable__write_to]))(var_e, var_stream) /* write_to on <var_e:Streamable>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var7 = 0;
((void (*)(val*, short int))(self->class->vft[COLOR_template__Template__is_writing_61d]))(self, var7) /* is_writing= on <self:Template>*/;
RET_LABEL:;
}
/* method template#Template#write_to for (self: Object, OStream) */
void VIRTUAL_template__Template__write_to(val* self, val* p0) {
template__Template__write_to(self, p0);
RET_LABEL:;
}
/* method template#Template#is_writing for (self: Template): Bool */
short int template__Template__is_writing(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___64dis_writing].s; /* @is_writing on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_writing for (self: Object): Bool */
short int VIRTUAL_template__Template__is_writing(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = template__Template__is_writing(self);
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_writing= for (self: Template, Bool) */
void template__Template__is_writing_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___64dis_writing].s = p0; /* @is_writing on <self:Template> */
RET_LABEL:;
}
/* method template#Template#is_writing= for (self: Object, Bool) */
void VIRTUAL_template__Template__is_writing_61d(val* self, short int p0) {
template__Template__is_writing_61d(self, p0);
RET_LABEL:;
}
/* method template#Template#write_to_string for (self: Template): String */
val* template__Template__write_to_string(val* self) {
val* var /* : String */;
val* var1 /* : StringOStream */;
val* var_stream /* var stream: StringOStream */;
val* var2 /* : String */;
var1 = NEW_stream__StringOStream(&type_stream__StringOStream);
((void (*)(val*))(var1->class->vft[COLOR_stream__StringOStream__init]))(var1) /* init on <var1:StringOStream>*/;
var_stream = var1;
((void (*)(val*, val*))(self->class->vft[COLOR_stream__Streamable__write_to]))(self, var_stream) /* write_to on <self:Template>*/;
var2 = ((val* (*)(val*))(var_stream->class->vft[COLOR_string__Object__to_s]))(var_stream) /* to_s on <var_stream:StringOStream>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method template#Template#write_to_string for (self: Object): String */
val* VIRTUAL_template__Template__write_to_string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = template__Template__write_to_string(self);
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#write_to_file for (self: Template, String) */
void template__Template__write_to_file(val* self, val* p0) {
val* var_filepath /* var filepath: String */;
val* var /* : OFStream */;
val* var_stream /* var stream: OFStream */;
var_filepath = p0;
var = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var->class->vft[COLOR_file__OFStream__open]))(var, var_filepath) /* open on <var:OFStream>*/;
var_stream = var;
((void (*)(val*, val*))(self->class->vft[COLOR_stream__Streamable__write_to]))(self, var_stream) /* write_to on <self:Template>*/;
((void (*)(val*))(var_stream->class->vft[COLOR_stream__IOS__close]))(var_stream) /* close on <var_stream:OFStream>*/;
RET_LABEL:;
}
/* method template#Template#write_to_file for (self: Object, String) */
void VIRTUAL_template__Template__write_to_file(val* self, val* p0) {
template__Template__write_to_file(self, p0);
RET_LABEL:;
}
/* method template#Template#init for (self: Template) */
void template__Template__init(val* self) {
RET_LABEL:;
}
/* method template#Template#init for (self: Object) */
void VIRTUAL_template__Template__init(val* self) {
template__Template__init(self);
RET_LABEL:;
}
