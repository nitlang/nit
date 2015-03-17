'use strict';
angular.module('opportunity')

.controller('MenuController', ['$mdSidenav', '$state',
function ($mdSidenav, $state) {
    var _this = this;

    this.toggle = function(){
		$mdSidenav('left').toggle();
    };

    this.go = function(state){
    	$state.go(state);
    	$mdSidenav('left').close();
    };

}]);