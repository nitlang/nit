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
	angular
		.module('index', [])

		.config(function($stateProvider, $locationProvider) {
			$stateProvider
				.state('index', {
					url: '/',
					templateUrl: 'views/index.html',
					controller: 'IndexCtrl',
					controllerAs: 'indexCtrl'
				})
		})

		.factory('Catalog', [ '$http', function($http) {
			return {
				loadHightlighted: function(cb, cbErr) {
					$http.get('/api/catalog/highlighted')
						.success(cb)
						.error(cbErr);
				},

				loadMostRequired: function(cb, cbErr) {
					$http.get('/api/catalog/required')
						.success(cb)
						.error(cbErr);
				},

				loadByTags: function(cb, cbErr) {
					$http.get('/api/catalog/bytags')
						.success(cb)
						.error(cbErr);
				},

				loadStats: function(cb, cbErr) {
					$http.get('/api/catalog/stats')
						.success(cb)
						.error(cbErr);
				},

				loadContributors: function(cb, cbErr) {
					$http.get('/api/catalog/contributors')
						.success(cb)
						.error(cbErr);
				},
			}
		}])

		.controller('IndexCtrl', function(Catalog, $sce, $scope, $location, $anchorScroll) {
			this.loadHighlighted = function() {
				Catalog.loadHightlighted(
					function(data) {
						$scope.highlighted = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadMostRequired = function() {
				Catalog.loadMostRequired(
					function(data) {
						$scope.required = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadByTags = function() {
				Catalog.loadByTags(
					function(data) {
						$scope.bytags = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadStats = function() {
				Catalog.loadStats(
					function(data) {
						$scope.stats = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadContributors = function() {
				Catalog.loadContributors(
					function(data) {
						$scope.contributors = data;
					}, function(err) {
						$scope.error = err;
					});
			};


			this.scrollTo = function(hash) {
				$anchorScroll(hash);
			}

			this.loadHighlighted();
			this.loadStats();
			this.loadContributors();
		})

		.directive('contributorList', function(Model) {
			return {
				restrict: 'E',
				scope: {
					listId: '@',
					listTitle: '@',
					listContributors: '='
				},
				templateUrl: '/directives/contributor-list.html'
			};
		})
})();
