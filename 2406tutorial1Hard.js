/*
Hello World example to serving string to client
*/
//To test use browser to view http://localhost:3000
//Cntl+C to stop server

var http = require('http');
var counter = 1000;

http.createServer(function (request,response){
   //respond to client
   response.writeHead(200, {'Content-Type': 'text/plain'});
   response.write('Hello\n');

 var urlString = request.url;
 var index = urlString.indexOf("?name=");
 if(index > 0) {


  var name = urlString.substring(index + "?name=".length, urlString.length);
index1 = name.indexOf("&")
if(index1 > 0 ){
  console.log("This name is big");
  name = name.substring(0,index1 );
}

  response.write(name + "\n");
  }
 else response.write('World\n');
   //end HTTP response and provide final data to send
   response.end("["+ counter++ + "]\n");
}).listen(3000, "127.0.0.1");
console.log('Server Running at http://127.0.0.1:3000  CNTL-C to quit');
console.log('To test with browser visit: http://localhost:3000');
console.log("hello");
