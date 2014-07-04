'use strict';

/* App Module */

var serverApp = angular.module('serverApp', [
  'ngRoute',
  'mainControllers',
  'ngResource'
]);

serverApp.config(['$routeProvider','$locationProvider',
  function($routeProvider,$locationProvider) {
    $routeProvider.
      when('/', {
        templateUrl: 'partials/home-page.html',
        controller: 'MainCtrl'
      }).
      otherwise({
        redirectTo: '/'
      });
      $locationProvider.html5Mode(true);
  }]);


serverApp.factory('mySocket', ['$q', '$rootScope', function($q, $rootScope) {
    // We return this object to anything injecting our service
    var Service={};
    var isReady=0;
    
    Service.connect= function(){

      /*if(Service.ws){
          console.log('Here is the error in open');
      }
      else{*/
      isReady=0;
      try{
        var ws = new WebSocket("ws://localhost:9999");
      } catch (e) {
        console.log('try/catch around ws.close()')
      }

      ws.onopen = function(){
        console.log("Socket has been opened!");
        isReady=1;
      };
      
      ws.onmessage = function(event) {
        console.log("Received data from websocket: ", event.data);
        Service.callback(event.data);
      };

      ws.onclose = function(){
        console.log('Closing Connection');
        isReady=0;
      }

      Service = ws;
    }

    Service.closeSocket = function(){
      //if(Service.ws){
        try {
          Service.close();

        } catch (e) {
          console.log('try/catch around ws.close()')
        }
      /*}
      else{
          console.log('Here is the error in close');
      }*/
    }

    Service.subscribe = function(callback){
      Service.callback=callback;
    }

    Service.sendMessage = function(message) {
      console.log('Sending text', message);
      Service.send(message);
    }

    Service.stillConnected = function(){
      console.log('Status : ',Service);
      console.log('isReady: ',isReady);
      if(Service){
        console.log('ws object ',Service.readyState);
        return isReady;
        //return Service.readyState;
      }
      else{
        return -1;
      }
    }


    return Service;
}]);

serverApp.factory('CompileService', function($resource) {
  return $resource('/compile',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('RunService', function($resource) {
  return $resource('/run',{}, {query: {method:'GET', isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('InterfaceViewService', function($resource) {
  return $resource('/interfaceView',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('FlatViewService', function($resource) {
  return $resource('/flatView',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('ContractViewService', function($resource) {
  return $resource('/contractView',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('ClassDescendantsService', function($resource) {
  return $resource('/classDescendants',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('ClassAncestorsService', function($resource) {
  return $resource('/classAncestors',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('ClassClientsService', function($resource) {
  return $resource('/classClients',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('ClassSuppliersService', function($resource) {
  return $resource('/classSuppliers',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('FeatureCallersService', function($resource) {
  return $resource('/featureCallers',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});

serverApp.factory('CommandLineService', function($resource) {
  return $resource('/commandLine',{}, {query: {method:'GET',  isArray:true}, 'save':   {method:'POST'}});
});