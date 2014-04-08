#include "lexer.sep.0.h"
/* method lexer#Token#text for (self: Token): String */
val* lexer__Token__text(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Location */;
val* var5 /* : String */;
var1 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:Token> */
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_res;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:Token>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_location__Location__text]))(var4) /* text on <var4:Location>*/;
var_res = var5;
self->attrs[COLOR_lexer__Token___text].val = var_res; /* _text on <self:Token> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#Token#text for (self: Object): String */
val* VIRTUAL_lexer__Token__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = lexer__Token__text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Token#text= for (self: Token, String) */
void lexer__Token__text_61d(val* self, val* p0) {
val* var_text /* var text: String */;
var_text = p0;
self->attrs[COLOR_lexer__Token___text].val = var_text; /* _text on <self:Token> */
RET_LABEL:;
}
/* method lexer#Token#text= for (self: Object, String) */
void VIRTUAL_lexer__Token__text_61d(val* self, val* p0) {
lexer__Token__text_61d(self, p0);
RET_LABEL:;
}
/* method lexer#Token#parser_index for (self: Token): Int */
long lexer__Token__parser_index(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "parser_index", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 25);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method lexer#Token#parser_index for (self: Object): Int */
long VIRTUAL_lexer__Token__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__Token__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TEol#parser_index for (self: TEol): Int */
long lexer__TEol__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TEol#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TEol__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TEol__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TEol#init_tk for (self: TEol, Location) */
void lexer__TEol__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TEol> */
RET_LABEL:;
}
/* method lexer#TEol#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TEol__init_tk(val* self, val* p0) {
lexer__TEol__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TComment#parser_index for (self: TComment): Int */
long lexer__TComment__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TComment#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TComment__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TComment__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TComment#init_tk for (self: TComment, Location) */
void lexer__TComment__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TComment> */
RET_LABEL:;
}
/* method lexer#TComment#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TComment__init_tk(val* self, val* p0) {
lexer__TComment__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwpackage#parser_index for (self: TKwpackage): Int */
long lexer__TKwpackage__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 2;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwpackage#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwpackage__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwpackage__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwpackage#init_tk for (self: TKwpackage, Location) */
void lexer__TKwpackage__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwpackage> */
RET_LABEL:;
}
/* method lexer#TKwpackage#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwpackage__init_tk(val* self, val* p0) {
lexer__TKwpackage__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwmodule#parser_index for (self: TKwmodule): Int */
long lexer__TKwmodule__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 3;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwmodule#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwmodule__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwmodule__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwmodule#init_tk for (self: TKwmodule, Location) */
void lexer__TKwmodule__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwmodule> */
RET_LABEL:;
}
/* method lexer#TKwmodule#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwmodule__init_tk(val* self, val* p0) {
lexer__TKwmodule__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwimport#parser_index for (self: TKwimport): Int */
long lexer__TKwimport__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 4;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwimport#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwimport__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwimport__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwimport#init_tk for (self: TKwimport, Location) */
void lexer__TKwimport__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwimport> */
RET_LABEL:;
}
/* method lexer#TKwimport#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwimport__init_tk(val* self, val* p0) {
lexer__TKwimport__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwclass#parser_index for (self: TKwclass): Int */
long lexer__TKwclass__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 5;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwclass#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwclass__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwclass__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwclass#init_tk for (self: TKwclass, Location) */
void lexer__TKwclass__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwclass> */
RET_LABEL:;
}
/* method lexer#TKwclass#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwclass__init_tk(val* self, val* p0) {
lexer__TKwclass__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwabstract#parser_index for (self: TKwabstract): Int */
long lexer__TKwabstract__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 6;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwabstract#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwabstract__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwabstract__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwabstract#init_tk for (self: TKwabstract, Location) */
void lexer__TKwabstract__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwabstract> */
RET_LABEL:;
}
/* method lexer#TKwabstract#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwabstract__init_tk(val* self, val* p0) {
lexer__TKwabstract__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwinterface#parser_index for (self: TKwinterface): Int */
long lexer__TKwinterface__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 7;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwinterface#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwinterface__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwinterface__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwinterface#init_tk for (self: TKwinterface, Location) */
void lexer__TKwinterface__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwinterface> */
RET_LABEL:;
}
/* method lexer#TKwinterface#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwinterface__init_tk(val* self, val* p0) {
lexer__TKwinterface__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwenum#parser_index for (self: TKwenum): Int */
long lexer__TKwenum__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 8;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwenum#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwenum__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwenum__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwenum#init_tk for (self: TKwenum, Location) */
void lexer__TKwenum__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwenum> */
RET_LABEL:;
}
/* method lexer#TKwenum#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwenum__init_tk(val* self, val* p0) {
lexer__TKwenum__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwend#parser_index for (self: TKwend): Int */
long lexer__TKwend__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 9;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwend#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwend__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwend__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwend#init_tk for (self: TKwend, Location) */
void lexer__TKwend__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwend> */
RET_LABEL:;
}
/* method lexer#TKwend#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwend__init_tk(val* self, val* p0) {
lexer__TKwend__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwmeth#parser_index for (self: TKwmeth): Int */
long lexer__TKwmeth__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 10;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwmeth#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwmeth__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwmeth__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwmeth#init_tk for (self: TKwmeth, Location) */
void lexer__TKwmeth__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwmeth> */
RET_LABEL:;
}
/* method lexer#TKwmeth#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwmeth__init_tk(val* self, val* p0) {
lexer__TKwmeth__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwtype#parser_index for (self: TKwtype): Int */
long lexer__TKwtype__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 11;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwtype#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwtype__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwtype__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwtype#init_tk for (self: TKwtype, Location) */
void lexer__TKwtype__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwtype> */
RET_LABEL:;
}
/* method lexer#TKwtype#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwtype__init_tk(val* self, val* p0) {
lexer__TKwtype__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwinit#parser_index for (self: TKwinit): Int */
long lexer__TKwinit__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 12;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwinit#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwinit__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwinit__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwinit#init_tk for (self: TKwinit, Location) */
void lexer__TKwinit__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwinit> */
RET_LABEL:;
}
/* method lexer#TKwinit#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwinit__init_tk(val* self, val* p0) {
lexer__TKwinit__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwredef#parser_index for (self: TKwredef): Int */
long lexer__TKwredef__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 13;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwredef#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwredef__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwredef__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwredef#init_tk for (self: TKwredef, Location) */
void lexer__TKwredef__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwredef> */
RET_LABEL:;
}
/* method lexer#TKwredef#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwredef__init_tk(val* self, val* p0) {
lexer__TKwredef__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwis#parser_index for (self: TKwis): Int */
long lexer__TKwis__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 14;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwis#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwis__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwis__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwis#init_tk for (self: TKwis, Location) */
void lexer__TKwis__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwis> */
RET_LABEL:;
}
/* method lexer#TKwis#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwis__init_tk(val* self, val* p0) {
lexer__TKwis__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwdo#parser_index for (self: TKwdo): Int */
long lexer__TKwdo__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 15;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwdo#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwdo__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwdo__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwdo#init_tk for (self: TKwdo, Location) */
void lexer__TKwdo__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwdo> */
RET_LABEL:;
}
/* method lexer#TKwdo#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwdo__init_tk(val* self, val* p0) {
lexer__TKwdo__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwreadable#parser_index for (self: TKwreadable): Int */
long lexer__TKwreadable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 16;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwreadable#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwreadable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwreadable__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwreadable#init_tk for (self: TKwreadable, Location) */
void lexer__TKwreadable__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwreadable> */
RET_LABEL:;
}
/* method lexer#TKwreadable#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwreadable__init_tk(val* self, val* p0) {
lexer__TKwreadable__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwwritable#parser_index for (self: TKwwritable): Int */
long lexer__TKwwritable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 17;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwwritable#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwwritable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwwritable__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwwritable#init_tk for (self: TKwwritable, Location) */
void lexer__TKwwritable__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwwritable> */
RET_LABEL:;
}
/* method lexer#TKwwritable#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwwritable__init_tk(val* self, val* p0) {
lexer__TKwwritable__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwvar#parser_index for (self: TKwvar): Int */
long lexer__TKwvar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 18;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwvar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwvar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwvar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwvar#init_tk for (self: TKwvar, Location) */
void lexer__TKwvar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwvar> */
RET_LABEL:;
}
/* method lexer#TKwvar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwvar__init_tk(val* self, val* p0) {
lexer__TKwvar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwintern#parser_index for (self: TKwintern): Int */
long lexer__TKwintern__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 19;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwintern#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwintern__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwintern__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwintern#init_tk for (self: TKwintern, Location) */
void lexer__TKwintern__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwintern> */
RET_LABEL:;
}
/* method lexer#TKwintern#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwintern__init_tk(val* self, val* p0) {
lexer__TKwintern__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwextern#parser_index for (self: TKwextern): Int */
long lexer__TKwextern__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 20;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwextern#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwextern__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwextern__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwextern#init_tk for (self: TKwextern, Location) */
void lexer__TKwextern__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwextern> */
RET_LABEL:;
}
/* method lexer#TKwextern#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwextern__init_tk(val* self, val* p0) {
lexer__TKwextern__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwprotected#parser_index for (self: TKwprotected): Int */
long lexer__TKwprotected__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 21;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwprotected#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwprotected__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwprotected__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwprotected#init_tk for (self: TKwprotected, Location) */
void lexer__TKwprotected__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwprotected> */
RET_LABEL:;
}
/* method lexer#TKwprotected#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwprotected__init_tk(val* self, val* p0) {
lexer__TKwprotected__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwprivate#parser_index for (self: TKwprivate): Int */
long lexer__TKwprivate__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 22;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwprivate#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwprivate__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwprivate__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwprivate#init_tk for (self: TKwprivate, Location) */
void lexer__TKwprivate__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwprivate> */
RET_LABEL:;
}
/* method lexer#TKwprivate#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwprivate__init_tk(val* self, val* p0) {
lexer__TKwprivate__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwintrude#parser_index for (self: TKwintrude): Int */
long lexer__TKwintrude__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 23;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwintrude#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwintrude__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwintrude__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwintrude#init_tk for (self: TKwintrude, Location) */
void lexer__TKwintrude__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwintrude> */
RET_LABEL:;
}
/* method lexer#TKwintrude#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwintrude__init_tk(val* self, val* p0) {
lexer__TKwintrude__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwif#parser_index for (self: TKwif): Int */
long lexer__TKwif__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 24;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwif#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwif__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwif__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwif#init_tk for (self: TKwif, Location) */
void lexer__TKwif__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwif> */
RET_LABEL:;
}
/* method lexer#TKwif#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwif__init_tk(val* self, val* p0) {
lexer__TKwif__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwthen#parser_index for (self: TKwthen): Int */
long lexer__TKwthen__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 25;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwthen#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwthen__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwthen__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwthen#init_tk for (self: TKwthen, Location) */
void lexer__TKwthen__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwthen> */
RET_LABEL:;
}
/* method lexer#TKwthen#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwthen__init_tk(val* self, val* p0) {
lexer__TKwthen__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwelse#parser_index for (self: TKwelse): Int */
long lexer__TKwelse__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 26;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwelse#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwelse__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwelse__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwelse#init_tk for (self: TKwelse, Location) */
void lexer__TKwelse__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwelse> */
RET_LABEL:;
}
/* method lexer#TKwelse#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwelse__init_tk(val* self, val* p0) {
lexer__TKwelse__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwwhile#parser_index for (self: TKwwhile): Int */
long lexer__TKwwhile__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 27;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwwhile#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwwhile__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwwhile__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwwhile#init_tk for (self: TKwwhile, Location) */
void lexer__TKwwhile__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwwhile> */
RET_LABEL:;
}
/* method lexer#TKwwhile#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwwhile__init_tk(val* self, val* p0) {
lexer__TKwwhile__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwloop#parser_index for (self: TKwloop): Int */
long lexer__TKwloop__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 28;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwloop#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwloop__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwloop__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwloop#init_tk for (self: TKwloop, Location) */
void lexer__TKwloop__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwloop> */
RET_LABEL:;
}
/* method lexer#TKwloop#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwloop__init_tk(val* self, val* p0) {
lexer__TKwloop__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwfor#parser_index for (self: TKwfor): Int */
long lexer__TKwfor__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 29;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwfor#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwfor__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwfor__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwfor#init_tk for (self: TKwfor, Location) */
void lexer__TKwfor__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwfor> */
RET_LABEL:;
}
/* method lexer#TKwfor#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwfor__init_tk(val* self, val* p0) {
lexer__TKwfor__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwin#parser_index for (self: TKwin): Int */
long lexer__TKwin__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 30;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwin#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwin__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwin__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwin#init_tk for (self: TKwin, Location) */
void lexer__TKwin__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwin> */
RET_LABEL:;
}
/* method lexer#TKwin#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwin__init_tk(val* self, val* p0) {
lexer__TKwin__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwand#parser_index for (self: TKwand): Int */
long lexer__TKwand__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 31;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwand#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwand__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwand__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwand#init_tk for (self: TKwand, Location) */
void lexer__TKwand__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwand> */
RET_LABEL:;
}
/* method lexer#TKwand#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwand__init_tk(val* self, val* p0) {
lexer__TKwand__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwor#parser_index for (self: TKwor): Int */
long lexer__TKwor__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 32;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwor#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwor__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwor__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwor#init_tk for (self: TKwor, Location) */
void lexer__TKwor__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwor> */
RET_LABEL:;
}
/* method lexer#TKwor#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwor__init_tk(val* self, val* p0) {
lexer__TKwor__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwnot#parser_index for (self: TKwnot): Int */
long lexer__TKwnot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 33;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwnot#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwnot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwnot__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwnot#init_tk for (self: TKwnot, Location) */
void lexer__TKwnot__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwnot> */
RET_LABEL:;
}
/* method lexer#TKwnot#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwnot__init_tk(val* self, val* p0) {
lexer__TKwnot__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwimplies#parser_index for (self: TKwimplies): Int */
long lexer__TKwimplies__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 34;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwimplies#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwimplies__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwimplies__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwimplies#init_tk for (self: TKwimplies, Location) */
void lexer__TKwimplies__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwimplies> */
RET_LABEL:;
}
/* method lexer#TKwimplies#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwimplies__init_tk(val* self, val* p0) {
lexer__TKwimplies__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwreturn#parser_index for (self: TKwreturn): Int */
long lexer__TKwreturn__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 35;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwreturn#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwreturn__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwreturn__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwreturn#init_tk for (self: TKwreturn, Location) */
void lexer__TKwreturn__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwreturn> */
RET_LABEL:;
}
/* method lexer#TKwreturn#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwreturn__init_tk(val* self, val* p0) {
lexer__TKwreturn__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwcontinue#parser_index for (self: TKwcontinue): Int */
long lexer__TKwcontinue__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 36;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwcontinue#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwcontinue__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwcontinue__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwcontinue#init_tk for (self: TKwcontinue, Location) */
void lexer__TKwcontinue__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwcontinue> */
RET_LABEL:;
}
/* method lexer#TKwcontinue#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwcontinue__init_tk(val* self, val* p0) {
lexer__TKwcontinue__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwbreak#parser_index for (self: TKwbreak): Int */
long lexer__TKwbreak__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 37;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwbreak#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwbreak__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwbreak__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwbreak#init_tk for (self: TKwbreak, Location) */
void lexer__TKwbreak__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwbreak> */
RET_LABEL:;
}
/* method lexer#TKwbreak#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwbreak__init_tk(val* self, val* p0) {
lexer__TKwbreak__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwabort#parser_index for (self: TKwabort): Int */
long lexer__TKwabort__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 38;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwabort#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwabort__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwabort__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwabort#init_tk for (self: TKwabort, Location) */
void lexer__TKwabort__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwabort> */
RET_LABEL:;
}
/* method lexer#TKwabort#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwabort__init_tk(val* self, val* p0) {
lexer__TKwabort__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwassert#parser_index for (self: TKwassert): Int */
long lexer__TKwassert__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 39;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwassert#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwassert__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwassert__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwassert#init_tk for (self: TKwassert, Location) */
void lexer__TKwassert__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwassert> */
RET_LABEL:;
}
/* method lexer#TKwassert#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwassert__init_tk(val* self, val* p0) {
lexer__TKwassert__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwnew#parser_index for (self: TKwnew): Int */
long lexer__TKwnew__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 40;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwnew#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwnew__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwnew__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwnew#init_tk for (self: TKwnew, Location) */
void lexer__TKwnew__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwnew> */
RET_LABEL:;
}
/* method lexer#TKwnew#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwnew__init_tk(val* self, val* p0) {
lexer__TKwnew__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwisa#parser_index for (self: TKwisa): Int */
long lexer__TKwisa__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 41;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwisa#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwisa__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwisa__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwisa#init_tk for (self: TKwisa, Location) */
void lexer__TKwisa__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwisa> */
RET_LABEL:;
}
/* method lexer#TKwisa#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwisa__init_tk(val* self, val* p0) {
lexer__TKwisa__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwonce#parser_index for (self: TKwonce): Int */
long lexer__TKwonce__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 42;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwonce#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwonce__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwonce__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwonce#init_tk for (self: TKwonce, Location) */
void lexer__TKwonce__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwonce> */
RET_LABEL:;
}
/* method lexer#TKwonce#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwonce__init_tk(val* self, val* p0) {
lexer__TKwonce__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwsuper#parser_index for (self: TKwsuper): Int */
long lexer__TKwsuper__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 43;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwsuper#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwsuper__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwsuper__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwsuper#init_tk for (self: TKwsuper, Location) */
void lexer__TKwsuper__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwsuper> */
RET_LABEL:;
}
/* method lexer#TKwsuper#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwsuper__init_tk(val* self, val* p0) {
lexer__TKwsuper__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwself#parser_index for (self: TKwself): Int */
long lexer__TKwself__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 44;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwself#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwself__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwself__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwself#init_tk for (self: TKwself, Location) */
void lexer__TKwself__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwself> */
RET_LABEL:;
}
/* method lexer#TKwself#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwself__init_tk(val* self, val* p0) {
lexer__TKwself__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwtrue#parser_index for (self: TKwtrue): Int */
long lexer__TKwtrue__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 45;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwtrue#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwtrue__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwtrue__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwtrue#init_tk for (self: TKwtrue, Location) */
void lexer__TKwtrue__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwtrue> */
RET_LABEL:;
}
/* method lexer#TKwtrue#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwtrue__init_tk(val* self, val* p0) {
lexer__TKwtrue__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwfalse#parser_index for (self: TKwfalse): Int */
long lexer__TKwfalse__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 46;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwfalse#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwfalse__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwfalse__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwfalse#init_tk for (self: TKwfalse, Location) */
void lexer__TKwfalse__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwfalse> */
RET_LABEL:;
}
/* method lexer#TKwfalse#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwfalse__init_tk(val* self, val* p0) {
lexer__TKwfalse__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwnull#parser_index for (self: TKwnull): Int */
long lexer__TKwnull__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 47;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwnull#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwnull__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwnull__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwnull#init_tk for (self: TKwnull, Location) */
void lexer__TKwnull__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwnull> */
RET_LABEL:;
}
/* method lexer#TKwnull#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwnull__init_tk(val* self, val* p0) {
lexer__TKwnull__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwas#parser_index for (self: TKwas): Int */
long lexer__TKwas__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 48;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwas#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwas__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwas__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwas#init_tk for (self: TKwas, Location) */
void lexer__TKwas__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwas> */
RET_LABEL:;
}
/* method lexer#TKwas#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwas__init_tk(val* self, val* p0) {
lexer__TKwas__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwnullable#parser_index for (self: TKwnullable): Int */
long lexer__TKwnullable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 49;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwnullable#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwnullable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwnullable__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwnullable#init_tk for (self: TKwnullable, Location) */
void lexer__TKwnullable__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwnullable> */
RET_LABEL:;
}
/* method lexer#TKwnullable#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwnullable__init_tk(val* self, val* p0) {
lexer__TKwnullable__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwisset#parser_index for (self: TKwisset): Int */
long lexer__TKwisset__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 50;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwisset#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwisset__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwisset__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwisset#init_tk for (self: TKwisset, Location) */
void lexer__TKwisset__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwisset> */
RET_LABEL:;
}
/* method lexer#TKwisset#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwisset__init_tk(val* self, val* p0) {
lexer__TKwisset__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwlabel#parser_index for (self: TKwlabel): Int */
long lexer__TKwlabel__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 51;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwlabel#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwlabel__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwlabel__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwlabel#init_tk for (self: TKwlabel, Location) */
void lexer__TKwlabel__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwlabel> */
RET_LABEL:;
}
/* method lexer#TKwlabel#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwlabel__init_tk(val* self, val* p0) {
lexer__TKwlabel__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwdebug#parser_index for (self: TKwdebug): Int */
long lexer__TKwdebug__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 52;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwdebug#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwdebug__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwdebug__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwdebug#init_tk for (self: TKwdebug, Location) */
void lexer__TKwdebug__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwdebug> */
RET_LABEL:;
}
/* method lexer#TKwdebug#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwdebug__init_tk(val* self, val* p0) {
lexer__TKwdebug__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TOpar#parser_index for (self: TOpar): Int */
long lexer__TOpar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 53;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TOpar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TOpar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TOpar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TOpar#init_tk for (self: TOpar, Location) */
void lexer__TOpar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TOpar> */
RET_LABEL:;
}
/* method lexer#TOpar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TOpar__init_tk(val* self, val* p0) {
lexer__TOpar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TCpar#parser_index for (self: TCpar): Int */
long lexer__TCpar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 54;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TCpar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TCpar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TCpar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TCpar#init_tk for (self: TCpar, Location) */
void lexer__TCpar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TCpar> */
RET_LABEL:;
}
/* method lexer#TCpar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TCpar__init_tk(val* self, val* p0) {
lexer__TCpar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TObra#parser_index for (self: TObra): Int */
long lexer__TObra__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 55;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TObra#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TObra__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TObra__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TObra#init_tk for (self: TObra, Location) */
void lexer__TObra__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TObra> */
RET_LABEL:;
}
/* method lexer#TObra#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TObra__init_tk(val* self, val* p0) {
lexer__TObra__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TCbra#parser_index for (self: TCbra): Int */
long lexer__TCbra__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 56;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TCbra#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TCbra__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TCbra__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TCbra#init_tk for (self: TCbra, Location) */
void lexer__TCbra__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TCbra> */
RET_LABEL:;
}
/* method lexer#TCbra#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TCbra__init_tk(val* self, val* p0) {
lexer__TCbra__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TComma#parser_index for (self: TComma): Int */
long lexer__TComma__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 57;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TComma#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TComma__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TComma__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TComma#init_tk for (self: TComma, Location) */
void lexer__TComma__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TComma> */
RET_LABEL:;
}
/* method lexer#TComma#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TComma__init_tk(val* self, val* p0) {
lexer__TComma__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TColumn#parser_index for (self: TColumn): Int */
long lexer__TColumn__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 58;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TColumn#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TColumn__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TColumn__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TColumn#init_tk for (self: TColumn, Location) */
void lexer__TColumn__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TColumn> */
RET_LABEL:;
}
/* method lexer#TColumn#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TColumn__init_tk(val* self, val* p0) {
lexer__TColumn__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TQuad#parser_index for (self: TQuad): Int */
long lexer__TQuad__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 59;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TQuad#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TQuad__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TQuad__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TQuad#init_tk for (self: TQuad, Location) */
void lexer__TQuad__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TQuad> */
RET_LABEL:;
}
/* method lexer#TQuad#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TQuad__init_tk(val* self, val* p0) {
lexer__TQuad__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TAssign#parser_index for (self: TAssign): Int */
long lexer__TAssign__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 60;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TAssign#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TAssign__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TAssign__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TAssign#init_tk for (self: TAssign, Location) */
void lexer__TAssign__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TAssign> */
RET_LABEL:;
}
/* method lexer#TAssign#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TAssign__init_tk(val* self, val* p0) {
lexer__TAssign__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TPluseq#parser_index for (self: TPluseq): Int */
long lexer__TPluseq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 61;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TPluseq#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TPluseq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TPluseq__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TPluseq#init_tk for (self: TPluseq, Location) */
void lexer__TPluseq__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TPluseq> */
RET_LABEL:;
}
/* method lexer#TPluseq#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TPluseq__init_tk(val* self, val* p0) {
lexer__TPluseq__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TMinuseq#parser_index for (self: TMinuseq): Int */
long lexer__TMinuseq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 62;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TMinuseq#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TMinuseq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TMinuseq__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TMinuseq#init_tk for (self: TMinuseq, Location) */
void lexer__TMinuseq__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TMinuseq> */
RET_LABEL:;
}
/* method lexer#TMinuseq#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TMinuseq__init_tk(val* self, val* p0) {
lexer__TMinuseq__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TDotdotdot#parser_index for (self: TDotdotdot): Int */
long lexer__TDotdotdot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 63;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TDotdotdot#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TDotdotdot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TDotdotdot__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TDotdotdot#init_tk for (self: TDotdotdot, Location) */
void lexer__TDotdotdot__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TDotdotdot> */
RET_LABEL:;
}
/* method lexer#TDotdotdot#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TDotdotdot__init_tk(val* self, val* p0) {
lexer__TDotdotdot__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TDotdot#parser_index for (self: TDotdot): Int */
long lexer__TDotdot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 64;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TDotdot#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TDotdot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TDotdot__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TDotdot#init_tk for (self: TDotdot, Location) */
void lexer__TDotdot__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TDotdot> */
RET_LABEL:;
}
/* method lexer#TDotdot#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TDotdot__init_tk(val* self, val* p0) {
lexer__TDotdot__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TDot#parser_index for (self: TDot): Int */
long lexer__TDot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 65;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TDot#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TDot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TDot__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TDot#init_tk for (self: TDot, Location) */
void lexer__TDot__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TDot> */
RET_LABEL:;
}
/* method lexer#TDot#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TDot__init_tk(val* self, val* p0) {
lexer__TDot__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TPlus#parser_index for (self: TPlus): Int */
long lexer__TPlus__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 66;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TPlus#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TPlus__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TPlus__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TPlus#init_tk for (self: TPlus, Location) */
void lexer__TPlus__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TPlus> */
RET_LABEL:;
}
/* method lexer#TPlus#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TPlus__init_tk(val* self, val* p0) {
lexer__TPlus__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TMinus#parser_index for (self: TMinus): Int */
long lexer__TMinus__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 67;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TMinus#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TMinus__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TMinus__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TMinus#init_tk for (self: TMinus, Location) */
void lexer__TMinus__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TMinus> */
RET_LABEL:;
}
/* method lexer#TMinus#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TMinus__init_tk(val* self, val* p0) {
lexer__TMinus__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TStar#parser_index for (self: TStar): Int */
long lexer__TStar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 68;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TStar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TStar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TStar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TStar#init_tk for (self: TStar, Location) */
void lexer__TStar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TStar> */
RET_LABEL:;
}
/* method lexer#TStar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TStar__init_tk(val* self, val* p0) {
lexer__TStar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TSlash#parser_index for (self: TSlash): Int */
long lexer__TSlash__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 69;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TSlash#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TSlash__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TSlash__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TSlash#init_tk for (self: TSlash, Location) */
void lexer__TSlash__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TSlash> */
RET_LABEL:;
}
/* method lexer#TSlash#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TSlash__init_tk(val* self, val* p0) {
lexer__TSlash__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TPercent#parser_index for (self: TPercent): Int */
long lexer__TPercent__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 70;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TPercent#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TPercent__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TPercent__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TPercent#init_tk for (self: TPercent, Location) */
void lexer__TPercent__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TPercent> */
RET_LABEL:;
}
/* method lexer#TPercent#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TPercent__init_tk(val* self, val* p0) {
lexer__TPercent__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TEq#parser_index for (self: TEq): Int */
long lexer__TEq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 71;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TEq#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TEq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TEq__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TEq#init_tk for (self: TEq, Location) */
void lexer__TEq__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TEq> */
RET_LABEL:;
}
/* method lexer#TEq#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TEq__init_tk(val* self, val* p0) {
lexer__TEq__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TNe#parser_index for (self: TNe): Int */
long lexer__TNe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 72;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TNe#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TNe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TNe__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TNe#init_tk for (self: TNe, Location) */
void lexer__TNe__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TNe> */
RET_LABEL:;
}
/* method lexer#TNe#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TNe__init_tk(val* self, val* p0) {
lexer__TNe__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TLt#parser_index for (self: TLt): Int */
long lexer__TLt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 73;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TLt#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TLt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TLt__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TLt#init_tk for (self: TLt, Location) */
void lexer__TLt__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TLt> */
RET_LABEL:;
}
/* method lexer#TLt#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TLt__init_tk(val* self, val* p0) {
lexer__TLt__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TLe#parser_index for (self: TLe): Int */
long lexer__TLe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 74;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TLe#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TLe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TLe__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TLe#init_tk for (self: TLe, Location) */
void lexer__TLe__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TLe> */
RET_LABEL:;
}
/* method lexer#TLe#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TLe__init_tk(val* self, val* p0) {
lexer__TLe__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TLl#parser_index for (self: TLl): Int */
long lexer__TLl__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 75;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TLl#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TLl__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TLl__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TLl#init_tk for (self: TLl, Location) */
void lexer__TLl__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TLl> */
RET_LABEL:;
}
/* method lexer#TLl#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TLl__init_tk(val* self, val* p0) {
lexer__TLl__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TGt#parser_index for (self: TGt): Int */
long lexer__TGt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 76;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TGt#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TGt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TGt__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TGt#init_tk for (self: TGt, Location) */
void lexer__TGt__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TGt> */
RET_LABEL:;
}
/* method lexer#TGt#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TGt__init_tk(val* self, val* p0) {
lexer__TGt__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TGe#parser_index for (self: TGe): Int */
long lexer__TGe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 77;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TGe#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TGe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TGe__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TGe#init_tk for (self: TGe, Location) */
void lexer__TGe__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TGe> */
RET_LABEL:;
}
/* method lexer#TGe#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TGe__init_tk(val* self, val* p0) {
lexer__TGe__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TGg#parser_index for (self: TGg): Int */
long lexer__TGg__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 78;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TGg#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TGg__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TGg__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TGg#init_tk for (self: TGg, Location) */
void lexer__TGg__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TGg> */
RET_LABEL:;
}
/* method lexer#TGg#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TGg__init_tk(val* self, val* p0) {
lexer__TGg__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TStarship#parser_index for (self: TStarship): Int */
long lexer__TStarship__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 79;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TStarship#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TStarship__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TStarship__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TStarship#init_tk for (self: TStarship, Location) */
void lexer__TStarship__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TStarship> */
RET_LABEL:;
}
/* method lexer#TStarship#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TStarship__init_tk(val* self, val* p0) {
lexer__TStarship__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TBang#parser_index for (self: TBang): Int */
long lexer__TBang__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 80;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TBang#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TBang__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TBang__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TBang#init_tk for (self: TBang, Location) */
void lexer__TBang__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TBang> */
RET_LABEL:;
}
/* method lexer#TBang#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TBang__init_tk(val* self, val* p0) {
lexer__TBang__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TAt#parser_index for (self: TAt): Int */
long lexer__TAt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 81;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TAt#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TAt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TAt__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TAt#init_tk for (self: TAt, Location) */
void lexer__TAt__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TAt> */
RET_LABEL:;
}
/* method lexer#TAt#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TAt__init_tk(val* self, val* p0) {
lexer__TAt__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TClassid#parser_index for (self: TClassid): Int */
long lexer__TClassid__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 82;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TClassid#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TClassid__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TClassid__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TClassid#init_tk for (self: TClassid, Location) */
void lexer__TClassid__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TClassid> */
RET_LABEL:;
}
/* method lexer#TClassid#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TClassid__init_tk(val* self, val* p0) {
lexer__TClassid__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TId#parser_index for (self: TId): Int */
long lexer__TId__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 83;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TId#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TId__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TId__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TId#init_tk for (self: TId, Location) */
void lexer__TId__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TId> */
RET_LABEL:;
}
/* method lexer#TId#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TId__init_tk(val* self, val* p0) {
lexer__TId__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TAttrid#parser_index for (self: TAttrid): Int */
long lexer__TAttrid__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 84;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TAttrid#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TAttrid__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TAttrid__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TAttrid#init_tk for (self: TAttrid, Location) */
void lexer__TAttrid__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TAttrid> */
RET_LABEL:;
}
/* method lexer#TAttrid#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TAttrid__init_tk(val* self, val* p0) {
lexer__TAttrid__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TNumber#parser_index for (self: TNumber): Int */
long lexer__TNumber__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 85;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TNumber#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TNumber__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TNumber__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TNumber#init_tk for (self: TNumber, Location) */
void lexer__TNumber__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TNumber> */
RET_LABEL:;
}
/* method lexer#TNumber#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TNumber__init_tk(val* self, val* p0) {
lexer__TNumber__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TFloat#parser_index for (self: TFloat): Int */
long lexer__TFloat__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 86;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TFloat#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TFloat__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TFloat__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TFloat#init_tk for (self: TFloat, Location) */
void lexer__TFloat__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TFloat> */
RET_LABEL:;
}
/* method lexer#TFloat#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TFloat__init_tk(val* self, val* p0) {
lexer__TFloat__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TString#parser_index for (self: TString): Int */
long lexer__TString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 87;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TString#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TString__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TString#init_tk for (self: TString, Location) */
void lexer__TString__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TString> */
RET_LABEL:;
}
/* method lexer#TString#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TString__init_tk(val* self, val* p0) {
lexer__TString__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TStartString#parser_index for (self: TStartString): Int */
long lexer__TStartString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 88;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TStartString#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TStartString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TStartString__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TStartString#init_tk for (self: TStartString, Location) */
void lexer__TStartString__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TStartString> */
RET_LABEL:;
}
/* method lexer#TStartString#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TStartString__init_tk(val* self, val* p0) {
lexer__TStartString__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TMidString#parser_index for (self: TMidString): Int */
long lexer__TMidString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 89;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TMidString#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TMidString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TMidString__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TMidString#init_tk for (self: TMidString, Location) */
void lexer__TMidString__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TMidString> */
RET_LABEL:;
}
/* method lexer#TMidString#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TMidString__init_tk(val* self, val* p0) {
lexer__TMidString__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TEndString#parser_index for (self: TEndString): Int */
long lexer__TEndString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 90;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TEndString#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TEndString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TEndString__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TEndString#init_tk for (self: TEndString, Location) */
void lexer__TEndString__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TEndString> */
RET_LABEL:;
}
/* method lexer#TEndString#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TEndString__init_tk(val* self, val* p0) {
lexer__TEndString__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TChar#parser_index for (self: TChar): Int */
long lexer__TChar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 91;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TChar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TChar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TChar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TChar#init_tk for (self: TChar, Location) */
void lexer__TChar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TChar> */
RET_LABEL:;
}
/* method lexer#TChar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TChar__init_tk(val* self, val* p0) {
lexer__TChar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TBadString#parser_index for (self: TBadString): Int */
long lexer__TBadString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 92;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TBadString#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TBadString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TBadString__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TBadString#init_tk for (self: TBadString, Location) */
void lexer__TBadString__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TBadString> */
RET_LABEL:;
}
/* method lexer#TBadString#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TBadString__init_tk(val* self, val* p0) {
lexer__TBadString__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TBadChar#parser_index for (self: TBadChar): Int */
long lexer__TBadChar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 93;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TBadChar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TBadChar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TBadChar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TBadChar#init_tk for (self: TBadChar, Location) */
void lexer__TBadChar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TBadChar> */
RET_LABEL:;
}
/* method lexer#TBadChar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TBadChar__init_tk(val* self, val* p0) {
lexer__TBadChar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TExternCodeSegment#parser_index for (self: TExternCodeSegment): Int */
long lexer__TExternCodeSegment__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 94;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TExternCodeSegment#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TExternCodeSegment__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TExternCodeSegment__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TExternCodeSegment#init_tk for (self: TExternCodeSegment, Location) */
void lexer__TExternCodeSegment__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TExternCodeSegment> */
RET_LABEL:;
}
/* method lexer#TExternCodeSegment#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TExternCodeSegment__init_tk(val* self, val* p0) {
lexer__TExternCodeSegment__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#EOF#parser_index for (self: EOF): Int */
long lexer__EOF__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 95;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#EOF#parser_index for (self: Object): Int */
long VIRTUAL_lexer__EOF__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__EOF__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#EOF#init_tk for (self: EOF, Location) */
void lexer__EOF__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
var_loc = p0;
if (varonce) {
var = varonce;
} else {
var1 = "";
var2 = 0;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
self->attrs[COLOR_lexer__Token___text].val = var; /* _text on <self:EOF> */
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:EOF> */
RET_LABEL:;
}
/* method lexer#EOF#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__EOF__init_tk(val* self, val* p0) {
lexer__EOF__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#AError#message for (self: AError): String */
val* lexer__AError__message(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_lexer__AError___message].val; /* _message on <self:AError> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _message");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1183);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#AError#message for (self: Object): String */
val* VIRTUAL_lexer__AError__message(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = lexer__AError__message(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#AError#init_error for (self: AError, String, Location) */
void lexer__AError__init_error(val* self, val* p0, val* p1) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
var_message = p0;
var_loc = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_lexer__EOF__init_tk]))(self, var_loc) /* init_tk on <self:AError>*/;
self->attrs[COLOR_lexer__AError___message].val = var_message; /* _message on <self:AError> */
RET_LABEL:;
}
/* method lexer#AError#init_error for (self: Object, String, Location) */
void VIRTUAL_lexer__AError__init_error(val* self, val* p0, val* p1) {
lexer__AError__init_error(self, p0, p1);
RET_LABEL:;
}
/* method lexer#ALexerError#string for (self: ALexerError): String */
val* lexer__ALexerError__string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_lexer__ALexerError___string].val; /* _string on <self:ALexerError> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _string");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1193);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#ALexerError#string for (self: Object): String */
val* VIRTUAL_lexer__ALexerError__string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = lexer__ALexerError__string(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#ALexerError#init_lexer_error for (self: ALexerError, String, Location, String) */
void lexer__ALexerError__init_lexer_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_string /* var string: String */;
var_message = p0;
var_loc = p1;
var_string = p2;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_lexer__AError__init_error]))(self, var_message, var_loc) /* init_error on <self:ALexerError>*/;
self->attrs[COLOR_lexer__ALexerError___string].val = var_string; /* _string on <self:ALexerError> */
RET_LABEL:;
}
/* method lexer#ALexerError#init_lexer_error for (self: Object, String, Location, String) */
void VIRTUAL_lexer__ALexerError__init_lexer_error(val* self, val* p0, val* p1, val* p2) {
lexer__ALexerError__init_lexer_error(self, p0, p1, p2);
RET_LABEL:;
}
/* method lexer#AParserError#token for (self: AParserError): Token */
val* lexer__AParserError__token(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_lexer__AParserError___token].val; /* _token on <self:AParserError> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _token");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1203);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#AParserError#token for (self: Object): Token */
val* VIRTUAL_lexer__AParserError__token(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = lexer__AParserError__token(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#AParserError#init_parser_error for (self: AParserError, String, Location, Token) */
void lexer__AParserError__init_parser_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_token /* var token: Token */;
var_message = p0;
var_loc = p1;
var_token = p2;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_lexer__AError__init_error]))(self, var_message, var_loc) /* init_error on <self:AParserError>*/;
self->attrs[COLOR_lexer__AParserError___token].val = var_token; /* _token on <self:AParserError> */
RET_LABEL:;
}
/* method lexer#AParserError#init_parser_error for (self: Object, String, Location, Token) */
void VIRTUAL_lexer__AParserError__init_parser_error(val* self, val* p0, val* p1, val* p2) {
lexer__AParserError__init_parser_error(self, p0, p1, p2);
RET_LABEL:;
}
/* method lexer#Lexer#file for (self: Lexer): SourceFile */
val* lexer__Lexer__file(val* self) {
val* var /* : SourceFile */;
val* var1 /* : SourceFile */;
var1 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1222);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#file for (self: Object): SourceFile */
val* VIRTUAL_lexer__Lexer__file(val* self) {
val* var /* : SourceFile */;
val* var1 /* : SourceFile */;
var1 = lexer__Lexer__file(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#state_initial for (self: Lexer): Int */
long lexer__Lexer__state_initial(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#state_initial for (self: Object): Int */
long VIRTUAL_lexer__Lexer__state_initial(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__Lexer__state_initial(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#init for (self: Lexer, SourceFile) */
void lexer__Lexer__init(val* self, val* p0) {
val* var_file /* var file: SourceFile */;
var_file = p0;
self->attrs[COLOR_lexer__Lexer___file].val = var_file; /* _file on <self:Lexer> */
RET_LABEL:;
}
/* method lexer#Lexer#init for (self: Object, SourceFile) */
void VIRTUAL_lexer__Lexer__init(val* self, val* p0) {
lexer__Lexer__init(self, p0);
RET_LABEL:;
}
/* method lexer#Lexer#last_token for (self: Lexer): nullable Token */
val* lexer__Lexer__last_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_lexer__Lexer___64dlast_token].val; /* @last_token on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#last_token for (self: Object): nullable Token */
val* VIRTUAL_lexer__Lexer__last_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = lexer__Lexer__last_token(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#last_token= for (self: Lexer, nullable Token) */
void lexer__Lexer__last_token_61d(val* self, val* p0) {
self->attrs[COLOR_lexer__Lexer___64dlast_token].val = p0; /* @last_token on <self:Lexer> */
RET_LABEL:;
}
/* method lexer#Lexer#last_token= for (self: Object, nullable Token) */
void VIRTUAL_lexer__Lexer__last_token_61d(val* self, val* p0) {
lexer__Lexer__last_token_61d(self, p0);
RET_LABEL:;
}
/* method lexer#Lexer#peek for (self: Lexer): Token */
val* lexer__Lexer__peek(val* self) {
val* var /* : Token */;
val* var1 /* : nullable Token */;
val* var_t /* var t: nullable Token */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable Token */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable Token */;
val* var8 /* : nullable Token */;
val* var_l /* var l: nullable Token */;
val* var9 /* : null */;
short int var10 /* : Bool */;
var1 = self->attrs[COLOR_lexer__Lexer___token].val; /* _token on <self:Lexer> */
var_t = var1;
var2 = NULL;
if (var_t == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_t;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__get_token]))(self) /* get_token on <self:Lexer>*/;
var_t = var4;
for(;;) {
var5 = NULL;
if (var_t == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (!var6) break;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__get_token]))(self) /* get_token on <self:Lexer>*/;
var_t = var7;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__last_token]))(self) /* last_token on <self:Lexer>*/;
var_l = var8;
var9 = NULL;
if (var_l == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
((void (*)(val*, val*))(var_l->class->vft[COLOR_parser_nodes__Token__next_token_61d]))(var_l, var_t) /* next_token= on <var_l:nullable Token(Token)>*/;
((void (*)(val*, val*))(var_t->class->vft[COLOR_parser_nodes__Token__prev_token_61d]))(var_t, var_l) /* prev_token= on <var_t:nullable Token(Token)>*/;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_lexer__Lexer__last_token_61d]))(self, var_t) /* last_token= on <self:Lexer>*/;
self->attrs[COLOR_lexer__Lexer___token].val = var_t; /* _token on <self:Lexer> */
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#peek for (self: Object): Token */
val* VIRTUAL_lexer__Lexer__peek(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = lexer__Lexer__peek(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#next for (self: Lexer): Token */
val* lexer__Lexer__next(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
val* var_result /* var result: Token */;
val* var2 /* : null */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__peek]))(self) /* peek on <self:Lexer>*/;
var_result = var1;
var2 = NULL;
self->attrs[COLOR_lexer__Lexer___token].val = var2; /* _token on <self:Lexer> */
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#next for (self: Object): Token */
val* VIRTUAL_lexer__Lexer__next(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = lexer__Lexer__next(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#get_token for (self: Lexer): nullable Token */
val* lexer__Lexer__get_token(val* self) {
val* var /* : nullable Token */;
long var1 /* : Int */;
long var_dfa_state /* var dfa_state: Int */;
long var2 /* : Int */;
long var_sp /* var sp: Int */;
long var_start_stream_pos /* var start_stream_pos: Int */;
long var3 /* : Int */;
long var_start_pos /* var start_pos: Int */;
long var4 /* : Int */;
long var_start_line /* var start_line: Int */;
val* var5 /* : SourceFile */;
val* var6 /* : String */;
val* var_string /* var string: String */;
long var7 /* : Int */;
long var_string_len /* var string_len: Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
long var_accept_state /* var accept_state: Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var_accept_token /* var accept_token: Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_accept_length /* var accept_length: Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
long var_accept_pos /* var accept_pos: Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var_accept_line /* var accept_line: Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var31 /* : Bool */;
long var32 /* : Int */;
long var33 /* : Int */;
long var35 /* : Int */;
val* var36 /* : StringCharView */;
val* var37 /* : nullable Object */;
long var38 /* : Int */;
char var40 /* : Char */;
long var41 /* : Int */;
long var_c /* var c: Int */;
long var42 /* : Int */;
long var43 /* : Int */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var_cr /* var cr: Bool */;
long var47 /* : Int */;
long var_line /* var line: Int */;
long var48 /* : Int */;
long var_pos /* var pos: Int */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : SourceFile */;
val* var55 /* : Array[Int] */;
val* var56 /* : nullable Object */;
long var57 /* : Int */;
long var58 /* : Int */;
long var60 /* : Int */;
long var61 /* : Int */;
val* var62 /* : SourceFile */;
val* var63 /* : Array[Int] */;
val* var64 /* : nullable Object */;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
long var69 /* : Int */;
long var70 /* : Int */;
long var72 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
val* var75 /* : SourceFile */;
val* var76 /* : Array[Int] */;
val* var77 /* : nullable Object */;
long var78 /* : Int */;
long var79 /* : Int */;
long var81 /* : Int */;
short int var82 /* : Bool */;
long var_old_state /* var old_state: Int */;
long var83 /* : Int */;
long var84 /* : Int */;
long var86 /* : Int */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
short int var93 /* : Bool */;
long var94 /* : Int */;
long var95 /* : Int */;
long var97 /* : Int */;
long var98 /* : Int */;
long var100 /* : Int */;
long var101 /* : Int */;
long var102 /* : Int */;
long var104 /* : Int */;
long var105 /* : Int */;
long var_low /* var low: Int */;
long var106 /* : Int */;
long var107 /* : Int */;
long var108 /* : Int */;
long var109 /* : Int */;
long var111 /* : Int */;
long var_high /* var high: Int */;
long var112 /* : Int */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
int cltype116;
int idtype117;
const char* var_class_name118;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
const char* var_class_name125;
short int var126 /* : Bool */;
long var127 /* : Int */;
long var129 /* : Int */;
long var130 /* : Int */;
long var131 /* : Int */;
long var133 /* : Int */;
long var_middle /* var middle: Int */;
long var134 /* : Int */;
long var135 /* : Int */;
long var137 /* : Int */;
long var138 /* : Int */;
long var139 /* : Int */;
long var141 /* : Int */;
long var_offset /* var offset: Int */;
long var142 /* : Int */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
int cltype146;
int idtype147;
const char* var_class_name148;
short int var149 /* : Bool */;
long var150 /* : Int */;
long var151 /* : Int */;
long var153 /* : Int */;
long var154 /* : Int */;
long var155 /* : Int */;
long var157 /* : Int */;
long var158 /* : Int */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
int cltype162;
int idtype163;
const char* var_class_name164;
short int var165 /* : Bool */;
long var166 /* : Int */;
long var167 /* : Int */;
long var169 /* : Int */;
long var170 /* : Int */;
long var171 /* : Int */;
long var173 /* : Int */;
long var174 /* : Int */;
long var175 /* : Int */;
long var176 /* : Int */;
long var178 /* : Int */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
const char* var_class_name184;
short int var185 /* : Bool */;
long var187 /* : Int */;
short int var188 /* : Bool */;
short int var190 /* : Bool */;
int cltype191;
int idtype192;
const char* var_class_name193;
short int var194 /* : Bool */;
long var195 /* : Int */;
long var_tok /* var tok: Int */;
long var196 /* : Int */;
long var197 /* : Int */;
long var199 /* : Int */;
short int var200 /* : Bool */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
long var204 /* : Int */;
long var206 /* : Int */;
long var207 /* : Int */;
long var208 /* : Int */;
long var209 /* : Int */;
long var210 /* : Int */;
long var212 /* : Int */;
short int var213 /* : Bool */;
short int var215 /* : Bool */;
short int var216 /* : Bool */;
val* var217 /* : Location */;
val* var218 /* : SourceFile */;
long var219 /* : Int */;
long var220 /* : Int */;
long var222 /* : Int */;
long var223 /* : Int */;
long var224 /* : Int */;
long var226 /* : Int */;
long var227 /* : Int */;
long var228 /* : Int */;
long var230 /* : Int */;
val* var_location /* var location: Location */;
long var231 /* : Int */;
long var233 /* : Int */;
long var234 /* : Int */;
short int var235 /* : Bool */;
short int var237 /* : Bool */;
val* var238 /* : null */;
long var239 /* : Int */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
val* var243 /* : TEol */;
long var244 /* : Int */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
val* var248 /* : TComment */;
long var249 /* : Int */;
short int var250 /* : Bool */;
short int var252 /* : Bool */;
val* var253 /* : TKwpackage */;
long var254 /* : Int */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
val* var258 /* : TKwmodule */;
long var259 /* : Int */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
val* var263 /* : TKwimport */;
long var264 /* : Int */;
short int var265 /* : Bool */;
short int var267 /* : Bool */;
val* var268 /* : TKwclass */;
long var269 /* : Int */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
val* var273 /* : TKwabstract */;
long var274 /* : Int */;
short int var275 /* : Bool */;
short int var277 /* : Bool */;
val* var278 /* : TKwinterface */;
long var279 /* : Int */;
short int var280 /* : Bool */;
short int var282 /* : Bool */;
val* var283 /* : TKwenum */;
long var284 /* : Int */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
val* var288 /* : TKwend */;
long var289 /* : Int */;
short int var290 /* : Bool */;
short int var292 /* : Bool */;
val* var293 /* : TKwmeth */;
long var294 /* : Int */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
val* var298 /* : TKwtype */;
long var299 /* : Int */;
short int var300 /* : Bool */;
short int var302 /* : Bool */;
val* var303 /* : TKwinit */;
long var304 /* : Int */;
short int var305 /* : Bool */;
short int var307 /* : Bool */;
val* var308 /* : TKwredef */;
long var309 /* : Int */;
short int var310 /* : Bool */;
short int var312 /* : Bool */;
val* var313 /* : TKwis */;
long var314 /* : Int */;
short int var315 /* : Bool */;
short int var317 /* : Bool */;
val* var318 /* : TKwdo */;
long var319 /* : Int */;
short int var320 /* : Bool */;
short int var322 /* : Bool */;
val* var323 /* : TKwreadable */;
long var324 /* : Int */;
short int var325 /* : Bool */;
short int var327 /* : Bool */;
val* var328 /* : TKwwritable */;
long var329 /* : Int */;
short int var330 /* : Bool */;
short int var332 /* : Bool */;
val* var333 /* : TKwvar */;
long var334 /* : Int */;
short int var335 /* : Bool */;
short int var337 /* : Bool */;
val* var338 /* : TKwintern */;
long var339 /* : Int */;
short int var340 /* : Bool */;
short int var342 /* : Bool */;
val* var343 /* : TKwextern */;
long var344 /* : Int */;
short int var345 /* : Bool */;
short int var347 /* : Bool */;
val* var348 /* : TKwprotected */;
long var349 /* : Int */;
short int var350 /* : Bool */;
short int var352 /* : Bool */;
val* var353 /* : TKwprivate */;
long var354 /* : Int */;
short int var355 /* : Bool */;
short int var357 /* : Bool */;
val* var358 /* : TKwintrude */;
long var359 /* : Int */;
short int var360 /* : Bool */;
short int var362 /* : Bool */;
val* var363 /* : TKwif */;
long var364 /* : Int */;
short int var365 /* : Bool */;
short int var367 /* : Bool */;
val* var368 /* : TKwthen */;
long var369 /* : Int */;
short int var370 /* : Bool */;
short int var372 /* : Bool */;
val* var373 /* : TKwelse */;
long var374 /* : Int */;
short int var375 /* : Bool */;
short int var377 /* : Bool */;
val* var378 /* : TKwwhile */;
long var379 /* : Int */;
short int var380 /* : Bool */;
short int var382 /* : Bool */;
val* var383 /* : TKwloop */;
long var384 /* : Int */;
short int var385 /* : Bool */;
short int var387 /* : Bool */;
val* var388 /* : TKwfor */;
long var389 /* : Int */;
short int var390 /* : Bool */;
short int var392 /* : Bool */;
val* var393 /* : TKwin */;
long var394 /* : Int */;
short int var395 /* : Bool */;
short int var397 /* : Bool */;
val* var398 /* : TKwand */;
long var399 /* : Int */;
short int var400 /* : Bool */;
short int var402 /* : Bool */;
val* var403 /* : TKwor */;
long var404 /* : Int */;
short int var405 /* : Bool */;
short int var407 /* : Bool */;
val* var408 /* : TKwnot */;
long var409 /* : Int */;
short int var410 /* : Bool */;
short int var412 /* : Bool */;
val* var413 /* : TKwimplies */;
long var414 /* : Int */;
short int var415 /* : Bool */;
short int var417 /* : Bool */;
val* var418 /* : TKwreturn */;
long var419 /* : Int */;
short int var420 /* : Bool */;
short int var422 /* : Bool */;
val* var423 /* : TKwcontinue */;
long var424 /* : Int */;
short int var425 /* : Bool */;
short int var427 /* : Bool */;
val* var428 /* : TKwbreak */;
long var429 /* : Int */;
short int var430 /* : Bool */;
short int var432 /* : Bool */;
val* var433 /* : TKwabort */;
long var434 /* : Int */;
short int var435 /* : Bool */;
short int var437 /* : Bool */;
val* var438 /* : TKwassert */;
long var439 /* : Int */;
short int var440 /* : Bool */;
short int var442 /* : Bool */;
val* var443 /* : TKwnew */;
long var444 /* : Int */;
short int var445 /* : Bool */;
short int var447 /* : Bool */;
val* var448 /* : TKwisa */;
long var449 /* : Int */;
short int var450 /* : Bool */;
short int var452 /* : Bool */;
val* var453 /* : TKwonce */;
long var454 /* : Int */;
short int var455 /* : Bool */;
short int var457 /* : Bool */;
val* var458 /* : TKwsuper */;
long var459 /* : Int */;
short int var460 /* : Bool */;
short int var462 /* : Bool */;
val* var463 /* : TKwself */;
long var464 /* : Int */;
short int var465 /* : Bool */;
short int var467 /* : Bool */;
val* var468 /* : TKwtrue */;
long var469 /* : Int */;
short int var470 /* : Bool */;
short int var472 /* : Bool */;
val* var473 /* : TKwfalse */;
long var474 /* : Int */;
short int var475 /* : Bool */;
short int var477 /* : Bool */;
val* var478 /* : TKwnull */;
long var479 /* : Int */;
short int var480 /* : Bool */;
short int var482 /* : Bool */;
val* var483 /* : TKwas */;
long var484 /* : Int */;
short int var485 /* : Bool */;
short int var487 /* : Bool */;
val* var488 /* : TKwnullable */;
long var489 /* : Int */;
short int var490 /* : Bool */;
short int var492 /* : Bool */;
val* var493 /* : TKwisset */;
long var494 /* : Int */;
short int var495 /* : Bool */;
short int var497 /* : Bool */;
val* var498 /* : TKwlabel */;
long var499 /* : Int */;
short int var500 /* : Bool */;
short int var502 /* : Bool */;
val* var503 /* : TKwdebug */;
long var504 /* : Int */;
short int var505 /* : Bool */;
short int var507 /* : Bool */;
val* var508 /* : TOpar */;
long var509 /* : Int */;
short int var510 /* : Bool */;
short int var512 /* : Bool */;
val* var513 /* : TCpar */;
long var514 /* : Int */;
short int var515 /* : Bool */;
short int var517 /* : Bool */;
val* var518 /* : TObra */;
long var519 /* : Int */;
short int var520 /* : Bool */;
short int var522 /* : Bool */;
val* var523 /* : TCbra */;
long var524 /* : Int */;
short int var525 /* : Bool */;
short int var527 /* : Bool */;
val* var528 /* : TComma */;
long var529 /* : Int */;
short int var530 /* : Bool */;
short int var532 /* : Bool */;
val* var533 /* : TColumn */;
long var534 /* : Int */;
short int var535 /* : Bool */;
short int var537 /* : Bool */;
val* var538 /* : TQuad */;
long var539 /* : Int */;
short int var540 /* : Bool */;
short int var542 /* : Bool */;
val* var543 /* : TAssign */;
long var544 /* : Int */;
short int var545 /* : Bool */;
short int var547 /* : Bool */;
val* var548 /* : TPluseq */;
long var549 /* : Int */;
short int var550 /* : Bool */;
short int var552 /* : Bool */;
val* var553 /* : TMinuseq */;
long var554 /* : Int */;
short int var555 /* : Bool */;
short int var557 /* : Bool */;
val* var558 /* : TDotdotdot */;
long var559 /* : Int */;
short int var560 /* : Bool */;
short int var562 /* : Bool */;
val* var563 /* : TDotdot */;
long var564 /* : Int */;
short int var565 /* : Bool */;
short int var567 /* : Bool */;
val* var568 /* : TDot */;
long var569 /* : Int */;
short int var570 /* : Bool */;
short int var572 /* : Bool */;
val* var573 /* : TPlus */;
long var574 /* : Int */;
short int var575 /* : Bool */;
short int var577 /* : Bool */;
val* var578 /* : TMinus */;
long var579 /* : Int */;
short int var580 /* : Bool */;
short int var582 /* : Bool */;
val* var583 /* : TStar */;
long var584 /* : Int */;
short int var585 /* : Bool */;
short int var587 /* : Bool */;
val* var588 /* : TSlash */;
long var589 /* : Int */;
short int var590 /* : Bool */;
short int var592 /* : Bool */;
val* var593 /* : TPercent */;
long var594 /* : Int */;
short int var595 /* : Bool */;
short int var597 /* : Bool */;
val* var598 /* : TEq */;
long var599 /* : Int */;
short int var600 /* : Bool */;
short int var602 /* : Bool */;
val* var603 /* : TNe */;
long var604 /* : Int */;
short int var605 /* : Bool */;
short int var607 /* : Bool */;
val* var608 /* : TLt */;
long var609 /* : Int */;
short int var610 /* : Bool */;
short int var612 /* : Bool */;
val* var613 /* : TLe */;
long var614 /* : Int */;
short int var615 /* : Bool */;
short int var617 /* : Bool */;
val* var618 /* : TLl */;
long var619 /* : Int */;
short int var620 /* : Bool */;
short int var622 /* : Bool */;
val* var623 /* : TGt */;
long var624 /* : Int */;
short int var625 /* : Bool */;
short int var627 /* : Bool */;
val* var628 /* : TGe */;
long var629 /* : Int */;
short int var630 /* : Bool */;
short int var632 /* : Bool */;
val* var633 /* : TGg */;
long var634 /* : Int */;
short int var635 /* : Bool */;
short int var637 /* : Bool */;
val* var638 /* : TStarship */;
long var639 /* : Int */;
short int var640 /* : Bool */;
short int var642 /* : Bool */;
val* var643 /* : TBang */;
long var644 /* : Int */;
short int var645 /* : Bool */;
short int var647 /* : Bool */;
val* var648 /* : TAt */;
long var649 /* : Int */;
short int var650 /* : Bool */;
short int var652 /* : Bool */;
val* var653 /* : TClassid */;
long var654 /* : Int */;
short int var655 /* : Bool */;
short int var657 /* : Bool */;
val* var658 /* : TId */;
long var659 /* : Int */;
short int var660 /* : Bool */;
short int var662 /* : Bool */;
val* var663 /* : TAttrid */;
long var664 /* : Int */;
short int var665 /* : Bool */;
short int var667 /* : Bool */;
val* var668 /* : TNumber */;
long var669 /* : Int */;
short int var670 /* : Bool */;
short int var672 /* : Bool */;
val* var673 /* : TFloat */;
long var674 /* : Int */;
short int var675 /* : Bool */;
short int var677 /* : Bool */;
val* var678 /* : TString */;
long var679 /* : Int */;
short int var680 /* : Bool */;
short int var682 /* : Bool */;
val* var683 /* : TStartString */;
long var684 /* : Int */;
short int var685 /* : Bool */;
short int var687 /* : Bool */;
val* var688 /* : TMidString */;
long var689 /* : Int */;
short int var690 /* : Bool */;
short int var692 /* : Bool */;
val* var693 /* : TEndString */;
long var694 /* : Int */;
short int var695 /* : Bool */;
short int var697 /* : Bool */;
val* var698 /* : TChar */;
long var699 /* : Int */;
short int var700 /* : Bool */;
short int var702 /* : Bool */;
val* var703 /* : TBadString */;
long var704 /* : Int */;
short int var705 /* : Bool */;
short int var707 /* : Bool */;
val* var708 /* : TBadChar */;
long var709 /* : Int */;
short int var710 /* : Bool */;
short int var712 /* : Bool */;
val* var713 /* : TExternCodeSegment */;
val* var714 /* : Location */;
val* var715 /* : SourceFile */;
long var716 /* : Int */;
long var717 /* : Int */;
long var719 /* : Int */;
long var720 /* : Int */;
long var721 /* : Int */;
long var723 /* : Int */;
long var724 /* : Int */;
long var725 /* : Int */;
long var727 /* : Int */;
long var728 /* : Int */;
long var729 /* : Int */;
long var731 /* : Int */;
val* var_location732 /* var location: Location */;
short int var733 /* : Bool */;
short int var735 /* : Bool */;
int cltype736;
int idtype737;
const char* var_class_name738;
short int var739 /* : Bool */;
long var740 /* : Int */;
long var742 /* : Int */;
val* var743 /* : String */;
val* var_text /* var text: String */;
val* var744 /* : ALexerError */;
val* var745 /* : Array[Object] */;
long var746 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var747 /* : String */;
char* var748 /* : NativeString */;
long var749 /* : Int */;
val* var750 /* : String */;
static val* varonce751;
val* var752 /* : String */;
char* var753 /* : NativeString */;
long var754 /* : Int */;
val* var755 /* : String */;
val* var756 /* : String */;
val* var_token /* var token: ALexerError */;
val* var757 /* : EOF */;
val* var_token758 /* var token: EOF */;
var1 = 0;
var_dfa_state = var1;
var2 = self->attrs[COLOR_lexer__Lexer___stream_pos].l; /* _stream_pos on <self:Lexer> */
var_sp = var2;
var_start_stream_pos = var_sp;
var3 = self->attrs[COLOR_lexer__Lexer___pos].l; /* _pos on <self:Lexer> */
var_start_pos = var3;
var4 = self->attrs[COLOR_lexer__Lexer___line].l; /* _line on <self:Lexer> */
var_start_line = var4;
var5 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1287);
show_backtrace(1);
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_location__SourceFile__string]))(var5) /* string on <var5:SourceFile>*/;
var_string = var6;
var7 = ((long (*)(val*))(var_string->class->vft[COLOR_abstract_collection__Collection__length]))(var_string) /* length on <var_string:String>*/;
var_string_len = var7;
var8 = 1;
{ /* Inline kernel#Int#unary - (var8) */
var11 = -var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_accept_state = var9;
var12 = 1;
{ /* Inline kernel#Int#unary - (var12) */
var15 = -var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var_accept_token = var13;
var16 = 1;
{ /* Inline kernel#Int#unary - (var16) */
var19 = -var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_accept_length = var17;
var20 = 1;
{ /* Inline kernel#Int#unary - (var20) */
var23 = -var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var_accept_pos = var21;
var24 = 1;
{ /* Inline kernel#Int#unary - (var24) */
var27 = -var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var_accept_line = var25;
for(;;) {
{ /* Inline kernel#Int#>= (var_sp,var_string_len) */
/* Covariant cast for argument 0 (i) <var_string_len:Int> isa OTHER */
/* <var_string_len:Int> isa OTHER */
var30 = 1; /* easy <var_string_len:Int> isa OTHER*/
if (!var30) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var31 = var_sp >= var_string_len;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
if (var28){
var32 = 1;
{ /* Inline kernel#Int#unary - (var32) */
var35 = -var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var_dfa_state = var33;
} else {
var36 = ((val* (*)(val*))(var_string->class->vft[COLOR_string__AbstractString__chars]))(var_string) /* chars on <var_string:String>*/;
var37 = ((val* (*)(val*, long))(var36->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var36, var_sp) /* [] on <var36:StringCharView>*/;
{ /* Inline kernel#Char#ascii (var37) */
var40 = ((struct instance_kernel__Char*)var37)->value; /* autounbox from nullable Object to Char */;
var41 = (unsigned char)var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var_c = var38;
var42 = 1;
{ /* Inline kernel#Int#+ (var_sp,var42) */
var45 = var_sp + var42;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var_sp = var43;
var46 = self->attrs[COLOR_lexer__Lexer___cr].s; /* _cr on <self:Lexer> */
var_cr = var46;
var47 = self->attrs[COLOR_lexer__Lexer___line].l; /* _line on <self:Lexer> */
var_line = var47;
var48 = self->attrs[COLOR_lexer__Lexer___pos].l; /* _pos on <self:Lexer> */
var_pos = var48;
var49 = 10;
{ /* Inline kernel#Int#== (var_c,var49) */
var52 = var_c == var49;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
if (var50){
if (var_cr){
var53 = 0;
var_cr = var53;
var54 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var54 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1309);
show_backtrace(1);
}
var55 = ((val* (*)(val*))(var54->class->vft[COLOR_location__SourceFile__line_starts]))(var54) /* line_starts on <var54:SourceFile>*/;
var56 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var55->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var55, var_line, var56) /* []= on <var55:Array[Int]>*/;
} else {
var57 = 1;
{ /* Inline kernel#Int#+ (var_line,var57) */
var60 = var_line + var57;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var_line = var58;
var61 = 0;
var_pos = var61;
var62 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var62 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1313);
show_backtrace(1);
}
var63 = ((val* (*)(val*))(var62->class->vft[COLOR_location__SourceFile__line_starts]))(var62) /* line_starts on <var62:SourceFile>*/;
var64 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var63->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var63, var_line, var64) /* []= on <var63:Array[Int]>*/;
}
} else {
var65 = 13;
{ /* Inline kernel#Int#== (var_c,var65) */
var68 = var_c == var65;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
if (var66){
var69 = 1;
{ /* Inline kernel#Int#+ (var_line,var69) */
var72 = var_line + var69;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var_line = var70;
var73 = 0;
var_pos = var73;
var74 = 1;
var_cr = var74;
var75 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var75 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1319);
show_backtrace(1);
}
var76 = ((val* (*)(val*))(var75->class->vft[COLOR_location__SourceFile__line_starts]))(var75) /* line_starts on <var75:SourceFile>*/;
var77 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var76->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var76, var_line, var77) /* []= on <var76:Array[Int]>*/;
} else {
var78 = 1;
{ /* Inline kernel#Int#+ (var_pos,var78) */
var81 = var_pos + var78;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var_pos = var79;
var82 = 0;
var_cr = var82;
}
}
for(;;) {
var_old_state = var_dfa_state;
var83 = 1;
{ /* Inline kernel#Int#unary - (var83) */
var86 = -var83;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
{ /* Inline kernel#Int#< (var_dfa_state,var84) */
/* Covariant cast for argument 0 (i) <var84:Int> isa OTHER */
/* <var84:Int> isa OTHER */
var89 = 1; /* easy <var84:Int> isa OTHER*/
if (!var89) {
var_class_name92 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var93 = var_dfa_state < var84;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
if (var87){
var94 = 2;
{ /* Inline kernel#Int#unary - (var94) */
var97 = -var94;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
{ /* Inline kernel#Int#- (var95,var_dfa_state) */
var100 = var95 - var_dfa_state;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var_old_state = var98;
} else {
}
var101 = 1;
{ /* Inline kernel#Int#unary - (var101) */
var104 = -var101;
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
var_dfa_state = var102;
var105 = 0;
var_low = var105;
var106 = 0;
var107 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var106) /* lexer_goto on <self:Lexer>*/;
var108 = 1;
{ /* Inline kernel#Int#- (var107,var108) */
var111 = var107 - var108;
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var_high = var109;
var112 = 0;
{ /* Inline kernel#Int#>= (var_high,var112) */
/* Covariant cast for argument 0 (i) <var112:Int> isa OTHER */
/* <var112:Int> isa OTHER */
var115 = 1; /* easy <var112:Int> isa OTHER*/
if (!var115) {
var_class_name118 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name118);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var119 = var_high >= var112;
var113 = var119;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
if (var113){
for(;;) {
{ /* Inline kernel#Int#<= (var_low,var_high) */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var122 = 1; /* easy <var_high:Int> isa OTHER*/
if (!var122) {
var_class_name125 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name125);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var126 = var_low <= var_high;
var120 = var126;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
if (!var120) break;
{ /* Inline kernel#Int#+ (var_low,var_high) */
var129 = var_low + var_high;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
var130 = 2;
{ /* Inline kernel#Int#/ (var127,var130) */
var133 = var127 / var130;
var131 = var133;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
var_middle = var131;
var134 = 3;
{ /* Inline kernel#Int#* (var_middle,var134) */
var137 = var_middle * var134;
var135 = var137;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
var138 = 1;
{ /* Inline kernel#Int#+ (var135,var138) */
var141 = var135 + var138;
var139 = var141;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
var_offset = var139;
var142 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var_offset) /* lexer_goto on <self:Lexer>*/;
{ /* Inline kernel#Int#< (var_c,var142) */
/* Covariant cast for argument 0 (i) <var142:Int> isa OTHER */
/* <var142:Int> isa OTHER */
var145 = 1; /* easy <var142:Int> isa OTHER*/
if (!var145) {
var_class_name148 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name148);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var149 = var_c < var142;
var143 = var149;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
if (var143){
var150 = 1;
{ /* Inline kernel#Int#- (var_middle,var150) */
var153 = var_middle - var150;
var151 = var153;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
var_high = var151;
} else {
var154 = 1;
{ /* Inline kernel#Int#+ (var_offset,var154) */
var157 = var_offset + var154;
var155 = var157;
goto RET_LABEL156;
RET_LABEL156:(void)0;
}
var158 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var155) /* lexer_goto on <self:Lexer>*/;
{ /* Inline kernel#Int#> (var_c,var158) */
/* Covariant cast for argument 0 (i) <var158:Int> isa OTHER */
/* <var158:Int> isa OTHER */
var161 = 1; /* easy <var158:Int> isa OTHER*/
if (!var161) {
var_class_name164 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name164);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var165 = var_c > var158;
var159 = var165;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
if (var159){
var166 = 1;
{ /* Inline kernel#Int#+ (var_middle,var166) */
var169 = var_middle + var166;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
var_low = var167;
} else {
var170 = 2;
{ /* Inline kernel#Int#+ (var_offset,var170) */
var173 = var_offset + var170;
var171 = var173;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
var174 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var171) /* lexer_goto on <self:Lexer>*/;
var_dfa_state = var174;
goto BREAK_label;
}
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
} else {
}
var175 = 2;
{ /* Inline kernel#Int#unary - (var175) */
var178 = -var175;
var176 = var178;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
{ /* Inline kernel#Int#> (var_dfa_state,var176) */
/* Covariant cast for argument 0 (i) <var176:Int> isa OTHER */
/* <var176:Int> isa OTHER */
var181 = 1; /* easy <var176:Int> isa OTHER*/
if (!var181) {
var_class_name184 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name184);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var185 = var_dfa_state > var176;
var179 = var185;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
if (var179){
goto BREAK_label186;
} else {
}
CONTINUE_label186: (void)0;
}
BREAK_label186: (void)0;
self->attrs[COLOR_lexer__Lexer___cr].s = var_cr; /* _cr on <self:Lexer> */
self->attrs[COLOR_lexer__Lexer___line].l = var_line; /* _line on <self:Lexer> */
self->attrs[COLOR_lexer__Lexer___pos].l = var_pos; /* _pos on <self:Lexer> */
}
var187 = 0;
{ /* Inline kernel#Int#>= (var_dfa_state,var187) */
/* Covariant cast for argument 0 (i) <var187:Int> isa OTHER */
/* <var187:Int> isa OTHER */
var190 = 1; /* easy <var187:Int> isa OTHER*/
if (!var190) {
var_class_name193 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name193);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var194 = var_dfa_state >= var187;
var188 = var194;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
if (var188){
var195 = ((long (*)(val*, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_accept]))(self, var_dfa_state) /* lexer_accept on <self:Lexer>*/;
var_tok = var195;
var196 = 1;
{ /* Inline kernel#Int#unary - (var196) */
var199 = -var196;
var197 = var199;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
{ /* Inline kernel#Int#!= (var_tok,var197) */
var202 = var_tok == var197;
var203 = !var202;
var200 = var203;
goto RET_LABEL201;
RET_LABEL201:(void)0;
}
if (var200){
var_accept_state = var_dfa_state;
var_accept_token = var_tok;
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) */
var206 = var_sp - var_start_stream_pos;
var204 = var206;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
var_accept_length = var204;
var207 = self->attrs[COLOR_lexer__Lexer___pos].l; /* _pos on <self:Lexer> */
var_accept_pos = var207;
var208 = self->attrs[COLOR_lexer__Lexer___line].l; /* _line on <self:Lexer> */
var_accept_line = var208;
} else {
}
} else {
var209 = 1;
{ /* Inline kernel#Int#unary - (var209) */
var212 = -var209;
var210 = var212;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
{ /* Inline kernel#Int#!= (var_accept_state,var210) */
var215 = var_accept_state == var210;
var216 = !var215;
var213 = var216;
goto RET_LABEL214;
RET_LABEL214:(void)0;
}
if (var213){
var217 = NEW_location__Location(&type_location__Location);
var218 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var218 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1370);
show_backtrace(1);
}
var219 = 1;
{ /* Inline kernel#Int#+ (var_start_line,var219) */
var222 = var_start_line + var219;
var220 = var222;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
var223 = 1;
{ /* Inline kernel#Int#+ (var_accept_line,var223) */
var226 = var_accept_line + var223;
var224 = var226;
goto RET_LABEL225;
RET_LABEL225:(void)0;
}
var227 = 1;
{ /* Inline kernel#Int#+ (var_start_pos,var227) */
var230 = var_start_pos + var227;
var228 = var230;
goto RET_LABEL229;
RET_LABEL229:(void)0;
}
((void (*)(val*, val*, long, long, long, long))(var217->class->vft[COLOR_location__Location__init]))(var217, var218, var220, var224, var228, var_accept_pos) /* init on <var217:Location>*/;
var_location = var217;
self->attrs[COLOR_lexer__Lexer___pos].l = var_accept_pos; /* _pos on <self:Lexer> */
self->attrs[COLOR_lexer__Lexer___line].l = var_accept_line; /* _line on <self:Lexer> */
{ /* Inline kernel#Int#+ (var_start_stream_pos,var_accept_length) */
var233 = var_start_stream_pos + var_accept_length;
var231 = var233;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
self->attrs[COLOR_lexer__Lexer___stream_pos].l = var231; /* _stream_pos on <self:Lexer> */
var234 = 0;
{ /* Inline kernel#Int#== (var_accept_token,var234) */
var237 = var_accept_token == var234;
var235 = var237;
goto RET_LABEL236;
RET_LABEL236:(void)0;
}
if (var235){
var238 = NULL;
var = var238;
goto RET_LABEL;
} else {
}
var239 = 1;
{ /* Inline kernel#Int#== (var_accept_token,var239) */
var242 = var_accept_token == var239;
var240 = var242;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
if (var240){
var243 = NEW_parser_nodes__TEol(&type_parser_nodes__TEol);
((void (*)(val*, val*))(var243->class->vft[COLOR_lexer__TEol__init_tk]))(var243, var_location) /* init_tk on <var243:TEol>*/;
var = var243;
goto RET_LABEL;
} else {
}
var244 = 2;
{ /* Inline kernel#Int#== (var_accept_token,var244) */
var247 = var_accept_token == var244;
var245 = var247;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
if (var245){
var248 = NEW_parser_nodes__TComment(&type_parser_nodes__TComment);
((void (*)(val*, val*))(var248->class->vft[COLOR_lexer__TComment__init_tk]))(var248, var_location) /* init_tk on <var248:TComment>*/;
var = var248;
goto RET_LABEL;
} else {
}
var249 = 3;
{ /* Inline kernel#Int#== (var_accept_token,var249) */
var252 = var_accept_token == var249;
var250 = var252;
goto RET_LABEL251;
RET_LABEL251:(void)0;
}
if (var250){
var253 = NEW_parser_nodes__TKwpackage(&type_parser_nodes__TKwpackage);
((void (*)(val*, val*))(var253->class->vft[COLOR_lexer__TKwpackage__init_tk]))(var253, var_location) /* init_tk on <var253:TKwpackage>*/;
var = var253;
goto RET_LABEL;
} else {
}
var254 = 4;
{ /* Inline kernel#Int#== (var_accept_token,var254) */
var257 = var_accept_token == var254;
var255 = var257;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
if (var255){
var258 = NEW_parser_nodes__TKwmodule(&type_parser_nodes__TKwmodule);
((void (*)(val*, val*))(var258->class->vft[COLOR_lexer__TKwmodule__init_tk]))(var258, var_location) /* init_tk on <var258:TKwmodule>*/;
var = var258;
goto RET_LABEL;
} else {
}
var259 = 5;
{ /* Inline kernel#Int#== (var_accept_token,var259) */
var262 = var_accept_token == var259;
var260 = var262;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
if (var260){
var263 = NEW_parser_nodes__TKwimport(&type_parser_nodes__TKwimport);
((void (*)(val*, val*))(var263->class->vft[COLOR_lexer__TKwimport__init_tk]))(var263, var_location) /* init_tk on <var263:TKwimport>*/;
var = var263;
goto RET_LABEL;
} else {
}
var264 = 6;
{ /* Inline kernel#Int#== (var_accept_token,var264) */
var267 = var_accept_token == var264;
var265 = var267;
goto RET_LABEL266;
RET_LABEL266:(void)0;
}
if (var265){
var268 = NEW_parser_nodes__TKwclass(&type_parser_nodes__TKwclass);
((void (*)(val*, val*))(var268->class->vft[COLOR_lexer__TKwclass__init_tk]))(var268, var_location) /* init_tk on <var268:TKwclass>*/;
var = var268;
goto RET_LABEL;
} else {
}
var269 = 7;
{ /* Inline kernel#Int#== (var_accept_token,var269) */
var272 = var_accept_token == var269;
var270 = var272;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
if (var270){
var273 = NEW_parser_nodes__TKwabstract(&type_parser_nodes__TKwabstract);
((void (*)(val*, val*))(var273->class->vft[COLOR_lexer__TKwabstract__init_tk]))(var273, var_location) /* init_tk on <var273:TKwabstract>*/;
var = var273;
goto RET_LABEL;
} else {
}
var274 = 8;
{ /* Inline kernel#Int#== (var_accept_token,var274) */
var277 = var_accept_token == var274;
var275 = var277;
goto RET_LABEL276;
RET_LABEL276:(void)0;
}
if (var275){
var278 = NEW_parser_nodes__TKwinterface(&type_parser_nodes__TKwinterface);
((void (*)(val*, val*))(var278->class->vft[COLOR_lexer__TKwinterface__init_tk]))(var278, var_location) /* init_tk on <var278:TKwinterface>*/;
var = var278;
goto RET_LABEL;
} else {
}
var279 = 9;
{ /* Inline kernel#Int#== (var_accept_token,var279) */
var282 = var_accept_token == var279;
var280 = var282;
goto RET_LABEL281;
RET_LABEL281:(void)0;
}
if (var280){
var283 = NEW_parser_nodes__TKwenum(&type_parser_nodes__TKwenum);
((void (*)(val*, val*))(var283->class->vft[COLOR_lexer__TKwenum__init_tk]))(var283, var_location) /* init_tk on <var283:TKwenum>*/;
var = var283;
goto RET_LABEL;
} else {
}
var284 = 10;
{ /* Inline kernel#Int#== (var_accept_token,var284) */
var287 = var_accept_token == var284;
var285 = var287;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
if (var285){
var288 = NEW_parser_nodes__TKwend(&type_parser_nodes__TKwend);
((void (*)(val*, val*))(var288->class->vft[COLOR_lexer__TKwend__init_tk]))(var288, var_location) /* init_tk on <var288:TKwend>*/;
var = var288;
goto RET_LABEL;
} else {
}
var289 = 11;
{ /* Inline kernel#Int#== (var_accept_token,var289) */
var292 = var_accept_token == var289;
var290 = var292;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
if (var290){
var293 = NEW_parser_nodes__TKwmeth(&type_parser_nodes__TKwmeth);
((void (*)(val*, val*))(var293->class->vft[COLOR_lexer__TKwmeth__init_tk]))(var293, var_location) /* init_tk on <var293:TKwmeth>*/;
var = var293;
goto RET_LABEL;
} else {
}
var294 = 12;
{ /* Inline kernel#Int#== (var_accept_token,var294) */
var297 = var_accept_token == var294;
var295 = var297;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
if (var295){
var298 = NEW_parser_nodes__TKwtype(&type_parser_nodes__TKwtype);
((void (*)(val*, val*))(var298->class->vft[COLOR_lexer__TKwtype__init_tk]))(var298, var_location) /* init_tk on <var298:TKwtype>*/;
var = var298;
goto RET_LABEL;
} else {
}
var299 = 13;
{ /* Inline kernel#Int#== (var_accept_token,var299) */
var302 = var_accept_token == var299;
var300 = var302;
goto RET_LABEL301;
RET_LABEL301:(void)0;
}
if (var300){
var303 = NEW_parser_nodes__TKwinit(&type_parser_nodes__TKwinit);
((void (*)(val*, val*))(var303->class->vft[COLOR_lexer__TKwinit__init_tk]))(var303, var_location) /* init_tk on <var303:TKwinit>*/;
var = var303;
goto RET_LABEL;
} else {
}
var304 = 14;
{ /* Inline kernel#Int#== (var_accept_token,var304) */
var307 = var_accept_token == var304;
var305 = var307;
goto RET_LABEL306;
RET_LABEL306:(void)0;
}
if (var305){
var308 = NEW_parser_nodes__TKwredef(&type_parser_nodes__TKwredef);
((void (*)(val*, val*))(var308->class->vft[COLOR_lexer__TKwredef__init_tk]))(var308, var_location) /* init_tk on <var308:TKwredef>*/;
var = var308;
goto RET_LABEL;
} else {
}
var309 = 15;
{ /* Inline kernel#Int#== (var_accept_token,var309) */
var312 = var_accept_token == var309;
var310 = var312;
goto RET_LABEL311;
RET_LABEL311:(void)0;
}
if (var310){
var313 = NEW_parser_nodes__TKwis(&type_parser_nodes__TKwis);
((void (*)(val*, val*))(var313->class->vft[COLOR_lexer__TKwis__init_tk]))(var313, var_location) /* init_tk on <var313:TKwis>*/;
var = var313;
goto RET_LABEL;
} else {
}
var314 = 16;
{ /* Inline kernel#Int#== (var_accept_token,var314) */
var317 = var_accept_token == var314;
var315 = var317;
goto RET_LABEL316;
RET_LABEL316:(void)0;
}
if (var315){
var318 = NEW_parser_nodes__TKwdo(&type_parser_nodes__TKwdo);
((void (*)(val*, val*))(var318->class->vft[COLOR_lexer__TKwdo__init_tk]))(var318, var_location) /* init_tk on <var318:TKwdo>*/;
var = var318;
goto RET_LABEL;
} else {
}
var319 = 17;
{ /* Inline kernel#Int#== (var_accept_token,var319) */
var322 = var_accept_token == var319;
var320 = var322;
goto RET_LABEL321;
RET_LABEL321:(void)0;
}
if (var320){
var323 = NEW_parser_nodes__TKwreadable(&type_parser_nodes__TKwreadable);
((void (*)(val*, val*))(var323->class->vft[COLOR_lexer__TKwreadable__init_tk]))(var323, var_location) /* init_tk on <var323:TKwreadable>*/;
var = var323;
goto RET_LABEL;
} else {
}
var324 = 18;
{ /* Inline kernel#Int#== (var_accept_token,var324) */
var327 = var_accept_token == var324;
var325 = var327;
goto RET_LABEL326;
RET_LABEL326:(void)0;
}
if (var325){
var328 = NEW_parser_nodes__TKwwritable(&type_parser_nodes__TKwwritable);
((void (*)(val*, val*))(var328->class->vft[COLOR_lexer__TKwwritable__init_tk]))(var328, var_location) /* init_tk on <var328:TKwwritable>*/;
var = var328;
goto RET_LABEL;
} else {
}
var329 = 19;
{ /* Inline kernel#Int#== (var_accept_token,var329) */
var332 = var_accept_token == var329;
var330 = var332;
goto RET_LABEL331;
RET_LABEL331:(void)0;
}
if (var330){
var333 = NEW_parser_nodes__TKwvar(&type_parser_nodes__TKwvar);
((void (*)(val*, val*))(var333->class->vft[COLOR_lexer__TKwvar__init_tk]))(var333, var_location) /* init_tk on <var333:TKwvar>*/;
var = var333;
goto RET_LABEL;
} else {
}
var334 = 20;
{ /* Inline kernel#Int#== (var_accept_token,var334) */
var337 = var_accept_token == var334;
var335 = var337;
goto RET_LABEL336;
RET_LABEL336:(void)0;
}
if (var335){
var338 = NEW_parser_nodes__TKwintern(&type_parser_nodes__TKwintern);
((void (*)(val*, val*))(var338->class->vft[COLOR_lexer__TKwintern__init_tk]))(var338, var_location) /* init_tk on <var338:TKwintern>*/;
var = var338;
goto RET_LABEL;
} else {
}
var339 = 21;
{ /* Inline kernel#Int#== (var_accept_token,var339) */
var342 = var_accept_token == var339;
var340 = var342;
goto RET_LABEL341;
RET_LABEL341:(void)0;
}
if (var340){
var343 = NEW_parser_nodes__TKwextern(&type_parser_nodes__TKwextern);
((void (*)(val*, val*))(var343->class->vft[COLOR_lexer__TKwextern__init_tk]))(var343, var_location) /* init_tk on <var343:TKwextern>*/;
var = var343;
goto RET_LABEL;
} else {
}
var344 = 22;
{ /* Inline kernel#Int#== (var_accept_token,var344) */
var347 = var_accept_token == var344;
var345 = var347;
goto RET_LABEL346;
RET_LABEL346:(void)0;
}
if (var345){
var348 = NEW_parser_nodes__TKwprotected(&type_parser_nodes__TKwprotected);
((void (*)(val*, val*))(var348->class->vft[COLOR_lexer__TKwprotected__init_tk]))(var348, var_location) /* init_tk on <var348:TKwprotected>*/;
var = var348;
goto RET_LABEL;
} else {
}
var349 = 23;
{ /* Inline kernel#Int#== (var_accept_token,var349) */
var352 = var_accept_token == var349;
var350 = var352;
goto RET_LABEL351;
RET_LABEL351:(void)0;
}
if (var350){
var353 = NEW_parser_nodes__TKwprivate(&type_parser_nodes__TKwprivate);
((void (*)(val*, val*))(var353->class->vft[COLOR_lexer__TKwprivate__init_tk]))(var353, var_location) /* init_tk on <var353:TKwprivate>*/;
var = var353;
goto RET_LABEL;
} else {
}
var354 = 24;
{ /* Inline kernel#Int#== (var_accept_token,var354) */
var357 = var_accept_token == var354;
var355 = var357;
goto RET_LABEL356;
RET_LABEL356:(void)0;
}
if (var355){
var358 = NEW_parser_nodes__TKwintrude(&type_parser_nodes__TKwintrude);
((void (*)(val*, val*))(var358->class->vft[COLOR_lexer__TKwintrude__init_tk]))(var358, var_location) /* init_tk on <var358:TKwintrude>*/;
var = var358;
goto RET_LABEL;
} else {
}
var359 = 25;
{ /* Inline kernel#Int#== (var_accept_token,var359) */
var362 = var_accept_token == var359;
var360 = var362;
goto RET_LABEL361;
RET_LABEL361:(void)0;
}
if (var360){
var363 = NEW_parser_nodes__TKwif(&type_parser_nodes__TKwif);
((void (*)(val*, val*))(var363->class->vft[COLOR_lexer__TKwif__init_tk]))(var363, var_location) /* init_tk on <var363:TKwif>*/;
var = var363;
goto RET_LABEL;
} else {
}
var364 = 26;
{ /* Inline kernel#Int#== (var_accept_token,var364) */
var367 = var_accept_token == var364;
var365 = var367;
goto RET_LABEL366;
RET_LABEL366:(void)0;
}
if (var365){
var368 = NEW_parser_nodes__TKwthen(&type_parser_nodes__TKwthen);
((void (*)(val*, val*))(var368->class->vft[COLOR_lexer__TKwthen__init_tk]))(var368, var_location) /* init_tk on <var368:TKwthen>*/;
var = var368;
goto RET_LABEL;
} else {
}
var369 = 27;
{ /* Inline kernel#Int#== (var_accept_token,var369) */
var372 = var_accept_token == var369;
var370 = var372;
goto RET_LABEL371;
RET_LABEL371:(void)0;
}
if (var370){
var373 = NEW_parser_nodes__TKwelse(&type_parser_nodes__TKwelse);
((void (*)(val*, val*))(var373->class->vft[COLOR_lexer__TKwelse__init_tk]))(var373, var_location) /* init_tk on <var373:TKwelse>*/;
var = var373;
goto RET_LABEL;
} else {
}
var374 = 28;
{ /* Inline kernel#Int#== (var_accept_token,var374) */
var377 = var_accept_token == var374;
var375 = var377;
goto RET_LABEL376;
RET_LABEL376:(void)0;
}
if (var375){
var378 = NEW_parser_nodes__TKwwhile(&type_parser_nodes__TKwwhile);
((void (*)(val*, val*))(var378->class->vft[COLOR_lexer__TKwwhile__init_tk]))(var378, var_location) /* init_tk on <var378:TKwwhile>*/;
var = var378;
goto RET_LABEL;
} else {
}
var379 = 29;
{ /* Inline kernel#Int#== (var_accept_token,var379) */
var382 = var_accept_token == var379;
var380 = var382;
goto RET_LABEL381;
RET_LABEL381:(void)0;
}
if (var380){
var383 = NEW_parser_nodes__TKwloop(&type_parser_nodes__TKwloop);
((void (*)(val*, val*))(var383->class->vft[COLOR_lexer__TKwloop__init_tk]))(var383, var_location) /* init_tk on <var383:TKwloop>*/;
var = var383;
goto RET_LABEL;
} else {
}
var384 = 30;
{ /* Inline kernel#Int#== (var_accept_token,var384) */
var387 = var_accept_token == var384;
var385 = var387;
goto RET_LABEL386;
RET_LABEL386:(void)0;
}
if (var385){
var388 = NEW_parser_nodes__TKwfor(&type_parser_nodes__TKwfor);
((void (*)(val*, val*))(var388->class->vft[COLOR_lexer__TKwfor__init_tk]))(var388, var_location) /* init_tk on <var388:TKwfor>*/;
var = var388;
goto RET_LABEL;
} else {
}
var389 = 31;
{ /* Inline kernel#Int#== (var_accept_token,var389) */
var392 = var_accept_token == var389;
var390 = var392;
goto RET_LABEL391;
RET_LABEL391:(void)0;
}
if (var390){
var393 = NEW_parser_nodes__TKwin(&type_parser_nodes__TKwin);
((void (*)(val*, val*))(var393->class->vft[COLOR_lexer__TKwin__init_tk]))(var393, var_location) /* init_tk on <var393:TKwin>*/;
var = var393;
goto RET_LABEL;
} else {
}
var394 = 32;
{ /* Inline kernel#Int#== (var_accept_token,var394) */
var397 = var_accept_token == var394;
var395 = var397;
goto RET_LABEL396;
RET_LABEL396:(void)0;
}
if (var395){
var398 = NEW_parser_nodes__TKwand(&type_parser_nodes__TKwand);
((void (*)(val*, val*))(var398->class->vft[COLOR_lexer__TKwand__init_tk]))(var398, var_location) /* init_tk on <var398:TKwand>*/;
var = var398;
goto RET_LABEL;
} else {
}
var399 = 33;
{ /* Inline kernel#Int#== (var_accept_token,var399) */
var402 = var_accept_token == var399;
var400 = var402;
goto RET_LABEL401;
RET_LABEL401:(void)0;
}
if (var400){
var403 = NEW_parser_nodes__TKwor(&type_parser_nodes__TKwor);
((void (*)(val*, val*))(var403->class->vft[COLOR_lexer__TKwor__init_tk]))(var403, var_location) /* init_tk on <var403:TKwor>*/;
var = var403;
goto RET_LABEL;
} else {
}
var404 = 34;
{ /* Inline kernel#Int#== (var_accept_token,var404) */
var407 = var_accept_token == var404;
var405 = var407;
goto RET_LABEL406;
RET_LABEL406:(void)0;
}
if (var405){
var408 = NEW_parser_nodes__TKwnot(&type_parser_nodes__TKwnot);
((void (*)(val*, val*))(var408->class->vft[COLOR_lexer__TKwnot__init_tk]))(var408, var_location) /* init_tk on <var408:TKwnot>*/;
var = var408;
goto RET_LABEL;
} else {
}
var409 = 35;
{ /* Inline kernel#Int#== (var_accept_token,var409) */
var412 = var_accept_token == var409;
var410 = var412;
goto RET_LABEL411;
RET_LABEL411:(void)0;
}
if (var410){
var413 = NEW_parser_nodes__TKwimplies(&type_parser_nodes__TKwimplies);
((void (*)(val*, val*))(var413->class->vft[COLOR_lexer__TKwimplies__init_tk]))(var413, var_location) /* init_tk on <var413:TKwimplies>*/;
var = var413;
goto RET_LABEL;
} else {
}
var414 = 36;
{ /* Inline kernel#Int#== (var_accept_token,var414) */
var417 = var_accept_token == var414;
var415 = var417;
goto RET_LABEL416;
RET_LABEL416:(void)0;
}
if (var415){
var418 = NEW_parser_nodes__TKwreturn(&type_parser_nodes__TKwreturn);
((void (*)(val*, val*))(var418->class->vft[COLOR_lexer__TKwreturn__init_tk]))(var418, var_location) /* init_tk on <var418:TKwreturn>*/;
var = var418;
goto RET_LABEL;
} else {
}
var419 = 37;
{ /* Inline kernel#Int#== (var_accept_token,var419) */
var422 = var_accept_token == var419;
var420 = var422;
goto RET_LABEL421;
RET_LABEL421:(void)0;
}
if (var420){
var423 = NEW_parser_nodes__TKwcontinue(&type_parser_nodes__TKwcontinue);
((void (*)(val*, val*))(var423->class->vft[COLOR_lexer__TKwcontinue__init_tk]))(var423, var_location) /* init_tk on <var423:TKwcontinue>*/;
var = var423;
goto RET_LABEL;
} else {
}
var424 = 38;
{ /* Inline kernel#Int#== (var_accept_token,var424) */
var427 = var_accept_token == var424;
var425 = var427;
goto RET_LABEL426;
RET_LABEL426:(void)0;
}
if (var425){
var428 = NEW_parser_nodes__TKwbreak(&type_parser_nodes__TKwbreak);
((void (*)(val*, val*))(var428->class->vft[COLOR_lexer__TKwbreak__init_tk]))(var428, var_location) /* init_tk on <var428:TKwbreak>*/;
var = var428;
goto RET_LABEL;
} else {
}
var429 = 39;
{ /* Inline kernel#Int#== (var_accept_token,var429) */
var432 = var_accept_token == var429;
var430 = var432;
goto RET_LABEL431;
RET_LABEL431:(void)0;
}
if (var430){
var433 = NEW_parser_nodes__TKwabort(&type_parser_nodes__TKwabort);
((void (*)(val*, val*))(var433->class->vft[COLOR_lexer__TKwabort__init_tk]))(var433, var_location) /* init_tk on <var433:TKwabort>*/;
var = var433;
goto RET_LABEL;
} else {
}
var434 = 40;
{ /* Inline kernel#Int#== (var_accept_token,var434) */
var437 = var_accept_token == var434;
var435 = var437;
goto RET_LABEL436;
RET_LABEL436:(void)0;
}
if (var435){
var438 = NEW_parser_nodes__TKwassert(&type_parser_nodes__TKwassert);
((void (*)(val*, val*))(var438->class->vft[COLOR_lexer__TKwassert__init_tk]))(var438, var_location) /* init_tk on <var438:TKwassert>*/;
var = var438;
goto RET_LABEL;
} else {
}
var439 = 41;
{ /* Inline kernel#Int#== (var_accept_token,var439) */
var442 = var_accept_token == var439;
var440 = var442;
goto RET_LABEL441;
RET_LABEL441:(void)0;
}
if (var440){
var443 = NEW_parser_nodes__TKwnew(&type_parser_nodes__TKwnew);
((void (*)(val*, val*))(var443->class->vft[COLOR_lexer__TKwnew__init_tk]))(var443, var_location) /* init_tk on <var443:TKwnew>*/;
var = var443;
goto RET_LABEL;
} else {
}
var444 = 42;
{ /* Inline kernel#Int#== (var_accept_token,var444) */
var447 = var_accept_token == var444;
var445 = var447;
goto RET_LABEL446;
RET_LABEL446:(void)0;
}
if (var445){
var448 = NEW_parser_nodes__TKwisa(&type_parser_nodes__TKwisa);
((void (*)(val*, val*))(var448->class->vft[COLOR_lexer__TKwisa__init_tk]))(var448, var_location) /* init_tk on <var448:TKwisa>*/;
var = var448;
goto RET_LABEL;
} else {
}
var449 = 43;
{ /* Inline kernel#Int#== (var_accept_token,var449) */
var452 = var_accept_token == var449;
var450 = var452;
goto RET_LABEL451;
RET_LABEL451:(void)0;
}
if (var450){
var453 = NEW_parser_nodes__TKwonce(&type_parser_nodes__TKwonce);
((void (*)(val*, val*))(var453->class->vft[COLOR_lexer__TKwonce__init_tk]))(var453, var_location) /* init_tk on <var453:TKwonce>*/;
var = var453;
goto RET_LABEL;
} else {
}
var454 = 44;
{ /* Inline kernel#Int#== (var_accept_token,var454) */
var457 = var_accept_token == var454;
var455 = var457;
goto RET_LABEL456;
RET_LABEL456:(void)0;
}
if (var455){
var458 = NEW_parser_nodes__TKwsuper(&type_parser_nodes__TKwsuper);
((void (*)(val*, val*))(var458->class->vft[COLOR_lexer__TKwsuper__init_tk]))(var458, var_location) /* init_tk on <var458:TKwsuper>*/;
var = var458;
goto RET_LABEL;
} else {
}
var459 = 45;
{ /* Inline kernel#Int#== (var_accept_token,var459) */
var462 = var_accept_token == var459;
var460 = var462;
goto RET_LABEL461;
RET_LABEL461:(void)0;
}
if (var460){
var463 = NEW_parser_nodes__TKwself(&type_parser_nodes__TKwself);
((void (*)(val*, val*))(var463->class->vft[COLOR_lexer__TKwself__init_tk]))(var463, var_location) /* init_tk on <var463:TKwself>*/;
var = var463;
goto RET_LABEL;
} else {
}
var464 = 46;
{ /* Inline kernel#Int#== (var_accept_token,var464) */
var467 = var_accept_token == var464;
var465 = var467;
goto RET_LABEL466;
RET_LABEL466:(void)0;
}
if (var465){
var468 = NEW_parser_nodes__TKwtrue(&type_parser_nodes__TKwtrue);
((void (*)(val*, val*))(var468->class->vft[COLOR_lexer__TKwtrue__init_tk]))(var468, var_location) /* init_tk on <var468:TKwtrue>*/;
var = var468;
goto RET_LABEL;
} else {
}
var469 = 47;
{ /* Inline kernel#Int#== (var_accept_token,var469) */
var472 = var_accept_token == var469;
var470 = var472;
goto RET_LABEL471;
RET_LABEL471:(void)0;
}
if (var470){
var473 = NEW_parser_nodes__TKwfalse(&type_parser_nodes__TKwfalse);
((void (*)(val*, val*))(var473->class->vft[COLOR_lexer__TKwfalse__init_tk]))(var473, var_location) /* init_tk on <var473:TKwfalse>*/;
var = var473;
goto RET_LABEL;
} else {
}
var474 = 48;
{ /* Inline kernel#Int#== (var_accept_token,var474) */
var477 = var_accept_token == var474;
var475 = var477;
goto RET_LABEL476;
RET_LABEL476:(void)0;
}
if (var475){
var478 = NEW_parser_nodes__TKwnull(&type_parser_nodes__TKwnull);
((void (*)(val*, val*))(var478->class->vft[COLOR_lexer__TKwnull__init_tk]))(var478, var_location) /* init_tk on <var478:TKwnull>*/;
var = var478;
goto RET_LABEL;
} else {
}
var479 = 49;
{ /* Inline kernel#Int#== (var_accept_token,var479) */
var482 = var_accept_token == var479;
var480 = var482;
goto RET_LABEL481;
RET_LABEL481:(void)0;
}
if (var480){
var483 = NEW_parser_nodes__TKwas(&type_parser_nodes__TKwas);
((void (*)(val*, val*))(var483->class->vft[COLOR_lexer__TKwas__init_tk]))(var483, var_location) /* init_tk on <var483:TKwas>*/;
var = var483;
goto RET_LABEL;
} else {
}
var484 = 50;
{ /* Inline kernel#Int#== (var_accept_token,var484) */
var487 = var_accept_token == var484;
var485 = var487;
goto RET_LABEL486;
RET_LABEL486:(void)0;
}
if (var485){
var488 = NEW_parser_nodes__TKwnullable(&type_parser_nodes__TKwnullable);
((void (*)(val*, val*))(var488->class->vft[COLOR_lexer__TKwnullable__init_tk]))(var488, var_location) /* init_tk on <var488:TKwnullable>*/;
var = var488;
goto RET_LABEL;
} else {
}
var489 = 51;
{ /* Inline kernel#Int#== (var_accept_token,var489) */
var492 = var_accept_token == var489;
var490 = var492;
goto RET_LABEL491;
RET_LABEL491:(void)0;
}
if (var490){
var493 = NEW_parser_nodes__TKwisset(&type_parser_nodes__TKwisset);
((void (*)(val*, val*))(var493->class->vft[COLOR_lexer__TKwisset__init_tk]))(var493, var_location) /* init_tk on <var493:TKwisset>*/;
var = var493;
goto RET_LABEL;
} else {
}
var494 = 52;
{ /* Inline kernel#Int#== (var_accept_token,var494) */
var497 = var_accept_token == var494;
var495 = var497;
goto RET_LABEL496;
RET_LABEL496:(void)0;
}
if (var495){
var498 = NEW_parser_nodes__TKwlabel(&type_parser_nodes__TKwlabel);
((void (*)(val*, val*))(var498->class->vft[COLOR_lexer__TKwlabel__init_tk]))(var498, var_location) /* init_tk on <var498:TKwlabel>*/;
var = var498;
goto RET_LABEL;
} else {
}
var499 = 53;
{ /* Inline kernel#Int#== (var_accept_token,var499) */
var502 = var_accept_token == var499;
var500 = var502;
goto RET_LABEL501;
RET_LABEL501:(void)0;
}
if (var500){
var503 = NEW_parser_nodes__TKwdebug(&type_parser_nodes__TKwdebug);
((void (*)(val*, val*))(var503->class->vft[COLOR_lexer__TKwdebug__init_tk]))(var503, var_location) /* init_tk on <var503:TKwdebug>*/;
var = var503;
goto RET_LABEL;
} else {
}
var504 = 54;
{ /* Inline kernel#Int#== (var_accept_token,var504) */
var507 = var_accept_token == var504;
var505 = var507;
goto RET_LABEL506;
RET_LABEL506:(void)0;
}
if (var505){
var508 = NEW_parser_nodes__TOpar(&type_parser_nodes__TOpar);
((void (*)(val*, val*))(var508->class->vft[COLOR_lexer__TOpar__init_tk]))(var508, var_location) /* init_tk on <var508:TOpar>*/;
var = var508;
goto RET_LABEL;
} else {
}
var509 = 55;
{ /* Inline kernel#Int#== (var_accept_token,var509) */
var512 = var_accept_token == var509;
var510 = var512;
goto RET_LABEL511;
RET_LABEL511:(void)0;
}
if (var510){
var513 = NEW_parser_nodes__TCpar(&type_parser_nodes__TCpar);
((void (*)(val*, val*))(var513->class->vft[COLOR_lexer__TCpar__init_tk]))(var513, var_location) /* init_tk on <var513:TCpar>*/;
var = var513;
goto RET_LABEL;
} else {
}
var514 = 56;
{ /* Inline kernel#Int#== (var_accept_token,var514) */
var517 = var_accept_token == var514;
var515 = var517;
goto RET_LABEL516;
RET_LABEL516:(void)0;
}
if (var515){
var518 = NEW_parser_nodes__TObra(&type_parser_nodes__TObra);
((void (*)(val*, val*))(var518->class->vft[COLOR_lexer__TObra__init_tk]))(var518, var_location) /* init_tk on <var518:TObra>*/;
var = var518;
goto RET_LABEL;
} else {
}
var519 = 57;
{ /* Inline kernel#Int#== (var_accept_token,var519) */
var522 = var_accept_token == var519;
var520 = var522;
goto RET_LABEL521;
RET_LABEL521:(void)0;
}
if (var520){
var523 = NEW_parser_nodes__TCbra(&type_parser_nodes__TCbra);
((void (*)(val*, val*))(var523->class->vft[COLOR_lexer__TCbra__init_tk]))(var523, var_location) /* init_tk on <var523:TCbra>*/;
var = var523;
goto RET_LABEL;
} else {
}
var524 = 58;
{ /* Inline kernel#Int#== (var_accept_token,var524) */
var527 = var_accept_token == var524;
var525 = var527;
goto RET_LABEL526;
RET_LABEL526:(void)0;
}
if (var525){
var528 = NEW_parser_nodes__TComma(&type_parser_nodes__TComma);
((void (*)(val*, val*))(var528->class->vft[COLOR_lexer__TComma__init_tk]))(var528, var_location) /* init_tk on <var528:TComma>*/;
var = var528;
goto RET_LABEL;
} else {
}
var529 = 59;
{ /* Inline kernel#Int#== (var_accept_token,var529) */
var532 = var_accept_token == var529;
var530 = var532;
goto RET_LABEL531;
RET_LABEL531:(void)0;
}
if (var530){
var533 = NEW_parser_nodes__TColumn(&type_parser_nodes__TColumn);
((void (*)(val*, val*))(var533->class->vft[COLOR_lexer__TColumn__init_tk]))(var533, var_location) /* init_tk on <var533:TColumn>*/;
var = var533;
goto RET_LABEL;
} else {
}
var534 = 60;
{ /* Inline kernel#Int#== (var_accept_token,var534) */
var537 = var_accept_token == var534;
var535 = var537;
goto RET_LABEL536;
RET_LABEL536:(void)0;
}
if (var535){
var538 = NEW_parser_nodes__TQuad(&type_parser_nodes__TQuad);
((void (*)(val*, val*))(var538->class->vft[COLOR_lexer__TQuad__init_tk]))(var538, var_location) /* init_tk on <var538:TQuad>*/;
var = var538;
goto RET_LABEL;
} else {
}
var539 = 61;
{ /* Inline kernel#Int#== (var_accept_token,var539) */
var542 = var_accept_token == var539;
var540 = var542;
goto RET_LABEL541;
RET_LABEL541:(void)0;
}
if (var540){
var543 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
((void (*)(val*, val*))(var543->class->vft[COLOR_lexer__TAssign__init_tk]))(var543, var_location) /* init_tk on <var543:TAssign>*/;
var = var543;
goto RET_LABEL;
} else {
}
var544 = 62;
{ /* Inline kernel#Int#== (var_accept_token,var544) */
var547 = var_accept_token == var544;
var545 = var547;
goto RET_LABEL546;
RET_LABEL546:(void)0;
}
if (var545){
var548 = NEW_parser_nodes__TPluseq(&type_parser_nodes__TPluseq);
((void (*)(val*, val*))(var548->class->vft[COLOR_lexer__TPluseq__init_tk]))(var548, var_location) /* init_tk on <var548:TPluseq>*/;
var = var548;
goto RET_LABEL;
} else {
}
var549 = 63;
{ /* Inline kernel#Int#== (var_accept_token,var549) */
var552 = var_accept_token == var549;
var550 = var552;
goto RET_LABEL551;
RET_LABEL551:(void)0;
}
if (var550){
var553 = NEW_parser_nodes__TMinuseq(&type_parser_nodes__TMinuseq);
((void (*)(val*, val*))(var553->class->vft[COLOR_lexer__TMinuseq__init_tk]))(var553, var_location) /* init_tk on <var553:TMinuseq>*/;
var = var553;
goto RET_LABEL;
} else {
}
var554 = 64;
{ /* Inline kernel#Int#== (var_accept_token,var554) */
var557 = var_accept_token == var554;
var555 = var557;
goto RET_LABEL556;
RET_LABEL556:(void)0;
}
if (var555){
var558 = NEW_parser_nodes__TDotdotdot(&type_parser_nodes__TDotdotdot);
((void (*)(val*, val*))(var558->class->vft[COLOR_lexer__TDotdotdot__init_tk]))(var558, var_location) /* init_tk on <var558:TDotdotdot>*/;
var = var558;
goto RET_LABEL;
} else {
}
var559 = 65;
{ /* Inline kernel#Int#== (var_accept_token,var559) */
var562 = var_accept_token == var559;
var560 = var562;
goto RET_LABEL561;
RET_LABEL561:(void)0;
}
if (var560){
var563 = NEW_parser_nodes__TDotdot(&type_parser_nodes__TDotdot);
((void (*)(val*, val*))(var563->class->vft[COLOR_lexer__TDotdot__init_tk]))(var563, var_location) /* init_tk on <var563:TDotdot>*/;
var = var563;
goto RET_LABEL;
} else {
}
var564 = 66;
{ /* Inline kernel#Int#== (var_accept_token,var564) */
var567 = var_accept_token == var564;
var565 = var567;
goto RET_LABEL566;
RET_LABEL566:(void)0;
}
if (var565){
var568 = NEW_parser_nodes__TDot(&type_parser_nodes__TDot);
((void (*)(val*, val*))(var568->class->vft[COLOR_lexer__TDot__init_tk]))(var568, var_location) /* init_tk on <var568:TDot>*/;
var = var568;
goto RET_LABEL;
} else {
}
var569 = 67;
{ /* Inline kernel#Int#== (var_accept_token,var569) */
var572 = var_accept_token == var569;
var570 = var572;
goto RET_LABEL571;
RET_LABEL571:(void)0;
}
if (var570){
var573 = NEW_parser_nodes__TPlus(&type_parser_nodes__TPlus);
((void (*)(val*, val*))(var573->class->vft[COLOR_lexer__TPlus__init_tk]))(var573, var_location) /* init_tk on <var573:TPlus>*/;
var = var573;
goto RET_LABEL;
} else {
}
var574 = 68;
{ /* Inline kernel#Int#== (var_accept_token,var574) */
var577 = var_accept_token == var574;
var575 = var577;
goto RET_LABEL576;
RET_LABEL576:(void)0;
}
if (var575){
var578 = NEW_parser_nodes__TMinus(&type_parser_nodes__TMinus);
((void (*)(val*, val*))(var578->class->vft[COLOR_lexer__TMinus__init_tk]))(var578, var_location) /* init_tk on <var578:TMinus>*/;
var = var578;
goto RET_LABEL;
} else {
}
var579 = 69;
{ /* Inline kernel#Int#== (var_accept_token,var579) */
var582 = var_accept_token == var579;
var580 = var582;
goto RET_LABEL581;
RET_LABEL581:(void)0;
}
if (var580){
var583 = NEW_parser_nodes__TStar(&type_parser_nodes__TStar);
((void (*)(val*, val*))(var583->class->vft[COLOR_lexer__TStar__init_tk]))(var583, var_location) /* init_tk on <var583:TStar>*/;
var = var583;
goto RET_LABEL;
} else {
}
var584 = 70;
{ /* Inline kernel#Int#== (var_accept_token,var584) */
var587 = var_accept_token == var584;
var585 = var587;
goto RET_LABEL586;
RET_LABEL586:(void)0;
}
if (var585){
var588 = NEW_parser_nodes__TSlash(&type_parser_nodes__TSlash);
((void (*)(val*, val*))(var588->class->vft[COLOR_lexer__TSlash__init_tk]))(var588, var_location) /* init_tk on <var588:TSlash>*/;
var = var588;
goto RET_LABEL;
} else {
}
var589 = 71;
{ /* Inline kernel#Int#== (var_accept_token,var589) */
var592 = var_accept_token == var589;
var590 = var592;
goto RET_LABEL591;
RET_LABEL591:(void)0;
}
if (var590){
var593 = NEW_parser_nodes__TPercent(&type_parser_nodes__TPercent);
((void (*)(val*, val*))(var593->class->vft[COLOR_lexer__TPercent__init_tk]))(var593, var_location) /* init_tk on <var593:TPercent>*/;
var = var593;
goto RET_LABEL;
} else {
}
var594 = 72;
{ /* Inline kernel#Int#== (var_accept_token,var594) */
var597 = var_accept_token == var594;
var595 = var597;
goto RET_LABEL596;
RET_LABEL596:(void)0;
}
if (var595){
var598 = NEW_parser_nodes__TEq(&type_parser_nodes__TEq);
((void (*)(val*, val*))(var598->class->vft[COLOR_lexer__TEq__init_tk]))(var598, var_location) /* init_tk on <var598:TEq>*/;
var = var598;
goto RET_LABEL;
} else {
}
var599 = 73;
{ /* Inline kernel#Int#== (var_accept_token,var599) */
var602 = var_accept_token == var599;
var600 = var602;
goto RET_LABEL601;
RET_LABEL601:(void)0;
}
if (var600){
var603 = NEW_parser_nodes__TNe(&type_parser_nodes__TNe);
((void (*)(val*, val*))(var603->class->vft[COLOR_lexer__TNe__init_tk]))(var603, var_location) /* init_tk on <var603:TNe>*/;
var = var603;
goto RET_LABEL;
} else {
}
var604 = 74;
{ /* Inline kernel#Int#== (var_accept_token,var604) */
var607 = var_accept_token == var604;
var605 = var607;
goto RET_LABEL606;
RET_LABEL606:(void)0;
}
if (var605){
var608 = NEW_parser_nodes__TLt(&type_parser_nodes__TLt);
((void (*)(val*, val*))(var608->class->vft[COLOR_lexer__TLt__init_tk]))(var608, var_location) /* init_tk on <var608:TLt>*/;
var = var608;
goto RET_LABEL;
} else {
}
var609 = 75;
{ /* Inline kernel#Int#== (var_accept_token,var609) */
var612 = var_accept_token == var609;
var610 = var612;
goto RET_LABEL611;
RET_LABEL611:(void)0;
}
if (var610){
var613 = NEW_parser_nodes__TLe(&type_parser_nodes__TLe);
((void (*)(val*, val*))(var613->class->vft[COLOR_lexer__TLe__init_tk]))(var613, var_location) /* init_tk on <var613:TLe>*/;
var = var613;
goto RET_LABEL;
} else {
}
var614 = 76;
{ /* Inline kernel#Int#== (var_accept_token,var614) */
var617 = var_accept_token == var614;
var615 = var617;
goto RET_LABEL616;
RET_LABEL616:(void)0;
}
if (var615){
var618 = NEW_parser_nodes__TLl(&type_parser_nodes__TLl);
((void (*)(val*, val*))(var618->class->vft[COLOR_lexer__TLl__init_tk]))(var618, var_location) /* init_tk on <var618:TLl>*/;
var = var618;
goto RET_LABEL;
} else {
}
var619 = 77;
{ /* Inline kernel#Int#== (var_accept_token,var619) */
var622 = var_accept_token == var619;
var620 = var622;
goto RET_LABEL621;
RET_LABEL621:(void)0;
}
if (var620){
var623 = NEW_parser_nodes__TGt(&type_parser_nodes__TGt);
((void (*)(val*, val*))(var623->class->vft[COLOR_lexer__TGt__init_tk]))(var623, var_location) /* init_tk on <var623:TGt>*/;
var = var623;
goto RET_LABEL;
} else {
}
var624 = 78;
{ /* Inline kernel#Int#== (var_accept_token,var624) */
var627 = var_accept_token == var624;
var625 = var627;
goto RET_LABEL626;
RET_LABEL626:(void)0;
}
if (var625){
var628 = NEW_parser_nodes__TGe(&type_parser_nodes__TGe);
((void (*)(val*, val*))(var628->class->vft[COLOR_lexer__TGe__init_tk]))(var628, var_location) /* init_tk on <var628:TGe>*/;
var = var628;
goto RET_LABEL;
} else {
}
var629 = 79;
{ /* Inline kernel#Int#== (var_accept_token,var629) */
var632 = var_accept_token == var629;
var630 = var632;
goto RET_LABEL631;
RET_LABEL631:(void)0;
}
if (var630){
var633 = NEW_parser_nodes__TGg(&type_parser_nodes__TGg);
((void (*)(val*, val*))(var633->class->vft[COLOR_lexer__TGg__init_tk]))(var633, var_location) /* init_tk on <var633:TGg>*/;
var = var633;
goto RET_LABEL;
} else {
}
var634 = 80;
{ /* Inline kernel#Int#== (var_accept_token,var634) */
var637 = var_accept_token == var634;
var635 = var637;
goto RET_LABEL636;
RET_LABEL636:(void)0;
}
if (var635){
var638 = NEW_parser_nodes__TStarship(&type_parser_nodes__TStarship);
((void (*)(val*, val*))(var638->class->vft[COLOR_lexer__TStarship__init_tk]))(var638, var_location) /* init_tk on <var638:TStarship>*/;
var = var638;
goto RET_LABEL;
} else {
}
var639 = 81;
{ /* Inline kernel#Int#== (var_accept_token,var639) */
var642 = var_accept_token == var639;
var640 = var642;
goto RET_LABEL641;
RET_LABEL641:(void)0;
}
if (var640){
var643 = NEW_parser_nodes__TBang(&type_parser_nodes__TBang);
((void (*)(val*, val*))(var643->class->vft[COLOR_lexer__TBang__init_tk]))(var643, var_location) /* init_tk on <var643:TBang>*/;
var = var643;
goto RET_LABEL;
} else {
}
var644 = 82;
{ /* Inline kernel#Int#== (var_accept_token,var644) */
var647 = var_accept_token == var644;
var645 = var647;
goto RET_LABEL646;
RET_LABEL646:(void)0;
}
if (var645){
var648 = NEW_parser_nodes__TAt(&type_parser_nodes__TAt);
((void (*)(val*, val*))(var648->class->vft[COLOR_lexer__TAt__init_tk]))(var648, var_location) /* init_tk on <var648:TAt>*/;
var = var648;
goto RET_LABEL;
} else {
}
var649 = 83;
{ /* Inline kernel#Int#== (var_accept_token,var649) */
var652 = var_accept_token == var649;
var650 = var652;
goto RET_LABEL651;
RET_LABEL651:(void)0;
}
if (var650){
var653 = NEW_parser_nodes__TClassid(&type_parser_nodes__TClassid);
((void (*)(val*, val*))(var653->class->vft[COLOR_lexer__TClassid__init_tk]))(var653, var_location) /* init_tk on <var653:TClassid>*/;
var = var653;
goto RET_LABEL;
} else {
}
var654 = 84;
{ /* Inline kernel#Int#== (var_accept_token,var654) */
var657 = var_accept_token == var654;
var655 = var657;
goto RET_LABEL656;
RET_LABEL656:(void)0;
}
if (var655){
var658 = NEW_parser_nodes__TId(&type_parser_nodes__TId);
((void (*)(val*, val*))(var658->class->vft[COLOR_lexer__TId__init_tk]))(var658, var_location) /* init_tk on <var658:TId>*/;
var = var658;
goto RET_LABEL;
} else {
}
var659 = 85;
{ /* Inline kernel#Int#== (var_accept_token,var659) */
var662 = var_accept_token == var659;
var660 = var662;
goto RET_LABEL661;
RET_LABEL661:(void)0;
}
if (var660){
var663 = NEW_parser_nodes__TAttrid(&type_parser_nodes__TAttrid);
((void (*)(val*, val*))(var663->class->vft[COLOR_lexer__TAttrid__init_tk]))(var663, var_location) /* init_tk on <var663:TAttrid>*/;
var = var663;
goto RET_LABEL;
} else {
}
var664 = 86;
{ /* Inline kernel#Int#== (var_accept_token,var664) */
var667 = var_accept_token == var664;
var665 = var667;
goto RET_LABEL666;
RET_LABEL666:(void)0;
}
if (var665){
var668 = NEW_parser_nodes__TNumber(&type_parser_nodes__TNumber);
((void (*)(val*, val*))(var668->class->vft[COLOR_lexer__TNumber__init_tk]))(var668, var_location) /* init_tk on <var668:TNumber>*/;
var = var668;
goto RET_LABEL;
} else {
}
var669 = 87;
{ /* Inline kernel#Int#== (var_accept_token,var669) */
var672 = var_accept_token == var669;
var670 = var672;
goto RET_LABEL671;
RET_LABEL671:(void)0;
}
if (var670){
var673 = NEW_parser_nodes__TFloat(&type_parser_nodes__TFloat);
((void (*)(val*, val*))(var673->class->vft[COLOR_lexer__TFloat__init_tk]))(var673, var_location) /* init_tk on <var673:TFloat>*/;
var = var673;
goto RET_LABEL;
} else {
}
var674 = 88;
{ /* Inline kernel#Int#== (var_accept_token,var674) */
var677 = var_accept_token == var674;
var675 = var677;
goto RET_LABEL676;
RET_LABEL676:(void)0;
}
if (var675){
var678 = NEW_parser_nodes__TString(&type_parser_nodes__TString);
((void (*)(val*, val*))(var678->class->vft[COLOR_lexer__TString__init_tk]))(var678, var_location) /* init_tk on <var678:TString>*/;
var = var678;
goto RET_LABEL;
} else {
}
var679 = 89;
{ /* Inline kernel#Int#== (var_accept_token,var679) */
var682 = var_accept_token == var679;
var680 = var682;
goto RET_LABEL681;
RET_LABEL681:(void)0;
}
if (var680){
var683 = NEW_parser_nodes__TStartString(&type_parser_nodes__TStartString);
((void (*)(val*, val*))(var683->class->vft[COLOR_lexer__TStartString__init_tk]))(var683, var_location) /* init_tk on <var683:TStartString>*/;
var = var683;
goto RET_LABEL;
} else {
}
var684 = 90;
{ /* Inline kernel#Int#== (var_accept_token,var684) */
var687 = var_accept_token == var684;
var685 = var687;
goto RET_LABEL686;
RET_LABEL686:(void)0;
}
if (var685){
var688 = NEW_parser_nodes__TMidString(&type_parser_nodes__TMidString);
((void (*)(val*, val*))(var688->class->vft[COLOR_lexer__TMidString__init_tk]))(var688, var_location) /* init_tk on <var688:TMidString>*/;
var = var688;
goto RET_LABEL;
} else {
}
var689 = 91;
{ /* Inline kernel#Int#== (var_accept_token,var689) */
var692 = var_accept_token == var689;
var690 = var692;
goto RET_LABEL691;
RET_LABEL691:(void)0;
}
if (var690){
var693 = NEW_parser_nodes__TEndString(&type_parser_nodes__TEndString);
((void (*)(val*, val*))(var693->class->vft[COLOR_lexer__TEndString__init_tk]))(var693, var_location) /* init_tk on <var693:TEndString>*/;
var = var693;
goto RET_LABEL;
} else {
}
var694 = 92;
{ /* Inline kernel#Int#== (var_accept_token,var694) */
var697 = var_accept_token == var694;
var695 = var697;
goto RET_LABEL696;
RET_LABEL696:(void)0;
}
if (var695){
var698 = NEW_parser_nodes__TChar(&type_parser_nodes__TChar);
((void (*)(val*, val*))(var698->class->vft[COLOR_lexer__TChar__init_tk]))(var698, var_location) /* init_tk on <var698:TChar>*/;
var = var698;
goto RET_LABEL;
} else {
}
var699 = 93;
{ /* Inline kernel#Int#== (var_accept_token,var699) */
var702 = var_accept_token == var699;
var700 = var702;
goto RET_LABEL701;
RET_LABEL701:(void)0;
}
if (var700){
var703 = NEW_parser_nodes__TBadString(&type_parser_nodes__TBadString);
((void (*)(val*, val*))(var703->class->vft[COLOR_lexer__TBadString__init_tk]))(var703, var_location) /* init_tk on <var703:TBadString>*/;
var = var703;
goto RET_LABEL;
} else {
}
var704 = 94;
{ /* Inline kernel#Int#== (var_accept_token,var704) */
var707 = var_accept_token == var704;
var705 = var707;
goto RET_LABEL706;
RET_LABEL706:(void)0;
}
if (var705){
var708 = NEW_parser_nodes__TBadChar(&type_parser_nodes__TBadChar);
((void (*)(val*, val*))(var708->class->vft[COLOR_lexer__TBadChar__init_tk]))(var708, var_location) /* init_tk on <var708:TBadChar>*/;
var = var708;
goto RET_LABEL;
} else {
}
var709 = 95;
{ /* Inline kernel#Int#== (var_accept_token,var709) */
var712 = var_accept_token == var709;
var710 = var712;
goto RET_LABEL711;
RET_LABEL711:(void)0;
}
if (var710){
var713 = NEW_parser_nodes__TExternCodeSegment(&type_parser_nodes__TExternCodeSegment);
((void (*)(val*, val*))(var713->class->vft[COLOR_lexer__TExternCodeSegment__init_tk]))(var713, var_location) /* init_tk on <var713:TExternCodeSegment>*/;
var = var713;
goto RET_LABEL;
} else {
}
} else {
self->attrs[COLOR_lexer__Lexer___stream_pos].l = var_sp; /* _stream_pos on <self:Lexer> */
var714 = NEW_location__Location(&type_location__Location);
var715 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var715 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1664);
show_backtrace(1);
}
var716 = 1;
{ /* Inline kernel#Int#+ (var_start_line,var716) */
var719 = var_start_line + var716;
var717 = var719;
goto RET_LABEL718;
RET_LABEL718:(void)0;
}
var720 = 1;
{ /* Inline kernel#Int#+ (var_start_line,var720) */
var723 = var_start_line + var720;
var721 = var723;
goto RET_LABEL722;
RET_LABEL722:(void)0;
}
var724 = 1;
{ /* Inline kernel#Int#+ (var_start_pos,var724) */
var727 = var_start_pos + var724;
var725 = var727;
goto RET_LABEL726;
RET_LABEL726:(void)0;
}
var728 = 1;
{ /* Inline kernel#Int#+ (var_start_pos,var728) */
var731 = var_start_pos + var728;
var729 = var731;
goto RET_LABEL730;
RET_LABEL730:(void)0;
}
((void (*)(val*, val*, long, long, long, long))(var714->class->vft[COLOR_location__Location__init]))(var714, var715, var717, var721, var725, var729) /* init on <var714:Location>*/;
var_location732 = var714;
{ /* Inline kernel#Int#> (var_sp,var_start_stream_pos) */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var735 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (!var735) {
var_class_name738 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name738);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var739 = var_sp > var_start_stream_pos;
var733 = var739;
goto RET_LABEL734;
RET_LABEL734:(void)0;
}
if (var733){
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) */
var742 = var_sp - var_start_stream_pos;
var740 = var742;
goto RET_LABEL741;
RET_LABEL741:(void)0;
}
var743 = ((val* (*)(val*, long, long))(var_string->class->vft[COLOR_string__AbstractString__substring]))(var_string, var_start_stream_pos, var740) /* substring on <var_string:String>*/;
var_text = var743;
var744 = NEW_parser_nodes__ALexerError(&type_parser_nodes__ALexerError);
var745 = NEW_array__Array(&type_array__Arraykernel__Object);
var746 = 3;
((void (*)(val*, long))(var745->class->vft[COLOR_array__Array__with_capacity]))(var745, var746) /* with_capacity on <var745:Array[Object]>*/;
var_ = var745;
if (varonce) {
var747 = varonce;
} else {
var748 = "Syntax error: unknown token ";
var749 = 28;
var750 = string__NativeString__to_s_with_length(var748, var749);
var747 = var750;
varonce = var747;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var747) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_text) /* add on <var_:Array[Object]>*/;
if (varonce751) {
var752 = varonce751;
} else {
var753 = ".";
var754 = 1;
var755 = string__NativeString__to_s_with_length(var753, var754);
var752 = var755;
varonce751 = var752;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var752) /* add on <var_:Array[Object]>*/;
var756 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
((void (*)(val*, val*, val*, val*))(var744->class->vft[COLOR_lexer__ALexerError__init_lexer_error]))(var744, var756, var_location732, var_text) /* init_lexer_error on <var744:ALexerError>*/;
var_token = var744;
var = var_token;
goto RET_LABEL;
} else {
var757 = NEW_parser_nodes__EOF(&type_parser_nodes__EOF);
((void (*)(val*, val*))(var757->class->vft[COLOR_lexer__EOF__init_tk]))(var757, var_location732) /* init_tk on <var757:EOF>*/;
var_token758 = var757;
var = var_token758;
goto RET_LABEL;
}
}
}
CONTINUE_label759: (void)0;
}
BREAK_label759: (void)0;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#get_token for (self: Object): nullable Token */
val* VIRTUAL_lexer__Lexer__get_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = lexer__Lexer__get_token(self);
var = var1;
RET_LABEL:;
return var;
}
