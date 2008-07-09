#ifndef exec__sep
#define exec__sep
#include "stream._sep.h"
#include <nit_common.h>
#include <exec_nit.h>

extern const classtable_elt_t VFT_Process[];

extern const classtable_elt_t VFT_IProcess[];

extern const classtable_elt_t VFT_OProcess[];

extern const classtable_elt_t VFT_IOProcess[];

extern const classtable_elt_t VFT_NativeProcess[];
struct TBOX_NativeProcess { const classtable_elt_t * vft; void * val;};
val_t BOX_NativeProcess(void * val);
#define UNBOX_NativeProcess(x) (((struct TBOX_NativeProcess *)(VAL2OBJ(x)))->val)
extern const int SFT_exec[];
#define ID_Process SFT_exec[0]
#define COLOR_Process SFT_exec[1]
#define COLOR_exec___Process____data SFT_exec[2]
#define INIT_TABLE_POS_Process SFT_exec[3]
#define COLOR_exec___Process___id SFT_exec[4]
#define COLOR_exec___Process___is_finished SFT_exec[5]
#define COLOR_exec___Process___wait SFT_exec[6]
#define COLOR_exec___Process___status SFT_exec[7]
#define COLOR_exec___Process___kill SFT_exec[8]
#define COLOR_exec___Process___term SFT_exec[9]
#define COLOR_exec___Process___init SFT_exec[10]
#define COLOR_exec___Process___init_ SFT_exec[11]
#define COLOR_exec___Process___execute SFT_exec[12]
#define COLOR_exec___Process___basic_exec_execute SFT_exec[13]
#define ID_IProcess SFT_exec[14]
#define COLOR_IProcess SFT_exec[15]
#define COLOR_exec___IProcess____in SFT_exec[16]
#define INIT_TABLE_POS_IProcess SFT_exec[17]
#define COLOR_exec___IProcess___init SFT_exec[18]
#define COLOR_exec___IProcess___init_ SFT_exec[19]
#define ID_OProcess SFT_exec[20]
#define COLOR_OProcess SFT_exec[21]
#define COLOR_exec___OProcess____out SFT_exec[22]
#define INIT_TABLE_POS_OProcess SFT_exec[23]
#define COLOR_exec___OProcess___init SFT_exec[24]
#define COLOR_exec___OProcess___init_ SFT_exec[25]
#define ID_IOProcess SFT_exec[26]
#define COLOR_IOProcess SFT_exec[27]
#define INIT_TABLE_POS_IOProcess SFT_exec[28]
#define COLOR_exec___IOProcess___init SFT_exec[29]
#define COLOR_exec___IOProcess___init_ SFT_exec[30]
#define COLOR_exec___Sys___system SFT_exec[31]
#define COLOR_exec___NativeString___system SFT_exec[32]
#define ID_NativeProcess SFT_exec[33]
#define COLOR_NativeProcess SFT_exec[34]
#define INIT_TABLE_POS_NativeProcess SFT_exec[35]
#define COLOR_exec___NativeProcess___id SFT_exec[36]
#define COLOR_exec___NativeProcess___is_finished SFT_exec[37]
#define COLOR_exec___NativeProcess___status SFT_exec[38]
#define COLOR_exec___NativeProcess___wait SFT_exec[39]
#define COLOR_exec___NativeProcess___kill SFT_exec[40]
#define COLOR_exec___NativeProcess___in_fd SFT_exec[41]
#define COLOR_exec___NativeProcess___out_fd SFT_exec[42]
#define COLOR_exec___NativeProcess___err_fd SFT_exec[43]
typedef val_t (* exec___Process___id_t)(val_t  self);
val_t exec___Process___id(val_t  self);
typedef val_t (* exec___Process___is_finished_t)(val_t  self);
val_t exec___Process___is_finished(val_t  self);
typedef void (* exec___Process___wait_t)(val_t  self);
void exec___Process___wait(val_t  self);
typedef val_t (* exec___Process___status_t)(val_t  self);
val_t exec___Process___status(val_t  self);
typedef void (* exec___Process___kill_t)(val_t  self, val_t  param0);
void exec___Process___kill(val_t  self, val_t  param0);
typedef void (* exec___Process___term_t)(val_t  self);
void exec___Process___term(val_t  self);
typedef void (* exec___Process___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void exec___Process___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_exec___Process___init(val_t  param0, val_t  param1);
typedef void (* exec___Process___init__t)(val_t  self, val_t  param0, int* init_table);
void exec___Process___init_(val_t  self, val_t  param0, int* init_table);
val_t NEW_exec___Process___init_(val_t  param0);
typedef void (* exec___Process___execute_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void exec___Process___execute(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_exec___Process___execute(val_t  param0, val_t  param1, val_t  param2);
#define ATTR_exec___Process____data(recv) ATTR(recv, COLOR_exec___Process____data)
typedef val_t (* exec___Process___basic_exec_execute_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
val_t exec___Process___basic_exec_execute(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
#define ATTR_exec___IProcess____in(recv) ATTR(recv, COLOR_exec___IProcess____in)
typedef void (* exec___IProcess___close_t)(val_t  self);
void exec___IProcess___close(val_t  self);
typedef val_t (* exec___IProcess___read_char_t)(val_t  self);
val_t exec___IProcess___read_char(val_t  self);
typedef val_t (* exec___IProcess___eof_t)(val_t  self);
val_t exec___IProcess___eof(val_t  self);
typedef void (* exec___IProcess___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void exec___IProcess___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_exec___IProcess___init(val_t  param0, val_t  param1);
typedef void (* exec___IProcess___init__t)(val_t  self, val_t  param0, int* init_table);
void exec___IProcess___init_(val_t  self, val_t  param0, int* init_table);
val_t NEW_exec___IProcess___init_(val_t  param0);
#define ATTR_exec___OProcess____out(recv) ATTR(recv, COLOR_exec___OProcess____out)
typedef void (* exec___OProcess___close_t)(val_t  self);
void exec___OProcess___close(val_t  self);
typedef val_t (* exec___OProcess___is_writable_t)(val_t  self);
val_t exec___OProcess___is_writable(val_t  self);
typedef void (* exec___OProcess___write_t)(val_t  self, val_t  param0);
void exec___OProcess___write(val_t  self, val_t  param0);
typedef void (* exec___OProcess___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void exec___OProcess___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_exec___OProcess___init(val_t  param0, val_t  param1);
typedef void (* exec___OProcess___init__t)(val_t  self, val_t  param0, int* init_table);
void exec___OProcess___init_(val_t  self, val_t  param0, int* init_table);
val_t NEW_exec___OProcess___init_(val_t  param0);
typedef void (* exec___IOProcess___close_t)(val_t  self);
void exec___IOProcess___close(val_t  self);
typedef void (* exec___IOProcess___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void exec___IOProcess___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_exec___IOProcess___init(val_t  param0, val_t  param1);
typedef void (* exec___IOProcess___init__t)(val_t  self, val_t  param0, int* init_table);
void exec___IOProcess___init_(val_t  self, val_t  param0, int* init_table);
val_t NEW_exec___IOProcess___init_(val_t  param0);
typedef val_t (* exec___Sys___system_t)(val_t  self, val_t  param0);
val_t exec___Sys___system(val_t  self, val_t  param0);
typedef val_t (* exec___NativeString___system_t)(val_t  self);
val_t exec___NativeString___system(val_t  self);
typedef val_t (* exec___NativeProcess___id_t)(val_t  self);
val_t exec___NativeProcess___id(val_t  self);
typedef val_t (* exec___NativeProcess___is_finished_t)(val_t  self);
val_t exec___NativeProcess___is_finished(val_t  self);
typedef val_t (* exec___NativeProcess___status_t)(val_t  self);
val_t exec___NativeProcess___status(val_t  self);
typedef void (* exec___NativeProcess___wait_t)(val_t  self);
void exec___NativeProcess___wait(val_t  self);
typedef void (* exec___NativeProcess___kill_t)(val_t  self, val_t  param0);
void exec___NativeProcess___kill(val_t  self, val_t  param0);
typedef val_t (* exec___NativeProcess___in_fd_t)(val_t  self);
val_t exec___NativeProcess___in_fd(val_t  self);
typedef val_t (* exec___NativeProcess___out_fd_t)(val_t  self);
val_t exec___NativeProcess___out_fd(val_t  self);
typedef val_t (* exec___NativeProcess___err_fd_t)(val_t  self);
val_t exec___NativeProcess___err_fd(val_t  self);
#endif
