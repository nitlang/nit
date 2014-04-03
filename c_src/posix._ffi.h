/*
	Extern implementation of Nit module posix
*/
#ifndef POSIX_NIT_H
#define POSIX_NIT_H

#include "posix._nitni.h"
#include "math._ffi.h"
int posix___Sys_uid__assign___impl( Sys recv, int uid );
int posix___Sys_uid___impl( Sys recv );
int posix___Sys_gid__assign___impl( Sys recv, int gid );
int posix___Sys_gid___impl( Sys recv );
int posix___Sys_euid__assign___impl( Sys recv, int uid );
int posix___Sys_euid___impl( Sys recv );
int posix___Sys_egid__assign___impl( Sys recv, int gid );
int posix___Sys_egid___impl( Sys recv );
struct passwd* posix___new_Passwd_from_uid___impl( int uid );
struct passwd* posix___new_Passwd_from_name___impl( String name );
String posix___Passwd_name___impl( struct passwd* recv );
String posix___Passwd_passwd___impl( struct passwd* recv );
int posix___Passwd_uid___impl( struct passwd* recv );
int posix___Passwd_gid___impl( struct passwd* recv );
String posix___Passwd_dir___impl( struct passwd* recv );
String posix___Passwd_shell___impl( struct passwd* recv );
struct group* posix___new_Group_from_gid___impl( int gid );
struct group* posix___new_Group_from_name___impl( String name );
String posix___Group_name___impl( struct group* recv );
String posix___Group_passwd___impl( struct group* recv );
int posix___Group_gid___impl( struct group* recv );
Array_of_String posix___Group_mem___impl( struct group* recv );
#endif
