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

void force_inline fesquare(uint64_t* out, uint64_t x29, uint64_t x30, uint64_t x28, uint64_t x26, uint64_t x24, uint64_t x22, uint64_t x20, uint64_t x18, uint64_t x16, uint64_t x14, uint64_t x12, uint64_t x10, uint64_t x8, uint64_t x6, uint64_t x4, uint64_t x2)
{  ℤ x31 = (((uint64_t)x2 * x29) +ℤ ((0x2 * ((uint64_t)x4 * x30)) +ℤ ((0x2 * ((uint64_t)x6 * x28)) +ℤ (((uint64_t)x8 * x26) +ℤ (((uint64_t)x10 * x24) +ℤ ((0x2 * ((uint64_t)x12 * x22)) + ((0x2 * ((uint64_t)x14 * x20)) + (((uint64_t)x16 * x18) + (((uint64_t)x18 * x16) + ((0x2 * ((uint64_t)x20 * x14)) + ((0x2 * ((uint64_t)x22 * x12)) + (((uint64_t)x24 * x10) + (((uint64_t)x26 * x8) + ((0x2 * ((uint64_t)x28 * x6)) + ((0x2 * ((uint64_t)x30 * x4)) + ((uint64_t)x29 * x2))))))))))))))));
{  ℤ x32 = ((((uint64_t)x2 * x30) +ℤ ((0x2 * ((uint64_t)x4 * x28)) +ℤ (((uint64_t)x6 * x26) +ℤ (((uint64_t)x8 * x24) + (((uint64_t)x10 * x22) + ((0x2 * ((uint64_t)x12 * x20)) + (((uint64_t)x14 * x18) + (((uint64_t)x16 * x16) + (((uint64_t)x18 * x14) + ((0x2 * ((uint64_t)x20 * x12)) + (((uint64_t)x22 * x10) + (((uint64_t)x24 * x8) + (((uint64_t)x26 * x6) + ((0x2 * ((uint64_t)x28 * x4)) + ((uint64_t)x30 * x2))))))))))))))) +ℤ (0x3 * ((uint64_t)x29 * x29)));
{  ℤ x33 = ((((uint64_t)x2 * x28) + (((uint64_t)x4 * x26) + (((uint64_t)x6 * x24) + (((uint64_t)x8 * x22) + (((uint64_t)x10 * x20) + (((uint64_t)x12 * x18) + (((uint64_t)x14 * x16) + (((uint64_t)x16 * x14) + (((uint64_t)x18 * x12) + (((uint64_t)x20 * x10) + (((uint64_t)x22 * x8) + (((uint64_t)x24 * x6) + (((uint64_t)x26 * x4) + ((uint64_t)x28 * x2)))))))))))))) +ℤ (0x3 * (((uint64_t)x30 * x29) + ((uint64_t)x29 * x30))));
{  ℤ x34 = ((((uint64_t)x2 * x26) +ℤ ((0x2 * ((uint64_t)x4 * x24)) +ℤ ((0x2 * ((uint64_t)x6 * x22)) +ℤ ((0x2 * ((uint64_t)x8 * x20)) +ℤ (((uint64_t)x10 * x18) +ℤ ((0x2 * ((uint64_t)x12 * x16)) + ((0x2 * ((uint64_t)x14 * x14)) + ((0x2 * ((uint64_t)x16 * x12)) + (((uint64_t)x18 * x10) + ((0x2 * ((uint64_t)x20 * x8)) + ((0x2 * ((uint64_t)x22 * x6)) + ((0x2 * ((uint64_t)x24 * x4)) + ((uint64_t)x26 * x2))))))))))))) +ℤ (0x3 * ((0x2 * ((uint64_t)x28 * x29)) + ((0x2 * ((uint64_t)x30 * x30)) + (0x2 * ((uint64_t)x29 * x28))))));
{  ℤ x35 = ((((uint64_t)x2 * x24) +ℤ ((0x2 * ((uint64_t)x4 * x22)) + ((0x2 * ((uint64_t)x6 * x20)) + (((uint64_t)x8 * x18) + (((uint64_t)x10 * x16) + ((0x2 * ((uint64_t)x12 * x14)) + ((0x2 * ((uint64_t)x14 * x12)) + (((uint64_t)x16 * x10) + (((uint64_t)x18 * x8) + ((0x2 * ((uint64_t)x20 * x6)) + ((0x2 * ((uint64_t)x22 * x4)) + ((uint64_t)x24 * x2)))))))))))) +ℤ (0x3 *ℤ (((uint64_t)x26 * x29) + ((0x2 * ((uint64_t)x28 * x30)) + ((0x2 * ((uint64_t)x30 * x28)) + ((uint64_t)x29 * x26))))));
{  ℤ x36 = ((((uint64_t)x2 * x22) + ((0x2 * ((uint64_t)x4 * x20)) + (((uint64_t)x6 * x18) + (((uint64_t)x8 * x16) + (((uint64_t)x10 * x14) + ((0x2 * ((uint64_t)x12 * x12)) + (((uint64_t)x14 * x10) + (((uint64_t)x16 * x8) + (((uint64_t)x18 * x6) + ((0x2 * ((uint64_t)x20 * x4)) + ((uint64_t)x22 * x2))))))))))) +ℤ (0x3 *ℤ (((uint64_t)x24 * x29) + (((uint64_t)x26 * x30) + ((0x2 * ((uint64_t)x28 * x28)) + (((uint64_t)x30 * x26) + ((uint64_t)x29 * x24)))))));
{  ℤ x37 = ((((uint64_t)x2 * x20) + (((uint64_t)x4 * x18) + (((uint64_t)x6 * x16) + (((uint64_t)x8 * x14) + (((uint64_t)x10 * x12) + (((uint64_t)x12 * x10) + (((uint64_t)x14 * x8) + (((uint64_t)x16 * x6) + (((uint64_t)x18 * x4) + ((uint64_t)x20 * x2)))))))))) +ℤ (0x3 *ℤ (((uint64_t)x22 * x29) + (((uint64_t)x24 * x30) + (((uint64_t)x26 * x28) + (((uint64_t)x28 * x26) + (((uint64_t)x30 * x24) + ((uint64_t)x29 * x22))))))));
{  ℤ x38 = ((((uint64_t)x2 * x18) +ℤ ((0x2 * ((uint64_t)x4 * x16)) + ((0x2 * ((uint64_t)x6 * x14)) + ((0x2 * ((uint64_t)x8 * x12)) + (((uint64_t)x10 * x10) + ((0x2 * ((uint64_t)x12 * x8)) + ((0x2 * ((uint64_t)x14 * x6)) + ((0x2 * ((uint64_t)x16 * x4)) + ((uint64_t)x18 * x2))))))))) +ℤ (0x3 *ℤ ((0x2 * ((uint64_t)x20 * x29)) + ((0x2 * ((uint64_t)x22 * x30)) + ((0x2 * ((uint64_t)x24 * x28)) + (((uint64_t)x26 * x26) + ((0x2 * ((uint64_t)x28 * x24)) + ((0x2 * ((uint64_t)x30 * x22)) + (0x2 * ((uint64_t)x29 * x20))))))))));
{  ℤ x39 = ((((uint64_t)x2 * x16) + ((0x2 * ((uint64_t)x4 * x14)) + ((0x2 * ((uint64_t)x6 * x12)) + (((uint64_t)x8 * x10) + (((uint64_t)x10 * x8) + ((0x2 * ((uint64_t)x12 * x6)) + ((0x2 * ((uint64_t)x14 * x4)) + ((uint64_t)x16 * x2)))))))) +ℤ (0x3 *ℤ (((uint64_t)x18 * x29) + ((0x2 * ((uint64_t)x20 * x30)) + ((0x2 * ((uint64_t)x22 * x28)) + (((uint64_t)x24 * x26) + (((uint64_t)x26 * x24) + ((0x2 * ((uint64_t)x28 * x22)) + ((0x2 * ((uint64_t)x30 * x20)) + ((uint64_t)x29 * x18))))))))));
{  ℤ x40 = ((((uint64_t)x2 * x14) + ((0x2 * ((uint64_t)x4 * x12)) + (((uint64_t)x6 * x10) + (((uint64_t)x8 * x8) + (((uint64_t)x10 * x6) + ((0x2 * ((uint64_t)x12 * x4)) + ((uint64_t)x14 * x2))))))) +ℤ (0x3 *ℤ (((uint64_t)x16 * x29) + (((uint64_t)x18 * x30) + ((0x2 * ((uint64_t)x20 * x28)) + (((uint64_t)x22 * x26) + (((uint64_t)x24 * x24) + (((uint64_t)x26 * x22) + ((0x2 * ((uint64_t)x28 * x20)) + (((uint64_t)x30 * x18) + ((uint64_t)x29 * x16)))))))))));
{  ℤ x41 = ((((uint64_t)x2 * x12) + (((uint64_t)x4 * x10) + (((uint64_t)x6 * x8) + (((uint64_t)x8 * x6) + (((uint64_t)x10 * x4) + ((uint64_t)x12 * x2)))))) +ℤ (0x3 *ℤ (((uint64_t)x14 * x29) + (((uint64_t)x16 * x30) + (((uint64_t)x18 * x28) + (((uint64_t)x20 * x26) + (((uint64_t)x22 * x24) + (((uint64_t)x24 * x22) + (((uint64_t)x26 * x20) + (((uint64_t)x28 * x18) + (((uint64_t)x30 * x16) + ((uint64_t)x29 * x14))))))))))));
{  ℤ x42 = ((((uint64_t)x2 * x10) + ((0x2 * ((uint64_t)x4 * x8)) + ((0x2 * ((uint64_t)x6 * x6)) + ((0x2 * ((uint64_t)x8 * x4)) + ((uint64_t)x10 * x2))))) +ℤ (0x3 *ℤ ((0x2 * ((uint64_t)x12 * x29)) +ℤ ((0x2 * ((uint64_t)x14 * x30)) +ℤ ((0x2 * ((uint64_t)x16 * x28)) + (((uint64_t)x18 * x26) + ((0x2 * ((uint64_t)x20 * x24)) + ((0x2 * ((uint64_t)x22 * x22)) + ((0x2 * ((uint64_t)x24 * x20)) + (((uint64_t)x26 * x18) + ((0x2 * ((uint64_t)x28 * x16)) + ((0x2 * ((uint64_t)x30 * x14)) + (0x2 * ((uint64_t)x29 * x12))))))))))))));
{  ℤ x43 = ((((uint64_t)x2 * x8) + ((0x2 * ((uint64_t)x4 * x6)) + ((0x2 * ((uint64_t)x6 * x4)) + ((uint64_t)x8 * x2)))) +ℤ (0x3 *ℤ (((uint64_t)x10 * x29) +ℤ ((0x2 * ((uint64_t)x12 * x30)) + ((0x2 * ((uint64_t)x14 * x28)) + (((uint64_t)x16 * x26) + (((uint64_t)x18 * x24) + ((0x2 * ((uint64_t)x20 * x22)) + ((0x2 * ((uint64_t)x22 * x20)) + (((uint64_t)x24 * x18) + (((uint64_t)x26 * x16) + ((0x2 * ((uint64_t)x28 * x14)) + ((0x2 * ((uint64_t)x30 * x12)) + ((uint64_t)x29 * x10))))))))))))));
{  ℤ x44 = ((((uint64_t)x2 * x6) + ((0x2 * ((uint64_t)x4 * x4)) + ((uint64_t)x6 * x2))) +ℤ (0x3 *ℤ (((uint64_t)x8 * x29) + (((uint64_t)x10 * x30) + ((0x2 * ((uint64_t)x12 * x28)) + (((uint64_t)x14 * x26) + (((uint64_t)x16 * x24) + (((uint64_t)x18 * x22) + ((0x2 * ((uint64_t)x20 * x20)) + (((uint64_t)x22 * x18) + (((uint64_t)x24 * x16) + (((uint64_t)x26 * x14) + ((0x2 * ((uint64_t)x28 * x12)) + (((uint64_t)x30 * x10) + ((uint64_t)x29 * x8)))))))))))))));
{  ℤ x45 = ((((uint64_t)x2 * x4) + ((uint64_t)x4 * x2)) +ℤ (0x3 *ℤ (((uint64_t)x6 * x29) + (((uint64_t)x8 * x30) + (((uint64_t)x10 * x28) + (((uint64_t)x12 * x26) + (((uint64_t)x14 * x24) + (((uint64_t)x16 * x22) + (((uint64_t)x18 * x20) + (((uint64_t)x20 * x18) + (((uint64_t)x22 * x16) + (((uint64_t)x24 * x14) + (((uint64_t)x26 * x12) + (((uint64_t)x28 * x10) + (((uint64_t)x30 * x8) + ((uint64_t)x29 * x6))))))))))))))));
{  ℤ x46 = (((uint64_t)x2 * x2) +ℤ (0x3 *ℤ ((0x2 * ((uint64_t)x4 * x29)) +ℤ ((0x2 * ((uint64_t)x6 * x30)) +ℤ ((0x2 * ((uint64_t)x8 * x28)) +ℤ (((uint64_t)x10 * x26) +ℤ ((0x2 * ((uint64_t)x12 * x24)) +ℤ ((0x2 * ((uint64_t)x14 * x22)) +ℤ ((0x2 * ((uint64_t)x16 * x20)) + (((uint64_t)x18 * x18) + ((0x2 * ((uint64_t)x20 * x16)) + ((0x2 * ((uint64_t)x22 * x14)) + ((0x2 * ((uint64_t)x24 * x12)) + (((uint64_t)x26 * x10) + ((0x2 * ((uint64_t)x28 * x8)) + ((0x2 * ((uint64_t)x30 * x6)) + (0x2 * ((uint64_t)x29 * x4))))))))))))))))));
{  uint64_t x47 = (x46 >> 0x1d);
{  uint32_t x48 = (x46 & 0x1fffffff);
{  ℤ x49 = (x47 +ℤ x45);
{  uint64_t x50 = (x49 >> 0x1c);
{  uint32_t x51 = (x49 & 0xfffffff);
{  ℤ x52 = (x50 +ℤ x44);
{  uint64_t x53 = (x52 >> 0x1c);
{  uint32_t x54 = (x52 & 0xfffffff);
{  ℤ x55 = (x53 +ℤ x43);
{  uint64_t x56 = (x55 >> 0x1c);
{  uint32_t x57 = (x55 & 0xfffffff);
{  ℤ x58 = (x56 +ℤ x42);
{  uint64_t x59 = (x58 >> 0x1d);
{  uint32_t x60 = (x58 & 0x1fffffff);
{  ℤ x61 = (x59 +ℤ x41);
{  uint64_t x62 = (x61 >> 0x1c);
{  uint32_t x63 = (x61 & 0xfffffff);
{  ℤ x64 = (x62 +ℤ x40);
{  uint64_t x65 = (x64 >> 0x1c);
{  uint32_t x66 = (x64 & 0xfffffff);
{  ℤ x67 = (x65 +ℤ x39);
{  uint64_t x68 = (x67 >> 0x1c);
{  uint32_t x69 = (x67 & 0xfffffff);
{  ℤ x70 = (x68 +ℤ x38);
{  uint64_t x71 = (x70 >> 0x1d);
{  uint32_t x72 = (x70 & 0x1fffffff);
{  ℤ x73 = (x71 +ℤ x37);
{  uint64_t x74 = (x73 >> 0x1c);
{  uint32_t x75 = (x73 & 0xfffffff);
{  ℤ x76 = (x74 +ℤ x36);
{  uint64_t x77 = (x76 >> 0x1c);
{  uint32_t x78 = (x76 & 0xfffffff);
{  ℤ x79 = (x77 +ℤ x35);
{  uint64_t x80 = (x79 >> 0x1c);
{  uint32_t x81 = (x79 & 0xfffffff);
{  ℤ x82 = (x80 +ℤ x34);
{  uint64_t x83 = (x82 >> 0x1d);
{  uint32_t x84 = (x82 & 0x1fffffff);
{  ℤ x85 = (x83 +ℤ x33);
{  uint64_t x86 = (x85 >> 0x1c);
{  uint32_t x87 = (x85 & 0xfffffff);
{  ℤ x88 = (x86 +ℤ x32);
{  uint64_t x89 = (x88 >> 0x1c);
{  uint32_t x90 = (x88 & 0xfffffff);
{  ℤ x91 = (x89 +ℤ x31);
{  uint64_t x92 = (x91 >> 0x1c);
{  uint32_t x93 = (x91 & 0xfffffff);
{  uint64_t x94 = (x48 + (0x3 * x92));
{  uint32_t x95 = (uint32_t) (x94 >> 0x1d);
{  uint32_t x96 = ((uint32_t)x94 & 0x1fffffff);
{  uint32_t x97 = (x95 + x51);
{  uint32_t x98 = (x97 >> 0x1c);
{  uint32_t x99 = (x97 & 0xfffffff);
out[0] = x93;
out[1] = x90;
out[2] = x87;
out[3] = x84;
out[4] = x81;
out[5] = x78;
out[6] = x75;
out[7] = x72;
out[8] = x69;
out[9] = x66;
out[10] = x63;
out[11] = x60;
out[12] = x57;
out[13] = x98 + x54;
out[14] = x99;
out[15] = x96;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[16];