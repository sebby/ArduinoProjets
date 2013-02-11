net  =  require('net');
var sockets = [];
var index = 0;

var s =  net.Server(function(socket){
    sockets.push(socket);
    
  
    setInterval(function(){
      index++;
      index = index % 10;
      for(var i =0 ; i<sockets.length; i++){
        var client = sockets[i];
        client.write(index + ' | hello\n');
      }
      ping();
      },1000);





  socket.on('end',function(){
      var i  =  socket.indexOf(socket);
      socket.splice(i,1);
    });

    });
s.listen(8000);



//
// Faire une action
function ping(){
   console.log(new Date());
}
