#include "lexer.sep.0.h"
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
lexer__TEol__init_tk(self, p0); /* Direct call lexer#TEol#init_tk on <self:Object(TEol)>*/
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
lexer__TComment__init_tk(self, p0); /* Direct call lexer#TComment#init_tk on <self:Object(TComment)>*/
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
lexer__TKwpackage__init_tk(self, p0); /* Direct call lexer#TKwpackage#init_tk on <self:Object(TKwpackage)>*/
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
lexer__TKwmodule__init_tk(self, p0); /* Direct call lexer#TKwmodule#init_tk on <self:Object(TKwmodule)>*/
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
lexer__TKwimport__init_tk(self, p0); /* Direct call lexer#TKwimport#init_tk on <self:Object(TKwimport)>*/
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
lexer__TKwclass__init_tk(self, p0); /* Direct call lexer#TKwclass#init_tk on <self:Object(TKwclass)>*/
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
lexer__TKwabstract__init_tk(self, p0); /* Direct call lexer#TKwabstract#init_tk on <self:Object(TKwabstract)>*/
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
lexer__TKwinterface__init_tk(self, p0); /* Direct call lexer#TKwinterface#init_tk on <self:Object(TKwinterface)>*/
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
lexer__TKwenum__init_tk(self, p0); /* Direct call lexer#TKwenum#init_tk on <self:Object(TKwenum)>*/
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
lexer__TKwend__init_tk(self, p0); /* Direct call lexer#TKwend#init_tk on <self:Object(TKwend)>*/
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
lexer__TKwmeth__init_tk(self, p0); /* Direct call lexer#TKwmeth#init_tk on <self:Object(TKwmeth)>*/
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
lexer__TKwtype__init_tk(self, p0); /* Direct call lexer#TKwtype#init_tk on <self:Object(TKwtype)>*/
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
lexer__TKwinit__init_tk(self, p0); /* Direct call lexer#TKwinit#init_tk on <self:Object(TKwinit)>*/
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
lexer__TKwredef__init_tk(self, p0); /* Direct call lexer#TKwredef#init_tk on <self:Object(TKwredef)>*/
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
lexer__TKwis__init_tk(self, p0); /* Direct call lexer#TKwis#init_tk on <self:Object(TKwis)>*/
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
lexer__TKwdo__init_tk(self, p0); /* Direct call lexer#TKwdo#init_tk on <self:Object(TKwdo)>*/
RET_LABEL:;
}
/* method lexer#TKwvar#parser_index for (self: TKwvar): Int */
long lexer__TKwvar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 16;
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
lexer__TKwvar__init_tk(self, p0); /* Direct call lexer#TKwvar#init_tk on <self:Object(TKwvar)>*/
RET_LABEL:;
}
/* method lexer#TKwextern#parser_index for (self: TKwextern): Int */
long lexer__TKwextern__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 17;
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
lexer__TKwextern__init_tk(self, p0); /* Direct call lexer#TKwextern#init_tk on <self:Object(TKwextern)>*/
RET_LABEL:;
}
/* method lexer#TKwpublic#parser_index for (self: TKwpublic): Int */
long lexer__TKwpublic__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 18;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwpublic#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwpublic__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwpublic__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwpublic#init_tk for (self: TKwpublic, Location) */
void lexer__TKwpublic__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwpublic> */
RET_LABEL:;
}
/* method lexer#TKwpublic#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwpublic__init_tk(val* self, val* p0) {
lexer__TKwpublic__init_tk(self, p0); /* Direct call lexer#TKwpublic#init_tk on <self:Object(TKwpublic)>*/
RET_LABEL:;
}
/* method lexer#TKwprotected#parser_index for (self: TKwprotected): Int */
long lexer__TKwprotected__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 19;
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
lexer__TKwprotected__init_tk(self, p0); /* Direct call lexer#TKwprotected#init_tk on <self:Object(TKwprotected)>*/
RET_LABEL:;
}
/* method lexer#TKwprivate#parser_index for (self: TKwprivate): Int */
long lexer__TKwprivate__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 20;
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
lexer__TKwprivate__init_tk(self, p0); /* Direct call lexer#TKwprivate#init_tk on <self:Object(TKwprivate)>*/
RET_LABEL:;
}
/* method lexer#TKwintrude#parser_index for (self: TKwintrude): Int */
long lexer__TKwintrude__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 21;
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
lexer__TKwintrude__init_tk(self, p0); /* Direct call lexer#TKwintrude#init_tk on <self:Object(TKwintrude)>*/
RET_LABEL:;
}
/* method lexer#TKwif#parser_index for (self: TKwif): Int */
long lexer__TKwif__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 22;
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
lexer__TKwif__init_tk(self, p0); /* Direct call lexer#TKwif#init_tk on <self:Object(TKwif)>*/
RET_LABEL:;
}
/* method lexer#TKwthen#parser_index for (self: TKwthen): Int */
long lexer__TKwthen__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 23;
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
lexer__TKwthen__init_tk(self, p0); /* Direct call lexer#TKwthen#init_tk on <self:Object(TKwthen)>*/
RET_LABEL:;
}
/* method lexer#TKwelse#parser_index for (self: TKwelse): Int */
long lexer__TKwelse__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 24;
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
lexer__TKwelse__init_tk(self, p0); /* Direct call lexer#TKwelse#init_tk on <self:Object(TKwelse)>*/
RET_LABEL:;
}
/* method lexer#TKwwhile#parser_index for (self: TKwwhile): Int */
long lexer__TKwwhile__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 25;
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
lexer__TKwwhile__init_tk(self, p0); /* Direct call lexer#TKwwhile#init_tk on <self:Object(TKwwhile)>*/
RET_LABEL:;
}
/* method lexer#TKwloop#parser_index for (self: TKwloop): Int */
long lexer__TKwloop__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 26;
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
lexer__TKwloop__init_tk(self, p0); /* Direct call lexer#TKwloop#init_tk on <self:Object(TKwloop)>*/
RET_LABEL:;
}
/* method lexer#TKwfor#parser_index for (self: TKwfor): Int */
long lexer__TKwfor__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 27;
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
lexer__TKwfor__init_tk(self, p0); /* Direct call lexer#TKwfor#init_tk on <self:Object(TKwfor)>*/
RET_LABEL:;
}
/* method lexer#TKwin#parser_index for (self: TKwin): Int */
long lexer__TKwin__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 28;
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
lexer__TKwin__init_tk(self, p0); /* Direct call lexer#TKwin#init_tk on <self:Object(TKwin)>*/
RET_LABEL:;
}
/* method lexer#TKwand#parser_index for (self: TKwand): Int */
long lexer__TKwand__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 29;
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
lexer__TKwand__init_tk(self, p0); /* Direct call lexer#TKwand#init_tk on <self:Object(TKwand)>*/
RET_LABEL:;
}
/* method lexer#TKwor#parser_index for (self: TKwor): Int */
long lexer__TKwor__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 30;
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
lexer__TKwor__init_tk(self, p0); /* Direct call lexer#TKwor#init_tk on <self:Object(TKwor)>*/
RET_LABEL:;
}
/* method lexer#TKwnot#parser_index for (self: TKwnot): Int */
long lexer__TKwnot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 31;
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
lexer__TKwnot__init_tk(self, p0); /* Direct call lexer#TKwnot#init_tk on <self:Object(TKwnot)>*/
RET_LABEL:;
}
/* method lexer#TKwimplies#parser_index for (self: TKwimplies): Int */
long lexer__TKwimplies__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 32;
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
lexer__TKwimplies__init_tk(self, p0); /* Direct call lexer#TKwimplies#init_tk on <self:Object(TKwimplies)>*/
RET_LABEL:;
}
/* method lexer#TKwreturn#parser_index for (self: TKwreturn): Int */
long lexer__TKwreturn__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 33;
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
lexer__TKwreturn__init_tk(self, p0); /* Direct call lexer#TKwreturn#init_tk on <self:Object(TKwreturn)>*/
RET_LABEL:;
}
/* method lexer#TKwcontinue#parser_index for (self: TKwcontinue): Int */
long lexer__TKwcontinue__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 34;
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
lexer__TKwcontinue__init_tk(self, p0); /* Direct call lexer#TKwcontinue#init_tk on <self:Object(TKwcontinue)>*/
RET_LABEL:;
}
/* method lexer#TKwbreak#parser_index for (self: TKwbreak): Int */
long lexer__TKwbreak__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 35;
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
lexer__TKwbreak__init_tk(self, p0); /* Direct call lexer#TKwbreak#init_tk on <self:Object(TKwbreak)>*/
RET_LABEL:;
}
/* method lexer#TKwabort#parser_index for (self: TKwabort): Int */
long lexer__TKwabort__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 36;
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
lexer__TKwabort__init_tk(self, p0); /* Direct call lexer#TKwabort#init_tk on <self:Object(TKwabort)>*/
RET_LABEL:;
}
/* method lexer#TKwassert#parser_index for (self: TKwassert): Int */
long lexer__TKwassert__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 37;
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
lexer__TKwassert__init_tk(self, p0); /* Direct call lexer#TKwassert#init_tk on <self:Object(TKwassert)>*/
RET_LABEL:;
}
/* method lexer#TKwnew#parser_index for (self: TKwnew): Int */
long lexer__TKwnew__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 38;
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
lexer__TKwnew__init_tk(self, p0); /* Direct call lexer#TKwnew#init_tk on <self:Object(TKwnew)>*/
RET_LABEL:;
}
/* method lexer#TKwisa#parser_index for (self: TKwisa): Int */
long lexer__TKwisa__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 39;
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
lexer__TKwisa__init_tk(self, p0); /* Direct call lexer#TKwisa#init_tk on <self:Object(TKwisa)>*/
RET_LABEL:;
}
/* method lexer#TKwonce#parser_index for (self: TKwonce): Int */
long lexer__TKwonce__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 40;
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
lexer__TKwonce__init_tk(self, p0); /* Direct call lexer#TKwonce#init_tk on <self:Object(TKwonce)>*/
RET_LABEL:;
}
/* method lexer#TKwsuper#parser_index for (self: TKwsuper): Int */
long lexer__TKwsuper__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 41;
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
lexer__TKwsuper__init_tk(self, p0); /* Direct call lexer#TKwsuper#init_tk on <self:Object(TKwsuper)>*/
RET_LABEL:;
}
/* method lexer#TKwself#parser_index for (self: TKwself): Int */
long lexer__TKwself__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 42;
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
lexer__TKwself__init_tk(self, p0); /* Direct call lexer#TKwself#init_tk on <self:Object(TKwself)>*/
RET_LABEL:;
}
/* method lexer#TKwtrue#parser_index for (self: TKwtrue): Int */
long lexer__TKwtrue__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 43;
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
lexer__TKwtrue__init_tk(self, p0); /* Direct call lexer#TKwtrue#init_tk on <self:Object(TKwtrue)>*/
RET_LABEL:;
}
/* method lexer#TKwfalse#parser_index for (self: TKwfalse): Int */
long lexer__TKwfalse__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 44;
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
lexer__TKwfalse__init_tk(self, p0); /* Direct call lexer#TKwfalse#init_tk on <self:Object(TKwfalse)>*/
RET_LABEL:;
}
/* method lexer#TKwnull#parser_index for (self: TKwnull): Int */
long lexer__TKwnull__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 45;
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
lexer__TKwnull__init_tk(self, p0); /* Direct call lexer#TKwnull#init_tk on <self:Object(TKwnull)>*/
RET_LABEL:;
}
/* method lexer#TKwas#parser_index for (self: TKwas): Int */
long lexer__TKwas__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 46;
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
lexer__TKwas__init_tk(self, p0); /* Direct call lexer#TKwas#init_tk on <self:Object(TKwas)>*/
RET_LABEL:;
}
/* method lexer#TKwnullable#parser_index for (self: TKwnullable): Int */
long lexer__TKwnullable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 47;
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
lexer__TKwnullable__init_tk(self, p0); /* Direct call lexer#TKwnullable#init_tk on <self:Object(TKwnullable)>*/
RET_LABEL:;
}
/* method lexer#TKwisset#parser_index for (self: TKwisset): Int */
long lexer__TKwisset__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 48;
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
lexer__TKwisset__init_tk(self, p0); /* Direct call lexer#TKwisset#init_tk on <self:Object(TKwisset)>*/
RET_LABEL:;
}
/* method lexer#TKwlabel#parser_index for (self: TKwlabel): Int */
long lexer__TKwlabel__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 49;
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
lexer__TKwlabel__init_tk(self, p0); /* Direct call lexer#TKwlabel#init_tk on <self:Object(TKwlabel)>*/
RET_LABEL:;
}
/* method lexer#TKwdebug#parser_index for (self: TKwdebug): Int */
long lexer__TKwdebug__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 50;
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
lexer__TKwdebug__init_tk(self, p0); /* Direct call lexer#TKwdebug#init_tk on <self:Object(TKwdebug)>*/
RET_LABEL:;
}
/* method lexer#TOpar#parser_index for (self: TOpar): Int */
long lexer__TOpar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 51;
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
lexer__TOpar__init_tk(self, p0); /* Direct call lexer#TOpar#init_tk on <self:Object(TOpar)>*/
RET_LABEL:;
}
/* method lexer#TCpar#parser_index for (self: TCpar): Int */
long lexer__TCpar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 52;
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
lexer__TCpar__init_tk(self, p0); /* Direct call lexer#TCpar#init_tk on <self:Object(TCpar)>*/
RET_LABEL:;
}
/* method lexer#TObra#parser_index for (self: TObra): Int */
long lexer__TObra__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 53;
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
lexer__TObra__init_tk(self, p0); /* Direct call lexer#TObra#init_tk on <self:Object(TObra)>*/
RET_LABEL:;
}
/* method lexer#TCbra#parser_index for (self: TCbra): Int */
long lexer__TCbra__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 54;
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
lexer__TCbra__init_tk(self, p0); /* Direct call lexer#TCbra#init_tk on <self:Object(TCbra)>*/
RET_LABEL:;
}
/* method lexer#TComma#parser_index for (self: TComma): Int */
long lexer__TComma__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 55;
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
lexer__TComma__init_tk(self, p0); /* Direct call lexer#TComma#init_tk on <self:Object(TComma)>*/
RET_LABEL:;
}
/* method lexer#TColumn#parser_index for (self: TColumn): Int */
long lexer__TColumn__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 56;
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
lexer__TColumn__init_tk(self, p0); /* Direct call lexer#TColumn#init_tk on <self:Object(TColumn)>*/
RET_LABEL:;
}
/* method lexer#TQuad#parser_index for (self: TQuad): Int */
long lexer__TQuad__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 57;
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
lexer__TQuad__init_tk(self, p0); /* Direct call lexer#TQuad#init_tk on <self:Object(TQuad)>*/
RET_LABEL:;
}
/* method lexer#TAssign#parser_index for (self: TAssign): Int */
long lexer__TAssign__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 58;
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
lexer__TAssign__init_tk(self, p0); /* Direct call lexer#TAssign#init_tk on <self:Object(TAssign)>*/
RET_LABEL:;
}
/* method lexer#TPluseq#parser_index for (self: TPluseq): Int */
long lexer__TPluseq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 59;
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
lexer__TPluseq__init_tk(self, p0); /* Direct call lexer#TPluseq#init_tk on <self:Object(TPluseq)>*/
RET_LABEL:;
}
/* method lexer#TMinuseq#parser_index for (self: TMinuseq): Int */
long lexer__TMinuseq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 60;
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
lexer__TMinuseq__init_tk(self, p0); /* Direct call lexer#TMinuseq#init_tk on <self:Object(TMinuseq)>*/
RET_LABEL:;
}
/* method lexer#TDotdotdot#parser_index for (self: TDotdotdot): Int */
long lexer__TDotdotdot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 61;
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
lexer__TDotdotdot__init_tk(self, p0); /* Direct call lexer#TDotdotdot#init_tk on <self:Object(TDotdotdot)>*/
RET_LABEL:;
}
/* method lexer#TDotdot#parser_index for (self: TDotdot): Int */
long lexer__TDotdot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 62;
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
lexer__TDotdot__init_tk(self, p0); /* Direct call lexer#TDotdot#init_tk on <self:Object(TDotdot)>*/
RET_LABEL:;
}
/* method lexer#TDot#parser_index for (self: TDot): Int */
long lexer__TDot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 63;
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
lexer__TDot__init_tk(self, p0); /* Direct call lexer#TDot#init_tk on <self:Object(TDot)>*/
RET_LABEL:;
}
/* method lexer#TPlus#parser_index for (self: TPlus): Int */
long lexer__TPlus__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 64;
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
lexer__TPlus__init_tk(self, p0); /* Direct call lexer#TPlus#init_tk on <self:Object(TPlus)>*/
RET_LABEL:;
}
/* method lexer#TMinus#parser_index for (self: TMinus): Int */
long lexer__TMinus__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 65;
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
lexer__TMinus__init_tk(self, p0); /* Direct call lexer#TMinus#init_tk on <self:Object(TMinus)>*/
RET_LABEL:;
}
/* method lexer#TStar#parser_index for (self: TStar): Int */
long lexer__TStar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 66;
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
lexer__TStar__init_tk(self, p0); /* Direct call lexer#TStar#init_tk on <self:Object(TStar)>*/
RET_LABEL:;
}
/* method lexer#TStarstar#parser_index for (self: TStarstar): Int */
long lexer__TStarstar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 67;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TStarstar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TStarstar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TStarstar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TStarstar#init_tk for (self: TStarstar, Location) */
void lexer__TStarstar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TStarstar> */
RET_LABEL:;
}
/* method lexer#TStarstar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TStarstar__init_tk(val* self, val* p0) {
lexer__TStarstar__init_tk(self, p0); /* Direct call lexer#TStarstar#init_tk on <self:Object(TStarstar)>*/
RET_LABEL:;
}
/* method lexer#TSlash#parser_index for (self: TSlash): Int */
long lexer__TSlash__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 68;
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
lexer__TSlash__init_tk(self, p0); /* Direct call lexer#TSlash#init_tk on <self:Object(TSlash)>*/
RET_LABEL:;
}
/* method lexer#TPercent#parser_index for (self: TPercent): Int */
long lexer__TPercent__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 69;
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
lexer__TPercent__init_tk(self, p0); /* Direct call lexer#TPercent#init_tk on <self:Object(TPercent)>*/
RET_LABEL:;
}
/* method lexer#TEq#parser_index for (self: TEq): Int */
long lexer__TEq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 70;
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
lexer__TEq__init_tk(self, p0); /* Direct call lexer#TEq#init_tk on <self:Object(TEq)>*/
RET_LABEL:;
}
/* method lexer#TNe#parser_index for (self: TNe): Int */
long lexer__TNe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 71;
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
lexer__TNe__init_tk(self, p0); /* Direct call lexer#TNe#init_tk on <self:Object(TNe)>*/
RET_LABEL:;
}
/* method lexer#TLt#parser_index for (self: TLt): Int */
long lexer__TLt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 72;
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
lexer__TLt__init_tk(self, p0); /* Direct call lexer#TLt#init_tk on <self:Object(TLt)>*/
RET_LABEL:;
}
/* method lexer#TLe#parser_index for (self: TLe): Int */
long lexer__TLe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 73;
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
lexer__TLe__init_tk(self, p0); /* Direct call lexer#TLe#init_tk on <self:Object(TLe)>*/
RET_LABEL:;
}
/* method lexer#TLl#parser_index for (self: TLl): Int */
long lexer__TLl__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 74;
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
lexer__TLl__init_tk(self, p0); /* Direct call lexer#TLl#init_tk on <self:Object(TLl)>*/
RET_LABEL:;
}
/* method lexer#TGt#parser_index for (self: TGt): Int */
long lexer__TGt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 75;
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
lexer__TGt__init_tk(self, p0); /* Direct call lexer#TGt#init_tk on <self:Object(TGt)>*/
RET_LABEL:;
}
/* method lexer#TGe#parser_index for (self: TGe): Int */
long lexer__TGe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 76;
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
lexer__TGe__init_tk(self, p0); /* Direct call lexer#TGe#init_tk on <self:Object(TGe)>*/
RET_LABEL:;
}
/* method lexer#TGg#parser_index for (self: TGg): Int */
long lexer__TGg__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 77;
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
lexer__TGg__init_tk(self, p0); /* Direct call lexer#TGg#init_tk on <self:Object(TGg)>*/
RET_LABEL:;
}
/* method lexer#TStarship#parser_index for (self: TStarship): Int */
long lexer__TStarship__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 78;
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
lexer__TStarship__init_tk(self, p0); /* Direct call lexer#TStarship#init_tk on <self:Object(TStarship)>*/
RET_LABEL:;
}
/* method lexer#TBang#parser_index for (self: TBang): Int */
long lexer__TBang__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 79;
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
lexer__TBang__init_tk(self, p0); /* Direct call lexer#TBang#init_tk on <self:Object(TBang)>*/
RET_LABEL:;
}
/* method lexer#TAt#parser_index for (self: TAt): Int */
long lexer__TAt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 80;
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
lexer__TAt__init_tk(self, p0); /* Direct call lexer#TAt#init_tk on <self:Object(TAt)>*/
RET_LABEL:;
}
/* method lexer#TClassid#parser_index for (self: TClassid): Int */
long lexer__TClassid__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 81;
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
lexer__TClassid__init_tk(self, p0); /* Direct call lexer#TClassid#init_tk on <self:Object(TClassid)>*/
RET_LABEL:;
}
/* method lexer#TId#parser_index for (self: TId): Int */
long lexer__TId__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 82;
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
lexer__TId__init_tk(self, p0); /* Direct call lexer#TId#init_tk on <self:Object(TId)>*/
RET_LABEL:;
}
/* method lexer#TAttrid#parser_index for (self: TAttrid): Int */
long lexer__TAttrid__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 83;
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
lexer__TAttrid__init_tk(self, p0); /* Direct call lexer#TAttrid#init_tk on <self:Object(TAttrid)>*/
RET_LABEL:;
}
/* method lexer#TNumber#parser_index for (self: TNumber): Int */
long lexer__TNumber__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 84;
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
lexer__TNumber__init_tk(self, p0); /* Direct call lexer#TNumber#init_tk on <self:Object(TNumber)>*/
RET_LABEL:;
}
/* method lexer#THexNumber#parser_index for (self: THexNumber): Int */
long lexer__THexNumber__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 85;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#THexNumber#parser_index for (self: Object): Int */
long VIRTUAL_lexer__THexNumber__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__THexNumber__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#THexNumber#init_tk for (self: THexNumber, Location) */
void lexer__THexNumber__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:THexNumber> */
RET_LABEL:;
}
/* method lexer#THexNumber#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__THexNumber__init_tk(val* self, val* p0) {
lexer__THexNumber__init_tk(self, p0); /* Direct call lexer#THexNumber#init_tk on <self:Object(THexNumber)>*/
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
lexer__TFloat__init_tk(self, p0); /* Direct call lexer#TFloat#init_tk on <self:Object(TFloat)>*/
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
lexer__TString__init_tk(self, p0); /* Direct call lexer#TString#init_tk on <self:Object(TString)>*/
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
lexer__TStartString__init_tk(self, p0); /* Direct call lexer#TStartString#init_tk on <self:Object(TStartString)>*/
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
lexer__TMidString__init_tk(self, p0); /* Direct call lexer#TMidString#init_tk on <self:Object(TMidString)>*/
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
lexer__TEndString__init_tk(self, p0); /* Direct call lexer#TEndString#init_tk on <self:Object(TEndString)>*/
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
lexer__TChar__init_tk(self, p0); /* Direct call lexer#TChar#init_tk on <self:Object(TChar)>*/
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
lexer__TBadString__init_tk(self, p0); /* Direct call lexer#TBadString#init_tk on <self:Object(TBadString)>*/
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
lexer__TBadChar__init_tk(self, p0); /* Direct call lexer#TBadChar#init_tk on <self:Object(TBadChar)>*/
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
lexer__TExternCodeSegment__init_tk(self, p0); /* Direct call lexer#TExternCodeSegment#init_tk on <self:Object(TExternCodeSegment)>*/
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
/* method lexer#Lexer#make_token for (self: Lexer, Int, Location): Token */
val* lexer__Lexer__make_token(val* self, long p0, val* p1) {
val* var /* : Token */;
long var_accept_token /* var accept_token: Int */;
val* var_location /* var location: Location */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : TEol */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : TComment */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : TKwpackage */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : TKwmodule */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : TKwimport */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : TKwclass */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : TKwabstract */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : TKwinterface */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : TKwenum */;
long var55 /* : Int */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : TKwend */;
long var61 /* : Int */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : TKwmeth */;
long var67 /* : Int */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : TKwtype */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
val* var78 /* : TKwinit */;
long var79 /* : Int */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : TKwredef */;
long var85 /* : Int */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
val* var90 /* : TKwis */;
long var91 /* : Int */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
val* var96 /* : TKwdo */;
long var97 /* : Int */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
val* var102 /* : TKwvar */;
long var103 /* : Int */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : TKwextern */;
long var109 /* : Int */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
val* var114 /* : TKwpublic */;
long var115 /* : Int */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
val* var120 /* : TKwprotected */;
long var121 /* : Int */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
val* var126 /* : TKwprivate */;
long var127 /* : Int */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
val* var132 /* : TKwintrude */;
long var133 /* : Int */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
short int var137 /* : Bool */;
val* var138 /* : TKwif */;
long var139 /* : Int */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var143 /* : Bool */;
val* var144 /* : TKwthen */;
long var145 /* : Int */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
val* var150 /* : TKwelse */;
long var151 /* : Int */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
val* var156 /* : TKwwhile */;
long var157 /* : Int */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
val* var162 /* : TKwloop */;
long var163 /* : Int */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
val* var168 /* : TKwfor */;
long var169 /* : Int */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
val* var174 /* : TKwin */;
long var175 /* : Int */;
short int var176 /* : Bool */;
short int var177 /* : Bool */;
short int var179 /* : Bool */;
val* var180 /* : TKwand */;
long var181 /* : Int */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
val* var186 /* : TKwor */;
long var187 /* : Int */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
val* var192 /* : TKwnot */;
long var193 /* : Int */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
short int var197 /* : Bool */;
val* var198 /* : TKwimplies */;
long var199 /* : Int */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
short int var203 /* : Bool */;
val* var204 /* : TKwreturn */;
long var205 /* : Int */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var209 /* : Bool */;
val* var210 /* : TKwcontinue */;
long var211 /* : Int */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
short int var215 /* : Bool */;
val* var216 /* : TKwbreak */;
long var217 /* : Int */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
short int var221 /* : Bool */;
val* var222 /* : TKwabort */;
long var223 /* : Int */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var227 /* : Bool */;
val* var228 /* : TKwassert */;
long var229 /* : Int */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
short int var233 /* : Bool */;
val* var234 /* : TKwnew */;
long var235 /* : Int */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var239 /* : Bool */;
val* var240 /* : TKwisa */;
long var241 /* : Int */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
val* var246 /* : TKwonce */;
long var247 /* : Int */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
short int var251 /* : Bool */;
val* var252 /* : TKwsuper */;
long var253 /* : Int */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
val* var258 /* : TKwself */;
long var259 /* : Int */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
val* var264 /* : TKwtrue */;
long var265 /* : Int */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
short int var269 /* : Bool */;
val* var270 /* : TKwfalse */;
long var271 /* : Int */;
short int var272 /* : Bool */;
short int var273 /* : Bool */;
short int var275 /* : Bool */;
val* var276 /* : TKwnull */;
long var277 /* : Int */;
short int var278 /* : Bool */;
short int var279 /* : Bool */;
short int var281 /* : Bool */;
val* var282 /* : TKwas */;
long var283 /* : Int */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
val* var288 /* : TKwnullable */;
long var289 /* : Int */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
short int var293 /* : Bool */;
val* var294 /* : TKwisset */;
long var295 /* : Int */;
short int var296 /* : Bool */;
short int var297 /* : Bool */;
short int var299 /* : Bool */;
val* var300 /* : TKwlabel */;
long var301 /* : Int */;
short int var302 /* : Bool */;
short int var303 /* : Bool */;
short int var305 /* : Bool */;
val* var306 /* : TKwdebug */;
long var307 /* : Int */;
short int var308 /* : Bool */;
short int var309 /* : Bool */;
short int var311 /* : Bool */;
val* var312 /* : TOpar */;
long var313 /* : Int */;
short int var314 /* : Bool */;
short int var315 /* : Bool */;
short int var317 /* : Bool */;
val* var318 /* : TCpar */;
long var319 /* : Int */;
short int var320 /* : Bool */;
short int var321 /* : Bool */;
short int var323 /* : Bool */;
val* var324 /* : TObra */;
long var325 /* : Int */;
short int var326 /* : Bool */;
short int var327 /* : Bool */;
short int var329 /* : Bool */;
val* var330 /* : TCbra */;
long var331 /* : Int */;
short int var332 /* : Bool */;
short int var333 /* : Bool */;
short int var335 /* : Bool */;
val* var336 /* : TComma */;
long var337 /* : Int */;
short int var338 /* : Bool */;
short int var339 /* : Bool */;
short int var341 /* : Bool */;
val* var342 /* : TColumn */;
long var343 /* : Int */;
short int var344 /* : Bool */;
short int var345 /* : Bool */;
short int var347 /* : Bool */;
val* var348 /* : TQuad */;
long var349 /* : Int */;
short int var350 /* : Bool */;
short int var351 /* : Bool */;
short int var353 /* : Bool */;
val* var354 /* : TAssign */;
long var355 /* : Int */;
short int var356 /* : Bool */;
short int var357 /* : Bool */;
short int var359 /* : Bool */;
val* var360 /* : TPluseq */;
long var361 /* : Int */;
short int var362 /* : Bool */;
short int var363 /* : Bool */;
short int var365 /* : Bool */;
val* var366 /* : TMinuseq */;
long var367 /* : Int */;
short int var368 /* : Bool */;
short int var369 /* : Bool */;
short int var371 /* : Bool */;
val* var372 /* : TDotdotdot */;
long var373 /* : Int */;
short int var374 /* : Bool */;
short int var375 /* : Bool */;
short int var377 /* : Bool */;
val* var378 /* : TDotdot */;
long var379 /* : Int */;
short int var380 /* : Bool */;
short int var381 /* : Bool */;
short int var383 /* : Bool */;
val* var384 /* : TDot */;
long var385 /* : Int */;
short int var386 /* : Bool */;
short int var387 /* : Bool */;
short int var389 /* : Bool */;
val* var390 /* : TPlus */;
long var391 /* : Int */;
short int var392 /* : Bool */;
short int var393 /* : Bool */;
short int var395 /* : Bool */;
val* var396 /* : TMinus */;
long var397 /* : Int */;
short int var398 /* : Bool */;
short int var399 /* : Bool */;
short int var401 /* : Bool */;
val* var402 /* : TStar */;
long var403 /* : Int */;
short int var404 /* : Bool */;
short int var405 /* : Bool */;
short int var407 /* : Bool */;
val* var408 /* : TStarstar */;
long var409 /* : Int */;
short int var410 /* : Bool */;
short int var411 /* : Bool */;
short int var413 /* : Bool */;
val* var414 /* : TSlash */;
long var415 /* : Int */;
short int var416 /* : Bool */;
short int var417 /* : Bool */;
short int var419 /* : Bool */;
val* var420 /* : TPercent */;
long var421 /* : Int */;
short int var422 /* : Bool */;
short int var423 /* : Bool */;
short int var425 /* : Bool */;
val* var426 /* : TEq */;
long var427 /* : Int */;
short int var428 /* : Bool */;
short int var429 /* : Bool */;
short int var431 /* : Bool */;
val* var432 /* : TNe */;
long var433 /* : Int */;
short int var434 /* : Bool */;
short int var435 /* : Bool */;
short int var437 /* : Bool */;
val* var438 /* : TLt */;
long var439 /* : Int */;
short int var440 /* : Bool */;
short int var441 /* : Bool */;
short int var443 /* : Bool */;
val* var444 /* : TLe */;
long var445 /* : Int */;
short int var446 /* : Bool */;
short int var447 /* : Bool */;
short int var449 /* : Bool */;
val* var450 /* : TLl */;
long var451 /* : Int */;
short int var452 /* : Bool */;
short int var453 /* : Bool */;
short int var455 /* : Bool */;
val* var456 /* : TGt */;
long var457 /* : Int */;
short int var458 /* : Bool */;
short int var459 /* : Bool */;
short int var461 /* : Bool */;
val* var462 /* : TGe */;
long var463 /* : Int */;
short int var464 /* : Bool */;
short int var465 /* : Bool */;
short int var467 /* : Bool */;
val* var468 /* : TGg */;
long var469 /* : Int */;
short int var470 /* : Bool */;
short int var471 /* : Bool */;
short int var473 /* : Bool */;
val* var474 /* : TStarship */;
long var475 /* : Int */;
short int var476 /* : Bool */;
short int var477 /* : Bool */;
short int var479 /* : Bool */;
val* var480 /* : TBang */;
long var481 /* : Int */;
short int var482 /* : Bool */;
short int var483 /* : Bool */;
short int var485 /* : Bool */;
val* var486 /* : TAt */;
long var487 /* : Int */;
short int var488 /* : Bool */;
short int var489 /* : Bool */;
short int var491 /* : Bool */;
val* var492 /* : TClassid */;
long var493 /* : Int */;
short int var494 /* : Bool */;
short int var495 /* : Bool */;
short int var497 /* : Bool */;
val* var498 /* : TId */;
long var499 /* : Int */;
short int var500 /* : Bool */;
short int var501 /* : Bool */;
short int var503 /* : Bool */;
val* var504 /* : TAttrid */;
long var505 /* : Int */;
short int var506 /* : Bool */;
short int var507 /* : Bool */;
short int var509 /* : Bool */;
val* var510 /* : TNumber */;
long var511 /* : Int */;
short int var512 /* : Bool */;
short int var513 /* : Bool */;
short int var515 /* : Bool */;
val* var516 /* : THexNumber */;
long var517 /* : Int */;
short int var518 /* : Bool */;
short int var519 /* : Bool */;
short int var521 /* : Bool */;
val* var522 /* : TFloat */;
long var523 /* : Int */;
short int var524 /* : Bool */;
short int var525 /* : Bool */;
short int var527 /* : Bool */;
val* var528 /* : TString */;
long var529 /* : Int */;
short int var530 /* : Bool */;
short int var531 /* : Bool */;
short int var533 /* : Bool */;
val* var534 /* : TStartString */;
long var535 /* : Int */;
short int var536 /* : Bool */;
short int var537 /* : Bool */;
short int var539 /* : Bool */;
val* var540 /* : TMidString */;
long var541 /* : Int */;
short int var542 /* : Bool */;
short int var543 /* : Bool */;
short int var545 /* : Bool */;
val* var546 /* : TEndString */;
long var547 /* : Int */;
short int var548 /* : Bool */;
short int var549 /* : Bool */;
short int var551 /* : Bool */;
val* var552 /* : TChar */;
long var553 /* : Int */;
short int var554 /* : Bool */;
short int var555 /* : Bool */;
short int var557 /* : Bool */;
val* var558 /* : TBadString */;
long var559 /* : Int */;
short int var560 /* : Bool */;
short int var561 /* : Bool */;
short int var563 /* : Bool */;
val* var564 /* : TBadChar */;
long var565 /* : Int */;
short int var566 /* : Bool */;
short int var567 /* : Bool */;
short int var569 /* : Bool */;
val* var570 /* : TExternCodeSegment */;
var_accept_token = p0;
var_location = p1;
var1 = 1;
{
{ /* Inline kernel#Int#== (var_accept_token,var1) on <var_accept_token:Int> */
var5 = var_accept_token == var1;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var6 = NEW_parser_nodes__TEol(&type_parser_nodes__TEol);
{
lexer__TEol__init_tk(var6, var_location); /* Direct call lexer#TEol#init_tk on <var6:TEol>*/
}
var = var6;
goto RET_LABEL;
} else {
}
var7 = 2;
{
{ /* Inline kernel#Int#== (var_accept_token,var7) on <var_accept_token:Int> */
var11 = var_accept_token == var7;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var12 = NEW_parser_nodes__TComment(&type_parser_nodes__TComment);
{
lexer__TComment__init_tk(var12, var_location); /* Direct call lexer#TComment#init_tk on <var12:TComment>*/
}
var = var12;
goto RET_LABEL;
} else {
}
var13 = 3;
{
{ /* Inline kernel#Int#== (var_accept_token,var13) on <var_accept_token:Int> */
var17 = var_accept_token == var13;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var18 = NEW_parser_nodes__TKwpackage(&type_parser_nodes__TKwpackage);
{
lexer__TKwpackage__init_tk(var18, var_location); /* Direct call lexer#TKwpackage#init_tk on <var18:TKwpackage>*/
}
var = var18;
goto RET_LABEL;
} else {
}
var19 = 4;
{
{ /* Inline kernel#Int#== (var_accept_token,var19) on <var_accept_token:Int> */
var23 = var_accept_token == var19;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
var24 = NEW_parser_nodes__TKwmodule(&type_parser_nodes__TKwmodule);
{
lexer__TKwmodule__init_tk(var24, var_location); /* Direct call lexer#TKwmodule#init_tk on <var24:TKwmodule>*/
}
var = var24;
goto RET_LABEL;
} else {
}
var25 = 5;
{
{ /* Inline kernel#Int#== (var_accept_token,var25) on <var_accept_token:Int> */
var29 = var_accept_token == var25;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
var30 = NEW_parser_nodes__TKwimport(&type_parser_nodes__TKwimport);
{
lexer__TKwimport__init_tk(var30, var_location); /* Direct call lexer#TKwimport#init_tk on <var30:TKwimport>*/
}
var = var30;
goto RET_LABEL;
} else {
}
var31 = 6;
{
{ /* Inline kernel#Int#== (var_accept_token,var31) on <var_accept_token:Int> */
var35 = var_accept_token == var31;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
var36 = NEW_parser_nodes__TKwclass(&type_parser_nodes__TKwclass);
{
lexer__TKwclass__init_tk(var36, var_location); /* Direct call lexer#TKwclass#init_tk on <var36:TKwclass>*/
}
var = var36;
goto RET_LABEL;
} else {
}
var37 = 7;
{
{ /* Inline kernel#Int#== (var_accept_token,var37) on <var_accept_token:Int> */
var41 = var_accept_token == var37;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
var42 = NEW_parser_nodes__TKwabstract(&type_parser_nodes__TKwabstract);
{
lexer__TKwabstract__init_tk(var42, var_location); /* Direct call lexer#TKwabstract#init_tk on <var42:TKwabstract>*/
}
var = var42;
goto RET_LABEL;
} else {
}
var43 = 8;
{
{ /* Inline kernel#Int#== (var_accept_token,var43) on <var_accept_token:Int> */
var47 = var_accept_token == var43;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
var48 = NEW_parser_nodes__TKwinterface(&type_parser_nodes__TKwinterface);
{
lexer__TKwinterface__init_tk(var48, var_location); /* Direct call lexer#TKwinterface#init_tk on <var48:TKwinterface>*/
}
var = var48;
goto RET_LABEL;
} else {
}
var49 = 9;
{
{ /* Inline kernel#Int#== (var_accept_token,var49) on <var_accept_token:Int> */
var53 = var_accept_token == var49;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
var54 = NEW_parser_nodes__TKwenum(&type_parser_nodes__TKwenum);
{
lexer__TKwenum__init_tk(var54, var_location); /* Direct call lexer#TKwenum#init_tk on <var54:TKwenum>*/
}
var = var54;
goto RET_LABEL;
} else {
}
var55 = 10;
{
{ /* Inline kernel#Int#== (var_accept_token,var55) on <var_accept_token:Int> */
var59 = var_accept_token == var55;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
var60 = NEW_parser_nodes__TKwend(&type_parser_nodes__TKwend);
{
lexer__TKwend__init_tk(var60, var_location); /* Direct call lexer#TKwend#init_tk on <var60:TKwend>*/
}
var = var60;
goto RET_LABEL;
} else {
}
var61 = 11;
{
{ /* Inline kernel#Int#== (var_accept_token,var61) on <var_accept_token:Int> */
var65 = var_accept_token == var61;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (var62){
var66 = NEW_parser_nodes__TKwmeth(&type_parser_nodes__TKwmeth);
{
lexer__TKwmeth__init_tk(var66, var_location); /* Direct call lexer#TKwmeth#init_tk on <var66:TKwmeth>*/
}
var = var66;
goto RET_LABEL;
} else {
}
var67 = 12;
{
{ /* Inline kernel#Int#== (var_accept_token,var67) on <var_accept_token:Int> */
var71 = var_accept_token == var67;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
var72 = NEW_parser_nodes__TKwtype(&type_parser_nodes__TKwtype);
{
lexer__TKwtype__init_tk(var72, var_location); /* Direct call lexer#TKwtype#init_tk on <var72:TKwtype>*/
}
var = var72;
goto RET_LABEL;
} else {
}
var73 = 13;
{
{ /* Inline kernel#Int#== (var_accept_token,var73) on <var_accept_token:Int> */
var77 = var_accept_token == var73;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (var74){
var78 = NEW_parser_nodes__TKwinit(&type_parser_nodes__TKwinit);
{
lexer__TKwinit__init_tk(var78, var_location); /* Direct call lexer#TKwinit#init_tk on <var78:TKwinit>*/
}
var = var78;
goto RET_LABEL;
} else {
}
var79 = 14;
{
{ /* Inline kernel#Int#== (var_accept_token,var79) on <var_accept_token:Int> */
var83 = var_accept_token == var79;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var80 = var81;
}
if (var80){
var84 = NEW_parser_nodes__TKwredef(&type_parser_nodes__TKwredef);
{
lexer__TKwredef__init_tk(var84, var_location); /* Direct call lexer#TKwredef#init_tk on <var84:TKwredef>*/
}
var = var84;
goto RET_LABEL;
} else {
}
var85 = 15;
{
{ /* Inline kernel#Int#== (var_accept_token,var85) on <var_accept_token:Int> */
var89 = var_accept_token == var85;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
if (var86){
var90 = NEW_parser_nodes__TKwis(&type_parser_nodes__TKwis);
{
lexer__TKwis__init_tk(var90, var_location); /* Direct call lexer#TKwis#init_tk on <var90:TKwis>*/
}
var = var90;
goto RET_LABEL;
} else {
}
var91 = 16;
{
{ /* Inline kernel#Int#== (var_accept_token,var91) on <var_accept_token:Int> */
var95 = var_accept_token == var91;
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
if (var92){
var96 = NEW_parser_nodes__TKwdo(&type_parser_nodes__TKwdo);
{
lexer__TKwdo__init_tk(var96, var_location); /* Direct call lexer#TKwdo#init_tk on <var96:TKwdo>*/
}
var = var96;
goto RET_LABEL;
} else {
}
var97 = 17;
{
{ /* Inline kernel#Int#== (var_accept_token,var97) on <var_accept_token:Int> */
var101 = var_accept_token == var97;
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
var98 = var99;
}
if (var98){
var102 = NEW_parser_nodes__TKwvar(&type_parser_nodes__TKwvar);
{
lexer__TKwvar__init_tk(var102, var_location); /* Direct call lexer#TKwvar#init_tk on <var102:TKwvar>*/
}
var = var102;
goto RET_LABEL;
} else {
}
var103 = 18;
{
{ /* Inline kernel#Int#== (var_accept_token,var103) on <var_accept_token:Int> */
var107 = var_accept_token == var103;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
if (var104){
var108 = NEW_parser_nodes__TKwextern(&type_parser_nodes__TKwextern);
{
lexer__TKwextern__init_tk(var108, var_location); /* Direct call lexer#TKwextern#init_tk on <var108:TKwextern>*/
}
var = var108;
goto RET_LABEL;
} else {
}
var109 = 19;
{
{ /* Inline kernel#Int#== (var_accept_token,var109) on <var_accept_token:Int> */
var113 = var_accept_token == var109;
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
var110 = var111;
}
if (var110){
var114 = NEW_parser_nodes__TKwpublic(&type_parser_nodes__TKwpublic);
{
lexer__TKwpublic__init_tk(var114, var_location); /* Direct call lexer#TKwpublic#init_tk on <var114:TKwpublic>*/
}
var = var114;
goto RET_LABEL;
} else {
}
var115 = 20;
{
{ /* Inline kernel#Int#== (var_accept_token,var115) on <var_accept_token:Int> */
var119 = var_accept_token == var115;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var116 = var117;
}
if (var116){
var120 = NEW_parser_nodes__TKwprotected(&type_parser_nodes__TKwprotected);
{
lexer__TKwprotected__init_tk(var120, var_location); /* Direct call lexer#TKwprotected#init_tk on <var120:TKwprotected>*/
}
var = var120;
goto RET_LABEL;
} else {
}
var121 = 21;
{
{ /* Inline kernel#Int#== (var_accept_token,var121) on <var_accept_token:Int> */
var125 = var_accept_token == var121;
var123 = var125;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
var122 = var123;
}
if (var122){
var126 = NEW_parser_nodes__TKwprivate(&type_parser_nodes__TKwprivate);
{
lexer__TKwprivate__init_tk(var126, var_location); /* Direct call lexer#TKwprivate#init_tk on <var126:TKwprivate>*/
}
var = var126;
goto RET_LABEL;
} else {
}
var127 = 22;
{
{ /* Inline kernel#Int#== (var_accept_token,var127) on <var_accept_token:Int> */
var131 = var_accept_token == var127;
var129 = var131;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
var128 = var129;
}
if (var128){
var132 = NEW_parser_nodes__TKwintrude(&type_parser_nodes__TKwintrude);
{
lexer__TKwintrude__init_tk(var132, var_location); /* Direct call lexer#TKwintrude#init_tk on <var132:TKwintrude>*/
}
var = var132;
goto RET_LABEL;
} else {
}
var133 = 23;
{
{ /* Inline kernel#Int#== (var_accept_token,var133) on <var_accept_token:Int> */
var137 = var_accept_token == var133;
var135 = var137;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
var134 = var135;
}
if (var134){
var138 = NEW_parser_nodes__TKwif(&type_parser_nodes__TKwif);
{
lexer__TKwif__init_tk(var138, var_location); /* Direct call lexer#TKwif#init_tk on <var138:TKwif>*/
}
var = var138;
goto RET_LABEL;
} else {
}
var139 = 24;
{
{ /* Inline kernel#Int#== (var_accept_token,var139) on <var_accept_token:Int> */
var143 = var_accept_token == var139;
var141 = var143;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
var140 = var141;
}
if (var140){
var144 = NEW_parser_nodes__TKwthen(&type_parser_nodes__TKwthen);
{
lexer__TKwthen__init_tk(var144, var_location); /* Direct call lexer#TKwthen#init_tk on <var144:TKwthen>*/
}
var = var144;
goto RET_LABEL;
} else {
}
var145 = 25;
{
{ /* Inline kernel#Int#== (var_accept_token,var145) on <var_accept_token:Int> */
var149 = var_accept_token == var145;
var147 = var149;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
if (var146){
var150 = NEW_parser_nodes__TKwelse(&type_parser_nodes__TKwelse);
{
lexer__TKwelse__init_tk(var150, var_location); /* Direct call lexer#TKwelse#init_tk on <var150:TKwelse>*/
}
var = var150;
goto RET_LABEL;
} else {
}
var151 = 26;
{
{ /* Inline kernel#Int#== (var_accept_token,var151) on <var_accept_token:Int> */
var155 = var_accept_token == var151;
var153 = var155;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
var152 = var153;
}
if (var152){
var156 = NEW_parser_nodes__TKwwhile(&type_parser_nodes__TKwwhile);
{
lexer__TKwwhile__init_tk(var156, var_location); /* Direct call lexer#TKwwhile#init_tk on <var156:TKwwhile>*/
}
var = var156;
goto RET_LABEL;
} else {
}
var157 = 27;
{
{ /* Inline kernel#Int#== (var_accept_token,var157) on <var_accept_token:Int> */
var161 = var_accept_token == var157;
var159 = var161;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
var158 = var159;
}
if (var158){
var162 = NEW_parser_nodes__TKwloop(&type_parser_nodes__TKwloop);
{
lexer__TKwloop__init_tk(var162, var_location); /* Direct call lexer#TKwloop#init_tk on <var162:TKwloop>*/
}
var = var162;
goto RET_LABEL;
} else {
}
var163 = 28;
{
{ /* Inline kernel#Int#== (var_accept_token,var163) on <var_accept_token:Int> */
var167 = var_accept_token == var163;
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var164 = var165;
}
if (var164){
var168 = NEW_parser_nodes__TKwfor(&type_parser_nodes__TKwfor);
{
lexer__TKwfor__init_tk(var168, var_location); /* Direct call lexer#TKwfor#init_tk on <var168:TKwfor>*/
}
var = var168;
goto RET_LABEL;
} else {
}
var169 = 29;
{
{ /* Inline kernel#Int#== (var_accept_token,var169) on <var_accept_token:Int> */
var173 = var_accept_token == var169;
var171 = var173;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
var170 = var171;
}
if (var170){
var174 = NEW_parser_nodes__TKwin(&type_parser_nodes__TKwin);
{
lexer__TKwin__init_tk(var174, var_location); /* Direct call lexer#TKwin#init_tk on <var174:TKwin>*/
}
var = var174;
goto RET_LABEL;
} else {
}
var175 = 30;
{
{ /* Inline kernel#Int#== (var_accept_token,var175) on <var_accept_token:Int> */
var179 = var_accept_token == var175;
var177 = var179;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
var176 = var177;
}
if (var176){
var180 = NEW_parser_nodes__TKwand(&type_parser_nodes__TKwand);
{
lexer__TKwand__init_tk(var180, var_location); /* Direct call lexer#TKwand#init_tk on <var180:TKwand>*/
}
var = var180;
goto RET_LABEL;
} else {
}
var181 = 31;
{
{ /* Inline kernel#Int#== (var_accept_token,var181) on <var_accept_token:Int> */
var185 = var_accept_token == var181;
var183 = var185;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
var182 = var183;
}
if (var182){
var186 = NEW_parser_nodes__TKwor(&type_parser_nodes__TKwor);
{
lexer__TKwor__init_tk(var186, var_location); /* Direct call lexer#TKwor#init_tk on <var186:TKwor>*/
}
var = var186;
goto RET_LABEL;
} else {
}
var187 = 32;
{
{ /* Inline kernel#Int#== (var_accept_token,var187) on <var_accept_token:Int> */
var191 = var_accept_token == var187;
var189 = var191;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
var188 = var189;
}
if (var188){
var192 = NEW_parser_nodes__TKwnot(&type_parser_nodes__TKwnot);
{
lexer__TKwnot__init_tk(var192, var_location); /* Direct call lexer#TKwnot#init_tk on <var192:TKwnot>*/
}
var = var192;
goto RET_LABEL;
} else {
}
var193 = 33;
{
{ /* Inline kernel#Int#== (var_accept_token,var193) on <var_accept_token:Int> */
var197 = var_accept_token == var193;
var195 = var197;
goto RET_LABEL196;
RET_LABEL196:(void)0;
}
var194 = var195;
}
if (var194){
var198 = NEW_parser_nodes__TKwimplies(&type_parser_nodes__TKwimplies);
{
lexer__TKwimplies__init_tk(var198, var_location); /* Direct call lexer#TKwimplies#init_tk on <var198:TKwimplies>*/
}
var = var198;
goto RET_LABEL;
} else {
}
var199 = 34;
{
{ /* Inline kernel#Int#== (var_accept_token,var199) on <var_accept_token:Int> */
var203 = var_accept_token == var199;
var201 = var203;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
var200 = var201;
}
if (var200){
var204 = NEW_parser_nodes__TKwreturn(&type_parser_nodes__TKwreturn);
{
lexer__TKwreturn__init_tk(var204, var_location); /* Direct call lexer#TKwreturn#init_tk on <var204:TKwreturn>*/
}
var = var204;
goto RET_LABEL;
} else {
}
var205 = 35;
{
{ /* Inline kernel#Int#== (var_accept_token,var205) on <var_accept_token:Int> */
var209 = var_accept_token == var205;
var207 = var209;
goto RET_LABEL208;
RET_LABEL208:(void)0;
}
var206 = var207;
}
if (var206){
var210 = NEW_parser_nodes__TKwcontinue(&type_parser_nodes__TKwcontinue);
{
lexer__TKwcontinue__init_tk(var210, var_location); /* Direct call lexer#TKwcontinue#init_tk on <var210:TKwcontinue>*/
}
var = var210;
goto RET_LABEL;
} else {
}
var211 = 36;
{
{ /* Inline kernel#Int#== (var_accept_token,var211) on <var_accept_token:Int> */
var215 = var_accept_token == var211;
var213 = var215;
goto RET_LABEL214;
RET_LABEL214:(void)0;
}
var212 = var213;
}
if (var212){
var216 = NEW_parser_nodes__TKwbreak(&type_parser_nodes__TKwbreak);
{
lexer__TKwbreak__init_tk(var216, var_location); /* Direct call lexer#TKwbreak#init_tk on <var216:TKwbreak>*/
}
var = var216;
goto RET_LABEL;
} else {
}
var217 = 37;
{
{ /* Inline kernel#Int#== (var_accept_token,var217) on <var_accept_token:Int> */
var221 = var_accept_token == var217;
var219 = var221;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
var218 = var219;
}
if (var218){
var222 = NEW_parser_nodes__TKwabort(&type_parser_nodes__TKwabort);
{
lexer__TKwabort__init_tk(var222, var_location); /* Direct call lexer#TKwabort#init_tk on <var222:TKwabort>*/
}
var = var222;
goto RET_LABEL;
} else {
}
var223 = 38;
{
{ /* Inline kernel#Int#== (var_accept_token,var223) on <var_accept_token:Int> */
var227 = var_accept_token == var223;
var225 = var227;
goto RET_LABEL226;
RET_LABEL226:(void)0;
}
var224 = var225;
}
if (var224){
var228 = NEW_parser_nodes__TKwassert(&type_parser_nodes__TKwassert);
{
lexer__TKwassert__init_tk(var228, var_location); /* Direct call lexer#TKwassert#init_tk on <var228:TKwassert>*/
}
var = var228;
goto RET_LABEL;
} else {
}
var229 = 39;
{
{ /* Inline kernel#Int#== (var_accept_token,var229) on <var_accept_token:Int> */
var233 = var_accept_token == var229;
var231 = var233;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
var230 = var231;
}
if (var230){
var234 = NEW_parser_nodes__TKwnew(&type_parser_nodes__TKwnew);
{
lexer__TKwnew__init_tk(var234, var_location); /* Direct call lexer#TKwnew#init_tk on <var234:TKwnew>*/
}
var = var234;
goto RET_LABEL;
} else {
}
var235 = 40;
{
{ /* Inline kernel#Int#== (var_accept_token,var235) on <var_accept_token:Int> */
var239 = var_accept_token == var235;
var237 = var239;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
var236 = var237;
}
if (var236){
var240 = NEW_parser_nodes__TKwisa(&type_parser_nodes__TKwisa);
{
lexer__TKwisa__init_tk(var240, var_location); /* Direct call lexer#TKwisa#init_tk on <var240:TKwisa>*/
}
var = var240;
goto RET_LABEL;
} else {
}
var241 = 41;
{
{ /* Inline kernel#Int#== (var_accept_token,var241) on <var_accept_token:Int> */
var245 = var_accept_token == var241;
var243 = var245;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
var242 = var243;
}
if (var242){
var246 = NEW_parser_nodes__TKwonce(&type_parser_nodes__TKwonce);
{
lexer__TKwonce__init_tk(var246, var_location); /* Direct call lexer#TKwonce#init_tk on <var246:TKwonce>*/
}
var = var246;
goto RET_LABEL;
} else {
}
var247 = 42;
{
{ /* Inline kernel#Int#== (var_accept_token,var247) on <var_accept_token:Int> */
var251 = var_accept_token == var247;
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
var248 = var249;
}
if (var248){
var252 = NEW_parser_nodes__TKwsuper(&type_parser_nodes__TKwsuper);
{
lexer__TKwsuper__init_tk(var252, var_location); /* Direct call lexer#TKwsuper#init_tk on <var252:TKwsuper>*/
}
var = var252;
goto RET_LABEL;
} else {
}
var253 = 43;
{
{ /* Inline kernel#Int#== (var_accept_token,var253) on <var_accept_token:Int> */
var257 = var_accept_token == var253;
var255 = var257;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
var254 = var255;
}
if (var254){
var258 = NEW_parser_nodes__TKwself(&type_parser_nodes__TKwself);
{
lexer__TKwself__init_tk(var258, var_location); /* Direct call lexer#TKwself#init_tk on <var258:TKwself>*/
}
var = var258;
goto RET_LABEL;
} else {
}
var259 = 44;
{
{ /* Inline kernel#Int#== (var_accept_token,var259) on <var_accept_token:Int> */
var263 = var_accept_token == var259;
var261 = var263;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
var260 = var261;
}
if (var260){
var264 = NEW_parser_nodes__TKwtrue(&type_parser_nodes__TKwtrue);
{
lexer__TKwtrue__init_tk(var264, var_location); /* Direct call lexer#TKwtrue#init_tk on <var264:TKwtrue>*/
}
var = var264;
goto RET_LABEL;
} else {
}
var265 = 45;
{
{ /* Inline kernel#Int#== (var_accept_token,var265) on <var_accept_token:Int> */
var269 = var_accept_token == var265;
var267 = var269;
goto RET_LABEL268;
RET_LABEL268:(void)0;
}
var266 = var267;
}
if (var266){
var270 = NEW_parser_nodes__TKwfalse(&type_parser_nodes__TKwfalse);
{
lexer__TKwfalse__init_tk(var270, var_location); /* Direct call lexer#TKwfalse#init_tk on <var270:TKwfalse>*/
}
var = var270;
goto RET_LABEL;
} else {
}
var271 = 46;
{
{ /* Inline kernel#Int#== (var_accept_token,var271) on <var_accept_token:Int> */
var275 = var_accept_token == var271;
var273 = var275;
goto RET_LABEL274;
RET_LABEL274:(void)0;
}
var272 = var273;
}
if (var272){
var276 = NEW_parser_nodes__TKwnull(&type_parser_nodes__TKwnull);
{
lexer__TKwnull__init_tk(var276, var_location); /* Direct call lexer#TKwnull#init_tk on <var276:TKwnull>*/
}
var = var276;
goto RET_LABEL;
} else {
}
var277 = 47;
{
{ /* Inline kernel#Int#== (var_accept_token,var277) on <var_accept_token:Int> */
var281 = var_accept_token == var277;
var279 = var281;
goto RET_LABEL280;
RET_LABEL280:(void)0;
}
var278 = var279;
}
if (var278){
var282 = NEW_parser_nodes__TKwas(&type_parser_nodes__TKwas);
{
lexer__TKwas__init_tk(var282, var_location); /* Direct call lexer#TKwas#init_tk on <var282:TKwas>*/
}
var = var282;
goto RET_LABEL;
} else {
}
var283 = 48;
{
{ /* Inline kernel#Int#== (var_accept_token,var283) on <var_accept_token:Int> */
var287 = var_accept_token == var283;
var285 = var287;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
var284 = var285;
}
if (var284){
var288 = NEW_parser_nodes__TKwnullable(&type_parser_nodes__TKwnullable);
{
lexer__TKwnullable__init_tk(var288, var_location); /* Direct call lexer#TKwnullable#init_tk on <var288:TKwnullable>*/
}
var = var288;
goto RET_LABEL;
} else {
}
var289 = 49;
{
{ /* Inline kernel#Int#== (var_accept_token,var289) on <var_accept_token:Int> */
var293 = var_accept_token == var289;
var291 = var293;
goto RET_LABEL292;
RET_LABEL292:(void)0;
}
var290 = var291;
}
if (var290){
var294 = NEW_parser_nodes__TKwisset(&type_parser_nodes__TKwisset);
{
lexer__TKwisset__init_tk(var294, var_location); /* Direct call lexer#TKwisset#init_tk on <var294:TKwisset>*/
}
var = var294;
goto RET_LABEL;
} else {
}
var295 = 50;
{
{ /* Inline kernel#Int#== (var_accept_token,var295) on <var_accept_token:Int> */
var299 = var_accept_token == var295;
var297 = var299;
goto RET_LABEL298;
RET_LABEL298:(void)0;
}
var296 = var297;
}
if (var296){
var300 = NEW_parser_nodes__TKwlabel(&type_parser_nodes__TKwlabel);
{
lexer__TKwlabel__init_tk(var300, var_location); /* Direct call lexer#TKwlabel#init_tk on <var300:TKwlabel>*/
}
var = var300;
goto RET_LABEL;
} else {
}
var301 = 51;
{
{ /* Inline kernel#Int#== (var_accept_token,var301) on <var_accept_token:Int> */
var305 = var_accept_token == var301;
var303 = var305;
goto RET_LABEL304;
RET_LABEL304:(void)0;
}
var302 = var303;
}
if (var302){
var306 = NEW_parser_nodes__TKwdebug(&type_parser_nodes__TKwdebug);
{
lexer__TKwdebug__init_tk(var306, var_location); /* Direct call lexer#TKwdebug#init_tk on <var306:TKwdebug>*/
}
var = var306;
goto RET_LABEL;
} else {
}
var307 = 52;
{
{ /* Inline kernel#Int#== (var_accept_token,var307) on <var_accept_token:Int> */
var311 = var_accept_token == var307;
var309 = var311;
goto RET_LABEL310;
RET_LABEL310:(void)0;
}
var308 = var309;
}
if (var308){
var312 = NEW_parser_nodes__TOpar(&type_parser_nodes__TOpar);
{
lexer__TOpar__init_tk(var312, var_location); /* Direct call lexer#TOpar#init_tk on <var312:TOpar>*/
}
var = var312;
goto RET_LABEL;
} else {
}
var313 = 53;
{
{ /* Inline kernel#Int#== (var_accept_token,var313) on <var_accept_token:Int> */
var317 = var_accept_token == var313;
var315 = var317;
goto RET_LABEL316;
RET_LABEL316:(void)0;
}
var314 = var315;
}
if (var314){
var318 = NEW_parser_nodes__TCpar(&type_parser_nodes__TCpar);
{
lexer__TCpar__init_tk(var318, var_location); /* Direct call lexer#TCpar#init_tk on <var318:TCpar>*/
}
var = var318;
goto RET_LABEL;
} else {
}
var319 = 54;
{
{ /* Inline kernel#Int#== (var_accept_token,var319) on <var_accept_token:Int> */
var323 = var_accept_token == var319;
var321 = var323;
goto RET_LABEL322;
RET_LABEL322:(void)0;
}
var320 = var321;
}
if (var320){
var324 = NEW_parser_nodes__TObra(&type_parser_nodes__TObra);
{
lexer__TObra__init_tk(var324, var_location); /* Direct call lexer#TObra#init_tk on <var324:TObra>*/
}
var = var324;
goto RET_LABEL;
} else {
}
var325 = 55;
{
{ /* Inline kernel#Int#== (var_accept_token,var325) on <var_accept_token:Int> */
var329 = var_accept_token == var325;
var327 = var329;
goto RET_LABEL328;
RET_LABEL328:(void)0;
}
var326 = var327;
}
if (var326){
var330 = NEW_parser_nodes__TCbra(&type_parser_nodes__TCbra);
{
lexer__TCbra__init_tk(var330, var_location); /* Direct call lexer#TCbra#init_tk on <var330:TCbra>*/
}
var = var330;
goto RET_LABEL;
} else {
}
var331 = 56;
{
{ /* Inline kernel#Int#== (var_accept_token,var331) on <var_accept_token:Int> */
var335 = var_accept_token == var331;
var333 = var335;
goto RET_LABEL334;
RET_LABEL334:(void)0;
}
var332 = var333;
}
if (var332){
var336 = NEW_parser_nodes__TComma(&type_parser_nodes__TComma);
{
lexer__TComma__init_tk(var336, var_location); /* Direct call lexer#TComma#init_tk on <var336:TComma>*/
}
var = var336;
goto RET_LABEL;
} else {
}
var337 = 57;
{
{ /* Inline kernel#Int#== (var_accept_token,var337) on <var_accept_token:Int> */
var341 = var_accept_token == var337;
var339 = var341;
goto RET_LABEL340;
RET_LABEL340:(void)0;
}
var338 = var339;
}
if (var338){
var342 = NEW_parser_nodes__TColumn(&type_parser_nodes__TColumn);
{
lexer__TColumn__init_tk(var342, var_location); /* Direct call lexer#TColumn#init_tk on <var342:TColumn>*/
}
var = var342;
goto RET_LABEL;
} else {
}
var343 = 58;
{
{ /* Inline kernel#Int#== (var_accept_token,var343) on <var_accept_token:Int> */
var347 = var_accept_token == var343;
var345 = var347;
goto RET_LABEL346;
RET_LABEL346:(void)0;
}
var344 = var345;
}
if (var344){
var348 = NEW_parser_nodes__TQuad(&type_parser_nodes__TQuad);
{
lexer__TQuad__init_tk(var348, var_location); /* Direct call lexer#TQuad#init_tk on <var348:TQuad>*/
}
var = var348;
goto RET_LABEL;
} else {
}
var349 = 59;
{
{ /* Inline kernel#Int#== (var_accept_token,var349) on <var_accept_token:Int> */
var353 = var_accept_token == var349;
var351 = var353;
goto RET_LABEL352;
RET_LABEL352:(void)0;
}
var350 = var351;
}
if (var350){
var354 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
{
lexer__TAssign__init_tk(var354, var_location); /* Direct call lexer#TAssign#init_tk on <var354:TAssign>*/
}
var = var354;
goto RET_LABEL;
} else {
}
var355 = 60;
{
{ /* Inline kernel#Int#== (var_accept_token,var355) on <var_accept_token:Int> */
var359 = var_accept_token == var355;
var357 = var359;
goto RET_LABEL358;
RET_LABEL358:(void)0;
}
var356 = var357;
}
if (var356){
var360 = NEW_parser_nodes__TPluseq(&type_parser_nodes__TPluseq);
{
lexer__TPluseq__init_tk(var360, var_location); /* Direct call lexer#TPluseq#init_tk on <var360:TPluseq>*/
}
var = var360;
goto RET_LABEL;
} else {
}
var361 = 61;
{
{ /* Inline kernel#Int#== (var_accept_token,var361) on <var_accept_token:Int> */
var365 = var_accept_token == var361;
var363 = var365;
goto RET_LABEL364;
RET_LABEL364:(void)0;
}
var362 = var363;
}
if (var362){
var366 = NEW_parser_nodes__TMinuseq(&type_parser_nodes__TMinuseq);
{
lexer__TMinuseq__init_tk(var366, var_location); /* Direct call lexer#TMinuseq#init_tk on <var366:TMinuseq>*/
}
var = var366;
goto RET_LABEL;
} else {
}
var367 = 62;
{
{ /* Inline kernel#Int#== (var_accept_token,var367) on <var_accept_token:Int> */
var371 = var_accept_token == var367;
var369 = var371;
goto RET_LABEL370;
RET_LABEL370:(void)0;
}
var368 = var369;
}
if (var368){
var372 = NEW_parser_nodes__TDotdotdot(&type_parser_nodes__TDotdotdot);
{
lexer__TDotdotdot__init_tk(var372, var_location); /* Direct call lexer#TDotdotdot#init_tk on <var372:TDotdotdot>*/
}
var = var372;
goto RET_LABEL;
} else {
}
var373 = 63;
{
{ /* Inline kernel#Int#== (var_accept_token,var373) on <var_accept_token:Int> */
var377 = var_accept_token == var373;
var375 = var377;
goto RET_LABEL376;
RET_LABEL376:(void)0;
}
var374 = var375;
}
if (var374){
var378 = NEW_parser_nodes__TDotdot(&type_parser_nodes__TDotdot);
{
lexer__TDotdot__init_tk(var378, var_location); /* Direct call lexer#TDotdot#init_tk on <var378:TDotdot>*/
}
var = var378;
goto RET_LABEL;
} else {
}
var379 = 64;
{
{ /* Inline kernel#Int#== (var_accept_token,var379) on <var_accept_token:Int> */
var383 = var_accept_token == var379;
var381 = var383;
goto RET_LABEL382;
RET_LABEL382:(void)0;
}
var380 = var381;
}
if (var380){
var384 = NEW_parser_nodes__TDot(&type_parser_nodes__TDot);
{
lexer__TDot__init_tk(var384, var_location); /* Direct call lexer#TDot#init_tk on <var384:TDot>*/
}
var = var384;
goto RET_LABEL;
} else {
}
var385 = 65;
{
{ /* Inline kernel#Int#== (var_accept_token,var385) on <var_accept_token:Int> */
var389 = var_accept_token == var385;
var387 = var389;
goto RET_LABEL388;
RET_LABEL388:(void)0;
}
var386 = var387;
}
if (var386){
var390 = NEW_parser_nodes__TPlus(&type_parser_nodes__TPlus);
{
lexer__TPlus__init_tk(var390, var_location); /* Direct call lexer#TPlus#init_tk on <var390:TPlus>*/
}
var = var390;
goto RET_LABEL;
} else {
}
var391 = 66;
{
{ /* Inline kernel#Int#== (var_accept_token,var391) on <var_accept_token:Int> */
var395 = var_accept_token == var391;
var393 = var395;
goto RET_LABEL394;
RET_LABEL394:(void)0;
}
var392 = var393;
}
if (var392){
var396 = NEW_parser_nodes__TMinus(&type_parser_nodes__TMinus);
{
lexer__TMinus__init_tk(var396, var_location); /* Direct call lexer#TMinus#init_tk on <var396:TMinus>*/
}
var = var396;
goto RET_LABEL;
} else {
}
var397 = 67;
{
{ /* Inline kernel#Int#== (var_accept_token,var397) on <var_accept_token:Int> */
var401 = var_accept_token == var397;
var399 = var401;
goto RET_LABEL400;
RET_LABEL400:(void)0;
}
var398 = var399;
}
if (var398){
var402 = NEW_parser_nodes__TStar(&type_parser_nodes__TStar);
{
lexer__TStar__init_tk(var402, var_location); /* Direct call lexer#TStar#init_tk on <var402:TStar>*/
}
var = var402;
goto RET_LABEL;
} else {
}
var403 = 68;
{
{ /* Inline kernel#Int#== (var_accept_token,var403) on <var_accept_token:Int> */
var407 = var_accept_token == var403;
var405 = var407;
goto RET_LABEL406;
RET_LABEL406:(void)0;
}
var404 = var405;
}
if (var404){
var408 = NEW_parser_nodes__TStarstar(&type_parser_nodes__TStarstar);
{
lexer__TStarstar__init_tk(var408, var_location); /* Direct call lexer#TStarstar#init_tk on <var408:TStarstar>*/
}
var = var408;
goto RET_LABEL;
} else {
}
var409 = 69;
{
{ /* Inline kernel#Int#== (var_accept_token,var409) on <var_accept_token:Int> */
var413 = var_accept_token == var409;
var411 = var413;
goto RET_LABEL412;
RET_LABEL412:(void)0;
}
var410 = var411;
}
if (var410){
var414 = NEW_parser_nodes__TSlash(&type_parser_nodes__TSlash);
{
lexer__TSlash__init_tk(var414, var_location); /* Direct call lexer#TSlash#init_tk on <var414:TSlash>*/
}
var = var414;
goto RET_LABEL;
} else {
}
var415 = 70;
{
{ /* Inline kernel#Int#== (var_accept_token,var415) on <var_accept_token:Int> */
var419 = var_accept_token == var415;
var417 = var419;
goto RET_LABEL418;
RET_LABEL418:(void)0;
}
var416 = var417;
}
if (var416){
var420 = NEW_parser_nodes__TPercent(&type_parser_nodes__TPercent);
{
lexer__TPercent__init_tk(var420, var_location); /* Direct call lexer#TPercent#init_tk on <var420:TPercent>*/
}
var = var420;
goto RET_LABEL;
} else {
}
var421 = 71;
{
{ /* Inline kernel#Int#== (var_accept_token,var421) on <var_accept_token:Int> */
var425 = var_accept_token == var421;
var423 = var425;
goto RET_LABEL424;
RET_LABEL424:(void)0;
}
var422 = var423;
}
if (var422){
var426 = NEW_parser_nodes__TEq(&type_parser_nodes__TEq);
{
lexer__TEq__init_tk(var426, var_location); /* Direct call lexer#TEq#init_tk on <var426:TEq>*/
}
var = var426;
goto RET_LABEL;
} else {
}
var427 = 72;
{
{ /* Inline kernel#Int#== (var_accept_token,var427) on <var_accept_token:Int> */
var431 = var_accept_token == var427;
var429 = var431;
goto RET_LABEL430;
RET_LABEL430:(void)0;
}
var428 = var429;
}
if (var428){
var432 = NEW_parser_nodes__TNe(&type_parser_nodes__TNe);
{
lexer__TNe__init_tk(var432, var_location); /* Direct call lexer#TNe#init_tk on <var432:TNe>*/
}
var = var432;
goto RET_LABEL;
} else {
}
var433 = 73;
{
{ /* Inline kernel#Int#== (var_accept_token,var433) on <var_accept_token:Int> */
var437 = var_accept_token == var433;
var435 = var437;
goto RET_LABEL436;
RET_LABEL436:(void)0;
}
var434 = var435;
}
if (var434){
var438 = NEW_parser_nodes__TLt(&type_parser_nodes__TLt);
{
lexer__TLt__init_tk(var438, var_location); /* Direct call lexer#TLt#init_tk on <var438:TLt>*/
}
var = var438;
goto RET_LABEL;
} else {
}
var439 = 74;
{
{ /* Inline kernel#Int#== (var_accept_token,var439) on <var_accept_token:Int> */
var443 = var_accept_token == var439;
var441 = var443;
goto RET_LABEL442;
RET_LABEL442:(void)0;
}
var440 = var441;
}
if (var440){
var444 = NEW_parser_nodes__TLe(&type_parser_nodes__TLe);
{
lexer__TLe__init_tk(var444, var_location); /* Direct call lexer#TLe#init_tk on <var444:TLe>*/
}
var = var444;
goto RET_LABEL;
} else {
}
var445 = 75;
{
{ /* Inline kernel#Int#== (var_accept_token,var445) on <var_accept_token:Int> */
var449 = var_accept_token == var445;
var447 = var449;
goto RET_LABEL448;
RET_LABEL448:(void)0;
}
var446 = var447;
}
if (var446){
var450 = NEW_parser_nodes__TLl(&type_parser_nodes__TLl);
{
lexer__TLl__init_tk(var450, var_location); /* Direct call lexer#TLl#init_tk on <var450:TLl>*/
}
var = var450;
goto RET_LABEL;
} else {
}
var451 = 76;
{
{ /* Inline kernel#Int#== (var_accept_token,var451) on <var_accept_token:Int> */
var455 = var_accept_token == var451;
var453 = var455;
goto RET_LABEL454;
RET_LABEL454:(void)0;
}
var452 = var453;
}
if (var452){
var456 = NEW_parser_nodes__TGt(&type_parser_nodes__TGt);
{
lexer__TGt__init_tk(var456, var_location); /* Direct call lexer#TGt#init_tk on <var456:TGt>*/
}
var = var456;
goto RET_LABEL;
} else {
}
var457 = 77;
{
{ /* Inline kernel#Int#== (var_accept_token,var457) on <var_accept_token:Int> */
var461 = var_accept_token == var457;
var459 = var461;
goto RET_LABEL460;
RET_LABEL460:(void)0;
}
var458 = var459;
}
if (var458){
var462 = NEW_parser_nodes__TGe(&type_parser_nodes__TGe);
{
lexer__TGe__init_tk(var462, var_location); /* Direct call lexer#TGe#init_tk on <var462:TGe>*/
}
var = var462;
goto RET_LABEL;
} else {
}
var463 = 78;
{
{ /* Inline kernel#Int#== (var_accept_token,var463) on <var_accept_token:Int> */
var467 = var_accept_token == var463;
var465 = var467;
goto RET_LABEL466;
RET_LABEL466:(void)0;
}
var464 = var465;
}
if (var464){
var468 = NEW_parser_nodes__TGg(&type_parser_nodes__TGg);
{
lexer__TGg__init_tk(var468, var_location); /* Direct call lexer#TGg#init_tk on <var468:TGg>*/
}
var = var468;
goto RET_LABEL;
} else {
}
var469 = 79;
{
{ /* Inline kernel#Int#== (var_accept_token,var469) on <var_accept_token:Int> */
var473 = var_accept_token == var469;
var471 = var473;
goto RET_LABEL472;
RET_LABEL472:(void)0;
}
var470 = var471;
}
if (var470){
var474 = NEW_parser_nodes__TStarship(&type_parser_nodes__TStarship);
{
lexer__TStarship__init_tk(var474, var_location); /* Direct call lexer#TStarship#init_tk on <var474:TStarship>*/
}
var = var474;
goto RET_LABEL;
} else {
}
var475 = 80;
{
{ /* Inline kernel#Int#== (var_accept_token,var475) on <var_accept_token:Int> */
var479 = var_accept_token == var475;
var477 = var479;
goto RET_LABEL478;
RET_LABEL478:(void)0;
}
var476 = var477;
}
if (var476){
var480 = NEW_parser_nodes__TBang(&type_parser_nodes__TBang);
{
lexer__TBang__init_tk(var480, var_location); /* Direct call lexer#TBang#init_tk on <var480:TBang>*/
}
var = var480;
goto RET_LABEL;
} else {
}
var481 = 81;
{
{ /* Inline kernel#Int#== (var_accept_token,var481) on <var_accept_token:Int> */
var485 = var_accept_token == var481;
var483 = var485;
goto RET_LABEL484;
RET_LABEL484:(void)0;
}
var482 = var483;
}
if (var482){
var486 = NEW_parser_nodes__TAt(&type_parser_nodes__TAt);
{
lexer__TAt__init_tk(var486, var_location); /* Direct call lexer#TAt#init_tk on <var486:TAt>*/
}
var = var486;
goto RET_LABEL;
} else {
}
var487 = 82;
{
{ /* Inline kernel#Int#== (var_accept_token,var487) on <var_accept_token:Int> */
var491 = var_accept_token == var487;
var489 = var491;
goto RET_LABEL490;
RET_LABEL490:(void)0;
}
var488 = var489;
}
if (var488){
var492 = NEW_parser_nodes__TClassid(&type_parser_nodes__TClassid);
{
lexer__TClassid__init_tk(var492, var_location); /* Direct call lexer#TClassid#init_tk on <var492:TClassid>*/
}
var = var492;
goto RET_LABEL;
} else {
}
var493 = 83;
{
{ /* Inline kernel#Int#== (var_accept_token,var493) on <var_accept_token:Int> */
var497 = var_accept_token == var493;
var495 = var497;
goto RET_LABEL496;
RET_LABEL496:(void)0;
}
var494 = var495;
}
if (var494){
var498 = NEW_parser_nodes__TId(&type_parser_nodes__TId);
{
lexer__TId__init_tk(var498, var_location); /* Direct call lexer#TId#init_tk on <var498:TId>*/
}
var = var498;
goto RET_LABEL;
} else {
}
var499 = 84;
{
{ /* Inline kernel#Int#== (var_accept_token,var499) on <var_accept_token:Int> */
var503 = var_accept_token == var499;
var501 = var503;
goto RET_LABEL502;
RET_LABEL502:(void)0;
}
var500 = var501;
}
if (var500){
var504 = NEW_parser_nodes__TAttrid(&type_parser_nodes__TAttrid);
{
lexer__TAttrid__init_tk(var504, var_location); /* Direct call lexer#TAttrid#init_tk on <var504:TAttrid>*/
}
var = var504;
goto RET_LABEL;
} else {
}
var505 = 85;
{
{ /* Inline kernel#Int#== (var_accept_token,var505) on <var_accept_token:Int> */
var509 = var_accept_token == var505;
var507 = var509;
goto RET_LABEL508;
RET_LABEL508:(void)0;
}
var506 = var507;
}
if (var506){
var510 = NEW_parser_nodes__TNumber(&type_parser_nodes__TNumber);
{
lexer__TNumber__init_tk(var510, var_location); /* Direct call lexer#TNumber#init_tk on <var510:TNumber>*/
}
var = var510;
goto RET_LABEL;
} else {
}
var511 = 86;
{
{ /* Inline kernel#Int#== (var_accept_token,var511) on <var_accept_token:Int> */
var515 = var_accept_token == var511;
var513 = var515;
goto RET_LABEL514;
RET_LABEL514:(void)0;
}
var512 = var513;
}
if (var512){
var516 = NEW_parser_nodes__THexNumber(&type_parser_nodes__THexNumber);
{
lexer__THexNumber__init_tk(var516, var_location); /* Direct call lexer#THexNumber#init_tk on <var516:THexNumber>*/
}
var = var516;
goto RET_LABEL;
} else {
}
var517 = 87;
{
{ /* Inline kernel#Int#== (var_accept_token,var517) on <var_accept_token:Int> */
var521 = var_accept_token == var517;
var519 = var521;
goto RET_LABEL520;
RET_LABEL520:(void)0;
}
var518 = var519;
}
if (var518){
var522 = NEW_parser_nodes__TFloat(&type_parser_nodes__TFloat);
{
lexer__TFloat__init_tk(var522, var_location); /* Direct call lexer#TFloat#init_tk on <var522:TFloat>*/
}
var = var522;
goto RET_LABEL;
} else {
}
var523 = 88;
{
{ /* Inline kernel#Int#== (var_accept_token,var523) on <var_accept_token:Int> */
var527 = var_accept_token == var523;
var525 = var527;
goto RET_LABEL526;
RET_LABEL526:(void)0;
}
var524 = var525;
}
if (var524){
var528 = NEW_parser_nodes__TString(&type_parser_nodes__TString);
{
lexer__TString__init_tk(var528, var_location); /* Direct call lexer#TString#init_tk on <var528:TString>*/
}
var = var528;
goto RET_LABEL;
} else {
}
var529 = 89;
{
{ /* Inline kernel#Int#== (var_accept_token,var529) on <var_accept_token:Int> */
var533 = var_accept_token == var529;
var531 = var533;
goto RET_LABEL532;
RET_LABEL532:(void)0;
}
var530 = var531;
}
if (var530){
var534 = NEW_parser_nodes__TStartString(&type_parser_nodes__TStartString);
{
lexer__TStartString__init_tk(var534, var_location); /* Direct call lexer#TStartString#init_tk on <var534:TStartString>*/
}
var = var534;
goto RET_LABEL;
} else {
}
var535 = 90;
{
{ /* Inline kernel#Int#== (var_accept_token,var535) on <var_accept_token:Int> */
var539 = var_accept_token == var535;
var537 = var539;
goto RET_LABEL538;
RET_LABEL538:(void)0;
}
var536 = var537;
}
if (var536){
var540 = NEW_parser_nodes__TMidString(&type_parser_nodes__TMidString);
{
lexer__TMidString__init_tk(var540, var_location); /* Direct call lexer#TMidString#init_tk on <var540:TMidString>*/
}
var = var540;
goto RET_LABEL;
} else {
}
var541 = 91;
{
{ /* Inline kernel#Int#== (var_accept_token,var541) on <var_accept_token:Int> */
var545 = var_accept_token == var541;
var543 = var545;
goto RET_LABEL544;
RET_LABEL544:(void)0;
}
var542 = var543;
}
if (var542){
var546 = NEW_parser_nodes__TEndString(&type_parser_nodes__TEndString);
{
lexer__TEndString__init_tk(var546, var_location); /* Direct call lexer#TEndString#init_tk on <var546:TEndString>*/
}
var = var546;
goto RET_LABEL;
} else {
}
var547 = 92;
{
{ /* Inline kernel#Int#== (var_accept_token,var547) on <var_accept_token:Int> */
var551 = var_accept_token == var547;
var549 = var551;
goto RET_LABEL550;
RET_LABEL550:(void)0;
}
var548 = var549;
}
if (var548){
var552 = NEW_parser_nodes__TChar(&type_parser_nodes__TChar);
{
lexer__TChar__init_tk(var552, var_location); /* Direct call lexer#TChar#init_tk on <var552:TChar>*/
}
var = var552;
goto RET_LABEL;
} else {
}
var553 = 93;
{
{ /* Inline kernel#Int#== (var_accept_token,var553) on <var_accept_token:Int> */
var557 = var_accept_token == var553;
var555 = var557;
goto RET_LABEL556;
RET_LABEL556:(void)0;
}
var554 = var555;
}
if (var554){
var558 = NEW_parser_nodes__TBadString(&type_parser_nodes__TBadString);
{
lexer__TBadString__init_tk(var558, var_location); /* Direct call lexer#TBadString#init_tk on <var558:TBadString>*/
}
var = var558;
goto RET_LABEL;
} else {
}
var559 = 94;
{
{ /* Inline kernel#Int#== (var_accept_token,var559) on <var_accept_token:Int> */
var563 = var_accept_token == var559;
var561 = var563;
goto RET_LABEL562;
RET_LABEL562:(void)0;
}
var560 = var561;
}
if (var560){
var564 = NEW_parser_nodes__TBadChar(&type_parser_nodes__TBadChar);
{
lexer__TBadChar__init_tk(var564, var_location); /* Direct call lexer#TBadChar#init_tk on <var564:TBadChar>*/
}
var = var564;
goto RET_LABEL;
} else {
}
var565 = 95;
{
{ /* Inline kernel#Int#== (var_accept_token,var565) on <var_accept_token:Int> */
var569 = var_accept_token == var565;
var567 = var569;
goto RET_LABEL568;
RET_LABEL568:(void)0;
}
var566 = var567;
}
if (var566){
var570 = NEW_parser_nodes__TExternCodeSegment(&type_parser_nodes__TExternCodeSegment);
{
lexer__TExternCodeSegment__init_tk(var570, var_location); /* Direct call lexer#TExternCodeSegment#init_tk on <var570:TExternCodeSegment>*/
}
var = var570;
goto RET_LABEL;
} else {
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "parser/lexer.nit", 1445);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method lexer#Lexer#make_token for (self: Object, Int, Location): Token */
val* VIRTUAL_lexer__Lexer__make_token(val* self, long p0, val* p1) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = lexer__Lexer__make_token(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
