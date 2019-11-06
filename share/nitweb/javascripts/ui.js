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
		.module('ui', [])

		/* Search */

		.config(function($stateProvider, $locationProvider) {
			$stateProvider
				.state('search', {
					url: '/search?q&p&n',
					controller: 'SearchCtrl',
					controllerAs: 'vm',
					templateUrl: 'views/search.html',
					resolve: {
						entities: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							var query = $stateParams.q;
							var page = $stateParams.p ? $stateParams.p : 1;
							var limit = $stateParams.n ? $stateParams.n : 10;
							Model.search(query, page, limit, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					}
				})
		})

		.controller('SearchCtrl', function($scope, $state, $stateParams, entities) {
			var vm = this;
			vm.entities = entities;
			vm.query = $stateParams.q;

			$scope.$on('change-page', function(e, page, limit) {
				$state.go('search', {q: vm.query, p: page, l: limit});
			})
		})

		.directive('uiSearchField', function($document) {
			return {
				restrict: 'E',
				replace: true,
				controller: function($scope, $state, $stateParams, $location, Model) {
					var vm = this;
					vm.search = function() {
						if(!vm.query) {
							vm.reset();
							return;
						}
						Model.search(vm.query, 1, 8,
							function(data) {
								vm.reset();
								vm.results = data;
							}, function(err) {
								vm.reset();
								vm.error = err;
							});
					}

					vm.reset = function() {
						vm.activeItem = -1;
						vm.results = {
							results: []
						};
					}

					vm.update = function(e) {
						if(e.keyCode == 38) {
							vm.selectUp();
						} else if(e.keyCode == 40) {
							vm.selectDown();
						} else if(e.keyCode == 27) {
							vm.selectEscape();
						} else if(e.keyCode == 13) {
							vm.selectEnter();
						}
					}

					vm.selectUp = function() {
						if(vm.activeItem >= 0) {
							vm.activeItem -= 1;
						}
					}

					vm.selectDown = function() {
						if(vm.activeItem < vm.results.results.length) {
							vm.activeItem += 1;
						}
					}

					vm.selectEnter = function(e) {
						if(vm.activeItem >= 0 && vm.activeItem < vm.results.results.length) {
							$location.url(vm.results.results[vm.activeItem].web_url);
						} else {
							$state.go('search', {q: vm.query, p: 1});
						}
						vm.reset();
					}

					vm.selectEscape = function() {
						vm.reset();
					}

					vm.setActive = function(index) {
						vm.activeItem = index;
					}

					vm.reset();

					$scope.$watch(function() {
						return $stateParams.q;
					}, function(q) {
						if(q) vm.query = q;
					});
				},
				controllerAs: 'vm',
				templateUrl: 'directives/ui/search-field.html',
				link: function ($scope, element, attrs, ctrl) {
					$document.bind('click', function (event) {
						var isChild = $(element).has(event.target).length > 0;
						var isSelf = element[0] == event.target;
						var isInside = isChild || isSelf;
						if (!isInside) {
							ctrl.reset();
							$scope.$apply();
						}
					});
				}
			};
		})

		/* Filters */

		.directive('uiFilters', function() {
			return {
				restrict: 'E',
				scope: {
					property: '=',
					classesOn: '=',
					classesOff: '='
				},
				replace: true,
				templateUrl: '/directives/ui-filter-button-vis.html',
				link: function ($scope, element, attrs) {
					$scope.toggle = function() {
						$scope.property = !$scope.property;
					}
				}
			};
		})

		.filter('visibility', function() {
			return function(input, visibilityFilter) {
				var res = [];
				input.forEach(function(entry) {
					if(visibilityFilter.public == false && entry.visibility == "public") {
						return;
					}
					if(visibilityFilter.protected == false && entry.visibility == "protected") {
						return;
					}
					if(visibilityFilter.private == false && entry.visibility == "private") {
						return;
					}
					res.push(entry);
				});
				return res;
			};
		})

		.directive('uiSummary', function($rootScope, $location, $anchorScroll) {
			return {
				restrict: 'E',
				scope: {
					target: '@'
				},
				replace: true,
				templateUrl: '/directives/ui-summary.html',
				link: function ($scope, element, attrs) {
					$scope.goTo = function(entity) {
						$location.hash(entity.id);
					}

					$scope.textToId = function(text) {
						return text.replace(/ /g, '-').replace(/[^A-Za-z_-]/g, '');
					}

					$rootScope.reloadSummary = function() {
						var h = angular.element(document.querySelectorAll(
							$scope.target + ' h1, ' +
							$scope.target + ' h2, ' +
							$scope.target + ' h3, ' +
							$scope.target + ' h4, ' +
							$scope.target + ' h5, ' +
							$scope.target + ' h6 '));

						$scope.headings = [];
						angular.forEach(h, function(heading) {
							var head = angular.element(heading);
							if(!head.is(':visible')) { return ; }
							var text = head.text().trim();
							var id = $scope.textToId(text);
							if(!head.attr('id')) {
								head.attr('id', id);
							} else {
								id = head.attr('id');
							}
							$scope.headings.push({
								id: id,
								text: text,
								level: parseInt(head[0].nodeName[1])
							});
						});
						$anchorScroll();
					}

					$scope.$watch('target', function() {
						setTimeout(function() {
							$rootScope.reloadSummary();
						}, 100);
					});
				}
			};
		})

		.directive('uiFilterForm', function() {
			return {
				restrict: 'E',
				scope: {
					searchFilter: '=',
					visibilityFilter: '='
				},
				replace: true,
				templateUrl: '/directives/ui-filter-form.html'
			};
		})

		.directive('uiFilterField', function() {
			return {
				restrict: 'E',
				scope: {
					property: '='
				},
				replace: true,
				templateUrl: '/directives/ui-filter-field.html'
			};
		})

		.directive('uiFilterGroupVis', function() {
			return {
				restrict: 'E',
				scope: {
					property: '='
				},
				replace: true,
				templateUrl: '/directives/ui-filter-group-vis.html'
			};
		})

		.directive('uiFilterButtonVis', function() {
			return {
				restrict: 'E',
				scope: {
					property: '=',
					classesOn: '=',
					classesOff: '='
				},
				replace: true,
				templateUrl: '/directives/ui-filter-button-vis.html',
				link: function ($scope, element, attrs) {
					$scope.toggle = function() {
						$scope.property = !$scope.property;
					}
				}
			};
		})

		/* Pagination */

		.directive('uiPagination', function() {
			return {
				restrict: 'E',
				replace: true,
				scope: {},
				bindToController: {
					pagination: '=',
					suffix: '=?'
				},
				controller: function($scope) {
					var vm = this;

					$scope.$watch('vm.pagination', function(pagination) {
						if(!pagination) return;
						vm.computePages(pagination);
					})

					vm.computePages = function(pagination) {
						vm.pages = [];
						var len = 11;
						var page = pagination.page;
						var start = page - Math.floor(len / 2);
						var end = page + Math.floor(len / 2);

						if(start < 1) {
							end = Math.min(pagination.max, end + Math.abs(start) + 1)
							start = 1
						} else if(end > pagination.max) {
							start = Math.max(1, start - Math.abs(end - pagination.max))
							end = pagination.max;
						}

						for(var i = start; i <= end; i++) {
							vm.pages.push(i);
						}
					}

					vm.changePage = function(page, limit) {
						if(page <= 0 || page > vm.pagination.max) return;
						var suffix = vm.suffix ? vm.suffix : '';
						$scope.$emit('change-page' + suffix, page, limit);
					}
				},
				controllerAs: 'vm',
				templateUrl: 'directives/ui/pagination.html'
			};
		})
})();
