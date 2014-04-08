/*
	Extern implementation of Nit module posix
*/
#include <stdlib.h>
#include <stdio.h>
#include "posix._ffi.h"
#define String_to_cstring posix___String_to_cstring
#define NativeString_to_s posix___NativeString_to_s
#define new_Array_of_String posix___new_Array_of_String
#define Array_of_String_add posix___Array_of_String_add
#line 22 "lib/standard/posix.nit"

#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>

int posix___Sys_uid__assign___impl( Sys recv, int uid )
{
#line 30 "lib/standard/posix.nit"

 return setuid(uid); }

int posix___Sys_uid___impl( Sys recv )
{
#line 31 "lib/standard/posix.nit"

 return getuid(); }

int posix___Sys_gid__assign___impl( Sys recv, int gid )
{
#line 33 "lib/standard/posix.nit"

 return setgid(gid); }

int posix___Sys_gid___impl( Sys recv )
{
#line 34 "lib/standard/posix.nit"

 return getgid(); }

int posix___Sys_euid__assign___impl( Sys recv, int uid )
{
#line 36 "lib/standard/posix.nit"

 return seteuid(uid); }

int posix___Sys_euid___impl( Sys recv )
{
#line 37 "lib/standard/posix.nit"

 return geteuid(); }

int posix___Sys_egid__assign___impl( Sys recv, int gid )
{
#line 39 "lib/standard/posix.nit"

 return setegid(gid); }

int posix___Sys_egid___impl( Sys recv )
{
#line 40 "lib/standard/posix.nit"

 return getegid(); }

struct passwd* posix___new_Passwd_from_uid___impl( int uid )
{
#line 45 "lib/standard/posix.nit"

 return getpwuid(uid); }

struct passwd* posix___new_Passwd_from_name___impl( String name )
{
#line 48 "lib/standard/posix.nit"

 return getpwnam( String_to_cstring(name) ); }

String posix___Passwd_name___impl( struct passwd* recv )
{
#line 51 "lib/standard/posix.nit"

 return NativeString_to_s(recv->pw_name); }

String posix___Passwd_passwd___impl( struct passwd* recv )
{
#line 54 "lib/standard/posix.nit"

 return NativeString_to_s(recv->pw_passwd); }

int posix___Passwd_uid___impl( struct passwd* recv )
{
#line 57 "lib/standard/posix.nit"

 return recv->pw_uid; }

int posix___Passwd_gid___impl( struct passwd* recv )
{
#line 60 "lib/standard/posix.nit"

 return recv->pw_gid; }

String posix___Passwd_dir___impl( struct passwd* recv )
{
#line 63 "lib/standard/posix.nit"

 return NativeString_to_s(recv->pw_dir); }

String posix___Passwd_shell___impl( struct passwd* recv )
{
#line 66 "lib/standard/posix.nit"

 return NativeString_to_s(recv->pw_shell); }

struct group* posix___new_Group_from_gid___impl( int gid )
{
#line 70 "lib/standard/posix.nit"

 return getgrgid(gid); }

struct group* posix___new_Group_from_name___impl( String name )
{
#line 71 "lib/standard/posix.nit"

 return getgrnam( String_to_cstring(name) ); }

String posix___Group_name___impl( struct group* recv )
{
#line 73 "lib/standard/posix.nit"

 return NativeString_to_s(recv->gr_name); }

String posix___Group_passwd___impl( struct group* recv )
{
#line 74 "lib/standard/posix.nit"

 return NativeString_to_s(recv->gr_passwd); }

int posix___Group_gid___impl( struct group* recv )
{
#line 75 "lib/standard/posix.nit"

 return recv->gr_gid; }

Array_of_String posix___Group_mem___impl( struct group* recv )
{
#line 76 "lib/standard/posix.nit"


		char **mem;
		int m;
		Array_of_String ret;

		mem = recv->gr_mem;
		ret = new_Array_of_String();

		for (m = 0; mem[m] != NULL; m++)
			Array_of_String_add(ret, NativeString_to_s(mem[m]));

		return ret;
	}
