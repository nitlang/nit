# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Guillaume Auger <jeho@resist.ca>
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

extern class Sqlite3Code `{int`}
	new ok `{ return SQLITE_OK; `} #         0   /* Successful result */
	fun is_ok: Bool `{ return recv == SQLITE_OK; `}

	# new  `{ return SQLITE_ERROR; `} #      1   /* SQL error or missing database */
	# new  `{ return SQLITE_INTERNAL; `} #    2   /* Internal logic error in SQLite */
	# new  `{ return SQLITE_PERM; `} #        3   /* Access permission denied */
	# new  `{ return SQLITE_ABORT; `} #       4   /* Callback routine requested an abort */
	# new  `{ return SQLITE_BUSY; `} #        5   /* The database file is locked */
	# new  `{ return SQLITE_LOCKED; `} #      6   /* A table in the database is locked */
	# new  `{ return SQLITE_NOMEM; `} #       7   /* A malloc() failed */
	# new  `{ return SQLITE_READONLY; `} #    8   /* Attempt to write a readonly database */
	# new  `{ return SQLITE_INTERRUPT; `} #   9   /* Operation terminated by sqlite3_interrupt()*/
	# new  `{ return SQLITE_IOERR; `} #      10   /* Some kind of disk I/O error occurred */
	# new  `{ return SQLITE_CORRUPT; `} #    11   /* The database disk image is malformed */
	# new  `{ return SQLITE_NOTFOUND; `} #   12   /* Unknown opcode in sqlite3_file_control() */
	# new  `{ return SQLITE_FULL; `} #       13   /* Insertion failed because database is full */
	# new  `{ return SQLITE_CANTOPEN; `} #   14   /* Unable to open the database file */
	# new  `{ return SQLITE_PROTOCOL; `} #   15   /* Database lock protocol error */
	# new  `{ return SQLITE_EMPTY; `} #      16   /* Database is empty */
	# new  `{ return SQLITE_SCHEMA; `} #     17   /* The database schema changed */
	# new  `{ return SQLITE_TOOBIG; `} #     18   /* String or BLOB exceeds size limit */
	# new  `{ return SQLITE_CONSTRAINT; `} # 19   /* Abort due to constraint violation */
	# new  `{ return SQLITE_MISMATCH; `} #   20   /* Data type mismatch */
	# new  `{ return SQLITE_MISUSE; `} #     21   /* Library used incorrectly */
	# new  `{ return SQLITE_NOLFS; `} #      22   /* Uses OS features not supported on host */
	# new  `{ return SQLITE_AUTH; `} #       23   /* Authorization denied */
	# new  `{ return SQLITE_FORMAT; `} #     24   /* Auxiliary database format error */
	# new  `{ return SQLITE_RANGE; `} #      25   /* 2nd parameter to sqlite3_bind out of range */
	# new  `{ return SQLITE_NOTADB; `} #     26   /* File opened that is not a database file */
	# new  `{ return SQLITE_NOTICE; `} #     27   /* Notifications from sqlite3_log() */
	# new  `{ return SQLITE_WARNING; `} #    28   /* Warnings from sqlite3_log() */

	new row `{ return SQLITE_ROW; `} #        100  /* sqlite3_step() has another row ready */
	fun is_row: Bool `{ return recv == SQLITE_ROW; `}

	new done `{ return SQLITE_DONE; `} #       101  /* sqlite3_step() has finished executing */
	fun is_done: Bool `{ return recv == SQLITE_DONE; `}
end

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
		sqlite3_close(recv->ppDb);
		free(recv);
	`}

	fun exec(sql : String): Sqlite3Code import String::to_cstring `{
		struct Data * data = recv;
		return sqlite3_exec(data->ppDb, String_to_cstring(sql), 0, 0, 0);
	`}

	fun prepare(sql : String): Sqlite3Code import String::to_cstring `{
		struct Data * data = recv;
		return sqlite3_prepare_v2(data->ppDb, String_to_cstring(sql), -1, &(data->stmt), 0);
	`}

	fun step: Sqlite3Code `{
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
