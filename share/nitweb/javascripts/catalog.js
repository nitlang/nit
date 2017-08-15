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
		.module('catalog', [])

		.config(function($stateProvider, $locationProvider) {
			$stateProvider
				.state('catalog', {
					url: '/',
					templateUrl: 'views/catalog/index.html',
					controller: 'CatalogCtrl',
					controllerAs: 'vm',
					abstract: true
				})
				.state('catalog.highlighted', {
					url: '',
					templateUrl: 'views/catalog/highlighted.html',
					controller: 'CatalogHighlightedCtrl',
					controllerAs: 'vm'
				})
				.state('catalog.required', {
					url: 'required',
					templateUrl: 'views/catalog/most_required.html',
					controller: 'CatalogRequiredCtrl',
					controllerAs: 'vm'
				})
				.state('catalog.tags', {
					url: 'tags',
					templateUrl: 'views/catalog/by_tags.html',
					controller: 'CatalogTagsCtrl',
					controllerAs: 'vm'
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

		.controller('CatalogCtrl', function(Catalog) {
			var vm = this;

			Catalog.loadContributors(
				function(data) {
					vm.contributors = data;
				}, function(err) {
					vm.error = err;
				});

			Catalog.loadStats(
				function(data) {
					vm.stats = data;
				}, function(err) {
					vm.error = err;
				});
		})

		.controller('CatalogHighlightedCtrl', function(Catalog) {
			var vm = this;

			Catalog.loadHightlighted(
				function(data) {
					vm.highlighted = data;
				}, function(err) {
					vm.error = err;
				});
		})

		.controller('CatalogRequiredCtrl', function(Catalog) {
			var vm = this;

			Catalog.loadMostRequired(
				function(data) {
					vm.required = data;
				}, function(err) {
					vm.error = err;
				});
		})

		.controller('CatalogTagsCtrl', function(Catalog, $anchorScroll, $location) {
			var vm = this;

			Catalog.loadByTags(
				function(data) {
					vm.bytags = data;
				}, function(err) {
					vm.error = err;
				});


			vm.scrollTo = function(hash) {
				$location.hash(hash);
				$anchorScroll();
			}
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
