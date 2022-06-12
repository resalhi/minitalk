# minitalk
The purpose of this project is to code a small data exchange program using UNIX signals.


-first run make, it will compile and add server and client

excute the server like this : ./server 

it will print the pid (process identifier) copy that pid then open another terminal.

in the new terminal excute the client like this : ./client "(pid of the server)" "the string to pass"

past the pid of the server as first argument.

the secend argument is the string that you want to pass to the server.

run the client and it will send the string to the server and the server must print it.

