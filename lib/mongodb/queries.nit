# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Mongo queries framework
#
# The `queries` framework is used to build Mongo queries as JsonObject with
# a fluent interface.
#
# Using the `queries` framework we can get from this:
#
# ~~~nitish
# var exists = new JsonObject
# exists["$exists"] = true
#
# var query = new JsonObject
# query["login"] = "Morriar"
# query["email"] = exists
#
# collection.find(query)
# ~~~
#
# To this:
#
# ~~~nitish
# collection.find((new MongoMatch).eq("login", "Morriar").exists("email", true))
# ~~~
#
# The framework provides three classes used to map the MongoDB query API:
# * `MongoMatch` the base query that can be used with most Mongo services
# * `MongoPipeline` the array of queries that is expected by `MongoCollection::aggregate`
# * `MongoGroup` the group query for a `MongoPipeline`
#
# More on this features can be found in the official MongoDB documentation:
# https://docs.mongodb.com/manual/reference/operator/
module queries

import mongodb

# A basic match query
#
# `MongoMatch` is used with most of the Mongo services like `find`, `find_all`,
# `remove` etc.
#
# Building a query can be done with the fluent interface:
#
# ~~~
# var query = (new MongoMatch).
#	eq("login", "Morriar").
#	gt("age", 18).
#	exists("email", true).
#	is_in("status", [1, 2, 3, 4])
# ~~~
#
# Fore more help on how to use the query operators of MongoDB please
# refer to the official MongoDB documentation:
# https://docs.mongodb.com/manual/reference/operator/query/
class MongoMatch
	super JsonObject

	private fun op(name: String, field: String, value: nullable Jsonable): MongoMatch do
		var q = new JsonObject
		q["${name}"] = value
		self[field] = q
		return self
	end

	# Match documents where `field` equals `value`
	#
	# https://docs.mongodb.com/manual/reference/operator/query/eq/#op._S_eq
	#
	# ~~~json
	# {field: {$eq: value} }
	# ~~~
	fun eq(field: String, value: nullable Jsonable): MongoMatch do
		self[field] = value
		return self
	end

	# Match documents where `field` not equals `value`
	#
	# https://docs.mongodb.com/manual/reference/operator/query/ne/#op._S_ne
	#
	# ~~~json
	# {field: {$ne: value} }
	# ~~~
	fun ne(field: String, value: nullable Jsonable): MongoMatch do
		op("ne", field, value)
		return self
	end

	# Match documents where `field` is greater than `value`
	#
	# https://docs.mongodb.com/manual/reference/operator/query/gt/#op._S_gt
	#
	# ~~~json
	# {field: {$gt: value} }
	# ~~~
	fun gt(field: String, value: nullable Jsonable): MongoMatch do
		op("gt", field, value)
		return self
	end

	# Match documents where `field` is greater or equal to `value`
	#
	# https://docs.mongodb.com/manual/reference/operator/query/gte/#op._S_gte
	#
	# ~~~json
	# {field: {$gte: value} }
	# ~~~
	fun gte(field: String, value: nullable Jsonable): MongoMatch do
		op("gte", field, value)
		return self
	end

	# Match documents where `field` is less than `value`
	#
	# https://docs.mongodb.com/manual/reference/operator/query/lt/#op._S_lt
	#
	# ~~~json
	# {field: {$lt: value} }
	# ~~~
	fun lt(field: String, value: nullable Jsonable): MongoMatch do
		op("lt", field, value)
		return self
	end

	# Match documents where `field` is less or equal to `value`
	#
	# https://docs.mongodb.com/manual/reference/operator/query/lte/
	#
	# ~~~json
	# {field: {$lte: value} }
	# ~~~
	fun lte(field: String, value: nullable Jsonable): MongoMatch do
		op("lte", field, value)
		return self
	end

	# Match documents where `field` exists or not
	#
	# https://docs.mongodb.com/manual/reference/operator/query/exists/#op._S_exists
	#
	# ~~~json
	# {field: {$exists: boolean} }
	# ~~~
	#
	# When `exists` is true, `$exists` matches the documents that contain the
	# field, including documents where the field value is null.
	# If <boolean> is false, the query returns only the documents that do not
	# contain the field.
	fun exists(field: String, exists: Bool): MongoMatch do
		op("exists", field, exists)
		return self
	end

	# Match documents where `field` is in `values`
	#
	# https://docs.mongodb.com/manual/reference/operator/query/in/
	#
	# ~~~json
	# { field: { $in: [<value1>, <value2>, ... <valueN> ] } }
	# ~~~
	#
	# `$in` selects the documents where the value of a field equals any value
	# in the specified array.
	fun is_in(field: String, values: Array[nullable Jsonable]): MongoMatch do
		op("$in", field, new JsonArray.from(values))
		return self
	end

	# Match documents where `field` is not in `values`
	#
	# https://docs.mongodb.com/manual/reference/operator/query/nin/
	#
	# ~~~json
	# { field: { $nin: [<value1>, <value2>, ... <valueN> ] } }
	# ~~~
	#
	# `$nin` selects the documents where:
	# * the field value is not in the specified array or
	# * the field does not exist.
	fun is_nin(field: String, values: Array[nullable Jsonable]): MongoMatch do
		op("$nin", field, new JsonArray.from(values))
		return self
	end
end

# Mongo pipelines are arrays of aggregation stages
#
# With the `MongoCollection::aggregate` method, pipeline stages appear in a array.
# Documents pass through the stages in sequence.
#
# ~~~json
# db.collection.aggregate( [ { <stage> }, ... ] )
# ~~~
#
# The MongoPipeline fluent interface can be used to bluid a pipeline:
# ~~~
# var pipeline = (new MongoPipeline).
#	match((new MongoMatch).eq("game", "nit")).
#	group((new MongoGroup("$game._id")).sum("nitcoins", "$game.nitcoins")).
#	sort((new MongoMatch).eq("nitcoins", -1)).
#	limit(10)
# ~~~
#
# The pipeline can then be used in an aggregation query:
# ~~~nitish
# collection.aggregate(pipeline)
# ~~~
#
# For more information read about MongoDB pipeline operators from the MongoDB
# official documentation: https://docs.mongodb.com/manual/reference/operator/aggregation/
class MongoPipeline
	super JsonArray

	# Add a stage to the pipeline
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/#stage-operators
	#
	# Each stage is registered as:
	# ~~~json
	# { $<stage>: <json> }
	# ~~~
	fun add_stage(stage: String, json: Jsonable): MongoPipeline do
		var obj = new JsonObject
		obj["${stage}"] = json
		add obj
		return self
	end

	# Apply projection
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/project/#pipe._S_project
	#
	# Passes along the documents with only the specified fields to the next stage
	# in the pipeline.
	#
	# ~~~json
	# { $project: { <specifications> } }
	# ~~~
	#
	# The specified fields can be existing fields from the input documents or
	# newly computed fields.
	fun project(projection: JsonObject): MongoPipeline do return add_stage("project", projection)

	# Apply match
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/match/
	#
	# Filters the documents to pass only the documents that match the specified
	# condition(s) to the next pipeline stage.
	#
	# ~~~json
	# { $match: { <query> } }
	# ~~~
	fun match(query: MongoMatch): MongoPipeline do return add_stage("match", query)

	# Apply sort
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/sort/
	#
	# Sorts all input documents and returns them to the pipeline in sorted order.
	#
	# ~~~json
	# { $sort: { <projection> } }
	# ~~~
	fun sort(projection: JsonObject): MongoPipeline do return add_stage("sort", projection)

	# Apply skip
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/skip/
	#
	# Skips over the specified number of documents that pass into the stage and
	# passes the remaining documents to the next stage in the pipeline.
	#
	# ~~~json
	# { $skip: { <number> } }
	# ~~~
	#
	# If `number == null` then no skip stage is generated
	fun skip(number: nullable Int): MongoPipeline do
		if number == null then return self
		return add_stage("skip", number)
	end

	# Apply limit
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/limit/
	#
	# Limits the number of documents passed to the next stage in the pipeline.
	#
	# ~~~json
	# { $limit: { <number> } }
	# ~~~
	#
	# If `number == null` then no limit stage is generated
	fun limit(number: nullable Int): MongoPipeline do
		if number == null then return self
		return add_stage("limit", number)
	end

	# Apply group
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/group/
	#
	# Groups documents by some specified expression and outputs to the next stage
	# a document for each distinct grouping.
	#
	# The output documents contain an `_id` field which contains the distinct
	# group by key.
	#
	# The output documents can also contain computed fields that hold the values
	# of some accumulator expression grouped by the `$group`'s `_id` field.
	# `$group` does not order its output documents.
	#
	# ~~~json
	# { $group: { <group> } }
	# ~~~
	fun group(group: MongoGroup): MongoPipeline do return add_stage("group", group)
end

# Mongo pipeline group stage
#
# https://docs.mongodb.com/manual/reference/operator/aggregation/group/#pipe._S_group
#
# Groups documents by some specified expression and outputs to the next stage a
# document for each distinct grouping.
#
# ~~~
# var group = (new MongoGroup("$game._id")).sum("nitcoins", "$game.nitcoins")
#
# var pipeline = (new MongoPipeline).group(group)
# ~~~
#
# The output documents contain an `_id` field which contains the distinct group by key.
# The output documents can also contain computed fields that hold the values of
# some accumulator expression grouped by the `$group`‘s `_id` field.
# `$group` does not order its output documents.
#
# The `$group` stage has the following prototype form:
#
# ~~~json
# { $group: { _id: <expression>, <field1>: { <accumulator1> : <expression1> }, ... } }
# ~~~
#
# The `_id` field is mandatory; however, you can specify an `_id` value of null
# to calculate accumulated values for all the input documents as a whole.
#
# The remaining computed fields are optional and computed using the `<accumulator>`
# operators.
class MongoGroup
	super JsonObject

	# Group `_id`
	#
	# See `MongoGroup::group`.
	var id: String

	init do self["_id"] = id

	# Add an accumulator
	#
	# Each accumulator is registered as:
	# ~~~json
	# <field>: { <accumulator> : <expression> }
	# ~~~
	private fun acc(name: String, field: String, expression: nullable Jsonable): MongoGroup do
		var q = new JsonObject
		q["${name}"] = expression
		self[field] = q
		return self
	end

	# Calculates and returns the sum of numeric values
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/sum/#grp._S_sum
	#
	# ~~~json
	# { $sum: <expression> }
	# ~~~
	#
	# `$sum` ignores non-numeric values.
	fun sum(field: String, expression: Jsonable): MongoGroup do
		return acc("sum", field, expression)
	end

	# Returns the average value of the numeric values
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/avg/
	#
	# ~~~json
	# { $avg: <expression> }
	# ~~~
	#
	# `$avg` ignores non-numeric values.
	fun avg(field: String, expression: Jsonable): MongoGroup do
		return acc("avg", field, expression)
	end

	# Returns the maximum value
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/max/
	#
	# ~~~json
	# { $max: <expression> }
	# ~~~
	#
	# `$max` compares both value and type, using the specified BSON comparison
	# order for values of different types.
	fun max(field: String, expression: Jsonable): MongoGroup do
		return acc("max", field, expression)
	end

	# Returns the minimum value
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/min/
	#
	# ~~~json
	# { $min: <expression> }
	# ~~~
	#
	# `$min` compares both value and type, using the specified BSON comparison
	# order for values of different types.
	fun min(field: String, expression: Jsonable): MongoGroup do
		return acc("min", field, expression)
	end

	# Return the first value
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/first/
	#
	# ~~~json
	# { $first: <expression> }
	# ~~~
	#
	# Returns the value that results from applying an expression to the first
	# document in a group of documents that share the same group by key.
	#
	# Only meaningful when documents are in a defined order.
	fun first(field: String, expression: Jsonable): MongoGroup do
		return acc("first", field, expression)
	end

	# Return the last value
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/last/
	#
	# ~~~json
	# { $last: <expression> }
	# ~~~
	#
	# Returns the value that results from applying an expression to the last
	# document in a group of documents that share the same group by key.
	#
	# Only meaningful when documents are in a defined order.
	fun last(field: String, expression: Jsonable): MongoGroup do
		return acc("last", field, expression)
	end

	# Push to an array
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/push/
	#
	# ~~~json
	# { $push: <expression> }
	# ~~~
	#
	# Returns an array of all values that result from applying an expression to
	# each document in a group of documents that share the same group by key.
	fun push(field: String, expr: Jsonable): MongoGroup do
		return acc("push", field, expr)
	end

	# Push to a unique array
	#
	# https://docs.mongodb.com/manual/reference/operator/aggregation/addToSet/
	#
	# ~~~json
	# { $addToSet: <expression> }
	# ~~~
	#
	# Returns an array of all unique values that results from applying an
	# expression to each document in a group of documents that share the same
	# group by key.
	#
	# Order of the elements in the output array is unspecified.
	fun addToSet(field: String, expr: Jsonable): MongoGroup do
		return acc("addToSet", field, expr)
	end
end
