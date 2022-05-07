import http.server
import socketserver
class MyHttpRequestHandler(http.server.SimpleHTTPRequestHandler):
    def do_GET(self):
            if self.path == '/':
                self.path ='form.html'
            return http.server.SimpleHTTPRequestHandler.do_GET(self)

# Create an object of the above class
handler_object = MyHttpRequestHandler

PORT = 8080
my_server = socketserver.TCPServer(("127.0.0.1", PORT), handler_object)
# Star the server
my_server.serve_forever()

