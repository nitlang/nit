# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>
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

module test_pop_routes is test

import pop_routes

class TestAppRoute
	test

	fun test_root_match_only_one_uri is test do
		var r = new AppRoute("/")
		assert r.match("")
		assert r.match("/")
		assert not r.match("/user")
	end

	fun test_strict_route_match_only_one_uri is test do
		var r = new AppRoute("/user")
		assert not r.match("/")
		assert r.match("/user")
		assert r.match("/user/")
		assert not r.match("/user/10")
		assert not r.match("/foo")
	end
end

class TestAppParamRoute
	test

	fun test_param_route_match_good_uri_params_1 is test do
		var r = new AppParamRoute("/:id")
		assert not r.match("/")
		assert r.match("/user")
		assert r.match("/user/")
		assert not r.match("/user/10")
	end

	fun test_param_route_match_good_uri_params_2 is test do
		var r = new AppParamRoute("/user/:id")
		assert not r.match("/")
		assert not r.match("/user")
		assert not r.match("/user/")
		assert r.match("/user/10")
		assert r.match("/user/10/")
		assert not r.match("/user/10/profile")
	end

	fun test_param_route_match_good_uri_params_3 is test do
		var r = new AppParamRoute("/user/:id/profile")
		assert not r.match("/")
		assert not r.match("/user")
		assert not r.match("/user/")
		assert not r.match("/user/10")
		assert not r.match("/user/10/")
		assert r.match("/user/10/profile")
		assert r.match("/user/10/profile/")
		assert not r.match("/user/10/profile/settings")
		assert not r.match("/user/10/foo")
	end

	fun test_param_route_match_good_uri_params_4 is test do
		var r = new AppParamRoute("/:id/:foo")
		assert not r.match("/")
		assert not r.match("/user")
		assert not r.match("/user/")
		assert r.match("/user/10")
		assert r.match("/user/10/")
		assert not r.match("/user/10/10")
	end

	fun test_param_route_match_good_uri_params_5 is test do
		var r = new AppParamRoute("/user/:id/:foo")
		assert not r.match("/")
		assert not r.match("/user")
		assert not r.match("/foo")
		assert not r.match("/user/10")
		assert r.match("/user/10/10")
		assert r.match("/user/10/10/")
		assert not r.match("/user/10/10/profile")
	end

	fun test_param_route_match_good_uri_params_6 is test do
		var r = new AppParamRoute("/user/:id/settings/:foo")
		assert not r.match("/")
		assert not r.match("/user")
		assert not r.match("/foo")
		assert not r.match("/user/10")
		assert not r.match("/user/10/10")
		assert not r.match("/user/10/10/")
		assert not r.match("/user/10/10/profile")
		assert r.match("/user/10/settings/profile")
		assert r.match("/user/10/settings/profile/")
		assert not r.match("/user/10/settings/profile/10")
	end
end

class TestRouteMatching
	test

	fun test_glob_route_match_good_uri_prefix1 is test do
		var r = new AppGlobRoute("/*")
		assert r.match("/")
		assert r.match("/user")
		assert r.match("/user/10")
	end

	fun test_glob_route_match_good_uri_prefix2 is test do
		var r = new AppGlobRoute("/user/*")
		assert not r.match("/")
		assert r.match("/user")
		assert r.match("/user/10")
	end

	fun test_glob_route_match_good_uri_prefix3 is test do
		var r = new AppGlobRoute("/user*")
		assert not r.match("/")
		assert r.match("/user")
		assert r.match("/user/10")
	end

	fun test_glob_route_work_with_parameters_1 is test do
		var r = new AppGlobRoute("/:id/*")
		assert not r.match("/")
		assert r.match("/user")
		assert r.match("/user/10")
		assert r.match("/user/10/profile")
	end

	fun test_glob_route_work_with_parameters_2 is test do
		var r = new AppGlobRoute("/:id*")
		assert not r.match("/")
		assert r.match("/user")
		assert r.match("/user/10")
	end

	fun test_glob_route_work_with_parameters_3 is test do
		var r = new AppGlobRoute("/user/:id/*")
		assert not r.match("/")
		assert not r.match("/user")
		assert r.match("/user/10")
		assert r.match("/user/10/profile")
	end

	fun test_glob_route_work_with_parameters_4 is test do
		var r = new AppGlobRoute("/user/:id*")
		assert not r.match("/")
		assert not r.match("/user")
		assert r.match("/user/10")
		assert r.match("/user/10/profile")
	end
end
