'use strict';

/* Controllers */

var serverControllers = angular.module('mainControllers', []);


serverControllers.controller('MainCtrl',['$scope', '$http', 'CompileService','RunService','InterfaceViewService','FlatViewService','ContractViewService','ClassDescendantsService','ClassAncestorsService','ClassClientsService','ClassSuppliersService','FeatureCallersService','CommandLineService','mySocket',
  function($scope,$http,CompileService,RunService,InterfaceViewService,FlatViewService,ContractViewService,ClassDescendantsService,ClassAncestorsService,ClassSuppliersService,ClassClientsService,FeatureCallersService,CommandLineService,mySocket){
    $scope.message='Hi there';
    $scope.status_code=200;
    //mySocket.connect();

    $scope.send_input=function(){
        mySocket.sendMessage($scope.project.input);
    }

    $scope.compile=function(){
        //if ($scope.project.target==''){
        //    alert('no target!');
        //}
        $scope.result=CompileService.query({id :$scope.project.id, clean:false, path:$scope.project.path, target:$scope.project.target}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
        });
    };

    $scope.cleanCompile=function(){
        if ($scope.project.target==''){
        }
        $scope.result=CompileService.query({id :$scope.project.id, clean:true, path:$scope.project.path, target:$scope.project.target}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
        });
    };

    $scope.run_exe=function(){
        //mySocket.sendMessage('abcdef');
        console.log('About to open connection');
        //mySocket.connect();
        $scope.websocket_tester='';
        /*mySocket.subscribe(function(message){
            $scope.websocket_tester=$scope.websocket_tester+message;
            $scope.$apply();
        });*/

        socket_execution();
        //mySocket.sendMessage($scope.project.input);
        //alert(num);
       // if(num==0){
            //alert(mySocket.stillConnected());
            //num=mySocket.stillConnected();
            //console.log(num);
            
       // }
      //  else{
        //    mySocket.closeSocket();
       // }
    };

    function socket_execution(){
        //var num=mySocket.stillConnected();
        console.log('Before sending the request')
        $scope.result=RunService.query({id :$scope.project.id}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
            /*num=mySocket.stillConnected();
            console.log(num);
            if(num==0){
                socket_execution();
            }
            else{
                mySocket.closeSocket();
            }*/
        },function(response,headers){
            $scope.status_code=response.status;
            //console.log(num);
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
            //mySocket.closeSocket();
        });
    }

    $scope.get_interface_view=function(){
        $scope.result=InterfaceViewService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
           $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
        });
    };

    $scope.get_flat_view=function(){
        $scope.result=FlatViewService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
        });
    };

    $scope.get_contract_view=function(){
        $scope.result=ContractViewService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
        });
    };

    $scope.get_class_descendants=function(){
        $scope.result=ClassDescendantsService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
        });
    };

    $scope.get_class_ancestors=function(){
        $scope.result=ClassAncestorsService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
        });
    };

    $scope.get_class_clients=function(){
        $scope.result=ClassClientsService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
        });
    };

    $scope.get_class_suppliers=function(){
        $scope.result=ClassSuppliersService.query({id :$scope.project.id, class: $scope.project.class}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
        });
    };

    $scope.get_feature_callers=function(){
        $scope.result=FeatureCallersService.query({id :$scope.project.id, class: $scope.project.class, feature: $scope.project.feature}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
        });
    };

    $scope.get_user_command_line=function(){
        $scope.result=CommandLineService.query({id :$scope.project.id, command_line :$scope.project.command_line}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
        });
    };
}]);


