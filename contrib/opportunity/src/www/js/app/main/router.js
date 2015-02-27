'use strict';
angular.module('opportunity')

.config(function($stateProvider, $urlRouterProvider) {

  $urlRouterProvider.otherwise("/meetups");

  $stateProvider
    .state('meetups', {
      url: "/meetups",
      controller: "ListMeetupsController as listMeetupsCtrl",
      templateUrl: "templates/meetup/list.html"
    })

    .state('addMeetup', {
      url: "/addMeetup",
      controller: "AddMeetupController as addMeetupCtrl",
      templateUrl: "templates/meetup/add.html"
    });
});