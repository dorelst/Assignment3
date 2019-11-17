The application has to module, the server (assignment3_server.c and assignment3_svc.c for the stub) and the client (assignment3_client.c and assignment3_clnt.c for the stub).
The server is using multi-threading in the stub module (assignment3_svc.c) inside the assigment3_1 function (lines 120 to 135) using pthread.

The server address was hardcoded in the Makefile file and is pointing to in-csci-rrpc01.cs.iupui.edu. This can be changed either by changing the value in the Makefile or by running manully the clients and pointing the new server location.

The following functionalities are supported by the Makefile implementation:

1. Build
	- "make  build"
	- this runs "make -f Makefile.assignment3"

2. RPCgen
	- "make rpcgen"
	- this runs "rpcgen -a -C assignment3.x"
3. Run the client
	- "make run_client"
	- this runs the client module, "./assignment3_client in-csci-rrpc01.cs.iupui.edu" and is pointing to in-csci-rrpc01.cs.iupui.edu for the server
4. Run the server
	- "make run_server"
	- this runs the server module, "./assignment3_server"

5. Clean the object files
	- "make clean"
	- this deletes both the object and executable files