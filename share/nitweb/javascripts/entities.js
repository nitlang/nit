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
		.module('entities', ['ngSanitize', 'ui'])

		/* Router */

		.config(function($stateProvider, $locationProvider) {
			$stateProvider
				.state('doc', {
					url: '/doc/:id',
					templateUrl: 'views/doc/index.html',
					resolve: {
						mentity: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntity($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(mentity) {
						this.mentity = mentity;
					},
					controllerAs: 'vm',
					abstract: true
				})
				.state('doc.entity', {
					url: '',
					templateUrl: 'views/doc/entity.html',
					controller: function(mentity) {
						this.mentity = mentity;
					},
					controllerAs: 'vm',
					abstract: true
				})
				.state('doc.entity.doc', {
					url: '',
					templateUrl: 'views/doc/doc.html',
					controller: function(mentity) {
						this.mentity = mentity;
					},
					controllerAs: 'vm',
				})
				.state('doc.entity.graph', {
					url: '/graph',
					templateUrl: 'views/doc/graph.html',
					resolve: {
						graph: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityGraph($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(graph, $sce) {
						this.graph = $sce.trustAsHtml(graph);
					},
					controllerAs: 'vm',
				})
				.state('doc.entity.metrics', {
					url: '/metrics',
					templateUrl: 'views/doc/metrics.html',
					resolve: {
						metrics: function(Metrics, $q, $stateParams, $state) {
							var d = $q.defer();
							Metrics.loadStructuralMetrics($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(mentity, metrics) {
						this.mentity = mentity;
						this.metrics = metrics;
					},
					controllerAs: 'vm',
				})
				.state('doc.entity.code', {
					url: '/code',
					templateUrl: 'views/doc/code.html',
					resolve: {
						code: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityCode($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(mentity, code) {
						this.mentity = mentity;
						this.code = code;
					},
					controllerAs: 'vm',
				})
				.state('doc.entity.defs', {
					url: '/defs',
					templateUrl: 'views/doc/defs.html',
					resolve: {
						defs: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityDefs($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(mentity, defs) {
						this.mentity = mentity;
						this.defs = defs;
					},
					controllerAs: 'vm',
				})
				.state('doc.entity.lin', {
					url: '/lin',
					templateUrl: 'views/doc/lin.html',
					resolve: {
						lin: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityLinearization($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(mentity, lin) {
						this.mentity = mentity;
						this.lin = lin;
					},
					controllerAs: 'vm',
				})
				.state('doc.entity.all', {
					url: '/all',
					templateUrl: 'views/doc/all.html',
					controller: function(mentity) {
						this.mentity = mentity;
					},
					controllerAs: 'vm',
				})
		})

		/* Model */

		.factory('Model', [ '$http', function($http) {
			return {

				loadEntity: function(id, cb, cbErr) {
					$http.get('/api/entity/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityLinearization: function(id, cb, cbErr) {
					$http.get('/api/linearization/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityDefs: function(id, cb, cbErr) {
					$http.get('/api/defs/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityCode: function(id, cb, cbErr) {
					$http.get('/api/code/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityGraph: function(id, cb, cbErr) {
					$http.get('/api/graph/inheritance/' + id + '?cdepth=3')
						.success(cb)
						.error(cbErr);
				},

				search: function(q, n, cb, cbErr) {
					$http.get('/api/search?q=' + q + '&n=' + n)
						.success(cb)
						.error(cbErr);
				}
			};
		}])

		/* Directives */

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
					namespace: '='
				},
				templateUrl: '/directives/entity/namespace.html',
				link: function ($scope, element, attrs) {
					$scope.isObject = function(obj) {
						return typeof obj === 'object';
					};
					$scope.isArray = function(obj) {
						return Array.isArray(obj);
					};
					$scope.isString = function(obj) {
						return typeof obj === 'string';
					};
				}
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

		.directive('entityGraph', function() {
			return {
				restrict: 'E',
				scope: {
					mentity: '=',
					graph: '='
				},
				replace: true,
				templateUrl: '/directives/entity/graph.html'
			};
		})

		.directive('entityCard', ['Feedback', function(Feedback) {
			return {
				restrict: 'E',
				scope: {
					mentity: '=',
					defaultTab: '@',
					noSynopsis: '='
				},
				replace: true,
				templateUrl: '/directives/entity/card.html',
				link: function ($scope, element, attrs) {
					$scope.currentTab = $scope.defaultTab ? $scope.defaultTab : 'signature';

					$scope.loadEntityStars = function() {
						Feedback.loadEntityStars($scope.mentity.full_name,
							function(data) {
								$scope.ratings = data;
							}, function(message, status) {
								$scope.error = {message: message, status: status};
							});
					};
				}
			};
		}])

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

					$scope.isActive = function() {
						return $scope.focus.full_name == $scope.definition.full_name;
					}

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

					if($scope.isActive()) $scope.loadCardCode();
				}
			};
		}])

		.controller('StarsCtrl', ['Feedback', '$scope', function(Feedback, $scope) {
			$ctrl = this;

			this.postStar = function(rating) {
				Feedback.postEntityStarDimension($scope.mentity.full_name,
				$scope.dimension, rating,
				function(data) {
					$scope.mean = data.mean;
					$scope.list = data.ratings;
					$scope.user = data.user;
					$ctrl.loadEntityStars($scope);
				}, function(err) {
					$scope.err = err;
				});
			}

			this.loadEntityStars = function($scope) {
				Feedback.loadEntityStars($scope.mentity.full_name,
					function(data) {
						$scope.ratings = data;
					}, function(message, status) {
						$scope.error = {message: message, status: status};
					});
			};
		}])

		.directive('entityRating', ['Feedback', function(Feedback) {
			return {
				restrict: 'E',
				scope: {
					mentity: '=',
					ratings: '='
				},
				controller: 'StarsCtrl',
				controllerAs: 'ratingsCtrl',
				templateUrl: '/directives/entity/rating.html'
			};
		}])

		.directive('entityStars', ['Feedback', function(Feedback) {
			return {
				restrict: 'E',
				scope: {
					mentity: '=',
					dimension: '@',
					mean: '=',
					list: '=',
					user: '=',
					refresh: '=',
					ratings: '='
				},
				controller: 'StarsCtrl',
				controllerAs: 'starsCtrl',
				templateUrl: '/directives/entity/stars.html'
			};
		}])
})();
