# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2015-2016 Guilherme Mansur <guilhermerpmansur@gmail.com>
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

# A native wrapper ove the postgres c api
module native_postgres is pkgconfig("libpq")

in "C header" `{
  #include <libpq-fe.h>
`}

extern class ExecStatusType `{int`}
  new empty           `{ return PGRES_EMPTY_QUERY; `}
  new command_ok      `{ return PGRES_COMMAND_OK; `}
  new tuples_ok       `{ return PGRES_TUPLES_OK; `}
  new copy_out        `{ return PGRES_COPY_OUT; `}
  new copy_in         `{ return PGRES_COPY_IN; `}
  new bad_response    `{ return PGRES_BAD_RESPONSE; `}
  new nonfatal_error  `{ return PGRES_NONFATAL_ERROR; `}
  new fatal_error     `{ return PGRES_FATAL_ERROR; `}

  fun is_ok: Bool `{
    return !(self == PGRES_BAD_RESPONSE || self == PGRES_NONFATAL_ERROR || self == PGRES_FATAL_ERROR);
  `}

  redef fun to_s import CString.to_s `{
    char * err = PQresStatus(self);
    if(err == NULL) err = "";
    return CString_to_s(err);
  `}
end

extern class ConnStatusType `{int`}
  new connection_ok `{ return CONNECTION_OK; `}
  new connection_bad `{ return CONNECTION_BAD; `}

  fun is_ok: Bool `{return self == CONNECTION_OK; `}
end

extern class NativePGResult `{PGresult *`}
  # Frees the memory block associated with the result
  fun clear `{PQclear(self); `}

  # Returns the number of rows in the query result
  fun ntuples:Int `{ return PQntuples(self); `}

  # Returns the number of columns in each row of the query result
  fun nfields:Int `{return PQnfields(self); `}

  # Returns the ExecStatusType of a result
  fun status: ExecStatusType `{ return PQresultStatus(self); `}

  # Returns the field name of a given column_number
  fun fname(column_number:Int):String import CString.to_s `{
    return CString_to_s( PQfname(self, column_number));
  `}

  # Returns the column number associated with the column name
  fun fnumber(column_name:String):Int import String.to_cstring `{
    return PQfnumber(self, String_to_cstring(column_name));
  `}

  # Returns a single field value of one row of the result at row_number, column_number
  fun value(row_number:Int, column_number:Int):String import CString.to_s `{
    return CString_to_s(PQgetvalue(self, row_number, column_number));
  `}

  # Tests wether a field is a null value
  fun is_null(row_number:Int, column_number: Int): Bool `{
    return PQgetisnull(self, row_number, column_number);
  `}

end
extern class NativePostgres `{PGconn *`}

  # Connect to a new database using the conninfo string as a parameter
  new connectdb(conninfo: Text) import Text.to_cstring `{
    PGconn * self = NULL;
    self = PQconnectdb(Text_to_cstring(conninfo));
    return self;
  `}

  # Submits a query to the server and waits for the result returns the ExecStatustype of the query
  fun exec(query: Text): NativePGResult import Text.to_cstring `{
    PGresult *res = PQexec(self, Text_to_cstring(query));
    return res;
  `}

  # Prepares a statement with the given parameters
  fun prepare(stmt: String, query: String, nParams: Int): NativePGResult import String.to_cstring `{
    const char * stmtName = String_to_cstring(stmt);
    const char * queryStr = String_to_cstring(query);
    PGresult * res = PQprepare(self, stmtName, queryStr, nParams, NULL);
    return res;
  `}

  fun exec_prepared(stmt: String, nParams: Int, values: Array[String], pLengths: Array[Int], pFormats: Array[Int], resultFormat: Int): NativePGResult import String.to_cstring, Array[String].[], Array[Int].[] `{
    const char * stmtName = String_to_cstring(stmt);
    const char * paramValues[nParams];
    int paramLengths[nParams];
    int paramFormats[nParams];
    int i;
    for(i = 0; i < nParams; i++)
      paramValues[i] = String_to_cstring(Array_of_String__index(values, i));
    for(i = 0; i < nParams; i++)
      paramLengths[i] = Array_of_Int__index(pLengths, i);
    for(i = 0; i < nParams; i++)
      paramFormats[i] = Array_of_Int__index(pFormats, i);
    PGresult * res = PQexecPrepared(self, stmtName, nParams, paramValues, paramLengths, paramFormats, resultFormat);
    return res;
  `}

  # Returns the error message of the last operation on the connection
  fun error: String import CString.to_s `{
    char * error = PQerrorMessage(self);
    return CString_to_s(error);
  `}

  # Returns the status of this connection
  fun status: ConnStatusType `{
    return PQstatus(self);
  `}

  # Closes the connection to the server
  fun finish  `{
    PQfinish(self);
  `}

  # Closes the connection to the server and attempts to reconnect with the previously used params
  fun reset `{
    PQreset(self);
  `}
end
