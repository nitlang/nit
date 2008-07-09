#include "inheritance._sep.h"
val_t inheritance___MMModule___type_any(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMModule::type_any (src/metamodel//inheritance.nit:24,2--28:24)"};
  val_t variable0;
  val_t variable1;
  static val_t once_value_variable1_1; static int once_bool_variable1_1;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable1_1) variable1 = once_value_variable1_1;
  else {
    variable1 = NEW_string___String___with_native(BOX_NativeString("Object"), TAG_Int(6)); /*new String*/
    variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
    once_value_variable1_1 = variable1;
    once_bool_variable1_1 = true;
  }
  variable1 = ((abstractmetamodel___MMModule___class_by_name_t)CALL( self,COLOR_abstractmetamodel___MMModule___class_by_name))( self, variable1) /*MMModule::class_by_name*/;
  variable0 = variable1;
  variable1 = ((static_type___MMLocalClass___get_type_t)CALL( variable0 /*c_name*/,COLOR_static_type___MMLocalClass___get_type))( variable0 /*c_name*/) /*MMLocalClass::get_type*/;
  variable0 = variable1;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
void inheritance___MMModule___import_global_classes(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMModule::import_global_classes (src/metamodel//inheritance.nit:31,2--40:43)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
      val_t variable4;
      val_t variable5;
      val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_hash___HashMap___init(); /*new HashMap[MMGlobalClass, HashSet[MMLocalClass]]*/
  variable0 = variable1;
  variable1 = ((abstractmetamodel___MMModule___mhe_t)CALL( self,COLOR_abstractmetamodel___MMModule___mhe))( self) /*MMModule::mhe*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*PartialOrderElement::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:35,3--20\n"); nit_exit(1);}
  variable1 = ((abstractmetamodel___MMModule___mhe_t)CALL( self,COLOR_abstractmetamodel___MMModule___mhe))( self) /*MMModule::mhe*/;
  variable1 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable1,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable1) /*PartialOrderElement::direct_greaters*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((abstractmetamodel___MMModule___global_classes_t)CALL( variable2 /*mod*/,COLOR_abstractmetamodel___MMModule___global_classes))( variable2 /*mod*/) /*MMModule::global_classes*/;
    variable3 = ((array___AbstractArray___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Array::iterator*/;
    while (true) { /*for*/
      variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable4)) break; /*for*/
      variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
      variable5 = ((abstractmetamodel___MMModule___global_classes_t)CALL( self,COLOR_abstractmetamodel___MMModule___global_classes))( self) /*MMModule::global_classes*/;
      variable5 = ((array___AbstractArray___has_t)CALL(variable5,COLOR_abstract_collection___Collection___has))(variable5,  variable4 /*glob*/) /*Array::has*/;
      if (UNTAG_Bool(variable5)) { /*if*/
        goto continue_4;
      }
      variable5 = ATTR_abstractmetamodel___MMModule____global_classes( self) /*MMModule::_global_classes*/;
      ((array___AbstractArray___add_t)CALL(variable5,COLOR_abstract_collection___SimpleCollection___add))(variable5,  variable4 /*glob*/) /*Array::add*/;
      variable5 = ATTR_abstractmetamodel___MMModule____global_class_by_name( self) /*MMModule::_global_class_by_name*/;
      variable6 = ((abstractmetamodel___MMGlobalClass___name_t)CALL( variable4 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___name))( variable4 /*glob*/) /*MMGlobalClass::name*/;
      ((abstract_collection___Map_____braeq_t)CALL(variable5,COLOR_abstract_collection___Map_____braeq))(variable5, variable6,  variable4 /*glob*/) /*Map::[]=*/;
      continue_4: while(0);
      ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
    }
    break_4: while(0);
    continue_3: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_3: while(0);
  tracehead = trace.prev;
  return;
}
void inheritance___MMModule___import_local_classes(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMModule::import_local_classes (src/metamodel//inheritance.nit:46,2--51:46)"};
  val_t variable0;
    val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_abstractmetamodel___MMModule____global_classes( self) /*MMModule::_global_classes*/;
  variable0 = ((array___AbstractArray___iterator_t)CALL(variable0,COLOR_abstract_collection___Collection___iterator))(variable0) /*Array::iterator*/;
  while (true) { /*for*/
    variable1 = ((array___ArrayIterator___is_ok_t)CALL(variable0,COLOR_abstract_collection___Iterator___is_ok))(variable0) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable1)) break; /*for*/
    variable1 = ((array___ArrayIterator___item_t)CALL(variable0,COLOR_abstract_collection___Iterator___item))(variable0) /*ArrayIterator::item*/;
    variable2 = ((abstractmetamodel___MMModule_____bra_t)CALL( self,COLOR_abstractmetamodel___MMModule_____bra))( self,  variable1 /*g*/) /*MMModule::[]*/;
    variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
    if (UNTAG_Bool(variable2)) { /*if*/
      goto continue_6;
    }
    variable3 = NEW_inheritance___MMImplicitLocalClass___init( self,  variable1 /*g*/); /*new MMImplicitLocalClass*/
    variable2 = variable3;
    continue_6: while(0);
    ((array___ArrayIterator___next_t)CALL(variable0,COLOR_abstract_collection___Iterator___next))(variable0) /*ArrayIterator::next*/;
  }
  break_6: while(0);
  tracehead = trace.prev;
  return;
}
void inheritance___MMLocalClass___compute_super_classes(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::compute_super_classes (src/metamodel//inheritance.nit:64,2--87:26)"};
  val_t variable0;
      val_t variable1;
      val_t variable2;
      val_t variable3;
      val_t variable4;
      val_t variable5;
      val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((inheritance___MMLocalClass___computed_super_classes_t)CALL( self,COLOR_inheritance___MMLocalClass___computed_super_classes))( self) /*MMLocalClass::computed_super_classes*/;
  if (UNTAG_Bool(variable0)) { /*if*/
    goto return_label7;
  } else { /*if*/
    variable0 = ATTR_inheritance___MMLocalClass____computing_super( self) /*MMLocalClass::_computing_super*/;
    if (UNTAG_Bool(variable0)) { /*if*/
      variable0 = ((file___Object___stderr_t)CALL( self,COLOR_file___Object___stderr))( self) /*MMLocalClass::stderr*/;
      variable1 = NEW_string___String___init(); /*new String*/
      variable2 = NEW_string___String___with_native(BOX_NativeString("Fatal error: Inheritance loop for class "), TAG_Int(40)); /*new String*/
      variable3 = variable2;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
      variable4 =  self;
      variable4 = ((string___String___to_s_t)CALL(variable4,COLOR_string___Object___to_s))(variable4) /*String::to_s*/;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable4) /*String::append*/;
      variable5 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable6) /*String::append*/;
      ((file___OFStream___write_t)CALL(variable0,COLOR_stream___OStream___write))(variable0, variable1) /*OFStream::write*/;
      exit(UNTAG_Int( TAG_Int(1)));
    }
  }
  ATTR_inheritance___MMLocalClass____computing_super( self) /*MMLocalClass::_computing_super*/ =  TAG_Bool(true);
  variable1 = NEW_array___Array___init(); /*new Array[MMLocalClass]*/
  variable0 = variable1;
  ((inheritance___MMLocalClass___add_explicit_classes_t)CALL( self,COLOR_inheritance___MMLocalClass___add_explicit_classes))( self,  variable0 /*supers*/) /*MMLocalClass::add_explicit_classes*/;
  ((inheritance___MMLocalClass___add_super_classes_t)CALL( self,COLOR_inheritance___MMLocalClass___add_super_classes))( self,  variable0 /*supers*/) /*MMLocalClass::add_super_classes*/;
  ((inheritance___MMLocalClass___add_default_any_class_t)CALL( self,COLOR_inheritance___MMLocalClass___add_default_any_class))( self,  variable0 /*supers*/) /*MMLocalClass::add_default_any_class*/;
  ((inheritance___MMLocalClass___compute_super_parents_t)CALL( self,COLOR_inheritance___MMLocalClass___compute_super_parents))( self,  variable0 /*supers*/) /*MMLocalClass::compute_super_parents*/;
  variable2 = NEW_hash___HashSet___init(); /*new HashSet[MMLocalClass]*/
  variable1 = variable2;
  ((abstract_collection___SimpleCollection___add_all_t)CALL( variable1 /*set*/,COLOR_abstract_collection___SimpleCollection___add_all))( variable1 /*set*/,  variable0 /*supers*/) /*HashSet::add_all*/;
  variable3 = ((array___Collection___to_a_t)CALL( variable1 /*set*/,COLOR_array___Collection___to_a))( variable1 /*set*/) /*HashSet::to_a*/;
  variable2 = variable3;
  variable3 = ((abstractmetamodel___MMLocalClass___module_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___module))( self) /*MMLocalClass::module*/;
  ((abstractmetamodel___MMModule___set_supers_class_t)CALL(variable3,COLOR_abstractmetamodel___MMModule___set_supers_class))(variable3,  self,  variable2 /*u*/) /*MMModule::set_supers_class*/;
  variable3 = ATTR_abstractmetamodel___MMLocalClass____crhe( self) /*MMLocalClass::_crhe*/;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*PartialOrderElement::==*/)))))));
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:85,3--22\n"); nit_exit(1);}
  variable3 = ATTR_abstractmetamodel___MMLocalClass____cshe( self) /*MMLocalClass::_cshe*/;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*PartialOrderElement::==*/)))))));
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:86,3--22\n"); nit_exit(1);}
  ATTR_inheritance___MMLocalClass____computing_super( self) /*MMLocalClass::_computing_super*/ =  TAG_Bool(false);
  return_label7: while(false);
  tracehead = trace.prev;
  return;
}
void inheritance___MMLocalClass___compute_ancestors(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::compute_ancestors (src/metamodel//inheritance.nit:90,2--104:36)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
      val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((inheritance___MMLocalClass___computed_super_classes_t)CALL( self,COLOR_inheritance___MMLocalClass___computed_super_classes))( self) /*MMLocalClass::computed_super_classes*/;
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:93,3--31\n"); nit_exit(1);}
  variable0 = ((inheritance___MMLocalClass___computed_ancestors_t)CALL( self,COLOR_inheritance___MMLocalClass___computed_ancestors))( self) /*MMLocalClass::computed_ancestors*/;
  if (UNTAG_Bool(variable0)) { /*if*/
    goto return_label8;
  }
  variable1 = ((inheritance___MMLocalClass___build_ancestors_t)CALL( self,COLOR_inheritance___MMLocalClass___build_ancestors))( self) /*MMLocalClass::build_ancestors*/;
  variable1 = ((inheritance___MMLocalClass___group_ancestors_t)CALL( self,COLOR_inheritance___MMLocalClass___group_ancestors))( self, variable1) /*MMLocalClass::group_ancestors*/;
  variable0 = variable1;
  variable1 = NEW_hash___HashMap___init(); /*new HashMap[MMLocalClass, MMAncestor]*/
  ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/ = variable1;
  variable1 = ((abstract_collection___Map___iterator_t)CALL( variable0 /*ancestors*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*ancestors*/) /*Map::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*MapIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*MapIterator::item*/;
    variable3 = ((abstract_collection___Collection___length_t)CALL( variable2 /*set*/,COLOR_abstract_collection___Collection___length))( variable2 /*set*/) /*Set::length*/;
    variable3 = TAG_Bool((variable3)==( TAG_Int(1)));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable3 = ((abstract_collection___Collection___first_t)CALL( variable2 /*set*/,COLOR_abstract_collection___Collection___first))( variable2 /*set*/) /*Set::first*/;
      ((static_type___MMLocalClass___add_ancestor_t)CALL( self,COLOR_static_type___MMLocalClass___add_ancestor))( self, variable3) /*MMLocalClass::add_ancestor*/;
    } else { /*if*/
      variable4 = ((inheritance___MMLocalClass___merge_ancestors_t)CALL( self,COLOR_inheritance___MMLocalClass___merge_ancestors))( self,  variable2 /*set*/) /*MMLocalClass::merge_ancestors*/;
      variable3 = variable4;
      variable4 = ((inheritance___MMLocalClass___merge_ancestors_t)CALL( self,COLOR_inheritance___MMLocalClass___merge_ancestors))( self,  variable2 /*set*/) /*MMLocalClass::merge_ancestors*/;
      ((static_type___MMLocalClass___add_ancestor_t)CALL( self,COLOR_static_type___MMLocalClass___add_ancestor))( self, variable4) /*MMLocalClass::add_ancestor*/;
    }
    continue_9: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*MapIterator::next*/;
  }
  break_9: while(0);
  return_label8: while(false);
  tracehead = trace.prev;
  return;
}
void inheritance___MMLocalClass___inherit_global_properties(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::inherit_global_properties (src/metamodel//inheritance.nit:109,2--141:21)"};
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
  variable0 = ATTR_abstractmetamodel___MMLocalClass____global_properties( self) /*MMLocalClass::_global_properties*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*Set::==*/)))))));
  if (UNTAG_Bool(variable0)) { /*if*/
    goto return_label10;
  }
  variable0 = NEW_hash___HashSet___init(); /*new HashSet[MMGlobalProperty]*/
  ATTR_abstractmetamodel___MMLocalClass____global_properties( self) /*MMLocalClass::_global_properties*/ = variable0;
  variable0 = NEW_hash___HashMap___init(); /*new HashMap[Symbol, Array[MMGlobalProperty]]*/
  ATTR_abstractmetamodel___MMLocalClass____properties_by_name( self) /*MMLocalClass::_properties_by_name*/ = variable0;
  variable0 = NEW_hash___HashMap___init(); /*new HashMap[MMGlobalProperty, MMLocalProperty]*/
  ATTR_abstractmetamodel___MMLocalClass____local_property_by_global( self) /*MMLocalClass::_local_property_by_global*/ = variable0;
  variable1 = ATTR_abstractmetamodel___MMLocalClass____properties_by_name( self) /*MMLocalClass::_properties_by_name*/;
  variable0 = variable1;
  variable2 = ATTR_abstractmetamodel___MMLocalClass____global_properties( self) /*MMLocalClass::_global_properties*/;
  variable1 = variable2;
  variable2 = ((abstractmetamodel___MMLocalClass___che_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___che))( self) /*MMLocalClass::che*/;
  variable2 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable2,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable2) /*PartialOrderElement::direct_greaters*/;
  variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
  while (true) { /*for*/
    variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
    variable4 = ((abstractmetamodel___MMLocalClass___global_properties_t)CALL( variable3 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global_properties))( variable3 /*c*/) /*MMLocalClass::global_properties*/;
    variable4 = ((abstract_collection___Collection___iterator_t)CALL(variable4,COLOR_abstract_collection___Collection___iterator))(variable4) /*Set::iterator*/;
    while (true) { /*for*/
      variable5 = ((abstract_collection___Iterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable5)) break; /*for*/
      variable5 = ((abstract_collection___Iterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*Iterator::item*/;
      variable6 = ((abstract_collection___Collection___has_t)CALL( variable1 /*set*/,COLOR_abstract_collection___Collection___has))( variable1 /*set*/,  variable5 /*glob*/) /*Set::has*/;
      if (UNTAG_Bool(variable6)) { /*if*/
        goto continue_12;
      }
      ((abstract_collection___SimpleCollection___add_t)CALL( variable1 /*set*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*set*/,  variable5 /*glob*/) /*Set::add*/;
      variable6 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL( variable5 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___is_init))( variable5 /*glob*/) /*MMGlobalProperty::is_init*/;
      variable7 = variable6;
      if (UNTAG_Bool(variable7)) { /* and */
        variable7 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( variable5 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___intro))( variable5 /*glob*/) /*MMGlobalProperty::intro*/;
        variable7 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL(variable7,COLOR_abstractmetamodel___MMLocalProperty___local_class))(variable7) /*MMConcreteProperty::local_class*/;
        variable7 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable7,COLOR_abstractmetamodel___MMLocalClass___global))(variable7) /*MMLocalClass::global*/;
        variable8 = ((abstractmetamodel___MMLocalClass___global_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___global))( self) /*MMLocalClass::global*/;
        variable7 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable7 == variable8) || ((variable7 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable7,variable8)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))(variable7, variable8) /*MMGlobalClass::==*/)))))));
      }
      variable6 = variable7;
      if (UNTAG_Bool(variable6)) { /*if*/
        goto continue_12;
      }
      variable7 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( variable5 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___intro))( variable5 /*glob*/) /*MMGlobalProperty::intro*/;
      variable7 = ((abstractmetamodel___MMLocalProperty___name_t)CALL(variable7,COLOR_abstractmetamodel___MMLocalProperty___name))(variable7) /*MMConcreteProperty::name*/;
      variable6 = variable7;
      variable7 = NIT_NULL /*decl variable conf_set*/;
      variable8 = ((abstract_collection___Map___has_key_t)CALL( variable0 /*names*/,COLOR_abstract_collection___Map___has_key))( variable0 /*names*/,  variable6 /*gname*/) /*Map::has_key*/;
      if (UNTAG_Bool(variable8)) { /*if*/
        variable8 = ((abstract_collection___Map_____bra_t)CALL( variable0 /*names*/,COLOR_abstract_collection___Map_____bra))( variable0 /*names*/,  variable6 /*gname*/) /*Map::[]*/;
        variable7 = variable8 /*conf_set=*/;
      } else { /*if*/
        variable8 = NEW_array___Array___init(); /*new Array[MMGlobalProperty]*/
        variable7 = variable8 /*conf_set=*/;
        ((abstract_collection___Map_____braeq_t)CALL( variable0 /*names*/,COLOR_abstract_collection___Map_____braeq))( variable0 /*names*/,  variable6 /*gname*/,  variable7 /*conf_set*/) /*Map::[]=*/;
      }
      ((array___AbstractArray___add_t)CALL( variable7 /*conf_set*/,COLOR_abstract_collection___SimpleCollection___add))( variable7 /*conf_set*/,  variable5 /*glob*/) /*Array::add*/;
      continue_12: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*Iterator::next*/;
    }
    break_12: while(0);
    continue_11: while(0);
    ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
  }
  break_11: while(0);
  return_label10: while(false);
  tracehead = trace.prev;
  return;
}
void inheritance___MMLocalClass___add_direct_parent(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::add_direct_parent (src/metamodel//inheritance.nit:146,2--149:23)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_inheritance___MMLocalClass____direct_parents( self) /*MMLocalClass::_direct_parents*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1,  variable0 /*p*/) /*Array::add*/;
  tracehead = trace.prev;
  return;
}
val_t inheritance___MMLocalClass___computed_super_classes(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::computed_super_classes (src/metamodel//inheritance.nit:152,2--155:40)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_abstractmetamodel___MMLocalClass____crhe( self) /*MMLocalClass::_crhe*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*PartialOrderElement::==*/)))))));
  variable1 = variable0;
  if (UNTAG_Bool(variable1)) { /* and */
    variable1 = ATTR_abstractmetamodel___MMLocalClass____cshe( self) /*MMLocalClass::_cshe*/;
    variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*PartialOrderElement::==*/)))))));
  }
  variable0 = variable1;
  goto return_label14;
  return_label14: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t inheritance___MMLocalClass___computed_ancestors(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::computed_ancestors (src/metamodel//inheritance.nit:158,2--161:27)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*Map::==*/)))))));
  goto return_label15;
  return_label15: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t inheritance___MMLocalClass___ancestor_for(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::ancestor_for (src/metamodel//inheritance.nit:164,2--184:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
      val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((static_type___MMLocalClass___ancestors_t)CALL( self,COLOR_static_type___MMLocalClass___ancestors))( self) /*MMLocalClass::ancestors*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*Map::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:168,3--26\n"); nit_exit(1);}
  variable1 = ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*c*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
    variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*c*/) /*Map::[]*/;
    goto return_label16;
  }
  variable2 = ((abstractmetamodel___MMLocalClass___module_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___module))( self) /*MMLocalClass::module*/;
  variable2 = ((abstractmetamodel___MMLocalClass___for_module_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___for_module))( variable0 /*c*/, variable2) /*MMLocalClass::for_module*/;
  variable1 = variable2;
  variable2 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___cshe))( self) /*MMLocalClass::cshe*/;
  variable2 = ((partial_order___PartialOrderElement_____leq_t)CALL(variable2,COLOR_partial_order___PartialOrderElement_____leq))(variable2,  variable1 /*a*/) /*PartialOrderElement::<=*/;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:174,3--18\n"); nit_exit(1);}
  variable2 = NIT_NULL /*decl variable ra*/;
  variable3 = ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
  variable3 = ((abstract_collection___Map___has_key_t)CALL(variable3,COLOR_abstract_collection___Map___has_key))(variable3,  variable1 /*a*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
    variable3 = ((abstract_collection___Map_____bra_t)CALL(variable3,COLOR_abstract_collection___Map_____bra))(variable3,  variable1 /*a*/) /*Map::[]*/;
    variable2 = variable3 /*ra=*/;
  } else { /*if*/
    variable3 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable0 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable0 /*c*/) /*MMLocalClass::global*/;
    variable4 = ATTR_abstractmetamodel___MMLocalClass____global( self) /*MMLocalClass::_global*/;
    variable3 = TAG_Bool((variable3 == variable4) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3,variable4)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3, variable4) /*MMGlobalClass::==*/)))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable3 = NEW_inheritance___MMRefineAncestor___init( self,  variable0 /*c*/); /*new MMRefineAncestor*/
      variable2 = variable3 /*ra=*/;
    } else { /*if*/
      variable3 = ((static_type___MMLocalClass___get_type_t)CALL( self,COLOR_static_type___MMLocalClass___get_type))( self) /*MMLocalClass::get_type*/;
      variable4 = ((static_type___MMLocalClass___get_type_t)CALL( variable0 /*c*/,COLOR_static_type___MMLocalClass___get_type))( variable0 /*c*/) /*MMLocalClass::get_type*/;
      variable5 = NEW_inheritance___MMSpecAncestor___init(variable3, variable4); /*new MMSpecAncestor*/
      variable3 = variable5;
      variable2 = variable3 /*ra=*/;
    }
  }
  variable3 = ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable3,COLOR_abstract_collection___Map_____braeq))(variable3,  variable0 /*c*/,  variable2 /*ra*/) /*Map::[]=*/;
  variable1 =  variable2 /*ra*/;
  goto return_label16;
  return_label16: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t inheritance___MMLocalClass_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::[] (src/metamodel//inheritance.nit:187,2--193:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((inheritance___MMLocalClass_____bra_t)CALL( self,COLOR_SUPER_inheritance___MMLocalClass_____bra))( self,  variable0 /*glob*/) /*super MMLocalClass::[]*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*prop*/ ==  NIT_NULL /*null*/) || (( variable1 /*prop*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*prop*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*prop*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*prop*/,COLOR_kernel___Object_____eqeq))( variable1 /*prop*/,  NIT_NULL /*null*/) /*MMLocalProperty::==*/)))));
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = ATTR_abstractmetamodel___MMLocalClass____global_properties( self) /*MMLocalClass::_global_properties*/;
    variable3 = ((abstract_collection___Collection___has_t)CALL(variable3,COLOR_abstract_collection___Collection___has))(variable3,  variable0 /*glob*/) /*Set::has*/;
  }
  variable2 = variable3;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((inheritance___MMLocalClass___inherit_local_property_t)CALL( self,COLOR_inheritance___MMLocalClass___inherit_local_property))( self,  variable0 /*glob*/) /*MMLocalClass::inherit_local_property*/;
    variable1 = variable2 /*prop=*/;
  }
  variable1 =  variable1 /*prop*/;
  goto return_label17;
  return_label17: while(false);
  tracehead = trace.prev;
  return variable1;
}
void inheritance___MMLocalClass___add_default_any_class(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::add_default_any_class (src/metamodel//inheritance.nit:196,2--203:28)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    static val_t once_value_variable3_19; static int once_bool_variable3_19;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___is_empty_t)CALL( variable0 /*supers*/,COLOR_abstract_collection___Collection___is_empty))( variable0 /*supers*/) /*Array::is_empty*/;
  variable2 = variable1;
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
    if (once_bool_variable3_19) variable3 = once_value_variable3_19;
    else {
      variable3 = NEW_string___String___with_native(BOX_NativeString("Object"), TAG_Int(6)); /*new String*/
      variable3 = ((symbol___String___to_symbol_t)CALL(variable3,COLOR_symbol___String___to_symbol))(variable3) /*String::to_symbol*/;
      once_value_variable3_19 = variable3;
      once_bool_variable3_19 = true;
    }
    variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 == variable3) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2,variable3)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2, variable3) /*Symbol::==*/)))))));
  }
  variable1 = variable2;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable2 = ((abstractmetamodel___MMLocalClass___module_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___module))( self) /*MMLocalClass::module*/;
    variable2 = ((inheritance___MMModule___type_any_t)CALL(variable2,COLOR_inheritance___MMModule___type_any))(variable2) /*MMModule::type_any*/;
    variable1 = variable2;
    variable2 = ((static_type___MMType___local_class_t)CALL( variable1 /*t_any*/,COLOR_static_type___MMType___local_class))( variable1 /*t_any*/) /*MMType::local_class*/;
    ((array___AbstractArray___add_t)CALL( variable0 /*supers*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*supers*/, variable2) /*Array::add*/;
    variable3 = NEW_inheritance___MMDefaultAncestor___init( self,  variable1 /*t_any*/); /*new MMDefaultAncestor*/
    variable2 = variable3;
    ((inheritance___MMLocalClass___add_direct_parent_t)CALL( self,COLOR_inheritance___MMLocalClass___add_direct_parent))( self,  variable2 /*default*/) /*MMLocalClass::add_direct_parent*/;
  }
  tracehead = trace.prev;
  return;
}
void inheritance___MMLocalClass___add_super_classes(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::add_super_classes (src/metamodel//inheritance.nit:207,2--216:18)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
      val_t variable4;
      val_t variable5;
      val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_abstractmetamodel___MMLocalClass____crhe( self) /*MMLocalClass::_crhe*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*PartialOrderElement::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:210,3--22\n"); nit_exit(1);}
  variable1 = ATTR_abstractmetamodel___MMLocalClass____crhe( self) /*MMLocalClass::_crhe*/;
  variable1 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable1,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable1) /*PartialOrderElement::direct_greaters*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable2 /*ref*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable2 /*ref*/) /*MMLocalClass::cshe*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*PartialOrderElement::==*/)))))));
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:212,4--26\n"); nit_exit(1);}
    variable3 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable2 /*ref*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable2 /*ref*/) /*MMLocalClass::cshe*/;
    variable3 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable3,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable3) /*PartialOrderElement::direct_greaters*/;
    variable3 = ((array___AbstractArray___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Array::iterator*/;
    while (true) { /*for*/
      variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable4)) break; /*for*/
      variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
      variable6 = ATTR_abstractmetamodel___MMLocalClass____module( self) /*MMLocalClass::_module*/;
      variable6 = ((abstractmetamodel___MMLocalClass___for_module_t)CALL( variable4 /*sup*/,COLOR_abstractmetamodel___MMLocalClass___for_module))( variable4 /*sup*/, variable6) /*MMLocalClass::for_module*/;
      variable5 = variable6;
      variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable5 /*cla*/ ==  NIT_NULL /*null*/) || (( variable5 /*cla*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable5 /*cla*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable5 /*cla*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable5 /*cla*/,COLOR_kernel___Object_____eqeq))( variable5 /*cla*/,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
      if (!UNTAG_Bool(variable6)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:215,5--22\n"); nit_exit(1);}
      ((array___AbstractArray___add_t)CALL( variable0 /*supers*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*supers*/,  variable5 /*cla*/) /*Array::add*/;
      continue_22: while(0);
      ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
    }
    break_22: while(0);
    continue_21: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_21: while(0);
  tracehead = trace.prev;
  return;
}
void inheritance___MMLocalClass___add_explicit_classes(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::add_explicit_classes (src/metamodel//inheritance.nit:221,2--225:27)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_inheritance___MMLocalClass____direct_parents( self) /*MMLocalClass::_direct_parents*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((static_type___MMAncestor___local_class_t)CALL( variable2 /*p*/,COLOR_static_type___MMAncestor___local_class))( variable2 /*p*/) /*MMAncestor::local_class*/;
    ((array___AbstractArray___add_t)CALL( variable0 /*supers*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*supers*/, variable3) /*Array::add*/;
    continue_24: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_24: while(0);
  tracehead = trace.prev;
  return;
}
void inheritance___MMLocalClass___compute_super_parents(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::compute_super_parents (src/metamodel//inheritance.nit:229,2--234:26)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((array___AbstractArray___iterator_t)CALL( variable0 /*supers*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*supers*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*p*/ ==  NIT_NULL /*null*/) || (( variable2 /*p*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*p*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*p*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*p*/,COLOR_kernel___Object_____eqeq))( variable2 /*p*/,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:233,4--19\n"); nit_exit(1);}
    ((inheritance___MMLocalClass___compute_super_classes_t)CALL( variable2 /*p*/,COLOR_inheritance___MMLocalClass___compute_super_classes))( variable2 /*p*/) /*MMLocalClass::compute_super_classes*/;
    continue_26: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_26: while(0);
  tracehead = trace.prev;
  return;
}
val_t inheritance___MMLocalClass___build_ancestors(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::build_ancestors (src/metamodel//inheritance.nit:238,2--253:22)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = NEW_array___Array___init(); /*new Array[MMAncestor]*/
  variable0 = variable1;
  variable1 = ATTR_abstractmetamodel___MMLocalClass____crhe( self) /*MMLocalClass::_crhe*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*PartialOrderElement::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:243,3--22\n"); nit_exit(1);}
  variable1 = ATTR_abstractmetamodel___MMLocalClass____crhe( self) /*MMLocalClass::_crhe*/;
  variable1 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable1,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable1) /*PartialOrderElement::direct_greaters*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*p*/ ==  self) || (( variable2 /*p*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*p*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*p*/, self)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*p*/,COLOR_kernel___Object_____eqeq))( variable2 /*p*/,  self) /*MMLocalClass::==*/)))))));
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:245,4--19\n"); nit_exit(1);}
    variable4 = NEW_inheritance___MMRefineAncestor___init( self,  variable2 /*p*/); /*new MMRefineAncestor*/
    variable3 = variable4;
    ((inheritance___MMAncestor___add_in_t)CALL( variable3 /*anc*/,COLOR_inheritance___MMAncestor___add_in))( variable3 /*anc*/,  variable0 /*all_ancestors*/) /*MMRefineAncestor::add_in*/;
    continue_28: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_28: while(0);
  variable1 = ATTR_inheritance___MMLocalClass____direct_parents( self) /*MMLocalClass::_direct_parents*/;
  variable1 = ((array___AbstractArray___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Array::iterator*/;
  while (true) { /*for*/
    variable2 = ((array___ArrayIterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((array___ArrayIterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*ArrayIterator::item*/;
    variable3 = ((static_type___MMAncestor___local_class_t)CALL( variable2 /*anc*/,COLOR_static_type___MMAncestor___local_class))( variable2 /*anc*/) /*MMAncestor::local_class*/;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  self) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, self)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  self) /*MMLocalClass::==*/)))))));
    if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:250,4--33\n"); nit_exit(1);}
    ((inheritance___MMAncestor___add_in_t)CALL( variable2 /*anc*/,COLOR_inheritance___MMAncestor___add_in))( variable2 /*anc*/,  variable0 /*all_ancestors*/) /*MMAncestor::add_in*/;
    continue_29: while(0);
    ((array___ArrayIterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*ArrayIterator::next*/;
  }
  break_29: while(0);
  variable0 =  variable0 /*all_ancestors*/;
  goto return_label27;
  return_label27: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t inheritance___MMLocalClass___group_ancestors(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::group_ancestors (src/metamodel//inheritance.nit:256,2--275:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_hash___HashMap___init(); /*new HashMap[MMLocalClass, Set[MMAncestor]]*/
  variable1 = variable2;
  variable2 = ((array___AbstractArray___iterator_t)CALL( variable0 /*all*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*all*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
    variable5 = ((static_type___MMAncestor___local_class_t)CALL( variable3 /*a*/,COLOR_static_type___MMAncestor___local_class))( variable3 /*a*/) /*MMAncestor::local_class*/;
    variable4 = variable5;
    variable5 = NIT_NULL /*decl variable set*/;
    ((inheritance___MMLocalClass___compute_ancestors_t)CALL( variable4 /*c*/,COLOR_inheritance___MMLocalClass___compute_ancestors))( variable4 /*c*/) /*MMLocalClass::compute_ancestors*/;
    variable6 = ((abstract_collection___CoupleMap___has_key_t)CALL( variable1 /*map*/,COLOR_abstract_collection___Map___has_key))( variable1 /*map*/,  variable4 /*c*/) /*HashMap::has_key*/;
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = ((abstract_collection___CoupleMap_____bra_t)CALL( variable1 /*map*/,COLOR_abstract_collection___Map_____bra))( variable1 /*map*/,  variable4 /*c*/) /*HashMap::[]*/;
      variable5 = variable6 /*set=*/;
    } else { /*if*/
      variable6 = NEW_hash___HashSet___init(); /*new HashSet[MMAncestor]*/
      variable5 = variable6 /*set=*/;
      ((hash___HashMap_____braeq_t)CALL( variable1 /*map*/,COLOR_abstract_collection___Map_____braeq))( variable1 /*map*/,  variable4 /*c*/,  variable5 /*set*/) /*HashMap::[]=*/;
    }
    ((abstract_collection___SimpleCollection___add_t)CALL( variable5 /*set*/,COLOR_abstract_collection___SimpleCollection___add))( variable5 /*set*/,  variable3 /*a*/) /*Set::add*/;
    continue_31: while(0);
    ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
  }
  break_31: while(0);
  variable1 =  variable1 /*map*/;
  goto return_label30;
  return_label30: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t inheritance___MMLocalClass___merge_ancestors(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::merge_ancestors (src/metamodel//inheritance.nit:278,2--308:18)"};
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
  variable0 =  param0;
  variable2 = NEW_hash___HashSet___init(); /*new HashSet[MMAncestor]*/
  variable1 = variable2;
  variable3 = NEW_array___Array___init(); /*new Array[MMAncestor]*/
  variable2 = variable3;
  variable3 = ((abstract_collection___Collection___iterator_t)CALL( variable0 /*set*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*set*/) /*Set::iterator*/;
  while (true) { /*for*/
    variable4 = ((abstract_collection___Iterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((abstract_collection___Iterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*Iterator::item*/;
    variable6 = ((abstract_collection___Collection___iterator_t)CALL( variable0 /*set*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*set*/) /*Set::iterator*/;
    variable5 = variable6;
    variable6 =  TAG_Bool(true);
    while (true) { /*while*/
      variable7 = ((abstract_collection___Iterator___is_ok_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___is_ok))( variable5 /*it*/) /*Iterator::is_ok*/;
      variable8 = variable7;
      if (UNTAG_Bool(variable8)) { /* and */
        variable8 =  variable6 /*search*/;
      }
      variable7 = variable8;
      if (!UNTAG_Bool(variable7)) break; /* while*/
      variable8 = ((abstract_collection___Iterator___item_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___item))( variable5 /*it*/) /*Iterator::item*/;
      variable8 = TAG_Bool(( variable4 /*t*/ == variable8) || (( variable4 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*t*/,variable8)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*t*/,COLOR_kernel___Object_____eqeq))( variable4 /*t*/, variable8) /*MMAncestor::==*/)))));
      variable7 = variable8;
      variable8 = ((abstract_collection___Iterator___item_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___item))( variable5 /*it*/) /*Iterator::item*/;
      variable8 = ((hash___HashSet___has_t)CALL( variable1 /*marks*/,COLOR_abstract_collection___Collection___has))( variable1 /*marks*/, variable8) /*HashSet::has*/;
      variable7 = variable8 /*a=*/;
      variable8 = ((abstract_collection___Iterator___item_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___item))( variable5 /*it*/) /*Iterator::item*/;
      variable8 = ((static_type___MMAncestor___stype_t)CALL(variable8,COLOR_static_type___MMAncestor___stype))(variable8) /*MMAncestor::stype*/;
      variable9 = ((static_type___MMAncestor___stype_t)CALL( variable4 /*t*/,COLOR_static_type___MMAncestor___stype))( variable4 /*t*/) /*MMAncestor::stype*/;
      variable8 = ((static_type___MMType_____l_t)CALL(variable8,COLOR_static_type___MMType_____l))(variable8, variable9) /*MMType::<*/;
      variable7 = variable8 /*a=*/;
      variable8 = ((abstract_collection___Iterator___item_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___item))( variable5 /*it*/) /*Iterator::item*/;
      variable8 = TAG_Bool(( variable4 /*t*/ == variable8) || (( variable4 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*t*/,variable8)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*t*/,COLOR_kernel___Object_____eqeq))( variable4 /*t*/, variable8) /*MMAncestor::==*/)))));
      variable9 = variable8;
      if (!UNTAG_Bool(variable9)) { /* or */
        variable9 = ((abstract_collection___Iterator___item_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___item))( variable5 /*it*/) /*Iterator::item*/;
        variable9 = ((hash___HashSet___has_t)CALL( variable1 /*marks*/,COLOR_abstract_collection___Collection___has))( variable1 /*marks*/, variable9) /*HashSet::has*/;
      }
      variable8 = variable9;
      variable8 =  TAG_Bool(!UNTAG_Bool(variable8));
      if (UNTAG_Bool(variable8)) { /* and */
        variable8 = ((abstract_collection___Iterator___item_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___item))( variable5 /*it*/) /*Iterator::item*/;
        variable8 = ((static_type___MMAncestor___stype_t)CALL(variable8,COLOR_static_type___MMAncestor___stype))(variable8) /*MMAncestor::stype*/;
        variable9 = ((static_type___MMAncestor___stype_t)CALL( variable4 /*t*/,COLOR_static_type___MMAncestor___stype))( variable4 /*t*/) /*MMAncestor::stype*/;
        variable8 = ((static_type___MMType_____l_t)CALL(variable8,COLOR_static_type___MMType_____l))(variable8, variable9) /*MMType::<*/;
      }
      if (UNTAG_Bool(variable8)) { /*if*/
        ((hash___HashSet___add_t)CALL( variable1 /*marks*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*marks*/,  variable4 /*t*/) /*HashSet::add*/;
        variable6 =  TAG_Bool(false) /*search=*/;
      }
      ((abstract_collection___Iterator___next_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___next))( variable5 /*it*/) /*Iterator::next*/;
      continue_34: while(0);
    }
    break_34: while(0);
    variable7 = ((hash___HashSet___has_t)CALL( variable1 /*marks*/,COLOR_abstract_collection___Collection___has))( variable1 /*marks*/,  variable4 /*t*/) /*HashSet::has*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable7)))) { /*if*/
      ((array___AbstractArray___add_t)CALL( variable2 /*res*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*res*/,  variable4 /*t*/) /*Array::add*/;
    }
    continue_33: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*Iterator::next*/;
  }
  break_33: while(0);
  variable3 = ((array___AbstractArray___length_t)CALL( variable2 /*res*/,COLOR_abstract_collection___Collection___length))( variable2 /*res*/) /*Array::length*/;
  variable3 = TAG_Bool(UNTAG_Int(variable3)>UNTAG_Int( TAG_Int(1)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = ((file___Object___stderr_t)CALL( self,COLOR_file___Object___stderr))( self) /*MMLocalClass::stderr*/;
    variable4 = NEW_string___String___init(); /*new String*/
    variable5 = NEW_string___String___with_native(BOX_NativeString("Fatal error: Incompatibles ancestors for "), TAG_Int(41)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
    variable7 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMLocalClass::name*/;
    variable8 = variable7;
    variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
    variable9 = NEW_string___String___with_native(BOX_NativeString(": "), TAG_Int(2)); /*new String*/
    variable10 = variable9;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString(", "), TAG_Int(2)); /*new String*/
    variable11 = ((string___Collection___join_t)CALL( variable2 /*res*/,COLOR_string___Collection___join))( variable2 /*res*/, variable11) /*Array::join*/;
    variable12 = variable11;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
    variable13 = NEW_string___String___with_native(BOX_NativeString("\n"), TAG_Int(1)); /*new String*/
    variable14 = variable13;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
    ((file___OFStream___write_t)CALL(variable3,COLOR_stream___OStream___write))(variable3, variable4) /*OFStream::write*/;
    exit(UNTAG_Int( TAG_Int(1)));
  }
  variable3 = ((abstract_collection___IndexedCollection___first_t)CALL( variable2 /*res*/,COLOR_abstract_collection___Collection___first))( variable2 /*res*/) /*Array::first*/;
  variable1 = variable3;
  goto return_label32;
  return_label32: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t inheritance___MMLocalClass___inherit_local_property(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalClass::inherit_local_property (src/metamodel//inheritance.nit:311,2--339:13)"};
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
  variable1 = ATTR_abstractmetamodel___MMLocalClass____local_property_by_global( self) /*MMLocalClass::_local_property_by_global*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*glob*/) /*Map::has_key*/;
  if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:316,3--51\n"); nit_exit(1);}
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*glob*/ ==  NIT_NULL /*null*/) || (( variable0 /*glob*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*glob*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*glob*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*glob*/,COLOR_kernel___Object_____eqeq))( variable0 /*glob*/,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:317,3--21\n"); nit_exit(1);}
  variable2 = ((inheritance___MMGlobalProperty___get_compatible_concrete_properties_for_t)CALL( variable0 /*glob*/,COLOR_inheritance___MMGlobalProperty___get_compatible_concrete_properties_for))( variable0 /*glob*/,  self) /*MMGlobalProperty::get_compatible_concrete_properties_for*/;
  variable1 = variable2;
  variable2 = ((array___AbstractArray___length_t)CALL( variable1 /*impls*/,COLOR_abstract_collection___Collection___length))( variable1 /*impls*/) /*Array::length*/;
  variable2 = TAG_Bool((variable2)!=( TAG_Int(1)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((file___Object___stderr_t)CALL( self,COLOR_file___Object___stderr))( self) /*MMLocalClass::stderr*/;
    variable3 = NEW_string___String___with_native(BOX_NativeString("Fatal error: inherit_local_property error\n"), TAG_Int(42)); /*new String*/
    ((file___OFStream___write_t)CALL(variable2,COLOR_stream___OStream___write))(variable2, variable3) /*OFStream::write*/;
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("------- "), TAG_Int(8)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 = ((abstractmetamodel___MMLocalClass___module_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___module))( self) /*MMLocalClass::module*/;
    variable6 = variable5;
    variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
    variable7 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
    variable9 =  self;
    variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable9) /*String::append*/;
    variable10 = NEW_string___String___with_native(BOX_NativeString(" "), TAG_Int(1)); /*new String*/
    variable11 = variable10;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable11) /*String::append*/;
    variable12 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( variable0 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___intro))( variable0 /*glob*/) /*MMGlobalProperty::intro*/;
    variable12 = ((abstractmetamodel___MMLocalProperty___full_name_t)CALL(variable12,COLOR_abstractmetamodel___MMLocalProperty___full_name))(variable12) /*MMConcreteProperty::full_name*/;
    variable13 = variable12;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable13) /*String::append*/;
    variable14 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable15 = variable14;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable15) /*String::append*/;
    ((file___Object___print_t)CALL( self,COLOR_file___Object___print))( self, variable2) /*MMLocalClass::print*/;
    variable2 = ((array___AbstractArray___iterator_t)CALL( variable1 /*impls*/,COLOR_abstract_collection___Collection___iterator))( variable1 /*impls*/) /*Array::iterator*/;
    while (true) { /*for*/
      variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable3)) break; /*for*/
      variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("   "), TAG_Int(3)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 = ((abstractmetamodel___MMLocalProperty___full_name_t)CALL( variable3 /*i*/,COLOR_abstractmetamodel___MMLocalProperty___full_name))( variable3 /*i*/) /*MMConcreteProperty::full_name*/;
      variable8 = variable7;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
      ((file___Object___print_t)CALL( self,COLOR_file___Object___print))( self, variable4) /*MMLocalClass::print*/;
      continue_36: while(0);
      ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
    }
    break_36: while(0);
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("------- "), TAG_Int(8)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 = ((abstractmetamodel___MMGlobalProperty___concrete_property_hierarchy_t)CALL( variable0 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___concrete_property_hierarchy))( variable0 /*glob*/) /*MMGlobalProperty::concrete_property_hierarchy*/;
    variable5 = ((partial_order___PartialOrder___first_t)CALL(variable5,COLOR_abstract_collection___Collection___first))(variable5) /*PartialOrder::first*/;
    variable6 = variable5;
    variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
    variable7 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
    ((file___Object___print_t)CALL( self,COLOR_file___Object___print))( self, variable2) /*MMLocalClass::print*/;
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("------- "), TAG_Int(8)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 = ((abstractmetamodel___MMGlobalProperty___concrete_property_hierarchy_t)CALL( variable0 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___concrete_property_hierarchy))( variable0 /*glob*/) /*MMGlobalProperty::concrete_property_hierarchy*/;
    variable5 = ((partial_order___PartialOrder___to_dot_t)CALL(variable5,COLOR_partial_order___PartialOrder___to_dot))(variable5) /*PartialOrder::to_dot*/;
    variable6 = variable5;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
    variable7 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
    ((file___Object___print_t)CALL( self,COLOR_file___Object___print))( self, variable2) /*MMLocalClass::print*/;
    exit(UNTAG_Int( TAG_Int(1)));
  }
  variable3 = ((abstract_collection___IndexedCollection___first_t)CALL( variable1 /*impls*/,COLOR_abstract_collection___Collection___first))( variable1 /*impls*/) /*Array::first*/;
  variable2 = variable3;
  variable4 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable2 /*impl*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable2 /*impl*/) /*MMConcreteProperty::local_class*/;
  variable4 = ((inheritance___MMLocalClass___ancestor_for_t)CALL( self,COLOR_inheritance___MMLocalClass___ancestor_for))( self, variable4) /*MMLocalClass::ancestor_for*/;
  variable3 = variable4;
  variable4 = ((static_type___MMAncestor___local_class_t)CALL( variable3 /*ac*/,COLOR_static_type___MMAncestor___local_class))( variable3 /*ac*/) /*MMAncestor::local_class*/;
  ((inheritance___MMLocalClass___inherit_global_properties_t)CALL(variable4,COLOR_inheritance___MMLocalClass___inherit_global_properties))(variable4) /*MMLocalClass::inherit_global_properties*/;
  variable5 = ((static_type___MMAncestor___stype_t)CALL( variable3 /*ac*/,COLOR_static_type___MMAncestor___stype))( variable3 /*ac*/) /*MMAncestor::stype*/;
  variable4 = variable5;
  variable5 = ((static_type___MMType___local_class_t)CALL( variable4 /*a*/,COLOR_static_type___MMType___local_class))( variable4 /*a*/) /*MMType::local_class*/;
  variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable5 ==  self) || ((variable5 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable5, self)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))(variable5,  self) /*MMLocalClass::==*/)))))));
  if (!UNTAG_Bool(variable5)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:335,3--30\n"); nit_exit(1);}
  variable6 = ((static_type___MMType___select_property_t)CALL( variable4 /*a*/,COLOR_static_type___MMType___select_property))( variable4 /*a*/,  variable0 /*glob*/) /*MMType::select_property*/;
  variable5 = variable6;
  variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable5 /*sup*/ ==  NIT_NULL /*null*/) || (( variable5 /*sup*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable5 /*sup*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable5 /*sup*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable5 /*sup*/,COLOR_kernel___Object_____eqeq))( variable5 /*sup*/,  NIT_NULL /*null*/) /*MMLocalProperty::==*/)))))));
  if (!UNTAG_Bool(variable6)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:337,3--20\n"); nit_exit(1);}
  variable7 = ((static_type___MMLocalClass___get_type_t)CALL( self,COLOR_static_type___MMLocalClass___get_type))( self) /*MMLocalClass::get_type*/;
  variable7 = ((inheritance___MMLocalProperty___inherit_to_t)CALL( variable5 /*sup*/,COLOR_inheritance___MMLocalProperty___inherit_to))( variable5 /*sup*/, variable7) /*MMLocalProperty::inherit_to*/;
  variable6 = variable7;
  variable1 =  variable6 /*prop*/;
  goto return_label35;
  return_label35: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t inheritance___MMConcreteProperty___is_deferred(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMConcreteProperty::is_deferred (src/metamodel//inheritance.nit:344,2--345:39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(false);
  goto return_label37;
  return_label37: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t inheritance___MMGlobalProperty___get_compatible_concrete_properties_for(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMGlobalProperty::get_compatible_concrete_properties_for (src/metamodel//inheritance.nit:349,2--373:41)"};
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
  variable2 = ATTR_abstractmetamodel___MMGlobalProperty____concrete_property_hierarchy( self) /*MMGlobalProperty::_concrete_property_hierarchy*/;
  variable1 = variable2;
  variable2 = ((partial_order___PartialOrder___length_t)CALL( variable1 /*impl_hier*/,COLOR_abstract_collection___Collection___length))( variable1 /*impl_hier*/) /*PartialOrder::length*/;
  variable2 = TAG_Bool((variable2)==( TAG_Int(1)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[MMConcreteProperty]*/
    variable3 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( self,COLOR_abstractmetamodel___MMGlobalProperty___intro))( self) /*MMGlobalProperty::intro*/;
    ((array___AbstractArray___add_t)CALL(variable2,COLOR_abstract_collection___SimpleCollection___add))(variable2, variable3) /*Array::add*/;
    variable1 = variable2;
    goto return_label38;
  }
  variable3 = NEW_array___ArraySet___init(); /*new ArraySet[MMConcreteProperty]*/
  variable2 = variable3;
  variable4 = ((abstractmetamodel___MMLocalClass___che_t)CALL( variable0 /*cla*/,COLOR_abstractmetamodel___MMLocalClass___che))( variable0 /*cla*/) /*MMLocalClass::che*/;
  variable3 = variable4;
  if (UNTAG_Bool( TAG_Bool(true))) { /*if*/
    variable4 = ((abstractmetamodel___MMLocalClass___che_t)CALL( variable0 /*cla*/,COLOR_abstractmetamodel___MMLocalClass___che))( variable0 /*cla*/) /*MMLocalClass::che*/;
    variable4 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable4,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable4) /*PartialOrderElement::direct_greaters*/;
    variable4 = ((array___AbstractArray___iterator_t)CALL(variable4,COLOR_abstract_collection___Collection___iterator))(variable4) /*Array::iterator*/;
    while (true) { /*for*/
      variable5 = ((array___ArrayIterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable5)) break; /*for*/
      variable5 = ((array___ArrayIterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*ArrayIterator::item*/;
      variable7 = ((inheritance___MMLocalClass_____bra_t)CALL( variable5 /*sc*/,COLOR_abstractmetamodel___MMLocalClass_____bra))( variable5 /*sc*/,  self) /*MMLocalClass::[]*/;
      variable6 = variable7;
      variable7 = TAG_Bool(( variable6 /*p*/ ==  NIT_NULL /*null*/) || (( variable6 /*p*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable6 /*p*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable6 /*p*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable6 /*p*/,COLOR_kernel___Object_____eqeq))( variable6 /*p*/,  NIT_NULL /*null*/) /*MMLocalProperty::==*/)))));
      if (UNTAG_Bool(variable7)) { /*if*/
        goto continue_39;
      }
      variable8 = ((abstractmetamodel___MMLocalProperty___concrete_property_t)CALL( variable6 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___concrete_property))( variable6 /*p*/) /*MMLocalProperty::concrete_property*/;
      variable7 = variable8;
      ((array___ArraySet___add_t)CALL( variable2 /*impls*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*impls*/,  variable7 /*impl*/) /*ArraySet::add*/;
      continue_39: while(0);
      ((array___ArrayIterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*ArrayIterator::next*/;
    }
    break_39: while(0);
  } else { /*if*/
    variable4 = ((partial_order___PartialOrder___iterator_t)CALL( variable1 /*impl_hier*/,COLOR_abstract_collection___Collection___iterator))( variable1 /*impl_hier*/) /*PartialOrder::iterator*/;
    while (true) { /*for*/
      variable5 = ((abstract_collection___Iterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable5)) break; /*for*/
      variable5 = ((abstract_collection___Iterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*Iterator::item*/;
      variable7 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable5 /*impl*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable5 /*impl*/) /*MMConcreteProperty::local_class*/;
      variable6 = variable7;
      variable7 = ((partial_order___PartialOrderElement_____l_t)CALL( variable3 /*clache*/,COLOR_partial_order___PartialOrderElement_____l))( variable3 /*clache*/,  variable6 /*bc*/) /*PartialOrderElement::<*/;
      if (UNTAG_Bool(variable7)) { /*if*/
        ((array___ArraySet___add_t)CALL( variable2 /*impls*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*impls*/,  variable5 /*impl*/) /*ArraySet::add*/;
      }
      continue_40: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*Iterator::next*/;
    }
    break_40: while(0);
  }
  variable4 = ((partial_order___PartialOrder___select_smallests_t)CALL( variable1 /*impl_hier*/,COLOR_partial_order___PartialOrder___select_smallests))( variable1 /*impl_hier*/,  variable2 /*impls*/) /*PartialOrder::select_smallests*/;
  variable1 = variable4;
  goto return_label38;
  return_label38: while(false);
  tracehead = trace.prev;
  return variable1;
}
void inheritance___MMLocalProperty___inherit_global(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalProperty::inherit_global (src/metamodel//inheritance.nit:378,2--383:97)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((abstractmetamodel___MMLocalProperty___set_global_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___set_global))( self,  variable0 /*g*/) /*MMLocalProperty::set_global*/;
  variable1 = ((abstractmetamodel___MMLocalProperty___concrete_property_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___concrete_property))( self) /*MMLocalProperty::concrete_property*/;
  variable2 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___local_class))( self) /*MMLocalProperty::local_class*/;
  variable2 = ((inheritance___MMGlobalProperty___get_compatible_concrete_properties_for_t)CALL( variable0 /*g*/,COLOR_inheritance___MMGlobalProperty___get_compatible_concrete_properties_for))( variable0 /*g*/, variable2) /*MMGlobalProperty::get_compatible_concrete_properties_for*/;
  ((abstractmetamodel___MMGlobalProperty___add_concrete_property_t)CALL( variable0 /*g*/,COLOR_abstractmetamodel___MMGlobalProperty___add_concrete_property))( variable0 /*g*/, variable1, variable2) /*MMGlobalProperty::add_concrete_property*/;
  tracehead = trace.prev;
  return;
}
val_t inheritance___MMLocalProperty___inherit_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMLocalProperty::inherit_to (src/metamodel//inheritance.nit:386,2--387:44)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method inherit_to called (src/metamodel//inheritance.nit:386,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
void inheritance___MMLocalProperty___inherit_from(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "inheritance::MMLocalProperty::inherit_from (src/metamodel//inheritance.nit:389,2--395:22)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ATTR_abstractmetamodel___MMLocalProperty____super_prop( self) /*MMLocalProperty::_super_prop*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*MMLocalProperty::==*/)))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:392,3--28\n"); nit_exit(1);}
  ATTR_abstractmetamodel___MMLocalProperty____super_prop( self) /*MMLocalProperty::_super_prop*/ =  variable0 /*s*/;
  variable2 = ATTR_abstractmetamodel___MMLocalProperty____global( self) /*MMLocalProperty::_global*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable0 /*s*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable0 /*s*/) /*MMLocalProperty::global*/;
    ((abstractmetamodel___MMLocalProperty___set_global_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___set_global))( self, variable2) /*MMLocalProperty::set_global*/;
  }
  tracehead = trace.prev;
  return;
}
val_t inheritance___MMMethod___inherit_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMMethod::inherit_to (src/metamodel//inheritance.nit:402,2--403:37)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_inheritance___MMImplicitMethod___init( self,  variable0 /*t*/); /*new MMImplicitMethod*/
  goto return_label43;
  return_label43: while(false);
  tracehead = trace.prev;
  return variable1;
}
void inheritance___MMImplicitProperty___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "inheritance::MMImplicitProperty::init (src/metamodel//inheritance.nit:410,2--414:23)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMImplicitProperty].i]) return;
  variable2 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( variable0 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___name))( variable0 /*prop*/) /*MMLocalProperty::name*/;
  variable3 = ((static_type___MMType___local_class_t)CALL( variable1 /*bt*/,COLOR_static_type___MMType___local_class))( variable1 /*bt*/) /*MMType::local_class*/;
  variable4 = ((abstractmetamodel___MMLocalProperty___concrete_property_t)CALL( variable0 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___concrete_property))( variable0 /*prop*/) /*MMLocalProperty::concrete_property*/;
  ((abstractmetamodel___MMLocalProperty___init_t)CALL( self,COLOR_abstractmetamodel___MMLocalProperty___init))( self, variable2, variable3, variable4, init_table /*YYY*/) /*MMLocalProperty::init*/;
  ((inheritance___MMLocalProperty___inherit_from_t)CALL( self,COLOR_inheritance___MMLocalProperty___inherit_from))( self,  variable0 /*prop*/,  variable1 /*bt*/) /*MMImplicitProperty::inherit_from*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMImplicitProperty].i] = 1;
  tracehead = trace.prev;
  return;
}
void inheritance___MMImplicitMethod___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "inheritance::MMImplicitMethod::init (src/metamodel//inheritance.nit:421,2--20)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMImplicitMethod].i]) return;
  ((inheritance___MMImplicitProperty___init_t)CALL( self,COLOR_inheritance___MMImplicitProperty___init))( self,  param0,  param1, init_table /*YYY*/) /*MMImplicitProperty::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMImplicitMethod].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t inheritance___MMAttribute___inherit_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMAttribute::inherit_to (src/metamodel//inheritance.nit:425,2--427:39)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_inheritance___MMImplicitAttribute___init( self,  variable0 /*t*/); /*new MMImplicitAttribute*/
  goto return_label46;
  return_label46: while(false);
  tracehead = trace.prev;
  return variable1;
}
void inheritance___MMImplicitAttribute___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "inheritance::MMImplicitAttribute::init (src/metamodel//inheritance.nit:434,2--20)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMImplicitAttribute].i]) return;
  ((inheritance___MMImplicitProperty___init_t)CALL( self,COLOR_inheritance___MMImplicitProperty___init))( self,  param0,  param1, init_table /*YYY*/) /*MMImplicitProperty::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMImplicitAttribute].i] = 1;
  tracehead = trace.prev;
  return;
}
void inheritance___MMAncestor___add_in(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "inheritance::MMAncestor::add_in (src/metamodel//inheritance.nit:438,2--456:43)"};
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
  variable1 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMAncestor::stype*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert 'ancestor'  failed: src/metamodel//inheritance.nit:441,3--32\n"); nit_exit(1);}
  variable1 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMAncestor::stype*/;
  variable1 = ((static_type___MMType___local_class_t)CALL(variable1,COLOR_static_type___MMType___local_class))(variable1) /*MMType::local_class*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert 'local_class'  failed: src/metamodel//inheritance.nit:442,3--47\n"); nit_exit(1);}
  ((array___AbstractArray___add_t)CALL( variable0 /*tab*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*tab*/,  self) /*Array::add*/;
  variable1 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMAncestor::stype*/;
  variable1 = ((static_type___MMType___local_class_t)CALL(variable1,COLOR_static_type___MMType___local_class))(variable1) /*MMType::local_class*/;
  ((inheritance___MMLocalClass___compute_ancestors_t)CALL(variable1,COLOR_inheritance___MMLocalClass___compute_ancestors))(variable1) /*MMLocalClass::compute_ancestors*/;
  variable1 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMAncestor::stype*/;
  variable1 = ((static_type___MMType___local_class_t)CALL(variable1,COLOR_static_type___MMType___local_class))(variable1) /*MMType::local_class*/;
  variable1 = ((static_type___MMLocalClass___ancestors_t)CALL(variable1,COLOR_static_type___MMLocalClass___ancestors))(variable1) /*MMLocalClass::ancestors*/;
  variable1 = ((abstract_collection___Map___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Map::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*MapIterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*MapIterator::item*/;
    variable4 = ((static_type___MMAncestor___stype_t)CALL( variable2 /*anc*/,COLOR_static_type___MMAncestor___stype))( variable2 /*anc*/) /*MMAncestor::stype*/;
    variable5 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMAncestor::stype*/;
    variable5 = ((static_type___MMType___module_t)CALL(variable5,COLOR_static_type___MMType___module))(variable5) /*MMType::module*/;
    variable4 = ((static_type___MMType___for_module_t)CALL(variable4,COLOR_static_type___MMType___for_module))(variable4, variable5) /*MMType::for_module*/;
    variable3 = variable4;
    variable5 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMAncestor::stype*/;
    variable5 = ((static_type___MMType___adapt_to_t)CALL( variable3 /*aaa*/,COLOR_static_type___MMType___adapt_to))( variable3 /*aaa*/, variable5) /*MMType::adapt_to*/;
    variable6 = ((static_type___MMAncestor___inheriter_t)CALL( self,COLOR_static_type___MMAncestor___inheriter))( self) /*MMAncestor::inheriter*/;
    variable6 = ((static_type___MMType___module_t)CALL(variable6,COLOR_static_type___MMType___module))(variable6) /*MMType::module*/;
    variable5 = ((static_type___MMType___for_module_t)CALL(variable5,COLOR_static_type___MMType___for_module))(variable5, variable6) /*MMType::for_module*/;
    variable4 = variable5;
    variable5 = ((static_type___MMType___local_class_t)CALL( variable4 /*a*/,COLOR_static_type___MMType___local_class))( variable4 /*a*/) /*MMType::local_class*/;
    variable6 = ((static_type___MMAncestor___inheriter_t)CALL( self,COLOR_static_type___MMAncestor___inheriter))( self) /*MMAncestor::inheriter*/;
    variable6 = ((static_type___MMType___local_class_t)CALL(variable6,COLOR_static_type___MMType___local_class))(variable6) /*MMType::local_class*/;
    variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable5 == variable6) || ((variable5 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable5,variable6)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))(variable5, variable6) /*MMLocalClass::==*/)))))));
    if (UNTAG_Bool(variable5)) { /*if*/
      variable6 = ((array___AbstractArray___iterator_t)CALL( variable0 /*tab*/,COLOR_abstract_collection___Collection___iterator))( variable0 /*tab*/) /*Array::iterator*/;
      variable5 = variable6;
      variable6 =  TAG_Bool(true);
      while (true) { /*while*/
        variable7 = ((array___ArrayIterator___is_ok_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___is_ok))( variable5 /*it*/) /*ArrayIterator::is_ok*/;
        variable8 = variable7;
        if (UNTAG_Bool(variable8)) { /* and */
          variable8 =  variable6 /*b*/;
        }
        variable7 = variable8;
        if (!UNTAG_Bool(variable7)) break; /* while*/
        variable7 = ((array___ArrayIterator___item_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___item))( variable5 /*it*/) /*ArrayIterator::item*/;
        variable7 = ((static_type___MMAncestor___inheriter_t)CALL(variable7,COLOR_static_type___MMAncestor___inheriter))(variable7) /*MMAncestor::inheriter*/;
        variable8 = ((static_type___MMAncestor___inheriter_t)CALL( self,COLOR_static_type___MMAncestor___inheriter))( self) /*MMAncestor::inheriter*/;
        variable7 = TAG_Bool((variable7 == variable8) || ((variable7 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable7,variable8)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))(variable7, variable8) /*MMType::==*/)))));
        variable8 = variable7;
        if (UNTAG_Bool(variable8)) { /* and */
          variable8 = ((array___ArrayIterator___item_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___item))( variable5 /*it*/) /*ArrayIterator::item*/;
          variable8 = ((static_type___MMAncestor___stype_t)CALL(variable8,COLOR_static_type___MMAncestor___stype))(variable8) /*MMAncestor::stype*/;
          variable8 = TAG_Bool((variable8 ==  variable4 /*a*/) || ((variable8 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable8,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable8, variable4 /*a*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable8,COLOR_kernel___Object_____eqeq))(variable8,  variable4 /*a*/) /*MMType::==*/)))));
        }
        variable7 = variable8;
        variable6 =  TAG_Bool(!UNTAG_Bool(variable7)) /*b=*/;
        ((array___ArrayIterator___next_t)CALL( variable5 /*it*/,COLOR_abstract_collection___Iterator___next))( variable5 /*it*/) /*ArrayIterator::next*/;
        continue_50: while(0);
      }
      break_50: while(0);
      if (UNTAG_Bool( variable6 /*b*/)) { /*if*/
        variable7 = ((static_type___MMAncestor___inheriter_t)CALL( self,COLOR_static_type___MMAncestor___inheriter))( self) /*MMAncestor::inheriter*/;
        variable8 = NEW_inheritance___MMSpecAncestor___init(variable7,  variable4 /*a*/); /*new MMSpecAncestor*/
        variable7 = variable8;
        ((array___AbstractArray___add_t)CALL( variable0 /*tab*/,COLOR_abstract_collection___SimpleCollection___add))( variable0 /*tab*/, variable7) /*Array::add*/;
      }
    }
    continue_49: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*MapIterator::next*/;
  }
  break_49: while(0);
  tracehead = trace.prev;
  return;
}
void inheritance___MMImplicitLocalClass___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "inheritance::MMImplicitLocalClass::init (src/metamodel//inheritance.nit:468,2--473:14)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMImplicitLocalClass].i]) return;
  variable3 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL( variable1 /*g*/,COLOR_abstractmetamodel___MMGlobalClass___intro))( variable1 /*g*/) /*MMGlobalClass::intro*/;
  variable2 = variable3;
  variable3 = ((abstractmetamodel___MMLocalClass___name_t)CALL( variable2 /*cla*/,COLOR_abstractmetamodel___MMLocalClass___name))( variable2 /*cla*/) /*MMLocalClass::name*/;
  variable4 = ((abstractmetamodel___MMLocalClass___arity_t)CALL( variable2 /*cla*/,COLOR_abstractmetamodel___MMLocalClass___arity))( variable2 /*cla*/) /*MMLocalClass::arity*/;
  ((abstractmetamodel___MMLocalClass___init_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___init))( self, variable3, variable4, init_table /*YYY*/) /*MMLocalClass::init*/;
  ((abstractmetamodel___MMModule___add_local_class_t)CALL( variable0 /*mod*/,COLOR_abstractmetamodel___MMModule___add_local_class))( variable0 /*mod*/,  self) /*MMModule::add_local_class*/;
  ((abstractmetamodel___MMLocalClass___set_global_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___set_global))( self,  variable1 /*g*/) /*MMImplicitLocalClass::set_global*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMImplicitLocalClass].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t inheritance___MMRefineAncestor___local_class(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMRefineAncestor::local_class (src/metamodel//inheritance.nit:479,2--47)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_inheritance___MMRefineAncestor____local_class( self) /*MMRefineAncestor::_local_class*/;
}
void inheritance___MMRefineAncestor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "inheritance::MMRefineAncestor::init (src/metamodel//inheritance.nit:481,2--485:31)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMRefineAncestor].i]) return;
  ATTR_inheritance___MMRefineAncestor____local_class( self) /*MMRefineAncestor::_local_class*/ =  variable1 /*a*/;
  variable2 = ((static_type___MMLocalClass___get_type_t)CALL( variable0 /*b*/,COLOR_static_type___MMLocalClass___get_type))( variable0 /*b*/) /*MMLocalClass::get_type*/;
  ((static_type___MMAncestor___inheriter__eq_t)CALL( self,COLOR_static_type___MMAncestor___inheriter__eq))( self, variable2) /*MMRefineAncestor::inheriter=*/;
  variable2 = ATTR_inheritance___MMRefineAncestor____local_class( self) /*MMRefineAncestor::_local_class*/;
  variable2 = ((static_type___MMLocalClass___get_type_t)CALL(variable2,COLOR_static_type___MMLocalClass___get_type))(variable2) /*MMLocalClass::get_type*/;
  ((static_type___MMAncestor___stype__eq_t)CALL( self,COLOR_static_type___MMAncestor___stype__eq))( self, variable2) /*MMRefineAncestor::stype=*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMRefineAncestor].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t inheritance___MMSpecAncestor___local_class(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMSpecAncestor::local_class (src/metamodel//inheritance.nit:492,2--51)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMSpecAncestor::stype*/;
  variable0 = ((static_type___MMType___local_class_t)CALL(variable0,COLOR_static_type___MMType___local_class))(variable0) /*MMType::local_class*/;
  goto return_label53;
  return_label53: while(false);
  tracehead = trace.prev;
  return variable0;
}
void inheritance___MMSpecAncestor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "inheritance::MMSpecAncestor::init (src/metamodel//inheritance.nit:494,2--497:16)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSpecAncestor].i]) return;
  ATTR_static_type___MMAncestor____inheriter( self) /*MMSpecAncestor::_inheriter*/ =  variable0 /*inheriter*/;
  ATTR_static_type___MMAncestor____stype( self) /*MMSpecAncestor::_stype*/ =  variable1 /*stype*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSpecAncestor].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t inheritance___MMDefaultAncestor___local_class(val_t  self) {
  struct trace_t trace = {NULL, "inheritance::MMDefaultAncestor::local_class (src/metamodel//inheritance.nit:503,2--51)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMDefaultAncestor::stype*/;
  variable0 = ((static_type___MMType___local_class_t)CALL(variable0,COLOR_static_type___MMType___local_class))(variable0) /*MMType::local_class*/;
  goto return_label55;
  return_label55: while(false);
  tracehead = trace.prev;
  return variable0;
}
void inheritance___MMDefaultAncestor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "inheritance::MMDefaultAncestor::init (src/metamodel//inheritance.nit:505,2--511:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMDefaultAncestor].i]) return;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*b*/ ==  NIT_NULL /*null*/) || (( variable0 /*b*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*b*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*b*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*b*/,COLOR_kernel___Object_____eqeq))( variable0 /*b*/,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:507,3--18\n"); nit_exit(1);}
  variable2 = ((abstractmetamodel___MMLocalClass___module_t)CALL( variable0 /*b*/,COLOR_abstractmetamodel___MMLocalClass___module))( variable0 /*b*/) /*MMLocalClass::module*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*MMModule::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:508,3--25\n"); nit_exit(1);}
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*anc*/ ==  NIT_NULL /*null*/) || (( variable1 /*anc*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*anc*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*anc*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*anc*/,COLOR_kernel___Object_____eqeq))( variable1 /*anc*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//inheritance.nit:509,3--20\n"); nit_exit(1);}
  variable2 = ((static_type___MMLocalClass___get_type_t)CALL( variable0 /*b*/,COLOR_static_type___MMLocalClass___get_type))( variable0 /*b*/) /*MMLocalClass::get_type*/;
  ((static_type___MMAncestor___inheriter__eq_t)CALL( self,COLOR_static_type___MMAncestor___inheriter__eq))( self, variable2) /*MMDefaultAncestor::inheriter=*/;
  ((static_type___MMAncestor___stype__eq_t)CALL( self,COLOR_static_type___MMAncestor___stype__eq))( self,  variable1 /*anc*/) /*MMDefaultAncestor::stype=*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMDefaultAncestor].i] = 1;
  tracehead = trace.prev;
  return;
}
