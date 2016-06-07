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
		.module('entities', ['ui', 'model'])

		.controller('EntityCtrl', ['Model', '$routeParams', '$scope', function(Model, $routeParams, $scope) {
			this.loadEntityLinearization = function() {
				Model.loadEntityLinearization($routeParams.id,
					function(data) {
						$scope.linearization = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			Model.loadEntity($routeParams.id,
				function(data) {
					$scope.mentity = data;
				}, function(err) {
					$scope.error = err;
				});
		}])

		.directive('entityLink', function() {
			return {
				restrict: 'E',
				scope: {
					mentity: '='
				},
				templateUrl: '/directives/entity/link.html'
			};
		})

		.directive('entityDoc', function() {
			return {
				restrict: 'E',
				scope: {
					mentity: '='
				},
				templateUrl: '/directives/entity/doc.html'
			};
		})

		.directive('entitySignature', function() {
			return {
				restrict: 'E',
				scope: {
					mentity: '='
				},
				templateUrl: '/directives/entity/signature.html'
			};
		})

		.directive('entityTag', function() {
			return {
				restrict: 'E',
				scope: {
					mentity: '='
				},
				replace: true,
				templateUrl: '/directives/entity/tag.html'
			};
		})

		.directive('entityLocation', function() {
			return {
				restrict: 'E',
				scope: {
					mentity: '='
				},
				templateUrl: '/directives/entity/location.html'
			};
		})

		.directive('entityCard', function() {
			return {
				restrict: 'E',
				scope: {
					mentity: '='
				},
				replace: true,
				templateUrl: '/directives/entity/card.html'
			};
		})

		.directive('entityList', function() {
			return {
				restrict: 'E',
				scope: {
					listEntities: '=',
					listId: '@',
					listTitle: '@',
					listObjectFilter: '=',
				},
				templateUrl: '/directives/entity/list.html',
				link: function ($scope, element, attrs) {
					$scope.showFilters = false;
					if(!$scope.listObjectFilter) {
						$scope.listObjectFilter = {};
					}
					if(!$scope.visibilityFilter) {
						$scope.visibilityFilter = {
							public: true,
							protected: true,
							private: false
						};
					}
					$scope.toggleFilters = function() {
						$scope.showFilters = !$scope.showFilters;
					};
				}
			};
		})
})();
