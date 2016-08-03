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
		.module('entities', ['ngSanitize', 'ui', 'model'])

		.controller('EntityCtrl', ['Model', 'Metrics', '$routeParams', '$scope', '$sce', function(Model, Metrics, $routeParams, $scope, $sce) {
			$scope.entityId = $routeParams.id;

			this.loadEntityLinearization = function() {
				Model.loadEntityLinearization($routeParams.id,
					function(data) {
						$scope.linearization = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadEntityDefs = function() {
				Model.loadEntityDefs($routeParams.id,
					function(data) {
						$scope.defs = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadEntityCode = function() {
				Model.loadEntityCode($routeParams.id,
					function(data) {
						$scope.code = data;
					}, function(err) {
						$scope.code = err;
					});
			};

			this.loadEntityGraph = function(e) {
				Model.loadEntityGraph($routeParams.id,
					function(data) {
						$scope.graph = $sce.trustAsHtml(data);
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadStructuralMetrics = function() {
				Metrics.loadStructuralMetrics($routeParams.id,
					function(data) {
						$scope.metrics = data;
					}, function(message, status) {
						$scope.error = {message: message, status: status};
					});
			};

			Model.loadEntity($routeParams.id,
				function(data) {
					$scope.mentity = data;
				}, function(message, status) {
					$scope.error = {message: message, status: status};
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

		.directive('entityNamespace', function() {
			return {
				restrict: 'E',
				scope: {
					mentity: '='
				},
				templateUrl: '/directives/entity/namespace.html'
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

		.directive('entityLinearization', function() {
			return {
				restrict: 'E',
				scope: {
					listEntities: '=',
					listTitle: '@',
					listFocus: '='
				},
				templateUrl: '/directives/entity/linearization.html'
			};
		})

		.directive('entityDef', ['Model', function(Model, Code) {
			return {
				restrict: 'E',
				scope: {
					definition: '=',
					focus: '='
				},
				templateUrl: '/directives/entity/defcard.html',
				link: function ($scope, element, attrs) {
					$scope.codeId = 'code_' + $scope.definition.full_name.replace(/[^a-zA-Z0-9]/g, '_');
					$scope.loadCardCode = function() {
						if(!$scope.code) {
							Model.loadEntityCode($scope.definition.full_name,
								function(data) {
									$scope.code = data;
									setTimeout(function() { // smooth collapse
										$('#' + $scope.codeId).collapse('show')
									}, 1);
								}, function(err) {
									$scope.code = err;
								});
						} else {
							if($('#' + $scope.codeId).hasClass('in')) {
								$('#' + $scope.codeId).collapse('hide');
							} else {
								$('#' + $scope.codeId).collapse('show');
							}
						}
					};
				}
			};
		}])

		.directive('entityRating', ['Feedback', function(Feedback, Code) {
			return {
				restrict: 'E',
				scope: {
					mentity: '='
				},
				templateUrl: '/directives/entity/stars.html',
				link: function ($scope, element, attrs) {
					$scope.postStar = function(rating) {
						Feedback.postEntityStar($scope.mentity.full_name, rating,
						function(data) {
							$scope.ratings = data;
						}, function(err) {
							$scope.err = err;
						});
					}

					Feedback.loadEntityStars($scope.mentity.full_name,
						function(data) {
							$scope.ratings = data;
						}, function(err) {
							$scope.err = err;
						});
				}
			};
		}])
})();
