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
	angular.module('catalog', [])

	/* Router */

	.config(function($stateProvider, $locationProvider) {
		$stateProvider
			.state('catalog', {
				url: '/?p&n',
				controller: 'CatalogCtrl',
				controllerAs: 'vm',
				templateUrl: 'views/catalog/index.html',
				resolve: {
					packages: function(Catalog, $q, $stateParams, $state) {
						var d = $q.defer();
						var page = $stateParams.p ? $stateParams.p : 1;
						var limit = $stateParams.n ? $stateParams.n : 10;
						Catalog.packages(page, limit, d.resolve,
							function(err) {
								$state.go('404', null, { location: false })
							});
						return d.promise;
					},
					tags: function(Catalog, $q, $state) {
						var d = $q.defer();
						Catalog.tags(d.resolve,
							function(err) {
								$state.go('404', null, { location: false })
							});
						return d.promise;
					},
					stats: function(Catalog, $q, $state) {
						var d = $q.defer();
						Catalog.stats(d.resolve,
							function(err) {
								$state.go('404', null, { location: false })
							});
						return d.promise;

					}
				}
			})
			.state('person', {
				url: '/person/:id?p1&n1&p2&n2',
				controller: 'PersonCtrl',
				controllerAs: 'vm',
				templateUrl: 'views/catalog/person.html',
				resolve: {
					person: function(Catalog, $q, $stateParams, $state) {
						var d = $q.defer();
						Catalog.person($stateParams.id, d.resolve,
						function(err) {
							$state.go('404', null, { location: false })
						});
						return d.promise;
					},
					maintaining: function(Catalog, $q, $stateParams, $state) {
						var d = $q.defer();
						var p1 = $stateParams.p2 ? $stateParams.p1 : 1;
						var n1 = $stateParams.n2 ? $stateParams.n1 : 10;
						Catalog.personMaintaining($stateParams.id, p1, n1, d.resolve,
							function(err) {
								$state.go('404', null, { location: false })
							});
						return d.promise;
					},
					contributing: function(Catalog, $q, $stateParams, $state) {
						var d = $q.defer();
						var p2 = $stateParams.p2 ? $stateParams.p2 : 1;
						var n2 = $stateParams.n2 ? $stateParams.n2 : 10;
						Catalog.personContributing($stateParams.id, p2, n2, d.resolve,
							function(err) {
								$state.go('404', null, { location: false })
							});
						return d.promise;

					}
				}
			})
			.state('tag', {
				url: '/tag/:id?p&n',
				controller: 'TagCtrl',
				controllerAs: 'vm',
				templateUrl: 'views/catalog/tag.html',
				resolve: {
					tag: function(Catalog, $q, $stateParams, $state) {
						var d = $q.defer();
						var page = $stateParams.p ? $stateParams.p : 1;
						var limit = $stateParams.l ? $stateParams.l : 10;
						Catalog.tag($stateParams.id, page, limit, d.resolve,
							function() {
								$state.go('404', null, { location: false })
							});
						return d.promise;
					}
				}
			})
	})

	/* Factories */

	.factory('Catalog', [ '$http', function($http) {
		return {
			stats: function(cb, cbErr) {
				$http.get('/api/catalog/stats')
					.success(cb)
					.error(cbErr);
			},
			packages: function(p, l, cb, cbErr) {
				$http.get('/api/catalog/packages?p=' + p + '&l=' + l)
					.success(cb)
					.error(cbErr);
			},
			tags: function(cb, cbErr) {
				$http.get('/api/catalog/tags')
					.success(cb)
					.error(cbErr);
			},
			person: function(id, cb, cbErr) {
				$http.get('/api/catalog/person/' + id)
					.success(cb)
					.error(cbErr);
			},
			personMaintaining: function(id, p, l, cb, cbErr) {
				$http.get('/api/catalog/person/' + id + '/maintaining?p=' + p + '&l=' + l)
					.success(cb)
					.error(cbErr);
			},
			personContributing: function(id, p, l, cb, cbErr) {
				$http.get('/api/catalog/person/' + id + '/contributing?p=' + p + '&l=' + l)
					.success(cb)
					.error(cbErr);
			},
			tag: function(id, p, l, cb, cbErr) {
				$http.get('/api/catalog/tag/' + id + '?p=' + p + '&l=' + l)
					.success(cb)
					.error(cbErr);
			}
		};
	}])

	/* Controllers */

	.controller('CatalogCtrl', function($scope, $state, packages, tags, stats) {
		var vm = this;
		vm.packages = packages;
		vm.tags = tags;
		vm.stats = stats;
		$scope.$on('change-page', function(e, page, limit) {
			$state.go('catalog', {p: page, l: limit});
		})
	})

	.controller('PersonCtrl', function($scope, $state, $stateParams, person, maintaining, contributing) {
		var vm = this;
		vm.person = person;
		vm.maintaining = maintaining;
		vm.contributing = contributing;

		var p1 = $stateParams.p1 ? $stateParams.p1 : 1;
		var l1 = $stateParams.l1 ? $stateParams.l1 : 10;
		var p2 = $stateParams.p2 ? $stateParams.p2 : 1;
		var l2 = $stateParams.l2 ? $stateParams.l2 : 10;

		$scope.$on('change-page1', function(e, page, limit) {
			$state.go('person', {id: $stateParams.id, p1: page, l1: limit, p2: p2, l2: l2});
		})

		$scope.$on('change-page2', function(e, page, limit) {
			$state.go('person', {id: $stateParams.id, p1: p1, l1: l1, p2: page, l2: limit});
		})
	})

	.controller('TagCtrl', function($state, $scope, tag) {
		var vm = this;
		vm.tag = tag;
		$scope.$on('change-page', function(e, page, limit) {
			$state.go('tag', {id: vm.tag.tag, p: page, l: limit});
		})
	})
})();
