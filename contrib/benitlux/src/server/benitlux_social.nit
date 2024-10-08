# This file is part of NIT ( https://nitlanguage.org ).
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

# Social features acting on the database
module benitlux_social

import nitcorn::token

import benitlux_db

redef class BenitluxDB

	redef fun create_tables
	do
		super

		# User and password table
		# Contains only core user/account info. Extra preferences
		# should be added to a different table.
		assert create_table("IF NOT EXISTS users (name TEXT PRIMARY KEY, pass TEXT, email TEXT, joined DATETIME DEFAULT CURRENT_TIMESTAMP, last_checkin DATETIME)") else
			print_error "Create 'users' failed with: {error or else "?"}"
		end

		# User follow table
		assert create_table("IF NOT EXISTS follows (user_from INTEGER, user_to INTEGER)") else
			print_error "Create 'follows' failed with: {error or else "?"}"
		end

		# Reviews table
		# TODO the `text` block is reserved for future use.
		assert create_table("""
IF NOT EXISTS reviews (author INTEGER, beer INTEGER, posted DATETIME DEFAULT CURRENT_TIMESTAMP, rating INTEGER, text TEXT)
		""") else
			print_error "Create 'reviews' failed with: {error or else "?"}"
		end

		assert execute("CREATE UNIQUE INDEX IF NOT EXISTS unique_reviews ON reviews(author, beer)") else
			print_error "Create 'unique_reviews' failed with: {error or else "?"}"
		end

		# Checkins table
		# Hold the history of check ins and outs.
		assert create_table("IF NOT EXISTS checkins (user INTEGER, time DATETIME DEFAULT CURRENT_TIMESTAMP, is_in BOOLEAN)") else
			print_error "Create 'checkins' failed with: {error or else "?"}"
		end

		# User tokens
		# All tokens ever issued.
		assert create_table("IF NOT EXISTS tokens (user INTEGER, token TEXT, last_access DATETIME DEFAULT CURRENT_TIMESTAMP)") else
			print_error "Create 'tokens' failed with: {error or else "?"}"
		end

		# View similar to the table `review` with only the most recent review per author & beer
		assert execute("""
CREATE VIEW IF NOT EXISTS latest_reviews AS
	SELECT reviews.author, reviews.beer, reviews.rating, reviews.posted, text
		FROM reviews, (SELECT author, beer, max(posted) as posted
			FROM reviews GROUP BY author, beer) AS uniqs
		WHERE reviews.author = uniqs.author and
			reviews.beer = uniqs.beer and
			reviews.posted = uniqs.posted
""") else
			print_error "Create 'latest_reviews' failed with: {error or else "?"}"
		end

		# Distance in the rating between each beers by each author
		assert execute("""
CREATE VIEW IF NOT EXISTS user_dist AS
SELECT r0.author, r0.beer AS beer0, r1.beer AS beer1, ABS(r1.rating - r0.rating) AS dist
FROM latest_reviews AS r0, latest_reviews as r1
WHERE r0.author = r1.author""") else
			print_error "Create 'user_dist' failed with: {error or else "?"}"
		end

		# Average distance in the rating between each beers by all authors
		assert execute("""
CREATE VIEW IF NOT EXISTS global_dist AS
SELECT beer0, beer1, COUNT(dist) AS count, AVG(dist) as average
FROM user_dist
GROUP BY beer0, beer1""") else
			print_error "Create 'global_dist' failed with: {error or else "?"}"
		end
	end

	# Check if the login credentials are valid
	#
	# If valid, returns the username with the capitalization used at registration.
	# Returns `null` on invalid password or anormal errors.
	fun login(user, pass: String): nullable LoginResult
	do
		var stmt = select("ROWID, name FROM users WHERE lower({user.to_sql_string}) = lower(name) " +
		                  "AND {pass.to_sql_string} = pass")
		if stmt == null then
			print_error "Select 'login' failed with: {error or else "?"}"
			return null
		end

		for row in stmt do
			var user_id = row[0].to_i
			var token = new_token(user_id)
			var u = new User(user_id, row[1].to_s)
			stmt.close
			return new LoginResult(u, token)
		end
		return null
	end

	# Get a new token and associate it to `user_id`
	fun new_token(user_id: Int): String
	do
		loop
			var token = generate_token

			# Check if token already exists
			var stmt = select("ROWID FROM tokens WHERE token={token.to_sql_string}")
			assert stmt != null
			if stmt.iterator.to_a.not_empty then continue

			# Register token
			var res = insert("INTO tokens(user, token) VALUES({user_id}, {token.to_sql_string})")
			assert res

			# TODO merge the 2 requests to avoid race conditions,
			# if we ever share the BD between 2 servers/threads

			return token
		end
	end

	# Get the user id associated to `token`, if any
	#
	# Accepts `null` token to simplify call sites, but always returns `null` in such cases.
	fun token_to_id(token: nullable String): nullable Int
	do
		if token == null then return null

		var stmt = select("user FROM tokens WHERE token={token.to_sql_string}")
		if stmt == null then
			print_error "Select 'token_to_id' failed with: {error or else "?"}"
			return null
		end

		# TODO update token timestamp and platform/client hint of last connection.
		# These informations could help detect malicious access to the account.

		var res = null
		for row in stmt do
			res = row[0].to_i
			break
		end
		return res
	end

	# Get `User` data from the integer `id`
	fun id_to_user(id: Int): nullable User
	do
		var stmt = select("name FROM users WHERE ROWID = {id}")
		assert stmt != null

		var res = null
		for row in stmt do
			res = new User(id, row[0].to_s)
			break
		end
		return res
	end

	# Try to sign up a new user, return `true` on success
	fun signup(user, pass, email: String): nullable String
	do
		# Check if already in user
		var stmt = select("ROWID FROM users WHERE lower({user.to_sql_string}) = lower(name)")
		assert stmt != null else print_error "Select 'sign_up' failed with: {error or else "?"}"
		if not stmt.iterator.to_a.is_empty then return "Username already in use."

		# Check email use
		stmt = select("ROWID FROM users WHERE lower({email.to_sql_string}) = lower(email)")
		assert stmt != null else print_error "Select 'sign_up' failed with: {error or else "?"}"
		if not stmt.iterator.to_a.is_empty then return "There's already an account with that email"

		# Insert intro BD
		assert insert("INTO users(name, pass, email) VALUES ({user.to_sql_string}, {pass.to_sql_string}, {email.to_sql_string})") else
			print_error "Insert 'sign_up' failed with: {error or else "?"}"
		end

		return null
	end

	# Post a review
	fun post_review(author, beer, rating: Int, text: String)
	do
		assert insert("OR REPLACE INTO reviews(author, beer, rating, text) VALUES ({author}, {beer}, {rating}, {text.to_sql_string})") else
			print_error "Insert 'post_review' failed with: {error or else "?"}"
		end
	end

	# Fetch stats on `beer`, if `followed_only` limit to the reviews of followed users
	fun beer_stats(beer: Int, followed_only: nullable Int): nullable BeerStats
	do
		var sql = "avg(rating), count(rating) FROM reviews WHERE beer = {beer}"
		if followed_only != null then
			sql += " AND (author = {followed_only} OR " +
		          "author IN (SELECT user_to FROM follows WHERE user_from = {followed_only}))"
		end

		var stmt = select(sql)
		assert stmt != null else print_error "Select 'beer_stats' failed with: {error or else "?"}"

		var b = beer_from_id(beer)
		if b == null then return null

		var res = null
		for row in stmt do
			res = new BeerStats(b, row[0].to_f, row[1].to_i)
			break
		end
		return res
	end

	# Fetch the most recent rating left by `user_id` about `beer`
	fun latest_rating(user_id, beer: Int): nullable Int
	do
		var stmt = select("rating FROM reviews WHERE author = {user_id} AND beer = {beer} ORDER BY ROWID DESC LIMIT 1")
		assert stmt != null else print_error "Select 'rating' failed with: {error or else "?"}"

		var res = null
		for row in stmt do
			res = row[0].to_i
			break
		end
		return res
	end

	# Register that `user_from` follows `user_to`
	fun add_followed(user_from, user_to: Int)
	do
		assert insert("OR IGNORE INTO follows(user_from, user_to) VALUES ({user_from}, {user_to})") else
			print_error "Insert 'add_followed' failed with: {error or else "?"}"
		end
	end

	# Register that `user_from` does not follow `user_to`
	fun remove_followed(user_from, user_to: Int)
	do
		assert execute("DELETE FROM follows WHERE user_from = {user_from} AND user_to = {user_to}") else
			print_error "Delete 'remove_followed' failed with: {error or else "?"}"
		end
	end

	# Does `user_from` follow `user_to`?
	fun follows(user_from, user_to: Int): Bool
	do
		var stmt = select("ROWID FROM follows WHERE user_from = {user_from} AND user_to = {user_to}")
		assert stmt != null else
			print_error "Select 'follows' failed with: {error or else "?"}"
		end

		for row in stmt.iterator.to_a do return true
		return false
	end

	# List of users with a name similar to `pattern` in relation to `user_id`
	fun search_users(pattern: String, user_id: nullable Int): nullable Array[UserAndFollowing]
	do
		# TODO a better search logic

		var like_str = "'%{pattern.replace('\\', "\\\\").replace('\'', "''").replace("%", "\\%")}%'"
		var stmt = select("ROWID, name FROM users WHERE name LIKE {like_str}")
		assert stmt != null else print_error "Select 'search_users' failed with: {error or else "?"}"

		var users = new Array[User]
		for row in stmt do users.add(new User(row[0].to_i, row[1].to_s))

		return user_to_user_and_following(users, user_id)
	end

	# List the followers of `user_id`
	fun followers(user_id: Int): nullable Array[UserAndFollowing]
	do
		var stmt = select("ROWID, name FROM users WHERE ROWID in (SELECT user_from FROM follows WHERE user_to = {user_id})")
		assert stmt != null else print_error "Select 'followers' failed with: {error or else "?"}"

		var users = new Array[User]
		for row in stmt do users.add(new User(row[0].to_i, row[1].to_s))

		return user_to_user_and_following(users, user_id)
	end

	# List users followed by `user_id`
	fun followed(user_id: Int): nullable Array[UserAndFollowing]
	do
		var stmt = select("ROWID, name FROM users WHERE ROWID in (SELECT user_to FROM follows WHERE user_from = {user_id})")
		assert stmt != null else print_error "Select 'followed' failed with: {error or else "?"}"

		var users = new Array[User]
		for row in stmt do users.add(new User(row[0].to_i, row[1].to_s))

		return user_to_user_and_following(users, user_id)
	end

	# List reciprocal friends of `user_id`
	fun followed_followers(user_id: Int): nullable Array[User]
	do
		var stmt = select("""
ROWID, name FROM users WHERE
	users.ROWID in (SELECT user_from FROM follows WHERE user_to = {{{user_id}}}) AND
	users.ROWID in (SELECT user_to FROM follows WHERE user_from = {{{user_id}}})""")
		assert stmt != null else print_error "Select 'followed_followers' failed with: {error or else "?"}"

		var users = new Array[User]
		for row in stmt do users.add new User(row[0].to_i, row[1].to_s)

		return users
	end

	# List `n` friends or recommendations (with information)
	#
	# If `user_id` is null, list only recommendations.
	# The default value of `n` is 6 friends.
	fun friends(user_id, n: nullable Int): nullable Array[UserAndFollowing]
	do
		var limit = n or else 6
		var people = null
		if user_id != null then
			people = followed_followers(user_id)
			if people == null then return null
		else
			people = new Array[User]
		end

		if people.length < limit then
			# Add recommendations
			# TODO fill with recommendations from a few friends
			# TODO starting friends recommendations, popular clients, same visit patterns,
			# currently at the bar, official people (proprio, brewers, barmaids & barmen)

			limit -= people.length

			# Recommend popular users without the local user or `followed_followers`
			var avoid_ids = new Array[Int]
			if user_id != null then avoid_ids.add user_id
			for p in people do avoid_ids.add p.id
			if avoid_ids.is_empty then avoid_ids.add -1

			var stmt = select("""
ROWID, name, (SELECT count(*) FROM follows WHERE follows.user_to == users.ROWID) AS n_followers
FROM users WHERE {{{
	[for id in avoid_ids do "ROWID != {id}"].join(" AND ")
}}}
ORDER BY n_followers DESC LIMIT {{{limit}}}""")
			assert stmt != null else print_error "Select 'friends' failed with: {error or else "?"}"
			for row in stmt do people.add new User(row[0].to_i, row[1].to_s)

		else if people.length > limit then

			# TODO pass the limit `n` to followed_followers
			people = people.subarray(0, limit)
		end

		return user_to_user_and_following(people, user_id)
	end

	# Convert `users` to an `Array[UserAndFollowing]` in relation to `user_id`
	private fun user_to_user_and_following(users: Array[User], user_id: nullable Int): Array[UserAndFollowing]
	do
		var users_and_f = new Array[UserAndFollowing]
		for user in users do
			var uaf
			var favs = favorite_beers(user.id)
			if user_id != null then
				var following = follows(user_id, user.id)
				var followed_by = follows(user.id, user_id)
				uaf = new UserAndFollowing(user, favs.join(", "), following, followed_by)
			else
				uaf = new UserAndFollowing(user, favs.join(", "), false, false)
			end
			users_and_f.add uaf
		end
		return users_and_f
	end

	# List the name of the favorite beers of `user_id`
	fun favorite_beers(user_id: Int): Array[String]
	do
		var stmt = select("name FROM beers WHERE ROWID in (SELECT beer FROM reviews WHERE author = {user_id} AND rating = 5)")
		assert stmt != null else print_error "Select 'rating' failed with: {error or else "?"}"

		var beers = new Array[String]
		for row in stmt do beers.add row[0].to_s
		return beers
	end

	# List available beers and changes in relation to `user_from`
	fun list_beers_and_rating(user_from: nullable Int, since: nullable String): nullable Array[BeerAndRatings]
	do
		# TODO replace old services `beer_events_since` and `beer_events_today` by a single* SQL call

		var events
		if since != null then
			events = beer_events_since(since)
		else events = beer_events_today
		if events == null then return null

		# New since the last weekday
		var all = new Array[BeerAndRatings]
		for beer in events.new_beers do
			var global = beer_stats(beer.id)
			var friend = null
			var rating = null
			if user_from != null then
				friend = beer_stats(beer.id, user_from)
				rating = latest_rating(user_from, beer.id)
			end
			all.add new BeerAndRatings(beer, global, friend, rating,
				false, "TODO batch", true, false, false)
		end

		# Still here since the last weekday
		for beer in events.fix_beers do
			var global = beer_stats(beer.id)
			var friend = null
			var rating = null
			if user_from != null then
				friend = beer_stats(beer.id, user_from)
				rating = latest_rating(user_from, beer.id)
			end
			all.add new BeerAndRatings(beer, global, friend, rating,
				false, "TODO batch", false, true, false)
		end

		# Apply badges
		for beer in all do
			var badges = badges(beer.beer.id, user_from)
			if badges.not_empty then beer.badges = badges
		end

		return all
	end

	# Badges (or comments, of social description) on `beer` relative to `user_from`
	fun badges(beer: Int, user_from: nullable Int): Array[BeerBadge]
	do
		var badges = new Array[BeerBadge]

		# Overall favorite available today
		var rows = select("""
beer
FROM (
	SELECT beer, AVG(rating) AS average, COUNT(rating) AS count
	FROM latest_reviews
	WHERE beer IN (
		SELECT beer FROM daily WHERE day IN (
			SELECT max(day) FROM daily))
	GROUP BY beer)
WHERE count > 1 ORDER BY average DESC LIMIT 1""")
		if rows == null then
			print_error "Select 'overall-favorite' failed with: {error or else "?"}"
		else
			for row in rows do
				if row[0].to_i == beer then badges.add new BestBeerBadge
			end
		end

		if user_from != null then
			# Favorite of friend
			rows = select("""
name FROM users
WHERE ROWID in (SELECT user_to FROM follows WHERE user_from = {{{user_from}}})
	AND ROWID in (SELECT author FROM latest_reviews WHERE beer = {{{beer}}} AND rating = 5)""")
			if rows == null then
				print_error "Select 'friend-favorite' failed with: {error or else "?"}"
			else
				var badge = new FavoriteBeerBadge
				for row in rows do badge.users.add row[0].to_s
				if badge.users.not_empty then badges.add badge
			end

			# Rated similarly to a favorite by most (approximative description)
			rows = select("""
(SELECT name FROM beers WHERE beers.ROWID = beer1)
FROM global_dist WHERE beer0 = {{{beer}}} AND beer0 != beer1
	AND count > 1 AND average < 2.0
	AND beer1 IN (SELECT beer FROM latest_reviews WHERE
		author = {{{user_from}}} AND rating = 5)
ORDER BY average LIMIT 1""")
			if rows == null then
				print_error "Select 'similar' failed with: {error or else "?"}"
			else
				var badge = new SimilarBeerBadge
				for row in rows do badge.beers.add row[0].to_s
				if badge.beers.not_empty then badges.add badge
			end
		end

		# TODO more for people with no friends or favorites

		return badges
	end

	# Register `user_id` as being in or out
	fun checkin(user_id: Int, checkin: Bool)
	do
		var res = insert("INTO checkins(user, is_in) VALUES({user_id}, {if checkin then 1 else 0})")
		if not res then print_error "Insert 'checkin' failed with: {error or else "?"}"
	end

	# List currently checked in reciprocal friends of `user_id`
	fun checkedin_followed_followers(user_id: Int): nullable CheckinReport
	do
		var sql = """
ROWID, name FROM users
WHERE 1 in (SELECT is_in FROM checkins WHERE user = users.ROWID ORDER BY ROWID DESC LIMIT 1)
	AND ROWID in (SELECT user_from FROM follows WHERE user_to = {{{user_id}}})
	AND ROWID in (SELECT user_to FROM follows WHERE user_from = {{{user_id}}})"""

		var stmt = select(sql)
		if stmt == null then
			print_error "Select 'checkedin_followed_followers' failed with: {error or else "?"}"
			return null
		end

		var report = new CheckinReport
		for row in stmt do report.users.add new User(row[0].to_i, row[1].to_s)
		return report
	end
end
