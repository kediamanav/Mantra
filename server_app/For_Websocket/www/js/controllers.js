'use strict';

/* Controllers */

var serverControllers = angular.module('mainControllers', []);


serverControllers.controller('MainCtrl',['$scope', '$http', 'CompileService','RunService','InterfaceViewService','FlatViewService','ContractViewService','ClassDescendantsService','ClassAncestorsService','ClassClientsService','ClassSuppliersService','FeatureCallersService','CommandLineService','mySocket',// 'CompileService2',
  function($scope,$http,CompileService,RunService,InterfaceViewService,FlatViewService,ContractViewService,ClassDescendantsService,ClassAncestorsService,ClassSuppliersService,ClassClientsService,FeatureCallersService,CommandLineService,mySocket){//,CompileService2){
    $scope.message='Hi there';
    $scope.status_code=200;
    //mySocket.connect();

    $scope.send_input=function(){
        mySocket.sendMessage($scope.project.input);
    };

    /*$scope.compile2=function(){
        $scope.project.files='[{"filename":"plainoutput.ecf", "content":'+JSON.stringify('<?xml version="1.0" encoding="ISO-8859-1"?><system xmlns="http://www.eiffel.com/developers/xml/configuration-1-13-0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://www.eiffel.com/developers/xml/configuration-1-13-0 http://www.eiffel.com/developers/xml/configuration-1-13-0.xsd" name="plainoutput" uuid="3C0AC4DB-004E-4C43-B10C-D2E10B6F9C6E"><target name="plainoutput"><root feature="make" class="APPLICATION"/><option warning="true"><assertions precondition="true" postcondition="true" check="true" invariant="true" loop="true" supplier_precondition="true"/></option><setting name="console_application" value="true"/><precompile name="base_pre" location="$ISE_PRECOMP/base-safe.ecf"/><library name="base" location="$ISE_LIBRARY/library/base/base-safe.ecf"/><cluster name="plainoutput" location=".\" recursive="true"><file_rule><exclude>/EIFGENs$</exclude><exclude>/.svn$</exclude><exclude>/CVS$</exclude></file_rule></cluster></target></system>')+'},{"filename":"/src/application.e", "content":'+JSON.stringify('note\n\tdescription : "plainoutput application root class"\n\tdate        : "$Date$"\n\trevision    : "$Revision$"\n\nclass\n\tAPPLICATION\n\ninherit\n\tARGUMENTS\n\ncreate\n\tmake\n\nfeature {NONE} -- Initialization\n\n\tmake\n\t\t\t-- Run application.\n\t\tdo\n\t\t\t--| Add your code here\n\t\t\tprint ("Hello Eiffel World!%N")\n\t\tend\n\nend\n')+'}]';

        $scope.result=CompileService2.save($scope.project, function(response,headers){
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
            //console.log('fail');
            $scope.dump=response;
        });
        //console.log($scope.result);
    };*/


    $scope.compile=function(){
        //$scope.project.files='[{"filename":"plainoutput.ecf", "content":'+JSON.stringify('<?xml version="1.0" encoding="ISO-8859-1"?><system xmlns="http://www.eiffel.com/developers/xml/configuration-1-13-0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://www.eiffel.com/developers/xml/configuration-1-13-0 http://www.eiffel.com/developers/xml/configuration-1-13-0.xsd" name="plainoutput" uuid="3C0AC4DB-004E-4C43-B10C-D2E10B6F9C6E"><target name="plainoutput"><root feature="make" class="APPLICATION"/><option warning="true"><assertions precondition="true" postcondition="true" check="true" invariant="true" loop="true" supplier_precondition="true"/></option><setting name="console_application" value="true"/><precompile name="base_pre" location="$ISE_PRECOMP/base-safe.ecf"/><library name="base" location="$ISE_LIBRARY/library/base/base-safe.ecf"/><cluster name="plainoutput" location=".\" recursive="true"><file_rule><exclude>/EIFGENs$</exclude><exclude>/.svn$</exclude><exclude>/CVS$</exclude></file_rule></cluster></target></system>')+'},{"filename":"/src/application.e", "content":'+JSON.stringify('note\n\tdescription : "plainoutput application root class"\n\tdate        : "$Date$"\n\trevision    : "$Revision$"\n\nclass\n\tAPPLICATION\n\ninherit\n\tARGUMENTS\n\ncreate\n\tmake\n\nfeature {NONE} -- Initialization\n\n\tmake\n\t\t\t-- Run application.\n\t\tdo\n\t\t\t--| Add your code here\n\t\t\tprint ("Hello Eiffel World!%N")\n\t\tend\n\nend\n')+'}]';

        //$scope.result=CompileService.query({id :$scope.project.id, clean:false, path:$scope.project.path, target:$scope.project.target}, function(response,headers){
        $scope.result=CompileService.save($scope.project, function(response,headers){ 
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
        $scope.project.clean=true;
        $scope.result=CompileService.save($scope.project, function(response,headers){
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
        mySocket.connect();
        $scope.websocket_tester='';
        mySocket.subscribe(function(message){
            $scope.websocket_tester=$scope.websocket_tester+message;
            $scope.$apply();
        });

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
        var num=mySocket.stillConnected();
        $scope.result=RunService.query({id :$scope.project.id}, function(response,headers){
            $scope.id=headers('id');
            $scope.status_code=200;
            $scope.dump=response;
            num=mySocket.stillConnected();
            console.log(num);
            if(num==0){
                socket_execution();
            }
            else{
                mySocket.closeSocket();
            }
        },function(response,headers){
            $scope.status_code=response.status;
            if(response.status==504){
                alert("The process timed out!");
            }
            else{
                alert("Error");
            }
            $scope.dump=response;
            mySocket.closeSocket();
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


