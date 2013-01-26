var fs = require('fs');
var sys = require('sys');

fs.readFile('todolist.txt', function(list) {
        sys.puts("What I have to do today: " + list);
        });

fs.writeFile('todolist.txt', "Write the introduction to node.js");
