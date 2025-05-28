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



static unsigned long long g_4 = 18446744073709551612UL;
static int g_29 = 1L;
static volatile short g_75 = 0xC35CL;
static volatile unsigned long long g_88 = 1UL;
static int g_124 = (-1L);
static char g_145 = 0x12L;
static unsigned char g_154 = 1UL;
static volatile int g_170 = 0xF90230FDL;
static volatile int *g_169 = &g_170;
static volatile int **g_168 = &g_169;
static unsigned g_171 = 0x3F3D54CDL;
static unsigned short g_235 = 0x5FF3L;
static unsigned g_238 = 0x1E940A49L;
static int g_239 = 9L;
static unsigned short g_260 = 65526UL;
static volatile int g_278 = 0xD3D9F213L;
static unsigned g_281 = 0xE489F429L;
static char g_307 = 0L;
static unsigned g_314 = 0x60850B4FL;
static unsigned g_369 = 4294967295UL;
static unsigned g_376 = 7UL;
static unsigned g_385 = 4294967286UL;
static volatile unsigned g_421 = 1UL;
static unsigned short g_426 = 65532UL;
static int g_438 = 0x590934E4L;
static short g_512 = 0xD97DL;
static int g_522 = 0xB85FABE8L;
static long long g_582 = 0x5F862F7F560B452CLL;
static unsigned short g_692 = 0UL;
static unsigned short g_712 = 65535UL;
static volatile int g_993 = 0x7B551FC5L;
static unsigned g_1013 = 18446744073709551615UL;
static int *g_1033 = (void*)0;
static const unsigned g_1193 = 0x6D0D2F13L;
static unsigned g_1256 = 0x603B0EE7L;
static volatile unsigned g_1330 = 18446744073709551615UL;



static long long func_1(void);
static char func_5(short p_6);
static unsigned short func_8(long long p_9, long long p_10, int p_11);
static unsigned func_16(unsigned long long p_17, const unsigned char p_18, unsigned short p_19, int p_20);
static unsigned short func_25(int p_26);
static int func_94(unsigned short p_95, int * p_96, unsigned short p_97, int * p_98);
static int * func_99(const int * p_100, const short p_101, int * p_102);
static unsigned char func_109(int * p_110);
static long long func_111(int p_112, int * const p_113, int * p_114, int p_115);
static int func_116(unsigned long long p_117, short p_118, char p_119, const unsigned p_120);
static long long func_1(void)
{
    char l_7 = 1L;
    const int *l_521 = &g_522;
    const int **l_520 = &l_521;
    const int ***l_519 = &l_520;
    const int *l_527 = &g_522;
    int *l_528 = (void*)0;
    int l_551 = 1L;
    int l_554 = (-10L);
    int l_556 = 9L;
    int l_566 = 0xE0FB7821L;
    int l_586 = 0xCD658C91L;
    unsigned l_589 = 0UL;
    long long l_594 = 0xFF6A0F1A0B109EEFLL;
    int l_657 = 1L;
    int l_731 = 0L;
    unsigned l_770 = 8UL;
    int l_782 = 0xCE7F4098L;
    short l_790 = 0xC364L;
    int **l_802 = &l_528;
    int ***l_801 = &l_802;
    int * const l_822 = &l_657;
    unsigned short l_954 = 0xA329L;
    int l_963 = 0L;
    unsigned long long l_1030 = 0xC7DCCA3148886D9ALL;
    short l_1055 = 0x6520L;
    short l_1074 = 0x305EL;
    unsigned l_1173 = 0UL;
    char l_1186 = 0xA9L;
    int l_1312 = 0L;
    int l_1314 = 0L;
    int l_1323 = 0x157E5C68L;
    int *l_1333 = &g_29;
    int *l_1334 = (void*)0;
    int *l_1335 = &l_566;
    int *l_1336 = (void*)0;
    int *l_1337 = &l_556;
    int *l_1338 = &l_1314;
    int *l_1339 = (void*)0;
    int *l_1340 = &l_1312;
    int *l_1341 = &l_551;
    int *l_1342 = &l_554;
    int *l_1343 = &g_29;
    int *l_1344 = &l_556;
    int *l_1345 = &l_1323;
    int *l_1346 = &l_566;
    int *l_1347 = &l_963;
    int *l_1348 = &l_586;
    int *l_1349 = &g_29;
    int *l_1350 = (void*)0;
    int *l_1351 = &l_657;
    int *l_1352 = &l_963;
    int *l_1353 = &l_551;
    int *l_1354 = &l_586;
    int *l_1355 = &g_29;
    int *l_1356 = (void*)0;
    int *l_1357 = &l_556;
    int *l_1358 = &g_29;
    int *l_1359 = &l_556;
    int *l_1360 = &g_522;
    int *l_1361 = &l_1312;
    int *l_1362 = &g_522;
    int *l_1363 = &l_1314;
    int *l_1364 = &g_124;
    int *l_1365 = &l_551;
    int *l_1366 = &g_522;
    int *l_1367 = &l_1323;
    int *l_1368 = &l_556;
    int *l_1369 = &l_551;
    int *l_1370 = &l_657;
    int *l_1371 = &l_1314;
    int *l_1372 = (void*)0;
    int *l_1373 = &l_556;
    int *l_1374 = &l_586;
    unsigned short l_1375 = 1UL;
    int *l_1378 = &l_586;
    if (((safe_mul_func_int8_t_s_s(g_4, func_5(l_7))) <= (safe_add_func_int32_t_s_s((l_519 != ((safe_sub_func_int8_t_s_s(0x60L, (((safe_sub_func_uint16_t_u_u(((*l_521) , 0xE19EL), ((*l_521) == (g_238 > (**l_520))))) , 0UL) == 65535UL))) , &l_520)), 0xBC353136L))))
    {
        const unsigned l_529 = 0x9E952AF1L;
        int l_530 = 0xE064FD85L;
        int *l_531 = &g_438;
        int *l_532 = &g_29;
        int *l_533 = &g_522;
        int *l_534 = &g_124;
        int *l_535 = &g_124;
        int *l_536 = &l_530;
        int *l_537 = (void*)0;
        int *l_538 = &g_438;
        int *l_539 = &g_438;
        int *l_540 = &g_29;
        int *l_541 = &l_530;
        int *l_542 = &l_530;
        int l_543 = 0x5CBDDB98L;
        int *l_544 = &g_124;
        int *l_545 = &l_543;
        int *l_546 = &g_29;
        int *l_547 = &l_530;
        int *l_548 = &g_522;
        int *l_549 = (void*)0;
        int *l_550 = &g_438;
        int *l_552 = &l_551;
        int l_553 = 0x3E918DBAL;
        int *l_555 = &g_438;
        int *l_557 = &l_530;
        int *l_558 = &g_124;
        int *l_559 = (void*)0;
        int *l_560 = &l_554;
        int *l_561 = (void*)0;
        int *l_562 = &l_556;
        int *l_563 = &l_554;
        int *l_564 = &g_522;
        int *l_565 = &l_553;
        int *l_567 = &g_522;
        int *l_568 = &g_124;
        int *l_569 = &l_553;
        int *l_570 = &l_543;
        int *l_571 = &l_543;
        int *l_572 = &l_566;
        int *l_573 = &g_124;
        int *l_574 = &l_530;
        int *l_575 = &l_551;
        int *l_576 = &g_522;
        int *l_577 = &l_551;
        int *l_578 = &l_543;
        int *l_579 = &g_438;
        int *l_580 = &g_124;
        int *l_581 = &l_530;
        int *l_583 = &g_29;
        int *l_584 = &l_556;
        int *l_585 = &l_553;
        int *l_587 = &l_530;
        int *l_588 = &l_566;
        (**l_519) = func_99(l_527, (((***l_519) < (g_421 ^ (*l_521))) , 3L), func_99(&g_522, l_529, &g_29));

        ;
        ++l_589;
    }
    else
    {
        unsigned char l_697 = 0x38L;
        unsigned short l_703 = 0x630AL;
        unsigned short l_793 = 0xA930L;
        int l_798 = 0x85380D96L;
        unsigned l_819 = 0UL;
        int **l_849 = &l_528;
        short l_856 = 0xF81FL;
        unsigned l_893 = 0x8BE88A8EL;
        char l_930 = 1L;
        char l_994 = 0x2EL;
        unsigned long long l_1020 = 1UL;
        unsigned char l_1021 = 0x85L;
        unsigned l_1039 = 0xBC512151L;
        unsigned long long l_1040 = 1UL;
        unsigned char l_1050 = 0x99L;
        unsigned l_1053 = 0x83281B34L;
        int l_1090 = (-1L);
        int l_1092 = (-5L);
        int l_1166 = 0x9E2DAFB5L;
        int l_1168 = 0x59D491A4L;
        unsigned short l_1177 = 0x6699L;
        unsigned short l_1259 = 0UL;
        int *l_1263 = &l_1092;
        int *l_1264 = &l_1090;
        int *l_1265 = &l_1166;
        int *l_1266 = &l_1168;
        int *l_1267 = &l_1092;
        int *l_1268 = &g_124;
        int *l_1269 = &l_1166;
        int *l_1270 = &l_657;
        int *l_1271 = &l_586;
        int *l_1272 = (void*)0;
        int *l_1273 = &l_554;
        int *l_1274 = &g_522;
        int *l_1275 = (void*)0;
        int *l_1276 = (void*)0;
        int *l_1277 = &l_586;
        int *l_1278 = &l_657;
        int *l_1279 = &l_556;
        int *l_1280 = &g_522;
        int *l_1281 = &l_551;
        int *l_1282 = (void*)0;
        int *l_1283 = (void*)0;
        int *l_1284 = &l_1166;
        int *l_1285 = (void*)0;
        int *l_1286 = (void*)0;
        int *l_1287 = &l_554;
        int *l_1288 = &g_124;
        int *l_1289 = &g_29;
        int *l_1290 = &g_438;
        int *l_1291 = &g_29;
        int *l_1292 = &l_551;
        int *l_1293 = &l_566;
        int *l_1294 = (void*)0;
        int *l_1295 = &l_657;
        int *l_1296 = (void*)0;
        int *l_1297 = &l_586;
        int *l_1298 = &g_522;
        int *l_1299 = (void*)0;
        int *l_1300 = &l_963;
        int *l_1301 = &l_586;
        int *l_1302 = &l_1090;
        int *l_1303 = &l_586;
        int *l_1304 = (void*)0;
        int *l_1305 = &l_1090;
        int *l_1306 = &l_556;
        int *l_1307 = (void*)0;
        int *l_1308 = &l_1166;
        int *l_1309 = &l_551;
        int *l_1310 = (void*)0;
        int *l_1311 = &l_963;
        int *l_1313 = (void*)0;
        int *l_1315 = &l_1090;
        int *l_1316 = &l_963;
        int *l_1317 = &l_963;
        int *l_1318 = &l_1312;
        int *l_1319 = (void*)0;
        int *l_1320 = (void*)0;
        int *l_1321 = &l_1090;
        int *l_1322 = (void*)0;
        int *l_1324 = &l_566;
        int *l_1325 = (void*)0;
        int *l_1326 = &l_1092;
        int *l_1327 = &l_657;
        int *l_1328 = &l_551;
        int *l_1329 = &l_1092;
        for (g_426 = (-29); (g_426 <= 44); ++g_426)
        {
            long long l_595 = 0xB7DA0E0BFF936EE2LL;
            int *l_596 = &g_124;
            int l_597 = 0x31BF1852L;
            int *l_598 = &l_554;
            int *l_599 = &g_438;
            int *l_600 = &l_597;
            int *l_601 = (void*)0;
            int l_602 = (-2L);
            int *l_603 = &l_566;
            int *l_604 = &l_602;
            int *l_605 = &l_556;
            int *l_606 = &g_522;
            int *l_607 = &l_597;
            int *l_608 = &g_438;
            int *l_609 = &l_602;
            int *l_610 = &l_586;
            int *l_611 = &g_522;
            int *l_612 = (void*)0;
            int *l_613 = (void*)0;
            int *l_614 = &l_554;
            int *l_615 = &l_602;
            int *l_616 = (void*)0;
            int *l_617 = (void*)0;
            int *l_618 = &l_602;
            int *l_619 = &g_522;
            int *l_620 = &l_551;
            int *l_621 = (void*)0;
            int *l_622 = &l_597;
            int *l_623 = &l_551;
            int *l_624 = &g_124;
            int *l_625 = &l_597;
            int *l_626 = (void*)0;
            int *l_627 = &l_586;
            int *l_628 = &l_566;
            int *l_629 = &g_522;
            int *l_630 = &g_522;
            int *l_631 = &g_124;
            int *l_632 = (void*)0;
            int *l_633 = (void*)0;
            int *l_634 = &l_554;
            int *l_635 = &l_566;
            int *l_636 = &l_554;
            int *l_637 = &l_586;
            int *l_638 = &l_597;
            int *l_639 = (void*)0;
            int *l_640 = (void*)0;
            int *l_641 = &l_597;
            int *l_642 = (void*)0;
            int *l_643 = (void*)0;
            int *l_644 = &l_586;
            int *l_645 = &g_438;
            int *l_646 = (void*)0;
            int *l_647 = (void*)0;
            int *l_648 = &l_556;
            int *l_649 = (void*)0;
            int *l_650 = &g_438;
            int *l_651 = &l_597;
            int *l_652 = &l_551;
            int *l_653 = &l_551;
            int *l_654 = &g_438;
            int l_655 = 2L;
            int *l_656 = &g_124;
            int *l_658 = &l_602;
            int *l_659 = &l_657;
            int *l_660 = &l_657;
            int *l_661 = &l_602;
            int *l_662 = &l_655;
            int *l_663 = &l_602;
            int *l_664 = &g_124;
            int *l_665 = &g_438;
            int *l_666 = &l_554;
            int *l_667 = &l_554;
            int *l_668 = &l_597;
            int *l_669 = (void*)0;
            int *l_670 = &l_551;
            int *l_671 = (void*)0;
            int *l_672 = (void*)0;
            int *l_673 = &l_602;
            int *l_674 = &g_29;
            int *l_675 = &l_551;
            int *l_676 = &l_551;
            int l_677 = (-1L);
            int *l_678 = &l_655;
            int *l_679 = &g_29;
            int *l_680 = &g_522;
            int *l_681 = (void*)0;
            int *l_682 = &g_124;
            int *l_683 = &l_597;
            int *l_684 = &l_597;
            int l_685 = (-1L);
            int *l_686 = &l_677;
            int *l_687 = &l_556;
            int *l_688 = &l_655;
            int *l_689 = &g_438;
            int *l_690 = &g_438;
            int *l_691 = &l_597;
            (*g_169) = l_594;
            g_692++;
            for (l_657 = 5; (l_657 < 7); ++l_657)
            {
                long long l_702 = (-1L);
                int l_711 = 0xB5B738D3L;
                l_697--;
                for (g_238 = 0; (g_238 > 38); g_238 = safe_add_func_uint32_t_u_u(g_238, 9))
                {
                    short l_708 = 0x4A0AL;
                    l_703++;
                    for (g_171 = 0; (g_171 > 20); g_171++)
                    {
                        int l_709 = 0L;
                        int l_710 = 8L;
                        ++g_712;
                        (*l_658) = ((((safe_mul_func_int16_t_s_s(l_697, ((!((safe_add_func_uint16_t_u_u(0UL, (safe_add_func_uint64_t_u_u(g_278, g_4)))) , (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0x7CABL, 5)), 4294967288UL)))) ^ l_708))) & g_369) && ((***l_519) > (***l_519))) , l_708);
                        (*l_608) = (*g_169);
                    }
                }
            }
        }
        for (l_589 = 0; (l_589 <= 58); l_589 = safe_add_func_int16_t_s_s(l_589, 3))
        {
            int *l_727 = &g_29;
            int *l_728 = &l_586;
            int *l_729 = &l_551;
            int *l_730 = &g_438;
            int *l_732 = &l_586;
            int *l_733 = &l_566;
            int *l_734 = (void*)0;
            int *l_735 = &g_438;
            int *l_736 = (void*)0;
            int *l_737 = &l_554;
            int *l_738 = &g_438;
            int *l_739 = &l_586;
            int *l_740 = &l_551;
            int *l_741 = (void*)0;
            int *l_742 = &g_124;
            int *l_743 = &l_551;
            int *l_744 = &g_29;
            int *l_745 = (void*)0;
            int *l_746 = &g_29;
            int *l_747 = &l_554;
            int *l_748 = &l_657;
            int *l_749 = &l_657;
            int *l_750 = &l_551;
            int *l_751 = &l_586;
            int l_752 = 0x12F7E8F0L;
            int *l_753 = &l_657;
            int *l_754 = &l_556;
            int l_755 = 1L;
            int *l_756 = &l_586;
            int *l_757 = &l_752;
            int *l_758 = &l_752;
            int *l_759 = (void*)0;
            int *l_760 = &g_438;
            int *l_761 = &g_522;
            int *l_762 = &g_522;
            int *l_763 = &l_551;
            int *l_764 = &g_438;
            int *l_765 = &l_586;
            int *l_766 = (void*)0;
            int *l_767 = &g_124;
            int *l_768 = &l_657;
            int *l_769 = (void*)0;
            int l_787 = (-5L);
            (**g_168) = 0x9CC74D4CL;
            l_770++;
            for (l_556 = 0; (l_556 != (-25)); --l_556)
            {
                int **l_775 = &l_744;
                (*l_775) = func_99(((**l_520) , &l_752), g_314, (((func_8((*l_521), (l_775 != &g_169), (safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(l_782, (safe_lshift_func_int16_t_s_s(g_75, (((safe_sub_func_int64_t_s_s(g_307, (-1L))) || (*l_751)) , l_697))))) != l_787), 0)) , (**l_775)), 0xC8DAD5CA50311C4FLL))) & g_124) && (-1L)) , &l_787));
                (*l_753) = func_111(((((((0x08L || ((0xD450L & ((((((func_16((*l_765), g_582, ((safe_rshift_func_uint8_t_u_s(((*g_168) != (*g_168)), ((func_25(((***l_519) != g_369)) > 0x4FL) == g_376))) == 0x074362800588CF05LL), g_281) && (*g_169)) , g_421) && (**l_775)) | g_281) < 0x6127EAECL) , (**l_775))) < (**l_775))) & g_145) != (*l_732)) ^ 0x543D7303558630AALL) >= l_703) == l_790), &g_29, &g_522, g_154);
            }
            l_798 &= (safe_sub_func_uint8_t_u_u((((g_238 | (l_793 < ((~g_522) != g_512))) != ((func_116((((safe_mod_func_uint32_t_u_u((~(((safe_mod_func_int64_t_s_s(((((*l_757) == g_281) , l_697) ^ ((void*)0 == &g_168)), g_88)) != 0L) && g_512)), (*l_765))) != g_29) != (*l_527)), g_712, (**l_520), g_438) <= g_692) > 1L)) == g_692), 1L));
        }
        if ((0x43F0L >= (((g_712 && l_793) > (safe_rshift_func_int16_t_s_u((((g_712 , &l_520) != ((*l_527) , ((g_235 , (((void*)0 == l_801) >= (**g_168))) , &l_802))) && (-1L)), 9))) == 0xCE291258D435CDE2LL)))
        {
            int *l_803 = &g_438;
            int *l_804 = &g_124;
            int *l_805 = &l_554;
            int *l_806 = (void*)0;
            int *l_807 = &l_586;
            int *l_808 = &l_554;
            int *l_809 = &g_124;
            int *l_810 = (void*)0;
            int *l_811 = &l_586;
            int *l_812 = &l_657;
            int l_813 = 0x0AD70011L;
            int l_814 = 0xE1EB6A8FL;
            int *l_815 = &l_657;
            int *l_816 = (void*)0;
            int *l_817 = &l_554;
            int *l_818 = &g_522;
            int *** const l_829 = &l_802;
            unsigned l_949 = 0x6CDAB401L;
            char l_998 = 0xD5L;
            const unsigned char l_1043 = 0UL;
            int l_1054 = 0xA914324DL;
            long long l_1064 = 0x1D8DA0FDF9A714B0LL;
            char l_1078 = 0x1AL;
            l_819--;
            (*g_168) = (*g_168);
            if ((func_111((**g_168), l_822, &l_813, (((~((safe_sub_func_uint64_t_u_u((&g_168 == (((((((g_239 == ((safe_lshift_func_uint8_t_u_s(g_238, 4)) & (*l_817))) != (8UL & g_369)) ^ 0x808AF6E3C893D892LL) == l_798) != g_426) != 8L) , &l_802)), 0xE30386C42F34A80FLL)) & (*l_521))) <= (-1L)) , g_235)) , 0x3C9B72CFL))
            {
                int * const *l_850 = &l_812;
                int l_882 = 0L;
                int l_911 = 0x5411332BL;
                (*l_822) |= (safe_lshift_func_int8_t_s_s(func_8(g_4, (l_829 != &l_520), ((*l_817) > g_421)), 1));
                for (l_703 = 0; (l_703 == 23); l_703 = safe_add_func_int8_t_s_s(l_703, 1))
                {
                    int l_844 = 0x642250B6L;
                    const unsigned l_851 = 18446744073709551610UL;
                    int l_854 = 0x41F85D70L;
                    int l_879 = 4L;
                    if ((safe_mod_func_uint32_t_u_u(func_16((safe_sub_func_int64_t_s_s(g_171, 0x98346CEE050E780BLL)), (func_8((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_238, (safe_mod_func_uint16_t_u_u(((func_25(g_260) > (safe_mod_func_int32_t_s_s(g_29, ((func_109(func_99(func_99((((void*)0 != (**l_829)) , (**l_829)), l_703, &l_798), g_281, &g_29)) , l_844) , g_512)))) >= 18446744073709551614UL), g_307)))), g_512)), g_385, l_844) >= g_426), g_171, g_385), g_171)))
                    {
                        (*l_805) &= 0x02AEB8FDL;
                        (*l_822) = ((safe_rshift_func_uint16_t_u_u(((l_844 < (*l_807)) == (***l_519)), 14)) < (g_235 || func_116((((((g_88 >= ((void*)0 == l_849)) > (((+(((&g_169 == l_850) , g_29) | g_438)) , &g_168) == &g_168)) && (-1L)) <= g_281) || g_29), g_582, g_376, l_851)));
                        (*g_169) &= ((safe_lshift_func_int8_t_s_u((***l_519), (func_109(&g_124) > l_851))) , 1L);
                        (**g_168) = (*g_169);
                    }
                    else
                    {
                        int *l_855 = &g_124;
                        int *l_857 = &l_556;
                        int *l_858 = &l_556;
                        int *l_859 = &l_854;
                        int *l_860 = (void*)0;
                        int *l_861 = &l_798;
                        int *l_862 = &l_586;
                        int *l_863 = (void*)0;
                        int *l_864 = (void*)0;
                        int *l_865 = &g_29;
                        int *l_866 = &l_813;
                        int *l_867 = &g_29;
                        int *l_868 = &g_124;
                        int *l_869 = &g_522;
                        int *l_870 = &l_657;
                        int *l_871 = &l_813;
                        int *l_872 = &l_798;
                        int *l_873 = (void*)0;
                        int *l_874 = &l_657;
                        int *l_875 = &l_814;
                        int *l_876 = &l_657;
                        int *l_877 = &l_554;
                        int *l_878 = (void*)0;
                        int *l_880 = &l_551;
                        int *l_881 = &l_798;
                        int *l_883 = (void*)0;
                        int *l_884 = &l_879;
                        int *l_885 = &l_586;
                        int *l_886 = (void*)0;
                        int *l_887 = &l_566;
                        int *l_888 = &l_882;
                        int *l_889 = &l_551;
                        int *l_890 = (void*)0;
                        int *l_891 = &l_814;
                        int *l_892 = &g_124;
                        l_893++;
                    }
                    for (l_7 = (-3); (l_7 < 0); l_7++)
                    {
                        unsigned l_900 = 0x33A6073AL;
                        int *l_901 = &l_854;
                        int *l_902 = &l_551;
                        int *l_903 = &g_522;
                        int *l_904 = &l_554;
                        int *l_905 = (void*)0;
                        int l_906 = 4L;
                        int *l_907 = &l_657;
                        int l_908 = (-4L);
                        int *l_909 = (void*)0;
                        int *l_910 = &l_798;
                        int *l_912 = (void*)0;
                        int *l_913 = &l_551;
                        int *l_914 = &l_882;
                        int *l_915 = (void*)0;
                        int *l_916 = &l_813;
                        int *l_917 = &l_908;
                        int *l_918 = &l_911;
                        int *l_919 = &l_586;
                        int *l_920 = (void*)0;
                        int *l_921 = &l_908;
                        int *l_922 = &l_813;
                        int *l_923 = &l_814;
                        int *l_924 = &l_657;
                        int *l_925 = &l_551;
                        int *l_926 = (void*)0;
                        int *l_927 = &l_554;
                        int *l_928 = &l_911;
                        int *l_929 = &l_798;
                        int *l_931 = &l_586;
                        int *l_932 = &l_586;
                        int *l_933 = &l_798;
                        int *l_934 = &l_911;
                        int *l_935 = &l_813;
                        int *l_936 = &l_879;
                        int *l_937 = &g_522;
                        int *l_938 = &l_813;
                        int *l_939 = &l_854;
                        int *l_940 = &l_814;
                        int *l_941 = &l_906;
                        int *l_942 = &l_556;
                        int *l_943 = &g_522;
                        int *l_944 = (void*)0;
                        int *l_945 = &l_906;
                        int *l_946 = &l_908;
                        int *l_947 = (void*)0;
                        int *l_948 = &g_522;
                        (*l_818) &= ((safe_add_func_uint64_t_u_u(l_900, (g_421 & func_109(&l_879)))) , (*g_169));
                        l_949++;
                        (*g_169) = (1UL < l_879);
                    }
                    (*g_169) = ((*l_521) <= 0x8239DCB0L);
                }
                (*l_812) &= (safe_rshift_func_int16_t_s_u(((0xE3L | 1L) | l_954), 1));
            }
            else
            {
                int *l_955 = &l_813;
                int *l_956 = &l_813;
                int *l_957 = &l_566;
                int *l_958 = &g_29;
                int *l_959 = &l_657;
                int *l_960 = &g_522;
                int *l_961 = &g_124;
                int *l_962 = &l_551;
                int *l_964 = &g_438;
                int *l_965 = &l_813;
                int *l_966 = &g_29;
                int *l_967 = (void*)0;
                int *l_968 = &l_798;
                int *l_969 = (void*)0;
                int *l_970 = &l_551;
                int *l_971 = (void*)0;
                int *l_972 = &g_124;
                int *l_973 = &l_814;
                int *l_974 = &l_813;
                int *l_975 = &l_963;
                int *l_976 = &l_551;
                int *l_977 = &l_813;
                int *l_978 = &l_586;
                int *l_979 = (void*)0;
                int *l_980 = &g_124;
                int *l_981 = (void*)0;
                int *l_982 = (void*)0;
                int *l_983 = &l_657;
                int *l_984 = &l_798;
                int *l_985 = &l_566;
                int *l_986 = (void*)0;
                int *l_987 = &l_554;
                int *l_988 = &l_657;
                int *l_989 = &l_551;
                int *l_990 = &l_556;
                int *l_991 = &l_551;
                int *l_992 = &l_813;
                int *l_995 = &l_551;
                int *l_996 = &g_438;
                int *l_997 = (void*)0;
                int *l_999 = &l_554;
                int *l_1000 = &l_556;
                int *l_1001 = &l_963;
                int *l_1002 = &l_657;
                int *l_1003 = (void*)0;
                int *l_1004 = &l_586;
                int *l_1005 = &l_814;
                int *l_1006 = &g_438;
                int *l_1007 = &l_554;
                int *l_1008 = (void*)0;
                int *l_1009 = &l_814;
                int *l_1010 = (void*)0;
                int *l_1011 = &l_551;
                int *l_1012 = (void*)0;
                unsigned char l_1029 = 255UL;
                g_1013++;
                if ((((*l_527) > (safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((func_25(((*l_804) ^ ((*g_168) != (func_8(((func_8(((g_238 || (((*g_169) < l_1020) && (g_145 < (g_170 != ((((*l_801) != (void*)0) < 0x0ECDA6079B65197ELL) , l_1021))))) != 1UL), g_582, (*l_822)) == 0x027FEC2BL) | 0x05F2L), g_369, g_171) , (**l_801))))) <= (*l_521)) == l_793), g_4)), g_1013))) && 0UL))
                {
                    unsigned long long l_1028 = 5UL;
                    int * const l_1031 = &l_566;
                    const int *l_1034 = (void*)0;
                    if ((g_512 | ((func_111((((safe_add_func_uint8_t_u_u(func_116((g_88 , g_170), g_369, (g_281 , g_369), (safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint64_t_u_u(((*l_973) , (g_692 , (((void*)0 == (*g_168)) , g_154))), l_1028)) ^ l_1029) , l_856), g_281))), g_692)) && g_712) , (-1L)), &g_29, &g_29, (*l_990)) <= l_1030) != g_1013)))
                    {
                        int **l_1032 = (void*)0;
                        g_1033 = l_1031;

                        ;
                        (*l_972) &= 0x8818634AL;
                    }
                    else
                    {
                        (**l_519) = func_99(&g_522, (*l_983), func_99(l_1034, (*l_807), (*l_849)));

                        ;
                        (*l_804) = (safe_sub_func_uint8_t_u_u(g_260, ((((g_438 , (*l_527)) > (((*l_807) != (g_281 >= ((func_8((((*g_168) == (*g_168)) | ((safe_sub_func_int8_t_s_s(g_438, func_25((((func_8(l_1039, (*l_957), (*l_1031)) == 18446744073709551615UL) , 1L) <= g_235)))) <= (*l_970))), g_235, (*l_807)) || (*g_169)) , 0UL))) >= 5UL)) <= l_1040) <= (*l_1031))));
                    }

                    ;
                    ;
                    (*g_169) = 0xEE6B65DAL;
                }
                else
                {
                    for (l_1021 = 0; (l_1021 != 17); l_1021 = safe_add_func_int8_t_s_s(l_1021, 9))
                    {
                        return g_75;
                    }
                }

                ;
                ;
                (*l_970) ^= (*g_169);
            }

            ;
            ;
            if ((0x741650AAL & (((((0x39CDL <= l_1043) ^ (safe_add_func_int32_t_s_s(((&g_169 == l_849) , (safe_rshift_func_uint8_t_u_s(((((((safe_rshift_func_uint16_t_u_s((func_8(((~l_1050) && (~((((safe_sub_func_int8_t_s_s(g_281, g_235)) && (*l_527)) == 0x63L) ^ g_29))), g_75, g_712) >= 0x00F9L), 6)) , (void*)0) != &g_168) && 255UL) >= g_154) <= g_124), l_1054))), l_1055))) && g_512) || g_712) >= 0x92L)))
            {
                return g_421;


            }
            else
            {
                long long l_1065 = 1L;
                int *l_1071 = &l_798;
                int l_1118 = 0xD681E34EL;
                int l_1170 = 0x55D4BF70L;
                int l_1194 = 0L;
                long long l_1235 = 0L;
                volatile int ***l_1262 = &g_168;
                if ((safe_add_func_uint8_t_u_u(g_369, ((safe_add_func_uint32_t_u_u(0x05967D65L, ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((**g_168) ^ ((g_124 | ((void*)0 == l_829)) && (l_1064 , l_1065))), g_29)) < (-1L)), 6)) | g_238))) && (-1L)))))
                {
                    int *** const l_1066 = &l_849;
                    if (((void*)0 != l_1066))
                    {
                        (*l_812) = (safe_rshift_func_int16_t_s_u(func_116(g_29, (*l_527), (safe_mul_func_int16_t_s_s(func_94((((func_111((*g_169), &g_522, &g_29, (**l_520)) <= (((void*)0 != &g_1033) < 0L)) < l_1065) || g_438), l_1071, (*l_1071), &g_29), g_712)), g_692), 1));
                    }
                    else
                    {
                        (*l_818) = (safe_sub_func_int64_t_s_s(((*l_1071) , ((((**g_168) ^ 0UL) >= 0x44C1E1B94CB401ACLL) != l_1074)), (safe_mul_func_int8_t_s_s(0x61L, 1UL))));
                        return g_376;


                    }
                    (*g_168) = (*g_168);
                }
                else
                {
                    int * const l_1077 = &l_556;
                    int l_1134 = 5L;
                    int l_1147 = (-1L);
                    int l_1162 = 1L;
                    (*l_812) |= func_8((*l_1071), ((func_25((*l_1071)) < ((((*g_168) == (*l_849)) >= 7L) , func_111(g_522, l_1077, func_99(&g_522, g_4, &g_438), g_712))) > (*l_803)), l_1078);
                    (*l_818) = (&g_1033 != (((*l_1077) > (*l_1071)) , &g_1033));
                    if (((&l_520 != ((*l_1077) , &g_168)) == (*l_1071)))
                    {
                        unsigned char l_1087 = 252UL;
                        (*l_817) |= (((safe_sub_func_int8_t_s_s((g_712 && (-7L)), 0xD1L)) ^ ((void*)0 != &g_168)) || (safe_rshift_func_uint16_t_u_u(((g_385 > (safe_rshift_func_uint16_t_u_u(func_8((*l_1077), ((-2L) | (func_16((safe_mod_func_uint16_t_u_u((***l_519), (*l_1077))), (*l_822), g_314, l_1087) > 7UL)), (*l_1077)), g_512))) & g_4), (*l_1071))));
                        (*g_168) = (g_88 , (*g_168));
                    }
                    else
                    {
                        short l_1088 = 6L;
                        int l_1089 = 0xA75284B9L;
                        int l_1091 = 1L;
                        int *l_1093 = &l_1089;
                        int *l_1094 = &l_551;
                        int *l_1095 = (void*)0;
                        int *l_1096 = &l_551;
                        int *l_1097 = (void*)0;
                        int *l_1098 = &l_798;
                        int *l_1099 = &l_657;
                        int *l_1100 = &l_813;
                        int *l_1101 = &l_814;
                        int *l_1102 = &l_1091;
                        int *l_1103 = &g_522;
                        int *l_1104 = &l_554;
                        int *l_1105 = (void*)0;
                        int *l_1106 = (void*)0;
                        int *l_1107 = &l_1090;
                        int *l_1108 = &l_963;
                        int *l_1109 = &l_551;
                        int *l_1110 = &g_124;
                        int *l_1111 = &l_657;
                        int *l_1112 = (void*)0;
                        int *l_1113 = &l_1091;
                        int *l_1114 = &l_1091;
                        int *l_1115 = &l_551;
                        int *l_1116 = &g_124;
                        int *l_1117 = &l_1091;
                        int *l_1119 = (void*)0;
                        int *l_1120 = &l_813;
                        int *l_1121 = (void*)0;
                        int *l_1122 = &l_586;
                        int *l_1123 = &l_1092;
                        int *l_1124 = (void*)0;
                        int *l_1125 = (void*)0;
                        int l_1126 = (-7L);
                        int *l_1127 = &l_813;
                        int *l_1128 = &l_551;
                        int *l_1129 = &g_522;
                        int *l_1130 = (void*)0;
                        int *l_1131 = &l_814;
                        int *l_1132 = &l_551;
                        int *l_1133 = (void*)0;
                        int *l_1135 = &l_813;
                        int *l_1136 = &l_1089;
                        int *l_1137 = &l_1126;
                        int *l_1138 = &g_124;
                        int *l_1139 = &l_814;
                        int *l_1140 = &l_1091;
                        int *l_1141 = &l_556;
                        int *l_1142 = (void*)0;
                        int *l_1143 = (void*)0;
                        int *l_1144 = (void*)0;
                        int *l_1145 = &l_798;
                        int *l_1146 = &l_963;
                        int *l_1148 = &l_566;
                        int *l_1149 = (void*)0;
                        int *l_1150 = &l_1147;
                        int *l_1151 = &l_554;
                        int *l_1152 = &l_566;
                        int *l_1153 = &g_438;
                        int *l_1154 = &g_522;
                        int *l_1155 = &g_29;
                        int *l_1156 = &l_814;
                        int *l_1157 = (void*)0;
                        int *l_1158 = &l_566;
                        int *l_1159 = (void*)0;
                        int *l_1160 = (void*)0;
                        int *l_1161 = &l_586;
                        int *l_1163 = &g_29;
                        int *l_1164 = &l_798;
                        int *l_1165 = &l_814;
                        int *l_1167 = &l_1090;
                        int *l_1169 = &l_554;
                        int *l_1171 = &l_586;
                        int *l_1172 = &l_1166;
                        int l_1176 = (-1L);
                        l_1173++;
                        l_1177--;
                        (*l_1120) = (safe_lshift_func_int16_t_s_u(((((safe_add_func_int8_t_s_s((g_522 , (*l_803)), g_438)) , (((*l_803) && ((&l_849 == &g_168) >= g_170)) != (0x407B8FA006A4FE9ELL >= (*l_1071)))) != g_260) >= 0x31AF1C7AL), 3));
                    }
                }
                if ((**g_168))
                {
                    int *l_1188 = &g_438;
                    (*l_803) = 0xC26875A8L;
                    for (g_145 = 0; (g_145 != (-4)); g_145--)
                    {
                        int * const l_1187 = (void*)0;
                        (*l_809) = l_1186;
                    }
                    return g_260;


                }
                else
                {
                    int *l_1195 = &l_657;
                    int *l_1196 = &l_1092;
                    int *l_1197 = &l_586;
                    int *l_1198 = &l_1118;
                    int *l_1199 = &g_522;
                    int *l_1200 = &l_798;
                    int *l_1201 = (void*)0;
                    int *l_1202 = &l_657;
                    int *l_1203 = (void*)0;
                    int *l_1204 = (void*)0;
                    int *l_1205 = &l_1090;
                    int *l_1206 = &l_566;
                    int *l_1207 = &g_29;
                    int *l_1208 = (void*)0;
                    int *l_1209 = &l_586;
                    int *l_1210 = (void*)0;
                    int *l_1211 = &l_1168;
                    int *l_1212 = &l_554;
                    int *l_1213 = &l_657;
                    int *l_1214 = (void*)0;
                    int *l_1215 = &l_1092;
                    int *l_1216 = &l_1118;
                    int *l_1217 = &l_1118;
                    int *l_1218 = (void*)0;
                    int *l_1219 = &l_963;
                    int *l_1220 = (void*)0;
                    int *l_1221 = &l_1090;
                    int *l_1222 = &l_586;
                    int *l_1223 = (void*)0;
                    int *l_1224 = &l_814;
                    int *l_1225 = &l_963;
                    int *l_1226 = &l_1118;
                    int *l_1227 = &l_551;
                    int *l_1228 = &l_566;
                    int *l_1229 = &l_1090;
                    int *l_1230 = &l_1118;
                    int *l_1231 = &g_438;
                    int *l_1232 = &l_556;
                    int *l_1233 = &l_554;
                    int *l_1234 = &l_1118;
                    int *l_1236 = &l_1168;
                    int *l_1237 = &l_1118;
                    int *l_1238 = (void*)0;
                    int *l_1239 = (void*)0;
                    int *l_1240 = &l_554;
                    int *l_1241 = &l_554;
                    int *l_1242 = &l_1170;
                    int *l_1243 = &g_522;
                    int *l_1244 = &l_1168;
                    int *l_1245 = &l_1118;
                    int *l_1246 = &g_29;
                    int *l_1247 = &g_124;
                    int *l_1248 = &l_1092;
                    int *l_1249 = &l_813;
                    int *l_1250 = &l_1092;
                    int *l_1251 = &l_1166;
                    int *l_1252 = &l_554;
                    int *l_1253 = (void*)0;
                    int *l_1254 = (void*)0;
                    int *l_1255 = &l_657;
                    g_1256--;
                }
                ++l_1259;
                (*l_1262) = &g_169;
            }
        }
        else
        {
            (*l_822) |= 0x4CB068EEL;
        }

        ;
        ;
        --g_1330;
    }

    ;
    ;
    l_1375--;
    (*l_520) = func_99(&g_124, (g_692 && g_238), l_1378);

    ;
    (*l_1367) = (safe_mod_func_int16_t_s_s(g_385, (((void*)0 == &g_169) ^ (g_29 , (**g_168)))));
    return g_154;


}







static char func_5(short p_6)
{
    unsigned char l_27 = 1UL;
    unsigned l_93 = 4294967290UL;
    int *l_106 = (void*)0;
    const unsigned short l_400 = 7UL;
    unsigned char l_436 = 0x33L;
    int *l_437 = &g_438;
    int *l_439 = (void*)0;
    int *l_440 = &g_29;
    int *l_441 = &g_124;
    int l_442 = 1L;
    int *l_443 = &g_29;
    int *l_444 = &g_29;
    int *l_445 = &l_442;
    int *l_446 = &l_442;
    int *l_447 = &g_438;
    int *l_448 = &g_29;
    int *l_449 = &g_29;
    int *l_450 = &l_442;
    int *l_451 = &g_438;
    int *l_452 = &g_124;
    int l_453 = 0x1A3FA46EL;
    int *l_454 = &l_442;
    int *l_455 = (void*)0;
    int l_456 = 0xFB6D2DAAL;
    int *l_457 = &g_29;
    int *l_458 = &l_456;
    int *l_459 = &g_438;
    int l_460 = 0x8FBF5051L;
    int *l_461 = &l_453;
    int l_462 = (-5L);
    int l_463 = 3L;
    int *l_464 = &g_29;
    int *l_465 = &g_438;
    int *l_466 = &g_29;
    int *l_467 = &g_124;
    int *l_468 = &l_456;
    int *l_469 = &g_438;
    int *l_470 = &g_29;
    int *l_471 = &g_29;
    int l_472 = 9L;
    int *l_473 = &l_442;
    int *l_474 = &l_453;
    int *l_475 = &l_456;
    int *l_476 = &l_442;
    int *l_477 = &l_453;
    int *l_478 = &l_462;
    int *l_479 = &g_29;
    int *l_480 = &g_438;
    int *l_481 = (void*)0;
    int *l_482 = &l_463;
    int *l_483 = &l_462;
    int *l_484 = &g_438;
    int *l_485 = &g_438;
    int *l_486 = (void*)0;
    int *l_487 = &l_456;
    int *l_488 = &l_456;
    int *l_489 = &l_456;
    int *l_490 = &l_460;
    int l_491 = 0x3EAC6F1AL;
    int *l_492 = &g_438;
    int *l_493 = &g_124;
    int *l_494 = &l_453;
    int *l_495 = &l_460;
    int *l_496 = (void*)0;
    int *l_497 = &l_460;
    int *l_498 = &l_453;
    int *l_499 = (void*)0;
    int l_500 = 0x18AC65C2L;
    int *l_501 = &l_500;
    int l_502 = 0x19B404ABL;
    int *l_503 = (void*)0;
    int *l_504 = &l_453;
    int *l_505 = (void*)0;
    int *l_506 = (void*)0;
    int *l_507 = &l_453;
    int *l_508 = (void*)0;
    int l_509 = 0x2F9BF1B5L;
    int *l_510 = &l_462;
    int *l_511 = &l_456;
    int *l_513 = &l_500;
    unsigned l_514 = 0xE4B26791L;
    (*l_437) |= ((func_8((safe_mod_func_uint16_t_u_u(g_4, (((safe_sub_func_int8_t_s_s((func_16((safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(func_25(l_27), (l_27 ^ (p_6 || l_93)))) & func_94(p_6, func_99(&g_29, (safe_add_func_uint8_t_u_u((l_27 < 0xBFL), 3UL)), &g_29), g_4, l_106)), 0x0770L)), l_400, l_400, p_6) == 4L), p_6)) & g_145) , l_400))), l_27, g_29) != l_436) < g_238);
    (**g_168) = p_6;
    ++l_514;
    return g_124;
}







static unsigned short func_8(long long p_9, long long p_10, int p_11)
{
    int l_433 = 1L;
    int *l_435 = &g_29;
    int **l_434 = &l_435;
    if (((+(safe_mod_func_int64_t_s_s(0x75900326E57CC7FDLL, ((safe_rshift_func_uint16_t_u_s((p_10 & ((g_171 < (~g_307)) ^ g_307)), 8)) , (safe_mul_func_uint8_t_u_u(l_433, ((!((&g_169 == (p_11 , l_434)) == p_11)) | (**g_168)))))))) ^ 0x2921L))
    {
        (**l_434) = (func_25((*l_435)) , func_25(g_171));
    }
    else
    {
        (*l_435) = (**l_434);
        (*l_435) &= (*g_169);
    }
    return p_10;
}







static unsigned func_16(unsigned long long p_17, const unsigned char p_18, unsigned short p_19, int p_20)
{
    long long l_407 = 0x3D53BC850E0C1A61LL;
    unsigned long long l_412 = 0x7AD04161D741B982LL;
    int *l_413 = &g_124;
    if ((0xB4624F099C83E0C9LL >= (((0xB5L < (safe_add_func_int32_t_s_s((-1L), (safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((l_407 , (((0L < (!((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(l_412, (l_412 & 0xFE1FL))), ((l_413 != (void*)0) & 1UL))) ^ 0x60L))) > g_369) , 3L)), g_145)) <= (*l_413)), 4294967295UL))))) == p_18) , g_154)))
    {
        (*g_169) = (safe_rshift_func_uint8_t_u_u(g_307, g_239));
    }
    else
    {
        int * const l_422 = &g_29;
        int *l_425 = (void*)0;
        (*g_168) = (*g_168);
        if (((g_124 || p_19) ^ 0x2C55E09F5BEA1ABCLL))
        {
            int **l_423 = &l_413;
            for (p_20 = 10; (p_20 <= (-7)); p_20--)
            {
                for (l_407 = 0; (l_407 == 18); l_407 = safe_add_func_uint64_t_u_u(l_407, 1))
                {
                    long long l_420 = 1L;
                    return l_420;
                }
                g_421 = (*g_169);
            }
            (*l_423) = ((((*g_168) == (void*)0) ^ ((g_369 , &p_20) == (void*)0)) , l_422);

            ;
        }
        else
        {
            const int *l_424 = &g_124;
            g_426 |= ((func_111((*l_413), func_99(func_99(func_99(l_424, ((func_25((g_154 & ((void*)0 != &l_413))) , g_154) , 0x1732L), ((((*l_422) >= 0xF5139A76L) & p_18) , (void*)0)), (*l_424), l_425), g_124, &g_29), &g_29, p_18) , (*l_424)) || 1UL);
        }

        ;
    }

    ;
    return g_88;
}







static unsigned short func_25(int p_26)
{
    int *l_28 = &g_29;
    int *l_30 = &g_29;
    int *l_31 = &g_29;
    int *l_32 = &g_29;
    int l_33 = 0x16F93BD5L;
    int *l_34 = &l_33;
    int *l_35 = &g_29;
    int l_36 = 0x70F9E3D3L;
    int *l_37 = &l_36;
    int l_38 = 6L;
    int *l_39 = &l_36;
    int l_40 = 0x21F7D967L;
    int *l_41 = &l_33;
    int *l_42 = &l_40;
    int *l_43 = &l_33;
    int *l_44 = &l_38;
    int l_45 = 0xC422D5FBL;
    int *l_46 = &l_45;
    int *l_47 = &l_36;
    int *l_48 = (void*)0;
    int *l_49 = &l_33;
    int *l_50 = &l_40;
    int l_51 = 0L;
    int *l_52 = &l_45;
    int *l_53 = &l_36;
    int *l_54 = (void*)0;
    int *l_55 = &l_36;
    int *l_56 = &l_45;
    int *l_57 = &l_33;
    int *l_58 = &l_38;
    int *l_59 = &l_38;
    int *l_60 = (void*)0;
    int *l_61 = (void*)0;
    int *l_62 = &g_29;
    int *l_63 = &l_36;
    int *l_64 = &l_33;
    int *l_65 = &l_40;
    int l_66 = 0x2EC6F0D4L;
    int *l_67 = &g_29;
    int *l_68 = &l_40;
    int *l_69 = &l_45;
    int *l_70 = &l_66;
    int *l_71 = &l_36;
    int *l_72 = &g_29;
    int *l_73 = &l_45;
    int l_74 = 0xA9D707D8L;
    int *l_76 = &l_33;
    int l_77 = 0x2657A772L;
    int l_78 = 1L;
    int *l_79 = (void*)0;
    int *l_80 = (void*)0;
    int *l_81 = (void*)0;
    int *l_82 = &l_78;
    int *l_83 = &g_29;
    int *l_84 = &l_51;
    int *l_85 = &l_33;
    int *l_86 = &l_36;
    int *l_87 = &l_38;
    --g_88;
    (*l_42) &= ((safe_mul_func_uint16_t_u_u((g_4 ^ g_75), (*l_31))) == ((void*)0 == &l_78));
    return p_26;
}







static int func_94(unsigned short p_95, int * p_96, unsigned short p_97, int * p_98)
{
    int * const l_121 = &g_29;
    int *l_389 = &g_29;
    int *l_392 = &g_29;
    int *l_399 = &g_124;
    (*l_399) = ((safe_sub_func_uint8_t_u_u(func_109((func_111(func_116((l_121 == p_96), p_97, (0xD41D6648L | g_29), (l_121 != (void*)0)), l_121, l_389, (*l_121)) , l_392)), g_238)) != g_29);
    return g_29;
}







static int * func_99(const int * p_100, const short p_101, int * p_102)
{
    int *l_105 = &g_29;
    return l_105;


}







static unsigned char func_109(int * p_110)
{
    unsigned char l_395 = 1UL;
    int *l_398 = &g_124;
    (*l_398) = ((g_307 , ((0x55CDL == (g_369 | (*p_110))) , (((((((((l_395 > (safe_sub_func_uint32_t_u_u(0xB11DCCF7L, (*p_110)))) > g_376) == ((((((l_395 , (-10L)) ^ 0x07820917L) , (void*)0) == &g_169) | g_376) , 0xC5E5L)) , g_314) || l_395) | 0x64EFL) , l_395) ^ (-7L)) != 0L))) < l_395);
    return (*l_398);
}







static long long func_111(int p_112, int * const p_113, int * p_114, int p_115)
{
    int *l_390 = (void*)0;
    int *l_391 = &g_124;
    (*l_391) &= (*p_113);
    return g_281;
}







static int func_116(unsigned long long p_117, short p_118, char p_119, const unsigned p_120)
{
    int *l_122 = (void*)0;
    int *l_123 = &g_124;
    int *l_125 = &g_124;
    int *l_126 = &g_124;
    int *l_127 = (void*)0;
    int *l_128 = &g_124;
    int l_129 = 0x8DA534C8L;
    int l_130 = (-1L);
    int *l_131 = &l_129;
    int *l_132 = &g_124;
    int *l_133 = &g_124;
    int l_134 = 8L;
    int *l_135 = &l_129;
    int *l_136 = (void*)0;
    int *l_137 = &g_124;
    int l_138 = (-4L);
    int l_139 = 0L;
    int *l_140 = (void*)0;
    int *l_141 = &l_134;
    int *l_142 = &g_124;
    int *l_143 = (void*)0;
    int *l_144 = &l_129;
    int *l_146 = &l_134;
    int *l_147 = &l_130;
    int l_148 = (-1L);
    int *l_149 = &l_148;
    int *l_150 = &l_130;
    int *l_151 = &l_130;
    int *l_152 = &g_124;
    int *l_153 = &l_139;
    int **l_157 = (void*)0;
    int **l_158 = &l_142;
    long long l_190 = 1L;
    const unsigned char l_232 = 0xBBL;
    short l_248 = 0x1A48L;
    unsigned char l_365 = 0xDDL;
    g_154--;
    (*l_158) = &g_124;
    if ((g_29 && ((*l_125) & p_117)))
    {
        const int l_167 = 0x55CA0DA2L;
        int *l_189 = &l_130;
        int l_259 = 0xA08344C3L;
        int l_289 = 0x5D863CB2L;
        unsigned l_359 = 18446744073709551615UL;
        unsigned char l_360 = 9UL;
        (*l_151) = ((safe_mod_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((p_119 < (((g_145 <= (*l_152)) , ((safe_mul_func_uint16_t_u_u((*l_151), ((void*)0 != &g_124))) == (((g_124 > (safe_sub_func_int64_t_s_s(l_167, (!l_167)))) | g_29) == 0x56BCC6B82E5CE9E3LL))) <= g_154)), p_120)) ^ p_119), l_167)) ^ p_120);
        if ((l_167 >= (g_154 , ((g_168 == &g_169) && l_167))))
        {
            const int *l_182 = &l_148;
            unsigned char l_231 = 1UL;
            int l_234 = 1L;
            g_124 = l_167;
            --g_171;
            if ((safe_rshift_func_uint8_t_u_u(g_4, 0)))
            {
                int *l_192 = &l_130;
                unsigned l_193 = 0x6105BDF1L;
                for (g_124 = 0; (g_124 <= 23); g_124++)
                {
                    volatile int ***l_178 = (void*)0;
                    volatile int ***l_179 = (void*)0;
                    volatile int ***l_180 = (void*)0;
                    volatile int ***l_181 = &g_168;
                    int *l_191 = &l_148;
                    (*l_181) = &g_169;
                    l_192 = func_99(l_182, ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_145, (((0x86717EFFL < ((g_154 | (((void*)0 == (*g_168)) <= ((g_124 , l_189) != (l_190 , (void*)0)))) , g_29)) != p_120) > (*l_131)))), 1)) < (*l_189)), l_191);

                    ;
                    (*l_141) = (l_193 >= (((safe_lshift_func_int16_t_s_s(p_117, (safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(1UL, 6)) > g_4) <= (safe_mul_func_int8_t_s_s(p_118, p_117))), (safe_mul_func_int8_t_s_s(g_29, (0x5AAA48D7F8389229LL != (*l_189)))))))) | 6UL) , (*l_191)));
                    if (g_4)
                        continue;
                }

                ;
            }
            else
            {
                const int *l_206 = &l_129;
                for (p_117 = 1; (p_117 == 40); p_117 = safe_add_func_uint8_t_u_u(p_117, 2))
                {
                    long long l_221 = (-1L);
                    int *l_233 = &l_129;
                    (*l_158) = func_99(l_206, (safe_add_func_uint64_t_u_u(0UL, ((~(safe_mul_func_uint16_t_u_u(((((**l_158) == g_124) > (((safe_sub_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((((((safe_sub_func_int32_t_s_s(4L, (p_118 == (((((safe_rshift_func_int16_t_s_u((&l_189 == (void*)0), (safe_add_func_int8_t_s_s((~((g_29 , 65534UL) || p_117)), p_118)))) , 5L) >= g_171) == g_145) <= 0L)))) , 0x857EL) > 0x86D7L) > 0xF186003BL) , l_221), (*l_182))) >= l_221), (*l_189))) , 65535UL) , (*l_133))) < 6L), p_118))) && 3L))), &g_124);

                    ;
                    if ((safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((g_124 == g_29), 6)), p_120)) , (*l_141)), (*l_206))))
                    {
                        unsigned char l_230 = 0x40L;
                        l_233 = func_99(func_99(l_189, ((((safe_lshift_func_uint8_t_u_u(((g_145 < ((p_118 || (g_154 , (((void*)0 != (*g_168)) >= p_119))) <= (l_230 != (p_118 && (-6L))))) , l_231), 2)) < g_154) & 0x8CL) , p_119), &g_124), l_232, &g_124);

                        ;
                        g_235--;
                        (*l_135) ^= (-1L);
                    }
                    else
                    {
                        const int *l_242 = &g_124;
                        (*l_141) &= (((g_238 <= (*l_206)) , (g_4 || (g_239 && ((g_238 < ((safe_mul_func_int16_t_s_s(g_154, (*l_189))) , ((l_242 == l_189) && p_119))) | p_117)))) | p_119);
                        (*l_158) = l_233;

                        ;
                        (*g_168) = (((*l_206) , ((safe_unary_minus_func_uint64_t_u((&g_168 == ((safe_add_func_uint16_t_u_u(((void*)0 != l_242), (*l_135))) , &g_168)))) > 0L)) , (*g_168));
                    }

                    ;
                    ;
                }

                ;
                for (g_239 = 7; (g_239 != 22); g_239 = safe_add_func_int16_t_s_s(g_239, 4))
                {
                    (*l_141) = (*l_182);
                    return g_124;
                }
                (*l_141) ^= ((((p_119 >= g_238) | p_117) , l_248) , (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(p_118, (*l_189))), ((safe_mod_func_uint32_t_u_u((*l_182), (*l_206))) , (safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0xA702L, p_118)), 6))))));
                g_260--;
            }

            ;
            (*l_158) = (*l_158);
        }
        else
        {
            int l_265 = 0x0D1834DDL;
            volatile int *l_277 = &g_278;
            int l_280 = 0xEA086712L;
            for (g_235 = 11; (g_235 >= 57); ++g_235)
            {
                unsigned char l_276 = 1UL;
                int l_284 = 0xAC837247L;
                int l_288 = 0x8421D5CAL;
                if (((&g_169 == (void*)0) , l_265))
                {
                    short l_279 = 0x5A95L;
                    int l_292 = 0L;
                    int l_300 = 0L;
                    if (((safe_add_func_int64_t_s_s(g_29, (((p_120 , (safe_lshift_func_uint8_t_u_s(((((p_118 != 0xE489776AL) || 255UL) > (safe_mul_func_int8_t_s_s(l_265, ((safe_mod_func_int8_t_s_s(g_260, (safe_rshift_func_uint16_t_u_u((((g_235 >= ((g_260 || 0x3C0A783F8197DD29LL) > l_276)) & p_118) && p_118), l_265)))) & p_120)))) , 1UL), 7))) > g_235) == g_145))) || g_239))
                    {
                        l_277 = (*g_168);

                        ;
                    }
                    else
                    {
                        unsigned long long l_285 = 0xA64F93B81CEEBA6CLL;
                        int *l_290 = &l_139;
                        int *l_291 = &l_288;
                        int *l_293 = &l_129;
                        int *l_294 = &l_292;
                        int *l_295 = &l_292;
                        int *l_296 = &l_288;
                        int *l_297 = &l_138;
                        int *l_298 = &l_292;
                        int *l_299 = &g_124;
                        int *l_301 = &l_129;
                        int *l_302 = &l_292;
                        int *l_303 = &l_130;
                        int *l_304 = &l_288;
                        int *l_305 = &l_280;
                        int *l_306 = &l_138;
                        int *l_308 = &l_280;
                        int *l_309 = &l_289;
                        int *l_310 = &l_138;
                        int *l_311 = &g_124;
                        int *l_312 = &l_288;
                        int *l_313 = &l_292;
                        ++g_281;
                        ++l_285;
                        --g_314;
                        return g_4;
                    }

                    ;
                    (*l_131) |= (safe_lshift_func_uint16_t_u_u((*l_189), 4));
                }
                else
                {
                    unsigned char l_333 = 251UL;
                    (*l_125) = (((safe_sub_func_uint8_t_u_u(g_239, ((safe_lshift_func_uint8_t_u_s((((((((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_235, p_117)), g_235)), 4)) == (safe_rshift_func_uint8_t_u_s((7UL <= (safe_sub_func_int32_t_s_s(l_276, (0xC3L & (g_154 > g_239))))), l_280))) | p_118) > (*l_189)) , (void*)0) != (void*)0) | 18446744073709551614UL), 6)) <= g_238))) > p_119) != l_333);
                    if ((g_145 ^ g_171))
                    {
                        unsigned char l_354 = 0x7CL;
                        (*l_132) = (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((l_284 , 0x1CL), ((safe_mul_func_int8_t_s_s(0L, (safe_sub_func_int64_t_s_s(p_118, ((g_238 ^ (*l_189)) & ((((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(p_120, (safe_sub_func_int16_t_s_s((+(safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_354, 6)), (safe_mod_func_uint16_t_u_u((!(!((safe_mod_func_uint8_t_u_u(0xCCL, 250UL)) == p_119))), l_359))))), 5L)))), l_288)) ^ 0x88E0C3C7F25558BBLL), l_360)) || p_118) , 7UL) || (*l_189))))))) > p_118))), p_118));
                        (*l_152) &= l_284;
                        return l_265;
                    }
                    else
                    {
                        unsigned l_368 = 0x32BF4E47L;
                        (**l_158) = (safe_add_func_int8_t_s_s(((-8L) ^ 1UL), l_333));
                        (*l_158) = &l_265;

                        ;
                        (*l_132) = (safe_sub_func_int8_t_s_s(g_260, ((l_365 , (p_119 , ((safe_mod_func_uint64_t_u_u((&l_265 == &l_288), g_281)) , ((((((void*)0 != &g_168) , (p_120 <= l_368)) , 0x1345L) ^ 7L) & 0xD5L)))) | 0x825AL)));
                    }

                    ;
                    (**l_158) |= ((!((&l_288 != &l_289) & l_333)) , ((g_260 ^ (0x189E9F6BL ^ g_29)) | (g_4 | g_145)));
                }
                --g_369;
            }

            ;
            ;
            if ((p_117 && (*l_150)))
            {
                const int *l_372 = &g_124;
                int *l_375 = &l_265;
                (*l_158) = func_99(l_372, (safe_rshift_func_int8_t_s_u((&g_168 == (g_4 , &g_168)), p_120)), &l_265);

                ;
                (*l_158) = l_375;

                ;
            }
            else
            {
                (*l_141) = l_280;
                g_376++;
                (*l_131) &= (*l_146);
                return p_118;
            }

            ;
        }


    }
    else
    {
        unsigned short l_379 = 65535UL;
        l_379--;
    }


    for (g_281 = (-13); (g_281 >= 4); g_281++)
    {
        int *l_384 = &l_129;
        unsigned short l_388 = 0x37E9L;
        (*l_158) = l_384;

        ;
        ++g_385;
        (*l_123) |= l_388;
    }
    return g_314;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    transparent_crc(g_993, "g_993", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1256, "g_1256", print_hash_value);
    transparent_crc(g_1330, "g_1330", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
