#ifndef sorter__sep
#define sorter__sep
#include "array._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_AbstractSorter[];

extern const classtable_elt_t VFT_ComparableSorter[];
extern const int SFT_sorter[];
#define ID_AbstractSorter SFT_sorter[0]
#define COLOR_AbstractSorter SFT_sorter[1]
#define INIT_TABLE_POS_AbstractSorter SFT_sorter[2]
#define COLOR_sorter___AbstractSorter___compare SFT_sorter[3]
#define COLOR_sorter___AbstractSorter___sort SFT_sorter[4]
#define COLOR_sorter___AbstractSorter___sub_sort SFT_sorter[5]
#define COLOR_sorter___AbstractSorter___quick_sort SFT_sorter[6]
#define COLOR_sorter___AbstractSorter___bubble_sort SFT_sorter[7]
#define ID_ComparableSorter SFT_sorter[8]
#define COLOR_ComparableSorter SFT_sorter[9]
#define INIT_TABLE_POS_ComparableSorter SFT_sorter[10]
#define COLOR_sorter___ComparableSorter___init SFT_sorter[11]
typedef val_t (* sorter___AbstractSorter___compare_t)(val_t  self, val_t  param0, val_t  param1);
val_t sorter___AbstractSorter___compare(val_t  self, val_t  param0, val_t  param1);
typedef void (* sorter___AbstractSorter___sort_t)(val_t  self, val_t  param0);
void sorter___AbstractSorter___sort(val_t  self, val_t  param0);
typedef void (* sorter___AbstractSorter___sub_sort_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
void sorter___AbstractSorter___sub_sort(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef void (* sorter___AbstractSorter___quick_sort_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
void sorter___AbstractSorter___quick_sort(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef void (* sorter___AbstractSorter___bubble_sort_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
void sorter___AbstractSorter___bubble_sort(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef val_t (* sorter___ComparableSorter___compare_t)(val_t  self, val_t  param0, val_t  param1);
val_t sorter___ComparableSorter___compare(val_t  self, val_t  param0, val_t  param1);
typedef void (* sorter___ComparableSorter___init_t)(val_t  self, int* init_table);
void sorter___ComparableSorter___init(val_t  self, int* init_table);
val_t NEW_sorter___ComparableSorter___init();
#endif
