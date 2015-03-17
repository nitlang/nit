'use strict';
angular.module('opportunity')

.controller('ListMeetupsController', ['$http',
function ($http) {
    var _this = this;
    this.meetups = [];

    this.refresh = function(){
    	$http.get('/api/meetup/list')
    		.then(function(res){
    			_this.meetups = res.data;
    		});
    };

    this.delete = function(id){
		$http.get('/api/meetup/delete/'+id)
    		.then(function(res){
    			_this.refresh();
    		});
    };

    this.refresh();

}]);