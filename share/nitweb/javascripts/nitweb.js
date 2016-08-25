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
	angular.module('nitweb', ['ngRoute', 'ngSanitize', 'angular-loading-bar', 'entities', 'docdown', 'index', 'metrics', 'users'])
	.config(['cfpLoadingBarProvider', function(cfpLoadingBarProvider) {
		cfpLoadingBarProvider.includeSpinner = false;
	}])
	.config(function($routeProvider, $locationProvider) {
		$routeProvider
			.when('/', {
				templateUrl: 'views/index.html',
				controller: 'IndexCtrl',
				controllerAs: 'indexCtrl'
			})
			.when('/user', {
				templateUrl: 'views/user.html',
				controller: 'UserCtrl',
				controllerAs: 'userCtrl'
			})
			.when('/docdown', {
				templateUrl: 'views/docdown.html',
				controller: 'DocdownCtrl',
				controllerAs: 'docdownCtrl'
			})
			.when('/login', {
				controller : function(){
					window.location.replace('/login');
				},
			    template : "<div></div>"
			})
			.when('/logout', {
				controller : function(){
					window.location.replace('/logout');
				},
			    template : "<div></div>"
			})
			.when('/doc/:id', {
				templateUrl: 'views/doc.html',
				controller: 'EntityCtrl',
				controllerAs: 'entityCtrl'
			})
			.otherwise({
				templateUrl: 'views/error.html'
			});
		$locationProvider.html5Mode(true);
	});
})();
