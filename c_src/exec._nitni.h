#include <nit_common.h>
#include "exec._sep.h"
#ifndef EXEC_NITNI_H
#define EXEC_NITNI_H

#ifndef PROCESS_TYPE
#define PROCESS_TYPE
typedef struct s_Process{
	val_t v;
} Process;
#endif

#include "exec_nit.h"

/* out/indirect function for exec::Process::basic_exec_execute */
val_t Process_basic_exec_execute___out( val_t recv, val_t p, val_t av, val_t ac, val_t pf );

/* out/indirect function for exec::NativeString::system */
val_t NativeString_system___out( val_t recv );

/* out/indirect function for exec::NativeProcess::id */
val_t NativeProcess_id___out( val_t recv );

/* out/indirect function for exec::NativeProcess::is_finished */
val_t NativeProcess_is_finished___out( val_t recv );

/* out/indirect function for exec::NativeProcess::status */
val_t NativeProcess_status___out( val_t recv );

/* out/indirect function for exec::NativeProcess::wait */
void NativeProcess_wait___out( val_t recv );

/* out/indirect function for exec::NativeProcess::in_fd */
val_t NativeProcess_in_fd___out( val_t recv );

/* out/indirect function for exec::NativeProcess::out_fd */
val_t NativeProcess_out_fd___out( val_t recv );

/* out/indirect function for exec::NativeProcess::err_fd */
val_t NativeProcess_err_fd___out( val_t recv );
#ifndef NativeProcess
	typedef void* NativeProcess;
#endif

#endif
