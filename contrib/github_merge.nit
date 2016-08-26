# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Query the Github PR API to perform a merge
module github_merge

import github::github_curl
import template
import opts

redef class Object
	# Factorize cast
	fun json_as_a: JsonArray do return self.as(JsonArray)
	# Factorize cast
	fun json_as_map: JsonObject do return self.as(JsonObject)
end

redef class GithubCurl
	# Get a given pull request (PR)
	fun getpr(repo: String, number: Int): nullable JsonObject
	do
		var ir = get_and_check("https://api.github.com/repos/{repo}/issues/{number}")
		var irm = ir.json_as_map
		if not irm.has_key("pull_request") then return null
		var pr = get_and_check("https://api.github.com/repos/{repo}/pulls/{number}")
		var prm = pr.json_as_map
		var sha = prm["head"].json_as_map["sha"].to_s
		var statuses = get_and_check("https://api.github.com/repos/{repo}/commits/{sha}/status")
		statuses = statuses.json_as_map
		prm["statuses"] = statuses
		print "{prm["title"].to_s}: by {prm["user"].json_as_map["login"].to_s} (# {prm["number"].to_s})"
		var mergeable = prm["mergeable"]
		if mergeable != null then
			print "\tmergeable: {mergeable.to_s}"
		else
			print "\tmergeable: unknown"
		end
		var state = statuses["state"]
		if state == null then
			print "\tstatus: not tested"
		else
			print "\tstatus: {state}"
			var sts = statuses["statuses"].json_as_a
			for st in sts do
				st = st.json_as_map
				var ctx = st["context"].to_s
				state = st["state"].to_s
				print "\tstatus {ctx}: {state}"
				prm["status-{ctx}"] = state
			end
		end
		return prm
	end

	# Get reviewers of a PR
	fun getrev(repo: String, pr: JsonObject): Array[String]
	do
		var number = pr["number"].as(Int)
		var user = pr["user"].json_as_map["login"].as(String)
		var comments = new Array[nullable Object]
		comments.add_all(get_and_check("https://api.github.com/repos/{repo}/issues/{number}/comments").json_as_a)
		comments.add_all(get_and_check("https://api.github.com/repos/{repo}/pulls/{number}/comments").json_as_a)
		var logins = new Array[String]
		for c in comments do
			var cm = c.json_as_map
			var l = cm["user"].json_as_map["login"]
			assert l isa String
			if l != user and not logins.has(l) then logins.add(l)
		end
		var res = new Array[String]
		for l in logins do
			var u = get_and_check("https://api.github.com/users/{l}").json_as_map
			if not u.has_key("name") or u["name"] == null or not u.has_key("email")or u["email"] == null then
				print "No public name/email for user {l}"
				continue
			end
			var r = "{u["name"].to_s} <{u["email"].to_s}>"
			res.add r

		end
		return res
	end

end

if "NIT_TESTING".environ == "true" then exit 0

var opt_repo = new OptionString("Repository (e.g. nitlang/nit)", "-r", "--repo")
var opt_auth = new OptionString("OAuth token", "--auth")
var opt_query = new OptionString("Query to get issues (e.g. label=ok_will_merge)", "-q", "--query")
var opt_keepgoing = new OptionBool("Skip merge conflicts", "-k", "--keep-going")
var opt_all = new OptionBool("Merge all", "-a", "--all")
var opt_status = new OptionArray("A status context that must be \"success\" (e.g. default)", "--status")
var opts = new OptionContext
opts.add_option(opt_repo, opt_auth, opt_query, opt_status, opt_all, opt_keepgoing)

opts.parse(sys.args)
var args = opts.rest

var auth = opt_auth.value or else ""
if auth == "" then auth = get_github_oauth
if auth == "" then
	print "Warning: no github oauth token, you can configure one with"
	print "    git config --add github.oauthtoken MYOAUTHTOKEN"
end

var repo = opt_repo.value or else "nitlang/nit"

var query = opt_query.value or else "labels=ok_will_merge"

var curl = new GithubCurl(auth, "Merge-o-matic (nitlang/nit)")

if args.is_empty then
	# Without args, list `ok_will_merge`
	var x = curl.get_and_check("https://api.github.com/repos/{repo}/issues?{query}")
	var list = new Array[String]
	for y in x.json_as_a do
		var number = y.json_as_map["number"].as(Int)
		var pr = curl.getpr(repo, number)
		if pr == null then continue
		for ctx in opt_status.value do
			if pr.get_or_null("status-{ctx}") != "success" then
				print "No \"success\" for {ctx}. Skip."
				continue label
			end
		end
		list.add number.to_s
	end label

	if not opt_all.value then return
	args = list
end

for arg in args do
	# With a arg, merge the PR
	var number = arg.to_i
	var pr = curl.getpr(repo, number)
	if pr == null then
		print "Not a PR: {number}"
		return
	end
	var revs = curl.getrev(repo, pr)

	var mergemsg = new Template
	mergemsg.add "Merge: {pr["title"].to_s}\n\n"
	mergemsg.add "{pr["body"].to_s}\n\n"
	mergemsg.add "Pull-Request: #{pr["number"].to_s}\n"
	for r in revs do
		mergemsg.add "Reviewed-by: {r}\n"
	end
	mergemsg.write_to_file("mergemsg")

	var sha = pr["head"].json_as_map["sha"].as(String)
	if system("git show -s --pretty=format:%h {sha}") != 0 then
		print "Commit {sha} not in local repository; did you fetch github?"
		return
	end
	if system("git merge-base --is-ancestor {sha} HEAD") == 0 then
		print "Is already merged."
		continue
	end
	if system("git merge --no-ff --no-commit {sha}") != 0 then
		if opt_keepgoing.value then
			 system("git reset --merge")
			 continue
		end
		system("cp mergemsg `git rev-parse --git-dir`/MERGE_MSG")
		print "Problem during merge... Let's do the commit manually."
		return
	end
	system("git commit -F mergemsg")
	print "The merge is made"
	mergemsg.write_to(stdout)
end

