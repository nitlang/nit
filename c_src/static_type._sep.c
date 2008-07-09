#include "static_type._sep.h"
val_t static_type___MMLocalClass___get_type(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMLocalClass::get_type (src/metamodel//static_type.nit:27,2--31:25)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_static_type___MMLocalClass____base_type_cache( self) /*MMLocalClass::_base_type_cache*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*MMType::==*/)))));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = NEW_static_type___MMTypeSimpleClass___init( self); /*new MMTypeSimpleClass*/
    ATTR_static_type___MMLocalClass____base_type_cache( self) /*MMLocalClass::_base_type_cache*/ = variable0;
  }
  variable0 = ATTR_static_type___MMLocalClass____base_type_cache( self) /*MMLocalClass::_base_type_cache*/;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
void static_type___MMLocalClass___add_ancestor(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMLocalClass::add_ancestor (src/metamodel//static_type.nit:34,2--39:31)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
  variable2 = ((static_type___MMAncestor___local_class_t)CALL( variable0 /*a*/,COLOR_static_type___MMAncestor___local_class))( variable0 /*a*/) /*MMAncestor::local_class*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1, variable2) /*Map::has_key*/;
  if (!UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable1)))) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:37,3--45\n"); nit_exit(1);}
  variable1 = ((static_type___MMAncestor___local_class_t)CALL( variable0 /*a*/,COLOR_static_type___MMAncestor___local_class))( variable0 /*a*/) /*MMAncestor::local_class*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  self) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, self)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  self) /*MMLocalClass::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:38,3--30\n"); nit_exit(1);}
  variable1 = ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
  variable2 = ((static_type___MMAncestor___local_class_t)CALL( variable0 /*a*/,COLOR_static_type___MMAncestor___local_class))( variable0 /*a*/) /*MMAncestor::local_class*/;
  ((abstract_collection___Map_____braeq_t)CALL(variable1,COLOR_abstract_collection___Map_____braeq))(variable1, variable2,  variable0 /*a*/) /*Map::[]=*/;
  tracehead = trace.prev;
  return;
}
val_t static_type___MMLocalClass___ancestors(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMLocalClass::ancestors (src/metamodel//static_type.nit:42,2--43:55)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
}
val_t static_type___MMLocalClass___ancestor(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMLocalClass::ancestor (src/metamodel//static_type.nit:45,2--52:13)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*Map::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:48,3--27\n"); nit_exit(1);}
  variable1 = ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
  variable1 = ((abstract_collection___Map___has_key_t)CALL(variable1,COLOR_abstract_collection___Map___has_key))(variable1,  variable0 /*c*/) /*Map::has_key*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = ATTR_static_type___MMLocalClass____ancestors( self) /*MMLocalClass::_ancestors*/;
    variable1 = ((abstract_collection___Map_____bra_t)CALL(variable1,COLOR_abstract_collection___Map_____bra))(variable1,  variable0 /*c*/) /*Map::[]*/;
    variable1 = ((static_type___MMAncestor___stype_t)CALL(variable1,COLOR_static_type___MMAncestor___stype))(variable1) /*MMAncestor::stype*/;
    goto return_label2;
  }
  variable1 =  NIT_NULL /*null*/;
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t static_type___MMLocalProperty___signature(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMLocalProperty::signature (src/metamodel//static_type.nit:60,2--71:25)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*MMSignature::==*/)))));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = ATTR_abstractmetamodel___MMLocalProperty____super_prop( self) /*MMLocalProperty::_super_prop*/;
    variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*MMLocalProperty::==*/)))));
    if (UNTAG_Bool(variable0)) { /*if*/
      variable0 = ATTR_abstractmetamodel___MMLocalProperty____concrete_property( self) /*MMLocalProperty::_concrete_property*/;
      variable0 = ((static_type___MMLocalProperty___signature_t)CALL(variable0,COLOR_static_type___MMLocalProperty___signature))(variable0) /*MMConcreteProperty::signature*/;
      ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/ = variable0;
    } else { /*if*/
      variable0 = ATTR_abstractmetamodel___MMLocalProperty____super_prop( self) /*MMLocalProperty::_super_prop*/;
      variable0 = ((static_type___MMLocalProperty___signature_t)CALL(variable0,COLOR_static_type___MMLocalProperty___signature))(variable0) /*MMLocalProperty::signature*/;
      ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/ = variable0;
    }
  }
  variable0 = ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*MMSignature::==*/)))))));
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:70,3--33\n"); nit_exit(1);}
  variable0 = ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/;
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable0;
}
void static_type___MMLocalProperty___signature__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMLocalProperty::signature= (src/metamodel//static_type.nit:74,2--56)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  ATTR_static_type___MMLocalProperty____signature_cache( self) /*MMLocalProperty::_signature_cache*/ =  variable0 /*s*/;
  tracehead = trace.prev;
  return;
}
val_t static_type___MMSignature___recv(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMSignature::recv (src/metamodel//static_type.nit:79,2--80:28)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_static_type___MMSignature____recv( self) /*MMSignature::_recv*/;
}
val_t static_type___MMSignature___return_type(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMSignature::return_type (src/metamodel//static_type.nit:85,2--86:36)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_static_type___MMSignature____return_type( self) /*MMSignature::_return_type*/;
}
val_t static_type___MMSignature___arity(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMSignature::arity (src/metamodel//static_type.nit:88,2--92:23)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*Array::==*/)))));
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:91,3--24\n"); nit_exit(1);}
  variable0 = ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/;
  variable0 = ((array___AbstractArray___length_t)CALL(variable0,COLOR_abstract_collection___Collection___length))(variable0) /*Array::length*/;
  goto return_label5;
  return_label5: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t static_type___MMSignature_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMSignature::< (src/metamodel//static_type.nit:95,2--114:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*s*/ ==  NIT_NULL /*null*/) || (( variable0 /*s*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*s*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*s*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*s*/,COLOR_kernel___Object_____eqeq))( variable0 /*s*/,  NIT_NULL /*null*/) /*MMSignature::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:98,3--18\n"); nit_exit(1);}
  variable1 = TAG_Bool(( self ==  variable0 /*s*/) || (( self != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( self,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( self, variable0 /*s*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( self,COLOR_kernel___Object_____eqeq))( self,  variable0 /*s*/) /*MMSignature::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  TAG_Bool(true);
    goto return_label6;
  }
  variable1 = ATTR_static_type___MMSignature____recv( self) /*MMSignature::_recv*/;
  variable1 = ((static_type___MMType___module_t)CALL(variable1,COLOR_static_type___MMType___module))(variable1) /*MMType::module*/;
  variable2 = ((static_type___MMSignature___recv_t)CALL( variable0 /*s*/,COLOR_static_type___MMSignature___recv))( variable0 /*s*/) /*MMSignature::recv*/;
  variable2 = ((static_type___MMType___module_t)CALL(variable2,COLOR_static_type___MMType___module))(variable2) /*MMType::module*/;
  variable1 = TAG_Bool((variable1 == variable2) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1,variable2)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1, variable2) /*MMModule::==*/)))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:102,3--38\n"); nit_exit(1);}
  variable1 = ((static_type___MMSignature___arity_t)CALL( self,COLOR_static_type___MMSignature___arity))( self) /*MMSignature::arity*/;
  variable2 = ((static_type___MMSignature___arity_t)CALL( variable0 /*s*/,COLOR_static_type___MMSignature___arity))( variable0 /*s*/) /*MMSignature::arity*/;
  variable1 = TAG_Bool((variable1)==(variable2));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:103,3--25\n"); nit_exit(1);}
  variable1 = ATTR_static_type___MMSignature____return_type( self) /*MMSignature::_return_type*/;
  variable1 = TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMType::==*/)))));
  variable2 = ((static_type___MMSignature___return_type_t)CALL( variable0 /*s*/,COLOR_static_type___MMSignature___return_type))( variable0 /*s*/) /*MMSignature::return_type*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*MMType::==*/)))));
  variable1 = TAG_Bool((variable1)==(variable2));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:104,3--57\n"); nit_exit(1);}
  variable1 = ATTR_static_type___MMSignature____return_type( self) /*MMSignature::_return_type*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  variable2 = variable1;
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ATTR_static_type___MMSignature____return_type( self) /*MMSignature::_return_type*/;
    variable3 = ((static_type___MMSignature___return_type_t)CALL( variable0 /*s*/,COLOR_static_type___MMSignature___return_type))( variable0 /*s*/) /*MMSignature::return_type*/;
    variable2 = ((static_type___MMType_____l_t)CALL(variable2,COLOR_static_type___MMType_____l))(variable2, variable3) /*MMType::<*/;
    variable2 =  TAG_Bool(!UNTAG_Bool(variable2));
  }
  variable1 = variable2;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  TAG_Bool(false);
    goto return_label6;
  }
  variable1 = ((static_type___MMSignature___arity_t)CALL( self,COLOR_static_type___MMSignature___arity))( self) /*MMSignature::arity*/;
  variable2 = NEW_range___Range___without_last( TAG_Int(0), variable1); /*new Range[Int]*/
  variable1 = variable2;
  variable1 = ((range___Range___iterator_t)CALL(variable1,COLOR_abstract_collection___Collection___iterator))(variable1) /*Range::iterator*/;
  while (true) { /*for*/
    variable2 = ((abstract_collection___Iterator___is_ok_t)CALL(variable1,COLOR_abstract_collection___Iterator___is_ok))(variable1) /*Iterator::is_ok*/;
    if (!UNTAG_Bool(variable2)) break; /*for*/
    variable2 = ((abstract_collection___Iterator___item_t)CALL(variable1,COLOR_abstract_collection___Iterator___item))(variable1) /*Iterator::item*/;
    variable3 = ((static_type___MMSignature_____bra_t)CALL( variable0 /*s*/,COLOR_static_type___MMSignature_____bra))( variable0 /*s*/,  variable2 /*i*/) /*MMSignature::[]*/;
    variable4 = ((static_type___MMSignature_____bra_t)CALL( self,COLOR_static_type___MMSignature_____bra))( self,  variable2 /*i*/) /*MMSignature::[]*/;
    variable3 = ((static_type___MMType_____l_t)CALL(variable3,COLOR_static_type___MMType_____l))(variable3, variable4) /*MMType::<*/;
    if (UNTAG_Bool( TAG_Bool(!UNTAG_Bool(variable3)))) { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label6;
    }
    continue_7: while(0);
    ((abstract_collection___Iterator___next_t)CALL(variable1,COLOR_abstract_collection___Iterator___next))(variable1) /*Iterator::next*/;
  }
  break_7: while(0);
  variable1 =  TAG_Bool(true);
  goto return_label6;
  return_label6: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t static_type___MMSignature_____bra(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMSignature::[] (src/metamodel//static_type.nit:117,2--121:18)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/;
  variable1 = ((array___AbstractArray___length_t)CALL(variable1,COLOR_abstract_collection___Collection___length))(variable1) /*Array::length*/;
  variable1 = TAG_Bool(UNTAG_Int(variable1)>UNTAG_Int( variable0 /*i*/));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:120,3--27\n"); nit_exit(1);}
  variable1 = ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/;
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
  goto return_label9;
  return_label9: while(false);
  variable1 = variable3;
  goto return_label8;
  return_label8: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t static_type___MMSignature___to_s(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMSignature::to_s (src/metamodel//static_type.nit:124,2--143:10)"};
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
  variable0 = NIT_NULL /*decl variable s*/;
  variable1 = ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*Array::==*/)))));
  variable2 = variable1;
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/;
    variable2 = ((array___AbstractArray___length_t)CALL(variable2,COLOR_abstract_collection___Collection___length))(variable2) /*Array::length*/;
    variable2 = TAG_Bool(UNTAG_Int(variable2)>UNTAG_Int( TAG_Int(0)));
  }
  variable1 = variable2;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = NIT_NULL /*decl variable tmp*/;
    variable3 = ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/;
    variable3 = ((array___AbstractArray___length_t)CALL(variable3,COLOR_abstract_collection___Collection___length))(variable3) /*Array::length*/;
    variable4 = NEW_array___Array___with_capacity(variable3); /*new Array[String]*/
    variable3 = variable4;
    variable2 = variable3;
    variable3 = ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/;
    variable3 = ((array___AbstractArray___length_t)CALL(variable3,COLOR_abstract_collection___Collection___length))(variable3) /*Array::length*/;
    variable4 = NEW_range___Range___without_last( TAG_Int(0), variable3); /*new Range[Int]*/
    variable3 = variable4;
    variable3 = ((range___Range___iterator_t)CALL(variable3,COLOR_abstract_collection___Collection___iterator))(variable3) /*Range::iterator*/;
    while (true) { /*for*/
      variable4 = ((abstract_collection___Iterator___is_ok_t)CALL(variable3,COLOR_abstract_collection___Iterator___is_ok))(variable3) /*Iterator::is_ok*/;
      if (!UNTAG_Bool(variable4)) break; /*for*/
      variable4 = ((abstract_collection___Iterator___item_t)CALL(variable3,COLOR_abstract_collection___Iterator___item))(variable3) /*Iterator::item*/;
      variable6 = ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/;
      variable7 =  variable4 /*i*/;
      variable8 = TAG_Bool(UNTAG_Int( variable7 /*index*/)>=UNTAG_Int( TAG_Int(0)));
      variable9 = variable8;
      if (UNTAG_Bool(variable9)) { /* and */
        variable9 = variable6;
        variable9 = ATTR_array___AbstractArray____length(variable9) /*Array::_length*/;
        variable9 = TAG_Bool(UNTAG_Int( variable7 /*index*/)<UNTAG_Int(variable9));
      }
      variable8 = variable9;
      if (!UNTAG_Bool(variable8)) { fprintf(stderr, "Assert 'index'  failed: bin/../lib/standard//array.nit:229,3--46\n"); nit_exit(1);}
      variable8 = variable6;
      variable8 = ATTR_array___Array____items(variable8) /*Array::_items*/;
      variable8 = UNBOX_NativeArray(variable8)[UNTAG_Int( variable7 /*index*/)];
      goto return_label12;
      return_label12: while(false);
      variable6 = variable8;
      variable5 = variable6;
      variable6 = ((string___Object___to_s_t)CALL( variable5 /*p*/,COLOR_string___Object___to_s))( variable5 /*p*/) /*MMType::to_s*/;
      ((array___AbstractArray___add_t)CALL( variable2 /*a*/,COLOR_abstract_collection___SimpleCollection___add))( variable2 /*a*/, variable6) /*Array::add*/;
      continue_11: while(0);
      ((abstract_collection___Iterator___next_t)CALL(variable3,COLOR_abstract_collection___Iterator___next))(variable3) /*Iterator::next*/;
    }
    break_11: while(0);
    variable3 = NEW_string___String___init(); /*new String*/
    variable4 = NEW_string___String___with_native(BOX_NativeString("("), TAG_Int(1)); /*new String*/
    variable5 = variable4;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable5) /*String::append*/;
    variable6 = NEW_string___String___with_native(BOX_NativeString(","), TAG_Int(1)); /*new String*/
    variable6 = ((string___Collection___join_t)CALL( variable2 /*a*/,COLOR_string___Collection___join))( variable2 /*a*/, variable6) /*Array::join*/;
    variable7 = variable6;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable7) /*String::append*/;
    variable8 = NEW_string___String___with_native(BOX_NativeString(")"), TAG_Int(1)); /*new String*/
    variable9 = variable8;
    ((string___String___append_t)CALL(variable3,COLOR_abstract_collection___IndexedCollection___append))(variable3, variable9) /*String::append*/;
    variable0 = variable3 /*s=*/;
  } else { /*if*/
    variable1 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable0 = variable1 /*s=*/;
  }
  variable1 = ATTR_static_type___MMSignature____return_type( self) /*MMSignature::_return_type*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = NEW_string___String___init(); /*new String*/
    variable2 = NEW_string___String___with_native(BOX_NativeString(": "), TAG_Int(2)); /*new String*/
    variable3 = variable2;
    ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable3) /*String::append*/;
    variable4 = ATTR_static_type___MMSignature____return_type( self) /*MMSignature::_return_type*/;
    variable5 = variable4;
    variable5 = ((string___String___to_s_t)CALL(variable5,COLOR_string___Object___to_s))(variable5) /*String::to_s*/;
    ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable5) /*String::append*/;
    variable6 = NEW_string___String___with_native(BOX_NativeString(""), TAG_Int(0)); /*new String*/
    variable7 = variable6;
    ((string___String___append_t)CALL(variable1,COLOR_abstract_collection___IndexedCollection___append))(variable1, variable7) /*String::append*/;
    ((string___String___append_t)CALL( variable0 /*s*/,COLOR_abstract_collection___IndexedCollection___append))( variable0 /*s*/, variable1) /*String::append*/;
  }
  variable0 =  variable0 /*s*/;
  goto return_label10;
  return_label10: while(false);
  tracehead = trace.prev;
  return variable0;
}
void static_type___MMSignature___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table) {
  struct trace_t trace = {NULL, "static_type::MMSignature::init (src/metamodel//static_type.nit:146,2--151:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 =  param2;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSignature].i]) return;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*params*/ ==  NIT_NULL /*null*/) || (( variable0 /*params*/ != NIT_NULL) && UNTAG_Bool(((array___AbstractArray_____eqeq_t)CALL( variable0 /*params*/,COLOR_kernel___Object_____eqeq))( variable0 /*params*/,  NIT_NULL /*null*/) /*Array::==*/)))));
  if (!UNTAG_Bool(variable3)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:148,3--23\n"); nit_exit(1);}
  ATTR_static_type___MMSignature____params( self) /*MMSignature::_params*/ =  variable0 /*params*/;
  ATTR_static_type___MMSignature____return_type( self) /*MMSignature::_return_type*/ =  variable1 /*return_type*/;
  ATTR_static_type___MMSignature____recv( self) /*MMSignature::_recv*/ =  variable2 /*r*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMSignature].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t static_type___MMAncestor___stype(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMAncestor::stype (src/metamodel//static_type.nit:157,2--158:38)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_static_type___MMAncestor____stype( self) /*MMAncestor::_stype*/;
}
void static_type___MMAncestor___stype__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMAncestor::stype= (src/metamodel//static_type.nit:157,2--158:38)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_static_type___MMAncestor____stype( self) /*MMAncestor::_stype*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t static_type___MMAncestor___inheriter(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMAncestor::inheriter (src/metamodel//static_type.nit:160,2--161:42)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_static_type___MMAncestor____inheriter( self) /*MMAncestor::_inheriter*/;
}
void static_type___MMAncestor___inheriter__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMAncestor::inheriter= (src/metamodel//static_type.nit:160,2--161:42)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_static_type___MMAncestor____inheriter( self) /*MMAncestor::_inheriter*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t static_type___MMAncestor___is_reffinement(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMAncestor::is_reffinement (src/metamodel//static_type.nit:163,2--164:37)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMAncestor::stype*/;
  variable0 = ((static_type___MMType___module_t)CALL(variable0,COLOR_static_type___MMType___module))(variable0) /*MMType::module*/;
  variable1 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMAncestor::stype*/;
  variable1 = ((static_type___MMType___module_t)CALL(variable1,COLOR_static_type___MMType___module))(variable1) /*MMType::module*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 == variable1) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0,variable1)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0, variable1) /*MMModule::==*/)))))));
  goto return_label14;
  return_label14: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t static_type___MMAncestor___is_specialisation(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMAncestor::is_specialisation (src/metamodel//static_type.nit:167,2--168:65)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMAncestor::stype*/;
  variable0 = ((static_type___MMType___local_class_t)CALL(variable0,COLOR_static_type___MMType___local_class))(variable0) /*MMType::local_class*/;
  variable0 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalClass___global))(variable0) /*MMLocalClass::global*/;
  variable1 = ((static_type___MMAncestor___inheriter_t)CALL( self,COLOR_static_type___MMAncestor___inheriter))( self) /*MMAncestor::inheriter*/;
  variable1 = ((static_type___MMType___local_class_t)CALL(variable1,COLOR_static_type___MMType___local_class))(variable1) /*MMType::local_class*/;
  variable1 = ((abstractmetamodel___MMLocalClass___global_t)CALL(variable1,COLOR_abstractmetamodel___MMLocalClass___global))(variable1) /*MMLocalClass::global*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 == variable1) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0,variable1)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0, variable1) /*MMGlobalClass::==*/)))))));
  goto return_label15;
  return_label15: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t static_type___MMAncestor___local_class(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMAncestor::local_class (src/metamodel//static_type.nit:171,2--172:31)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method local_class called (src/metamodel//static_type.nit:171,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t static_type___MMAncestor___to_s(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMAncestor::to_s (src/metamodel//static_type.nit:174,2--179:20)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMAncestor::stype*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*MMType::==*/)))));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = ((static_type___MMAncestor___local_class_t)CALL( self,COLOR_static_type___MMAncestor___local_class))( self) /*MMAncestor::local_class*/;
    variable0 = ((abstractmetamodel___MMLocalClass___to_s_t)CALL(variable0,COLOR_string___Object___to_s))(variable0) /*MMLocalClass::to_s*/;
    goto return_label16;
  } else { /*if*/
    variable0 = ((static_type___MMAncestor___stype_t)CALL( self,COLOR_static_type___MMAncestor___stype))( self) /*MMAncestor::stype*/;
    variable0 = ((string___Object___to_s_t)CALL(variable0,COLOR_string___Object___to_s))(variable0) /*MMType::to_s*/;
    goto return_label16;
  }
  return_label16: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t static_type___MMType___module(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMType::module (src/metamodel//static_type.nit:187,2--188:22)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method module called (src/metamodel//static_type.nit:187,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t static_type___MMType___local_class(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMType::local_class (src/metamodel//static_type.nit:190,2--191:31)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method local_class called (src/metamodel//static_type.nit:190,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t static_type___MMType_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMType::< (src/metamodel//static_type.nit:193,2--194:25)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method < called (src/metamodel//static_type.nit:193,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t static_type___MMType___is_supertype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMType::is_supertype (src/metamodel//static_type.nit:196,2--199:35)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method is_supertype called (src/metamodel//static_type.nit:196,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t static_type___MMType___select_method(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMType::select_method (src/metamodel//static_type.nit:201,2--208:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((static_type___MMType___local_class_t)CALL( self,COLOR_static_type___MMType___local_class))( self) /*MMType::local_class*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:204,3--28\n"); nit_exit(1);}
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*name*/ ==  NIT_NULL /*null*/) || (( variable0 /*name*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*name*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*name*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*name*/,COLOR_kernel___Object_____eqeq))( variable0 /*name*/,  NIT_NULL /*null*/) /*Symbol::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:205,3--21\n"); nit_exit(1);}
  variable2 = ((static_type___MMType___local_class_t)CALL( self,COLOR_static_type___MMType___local_class))( self) /*MMType::local_class*/;
  variable2 = ((abstractmetamodel___MMLocalClass___method_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalClass___method))(variable2,  variable0 /*name*/) /*MMLocalClass::method*/;
  variable2 = ((static_type___MMType___select_property_t)CALL( self,COLOR_static_type___MMType___select_property))( self, variable2) /*MMType::select_property*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*res*/==NIT_NULL) || VAL_ISA( variable1 /*res*/, COLOR_MMMethod, ID_MMMethod)) /*cast MMMethod*/;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:207,3--25\n"); nit_exit(1);}
  variable1 =  variable1 /*res*/;
  goto return_label17;
  return_label17: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t static_type___MMType___select_attribute(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMType::select_attribute (src/metamodel//static_type.nit:211,2--218:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*name*/ ==  NIT_NULL /*null*/) || (( variable0 /*name*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*name*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*name*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*name*/,COLOR_kernel___Object_____eqeq))( variable0 /*name*/,  NIT_NULL /*null*/) /*Symbol::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:214,3--21\n"); nit_exit(1);}
  variable1 = ((static_type___MMType___local_class_t)CALL( self,COLOR_static_type___MMType___local_class))( self) /*MMType::local_class*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:215,3--28\n"); nit_exit(1);}
  variable2 = ((static_type___MMType___local_class_t)CALL( self,COLOR_static_type___MMType___local_class))( self) /*MMType::local_class*/;
  variable2 = ((abstractmetamodel___MMLocalClass___attribute_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalClass___attribute))(variable2,  variable0 /*name*/) /*MMLocalClass::attribute*/;
  variable2 = ((static_type___MMType___select_property_t)CALL( self,COLOR_static_type___MMType___select_property))( self, variable2) /*MMType::select_property*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*res*/==NIT_NULL) || VAL_ISA( variable1 /*res*/, COLOR_MMAttribute, ID_MMAttribute)) /*cast MMAttribute*/;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:217,3--28\n"); nit_exit(1);}
  variable1 =  variable1 /*res*/;
  goto return_label18;
  return_label18: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t static_type___MMType___select_property(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMType::select_property (src/metamodel//static_type.nit:221,2--222:59)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method select_property called (src/metamodel//static_type.nit:221,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t static_type___MMType___for_module(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMType::for_module (src/metamodel//static_type.nit:224,2--225:39)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method for_module called (src/metamodel//static_type.nit:224,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t static_type___MMType___adapt_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMType::adapt_to (src/metamodel//static_type.nit:227,2--229:36)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method adapt_to called (src/metamodel//static_type.nit:227,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t static_type___MMType___upcast_for(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMType::upcast_for (src/metamodel//static_type.nit:231,2--233:41)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method upcast_for called (src/metamodel//static_type.nit:231,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t static_type___MMType___not_for_self(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMType::not_for_self (src/metamodel//static_type.nit:235,2--237:41)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  self;
  goto return_label19;
  return_label19: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t static_type___MMTypeClass___local_class(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMTypeClass::local_class (src/metamodel//static_type.nit:242,2--47)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeClass::_local_class*/;
}
val_t static_type___MMTypeClass___module(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMTypeClass::module (src/metamodel//static_type.nit:243,2--48)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeClass::_local_class*/;
  variable0 = ((abstractmetamodel___MMLocalClass___module_t)CALL(variable0,COLOR_abstractmetamodel___MMLocalClass___module))(variable0) /*MMLocalClass::module*/;
  goto return_label20;
  return_label20: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t static_type___MMTypeClass_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMTypeClass::< (src/metamodel//static_type.nit:244,2--60)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*t*/ ==  NIT_NULL /*null*/) || (( variable0 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*t*/,COLOR_kernel___Object_____eqeq))( variable0 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  variable2 = variable1;
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ((static_type___MMType___is_supertype_t)CALL( variable0 /*t*/,COLOR_static_type___MMType___is_supertype))( variable0 /*t*/,  self) /*MMType::is_supertype*/;
  }
  variable1 = variable2;
  goto return_label21;
  return_label21: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t static_type___MMTypeClass___to_s(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMTypeClass::to_s (src/metamodel//static_type.nit:246,2--248:26)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeClass::_local_class*/;
  variable0 = ((abstractmetamodel___MMLocalClass___to_s_t)CALL(variable0,COLOR_string___Object___to_s))(variable0) /*MMLocalClass::to_s*/;
  goto return_label22;
  return_label22: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t static_type___MMTypeClass___upcast_for(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMTypeClass::upcast_for (src/metamodel//static_type.nit:251,2--261:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeClass::_local_class*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:253,3--29\n"); nit_exit(1);}
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*c*/ ==  NIT_NULL /*null*/) || (( variable0 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*c*/,COLOR_kernel___Object_____eqeq))( variable0 /*c*/,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:254,3--18\n"); nit_exit(1);}
  variable1 =  self;
  variable2 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeClass::_local_class*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  variable0 /*c*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, variable0 /*c*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  variable0 /*c*/) /*MMLocalClass::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeClass::_local_class*/;
    variable2 = ((static_type___MMLocalClass___ancestor_t)CALL(variable2,COLOR_static_type___MMLocalClass___ancestor))(variable2,  variable0 /*c*/) /*MMLocalClass::ancestor*/;
    variable1 = variable2 /*t=*/;
  }
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*t*/ ==  NIT_NULL /*null*/) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:260,3--18\n"); nit_exit(1);}
  variable1 =  variable1 /*t*/;
  goto return_label23;
  return_label23: while(false);
  tracehead = trace.prev;
  return variable1;
}
void static_type___MMTypeClass___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "static_type::MMTypeClass::init (src/metamodel//static_type.nit:264,2--266:18)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeClass].i]) return;
  ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeClass::_local_class*/ =  variable0 /*c*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeClass].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t static_type___MMTypeSimpleClass___is_supertype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMTypeSimpleClass::is_supertype (src/metamodel//static_type.nit:272,2--274:44)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((static_type___MMType___local_class_t)CALL( variable0 /*t*/,COLOR_static_type___MMType___local_class))( variable0 /*t*/) /*MMType::local_class*/;
  variable1 = ((abstractmetamodel___MMLocalClass___cshe_t)CALL(variable1,COLOR_abstractmetamodel___MMLocalClass___cshe))(variable1) /*MMLocalClass::cshe*/;
  variable2 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeSimpleClass::_local_class*/;
  variable1 = ((partial_order___PartialOrderElement_____leq_t)CALL(variable1,COLOR_partial_order___PartialOrderElement_____leq))(variable1, variable2) /*PartialOrderElement::<=*/;
  goto return_label25;
  return_label25: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t static_type___MMTypeSimpleClass___select_property(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMTypeSimpleClass::select_property (src/metamodel//static_type.nit:277,2--283:23)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeSimpleClass::_local_class*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:279,3--29\n"); nit_exit(1);}
  variable1 = TAG_Bool(( variable0 /*g*/ ==  NIT_NULL /*null*/) || (( variable0 /*g*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*g*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*g*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*g*/,COLOR_kernel___Object_____eqeq))( variable0 /*g*/,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label26;
  }
  variable1 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeSimpleClass::_local_class*/;
  variable1 = ((abstractmetamodel___MMLocalClass_____bra_t)CALL(variable1,COLOR_abstractmetamodel___MMLocalClass_____bra))(variable1,  variable0 /*g*/) /*MMLocalClass::[]*/;
  goto return_label26;
  return_label26: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t static_type___MMTypeSimpleClass___for_module(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMTypeSimpleClass::for_module (src/metamodel//static_type.nit:286,2--293:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  self;
  variable2 = ((static_type___MMTypeClass___module_t)CALL( self,COLOR_static_type___MMType___module))( self) /*MMTypeSimpleClass::module*/;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable2 ==  variable0 /*mod*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, variable0 /*mod*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  variable0 /*mod*/) /*MMModule::==*/)))))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ATTR_static_type___MMTypeClass____local_class( self) /*MMTypeSimpleClass::_local_class*/;
    variable2 = ((abstractmetamodel___MMLocalClass___for_module_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalClass___for_module))(variable2,  variable0 /*mod*/) /*MMLocalClass::for_module*/;
    variable2 = ((static_type___MMLocalClass___get_type_t)CALL(variable2,COLOR_static_type___MMLocalClass___get_type))(variable2) /*MMLocalClass::get_type*/;
    variable1 = variable2 /*t=*/;
  }
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*t*/ ==  NIT_NULL /*null*/) || (( variable1 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*t*/,COLOR_kernel___Object_____eqeq))( variable1 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//static_type.nit:292,3--18\n"); nit_exit(1);}
  variable1 =  variable1 /*t*/;
  goto return_label27;
  return_label27: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t static_type___MMTypeSimpleClass___adapt_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMTypeSimpleClass::adapt_to (src/metamodel//static_type.nit:296,2--41)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  self;
  goto return_label28;
  return_label28: while(false);
  tracehead = trace.prev;
  return variable1;
}
void static_type___MMTypeSimpleClass___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "static_type::MMTypeSimpleClass::init (src/metamodel//static_type.nit:298,2--300:9)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeSimpleClass].i]) return;
  ((static_type___MMTypeClass___init_t)CALL( self,COLOR_static_type___MMTypeClass___init))( self,  variable0 /*c*/, init_table /*YYY*/) /*MMTypeClass::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeSimpleClass].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t static_type___MMTypeNone___module(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMTypeNone::module (src/metamodel//static_type.nit:307,3--39)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_static_type___MMTypeNone____module( self) /*MMTypeNone::_module*/;
}
val_t static_type___MMTypeNone_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMTypeNone::< (src/metamodel//static_type.nit:308,3--32)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Bool(true);
  goto return_label30;
  return_label30: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t static_type___MMTypeNone___is_supertype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMTypeNone::is_supertype (src/metamodel//static_type.nit:309,3--44)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Bool(false);
  goto return_label31;
  return_label31: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t static_type___MMTypeNone___local_class(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMTypeNone::local_class (src/metamodel//static_type.nit:310,3--33)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Aborted: src/metamodel//static_type.nit:310,29--33\n"); nit_exit(1);
  tracehead = trace.prev;
  return variable0;
}
val_t static_type___MMTypeNone___upcast_for(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "static_type::MMTypeNone::upcast_for (src/metamodel//static_type.nit:311,3--41)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  self;
  goto return_label33;
  return_label33: while(false);
  tracehead = trace.prev;
  return variable1;
}
void static_type___MMTypeNone___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "static_type::MMTypeNone::init (src/metamodel//static_type.nit:313,2--41)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeNone].i]) return;
  ATTR_static_type___MMTypeNone____module( self) /*MMTypeNone::_module*/ =  variable0 /*m*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeNone].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t static_type___MMModule___type_none(val_t  self) {
  struct trace_t trace = {NULL, "static_type::MMModule::type_none (src/metamodel//static_type.nit:317,2--318:59)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_static_type___MMModule____type_none( self) /*MMModule::_type_none*/;
}
