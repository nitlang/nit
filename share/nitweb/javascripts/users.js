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
		.module('users', ['ngSanitize', 'model'])

		.controller('UserCtrl', ['User', '$routeParams', '$scope', function(User, $routeParams, $scope) {
			this.loadUser = function() {
				User.loadUser(
					function(data) {
						$scope.user = data;
					}, function(err) {
						$scope.error = err;
					});
			};
			this.loadGrades = function() {
				User.loadUserStars(
					function(data) {
						$scope.ratings = data;
					}, function(err) {
						$scope.error = err;
					});
			};
			this.loadUser();
			this.loadGrades();
		}])

		.directive('userMenu', ['User', function(User) {
			return {
				restrict: 'E',
				templateUrl: '/directives/user/user-menu.html',
				link: function ($scope, element, attrs) {
					$scope.loadUser = function() {
						User.loadUser(
							function(data) {
								$scope.user = data;
							}, function(err) {
								//$scope.error = err;
							});
					}
					$scope.loadUser();
				}
			};
		}])
})();
