# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Feedback related features
module api_feedback

import api_base
import popcorn::pop_auth

redef class NitwebConfig

	# MongoDB collection used to store stars.
	var stars = new StarRatingRepo(db.collection("stars")) is lazy
end

redef class APIRouter

	redef init do
		super

		use("/feedback/grades/most", new APIStarsMost(config))
		use("/feedback/grades/best", new APIStarsBest(config))
		use("/feedback/grades/worst", new APIStarsWorst(config))
		use("/feedback/grades/users", new APIStarsUsers(config))

		use("/feedback/user/stars", new APIUserStars(config))

		use("/feedback/stars/:id", new APIStars(config))
		use("/feedback/stars/:id/dimension/:dimension", new APIStarsDimension(config))
	end
end

# Base handler for feedback features.
abstract class APIFeedBack
	super APIHandler

	# Get the user logged in or null if no session
	fun get_session_user(req: HttpRequest): nullable User do
		var session = req.session
		if session == null then return null
		return session.user
	end

	# Get the login of the session user or null if no session
	fun get_session_login(req: HttpRequest): nullable String do
		var user = get_session_user(req)
		if user == null then return null
		return user.login
	end
end

# Most rated entities
class APIStarsMost
	super APIFeedBack

	redef fun get(req, res) do
		res.api_json(req, new JsonArray.from(config.stars.most_rated))
	end
end

# Best rated entities
class APIStarsBest
	super APIFeedBack

	redef fun get(req, res) do
		res.api_json(req, new JsonArray.from(config.stars.best_rated))
	end
end

# Best rated entities
class APIStarsWorst
	super APIFeedBack

	redef fun get(req, res) do
		res.api_json(req, new JsonArray.from(config.stars.worst_rated))
	end
end

# Best rated entities
class APIStarsUsers
	super APIFeedBack

	redef fun get(req, res) do
		res.api_json(req, new JsonArray.from(config.stars.users_ratings))
	end
end

# Stars attributed to mentities by user
class APIUserStars
	super APIFeedBack

	redef fun get(req, res) do
		var user = get_session_user(req)
		if user == null then return
		res.api_json(req, new JsonArray.from(user.ratings(config)))
	end
end

# Stars attributed to mentities
class APIStars
	super APIFeedBack

	redef fun get(req, res) do
		var login = get_session_login(req)
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		res.api_json(req, mentity.ratings(config, login))
	end
end

# Stars attributed to mentities by dimension
class APIStarsDimension
	super APIFeedBack

	redef fun get(req, res) do
		var login = get_session_login(req)
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var dimension = req.param("dimension")
		if dimension == null then return
		res.api_json(req, mentity.ratings_by_dimension(config, dimension, login))
	end

	redef fun post(req, res) do
		var user = get_session_user(req)
		var login = null
		if user != null then login = user.login

		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var dimension = req.param("dimension")
		if dimension == null then return

		# Retrieve user previous rating
		var previous = null
		if user != null then
			previous = user.find_previous_rating(config, mentity, dimension)
		end

		var obj = req.body.parse_json
		if not obj isa JsonObject then
			res.api_error(400, "Expected a JSON object")
			return
		end
		var rating = obj["rating"]
		if not rating isa Int then
			res.api_error(400, "Expected a key `rating`")
			return
		end

		if previous != null then
			previous.rating = rating
			previous.timestamp = get_time
			config.stars.save previous
		else
			config.stars.save new StarRating(login, mentity.full_name, dimension, rating)
		end
		res.api_json(req, mentity.ratings_by_dimension(config, dimension, login))
	end
end

# Star ratings allow users to rate mentities with a 5-stars system.
#
# Each rating can consider only one `dimension` of the mentity.
# Dimensions are arbitrary strings used to group ratings.
class StarRating
	super RepoObject
	serialize

	# The user login that made that rating (or null if anon)
	var user: nullable String

	# Rated `MEntity::full_name`
	var mentity: String

	# The dimension rated (arbritrary key)
	var dimension: nullable String

	# The rating (traditionally a score between 0 and 5)
	var rating: Int is writable

	# Timestamp when this rating was created
	var timestamp = 0 is writable
end

redef class User

	# Find a previous rating of `self` for `mentity` and `dimension`
	fun find_previous_rating(config: NitwebConfig, mentity: MEntity, dimension: nullable String): nullable StarRating do
		var match = new MongoMatch
		match.eq("mentity", mentity.full_name)
		match.eq("dimension", dimension)
		match.eq("user", login)
		return config.stars.find(match)
	end

	# Find all ratings by `self`
	fun ratings(config: NitwebConfig): Array[StarRating] do
		return config.stars.find_all((new MongoMatch).eq("user", login))
	end
end

redef class MEntity

	# Get the ratings of a `dimension`
	fun ratings_by_dimension(config: NitwebConfig, dimension: String, user: nullable String): JsonObject do
		var match = (new MongoMatch).eq("mentity", full_name).eq("dimension", dimension)
		var pipeline = new MongoPipeline
		pipeline.match(match)
		pipeline.group((new MongoGroup("mean_group")).avg("mean", "$rating"))

		var res = config.stars.collection.aggregate(pipeline)
		var obj = new JsonObject
		obj["mean"] = if res.is_empty then 0.0 else res.first["mean"]
		obj["ratings"] = new JsonArray.from(config.stars.find_all(match))

		if user != null then
			match["user"] = user
			obj["user"] = config.stars.find(match)
		end
		return obj
	end

	# Get the ratings of a `mentity`
	fun ratings(config: NitwebConfig, user: nullable String): JsonObject do
		var match = new JsonObject
		match["mentity"] = full_name
		match["ratings"] = new JsonArray.from(config.stars.find_all(match))
		match["feature"] = ratings_by_dimension(config, "feature", user)
		match["doc"] = ratings_by_dimension(config, "doc", user)
		match["examples"] = ratings_by_dimension(config, "examples", user)
		match["code"] = ratings_by_dimension(config, "code", user)
		return match
	end
end

# StarRating Mongo Repository
class StarRatingRepo
	super MongoRepository[StarRating]

	# Find most rated mentities
	fun most_rated: Array[JsonObject] do
		var pipeline = new MongoPipeline
		pipeline.group((new MongoGroup("$mentity")).sum("count", 1))
		pipeline.sort((new MongoMatch).eq("count", -1))
		pipeline.limit(10)
		return collection.aggregate(pipeline)
	end

	# Find best rated mentities
	fun best_rated: Array[JsonObject] do
		var pipeline = new MongoPipeline
		pipeline.group((new MongoGroup("$mentity")).avg("avg", "$rating"))
		pipeline.sort((new MongoMatch).eq("avg", -1))
		pipeline.limit(10)
		return collection.aggregate(pipeline)
	end

	# Find worst rated mentities
	fun worst_rated: Array[JsonObject] do
		var pipeline = new MongoPipeline
		pipeline.group((new MongoGroup("$mentity")).avg("avg", "$rating"))
		pipeline.sort((new MongoMatch).eq("avg", 1))
		pipeline.limit(10)
		return collection.aggregate(pipeline)
	end

	# Find worst rated mentities
	fun users_ratings: Array[JsonObject] do
		var pipeline = new MongoPipeline
		pipeline.group((new MongoGroup("$user")).sum("count", 1))
		pipeline.sort((new MongoMatch).eq("count", -1))
		pipeline.limit(10)
		return collection.aggregate(pipeline)
	end
end
