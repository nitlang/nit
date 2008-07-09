#include "mmbuilder._sep.h"
val_t mmbuilder___CSHSorter___compare(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmbuilder::CSHSorter::compare (src/syntax//mmbuilder.nit:27,2--29:36)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable0 /*a*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable0 /*a*/) /*MMLocalClass::cshe*/;
  variable2 = ((partial_order___PartialOrderElement___rank_t)CALL(variable2,COLOR_partial_order___PartialOrderElement___rank))(variable2) /*PartialOrderElement::rank*/;
  variable3 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL( variable1 /*b*/,COLOR_abstractmetamodel___MMLocalClass___cshe))( variable1 /*b*/) /*MMLocalClass::cshe*/;
  variable3 = ((partial_order___PartialOrderElement___rank_t)CALL(variable3,COLOR_partial_order___PartialOrderElement___rank))(variable3) /*PartialOrderElement::rank*/;
  variable2 = ((kernel___Int_____leqg_t)CALL(variable2,COLOR_kernel___Comparable_____leqg))(variable2, variable3) /*Int::<=>*/;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable2;
}
void mmbuilder___CSHSorter___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "mmbuilder::CSHSorter::init (src/syntax//mmbuilder.nit:32,2--5)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_CSHSorter].i]) return;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_CSHSorter].i] = 1;
  tracehead = trace.prev;
  return;
}
void mmbuilder___MMSrcModule___do_mmbuilder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::MMSrcModule::do_mmbuilder (src/syntax//mmbuilder.nit:36,2--131:35)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
    val_t variable5;
    val_t variable6;
  static val_t once_value_variable5_4; static int once_bool_variable5_4;
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
  ((inheritance___MMModule___import_global_classes_t)CALL( self,COLOR_inheritance___MMModule___import_global_classes))( self) /*MMSrcModule::import_global_classes*/;
  variable2 = NEW_mmbuilder___ClassBuilderVisitor___init( variable0 /*tc*/,  self); /*new ClassBuilderVisitor*/
  variable1 = variable2;
  variable2 = ((syntax_base___MMSrcModule___node_t)CALL( self,COLOR_syntax_base___MMSrcModule___node))( self) /*MMSrcModule::node*/;
  ((mmbuilder___ClassBuilderVisitor___visit_t)CALL( variable1 /*mmbv*/,COLOR_parser_prod___Visitor___visit))( variable1 /*mmbv*/, variable2) /*ClassBuilderVisitor::visit*/;
  variable2 = ((mmloader___ToolContext___error_count_t)CALL( variable0 /*tc*/,COLOR_mmloader___ToolContext___error_count))( variable0 /*tc*/) /*ToolContext::error_count*/;
  variable2 = TAG_Bool(UNTAG_Int(variable2)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    exit(UNTAG_Int( TAG_Int(1)));
  }
  ((inheritance___MMModule___import_local_classes_t)CALL( self,COLOR_inheritance___MMModule___import_local_classes))( self) /*MMSrcModule::import_local_classes*/;
  variable3 = NEW_mmbuilder___ClassSpecializationBuilderVisitor___init( variable0 /*tc*/,  self); /*new ClassSpecializationBuilderVisitor*/
  variable2 = variable3;
  variable3 = ((syntax_base___MMSrcModule___node_t)CALL( self,COLOR_syntax_base___MMSrcModule___node))( self) /*MMSrcModule::node*/;
  ((mmbuilder___ClassSpecializationBuilderVisitor___visit_t)CALL( variable2 /*mmbv1*/,COLOR_parser_prod___Visitor___visit))( variable2 /*mmbv1*/, variable3) /*ClassSpecializationBuilderVisitor::visit*/;
  variable3 = ((mmloader___ToolContext___error_count_t)CALL( variable0 /*tc*/,COLOR_mmloader___ToolContext___error_count))( variable0 /*tc*/) /*ToolContext::error_count*/;
  variable3 = TAG_Bool(UNTAG_Int(variable3)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable3)) { /*if*/
    exit(UNTAG_Int( TAG_Int(1)));
  }
  variable3 = ((abstractmetamodel___MMModule___local_classes_t)CALL( self,COLOR_abstractmetamodel___MMModule___local_classes))( self) /*MMSrcModule::local_classes*/;
  variable3 = ((array___AbstractArray___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Array::iterator*/;
  while (true) { /*for*/
    variable4 = ((array___ArrayIterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable4)) break; /*for*/
    variable4 = ((array___ArrayIterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*ArrayIterator::item*/;
    variable5 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable4 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable4 /*c*/) /*MMLocalClass::global*/;
    variable5 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL(variable5,COLOR_abstractmetamodel___MMGlobalClass___intro))(variable5) /*MMGlobalClass::intro*/;
    variable5 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable5,COLOR_abstractmetamodel___MMLocalClass___module))(variable5) /*MMLocalClass::module*/;
    variable5 = ((abstractmetamodel___MMModule___visibility_for_t)CALL( self,COLOR_abstractmetamodel___MMModule___visibility_for))( self, variable5) /*MMSrcModule::visibility_for*/;
    variable6 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable4 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable4 /*c*/) /*MMLocalClass::global*/;
    variable6 = ((abstractmetamodel___MMGlobalClass___visibility_level_t)CALL(variable6,COLOR_abstractmetamodel___MMGlobalClass___visibility_level))(variable6) /*MMGlobalClass::visibility_level*/;
    variable5 = TAG_Bool(UNTAG_Int(variable5)<UNTAG_Int(variable6));
    if (UNTAG_Bool(variable5)) { /*if*/
      goto continue_3;
    }
    ((inheritance___MMLocalClass___compute_super_classes_t)CALL( variable4 /*c*/,COLOR_inheritance___MMLocalClass___compute_super_classes))( variable4 /*c*/) /*MMLocalClass::compute_super_classes*/;
    continue_3: while(0);
    ((array___ArrayIterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*ArrayIterator::next*/;
  }
  break_3: while(0);
  variable4 = ((abstractmetamodel___MMModule___class_specialization_hierarchy_t)CALL( self,COLOR_abstractmetamodel___MMModule___class_specialization_hierarchy))( self) /*MMSrcModule::class_specialization_hierarchy*/;
  variable4 = ((array___Collection___to_a_t)CALL(variable4,COLOR_array___Collection___to_a))(variable4) /*PartialOrder::to_a*/;
  variable3 = variable4;
  if (once_bool_variable5_4) variable5 = once_value_variable5_4;
  else {
    variable5 = NEW_mmbuilder___CSHSorter___init(); /*new CSHSorter*/
    once_value_variable5_4 = variable5;
    once_bool_variable5_4 = true;
  }
  variable4 = variable5;
  ((sorter___AbstractSorter___sort_t)CALL( variable4 /*sorter*/,COLOR_sorter___AbstractSorter___sort))( variable4 /*sorter*/,  variable3 /*classes*/) /*CSHSorter::sort*/;
  variable6 = NEW_mmbuilder___ClassAncestorBuilder___init( variable0 /*tc*/,  self); /*new ClassAncestorBuilder*/
  variable5 = variable6;
  variable6 = ((array___AbstractArray___iterator_t)CALL( variable3 /*classes*/,COLOR_abstract_collection___Collection___iterator))( variable3 /*classes*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable7 = ((array___ArrayIterator___is_ok_t)CALL(variable6,COLOR_abstract_collection___Iterator___is_ok))(variable6) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable7)) break; /*for*/
    variable7 = ((array___ArrayIterator___item_t)CALL(variable6,COLOR_abstract_collection___Iterator___item))(variable6) /*ArrayIterator::item*/;
    variable8 = TAG_Bool(( variable7 /*c*/==NIT_NULL) || VAL_ISA( variable7 /*c*/, COLOR_MMSrcLocalClass, ID_MMSrcLocalClass)) /*cast MMSrcLocalClass*/;
    if (UNTAG_Bool(variable8)) { /*if*/
      variable8 = ((syntax_base___MMSrcLocalClass___nodes_t)CALL( variable7 /*c*/,COLOR_syntax_base___MMSrcLocalClass___nodes))( variable7 /*c*/) /*MMSrcLocalClass::nodes*/;
      variable8 = ((array___AbstractArray___iterator_t)CALL(variable8,COLOR_abstract_collection___Collection___iterator))(variable8) /*Array::iterator*/;
      while (true) { /*for*/
        variable9 = ((array___ArrayIterator___is_ok_t)CALL(variable8,COLOR_abstract_collection___Iterator___is_ok))(variable8) /*ArrayIterator::is_ok*/;
        if (!UNTAG_Bool(variable9)) break; /*for*/
        variable9 = ((array___ArrayIterator___item_t)CALL(variable8,COLOR_abstract_collection___Iterator___item))(variable8) /*ArrayIterator::item*/;
        ((mmbuilder___ClassAncestorBuilder___visit_t)CALL( variable5 /*mmbv1b*/,COLOR_parser_prod___Visitor___visit))( variable5 /*mmbv1b*/,  variable9 /*n*/) /*ClassAncestorBuilder::visit*/;
        continue_6: while(0);
        ((array___ArrayIterator___next_t)CALL(variable8,COLOR_abstract_collection___Iterator___next))(variable8) /*ArrayIterator::next*/;
      }
      break_6: while(0);
    }
    ((inheritance___MMLocalClass___compute_ancestors_t)CALL( variable7 /*c*/,COLOR_inheritance___MMLocalClass___compute_ancestors))( variable7 /*c*/) /*MMLocalClass::compute_ancestors*/;
    continue_5: while(0);
    ((array___ArrayIterator___next_t)CALL(variable6,COLOR_abstract_collection___Iterator___next))(variable6) /*ArrayIterator::next*/;
  }
  break_5: while(0);
  variable6 = ((mmloader___ToolContext___error_count_t)CALL( variable0 /*tc*/,COLOR_mmloader___ToolContext___error_count))( variable0 /*tc*/) /*ToolContext::error_count*/;
  variable6 = TAG_Bool(UNTAG_Int(variable6)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable6)) { /*if*/
    exit(UNTAG_Int( TAG_Int(1)));
  }
  variable7 = NEW_mmbuilder___ClassVerifierVisitor___init( variable0 /*tc*/,  self); /*new ClassVerifierVisitor*/
  variable6 = variable7;
  variable7 = ((array___AbstractArray___iterator_t)CALL( variable3 /*classes*/,COLOR_abstract_collection___Collection___iterator))( variable3 /*classes*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable8 = ((array___ArrayIterator___is_ok_t)CALL(variable7,COLOR_abstract_collection___Iterator___is_ok))(variable7) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable8)) break; /*for*/
    variable8 = ((array___ArrayIterator___item_t)CALL(variable7,COLOR_abstract_collection___Iterator___item))(variable7) /*ArrayIterator::item*/;
    variable9 = TAG_Bool(( variable8 /*c*/==NIT_NULL) || VAL_ISA( variable8 /*c*/, COLOR_MMSrcLocalClass, ID_MMSrcLocalClass)) /*cast MMSrcLocalClass*/;
    if (UNTAG_Bool(variable9)) { /*if*/
      variable9 = ((syntax_base___MMSrcLocalClass___nodes_t)CALL( variable8 /*c*/,COLOR_syntax_base___MMSrcLocalClass___nodes))( variable8 /*c*/) /*MMSrcLocalClass::nodes*/;
      variable9 = ((array___AbstractArray___iterator_t)CALL(variable9,COLOR_abstract_collection___Collection___iterator))(variable9) /*Array::iterator*/;
      while (true) { /*for*/
        variable10 = ((array___ArrayIterator___is_ok_t)CALL(variable9,COLOR_abstract_collection___Iterator___is_ok))(variable9) /*ArrayIterator::is_ok*/;
        if (!UNTAG_Bool(variable10)) break; /*for*/
        variable10 = ((array___ArrayIterator___item_t)CALL(variable9,COLOR_abstract_collection___Iterator___item))(variable9) /*ArrayIterator::item*/;
        ((mmbuilder___ClassVerifierVisitor___visit_t)CALL( variable6 /*mmbv1b*/,COLOR_parser_prod___Visitor___visit))( variable6 /*mmbv1b*/,  variable10 /*n*/) /*ClassVerifierVisitor::visit*/;
        continue_8: while(0);
        ((array___ArrayIterator___next_t)CALL(variable9,COLOR_abstract_collection___Iterator___next))(variable9) /*ArrayIterator::next*/;
      }
      break_8: while(0);
    }
    continue_7: while(0);
    ((array___ArrayIterator___next_t)CALL(variable7,COLOR_abstract_collection___Iterator___next))(variable7) /*ArrayIterator::next*/;
  }
  break_7: while(0);
  variable7 = ((mmloader___ToolContext___error_count_t)CALL( variable0 /*tc*/,COLOR_mmloader___ToolContext___error_count))( variable0 /*tc*/) /*ToolContext::error_count*/;
  variable7 = TAG_Bool(UNTAG_Int(variable7)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable7)) { /*if*/
    exit(UNTAG_Int( TAG_Int(1)));
  }
  variable8 = NEW_mmbuilder___PropertyBuilderVisitor___init( variable0 /*tc*/,  self); /*new PropertyBuilderVisitor*/
  variable7 = variable8;
  variable8 = ((array___AbstractArray___iterator_t)CALL( variable3 /*classes*/,COLOR_abstract_collection___Collection___iterator))( variable3 /*classes*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable9 = ((array___ArrayIterator___is_ok_t)CALL(variable8,COLOR_abstract_collection___Iterator___is_ok))(variable8) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable9)) break; /*for*/
    variable9 = ((array___ArrayIterator___item_t)CALL(variable8,COLOR_abstract_collection___Iterator___item))(variable8) /*ArrayIterator::item*/;
    ((inheritance___MMLocalClass___inherit_global_properties_t)CALL( variable9 /*c*/,COLOR_inheritance___MMLocalClass___inherit_global_properties))( variable9 /*c*/) /*MMLocalClass::inherit_global_properties*/;
    variable10 = TAG_Bool(( variable9 /*c*/==NIT_NULL) || VAL_ISA( variable9 /*c*/, COLOR_MMSrcLocalClass, ID_MMSrcLocalClass)) /*cast MMSrcLocalClass*/;
    if (UNTAG_Bool(variable10)) { /*if*/
      variable10 = ((syntax_base___MMSrcLocalClass___nodes_t)CALL( variable9 /*c*/,COLOR_syntax_base___MMSrcLocalClass___nodes))( variable9 /*c*/) /*MMSrcLocalClass::nodes*/;
      variable10 = ((array___AbstractArray___iterator_t)CALL(variable10,COLOR_abstract_collection___Collection___iterator))(variable10) /*Array::iterator*/;
      while (true) { /*for*/
        variable11 = ((array___ArrayIterator___is_ok_t)CALL(variable10,COLOR_abstract_collection___Iterator___is_ok))(variable10) /*ArrayIterator::is_ok*/;
        if (!UNTAG_Bool(variable11)) break; /*for*/
        variable11 = ((array___ArrayIterator___item_t)CALL(variable10,COLOR_abstract_collection___Iterator___item))(variable10) /*ArrayIterator::item*/;
        ((mmbuilder___PropertyBuilderVisitor___visit_t)CALL( variable7 /*mmbv2*/,COLOR_parser_prod___Visitor___visit))( variable7 /*mmbv2*/,  variable11 /*n*/) /*PropertyBuilderVisitor::visit*/;
        continue_10: while(0);
        ((array___ArrayIterator___next_t)CALL(variable10,COLOR_abstract_collection___Iterator___next))(variable10) /*ArrayIterator::next*/;
      }
      break_10: while(0);
    }
    continue_9: while(0);
    ((array___ArrayIterator___next_t)CALL(variable8,COLOR_abstract_collection___Iterator___next))(variable8) /*ArrayIterator::next*/;
  }
  break_9: while(0);
  variable8 = ((mmloader___ToolContext___error_count_t)CALL( variable0 /*tc*/,COLOR_mmloader___ToolContext___error_count))( variable0 /*tc*/) /*ToolContext::error_count*/;
  variable8 = TAG_Bool(UNTAG_Int(variable8)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable8)) { /*if*/
    exit(UNTAG_Int( TAG_Int(1)));
  }
  variable9 = NEW_mmbuilder___PropertyVerifierVisitor___init( variable0 /*tc*/,  self); /*new PropertyVerifierVisitor*/
  variable8 = variable9;
  variable9 = ((array___AbstractArray___iterator_t)CALL( variable3 /*classes*/,COLOR_abstract_collection___Collection___iterator))( variable3 /*classes*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable10 = ((array___ArrayIterator___is_ok_t)CALL(variable9,COLOR_abstract_collection___Iterator___is_ok))(variable9) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable10)) break; /*for*/
    variable10 = ((array___ArrayIterator___item_t)CALL(variable9,COLOR_abstract_collection___Iterator___item))(variable9) /*ArrayIterator::item*/;
    variable11 = TAG_Bool(( variable10 /*c*/==NIT_NULL) || VAL_ISA( variable10 /*c*/, COLOR_MMSrcLocalClass, ID_MMSrcLocalClass)) /*cast MMSrcLocalClass*/;
    if (UNTAG_Bool(variable11)) { /*if*/
      variable11 = ((syntax_base___MMSrcLocalClass___nodes_t)CALL( variable10 /*c*/,COLOR_syntax_base___MMSrcLocalClass___nodes))( variable10 /*c*/) /*MMSrcLocalClass::nodes*/;
      variable11 = ((array___AbstractArray___iterator_t)CALL(variable11,COLOR_abstract_collection___Collection___iterator))(variable11) /*Array::iterator*/;
      while (true) { /*for*/
        variable12 = ((array___ArrayIterator___is_ok_t)CALL(variable11,COLOR_abstract_collection___Iterator___is_ok))(variable11) /*ArrayIterator::is_ok*/;
        if (!UNTAG_Bool(variable12)) break; /*for*/
        variable12 = ((array___ArrayIterator___item_t)CALL(variable11,COLOR_abstract_collection___Iterator___item))(variable11) /*ArrayIterator::item*/;
        ((mmbuilder___PropertyVerifierVisitor___visit_t)CALL( variable8 /*mmbv3*/,COLOR_parser_prod___Visitor___visit))( variable8 /*mmbv3*/,  variable12 /*n*/) /*PropertyVerifierVisitor::visit*/;
        continue_12: while(0);
        ((array___ArrayIterator___next_t)CALL(variable11,COLOR_abstract_collection___Iterator___next))(variable11) /*ArrayIterator::next*/;
      }
      break_12: while(0);
    }
    continue_11: while(0);
    ((array___ArrayIterator___next_t)CALL(variable9,COLOR_abstract_collection___Iterator___next))(variable9) /*ArrayIterator::next*/;
  }
  break_11: while(0);
  variable9 = ((array___AbstractArray___iterator_t)CALL( variable3 /*classes*/,COLOR_abstract_collection___Collection___iterator))( variable3 /*classes*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable10 = ((array___ArrayIterator___is_ok_t)CALL(variable9,COLOR_abstract_collection___Iterator___is_ok))(variable9) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable10)) break; /*for*/
    variable10 = ((array___ArrayIterator___item_t)CALL(variable9,COLOR_abstract_collection___Iterator___item))(variable9) /*ArrayIterator::item*/;
    variable11 = ((abstractmetamodel___MMLocalClass___global_properties_t)CALL( variable10 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global_properties))( variable10 /*c*/) /*MMLocalClass::global_properties*/;
    variable11 = ((abstract_collection___Collection___iterator_t)CALL(variable11,COLOR_abstract_collection___Collection___iterator))(variable11) /*Set::iterator*/;
    while (true) { /*for*/
      variable12 = ((abstract_collection___Iterator___is_ok_t)CALL(variable11,COLOR_abstract_collection___Iterator___is_ok))(variable11) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable12)) break; /*for*/
      variable12 = ((abstract_collection___Iterator___item_t)CALL(variable11,COLOR_abstract_collection___Iterator___item))(variable11) /*Iterator::item*/;
      variable13 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( variable12 /*g*/,COLOR_abstractmetamodel___MMGlobalProperty___intro))( variable12 /*g*/) /*MMGlobalProperty::intro*/;
      variable13 = ((abstractmetamodel___MMLocalProperty___module_t)CALL(variable13,COLOR_abstractmetamodel___MMLocalProperty___module))(variable13) /*MMConcreteProperty::module*/;
      variable13 = ((abstractmetamodel___MMModule___visibility_for_t)CALL( self,COLOR_abstractmetamodel___MMModule___visibility_for))( self, variable13) /*MMSrcModule::visibility_for*/;
      variable14 = ((abstractmetamodel___MMGlobalProperty___visibility_level_t)CALL( variable12 /*g*/,COLOR_abstractmetamodel___MMGlobalProperty___visibility_level))( variable12 /*g*/) /*MMGlobalProperty::visibility_level*/;
      variable13 = TAG_Bool(UNTAG_Int(variable13)<UNTAG_Int(variable14));
      if (UNTAG_Bool(variable13)) { /*if*/
        goto continue_14;
      }
      variable14 = ((inheritance___MMLocalClass_____bra_t)CALL( variable10 /*c*/,COLOR_abstractmetamodel___MMLocalClass_____bra))( variable10 /*c*/,  variable12 /*g*/) /*MMLocalClass::[]*/;
      variable13 = variable14;
      continue_14: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable11,COLOR_abstract_collection___Iterator___next))(variable11) /*Iterator::next*/;
    }
    break_14: while(0);
    continue_13: while(0);
    ((array___ArrayIterator___next_t)CALL(variable9,COLOR_abstract_collection___Iterator___next))(variable9) /*ArrayIterator::next*/;
  }
  break_13: while(0);
  variable9 = ((mmloader___ToolContext___error_count_t)CALL( variable0 /*tc*/,COLOR_mmloader___ToolContext___error_count))( variable0 /*tc*/) /*ToolContext::error_count*/;
  variable9 = TAG_Bool(UNTAG_Int(variable9)>UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable9)) { /*if*/
    exit(UNTAG_Int( TAG_Int(1)));
  }
  tracehead = trace.prev;
  return;
}
void mmbuilder___MMSrcLocalClass___add_src_local_property(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmbuilder::MMSrcLocalClass::add_src_local_property (src/syntax//mmbuilder.nit:136,2--161:59)"};
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
  variable3 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___name))( variable1 /*prop*/) /*MMSrcLocalProperty::name*/;
  variable2 = variable3;
  variable3 = ((syntax_base___MMSrcLocalClass___src_local_properties_t)CALL( self,COLOR_syntax_base___MMSrcLocalClass___src_local_properties))( self) /*MMSrcLocalClass::src_local_properties*/;
  variable3 = ((abstract_collection___Map___has_key_t)CALL(variable3,COLOR_abstract_collection___Map___has_key))(variable3,  variable2 /*pname*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = ((syntax_base___MMSrcLocalProperty___node_t)CALL( variable1 /*prop*/,COLOR_syntax_base___MMSrcLocalProperty___node))( variable1 /*prop*/) /*MMSrcLocalProperty::node*/;
    variable4 = NEW_string___String___init(); /*new String*/
    variable5 = NEW_string___String___with_native(BOX_NativeString("Error: A property "), TAG_Int(18)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
    variable7 =  variable2 /*pname*/;
    variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString(" is already defined in class "), TAG_Int(29)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
    variable10 = ((abstractmetamodel___MMLocalClass___name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___name))( self) /*MMSrcLocalClass::name*/;
    variable11 = variable10;
    variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
    variable12 = NEW_string___String___with_native(BOX_NativeString(" at line "), TAG_Int(9)); /*new String*/
    variable13 = variable12;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
    variable14 = ((syntax_base___MMSrcLocalClass___src_local_properties_t)CALL( self,COLOR_syntax_base___MMSrcLocalClass___src_local_properties))( self) /*MMSrcLocalClass::src_local_properties*/;
    variable14 = ((abstract_collection___Map_____bra_t)CALL(variable14,COLOR_abstract_collection___Map_____bra))(variable14,  variable2 /*pname*/) /*Map::[]*/;
    variable14 = ((syntax_base___MMSrcLocalProperty___node_t)CALL(variable14,COLOR_syntax_base___MMSrcLocalProperty___node))(variable14) /*MMSrcLocalProperty::node*/;
    variable14 = ((parser_prod___Prod___first_token_t)CALL(variable14,COLOR_parser_prod___Prod___first_token))(variable14) /*PPropdef::first_token*/;
    variable14 = ((lexer___Token___line_t)CALL(variable14,COLOR_lexer___Token___line))(variable14) /*Token::line*/;
    variable15 = variable14;
    variable15 = ((string___String___to_s_t)CALL(variable15,COLOR_string___Object___to_s))(variable15) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable15) /*String::append*/;
    variable16 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable17 = variable16;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable17) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/, variable3, variable4) /*PropertyBuilderVisitor::error*/;
    goto return_label15;
  }
  variable3 = ((syntax_base___MMSrcLocalClass___src_local_properties_t)CALL( self,COLOR_syntax_base___MMSrcLocalClass___src_local_properties))( self) /*MMSrcLocalClass::src_local_properties*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable3,COLOR_abstract_collection___Map_____braeq))(variable3,  variable2 /*pname*/,  variable1 /*prop*/) /*Map::[]=*/;
  variable3 = ((abstractmetamodel___MMLocalClass___has_global_property_by_name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___has_global_property_by_name))( self,  variable2 /*pname*/) /*MMSrcLocalClass::has_global_property_by_name*/;
  if (UNTAG_Bool(variable3)) { /*if*/
    variable4 = ((abstractmetamodel___MMLocalClass___properties_by_name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___properties_by_name))( self) /*MMSrcLocalClass::properties_by_name*/;
    variable4 = ((abstract_collection___Map_____bra_t)CALL(variable4,COLOR_abstract_collection___Map_____bra))(variable4,  variable2 /*pname*/) /*Map::[]*/;
    variable3 = variable4;
    variable4 = ((array___AbstractArray___length_t)CALL( variable3 /*globs*/,COLOR_abstract_collection___Collection___length))( variable3 /*globs*/) /*Array::length*/;
    variable4 = TAG_Bool(UNTAG_Int(variable4)>UNTAG_Int( TAG_Int(1)));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = ((syntax_base___MMSrcLocalProperty___node_t)CALL( variable1 /*prop*/,COLOR_syntax_base___MMSrcLocalProperty___node))( variable1 /*prop*/) /*MMSrcLocalProperty::node*/;
      variable5 = NEW_string___String___init(); /*new String*/
      variable6 = NEW_string___String___with_native(BOX_NativeString("Name error: "), TAG_Int(12)); /*new String*/
      variable7 = variable6;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
      variable8 =  self;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString(" inherits "), TAG_Int(10)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable10) /*String::append*/;
      variable11 = ((array___AbstractArray___length_t)CALL( variable3 /*globs*/,COLOR_abstract_collection___Collection___length))( variable3 /*globs*/) /*Array::length*/;
      variable12 = variable11;
      variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString(" global properties named "), TAG_Int(25)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable14) /*String::append*/;
      variable15 =  variable2 /*pname*/;
      variable15 = ((string___String___to_s_t)CALL(variable15,COLOR_string___Object___to_s))(variable15) /*String::to_s*/;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable15) /*String::append*/;
      variable16 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable17 = variable16;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable17) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/, variable4, variable5) /*PropertyBuilderVisitor::error*/;
    }
    variable5 = ((abstract_collection___IndexedCollection___first_t)CALL( variable3 /*globs*/,COLOR_abstract_collection___Collection___first))( variable3 /*globs*/) /*Array::first*/;
    variable4 = variable5;
    ((inheritance___MMLocalProperty___inherit_global_t)CALL( variable1 /*prop*/,COLOR_inheritance___MMLocalProperty___inherit_global))( variable1 /*prop*/,  variable4 /*g*/) /*MMSrcLocalProperty::inherit_global*/;
  }
  variable3 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*prop*/) /*MMSrcLocalProperty::global*/;
  variable3 = TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))));
  if (UNTAG_Bool(variable3)) { /*if*/
    ((abstractmetamodel___MMConcreteProperty___new_global_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMConcreteProperty___new_global))( variable1 /*prop*/) /*MMSrcLocalProperty::new_global*/;
    variable3 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*prop*/) /*MMSrcLocalProperty::global*/;
    variable4 = ((syntax_base___MMSrcLocalProperty___node_t)CALL( variable1 /*prop*/,COLOR_syntax_base___MMSrcLocalProperty___node))( variable1 /*prop*/) /*MMSrcLocalProperty::node*/;
    variable4 = TAG_Bool((variable4==NIT_NULL) || VAL_ISA(variable4, COLOR_AConcreteInitPropdef, ID_AConcreteInitPropdef)) /*cast AConcreteInitPropdef*/;
    ((abstractmetamodel___MMGlobalProperty___is_init__eq_t)CALL(variable3,COLOR_abstractmetamodel___MMGlobalProperty___is_init__eq))(variable3, variable4) /*MMGlobalProperty::is_init=*/;
  }
  return_label15: while(false);
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___MMSrcAncestor___node(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::MMSrcAncestor::node (src/syntax//mmbuilder.nit:169,2--170:33)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___MMSrcAncestor____node( self) /*MMSrcAncestor::_node*/;
}
val_t mmbuilder___MMSrcAncestor___local_class(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::MMSrcAncestor::local_class (src/syntax//mmbuilder.nit:171,2--47)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___MMSrcAncestor____local_class( self) /*MMSrcAncestor::_local_class*/;
}
void mmbuilder___MMSrcAncestor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "mmbuilder::MMSrcAncestor::init (src/syntax//mmbuilder.nit:173,2--176:18)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcAncestor].i]) return;
  ATTR_mmbuilder___MMSrcAncestor____node( self) /*MMSrcAncestor::_node*/ =  variable0 /*n*/;
  ATTR_mmbuilder___MMSrcAncestor____local_class( self) /*MMSrcAncestor::_local_class*/ =  variable1 /*c*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcAncestor].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___ClassBuilderVisitor___local_class_arity(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::ClassBuilderVisitor::local_class_arity (src/syntax//mmbuilder.nit:187,2--188:47)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___ClassBuilderVisitor____local_class_arity( self) /*ClassBuilderVisitor::_local_class_arity*/;
}
void mmbuilder___ClassBuilderVisitor___local_class_arity__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ClassBuilderVisitor::local_class_arity= (src/syntax//mmbuilder.nit:187,2--188:47)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_mmbuilder___ClassBuilderVisitor____local_class_arity( self) /*ClassBuilderVisitor::_local_class_arity*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___ClassBuilderVisitor___formals(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::ClassBuilderVisitor::formals (src/syntax//mmbuilder.nit:190,2--191:67)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___ClassBuilderVisitor____formals( self) /*ClassBuilderVisitor::_formals*/;
}
void mmbuilder___ClassBuilderVisitor___formals__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ClassBuilderVisitor::formals= (src/syntax//mmbuilder.nit:190,2--191:67)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_mmbuilder___ClassBuilderVisitor____formals( self) /*ClassBuilderVisitor::_formals*/ =  param0;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ClassBuilderVisitor___visit(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ClassBuilderVisitor::visit (src/syntax//mmbuilder.nit:193,2--51)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___PNode___accept_class_builder_t)CALL( variable0 /*n*/,COLOR_mmbuilder___PNode___accept_class_builder))( variable0 /*n*/,  self) /*PNode::accept_class_builder*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ClassBuilderVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "mmbuilder::ClassBuilderVisitor::init (src/syntax//mmbuilder.nit:194,2--21)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ClassBuilderVisitor].i]) return;
  ((syntax_base___AbsSyntaxVisitor___init_t)CALL( self,COLOR_syntax_base___AbsSyntaxVisitor___init))( self,  param0,  param1, init_table /*YYY*/) /*AbsSyntaxVisitor::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ClassBuilderVisitor].i] = 1;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ClassSpecializationBuilderVisitor___visit(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ClassSpecializationBuilderVisitor::visit (src/syntax//mmbuilder.nit:201,2--66)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___PNode___accept_class_specialization_builder_t)CALL( variable0 /*n*/,COLOR_mmbuilder___PNode___accept_class_specialization_builder))( variable0 /*n*/,  self) /*PNode::accept_class_specialization_builder*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ClassSpecializationBuilderVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "mmbuilder::ClassSpecializationBuilderVisitor::init (src/syntax//mmbuilder.nit:202,2--21)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ClassSpecializationBuilderVisitor].i]) return;
  ((syntax_base___AbsSyntaxVisitor___init_t)CALL( self,COLOR_syntax_base___AbsSyntaxVisitor___init))( self,  param0,  param1, init_table /*YYY*/) /*AbsSyntaxVisitor::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ClassSpecializationBuilderVisitor].i] = 1;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ClassAncestorBuilder___visit(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ClassAncestorBuilder::visit (src/syntax//mmbuilder.nit:209,2--60)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___PNode___accept_class_ancestor_builder_t)CALL( variable0 /*n*/,COLOR_mmbuilder___PNode___accept_class_ancestor_builder))( variable0 /*n*/,  self) /*PNode::accept_class_ancestor_builder*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ClassAncestorBuilder___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "mmbuilder::ClassAncestorBuilder::init (src/syntax//mmbuilder.nit:210,2--21)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ClassAncestorBuilder].i]) return;
  ((syntax_base___AbsSyntaxVisitor___init_t)CALL( self,COLOR_syntax_base___AbsSyntaxVisitor___init))( self,  param0,  param1, init_table /*YYY*/) /*AbsSyntaxVisitor::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ClassAncestorBuilder].i] = 1;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ClassVerifierVisitor___visit(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ClassVerifierVisitor::visit (src/syntax//mmbuilder.nit:217,2--52)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___PNode___accept_class_verifier_t)CALL( variable0 /*n*/,COLOR_mmbuilder___PNode___accept_class_verifier))( variable0 /*n*/,  self) /*PNode::accept_class_verifier*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ClassVerifierVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "mmbuilder::ClassVerifierVisitor::init (src/syntax//mmbuilder.nit:218,2--21)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ClassVerifierVisitor].i]) return;
  ((syntax_base___AbsSyntaxVisitor___init_t)CALL( self,COLOR_syntax_base___AbsSyntaxVisitor___init))( self,  param0,  param1, init_table /*YYY*/) /*AbsSyntaxVisitor::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_ClassVerifierVisitor].i] = 1;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PropertyBuilderVisitor___visit(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyBuilderVisitor::visit (src/syntax//mmbuilder.nit:228,2--54)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___PNode___accept_property_builder_t)CALL( variable0 /*n*/,COLOR_mmbuilder___PNode___accept_property_builder))( variable0 /*n*/,  self) /*PNode::accept_property_builder*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PropertyBuilderVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyBuilderVisitor::init (src/syntax//mmbuilder.nit:229,2--21)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_PropertyBuilderVisitor].i]) return;
  ((syntax_base___AbsSyntaxVisitor___init_t)CALL( self,COLOR_syntax_base___AbsSyntaxVisitor___init))( self,  param0,  param1, init_table /*YYY*/) /*AbsSyntaxVisitor::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_PropertyBuilderVisitor].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___PropertyVerifierVisitor___params(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyVerifierVisitor::params (src/syntax//mmbuilder.nit:236,2--237:45)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___PropertyVerifierVisitor____params( self) /*PropertyVerifierVisitor::_params*/;
}
void mmbuilder___PropertyVerifierVisitor___params__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyVerifierVisitor::params= (src/syntax//mmbuilder.nit:236,2--237:45)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_mmbuilder___PropertyVerifierVisitor____params( self) /*PropertyVerifierVisitor::_params*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___PropertyVerifierVisitor___untyped_params(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyVerifierVisitor::untyped_params (src/syntax//mmbuilder.nit:239,2--240:53)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___PropertyVerifierVisitor____untyped_params( self) /*PropertyVerifierVisitor::_untyped_params*/;
}
void mmbuilder___PropertyVerifierVisitor___untyped_params__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyVerifierVisitor::untyped_params= (src/syntax//mmbuilder.nit:239,2--240:53)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_mmbuilder___PropertyVerifierVisitor____untyped_params( self) /*PropertyVerifierVisitor::_untyped_params*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___PropertyVerifierVisitor___vararg_rank(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyVerifierVisitor::vararg_rank (src/syntax//mmbuilder.nit:242,2--243:41)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___PropertyVerifierVisitor____vararg_rank( self) /*PropertyVerifierVisitor::_vararg_rank*/;
}
void mmbuilder___PropertyVerifierVisitor___vararg_rank__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyVerifierVisitor::vararg_rank= (src/syntax//mmbuilder.nit:242,2--243:41)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_mmbuilder___PropertyVerifierVisitor____vararg_rank( self) /*PropertyVerifierVisitor::_vararg_rank*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___PropertyVerifierVisitor___signature(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyVerifierVisitor::signature (src/syntax//mmbuilder.nit:245,2--246:47)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___PropertyVerifierVisitor____signature( self) /*PropertyVerifierVisitor::_signature*/;
}
void mmbuilder___PropertyVerifierVisitor___signature__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyVerifierVisitor::signature= (src/syntax//mmbuilder.nit:245,2--246:47)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_mmbuilder___PropertyVerifierVisitor____signature( self) /*PropertyVerifierVisitor::_signature*/ =  param0;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PropertyVerifierVisitor___visit(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyVerifierVisitor::visit (src/syntax//mmbuilder.nit:248,2--55)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___PNode___accept_property_verifier_t)CALL( variable0 /*n*/,COLOR_mmbuilder___PNode___accept_property_verifier))( variable0 /*n*/,  self) /*PNode::accept_property_verifier*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PropertyVerifierVisitor___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "mmbuilder::PropertyVerifierVisitor::init (src/syntax//mmbuilder.nit:250,2--21)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_PropertyVerifierVisitor].i]) return;
  ((syntax_base___AbsSyntaxVisitor___init_t)CALL( self,COLOR_syntax_base___AbsSyntaxVisitor___init))( self,  param0,  param1, init_table /*YYY*/) /*AbsSyntaxVisitor::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_PropertyVerifierVisitor].i] = 1;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PNode___accept_class_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PNode::accept_class_builder (src/syntax//mmbuilder.nit:256,2--89)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((syntax_base___PNode___accept_abs_syntax_visitor_t)CALL( self,COLOR_syntax_base___PNode___accept_abs_syntax_visitor))( self,  variable0 /*v*/) /*PNode::accept_abs_syntax_visitor*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PNode___accept_class_specialization_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PNode::accept_class_specialization_builder (src/syntax//mmbuilder.nit:257,2--118)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((syntax_base___PNode___accept_abs_syntax_visitor_t)CALL( self,COLOR_syntax_base___PNode___accept_abs_syntax_visitor))( self,  variable0 /*v*/) /*PNode::accept_abs_syntax_visitor*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PNode___accept_class_ancestor_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PNode::accept_class_ancestor_builder (src/syntax//mmbuilder.nit:258,2--99)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((syntax_base___PNode___accept_abs_syntax_visitor_t)CALL( self,COLOR_syntax_base___PNode___accept_abs_syntax_visitor))( self,  variable0 /*v*/) /*PNode::accept_abs_syntax_visitor*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PNode___accept_class_verifier(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PNode::accept_class_verifier (src/syntax//mmbuilder.nit:259,2--91)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((syntax_base___PNode___accept_abs_syntax_visitor_t)CALL( self,COLOR_syntax_base___PNode___accept_abs_syntax_visitor))( self,  variable0 /*v*/) /*PNode::accept_abs_syntax_visitor*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PNode___accept_property_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PNode::accept_property_builder (src/syntax//mmbuilder.nit:260,2--95)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((syntax_base___PNode___accept_abs_syntax_visitor_t)CALL( self,COLOR_syntax_base___PNode___accept_abs_syntax_visitor))( self,  variable0 /*v*/) /*PNode::accept_abs_syntax_visitor*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PNode___accept_property_verifier(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PNode::accept_property_verifier (src/syntax//mmbuilder.nit:261,2--97)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((syntax_base___PNode___accept_abs_syntax_visitor_t)CALL( self,COLOR_syntax_base___PNode___accept_abs_syntax_visitor))( self,  variable0 /*v*/) /*PNode::accept_abs_syntax_visitor*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___AModule___import_super_modules(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmbuilder::AModule::import_super_modules (src/syntax//mmbuilder.nit:265,2--296:32)"};
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
      static val_t once_value_variable6_37; static int once_bool_variable6_37;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable3 = NEW_array___Array___init(); /*new Array[Symbol]*/
  variable2 = variable3;
  variable4 = NEW_hash___HashMap___init(); /*new HashMap[Symbol, Int]*/
  variable3 = variable4;
  variable4 = NIT_NULL /*decl variable no_import*/;
  variable5 = ((parser_nodes___AModule___n_imports_t)CALL( self,COLOR_parser_nodes___AModule___n_imports))( self) /*AModule::n_imports*/;
  variable5 = ((list___List___iterator_t)CALL(variable5,COLOR_abstract_collection___Collection___iterator))(variable5) /*List::iterator*/;
  while (true) { /*for*/
    variable6 = ((list___ListIterator___is_ok_t)CALL(variable5,COLOR_abstract_collection___Iterator___is_ok))(variable5) /*ListIterator::is_ok*/;
    if (!UNTAG_Bool(variable6)) break; /*for*/
    variable6 = ((list___ListIterator___item_t)CALL(variable5,COLOR_abstract_collection___Iterator___item))(variable5) /*ListIterator::item*/;
    variable8 = ((mmbuilder___PImport___module_name_t)CALL( variable6 /*i*/,COLOR_mmbuilder___PImport___module_name))( variable6 /*i*/) /*PImport::module_name*/;
    variable7 = variable8;
    variable8 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable7 /*n*/ ==  NIT_NULL /*null*/) || (( variable7 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable7 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable7 /*n*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable7 /*n*/,COLOR_kernel___Object_____eqeq))( variable7 /*n*/,  NIT_NULL /*null*/) /*Symbol::==*/)))))));
    if (UNTAG_Bool(variable8)) { /*if*/
      ((array___AbstractArray___add_t)CALL( variable2 /*module_names_to_import*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*module_names_to_import*/,  variable7 /*n*/) /*Array::add*/;
      variable8 = ((mmbuilder___PImport___visibility_level_t)CALL( variable6 /*i*/,COLOR_mmbuilder___PImport___visibility_level))( variable6 /*i*/) /*PImport::visibility_level*/;
      ((hash___HashMap_____braeq_t)CALL( variable3 /*module_visibility*/,COLOR_abstract_collection___Map_____braeq))( variable3 /*module_visibility*/,  variable7 /*n*/, variable8) /*HashMap::[]=*/;
    } else { /*if*/
      variable4 =  variable6 /*i*/ /*no_import=*/;
    }
    continue_36: while(0);
    ((list___ListIterator___next_t)CALL(variable5,COLOR_abstract_collection___Iterator___next))(variable5) /*ListIterator::next*/;
  }
  break_36: while(0);
  variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable4 /*no_import*/ ==  NIT_NULL /*null*/) || (( variable4 /*no_import*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*no_import*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*no_import*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*no_import*/,COLOR_kernel___Object_____eqeq))( variable4 /*no_import*/,  NIT_NULL /*null*/) /*PImport::==*/)))))));
  if (UNTAG_Bool(variable5)) { /*if*/
    variable5 = ((array___AbstractArray___is_empty_t)CALL( variable2 /*module_names_to_import*/,COLOR_abstract_collection___Collection___is_empty))( variable2 /*module_names_to_import*/) /*Array::is_empty*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable5)))) { /*if*/
      variable5 = NEW_string___String___init(); /*new String*/
      variable6 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
      variable7 = variable6;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
      variable8 = ((parser_prod___Prod___locate_t)CALL( variable4 /*no_import*/,COLOR_parser_prod___PNode___locate))( variable4 /*no_import*/) /*PImport::locate*/;
      variable9 = variable8;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable9) /*String::append*/;
      variable10 = NEW_string___String___with_native(BOX_NativeString(": Error: Top modules cannot import other modules."), TAG_Int(49)); /*new String*/
      variable11 = variable10;
      ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
      ((mmloader___ToolContext___error_t)CALL( variable0 /*tc*/,COLOR_mmloader___ToolContext___error))( variable0 /*tc*/, variable5) /*ToolContext::error*/;
    }
  } else { /*if*/
    variable5 = ((array___AbstractArray___is_empty_t)CALL( variable2 /*module_names_to_import*/,COLOR_abstract_collection___Collection___is_empty))( variable2 /*module_names_to_import*/) /*Array::is_empty*/;
    if (UNTAG_Bool(variable5)) { /*if*/
      if (once_bool_variable6_37) variable6 = once_value_variable6_37;
      else {
        variable6 = NEW_string___String___with_native(BOX_NativeString("standard"), TAG_Int(8)); /*new String*/
        variable6 = ((symbol___String___to_symbol_t)CALL(variable6,COLOR_symbol___String___to_symbol))(variable6) /*String::to_symbol*/;
        once_value_variable6_37 = variable6;
        once_bool_variable6_37 = true;
      }
      variable5 = variable6;
      ((array___AbstractArray___add_t)CALL( variable2 /*module_names_to_import*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*module_names_to_import*/,  variable5 /*stdname*/) /*Array::add*/;
      ((hash___HashMap_____braeq_t)CALL( variable3 /*module_visibility*/,COLOR_abstract_collection___Map_____braeq))( variable3 /*module_visibility*/,  variable5 /*stdname*/,  TAG_Int(1)) /*HashMap::[]=*/;
    }
  }
  ((mmloader___MMModule___import_supers_modules_t)CALL( variable1 /*mod*/,COLOR_mmloader___MMModule___import_supers_modules))( variable1 /*mod*/,  variable2 /*module_names_to_import*/) /*MMSrcModule::import_supers_modules*/;
  variable5 = ((array___AbstractArray___iterator_t)CALL( variable2 /*module_names_to_import*/,COLOR_abstract_collection___Collection___iterator))( variable2 /*module_names_to_import*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable6 = ((array___ArrayIterator___is_ok_t)CALL(variable5,COLOR_abstract_collection___Iterator___is_ok))(variable5) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable6)) break; /*for*/
    variable6 = ((array___ArrayIterator___item_t)CALL(variable5,COLOR_abstract_collection___Iterator___item))(variable5) /*ArrayIterator::item*/;
    variable8 = ((abstract_collection___CoupleMap_____bra_t)CALL( variable3 /*module_visibility*/,COLOR_abstract_collection___Map_____bra))( variable3 /*module_visibility*/,  variable6 /*mname*/) /*HashMap::[]*/;
    variable7 = variable8;
    variable9 = ((mmloader___ToolContext___get_module_t)CALL( variable0 /*tc*/,COLOR_mmloader___ToolContext___get_module))( variable0 /*tc*/,  variable6 /*mname*/,  variable1 /*mod*/) /*ToolContext::get_module*/;
    variable8 = variable9;
    ((abstractmetamodel___MMModule___add_super_module_t)CALL( variable1 /*mod*/,COLOR_abstractmetamodel___MMModule___add_super_module))( variable1 /*mod*/,  variable8 /*m*/,  variable7 /*level*/) /*MMSrcModule::add_super_module*/;
    continue_38: while(0);
    ((array___ArrayIterator___next_t)CALL(variable5,COLOR_abstract_collection___Iterator___next))(variable5) /*ArrayIterator::next*/;
  }
  break_38: while(0);
  tracehead = trace.prev;
  return;
}
void mmbuilder___APackagedecl___accept_class_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::APackagedecl::accept_class_builder (src/syntax//mmbuilder.nit:302,2--305:93)"};
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
  variable1 = ((parser_nodes___APackagedecl___n_id_t)CALL( self,COLOR_parser_nodes___APackagedecl___n_id))( self) /*APackagedecl::n_id*/;
  variable1 = ((syntax_base___Token___to_symbol_t)CALL(variable1,COLOR_syntax_base___Token___to_symbol))(variable1) /*TId::to_symbol*/;
  variable2 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*ClassBuilderVisitor::module*/;
  variable2 = ((abstractmetamodel___MMModule___name_t)CALL(variable2,COLOR_abstractmetamodel___MMModule___name))(variable2) /*MMSrcModule::name*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 == variable2) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1,variable2)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1, variable2) /*Symbol::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ((parser_nodes___APackagedecl___n_id_t)CALL( self,COLOR_parser_nodes___APackagedecl___n_id))( self) /*APackagedecl::n_id*/;
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("Error: Package name missmatch between "), TAG_Int(38)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*ClassBuilderVisitor::module*/;
    variable5 = ((abstractmetamodel___MMModule___name_t)CALL(variable5,COLOR_abstractmetamodel___MMModule___name))(variable5) /*MMSrcModule::name*/;
    variable6 = variable5;
    variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
    variable7 = NEW_string___String___with_native(BOX_NativeString(" and "), TAG_Int(5)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
    variable9 = ((parser_nodes___APackagedecl___n_id_t)CALL( self,COLOR_parser_nodes___APackagedecl___n_id))( self) /*APackagedecl::n_id*/;
    variable9 = ((syntax_base___Token___to_symbol_t)CALL(variable9,COLOR_syntax_base___Token___to_symbol))(variable9) /*TId::to_symbol*/;
    variable10 = variable9;
    variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable12) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/, variable1, variable2) /*ClassBuilderVisitor::error*/;
  }
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___PImport___module_name(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PImport::module_name (src/syntax//mmbuilder.nit:311,2--312:25)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method module_name called (src/syntax//mmbuilder.nit:311,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t mmbuilder___PImport___visibility_level(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PImport::visibility_level (src/syntax//mmbuilder.nit:314,2--315:27)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method visibility_level called (src/syntax//mmbuilder.nit:314,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t mmbuilder___AImport___module_name(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AImport::module_name (src/syntax//mmbuilder.nit:318,2--320:23)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___AImport___n_id_t)CALL( self,COLOR_parser_nodes___AImport___n_id))( self) /*AImport::n_id*/;
  variable0 = ((syntax_base___Token___to_symbol_t)CALL(variable0,COLOR_syntax_base___Token___to_symbol))(variable0) /*TId::to_symbol*/;
  goto return_label40;
  return_label40: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___AImport___visibility_level(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AImport::visibility_level (src/syntax//mmbuilder.nit:322,2--324:27)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___AImport___n_visibility_t)CALL( self,COLOR_parser_nodes___AImport___n_visibility))( self) /*AImport::n_visibility*/;
  variable0 = ((mmbuilder___PVisibility___level_t)CALL(variable0,COLOR_mmbuilder___PVisibility___level))(variable0) /*PVisibility::level*/;
  goto return_label41;
  return_label41: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___ANoImport___module_name(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::ANoImport::module_name (src/syntax//mmbuilder.nit:328,2--330:13)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  NIT_NULL /*null*/;
  goto return_label42;
  return_label42: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___PVisibility___level(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PVisibility::level (src/syntax//mmbuilder.nit:335,2--336:16)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method level called (src/syntax//mmbuilder.nit:335,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t mmbuilder___APublicVisibility___level(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::APublicVisibility::level (src/syntax//mmbuilder.nit:339,2--29)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(1);
  goto return_label43;
  return_label43: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___AProtectedVisibility___level(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AProtectedVisibility::level (src/syntax//mmbuilder.nit:342,2--29)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(2);
  goto return_label44;
  return_label44: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___APrivateVisibility___level(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::APrivateVisibility::level (src/syntax//mmbuilder.nit:345,2--29)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(3);
  goto return_label45;
  return_label45: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___AIntrudeVisibility___level(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AIntrudeVisibility::level (src/syntax//mmbuilder.nit:348,2--29)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(0);
  goto return_label46;
  return_label46: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___PClassdef___local_class(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PClassdef::local_class (src/syntax//mmbuilder.nit:353,2--50)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___PClassdef____local_class( self) /*PClassdef::_local_class*/;
}
val_t mmbuilder___PClassdef___name(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PClassdef::name (src/syntax//mmbuilder.nit:355,2--356:18)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method name called (src/syntax//mmbuilder.nit:355,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t mmbuilder___PClassdef___arity(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PClassdef::arity (src/syntax//mmbuilder.nit:358,2--359:28)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(0);
  goto return_label47;
  return_label47: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___PClassdef___visibility_level(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PClassdef::visibility_level (src/syntax//mmbuilder.nit:361,2--362:39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(1);
  goto return_label48;
  return_label48: while(false);
  tracehead = trace.prev;
  return variable0;
}
void mmbuilder___PClassdef___accept_class_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PClassdef::accept_class_builder (src/syntax//mmbuilder.nit:364,2--400:18)"};
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
  variable1 = NIT_NULL /*decl variable local_class*/;
  variable3 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*ClassBuilderVisitor::module*/;
  variable2 = variable3;
  variable4 = ((syntax_base___MMSrcModule___src_local_classes_t)CALL( variable2 /*mod*/,COLOR_syntax_base___MMSrcModule___src_local_classes))( variable2 /*mod*/) /*MMSrcModule::src_local_classes*/;
  variable3 = variable4;
  variable4 = ((mmbuilder___PClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*PClassdef::name*/;
  variable4 = ((abstract_collection___Map___has_key_t)CALL( variable3 /*local_classes*/,COLOR_abstract_collection___Map___has_key))( variable3 /*local_classes*/, variable4) /*Map::has_key*/;
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ((mmbuilder___PClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*PClassdef::name*/;
    variable4 = ((abstract_collection___Map_____bra_t)CALL( variable3 /*local_classes*/,COLOR_abstract_collection___Map_____bra))( variable3 /*local_classes*/, variable4) /*Map::[]*/;
    variable1 = variable4 /*local_class=*/;
    variable4 = TAG_Bool(( self==NIT_NULL) || VAL_ISA( self, COLOR_AClassdef, ID_AClassdef)) /*cast AClassdef*/;
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = NEW_string___String___init(); /*new String*/
      variable5 = NEW_string___String___with_native(BOX_NativeString("Error: A class "), TAG_Int(15)); /*new String*/
      variable6 = variable5;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
      variable7 = ((mmbuilder___PClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*PClassdef::name*/;
      variable8 = variable7;
      variable8 = ((string___String___to_s_t)CALL(variable8,COLOR_string___Object___to_s))(variable8) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable8) /*String::append*/;
      variable9 = NEW_string___String___with_native(BOX_NativeString(" is already defined at line "), TAG_Int(28)); /*new String*/
      variable10 = variable9;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
      variable11 = ((syntax_base___MMSrcLocalClass___nodes_t)CALL( variable1 /*local_class*/,COLOR_syntax_base___MMSrcLocalClass___nodes))( variable1 /*local_class*/) /*MMSrcLocalClass::nodes*/;
      variable11 = ((abstract_collection___IndexedCollection___first_t)CALL(variable11,COLOR_abstract_collection___Collection___first))(variable11) /*Array::first*/;
      variable11 = ((parser_prod___Prod___first_token_t)CALL(variable11,COLOR_parser_prod___Prod___first_token))(variable11) /*PClassdef::first_token*/;
      variable11 = ((lexer___Token___line_t)CALL(variable11,COLOR_lexer___Token___line))(variable11) /*Token::line*/;
      variable12 = variable11;
      variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
      variable13 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable14 = variable13;
      ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*ClassBuilderVisitor::error*/;
      goto return_label49;
    }
    variable4 = ((syntax_base___MMSrcLocalClass___nodes_t)CALL( variable1 /*local_class*/,COLOR_syntax_base___MMSrcLocalClass___nodes))( variable1 /*local_class*/) /*MMSrcLocalClass::nodes*/;
    ((array___AbstractArray___add_t)CALL(variable4,COLOR_abstract_collection___SimpleCollection___add))(variable4,  self) /*Array::add*/;
  } else { /*if*/
    variable4 = ((mmbuilder___PClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*PClassdef::name*/;
    variable5 = ((mmbuilder___PClassdef___arity_t)CALL( self,COLOR_mmbuilder___PClassdef___arity))( self) /*PClassdef::arity*/;
    variable6 = NEW_syntax_base___MMSrcLocalClass___init(variable4,  self, variable5); /*new MMSrcLocalClass*/
    variable4 = variable6;
    variable1 = variable4 /*local_class=*/;
    ((abstractmetamodel___MMModule___add_local_class_t)CALL( variable2 /*mod*/,COLOR_abstractmetamodel___MMModule___add_local_class))( variable2 /*mod*/,  variable1 /*local_class*/) /*MMSrcModule::add_local_class*/;
    variable4 = ((mmbuilder___PClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*PClassdef::name*/;
    ((abstract_collection___Map_____braeq_t)CALL( variable3 /*local_classes*/,COLOR_abstract_collection___Map_____braeq))( variable3 /*local_classes*/, variable4,  variable1 /*local_class*/) /*Map::[]=*/;
    variable5 = ((mmbuilder___PClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*PClassdef::name*/;
    variable5 = ((abstractmetamodel___MMModule___global_class_named_t)CALL( variable2 /*mod*/,COLOR_abstractmetamodel___MMModule___global_class_named))( variable2 /*mod*/, variable5) /*MMSrcModule::global_class_named*/;
    variable4 = variable5;
    variable5 = TAG_Bool(( variable4 /*g*/ ==  NIT_NULL /*null*/) || (( variable4 /*g*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*g*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*g*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*g*/,COLOR_kernel___Object_____eqeq))( variable4 /*g*/,  NIT_NULL /*null*/) /*MMGlobalClass::==*/)))));
    if (UNTAG_Bool(variable5)) { /*if*/
      ((abstractmetamodel___MMLocalClass___new_global_t)CALL( variable1 /*local_class*/,COLOR_abstractmetamodel___MMLocalClass___new_global))( variable1 /*local_class*/) /*MMSrcLocalClass::new_global*/;
      variable5 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable1 /*local_class*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable1 /*local_class*/) /*MMSrcLocalClass::global*/;
      variable4 = variable5 /*g=*/;
    } else { /*if*/
      ((abstractmetamodel___MMLocalClass___set_global_t)CALL( variable1 /*local_class*/,COLOR_abstractmetamodel___MMLocalClass___set_global))( variable1 /*local_class*/,  variable4 /*g*/) /*MMSrcLocalClass::set_global*/;
    }
  }
  ATTR_mmbuilder___PClassdef____local_class( self) /*PClassdef::_local_class*/ =  variable1 /*local_class*/;
  ((mmbuilder___ClassBuilderVisitor___local_class_arity__eq_t)CALL( variable0 /*v*/,COLOR_mmbuilder___ClassBuilderVisitor___local_class_arity__eq))( variable0 /*v*/,  TAG_Int(0)) /*ClassBuilderVisitor::local_class_arity=*/;
  variable4 = NEW_hash___HashMap___init(); /*new HashMap[Symbol, MMTypeFormalParameter]*/
  ((mmbuilder___ClassBuilderVisitor___formals__eq_t)CALL( variable0 /*v*/,COLOR_mmbuilder___ClassBuilderVisitor___formals__eq))( variable0 /*v*/, variable4) /*ClassBuilderVisitor::formals=*/;
  ((mmbuilder___PClassdef___accept_class_builder_t)CALL( self,COLOR_SUPER_mmbuilder___PClassdef___accept_class_builder))( self,  param0) /*super PClassdef::accept_class_builder*/;
  variable4 = ATTR_mmbuilder___PClassdef____local_class( self) /*PClassdef::_local_class*/;
  variable5 = ((mmbuilder___ClassBuilderVisitor___formals_t)CALL( variable0 /*v*/,COLOR_mmbuilder___ClassBuilderVisitor___formals))( variable0 /*v*/) /*ClassBuilderVisitor::formals*/;
  ((syntax_base___MMSrcLocalClass___formal_dict__eq_t)CALL(variable4,COLOR_syntax_base___MMSrcLocalClass___formal_dict__eq))(variable4, variable5) /*MMSrcLocalClass::formal_dict=*/;
  ((mmbuilder___ClassBuilderVisitor___formals__eq_t)CALL( variable0 /*v*/,COLOR_mmbuilder___ClassBuilderVisitor___formals__eq))( variable0 /*v*/,  NIT_NULL /*null*/) /*ClassBuilderVisitor::formals=*/;
  return_label49: while(false);
  tracehead = trace.prev;
  return;
}
void mmbuilder___PClassdef___accept_abs_syntax_visitor(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PClassdef::accept_abs_syntax_visitor (src/syntax//mmbuilder.nit:403,2--407:22)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_mmbuilder___PClassdef____local_class( self) /*PClassdef::_local_class*/;
  ((syntax_base___AbsSyntaxVisitor___local_class__eq_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class__eq))( variable0 /*v*/, variable1) /*AbsSyntaxVisitor::local_class=*/;
  ((mmbuilder___PClassdef___accept_abs_syntax_visitor_t)CALL( self,COLOR_SUPER_mmbuilder___PClassdef___accept_abs_syntax_visitor))( self,  param0) /*super PClassdef::accept_abs_syntax_visitor*/;
  ((syntax_base___AbsSyntaxVisitor___local_class__eq_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class__eq))( variable0 /*v*/,  NIT_NULL /*null*/) /*AbsSyntaxVisitor::local_class=*/;
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___PClasskind___is_interface(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PClasskind::is_interface (src/syntax//mmbuilder.nit:412,2--40)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(false);
  goto return_label51;
  return_label51: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___PClasskind___is_universal(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PClasskind::is_universal (src/syntax//mmbuilder.nit:413,2--40)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(false);
  goto return_label52;
  return_label52: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___PClasskind___is_abstract(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PClasskind::is_abstract (src/syntax//mmbuilder.nit:414,2--39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(false);
  goto return_label53;
  return_label53: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___AInterfaceClasskind___is_interface(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AInterfaceClasskind::is_interface (src/syntax//mmbuilder.nit:418,2--39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(true);
  goto return_label54;
  return_label54: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___AUniversalClasskind___is_universal(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AUniversalClasskind::is_universal (src/syntax//mmbuilder.nit:421,2--39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(true);
  goto return_label55;
  return_label55: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___AAbstractClasskind___is_abstract(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AAbstractClasskind::is_abstract (src/syntax//mmbuilder.nit:424,2--38)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Bool(true);
  goto return_label56;
  return_label56: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___AClassdef___name(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AClassdef::name (src/syntax//mmbuilder.nit:428,2--430:23)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___AClassdef___n_id_t)CALL( self,COLOR_parser_nodes___AClassdef___n_id))( self) /*AClassdef::n_id*/;
  variable0 = ((syntax_base___Token___to_symbol_t)CALL(variable0,COLOR_syntax_base___Token___to_symbol))(variable0) /*TClassid::to_symbol*/;
  goto return_label57;
  return_label57: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___AClassdef___arity(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AClassdef::arity (src/syntax//mmbuilder.nit:432,2--434:28)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___AClassdef___n_formaldefs_t)CALL( self,COLOR_parser_nodes___AClassdef___n_formaldefs))( self) /*AClassdef::n_formaldefs*/;
  variable0 = ((list___List___length_t)CALL(variable0,COLOR_abstract_collection___Collection___length))(variable0) /*List::length*/;
  goto return_label58;
  return_label58: while(false);
  tracehead = trace.prev;
  return variable0;
}
void mmbuilder___AClassdef___accept_class_verifier(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::AClassdef::accept_class_verifier (src/syntax//mmbuilder.nit:436,2--489:67)"};
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
  ((mmbuilder___AClassdef___accept_class_verifier_t)CALL( self,COLOR_SUPER_mmbuilder___AClassdef___accept_class_verifier))( self,  param0) /*super AClassdef::accept_class_verifier*/;
  variable2 = ATTR_mmbuilder___PClassdef____local_class( self) /*AClassdef::_local_class*/;
  variable2 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalClass___global))(variable2) /*MMSrcLocalClass::global*/;
  variable1 = variable2;
  variable2 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___intro))( variable1 /*glob*/) /*MMGlobalClass::intro*/;
  variable3 = ATTR_mmbuilder___PClassdef____local_class( self) /*AClassdef::_local_class*/;
  variable2 = TAG_Bool((variable2 == variable3) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2,variable3)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2, variable3) /*MMLocalClass::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((mmbuilder___AClassdef___visibility_level_t)CALL( self,COLOR_mmbuilder___PClassdef___visibility_level))( self) /*AClassdef::visibility_level*/;
    ((abstractmetamodel___MMGlobalClass___visibility_level__eq_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___visibility_level__eq))( variable1 /*glob*/, variable2) /*MMGlobalClass::visibility_level=*/;
    variable2 = ((parser_nodes___AClassdef___n_classkind_t)CALL( self,COLOR_parser_nodes___AClassdef___n_classkind))( self) /*AClassdef::n_classkind*/;
    variable2 = ((mmbuilder___PClasskind___is_interface_t)CALL(variable2,COLOR_mmbuilder___PClasskind___is_interface))(variable2) /*PClasskind::is_interface*/;
    ((abstractmetamodel___MMGlobalClass___is_interface__eq_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___is_interface__eq))( variable1 /*glob*/, variable2) /*MMGlobalClass::is_interface=*/;
    variable2 = ((parser_nodes___AClassdef___n_classkind_t)CALL( self,COLOR_parser_nodes___AClassdef___n_classkind))( self) /*AClassdef::n_classkind*/;
    variable2 = ((mmbuilder___PClasskind___is_abstract_t)CALL(variable2,COLOR_mmbuilder___PClasskind___is_abstract))(variable2) /*PClasskind::is_abstract*/;
    ((abstractmetamodel___MMGlobalClass___is_abstract__eq_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___is_abstract__eq))( variable1 /*glob*/, variable2) /*MMGlobalClass::is_abstract=*/;
    variable2 = ((parser_nodes___AClassdef___n_classkind_t)CALL( self,COLOR_parser_nodes___AClassdef___n_classkind))( self) /*AClassdef::n_classkind*/;
    variable2 = ((mmbuilder___PClasskind___is_universal_t)CALL(variable2,COLOR_mmbuilder___PClasskind___is_universal))(variable2) /*PClasskind::is_universal*/;
    ((abstractmetamodel___MMGlobalClass___is_universal__eq_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___is_universal__eq))( variable1 /*glob*/, variable2) /*MMGlobalClass::is_universal=*/;
    variable2 = ((parser_nodes___AClassdef___n_kwredef_t)CALL( self,COLOR_parser_nodes___AClassdef___n_kwredef))( self) /*AClassdef::n_kwredef*/;
    variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*TKwredef::==*/)))))));
    if (UNTAG_Bool(variable2)) { /*if*/
      variable2 = NEW_string___String___init(); /*new String*/
      variable3 = NEW_string___String___with_native(BOX_NativeString("Redef error: No class "), TAG_Int(22)); /*new String*/
      variable4 = variable3;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
      variable5 = ((mmbuilder___AClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*AClassdef::name*/;
      variable6 = variable5;
      variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
      variable7 = NEW_string___String___with_native(BOX_NativeString(" is imported. Remove the redef keyword to define a new class."), TAG_Int(61)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*ClassVerifierVisitor::error*/;
    }
    variable2 = ATTR_mmbuilder___PClassdef____local_class( self) /*AClassdef::_local_class*/;
    variable2 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalClass___cshe))(variable2) /*MMSrcLocalClass::cshe*/;
    variable2 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable2,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable2) /*PartialOrderElement::direct_greaters*/;
    variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
    while (true) { /*for*/
      variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable3)) break; /*for*/
      variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
      variable5 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable3 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable3 /*c*/) /*MMLocalClass::global*/;
      variable4 = variable5;
      variable5 = ((abstractmetamodel___MMGlobalClass___is_interface_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___is_interface))( variable1 /*glob*/) /*MMGlobalClass::is_interface*/;
      if (UNTAG_Bool(variable5)) { /*if*/
        variable5 = ((abstractmetamodel___MMGlobalClass___is_universal_t)CALL( variable4 /*cg*/,COLOR_abstractmetamodel___MMGlobalClass___is_universal))( variable4 /*cg*/) /*MMGlobalClass::is_universal*/;
        if (UNTAG_Bool(variable5)) { /*if*/
          variable5 = NEW_string___String___init(); /*new String*/
          variable6 = NEW_string___String___with_native(BOX_NativeString("Special error: Interface "), TAG_Int(25)); /*new String*/
          variable7 = variable6;
          ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
          variable8 = ((mmbuilder___AClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*AClassdef::name*/;
          variable9 = variable8;
          variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
          ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable9) /*String::append*/;
          variable10 = NEW_string___String___with_native(BOX_NativeString(" try to specialise universal class "), TAG_Int(35)); /*new String*/
          variable11 = variable10;
          ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
          variable12 = ((abstractmetamodel___MMLocalClass___name_t)CALL( variable3 /*c*/,COLOR_abstractmetamodel___MMLocalClass___name))( variable3 /*c*/) /*MMLocalClass::name*/;
          variable13 = variable12;
          variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
          ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
          variable14 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
          variable15 = variable14;
          ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable15) /*String::append*/;
          ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable5) /*ClassVerifierVisitor::error*/;
        } else { /*if*/
          variable5 = ((abstractmetamodel___MMGlobalClass___is_interface_t)CALL( variable4 /*cg*/,COLOR_abstractmetamodel___MMGlobalClass___is_interface))( variable4 /*cg*/) /*MMGlobalClass::is_interface*/;
          if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable5)))) { /*if*/
            variable5 = NEW_string___String___init(); /*new String*/
            variable6 = NEW_string___String___with_native(BOX_NativeString("Special error: Interface "), TAG_Int(25)); /*new String*/
            variable7 = variable6;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
            variable8 = ((mmbuilder___AClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*AClassdef::name*/;
            variable9 = variable8;
            variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable9) /*String::append*/;
            variable10 = NEW_string___String___with_native(BOX_NativeString(" try to specialise class "), TAG_Int(25)); /*new String*/
            variable11 = variable10;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
            variable12 = ((abstractmetamodel___MMLocalClass___name_t)CALL( variable3 /*c*/,COLOR_abstractmetamodel___MMLocalClass___name))( variable3 /*c*/) /*MMLocalClass::name*/;
            variable13 = variable12;
            variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
            variable14 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
            variable15 = variable14;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable15) /*String::append*/;
            ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable5) /*ClassVerifierVisitor::error*/;
          }
        }
      } else { /*if*/
        variable5 = ((abstractmetamodel___MMGlobalClass___is_universal_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___is_universal))( variable1 /*glob*/) /*MMGlobalClass::is_universal*/;
        if (UNTAG_Bool(variable5)) { /*if*/
          variable5 = ((abstractmetamodel___MMGlobalClass___is_interface_t)CALL( variable4 /*cg*/,COLOR_abstractmetamodel___MMGlobalClass___is_interface))( variable4 /*cg*/) /*MMGlobalClass::is_interface*/;
          variable5 =  TAG_Bool(!UNTAG_Bool(variable5));
          if (UNTAG_Bool(variable5)) { /* and */
            variable5 = ((abstractmetamodel___MMGlobalClass___is_universal_t)CALL( variable4 /*cg*/,COLOR_abstractmetamodel___MMGlobalClass___is_universal))( variable4 /*cg*/) /*MMGlobalClass::is_universal*/;
            variable5 =  TAG_Bool(!UNTAG_Bool(variable5));
          }
          if (UNTAG_Bool(variable5)) { /*if*/
            variable5 = NEW_string___String___init(); /*new String*/
            variable6 = NEW_string___String___with_native(BOX_NativeString("Special error: Universal class "), TAG_Int(31)); /*new String*/
            variable7 = variable6;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
            variable8 = ((mmbuilder___AClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*AClassdef::name*/;
            variable9 = variable8;
            variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable9) /*String::append*/;
            variable10 = NEW_string___String___with_native(BOX_NativeString(" try to specialise class "), TAG_Int(25)); /*new String*/
            variable11 = variable10;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
            variable12 = ((abstractmetamodel___MMLocalClass___name_t)CALL( variable3 /*c*/,COLOR_abstractmetamodel___MMLocalClass___name))( variable3 /*c*/) /*MMLocalClass::name*/;
            variable13 = variable12;
            variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
            variable14 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
            variable15 = variable14;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable15) /*String::append*/;
            ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable5) /*ClassVerifierVisitor::error*/;
          }
        } else { /*if*/
          variable5 = ((abstractmetamodel___MMGlobalClass___is_universal_t)CALL( variable4 /*cg*/,COLOR_abstractmetamodel___MMGlobalClass___is_universal))( variable4 /*cg*/) /*MMGlobalClass::is_universal*/;
          if (UNTAG_Bool(variable5)) { /*if*/
            variable5 = NEW_string___String___init(); /*new String*/
            variable6 = NEW_string___String___with_native(BOX_NativeString("Special error: Class "), TAG_Int(21)); /*new String*/
            variable7 = variable6;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable7) /*String::append*/;
            variable8 = ((mmbuilder___AClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*AClassdef::name*/;
            variable9 = variable8;
            variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable9) /*String::append*/;
            variable10 = NEW_string___String___with_native(BOX_NativeString(" try to specialise universal class "), TAG_Int(35)); /*new String*/
            variable11 = variable10;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable11) /*String::append*/;
            variable12 = ((abstractmetamodel___MMLocalClass___name_t)CALL( variable3 /*c*/,COLOR_abstractmetamodel___MMLocalClass___name))( variable3 /*c*/) /*MMLocalClass::name*/;
            variable13 = variable12;
            variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable13) /*String::append*/;
            variable14 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
            variable15 = variable14;
            ((string___String___append_t)CALL(variable5,COLOR_abstract_collection___IndexedCollection___append))(variable5, variable15) /*String::append*/;
            ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable5) /*ClassVerifierVisitor::error*/;
          }
        }
      }
      continue_60: while(0);
      ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
    }
    break_60: while(0);
    goto return_label59;
  }
  variable2 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*ClassVerifierVisitor::module*/;
  ((syntax_base___MMGlobalClass___check_visibility_t)CALL( variable1 /*glob*/,COLOR_syntax_base___MMGlobalClass___check_visibility))( variable1 /*glob*/,  variable0 /*v*/,  self, variable2) /*MMGlobalClass::check_visibility*/;
  variable2 = ((parser_nodes___AClassdef___n_kwredef_t)CALL( self,COLOR_parser_nodes___AClassdef___n_kwredef))( self) /*AClassdef::n_kwredef*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*TKwredef::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("Redef error: "), TAG_Int(13)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 = ((mmbuilder___AClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*AClassdef::name*/;
    variable6 = variable5;
    variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
    variable7 = NEW_string___String___with_native(BOX_NativeString(" is an imported class. Add the redef keyword to refine it."), TAG_Int(58)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*ClassVerifierVisitor::error*/;
    goto return_label59;
  }
  variable2 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___intro))( variable1 /*glob*/) /*MMGlobalClass::intro*/;
  variable2 = ((abstractmetamodel___MMLocalClass___arity_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalClass___arity))(variable2) /*MMLocalClass::arity*/;
  variable3 = ATTR_mmbuilder___PClassdef____local_class( self) /*AClassdef::_local_class*/;
  variable3 = ((abstractmetamodel___MMLocalClass___arity_t)CALL(variable3,COLOR_abstractmetamodel___MMLocalClass___arity))(variable3) /*MMSrcLocalClass::arity*/;
  variable2 = TAG_Bool((variable2)!=(variable3));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("Redef error: Formal parameter arity missmatch; got "), TAG_Int(51)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 = ATTR_mmbuilder___PClassdef____local_class( self) /*AClassdef::_local_class*/;
    variable5 = ((abstractmetamodel___MMLocalClass___arity_t)CALL(variable5,COLOR_abstractmetamodel___MMLocalClass___arity))(variable5) /*MMSrcLocalClass::arity*/;
    variable6 = variable5;
    variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
    variable7 = NEW_string___String___with_native(BOX_NativeString(", expected "), TAG_Int(11)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
    variable9 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___intro))( variable1 /*glob*/) /*MMGlobalClass::intro*/;
    variable9 = ((abstractmetamodel___MMLocalClass___arity_t)CALL(variable9,COLOR_abstractmetamodel___MMLocalClass___arity))(variable9) /*MMLocalClass::arity*/;
    variable10 = variable9;
    variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable12) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*ClassVerifierVisitor::error*/;
  }
  variable2 = ((abstractmetamodel___MMGlobalClass___is_interface_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___is_interface))( variable1 /*glob*/) /*MMGlobalClass::is_interface*/;
  variable2 =  TAG_Bool(!UNTAG_Bool(variable2));
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ((parser_nodes___AClassdef___n_classkind_t)CALL( self,COLOR_parser_nodes___AClassdef___n_classkind))( self) /*AClassdef::n_classkind*/;
    variable2 = ((mmbuilder___PClasskind___is_interface_t)CALL(variable2,COLOR_mmbuilder___PClasskind___is_interface))(variable2) /*PClasskind::is_interface*/;
  }
  variable3 = variable2;
  if (!UNTAG_Bool(variable3)) { /* or */
    variable3 = ((abstractmetamodel___MMGlobalClass___is_abstract_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___is_abstract))( variable1 /*glob*/) /*MMGlobalClass::is_abstract*/;
    variable3 =  TAG_Bool(!UNTAG_Bool(variable3));
  }
  variable2 = variable3;
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = ((parser_nodes___AClassdef___n_classkind_t)CALL( self,COLOR_parser_nodes___AClassdef___n_classkind))( self) /*AClassdef::n_classkind*/;
    variable3 = ((mmbuilder___PClasskind___is_abstract_t)CALL(variable3,COLOR_mmbuilder___PClasskind___is_abstract))(variable3) /*PClasskind::is_abstract*/;
  }
  variable2 = variable3;
  variable3 = variable2;
  if (!UNTAG_Bool(variable3)) { /* or */
    variable3 = ((abstractmetamodel___MMGlobalClass___is_universal_t)CALL( variable1 /*glob*/,COLOR_abstractmetamodel___MMGlobalClass___is_universal))( variable1 /*glob*/) /*MMGlobalClass::is_universal*/;
    variable3 =  TAG_Bool(!UNTAG_Bool(variable3));
  }
  variable2 = variable3;
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = ((parser_nodes___AClassdef___n_classkind_t)CALL( self,COLOR_parser_nodes___AClassdef___n_classkind))( self) /*AClassdef::n_classkind*/;
    variable3 = ((mmbuilder___PClasskind___is_universal_t)CALL(variable3,COLOR_mmbuilder___PClasskind___is_universal))(variable3) /*PClasskind::is_universal*/;
  }
  variable2 = variable3;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("Redef error: cannot change kind of class "), TAG_Int(41)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 = ((mmbuilder___AClassdef___name_t)CALL( self,COLOR_mmbuilder___PClassdef___name))( self) /*AClassdef::name*/;
    variable6 = variable5;
    variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
    variable7 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*ClassVerifierVisitor::error*/;
  }
  return_label59: while(false);
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___AClassdef___visibility_level(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AClassdef::visibility_level (src/syntax//mmbuilder.nit:493,2--495:27)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___AClassdef___n_visibility_t)CALL( self,COLOR_parser_nodes___AClassdef___n_visibility))( self) /*AClassdef::n_visibility*/;
  variable0 = ((mmbuilder___PVisibility___level_t)CALL(variable0,COLOR_mmbuilder___PVisibility___level))(variable0) /*PVisibility::level*/;
  goto return_label61;
  return_label61: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___AMainClassdef___name(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AMainClassdef::name (src/syntax//mmbuilder.nit:500,2--502:29)"};
  val_t variable0;
  static val_t once_value_variable0_63; static int once_bool_variable0_63;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_63) variable0 = once_value_variable0_63;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("Sys"), TAG_Int(3)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_63 = variable0;
    once_bool_variable0_63 = true;
  }
  goto return_label62;
  return_label62: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___ATopClassdef___name(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::ATopClassdef::name (src/syntax//mmbuilder.nit:507,2--509:32)"};
  val_t variable0;
  static val_t once_value_variable0_65; static int once_bool_variable0_65;
  trace.prev = tracehead; tracehead = &trace;
  if (once_bool_variable0_65) variable0 = once_value_variable0_65;
  else {
    variable0 = NEW_string___String___with_native(BOX_NativeString("Object"), TAG_Int(6)); /*new String*/
    variable0 = ((symbol___String___to_symbol_t)CALL(variable0,COLOR_symbol___String___to_symbol))(variable0) /*String::to_symbol*/;
    once_value_variable0_65 = variable0;
    once_bool_variable0_65 = true;
  }
  goto return_label64;
  return_label64: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t mmbuilder___MMSrcTypeFormalParameter___node(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::MMSrcTypeFormalParameter::node (src/syntax//mmbuilder.nit:515,2--516:32)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___MMSrcTypeFormalParameter____node( self) /*MMSrcTypeFormalParameter::_node*/;
}
void mmbuilder___MMSrcTypeFormalParameter___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table) {
  struct trace_t trace = {NULL, "mmbuilder::MMSrcTypeFormalParameter::init (src/syntax//mmbuilder.nit:518,2--521:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 =  param3;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcTypeFormalParameter].i]) return;
  ((genericity___MMTypeFormalParameter___init_t)CALL( self,COLOR_genericity___MMTypeFormalParameter___init))( self,  variable0 /*name*/,  variable1 /*pos*/,  variable2 /*local_class*/, init_table /*YYY*/) /*MMTypeFormalParameter::init*/;
  ATTR_mmbuilder___MMSrcTypeFormalParameter____node( self) /*MMSrcTypeFormalParameter::_node*/ =  variable3 /*n*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSrcTypeFormalParameter].i] = 1;
  tracehead = trace.prev;
  return;
}
void mmbuilder___AFormaldef___accept_class_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::AFormaldef::accept_class_builder (src/syntax//mmbuilder.nit:529,2--537:7)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((parser_nodes___AFormaldef___n_id_t)CALL( self,COLOR_parser_nodes___AFormaldef___n_id))( self) /*AFormaldef::n_id*/;
  variable2 = ((syntax_base___Token___to_symbol_t)CALL(variable2,COLOR_syntax_base___Token___to_symbol))(variable2) /*TClassid::to_symbol*/;
  variable1 = variable2;
  variable3 = ((mmbuilder___ClassBuilderVisitor___local_class_arity_t)CALL( variable0 /*v*/,COLOR_mmbuilder___ClassBuilderVisitor___local_class_arity))( variable0 /*v*/) /*ClassBuilderVisitor::local_class_arity*/;
  variable4 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*ClassBuilderVisitor::local_class*/;
  variable5 = NEW_mmbuilder___MMSrcTypeFormalParameter___init( variable1 /*name*/, variable3, variable4,  self); /*new MMSrcTypeFormalParameter*/
  variable3 = variable5;
  variable2 = variable3;
  ATTR_mmbuilder___AFormaldef____formal( self) /*AFormaldef::_formal*/ =  variable2 /*formal_type*/;
  variable3 = ((mmbuilder___ClassBuilderVisitor___local_class_arity_t)CALL( variable0 /*v*/,COLOR_mmbuilder___ClassBuilderVisitor___local_class_arity))( variable0 /*v*/) /*ClassBuilderVisitor::local_class_arity*/;
  variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( TAG_Int(1)));
  ((mmbuilder___ClassBuilderVisitor___local_class_arity__eq_t)CALL( variable0 /*v*/,COLOR_mmbuilder___ClassBuilderVisitor___local_class_arity__eq))( variable0 /*v*/, variable3) /*ClassBuilderVisitor::local_class_arity=*/;
  variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*ClassBuilderVisitor::local_class*/;
  ((genericity___MMLocalClass___register_formal_t)CALL(variable3,COLOR_genericity___MMLocalClass___register_formal))(variable3,  variable2 /*formal_type*/) /*MMSrcLocalClass::register_formal*/;
  variable3 = ((mmbuilder___ClassBuilderVisitor___formals_t)CALL( variable0 /*v*/,COLOR_mmbuilder___ClassBuilderVisitor___formals))( variable0 /*v*/) /*ClassBuilderVisitor::formals*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable3,COLOR_abstract_collection___Map_____braeq))(variable3,  variable1 /*name*/,  variable2 /*formal_type*/) /*Map::[]=*/;
  ((mmbuilder___AFormaldef___accept_class_builder_t)CALL( self,COLOR_SUPER_mmbuilder___AFormaldef___accept_class_builder))( self,  param0) /*super AFormaldef::accept_class_builder*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___AFormaldef___accept_class_verifier(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::AFormaldef::accept_class_verifier (src/syntax//mmbuilder.nit:540,2--558:119)"};
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
  ((mmbuilder___AFormaldef___accept_class_verifier_t)CALL( self,COLOR_SUPER_mmbuilder___AFormaldef___accept_class_verifier))( self,  param0) /*super AFormaldef::accept_class_verifier*/;
  variable2 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*ClassVerifierVisitor::local_class*/;
  variable1 = variable2;
  variable3 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable1 /*c*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable1 /*c*/) /*MMSrcLocalClass::global*/;
  variable3 = ((abstractmetamodel___MMGlobalClass___intro_t)CALL(variable3,COLOR_abstractmetamodel___MMGlobalClass___intro))(variable3) /*MMGlobalClass::intro*/;
  variable2 = variable3;
  variable3 = TAG_Bool(( variable1 /*c*/ ==  variable2 /*o*/) || (( variable1 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*c*/, variable2 /*o*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*c*/,COLOR_kernel___Object_____eqeq))( variable1 /*c*/,  variable2 /*o*/) /*MMSrcLocalClass::==*/)))));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = ((parser_nodes___AFormaldef___n_type_t)CALL( self,COLOR_parser_nodes___AFormaldef___n_type))( self) /*AFormaldef::n_type*/;
    variable3 = TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*PType::==*/)))));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable3 = ATTR_mmbuilder___AFormaldef____formal( self) /*AFormaldef::_formal*/;
      variable4 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*ClassVerifierVisitor::module*/;
      variable4 = ((inheritance___MMModule___type_any_t)CALL(variable4,COLOR_inheritance___MMModule___type_any))(variable4) /*MMSrcModule::type_any*/;
      ((genericity___MMTypeFormalParameter___bound__eq_t)CALL(variable3,COLOR_genericity___MMTypeFormalParameter___bound__eq))(variable3, variable4) /*MMSrcTypeFormalParameter::bound=*/;
    } else { /*if*/
      variable3 = ATTR_mmbuilder___AFormaldef____formal( self) /*AFormaldef::_formal*/;
      variable4 = ((parser_nodes___AFormaldef___n_type_t)CALL( self,COLOR_parser_nodes___AFormaldef___n_type))( self) /*AFormaldef::n_type*/;
      variable4 = ((syntax_base___PType___get_stype_t)CALL(variable4,COLOR_syntax_base___PType___get_stype))(variable4,  variable0 /*v*/) /*PType::get_stype*/;
      ((genericity___MMTypeFormalParameter___bound__eq_t)CALL(variable3,COLOR_genericity___MMTypeFormalParameter___bound__eq))(variable3, variable4) /*MMSrcTypeFormalParameter::bound=*/;
    }
  } else { /*if*/
    variable4 = ATTR_mmbuilder___AFormaldef____formal( self) /*AFormaldef::_formal*/;
    variable4 = ((genericity___MMTypeFormalParameter___position_t)CALL(variable4,COLOR_genericity___MMTypeFormalParameter___position))(variable4) /*MMSrcTypeFormalParameter::position*/;
    variable4 = ((genericity___MMLocalClass___get_formal_t)CALL( variable2 /*o*/,COLOR_genericity___MMLocalClass___get_formal))( variable2 /*o*/, variable4) /*MMLocalClass::get_formal*/;
    variable4 = ((type_formal___MMTypeFormal___bound_t)CALL(variable4,COLOR_type_formal___MMTypeFormal___bound))(variable4) /*MMTypeFormalParameter::bound*/;
    variable5 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*ClassVerifierVisitor::module*/;
    variable4 = ((static_type___MMType___for_module_t)CALL(variable4,COLOR_static_type___MMType___for_module))(variable4, variable5) /*MMType::for_module*/;
    variable3 = variable4;
    variable4 = ((parser_nodes___AFormaldef___n_type_t)CALL( self,COLOR_parser_nodes___AFormaldef___n_type))( self) /*AFormaldef::n_type*/;
    variable4 = TAG_Bool((variable4 ==  NIT_NULL /*null*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  NIT_NULL /*null*/) /*PType::==*/)))));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = ATTR_mmbuilder___AFormaldef____formal( self) /*AFormaldef::_formal*/;
      ((genericity___MMTypeFormalParameter___bound__eq_t)CALL(variable4,COLOR_genericity___MMTypeFormalParameter___bound__eq))(variable4,  variable3 /*ob*/) /*MMSrcTypeFormalParameter::bound=*/;
    } else { /*if*/
      variable4 = ATTR_mmbuilder___AFormaldef____formal( self) /*AFormaldef::_formal*/;
      variable5 = ((parser_nodes___AFormaldef___n_type_t)CALL( self,COLOR_parser_nodes___AFormaldef___n_type))( self) /*AFormaldef::n_type*/;
      variable5 = ((syntax_base___PType___get_stype_t)CALL(variable5,COLOR_syntax_base___PType___get_stype))(variable5,  variable0 /*v*/) /*PType::get_stype*/;
      ((genericity___MMTypeFormalParameter___bound__eq_t)CALL(variable4,COLOR_genericity___MMTypeFormalParameter___bound__eq))(variable4, variable5) /*MMSrcTypeFormalParameter::bound=*/;
      variable4 = ATTR_mmbuilder___AFormaldef____formal( self) /*AFormaldef::_formal*/;
      variable4 = ((type_formal___MMTypeFormal___bound_t)CALL(variable4,COLOR_type_formal___MMTypeFormal___bound))(variable4) /*MMSrcTypeFormalParameter::bound*/;
      variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  variable3 /*ob*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable3 /*ob*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable3 /*ob*/) /*MMType::==*/)))))));
      if (UNTAG_Bool(variable4)) { /*if*/
        variable4 = NEW_string___String___init(); /*new String*/
        variable5 = NEW_string___String___with_native(BOX_NativeString("Redef error: Cannot change formal parameter type of class "), TAG_Int(58)); /*new String*/
        variable6 = variable5;
        ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
        variable7 =  variable1 /*c*/;
        variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
        ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
        variable8 = NEW_string___String___with_native(BOX_NativeString("; got "), TAG_Int(6)); /*new String*/
        variable9 = variable8;
        ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
        variable10 = ATTR_mmbuilder___AFormaldef____formal( self) /*AFormaldef::_formal*/;
        variable10 = ((type_formal___MMTypeFormal___bound_t)CALL(variable10,COLOR_type_formal___MMTypeFormal___bound))(variable10) /*MMSrcTypeFormalParameter::bound*/;
        variable11 = variable10;
        variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
        ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable11) /*String::append*/;
        variable12 = NEW_string___String___with_native(BOX_NativeString(", expected "), TAG_Int(11)); /*new String*/
        variable13 = variable12;
        ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable13) /*String::append*/;
        variable14 =  variable3 /*ob*/;
        variable14 = ((string___String___to_s_t)CALL(variable14,COLOR_string___Object___to_s))(variable14) /*String::to_s*/;
        ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable14) /*String::append*/;
        variable15 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
        variable16 = variable15;
        ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable16) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*ClassVerifierVisitor::error*/;
      }
    }
  }
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___ASuperclass___ancestor(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::ASuperclass::ancestor (src/syntax//mmbuilder.nit:566,2--39)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___ASuperclass____ancestor( self) /*ASuperclass::_ancestor*/;
}
void mmbuilder___ASuperclass___accept_class_specialization_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ASuperclass::accept_class_specialization_builder (src/syntax//mmbuilder.nit:568,2--574:42)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___ASuperclass___accept_class_specialization_builder_t)CALL( self,COLOR_SUPER_mmbuilder___ASuperclass___accept_class_specialization_builder))( self,  param0) /*super ASuperclass::accept_class_specialization_builder*/;
  variable2 = ((parser_nodes___ASuperclass___n_type_t)CALL( self,COLOR_parser_nodes___ASuperclass___n_type))( self) /*ASuperclass::n_type*/;
  variable2 = ((syntax_base___PType___get_local_class_t)CALL(variable2,COLOR_syntax_base___PType___get_local_class))(variable2,  variable0 /*v*/) /*PType::get_local_class*/;
  variable1 = variable2;
  variable3 = NEW_mmbuilder___MMSrcAncestor___init( self,  variable1 /*c*/); /*new MMSrcAncestor*/
  variable2 = variable3;
  ATTR_mmbuilder___ASuperclass____ancestor( self) /*ASuperclass::_ancestor*/ =  variable2 /*ancestor*/;
  variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*ClassSpecializationBuilderVisitor::local_class*/;
  ((inheritance___MMLocalClass___add_direct_parent_t)CALL(variable3,COLOR_inheritance___MMLocalClass___add_direct_parent))(variable3,  variable2 /*ancestor*/) /*MMSrcLocalClass::add_direct_parent*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ASuperclass___accept_class_ancestor_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ASuperclass::accept_class_ancestor_builder (src/syntax//mmbuilder.nit:577,2--581:46)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___ASuperclass___accept_class_ancestor_builder_t)CALL( self,COLOR_SUPER_mmbuilder___ASuperclass___accept_class_ancestor_builder))( self,  param0) /*super ASuperclass::accept_class_ancestor_builder*/;
  variable1 = ATTR_mmbuilder___ASuperclass____ancestor( self) /*ASuperclass::_ancestor*/;
  variable2 = ((parser_nodes___ASuperclass___n_type_t)CALL( self,COLOR_parser_nodes___ASuperclass___n_type))( self) /*ASuperclass::n_type*/;
  variable2 = ((syntax_base___PType___get_unchecked_stype_t)CALL(variable2,COLOR_syntax_base___PType___get_unchecked_stype))(variable2,  variable0 /*v*/) /*PType::get_unchecked_stype*/;
  ((static_type___MMAncestor___stype__eq_t)CALL(variable1,COLOR_static_type___MMAncestor___stype__eq))(variable1, variable2) /*MMSrcAncestor::stype=*/;
  variable1 = ATTR_mmbuilder___ASuperclass____ancestor( self) /*ASuperclass::_ancestor*/;
  variable2 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*ClassAncestorBuilder::local_class*/;
  variable2 = ((genericity___MMLocalClass___get_type_t)CALL(variable2,COLOR_static_type___MMLocalClass___get_type))(variable2) /*MMSrcLocalClass::get_type*/;
  ((static_type___MMAncestor___inheriter__eq_t)CALL(variable1,COLOR_static_type___MMAncestor___inheriter__eq))(variable1, variable2) /*MMSrcAncestor::inheriter=*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ASuperclass___accept_class_verifier(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ASuperclass::accept_class_verifier (src/syntax//mmbuilder.nit:584,2--587:24)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___ASuperclass___accept_class_verifier_t)CALL( self,COLOR_SUPER_mmbuilder___ASuperclass___accept_class_verifier))( self,  param0) /*super ASuperclass::accept_class_verifier*/;
  variable1 = ((parser_nodes___ASuperclass___n_type_t)CALL( self,COLOR_parser_nodes___ASuperclass___n_type))( self) /*ASuperclass::n_type*/;
  ((syntax_base___PType___check_conform_t)CALL(variable1,COLOR_syntax_base___PType___check_conform))(variable1,  variable0 /*v*/) /*PType::check_conform*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PPropdef___process_and_check(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "mmbuilder::PPropdef::process_and_check (src/syntax//mmbuilder.nit:592,2--603:58)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 =  param3;
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*prop*/) /*MMSrcLocalProperty::global*/;
  variable4 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL(variable4,COLOR_abstractmetamodel___MMGlobalProperty___intro))(variable4) /*MMGlobalProperty::intro*/;
  variable4 = TAG_Bool((variable4 ==  variable1 /*prop*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable1 /*prop*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable1 /*prop*/) /*MMConcreteProperty::==*/)))));
  if (UNTAG_Bool(variable4)) { /*if*/
    ((mmbuilder___PPropdef___do_and_check_intro_t)CALL( self,COLOR_mmbuilder___PPropdef___do_and_check_intro))( self,  variable0 /*v*/,  variable1 /*prop*/,  variable2 /*has_redef*/,  variable3 /*visibility_level*/) /*PPropdef::do_and_check_intro*/;
  } else { /*if*/
    ((mmbuilder___PPropdef___do_and_check_redef_t)CALL( self,COLOR_mmbuilder___PPropdef___do_and_check_redef))( self,  variable0 /*v*/,  variable1 /*prop*/,  variable2 /*has_redef*/,  variable3 /*visibility_level*/) /*PPropdef::do_and_check_redef*/;
  }
  tracehead = trace.prev;
  return;
}
void mmbuilder___PPropdef___do_and_check_intro(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "mmbuilder::PPropdef::do_and_check_intro (src/syntax//mmbuilder.nit:607,2--643:84)"};
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
  variable5 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*prop*/) /*MMSrcLocalProperty::global*/;
  variable4 = variable5;
  variable6 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
  variable6 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable6,COLOR_abstractmetamodel___MMLocalClass___global))(variable6) /*MMLocalClass::global*/;
  variable5 = variable6;
  variable6 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyVerifierVisitor::local_class*/;
  variable6 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable6,COLOR_abstractmetamodel___MMLocalClass___global))(variable6) /*MMSrcLocalClass::global*/;
  variable6 = ((abstractmetamodel___MMGlobalClass___visibility_level_t)CALL(variable6,COLOR_abstractmetamodel___MMGlobalClass___visibility_level))(variable6) /*MMGlobalClass::visibility_level*/;
  variable6 = TAG_Bool(UNTAG_Int(variable6)>=UNTAG_Int( TAG_Int(3)));
  if (UNTAG_Bool(variable6)) { /*if*/
    variable3 =  TAG_Int(3) /*visibility_level=*/;
  }
  ((abstractmetamodel___MMGlobalProperty___visibility_level__eq_t)CALL( variable4 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___visibility_level__eq))( variable4 /*glob*/,  variable3 /*visibility_level*/) /*MMGlobalProperty::visibility_level=*/;
  variable6 =  variable2 /*has_redef*/;
  if (UNTAG_Bool(variable6)) { /* and */
    variable6 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL( variable4 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___is_init))( variable4 /*glob*/) /*MMGlobalProperty::is_init*/;
    variable6 =  TAG_Bool(!UNTAG_Bool(variable6));
  }
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_string___String___init(); /*new String*/
    variable7 = NEW_string___String___with_native(BOX_NativeString("Error: No property "), TAG_Int(19)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
    variable9 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
    variable10 = variable9;
    variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
    variable13 =  variable1 /*prop*/;
    variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable13) /*String::append*/;
    variable14 = NEW_string___String___with_native(BOX_NativeString(" is inherited. Remove the redef keyword to define a new property."), TAG_Int(65)); /*new String*/
    variable15 = variable14;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable6) /*PropertyVerifierVisitor::error*/;
  }
  variable6 = ((abstractmetamodel___MMGlobalProperty___is_attribute_t)CALL( variable4 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___is_attribute))( variable4 /*glob*/) /*MMGlobalProperty::is_attribute*/;
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = ((abstractmetamodel___MMGlobalClass___is_interface_t)CALL( variable5 /*gbc*/,COLOR_abstractmetamodel___MMGlobalClass___is_interface))( variable5 /*gbc*/) /*MMGlobalClass::is_interface*/;
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = NEW_string___String___init(); /*new String*/
      variable7 = NEW_string___String___with_native(BOX_NativeString("Error: Attempt to define attribute "), TAG_Int(35)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
      variable9 =  variable1 /*prop*/;
      variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
      variable10 = NEW_string___String___with_native(BOX_NativeString(" in the interface "), TAG_Int(18)); /*new String*/
      variable11 = variable10;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
      variable12 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
      variable13 = variable12;
      variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable13) /*String::append*/;
      variable14 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable15 = variable14;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable6) /*PropertyVerifierVisitor::error*/;
    } else { /*if*/
      variable6 = ((abstractmetamodel___MMGlobalClass___is_universal_t)CALL( variable5 /*gbc*/,COLOR_abstractmetamodel___MMGlobalClass___is_universal))( variable5 /*gbc*/) /*MMGlobalClass::is_universal*/;
      if (UNTAG_Bool(variable6)) { /*if*/
        variable6 = NEW_string___String___init(); /*new String*/
        variable7 = NEW_string___String___with_native(BOX_NativeString("Error: Attempt to define attribute "), TAG_Int(35)); /*new String*/
        variable8 = variable7;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
        variable9 =  variable1 /*prop*/;
        variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
        variable10 = NEW_string___String___with_native(BOX_NativeString(" in the universal class "), TAG_Int(24)); /*new String*/
        variable11 = variable10;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
        variable12 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
        variable13 = variable12;
        variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable13) /*String::append*/;
        variable14 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
        variable15 = variable14;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable6) /*PropertyVerifierVisitor::error*/;
      }
    }
  } else { /*if*/
    variable6 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL( variable4 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___is_init))( variable4 /*glob*/) /*MMGlobalProperty::is_init*/;
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = ((abstractmetamodel___MMGlobalClass___is_interface_t)CALL( variable5 /*gbc*/,COLOR_abstractmetamodel___MMGlobalClass___is_interface))( variable5 /*gbc*/) /*MMGlobalClass::is_interface*/;
      if (UNTAG_Bool(variable6)) { /*if*/
        variable6 = NEW_string___String___init(); /*new String*/
        variable7 = NEW_string___String___with_native(BOX_NativeString("Error: Attempt to define a constructor "), TAG_Int(39)); /*new String*/
        variable8 = variable7;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
        variable9 =  variable1 /*prop*/;
        variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
        variable10 = NEW_string___String___with_native(BOX_NativeString(" in the class "), TAG_Int(14)); /*new String*/
        variable11 = variable10;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
        variable12 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
        variable13 = variable12;
        variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable13) /*String::append*/;
        variable14 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
        variable15 = variable14;
        ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable6) /*PropertyVerifierVisitor::error*/;
      } else { /*if*/
        variable6 = ((abstractmetamodel___MMGlobalClass___is_universal_t)CALL( variable5 /*gbc*/,COLOR_abstractmetamodel___MMGlobalClass___is_universal))( variable5 /*gbc*/) /*MMGlobalClass::is_universal*/;
        if (UNTAG_Bool(variable6)) { /*if*/
          variable6 = NEW_string___String___init(); /*new String*/
          variable7 = NEW_string___String___with_native(BOX_NativeString("Error: Attempt to define a constructor "), TAG_Int(39)); /*new String*/
          variable8 = variable7;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
          variable9 =  variable1 /*prop*/;
          variable9 = ((string___String___to_s_t)CALL(variable9,COLOR_string___Object___to_s))(variable9) /*String::to_s*/;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable9) /*String::append*/;
          variable10 = NEW_string___String___with_native(BOX_NativeString(" in the universal "), TAG_Int(18)); /*new String*/
          variable11 = variable10;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable11) /*String::append*/;
          variable12 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
          variable13 = variable12;
          variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable13) /*String::append*/;
          variable14 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
          variable15 = variable14;
          ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
          ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable6) /*PropertyVerifierVisitor::error*/;
        }
      }
    }
  }
  variable6 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*prop*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*prop*/) /*MMSrcLocalProperty::signature*/;
  variable6 = TAG_Bool((variable6 ==  NIT_NULL /*null*/) || ((variable6 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable6, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))(variable6,  NIT_NULL /*null*/) /*MMSignature::==*/)))));
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL( variable4 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___is_init))( variable4 /*glob*/) /*MMGlobalProperty::is_init*/;
    if (UNTAG_Bool(variable6)) { /*if*/
      variable7 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
      variable8 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___name))( variable1 /*prop*/) /*MMSrcLocalProperty::name*/;
      variable7 = ((abstractmetamodel___MMLocalClass___super_methods_named_t)CALL(variable7,COLOR_abstractmetamodel___MMLocalClass___super_methods_named))(variable7, variable8) /*MMLocalClass::super_methods_named*/;
      variable6 = variable7;
      ((mmbuilder___PPropdef___inherit_signature_t)CALL( self,COLOR_mmbuilder___PPropdef___inherit_signature))( self,  variable0 /*v*/,  variable1 /*prop*/,  variable6 /*supers*/) /*PPropdef::inherit_signature*/;
    }
    variable6 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*prop*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*prop*/) /*MMSrcLocalProperty::signature*/;
    variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable6 ==  NIT_NULL /*null*/) || ((variable6 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable6, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))(variable6,  NIT_NULL /*null*/) /*MMSignature::==*/)))))));
    if (UNTAG_Bool(variable6)) { /*if*/
    } else { /*if*/
      variable6 = ((mmbuilder___PropertyVerifierVisitor___untyped_params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___untyped_params))( variable0 /*v*/) /*PropertyVerifierVisitor::untyped_params*/;
      variable6 = ((array___AbstractArray___is_empty_t)CALL(variable6,COLOR_abstract_collection___Collection___is_empty))(variable6) /*Array::is_empty*/;
      if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable6)))) { /*if*/
        variable6 = ((mmbuilder___PropertyVerifierVisitor___untyped_params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___untyped_params))( variable0 /*v*/) /*PropertyVerifierVisitor::untyped_params*/;
        variable6 = ((abstract_collection___IndexedCollection___first_t)CALL(variable6,COLOR_abstract_collection___Collection___first))(variable6) /*Array::first*/;
        variable7 = NEW_string___String___with_native(BOX_NativeString("Error: Untyped parameter."), TAG_Int(25)); /*new String*/
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/, variable6, variable7) /*PropertyVerifierVisitor::error*/;
      } else { /*if*/
        variable6 = NEW_array___Array___init(); /*new Array[MMType]*/
        variable7 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyVerifierVisitor::local_class*/;
        variable7 = ((genericity___MMLocalClass___get_type_t)CALL(variable7,COLOR_static_type___MMLocalClass___get_type))(variable7) /*MMSrcLocalClass::get_type*/;
        variable8 = NEW_static_type___MMSignature___init(variable6,  NIT_NULL /*null*/, variable7); /*new MMSignature*/
        variable6 = variable8;
        ((static_type___MMLocalProperty___signature__eq_t)CALL( variable1 /*prop*/,COLOR_static_type___MMLocalProperty___signature__eq))( variable1 /*prop*/, variable6) /*MMSrcLocalProperty::signature=*/;
      }
    }
  }
  tracehead = trace.prev;
  return;
}
void mmbuilder___PPropdef___inherit_signature(val_t  self, val_t  param0, val_t  param1, val_t  param2) {
  struct trace_t trace = {NULL, "mmbuilder::PPropdef::inherit_signature (src/syntax//mmbuilder.nit:648,2--669:22)"};
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
  variable1 =  param1;
  variable2 =  param2;
  variable4 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*prop*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*prop*/) /*MMSrcLocalProperty::signature*/;
  variable3 = variable4;
  variable4 = ((array___AbstractArray___iterator_t)CALL( variable2 /*supers*/,COLOR_abstract_collection___Collection___iterator))( variable2 /*supers*/) /*Array::iterator*/;
  while (true) { /*for*/
    variable5 = ((array___ArrayIterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable5)) break; /*for*/
    variable5 = ((array___ArrayIterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*ArrayIterator::item*/;
    variable7 = ((genericity___MMLocalProperty___signature_t)CALL( variable5 /*ip*/,COLOR_static_type___MMLocalProperty___signature))( variable5 /*ip*/) /*MMLocalProperty::signature*/;
    variable8 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyVerifierVisitor::local_class*/;
    variable8 = ((genericity___MMLocalClass___get_type_t)CALL(variable8,COLOR_static_type___MMLocalClass___get_type))(variable8) /*MMSrcLocalClass::get_type*/;
    variable7 = ((vararg___MMSignature___adaptation_to_t)CALL(variable7,COLOR_genericity___MMSignature___adaptation_to))(variable7, variable8) /*MMSignature::adaptation_to*/;
    variable6 = variable7;
    variable7 = TAG_Bool(( variable3 /*s*/ ==  NIT_NULL /*null*/) || (( variable3 /*s*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*s*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*s*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*s*/,COLOR_kernel___Object_____eqeq))( variable3 /*s*/,  NIT_NULL /*null*/) /*MMSignature::==*/)))));
    if (UNTAG_Bool(variable7)) { /*if*/
      variable7 = ((mmbuilder___PropertyVerifierVisitor___params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___params))( variable0 /*v*/) /*PropertyVerifierVisitor::params*/;
      variable7 = ((array___AbstractArray___length_t)CALL(variable7,COLOR_abstract_collection___Collection___length))(variable7) /*Array::length*/;
      variable8 = ((static_type___MMSignature___arity_t)CALL( variable6 /*isig*/,COLOR_static_type___MMSignature___arity))( variable6 /*isig*/) /*MMSignature::arity*/;
      variable7 = TAG_Bool((variable7)!=(variable8));
      if (UNTAG_Bool(variable7)) { /*if*/
        variable7 = ((syntax_base___MMSrcLocalProperty___node_t)CALL( variable1 /*prop*/,COLOR_syntax_base___MMSrcLocalProperty___node))( variable1 /*prop*/) /*MMSrcLocalProperty::node*/;
        variable8 = NEW_string___String___init(); /*new String*/
        variable9 = NEW_string___String___with_native(BOX_NativeString("v.params.length "), TAG_Int(16)); /*new String*/
        variable10 = variable9;
        ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable10) /*String::append*/;
        variable11 = ((mmbuilder___PropertyVerifierVisitor___params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___params))( variable0 /*v*/) /*PropertyVerifierVisitor::params*/;
        variable11 = ((array___AbstractArray___length_t)CALL(variable11,COLOR_abstract_collection___Collection___length))(variable11) /*Array::length*/;
        variable12 = variable11;
        variable12 = ((string___String___to_s_t)CALL(variable12,COLOR_string___Object___to_s))(variable12) /*String::to_s*/;
        ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable12) /*String::append*/;
        variable13 = NEW_string___String___with_native(BOX_NativeString(" != isig.arity "), TAG_Int(15)); /*new String*/
        variable14 = variable13;
        ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable14) /*String::append*/;
        variable15 = ((static_type___MMSignature___arity_t)CALL( variable6 /*isig*/,COLOR_static_type___MMSignature___arity))( variable6 /*isig*/) /*MMSignature::arity*/;
        variable16 = variable15;
        variable16 = ((string___String___to_s_t)CALL(variable16,COLOR_string___Object___to_s))(variable16) /*String::to_s*/;
        ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable16) /*String::append*/;
        variable17 = NEW_string___String___with_native(BOX_NativeString(" ; "), TAG_Int(3)); /*new String*/
        variable18 = variable17;
        ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable18) /*String::append*/;
        variable19 = ((abstractmetamodel___MMLocalProperty___full_name_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___full_name))( variable1 /*prop*/) /*MMSrcLocalProperty::full_name*/;
        variable20 = variable19;
        ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable20) /*String::append*/;
        variable21 = NEW_string___String___with_native(BOX_NativeString(" vs "), TAG_Int(4)); /*new String*/
        variable22 = variable21;
        ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable22) /*String::append*/;
        variable23 = ((abstractmetamodel___MMLocalProperty___full_name_t)CALL( variable5 /*ip*/,COLOR_abstractmetamodel___MMLocalProperty___full_name))( variable5 /*ip*/) /*MMLocalProperty::full_name*/;
        variable24 = variable23;
        ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable24) /*String::append*/;
        variable25 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
        variable26 = variable25;
        ((string___String___append_t)CALL(variable8,COLOR_abstract_collection___IndexedCollection___append))(variable8, variable26) /*String::append*/;
        ((parser_prod___PNode___printl_t)CALL(variable7,COLOR_parser_prod___PNode___printl))(variable7, variable8) /*PPropdef::printl*/;
        goto return_label74;
      }
      variable7 = ((mmbuilder___PropertyVerifierVisitor___params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___params))( variable0 /*v*/) /*PropertyVerifierVisitor::params*/;
      variable7 = ((array___AbstractArray___iterator_t)CALL(variable7,COLOR_abstract_collection___Collection___iterator))(variable7) /*Array::iterator*/;
      while (true) { /*for*/
        variable8 = ((array___ArrayIterator___is_ok_t)CALL(variable7,COLOR_abstract_collection___Iterator___is_ok))(variable7) /*ArrayIterator::is_ok*/;
        if (!UNTAG_Bool(variable8)) break; /*for*/
        variable8 = ((array___ArrayIterator___item_t)CALL(variable7,COLOR_abstract_collection___Iterator___item))(variable7) /*ArrayIterator::item*/;
        variable10 = ((mmbuilder___PParam___position_t)CALL( variable8 /*p*/,COLOR_syntax_base___PParam___position))( variable8 /*p*/) /*PParam::position*/;
        variable10 = ((static_type___MMSignature_____bra_t)CALL( variable6 /*isig*/,COLOR_static_type___MMSignature_____bra))( variable6 /*isig*/, variable10) /*MMSignature::[]*/;
        variable9 = variable10;
        ((mmbuilder___PParam___stype__eq_t)CALL( variable8 /*p*/,COLOR_mmbuilder___PParam___stype__eq))( variable8 /*p*/,  variable9 /*t*/) /*PParam::stype=*/;
        variable10 = ((mmbuilder___PParam___position_t)CALL( variable8 /*p*/,COLOR_syntax_base___PParam___position))( variable8 /*p*/) /*PParam::position*/;
        variable11 = ((vararg___MMSignature___vararg_rank_t)CALL( variable6 /*isig*/,COLOR_vararg___MMSignature___vararg_rank))( variable6 /*isig*/) /*MMSignature::vararg_rank*/;
        variable10 = TAG_Bool((variable10)==(variable11));
        if (UNTAG_Bool(variable10)) { /*if*/
          variable10 = ((syntax_base___AbsSyntaxVisitor___type_array_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_array))( variable0 /*v*/,  variable9 /*t*/) /*PropertyVerifierVisitor::type_array*/;
          variable9 = variable10 /*t=*/;
        }
        variable10 = ((mmbuilder___PParam___variable_t)CALL( variable8 /*p*/,COLOR_syntax_base___PParam___variable))( variable8 /*p*/) /*PParam::variable*/;
        ((syntax_base___Variable___stype__eq_t)CALL(variable10,COLOR_syntax_base___Variable___stype__eq))(variable10,  variable9 /*t*/) /*Variable::stype=*/;
        continue_76: while(0);
        ((array___ArrayIterator___next_t)CALL(variable7,COLOR_abstract_collection___Iterator___next))(variable7) /*ArrayIterator::next*/;
      }
      break_76: while(0);
      variable3 =  variable6 /*isig*/ /*s=*/;
      ((static_type___MMLocalProperty___signature__eq_t)CALL( variable1 /*prop*/,COLOR_static_type___MMLocalProperty___signature__eq))( variable1 /*prop*/,  variable3 /*s*/) /*MMSrcLocalProperty::signature=*/;
    }
    continue_75: while(0);
    ((array___ArrayIterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*ArrayIterator::next*/;
  }
  break_75: while(0);
  return_label74: while(false);
  tracehead = trace.prev;
  return;
}
void mmbuilder___PPropdef___do_and_check_redef(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "mmbuilder::PPropdef::do_and_check_redef (src/syntax//mmbuilder.nit:674,2--747:47)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  val_t variable6;
    val_t variable7;
    static val_t once_value_variable7_78; static int once_bool_variable7_78;
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
        val_t variable27;
        val_t variable28;
        val_t variable29;
        val_t variable30;
        val_t variable31;
            val_t variable32;
            val_t variable33;
            val_t variable34;
            val_t variable35;
            val_t variable36;
            val_t variable37;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  variable3 =  param3;
  variable5 = TAG_Bool(( self==NIT_NULL) || VAL_ISA( self, COLOR_AConcreteInitPropdef, ID_AConcreteInitPropdef)) /*cast AConcreteInitPropdef*/;
  variable4 = variable5;
  variable6 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*prop*/) /*MMSrcLocalProperty::global*/;
  variable5 = variable6;
  variable6 =  TAG_Bool(!UNTAG_Bool( variable2 /*has_redef*/));
  if (UNTAG_Bool(variable6)) { /* and */
    variable6 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___name))( variable1 /*prop*/) /*MMSrcLocalProperty::name*/;
    if (once_bool_variable7_78) variable7 = once_value_variable7_78;
    else {
      variable7 = NEW_string___String___with_native(BOX_NativeString("init"), TAG_Int(4)); /*new String*/
      variable7 = ((symbol___String___to_symbol_t)CALL(variable7,COLOR_symbol___String___to_symbol))(variable7) /*String::to_symbol*/;
      once_value_variable7_78 = variable7;
      once_bool_variable7_78 = true;
    }
    variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable6 == variable7) || ((variable6 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable6,variable7)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))(variable6, variable7) /*Symbol::==*/)))))));
  }
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_string___String___init(); /*new String*/
    variable7 = NEW_string___String___with_native(BOX_NativeString("Redef error: "), TAG_Int(13)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
    variable9 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
    variable10 = variable9;
    variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
    variable13 =  variable1 /*prop*/;
    variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable13) /*String::append*/;
    variable14 = NEW_string___String___with_native(BOX_NativeString(" is an inherited property. To redefine it, add the redef keyword."), TAG_Int(65)); /*new String*/
    variable15 = variable14;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable6) /*PropertyVerifierVisitor::error*/;
    goto return_label77;
  }
  variable6 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL( variable5 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___is_init))( variable5 /*glob*/) /*MMGlobalProperty::is_init*/;
  variable7 = variable6;
  if (UNTAG_Bool(variable7)) { /* and */
    variable7 =  TAG_Bool(!UNTAG_Bool( variable4 /*is_init*/));
  }
  variable6 = variable7;
  if (UNTAG_Bool(variable6)) { /*if*/
    variable6 = NEW_string___String___init(); /*new String*/
    variable7 = NEW_string___String___with_native(BOX_NativeString("Redef error: A method "), TAG_Int(22)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
    variable9 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
    variable10 = variable9;
    variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
    variable13 =  variable1 /*prop*/;
    variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable13) /*String::append*/;
    variable14 = NEW_string___String___with_native(BOX_NativeString(" cannot redefine a constructor."), TAG_Int(31)); /*new String*/
    variable15 = variable14;
    ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable6) /*PropertyVerifierVisitor::error*/;
  } else { /*if*/
    variable6 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL( variable5 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___is_init))( variable5 /*glob*/) /*MMGlobalProperty::is_init*/;
    variable6 =  TAG_Bool(!UNTAG_Bool(variable6));
    if (UNTAG_Bool(variable6)) { /* and */
      variable6 =  variable4 /*is_init*/;
    }
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = NEW_string___String___init(); /*new String*/
      variable7 = NEW_string___String___with_native(BOX_NativeString("Redef error: A constructor "), TAG_Int(27)); /*new String*/
      variable8 = variable7;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable8) /*String::append*/;
      variable9 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
      variable10 = variable9;
      variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable10) /*String::append*/;
      variable11 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
      variable12 = variable11;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable12) /*String::append*/;
      variable13 =  variable1 /*prop*/;
      variable13 = ((string___String___to_s_t)CALL(variable13,COLOR_string___Object___to_s))(variable13) /*String::to_s*/;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable13) /*String::append*/;
      variable14 = NEW_string___String___with_native(BOX_NativeString(" cannot redefine a method."), TAG_Int(26)); /*new String*/
      variable15 = variable14;
      ((string___String___append_t)CALL(variable6,COLOR_abstract_collection___IndexedCollection___append))(variable6, variable15) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable6) /*PropertyVerifierVisitor::error*/;
    }
  }
  variable7 = ((genericity___MMLocalProperty___signature_t)CALL( variable1 /*prop*/,COLOR_static_type___MMLocalProperty___signature))( variable1 /*prop*/) /*MMSrcLocalProperty::signature*/;
  variable6 = variable7;
  variable7 = ((abstractmetamodel___MMConcreteProperty___cprhe_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMConcreteProperty___cprhe))( variable1 /*prop*/) /*MMSrcLocalProperty::cprhe*/;
  variable7 = ((partial_order___PartialOrderElement___direct_greaters_t)CALL(variable7,COLOR_partial_order___PartialOrderElement___direct_greaters))(variable7) /*PartialOrderElement::direct_greaters*/;
  variable7 = ((array___AbstractArray___iterator_t)CALL(variable7,COLOR_abstract_collection___Collection___iterator))(variable7) /*Array::iterator*/;
  while (true) { /*for*/
    variable8 = ((array___ArrayIterator___is_ok_t)CALL(variable7,COLOR_abstract_collection___Iterator___is_ok))(variable7) /*ArrayIterator::is_ok*/;
    if (!UNTAG_Bool(variable8)) break; /*for*/
    variable8 = ((array___ArrayIterator___item_t)CALL(variable7,COLOR_abstract_collection___Iterator___item))(variable7) /*ArrayIterator::item*/;
    variable10 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable8 /*i*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable8 /*i*/) /*MMConcreteProperty::local_class*/;
    variable11 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*prop*/) /*MMSrcLocalProperty::global*/;
    variable10 = ((inheritance___MMLocalClass_____bra_t)CALL(variable10,COLOR_abstractmetamodel___MMLocalClass_____bra))(variable10, variable11) /*MMLocalClass::[]*/;
    variable9 = variable10;
    variable11 = ((genericity___MMLocalProperty___signature_t)CALL( variable8 /*i*/,COLOR_static_type___MMLocalProperty___signature))( variable8 /*i*/) /*MMConcreteProperty::signature*/;
    variable12 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyVerifierVisitor::local_class*/;
    variable12 = ((genericity___MMLocalClass___get_type_t)CALL(variable12,COLOR_static_type___MMLocalClass___get_type))(variable12) /*MMSrcLocalClass::get_type*/;
    variable11 = ((vararg___MMSignature___adaptation_to_t)CALL(variable11,COLOR_genericity___MMSignature___adaptation_to))(variable11, variable12) /*MMSignature::adaptation_to*/;
    variable10 = variable11;
    variable11 = TAG_Bool(( variable6 /*s*/ ==  NIT_NULL /*null*/) || (( variable6 /*s*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable6 /*s*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable6 /*s*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable6 /*s*/,COLOR_kernel___Object_____eqeq))( variable6 /*s*/,  NIT_NULL /*null*/) /*MMSignature::==*/)))));
    if (UNTAG_Bool(variable11)) { /*if*/
      variable11 = ((mmbuilder___PropertyVerifierVisitor___params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___params))( variable0 /*v*/) /*PropertyVerifierVisitor::params*/;
      variable11 = ((array___AbstractArray___length_t)CALL(variable11,COLOR_abstract_collection___Collection___length))(variable11) /*Array::length*/;
      variable12 = ((static_type___MMSignature___arity_t)CALL( variable10 /*isig*/,COLOR_static_type___MMSignature___arity))( variable10 /*isig*/) /*MMSignature::arity*/;
      variable11 = TAG_Bool((variable11)!=(variable12));
      if (UNTAG_Bool(variable11)) { /*if*/
        variable11 = NEW_string___String___init(); /*new String*/
        variable12 = NEW_string___String___with_native(BOX_NativeString("Redef error: "), TAG_Int(13)); /*new String*/
        variable13 = variable12;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable13) /*String::append*/;
        variable14 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
        variable15 = variable14;
        variable15 = ((string___String___to_s_t)CALL(variable15,COLOR_string___Object___to_s))(variable15) /*String::to_s*/;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable15) /*String::append*/;
        variable16 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
        variable17 = variable16;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable17) /*String::append*/;
        variable18 =  variable1 /*prop*/;
        variable18 = ((string___String___to_s_t)CALL(variable18,COLOR_string___Object___to_s))(variable18) /*String::to_s*/;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable18) /*String::append*/;
        variable19 = NEW_string___String___with_native(BOX_NativeString(" redefines "), TAG_Int(11)); /*new String*/
        variable20 = variable19;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable20) /*String::append*/;
        variable21 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable9 /*ip*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable9 /*ip*/) /*MMLocalProperty::local_class*/;
        variable22 = variable21;
        variable22 = ((string___String___to_s_t)CALL(variable22,COLOR_string___Object___to_s))(variable22) /*String::to_s*/;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable22) /*String::append*/;
        variable23 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
        variable24 = variable23;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable24) /*String::append*/;
        variable25 =  variable9 /*ip*/;
        variable25 = ((string___String___to_s_t)CALL(variable25,COLOR_string___Object___to_s))(variable25) /*String::to_s*/;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable25) /*String::append*/;
        variable26 = NEW_string___String___with_native(BOX_NativeString(" with "), TAG_Int(6)); /*new String*/
        variable27 = variable26;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable27) /*String::append*/;
        variable28 = ((static_type___MMSignature___arity_t)CALL( variable10 /*isig*/,COLOR_static_type___MMSignature___arity))( variable10 /*isig*/) /*MMSignature::arity*/;
        variable29 = variable28;
        variable29 = ((string___String___to_s_t)CALL(variable29,COLOR_string___Object___to_s))(variable29) /*String::to_s*/;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable29) /*String::append*/;
        variable30 = NEW_string___String___with_native(BOX_NativeString(" parameter(s)."), TAG_Int(14)); /*new String*/
        variable31 = variable30;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable31) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable11) /*PropertyVerifierVisitor::error*/;
        goto return_label77;
      }
      variable11 = ((mmbuilder___PropertyVerifierVisitor___params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___params))( variable0 /*v*/) /*PropertyVerifierVisitor::params*/;
      variable11 = ((array___AbstractArray___iterator_t)CALL(variable11,COLOR_abstract_collection___Collection___iterator))(variable11) /*Array::iterator*/;
      while (true) { /*for*/
        variable12 = ((array___ArrayIterator___is_ok_t)CALL(variable11,COLOR_abstract_collection___Iterator___is_ok))(variable11) /*ArrayIterator::is_ok*/;
        if (!UNTAG_Bool(variable12)) break; /*for*/
        variable12 = ((array___ArrayIterator___item_t)CALL(variable11,COLOR_abstract_collection___Iterator___item))(variable11) /*ArrayIterator::item*/;
        variable14 = ((mmbuilder___PParam___position_t)CALL( variable12 /*p*/,COLOR_syntax_base___PParam___position))( variable12 /*p*/) /*PParam::position*/;
        variable14 = ((static_type___MMSignature_____bra_t)CALL( variable10 /*isig*/,COLOR_static_type___MMSignature_____bra))( variable10 /*isig*/, variable14) /*MMSignature::[]*/;
        variable13 = variable14;
        ((mmbuilder___PParam___stype__eq_t)CALL( variable12 /*p*/,COLOR_mmbuilder___PParam___stype__eq))( variable12 /*p*/,  variable13 /*t*/) /*PParam::stype=*/;
        variable14 = ((mmbuilder___PParam___position_t)CALL( variable12 /*p*/,COLOR_syntax_base___PParam___position))( variable12 /*p*/) /*PParam::position*/;
        variable15 = ((vararg___MMSignature___vararg_rank_t)CALL( variable10 /*isig*/,COLOR_vararg___MMSignature___vararg_rank))( variable10 /*isig*/) /*MMSignature::vararg_rank*/;
        variable14 = TAG_Bool((variable14)==(variable15));
        if (UNTAG_Bool(variable14)) { /*if*/
          variable14 = ((syntax_base___AbsSyntaxVisitor___type_array_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_array))( variable0 /*v*/,  variable13 /*t*/) /*PropertyVerifierVisitor::type_array*/;
          variable13 = variable14 /*t=*/;
        }
        variable14 = ((mmbuilder___PParam___variable_t)CALL( variable12 /*p*/,COLOR_syntax_base___PParam___variable))( variable12 /*p*/) /*PParam::variable*/;
        ((syntax_base___Variable___stype__eq_t)CALL(variable14,COLOR_syntax_base___Variable___stype__eq))(variable14,  variable13 /*t*/) /*Variable::stype=*/;
        continue_80: while(0);
        ((array___ArrayIterator___next_t)CALL(variable11,COLOR_abstract_collection___Iterator___next))(variable11) /*ArrayIterator::next*/;
      }
      break_80: while(0);
      variable6 =  variable10 /*isig*/ /*s=*/;
      ((static_type___MMLocalProperty___signature__eq_t)CALL( variable1 /*prop*/,COLOR_static_type___MMLocalProperty___signature__eq))( variable1 /*prop*/,  variable6 /*s*/) /*MMSrcLocalProperty::signature=*/;
    }
    variable11 = ((abstractmetamodel___MMGlobalProperty___is_init_t)CALL( variable5 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___is_init))( variable5 /*glob*/) /*MMGlobalProperty::is_init*/;
    variable12 = variable11;
    if (UNTAG_Bool(variable12)) { /* and */
      variable12 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable8 /*i*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable8 /*i*/) /*MMConcreteProperty::local_class*/;
      variable12 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable12,COLOR_abstractmetamodel___MMLocalClass___global))(variable12) /*MMLocalClass::global*/;
      variable13 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
      variable13 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable13,COLOR_abstractmetamodel___MMLocalClass___global))(variable13) /*MMLocalClass::global*/;
      variable12 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable12 == variable13) || ((variable12 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable12,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable12,variable13)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable12,COLOR_kernel___Object_____eqeq))(variable12, variable13) /*MMGlobalClass::==*/)))))));
    }
    variable11 = variable12;
    if (UNTAG_Bool(variable11)) { /*if*/
    } else { /*if*/
      variable11 = ((static_type___MMSignature___arity_t)CALL( variable6 /*s*/,COLOR_static_type___MMSignature___arity))( variable6 /*s*/) /*MMSignature::arity*/;
      variable12 = ((static_type___MMSignature___arity_t)CALL( variable10 /*isig*/,COLOR_static_type___MMSignature___arity))( variable10 /*isig*/) /*MMSignature::arity*/;
      variable11 = TAG_Bool((variable11)!=(variable12));
      if (UNTAG_Bool(variable11)) { /*if*/
        variable11 = NEW_string___String___init(); /*new String*/
        variable12 = NEW_string___String___with_native(BOX_NativeString("Redef error: "), TAG_Int(13)); /*new String*/
        variable13 = variable12;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable13) /*String::append*/;
        variable14 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
        variable15 = variable14;
        variable15 = ((string___String___to_s_t)CALL(variable15,COLOR_string___Object___to_s))(variable15) /*String::to_s*/;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable15) /*String::append*/;
        variable16 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
        variable17 = variable16;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable17) /*String::append*/;
        variable18 =  variable1 /*prop*/;
        variable18 = ((string___String___to_s_t)CALL(variable18,COLOR_string___Object___to_s))(variable18) /*String::to_s*/;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable18) /*String::append*/;
        variable19 = NEW_string___String___with_native(BOX_NativeString(" redefines "), TAG_Int(11)); /*new String*/
        variable20 = variable19;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable20) /*String::append*/;
        variable21 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable9 /*ip*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable9 /*ip*/) /*MMLocalProperty::local_class*/;
        variable22 = variable21;
        variable22 = ((string___String___to_s_t)CALL(variable22,COLOR_string___Object___to_s))(variable22) /*String::to_s*/;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable22) /*String::append*/;
        variable23 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
        variable24 = variable23;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable24) /*String::append*/;
        variable25 =  variable9 /*ip*/;
        variable25 = ((string___String___to_s_t)CALL(variable25,COLOR_string___Object___to_s))(variable25) /*String::to_s*/;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable25) /*String::append*/;
        variable26 = NEW_string___String___with_native(BOX_NativeString(" with "), TAG_Int(6)); /*new String*/
        variable27 = variable26;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable27) /*String::append*/;
        variable28 = ((static_type___MMSignature___arity_t)CALL( variable10 /*isig*/,COLOR_static_type___MMSignature___arity))( variable10 /*isig*/) /*MMSignature::arity*/;
        variable29 = variable28;
        variable29 = ((string___String___to_s_t)CALL(variable29,COLOR_string___Object___to_s))(variable29) /*String::to_s*/;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable29) /*String::append*/;
        variable30 = NEW_string___String___with_native(BOX_NativeString(" parameter(s)."), TAG_Int(14)); /*new String*/
        variable31 = variable30;
        ((string___String___append_t)CALL(variable11,COLOR_abstract_collection___IndexedCollection___append))(variable11, variable31) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable11) /*PropertyVerifierVisitor::error*/;
      } else { /*if*/
        variable11 = ((static_type___MMSignature___arity_t)CALL( variable6 /*s*/,COLOR_static_type___MMSignature___arity))( variable6 /*s*/) /*MMSignature::arity*/;
        variable12 = NEW_range___Range___without_last( TAG_Int(0), variable11); /*new Range[Int]*/
        variable11 = variable12;
        variable11 = ((range___Range___iterator_t)CALL(variable11,COLOR_abstract_collection___Collection___iterator))(variable11) /*Range::iterator*/;
        while (true) { /*for*/
          variable12 = ((abstract_collection___Iterator___is_ok_t)CALL(variable11,COLOR_abstract_collection___Iterator___is_ok))(variable11) /*Iterator::is_ok*/;
          if (!UNTAG_Bool(variable12)) break; /*for*/
          variable12 = ((abstract_collection___Iterator___item_t)CALL(variable11,COLOR_abstract_collection___Iterator___item))(variable11) /*Iterator::item*/;
          variable13 = ((static_type___MMSignature_____bra_t)CALL( variable6 /*s*/,COLOR_static_type___MMSignature_____bra))( variable6 /*s*/,  variable12 /*i*/) /*MMSignature::[]*/;
          variable14 = ((static_type___MMSignature_____bra_t)CALL( variable10 /*isig*/,COLOR_static_type___MMSignature_____bra))( variable10 /*isig*/,  variable12 /*i*/) /*MMSignature::[]*/;
          variable13 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable13 == variable14) || ((variable13 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable13,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable13,variable14)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable13,COLOR_kernel___Object_____eqeq))(variable13, variable14) /*MMType::==*/)))))));
          if (UNTAG_Bool(variable13)) { /*if*/
            variable13 = NEW_string___String___init(); /*new String*/
            variable14 = NEW_string___String___with_native(BOX_NativeString("Redef error: Expected "), TAG_Int(22)); /*new String*/
            variable15 = variable14;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable15) /*String::append*/;
            variable16 = ((static_type___MMSignature_____bra_t)CALL( variable10 /*isig*/,COLOR_static_type___MMSignature_____bra))( variable10 /*isig*/,  variable12 /*i*/) /*MMSignature::[]*/;
            variable17 = variable16;
            variable17 = ((string___String___to_s_t)CALL(variable17,COLOR_string___Object___to_s))(variable17) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable17) /*String::append*/;
            variable18 = NEW_string___String___with_native(BOX_NativeString(" (as in "), TAG_Int(8)); /*new String*/
            variable19 = variable18;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable19) /*String::append*/;
            variable20 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable9 /*ip*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable9 /*ip*/) /*MMLocalProperty::local_class*/;
            variable21 = variable20;
            variable21 = ((string___String___to_s_t)CALL(variable21,COLOR_string___Object___to_s))(variable21) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable21) /*String::append*/;
            variable22 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
            variable23 = variable22;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable23) /*String::append*/;
            variable24 =  variable9 /*ip*/;
            variable24 = ((string___String___to_s_t)CALL(variable24,COLOR_string___Object___to_s))(variable24) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable24) /*String::append*/;
            variable25 = NEW_string___String___with_native(BOX_NativeString("), got "), TAG_Int(7)); /*new String*/
            variable26 = variable25;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable26) /*String::append*/;
            variable27 = ((static_type___MMSignature_____bra_t)CALL( variable6 /*s*/,COLOR_static_type___MMSignature_____bra))( variable6 /*s*/,  variable12 /*i*/) /*MMSignature::[]*/;
            variable28 = variable27;
            variable28 = ((string___String___to_s_t)CALL(variable28,COLOR_string___Object___to_s))(variable28) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable28) /*String::append*/;
            variable29 = NEW_string___String___with_native(BOX_NativeString(" in "), TAG_Int(4)); /*new String*/
            variable30 = variable29;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable30) /*String::append*/;
            variable31 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
            variable32 = variable31;
            variable32 = ((string___String___to_s_t)CALL(variable32,COLOR_string___Object___to_s))(variable32) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable32) /*String::append*/;
            variable33 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
            variable34 = variable33;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable34) /*String::append*/;
            variable35 =  variable1 /*prop*/;
            variable35 = ((string___String___to_s_t)CALL(variable35,COLOR_string___Object___to_s))(variable35) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable35) /*String::append*/;
            variable36 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
            variable37 = variable36;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable37) /*String::append*/;
            ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable13) /*PropertyVerifierVisitor::error*/;
          }
          continue_81: while(0);
          ((abstract_collection___Iterator___next_t)CALL(variable11,COLOR_abstract_collection___Iterator___next))(variable11) /*Iterator::next*/;
        }
        break_81: while(0);
      }
    }
    variable12 = ((static_type___MMSignature___return_type_t)CALL( variable6 /*s*/,COLOR_static_type___MMSignature___return_type))( variable6 /*s*/) /*MMSignature::return_type*/;
    variable11 = variable12;
    variable13 = ((static_type___MMSignature___return_type_t)CALL( variable10 /*isig*/,COLOR_static_type___MMSignature___return_type))( variable10 /*isig*/) /*MMSignature::return_type*/;
    variable12 = variable13;
    variable13 = TAG_Bool(( variable11 /*srt*/ ==  NIT_NULL /*null*/) || (( variable11 /*srt*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable11 /*srt*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable11 /*srt*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable11 /*srt*/,COLOR_kernel___Object_____eqeq))( variable11 /*srt*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
    variable14 = variable13;
    if (UNTAG_Bool(variable14)) { /* and */
      variable14 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable12 /*isrt*/ ==  NIT_NULL /*null*/) || (( variable12 /*isrt*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable12 /*isrt*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable12 /*isrt*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable12 /*isrt*/,COLOR_kernel___Object_____eqeq))( variable12 /*isrt*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
    }
    variable13 = variable14;
    if (UNTAG_Bool(variable13)) { /*if*/
      variable13 = NEW_string___String___init(); /*new String*/
      variable14 = NEW_string___String___with_native(BOX_NativeString("Redef error: The procedure "), TAG_Int(27)); /*new String*/
      variable15 = variable14;
      ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable15) /*String::append*/;
      variable16 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
      variable17 = variable16;
      variable17 = ((string___String___to_s_t)CALL(variable17,COLOR_string___Object___to_s))(variable17) /*String::to_s*/;
      ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable17) /*String::append*/;
      variable18 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
      variable19 = variable18;
      ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable19) /*String::append*/;
      variable20 =  variable1 /*prop*/;
      variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
      ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable20) /*String::append*/;
      variable21 = NEW_string___String___with_native(BOX_NativeString(" redefines the function "), TAG_Int(24)); /*new String*/
      variable22 = variable21;
      ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable22) /*String::append*/;
      variable23 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable9 /*ip*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable9 /*ip*/) /*MMLocalProperty::local_class*/;
      variable24 = variable23;
      variable24 = ((string___String___to_s_t)CALL(variable24,COLOR_string___Object___to_s))(variable24) /*String::to_s*/;
      ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable24) /*String::append*/;
      variable25 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
      variable26 = variable25;
      ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable26) /*String::append*/;
      variable27 =  variable9 /*ip*/;
      variable27 = ((string___String___to_s_t)CALL(variable27,COLOR_string___Object___to_s))(variable27) /*String::to_s*/;
      ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable27) /*String::append*/;
      variable28 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
      variable29 = variable28;
      ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable29) /*String::append*/;
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable13) /*PropertyVerifierVisitor::error*/;
    } else { /*if*/
      variable13 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable11 /*srt*/ ==  NIT_NULL /*null*/) || (( variable11 /*srt*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable11 /*srt*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable11 /*srt*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable11 /*srt*/,COLOR_kernel___Object_____eqeq))( variable11 /*srt*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
      variable14 = variable13;
      if (UNTAG_Bool(variable14)) { /* and */
        variable14 = TAG_Bool(( variable12 /*isrt*/ ==  NIT_NULL /*null*/) || (( variable12 /*isrt*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable12 /*isrt*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable12 /*isrt*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable12 /*isrt*/,COLOR_kernel___Object_____eqeq))( variable12 /*isrt*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
      }
      variable13 = variable14;
      if (UNTAG_Bool(variable13)) { /*if*/
        variable13 = NEW_string___String___init(); /*new String*/
        variable14 = NEW_string___String___with_native(BOX_NativeString("Redef error: The function "), TAG_Int(26)); /*new String*/
        variable15 = variable14;
        ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable15) /*String::append*/;
        variable16 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
        variable17 = variable16;
        variable17 = ((string___String___to_s_t)CALL(variable17,COLOR_string___Object___to_s))(variable17) /*String::to_s*/;
        ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable17) /*String::append*/;
        variable18 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
        variable19 = variable18;
        ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable19) /*String::append*/;
        variable20 =  variable1 /*prop*/;
        variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
        ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable20) /*String::append*/;
        variable21 = NEW_string___String___with_native(BOX_NativeString(" redefines the procedure "), TAG_Int(25)); /*new String*/
        variable22 = variable21;
        ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable22) /*String::append*/;
        variable23 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable9 /*ip*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable9 /*ip*/) /*MMLocalProperty::local_class*/;
        variable24 = variable23;
        variable24 = ((string___String___to_s_t)CALL(variable24,COLOR_string___Object___to_s))(variable24) /*String::to_s*/;
        ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable24) /*String::append*/;
        variable25 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
        variable26 = variable25;
        ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable26) /*String::append*/;
        variable27 =  variable9 /*ip*/;
        variable27 = ((string___String___to_s_t)CALL(variable27,COLOR_string___Object___to_s))(variable27) /*String::to_s*/;
        ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable27) /*String::append*/;
        variable28 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
        variable29 = variable28;
        ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable29) /*String::append*/;
        ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable13) /*PropertyVerifierVisitor::error*/;
      } else { /*if*/
        variable13 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable11 /*srt*/ ==  NIT_NULL /*null*/) || (( variable11 /*srt*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable11 /*srt*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable11 /*srt*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable11 /*srt*/,COLOR_kernel___Object_____eqeq))( variable11 /*srt*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
        variable14 = variable13;
        if (UNTAG_Bool(variable14)) { /* and */
          variable14 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable12 /*isrt*/ ==  NIT_NULL /*null*/) || (( variable12 /*isrt*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable12 /*isrt*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable12 /*isrt*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable12 /*isrt*/,COLOR_kernel___Object_____eqeq))( variable12 /*isrt*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
        }
        variable13 = variable14;
        variable14 = variable13;
        if (UNTAG_Bool(variable14)) { /* and */
          variable14 = ((static_type___MMType_____l_t)CALL( variable11 /*srt*/,COLOR_static_type___MMType_____l))( variable11 /*srt*/,  variable12 /*isrt*/) /*MMType::<*/;
          variable14 =  TAG_Bool(!UNTAG_Bool(variable14));
        }
        variable13 = variable14;
        if (UNTAG_Bool(variable13)) { /*if*/
          variable13 = NEW_string___String___init(); /*new String*/
          variable14 = NEW_string___String___with_native(BOX_NativeString("Redef error: Expected "), TAG_Int(22)); /*new String*/
          variable15 = variable14;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable15) /*String::append*/;
          variable16 =  variable12 /*isrt*/;
          variable16 = ((string___String___to_s_t)CALL(variable16,COLOR_string___Object___to_s))(variable16) /*String::to_s*/;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable16) /*String::append*/;
          variable17 = NEW_string___String___with_native(BOX_NativeString(" (as in "), TAG_Int(8)); /*new String*/
          variable18 = variable17;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable18) /*String::append*/;
          variable19 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable9 /*ip*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable9 /*ip*/) /*MMLocalProperty::local_class*/;
          variable20 = variable19;
          variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable20) /*String::append*/;
          variable21 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
          variable22 = variable21;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable22) /*String::append*/;
          variable23 =  variable9 /*ip*/;
          variable23 = ((string___String___to_s_t)CALL(variable23,COLOR_string___Object___to_s))(variable23) /*String::to_s*/;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable23) /*String::append*/;
          variable24 = NEW_string___String___with_native(BOX_NativeString("), got "), TAG_Int(7)); /*new String*/
          variable25 = variable24;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable25) /*String::append*/;
          variable26 =  variable11 /*srt*/;
          variable26 = ((string___String___to_s_t)CALL(variable26,COLOR_string___Object___to_s))(variable26) /*String::to_s*/;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable26) /*String::append*/;
          variable27 = NEW_string___String___with_native(BOX_NativeString(" in "), TAG_Int(4)); /*new String*/
          variable28 = variable27;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable28) /*String::append*/;
          variable29 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
          variable30 = variable29;
          variable30 = ((string___String___to_s_t)CALL(variable30,COLOR_string___Object___to_s))(variable30) /*String::to_s*/;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable30) /*String::append*/;
          variable31 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
          variable32 = variable31;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable32) /*String::append*/;
          variable33 =  variable1 /*prop*/;
          variable33 = ((string___String___to_s_t)CALL(variable33,COLOR_string___Object___to_s))(variable33) /*String::to_s*/;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable33) /*String::append*/;
          variable34 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
          variable35 = variable34;
          ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable35) /*String::append*/;
          ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable13) /*PropertyVerifierVisitor::error*/;
        } else { /*if*/
          variable13 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable11 /*srt*/ ==  NIT_NULL /*null*/) || (( variable11 /*srt*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable11 /*srt*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable11 /*srt*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable11 /*srt*/,COLOR_kernel___Object_____eqeq))( variable11 /*srt*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
          variable14 = variable13;
          if (UNTAG_Bool(variable14)) { /* and */
            variable14 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable12 /*isrt*/ ==  NIT_NULL /*null*/) || (( variable12 /*isrt*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable12 /*isrt*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable12 /*isrt*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable12 /*isrt*/,COLOR_kernel___Object_____eqeq))( variable12 /*isrt*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
          }
          variable13 = variable14;
          variable14 = variable13;
          if (UNTAG_Bool(variable14)) { /* and */
            variable14 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable11 /*srt*/ ==  variable12 /*isrt*/) || (( variable11 /*srt*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable11 /*srt*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable11 /*srt*/, variable12 /*isrt*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable11 /*srt*/,COLOR_kernel___Object_____eqeq))( variable11 /*srt*/,  variable12 /*isrt*/) /*MMType::==*/)))))));
          }
          variable13 = variable14;
          variable14 = variable13;
          if (UNTAG_Bool(variable14)) { /* and */
            variable14 = TAG_Bool(( variable1 /*prop*/==NIT_NULL) || VAL_ISA( variable1 /*prop*/, COLOR_MMAttribute, ID_MMAttribute)) /*cast MMAttribute*/;
          }
          variable13 = variable14;
          if (UNTAG_Bool(variable13)) { /*if*/
            variable13 = NEW_string___String___init(); /*new String*/
            variable14 = NEW_string___String___with_native(BOX_NativeString("Redef warning: Expected "), TAG_Int(24)); /*new String*/
            variable15 = variable14;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable15) /*String::append*/;
            variable16 =  variable12 /*isrt*/;
            variable16 = ((string___String___to_s_t)CALL(variable16,COLOR_string___Object___to_s))(variable16) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable16) /*String::append*/;
            variable17 = NEW_string___String___with_native(BOX_NativeString(" (as in "), TAG_Int(8)); /*new String*/
            variable18 = variable17;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable18) /*String::append*/;
            variable19 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable9 /*ip*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable9 /*ip*/) /*MMLocalProperty::local_class*/;
            variable20 = variable19;
            variable20 = ((string___String___to_s_t)CALL(variable20,COLOR_string___Object___to_s))(variable20) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable20) /*String::append*/;
            variable21 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
            variable22 = variable21;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable22) /*String::append*/;
            variable23 =  variable9 /*ip*/;
            variable23 = ((string___String___to_s_t)CALL(variable23,COLOR_string___Object___to_s))(variable23) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable23) /*String::append*/;
            variable24 = NEW_string___String___with_native(BOX_NativeString("), got "), TAG_Int(7)); /*new String*/
            variable25 = variable24;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable25) /*String::append*/;
            variable26 =  variable11 /*srt*/;
            variable26 = ((string___String___to_s_t)CALL(variable26,COLOR_string___Object___to_s))(variable26) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable26) /*String::append*/;
            variable27 = NEW_string___String___with_native(BOX_NativeString(" in "), TAG_Int(4)); /*new String*/
            variable28 = variable27;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable28) /*String::append*/;
            variable29 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMAttribute::local_class*/;
            variable30 = variable29;
            variable30 = ((string___String___to_s_t)CALL(variable30,COLOR_string___Object___to_s))(variable30) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable30) /*String::append*/;
            variable31 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
            variable32 = variable31;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable32) /*String::append*/;
            variable33 =  variable1 /*prop*/;
            variable33 = ((string___String___to_s_t)CALL(variable33,COLOR_string___Object___to_s))(variable33) /*String::to_s*/;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable33) /*String::append*/;
            variable34 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
            variable35 = variable34;
            ((string___String___append_t)CALL(variable13,COLOR_abstract_collection___IndexedCollection___append))(variable13, variable35) /*String::append*/;
            ((syntax_base___AbsSyntaxVisitor___warning_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___warning))( variable0 /*v*/,  self, variable13) /*PropertyVerifierVisitor::warning*/;
          }
        }
      }
    }
    continue_79: while(0);
    ((array___ArrayIterator___next_t)CALL(variable7,COLOR_abstract_collection___Iterator___next))(variable7) /*ArrayIterator::next*/;
  }
  break_79: while(0);
  variable7 = TAG_Bool(( variable3 /*visibility_level*/)!=( TAG_Int(1)));
  variable8 = variable7;
  if (UNTAG_Bool(variable8)) { /* and */
    variable8 = ((abstractmetamodel___MMGlobalProperty___visibility_level_t)CALL( variable5 /*glob*/,COLOR_abstractmetamodel___MMGlobalProperty___visibility_level))( variable5 /*glob*/) /*MMGlobalProperty::visibility_level*/;
    variable8 = TAG_Bool((variable8)!=( variable3 /*visibility_level*/));
  }
  variable7 = variable8;
  if (UNTAG_Bool(variable7)) { /*if*/
    variable7 = NEW_string___String___init(); /*new String*/
    variable8 = NEW_string___String___with_native(BOX_NativeString("Redef error: "), TAG_Int(13)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable9) /*String::append*/;
    variable10 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___local_class))( variable1 /*prop*/) /*MMSrcLocalProperty::local_class*/;
    variable11 = variable10;
    variable11 = ((string___String___to_s_t)CALL(variable11,COLOR_string___Object___to_s))(variable11) /*String::to_s*/;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable11) /*String::append*/;
    variable12 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
    variable13 = variable12;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable13) /*String::append*/;
    variable14 =  variable1 /*prop*/;
    variable14 = ((string___String___to_s_t)CALL(variable14,COLOR_string___Object___to_s))(variable14) /*String::to_s*/;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable14) /*String::append*/;
    variable15 = NEW_string___String___with_native(BOX_NativeString(" redefinition cannot change visibility."), TAG_Int(39)); /*new String*/
    variable16 = variable15;
    ((string___String___append_t)CALL(variable7,COLOR_abstract_collection___IndexedCollection___append))(variable7, variable16) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable7) /*PropertyVerifierVisitor::error*/;
  }
  variable7 = ((syntax_base___AbsSyntaxVisitor___module_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___module))( variable0 /*v*/) /*PropertyVerifierVisitor::module*/;
  ((syntax_base___MMGlobalProperty___check_visibility_t)CALL( variable5 /*glob*/,COLOR_syntax_base___MMGlobalProperty___check_visibility))( variable5 /*glob*/,  variable0 /*v*/,  self, variable7,  TAG_Bool(true)) /*MMGlobalProperty::check_visibility*/;
  return_label77: while(false);
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___AAttrPropdef___readmethod(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AAttrPropdef::readmethod (src/syntax//mmbuilder.nit:752,2--45)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___AAttrPropdef____readmethod( self) /*AAttrPropdef::_readmethod*/;
}
val_t mmbuilder___AAttrPropdef___writemethod(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AAttrPropdef::writemethod (src/syntax//mmbuilder.nit:753,2--46)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___AAttrPropdef____writemethod( self) /*AAttrPropdef::_writemethod*/;
}
val_t mmbuilder___AAttrPropdef___prop(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AAttrPropdef::prop (src/syntax//mmbuilder.nit:754,2--42)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___AAttrPropdef____prop( self) /*AAttrPropdef::_prop*/;
}
void mmbuilder___AAttrPropdef___accept_property_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::AAttrPropdef::accept_property_builder (src/syntax//mmbuilder.nit:756,2--772:55)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___AAttrPropdef___accept_property_builder_t)CALL( self,COLOR_SUPER_mmbuilder___AAttrPropdef___accept_property_builder))( self,  param0) /*super AAttrPropdef::accept_property_builder*/;
  variable2 = ((parser_nodes___AAttrPropdef___n_id_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_id))( self) /*AAttrPropdef::n_id*/;
  variable2 = ((syntax_base___Token___to_symbol_t)CALL(variable2,COLOR_syntax_base___Token___to_symbol))(variable2) /*TAttrid::to_symbol*/;
  variable1 = variable2;
  variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyBuilderVisitor::local_class*/;
  variable4 = NEW_syntax_base___MMSrcAttribute___init( variable1 /*name*/, variable3,  self); /*new MMSrcAttribute*/
  variable3 = variable4;
  variable2 = variable3;
  ATTR_mmbuilder___AAttrPropdef____prop( self) /*AAttrPropdef::_prop*/ =  variable2 /*prop*/;
  variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyBuilderVisitor::local_class*/;
  ((mmbuilder___MMSrcLocalClass___add_src_local_property_t)CALL(variable3,COLOR_mmbuilder___MMSrcLocalClass___add_src_local_property))(variable3,  variable0 /*v*/,  variable2 /*prop*/) /*MMSrcLocalClass::add_src_local_property*/;
  variable3 = ((parser_nodes___AAttrPropdef___n_readable_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_readable))( self) /*AAttrPropdef::n_readable*/;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*PAble::==*/)))))));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = ((parser_nodes___AAttrPropdef___n_id_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_id))( self) /*AAttrPropdef::n_id*/;
    variable3 = ((lexer___Token___text_t)CALL(variable3,COLOR_lexer___Token___text))(variable3) /*TAttrid::text*/;
    variable3 = ((string___String___substring_from_t)CALL(variable3,COLOR_string___String___substring_from))(variable3,  TAG_Int(1)) /*String::substring_from*/;
    variable3 = ((symbol___String___to_symbol_t)CALL(variable3,COLOR_symbol___String___to_symbol))(variable3) /*String::to_symbol*/;
    variable1 = variable3 /*name=*/;
    variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyBuilderVisitor::local_class*/;
    variable4 = NEW_syntax_base___MMReadImplementationMethod___init( variable1 /*name*/, variable3,  self); /*new MMReadImplementationMethod*/
    variable3 = variable4;
    ATTR_mmbuilder___AAttrPropdef____readmethod( self) /*AAttrPropdef::_readmethod*/ = variable3;
    variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyBuilderVisitor::local_class*/;
    variable4 = ATTR_mmbuilder___AAttrPropdef____readmethod( self) /*AAttrPropdef::_readmethod*/;
    ((mmbuilder___MMSrcLocalClass___add_src_local_property_t)CALL(variable3,COLOR_mmbuilder___MMSrcLocalClass___add_src_local_property))(variable3,  variable0 /*v*/, variable4) /*MMSrcLocalClass::add_src_local_property*/;
  }
  variable3 = ((parser_nodes___AAttrPropdef___n_writable_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_writable))( self) /*AAttrPropdef::n_writable*/;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*PAble::==*/)))))));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = ((parser_nodes___AAttrPropdef___n_id_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_id))( self) /*AAttrPropdef::n_id*/;
    variable3 = ((lexer___Token___text_t)CALL(variable3,COLOR_lexer___Token___text))(variable3) /*TAttrid::text*/;
    variable3 = ((string___String___substring_from_t)CALL(variable3,COLOR_string___String___substring_from))(variable3,  TAG_Int(1)) /*String::substring_from*/;
    variable4 = NEW_string___String___with_native(BOX_NativeString("="), TAG_Int(1)); /*new String*/
    variable3 = ((string___String_____plus_t)CALL(variable3,COLOR_string___String_____plus))(variable3, variable4) /*String::+*/;
    variable3 = ((symbol___String___to_symbol_t)CALL(variable3,COLOR_symbol___String___to_symbol))(variable3) /*String::to_symbol*/;
    variable1 = variable3 /*name=*/;
    variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyBuilderVisitor::local_class*/;
    variable4 = NEW_syntax_base___MMWriteImplementationMethod___init( variable1 /*name*/, variable3,  self); /*new MMWriteImplementationMethod*/
    variable3 = variable4;
    ATTR_mmbuilder___AAttrPropdef____writemethod( self) /*AAttrPropdef::_writemethod*/ = variable3;
    variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyBuilderVisitor::local_class*/;
    variable4 = ATTR_mmbuilder___AAttrPropdef____writemethod( self) /*AAttrPropdef::_writemethod*/;
    ((mmbuilder___MMSrcLocalClass___add_src_local_property_t)CALL(variable3,COLOR_mmbuilder___MMSrcLocalClass___add_src_local_property))(variable3,  variable0 /*v*/, variable4) /*MMSrcLocalClass::add_src_local_property*/;
  }
  tracehead = trace.prev;
  return;
}
void mmbuilder___AAttrPropdef___accept_property_verifier(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::AAttrPropdef::accept_property_verifier (src/syntax//mmbuilder.nit:776,2--799:42)"};
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
  ((mmbuilder___AAttrPropdef___accept_property_verifier_t)CALL( self,COLOR_SUPER_mmbuilder___AAttrPropdef___accept_property_verifier))( self,  param0) /*super AAttrPropdef::accept_property_verifier*/;
  variable1 = NIT_NULL /*decl variable t*/;
  variable2 = ((parser_nodes___AAttrPropdef___n_type_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_type))( self) /*AAttrPropdef::n_type*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PType::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((parser_nodes___AAttrPropdef___n_type_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_type))( self) /*AAttrPropdef::n_type*/;
    variable2 = ((syntax_base___PType___get_stype_t)CALL(variable2,COLOR_syntax_base___PType___get_stype))(variable2,  variable0 /*v*/) /*PType::get_stype*/;
    variable1 = variable2 /*t=*/;
  } else { /*if*/
    variable2 = NEW_string___String___init(); /*new String*/
    variable3 = NEW_string___String___with_native(BOX_NativeString("Not yet implemented: Attribute definition "), TAG_Int(42)); /*new String*/
    variable4 = variable3;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable4) /*String::append*/;
    variable5 = ATTR_mmbuilder___AAttrPropdef____prop( self) /*AAttrPropdef::_prop*/;
    variable5 = ((abstractmetamodel___MMLocalProperty___local_class_t)CALL(variable5,COLOR_abstractmetamodel___MMLocalProperty___local_class))(variable5) /*MMSrcAttribute::local_class*/;
    variable6 = variable5;
    variable6 = ((string___String___to_s_t)CALL(variable6,COLOR_string___Object___to_s))(variable6) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable6) /*String::append*/;
    variable7 = NEW_string___String___with_native(BOX_NativeString("::"), TAG_Int(2)); /*new String*/
    variable8 = variable7;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable8) /*String::append*/;
    variable9 = ATTR_mmbuilder___AAttrPropdef____prop( self) /*AAttrPropdef::_prop*/;
    variable10 = variable9;
    variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString(" requires an explicit type."), TAG_Int(27)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable2,COLOR_abstract_collection___IndexedCollection___append))(variable2, variable12) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable2) /*PropertyVerifierVisitor::error*/;
    goto return_label83;
  }
  variable3 = NEW_array___Array___init(); /*new Array[MMType]*/
  variable4 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyVerifierVisitor::local_class*/;
  variable4 = ((genericity___MMLocalClass___get_type_t)CALL(variable4,COLOR_static_type___MMLocalClass___get_type))(variable4) /*MMSrcLocalClass::get_type*/;
  variable5 = NEW_static_type___MMSignature___init(variable3,  variable1 /*t*/, variable4); /*new MMSignature*/
  variable3 = variable5;
  variable2 = variable3;
  variable3 = ATTR_mmbuilder___AAttrPropdef____prop( self) /*AAttrPropdef::_prop*/;
  ((static_type___MMLocalProperty___signature__eq_t)CALL(variable3,COLOR_static_type___MMLocalProperty___signature__eq))(variable3,  variable2 /*signature*/) /*MMSrcAttribute::signature=*/;
  variable4 = ((parser_nodes___AAttrPropdef___n_visibility_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_visibility))( self) /*AAttrPropdef::n_visibility*/;
  variable4 = ((mmbuilder___PVisibility___level_t)CALL(variable4,COLOR_mmbuilder___PVisibility___level))(variable4) /*PVisibility::level*/;
  variable3 = variable4;
  variable4 = ATTR_mmbuilder___AAttrPropdef____prop( self) /*AAttrPropdef::_prop*/;
  variable5 = ((parser_nodes___AAttrPropdef___n_kwredef_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_kwredef))( self) /*AAttrPropdef::n_kwredef*/;
  variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable5 ==  NIT_NULL /*null*/) || ((variable5 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable5, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))(variable5,  NIT_NULL /*null*/) /*TKwredef::==*/)))))));
  ((mmbuilder___PPropdef___process_and_check_t)CALL( self,COLOR_mmbuilder___PPropdef___process_and_check))( self,  variable0 /*v*/, variable4, variable5,  variable3 /*visibility_level*/) /*AAttrPropdef::process_and_check*/;
  variable4 = ((parser_nodes___AAttrPropdef___n_readable_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_readable))( self) /*AAttrPropdef::n_readable*/;
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  NIT_NULL /*null*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  NIT_NULL /*null*/) /*PAble::==*/)))))));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ATTR_mmbuilder___AAttrPropdef____readmethod( self) /*AAttrPropdef::_readmethod*/;
    ((static_type___MMLocalProperty___signature__eq_t)CALL(variable4,COLOR_static_type___MMLocalProperty___signature__eq))(variable4,  variable2 /*signature*/) /*MMSrcMethod::signature=*/;
    variable4 = ATTR_mmbuilder___AAttrPropdef____readmethod( self) /*AAttrPropdef::_readmethod*/;
    variable5 = ((parser_nodes___AAttrPropdef___n_readable_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_readable))( self) /*AAttrPropdef::n_readable*/;
    variable5 = ((parser_nodes___PAble___n_kwredef_t)CALL(variable5,COLOR_parser_nodes___PAble___n_kwredef))(variable5) /*PAble::n_kwredef*/;
    variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable5 ==  NIT_NULL /*null*/) || ((variable5 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable5, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))(variable5,  NIT_NULL /*null*/) /*TKwredef::==*/)))))));
    ((mmbuilder___PPropdef___process_and_check_t)CALL( self,COLOR_mmbuilder___PPropdef___process_and_check))( self,  variable0 /*v*/, variable4, variable5,  variable3 /*visibility_level*/) /*AAttrPropdef::process_and_check*/;
    variable4 = ((parser_nodes___AAttrPropdef___n_type_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_type))( self) /*AAttrPropdef::n_type*/;
    variable5 = ATTR_mmbuilder___AAttrPropdef____readmethod( self) /*AAttrPropdef::_readmethod*/;
    ((mmbuilder___PType___check_visibility_t)CALL(variable4,COLOR_mmbuilder___PType___check_visibility))(variable4,  variable0 /*v*/, variable5) /*PType::check_visibility*/;
  }
  variable4 = ((parser_nodes___AAttrPropdef___n_writable_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_writable))( self) /*AAttrPropdef::n_writable*/;
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  NIT_NULL /*null*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  NIT_NULL /*null*/) /*PAble::==*/)))))));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = ATTR_mmbuilder___AAttrPropdef____writemethod( self) /*AAttrPropdef::_writemethod*/;
    variable5 = NEW_array___Array___with_capacity(TAG_Int(1)); /*new Array[MMType]*/
    ((array___AbstractArray___add_t)CALL(variable5,COLOR_abstract_collection___SimpleCollection___add))(variable5,  variable1 /*t*/) /*Array::add*/;
    variable6 = NEW_array___Array___with(variable5); /*new Array[MMType]*/
    variable5 = variable6;
    variable6 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyVerifierVisitor::local_class*/;
    variable6 = ((genericity___MMLocalClass___get_type_t)CALL(variable6,COLOR_static_type___MMLocalClass___get_type))(variable6) /*MMSrcLocalClass::get_type*/;
    variable7 = NEW_static_type___MMSignature___init(variable5,  NIT_NULL /*null*/, variable6); /*new MMSignature*/
    variable5 = variable7;
    ((static_type___MMLocalProperty___signature__eq_t)CALL(variable4,COLOR_static_type___MMLocalProperty___signature__eq))(variable4, variable5) /*MMSrcMethod::signature=*/;
    variable4 = ATTR_mmbuilder___AAttrPropdef____writemethod( self) /*AAttrPropdef::_writemethod*/;
    variable5 = ((parser_nodes___AAttrPropdef___n_writable_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_writable))( self) /*AAttrPropdef::n_writable*/;
    variable5 = ((parser_nodes___PAble___n_kwredef_t)CALL(variable5,COLOR_parser_nodes___PAble___n_kwredef))(variable5) /*PAble::n_kwredef*/;
    variable5 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable5 ==  NIT_NULL /*null*/) || ((variable5 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable5, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))(variable5,  NIT_NULL /*null*/) /*TKwredef::==*/)))))));
    ((mmbuilder___PPropdef___process_and_check_t)CALL( self,COLOR_mmbuilder___PPropdef___process_and_check))( self,  variable0 /*v*/, variable4, variable5,  variable3 /*visibility_level*/) /*AAttrPropdef::process_and_check*/;
    variable4 = ((parser_nodes___AAttrPropdef___n_type_t)CALL( self,COLOR_parser_nodes___AAttrPropdef___n_type))( self) /*AAttrPropdef::n_type*/;
    variable5 = ATTR_mmbuilder___AAttrPropdef____writemethod( self) /*AAttrPropdef::_writemethod*/;
    ((mmbuilder___PType___check_visibility_t)CALL(variable4,COLOR_mmbuilder___PType___check_visibility))(variable4,  variable0 /*v*/, variable5) /*PType::check_visibility*/;
  }
  return_label83: while(false);
  tracehead = trace.prev;
  return;
}
void mmbuilder___AAttrPropdef___accept_abs_syntax_visitor(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::AAttrPropdef::accept_abs_syntax_visitor (src/syntax//mmbuilder.nit:803,2--807:25)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((mmbuilder___AAttrPropdef___prop_t)CALL( self,COLOR_syntax_base___AAttrPropdef___prop))( self) /*AAttrPropdef::prop*/;
  ((syntax_base___AbsSyntaxVisitor___local_property__eq_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property__eq))( variable0 /*v*/, variable1) /*AbsSyntaxVisitor::local_property=*/;
  ((mmbuilder___AAttrPropdef___accept_abs_syntax_visitor_t)CALL( self,COLOR_SUPER_mmbuilder___AAttrPropdef___accept_abs_syntax_visitor))( self,  param0) /*super AAttrPropdef::accept_abs_syntax_visitor*/;
  ((syntax_base___AbsSyntaxVisitor___local_property__eq_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property__eq))( variable0 /*v*/,  NIT_NULL /*null*/) /*AbsSyntaxVisitor::local_property=*/;
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___AMethPropdef___name(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AMethPropdef::name (src/syntax//mmbuilder.nit:812,2--813:28)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___AMethPropdef____name( self) /*AMethPropdef::_name*/;
}
val_t mmbuilder___AMethPropdef___method(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AMethPropdef::method (src/syntax//mmbuilder.nit:815,2--45)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___AMethPropdef____method( self) /*AMethPropdef::_method*/;
}
void mmbuilder___AMethPropdef___accept_property_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::AMethPropdef::accept_property_builder (src/syntax//mmbuilder.nit:817,2--838:46)"};
  val_t variable0;
  val_t variable1;
      static val_t once_value_variable1_86; static int once_bool_variable1_86;
      static val_t once_value_variable1_87; static int once_bool_variable1_87;
    val_t variable2;
    static val_t once_value_variable2_88; static int once_bool_variable2_88;
      val_t variable3;
        static val_t once_value_variable2_89; static int once_bool_variable2_89;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___AMethPropdef___accept_property_builder_t)CALL( self,COLOR_SUPER_mmbuilder___AMethPropdef___accept_property_builder))( self,  param0) /*super AMethPropdef::accept_property_builder*/;
  variable1 = ((parser_nodes___AMethPropdef___n_methid_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_methid))( self) /*AMethPropdef::n_methid*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*PMethid::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = TAG_Bool(( self==NIT_NULL) || VAL_ISA( self, COLOR_AConcreteInitPropdef, ID_AConcreteInitPropdef)) /*cast AConcreteInitPropdef*/;
    if (UNTAG_Bool(variable1)) { /*if*/
      if (once_bool_variable1_86) variable1 = once_value_variable1_86;
      else {
        variable1 = NEW_string___String___with_native(BOX_NativeString("init"), TAG_Int(4)); /*new String*/
        variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
        once_value_variable1_86 = variable1;
        once_bool_variable1_86 = true;
      }
      ATTR_mmbuilder___AMethPropdef____name( self) /*AMethPropdef::_name*/ = variable1;
    } else { /*if*/
      if (once_bool_variable1_87) variable1 = once_value_variable1_87;
      else {
        variable1 = NEW_string___String___with_native(BOX_NativeString("main"), TAG_Int(4)); /*new String*/
        variable1 = ((symbol___String___to_symbol_t)CALL(variable1,COLOR_symbol___String___to_symbol))(variable1) /*String::to_symbol*/;
        once_value_variable1_87 = variable1;
        once_bool_variable1_87 = true;
      }
      ATTR_mmbuilder___AMethPropdef____name( self) /*AMethPropdef::_name*/ = variable1;
    }
  } else { /*if*/
    variable1 = ((parser_nodes___AMethPropdef___n_methid_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_methid))( self) /*AMethPropdef::n_methid*/;
    variable1 = ((mmbuilder___PMethid___name_t)CALL(variable1,COLOR_mmbuilder___PMethid___name))(variable1) /*PMethid::name*/;
    ATTR_mmbuilder___AMethPropdef____name( self) /*AMethPropdef::_name*/ = variable1;
    variable1 = ((parser_nodes___AMethPropdef___n_methid_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_methid))( self) /*AMethPropdef::n_methid*/;
    variable1 = ((mmbuilder___PMethid___name_t)CALL(variable1,COLOR_mmbuilder___PMethid___name))(variable1) /*PMethid::name*/;
    if (once_bool_variable2_88) variable2 = once_value_variable2_88;
    else {
      variable2 = NEW_string___String___with_native(BOX_NativeString("-"), TAG_Int(1)); /*new String*/
      variable2 = ((symbol___String___to_symbol_t)CALL(variable2,COLOR_symbol___String___to_symbol))(variable2) /*String::to_symbol*/;
      once_value_variable2_88 = variable2;
      once_bool_variable2_88 = true;
    }
    variable1 = TAG_Bool((variable1 == variable2) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1,variable2)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1, variable2) /*Symbol::==*/)))));
    if (UNTAG_Bool(variable1)) { /*if*/
      variable2 = ((parser_nodes___AMethPropdef___n_signature_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_signature))( self) /*AMethPropdef::n_signature*/;
      variable1 = variable2;
      variable2 = TAG_Bool(( variable1 /*ns*/==NIT_NULL) || VAL_ISA( variable1 /*ns*/, COLOR_ASignature, ID_ASignature)) /*cast ASignature*/;
      variable3 = variable2;
      if (UNTAG_Bool(variable3)) { /* and */
        variable3 = ((parser_nodes___ASignature___n_params_t)CALL( variable1 /*ns*/,COLOR_parser_nodes___ASignature___n_params))( variable1 /*ns*/) /*ASignature::n_params*/;
        variable3 = ((list___List___length_t)CALL(variable3,COLOR_abstract_collection___Collection___length))(variable3) /*List::length*/;
        variable3 = TAG_Bool((variable3)==( TAG_Int(0)));
      }
      variable2 = variable3;
      if (UNTAG_Bool(variable2)) { /*if*/
        if (once_bool_variable2_89) variable2 = once_value_variable2_89;
        else {
          variable2 = NEW_string___String___with_native(BOX_NativeString("unary -"), TAG_Int(7)); /*new String*/
          variable2 = ((symbol___String___to_symbol_t)CALL(variable2,COLOR_symbol___String___to_symbol))(variable2) /*String::to_symbol*/;
          once_value_variable2_89 = variable2;
          once_bool_variable2_89 = true;
        }
        ATTR_mmbuilder___AMethPropdef____name( self) /*AMethPropdef::_name*/ = variable2;
      }
    }
  }
  variable2 = ATTR_mmbuilder___AMethPropdef____name( self) /*AMethPropdef::_name*/;
  variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyBuilderVisitor::local_class*/;
  variable4 = NEW_syntax_base___MMMethSrcMethod___init(variable2, variable3,  self); /*new MMMethSrcMethod*/
  variable2 = variable4;
  variable1 = variable2;
  ATTR_mmbuilder___AMethPropdef____method( self) /*AMethPropdef::_method*/ =  variable1 /*prop*/;
  variable2 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyBuilderVisitor::local_class*/;
  ((mmbuilder___MMSrcLocalClass___add_src_local_property_t)CALL(variable2,COLOR_mmbuilder___MMSrcLocalClass___add_src_local_property))(variable2,  variable0 /*v*/,  variable1 /*prop*/) /*MMSrcLocalClass::add_src_local_property*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___AMethPropdef___accept_property_verifier(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::AMethPropdef::accept_property_verifier (src/syntax//mmbuilder.nit:841,2--860:69)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_array___Array___init(); /*new Array[PParam]*/
  ((mmbuilder___PropertyVerifierVisitor___params__eq_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___params__eq))( variable0 /*v*/, variable1) /*PropertyVerifierVisitor::params=*/;
  variable1 = NEW_array___Array___init(); /*new Array[PParam]*/
  ((mmbuilder___PropertyVerifierVisitor___untyped_params__eq_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___untyped_params__eq))( variable0 /*v*/, variable1) /*PropertyVerifierVisitor::untyped_params=*/;
  ((mmbuilder___PropertyVerifierVisitor___signature__eq_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___signature__eq))( variable0 /*v*/,  NIT_NULL /*null*/) /*PropertyVerifierVisitor::signature=*/;
  variable1 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
  ((mmbuilder___PropertyVerifierVisitor___vararg_rank__eq_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___vararg_rank__eq))( variable0 /*v*/, variable1) /*PropertyVerifierVisitor::vararg_rank=*/;
  ((mmbuilder___AMethPropdef___accept_property_verifier_t)CALL( self,COLOR_SUPER_mmbuilder___AMethPropdef___accept_property_verifier))( self,  param0) /*super AMethPropdef::accept_property_verifier*/;
  variable1 = ((mmbuilder___PropertyVerifierVisitor___signature_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___signature))( variable0 /*v*/) /*PropertyVerifierVisitor::signature*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMSignature::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
  } else { /*if*/
    variable1 = ATTR_mmbuilder___AMethPropdef____method( self) /*AMethPropdef::_method*/;
    variable2 = ((mmbuilder___PropertyVerifierVisitor___signature_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___signature))( variable0 /*v*/) /*PropertyVerifierVisitor::signature*/;
    ((static_type___MMLocalProperty___signature__eq_t)CALL(variable1,COLOR_static_type___MMLocalProperty___signature__eq))(variable1, variable2) /*MMMethSrcMethod::signature=*/;
  }
  variable1 =  TAG_Int(1);
  variable2 = ((parser_nodes___AMethPropdef___n_visibility_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_visibility))( self) /*AMethPropdef::n_visibility*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PVisibility::==*/)))))));
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = ((parser_nodes___AMethPropdef___n_visibility_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_visibility))( self) /*AMethPropdef::n_visibility*/;
    variable3 = ((mmbuilder___PVisibility___level_t)CALL(variable3,COLOR_mmbuilder___PVisibility___level))(variable3) /*PVisibility::level*/;
    variable3 = TAG_Bool(UNTAG_Int(variable3)>UNTAG_Int( TAG_Int(1)));
  }
  variable2 = variable3;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((parser_nodes___AMethPropdef___n_visibility_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_visibility))( self) /*AMethPropdef::n_visibility*/;
    variable2 = ((mmbuilder___PVisibility___level_t)CALL(variable2,COLOR_mmbuilder___PVisibility___level))(variable2) /*PVisibility::level*/;
    variable1 = variable2 /*visibility_level=*/;
  }
  variable2 = ATTR_mmbuilder___AMethPropdef____method( self) /*AMethPropdef::_method*/;
  variable3 = ((parser_nodes___AMethPropdef___n_kwredef_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_kwredef))( self) /*AMethPropdef::n_kwredef*/;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*TKwredef::==*/)))))));
  ((mmbuilder___PPropdef___process_and_check_t)CALL( self,COLOR_mmbuilder___PPropdef___process_and_check))( self,  variable0 /*v*/, variable2, variable3,  variable1 /*visibility_level*/) /*AMethPropdef::process_and_check*/;
  variable2 = ((parser_nodes___AMethPropdef___n_signature_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_signature))( self) /*AMethPropdef::n_signature*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PSignature::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((parser_nodes___AMethPropdef___n_signature_t)CALL( self,COLOR_parser_nodes___AMethPropdef___n_signature))( self) /*AMethPropdef::n_signature*/;
    variable3 = ATTR_mmbuilder___AMethPropdef____method( self) /*AMethPropdef::_method*/;
    ((mmbuilder___PSignature___check_visibility_t)CALL(variable2,COLOR_mmbuilder___PSignature___check_visibility))(variable2,  variable0 /*v*/, variable3) /*PSignature::check_visibility*/;
  }
  tracehead = trace.prev;
  return;
}
void mmbuilder___AMethPropdef___accept_abs_syntax_visitor(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::AMethPropdef::accept_abs_syntax_visitor (src/syntax//mmbuilder.nit:863,2--867:25)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((mmbuilder___AMethPropdef___method_t)CALL( self,COLOR_syntax_base___AMethPropdef___method))( self) /*AMethPropdef::method*/;
  ((syntax_base___AbsSyntaxVisitor___local_property__eq_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property__eq))( variable0 /*v*/, variable1) /*AbsSyntaxVisitor::local_property=*/;
  ((mmbuilder___AMethPropdef___accept_abs_syntax_visitor_t)CALL( self,COLOR_SUPER_mmbuilder___AMethPropdef___accept_abs_syntax_visitor))( self,  param0) /*super AMethPropdef::accept_abs_syntax_visitor*/;
  ((syntax_base___AbsSyntaxVisitor___local_property__eq_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property__eq))( variable0 /*v*/,  NIT_NULL /*null*/) /*AbsSyntaxVisitor::local_property=*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___AMainMethPropdef___process_and_check(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3) {
  struct trace_t trace = {NULL, "mmbuilder::AMainMethPropdef::process_and_check (src/syntax//mmbuilder.nit:872,2--875:82)"};
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
  variable3 =  param3;
  variable4 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*prop*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*prop*/) /*MMSrcLocalProperty::global*/;
  ((abstractmetamodel___MMGlobalProperty___visibility_level__eq_t)CALL(variable4,COLOR_abstractmetamodel___MMGlobalProperty___visibility_level__eq))(variable4,  variable3 /*visibility_level*/) /*MMGlobalProperty::visibility_level=*/;
  variable4 = NEW_array___Array___init(); /*new Array[MMType]*/
  variable5 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyVerifierVisitor::local_class*/;
  variable5 = ((genericity___MMLocalClass___get_type_t)CALL(variable5,COLOR_static_type___MMLocalClass___get_type))(variable5) /*MMSrcLocalClass::get_type*/;
  variable6 = NEW_static_type___MMSignature___init(variable4,  NIT_NULL /*null*/, variable5); /*new MMSignature*/
  variable4 = variable6;
  ((static_type___MMLocalProperty___signature__eq_t)CALL( variable1 /*prop*/,COLOR_static_type___MMLocalProperty___signature__eq))( variable1 /*prop*/, variable4) /*MMSrcLocalProperty::signature=*/;
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___ATypePropdef___prop(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::ATypePropdef::prop (src/syntax//mmbuilder.nit:881,2--45)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___ATypePropdef____prop( self) /*ATypePropdef::_prop*/;
}
void mmbuilder___ATypePropdef___accept_property_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ATypePropdef::accept_property_builder (src/syntax//mmbuilder.nit:883,2--889:46)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___ATypePropdef___accept_property_builder_t)CALL( self,COLOR_SUPER_mmbuilder___ATypePropdef___accept_property_builder))( self,  param0) /*super ATypePropdef::accept_property_builder*/;
  variable2 = ((parser_nodes___ATypePropdef___n_id_t)CALL( self,COLOR_parser_nodes___ATypePropdef___n_id))( self) /*ATypePropdef::n_id*/;
  variable2 = ((syntax_base___Token___to_symbol_t)CALL(variable2,COLOR_syntax_base___Token___to_symbol))(variable2) /*TClassid::to_symbol*/;
  variable1 = variable2;
  variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyBuilderVisitor::local_class*/;
  variable4 = NEW_syntax_base___MMSrcTypeProperty___init( variable1 /*name*/, variable3,  self); /*new MMSrcTypeProperty*/
  variable3 = variable4;
  variable2 = variable3;
  ATTR_mmbuilder___ATypePropdef____prop( self) /*ATypePropdef::_prop*/ =  variable2 /*prop*/;
  variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyBuilderVisitor::local_class*/;
  ((mmbuilder___MMSrcLocalClass___add_src_local_property_t)CALL(variable3,COLOR_mmbuilder___MMSrcLocalClass___add_src_local_property))(variable3,  variable0 /*v*/,  variable2 /*prop*/) /*MMSrcLocalClass::add_src_local_property*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ATypePropdef___accept_property_verifier(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ATypePropdef::accept_property_verifier (src/syntax//mmbuilder.nit:892,2--898:65)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___ATypePropdef___accept_property_verifier_t)CALL( self,COLOR_SUPER_mmbuilder___ATypePropdef___accept_property_verifier))( self,  param0) /*super ATypePropdef::accept_property_verifier*/;
  variable2 = NEW_array___Array___init(); /*new Array[MMType]*/
  variable3 = ((parser_nodes___ATypePropdef___n_type_t)CALL( self,COLOR_parser_nodes___ATypePropdef___n_type))( self) /*ATypePropdef::n_type*/;
  variable3 = ((syntax_base___PType___get_stype_t)CALL(variable3,COLOR_syntax_base___PType___get_stype))(variable3,  variable0 /*v*/) /*PType::get_stype*/;
  variable4 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyVerifierVisitor::local_class*/;
  variable4 = ((genericity___MMLocalClass___get_type_t)CALL(variable4,COLOR_static_type___MMLocalClass___get_type))(variable4) /*MMSrcLocalClass::get_type*/;
  variable5 = NEW_static_type___MMSignature___init(variable2, variable3, variable4); /*new MMSignature*/
  variable2 = variable5;
  variable1 = variable2;
  variable2 = ATTR_mmbuilder___ATypePropdef____prop( self) /*ATypePropdef::_prop*/;
  ((static_type___MMLocalProperty___signature__eq_t)CALL(variable2,COLOR_static_type___MMLocalProperty___signature__eq))(variable2,  variable1 /*signature*/) /*MMSrcTypeProperty::signature=*/;
  variable3 = ((parser_nodes___ATypePropdef___n_visibility_t)CALL( self,COLOR_parser_nodes___ATypePropdef___n_visibility))( self) /*ATypePropdef::n_visibility*/;
  variable3 = ((mmbuilder___PVisibility___level_t)CALL(variable3,COLOR_mmbuilder___PVisibility___level))(variable3) /*PVisibility::level*/;
  variable2 = variable3;
  variable3 = ATTR_mmbuilder___ATypePropdef____prop( self) /*ATypePropdef::_prop*/;
  variable4 = ((parser_nodes___ATypePropdef___n_kwredef_t)CALL( self,COLOR_parser_nodes___ATypePropdef___n_kwredef))( self) /*ATypePropdef::n_kwredef*/;
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  NIT_NULL /*null*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  NIT_NULL /*null*/) /*TKwredef::==*/)))))));
  ((mmbuilder___PPropdef___process_and_check_t)CALL( self,COLOR_mmbuilder___PPropdef___process_and_check))( self,  variable0 /*v*/, variable3, variable4,  variable2 /*visibility_level*/) /*ATypePropdef::process_and_check*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___ATypePropdef___accept_abs_syntax_visitor(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ATypePropdef::accept_abs_syntax_visitor (src/syntax//mmbuilder.nit:901,2--905:25)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((mmbuilder___ATypePropdef___prop_t)CALL( self,COLOR_syntax_base___ATypePropdef___prop))( self) /*ATypePropdef::prop*/;
  ((syntax_base___AbsSyntaxVisitor___local_property__eq_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property__eq))( variable0 /*v*/, variable1) /*AbsSyntaxVisitor::local_property=*/;
  ((mmbuilder___ATypePropdef___accept_abs_syntax_visitor_t)CALL( self,COLOR_SUPER_mmbuilder___ATypePropdef___accept_abs_syntax_visitor))( self,  param0) /*super ATypePropdef::accept_abs_syntax_visitor*/;
  ((syntax_base___AbsSyntaxVisitor___local_property__eq_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_property__eq))( variable0 /*v*/,  NIT_NULL /*null*/) /*AbsSyntaxVisitor::local_property=*/;
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___MethidAccumulator___name(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::MethidAccumulator::name (src/syntax//mmbuilder.nit:912,2--28)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___MethidAccumulator____name( self) /*MethidAccumulator::_name*/;
}
void mmbuilder___MethidAccumulator___visit(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::MethidAccumulator::visit (src/syntax//mmbuilder.nit:913,2--918:19)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(( variable0 /*n*/==NIT_NULL) || VAL_ISA( variable0 /*n*/, COLOR_Token, ID_Token)) /*cast Token*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_mmbuilder___MethidAccumulator____name( self) /*MethidAccumulator::_name*/;
    variable2 = ((lexer___Token___text_t)CALL( variable0 /*n*/,COLOR_lexer___Token___text))( variable0 /*n*/) /*Token::text*/;
    ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable2) /*String::append*/;
  } else { /*if*/
    ((parser_prod___PNode___visit_all_t)CALL( variable0 /*n*/,COLOR_parser_prod___PNode___visit_all))( variable0 /*n*/,  self) /*PNode::visit_all*/;
  }
  tracehead = trace.prev;
  return;
}
void mmbuilder___MethidAccumulator___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "mmbuilder::MethidAccumulator::init (src/syntax//mmbuilder.nit:922,2--924:20)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MethidAccumulator].i]) return;
  variable0 = NEW_string___String___init(); /*new String*/
  ATTR_mmbuilder___MethidAccumulator____name( self) /*MethidAccumulator::_name*/ = variable0;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MethidAccumulator].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___PMethid___name(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PMethid::name (src/syntax//mmbuilder.nit:929,2--930:28)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___PMethid____name( self) /*PMethid::_name*/;
}
void mmbuilder___PMethid___accept_property_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PMethid::accept_property_builder (src/syntax//mmbuilder.nit:932,2--937:7)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = NEW_mmbuilder___MethidAccumulator___init(); /*new MethidAccumulator*/
  variable1 = variable2;
  ((mmbuilder___MethidAccumulator___visit_t)CALL( variable1 /*accumulator*/,COLOR_parser_prod___Visitor___visit))( variable1 /*accumulator*/,  self) /*MethidAccumulator::visit*/;
  variable2 = ((mmbuilder___MethidAccumulator___name_t)CALL( variable1 /*accumulator*/,COLOR_mmbuilder___MethidAccumulator___name))( variable1 /*accumulator*/) /*MethidAccumulator::name*/;
  variable2 = ((symbol___String___to_symbol_t)CALL(variable2,COLOR_symbol___String___to_symbol))(variable2) /*String::to_symbol*/;
  ATTR_mmbuilder___PMethid____name( self) /*PMethid::_name*/ = variable2;
  ((mmbuilder___PMethid___accept_property_builder_t)CALL( self,COLOR_SUPER_mmbuilder___PMethid___accept_property_builder))( self,  param0) /*super PMethid::accept_property_builder*/;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PSignature___check_visibility(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmbuilder::PSignature::check_visibility (src/syntax//mmbuilder.nit:942,2--943:65)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method check_visibility called (src/syntax//mmbuilder.nit:942,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
void mmbuilder___ASignature___accept_property_verifier(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::ASignature::accept_property_verifier (src/syntax//mmbuilder.nit:947,2--966:43)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
        val_t variable3;
        val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___ASignature___accept_property_verifier_t)CALL( self,COLOR_SUPER_mmbuilder___ASignature___accept_property_verifier))( self,  param0) /*super ASignature::accept_property_verifier*/;
  variable1 = ((mmbuilder___PropertyVerifierVisitor___untyped_params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___untyped_params))( variable0 /*v*/) /*PropertyVerifierVisitor::untyped_params*/;
  variable1 = ((array___AbstractArray___is_empty_t)CALL(variable1,COLOR_abstract_collection___Collection___is_empty))(variable1) /*Array::is_empty*/;
  if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { /*if*/
    variable1 = ((mmbuilder___PropertyVerifierVisitor___untyped_params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___untyped_params))( variable0 /*v*/) /*PropertyVerifierVisitor::untyped_params*/;
    variable1 = ((abstract_collection___IndexedCollection___first_t)CALL(variable1,COLOR_abstract_collection___Collection___first))(variable1) /*Array::first*/;
    variable2 = ((mmbuilder___PropertyVerifierVisitor___params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___params))( variable0 /*v*/) /*PropertyVerifierVisitor::params*/;
    variable2 = ((abstract_collection___IndexedCollection___first_t)CALL(variable2,COLOR_abstract_collection___Collection___first))(variable2) /*Array::first*/;
    variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 == variable2) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1,variable2)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1, variable2) /*PParam::==*/)))))));
    variable2 = variable1;
    if (!UNTAG_Bool(variable2)) { /* or */
      variable2 = ((parser_nodes___ASignature___n_type_t)CALL( self,COLOR_parser_nodes___ASignature___n_type))( self) /*ASignature::n_type*/;
      variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PType::==*/)))))));
    }
    variable1 = variable2;
    if (UNTAG_Bool(variable1)) { /*if*/
      variable1 = ((mmbuilder___PropertyVerifierVisitor___untyped_params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___untyped_params))( variable0 /*v*/) /*PropertyVerifierVisitor::untyped_params*/;
      variable1 = ((abstract_collection___IndexedCollection___first_t)CALL(variable1,COLOR_abstract_collection___Collection___first))(variable1) /*Array::first*/;
      variable2 = NEW_string___String___with_native(BOX_NativeString("Syntax error: untyped parameter."), TAG_Int(32)); /*new String*/
      ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/, variable1, variable2) /*PropertyVerifierVisitor::error*/;
      goto return_label99;
    }
  } else { /*if*/
    variable1 = ((mmbuilder___PropertyVerifierVisitor___params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___params))( variable0 /*v*/) /*PropertyVerifierVisitor::params*/;
    variable1 = ((array___AbstractArray___is_empty_t)CALL(variable1,COLOR_abstract_collection___Collection___is_empty))(variable1) /*Array::is_empty*/;
    variable1 =  TAG_Bool(!UNTAG_Bool(variable1));
    if (!UNTAG_Bool(variable1)) { /* or */
      variable1 = ((parser_nodes___ASignature___n_type_t)CALL( self,COLOR_parser_nodes___ASignature___n_type))( self) /*ASignature::n_type*/;
      variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*PType::==*/)))))));
    }
    if (UNTAG_Bool(variable1)) { /*if*/
      variable2 = NEW_array___Array___init(); /*new Array[MMType]*/
      variable1 = variable2;
      variable2 = ((mmbuilder___PropertyVerifierVisitor___params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___params))( variable0 /*v*/) /*PropertyVerifierVisitor::params*/;
      variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
      while (true) { /*for*/
        variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
        if (!UNTAG_Bool(variable3)) break; /*for*/
        variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
        variable4 = ((mmbuilder___PParam___stype_t)CALL( variable3 /*p*/,COLOR_mmbuilder___PParam___stype))( variable3 /*p*/) /*PParam::stype*/;
        ((array___AbstractArray___add_t)CALL( variable1 /*pars*/,COLOR_abstract_collection___SimpleCollection___add))( variable1 /*pars*/, variable4) /*Array::add*/;
        continue_100: while(0);
        ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
      }
      break_100: while(0);
      variable2 =  NIT_NULL /*null*/;
      variable3 = ((parser_nodes___ASignature___n_type_t)CALL( self,COLOR_parser_nodes___ASignature___n_type))( self) /*ASignature::n_type*/;
      variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable3 ==  NIT_NULL /*null*/) || ((variable3 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable3, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable3,COLOR_kernel___Object_____eqeq))(variable3,  NIT_NULL /*null*/) /*PType::==*/)))))));
      if (UNTAG_Bool(variable3)) { /*if*/
        variable3 = ((parser_nodes___ASignature___n_type_t)CALL( self,COLOR_parser_nodes___ASignature___n_type))( self) /*ASignature::n_type*/;
        variable3 = ((syntax_base___PType___get_stype_t)CALL(variable3,COLOR_syntax_base___PType___get_stype))(variable3,  variable0 /*v*/) /*PType::get_stype*/;
        variable2 = variable3 /*ret=*/;
      }
      variable3 = ((syntax_base___AbsSyntaxVisitor___local_class_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___local_class))( variable0 /*v*/) /*PropertyVerifierVisitor::local_class*/;
      variable3 = ((genericity___MMLocalClass___get_type_t)CALL(variable3,COLOR_static_type___MMLocalClass___get_type))(variable3) /*MMSrcLocalClass::get_type*/;
      variable4 = NEW_static_type___MMSignature___init( variable1 /*pars*/,  variable2 /*ret*/, variable3); /*new MMSignature*/
      variable3 = variable4;
      ((mmbuilder___PropertyVerifierVisitor___signature__eq_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___signature__eq))( variable0 /*v*/, variable3) /*PropertyVerifierVisitor::signature=*/;
      variable3 = ((mmbuilder___PropertyVerifierVisitor___vararg_rank_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___vararg_rank))( variable0 /*v*/) /*PropertyVerifierVisitor::vararg_rank*/;
      variable3 = TAG_Bool(UNTAG_Int(variable3)>=UNTAG_Int( TAG_Int(0)));
      if (UNTAG_Bool(variable3)) { /*if*/
        variable3 = ((mmbuilder___PropertyVerifierVisitor___signature_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___signature))( variable0 /*v*/) /*PropertyVerifierVisitor::signature*/;
        variable4 = ((mmbuilder___PropertyVerifierVisitor___vararg_rank_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___vararg_rank))( variable0 /*v*/) /*PropertyVerifierVisitor::vararg_rank*/;
        ((vararg___MMSignature___vararg_rank__eq_t)CALL(variable3,COLOR_vararg___MMSignature___vararg_rank__eq))(variable3, variable4) /*MMSignature::vararg_rank=*/;
      }
    }
  }
  return_label99: while(false);
  tracehead = trace.prev;
  return;
}
void mmbuilder___ASignature___check_visibility(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmbuilder::ASignature::check_visibility (src/syntax//mmbuilder.nit:971,2--977:53)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*p*/) /*MMSrcLocalProperty::global*/;
  variable2 = ((abstractmetamodel___MMGlobalProperty___visibility_level_t)CALL(variable2,COLOR_abstractmetamodel___MMGlobalProperty___visibility_level))(variable2) /*MMGlobalProperty::visibility_level*/;
  variable2 = TAG_Bool(UNTAG_Int(variable2)>=UNTAG_Int( TAG_Int(3)));
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label101;
  }
  variable2 = ((parser_nodes___ASignature___n_params_t)CALL( self,COLOR_parser_nodes___ASignature___n_params))( self) /*ASignature::n_params*/;
  variable2 = ((list___List___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*List::iterator*/;
  while (true) { /*for*/
    variable3 = ((list___ListIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ListIterator::is_ok*/;
    if (!UNTAG_Bool(variable3)) break; /*for*/
    variable3 = ((list___ListIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ListIterator::item*/;
    variable4 = ((parser_nodes___PParam___n_type_t)CALL( variable3 /*n*/,COLOR_parser_nodes___PParam___n_type))( variable3 /*n*/) /*PParam::n_type*/;
    variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  NIT_NULL /*null*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  NIT_NULL /*null*/) /*PType::==*/)))))));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = ((parser_nodes___PParam___n_type_t)CALL( variable3 /*n*/,COLOR_parser_nodes___PParam___n_type))( variable3 /*n*/) /*PParam::n_type*/;
      ((mmbuilder___PType___check_visibility_t)CALL(variable4,COLOR_mmbuilder___PType___check_visibility))(variable4,  variable0 /*v*/,  variable1 /*p*/) /*PType::check_visibility*/;
    }
    continue_102: while(0);
    ((list___ListIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ListIterator::next*/;
  }
  break_102: while(0);
  variable2 = ((parser_nodes___ASignature___n_type_t)CALL( self,COLOR_parser_nodes___ASignature___n_type))( self) /*ASignature::n_type*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*PType::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ((parser_nodes___ASignature___n_type_t)CALL( self,COLOR_parser_nodes___ASignature___n_type))( self) /*ASignature::n_type*/;
    ((mmbuilder___PType___check_visibility_t)CALL(variable2,COLOR_mmbuilder___PType___check_visibility))(variable2,  variable0 /*v*/,  variable1 /*p*/) /*PType::check_visibility*/;
  }
  return_label101: while(false);
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___PParam___position(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PParam::position (src/syntax//mmbuilder.nit:982,2--35)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___PParam____position( self) /*PParam::_position*/;
}
val_t mmbuilder___PParam___variable(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PParam::variable (src/syntax//mmbuilder.nit:984,2--40)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___PParam____variable( self) /*PParam::_variable*/;
}
val_t mmbuilder___PParam___stype(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PParam::stype (src/syntax//mmbuilder.nit:986,2--987:38)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_mmbuilder___PParam____stype( self) /*PParam::_stype*/;
}
void mmbuilder___PParam___stype__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PParam::stype= (src/syntax//mmbuilder.nit:986,2--987:38)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_mmbuilder___PParam____stype( self) /*PParam::_stype*/ =  param0;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PParam___accept_property_verifier(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PParam::accept_property_verifier (src/syntax//mmbuilder.nit:989,2--1010:25)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
      val_t variable3;
      val_t variable4;
        val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ((mmbuilder___PParam___accept_property_verifier_t)CALL( self,COLOR_SUPER_mmbuilder___PParam___accept_property_verifier))( self,  param0) /*super PParam::accept_property_verifier*/;
  variable1 = ((mmbuilder___PropertyVerifierVisitor___params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___params))( variable0 /*v*/) /*PropertyVerifierVisitor::params*/;
  variable1 = ((array___AbstractArray___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*Array::length*/;
  ATTR_mmbuilder___PParam____position( self) /*PParam::_position*/ = variable1;
  variable1 = ((parser_nodes___PParam___n_id_t)CALL( self,COLOR_parser_nodes___PParam___n_id))( self) /*PParam::n_id*/;
  variable1 = ((syntax_base___Token___to_symbol_t)CALL(variable1,COLOR_syntax_base___Token___to_symbol))(variable1) /*TId::to_symbol*/;
  variable2 = NEW_syntax_base___Variable___init(variable1,  self); /*new Variable*/
  variable1 = variable2;
  ATTR_mmbuilder___PParam____variable( self) /*PParam::_variable*/ = variable1;
  variable1 = ((mmbuilder___PropertyVerifierVisitor___params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___params))( variable0 /*v*/) /*PropertyVerifierVisitor::params*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1,  self) /*Array::add*/;
  variable1 = ((mmbuilder___PropertyVerifierVisitor___untyped_params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___untyped_params))( variable0 /*v*/) /*PropertyVerifierVisitor::untyped_params*/;
  ((array___AbstractArray___add_t)CALL(variable1,COLOR_abstract_collection___SimpleCollection___add))(variable1,  self) /*Array::add*/;
  variable1 = ((parser_nodes___PParam___n_type_t)CALL( self,COLOR_parser_nodes___PParam___n_type))( self) /*PParam::n_type*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*PType::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable2 = ((parser_nodes___PParam___n_type_t)CALL( self,COLOR_parser_nodes___PParam___n_type))( self) /*PParam::n_type*/;
    variable2 = ((syntax_base___PType___get_stype_t)CALL(variable2,COLOR_syntax_base___PType___get_stype))(variable2,  variable0 /*v*/) /*PType::get_stype*/;
    variable1 = variable2;
    variable2 = ((mmbuilder___PropertyVerifierVisitor___untyped_params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___untyped_params))( variable0 /*v*/) /*PropertyVerifierVisitor::untyped_params*/;
    variable2 = ((array___AbstractArray___iterator_t)CALL(variable2,COLOR_abstract_collection___Collection___iterator))(variable2) /*Array::iterator*/;
    while (true) { /*for*/
      variable3 = ((array___ArrayIterator___is_ok_t)CALL(variable2,COLOR_abstract_collection___Iterator___is_ok))(variable2) /*ArrayIterator::is_ok*/;
      if (!UNTAG_Bool(variable3)) break; /*for*/
      variable3 = ((array___ArrayIterator___item_t)CALL(variable2,COLOR_abstract_collection___Iterator___item))(variable2) /*ArrayIterator::item*/;
      ((mmbuilder___PParam___stype__eq_t)CALL( variable3 /*p*/,COLOR_mmbuilder___PParam___stype__eq))( variable3 /*p*/,  variable1 /*stype*/) /*PParam::stype=*/;
      variable4 = ((mmbuilder___PParam___is_vararg_t)CALL( self,COLOR_mmbuilder___PParam___is_vararg))( self) /*PParam::is_vararg*/;
      if (UNTAG_Bool(variable4)) { /*if*/
        variable4 = ((mmbuilder___PropertyVerifierVisitor___vararg_rank_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___vararg_rank))( variable0 /*v*/) /*PropertyVerifierVisitor::vararg_rank*/;
        variable5 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
        variable4 = TAG_Bool((variable4)==(variable5));
        if (UNTAG_Bool(variable4)) { /*if*/
          variable4 = ((mmbuilder___PParam___position_t)CALL( variable3 /*p*/,COLOR_syntax_base___PParam___position))( variable3 /*p*/) /*PParam::position*/;
          ((mmbuilder___PropertyVerifierVisitor___vararg_rank__eq_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___vararg_rank__eq))( variable0 /*v*/, variable4) /*PropertyVerifierVisitor::vararg_rank=*/;
        } else { /*if*/
          variable4 = NEW_string___String___with_native(BOX_NativeString("Error: A vararg parameter is already defined."), TAG_Int(45)); /*new String*/
          ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*PropertyVerifierVisitor::error*/;
        }
        variable4 = ((syntax_base___AbsSyntaxVisitor___type_array_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___type_array))( variable0 /*v*/,  variable1 /*stype*/) /*PropertyVerifierVisitor::type_array*/;
        variable1 = variable4 /*stype=*/;
      }
      variable4 = ((mmbuilder___PParam___variable_t)CALL( variable3 /*p*/,COLOR_syntax_base___PParam___variable))( variable3 /*p*/) /*PParam::variable*/;
      ((syntax_base___Variable___stype__eq_t)CALL(variable4,COLOR_syntax_base___Variable___stype__eq))(variable4,  variable1 /*stype*/) /*Variable::stype=*/;
      continue_104: while(0);
      ((array___ArrayIterator___next_t)CALL(variable2,COLOR_abstract_collection___Iterator___next))(variable2) /*ArrayIterator::next*/;
    }
    break_104: while(0);
    variable2 = ((mmbuilder___PropertyVerifierVisitor___untyped_params_t)CALL( variable0 /*v*/,COLOR_mmbuilder___PropertyVerifierVisitor___untyped_params))( variable0 /*v*/) /*PropertyVerifierVisitor::untyped_params*/;
    ((array___AbstractArray___clear_t)CALL(variable2,COLOR_abstract_collection___RemovableCollection___clear))(variable2) /*Array::clear*/;
  }
  tracehead = trace.prev;
  return;
}
val_t mmbuilder___PParam___is_vararg(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::PParam::is_vararg (src/syntax//mmbuilder.nit:1014,2--21)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method is_vararg called (src/syntax//mmbuilder.nit:1014,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t mmbuilder___AParam___is_vararg(val_t  self) {
  struct trace_t trace = {NULL, "mmbuilder::AParam::is_vararg (src/syntax//mmbuilder.nit:1018,2--51)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((parser_nodes___AParam___n_dotdotdot_t)CALL( self,COLOR_parser_nodes___AParam___n_dotdotdot))( self) /*AParam::n_dotdotdot*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*TDotdotdot::==*/)))))));
  goto return_label105;
  return_label105: while(false);
  tracehead = trace.prev;
  return variable0;
}
void mmbuilder___PType___check_visibility(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmbuilder::PType::check_visibility (src/syntax//mmbuilder.nit:1022,2--1023:73)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method check_visibility called (src/syntax//mmbuilder.nit:1022,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return;
}
void mmbuilder___AType___check_visibility(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "mmbuilder::AType::check_visibility (src/syntax//mmbuilder.nit:1027,2--1038:26)"};
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
  variable1 =  param1;
  variable2 = ((abstractmetamodel___MMLocalProperty___global_t)CALL( variable1 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___global))( variable1 /*p*/) /*MMSrcLocalProperty::global*/;
  variable2 = ((abstractmetamodel___MMGlobalProperty___visibility_level_t)CALL(variable2,COLOR_abstractmetamodel___MMGlobalProperty___visibility_level))(variable2) /*MMGlobalProperty::visibility_level*/;
  variable2 = TAG_Bool(UNTAG_Int(variable2)>=UNTAG_Int( TAG_Int(3)));
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label106;
  }
  variable3 = ((syntax_base___AType___get_stype_t)CALL( self,COLOR_syntax_base___PType___get_stype))( self,  variable0 /*v*/) /*AType::get_stype*/;
  variable2 = variable3;
  variable3 = TAG_Bool(( variable2 /*t*/ ==  NIT_NULL /*null*/) || (( variable2 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*t*/,COLOR_kernel___Object_____eqeq))( variable2 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))));
  if (UNTAG_Bool(variable3)) { /*if*/
    goto return_label106;
  }
  variable4 = ((static_type___MMType___local_class_t)CALL( variable2 /*t*/,COLOR_static_type___MMType___local_class))( variable2 /*t*/) /*MMType::local_class*/;
  variable3 = variable4;
  variable4 = TAG_Bool(( variable3 /*bc*/ ==  NIT_NULL /*null*/) || (( variable3 /*bc*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*bc*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*bc*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*bc*/,COLOR_kernel___Object_____eqeq))( variable3 /*bc*/,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))));
  if (UNTAG_Bool(variable4)) { /*if*/
    goto return_label106;
  }
  variable4 = ((abstractmetamodel___MMLocalClass___global_t)CALL( variable3 /*bc*/,COLOR_abstractmetamodel___MMLocalClass___global))( variable3 /*bc*/) /*MMLocalClass::global*/;
  variable4 = ((abstractmetamodel___MMGlobalClass___visibility_level_t)CALL(variable4,COLOR_abstractmetamodel___MMGlobalClass___visibility_level))(variable4) /*MMGlobalClass::visibility_level*/;
  variable4 = TAG_Bool(UNTAG_Int(variable4)>=UNTAG_Int( TAG_Int(3)));
  if (UNTAG_Bool(variable4)) { /*if*/
    variable4 = NEW_string___String___init(); /*new String*/
    variable5 = NEW_string___String___with_native(BOX_NativeString("Access error: Class "), TAG_Int(20)); /*new String*/
    variable6 = variable5;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable6) /*String::append*/;
    variable7 =  variable3 /*bc*/;
    variable7 = ((string___String___to_s_t)CALL(variable7,COLOR_string___Object___to_s))(variable7) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable7) /*String::append*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString(" is private and cannot be used in the signature of the non-private property "), TAG_Int(76)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable9) /*String::append*/;
    variable10 =  variable1 /*p*/;
    variable10 = ((string___String___to_s_t)CALL(variable10,COLOR_string___Object___to_s))(variable10) /*String::to_s*/;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable10) /*String::append*/;
    variable11 = NEW_string___String___with_native(BOX_NativeString("."), TAG_Int(1)); /*new String*/
    variable12 = variable11;
    ((string___String___append_t)CALL(variable4,COLOR_abstract_collection___IndexedCollection___append))(variable4, variable12) /*String::append*/;
    ((syntax_base___AbsSyntaxVisitor___error_t)CALL( variable0 /*v*/,COLOR_syntax_base___AbsSyntaxVisitor___error))( variable0 /*v*/,  self, variable4) /*AbsSyntaxVisitor::error*/;
  }
  variable4 = ((parser_nodes___AType___n_types_t)CALL( self,COLOR_parser_nodes___AType___n_types))( self) /*AType::n_types*/;
  variable4 = ((list___List___iterator_t)CALL(variable4,COLOR_abstract_collection___Collection___iterator))(variable4) /*List::iterator*/;
  while (true) { /*for*/
    variable5 = ((list___ListIterator___is_ok_t)CALL(variable4,COLOR_abstract_collection___Iterator___is_ok))(variable4) /*ListIterator::is_ok*/;
    if (!UNTAG_Bool(variable5)) break; /*for*/
    variable5 = ((list___ListIterator___item_t)CALL(variable4,COLOR_abstract_collection___Iterator___item))(variable4) /*ListIterator::item*/;
    ((mmbuilder___PType___check_visibility_t)CALL( variable5 /*n*/,COLOR_mmbuilder___PType___check_visibility))( variable5 /*n*/,  variable0 /*v*/,  variable1 /*p*/) /*PType::check_visibility*/;
    continue_107: while(0);
    ((list___ListIterator___next_t)CALL(variable4,COLOR_abstract_collection___Iterator___next))(variable4) /*ListIterator::next*/;
  }
  break_107: while(0);
  return_label106: while(false);
  tracehead = trace.prev;
  return;
}
void mmbuilder___PExpr___accept_class_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PExpr::accept_class_builder (src/syntax//mmbuilder.nit:1044,2--34)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PExpr___accept_property_builder(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PExpr::accept_property_builder (src/syntax//mmbuilder.nit:1045,2--37)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  tracehead = trace.prev;
  return;
}
void mmbuilder___PExpr___accept_property_verifier(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "mmbuilder::PExpr::accept_property_verifier (src/syntax//mmbuilder.nit:1046,2--38)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  tracehead = trace.prev;
  return;
}
