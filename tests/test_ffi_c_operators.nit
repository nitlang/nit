# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2011-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

class A
	var value: Int

	init(value: Int) do self.value = value

	fun +(other: A): A import value, A `{
		int s = A_value( self );
		int o = A_value( other );

		return new_A( s + o );
	`}

	fun +: A import value, A `{
		int s = A_value(self);
		return new_A(+s);
	`}

	fun -(other: A): A import value, A `{
		int s = A_value( self );
		int o = A_value( other );

		return new_A( s - o );
	`}

	fun -: A import value, A `{
		int s = A_value(self);
		return new_A(-s);
	`}

	fun *(by: Int): A import value, A `{
		int s = A_value( self );

		return new_A( s * by );
	`}

	fun /(by: Int): A import value, A `{
		int s = A_value( self );

		return new_A( s / by );
	`}

	redef fun ==(other) import value, nullable Object.as(A) `{
		if ( nullable_Object_is_a_A( other ) &&
			 A_value( nullable_Object_as_A(other) ) == A_value( self ) )
			return 1;
		else
			return 0;
	`}

	fun %(other: A): A import value, A `{
		return new_A( A_value( self ) % A_value( other ) );
	`}

	fun <=>(other: A): A import value, A `{
		return new_A( A_value( self )* 1024 );
	`}

	fun >(other: A): Bool import value `{
		return A_value( self ) > A_value( other );
	`}

	fun <(other: A): Bool import value `{
		return A_value( self ) < A_value( other );
	`}

	fun >=(other: A): Bool import value `{
		return A_value( self ) >= A_value( other );
	`}

	fun <=(other: A): Bool import value `{
		return A_value( self ) <= A_value( other );
	`}

	fun >>(other: A): A import value, value=, A `{
		int new_val = A_value( self ) >> A_value( other );
		return new_A(new_val);
	`}

	fun <<(other: A): A import value, A `{
		int new_val = A_value( self ) << A_value( other );
		return new_A(new_val);
	`}

	fun |(other: A): A import value, A `{
		int new_val = A_value( self ) | A_value( other );
		return new_A(new_val);
	`}

	fun ^(other: A): A import value, A `{
		int new_val = A_value( self ) ^ A_value( other );
		return new_A(new_val);
	`}

	fun ~: A import value, A `{
		int new_val = ~A_value( self );
		return new_A(new_val);
	`}

	fun &(other: A): A import value, A `{
		int new_val = A_value( self ) & A_value( other );
		return new_A(new_val);
	`}

	fun [](index: Int): A import A `{
		return new_A( index );
	`}

	fun []=(index: Int, value: A): A import A `{
		return new_A( index + A_value( value ) );
	`}

	redef fun to_s do return value.to_s
end

print new A(1) + new A(10) # 11
print +new A(123)
print new A(10) - new A(1) # 9
print -new A(123)

print new A(2) * 11 # 22
print new A(33) / 11 # 3

print new A(44) == null # false
print new A(55) == 55 # false
print new A(33) == new A(11) # false
print new A(22) == new A(77) # false
print new A(11) == new A(11) # true

print new A(147) % new A(12) # 3
print new A(4) <=> new A(123) # 4096

print new A(1) < new A(100) # true
print new A(100) < new A(100) # false
print new A(100) < new A(1) # false

print new A(1) > new A(100) # false
print new A(100) > new A(100) # false
print new A(100) > new A(1) # true

print new A(1) <= new A(100) # true
print new A(100) <= new A(100) # true
print new A(100) <= new A(1) # false

print new A(1) >= new A(100) # false
print new A(100) >= new A(100) # true
print new A(100) >= new A(1) # true

print new A(1) << new A(5) # 32
print new A(32) >> new A(2) # 8

print new A(3) | new A(6) # 7
print new A(3) ^ new A(6) # 5
print new A(3) & new A(6) # 2
print ~new A(3) # -4

var a = new A(456)
print a[52] # 52

a[74] = new A(96)
print a # 96
