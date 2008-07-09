#ifndef stream__sep
#define stream__sep
#include "string._sep.h"
#include <nit_common.h>
#include <stream_nit.h>

extern const classtable_elt_t VFT_IOS[];

extern const classtable_elt_t VFT_IStream[];

extern const classtable_elt_t VFT_OStream[];

extern const classtable_elt_t VFT_BufferedIStream[];

extern const classtable_elt_t VFT_IOStream[];

extern const classtable_elt_t VFT_FDStream[];

extern const classtable_elt_t VFT_FDIStream[];

extern const classtable_elt_t VFT_FDOStream[];

extern const classtable_elt_t VFT_FDIOStream[];
extern const int SFT_stream[];
#define ID_IOS SFT_stream[0]
#define COLOR_IOS SFT_stream[1]
#define INIT_TABLE_POS_IOS SFT_stream[2]
#define COLOR_stream___IOS___close SFT_stream[3]
#define ID_IStream SFT_stream[4]
#define COLOR_IStream SFT_stream[5]
#define INIT_TABLE_POS_IStream SFT_stream[6]
#define COLOR_stream___IStream___read_char SFT_stream[7]
#define COLOR_stream___IStream___read SFT_stream[8]
#define COLOR_stream___IStream___read_line SFT_stream[9]
#define COLOR_stream___IStream___read_all SFT_stream[10]
#define COLOR_stream___IStream___append_line_to SFT_stream[11]
#define COLOR_stream___IStream___eof SFT_stream[12]
#define ID_OStream SFT_stream[13]
#define COLOR_OStream SFT_stream[14]
#define INIT_TABLE_POS_OStream SFT_stream[15]
#define COLOR_stream___OStream___write SFT_stream[16]
#define COLOR_stream___OStream___is_writable SFT_stream[17]
#define ID_BufferedIStream SFT_stream[18]
#define COLOR_BufferedIStream SFT_stream[19]
#define COLOR_stream___BufferedIStream____buffer SFT_stream[20]
#define COLOR_stream___BufferedIStream____buffer_pos SFT_stream[21]
#define INIT_TABLE_POS_BufferedIStream SFT_stream[22]
#define COLOR_stream___BufferedIStream___fill_buffer SFT_stream[23]
#define COLOR_stream___BufferedIStream___end_reached SFT_stream[24]
#define COLOR_stream___BufferedIStream___prepare_buffer SFT_stream[25]
#define ID_IOStream SFT_stream[26]
#define COLOR_IOStream SFT_stream[27]
#define INIT_TABLE_POS_IOStream SFT_stream[28]
#define ID_FDStream SFT_stream[29]
#define COLOR_FDStream SFT_stream[30]
#define COLOR_stream___FDStream____fd SFT_stream[31]
#define INIT_TABLE_POS_FDStream SFT_stream[32]
#define COLOR_stream___FDStream___native_close SFT_stream[33]
#define COLOR_stream___FDStream___native_read_char SFT_stream[34]
#define COLOR_stream___FDStream___native_read SFT_stream[35]
#define COLOR_stream___FDStream___native_write SFT_stream[36]
#define COLOR_stream___FDStream___init SFT_stream[37]
#define ID_FDIStream SFT_stream[38]
#define COLOR_FDIStream SFT_stream[39]
#define COLOR_stream___FDIStream____eof SFT_stream[40]
#define INIT_TABLE_POS_FDIStream SFT_stream[41]
#define COLOR_stream___FDIStream___init SFT_stream[42]
#define ID_FDOStream SFT_stream[43]
#define COLOR_FDOStream SFT_stream[44]
#define COLOR_stream___FDOStream____is_writable SFT_stream[45]
#define INIT_TABLE_POS_FDOStream SFT_stream[46]
#define COLOR_stream___FDOStream___init SFT_stream[47]
#define ID_FDIOStream SFT_stream[48]
#define COLOR_FDIOStream SFT_stream[49]
#define INIT_TABLE_POS_FDIOStream SFT_stream[50]
#define COLOR_stream___FDIOStream___init SFT_stream[51]
typedef void (* stream___IOS___close_t)(val_t  self);
void stream___IOS___close(val_t  self);
typedef val_t (* stream___IStream___read_char_t)(val_t  self);
val_t stream___IStream___read_char(val_t  self);
typedef val_t (* stream___IStream___read_t)(val_t  self, val_t  param0);
val_t stream___IStream___read(val_t  self, val_t  param0);
typedef val_t (* stream___IStream___read_line_t)(val_t  self);
val_t stream___IStream___read_line(val_t  self);
typedef val_t (* stream___IStream___read_all_t)(val_t  self);
val_t stream___IStream___read_all(val_t  self);
typedef void (* stream___IStream___append_line_to_t)(val_t  self, val_t  param0);
void stream___IStream___append_line_to(val_t  self, val_t  param0);
typedef val_t (* stream___IStream___eof_t)(val_t  self);
val_t stream___IStream___eof(val_t  self);
typedef void (* stream___OStream___write_t)(val_t  self, val_t  param0);
void stream___OStream___write(val_t  self, val_t  param0);
typedef val_t (* stream___OStream___is_writable_t)(val_t  self);
val_t stream___OStream___is_writable(val_t  self);
typedef val_t (* stream___BufferedIStream___read_char_t)(val_t  self);
val_t stream___BufferedIStream___read_char(val_t  self);
typedef val_t (* stream___BufferedIStream___read_t)(val_t  self, val_t  param0);
val_t stream___BufferedIStream___read(val_t  self, val_t  param0);
typedef val_t (* stream___BufferedIStream___read_all_t)(val_t  self);
val_t stream___BufferedIStream___read_all(val_t  self);
typedef void (* stream___BufferedIStream___append_line_to_t)(val_t  self, val_t  param0);
void stream___BufferedIStream___append_line_to(val_t  self, val_t  param0);
typedef val_t (* stream___BufferedIStream___eof_t)(val_t  self);
val_t stream___BufferedIStream___eof(val_t  self);
#define ATTR_stream___BufferedIStream____buffer(recv) ATTR(recv, COLOR_stream___BufferedIStream____buffer)
#define ATTR_stream___BufferedIStream____buffer_pos(recv) ATTR(recv, COLOR_stream___BufferedIStream____buffer_pos)
typedef void (* stream___BufferedIStream___fill_buffer_t)(val_t  self);
void stream___BufferedIStream___fill_buffer(val_t  self);
typedef val_t (* stream___BufferedIStream___end_reached_t)(val_t  self);
val_t stream___BufferedIStream___end_reached(val_t  self);
typedef void (* stream___BufferedIStream___prepare_buffer_t)(val_t  self, val_t  param0);
void stream___BufferedIStream___prepare_buffer(val_t  self, val_t  param0);
#define ATTR_stream___FDStream____fd(recv) ATTR(recv, COLOR_stream___FDStream____fd)
typedef void (* stream___FDStream___close_t)(val_t  self);
void stream___FDStream___close(val_t  self);
typedef val_t (* stream___FDStream___native_close_t)(val_t  self, val_t  param0);
val_t stream___FDStream___native_close(val_t  self, val_t  param0);
typedef val_t (* stream___FDStream___native_read_char_t)(val_t  self, val_t  param0);
val_t stream___FDStream___native_read_char(val_t  self, val_t  param0);
typedef val_t (* stream___FDStream___native_read_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t stream___FDStream___native_read(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* stream___FDStream___native_write_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t stream___FDStream___native_write(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef void (* stream___FDStream___init_t)(val_t  self, val_t  param0, int* init_table);
void stream___FDStream___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_stream___FDStream___init(val_t  param0);
#define ATTR_stream___FDIStream____eof(recv) ATTR(recv, COLOR_stream___FDIStream____eof)
typedef val_t (* stream___FDIStream___eof_t)(val_t  self);
val_t stream___FDIStream___eof(val_t  self);
typedef val_t (* stream___FDIStream___read_char_t)(val_t  self);
val_t stream___FDIStream___read_char(val_t  self);
typedef void (* stream___FDIStream___init_t)(val_t  self, val_t  param0, int* init_table);
void stream___FDIStream___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_stream___FDIStream___init(val_t  param0);
#define ATTR_stream___FDOStream____is_writable(recv) ATTR(recv, COLOR_stream___FDOStream____is_writable)
typedef val_t (* stream___FDOStream___is_writable_t)(val_t  self);
val_t stream___FDOStream___is_writable(val_t  self);
typedef void (* stream___FDOStream___write_t)(val_t  self, val_t  param0);
void stream___FDOStream___write(val_t  self, val_t  param0);
typedef void (* stream___FDOStream___init_t)(val_t  self, val_t  param0, int* init_table);
void stream___FDOStream___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_stream___FDOStream___init(val_t  param0);
typedef void (* stream___FDIOStream___init_t)(val_t  self, val_t  param0, int* init_table);
void stream___FDIOStream___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_stream___FDIOStream___init(val_t  param0);
#endif
