# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Guillaume Auger <jeho@resist.ca>
#
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module sqlite3

in "C header" `{
	#include "sqlite3.h"
	struct Data{
		sqlite3 *ppDb;
		sqlite3_stmt * stmt;
	};

`}

extern Sqlite3 `{struct Data*`}
	new `{
		struct Data* data = malloc(sizeof(data));
		return data;
	`}

	fun destroy do close

	fun open(filename : String) import String::to_cstring`{	
		sqlite3_open(String_to_cstring(filename), &recv->ppDb);
	`}

	fun close `{
		sqlite3_close(( recv)->ppDb);
		free(recv);
	`}

	fun exec(sql : String): Int import String::to_cstring `{
		struct Data * data = recv;
		return sqlite3_exec(data->ppDb, String_to_cstring(sql), 0, 0, 0);
	`}

	fun prepare(sql : String) import String::to_cstring `{
		struct Data * data = recv;
		int ret = sqlite3_prepare_v2(data->ppDb, String_to_cstring(sql), -1, &(data->stmt), 0);
	`}

	fun step: Int `{
		return sqlite3_step(recv->stmt);
	`}

	fun column_name(i: Int) : String import String::from_cstring `{
		const char * name = (sqlite3_column_name(recv->stmt, i));
		if(name == NULL){
			name = "";
		}
		char * ret = (char *) name;
		return new_String_from_cstring(ret);
	`}

	fun column_bytes(i: Int) : Int `{
		return sqlite3_column_bytes(recv->stmt, i);
	`}

	fun column_double(i: Int) : Float `{
		return sqlite3_column_double(recv->stmt, i);
	`}

	fun column_int(i: Int) : Int `{
		return sqlite3_column_int(recv->stmt, i);
	`}

	fun column_text(i: Int) : String import String::from_cstring `{
		char * ret = (char *) sqlite3_column_text(recv->stmt, i);
		if( ret == NULL ){
			ret = "";
		}
		return new_String_from_cstring(ret);
	`}

	fun column_type(i: Int) : Int `{
		return sqlite3_column_type(recv->stmt, i);
	`}

	#	fun column_blob(i : Int) : String `{
	#		TODO
	#	`}

	fun column_count: Int `{
		return sqlite3_column_count(recv->stmt);
	`}

	fun last_insert_rowid: Int `{
		return sqlite3_last_insert_rowid(recv->ppDb);
	`}

	fun get_error : Int import String::from_cstring `{
		return sqlite3_errcode(recv->ppDb);
	`}

	fun get_error_str : String import String::from_cstring `{
		char * err =(char *) sqlite3_errmsg(recv->ppDb);
		if(err == NULL){
			err = "";
		}
		return new_String_from_cstring(err);
	`}
end
