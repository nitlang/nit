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
		.module('grades', ['ngSanitize'])

		.config(function($stateProvider, $locationProvider) {
			$stateProvider
				.state('doc.entity.grades', {
					url: '/grades',
					templateUrl: 'views/doc/grades.html',
					resolve: {
						metrics: function(Feedback, $q, $stateParams, $state) {
							var d = $q.defer();
							Feedback.loadEntityStars($stateParams.id, d.resolve,
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
				.state('grades', {
					url: '/grades',
					templateUrl: 'views/grades.html',
					controller: 'GradesCtrl',
					controllerAs: 'gradesCtrl'
				})
		})

		.factory('Feedback', [ '$http', function($http) {
			return {
				loadEntityStars: function(id, cb, cbErr) {
					$http.get('/api/feedback/stars/' + id)
						.success(cb)
						.error(cbErr);
				},
				loadEntityStarsDimension: function(id, dimension, cb, cbErr) {
					$http.get('/api/feedback/stars/' + id + '/dimension/' + dimension)
						.success(cb)
						.error(cbErr);
				},
				postEntityStarDimension: function(id, dimension, rating, cb, cbErr) {
					$http.post('/api/feedback/stars/' + id + '/dimension/' + dimension,
						{rating: rating})
						.success(cb)
						.error(cbErr);
				},
				loadMostRated: function(cb, cbErr) {
					$http.get('/api/feedback/grades/most')
						.success(cb)
						.error(cbErr);
				},
				loadBestRated: function(cb, cbErr) {
					$http.get('/api/feedback/grades/best')
						.success(cb)
						.error(cbErr);
				},
				loadWorstRated: function(cb, cbErr) {
					$http.get('/api/feedback/grades/worst')
						.success(cb)
						.error(cbErr);
				},
				loadUsersRatings: function(cb, cbErr) {
					$http.get('/api/feedback/grades/users')
						.success(cb)
						.error(cbErr);
				},
			}
		}])

		.controller('GradesCtrl', ['Feedback', '$scope', function(Feedback, $scope) {

			this.loadMostRated = function() {
				Feedback.loadMostRated(
					function(data) {
						$scope.most = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadBestRated = function() {
				Feedback.loadBestRated(
					function(data) {
						$scope.best = data;
					}, function(err) {
						$scope.error = err;
					});
			};
			this.loadWorstRated = function() {
				Feedback.loadWorstRated(
					function(data) {
						$scope.worst = data;
					}, function(err) {
						$scope.error = err;
					});
			};
			this.loadUsersRatings = function() {
				Feedback.loadUsersRatings(
					function(data) {
						$scope.ratings = data;
					}, function(err) {
						$scope.error = err;
					});
			};

			this.loadMostRated();
			this.loadBestRated();
			this.loadWorstRated();
			this.loadUsersRatings();
		}])
})();
