#!/usr/bin/env nit
#
# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain

# Task: Vigenère cipher
#
# See: <http://rosettacode.org/wiki/Vigenère_cipher>

module vignere_cipher

fun encrypt(src:String, key:String):String do
    var out = new Buffer
    var j:Int = 0

    for i in [0..src.length-1] do
        var c:Char = src[i]

        if c >= 'a' and c <= 'z' then
            c = c.to_upper
        else if c < 'A' or c > 'Z' then
            continue
        end

        out.add(((c.ascii + key[j].ascii - 2*'A'.ascii) % 26 + 'A'.ascii).ascii)
        j = (j + 1) % key.length
    end

    return out.write_to_string
end

fun decrypt(src:String, key:String):String do
    var out = new Buffer
    var j:Int = 0

    for i in [0..src.length-1] do
        var c:Char = src[i]

        if c >= 'a' and c <= 'z' then
            c = c.to_upper
        else if c < 'A' or c > 'Z' then
            continue
        end

        out.add(((c.ascii - key[j].ascii + 26) % 26 + 'A'.ascii).ascii)
        j = (j + 1) % key.length
    end

    return out.write_to_string
end

# Main part
var str:String = "All your base are belong to us"
var key:String = "CRYPTONIT"
var code:String = encrypt(str, key)
var decode:String = decrypt(code, key)

print "Text: " + str 
print "Key : " + key
print "Code: " + code
print "Back: " + decode
