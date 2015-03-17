'use strict';
angular.module('opportunity')

.controller('AddMeetupController', ['$http','$state',
function ($http, $state) {
    var _this = this;
    this.meetup = {
    	mode: 0
    };

    this.add = function(){
    	$http({
		    method: 'POST',
		    url: '/api/meetup/create',
		    data: this.serializeData(this.meetup),
		    headers: {'Content-Type': 'application/x-www-form-urlencoded'}
		}).then(function(res){
    		$state.go('meetups');
    	});

    };
	this.serializeData = function( data ) {
	    // If this is not an object, defer to native stringification.
	    if ( ! angular.isObject( data ) ) {
	        return( ( data == null ) ? "" : data.toString() );
	    }

	    var buffer = [];

	    // Serialize each key in the object.
	    for ( var name in data ) {
	        if ( ! data.hasOwnProperty( name ) ) {
	            continue;
	        }

	        var value = data[ name ];

	        buffer.push(
	            encodeURIComponent( name ) + "=" + encodeURIComponent( ( value == null ) ? "" : value )
	        );
	    }

	    // Serialize the buffer and clean it up for transportation.
	    var source = buffer.join( "&" ).replace( /%20/g, "+" );
	    return( source );
	}
}]);