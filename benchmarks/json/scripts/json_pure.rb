require 'json/pure'

txt = IO.read(ARGV.first)
my_hash = JSON.parse(txt)
