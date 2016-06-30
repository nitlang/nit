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

	.module('ng-example', ['ngRoute'])

	.factory('CounterModel', ['$http', function($http) {
		return {
			load: function(cb, cbErr) {
				$http.get('/counter')
					.success(cb)
					.error(cbErr);
			},
			increment: function(cb, cbErr) {
				$http.post('/counter')
					.success(cb)
					.error(cbErr);
			}
		};
	}])

	.controller('CounterCtrl', ['CounterModel', function(CounterModel) {
		var $this = this;

		this.loadCounter = function() {
			CounterModel.load(
				function(data) {
					$this.counter = data;
				}, function(err) {
					$this.error = err;
				});
		};

		this.incrementCounter = function() {
			CounterModel.increment(
				function(data) {
					$this.counter = data;
				}, function(err) {
					$this.error = err;
				});
		};

		this.loadCounter();
	}])

	.config(function($routeProvider, $locationProvider) {
		$routeProvider
			.when('/', {
				templateUrl: 'views/index.html',
				controller: 'CounterCtrl',
				controllerAs: 'counterCtrl'
			})
			.otherwise({
				redirectTo: '/'
			});
		$locationProvider.html5Mode(true);
	});
})();
