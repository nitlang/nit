#include <nit_common.h>
#include "standard___file._sep.h"
#ifndef FILE_NITNI_H
#define FILE_NITNI_H

#ifndef STDIN_TYPE
#define STDIN_TYPE
struct s_Stdin{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Stdin *Stdin;
#define Stdin_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Stdin_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef STRING_TYPE
#define STRING_TYPE
struct s_String{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_String *String;
#define String_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define String_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef SET_TYPE
#define SET_TYPE
struct s_Set{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Set *Set;
#define Set_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Set_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef HASHSET_TYPE
#define HASHSET_TYPE
struct s_HashSet{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_HashSet *HashSet;
#define HashSet_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define HashSet_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef OBJECT_TYPE
#define OBJECT_TYPE
struct s_Object{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Object *Object;
#define Object_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Object_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef HASHSET_TYPE
#define HASHSET_TYPE
struct s_HashSet{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_HashSet *HashSet;
#define HashSet_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define HashSet_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#include "file_nit.h"

/* out/indirect function for file::Stdin::poll_in */
val_t Stdin_poll_in___out( val_t recv );

/* out/indirect function for file::String::files */
val_t String_files___out( val_t recv );

/* out/indirect function for file::NativeString::file_exists */
val_t NativeString_file_exists___out( val_t recv );

/* out/indirect function for file::NativeString::file_stat */
val_t NativeString_file_stat___out( val_t recv );

/* out/indirect function for file::NativeString::file_mkdir */
val_t NativeString_file_mkdir___out( val_t recv );

/* out/indirect function for file::NativeString::file_delete */
val_t NativeString_file_delete___out( val_t recv );

/* out/indirect function for file::FileStat::mode */
val_t FileStat_mode___out( val_t recv );

/* out/indirect function for file::FileStat::atime */
val_t FileStat_atime___out( val_t recv );

/* out/indirect function for file::FileStat::ctime */
val_t FileStat_ctime___out( val_t recv );

/* out/indirect function for file::FileStat::mtime */
val_t FileStat_mtime___out( val_t recv );

/* out/indirect function for file::FileStat::size */
val_t FileStat_size___out( val_t recv );

/* out/indirect function for file::NativeFile::io_read */
val_t NativeFile_io_read___out( val_t recv, val_t buf, val_t len );

/* out/indirect function for file::NativeFile::io_write */
val_t NativeFile_io_write___out( val_t recv, val_t buf, val_t len );

/* out/indirect function for file::NativeFile::io_close */
val_t NativeFile_io_close___out( val_t recv );

/* out/indirect function for file::NativeFile::file_stat */
val_t NativeFile_file_stat___out( val_t recv );

/* out/indirect function for file::NativeFile::io_open_read */
val_t NEW_NativeFile_standard___file___NativeFile___io_open_read( val_t path );

/* out/indirect function for file::NativeFile::io_open_write */
val_t NEW_NativeFile_standard___file___NativeFile___io_open_write( val_t path );

/* out/indirect function for file::NativeFile::native_stdin */
val_t NEW_NativeFile_standard___file___NativeFile___native_stdin(  );

/* out/indirect function for file::NativeFile::native_stdout */
val_t NEW_NativeFile_standard___file___NativeFile___native_stdout(  );

/* out/indirect function for file::NativeFile::native_stderr */
val_t NEW_NativeFile_standard___file___NativeFile___native_stderr(  );
/* friendly for hash_collection::HashSet::init */
HashSet file_new_HashSet(  );
#ifndef new_HashSet
#define new_HashSet file_new_HashSet
#endif
/* friendly for hash_collection::HashSet::(abstract_collection::SimpleCollection::add) */
void file_HashSet_add( HashSet recv, Object item );
#ifndef HashSet_add
#define HashSet_add file_HashSet_add
#endif
/* friendly for string::String::from_cstring */
String file_new_String_from_cstring( char * str );
#ifndef new_String_from_cstring
#define new_String_from_cstring file_new_String_from_cstring
#endif
/* friendly for string::String::to_cstring */
char * file_String_to_cstring( String recv );
#ifndef String_to_cstring
#define String_to_cstring file_String_to_cstring
#endif

/* Type check for HashSet[String] with Set[String] */
int file_HashSet_is_a_Set( HashSet value );
#ifndef HashSet_is_a_Set
#define HashSet_is_a_Set file_HashSet_is_a_Set
#endif

/* Cast for HashSet[String] to Set[String] */
Set file_HashSet_as_Set( HashSet value );
#ifndef HashSet_as_Set
#define HashSet_as_Set file_HashSet_as_Set
#endif

/* Type check for String with Object */
int file_String_is_a_Object( String value );
#ifndef String_is_a_Object
#define String_is_a_Object file_String_is_a_Object
#endif

/* Cast for String to Object */
Object file_String_as_Object( String value );
#ifndef String_as_Object
#define String_as_Object file_String_as_Object
#endif
#endif
