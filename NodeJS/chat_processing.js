net = require('net');
util = require('util');
var sockets  =[];

var s = net.Server(function(socket){
    sockets.push(socket);
    socket.on('data', function(d){
      var valid=false;
      for(var i= 0; i < sockets.length ;i++){
        util.print(d);
        util.log(d);
        util.debug(d);
        if( d=="OFF" || d =="ON"){
            sockets[i].write('VALID\n');

        }
        else{
            sockets[i].write('INVALID\n');
        }
        if(sockets[i]!=socket){
            sockets[i].write(d);
        }




      }




      });
    socket.on('end',function(){
      var i = sockets.indexOf(socket);
      sockets.splice(i, 1);
      });
    });
s.listen(8000);
