#include "hash._sep.h"
val_t hash___Object___hash(val_t  self) {
  struct trace_t trace = {NULL, "hash::Object::hash (bin/../lib/standard//hash.nit:21,2--25:39)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = TAG_Int((int) self);
  variable0 = TAG_Int(UNTAG_Int(variable0)/UNTAG_Int( TAG_Int(8)));
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___String___hash(val_t  self) {
  struct trace_t trace = {NULL, "hash::String::hash (bin/../lib/standard//hash.nit:29,2--39:10)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  TAG_Int(5381);
  variable2 = ATTR_array___AbstractArray____length( self) /*String::_length*/;
  variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int( TAG_Int(1)));
  variable1 = variable2;
  variable3 = ATTR_string___String____items( self) /*String::_items*/;
  variable2 = variable3;
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable1 /*i*/)>=UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable3 = TAG_Int(UNTAG_Int( variable0 /*h*/)*UNTAG_Int( TAG_Int(32)));
    variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( variable0 /*h*/));
    variable4 = TAG_Char(UNBOX_NativeString( variable2 /*it*/)[UNTAG_Int( variable1 /*i*/)]);
    variable4 = TAG_Int((unsigned char)UNTAG_Char(variable4));
    variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int(variable4));
    variable0 = variable3 /*h=*/;
    variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_2: while(0);
  }
  break_2: while(0);
  variable0 =  variable0 /*h*/;
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___Int___hash(val_t  self) {
  struct trace_t trace = {NULL, "hash::Int::hash (bin/../lib/standard//hash.nit:45,2--31)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  self;
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___Char___hash(val_t  self) {
  struct trace_t trace = {NULL, "hash::Char::hash (bin/../lib/standard//hash.nit:49,2--32)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = TAG_Int((unsigned char)UNTAG_Char( self));
  goto return_label4;
  return_label4: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___Bool___hash(val_t  self) {
  struct trace_t trace = {NULL, "hash::Bool::hash (bin/../lib/standard//hash.nit:53,2--58:11)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  if (UNTAG_Bool( self)) { /*if*/
    variable0 =  TAG_Int(1);
    goto return_label5;
  } else { /*if*/
    variable0 =  TAG_Int(0);
    goto return_label5;
  }
  return_label5: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___HashCollection___length(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashCollection::length (bin/../lib/standard//hash.nit:69,2--33)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_hash___HashCollection____length( self) /*HashCollection::_length*/;
}
val_t hash___HashCollection___first_item(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashCollection::first_item (bin/../lib/standard//hash.nit:71,2--29)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_hash___HashCollection____first_item( self) /*HashCollection::_first_item*/;
}
val_t hash___HashCollection___index_at(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashCollection::index_at (bin/../lib/standard//hash.nit:80,2--106:7)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/;
  variable1 = variable2;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*k*/ ==  NIT_NULL /*null*/) || (( variable0 /*k*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*k*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*k*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*k*/,COLOR_kernel___Object_____eqeq))( variable0 /*k*/,  NIT_NULL /*null*/) /*Object::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:84,3--18\n"); nit_exit(1);}
  variable2 = ATTR_hash___HashCollection____last_accessed_key( self) /*HashCollection::_last_accessed_key*/;
  variable2 = TAG_Bool(( variable0 /*k*/ == variable2) || (( variable0 /*k*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*k*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*k*/,variable2)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*k*/,COLOR_kernel___Object_____eqeq))( variable0 /*k*/, variable2) /*Object::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ATTR_hash___HashCollection____last_accessed_index( self) /*HashCollection::_last_accessed_index*/;
    variable1 = variable2;
    goto return_label6;
  }
  variable3 = ((hash___Object___hash_t)CALL( variable0 /*k*/,COLOR_hash___Object___hash))( variable0 /*k*/) /*Object::hash*/;
  variable4 = ATTR_hash___HashCollection____capacity( self) /*HashCollection::_capacity*/;
  variable3 = TAG_Int(UNTAG_Int(variable3)%UNTAG_Int(variable4));
  variable2 = variable3;
  variable3 = TAG_Bool(UNTAG_Int( variable2 /*base*/)<UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = TAG_Int(-UNTAG_Int( variable2 /*base*/));
    variable2 = variable3 /*base=*/;
  }
  variable3 =  variable2 /*base*/;
  while (true) { /*while*/
    if (!UNTAG_Bool( TAG_Bool(true))) break; /* while*/
    variable5 = UNBOX_NativeArray( variable1 /*arr*/)[UNTAG_Int( variable3 /*cur*/)];
    variable4 = variable5;
    variable5 = TAG_Bool(( variable4 /*c*/ ==  NIT_NULL /*null*/) || (( variable4 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*c*/,COLOR_kernel___Object_____eqeq))( variable4 /*c*/,  NIT_NULL /*null*/) /*HashNode::==*/)))));
    variable6 = variable5;
    if (!UNTAG_Bool(variable6)) { /* or */
      variable6 = ((hash___HashNode___key_t)CALL( variable4 /*c*/,COLOR_hash___HashNode___key))( variable4 /*c*/) /*HashNode::key*/;
      variable6 = TAG_Bool((variable6 ==  variable0 /*k*/) || ((variable6 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable6, variable0 /*k*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))(variable6,  variable0 /*k*/) /*Object::==*/)))));
    }
    variable5 = variable6;
    if (UNTAG_Bool(variable5)) { /*if*/
      ATTR_hash___HashCollection____last_accessed_index( self) /*HashCollection::_last_accessed_index*/ =  variable3 /*cur*/;
      ATTR_hash___HashCollection____last_accessed_key( self) /*HashCollection::_last_accessed_key*/ =  variable0 /*k*/;
      variable1 =  variable3 /*cur*/;
      goto return_label6;
    }
    variable3 = TAG_Int(UNTAG_Int(variable3)-UNTAG_Int( TAG_Int(1))) /*cur*/;
    variable5 = TAG_Bool(UNTAG_Int( variable3 /*cur*/)<UNTAG_Int( TAG_Int(0)));
    if (UNTAG_Bool(variable5)) { /*if*/
      variable5 = ATTR_hash___HashCollection____capacity( self) /*HashCollection::_capacity*/;
      variable5 = TAG_Int(UNTAG_Int(variable5)-UNTAG_Int( TAG_Int(1)));
      variable3 = variable5 /*cur=*/;
    }
    variable5 = TAG_Bool(( variable3 /*cur*/)!=( variable2 /*base*/));
    if (!UNTAG_Bool(variable5)) { fprintf(stderr, "Assert 'no_loop'  failed: bin/../lib/standard//hash.nit:104,4--30\n"); nit_exit(1);}
    continue_7: while(0);
  }
  break_7: while(0);
  fprintf(stderr, "Aborted: bin/../lib/standard//hash.nit:106,3--7\n"); nit_exit(1);
  return_label6: while(false);
  tracehead = trace.prev;
  return variable1;
}
void hash___HashCollection___store(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "hash::HashCollection::store (bin/../lib/standard//hash.nit:109,2--128:16)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ATTR_hash___HashCollection____first_item( self) /*HashCollection::_first_item*/;
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*HashNode::==*/)))));
  if (UNTAG_Bool(variable2)) { /*if*/
    ATTR_hash___HashCollection____first_item( self) /*HashCollection::_first_item*/ =  variable1 /*node*/;
  } else { /*if*/
    variable2 = ATTR_hash___HashCollection____last_item( self) /*HashCollection::_last_item*/;
    ((hash___HashNode___next_item__eq_t)CALL(variable2,COLOR_hash___HashNode___next_item__eq))(variable2,  variable1 /*node*/) /*HashNode::next_item=*/;
  }
  variable2 = ATTR_hash___HashCollection____last_item( self) /*HashCollection::_last_item*/;
  ((hash___HashNode___prev_item__eq_t)CALL( variable1 /*node*/,COLOR_hash___HashNode___prev_item__eq))( variable1 /*node*/, variable2) /*HashNode::prev_item=*/;
  ((hash___HashNode___next_item__eq_t)CALL( variable1 /*node*/,COLOR_hash___HashNode___next_item__eq))( variable1 /*node*/,  NIT_NULL /*null*/) /*HashNode::next_item=*/;
  ATTR_hash___HashCollection____last_item( self) /*HashCollection::_last_item*/ =  variable1 /*node*/;
  variable2 = ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/;
  variable2 = UNBOX_NativeArray(variable2)[UNTAG_Int( variable0 /*index*/)];
  variable2 = TAG_Bool((variable2 ==  NIT_NULL /*null*/) || ((variable2 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable2, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable2,COLOR_kernel___Object_____eqeq))(variable2,  NIT_NULL /*null*/) /*HashNode::==*/)))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:122,3--30\n"); nit_exit(1);}
  variable2 = ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/;
  UNBOX_NativeArray(variable2)[UNTAG_Int( variable0 /*index*/)]= variable1 /*node*/;
  variable3 = ATTR_hash___HashCollection____length( self) /*HashCollection::_length*/;
  variable2 = variable3;
  variable3 = TAG_Int(UNTAG_Int( variable2 /*l*/)+UNTAG_Int( TAG_Int(1)));
  ATTR_hash___HashCollection____length( self) /*HashCollection::_length*/ = variable3;
  variable3 = TAG_Int(UNTAG_Int( variable2 /*l*/)+UNTAG_Int( TAG_Int(5)));
  variable3 = TAG_Int(UNTAG_Int(variable3)*UNTAG_Int( TAG_Int(150)));
  variable3 = TAG_Int(UNTAG_Int(variable3)/UNTAG_Int( TAG_Int(100)));
  variable2 = variable3 /*l=*/;
  variable3 = ATTR_hash___HashCollection____capacity( self) /*HashCollection::_capacity*/;
  variable3 = TAG_Bool(UNTAG_Int( variable2 /*l*/)>=UNTAG_Int(variable3));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable3 = TAG_Int(UNTAG_Int( variable2 /*l*/)*UNTAG_Int( TAG_Int(2)));
    ((hash___HashCollection___enlarge_t)CALL( self,COLOR_hash___HashCollection___enlarge))( self, variable3) /*HashCollection::enlarge*/;
  }
  tracehead = trace.prev;
  return;
}
void hash___HashCollection___remove_index(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashCollection::remove_index (bin/../lib/standard//hash.nit:132,2--167:18)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
    val_t variable5;
    val_t variable6;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(UNTAG_Int( variable0 /*i*/)>=UNTAG_Int( TAG_Int(0)));
  variable2 = variable1;
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = ATTR_hash___HashCollection____capacity( self) /*HashCollection::_capacity*/;
    variable2 = TAG_Bool(UNTAG_Int( variable0 /*i*/)<UNTAG_Int(variable2));
  }
  variable1 = variable2;
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert 'correct_index'  failed: bin/../lib/standard//hash.nit:134,3--48\n"); nit_exit(1);}
  variable2 = ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/;
  variable2 = UNBOX_NativeArray(variable2)[UNTAG_Int( variable0 /*i*/)];
  variable1 = variable2;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable1 /*node*/ ==  NIT_NULL /*null*/) || (( variable1 /*node*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable1 /*node*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable1 /*node*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable1 /*node*/,COLOR_kernel___Object_____eqeq))( variable1 /*node*/,  NIT_NULL /*null*/) /*HashNode::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert 'has_couple'  failed: bin/../lib/standard//hash.nit:136,3--33\n"); nit_exit(1);}
  variable3 = ((hash___HashNode___prev_item_t)CALL( variable1 /*node*/,COLOR_hash___HashNode___prev_item))( variable1 /*node*/) /*HashNode::prev_item*/;
  variable2 = variable3;
  variable4 = ((hash___HashNode___next_item_t)CALL( variable1 /*node*/,COLOR_hash___HashNode___next_item))( variable1 /*node*/) /*HashNode::next_item*/;
  variable3 = variable4;
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*prev*/ ==  NIT_NULL /*null*/) || (( variable2 /*prev*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*prev*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*prev*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*prev*/,COLOR_kernel___Object_____eqeq))( variable2 /*prev*/,  NIT_NULL /*null*/) /*HashNode::==*/)))))));
  if (UNTAG_Bool(variable4)) { /*if*/
    ((hash___HashNode___next_item__eq_t)CALL( variable2 /*prev*/,COLOR_hash___HashNode___next_item__eq))( variable2 /*prev*/,  variable3 /*next*/) /*HashNode::next_item=*/;
  } else { /*if*/
    ATTR_hash___HashCollection____first_item( self) /*HashCollection::_first_item*/ =  variable3 /*next*/;
  }
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable3 /*next*/ ==  NIT_NULL /*null*/) || (( variable3 /*next*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*next*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*next*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*next*/,COLOR_kernel___Object_____eqeq))( variable3 /*next*/,  NIT_NULL /*null*/) /*HashNode::==*/)))))));
  if (UNTAG_Bool(variable4)) { /*if*/
    ((hash___HashNode___prev_item__eq_t)CALL( variable3 /*next*/,COLOR_hash___HashNode___prev_item__eq))( variable3 /*next*/,  variable2 /*prev*/) /*HashNode::prev_item=*/;
  } else { /*if*/
    ATTR_hash___HashCollection____last_item( self) /*HashCollection::_last_item*/ =  variable2 /*prev*/;
  }
  variable4 = ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/;
  UNBOX_NativeArray(variable4)[UNTAG_Int( variable0 /*i*/)]= NIT_NULL /*null*/;
  ATTR_hash___HashCollection____length( self) /*HashCollection::_length*/ = TAG_Int(UNTAG_Int(ATTR_hash___HashCollection____length( self) /*HashCollection::_length*/)-UNTAG_Int( TAG_Int(1)));
  while (true) { /*while*/
    if (!UNTAG_Bool( TAG_Bool(true))) break; /* while*/
    variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int( TAG_Int(1))) /*i*/;
    variable4 = TAG_Bool(UNTAG_Int( variable0 /*i*/)<UNTAG_Int( TAG_Int(0)));
    if (UNTAG_Bool(variable4)) { /*if*/
      variable4 = ATTR_hash___HashCollection____capacity( self) /*HashCollection::_capacity*/;
      variable4 = TAG_Int(UNTAG_Int(variable4)-UNTAG_Int( TAG_Int(1)));
      variable0 = variable4 /*i=*/;
    }
    variable5 = ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/;
    variable5 = UNBOX_NativeArray(variable5)[UNTAG_Int( variable0 /*i*/)];
    variable4 = variable5;
    variable5 = TAG_Bool(( variable4 /*n*/ ==  NIT_NULL /*null*/) || (( variable4 /*n*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable4 /*n*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable4 /*n*/,COLOR_kernel___Object_____eqeq))( variable4 /*n*/,  NIT_NULL /*null*/) /*HashNode::==*/)))));
    if (UNTAG_Bool(variable5)) { /*if*/
      goto return_label9;
    }
    variable6 = ((hash___HashNode___key_t)CALL( variable4 /*n*/,COLOR_hash___HashNode___key))( variable4 /*n*/) /*HashNode::key*/;
    variable6 = ((hash___HashCollection___index_at_t)CALL( self,COLOR_hash___HashCollection___index_at))( self, variable6) /*HashCollection::index_at*/;
    variable5 = variable6;
    variable6 = TAG_Bool(( variable0 /*i*/)!=( variable5 /*i2*/));
    if (UNTAG_Bool(variable6)) { /*if*/
      variable6 = ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/;
      UNBOX_NativeArray(variable6)[UNTAG_Int( variable0 /*i*/)]= NIT_NULL /*null*/;
      variable6 = ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/;
      variable6 = UNBOX_NativeArray(variable6)[UNTAG_Int( variable5 /*i2*/)];
      variable6 = TAG_Bool((variable6 ==  NIT_NULL /*null*/) || ((variable6 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable6, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable6,COLOR_kernel___Object_____eqeq))(variable6,  NIT_NULL /*null*/) /*HashNode::==*/)))));
      if (!UNTAG_Bool(variable6)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:166,5--29\n"); nit_exit(1);}
      variable6 = ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/;
      UNBOX_NativeArray(variable6)[UNTAG_Int( variable5 /*i2*/)]= variable4 /*n*/;
    }
    continue_10: while(0);
  }
  break_10: while(0);
  return_label9: while(false);
  tracehead = trace.prev;
  return;
}
void hash___HashCollection___raz(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashCollection::raz (bin/../lib/standard//hash.nit:172,2--182:27)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable1 = ATTR_hash___HashCollection____capacity( self) /*HashCollection::_capacity*/;
  variable1 = TAG_Int(UNTAG_Int(variable1)-UNTAG_Int( TAG_Int(1)));
  variable0 = variable1;
  while (true) { /*while*/
    variable1 = TAG_Bool(UNTAG_Int( variable0 /*i*/)>=UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable1)) break; /* while*/
    variable1 = ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/;
    UNBOX_NativeArray(variable1)[UNTAG_Int( variable0 /*i*/)]= NIT_NULL /*null*/;
    variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_12: while(0);
  }
  break_12: while(0);
  ATTR_hash___HashCollection____length( self) /*HashCollection::_length*/ =  TAG_Int(0);
  ATTR_hash___HashCollection____first_item( self) /*HashCollection::_first_item*/ =  NIT_NULL /*null*/;
  ATTR_hash___HashCollection____last_item( self) /*HashCollection::_last_item*/ =  NIT_NULL /*null*/;
  ATTR_hash___HashCollection____last_accessed_key( self) /*HashCollection::_last_accessed_key*/ =  NIT_NULL /*null*/;
  tracehead = trace.prev;
  return;
}
void hash___HashCollection___enlarge(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashCollection::enlarge (bin/../lib/standard//hash.nit:185,2--217:27)"};
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
  variable2 = ATTR_hash___HashCollection____capacity( self) /*HashCollection::_capacity*/;
  variable1 = variable2;
  variable2 = ATTR_hash___HashCollection____length( self) /*HashCollection::_length*/;
  variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1)));
  variable2 = TAG_Bool(UNTAG_Int( variable0 /*cap*/)<UNTAG_Int(variable2));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 = ATTR_hash___HashCollection____length( self) /*HashCollection::_length*/;
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1)));
    variable0 = variable2 /*cap=*/;
  }
  variable2 = ATTR_hash___HashCollection____capacity( self) /*HashCollection::_capacity*/;
  variable2 = TAG_Bool(UNTAG_Int( variable0 /*cap*/)<=UNTAG_Int(variable2));
  if (UNTAG_Bool(variable2)) { /*if*/
    goto return_label13;
  }
  ATTR_hash___HashCollection____capacity( self) /*HashCollection::_capacity*/ =  variable0 /*cap*/;
  ATTR_hash___HashCollection____last_accessed_key( self) /*HashCollection::_last_accessed_key*/ =  NIT_NULL /*null*/;
  variable3 = BOX_NativeArray((val_t*)malloc((UNTAG_Int( variable0 /*cap*/) * sizeof(val_t))));
  variable2 = variable3;
  ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/ =  variable2 /*new_array*/;
  variable4 = TAG_Int(UNTAG_Int( variable0 /*cap*/)-UNTAG_Int( TAG_Int(1)));
  variable3 = variable4;
  while (true) { /*while*/
    variable4 = TAG_Bool(UNTAG_Int( variable3 /*i*/)>=UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable4)) break; /* while*/
    UNBOX_NativeArray( variable2 /*new_array*/)[UNTAG_Int( variable3 /*i*/)]= NIT_NULL /*null*/;
    variable3 = TAG_Int(UNTAG_Int(variable3)-UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_14: while(0);
  }
  break_14: while(0);
  variable4 = ATTR_hash___HashCollection____capacity( self) /*HashCollection::_capacity*/;
  variable4 = TAG_Bool(UNTAG_Int(variable4)<=UNTAG_Int( variable1 /*old_cap*/));
  if (UNTAG_Bool(variable4)) { /*if*/
    goto return_label13;
  }
  variable5 = ATTR_hash___HashCollection____array( self) /*HashCollection::_array*/;
  variable4 = variable5;
  variable6 = ATTR_hash___HashCollection____first_item( self) /*HashCollection::_first_item*/;
  variable5 = variable6;
  while (true) { /*while*/
    variable6 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable5 /*node*/ ==  NIT_NULL /*null*/) || (( variable5 /*node*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable5 /*node*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable5 /*node*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable5 /*node*/,COLOR_kernel___Object_____eqeq))( variable5 /*node*/,  NIT_NULL /*null*/) /*HashNode::==*/)))))));
    if (!UNTAG_Bool(variable6)) break; /* while*/
    variable7 = ((hash___HashNode___key_t)CALL( variable5 /*node*/,COLOR_hash___HashNode___key))( variable5 /*node*/) /*HashNode::key*/;
    variable7 = ((hash___HashCollection___index_at_t)CALL( self,COLOR_hash___HashCollection___index_at))( self, variable7) /*HashCollection::index_at*/;
    variable6 = variable7;
    variable7 = UNBOX_NativeArray( variable4 /*new_array*/)[UNTAG_Int( variable6 /*ind*/)];
    variable7 = TAG_Bool((variable7 ==  NIT_NULL /*null*/) || ((variable7 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable7, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable7,COLOR_kernel___Object_____eqeq))(variable7,  NIT_NULL /*null*/) /*HashNode::==*/)))));
    if (!UNTAG_Bool(variable7)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:213,4--32\n"); nit_exit(1);}
    UNBOX_NativeArray( variable4 /*new_array*/)[UNTAG_Int( variable6 /*ind*/)]= variable5 /*node*/;
    variable7 = ((hash___HashNode___next_item_t)CALL( variable5 /*node*/,COLOR_hash___HashNode___next_item))( variable5 /*node*/) /*HashNode::next_item*/;
    variable5 = variable7 /*node=*/;
    continue_15: while(0);
  }
  break_15: while(0);
  ATTR_hash___HashCollection____last_accessed_key( self) /*HashCollection::_last_accessed_key*/ =  NIT_NULL /*null*/;
  return_label13: while(false);
  tracehead = trace.prev;
  return;
}
val_t hash___HashNode___key(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashNode::key (bin/../lib/standard//hash.nit:222,2--12)"};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method key called (bin/../lib/standard//hash.nit:222,2)\n");
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t hash___HashNode___next_item(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashNode::next_item (bin/../lib/standard//hash.nit:224,2--37)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_hash___HashNode____next_item( self) /*HashNode::_next_item*/;
}
void hash___HashNode___next_item__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashNode::next_item= (bin/../lib/standard//hash.nit:224,2--37)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_hash___HashNode____next_item( self) /*HashNode::_next_item*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t hash___HashNode___prev_item(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashNode::prev_item (bin/../lib/standard//hash.nit:225,2--37)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_hash___HashNode____prev_item( self) /*HashNode::_prev_item*/;
}
void hash___HashNode___prev_item__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashNode::prev_item= (bin/../lib/standard//hash.nit:225,2--37)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_hash___HashNode____prev_item( self) /*HashNode::_prev_item*/ =  param0;
  tracehead = trace.prev;
  return;
}
val_t hash___HashMap___iterator(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashMap::iterator (bin/../lib/standard//hash.nit:232,2--83)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_hash___HashMapIterator___init( self); /*new HashMapIterator[K, V]*/
  goto return_label16;
  return_label16: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___HashMap___first(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashMap::first (bin/../lib/standard//hash.nit:234,2--237:27)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_hash___HashCollection____length( self) /*HashMap::_length*/;
  variable0 = TAG_Bool(UNTAG_Int(variable0)>UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:236,3--20\n"); nit_exit(1);}
  variable0 = ATTR_hash___HashCollection____first_item( self) /*HashMap::_first_item*/;
  variable0 = ((abstract_collection___Couple___second_t)CALL(variable0,COLOR_abstract_collection___Couple___second))(variable0) /*HashMapNode::second*/;
  goto return_label17;
  return_label17: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___HashMap___is_empty(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashMap::is_empty (bin/../lib/standard//hash.nit:240,2--43)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_hash___HashCollection____length( self) /*HashMap::_length*/;
  variable0 = TAG_Bool((variable0)==( TAG_Int(0)));
  goto return_label18;
  return_label18: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___HashMap___count(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashMap::count (bin/../lib/standard//hash.nit:242,2--251:11)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
    val_t variable4;
    val_t variable5;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  variable2 =  TAG_Int(0);
  while (true) { /*while*/
    variable3 = ATTR_hash___HashCollection____capacity( self) /*HashMap::_capacity*/;
    variable3 = TAG_Bool(UNTAG_Int( variable2 /*i*/)<UNTAG_Int(variable3));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable4 = ATTR_hash___HashCollection____array( self) /*HashMap::_array*/;
    variable4 = UNBOX_NativeArray(variable4)[UNTAG_Int( variable2 /*i*/)];
    variable3 = variable4;
    variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable3 /*c*/ ==  NIT_NULL /*null*/) || (( variable3 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))( variable3 /*c*/,  NIT_NULL /*null*/) /*HashMapNode::==*/)))))));
    variable5 = variable4;
    if (UNTAG_Bool(variable5)) { /* and */
      variable5 = ((abstract_collection___Couple___second_t)CALL( variable3 /*c*/,COLOR_abstract_collection___Couple___second))( variable3 /*c*/) /*HashMapNode::second*/;
      variable5 = TAG_Bool((variable5 ==  variable0 /*item*/) || ((variable5 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable5, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable5,COLOR_kernel___Object_____eqeq))(variable5,  variable0 /*item*/) /*Object::==*/)))));
    }
    variable4 = variable5;
    if (UNTAG_Bool(variable4)) { /*if*/
      variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*nb*/;
    }
    variable2 = TAG_Int(UNTAG_Int(variable2)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_20: while(0);
  }
  break_20: while(0);
  variable1 =  variable1 /*nb*/;
  goto return_label19;
  return_label19: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t hash___HashMap___has(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashMap::has (bin/../lib/standard//hash.nit:254,2--262:14)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  while (true) { /*while*/
    variable2 = ATTR_hash___HashCollection____capacity( self) /*HashMap::_capacity*/;
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int(variable2));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable3 = ATTR_hash___HashCollection____array( self) /*HashMap::_array*/;
    variable3 = UNBOX_NativeArray(variable3)[UNTAG_Int( variable1 /*i*/)];
    variable2 = variable3;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*c*/ ==  NIT_NULL /*null*/) || (( variable2 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*c*/,COLOR_kernel___Object_____eqeq))( variable2 /*c*/,  NIT_NULL /*null*/) /*HashMapNode::==*/)))))));
    variable4 = variable3;
    if (UNTAG_Bool(variable4)) { /* and */
      variable4 = ((abstract_collection___Couple___second_t)CALL( variable2 /*c*/,COLOR_abstract_collection___Couple___second))( variable2 /*c*/) /*HashMapNode::second*/;
      variable4 = TAG_Bool((variable4 ==  variable0 /*item*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable0 /*item*/) /*Object::==*/)))));
    }
    variable3 = variable4;
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Bool(true);
      goto return_label21;
    }
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_22: while(0);
  }
  break_22: while(0);
  variable1 =  TAG_Bool(false);
  goto return_label21;
  return_label21: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t hash___HashMap___has_only(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashMap::has_only (bin/../lib/standard//hash.nit:265,2--273:13)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  while (true) { /*while*/
    variable2 = ATTR_hash___HashCollection____capacity( self) /*HashMap::_capacity*/;
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int(variable2));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable3 = ATTR_hash___HashCollection____array( self) /*HashMap::_array*/;
    variable3 = UNBOX_NativeArray(variable3)[UNTAG_Int( variable1 /*i*/)];
    variable2 = variable3;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*c*/ ==  NIT_NULL /*null*/) || (( variable2 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*c*/,COLOR_kernel___Object_____eqeq))( variable2 /*c*/,  NIT_NULL /*null*/) /*HashMapNode::==*/)))))));
    variable4 = variable3;
    if (UNTAG_Bool(variable4)) { /* and */
      variable4 = ((abstract_collection___Couple___second_t)CALL( variable2 /*c*/,COLOR_abstract_collection___Couple___second))( variable2 /*c*/) /*HashMapNode::second*/;
      variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable4 ==  variable0 /*item*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable0 /*item*/) /*Object::==*/)))))));
    }
    variable3 = variable4;
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Bool(false);
      goto return_label23;
    }
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_24: while(0);
  }
  break_24: while(0);
  variable1 =  TAG_Bool(true);
  goto return_label23;
  return_label23: while(false);
  tracehead = trace.prev;
  return variable1;
}
void hash___HashMap_____braeq(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "hash::HashMap::[]= (bin/../lib/standard//hash.nit:276,2--285:40)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*key*/ ==  NIT_NULL /*null*/) || (( variable0 /*key*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*key*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*key*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*key*/,COLOR_kernel___Object_____eqeq))( variable0 /*key*/,  NIT_NULL /*null*/) /*Object::==*/)))))));
  if (!UNTAG_Bool(variable2)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:278,3--20\n"); nit_exit(1);}
  variable3 = ((hash___HashCollection___index_at_t)CALL( self,COLOR_hash___HashCollection___index_at))( self,  variable0 /*key*/) /*HashMap::index_at*/;
  variable2 = variable3;
  variable4 = ATTR_hash___HashCollection____array( self) /*HashMap::_array*/;
  variable4 = UNBOX_NativeArray(variable4)[UNTAG_Int( variable2 /*i*/)];
  variable3 = variable4;
  variable4 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable3 /*c*/ ==  NIT_NULL /*null*/) || (( variable3 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable3 /*c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable3 /*c*/,COLOR_kernel___Object_____eqeq))( variable3 /*c*/,  NIT_NULL /*null*/) /*HashMapNode::==*/)))))));
  if (UNTAG_Bool(variable4)) { /*if*/
    ((abstract_collection___Couple___first__eq_t)CALL( variable3 /*c*/,COLOR_abstract_collection___Couple___first__eq))( variable3 /*c*/,  variable0 /*key*/) /*HashMapNode::first=*/;
    ((abstract_collection___Couple___second__eq_t)CALL( variable3 /*c*/,COLOR_abstract_collection___Couple___second__eq))( variable3 /*c*/,  variable1 /*v*/) /*HashMapNode::second=*/;
  } else { /*if*/
    variable4 = NEW_hash___HashMapNode___init( variable0 /*key*/,  variable1 /*v*/); /*new HashMapNode[K, V]*/
    ((hash___HashCollection___store_t)CALL( self,COLOR_hash___HashCollection___store))( self,  variable2 /*i*/, variable4) /*HashMap::store*/;
  }
  tracehead = trace.prev;
  return;
}
void hash___HashMap___remove(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashMap::remove (bin/../lib/standard//hash.nit:289,2--298:9)"};
  val_t variable0;
  val_t variable1;
    val_t variable2;
    val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  TAG_Int(0);
  while (true) { /*while*/
    variable2 = ATTR_hash___HashCollection____capacity( self) /*HashMap::_capacity*/;
    variable2 = TAG_Bool(UNTAG_Int( variable1 /*i*/)<UNTAG_Int(variable2));
    if (!UNTAG_Bool(variable2)) break; /* while*/
    variable3 = ATTR_hash___HashCollection____array( self) /*HashMap::_array*/;
    variable3 = UNBOX_NativeArray(variable3)[UNTAG_Int( variable1 /*i*/)];
    variable2 = variable3;
    variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*c*/ ==  NIT_NULL /*null*/) || (( variable2 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*c*/,COLOR_kernel___Object_____eqeq))( variable2 /*c*/,  NIT_NULL /*null*/) /*HashMapNode::==*/)))))));
    variable4 = variable3;
    if (UNTAG_Bool(variable4)) { /* and */
      variable4 = ((abstract_collection___Couple___second_t)CALL( variable2 /*c*/,COLOR_abstract_collection___Couple___second))( variable2 /*c*/) /*HashMapNode::second*/;
      variable4 = TAG_Bool((variable4 ==  variable0 /*item*/) || ((variable4 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable4, variable0 /*item*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable4,COLOR_kernel___Object_____eqeq))(variable4,  variable0 /*item*/) /*Object::==*/)))));
    }
    variable3 = variable4;
    if (UNTAG_Bool(variable3)) { /*if*/
      ((hash___HashCollection___remove_index_t)CALL( self,COLOR_hash___HashCollection___remove_index))( self,  variable1 /*i*/) /*HashMap::remove_index*/;
      goto return_label26;
    }
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*i*/;
    continue_27: while(0);
  }
  break_27: while(0);
  return_label26: while(false);
  tracehead = trace.prev;
  return;
}
void hash___HashMap___remove_at(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashMap::remove_at (bin/../lib/standard//hash.nit:302,2--55)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((hash___HashCollection___index_at_t)CALL( self,COLOR_hash___HashCollection___index_at))( self,  variable0 /*key*/) /*HashMap::index_at*/;
  ((hash___HashCollection___remove_index_t)CALL( self,COLOR_hash___HashCollection___remove_index))( self, variable1) /*HashMap::remove_index*/;
  tracehead = trace.prev;
  return;
}
void hash___HashMap___clear(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashMap::clear (bin/../lib/standard//hash.nit:304,2--24)"};
  trace.prev = tracehead; tracehead = &trace;
  ((hash___HashCollection___raz_t)CALL( self,COLOR_hash___HashCollection___raz))( self) /*HashMap::raz*/;
  tracehead = trace.prev;
  return;
}
val_t hash___HashMap___couple_at(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashMap::couple_at (bin/../lib/standard//hash.nit:306,2--56)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_hash___HashCollection____array( self) /*HashMap::_array*/;
  variable2 = ((hash___HashCollection___index_at_t)CALL( self,COLOR_hash___HashCollection___index_at))( self,  variable0 /*key*/) /*HashMap::index_at*/;
  variable1 = UNBOX_NativeArray(variable1)[UNTAG_Int(variable2)];
  goto return_label30;
  return_label30: while(false);
  tracehead = trace.prev;
  return variable1;
}
void hash___HashMap___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "hash::HashMap::init (bin/../lib/standard//hash.nit:308,2--312:11)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashMap].i]) return;
  ATTR_hash___HashCollection____capacity( self) /*HashMap::_capacity*/ =  TAG_Int(0);
  ATTR_hash___HashCollection____length( self) /*HashMap::_length*/ =  TAG_Int(0);
  ((hash___HashCollection___enlarge_t)CALL( self,COLOR_hash___HashCollection___enlarge))( self,  TAG_Int(0)) /*HashMap::enlarge*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashMap].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t hash___HashMapNode___key(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashMapNode::key (bin/../lib/standard//hash.nit:319,2--31)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((abstract_collection___Couple___first_t)CALL( self,COLOR_abstract_collection___Couple___first))( self) /*HashMapNode::first*/;
  goto return_label32;
  return_label32: while(false);
  tracehead = trace.prev;
  return variable0;
}
void hash___HashMapNode___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, "hash::HashMapNode::init (bin/../lib/standard//hash.nit:322,2--325:12)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashMapNode].i]) return;
  ((abstract_collection___Couple___first__eq_t)CALL( self,COLOR_abstract_collection___Couple___first__eq))( self,  variable0 /*k*/) /*HashMapNode::first=*/;
  ((abstract_collection___Couple___second__eq_t)CALL( self,COLOR_abstract_collection___Couple___second__eq))( self,  variable1 /*v*/) /*HashMapNode::second=*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashMapNode].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t hash___HashMapIterator___is_ok(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashMapIterator::is_ok (bin/../lib/standard//hash.nit:331,2--41)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_hash___HashMapIterator____node( self) /*HashMapIterator::_node*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*HashMapNode::==*/)))))));
  goto return_label34;
  return_label34: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___HashMapIterator___item(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashMapIterator::item (bin/../lib/standard//hash.nit:333,2--336:21)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((hash___HashMapIterator___is_ok_t)CALL( self,COLOR_abstract_collection___Iterator___is_ok))( self) /*HashMapIterator::is_ok*/;
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:335,3--14\n"); nit_exit(1);}
  variable0 = ATTR_hash___HashMapIterator____node( self) /*HashMapIterator::_node*/;
  variable0 = ((abstract_collection___Couple___second_t)CALL(variable0,COLOR_abstract_collection___Couple___second))(variable0) /*HashMapNode::second*/;
  goto return_label35;
  return_label35: while(false);
  tracehead = trace.prev;
  return variable0;
}
void hash___HashMapIterator___item__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashMapIterator::item= (bin/../lib/standard//hash.nit:339,2--342:22)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((hash___HashMapIterator___is_ok_t)CALL( self,COLOR_abstract_collection___Iterator___is_ok))( self) /*HashMapIterator::is_ok*/;
  if (!UNTAG_Bool(variable1)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:341,3--14\n"); nit_exit(1);}
  variable1 = ATTR_hash___HashMapIterator____node( self) /*HashMapIterator::_node*/;
  ((abstract_collection___Couple___second__eq_t)CALL(variable1,COLOR_abstract_collection___Couple___second__eq))(variable1,  variable0 /*value*/) /*HashMapNode::second=*/;
  tracehead = trace.prev;
  return;
}
val_t hash___HashMapIterator___key(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashMapIterator::key (bin/../lib/standard//hash.nit:345,2--348:20)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((hash___HashMapIterator___is_ok_t)CALL( self,COLOR_abstract_collection___Iterator___is_ok))( self) /*HashMapIterator::is_ok*/;
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:347,3--14\n"); nit_exit(1);}
  variable0 = ATTR_hash___HashMapIterator____node( self) /*HashMapIterator::_node*/;
  variable0 = ((abstract_collection___Couple___first_t)CALL(variable0,COLOR_abstract_collection___Couple___first))(variable0) /*HashMapNode::first*/;
  goto return_label37;
  return_label37: while(false);
  tracehead = trace.prev;
  return variable0;
}
void hash___HashMapIterator___next(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashMapIterator::next (bin/../lib/standard//hash.nit:351,2--354:25)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((hash___HashMapIterator___is_ok_t)CALL( self,COLOR_abstract_collection___Iterator___is_ok))( self) /*HashMapIterator::is_ok*/;
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:353,3--14\n"); nit_exit(1);}
  variable0 = ATTR_hash___HashMapIterator____node( self) /*HashMapIterator::_node*/;
  variable0 = ((hash___HashNode___next_item_t)CALL(variable0,COLOR_hash___HashNode___next_item))(variable0) /*HashMapNode::next_item*/;
  ATTR_hash___HashMapIterator____node( self) /*HashMapIterator::_node*/ = variable0;
  tracehead = trace.prev;
  return;
}
void hash___HashMapIterator___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "hash::HashMapIterator::init (bin/../lib/standard//hash.nit:363,2--366:24)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashMapIterator].i]) return;
  ATTR_hash___HashMapIterator____map( self) /*HashMapIterator::_map*/ =  variable0 /*map*/;
  variable1 = ((hash___HashCollection___first_item_t)CALL( variable0 /*map*/,COLOR_hash___HashCollection___first_item))( variable0 /*map*/) /*HashMap::first_item*/;
  ATTR_hash___HashMapIterator____node( self) /*HashMapIterator::_node*/ = variable1;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashMapIterator].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t hash___HashSet___is_empty(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashSet::is_empty (bin/../lib/standard//hash.nit:374,2--43)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_hash___HashCollection____length( self) /*HashSet::_length*/;
  variable0 = TAG_Bool((variable0)==( TAG_Int(0)));
  goto return_label40;
  return_label40: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___HashSet___first(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashSet::first (bin/../lib/standard//hash.nit:376,2--379:24)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_hash___HashCollection____length( self) /*HashSet::_length*/;
  variable0 = TAG_Bool(UNTAG_Int(variable0)>UNTAG_Int( TAG_Int(0)));
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:378,3--20\n"); nit_exit(1);}
  variable0 = ATTR_hash___HashCollection____first_item( self) /*HashSet::_first_item*/;
  variable0 = ((hash___HashSetNode___key_t)CALL(variable0,COLOR_hash___HashNode___key))(variable0) /*HashSetNode::key*/;
  goto return_label41;
  return_label41: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___HashSet___has(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashSet::has (bin/../lib/standard//hash.nit:382,2--384:39)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_hash___HashCollection____array( self) /*HashSet::_array*/;
  variable2 = ((hash___HashCollection___index_at_t)CALL( self,COLOR_hash___HashCollection___index_at))( self,  variable0 /*item*/) /*HashSet::index_at*/;
  variable1 = UNBOX_NativeArray(variable1)[UNTAG_Int(variable2)];
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable1 ==  NIT_NULL /*null*/) || ((variable1 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable1, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable1,COLOR_kernel___Object_____eqeq))(variable1,  NIT_NULL /*null*/) /*HashSetNode::==*/)))))));
  goto return_label42;
  return_label42: while(false);
  tracehead = trace.prev;
  return variable1;
}
void hash___HashSet___add(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashSet::add (bin/../lib/standard//hash.nit:387,2--394:34)"};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = ((hash___HashCollection___index_at_t)CALL( self,COLOR_hash___HashCollection___index_at))( self,  variable0 /*item*/) /*HashSet::index_at*/;
  variable1 = variable2;
  variable3 = ATTR_hash___HashCollection____array( self) /*HashSet::_array*/;
  variable3 = UNBOX_NativeArray(variable3)[UNTAG_Int( variable1 /*i*/)];
  variable2 = variable3;
  variable3 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable2 /*c*/ ==  NIT_NULL /*null*/) || (( variable2 /*c*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable2 /*c*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable2 /*c*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable2 /*c*/,COLOR_kernel___Object_____eqeq))( variable2 /*c*/,  NIT_NULL /*null*/) /*HashSetNode::==*/)))))));
  if (UNTAG_Bool(variable3)) { /*if*/
    ((hash___HashSetNode___key__eq_t)CALL( variable2 /*c*/,COLOR_hash___HashSetNode___key__eq))( variable2 /*c*/,  variable0 /*item*/) /*HashSetNode::key=*/;
  } else { /*if*/
    variable3 = NEW_hash___HashSetNode___init( variable0 /*item*/); /*new HashSetNode[E]*/
    ((hash___HashCollection___store_t)CALL( self,COLOR_hash___HashCollection___store))( self,  variable1 /*i*/, variable3) /*HashSet::store*/;
  }
  tracehead = trace.prev;
  return;
}
void hash___HashSet___remove(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashSet::remove (bin/../lib/standard//hash.nit:398,2--54)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((hash___HashCollection___index_at_t)CALL( self,COLOR_hash___HashCollection___index_at))( self,  variable0 /*item*/) /*HashSet::index_at*/;
  ((hash___HashCollection___remove_index_t)CALL( self,COLOR_hash___HashCollection___remove_index))( self, variable1) /*HashSet::remove_index*/;
  tracehead = trace.prev;
  return;
}
void hash___HashSet___clear(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashSet::clear (bin/../lib/standard//hash.nit:400,2--24)"};
  trace.prev = tracehead; tracehead = &trace;
  ((hash___HashCollection___raz_t)CALL( self,COLOR_hash___HashCollection___raz))( self) /*HashSet::raz*/;
  tracehead = trace.prev;
  return;
}
val_t hash___HashSet___iterator(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashSet::iterator (bin/../lib/standard//hash.nit:402,2--58)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = NEW_hash___HashSetIterator___init( self); /*new HashSetIterator[E]*/
  goto return_label46;
  return_label46: while(false);
  tracehead = trace.prev;
  return variable0;
}
void hash___HashSet___init(val_t  self, int* init_table) {
  struct trace_t trace = {NULL, "hash::HashSet::init (bin/../lib/standard//hash.nit:404,2--408:11)"};
  trace.prev = tracehead; tracehead = &trace;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashSet].i]) return;
  ATTR_hash___HashCollection____capacity( self) /*HashSet::_capacity*/ =  TAG_Int(0);
  ATTR_hash___HashCollection____length( self) /*HashSet::_length*/ =  TAG_Int(0);
  ((hash___HashCollection___enlarge_t)CALL( self,COLOR_hash___HashCollection___enlarge))( self,  TAG_Int(0)) /*HashSet::enlarge*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashSet].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t hash___HashSetNode___key(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashSetNode::key (bin/../lib/standard//hash.nit:416,2--37)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_hash___HashSetNode____key( self) /*HashSetNode::_key*/;
}
void hash___HashSetNode___key__eq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "hash::HashSetNode::key= (bin/../lib/standard//hash.nit:416,2--37)"};
  trace.prev = tracehead; tracehead = &trace;
  ATTR_hash___HashSetNode____key( self) /*HashSetNode::_key*/ =  param0;
  tracehead = trace.prev;
  return;
}
void hash___HashSetNode___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "hash::HashSetNode::init (bin/../lib/standard//hash.nit:418,2--420:10)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashSetNode].i]) return;
  ATTR_hash___HashSetNode____key( self) /*HashSetNode::_key*/ =  variable0 /*e*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashSetNode].i] = 1;
  tracehead = trace.prev;
  return;
}
val_t hash___HashSetIterator___is_ok(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashSetIterator::is_ok (bin/../lib/standard//hash.nit:426,2--41)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_hash___HashSetIterator____node( self) /*HashSetIterator::_node*/;
  variable0 = TAG_Bool(!UNTAG_Bool(TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*HashSetNode::==*/)))))));
  goto return_label49;
  return_label49: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t hash___HashSetIterator___item(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashSetIterator::item (bin/../lib/standard//hash.nit:428,2--431:18)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((hash___HashSetIterator___is_ok_t)CALL( self,COLOR_abstract_collection___Iterator___is_ok))( self) /*HashSetIterator::is_ok*/;
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:430,3--14\n"); nit_exit(1);}
  variable0 = ATTR_hash___HashSetIterator____node( self) /*HashSetIterator::_node*/;
  variable0 = ((hash___HashSetNode___key_t)CALL(variable0,COLOR_hash___HashNode___key))(variable0) /*HashSetNode::key*/;
  goto return_label50;
  return_label50: while(false);
  tracehead = trace.prev;
  return variable0;
}
void hash___HashSetIterator___next(val_t  self) {
  struct trace_t trace = {NULL, "hash::HashSetIterator::next (bin/../lib/standard//hash.nit:434,2--437:25)"};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((hash___HashSetIterator___is_ok_t)CALL( self,COLOR_abstract_collection___Iterator___is_ok))( self) /*HashSetIterator::is_ok*/;
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert failed: bin/../lib/standard//hash.nit:436,3--14\n"); nit_exit(1);}
  variable0 = ATTR_hash___HashSetIterator____node( self) /*HashSetIterator::_node*/;
  variable0 = ((hash___HashNode___next_item_t)CALL(variable0,COLOR_hash___HashNode___next_item))(variable0) /*HashSetNode::next_item*/;
  ATTR_hash___HashSetIterator____node( self) /*HashSetIterator::_node*/ = variable0;
  tracehead = trace.prev;
  return;
}
void hash___HashSetIterator___init(val_t  self, val_t  param0, int* init_table) {
  struct trace_t trace = {NULL, "hash::HashSetIterator::init (bin/../lib/standard//hash.nit:446,2--449:24)"};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashSetIterator].i]) return;
  ATTR_hash___HashSetIterator____set( self) /*HashSetIterator::_set*/ =  variable0 /*set*/;
  variable1 = ((hash___HashCollection___first_item_t)CALL( variable0 /*set*/,COLOR_hash___HashCollection___first_item))( variable0 /*set*/) /*HashSet::first_item*/;
  ATTR_hash___HashSetIterator____node( self) /*HashSetIterator::_node*/ = variable1;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_HashSetIterator].i] = 1;
  tracehead = trace.prev;
  return;
}
