/* This C file is generated by NIT to compile module standard___collection___range. */
#include "standard___collection___range._sep.h"
static const char LOCATE_standard___collection___range___Range___first[] = "range::Range::(abstract_collection::Collection::first)";
val_t standard___collection___range___Range___first(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 22;
  fra.me.meth = LOCATE_standard___collection___range___Range___first;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ../lib/standard/collection/range.nit:22 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____first(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_first", LOCATE_standard___collection___range, 22);
  }
  fra.me.REG[0] = ATTR_standard___collection___range___Range____first(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
static const char LOCATE_standard___collection___range___Range___last[] = "range::Range::last";
val_t standard___collection___range___Range___last(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 24;
  fra.me.meth = LOCATE_standard___collection___range___Range___last;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ../lib/standard/collection/range.nit:24 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____last(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_last", LOCATE_standard___collection___range, 24);
  }
  fra.me.REG[0] = ATTR_standard___collection___range___Range____last(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
static const char LOCATE_standard___collection___range___Range___after[] = "range::Range::after";
val_t standard___collection___range___Range___after(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 27;
  fra.me.meth = LOCATE_standard___collection___range___Range___after;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ../lib/standard/collection/range.nit:27 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____after(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_after", LOCATE_standard___collection___range, 27);
  }
  fra.me.REG[0] = ATTR_standard___collection___range___Range____after(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
static const char LOCATE_standard___collection___range___Range___has[] = "range::Range::(abstract_collection::Collection::has)";
val_t standard___collection___range___Range___has(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 30;
  fra.me.meth = LOCATE_standard___collection___range___Range___has;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ../lib/standard/collection/range.nit:30 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____first(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_first", LOCATE_standard___collection___range, 30);
  }
  fra.me.REG[2] = ATTR_standard___collection___range___Range____first(fra.me.REG[0]);
  REGB0 = CALL_standard___kernel___Comparable_____geq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[2]);
  if (UNTAG_Bool(REGB0)) {
    REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____last(fra.me.REG[0])!=NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
    } else {
      nit_abort("Uninitialized attribute %s", "_last", LOCATE_standard___collection___range, 30);
    }
    fra.me.REG[0] = ATTR_standard___collection___range___Range____last(fra.me.REG[0]);
    REGB0 = CALL_standard___kernel___Comparable_____leq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
  } else {
    REGB1 = TAG_Bool(0);
    REGB0 = REGB1;
  }
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
static const char LOCATE_standard___collection___range___Range___has_only[] = "range::Range::(abstract_collection::Collection::has_only)";
val_t standard___collection___range___Range___has_only(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 32;
  fra.me.meth = LOCATE_standard___collection___range___Range___has_only;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ../lib/standard/collection/range.nit:32 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____first(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_first", LOCATE_standard___collection___range, 32);
  }
  fra.me.REG[2] = ATTR_standard___collection___range___Range____first(fra.me.REG[0]);
  REGB0 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[2],fra.me.REG[1]));
  if (UNTAG_Bool(REGB0)) {
  } else {
    REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
    REGB0 = REGB1;
  }
  if (UNTAG_Bool(REGB0)) {
    REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____last(fra.me.REG[0])!=NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
    } else {
      nit_abort("Uninitialized attribute %s", "_last", LOCATE_standard___collection___range, 32);
    }
    fra.me.REG[2] = ATTR_standard___collection___range___Range____last(fra.me.REG[0]);
    REGB0 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[1],fra.me.REG[2]));
    if (UNTAG_Bool(REGB0)) {
    } else {
      REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[2]);
      REGB0 = REGB1;
    }
  } else {
    REGB1 = TAG_Bool(0);
    REGB0 = REGB1;
  }
  if (UNTAG_Bool(REGB0)) {
    REGB0 = TAG_Bool(1);
  } else {
    REGB1 = CALL_standard___collection___abstract_collection___Collection___is_empty(fra.me.REG[0])(fra.me.REG[0]);
    REGB0 = REGB1;
  }
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
static const char LOCATE_standard___collection___range___Range___count[] = "range::Range::(abstract_collection::Collection::count)";
val_t standard___collection___range___Range___count(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 34;
  fra.me.meth = LOCATE_standard___collection___range___Range___count;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ../lib/standard/collection/range.nit:36 */
  REGB0 = CALL_standard___collection___abstract_collection___Collection___has(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  if (UNTAG_Bool(REGB0)) {
    /* ../lib/standard/collection/range.nit:37 */
    REGB0 = TAG_Int(1);
    goto label1;
  } else {
    /* ../lib/standard/collection/range.nit:39 */
    REGB1 = TAG_Int(0);
    REGB0 = REGB1;
    goto label1;
  }
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
static const char LOCATE_standard___collection___range___Range___iterator[] = "range::Range::(abstract_collection::Collection::iterator)";
val_t standard___collection___range___Range___iterator(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 43;
  fra.me.meth = LOCATE_standard___collection___range___Range___iterator;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ../lib/standard/collection/range.nit:43 */
  fra.me.REG[0] = NEW_IteratorRange_standard___collection___range___IteratorRange___init(fra.me.REG[0]);
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
static const char LOCATE_standard___collection___range___Range___iterate[] = "range::Range::(abstract_collection::Collection::iterate)";
void standard___collection___range___Range___iterate(val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0){
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t REGB0;
  fun_t CREG[1];
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 45;
  fra.me.meth = LOCATE_standard___collection___range___Range___iterate;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.closure_ctx = closctx_param;
  fra.me.closure_funs = CREG;
  fra.me.REG[0] = p0;
  CREG[0] = clos_fun0;
  /* ../lib/standard/collection/range.nit:48 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____first(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_first", LOCATE_standard___collection___range, 48);
  }
  fra.me.REG[1] = ATTR_standard___collection___range___Range____first(fra.me.REG[0]);
  /* ../lib/standard/collection/range.nit:49 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____last(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_last", LOCATE_standard___collection___range, 49);
  }
  fra.me.REG[0] = ATTR_standard___collection___range___Range____last(fra.me.REG[0]);
  /* ../lib/standard/collection/range.nit:50 */
  while(1) {
    REGB0 = CALL_standard___kernel___Comparable_____leq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
    if (UNTAG_Bool(REGB0)) {
      /* ../lib/standard/collection/range.nit:51 */
      ((void (*)(struct stack_frame_t *, val_t))(CREG[0]))(closctx_param, fra.me.REG[1]);
      if (closctx_param->has_broke) {
        goto label1;
      }
      /* ../lib/standard/collection/range.nit:52 */
      fra.me.REG[2] = CALL_standard___kernel___Discrete___succ(fra.me.REG[1])(fra.me.REG[1]);
      fra.me.REG[1] = fra.me.REG[2];
    } else {
      /* ../lib/standard/collection/range.nit:50 */
      goto label2;
    }
  }
  label2: while(0);
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return;
}
static const char LOCATE_standard___collection___range___Range___length[] = "range::Range::(abstract_collection::Collection::length)";
val_t standard___collection___range___Range___length(val_t p0){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t REGB2;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 56;
  fra.me.meth = LOCATE_standard___collection___range___Range___length;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ../lib/standard/collection/range.nit:58 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____first(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_first", LOCATE_standard___collection___range, 58);
  }
  fra.me.REG[1] = ATTR_standard___collection___range___Range____first(fra.me.REG[0]);
  REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____after(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_after", LOCATE_standard___collection___range, 58);
  }
  fra.me.REG[0] = ATTR_standard___collection___range___Range____after(fra.me.REG[0]);
  REGB0 = CALL_standard___kernel___Discrete___distance(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
  /* ../lib/standard/collection/range.nit:59 */
  REGB1 = TAG_Int(0);
  REGB2 = TAG_Bool(VAL_ISA(REGB1, VTCOLOR_standard___kernel___Comparable___OTHER(REGB0), VTID_standard___kernel___Comparable___OTHER(REGB0))) /*cast OTHER*/;
  if (UNTAG_Bool(REGB2)) {
  } else {
    nit_abort("Cast failed", NULL, LOCATE_standard___kernel, 0);
  }
  /* ../lib/standard/kernel.nit:244 */
  REGB1 = TAG_Bool(UNTAG_Int(REGB0)>UNTAG_Int(REGB1));
  /* ../lib/standard/collection/range.nit:59 */
  if (UNTAG_Bool(REGB1)) {
    /* ../lib/standard/collection/range.nit:60 */
    goto label1;
  } else {
    /* ../lib/standard/collection/range.nit:62 */
    REGB1 = TAG_Int(0);
    REGB0 = REGB1;
    goto label1;
  }
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
static const char LOCATE_standard___collection___range___Range___is_empty[] = "range::Range::(abstract_collection::Collection::is_empty)";
val_t standard___collection___range___Range___is_empty(val_t p0){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 66;
  fra.me.meth = LOCATE_standard___collection___range___Range___is_empty;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ../lib/standard/collection/range.nit:66 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____first(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_first", LOCATE_standard___collection___range, 66);
  }
  fra.me.REG[1] = ATTR_standard___collection___range___Range____first(fra.me.REG[0]);
  REGB0 = TAG_Bool(ATTR_standard___collection___range___Range____after(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_after", LOCATE_standard___collection___range, 66);
  }
  fra.me.REG[0] = ATTR_standard___collection___range___Range____after(fra.me.REG[0]);
  REGB0 = CALL_standard___kernel___Comparable_____geq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
static const char LOCATE_standard___collection___range___Range___init[] = "range::Range::init";
void standard___collection___range___Range___init(val_t p0, val_t p1, val_t p2, int* init_table){
  int itpos0 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_standard___collection___range___Range].i;
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t tmp;
  if (init_table[itpos0]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 68;
  fra.me.meth = LOCATE_standard___collection___range___Range___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  fra.me.REG[2] = p2;
  /* ../lib/standard/collection/range.nit:72 */
  ATTR_standard___collection___range___Range____first(fra.me.REG[0]) = fra.me.REG[1];
  /* ../lib/standard/collection/range.nit:73 */
  ATTR_standard___collection___range___Range____last(fra.me.REG[0]) = fra.me.REG[2];
  /* ../lib/standard/collection/range.nit:74 */
  fra.me.REG[2] = CALL_standard___kernel___Discrete___succ(fra.me.REG[2])(fra.me.REG[2]);
  ATTR_standard___collection___range___Range____after(fra.me.REG[0]) = fra.me.REG[2];
  stack_frame_head = fra.me.prev;
  init_table[itpos0] = 1;
  return;
}
static const char LOCATE_standard___collection___range___Range___without_last[] = "range::Range::without_last";
void standard___collection___range___Range___without_last(val_t p0, val_t p1, val_t p2, int* init_table){
  int itpos1 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_standard___collection___range___Range].i;
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t tmp;
  if (init_table[itpos1]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 77;
  fra.me.meth = LOCATE_standard___collection___range___Range___without_last;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  fra.me.REG[2] = p2;
  /* ../lib/standard/collection/range.nit:81 */
  ATTR_standard___collection___range___Range____first(fra.me.REG[0]) = fra.me.REG[1];
  /* ../lib/standard/collection/range.nit:82 */
  fra.me.REG[1] = CALL_standard___kernel___Discrete___prec(fra.me.REG[2])(fra.me.REG[2]);
  ATTR_standard___collection___range___Range____last(fra.me.REG[0]) = fra.me.REG[1];
  /* ../lib/standard/collection/range.nit:83 */
  ATTR_standard___collection___range___Range____after(fra.me.REG[0]) = fra.me.REG[2];
  stack_frame_head = fra.me.prev;
  init_table[itpos1] = 1;
  return;
}
static const char LOCATE_standard___collection___range___IteratorRange___item[] = "range::IteratorRange::(abstract_collection::Iterator::item)";
val_t standard___collection___range___IteratorRange___item(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 91;
  fra.me.meth = LOCATE_standard___collection___range___IteratorRange___item;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ../lib/standard/collection/range.nit:91 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___IteratorRange____item(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_item", LOCATE_standard___collection___range, 91);
  }
  fra.me.REG[0] = ATTR_standard___collection___range___IteratorRange____item(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
static const char LOCATE_standard___collection___range___IteratorRange___is_ok[] = "range::IteratorRange::(abstract_collection::Iterator::is_ok)";
val_t standard___collection___range___IteratorRange___is_ok(val_t p0){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 93;
  fra.me.meth = LOCATE_standard___collection___range___IteratorRange___is_ok;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ../lib/standard/collection/range.nit:93 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___IteratorRange____item(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_item", LOCATE_standard___collection___range, 93);
  }
  fra.me.REG[1] = ATTR_standard___collection___range___IteratorRange____item(fra.me.REG[0]);
  REGB0 = TAG_Bool(ATTR_standard___collection___range___IteratorRange____range(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_range", LOCATE_standard___collection___range, 93);
  }
  fra.me.REG[0] = ATTR_standard___collection___range___IteratorRange____range(fra.me.REG[0]);
  fra.me.REG[0] = CALL_standard___collection___range___Range___after(fra.me.REG[0])(fra.me.REG[0]);
  REGB0 = CALL_standard___kernel___Comparable_____l(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
static const char LOCATE_standard___collection___range___IteratorRange___next[] = "range::IteratorRange::(abstract_collection::Iterator::next)";
void standard___collection___range___IteratorRange___next(val_t p0){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 95;
  fra.me.meth = LOCATE_standard___collection___range___IteratorRange___next;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ../lib/standard/collection/range.nit:95 */
  REGB0 = TAG_Bool(ATTR_standard___collection___range___IteratorRange____item(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_item", LOCATE_standard___collection___range, 95);
  }
  fra.me.REG[1] = ATTR_standard___collection___range___IteratorRange____item(fra.me.REG[0]);
  fra.me.REG[1] = CALL_standard___kernel___Discrete___succ(fra.me.REG[1])(fra.me.REG[1]);
  ATTR_standard___collection___range___IteratorRange____item(fra.me.REG[0]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  return;
}
static const char LOCATE_standard___collection___range___IteratorRange___init[] = "range::IteratorRange::init";
void standard___collection___range___IteratorRange___init(val_t p0, val_t p1, int* init_table){
  int itpos2 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_standard___collection___range___IteratorRange].i;
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t tmp;
  if (init_table[itpos2]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___collection___range;
  fra.me.line = 97;
  fra.me.meth = LOCATE_standard___collection___range___IteratorRange___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ../lib/standard/collection/range.nit:99 */
  ATTR_standard___collection___range___IteratorRange____range(fra.me.REG[0]) = fra.me.REG[1];
  /* ../lib/standard/collection/range.nit:100 */
  fra.me.REG[1] = CALL_standard___collection___abstract_collection___Collection___first(fra.me.REG[1])(fra.me.REG[1]);
  ATTR_standard___collection___range___IteratorRange____item(fra.me.REG[0]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  init_table[itpos2] = 1;
  return;
}
