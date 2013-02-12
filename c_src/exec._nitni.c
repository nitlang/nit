#include "exec._nitni.h"
#include "exec_nit.h"
/* out/indirect function for exec::Process::basic_exec_execute */
val_t Process_basic_exec_execute___out( val_t recv, val_t p, val_t av, val_t ac, val_t pf )
{
bigint trans___ac;
bigint trans___pf;
void* orig_return;
val_t trans_return;
trans___ac = UNTAG_Int(ac);
trans___pf = UNTAG_Int(pf);
orig_return = exec_Process_Process_basic_exec_execute_4( NULL, UNBOX_NativeString(p), UNBOX_NativeString(av), trans___ac, trans___pf );
trans_return = BOX_NativeProcess(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeString::system */
val_t NativeString_system___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = string_NativeString_NativeString_system_0( UNBOX_NativeString(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::id */
val_t NativeProcess_id___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = exec_NativeProcess_NativeProcess_id_0( UNBOX_NativeProcess(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::is_finished */
val_t NativeProcess_is_finished___out( val_t recv )
{
int orig_return;
val_t trans_return;
orig_return = exec_NativeProcess_NativeProcess_is_finished_0( UNBOX_NativeProcess(recv) );
trans_return = TAG_Bool(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::status */
val_t NativeProcess_status___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = exec_NativeProcess_NativeProcess_status_0( UNBOX_NativeProcess(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::wait */
void NativeProcess_wait___out( val_t recv )
{
exec_NativeProcess_NativeProcess_wait_0( UNBOX_NativeProcess(recv) );
nitni_local_ref_clean(  );
}
/* out/indirect function for exec::NativeProcess::in_fd */
val_t NativeProcess_in_fd___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = exec_NativeProcess_NativeProcess_in_fd_0( UNBOX_NativeProcess(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::out_fd */
val_t NativeProcess_out_fd___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = exec_NativeProcess_NativeProcess_out_fd_0( UNBOX_NativeProcess(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::err_fd */
val_t NativeProcess_err_fd___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = exec_NativeProcess_NativeProcess_err_fd_0( UNBOX_NativeProcess(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
