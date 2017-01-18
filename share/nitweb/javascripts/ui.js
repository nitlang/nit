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
		.module('ui', [ 'model' ])

		.controller('SearchCtrl', function(Model, $routeParams, $scope, $location, $document) {

			$scope.query = '';

			$scope.reset = function() {
				$scope.activeItem = 0;
				$scope.results = [];
			}

			$scope.update = function(e) {
				if(e.keyCode == 38) {
					$scope.selectUp();
				} else if(e.keyCode == 40) {
					$scope.selectDown();
				} else if(e.keyCode == 27) {
					$scope.selectEscape();
				} else if(e.keyCode == 13) {
					$scope.selectEnter();
				}
			}

			$scope.selectUp = function() {
				if($scope.activeItem > 0) {
					$scope.activeItem -= 1;
				}
			}

			$scope.selectDown = function() {
				if($scope.activeItem < $scope.results.length - 1) {
					$scope.activeItem += 1;
				}
			}

			$scope.selectEnter = function(e) {
				$location.url($scope.results[$scope.activeItem].web_url);
				$scope.reset();
			}

			$scope.selectEscape = function() {
				$scope.reset();
			}

			$scope.setActive = function(index) {
				$scope.activeItem = index;
			}

			$scope.search = function() {
				if(!$scope.query) {
					$scope.reset();
					return;
				}
				Model.search($scope.query, 10,
					function(data) {
						$scope.reset();
						$scope.results = data;
					}, function(err) {
						$scope.reset();
						$scope.error = err;
					});
			}

			$scope.reset();
		})

		.directive('searchField', function($document) {
			return {
				restrict: 'E',
				replace: true,
				controller: 'SearchCtrl',
				controllerAs: 'searchCtrl',
				templateUrl: '/directives/search/field.html',
				link: function ($scope, element, attrs) {
					$document.bind('click', function (event) {
						var isChild = $(element).has(event.target).length > 0;
						var isSelf = element[0] == event.target;
						var isInside = isChild || isSelf;
						if (!isInside) {
							$scope.reset();
							$scope.$apply();
						}
					});
				}
			};
		})

		.directive('searchCard', function() {
			return {
				restrict: 'E',
				scope: {
					mentity: '='
				},
				replace: true,
				templateUrl: '/directives/search/card.html'
			};
		})

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
})();
