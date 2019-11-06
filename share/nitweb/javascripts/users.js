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
		.module('users', ['ngSanitize'])

		.config(function($stateProvider, $locationProvider) {
			$stateProvider
				.state('user', {
					url: '/user',
					templateUrl: 'views/user.html',
					controller: 'UserCtrl',
					controllerAs: 'userCtrl'
				})
				.state('login', {
					url: '/login',
					controller : function(){
						window.location.replace('/login');
					},
					template : "<div></div>"
				})
				.state('logout', {
					controller : function(){
						window.location.replace('/logout');
					},
					template : "<div></div>"
				})
		})

		.factory('User', [ '$http', function($http) {
			return {
				loadUser: function(cb, cbErr) {
					$http.get('/api/user')
						.success(cb)
						.error(cbErr);
				},
				loadUserStars: function(cb, cbErr) {
					$http.get('/api/feedback/user/stars')
						.success(cb)
						.error(cbErr);
				},
			}
		}])

		.controller('UserCtrl', ['User', '$scope', function(User, $scope) {
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

		.directive('userMenu', ['User', '$rootScope', function(User, $rootScope) {
			return {
				restrict: 'E',
				templateUrl: '/directives/user/user-menu.html',
				link: function ($scope, element, attrs) {
					$scope.loadUser = function() {
						User.loadUser(
							function(data) {
								$rootScope.user = data;
							}, function(err) {
								//$scope.error = err;
							});
					}
					$scope.loadUser();
				}
			};
		}])

		.directive('userSidebar', ['User', '$rootScope', function(User, $rootScope) {
			return {
				restrict: 'E',
				templateUrl: '/directives/user/sidebar.html',
			};
		}])
})();
