

var http = require('http');
http.createServer(function (req, res) {
      res.writeHead(200, {'Content-Type': 'text/plain'});
        res.end('Hello World\n');
        }).listen(1337, '127.0.0.1');
console.log('Server running at http://127.0.0.1:1337/');


var i, a, b, c, max;
max = 1000000000;
var d = Date.now();
for (i = 0; i < max; i++) {
      a = 1234 + 5678 + i;
          b = 1234 * 5678 + i;
              c = 1234 / 2 + i;
}
console.log(Date.now() - d);
