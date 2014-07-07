Mantra
Eiffel as a web service

'app.exe' can be obtained by compiling the finalized version of app.ecf with libfcgi target

'cleanup.exe' can be obtained by compiling the finalized version of'cleanup' inside 'project_cleanup'

'Apache configuration Files' contains the relevant configuration files for reference and EWFDeployment.pdf

Currently, the app does not support web sockets. But when EWF is able to support web sockets on top of it, to enable web sockets, simply replace the 'app_service.e' class from 'For_Websocket' with 'app_service.e' inside 'src', and 'www' from 'For_Websocket' with the main 'www' and recompile the application using libfcgi target, and the websocket service will be available.
