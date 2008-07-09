# This file is part of Nit Language ( http://nitlanguage.org ).
#
# Copyright 2008 Etienne M. Gagnon <egagnon@j-meg.com>
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

package glob

{ A glob is a string pattern where:
   "*" is 0 or more character except "/" (cannot be adjacent to another "*")
   "**/" is 0 or more directory levels (must be preceded by "/" or the start)
   "?" : any character except "/"

Examples:

   "**/*.prm" => any *.prm file in current directory or below
   "/**/*.nit" => any *.nit file in the entire file system
   "src/**/*.bak" => any *.bak file in the src subdirectory
   "a**/" => invalid glob (instead, you might want to write "a*/**/")
   "a?*/" => any direct subdirectory that starts with an "a",
             and is at least 2 characters long

Usage

  printn("toto".match_glob("t*o")) # prints => true
}#

class Glob

  # class that encapsulates a glob pattern

  var _chars = new Array[GlobChar]

    # the glob-chars of the pattern

  var _string : String
    delegate to_s

    # cached string representation

  init(pattern: String)
    with error(message: String)
      is final

    # contructor that expects the glob is a string

    # calls error when the glob string is invalid

  do
    _string = string

    if not pattern.valid_glob then
      error("invalid glob pattern")
    end

    var star_seen = false
    for c in pattern.chars do
      if star_seen then
        if c == '*' then
          _chars.add(dstar)
        else
          _chars.add('*')
          _chars.add(c)
        end

        star_seen = false

      else if c == '*' then
        star_seen = true

      else
        _chars.add(c)
      end
    end
  end

  fun match(string: String): boolean
  do
    var pat_pos = new GlobPosition(_chars)
    var str_pos = new StringPosition(string.chars)

    pat_pos.match(str_pos)
    on success do return true

    return false
  end
end

redef String

  fun match_glob(pattern: String): Bool
    with error(message: String)
      is final

    # returns true if self matches the given glob pattern

    # calls error when the glob pattern is invalid

  do
    var pat = new Glob(pattern)
    on error(message) do error(message)

    return pat.match(self)
  end

  fun valid_glob: Bool
    is private

    # returns true if self is a valid glob

  do
    var state = state0

    for c in chars do
      state = state.target(c.to_symbol)
      if state == null then return false
    end

    return state.accept
  end
end

redef Char
  special GlobChar

  # Char has a new super class

  fun to_symbol: Symbol
    is private

    # converts self into a Symbol

  do
    if self == '/' then return slash
    if self == '*' then return star
    if self == '?' then return qmark
    return other
  end
end

class GlobChar
  is private
  is universal

  # super class of Char, which has an additional constant for '**'

  const dstar

    # the constant for '**'

end

class Position
  is private

  # class that encapsulate a position

  var _pos: Int = 0

  fun next do _pos += 1
  fun prev do _pos -= 1
end

class GlobPosition
  special Position
  is private

  # class that encapsulate a position in a pattern

  var _chars: Array[GlobChar]
end

class StringPosition
  special Position
  is private

  # class that encapsulate a position in a string

  var _chars: Array[Char]

  fun match(pattern: GlobPosition)
    with success
      is final

    # match the rest of this string with the rest of the given pattern

    # calls success when there is a match

    # the implemented algorithm does a recursive exhaustive search
    # until a match is found.

  do
    if _pos == _chars.len then
      # end of string

      if pattern._pos == pattern._chars.len then success

      # not end of pattern

      var pc = pattern._chars[pattern._pos]
      if pc == '*' or pc == dstar or pc == '/' then
        pattern.next
        match(pattern)
        pattern.prev
      end

    else if pattern._pos != pattern._chars.len then
      # not end of pattern

      var sc = _chars[_pos]
      var pc = pattern._chars[pattern._pos]
      if pc == dstar then
        if sc == '/' then
          pattern.next
          match(pattern)
          pattern.prev
        else
          next
          match(pattern)
          prev
        end

      else if pc == '*' then
        pattern.next
        match(pattern)
        pattern.prev
        next
        match(pattern)
        prev

      else if pc == '?' or sc == pc then
        pattern.next
        next
        match(pattern)
        prev
        pattern.prev
      end
    end
  end
end

#
# Automaton for Glob validation
#

class State
  is private
  is universal

  # automaton state class

  const state0, state1, state2, state3, state4, state5, state6

    # states of the automaton

  fun target(symbol: Symbol): nullable State

    # returns the target state, given a symbol

  case state0 do return symbol.state0_target
  case state1 do return symbol.state1_target
  case state2 do return symbol.state2_target
  case state3 do return symbol.state3_target
  case state4 do return symbol.state4_target
  case state5 do return symbol.state5_target
  case state6 do return symbol.state6_target
  default do abort

  fun accept: Bool

    # returns true if self is an accept state

  case state5 do return false
  default do return true
end

class Symbol
  is private
  is universal

  # automaton symbol class

  const slash, star, qmark, other

  fun state0_target: nullable State

    # returns the target of state0 (start)

  case slash do return state1
  case star do return state2
  case qmark do return state3
  case other do return state4
  default do return null

  fun state1_target: nullable State

    # returns the target of state1 (".../")

  case star do return state2
  case qmark do return state3
  case other do return state4
  default do return null

  fun state2_target: nullable State

    # returns the target of state2 (".../*")

  case slash do return state1
  case star do return state5
  case qmark do return state3
  case other do return state4
  default do return null

  fun state3_target: nullable State

    # returns the target of state3 ("...?")

  case slash do return state1
  case star do return state6
  case qmark do return state3
  case other do return state4
  default do return null

  fun state4_target: nullable State

    # returns the target of state4 ("...o")

  case slash do return state1
  case star do return state6
  case qmark do return state3
  case other do return state4
  default do return null

  fun state5_target: nullable State

    # returns the target of state5 (".../**")

  case slash do return state1
  default do return null

  fun state6_target: nullable State

    # returns the target of state6 ("...o*" or "...?*")

  case slash do return state1
  case qmark do return state3
  case other do return state4
  default do return null
end
