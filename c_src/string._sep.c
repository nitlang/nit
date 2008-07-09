#include "string._sep.h"
val_t string___String_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::[] (bin/../lib/standard//string.nit:31,2--44)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_string___String____items( self) /*String::_items*/;
  variable1 = TAG_Char(UNBOX_NativeString(variable1)[UNTAG_Int( variable0 /*index*/)]);
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable1;
}
void string___String_____braeq(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string::String::[]= (bin/../lib/standard//string.nit:33,2--40:22)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable2 = TAG_Bool(( variable0 /*index*/)==(variable2));
  if (UNTAG_Bool(variable2)) { /*if*/
    ((string___String___add_t)CALL( self,COLOR_abstract_collection___SimpleCollection___add))( self,  variable1 /*item*/) /*String::add*/;
    goto return_label1;
  }
  variable2 = TAG_Bool(UNTAG_Int( variable0 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
    variable3 = TAG_Bool(UNTAG_Int( variable0 /*index*/)<UNTAG_Int(variable3));
  }
  variable2 = variable3;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: bin/../lib/standard//string.nit:39,3--38\n"); nit_exit(1);}
  variable2 = ATTR_string___String____items( self) /*String::_items*/;
  UNBOX_NativeString(variable2)[UNTAG_Int( variable0 /*index*/)]=UNTAG_Char( variable1 /*item*/);
  return_label1: while(false);
  tracehead = trace.prev;
  return;
}
void string___String___add(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::add (bin/../lib/standard//string.nit:43,2--47:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_string___String____capacity( self) /*String::_capacity*/;
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable1 = TAG_Bool(UNTAG_Int(variable1)<=UNTAG_Int(variable2));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(5)));
    ((string___String___enlarge_t)CALL( self,COLOR_array___AbstractArray___enlarge))( self, variable1) /*String::enlarge*/;
  }
  variable1 = ATTR_string___String____items( self) /*String::_items*/;
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  UNBOX_NativeString(variable1)[UNTAG_Int(variable2)]=UNTAG_Char( variable0 /*c*/);
  ATTR_array___AbstractArray____length( self) /*String::_length*/ = TAG_Int(UNTAG_Int(ATTR_array___AbstractArray____length( self) /*String::_length*/)+UNTAG_Int( TAG_Int(1)));
  tracehead = trace.prev;
  return;
}
void string___String___enlarge(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::enlarge (bin/../lib/standard//string.nit:50,2--58:15)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_string___String____capacity( self) /*String::_capacity*/;
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable0 /*cap*/)<=UNTAG_Int( variable1 /*c*/));
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label3;
  }
  while (true) { /*while*/
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*c*/)<=UNTAG_Int( variable0 /*cap*/));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable2 = TAG_Int(UNTAG_Int( variable1 /*c*/)*UNTAG_Int( TAG_Int(2)));
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(2)));
    variable1 = variable2 /*c=*/;
    continue_4: while(0);
  }
  break_4: while(0);
  variable3 = BOX_NativeString((char*)malloc((UNTAG_Int( variable1 /*c*/) * sizeof(char))));
  variable2 = variable3;
  variable3 = ATTR_string___String____items( self) /*String::_items*/;
  variable4 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  (void)memcpy(UNBOX_NativeString( variable2 /*a*/)+UNTAG_Int( TAG_Int(0)), UNBOX_NativeString(variable3)+UNTAG_Int( TAG_Int(0)), UNTAG_Int(variable4));
  ATTR_string___String____items( self) /*String::_items*/ =  variable2 /*a*/;
  ATTR_string___String____capacity( self) /*String::_capacity*/ =  variable1 /*c*/;
  return_label3: while(false);
  tracehead = trace.prev;
  return;
}
void string___String___append(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::append (bin/../lib/standard//string.nit:61,2--69:8)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(( variable0 /*s*/==NIT_NULL) || VAL_ISA( variable0 /*s*/, COLOR_String, ID_String)) /*cast String*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable2 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
    variable1 = variable2;
    variable2 = ATTR_string___String____capacity( self) /*String::_capacity*/;
    variable3 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
    variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( variable1 /*sl*/));
    variable2 = TAG_Bool(UNTAG_Int(variable2)<UNTAG_Int(variable3));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
      variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( variable1 /*sl*/));
      ((string___String___enlarge_t)CALL( self,COLOR_array___AbstractArray___enlarge))( self, variable2) /*String::enlarge*/;
    }
    variable2 = ((string___String___items_t)CALL( variable0 /*s*/,COLOR_string___String___items))( variable0 /*s*/) /*String::items*/;
    variable3 = ATTR_string___String____items( self) /*String::_items*/;
    variable4 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
    (void)memcpy(UNBOX_NativeString(variable3)+UNTAG_Int(variable4), UNBOX_NativeString(variable2)+UNTAG_Int( TAG_Int(0)), UNTAG_Int( variable1 /*sl*/));
    ATTR_array___AbstractArray____length( self) /*String::_length*/ = TAG_Int(UNTAG_Int(ATTR_array___AbstractArray____length( self) /*String::_length*/)+UNTAG_Int( variable1 /*sl*/));
  } else { /*if*/
    ((string___String___append_t)CALL( self,COLOR_SUPER_string___String___append))( self,  param0) /*super String::append*/;
  }
  tracehead = trace.prev;
  return;
}
val_t string___String_____plus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::+ (bin/../lib/standard//string.nit:73,2--79:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable3 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int(variable3));
  variable3 = NEW_string___String___with_capacity(variable2); /*new String*/
  variable2 = variable3;
  variable1 = variable2;
  ((string___String___append_t)CALL( variable1 /*r*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*r*/,  self) /*String::append*/;
  ((string___String___append_t)CALL( variable1 /*r*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*r*/,  variable0 /*s*/) /*String::append*/;
  variable1 =  variable1 /*r*/;
  goto return_label6;
  return_label6: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string___String_____star(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::* (bin/../lib/standard//string.nit:82,2--91:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(UNTAG_Int( variable0 /*i*/)>=UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: bin/../lib/standard//string.nit:85,3--15\n"); nit_exit(1);}
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable2 = TAG_Int(UNTAG_Int(variable2)*UNTAG_Int( variable0 /*i*/));
  variable3 = NEW_string___String___with_capacity(variable2); /*new String*/
  variable2 = variable3;
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = TAG_Bool(UNTAG_Int( variable0 /*i*/)>UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    ((string___String___append_t)CALL( variable1 /*r*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*r*/,  self) /*String::append*/;
    variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_8: while(0);
  }
  break_8: while(0);
  variable1 =  variable1 /*r*/;
  goto return_label7;
  return_label7: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string___String___to_s(val_t  self) {
  struct trace_t trace = {NULL, "string::String::to_s (bin/../lib/standard//string.nit:94,2--95:55)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_string___String___from( self); /*new String*/
  goto return_label9;
  return_label9: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___String___to_i(val_t  self) {
  struct trace_t trace = {NULL, "string::String::to_i (bin/../lib/standard//string.nit:97,2--101:24)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((string___String___to_cstring_t)CALL( self,COLOR_string___String___to_cstring))( self) /*String::to_cstring*/;
  variable0 = TAG_Int(atoi(UNBOX_NativeString(variable0)));
  goto return_label10;
  return_label10: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___String___to_hex(val_t  self) {
  struct trace_t trace = {NULL, "string::String::to_hex (bin/../lib/standard//string.nit:104,2--105:35)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((string___String___a_to_t)CALL( self,COLOR_string___String___a_to))( self,  TAG_Int(16)) /*String::a_to*/;
  goto return_label11;
  return_label11: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___String___a_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::a_to (bin/../lib/standard//string.nit:107,2--131:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  variable2 =  TAG_Bool(false);
  variable3 = ((array___AbstractArray___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*String::iterator*/;
  while (true) { /*for*/
    variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
    variable6 = ((kernel___Char___to_i_t)CALL( variable4 /*c*/,COLOR_kernel___Char___to_i))( variable4 /*c*/) /*Char::to_i*/;
    variable5 = variable6;
    variable6 = TAG_Bool(UNTAG_Int( variable5 /*v*/)>UNTAG_Int( variable0 /*base*/));
    if (UNTAG_Bool(variable6)) { /*if*/
      if (UNTAG_Bool( variable2 /*neg*/)) { /*if*/
        variable6 = TAG_Int(-UNTAG_Int( variable1 /*i*/));
        variable1 = variable6;
        goto return_label12;
      } else { /*if*/
        variable1 =  variable1 /*i*/;
        goto return_label12;
      }
    } else { /*if*/
      variable6 = TAG_Bool(UNTAG_Int( variable5 /*v*/)<UNTAG_Int( TAG_Int(0)));
      if (UNTAG_Bool(variable6)) { /*if*/
        variable2 =  TAG_Bool(true) /*neg=*/;
      } else { /*if*/
        variable6 = TAG_Int(UNTAG_Int( variable1 /*i*/)*UNTAG_Int( variable0 /*base*/));
        variable6 = TAG_Int(UNTAG_Int(variable6)+UNTAG_Int( variable5 /*v*/));
        variable1 = variable6 /*i=*/;
      }
    }
    continue_13: while(0);
    ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
  }
  break_13: while(0);
  if (UNTAG_Bool( variable2 /*neg*/)) { /*if*/
    variable3 = TAG_Int(-UNTAG_Int( variable1 /*i*/));
    variable1 = variable3;
    goto return_label12;
  } else { /*if*/
    variable1 =  variable1 /*i*/;
    goto return_label12;
  }
  return_label12: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string___String___to_cstring(val_t  self) {
  struct trace_t trace = {NULL, "string::String::to_cstring (bin/../lib/standard//string.nit:135,2--140:15)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  ((string___String_____braeq_t)CALL( self,COLOR_abstract_collection___Map_____braeq))( self, variable0,  TAG_Char('\0')) /*String::[]=*/;
  ATTR_array___AbstractArray____length( self) /*String::_length*/ = TAG_Int(UNTAG_Int(ATTR_array___AbstractArray____length( self) /*String::_length*/)-UNTAG_Int( TAG_Int(1)));
  variable0 = ATTR_string___String____items( self) /*String::_items*/;
  goto return_label14;
  return_label14: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___String___substring(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string::String::substring (bin/../lib/standard//string.nit:143,2--163:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*count*/)>=UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: bin/../lib/standard//string.nit:151,3--19\n"); nit_exit(1);}
  variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( variable0 /*from*/)) /*count*/;
  variable2 = TAG_Bool(UNTAG_Int( variable0 /*from*/)<UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable0 =  TAG_Int(0) /*from=*/;
  }
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*count*/)>UNTAG_Int(variable2));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
    variable1 = variable2 /*count=*/;
  }
  variable2 = TAG_Bool(UNTAG_Int( variable0 /*from*/)<UNTAG_Int( variable1 /*count*/));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable3 = TAG_Int(UNTAG_Int( variable1 /*count*/)-UNTAG_Int( variable0 /*from*/));
    variable4 = NEW_string___String___with_capacity(variable3); /*new String*/
    variable3 = variable4;
    variable2 = variable3;
    while (true) { /*while*/
      variable3 = TAG_Bool(UNTAG_Int( variable0 /*from*/)<UNTAG_Int( variable1 /*count*/));
      if (!UNTAG_Bool(variable3)) break; /* while*/
      variable3 = ATTR_string___String____items( self) /*String::_items*/;
      variable3 = TAG_Char(UNBOX_NativeString(variable3)[UNTAG_Int( variable0 /*from*/)]);
      ((array___AbstractArray___push_t)CALL( variable2 /*r*/,COLOR_abstract_collection___IndexedCollection___push))( variable2 /*r*/, variable3) /*String::push*/;
      variable0 = TAG_Int(UNTAG_Int(variable0)+UNTAG_Int( TAG_Int(1))) /*from*/;
      continue_16: while(0);
    }
    break_16: while(0);
    variable2 =  variable2 /*r*/;
    goto return_label15;
  } else { /*if*/
    variable2 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    goto return_label15;
  }
  return_label15: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t string___String___substring_from(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::substring_from (bin/../lib/standard//string.nit:167,2--175:38)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable1 = TAG_Bool(UNTAG_Int( variable0 /*from*/)<UNTAG_Int(variable1));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: bin/../lib/standard//string.nit:174,3--22\n"); nit_exit(1);}
  variable1 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( variable0 /*from*/));
  variable1 = ((string___String___substring_t)CALL( self,COLOR_string___String___substring))( self,  variable0 /*from*/, variable1) /*String::substring*/;
  goto return_label17;
  return_label17: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string___String___has_substring(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string::String::has_substring (bin/../lib/standard//string.nit:178,2--194:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  val_t variable7;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((array___AbstractArray___length_t)CALL( variable0 /*str*/,COLOR_abstract_collection___Collection___length))( variable0 /*str*/) /*String::length*/;
  variable3 = TAG_Int(UNTAG_Int(variable3)-UNTAG_Int( TAG_Int(1)));
  variable2 = variable3;
  variable4 = TAG_Int(UNTAG_Int( variable1 /*pos*/)+UNTAG_Int( variable2 /*itsindex*/));
  variable3 = variable4;
  variable5 = ATTR_string___String____items( self) /*String::_items*/;
  variable4 = variable5;
  variable6 = ATTR_string___String____items( variable0 /*str*/) /*String::_items*/;
  variable5 = variable6;
  variable6 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable6 = TAG_Bool(UNTAG_Int( variable3 /*myindex*/)>UNTAG_Int(variable6));
  variable7 = variable6;
  if (!UNTAG_Bool(variable7)) { /* or */
    variable7 = TAG_Bool(UNTAG_Int( variable2 /*itsindex*/)>UNTAG_Int( variable3 /*myindex*/));
  }
  variable6 = variable7;
  if (UNTAG_Bool(variable6)) { /*if*/
    variable2 =  TAG_Bool(false);
    goto return_label18;
  }
  while (true) { /*while*/
    variable6 = TAG_Bool(UNTAG_Int( variable2 /*itsindex*/)>UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable6)) break; /* while*/
    variable6 = TAG_Char(UNBOX_NativeString( variable4 /*myitems*/)[UNTAG_Int( variable3 /*myindex*/)]);
    variable7 = TAG_Char(UNBOX_NativeString( variable5 /*itsitems*/)[UNTAG_Int( variable2 /*itsindex*/)]);
    variable6 = TAG_Bool((variable6)!=(variable7));
    if (UNTAG_Bool(variable6)) { /*if*/
      variable2 =  TAG_Bool(false);
      goto return_label18;
    }
    variable3 = TAG_Int(UNTAG_Int(variable3)-UNTAG_Int( variable3 /*myindex*/)) /*myindex*/;
    variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int( variable2 /*itsindex*/)) /*itsindex*/;
    continue_19: while(0);
  }
  break_19: while(0);
  variable2 =  TAG_Bool(true);
  goto return_label18;
  return_label18: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t string___String___has_prefix(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::has_prefix (bin/../lib/standard//string.nit:197,2--201:71)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((string___String___has_substring_t)CALL( self,COLOR_string___String___has_substring))( self,  variable0 /*prefix*/,  TAG_Int(0)) /*String::has_substring*/;
  goto return_label20;
  return_label20: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string___String___has_suffix(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::has_suffix (bin/../lib/standard//string.nit:203,2--207:93)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable2 = ((array___AbstractArray___length_t)CALL( variable0 /*suffix*/,COLOR_abstract_collection___Collection___length))( variable0 /*suffix*/) /*String::length*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int(variable2));
  variable1 = ((string___String___has_substring_t)CALL( self,COLOR_string___String___has_substring))( self,  variable0 /*suffix*/, variable1) /*String::has_substring*/;
  goto return_label21;
  return_label21: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string___String_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::< (bin/../lib/standard//string.nit:209,2--227:15)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  variable3 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable2 = variable3;
  variable4 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  variable3 = variable4;
  while (true) { /*while*/
    variable4 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int( variable2 /*l1*/));
    variable5 = variable4;
    if (UNTAG_Bool(variable5)) { /* and */
      variable5 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int( variable3 /*l2*/));
    }
    variable4 = variable5;
    if (!UNTAG_Bool(variable4)) break; /* while*/
    variable5 = ((string___String_____bra_t)CALL( self,COLOR_abstract_collection___Map_____bra))( self,  variable1 /*i*/) /*String::[]*/;
    variable5 = TAG_Int((unsigned char)UNTAG_Char(variable5));
    variable4 = variable5;
    variable6 = ((string___String_____bra_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Map_____bra))( variable0 /*s*/,  variable1 /*i*/) /*String::[]*/;
    variable6 = TAG_Int((unsigned char)UNTAG_Char(variable6));
    variable5 = variable6;
    variable6 = TAG_Bool(UNTAG_Int( variable4 /*c1*/)<UNTAG_Int( variable5 /*c2*/));
    if (UNTAG_Bool(variable6)) { /*if*/
      variable1 =  TAG_Bool(true);
      goto return_label22;
    } else { /*if*/
      variable6 = TAG_Bool(UNTAG_Int( variable5 /*c2*/)<UNTAG_Int( variable4 /*c1*/));
      if (UNTAG_Bool(variable6)) { /*if*/
        variable1 =  TAG_Bool(false);
        goto return_label22;
      }
    }
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_23: while(0);
  }
  break_23: while(0);
  variable4 = TAG_Bool(UNTAG_Int( variable2 /*l1*/)<UNTAG_Int( variable3 /*l2*/));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable1 =  TAG_Bool(true);
    goto return_label22;
  } else { /*if*/
    variable1 =  TAG_Bool(false);
    goto return_label22;
  }
  return_label22: while(false);
  tracehead = trace.prev;
  return variable1;
}
void string___String___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "string::String::init (bin/../lib/standard//string.nit:231,2--234:17)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i]) return;
  ((string___String___with_capacity_t)CALL( self,COLOR_string___String___with_capacity))( self,  TAG_Int(5), init_table /*YYY*/) /*String::with_capacity*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i] = 1;
  tracehead = trace.prev;
  return;
}
void string___String___from(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "string::String::from (bin/../lib/standard//string.nit:237,2--242:39)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i]) return;
  variable1 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1)));
  ATTR_string___String____capacity( self) /*String::_capacity*/ = variable1;
  variable1 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  ATTR_array___AbstractArray____length( self) /*String::_length*/ = variable1;
  variable1 = ATTR_string___String____capacity( self) /*String::_capacity*/;
  variable1 = BOX_NativeString((char*)malloc((UNTAG_Int(variable1) * sizeof(char))));
  ATTR_string___String____items( self) /*String::_items*/ = variable1;
  variable1 = ((string___String___items_t)CALL( variable0 /*s*/,COLOR_string___String___items))( variable0 /*s*/) /*String::items*/;
  variable2 = ATTR_string___String____items( self) /*String::_items*/;
  variable3 = ATTR_array___AbstractArray____length( self) /*String::_length*/;
  (void)memcpy(UNBOX_NativeString(variable2)+UNTAG_Int( TAG_Int(0)), UNBOX_NativeString(variable1)+UNTAG_Int( TAG_Int(0)), UNTAG_Int(variable3));
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i] = 1;
  tracehead = trace.prev;
  return;
}
void string___String___with_capacity(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "string::String::with_capacity (bin/../lib/standard//string.nit:245,2--252:13)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i]) return;
  variable1 = TAG_Bool(UNTAG_Int( variable0 /*cap*/)>=UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: bin/../lib/standard//string.nit:248,3--17\n"); nit_exit(1);}
  variable1 = BOX_NativeString((char*)malloc((UNTAG_Int( variable0 /*cap*/) * sizeof(char))));
  ATTR_string___String____items( self) /*String::_items*/ = variable1;
  ATTR_string___String____capacity( self) /*String::_capacity*/ =  variable0 /*cap*/;
  ATTR_array___AbstractArray____length( self) /*String::_length*/ =  TAG_Int(0);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i] = 1;
  tracehead = trace.prev;
  return;
}
void string___String___with_native(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "string::String::with_native (bin/../lib/standard//string.nit:255,2--261:16)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i]) return;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*size*/)>=UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: bin/../lib/standard//string.nit:258,3--18\n"); nit_exit(1);}
  ATTR_string___String____items( self) /*String::_items*/ =  variable0 /*nat*/;
  ATTR_string___String____capacity( self) /*String::_capacity*/ =  variable1 /*size*/;
  ATTR_array___AbstractArray____length( self) /*String::_length*/ =  variable1 /*size*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i] = 1;
  tracehead = trace.prev;
  return;
}
void string___String___from_cstring(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "string::String::from_cstring (bin/../lib/standard//string.nit:264,2--270:16)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i]) return;
  variable2 = ((string___NativeString___cstring_length_t)CALL( variable0 /*str*/,COLOR_string___NativeString___cstring_length))( variable0 /*str*/) /*NativeString::cstring_length*/;
  variable1 = variable2;
  ATTR_string___String____items( self) /*String::_items*/ =  variable0 /*str*/;
  variable2 = TAG_Int(UNTAG_Int( variable1 /*size*/)+UNTAG_Int( TAG_Int(1)));
  ATTR_string___String____capacity( self) /*String::_capacity*/ = variable2;
  ATTR_array___AbstractArray____length( self) /*String::_length*/ =  variable1 /*size*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i] = 1;
  tracehead = trace.prev;
  return;
}
void string___String___filled_with(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "string::String::filled_with (bin/../lib/standard//string.nit:273,2--282:17)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i]) return;
  ((string___String___with_capacity_t)CALL( self,COLOR_string___String___with_capacity))( self,  variable1 /*count*/, init_table /*YYY*/) /*String::with_capacity*/;
  variable2 =  TAG_Int(0);
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable2 /*i*/)<UNTAG_Int( variable1 /*count*/));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = ATTR_string___String____items( self) /*String::_items*/;
    UNBOX_NativeString(variable3)[UNTAG_Int( variable2 /*i*/)]=UNTAG_Char( variable0 /*c*/);
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_30: while(0);
  }
  break_30: while(0);
  ATTR_array___AbstractArray____length( self) /*String::_length*/ =  variable1 /*count*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_String].i] = 1;
  tracehead = trace.prev;
  return;
}
void string___String___output(val_t  self) {
  struct trace_t trace = {NULL, "string::String::output (bin/../lib/standard//string.nit:285,2--290:9)"};
  val_t variable0;
    val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(0);
  while (true) { /*while*/
    variable1 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
    variable1 = TAG_Bool(UNTAG_Int( variable0 /*i*/)<UNTAG_Int(variable1));
    if (!UNTAG_Bool(variable1)) break; /* while*/
    variable1 = ATTR_string___String____items( self) /*String::_items*/;
    variable1 = TAG_Char(UNBOX_NativeString(variable1)[UNTAG_Int( variable0 /*i*/)]);
    printf("%c", (unsigned char)UNTAG_Char(variable1));
    variable0 = TAG_Int(UNTAG_Int(variable0)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_32: while(0);
  }
  break_32: while(0);
  tracehead = trace.prev;
  return;
}
val_t string___String_____eqeq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::String::== (bin/../lib/standard//string.nit:294,2--307:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(( variable0 /*o*/==NIT_NULL) || VAL_ISA( variable0 /*o*/, COLOR_String, ID_String)) /*cast String*/;
  variable1 =  TAG_Bool(!UNTAG_Bool(variable1));
  if (!UNTAG_Bool(variable1)) { /* or */
    variable1 = TAG_Bool(IS_EQUAL_NN( variable0 /*o*/, NIT_NULL /*null*/));
  }
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  TAG_Bool(false);
    goto return_label33;
  }
  variable1 = TAG_Bool(( variable0 /*o*/==NIT_NULL) || VAL_ISA( variable0 /*o*/, COLOR_String, ID_String)) /*cast String*/;
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: bin/../lib/standard//string.nit:297,3--21\n"); nit_exit(1);}
  variable2 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable1 = variable2;
  variable2 = ((array___AbstractArray___length_t)CALL( variable0 /*o*/,COLOR_abstract_collection___Collection___length))( variable0 /*o*/) /*String::length*/;
  variable2 = TAG_Bool((variable2)!=( variable1 /*l*/));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  TAG_Bool(false);
    goto return_label33;
  }
  variable2 =  TAG_Int(0);
  variable4 = ATTR_string___String____items( self) /*String::_items*/;
  variable3 = variable4;
  variable5 = ATTR_string___String____items( variable0 /*o*/) /*String::_items*/;
  variable4 = variable5;
  while (true) { /*while*/
    variable5 = TAG_Bool(UNTAG_Int( variable2 /*i*/)<UNTAG_Int( variable1 /*l*/));
    if (!UNTAG_Bool(variable5)) break; /* while*/
    variable5 = TAG_Char(UNBOX_NativeString( variable3 /*it*/)[UNTAG_Int( variable2 /*i*/)]);
    variable6 = TAG_Char(UNBOX_NativeString( variable4 /*oit*/)[UNTAG_Int( variable2 /*i*/)]);
    variable5 = TAG_Bool((variable5)!=(variable6));
    if (UNTAG_Bool(variable5)) { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label33;
    }
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_34: while(0);
  }
  break_34: while(0);
  variable1 =  TAG_Bool(true);
  goto return_label33;
  return_label33: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string___String___to_upper(val_t  self) {
  struct trace_t trace = {NULL, "string::String::to_upper (bin/../lib/standard//string.nit:310,2--315:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable2 = NEW_string___String___with_capacity(variable1); /*new String*/
  variable1 = variable2;
  variable0 = variable1;
  variable1 = ((array___AbstractArray___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*String::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((kernel___Char___to_upper_t)CALL( variable2 /*i*/,COLOR_kernel___Char___to_upper))( variable2 /*i*/) /*Char::to_upper*/;
    ((string___String___add_t)CALL( variable0 /*s*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*s*/, variable3) /*String::add*/;
    continue_36: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_36: while(0);
  variable0 =  variable0 /*s*/;
  goto return_label35;
  return_label35: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___String___to_lower(val_t  self) {
  struct trace_t trace = {NULL, "string::String::to_lower (bin/../lib/standard//string.nit:318,2--323:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ((array___AbstractArray___length_t)CALL( self,COLOR_abstract_collection___Collection___length))( self) /*String::length*/;
  variable2 = NEW_string___String___with_capacity(variable1); /*new String*/
  variable1 = variable2;
  variable0 = variable1;
  variable1 = ((array___AbstractArray___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*String::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((kernel___Char___to_lower_t)CALL( variable2 /*i*/,COLOR_kernel___Char___to_lower))( variable2 /*i*/) /*Char::to_lower*/;
    ((string___String___add_t)CALL( variable0 /*s*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*s*/, variable3) /*String::add*/;
    continue_38: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_38: while(0);
  variable0 =  variable0 /*s*/;
  goto return_label37;
  return_label37: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___String___items(val_t  self) {
  struct trace_t trace = {NULL, "string::String::items (bin/../lib/standard//string.nit:326,2--43)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_string___String____items( self) /*String::_items*/;
}
val_t string___String___capacity(val_t  self) {
  struct trace_t trace = {NULL, "string::String::capacity (bin/../lib/standard//string.nit:327,2--37)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_string___String____capacity( self) /*String::_capacity*/;
}
val_t string___Object___to_s(val_t  self) {
  struct trace_t trace = {NULL, "string::Object::to_s (bin/../lib/standard//string.nit:337,2--338:36)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((string___Object___inspect_t)CALL( self,COLOR_string___Object___inspect))( self) /*Object::inspect*/;
  goto return_label39;
  return_label39: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___Object___inspect(val_t  self) {
  struct trace_t trace = {NULL, "string::Object::inspect (bin/../lib/standard//string.nit:340,2--346:10)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ((string___Object___inspect_head_t)CALL( self,COLOR_string___Object___inspect_head))( self) /*Object::inspect_head*/;
  variable0 = variable1;
  ((string___String___add_t)CALL( variable0 /*r*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*r*/,  TAG_Char('>')) /*String::add*/;
  variable0 =  variable0 /*r*/;
  goto return_label40;
  return_label40: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___Object___inspect_head(val_t  self) {
  struct trace_t trace = {NULL, "string::Object::inspect_head (bin/../lib/standard//string.nit:349,2--353:30)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_string___String___init(); /*new String*/
  variable1 = NEW_string___String___with_native(BOX_NativeString("<"), TAG_Int(1)); /*new String*/
  variable2 = variable1;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable2) /*String::append*/;
  variable3 = TAG_Int((int) self);
  variable3 = ((string___Int___to_hex_t)CALL(variable3,COLOR_string___Int___to_hex))(variable3) /*Int::to_hex*/;
  variable4 = variable3;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable4) /*String::append*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable6) /*String::append*/;
  goto return_label41;
  return_label41: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___Object___args(val_t  self) {
  struct trace_t trace = {NULL, "string::Object::args (bin/../lib/standard//string.nit:356,2--358:17)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = (G_sys);
  variable0 = ((string___Sys___args_t)CALL(variable0,COLOR_string___Object___args))(variable0) /*Sys::args*/;
  goto return_label42;
  return_label42: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___Bool___to_s(val_t  self) {
  struct trace_t trace = {NULL, "string::Bool::to_s (bin/../lib/standard//string.nit:363,2--368:22)"};
  val_t variable0;
    static val_t once_value_variable0_44; static int once_bool_variable0_44;
    static val_t once_value_variable0_45; static int once_bool_variable0_45;
  trace.prev = tracehead; tracehead = &trace;
  if (UNTAG_Bool( self)) { /*if*/
    if (once_bool_variable0_44) variable0 = once_value_variable0_44;
    else {
      variable0 = NEW_string___String___with_native(BOX_NativeString("true"), TAG_Int(4)); /*new String*/
      once_value_variable0_44 = variable0;
      once_bool_variable0_44 = true;
    }
    goto return_label43;
  } else { /*if*/
    if (once_bool_variable0_45) variable0 = once_value_variable0_45;
    else {
      variable0 = NEW_string___String___with_native(BOX_NativeString("false"), TAG_Int(5)); /*new String*/
      once_value_variable0_45 = variable0;
      once_bool_variable0_45 = true;
    }
    goto return_label43;
  }
  return_label43: while(false);
  tracehead = trace.prev;
  return variable0;
}
void string___Int___fill_string(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "string::Int::fill_string (bin/../lib/standard//string.nit:374,2--394:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 = TAG_Int((int)0) /*decl variable n*/;
  variable4 = TAG_Bool(UNTAG_Int( self)<UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = TAG_Int(-UNTAG_Int( self));
    variable3 = variable4 /*n=*/;
    ((string___String_____braeq_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*s*/,  TAG_Int(0),  TAG_Char('-')) /*String::[]=*/;
  } else { /*if*/
    variable4 = TAG_Bool(( self)==( TAG_Int(0)));
    if (UNTAG_Bool(variable4)) { /*if*/
      ((string___String_____braeq_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*s*/,  TAG_Int(0),  TAG_Char('0')) /*String::[]=*/;
      goto return_label46;
    } else { /*if*/
      variable3 =  self /*n=*/;
    }
  }
  variable5 = ((kernel___Int___digit_count_t)CALL( self,COLOR_kernel___Int___digit_count))( self,  variable1 /*base*/) /*Int::digit_count*/;
  variable5 = TAG_Int(UNTAG_Int(variable5)-UNTAG_Int( TAG_Int(1)));
  variable4 = variable5;
  while (true) { /*while*/
    variable5 = TAG_Bool(UNTAG_Int( variable4 /*pos*/)>=UNTAG_Int( TAG_Int(0)));
    variable6 = variable5;
    if (UNTAG_Bool(variable6)) { /* and */
      variable6 = TAG_Bool(UNTAG_Int( variable3 /*n*/)>UNTAG_Int( TAG_Int(0)));
    }
    variable5 = variable6;
    if (!UNTAG_Bool(variable5)) break; /* while*/
    variable5 = TAG_Int(UNTAG_Int( variable3 /*n*/)%UNTAG_Int( variable1 /*base*/));
    variable5 = ((kernel___Int___to_c_t)CALL(variable5,COLOR_kernel___Int___to_c))(variable5) /*Int::to_c*/;
    ((string___String_____braeq_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*s*/,  variable4 /*pos*/, variable5) /*String::[]=*/;
    variable5 = TAG_Int(UNTAG_Int( variable3 /*n*/)/UNTAG_Int( variable1 /*base*/));
    variable3 = variable5 /*n=*/;
    variable4 = TAG_Int(UNTAG_Int(variable4)-UNTAG_Int( TAG_Int(1))) /*pos*/;
    continue_47: while(0);
  }
  break_47: while(0);
  return_label46: while(false);
  tracehead = trace.prev;
  return;
}
val_t string___Int___to_s(val_t  self) {
  struct trace_t trace = {NULL, "string::Int::to_s (bin/../lib/standard//string.nit:398,2--399:42)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((string___Int___to_base_t)CALL( self,COLOR_string___Int___to_base))( self,  TAG_Int(10),  TAG_Bool(true)) /*Int::to_base*/;
  goto return_label48;
  return_label48: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___Int___to_hex(val_t  self) {
  struct trace_t trace = {NULL, "string::Int::to_hex (bin/../lib/standard//string.nit:401,2--402:47)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((string___Int___to_base_t)CALL( self,COLOR_string___Int___to_base))( self,  TAG_Int(16),  TAG_Bool(false)) /*Int::to_base*/;
  goto return_label49;
  return_label49: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___Int___to_base(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string::Int::to_base (bin/../lib/standard//string.nit:404,2--410:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((kernel___Int___digit_count_t)CALL( self,COLOR_kernel___Int___digit_count))( self,  variable0 /*base*/) /*Int::digit_count*/;
  variable2 = variable3;
  variable4 = NEW_string___String___filled_with( TAG_Char(' '),  variable2 /*l*/); /*new String*/
  variable3 = variable4;
  ((string___Int___fill_string_t)CALL( self,COLOR_string___Int___fill_string))( self,  variable3 /*s*/,  variable0 /*base*/,  variable1 /*signed*/) /*Int::fill_string*/;
  variable2 =  variable3 /*s*/;
  goto return_label50;
  return_label50: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t string___Float___to_s(val_t  self) {
  struct trace_t trace = {NULL, "string::Float::to_s (bin/../lib/standard//string.nit:415,2--41)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((string___Float___to_precision_t)CALL( self,COLOR_string___Float___to_precision))( self,  TAG_Int(6)) /*Float::to_precision*/;
  goto return_label51;
  return_label51: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___Float___to_precision(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::Float::to_precision (bin/../lib/standard//string.nit:417,2--429:18)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(( variable0 /*nb*/)==( TAG_Int(0)));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = TAG_Int((int)UNBOX_Float( self));
    variable1 = ((string___Int___to_s_t)CALL(variable1,COLOR_string___Object___to_s))(variable1) /*Int::to_s*/;
    goto return_label52;
  }
  variable2 = TAG_Int((int)UNBOX_Float( self));
  variable1 = variable2;
  variable3 = BOX_Float(1.0);
  variable2 = variable3;
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable0 /*nb*/)>UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = BOX_Float(10.0);
    variable3 = BOX_Float(UNBOX_Float( variable2 /*dec*/)*UNBOX_Float(variable3));
    variable2 = variable3 /*dec=*/;
    variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int( TAG_Int(1))) /*nb*/;
    continue_53: while(0);
  }
  break_53: while(0);
  variable4 = BOX_Float((float)UNTAG_Int( variable1 /*i*/));
  variable4 = BOX_Float(UNBOX_Float( self)-UNBOX_Float(variable4));
  variable4 = BOX_Float(UNBOX_Float(variable4)*UNBOX_Float( variable2 /*dec*/));
  variable4 = TAG_Int((int)UNBOX_Float(variable4));
  variable3 = variable4;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 =  variable1 /*i*/;
  variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
  variable10 =  variable3 /*d*/;
  variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable12 = variable11;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
  variable1 = variable4;
  goto return_label52;
  return_label52: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string___Char___to_s(val_t  self) {
  struct trace_t trace = {NULL, "string::Char::to_s (bin/../lib/standard//string.nit:434,2--438:10)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_string___String___with_capacity( TAG_Int(1)); /*new String*/
  variable0 = variable1;
  ((string___String_____braeq_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*s*/,  TAG_Int(0),  self) /*String::[]=*/;
  variable0 =  variable0 /*s*/;
  goto return_label54;
  return_label54: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___Collection___to_s(val_t  self) {
  struct trace_t trace = {NULL, "string::Collection::to_s (bin/../lib/standard//string.nit:443,2--448:10)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_string___String___init(); /*new String*/
  variable0 = variable1;
  variable1 = ((abstract_collection___Collection___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*Collection::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*e*/ ==  NIT_NULL /*null*/) || (( variable2 /*e*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*e*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*e*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*e*/,COLOR_kernel___Object_____eqeq))( variable2 /*e*/,  NIT_NULL /*null*/) /*Object::==*/)))))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable3 = ((string___Object___to_s_t)CALL( variable2 /*e*/,COLOR_string___Object___to_s))( variable2 /*e*/) /*Object::to_s*/;
      ((string___String___append_t)CALL( variable0 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable0 /*s*/, variable3) /*String::append*/;
    }
    continue_56: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
  }
  break_56: while(0);
  variable0 =  variable0 /*s*/;
  goto return_label55;
  return_label55: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___Collection___join(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::Collection::join (bin/../lib/standard//string.nit:451,2--471:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstract_collection___Collection___is_empty_t)CALL( self,COLOR_abstract_collection___Collection___is_empty))( self) /*Collection::is_empty*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    goto return_label57;
  }
  variable2 = NEW_string___String___init(); /*new String*/
  variable1 = variable2;
  variable3 = ((abstract_collection___Collection___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*Collection::iterator*/;
  variable2 = variable3;
  variable4 = ((abstract_collection___Iterator___item_t)CALL( variable2 /*i*/,COLOR_abstract_collection___Iterator___item))( variable2 /*i*/) /*Iterator::item*/;
  variable3 = variable4;
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable3 /*e*/ ==  NIT_NULL /*null*/) || (( variable3 /*e*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*e*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*e*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*e*/,COLOR_kernel___Object_____eqeq))( variable3 /*e*/,  NIT_NULL /*null*/) /*Object::==*/)))))));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ((string___Object___to_s_t)CALL( variable3 /*e*/,COLOR_string___Object___to_s))( variable3 /*e*/) /*Object::to_s*/;
    ((string___String___append_t)CALL( variable1 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*s*/, variable4) /*String::append*/;
  }
  ((abstract_collection___Iterator___next_t)CALL( variable2 /*i*/,COLOR_abstract_collection___Iterator___next))( variable2 /*i*/) /*Iterator::next*/;
  while (true) { /*while*/
    variable4 = ((abstract_collection___Iterator___is_ok_t)CALL( variable2 /*i*/,COLOR_abstract_collection___Iterator___is_ok))( variable2 /*i*/) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /* while*/
    ((string___String___append_t)CALL( variable1 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*s*/,  variable0 /*sep*/) /*String::append*/;
    variable4 = ((abstract_collection___Iterator___item_t)CALL( variable2 /*i*/,COLOR_abstract_collection___Iterator___item))( variable2 /*i*/) /*Iterator::item*/;
    variable3 = variable4 /*e=*/;
    variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable3 /*e*/ ==  NIT_NULL /*null*/) || (( variable3 /*e*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*e*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*e*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*e*/,COLOR_kernel___Object_____eqeq))( variable3 /*e*/,  NIT_NULL /*null*/) /*Object::==*/)))))));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = ((string___Object___to_s_t)CALL( variable3 /*e*/,COLOR_string___Object___to_s))( variable3 /*e*/) /*Object::to_s*/;
      ((string___String___append_t)CALL( variable1 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*s*/, variable4) /*String::append*/;
    }
    ((abstract_collection___Iterator___next_t)CALL( variable2 /*i*/,COLOR_abstract_collection___Iterator___next))( variable2 /*i*/) /*Iterator::next*/;
    continue_58: while(0);
  }
  break_58: while(0);
  variable1 =  variable1 /*s*/;
  goto return_label57;
  return_label57: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t string___Map___map_join(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string::Map::map_join (bin/../lib/standard//string.nit:476,2--498:10)"};
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
    val_t variable14;
    val_t variable15;
    val_t variable16;
    val_t variable17;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((abstract_collection___Collection___is_empty_t)CALL( self,COLOR_abstract_collection___Collection___is_empty))( self) /*Map::is_empty*/;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    goto return_label59;
  }
  variable3 = NEW_string___String___init(); /*new String*/
  variable2 = variable3;
  variable4 = ((abstract_collection___Map___iterator_t)CALL( self,COLOR_abstract_collection___Collection___iterator))( self) /*Map::iterator*/;
  variable3 = variable4;
  variable5 = ((abstract_collection___MapIterator___key_t)CALL( variable3 /*i*/,COLOR_abstract_collection___MapIterator___key))( variable3 /*i*/) /*MapIterator::key*/;
  variable4 = variable5;
  variable6 = ((abstract_collection___Iterator___item_t)CALL( variable3 /*i*/,COLOR_abstract_collection___Iterator___item))( variable3 /*i*/) /*MapIterator::item*/;
  variable5 = variable6;
  variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable5 /*e*/ ==  NIT_NULL /*null*/) || (( variable5 /*e*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable5 /*e*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable5 /*e*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable5 /*e*/,COLOR_kernel___Object_____eqeq))( variable5 /*e*/,  NIT_NULL /*null*/) /*Object::==*/)))))));
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_string___String___init(); /*new String*/
    variable7 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
    variable9 =  variable4 /*k*/;
    variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
    variable10 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable11 = variable10;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
    variable12 =  variable1 /*couple_sep*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
    variable13 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable14 = variable13;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
    variable15 =  variable5 /*e*/;
    variable15 = ((string___String___to_s_t)CALL(variable15,COLOR_string___Object___to_s))(variable15) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
    variable16 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable17 = variable16;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable17) /*String::append*/;
    ((string___String___append_t)CALL( variable2 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable2 /*s*/, variable6) /*String::append*/;
  }
  ((abstract_collection___Iterator___next_t)CALL( variable3 /*i*/,COLOR_abstract_collection___Iterator___next))( variable3 /*i*/) /*MapIterator::next*/;
  while (true) { /*while*/
    variable6 = ((abstract_collection___Iterator___is_ok_t)CALL( variable3 /*i*/,COLOR_abstract_collection___Iterator___is_ok))( variable3 /*i*/) /*MapIterator::is_ok*/;
    if (!UNTAG_Bool(variable6)) break; /* while*/
    ((string___String___append_t)CALL( variable2 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable2 /*s*/,  variable0 /*sep*/) /*String::append*/;
    variable6 = ((abstract_collection___MapIterator___key_t)CALL( variable3 /*i*/,COLOR_abstract_collection___MapIterator___key))( variable3 /*i*/) /*MapIterator::key*/;
    variable4 = variable6 /*k=*/;
    variable6 = ((abstract_collection___Iterator___item_t)CALL( variable3 /*i*/,COLOR_abstract_collection___Iterator___item))( variable3 /*i*/) /*MapIterator::item*/;
    variable5 = variable6 /*e=*/;
    variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable5 /*e*/ ==  NIT_NULL /*null*/) || (( variable5 /*e*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable5 /*e*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable5 /*e*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable5 /*e*/,COLOR_kernel___Object_____eqeq))( variable5 /*e*/,  NIT_NULL /*null*/) /*Object::==*/)))))));
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = NEW_string___String___init(); /*new String*/
      variable7 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
      variable9 =  variable4 /*k*/;
      variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
      variable10 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable11 = variable10;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
      variable12 =  variable1 /*couple_sep*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable14) /*String::append*/;
      variable15 =  variable5 /*e*/;
      variable15 = ((string___String___to_s_t)CALL(variable15,COLOR_string___Object___to_s))(variable15) /*String::to_s*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
      variable16 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable17 = variable16;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable17) /*String::append*/;
      ((string___String___append_t)CALL( variable2 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable2 /*s*/, variable6) /*String::append*/;
    }
    ((abstract_collection___Iterator___next_t)CALL( variable3 /*i*/,COLOR_abstract_collection___Iterator___next))( variable3 /*i*/) /*MapIterator::next*/;
    continue_60: while(0);
  }
  break_60: while(0);
  variable2 =  variable2 /*s*/;
  goto return_label59;
  return_label59: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t string___NativeString_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::NativeString::[] (bin/../lib/standard//string.nit:508,2--26)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Char(UNBOX_NativeString( self)[UNTAG_Int( param0)]);
}
void string___NativeString_____braeq(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "string::NativeString::[]= (bin/../lib/standard//string.nit:509,2--32)"};
  trace.prev = tracehead; tracehead = &trace;
  UNBOX_NativeString( self)[UNTAG_Int( param0)]=UNTAG_Char( param1);
  tracehead = trace.prev;
  return;
}
void string___NativeString___copy_to(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "string::NativeString::copy_to (bin/../lib/standard//string.nit:510,2--65)"};
  trace.prev = tracehead; tracehead = &trace;
  (void)memcpy(UNBOX_NativeString( param0)+UNTAG_Int( param3), UNBOX_NativeString( self)+UNTAG_Int( param2), UNTAG_Int( param1));
  tracehead = trace.prev;
  return;
}
val_t string___NativeString___cstring_length(val_t  self) {
  struct trace_t trace = {NULL, "string::NativeString::cstring_length (bin/../lib/standard//string.nit:512,2--517:10)"};
  val_t variable0;
    val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(0);
  while (true) { /*while*/
    variable1 = TAG_Char(UNBOX_NativeString( self)[UNTAG_Int( variable0 /*l*/)]);
    variable1 = TAG_Bool((variable1)!=( TAG_Char('\0')));
    if (!UNTAG_Bool(variable1)) break; /* while*/
    variable0 = TAG_Int(UNTAG_Int(variable0)+UNTAG_Int( TAG_Int(1))) /*l*/;
    continue_62: while(0);
  }
  break_62: while(0);
  variable0 =  variable0 /*l*/;
  goto return_label61;
  return_label61: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___NativeString___atoi(val_t  self) {
  struct trace_t trace = {NULL, "string::NativeString::atoi (bin/../lib/standard//string.nit:519,2--15)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(atoi(UNBOX_NativeString( self)));
}
val_t string___StringCapable___calloc_string(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::StringCapable::calloc_string (bin/../lib/standard//string.nit:524,2--54)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_NativeString((char*)malloc((UNTAG_Int( param0) * sizeof(char))));
}
val_t string___Sys___args(val_t  self) {
  struct trace_t trace = {NULL, "string::Sys::args (bin/../lib/standard//string.nit:530,2--533:20)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_string___Sys____args_cache( self) /*Sys::_args_cache*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*IndexedCollection::==*/)))));
  if (UNTAG_Bool(variable0)) { /*if*/
    ((string___Sys___init_args_t)CALL( self,COLOR_string___Sys___init_args))( self) /*Sys::init_args*/;
  }
  variable0 = ATTR_string___Sys____args_cache( self) /*Sys::_args_cache*/;
  goto return_label63;
  return_label63: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t string___Sys___program_name(val_t  self) {
  struct trace_t trace = {NULL, "string::Sys::program_name (bin/../lib/standard//string.nit:536,2--539:46)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((string___Sys___native_argv_t)CALL( self,COLOR_string___Sys___native_argv))( self,  TAG_Int(0)) /*Sys::native_argv*/;
  variable1 = NEW_string___String___from_cstring(variable0); /*new String*/
  variable0 = variable1;
  goto return_label64;
  return_label64: while(false);
  tracehead = trace.prev;
  return variable0;
}
void string___Sys___init_args(val_t  self) {
  struct trace_t trace = {NULL, "string::Sys::init_args (bin/../lib/standard//string.nit:542,2--552:20)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ((string___Sys___native_argc_t)CALL( self,COLOR_string___Sys___native_argc))( self) /*Sys::native_argc*/;
  variable0 = variable1;
  variable2 = NEW_array___Array___with_capacity( TAG_Int(0)); /*new Array[String]*/
  variable1 = variable2;
  variable2 =  TAG_Int(1);
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable2 /*i*/)<UNTAG_Int( variable0 /*argc*/));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = TAG_Int(UNTAG_Int( variable2 /*i*/)-UNTAG_Int( TAG_Int(1)));
    variable4 = ((string___Sys___native_argv_t)CALL( self,COLOR_string___Sys___native_argv))( self,  variable2 /*i*/) /*Sys::native_argv*/;
    variable5 = NEW_string___String___from_cstring(variable4); /*new String*/
    variable4 = variable5;
    ((array___Array_____braeq_t)CALL( variable1 /*args*/,COLOR_abstract_collection___Map_____braeq))( variable1 /*args*/, variable3, variable4) /*Array::[]=*/;
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_66: while(0);
  }
  break_66: while(0);
  ATTR_string___Sys____args_cache( self) /*Sys::_args_cache*/ =  variable1 /*args*/;
  tracehead = trace.prev;
  return;
}
val_t string___Sys___native_argc(val_t  self) {
  struct trace_t trace = {NULL, "string::Sys::native_argc (bin/../lib/standard//string.nit:555,2--71)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(kernel_Sys_Sys_native_argc_0( self));
}
val_t string___Sys___native_argv(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "string::Sys::native_argv (bin/../lib/standard//string.nit:557,2--88)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_NativeString(kernel_Sys_Sys_native_argv_1( self, UNTAG_Int( param0)));
}
