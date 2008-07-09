#include "stream._sep.h"
void stream___IOS___close(val_t  self) {
  struct trace_t trace = {NULL, "stream::IOS::close (bin/../lib/standard//stream.nit:20,2--21:11)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method close called (bin/../lib/standard//stream.nit:20,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
val_t stream___IStream___read_char(val_t  self) {
  struct trace_t trace = {NULL, "stream::IStream::read_char (bin/../lib/standard//stream.nit:27,2--28:20)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method read_char called (bin/../lib/standard//stream.nit:27,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t stream___IStream___read(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "stream::IStream::read (bin/../lib/standard//stream.nit:30,2--41:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_string___String___with_capacity( variable0 /*i*/); /*new String*/
  variable1 = variable2;
  while (true) { /*while*/
    variable2 = TAG_Bool(UNTAG_Int( variable0 /*i*/)>UNTAG_Int( TAG_Int(0)));
    variable3 = variable2;
    if (UNTAG_Bool(variable3)) { /* and */
      variable3 = ((stream___IStream___eof_t)CALL( self,COLOR_stream___IStream___eof))( self) /*IStream::eof*/;
      variable3 =  TAG_Bool(!UNTAG_Bool(variable3));
    }
    variable2 = variable3;
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable3 = ((stream___IStream___read_char_t)CALL( self,COLOR_stream___IStream___read_char))( self) /*IStream::read_char*/;
    variable2 = variable3;
    variable3 = TAG_Bool(UNTAG_Int( variable2 /*c*/)>=UNTAG_Int( TAG_Int(0)));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable3 = TAG_Char(UNTAG_Int( variable2 /*c*/));
      ((string___String___add_t)CALL( variable1 /*s*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*s*/, variable3) /*String::add*/;
      variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int( TAG_Int(1))) /*i*/;
    }
    continue_1: while(0);
  }
  break_1: while(0);
  variable1 =  variable1 /*s*/;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t stream___IStream___read_line(val_t  self) {
  struct trace_t trace = {NULL, "stream::IStream::read_line (bin/../lib/standard//stream.nit:44,2--50:10)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((stream___IStream___eof_t)CALL( self,COLOR_stream___IStream___eof))( self) /*IStream::eof*/;
  if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable0)))) { fprintf(stderr, "Assert failed: bin/../lib/standard//stream.nit:47,3--16\n"); nit_exit(1);}
  variable1 = NEW_string___String___init(); /*new String*/
  variable0 = variable1;
  ((stream___IStream___append_line_to_t)CALL( self,COLOR_stream___IStream___append_line_to))( self,  variable0 /*s*/) /*IStream::append_line_to*/;
  variable0 =  variable0 /*s*/;
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t stream___IStream___read_all(val_t  self) {
  struct trace_t trace = {NULL, "stream::IStream::read_all (bin/../lib/standard//stream.nit:53,2--61:10)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable0 = variable1;
  while (true) { /*while*/
    variable1 = ((stream___IStream___eof_t)CALL( self,COLOR_stream___IStream___eof))( self) /*IStream::eof*/;
    if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) break; /* while*/
    variable2 = ((stream___IStream___read_char_t)CALL( self,COLOR_stream___IStream___read_char))( self) /*IStream::read_char*/;
    variable1 = variable2;
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*c*/)>=UNTAG_Int( TAG_Int(0)));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = TAG_Char(UNTAG_Int( variable1 /*c*/));
      ((string___String___add_t)CALL( variable0 /*s*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*s*/, variable2) /*String::add*/;
    }
    continue_4: while(0);
  }
  break_4: while(0);
  variable0 =  variable0 /*s*/;
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable0;
}
void stream___IStream___append_line_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "stream::IStream::append_line_to (bin/../lib/standard//stream.nit:64,2--74:28)"};
  val_t variable0;
    val_t variable1;
    val_t variable2;
      val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  while (true) { /*while*/
    if (!UNTAG_Bool( TAG_Bool(true))) break; /* while*/
    variable2 = ((stream___IStream___read_char_t)CALL( self,COLOR_stream___IStream___read_char))( self) /*IStream::read_char*/;
    variable1 = variable2;
    variable2 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
    variable2 = TAG_Bool(( variable1 /*x*/)==(variable2));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = ((stream___IStream___eof_t)CALL( self,COLOR_stream___IStream___eof))( self) /*IStream::eof*/;
      if (UNTAG_Bool(variable2)) { /*if*/
        goto return_label5;
      }
    } else { /*if*/
      variable3 = TAG_Char(UNTAG_Int( variable1 /*x*/));
      variable2 = variable3;
      ((array___AbstractArray___push_t)CALL( variable0 /*s*/,COLOR_abstract_collection___IndexedCollection___push))( variable0 /*s*/,  variable2 /*c*/) /*String::push*/;
      variable3 = TAG_Bool(( variable2 /*c*/)==( TAG_Char('\n')));
      if (UNTAG_Bool(variable3)) { /*if*/
        goto return_label5;
      }
    }
    continue_6: while(0);
  }
  break_6: while(0);
  return_label5: while(false);
  tracehead = trace.prev;
  return;
}
val_t stream___IStream___eof(val_t  self) {
  struct trace_t trace = {NULL, "stream::IStream::eof (bin/../lib/standard//stream.nit:79,2--80:15)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method eof called (bin/../lib/standard//stream.nit:79,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void stream___OStream___write(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "stream::OStream::write (bin/../lib/standard//stream.nit:86,2--87:21)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method write called (bin/../lib/standard//stream.nit:86,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
val_t stream___OStream___is_writable(val_t  self) {
  struct trace_t trace = {NULL, "stream::OStream::is_writable (bin/../lib/standard//stream.nit:89,2--90:23)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method is_writable called (bin/../lib/standard//stream.nit:89,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t stream___BufferedIStream___read_char(val_t  self) {
  struct trace_t trace = {NULL, "stream::BufferedIStream::read_char (bin/../lib/standard//stream.nit:96,2--107:16)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((stream___BufferedIStream___eof_t)CALL( self,COLOR_stream___IStream___eof))( self) /*BufferedIStream::eof*/;
  if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable0)))) { fprintf(stderr, "Assert failed: bin/../lib/standard//stream.nit:98,3--16\n"); nit_exit(1);}
  variable0 = ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/;
  variable1 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
  variable1 = ((array___AbstractArray___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*String::length*/;
  variable0 = TAG_Bool(UNTAG_Int(variable0)>=UNTAG_Int(variable1));
  if (UNTAG_Bool(variable0)) { /*if*/
    ((stream___BufferedIStream___fill_buffer_t)CALL( self,COLOR_stream___BufferedIStream___fill_buffer))( self) /*BufferedIStream::fill_buffer*/;
  }
  variable0 = ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/;
  variable1 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
  variable1 = ((array___AbstractArray___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*String::length*/;
  variable0 = TAG_Bool(UNTAG_Int(variable0)>=UNTAG_Int(variable1));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
    goto return_label7;
  }
  variable1 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
  variable2 = ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/;
  variable1 = ((string___String_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1, variable2) /*String::[]*/;
  variable0 = variable1;
  ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/ = TAG_Int(UNTAG_Int(ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/)+UNTAG_Int( TAG_Int(1)));
  variable1 = TAG_Int((unsigned char)UNTAG_Char( variable0 /*c*/));
  variable0 = variable1;
  goto return_label7;
  return_label7: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t stream___BufferedIStream___read(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "stream::BufferedIStream::read (bin/../lib/standard//stream.nit:110,2--129:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
      val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_string___String___with_capacity( variable0 /*i*/); /*new String*/
  variable1 = variable2;
  variable3 = ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/;
  variable2 = variable3;
  variable4 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
  variable4 = ((array___AbstractArray___length_t)CALL(variable4,COLOR_abstract_collection___Collection___length))(variable4) /*String::length*/;
  variable3 = variable4;
  while (true) { /*while*/
    variable4 = TAG_Bool(UNTAG_Int( variable0 /*i*/)>UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable4)) break; /* while*/
    variable4 = TAG_Bool(UNTAG_Int( variable2 /*j*/)>=UNTAG_Int( variable3 /*k*/));
    if (UNTAG_Bool(variable4)) { /*if*/
      ((stream___BufferedIStream___fill_buffer_t)CALL( self,COLOR_stream___BufferedIStream___fill_buffer))( self) /*BufferedIStream::fill_buffer*/;
      variable4 = ((stream___BufferedIStream___eof_t)CALL( self,COLOR_stream___IStream___eof))( self) /*BufferedIStream::eof*/;
      if (UNTAG_Bool(variable4)) { /*if*/
        variable1 =  variable1 /*s*/;
        goto return_label8;
      }
      variable4 = ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/;
      variable2 = variable4 /*j=*/;
      variable4 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
      variable4 = ((array___AbstractArray___length_t)CALL(variable4,COLOR_abstract_collection___Collection___length))(variable4) /*String::length*/;
      variable3 = variable4 /*k=*/;
    }
    while (true) { /*while*/
      variable4 = TAG_Bool(UNTAG_Int( variable2 /*j*/)<UNTAG_Int( variable3 /*k*/));
      variable5 = variable4;
      if (UNTAG_Bool(variable5)) { /* and */
        variable5 = TAG_Bool(UNTAG_Int( variable0 /*i*/)>UNTAG_Int( TAG_Int(0)));
      }
      variable4 = variable5;
      if (!UNTAG_Bool(variable4)) break; /* while*/
      variable4 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
      variable4 = ((string___String_____bra_t)CALL(variable4,COLOR_abstract_collection___Map_____bra))(variable4,  variable2 /*j*/) /*String::[]*/;
      ((string___String___add_t)CALL( variable1 /*s*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*s*/, variable4) /*String::add*/;
      variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*j*/;
      variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int( TAG_Int(1))) /*i*/;
      continue_10: while(0);
    }
    break_10: while(0);
    continue_9: while(0);
  }
  break_9: while(0);
  ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/ =  variable2 /*j*/;
  variable1 =  variable1 /*s*/;
  goto return_label8;
  return_label8: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t stream___BufferedIStream___read_all(val_t  self) {
  struct trace_t trace = {NULL, "stream::BufferedIStream::read_all (bin/../lib/standard//stream.nit:132,2--145:10)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable0 = variable1;
  while (true) { /*while*/
    variable1 = ((stream___BufferedIStream___eof_t)CALL( self,COLOR_stream___IStream___eof))( self) /*BufferedIStream::eof*/;
    if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) break; /* while*/
    variable2 = ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/;
    variable1 = variable2;
    variable3 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
    variable3 = ((array___AbstractArray___length_t)CALL(variable3,COLOR_abstract_collection___Collection___length))(variable3) /*String::length*/;
    variable2 = variable3;
    while (true) { /*while*/
      variable3 = TAG_Bool(UNTAG_Int( variable1 /*j*/)<UNTAG_Int( variable2 /*k*/));
      if (!UNTAG_Bool(variable3)) break; /* while*/
      variable3 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
      variable3 = ((string___String_____bra_t)CALL(variable3,COLOR_abstract_collection___Map_____bra))(variable3,  variable1 /*j*/) /*String::[]*/;
      ((string___String___add_t)CALL( variable0 /*s*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*s*/, variable3) /*String::add*/;
      variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*j*/;
      continue_13: while(0);
    }
    break_13: while(0);
    ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/ =  variable1 /*j*/;
    ((stream___BufferedIStream___fill_buffer_t)CALL( self,COLOR_stream___BufferedIStream___fill_buffer))( self) /*BufferedIStream::fill_buffer*/;
    continue_12: while(0);
  }
  break_12: while(0);
  variable0 =  variable0 /*s*/;
  goto return_label11;
  return_label11: while(false);
  tracehead = trace.prev;
  return variable0;
}
void stream___BufferedIStream___append_line_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "stream::BufferedIStream::append_line_to (bin/../lib/standard//stream.nit:148,2--178:16)"};
  val_t variable0;
    val_t variable1;
    val_t variable2;
      val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  while (true) { /*while*/
    if (!UNTAG_Bool( TAG_Bool(true))) break; /* while*/
    variable2 = ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/;
    variable1 = variable2;
    while (true) { /*while*/
      variable2 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
      variable2 = ((array___AbstractArray___length_t)CALL(variable2,COLOR_abstract_collection___Collection___length))(variable2) /*String::length*/;
      variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int(variable2));
      variable3 = variable2;
      if (UNTAG_Bool(variable3)) { /* and */
        variable3 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
        variable3 = ((string___String_____bra_t)CALL(variable3,COLOR_abstract_collection___Map_____bra))(variable3,  variable1 /*i*/) /*String::[]*/;
        variable3 = TAG_Bool((variable3)!=( TAG_Char('\n')));
      }
      variable2 = variable3;
      if (!UNTAG_Bool(variable2)) break; /* while*/
      variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*i*/;
      continue_16: while(0);
    }
    break_16: while(0);
    variable2 = ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/;
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)>UNTAG_Int(variable2));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
      variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( variable1 /*i*/));
      variable3 = ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/;
      variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int(variable3));
      ((string___String___enlarge_t)CALL( variable0 /*s*/,COLOR_array___AbstractArray___enlarge))( variable0 /*s*/, variable2) /*String::enlarge*/;
      variable3 = ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/;
      variable2 = variable3;
      while (true) { /*while*/
        variable3 = TAG_Bool(UNTAG_Int( variable2 /*j*/)<UNTAG_Int( variable1 /*i*/));
        if (!UNTAG_Bool(variable3)) break; /* while*/
        variable3 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
        variable3 = ((string___String_____bra_t)CALL(variable3,COLOR_abstract_collection___Map_____bra))(variable3,  variable2 /*j*/) /*String::[]*/;
        ((string___String___add_t)CALL( variable0 /*s*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*s*/, variable3) /*String::add*/;
        variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*j*/;
        continue_17: while(0);
      }
      break_17: while(0);
    }
    variable2 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
    variable2 = ((array___AbstractArray___length_t)CALL(variable2,COLOR_abstract_collection___Collection___length))(variable2) /*String::length*/;
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int(variable2));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = TAG_Int(UNTAG_Int( variable1 /*i*/)+UNTAG_Int( TAG_Int(1)));
      ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/ = variable2;
      goto return_label14;
    } else { /*if*/
      ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/ =  variable1 /*i*/;
      variable2 = ((stream___BufferedIStream___end_reached_t)CALL( self,COLOR_stream___BufferedIStream___end_reached))( self) /*BufferedIStream::end_reached*/;
      if (UNTAG_Bool(variable2)) { /*if*/
        goto return_label14;
      } else { /*if*/
        ((stream___BufferedIStream___fill_buffer_t)CALL( self,COLOR_stream___BufferedIStream___fill_buffer))( self) /*BufferedIStream::fill_buffer*/;
      }
    }
    continue_15: while(0);
  }
  break_15: while(0);
  return_label14: while(false);
  tracehead = trace.prev;
  return;
}
val_t stream___BufferedIStream___eof(val_t  self) {
  struct trace_t trace = {NULL, "stream::BufferedIStream::eof (bin/../lib/standard//stream.nit:184,2--71)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/;
  variable1 = ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/;
  variable1 = ((array___AbstractArray___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*String::length*/;
  variable0 = TAG_Bool(UNTAG_Int(variable0)>=UNTAG_Int(variable1));
  variable1 = variable0;
  if (UNTAG_Bool(variable1)) { /* and */
    variable1 = ((stream___BufferedIStream___end_reached_t)CALL( self,COLOR_stream___BufferedIStream___end_reached))( self) /*BufferedIStream::end_reached*/;
  }
  variable0 = variable1;
  goto return_label18;
  return_label18: while(false);
  tracehead = trace.prev;
  return variable0;
}
void stream___BufferedIStream___fill_buffer(val_t  self) {
  struct trace_t trace = {NULL, "stream::BufferedIStream::fill_buffer (bin/../lib/standard//stream.nit:192,2--193:27)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method fill_buffer called (bin/../lib/standard//stream.nit:192,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
val_t stream___BufferedIStream___end_reached(val_t  self) {
  struct trace_t trace = {NULL, "stream::BufferedIStream::end_reached (bin/../lib/standard//stream.nit:195,2--196:33)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method end_reached called (bin/../lib/standard//stream.nit:195,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void stream___BufferedIStream___prepare_buffer(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "stream::BufferedIStream::prepare_buffer (bin/../lib/standard//stream.nit:198,2--202:17)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___with_capacity( variable0 /*capacity*/); /*new String*/
  ATTR_stream___BufferedIStream____buffer( self) /*BufferedIStream::_buffer*/ = variable1;
  ATTR_stream___BufferedIStream____buffer_pos( self) /*BufferedIStream::_buffer_pos*/ =  TAG_Int(0);
  tracehead = trace.prev;
  return;
}
void stream___FDStream___close(val_t  self) {
  struct trace_t trace = {NULL, "stream::FDStream::close (bin/../lib/standard//stream.nit:218,2--37)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_stream___FDStream____fd( self) /*FDStream::_fd*/;
  ((stream___FDStream___native_close_t)CALL( self,COLOR_stream___FDStream___native_close))( self, variable0) /*FDStream::native_close*/;
  tracehead = trace.prev;
  return;
}
val_t stream___FDStream___native_close(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "stream::FDStream::native_close (bin/../lib/standard//stream.nit:220,2--91)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(stream_FDStream_FDStream_native_close_1( self, UNTAG_Int( param0)));
}
val_t stream___FDStream___native_read_char(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "stream::FDStream::native_read_char (bin/../lib/standard//stream.nit:221,2--99)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(stream_FDStream_FDStream_native_read_char_1( self, UNTAG_Int( param0)));
}
val_t stream___FDStream___native_read(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "stream::FDStream::native_read (bin/../lib/standard//stream.nit:222,2--118)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(stream_FDStream_FDStream_native_read_3( self, UNTAG_Int( param0), UNBOX_NativeString( param1), UNTAG_Int( param2)));
}
val_t stream___FDStream___native_write(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "stream::FDStream::native_write (bin/../lib/standard//stream.nit:223,2--120)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(stream_FDStream_FDStream_native_write_3( self, UNTAG_Int( param0), UNBOX_NativeString( param1), UNTAG_Int( param2)));
}
void stream___FDStream___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "stream::FDStream::init (bin/../lib/standard//stream.nit:225,2--26)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_FDStream].i]) return;
  ATTR_stream___FDStream____fd( self) /*FDStream::_fd*/ =  variable0 /*fd*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_FDStream].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t stream___FDIStream___eof(val_t  self) {
  struct trace_t trace = {NULL, "stream::FDIStream::eof (bin/../lib/standard//stream.nit:231,2--31)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_stream___FDIStream____eof( self) /*FDIStream::_eof*/;
}
val_t stream___FDIStream___read_char(val_t  self) {
  struct trace_t trace = {NULL, "stream::FDIStream::read_char (bin/../lib/standard//stream.nit:233,2--237:11)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_stream___FDStream____fd( self) /*FDIStream::_fd*/;
  variable1 = ((stream___FDStream___native_read_char_t)CALL( self,COLOR_stream___FDStream___native_read_char))( self, variable1) /*FDIStream::native_read_char*/;
  variable0 = variable1;
  variable1 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  variable1 = TAG_Bool(( variable0 /*nb*/)==(variable1));
  if (UNTAG_Bool(variable1)) { /*if*/
    ATTR_stream___FDIStream____eof( self) /*FDIStream::_eof*/ =  TAG_Bool(true);
  }
  variable0 =  variable0 /*nb*/;
  goto return_label22;
  return_label22: while(false);
  tracehead = trace.prev;
  return variable0;
}
void stream___FDIStream___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "stream::FDIStream::init (bin/../lib/standard//stream.nit:240,2--29)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_FDIStream].i]) return;
  ((stream___FDStream___init_t)CALL( self,COLOR_stream___FDStream___init))( self,  param0, init_table /*YYY*/) /*FDStream::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_FDIStream].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t stream___FDOStream___is_writable(val_t  self) {
  struct trace_t trace = {NULL, "stream::FDOStream::is_writable (bin/../lib/standard//stream.nit:246,2--39)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_stream___FDOStream____is_writable( self) /*FDOStream::_is_writable*/;
}
void stream___FDOStream___write(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "stream::FDOStream::write (bin/../lib/standard//stream.nit:248,2--251:44)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_stream___FDStream____fd( self) /*FDOStream::_fd*/;
  variable3 = ((string___String___to_cstring_t)CALL( variable0 /*s*/,COLOR_string___String___to_cstring))( variable0 /*s*/) /*String::to_cstring*/;
  variable4 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  variable2 = ((stream___FDStream___native_write_t)CALL( self,COLOR_stream___FDStream___native_write))( self, variable2, variable3, variable4) /*FDOStream::native_write*/;
  variable1 = variable2;
  variable2 = ((array___AbstractArray___length_t)CALL( variable0 /*s*/,COLOR_abstract_collection___Collection___length))( variable0 /*s*/) /*String::length*/;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*nb*/)<UNTAG_Int(variable2));
  if (UNTAG_Bool(variable2)) { /*if*/
    ATTR_stream___FDOStream____is_writable( self) /*FDOStream::_is_writable*/ =  TAG_Bool(false);
  }
  tracehead = trace.prev;
  return;
}
void stream___FDOStream___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "stream::FDOStream::init (bin/../lib/standard//stream.nit:254,2--257:21)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_FDOStream].i]) return;
  ((stream___FDStream___init_t)CALL( self,COLOR_stream___FDStream___init))( self,  param0, init_table /*YYY*/) /*FDStream::init*/;
  ATTR_stream___FDOStream____is_writable( self) /*FDOStream::_is_writable*/ =  TAG_Bool(true);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_FDOStream].i] = 1;
  tracehead = trace.prev;
  return;
}
void stream___FDIOStream___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "stream::FDIOStream::init (bin/../lib/standard//stream.nit:265,2--268:21)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_FDIOStream].i]) return;
  ((stream___FDIStream___init_t)CALL( self,COLOR_stream___FDIStream___init))( self,  param0, init_table /*YYY*/) /*FDIStream::init*/;
  ((stream___FDOStream___init_t)CALL( self,COLOR_stream___FDOStream___init))( self,  param0, init_table /*YYY*/) /*FDOStream::init*/;
  ATTR_stream___FDStream____fd( self) /*FDIOStream::_fd*/ =  variable0 /*fd*/;
  ATTR_stream___FDOStream____is_writable( self) /*FDIOStream::_is_writable*/ =  TAG_Bool(true);
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_FDIOStream].i] = 1;
  tracehead = trace.prev;
  return;
}
