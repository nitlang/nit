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

		.controller('SearchCtrl', ['Model', '$routeParams', '$scope', '$window', function(Model, $routeParams, $scope, $window) {
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

			$scope.selectEnter = function() {
				$window.location.href = $scope.results[$scope.activeItem].web_url;
				$scope.reset();
			}

			$scope.selectEscape = function() {
				$scope.reset();
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
		}])

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
