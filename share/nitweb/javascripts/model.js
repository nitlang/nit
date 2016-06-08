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
})();
