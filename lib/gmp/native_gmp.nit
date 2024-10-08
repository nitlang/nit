# This file is part of NIT ( https://nitlanguage.org ).
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

# Low-level GMP features
module native_gmp is ldflags("-lgmp")

in "C header" `{
    #include <gmp.h>
`}

# Multi precision Integer
extern class NativeMPZ `{mpz_ptr`}

    # Initializing

    new `{
        mpz_ptr self =  (mpz_ptr)malloc(sizeof(mpz_t));
        mpz_init(self);
        return self;
    `}

    # Arithmetic Functions

    fun add(res, op: NativeMPZ) `{
        mpz_add(res, self, op);
    `}

    fun add_ui(res: NativeMPZ, op: UInt64) `{
        mpz_add_ui(res, self, *op);
    `}

    fun sub(res, op: NativeMPZ) `{
        mpz_sub(res, self, op);
    `}

    fun sub_ui(res: NativeMPZ, op: UInt64) `{
        mpz_sub_ui(res, self, *op);
    `}

    fun mul(res, op: NativeMPZ) `{
        mpz_mul(res, self, op);
    `}

    fun mul_si(res: NativeMPZ, op: Int) `{
        mpz_mul_si(res, self, op);
    `}

    fun neg(res: NativeMPZ) `{
        mpz_neg(res, self);
    `}

    fun abs(res: NativeMPZ) `{
        mpz_abs(res, self);
    `}

    fun tdiv_q(res, op: NativeMPZ) `{
        mpz_tdiv_q(res, self, op);
    `}

    fun tdiv_q_ui(res: NativeMPZ, op: UInt64) `{
        mpz_tdiv_q_ui(res, self, *op);
    `}

    fun mod(res, op: NativeMPZ) `{
        mpz_mod(res, self, op);
    `}

    fun mod_ui(res: NativeMPZ, op: UInt64) `{
        mpz_mod_ui(res, self, *op);
    `}

    fun pow_ui(res: NativeMPZ, op: UInt64) `{
        mpz_pow_ui(res, self, *op);
    `}

    #Number Theoretic Functions

    fun probab_prime_p(reps: Int32): Int `{
        return mpz_probab_prime_p(self, reps);
    `}

    fun nextprime(res: NativeMPZ) `{
        mpz_nextprime(res, self);
    `}

    fun gcd(res, op: NativeMPZ) `{
        mpz_gcd(res, self, op);
    `}

    fun gcd_ui(res: NativeMPZ, op: UInt64) `{
        mpz_gcd_ui(res, self, *op);
    `}

    # Comparison Functions

    fun cmp(op: NativeMPZ): Int `{
        return mpz_cmp(self, op);
    `}

    fun cmp_si(op: Int): Int `{
        return mpz_cmp_si(self, op);
    `}

    # Assignment

    fun set(op: NativeMPZ) `{ mpz_set(self, op); `}

    fun set_si(op: Int) `{ mpz_set_si(self, op); `}

    fun set_d(op: Float) `{ mpz_set_d(self, op); `}

    fun set_q(op: NativeMPQ) `{ mpz_set_q(self, op); `}

    fun set_str(str: CString, base: Int32) `{
        mpz_set_str(self, str, base);
    `}

    fun swap(op: NativeMPZ) `{ mpz_swap(self, op); `}

    # Conversion Functions

    fun get_si: Int `{ return mpz_get_si(self); `}

    fun get_d: Float `{ return mpz_get_d(self); `}

    fun get_str(base: Int32): CString `{
        return mpz_get_str(NULL, base, self);
    `}

    # Delete this NativeMPZ
    fun finalize `{
        mpz_clear(self);
        free(self);
    `}
end

# Multi precision Rational
extern class NativeMPQ `{mpq_ptr`}

    # Initializing

    new `{
        mpq_ptr self = (mpq_ptr)malloc(sizeof(mpq_t));
        mpq_init(self);
        return self;
    `}

    # Arithmetic Functions

    fun add(res, op: NativeMPQ) `{
        mpq_add(res, self, op);
    `}

    fun sub(res, op: NativeMPQ) `{
        mpq_sub(res, self, op);
    `}

    fun mul(res, op: NativeMPQ) `{
        mpq_mul(res, self, op);
    `}

    fun div(res, op: NativeMPQ) `{
        mpq_div(res, self, op);
    `}

    fun neg(res: NativeMPQ) `{
        mpq_neg(res, self);
    `}

    fun abs(res: NativeMPQ) `{
        mpq_abs(res, self);
    `}

    fun inv(res: NativeMPQ) `{
        mpq_inv(res, self);
    `}

    # Assignment

    fun set(op: NativeMPQ) `{ mpq_set(self, op); `}

    fun set_z(op: NativeMPZ) `{ mpq_set_z(self, op); `}

    fun set_si(op1: Int, op2: Int) `{
        mpq_set_si(self, op1, op2);
        mpq_canonicalize(self);
    `}

    fun set_d(op: Float) `{ mpq_set_d(self, op); `}

    fun set_str(str: CString) `{
        mpq_set_str(self, str, 10);
        mpq_canonicalize(self);
    `}

    fun swap(op: NativeMPQ) `{ mpq_swap(self, op); `}

    # Convertion Functions

    fun get_d: Float `{ return mpq_get_d(self); `}

    fun get_str(base: Int32): CString `{
        return mpq_get_str(NULL, base, self);
    `}

    # Comparison Functions

    fun cmp(op: NativeMPQ): Int `{
        return mpq_cmp(self, op);
    `}

#    fun cmp_z(op: NativeMPZ): Int `{
#        return mpq_cmp_z(self, op);
#    `}

    fun cmp_si(num: Int, den: Int): Int `{
        return mpq_cmp_si(self, num, den);
    `}

    fun equal(op: NativeMPQ): Bool `{
        return mpq_equal(self, op);
    `}

    # Getter

    fun numref: NativeMPZ `{
        return mpq_numref(self);
    `}

    fun denref: NativeMPZ `{
        return mpq_denref(self);
    `}

    # Delete this NativeMPZ
    fun finalize `{
        mpq_clear(self);
        free(self);
    `}
end

# Boxing of C Unsigned Long
extern class UInt64 `{ uint64_t* `}
    new `{
        uint64_t *self = (uint64_t*)malloc(sizeof(uint64_t));
        return self;
    `}

    fun set_si(val: Int) `{
        *self = (uint64_t)val;
    `}
end
