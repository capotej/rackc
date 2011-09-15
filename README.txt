0. gem install rack
1. git clone the project
2. cd into ext/
3. run ruby extconf.rb
4. run make
5. cd back to root
6. run rackup
7. checkout http://localhost:9292


EXAMPLE RACK ENV HASH:

{"HTTP_HOST"=>"localhost:9292", "HTTP_ACCEPT"=>"*/*", "SERVER_NAME"=>"localhost", "REQUEST_PATH"=>"/", "rack.url_scheme"=>"http", "HTTP_USER_AGENT"=>"Mozilla/5.0 (Macintosh; Intel Mac OS X 10_7_1) AppleWebKit/535.1 (KHTML, like Gecko) Chrome/13.0.782.220 Safari/535.1", "REMOTE_HOST"=>"localhost.localdomain", "rack.errors"=>#<Rack::Lint::ErrorWrapper:0x101248bd0 @error=#<IO:0x1001c8a80>>, "HTTP_ACCEPT_LANGUAGE"=>"en-US,en;q=0.8", "SERVER_PROTOCOL"=>"HTTP/1.1", "rack.version"=>[1, 1], "rack.run_once"=>false, "SERVER_SOFTWARE"=>"WEBrick/1.3.1 (Ruby/1.8.7/2011-02-18)", "REMOTE_ADDR"=>"127.0.0.1", "PATH_INFO"=>"/favicon.ico", "SCRIPT_NAME"=>"", "HTTP_VERSION"=>"HTTP/1.1", "rack.multithread"=>true, "rack.multiprocess"=>false, "REQUEST_URI"=>"http://localhost:9292/favicon.ico", "HTTP_ACCEPT_CHARSET"=>"ISO-8859-1,utf-8;q=0.7,*;q=0.3", "SERVER_PORT"=>"9292", "REQUEST_METHOD"=>"GET", "rack.input"=>#<Rack::Lint::InputWrapper:0x101248c48 @input=#<StringIO:0x101250e70>>, "HTTP_ACCEPT_ENCODING"=>"gzip,deflate,sdch", "HTTP_CONNECTION"=>"keep-alive", "QUERY_STRING"=>"", "GATEWAY_INTERFACE"=>"CGI/1.1"}
