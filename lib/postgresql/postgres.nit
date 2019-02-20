# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Guilherme Mansur<guilhermerpmansur@gmail.com>
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

# Services to manipulate a Postgres database
#
# For more information, refer to the documentation of http://www.postgresql.org/docs/manuals/
#
# ### Usage example
#
# ~~~
# class Animal
#   var name: String
#   var kind: String
#   var age: Int
# end
#
# var animals = new Array[Animal]
# var dog = new Animal("Lassy", "dog", 10)
# var cat = new Animal("Garfield", "cat", 3)
# var turtle = new Animal("George", "turtle", 123)
#
# animals.add(dog)
# animals.add(cat)
# animals.add(turtle)
#
# var db_suffix = "NIT_TESTING_ID".environ
# var db = new Postgres.open("host=postgres user=postgres dbname=postgres")
#
# assert db_is_open: not db.is_closed
# assert create_table: db.create_table("IF NOT EXISTS animals_{db_suffix} (aname TEXT PRIMARY KEY, kind TEXT NOT NULL, age INT NOT NULL)") else print db.error
#
# for animal in animals do
#   assert insert: db.insert("INTO animals_{db_suffix} VALUES('{animal.name}', '{animal.kind}', {animal.age})") else print db.error
# end
#
# var result = db.raw_execute("SELECT * FROM animals_{db_suffix}")
# assert  result.is_ok
# assert drop_table: db.execute("DROP TABLE animals_{db_suffix}")
# db.finish
# assert db_is_closed: db.is_closed
# ~~~
module postgres

private import native_postgres

# A connection to a Postgres database
class Postgres
  private var native_connection: NativePostgres

  # Is the connection closed?
  var is_closed = true

  # Open the connnection with the database using the `conninfo`
  init open(conninfo: Text)
  do
    init(new NativePostgres.connectdb(conninfo))
    if native_connection.status.is_ok then is_closed = false
  end

  # Close this connection with the database
  fun finish
  do
    if is_closed then return

    is_closed = true

    native_connection.finish
  end

  # Prepares the statement `query` with `stmt_name` to be executed later
  #
  # `num_params` specifies the number of parameters expected at the statement
  # execution.
  #
  # See `exec_prepared` for execution.
  fun prepare(stmt_name:String, query:String, num_params: Int):PGResult do return new PGResult(native_connection.prepare(stmt_name, query, num_params))

  # Execute prepared statement named `stmt_name` with `values`
  #
  # * `num_params` specifies the number of parameters given to the prepared statement
  # * `param_lengths` specifies the length of each parameters
  # * `param_formats` and `result_format` specifies the format used as input/output.
  #   Should be 0 for text results, 1 for binary.
  #
  # See `prepare`.
  fun exec_prepared(stmt_name: String, num_params: Int, values: Array[String], param_lengths: Array[Int], param_formats: Array[Int], result_format: Int):PGResult do
    return new PGResult(native_connection.exec_prepared(stmt_name, num_params, values, param_lengths, param_formats, result_format))
  end

  # Executes a `query` and returns the raw `PGResult`
  fun raw_execute(query: Text): PGResult do return new PGResult(native_connection.exec(query))

  # Execute the `sql` statement and returns `true` on success
  fun execute(query: Text): Bool do return native_connection.exec(query).status.is_ok

  # Create a table on the DB with a statement beginning with "CREATE TABLE ", followed by `rest`
  #
  # This method does not escape special characters.
  fun create_table(rest: Text): Bool do return execute("CREATE TABLE " + rest)

  # Insert in the DB with a statement beginning with "INSERT ", followed by `rest`
  #
  # This method does not escape special characters.
  fun insert(rest: Text): Bool do return execute("INSERT " + rest)

  # Replace in the DB with a statement beginning with "REPLACE", followed by `rest`
  #
  # This method does not escape special characters.
  fun replace(rest: Text): Bool do return execute("REPLACE " + rest)

  # The latest error message on the connection an empty string if none
  fun error: String do return native_connection.error

  # The status of this connection
  fun is_valid: Bool do return native_connection.status.is_ok

  # Resets the connection to the database
  fun reset do native_connection.reset
end

# The result of a given query
class PGResult
  private var pg_result: NativePGResult

  # Clears the result object and frees the memory allocated to the underlying C struct
  fun clear do pg_result.clear

  # Returns the number of rows in the query result
  fun ntuples:Int do return pg_result.ntuples

  # Returns the number of columns in each row of the query result
  fun nfields:Int do return pg_result.nfields

  # Returns the ExecStatusType of a result
  fun is_ok:Bool do return pg_result.status.is_ok

  # Returns the field name of a given `column_number`
  fun fname(column_number:Int):String do return pg_result.fname(column_number)

  # Returns the column number associated with the `column_name`
  fun fnumber(column_name:String):Int do return pg_result.fnumber(column_name)

  # Returns a single field value of one row of the result at `row_number`, `column_number`
  fun value(row_number:Int, column_number:Int):String  do return pg_result.value(row_number, column_number)

  # Tests wether a field specified by the `row_number` and `column_number` is null.
  fun is_null(row_number:Int, column_number: Int): Bool do return pg_result.is_null(row_number, column_number)
end
