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


union U0 {
   unsigned long long f0;
   int f1;
   short f2;
   unsigned f3;
   int f4;
};


static unsigned long long g_2[8][5] = {{18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}};
static int g_9 = 0L;
static union U0 g_28 = {5UL};
static int g_70 = 0x309E69C1L;
static int g_92 = 0x544848B2L;
static int g_95 = 0L;
static unsigned long long g_106 = 18446744073709551609UL;
static short g_124 = 6L;
static unsigned char g_131 = 1UL;
static int *g_145 = &g_92;
static union U0 **g_172 = (void*)0;
static long long g_205 = (-7L);
static long long g_207[6][4] = {{7L, 0x2756337E68031B64LL, 0x28BDB423AEECEFAALL, 0x2756337E68031B64LL}, {7L, 0x2756337E68031B64LL, 0x28BDB423AEECEFAALL, 0x2756337E68031B64LL}, {7L, 0x2756337E68031B64LL, 0x28BDB423AEECEFAALL, 0x2756337E68031B64LL}, {7L, 0x2756337E68031B64LL, 0x28BDB423AEECEFAALL, 0x2756337E68031B64LL}, {7L, 0x2756337E68031B64LL, 0x28BDB423AEECEFAALL, 0x2756337E68031B64LL}, {7L, 0x2756337E68031B64LL, 0x28BDB423AEECEFAALL, 0x2756337E68031B64LL}};
static unsigned g_208 = 0xF8604C87L;
static unsigned g_249 = 6UL;
static unsigned g_262[9][7] = {{0UL, 0x54CFA01DL, 1UL, 1UL, 0x54CFA01DL, 0UL, 0UL}, {0UL, 0x54CFA01DL, 1UL, 1UL, 0x54CFA01DL, 0UL, 0UL}, {0UL, 0x54CFA01DL, 1UL, 1UL, 0x54CFA01DL, 0UL, 0UL}, {0UL, 0x54CFA01DL, 1UL, 1UL, 0x54CFA01DL, 0UL, 0UL}, {0UL, 0x54CFA01DL, 1UL, 1UL, 0x54CFA01DL, 0UL, 0UL}, {0UL, 0x54CFA01DL, 1UL, 1UL, 0x54CFA01DL, 0UL, 0UL}, {0UL, 0x54CFA01DL, 1UL, 1UL, 0x54CFA01DL, 0UL, 0UL}, {0UL, 0x54CFA01DL, 1UL, 1UL, 0x54CFA01DL, 0UL, 0UL}, {0UL, 0x54CFA01DL, 1UL, 1UL, 0x54CFA01DL, 0UL, 0UL}};
static unsigned g_266[10] = {0x17E76741L, 0xB45EA4DFL, 0x17E76741L, 0xB45EA4DFL, 0x17E76741L, 0xB45EA4DFL, 0x17E76741L, 0xB45EA4DFL, 0x17E76741L, 0xB45EA4DFL};
static char g_418 = 0x4DL;
static long long g_419 = 0xAD94F52823067E34LL;
static unsigned long long g_420 = 7UL;
static short g_511 = (-1L);
static char g_512 = 0x1DL;
static unsigned g_531 = 0xA25D0EABL;
static short g_552 = 0xE137L;
static unsigned char g_558 = 255UL;
static int g_561 = 4L;
static long long g_562 = 0x1BA244A14E39B54BLL;
static unsigned g_563[6] = {4294967290UL, 4294967290UL, 0x12D6FC9CL, 4294967290UL, 4294967290UL, 0x12D6FC9CL};
static unsigned long long g_631[1][1][10] = {{{0x26C2EF710FE35113LL, 4UL, 0x26C2EF710FE35113LL, 4UL, 0x26C2EF710FE35113LL, 4UL, 0x26C2EF710FE35113LL, 4UL, 0x26C2EF710FE35113LL, 4UL}}};
static unsigned long long g_699 = 0x043E5DF0C73475F9LL;
static char g_717[6] = {8L, 8L, (-1L), 8L, 8L, (-1L)};
static unsigned char g_718[4] = {250UL, 250UL, 250UL, 250UL};
static unsigned char g_770 = 246UL;
static unsigned g_796 = 0xDEEFEF69L;
static union U0 *g_823[3][5][2] = {{{&g_28, (void*)0}, {&g_28, (void*)0}, {&g_28, (void*)0}, {&g_28, (void*)0}, {&g_28, (void*)0}}, {{&g_28, (void*)0}, {&g_28, (void*)0}, {&g_28, (void*)0}, {&g_28, (void*)0}, {&g_28, (void*)0}}, {{&g_28, (void*)0}, {&g_28, (void*)0}, {&g_28, (void*)0}, {&g_28, (void*)0}, {&g_28, (void*)0}}};
static union U0 **g_822 = &g_823[2][3][1];
static union U0 g_841 = {6UL};
static int g_843 = 1L;
static unsigned char g_844 = 0UL;
static unsigned g_863 = 4294967288UL;
static long long g_876 = 1L;
static unsigned char g_894 = 0x17L;
static short g_922 = 0x338FL;
static short g_923[8] = {0x2DEFL, (-1L), 0x2DEFL, (-1L), 0x2DEFL, (-1L), 0x2DEFL, (-1L)};
static long long g_924[5][9][4] = {{{0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}}, {{0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}}, {{0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}}, {{0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}}, {{0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}, {0xB974E930C359BBC2LL, 0x24976D39D0DD3B0BLL, 0x195419A8FEC18B6FLL, 0x24976D39D0DD3B0BLL}}};
static unsigned long long g_926 = 0x4695563D729EA392LL;
static int **g_944 = (void*)0;
static unsigned short g_983 = 65533UL;
static unsigned short g_995[9] = {0xC022L, 0xC022L, 0xC022L, 0xC022L, 0xC022L, 0xC022L, 0xC022L, 0xC022L, 0xC022L};
static int g_1003 = 0x5547D885L;
static int g_1036 = (-10L);
static unsigned char g_1038 = 0xF5L;
static unsigned g_1094 = 0UL;



static union U0 func_1(void);
static unsigned func_6(long long p_7);
static union U0 * func_10(int p_11, long long p_12, int * p_13, unsigned long long p_14);
static unsigned short func_15(int * p_16, unsigned char p_17, int * p_18, char p_19, unsigned char p_20);
static int * func_21(union U0 * p_22, char p_23, unsigned p_24, unsigned p_25, int p_26);
static union U0 func_29(union U0 * p_30, long long p_31, short p_32);
static unsigned char func_46(char p_47, char p_48);
static char func_49(int * p_50);
static int func_52(union U0 * p_53, short p_54);
static unsigned short func_64(short p_65, union U0 * p_66, union U0 * p_67);
static union U0 func_1(void)
{
    unsigned long long l_5 = 0UL;
    union U0 l_1013 = {18446744073709551610UL};
    int l_1035[5];
    unsigned l_1043[4];
    int i;
    for (i = 0; i < 5; i++)
        l_1035[i] = 0xE0683550L;
    for (i = 0; i < 4; i++)
        l_1043[i] = 0xA31D8A1CL;
    if (g_2[2][2])
    {
        char l_1001 = 2L;
        int *l_1002 = &g_1003;
        (*l_1002) |= (safe_sub_func_uint16_t_u_u((l_5 , (func_6(g_2[0][4]) <= (l_5 == ((safe_rshift_func_int16_t_s_u((l_5 , 1L), 1)) | l_1001)))), 65535UL));




    }
    else
    {
        int l_1006 = 2L;
        int l_1008[1][2][3] = {{{0x16A89EFDL, (-1L), 0x16A89EFDL}, {0x16A89EFDL, (-1L), 0x16A89EFDL}}};
        int l_1009 = 0xE961005FL;
        unsigned short l_1091 = 0xA7E1L;
        int i, j, k;
        for (g_124 = 0; (g_124 >= 0); g_124 -= 1)
        {
            unsigned short l_1010 = 65533UL;
            union U0 ***l_1024[8] = {&g_822, &g_822, &g_822, &g_822, &g_822, &g_822, &g_822, &g_822};
            unsigned l_1029 = 9UL;
            int l_1032 = 0xF2F38E65L;
            unsigned l_1063 = 1UL;
            int i;
            for (g_28.f0 = 0; (g_28.f0 <= 0); g_28.f0 += 1)
            {
                unsigned l_1004 = 18446744073709551615UL;
                int l_1007 = 0x9F308C62L;
                (*g_145) = (*g_145);
                for (g_841.f2 = 0; (g_841.f2 <= 0); g_841.f2 += 1)
                {
                    int *l_1005[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1005[i] = &g_1003;
                    l_1004 = g_631[g_841.f2][g_28.f0][(g_28.f0 + 6)];
                    --l_1010;
                    (*g_145) ^= (4L & (g_631[g_124][g_124][(g_28.f0 + 1)] <= g_924[(g_124 + 1)][(g_28.f0 + 1)][(g_124 + 3)]));
                }
            }
        }

                (*g_145) = (*g_145);
    }




        return l_1013;

    }







static unsigned func_6(long long p_7)
{
    int *l_8 = &g_9;
    union U0 *l_27 = &g_28;
    int l_888 = (-6L);
    int l_889 = (-1L);
    int l_891 = 9L;
    int l_892 = 0xD4B9C34BL;
    int l_893[10][2];
    long long l_917 = 0x3729BB2FAA808256LL;
    int l_918[3][2][3] = {{{2L, 0L, 2L}, {2L, 0L, 2L}}, {{2L, 0L, 2L}, {2L, 0L, 2L}}, {{2L, 0L, 2L}, {2L, 0L, 2L}}};
    int **l_929 = &g_145;
    short l_954 = 1L;
    unsigned long long l_984 = 0x6CAA50A1EFC91625LL;
    int l_986 = 0L;
    unsigned long long l_988[10][4] = {{0x266AE5CFBC1D2433LL, 1UL, 0x6983D73CC0135744LL, 0UL}, {0x266AE5CFBC1D2433LL, 1UL, 0x6983D73CC0135744LL, 0UL}, {0x266AE5CFBC1D2433LL, 1UL, 0x6983D73CC0135744LL, 0UL}, {0x266AE5CFBC1D2433LL, 1UL, 0x6983D73CC0135744LL, 0UL}, {0x266AE5CFBC1D2433LL, 1UL, 0x6983D73CC0135744LL, 0UL}, {0x266AE5CFBC1D2433LL, 1UL, 0x6983D73CC0135744LL, 0UL}, {0x266AE5CFBC1D2433LL, 1UL, 0x6983D73CC0135744LL, 0UL}, {0x266AE5CFBC1D2433LL, 1UL, 0x6983D73CC0135744LL, 0UL}, {0x266AE5CFBC1D2433LL, 1UL, 0x6983D73CC0135744LL, 0UL}, {0x266AE5CFBC1D2433LL, 1UL, 0x6983D73CC0135744LL, 0UL}};
    unsigned l_998 = 1UL;
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_893[i][j] = (-1L);
    }
    (*l_8) ^= g_2[2][2];
    (*l_8) |= p_7;
    (*g_822) = func_10((*l_8), ((func_15(func_21(l_27, ((((func_29(&g_28, p_7, (*l_8)) , g_418) ^ g_2[2][2]) | g_558) <= g_562), g_418, p_7, g_418), g_2[4][1], l_8, p_7, p_7) == (*l_8)) , (*l_8)), &g_9, p_7);




    for (g_95 = 0; (g_95 <= 1); g_95 += 1)
    {
        union U0 *l_885 = &g_28;
        int l_886 = 0xDFDAC0AFL;
        int *l_887[5][2] = {{(void*)0, &g_70}, {(void*)0, &g_70}, {(void*)0, &g_70}, {(void*)0, &g_70}, {(void*)0, &g_70}};
        short l_890[1][1];
        short l_916 = (-10L);
        int **l_945 = &l_8;
        char l_987 = 1L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_890[i][j] = 0x1F04L;
        }
    }
    return l_998;
}







static union U0 * func_10(int p_11, long long p_12, int * p_13, unsigned long long p_14)
{
    unsigned l_867[10] = {0x84A40AE7L, 0UL, 0xC977DE46L, 0xC977DE46L, 0UL, 0x84A40AE7L, 0UL, 0xC977DE46L, 0xC977DE46L, 0UL};
    unsigned short l_872 = 0x692EL;
    union U0 *l_873[2][8] = {{&g_841, &g_841, &g_28, &g_841, &g_841, &g_28, &g_841, &g_841}, {&g_841, &g_841, &g_28, &g_841, &g_841, &g_28, &g_841, &g_841}};
    int i, j;
    (*p_13) = (((l_867[1] >= (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((g_419 == func_46(((*p_13) , g_699), l_867[1])), 7)), l_867[1]))) != l_867[1]) >= l_872);
    return l_873[0][6];


}







static unsigned short func_15(int * p_16, unsigned char p_17, int * p_18, char p_19, unsigned char p_20)
{
    short l_715[5] = {(-1L), 8L, (-1L), 8L, (-1L)};
    int *l_716[4] = {&g_92, &g_70, &g_92, &g_70};
    union U0 *l_721 = &g_28;
    int l_842 = 1L;
    int i;
    g_718[0]++;
    if ((g_631[0][0][2] >= p_20))
    {
        unsigned long long l_722 = 0x15FFCEE44FD8FC21LL;
        (*p_16) ^= (l_722 | (l_721 == &g_28));
        g_92 = (*p_16);
    }
    else
    {
        union U0 *l_725 = &g_28;
        int l_727 = 0x98E96403L;
        for (g_28.f1 = 22; (g_28.f1 < 28); g_28.f1++)
        {
            unsigned l_726 = 0UL;
            (*p_16) ^= l_726;
            if (l_727)
                break;
        }
    }
    for (g_131 = 0; (g_131 != 18); g_131++)
    {
        char l_732 = 3L;
        union U0 *l_748 = &g_28;
        unsigned l_769 = 0x1990C90AL;
        int l_778[4][10][4] = {{{0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}}, {{0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}}, {{0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}}, {{0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}, {0xEED36293L, 0x67D4C74AL, 0xFB3CDC5CL, (-2L)}}};
        int i, j, k;
        if ((safe_sub_func_int32_t_s_s(func_46(g_699, ((void*)0 != &g_28)), ((p_17 ^ l_732) != ((safe_lshift_func_int8_t_s_u(g_561, 4)) || (g_717[1] , g_418))))))
        {
            long long l_737 = 0x7D813733F6E59EC6LL;
            int **l_738 = &g_145;
            (*l_738) = func_21(l_721, (safe_add_func_uint8_t_u_u((func_46(g_699, func_52(l_721, func_52(&g_28, p_19))) , (p_19 && p_17)), 0x1AL)), p_17, l_737, l_732);

            ;
        }
        else
        {
            union U0 *l_747 = (void*)0;
            int l_768 = 0x7C6C958FL;
            union U0 ***l_775 = &g_172;
            union U0 *l_791[8][3][6] = {{{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28}}};
            int i, j, k;
            (*p_16) = (safe_mul_func_int8_t_s_s(p_17, ((safe_mod_func_int8_t_s_s(g_92, l_732)) | (((safe_rshift_func_int8_t_s_s(((((((safe_sub_func_uint8_t_u_u(p_20, 0xA1L)) && (*p_16)) < (l_747 == l_748)) && p_20) <= g_131) & p_17), 3)) > g_131) && 0xC65FL))));
            g_770 = ((1UL >= p_19) < ((l_732 , (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((0x2D72E725FDB4E484LL < (safe_mul_func_uint8_t_u_u(0x0AL, ((safe_rshift_func_uint8_t_u_u((1UL == (safe_rshift_func_uint16_t_u_s((((5UL > g_207[3][1]) != (safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(g_9, p_19)) < (*p_18)), l_768)))), 0UL)), 0L))) >= p_17), 6))), 7)) && (*p_16))))) || p_20), g_718[0])), p_19))) < l_769));
            for (g_106 = 13; (g_106 == 3); g_106--)
            {
                char l_794 = 1L;
                union U0 *l_800 = &g_28;
                l_778[2][0][2] = (&g_145 == (func_46((0xDFL ^ l_768), ((!((safe_sub_func_uint16_t_u_u(p_17, ((((((l_775 == (void*)0) , func_21(l_721, ((((safe_mul_func_int8_t_s_s((((p_19 , g_92) > g_106) , l_732), p_19)) && g_266[4]) || 0xF0D6FAD2L) || (*p_18)), g_563[3], l_768, p_19)) != (void*)0) , p_20) <= l_732) && p_17))) != 0x8F04310EF528BBECLL)) < p_20)) , &g_145));
                for (g_699 = 0; (g_699 <= 3); g_699 += 1)
                {
                    int l_795 = (-9L);
                    union U0 *l_799 = &g_28;
                    int **l_801 = &l_716[2];
                    int i, j;
                    l_778[2][0][2] &= g_207[(g_699 + 1)][g_699];
                    for (l_732 = 0; (l_732 <= 27); l_732++)
                    {
                        (*p_16) = ((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(g_208, func_52(l_791[1][2][0], l_768))) != (p_17 & 0x7AL)), (safe_mod_func_uint64_t_u_u((l_794 & p_17), g_207[(g_699 + 1)][g_699])))), g_131)) , 1UL), p_20)) <= g_208) == g_207[(g_699 + 1)][g_699]), g_9)) & g_718[0]);

                                                ++g_796;
                    }
                    (*l_801) = func_21(l_799, (g_124 , 0x5DL), (l_800 != ((*l_721) , l_748)), l_794, l_778[2][0][2]);
                    for (g_419 = 6; (g_419 >= 2); g_419 -= 1)
                    {
                        int i;
                        (*p_16) = g_266[(g_699 + 1)];
                    }
                }
                for (l_769 = 0; (l_769 >= 9); ++l_769)
                {
                    unsigned short l_826[4] = {3UL, 1UL, 3UL, 1UL};
                    int i;
                    if ((((l_768 , (*p_18)) <= 3L) == ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(l_778[1][6][1], 12)) < ((0x07719DFADE9FEA9BLL != (safe_lshift_func_uint16_t_u_s(g_558, func_52(l_800, (safe_lshift_func_int16_t_s_s((func_52(l_721, l_768) , p_20), p_17)))))) , g_262[7][5])), p_20)) & p_19) > p_19) == g_208) , p_19), p_17)), 2)), 3)) || 0xBE61A6F31C5267EBLL)))
                    {
                        int l_829 = 0xCE444D7CL;
                        int **l_830 = &l_716[1];
                        (*l_830) = func_21(&g_28, p_19, (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((g_822 == &g_823[2][3][1]), (safe_lshift_func_int8_t_s_u((l_826[0] != (0xBAL && ((safe_rshift_func_uint16_t_u_s(func_52(l_721, g_208), 3)) , l_829))), p_19)))), g_249)), g_266[0], g_718[0]);
                        if ((*p_16))
                            break;
                    }
                    else
                    {
                        return p_20;
                    }

                                        for (g_28.f4 = 13; (g_28.f4 != (-6)); g_28.f4 = safe_sub_func_int32_t_s_s(g_28.f4, 2))
                    {
                        return g_717[0];
                    }
                }
                g_70 &= ((+(safe_sub_func_uint16_t_u_u(((0L | (g_2[2][2] < ((safe_mul_func_uint8_t_u_u(((g_563[0] >= ((((((((safe_rshift_func_uint16_t_u_u(65535UL, ((safe_mod_func_int32_t_s_s(func_52((*g_822), p_20), ((g_841 , (-9L)) , p_20))) > l_768))) > p_19) && p_20) , l_768) == 1UL) , g_511) ^ p_17) & p_17)) , p_20), g_562)) > g_420))) && g_92), 0x08F2L))) != 0x27507926L);

                            }
        }
        --g_844;
    }
    for (g_796 = 0; (g_796 <= 4); g_796 += 1)
    {
        unsigned l_853 = 0UL;
        union U0 *l_856 = &g_841;
        if ((((safe_lshift_func_uint16_t_u_s(g_205, 3)) <= 248UL) , (((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(l_853, 12)) == 0xBCD96EED36D779B0LL), g_2[1][1])) & g_562) ^ (safe_rshift_func_uint16_t_u_s((((func_52(l_856, g_9) == 0xDD36L) <= l_853) > g_266[7]), 12)))))
        {
            int *l_857 = &g_92;
            int **l_858 = (void*)0;
            int **l_859 = &l_857;
            char l_860 = 4L;
            (*l_859) = l_857;
            g_145 = &g_92;

            ;
            if (l_860)
                continue;
        }
        else
        {
            return p_19;
        }

                ;
        if ((*g_145))
            continue;
        for (g_124 = 1; (g_124 <= 4); g_124 += 1)
        {
            short l_861 = 4L;
            int l_862 = (-2L);
            int **l_866 = &l_716[2];
            int i, j;
            --g_863;
            (*p_16) = (g_2[(g_124 + 1)][g_796] < 65535UL);
            (*l_866) = p_18;
            if (l_853)
                continue;
        }
    }


    return p_19;
}







static int * func_21(union U0 * p_22, char p_23, unsigned p_24, unsigned p_25, int p_26)
{
    return &g_70;


}







static union U0 func_29(union U0 * p_30, long long p_31, short p_32)
{
    unsigned l_33 = 8UL;
    int *l_51 = (void*)0;
    unsigned l_569 = 18446744073709551615UL;
    unsigned char l_599[6];
    union U0 l_610 = {18446744073709551614UL};
    int l_630[4][4][6] = {{{1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}}, {{1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}}, {{1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}}, {{1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}, {1L, 0x4DAC3254L, (-1L), 0xAF8EA58EL, 0xD5878FCBL, 0L}}};
    unsigned l_661 = 0x41239524L;
    int l_682 = 1L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_599[i] = 0xFDL;
    if ((l_33 , p_31))
    {
        char l_38 = (-1L);
        int *l_596 = &g_92;
        int l_613[2][5][4] = {{{(-2L), 0xA4F7CE5AL, 8L, 0xA4F7CE5AL}, {(-2L), 0xA4F7CE5AL, 8L, 0xA4F7CE5AL}, {(-2L), 0xA4F7CE5AL, 8L, 0xA4F7CE5AL}, {(-2L), 0xA4F7CE5AL, 8L, 0xA4F7CE5AL}, {(-2L), 0xA4F7CE5AL, 8L, 0xA4F7CE5AL}}, {{(-2L), 0xA4F7CE5AL, 8L, 0xA4F7CE5AL}, {(-2L), 0xA4F7CE5AL, 8L, 0xA4F7CE5AL}, {(-2L), 0xA4F7CE5AL, 8L, 0xA4F7CE5AL}, {(-2L), 0xA4F7CE5AL, 8L, 0xA4F7CE5AL}, {(-2L), 0xA4F7CE5AL, 8L, 0xA4F7CE5AL}}};
        unsigned char l_622[5][5] = {{0UL, 0xE1L, 0UL, 0xE1L, 0UL}, {0UL, 0xE1L, 0UL, 0xE1L, 0UL}, {0UL, 0xE1L, 0UL, 0xE1L, 0UL}, {0UL, 0xE1L, 0UL, 0xE1L, 0UL}, {0UL, 0xE1L, 0UL, 0xE1L, 0UL}};
        union U0 *l_647 = &l_610;
        union U0 ***l_653 = (void*)0;
        int i, j, k;
        if ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_31, l_38)), l_38)))
        {
            unsigned l_45 = 3UL;
            unsigned short l_559[1];
            int *l_568[8] = {&g_92, &g_70, &g_92, &g_70, &g_92, &g_70, &g_92, &g_70};
            union U0 *l_573[10][7] = {{&g_28, &g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28, &g_28}};
            union U0 **l_572 = &l_573[2][5];
            int i, j;
            for (i = 0; i < 1; i++)
                l_559[i] = 0xE4C2L;
            l_569 = (safe_mul_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_45, func_46(((((((g_9 && func_49(l_51)) & (((((l_45 , (l_38 != l_45)) , (g_2[2][2] < g_552)) && 0x64L) <= 1UL) ^ l_45)) , 0x41BA7B94L) > l_559[0]) <= l_33) == g_2[2][2]), g_9))), 2)) | (-1L)) , g_95) > l_559[0]), l_45));


            g_70 ^= (safe_add_func_int64_t_s_s(g_262[7][5], p_32));
            g_172 = l_572;

            ;
        }
        else
        {
            long long l_589 = 0x06F2F517522745B5LL;
            union U0 ***l_604[6] = {&g_172, &g_172, &g_172, &g_172, &g_172, &g_172};
            int *l_611 = (void*)0;
            int l_612[10][5][4] = {{{0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}}, {{0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}}, {{0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}}, {{0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}}, {{0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}}, {{0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}}, {{0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}}, {{0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}}, {{0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}}, {{0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}, {0L, 0x3392ED3BL, 0x9BBAFC3DL, (-7L)}}};
            short l_650 = 8L;
            char l_652 = 0xF1L;
            int i, j, k;
            (*g_145) = (safe_lshift_func_uint8_t_u_s(0UL, ((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((~l_38), 3)), p_31)), (0x4CL <= 0x3AL))) ^ ((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s(l_33)), p_31)), 9)) == l_589) , (safe_sub_func_uint32_t_u_u(l_33, l_589))), l_38)) , (*g_145)))));
            if (((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(func_46(g_28.f2, ((void*)0 != l_596)), (safe_mod_func_uint32_t_u_u(p_31, l_599[4])))), ((*l_596) ^ ((+p_32) && ((safe_lshift_func_int8_t_s_s(g_2[0][1], 3)) , g_511))))) == p_31))
            {
                unsigned l_607 = 1UL;
                int *l_614 = &l_612[4][1][3];
                int *l_615 = &l_613[0][4][1];
                int *l_616 = &l_613[1][3][1];
                int *l_617 = &l_610.f1;
                int *l_618 = &g_92;
                int *l_619 = &l_610.f1;
                int *l_620 = &l_612[4][1][3];
                int *l_621[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_621[i] = (void*)0;
                l_607 |= ((((void*)0 != g_172) , (((safe_lshift_func_uint16_t_u_s(p_31, ((l_604[4] != &g_172) > p_31))) | 0x0FL) >= ((p_31 && p_32) | 0L))) , (*g_145));
                (*g_145) &= ((safe_lshift_func_uint8_t_u_s((func_52(p_30, ((void*)0 != &g_145)) , (g_552 > g_420)), 4)) ^ p_32);

                                l_622[0][3]--;
            }
            else
            {
                int *l_625 = &l_610.f1;
                int *l_626 = (void*)0;
                int *l_627 = &g_70;
                int *l_628 = &g_70;
                int *l_629[10] = {&l_610.f1, &l_612[7][2][2], &l_610.f1, &l_610.f1, &l_612[7][2][2], &l_610.f1, &l_612[7][2][2], &l_610.f1, &l_610.f1, &l_612[7][2][2]};
                int i;
                --g_631[0][0][2];
            }

                        if ((safe_rshift_func_int8_t_s_s((4294967295UL < (((safe_rshift_func_uint8_t_u_s(((((void*)0 != p_30) >= (((0x98A2A903840E3FADLL <= ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_631[0][0][3], p_31)), (*l_596))) > g_531)) || (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_124, p_32)), p_32))) <= (*g_145))) ^ g_70), 1)) , &g_145) != &g_145)), (*l_596))))
            {
                unsigned short l_646[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_646[i] = 0UL;
                if ((p_31 , (safe_mul_func_uint16_t_u_u(((l_650 >= g_28.f3) <= p_32), (-1L)))))
                {
                    return (*p_30);

                                    }
                else
                {
                    int **l_651 = &l_596;
                    (*l_651) = (void*)0;

                    ;
                    if ((func_46(p_31, p_31) && (*g_145)))
                    {
                        (*g_145) = l_652;
                    }
                    else
                    {
                        return g_28;

                                            }

                                        return (*p_30);

                                    }
            }
            else
            {
                union U0 ***l_654 = &g_172;
                (*l_596) = ((l_653 == l_654) ^ (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(g_207[3][1], g_28.f3)), g_512)));
                g_70 ^= (*g_145);
            }
            for (g_131 = 0; (g_131 < 19); g_131 = safe_add_func_uint8_t_u_u(g_131, 1))
            {
                union U0 ***l_683 = &g_172;
                int l_684 = 0x782A9C2FL;
                int *l_691 = &l_613[1][0][0];
                int *l_692 = (void*)0;
                int *l_693 = &l_612[8][4][2];
                int *l_694 = &g_70;
                int *l_695 = (void*)0;
                int *l_696 = &g_28.f1;
                int *l_697 = &g_70;
                int *l_698[1][3][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_698[i][j][k] = &l_610.f1;
                    }
                }
                (*l_596) = ((*g_145) < ((0xA7L == p_32) ^ l_661));
                for (g_511 = 22; (g_511 == 8); --g_511)
                {
                    short l_666 = 0x1B66L;
                    int l_669 = 0xE4D85EA9L;
                    int **l_690 = &l_611;
                    (*l_596) = (safe_mul_func_uint16_t_u_u(0x5E73L, (g_249 < l_666)));
                    (*g_145) = 0xC7DD05E9L;
                    if ((safe_sub_func_int64_t_s_s(g_266[9], l_669)))
                    {
                        return (*p_30);

                                            }
                    else
                    {
                        unsigned short l_685 = 0xD844L;
                        int *l_686 = &g_28.f1;
                        int **l_687 = &l_51;
                        (*l_686) |= (((safe_rshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_562, (((((safe_lshift_func_int8_t_s_u(0x52L, ((((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(p_31, p_32)) & 0xF97A20D5L), l_682)) , l_604[4]) != &g_172) >= g_9))) , (void*)0) == l_683) != g_266[4]) && p_32))), (*l_596))) != l_684) | 4294967295UL), 3)) > 0xE425E296L) , l_685);

                                                (*l_686) &= (*g_145);
                        (*l_687) = l_686;

                        ;
                        (*g_145) |= (p_31 <= (safe_lshift_func_int8_t_s_s(g_207[2][3], ((l_666 , g_262[7][5]) != 1L))));
                    }

                                        ;
                    (*l_690) = &l_669;

                    ;
                }
                g_699--;
                (*l_697) ^= (*l_596);
            }

            ;

        }

                ;


    }
    else
    {
        union U0 l_702 = {0UL};
        int **l_703 = &l_51;
        (*l_703) = (l_702 , &g_70);

        ;
        for (g_28.f4 = 0; (g_28.f4 < (-25)); g_28.f4 = safe_sub_func_int64_t_s_s(g_28.f4, 4))
        {
            for (l_610.f1 = 0; (l_610.f1 > (-22)); --l_610.f1)
            {
                unsigned char l_708 = 0x92L;
                l_708 = (*g_145);
                (*g_145) |= ((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((**l_703), (p_32 ^ g_512))), g_631[0][0][2])) | (p_31 != (safe_lshift_func_uint8_t_u_u((**l_703), 2))));
            }
        }

                    }

        ;


        return l_610;

    }







static unsigned char func_46(char p_47, char p_48)
{
    int *l_560[6][8] = {{&g_70, &g_92, (void*)0, &g_9, (void*)0, &g_28.f1, &g_28.f1, &g_28.f1}, {&g_70, &g_92, (void*)0, &g_9, (void*)0, &g_28.f1, &g_28.f1, &g_28.f1}, {&g_70, &g_92, (void*)0, &g_9, (void*)0, &g_28.f1, &g_28.f1, &g_28.f1}, {&g_70, &g_92, (void*)0, &g_9, (void*)0, &g_28.f1, &g_28.f1, &g_28.f1}, {&g_70, &g_92, (void*)0, &g_9, (void*)0, &g_28.f1, &g_28.f1, &g_28.f1}, {&g_70, &g_92, (void*)0, &g_9, (void*)0, &g_28.f1, &g_28.f1, &g_28.f1}};
    int i, j;
    g_563[0]++;
    g_28.f1 = (safe_add_func_int64_t_s_s(p_47, (p_47 , 0xEE293B23B4BDA7E0LL)));
    return g_95;
}







static char func_49(int * p_50)
{
    int l_61 = 4L;
    union U0 *l_68 = &g_28;
    int l_159 = (-1L);
    union U0 *l_164 = (void*)0;
    int l_201 = 0xB9120BB8L;
    int l_261 = (-1L);
    union U0 ***l_308 = &g_172;
    union U0 *l_321 = &g_28;
    int *l_520 = &g_9;
    int l_529[10] = {0xBC740BF5L, 0L, 0xBC740BF5L, 0L, 0xBC740BF5L, 0L, 0xBC740BF5L, 0L, 0xBC740BF5L, 0L};
    char l_530 = 0xBBL;
    short l_549 = (-9L);
    int i;
    l_159 ^= func_52(((((0x4F9AF3922CBD4DAELL ^ 0xF12AFBCAE26E1651LL) || (safe_mod_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(g_28.f0, (safe_sub_func_uint8_t_u_u(l_61, (g_9 ^ (((safe_lshift_func_uint16_t_u_u(func_64(g_2[2][2], l_68, &g_28), 0)) , g_131) <= g_2[1][1])))))) , l_61), l_61))) > 0xA6L) , &g_28), l_61);


    if ((safe_add_func_uint8_t_u_u((g_2[2][2] , ((l_61 | (safe_add_func_uint64_t_u_u(g_95, (0L | ((g_28 , l_61) <= ((void*)0 == l_164)))))) & l_159)), 253UL)))
    {
        int l_171 = 0x34156CA0L;
        union U0 l_181 = {0x45F9DAB1EBA09290LL};
        int *l_217 = (void*)0;
        int l_247 = 1L;
        int l_265 = 0L;
        for (l_61 = 29; (l_61 != (-28)); l_61--)
        {
            union U0 *l_173 = &g_28;
            int *l_174 = &g_92;
            (*l_174) |= func_52(((((safe_mul_func_uint8_t_u_u(g_9, func_52(&g_28, (safe_lshift_func_int8_t_s_s(g_2[2][2], l_61))))) < l_159) == (((l_171 , g_172) != (void*)0) | g_2[2][2])) , l_173), g_131);
        }
        for (g_28.f1 = 4; (g_28.f1 < (-21)); g_28.f1 = safe_sub_func_uint32_t_u_u(g_28.f1, 5))
        {
            unsigned char l_179 = 1UL;
            int l_180[7];
            union U0 *l_192 = &g_28;
            int l_194 = 0x12535F52L;
            int l_202 = (-4L);
            int l_206[2][10][2] = {{{(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}}, {{(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}, {(-7L), 0x1F532560L}}};
            int l_248[4] = {0x25887073L, (-4L), 0x25887073L, (-4L)};
            int *l_291 = &l_194;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_180[i] = (-7L);
            for (l_159 = 0; (l_159 >= (-26)); l_159--)
            {
                unsigned char l_183 = 251UL;
                int l_203 = 0xC94203A4L;
                int l_204 = (-1L);
                unsigned short l_214 = 9UL;
                union U0 *l_237[5][4] = {{&g_28, (void*)0, &l_181, &l_181}, {&g_28, (void*)0, &l_181, &l_181}, {&g_28, (void*)0, &l_181, &l_181}, {&g_28, (void*)0, &l_181, &l_181}, {&g_28, (void*)0, &l_181, &l_181}};
                int l_256 = 0x8AD9A388L;
                int l_258 = 0x7B300B88L;
                int i, j;
                if (((!(g_28.f3 == l_179)) == l_180[6]))
                {
                    unsigned short l_182[3][3][2] = {{{1UL, 65530UL}, {1UL, 65530UL}, {1UL, 65530UL}}, {{1UL, 65530UL}, {1UL, 65530UL}, {1UL, 65530UL}}, {{1UL, 65530UL}, {1UL, 65530UL}, {1UL, 65530UL}}};
                    union U0 **l_184[9] = {&l_164, &l_164, &l_164, &l_164, &l_164, &l_164, &l_164, &l_164, &l_164};
                    int *l_185 = &g_70;
                    int i, j, k;
                    (*l_185) ^= ((0x4144L | (((g_28.f4 ^ 0x855CL) , l_181) , l_159)) == g_95);
                }
                else
                {
                    union U0 *l_193 = &g_28;
                    int l_196[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_196[i] = 0xB025A470L;
                    for (l_171 = 0; (l_171 >= 2); l_171 = safe_add_func_uint8_t_u_u(l_171, 6))
                    {
                        int *l_188 = &g_70;
                        (*l_188) |= g_9;
                        (*l_188) = l_183;
                    }
                    for (g_124 = 0; (g_124 <= 6); g_124 += 1)
                    {
                        return l_159;
                    }
                    for (g_124 = 14; (g_124 >= 14); g_124++)
                    {
                        unsigned long long l_191 = 0UL;
                        if (l_191)
                            break;
                        return g_106;
                    }
                    if (l_180[6])
                    {
                        int *l_195 = (void*)0;
                        int *l_197 = &g_70;
                        int *l_198 = (void*)0;
                        int *l_199 = &l_196[0];
                        int *l_200[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_200[i] = &g_70;
                        g_208++;
                        l_202 &= ((void*)0 == &p_50);
                        if (l_194)
                            continue;
                    }
                    else
                    {
                        int *l_211 = &l_196[2];
                        int *l_212 = (void*)0;
                        int *l_213[9];
                        int **l_218 = &g_145;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_213[i] = &l_196[0];
                        ++l_214;
                        if (g_95)
                            continue;
                        (*l_218) = l_217;

                        ;
                    }
                }
                for (g_208 = 0; (g_208 == 19); g_208 = safe_add_func_uint32_t_u_u(g_208, 3))
                {
                    unsigned char l_224 = 0xACL;
                    union U0 l_227 = {18446744073709551608UL};
                    short l_236[8][9][3] = {{{0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}}, {{0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}}, {{0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}}, {{0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}}, {{0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}}, {{0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}}, {{0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}}, {{0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}, {0xE522L, 0x5D02L, 0x9AA8L}}};
                    int *l_238 = &l_201;
                    int l_257 = (-10L);
                    int l_259 = 1L;
                    int l_260 = 3L;
                    int *l_276 = (void*)0;
                    int *l_277 = &l_259;
                    int i, j, k;
                    for (l_204 = 0; (l_204 == 0); l_204++)
                    {
                        short l_223 = 1L;
                        l_61 = (+0xFCDF06EDL);
                        l_224++;
                    }
                    p_50 = p_50;
                    if ((l_227 , l_183))
                    {
                        int *l_239 = &l_227.f1;
                        int *l_240 = &l_61;
                        int *l_241 = (void*)0;
                        int *l_242 = &l_204;
                        int l_243 = (-7L);
                        int *l_244 = &l_202;
                        int *l_245 = &g_70;
                        int *l_246[9][1][4] = {{{&g_70, &l_204, (void*)0, &l_204}}, {{&g_70, &l_204, (void*)0, &l_204}}, {{&g_70, &l_204, (void*)0, &l_204}}, {{&g_70, &l_204, (void*)0, &l_204}}, {{&g_70, &l_204, (void*)0, &l_204}}, {{&g_70, &l_204, (void*)0, &l_204}}, {{&g_70, &l_204, (void*)0, &l_204}}, {{&g_70, &l_204, (void*)0, &l_204}}, {{&g_70, &l_204, (void*)0, &l_204}}};
                        int i, j, k;
                        l_238 = (l_180[6] , p_50);

                        ;
                        --g_249;
                        (*l_239) = l_183;

                                            }
                    else
                    {
                        int *l_252 = &l_248[0];
                        int *l_253 = &l_204;
                        int *l_254 = &l_248[2];
                        int *l_255[9];
                        union U0 *l_271 = &g_28;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_255[i] = &l_203;
                        g_262[7][5]++;
                        --g_266[4];
                        (*l_254) = (((safe_rshift_func_int8_t_s_u(g_207[3][1], 0)) | (*l_238)) , ((l_271 == l_237[1][2]) < (((safe_lshift_func_uint8_t_u_s(((g_28 , (g_70 && (*l_252))) , (p_50 != l_255[7])), 7)) >= g_266[4]) <= 0x8AL)));
                        (*l_252) = (safe_lshift_func_uint8_t_u_u((l_201 >= l_258), 7));
                    }

                                        ;
                    (*l_277) |= (&l_181 != (void*)0);
                }
            }
            for (l_61 = 6; (l_61 >= 2); l_61 -= 1)
            {
                int *l_278 = &l_261;
                int i;
                (*l_278) = g_266[l_61];
            }
            (*l_291) = (((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0x8CF426D5L, l_201)), ((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_206[0][9][1], 0xF9L)), (safe_rshift_func_uint16_t_u_u((p_50 != (l_201 , &g_9)), g_28.f3)))) , (-1L)))), g_262[6][6])) > g_28.f3) == g_208);
        }


    }
    else
    {
        union U0 *l_296 = &g_28;
        int l_297 = 0xAEBAF2F5L;
        int l_315 = 0L;
        int l_316[4];
        int l_385 = (-4L);
        unsigned l_468[10] = {0xAEC44734L, 0xAEC44734L, 0UL, 0xAEC44734L, 0xAEC44734L, 0UL, 0xAEC44734L, 0xAEC44734L, 0UL, 0xAEC44734L};
        unsigned char l_534 = 0UL;
        char l_542 = 3L;
        unsigned short l_553[1];
        int i;
        for (i = 0; i < 4; i++)
            l_316[i] = 4L;
        for (i = 0; i < 1; i++)
            l_553[i] = 0xB13DL;
        l_297 = (((l_261 < (l_201 < ((safe_lshift_func_int16_t_s_s((l_68 == l_296), ((g_249 >= (g_124 & l_297)) == l_61))) <= (safe_mul_func_int8_t_s_s(l_297, l_297))))) || 0xB758L) != g_131);
        l_159 = (l_297 ^ (safe_rshift_func_int16_t_s_u((((safe_mul_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_308 == (void*)0), (l_297 , ((func_52(l_296, l_297) , l_159) | ((safe_lshift_func_uint16_t_u_s(l_61, l_297)) == g_2[2][2]))))), l_297)) | g_92) <= 0x95F81C92L), 0xBFL)) , l_61) == l_61), 11)));
        if (l_297)
        {
            unsigned long long l_317 = 0x0F022DD66434FF4CLL;
            union U0 l_320 = {0xB03EBF2803A47ED4LL};
            unsigned l_322 = 0xFA88EC0DL;
            if (g_28.f1)
            {
                int *l_311 = &l_201;
                int *l_312 = &l_297;
                int *l_313 = (void*)0;
                int *l_314[5] = {&g_70, &g_92, &g_70, &g_92, &g_70};
                union U0 *l_335 = &l_320;
                int i;
                --l_317;
                if ((l_320 , (+(l_322 > (safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s((-1L), g_266[4]))))))))
                {
                    unsigned long long l_326 = 2UL;
                    int **l_327 = &l_311;
                    (*l_327) = (l_326 , &g_9);

                    ;
                    (*l_327) = &l_316[1];

                    ;
                    if ((g_262[8][6] ^ (safe_sub_func_int16_t_s_s(g_28.f4, ((safe_lshift_func_uint8_t_u_u(0xAEL, 1)) && l_159)))))
                    {
                        (*l_327) = l_314[3];

                        ;
                        return g_262[2][1];
                    }
                    else
                    {
                        short l_334 = 0x5ECDL;
                        (*l_327) = &g_92;

                        ;
                        (*l_312) = ((l_320.f2 < (safe_mul_func_uint16_t_u_u(l_334, (((l_308 != l_308) , l_335) != (((**l_327) == ((safe_rshift_func_int16_t_s_u(func_52(l_335, g_92), 0)) >= g_262[5][4])) , &g_28))))) | l_334);
                    }

                    ;
                    for (l_320.f2 = 0; (l_320.f2 <= (-22)); --l_320.f2)
                    {
                        long long l_340[5][6][2] = {{{0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}}, {{0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}}, {{0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}}, {{0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}}, {{0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}, {0xF40B4E1BB27FBF08LL, (-8L)}}};
                        union U0 *l_353 = &g_28;
                        int i, j, k;
                        if (l_340[4][4][0])
                            break;
                        (**l_327) = ((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(g_28.f1, (l_320 , ((safe_sub_func_int16_t_s_s(l_322, (((safe_rshift_func_uint16_t_u_s(g_106, l_317)) == 9L) <= 0x2DB1C902E6C943C8LL))) > (**l_327))))) , (*l_311)), l_201)) >= (**l_327));
                    }

                                    }
                else
                {
                    for (g_28.f4 = 0; (g_28.f4 < 22); g_28.f4++)
                    {
                        return g_28.f1;
                    }
                }

                ;
                                return l_201;
            }
            else
            {
                int l_358 = 1L;
                int **l_363 = &g_145;
                unsigned l_364 = 0x087A8E73L;
                (*l_363) = ((g_106 , ((((safe_mul_func_int16_t_s_s(((l_358 , l_159) ^ ((+l_358) != (&p_50 == (void*)0))), l_358)) < (l_358 != ((safe_mul_func_uint8_t_u_u((l_315 <= l_61), 0x3EL)) >= 0x485C10DBL))) >= g_106) > l_159)) , &g_92);

                ;
                return l_364;
            }
        }
        else
        {
            long long l_376 = 0L;
            union U0 *l_389 = (void*)0;
            int l_408 = (-1L);
            int l_415 = (-1L);
            int *l_456 = &l_316[2];
            int *l_526 = &l_201;
            int *l_527 = &l_297;
            int *l_528[10][6] = {{&g_9, &g_9, &g_28.f1, &l_316[2], &l_315, &l_415}, {&g_9, &g_9, &g_28.f1, &l_316[2], &l_315, &l_415}, {&g_9, &g_9, &g_28.f1, &l_316[2], &l_315, &l_415}, {&g_9, &g_9, &g_28.f1, &l_316[2], &l_315, &l_415}, {&g_9, &g_9, &g_28.f1, &l_316[2], &l_315, &l_415}, {&g_9, &g_9, &g_28.f1, &l_316[2], &l_315, &l_415}, {&g_9, &g_9, &g_28.f1, &l_316[2], &l_315, &l_415}, {&g_9, &g_9, &g_28.f1, &l_316[2], &l_315, &l_415}, {&g_9, &g_9, &g_28.f1, &l_316[2], &l_315, &l_415}, {&g_9, &g_9, &g_28.f1, &l_316[2], &l_315, &l_415}};
            int i, j;
            if (l_297)
            {
                int l_369 = (-5L);
                int *l_377 = (void*)0;
                int *l_378 = &g_92;
                union U0 *l_388 = (void*)0;
                (*l_378) = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_369, 253UL)), (7UL < (safe_sub_func_int16_t_s_s(l_316[2], (safe_lshift_func_uint8_t_u_s((l_159 || g_95), ((safe_rshift_func_int16_t_s_u(l_369, (func_52(l_296, l_376) , l_201))) , l_159))))))));
                (*l_378) = (safe_mod_func_int16_t_s_s((0x82L ^ (safe_mod_func_int8_t_s_s((l_376 | l_376), 255UL))), ((+l_376) ^ 0L)));
                return g_207[3][1];
            }
            else
            {
                unsigned long long l_392 = 0x08A9933C3B594DDFLL;
                int l_410 = (-5L);
                int l_414 = (-10L);
                int l_417 = 0x9EF88D4BL;
                for (g_28.f0 = 0; (g_28.f0 <= 9); g_28.f0 += 1)
                {
                    int *l_393 = &g_92;
                    int l_416 = 0x97BC2EB3L;
                    (*l_393) = ((safe_add_func_int64_t_s_s(g_205, g_266[4])) == l_392);
                    if ((((safe_lshift_func_int16_t_s_s(8L, 10)) , (*l_393)) ^ (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(1UL, ((((void*)0 != &l_315) && g_28.f0) < ((g_131 & ((void*)0 == (*l_308))) | 0x65A2ABE865AEAE53LL)))), l_376))))
                    {
                        unsigned char l_400[8][1] = {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}};
                        int i, j;
                        p_50 = p_50;
                        ++l_400[4][0];
                    }
                    else
                    {
                        int *l_403 = (void*)0;
                        int *l_404 = &l_261;
                        int *l_405 = (void*)0;
                        int *l_406 = &l_201;
                        int *l_407 = (void*)0;
                        int *l_409 = (void*)0;
                        int *l_411 = (void*)0;
                        int *l_412 = &l_315;
                        int *l_413[6] = {&l_159, &l_159, &l_159, &l_159, &l_159, &l_159};
                        int i;
                        --g_420;
                    }
                }

                                for (g_106 = 0; (g_106 != 9); g_106++)
                {
                    return g_418;
                }
                l_414 ^= (safe_sub_func_int8_t_s_s(((l_297 > (safe_rshift_func_uint16_t_u_s(((g_262[2][3] , (((safe_mul_func_uint16_t_u_u(65535UL, (g_106 | (((func_52(l_296, l_415) || (((l_417 ^ (safe_lshift_func_int16_t_s_u(0x6267L, 4))) , l_261) , l_408)) < l_392) | 0x2250C0B7L)))) != l_261) ^ g_9)) && l_159), 3))) == l_417), g_70));

                            }
            for (g_106 = 0; g_106 < 4; g_106 += 1)
            {
                l_316[g_106] = 9L;
            }
            for (g_419 = 0; (g_419 > 16); g_419++)
            {
                union U0 *l_435[1];
                int l_436 = (-1L);
                int i;
                for (i = 0; i < 1; i++)
                    l_435[i] = &g_28;
            }
            g_531--;
        }
        if ((249UL < (l_534 , 0xA6L)))
        {
            unsigned char l_539 = 0xEEL;
            int *l_550 = &g_92;
            l_297 |= ((safe_mod_func_int16_t_s_s(1L, (safe_add_func_uint8_t_u_u(l_539, (safe_lshift_func_int16_t_s_s(l_542, 10)))))) | (safe_lshift_func_int8_t_s_s(0xA8L, func_52((((*l_520) <= (((*l_520) < ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(g_418, l_549)) | l_316[0]), l_539)) , l_534)) || 0xC1340EF2L)) , (void*)0), (*l_520)))));
            g_28.f1 = l_539;

                        (*l_550) = g_28.f1;
        }
        else
        {
            int *l_551[6] = {&l_385, &l_201, &l_385, &l_201, &l_385, &l_201};
            int i;
            l_529[6] = 0x89A51E85L;
            l_553[0]--;
            l_297 = func_52(&g_28, (((((*l_520) | 18446744073709551615UL) || g_511) , 7L) == ((*l_520) != (safe_add_func_int32_t_s_s(0xEB944CFAL, g_205)))));
            g_70 &= g_558;
        }

            }


    return (*l_520);
}







static int func_52(union U0 * p_53, short p_54)
{
    int l_148 = 0xBA839ADFL;
    int l_151[3];
    int l_154 = 0xBAB51E18L;
    int i;
    for (i = 0; i < 3; i++)
        l_151[i] = 0L;
    for (g_28.f4 = 0; (g_28.f4 >= 20); ++g_28.f4)
    {
        int *l_149 = &g_92;
        int *l_150 = (void*)0;
        int *l_152 = (void*)0;
        int *l_153[8] = {&g_70, &l_151[0], &g_70, &l_151[0], &g_70, &l_151[0], &g_70, &l_151[0]};
        unsigned l_155 = 1UL;
        int **l_158 = &l_153[3];
        int i;
        if (l_148)
            break;
        ++l_155;
        (*l_158) = &g_70;
    }
    return l_151[2];
}







static unsigned short func_64(short p_65, union U0 * p_66, union U0 * p_67)
{
    int *l_69[8][6] = {{&g_9, &g_9, &g_9, &g_70, &g_70, &g_28.f1}, {&g_9, &g_9, &g_9, &g_70, &g_70, &g_28.f1}, {&g_9, &g_9, &g_9, &g_70, &g_70, &g_28.f1}, {&g_9, &g_9, &g_9, &g_70, &g_70, &g_28.f1}, {&g_9, &g_9, &g_9, &g_70, &g_70, &g_28.f1}, {&g_9, &g_9, &g_9, &g_70, &g_70, &g_28.f1}, {&g_9, &g_9, &g_9, &g_70, &g_70, &g_28.f1}, {&g_9, &g_9, &g_9, &g_70, &g_70, &g_28.f1}};
    char l_71 = 0L;
    union U0 *l_102[3];
    union U0 **l_101 = &l_102[1];
    union U0 ***l_100[5][4][4] = {{{&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}}, {{&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}}, {{&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}}, {{&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}}, {{&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}, {&l_101, &l_101, &l_101, &l_101}}};
    int l_113 = 1L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_102[i] = &g_28;
    l_71 = g_28.f3;
    for (p_65 = 24; (p_65 == 22); p_65 = safe_sub_func_int16_t_s_s(p_65, 1))
    {
        union U0 *l_85 = &g_28;
        union U0 **l_84 = &l_85;
        union U0 ***l_83[5][2] = {{&l_84, (void*)0}, {&l_84, (void*)0}, {&l_84, (void*)0}, {&l_84, (void*)0}, {&l_84, (void*)0}};
        int l_88[10][10] = {{1L, 6L, 6L, 0L, 0xC9657A47L, 0x8247AD07L, 6L, 0xDDDD895AL, 6L, (-6L)}, {1L, 6L, 6L, 0L, 0xC9657A47L, 0x8247AD07L, 6L, 0xDDDD895AL, 6L, (-6L)}, {1L, 6L, 6L, 0L, 0xC9657A47L, 0x8247AD07L, 6L, 0xDDDD895AL, 6L, (-6L)}, {1L, 6L, 6L, 0L, 0xC9657A47L, 0x8247AD07L, 6L, 0xDDDD895AL, 6L, (-6L)}, {1L, 6L, 6L, 0L, 0xC9657A47L, 0x8247AD07L, 6L, 0xDDDD895AL, 6L, (-6L)}, {1L, 6L, 6L, 0L, 0xC9657A47L, 0x8247AD07L, 6L, 0xDDDD895AL, 6L, (-6L)}, {1L, 6L, 6L, 0L, 0xC9657A47L, 0x8247AD07L, 6L, 0xDDDD895AL, 6L, (-6L)}, {1L, 6L, 6L, 0L, 0xC9657A47L, 0x8247AD07L, 6L, 0xDDDD895AL, 6L, (-6L)}, {1L, 6L, 6L, 0L, 0xC9657A47L, 0x8247AD07L, 6L, 0xDDDD895AL, 6L, (-6L)}, {1L, 6L, 6L, 0L, 0xC9657A47L, 0x8247AD07L, 6L, 0xDDDD895AL, 6L, (-6L)}};
        int i, j;
        for (g_70 = 0; (g_70 != (-21)); --g_70)
        {
            union U0 *l_78 = &g_28;
            union U0 **l_77 = &l_78;
            union U0 ***l_76 = &l_77;
            int l_89[8][5] = {{(-9L), 0L, 0x5CA1D1A2L, (-7L), 0x491A587DL}, {(-9L), 0L, 0x5CA1D1A2L, (-7L), 0x491A587DL}, {(-9L), 0L, 0x5CA1D1A2L, (-7L), 0x491A587DL}, {(-9L), 0L, 0x5CA1D1A2L, (-7L), 0x491A587DL}, {(-9L), 0L, 0x5CA1D1A2L, (-7L), 0x491A587DL}, {(-9L), 0L, 0x5CA1D1A2L, (-7L), 0x491A587DL}, {(-9L), 0L, 0x5CA1D1A2L, (-7L), 0x491A587DL}, {(-9L), 0L, 0x5CA1D1A2L, (-7L), 0x491A587DL}};
            int *l_118 = &l_88[1][4];
            int i, j;
            (*l_76) = &p_66;

            ;
            if ((safe_lshift_func_int16_t_s_u((p_65 > 5L), g_28.f2)))
            {
                unsigned l_103[8] = {3UL, 1UL, 3UL, 1UL, 3UL, 1UL, 3UL, 1UL};
                unsigned char l_114 = 0x27L;
                int l_129 = 0x4AD72E2DL;
                int l_130 = 0x28837D79L;
                int i;
                g_92 |= (safe_sub_func_uint32_t_u_u(((void*)0 == l_83[4][1]), ((safe_mul_func_int16_t_s_s(((l_88[1][4] >= l_89[2][3]) , (g_28.f0 , ((safe_add_func_int16_t_s_s(p_65, l_89[2][0])) , l_89[2][3]))), 0x712AL)) == p_65)));
                l_88[7][2] = g_28.f0;
                if ((((!(g_28.f2 , (safe_sub_func_uint8_t_u_u(l_89[2][3], (g_28.f1 == ((g_28.f3 | g_95) == ((~g_28.f3) , ((~(safe_mul_func_uint16_t_u_u(((((g_28.f1 , l_88[3][1]) == (safe_lshift_func_uint8_t_u_s(254UL, 3))) , 0xAC55L) ^ g_28.f0), p_65))) || g_28.f4)))))))) , l_100[3][1][2]) == &l_77))
                {
                    return p_65;
                }
                else
                {
                    unsigned char l_121 = 0UL;
                    int l_125 = (-1L);
                    int l_126[7] = {0x08D7298EL, 0x08D7298EL, 0L, 0x08D7298EL, 0x08D7298EL, 0L, 0x08D7298EL};
                    int i;
                    l_103[6] = g_28.f1;
                    for (l_71 = (-2); (l_71 == 5); l_71 = safe_add_func_uint16_t_u_u(l_71, 1))
                    {
                        unsigned short l_109 = 1UL;
                        (**l_76) = p_67;
                        --g_106;
                        l_109 &= ((void*)0 == p_67);
                        g_92 &= 1L;
                    }
                    if ((safe_add_func_uint16_t_u_u(g_9, p_65)))
                    {
                        char l_112 = 0xE4L;
                        if (g_28.f2)
                            break;
                        l_112 ^= (g_28.f2 & p_65);
                        l_89[0][0] &= g_9;
                        l_113 ^= (p_65 | p_65);
                    }
                    else
                    {
                        int **l_117[3][10][4] = {{{&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}}, {{&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}}, {{&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}, {&l_69[0][0], &l_69[0][0], &l_69[0][0], &l_69[0][0]}}};
                        int i, j, k;
                        l_114--;
                        l_118 = &l_88[8][2];
                    }
                    for (g_95 = 25; (g_95 == (-6)); --g_95)
                    {
                        int l_127 = (-10L);
                        long long l_128 = 0xF89DE1BE5EA244EFLL;
                        l_121++;
                        --g_131;
                        (*l_118) |= (safe_lshift_func_int16_t_s_u((l_125 || (l_121 >= p_65)), 6));
                    }
                }
                return g_9;
            }
            else
            {
                int *l_136 = (void*)0;
                int **l_137 = &l_69[0][0];
                (*l_137) = l_136;
                (*l_118) = (l_88[8][7] ^ ((safe_add_func_int16_t_s_s(p_65, (((p_65 != (~(*l_118))) >= (((((void*)0 == &l_136) & (-1L)) == (p_65 >= p_65)) | (*l_118))) > 4L))) || (-8L)));
            }
            for (g_124 = 23; (g_124 <= 18); g_124 = safe_sub_func_int8_t_s_s(g_124, 4))
            {
                unsigned short l_142[2][8] = {{0x0BAFL, 6UL, 0x0BAFL, 6UL, 0x0BAFL, 6UL, 0x0BAFL, 6UL}, {0x0BAFL, 6UL, 0x0BAFL, 6UL, 0x0BAFL, 6UL, 0x0BAFL, 6UL}};
                int i, j;
                --l_142[0][3];
                (*l_118) |= 0x5526E25BL;
                (*l_118) = (((g_28.f1 <= p_65) != p_65) > 0x71L);
            }
        }
        g_145 = &l_88[7][6];

        ;
    }


    return g_124;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_28.f2, "g_28.f2", print_hash_value);
    transparent_crc(g_28.f3, "g_28.f3", print_hash_value);
    transparent_crc(g_28.f4, "g_28.f4", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_207[i][j], "g_207[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_262[i][j], "g_262[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_266[i], "g_266[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_563[i], "g_563[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_631[i][j][k], "g_631[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_699, "g_699", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_717[i], "g_717[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_718[i], "g_718[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_841.f2, "g_841.f2", print_hash_value);
    transparent_crc(g_843, "g_843", print_hash_value);
    transparent_crc(g_844, "g_844", print_hash_value);
    transparent_crc(g_863, "g_863", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_923[i], "g_923[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_924[i][j][k], "g_924[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_926, "g_926", print_hash_value);
    transparent_crc(g_983, "g_983", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_995[i], "g_995[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1003, "g_1003", print_hash_value);
    transparent_crc(g_1036, "g_1036", print_hash_value);
    transparent_crc(g_1038, "g_1038", print_hash_value);
    transparent_crc(g_1094, "g_1094", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
