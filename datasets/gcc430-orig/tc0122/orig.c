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


struct S0 {
   unsigned f0 : 13;
   unsigned f1 : 14;
   const unsigned f2 : 24;
   signed f3 : 4;
};


static struct S0 g_10 = {30,13,4038,-2};
static int g_34 = 0x3D385E13L;
static unsigned g_66 = 1UL;
static short g_77 = 1L;
static short g_78[4] = {0x9976L, 0x9976L, 0x9976L, 0x9976L};
static unsigned char g_80 = 249UL;
static unsigned short g_105[7] = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
static int g_106 = 0xD8B3B4CCL;
static unsigned g_126[1][10] = {{18446744073709551615UL, 0x825BC706L, 18446744073709551615UL, 0x825BC706L, 18446744073709551615UL, 0x825BC706L, 18446744073709551615UL, 0x825BC706L, 18446744073709551615UL, 0x825BC706L}};
static unsigned g_140 = 0x56599A50L;
static unsigned g_152 = 18446744073709551615UL;
static unsigned g_160 = 1UL;
static unsigned short g_165 = 0x4BCFL;
static unsigned char g_170[5] = {0x41L, 0x41L, 0x41L, 0x41L, 0x41L};
static char g_189 = (-2L);
static int g_194[9][6] = {{1L, 0xA440665DL, 0xE99CA764L, 0xA440665DL, 1L, 0xA440665DL}, {1L, 0xA440665DL, 0xE99CA764L, 0xA440665DL, 1L, 0xA440665DL}, {1L, 0xA440665DL, 0xE99CA764L, 0xA440665DL, 1L, 0xA440665DL}, {1L, 0xA440665DL, 0xE99CA764L, 0xA440665DL, 1L, 0xA440665DL}, {1L, 0xA440665DL, 0xE99CA764L, 0xA440665DL, 1L, 0xA440665DL}, {1L, 0xA440665DL, 0xE99CA764L, 0xA440665DL, 1L, 0xA440665DL}, {1L, 0xA440665DL, 0xE99CA764L, 0xA440665DL, 1L, 0xA440665DL}, {1L, 0xA440665DL, 0xE99CA764L, 0xA440665DL, 1L, 0xA440665DL}, {1L, 0xA440665DL, 0xE99CA764L, 0xA440665DL, 1L, 0xA440665DL}};
static unsigned g_197 = 18446744073709551615UL;
static unsigned g_281 = 18446744073709551615UL;
static char g_289 = (-1L);
static char g_292[9] = {0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L};
static unsigned char g_294 = 1UL;
static int g_318 = 0x7037FAAFL;
static struct S0 g_368 = {59,97,3345,3};
static unsigned g_456 = 4UL;
static int g_499 = 1L;
static char g_500 = 1L;
static int g_501 = 0x8774DBBFL;
static int g_503 = 1L;
static unsigned g_514[6][3] = {{0x5753612FL, 0x5753612FL, 0x85A12716L}, {0x5753612FL, 0x5753612FL, 0x85A12716L}, {0x5753612FL, 0x5753612FL, 0x85A12716L}, {0x5753612FL, 0x5753612FL, 0x85A12716L}, {0x5753612FL, 0x5753612FL, 0x85A12716L}, {0x5753612FL, 0x5753612FL, 0x85A12716L}};
static int g_518 = 9L;
static int g_519 = 0L;
static char g_520 = 0x94L;
static int g_521 = 8L;
static unsigned short g_522 = 65531UL;
static char g_599[10] = {0x49L, 0x49L, (-1L), 0x49L, 0x49L, (-1L), 0x49L, 0x49L, (-1L), 0x49L};
static short g_602 = 0xCDC3L;
static unsigned g_603 = 1UL;
static unsigned char g_671[8] = {0x7AL, 0UL, 0x7AL, 0UL, 0x7AL, 0UL, 0x7AL, 0UL};
static unsigned short g_686[10] = {0x71CCL, 0UL, 65535UL, 65535UL, 0UL, 0x71CCL, 0UL, 65535UL, 65535UL, 0UL};
static int g_691[4][8] = {{5L, 6L, (-1L), 6L, 5L, 0x841FBED7L, 5L, 6L}, {5L, 6L, (-1L), 6L, 5L, 0x841FBED7L, 5L, 6L}, {5L, 6L, (-1L), 6L, 5L, 0x841FBED7L, 5L, 6L}, {5L, 6L, (-1L), 6L, 5L, 0x841FBED7L, 5L, 6L}};
static const unsigned g_771 = 0xEFACC3AEL;
static unsigned short g_800 = 0xC598L;
static int g_915[10][8][3] = {{{0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}}, {{0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}}, {{0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}}, {{0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}}, {{0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}}, {{0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}}, {{0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}}, {{0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}}, {{0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}}, {{0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}, {0x95D05DD2L, 0x95D05DD2L, 0xEDF8B9FCL}}};
static int g_964 = 0x49D773E5L;
static unsigned char g_1034[1] = {0xAAL};
static int g_1094 = 0x3E31E88EL;
static int g_1170 = 0x0038CCC9L;
static unsigned short g_1289 = 0x4D32L;
static struct S0 g_1428 = {78,63,2834,-2};
static unsigned g_1474 = 4294967291UL;
static unsigned g_1488 = 5UL;



static unsigned func_1(void);
static int func_2(int p_3, struct S0 p_4, unsigned p_5, unsigned short p_6);
static short func_12(unsigned short p_13, short p_14, int p_15, unsigned char p_16);
static char func_17(char p_18, unsigned p_19);
static unsigned func_22(unsigned char p_23);
static unsigned short func_29(struct S0 p_30, struct S0 p_31, const struct S0 p_32);
static char func_37(const unsigned short p_38, int p_39, int p_40, unsigned p_41, unsigned short p_42);
static unsigned short func_43(unsigned char p_44);
static char func_45(struct S0 p_46, unsigned short p_47, unsigned char p_48, const struct S0 p_49, unsigned short p_50);
static unsigned func_53(unsigned short p_54, const unsigned short p_55, unsigned char p_56, struct S0 p_57);
static unsigned func_1(void)
{
    const int l_9 = 0x009CE456L;
    unsigned l_11 = 0xBB7AB61BL;
    int l_1169 = 0xFAF3CCEFL;
    unsigned char l_1181 = 255UL;
    int l_1182 = 8L;
    struct S0 l_1239 = {40,90,1011,2};
    int l_1242 = 0xDEA409A6L;
    unsigned l_1245 = 0xD983CF35L;
    unsigned short l_1353 = 65535UL;
    int l_1381[8] = {(-1L), 0x8B644055L, (-1L), 0x8B644055L, (-1L), 0x8B644055L, (-1L), 0x8B644055L};
    unsigned l_1384 = 0xC16B3322L;
    unsigned l_1393 = 4294967294UL;
    unsigned char l_1443[1][4];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_1443[i][j] = 1UL;
    }
    g_915[9][0][2] = func_2((safe_add_func_int8_t_s_s(l_9, (0x3C61L <= 1L))), g_10, l_11, l_11);
    if ((l_1182 = ((!((l_1169 = g_514[5][0]) == (g_1170 && ((0x8DF4E0B3L <= (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((5L ^ g_140), 2L)), (l_9 == g_518))), (safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_194[4][3], l_1181)), 0xA8L))))) ^ g_289)))) != g_368.f3)))
    {
        unsigned l_1187 = 0x53BC42D6L;
        l_1169 &= g_771;
        l_1169 &= (safe_lshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s(l_1182, l_1187)) != g_514[3][2]) > (0x44FCL ^ g_105[2])), 4));
    }
    else
    {
        short l_1190 = 0x1EC0L;
        int l_1197 = 0L;
        int l_1200[10];
        int i;
        for (i = 0; i < 10; i++)
            l_1200[i] = 0x49A8E0B6L;
        g_915[4][0][1] = (safe_mod_func_int8_t_s_s(0L, ((l_1197 = ((l_1190 | (func_22(func_12(g_106, (l_1190 && (safe_sub_func_uint8_t_u_u((((((l_1190 | (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(0x9D9BL, ((l_1182 &= (0x0869L < ((1L | g_66) < 0xEFBBL))) < g_456))), g_105[1]))) && 0xE898A1A0L) != l_1190) != g_105[3]) != g_10.f3), g_915[4][0][1]))), l_1190, l_1190)) | g_194[3][1])) < g_10.f2)) || g_499)));
        l_1200[3] &= (safe_sub_func_uint8_t_u_u(l_9, l_1197));
    }
    for (g_522 = 2; (g_522 == 47); ++g_522)
    {
        const short l_1203 = 0L;
        unsigned l_1218 = 0x7C4FFC4CL;
        int l_1219 = 0xC88343B6L;
        int l_1220 = (-2L);
        l_1220 = (l_1203 & (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((!func_12(g_686[8], (g_281 ^ (safe_add_func_uint32_t_u_u(((((((g_194[8][3] >= g_189) <= (((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_1203, (0xDB2EL <= (((safe_rshift_func_int8_t_s_s(l_1203, (+(l_1219 ^= (safe_lshift_func_int8_t_s_s((g_800 ^ l_1203), l_1218)))))) <= 3UL) | 0x32L)))), l_1203)) < l_9) & g_602)) < g_603) > 0xEC967E2AL) == g_691[0][2]) | 0xC5L), g_78[1]))), g_318, l_1182)), l_1203)), g_771)));
    }
    for (l_11 = 0; (l_11 <= 2); l_11 += 1)
    {
        unsigned char l_1221 = 255UL;
        struct S0 l_1222 = {1,127,2562,0};
        unsigned l_1241 = 0x6B447EA3L;
        int l_1306 = 0xFD4A4CEAL;
        char l_1374[4];
        short l_1421[10];
        int l_1449 = 0x90AE338DL;
        unsigned char l_1450 = 0xF0L;
        char l_1459 = 0x10L;
        short l_1475 = 0x581DL;
        int i;
        for (i = 0; i < 4; i++)
            l_1374[i] = 1L;
        for (i = 0; i < 10; i++)
            l_1421[i] = 0xB5F1L;
        for (g_800 = 0; (g_800 <= 2); g_800 += 1)
        {
            for (l_1169 = 2; (l_1169 >= 0); l_1169 -= 1)
            {
                int i, j, k;
                g_915[g_800][l_1169][l_11] = g_189;
            }
            for (g_500 = 0; (g_500 <= 2); g_500 += 1)
            {
                for (g_294 = 0; (g_294 <= 2); g_294 += 1)
                {
                    for (l_1181 = 0; (l_1181 <= 4); l_1181 += 1)
                    {
                        int i;
                        return g_170[(g_800 + 1)];
                    }
                }
            }
        }
        l_1222.f3 = (l_1221 >= func_29(g_368, l_1222, g_368));
        for (g_522 = 0; (g_522 <= 7); g_522 += 1)
        {
            int l_1240[5] = {0L, 0xFF107E40L, 0L, 0xFF107E40L, 0L};
            int i, j;
            l_1222.f3 = (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((func_12((g_686[1] = g_691[l_11][(l_11 + 4)]), (((g_671[l_11] >= ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((g_294 |= (safe_rshift_func_int16_t_s_s(l_1221, g_691[l_11][(l_11 + 4)]))) & ((((((g_671[6] || (func_37(g_368.f3, (l_1169 <= (l_1182 = (safe_add_func_uint32_t_u_u(g_160, (g_140 &= func_17((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((g_599[9] = ((l_1240[2] = (g_520 = func_45(l_1239, g_66, g_671[l_11], g_10, l_1239.f2))) < 0x44L)), 0)), l_1182)), g_368.f2)))))), l_1241, g_78[2], g_292[3]) <= g_691[l_11][(l_11 + 4)])) != 0xA4L) ^ 6L) != l_1241) | 0xAE32L) || g_105[1])), 0xFBA3L)), 2)) & (-3L))) >= l_1242) | 0xE82FL), g_456, g_194[6][4]) != g_499), 0x3EL)), g_964));
            for (l_1221 = 0; (l_1221 <= 2); l_1221 += 1)
            {
                unsigned l_1252 = 18446744073709551615UL;
                struct S0 l_1262 = {36,35,2242,-0};
                int i, j, k;
                g_915[(g_522 + 2)][(l_1221 + 3)][l_1221] |= (safe_rshift_func_uint8_t_u_s(l_1222.f3, 2));
                for (g_603 = 0; (g_603 <= 2); g_603 += 1)
                {
                    int l_1257 = 0L;
                    struct S0 l_1261[10][4][5] = {{{{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}}, {{{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}}, {{{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}}, {{{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}}, {{{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}}, {{{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}}, {{{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}}, {{{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}}, {{{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}}, {{{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}, {{30,101,1506,-1}, {10,118,1081,-2}, {84,91,2372,-1}, {11,67,2305,0}, {20,105,1164,0}}}};
                    int i, j, k;
                    if (g_514[g_603][l_11])
                        break;
                    for (g_152 = 0; (g_152 <= 0); g_152 += 1)
                    {
                        int i, j;
                        l_1245++;
                        g_521 = (safe_sub_func_uint32_t_u_u(4UL, (g_1034[g_152] <= (func_17(g_514[(g_603 + 1)][g_603], g_501) == (safe_lshift_func_int16_t_s_s(((!(l_1240[2] && l_1252)) || (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_514[3][2], 7)), g_294))), 11))))));
                    }
                    for (l_1252 = 0; (l_1252 <= 0); l_1252 += 1)
                    {
                        unsigned l_1258 = 0UL;
                        l_1258 = (g_368.f3 = (l_1252 < (l_1257 = g_915[(g_522 + 2)][(l_1221 + 3)][l_1221])));
                    }
                    for (l_1245 = 0; (l_1245 <= 5); l_1245 += 1)
                    {
                        unsigned short l_1263 = 0x64DAL;
                        g_518 = ((safe_sub_func_int32_t_s_s(((g_456 = (func_43(func_29(l_1261[5][2][1], l_1262, g_10)) <= 0x40BEL)) < l_1263), l_1240[2])) == ((g_602 = (safe_lshift_func_int16_t_s_u((1L != g_686[3]), 11))) & 0xFE44L));
                        if (g_671[0])
                            break;
                        l_1222.f3 ^= 0x594D1F91L;
                    }
                }
            }
        }
        if (l_1221)
            break;
        for (g_165 = 0; (g_165 <= 2); g_165 += 1)
        {
            int l_1277 = 0xD48F00D2L;
            int l_1280[6][4][4] = {{{(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}}, {{(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}}, {{(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}}, {{(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}}, {{(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}}, {{(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}, {(-5L), 0xBBBE62EFL, 0x33E380A5L, 6L}}};
            const struct S0 l_1304 = {84,92,211,2};
            unsigned short l_1308 = 0xE817L;
            int l_1338 = (-7L);
            struct S0 l_1378[2] = {{79,47,831,-0}, {79,47,831,-0}};
            int l_1491 = 0x80776325L;
            int i, j, k;
            for (g_77 = 0; (g_77 <= 2); g_77 += 1)
            {
                int l_1268 = 9L;
                int l_1288 = 2L;
                struct S0 l_1301 = {0,83,4022,-0};
                unsigned l_1351 = 0xBC99D443L;
                unsigned l_1352 = 1UL;
                unsigned l_1373 = 0xBF668E64L;
                const struct S0 l_1382 = {3,88,1807,3};
                struct S0 l_1383 = {80,71,995,-0};
                unsigned short l_1388[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1388[i] = 0x2A90L;
                if ((safe_sub_func_int32_t_s_s((g_915[(l_11 + 1)][(g_165 + 4)][g_77] = l_1268), (safe_unary_minus_func_int8_t_s(g_800)))))
                {
                    char l_1270[10] = {0L, (-2L), 0L, (-2L), 0L, (-2L), 0L, (-2L), 0L, (-2L)};
                    int l_1292 = 0x8E847796L;
                    int l_1298[1];
                    char l_1362 = 0x1BL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1298[i] = 6L;
                    if ((l_1270[2] |= (-10L)))
                    {
                        char l_1285[2];
                        short l_1286 = 0xC9A4L;
                        int l_1287 = (-5L);
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1285[i] = 0x3EL;
                        l_1286 = (safe_add_func_int16_t_s_s(0x3B51L, (g_686[9] = (((g_602 = (l_1268 = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((g_602 > l_1277) | (safe_add_func_int16_t_s_s((g_78[g_77] |= (((g_691[3][5] | (g_170[3]++)) <= (++g_456)) > (func_17(l_1222.f1, l_1239.f0) & 0UL))), g_10.f0))), l_1270[2])), l_1270[0])))) <= 6UL) & l_1285[1]))));
                        l_1287 = (g_289 > g_514[3][2]);
                        ++g_1289;
                        g_34 |= g_686[8];
                    }
                    else
                    {
                        unsigned short l_1297[4] = {1UL, 65535UL, 1UL, 65535UL};
                        int l_1305[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_1305[i] = (-4L);
                        l_1292 = 0xAC24B05FL;
                        l_1306 = ((((l_1222.f3 = (safe_add_func_uint8_t_u_u(((l_1305[3] = (safe_rshift_func_uint8_t_u_u((g_671[0] = ((l_1297[1] <= l_1221) >= ((l_1298[0] &= 0x81EF8786L) < ((safe_sub_func_uint32_t_u_u((func_45(l_1301, g_603, ((g_292[0] > ((g_521 = ((safe_add_func_int32_t_s_s(((func_17(l_1297[1], g_10.f3) < 4294967289UL) >= l_1270[2]), l_1280[5][0][3])) != 4UL)) > 4294967291UL)) || g_520), l_1304, g_140) & l_1297[0]), l_1301.f1)) && g_80)))), g_519))) != g_78[0]), g_10.f2))) & 8L) <= l_1297[1]) < g_152);
                    }
                    if (func_45(g_368, (safe_unary_minus_func_uint16_t_u(l_1280[5][1][2])), (l_1301.f3 ^= g_518), g_368, (l_1308 = l_1242)))
                    {
                        unsigned short l_1319[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1319[i] = 65529UL;
                        l_1319[5] = ((g_522 && g_671[0]) | (safe_sub_func_int8_t_s_s(((((g_170[1] &= (safe_mod_func_int32_t_s_s((g_503 ^= (safe_add_func_int16_t_s_s(0xF5A3L, func_17(l_1239.f1, ((safe_mod_func_uint8_t_u_u(248UL, l_1241)) | l_1270[6]))))), ((safe_rshift_func_int8_t_s_u((((g_1289 > l_1280[2][3][1]) ^ l_1270[2]) > g_105[1]), g_10.f1)) & 0xCE89L)))) <= l_1280[5][2][1]) && 248UL) ^ g_10.f1), g_1094)));
                    }
                    else
                    {
                        const unsigned l_1337 = 5UL;
                        const struct S0 l_1339 = {55,103,4,3};
                        l_1277 = (((g_503 && ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((g_522++) ^ (!(safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_s(func_45(g_368, (((l_1268 = g_194[8][3]) >= (0x8496L | ((g_292[3] >= (((safe_mod_func_uint16_t_u_u(((g_691[2][7] = ((((l_1337 & (-1L)) & 4294967294UL) || l_1338) <= 0x21L)) < l_1337), 0x3BE7L)) >= l_1239.f0) && l_1304.f0)) == g_140))) > g_140), l_1181, l_1339, l_1298[0]), 0)))), l_1298[0])) <= l_1292), l_1339.f2)))), g_281)), 6)) | g_686[8])) && g_66) >= g_160);
                    }
                    for (g_140 = 0; (g_140 <= 28); g_140 = safe_add_func_int16_t_s_s(g_140, 1))
                    {
                        struct S0 l_1342 = {42,100,1335,-1};
                        g_1094 = 0xDBD149E6L;
                        if (g_602)
                            continue;
                        l_1338 = func_45(l_1342, ((-3L) == (((((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((((((safe_add_func_uint8_t_u_u((l_1182 ^= g_10.f0), (0x35L < l_1342.f1))) ^ (g_915[(l_11 + 1)][(g_165 + 4)][g_77] |= (safe_add_func_uint32_t_u_u((l_1351 >= 1UL), (l_1352 = (g_671[6] | g_368.f0)))))) >= l_1338) != 1L) & g_197), g_10.f1)) <= g_77), g_152)) && l_1298[0]) | l_1353) ^ g_514[1][1]) <= l_1222.f1)), g_106, g_10, l_1342.f3);
                    }
                    l_1306 = ((g_686[8] >= (g_915[(l_11 + 1)][(g_165 + 4)][g_77] = (l_1182 < g_105[2]))) == func_37(g_686[8], (l_1362 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(g_1170, (safe_rshift_func_uint8_t_u_u(func_53(g_1170, g_368.f1, ((safe_mod_func_int8_t_s_s((g_599[5] = g_1289), g_66)) || 4UL), g_10), g_292[0])))), 4))), g_519, g_522, g_518));
                }
                else
                {
                    unsigned char l_1377 = 0UL;
                    int l_1386 = 0x0F1CA4A6L;
                    int l_1387 = 0x691BA52CL;
                    if (func_37((g_105[1] = g_771), (+(0x770FL < ((func_53(g_126[0][9], g_165, l_1280[4][0][3], g_368) | (g_10.f0 = 0x8750469DL)) != (safe_rshift_func_uint8_t_u_s((l_1239.f2 && g_126[0][3]), 1))))), g_292[3], l_1301.f3, g_1034[0]))
                    {
                        g_915[(l_11 + 1)][(g_165 + 4)][g_77] = ((-6L) ^ g_126[0][1]);
                    }
                    else
                    {
                        g_518 = (safe_sub_func_uint8_t_u_u(func_43((l_1338 = g_368.f1)), (0L ^ (l_1222.f3 = (safe_lshift_func_int8_t_s_u((g_368.f1 >= l_1239.f3), 6))))));
                        l_1374[3] ^= ((6L > (((0xE191BB78L < 4294967290UL) < g_140) && l_1280[5][2][1])) && (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((g_289 = l_1239.f0), (((((l_1373 = (func_43(g_915[2][0][1]) >= (g_294 ^= (0xC0D0L <= g_1289)))) >= 0x6490L) < 0L) && l_1304.f2) || g_292[6]))), l_1268)));
                    }
                    if ((l_1304.f0 >= (l_1383.f3 = (l_1222.f3 = (((g_105[1] = (safe_rshift_func_uint8_t_u_s((l_1377 | func_53((!func_37((l_1182 &= (g_602 <= (g_915[(l_11 + 1)][(g_165 + 4)][g_77] |= (func_45(l_1378[0], l_1304.f2, ((g_964 |= g_294) ^ (safe_lshift_func_uint8_t_u_u((l_1381[0] == l_1338), 2))), l_1382, l_1377) >= 1UL)))), l_1241, g_500, g_10.f0, g_152)), g_603, l_1181, l_1383)), g_34))) & l_1377) >= g_189)))))
                    {
                        short l_1385 = 0xA6B0L;
                        int l_1394 = (-5L);
                        unsigned l_1397 = 0x25BB43FEL;
                        l_1385 &= l_1384;
                        l_1388[0]--;
                        l_1387 = (((g_170[3] = (l_1394 = ((g_10.f0 = (g_10.f1 | (g_78[3] = g_126[0][1]))) > (safe_mod_func_int16_t_s_s((l_1393 || g_520), (g_602 = g_522)))))) && (g_1034[0] = g_189)) | (safe_sub_func_int8_t_s_s((((g_66 | l_1397) & l_1382.f0) ^ l_1308), l_1378[0].f1)));
                        return g_522;
                    }
                    else
                    {
                        unsigned l_1404 = 0xBC422EF2L;
                        int l_1407 = 0x8A079FA1L;
                        unsigned l_1418 = 0x3A6EBFCAL;
                        l_1277 = ((safe_add_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(((l_1378[0].f2 >= (g_456 |= g_501)) >= (l_1306 = (l_1338 = (g_671[7]++)))), ((((l_1404 & l_1374[3]) ^ (l_1407 = ((safe_rshift_func_int8_t_s_s((((func_43((func_45(l_1378[1], (g_1289--), (safe_add_func_uint32_t_u_u(g_522, (g_170[0] >= g_1034[0]))), g_10, g_1034[0]) & 0x24A83DBDL)) <= l_1407) == 0x20EAL) != 0x7005L), l_1374[1])) < 0x88F5L))) & g_160) <= 0x60L))) & g_368.f0) < 0xB8C2L), 0x3522L)) > l_1387);
                        g_521 = (safe_mod_func_int8_t_s_s(g_194[8][3], (safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_10.f3, l_1418)), 0))));
                        if (g_671[2])
                            break;
                        l_1387 = 0x666E5B44L;
                    }
                    for (g_140 = (-11); (g_140 == 30); g_140 = safe_add_func_int32_t_s_s(g_140, 8))
                    {
                        l_1421[5] = l_1221;
                        l_1386 = l_1386;
                        if (g_514[3][2])
                            continue;
                    }
                    l_1277 |= (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(g_294, func_45(g_1428, (((safe_mod_func_int16_t_s_s((g_78[1] = ((func_53((l_1383.f0 && ((g_599[8] >= 0xD049L) > (((-1L) != (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u((l_1387 & (!func_43((safe_rshift_func_int16_t_s_s((-1L), 6))))))), 1))) ^ 0xCAE5FBC5L))), g_671[5], g_500, l_1378[1]) & g_771) > g_189)), l_1388[0])) == 0xAE18L) == 0x67E247D5L), g_368.f0, l_1239, l_1377))) == 0x08L), 0UL)), 9));
                }
            }
            for (g_519 = 2; (g_519 >= 0); g_519 -= 1)
            {
                short l_1448 = (-1L);
                int l_1456 = 0L;
                const char l_1477[8][4] = {{0x15L, (-10L), 0L, (-10L)}, {0x15L, (-10L), 0L, (-10L)}, {0x15L, (-10L), 0L, (-10L)}, {0x15L, (-10L), 0L, (-10L)}, {0x15L, (-10L), 0L, (-10L)}, {0x15L, (-10L), 0L, (-10L)}, {0x15L, (-10L), 0L, (-10L)}, {0x15L, (-10L), 0L, (-10L)}};
                int i, j;
                for (g_34 = 0; (g_34 <= 2); g_34 += 1)
                {
                    unsigned l_1447 = 4294967294UL;
                    unsigned short l_1455 = 0UL;
                    for (l_1306 = 0; (l_1306 <= 2); l_1306 += 1)
                    {
                        char l_1442 = (-5L);
                        const int l_1446 = 0L;
                        int i, j, k;
                        g_964 = (g_1170 &= (g_915[(g_519 + 2)][(l_1306 + 3)][g_519] &= ((safe_add_func_uint8_t_u_u(l_1378[0].f0, (l_1450 = ((safe_add_func_int16_t_s_s(g_10.f1, (safe_sub_func_int16_t_s_s((l_1447 = ((++l_1443[0][2]) ^ l_1446)), g_964)))) & (((g_368.f2 < func_37(g_10.f1, (l_1448 = (g_194[0][1] |= (l_1222.f3 = l_1221))), g_80, l_1449, g_170[3])) == 65535UL) == g_152))))) > 0x99FBL)));
                        g_1094 = l_1447;
                    }
                    if (func_45(g_1428, l_1169, l_1280[1][1][3], g_10, ((safe_rshift_func_uint8_t_u_u((g_80 & 0x22L), 6)) && (!((safe_add_func_uint16_t_u_u(l_1455, (++g_105[1]))) != g_671[0])))))
                    {
                        l_1459 = g_518;
                        l_1280[3][1][0] = ((l_1455 > (0xE47FC59CL || l_1456)) == g_1034[0]);
                    }
                    else
                    {
                        unsigned l_1476 = 0x2F70581EL;
                        int l_1478 = 0x55D6FB22L;
                        int l_1479[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1479[i] = 0x1391CFA0L;
                        l_1479[1] ^= (65535UL == (safe_lshift_func_int16_t_s_u(l_1239.f2, (func_43(((safe_lshift_func_int16_t_s_u((l_1456 = (l_1456 == ((~((safe_lshift_func_uint8_t_u_s(((+(0x28L >= (g_520 = (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_1306, 0)), (g_686[0] != ((((func_43((l_1478 = (func_17((safe_mod_func_int8_t_s_s(func_53((((((g_289 = func_43((safe_mod_func_uint16_t_u_u(l_1450, func_37(l_1304.f2, g_1474, l_1239.f0, l_1456, l_1475))))) < g_281) == g_1034[0]) < l_1476) != g_915[2][4][0]), l_1477[0][1], g_518, l_1222), l_1455)), g_671[5]) | g_160))) | 0x1DL) >= g_34) && l_1374[3]) >= (-7L)))))))) > l_1304.f2), 5)) != g_34)) >= 8UL))), g_514[3][2])) ^ g_160)) < g_281))));
                        l_1182 ^= ((g_126[0][9] <= g_1034[0]) >= (l_1456 & (safe_add_func_uint16_t_u_u((~(safe_rshift_func_uint16_t_u_u(l_1338, 0))), (g_78[0] = (((safe_mod_func_int8_t_s_s(func_17((g_1488 = ((g_368.f3 <= l_1277) && (l_1169 = (((g_964 = l_1477[0][1]) != (safe_add_func_int8_t_s_s((((g_10.f3 = l_1443[0][3]) == ((l_1447 == 0x46AC06B1L) >= g_194[6][4])) | g_671[3]), g_152))) >= l_1443[0][2])))), l_1477[5][2]), l_1443[0][2])) > l_1450) >= g_603))))));
                        g_915[3][1][0] ^= ((g_152 != (l_1491 = (safe_rshift_func_uint16_t_u_u(l_1476, 12)))) | g_368.f3);
                    }
                }
            }
        }
    }
    return g_519;
}







static int func_2(int p_3, struct S0 p_4, unsigned p_5, unsigned short p_6)
{
    int l_24 = (-1L);
    struct S0 l_33 = {18,99,992,-2};
    int l_1168 = 0x8F2DDC7BL;
    l_1168 = (func_12(p_4.f2, (((l_33.f3 = func_17((safe_add_func_uint8_t_u_u((((255UL < p_4.f2) > func_22((l_24 != (safe_add_func_int32_t_s_s(0xBAC89D73L, ((safe_rshift_func_uint16_t_u_u(func_29(l_33, p_4, g_10), p_4.f2)) >= l_24)))))) || l_33.f3), p_4.f3)), g_368.f0)) >= g_1034[0]) == p_5), p_3, g_915[4][0][1]) == 0x06CAL);
    return p_6;
}







static short func_12(unsigned short p_13, short p_14, int p_15, unsigned char p_16)
{
    unsigned char l_1101 = 0x2BL;
    struct S0 l_1135 = {4,3,301,3};
    for (g_800 = 0; (g_800 < 15); ++g_800)
    {
        unsigned char l_1117 = 9UL;
        const struct S0 l_1122[8][9][3] = {{{{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}}, {{{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}}, {{{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}}, {{{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}}, {{{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}}, {{{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}}, {{{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}}, {{{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}, {{82,0,3738,3}, {32,95,2734,-0}, {29,18,3828,1}}}};
        unsigned l_1137 = 0x99132873L;
        int l_1138 = (-1L);
        char l_1166 = (-1L);
        int l_1167 = 2L;
        int i, j, k;
        for (g_77 = 0; (g_77 < 22); g_77++)
        {
            int l_1118 = 0x95658E9BL;
            struct S0 l_1121 = {87,45,2798,-2};
            int l_1123[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1123[i] = 0xB4069726L;
            for (p_16 = 0; (p_16 <= 6); p_16 += 1)
            {
                int l_1126 = 0xDDFF7DC3L;
                int l_1133 = 4L;
                unsigned short l_1144[7][1] = {{0xA380L}, {0xA380L}, {0xA380L}, {0xA380L}, {0xA380L}, {0xA380L}, {0xA380L}};
                int i, j;
                for (g_294 = 0; (g_294 <= 6); g_294 += 1)
                {
                    int l_1102 = 0xFB45552FL;
                    int i;
                    g_503 = (l_1101 |= ((safe_mod_func_uint8_t_u_u(0xE4L, (-10L))) <= g_105[p_16]));
                    if (((((l_1102 = g_160) <= (g_671[0] <= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((p_13 = (0x9714L | (safe_mod_func_uint32_t_u_u(g_294, (safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(g_189, (safe_mod_func_int32_t_s_s(((l_1101 < (safe_sub_func_uint32_t_u_u(4294967289UL, (l_1117 && (p_13 && l_1101))))) <= p_14), 0x5CD8F6D2L)))) ^ 1L), p_13)))))), g_686[0])), l_1118)))) <= p_16) || g_964))
                    {
                        unsigned short l_1134 = 65535UL;
                        int l_1136[9] = {1L, 1L, (-1L), 1L, 1L, (-1L), 1L, 1L, (-1L)};
                        int i;
                        l_1123[1] ^= (safe_lshift_func_int8_t_s_u(((65535UL && p_15) || func_45(l_1121, g_140, l_1117, l_1122[2][7][0], (g_126[0][9] > (g_78[1] = (-1L))))), 2));
                        l_1102 ^= func_43(g_289);
                        l_1136[8] ^= (g_915[4][0][1] = (safe_add_func_uint32_t_u_u((((0L <= g_194[8][3]) >= func_17((g_189 = p_14), func_45(l_1121, func_53((l_1126 & (g_197 ^ (safe_rshift_func_int16_t_s_s(p_13, 8)))), func_45(g_368, (((safe_add_func_uint16_t_u_u(((l_1102 = (func_17(((safe_lshift_func_uint8_t_u_u((l_1133 = g_503), l_1126)) || p_13), l_1121.f2) & 255UL)) <= 0x2269L), p_14)) < l_1134) || g_915[4][0][1]), g_602, l_1122[2][7][0], p_16), p_15, l_1135), p_13, g_10, p_13))) != g_599[8]), l_1122[2][7][0].f1)));
                        return l_1137;
                    }
                    else
                    {
                        return p_13;
                    }
                }
                for (g_140 = 0; (g_140 <= 2); g_140 += 1)
                {
                    return g_78[0];
                }
                if (((l_1121.f3 = func_17(l_1122[2][7][0].f2, (l_1138 = 5UL))) == g_519))
                {
                    return l_1101;
                }
                else
                {
                    const unsigned short l_1143[5][2] = {{0x7E1BL, 0x7E1BL}, {0x7E1BL, 0x7E1BL}, {0x7E1BL, 0x7E1BL}, {0x7E1BL, 0x7E1BL}, {0x7E1BL, 0x7E1BL}};
                    int l_1145 = 0x4850335FL;
                    int i, j;
                    for (g_140 = 0; (g_140 >= 15); ++g_140)
                    {
                        g_691[2][3] = ((((g_602 = func_37(l_1118, (0L != (~1UL)), g_318, g_189, (((safe_sub_func_int16_t_s_s((g_10.f2 > func_37(l_1143[4][0], (g_152 > p_14), l_1135.f0, l_1143[4][0], p_14)), 0x5261L)) & 7UL) | 0x3FL))) < 1UL) && g_105[1]) < g_170[2]);
                    }
                    l_1145 ^= l_1144[5][0];
                    for (g_152 = 2; (g_152 <= 50); ++g_152)
                    {
                        unsigned l_1148 = 0UL;
                        l_1148 = 8L;
                    }
                    for (g_34 = 0; (g_34 > 28); g_34 = safe_add_func_uint32_t_u_u(g_34, 8))
                    {
                        if (g_292[4])
                            break;
                        return p_15;
                    }
                }
            }
            if (g_368.f1)
                continue;
            l_1138 = (((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((g_281 || (g_603 != (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(g_686[8], (g_292[6] = l_1135.f0))) & l_1135.f2) == p_16), 5)))) <= 0x79L), ((p_14 = 0L) | ((func_43(g_915[4][0][1]) >= g_599[6]) != l_1123[1])))))), 0xE9L)), g_686[8])), 1L)) | g_77) == l_1135.f3);
            g_34 = ((g_189 >= ((g_289 ^= (~((((l_1137 | (((safe_add_func_uint16_t_u_u((g_170[3] >= (g_105[1] < func_17(l_1166, l_1167))), ((l_1121.f1 & ((p_13 == l_1118) | (-9L))) < g_126[0][9]))) & g_10.f2) >= g_292[5])) | 1UL) && 0x1BAC3226L) < l_1122[2][7][0].f2))) >= 0xCEL)) | l_1117);
        }
    }
    return p_13;
}







static char func_17(char p_18, unsigned p_19)
{
    unsigned char l_1077 = 0x8AL;
    int l_1081 = (-1L);
    unsigned l_1085[9][8][1] = {{{0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}}, {{0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}}, {{0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}}, {{0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}}, {{0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}}, {{0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}}, {{0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}}, {{0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}}, {{0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}, {0x9020AADCL}}};
    unsigned char l_1090 = 0xFBL;
    struct S0 l_1093 = {42,42,3244,0};
    int i, j, k;
    for (g_500 = 0; (g_500 <= 2); g_500 += 1)
    {
        char l_1076[2];
        int l_1080 = 0L;
        int i;
        for (i = 0; i < 2; i++)
            l_1076[i] = 0L;
        for (p_18 = 0; (p_18 <= 2); p_18 += 1)
        {
            char l_1075 = 0L;
            for (g_318 = 2; (g_318 >= 0); g_318 -= 1)
            {
                int i, j, k;
                --l_1077;
                l_1081 = (g_915[g_318][(g_318 + 1)][g_318] && ((l_1080 |= g_915[g_318][(p_18 + 1)][g_318]) <= 255UL));
            }
            for (g_106 = (-7); (g_106 > (-19)); --g_106)
            {
                unsigned char l_1084 = 9UL;
                l_1084 = (p_18 ^ 0xB09915FDL);
            }
        }
        l_1085[5][3][0] = g_281;
        l_1080 &= l_1077;
    }
    l_1081 = g_500;
    l_1081 = (safe_lshift_func_uint16_t_u_s(p_18, 10));
    l_1093.f3 = (safe_rshift_func_int16_t_s_u((l_1081 &= ((((((p_19 || ((l_1077 < 1UL) <= ((l_1090 > func_53(func_53((safe_sub_func_int8_t_s_s((!0x27L), (func_43(g_368.f3) >= g_318))), l_1085[6][4][0], l_1085[5][3][0], l_1093), g_368.f1, g_1094, l_1093)) < g_10.f2))) && g_603) | p_18) | p_18) | p_18) || p_18)), g_691[2][2]));
    return g_292[6];
}







static unsigned func_22(unsigned char p_23)
{
    short l_355[1][3];
    struct S0 l_367 = {13,7,3474,0};
    int l_454[7] = {(-1L), 0x3F3A4E2AL, (-1L), 0x3F3A4E2AL, (-1L), 0x3F3A4E2AL, (-1L)};
    const struct S0 l_463 = {4,4,3033,3};
    unsigned l_504 = 1UL;
    int l_570 = 0xB3A51902L;
    unsigned l_614[5][4] = {{0UL, 0xC288CED3L, 4294967291UL, 4294967291UL}, {0UL, 0xC288CED3L, 4294967291UL, 4294967291UL}, {0UL, 0xC288CED3L, 4294967291UL, 4294967291UL}, {0UL, 0xC288CED3L, 4294967291UL, 4294967291UL}, {0UL, 0xC288CED3L, 4294967291UL, 4294967291UL}};
    unsigned l_642[3][9] = {{0x5A041FA3L, 4294967294UL, 0xA58FA718L, 0x5AF32BE4L, 0xA58FA718L, 4294967294UL, 0x5A041FA3L, 0xEF09D8C7L, 0xE325AEC1L}, {0x5A041FA3L, 4294967294UL, 0xA58FA718L, 0x5AF32BE4L, 0xA58FA718L, 4294967294UL, 0x5A041FA3L, 0xEF09D8C7L, 0xE325AEC1L}, {0x5A041FA3L, 4294967294UL, 0xA58FA718L, 0x5AF32BE4L, 0xA58FA718L, 4294967294UL, 0x5A041FA3L, 0xEF09D8C7L, 0xE325AEC1L}};
    int l_720 = 0xE0FE6390L;
    short l_749 = (-7L);
    unsigned l_777 = 0xEA08C903L;
    unsigned char l_826 = 0x56L;
    unsigned l_857 = 0x8733D9B3L;
    int l_858 = 6L;
    unsigned short l_918[7][3][6] = {{{0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}}, {{0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}}, {{0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}}, {{0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}}, {{0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}}, {{0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}}, {{0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}, {0xAF76L, 0UL, 0xAE45L, 0UL, 0xAF76L, 0x6CEFL}}};
    unsigned short l_967[9][10] = {{65527UL, 0UL, 1UL, 65535UL, 0UL, 65529UL, 0UL, 65535UL, 1UL, 0UL}, {65527UL, 0UL, 1UL, 65535UL, 0UL, 65529UL, 0UL, 65535UL, 1UL, 0UL}, {65527UL, 0UL, 1UL, 65535UL, 0UL, 65529UL, 0UL, 65535UL, 1UL, 0UL}, {65527UL, 0UL, 1UL, 65535UL, 0UL, 65529UL, 0UL, 65535UL, 1UL, 0UL}, {65527UL, 0UL, 1UL, 65535UL, 0UL, 65529UL, 0UL, 65535UL, 1UL, 0UL}, {65527UL, 0UL, 1UL, 65535UL, 0UL, 65529UL, 0UL, 65535UL, 1UL, 0UL}, {65527UL, 0UL, 1UL, 65535UL, 0UL, 65529UL, 0UL, 65535UL, 1UL, 0UL}, {65527UL, 0UL, 1UL, 65535UL, 0UL, 65529UL, 0UL, 65535UL, 1UL, 0UL}, {65527UL, 0UL, 1UL, 65535UL, 0UL, 65529UL, 0UL, 65535UL, 1UL, 0UL}};
    unsigned short l_984 = 0x81C0L;
    short l_998 = (-1L);
    short l_1046[6];
    int l_1061 = 1L;
    unsigned short l_1074 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_355[i][j] = (-1L);
    }
    for (i = 0; i < 6; i++)
        l_1046[i] = 1L;
    for (g_140 = 18; (g_140 < 9); --g_140)
    {
        int l_362 = (-1L);
        int l_366 = 0L;
        struct S0 l_369 = {55,104,3738,1};
        g_34 = (l_355[0][2] |= 1L);
        g_318 = (((((+((safe_mod_func_int16_t_s_s(func_53((safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((((func_53(l_362, (safe_rshift_func_uint16_t_u_s(func_37(p_23, ((l_362 != g_197) && (g_126[0][0] <= func_53(l_362, ((251UL ^ func_43(((safe_unary_minus_func_uint32_t_u(p_23)) == (l_366 = (g_10.f0 = g_194[8][3]))))) != p_23), l_362, l_367))), l_367.f3, g_78[1], g_140), g_10.f2)), p_23, g_368) < 0x6D2EL) != 0x6390L) > 0x58L), 6)) <= g_10.f2) < 0xE5ADL), p_23)), l_367.f2, p_23, l_369), 0x42EDL)) > l_367.f2)) == l_355[0][2]) ^ p_23) && g_105[1]) >= p_23);
        if (p_23)
        {
            unsigned l_374 = 0xA2B14472L;
            g_10.f3 = l_369.f0;
            for (g_34 = 0; (g_34 <= 1); g_34 = safe_add_func_uint16_t_u_u(g_34, 3))
            {
                for (g_318 = 10; (g_318 >= 21); ++g_318)
                {
                    for (g_189 = 0; (g_189 <= 5); g_189 += 1)
                    {
                        int i, j;
                        if (g_194[(g_189 + 3)][g_189])
                            break;
                        l_374 ^= func_53((+g_194[(g_189 + 3)][g_189]), g_105[g_189], l_367.f1, g_368);
                    }
                }
            }
            return g_289;
        }
        else
        {
            int l_377 = 8L;
            short l_406 = 0xBFDDL;
            unsigned l_417 = 1UL;
            int l_420 = 0x05694FECL;
            const struct S0 l_437 = {75,109,3023,-3};
            for (g_197 = 0; (g_197 >= 43); g_197 = safe_add_func_uint32_t_u_u(g_197, 8))
            {
                char l_398 = 0xA8L;
                int l_421 = 0x5138805AL;
                int l_422 = 0xEE791CA9L;
                struct S0 l_435 = {48,0,2387,1};
                char l_438 = 0L;
                g_10.f3 &= l_377;
                if (g_197)
                {
                    return g_78[0];
                }
                else
                {
                    unsigned short l_380 = 0x777FL;
                    struct S0 l_382[3] = {{74,15,847,1}, {74,15,847,1}, {74,15,847,1}};
                    int l_399 = 9L;
                    char l_436 = (-4L);
                    int i;
                    for (g_80 = (-14); (g_80 > 42); g_80++)
                    {
                        unsigned l_381 = 0xBA145E1BL;
                        int l_391 = 0x96BAAEF2L;
                        l_399 &= ((l_381 = l_380) > func_45(l_382[0], ((!(+(safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_126[0][9], ((g_10.f1 || ((safe_lshift_func_uint16_t_u_u((l_391 & ((g_165--) && l_391)), 9)) | 0x52C722CBL)) <= (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_23, func_45(l_367, g_140, l_391, l_382[1], l_367.f3))), 0UL))))), 0L)), p_23)))) && l_398), l_377, l_382[0], p_23));
                        g_10.f3 = ((g_170[3]++) ^ ((((g_66 | (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(func_45(g_368, l_406, (0x3EL & ((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0xB68B30DDL, (0x39BDL >= 0L))), ((255UL < (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(0x7397L, 11)), l_417))) | g_140))), g_126[0][9])) != p_23) == (-4L)) != 0x3412L)), l_369, l_366), 1L)), g_126[0][9]))) > 0x730BE312L) == 0xC6ADAB05L) > l_398));
                        l_420 ^= (safe_rshift_func_uint8_t_u_u(0UL, l_382[0].f2));
                        return p_23;
                    }
                    g_34 = (g_10.f3 = func_53(g_78[1], ((g_160++) && ((l_420 &= (0x5EA7L & p_23)) > p_23)), ((safe_sub_func_int8_t_s_s((-9L), 2L)) != (l_421 = func_37((safe_lshift_func_uint16_t_u_s(func_43(func_45(g_10, (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(func_45(l_435, (l_422 = (p_23 < l_435.f1)), l_436, l_437, g_292[6]), 1)) >= g_368.f0), p_23)), p_23)), p_23, l_435, l_362)), 0)), g_10.f3, g_368.f1, l_438, l_437.f0))), g_368));
                    if (g_368.f2)
                        break;
                }
                if (g_152)
                    break;
                if (p_23)
                    break;
            }
            if (g_170[3])
                continue;
        }
        return g_152;
    }
    for (g_80 = 1; (g_80 <= 5); g_80 += 1)
    {
        const struct S0 l_447 = {15,40,1439,0};
        int l_464 = 0L;
        int l_502[5][5] = {{9L, 0xF74CB977L, 0xB2BC97B4L, 0x9AD86963L, 7L}, {9L, 0xF74CB977L, 0xB2BC97B4L, 0x9AD86963L, 7L}, {9L, 0xF74CB977L, 0xB2BC97B4L, 0x9AD86963L, 7L}, {9L, 0xF74CB977L, 0xB2BC97B4L, 0x9AD86963L, 7L}, {9L, 0xF74CB977L, 0xB2BC97B4L, 0x9AD86963L, 7L}};
        int l_533 = 0x0303E7ECL;
        unsigned l_573 = 0x3F6749B7L;
        short l_580 = 0x29D2L;
        const char l_637 = 0x4DL;
        int i, j;
        if (l_355[0][2])
        {
            unsigned l_448 = 0xC286E27BL;
            int l_450 = 0xA379538BL;
            int l_496 = (-1L);
            int l_497 = 0x34F3B6E0L;
            int l_498[9] = {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L};
            unsigned l_546 = 18446744073709551615UL;
            const struct S0 l_563 = {64,103,2840,1};
            int l_601 = 0xE2CFDE6EL;
            int i;
            if ((func_45(g_368, (safe_sub_func_uint16_t_u_u(g_160, l_355[0][2])), (safe_mod_func_uint16_t_u_u((g_165--), func_45(g_368, p_23, (l_367.f1 < (((g_77 ^= g_318) == ((-1L) ^ (9UL < g_292[6]))) < p_23)), g_10, g_126[0][9]))), l_447, l_448) || g_105[2]))
            {
                int l_455 = 1L;
                int l_474[1][2][3] = {{{0x3BD1DED9L, 0x3BD1DED9L, 0x4EDD424DL}, {0x3BD1DED9L, 0x3BD1DED9L, 0x4EDD424DL}}};
                int i, j, k;
                if (p_23)
                {
                    int l_449 = 7L;
                    if (g_294)
                        break;
                    l_450 = l_449;
                    for (g_189 = 5; (g_189 >= 1); g_189 -= 1)
                    {
                        int l_453 = 0x7F7E6B73L;
                        int i, j;
                        g_10.f3 = (safe_rshift_func_int16_t_s_s(func_45(g_368, (g_105[1] = (((+((((g_194[(g_189 + 1)][g_80] | g_77) == (g_10.f0 && 65531UL)) == g_77) & (l_455 = (l_454[4] |= (l_453 = (p_23 & l_367.f3)))))) || 1L) || p_23)), g_194[(g_189 + 1)][g_80], g_368, g_318), 0));
                        g_456++;
                        g_318 = g_165;
                    }
                    g_318 |= (func_45(g_368, (((safe_rshift_func_uint16_t_u_u(l_455, l_449)) < l_455) && (((safe_lshift_func_int16_t_s_s(((l_367.f3 = ((g_456 || func_45(g_368, g_368.f0, g_126[0][0], g_368, p_23)) && (-6L))) || l_447.f3), l_447.f0)) || l_455) && p_23)), l_455, l_463, l_447.f3) != 0x9332L);
                }
                else
                {
                    int l_467 = 0x293081E0L;
                    int l_487 = 0x809D37F6L;
                    l_464 = p_23;
                    for (g_106 = 1; (g_106 <= 5); g_106 += 1)
                    {
                        g_34 &= (safe_mod_func_uint16_t_u_u((g_105[5] = (--g_165)), (safe_sub_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s((l_447.f0 != p_23), 0xF6L)) < (~((l_474[0][0][1] = g_106) < (safe_mod_func_uint8_t_u_u(((l_464 = (safe_mod_func_uint16_t_u_u(g_368.f1, ((safe_lshift_func_uint8_t_u_s((0xE4C542EDL == (safe_sub_func_int16_t_s_s((g_78[0] >= (safe_rshift_func_int16_t_s_u(g_368.f3, ((((safe_add_func_int8_t_s_s((g_10.f2 < g_456), 0x7DL)) > p_23) | 0xB38FL) <= g_170[3])))), g_289))), g_152)) && 251UL)))) || 6UL), (-1L)))))) >= p_23), 9UL))));
                        l_487 &= p_23;
                        g_34 |= (safe_lshift_func_int8_t_s_s((g_170[3] == 4UL), ((l_455 &= (safe_mod_func_int8_t_s_s((g_289 |= l_355[0][1]), (g_165 & ((safe_lshift_func_uint8_t_u_s((l_464 = ((p_23 &= l_447.f1) | l_447.f1)), 0)) != (safe_sub_func_uint8_t_u_u(((+(l_447.f1 >= ((l_454[4] & g_160) >= g_77))) != g_194[8][3]), 0x39L))))))) & 0xAAE05D80L)));
                    }
                }
                g_34 &= (-3L);
            }
            else
            {
                int l_511 = (-1L);
                int l_517 = 0xC0F29B7AL;
                l_504++;
                for (g_165 = 1; (g_165 <= 5); g_165 += 1)
                {
                    unsigned l_510 = 0x85D49F1FL;
                    for (p_23 = 0; (p_23 <= 5); p_23 += 1)
                    {
                        unsigned l_509 = 0UL;
                        l_510 |= (safe_lshift_func_uint8_t_u_u((l_367.f3 >= (l_509 = p_23)), (((p_23 || p_23) ^ l_464) && (l_464 = l_497))));
                        g_368.f3 = (g_126[0][9] > g_292[4]);
                        l_498[6] |= p_23;
                    }
                }
                for (g_197 = 0; (g_197 <= 0); g_197 += 1)
                {
                    int l_512 = (-1L);
                    int l_513[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_513[i] = 0xF0EB3F9FL;
                    g_514[3][2]--;
                    for (g_140 = 0; (g_140 <= 0); g_140 += 1)
                    {
                        int i, j;
                        l_513[0] &= g_126[g_140][(g_197 + 2)];
                        if (g_194[(g_80 + 3)][(g_140 + 3)])
                            continue;
                    }
                    g_522--;
                    l_497 = ((~(l_496 = (g_80 != ((safe_sub_func_int16_t_s_s((l_367.f3 = l_513[0]), (~((+(g_501 || 1L)) >= ((l_355[0][2] & ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((((safe_sub_func_int16_t_s_s((g_78[1] = func_45(l_447, (l_450 = p_23), p_23, g_368, l_533)), p_23)) & g_34) > l_498[6]), g_456)), 0xFA8ECDBFL)) >= g_519)) && 9L))))) ^ p_23)))) | g_292[4]);
                }
            }
            if ((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(l_497, ((safe_rshift_func_int16_t_s_u((0x6F07L ^ (l_496 ^= (func_45(l_367, (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u(p_23, (((l_498[6] |= ((safe_rshift_func_uint8_t_u_u(func_45(g_10, l_546, l_355[0][2], l_447, p_23), p_23)) && 0x60L)) == 1UL) | g_281))) & g_165), 15)), g_194[5][4], l_447, p_23) < p_23))), 1)) || 1UL))), p_23)))
            {
                int l_556[10][6][3] = {{{0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}}, {{0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}}, {{0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}}, {{0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}}, {{0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}}, {{0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}}, {{0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}}, {{0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}}, {{0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}}, {{0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}, {0x9A518975L, 0x9A518975L, 1L}}};
                int i, j, k;
                g_10.f3 = ((safe_add_func_uint8_t_u_u(0x10L, p_23)) > g_10.f2);
                l_502[4][2] = (safe_mod_func_uint32_t_u_u((g_520 & ((safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u(0xF2L, func_45(g_10, g_368.f3, p_23, g_368, g_165))))) && (((0xF2L < l_556[9][5][0]) || (-1L)) > p_23))), g_170[3]));
                g_318 = g_514[3][2];
            }
            else
            {
                const struct S0 l_572[5][4][1] = {{{{49,111,268,2}}, {{49,111,268,2}}, {{49,111,268,2}}, {{49,111,268,2}}}, {{{49,111,268,2}}, {{49,111,268,2}}, {{49,111,268,2}}, {{49,111,268,2}}}, {{{49,111,268,2}}, {{49,111,268,2}}, {{49,111,268,2}}, {{49,111,268,2}}}, {{{49,111,268,2}}, {{49,111,268,2}}, {{49,111,268,2}}, {{49,111,268,2}}}, {{{49,111,268,2}}, {{49,111,268,2}}, {{49,111,268,2}}, {{49,111,268,2}}}};
                int i, j, k;
                l_454[4] = (func_45(l_447, (((l_454[2] = (safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(((g_105[2] |= (g_170[4] != g_165)) >= p_23), (((safe_add_func_uint32_t_u_u(9UL, l_463.f1)) ^ 0x6DC7L) == (l_447.f0 | ((((g_10.f0 | g_78[1]) < 255UL) ^ l_498[6]) > p_23))))) < g_456) && 3L), g_170[2]))) | l_367.f3) <= l_546), g_106, l_563, l_563.f3) || p_23);
                if ((~(((l_454[4] == g_501) < 0x01L) <= (l_502[4][2] = ((!2L) && 0x56D5L)))))
                {
                    char l_568 = 0x45L;
                    struct S0 l_569 = {67,44,2850,1};
                    g_518 ^= (g_368.f3 |= ((-9L) & ((safe_rshift_func_uint8_t_u_u((+(safe_add_func_uint8_t_u_u(func_45(l_447, (((l_447.f3 ^ ((g_66 || (l_568 &= (p_23 ^ p_23))) == func_45(l_569, l_570, func_45(l_447, g_126[0][9], g_126[0][9], g_10, l_569.f2), l_569, g_10.f0))) & l_450) & g_140), l_454[1], l_563, l_569.f3), g_160))), g_34)) == 0xD0A3L)));
                    return g_499;
                }
                else
                {
                    if (p_23)
                        break;
                    g_521 = func_45(l_367, ((safe_unary_minus_func_uint8_t_u(g_34)) > (l_498[6] && ((4L || g_10.f2) ^ (l_496 |= 0x70E8L)))), l_447.f1, l_572[0][1][0], g_522);
                    g_368.f3 = g_292[6];
                }
                for (g_281 = 0; (g_281 <= 5); g_281 += 1)
                {
                    unsigned l_574 = 4294967291UL;
                    int l_597 = 0L;
                    int l_598 = 0x9B40C2BDL;
                    for (g_165 = 1; (g_165 <= 5); g_165 += 1)
                    {
                        if (g_189)
                            break;
                    }
                    if ((l_464 |= (l_574 = l_573)))
                    {
                        l_454[4] |= l_447.f3;
                        return p_23;
                    }
                    else
                    {
                        int l_575 = 0L;
                        struct S0 l_583 = {11,83,2853,-0};
                        l_464 ^= (((g_105[1]--) <= (safe_lshift_func_uint8_t_u_s((l_580 < ((g_456 = (safe_lshift_func_int8_t_s_s(g_499, 5))) == l_448)), 3))) >= l_533);
                        if (p_23)
                            break;
                        l_450 &= ((p_23 || func_45(l_583, ((safe_add_func_int16_t_s_s((l_464 | (~((l_498[8] = l_570) > p_23))), (g_78[1] = ((p_23 ^ ((safe_mod_func_uint32_t_u_u(g_10.f3, g_521)) || ((safe_rshift_func_int8_t_s_u(g_78[1], 5)) != l_583.f2))) < p_23)))) < g_514[4][1]), g_281, g_368, g_10.f0)) >= 1UL);
                        g_34 = (((safe_rshift_func_uint8_t_u_u(l_572[0][1][0].f1, (safe_lshift_func_uint16_t_u_u(((g_294 |= (l_450 > l_454[4])) >= ((l_572[0][1][0].f1 < l_447.f3) & (0xBBL < p_23))), 13)))) > 0x87L) >= l_574);
                    }
                    for (g_77 = 0; (g_77 <= 5); g_77 += 1)
                    {
                        unsigned char l_594[2];
                        int l_595 = 1L;
                        int l_596 = 0L;
                        int l_600[7];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_594[i] = 0x49L;
                        for (i = 0; i < 7; i++)
                            l_600[i] = 0x5641C079L;
                        l_595 = l_594[1];
                        g_518 = 0xB8E845ECL;
                        --g_603;
                    }
                }
                if (g_197)
                    break;
            }
            for (g_77 = 0; g_77 < 10; g_77 += 1)
            {
                g_599[g_77] = 0x14L;
            }
        }
        else
        {
            unsigned l_606 = 4294967295UL;
            --l_606;
        }
        l_502[4][2] = func_45(l_463, (g_105[1] = g_521), l_447.f1, g_368, g_289);
        for (l_504 = 1; (l_504 <= 5); l_504 += 1)
        {
            struct S0 l_611 = {80,92,3899,-3};
            int l_615 = 8L;
            int l_638 = (-5L);
            if ((l_463.f2 ^ (func_45(l_611, p_23, p_23, l_611, (l_367.f3 ^= ((safe_lshift_func_int16_t_s_s(l_614[1][2], 1)) != (l_447.f3 <= (l_615 = (l_463.f3 > ((l_464 = (0xC9L <= l_533)) < g_318))))))) >= p_23)))
            {
                int l_627[10] = {0x7CCFE374L, 0x4AFADEB7L, 0x7CCFE374L, 0x4AFADEB7L, 0x7CCFE374L, 0x4AFADEB7L, 0x7CCFE374L, 0x4AFADEB7L, 0x7CCFE374L, 0x4AFADEB7L};
                int i;
                for (g_281 = 0; (g_281 <= 4); g_281 += 1)
                {
                    int i, j;
                    l_464 |= (l_502[g_281][g_281] = func_45(g_368, l_502[g_281][g_281], (safe_sub_func_uint32_t_u_u(g_514[0][0], l_502[g_281][g_281])), l_611, ((safe_mod_func_uint16_t_u_u((+((safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_106, g_80)), (0xEBCEL & p_23))) < l_627[8]), g_522)))) >= l_627[8])), g_105[6])) == g_518)));
                    if (p_23)
                        break;
                    if (l_573)
                        continue;
                }
                l_502[4][2] |= p_23;
            }
            else
            {
                int l_636 = (-3L);
                struct S0 l_641 = {35,122,721,0};
                if (((1L || ((l_611.f3 |= (safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(g_165, ((g_152 ^ (l_611.f0 > func_45(g_368, p_23, (l_454[4] &= (safe_mod_func_int16_t_s_s((((4294967295UL > (safe_lshift_func_int16_t_s_s((+(l_636 &= g_318)), 4))) > l_447.f2) > 0x1317378FL), g_126[0][9]))), l_463, g_194[0][3]))) || p_23))) && 0x3AL), l_637))) || 0x9A83493FL)) || 0xD771L))
                {
                    g_10.f3 = l_636;
                }
                else
                {
                    short l_639 = 4L;
                    l_639 ^= ((g_318 |= 0L) ^ l_638);
                }
                for (g_197 = 0; (g_197 <= 5); g_197 += 1)
                {
                    struct S0 l_640 = {15,122,2641,3};
                    l_454[4] = func_45(l_640, g_518, ((+p_23) > (0x84A3L | 0x83A7L)), l_640, p_23);
                    if (p_23)
                        continue;
                }
                g_318 = (g_503 = (g_10.f3 = func_45(l_641, l_642[2][5], ((((safe_sub_func_int32_t_s_s(((l_463.f3 >= 0UL) == (g_292[0] = (0xFFL <= (safe_rshift_func_int16_t_s_s(func_45(g_10, p_23, (1L > (-1L)), l_447, g_10.f2), 14))))), l_447.f1)) == l_573) & 0xB6L) <= 0L), g_10, p_23)));
                l_464 = (safe_rshift_func_int8_t_s_u(func_45(l_611, l_641.f0, g_126[0][9], l_611, p_23), ((g_514[3][2] | (l_367.f3 &= g_522)) || 0x743EB6E5L)));
            }
            l_502[4][2] = ((l_611.f1 && (func_45(l_463, (((0x1AEEL == ((l_367.f3 = g_602) && ((3L | 0L) || p_23))) & (l_454[4] |= ((+65535UL) ^ (safe_add_func_uint16_t_u_u((func_45(l_447, g_514[3][2], g_501, l_611, l_463.f1) | p_23), g_603))))) || 0x3874L), p_23, l_447, g_77) && g_599[8])) & 0x13818B19L);
        }
    }
    if (func_29(l_367, l_463, l_463))
    {
        unsigned l_655 = 18446744073709551615UL;
        int l_658[7];
        struct S0 l_719 = {51,31,1531,2};
        char l_768 = 2L;
        short l_840[10][7] = {{0x1B9CL, 0x1B9CL, 0x2498L, (-1L), 1L, (-1L), 0x880DL}, {0x1B9CL, 0x1B9CL, 0x2498L, (-1L), 1L, (-1L), 0x880DL}, {0x1B9CL, 0x1B9CL, 0x2498L, (-1L), 1L, (-1L), 0x880DL}, {0x1B9CL, 0x1B9CL, 0x2498L, (-1L), 1L, (-1L), 0x880DL}, {0x1B9CL, 0x1B9CL, 0x2498L, (-1L), 1L, (-1L), 0x880DL}, {0x1B9CL, 0x1B9CL, 0x2498L, (-1L), 1L, (-1L), 0x880DL}, {0x1B9CL, 0x1B9CL, 0x2498L, (-1L), 1L, (-1L), 0x880DL}, {0x1B9CL, 0x1B9CL, 0x2498L, (-1L), 1L, (-1L), 0x880DL}, {0x1B9CL, 0x1B9CL, 0x2498L, (-1L), 1L, (-1L), 0x880DL}, {0x1B9CL, 0x1B9CL, 0x2498L, (-1L), 1L, (-1L), 0x880DL}};
        int i, j;
        for (i = 0; i < 7; i++)
            l_658[i] = 0L;
        if ((g_503 = ((p_23++) != (((safe_sub_func_uint16_t_u_u(l_655, (l_655 && (g_10.f2 > func_45(l_463, (safe_add_func_int16_t_s_s(((l_658[2] = 0x2447L) && (~(++g_522))), (((+(safe_add_func_int16_t_s_s((l_367.f3 = (l_463.f1 != g_518)), 9UL))) & (safe_lshift_func_int16_t_s_s(l_614[1][2], g_368.f0))) == l_655))), g_514[3][2], l_463, l_655))))) <= 0x4DL) && g_126[0][8]))))
        {
            char l_668 = (-1L);
            int l_670 = 0xEFBB433EL;
            unsigned char l_700 = 0xEAL;
            int l_711 = 0x9C4D9DDAL;
            struct S0 l_733 = {19,68,58,0};
            unsigned l_734 = 0x07F78662L;
            int l_827 = 0x83A0E67DL;
            int l_842[7][8] = {{0x9CDCB27AL, 2L, (-6L), 0x3CC10B3AL, 2L, 8L, 2L, 0x3CC10B3AL}, {0x9CDCB27AL, 2L, (-6L), 0x3CC10B3AL, 2L, 8L, 2L, 0x3CC10B3AL}, {0x9CDCB27AL, 2L, (-6L), 0x3CC10B3AL, 2L, 8L, 2L, 0x3CC10B3AL}, {0x9CDCB27AL, 2L, (-6L), 0x3CC10B3AL, 2L, 8L, 2L, 0x3CC10B3AL}, {0x9CDCB27AL, 2L, (-6L), 0x3CC10B3AL, 2L, 8L, 2L, 0x3CC10B3AL}, {0x9CDCB27AL, 2L, (-6L), 0x3CC10B3AL, 2L, 8L, 2L, 0x3CC10B3AL}, {0x9CDCB27AL, 2L, (-6L), 0x3CC10B3AL, 2L, 8L, 2L, 0x3CC10B3AL}};
            int i, j;
            for (g_520 = 0; (g_520 < 11); g_520++)
            {
                unsigned short l_667 = 65535UL;
                int l_687[7];
                int l_712 = 4L;
                const struct S0 l_721 = {60,21,3180,-3};
                int i;
                for (i = 0; i < 7; i++)
                    l_687[i] = 0L;
                for (g_197 = 1; (g_197 <= 6); g_197 += 1)
                {
                    int l_692 = 0x4767EDC3L;
                    struct S0 l_693 = {84,71,2526,-1};
                    int i;
                    l_454[g_197] = g_126[0][7];
                    l_454[g_197] &= l_667;
                    for (g_140 = 0; (g_140 <= 3); g_140 += 1)
                    {
                        int i;
                        return g_105[(g_140 + 1)];
                    }
                    if ((l_668 = (-7L)))
                    {
                        if (g_194[7][2])
                            break;
                        if (p_23)
                            continue;
                        if (p_23)
                            break;
                    }
                    else
                    {
                        int l_669 = 0L;
                        g_671[0]--;
                        l_669 = g_105[1];
                        l_454[g_197] = (g_368.f1 && (p_23 == ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((g_500 & (safe_add_func_int8_t_s_s((l_669 & 0x42L), (safe_sub_func_int8_t_s_s((g_686[8] = (l_670 = (g_78[2] && l_655))), l_667))))), ((l_687[0] = p_23) == l_655))), g_318)), 1)) & l_504)));
                        g_318 |= (safe_unary_minus_func_int32_t_s(func_53(l_454[g_197], (safe_sub_func_uint16_t_u_u(0x4B65L, (((((9L && ((g_671[0] & ((l_692 ^= (((g_514[3][2] || l_667) <= (g_77 = (g_368.f0 != (l_687[0] ^ g_691[2][3])))) & g_520)) >= g_691[3][1])) >= g_78[0])) | 0x3AC90742L) < p_23) <= 0xAE77L) && 0x89L))), l_463.f1, l_693)));
                    }
                }
                g_518 = ((safe_lshift_func_int16_t_s_u((func_43((safe_sub_func_uint8_t_u_u(g_170[0], (0x37L == (safe_mod_func_int16_t_s_s(g_519, (l_658[2] = p_23))))))) <= (l_711 = (((!(l_700 | (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((g_456 = ((-5L) != (p_23 ^ (l_670 = (safe_rshift_func_uint8_t_u_s(((g_368.f3 == 0x648AAF20L) && g_514[3][2]), 4)))))), (-1L))) != l_687[0]), 0x13A1L)), 11)), 0x47L)))) || 0L) && 6UL))), 1)) & l_668);
                g_521 = func_53((4294967294UL || ((l_658[2] &= (l_712 = g_10.f3)) | (safe_lshift_func_uint16_t_u_s((g_599[1] ^ (safe_sub_func_int16_t_s_s((((~(((func_45(g_10, (safe_add_func_int16_t_s_s(func_53(l_667, l_463.f2, l_655, l_719), 0x1339L)), l_720, l_721, p_23) ^ p_23) >= p_23) && 0x79E647B0L)) >= g_140) & g_78[1]), 65529UL))), 10)))), l_719.f3, l_721.f1, l_719);
                if (g_294)
                    break;
            }
            for (g_165 = 0; (g_165 <= 6); g_165 += 1)
            {
                int l_735 = (-1L);
                unsigned l_736 = 0UL;
                int i;
                l_454[g_165] = ((safe_sub_func_int8_t_s_s((((p_23 = (l_454[g_165] <= p_23)) && (p_23 ^ p_23)) <= (0x60L && (safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_uint16_t_u((l_463.f1 | 0xB9L))) > ((safe_rshift_func_int8_t_s_u((g_518 ^ ((safe_add_func_int8_t_s_s(g_160, (-4L))) <= g_514[3][2])), 0)) < 0x0376E882L)), 5)))), 0xF3L)) ^ l_504);
                if ((safe_mod_func_int16_t_s_s((~(((l_735 |= func_45(l_733, p_23, (p_23 || func_43((p_23 != l_454[g_165]))), l_463, l_734)) ^ 1L) == 252UL)), l_736)))
                {
                    return p_23;
                }
                else
                {
                    return p_23;
                }
            }
            for (g_456 = 0; (g_456 < 6); g_456 = safe_add_func_uint16_t_u_u(g_456, 8))
            {
                unsigned short l_750 = 0x64ABL;
                int l_751[10] = {0xB1044537L, 0xA41A44EFL, 0xB1044537L, 0xA41A44EFL, 0xB1044537L, 0xA41A44EFL, 0xB1044537L, 0xA41A44EFL, 0xB1044537L, 0xA41A44EFL};
                char l_755 = 0x41L;
                struct S0 l_764 = {78,12,3353,1};
                const int l_776 = 0L;
                unsigned l_843 = 4UL;
                int i;
                if (((-1L) <= func_37((safe_sub_func_int32_t_s_s(((l_658[2] = (p_23 & ((0xEB50L | (g_522 <= (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((l_658[0] >= (l_719.f3 = 0UL)) | (safe_sub_func_uint32_t_u_u(((p_23 <= p_23) >= (safe_lshift_func_uint8_t_u_u((l_454[4] = (0xA2L == l_655)), p_23))), 0L))), 1)), p_23)))) > p_23))) < p_23), l_749)), l_719.f0, g_368.f1, p_23, g_522)))
                {
                    return l_750;
                }
                else
                {
                    char l_752 = (-1L);
                    int l_753 = (-1L);
                    int l_754 = 0xD9DF8FDDL;
                    const struct S0 l_765 = {74,73,2143,1};
                    if (g_368.f1)
                    {
                        l_751[2] = (2L && p_23);
                    }
                    else
                    {
                        unsigned l_756 = 0xA3BB8AC7L;
                        struct S0 l_763[2] = {{18,28,1285,-0}, {18,28,1285,-0}};
                        int i;
                        ++l_756;
                        l_711 = func_37((l_658[0] = (safe_add_func_uint16_t_u_u((l_753 >= 0L), ((((safe_lshift_func_int16_t_s_u(func_37(func_29(l_763[0], l_764, l_765), (safe_lshift_func_int16_t_s_u(p_23, g_518)), (5L == 65526UL), g_368.f3, p_23), 4)) == l_355[0][2]) <= p_23) < 3UL)))), l_765.f2, p_23, l_768, p_23);
                    }
                }
                if (((safe_sub_func_uint16_t_u_u(func_53(l_642[2][6], g_771, l_463.f2, l_719), (g_686[2]--))) | (safe_add_func_uint8_t_u_u(l_751[2], l_776))))
                {
                    for (g_165 = 0; (g_165 <= 4); g_165 += 1)
                    {
                        int i;
                        --l_777;
                    }
                }
                else
                {
                    l_454[4] &= ((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(1UL, 0xEF75L)), (!l_570))) || (g_686[2] && 0xF59F46DAL));
                    l_670 = (safe_add_func_uint8_t_u_u(p_23, g_602));
                    l_454[3] = p_23;
                }
                if (func_45(l_733, p_23, l_734, l_764, (safe_mod_func_uint32_t_u_u(((l_751[2] ^= ((g_499 & ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s(0UL, (safe_add_func_int8_t_s_s((0xEB1EB83BL || g_521), (l_658[6] = 0x8CL))))) && l_733.f2), p_23)) < 1L)) <= g_522)) < l_504), p_23))))
                {
                    int l_801 = 0x4075F353L;
                    for (l_700 = 0; (l_700 <= 6); l_700 += 1)
                    {
                        int i;
                        l_711 = (safe_mod_func_uint8_t_u_u(((l_658[l_700] == ((safe_lshift_func_uint8_t_u_s(6UL, g_318)) ^ (safe_mod_func_uint8_t_u_u(((0x8CF2L == g_281) ^ p_23), l_670)))) | ((((l_719.f3 ^= g_10.f0) & ((0xCA42L != g_800) ^ g_126[0][9])) && 0xD84DL) <= l_454[4])), g_503));
                        return g_686[8];
                    }
                    for (g_521 = 4; (g_521 >= 1); g_521 -= 1)
                    {
                        int i;
                        l_801 = g_170[g_521];
                        if (l_711)
                            break;
                        return p_23;
                    }
                    for (g_294 = 0; (g_294 <= 2); g_294 += 1)
                    {
                        char l_817 = (-1L);
                        int i, j;
                        g_521 = (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((l_367.f3 ^= (safe_lshift_func_uint16_t_u_s(func_37(l_642[g_294][(g_294 + 5)], (l_719.f3 = (safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((g_189 = (g_599[8] = ((0x4CL & (p_23 <= (safe_rshift_func_int16_t_s_s(((((l_670 < 0UL) && (safe_lshift_func_uint16_t_u_u(l_655, ((safe_add_func_uint16_t_u_u(l_817, (safe_rshift_func_uint8_t_u_u((l_614[1][2] < (g_691[(g_294 + 1)][(g_294 + 5)] |= (safe_lshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((l_454[4] = (--g_140)), g_294)) <= l_749), g_105[4])))), 5)))) < g_160)))) & 0xE3L) != p_23), 12)))) != g_170[3]))), l_719.f3)) ^ p_23), l_733.f1))), g_686[9], l_801, g_281), l_826))))), 0x05L));
                        l_751[5] |= l_827;
                    }
                }
                else
                {
                    unsigned l_830[10] = {1UL, 0UL, 1UL, 0UL, 1UL, 0UL, 1UL, 0UL, 1UL, 0UL};
                    int l_835 = 4L;
                    int l_836 = 0x325F2B5CL;
                    int l_837 = (-1L);
                    int l_841 = (-1L);
                    int i;
                    l_830[6] = (safe_rshift_func_uint16_t_u_u(l_719.f3, g_10.f0));
                    for (g_520 = 0; (g_520 > (-27)); --g_520)
                    {
                        g_503 = 0x3AB214ACL;
                    }
                    for (l_668 = 0; (l_668 <= 17); l_668 = safe_add_func_uint32_t_u_u(l_668, 9))
                    {
                        int l_838 = 5L;
                        int l_839[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_839[i] = 1L;
                        l_843++;
                        if (g_522)
                            continue;
                        l_837 = (l_733.f3 ^ ((safe_lshift_func_uint8_t_u_s(g_602, g_691[2][3])) > g_499));
                    }
                }
            }
        }
        else
        {
            g_518 = (g_318 = (safe_unary_minus_func_int16_t_s(p_23)));
        }
        g_503 = 0xE6D830DBL;
        g_518 = func_53(g_686[1], (l_858 = ((safe_rshift_func_int8_t_s_u((g_140 & (0x52L | 0x39L)), (p_23 = (((g_520 != (safe_rshift_func_int8_t_s_u(g_140, ((l_367.f3 |= ((safe_sub_func_int16_t_s_s(0xDCEAL, (safe_sub_func_uint16_t_u_u(l_826, l_857)))) != p_23)) || 0x6589L)))) < 0L) | p_23)))) > l_858)), l_570, l_463);
    }
    else
    {
        struct S0 l_865 = {67,59,3938,3};
        int l_878 = 0x7811C3F7L;
        int l_916 = 5L;
        unsigned char l_936 = 0UL;
        int l_962[10] = {0xE774EC10L, 0x8B93A00AL, 0xE774EC10L, 0x8B93A00AL, 0xE774EC10L, 0x8B93A00AL, 0xE774EC10L, 0x8B93A00AL, 0xE774EC10L, 0x8B93A00AL};
        unsigned char l_1007 = 255UL;
        short l_1048 = 7L;
        int i;
        if ((((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((0xFD35L & (func_45(l_865, (g_686[8] ^= ((p_23 < func_53(l_865.f1, g_519, l_865.f1, l_463)) ^ (++g_160))), ((safe_mod_func_int32_t_s_s(g_126[0][9], g_522)) == 0x041EL), l_367, p_23) && 0L)) <= l_865.f1) < l_865.f2), p_23)), g_671[6])), 0x8CF89A26L)) < l_865.f0) || g_771))
        {
            struct S0 l_872 = {28,102,3417,-3};
            int l_875[8] = {0x0CDA2127L, 0x0CDA2127L, 0xB0781B7BL, 0x0CDA2127L, 0x0CDA2127L, 0xB0781B7BL, 0x0CDA2127L, 0x0CDA2127L};
            unsigned l_897 = 0xF7B4DDE2L;
            short l_917 = 0xDC5AL;
            short l_943 = 0xFF62L;
            int l_957 = (-5L);
            unsigned short l_1023[5] = {0UL, 65535UL, 0UL, 65535UL, 0UL};
            int i;
            for (g_519 = 0; (g_519 < 1); g_519 = safe_add_func_uint16_t_u_u(g_519, 8))
            {
                short l_877[10][3] = {{0xFC90L, 1L, 0x3E0DL}, {0xFC90L, 1L, 0x3E0DL}, {0xFC90L, 1L, 0x3E0DL}, {0xFC90L, 1L, 0x3E0DL}, {0xFC90L, 1L, 0x3E0DL}, {0xFC90L, 1L, 0x3E0DL}, {0xFC90L, 1L, 0x3E0DL}, {0xFC90L, 1L, 0x3E0DL}, {0xFC90L, 1L, 0x3E0DL}, {0xFC90L, 1L, 0x3E0DL}};
                int l_898 = 0xA3EDD2ACL;
                int l_911 = 9L;
                int l_912 = 0x09377AD6L;
                int l_914 = 0x84FA3383L;
                const struct S0 l_947[4] = {{31,51,173,-2}, {31,51,173,-2}, {31,51,173,-2}, {31,51,173,-2}};
                const int l_956 = 9L;
                unsigned l_958 = 0xB9CC9785L;
                int l_961 = (-2L);
                short l_965 = 0x98C0L;
                int l_966[9][9] = {{0L, 0x5A9E0C27L, 0x8F11D9E7L, 0x00DBCAA1L, 2L, 0x83E5B375L, 0xE26E5889L, 0x677C00B4L, 0x677C00B4L}, {0L, 0x5A9E0C27L, 0x8F11D9E7L, 0x00DBCAA1L, 2L, 0x83E5B375L, 0xE26E5889L, 0x677C00B4L, 0x677C00B4L}, {0L, 0x5A9E0C27L, 0x8F11D9E7L, 0x00DBCAA1L, 2L, 0x83E5B375L, 0xE26E5889L, 0x677C00B4L, 0x677C00B4L}, {0L, 0x5A9E0C27L, 0x8F11D9E7L, 0x00DBCAA1L, 2L, 0x83E5B375L, 0xE26E5889L, 0x677C00B4L, 0x677C00B4L}, {0L, 0x5A9E0C27L, 0x8F11D9E7L, 0x00DBCAA1L, 2L, 0x83E5B375L, 0xE26E5889L, 0x677C00B4L, 0x677C00B4L}, {0L, 0x5A9E0C27L, 0x8F11D9E7L, 0x00DBCAA1L, 2L, 0x83E5B375L, 0xE26E5889L, 0x677C00B4L, 0x677C00B4L}, {0L, 0x5A9E0C27L, 0x8F11D9E7L, 0x00DBCAA1L, 2L, 0x83E5B375L, 0xE26E5889L, 0x677C00B4L, 0x677C00B4L}, {0L, 0x5A9E0C27L, 0x8F11D9E7L, 0x00DBCAA1L, 2L, 0x83E5B375L, 0xE26E5889L, 0x677C00B4L, 0x677C00B4L}, {0L, 0x5A9E0C27L, 0x8F11D9E7L, 0x00DBCAA1L, 2L, 0x83E5B375L, 0xE26E5889L, 0x677C00B4L, 0x677C00B4L}};
                int i, j;
                if (func_29(l_367, l_872, l_872))
                {
                    int l_876 = (-10L);
                    struct S0 l_896 = {27,47,1305,2};
                    int l_913[6][6] = {{0x7B1D4114L, 0x7992EA4AL, 1L, 0x9587553DL, 0x7992EA4AL, 0xE4D2CAFCL}, {0x7B1D4114L, 0x7992EA4AL, 1L, 0x9587553DL, 0x7992EA4AL, 0xE4D2CAFCL}, {0x7B1D4114L, 0x7992EA4AL, 1L, 0x9587553DL, 0x7992EA4AL, 0xE4D2CAFCL}, {0x7B1D4114L, 0x7992EA4AL, 1L, 0x9587553DL, 0x7992EA4AL, 0xE4D2CAFCL}, {0x7B1D4114L, 0x7992EA4AL, 1L, 0x9587553DL, 0x7992EA4AL, 0xE4D2CAFCL}, {0x7B1D4114L, 0x7992EA4AL, 1L, 0x9587553DL, 0x7992EA4AL, 0xE4D2CAFCL}};
                    int i, j;
                    if (((g_686[8] || g_456) >= (safe_add_func_uint16_t_u_u(p_23, g_800))))
                    {
                        unsigned l_879 = 0x2A791019L;
                        int l_903[5][9][5] = {{{0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}}, {{0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}}, {{0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}}, {{0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}}, {{0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}, {0x99D319DBL, 1L, 0L, 0xE639FDFEL, 0x43915765L}}};
                        int i, j, k;
                        l_879++;
                        l_898 = (safe_sub_func_int8_t_s_s(g_691[2][3], (safe_lshift_func_uint8_t_u_s(func_43((safe_mod_func_uint8_t_u_u(g_456, (safe_sub_func_uint8_t_u_u(g_140, ((safe_sub_func_int16_t_s_s((l_865.f2 && (-1L)), (((+(g_10.f1 || ((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(g_771, (((((l_897 = ((p_23 | func_53(p_23, l_454[4], l_865.f2, l_896)) == l_879)) >= p_23) <= p_23) && (-3L)) > p_23))) & p_23) == (-1L)), 1UL)) & 0xA5DAB99DL))) || 0xAC715E6DL) || g_686[8]))) != 0xCF91L)))))), g_194[3][4]))));
                        l_878 = ((l_898 |= g_34) | ((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((((g_77 < ((l_903[4][3][4] = p_23) || g_80)) == (l_875[1] = ((p_23 | ((g_518 ^= p_23) > l_463.f0)) > l_872.f2))) <= (g_160 = g_170[3])), p_23)), g_292[8])) || (-3L)));
                    }
                    else
                    {
                        const unsigned short l_908 = 0x5F5BL;
                        g_10.f3 = ((p_23 > ((~(safe_mod_func_uint8_t_u_u(((func_53(g_126[0][9], l_908, (l_908 ^ (g_368.f1 = p_23)), g_10) ^ (l_875[1] = (safe_sub_func_int8_t_s_s(g_499, (-1L))))) >= g_520), p_23))) > l_877[3][1])) != l_877[0][1]);
                    }
                    l_898 = 1L;
                    l_918[6][1][0]++;
                    g_691[2][3] = (safe_rshift_func_int16_t_s_s((l_872.f3 = ((l_858 = (safe_sub_func_int16_t_s_s((g_10.f2 < (((p_23 || (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((0UL < (l_914 = ((safe_add_func_uint8_t_u_u(g_602, ((!((safe_sub_func_uint32_t_u_u((((p_23 = ((1L > g_78[1]) && (255UL < (g_520 = (func_29(l_872, l_896, g_10) ^ l_463.f1))))) >= (-10L)) || p_23), 0UL)) > 9L)) && l_872.f2))) != l_642[2][5]))) | l_897), 5)), 0x70FA5C91L))) | l_896.f2) ^ 0x1013417BL)), l_912))) | l_454[2])), 6));
                }
                else
                {
                    struct S0 l_935 = {27,28,1166,3};
                    int l_944 = (-1L);
                    int l_963[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_963[i] = 0x4D8353AAL;
                    g_518 = (safe_add_func_uint8_t_u_u((g_800 | (func_45(l_935, g_456, (p_23 ^ l_936), g_368, g_691[2][3]) == (safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint32_t_u_u((l_944 = (l_865.f3 = (safe_mod_func_uint8_t_u_u(func_53(l_943, p_23, l_865.f3, l_367), g_194[7][4])))), l_916)) | g_78[0]) || 0xFBL), 14)))), 255UL));
                    if (l_865.f1)
                        break;
                    if ((safe_lshift_func_uint8_t_u_u(func_45(l_872, (g_105[1] = 1UL), g_10.f3, l_947[0], (l_454[4] = (p_23 & ((l_935.f3 = ((safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((func_53((g_522--), ((func_53(g_160, (safe_mod_func_int8_t_s_s((l_911 &= g_189), func_53((g_691[2][3] < g_152), l_956, g_691[2][3], l_865))), p_23, l_947[2]) ^ 4L) >= (-8L)), p_23, l_865) >= l_957), 1L)) >= g_800), l_947[0].f0)) <= g_519)) != l_826)))), g_521)))
                    {
                        char l_959[5];
                        int l_960[7][10][3] = {{{0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}}, {{0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}}, {{0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}}, {{0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}}, {{0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}}, {{0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}}, {{0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}, {0x1C2D2632L, 0L, 0x1BF6DE9DL}}};
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_959[i] = 0L;
                        l_958 = (-10L);
                        l_967[5][3]++;
                    }
                    else
                    {
                        unsigned l_982[7][3] = {{18446744073709551611UL, 0x29F76440L, 4UL}, {18446744073709551611UL, 0x29F76440L, 4UL}, {18446744073709551611UL, 0x29F76440L, 4UL}, {18446744073709551611UL, 0x29F76440L, 4UL}, {18446744073709551611UL, 0x29F76440L, 4UL}, {18446744073709551611UL, 0x29F76440L, 4UL}, {18446744073709551611UL, 0x29F76440L, 4UL}};
                        int l_983 = (-4L);
                        int i, j;
                        l_984 = (l_983 = (((safe_lshift_func_uint16_t_u_s((--g_165), (~(safe_sub_func_int8_t_s_s((l_965 == (0x51L && ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(func_37(g_170[1], g_514[3][2], func_43(((((l_454[1] = l_935.f1) | func_45(l_865, p_23, l_935.f2, g_368, l_865.f1)) ^ 4UL) && 0xBF73FA5BL)), l_982[5][0], g_152), 12)), 0)), 7)) != p_23))), p_23))))) ^ l_916) <= l_982[3][1]));
                        g_368.f3 = p_23;
                        g_10.f3 = g_603;
                        l_912 |= ((1UL <= (g_964 || (g_80 = (p_23 &= ((g_105[0] = l_947[0].f0) > g_10.f1))))) > (l_944 |= (l_943 < g_78[1])));
                    }
                }
            }
            if (((func_45(g_10, ((p_23 < (func_45(l_872, (safe_lshift_func_uint16_t_u_s((254UL | l_872.f1), l_962[6])), l_943, g_368, l_957) & 0xFFL)) != g_78[3]), g_501, g_10, l_865.f2) > 0x2B18434EL) != g_671[0]))
            {
                const struct S0 l_991 = {41,70,2965,1};
                int l_1010[3][6][4] = {{{0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}}, {{0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}}, {{0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}, {0x0BB24A07L, 1L, 1L, (-9L)}}};
                int i, j, k;
                for (l_917 = 0; (l_917 == 1); ++l_917)
                {
                    struct S0 l_989 = {53,64,1363,-0};
                    char l_992 = 0xC7L;
                    int l_1009 = 0x9C1732BDL;
                    l_992 &= (((g_170[0] = 0xACL) != (func_45(l_989, (!(l_943 ^ (safe_unary_minus_func_int32_t_s((l_614[1][2] > 65534UL))))), l_989.f1, l_991, g_292[0]) ^ 0x1EL)) < 1UL);
                    l_989.f3 &= (safe_add_func_int16_t_s_s(l_991.f0, ((0x9117L & p_23) <= (p_23 > (g_34 = func_37(l_989.f2, g_126[0][1], g_126[0][9], (g_170[0] >= (g_368.f0 && g_368.f2)), p_23))))));
                    if ((p_23 & ((safe_add_func_int16_t_s_s(0xC1BCL, func_37(((((p_23 <= ((g_915[4][0][1] & (safe_unary_minus_func_uint32_t_u(0UL))) == g_165)) > p_23) != p_23) | ((func_37(l_872.f0, l_989.f0, g_915[4][0][1], g_194[5][3], g_170[3]) > 0x11AEL) != (-10L))), g_691[0][2], l_998, g_771, p_23))) && 0x9AFA7A56L)))
                    {
                        int l_1008[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1008[i] = 0x7261BC0CL;
                        l_878 = (safe_lshift_func_int16_t_s_u((l_875[5] & ((g_281 == (g_10.f0 >= (((l_1008[0] = (g_514[5][1] != (g_503 = (safe_mod_func_uint8_t_u_u((249UL >= (safe_mod_func_uint32_t_u_u((g_514[3][2] | ((l_916 && (l_355[0][0] ^ (safe_mod_func_uint16_t_u_u((l_454[4] = 0x2D26L), l_1007)))) == l_570)), p_23))), p_23))))) | 0x5040L) < 1UL))) & g_915[8][5][2])), p_23));
                    }
                    else
                    {
                        unsigned l_1011 = 1UL;
                        --l_1011;
                    }
                }
                return g_599[8];
            }
            else
            {
                unsigned l_1014[3][6];
                char l_1028 = 1L;
                int l_1031 = (-1L);
                struct S0 l_1032 = {18,71,2626,-0};
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_1014[i][j] = 0x4F927D24L;
                }
                l_1014[0][0] |= l_872.f0;
                for (g_189 = 0; (g_189 <= 25); ++g_189)
                {
                    int l_1033 = 0x8CE95840L;
                    l_1023[0] = (l_878 |= (safe_add_func_uint8_t_u_u((g_671[0]--), (safe_mod_func_uint16_t_u_u(g_915[6][0][1], 0x1815L)))));
                    l_720 = func_37((g_518 | (safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s(l_1028, 2)) <= g_105[2]) > (g_521 = (safe_add_func_uint8_t_u_u(p_23, (l_1031 = (g_105[1] <= l_355[0][2])))))), func_45(l_1032, g_152, (p_23 & 0x49L), l_1032, g_160)))), g_686[7], g_194[1][2], l_865.f0, l_1033);
                    if (g_1034[0])
                        continue;
                }
            }
        }
        else
        {
            unsigned char l_1035 = 0x0AL;
            int l_1041 = 0xE8C612F3L;
            int l_1042 = 1L;
            int l_1043 = (-6L);
            int l_1044 = 0xD4AFEA13L;
            int l_1045[3][3][3] = {{{1L, 1L, 0xD4BD06A9L}, {1L, 1L, 0xD4BD06A9L}, {1L, 1L, 0xD4BD06A9L}}, {{1L, 1L, 0xD4BD06A9L}, {1L, 1L, 0xD4BD06A9L}, {1L, 1L, 0xD4BD06A9L}}, {{1L, 1L, 0xD4BD06A9L}, {1L, 1L, 0xD4BD06A9L}, {1L, 1L, 0xD4BD06A9L}}};
            unsigned char l_1049 = 0x0EL;
            int i, j, k;
            --l_1035;
            for (g_318 = 0; (g_318 != (-18)); g_318 = safe_sub_func_int8_t_s_s(g_318, 4))
            {
                int l_1040[8] = {0xE9B7ED56L, (-1L), 0xE9B7ED56L, (-1L), 0xE9B7ED56L, (-1L), 0xE9B7ED56L, (-1L)};
                int l_1047 = 1L;
                int i;
                l_1049++;
            }
        }
        l_878 = func_29(l_463, l_865, g_10);
        l_720 ^= (safe_rshift_func_uint16_t_u_s(func_45(l_865, (safe_unary_minus_func_int8_t_s((-3L))), l_916, g_368, l_962[7]), (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_1061 == (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(0x05B6L, (safe_rshift_func_uint8_t_u_s((255UL > l_367.f0), 7)))) || l_367.f2) ^ p_23), 0x73C5L)), l_1007)), 1)), g_603))), l_463.f0)), l_367.f1)) != p_23), g_671[5]))));
    }
    l_858 &= 8L;
    return l_1074;
}







static unsigned short func_29(struct S0 p_30, struct S0 p_31, const struct S0 p_32)
{
    unsigned char l_114[5] = {0x67L, 255UL, 0x67L, 255UL, 0x67L};
    int l_128 = 0L;
    int l_136 = 0L;
    unsigned short l_137 = 7UL;
    short l_138 = 0xD98CL;
    char l_139 = 0xAEL;
    char l_191 = 0x9DL;
    unsigned l_210 = 0x5D591A12L;
    int l_350 = 0x0C066BD9L;
    int i;
    for (g_34 = 0; (g_34 < 11); g_34 = safe_add_func_int16_t_s_s(g_34, 4))
    {
        unsigned short l_115[1][6];
        int l_141 = 0L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_115[i][j] = 65535UL;
        }
        if ((g_10.f2 <= (l_128 = (p_31.f3 != func_37(func_43(p_30.f3), (safe_rshift_func_int16_t_s_u(g_77, p_30.f0)), p_32.f1, (safe_add_func_uint32_t_u_u((l_114[2] & (p_30.f0 < l_115[0][0])), p_31.f2)), p_32.f2)))))
        {
            return g_10.f3;
        }
        else
        {
            unsigned l_129 = 1UL;
            g_10.f3 ^= (0x898209D2L && p_30.f3);
            l_129++;
        }
        l_141 = ((0x3E41A7DDL || p_30.f1) != ((g_140 ^= (l_114[0] | func_43((safe_add_func_int8_t_s_s(0x02L, func_37(p_31.f0, ((l_136 = (safe_sub_func_uint32_t_u_u(0x53BE29DAL, l_114[1]))) && (((((l_137 & (func_43((p_31.f3 <= 255UL)) <= l_138)) ^ g_10.f0) <= (-1L)) == p_30.f2) <= l_139)), g_34, l_115[0][2], l_115[0][0])))))) || g_126[0][6]));
    }
    if ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((g_105[1] = (((p_32.f3 && p_32.f3) <= p_30.f2) == 65526UL)) <= ((safe_mul_func_uint8_t_u_u(p_31.f2, ((safe_mod_func_uint8_t_u_u(0UL, 0xC8L)) == g_80))) || g_78[1])) & g_10.f0), p_30.f1)), g_140)))
    {
        unsigned short l_150[2][2];
        struct S0 l_161 = {89,63,3524,0};
        int l_195 = 0x2C9E7346L;
        short l_232 = 0L;
        struct S0 l_305 = {57,122,1557,-1};
        int l_317 = (-1L);
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_150[i][j] = 65526UL;
        }
        p_30.f3 = 0L;
        if (l_128)
        {
            unsigned short l_164 = 0x99E2L;
            unsigned char l_206[5][4][9] = {{{0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}}, {{0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}}, {{0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}}, {{0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}}, {{0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}, {0xD8L, 0xD4L, 0x4DL, 0x32L, 0UL, 4UL, 255UL, 0x4BL, 0xF6L}}};
            unsigned char l_211[10] = {0x44L, 0xF6L, 0x44L, 0xF6L, 0x44L, 0xF6L, 0x44L, 0xF6L, 0x44L, 0xF6L};
            int l_217 = (-10L);
            int i, j, k;
            for (l_138 = 0; (l_138 <= 6); l_138 += 1)
            {
                int l_151 = 0x760249F7L;
                int l_155[4] = {0x8D63D52EL, 0L, 0x8D63D52EL, 0L};
                short l_169 = (-1L);
                unsigned l_173 = 0xE2363870L;
                int i;
                if (l_150[0][1])
                    break;
                for (l_128 = 0; (l_128 <= 6); l_128 += 1)
                {
                    for (g_66 = 0; (g_66 <= 6); g_66 += 1)
                    {
                        if (g_105[5])
                            break;
                        l_151 ^= p_30.f2;
                        p_31.f3 &= p_31.f0;
                    }
                    for (g_34 = 0; (g_34 <= 6); g_34 += 1)
                    {
                        --g_152;
                    }
                    l_155[0] &= l_139;
                }
                for (l_137 = 0; (l_137 <= 6); l_137 += 1)
                {
                    int l_168 = 1L;
                    int l_193 = 0x46E6FC7EL;
                    int l_196[4][9] = {{0xA97A6A31L, 0xDACAF346L, 0x08F0AE38L, 0xDACAF346L, 0xA97A6A31L, 0L, 0x08F0AE38L, 0L, 0xA97A6A31L}, {0xA97A6A31L, 0xDACAF346L, 0x08F0AE38L, 0xDACAF346L, 0xA97A6A31L, 0L, 0x08F0AE38L, 0L, 0xA97A6A31L}, {0xA97A6A31L, 0xDACAF346L, 0x08F0AE38L, 0xDACAF346L, 0xA97A6A31L, 0L, 0x08F0AE38L, 0L, 0xA97A6A31L}, {0xA97A6A31L, 0xDACAF346L, 0x08F0AE38L, 0xDACAF346L, 0xA97A6A31L, 0L, 0x08F0AE38L, 0L, 0xA97A6A31L}};
                    int i, j;
                    g_165 ^= ((safe_add_func_int16_t_s_s(((g_126[0][9] && (safe_rshift_func_int8_t_s_u(((g_105[l_138] = (+p_31.f2)) < (p_31.f0 > func_53((g_160 = 65532UL), g_106, p_30.f2, l_161))), ((safe_add_func_uint8_t_u_u(((-4L) <= p_30.f0), l_155[0])) < g_106)))) && l_164), l_164)) > p_30.f3);
                    if (g_80)
                        break;
                    if (((safe_rshift_func_int8_t_s_s((((-8L) & ((l_150[0][1] <= p_31.f2) == (g_10.f0 & func_37(g_78[0], g_105[1], p_31.f0, (l_168 = p_30.f0), g_105[6])))) | l_169), g_78[1])) != g_34))
                    {
                        p_30.f3 &= 0xA26DAF19L;
                        g_170[3]++;
                    }
                    else
                    {
                        l_155[0] |= g_66;
                        if (p_32.f0)
                            break;
                        if (l_168)
                            continue;
                        g_10.f3 = l_173;
                    }
                    if ((g_78[2] < (safe_lshift_func_int16_t_s_u(l_161.f2, (g_66 > (func_45(g_10, ((safe_add_func_int8_t_s_s(p_31.f0, ((safe_rshift_func_uint8_t_u_s(g_105[2], ((p_31.f2 <= ((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(0x95L, l_161.f0)), 0x9B7F5435L)) == g_152)) ^ g_105[l_138]))) > 0xB1L))) | g_152), l_164, p_30, p_30.f2) > 8UL))))))
                    {
                        unsigned char l_186 = 0xC9L;
                        g_34 = ((safe_sub_func_int8_t_s_s(g_77, g_152)) > (l_186 != (((g_126[0][9] == p_32.f1) == ((safe_mod_func_uint16_t_u_u((l_161.f3 = p_32.f2), 3L)) > g_105[6])) & ((p_30.f2 && g_10.f2) || p_32.f1))));
                    }
                    else
                    {
                        int l_190[5][5][3] = {{{(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}}, {{(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}}, {{(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}}, {{(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}}, {{(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}}};
                        int l_192[3];
                        unsigned char l_209 = 0x53L;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_192[i] = 9L;
                        g_197++;
                        l_211[4] &= (safe_mod_func_uint32_t_u_u(((p_32.f0 <= (l_155[2] ^= (((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(p_30.f0, (l_206[2][0][7] ^= (65535UL == (+(g_78[1] = (255UL >= 0xDBL))))))), l_151)) || (g_66 < (safe_sub_func_uint8_t_u_u(g_160, ((l_128 = g_170[3]) && l_209))))) > l_210))) != g_189), p_30.f0));
                        p_30.f3 = g_152;
                    }
                }
            }
            for (g_165 = 0; (g_165 <= 9); g_165 += 1)
            {
                unsigned char l_212[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_212[i] = 0xBBL;
                l_212[2]--;
                g_10.f3 |= (safe_add_func_uint8_t_u_u(((l_217 = (l_211[g_165] == g_10.f2)) | p_30.f1), (safe_sub_func_uint8_t_u_u(l_206[2][0][7], g_78[1]))));
            }
        }
        else
        {
            unsigned char l_228 = 0x9FL;
            int l_242 = 1L;
            struct S0 l_316[7] = {{33,40,143,3}, {33,40,143,3}, {33,40,143,3}, {33,40,143,3}, {33,40,143,3}, {33,40,143,3}, {33,40,143,3}};
            int i;
            for (g_34 = 4; (g_34 >= 1); g_34 -= 1)
            {
                struct S0 l_231 = {51,60,3771,-1};
                unsigned short l_275 = 65526UL;
                int i;
                if ((((g_105[g_34] != (safe_rshift_func_int8_t_s_s((g_105[(g_34 + 1)] && ((safe_sub_func_uint16_t_u_u(0x58F1L, (-4L))) | (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(l_228, g_197)), (g_105[(g_34 + 1)] & (func_37(g_10.f2, (func_45(l_231, p_30.f0, p_32.f0, g_10, p_32.f0) >= 0L), g_10.f1, p_31.f1, g_10.f2) || l_232)))))), 3))) || l_228) && l_228))
                {
                    int l_241 = 1L;
                    int l_276 = 0xE01EB92BL;
                    for (l_128 = 0; (l_128 <= 5); l_128 += 1)
                    {
                        int l_272 = 1L;
                        int l_277 = 0x5B357F9CL;
                        int i, j;
                        l_242 = ((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((g_194[(l_128 + 2)][l_128] || 0x0503888EL) < ((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_31.f2, (-1L))), 0xEFL)) ^ (0xEE4DL < 0x298DL))), (0L || 0L))), l_241)) < 0x2AEAL) || p_32.f0) > g_194[(l_128 + 2)][l_128]);
                        p_31.f3 &= (safe_add_func_uint8_t_u_u((p_30.f0 < ((safe_add_func_uint8_t_u_u(p_31.f0, func_43((func_53((((65527UL == func_45(g_10, (1UL & (g_170[1] == (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u(5UL)), 8)) > (safe_rshift_func_uint8_t_u_s((g_78[1] != ((((safe_rshift_func_uint8_t_u_s((g_10.f0 != p_30.f3), 6)) && 0L) && p_30.f3) & g_77)), 5))), l_161.f1)), g_34)))), p_30.f2, l_161, p_30.f2)) || p_30.f2) || p_30.f2), l_114[2], p_31.f2, l_161) | (-8L))))) || l_241)), 0x61L));
                        l_277 &= func_37(((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_228 != 0xEDL), g_10.f1)), (safe_rshift_func_uint16_t_u_u(0x62A8L, 4)))) == (((((++g_170[3]) ^ (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(func_37((((safe_rshift_func_int16_t_s_u((0x738F66FDL < (l_150[0][1] ^ (p_32.f0 <= (l_272 = g_194[8][3])))), (safe_mod_func_uint32_t_u_u(((p_31.f0 & 8L) & g_78[0]), l_231.f1)))) <= l_275) == l_161.f0), p_30.f1, g_165, g_105[6], l_241), p_31.f2)), 12))) > p_30.f1) || l_272) <= l_231.f1)), l_228, p_31.f0, l_276, g_197);
                    }
                }
                else
                {
                    short l_280[10][10] = {{0x8CCEL, (-2L), 0xC9ECL, 1L, 0L, 1L, 0xC9ECL, (-2L), 0x8CCEL, 2L}, {0x8CCEL, (-2L), 0xC9ECL, 1L, 0L, 1L, 0xC9ECL, (-2L), 0x8CCEL, 2L}, {0x8CCEL, (-2L), 0xC9ECL, 1L, 0L, 1L, 0xC9ECL, (-2L), 0x8CCEL, 2L}, {0x8CCEL, (-2L), 0xC9ECL, 1L, 0L, 1L, 0xC9ECL, (-2L), 0x8CCEL, 2L}, {0x8CCEL, (-2L), 0xC9ECL, 1L, 0L, 1L, 0xC9ECL, (-2L), 0x8CCEL, 2L}, {0x8CCEL, (-2L), 0xC9ECL, 1L, 0L, 1L, 0xC9ECL, (-2L), 0x8CCEL, 2L}, {0x8CCEL, (-2L), 0xC9ECL, 1L, 0L, 1L, 0xC9ECL, (-2L), 0x8CCEL, 2L}, {0x8CCEL, (-2L), 0xC9ECL, 1L, 0L, 1L, 0xC9ECL, (-2L), 0x8CCEL, 2L}, {0x8CCEL, (-2L), 0xC9ECL, 1L, 0L, 1L, 0xC9ECL, (-2L), 0x8CCEL, 2L}, {0x8CCEL, (-2L), 0xC9ECL, 1L, 0L, 1L, 0xC9ECL, (-2L), 0x8CCEL, 2L}};
                    int l_290 = 0x03D4DD60L;
                    int l_291 = 0x13671705L;
                    int l_293 = 0x730E419FL;
                    int i, j;
                    for (g_66 = (-4); (g_66 < 37); g_66 = safe_add_func_uint16_t_u_u(g_66, 5))
                    {
                        unsigned l_286 = 18446744073709551615UL;
                        g_281--;
                        g_10.f3 = g_78[1];
                        if (l_161.f1)
                            continue;
                        l_128 = ((g_34 != (((g_10.f0 > (((p_31.f2 <= (0x8AL == (g_106 >= (l_286--)))) > (g_77 <= (0xE2L <= ((6L >= p_30.f2) >= g_170[3])))) < g_189)) == l_210) || p_32.f1)) != p_32.f3);
                    }
                    g_294++;
                }
            }
            l_317 |= ((((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(g_126[0][7], 5)), 4)) > (l_195 <= (p_30.f2 >= ((l_305.f3 = (safe_rshift_func_uint8_t_u_s(((((((((safe_rshift_func_int16_t_s_u(func_45(l_305, (safe_lshift_func_int16_t_s_s((p_30.f1 || p_32.f2), (safe_mod_func_int16_t_s_s((l_128 = (safe_rshift_func_int16_t_s_u((g_77 == 0x41D0L), (safe_add_func_int8_t_s_s((l_316[5].f3 = (((safe_sub_func_uint32_t_u_u(func_53((!g_281), p_30.f2, p_31.f2, l_316[5]), g_189)) || l_242) >= 0xDAC93ADBL)), p_31.f0))))), l_138)))), p_32.f0, p_30, l_161.f3), l_316[5].f2)) >= (-10L)) && g_292[6]) == 255UL) & l_161.f0) == l_316[5].f1) < l_136) > 0UL), 5))) < g_78[2])))) & p_32.f2) | 246UL);
        }
        g_34 = g_289;
        p_30.f3 = (((p_31.f3 = (l_137 < ((-1L) && (((0x27L & g_318) > g_170[3]) > ((~g_105[4]) | ((((-10L) >= 255UL) != (func_37((safe_rshift_func_uint16_t_u_s((l_128 = ((249UL != 255UL) || p_31.f2)), l_232)), g_292[0], p_32.f0, l_191, p_31.f1) < l_195)) && l_161.f0)))))) <= p_30.f3) | g_194[8][3]);
    }
    else
    {
        unsigned l_337 = 0x14FC1EB0L;
        if (g_152)
        {
            int l_332[7] = {0xEEF8C891L, 1L, 0xEEF8C891L, 1L, 0xEEF8C891L, 1L, 0xEEF8C891L};
            int i;
            for (g_294 = 0; (g_294 < 13); g_294 = safe_add_func_int16_t_s_s(g_294, 6))
            {
                int l_325 = 0x308682BDL;
                return l_325;
            }
            g_34 = func_43(((g_77 < (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(func_37(p_30.f1, g_170[3], (p_31.f2 & 0x05L), (g_281 = func_37((((l_332[1] = 0x24L) == (p_30.f0 > (safe_lshift_func_int16_t_s_u(l_210, (safe_lshift_func_uint16_t_u_s((p_32.f2 != p_30.f1), g_165)))))) ^ g_170[3]), g_77, g_289, p_30.f2, l_337)), g_105[0]), 0)), p_31.f2))) && 0x053EL));
            g_318 = (g_189 != (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_191, 5)), func_43(l_114[2]))));
        }
        else
        {
            int l_351 = 0xDD15559FL;
            int l_352 = (-1L);
            p_30.f3 = 0xD1B6C724L;
            g_318 = func_53(g_170[3], (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s((0L || 0x3BA4103FL), (l_128 < (l_350 = 0xF4B7DB33L)))), (l_351 = (0xCA4ECB62L & (func_43(p_32.f2) || (p_30.f1 > g_126[0][9])))))), 0xCEL)) != g_78[1]), 3)), l_352, g_10);
        }
    }
    return g_194[8][3];
}







static char func_37(const unsigned short p_38, int p_39, int p_40, unsigned p_41, unsigned short p_42)
{
    short l_118 = 0xF0D8L;
    int l_119[7] = {2L, 1L, 2L, 1L, 2L, 1L, 2L};
    struct S0 l_120 = {81,1,705,-2};
    int l_121 = 2L;
    unsigned short l_127[4][5] = {{0UL, 0UL, 0x0C0DL, 0UL, 0UL}, {0UL, 0UL, 0x0C0DL, 0UL, 0UL}, {0UL, 0UL, 0x0C0DL, 0UL, 0UL}, {0UL, 0UL, 0x0C0DL, 0UL, 0UL}};
    int i, j;
    l_119[1] = ((safe_sub_func_int32_t_s_s((~l_118), g_10.f3)) > l_118);
    l_127[3][1] &= func_45(l_120, l_119[1], (l_121 = p_39), g_10, (func_43((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(0x38L, (~(l_120.f0 < 7L)))) & (g_126[0][9] &= l_120.f1)), (((p_42 = p_42) <= 0x7DDEL) != g_10.f1)))) >= 0L));
    return p_41;
}







static unsigned short func_43(unsigned char p_44)
{
    unsigned char l_58 = 255UL;
    const struct S0 l_83 = {0,22,1360,2};
    int l_107 = 0xC1C42294L;
    l_107 = (p_44 && func_45(g_10, p_44, (safe_lshift_func_uint16_t_u_u(((g_10.f2 >= (func_53((p_44 | (((l_58 & (l_58 || l_58)) == (0x7EL > p_44)) > p_44)), p_44, p_44, g_10) && l_58)) == (-1L)), 8)), l_83, p_44));
    return p_44;
}







static char func_45(struct S0 p_46, unsigned short p_47, unsigned char p_48, const struct S0 p_49, unsigned short p_50)
{
    unsigned char l_84[8] = {0x5EL, 0xDCL, 0x5EL, 0xDCL, 0x5EL, 0xDCL, 0x5EL, 0xDCL};
    int l_97[5][3] = {{(-10L), (-9L), (-10L)}, {(-10L), (-9L), (-10L)}, {(-10L), (-9L), (-10L)}, {(-10L), (-9L), (-10L)}, {(-10L), (-9L), (-10L)}};
    int l_100 = (-5L);
    int i, j;
    l_84[6]--;
    p_46.f3 = (safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_47 | (safe_sub_func_uint16_t_u_u((l_84[6] & (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((l_97[0][1] |= p_49.f0), (g_106 |= ((p_47 == (safe_mod_func_int16_t_s_s(0x7C05L, ((l_100 |= (0x78L ^ 0UL)) && ((1UL ^ (safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((p_46.f0 < (-2L)), g_105[1])) < p_49.f0), 2))) <= p_49.f3))))) || g_34)))), 0UL))), p_46.f3))), 0xD5L)), 11));
    return p_46.f0;
}







static unsigned func_53(unsigned short p_54, const unsigned short p_55, unsigned char p_56, struct S0 p_57)
{
    unsigned l_63[1];
    int l_67 = 0x8A1C1E9AL;
    int l_74 = 1L;
    int l_79 = 0x0E267355L;
    int i;
    for (i = 0; i < 1; i++)
        l_63[i] = 4294967295UL;
    p_57.f3 &= (g_10.f1 ^ (l_67 = (g_66 |= (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_34, ((l_63[0] < (9L > (((p_57.f0 > g_34) && (g_10.f3 && g_10.f2)) >= (safe_add_func_uint32_t_u_u(l_63[0], 1L))))) >= g_10.f3))), p_57.f2)))));
    p_57.f3 = (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((l_67 = (safe_sub_func_int32_t_s_s((-1L), l_63[0]))) >= g_10.f2), 3)), l_63[0]));
    for (g_66 = 0; (g_66 <= 0); g_66 += 1)
    {
        int l_75 = 4L;
        int l_76[1];
        int i;
        for (i = 0; i < 1; i++)
            l_76[i] = 0x8638AA3AL;
        l_74 = l_63[g_66];
        ++g_80;
    }
    return g_77;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
    transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
    transparent_crc(g_10.f3, "g_10.f3", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_126[i][j], "g_126[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_170[i], "g_170[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_189, "g_189", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_194[i][j], "g_194[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_292[i], "g_292[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_368.f0, "g_368.f0", print_hash_value);
    transparent_crc(g_368.f1, "g_368.f1", print_hash_value);
    transparent_crc(g_368.f2, "g_368.f2", print_hash_value);
    transparent_crc(g_368.f3, "g_368.f3", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_514[i][j], "g_514[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_599[i], "g_599[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_671[i], "g_671[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_686[i], "g_686[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_691[i][j], "g_691[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_800, "g_800", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_915[i][j][k], "g_915[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_964, "g_964", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1034[i], "g_1034[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1094, "g_1094", print_hash_value);
    transparent_crc(g_1170, "g_1170", print_hash_value);
    transparent_crc(g_1289, "g_1289", print_hash_value);
    transparent_crc(g_1428.f0, "g_1428.f0", print_hash_value);
    transparent_crc(g_1428.f1, "g_1428.f1", print_hash_value);
    transparent_crc(g_1428.f2, "g_1428.f2", print_hash_value);
    transparent_crc(g_1428.f3, "g_1428.f3", print_hash_value);
    transparent_crc(g_1474, "g_1474", print_hash_value);
    transparent_crc(g_1488, "g_1488", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
