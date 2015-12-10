require 'json/ext'

txt = IO.read(ARGV.first)
my_hash = JSON.parse(txt)
