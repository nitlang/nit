# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module test_native_gmp is test

import native_gmp

class TestNativeMPZ
	test

    var op1: NativeMPZ
    var op2: NativeMPZ
    var ui: UInt64
    var r: NativeMPQ
    var res: NativeMPZ

    fun before_test is before do
        op1 = new NativeMPZ
        op2 = new NativeMPZ
        ui = new UInt64
        r = new NativeMPQ
        res = new NativeMPZ
    end

    fun after_test is after do
        op1.finalize
        op2.finalize
        ui.free
        r.finalize
        res.finalize
    end

    fun test_add do
        op1.set_si 10
        op2.set_si 20
        op1.add(res, op2)
        assert(res.cmp_si(30) == 0)
    end

    fun test_add_ui do
        op1.set_si 10
        ui.set_si 20
        op1.add_ui(res, ui)
        assert(res.cmp_si(30) == 0)
    end

    fun test_sub do
        op1.set_si 30
        op2.set_si 20
        op1.sub(res, op2)
        assert(res.cmp_si(10) == 0)
    end

    fun test_sub_ui do
        op1.set_si 30
        ui.set_si 20
        op1.sub_ui(res, ui)
        assert(res.cmp_si(10) == 0)
    end

    fun test_mul do
        op1.set_si 10
        op2.set_si 2
        op1.mul(res, op2)
        assert(res.cmp_si(20) == 0)
    end

    fun test_mul_si do
        op1.set_si 2
        op1.mul_si(res, 20)
        assert(res.cmp_si(40) == 0)
    end

    fun test_neg do
        op1.set_si 10
        op1.neg(res)
        assert(res.cmp_si(-10) == 0)
    end

    fun test_abs do
        op1.set_si -10
        op1.abs(res)
        assert(res.cmp_si(10) == 0)
    end

    fun test_tdiv_q do
        op1.set_si 11
        op2.set_si 2
        op1.tdiv_q(res, op2)
        assert(res.cmp_si(5) == 0)
    end

    fun test_tdiv_q_ui do
        op1.set_si 20
        ui.set_si 20
        op1.tdiv_q_ui(res, ui)
        assert(res.cmp_si(1) == 0)
    end

    fun test_mod do
        op1.set_si 11
        op2.set_si 2
        op1.mod(res, op2)
        assert(res.cmp_si(1) == 0)
    end

    fun test_mod_ui do
        op1.set_si 20
        ui.set_si 20
        op1.mod_ui(res, ui)
        assert(res.cmp_si(0) == 0)
    end

    fun test_probab_prime_p do
        op1.set_si 11
        assert(op1.probab_prime_p(10i32) == 2)
    end

    fun test_nextprime do
        op1.set_si 7
        op1.nextprime res
        assert(res.cmp_si(11) == 0)
    end

    fun test_gcd do
        op1.set_si 12
        op2.set_si 8
        op1.gcd(res, op2)
        assert(res.cmp_si(4) == 0)
    end

    fun test_gcd_ui do
        op1.set_si 30
        ui.set_si 20
        op1.gcd_ui(res, ui)
        assert(res.cmp_si(10) == 0)
    end

    fun test_cmp do
        op1.set_si 12
        op2.set_si 12
        assert(op1.cmp(op2) == 0)
    end

    fun test_cmp_si do
        op1.set_si 30
        assert(op1.cmp_si(30) == 0)
    end

    fun test_set do
        op1.set_si 12
        op2.set op1
        assert(op1.cmp(op2) == 0)
    end

    fun test_set_si do
        op1.set_si 30
        assert(op1.cmp_si(30) == 0)
    end

    fun test_set_d do
        op1.set_d 3.0
        assert(op1.cmp_si(3) == 0)
    end

    fun test_set_q do
        r.set_si(30, 1)
        op1.set_q r
        assert(op1.cmp_si(30) == 0)
    end

    fun test_set_str do
        op1.set_str("30".to_cstring, 10i32)
        assert(op1.cmp_si(30) == 0)
    end

    fun test_swap do
        op1.set_si 10
        op2.set_si 20
        op1.swap op2
        assert(op1.cmp_si(20) == 0 and op2.cmp_si(10) == 0)
    end

    fun test_get_si do
        op1.set_si 12
        assert(op1.get_si == 12)
    end

    fun test_get_d do
        op1.set_si 12
        assert(op1.get_d == 12.0)
    end

    fun test_get_str do
        op1.set_si 12
        assert(op1.get_str(10i32).to_s == "12")
    end
end

class TestNativeMPQ
	test

    var op1: NativeMPQ
    var op2: NativeMPQ
    var l: NativeMPZ
    var res: NativeMPQ

    fun before_test is before do
        op1 = new NativeMPQ
        op2 = new NativeMPQ
        l = new NativeMPZ
        res = new NativeMPQ
    end

    fun after_test is after do
        op1.finalize
        op2.finalize
        l.finalize
        res.finalize
    end

    fun test_add do
        op1.set_si(10, 3)
        op2.set_si(20, 3)
        op1.add(res, op2)
        assert(res.cmp_si(10, 1) == 0)
    end

    fun test_sub do
        op1.set_si(20, 3)
        op2.set_si(10, 3)
        op1.sub(res, op2)
        assert(res.cmp_si(10, 3) == 0)
    end

    fun test_mul do
        op1.set_si(10, 3)
        op2.set_si(10, 1)
        op1.mul(res, op2)
        assert(res.cmp_si(100, 3) == 0)
    end

    fun test_div do
        op1.set_si(10, 3)
        op2.set_si(2, 1)
        op1.div(res, op2)
        assert(res.cmp_si(5, 3) == 0)
    end

    fun test_neg do
        op1.set_si(10, 3)
        op1.neg(res)
        assert(res.cmp_si(-10, 3) == 0)
    end

    fun test_abs do
        op1.set_si(-10, 3)
        op1.abs(res)
        assert(res.cmp_si(10, 3) == 0)
    end

    fun test_inv do
        op1.set_si(10, 3)
        op1.inv(res)
        assert(res.cmp_si(3, 10) == 0)
    end

    fun test_set do
        op1.set_si(10, 3)
        res.set op1
        assert(res.cmp(op1) == 0)
    end

    fun test_set_z do
        l.set_si 10
        res.set_z l
        assert(res.cmp_si(10, 1) == 0)
    end

    fun test_set_si do
        res.set_si(10, 3)
        assert(res.cmp_si(10, 3) == 0)
    end

    fun test_set_d do
        res.set_d(0.5)
        assert(res.cmp_si(1, 2) == 0)
    end

    fun test_set_str do
        res.set_str "1/2".to_cstring
        assert(res.cmp_si(1, 2) == 0)
    end

    fun test_swap do
        op1.set_si(10, 3)
        res.swap(op1)
        assert(res.cmp_si(10, 3) == 0)
    end

    fun test_get_d do
        res.set_si(1, 2)
        assert(res.get_d == 0.5)
    end

    fun test_get_str do
        res.set_si(1, 2)
        assert(res.get_str(10i32).to_s == "1/2")
    end

    fun test_cmp do
        op1.set_si(10, 3)
        op2.set_si(10, 3)
        assert(op1.cmp(op2) == 0)
    end

#    fun test_cmp_z do
#        op1.set_si(10, 1)
#        l.set_si 10
#        assert(op1.cmp_z(l) == 0)
#    end

    fun test_cmp_si do
        op1.set_si(10, 3)
        assert(op1.cmp_si(10, 3) == 0)
    end

    fun test_equal do
        op1.set_si(10, 3)
        op2.set_si(10, 3)
        assert op1.equal(op2)
    end

    fun test_numref do
        op1.set_si(10, 3)
        l.set_si 10
        assert(op1.numref.cmp(l) == 0)
    end

    fun test_denref do
        op1.set_si(10, 3)
        l.set_si 3
        assert(op1.denref.cmp(l) == 0)
    end
end
