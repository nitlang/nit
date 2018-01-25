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
	angular.module('nitweb', ['ui.router', 'ngSanitize', 'angular-loading-bar', 'catalog', 'entities', 'docdown', 'metrics', 'users', 'grades'])

	.config(['cfpLoadingBarProvider', function(cfpLoadingBarProvider) {
		cfpLoadingBarProvider.includeSpinner = false;
	}])

	.run(function($rootScope, $anchorScroll) {
		$anchorScroll.yOffset = 80;
		$rootScope.$on('$stateChangeSuccess', function() {
		  $anchorScroll();
		});
	})

	.config(function($stateProvider, $locationProvider) {
		$stateProvider
			.state({
				name: '404',
				url: '*path',
				templateUrl: 'views/error.html'
			})
		$locationProvider.html5Mode(true);
	})
})();
