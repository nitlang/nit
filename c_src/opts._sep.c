#include "opts._sep.h"
val_t opts___Option___names(val_t  self) {
  struct trace_t trace = {NULL, "opts::Option::names (bin/../lib/opts.nit:16,2--17:35)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_opts___Option____names( self) /*Option::_names*/;
}
val_t opts___Option___helptext(val_t  self) {
  struct trace_t trace = {NULL, "opts::Option::helptext (bin/../lib/opts.nit:22,2--23:32)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_opts___Option____helptext( self) /*Option::_helptext*/;
}
val_t opts___Option___mandatory(val_t  self) {
  struct trace_t trace = {NULL, "opts::Option::mandatory (bin/../lib/opts.nit:25,2--26:40)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_opts___Option____mandatory( self) /*Option::_mandatory*/;
}
void opts___Option___mandatory__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::Option::mandatory= (bin/../lib/opts.nit:25,2--26:40)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_opts___Option____mandatory( self) /*Option::_mandatory*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t opts___Option___context(val_t  self) {
  struct trace_t trace = {NULL, "opts::Option::context (bin/../lib/opts.nit:28,2--29:47)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_opts___Option____context( self) /*Option::_context*/;
}
void opts___Option___context__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::Option::context= (bin/../lib/opts.nit:28,2--29:47)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_opts___Option____context( self) /*Option::_context*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t opts___Option___value(val_t  self) {
  struct trace_t trace = {NULL, "opts::Option::value (bin/../lib/opts.nit:31,2--32:37)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_opts___Option____value( self) /*Option::_value*/;
}
void opts___Option___value__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::Option::value= (bin/../lib/opts.nit:31,2--32:37)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_opts___Option____value( self) /*Option::_value*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t opts___Option___default_value(val_t  self) {
  struct trace_t trace = {NULL, "opts::Option::default_value (bin/../lib/opts.nit:34,2--35:45)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_opts___Option____default_value( self) /*Option::_default_value*/;
}
void opts___Option___default_value__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::Option::default_value= (bin/../lib/opts.nit:34,2--35:45)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_opts___Option____default_value( self) /*Option::_default_value*/ =  param0;
  tracehead = trace.prev;
  return;
}
void opts___Option___init_opt(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "opts::Option::init_opt (bin/../lib/opts.nit:37,2--47:26)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Option].i]) return;
  variable3 = TAG_Bool(( variable2 /*names*/ ==  NIT_NULL /*null*/) || (( variable2 /*names*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable2 /*names*/,COLOR_kernel___Object_____eqeq))( variable2 /*names*/,  NIT_NULL /*null*/) /*Array::==*/)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = NEW_array___Array___init(); /*new Array[String]*/
    ATTR_opts___Option____names( self) /*Option::_names*/ = variable3;
  } else { /*if*/
    variable3 = ((array___Collection___to_a_t)CALL( variable2 /*names*/,COLOR_array___Collection___to_a))( variable2 /*names*/) /*Array::to_a*/;
    ATTR_opts___Option____names( self) /*Option::_names*/ = variable3;
  }
  ATTR_opts___Option____helptext( self) /*Option::_helptext*/ =  variable0 /*help*/;
  ATTR_opts___Option____mandatory( self) /*Option::_mandatory*/ =  TAG_Bool(false);
  ATTR_opts___Option____default_value( self) /*Option::_default_value*/ =  variable1 /*default*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Option].i] = 1;
  tracehead = trace.prev;
  return;
}
void opts___Option___add_aliases(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::Option::add_aliases (bin/../lib/opts.nit:50,2--51:59)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  /* check if p<Array[String] with p:String */
  if (( param0!=NIT_NULL) && !VAL_ISA( param0, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/opts.nit:51,19--34\n"); nit_exit(1); } /*cast Array[String]*/;
  variable0 =  param0;
  variable1 = ATTR_opts___Option____names( self) /*Option::_names*/;
  ((abstract_collection___SimpleCollection___add_all_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add_all))(variable1,  variable0 /*names*/) /*Array::add_all*/;
  tracehead = trace.prev;
  return;
}
val_t opts___Option___to_s(val_t  self) {
  struct trace_t trace = {NULL, "opts::Option::to_s (bin/../lib/opts.nit:53,2--54:35)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((opts___Option___pretty_t)CALL( self,COLOR_opts___Option___pretty))( self,  TAG_Int(2)) /*Option::pretty*/;
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t opts___Option___pretty(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::Option::pretty (bin/../lib/opts.nit:56,2--66:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_string___String___with_native(BOX_NativeString("  "), TAG_Int(2)); /*new String*/
  variable1 = variable2;
  variable2 = ATTR_opts___Option____names( self) /*Option::_names*/;
  variable3 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable2 = ((string___Collection___join_t)CALL(variable2,COLOR_string___Collection___join))(variable2, variable3) /*Array::join*/;
  ((string___String___append_t)CALL( variable1 /*text*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*text*/, variable2) /*String::append*/;
  variable2 = NEW_string___String___with_native(BOX_NativeString("  "), TAG_Int(2)); /*new String*/
  ((string___String___append_t)CALL( variable1 /*text*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*text*/, variable2) /*String::append*/;
  variable3 = ((array___AbstractArray___length_t)CALL( variable1 /*text*/,COLOR_abstract_collection___Collection___length))( variable1 /*text*/) /*String::length*/;
  variable3 = TAG_Int(UNTAG_Int( variable0 /*off*/)-UNTAG_Int(variable3));
  variable2 = variable3;
  variable3 = TAG_Bool(UNTAG_Int( variable2 /*rest*/)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = NEW_string___String___with_native(BOX_NativeString(" "), TAG_Int(1)); /*new String*/
    variable3 = ((string___String_____star_t)CALL(variable3,COLOR_string___String_____star))(variable3,  variable2 /*rest*/) /*String::**/;
    ((string___String___append_t)CALL( variable1 /*text*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*text*/, variable3) /*String::append*/;
  }
  variable3 = ((opts___Option___helptext_t)CALL( self,COLOR_opts___Option___helptext))( self) /*Option::helptext*/;
  ((string___String___append_t)CALL( variable1 /*text*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*text*/, variable3) /*String::append*/;
  variable1 =  variable1 /*text*/;
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t opts___Option___pretty_default(val_t  self) {
  struct trace_t trace = {NULL, "opts::Option::pretty_default (bin/../lib/opts.nit:69,2--74:11)"};
  val_t variable0;
    val_t variable1;
    val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((opts___Option___default_value_t)CALL( self,COLOR_opts___Option___default_value))( self) /*Option::default_value*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*Object::==*/)))))));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = NEW_string___String___init(); /*new String*/
    variable1 = NEW_string___String___with_native(BOX_NativeString(" ("), TAG_Int(2)); /*new String*/
    variable2 = variable1;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable2) /*String::append*/;
    variable3 = ((opts___Option___default_value_t)CALL( self,COLOR_opts___Option___default_value))( self) /*Option::default_value*/;
    variable4 = variable3;
    variable4 = ((string___String___to_s_t)CALL(variable4,COLOR_string___Object___to_s))(variable4) /*String::to_s*/;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable4) /*String::append*/;
    variable5 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable6) /*String::append*/;
    goto return_label4;
  }
  variable0 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  goto return_label4;
  return_label4: while(false);
  tracehead = trace.prev;
  return variable0;
}
void opts___Option___read_param(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::Option::read_param (bin/../lib/opts.nit:77,2--78:46)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method read_param called (bin/../lib/opts.nit:77,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
void opts___OptionText___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "opts::OptionText::init (bin/../lib/opts.nit:83,2--48)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionText].i]) return;
  ((opts___Option___init_opt_t)CALL( self,COLOR_opts___Option___init_opt))( self,  variable0 /*text*/,  NIT_NULL /*null*/,  NIT_NULL /*null*/, init_table /*YYY*/) /*OptionText::init_opt*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionText].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t opts___OptionText___pretty(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::OptionText::pretty (bin/../lib/opts.nit:85,2--38)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((opts___OptionText___to_s_t)CALL( self,COLOR_string___Object___to_s))( self) /*OptionText::to_s*/;
  goto return_label6;
  return_label6: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t opts___OptionText___to_s(val_t  self) {
  struct trace_t trace = {NULL, "opts::OptionText::to_s (bin/../lib/opts.nit:87,2--35)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((opts___Option___helptext_t)CALL( self,COLOR_opts___Option___helptext))( self) /*OptionText::helptext*/;
  goto return_label7;
  return_label7: while(false);
  tracehead = trace.prev;
  return variable0;
}
void opts___OptionBool___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "opts::OptionBool::init (bin/../lib/opts.nit:94,2--68)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  /* check if p<Array[String] with p:String */
  if (( param1!=NIT_NULL) && !VAL_ISA( param1, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/opts.nit:94,21--36\n"); nit_exit(1); } /*cast Array[String]*/;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionBool].i]) return;
  ((opts___Option___init_opt_t)CALL( self,COLOR_opts___Option___init_opt))( self,  variable0 /*help*/,  TAG_Bool(false),  variable1 /*names*/, init_table /*YYY*/) /*OptionBool::init_opt*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionBool].i] = 1;
  tracehead = trace.prev;
  return;
}
void opts___OptionBool___read_param(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::OptionBool::read_param (bin/../lib/opts.nit:96,2--42)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((opts___Option___value__eq_t)CALL( self,COLOR_opts___Option___value__eq))( self,  TAG_Bool(true)) /*OptionBool::value=*/;
  tracehead = trace.prev;
  return;
}
val_t opts___OptionParameter___convert(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::OptionParameter::convert (bin/../lib/opts.nit:102,2--43)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method convert called (bin/../lib/opts.nit:102,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void opts___OptionParameter___read_param(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::OptionParameter::read_param (bin/../lib/opts.nit:104,2--109:10)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((opts___Option___context_t)CALL( self,COLOR_opts___Option___context))( self) /*OptionParameter::context*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*OptionContext::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: bin/../lib/opts.nit:106,3--24\n"); nit_exit(1);}
  variable1 = ((abstract_collection___Iterator___is_ok_t)CALL( variable0 /*it*/,COLOR_abstract_collection___Iterator___is_ok))( variable0 /*it*/) /*Iterator::is_ok*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((abstract_collection___Iterator___item_t)CALL( variable0 /*it*/,COLOR_abstract_collection___Iterator___item))( variable0 /*it*/) /*Iterator::item*/;
    variable1 = ((opts___OptionParameter___convert_t)CALL( self,COLOR_opts___OptionParameter___convert))( self, variable1) /*OptionParameter::convert*/;
    ((opts___Option___value__eq_t)CALL( self,COLOR_opts___Option___value__eq))( self, variable1) /*OptionParameter::value=*/;
    ((abstract_collection___Iterator___next_t)CALL( variable0 /*it*/,COLOR_abstract_collection___Iterator___next))( variable0 /*it*/) /*Iterator::next*/;
  }
  tracehead = trace.prev;
  return;
}
void opts___OptionParameter___init_opt(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "opts::OptionParameter::init_opt (bin/../lib/opts.nit:115,2--32)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionParameter].i]) return;
  ((opts___Option___init_opt_t)CALL( self,COLOR_opts___Option___init_opt))( self,  param0,  param1,  param2, init_table /*YYY*/) /*Option::init_opt*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionParameter].i] = 1;
  tracehead = trace.prev;
  return;
}
void opts___OptionString___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "opts::OptionString::init (bin/../lib/opts.nit:122,2--67)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  /* check if p<Array[String] with p:String */
  if (( param1!=NIT_NULL) && !VAL_ISA( param1, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/opts.nit:122,21--36\n"); nit_exit(1); } /*cast Array[String]*/;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionString].i]) return;
  ((opts___OptionParameter___init_opt_t)CALL( self,COLOR_opts___OptionParameter___init_opt))( self,  variable0 /*help*/,  NIT_NULL /*null*/,  variable1 /*names*/, init_table /*YYY*/) /*OptionString::init_opt*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionString].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t opts___OptionString___convert(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::OptionString::convert (bin/../lib/opts.nit:124,2--38)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  variable0 /*str*/;
  goto return_label13;
  return_label13: while(false);
  tracehead = trace.prev;
  return variable1;
}
void opts___OptionEnum___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table) {
  struct trace_t trace = {NULL, "opts::OptionEnum::init (bin/../lib/opts.nit:132,2--136:55)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  val_t variable7;
  val_t variable8;
  val_t variable9;
  val_t variable10;
  val_t variable11;
  val_t variable12;
  val_t variable13;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  /* check if p<Array[String] with p:String */
  if (( param3!=NIT_NULL) && !VAL_ISA( param3, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/opts.nit:132,56--71\n"); nit_exit(1); } /*cast Array[String]*/;
  variable3 =  param3;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionEnum].i]) return;
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*enum*/ ==  NIT_NULL /*null*/) || (( variable0 /*enum*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable0 /*enum*/,COLOR_kernel___Object_____eqeq))( variable0 /*enum*/,  NIT_NULL /*null*/) /*Array::==*/)))));
  variable5 = variable4;
  if (UNTAG_Bool(variable5)) { /* and */
    variable5 = ((array___AbstractArray___length_t)CALL( variable0 /*enum*/,COLOR_abstract_collection___Collection___length))( variable0 /*enum*/) /*Array::length*/;
    variable5 = TAG_Bool(UNTAG_Int(variable5)>UNTAG_Int( TAG_Int(0)));
  }
  variable4 = variable5;
  if (!UNTAG_Bool(variable4)) { fprintf(stderr, "Assert failed: bin/../lib/opts.nit:134,3--41\n"); nit_exit(1);}
  variable4 = ((array___Collection___to_a_t)CALL( variable0 /*enum*/,COLOR_array___Collection___to_a))( variable0 /*enum*/) /*Array::to_a*/;
  ATTR_opts___OptionEnum____enum( self) /*OptionEnum::_enum*/ = variable4;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 =  variable1 /*help*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString(" <"), TAG_Int(2)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
  variable10 = ((string___Collection___join_t)CALL( variable0 /*enum*/,COLOR_string___Collection___join))( variable0 /*enum*/, variable10) /*Array::join*/;
  variable11 = variable10;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
  variable12 = NEW_string___String___with_native(BOX_NativeString(">"), TAG_Int(1)); /*new String*/
  variable13 = variable12;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
  ((opts___OptionParameter___init_opt_t)CALL( self,COLOR_opts___OptionParameter___init_opt))( self, variable4,  variable2 /*default*/,  variable3 /*names*/, init_table /*YYY*/) /*OptionEnum::init_opt*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionEnum].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t opts___OptionEnum___convert(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::OptionEnum::convert (bin/../lib/opts.nit:139,2--142:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_opts___OptionEnum____enum( self) /*OptionEnum::_enum*/;
  variable2 = ((array___AbstractArray___index_of_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___index_of))(variable2,  variable0 /*str*/) /*Array::index_of*/;
  variable1 = variable2;
  variable1 =  variable1 /*id*/;
  goto return_label15;
  return_label15: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t opts___OptionEnum___pretty_default(val_t  self) {
  struct trace_t trace = {NULL, "opts::OptionEnum::pretty_default (bin/../lib/opts.nit:145,2--150:12)"};
  val_t variable0;
    val_t variable1;
    val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
    val_t variable7;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((opts___Option___default_value_t)CALL( self,COLOR_opts___Option___default_value))( self) /*OptionEnum::default_value*/;
  variable0 = TAG_Bool((variable0)!=( NIT_NULL /*null*/));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = NEW_string___String___init(); /*new String*/
    variable1 = NEW_string___String___with_native(BOX_NativeString(" ("), TAG_Int(2)); /*new String*/
    variable2 = variable1;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable2) /*String::append*/;
    variable3 = ATTR_opts___OptionEnum____enum( self) /*OptionEnum::_enum*/;
    variable4 = ((opts___Option___default_value_t)CALL( self,COLOR_opts___Option___default_value))( self) /*OptionEnum::default_value*/;
    variable5 = variable4;
    variable6 = TAG_Bool(UNTAG_Int( variable5 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable7 = variable6;
    if (UNTAG_Bool(variable7)) { /* and */
      variable7 = variable3;
      variable7 = ATTR_array___AbstractArray____length(variable7) /*Array::_length*/;
      variable7 = TAG_Bool(UNTAG_Int( variable5 /*index*/)<UNTAG_Int(variable7));
    }
    variable6 = variable7;
    if (!UNTAG_Bool(variable6)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable6 = variable3;
    variable6 = ATTR_array___Array____items(variable6) /*Array::_items*/;
    variable6 = UNBOX_NativeArray(variable6)[UNTAG_Int( variable5 /*index*/)];
    goto return_label17;
    return_label17: while(false);
    variable3 = variable6;
    variable4 = variable3;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable4) /*String::append*/;
    variable5 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable6) /*String::append*/;
    goto return_label16;
  } else { /*if*/
    variable0 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    goto return_label16;
  }
  return_label16: while(false);
  tracehead = trace.prev;
  return variable0;
}
void opts___OptionInt___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "opts::OptionInt::init (bin/../lib/opts.nit:159,2--84)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  /* check if p<Array[String] with p:String */
  if (( param2!=NIT_NULL) && !VAL_ISA( param2, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/opts.nit:159,35--50\n"); nit_exit(1); } /*cast Array[String]*/;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionInt].i]) return;
  ((opts___OptionParameter___init_opt_t)CALL( self,COLOR_opts___OptionParameter___init_opt))( self,  variable0 /*help*/,  variable1 /*default*/,  variable2 /*names*/, init_table /*YYY*/) /*OptionInt::init_opt*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionInt].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t opts___OptionInt___convert(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::OptionInt::convert (bin/../lib/opts.nit:161,2--43)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((string___String___to_i_t)CALL( variable0 /*str*/,COLOR_string___String___to_i))( variable0 /*str*/) /*String::to_i*/;
  goto return_label19;
  return_label19: while(false);
  tracehead = trace.prev;
  return variable1;
}
void opts___OptionArray___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "opts::OptionArray::init (bin/../lib/opts.nit:168,2--171:31)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  /* check if p<Array[String] with p:String */
  if (( param1!=NIT_NULL) && !VAL_ISA( param1, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/opts.nit:168,21--36\n"); nit_exit(1); } /*cast Array[String]*/;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionArray].i]) return;
  variable2 = NEW_array___Array___init(); /*new Array[String]*/
  ATTR_opts___OptionArray____values( self) /*OptionArray::_values*/ = variable2;
  variable2 = ATTR_opts___OptionArray____values( self) /*OptionArray::_values*/;
  ((opts___OptionParameter___init_opt_t)CALL( self,COLOR_opts___OptionParameter___init_opt))( self,  variable0 /*help*/, variable2,  variable1 /*names*/, init_table /*YYY*/) /*OptionArray::init_opt*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionArray].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t opts___OptionArray___convert(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::OptionArray::convert (bin/../lib/opts.nit:175,2--178:16)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_opts___OptionArray____values( self) /*OptionArray::_values*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1,  variable0 /*str*/) /*Array::add*/;
  variable1 = ATTR_opts___OptionArray____values( self) /*OptionArray::_values*/;
  goto return_label21;
  return_label21: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t opts___OptionContext___options(val_t  self) {
  struct trace_t trace = {NULL, "opts::OptionContext::options (bin/../lib/opts.nit:183,2--37)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_opts___OptionContext____options( self) /*OptionContext::_options*/;
}
val_t opts___OptionContext___rest(val_t  self) {
  struct trace_t trace = {NULL, "opts::OptionContext::rest (bin/../lib/opts.nit:184,2--34)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_opts___OptionContext____rest( self) /*OptionContext::_rest*/;
}
void opts___OptionContext___usage(val_t  self) {
  struct trace_t trace = {NULL, "opts::OptionContext::usage (bin/../lib/opts.nit:188,2--200:22)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
    val_t variable4;
      val_t variable5;
      val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(1);
  variable1 = ATTR_opts___OptionContext____options( self) /*OptionContext::_options*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 =  TAG_Int(3);
    variable4 = ((opts___Option___names_t)CALL( variable2 /*i*/,COLOR_opts___Option___names))( variable2 /*i*/) /*Option::names*/;
    variable4 = ((array___AbstractArray___iterator_t)CALL(variable4,COLOR_abstract_collection___Collection___iterator))(variable4) /*Array::iterator*/;
    while (true) { /*for*/
      variable5 = ((array___ArrayIterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable5)) break; /*for*/
      variable5 = ((array___ArrayIterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*ArrayIterator::item*/;
      variable6 = ((array___AbstractArray___length_t)CALL( variable5 /*n*/,COLOR_abstract_collection___Collection___length))( variable5 /*n*/) /*String::length*/;
      variable6 = TAG_Int(UNTAG_Int(variable6)+UNTAG_Int( TAG_Int(2)));
      variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int(variable6)) /*l*/;
      continue_24: while(0);
      ((array___ArrayIterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*ArrayIterator::next*/;
    }
    break_24: while(0);
    variable4 = TAG_Bool(UNTAG_Int( variable0 /*lmax*/)<UNTAG_Int( variable3 /*l*/));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable0 =  variable3 /*l*/ /*lmax=*/;
    }
    continue_23: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_23: while(0);
  variable1 = ATTR_opts___OptionContext____options( self) /*OptionContext::_options*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((opts___Option___pretty_t)CALL( variable2 /*i*/,COLOR_opts___Option___pretty))( variable2 /*i*/,  variable0 /*lmax*/) /*Option::pretty*/;
    ((file___Object___print_t)CALL( self,COLOR_file___Object___print))( self, variable3) /*OptionContext::print*/;
    continue_25: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_25: while(0);
  tracehead = trace.prev;
  return;
}
void opts___OptionContext___parse(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::OptionContext::parse (bin/../lib/opts.nit:204,2--208:17)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((abstract_collection___Collection___iterator_t)CALL( variable0 /*argv*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*argv*/) /*Collection::iterator*/;
  variable1 = variable2;
  ((opts___OptionContext___parse_intern_t)CALL( self,COLOR_opts___OptionContext___parse_intern))( self,  variable1 /*it*/) /*OptionContext::parse_intern*/;
  tracehead = trace.prev;
  return;
}
void opts___OptionContext___parse_intern(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::OptionContext::parse_intern (bin/../lib/opts.nit:211,2--230:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
        val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Bool(true);
  ((opts___OptionContext___build_t)CALL( self,COLOR_opts___OptionContext___build))( self) /*OptionContext::build*/;
  variable3 = ATTR_opts___OptionContext____rest( self) /*OptionContext::_rest*/;
  variable2 = variable3;
  while (true) { /*while*/
    variable3 =  variable1 /*parseargs*/;
    if (UNTAG_Bool(variable3)) { /* and */
      variable3 = ((abstract_collection___Iterator___is_ok_t)CALL( variable0 /*it*/,COLOR_abstract_collection___Iterator___is_ok))( variable0 /*it*/) /*Iterator::is_ok*/;
    }
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable4 = ((abstract_collection___Iterator___item_t)CALL( variable0 /*it*/,COLOR_abstract_collection___Iterator___item))( variable0 /*it*/) /*Iterator::item*/;
    variable3 = variable4;
    variable4 = NEW_string___String___with_native(BOX_NativeString("--"), TAG_Int(2)); /*new String*/
    variable4 = TAG_Bool(( variable3 /*str*/ == variable4) || (( variable3 /*str*/ != NIT_NULL) && UNTAG_Bool(((string___String_____eqeq_t)CALL( variable3 /*str*/,COLOR_kernel___Object_____eqeq))( variable3 /*str*/, variable4) /*String::==*/)));
    if (UNTAG_Bool(variable4)) { /*if*/
      ((abstract_collection___Iterator___next_t)CALL( variable0 /*it*/,COLOR_abstract_collection___Iterator___next))( variable0 /*it*/) /*Iterator::next*/;
      variable4 = ((array___Iterator___to_a_t)CALL( variable0 /*it*/,COLOR_array___Iterator___to_a))( variable0 /*it*/) /*Iterator::to_a*/;
      ((abstract_collection___SimpleCollection___add_all_t)CALL( variable2 /*rest*/,COLOR_abstract_collection___SimpleCollection___add_all))( variable2 /*rest*/, variable4) /*Array::add_all*/;
      variable1 =  TAG_Bool(false) /*parseargs=*/;
    } else { /*if*/
      variable4 = ATTR_opts___OptionContext____optmap( self) /*OptionContext::_optmap*/;
      variable4 = ((abstract_collection___Map___has_key_t)CALL(variable4,COLOR_abstract_collection___Map___has_key))(variable4,  variable3 /*str*/) /*Map::has_key*/;
      if (UNTAG_Bool(variable4)) { /*if*/
        variable5 = ATTR_opts___OptionContext____optmap( self) /*OptionContext::_optmap*/;
        variable5 = ((abstract_collection___Map_____bra_t)CALL(variable5,COLOR_abstract_collection___Map_____bra))(variable5,  variable3 /*str*/) /*Map::[]*/;
        variable4 = variable5;
        ((abstract_collection___Iterator___next_t)CALL( variable0 /*it*/,COLOR_abstract_collection___Iterator___next))( variable0 /*it*/) /*Iterator::next*/;
        ((opts___Option___read_param_t)CALL( variable4 /*opt*/,COLOR_opts___Option___read_param))( variable4 /*opt*/,  variable0 /*it*/) /*Option::read_param*/;
      } else { /*if*/
        variable4 = ((abstract_collection___Iterator___item_t)CALL( variable0 /*it*/,COLOR_abstract_collection___Iterator___item))( variable0 /*it*/) /*Iterator::item*/;
        ((array___AbstractArray___add_t)CALL( variable2 /*rest*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*rest*/, variable4) /*Array::add*/;
        ((abstract_collection___Iterator___next_t)CALL( variable0 /*it*/,COLOR_abstract_collection___Iterator___next))( variable0 /*it*/) /*Iterator::next*/;
      }
    }
    continue_28: while(0);
  }
  break_28: while(0);
  tracehead = trace.prev;
  return;
}
void opts___OptionContext___add_option(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "opts::OptionContext::add_option (bin/../lib/opts.nit:236,2--240:19)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  /* check if p<Array[Option] with p:Option */
  if (( param0!=NIT_NULL) && !VAL_ISA( param0, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/opts.nit:236,18--32\n"); nit_exit(1); } /*cast Array[Option]*/;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___iterator_t)CALL( variable0 /*opts*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*opts*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    ((opts___Option___context__eq_t)CALL( variable2 /*opt*/,COLOR_opts___Option___context__eq))( variable2 /*opt*/,  self) /*Option::context=*/;
    variable3 = ATTR_opts___OptionContext____options( self) /*OptionContext::_options*/;
    ((array___AbstractArray___add_t)CALL(variable3,COLOR_abstract_collection___SimpleCollection___add))(variable3,  variable2 /*opt*/) /*Array::add*/;
    continue_30: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_30: while(0);
  tracehead = trace.prev;
  return;
}
void opts___OptionContext___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "opts::OptionContext::init (bin/../lib/opts.nit:244,2--248:26)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionContext].i]) return;
  variable0 = NEW_array___Array___init(); /*new Array[Option]*/
  ATTR_opts___OptionContext____options( self) /*OptionContext::_options*/ = variable0;
  variable0 = NEW_hash___HashMap___init(); /*new HashMap[String, Option]*/
  ATTR_opts___OptionContext____optmap( self) /*OptionContext::_optmap*/ = variable0;
  variable0 = NEW_array___Array___init(); /*new Array[String]*/
  ATTR_opts___OptionContext____rest( self) /*OptionContext::_rest*/ = variable0;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OptionContext].i] = 1;
  tracehead = trace.prev;
  return;
}
void opts___OptionContext___build(val_t  self) {
  struct trace_t trace = {NULL, "opts::OptionContext::build (bin/../lib/opts.nit:251,2--255:18)"};
  val_t variable0;
    val_t variable1;
    val_t variable2;
      val_t variable3;
      val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_opts___OptionContext____options( self) /*OptionContext::_options*/;
  variable0 = ((array___AbstractArray___iterator_t)CALL(variable0,COLOR_abstract_collection___Collection___iterator))(variable0) /*Array::iterator*/;
  while (true) { /*for*/
    variable1 = ((array___ArrayIterator___is_ok_t)CALL(variable0,COLOR_abstract_collection___Iterator___is_ok))(variable0) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable1)) break; /*for*/
    variable1 = ((array___ArrayIterator___item_t)CALL(variable0,COLOR_abstract_collection___Iterator___item))(variable0) /*ArrayIterator::item*/;
    variable2 = ((opts___Option___names_t)CALL( variable1 /*o*/,COLOR_opts___Option___names))( variable1 /*o*/) /*Option::names*/;
    variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
    while (true) { /*for*/
      variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable3)) break; /*for*/
      variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
      variable4 = ATTR_opts___OptionContext____optmap( self) /*OptionContext::_optmap*/;
      ((abstract_collection___Map_____braeq_t)CALL(variable4,COLOR_abstract_collection___Map_____braeq))(variable4,  variable3 /*n*/,  variable1 /*o*/) /*Map::[]=*/;
      continue_34: while(0);
      ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
    }
    break_34: while(0);
    continue_33: while(0);
    ((array___ArrayIterator___next_t)CALL(variable0,COLOR_abstract_collection___Iterator___next))(variable0) /*ArrayIterator::next*/;
  }
  break_33: while(0);
  tracehead = trace.prev;
  return;
}
