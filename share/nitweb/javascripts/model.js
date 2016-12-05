/*
 * Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

(function() {
	var apiUrl = '/api';

	angular
		.module('model', [])

		.factory('Model', [ '$http', function($http) {
			return {

				loadEntity: function(id, cb, cbErr) {
					$http.get(apiUrl + '/entity/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityLinearization: function(id, cb, cbErr) {
					$http.get(apiUrl + '/linearization/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityDefs: function(id, cb, cbErr) {
					$http.get(apiUrl + '/defs/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityCode: function(id, cb, cbErr) {
					$http.get(apiUrl + '/code/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityGraph: function(id, cb, cbErr) {
					$http.get(apiUrl + '/graph/inheritance/' + id + '?cdepth=3')
						.success(cb)
						.error(cbErr);
				},

				search: function(q, n, cb, cbErr) {
					$http.get(apiUrl + '/search?q=' + q + '&n=' + n)
						.success(cb)
						.error(cbErr);
				}
			};
		}])

		.factory('Catalog', [ '$http', function($http) {
			return {
				loadHightlighted: function(cb, cbErr) {
					$http.get(apiUrl + '/catalog/highlighted')
						.success(cb)
						.error(cbErr);
				},

				loadMostRequired: function(cb, cbErr) {
					$http.get(apiUrl + '/catalog/required')
						.success(cb)
						.error(cbErr);
				},

				loadByTags: function(cb, cbErr) {
					$http.get(apiUrl + '/catalog/bytags')
						.success(cb)
						.error(cbErr);
				},

				loadStats: function(cb, cbErr) {
					$http.get(apiUrl + '/catalog/stats')
						.success(cb)
						.error(cbErr);
				},

				loadContributors: function(cb, cbErr) {
					$http.get(apiUrl + '/catalog/contributors')
						.success(cb)
						.error(cbErr);
				},
			}
		}])

		.factory('Feedback', [ '$http', function($http) {
			return {
				loadEntityStars: function(id, cb, cbErr) {
					$http.get(apiUrl + '/feedback/stars/' + id)
						.success(cb)
						.error(cbErr);
				},
				loadEntityStarsDimension: function(id, dimension, cb, cbErr) {
					$http.get(apiUrl + '/feedback/stars/' + id + '/dimension/' + dimension)
						.success(cb)
						.error(cbErr);
				},
				postEntityStarDimension: function(id, dimension, rating, cb, cbErr) {
					$http.post(apiUrl + '/feedback/stars/' + id + '/dimension/' + dimension,
						{rating: rating})
						.success(cb)
						.error(cbErr);
				},
				loadMostRated: function(cb, cbErr) {
					$http.get(apiUrl + '/feedback/grades/most')
						.success(cb)
						.error(cbErr);
				},
				loadBestRated: function(cb, cbErr) {
					$http.get(apiUrl + '/feedback/grades/best')
						.success(cb)
						.error(cbErr);
				},
				loadWorstRated: function(cb, cbErr) {
					$http.get(apiUrl + '/feedback/grades/worst')
						.success(cb)
						.error(cbErr);
				},
				loadUsersRatings: function(cb, cbErr) {
					$http.get(apiUrl + '/feedback/grades/users')
						.success(cb)
						.error(cbErr);
				},
			}
		}])

		.factory('DocDown', [ '$http', function($http) {
			return {
				postMarkdown: function(md, cb, cbErr) {
					$http.post(apiUrl + '/docdown', md)
						.success(cb)
						.error(cbErr);
				}
			}
		}])

		.factory('Metrics', [ '$http', function($http) {
			return {
				loadStructuralMetrics: function(id, cb, cbErr) {
					$http.get(apiUrl + '/metrics/structural/' + id)
						.success(cb)
						.error(cbErr);
				}
			}
		}])

		.factory('User', [ '$http', function($http) {
			return {
				loadUser: function(cb, cbErr) {
					$http.get(apiUrl + '/user')
						.success(cb)
						.error(cbErr);
				},
				loadUserStars: function(cb, cbErr) {
					$http.get(apiUrl + '/feedback/user/stars')
						.success(cb)
						.error(cbErr);
				},
			}
		}])
})();
