var http =  require('http');
mysql = require('mysql');


var connection  =  mysql.createConnection({
user:"root",
password:"root",
database:"veille_at",
});

connection.connect();

var query = connection.query('select * from variable LIMIT 10');
query.on('error', function(err){
   throw err;
    
    });
query.on('fields', function (fields){
    console.log(fields);
    });
query.on('result', function (row){
    console.log(row.name+ '::');
   console.log(row.value);
    
    });
