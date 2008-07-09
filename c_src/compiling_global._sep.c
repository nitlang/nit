#include "compiling_global._sep.h"
val_t compiling_global___ColorContext___color(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::ColorContext::color (src/compiling//compiling_global.nit:28,2--31:18)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_compiling_global___ColorContext____colors( self) /*ColorContext::_colors*/;
  variable1 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*e*/) /*HashMap::[]*/;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_global___ColorContext___has_color(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::ColorContext::has_color (src/compiling//compiling_global.nit:34,2--37:46)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_compiling_global___ColorContext____colors( self) /*ColorContext::_colors*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*HashMap::==*/)))))));
  variable2 = variable1;
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ATTR_compiling_global___ColorContext____colors( self) /*ColorContext::_colors*/;
    variable2 = ((abstract_collection___CoupleMap___has_key_t)CALL(variable2,COLOR_abstract_collection___Map___has_key))(variable2,  variable0 /*e*/) /*HashMap::has_key*/;
  }
  variable1 = variable2;
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_global___ColorContext___color__eq(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::ColorContext::color= (src/compiling//compiling_global.nit:40,2--48:16)"};
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
  variable2 = ATTR_compiling_global___ColorContext____colors( self) /*ColorContext::_colors*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*HashMap::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_hash___HashMap___init(); /*new HashMap[TableElt, Int]*/
    ATTR_compiling_global___ColorContext____colors( self) /*ColorContext::_colors*/ = variable2;
  }
  variable2 = ATTR_compiling_global___ColorContext____colors( self) /*ColorContext::_colors*/;
  ((hash___HashMap_____braeq_t)CALL(variable2,COLOR_abstract_collection___Map_____braeq))(variable2,  variable0 /*e*/,  variable1 /*c*/) /*HashMap::[]=*/;
  variable2 =  variable1 /*c*/;
  variable3 = ((compiling_global___TableElt___length_t)CALL( variable0 /*e*/,COLOR_compiling_global___TableElt___length))( variable0 /*e*/) /*TableElt::length*/;
  variable4 = NEW_range___Range___without_last( TAG_Int(0), variable3); /*new Range[Int]*/
  variable3 = variable4;
  variable3 = ((range___Range___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Range::iterator*/;
  while (true) { /*for*/
    variable4 = ((abstract_collection___Iterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((abstract_collection___Iterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*Iterator::item*/;
    variable5 = ATTR_compiling_global___ColorContext____colors( self) /*ColorContext::_colors*/;
    variable6 = ((compiling_global___TableElt___item_t)CALL( variable0 /*e*/,COLOR_compiling_global___TableElt___item))( variable0 /*e*/,  variable4 /*i*/) /*TableElt::item*/;
    ((hash___HashMap_____braeq_t)CALL(variable5,COLOR_abstract_collection___Map_____braeq))(variable5, variable6,  variable2 /*idx*/) /*HashMap::[]=*/;
    variable5 = TAG_Int(UNTAG_Int( variable2 /*idx*/)+UNTAG_Int( TAG_Int(1)));
    variable2 = variable5 /*idx=*/;
    continue_3: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*Iterator::next*/;
  }
  break_3: while(0);
  tracehead = trace.prev;
  return;
}
val_t compiling_global___GlobalAnalysis___compiled_classes(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::GlobalAnalysis::compiled_classes (src/compiling//compiling_global.nit:56,2--57:70)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___GlobalAnalysis____compiled_classes( self) /*GlobalAnalysis::_compiled_classes*/;
}
val_t compiling_global___GlobalAnalysis___module(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::GlobalAnalysis::module (src/compiling//compiling_global.nit:59,2--60:32)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___GlobalAnalysis____module( self) /*GlobalAnalysis::_module*/;
}
val_t compiling_global___GlobalAnalysis___max_class_table_length(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::GlobalAnalysis::max_class_table_length (src/compiling//compiling_global.nit:62,2--63:52)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___GlobalAnalysis____max_class_table_length( self) /*GlobalAnalysis::_max_class_table_length*/;
}
void compiling_global___GlobalAnalysis___max_class_table_length__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::GlobalAnalysis::max_class_table_length= (src/compiling//compiling_global.nit:62,2--63:52)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_global___GlobalAnalysis____max_class_table_length( self) /*GlobalAnalysis::_max_class_table_length*/ =  param0;
  tracehead = trace.prev;
  return;
}
void compiling_global___GlobalAnalysis___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::GlobalAnalysis::init (src/compiling//compiling_global.nit:65,2--68:18)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_GlobalAnalysis].i]) return;
  variable1 = NEW_hash___HashMap___init(); /*new HashMap[MMGlobalClass, CompiledClass]*/
  ATTR_compiling_global___GlobalAnalysis____compiled_classes( self) /*GlobalAnalysis::_compiled_classes*/ = variable1;
  ATTR_compiling_global___GlobalAnalysis____module( self) /*GlobalAnalysis::_module*/ =  variable0 /*module*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_GlobalAnalysis].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___CompilerVisitor___global_analysis(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::CompilerVisitor::global_analysis (src/compiling//compiling_global.nit:73,2--74:56)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___CompilerVisitor____global_analysis( self) /*CompilerVisitor::_global_analysis*/;
}
void compiling_global___CompilerVisitor___global_analysis__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::CompilerVisitor::global_analysis= (src/compiling//compiling_global.nit:73,2--74:56)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_global___CompilerVisitor____global_analysis( self) /*CompilerVisitor::_global_analysis*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___CompiledClass___local_class(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::local_class (src/compiling//compiling_global.nit:80,2--81:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___CompiledClass____local_class( self) /*CompiledClass::_local_class*/;
}
val_t compiling_global___CompiledClass___id(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::id (src/compiling//compiling_global.nit:83,2--84:32)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___CompiledClass____id( self) /*CompiledClass::_id*/;
}
void compiling_global___CompiledClass___id__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::id= (src/compiling//compiling_global.nit:83,2--84:32)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_global___CompiledClass____id( self) /*CompiledClass::_id*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___CompiledClass___class_table(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::class_table (src/compiling//compiling_global.nit:86,2--87:52)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___CompiledClass____class_table( self) /*CompiledClass::_class_table*/;
}
void compiling_global___CompiledClass___class_table__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::class_table= (src/compiling//compiling_global.nit:86,2--87:52)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_global___CompiledClass____class_table( self) /*CompiledClass::_class_table*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___CompiledClass___instance_table(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::instance_table (src/compiling//compiling_global.nit:89,2--90:55)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___CompiledClass____instance_table( self) /*CompiledClass::_instance_table*/;
}
void compiling_global___CompiledClass___instance_table__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::instance_table= (src/compiling//compiling_global.nit:89,2--90:55)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_global___CompiledClass____instance_table( self) /*CompiledClass::_instance_table*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___CompiledClass___class_layout(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::class_layout (src/compiling//compiling_global.nit:92,2--93:56)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___CompiledClass____class_layout( self) /*CompiledClass::_class_layout*/;
}
void compiling_global___CompiledClass___class_layout__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::class_layout= (src/compiling//compiling_global.nit:92,2--93:56)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_global___CompiledClass____class_layout( self) /*CompiledClass::_class_layout*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___CompiledClass___instance_layout(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::instance_layout (src/compiling//compiling_global.nit:95,2--96:59)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___CompiledClass____instance_layout( self) /*CompiledClass::_instance_layout*/;
}
void compiling_global___CompiledClass___instance_layout__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::instance_layout= (src/compiling//compiling_global.nit:95,2--96:59)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_global___CompiledClass____instance_layout( self) /*CompiledClass::_instance_layout*/ =  param0;
  tracehead = trace.prev;
  return;
}
void compiling_global___CompiledClass___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::CompiledClass::init (src/compiling//compiling_global.nit:98,2--42)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_CompiledClass].i]) return;
  ATTR_compiling_global___CompiledClass____local_class( self) /*CompiledClass::_local_class*/ =  variable0 /*c*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_CompiledClass].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___MMGlobalProperty___pos_of(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::MMGlobalProperty::pos_of (src/compiling//compiling_global.nit:102,2--104:36)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___MMGlobalProperty____pos_of( self) /*MMGlobalProperty::_pos_of*/;
}
void compiling_global___MMGlobalProperty___pos_of__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::MMGlobalProperty::pos_of= (src/compiling//compiling_global.nit:102,2--104:36)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_compiling_global___MMGlobalProperty____pos_of( self) /*MMGlobalProperty::_pos_of*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___MMSrcLocalClass___base_attr_pos(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcLocalClass::base_attr_pos (src/compiling//compiling_global.nit:108,2--109:50)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___MMSrcLocalClass____base_attr_pos( self) /*MMSrcLocalClass::_base_attr_pos*/;
}
val_t compiling_global___MMSrcLocalClass___class_color_pos(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcLocalClass::class_color_pos (src/compiling//compiling_global.nit:111,2--112:54)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___MMSrcLocalClass____class_color_pos( self) /*MMSrcLocalClass::_class_color_pos*/;
}
val_t compiling_global___MMSrcLocalClass___class_layout(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcLocalClass::class_layout (src/compiling//compiling_global.nit:114,2--115:49)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___MMSrcLocalClass____class_layout( self) /*MMSrcLocalClass::_class_layout*/;
}
val_t compiling_global___MMSrcLocalClass___instance_layout(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcLocalClass::instance_layout (src/compiling//compiling_global.nit:117,2--118:52)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_compiling_global___MMSrcLocalClass____instance_layout( self) /*MMSrcLocalClass::_instance_layout*/;
}
void compiling_global___MMSrcLocalClass___build_layout_in(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcLocalClass::build_layout_in (src/compiling//compiling_global.nit:120,2--160:25)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = NEW_array___Array___init(); /*new Array[MMGlobalProperty]*/
  variable2 = variable3;
  variable4 = NEW_array___Array___init(); /*new Array[MMGlobalProperty]*/
  variable3 = variable4;
  variable5 = NEW_array___Array___init(); /*new Array[LocalTableElt]*/
  variable4 = variable5;
  ATTR_compiling_global___MMSrcLocalClass____class_layout( self) /*MMSrcLocalClass::_class_layout*/ =  variable4 /*clt*/;
  variable6 = NEW_array___Array___init(); /*new Array[LocalTableElt]*/
  variable5 = variable6;
  ATTR_compiling_global___MMSrcLocalClass____instance_layout( self) /*MMSrcLocalClass::_instance_layout*/ =  variable5 /*ilt*/;
  variable6 = ((abstractmetamodel___MMLocalClass___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___global))( self) /*MMSrcLocalClass::global*/;
  variable6 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL(variable6,COLOR_abstractmetamodel___MMGlobalClass___intro))(variable6) /*MMGlobalClass::intro*/;
  variable6 = TAG_Bool((variable6 ==  self) || ((variable6 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable6, self)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))(variable6,  self) /*MMLocalClass::==*/)))));
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_compiling_global___TableEltClassIdPos___init( self); /*new TableEltClassIdPos*/
    ((array___AbstractArray___add_t)CALL( variable1 /*module_table*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*module_table*/, variable6) /*Array::add*/;
    variable6 = NEW_compiling_global___TableEltClassColorPos___init( self); /*new TableEltClassColorPos*/
    ATTR_compiling_global___MMSrcLocalClass____class_color_pos( self) /*MMSrcLocalClass::_class_color_pos*/ = variable6;
    variable6 = ATTR_compiling_global___MMSrcLocalClass____class_color_pos( self) /*MMSrcLocalClass::_class_color_pos*/;
    ((array___AbstractArray___add_t)CALL( variable1 /*module_table*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*module_table*/, variable6) /*Array::add*/;
    variable6 = NEW_compiling_global___TableEltClassInitTablePos___init( self); /*new TableEltClassInitTablePos*/
    ((array___AbstractArray___add_t)CALL( variable4 /*clt*/,COLOR_abstract_collection___SimpleCollection___add))( variable4 /*clt*/, variable6) /*Array::add*/;
  }
  variable6 = ((syntax_base___MMSrcLocalClass___src_local_properties_t)CALL( self,COLOR_syntax_base___MMSrcLocalClass___src_local_properties))( self) /*MMSrcLocalClass::src_local_properties*/;
  variable6 = ((abstract_collection___Map___iterator_t)CALL(variable6,COLOR_abstract_collection___Collection___iterator))(variable6) /*Map::iterator*/;
  while (true) { /*for*/
    variable7 = ((abstract_collection___Iterator___is_ok_t)CALL(variable6,COLOR_abstract_collection___Iterator___is_ok))(variable6) /*MapIterator::is_ok*/;
    if (!UNTAG_Bool(variable7)) break; /*for*/
    variable7 = ((abstract_collection___Iterator___item_t)CALL(variable6,COLOR_abstract_collection___Iterator___item))(variable6) /*MapIterator::item*/;
    variable9 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable7 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable7 /*p*/) /*MMSrcLocalProperty::global*/;
    variable8 = variable9;
    variable9 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( variable8 /*pg*/,COLOR_abstractmetamodel___MMGlobalProperty___intro))( variable8 /*pg*/) /*MMGlobalProperty::intro*/;
    variable9 = TAG_Bool((variable9 ==  variable7 /*p*/) || ((variable9 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable9,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable9, variable7 /*p*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable9,COLOR_kernel___Object_____eqeq))(variable9,  variable7 /*p*/) /*MMConcreteProperty::==*/)))));
    if (UNTAG_Bool(variable9)) { /*if*/
      variable9 = TAG_Bool(( variable7 /*p*/==NIT_NULL) || VAL_ISA( variable7 /*p*/, COLOR_MMSrcAttribute, ID_MMSrcAttribute)) /*cast MMSrcAttribute*/;
      if (UNTAG_Bool(variable9)) { /*if*/
        variable9 = ((array___AbstractArray___length_t)CALL( variable3 /*intro_attributes*/,COLOR_abstract_collection___Collection___length))( variable3 /*intro_attributes*/) /*Array::length*/;
        ((compiling_global___MMGlobalProperty___pos_of__eq_t)CALL( variable8 /*pg*/,COLOR_compiling_global___MMGlobalProperty___pos_of__eq))( variable8 /*pg*/, variable9) /*MMGlobalProperty::pos_of=*/;
        ((array___AbstractArray___add_t)CALL( variable3 /*intro_attributes*/,COLOR_abstract_collection___SimpleCollection___add))( variable3 /*intro_attributes*/,  variable8 /*pg*/) /*Array::add*/;
        variable9 = NEW_compiling_global___TableEltAttrPos___init( variable7 /*p*/); /*new TableEltAttrPos*/
        ((array___AbstractArray___add_t)CALL( variable5 /*ilt*/,COLOR_abstract_collection___SimpleCollection___add))( variable5 /*ilt*/, variable9) /*Array::add*/;
      } else { /*if*/
        variable9 = TAG_Bool(( variable7 /*p*/==NIT_NULL) || VAL_ISA( variable7 /*p*/, COLOR_MMSrcMethod, ID_MMSrcMethod)) /*cast MMSrcMethod*/;
        if (UNTAG_Bool(variable9)) { /*if*/
          variable9 = ((array___AbstractArray___length_t)CALL( variable2 /*intro_methods*/,COLOR_abstract_collection___Collection___length))( variable2 /*intro_methods*/) /*Array::length*/;
          ((compiling_global___MMGlobalProperty___pos_of__eq_t)CALL( variable8 /*pg*/,COLOR_compiling_global___MMGlobalProperty___pos_of__eq))( variable8 /*pg*/, variable9) /*MMGlobalProperty::pos_of=*/;
          ((array___AbstractArray___add_t)CALL( variable2 /*intro_methods*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*intro_methods*/,  variable8 /*pg*/) /*Array::add*/;
          variable9 = NEW_compiling_global___TableEltMethPos___init( variable7 /*p*/); /*new TableEltMethPos*/
          ((array___AbstractArray___add_t)CALL( variable4 /*clt*/,COLOR_abstract_collection___SimpleCollection___add))( variable4 /*clt*/, variable9) /*Array::add*/;
        }
      }
    }
    variable9 = TAG_Bool(( variable7 /*p*/==NIT_NULL) || VAL_ISA( variable7 /*p*/, COLOR_MMSrcMethod, ID_MMSrcMethod)) /*cast MMSrcMethod*/;
    variable10 = variable9;
    if (UNTAG_Bool(variable10)) { /* and */
      variable10 = ((abstractmetamodel___MMConcreteProperty___need_super_t)CALL( variable7 /*p*/,COLOR_abstractmetamodel___MMConcreteProperty___need_super))( variable7 /*p*/) /*MMSrcMethod::need_super*/;
    }
    variable9 = variable10;
    if (UNTAG_Bool(variable9)) { /*if*/
      variable9 = NEW_compiling_global___TableEltSuperPos___init( variable7 /*p*/); /*new TableEltSuperPos*/
      ((array___AbstractArray___add_t)CALL( variable4 /*clt*/,COLOR_abstract_collection___SimpleCollection___add))( variable4 /*clt*/, variable9) /*Array::add*/;
    }
    continue_7: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable6,COLOR_abstract_collection___Iterator___next))(variable6) /*MapIterator::next*/;
  }
  break_7: while(0);
  variable6 = ((compiling_base___ToolContext___attr_sim_t)CALL( variable0 /*tc*/,COLOR_compiling_base___ToolContext___attr_sim))( variable0 /*tc*/) /*ToolContext::attr_sim*/;
  variable7 = variable6;
  if (UNTAG_Bool(variable7)) { /* and */
    variable7 = ((array___AbstractArray___is_empty_t)CALL( variable3 /*intro_attributes*/,COLOR_abstract_collection___Collection___is_empty))( variable3 /*intro_attributes*/) /*Array::is_empty*/;
    variable7 =  TAG_Bool(!UNTAG_Bool(variable7));
  }
  variable6 = variable7;
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_compiling_global___TableEltBaseAttrPos___init( self); /*new TableEltBaseAttrPos*/
    ATTR_compiling_global___MMSrcLocalClass____base_attr_pos( self) /*MMSrcLocalClass::_base_attr_pos*/ = variable6;
    variable6 = ATTR_compiling_global___MMSrcLocalClass____base_attr_pos( self) /*MMSrcLocalClass::_base_attr_pos*/;
    ((array___AbstractArray___add_t)CALL( variable4 /*clt*/,COLOR_abstract_collection___SimpleCollection___add))( variable4 /*clt*/, variable6) /*Array::add*/;
  } else { /*if*/
    ((abstract_collection___IndexedCollection___append_t)CALL( variable1 /*module_table*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*module_table*/,  variable5 /*ilt*/) /*Array::append*/;
  }
  ((abstract_collection___IndexedCollection___append_t)CALL( variable1 /*module_table*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*module_table*/,  variable4 /*clt*/) /*Array::append*/;
  tracehead = trace.prev;
  return;
}
void compiling_global___MMSrcModule___local_analysis(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcModule::local_analysis (src/compiling//compiling_global.nit:168,2--174:27)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_array___Array___init(); /*new Array[LocalTableElt]*/
  variable1 = variable2;
  ATTR_compiling_global___MMSrcModule____local_table( self) /*MMSrcModule::_local_table*/ =  variable1 /*lt*/;
  variable2 = ((syntax_base___MMSrcModule___src_local_classes_t)CALL( self,COLOR_syntax_base___MMSrcModule___src_local_classes))( self) /*MMSrcModule::src_local_classes*/;
  variable2 = ((abstract_collection___Map___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Map::iterator*/;
  while (true) { /*for*/
    variable3 = ((abstract_collection___Iterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*MapIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((abstract_collection___Iterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*MapIterator::item*/;
    ((compiling_global___MMSrcLocalClass___build_layout_in_t)CALL( variable3 /*c*/,COLOR_compiling_global___MMSrcLocalClass___build_layout_in))( variable3 /*c*/,  variable0 /*tc*/,  variable1 /*lt*/) /*MMSrcLocalClass::build_layout_in*/;
    continue_9: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*MapIterator::next*/;
  }
  break_9: while(0);
  tracehead = trace.prev;
  return;
}
val_t compiling_global___MMSrcModule___global_analysis(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcModule::global_analysis (src/compiling//compiling_global.nit:178,2--335:11)"};
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
      val_t variable18;
      val_t variable19;
      val_t variable20;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_compiling_global___GlobalAnalysis___init( self); /*new GlobalAnalysis*/
  variable1 = variable2;
  variable3 = NEW_array___Array___init(); /*new Array[MMLocalClass]*/
  variable2 = variable3;
  variable4 = NEW_hash___HashSet___init(); /*new HashSet[MMGlobalProperty]*/
  variable3 = variable4;
  variable5 = NEW_array___Array___init(); /*new Array[TableElt]*/
  variable4 = variable5;
  variable6 = NEW_array___Array___init(); /*new Array[TableElt]*/
  variable5 = variable6;
  variable6 = NEW_compiling_global___TableEltClassSelfId___init(); /*new TableEltClassSelfId*/
  ((array___AbstractArray___add_t)CALL( variable4 /*ctab*/,COLOR_abstract_collection___SimpleCollection___add))( variable4 /*ctab*/, variable6) /*Array::add*/;
  variable6 = NEW_compiling_global___TableEltVftPointer___init(); /*new TableEltVftPointer*/
  ((array___AbstractArray___add_t)CALL( variable5 /*itab*/,COLOR_abstract_collection___SimpleCollection___add))( variable5 /*itab*/, variable6) /*Array::add*/;
  variable7 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  variable6 = variable7;
  variable7 =  TAG_Int(3);
  variable9 = NEW_array___Array___init(); /*new Array[MMLocalClass]*/
  variable8 = variable9;
  variable9 = ((abstractmetamodel___MMModule___local_classes_t)CALL( self,COLOR_abstractmetamodel___MMModule___local_classes))( self) /*MMSrcModule::local_classes*/;
  variable9 = ((array___AbstractArray___iterator_t)CALL(variable9,COLOR_abstract_collection___Collection___iterator))(variable9) /*Array::iterator*/;
  while (true) { /*for*/
    variable10 = ((array___ArrayIterator___is_ok_t)CALL(variable9,COLOR_abstract_collection___Iterator___is_ok))(variable9) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable10)) break; /*for*/
    variable10 = ((array___ArrayIterator___item_t)CALL(variable9,COLOR_abstract_collection___Iterator___item))(variable9) /*ArrayIterator::item*/;
    ((inheritance___MMLocalClass___compute_super_classes_t)CALL( variable10 /*c*/,COLOR_inheritance___MMLocalClass___compute_super_classes))( variable10 /*c*/) /*MMLocalClass::compute_super_classes*/;
    ((array___AbstractArray___add_t)CALL( variable8 /*classes*/,COLOR_abstract_collection___SimpleCollection___add))( variable8 /*classes*/,  variable10 /*c*/) /*Array::add*/;
    continue_11: while(0);
    ((array___ArrayIterator___next_t)CALL(variable9,COLOR_abstract_collection___Iterator___next))(variable9) /*ArrayIterator::next*/;
  }
  break_11: while(0);
  variable9 = NEW_compiling_global___ClassSorter___init(); /*new ClassSorter*/
  ((sorter___AbstractSorter___sort_t)CALL(variable9,COLOR_sorter___AbstractSorter___sort))(variable9,  variable8 /*classes*/) /*ClassSorter::sort*/;
  variable9 = ((array___AbstractArray___iterator_t)CALL( variable8 /*classes*/,COLOR_abstract_collection___Collection___iterator))( variable8 /*classes*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable10 = ((array___ArrayIterator___is_ok_t)CALL(variable9,COLOR_abstract_collection___Iterator___is_ok))(variable9) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable10)) break; /*for*/
    variable10 = ((array___ArrayIterator___item_t)CALL(variable9,COLOR_abstract_collection___Iterator___item))(variable9) /*ArrayIterator::item*/;
    ((inheritance___MMLocalClass___compute_ancestors_t)CALL( variable10 /*c*/,COLOR_inheritance___MMLocalClass___compute_ancestors))( variable10 /*c*/) /*MMLocalClass::compute_ancestors*/;
    ((inheritance___MMLocalClass___inherit_global_properties_t)CALL( variable10 /*c*/,COLOR_inheritance___MMLocalClass___inherit_global_properties))( variable10 /*c*/) /*MMLocalClass::inherit_global_properties*/;
    variable12 = NEW_compiling_global___CompiledClass___init( variable10 /*c*/); /*new CompiledClass*/
    variable11 = variable12;
    variable12 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL( variable1 /*ga*/,COLOR_compiling_global___GlobalAnalysis___compiled_classes))( variable1 /*ga*/) /*GlobalAnalysis::compiled_classes*/;
    variable13 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable10 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable10 /*c*/) /*MMLocalClass::global*/;
    ((hash___HashMap_____braeq_t)CALL(variable12,COLOR_abstract_collection___Map_____braeq))(variable12, variable13,  variable11 /*cc*/) /*HashMap::[]=*/;
    variable13 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable10 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable10 /*c*/) /*MMLocalClass::global*/;
    variable12 = variable13;
    variable14 = ((abstractmetamodel___MMGlobalClass___module_t)CALL( variable12 /*gc*/,COLOR_abstractmetamodel___MMGlobalClass___module))( variable12 /*gc*/) /*MMGlobalClass::module*/;
    variable13 = variable14;
    variable14 = ((compiling_base___MMLocalClass___primitive_info_t)CALL( variable10 /*c*/,COLOR_compiling_base___MMLocalClass___primitive_info))( variable10 /*c*/) /*MMLocalClass::primitive_info*/;
    variable14 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable14 ==  NIT_NULL /*null*/) || ((variable14 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable14,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable14, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable14,COLOR_kernel___Object_____eqeq))(variable14,  NIT_NULL /*null*/) /*PrimitiveInfo::==*/)))))));
    if (UNTAG_Bool(variable14)) { /*if*/
      ((compiling_global___CompiledClass___id__eq_t)CALL( variable11 /*cc*/,COLOR_compiling_global___CompiledClass___id__eq))( variable11 /*cc*/,  variable6 /*pclassid*/) /*CompiledClass::id=*/;
      variable14 = TAG_Int(UNTAG_Int( variable6 /*pclassid*/)-UNTAG_Int( TAG_Int(4)));
      variable6 = variable14 /*pclassid=*/;
    } else { /*if*/
      ((compiling_global___CompiledClass___id__eq_t)CALL( variable11 /*cc*/,COLOR_compiling_global___CompiledClass___id__eq))( variable11 /*cc*/,  variable7 /*classid*/) /*CompiledClass::id=*/;
      variable14 = TAG_Int(UNTAG_Int( variable7 /*classid*/)+UNTAG_Int( TAG_Int(4)));
      variable7 = variable14 /*classid=*/;
    }
    variable14 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable10 /*c*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable10 /*c*/) /*MMLocalClass::cshe*/;
    variable14 = ((partial_order___PartialOrderElement___direct_smallers_t)CALL(variable14,COLOR_partial_order___PartialOrderElement___direct_smallers))(variable14) /*PartialOrderElement::direct_smallers*/;
    variable14 = ((array___AbstractArray___is_empty_t)CALL(variable14,COLOR_abstract_collection___Collection___is_empty))(variable14) /*Array::is_empty*/;
    if (UNTAG_Bool(variable14)) { /*if*/
      ((array___AbstractArray___add_t)CALL( variable2 /*smallest_classes*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*smallest_classes*/,  variable10 /*c*/) /*Array::add*/;
    }
    variable15 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable10 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable10 /*c*/) /*MMLocalClass::global*/;
    variable15 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL(variable15,COLOR_abstractmetamodel___MMGlobalClass___intro))(variable15) /*MMGlobalClass::intro*/;
    variable14 = variable15;
    variable15 = TAG_Bool(( variable14 /*bc*/==NIT_NULL) || VAL_ISA( variable14 /*bc*/, COLOR_MMSrcLocalClass, ID_MMSrcLocalClass)) /*cast MMSrcLocalClass*/;
    if (!UNTAG_Bool(variable15)) { fprintf(stderr, "Assert failed: src/compiling//compiling_global.nit:230,4--32\n"); nit_exit(1);}
    variable15 = ((compiling_global___MMSrcLocalClass___class_color_pos_t)CALL( variable14 /*bc*/,COLOR_compiling_global___MMSrcLocalClass___class_color_pos))( variable14 /*bc*/) /*MMSrcLocalClass::class_color_pos*/;
    ((array___AbstractArray___add_t)CALL( variable4 /*ctab*/,COLOR_abstract_collection___SimpleCollection___add))( variable4 /*ctab*/, variable15) /*Array::add*/;
    continue_12: while(0);
    ((array___ArrayIterator___next_t)CALL(variable9,COLOR_abstract_collection___Iterator___next))(variable9) /*ArrayIterator::next*/;
  }
  break_12: while(0);
  variable10 = NEW_hash___HashSet___init(); /*new HashSet[MMLocalClass]*/
  variable9 = variable10;
  variable11 = NEW_hash___HashSet___init(); /*new HashSet[MMLocalClass]*/
  variable10 = variable11;
  variable11 = ((array___AbstractArray___iterator_t)CALL( variable2 /*smallest_classes*/,COLOR_abstract_collection___Collection___iterator))( variable2 /*smallest_classes*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable12 = ((array___ArrayIterator___is_ok_t)CALL(variable11,COLOR_abstract_collection___Iterator___is_ok))(variable11) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable12)) break; /*for*/
    variable12 = ((array___ArrayIterator___item_t)CALL(variable11,COLOR_abstract_collection___Iterator___item))(variable11) /*ArrayIterator::item*/;
    while (true) { /*while*/
      variable13 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable12 /*c*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable12 /*c*/) /*MMLocalClass::cshe*/;
      variable13 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable13,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable13) /*PartialOrderElement::direct_greaters*/;
      variable13 = ((array___AbstractArray___length_t)CALL(variable13,COLOR_abstract_collection___Collection___length))(variable13) /*Array::length*/;
      variable13 = TAG_Bool((variable13)==( TAG_Int(1)));
      if (!UNTAG_Bool(variable13)) break; /* while*/
      variable13 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable12 /*c*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable12 /*c*/) /*MMLocalClass::cshe*/;
      variable13 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable13,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable13) /*PartialOrderElement::direct_greaters*/;
      variable13 = ((abstract_collection___IndexedCollection___first_t)CALL(variable13,COLOR_abstract_collection___Collection___first))(variable13) /*Array::first*/;
      variable12 = variable13 /*c=*/;
      continue_14: while(0);
    }
    break_14: while(0);
    ((hash___HashSet___add_t)CALL( variable9 /*crown_classes*/,COLOR_abstract_collection___SimpleCollection___add))( variable9 /*crown_classes*/,  variable12 /*c*/) /*HashSet::add*/;
    variable13 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable12 /*c*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable12 /*c*/) /*MMLocalClass::cshe*/;
    variable13 = ((partial_order___PartialOrderElement___greaters_and_self_t)CALL(variable13,COLOR_partial_order___PartialOrderElement___greaters_and_self))(variable13) /*PartialOrderElement::greaters_and_self*/;
    ((abstract_collection___SimpleCollection___add_all_t)CALL( variable10 /*core_classes*/,COLOR_abstract_collection___SimpleCollection___add_all))( variable10 /*core_classes*/, variable13) /*HashSet::add_all*/;
    continue_13: while(0);
    ((array___ArrayIterator___next_t)CALL(variable11,COLOR_abstract_collection___Iterator___next))(variable11) /*ArrayIterator::next*/;
  }
  break_13: while(0);
  ((compiling_global___MMSrcModule___colorize_t)CALL( self,COLOR_compiling_global___MMSrcModule___colorize))( self,  variable1 /*ga*/,  variable4 /*ctab*/,  variable9 /*crown_classes*/,  TAG_Int(0)) /*MMSrcModule::colorize*/;
  variable11 =  TAG_Int(0);
  variable12 = ((array___AbstractArray___iterator_t)CALL( variable8 /*classes*/,COLOR_abstract_collection___Collection___iterator))( variable8 /*classes*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable13 = ((array___ArrayIterator___is_ok_t)CALL(variable12,COLOR_abstract_collection___Iterator___is_ok))(variable12) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable13)) break; /*for*/
    variable13 = ((array___ArrayIterator___item_t)CALL(variable12,COLOR_abstract_collection___Iterator___item))(variable12) /*ArrayIterator::item*/;
    variable15 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL( variable1 /*ga*/,COLOR_compiling_global___GlobalAnalysis___compiled_classes))( variable1 /*ga*/) /*GlobalAnalysis::compiled_classes*/;
    variable16 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable13 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable13 /*c*/) /*MMLocalClass::global*/;
    variable15 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable15,COLOR_abstract_collection___Map_____bra))(variable15, variable16) /*HashMap::[]*/;
    variable14 = variable15;
    variable15 = ((hash___HashSet___has_t)CALL( variable10 /*core_classes*/,COLOR_abstract_collection___Collection___has))( variable10 /*core_classes*/,  variable13 /*c*/) /*HashSet::has*/;
    if (UNTAG_Bool(variable15)) { /*if*/
      variable15 = ((compiling_global___MMSrcModule___build_tables_t)CALL( self,COLOR_compiling_global___MMSrcModule___build_tables))( self,  variable1 /*ga*/,  variable13 /*c*/,  variable4 /*ctab*/) /*MMSrcModule::build_tables*/;
      ((compiling_global___CompiledClass___class_table__eq_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table__eq))( variable14 /*cc*/, variable15) /*CompiledClass::class_table=*/;
      variable15 = ((compiling_global___CompiledClass___class_table_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table))( variable14 /*cc*/) /*CompiledClass::class_table*/;
      variable15 = ((array___AbstractArray___length_t)CALL(variable15,COLOR_abstract_collection___Collection___length))(variable15) /*Array::length*/;
      variable15 = TAG_Bool(UNTAG_Int( variable11 /*maxcolor*/)<UNTAG_Int(variable15));
      if (UNTAG_Bool(variable15)) { /*if*/
        variable15 = ((compiling_global___CompiledClass___class_table_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table))( variable14 /*cc*/) /*CompiledClass::class_table*/;
        variable15 = ((array___AbstractArray___length_t)CALL(variable15,COLOR_abstract_collection___Collection___length))(variable15) /*Array::length*/;
        variable11 = variable15 /*maxcolor=*/;
      }
    } else { /*if*/
      variable16 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable13 /*c*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable13 /*c*/) /*MMLocalClass::cshe*/;
      variable16 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable16,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable16) /*PartialOrderElement::direct_greaters*/;
      variable16 = ((abstract_collection___IndexedCollection___first_t)CALL(variable16,COLOR_abstract_collection___Collection___first))(variable16) /*Array::first*/;
      variable15 = variable16;
      variable17 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL( variable1 /*ga*/,COLOR_compiling_global___GlobalAnalysis___compiled_classes))( variable1 /*ga*/) /*GlobalAnalysis::compiled_classes*/;
      variable18 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable15 /*sc*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable15 /*sc*/) /*MMLocalClass::global*/;
      variable17 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable17,COLOR_abstract_collection___Map_____bra))(variable17, variable18) /*HashMap::[]*/;
      variable16 = variable17;
      variable17 = ((compiling_global___CompiledClass___class_table_t)CALL( variable16 /*scc*/,COLOR_compiling_global___CompiledClass___class_table))( variable16 /*scc*/) /*CompiledClass::class_table*/;
      variable17 = ((array___Collection___to_a_t)CALL(variable17,COLOR_array___Collection___to_a))(variable17) /*Array::to_a*/;
      ((compiling_global___CompiledClass___class_table__eq_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table__eq))( variable14 /*cc*/, variable17) /*CompiledClass::class_table=*/;
      variable18 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable13 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable13 /*c*/) /*MMLocalClass::global*/;
      variable18 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL(variable18,COLOR_abstractmetamodel___MMGlobalClass___intro))(variable18) /*MMGlobalClass::intro*/;
      variable17 = variable18;
      variable18 = TAG_Bool(( variable17 /*bc*/==NIT_NULL) || VAL_ISA( variable17 /*bc*/, COLOR_MMSrcLocalClass, ID_MMSrcLocalClass)) /*cast MMSrcLocalClass*/;
      if (!UNTAG_Bool(variable18)) { fprintf(stderr, "Assert failed: src/compiling//compiling_global.nit:263,5--33\n"); nit_exit(1);}
      variable19 = ((compiling_global___MMSrcLocalClass___class_color_pos_t)CALL( variable17 /*bc*/,COLOR_compiling_global___MMSrcLocalClass___class_color_pos))( variable17 /*bc*/) /*MMSrcLocalClass::class_color_pos*/;
      variable18 = variable19;
      variable20 = ((compiling_global___CompiledClass___class_table_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table))( variable14 /*cc*/) /*CompiledClass::class_table*/;
      variable20 = ((array___AbstractArray___length_t)CALL(variable20,COLOR_abstract_collection___Collection___length))(variable20) /*Array::length*/;
      variable19 = variable20;
      ((compiling_global___ColorContext___color__eq_t)CALL( variable1 /*ga*/,COLOR_compiling_global___ColorContext___color__eq))( variable1 /*ga*/,  variable18 /*colpos*/,  variable19 /*colposcolor*/) /*GlobalAnalysis::color=*/;
      variable20 = ((compiling_global___CompiledClass___class_table_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table))( variable14 /*cc*/) /*CompiledClass::class_table*/;
      ((array___AbstractArray___add_t)CALL(variable20,COLOR_abstract_collection___SimpleCollection___add))(variable20,  variable18 /*colpos*/) /*Array::add*/;
      variable20 = TAG_Bool(UNTAG_Int( variable11 /*maxcolor*/)<UNTAG_Int( variable19 /*colposcolor*/));
      if (UNTAG_Bool(variable20)) { /*if*/
        variable11 =  variable19 /*colposcolor*/ /*maxcolor=*/;
      }
    }
    continue_15: while(0);
    ((array___ArrayIterator___next_t)CALL(variable12,COLOR_abstract_collection___Iterator___next))(variable12) /*ArrayIterator::next*/;
  }
  break_15: while(0);
  variable12 = TAG_Int(UNTAG_Int( variable11 /*maxcolor*/)+UNTAG_Int( TAG_Int(1)));
  ((compiling_global___GlobalAnalysis___max_class_table_length__eq_t)CALL( variable1 /*ga*/,COLOR_compiling_global___GlobalAnalysis___max_class_table_length__eq))( variable1 /*ga*/, variable12) /*GlobalAnalysis::max_class_table_length=*/;
  variable12 = ((array___AbstractArray___iterator_t)CALL( variable8 /*classes*/,COLOR_abstract_collection___Collection___iterator))( variable8 /*classes*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable13 = ((array___ArrayIterator___is_ok_t)CALL(variable12,COLOR_abstract_collection___Iterator___is_ok))(variable12) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable13)) break; /*for*/
    variable13 = ((array___ArrayIterator___item_t)CALL(variable12,COLOR_abstract_collection___Iterator___item))(variable12) /*ArrayIterator::item*/;
    variable15 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL( variable1 /*ga*/,COLOR_compiling_global___GlobalAnalysis___compiled_classes))( variable1 /*ga*/) /*GlobalAnalysis::compiled_classes*/;
    variable16 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable13 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable13 /*c*/) /*MMLocalClass::global*/;
    variable15 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable15,COLOR_abstract_collection___Map_____bra))(variable15, variable16) /*HashMap::[]*/;
    variable14 = variable15;
    variable16 = NEW_compiling_global___TableEltComposite___init( variable14 /*cc*/); /*new TableEltComposite*/
    variable15 = variable16;
    variable17 = NEW_compiling_global___TableEltComposite___init( variable14 /*cc*/); /*new TableEltComposite*/
    variable16 = variable17;
    variable17 = ((abstractmetamodel___MMLocalClass___crhe_t)CALL( variable13 /*c*/,COLOR_abstractmetamodel___MMLocalClass___crhe))( variable13 /*c*/) /*MMLocalClass::crhe*/;
    variable17 = ((partial_order___PartialOrderElement___greaters_and_self_t)CALL(variable17,COLOR_partial_order___PartialOrderElement___greaters_and_self))(variable17) /*PartialOrderElement::greaters_and_self*/;
    variable17 = ((abstract_collection___Collection___iterator_t)CALL(variable17,COLOR_abstract_collection___Collection___iterator))(variable17) /*Collection::iterator*/;
    while (true) { /*for*/
      variable18 = ((abstract_collection___Iterator___is_ok_t)CALL(variable17,COLOR_abstract_collection___Iterator___is_ok))(variable17) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable18)) break; /*for*/
      variable18 = ((abstract_collection___Iterator___item_t)CALL(variable17,COLOR_abstract_collection___Iterator___item))(variable17) /*Iterator::item*/;
      variable19 = TAG_Bool(( variable18 /*sc*/==NIT_NULL) || VAL_ISA( variable18 /*sc*/, COLOR_MMSrcLocalClass, ID_MMSrcLocalClass)) /*cast MMSrcLocalClass*/;
      if (UNTAG_Bool(variable19)) { /*if*/
        variable19 = ((compiling_global___MMSrcLocalClass___class_layout_t)CALL( variable18 /*sc*/,COLOR_compiling_global___MMSrcLocalClass___class_layout))( variable18 /*sc*/) /*MMSrcLocalClass::class_layout*/;
        ((compiling_global___TableEltComposite___add_t)CALL( variable15 /*cte*/,COLOR_compiling_global___TableEltComposite___add))( variable15 /*cte*/,  variable18 /*sc*/, variable19) /*TableEltComposite::add*/;
        variable19 = ((compiling_global___MMSrcLocalClass___instance_layout_t)CALL( variable18 /*sc*/,COLOR_compiling_global___MMSrcLocalClass___instance_layout))( variable18 /*sc*/) /*MMSrcLocalClass::instance_layout*/;
        ((compiling_global___TableEltComposite___add_t)CALL( variable16 /*ite*/,COLOR_compiling_global___TableEltComposite___add))( variable16 /*ite*/,  variable18 /*sc*/, variable19) /*TableEltComposite::add*/;
      }
      ((compiling_global___CompiledClass___class_layout__eq_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_layout__eq))( variable14 /*cc*/,  variable15 /*cte*/) /*CompiledClass::class_layout=*/;
      ((compiling_global___CompiledClass___instance_layout__eq_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___instance_layout__eq))( variable14 /*cc*/,  variable16 /*ite*/) /*CompiledClass::instance_layout=*/;
      continue_17: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable17,COLOR_abstract_collection___Iterator___next))(variable17) /*Iterator::next*/;
    }
    break_17: while(0);
    variable17 = ((hash___HashSet___has_t)CALL( variable10 /*core_classes*/,COLOR_abstract_collection___Collection___has))( variable10 /*core_classes*/,  variable13 /*c*/) /*HashSet::has*/;
    if (UNTAG_Bool(variable17)) { /*if*/
      variable17 = ((compiling_global___TableEltComposite___length_t)CALL( variable15 /*cte*/,COLOR_compiling_global___TableElt___length))( variable15 /*cte*/) /*TableEltComposite::length*/;
      variable17 = TAG_Bool(UNTAG_Int(variable17)>UNTAG_Int( TAG_Int(0)));
      if (UNTAG_Bool(variable17)) { /*if*/
        ((array___AbstractArray___add_t)CALL( variable4 /*ctab*/,COLOR_abstract_collection___SimpleCollection___add))( variable4 /*ctab*/,  variable15 /*cte*/) /*Array::add*/;
      }
      variable17 = ((compiling_base___ToolContext___attr_sim_t)CALL( variable0 /*cctx*/,COLOR_compiling_base___ToolContext___attr_sim))( variable0 /*cctx*/) /*ToolContext::attr_sim*/;
      variable17 =  TAG_Bool(!UNTAG_Bool(variable17));
      if (UNTAG_Bool(variable17)) { /* and */
        variable17 = ((compiling_global___TableEltComposite___length_t)CALL( variable16 /*ite*/,COLOR_compiling_global___TableElt___length))( variable16 /*ite*/) /*TableEltComposite::length*/;
        variable17 = TAG_Bool(UNTAG_Int(variable17)>UNTAG_Int( TAG_Int(0)));
      }
      if (UNTAG_Bool(variable17)) { /*if*/
        ((array___AbstractArray___add_t)CALL( variable5 /*itab*/,COLOR_abstract_collection___SimpleCollection___add))( variable5 /*itab*/,  variable16 /*ite*/) /*Array::add*/;
      }
    }
    continue_16: while(0);
    ((array___ArrayIterator___next_t)CALL(variable12,COLOR_abstract_collection___Iterator___next))(variable12) /*ArrayIterator::next*/;
  }
  break_16: while(0);
  variable12 = TAG_Int(UNTAG_Int( variable11 /*maxcolor*/)+UNTAG_Int( TAG_Int(1)));
  ((compiling_global___MMSrcModule___colorize_t)CALL( self,COLOR_compiling_global___MMSrcModule___colorize))( self,  variable1 /*ga*/,  variable4 /*ctab*/,  variable9 /*crown_classes*/, variable12) /*MMSrcModule::colorize*/;
  ((compiling_global___MMSrcModule___colorize_t)CALL( self,COLOR_compiling_global___MMSrcModule___colorize))( self,  variable1 /*ga*/,  variable5 /*itab*/,  variable9 /*crown_classes*/,  TAG_Int(0)) /*MMSrcModule::colorize*/;
  ((compiling_global___GlobalAnalysis___max_class_table_length__eq_t)CALL( variable1 /*ga*/,COLOR_compiling_global___GlobalAnalysis___max_class_table_length__eq))( variable1 /*ga*/,  TAG_Int(0)) /*GlobalAnalysis::max_class_table_length=*/;
  variable12 = ((array___AbstractArray___iterator_t)CALL( variable8 /*classes*/,COLOR_abstract_collection___Collection___iterator))( variable8 /*classes*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable13 = ((array___ArrayIterator___is_ok_t)CALL(variable12,COLOR_abstract_collection___Iterator___is_ok))(variable12) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable13)) break; /*for*/
    variable13 = ((array___ArrayIterator___item_t)CALL(variable12,COLOR_abstract_collection___Iterator___item))(variable12) /*ArrayIterator::item*/;
    variable15 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL( variable1 /*ga*/,COLOR_compiling_global___GlobalAnalysis___compiled_classes))( variable1 /*ga*/) /*GlobalAnalysis::compiled_classes*/;
    variable16 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable13 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable13 /*c*/) /*MMLocalClass::global*/;
    variable15 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable15,COLOR_abstract_collection___Map_____bra))(variable15, variable16) /*HashMap::[]*/;
    variable14 = variable15;
    variable15 = ((hash___HashSet___has_t)CALL( variable10 /*core_classes*/,COLOR_abstract_collection___Collection___has))( variable10 /*core_classes*/,  variable13 /*c*/) /*HashSet::has*/;
    if (UNTAG_Bool(variable15)) { /*if*/
      variable15 = ((compiling_global___MMSrcModule___build_tables_t)CALL( self,COLOR_compiling_global___MMSrcModule___build_tables))( self,  variable1 /*ga*/,  variable13 /*c*/,  variable4 /*ctab*/) /*MMSrcModule::build_tables*/;
      ((compiling_global___CompiledClass___class_table__eq_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table__eq))( variable14 /*cc*/, variable15) /*CompiledClass::class_table=*/;
      variable15 = ((compiling_global___MMSrcModule___build_tables_t)CALL( self,COLOR_compiling_global___MMSrcModule___build_tables))( self,  variable1 /*ga*/,  variable13 /*c*/,  variable5 /*itab*/) /*MMSrcModule::build_tables*/;
      ((compiling_global___CompiledClass___instance_table__eq_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___instance_table__eq))( variable14 /*cc*/, variable15) /*CompiledClass::instance_table=*/;
    } else { /*if*/
      variable16 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable13 /*c*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable13 /*c*/) /*MMLocalClass::cshe*/;
      variable16 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable16,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable16) /*PartialOrderElement::direct_greaters*/;
      variable16 = ((abstract_collection___IndexedCollection___first_t)CALL(variable16,COLOR_abstract_collection___Collection___first))(variable16) /*Array::first*/;
      variable15 = variable16;
      variable17 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL( variable1 /*ga*/,COLOR_compiling_global___GlobalAnalysis___compiled_classes))( variable1 /*ga*/) /*GlobalAnalysis::compiled_classes*/;
      variable18 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable15 /*sc*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable15 /*sc*/) /*MMLocalClass::global*/;
      variable17 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable17,COLOR_abstract_collection___Map_____bra))(variable17, variable18) /*HashMap::[]*/;
      variable16 = variable17;
      variable17 = ((compiling_global___CompiledClass___class_table_t)CALL( variable16 /*scc*/,COLOR_compiling_global___CompiledClass___class_table))( variable16 /*scc*/) /*CompiledClass::class_table*/;
      variable17 = ((array___Collection___to_a_t)CALL(variable17,COLOR_array___Collection___to_a))(variable17) /*Array::to_a*/;
      ((compiling_global___CompiledClass___class_table__eq_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table__eq))( variable14 /*cc*/, variable17) /*CompiledClass::class_table=*/;
      variable18 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable13 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable13 /*c*/) /*MMLocalClass::global*/;
      variable18 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL(variable18,COLOR_abstractmetamodel___MMGlobalClass___intro))(variable18) /*MMGlobalClass::intro*/;
      variable17 = variable18;
      variable18 = TAG_Bool(( variable17 /*bc*/==NIT_NULL) || VAL_ISA( variable17 /*bc*/, COLOR_MMSrcLocalClass, ID_MMSrcLocalClass)) /*cast MMSrcLocalClass*/;
      if (!UNTAG_Bool(variable18)) { fprintf(stderr, "Assert failed: src/compiling//compiling_global.nit:315,5--33\n"); nit_exit(1);}
      variable19 = ((compiling_global___MMSrcLocalClass___class_color_pos_t)CALL( variable17 /*bc*/,COLOR_compiling_global___MMSrcLocalClass___class_color_pos))( variable17 /*bc*/) /*MMSrcLocalClass::class_color_pos*/;
      variable18 = variable19;
      variable19 = ((compiling_global___CompiledClass___class_table_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table))( variable14 /*cc*/) /*CompiledClass::class_table*/;
      variable20 = ((compiling_global___ColorContext___color_t)CALL( variable1 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable1 /*ga*/,  variable18 /*colpos*/) /*GlobalAnalysis::color*/;
      ((array___Array_____braeq_t)CALL(variable19,COLOR_abstract_collection___Map_____braeq))(variable19, variable20,  variable18 /*colpos*/) /*Array::[]=*/;
      while (true) { /*while*/
        variable19 = ((compiling_global___CompiledClass___class_table_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table))( variable14 /*cc*/) /*CompiledClass::class_table*/;
        variable19 = ((array___AbstractArray___length_t)CALL(variable19,COLOR_abstract_collection___Collection___length))(variable19) /*Array::length*/;
        variable19 = TAG_Bool(UNTAG_Int(variable19)<=UNTAG_Int( variable11 /*maxcolor*/));
        if (!UNTAG_Bool(variable19)) break; /* while*/
        variable19 = ((compiling_global___CompiledClass___class_table_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table))( variable14 /*cc*/) /*CompiledClass::class_table*/;
        ((array___AbstractArray___add_t)CALL(variable19,COLOR_abstract_collection___SimpleCollection___add))(variable19,  NIT_NULL /*null*/) /*Array::add*/;
        continue_19: while(0);
      }
      break_19: while(0);
      variable19 = ((compiling_global___CompiledClass___class_table_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_table))( variable14 /*cc*/) /*CompiledClass::class_table*/;
      variable20 = ((compiling_global___CompiledClass___class_layout_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___class_layout))( variable14 /*cc*/) /*CompiledClass::class_layout*/;
      ((compiling_global___MMSrcModule___append_to_table_t)CALL( self,COLOR_compiling_global___MMSrcModule___append_to_table))( self,  variable1 /*ga*/, variable19, variable20) /*MMSrcModule::append_to_table*/;
      variable19 = ((compiling_global___CompiledClass___instance_table_t)CALL( variable16 /*scc*/,COLOR_compiling_global___CompiledClass___instance_table))( variable16 /*scc*/) /*CompiledClass::instance_table*/;
      variable19 = ((array___Collection___to_a_t)CALL(variable19,COLOR_array___Collection___to_a))(variable19) /*Array::to_a*/;
      ((compiling_global___CompiledClass___instance_table__eq_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___instance_table__eq))( variable14 /*cc*/, variable19) /*CompiledClass::instance_table=*/;
      variable19 = ((compiling_global___CompiledClass___instance_table_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___instance_table))( variable14 /*cc*/) /*CompiledClass::instance_table*/;
      variable20 = ((compiling_global___CompiledClass___instance_layout_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___instance_layout))( variable14 /*cc*/) /*CompiledClass::instance_layout*/;
      ((compiling_global___MMSrcModule___append_to_table_t)CALL( self,COLOR_compiling_global___MMSrcModule___append_to_table))( self,  variable1 /*ga*/, variable19, variable20) /*MMSrcModule::append_to_table*/;
    }
    variable15 = ((compiling_base___ToolContext___attr_sim_t)CALL( variable0 /*cctx*/,COLOR_compiling_base___ToolContext___attr_sim))( variable0 /*cctx*/) /*ToolContext::attr_sim*/;
    if (UNTAG_Bool(variable15)) { /*if*/
      variable15 = ((compiling_global___MMSrcModule___build_tables_t)CALL( self,COLOR_compiling_global___MMSrcModule___build_tables))( self,  variable1 /*ga*/,  variable13 /*c*/,  variable5 /*itab*/) /*MMSrcModule::build_tables*/;
      ((compiling_global___CompiledClass___instance_table__eq_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___instance_table__eq))( variable14 /*cc*/, variable15) /*CompiledClass::instance_table=*/;
      variable15 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable13 /*c*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable13 /*c*/) /*MMLocalClass::cshe*/;
      variable15 = ((partial_order___PartialOrderElement___greaters_and_self_t)CALL(variable15,COLOR_partial_order___PartialOrderElement___greaters_and_self))(variable15) /*PartialOrderElement::greaters_and_self*/;
      variable15 = ((abstract_collection___Collection___iterator_t)CALL(variable15,COLOR_abstract_collection___Collection___iterator))(variable15) /*Collection::iterator*/;
      while (true) { /*for*/
        variable16 = ((abstract_collection___Iterator___is_ok_t)CALL(variable15,COLOR_abstract_collection___Iterator___is_ok))(variable15) /*Iterator::is_ok*/;
        if (!UNTAG_Bool(variable16)) break; /*for*/
        variable16 = ((abstract_collection___Iterator___item_t)CALL(variable15,COLOR_abstract_collection___Iterator___item))(variable15) /*Iterator::item*/;
        variable18 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL( variable1 /*ga*/,COLOR_compiling_global___GlobalAnalysis___compiled_classes))( variable1 /*ga*/) /*GlobalAnalysis::compiled_classes*/;
        variable19 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable16 /*sc*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable16 /*sc*/) /*MMLocalClass::global*/;
        variable18 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable18,COLOR_abstract_collection___Map_____bra))(variable18, variable19) /*HashMap::[]*/;
        variable17 = variable18;
        variable18 = ((compiling_global___CompiledClass___instance_table_t)CALL( variable14 /*cc*/,COLOR_compiling_global___CompiledClass___instance_table))( variable14 /*cc*/) /*CompiledClass::instance_table*/;
        variable19 = ((compiling_global___CompiledClass___instance_layout_t)CALL( variable17 /*scc*/,COLOR_compiling_global___CompiledClass___instance_layout))( variable17 /*scc*/) /*CompiledClass::instance_layout*/;
        ((compiling_global___MMSrcModule___append_to_table_t)CALL( self,COLOR_compiling_global___MMSrcModule___append_to_table))( self,  variable14 /*cc*/, variable18, variable19) /*MMSrcModule::append_to_table*/;
        continue_20: while(0);
        ((abstract_collection___Iterator___next_t)CALL(variable15,COLOR_abstract_collection___Iterator___next))(variable15) /*Iterator::next*/;
      }
      break_20: while(0);
    }
    continue_18: while(0);
    ((array___ArrayIterator___next_t)CALL(variable12,COLOR_abstract_collection___Iterator___next))(variable12) /*ArrayIterator::next*/;
  }
  break_18: while(0);
  variable1 =  variable1 /*ga*/;
  goto return_label10;
  return_label10: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_global___MMSrcModule___append_to_table(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcModule::append_to_table (src/compiling//compiling_global.nit:338,2--343:14)"};
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
  variable3 = ((compiling_global___TableEltComposite___length_t)CALL( variable2 /*cmp*/,COLOR_compiling_global___TableElt___length))( variable2 /*cmp*/) /*TableEltComposite::length*/;
  variable4 = NEW_range___Range___without_last( TAG_Int(0), variable3); /*new Range[Int]*/
  variable3 = variable4;
  variable3 = ((range___Range___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Range::iterator*/;
  while (true) { /*for*/
    variable4 = ((abstract_collection___Iterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((abstract_collection___Iterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*Iterator::item*/;
    variable6 = ((compiling_global___TableEltComposite___item_t)CALL( variable2 /*cmp*/,COLOR_compiling_global___TableElt___item))( variable2 /*cmp*/,  variable4 /*j*/) /*TableEltComposite::item*/;
    variable5 = variable6;
    variable6 = ((array___AbstractArray___length_t)CALL( variable1 /*table*/,COLOR_abstract_collection___Collection___length))( variable1 /*table*/) /*Array::length*/;
    ((compiling_global___ColorContext___color__eq_t)CALL( variable0 /*cc*/,COLOR_compiling_global___ColorContext___color__eq))( variable0 /*cc*/,  variable5 /*e*/, variable6) /*ColorContext::color=*/;
    ((array___AbstractArray___add_t)CALL( variable1 /*table*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*table*/,  variable5 /*e*/) /*Array::add*/;
    continue_22: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*Iterator::next*/;
  }
  break_22: while(0);
  tracehead = trace.prev;
  return;
}
val_t compiling_global___MMSrcModule___build_tables(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcModule::build_tables (src/compiling//compiling_global.nit:347,2--375:12)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable4 = NEW_hash___HashMap___init(); /*new HashMap[Int, TableElt]*/
  variable3 = variable4;
  variable4 =  TAG_Int(0);
  variable5 = ((array___AbstractArray___iterator_t)CALL( variable2 /*elts*/,COLOR_abstract_collection___Collection___iterator))( variable2 /*elts*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable6 = ((array___ArrayIterator___is_ok_t)CALL(variable5,COLOR_abstract_collection___Iterator___is_ok))(variable5) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable6)) break; /*for*/
    variable6 = ((array___ArrayIterator___item_t)CALL(variable5,COLOR_abstract_collection___Iterator___item))(variable5) /*ArrayIterator::item*/;
    variable7 = ((compiling_global___TableElt___is_related_to_t)CALL( variable6 /*e*/,COLOR_compiling_global___TableElt___is_related_to))( variable6 /*e*/,  variable1 /*c*/) /*TableElt::is_related_to*/;
    if (UNTAG_Bool(variable7)) { /*if*/
      variable8 = ((compiling_global___ColorContext___color_t)CALL( variable0 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable0 /*ga*/,  variable6 /*e*/) /*GlobalAnalysis::color*/;
      variable7 = variable8;
      variable9 = ((compiling_global___TableElt___length_t)CALL( variable6 /*e*/,COLOR_compiling_global___TableElt___length))( variable6 /*e*/) /*TableElt::length*/;
      variable9 = TAG_Int(UNTAG_Int( variable7 /*col*/)+UNTAG_Int(variable9));
      variable8 = variable9;
      ((hash___HashMap_____braeq_t)CALL( variable3 /*tab*/,COLOR_abstract_collection___Map_____braeq))( variable3 /*tab*/,  variable7 /*col*/,  variable6 /*e*/) /*HashMap::[]=*/;
      variable9 = TAG_Bool(UNTAG_Int( variable4 /*len*/)<UNTAG_Int( variable8 /*l*/));
      if (UNTAG_Bool(variable9)) { /*if*/
        variable4 =  variable8 /*l*/ /*len=*/;
      }
    }
    continue_24: while(0);
    ((array___ArrayIterator___next_t)CALL(variable5,COLOR_abstract_collection___Iterator___next))(variable5) /*ArrayIterator::next*/;
  }
  break_24: while(0);
  variable6 = NEW_array___Array___init(); /*new Array[TableElt]*/
  variable5 = variable6;
  variable6 =  TAG_Int(0);
  while (true) { /*while*/
    variable7 = TAG_Bool(UNTAG_Int( variable6 /*i*/)<UNTAG_Int( variable4 /*len*/));
    if (!UNTAG_Bool(variable7)) break; /* while*/
    variable7 = ((abstract_collection___CoupleMap___has_key_t)CALL( variable3 /*tab*/,COLOR_abstract_collection___Map___has_key))( variable3 /*tab*/,  variable6 /*i*/) /*HashMap::has_key*/;
    if (UNTAG_Bool(variable7)) { /*if*/
      variable8 = ((abstract_collection___CoupleMap_____bra_t)CALL( variable3 /*tab*/,COLOR_abstract_collection___Map_____bra))( variable3 /*tab*/,  variable6 /*i*/) /*HashMap::[]*/;
      variable7 = variable8;
      variable8 = ((compiling_global___TableElt___length_t)CALL( variable7 /*e*/,COLOR_compiling_global___TableElt___length))( variable7 /*e*/) /*TableElt::length*/;
      variable9 = NEW_range___Range___without_last( TAG_Int(0), variable8); /*new Range[Int]*/
      variable8 = variable9;
      variable8 = ((range___Range___iterator_t)CALL(variable8,COLOR_abstract_collection___Collection___iterator))(variable8) /*Range::iterator*/;
      while (true) { /*for*/
        variable9 = ((abstract_collection___Iterator___is_ok_t)CALL(variable8,COLOR_abstract_collection___Iterator___is_ok))(variable8) /*Iterator::is_ok*/;
        if (!UNTAG_Bool(variable9)) break; /*for*/
        variable9 = ((abstract_collection___Iterator___item_t)CALL(variable8,COLOR_abstract_collection___Iterator___item))(variable8) /*Iterator::item*/;
        variable10 = ((compiling_global___TableElt___item_t)CALL( variable7 /*e*/,COLOR_compiling_global___TableElt___item))( variable7 /*e*/,  variable9 /*j*/) /*TableElt::item*/;
        ((array___Array_____braeq_t)CALL( variable5 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable5 /*res*/,  variable6 /*i*/, variable10) /*Array::[]=*/;
        variable10 = TAG_Int(UNTAG_Int( variable6 /*i*/)+UNTAG_Int( TAG_Int(1)));
        variable6 = variable10 /*i=*/;
        continue_26: while(0);
        ((abstract_collection___Iterator___next_t)CALL(variable8,COLOR_abstract_collection___Iterator___next))(variable8) /*Iterator::next*/;
      }
      break_26: while(0);
    } else { /*if*/
      ((array___Array_____braeq_t)CALL( variable5 /*res*/,COLOR_abstract_collection___Map_____braeq))( variable5 /*res*/,  variable6 /*i*/,  NIT_NULL /*null*/) /*Array::[]=*/;
      variable7 = TAG_Int(UNTAG_Int( variable6 /*i*/)+UNTAG_Int( TAG_Int(1)));
      variable6 = variable7 /*i=*/;
    }
    continue_25: while(0);
  }
  break_25: while(0);
  variable3 =  variable5 /*res*/;
  goto return_label23;
  return_label23: while(false);
  tracehead = trace.prev;
  return variable3;
}
void compiling_global___MMSrcModule___colorize(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcModule::colorize (src/compiling//compiling_global.nit:378,2--416:29)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 =  param3;
  variable5 = NEW_hash___HashMap___init(); /*new HashMap[Int, Array[TableElt]]*/
  variable4 = variable5;
  variable6 = NEW_array___Array___init(); /*new Array[MMLocalClass]*/
  variable5 = variable6;
  variable6 = ((array___AbstractArray___iterator_t)CALL( variable1 /*elts*/,COLOR_abstract_collection___Collection___iterator))( variable1 /*elts*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable7 = ((array___ArrayIterator___is_ok_t)CALL(variable6,COLOR_abstract_collection___Iterator___is_ok))(variable6) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable7)) break; /*for*/
    variable7 = ((array___ArrayIterator___item_t)CALL(variable6,COLOR_abstract_collection___Iterator___item))(variable6) /*ArrayIterator::item*/;
    variable9 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
    variable8 = variable9;
    variable10 = ((compiling_global___TableElt___length_t)CALL( variable7 /*e*/,COLOR_compiling_global___TableElt___length))( variable7 /*e*/) /*TableElt::length*/;
    variable9 = variable10;
    variable10 = ((compiling_global___ColorContext___has_color_t)CALL( variable0 /*ga*/,COLOR_compiling_global___ColorContext___has_color))( variable0 /*ga*/,  variable7 /*e*/) /*GlobalAnalysis::has_color*/;
    if (UNTAG_Bool(variable10)) { /*if*/
      variable10 = ((compiling_global___ColorContext___color_t)CALL( variable0 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable0 /*ga*/,  variable7 /*e*/) /*GlobalAnalysis::color*/;
      variable8 = variable10 /*color=*/;
    } else { /*if*/
      ((array___AbstractArray___clear_t)CALL( variable5 /*rel_classes*/,COLOR_abstract_collection___RemovableCollection___clear))( variable5 /*rel_classes*/) /*Array::clear*/;
      variable10 = ((abstract_collection___Collection___iterator_t)CALL( variable2 /*classes*/,COLOR_abstract_collection___Collection___iterator))( variable2 /*classes*/) /*Collection::iterator*/;
      while (true) { /*for*/
        variable11 = ((abstract_collection___Iterator___is_ok_t)CALL(variable10,COLOR_abstract_collection___Iterator___is_ok))(variable10) /*Iterator::is_ok*/;
        if (!UNTAG_Bool(variable11)) break; /*for*/
        variable11 = ((abstract_collection___Iterator___item_t)CALL(variable10,COLOR_abstract_collection___Iterator___item))(variable10) /*Iterator::item*/;
        variable12 = ((compiling_global___TableElt___is_related_to_t)CALL( variable7 /*e*/,COLOR_compiling_global___TableElt___is_related_to))( variable7 /*e*/,  variable11 /*c*/) /*TableElt::is_related_to*/;
        if (UNTAG_Bool(variable12)) { /*if*/
          ((array___AbstractArray___add_t)CALL( variable5 /*rel_classes*/,COLOR_abstract_collection___SimpleCollection___add))( variable5 /*rel_classes*/,  variable11 /*c*/) /*Array::add*/;
        }
        continue_29: while(0);
        ((abstract_collection___Iterator___next_t)CALL(variable10,COLOR_abstract_collection___Iterator___next))(variable10) /*Iterator::next*/;
      }
      break_29: while(0);
      variable10 =  variable3 /*startcolor*/;
      while (true) { /*while*/
        variable11 = TAG_Bool(( variable10 /*trycolor*/)!=( variable8 /*color*/));
        if (!UNTAG_Bool(variable11)) break; /* while*/
        variable8 =  variable10 /*trycolor*/ /*color=*/;
        variable11 = ((array___AbstractArray___iterator_t)CALL( variable5 /*rel_classes*/,COLOR_abstract_collection___Collection___iterator))( variable5 /*rel_classes*/) /*Array::iterator*/;
        while (true) { /*for*/
          variable12 = ((array___ArrayIterator___is_ok_t)CALL(variable11,COLOR_abstract_collection___Iterator___is_ok))(variable11) /*ArrayIterator::is_ok*/;
          if (!UNTAG_Bool(variable12)) break; /*for*/
          variable12 = ((array___ArrayIterator___item_t)CALL(variable11,COLOR_abstract_collection___Iterator___item))(variable11) /*ArrayIterator::item*/;
          variable13 =  TAG_Int(0);
          while (true) { /*while*/
            variable14 = TAG_Bool(UNTAG_Int( variable13 /*idx*/)<UNTAG_Int( variable9 /*len*/));
            if (!UNTAG_Bool(variable14)) break; /* while*/
            variable14 = TAG_Int(UNTAG_Int( variable10 /*trycolor*/)+UNTAG_Int( variable13 /*idx*/));
            variable14 = ((abstract_collection___CoupleMap___has_key_t)CALL( variable4 /*colors*/,COLOR_abstract_collection___Map___has_key))( variable4 /*colors*/, variable14) /*HashMap::has_key*/;
            variable15 = variable14;
            if (UNTAG_Bool(variable15)) { /* and */
              variable15 = TAG_Int(UNTAG_Int( variable10 /*trycolor*/)+UNTAG_Int( variable13 /*idx*/));
              variable15 = ((abstract_collection___CoupleMap_____bra_t)CALL( variable4 /*colors*/,COLOR_abstract_collection___Map_____bra))( variable4 /*colors*/, variable15) /*HashMap::[]*/;
              variable15 = ((compiling_global___MMSrcModule___free_color_t)CALL( self,COLOR_compiling_global___MMSrcModule___free_color))( self, variable15,  variable12 /*c*/) /*MMSrcModule::free_color*/;
              variable15 =  TAG_Bool(!UNTAG_Bool(variable15));
            }
            variable14 = variable15;
            if (UNTAG_Bool(variable14)) { /*if*/
              variable14 = TAG_Int(UNTAG_Int( variable10 /*trycolor*/)+UNTAG_Int( variable13 /*idx*/));
              variable14 = TAG_Int(UNTAG_Int(variable14)+UNTAG_Int( TAG_Int(1)));
              variable10 = variable14 /*trycolor=*/;
              variable13 =  TAG_Int(0) /*idx=*/;
            } else { /*if*/
              variable14 = TAG_Int(UNTAG_Int( variable13 /*idx*/)+UNTAG_Int( TAG_Int(1)));
              variable13 = variable14 /*idx=*/;
            }
            continue_32: while(0);
          }
          break_32: while(0);
          continue_31: while(0);
          ((array___ArrayIterator___next_t)CALL(variable11,COLOR_abstract_collection___Iterator___next))(variable11) /*ArrayIterator::next*/;
        }
        break_31: while(0);
        continue_30: while(0);
      }
      break_30: while(0);
      ((compiling_global___ColorContext___color__eq_t)CALL( variable0 /*ga*/,COLOR_compiling_global___ColorContext___color__eq))( variable0 /*ga*/,  variable7 /*e*/,  variable8 /*color*/) /*GlobalAnalysis::color=*/;
    }
    variable10 = NEW_range___Range___without_last( TAG_Int(0),  variable9 /*len*/); /*new Range[Int]*/
    variable10 = ((range___Range___iterator_t)CALL(variable10,COLOR_abstract_collection___Collection___iterator))(variable10) /*Range::iterator*/;
    while (true) { /*for*/
      variable11 = ((abstract_collection___Iterator___is_ok_t)CALL(variable10,COLOR_abstract_collection___Iterator___is_ok))(variable10) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable11)) break; /*for*/
      variable11 = ((abstract_collection___Iterator___item_t)CALL(variable10,COLOR_abstract_collection___Iterator___item))(variable10) /*Iterator::item*/;
      variable12 = TAG_Int(UNTAG_Int( variable8 /*color*/)+UNTAG_Int( variable11 /*idx*/));
      variable12 = ((abstract_collection___CoupleMap___has_key_t)CALL( variable4 /*colors*/,COLOR_abstract_collection___Map___has_key))( variable4 /*colors*/, variable12) /*HashMap::has_key*/;
      if (UNTAG_Bool(variable12)) { /*if*/
        variable12 = TAG_Int(UNTAG_Int( variable8 /*color*/)+UNTAG_Int( variable11 /*idx*/));
        variable12 = ((abstract_collection___CoupleMap_____bra_t)CALL( variable4 /*colors*/,COLOR_abstract_collection___Map_____bra))( variable4 /*colors*/, variable12) /*HashMap::[]*/;
        ((array___AbstractArray___add_t)CALL(variable12,COLOR_abstract_collection___SimpleCollection___add))(variable12,  variable7 /*e*/) /*Array::add*/;
      } else { /*if*/
        variable12 = TAG_Int(UNTAG_Int( variable8 /*color*/)+UNTAG_Int( variable11 /*idx*/));
        variable13 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[TableElt]*/
        ((array___AbstractArray___add_t)CALL(variable13,COLOR_abstract_collection___SimpleCollection___add))(variable13,  variable7 /*e*/) /*Array::add*/;
        ((hash___HashMap_____braeq_t)CALL( variable4 /*colors*/,COLOR_abstract_collection___Map_____braeq))( variable4 /*colors*/, variable12, variable13) /*HashMap::[]=*/;
      }
      continue_33: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable10,COLOR_abstract_collection___Iterator___next))(variable10) /*Iterator::next*/;
    }
    break_33: while(0);
    continue_28: while(0);
    ((array___ArrayIterator___next_t)CALL(variable6,COLOR_abstract_collection___Iterator___next))(variable6) /*ArrayIterator::next*/;
  }
  break_28: while(0);
  tracehead = trace.prev;
  return;
}
val_t compiling_global___MMSrcModule___free_color(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcModule::free_color (src/compiling//compiling_global.nit:422,2--429:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((array___AbstractArray___iterator_t)CALL( variable0 /*es*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*es*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
    variable4 = ((compiling_global___TableElt___is_related_to_t)CALL( variable3 /*e2*/,COLOR_compiling_global___TableElt___is_related_to))( variable3 /*e2*/,  variable1 /*c*/) /*TableElt::is_related_to*/;
    if (UNTAG_Bool(variable4)) { /*if*/
      variable2 =  TAG_Bool(false);
      goto return_label34;
    }
    continue_35: while(0);
    ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
  }
  break_35: while(0);
  variable2 =  TAG_Bool(true);
  goto return_label34;
  return_label34: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_global___MMSrcModule___compile_tables_to_c(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcModule::compile_tables_to_c (src/compiling//compiling_global.nit:432,2--452:15)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstractmetamodel___MMModule___mhe_t)CALL( self,COLOR_abstractmetamodel___MMModule___mhe))( self) /*MMSrcModule::mhe*/;
  variable1 = ((partial_order___PartialOrderElement___greaters_and_self_t)CALL(variable1,COLOR_partial_order___PartialOrderElement___greaters_and_self))(variable1) /*PartialOrderElement::greaters_and_self*/;
  variable1 = ((abstract_collection___Collection___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Collection::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
    variable3 = TAG_Bool(( variable2 /*m*/==NIT_NULL) || VAL_ISA( variable2 /*m*/, COLOR_MMSrcModule, ID_MMSrcModule)) /*cast MMSrcModule*/;
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/compiling//compiling_global.nit:436,4--27\n"); nit_exit(1);}
    ((compiling_global___MMSrcModule___compile_local_table_to_c_t)CALL( variable2 /*m*/,COLOR_compiling_global___MMSrcModule___compile_local_table_to_c))( variable2 /*m*/,  variable0 /*v*/) /*MMSrcModule::compile_local_table_to_c*/;
    continue_37: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
  }
  break_37: while(0);
  variable1 = ((abstractmetamodel___MMModule___local_classes_t)CALL( self,COLOR_abstractmetamodel___MMModule___local_classes))( self) /*MMSrcModule::local_classes*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    ((compiling_global___MMLocalClass___compile_tables_to_c_t)CALL( variable2 /*c*/,COLOR_compiling_global___MMLocalClass___compile_tables_to_c))( variable2 /*c*/,  variable0 /*v*/) /*MMLocalClass::compile_tables_to_c*/;
    continue_38: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_38: while(0);
  variable2 = NEW_string___String___with_native(BOX_NativeString("classtable_t TAG2VFT[4] = {NULL"), TAG_Int(31)); /*new String*/
  variable1 = variable2;
  variable2 = NEW_array___Array___with_capacity(TAG_Int(3)); /*new Array[String]*/
  variable3 = NEW_string___String___with_native(BOX_NativeString("Int"), TAG_Int(3)); /*new String*/
  ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2, variable3) /*Array::add*/;
  variable4 = NEW_string___String___with_native(BOX_NativeString("Char"), TAG_Int(4)); /*new String*/
  ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2, variable4) /*Array::add*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString("Bool"), TAG_Int(4)); /*new String*/
  ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2, variable5) /*Array::add*/;
  variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
  while (true) { /*for*/
    variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
    variable4 = ((symbol___String___to_symbol_t)CALL( variable3 /*t*/,COLOR_symbol___String___to_symbol))( variable3 /*t*/) /*String::to_symbol*/;
    variable4 = ((abstractmetamodel___MMModule___has_global_class_named_t)CALL( self,COLOR_abstractmetamodel___MMModule___has_global_class_named))( self, variable4) /*MMSrcModule::has_global_class_named*/;
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString(", (const classtable_t)VFT_"), TAG_Int(26)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 =  variable3 /*t*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
      variable8 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable9 = variable8;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
      ((string___String___append_t)CALL( variable1 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*s*/, variable4) /*String::append*/;
    } else { /*if*/
      variable4 = NEW_string___String___with_native(BOX_NativeString(", NULL"), TAG_Int(6)); /*new String*/
      ((string___String___append_t)CALL( variable1 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*s*/, variable4) /*String::append*/;
    }
    continue_39: while(0);
    ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
  }
  break_39: while(0);
  variable2 = NEW_string___String___with_native(BOX_NativeString("};"), TAG_Int(2)); /*new String*/
  ((string___String___append_t)CALL( variable1 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable1 /*s*/, variable2) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/,  variable1 /*s*/) /*CompilerVisitor::add_instr*/;
  tracehead = trace.prev;
  return;
}
void compiling_global___MMSrcModule___declare_class_tables_to_c(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcModule::declare_class_tables_to_c (src/compiling//compiling_global.nit:455,2--460:27)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstractmetamodel___MMModule___local_classes_t)CALL( self,COLOR_abstractmetamodel___MMModule___local_classes))( self) /*MMSrcModule::local_classes*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable2 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable2 /*c*/) /*MMLocalClass::global*/;
    variable3 = ((abstractmetamodel___MMGlobalClass___module_t)CALL(variable3,COLOR_abstractmetamodel___MMGlobalClass___module))(variable3) /*MMGlobalClass::module*/;
    variable3 = TAG_Bool((variable3 ==  self) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, self)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  self) /*MMModule::==*/)))));
    if (UNTAG_Bool(variable3)) { /*if*/
      ((compiling_global___MMLocalClass___declare_tables_to_c_t)CALL( variable2 /*c*/,COLOR_compiling_global___MMLocalClass___declare_tables_to_c))( variable2 /*c*/,  variable0 /*v*/) /*MMLocalClass::declare_tables_to_c*/;
    }
    continue_41: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_41: while(0);
  tracehead = trace.prev;
  return;
}
void compiling_global___MMSrcModule___compile_main_part(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcModule::compile_main_part (src/compiling//compiling_global.nit:465,2--490:17)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  static val_t once_value_variable2_43; static int once_bool_variable2_43;
    val_t variable3;
    val_t variable4;
    static val_t once_value_variable4_44; static int once_bool_variable4_44;
      static val_t once_value_variable4_45; static int once_bool_variable4_45;
      val_t variable5;
      val_t variable6;
      val_t variable7;
      val_t variable8;
      val_t variable9;
      val_t variable10;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___with_native(BOX_NativeString("int main(int argc, char **argv) {"), TAG_Int(33)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable1) /*CompilerVisitor::add_instr*/;
  ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("prepare_signals();"), TAG_Int(18)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable1) /*CompilerVisitor::add_instr*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("glob_argc = argc; glob_argv = argv;"), TAG_Int(35)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable1) /*CompilerVisitor::add_instr*/;
  if (once_bool_variable2_43) variable2 = once_value_variable2_43;
  else {
    variable2 = NEW_string___String___with_native(BOX_NativeString("Sys"), TAG_Int(3)); /*new String*/
    variable2 = ((symbol___String___to_symbol_t)CALL(variable2,COLOR_symbol___String___to_symbol))(variable2) /*String::to_symbol*/;
    once_value_variable2_43 = variable2;
    once_bool_variable2_43 = true;
  }
  variable1 = variable2;
  variable2 = ((abstractmetamodel___MMModule___has_global_class_named_t)CALL( self,COLOR_abstractmetamodel___MMModule___has_global_class_named))( self,  variable1 /*sysname*/) /*MMSrcModule::has_global_class_named*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable2)))) { /*if*/
    variable2 = NEW_string___String___with_native(BOX_NativeString("No main"), TAG_Int(7)); /*new String*/
    ((file___Object___print_t)CALL( self,COLOR_file___Object___print))( self, variable2) /*MMSrcModule::print*/;
  } else { /*if*/
    variable3 = ((abstractmetamodel___MMModule___class_by_name_t)CALL( self,COLOR_abstractmetamodel___MMModule___class_by_name))( self,  variable1 /*sysname*/) /*MMSrcModule::class_by_name*/;
    variable3 = ((genericity___MMLocalClass___get_type_t)CALL(variable3,COLOR_static_type___MMLocalClass___get_type))(variable3) /*MMLocalClass::get_type*/;
    variable2 = variable3;
    if (once_bool_variable4_44) variable4 = once_value_variable4_44;
    else {
      variable4 = NEW_string___String___with_native(BOX_NativeString("init"), TAG_Int(4)); /*new String*/
      variable4 = ((symbol___String___to_symbol_t)CALL(variable4,COLOR_symbol___String___to_symbol))(variable4) /*String::to_symbol*/;
      once_value_variable4_44 = variable4;
      once_bool_variable4_44 = true;
    }
    variable4 = ((static_type___MMType___select_method_t)CALL( variable2 /*sys*/,COLOR_static_type___MMType___select_method))( variable2 /*sys*/, variable4) /*MMType::select_method*/;
    variable3 = variable4;
    variable4 = TAG_Bool(( variable3 /*main*/ ==  NIT_NULL /*null*/) || (( variable3 /*main*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*main*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*main*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*main*/,COLOR_kernel___Object_____eqeq))( variable3 /*main*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
    if (UNTAG_Bool(variable4)) { /*if*/
      if (once_bool_variable4_45) variable4 = once_value_variable4_45;
      else {
        variable4 = NEW_string___String___with_native(BOX_NativeString("main"), TAG_Int(4)); /*new String*/
        variable4 = ((symbol___String___to_symbol_t)CALL(variable4,COLOR_symbol___String___to_symbol))(variable4) /*String::to_symbol*/;
        once_value_variable4_45 = variable4;
        once_bool_variable4_45 = true;
      }
      variable4 = ((static_type___MMType___select_method_t)CALL( variable2 /*sys*/,COLOR_static_type___MMType___select_method))( variable2 /*sys*/, variable4) /*MMType::select_method*/;
      variable3 = variable4 /*main=*/;
    }
    variable4 = TAG_Bool(( variable3 /*main*/ ==  NIT_NULL /*null*/) || (( variable3 /*main*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*main*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*main*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*main*/,COLOR_kernel___Object_____eqeq))( variable3 /*main*/,  NIT_NULL /*null*/) /*MMMethod::==*/)))));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = NEW_string___String___with_native(BOX_NativeString("No main"), TAG_Int(7)); /*new String*/
      ((file___Object___print_t)CALL( self,COLOR_file___Object___print))( self, variable4) /*MMSrcModule::print*/;
    } else { /*if*/
      variable4 = NEW_string___String___with_native(BOX_NativeString("G_sys = NEW_Sys();"), TAG_Int(18)); /*new String*/
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 = ((compiling_base___MMLocalProperty___cname_t)CALL( variable3 /*main*/,COLOR_compiling_base___MMLocalProperty___cname))( variable3 /*main*/) /*MMMethod::cname*/;
      variable8 = variable7;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString("(G_sys);"), TAG_Int(8)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
    }
  }
  variable2 = NEW_string___String___with_native(BOX_NativeString("return 0;"), TAG_Int(9)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  variable2 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable2) /*CompilerVisitor::add_instr*/;
  tracehead = trace.prev;
  return;
}
void compiling_global___MMSrcModule___compile_mod_to_c(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcModule::compile_mod_to_c (src/compiling//compiling_global.nit:493,2--522:29)"};
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
          val_t variable18;
          val_t variable19;
          val_t variable20;
          val_t variable21;
          val_t variable22;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((compiling_base___CompilerVisitor___tc_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___tc))( variable0 /*v*/) /*CompilerVisitor::tc*/;
  variable1 = ((compiling_base___ToolContext___global_t)CALL(variable1,COLOR_compiling_base___ToolContext___global))(variable1) /*ToolContext::global*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { /*if*/
    variable1 = NEW_string___String___init(); /*new String*/
    variable2 = NEW_string___String___with_native(BOX_NativeString("extern const int SFT_"), TAG_Int(21)); /*new String*/
    variable3 = variable2;
    ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
    variable4 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
    variable5 = variable4;
    variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
    ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
    variable6 = NEW_string___String___with_native(BOX_NativeString("[];"), TAG_Int(3)); /*new String*/
    variable7 = variable6;
    ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable1) /*CompilerVisitor::add_decl*/;
  }
  variable1 =  TAG_Int(0);
  variable2 = ATTR_compiling_global___MMSrcModule____local_table( self) /*MMSrcModule::_local_table*/;
  variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
  while (true) { /*for*/
    variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
    variable4 = ((compiling_base___CompilerVisitor___tc_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___tc))( variable0 /*v*/) /*CompilerVisitor::tc*/;
    variable4 = ((compiling_base___ToolContext___global_t)CALL(variable4,COLOR_compiling_base___ToolContext___global))(variable4) /*ToolContext::global*/;
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("#define "), TAG_Int(8)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 = ((compiling_global___LocalTableElt___symbol_t)CALL( variable3 /*e*/,COLOR_compiling_global___LocalTableElt___symbol))( variable3 /*e*/) /*LocalTableElt::symbol*/;
      variable8 = variable7;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString(" "), TAG_Int(1)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
      variable11 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
      variable11 = ((compiling_global___LocalTableElt___value_t)CALL( variable3 /*e*/,COLOR_compiling_global___LocalTableElt___value))( variable3 /*e*/, variable11) /*LocalTableElt::value*/;
      variable12 = variable11;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable4) /*CompilerVisitor::add_decl*/;
    } else { /*if*/
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("#define "), TAG_Int(8)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 = ((compiling_global___LocalTableElt___symbol_t)CALL( variable3 /*e*/,COLOR_compiling_global___LocalTableElt___symbol))( variable3 /*e*/) /*LocalTableElt::symbol*/;
      variable8 = variable7;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString(" SFT_"), TAG_Int(5)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
      variable11 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
      variable12 = variable11;
      variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString("["), TAG_Int(1)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
      variable15 =  variable1 /*i*/;
      variable15 = ((string___String___to_s_t)CALL(variable15,COLOR_string___Object___to_s))(variable15) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable15) /*String::append*/;
      variable16 = NEW_string___String___with_native(BOX_NativeString("]"), TAG_Int(1)); /*new String*/
      variable17 = variable16;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable17) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable4) /*CompilerVisitor::add_decl*/;
      variable4 = TAG_Int(UNTAG_Int( variable1 /*i*/)+UNTAG_Int( TAG_Int(1)));
      variable1 = variable4 /*i=*/;
    }
    continue_47: while(0);
    ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
  }
  break_47: while(0);
  variable2 = ((syntax_base___MMSrcModule___src_local_classes_t)CALL( self,COLOR_syntax_base___MMSrcModule___src_local_classes))( self) /*MMSrcModule::src_local_classes*/;
  variable2 = ((abstract_collection___Map___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Map::iterator*/;
  while (true) { /*for*/
    variable3 = ((abstract_collection___Iterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*MapIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((abstract_collection___Iterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*MapIterator::item*/;
    variable4 = ((syntax_base___MMSrcLocalClass___src_local_properties_t)CALL( variable3 /*c*/,COLOR_syntax_base___MMSrcLocalClass___src_local_properties))( variable3 /*c*/) /*MMSrcLocalClass::src_local_properties*/;
    variable4 = ((abstract_collection___Map___iterator_t)CALL(variable4,COLOR_abstract_collection___Collection___iterator))(variable4) /*Map::iterator*/;
    while (true) { /*for*/
      variable5 = ((abstract_collection___Iterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*MapIterator::is_ok*/;
      if (!UNTAG_Bool(variable5)) break; /*for*/
      variable5 = ((abstract_collection___Iterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*MapIterator::item*/;
      variable7 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable5 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable5 /*p*/) /*MMSrcLocalProperty::global*/;
      variable6 = variable7;
      variable7 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( variable6 /*pg*/,COLOR_abstractmetamodel___MMGlobalProperty___intro))( variable6 /*pg*/) /*MMGlobalProperty::intro*/;
      variable7 = TAG_Bool((variable7 ==  variable5 /*p*/) || ((variable7 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable7, variable5 /*p*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))(variable7,  variable5 /*p*/) /*MMConcreteProperty::==*/)))));
      variable8 = variable7;
      if (UNTAG_Bool(variable8)) { /* and */
        variable8 = TAG_Bool(( variable5 /*p*/==NIT_NULL) || VAL_ISA( variable5 /*p*/, COLOR_MMAttribute, ID_MMAttribute)) /*cast MMAttribute*/;
      }
      variable7 = variable8;
      if (UNTAG_Bool(variable7)) { /*if*/
        variable7 = ((compiling_base___CompilerVisitor___tc_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___tc))( variable0 /*v*/) /*CompilerVisitor::tc*/;
        variable7 = ((compiling_base___ToolContext___attr_sim_t)CALL(variable7,COLOR_compiling_base___ToolContext___attr_sim))(variable7) /*ToolContext::attr_sim*/;
        if (UNTAG_Bool(variable7)) { /*if*/
          variable8 = ((abstractmetamodel___MMGlobalProperty___local_class_t)CALL( variable6 /*pg*/,COLOR_abstractmetamodel___MMGlobalProperty___local_class))( variable6 /*pg*/) /*MMGlobalProperty::local_class*/;
          variable7 = variable8;
          variable8 = TAG_Bool(( variable7 /*bc*/==NIT_NULL) || VAL_ISA( variable7 /*bc*/, COLOR_MMSrcLocalClass, ID_MMSrcLocalClass)) /*cast MMSrcLocalClass*/;
          if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert failed: src/compiling//compiling_global.nit:514,7--35\n"); nit_exit(1);}
          variable9 = ((compiling_global___MMSrcLocalClass___base_attr_pos_t)CALL( variable7 /*bc*/,COLOR_compiling_global___MMSrcLocalClass___base_attr_pos))( variable7 /*bc*/) /*MMSrcLocalClass::base_attr_pos*/;
          variable9 = ((compiling_global___TableEltBaseAttrPos___symbol_t)CALL(variable9,COLOR_compiling_global___LocalTableElt___symbol))(variable9) /*TableEltBaseAttrPos::symbol*/;
          variable8 = variable9;
          variable9 = NEW_string___String___init(); /*new String*/
          variable10 = NEW_string___String___with_native(BOX_NativeString("#define "), TAG_Int(8)); /*new String*/
          variable11 = variable10;
          ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable11) /*String::append*/;
          variable12 = ((compiling_base___MMGlobalProperty___attr_access_t)CALL( variable6 /*pg*/,COLOR_compiling_base___MMGlobalProperty___attr_access))( variable6 /*pg*/) /*MMGlobalProperty::attr_access*/;
          variable13 = variable12;
          ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable13) /*String::append*/;
          variable14 = NEW_string___String___with_native(BOX_NativeString("(recv) ATTRS(recv, "), TAG_Int(19)); /*new String*/
          variable15 = variable14;
          ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable15) /*String::append*/;
          variable16 =  variable8 /*s*/;
          ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable16) /*String::append*/;
          variable17 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
          variable18 = variable17;
          ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable18) /*String::append*/;
          variable19 = ((compiling_global___MMGlobalProperty___pos_of_t)CALL( variable6 /*pg*/,COLOR_compiling_global___MMGlobalProperty___pos_of))( variable6 /*pg*/) /*MMGlobalProperty::pos_of*/;
          variable20 = variable19;
          variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
          ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable20) /*String::append*/;
          variable21 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
          variable22 = variable21;
          ((string___String___append_t)CALL(variable9,COLOR_abstract_collection___IndexedCollection___append))(variable9, variable22) /*String::append*/;
          ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable9) /*CompilerVisitor::add_decl*/;
        } else { /*if*/
          variable7 = NEW_string___String___init(); /*new String*/
          variable8 = NEW_string___String___with_native(BOX_NativeString("#define "), TAG_Int(8)); /*new String*/
          variable9 = variable8;
          ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
          variable10 = ((compiling_base___MMGlobalProperty___attr_access_t)CALL( variable6 /*pg*/,COLOR_compiling_base___MMGlobalProperty___attr_access))( variable6 /*pg*/) /*MMGlobalProperty::attr_access*/;
          variable11 = variable10;
          ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable11) /*String::append*/;
          variable12 = NEW_string___String___with_native(BOX_NativeString("(recv) ATTR(recv, "), TAG_Int(18)); /*new String*/
          variable13 = variable12;
          ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable13) /*String::append*/;
          variable14 = ((compiling_base___MMGlobalProperty___color_id_t)CALL( variable6 /*pg*/,COLOR_compiling_base___MMGlobalProperty___color_id))( variable6 /*pg*/) /*MMGlobalProperty::color_id*/;
          variable15 = variable14;
          ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable15) /*String::append*/;
          variable16 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
          variable17 = variable16;
          ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable17) /*String::append*/;
          ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable7) /*CompilerVisitor::add_decl*/;
        }
      }
      variable7 = TAG_Bool(( variable5 /*p*/==NIT_NULL) || VAL_ISA( variable5 /*p*/, COLOR_MMSrcLocalProperty, ID_MMSrcLocalProperty)) /*cast MMSrcLocalProperty*/;
      if (!UNTAG_Bool(variable7)) { fprintf(stderr, "Assert failed: src/compiling//compiling_global.nit:521,5--35\n"); nit_exit(1);}
      ((compiling_methods___MMSrcLocalProperty___compile_property_to_c_t)CALL( variable5 /*p*/,COLOR_compiling_methods___MMSrcLocalProperty___compile_property_to_c))( variable5 /*p*/,  variable0 /*v*/) /*MMSrcLocalProperty::compile_property_to_c*/;
      continue_49: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*MapIterator::next*/;
    }
    break_49: while(0);
    continue_48: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*MapIterator::next*/;
  }
  break_48: while(0);
  tracehead = trace.prev;
  return;
}
void compiling_global___MMSrcModule___compile_local_table_to_c(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::MMSrcModule::compile_local_table_to_c (src/compiling//compiling_global.nit:527,2--540:19)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((compiling_base___CompilerVisitor___tc_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___tc))( variable0 /*v*/) /*CompilerVisitor::tc*/;
  variable1 = ((compiling_base___ToolContext___global_t)CALL(variable1,COLOR_compiling_base___ToolContext___global))(variable1) /*ToolContext::global*/;
  variable2 = variable1;
  if (!UNTAG_Bool(variable2)) { /* or */
    variable2 = ATTR_compiling_global___MMSrcModule____local_table( self) /*MMSrcModule::_local_table*/;
    variable2 = ((array___AbstractArray___is_empty_t)CALL(variable2,COLOR_abstract_collection___Collection___is_empty))(variable2) /*Array::is_empty*/;
  }
  variable1 = variable2;
  if (UNTAG_Bool(variable1)) { /*if*/
    goto return_label50;
  }
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString("const int SFT_"), TAG_Int(14)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMSrcModule::name*/;
  variable5 = variable4;
  variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString("["), TAG_Int(1)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  variable8 = ATTR_compiling_global___MMSrcModule____local_table( self) /*MMSrcModule::_local_table*/;
  variable8 = ((array___AbstractArray___length_t)CALL(variable8,COLOR_abstract_collection___Collection___length))(variable8) /*Array::length*/;
  variable9 = variable8;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString("] = {"), TAG_Int(5)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable11) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable1) /*CompilerVisitor::add_instr*/;
  ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
  variable1 = ATTR_compiling_global___MMSrcModule____local_table( self) /*MMSrcModule::_local_table*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
    variable3 = ((compiling_global___LocalTableElt___value_t)CALL( variable2 /*e*/,COLOR_compiling_global___LocalTableElt___value))( variable2 /*e*/, variable3) /*LocalTableElt::value*/;
    variable4 = NEW_string___String___with_native(BOX_NativeString(","), TAG_Int(1)); /*new String*/
    variable3 = ((string___String_____plus_t)CALL(variable3,COLOR_string___String_____plus))(variable3, variable4) /*String::+*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable3) /*CompilerVisitor::add_instr*/;
    continue_51: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_51: while(0);
  ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  variable1 = NEW_string___String___with_native(BOX_NativeString("};"), TAG_Int(2)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable1) /*CompilerVisitor::add_instr*/;
  return_label50: while(false);
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableElt___is_related_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableElt::is_related_to (src/compiling//compiling_global.nit:545,2--42)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method is_related_to called (src/compiling//compiling_global.nit:545,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t compiling_global___TableElt___length(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::TableElt::length (src/compiling//compiling_global.nit:546,2--29)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(1);
  goto return_label52;
  return_label52: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_global___TableElt___item(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableElt::item (src/compiling//compiling_global.nit:547,2--43)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  self;
  goto return_label53;
  return_label53: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_global___TableElt___compile_to_c(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::TableElt::compile_to_c (src/compiling//compiling_global.nit:548,2--63)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method compile_to_c called (src/compiling//compiling_global.nit:548,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t compiling_global___LocalTableElt___symbol(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::LocalTableElt::symbol (src/compiling//compiling_global.nit:553,2--20)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method symbol called (src/compiling//compiling_global.nit:553,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t compiling_global___LocalTableElt___value(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::LocalTableElt::value (src/compiling//compiling_global.nit:554,2--39)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method value called (src/compiling//compiling_global.nit:554,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t compiling_global___TableEltPropPos___symbol(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::TableEltPropPos::symbol (src/compiling//compiling_global.nit:560,2--54)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_compiling_global___TableEltPropPos____property( self) /*TableEltPropPos::_property*/;
  variable0 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalProperty___global))(variable0) /*MMSrcLocalProperty::global*/;
  variable0 = ((compiling_base___MMGlobalProperty___color_id_t)CALL(variable0,COLOR_compiling_base___MMGlobalProperty___color_id))(variable0) /*MMGlobalProperty::color_id*/;
  goto return_label54;
  return_label54: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_global___TableEltPropPos___value(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableEltPropPos::value (src/compiling//compiling_global.nit:561,2--77)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((compiling_global___ColorContext___color_t)CALL( variable0 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable0 /*ga*/,  self) /*GlobalAnalysis::color*/;
  variable5 = variable4;
  variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(" /* Property "), TAG_Int(13)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  variable8 = ATTR_compiling_global___TableEltPropPos____property( self) /*TableEltPropPos::_property*/;
  variable9 = variable8;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(" */"), TAG_Int(3)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable11) /*String::append*/;
  goto return_label55;
  return_label55: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_global___TableEltPropPos___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltPropPos::init (src/compiling//compiling_global.nit:563,2--565:15)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltPropPos].i]) return;
  ATTR_compiling_global___TableEltPropPos____property( self) /*TableEltPropPos::_property*/ =  variable0 /*p*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltPropPos].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltMethPos___compile_to_c(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::TableEltMethPos::compile_to_c (src/compiling//compiling_global.nit:571,2--574:16)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ATTR_compiling_global___TableEltPropPos____property( self) /*TableEltMethPos::_property*/;
  variable3 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalProperty___global))(variable3) /*MMSrcLocalProperty::global*/;
  variable3 = ((inheritance___MMLocalClass_____bra_t)CALL( variable1 /*c*/,COLOR_abstractmetamodel___MMLocalClass_____bra))( variable1 /*c*/, variable3) /*MMLocalClass::[]*/;
  variable2 = variable3;
  variable3 = ((compiling_base___MMLocalProperty___cname_t)CALL( variable2 /*p*/,COLOR_compiling_base___MMLocalProperty___cname))( variable2 /*p*/) /*MMLocalProperty::cname*/;
  variable2 = variable3;
  goto return_label57;
  return_label57: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_global___TableEltMethPos___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltMethPos::init (src/compiling//compiling_global.nit:576,2--17)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltMethPos].i]) return;
  ((compiling_global___TableEltPropPos___init_t)CALL( self,COLOR_compiling_global___TableEltPropPos___init))( self,  param0, init_table /*YYY*/) /*TableEltPropPos::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltMethPos].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltSuperPos___symbol(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::TableEltSuperPos::symbol (src/compiling//compiling_global.nit:581,2--57)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_compiling_global___TableEltPropPos____property( self) /*TableEltSuperPos::_property*/;
  variable0 = ((compiling_base___MMLocalProperty___color_id_for_super_t)CALL(variable0,COLOR_compiling_base___MMLocalProperty___color_id_for_super))(variable0) /*MMSrcLocalProperty::color_id_for_super*/;
  goto return_label59;
  return_label59: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_global___TableEltSuperPos___compile_to_c(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::TableEltSuperPos::compile_to_c (src/compiling//compiling_global.nit:582,2--601:13)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ATTR_compiling_global___TableEltPropPos____property( self) /*TableEltSuperPos::_property*/;
  variable3 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalProperty___local_class))(variable3) /*MMSrcLocalProperty::local_class*/;
  variable2 = variable3;
  variable4 = ATTR_compiling_global___TableEltPropPos____property( self) /*TableEltSuperPos::_property*/;
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalProperty___global))(variable4) /*MMSrcLocalProperty::global*/;
  variable3 = variable4;
  variable5 = ((abstractmetamodel___MMLocalClass___che_t)CALL( variable1 /*c*/,COLOR_abstractmetamodel___MMLocalClass___che))( variable1 /*c*/) /*MMLocalClass::che*/;
  variable5 = ((partial_order___PartialOrderElement___linear_extension_t)CALL(variable5,COLOR_partial_order___PartialOrderElement___linear_extension))(variable5) /*PartialOrderElement::linear_extension*/;
  variable4 = variable5;
  variable5 =  TAG_Bool(false);
  variable6 = ((array___AbstractArray___iterator_t)CALL( variable4 /*lin*/,COLOR_abstract_collection___Collection___iterator))( variable4 /*lin*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable7 = ((array___ArrayIterator___is_ok_t)CALL(variable6,COLOR_abstract_collection___Iterator___is_ok))(variable6) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable7)) break; /*for*/
    variable7 = ((array___ArrayIterator___item_t)CALL(variable6,COLOR_abstract_collection___Iterator___item))(variable6) /*ArrayIterator::item*/;
    variable8 = TAG_Bool(( variable7 /*s*/ ==  variable2 /*pc*/) || (( variable7 /*s*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable7 /*s*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable7 /*s*/, variable2 /*pc*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable7 /*s*/,COLOR_kernel___Object_____eqeq))( variable7 /*s*/,  variable2 /*pc*/) /*MMLocalClass::==*/)))));
    if (UNTAG_Bool(variable8)) { /*if*/
      variable5 =  TAG_Bool(true) /*found=*/;
    } else { /*if*/
      variable8 =  variable5 /*found*/;
      if (UNTAG_Bool(variable8)) { /* and */
        variable8 = ((abstractmetamodel___MMLocalClass___che_t)CALL( variable1 /*c*/,COLOR_abstractmetamodel___MMLocalClass___che))( variable1 /*c*/) /*MMLocalClass::che*/;
        variable8 = ((partial_order___PartialOrderElement_____l_t)CALL(variable8,COLOR_partial_order___PartialOrderElement_____l))(variable8,  variable7 /*s*/) /*PartialOrderElement::<*/;
      }
      if (UNTAG_Bool(variable8)) { /*if*/
        variable9 = ((inheritance___MMLocalClass_____bra_t)CALL( variable7 /*s*/,COLOR_abstractmetamodel___MMLocalClass_____bra))( variable7 /*s*/,  variable3 /*g*/) /*MMLocalClass::[]*/;
        variable8 = variable9;
        variable9 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable8 /*p*/ ==  NIT_NULL /*null*/) || (( variable8 /*p*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable8 /*p*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable8 /*p*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable8 /*p*/,COLOR_kernel___Object_____eqeq))( variable8 /*p*/,  NIT_NULL /*null*/) /*MMLocalProperty::==*/)))))));
        variable10 = variable9;
        if (UNTAG_Bool(variable10)) { /* and */
          variable10 = TAG_Bool(( variable8 /*p*/==NIT_NULL) || VAL_ISA( variable8 /*p*/, COLOR_MMConcreteProperty, ID_MMConcreteProperty)) /*cast MMConcreteProperty*/;
        }
        variable9 = variable10;
        if (UNTAG_Bool(variable9)) { /*if*/
          variable9 = ((compiling_base___MMLocalProperty___cname_t)CALL( variable8 /*p*/,COLOR_compiling_base___MMLocalProperty___cname))( variable8 /*p*/) /*MMConcreteProperty::cname*/;
          variable2 = variable9;
          goto return_label60;
        }
      }
    }
    continue_61: while(0);
    ((array___ArrayIterator___next_t)CALL(variable6,COLOR_abstract_collection___Iterator___next))(variable6) /*ArrayIterator::next*/;
  }
  break_61: while(0);
  if (!UNTAG_Bool( TAG_Bool(false))) { fprintf(stderr, "Assert failed: src/compiling//compiling_global.nit:600,3--14\n"); nit_exit(1);}
  variable2 =  NIT_NULL /*null*/;
  goto return_label60;
  return_label60: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_global___TableEltSuperPos___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltSuperPos::init (src/compiling//compiling_global.nit:604,2--17)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltSuperPos].i]) return;
  ((compiling_global___TableEltPropPos___init_t)CALL( self,COLOR_compiling_global___TableEltPropPos___init))( self,  param0, init_table /*YYY*/) /*TableEltPropPos::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltSuperPos].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltAttrPos___compile_to_c(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::TableEltAttrPos::compile_to_c (src/compiling//compiling_global.nit:609,2--613:53)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
  variable2 = variable3;
  variable4 = ATTR_compiling_global___TableEltPropPos____property( self) /*TableEltAttrPos::_property*/;
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable4,COLOR_abstractmetamodel___MMLocalProperty___global))(variable4) /*MMSrcLocalProperty::global*/;
  variable4 = ((inheritance___MMLocalClass_____bra_t)CALL( variable1 /*c*/,COLOR_abstractmetamodel___MMLocalClass_____bra))( variable1 /*c*/, variable4) /*MMLocalClass::[]*/;
  variable3 = variable4;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString("/* "), TAG_Int(3)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 = ((compiling_global___ColorContext___color_t)CALL( variable2 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable2 /*ga*/,  self) /*GlobalAnalysis::color*/;
  variable8 = variable7;
  variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString(": Attribute "), TAG_Int(12)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 =  variable1 /*c*/;
  variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
  variable12 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
  variable13 = variable12;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
  variable14 =  variable3 /*p*/;
  variable14 = ((string___String___to_s_t)CALL(variable14,COLOR_string___Object___to_s))(variable14) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
  variable15 = NEW_string___String___with_native(BOX_NativeString(" */"), TAG_Int(3)); /*new String*/
  variable16 = variable15;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable16) /*String::append*/;
  variable2 = variable4;
  goto return_label63;
  return_label63: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_global___TableEltAttrPos___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltAttrPos::init (src/compiling//compiling_global.nit:616,2--17)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltAttrPos].i]) return;
  ((compiling_global___TableEltPropPos___init_t)CALL( self,COLOR_compiling_global___TableEltPropPos___init))( self,  param0, init_table /*YYY*/) /*TableEltPropPos::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltAttrPos].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltClassPos___is_related_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassPos::is_related_to (src/compiling//compiling_global.nit:622,2--625:21)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((abstractmetamodel___MMLocalClass___module_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___module))( variable0 /*c*/) /*MMLocalClass::module*/;
  variable3 = ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassPos::_local_class*/;
  variable3 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalClass___global))(variable3) /*MMLocalClass::global*/;
  variable2 = ((abstractmetamodel___MMModule_____bra_t)CALL(variable2,COLOR_abstractmetamodel___MMModule_____bra))(variable2, variable3) /*MMModule::[]*/;
  variable1 = variable2;
  variable2 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable0 /*c*/) /*MMLocalClass::cshe*/;
  variable2 = ((partial_order___PartialOrderElement_____leq_t)CALL(variable2,COLOR_partial_order___PartialOrderElement_____leq))(variable2,  variable1 /*bc*/) /*PartialOrderElement::<=*/;
  variable1 = variable2;
  goto return_label65;
  return_label65: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_global___TableEltClassPos___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassPos::init (src/compiling//compiling_global.nit:628,2--630:18)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltClassPos].i]) return;
  ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassPos::_local_class*/ =  variable0 /*c*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltClassPos].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltClassIdPos___symbol(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassIdPos::symbol (src/compiling//compiling_global.nit:636,2--54)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassIdPos::_local_class*/;
  variable0 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalClass___global))(variable0) /*MMLocalClass::global*/;
  variable0 = ((compiling_base___MMGlobalClass___id_id_t)CALL(variable0,COLOR_compiling_base___MMGlobalClass___id_id))(variable0) /*MMGlobalClass::id_id*/;
  goto return_label67;
  return_label67: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_global___TableEltClassIdPos___value(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassIdPos::value (src/compiling//compiling_global.nit:637,2--639:83)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL( variable0 /*ga*/,COLOR_compiling_global___GlobalAnalysis___compiled_classes))( variable0 /*ga*/) /*GlobalAnalysis::compiled_classes*/;
  variable5 = ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassIdPos::_local_class*/;
  variable5 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable5,COLOR_abstractmetamodel___MMLocalClass___global))(variable5) /*MMLocalClass::global*/;
  variable4 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable4,COLOR_abstract_collection___Map_____bra))(variable4, variable5) /*HashMap::[]*/;
  variable4 = ((compiling_global___CompiledClass___id_t)CALL(variable4,COLOR_compiling_global___CompiledClass___id))(variable4) /*CompiledClass::id*/;
  variable5 = variable4;
  variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(" /* Id of "), TAG_Int(10)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  variable8 = ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassIdPos::_local_class*/;
  variable9 = variable8;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(" */"), TAG_Int(3)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable11) /*String::append*/;
  goto return_label68;
  return_label68: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_global___TableEltClassIdPos___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassIdPos::init (src/compiling//compiling_global.nit:642,2--17)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltClassIdPos].i]) return;
  ((compiling_global___TableEltClassPos___init_t)CALL( self,COLOR_compiling_global___TableEltClassPos___init))( self,  param0, init_table /*YYY*/) /*TableEltClassPos::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltClassIdPos].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltClassInitTablePos___symbol(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassInitTablePos::symbol (src/compiling//compiling_global.nit:647,2--66)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassInitTablePos::_local_class*/;
  variable0 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalClass___global))(variable0) /*MMLocalClass::global*/;
  variable0 = ((compiling_base___MMGlobalClass___init_table_pos_id_t)CALL(variable0,COLOR_compiling_base___MMGlobalClass___init_table_pos_id))(variable0) /*MMGlobalClass::init_table_pos_id*/;
  goto return_label70;
  return_label70: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_global___TableEltClassInitTablePos___value(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassInitTablePos::value (src/compiling//compiling_global.nit:648,2--650:57)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((compiling_global___ColorContext___color_t)CALL( variable0 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable0 /*ga*/,  self) /*GlobalAnalysis::color*/;
  variable5 = variable4;
  variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(" /* Color of "), TAG_Int(13)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  variable8 = ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassInitTablePos::_local_class*/;
  variable9 = variable8;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(" */"), TAG_Int(3)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable11) /*String::append*/;
  goto return_label71;
  return_label71: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_global___TableEltClassInitTablePos___compile_to_c(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassInitTablePos::compile_to_c (src/compiling//compiling_global.nit:652,2--661:93)"};
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
  val_t variable18;
  val_t variable19;
  val_t variable20;
  val_t variable21;
  val_t variable22;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
  variable2 = variable3;
  variable4 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL( variable2 /*ga*/,COLOR_compiling_global___GlobalAnalysis___compiled_classes))( variable2 /*ga*/) /*GlobalAnalysis::compiled_classes*/;
  variable5 = ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassInitTablePos::_local_class*/;
  variable5 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable5,COLOR_abstractmetamodel___MMLocalClass___global))(variable5) /*MMLocalClass::global*/;
  variable4 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable4,COLOR_abstract_collection___Map_____bra))(variable4, variable5) /*HashMap::[]*/;
  variable3 = variable4;
  variable5 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable1 /*c*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable1 /*c*/) /*MMLocalClass::cshe*/;
  variable5 = ((partial_order___PartialOrderElement___reverse_linear_extension_t)CALL(variable5,COLOR_partial_order___PartialOrderElement___reverse_linear_extension))(variable5) /*PartialOrderElement::reverse_linear_extension*/;
  variable4 = variable5;
  variable5 =  TAG_Int(0);
  while (true) { /*while*/
    variable6 =  variable5 /*i*/;
    variable7 = TAG_Bool(UNTAG_Int( variable6 /*index*/)>=UNTAG_Int( TAG_Int(0)));
    variable8 = variable7;
    if (UNTAG_Bool(variable8)) { /* and */
      variable8 = ATTR_array___AbstractArray____length( variable4 /*linext*/) /*Array::_length*/;
      variable8 = TAG_Bool(UNTAG_Int( variable6 /*index*/)<UNTAG_Int(variable8));
    }
    variable7 = variable8;
    if (!UNTAG_Bool(variable7)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
    variable7 = ATTR_array___Array____items( variable4 /*linext*/) /*Array::_items*/;
    variable7 = UNBOX_NativeArray(variable7)[UNTAG_Int( variable6 /*index*/)];
    goto return_label74;
    return_label74: while(false);
    variable6 = variable7;
    variable6 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable6,COLOR_abstractmetamodel___MMLocalClass___global))(variable6) /*MMLocalClass::global*/;
    variable7 = ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassInitTablePos::_local_class*/;
    variable7 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable7,COLOR_abstractmetamodel___MMLocalClass___global))(variable7) /*MMLocalClass::global*/;
    variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable6 == variable7) || ((variable6 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable6,variable7)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))(variable6, variable7) /*MMGlobalClass::==*/)))))));
    if (!UNTAG_Bool(variable6)) break; /* while*/
    variable5 = TAG_Int(UNTAG_Int(variable5)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_73: while(0);
  }
  break_73: while(0);
  variable6 = NEW_string___String___init(); /*new String*/
  variable7 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
  variable9 =  variable5 /*i*/;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(" /* "), TAG_Int(4)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
  variable12 = ((compiling_global___ColorContext___color_t)CALL( variable2 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable2 /*ga*/,  self) /*GlobalAnalysis::color*/;
  variable13 = variable12;
  variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable13) /*String::append*/;
  variable14 = NEW_string___String___with_native(BOX_NativeString(": "), TAG_Int(2)); /*new String*/
  variable15 = variable14;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
  variable16 =  variable1 /*c*/;
  variable16 = ((string___String___to_s_t)CALL(variable16,COLOR_string___Object___to_s))(variable16) /*String::to_s*/;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable16) /*String::append*/;
  variable17 = NEW_string___String___with_native(BOX_NativeString(" < "), TAG_Int(3)); /*new String*/
  variable18 = variable17;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable18) /*String::append*/;
  variable19 = ((compiling_global___CompiledClass___local_class_t)CALL( variable3 /*cc*/,COLOR_compiling_global___CompiledClass___local_class))( variable3 /*cc*/) /*CompiledClass::local_class*/;
  variable20 = variable19;
  variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable20) /*String::append*/;
  variable21 = NEW_string___String___with_native(BOX_NativeString(": superclass init_table position */"), TAG_Int(35)); /*new String*/
  variable22 = variable21;
  ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable22) /*String::append*/;
  variable2 = variable6;
  goto return_label72;
  return_label72: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_global___TableEltClassInitTablePos___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassInitTablePos::init (src/compiling//compiling_global.nit:664,2--17)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltClassInitTablePos].i]) return;
  ((compiling_global___TableEltClassPos___init_t)CALL( self,COLOR_compiling_global___TableEltClassPos___init))( self,  param0, init_table /*YYY*/) /*TableEltClassPos::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltClassInitTablePos].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltClassColorPos___symbol(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassColorPos::symbol (src/compiling//compiling_global.nit:669,2--57)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassColorPos::_local_class*/;
  variable0 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalClass___global))(variable0) /*MMLocalClass::global*/;
  variable0 = ((compiling_base___MMGlobalClass___color_id_t)CALL(variable0,COLOR_compiling_base___MMGlobalClass___color_id))(variable0) /*MMGlobalClass::color_id*/;
  goto return_label76;
  return_label76: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_global___TableEltClassColorPos___value(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassColorPos::value (src/compiling//compiling_global.nit:670,2--672:57)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((compiling_global___ColorContext___color_t)CALL( variable0 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable0 /*ga*/,  self) /*GlobalAnalysis::color*/;
  variable5 = variable4;
  variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(" /* Color of "), TAG_Int(13)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  variable8 = ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassColorPos::_local_class*/;
  variable9 = variable8;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(" */"), TAG_Int(3)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable11) /*String::append*/;
  goto return_label77;
  return_label77: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_global___TableEltClassColorPos___compile_to_c(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassColorPos::compile_to_c (src/compiling//compiling_global.nit:674,2--678:94)"};
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
  val_t variable18;
  val_t variable19;
  val_t variable20;
  val_t variable21;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
  variable2 = variable3;
  variable4 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL( variable2 /*ga*/,COLOR_compiling_global___GlobalAnalysis___compiled_classes))( variable2 /*ga*/) /*GlobalAnalysis::compiled_classes*/;
  variable5 = ATTR_compiling_global___TableEltClassPos____local_class( self) /*TableEltClassColorPos::_local_class*/;
  variable5 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable5,COLOR_abstractmetamodel___MMLocalClass___global))(variable5) /*MMLocalClass::global*/;
  variable4 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable4,COLOR_abstract_collection___Map_____bra))(variable4, variable5) /*HashMap::[]*/;
  variable3 = variable4;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 = ((compiling_global___CompiledClass___id_t)CALL( variable3 /*cc*/,COLOR_compiling_global___CompiledClass___id))( variable3 /*cc*/) /*CompiledClass::id*/;
  variable8 = variable7;
  variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString(" /* "), TAG_Int(4)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 = ((compiling_global___ColorContext___color_t)CALL( variable2 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable2 /*ga*/,  self) /*GlobalAnalysis::color*/;
  variable12 = variable11;
  variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString(": "), TAG_Int(2)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
  variable15 =  variable1 /*c*/;
  variable15 = ((string___String___to_s_t)CALL(variable15,COLOR_string___Object___to_s))(variable15) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable15) /*String::append*/;
  variable16 = NEW_string___String___with_native(BOX_NativeString(" < "), TAG_Int(3)); /*new String*/
  variable17 = variable16;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable17) /*String::append*/;
  variable18 = ((compiling_global___CompiledClass___local_class_t)CALL( variable3 /*cc*/,COLOR_compiling_global___CompiledClass___local_class))( variable3 /*cc*/) /*CompiledClass::local_class*/;
  variable19 = variable18;
  variable19 = ((string___String___to_s_t)CALL(variable19,COLOR_string___Object___to_s))(variable19) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable19) /*String::append*/;
  variable20 = NEW_string___String___with_native(BOX_NativeString(": superclass typecheck marker */"), TAG_Int(32)); /*new String*/
  variable21 = variable20;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable21) /*String::append*/;
  variable2 = variable4;
  goto return_label78;
  return_label78: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_global___TableEltClassColorPos___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassColorPos::init (src/compiling//compiling_global.nit:681,2--17)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltClassColorPos].i]) return;
  ((compiling_global___TableEltClassPos___init_t)CALL( self,COLOR_compiling_global___TableEltClassPos___init))( self,  param0, init_table /*YYY*/) /*TableEltClassPos::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltClassColorPos].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltBaseAttrPos___symbol(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::TableEltBaseAttrPos::symbol (src/compiling//compiling_global.nit:687,2--87)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_string___String___init(); /*new String*/
  variable1 = NEW_string___String___with_native(BOX_NativeString("COLOR_"), TAG_Int(6)); /*new String*/
  variable2 = variable1;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable2) /*String::append*/;
  variable3 = ATTR_compiling_global___TableEltBaseAttrPos____local_class( self) /*TableEltBaseAttrPos::_local_class*/;
  variable3 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalClass___module))(variable3) /*MMSrcLocalClass::module*/;
  variable4 = variable3;
  variable4 = ((string___String___to_s_t)CALL(variable4,COLOR_string___Object___to_s))(variable4) /*String::to_s*/;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable4) /*String::append*/;
  variable5 = NEW_string___String___with_native(BOX_NativeString("_"), TAG_Int(1)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable6) /*String::append*/;
  variable7 = ATTR_compiling_global___TableEltBaseAttrPos____local_class( self) /*TableEltBaseAttrPos::_local_class*/;
  variable7 = ((abstractmetamodel___MMLocalClass___name_t)CALL(variable7,COLOR_abstractmetamodel___MMLocalClass___name))(variable7) /*MMSrcLocalClass::name*/;
  variable8 = variable7;
  variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString("_BASEATTR"), TAG_Int(9)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable10) /*String::append*/;
  goto return_label80;
  return_label80: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_global___TableEltBaseAttrPos___value(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableEltBaseAttrPos::value (src/compiling//compiling_global.nit:688,2--690:63)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((compiling_global___ColorContext___color_t)CALL( variable0 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable0 /*ga*/,  self) /*GlobalAnalysis::color*/;
  variable5 = variable4;
  variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString(" /* BaseAttrPos of "), TAG_Int(19)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  variable8 = ATTR_compiling_global___TableEltBaseAttrPos____local_class( self) /*TableEltBaseAttrPos::_local_class*/;
  variable9 = variable8;
  variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable9) /*String::append*/;
  variable10 = NEW_string___String___with_native(BOX_NativeString(" */"), TAG_Int(3)); /*new String*/
  variable11 = variable10;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable11) /*String::append*/;
  goto return_label81;
  return_label81: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_global___TableEltBaseAttrPos___compile_to_c(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::TableEltBaseAttrPos::compile_to_c (src/compiling//compiling_global.nit:693,2--697:150)"};
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
  val_t variable18;
  val_t variable19;
  val_t variable20;
  val_t variable21;
  val_t variable22;
  val_t variable23;
  val_t variable24;
  val_t variable25;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
  variable2 = variable3;
  variable4 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL( variable2 /*ga*/,COLOR_compiling_global___GlobalAnalysis___compiled_classes))( variable2 /*ga*/) /*GlobalAnalysis::compiled_classes*/;
  variable5 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable1 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable1 /*c*/) /*MMLocalClass::global*/;
  variable4 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable4,COLOR_abstract_collection___Map_____bra))(variable4, variable5) /*HashMap::[]*/;
  variable3 = variable4;
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 = ATTR_compiling_global___TableEltBaseAttrPos____local_class( self) /*TableEltBaseAttrPos::_local_class*/;
  variable7 = ((compiling_global___MMSrcLocalClass___instance_layout_t)CALL(variable7,COLOR_compiling_global___MMSrcLocalClass___instance_layout))(variable7) /*MMSrcLocalClass::instance_layout*/;
  variable7 = ((abstract_collection___IndexedCollection___first_t)CALL(variable7,COLOR_abstract_collection___Collection___first))(variable7) /*Array::first*/;
  variable7 = ((compiling_global___ColorContext___color_t)CALL( variable3 /*cc*/,COLOR_compiling_global___ColorContext___color))( variable3 /*cc*/, variable7) /*CompiledClass::color*/;
  variable8 = variable7;
  variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString(" /* "), TAG_Int(4)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 = ((compiling_global___ColorContext___color_t)CALL( variable2 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable2 /*ga*/,  self) /*GlobalAnalysis::color*/;
  variable12 = variable11;
  variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
  variable13 = NEW_string___String___with_native(BOX_NativeString(": Base attribut offset of "), TAG_Int(26)); /*new String*/
  variable14 = variable13;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
  variable15 = ATTR_compiling_global___TableEltBaseAttrPos____local_class( self) /*TableEltBaseAttrPos::_local_class*/;
  variable15 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable15,COLOR_abstractmetamodel___MMLocalClass___module))(variable15) /*MMSrcLocalClass::module*/;
  variable16 = variable15;
  variable16 = ((string___String___to_s_t)CALL(variable16,COLOR_string___Object___to_s))(variable16) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable16) /*String::append*/;
  variable17 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
  variable18 = variable17;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable18) /*String::append*/;
  variable19 = ATTR_compiling_global___TableEltBaseAttrPos____local_class( self) /*TableEltBaseAttrPos::_local_class*/;
  variable20 = variable19;
  variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable20) /*String::append*/;
  variable21 = NEW_string___String___with_native(BOX_NativeString(" in "), TAG_Int(4)); /*new String*/
  variable22 = variable21;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable22) /*String::append*/;
  variable23 =  variable1 /*c*/;
  variable23 = ((string___String___to_s_t)CALL(variable23,COLOR_string___Object___to_s))(variable23) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable23) /*String::append*/;
  variable24 = NEW_string___String___with_native(BOX_NativeString(" */"), TAG_Int(3)); /*new String*/
  variable25 = variable24;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable25) /*String::append*/;
  variable2 = variable4;
  goto return_label82;
  return_label82: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_global___TableEltBaseAttrPos___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltBaseAttrPos::init (src/compiling//compiling_global.nit:700,2--702:18)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltBaseAttrPos].i]) return;
  ATTR_compiling_global___TableEltBaseAttrPos____local_class( self) /*TableEltBaseAttrPos::_local_class*/ =  variable0 /*c*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltBaseAttrPos].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltComposite___length(val_t  self) {
  struct trace_t trace = {NULL, "compiling_global::TableEltComposite::length (src/compiling//compiling_global.nit:711,2--42)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_compiling_global___TableEltComposite____table( self) /*TableEltComposite::_table*/;
  variable0 = ((array___AbstractArray___length_t)CALL(variable0,COLOR_abstract_collection___Collection___length))(variable0) /*Array::length*/;
  goto return_label84;
  return_label84: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t compiling_global___TableEltComposite___is_related_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableEltComposite::is_related_to (src/compiling//compiling_global.nit:712,2--64)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable0 /*c*/) /*MMLocalClass::cshe*/;
  variable2 = ATTR_compiling_global___TableEltComposite____cc( self) /*TableEltComposite::_cc*/;
  variable2 = ((compiling_global___CompiledClass___local_class_t)CALL(variable2,COLOR_compiling_global___CompiledClass___local_class))(variable2) /*CompiledClass::local_class*/;
  variable1 = ((partial_order___PartialOrderElement_____leq_t)CALL(variable1,COLOR_partial_order___PartialOrderElement_____leq))(variable1, variable2) /*PartialOrderElement::<=*/;
  goto return_label85;
  return_label85: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_global___TableEltComposite___add(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::TableEltComposite::add (src/compiling//compiling_global.nit:714,2--717:19)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ATTR_compiling_global___TableEltComposite____offsets( self) /*TableEltComposite::_offsets*/;
  variable3 = ATTR_compiling_global___TableEltComposite____table( self) /*TableEltComposite::_table*/;
  variable3 = ((array___AbstractArray___length_t)CALL(variable3,COLOR_abstract_collection___Collection___length))(variable3) /*Array::length*/;
  ((hash___HashMap_____braeq_t)CALL(variable2,COLOR_abstract_collection___Map_____braeq))(variable2,  variable0 /*c*/, variable3) /*HashMap::[]=*/;
  variable2 = ATTR_compiling_global___TableEltComposite____table( self) /*TableEltComposite::_table*/;
  ((abstract_collection___IndexedCollection___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2,  variable1 /*tab*/) /*Array::append*/;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltComposite___item(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableEltComposite::item (src/compiling//compiling_global.nit:720,2--38)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_compiling_global___TableEltComposite____table( self) /*TableEltComposite::_table*/;
  variable2 =  variable0 /*i*/;
  variable3 = TAG_Bool(UNTAG_Int( variable2 /*index*/)>=UNTAG_Int( TAG_Int(0)));
  variable4 = variable3;
  if (UNTAG_Bool(variable4)) { /* and */
    variable4 = variable1;
    variable4 = ATTR_array___AbstractArray____length(variable4) /*Array::_length*/;
    variable4 = TAG_Bool(UNTAG_Int( variable2 /*index*/)<UNTAG_Int(variable4));
  }
  variable3 = variable4;
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
  variable3 = variable1;
  variable3 = ATTR_array___Array____items(variable3) /*Array::_items*/;
  variable3 = UNBOX_NativeArray(variable3)[UNTAG_Int( variable2 /*index*/)];
  goto return_label88;
  return_label88: while(false);
  variable1 = variable3;
  goto return_label87;
  return_label87: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_global___TableEltComposite___compile_to_c(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::TableEltComposite::compile_to_c (src/compiling//compiling_global.nit:722,2--39)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  fprintf(stderr, "Aborted: src/compiling//compiling_global.nit:722,35--39\n"); nit_exit(1);
  tracehead = trace.prev;
  return variable2;
}
void compiling_global___TableEltComposite___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltComposite::init (src/compiling//compiling_global.nit:724,2--728:42)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltComposite].i]) return;
  ATTR_compiling_global___TableEltComposite____cc( self) /*TableEltComposite::_cc*/ =  variable0 /*cc*/;
  variable1 = NEW_array___Array___init(); /*new Array[LocalTableElt]*/
  ATTR_compiling_global___TableEltComposite____table( self) /*TableEltComposite::_table*/ = variable1;
  variable1 = NEW_hash___HashMap___init(); /*new HashMap[MMLocalClass, Int]*/
  ATTR_compiling_global___TableEltComposite____offsets( self) /*TableEltComposite::_offsets*/ = variable1;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltComposite].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltClassSelfId___is_related_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassSelfId::is_related_to (src/compiling//compiling_global.nit:734,2--43)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Bool(true);
  goto return_label91;
  return_label91: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_global___TableEltClassSelfId___compile_to_c(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassSelfId::compile_to_c (src/compiling//compiling_global.nit:735,2--738:93)"};
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
  variable3 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
  variable2 = variable3;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
  variable6 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL(variable6,COLOR_compiling_global___GlobalAnalysis___compiled_classes))(variable6) /*GlobalAnalysis::compiled_classes*/;
  variable7 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable1 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable1 /*c*/) /*MMLocalClass::global*/;
  variable6 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable6,COLOR_abstract_collection___Map_____bra))(variable6, variable7) /*HashMap::[]*/;
  variable6 = ((compiling_global___CompiledClass___id_t)CALL(variable6,COLOR_compiling_global___CompiledClass___id))(variable6) /*CompiledClass::id*/;
  variable7 = variable6;
  variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString(" /* "), TAG_Int(4)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable10 = ((compiling_global___ColorContext___color_t)CALL( variable2 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable2 /*ga*/,  self) /*GlobalAnalysis::color*/;
  variable11 = variable10;
  variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable11) /*String::append*/;
  variable12 = NEW_string___String___with_native(BOX_NativeString(": Identity */"), TAG_Int(13)); /*new String*/
  variable13 = variable12;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable13) /*String::append*/;
  variable2 = variable3;
  goto return_label92;
  return_label92: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_global___TableEltClassSelfId___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltClassSelfId::init (src/compiling//compiling_global.nit:741,2--5)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltClassSelfId].i]) return;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltClassSelfId].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___TableEltVftPointer___is_related_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::TableEltVftPointer::is_related_to (src/compiling//compiling_global.nit:746,2--43)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Bool(true);
  goto return_label94;
  return_label94: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t compiling_global___TableEltVftPointer___compile_to_c(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::TableEltVftPointer::compile_to_c (src/compiling//compiling_global.nit:747,2--750:60)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
  variable2 = variable3;
  variable3 = NEW_string___String___init(); /*new String*/
  variable4 = NEW_string___String___with_native(BOX_NativeString("/* "), TAG_Int(3)); /*new String*/
  variable5 = variable4;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
  variable6 = ((compiling_global___ColorContext___color_t)CALL( variable2 /*ga*/,COLOR_compiling_global___ColorContext___color))( variable2 /*ga*/,  self) /*GlobalAnalysis::color*/;
  variable7 = variable6;
  variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
  variable8 = NEW_string___String___with_native(BOX_NativeString(": Pointer to the classtable */"), TAG_Int(30)); /*new String*/
  variable9 = variable8;
  ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
  variable2 = variable3;
  goto return_label95;
  return_label95: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_global___TableEltVftPointer___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::TableEltVftPointer::init (src/compiling//compiling_global.nit:753,2--5)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltVftPointer].i]) return;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_TableEltVftPointer].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___ClassSorter___compare(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "compiling_global::ClassSorter::compare (src/compiling//compiling_global.nit:760,2--47)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((compiling_global___MMLocalClass___compare_t)CALL( variable0 /*a*/,COLOR_compiling_global___MMLocalClass___compare))( variable0 /*a*/,  variable1 /*b*/) /*MMLocalClass::compare*/;
  goto return_label97;
  return_label97: while(false);
  tracehead = trace.prev;
  return variable2;
}
void compiling_global___ClassSorter___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "compiling_global::ClassSorter::init (src/compiling//compiling_global.nit:761,2--5)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ClassSorter].i]) return;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ClassSorter].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t compiling_global___MMLocalClass___compare(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::MMLocalClass::compare (src/compiling//compiling_global.nit:765,2--783:37)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  val_t variable4;
      val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  self;
  variable2 = TAG_Bool(( variable1 /*a*/ ==  variable0 /*b*/) || (( variable1 /*a*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*a*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*a*/, variable0 /*b*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*a*/,COLOR_kernel___Object_____eqeq))( variable1 /*a*/,  variable0 /*b*/) /*MMLocalClass::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  TAG_Int(0);
    goto return_label99;
  } else { /*if*/
    variable2 = ((abstractmetamodel___MMLocalClass___module_t)CALL( variable1 /*a*/,COLOR_abstractmetamodel___MMLocalClass___module))( variable1 /*a*/) /*MMLocalClass::module*/;
    variable2 = ((abstractmetamodel___MMModule___mhe_t)CALL(variable2,COLOR_abstractmetamodel___MMModule___mhe))(variable2) /*MMModule::mhe*/;
    variable3 = ((abstractmetamodel___MMLocalClass___module_t)CALL( variable0 /*b*/,COLOR_abstractmetamodel___MMLocalClass___module))( variable0 /*b*/) /*MMLocalClass::module*/;
    variable2 = ((partial_order___PartialOrderElement_____l_t)CALL(variable2,COLOR_partial_order___PartialOrderElement_____l))(variable2, variable3) /*PartialOrderElement::<*/;
    if (UNTAG_Bool(variable2)) { /*if*/
      variable1 =  TAG_Int(1);
      goto return_label99;
    } else { /*if*/
      variable2 = ((abstractmetamodel___MMLocalClass___module_t)CALL( variable0 /*b*/,COLOR_abstractmetamodel___MMLocalClass___module))( variable0 /*b*/) /*MMLocalClass::module*/;
      variable2 = ((abstractmetamodel___MMModule___mhe_t)CALL(variable2,COLOR_abstractmetamodel___MMModule___mhe))(variable2) /*MMModule::mhe*/;
      variable3 = ((abstractmetamodel___MMLocalClass___module_t)CALL( variable1 /*a*/,COLOR_abstractmetamodel___MMLocalClass___module))( variable1 /*a*/) /*MMLocalClass::module*/;
      variable2 = ((partial_order___PartialOrderElement_____l_t)CALL(variable2,COLOR_partial_order___PartialOrderElement_____l))(variable2, variable3) /*PartialOrderElement::<*/;
      if (UNTAG_Bool(variable2)) { /*if*/
        variable2 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
        variable1 = variable2;
        goto return_label99;
      }
    }
  }
  variable3 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable1 /*a*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable1 /*a*/) /*MMLocalClass::cshe*/;
  variable3 = ((partial_order___PartialOrderElement___rank_t)CALL(variable3,COLOR_partial_order___PartialOrderElement___rank))(variable3) /*PartialOrderElement::rank*/;
  variable2 = variable3;
  variable4 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable0 /*b*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable0 /*b*/) /*MMLocalClass::cshe*/;
  variable4 = ((partial_order___PartialOrderElement___rank_t)CALL(variable4,COLOR_partial_order___PartialOrderElement___rank))(variable4) /*PartialOrderElement::rank*/;
  variable3 = variable4;
  variable4 = TAG_Bool(UNTAG_Int( variable2 /*ar*/)>UNTAG_Int( variable3 /*br*/));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable1 =  TAG_Int(1);
    goto return_label99;
  } else { /*if*/
    variable4 = TAG_Bool(UNTAG_Int( variable3 /*br*/)>UNTAG_Int( variable2 /*ar*/));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
      variable1 = variable4;
      goto return_label99;
    } else { /*if*/
      variable4 = ((abstractmetamodel___MMLocalClass___name_t)CALL( variable0 /*b*/,COLOR_abstractmetamodel___MMLocalClass___name))( variable0 /*b*/) /*MMLocalClass::name*/;
      variable4 = ((symbol___Symbol___to_s_t)CALL(variable4,COLOR_string___Object___to_s))(variable4) /*Symbol::to_s*/;
      variable5 = ((abstractmetamodel___MMLocalClass___name_t)CALL( variable1 /*a*/,COLOR_abstractmetamodel___MMLocalClass___name))( variable1 /*a*/) /*MMLocalClass::name*/;
      variable5 = ((symbol___Symbol___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*Symbol::to_s*/;
      variable4 = ((kernel___Comparable_____leqg_t)CALL(variable4,COLOR_kernel___Comparable_____leqg))(variable4, variable5) /*String::<=>*/;
      variable1 = variable4;
      goto return_label99;
    }
  }
  return_label99: while(false);
  tracehead = trace.prev;
  return variable1;
}
void compiling_global___MMLocalClass___declare_tables_to_c(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::MMLocalClass::declare_tables_to_c (src/compiling//compiling_global.nit:787,2--800:71)"};
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
  variable1 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable1) /*CompilerVisitor::add_decl*/;
  variable2 = ((compiling_base___MMLocalClass___primitive_info_t)CALL( self,COLOR_compiling_base___MMLocalClass___primitive_info))( self) /*MMLocalClass::primitive_info*/;
  variable1 = variable2;
  variable2 = NEW_string___String___init(); /*new String*/
  variable3 = NEW_string___String___with_native(BOX_NativeString("extern const classtable_elt_t VFT_"), TAG_Int(34)); /*new String*/
  variable4 = variable3;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
  variable5 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
  variable6 = variable5;
  variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
  variable7 = NEW_string___String___with_native(BOX_NativeString("[];"), TAG_Int(3)); /*new String*/
  variable8 = variable7;
  ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable2) /*CompilerVisitor::add_decl*/;
  variable2 = TAG_Bool(( variable1 /*pi*/ ==  NIT_NULL /*null*/) || (( variable1 /*pi*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*pi*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*pi*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*pi*/,COLOR_kernel___Object_____eqeq))( variable1 /*pi*/,  NIT_NULL /*null*/) /*PrimitiveInfo::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
  } else { /*if*/
    variable2 = ((compiling_base___PrimitiveInfo___tagged_t)CALL( variable1 /*pi*/,COLOR_compiling_base___PrimitiveInfo___tagged))( variable1 /*pi*/) /*PrimitiveInfo::tagged*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable2)))) { /*if*/
      variable3 = ((compiling_base___PrimitiveInfo___cname_t)CALL( variable1 /*pi*/,COLOR_compiling_base___PrimitiveInfo___cname))( variable1 /*pi*/) /*PrimitiveInfo::cname*/;
      variable2 = variable3;
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("struct TBOX_"), TAG_Int(12)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
      variable8 = variable7;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
      variable3 = variable4;
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 =  variable3 /*tbox*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
      variable8 = NEW_string___String___with_native(BOX_NativeString(" { const classtable_elt_t * vft; "), TAG_Int(33)); /*new String*/
      variable9 = variable8;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
      variable10 =  variable2 /*t*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
      variable11 = NEW_string___String___with_native(BOX_NativeString(" val;};"), TAG_Int(7)); /*new String*/
      variable12 = variable11;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable4) /*CompilerVisitor::add_decl*/;
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("val_t BOX_"), TAG_Int(10)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
      variable8 = variable7;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
      variable11 =  variable2 /*t*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
      variable12 = NEW_string___String___with_native(BOX_NativeString(" val);"), TAG_Int(6)); /*new String*/
      variable13 = variable12;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable4) /*CompilerVisitor::add_decl*/;
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("#define UNBOX_"), TAG_Int(14)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
      variable8 = variable7;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString("(x) ((("), TAG_Int(7)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
      variable11 =  variable3 /*tbox*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
      variable12 = NEW_string___String___with_native(BOX_NativeString(" *)(VAL2OBJ(x)))->val)"), TAG_Int(22)); /*new String*/
      variable13 = variable12;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_decl_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_decl))( variable0 /*v*/, variable4) /*CompilerVisitor::add_decl*/;
    }
  }
  tracehead = trace.prev;
  return;
}
void compiling_global___MMLocalClass___compile_tables_to_c(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "compiling_global::MMLocalClass::compile_tables_to_c (src/compiling//compiling_global.nit:804,2--913:18)"};
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
          val_t variable18;
          val_t variable19;
          val_t variable20;
          val_t variable21;
          val_t variable22;
          val_t variable23;
          val_t variable24;
          val_t variable25;
            val_t variable26;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
  variable2 = ((compiling_global___GlobalAnalysis___compiled_classes_t)CALL(variable2,COLOR_compiling_global___GlobalAnalysis___compiled_classes))(variable2) /*GlobalAnalysis::compiled_classes*/;
  variable3 = ((abstractmetamodel___MMLocalClass___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___global))( self) /*MMLocalClass::global*/;
  variable2 = ((abstract_collection___CoupleMap_____bra_t)CALL(variable2,COLOR_abstract_collection___Map_____bra))(variable2, variable3) /*HashMap::[]*/;
  variable1 = variable2;
  variable3 = ((compiling_global___CompiledClass___class_table_t)CALL( variable1 /*cc*/,COLOR_compiling_global___CompiledClass___class_table))( variable1 /*cc*/) /*CompiledClass::class_table*/;
  variable2 = variable3;
  variable4 = ((array___AbstractArray___length_t)CALL( variable2 /*ctab*/,COLOR_abstract_collection___Collection___length))( variable2 /*ctab*/) /*Array::length*/;
  variable3 = variable4;
  variable4 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
  variable4 = ((compiling_global___GlobalAnalysis___max_class_table_length_t)CALL(variable4,COLOR_compiling_global___GlobalAnalysis___max_class_table_length))(variable4) /*GlobalAnalysis::max_class_table_length*/;
  variable5 = ((array___AbstractArray___length_t)CALL( variable2 /*ctab*/,COLOR_abstract_collection___Collection___length))( variable2 /*ctab*/) /*Array::length*/;
  variable4 = TAG_Bool(UNTAG_Int(variable4)>UNTAG_Int(variable5));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ((compiling_global___CompilerVisitor___global_analysis_t)CALL( variable0 /*v*/,COLOR_compiling_global___CompilerVisitor___global_analysis))( variable0 /*v*/) /*CompilerVisitor::global_analysis*/;
    variable4 = ((compiling_global___GlobalAnalysis___max_class_table_length_t)CALL(variable4,COLOR_compiling_global___GlobalAnalysis___max_class_table_length))(variable4) /*GlobalAnalysis::max_class_table_length*/;
    variable3 = variable4 /*clen=*/;
  }
  variable4 = NEW_string___String___init(); /*new String*/
  variable5 = NEW_string___String___with_native(BOX_NativeString("const classtable_elt_t VFT_"), TAG_Int(27)); /*new String*/
  variable6 = variable5;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
  variable7 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
  variable8 = variable7;
  variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString("["), TAG_Int(1)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
  variable11 =  variable3 /*clen*/;
  variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
  variable12 = NEW_string___String___with_native(BOX_NativeString("] = {"), TAG_Int(5)); /*new String*/
  variable13 = variable12;
  ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
  ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
  variable4 = ((array___AbstractArray___iterator_t)CALL( variable2 /*ctab*/,COLOR_abstract_collection___Collection___iterator))( variable2 /*ctab*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable5 = ((array___ArrayIterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable5)) break; /*for*/
    variable5 = ((array___ArrayIterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*ArrayIterator::item*/;
    variable6 = TAG_Bool(( variable5 /*e*/ ==  NIT_NULL /*null*/) || (( variable5 /*e*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable5 /*e*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable5 /*e*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable5 /*e*/,COLOR_kernel___Object_____eqeq))( variable5 /*e*/,  NIT_NULL /*null*/) /*TableElt::==*/)))));
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = NEW_string___String___with_native(BOX_NativeString("{0} /* Class Hole :( */,"), TAG_Int(24)); /*new String*/
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
    } else { /*if*/
      variable6 = NEW_string___String___init(); /*new String*/
      variable7 = NEW_string___String___with_native(BOX_NativeString("{(int) "), TAG_Int(7)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
      variable9 = ((compiling_global___TableElt___compile_to_c_t)CALL( variable5 /*e*/,COLOR_compiling_global___TableElt___compile_to_c))( variable5 /*e*/,  variable0 /*v*/,  self) /*TableElt::compile_to_c*/;
      variable10 = variable9;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
      variable11 = NEW_string___String___with_native(BOX_NativeString("},"), TAG_Int(2)); /*new String*/
      variable12 = variable11;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable6) /*CompilerVisitor::add_instr*/;
    }
    continue_102: while(0);
    ((array___ArrayIterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*ArrayIterator::next*/;
  }
  break_102: while(0);
  variable4 = ((array___AbstractArray___length_t)CALL( variable2 /*ctab*/,COLOR_abstract_collection___Collection___length))( variable2 /*ctab*/) /*Array::length*/;
  variable4 = TAG_Bool(UNTAG_Int( variable3 /*clen*/)>UNTAG_Int(variable4));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = NEW_string___String___with_native(BOX_NativeString("{0},"), TAG_Int(4)); /*new String*/
    variable5 = ((array___AbstractArray___length_t)CALL( variable2 /*ctab*/,COLOR_abstract_collection___Collection___length))( variable2 /*ctab*/) /*Array::length*/;
    variable5 = TAG_Int(UNTAG_Int( variable3 /*clen*/)-UNTAG_Int(variable5));
    variable4 = ((string___String_____star_t)CALL(variable4,COLOR_string___String_____star))(variable4, variable5) /*String::**/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
  }
  ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
  variable4 = NEW_string___String___with_native(BOX_NativeString("};"), TAG_Int(2)); /*new String*/
  ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable4) /*CompilerVisitor::add_instr*/;
  variable5 = ((compiling_global___CompiledClass___instance_table_t)CALL( variable1 /*cc*/,COLOR_compiling_global___CompiledClass___instance_table))( variable1 /*cc*/) /*CompiledClass::instance_table*/;
  variable4 = variable5;
  variable5 = ((array___AbstractArray___iterator_t)CALL( variable4 /*itab*/,COLOR_abstract_collection___Collection___iterator))( variable4 /*itab*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable6 = ((array___ArrayIterator___is_ok_t)CALL(variable5,COLOR_abstract_collection___Iterator___is_ok))(variable5) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable6)) break; /*for*/
    variable6 = ((array___ArrayIterator___item_t)CALL(variable5,COLOR_abstract_collection___Iterator___item))(variable5) /*ArrayIterator::item*/;
    variable7 = TAG_Bool(( variable6 /*e*/ ==  NIT_NULL /*null*/) || (( variable6 /*e*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable6 /*e*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable6 /*e*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable6 /*e*/,COLOR_kernel___Object_____eqeq))( variable6 /*e*/,  NIT_NULL /*null*/) /*TableElt::==*/)))));
    if (UNTAG_Bool(variable7)) { /*if*/
      variable7 = NEW_string___String___with_native(BOX_NativeString("/* Instance Hole :( */"), TAG_Int(22)); /*new String*/
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable7) /*CompilerVisitor::add_instr*/;
    } else { /*if*/
      variable7 = ((compiling_global___TableElt___compile_to_c_t)CALL( variable6 /*e*/,COLOR_compiling_global___TableElt___compile_to_c))( variable6 /*e*/,  variable0 /*v*/,  self) /*TableElt::compile_to_c*/;
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable7) /*CompilerVisitor::add_instr*/;
    }
    continue_103: while(0);
    ((array___ArrayIterator___next_t)CALL(variable5,COLOR_abstract_collection___Iterator___next))(variable5) /*ArrayIterator::next*/;
  }
  break_103: while(0);
  variable6 = ((compiling_base___MMLocalClass___primitive_info_t)CALL( self,COLOR_compiling_base___MMLocalClass___primitive_info))( self) /*MMLocalClass::primitive_info*/;
  variable5 = variable6;
  variable6 = TAG_Bool(( variable5 /*pi*/ ==  NIT_NULL /*null*/) || (( variable5 /*pi*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable5 /*pi*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable5 /*pi*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable5 /*pi*/,COLOR_kernel___Object_____eqeq))( variable5 /*pi*/,  NIT_NULL /*null*/) /*PrimitiveInfo::==*/)))));
  if (UNTAG_Bool(variable6)) { /*if*/
    ((compiling_methods___CompilerVisitor___clear_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___clear))( variable0 /*v*/) /*CompilerVisitor::clear*/;
    variable7 = NEW_string___String___init(); /*new String*/
    variable8 = NEW_string___String___with_native(BOX_NativeString("val_t NEW_"), TAG_Int(10)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
    variable10 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
    variable11 = variable10;
    variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable11) /*String::append*/;
    variable12 = NEW_string___String___with_native(BOX_NativeString("(void)"), TAG_Int(6)); /*new String*/
    variable13 = variable12;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable13) /*String::append*/;
    variable6 = variable7;
    variable7 = NEW_string___String___with_native(BOX_NativeString(" {"), TAG_Int(2)); /*new String*/
    variable7 = ((string___String_____plus_t)CALL( variable6 /*s*/,COLOR_string___String_____plus))( variable6 /*s*/, variable7) /*String::+*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable7) /*CompilerVisitor::add_instr*/;
    ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
    variable8 = ((compiling_base___CompilerVisitor___ctx_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___ctx))( variable0 /*v*/) /*CompilerVisitor::ctx*/;
    variable7 = variable8;
    variable8 = NEW_compiling_base___CContext___init(); /*new CContext*/
    ((compiling_base___CompilerVisitor___ctx__eq_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___ctx__eq))( variable0 /*v*/, variable8) /*CompilerVisitor::ctx=*/;
    variable8 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[String]*/
    variable9 = NEW_string___String___with_native(BOX_NativeString("OBJ2VAL(obj)"), TAG_Int(12)); /*new String*/
    ((array___AbstractArray___add_t)CALL(variable8,COLOR_abstract_collection___SimpleCollection___add))(variable8, variable9) /*Array::add*/;
    ((compiling_methods___CompilerVisitor___method_params__eq_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___method_params__eq))( variable0 /*v*/, variable8) /*CompilerVisitor::method_params=*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString("obj_t obj;"), TAG_Int(10)); /*new String*/
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
    variable8 = NEW_string___String___init(); /*new String*/
    variable9 = NEW_string___String___with_native(BOX_NativeString("obj = alloc(sizeof(val_t) * "), TAG_Int(28)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable10) /*String::append*/;
    variable11 = ((array___AbstractArray___length_t)CALL( variable4 /*itab*/,COLOR_abstract_collection___Collection___length))( variable4 /*itab*/) /*Array::length*/;
    variable12 = variable11;
    variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable12) /*String::append*/;
    variable13 = NEW_string___String___with_native(BOX_NativeString(");"), TAG_Int(2)); /*new String*/
    variable14 = variable13;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable14) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
    variable8 = NEW_string___String___init(); /*new String*/
    variable9 = NEW_string___String___with_native(BOX_NativeString("obj->vft = (classtable_elt_t*)VFT_"), TAG_Int(34)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable10) /*String::append*/;
    variable11 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
    variable12 = variable11;
    variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable12) /*String::append*/;
    variable13 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
    variable14 = variable13;
    ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable14) /*String::append*/;
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
    variable8 = ((abstractmetamodel___MMLocalClass___global_properties_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___global_properties))( self) /*MMLocalClass::global_properties*/;
    variable8 = ((abstract_collection___Collection___iterator_t)CALL(variable8,COLOR_abstract_collection___Collection___iterator))(variable8) /*Set::iterator*/;
    while (true) { /*for*/
      variable9 = ((abstract_collection___Iterator___is_ok_t)CALL(variable8,COLOR_abstract_collection___Iterator___is_ok))(variable8) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable9)) break; /*for*/
      variable9 = ((abstract_collection___Iterator___item_t)CALL(variable8,COLOR_abstract_collection___Iterator___item))(variable8) /*Iterator::item*/;
      variable11 = ((inheritance___MMLocalClass_____bra_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass_____bra))( self,  variable9 /*g*/) /*MMLocalClass::[]*/;
      variable10 = variable11;
      variable12 = ((genericity___MMLocalProperty___signature_t)CALL( variable10 /*p*/,COLOR_static_type___MMLocalProperty___signature))( variable10 /*p*/) /*MMLocalProperty::signature*/;
      variable12 = ((static_type___MMSignature___return_type_t)CALL(variable12,COLOR_static_type___MMSignature___return_type))(variable12) /*MMSignature::return_type*/;
      variable11 = variable12;
      variable12 = TAG_Bool(( variable10 /*p*/==NIT_NULL) || VAL_ISA( variable10 /*p*/, COLOR_MMAttribute, ID_MMAttribute)) /*cast MMAttribute*/;
      variable13 = variable12;
      if (UNTAG_Bool(variable13)) { /* and */
        variable13 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable11 /*t*/ ==  NIT_NULL /*null*/) || (( variable11 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable11 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable11 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable11 /*t*/,COLOR_kernel___Object_____eqeq))( variable11 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
      }
      variable12 = variable13;
      if (UNTAG_Bool(variable12)) { /*if*/
        variable13 = ((abstractmetamodel___MMLocalProperty___concrete_property_t)CALL( variable10 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___concrete_property))( variable10 /*p*/) /*MMAttribute::concrete_property*/;
        variable12 = variable13;
        variable13 = TAG_Bool(( variable12 /*pi*/==NIT_NULL) || VAL_ISA( variable12 /*pi*/, COLOR_MMSrcAttribute, ID_MMSrcAttribute)) /*cast MMSrcAttribute*/;
        if (!UNTAG_Bool(variable13)) { fprintf(stderr, "Assert failed: src/compiling//compiling_global.nit:857,6--33\n"); nit_exit(1);}
        variable14 = ((syntax_base___MMSrcLocalProperty___node_t)CALL( variable12 /*pi*/,COLOR_syntax_base___MMSrcLocalProperty___node))( variable12 /*pi*/) /*MMSrcAttribute::node*/;
        variable13 = variable14;
        variable14 = TAG_Bool(( variable13 /*np*/==NIT_NULL) || VAL_ISA( variable13 /*np*/, COLOR_AAttrPropdef, ID_AAttrPropdef)) /*cast AAttrPropdef*/;
        if (!UNTAG_Bool(variable14)) { fprintf(stderr, "Assert failed: src/compiling//compiling_global.nit:859,6--31\n"); nit_exit(1);}
        variable15 = ((parser_nodes___AAttrPropdef___n_expr_t)CALL( variable13 /*np*/,COLOR_parser_nodes___AAttrPropdef___n_expr))( variable13 /*np*/) /*AAttrPropdef::n_expr*/;
        variable14 = variable15;
        variable15 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable14 /*ne*/ ==  NIT_NULL /*null*/) || (( variable14 /*ne*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable14 /*ne*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable14 /*ne*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable14 /*ne*/,COLOR_kernel___Object_____eqeq))( variable14 /*ne*/,  NIT_NULL /*null*/) /*PExpr::==*/)))))));
        if (UNTAG_Bool(variable15)) { /*if*/
          variable16 = ((compiling_methods___PExpr___compile_expr_t)CALL( variable14 /*ne*/,COLOR_compiling_methods___PExpr___compile_expr))( variable14 /*ne*/,  variable0 /*v*/) /*PExpr::compile_expr*/;
          variable15 = variable16;
          variable16 = NEW_string___String___init(); /*new String*/
          variable17 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
          variable18 = variable17;
          ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable18) /*String::append*/;
          variable19 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable10 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable10 /*p*/) /*MMAttribute::global*/;
          variable19 = ((compiling_base___MMGlobalProperty___attr_access_t)CALL(variable19,COLOR_compiling_base___MMGlobalProperty___attr_access))(variable19) /*MMGlobalProperty::attr_access*/;
          variable20 = variable19;
          ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable20) /*String::append*/;
          variable21 = NEW_string___String___with_native(BOX_NativeString("(obj) = "), TAG_Int(8)); /*new String*/
          variable22 = variable21;
          ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable22) /*String::append*/;
          variable23 =  variable15 /*e*/;
          ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable23) /*String::append*/;
          variable24 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
          variable25 = variable24;
          ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable25) /*String::append*/;
          ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable16) /*CompilerVisitor::add_instr*/;
        } else { /*if*/
          variable16 = ((static_type___MMType___local_class_t)CALL( variable11 /*t*/,COLOR_static_type___MMType___local_class))( variable11 /*t*/) /*MMType::local_class*/;
          variable16 = ((compiling_base___MMLocalClass___primitive_info_t)CALL(variable16,COLOR_compiling_base___MMLocalClass___primitive_info))(variable16) /*MMLocalClass::primitive_info*/;
          variable15 = variable16;
          variable16 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable15 /*pi*/ ==  NIT_NULL /*null*/) || (( variable15 /*pi*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable15 /*pi*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable15 /*pi*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable15 /*pi*/,COLOR_kernel___Object_____eqeq))( variable15 /*pi*/,  NIT_NULL /*null*/) /*PrimitiveInfo::==*/)))))));
          variable17 = variable16;
          if (UNTAG_Bool(variable17)) { /* and */
            variable17 = ((compiling_base___PrimitiveInfo___tagged_t)CALL( variable15 /*pi*/,COLOR_compiling_base___PrimitiveInfo___tagged))( variable15 /*pi*/) /*PrimitiveInfo::tagged*/;
          }
          variable16 = variable17;
          if (UNTAG_Bool(variable16)) { /*if*/
            variable17 = ((compiling_base___MMType___default_cvalue_t)CALL( variable11 /*t*/,COLOR_compiling_base___MMType___default_cvalue))( variable11 /*t*/) /*MMType::default_cvalue*/;
            variable16 = variable17;
            variable17 = NEW_string___String___init(); /*new String*/
            variable18 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
            variable19 = variable18;
            ((string___String___append_t)CALL(variable17,COLOR_abstract_collection___IndexedCollection___append))(variable17, variable19) /*String::append*/;
            variable20 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable10 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable10 /*p*/) /*MMAttribute::global*/;
            variable20 = ((compiling_base___MMGlobalProperty___attr_access_t)CALL(variable20,COLOR_compiling_base___MMGlobalProperty___attr_access))(variable20) /*MMGlobalProperty::attr_access*/;
            variable21 = variable20;
            ((string___String___append_t)CALL(variable17,COLOR_abstract_collection___IndexedCollection___append))(variable17, variable21) /*String::append*/;
            variable22 = NEW_string___String___with_native(BOX_NativeString("(obj) = "), TAG_Int(8)); /*new String*/
            variable23 = variable22;
            ((string___String___append_t)CALL(variable17,COLOR_abstract_collection___IndexedCollection___append))(variable17, variable23) /*String::append*/;
            variable24 =  variable16 /*default*/;
            ((string___String___append_t)CALL(variable17,COLOR_abstract_collection___IndexedCollection___append))(variable17, variable24) /*String::append*/;
            variable25 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
            variable26 = variable25;
            ((string___String___append_t)CALL(variable17,COLOR_abstract_collection___IndexedCollection___append))(variable17, variable26) /*String::append*/;
            ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable17) /*CompilerVisitor::add_instr*/;
          }
        }
      }
      continue_104: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable8,COLOR_abstract_collection___Iterator___next))(variable8) /*Iterator::next*/;
    }
    break_104: while(0);
    variable8 = NEW_string___String___with_native(BOX_NativeString("return OBJ2VAL(obj);"), TAG_Int(20)); /*new String*/
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
    variable8 = ((compiling_base___CompilerVisitor___ctx_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___ctx))( variable0 /*v*/) /*CompilerVisitor::ctx*/;
    ((compiling_base___CContext___append_t)CALL( variable7 /*ctx_old*/,COLOR_compiling_base___CContext___append))( variable7 /*ctx_old*/, variable8) /*CContext::append*/;
    ((compiling_base___CompilerVisitor___ctx__eq_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___ctx__eq))( variable0 /*v*/,  variable7 /*ctx_old*/) /*CompilerVisitor::ctx=*/;
    ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
    ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
    variable9 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___cshe))( self) /*MMLocalClass::cshe*/;
    variable9 = ((partial_order___PartialOrderElement___greaters_t)CALL(variable9,COLOR_partial_order___PartialOrderElement___greaters))(variable9) /*PartialOrderElement::greaters*/;
    variable9 = ((abstract_collection___Collection___length_t)CALL(variable9,COLOR_abstract_collection___Collection___length))(variable9) /*Set::length*/;
    variable9 = TAG_Int(UNTAG_Int(variable9)+UNTAG_Int( TAG_Int(1)));
    variable8 = variable9;
    variable10 = NEW_string___String___init(); /*new String*/
    variable11 = NEW_string___String___with_native(BOX_NativeString("int init_table["), TAG_Int(15)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable12) /*String::append*/;
    variable13 =  variable8 /*init_table_size*/;
    variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable13) /*String::append*/;
    variable14 = NEW_string___String___with_native(BOX_NativeString("] = {0"), TAG_Int(6)); /*new String*/
    variable15 = variable14;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable15) /*String::append*/;
    variable16 = NEW_string___String___with_native(BOX_NativeString(", 0"), TAG_Int(3)); /*new String*/
    variable17 = TAG_Int(UNTAG_Int( variable8 /*init_table_size*/)-UNTAG_Int( TAG_Int(1)));
    variable16 = ((string___String_____star_t)CALL(variable16,COLOR_string___String_____star))(variable16, variable17) /*String::**/;
    variable17 = variable16;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable17) /*String::append*/;
    variable18 = NEW_string___String___with_native(BOX_NativeString("};"), TAG_Int(2)); /*new String*/
    variable19 = variable18;
    ((string___String___append_t)CALL(variable10,COLOR_abstract_collection___IndexedCollection___append))(variable10, variable19) /*String::append*/;
    variable9 = variable10;
    variable10 = ((abstractmetamodel___MMLocalClass___global_properties_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___global_properties))( self) /*MMLocalClass::global_properties*/;
    variable10 = ((abstract_collection___Collection___iterator_t)CALL(variable10,COLOR_abstract_collection___Collection___iterator))(variable10) /*Set::iterator*/;
    while (true) { /*for*/
      variable11 = ((abstract_collection___Iterator___is_ok_t)CALL(variable10,COLOR_abstract_collection___Iterator___is_ok))(variable10) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable11)) break; /*for*/
      variable11 = ((abstract_collection___Iterator___item_t)CALL(variable10,COLOR_abstract_collection___Iterator___item))(variable10) /*Iterator::item*/;
      variable13 = ((inheritance___MMLocalClass_____bra_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass_____bra))( self,  variable11 /*g*/) /*MMLocalClass::[]*/;
      variable12 = variable13;
      variable13 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable12 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable12 /*p*/) /*MMLocalProperty::global*/;
      variable13 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL(variable13,COLOR_abstractmetamodel___MMGlobalProperty___is_init))(variable13) /*MMGlobalProperty::is_init*/;
      variable13 =  TAG_Bool(!UNTAG_Bool(variable13));
      if (!UNTAG_Bool(variable13)) { /* or */
        variable13 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable12 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable12 /*p*/) /*MMLocalProperty::global*/;
        variable13 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL(variable13,COLOR_abstractmetamodel___MMGlobalProperty___intro))(variable13) /*MMGlobalProperty::intro*/;
        variable13 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL(variable13,COLOR_abstractmetamodel___MMLocalProperty___local_class))(variable13) /*MMConcreteProperty::local_class*/;
        variable13 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable13,COLOR_abstractmetamodel___MMLocalClass___global))(variable13) /*MMLocalClass::global*/;
        variable14 = ((abstractmetamodel___MMLocalClass___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___global))( self) /*MMLocalClass::global*/;
        variable13 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable13 == variable14) || ((variable13 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable13,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable13,variable14)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable13,COLOR_kernel___Object_____eqeq))(variable13, variable14) /*MMGlobalClass::==*/)))))));
      }
      if (UNTAG_Bool(variable13)) { /*if*/
        goto continue_105;
      }
      ((compiling_methods___CompilerVisitor___clear_t)CALL( variable0 /*v*/,COLOR_compiling_methods___CompilerVisitor___clear))( variable0 /*v*/) /*CompilerVisitor::clear*/;
      variable14 = NEW_array___Array___init(); /*new Array[String]*/
      variable13 = variable14;
      variable15 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[String]*/
      variable16 = NEW_string___String___with_native(BOX_NativeString("self"), TAG_Int(4)); /*new String*/
      ((array___AbstractArray___add_t)CALL(variable15,COLOR_abstract_collection___SimpleCollection___add))(variable15, variable16) /*Array::add*/;
      variable14 = variable15;
      variable15 = ((genericity___MMLocalProperty___signature_t)CALL( variable12 /*p*/,COLOR_static_type___MMLocalProperty___signature))( variable12 /*p*/) /*MMLocalProperty::signature*/;
      variable15 = ((static_type___MMSignature___arity_t)CALL(variable15,COLOR_static_type___MMSignature___arity))(variable15) /*MMSignature::arity*/;
      variable16 = NEW_range___Range___without_last( TAG_Int(0), variable15); /*new Range[Int]*/
      variable15 = variable16;
      variable15 = ((range___Range___iterator_t)CALL(variable15,COLOR_abstract_collection___Collection___iterator))(variable15) /*Range::iterator*/;
      while (true) { /*for*/
        variable16 = ((abstract_collection___Iterator___is_ok_t)CALL(variable15,COLOR_abstract_collection___Iterator___is_ok))(variable15) /*Iterator::is_ok*/;
        if (!UNTAG_Bool(variable16)) break; /*for*/
        variable16 = ((abstract_collection___Iterator___item_t)CALL(variable15,COLOR_abstract_collection___Iterator___item))(variable15) /*Iterator::item*/;
        variable17 = NEW_string___String___init(); /*new String*/
        variable18 = NEW_string___String___with_native(BOX_NativeString("val_t p"), TAG_Int(7)); /*new String*/
        variable19 = variable18;
        ((string___String___append_t)CALL(variable17,COLOR_abstract_collection___IndexedCollection___append))(variable17, variable19) /*String::append*/;
        variable20 =  variable16 /*i*/;
        variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
        ((string___String___append_t)CALL(variable17,COLOR_abstract_collection___IndexedCollection___append))(variable17, variable20) /*String::append*/;
        variable21 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
        variable22 = variable21;
        ((string___String___append_t)CALL(variable17,COLOR_abstract_collection___IndexedCollection___append))(variable17, variable22) /*String::append*/;
        ((array___AbstractArray___add_t)CALL( variable13 /*params*/,COLOR_abstract_collection___SimpleCollection___add))( variable13 /*params*/, variable17) /*Array::add*/;
        variable17 = NEW_string___String___init(); /*new String*/
        variable18 = NEW_string___String___with_native(BOX_NativeString("p"), TAG_Int(1)); /*new String*/
        variable19 = variable18;
        ((string___String___append_t)CALL(variable17,COLOR_abstract_collection___IndexedCollection___append))(variable17, variable19) /*String::append*/;
        variable20 =  variable16 /*i*/;
        variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
        ((string___String___append_t)CALL(variable17,COLOR_abstract_collection___IndexedCollection___append))(variable17, variable20) /*String::append*/;
        variable21 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
        variable22 = variable21;
        ((string___String___append_t)CALL(variable17,COLOR_abstract_collection___IndexedCollection___append))(variable17, variable22) /*String::append*/;
        ((array___AbstractArray___add_t)CALL( variable14 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable14 /*args*/, variable17) /*Array::add*/;
        continue_106: while(0);
        ((abstract_collection___Iterator___next_t)CALL(variable15,COLOR_abstract_collection___Iterator___next))(variable15) /*Iterator::next*/;
      }
      break_106: while(0);
      variable15 = NEW_string___String___with_native(BOX_NativeString("init_table"), TAG_Int(10)); /*new String*/
      ((array___AbstractArray___add_t)CALL( variable14 /*args*/,COLOR_abstract_collection___SimpleCollection___add))( variable14 /*args*/, variable15) /*Array::add*/;
      variable16 = NEW_string___String___init(); /*new String*/
      variable17 = NEW_string___String___with_native(BOX_NativeString("val_t NEW_"), TAG_Int(10)); /*new String*/
      variable18 = variable17;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable18) /*String::append*/;
      variable19 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable12 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable12 /*p*/) /*MMLocalProperty::global*/;
      variable19 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL(variable19,COLOR_abstractmetamodel___MMGlobalProperty___intro))(variable19) /*MMGlobalProperty::intro*/;
      variable19 = ((compiling_base___MMLocalProperty___cname_t)CALL(variable19,COLOR_compiling_base___MMLocalProperty___cname))(variable19) /*MMConcreteProperty::cname*/;
      variable20 = variable19;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable20) /*String::append*/;
      variable21 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
      variable22 = variable21;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable22) /*String::append*/;
      variable23 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
      variable23 = ((string___Collection___join_t)CALL( variable13 /*params*/,COLOR_string___Collection___join))( variable13 /*params*/, variable23) /*Array::join*/;
      variable24 = variable23;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable24) /*String::append*/;
      variable25 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
      variable26 = variable25;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable26) /*String::append*/;
      variable15 = variable16;
      variable16 = NEW_string___String___with_native(BOX_NativeString(" {"), TAG_Int(2)); /*new String*/
      variable16 = ((string___String_____plus_t)CALL( variable15 /*s*/,COLOR_string___String_____plus))( variable15 /*s*/, variable16) /*String::+*/;
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable16) /*CompilerVisitor::add_instr*/;
      ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/,  variable9 /*init_table_decl*/) /*CompilerVisitor::add_instr*/;
      variable16 = NEW_string___String___init(); /*new String*/
      variable17 = NEW_string___String___with_native(BOX_NativeString("val_t self = NEW_"), TAG_Int(17)); /*new String*/
      variable18 = variable17;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable18) /*String::append*/;
      variable19 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
      variable20 = variable19;
      variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable20) /*String::append*/;
      variable21 = NEW_string___String___with_native(BOX_NativeString("();"), TAG_Int(3)); /*new String*/
      variable22 = variable21;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable22) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable16) /*CompilerVisitor::add_instr*/;
      variable16 = NEW_string___String___init(); /*new String*/
      variable17 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable18 = variable17;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable18) /*String::append*/;
      variable19 = ((abstractmetamodel___MMLocalProperty___concrete_property_t)CALL( variable12 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___concrete_property))( variable12 /*p*/) /*MMLocalProperty::concrete_property*/;
      variable19 = ((compiling_base___MMLocalProperty___cname_t)CALL(variable19,COLOR_compiling_base___MMLocalProperty___cname))(variable19) /*MMConcreteProperty::cname*/;
      variable20 = variable19;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable20) /*String::append*/;
      variable21 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
      variable22 = variable21;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable22) /*String::append*/;
      variable23 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
      variable23 = ((string___Collection___join_t)CALL( variable14 /*args*/,COLOR_string___Collection___join))( variable14 /*args*/, variable23) /*Array::join*/;
      variable24 = variable23;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable24) /*String::append*/;
      variable25 = NEW_string___String___with_native(BOX_NativeString(");"), TAG_Int(2)); /*new String*/
      variable26 = variable25;
      ((string___String___append_t)CALL(variable16,COLOR_abstract_collection___IndexedCollection___append))(variable16, variable26) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable16) /*CompilerVisitor::add_instr*/;
      variable16 = NEW_string___String___with_native(BOX_NativeString("return self;"), TAG_Int(12)); /*new String*/
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable16) /*CompilerVisitor::add_instr*/;
      ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
      variable16 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable16) /*CompilerVisitor::add_instr*/;
      continue_105: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable10,COLOR_abstract_collection___Iterator___next))(variable10) /*Iterator::next*/;
    }
    break_105: while(0);
  } else { /*if*/
    variable6 = ((compiling_base___PrimitiveInfo___tagged_t)CALL( variable5 /*pi*/,COLOR_compiling_base___PrimitiveInfo___tagged))( variable5 /*pi*/) /*PrimitiveInfo::tagged*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable6)))) { /*if*/
      variable7 = ((compiling_base___PrimitiveInfo___cname_t)CALL( variable5 /*pi*/,COLOR_compiling_base___PrimitiveInfo___cname))( variable5 /*pi*/) /*PrimitiveInfo::cname*/;
      variable6 = variable7;
      variable8 = NEW_string___String___init(); /*new String*/
      variable9 = NEW_string___String___with_native(BOX_NativeString("struct TBOX_"), TAG_Int(12)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable10) /*String::append*/;
      variable11 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
      variable12 = variable11;
      variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable14) /*String::append*/;
      variable7 = variable8;
      variable8 = NEW_string___String___init(); /*new String*/
      variable9 = NEW_string___String___with_native(BOX_NativeString("val_t BOX_"), TAG_Int(10)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable10) /*String::append*/;
      variable11 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
      variable12 = variable11;
      variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable14) /*String::append*/;
      variable15 =  variable6 /*t*/;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable15) /*String::append*/;
      variable16 = NEW_string___String___with_native(BOX_NativeString(" val) {"), TAG_Int(7)); /*new String*/
      variable17 = variable16;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable17) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
      ((compiling_base___CompilerVisitor___indent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___indent))( variable0 /*v*/) /*CompilerVisitor::indent*/;
      variable8 = NEW_string___String___init(); /*new String*/
      variable9 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable10) /*String::append*/;
      variable11 =  variable7 /*tbox*/;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable11) /*String::append*/;
      variable12 = NEW_string___String___with_native(BOX_NativeString(" *box = ("), TAG_Int(9)); /*new String*/
      variable13 = variable12;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable13) /*String::append*/;
      variable14 =  variable7 /*tbox*/;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable14) /*String::append*/;
      variable15 = NEW_string___String___with_native(BOX_NativeString("*)alloc(sizeof("), TAG_Int(15)); /*new String*/
      variable16 = variable15;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable16) /*String::append*/;
      variable17 =  variable7 /*tbox*/;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable17) /*String::append*/;
      variable18 = NEW_string___String___with_native(BOX_NativeString("));"), TAG_Int(3)); /*new String*/
      variable19 = variable18;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable19) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
      variable8 = NEW_string___String___init(); /*new String*/
      variable9 = NEW_string___String___with_native(BOX_NativeString("box->vft = VFT_"), TAG_Int(15)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable10) /*String::append*/;
      variable11 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
      variable12 = variable11;
      variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString(";"), TAG_Int(1)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable14) /*String::append*/;
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
      variable8 = NEW_string___String___with_native(BOX_NativeString("box->val = val;"), TAG_Int(15)); /*new String*/
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
      variable8 = NEW_string___String___with_native(BOX_NativeString("return OBJ2VAL(box);"), TAG_Int(20)); /*new String*/
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
      ((compiling_base___CompilerVisitor___unindent_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___unindent))( variable0 /*v*/) /*CompilerVisitor::unindent*/;
      variable8 = NEW_string___String___with_native(BOX_NativeString("}"), TAG_Int(1)); /*new String*/
      ((compiling_base___CompilerVisitor___add_instr_t)CALL( variable0 /*v*/,COLOR_compiling_base___CompilerVisitor___add_instr))( variable0 /*v*/, variable8) /*CompilerVisitor::add_instr*/;
    }
  }
  tracehead = trace.prev;
  return;
}
