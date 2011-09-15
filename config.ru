require 'rack'
require 'ext/rackc'

#iun lambda { |env| 
#  puts env.inspect
#  [200, {'Content-Type'=>'text/plain'}, StringIO.new("Hello World!\n")] 
#}


run RackC
