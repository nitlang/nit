#include "virtualtype._sep.h"
val_t virtualtype___MMGlobalProperty___is_virtual_type(val_t  self) {
  struct trace_t trace = {NULL, "virtualtype::MMGlobalProperty::is_virtual_type (src/metamodel//virtualtype.nit:24,2--25:62)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstractmetamodel___MMGlobalProperty___intro_t)CALL( self,COLOR_abstractmetamodel___MMGlobalProperty___intro))( self) /*MMGlobalProperty::intro*/;
  variable0 = TAG_Bool((variable0==NIT_NULL) || VAL_ISA(variable0, COLOR_MMTypeProperty, ID_MMTypeProperty)) /*cast MMTypeProperty*/;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t virtualtype___MMTypeProperty___inherit_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "virtualtype::MMTypeProperty::inherit_to (src/metamodel//virtualtype.nit:31,2--33:35)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NEW_virtualtype___MMImplicitType___init( self,  variable0 /*t*/); /*new MMImplicitType*/
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t virtualtype___MMTypeProperty___stype(val_t  self) {
  struct trace_t trace = {NULL, "virtualtype::MMTypeProperty::stype (src/metamodel//virtualtype.nit:39,2--50:10)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((static_type___MMLocalProperty___signature_t)CALL( self,COLOR_static_type___MMLocalProperty___signature))( self) /*MMTypeProperty::signature*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*MMSignature::==*/)))));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 =  NIT_NULL /*null*/;
    goto return_label2;
  }
  variable1 = ATTR_virtualtype___MMTypeProperty____stype_cache( self) /*MMTypeProperty::_stype_cache*/;
  variable0 = variable1;
  variable1 = TAG_Bool(( variable0 /*r*/ ==  NIT_NULL /*null*/) || (( variable0 /*r*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*r*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*r*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*r*/,COLOR_kernel___Object_____eqeq))( variable0 /*r*/,  NIT_NULL /*null*/) /*MMVirtualType::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = NEW_virtualtype___MMVirtualType___init( self); /*new MMVirtualType*/
    variable0 = variable1 /*r=*/;
    ATTR_virtualtype___MMTypeProperty____stype_cache( self) /*MMTypeProperty::_stype_cache*/ =  variable0 /*r*/;
  }
  variable0 =  variable0 /*r*/;
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t virtualtype___MMType___select_virtual_type(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "virtualtype::MMType::select_virtual_type (src/metamodel//virtualtype.nit:55,2--62:12)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((static_type___MMType___local_class_t)CALL( self,COLOR_static_type___MMType___local_class))( self) /*MMType::local_class*/;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*MMLocalClass::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//virtualtype.nit:58,3--28\n"); nit_exit(1);}
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*name*/ ==  NIT_NULL /*null*/) || (( variable0 /*name*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*name*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*name*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*name*/,COLOR_kernel___Object_____eqeq))( variable0 /*name*/,  NIT_NULL /*null*/) /*Symbol::==*/)))))));
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: src/metamodel//virtualtype.nit:59,3--21\n"); nit_exit(1);}
  variable2 = ((static_type___MMType___local_class_t)CALL( self,COLOR_static_type___MMType___local_class))( self) /*MMType::local_class*/;
  variable2 = ((virtualtype___MMLocalClass___virtual_type_t)CALL(variable2,COLOR_virtualtype___MMLocalClass___virtual_type))(variable2,  variable0 /*name*/) /*MMLocalClass::virtual_type*/;
  variable2 = ((static_type___MMType___select_property_t)CALL( self,COLOR_static_type___MMType___select_property))( self, variable2) /*MMType::select_property*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*res*/==NIT_NULL) || VAL_ISA( variable1 /*res*/, COLOR_MMTypeProperty, ID_MMTypeProperty)) /*cast MMTypeProperty*/;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//virtualtype.nit:61,3--31\n"); nit_exit(1);}
  variable1 =  variable1 /*res*/;
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t virtualtype___MMVirtualType___property(val_t  self) {
  struct trace_t trace = {NULL, "virtualtype::MMVirtualType::property (src/metamodel//virtualtype.nit:68,2--69:40)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_virtualtype___MMVirtualType____property( self) /*MMVirtualType::_property*/;
}
void virtualtype___MMVirtualType___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "virtualtype::MMVirtualType::init (src/metamodel//virtualtype.nit:71,2--74:15)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMVirtualType].i]) return;
  variable1 = ((abstractmetamodel___MMLocalProperty___name_t)CALL( variable0 /*p*/,COLOR_abstractmetamodel___MMLocalProperty___name))( variable0 /*p*/) /*MMTypeProperty::name*/;
  variable2 = ((static_type___MMLocalProperty___signature_t)CALL( variable0 /*p*/,COLOR_static_type___MMLocalProperty___signature))( variable0 /*p*/) /*MMTypeProperty::signature*/;
  variable2 = ((static_type___MMSignature___return_type_t)CALL(variable2,COLOR_static_type___MMSignature___return_type))(variable2) /*MMSignature::return_type*/;
  ((type_formal___MMTypeFormal___init_t)CALL( self,COLOR_type_formal___MMTypeFormal___init))( self, variable1, variable2, init_table /*YYY*/) /*MMTypeFormal::init*/;
  ATTR_virtualtype___MMVirtualType____property( self) /*MMVirtualType::_property*/ =  variable0 /*p*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMVirtualType].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t virtualtype___MMVirtualType___for_module(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "virtualtype::MMVirtualType::for_module (src/metamodel//virtualtype.nit:77,2--80:22)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_virtualtype___MMVirtualType____property( self) /*MMVirtualType::_property*/;
  variable2 = ((static_type___MMLocalProperty___signature_t)CALL(variable2,COLOR_static_type___MMLocalProperty___signature))(variable2) /*MMTypeProperty::signature*/;
  variable2 = ((static_type___MMSignature___recv_t)CALL(variable2,COLOR_static_type___MMSignature___recv))(variable2) /*MMSignature::recv*/;
  variable2 = ((static_type___MMType___for_module_t)CALL(variable2,COLOR_static_type___MMType___for_module))(variable2,  variable0 /*mod*/) /*MMType::for_module*/;
  variable1 = variable2;
  variable2 = ((virtualtype___MMVirtualType___adapt_to_t)CALL( self,COLOR_static_type___MMType___adapt_to))( self,  variable1 /*recv*/) /*MMVirtualType::adapt_to*/;
  variable1 = variable2;
  goto return_label5;
  return_label5: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t virtualtype___MMVirtualType___not_for_self(val_t  self) {
  struct trace_t trace = {NULL, "virtualtype::MMVirtualType::not_for_self (src/metamodel//virtualtype.nit:83,2--85:27)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((type_formal___MMTypeFormal___bound_t)CALL( self,COLOR_type_formal___MMTypeFormal___bound))( self) /*MMVirtualType::bound*/;
  variable0 = ((static_type___MMType___not_for_self_t)CALL(variable0,COLOR_static_type___MMType___not_for_self))(variable0) /*MMType::not_for_self*/;
  goto return_label6;
  return_label6: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t virtualtype___MMVirtualType___adapt_to(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "virtualtype::MMVirtualType::adapt_to (src/metamodel//virtualtype.nit:88,2--93:19)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_virtualtype___MMVirtualType____property( self) /*MMVirtualType::_property*/;
  variable2 = ((abstractmetamodel___MMLocalProperty___global_t)CALL(variable2,COLOR_abstractmetamodel___MMLocalProperty___global))(variable2) /*MMTypeProperty::global*/;
  variable2 = ((static_type___MMType___select_property_t)CALL( variable0 /*recv*/,COLOR_static_type___MMType___select_property))( variable0 /*recv*/, variable2) /*MMType::select_property*/;
  variable1 = variable2;
  variable2 = TAG_Bool(( variable1 /*prop*/==NIT_NULL) || VAL_ISA( variable1 /*prop*/, COLOR_MMTypeProperty, ID_MMTypeProperty)) /*cast MMTypeProperty*/;
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: src/metamodel//virtualtype.nit:92,3--32\n"); nit_exit(1);}
  variable2 = ((virtualtype___MMTypeProperty___stype_t)CALL( variable1 /*prop*/,COLOR_virtualtype___MMTypeProperty___stype))( variable1 /*prop*/) /*MMTypeProperty::stype*/;
  variable1 = variable2;
  goto return_label7;
  return_label7: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t virtualtype___MMLocalClass___virtual_type(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "virtualtype::MMLocalClass::virtual_type (src/metamodel//virtualtype.nit:98,2--104:13)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((abstractmetamodel___MMLocalClass___get_property_by_name_t)CALL( self,COLOR_abstractmetamodel___MMLocalClass___get_property_by_name))( self,  variable0 /*s*/) /*MMLocalClass::get_property_by_name*/;
  variable1 = variable2;
  variable2 = ((virtualtype___MMGlobalProperty___is_virtual_type_t)CALL( variable1 /*prop*/,COLOR_virtualtype___MMGlobalProperty___is_virtual_type))( variable1 /*prop*/) /*MMGlobalProperty::is_virtual_type*/;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  variable1 /*prop*/;
    goto return_label8;
  }
  variable1 =  NIT_NULL /*null*/;
  goto return_label8;
  return_label8: while(false);
  tracehead = trace.prev;
  return variable1;
}
void virtualtype___MMImplicitType___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "virtualtype::MMImplicitType::init (src/metamodel//virtualtype.nit:111,2--20)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMImplicitType].i]) return;
  ((inheritance___MMImplicitProperty___init_t)CALL( self,COLOR_inheritance___MMImplicitProperty___init))( self,  param0,  param1, init_table /*YYY*/) /*MMImplicitProperty::init*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMImplicitType].i] = 1;
  tracehead = trace.prev;
  return;
}
