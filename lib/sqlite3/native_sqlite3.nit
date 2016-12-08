# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Guillaume Auger <jeho@resist.ca>
# Copyright 2013-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Low-level Sqlite3 features
module native_sqlite3 is pkgconfig("sqlite3")

in "C header" `{
	#include <sqlite3.h>
`}

in "C" `{
	// Return code of the last call to the constructor of `NativeSqlite3`
	static int nit_sqlite_open_error = SQLITE_OK;
`}

redef class Sys
	# Last error raised when calling `Sqlite3::open`
	fun sqlite_open_error: Sqlite3Code `{ return nit_sqlite_open_error; `}
end

extern class Sqlite3Code `{int`}
	new ok `{ return SQLITE_OK; `} #         0   /* Successful result */
	fun is_ok: Bool `{ return self == SQLITE_OK; `}

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
	fun is_row: Bool `{ return self == SQLITE_ROW; `}

	new done `{ return SQLITE_DONE; `} #       101  /* sqlite3_step() has finished executing */
	fun is_done: Bool `{ return self == SQLITE_DONE; `}

	redef fun to_s
	do
		var err = native_to_s
		if err.address_is_null then return "Unknown error"
		return err.to_s
	end

	private fun native_to_s: CString `{
#if SQLITE_VERSION_NUMBER >= 3007015
		return (char *)sqlite3_errstr(self);
#else
		return "sqlite3_errstr is not supported in version < 3.7.15";
#endif
	`}
end

# A prepared statement
extern class NativeStatement `{sqlite3_stmt*`}

	# Evaluate the statement
	fun step: Sqlite3Code `{
		return sqlite3_step(self);
	`}

	fun column_name(i: Int): CString `{
		return (char *)sqlite3_column_name(self, i);
	`}

	# Number of bytes in the blob or string at row `i`
	fun column_bytes(i: Int) : Int `{
		return sqlite3_column_bytes(self, i);
	`}

	fun column_double(i: Int) : Float `{
		return sqlite3_column_double(self, i);
	`}

	fun column_int(i: Int) : Int `{
		return sqlite3_column_int(self, i);
	`}

	fun column_text(i: Int): CString `{
		return (char *)sqlite3_column_text(self, i);
	`}

	# Type of the entry at row `i`
	fun column_type(i: Int): DataType `{
		return sqlite3_column_type(self, i);
	`}

	fun column_blob(i: Int): Pointer `{ return (void*)sqlite3_column_blob(self, i); `}

	fun column_count: Int `{
		return sqlite3_column_count(self);
	`}

	# Reset this statement to its original state, to be reexecuted
	fun reset: Sqlite3Code `{ return sqlite3_reset(self); `}

	# Delete this statement
	fun finalize: Sqlite3Code `{ return sqlite3_finalize(self); `}
end

# A database connection
extern class NativeSqlite3 `{sqlite3 *`}

	# Open a connection to a database in UTF-8
	new open(filename: CString) `{
		sqlite3 *self = NULL;
		int err = sqlite3_open(filename, &self);
		nit_sqlite_open_error = err;
		return self;
	`}

	# Has this DB been correctly opened?
	#
	# To know if it has been closed or interrupted, you must check for errors with `error`.
	fun is_valid: Bool do return not address_is_null

	# Close this connection
	fun close `{
#if SQLITE_VERSION_NUMBER >= 3007014
		sqlite3_close_v2(self);
#else
		// A program using the older version should not rely on the garbage-collector
		// to close its connections. They must be closed manually after the associated
		// prepare statements have been finalized.
		sqlite3_close(self);
#endif
	`}

	# Execute a SQL statement
	fun exec(sql: CString): Sqlite3Code `{
		return sqlite3_exec(self, sql, NULL, NULL, NULL);
	`}

	# Prepare a SQL statement
	fun prepare(sql: CString): NativeStatement `{
		sqlite3_stmt *stmt;
		int res = sqlite3_prepare_v2(self, sql, -1, &stmt, 0);
		if (res == SQLITE_OK)
			return stmt;
		else
			return NULL;
	`}

	fun last_insert_rowid: Int `{
		return sqlite3_last_insert_rowid(self);
	`}

	fun error: Sqlite3Code `{
		return sqlite3_errcode(self);
	`}
end

# Sqlite data types
extern class DataType `{ int `}
	fun is_integer: Bool `{ return self == SQLITE_INTEGER; `}
	fun is_float: Bool `{ return self == SQLITE_FLOAT; `}
	fun is_blob: Bool `{ return self == SQLITE_BLOB; `}
	fun is_null: Bool `{ return self == SQLITE_NULL; `}
	fun is_text: Bool `{ return self == SQLITE_TEXT; `}

	fun to_i: Int `{ return self; `}
end
