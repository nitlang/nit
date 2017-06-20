# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Multi precision integer and rational number using gmp lib
module gmp

private import native_gmp

redef class Numeric

    # The BigInt equivalent of `self`
    fun to_bi: BigInt do return self.to_i.to_bi

    # The Ratio equivalent of `self`
    fun to_r: Ratio do return self.to_f.to_r

end

redef class Text

    # Is `self` a well-formed BigInt (i.e. parsable via `to_bi`)
    #
    #     assert "123".is_bi
    #     assert "-123".is_bi
    #     assert not "0b1011".is_bi
    #     assert not "123u8".is_bi
    #     assert not "Not a BigInt".is_bi
    fun is_bi: Bool do
        var pre = prefix("-")
        if pre != null then
            return pre.text_after.is_dec
        else
            return is_dec
        end
    end

    # Is `self` a well-formed Ratio (i.e. parsable via `to_r`)
    #
    #     assert "123".is_r
    #     assert "-123".is_r
    #     assert "1/2".is_r
    #     assert "-1/2".is_r
    #     assert not "-1/-2".is_r
    #     assert not "0b1011".is_r
    #     assert not "123u8".is_r
    #     assert not "Not an Ratio".is_r
    fun is_r: Bool do
        var frac = split_once_on('/')
        if frac.length == 2 then
            return frac[0].is_bi and frac[1].is_dec
        else
            return is_bi
        end
    end

    # If `self` contains a BigInt, return the corresponding BigInt
    #
    #     assert("123".to_bi == 123.to_bi)
    #     assert("-123".to_bi == -123.to_bi)
    fun to_bi: BigInt do
        assert is_bi
        var tmp = new NativeMPZ
        tmp.set_str(self.to_cstring, 10i32)
        return new BigInt(tmp)
    end

    # If `self` contains a Ratio, return the corresponding Ratio
    #
    #     assert("123".to_r == 123.to_r)
    #     assert("-123".to_r == -123.to_r)
    #     assert("1/2".to_r == 0.5.to_r)
    #     assert("-1/2".to_r == -0.5.to_r)
    fun to_r: Ratio do
        assert is_r
        var tmp = new NativeMPQ
        tmp.set_str self.to_cstring
        return new Ratio(tmp)
    end
end

redef class Float
    redef fun to_bi do
        var tmp = new NativeMPZ
        tmp.set_d self
        return new BigInt(tmp)
    end

    redef fun to_r do
        var tmp = new NativeMPQ
        tmp.set_d self
        return new Ratio(tmp)
    end
end

redef class Int
    redef fun to_bi do
        var tmp = new NativeMPZ
        tmp.set_si self
        return new BigInt(tmp)
    end

    redef fun to_r do
        var tmp = new NativeMPQ
        tmp.set_si(self, 1)
        return new Ratio(tmp)
    end
end

# Multi precision Integer numbers.
class BigInt
    super Discrete
    super Numeric
    super FinalizableOnce

    redef type OTHER: BigInt

    private var val: NativeMPZ

    redef fun successor(i) do return self + i.to_bi
    redef fun predecessor(i) do return self - i.to_bi

    redef fun hash do return self.to_i

    redef fun <=>(i) do
        var res = val.cmp(i.val)
        if (res) < 0 then
            return -1
        else if (res) > 0 then
            return 1
        else
            return 0
        end
    end

    redef fun ==(i) do return i isa BigInt and (self <=> i) == 0
    redef fun <=(i) do return (self <=> i) <= 0
    redef fun <(i) do return (self <=> i) < 0
    redef fun >=(i) do return (self <=> i) >= 0
    redef fun >(i) do return (self <=> i) > 0


    #     assert(2.to_bi + 2.to_bi == 4.to_bi)
    redef fun +(i) do
        var res = new NativeMPZ
        val.add(res, i.val)
        return new BigInt(res)
    end

    #     assert(-(2.to_bi) == (-2).to_bi)
    redef fun - do
        var res = new NativeMPZ
        val.neg res
        return new BigInt(res)
    end

    #     assert(2.to_bi - 2.to_bi == 0.to_bi)
    redef fun -(i) do
        var res = new NativeMPZ
        val.sub(res, i.val)
        return new BigInt(res)
    end

    #     assert(2.to_bi * 2.to_bi == 4.to_bi)
    redef fun *(i) do
        var res = new NativeMPZ
        val.mul(res, i.val)
        return new BigInt(res)
    end

    #     assert(3.to_bi / 2.to_bi == 1.to_bi)
    redef fun /(i) do
        var res = new NativeMPZ
        val.tdiv_q(res, i.val)
        return new BigInt(res)
    end

    # Modulo of `self` with `i`.
    #
    # Finds the remainder of the division of `self` by `i`.
    #
    #     assert(5.to_bi % 2.to_bi == 1.to_bi)
    fun %(i: BigInt): BigInt do
        var res = new NativeMPZ
        val.mod(res, i.val)
        return new BigInt(res)
    end

    # Returns `self` raised to the power of `e`.
    #
    #     assert(3.to_bi ** 2 == 9.to_bi)
    fun **(e: Int): BigInt do
        var res = new NativeMPZ
        var pow = new UInt64
        pow.set_si e
        val.pow_ui(res, pow)
        pow.free
        return new BigInt(res)
    end

    # The absolute value of `self`.
    #
    #     assert((-3).to_bi.abs == 3.to_bi)
    fun abs: BigInt do
        var res = new NativeMPZ
        val.abs res
        return new BigInt(res)
    end

    # Returns the greatest common divisor of `self` and `i`
    #
    #     assert(15.to_bi.gcd(10.to_bi) == 5.to_bi)
    fun gcd(i: BigInt): BigInt do
        var res = new NativeMPZ
        val.gcd(res, i.val)
        return new BigInt(res)
    end

    # Determine if `self` is a prime number.
    # Return 2 if `self` is prime, return 1 if `self` is probably prime and
    # return 0 if `self` is definitely not a prime number.
    #
    # This function begins by trying some divisions with small number to find if
    # there is other factors then `self` and one. After that, it uses the
    # Miller-Rabin probabilistic primality tests. The probability of a non-prime
    # being identified as probably prime with that test is less than
    # `4^(-reps)`. It is recommended to use a `reps` value between 15 and 50.
    #
    #     assert((0x10001).to_bi.probab_prime(15) == 2)
    fun probab_prime(reps: Int): Int do
        return val.probab_prime_p(reps.to_i32)
    end

    # Return the next prime number greater than `self`.
    # This fonction uses a probabilistic algorithm.
    #
    #     assert(11.to_bi.next_prime == 13.to_bi)
    fun next_prime: BigInt do
        var res = new NativeMPZ
        val.nextprime res
        return new BigInt(res)
    end

    #     assert(11.to_bi.zero == 0.to_bi)
    redef fun zero do return new BigInt(new NativeMPZ)

    #     assert(11.to_bi.value_of(4) == 4.to_bi)
    redef fun value_of(i) do return i.to_bi

    #     assert(11.to_bi.to_i == 11)
    redef fun to_i do return val.get_si

    #     assert(11.to_bi.to_f == 11.0)
    redef fun to_f do return val.get_d

    #     assert(11.to_bi.to_s == "11")
    redef fun to_s do
        var cstr = val.get_str(10.to_i32)
        var str = cstr.to_s
        cstr.free
        return str
    end

    redef fun to_bi do return self

    #     assert(123.to_bi.to_r == 123.to_r)
    redef fun to_r do
        var tmp = new NativeMPQ
        tmp.set_z val
        return new Ratio(tmp)
    end

    #     assert(3.to_bi.distance(6.to_bi) == -3)
    redef fun distance(i) do return (self - i).to_i

    redef fun finalize_once do val.finalize
end

# Multi precision Rational numbers.
#
#     assert((0.2 + 0.1) == 0.30000000000000004)
#     assert(("1/5".to_r + "1/10".to_r) == "3/10".to_r)
class Ratio
    super Numeric
    super FinalizableOnce

    redef type OTHER: Ratio

    private var val: NativeMPQ

    redef fun hash do return self.to_i

    redef fun <=>(r) do
        var res = val.cmp(r.val)
        if (res) < 0 then
            return -1
        else if (res) > 0 then
            return 1
        else
            return 0
        end
    end

    redef fun ==(r) do return r isa Ratio and (self <=> r) == 0
    redef fun <=(r) do return (self <=> r) <= 0
    redef fun <(r) do return (self <=> r) < 0
    redef fun >=(r) do return (self <=> r) >= 0
    redef fun >(r) do return (self <=> r) > 0

    #     assert("3/2".to_r + "5/2".to_r == 4.to_r)
    redef fun +(r) do
        var res = new NativeMPQ
        val.add(res, r.val)
        return new Ratio(res)
    end

    #     assert( -("1/2".to_r) == ("-1/2").to_r)
    redef fun - do
        var res = new NativeMPQ
        val.neg res
        return new Ratio(res)
    end

    #     assert("5/2".to_r - "3/2".to_r == 1.to_r)
    redef fun -(r) do
        var res = new NativeMPQ
        val.sub(res, r.val)
        return new Ratio(res)
    end

    #     assert("3/2".to_r * 2.to_r == 3.to_r)
    redef fun *(r) do
        var res = new NativeMPQ
        val.mul(res, r.val)
        return new Ratio(res)
    end

    #     assert(3.to_r / 2.to_r == "3/2".to_r)
    redef fun /(r) do
        var res = new NativeMPQ
        val.div(res, r.val)
        return new Ratio(res)
    end

    # The absolute value of `self`.
    #
    #     assert((-3.to_r).abs == 3.to_r)
    #     assert(3.to_r.abs == 3.to_r)
    fun abs: Ratio do
        var res = new NativeMPQ
        val.abs res
        return new Ratio(res)
    end

    #     assert((3.to_r).zero == 0.to_r)
    redef fun zero do return new Ratio(new NativeMPQ)

    #     assert((3.to_r).value_of(2) == 2.to_r)
    redef fun value_of(n) do return n.to_r

    #     assert("7/2".to_r.to_i == 3)
    redef fun to_i do
        var res = new NativeMPZ
        val.numref.tdiv_q(res, val.denref)
        return res.get_si
    end

    #     assert(3.to_r.to_f == 3.0)
    redef fun to_f do return val.get_d

    #     assert(3.to_r.to_s == "3")
    redef fun to_s do
        var cstr = val.get_str(10i32)
        var str = cstr.to_s
        cstr.free
        return str
    end

    #     assert("7/2".to_r.to_bi == 3.to_bi)
    redef fun to_bi do
        var res = new NativeMPZ
        val.numref.tdiv_q(res, val.denref)
        return new BigInt(res)
    end

    redef fun to_r do return self

    redef fun finalize_once do val.finalize
end
