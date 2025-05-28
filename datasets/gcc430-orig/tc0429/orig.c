extern int printf (const char *, ...);



static char
(safe_unary_minus_func_int8_t_s)(char si )
{
 
  return


    (si==(-128)) ?
    ((si)) :


    -si;
}

static char
(safe_add_func_int8_t_s_s)(char si1, char si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((127)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-128)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static char
(safe_sub_func_int8_t_s_s)(char si1, char si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(127))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static char
(safe_mul_func_int8_t_s_s)(char si1, char si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((127) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-128) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-128) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((127) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static char
(safe_mod_func_int8_t_s_s)(char si1, char si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static char
(safe_div_func_int8_t_s_s)(char si1, char si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static char
(safe_lshift_func_int8_t_s_s)(char left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static char
(safe_lshift_func_int8_t_s_u)(char left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static char
(safe_rshift_func_int8_t_s_s)(char left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static char
(safe_rshift_func_int8_t_s_u)(char left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static short
(safe_unary_minus_func_int16_t_s)(short si )
{
 
  return


    (si==(-32767-1)) ?
    ((si)) :


    -si;
}

static short
(safe_add_func_int16_t_s_s)(short si1, short si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((32767)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-32767-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static short
(safe_sub_func_int16_t_s_s)(short si1, short si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(32767))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static short
(safe_mul_func_int16_t_s_s)(short si1, short si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((32767) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-32767-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-32767-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((32767) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static short
(safe_mod_func_int16_t_s_s)(short si1, short si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static short
(safe_div_func_int16_t_s_s)(short si1, short si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static short
(safe_lshift_func_int16_t_s_s)(short left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static short
(safe_lshift_func_int16_t_s_u)(short left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static short
(safe_rshift_func_int16_t_s_s)(short left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static short
(safe_rshift_func_int16_t_s_u)(short left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int
(safe_unary_minus_func_int32_t_s)(int si )
{
 
  return


    (si==(-2147483647-1)) ?
    ((si)) :


    -si;
}

static int
(safe_add_func_int32_t_s_s)(int si1, int si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int
(safe_sub_func_int32_t_s_s)(int si1, int si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int
(safe_mul_func_int32_t_s_s)(int si1, int si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int
(safe_mod_func_int32_t_s_s)(int si1, int si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int
(safe_div_func_int32_t_s_s)(int si1, int si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int
(safe_lshift_func_int32_t_s_s)(int left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int
(safe_lshift_func_int32_t_s_u)(int left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int
(safe_rshift_func_int32_t_s_s)(int left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int
(safe_rshift_func_int32_t_s_u)(int left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static long long
(safe_unary_minus_func_int64_t_s)(long long si )
{
 
  return


    (si==(-(9223372036854775807LL)-1)) ?
    ((si)) :


    -si;
}

static long long
(safe_add_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807LL)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-(9223372036854775807LL)-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static long long
(safe_sub_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807LL))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static long long
(safe_mul_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807LL) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-(9223372036854775807LL)-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-(9223372036854775807LL)-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807LL) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static long long
(safe_mod_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static long long
(safe_div_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static long long
(safe_lshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807LL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static long long
(safe_lshift_func_int64_t_s_u)(long long left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807LL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static long long
(safe_rshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static long long
(safe_rshift_func_int64_t_s_u)(long long left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}







static unsigned char
(safe_unary_minus_func_uint8_t_u)(unsigned char ui )
{
 
  return -ui;
}

static unsigned char
(safe_add_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return ui1 + ui2;
}

static unsigned char
(safe_sub_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return ui1 - ui2;
}

static unsigned char
(safe_mul_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static unsigned char
(safe_mod_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned char
(safe_div_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned char
(safe_lshift_func_uint8_t_u_s)(unsigned char left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned char
(safe_lshift_func_uint8_t_u_u)(unsigned char left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned char
(safe_rshift_func_uint8_t_u_s)(unsigned char left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned char
(safe_rshift_func_uint8_t_u_u)(unsigned char left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static unsigned short
(safe_unary_minus_func_uint16_t_u)(unsigned short ui )
{
 
  return -ui;
}

static unsigned short
(safe_add_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return ui1 + ui2;
}

static unsigned short
(safe_sub_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return ui1 - ui2;
}

static unsigned short
(safe_mul_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static unsigned short
(safe_mod_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned short
(safe_div_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned short
(safe_lshift_func_uint16_t_u_s)(unsigned short left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned short
(safe_lshift_func_uint16_t_u_u)(unsigned short left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned short
(safe_rshift_func_uint16_t_u_s)(unsigned short left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned short
(safe_rshift_func_uint16_t_u_u)(unsigned short left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static unsigned
(safe_unary_minus_func_uint32_t_u)(unsigned ui )
{
 
  return -ui;
}

static unsigned
(safe_add_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return ui1 + ui2;
}

static unsigned
(safe_sub_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return ui1 - ui2;
}

static unsigned
(safe_mul_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static unsigned
(safe_mod_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned
(safe_div_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned
(safe_lshift_func_uint32_t_u_s)(unsigned left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned
(safe_lshift_func_uint32_t_u_u)(unsigned left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned
(safe_rshift_func_uint32_t_u_s)(unsigned left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned
(safe_rshift_func_uint32_t_u_u)(unsigned left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static unsigned long long
(safe_unary_minus_func_uint64_t_u)(unsigned long long ui )
{
 
  return -ui;
}

static unsigned long long
(safe_add_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 + ui2;
}

static unsigned long long
(safe_sub_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 - ui2;
}

static unsigned long long
(safe_mul_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ((unsigned long long int)ui1) * ((unsigned long long int)ui2);
}

static unsigned long long
(safe_mod_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned long long
(safe_div_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned long long
(safe_lshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned long long
(safe_lshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}

static inline void platform_main_begin(void)
{
}

static inline void crc32_gentab (void)
{
}



int crc32_context;
extern int strcmp (const char *, const char *);


static inline void
transparent_crc (unsigned val, char* vname, int flag)
{
  if (flag) printf ("%s %d\n", vname, val);
  crc32_context += val;
}

static inline void
platform_main_end (int x, int flag)
{
  if (!flag) printf ("checksum = %x\n", x);
}


static long __undefined;



static const int g_4 = 1L;
static int g_42 = 6L;
static int *g_64[6] = {&g_42, &g_42, (void*)0, &g_42, &g_42, (void*)0};
static short g_67 = 0x4203L;
static unsigned char g_74 = 2UL;
static unsigned g_76 = 18446744073709551615UL;
static unsigned g_78 = 4294967294UL;
static int g_80[4][10][2] = {{{(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}}, {{(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}}, {{(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}}, {{(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}, {(-9L), 0L}}};
static unsigned long long g_82 = 0UL;
static char g_87 = 0x23L;
static const int g_107 = 0x721FB129L;
static unsigned char g_111[3][4] = {{9UL, 253UL, 9UL, 253UL}, {9UL, 253UL, 9UL, 253UL}, {9UL, 253UL, 9UL, 253UL}};
static const int *g_118 = &g_80[1][9][1];
static short g_124 = (-1L);
static int g_153 = 0L;
static unsigned char *g_177 = &g_74;
static long long g_180 = 0x5CEAB9BFD8F9DC3FLL;
static unsigned g_241 = 9UL;
static char g_259 = 0x7FL;
static int **g_270 = (void*)0;
static int g_298 = (-1L);
static char g_414[6][10] = {{0x3DL, 0x86L, (-1L), 6L, 0x8AL, 0xD5L, 0x8AL, 6L, (-1L), 0x86L}, {0x3DL, 0x86L, (-1L), 6L, 0x8AL, 0xD5L, 0x8AL, 6L, (-1L), 0x86L}, {0x3DL, 0x86L, (-1L), 6L, 0x8AL, 0xD5L, 0x8AL, 6L, (-1L), 0x86L}, {0x3DL, 0x86L, (-1L), 6L, 0x8AL, 0xD5L, 0x8AL, 6L, (-1L), 0x86L}, {0x3DL, 0x86L, (-1L), 6L, 0x8AL, 0xD5L, 0x8AL, 6L, (-1L), 0x86L}, {0x3DL, 0x86L, (-1L), 6L, 0x8AL, 0xD5L, 0x8AL, 6L, (-1L), 0x86L}};
static unsigned short g_450 = 0x69F1L;
static unsigned g_501 = 0xE4930D67L;
static unsigned long long g_522 = 6UL;
static long long g_528 = (-6L);
static unsigned char **g_530 = &g_177;
static short g_573 = 0x6E65L;
static long long g_584[5] = {0xB470E4924870A34DLL, 0xB470E4924870A34DLL, 0xB470E4924870A34DLL, 0xB470E4924870A34DLL, 0xB470E4924870A34DLL};
static char g_597 = 1L;
static short g_666 = (-1L);
static unsigned short *g_696 = (void*)0;
static unsigned short **g_695[10] = {&g_696, &g_696, &g_696, &g_696, &g_696, &g_696, &g_696, &g_696, &g_696, &g_696};
static unsigned short ***g_694 = &g_695[0];
static unsigned *g_702 = &g_78;
static unsigned **g_701 = &g_702;
static unsigned ***g_700 = &g_701;
static unsigned ****g_699 = &g_700;
static int *g_712 = &g_80[2][3][0];
static unsigned g_747 = 4UL;
static unsigned *g_788 = &g_76;
static const unsigned * const g_793 = (void*)0;
static const unsigned * const *g_792 = &g_793;
static const unsigned * const **g_791 = &g_792;
static short g_865 = 0xAB25L;
static long long g_874 = 0xCFD50479773A335ALL;
static unsigned **g_885 = &g_788;
static char g_926 = (-4L);
static long long *g_970 = &g_528;
static long long **g_969[10][10] = {{&g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970}, {&g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970}, {&g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970}, {&g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970}, {&g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970}, {&g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970}, {&g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970}, {&g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970}, {&g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970}, {&g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970, &g_970}};
static long long ***g_968 = &g_969[4][4];
static unsigned ***g_983 = &g_885;
static int g_987 = 0x327DF058L;
static unsigned g_1006 = 0xEA40017BL;
static unsigned long long g_1016 = 1UL;
static unsigned long long g_1039[7] = {0x2820589C58C0733ALL, 0x2820589C58C0733ALL, 0x2820589C58C0733ALL, 0x2820589C58C0733ALL, 0x2820589C58C0733ALL, 0x2820589C58C0733ALL, 0x2820589C58C0733ALL};
static unsigned ** const *g_1069[2] = {&g_701, &g_701};
static unsigned ** const **g_1068 = &g_1069[0];
static int *g_1097[5][8][6] = {{{(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}}, {{(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}}, {{(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}}, {{(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}}, {{(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}, {(void*)0, &g_80[3][1][1], (void*)0, &g_80[1][3][0], (void*)0, (void*)0}}};



static short func_1(void);
static long long func_5(short p_6, unsigned p_7);
static unsigned func_9(short p_10, int p_11, unsigned p_12);
static short func_15(int p_16, int p_17, int p_18, short p_19);
static const long long func_22(unsigned long long p_23, char p_24);
static char func_25(unsigned long long p_26, int p_27, long long p_28, int p_29);
static const char func_30(int p_31, unsigned short p_32, unsigned long long p_33, int p_34, int p_35);
static unsigned long long func_37(unsigned long long p_38, unsigned p_39, const unsigned char p_40);
static int func_44(int p_45, short p_46, int ** p_47);
static unsigned long long func_48(short p_49, int * p_50, int p_51, unsigned short p_52);
static short func_1(void)
{
    char l_8 = 0xEFL;
    int l_377 = 9L;
    int l_820 = 0x175D01CEL;
    long long *l_821 = &g_584[1];
    long long *l_822[1][6][1] = {{{&g_180}, {&g_180}, {&g_180}, {&g_180}, {&g_180}, {&g_180}}};
    short *l_825[7];
    int *l_1079 = &g_298;
    unsigned char l_1093 = 0xA9L;
    unsigned short l_1094 = 0x0C02L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_825[i] = &g_124;
    (*l_1079) = (safe_add_func_int64_t_s_s(g_4, func_5(l_8, func_9(l_8, g_4, (l_8 | (safe_add_func_int16_t_s_s((g_666 = func_15(((((l_377 = ((*l_821) = (l_820 = (((((safe_mod_func_int64_t_s_s(func_22(l_8, func_25(g_4, (g_4 == func_30(((safe_unary_minus_func_uint64_t_u(func_37((l_8 | 4UL), g_4, g_4))) ^ 1L), l_8, l_377, l_377, l_377)), g_107, l_8)), l_8)) , l_8) == l_377) , l_8) && 0xB3L)))) , l_8) || 0L) , l_820), g_4, l_8, l_8)), l_8)))))));
    for (g_666 = 16; (g_666 > 6); g_666--)
    {
        unsigned long long l_1082 = 0x619334E4B31F6E08LL;
        return l_1082;
    }
    for (g_747 = (-10); (g_747 != 7); g_747 = safe_add_func_int32_t_s_s(g_747, 9))
    {
        unsigned ***l_1089 = &g_885;
        int l_1090 = 0x8218E591L;
        char *l_1095[2][3][4] = {{{(void*)0, &g_597, &g_414[2][1], &g_414[3][6]}, {(void*)0, &g_597, &g_414[2][1], &g_414[3][6]}, {(void*)0, &g_597, &g_414[2][1], &g_414[3][6]}}, {{(void*)0, &g_597, &g_414[2][1], &g_414[3][6]}, {(void*)0, &g_597, &g_414[2][1], &g_414[3][6]}, {(void*)0, &g_597, &g_414[2][1], &g_414[3][6]}}};
        int l_1096 = 0x579178FAL;
        int i, j, k;
        (*l_1079) = (*l_1079);
    }
    return g_584[4];
}







static long long func_5(short p_6, unsigned p_7)
{
    short l_945 = 0x86B3L;
    int *l_946 = (void*)0;
    unsigned l_963 = 0xD6133646L;
    unsigned *l_965 = (void*)0;
    unsigned *l_966 = &g_501;
    unsigned char *l_967 = &g_111[2][2];
    short l_971 = 1L;
    int l_1018 = 5L;
    unsigned long long l_1067 = 18446744073709551615UL;
    if (((*g_712) = p_7))
    {
        int **l_947 = &g_64[2];
        int l_956[6] = {0x6F3F950CL, 0x749E2D97L, 0x6F3F950CL, 0x749E2D97L, 0x6F3F950CL, 0x749E2D97L};
        char *l_957 = &g_414[2][1];
        unsigned char **l_958 = &g_177;
        short l_961[8];
        unsigned l_962 = 6UL;
        unsigned short *l_964 = &g_450;
        int i;
        for (i = 0; i < 8; i++)
            l_961[i] = 0xFC33L;
        (*g_712) = l_945;
        (*l_947) = l_946;
        (*g_712) = (p_6 || (safe_lshift_func_uint16_t_u_s(((*l_964) = (safe_sub_func_uint8_t_u_u(((!((g_80[1][3][0] >= (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((***g_700) >= ((((((l_956[1] = (~0xB3E11D9FL)) , p_6) || ((*l_957) = g_82)) >= (l_958 == ((safe_add_func_int64_t_s_s(((l_961[7] > g_78) == 6L), g_42)) , l_958))) , l_962) , p_6)), l_963)), p_6))) , p_7)) & 0x1CCAL), p_7))), g_241)));
        (*l_947) = l_946;
    }
    else
    {
        return g_865;
    }
    if ((((*l_966) = ((void*)0 != l_946)) , (0xA457BE697182C219LL > ((l_945 || ((~((void*)0 != g_968)) > 0xA463169FL)) ^ l_971))))
    {
        int **l_972 = &g_712;
        (*l_972) = (void*)0;
    }
    else
    {
        int * const l_978 = &g_80[3][5][0];
        int *l_979[10] = {&g_298, &g_298, &g_298, &g_298, &g_298, &g_298, &g_298, &g_298, &g_298, &g_298};
        int *l_985 = &g_153;
        unsigned long long l_988 = 0x24ABDF6BAE5FF8F5LL;
        long long l_1009[7] = {0xBC8939576292F5DFLL, 0xBC8939576292F5DFLL, 9L, 0xBC8939576292F5DFLL, 0xBC8939576292F5DFLL, 9L, 0xBC8939576292F5DFLL};
        unsigned short *l_1017 = &g_450;
        unsigned ***l_1033 = &g_701;
        int **l_1074 = &l_946;
        int i;
        for (g_926 = (-27); (g_926 == 23); g_926 = safe_add_func_int64_t_s_s(g_926, 9))
        {
            int * const l_975 = &g_298;
            int **l_976 = (void*)0;
            int **l_977 = &l_946;
            (*l_977) = l_975;
        }
        l_979[3] = l_978;
        for (g_747 = (-30); (g_747 > 50); g_747 = safe_add_func_uint16_t_u_u(g_747, 1))
        {
            const int **l_982 = &g_118;
            int **l_984 = &g_712;
            short *l_986 = &g_666;
            int l_989 = 0x9B261A68L;
            unsigned short l_1001 = 0xFFB3L;
            unsigned ***l_1034 = &g_701;
            (*l_982) = &g_4;
            (*l_982) = ((*l_984) = (((g_983 = &g_885) != &g_885) , l_979[3]));
            if ((g_584[0] , p_7))
            {
                (*l_984) = &g_298;
                if (l_988)
                    break;
                (*l_982) = &g_80[1][3][0];
                (*l_978) = p_7;
            }
            else
            {
                l_989 = ((*l_978) = p_7);
                (*l_982) = (*l_982);
            }
            for (l_988 = 0; (l_988 != 17); l_988++)
            {
                unsigned l_992[9] = {0xFCC06B9FL, 0xC3ADD001L, 0xFCC06B9FL, 0xC3ADD001L, 0xFCC06B9FL, 0xC3ADD001L, 0xFCC06B9FL, 0xC3ADD001L, 0xFCC06B9FL};
                unsigned long long *l_993 = &g_522;
                int l_1000 = (-1L);
                short l_1002[2];
                long long l_1003[4];
                unsigned short *l_1030 = &l_1001;
                unsigned short ** const l_1029 = &l_1030;
                unsigned short ** const *l_1028 = &l_1029;
                const short l_1059 = 0xE7A8L;
                int i;
                for (i = 0; i < 2; i++)
                    l_1002[i] = 0xCA5DL;
                for (i = 0; i < 4; i++)
                    l_1003[i] = (-3L);
                if (((l_992[6] = ((*l_978) = (-1L))) & ((func_15(((*l_985) = 0x3A032D70L), p_7, p_6, (((*l_967) = ((p_6 || ((((*l_993) = g_4) >= ((safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(p_6, func_30(((l_1000 = (0xE99591DCL & (safe_rshift_func_uint8_t_u_s((((func_15(p_7, p_6, l_1000, p_7) < (-10L)) | p_6) == 0xE4L), 6)))) && (***g_700)), l_1001, p_6, p_6, p_7))), 7L)) >= l_1002[0])) || g_180)) ^ l_1003[1])) && p_6)) != l_1002[0]) & g_76)))
                {
                    unsigned char l_1004 = 0x65L;
                    unsigned short *l_1005 = (void*)0;
                    unsigned char l_1014 = 0xA5L;
                    unsigned long long *l_1015[2][4] = {{&g_1016, &l_988, &g_1016, &l_988}, {&g_1016, &l_988, &g_1016, &l_988}};
                    unsigned short ** const *l_1027 = (void*)0;
                    unsigned short ** const **l_1026[2][5][4] = {{{&l_1027, &l_1027, &l_1027, (void*)0}, {&l_1027, &l_1027, &l_1027, (void*)0}, {&l_1027, &l_1027, &l_1027, (void*)0}, {&l_1027, &l_1027, &l_1027, (void*)0}, {&l_1027, &l_1027, &l_1027, (void*)0}}, {{&l_1027, &l_1027, &l_1027, (void*)0}, {&l_1027, &l_1027, &l_1027, (void*)0}, {&l_1027, &l_1027, &l_1027, (void*)0}, {&l_1027, &l_1027, &l_1027, (void*)0}, {&l_1027, &l_1027, &l_1027, (void*)0}}};
                    unsigned ***l_1035 = &g_701;
                    unsigned short l_1038[7];
                    int l_1040 = 0xD039C5C0L;
                    char *l_1041 = &g_597;
                    int l_1042 = 0x755E58A8L;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_1038[i] = 0x9534L;
                    (*l_978) = ((func_30(l_1004, ((*l_1017) = (p_6 == ((l_1005 == (((((l_1004 | g_1006) , (safe_mod_func_int8_t_s_s(l_1009[6], (safe_add_func_uint8_t_u_u(((&l_965 == (*g_983)) , (safe_mod_func_int64_t_s_s((p_7 , p_6), p_7))), 0x8CL))))) , (**g_701)) & 5L) , l_1017)) > l_1018))), g_1016, p_7, l_1000) , p_7) == p_7);
                    l_1042 = (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((*l_1041) = (~(l_1004 && (((l_1040 = (((safe_add_func_int32_t_s_s(p_6, ((safe_unary_minus_func_int8_t_s((&g_695[5] != (l_1028 = (void*)0)))) == 0x8274EAC0CBE27ECBLL))) , (((safe_mod_func_int8_t_s_s(((((*g_699) = (*g_699)) == (l_1035 = (l_1034 = l_1033))) == (((*g_970) = ((~((safe_add_func_int32_t_s_s(((*l_978) = (l_1038[1] = l_1004)), (g_501 > g_1039[1]))) < 0x03EDL)) || g_4)) > p_7)), p_7)) | 0xB3893D4FL) , p_6)) > 4294967295UL)) >= 1UL) | p_6)))), g_111[0][2])), (-6L)));
                    if (p_7)
                        continue;
                    for (g_874 = 0; (g_874 < 26); g_874++)
                    {
                        const unsigned l_1060 = 7UL;
                        l_1042 = ((*l_978) = (safe_add_func_int32_t_s_s(p_6, (safe_rshift_func_int16_t_s_s(g_1006, ((*l_986) = ((p_6 & ((l_1060 > l_1060) , 0x6B06L)) && 4294967295UL)))))));
                    }
                }
                else
                {
                    char l_1061 = (-1L);
                    int l_1066 = 0x30483144L;
                    unsigned ****l_1071 = &l_1034;
                    if (func_9(((*l_986) = (((g_74 | l_1061) , (((func_9(p_6, l_1067, (*l_978)) & p_7) != 0x6DL) || 0x0998459E63EDF641LL)) | p_6)), p_6, p_7))
                    {
                        return l_1061;
                    }
                    else
                    {
                        unsigned ** const **l_1070 = (void*)0;
                        int **l_1072 = (void*)0;
                        int **l_1073 = &l_946;
                        (*l_978) = ((l_1070 = g_1068) != l_1071);
                        (*l_1073) = l_978;
                    }
                }
            }
        }
        (*l_1074) = (void*)0;
    }
    for (g_76 = 18; (g_76 <= 26); ++g_76)
    {
        int *l_1077 = &g_42;
        int **l_1078[9] = {&g_712, &g_712, &g_712, &g_712, &g_712, &g_712, &g_712, &g_712, &g_712};
        int i;
        l_946 = l_1077;
    }
    return p_7;
}







static unsigned func_9(short p_10, int p_11, unsigned p_12)
{
    int l_833 = 8L;
    int l_834 = (-7L);
    int *l_836 = &g_80[1][3][0];
    char l_848 = 1L;
    unsigned **l_881 = &g_788;
    unsigned short * const *l_931 = (void*)0;
    int *l_938[2][9][10] = {{{&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}}, {{&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}, {&g_42, &g_42, &g_42, &g_298, (void*)0, &g_42, &g_80[2][4][1], &g_80[1][1][1], &g_80[1][3][0], &g_42}}};
    unsigned short l_940 = 0x316CL;
    int i, j, k;
    for (p_11 = 15; (p_11 >= 12); --p_11)
    {
        unsigned *l_828[5][3] = {{&g_78, &g_747, &g_78}, {&g_78, &g_747, &g_78}, {&g_78, &g_747, &g_78}, {&g_78, &g_747, &g_78}, {&g_78, &g_747, &g_78}};
        unsigned long long *l_829 = (void*)0;
        unsigned long long *l_830 = &g_522;
        int l_849 = 0xA9F1069CL;
        const short l_858 = 0x56FDL;
        long long **l_863 = (void*)0;
        long long ***l_862 = &l_863;
        int *l_878 = &l_834;
        short l_911 = 0x4F78L;
        unsigned short l_936 = 3UL;
        int *l_937 = &l_833;
        long long l_939 = (-8L);
        unsigned short *l_941[8] = {&l_940, &l_940, &l_940, &l_940, &l_940, &l_940, &l_940, &l_940};
        unsigned char l_944[6][3];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 3; j++)
                l_944[i][j] = 0UL;
        }
    }
    return p_10;
}







static short func_15(int p_16, int p_17, int p_18, short p_19)
{
    int **l_823 = &g_64[5];
    unsigned char l_824 = 0UL;
    (*l_823) = &g_298;
    return l_824;
}







static const long long func_22(unsigned long long p_23, char p_24)
{
    char l_445 = 0x59L;
    int l_446[6][3][9] = {{{7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}}, {{7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}}, {{7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}}, {{7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}}, {{7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}}, {{7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}, {7L, (-5L), 7L, 0x571AFBA1L, 0x4C13CC2DL, 0x3BC88BFEL, 0xC57822DBL, 0xC57822DBL, 0x3BC88BFEL}}};
    int **l_562 = (void*)0;
    short *l_576 = &g_573;
    unsigned l_592 = 3UL;
    unsigned char * const l_601 = &g_111[1][2];
    unsigned char l_619 = 0xACL;
    int l_725 = 0L;
    unsigned long long l_817 = 0x61AA367564C2F21BLL;
    int *l_818 = &g_80[1][3][0];
    const int **l_819 = &g_118;
    int i, j, k;
    for (g_74 = 0; (g_74 <= 5); g_74 += 1)
    {
        unsigned char l_464 = 0x47L;
        unsigned *l_517 = &g_241;
        unsigned **l_516 = &l_517;
        unsigned ***l_515 = &l_516;
        unsigned char l_531 = 0xE3L;
        for (g_78 = 0; (g_78 <= 1); g_78 += 1)
        {
            int *l_444 = (void*)0;
            int **l_443 = &l_444;
            unsigned long long *l_459 = &g_82;
            char l_478 = 0L;
            unsigned short *l_493 = &g_450;
            unsigned short l_497[3];
            unsigned char **l_506 = (void*)0;
            long long l_529 = 0L;
            int i;
            for (i = 0; i < 3; i++)
                l_497[i] = 0xAABEL;
            (*l_443) = (g_64[g_74] = (void*)0);
            if (p_24)
            {
                return g_241;
            }
            else
            {
                char l_472 = 1L;
                int *l_481 = &g_298;
                for (g_67 = 0; (g_67 <= 1); g_67 += 1)
                {
                    unsigned short *l_449 = &g_450;
                    int i, j, k;
                    g_80[(g_67 + 2)][(g_74 + 2)][g_67] = p_23;
                }
                if (p_23)
                {
                    for (g_180 = 0; (g_180 <= 1); g_180 += 1)
                    {
                        short *l_471 = (void*)0;
                        char *l_477 = &g_414[2][1];
                        int *l_479 = (void*)0;
                        int *l_480 = &g_80[3][2][0];
                        int i, j, k;
                        (*l_443) = (void*)0;
                        g_80[(g_78 + 2)][(g_74 + 1)][g_180] = ((l_472 = (func_30((g_80[(g_180 + 2)][(g_74 + 4)][g_78] || ((((void*)0 != &g_414[5][0]) , (safe_sub_func_uint16_t_u_u(l_464, g_80[(g_180 + 2)][(g_74 + 4)][g_78]))) == ((safe_rshift_func_int8_t_s_s((g_80[2][5][0] , (~((!((p_24 , ((*l_459) = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(g_111[2][2], l_445)), 12)) == g_111[2][2]))) , l_446[2][2][2])) >= 0x2D430CDAC9B48732LL))), g_87)) , p_24))), g_241, p_24, p_23, (*g_118)) && p_23)) < g_80[(g_180 + 2)][(g_74 + 4)][g_78]);
                        (*l_480) = (((g_107 == (0x3F6CEA1F4ABE3933LL || l_464)) >= (safe_rshift_func_uint8_t_u_u(func_30(g_67, g_87, (((1UL == (0x0DL != 4UL)) > ((((*l_477) = (safe_rshift_func_uint8_t_u_u((((p_24 , &l_464) == &g_111[2][2]) < 0x71L), 0))) >= p_24) , g_241)) ^ p_23), p_23, p_23), l_478))) <= 0x9AL);
                    }
                }
                else
                {
                    return p_24;
                }
                (*l_481) = (((p_23 == g_180) || 0x34L) >= l_464);
            }
            for (g_180 = 0; (g_180 <= 1); g_180 += 1)
            {
                const unsigned l_495 = 1UL;
                unsigned char ** const l_507 = &g_177;
                unsigned ***l_520 = &l_516;
                for (g_82 = 0; (g_82 <= 1); g_82 += 1)
                {
                    unsigned char l_498 = 0UL;
                    int *l_536 = &g_42;
                    for (g_450 = 0; (g_450 <= 1); g_450 += 1)
                    {
                        unsigned short **l_494 = &l_493;
                        int l_499 = 0xD1EB2E24L;
                        unsigned short l_500 = 3UL;
                        int *l_502 = (void*)0;
                        int *l_503 = &g_298;
                        unsigned char *l_510 = &g_111[2][1];
                        unsigned *l_514 = &g_78;
                        unsigned **l_513 = &l_514;
                        unsigned ***l_512 = &l_513;
                        unsigned ***l_519 = &l_513;
                        unsigned ****l_518[8][6] = {{&l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}};
                        unsigned long long *l_521 = &g_522;
                        long long *l_527 = &g_528;
                        int i, j, k;
                        g_80[(g_180 + 1)][g_74][g_78] = ((((safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_s((g_80[g_82][g_78][g_180] , ((0xACEA57B9L & g_124) && (safe_sub_func_uint32_t_u_u(g_107, (*g_118))))), 2)))) > g_414[4][8]) ^ (g_414[2][1] ^ g_107)) , 1L);
                        (*l_503) = func_30(p_23, (g_501 = (l_500 = (((g_67 = (~func_30(g_111[2][0], (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_124, (safe_sub_func_int32_t_s_s(func_30(g_298, (((*l_494) = l_493) == (void*)0), (func_30((((func_30((((!l_495) , (safe_unary_minus_func_uint8_t_u((func_30((g_80[(g_180 + 1)][g_74][g_78] && (p_24 != 0x8F2CL)), g_153, l_495, g_76, p_23) <= l_497[1])))) , (-1L)), g_80[g_82][g_78][g_180], p_23, l_498, p_24) & g_298) , 0x495C154FL) , p_23), g_124, l_499, g_111[2][3], (*g_118)) | 0x7432EABEL), g_111[2][1], g_80[(g_180 + 1)][g_74][g_78]), 1UL)))), g_124)), g_111[2][2], g_67, p_23))) == (-9L)) <= g_76))), l_495, p_24, l_445);
                        (*l_503) = ((p_24 & ((l_506 == l_507) || ((safe_rshift_func_int16_t_s_s((((*l_510) = (&g_180 == (void*)0)) , (((*l_521) = (safe_unary_minus_func_uint8_t_u(((l_515 = l_512) == (l_520 = &l_513))))) > (safe_lshift_func_uint8_t_u_u(func_30((safe_mod_func_int64_t_s_s(((*l_527) = p_23), func_30(func_30(l_446[2][2][2], g_414[2][1], l_495, p_24, p_24), g_241, l_498, l_529, p_24))), g_414[2][1], g_76, p_24, (*g_118)), 5)))), 8)) != 65528UL))) ^ g_4);
                    }
                    g_530 = &g_177;
                    l_531 = l_464;
                    (*l_536) = (safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(p_23, g_153)) , (*g_118)), 4294967291UL));
                }
            }
        }
        l_446[2][2][2] = 1L;
    }
    for (g_74 = 0; (g_74 <= 16); g_74 = safe_add_func_int64_t_s_s(g_74, 1))
    {
        int *l_542 = &g_42;
        int *l_543 = &g_298;
        short *l_544[9][2] = {{&g_124, &g_124}, {&g_124, &g_124}, {&g_124, &g_124}, {&g_124, &g_124}, {&g_124, &g_124}, {&g_124, &g_124}, {&g_124, &g_124}, {&g_124, &g_124}, {&g_124, &g_124}};
        unsigned char l_550 = 255UL;
        unsigned l_551 = 0UL;
        int l_552 = 0x4EC47851L;
        unsigned l_596[7] = {0x59D0F568L, 0x59D0F568L, 0xE37747FFL, 0x59D0F568L, 0x59D0F568L, 0xE37747FFL, 0x59D0F568L};
        char l_598 = 0xF7L;
        char *l_617 = (void*)0;
        unsigned short **l_623 = (void*)0;
        short l_657 = 0L;
        const int *l_671 = &l_446[5][1][4];
        unsigned l_709[10] = {0x1E98307DL, 0x1E98307DL, 0UL, 0x1E98307DL, 0x1E98307DL, 0UL, 0x1E98307DL, 0x1E98307DL, 0UL, 0x1E98307DL};
        unsigned l_743 = 18446744073709551615UL;
        char l_776 = (-1L);
        int *l_797[5][8] = {{&l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298}, {&l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298}, {&l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298}, {&l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298}, {&l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298, &l_446[2][2][2], &g_298}};
        short l_807[9][8][3] = {{{(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}}, {{(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}}, {{(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}}, {{(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}}, {{(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}}, {{(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}}, {{(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}}, {{(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}}, {{(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}, {(-5L), 1L, 7L}}};
        int i, j, k;
        l_446[1][2][8] = (safe_unary_minus_func_int32_t_s(p_24));
        if ((safe_add_func_uint8_t_u_u((func_25(p_23, ((*l_543) = ((*l_542) = (-1L))), ((&g_177 != (void*)0) , ((p_24 != ((p_23 < (l_446[1][1][5] = (0x9963C514L ^ g_111[1][1]))) < (safe_unary_minus_func_uint16_t_u(((((safe_mod_func_int8_t_s_s((((safe_add_func_int8_t_s_s((p_23 , (-10L)), 0x1AL)) , p_24) ^ p_23), 0xC0L)) & l_550) < 0UL) > g_180))))) | (-1L))), l_551) & l_552), (-10L))))
        {
            int l_556 = 1L;
            unsigned short l_559[4][2];
            int ***l_563 = &l_562;
            unsigned char *l_564 = &g_111[0][0];
            unsigned char *l_565 = &l_550;
            long long l_566[2];
            char *l_567 = &g_414[2][6];
            long long l_568 = 0x67BBE025326A3AAELL;
            int *l_609 = &g_298;
            unsigned long long l_649[1][6][7] = {{{18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL, 18446744073709551614UL, 18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL, 18446744073709551614UL, 18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL, 18446744073709551614UL, 18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL, 18446744073709551614UL, 18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL, 18446744073709551614UL, 18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL, 18446744073709551614UL, 18446744073709551615UL, 18446744073709551613UL, 18446744073709551615UL}}};
            int l_653[10][8][2] = {{{0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}}, {{0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}}, {{0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}}, {{0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}}, {{0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}}, {{0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}}, {{0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}}, {{0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}}, {{0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}}, {{0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}, {0x39076DD5L, (-1L)}}};
            unsigned long long l_691[10][2] = {{0x5A8A6EE7FD5ADCAFLL, 0xC124B3B98263392CLL}, {0x5A8A6EE7FD5ADCAFLL, 0xC124B3B98263392CLL}, {0x5A8A6EE7FD5ADCAFLL, 0xC124B3B98263392CLL}, {0x5A8A6EE7FD5ADCAFLL, 0xC124B3B98263392CLL}, {0x5A8A6EE7FD5ADCAFLL, 0xC124B3B98263392CLL}, {0x5A8A6EE7FD5ADCAFLL, 0xC124B3B98263392CLL}, {0x5A8A6EE7FD5ADCAFLL, 0xC124B3B98263392CLL}, {0x5A8A6EE7FD5ADCAFLL, 0xC124B3B98263392CLL}, {0x5A8A6EE7FD5ADCAFLL, 0xC124B3B98263392CLL}, {0x5A8A6EE7FD5ADCAFLL, 0xC124B3B98263392CLL}};
            const int **l_716 = &g_118;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_559[i][j] = 0xCEDDL;
            }
            for (i = 0; i < 2; i++)
                l_566[i] = 2L;
            (*l_542) = (p_23 && ((*l_543) = ((((safe_unary_minus_func_uint32_t_u(((((safe_add_func_uint16_t_u_u(l_556, (*l_542))) , ((safe_sub_func_int64_t_s_s(g_111[2][2], l_556)) && p_23)) != l_556) < ((l_559[0][1] , (safe_add_func_int16_t_s_s(1L, 1UL))) == 0xCA6DL)))) , 3L) & p_24) || (*l_542))));
            if (((*l_543) = ((l_446[2][2][2] , (((0xB15D15D4A3BA4B14LL > (((((*l_567) = ((((*l_565) = ((*l_564) = (l_556 || func_30(p_24, g_414[2][1], p_24, p_23, (*g_118))))) && l_566[0]) != (-4L))) , 0UL) < p_23) >= l_568)) >= 5UL) > 1L)) & p_24)))
            {
                unsigned long long *l_574[4][2] = {{&g_82, &g_82}, {&g_82, &g_82}, {&g_82, &g_82}, {&g_82, &g_82}};
                int l_575[5][5] = {{0x9C1A0B6EL, (-7L), 0L, 0xF7E55297L, 0xF7E55297L}, {0x9C1A0B6EL, (-7L), 0L, 0xF7E55297L, 0xF7E55297L}, {0x9C1A0B6EL, (-7L), 0L, 0xF7E55297L, 0xF7E55297L}, {0x9C1A0B6EL, (-7L), 0L, 0xF7E55297L, 0xF7E55297L}, {0x9C1A0B6EL, (-7L), 0L, 0xF7E55297L, 0xF7E55297L}};
                short *l_577 = &g_124;
                int l_582 = (-1L);
                unsigned short *l_583[8][6][5] = {{{(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}}, {{(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}}, {{(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}}, {{(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}}, {{(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}}, {{(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}}, {{(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}}, {{(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}, {(void*)0, &l_559[0][1], &g_450, &l_559[0][1], &g_450}}};
                int **l_607 = (void*)0;
                char *l_616 = &g_259;
                unsigned **l_618 = (void*)0;
                short l_620 = 0L;
                int i, j, k;
                if ((safe_lshift_func_uint16_t_u_u(p_24, ((*l_542) = ((g_584[4] = (g_450 = ((safe_lshift_func_uint8_t_u_u(((*l_565) = ((g_573 , (((p_23 <= (l_575[4][1] = g_414[2][9])) ^ (func_30((l_576 != l_577), ((safe_sub_func_int8_t_s_s((0xB4L != ((((safe_add_func_uint16_t_u_u(l_582, g_80[0][2][0])) , l_582) || (-10L)) && l_582)), 4L)) && p_24), p_23, g_522, l_582) || 0x4593FBCC8739C90ALL)) && 0xBE573851L)) & 0xC797L)), p_23)) != 5UL))) || 0xD2CCL)))))
                {
                    unsigned short *l_589 = &l_559[0][1];
                    unsigned short **l_590 = &l_589;
                    int l_591 = 1L;
                    if (func_25((p_23 <= l_591), p_24, g_584[0], (*g_118)))
                    {
                        if (p_23)
                            break;
                    }
                    else
                    {
                        int **l_595 = &l_543;
                        (*l_595) = &g_298;
                        if (l_596[1])
                            continue;
                        (*l_595) = &l_591;
                        (**l_595) = (*g_118);
                    }
                }
                else
                {
                    unsigned *l_602[8] = {&l_596[1], &g_241, &l_596[1], &g_241, &l_596[1], &g_241, &l_596[1], &g_241};
                    unsigned *l_608 = &l_551;
                    int i;
                    l_609 = ((g_82 || p_24) , (void*)0);
                    l_620 = (safe_rshift_func_uint16_t_u_u((func_30((g_153 = p_24), (*l_542), (((*l_542) != ((*l_542) >= (safe_lshift_func_int16_t_s_u((*l_543), 4)))) , ((safe_sub_func_uint32_t_u_u((func_30(((!(p_23 <= func_30(((((*l_577) = (l_616 == (l_617 = &l_598))) < (((void*)0 != l_618) && p_23)) >= g_67), g_584[4], p_24, p_23, (*l_543)))) , p_24), p_23, l_619, (*l_542), p_23) ^ p_24), (-3L))) >= g_584[4])), p_24, (*g_118)) , g_241), 15));
                    if ((*g_118))
                        continue;
                }
                for (p_24 = 0; (p_24 <= 5); p_24++)
                {
                    unsigned short ***l_624 = &l_623;
                    unsigned short **l_625 = &l_583[4][2][4];
                    int l_626 = (-1L);
                    int *l_633[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_633[i] = &l_582;
                    l_625 = ((*l_624) = l_623);
                    if ((l_626 = p_24))
                    {
                        int *l_629 = (void*)0;
                        int **l_630 = (void*)0;
                        g_118 = (g_64[3] = ((safe_sub_func_int64_t_s_s(g_584[1], g_597)) , l_629));
                        g_64[5] = &l_446[2][2][2];
                        if (p_23)
                            continue;
                        (*l_542) = (l_446[2][2][2] = (g_87 , p_23));
                    }
                    else
                    {
                        int **l_631 = (void*)0;
                        int **l_632 = (void*)0;
                        l_633[1] = &l_626;
                        if (p_24)
                            continue;
                        return p_23;
                    }
                    (*l_542) = p_24;
                }
            }
            else
            {
                char *l_640 = &g_414[2][1];
                int l_645 = 0x827B0EFCL;
                unsigned *l_648 = &l_596[3];
                unsigned short *l_650 = (void*)0;
                unsigned short *l_651[5][5] = {{&g_450, (void*)0, &l_559[2][1], (void*)0, &g_450}, {&g_450, (void*)0, &l_559[2][1], (void*)0, &g_450}, {&g_450, (void*)0, &l_559[2][1], (void*)0, &g_450}, {&g_450, (void*)0, &l_559[2][1], (void*)0, &g_450}, {&g_450, (void*)0, &l_559[2][1], (void*)0, &g_450}};
                int l_662[2];
                int l_670 = (-2L);
                unsigned short l_672[10][6][1] = {{{0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}}, {{0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}}, {{0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}}, {{0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}}, {{0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}}, {{0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}}, {{0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}}, {{0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}}, {{0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}}, {{0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}, {0xE6D1L}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_662[i] = 0x2289C6A4L;
                if ((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((0x02L == (&g_414[3][1] == (l_640 = l_640))), (0xECF2L == g_76))), g_111[2][2])) , (g_450 = (safe_rshift_func_int16_t_s_s(((*l_576) = ((safe_sub_func_uint32_t_u_u(l_645, (safe_add_func_uint16_t_u_u((((*l_648) = l_645) || l_649[0][2][0]), 0UL)))) > g_584[4])), 2)))), (-1L))))
                {
                    unsigned char **l_652 = &g_177;
                    if (((p_23 == (l_653[7][3][1] = ((*l_609) = ((void*)0 == l_652)))) | l_645))
                    {
                        (*l_542) = l_445;
                        if (p_23)
                            continue;
                    }
                    else
                    {
                        const int l_656[3] = {(-6L), (-6L), (-6L)};
                        int i;
                        (*l_543) = (p_23 != (safe_rshift_func_uint8_t_u_u(250UL, 1)));
                        if ((*l_609))
                            break;
                        return l_656[1];
                    }
                    (*l_542) = (((p_24 != l_657) & ((*l_576) = p_24)) , (((g_111[1][2] , (g_241 , &g_528)) != (void*)0) < (safe_sub_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((g_597 < (1L < g_80[1][3][0])), 1)) == g_76) , p_23), l_662[1]))));
                }
                else
                {
                    unsigned l_665 = 18446744073709551615UL;
                    unsigned long long *l_669 = &l_649[0][0][6];
                    (*l_542) = (safe_add_func_int32_t_s_s(p_24, (l_665 >= (p_24 == func_25(g_666, (g_573 < p_24), g_42, ((((safe_sub_func_int32_t_s_s(func_25(((*l_669) = 0UL), p_24, g_80[3][5][1], p_23), 4294967288UL)) > g_584[3]) == p_23) , l_670))))));
                    l_671 = &g_4;
                    (*l_542) = l_672[6][4][0];
                }
                for (g_528 = (-10); (g_528 > 26); ++g_528)
                {
                    (*l_543) = p_23;
                    for (g_76 = (-17); (g_76 >= 57); g_76++)
                    {
                        const long long l_677 = 0x29E23790E813C822LL;
                        return l_677;
                    }
                }
                g_64[1] = &l_653[7][3][1];
                if (((*l_543) , ((safe_sub_func_int16_t_s_s((g_241 < (g_241 && (safe_lshift_func_uint16_t_u_s(((*g_118) & ((void*)0 != l_648)), l_670)))), 1L)) == ((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint16_t_u_u((*l_543), g_76)))) ^ 0xD44DL))))
                {
                    unsigned short ***l_693[6] = {&l_623, &l_623, &l_623, &l_623, &l_623, &l_623};
                    unsigned short ****l_692 = &l_693[0];
                    unsigned short ***l_698[3];
                    unsigned short ****l_697 = &l_698[0];
                    unsigned ****l_703 = &g_700;
                    const int l_704 = 0xF1C80393L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_698[i] = &g_695[0];
                    (*l_542) = ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(((((((void*)0 == &l_556) <= (safe_lshift_func_uint8_t_u_u(l_691[3][0], (((g_694 = ((*l_692) = (void*)0)) == ((*l_697) = &g_695[1])) , ((((*l_640) = (g_699 == l_703)) , (((*l_609) ^ l_704) >= 0x4DL)) ^ l_662[1]))))) | (-8L)) || 0xFC0D3F49CC4F3BA8LL) , 0x3521L), 6)), 0x96843F34L)) & 0xD9L);
                    if (p_24)
                        break;
                    (*l_609) = (safe_mod_func_int32_t_s_s(((p_23 ^ (*g_702)) < (safe_rshift_func_int16_t_s_u(((*l_576) = (-9L)), 6))), l_709[4]));
                }
                else
                {
                    int *l_715 = &l_446[2][2][2];
                    for (l_670 = 0; (l_670 <= (-2)); l_670 = safe_sub_func_uint32_t_u_u(l_670, 9))
                    {
                        int **l_713 = (void*)0;
                        int **l_714 = &l_542;
                        (*l_714) = g_712;
                        (*l_714) = l_715;
                        if (p_24)
                            continue;
                        (*l_714) = (*l_714);
                    }
                }
            }
            (*l_716) = &g_4;
        }
        else
        {
            unsigned l_721 = 0UL;
            unsigned *l_722 = &l_592;
            int **l_737[10][4][2] = {{{&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}}, {{&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}}, {{&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}}, {{&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}}, {{&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}}, {{&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}}, {{&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}}, {{&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}}, {{&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}}, {{&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}, {&l_543, &l_543}}};
            const unsigned ***l_781 = (void*)0;
            const unsigned ****l_780 = &l_781;
            int i, j, k;
            if (((safe_lshift_func_uint8_t_u_s((func_30((!((!p_24) , (~0x0AEC8BB7L))), (safe_mod_func_int32_t_s_s((l_721 == ((*l_601) = l_721)), 4294967287UL)), (((*l_722) = l_721) , ((p_24 >= (safe_sub_func_uint8_t_u_u((p_24 , func_30((*l_671), p_23, (*l_542), p_24, l_721)), 6L))) , g_124)), l_721, l_725) < p_23), 2)) || (**g_701)))
            {
                int *l_732 = &g_153;
                int **l_748 = &g_64[4];
                const int l_759 = 5L;
                if (((*l_543) , (safe_sub_func_uint64_t_u_u((((((((*l_601) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(l_721, (p_23 <= (252UL && p_24)))), p_24))) , p_23) , (void*)0) != (**g_700)) || p_24) != p_24), 0xA84CD487F4C30130LL))))
                {
                    g_118 = &l_552;
                }
                else
                {
                    unsigned ****l_739 = &g_700;
                    int l_742 = 0L;
                    int l_774 = 3L;
                    const unsigned * const **l_795[1][10][2] = {{{&g_792, &g_792}, {&g_792, &g_792}, {&g_792, &g_792}, {&g_792, &g_792}, {&g_792, &g_792}, {&g_792, &g_792}, {&g_792, &g_792}, {&g_792, &g_792}, {&g_792, &g_792}, {&g_792, &g_792}}};
                    const long long l_796 = 0x23B3B6899DC9D3CCLL;
                    int i, j, k;
                    if (p_23)
                    {
                        const int **l_738 = &g_118;
                        unsigned short *l_744 = (void*)0;
                        unsigned short *l_745 = &g_450;
                        (*l_738) = &g_4;
                        (*g_712) = ((((4294967295UL && ((void*)0 == l_739)) != (*l_543)) == (***g_700)) || (((void*)0 == &l_721) , ((*l_745) = (p_23 <= ((l_742 = (safe_rshift_func_int16_t_s_u(p_23, (*l_671)))) ^ l_743)))));
                    }
                    else
                    {
                        short l_746 = (-8L);
                        if (p_23)
                            break;
                        (*g_712) = l_746;
                        if (l_746)
                            continue;
                        return g_107;
                    }
                    if (((*l_543) = (g_42 < g_180)))
                    {
                        int *l_749[4][7] = {{&l_742, &g_80[1][3][0], &l_446[3][1][7], &g_80[1][3][0], &l_742, &g_80[1][3][0], &l_446[3][1][7]}, {&l_742, &g_80[1][3][0], &l_446[3][1][7], &g_80[1][3][0], &l_742, &g_80[1][3][0], &l_446[3][1][7]}, {&l_742, &g_80[1][3][0], &l_446[3][1][7], &g_80[1][3][0], &l_742, &g_80[1][3][0], &l_446[3][1][7]}, {&l_742, &g_80[1][3][0], &l_446[3][1][7], &g_80[1][3][0], &l_742, &g_80[1][3][0], &l_446[3][1][7]}};
                        long long *l_750 = &g_584[4];
                        long long *l_751 = &g_528;
                        int i, j;
                        (*l_542) = ((*g_712) = (*g_712));
                        (*l_748) = l_749[3][4];
                        (*l_748) = &l_552;
                        (*l_543) = (!(((*g_702) = (((*l_751) = ((*l_750) = g_124)) || g_528)) && (safe_lshift_func_int8_t_s_u(g_107, 3))));
                    }
                    else
                    {
                        unsigned long long l_758 = 0x4C8E648160F04197LL;
                        long long *l_775 = &g_584[3];
                        int l_777 = (-2L);
                        if (p_23)
                            break;
                        l_777 = (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(0x1AL, 5)), (l_758 || (l_759 & (((((safe_mod_func_int64_t_s_s((((*l_775) = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0x84L, ((g_107 , func_25(((((p_23 < (((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int8_t_s_s((l_742 = (safe_add_func_int8_t_s_s(7L, (safe_lshift_func_uint8_t_u_u((p_24 && (p_23 != p_24)), l_742))))), 0L)) != 0L) , l_774), 4)) < 5L) != l_758)) < 1L) ^ 1L) , 8UL), p_23, p_23, p_24)) > l_759))), 0xBA69L))) ^ (*l_671)), g_74)) <= p_24) & l_776) ^ l_759) < p_24)))));
                    }
                    if ((!((safe_lshift_func_int8_t_s_s(l_759, 4)) , (g_241 || (l_780 != ((p_23 != (((((p_23 < 8L) , p_23) < p_23) & p_24) & (*l_542))) , (void*)0))))))
                    {
                        unsigned char l_784 = 0x0AL;
                        unsigned **l_787[3];
                        const unsigned * const ***l_794[10] = {&g_791, &g_791, &g_791, &g_791, &g_791, &g_791, &g_791, &g_791, &g_791, &g_791};
                        int i;
                        for (i = 0; i < 3; i++)
                            l_787[i] = (void*)0;
                        (*l_542) = func_25(g_528, l_784, ((func_25(((safe_lshift_func_int16_t_s_s(g_82, (&l_592 == (g_788 = l_722)))) & (safe_mod_func_int16_t_s_s(((l_795[0][7][1] = g_791) == (void*)0), l_796))), ((*l_671) , (*g_118)), g_666, p_24) , 0x8EB8L) >= p_24), p_23);
                    }
                    else
                    {
                        (*l_748) = l_797[4][5];
                        (*l_748) = (void*)0;
                    }
                }
                for (l_743 = 0; (l_743 <= 53); l_743++)
                {
                    unsigned short **l_806 = &g_696;
                    (*l_543) = (func_25(p_23, (((safe_sub_func_uint8_t_u_u(((void*)0 != &l_592), 0xC7L)) <= ((safe_mod_func_uint64_t_u_u(g_76, p_23)) , p_23)) < (safe_sub_func_int32_t_s_s(p_24, (((((*l_601) = p_24) ^ g_241) , l_806) != (void*)0)))), p_24, l_807[7][0][0]) , (-1L));
                    (*l_543) = p_24;
                }
            }
            else
            {
                int *l_808 = &l_552;
                l_808 = &l_446[2][2][2];
            }
            (*l_542) = (safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s(((*g_712) = (-1L)), 0UL)), ((safe_add_func_int32_t_s_s(func_30(func_30(((safe_lshift_func_uint8_t_u_u(func_30((p_24 , func_30((((((p_23 , (*l_543)) != ((p_24 , &l_562) != (void*)0)) > 0xD43F3A29L) > p_23) , 1L), p_23, g_124, p_23, p_23)), p_23, p_24, g_107, (*l_542)), p_23)) , (-1L)), p_24, (*l_542), p_24, l_817), (*l_543), p_24, g_153, (*l_543)), (**g_701))) , g_597)));
        }
        l_818 = (void*)0;
        l_797[4][5] = &l_552;
    }
    (*l_819) = &g_4;
    return g_584[4];
}







static char func_25(unsigned long long p_26, int p_27, long long p_28, int p_29)
{
    int *l_381[8] = {&g_42, &g_42, &g_80[1][3][0], &g_42, &g_42, &g_80[1][3][0], &g_42, &g_42};
    int **l_382[7][5] = {{&g_64[5], &l_381[5], (void*)0, &l_381[5], &g_64[5]}, {&g_64[5], &l_381[5], (void*)0, &l_381[5], &g_64[5]}, {&g_64[5], &l_381[5], (void*)0, &l_381[5], &g_64[5]}, {&g_64[5], &l_381[5], (void*)0, &l_381[5], &g_64[5]}, {&g_64[5], &l_381[5], (void*)0, &l_381[5], &g_64[5]}, {&g_64[5], &l_381[5], (void*)0, &l_381[5], &g_64[5]}, {&g_64[5], &l_381[5], (void*)0, &l_381[5], &g_64[5]}};
    int l_383 = 0x034FCF98L;
    long long *l_389 = &g_180;
    unsigned l_394 = 0x7C3F1183L;
    unsigned char * const *l_417 = &g_177;
    char l_432[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_432[i][j] = 8L;
    }
    g_118 = (g_64[5] = l_381[4]);
    p_29 = (p_27 = (l_383 = (!(0x0184L > p_26))));
    if (((safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_uint16_t_u(g_80[2][5][0])) <= (l_389 != &g_180)), (func_30(((func_30((safe_mod_func_uint16_t_u_u(func_30(g_82, p_27, (safe_add_func_uint32_t_u_u(p_26, p_29)), g_67, p_28), g_67)), g_78, g_67, p_26, p_27) != 9L) ^ p_26), g_111[1][1], g_153, l_394, p_26) , 0xA29CE088B177BA79LL))), 0xC0D582A1L)) , (*g_118)))
    {
        unsigned char l_395[4];
        long long l_415 = 1L;
        int i;
        for (i = 0; i < 4; i++)
            l_395[i] = 0xB2L;
        for (g_76 = 0; (g_76 <= 2); g_76 += 1)
        {
            short l_404 = 0x967CL;
            int *l_405[2];
            int i;
            for (i = 0; i < 2; i++)
                l_405[i] = (void*)0;
            p_29 = l_395[2];
            for (p_26 = 0; (p_26 <= 2); p_26 += 1)
            {
                unsigned short l_399 = 0x8CA1L;
                unsigned short l_403[5][5][6] = {{{0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}}, {{0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}}, {{0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}}, {{0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}}, {{0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}, {0x418CL, 1UL, 0x38F6L, 65532UL, 9UL, 4UL}}};
                char *l_408 = &g_87;
                unsigned *l_411 = (void*)0;
                unsigned *l_412 = &g_78;
                short *l_413 = &l_404;
                int l_416[10][5] = {{(-1L), 0xC9924687L, (-1L), 1L, 0xF6CF41A4L}, {(-1L), 0xC9924687L, (-1L), 1L, 0xF6CF41A4L}, {(-1L), 0xC9924687L, (-1L), 1L, 0xF6CF41A4L}, {(-1L), 0xC9924687L, (-1L), 1L, 0xF6CF41A4L}, {(-1L), 0xC9924687L, (-1L), 1L, 0xF6CF41A4L}, {(-1L), 0xC9924687L, (-1L), 1L, 0xF6CF41A4L}, {(-1L), 0xC9924687L, (-1L), 1L, 0xF6CF41A4L}, {(-1L), 0xC9924687L, (-1L), 1L, 0xF6CF41A4L}, {(-1L), 0xC9924687L, (-1L), 1L, 0xF6CF41A4L}, {(-1L), 0xC9924687L, (-1L), 1L, 0xF6CF41A4L}};
                int i, j, k;
                for (g_78 = 0; (g_78 <= 7); g_78 += 1)
                {
                    int **l_402 = &l_381[4];
                }
                if (g_111[g_76][(p_26 + 1)])
                    break;
                l_416[4][0] = func_30(g_241, ((+func_30(((safe_mod_func_uint16_t_u_u((l_395[2] & ((*l_408) = p_26)), ((7L != (safe_rshift_func_int16_t_s_s(((*l_413) = (((*l_412) = 0x4F25B496L) , g_42)), 4))) ^ 0xA779L))) , p_26), ((l_395[0] >= g_111[2][2]) > g_414[2][1]), l_403[2][3][0], p_26, l_395[1])) & l_415), l_395[2], g_4, (*g_118));
                for (g_87 = 7; (g_87 >= 0); g_87 -= 1)
                {
                    int i;
                    l_416[3][1] = 0xB632932BL;
                }
            }
        }
        p_27 = ((void*)0 != l_417);
    }
    else
    {
        int l_426 = 0x34654585L;
        char *l_431 = &g_259;
        p_27 = (safe_sub_func_uint32_t_u_u((~(((safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((((p_27 | ((0x6DC0L > ((safe_rshift_func_uint8_t_u_s(p_27, 5)) != (g_4 < (((((g_153 = (g_414[1][5] | l_426)) , (safe_add_func_uint32_t_u_u((((safe_add_func_int8_t_s_s(((*l_431) = 0L), g_298)) , g_241) || 0UL), p_28))) , 0x02D4ADF3L) || 4UL) == g_124)))) || g_42)) , (void*)0) != (void*)0), l_432[0][0])), 0x4282L)) ^ 1L) & 0xB8D83AC8L)), 0x850474A2L));
        for (g_78 = (-28); (g_78 == 44); g_78++)
        {
            int l_439 = 0x347DF2BAL;
            int l_440 = 0L;
            int *l_441 = &g_298;
            l_440 = ((safe_mod_func_int64_t_s_s((!(p_29 > 0x59L)), g_298)) > (safe_add_func_uint64_t_u_u(18446744073709551613UL, l_439)));
            l_441 = &l_440;
        }
        if (p_28)
        {
            unsigned short l_442 = 65535UL;
            p_27 = l_442;
            return g_259;
        }
        else
        {
            p_29 = (*g_118);
        }
    }
    return g_80[1][3][0];
}







static const char func_30(int p_31, unsigned short p_32, unsigned long long p_33, int p_34, int p_35)
{
    int *l_378 = &g_80[3][1][0];
    int **l_379 = &l_378;
    int **l_380 = &g_64[5];
    l_378 = &p_35;
    (*l_380) = ((*l_379) = &g_298);
    return p_33;
}







static unsigned long long func_37(unsigned long long p_38, unsigned p_39, const unsigned char p_40)
{
    int *l_41 = &g_42;
    int **l_43 = &l_41;
    char *l_125 = &g_87;
    const int *l_140[6][7];
    short *l_146 = (void*)0;
    short *l_185 = &g_67;
    unsigned l_205 = 0xADD83B3EL;
    long long l_228 = 0L;
    unsigned *l_238 = (void*)0;
    unsigned char l_243 = 0x8CL;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
            l_140[i][j] = &g_80[1][8][1];
    }
    (*l_43) = l_41;
    if (p_38)
    {
        int *l_53 = &g_42;
        int **l_119 = (void*)0;
        short *l_145 = &g_124;
        unsigned long long l_147 = 0x92FA6678658A4148LL;
        unsigned char *l_164 = &g_111[0][0];
        unsigned long long l_174[2][7] = {{1UL, 1UL, 0x781CC2B1C82E662CLL, 0x781CC2B1C82E662CLL, 1UL, 1UL, 1UL}, {1UL, 1UL, 0x781CC2B1C82E662CLL, 0x781CC2B1C82E662CLL, 1UL, 1UL, 1UL}};
        long long l_216 = (-7L);
        unsigned *l_221 = &l_205;
        unsigned **l_220 = &l_221;
        unsigned short l_232 = 0x9B32L;
        unsigned long long l_271 = 1UL;
        long long *l_376 = &l_228;
        long long **l_375 = &l_376;
        int i, j;
        if ((**l_43))
        {
            int l_60[4][8] = {{0x533F2A6AL, 0L, 0x533F2A6AL, 0L, 0x533F2A6AL, 0L, 0x533F2A6AL, 0L}, {0x533F2A6AL, 0L, 0x533F2A6AL, 0L, 0x533F2A6AL, 0L, 0x533F2A6AL, 0L}, {0x533F2A6AL, 0L, 0x533F2A6AL, 0L, 0x533F2A6AL, 0L, 0x533F2A6AL, 0L}, {0x533F2A6AL, 0L, 0x533F2A6AL, 0L, 0x533F2A6AL, 0L, 0x533F2A6AL, 0L}};
            unsigned long long *l_81[6][1][6] = {{{&g_82, &g_82, &g_82, &g_82, &g_82, &g_82}}, {{&g_82, &g_82, &g_82, &g_82, &g_82, &g_82}}, {{&g_82, &g_82, &g_82, &g_82, &g_82, &g_82}}, {{&g_82, &g_82, &g_82, &g_82, &g_82, &g_82}}, {{&g_82, &g_82, &g_82, &g_82, &g_82, &g_82}}, {{&g_82, &g_82, &g_82, &g_82, &g_82, &g_82}}};
            int l_112 = 0x6265DC7DL;
            unsigned short l_114 = 0UL;
            char *l_126 = (void*)0;
            short l_129[2];
            int **l_148 = &l_41;
            unsigned l_194 = 0x496808D4L;
            char l_204 = 6L;
            unsigned l_239 = 0xA7C0EDF7L;
            int **l_305 = &l_41;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_129[i] = 2L;
            if (((((*l_53) = func_44(p_40, ((p_38 = func_48(g_4, l_53, (p_39 & ((p_39 < (((g_42 , (((safe_rshift_func_uint16_t_u_s(g_42, 15)) && (safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_4, l_60[3][0])), (*l_41)))) ^ l_60[1][3])) , p_38) , g_42)) , g_4)), l_60[3][0])) , g_67), &l_41)) && p_38) && 4UL))
            {
                const unsigned long long l_100 = 0UL;
                unsigned char *l_110 = &g_111[2][2];
                unsigned *l_113[8] = {(void*)0, (void*)0, &g_78, (void*)0, (void*)0, &g_78, (void*)0, (void*)0};
                int l_115 = 0xD8B2F8DCL;
                short *l_122 = (void*)0;
                short *l_123 = &g_124;
                int i;
                (**l_43) = ((l_100 >= (safe_rshift_func_uint8_t_u_s((!((l_115 = func_44(g_87, g_4, &l_53)) != 0x4BAAL)), 5))) & 8UL);
                for (p_38 = 0; (p_38 <= 0); p_38 += 1)
                {
                    for (l_114 = 0; (l_114 <= 0); l_114 += 1)
                    {
                        const int *l_117[2];
                        const int **l_116 = &l_117[0];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_117[i] = (void*)0;
                        (*l_43) = &g_42;
                        (*l_116) = &g_4;
                        g_118 = &g_4;
                    }
                    for (g_67 = 0; (g_67 >= 0); g_67 -= 1)
                    {
                        (**l_43) = (*g_118);
                        if (p_39)
                            continue;
                        return p_39;
                    }
                }
                l_112 = l_100;
                if (((*l_41) = (p_39 && (((((safe_lshift_func_int8_t_s_s(((void*)0 != l_122), 4)) , (func_48(g_80[2][2][0], &l_115, p_40, p_40) | ((*l_123) = g_67))) >= p_40) , (void*)0) != (void*)0))))
                {
                    for (g_82 = 2; (g_82 <= 7); g_82 += 1)
                    {
                        (*l_53) = p_38;
                    }
                    (*l_43) = ((((g_42 ^ (p_38 = g_80[2][0][0])) == ((**l_43) != ((g_107 <= p_40) & ((((((l_125 != l_126) > (!(l_60[2][2] && (((l_129[0] = (safe_rshift_func_uint8_t_u_s(247UL, 6))) <= g_74) , g_74)))) | 0xDF114FADL) > 0xA35A1EF9L) != l_115) && p_39)))) > p_39) , (void*)0);
                    (*l_43) = &l_115;
                }
                else
                {
                    int *l_130 = &g_80[1][3][0];
                    (*l_43) = l_130;
                    (*l_41) = (safe_mod_func_int64_t_s_s((0xB1527D319CEE6839LL < (safe_mod_func_uint64_t_u_u(((*l_130) , (g_80[1][3][0] , g_111[2][2])), g_82))), g_82));
                    (*l_43) = l_130;
                }
            }
            else
            {
                g_64[5] = ((*l_43) = (void*)0);
                if (p_38)
                {
                    for (g_82 = 13; (g_82 != 38); g_82 = safe_add_func_int32_t_s_s(g_82, 6))
                    {
                        int ***l_137 = &l_43;
                        (*l_137) = &g_64[5];
                    }
                    g_64[5] = &l_112;
                    l_112 = p_38;
                    for (g_76 = 0; g_76 < 3; g_76 += 1)
                    {
                        for (p_38 = 0; p_38 < 4; p_38 += 1)
                        {
                            g_111[g_76][p_38] = 246UL;
                        }
                    }
                }
                else
                {
                    const int *l_138 = &g_42;
                    const int **l_139 = (void*)0;
                    l_140[0][3] = l_138;
                }
                (*l_43) = &g_80[0][1][1];
            }
            if (((safe_mod_func_int16_t_s_s(0x7037L, 65530UL)) , (0x361AL < (safe_mod_func_uint64_t_u_u(1UL, g_42)))))
            {
                int *l_178 = &l_112;
                int ***l_199 = &l_119;
                unsigned *l_218 = &l_205;
                unsigned **l_217[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_217[i] = &l_218;
                (*l_53) = ((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(p_39, 13)) & p_38), 1)) <= (p_40 , g_153));
                if ((safe_lshift_func_uint16_t_u_s(g_42, (safe_add_func_int32_t_s_s((*g_118), ((void*)0 != &g_82))))))
                {
                    int **l_171 = (void*)0;
                    int **l_172 = &l_41;
                    int **l_173 = &g_64[5];
                    unsigned char *l_176 = &g_74;
                    unsigned char **l_175 = &l_176;
                    long long *l_179 = &g_180;
                    const int *l_188 = &g_42;
                    if ((safe_add_func_uint16_t_u_u((p_39 != ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(1UL, (-1L))), p_39)) <= (((!(l_164 != (g_177 = ((*l_175) = (((*l_164) = (safe_sub_func_int8_t_s_s((((((*l_125) = (safe_sub_func_uint16_t_u_u((1UL ^ (p_38 = ((safe_lshift_func_uint16_t_u_u(0xF76DL, ((&g_80[1][3][0] == ((*l_173) = &l_112)) & g_82))) >= p_39))), p_40))) <= p_40) | l_174[1][0]) | p_40), g_107))) , (void*)0))))) ^ p_39) <= g_80[1][3][0]))), p_39)))
                    {
                        (*l_43) = &g_42;
                        (*l_173) = l_178;
                        g_118 = &g_80[0][6][0];
                    }
                    else
                    {
                        unsigned *l_183[2][3][4] = {{{&g_78, (void*)0, &g_78, &g_78}, {&g_78, (void*)0, &g_78, &g_78}, {&g_78, (void*)0, &g_78, &g_78}}, {{&g_78, (void*)0, &g_78, &g_78}, {&g_78, (void*)0, &g_78, &g_78}, {&g_78, (void*)0, &g_78, &g_78}}};
                        int l_184[7][3][6] = {{{4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}}, {{4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}}, {{4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}}, {{4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}}, {{4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}}, {{4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}}, {{4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}, {4L, 0x727DB1D5L, 0x704ADF11L, (-1L), 1L, (-3L)}}};
                        int i, j, k;
                        (*l_178) = (p_40 >= (g_78 = (l_179 == ((safe_mod_func_int64_t_s_s(p_40, p_39)) , l_81[4][0][4]))));
                        (*l_178) = func_48(p_38, &g_80[0][1][0], (*g_118), l_184[1][1][5]);
                        (*l_148) = &g_42;
                    }
                    for (l_114 = 0; (l_114 <= 2); l_114 += 1)
                    {
                        int l_186 = (-7L);
                        const int **l_187[3][5][8] = {{{&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}}, {{&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}}, {{&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}, {&l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3], &l_140[1][0], &l_140[0][3]}}};
                        int i, j, k;
                        l_186 = (((*l_179) = (g_111[2][2] > ((((g_78 , p_39) , l_146) != l_185) != g_87))) , 1L);
                        l_188 = l_140[1][3];
                    }
                    for (g_124 = 3; (g_124 >= 0); g_124 -= 1)
                    {
                        const int l_189 = (-1L);
                        (*l_53) = l_189;
                        (*l_178) = (safe_add_func_int16_t_s_s((((safe_mod_func_int64_t_s_s(l_194, ((1UL && ((safe_mod_func_int8_t_s_s(((g_74 = (safe_sub_func_int64_t_s_s(((((void*)0 != l_199) , 6UL) != ((*l_185) = (((+((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((p_40 || (-1L)), (((*l_164) = (*l_53)) < 7UL))), 0x26L)) , g_82)) & 0x97L) , 0x0C45L))), 0x2E520C17DBC78BEFLL))) < 251UL), 255UL)) ^ l_204)) & 0x77L))) , (*l_178)) != 0xEE515C3C2E177147LL), l_205));
                        return g_107;
                    }
                    if ((((&l_205 != (p_39 , &g_78)) || ((p_38 == ((*l_178) > ((((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((void*)0 != &p_40) ^ (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(p_38, 3)) | (((*l_179) = g_153) , (*l_188))), 8)), 6))), g_87)), p_40)) >= l_216) | g_74) <= g_107))) ^ p_39)) <= (-8L)))
                    {
                        unsigned ***l_219[10][4] = {{&l_217[6], &l_217[3], &l_217[3], &l_217[3]}, {&l_217[6], &l_217[3], &l_217[3], &l_217[3]}, {&l_217[6], &l_217[3], &l_217[3], &l_217[3]}, {&l_217[6], &l_217[3], &l_217[3], &l_217[3]}, {&l_217[6], &l_217[3], &l_217[3], &l_217[3]}, {&l_217[6], &l_217[3], &l_217[3], &l_217[3]}, {&l_217[6], &l_217[3], &l_217[3], &l_217[3]}, {&l_217[6], &l_217[3], &l_217[3], &l_217[3]}, {&l_217[6], &l_217[3], &l_217[3], &l_217[3]}, {&l_217[6], &l_217[3], &l_217[3], &l_217[3]}};
                        int l_229 = 0L;
                        int i, j;
                        (*l_43) = &g_80[2][5][1];
                        l_220 = l_217[3];
                        (*l_53) = (safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(p_39, (l_229 = ((safe_lshift_func_uint8_t_u_u(g_87, (l_228 , p_40))) && ((*l_125) = 0xF9L))))) , (p_40 & ((p_40 == ((*l_179) = p_40)) && (safe_mod_func_uint16_t_u_u((0xA556L && 0x1D48L), (-1L)))))), p_40));
                        (*l_178) = ((l_232 & 0xBCL) == 0x41C5EEF0L);
                    }
                    else
                    {
                        const unsigned l_235 = 0x1EAA5467L;
                        unsigned char *l_240 = &g_74;
                        int l_242 = 0xA16B0A57L;
                        (*l_178) = (((*l_53) == ((safe_add_func_uint16_t_u_u(g_153, (l_235 > (safe_sub_func_int64_t_s_s((((((l_238 = &g_78) != (((g_111[2][2] == (p_38 < ((g_241 = ((*l_240) = l_239)) < 0UL))) >= (l_242 = g_67)) , (void*)0)) > 0L) != p_38) , (*l_53)), g_82))))) | l_243)) , p_40);
                    }
                }
                else
                {
                    unsigned l_244 = 4294967293UL;
                    if (((((p_38 = ((l_244 || (safe_mod_func_uint32_t_u_u(4294967295UL, 1L))) < ((((p_40 ^ (p_40 ^ p_38)) > (p_38 == ((safe_mod_func_uint8_t_u_u(p_39, (((*l_185) = (safe_lshift_func_int8_t_s_u(g_82, 7))) || g_124))) , 1L))) , p_38) , g_82))) | g_241) , g_80[1][3][0]) == 0UL))
                    {
                        char *l_257 = &l_204;
                        char *l_258 = &g_259;
                        long long *l_260 = &l_228;
                        (*l_178) = (((p_39 , ((*l_260) = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0x878FL, ((&l_243 == (p_38 , &g_74)) || p_40))), (safe_mod_func_int8_t_s_s((l_244 && ((*l_258) = (0xB5FDL > (((*l_257) = ((*l_125) = (l_244 ^ p_40))) < p_39)))), p_40)))))) , 0xAA87F732D4BDB758LL) && p_39);
                    }
                    else
                    {
                        (*l_148) = l_218;
                    }
                }
                for (g_74 = 0; (g_74 <= 0); g_74 += 1)
                {
                    if ((((void*)0 == &g_259) , (*l_53)))
                    {
                        const int **l_261 = &l_140[0][6];
                        (*l_178) = p_39;
                        if ((*g_118))
                            continue;
                        (*l_261) = &g_4;
                        l_112 = p_40;
                    }
                    else
                    {
                        (*l_178) = 1L;
                    }
                    return g_80[2][8][1];
                }
                (*l_178) = (func_48(((!p_40) , 0x705CL), &g_42, l_271, (*l_178)) ^ (*l_178));
            }
            else
            {
                int l_272 = 7L;
                int *l_297 = &g_298;
                unsigned * const *l_308 = &l_221;
                if (l_272)
                {
                    int * const l_273 = (void*)0;
                    int **l_274 = &g_64[1];
                    (*l_53) = l_272;
                    (*l_274) = l_273;
                    for (g_67 = (-13); (g_67 != 23); g_67++)
                    {
                        char l_281 = 0xC5L;
                        int *l_286 = &g_80[1][3][0];
                        l_272 = (safe_mod_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u((&l_43 == ((((*l_53) = ((l_281 & ((+p_40) ^ ((*l_164) = ((*g_177) = l_272)))) == (safe_lshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((g_4 != (p_40 < ((void*)0 != &l_239))) ^ (+(g_177 == &p_40))), l_272)) | l_281), g_78)))) || p_40) , (void*)0)), 0x2D7FBB29L)) , p_38) , l_281), 3UL));
                        l_286 = (void*)0;
                        (*l_274) = (void*)0;
                    }
                }
                else
                {
                    int *l_296 = &l_112;
                    int l_299 = 0xD5187F81L;
                    for (g_259 = 12; (g_259 != 16); g_259++)
                    {
                        int *l_289 = &g_80[1][3][0];
                        (*l_43) = l_289;
                        if (p_38)
                            break;
                    }
                    (*l_297) = (safe_lshift_func_uint16_t_u_s((((0xAAL <= ((p_40 >= (p_39 >= 0x5EL)) | func_48((l_272 , ((((~(safe_sub_func_uint8_t_u_u((+p_38), 1L))) && func_48((l_272 = (((p_39 && (safe_sub_func_int32_t_s_s(func_48((l_272 < 0x7922EA5CE5B989AALL), &g_80[1][8][0], p_38, g_76), p_38))) && 0x2AL) , 1L)), l_296, p_40, p_40)) , 2L) <= g_111[1][1])), l_297, l_299, p_40))) <= (-9L)) , 0x9042L), 0));
                    (*l_148) = &l_272;
                }
                for (l_204 = 5; (l_204 >= 1); l_204 -= 1)
                {
                    int l_300 = (-1L);
                    int l_328 = 0x9CFFEB18L;
                    short *l_340 = &l_129[1];
                    int *l_343 = &l_60[3][0];
                    if ((l_300 & p_38))
                    {
                        (*l_53) = ((safe_mod_func_uint8_t_u_u(0xC3L, p_40)) , (l_308 == (void*)0));
                    }
                    else
                    {
                        int l_325 = 1L;
                        unsigned short *l_329 = &l_232;
                        int i;
                        (*l_297) = ((safe_sub_func_uint8_t_u_u((!(safe_sub_func_int16_t_s_s(((*l_185) = p_40), l_300))), p_39)) , (*g_118));
                        (*l_297) = (safe_mod_func_uint64_t_u_u((l_300 , (p_38 = (g_107 && 0UL))), (+(safe_mod_func_int16_t_s_s(l_300, p_40)))));
                    }
                    (*l_53) = ((safe_rshift_func_int16_t_s_s(((!(((*l_343) = (safe_add_func_int32_t_s_s((*l_297), (safe_rshift_func_uint16_t_u_u((((((g_82 = (g_76 || (((*g_177) ^ ((void*)0 != l_340)) , g_111[2][2]))) , &l_272) == &l_272) , ((safe_sub_func_uint16_t_u_u((0UL >= 0UL), g_42)) >= (*l_297))) && 0xBA5D0A36L), 6))))) , 4L)) , 1L), (*l_297))) , (*g_118));
                    return g_111[2][2];
                }
            }
        }
        else
        {
            unsigned short l_344[2][7];
            int *l_352 = &g_80[0][4][1];
            unsigned l_369 = 3UL;
            long long **l_373 = (void*)0;
            long long ***l_374 = &l_373;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_344[i][j] = 0xDFA5L;
            }
            l_344[1][6] = (*g_118);
            for (g_74 = 11; (g_74 == 10); g_74--)
            {
                int *l_347[3][7][2] = {{{&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}}, {{&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}}, {{&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}, {&g_42, &g_80[0][1][0]}}};
                int i, j, k;
                (*l_43) = (p_39 , l_347[0][4][1]);
                (*l_43) = (*l_43);
            }
            if (p_38)
            {
                return (*l_53);
            }
            else
            {
                int l_348 = (-1L);
                int *l_358 = &g_80[2][6][1];
                if (((*l_41) = l_348))
                {
                    int * const l_349 = &g_80[1][3][0];
                    int **l_350 = &l_53;
                    unsigned char **l_351 = &l_164;
                    (*l_350) = l_349;
                    if ((((*l_351) = (void*)0) == (p_38 , &g_111[1][3])))
                    {
                        (*l_350) = l_352;
                    }
                    else
                    {
                        long long *l_357 = &g_180;
                        (*l_352) = (**l_43);
                        (*l_358) = (safe_sub_func_int16_t_s_s(1L, (((0L <= g_180) , (safe_sub_func_uint32_t_u_u(((+(((*l_357) = g_298) | (&l_228 != (void*)0))) | g_241), (l_358 == (void*)0)))) < g_82)));
                    }
                }
                else
                {
                    for (l_147 = 0; (l_147 < 19); l_147++)
                    {
                        (*l_43) = l_352;
                    }
                }
                (**l_43) = p_40;
                for (g_298 = 2; (g_298 > 23); g_298++)
                {
                    const int *l_363 = (void*)0;
                    const int **l_364 = &l_140[1][0];
                    (*l_364) = l_363;
                    for (g_241 = 0; (g_241 <= 48); g_241++)
                    {
                        unsigned long long *l_370 = &l_174[1][0];
                        (*l_53) = (0x20EDL | p_38);
                        (*l_358) = (((*l_145) = p_38) && ((p_38 & (((l_370 = &g_82) != (void*)0) | 0L)) == 2L));
                    }
                }
                (*l_358) = (((safe_lshift_func_uint16_t_u_s((p_40 <= func_48(p_40, l_352, (*l_352), g_80[2][6][0])), g_82)) < (!p_38)) >= (g_298 > g_87));
            }
            l_375 = ((*l_374) = l_373);
        }
    }
    else
    {
        return p_38;
    }
    return p_38;
}







static int func_44(int p_45, short p_46, int ** p_47)
{
    unsigned l_85 = 8UL;
    char *l_86[2];
    int l_88 = 0xD8D27FD7L;
    short *l_91 = (void*)0;
    int l_92 = 0x835AC29FL;
    unsigned long long *l_93 = &g_82;
    unsigned long long *l_94[1];
    int l_95 = 2L;
    int *l_96 = (void*)0;
    int *l_97 = &g_80[1][3][0];
    int i;
    for (i = 0; i < 2; i++)
        l_86[i] = &g_87;
    for (i = 0; i < 1; i++)
        l_94[i] = (void*)0;
    (*l_97) = ((safe_mod_func_int32_t_s_s((p_46 == (l_88 = l_85)), ((**p_47) = (**p_47)))) >= (p_45 >= (((safe_add_func_int16_t_s_s((l_92 = g_80[0][9][1]), (0x986173B0L < ((l_95 = ((*l_93) = 18446744073709551615UL)) <= (1UL >= p_46))))) || g_82) || l_95)));
    (*p_47) = &l_88;
    (*p_47) = &g_80[2][6][0];
    (*l_97) = (safe_lshift_func_uint8_t_u_s(p_45, 7));
    return (*l_97);
}







static unsigned long long func_48(short p_49, int * p_50, int p_51, unsigned short p_52)
{
    unsigned short l_61[10];
    int *l_62 = &g_42;
    int **l_63 = (void*)0;
    int **l_65 = &l_62;
    short *l_66[7][3] = {{&g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67}, {&g_67, &g_67, &g_67}};
    unsigned char *l_72 = (void*)0;
    unsigned char *l_73 = &g_74;
    long long *l_75[2];
    unsigned *l_77 = &g_78;
    int *l_79 = &g_80[1][3][0];
    int i, j;
    for (i = 0; i < 10; i++)
        l_61[i] = 0x520CL;
    for (i = 0; i < 2; i++)
        l_75[i] = (void*)0;
    (*p_50) = l_61[9];
    (*l_65) = (g_64[5] = l_62);
    (*l_79) = (p_51 = (p_49 && ((g_42 , ((*l_62) = (p_52 , (+p_52)))) != (((*l_77) = ((safe_mod_func_uint64_t_u_u((0x7519BA600AC80EABLL > g_67), ((safe_rshift_func_uint16_t_u_s(((g_67 <= ((*l_73) = 0xC2L)) || ((g_76 = g_67) , p_51)), p_49)) | p_51))) == (-5L))) > g_4))));
    return (*l_62);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_80[i][j][k], "g_80[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_111[i][j], "g_111[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_414[i][j], "g_414[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_584[i], "g_584[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_666, "g_666", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    transparent_crc(g_865, "g_865", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_926, "g_926", print_hash_value);
    transparent_crc(g_987, "g_987", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1039[i], "g_1039[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
