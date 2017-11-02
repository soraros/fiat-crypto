#include <stdint.h>
#include <stdbool.h>
#include <x86intrin.h>
#include "liblow.h"

#include "fesquare.h"

typedef unsigned int uint128_t __attribute__((mode(TI)));

#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__)||defined(__INTEL_COMPILER))
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=81294
#define _subborrow_u32 __builtin_ia32_sbb_u32
#define _subborrow_u64 __builtin_ia32_sbb_u64
#endif

#undef force_inline
#define force_inline __attribute__((always_inline))

void force_inline fesquare(uint64_t* out, uint64_t x15, uint64_t x16, uint64_t x14, uint64_t x12, uint64_t x10, uint64_t x8, uint64_t x6, uint64_t x4, uint64_t x2)
{  uint64_t x17 = (((uint64_t)x2 * x15) + ((0x2 * ((uint64_t)x4 * x16)) + (((uint64_t)x6 * x14) + (((uint64_t)x8 * x12) + ((0x2 * ((uint64_t)x10 * x10)) + (((uint64_t)x12 * x8) + (((uint64_t)x14 * x6) + ((0x2 * ((uint64_t)x16 * x4)) + ((uint64_t)x15 * x2)))))))));
{  ℤ x18 = ((((uint64_t)x2 * x16) + (((uint64_t)x4 * x14) + (((uint64_t)x6 * x12) + (((uint64_t)x8 * x10) + (((uint64_t)x10 * x8) + (((uint64_t)x12 * x6) + (((uint64_t)x14 * x4) + ((uint64_t)x16 * x2)))))))) +ℤ (((uint64_t)x15 * x15) + ((0x2 * ((uint64_t)x15 * x15)) + (0x10 * ((uint64_t)x15 * x15)))));
{  ℤ x19 = ((((uint64_t)x2 * x14) + ((0x2 * ((uint64_t)x4 * x12)) + ((0x2 * ((uint64_t)x6 * x10)) + (((uint64_t)x8 * x8) + ((0x2 * ((uint64_t)x10 * x6)) + ((0x2 * ((uint64_t)x12 * x4)) + ((uint64_t)x14 * x2))))))) +ℤ (((0x2 * ((uint64_t)x16 * x15)) + (0x2 * ((uint64_t)x15 * x16))) +ℤ ((0x2 * ((0x2 * ((uint64_t)x16 * x15)) + (0x2 * ((uint64_t)x15 * x16)))) +ℤ (0x10 *ℤ ((0x2 * ((uint64_t)x16 * x15)) + (0x2 * ((uint64_t)x15 * x16)))))));
{  ℤ x20 = ((((uint64_t)x2 * x12) + ((0x2 * ((uint64_t)x4 * x10)) + (((uint64_t)x6 * x8) + (((uint64_t)x8 * x6) + ((0x2 * ((uint64_t)x10 * x4)) + ((uint64_t)x12 * x2)))))) +ℤ ((((uint64_t)x14 * x15) + ((0x2 * ((uint64_t)x16 * x16)) + ((uint64_t)x15 * x14))) +ℤ ((0x2 * (((uint64_t)x14 * x15) + ((0x2 * ((uint64_t)x16 * x16)) + ((uint64_t)x15 * x14)))) +ℤ (0x10 *ℤ (((uint64_t)x14 * x15) + ((0x2 * ((uint64_t)x16 * x16)) + ((uint64_t)x15 * x14)))))));
{  ℤ x21 = ((((uint64_t)x2 * x10) + (((uint64_t)x4 * x8) + (((uint64_t)x6 * x6) + (((uint64_t)x8 * x4) + ((uint64_t)x10 * x2))))) +ℤ ((((uint64_t)x12 * x15) + (((uint64_t)x14 * x16) + (((uint64_t)x16 * x14) + ((uint64_t)x15 * x12)))) +ℤ ((0x2 * (((uint64_t)x12 * x15) + (((uint64_t)x14 * x16) + (((uint64_t)x16 * x14) + ((uint64_t)x15 * x12))))) +ℤ (0x10 *ℤ (((uint64_t)x12 * x15) + (((uint64_t)x14 * x16) + (((uint64_t)x16 * x14) + ((uint64_t)x15 * x12))))))));
{  ℤ x22 = ((((uint64_t)x2 * x8) + ((0x2 * ((uint64_t)x4 * x6)) + ((0x2 * ((uint64_t)x6 * x4)) + ((uint64_t)x8 * x2)))) +ℤ (((0x2 * ((uint64_t)x10 * x15)) + ((0x2 * ((uint64_t)x12 * x16)) + (((uint64_t)x14 * x14) + ((0x2 * ((uint64_t)x16 * x12)) + (0x2 * ((uint64_t)x15 * x10)))))) +ℤ ((0x2 *ℤ ((0x2 * ((uint64_t)x10 * x15)) + ((0x2 * ((uint64_t)x12 * x16)) + (((uint64_t)x14 * x14) + ((0x2 * ((uint64_t)x16 * x12)) + (0x2 * ((uint64_t)x15 * x10))))))) +ℤ (0x10 *ℤ ((0x2 * ((uint64_t)x10 * x15)) + ((0x2 * ((uint64_t)x12 * x16)) + (((uint64_t)x14 * x14) + ((0x2 * ((uint64_t)x16 * x12)) + (0x2 * ((uint64_t)x15 * x10))))))))));
{  ℤ x23 = ((((uint64_t)x2 * x6) + ((0x2 * ((uint64_t)x4 * x4)) + ((uint64_t)x6 * x2))) +ℤ ((((uint64_t)x8 * x15) + ((0x2 * ((uint64_t)x10 * x16)) + (((uint64_t)x12 * x14) + (((uint64_t)x14 * x12) + ((0x2 * ((uint64_t)x16 * x10)) + ((uint64_t)x15 * x8)))))) +ℤ ((0x2 *ℤ (((uint64_t)x8 * x15) + ((0x2 * ((uint64_t)x10 * x16)) + (((uint64_t)x12 * x14) + (((uint64_t)x14 * x12) + ((0x2 * ((uint64_t)x16 * x10)) + ((uint64_t)x15 * x8))))))) +ℤ (0x10 *ℤ (((uint64_t)x8 * x15) + ((0x2 * ((uint64_t)x10 * x16)) + (((uint64_t)x12 * x14) + (((uint64_t)x14 * x12) + ((0x2 * ((uint64_t)x16 * x10)) + ((uint64_t)x15 * x8))))))))));
{  ℤ x24 = ((((uint64_t)x2 * x4) + ((uint64_t)x4 * x2)) +ℤ ((((uint64_t)x6 * x15) + (((uint64_t)x8 * x16) + (((uint64_t)x10 * x14) + (((uint64_t)x12 * x12) + (((uint64_t)x14 * x10) + (((uint64_t)x16 * x8) + ((uint64_t)x15 * x6))))))) +ℤ ((0x2 * (((uint64_t)x6 * x15) + (((uint64_t)x8 * x16) + (((uint64_t)x10 * x14) + (((uint64_t)x12 * x12) + (((uint64_t)x14 * x10) + (((uint64_t)x16 * x8) + ((uint64_t)x15 * x6)))))))) +ℤ (0x10 *ℤ (((uint64_t)x6 * x15) + (((uint64_t)x8 * x16) + (((uint64_t)x10 * x14) + (((uint64_t)x12 * x12) + (((uint64_t)x14 * x10) + (((uint64_t)x16 * x8) + ((uint64_t)x15 * x6)))))))))));
{  ℤ x25 = (((uint64_t)x2 * x2) +ℤ (((0x2 * ((uint64_t)x4 * x15)) + ((0x2 * ((uint64_t)x6 * x16)) + (((uint64_t)x8 * x14) + ((0x2 * ((uint64_t)x10 * x12)) + ((0x2 * ((uint64_t)x12 * x10)) + (((uint64_t)x14 * x8) + ((0x2 * ((uint64_t)x16 * x6)) + (0x2 * ((uint64_t)x15 * x4))))))))) +ℤ ((0x2 *ℤ ((0x2 * ((uint64_t)x4 * x15)) + ((0x2 * ((uint64_t)x6 * x16)) + (((uint64_t)x8 * x14) + ((0x2 * ((uint64_t)x10 * x12)) + ((0x2 * ((uint64_t)x12 * x10)) + (((uint64_t)x14 * x8) + ((0x2 * ((uint64_t)x16 * x6)) + (0x2 * ((uint64_t)x15 * x4)))))))))) +ℤ (0x10 *ℤ ((0x2 * ((uint64_t)x4 * x15)) + ((0x2 * ((uint64_t)x6 * x16)) + (((uint64_t)x8 * x14) + ((0x2 * ((uint64_t)x10 * x12)) + ((0x2 * ((uint64_t)x12 * x10)) + (((uint64_t)x14 * x8) + ((0x2 * ((uint64_t)x16 * x6)) + (0x2 * ((uint64_t)x15 * x4)))))))))))));
{  uint64_t x26 = (x17 >> 0x1c);
{  uint32_t x27 = ((uint32_t)x17 & 0xfffffff);
{  uint64_t x28 = ((0x10000000 * x26) + x27);
{  uint64_t x29 = (x28 >> 0x1c);
{  uint32_t x30 = ((uint32_t)x28 & 0xfffffff);
{  uint64_t x31 = ((0x10000000 * x29) + x30);
{  uint64_t x32 = (x31 >> 0x1c);
{  uint32_t x33 = ((uint32_t)x31 & 0xfffffff);
{  uint64_t x34 = ((0x10000000 * x32) + x33);
{  uint64_t x35 = (x34 >> 0x1c);
{  uint32_t x36 = ((uint32_t)x34 & 0xfffffff);
{  ℤ x37 = (x25 +ℤ (x35 + ((0x2 * x35) + (0x10 * x35))));
{  uint64_t x38 = (x37 >> 0x1d);
{  uint32_t x39 = (x37 & 0x1fffffff);
{  ℤ x40 = (x38 +ℤ x24);
{  uint64_t x41 = (x40 >> 0x1c);
{  uint32_t x42 = (x40 & 0xfffffff);
{  ℤ x43 = (x41 +ℤ x23);
{  uint64_t x44 = (x43 >> 0x1c);
{  uint32_t x45 = (x43 & 0xfffffff);
{  ℤ x46 = (x44 +ℤ x22);
{  uint64_t x47 = (x46 >> 0x1d);
{  uint32_t x48 = (x46 & 0x1fffffff);
{  ℤ x49 = (x47 +ℤ x21);
{  uint64_t x50 = (x49 >> 0x1c);
{  uint32_t x51 = (x49 & 0xfffffff);
{  ℤ x52 = (x50 +ℤ x20);
{  uint64_t x53 = (x52 >> 0x1c);
{  uint32_t x54 = (x52 & 0xfffffff);
{  ℤ x55 = (x53 +ℤ x19);
{  uint64_t x56 = (x55 >> 0x1d);
{  uint32_t x57 = (x55 & 0x1fffffff);
{  ℤ x58 = (x56 +ℤ x18);
{  uint64_t x59 = (x58 >> 0x1c);
{  uint32_t x60 = (x58 & 0xfffffff);
{  uint64_t x61 = (x59 + x36);
{  uint32_t x62 = (uint32_t) (x61 >> 0x1c);
{  uint32_t x63 = ((uint32_t)x61 & 0xfffffff);
{  uint32_t x64 = (x39 + (x62 + ((0x2 * x62) + (0x10 * x62))));
{  uint32_t x65 = (x64 >> 0x1d);
{  uint32_t x66 = (x64 & 0x1fffffff);
{  uint32_t x67 = (x66 >> 0x1d);
{  uint32_t x68 = (x66 & 0x1fffffff);
{  uint32_t x69 = (x68 >> 0x1d);
{  uint32_t x70 = (x68 & 0x1fffffff);
out[0] = x63;
out[1] = x60;
out[2] = x57;
out[3] = x54;
out[4] = x51;
out[5] = x48;
out[6] = x45;
out[7] = x69 + x67 + x65 + x42;
out[8] = x70;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[9];