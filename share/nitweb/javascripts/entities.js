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
					resolve: {
						doc: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityDoc($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						},
						parents: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityParents($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						},
						children: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityChildren($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						},
						intros: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityIntros($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						},
						redefs: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityRedefs($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						},
						meta: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityMeta($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(mentity, doc, parents, children, intros, redefs, meta) {
						this.mentity = mentity;
						this.doc = doc;
						this.parents = parents;
						this.children = children;
						this.intros = intros;
						this.redefs = redefs;
						this.meta = meta;

						this.date = function(date) {
							return new Date(date);
						}
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
						},
						ancestors: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityAncestors($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						},
						parents: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityParents($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						},
						children: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityChildren($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						},
						descendants: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityDescendants($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						},
					},
					controller: function(ancestors, parents, children, descendants, graph, $sce) {
						this.graph = $sce.trustAsHtml(graph.graph);
						this.ancestors = ancestors;
						this.parents = parents;
						this.children = children;
						this.descendants = descendants;
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
							Model.loadEntityLin($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(mentity, lin, $scope, $location, $anchorScroll) {
						var vm = this;
						vm.focus = $location.hash() ?
							$location.hash() : lin.results[0].full_name;
						vm.mentity = mentity;
						vm.linearization = lin;
						setTimeout(function() {
							$anchorScroll();
						}, 400);
						$scope.$watch(function () {
							return $location.hash();
						}, function (value) {
							vm.focus = $location.hash() ?
								$location.hash() : lin.results[0].full_name;
							$anchorScroll();
						});
					},
					controllerAs: 'vm'
				})
				.state('doc.entity.all', {
					url: '/all',
					templateUrl: 'views/doc/defs.html',
					resolve: {
						defs: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityAll($stateParams.id, d.resolve,
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
				.state('doc.entity.license', {
					url: '/license',
					templateUrl: 'views/doc/license.html',
					resolve: {
						content: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityLicenseContent($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(mentity, content) {
						this.mentity = mentity;
						this.content = content;
					},
					controllerAs: 'vm',
				})
				.state('doc.entity.contrib', {
					url: '/contrib',
					templateUrl: 'views/doc/contrib.html',
					resolve: {
						content: function(Model, $q, $stateParams, $state) {
							var d = $q.defer();
							Model.loadEntityContribContent($stateParams.id, d.resolve,
								function() {
									$state.go('404', null, { location: false })
								});
							return d.promise;
						}
					},
					controller: function(mentity, content) {
						this.mentity = mentity;
						this.content = content;
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

				loadEntityDoc: function(id, cb, cbErr) {
					$http.get('/api/doc/' + id + '?format=html')
						.success(cb)
						.error(cbErr);
				},

				loadEntityLin: function(id, cb, cbErr) {
					$http.get('/api/lin/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityDefs: function(id, cb, cbErr) {
					$http.get('/api/defs/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityIntros: function(id, cb, cbErr) {
					$http.get('/api/intros/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityRedefs: function(id, cb, cbErr) {
					$http.get('/api/redefs/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityAll: function(id, cb, cbErr) {
					$http.get('/api/all/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityCode: function(id, cb, cbErr) {
					$http.get('/api/code/' + id + '?format=html')
						.success(cb)
						.error(cbErr);
				},

				loadEntityAncestors: function(id, cb, cbErr) {
					$http.get('/api/ancestors/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityParents: function(id, cb, cbErr) {
					$http.get('/api/parents/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityChildren: function(id, cb, cbErr) {
					$http.get('/api/children/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityDescendants: function(id, cb, cbErr) {
					$http.get('/api/descendants/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityMeta: function(id, cb, cbErr) {
					$http.get('/api/meta/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityGraph: function(id, cb, cbErr) {
					$http.get('/api/graph/inheritance/' + id + '?format=svg&cdepth=3')
						.success(cb)
						.error(cbErr);
				},

				loadEntityLicenseContent: function(id, cb, cbErr) {
					$http.get('/api/ini/license-content/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityContribContent: function(id, cb, cbErr) {
					$http.get('/api/ini/contrib-content/' + id)
						.success(cb)
						.error(cbErr);
				},

				loadEntityGraph: function(id, cb, cbErr) {
					$http.get('/api/graph/inheritance/' + id + '?format=svg&cdepth=3')
						.success(cb)
						.error(cbErr);
				},

				search: function(q, p, n, cb, cbErr) {
					$http.get('/api/search?q=' + q + '&p=' + p + '&l=' + n)
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
				replace: true,
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
				replace: true,
				scope: {},
				bindToController: {
					loc: '='
				},
				controller: function() {},
				controllerAs: 'vm',
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
					mentity: '='
				},
				replace: true,
				templateUrl: '/directives/entity/card.html'
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
						return $scope.focus == $scope.definition.full_name;
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

					$scope.$watch('focus', function() {
						if($scope.isActive()) $scope.loadCardCode();
					});
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
