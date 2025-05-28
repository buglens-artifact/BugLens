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



static unsigned g_13 = 0xE673292CL;
static int g_15 = 7L;
static int g_19 = 0L;
static int *g_18 = &g_19;
static unsigned g_151 = 0x9813DA77L;
static char g_155 = 0x2DL;
static char g_176 = 9L;
static unsigned char g_178 = 0x3DL;
static short g_183 = 0xF512L;
static short g_207 = 0L;
static unsigned long long g_224 = 2UL;
static unsigned short g_235 = 0x7B85L;
static char g_238 = 0x49L;
static long long g_239 = 0xFF5949B8DC114A32LL;
static char g_259 = 0xD5L;
static unsigned g_261 = 1UL;
static unsigned g_299 = 0xCA3D7B8FL;
static int g_306 = 0xD400EADAL;
static char g_319 = 0L;
static long long g_330 = 0x57317A473E46763BLL;
static unsigned short g_342 = 65535UL;
static int *g_351 = &g_19;
static int **g_350 = &g_351;
static unsigned char g_420 = 3UL;
static unsigned char g_425 = 2UL;
static short * const g_484 = &g_207;
static short * const *g_483 = &g_484;
static int g_497 = 8L;
static long long g_540 = 1L;
static int g_579 = 0x56B74F28L;
static long long *g_659 = &g_540;
static long long **g_658 = &g_659;
static int g_673 = 0xA9F39851L;
static unsigned g_694 = 0x48C57555L;
static int g_763 = 0xBCBA9D04L;
static unsigned long long g_783 = 5UL;
static const long long g_818 = 1L;
static short g_869 = 6L;
static char g_873 = 1L;
static unsigned char g_911 = 0xD3L;
static int *g_920 = &g_19;
static unsigned g_976 = 0x22D36DB7L;
static long long g_1046 = 0x21BFD0A8F54A145DLL;
static int g_1050 = 0x70FE4D39L;
static unsigned g_1065 = 0x1BEEE1C6L;
static const unsigned *g_1076 = (void*)0;
static const unsigned **g_1075 = &g_1076;
static int g_1082 = 0x6F9ECA9DL;
static char * const g_1103 = &g_319;
static char * const *g_1102 = &g_1103;
static unsigned char g_1131 = 0UL;
static unsigned long long g_1190 = 0x5211776618A7FCC8LL;
static short g_1229 = 0x6DBEL;
static char g_1242 = 0x15L;
static unsigned short g_1253 = 0xC05CL;
static unsigned short g_1270 = 0xB086L;
static unsigned ****g_1435 = (void*)0;
static int g_1508 = 8L;
static unsigned short g_1517 = 0xF7ACL;
static unsigned long long *g_1624 = (void*)0;
static unsigned long long **g_1623 = &g_1624;
static short g_1695 = (-10L);
static unsigned short g_1759 = 0xB594L;
static unsigned g_1785 = 0x9C91DE8FL;
static unsigned short g_1809 = 0xA381L;
static int *g_1852 = (void*)0;
static int **g_1860 = &g_1852;
static const int g_1877 = 0x4A8588B7L;
static unsigned g_1931 = 0x773D2615L;



static unsigned short func_1(void);
static int * func_2(unsigned p_3, unsigned short p_4, int * p_5);
static int * func_6(unsigned short p_7, short p_8, unsigned short p_9, int p_10, unsigned p_11);
static short func_156(int ** p_157);
static int ** func_158(long long p_159);
static int func_160(unsigned p_161, const unsigned short p_162, unsigned short p_163);
static unsigned short func_165(unsigned long long p_166, unsigned char p_167, int * const p_168, char p_169);
static int * func_184(unsigned short p_185, char * p_186, unsigned short p_187);
static char * func_188(unsigned char p_189, int * p_190, int ** p_191);
static int func_193(const unsigned p_194, int p_195, char p_196);
static unsigned short func_1(void)
{
    unsigned l_12 = 0x3F1A0734L;
    int *l_17 = &g_15;
    int **l_16 = &l_17;
    const char **l_1935 = (void*)0;
    const char ***l_1934 = &l_1935;
    (*g_1860) = func_2((0x95L & (((*l_16) = func_6(l_12, l_12, g_13, l_12, l_12)) != g_18)), ((0UL ^ g_13) == g_13), &g_19);



    ;

    ;
    (*l_17) = (**l_16);
    (**l_16) = ((void*)0 == l_1934);
    return (**l_16);
}







static int * func_2(unsigned p_3, unsigned short p_4, int * p_5)
{
    int *l_20 = (void*)0;
    int *l_21 = (void*)0;
    int *l_22 = (void*)0;
    int *l_23 = (void*)0;
    int *l_24 = &g_19;
    int *l_25 = &g_19;
    int l_26 = 1L;
    int *l_27 = (void*)0;
    int *l_28 = (void*)0;
    int *l_29 = &l_26;
    int *l_30 = &l_26;
    int *l_31 = &g_19;
    int *l_32 = &g_15;
    int l_33 = 0x3F2F34E4L;
    int *l_34 = &l_33;
    int *l_35 = &l_26;
    int l_36 = 5L;
    int *l_37 = &g_19;
    int *l_38 = &g_15;
    int *l_39 = (void*)0;
    int *l_40 = &g_15;
    int *l_41 = &l_26;
    int *l_42 = &g_19;
    int *l_43 = &g_15;
    int l_44 = 1L;
    int *l_45 = (void*)0;
    int *l_46 = (void*)0;
    int *l_47 = &l_26;
    int *l_48 = &g_19;
    int *l_49 = &g_19;
    int *l_50 = &g_15;
    int *l_51 = &l_33;
    int *l_52 = &l_33;
    int *l_53 = &g_15;
    int *l_54 = &g_19;
    int l_55 = 0L;
    int *l_56 = &l_36;
    int *l_57 = &l_55;
    int *l_58 = (void*)0;
    int *l_59 = (void*)0;
    int *l_60 = &g_19;
    int *l_61 = (void*)0;
    int *l_62 = &g_15;
    int *l_63 = &l_36;
    int *l_64 = &l_26;
    int *l_65 = &l_55;
    int l_66 = 0xF90B8A44L;
    int *l_67 = &g_15;
    int *l_68 = &l_26;
    int *l_69 = &l_26;
    int *l_70 = &l_33;
    int *l_71 = &g_15;
    int *l_72 = &l_44;
    int *l_73 = &l_66;
    int *l_74 = &g_19;
    int *l_75 = &l_44;
    int *l_76 = &l_26;
    int *l_77 = (void*)0;
    int *l_78 = &l_66;
    int *l_79 = &l_36;
    int *l_80 = &l_44;
    int *l_81 = &g_19;
    int *l_82 = &l_26;
    int *l_83 = &l_36;
    int *l_84 = (void*)0;
    int l_85 = (-1L);
    int *l_86 = &l_55;
    int *l_87 = (void*)0;
    int *l_88 = &l_33;
    int *l_89 = &l_26;
    int *l_90 = &l_55;
    int *l_91 = (void*)0;
    int l_92 = 0xC990B51EL;
    int *l_93 = (void*)0;
    int *l_94 = &l_36;
    int *l_95 = &l_66;
    int *l_96 = &g_15;
    int *l_97 = (void*)0;
    int *l_98 = &l_66;
    int l_99 = 1L;
    int *l_100 = (void*)0;
    int l_101 = 1L;
    int *l_102 = &g_19;
    int *l_103 = (void*)0;
    int *l_104 = &l_55;
    int *l_105 = &l_44;
    int l_106 = 1L;
    int l_107 = 0L;
    int l_108 = 1L;
    int *l_109 = &l_108;
    int *l_110 = &l_108;
    int *l_111 = &l_55;
    int *l_112 = &l_99;
    int *l_113 = (void*)0;
    int *l_114 = &l_108;
    int *l_115 = &l_106;
    int *l_116 = &l_92;
    int *l_117 = &l_99;
    int *l_118 = &l_85;
    int *l_119 = &l_101;
    int *l_120 = &l_85;
    int *l_121 = &l_85;
    int *l_122 = &l_36;
    int *l_123 = &l_55;
    int l_124 = (-1L);
    int *l_125 = (void*)0;
    int *l_126 = &l_92;
    int *l_127 = (void*)0;
    int *l_128 = &l_55;
    int l_129 = 0L;
    int *l_130 = &g_19;
    int *l_131 = &l_55;
    int l_132 = 0x7FA6FBAAL;
    int *l_133 = &g_15;
    int *l_134 = &l_99;
    int l_135 = 2L;
    int *l_136 = &g_19;
    int *l_137 = &l_107;
    int *l_138 = &l_66;
    int *l_139 = (void*)0;
    int *l_140 = (void*)0;
    int *l_141 = &l_99;
    int *l_142 = (void*)0;
    int *l_143 = &l_124;
    int *l_144 = &l_66;
    int l_145 = 0xB2559639L;
    int *l_146 = (void*)0;
    int *l_147 = &l_135;
    int *l_148 = (void*)0;
    int *l_149 = &l_101;
    int *l_150 = &l_36;
    char *l_154 = &g_155;
    unsigned short *l_1792 = &g_1253;
    unsigned *****l_1795 = &g_1435;
    unsigned ******l_1796 = &l_1795;
    const unsigned *****l_1797 = (void*)0;
    int **l_1798 = (void*)0;
    int **l_1799 = &l_42;
    short *l_1804 = &g_207;
    short **l_1803 = &l_1804;
    short ***l_1802 = &l_1803;
    unsigned char l_1819 = 254UL;
    int *l_1832 = &g_1508;
    unsigned char l_1841 = 3UL;
    ++g_151;
    (*l_89) |= (0xCCL > ((*l_154) = g_13));
    (*l_1799) = func_6(p_4, func_156(func_158(g_15)), ((*l_1792) = (safe_sub_func_uint16_t_u_u(g_1695, 0UL))), ((p_3 ^ p_4) | (safe_sub_func_int32_t_s_s(((((*l_1796) = l_1795) == l_1797) < (*l_137)), g_1229))), p_4);


    ;

    ;

    if ((*p_5))
    {
        char l_1810 = 0xC2L;
        int l_1811 = 1L;
        int l_1812 = 0x461D97D6L;
        (*l_52) |= (*p_5);
        (*l_1799) = &g_19;

        ;
    }
    else
    {
        unsigned *l_1817 = (void*)0;
        unsigned *l_1818 = &g_261;
        int l_1827 = 0x5960F66FL;
        int l_1828 = (-1L);
        unsigned *l_1829 = &g_261;
        long long l_1830 = 0xD4C5516617503BB8LL;
        char l_1847 = 1L;
        int l_1849 = (-1L);
        int l_1926 = 7L;
        short l_1927 = 0x3501L;
        int l_1928 = 0xE4CF00D5L;
        int l_1929 = (-1L);
        if ((safe_sub_func_int8_t_s_s((*g_1103), p_3)))
        {
            unsigned l_1831 = 0xDFA05600L;
            int *l_1878 = &l_99;
            int l_1902 = 1L;
            int l_1903 = 8L;
            (*l_1799) = func_6(p_4, ((((-1L) == (*p_5)) >= (((**g_658) = (!1L)) || (**g_658))) >= (*l_120)), g_235, l_1831, p_4);
            if (l_1831)
            {
                unsigned l_1842 = 0xFD9F2FA9L;
                unsigned char *l_1843 = &g_1131;
                int **l_1846 = &l_68;
                short *l_1848 = &g_1695;
                unsigned ***l_1865 = (void*)0;
                unsigned *** const *l_1864 = &l_1865;
                unsigned *l_1879 = &l_1842;
                unsigned char l_1901 = 0xF1L;
                l_1832 = &g_306;

                ;
                if (((safe_sub_func_uint64_t_u_u(p_4, p_4)) && ((safe_mod_func_int16_t_s_s((**g_483), (safe_sub_func_int32_t_s_s((((((*l_1848) = (safe_sub_func_uint8_t_u_u(3UL, p_3))) && g_299) > (**g_658)) || l_1849), (**l_1846))))) != (**g_658))))
                {
                    long long l_1861 = (-1L);
                    for (l_1842 = (-3); (l_1842 > 28); l_1842++)
                    {
                        return g_1852;


                    }
                    (*l_41) = (((((0xB07BL | ((*l_1792) = 65535UL)) <= ((*l_1848) = l_1847)) & (safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint8_t_u_u(g_235, ((((l_1827 = g_259) & (safe_sub_func_int32_t_s_s(((g_1046 > p_4) < p_3), l_1861))) && 0x67L) | p_3))))) != 1UL), (*g_484)))) >= 18446744073709551612UL) >= (-1L));
                    for (g_497 = 0; (g_497 > 10); ++g_497)
                    {
                        return p_5;


                    }
                    (*l_47) &= (g_1435 == l_1864);
                }
                else
                {
                    (*l_123) ^= (-1L);
                    (*l_116) |= ((**l_1846) <= ((*p_5) == ((*l_88) |= (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((g_1242 & (safe_add_func_uint32_t_u_u((((safe_sub_func_uint64_t_u_u((((**g_1102) != ((((*l_1848) &= (0L <= 1UL)) != 65530UL) || (**g_1102))) | (safe_add_func_int32_t_s_s((*p_5), g_1877))), p_3)) <= (-6L)) & g_783), (*p_5)))))), 9)))));
                    (*l_1846) = ((*l_1799) = (void*)0);

                    ;
                    ;
                    (*l_1799) = l_1878;

                    ;
                }

                ;
                ;
                (*l_1799) = (*g_1860);

                ;
                for (l_55 = 0; (l_55 <= (-14)); l_55--)
                {
                    unsigned l_1900 = 18446744073709551610UL;
                    for (g_420 = 0; (g_420 > 15); g_420++)
                    {
                        int **l_1894 = &l_112;
                        unsigned long long *l_1899 = &g_1190;
                        (*l_37) ^= (g_783 >= p_4);
                    }
                    (*l_98) ^= 0x4AF81FE6L;
                    if ((*p_5))
                        continue;
                }
            }
            else
            {
                unsigned l_1904 = 0UL;
                l_1904++;
            }

            ;
            ;
            ;
        }
        else
        {
            unsigned short l_1925 = 0x5E4AL;
            int l_1930 = 0L;
            (*g_1860) = p_5;

            ;
            for (g_306 = 0; (g_306 > 25); ++g_306)
            {
                short l_1924 = 0xCABBL;
            }
            g_1931++;
        }

        ;
        ;
        ;
        ;
    }

    ;
    ;
    ;
    ;
    return p_5;


}







static int * func_6(unsigned short p_7, short p_8, unsigned short p_9, int p_10, unsigned p_11)
{
    int *l_14 = &g_15;
    (*l_14) = (!p_11);
    return l_14;


}







static short func_156(int ** p_157)
{
    int l_1405 = 0x49394424L;
    long long **l_1416 = &g_659;
    unsigned ***l_1533 = (void*)0;
    unsigned short l_1612 = 3UL;
    unsigned long long *l_1622 = &g_783;
    unsigned long long **l_1621 = &l_1622;
    int l_1748 = 0xE443998FL;
    short *l_1775 = &g_1229;
    short **l_1774 = &l_1775;
    if ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(func_160(l_1405, ((safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(l_1405, (safe_rshift_func_int8_t_s_s(0L, ((*g_484) <= (((**g_483) > ((void*)0 == l_1416)) == (func_160(g_818, l_1405, l_1405) != l_1405))))))), l_1405)) || l_1405), l_1405)) == l_1405), l_1405)) >= 0xD473D9D4L), l_1405), l_1405)), g_540)))
    {
        char *l_1417 = (void*)0;
        int l_1422 = (-1L);
        unsigned short *l_1427 = (void*)0;
        unsigned short *l_1428 = &g_342;
        int **l_1429 = &g_351;
        unsigned ***l_1432 = (void*)0;
        unsigned ****l_1431 = &l_1432;
        unsigned *****l_1430 = &l_1431;
        int l_1477 = 6L;
        int l_1479 = (-1L);
        (*g_920) = (-1L);
        (*l_1429) = &l_1405;

        ;
        if (((*g_920) = (((g_235 > (((g_342 = ((void*)0 == l_1430)) >= (safe_lshift_func_uint16_t_u_s(((*l_1429) == (*l_1429)), 5))) < 7L)) > l_1405) >= (((void*)0 != g_1435) != 18446744073709551611UL))))
        {
            char l_1439 = 0L;
            for (g_1190 = 11; (g_1190 >= 10); g_1190--)
            {
                unsigned short l_1438 = 65533UL;
                l_1405 = func_160(((l_1438 & ((void*)0 != &g_658)) || (!((*g_659) = (**g_658)))), g_13, l_1405);
                (**l_1429) |= l_1439;
                return l_1439;


            }
        }
        else
        {
            long long l_1443 = 0xA326AFEBC83BEB19LL;
            unsigned long long *l_1445 = &g_1190;
            int l_1484 = 0x92B9106CL;
            int l_1491 = 0x2D59E147L;
            unsigned *** const l_1532 = (void*)0;
            const int l_1539 = 0x6F766BDAL;
            int l_1596 = 0x607D8678L;
            unsigned *** const *l_1620 = (void*)0;
            char *l_1626 = &g_238;
            if ((safe_lshift_func_uint8_t_u_s((l_1428 != (void*)0), (**g_1102))))
            {
                int l_1442 = 0x608412F1L;
                const unsigned long long *l_1444 = &g_1190;
                unsigned long long **l_1446 = &l_1445;
                int l_1454 = 0xB4FD35ADL;
                int l_1466 = 6L;
                unsigned *l_1537 = &g_694;
                unsigned **l_1536 = &l_1537;
                unsigned ***l_1535 = &l_1536;
                int l_1625 = 0xB08307D1L;
                (*g_920) = (func_160(l_1442, ((0x2D686E01L || (**l_1429)) > l_1442), (l_1443 ^= l_1405)) == (l_1444 == ((*l_1446) = l_1445)));
                if ((*g_920))
                {
                    int *l_1447 = &g_15;
                    int *l_1448 = &g_306;
                    int *l_1449 = &g_579;
                    int *l_1450 = &g_306;
                    int *l_1451 = &g_1050;
                    int *l_1452 = &l_1405;
                    int *l_1453 = &g_15;
                    int *l_1455 = &l_1454;
                    int *l_1456 = (void*)0;
                    int *l_1457 = &g_19;
                    int *l_1458 = (void*)0;
                    int *l_1459 = &l_1454;
                    int l_1460 = 0x03920D9CL;
                    int *l_1461 = &g_579;
                    int *l_1462 = &g_19;
                    int *l_1463 = &l_1405;
                    int *l_1464 = &g_1050;
                    int *l_1465 = &l_1405;
                    int *l_1467 = (void*)0;
                    int *l_1468 = &g_15;
                    int *l_1469 = &l_1460;
                    int *l_1470 = &g_306;
                    int l_1471 = 0x778C3FE4L;
                    int *l_1472 = &l_1422;
                    int *l_1473 = (void*)0;
                    int *l_1474 = &l_1405;
                    int *l_1475 = &g_19;
                    int *l_1476 = &l_1422;
                    int *l_1478 = &l_1466;
                    int *l_1480 = &g_15;
                    int *l_1481 = &l_1466;
                    int *l_1482 = (void*)0;
                    int *l_1483 = &l_1479;
                    int *l_1485 = (void*)0;
                    int *l_1486 = &g_19;
                    int *l_1487 = &l_1479;
                    int *l_1488 = &g_306;
                    int *l_1489 = (void*)0;
                    int *l_1490 = (void*)0;
                    int *l_1492 = &l_1471;
                    int *l_1493 = &l_1484;
                    int *l_1494 = &l_1477;
                    int *l_1495 = &l_1405;
                    int *l_1496 = &g_19;
                    int *l_1497 = (void*)0;
                    int *l_1498 = &l_1484;
                    int *l_1499 = &l_1454;
                    int *l_1500 = &g_19;
                    int *l_1501 = &g_19;
                    int *l_1502 = &l_1484;
                    int *l_1503 = &l_1422;
                    int *l_1504 = &g_579;
                    int *l_1505 = (void*)0;
                    int *l_1506 = &g_579;
                    int *l_1507 = &l_1491;
                    int *l_1509 = (void*)0;
                    int *l_1510 = &l_1479;
                    int *l_1511 = &l_1422;
                    int *l_1512 = (void*)0;
                    int *l_1513 = &l_1479;
                    int *l_1514 = &l_1466;
                    int *l_1515 = (void*)0;
                    int *l_1516 = (void*)0;
                    g_1517++;
                    (*l_1511) = func_160((*l_1469), l_1466, l_1443);
                    g_920 = (*l_1429);

                    ;
                }
                else
                {
                    char l_1520 = (-1L);
                    unsigned char *l_1529 = &g_425;
                    int l_1534 = (-2L);
                    unsigned *l_1538 = (void*)0;
                    int l_1540 = 0xC0A8F63EL;
                    (*g_351) = ((l_1491 || func_160(g_579, ((**l_1429) | (*g_1103)), ((((**g_483) == (func_160((safe_sub_func_int64_t_s_s(((**l_1416) |= l_1520), (**l_1429))), l_1520, l_1405) >= (-1L))) == 0L) <= (**g_1102)))) <= (*g_484));
                    l_1540 |= (safe_mod_func_int8_t_s_s((l_1443 == ((safe_add_func_uint32_t_u_u(((void*)0 == l_1417), (l_1534 = (safe_rshift_func_uint8_t_u_s(((*l_1529)--), ((*g_1103) = (l_1532 == ((**l_1430) = l_1533)))))))) < (l_1520 < ((l_1405 == func_160((l_1484 ^= (l_1491 = func_160((((void*)0 == l_1535) | 65534UL), l_1443, l_1405))), l_1539, l_1405)) & l_1520)))), l_1520));
                    for (g_579 = 29; (g_579 <= (-27)); g_579 = safe_sub_func_uint32_t_u_u(g_579, 9))
                    {
                        int *l_1543 = (void*)0;
                        int *l_1544 = (void*)0;
                        int *l_1545 = &l_1422;
                        int *l_1546 = &l_1454;
                        int *l_1547 = &l_1479;
                        int *l_1548 = &l_1477;
                        int *l_1549 = &l_1466;
                        int *l_1550 = &l_1484;
                        int *l_1551 = (void*)0;
                        int *l_1552 = &l_1477;
                        int *l_1553 = &l_1405;
                        int *l_1554 = &l_1534;
                        int *l_1555 = (void*)0;
                        int *l_1556 = &l_1466;
                        int *l_1557 = &g_15;
                        int *l_1558 = &l_1534;
                        int l_1559 = 0x78D5EC4BL;
                        int *l_1560 = &g_15;
                        int *l_1561 = (void*)0;
                        int *l_1562 = (void*)0;
                        int *l_1563 = &l_1405;
                        int *l_1564 = (void*)0;
                        int *l_1565 = &l_1559;
                        int *l_1566 = &l_1477;
                        int *l_1567 = (void*)0;
                        int *l_1568 = &l_1422;
                        int *l_1569 = &g_15;
                        int *l_1570 = &l_1454;
                        int *l_1571 = (void*)0;
                        int *l_1572 = &g_15;
                        int *l_1573 = &l_1466;
                        int *l_1574 = &l_1491;
                        int *l_1575 = &g_306;
                        int *l_1576 = &l_1466;
                        int *l_1577 = &l_1479;
                        int *l_1578 = (void*)0;
                        int *l_1579 = &l_1491;
                        int *l_1580 = (void*)0;
                        int *l_1581 = &g_1050;
                        int *l_1582 = &g_19;
                        int *l_1583 = &l_1405;
                        int *l_1584 = &g_15;
                        int *l_1585 = &l_1484;
                        int *l_1586 = &g_19;
                        int *l_1587 = (void*)0;
                        int l_1588 = 0xF6D00D87L;
                        int *l_1589 = &l_1540;
                        int *l_1590 = &l_1559;
                        int *l_1591 = &l_1484;
                        int *l_1592 = &l_1466;
                        int *l_1593 = &l_1479;
                        int *l_1594 = &l_1405;
                        int *l_1595 = &l_1491;
                        int *l_1597 = (void*)0;
                        int *l_1598 = &l_1466;
                        int *l_1599 = (void*)0;
                        int *l_1600 = (void*)0;
                        int *l_1601 = &g_15;
                        int *l_1602 = (void*)0;
                        int *l_1603 = &l_1534;
                        int *l_1604 = &l_1484;
                        int *l_1605 = (void*)0;
                        int *l_1606 = &g_1050;
                        int *l_1607 = &g_1050;
                        int *l_1608 = (void*)0;
                        int *l_1609 = &g_19;
                        int *l_1610 = &g_15;
                        int l_1611 = 0xC340D4ADL;
                        l_1612++;
                        return (**g_483);


                    }
                    (*g_920) &= ((0xED47L < (safe_mod_func_uint16_t_u_u(l_1405, (safe_mod_func_int8_t_s_s(l_1612, g_1270))))) || l_1625);
                }

                ;
                (*l_1429) = &l_1596;

                ;
                (*g_920) = (0xADL != g_783);
            }
            else
            {
                unsigned char *l_1631 = &g_1131;
                (*g_920) ^= (safe_rshift_func_int8_t_s_u((**g_1102), 5));
                (*g_351) &= (safe_add_func_uint16_t_u_u((l_1631 == l_1417), 0xE87DL));
            }

            ;
            ;
        }


        ;
    }
    else
    {
        unsigned short l_1696 = 65535UL;
        int l_1711 = (-1L);
        int l_1716 = (-5L);
        int l_1719 = 7L;
        int l_1727 = 0x8F16309CL;
        int l_1728 = (-8L);
        int l_1729 = 0L;
        int l_1755 = 0L;
        short **l_1777 = (void*)0;
        long long **l_1783 = &g_659;
        char *l_1786 = &g_176;
        for (g_873 = 0; (g_873 > (-15)); g_873 = safe_sub_func_int8_t_s_s(g_873, 7))
        {
            int l_1682 = (-1L);
            int l_1683 = 0x1A70E8EBL;
            char *l_1709 = &g_259;
            int *l_1710 = &g_19;
            int *l_1712 = (void*)0;
            int *l_1713 = (void*)0;
            int *l_1714 = (void*)0;
            int *l_1715 = &g_579;
            int *l_1717 = &l_1405;
            int *l_1718 = &g_1508;
            int *l_1720 = (void*)0;
            int *l_1721 = &g_579;
            int *l_1722 = (void*)0;
            int *l_1723 = &l_1711;
            int *l_1724 = &l_1405;
            int *l_1725 = &g_1508;
            int *l_1726 = &g_1508;
            int *l_1730 = &l_1716;
            int *l_1731 = &g_1050;
            int *l_1732 = &g_306;
            int *l_1733 = &l_1711;
            int *l_1734 = &l_1719;
            int *l_1735 = (void*)0;
            int *l_1736 = (void*)0;
            int *l_1737 = (void*)0;
            int *l_1738 = &g_579;
            int *l_1739 = &g_1050;
            int *l_1740 = (void*)0;
            int *l_1741 = &l_1728;
            int *l_1742 = (void*)0;
            int *l_1743 = &l_1727;
            int *l_1744 = &l_1405;
            int *l_1745 = &g_579;
            int *l_1746 = &l_1682;
            int *l_1747 = &l_1683;
            int *l_1749 = &l_1711;
            char l_1750 = 0x08L;
            int *l_1751 = &l_1729;
            int *l_1752 = &g_579;
            int *l_1753 = &g_19;
            int *l_1754 = &l_1729;
            int *l_1756 = &l_1683;
            int *l_1757 = &l_1682;
            int *l_1758 = &l_1755;
            for (g_425 = 0; (g_425 != 41); g_425 = safe_add_func_int32_t_s_s(g_425, 1))
            {
                int *l_1636 = &g_19;
                int *l_1637 = &g_1050;
                int *l_1638 = (void*)0;
                int *l_1639 = (void*)0;
                int l_1640 = 0x126831C3L;
                int *l_1641 = &g_1050;
                int *l_1642 = &g_1508;
                int *l_1643 = &g_19;
                int *l_1644 = &g_579;
                int *l_1645 = (void*)0;
                int *l_1646 = &l_1405;
                int *l_1647 = &g_1050;
                int *l_1648 = &g_579;
                int *l_1649 = &l_1640;
                int *l_1650 = &g_19;
                int *l_1651 = (void*)0;
                int *l_1652 = &l_1405;
                int *l_1653 = (void*)0;
                int *l_1654 = &g_579;
                int *l_1655 = &g_1508;
                int l_1656 = 0x6B4193BDL;
                int *l_1657 = &l_1640;
                int *l_1658 = &l_1656;
                int *l_1659 = (void*)0;
                int *l_1660 = &l_1656;
                int *l_1661 = &g_15;
                int l_1662 = (-4L);
                int *l_1663 = &l_1405;
                int *l_1664 = &g_15;
                int *l_1665 = &l_1662;
                int *l_1666 = &g_306;
                int *l_1667 = &g_15;
                int *l_1668 = &g_1050;
                int *l_1669 = &l_1662;
                int *l_1670 = &g_19;
                int *l_1671 = &l_1405;
                int *l_1672 = &g_15;
                int *l_1673 = &g_19;
                int *l_1674 = &l_1662;
                int *l_1675 = (void*)0;
                int *l_1676 = (void*)0;
                int *l_1677 = &g_19;
                int *l_1678 = &g_15;
                int *l_1679 = &l_1656;
                int *l_1680 = &l_1662;
                int *l_1681 = (void*)0;
                int *l_1684 = &l_1662;
                int *l_1685 = &l_1682;
                int *l_1686 = &g_19;
                int *l_1687 = &l_1656;
                int *l_1688 = &l_1656;
                int *l_1689 = &g_19;
                int *l_1690 = &l_1662;
                int *l_1691 = &l_1656;
                int *l_1692 = (void*)0;
                int *l_1693 = (void*)0;
                int *l_1694 = &l_1656;
                ++l_1696;
                for (g_763 = (-4); (g_763 == (-16)); g_763 = safe_sub_func_int8_t_s_s(g_763, 2))
                {
                    (*l_1655) = l_1696;
                }
            }
            l_1710 = &l_1405;

            ;
            l_1405 &= ((*g_920) = (!0xA994527BL));
            ++g_1759;
        }
        (*g_920) = (-3L);
        for (g_1065 = (-30); (g_1065 == 13); ++g_1065)
        {
            if ((*g_920))
                break;
        }
        for (g_13 = 0; (g_13 > 28); g_13++)
        {
            short ***l_1776 = &l_1774;
            short ***l_1778 = &l_1777;
            int l_1779 = (-9L);
            int l_1780 = 1L;
            unsigned *l_1784 = &g_299;
            unsigned short *l_1787 = &g_1759;
            unsigned short *l_1788 = &l_1612;
            int **l_1789 = &g_18;
            l_1719 = ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(func_160((safe_mod_func_int8_t_s_s(0xD0L, l_1716)), (safe_sub_func_uint64_t_u_u((l_1779 = (((*l_1776) = l_1774) != ((*l_1778) = l_1777))), 18446744073709551608UL)), l_1780), l_1729)), 10)) == (((l_1729 < 0xC8L) != l_1780) < (**g_1102)));
            (*l_1789) = func_6(((*l_1788) = ((*l_1787) = func_160(((*l_1784) = (safe_mod_func_uint8_t_u_u(((void*)0 == l_1783), 253UL))), ((g_1785 = ((void*)0 != &g_178)) > ((void*)0 == l_1786)), func_160(l_1612, l_1405, l_1779)))), l_1728, l_1779, l_1748, l_1405);

            ;
        }
    }


    ;
    return l_1612;



}







static int ** func_158(long long p_159)
{
    const unsigned long long l_164 = 0x54E6A7687144B05ALL;
    unsigned char *l_177 = &g_178;
    int l_181 = 0L;
    short *l_182 = &g_183;
    int *l_349 = &g_15;
    long long l_586 = (-1L);
    short **l_944 = &l_182;
    unsigned ***l_953 = (void*)0;
    int l_1007 = 0L;
    unsigned char l_1090 = 248UL;
    unsigned *l_1095 = &g_261;
    unsigned **l_1094 = &l_1095;
    unsigned **l_1097 = &l_1095;
    unsigned ***l_1096 = &l_1097;
    unsigned **l_1099 = &l_1095;
    unsigned ***l_1098 = &l_1099;
    char * const **l_1104 = &g_1102;
    unsigned long long *l_1138 = &g_783;
    int *l_1142 = (void*)0;
    int *l_1143 = &g_579;
    int * const l_1144 = (void*)0;
    int l_1351 = 0xC8CEC0E0L;
    int *l_1372 = &g_15;
    unsigned l_1388 = 18446744073709551615UL;
    int **l_1400 = &g_351;
    if (func_160(p_159, l_164, func_165((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(g_19, 12)), ((*l_182) = (safe_add_func_int8_t_s_s(l_164, (l_181 = (--(*l_177)))))))), g_15, func_184(l_164, func_188(((((0xC9E8L || (safe_unary_minus_func_uint16_t_u((func_193(g_13, (*g_18), l_164) || 0L)))) ^ (-1L)) > l_164) && p_159), l_349, g_350), l_586), p_159)))
    {
        unsigned *l_932 = &g_694;
        int l_935 = 0xD2AB9278L;
        short **l_942 = &l_182;
        short ***l_943 = &l_942;
        unsigned ** const l_950 = (void*)0;
        unsigned ** const *l_949 = &l_950;
        unsigned ** const **l_951 = (void*)0;
        unsigned ** const **l_952 = &l_949;
        const char l_963 = 0x6DL;
        int ***l_972 = (void*)0;
        int l_1000 = (-1L);
        int l_1029 = (-4L);
        long long l_1032 = 0xAB30B9A6F85CFA80LL;
        int l_1069 = 0x5D568B14L;
        const unsigned ***l_1077 = &g_1075;
        l_349 = &l_181;

        ;
        l_935 |= ((--(*l_932)) && (*l_349));
        if ((safe_add_func_int64_t_s_s((((**g_658) ^= (safe_mod_func_uint16_t_u_u((g_497 ^ (((*l_943) = l_942) != (l_944 = &l_182))), (safe_mod_func_uint8_t_u_u(p_159, (safe_mod_func_int8_t_s_s((((*l_952) = l_949) != l_953), 0x1FL))))))) | ((void*)0 != &g_658)), l_935)))
        {
            for (g_235 = 0; (g_235 >= 49); ++g_235)
            {
                int * const l_970 = &g_19;
                int l_975 = 0L;
                for (g_19 = 0; (g_19 <= 28); g_19 = safe_add_func_uint32_t_u_u(g_19, 6))
                {
                    unsigned l_958 = 0x62ED272CL;
                    unsigned short *l_966 = &g_342;
                    int l_969 = 0x8A17ADDFL;
                    l_935 = (((l_958 <= (**g_483)) >= ((void*)0 == &g_783)) && ((*l_966) ^= ((p_159 != (safe_mod_func_uint8_t_u_u(g_306, (safe_sub_func_uint16_t_u_u(l_963, (p_159 > (safe_lshift_func_uint16_t_u_u(((*g_484) & p_159), g_261)))))))) == (**g_658))));
                    for (g_330 = 0; (g_330 <= 9); g_330 = safe_add_func_uint16_t_u_u(g_330, 2))
                    {
                        int **l_971 = (void*)0;
                        l_969 = (*g_920);
                        if (p_159)
                            break;
                        l_349 = l_970;

                        ;
                    }
                }
                (*l_970) = (&g_350 == l_972);
                l_975 ^= (safe_sub_func_uint64_t_u_u(g_238, (*l_349)));
            }

            ;
            return &g_920;


        }
        else
        {
            long long ***l_977 = &g_658;
            unsigned *l_978 = &g_261;
            int *l_979 = &g_579;
            int l_980 = 0xD29A1CD2L;
            int *l_981 = (void*)0;
            int *l_982 = &g_19;
            int *l_983 = &l_181;
            int *l_984 = &g_306;
            int *l_985 = &l_935;
            int *l_986 = &g_579;
            int *l_987 = &g_579;
            int *l_988 = &l_980;
            int *l_989 = (void*)0;
            int *l_990 = &l_980;
            int *l_991 = &l_980;
            int *l_992 = (void*)0;
            int *l_993 = &l_181;
            int l_994 = (-1L);
            int *l_995 = &l_994;
            int *l_996 = (void*)0;
            int *l_997 = &g_579;
            int *l_998 = &l_994;
            int *l_999 = &l_980;
            int *l_1001 = (void*)0;
            int *l_1002 = &g_15;
            int *l_1003 = &l_181;
            int *l_1004 = &l_994;
            int *l_1005 = &g_15;
            int *l_1006 = &g_306;
            int *l_1008 = &l_181;
            int *l_1009 = &g_19;
            int *l_1010 = &g_19;
            int *l_1011 = &l_994;
            int *l_1012 = &g_15;
            int *l_1013 = &g_19;
            int *l_1014 = &l_181;
            int *l_1015 = (void*)0;
            int *l_1016 = &l_181;
            int *l_1017 = (void*)0;
            int *l_1018 = &l_181;
            int *l_1019 = &l_935;
            int *l_1020 = &l_181;
            int *l_1021 = &g_306;
            int *l_1022 = (void*)0;
            int *l_1023 = &l_1007;
            int *l_1024 = &g_306;
            int l_1025 = (-9L);
            int *l_1026 = &l_935;
            int *l_1027 = &g_19;
            int *l_1028 = (void*)0;
            int *l_1030 = &l_1025;
            int *l_1031 = &g_19;
            int *l_1033 = &g_15;
            int *l_1034 = &l_994;
            int *l_1035 = &l_1029;
            int *l_1036 = (void*)0;
            int *l_1037 = (void*)0;
            int *l_1038 = &g_579;
            int *l_1039 = &g_19;
            int *l_1040 = &g_15;
            int *l_1041 = &l_1000;
            int *l_1042 = &l_1029;
            int *l_1043 = (void*)0;
            int *l_1044 = &l_181;
            int *l_1045 = &l_980;
            int *l_1047 = &l_980;
            int *l_1048 = &g_579;
            int *l_1049 = &l_1025;
            int *l_1051 = (void*)0;
            int *l_1052 = &g_1050;
            int *l_1053 = &g_1050;
            int *l_1054 = &l_181;
            int *l_1055 = &g_306;
            int *l_1056 = &g_579;
            int *l_1057 = &l_994;
            int *l_1058 = &g_306;
            int *l_1059 = (void*)0;
            int *l_1060 = (void*)0;
            int *l_1061 = &l_1025;
            int *l_1062 = &l_1025;
            int *l_1063 = &g_306;
            int *l_1064 = &g_579;
            unsigned long long *l_1070 = &g_224;
            (*l_349) |= ((g_976 ^ (4294967295UL & ((void*)0 == l_977))) || ((*l_978) = (g_694 |= 7UL)));
            if (g_19)
                goto lbl_1068;
lbl_1068:
            g_1065++;
            (*l_1044) |= (*g_920);
            l_1034 = func_6((0x8442B5E5629ACBFBLL || ((*l_1070) = l_1069)), (*l_1045), p_159, func_165(g_540, (((func_165((*l_349), ((g_911--) | (((0xB45D484B41BEB88BLL | (*l_349)) | (safe_sub_func_uint16_t_u_u((0x7869A243A603E10BLL ^ (*l_1016)), (*g_484)))) & 65530UL)), &l_1025, p_159) ^ (*l_349)) == (*l_349)) != g_151), &l_1025, g_239), p_159);

            ;
        }
        (*l_1077) = g_1075;
    }
    else
    {
        unsigned ****l_1079 = &l_953;
        unsigned *****l_1078 = &l_1079;
        int l_1088 = (-1L);
        int **l_1091 = (void*)0;
        if (((*g_920) = (((*l_1078) = (void*)0) == (void*)0)))
        {
            int l_1081 = 0L;
            l_1081 |= (safe_unary_minus_func_uint16_t_u(p_159));
            (*g_920) = g_1082;
        }
        else
        {
            unsigned short l_1085 = 0x1387L;
            unsigned *l_1089 = &g_694;
            l_1090 = (0x245EL & (l_1085 < ((g_224 <= (safe_rshift_func_int8_t_s_u((*l_349), ((*g_920) <= (p_159 == l_1088))))) > (((*l_1089) = ((g_420 | ((*l_349) > p_159)) || 0x8D14D47DC536BCC8LL)) != l_1088))));
            return l_1091;


        }

        ;
        return &g_351;


    }


    ;

    ;
    if ((p_159 ^ (safe_add_func_int16_t_s_s((l_1094 != ((*l_1098) = ((*l_1096) = (void*)0))), ((0xEE292054L & (safe_lshift_func_int8_t_s_s((((*l_1104) = g_1102) != (void*)0), 0))) > g_178)))))
    {
        short l_1112 = (-6L);
        int l_1119 = 0xBC03D87CL;
        int l_1125 = 0L;
        for (g_207 = 0; (g_207 != 12); g_207++)
        {
            int *l_1107 = (void*)0;
            int *l_1108 = (void*)0;
            int *l_1109 = &g_579;
            int *l_1110 = &g_15;
            int *l_1111 = &g_19;
            int *l_1113 = &l_1007;
            int *l_1114 = (void*)0;
            int *l_1115 = &g_1050;
            int *l_1116 = &g_19;
            int *l_1117 = &g_19;
            int *l_1118 = &l_1007;
            int *l_1120 = (void*)0;
            int *l_1121 = &l_181;
            int *l_1122 = &g_306;
            int *l_1123 = &l_1007;
            int *l_1124 = &g_306;
            int *l_1126 = &g_306;
            int *l_1127 = (void*)0;
            int *l_1128 = &l_1119;
            int *l_1129 = &l_1119;
            int *l_1130 = &g_19;
            ++g_1131;
        }
        (*g_920) ^= ((*l_349) > (((*g_484) | g_1082) <= (safe_lshift_func_uint8_t_u_s(g_299, 7))));
        (*g_920) &= (0x1BL > l_1119);
        (*l_349) &= (*g_920);
    }
    else
    {
        (*l_349) ^= (*g_920);
        (*g_920) &= 0xCE7FF820L;
    }

    ;
    ;
    (*l_1143) &= (safe_add_func_uint16_t_u_u(p_159, (((*l_349) |= ((*l_1138)++)) == ((safe_unary_minus_func_int8_t_s(p_159)) >= (g_19 != 7UL)))));
    if (((*g_920) = ((*l_349) ^ func_165((*l_1143), (*l_349), l_1144, (**g_1102)))))
    {
        unsigned l_1147 = 0UL;
        for (g_540 = (-30); (g_540 <= (-10)); ++g_540)
        {
            if ((*g_920))
                break;
        }
        l_1147 = (&l_181 == (void*)0);
    }
    else
    {
        const unsigned l_1177 = 1UL;
        int l_1183 = 0x7DE98A12L;
        int l_1204 = (-6L);
        int l_1231 = 0L;
        int l_1243 = 0x5481DA50L;
        const char *** const l_1262 = (void*)0;
        unsigned char l_1363 = 1UL;
        (*l_349) = ((safe_add_func_uint32_t_u_u(g_259, (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(g_1131)), (safe_lshift_func_int16_t_s_u(0xDBD9L, g_224)))), ((((safe_mod_func_int16_t_s_s(0x7A50L, g_497)) || ((safe_lshift_func_uint16_t_u_s(g_261, 5)) || (safe_lshift_func_uint16_t_u_u(65531UL, (p_159 || 0x6856L))))) >= 0x3093L) | 18446744073709551607UL))))) > p_159);
        if ((safe_sub_func_uint32_t_u_u(4294967295UL, (--(*l_1095)))))
        {
            int l_1167 = 0x1419C385L;
            (*g_920) = l_1167;
        }
        else
        {
            int l_1168 = 3L;
            int l_1266 = 0x9A693C9AL;
            int l_1268 = 0x3C79360EL;
            (*g_920) = l_1168;
            for (g_151 = (-9); (g_151 <= 11); g_151 = safe_add_func_int16_t_s_s(g_151, 3))
            {
                int l_1176 = 0xAE6D7B41L;
                int * const l_1182 = &g_306;
                int l_1201 = 0x4EE96028L;
                int l_1294 = (-1L);
                int l_1321 = 4L;
            }
        }
        (*l_349) = (*g_920);
        if ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s(1L, (--(*l_177)))), func_165(((*l_1138) = (safe_add_func_int64_t_s_s((-2L), (safe_add_func_uint16_t_u_u(g_15, ((safe_lshift_func_int8_t_s_s(((**g_1102) = (g_261 & ((((!9L) || (p_159 < 1UL)) || (p_159 | p_159)) | (**g_483)))), 6)) != (*l_1143))))))), l_1177, &g_15, l_1388))) == l_1204), p_159)))
        {
            unsigned long long l_1389 = 0x9FF7A1FA21A43E8CLL;
            (*l_349) = (l_1389 == g_911);
            l_1231 = (*l_1372);
        }
        else
        {
            unsigned short *l_1397 = &g_342;
            (*l_1143) = (((safe_lshift_func_uint16_t_u_u(g_1190, (0x7E0EC1D36532E990LL < (safe_unary_minus_func_int8_t_s((safe_sub_func_uint64_t_u_u(((((**g_483) & (safe_rshift_func_int8_t_s_s(((func_160(p_159, g_178, (--(*l_1397))) != (p_159 < p_159)) || (!p_159)), p_159))) < 0xEAL) | p_159), 18446744073709551615UL))))))) > 4294967295UL) && (**g_483));
        }
    }
    return l_1400;


}







static int func_160(unsigned p_161, const unsigned short p_162, unsigned short p_163)
{
    int * const l_924 = &g_15;
    unsigned l_925 = 0x0DB929BFL;
    char *l_930 = &g_873;
    unsigned long long *l_931 = &g_224;
    (*l_924) &= (func_165(p_163, g_330, l_924, g_261) > l_925);
    (*g_920) ^= (((((*l_931) ^= ((*l_924) || p_163)) & (*l_924)) || g_873) & 0xF27F89A317148CACLL);
    return p_163;
}







static unsigned short func_165(unsigned long long p_166, unsigned char p_167, int * const p_168, char p_169)
{
    unsigned *l_922 = (void*)0;
    unsigned **l_921 = &l_922;
    long long * const l_923 = (void*)0;
    l_921 = l_921;
    (*g_920) ^= ((void*)0 != l_923);
    return g_342;
}







static int * func_184(unsigned short p_185, char * p_186, unsigned short p_187)
{
    short l_591 = 0xD563L;
    unsigned short *l_601 = &g_342;
    int *l_620 = &g_15;
    int l_661 = 0x1FFF5858L;
    unsigned *l_699 = &g_261;
    unsigned long long l_729 = 8UL;
    int l_766 = 0xF2B6D579L;
    char l_795 = 0xF7L;
    int ***l_819 = &g_350;
    int l_864 = 0x903D8DC3L;
    int l_908 = 0x739BA8C9L;
    long long *l_916 = &g_330;
    int *l_919 = &g_579;
    if ((18446744073709551615UL || (safe_rshift_func_uint16_t_u_u((18446744073709551615UL >= (safe_sub_func_uint8_t_u_u((l_591 < ((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((g_319 || ((safe_unary_minus_func_int32_t_s(((0x73FE96F0L ^ ((safe_sub_func_uint16_t_u_u((!((*l_601) = (g_235 = 0xB8C2L))), ((**g_483) = (**g_483)))) < g_425)) & 0UL))) == p_185)), l_591)), p_187)) & g_261) & l_591) >= g_306)), g_176))), p_187))))
    {
        int *l_604 = &g_579;
        (*l_604) &= (safe_rshift_func_uint16_t_u_s((((void*)0 == &g_155) == l_591), 10));
        (*g_350) = l_604;



    }
    else
    {
        long long *l_607 = &g_330;
        int l_637 = 0x9019B991L;
        unsigned *l_737 = &g_694;
        int l_741 = 0xDE004722L;
        int l_767 = 1L;
        int l_778 = 0x4B42F1D9L;
        int l_780 = 0xF30EE275L;
        int ***l_793 = (void*)0;
        int ***l_794 = &g_350;
        short l_798 = 0x29B8L;
        int **l_820 = &g_18;
        int *l_821 = &l_780;
        int *l_822 = &l_661;
        int *l_823 = &l_741;
        int *l_824 = (void*)0;
        int *l_825 = &l_637;
        int *l_826 = &l_778;
        int *l_827 = &l_741;
        int *l_828 = &g_306;
        int *l_829 = &l_778;
        int *l_830 = (void*)0;
        int *l_831 = &l_767;
        int *l_832 = (void*)0;
        int *l_833 = &l_741;
        int *l_834 = &l_778;
        int *l_835 = &g_579;
        int *l_836 = &g_579;
        int *l_837 = &l_637;
        int *l_838 = &l_637;
        int *l_839 = &g_579;
        int *l_840 = &g_579;
        int *l_841 = &l_766;
        int *l_842 = &l_741;
        int *l_843 = &l_780;
        int *l_844 = &g_306;
        int *l_845 = (void*)0;
        int *l_846 = &g_306;
        int *l_847 = &l_778;
        int *l_848 = &g_579;
        int *l_849 = &g_306;
        int *l_850 = &l_741;
        int *l_851 = &l_766;
        int *l_852 = &l_766;
        int *l_853 = &l_778;
        int *l_854 = &g_306;
        int *l_855 = &l_780;
        int *l_856 = &g_306;
        int *l_857 = &g_306;
        int *l_858 = &g_579;
        int *l_859 = (void*)0;
        int *l_860 = (void*)0;
        int *l_861 = &g_579;
        int *l_862 = &g_579;
        int *l_863 = &l_661;
        int *l_865 = &l_741;
        int *l_866 = (void*)0;
        int *l_867 = &l_766;
        int *l_868 = &l_864;
        int *l_870 = (void*)0;
        int *l_871 = &l_864;
        int *l_872 = (void*)0;
        int *l_874 = (void*)0;
        int *l_875 = &g_579;
        int *l_876 = (void*)0;
        int *l_877 = &g_306;
        int *l_878 = (void*)0;
        int *l_879 = &l_767;
        int *l_880 = (void*)0;
        int *l_881 = (void*)0;
        int *l_882 = &l_637;
        int *l_883 = (void*)0;
        int *l_884 = &l_780;
        int *l_885 = (void*)0;
        int *l_886 = &l_741;
        int *l_887 = &l_661;
        int *l_888 = &l_767;
        int *l_889 = &g_306;
        int *l_890 = &l_780;
        int *l_891 = &l_864;
        int *l_892 = &l_778;
        int *l_893 = &l_767;
        int *l_894 = &l_661;
        int *l_895 = &g_306;
        int *l_896 = &g_306;
        int *l_897 = &l_864;
        int *l_898 = &l_767;
        int *l_899 = &l_767;
        int *l_900 = (void*)0;
        int *l_901 = (void*)0;
        int *l_902 = &g_306;
        int *l_903 = &l_766;
        int *l_904 = &l_741;
        int *l_905 = (void*)0;
        int *l_906 = (void*)0;
        int *l_907 = &l_864;
        int *l_909 = &l_780;
        int *l_910 = (void*)0;
        for (g_425 = 0; (g_425 > 40); ++g_425)
        {
            int ***l_618 = (void*)0;
            int *l_640 = &l_637;
            unsigned long long l_642 = 0x779366BCAA05C8CDLL;
            char l_660 = 0xA6L;
            long long **l_706 = &g_659;
            unsigned *l_721 = &g_694;
            int l_740 = 0x7D6DE320L;
            int l_775 = (-1L);
            if ((l_607 == (void*)0))
            {
                unsigned long long l_613 = 0x0445EA3A68A8199ALL;
                int *l_621 = &g_15;
                short *l_625 = &l_591;
                short **l_624 = &l_625;
                int *l_667 = &l_637;
                unsigned l_668 = 0xF04A194DL;
                for (g_420 = 0; (g_420 > 34); g_420 = safe_add_func_int16_t_s_s(g_420, 7))
                {
                    unsigned l_635 = 4294967295UL;
                    if ((safe_unary_minus_func_int8_t_s(4L)))
                    {
                        int *l_611 = &g_306;
                        int *l_612 = (void*)0;
                        const char *l_619 = &g_238;
                        --l_613;
                        (*l_611) |= ((((void*)0 != &g_351) < p_187) | (p_185 ^ (safe_sub_func_uint64_t_u_u((l_618 != &g_350), (p_186 == l_619)))));
                    }
                    else
                    {
                        (*g_350) = l_620;
                        if (p_187)
                            break;
                        (*g_350) = l_621;
                    }
                    if (((safe_sub_func_int8_t_s_s((*l_620), (l_624 != (void*)0))) & (g_15 & (safe_mod_func_uint8_t_u_u(5UL, (*p_186))))))
                    {
                        if (p_187)
                            break;
                    }
                    else
                    {
                        int *l_634 = &g_306;
                        (*l_634) = p_185;
                        g_579 = p_185;
                        (*g_350) = l_634;
                        g_306 = l_635;
                    }
                    if (p_185)
                        break;
                }
                if ((+9L))
                {
                    char l_636 = 1L;
                    if (l_636)
                        break;
                    l_637 |= (*l_620);
                    return l_621;




                }
                else
                {
                    int *l_643 = &g_579;
                    for (g_420 = 0; (g_420 > 15); g_420++)
                    {
                        int l_641 = 0x2BB2E274L;
                        l_640 = l_621;

                        ;
                        l_641 |= 0x8F1918D1L;
                        if (l_641)
                            continue;
                    }

                    ;
                    (*l_643) ^= l_642;
                }

                ;
                if (((((*g_484) ^= 0L) == (safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(0x7DL, ((g_224 = p_187) | (*l_620)))), (safe_lshift_func_int16_t_s_u((g_151 >= g_151), (((*l_621) >= (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(65535UL, 1)) && (*l_620)), 5UL)), g_15))) > (*l_620)))))) ^ g_540), p_187))) && 0xE566FA9EL))
                {
                    unsigned l_664 = 18446744073709551608UL;
                    if ((g_658 != &l_607))
                    {
                        int *l_662 = &g_579;
                        int l_663 = (-1L);
                        (*l_662) = (l_661 = l_660);
                        --l_664;
                        if (p_187)
                            break;
                        if ((*l_662))
                            continue;
                    }
                    else
                    {
                        int *l_671 = &g_306;
                        int *l_672 = &l_637;
                        int *l_674 = &g_306;
                        int *l_675 = &l_661;
                        int *l_676 = &l_637;
                        int *l_677 = &l_661;
                        int *l_678 = &g_579;
                        int l_679 = 0L;
                        int *l_680 = (void*)0;
                        int *l_681 = &l_661;
                        int *l_682 = &l_637;
                        int *l_683 = &g_579;
                        int *l_684 = &l_661;
                        int *l_685 = &g_579;
                        int *l_686 = &g_306;
                        int *l_687 = (void*)0;
                        int *l_688 = (void*)0;
                        int *l_689 = &l_679;
                        int *l_690 = &l_637;
                        int *l_691 = &l_661;
                        int *l_692 = &g_579;
                        int *l_693 = &l_661;
                        (*g_350) = l_667;
                        if (p_187)
                            continue;
                        --l_668;
                        ++g_694;
                    }
                    if (p_187)
                        break;
                    if ((*l_621))
                    {
                        char *l_703 = &l_660;
                        char **l_702 = &l_703;
                        long long ***l_707 = &l_706;
                        if (p_185)
                            break;
                        (*l_667) = ((safe_sub_func_uint8_t_u_u(((void*)0 == l_699), (((*l_625) ^= p_185) ^ ((*g_484) = (*g_484))))) && p_185);
                        if ((*l_667))
                            break;
                        (*l_667) ^= (safe_sub_func_int16_t_s_s(l_664, (1UL <= ((&l_607 != ((*l_707) = l_706)) <= (**g_658)))));
                    }
                    else
                    {
                        int *l_708 = (void*)0;
                        int **l_709 = &l_640;
                        char *l_718 = &l_660;
                        int l_719 = 0x025AFF38L;
                        int *l_720 = &g_579;
                        (*g_350) = &g_15;
                        (*l_709) = ((*g_350) = l_708);

                        ;
                        (*l_720) &= ((*l_667) = (safe_sub_func_int32_t_s_s(p_185, g_420)));
                    }

                    ;
                    if (p_185)
                        break;
                }
                else
                {
                    short l_728 = 0xCD75L;
                    if (l_637)
                        break;
                    if (((*p_186) <= (*p_186)))
                    {
                        int *l_722 = &g_579;
                        (*l_667) = ((*l_722) ^= (((*l_640) != g_151) | p_187));
                        (*g_350) = l_667;
                    }
                    else
                    {
                        int *l_727 = &g_306;
                        (*l_667) = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((-1L), 7)), 6));
                        return l_727;




                    }
                    l_637 ^= l_728;
                }

                ;
                if ((*l_621))
                    continue;
            }
            else
            {
                long long l_734 = 1L;
                unsigned *l_738 = &g_694;
                int *l_739 = &g_579;
                if (l_729)
                    break;
                (*l_739) &= (((l_637 < (*l_620)) ^ 0x26L) || (safe_mod_func_uint8_t_u_u((l_734 && (((((safe_sub_func_int32_t_s_s(p_185, 0x96614049L)) >= p_187) != l_637) > (-3L)) > l_637)), p_187)));
            }

            ;
            if (p_187)
            {
                int *l_742 = &l_741;
                int *l_743 = &l_661;
                int *l_744 = &l_740;
                int *l_745 = &g_579;
                int *l_746 = (void*)0;
                int *l_747 = &l_661;
                int *l_748 = (void*)0;
                int *l_749 = &l_740;
                int *l_750 = &l_661;
                int *l_751 = (void*)0;
                int *l_752 = &l_637;
                int *l_753 = &g_306;
                int *l_754 = &l_661;
                int *l_755 = &l_637;
                int *l_756 = (void*)0;
                int *l_757 = &l_661;
                int *l_758 = &g_306;
                int *l_759 = &l_637;
                int *l_760 = &g_579;
                int *l_761 = &l_740;
                int *l_762 = &l_637;
                int *l_764 = &l_741;
                int *l_765 = &l_661;
                int *l_768 = &g_579;
                int *l_769 = &l_637;
                int *l_770 = &l_767;
                int *l_771 = &l_661;
                int *l_772 = &l_741;
                int *l_773 = &l_766;
                int *l_774 = (void*)0;
                int *l_776 = &l_766;
                int *l_777 = (void*)0;
                int *l_779 = &l_740;
                int *l_781 = (void*)0;
                int *l_782 = &l_740;
                --g_783;
            }
            else
            {
                unsigned char l_786 = 255UL;
                int *l_787 = (void*)0;
                int *l_788 = &l_767;
                (*l_788) = l_786;
            }
            l_640 = &l_661;

            ;
        }



        if ((((((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_637, (p_185 && (-1L)))), ((p_187 <= ((((**g_658) = ((((*l_794) = (void*)0) == &g_351) == p_185)) != p_187) <= 0xC5L)) == 1L))) | l_795) && (*l_620)) | p_185) < 0xD4B7B306L))
        {
            g_18 = &l_661;

            ;
        }
        else
        {
            const unsigned l_801 = 4UL;
            int *l_802 = &g_579;
            unsigned **l_804 = &l_699;
            unsigned ***l_803 = &l_804;
            (*l_802) &= (safe_lshift_func_int8_t_s_s(((l_798 || (!((*l_737) = (0x9E194B28L > (safe_add_func_int8_t_s_s((l_801 || g_783), (0L || p_185))))))) < 0xD5FFL), 7));
            (*l_802) = (&l_798 == (*g_483));
            (*l_803) = &l_699;
            (*l_802) = ((safe_rshift_func_int16_t_s_u(((*g_659) < 0x83FC80BBA4D9DA70LL), p_185)) < (*l_802));
        }


        ;
        (*l_820) = &l_766;

        ;
        g_911++;
    }



    ;
    (*l_919) = (g_207 > (safe_mod_func_uint32_t_u_u(((((*l_916) ^= (*g_659)) & ((void*)0 != &l_916)) && ((((*l_699) = 1UL) <= (safe_sub_func_uint32_t_u_u((*l_620), ((*l_620) <= (0x61L || (g_155 = g_15)))))) <= p_185)), (*l_620))));
    (*l_919) = (l_916 != l_916);
    return g_920;



}







static char * func_188(unsigned char p_189, int * p_190, int ** p_191)
{
    short l_354 = 0x42BEL;
    int l_364 = 1L;
    unsigned l_370 = 0xEC698B38L;
    unsigned short *l_371 = &g_342;
    int l_409 = (-9L);
    short **l_453 = (void*)0;
    short ***l_452 = &l_453;
    const short l_464 = (-10L);
    unsigned char l_542 = 0x13L;
    unsigned long long *l_576 = &g_224;
    char *l_585 = &g_238;
    for (g_235 = 0; (g_235 >= 28); g_235 = safe_add_func_uint8_t_u_u(g_235, 7))
    {
        int l_357 = (-4L);
        int *l_358 = &g_306;
        unsigned short *l_372 = &g_342;
        unsigned l_377 = 0UL;
        int l_396 = 0xD19F04F4L;
        int l_400 = (-4L);
        int l_405 = 0x14D04F73L;
        int l_441 = 0x28A79E91L;
        char *l_584 = &g_176;
        l_354 = (*g_351);
        if (((g_299 ^ p_189) | p_189))
        {
            int l_361 = 0x71A507D1L;
            int l_387 = 0x9D968175L;
            int l_391 = 0x2B88CA99L;
            unsigned long long l_446 = 0x068132174B1CADDALL;
            short *l_451 = &g_207;
            short **l_450 = &l_451;
            short ***l_449 = &l_450;
            int *l_463 = &l_405;
            for (g_176 = 0; (g_176 != 22); g_176 = safe_add_func_uint8_t_u_u(g_176, 1))
            {
                int l_369 = 1L;
                if (l_357)
                    break;
                l_358 = ((*p_191) = (*g_350));

                ;
                if ((((safe_add_func_uint16_t_u_u(p_189, p_189)) < (((l_364 = (l_361 & (safe_rshift_func_uint16_t_u_s(l_364, 8)))) > g_207) <= (l_369 = (1UL <= ((safe_mod_func_uint64_t_u_u((((g_15 != (p_189 <= p_189)) >= g_330) | 0UL), p_189)) > (-1L)))))) >= l_370))
                {
                    int *l_374 = &l_364;
                    int *l_375 = &l_369;
                    int ***l_376 = &g_350;
                    if ((l_364 ^= (g_19 ^ (l_371 == (l_372 = &g_235)))))
                    {
                        (*p_191) = (*g_350);
                        if ((**p_191))
                            break;
                    }
                    else
                    {
                        int *l_373 = &g_306;
                        (*l_373) &= 6L;
                    }

                    ;
                    (*l_375) = ((*l_374) = (*g_351));
                    (*l_376) = &g_351;
                    (*g_350) = (**l_376);
                }
                else
                {
                    int *l_380 = &g_306;
                    l_377++;
                    (*l_380) |= l_354;
                }
            }

            ;
            ;
            if ((+0xF08D7938L))
            {
                (*p_191) = (*g_350);
            }
            else
            {
                int *l_381 = &g_306;
                int *l_382 = &l_364;
                int l_383 = 0L;
                int *l_384 = &g_306;
                int *l_385 = &g_306;
                int *l_386 = &l_383;
                int *l_388 = &l_387;
                int *l_389 = &l_387;
                int *l_390 = &g_306;
                int *l_392 = &l_391;
                int *l_393 = &l_364;
                int *l_394 = &l_383;
                int *l_395 = &l_387;
                int *l_397 = &l_391;
                int *l_398 = &l_387;
                int *l_399 = &l_391;
                int *l_401 = &l_400;
                int *l_402 = &g_306;
                int *l_403 = (void*)0;
                int *l_404 = &l_383;
                int *l_406 = &g_306;
                int *l_407 = &l_383;
                int *l_408 = &g_306;
                int *l_410 = &l_391;
                int *l_411 = &l_396;
                int *l_412 = &l_364;
                int *l_413 = &l_409;
                int *l_414 = (void*)0;
                int *l_415 = &l_364;
                int *l_416 = &l_364;
                int *l_417 = (void*)0;
                int *l_418 = (void*)0;
                int *l_419 = &g_306;
                (*p_191) = (*p_191);
                g_420--;
                (*p_191) = &l_383;

                ;
                for (g_239 = 0; (g_239 > (-17)); g_239 = safe_sub_func_int32_t_s_s(g_239, 7))
                {
                    char *l_445 = &g_319;
                    --g_425;
                    (*l_386) &= (((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_155, 8)), (safe_add_func_uint64_t_u_u(p_189, p_189)))), 0)) >= ((*l_402) = (safe_add_func_uint16_t_u_u(((g_224 != g_155) <= (l_387 || l_387)), p_189)))) && l_409);
                    for (l_357 = 0; (l_357 < 25); l_357++)
                    {
                        char *l_440 = &g_238;
                        (*g_350) = (*g_350);
                        (*l_392) &= (&g_176 != l_440);
                    }
                    if (((l_398 = (*p_191)) != (void*)0))
                    {
                        unsigned char *l_442 = &g_425;
                        int l_443 = 0L;
                        (*l_393) ^= (**p_191);
                        l_443 |= (g_330 >= (((p_189 <= l_441) != (p_189 | (((void*)0 == &g_224) > ((*l_442) |= 0x3AL)))) >= l_370));
                        return &g_259;



                    }
                    else
                    {
                        unsigned short l_444 = 1UL;
                        (*l_394) = l_444;
                        return l_445;



                    }
                }
            }


            l_446 ^= (~l_391);
            (*l_463) &= (l_387 = (l_391 = ((safe_add_func_uint8_t_u_u(0xEBL, (((l_449 != l_452) && p_189) && (safe_mod_func_uint16_t_u_u(g_155, (safe_lshift_func_uint8_t_u_u(l_361, 7))))))) && (safe_sub_func_int64_t_s_s((4294967295UL ^ (safe_unary_minus_func_int16_t_s(l_364))), (safe_add_func_int16_t_s_s((l_361 >= (*l_358)), (*l_358))))))));
        }
        else
        {
            if (l_464)
                break;
        }


        ;
        ;
        for (l_377 = 0; (l_377 < 15); l_377 = safe_add_func_uint64_t_u_u(l_377, 8))
        {
            unsigned *l_471 = &l_370;
            unsigned *l_472 = &g_261;
            int ***l_473 = &g_350;
            int l_478 = 0L;
            unsigned long long *l_489 = &g_224;
            long long *l_496 = &g_330;
            int *l_498 = &l_478;
            short *l_501 = &g_207;
            (*p_191) = &l_405;

            ;
            (*g_351) = (((safe_mod_func_uint16_t_u_u((l_364 = p_189), g_151)) >= (((safe_sub_func_uint16_t_u_u(((((*l_472) |= ((*l_471) = 0x102FA715L)) || ((((*l_473) = &g_18) != &g_18) < (g_207 &= p_189))) <= (g_306 && p_189)), (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(p_189, (*g_351))), g_155)))) > 0x7A07L) > p_189)) || 1L);
            (*l_498) = (l_478 != (safe_sub_func_uint64_t_u_u(l_354, (((**p_191) = (*g_351)) > (safe_lshift_func_uint16_t_u_u((((void*)0 == g_483) || (((safe_add_func_uint16_t_u_u((((((((*l_489) = (safe_lshift_func_int16_t_s_u(p_189, 11))) | ((*l_496) = (((l_409 = (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((+(p_190 != &g_261)), 5)), (*l_358))) & g_342), 12))) == g_261) || g_176))) | 0xD9L) < g_261) < g_207) ^ 0x76L), (*g_484))) && g_238) || l_370)), g_497))))));
            for (l_400 = 0; (l_400 > 3); l_400++)
            {
                int *l_545 = &l_405;
                long long **l_554 = &l_496;
                char *l_561 = &g_155;
                unsigned l_568 = 0UL;
            }
        }


        ;
        return l_584;



    }
    return l_585;


}







static int func_193(const unsigned p_194, int p_195, char p_196)
{
    unsigned short l_243 = 0UL;
    int *l_305 = &g_306;
    int l_328 = (-6L);
    for (p_196 = 0; (p_196 == 6); p_196 = safe_add_func_int32_t_s_s(p_196, 6))
    {
        int l_227 = 0L;
        int *l_279 = &g_15;
        int l_290 = 0x05A97E96L;
        int **l_304 = &g_18;
        for (g_151 = 0; (g_151 == 47); g_151++)
        {
            short *l_206 = &g_207;
            short **l_205 = &l_206;
            int l_250 = 0x2575ED6FL;
            const unsigned char l_278 = 0xE6L;
            int *l_282 = &l_250;
            int *l_283 = (void*)0;
            int *l_284 = (void*)0;
            int *l_285 = &l_250;
            int *l_286 = (void*)0;
            int *l_287 = &l_250;
            int *l_288 = &l_250;
            int *l_289 = (void*)0;
            int *l_291 = (void*)0;
            int *l_292 = &l_250;
            int *l_293 = &l_290;
            int *l_294 = &l_290;
            int *l_295 = (void*)0;
            int *l_296 = &l_250;
            int *l_297 = &l_290;
            int *l_298 = (void*)0;
            int **l_302 = (void*)0;
            int **l_303 = &l_297;
            if (p_194)
            {
                short l_266 = 0x073DL;
                unsigned short *l_269 = (void*)0;
                unsigned short *l_270 = &l_243;
                int *l_271 = &l_250;
                for (g_155 = 0; (g_155 < (-3)); g_155 = safe_sub_func_uint8_t_u_u(g_155, 3))
                {
                    int *l_267 = &l_250;
                    int **l_268 = &l_267;
                    for (g_176 = 0; (g_176 <= 5); g_176++)
                    {
                        short ***l_208 = &l_205;
                        unsigned long long *l_223 = &g_224;
                        int l_233 = 0x4830CAE9L;
                        unsigned short *l_234 = &g_235;
                        char *l_236 = (void*)0;
                        char *l_237 = &g_238;
                        int *l_240 = &l_233;
                        (*l_208) = l_205;
                        (*l_240) = (safe_mod_func_int16_t_s_s((g_239 |= ((*l_206) = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_19, 6)), (safe_mod_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((-1L), 10)), 8)) <= (g_15 || (safe_add_func_int64_t_s_s(p_196, ((*l_223) = g_19))))), (safe_mod_func_uint32_t_u_u((l_227 < ((*l_237) &= (safe_unary_minus_func_uint16_t_u(((g_15 >= (+(((safe_rshift_func_uint16_t_u_u(g_176, ((*l_234) |= (safe_mod_func_int64_t_s_s(0xD0445F7642676EBELL, l_233))))) <= 0x874A8060L) < 0UL))) & g_176))))), p_194)))))))), 0xBFE2L));
                    }
                    for (g_176 = 0; (g_176 < (-22)); g_176 = safe_sub_func_uint32_t_u_u(g_176, 7))
                    {
                        char *l_251 = &g_238;
                        int *l_252 = &l_250;
                        int *l_253 = (void*)0;
                        int *l_254 = (void*)0;
                        int *l_255 = &l_250;
                        int *l_256 = &l_250;
                        int *l_257 = &l_250;
                        int *l_258 = &l_250;
                        int *l_260 = (void*)0;
                        p_195 = (l_243 || (g_235 & (safe_lshift_func_int8_t_s_u(p_195, (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(p_194, ((*l_251) = l_250))), p_195))))));
                        (*l_252) = l_227;
                        g_261--;
                    }
                    (*l_267) |= (l_227 >= (safe_rshift_func_int8_t_s_s((p_196 || p_196), l_266)));
                    (*l_268) = &p_195;

                    ;
                }
                (*l_271) &= (p_194 > ((*l_270) |= l_227));
                if (((g_261--) | p_194))
                {
                    return p_194;
                }
                else
                {
                    int **l_280 = &l_271;
                    p_195 = (safe_mod_func_int64_t_s_s((safe_mul_func_uint32_t_u_u(l_278, ((void*)0 == l_279))), g_13));
                    (*l_280) = l_271;
                }
                if ((*l_279))
                    break;
            }
            else
            {
                char l_281 = (-6L);
                if (l_281)
                    break;
            }
            g_299++;
            (*l_303) = &p_195;

            ;
        }
        (*l_304) = &g_15;

        ;
    }

    ;
    (*l_305) = (0L && l_243);
    if (((*l_305) = (*l_305)))
    {
        int *l_307 = &g_306;
        int *l_308 = &g_306;
        int *l_309 = &g_306;
        int *l_310 = (void*)0;
        int *l_311 = &g_306;
        int *l_312 = &g_306;
        int *l_313 = &g_306;
        int *l_314 = &g_306;
        int *l_315 = &g_306;
        int *l_316 = &g_306;
        int *l_317 = &g_306;
        int *l_318 = &g_306;
        int *l_320 = &g_306;
        int *l_321 = &g_306;
        int *l_322 = &g_306;
        int *l_323 = &g_306;
        int *l_324 = &g_306;
        int *l_325 = (void*)0;
        int *l_326 = &g_306;
        int *l_327 = &g_306;
        int *l_329 = &l_328;
        int *l_331 = &l_328;
        int *l_332 = &g_306;
        int *l_333 = (void*)0;
        int *l_334 = &l_328;
        int *l_335 = &l_328;
        int *l_336 = &l_328;
        int *l_337 = &g_306;
        int *l_338 = &l_328;
        int *l_339 = &l_328;
        int *l_340 = &l_328;
        int *l_341 = &l_328;
        int **l_345 = (void*)0;
        ++g_342;
        l_324 = &g_19;

        ;
    }
    else
    {
        int **l_346 = &g_18;
        (*l_346) = &g_19;

        ;
        for (g_151 = (-25); (g_151 == 25); g_151 = safe_add_func_int8_t_s_s(g_151, 1))
        {
            (*l_346) = &p_195;

            ;
            p_195 = (-6L);
            return p_195;


        }
        (*l_305) &= 1L;
    }
    return (*g_18);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_783, "g_783", print_hash_value);
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_873, "g_873", print_hash_value);
    transparent_crc(g_911, "g_911", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_1046, "g_1046", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1065, "g_1065", print_hash_value);
    transparent_crc(g_1082, "g_1082", print_hash_value);
    transparent_crc(g_1131, "g_1131", print_hash_value);
    transparent_crc(g_1190, "g_1190", print_hash_value);
    transparent_crc(g_1229, "g_1229", print_hash_value);
    transparent_crc(g_1242, "g_1242", print_hash_value);
    transparent_crc(g_1253, "g_1253", print_hash_value);
    transparent_crc(g_1270, "g_1270", print_hash_value);
    transparent_crc(g_1508, "g_1508", print_hash_value);
    transparent_crc(g_1517, "g_1517", print_hash_value);
    transparent_crc(g_1695, "g_1695", print_hash_value);
    transparent_crc(g_1759, "g_1759", print_hash_value);
    transparent_crc(g_1785, "g_1785", print_hash_value);
    transparent_crc(g_1809, "g_1809", print_hash_value);
    transparent_crc(g_1877, "g_1877", print_hash_value);
    transparent_crc(g_1931, "g_1931", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
