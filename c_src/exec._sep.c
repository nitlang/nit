#include "exec._sep.h"
val_t exec___Process___id(val_t  self) {
  struct trace_t trace = {NULL, "exec::Process::id (bin/../lib/standard//exec.nit:23,2--24:32)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_exec___Process____data( self) /*Process::_data*/;
  variable0 = ((exec___NativeProcess___id_t)CALL(variable0,COLOR_exec___NativeProcess___id))(variable0) /*NativeProcess::id*/;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t exec___Process___is_finished(val_t  self) {
  struct trace_t trace = {NULL, "exec::Process::is_finished (bin/../lib/standard//exec.nit:26,2--27:51)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_exec___Process____data( self) /*Process::_data*/;
  variable0 = ((exec___NativeProcess___is_finished_t)CALL(variable0,COLOR_exec___NativeProcess___is_finished))(variable0) /*NativeProcess::is_finished*/;
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable0;
}
void exec___Process___wait(val_t  self) {
  struct trace_t trace = {NULL, "exec::Process::wait (bin/../lib/standard//exec.nit:29,2--33:20)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_exec___Process____data( self) /*Process::_data*/;
  ((exec___NativeProcess___wait_t)CALL(variable0,COLOR_exec___NativeProcess___wait))(variable0) /*NativeProcess::wait*/;
  variable0 = ((exec___Process___is_finished_t)CALL( self,COLOR_exec___Process___is_finished))( self) /*Process::is_finished*/;
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//exec.nit:33,3--20\n"); nit_exit(1);}
  tracehead = trace.prev;
  return;
}
val_t exec___Process___status(val_t  self) {
  struct trace_t trace = {NULL, "exec::Process::status (bin/../lib/standard//exec.nit:36,2--40:21)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((exec___Process___is_finished_t)CALL( self,COLOR_exec___Process___is_finished))( self) /*Process::is_finished*/;
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//exec.nit:39,3--20\n"); nit_exit(1);}
  variable0 = ATTR_exec___Process____data( self) /*Process::_data*/;
  variable0 = ((exec___NativeProcess___status_t)CALL(variable0,COLOR_exec___NativeProcess___status))(variable0) /*NativeProcess::status*/;
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable0;
}
void exec___Process___kill(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "exec::Process::kill (bin/../lib/standard//exec.nit:43,2--44:44)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_exec___Process____data( self) /*Process::_data*/;
  ((exec___NativeProcess___kill_t)CALL(variable1,COLOR_exec___NativeProcess___kill))(variable1,  variable0 /*signal*/) /*NativeProcess::kill*/;
  tracehead = trace.prev;
  return;
}
void exec___Process___term(val_t  self) {
  struct trace_t trace = {NULL, "exec::Process::term (bin/../lib/standard//exec.nit:46,2--47:21)"};
  trace.prev = tracehead; tracehead = &trace;
  ((exec___Process___kill_t)CALL( self,COLOR_exec___Process___kill))( self,  TAG_Int(15)) /*Process::kill*/;
  tracehead = trace.prev;
  return;
}
void exec___Process___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "exec::Process::init (bin/../lib/standard//exec.nit:49,2--52:31)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  /* check if p<Array[String] with p:String */
  if (( param1!=NIT_NULL) && !VAL_ISA( param1, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/standard//exec.nit:50,24--43\n"); nit_exit(1); } /*cast Array[String]*/;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Process].i]) return;
  ((exec___Process___execute_t)CALL( self,COLOR_exec___Process___execute))( self,  variable0 /*command*/,  variable1 /*arguments*/,  TAG_Int(0), init_table /*YYY*/) /*Process::execute*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Process].i] = 1;
  tracehead = trace.prev;
  return;
}
void exec___Process___init_(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "exec::Process::init_ (bin/../lib/standard//exec.nit:55,2--58:26)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Process].i]) return;
  ((exec___Process___execute_t)CALL( self,COLOR_exec___Process___execute))( self,  variable0 /*command*/,  NIT_NULL /*null*/,  TAG_Int(0), init_table /*YYY*/) /*Process::execute*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Process].i] = 1;
  tracehead = trace.prev;
  return;
}
void exec___Process___execute(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "exec::Process::execute (bin/../lib/standard//exec.nit:61,2--74:78)"};
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
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Process].i]) return;
  variable4 = NEW_string___String___init(); /*new String*/
  variable3 = variable4;
  variable4 =  TAG_Int(1);
  ((string___String___append_t)CALL( variable3 /*args*/,COLOR_abstract_collection___IndexedCollection___append))( variable3 /*args*/,  variable0 /*command*/) /*String::append*/;
  variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*arguments*/ ==  NIT_NULL /*null*/) || (( variable1 /*arguments*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable1 /*arguments*/,COLOR_kernel___Object_____eqeq))( variable1 /*arguments*/,  NIT_NULL /*null*/) /*Array::==*/)))));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable5 = ((array___AbstractArray___iterator_t)CALL( variable1 /*arguments*/,COLOR_abstract_collection___Collection___iterator))( variable1 /*arguments*/) /*Array::iterator*/;
    while (true) { /*for*/
      variable6 = ((array___ArrayIterator___is_ok_t)CALL(variable5,COLOR_abstract_collection___Iterator___is_ok))(variable5) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable6)) break; /*for*/
      variable6 = ((array___ArrayIterator___item_t)CALL(variable5,COLOR_abstract_collection___Iterator___item))(variable5) /*ArrayIterator::item*/;
      ((string___String___add_t)CALL( variable3 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable3 /*args*/,  TAG_Char('\0')) /*String::add*/;
      ((string___String___append_t)CALL( variable3 /*args*/,COLOR_abstract_collection___IndexedCollection___append))( variable3 /*args*/,  variable6 /*a*/) /*String::append*/;
      continue_9: while(0);
      ((array___ArrayIterator___next_t)CALL(variable5,COLOR_abstract_collection___Iterator___next))(variable5) /*ArrayIterator::next*/;
    }
    break_9: while(0);
    variable5 = ((array___AbstractArray___length_t)CALL( variable1 /*arguments*/,COLOR_abstract_collection___Collection___length))( variable1 /*arguments*/) /*Array::length*/;
    variable4 = TAG_Int(UNTAG_Int(variable4)+UNTAG_Int(variable5)) /*l*/;
  }
  variable5 = ((string___String___to_cstring_t)CALL( variable0 /*command*/,COLOR_string___String___to_cstring))( variable0 /*command*/) /*String::to_cstring*/;
  variable6 = ((string___String___to_cstring_t)CALL( variable3 /*args*/,COLOR_string___String___to_cstring))( variable3 /*args*/) /*String::to_cstring*/;
  variable5 = ((exec___Process___basic_exec_execute_t)CALL( self,COLOR_exec___Process___basic_exec_execute))( self, variable5, variable6,  variable4 /*l*/,  variable2 /*pipeflags*/) /*Process::basic_exec_execute*/;
  ATTR_exec___Process____data( self) /*Process::_data*/ = variable5;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_Process].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t exec___Process___basic_exec_execute(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "exec::Process::basic_exec_execute (bin/../lib/standard//exec.nit:78,2--154)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_NativeProcess(exec_Process_Process_basic_exec_execute_4( self, UNBOX_NativeString( param0), UNBOX_NativeString( param1), UNTAG_Int( param2), UNTAG_Int( param3)));
}
void exec___IProcess___close(val_t  self) {
  struct trace_t trace = {NULL, "exec::IProcess::close (bin/../lib/standard//exec.nit:87,2--30)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_exec___IProcess____in( self) /*IProcess::_in*/;
  ((stream___FDStream___close_t)CALL(variable0,COLOR_stream___IOS___close))(variable0) /*FDIStream::close*/;
  tracehead = trace.prev;
  return;
}
val_t exec___IProcess___read_char(val_t  self) {
  struct trace_t trace = {NULL, "exec::IProcess::read_char (bin/../lib/standard//exec.nit:89,2--45)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_exec___IProcess____in( self) /*IProcess::_in*/;
  variable0 = ((stream___FDIStream___read_char_t)CALL(variable0,COLOR_stream___IStream___read_char))(variable0) /*FDIStream::read_char*/;
  goto return_label11;
  return_label11: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t exec___IProcess___eof(val_t  self) {
  struct trace_t trace = {NULL, "exec::IProcess::eof (bin/../lib/standard//exec.nit:91,2--33)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_exec___IProcess____in( self) /*IProcess::_in*/;
  variable0 = ((stream___FDIStream___eof_t)CALL(variable0,COLOR_stream___IStream___eof))(variable0) /*FDIStream::eof*/;
  goto return_label12;
  return_label12: while(false);
  tracehead = trace.prev;
  return variable0;
}
void exec___IProcess___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "exec::IProcess::init (bin/../lib/standard//exec.nit:93,2--96:34)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  /* check if p<Array[String] with p:String */
  if (( param1!=NIT_NULL) && !VAL_ISA( param1, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/standard//exec.nit:93,30--49\n"); nit_exit(1); } /*cast Array[String]*/;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IProcess].i]) return;
  ((exec___Process___execute_t)CALL( self,COLOR_exec___Process___execute))( self,  variable0 /*command*/,  variable1 /*arguments*/,  TAG_Int(2), init_table /*YYY*/) /*IProcess::execute*/;
  variable2 = ATTR_exec___Process____data( self) /*IProcess::_data*/;
  variable2 = ((exec___NativeProcess___out_fd_t)CALL(variable2,COLOR_exec___NativeProcess___out_fd))(variable2) /*NativeProcess::out_fd*/;
  variable3 = NEW_stream___FDIStream___init(variable2); /*new FDIStream*/
  variable2 = variable3;
  ATTR_exec___IProcess____in( self) /*IProcess::_in*/ = variable2;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IProcess].i] = 1;
  tracehead = trace.prev;
  return;
}
void exec___IProcess___init_(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "exec::IProcess::init_ (bin/../lib/standard//exec.nit:99,2--102:34)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IProcess].i]) return;
  ((exec___Process___execute_t)CALL( self,COLOR_exec___Process___execute))( self,  variable0 /*command*/,  NIT_NULL /*null*/,  TAG_Int(2), init_table /*YYY*/) /*IProcess::execute*/;
  variable1 = ATTR_exec___Process____data( self) /*IProcess::_data*/;
  variable1 = ((exec___NativeProcess___out_fd_t)CALL(variable1,COLOR_exec___NativeProcess___out_fd))(variable1) /*NativeProcess::out_fd*/;
  variable2 = NEW_stream___FDIStream___init(variable1); /*new FDIStream*/
  variable1 = variable2;
  ATTR_exec___IProcess____in( self) /*IProcess::_in*/ = variable1;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IProcess].i] = 1;
  tracehead = trace.prev;
  return;
}
void exec___OProcess___close(val_t  self) {
  struct trace_t trace = {NULL, "exec::OProcess::close (bin/../lib/standard//exec.nit:112,2--31)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_exec___OProcess____out( self) /*OProcess::_out*/;
  ((stream___IOS___close_t)CALL(variable0,COLOR_stream___IOS___close))(variable0) /*OStream::close*/;
  tracehead = trace.prev;
  return;
}
val_t exec___OProcess___is_writable(val_t  self) {
  struct trace_t trace = {NULL, "exec::OProcess::is_writable (bin/../lib/standard//exec.nit:114,2--50)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_exec___OProcess____out( self) /*OProcess::_out*/;
  variable0 = ((stream___OStream___is_writable_t)CALL(variable0,COLOR_stream___OStream___is_writable))(variable0) /*OStream::is_writable*/;
  goto return_label16;
  return_label16: while(false);
  tracehead = trace.prev;
  return variable0;
}
void exec___OProcess___write(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "exec::OProcess::write (bin/../lib/standard//exec.nit:116,2--36)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_exec___OProcess____out( self) /*OProcess::_out*/;
  ((stream___OStream___write_t)CALL(variable1,COLOR_stream___OStream___write))(variable1,  variable0 /*s*/) /*OStream::write*/;
  tracehead = trace.prev;
  return;
}
void exec___OProcess___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "exec::OProcess::init (bin/../lib/standard//exec.nit:118,2--121:34)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  /* check if p<Array[String] with p:String */
  if (( param1!=NIT_NULL) && !VAL_ISA( param1, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/standard//exec.nit:118,30--49\n"); nit_exit(1); } /*cast Array[String]*/;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OProcess].i]) return;
  ((exec___Process___execute_t)CALL( self,COLOR_exec___Process___execute))( self,  variable0 /*command*/,  variable1 /*arguments*/,  TAG_Int(1), init_table /*YYY*/) /*OProcess::execute*/;
  variable2 = ATTR_exec___Process____data( self) /*OProcess::_data*/;
  variable2 = ((exec___NativeProcess___in_fd_t)CALL(variable2,COLOR_exec___NativeProcess___in_fd))(variable2) /*NativeProcess::in_fd*/;
  variable3 = NEW_stream___FDOStream___init(variable2); /*new FDOStream*/
  variable2 = variable3;
  ATTR_exec___OProcess____out( self) /*OProcess::_out*/ = variable2;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OProcess].i] = 1;
  tracehead = trace.prev;
  return;
}
void exec___OProcess___init_(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "exec::OProcess::init_ (bin/../lib/standard//exec.nit:124,2--127:34)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OProcess].i]) return;
  ((exec___Process___execute_t)CALL( self,COLOR_exec___Process___execute))( self,  variable0 /*command*/,  NIT_NULL /*null*/,  TAG_Int(1), init_table /*YYY*/) /*OProcess::execute*/;
  variable1 = ATTR_exec___Process____data( self) /*OProcess::_data*/;
  variable1 = ((exec___NativeProcess___in_fd_t)CALL(variable1,COLOR_exec___NativeProcess___in_fd))(variable1) /*NativeProcess::in_fd*/;
  variable2 = NEW_stream___FDOStream___init(variable1); /*new FDOStream*/
  variable1 = variable2;
  ATTR_exec___OProcess____out( self) /*OProcess::_out*/ = variable1;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_OProcess].i] = 1;
  tracehead = trace.prev;
  return;
}
void exec___IOProcess___close(val_t  self) {
  struct trace_t trace = {NULL, "exec::IOProcess::close (bin/../lib/standard//exec.nit:137,2--140:12)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_exec___IProcess____in( self) /*IOProcess::_in*/;
  ((stream___FDStream___close_t)CALL(variable0,COLOR_stream___IOS___close))(variable0) /*FDIStream::close*/;
  variable0 = ATTR_exec___OProcess____out( self) /*IOProcess::_out*/;
  ((stream___IOS___close_t)CALL(variable0,COLOR_stream___IOS___close))(variable0) /*OStream::close*/;
  tracehead = trace.prev;
  return;
}
void exec___IOProcess___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "exec::IOProcess::init (bin/../lib/standard//exec.nit:143,2--147:34)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  /* check if p<Array[String] with p:String */
  if (( param1!=NIT_NULL) && !VAL_ISA( param1, COLOR_Array, ID_Array)) { fprintf(stderr, "Cast failled at bin/../lib/standard//exec.nit:143,30--49\n"); nit_exit(1); } /*cast Array[String]*/;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IOProcess].i]) return;
  ((exec___Process___execute_t)CALL( self,COLOR_exec___Process___execute))( self,  variable0 /*command*/,  variable1 /*arguments*/,  TAG_Int(3), init_table /*YYY*/) /*IOProcess::execute*/;
  ((exec___IProcess___init_t)CALL( self,COLOR_exec___IProcess___init))( self,  param0,  param1, init_table /*YYY*/) /*IProcess::init*/;
  ((exec___OProcess___init_t)CALL( self,COLOR_exec___OProcess___init))( self,  param0,  param1, init_table /*YYY*/) /*OProcess::init*/;
  variable2 = ATTR_exec___Process____data( self) /*IOProcess::_data*/;
  variable2 = ((exec___NativeProcess___out_fd_t)CALL(variable2,COLOR_exec___NativeProcess___out_fd))(variable2) /*NativeProcess::out_fd*/;
  variable3 = NEW_stream___FDIStream___init(variable2); /*new FDIStream*/
  variable2 = variable3;
  ATTR_exec___IProcess____in( self) /*IOProcess::_in*/ = variable2;
  variable2 = ATTR_exec___Process____data( self) /*IOProcess::_data*/;
  variable2 = ((exec___NativeProcess___in_fd_t)CALL(variable2,COLOR_exec___NativeProcess___in_fd))(variable2) /*NativeProcess::in_fd*/;
  variable3 = NEW_stream___FDOStream___init(variable2); /*new FDOStream*/
  variable2 = variable3;
  ATTR_exec___OProcess____out( self) /*IOProcess::_out*/ = variable2;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IOProcess].i] = 1;
  tracehead = trace.prev;
  return;
}
void exec___IOProcess___init_(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "exec::IOProcess::init_ (bin/../lib/standard//exec.nit:150,2--154:34)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IOProcess].i]) return;
  ((exec___Process___execute_t)CALL( self,COLOR_exec___Process___execute))( self,  variable0 /*command*/,  NIT_NULL /*null*/,  TAG_Int(3), init_table /*YYY*/) /*IOProcess::execute*/;
  ((exec___IProcess___init__t)CALL( self,COLOR_exec___IProcess___init_))( self,  param0, init_table /*YYY*/) /*IProcess::init_*/;
  ((exec___OProcess___init__t)CALL( self,COLOR_exec___OProcess___init_))( self,  param0, init_table /*YYY*/) /*OProcess::init_*/;
  variable1 = ATTR_exec___Process____data( self) /*IOProcess::_data*/;
  variable1 = ((exec___NativeProcess___out_fd_t)CALL(variable1,COLOR_exec___NativeProcess___out_fd))(variable1) /*NativeProcess::out_fd*/;
  variable2 = NEW_stream___FDIStream___init(variable1); /*new FDIStream*/
  variable1 = variable2;
  ATTR_exec___IProcess____in( self) /*IOProcess::_in*/ = variable1;
  variable1 = ATTR_exec___Process____data( self) /*IOProcess::_data*/;
  variable1 = ((exec___NativeProcess___in_fd_t)CALL(variable1,COLOR_exec___NativeProcess___in_fd))(variable1) /*NativeProcess::in_fd*/;
  variable2 = NEW_stream___FDOStream___init(variable1); /*new FDOStream*/
  variable1 = variable2;
  ATTR_exec___OProcess____out( self) /*IOProcess::_out*/ = variable1;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_IOProcess].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t exec___Sys___system(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "exec::Sys::system (bin/../lib/standard//exec.nit:159,2--162:34)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((string___String___to_cstring_t)CALL( variable0 /*command*/,COLOR_string___String___to_cstring))( variable0 /*command*/) /*String::to_cstring*/;
  variable1 = ((exec___NativeString___system_t)CALL(variable1,COLOR_exec___NativeString___system))(variable1) /*NativeString::system*/;
  goto return_label23;
  return_label23: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t exec___NativeString___system(val_t  self) {
  struct trace_t trace = {NULL, "exec::NativeString::system (bin/../lib/standard//exec.nit:167,2--71)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(string_NativeString_NativeString_system_0(UNBOX_NativeString( self)));
}
val_t exec___NativeProcess___id(val_t  self) {
  struct trace_t trace = {NULL, "exec::NativeProcess::id (bin/../lib/standard//exec.nit:172,2--63)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(exec_NativeProcess_NativeProcess_id_0(UNBOX_NativeProcess( self)));
}
val_t exec___NativeProcess___is_finished(val_t  self) {
  struct trace_t trace = {NULL, "exec::NativeProcess::is_finished (bin/../lib/standard//exec.nit:173,2--82)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(exec_NativeProcess_NativeProcess_is_finished_0(UNBOX_NativeProcess( self)));
}
val_t exec___NativeProcess___status(val_t  self) {
  struct trace_t trace = {NULL, "exec::NativeProcess::status (bin/../lib/standard//exec.nit:174,2--71)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(exec_NativeProcess_NativeProcess_status_0(UNBOX_NativeProcess( self)));
}
void exec___NativeProcess___wait(val_t  self) {
  struct trace_t trace = {NULL, "exec::NativeProcess::wait (bin/../lib/standard//exec.nit:175,2--62)"};
  trace.prev = tracehead; tracehead = &trace;
  exec_NativeProcess_NativeProcess_wait_0(UNBOX_NativeProcess( self));
  tracehead = trace.prev;
  return;
}
void exec___NativeProcess___kill(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "exec::NativeProcess::kill (bin/../lib/standard//exec.nit:176,2--70)"};
  trace.prev = tracehead; tracehead = &trace;
  exec_NativeProcess_NativeProcess_kill_1(UNBOX_NativeProcess( self), UNTAG_Int( param0));
  tracehead = trace.prev;
  return;
}
val_t exec___NativeProcess___in_fd(val_t  self) {
  struct trace_t trace = {NULL, "exec::NativeProcess::in_fd (bin/../lib/standard//exec.nit:178,2--69)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(exec_NativeProcess_NativeProcess_in_fd_0(UNBOX_NativeProcess( self)));
}
val_t exec___NativeProcess___out_fd(val_t  self) {
  struct trace_t trace = {NULL, "exec::NativeProcess::out_fd (bin/../lib/standard//exec.nit:179,2--71)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(exec_NativeProcess_NativeProcess_out_fd_0(UNBOX_NativeProcess( self)));
}
val_t exec___NativeProcess___err_fd(val_t  self) {
  struct trace_t trace = {NULL, "exec::NativeProcess::err_fd (bin/../lib/standard//exec.nit:180,2--71)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(exec_NativeProcess_NativeProcess_err_fd_0(UNBOX_NativeProcess( self)));
}
