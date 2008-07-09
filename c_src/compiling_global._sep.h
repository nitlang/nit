#ifndef compiling_global__sep
#define compiling_global__sep
#include "compiling_methods._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_ColorContext[];

extern const classtable_elt_t VFT_GlobalAnalysis[];

extern const classtable_elt_t VFT_CompiledClass[];

extern const classtable_elt_t VFT_TableElt[];

extern const classtable_elt_t VFT_LocalTableElt[];

extern const classtable_elt_t VFT_TableEltPropPos[];

extern const classtable_elt_t VFT_TableEltMethPos[];

extern const classtable_elt_t VFT_TableEltSuperPos[];

extern const classtable_elt_t VFT_TableEltAttrPos[];

extern const classtable_elt_t VFT_TableEltClassPos[];

extern const classtable_elt_t VFT_TableEltClassIdPos[];

extern const classtable_elt_t VFT_TableEltClassInitTablePos[];

extern const classtable_elt_t VFT_TableEltClassColorPos[];

extern const classtable_elt_t VFT_TableEltBaseAttrPos[];

extern const classtable_elt_t VFT_TableEltComposite[];

extern const classtable_elt_t VFT_TableEltClassSelfId[];

extern const classtable_elt_t VFT_TableEltVftPointer[];

extern const classtable_elt_t VFT_ClassSorter[];
extern const int SFT_compiling_global[];
#define ID_ColorContext SFT_compiling_global[0]
#define COLOR_ColorContext SFT_compiling_global[1]
#define COLOR_compiling_global___ColorContext____colors SFT_compiling_global[2]
#define INIT_TABLE_POS_ColorContext SFT_compiling_global[3]
#define COLOR_compiling_global___ColorContext___color SFT_compiling_global[4]
#define COLOR_compiling_global___ColorContext___has_color SFT_compiling_global[5]
#define COLOR_compiling_global___ColorContext___color__eq SFT_compiling_global[6]
#define ID_GlobalAnalysis SFT_compiling_global[7]
#define COLOR_GlobalAnalysis SFT_compiling_global[8]
#define COLOR_compiling_global___GlobalAnalysis____compiled_classes SFT_compiling_global[9]
#define COLOR_compiling_global___GlobalAnalysis____module SFT_compiling_global[10]
#define COLOR_compiling_global___GlobalAnalysis____max_class_table_length SFT_compiling_global[11]
#define INIT_TABLE_POS_GlobalAnalysis SFT_compiling_global[12]
#define COLOR_compiling_global___GlobalAnalysis___compiled_classes SFT_compiling_global[13]
#define COLOR_compiling_global___GlobalAnalysis___module SFT_compiling_global[14]
#define COLOR_compiling_global___GlobalAnalysis___max_class_table_length SFT_compiling_global[15]
#define COLOR_compiling_global___GlobalAnalysis___max_class_table_length__eq SFT_compiling_global[16]
#define COLOR_compiling_global___GlobalAnalysis___init SFT_compiling_global[17]
#define COLOR_compiling_global___CompilerVisitor____global_analysis SFT_compiling_global[18]
#define COLOR_compiling_global___CompilerVisitor___global_analysis SFT_compiling_global[19]
#define COLOR_compiling_global___CompilerVisitor___global_analysis__eq SFT_compiling_global[20]
#define ID_CompiledClass SFT_compiling_global[21]
#define COLOR_CompiledClass SFT_compiling_global[22]
#define COLOR_compiling_global___CompiledClass____local_class SFT_compiling_global[23]
#define COLOR_compiling_global___CompiledClass____id SFT_compiling_global[24]
#define COLOR_compiling_global___CompiledClass____class_table SFT_compiling_global[25]
#define COLOR_compiling_global___CompiledClass____instance_table SFT_compiling_global[26]
#define COLOR_compiling_global___CompiledClass____class_layout SFT_compiling_global[27]
#define COLOR_compiling_global___CompiledClass____instance_layout SFT_compiling_global[28]
#define INIT_TABLE_POS_CompiledClass SFT_compiling_global[29]
#define COLOR_compiling_global___CompiledClass___local_class SFT_compiling_global[30]
#define COLOR_compiling_global___CompiledClass___id SFT_compiling_global[31]
#define COLOR_compiling_global___CompiledClass___id__eq SFT_compiling_global[32]
#define COLOR_compiling_global___CompiledClass___class_table SFT_compiling_global[33]
#define COLOR_compiling_global___CompiledClass___class_table__eq SFT_compiling_global[34]
#define COLOR_compiling_global___CompiledClass___instance_table SFT_compiling_global[35]
#define COLOR_compiling_global___CompiledClass___instance_table__eq SFT_compiling_global[36]
#define COLOR_compiling_global___CompiledClass___class_layout SFT_compiling_global[37]
#define COLOR_compiling_global___CompiledClass___class_layout__eq SFT_compiling_global[38]
#define COLOR_compiling_global___CompiledClass___instance_layout SFT_compiling_global[39]
#define COLOR_compiling_global___CompiledClass___instance_layout__eq SFT_compiling_global[40]
#define COLOR_compiling_global___CompiledClass___init SFT_compiling_global[41]
#define COLOR_compiling_global___MMGlobalProperty____pos_of SFT_compiling_global[42]
#define COLOR_compiling_global___MMGlobalProperty___pos_of SFT_compiling_global[43]
#define COLOR_compiling_global___MMGlobalProperty___pos_of__eq SFT_compiling_global[44]
#define COLOR_compiling_global___MMSrcLocalClass____base_attr_pos SFT_compiling_global[45]
#define COLOR_compiling_global___MMSrcLocalClass____class_color_pos SFT_compiling_global[46]
#define COLOR_compiling_global___MMSrcLocalClass____class_layout SFT_compiling_global[47]
#define COLOR_compiling_global___MMSrcLocalClass____instance_layout SFT_compiling_global[48]
#define COLOR_compiling_global___MMSrcLocalClass___base_attr_pos SFT_compiling_global[49]
#define COLOR_compiling_global___MMSrcLocalClass___class_color_pos SFT_compiling_global[50]
#define COLOR_compiling_global___MMSrcLocalClass___class_layout SFT_compiling_global[51]
#define COLOR_compiling_global___MMSrcLocalClass___instance_layout SFT_compiling_global[52]
#define COLOR_compiling_global___MMSrcLocalClass___build_layout_in SFT_compiling_global[53]
#define COLOR_compiling_global___MMSrcModule____local_table SFT_compiling_global[54]
#define COLOR_compiling_global___MMSrcModule___local_analysis SFT_compiling_global[55]
#define COLOR_compiling_global___MMSrcModule___global_analysis SFT_compiling_global[56]
#define COLOR_compiling_global___MMSrcModule___append_to_table SFT_compiling_global[57]
#define COLOR_compiling_global___MMSrcModule___build_tables SFT_compiling_global[58]
#define COLOR_compiling_global___MMSrcModule___colorize SFT_compiling_global[59]
#define COLOR_compiling_global___MMSrcModule___free_color SFT_compiling_global[60]
#define COLOR_compiling_global___MMSrcModule___compile_tables_to_c SFT_compiling_global[61]
#define COLOR_compiling_global___MMSrcModule___declare_class_tables_to_c SFT_compiling_global[62]
#define COLOR_compiling_global___MMSrcModule___compile_main_part SFT_compiling_global[63]
#define COLOR_compiling_global___MMSrcModule___compile_mod_to_c SFT_compiling_global[64]
#define COLOR_compiling_global___MMSrcModule___compile_local_table_to_c SFT_compiling_global[65]
#define ID_TableElt SFT_compiling_global[66]
#define COLOR_TableElt SFT_compiling_global[67]
#define INIT_TABLE_POS_TableElt SFT_compiling_global[68]
#define COLOR_compiling_global___TableElt___is_related_to SFT_compiling_global[69]
#define COLOR_compiling_global___TableElt___length SFT_compiling_global[70]
#define COLOR_compiling_global___TableElt___item SFT_compiling_global[71]
#define COLOR_compiling_global___TableElt___compile_to_c SFT_compiling_global[72]
#define ID_LocalTableElt SFT_compiling_global[73]
#define COLOR_LocalTableElt SFT_compiling_global[74]
#define INIT_TABLE_POS_LocalTableElt SFT_compiling_global[75]
#define COLOR_compiling_global___LocalTableElt___symbol SFT_compiling_global[76]
#define COLOR_compiling_global___LocalTableElt___value SFT_compiling_global[77]
#define ID_TableEltPropPos SFT_compiling_global[78]
#define COLOR_TableEltPropPos SFT_compiling_global[79]
#define COLOR_compiling_global___TableEltPropPos____property SFT_compiling_global[80]
#define INIT_TABLE_POS_TableEltPropPos SFT_compiling_global[81]
#define COLOR_compiling_global___TableEltPropPos___init SFT_compiling_global[82]
#define ID_TableEltMethPos SFT_compiling_global[83]
#define COLOR_TableEltMethPos SFT_compiling_global[84]
#define INIT_TABLE_POS_TableEltMethPos SFT_compiling_global[85]
#define COLOR_compiling_global___TableEltMethPos___init SFT_compiling_global[86]
#define ID_TableEltSuperPos SFT_compiling_global[87]
#define COLOR_TableEltSuperPos SFT_compiling_global[88]
#define INIT_TABLE_POS_TableEltSuperPos SFT_compiling_global[89]
#define COLOR_compiling_global___TableEltSuperPos___init SFT_compiling_global[90]
#define ID_TableEltAttrPos SFT_compiling_global[91]
#define COLOR_TableEltAttrPos SFT_compiling_global[92]
#define INIT_TABLE_POS_TableEltAttrPos SFT_compiling_global[93]
#define COLOR_compiling_global___TableEltAttrPos___init SFT_compiling_global[94]
#define ID_TableEltClassPos SFT_compiling_global[95]
#define COLOR_TableEltClassPos SFT_compiling_global[96]
#define COLOR_compiling_global___TableEltClassPos____local_class SFT_compiling_global[97]
#define INIT_TABLE_POS_TableEltClassPos SFT_compiling_global[98]
#define COLOR_compiling_global___TableEltClassPos___init SFT_compiling_global[99]
#define ID_TableEltClassIdPos SFT_compiling_global[100]
#define COLOR_TableEltClassIdPos SFT_compiling_global[101]
#define INIT_TABLE_POS_TableEltClassIdPos SFT_compiling_global[102]
#define COLOR_compiling_global___TableEltClassIdPos___init SFT_compiling_global[103]
#define ID_TableEltClassInitTablePos SFT_compiling_global[104]
#define COLOR_TableEltClassInitTablePos SFT_compiling_global[105]
#define INIT_TABLE_POS_TableEltClassInitTablePos SFT_compiling_global[106]
#define COLOR_compiling_global___TableEltClassInitTablePos___init SFT_compiling_global[107]
#define ID_TableEltClassColorPos SFT_compiling_global[108]
#define COLOR_TableEltClassColorPos SFT_compiling_global[109]
#define INIT_TABLE_POS_TableEltClassColorPos SFT_compiling_global[110]
#define COLOR_compiling_global___TableEltClassColorPos___init SFT_compiling_global[111]
#define ID_TableEltBaseAttrPos SFT_compiling_global[112]
#define COLOR_TableEltBaseAttrPos SFT_compiling_global[113]
#define COLOR_compiling_global___TableEltBaseAttrPos____local_class SFT_compiling_global[114]
#define INIT_TABLE_POS_TableEltBaseAttrPos SFT_compiling_global[115]
#define COLOR_compiling_global___TableEltBaseAttrPos___init SFT_compiling_global[116]
#define ID_TableEltComposite SFT_compiling_global[117]
#define COLOR_TableEltComposite SFT_compiling_global[118]
#define COLOR_compiling_global___TableEltComposite____table SFT_compiling_global[119]
#define COLOR_compiling_global___TableEltComposite____cc SFT_compiling_global[120]
#define COLOR_compiling_global___TableEltComposite____offsets SFT_compiling_global[121]
#define INIT_TABLE_POS_TableEltComposite SFT_compiling_global[122]
#define COLOR_compiling_global___TableEltComposite___add SFT_compiling_global[123]
#define COLOR_compiling_global___TableEltComposite___init SFT_compiling_global[124]
#define ID_TableEltClassSelfId SFT_compiling_global[125]
#define COLOR_TableEltClassSelfId SFT_compiling_global[126]
#define INIT_TABLE_POS_TableEltClassSelfId SFT_compiling_global[127]
#define COLOR_compiling_global___TableEltClassSelfId___init SFT_compiling_global[128]
#define ID_TableEltVftPointer SFT_compiling_global[129]
#define COLOR_TableEltVftPointer SFT_compiling_global[130]
#define INIT_TABLE_POS_TableEltVftPointer SFT_compiling_global[131]
#define COLOR_compiling_global___TableEltVftPointer___init SFT_compiling_global[132]
#define ID_ClassSorter SFT_compiling_global[133]
#define COLOR_ClassSorter SFT_compiling_global[134]
#define INIT_TABLE_POS_ClassSorter SFT_compiling_global[135]
#define COLOR_compiling_global___ClassSorter___init SFT_compiling_global[136]
#define COLOR_compiling_global___MMLocalClass___compare SFT_compiling_global[137]
#define COLOR_compiling_global___MMLocalClass___declare_tables_to_c SFT_compiling_global[138]
#define COLOR_compiling_global___MMLocalClass___compile_tables_to_c SFT_compiling_global[139]
#define ATTR_compiling_global___ColorContext____colors(recv) ATTR(recv, COLOR_compiling_global___ColorContext____colors)
typedef val_t (* compiling_global___ColorContext___color_t)(val_t  self, val_t  param0);
val_t compiling_global___ColorContext___color(val_t  self, val_t  param0);
typedef val_t (* compiling_global___ColorContext___has_color_t)(val_t  self, val_t  param0);
val_t compiling_global___ColorContext___has_color(val_t  self, val_t  param0);
typedef void (* compiling_global___ColorContext___color__eq_t)(val_t  self, val_t  param0, val_t  param1);
void compiling_global___ColorContext___color__eq(val_t  self, val_t  param0, val_t  param1);
#define ATTR_compiling_global___GlobalAnalysis____compiled_classes(recv) ATTR(recv, COLOR_compiling_global___GlobalAnalysis____compiled_classes)
typedef val_t (* compiling_global___GlobalAnalysis___compiled_classes_t)(val_t  self);
val_t compiling_global___GlobalAnalysis___compiled_classes(val_t  self);
#define ATTR_compiling_global___GlobalAnalysis____module(recv) ATTR(recv, COLOR_compiling_global___GlobalAnalysis____module)
typedef val_t (* compiling_global___GlobalAnalysis___module_t)(val_t  self);
val_t compiling_global___GlobalAnalysis___module(val_t  self);
#define ATTR_compiling_global___GlobalAnalysis____max_class_table_length(recv) ATTR(recv, COLOR_compiling_global___GlobalAnalysis____max_class_table_length)
typedef val_t (* compiling_global___GlobalAnalysis___max_class_table_length_t)(val_t  self);
val_t compiling_global___GlobalAnalysis___max_class_table_length(val_t  self);
typedef void (* compiling_global___GlobalAnalysis___max_class_table_length__eq_t)(val_t  self, val_t  param0);
void compiling_global___GlobalAnalysis___max_class_table_length__eq(val_t  self, val_t  param0);
typedef void (* compiling_global___GlobalAnalysis___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___GlobalAnalysis___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___GlobalAnalysis___init(val_t  param0);
#define ATTR_compiling_global___CompilerVisitor____global_analysis(recv) ATTR(recv, COLOR_compiling_global___CompilerVisitor____global_analysis)
typedef val_t (* compiling_global___CompilerVisitor___global_analysis_t)(val_t  self);
val_t compiling_global___CompilerVisitor___global_analysis(val_t  self);
typedef void (* compiling_global___CompilerVisitor___global_analysis__eq_t)(val_t  self, val_t  param0);
void compiling_global___CompilerVisitor___global_analysis__eq(val_t  self, val_t  param0);
#define ATTR_compiling_global___CompiledClass____local_class(recv) ATTR(recv, COLOR_compiling_global___CompiledClass____local_class)
typedef val_t (* compiling_global___CompiledClass___local_class_t)(val_t  self);
val_t compiling_global___CompiledClass___local_class(val_t  self);
#define ATTR_compiling_global___CompiledClass____id(recv) ATTR(recv, COLOR_compiling_global___CompiledClass____id)
typedef val_t (* compiling_global___CompiledClass___id_t)(val_t  self);
val_t compiling_global___CompiledClass___id(val_t  self);
typedef void (* compiling_global___CompiledClass___id__eq_t)(val_t  self, val_t  param0);
void compiling_global___CompiledClass___id__eq(val_t  self, val_t  param0);
#define ATTR_compiling_global___CompiledClass____class_table(recv) ATTR(recv, COLOR_compiling_global___CompiledClass____class_table)
typedef val_t (* compiling_global___CompiledClass___class_table_t)(val_t  self);
val_t compiling_global___CompiledClass___class_table(val_t  self);
typedef void (* compiling_global___CompiledClass___class_table__eq_t)(val_t  self, val_t  param0);
void compiling_global___CompiledClass___class_table__eq(val_t  self, val_t  param0);
#define ATTR_compiling_global___CompiledClass____instance_table(recv) ATTR(recv, COLOR_compiling_global___CompiledClass____instance_table)
typedef val_t (* compiling_global___CompiledClass___instance_table_t)(val_t  self);
val_t compiling_global___CompiledClass___instance_table(val_t  self);
typedef void (* compiling_global___CompiledClass___instance_table__eq_t)(val_t  self, val_t  param0);
void compiling_global___CompiledClass___instance_table__eq(val_t  self, val_t  param0);
#define ATTR_compiling_global___CompiledClass____class_layout(recv) ATTR(recv, COLOR_compiling_global___CompiledClass____class_layout)
typedef val_t (* compiling_global___CompiledClass___class_layout_t)(val_t  self);
val_t compiling_global___CompiledClass___class_layout(val_t  self);
typedef void (* compiling_global___CompiledClass___class_layout__eq_t)(val_t  self, val_t  param0);
void compiling_global___CompiledClass___class_layout__eq(val_t  self, val_t  param0);
#define ATTR_compiling_global___CompiledClass____instance_layout(recv) ATTR(recv, COLOR_compiling_global___CompiledClass____instance_layout)
typedef val_t (* compiling_global___CompiledClass___instance_layout_t)(val_t  self);
val_t compiling_global___CompiledClass___instance_layout(val_t  self);
typedef void (* compiling_global___CompiledClass___instance_layout__eq_t)(val_t  self, val_t  param0);
void compiling_global___CompiledClass___instance_layout__eq(val_t  self, val_t  param0);
typedef void (* compiling_global___CompiledClass___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___CompiledClass___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___CompiledClass___init(val_t  param0);
#define ATTR_compiling_global___MMGlobalProperty____pos_of(recv) ATTR(recv, COLOR_compiling_global___MMGlobalProperty____pos_of)
typedef val_t (* compiling_global___MMGlobalProperty___pos_of_t)(val_t  self);
val_t compiling_global___MMGlobalProperty___pos_of(val_t  self);
typedef void (* compiling_global___MMGlobalProperty___pos_of__eq_t)(val_t  self, val_t  param0);
void compiling_global___MMGlobalProperty___pos_of__eq(val_t  self, val_t  param0);
#define ATTR_compiling_global___MMSrcLocalClass____base_attr_pos(recv) ATTR(recv, COLOR_compiling_global___MMSrcLocalClass____base_attr_pos)
typedef val_t (* compiling_global___MMSrcLocalClass___base_attr_pos_t)(val_t  self);
val_t compiling_global___MMSrcLocalClass___base_attr_pos(val_t  self);
#define ATTR_compiling_global___MMSrcLocalClass____class_color_pos(recv) ATTR(recv, COLOR_compiling_global___MMSrcLocalClass____class_color_pos)
typedef val_t (* compiling_global___MMSrcLocalClass___class_color_pos_t)(val_t  self);
val_t compiling_global___MMSrcLocalClass___class_color_pos(val_t  self);
#define ATTR_compiling_global___MMSrcLocalClass____class_layout(recv) ATTR(recv, COLOR_compiling_global___MMSrcLocalClass____class_layout)
typedef val_t (* compiling_global___MMSrcLocalClass___class_layout_t)(val_t  self);
val_t compiling_global___MMSrcLocalClass___class_layout(val_t  self);
#define ATTR_compiling_global___MMSrcLocalClass____instance_layout(recv) ATTR(recv, COLOR_compiling_global___MMSrcLocalClass____instance_layout)
typedef val_t (* compiling_global___MMSrcLocalClass___instance_layout_t)(val_t  self);
val_t compiling_global___MMSrcLocalClass___instance_layout(val_t  self);
typedef void (* compiling_global___MMSrcLocalClass___build_layout_in_t)(val_t  self, val_t  param0, val_t  param1);
void compiling_global___MMSrcLocalClass___build_layout_in(val_t  self, val_t  param0, val_t  param1);
#define ATTR_compiling_global___MMSrcModule____local_table(recv) ATTR(recv, COLOR_compiling_global___MMSrcModule____local_table)
typedef void (* compiling_global___MMSrcModule___local_analysis_t)(val_t  self, val_t  param0);
void compiling_global___MMSrcModule___local_analysis(val_t  self, val_t  param0);
typedef val_t (* compiling_global___MMSrcModule___global_analysis_t)(val_t  self, val_t  param0);
val_t compiling_global___MMSrcModule___global_analysis(val_t  self, val_t  param0);
typedef void (* compiling_global___MMSrcModule___append_to_table_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
void compiling_global___MMSrcModule___append_to_table(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* compiling_global___MMSrcModule___build_tables_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t compiling_global___MMSrcModule___build_tables(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef void (* compiling_global___MMSrcModule___colorize_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
void compiling_global___MMSrcModule___colorize(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef val_t (* compiling_global___MMSrcModule___free_color_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___MMSrcModule___free_color(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling_global___MMSrcModule___compile_tables_to_c_t)(val_t  self, val_t  param0);
void compiling_global___MMSrcModule___compile_tables_to_c(val_t  self, val_t  param0);
typedef void (* compiling_global___MMSrcModule___declare_class_tables_to_c_t)(val_t  self, val_t  param0);
void compiling_global___MMSrcModule___declare_class_tables_to_c(val_t  self, val_t  param0);
typedef void (* compiling_global___MMSrcModule___compile_main_part_t)(val_t  self, val_t  param0);
void compiling_global___MMSrcModule___compile_main_part(val_t  self, val_t  param0);
typedef void (* compiling_global___MMSrcModule___compile_mod_to_c_t)(val_t  self, val_t  param0);
void compiling_global___MMSrcModule___compile_mod_to_c(val_t  self, val_t  param0);
typedef void (* compiling_global___MMSrcModule___compile_local_table_to_c_t)(val_t  self, val_t  param0);
void compiling_global___MMSrcModule___compile_local_table_to_c(val_t  self, val_t  param0);
typedef val_t (* compiling_global___TableElt___is_related_to_t)(val_t  self, val_t  param0);
val_t compiling_global___TableElt___is_related_to(val_t  self, val_t  param0);
typedef val_t (* compiling_global___TableElt___length_t)(val_t  self);
val_t compiling_global___TableElt___length(val_t  self);
typedef val_t (* compiling_global___TableElt___item_t)(val_t  self, val_t  param0);
val_t compiling_global___TableElt___item(val_t  self, val_t  param0);
typedef val_t (* compiling_global___TableElt___compile_to_c_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___TableElt___compile_to_c(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* compiling_global___LocalTableElt___symbol_t)(val_t  self);
val_t compiling_global___LocalTableElt___symbol(val_t  self);
typedef val_t (* compiling_global___LocalTableElt___value_t)(val_t  self, val_t  param0);
val_t compiling_global___LocalTableElt___value(val_t  self, val_t  param0);
#define ATTR_compiling_global___TableEltPropPos____property(recv) ATTR(recv, COLOR_compiling_global___TableEltPropPos____property)
typedef val_t (* compiling_global___TableEltPropPos___symbol_t)(val_t  self);
val_t compiling_global___TableEltPropPos___symbol(val_t  self);
typedef val_t (* compiling_global___TableEltPropPos___value_t)(val_t  self, val_t  param0);
val_t compiling_global___TableEltPropPos___value(val_t  self, val_t  param0);
typedef void (* compiling_global___TableEltPropPos___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___TableEltPropPos___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___TableEltPropPos___init(val_t  param0);
typedef val_t (* compiling_global___TableEltMethPos___compile_to_c_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___TableEltMethPos___compile_to_c(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling_global___TableEltMethPos___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___TableEltMethPos___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___TableEltMethPos___init(val_t  param0);
typedef val_t (* compiling_global___TableEltSuperPos___symbol_t)(val_t  self);
val_t compiling_global___TableEltSuperPos___symbol(val_t  self);
typedef val_t (* compiling_global___TableEltSuperPos___compile_to_c_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___TableEltSuperPos___compile_to_c(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling_global___TableEltSuperPos___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___TableEltSuperPos___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___TableEltSuperPos___init(val_t  param0);
typedef val_t (* compiling_global___TableEltAttrPos___compile_to_c_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___TableEltAttrPos___compile_to_c(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling_global___TableEltAttrPos___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___TableEltAttrPos___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___TableEltAttrPos___init(val_t  param0);
#define ATTR_compiling_global___TableEltClassPos____local_class(recv) ATTR(recv, COLOR_compiling_global___TableEltClassPos____local_class)
typedef val_t (* compiling_global___TableEltClassPos___is_related_to_t)(val_t  self, val_t  param0);
val_t compiling_global___TableEltClassPos___is_related_to(val_t  self, val_t  param0);
typedef void (* compiling_global___TableEltClassPos___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___TableEltClassPos___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___TableEltClassPos___init(val_t  param0);
typedef val_t (* compiling_global___TableEltClassIdPos___symbol_t)(val_t  self);
val_t compiling_global___TableEltClassIdPos___symbol(val_t  self);
typedef val_t (* compiling_global___TableEltClassIdPos___value_t)(val_t  self, val_t  param0);
val_t compiling_global___TableEltClassIdPos___value(val_t  self, val_t  param0);
typedef void (* compiling_global___TableEltClassIdPos___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___TableEltClassIdPos___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___TableEltClassIdPos___init(val_t  param0);
typedef val_t (* compiling_global___TableEltClassInitTablePos___symbol_t)(val_t  self);
val_t compiling_global___TableEltClassInitTablePos___symbol(val_t  self);
typedef val_t (* compiling_global___TableEltClassInitTablePos___value_t)(val_t  self, val_t  param0);
val_t compiling_global___TableEltClassInitTablePos___value(val_t  self, val_t  param0);
typedef val_t (* compiling_global___TableEltClassInitTablePos___compile_to_c_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___TableEltClassInitTablePos___compile_to_c(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling_global___TableEltClassInitTablePos___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___TableEltClassInitTablePos___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___TableEltClassInitTablePos___init(val_t  param0);
typedef val_t (* compiling_global___TableEltClassColorPos___symbol_t)(val_t  self);
val_t compiling_global___TableEltClassColorPos___symbol(val_t  self);
typedef val_t (* compiling_global___TableEltClassColorPos___value_t)(val_t  self, val_t  param0);
val_t compiling_global___TableEltClassColorPos___value(val_t  self, val_t  param0);
typedef val_t (* compiling_global___TableEltClassColorPos___compile_to_c_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___TableEltClassColorPos___compile_to_c(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling_global___TableEltClassColorPos___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___TableEltClassColorPos___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___TableEltClassColorPos___init(val_t  param0);
#define ATTR_compiling_global___TableEltBaseAttrPos____local_class(recv) ATTR(recv, COLOR_compiling_global___TableEltBaseAttrPos____local_class)
typedef val_t (* compiling_global___TableEltBaseAttrPos___symbol_t)(val_t  self);
val_t compiling_global___TableEltBaseAttrPos___symbol(val_t  self);
typedef val_t (* compiling_global___TableEltBaseAttrPos___value_t)(val_t  self, val_t  param0);
val_t compiling_global___TableEltBaseAttrPos___value(val_t  self, val_t  param0);
typedef val_t (* compiling_global___TableEltBaseAttrPos___compile_to_c_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___TableEltBaseAttrPos___compile_to_c(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling_global___TableEltBaseAttrPos___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___TableEltBaseAttrPos___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___TableEltBaseAttrPos___init(val_t  param0);
#define ATTR_compiling_global___TableEltComposite____table(recv) ATTR(recv, COLOR_compiling_global___TableEltComposite____table)
#define ATTR_compiling_global___TableEltComposite____cc(recv) ATTR(recv, COLOR_compiling_global___TableEltComposite____cc)
#define ATTR_compiling_global___TableEltComposite____offsets(recv) ATTR(recv, COLOR_compiling_global___TableEltComposite____offsets)
typedef val_t (* compiling_global___TableEltComposite___length_t)(val_t  self);
val_t compiling_global___TableEltComposite___length(val_t  self);
typedef val_t (* compiling_global___TableEltComposite___is_related_to_t)(val_t  self, val_t  param0);
val_t compiling_global___TableEltComposite___is_related_to(val_t  self, val_t  param0);
typedef void (* compiling_global___TableEltComposite___add_t)(val_t  self, val_t  param0, val_t  param1);
void compiling_global___TableEltComposite___add(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* compiling_global___TableEltComposite___item_t)(val_t  self, val_t  param0);
val_t compiling_global___TableEltComposite___item(val_t  self, val_t  param0);
typedef val_t (* compiling_global___TableEltComposite___compile_to_c_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___TableEltComposite___compile_to_c(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling_global___TableEltComposite___init_t)(val_t  self, val_t  param0, int* init_table);
void compiling_global___TableEltComposite___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_compiling_global___TableEltComposite___init(val_t  param0);
typedef val_t (* compiling_global___TableEltClassSelfId___is_related_to_t)(val_t  self, val_t  param0);
val_t compiling_global___TableEltClassSelfId___is_related_to(val_t  self, val_t  param0);
typedef val_t (* compiling_global___TableEltClassSelfId___compile_to_c_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___TableEltClassSelfId___compile_to_c(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling_global___TableEltClassSelfId___init_t)(val_t  self, int* init_table);
void compiling_global___TableEltClassSelfId___init(val_t  self, int* init_table);
val_t NEW_compiling_global___TableEltClassSelfId___init();
typedef val_t (* compiling_global___TableEltVftPointer___is_related_to_t)(val_t  self, val_t  param0);
val_t compiling_global___TableEltVftPointer___is_related_to(val_t  self, val_t  param0);
typedef val_t (* compiling_global___TableEltVftPointer___compile_to_c_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___TableEltVftPointer___compile_to_c(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling_global___TableEltVftPointer___init_t)(val_t  self, int* init_table);
void compiling_global___TableEltVftPointer___init(val_t  self, int* init_table);
val_t NEW_compiling_global___TableEltVftPointer___init();
typedef val_t (* compiling_global___ClassSorter___compare_t)(val_t  self, val_t  param0, val_t  param1);
val_t compiling_global___ClassSorter___compare(val_t  self, val_t  param0, val_t  param1);
typedef void (* compiling_global___ClassSorter___init_t)(val_t  self, int* init_table);
void compiling_global___ClassSorter___init(val_t  self, int* init_table);
val_t NEW_compiling_global___ClassSorter___init();
typedef val_t (* compiling_global___MMLocalClass___compare_t)(val_t  self, val_t  param0);
val_t compiling_global___MMLocalClass___compare(val_t  self, val_t  param0);
typedef void (* compiling_global___MMLocalClass___declare_tables_to_c_t)(val_t  self, val_t  param0);
void compiling_global___MMLocalClass___declare_tables_to_c(val_t  self, val_t  param0);
typedef void (* compiling_global___MMLocalClass___compile_tables_to_c_t)(val_t  self, val_t  param0);
void compiling_global___MMLocalClass___compile_tables_to_c(val_t  self, val_t  param0);
#endif
