#ifndef abstracttool__sep
#define abstracttool__sep
#include "syntax._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_AbstractCompiler[];
extern const int SFT_abstracttool[];
#define ID_AbstractCompiler SFT_abstracttool[0]
#define COLOR_AbstractCompiler SFT_abstracttool[1]
#define INIT_TABLE_POS_AbstractCompiler SFT_abstracttool[2]
#define COLOR_abstracttool___AbstractCompiler___init SFT_abstracttool[3]
#define COLOR_abstracttool___AbstractCompiler___exec_cmd_line SFT_abstracttool[4]
#define COLOR_abstracttool___AbstractCompiler___perform_work SFT_abstracttool[5]
#define COLOR_abstracttool___AbstractCompiler___dump_context_info SFT_abstracttool[6]
#define COLOR_abstracttool___MMModule___dump_module_info SFT_abstracttool[7]
#define COLOR_abstracttool___MMLocalClass___dump_properties SFT_abstracttool[8]
typedef void (* abstracttool___AbstractCompiler___init_t)(val_t  self, int* init_table);
void abstracttool___AbstractCompiler___init(val_t  self, int* init_table);
val_t NEW_abstracttool___AbstractCompiler___init();
typedef void (* abstracttool___AbstractCompiler___exec_cmd_line_t)(val_t  self);
void abstracttool___AbstractCompiler___exec_cmd_line(val_t  self);
typedef void (* abstracttool___AbstractCompiler___perform_work_t)(val_t  self, val_t  param0);
void abstracttool___AbstractCompiler___perform_work(val_t  self, val_t  param0);
typedef void (* abstracttool___AbstractCompiler___dump_context_info_t)(val_t  self);
void abstracttool___AbstractCompiler___dump_context_info(val_t  self);
typedef void (* abstracttool___MMModule___dump_module_info_t)(val_t  self);
void abstracttool___MMModule___dump_module_info(val_t  self);
typedef void (* abstracttool___MMLocalClass___dump_properties_t)(val_t  self, val_t  param0);
void abstracttool___MMLocalClass___dump_properties(val_t  self, val_t  param0);
#endif
