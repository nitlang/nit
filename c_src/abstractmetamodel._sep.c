#include "abstractmetamodel._sep.h"
void abstractmetamodel___MMContext___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMContext::init (src/metamodel//abstractmetamodel.nit:26,2--5)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMContext].i]) return;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMContext].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMContext___module_hierarchy(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMContext::module_hierarchy (src/metamodel//abstractmetamodel.nit:28,2--29:84)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMContext____module_hierarchy( self) /*MMContext::_module_hierarchy*/;
}
val_t abstractmetamodel___MMContext___class_hierarchy(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMContext::class_hierarchy (src/metamodel//abstractmetamodel.nit:31,2--33:91)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMContext____class_hierarchy( self) /*MMContext::_class_hierarchy*/;
}
val_t abstractmetamodel___MMContext___modules(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMContext::modules (src/metamodel//abstractmetamodel.nit:38,2--39:61)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMContext____modules( self) /*MMContext::_modules*/;
}
void abstractmetamodel___MMContext___add_module(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMContext::add_module (src/metamodel//abstractmetamodel.nit:41,2--48:40)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*supers*/ ==  NIT_NULL /*null*/) || (( variable1 /*supers*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable1 /*supers*/,COLOR_kernel___Object_____eqeq))( variable1 /*supers*/,  NIT_NULL /*null*/) /*Array::==*/)))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:44,3--23\n"); nit_exit(1);}
  variable2 = ATTR_abstractmetamodel___MMContext____module_hierarchy( self) /*MMContext::_module_hierarchy*/;
  variable3 = ATTR_abstractmetamodel___MMContext____module_hierarchy( self) /*MMContext::_module_hierarchy*/;
  variable3 = ((partial_order___PartialOrder___select_smallests_t)CALL(variable3,COLOR_partial_order___PartialOrder___select_smallests))(variable3,  variable1 /*supers*/) /*PartialOrder::select_smallests*/;
  ((partial_order___PartialOrder___add_t)CALL(variable2,COLOR_partial_order___PartialOrder___add))(variable2,  variable0 /*module*/, variable3) /*PartialOrder::add*/;
  variable2 = ((abstractmetamodel___MMModule___name_t)CALL( variable0 /*module*/,COLOR_abstractmetamodel___MMModule___name))( variable0 /*module*/) /*MMModule::name*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*Symbol::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:46,3--28\n"); nit_exit(1);}
  variable2 = ATTR_abstractmetamodel___MMContext____modules( self) /*MMContext::_modules*/;
  ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2,  variable0 /*module*/) /*Array::add*/;
  variable2 = ATTR_abstractmetamodel___MMContext____module_hierarchy( self) /*MMContext::_module_hierarchy*/;
  variable2 = ((partial_order___PartialOrder_____bra_t)CALL(variable2,COLOR_partial_order___PartialOrder_____bra))(variable2,  variable0 /*module*/) /*PartialOrder::[]*/;
  ATTR_abstractmetamodel___MMModule____mhe( variable0 /*module*/) /*MMModule::_mhe*/ = variable2;
  tracehead = trace.prev;
  return;
}
void abstractmetamodel___MMContext___add_global_class(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMContext::add_global_class (src/metamodel//abstractmetamodel.nit:51,2--52:73)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstractmetamodel___MMContext____global_classes( self) /*MMContext::_global_classes*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1,  variable0 /*c*/) /*Array::add*/;
  tracehead = trace.prev;
  return;
}
void abstractmetamodel___MMContext___add_local_class(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMContext::add_local_class (src/metamodel//abstractmetamodel.nit:54,2--71:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
    val_t variable5;
    val_t variable6;
        val_t variable7;
        val_t variable8;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*sup*/ ==  NIT_NULL /*null*/) || (( variable1 /*sup*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable1 /*sup*/,COLOR_kernel___Object_____eqeq))( variable1 /*sup*/,  NIT_NULL /*null*/) /*Array::==*/)))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:57,3--20\n"); nit_exit(1);}
  variable3 = NEW_array___Array___init(); /*new Array[MMLocalClass]*/
  variable2 = variable3;
  variable4 = NEW_array___Array___init(); /*new Array[String]*/
  variable3 = variable4;
  variable4 = ((array___AbstractArray___iterator_t)CALL( variable1 /*sup*/,COLOR_abstract_collection___Collection___iterator))( variable1 /*sup*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable5 = ((array___ArrayIterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable5)) break; /*for*/
    variable5 = ((array___ArrayIterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*ArrayIterator::item*/;
    variable6 = TAG_Bool(( variable5 /*s*/==NIT_NULL) || VAL_ISA( variable5 /*s*/, COLOR_MMConcreteClass, ID_MMConcreteClass)) /*cast MMConcreteClass*/;
    if (UNTAG_Bool(variable6)) { /*if*/
      ((array___AbstractArray___add_t)CALL( variable2 /*csup*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*csup*/,  variable5 /*s*/) /*Array::add*/;
    } else { /*if*/
      variable6 = ((abstractmetamodel___MMLocalClass___che_t)CALL( variable5 /*s*/,COLOR_abstractmetamodel___MMLocalClass___che))( variable5 /*s*/) /*MMLocalClass::che*/;
      variable6 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable6,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable6) /*PartialOrderElement::direct_greaters*/;
      variable6 = ((array___AbstractArray___iterator_t)CALL(variable6,COLOR_abstract_collection___Collection___iterator))(variable6) /*Array::iterator*/;
      while (true) { /*for*/
        variable7 = ((array___ArrayIterator___is_ok_t)CALL(variable6,COLOR_abstract_collection___Iterator___is_ok))(variable6) /*ArrayIterator::is_ok*/;
        if (!UNTAG_Bool(variable7)) break; /*for*/
        variable7 = ((array___ArrayIterator___item_t)CALL(variable6,COLOR_abstract_collection___Iterator___item))(variable6) /*ArrayIterator::item*/;
        variable8 = ((array___AbstractArray___has_t)CALL( variable2 /*csup*/,COLOR_abstract_collection___Collection___has))( variable2 /*csup*/,  variable7 /*ss*/) /*Array::has*/;
        if (UNTAG_Bool(variable8)) { /*if*/
          goto continue_5;
        }
        ((array___AbstractArray___add_t)CALL( variable2 /*csup*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*csup*/,  variable7 /*ss*/) /*Array::add*/;
        continue_5: while(0);
        ((array___ArrayIterator___next_t)CALL(variable6,COLOR_abstract_collection___Iterator___next))(variable6) /*ArrayIterator::next*/;
      }
      break_5: while(0);
    }
    continue_4: while(0);
    ((array___ArrayIterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*ArrayIterator::next*/;
  }
  break_4: while(0);
  variable5 = ATTR_abstractmetamodel___MMContext____class_hierarchy( self) /*MMContext::_class_hierarchy*/;
  variable5 = ((partial_order___PartialOrder___add_t)CALL(variable5,COLOR_partial_order___PartialOrder___add))(variable5,  variable0 /*c*/,  variable2 /*csup*/) /*PartialOrder::add*/;
  variable4 = variable5;
  ATTR_abstractmetamodel___MMLocalClass____che( variable0 /*c*/) /*MMLocalClass::_che*/ =  variable4 /*che*/;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMDirectory___name(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMDirectory::name (src/metamodel//abstractmetamodel.nit:77,2--78:28)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMDirectory____name( self) /*MMDirectory::_name*/;
}
val_t abstractmetamodel___MMDirectory___path(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMDirectory::path (src/metamodel//abstractmetamodel.nit:80,2--81:28)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMDirectory____path( self) /*MMDirectory::_path*/;
}
val_t abstractmetamodel___MMDirectory___parent(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMDirectory::parent (src/metamodel//abstractmetamodel.nit:83,2--85:35)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMDirectory____parent( self) /*MMDirectory::_parent*/;
}
val_t abstractmetamodel___MMDirectory___owner(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMDirectory::owner (src/metamodel//abstractmetamodel.nit:87,2--88:40)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMDirectory____owner( self) /*MMDirectory::_owner*/;
}
void abstractmetamodel___MMDirectory___owner__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMDirectory::owner= (src/metamodel//abstractmetamodel.nit:87,2--88:40)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstractmetamodel___MMDirectory____owner( self) /*MMDirectory::_owner*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMDirectory___modules(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMDirectory::modules (src/metamodel//abstractmetamodel.nit:90,2--91:77)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMDirectory____modules( self) /*MMDirectory::_modules*/;
}
void abstractmetamodel___MMDirectory___add_module(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMDirectory::add_module (src/metamodel//abstractmetamodel.nit:93,2--97:32)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstractmetamodel___MMDirectory____modules( self) /*MMDirectory::_modules*/;
  variable2 = ((abstractmetamodel___MMModule___name_t)CALL( variable0 /*module*/,COLOR_abstractmetamodel___MMModule___name))( variable0 /*module*/) /*MMModule::name*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1, variable2) /*Map::has_key*/;
  if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:96,3--41\n"); nit_exit(1);}
  variable1 = ATTR_abstractmetamodel___MMDirectory____modules( self) /*MMDirectory::_modules*/;
  variable2 = ((abstractmetamodel___MMModule___name_t)CALL( variable0 /*module*/,COLOR_abstractmetamodel___MMModule___name))( variable0 /*module*/) /*MMModule::name*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable1,COLOR_abstract_collection___Map_____braeq))(variable1, variable2,  variable0 /*module*/) /*Map::[]=*/;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMDirectory___dhe(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMDirectory::dhe (src/metamodel//abstractmetamodel.nit:100,2--101:52)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMDirectory____dhe( self) /*MMDirectory::_dhe*/;
}
void abstractmetamodel___MMDirectory___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMDirectory::init (src/metamodel//abstractmetamodel.nit:103,2--106:18)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMDirectory].i]) return;
  ATTR_abstractmetamodel___MMDirectory____name( self) /*MMDirectory::_name*/ =  variable0 /*name*/;
  ATTR_abstractmetamodel___MMDirectory____path( self) /*MMDirectory::_path*/ =  variable1 /*path*/;
  ATTR_abstractmetamodel___MMDirectory____parent( self) /*MMDirectory::_parent*/ =  variable2 /*parent*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMDirectory].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMDirectory___full_name_for(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMDirectory::full_name_for (src/metamodel//abstractmetamodel.nit:109,2--111:41)"};
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
  variable1 = NEW_string___String___init(); /*new String*/
  variable2 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable3 = variable2;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
  variable4 = ((abstractmetamodel___MMDirectory___name_t)CALL( self,COLOR_abstractmetamodel___MMDirectory___name))( self) /*MMDirectory::name*/;
  variable5 = variable4;
  variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
  variable6 = NEW_string___String___with_native(BOX_NativeString("/"), TAG_Int(1)); /*new String*/
  variable7 = variable6;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
  variable8 =  variable0 /*module_name*/;
  variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable8) /*String::append*/;
  variable9 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
  variable10 = variable9;
  ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable10) /*String::append*/;
  variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
  goto return_label8;
  return_label8: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstractmetamodel___MMModule___context(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::context (src/metamodel//abstractmetamodel.nit:117,2--118:34)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMModule____context( self) /*MMModule::_context*/;
}
val_t abstractmetamodel___MMModule___name(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::name (src/metamodel//abstractmetamodel.nit:120,2--121:28)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMModule____name( self) /*MMModule::_name*/;
}
val_t abstractmetamodel___MMModule___full_name(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::full_name (src/metamodel//abstractmetamodel.nit:123,2--124:33)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMModule____full_name( self) /*MMModule::_full_name*/;
}
val_t abstractmetamodel___MMModule___directory(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::directory (src/metamodel//abstractmetamodel.nit:126,2--127:38)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMModule____directory( self) /*MMModule::_directory*/;
}
val_t abstractmetamodel___MMModule___mhe(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::mhe (src/metamodel//abstractmetamodel.nit:129,2--130:49)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMModule____mhe( self) /*MMModule::_mhe*/;
}
val_t abstractmetamodel___MMModule___global_classes(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::global_classes (src/metamodel//abstractmetamodel.nit:132,2--133:78)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMModule____global_classes( self) /*MMModule::_global_classes*/;
}
val_t abstractmetamodel___MMModule___local_classes(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::local_classes (src/metamodel//abstractmetamodel.nit:135,2--136:75)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMModule____local_classes( self) /*MMModule::_local_classes*/;
}
val_t abstractmetamodel___MMModule___class_specialization_hierarchy(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::class_specialization_hierarchy (src/metamodel//abstractmetamodel.nit:138,2--139:106)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMModule____class_specialization_hierarchy( self) /*MMModule::_class_specialization_hierarchy*/;
}
val_t abstractmetamodel___MMModule___explicit_imported_modules(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::explicit_imported_modules (src/metamodel//abstractmetamodel.nit:150,2--151:79)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMModule____explicit_imported_modules( self) /*MMModule::_explicit_imported_modules*/;
}
void abstractmetamodel___MMModule___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::init (src/metamodel//abstractmetamodel.nit:159,2--168:38)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMModule].i]) return;
  ATTR_abstractmetamodel___MMModule____name( self) /*MMModule::_name*/ =  variable0 /*name*/;
  ATTR_abstractmetamodel___MMModule____directory( self) /*MMModule::_directory*/ =  variable1 /*dir*/;
  ATTR_abstractmetamodel___MMModule____context( self) /*MMModule::_context*/ =  variable2 /*context*/;
  variable3 = TAG_Bool(( variable1 /*dir*/ ==  NIT_NULL /*null*/) || (( variable1 /*dir*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*dir*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*dir*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*dir*/,COLOR_kernel___Object_____eqeq))( variable1 /*dir*/,  NIT_NULL /*null*/) /*MMDirectory::==*/)))));
  if (UNTAG_Bool(variable3)) { /*if*/
    ATTR_abstractmetamodel___MMModule____full_name( self) /*MMModule::_full_name*/ =  variable0 /*name*/;
  } else { /*if*/
    variable3 = ((abstractmetamodel___MMDirectory___full_name_for_t)CALL( variable1 /*dir*/,COLOR_abstractmetamodel___MMDirectory___full_name_for))( variable1 /*dir*/,  variable0 /*name*/) /*MMDirectory::full_name_for*/;
    ATTR_abstractmetamodel___MMModule____full_name( self) /*MMModule::_full_name*/ = variable3;
  }
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMModule].i] = 1;
  tracehead = trace.prev;
  return;
}
void abstractmetamodel___MMModule___add_super_module(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::add_super_module (src/metamodel//abstractmetamodel.nit:172,2--191:45)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ATTR_abstractmetamodel___MMModule____explicit_imported_modules( self) /*MMModule::_explicit_imported_modules*/;
  ((abstract_collection___SimpleCollection___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2,  variable0 /*m*/) /*Set::add*/;
  variable2 = TAG_Bool(( variable1 /*visibility_level*/)==( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ATTR_abstractmetamodel___MMModule____intrude_modules( self) /*MMModule::_intrude_modules*/;
    ((abstract_collection___SimpleCollection___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2,  variable0 /*m*/) /*Set::add*/;
    variable2 = ATTR_abstractmetamodel___MMModule____intrude_modules( self) /*MMModule::_intrude_modules*/;
    variable3 = ATTR_abstractmetamodel___MMModule____intrude_modules( variable0 /*m*/) /*MMModule::_intrude_modules*/;
    ((abstract_collection___SimpleCollection___add_all_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add_all))(variable2, variable3) /*Set::add_all*/;
    variable2 = ATTR_abstractmetamodel___MMModule____public_modules( self) /*MMModule::_public_modules*/;
    variable3 = ATTR_abstractmetamodel___MMModule____public_modules( variable0 /*m*/) /*MMModule::_public_modules*/;
    ((abstract_collection___SimpleCollection___add_all_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add_all))(variable2, variable3) /*Set::add_all*/;
    variable2 = ATTR_abstractmetamodel___MMModule____private_modules( self) /*MMModule::_private_modules*/;
    variable3 = ATTR_abstractmetamodel___MMModule____private_modules( variable0 /*m*/) /*MMModule::_private_modules*/;
    ((abstract_collection___SimpleCollection___add_all_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add_all))(variable2, variable3) /*Set::add_all*/;
  } else { /*if*/
    variable2 = TAG_Bool(( variable1 /*visibility_level*/)==( TAG_Int(1)));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = ATTR_abstractmetamodel___MMModule____public_modules( self) /*MMModule::_public_modules*/;
      ((abstract_collection___SimpleCollection___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2,  variable0 /*m*/) /*Set::add*/;
      variable2 = ATTR_abstractmetamodel___MMModule____public_modules( self) /*MMModule::_public_modules*/;
      variable3 = ATTR_abstractmetamodel___MMModule____intrude_modules( variable0 /*m*/) /*MMModule::_intrude_modules*/;
      ((abstract_collection___SimpleCollection___add_all_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add_all))(variable2, variable3) /*Set::add_all*/;
      variable2 = ATTR_abstractmetamodel___MMModule____public_modules( self) /*MMModule::_public_modules*/;
      variable3 = ATTR_abstractmetamodel___MMModule____public_modules( variable0 /*m*/) /*MMModule::_public_modules*/;
      ((abstract_collection___SimpleCollection___add_all_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add_all))(variable2, variable3) /*Set::add_all*/;
    } else { /*if*/
      variable2 = ATTR_abstractmetamodel___MMModule____private_modules( self) /*MMModule::_private_modules*/;
      ((abstract_collection___SimpleCollection___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2,  variable0 /*m*/) /*Set::add*/;
      variable2 = ATTR_abstractmetamodel___MMModule____private_modules( self) /*MMModule::_private_modules*/;
      variable3 = ATTR_abstractmetamodel___MMModule____intrude_modules( variable0 /*m*/) /*MMModule::_intrude_modules*/;
      ((abstract_collection___SimpleCollection___add_all_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add_all))(variable2, variable3) /*Set::add_all*/;
      variable2 = ATTR_abstractmetamodel___MMModule____private_modules( self) /*MMModule::_private_modules*/;
      variable3 = ATTR_abstractmetamodel___MMModule____public_modules( variable0 /*m*/) /*MMModule::_public_modules*/;
      ((abstract_collection___SimpleCollection___add_all_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add_all))(variable2, variable3) /*Set::add_all*/;
    }
  }
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMModule___visibility_for(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::visibility_for (src/metamodel//abstractmetamodel.nit:196,2--210:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(( variable0 /*m*/ ==  self) || (( variable0 /*m*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*m*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*m*/, self)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*m*/,COLOR_kernel___Object_____eqeq))( variable0 /*m*/,  self) /*MMModule::==*/)))));
  variable2 = variable1;
  if (!UNTAG_Bool(variable2)) { /* or */
    variable2 = ATTR_abstractmetamodel___MMModule____intrude_modules( self) /*MMModule::_intrude_modules*/;
    variable2 = ((abstract_collection___Collection___has_t)CALL(variable2,COLOR_abstract_collection___Collection___has))(variable2,  variable0 /*m*/) /*Set::has*/;
  }
  variable1 = variable2;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  TAG_Int(3);
    goto return_label11;
  } else { /*if*/
    variable1 = ATTR_abstractmetamodel___MMModule____public_modules( self) /*MMModule::_public_modules*/;
    variable1 = ((abstract_collection___Collection___has_t)CALL(variable1,COLOR_abstract_collection___Collection___has))(variable1,  variable0 /*m*/) /*Set::has*/;
    if (UNTAG_Bool(variable1)) { /*if*/
      variable1 =  TAG_Int(2);
      goto return_label11;
    } else { /*if*/
      variable1 = ATTR_abstractmetamodel___MMModule____private_modules( self) /*MMModule::_private_modules*/;
      variable1 = ((abstract_collection___Collection___has_t)CALL(variable1,COLOR_abstract_collection___Collection___has))(variable1,  variable0 /*m*/) /*Set::has*/;
      if (UNTAG_Bool(variable1)) { /*if*/
        variable1 =  TAG_Int(1);
        goto return_label11;
      } else { /*if*/
        variable1 =  TAG_Int(0);
        goto return_label11;
      }
    }
  }
  return_label11: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstractmetamodel___MMModule_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::[] (src/metamodel//abstractmetamodel.nit:215,2--223:14)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstractmetamodel___MMModule____local_class_by_global( self) /*MMModule::_local_class_by_global*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*Map::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:218,3--39\n"); nit_exit(1);}
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*c*/ ==  NIT_NULL /*null*/) || (( variable0 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*c*/,COLOR_kernel___Object_____eqeq))( variable0 /*c*/,  NIT_NULL /*null*/) /*MMGlobalClass::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:219,3--18\n"); nit_exit(1);}
  variable1 = ATTR_abstractmetamodel___MMModule____local_class_by_global( self) /*MMModule::_local_class_by_global*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*c*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_abstractmetamodel___MMModule____local_class_by_global( self) /*MMModule::_local_class_by_global*/;
    variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*c*/) /*Map::[]*/;
    goto return_label12;
  } else { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label12;
  }
  return_label12: while(false);
  tracehead = trace.prev;
  return variable1;
}
void abstractmetamodel___MMModule___add_local_class(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::add_local_class (src/metamodel//abstractmetamodel.nit:227,2--231:22)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ATTR_abstractmetamodel___MMLocalClass____module( variable0 /*c*/) /*MMLocalClass::_module*/ =  self;
  variable1 = ATTR_abstractmetamodel___MMModule____local_classes( self) /*MMModule::_local_classes*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1,  variable0 /*c*/) /*Array::add*/;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMModule___class_by_name(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::class_by_name (src/metamodel//abstractmetamodel.nit:234,2--237:37)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstractmetamodel___MMModule____global_class_by_name( self) /*MMModule::_global_class_by_name*/;
  variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*n*/) /*Map::[]*/;
  variable1 = ((abstractmetamodel___MMModule_____bra_t)CALL( self,COLOR_abstractmetamodel___MMModule_____bra))( self, variable1) /*MMModule::[]*/;
  goto return_label14;
  return_label14: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstractmetamodel___MMModule___has_global_class_named(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::has_global_class_named (src/metamodel//abstractmetamodel.nit:240,2--243:40)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstractmetamodel___MMModule____global_class_by_name( self) /*MMModule::_global_class_by_name*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*n*/) /*Map::has_key*/;
  goto return_label15;
  return_label15: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstractmetamodel___MMModule___global_class_named(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::global_class_named (src/metamodel//abstractmetamodel.nit:246,2--253:14)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstractmetamodel___MMModule____global_class_by_name( self) /*MMModule::_global_class_by_name*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*n*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_abstractmetamodel___MMModule____global_class_by_name( self) /*MMModule::_global_class_by_name*/;
    variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*n*/) /*Map::[]*/;
    goto return_label16;
  } else { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label16;
  }
  return_label16: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstractmetamodel___MMModule___to_s(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::to_s (src/metamodel//abstractmetamodel.nit:257,2--36)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMModule___name_t)CALL( self,COLOR_abstractmetamodel___MMModule___name))( self) /*MMModule::name*/;
  variable0 = ((symbol___Symbol___to_s_t)CALL(variable0,COLOR_string___Object___to_s))(variable0) /*Symbol::to_s*/;
  goto return_label17;
  return_label17: while(false);
  tracehead = trace.prev;
  return variable0;
}
void abstractmetamodel___MMModule___set_supers_class(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::set_supers_class (src/metamodel//abstractmetamodel.nit:259,2--267:35)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*supers*/ ==  NIT_NULL /*null*/) || (( variable1 /*supers*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable1 /*supers*/,COLOR_kernel___Object_____eqeq))( variable1 /*supers*/,  NIT_NULL /*null*/) /*Array::==*/)))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:262,3--23\n"); nit_exit(1);}
  variable3 = ATTR_abstractmetamodel___MMModule____class_specialization_hierarchy( self) /*MMModule::_class_specialization_hierarchy*/;
  variable3 = ((partial_order___PartialOrder___select_smallests_t)CALL(variable3,COLOR_partial_order___PartialOrder___select_smallests))(variable3,  variable1 /*supers*/) /*PartialOrder::select_smallests*/;
  variable2 = variable3;
  variable3 = ATTR_abstractmetamodel___MMModule____class_specialization_hierarchy( self) /*MMModule::_class_specialization_hierarchy*/;
  variable3 = ((partial_order___PartialOrder___add_t)CALL(variable3,COLOR_partial_order___PartialOrder___add))(variable3,  variable0 /*c*/,  variable2 /*tab*/) /*PartialOrder::add*/;
  ATTR_abstractmetamodel___MMLocalClass____cshe( variable0 /*c*/) /*MMLocalClass::_cshe*/ = variable3;
  variable4 = ((abstractmetamodel___MMLocalClass___crhe_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___crhe))( variable0 /*c*/) /*MMLocalClass::crhe*/;
  variable4 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable4,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable4) /*PartialOrderElement::direct_greaters*/;
  variable4 = ((array___Collection___to_a_t)CALL(variable4,COLOR_array___Collection___to_a))(variable4) /*Array::to_a*/;
  variable3 = variable4;
  ((abstract_collection___SimpleCollection___add_all_t)CALL( variable3 /*tab_all*/,COLOR_abstract_collection___SimpleCollection___add_all))( variable3 /*tab_all*/,  variable2 /*tab*/) /*Array::add_all*/;
  variable4 = ((abstractmetamodel___MMModule___context_t)CALL( self,COLOR_abstractmetamodel___MMModule___context))( self) /*MMModule::context*/;
  ((abstractmetamodel___MMContext___add_local_class_t)CALL(variable4,COLOR_abstractmetamodel___MMContext___add_local_class))(variable4,  variable0 /*c*/,  variable3 /*tab_all*/) /*MMContext::add_local_class*/;
  tracehead = trace.prev;
  return;
}
void abstractmetamodel___MMModule___register_global_class(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMModule::register_global_class (src/metamodel//abstractmetamodel.nit:270,2--274:38)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable0 /*c*/) /*MMLocalClass::global*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMGlobalClass::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:273,3--25\n"); nit_exit(1);}
  variable1 = ATTR_abstractmetamodel___MMModule____local_class_by_global( self) /*MMModule::_local_class_by_global*/;
  variable2 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable0 /*c*/) /*MMLocalClass::global*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable1,COLOR_abstract_collection___Map_____braeq))(variable1, variable2,  variable0 /*c*/) /*Map::[]=*/;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMGlobalClass___intro(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::intro (src/metamodel//abstractmetamodel.nit:279,2--280:35)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMGlobalClass____intro( self) /*MMGlobalClass::_intro*/;
}
val_t abstractmetamodel___MMGlobalClass___class_refinement_hierarchy(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::class_refinement_hierarchy (src/metamodel//abstractmetamodel.nit:282,2--284:102)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMGlobalClass____class_refinement_hierarchy( self) /*MMGlobalClass::_class_refinement_hierarchy*/;
}
void abstractmetamodel___MMGlobalClass___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::init (src/metamodel//abstractmetamodel.nit:286,2--290:33)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMGlobalClass].i]) return;
  ATTR_abstractmetamodel___MMGlobalClass____intro( self) /*MMGlobalClass::_intro*/ =  variable0 /*c*/;
  variable1 = ((abstractmetamodel___MMLocalClass___context_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___context))( variable0 /*c*/) /*MMLocalClass::context*/;
  ((abstractmetamodel___MMContext___add_global_class_t)CALL(variable1,COLOR_abstractmetamodel___MMContext___add_global_class))(variable1,  self) /*MMContext::add_global_class*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMGlobalClass].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMGlobalClass___name(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::name (src/metamodel//abstractmetamodel.nit:293,2--296:19)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL( self,COLOR_abstractmetamodel___MMGlobalClass___intro))( self) /*MMGlobalClass::intro*/;
  variable0 = ((abstractmetamodel___MMLocalClass___name_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalClass___name))(variable0) /*MMLocalClass::name*/;
  goto return_label21;
  return_label21: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstractmetamodel___MMGlobalClass___module(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::module (src/metamodel//abstractmetamodel.nit:299,2--302:21)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL( self,COLOR_abstractmetamodel___MMGlobalClass___intro))( self) /*MMGlobalClass::intro*/;
  variable0 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalClass___module))(variable0) /*MMLocalClass::module*/;
  goto return_label22;
  return_label22: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstractmetamodel___MMGlobalClass___to_s(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::to_s (src/metamodel//abstractmetamodel.nit:305,2--307:19)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL( self,COLOR_abstractmetamodel___MMGlobalClass___intro))( self) /*MMGlobalClass::intro*/;
  variable0 = ((abstractmetamodel___MMLocalClass___to_s_t)CALL(variable0,COLOR_string___Object___to_s))(variable0) /*MMLocalClass::to_s*/;
  goto return_label23;
  return_label23: while(false);
  tracehead = trace.prev;
  return variable0;
}
void abstractmetamodel___MMGlobalClass___register_local_class(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::register_local_class (src/metamodel//abstractmetamodel.nit:310,2--321:50)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstractmetamodel___MMLocalClass___module_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___module))( variable0 /*c*/) /*MMLocalClass::module*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMModule::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:313,3--25\n"); nit_exit(1);}
  variable1 = ((abstractmetamodel___MMLocalClass___crhe_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___crhe))( variable0 /*c*/) /*MMLocalClass::crhe*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*PartialOrderElement::==*/)))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:314,3--23\n"); nit_exit(1);}
  variable2 = NEW_array___Array___init(); /*new Array[MMLocalClass]*/
  variable1 = variable2;
  variable2 = ((abstractmetamodel___MMGlobalClass___class_refinement_hierarchy_t)CALL( self,COLOR_abstractmetamodel___MMGlobalClass___class_refinement_hierarchy))( self) /*MMGlobalClass::class_refinement_hierarchy*/;
  variable2 = ((partial_order___PartialOrder___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*PartialOrder::iterator*/;
  while (true) { /*for*/
    variable3 = ((abstract_collection___Iterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((abstract_collection___Iterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*Iterator::item*/;
    variable4 = ((abstractmetamodel___MMLocalClass___module_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___module))( variable0 /*c*/) /*MMLocalClass::module*/;
    variable4 = ((abstractmetamodel___MMModule___mhe_t)CALL(variable4,COLOR_abstractmetamodel___MMModule___mhe))(variable4) /*MMModule::mhe*/;
    variable5 = ((abstractmetamodel___MMLocalClass___module_t)CALL( variable3 /*s*/,COLOR_abstractmetamodel___MMLocalClass___module))( variable3 /*s*/) /*MMLocalClass::module*/;
    variable4 = ((partial_order___PartialOrderElement_____l_t)CALL(variable4,COLOR_partial_order___PartialOrderElement_____l))(variable4, variable5) /*PartialOrderElement::<*/;
    variable5 = variable4;
    if (UNTAG_Bool(variable5)) { /* and */
      variable5 = TAG_Bool(( variable3 /*s*/==NIT_NULL) || VAL_ISA( variable3 /*s*/, COLOR_MMConcreteClass, ID_MMConcreteClass)) /*cast MMConcreteClass*/;
    }
    variable4 = variable5;
    if (UNTAG_Bool(variable4)) { /*if*/
      ((array___AbstractArray___add_t)CALL( variable1 /*sup*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*sup*/,  variable3 /*s*/) /*Array::add*/;
    }
    continue_25: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*Iterator::next*/;
  }
  break_25: while(0);
  variable2 = ATTR_abstractmetamodel___MMGlobalClass____class_refinement_hierarchy( self) /*MMGlobalClass::_class_refinement_hierarchy*/;
  variable2 = ((partial_order___PartialOrder___add_t)CALL(variable2,COLOR_partial_order___PartialOrder___add))(variable2,  variable0 /*c*/,  variable1 /*sup*/) /*PartialOrder::add*/;
  ATTR_abstractmetamodel___MMLocalClass____crhe( variable0 /*c*/) /*MMLocalClass::_crhe*/ = variable2;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMGlobalClass___is_interface(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::is_interface (src/metamodel//abstractmetamodel.nit:324,2--325:43)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMGlobalClass____is_interface( self) /*MMGlobalClass::_is_interface*/;
}
void abstractmetamodel___MMGlobalClass___is_interface__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::is_interface= (src/metamodel//abstractmetamodel.nit:324,2--325:43)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstractmetamodel___MMGlobalClass____is_interface( self) /*MMGlobalClass::_is_interface*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMGlobalClass___is_abstract(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::is_abstract (src/metamodel//abstractmetamodel.nit:327,2--328:42)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMGlobalClass____is_abstract( self) /*MMGlobalClass::_is_abstract*/;
}
void abstractmetamodel___MMGlobalClass___is_abstract__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::is_abstract= (src/metamodel//abstractmetamodel.nit:327,2--328:42)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstractmetamodel___MMGlobalClass____is_abstract( self) /*MMGlobalClass::_is_abstract*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMGlobalClass___is_universal(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::is_universal (src/metamodel//abstractmetamodel.nit:330,2--331:43)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMGlobalClass____is_universal( self) /*MMGlobalClass::_is_universal*/;
}
void abstractmetamodel___MMGlobalClass___is_universal__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::is_universal= (src/metamodel//abstractmetamodel.nit:330,2--331:43)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstractmetamodel___MMGlobalClass____is_universal( self) /*MMGlobalClass::_is_universal*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMGlobalClass___visibility_level(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::visibility_level (src/metamodel//abstractmetamodel.nit:333,2--336:46)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMGlobalClass____visibility_level( self) /*MMGlobalClass::_visibility_level*/;
}
void abstractmetamodel___MMGlobalClass___visibility_level__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalClass::visibility_level= (src/metamodel//abstractmetamodel.nit:333,2--336:46)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstractmetamodel___MMGlobalClass____visibility_level( self) /*MMGlobalClass::_visibility_level*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMLocalClass___name(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::name (src/metamodel//abstractmetamodel.nit:341,2--342:35)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalClass____name( self) /*MMLocalClass::_name*/;
}
val_t abstractmetamodel___MMLocalClass___arity(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::arity (src/metamodel//abstractmetamodel.nit:344,2--346:27)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalClass____arity( self) /*MMLocalClass::_arity*/;
}
val_t abstractmetamodel___MMLocalClass___module(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::module (src/metamodel//abstractmetamodel.nit:348,2--349:32)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalClass____module( self) /*MMLocalClass::_module*/;
}
val_t abstractmetamodel___MMLocalClass___abstract(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::abstract (src/metamodel//abstractmetamodel.nit:351,2--352:39)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalClass____abstract( self) /*MMLocalClass::_abstract*/;
}
void abstractmetamodel___MMLocalClass___abstract__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::abstract= (src/metamodel//abstractmetamodel.nit:351,2--352:39)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstractmetamodel___MMLocalClass____abstract( self) /*MMLocalClass::_abstract*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMLocalClass___global(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::global (src/metamodel//abstractmetamodel.nit:354,2--355:37)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalClass____global( self) /*MMLocalClass::_global*/;
}
val_t abstractmetamodel___MMLocalClass___crhe(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::crhe (src/metamodel//abstractmetamodel.nit:357,2--358:54)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalClass____crhe( self) /*MMLocalClass::_crhe*/;
}
val_t abstractmetamodel___MMLocalClass___cshe(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::cshe (src/metamodel//abstractmetamodel.nit:360,2--361:54)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalClass____cshe( self) /*MMLocalClass::_cshe*/;
}
val_t abstractmetamodel___MMLocalClass___che(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::che (src/metamodel//abstractmetamodel.nit:363,2--364:53)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalClass____che( self) /*MMLocalClass::_che*/;
}
val_t abstractmetamodel___MMLocalClass___local_property_by_global(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::local_property_by_global (src/metamodel//abstractmetamodel.nit:366,2--367:79)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalClass____local_property_by_global( self) /*MMLocalClass::_local_property_by_global*/;
}
val_t abstractmetamodel___MMLocalClass___global_properties(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::global_properties (src/metamodel//abstractmetamodel.nit:369,2--370:55)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalClass____global_properties( self) /*MMLocalClass::_global_properties*/;
}
val_t abstractmetamodel___MMLocalClass___properties_by_name(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::properties_by_name (src/metamodel//abstractmetamodel.nit:372,2--373:70)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalClass____properties_by_name( self) /*MMLocalClass::_properties_by_name*/;
}
void abstractmetamodel___MMLocalClass___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::init (src/metamodel//abstractmetamodel.nit:375,2--379:16)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMLocalClass].i]) return;
  ATTR_abstractmetamodel___MMLocalClass____name( self) /*MMLocalClass::_name*/ =  variable0 /*name*/;
  ATTR_abstractmetamodel___MMLocalClass____arity( self) /*MMLocalClass::_arity*/ =  variable1 /*arity*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMLocalClass].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMLocalClass___for_module(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::for_module (src/metamodel//abstractmetamodel.nit:382,2--385:17)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstractmetamodel___MMLocalClass___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___global))( self) /*MMLocalClass::global*/;
  variable1 = ((abstractmetamodel___MMModule_____bra_t)CALL( variable0 /*m*/,COLOR_abstractmetamodel___MMModule_____bra))( variable0 /*m*/, variable1) /*MMModule::[]*/;
  goto return_label27;
  return_label27: while(false);
  tracehead = trace.prev;
  return variable1;
}
void abstractmetamodel___MMLocalClass___new_global(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::new_global (src/metamodel//abstractmetamodel.nit:388,2--394:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_abstractmetamodel___MMGlobalClass___init( self); /*new MMGlobalClass*/
  variable0 = variable1;
  variable1 = ATTR_abstractmetamodel___MMLocalClass____module( self) /*MMLocalClass::_module*/;
  variable1 = ATTR_abstractmetamodel___MMModule____global_classes(variable1) /*MMModule::_global_classes*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1,  variable0 /*g*/) /*Array::add*/;
  variable1 = ATTR_abstractmetamodel___MMLocalClass____module( self) /*MMLocalClass::_module*/;
  variable1 = ATTR_abstractmetamodel___MMModule____global_class_by_name(variable1) /*MMModule::_global_class_by_name*/;
  variable2 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable1,COLOR_abstract_collection___Map_____braeq))(variable1, variable2,  variable0 /*g*/) /*Map::[]=*/;
  ((abstractmetamodel___MMLocalClass___set_global_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___set_global))( self,  variable0 /*g*/) /*MMLocalClass::set_global*/;
  tracehead = trace.prev;
  return;
}
void abstractmetamodel___MMLocalClass___set_global(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::set_global (src/metamodel//abstractmetamodel.nit:397,2--405:36)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*g*/ ==  NIT_NULL /*null*/) || (( variable0 /*g*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*g*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*g*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*g*/,COLOR_kernel___Object_____eqeq))( variable0 /*g*/,  NIT_NULL /*null*/) /*MMGlobalClass::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:402,3--18\n"); nit_exit(1);}
  ATTR_abstractmetamodel___MMLocalClass____global( self) /*MMLocalClass::_global*/ =  variable0 /*g*/;
  variable1 = ATTR_abstractmetamodel___MMLocalClass____global( self) /*MMLocalClass::_global*/;
  ((abstractmetamodel___MMGlobalClass___register_local_class_t)CALL(variable1,COLOR_abstractmetamodel___MMGlobalClass___register_local_class))(variable1,  self) /*MMGlobalClass::register_local_class*/;
  variable1 = ATTR_abstractmetamodel___MMLocalClass____module( self) /*MMLocalClass::_module*/;
  ((abstractmetamodel___MMModule___register_global_class_t)CALL(variable1,COLOR_abstractmetamodel___MMModule___register_global_class))(variable1,  self) /*MMModule::register_global_class*/;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMLocalClass___has_global_property_by_name(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::has_global_property_by_name (src/metamodel//abstractmetamodel.nit:408,2--413:22)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_abstractmetamodel___MMLocalClass____properties_by_name( self) /*MMLocalClass::_properties_by_name*/;
  variable2 = ((abstract_collection___Map_____bra_t)CALL(variable2,COLOR_abstract_collection___Map_____bra))(variable2,  variable0 /*n*/) /*Map::[]*/;
  variable1 = variable2;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*props*/ ==  NIT_NULL /*null*/) || (( variable1 /*props*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable1 /*props*/,COLOR_kernel___Object_____eqeq))( variable1 /*props*/,  NIT_NULL /*null*/) /*Array::==*/)))));
  variable1 = variable2;
  goto return_label30;
  return_label30: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstractmetamodel___MMLocalClass___get_property_by_name(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::get_property_by_name (src/metamodel//abstractmetamodel.nit:416,2--424:20)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_abstractmetamodel___MMLocalClass____properties_by_name( self) /*MMLocalClass::_properties_by_name*/;
  variable2 = ((abstract_collection___Map_____bra_t)CALL(variable2,COLOR_abstract_collection___Map_____bra))(variable2,  variable0 /*n*/) /*Map::[]*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*props*/ ==  NIT_NULL /*null*/) || (( variable1 /*props*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable1 /*props*/,COLOR_kernel___Object_____eqeq))( variable1 /*props*/,  NIT_NULL /*null*/) /*Array::==*/)));
  variable3 = variable2;
  if (!UNTAG_Bool(variable3)) { /* or */
    variable3 = ((array___AbstractArray___length_t)CALL( variable1 /*props*/,COLOR_abstract_collection___Collection___length))( variable1 /*props*/) /*Array::length*/;
    variable3 = TAG_Bool(UNTAG_Int(variable3)>UNTAG_Int( TAG_Int(1)));
  }
  variable2 = variable3;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label31;
  }
  variable2 = ((abstract_collection___IndexedCollection___first_t)CALL( variable1 /*props*/,COLOR_abstract_collection___Collection___first))( variable1 /*props*/) /*Array::first*/;
  variable1 = variable2;
  goto return_label31;
  return_label31: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstractmetamodel___MMLocalClass___attribute(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::attribute (src/metamodel//abstractmetamodel.nit:427,2--431:31)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstractmetamodel___MMLocalClass___get_property_by_name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___get_property_by_name))( self,  variable0 /*a*/) /*MMLocalClass::get_property_by_name*/;
  goto return_label32;
  return_label32: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstractmetamodel___MMLocalClass___method(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::method (src/metamodel//abstractmetamodel.nit:434,2--444:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstractmetamodel___MMLocalClass____properties_by_name( self) /*MMLocalClass::_properties_by_name*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*Map::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:438,3--36\n"); nit_exit(1);}
  variable2 = ATTR_abstractmetamodel___MMLocalClass____properties_by_name( self) /*MMLocalClass::_properties_by_name*/;
  variable2 = ((abstract_collection___Map_____bra_t)CALL(variable2,COLOR_abstract_collection___Map_____bra))(variable2,  variable0 /*na*/) /*Map::[]*/;
  variable1 = variable2;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*props*/ ==  NIT_NULL /*null*/) || (( variable1 /*props*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable1 /*props*/,COLOR_kernel___Object_____eqeq))( variable1 /*props*/,  NIT_NULL /*null*/) /*Array::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((abstract_collection___IndexedCollection___first_t)CALL( variable1 /*props*/,COLOR_abstract_collection___Collection___first))( variable1 /*props*/) /*Array::first*/;
    variable1 = variable2;
    goto return_label33;
  }
  variable1 =  NIT_NULL /*null*/;
  goto return_label33;
  return_label33: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstractmetamodel___MMLocalClass___super_methods_named(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::super_methods_named (src/metamodel//abstractmetamodel.nit:447,2--464:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_array___Array___init(); /*new Array[MMLocalClass]*/
  variable1 = variable2;
  variable2 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___cshe))( self) /*MMLocalClass::cshe*/;
  variable2 = ((partial_order___PartialOrderElement___greaters_t)CALL(variable2,COLOR_partial_order___PartialOrderElement___greaters))(variable2) /*PartialOrderElement::greaters*/;
  variable2 = ((abstract_collection___Collection___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Set::iterator*/;
  while (true) { /*for*/
    variable3 = ((abstract_collection___Iterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((abstract_collection___Iterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*Iterator::item*/;
    variable5 = ((abstractmetamodel___MMLocalClass___method_t)CALL( variable3 /*c*/,COLOR_abstractmetamodel___MMLocalClass___method))( variable3 /*c*/,  variable0 /*n*/) /*MMLocalClass::method*/;
    variable4 = variable5;
    variable5 = TAG_Bool(( variable4 /*g*/ ==  NIT_NULL /*null*/) || (( variable4 /*g*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*g*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*g*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*g*/,COLOR_kernel___Object_____eqeq))( variable4 /*g*/,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))));
    if (UNTAG_Bool(variable5)) { /*if*/
      goto continue_35;
    }
    ((array___AbstractArray___add_t)CALL( variable1 /*classes*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*classes*/,  variable3 /*c*/) /*Array::add*/;
    continue_35: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*Iterator::next*/;
  }
  break_35: while(0);
  variable2 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___cshe))( self) /*MMLocalClass::cshe*/;
  variable2 = ((partial_order___PartialOrderElement___order_t)CALL(variable2,COLOR_partial_order___PartialOrderElement___order))(variable2) /*PartialOrderElement::order*/;
  variable2 = ((partial_order___PartialOrder___select_smallests_t)CALL(variable2,COLOR_partial_order___PartialOrder___select_smallests))(variable2,  variable1 /*classes*/) /*PartialOrder::select_smallests*/;
  variable1 = variable2 /*classes=*/;
  variable3 = NEW_array___Array___init(); /*new Array[MMLocalProperty]*/
  variable2 = variable3;
  variable3 = ((array___AbstractArray___iterator_t)CALL( variable1 /*classes*/,COLOR_abstract_collection___Collection___iterator))( variable1 /*classes*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
    variable6 = ((abstractmetamodel___MMLocalClass___method_t)CALL( variable4 /*c*/,COLOR_abstractmetamodel___MMLocalClass___method))( variable4 /*c*/,  variable0 /*n*/) /*MMLocalClass::method*/;
    variable5 = variable6;
    variable6 = ((abstractmetamodel___MMLocalClass_____bra_t)CALL( variable4 /*c*/,COLOR_abstractmetamodel___MMLocalClass_____bra))( variable4 /*c*/,  variable5 /*g*/) /*MMLocalClass::[]*/;
    ((array___AbstractArray___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/, variable6) /*Array::add*/;
    continue_36: while(0);
    ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
  }
  break_36: while(0);
  variable1 =  variable2 /*res*/;
  goto return_label34;
  return_label34: while(false);
  tracehead = trace.prev;
  return variable1;
}
void abstractmetamodel___MMLocalClass___register_local_property(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::register_local_property (src/metamodel//abstractmetamodel.nit:467,2--473:42)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable0 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable0 /*p*/) /*MMLocalProperty::global*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:470,3--25\n"); nit_exit(1);}
  variable1 = ATTR_abstractmetamodel___MMLocalClass____local_property_by_global( self) /*MMLocalClass::_local_property_by_global*/;
  variable2 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable0 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable0 /*p*/) /*MMLocalProperty::global*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1, variable2) /*Map::has_key*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { /*if*/
    variable1 = ATTR_abstractmetamodel___MMLocalClass____local_property_by_global( self) /*MMLocalClass::_local_property_by_global*/;
    variable2 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable0 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable0 /*p*/) /*MMLocalProperty::global*/;
    ((abstract_collection___Map_____braeq_t)CALL(variable1,COLOR_abstract_collection___Map_____braeq))(variable1, variable2,  variable0 /*p*/) /*Map::[]=*/;
  }
  tracehead = trace.prev;
  return;
}
void abstractmetamodel___MMLocalClass___register_global_property(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::register_global_property (src/metamodel//abstractmetamodel.nit:477,2--489:30)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( variable0 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___intro))( variable0 /*glob*/) /*MMGlobalProperty::intro*/;
  variable1 = variable2;
  variable3 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___name))( variable1 /*prop*/) /*MMConcreteProperty::name*/;
  variable2 = variable3;
  variable4 = ATTR_abstractmetamodel___MMLocalClass____properties_by_name( self) /*MMLocalClass::_properties_by_name*/;
  variable4 = ((abstract_collection___Map_____bra_t)CALL(variable4,COLOR_abstract_collection___Map_____bra))(variable4,  variable2 /*name*/) /*Map::[]*/;
  variable3 = variable4;
  variable4 = TAG_Bool(( variable3 /*props*/ ==  NIT_NULL /*null*/) || (( variable3 /*props*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable3 /*props*/,COLOR_kernel___Object_____eqeq))( variable3 /*props*/,  NIT_NULL /*null*/) /*Array::==*/)));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ATTR_abstractmetamodel___MMLocalClass____properties_by_name( self) /*MMLocalClass::_properties_by_name*/;
    variable5 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[MMGlobalProperty]*/
    ((array___AbstractArray___add_t)CALL(variable5,COLOR_abstract_collection___SimpleCollection___add))(variable5,  variable0 /*glob*/) /*Array::add*/;
    ((abstract_collection___Map_____braeq_t)CALL(variable4,COLOR_abstract_collection___Map_____braeq))(variable4,  variable2 /*name*/, variable5) /*Map::[]=*/;
  } else { /*if*/
    variable4 = ATTR_abstractmetamodel___MMLocalClass____properties_by_name( self) /*MMLocalClass::_properties_by_name*/;
    variable4 = ((abstract_collection___Map_____bra_t)CALL(variable4,COLOR_abstract_collection___Map_____bra))(variable4,  variable2 /*name*/) /*Map::[]*/;
    ((array___AbstractArray___add_t)CALL(variable4,COLOR_abstract_collection___SimpleCollection___add))(variable4,  variable0 /*glob*/) /*Array::add*/;
  }
  variable4 = ATTR_abstractmetamodel___MMLocalClass____global_properties( self) /*MMLocalClass::_global_properties*/;
  ((abstract_collection___SimpleCollection___add_t)CALL(variable4,COLOR_abstract_collection___SimpleCollection___add))(variable4,  variable0 /*glob*/) /*Set::add*/;
  ((abstractmetamodel___MMLocalClass___register_local_property_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___register_local_property))( self,  variable1 /*prop*/) /*MMLocalClass::register_local_property*/;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMLocalClass_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::[] (src/metamodel//abstractmetamodel.nit:492,2--500:13)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstractmetamodel___MMLocalClass____local_property_by_global( self) /*MMLocalClass::_local_property_by_global*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*Map::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:495,3--42\n"); nit_exit(1);}
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*glob*/ ==  NIT_NULL /*null*/) || (( variable0 /*glob*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*glob*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*glob*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*glob*/,COLOR_kernel___Object_____eqeq))( variable0 /*glob*/,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:496,3--21\n"); nit_exit(1);}
  variable1 = ATTR_abstractmetamodel___MMLocalClass____local_property_by_global( self) /*MMLocalClass::_local_property_by_global*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*glob*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_abstractmetamodel___MMLocalClass____local_property_by_global( self) /*MMLocalClass::_local_property_by_global*/;
    variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*glob*/) /*Map::[]*/;
    goto return_label39;
  }
  variable1 =  NIT_NULL /*null*/;
  goto return_label39;
  return_label39: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t abstractmetamodel___MMLocalClass___context(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::context (src/metamodel//abstractmetamodel.nit:503,2--504:49)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMLocalClass___module_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___module))( self) /*MMLocalClass::module*/;
  variable0 = ((abstractmetamodel___MMModule___context_t)CALL(variable0,COLOR_abstractmetamodel___MMModule___context))(variable0) /*MMModule::context*/;
  goto return_label40;
  return_label40: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstractmetamodel___MMLocalClass___to_s(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalClass::to_s (src/metamodel//abstractmetamodel.nit:506,2--508:19)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_abstractmetamodel___MMLocalClass____name( self) /*MMLocalClass::_name*/;
  variable0 = ((symbol___Symbol___to_s_t)CALL(variable0,COLOR_string___Object___to_s))(variable0) /*Symbol::to_s*/;
  goto return_label41;
  return_label41: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstractmetamodel___MMGlobalProperty___intro(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::intro (src/metamodel//abstractmetamodel.nit:516,2--517:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMGlobalProperty____intro( self) /*MMGlobalProperty::_intro*/;
}
val_t abstractmetamodel___MMGlobalProperty___local_class(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::local_class (src/metamodel//abstractmetamodel.nit:519,2--522:27)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( self,COLOR_abstractmetamodel___MMGlobalProperty___intro))( self) /*MMGlobalProperty::intro*/;
  variable0 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalProperty___local_class))(variable0) /*MMConcreteProperty::local_class*/;
  goto return_label42;
  return_label42: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstractmetamodel___MMGlobalProperty___concrete_property_hierarchy(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::concrete_property_hierarchy (src/metamodel//abstractmetamodel.nit:525,2--526:115)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMGlobalProperty____concrete_property_hierarchy( self) /*MMGlobalProperty::_concrete_property_hierarchy*/;
}
void abstractmetamodel___MMGlobalProperty___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::init (src/metamodel//abstractmetamodel.nit:528,2--537:55)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMGlobalProperty].i]) return;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*p*/ ==  NIT_NULL /*null*/) || (( variable0 /*p*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*p*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*p*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*p*/,COLOR_kernel___Object_____eqeq))( variable0 /*p*/,  NIT_NULL /*null*/) /*MMConcreteProperty::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:531,3--18\n"); nit_exit(1);}
  variable1 = ((abstractmetamodel___MMLocalProperty___concrete_property_t)CALL( variable0 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___concrete_property))( variable0 /*p*/) /*MMConcreteProperty::concrete_property*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMConcreteProperty::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:532,3--36\n"); nit_exit(1);}
  variable1 = NEW_partial_order___PartialOrder___init(); /*new PartialOrder[MMConcreteProperty]*/
  ATTR_abstractmetamodel___MMGlobalProperty____concrete_property_hierarchy( self) /*MMGlobalProperty::_concrete_property_hierarchy*/ = variable1;
  ATTR_abstractmetamodel___MMGlobalProperty____intro( self) /*MMGlobalProperty::_intro*/ =  variable0 /*p*/;
  variable1 = NEW_array___Array___init(); /*new Array[MMConcreteProperty]*/
  ((abstractmetamodel___MMGlobalProperty___add_concrete_property_t)CALL( self,COLOR_abstractmetamodel___MMGlobalProperty___add_concrete_property))( self,  variable0 /*p*/, variable1) /*MMGlobalProperty::add_concrete_property*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMGlobalProperty].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMGlobalProperty___to_s(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::to_s (src/metamodel//abstractmetamodel.nit:540,2--42)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( self,COLOR_abstractmetamodel___MMGlobalProperty___intro))( self) /*MMGlobalProperty::intro*/;
  variable0 = ((abstractmetamodel___MMLocalProperty___full_name_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalProperty___full_name))(variable0) /*MMConcreteProperty::full_name*/;
  goto return_label44;
  return_label44: while(false);
  tracehead = trace.prev;
  return variable0;
}
void abstractmetamodel___MMGlobalProperty___add_concrete_property(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::add_concrete_property (src/metamodel//abstractmetamodel.nit:542,2--547:51)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*i*/ ==  NIT_NULL /*null*/) || (( variable0 /*i*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*i*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*i*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*i*/,COLOR_kernel___Object_____eqeq))( variable0 /*i*/,  NIT_NULL /*null*/) /*MMConcreteProperty::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:545,3--18\n"); nit_exit(1);}
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*sup*/ ==  NIT_NULL /*null*/) || (( variable1 /*sup*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable1 /*sup*/,COLOR_kernel___Object_____eqeq))( variable1 /*sup*/,  NIT_NULL /*null*/) /*Array::==*/)))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:546,3--20\n"); nit_exit(1);}
  variable2 = ATTR_abstractmetamodel___MMGlobalProperty____concrete_property_hierarchy( self) /*MMGlobalProperty::_concrete_property_hierarchy*/;
  variable2 = ((partial_order___PartialOrder___add_t)CALL(variable2,COLOR_partial_order___PartialOrder___add))(variable2,  variable0 /*i*/,  variable1 /*sup*/) /*PartialOrder::add*/;
  ATTR_abstractmetamodel___MMConcreteProperty____cprhe( variable0 /*i*/) /*MMConcreteProperty::_cprhe*/ = variable2;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMGlobalProperty___is_attribute(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::is_attribute (src/metamodel//abstractmetamodel.nit:550,2--551:56)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( self,COLOR_abstractmetamodel___MMGlobalProperty___intro))( self) /*MMGlobalProperty::intro*/;
  variable0 = TAG_Bool((variable0==NIT_NULL) || VAL_ISA(variable0, COLOR_MMAttribute, ID_MMAttribute)) /*cast MMAttribute*/;
  goto return_label46;
  return_label46: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstractmetamodel___MMGlobalProperty___is_method(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::is_method (src/metamodel//abstractmetamodel.nit:553,2--554:50)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( self,COLOR_abstractmetamodel___MMGlobalProperty___intro))( self) /*MMGlobalProperty::intro*/;
  variable0 = TAG_Bool((variable0==NIT_NULL) || VAL_ISA(variable0, COLOR_MMMethod, ID_MMMethod)) /*cast MMMethod*/;
  goto return_label47;
  return_label47: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstractmetamodel___MMGlobalProperty___is_init(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::is_init (src/metamodel//abstractmetamodel.nit:556,2--557:38)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMGlobalProperty____is_init( self) /*MMGlobalProperty::_is_init*/;
}
void abstractmetamodel___MMGlobalProperty___is_init__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::is_init= (src/metamodel//abstractmetamodel.nit:556,2--557:38)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstractmetamodel___MMGlobalProperty____is_init( self) /*MMGlobalProperty::_is_init*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMGlobalProperty___visibility_level(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::visibility_level (src/metamodel//abstractmetamodel.nit:559,2--563:46)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMGlobalProperty____visibility_level( self) /*MMGlobalProperty::_visibility_level*/;
}
void abstractmetamodel___MMGlobalProperty___visibility_level__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMGlobalProperty::visibility_level= (src/metamodel//abstractmetamodel.nit:559,2--563:46)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstractmetamodel___MMGlobalProperty____visibility_level( self) /*MMGlobalProperty::_visibility_level*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMLocalProperty___name(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalProperty::name (src/metamodel//abstractmetamodel.nit:569,2--570:28)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalProperty____name( self) /*MMLocalProperty::_name*/;
}
val_t abstractmetamodel___MMLocalProperty___local_class(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalProperty::local_class (src/metamodel//abstractmetamodel.nit:572,2--573:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalProperty____local_class( self) /*MMLocalProperty::_local_class*/;
}
val_t abstractmetamodel___MMLocalProperty___global(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalProperty::global (src/metamodel//abstractmetamodel.nit:575,2--576:40)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalProperty____global( self) /*MMLocalProperty::_global*/;
}
val_t abstractmetamodel___MMLocalProperty___super_prop(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalProperty::super_prop (src/metamodel//abstractmetamodel.nit:578,2--580:43)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalProperty____super_prop( self) /*MMLocalProperty::_super_prop*/;
}
val_t abstractmetamodel___MMLocalProperty___concrete_property(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalProperty::concrete_property (src/metamodel//abstractmetamodel.nit:582,2--584:53)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMLocalProperty____concrete_property( self) /*MMLocalProperty::_concrete_property*/;
}
val_t abstractmetamodel___MMLocalProperty___module(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalProperty::module (src/metamodel//abstractmetamodel.nit:586,2--587:52)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_abstractmetamodel___MMLocalProperty____local_class( self) /*MMLocalProperty::_local_class*/;
  variable0 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalClass___module))(variable0) /*MMLocalClass::module*/;
  goto return_label48;
  return_label48: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t abstractmetamodel___MMLocalProperty___full_name(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalProperty::full_name (src/metamodel//abstractmetamodel.nit:589,2--597:75)"};
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
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___global))( self) /*MMLocalProperty::global*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = NEW_string___String___init(); /*new String*/
    variable1 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable2 = variable1;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable2) /*String::append*/;
    variable3 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMLocalProperty::local_class*/;
    variable3 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalClass___module))(variable3) /*MMLocalClass::module*/;
    variable4 = variable3;
    variable4 = ((string___String___to_s_t)CALL(variable4,COLOR_string___Object___to_s))(variable4) /*String::to_s*/;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable4) /*String::append*/;
    variable5 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable6) /*String::append*/;
    variable7 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMLocalProperty::local_class*/;
    variable8 = variable7;
    variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable8) /*String::append*/;
    variable9 = NEW_string___String___with_native(BOX_NativeString("::(?::"), TAG_Int(6)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable10) /*String::append*/;
    variable11 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___name))( self) /*MMLocalProperty::name*/;
    variable12 = variable11;
    variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable12) /*String::append*/;
    variable13 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
    variable14 = variable13;
    ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable14) /*String::append*/;
    goto return_label49;
  } else { /*if*/
    variable0 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___global))( self) /*MMLocalProperty::global*/;
    variable0 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL(variable0,COLOR_abstractmetamodel___MMGlobalProperty___intro))(variable0) /*MMGlobalProperty::intro*/;
    variable0 = TAG_Bool((variable0 ==  self) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, self)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  self) /*MMConcreteProperty::==*/)))));
    if (UNTAG_Bool(variable0)) { /*if*/
      variable0 = NEW_string___String___init(); /*new String*/
      variable1 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable2 = variable1;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable2) /*String::append*/;
      variable3 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMLocalProperty::local_class*/;
      variable3 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalClass___module))(variable3) /*MMLocalClass::module*/;
      variable4 = variable3;
      variable4 = ((string___String___to_s_t)CALL(variable4,COLOR_string___Object___to_s))(variable4) /*String::to_s*/;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable4) /*String::append*/;
      variable5 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable6) /*String::append*/;
      variable7 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMLocalProperty::local_class*/;
      variable8 = variable7;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable10) /*String::append*/;
      variable11 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___name))( self) /*MMLocalProperty::name*/;
      variable12 = variable11;
      variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable14) /*String::append*/;
      goto return_label49;
    } else { /*if*/
      variable0 = NEW_string___String___init(); /*new String*/
      variable1 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable2 = variable1;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable2) /*String::append*/;
      variable3 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMLocalProperty::local_class*/;
      variable3 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalClass___module))(variable3) /*MMLocalClass::module*/;
      variable4 = variable3;
      variable4 = ((string___String___to_s_t)CALL(variable4,COLOR_string___Object___to_s))(variable4) /*String::to_s*/;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable4) /*String::append*/;
      variable5 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable6) /*String::append*/;
      variable7 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMLocalProperty::local_class*/;
      variable8 = variable7;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString("::("), TAG_Int(3)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable10) /*String::append*/;
      variable11 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___global))( self) /*MMLocalProperty::global*/;
      variable11 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL(variable11,COLOR_abstractmetamodel___MMGlobalProperty___intro))(variable11) /*MMGlobalProperty::intro*/;
      variable11 = ((abstractmetamodel___MMLocalProperty___full_name_t)CALL(variable11,COLOR_abstractmetamodel___MMLocalProperty___full_name))(variable11) /*MMConcreteProperty::full_name*/;
      variable12 = variable11;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable0,COLOR_abstract_collection___IndexedCollection___append))(variable0, variable14) /*String::append*/;
      goto return_label49;
    }
  }
  return_label49: while(false);
  tracehead = trace.prev;
  return variable0;
}
void abstractmetamodel___MMLocalProperty___set_global(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalProperty::set_global (src/metamodel//abstractmetamodel.nit:601,2--606:43)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*g*/ ==  NIT_NULL /*null*/) || (( variable0 /*g*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*g*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*g*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*g*/,COLOR_kernel___Object_____eqeq))( variable0 /*g*/,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:604,3--18\n"); nit_exit(1);}
  ATTR_abstractmetamodel___MMLocalProperty____global( self) /*MMLocalProperty::_global*/ =  variable0 /*g*/;
  variable1 = ATTR_abstractmetamodel___MMLocalProperty____local_class( self) /*MMLocalProperty::_local_class*/;
  ((abstractmetamodel___MMLocalClass___register_local_property_t)CALL(variable1,COLOR_abstractmetamodel___MMLocalClass___register_local_property))(variable1,  self) /*MMLocalClass::register_local_property*/;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMLocalProperty___to_s(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalProperty::to_s (src/metamodel//abstractmetamodel.nit:609,2--36)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___name))( self) /*MMLocalProperty::name*/;
  variable0 = ((symbol___Symbol___to_s_t)CALL(variable0,COLOR_string___Object___to_s))(variable0) /*Symbol::to_s*/;
  goto return_label51;
  return_label51: while(false);
  tracehead = trace.prev;
  return variable0;
}
void abstractmetamodel___MMLocalProperty___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMLocalProperty::init (src/metamodel//abstractmetamodel.nit:611,2--615:25)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMLocalProperty].i]) return;
  ATTR_abstractmetamodel___MMLocalProperty____name( self) /*MMLocalProperty::_name*/ =  variable0 /*n*/;
  ATTR_abstractmetamodel___MMLocalProperty____local_class( self) /*MMLocalProperty::_local_class*/ =  variable1 /*bc*/;
  ATTR_abstractmetamodel___MMLocalProperty____concrete_property( self) /*MMLocalProperty::_concrete_property*/ =  variable2 /*i*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMLocalProperty].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t abstractmetamodel___MMConcreteProperty___cprhe(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMConcreteProperty::cprhe (src/metamodel//abstractmetamodel.nit:637,2--638:61)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMConcreteProperty____cprhe( self) /*MMConcreteProperty::_cprhe*/;
}
val_t abstractmetamodel___MMConcreteProperty___need_super(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMConcreteProperty::need_super (src/metamodel//abstractmetamodel.nit:640,2--641:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_abstractmetamodel___MMConcreteProperty____need_super( self) /*MMConcreteProperty::_need_super*/;
}
void abstractmetamodel___MMConcreteProperty___need_super__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMConcreteProperty::need_super= (src/metamodel//abstractmetamodel.nit:640,2--641:41)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_abstractmetamodel___MMConcreteProperty____need_super( self) /*MMConcreteProperty::_need_super*/ =  param0;
  tracehead = trace.prev;
  return;
}
void abstractmetamodel___MMConcreteProperty___new_global(val_t  self) {
  struct trace_t trace = {NULL, "abstractmetamodel::MMConcreteProperty::new_global (src/metamodel//abstractmetamodel.nit:643,2--648:47)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_abstractmetamodel___MMLocalProperty____global( self) /*MMConcreteProperty::_global*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))));
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: src/metamodel//abstractmetamodel.nit:646,3--24\n"); nit_exit(1);}
  variable0 = NEW_abstractmetamodel___MMGlobalProperty___init( self); /*new MMGlobalProperty*/
  ATTR_abstractmetamodel___MMLocalProperty____global( self) /*MMConcreteProperty::_global*/ = variable0;
  variable0 = ATTR_abstractmetamodel___MMLocalProperty____local_class( self) /*MMConcreteProperty::_local_class*/;
  variable1 = ATTR_abstractmetamodel___MMLocalProperty____global( self) /*MMConcreteProperty::_global*/;
  ((abstractmetamodel___MMLocalClass___register_global_property_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalClass___register_global_property))(variable0, variable1) /*MMLocalClass::register_global_property*/;
  tracehead = trace.prev;
  return;
}
