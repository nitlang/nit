/* This C file is generated by NIT to compile module nit_version. */
#include "nit_version._sep.h"
static const char LOCATE_nit_version___Object___nit_version[] = "nit_version::Object::nit_version";
val_t nit_version___Object___nit_version(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  static val_t once_value_1; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_nit_version;
  fra.me.line = 3;
  fra.me.meth = LOCATE_nit_version___Object___nit_version;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* nit_version.nit:3 */
  if (!once_value_1) {
    fra.me.REG[0] = BOX_NativeString("v0.5-1396-gd55a2f1_nc3_dirty");
    REGB0 = TAG_Int(28);
    fra.me.REG[0] = CALL_standard___string___NativeString___to_s_with_length(fra.me.REG[0])(fra.me.REG[0], REGB0);
    once_value_1 = fra.me.REG[0];
    register_static_object(&once_value_1);
  } else fra.me.REG[0] = once_value_1;
  fra.me.REG[0] = fra.me.REG[0];
  goto label2;
  label2: while(0);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
