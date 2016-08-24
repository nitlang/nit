# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Serialiation to and from ASCII characters
module serialize

interface Serializable
    # serializes the object in the buffer
    fun dump_to(buffer: Buffer) is abstract
end

redef class Int
    super Serializable

    # serializes where the 1st char is the length of the number.to_s, folled by data
    # current limitation, does not support ints longer than 9 chars in decimals
    # TODO implement in hex or better
    redef fun dump_to( buffer )
    do
        var s = self.to_s
        var l

        if s.length > 9 then
            l = 9
            abort
        else l = s.length

        buffer.append( l.to_s )
        buffer.append( s.substring( 0, 9 ) )
    end
end

redef class Bool
    super Serializable

    # serializes to 't' if true, else 'f'
    redef fun dump_to( buffer )
    do
        if self then
            buffer.append( "t" )
        else
            buffer.append( "f" )
        end
    end
end

redef class Float
    super Serializable

    # serializes where the 1st char is the length of the number.to_s, folled by data
    # current limitation, does not support floats longer than 9 chars in decimals
    # TODO implement in hex or better
    redef fun dump_to( buffer )
    do
        var s = self.to_s
        var l

        if s.length > 9 then
            l = 9
        else l = s.length

        buffer.append( l.to_s )
        buffer.append( s.substring( 0, 9 ) )
    end
end

redef class String
    super Serializable

    # serializes first the length of the string, then the data
    redef fun dump_to( buffer )
    do
        length.dump_to( buffer )
        buffer.append( self )
    end
end

redef class Sequence[ E ]
    super Serializable

    # serializes first the length of the array, then the data
    redef fun dump_to( buffer )
    do
        length.dump_to( buffer )
        for e in self do
            if e isa Serializable then
                e.dump_to( buffer )
            end
        end
    end

    # uses a closure
    # change to inits when constructor specialisation is available
    fun fill_from( stream: DeserializationStream ) !const( s: DeserializationStream ): E
    do
        #print "filling list"
        var count = stream.read_int
        #print "count {count}"

        for i in [ 0 .. count [ do
            var e = const( stream )
            add( e )
        end
    end

    # uses a closure
    # change to inits when constructor specialisation is available
    fun fill_from_not_null( stream: DeserializationStream ) !const( s: DeserializationStream ): nullable E
    do
        var count = stream.read_int

        for i in [ 0 .. count [ do
            var e = const( stream )
            if e != null then add( e )
        end
    end
end

# disabled, using Buffer for now
interface SerializationStream
end

redef class Buffer
	super SerializationStream
end

# stream used for deserialization of objects
class DeserializationStream

    # reads from stream
    fun read( count: Int ): String is abstract

    # peaks ahead on stream without moving pointer
    fun peak( count: Int ): String is abstract

    # is at end of file?
    fun eof: Bool is abstract

    # reads an Int from the stream
    # must be defined here since Int's cannot have inits
    # move when they have gets or something similar
    fun read_int: Int
    do
        var s = read( 1 )
        var size = s.to_i

        var i = read( size )

        return i.to_i
    end

    # reads a Float from the stream
    fun read_float: Float
    do
        var s = read( 1 )
        var size = s.to_i

        var i = read( size )
        return i.to_f
    end

    # reads a Bool from the stream
    fun read_bool: Bool
    do
        var s = read( 1 )

        if s == "t" then
            return true
        else if s == "f" then
            return false
        else
            print "Failed to deserialize \'{s}\' to Bool."
            abort
        end
    end

    # reads a String from the stream
    fun read_string: String
    do
        var size = read_int
        var s = read( size )
        return s
    end
end

# minimal implementation of DeserializationStream using a string as buffer
# not to be used in production
class StringDeserializationStream
    super DeserializationStream

    private var str: String
    private var position = 0

    init ( s: String )
    do
        str = s
    end

    redef fun read(count)
    do
        var r = peak(count)
        position += count
        return r
    end

    redef fun peak(count) do return str.substring(position, count)

    redef fun eof do return position >= str.length
end
