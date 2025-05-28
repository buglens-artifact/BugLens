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



static unsigned long long g_7[8][8] = {{0xB6748F69F7FD1E81LL, 0xB6748F69F7FD1E81LL, 0UL, 0x807383CC47D1AFD0LL, 0x9DD952EAA29C1464LL, 0xBF9ACF2579253A34LL, 0x609D70CADD635290LL, 0xB6748F69F7FD1E81LL}, {0xB6748F69F7FD1E81LL, 0xB6748F69F7FD1E81LL, 0UL, 0x807383CC47D1AFD0LL, 0x9DD952EAA29C1464LL, 0xBF9ACF2579253A34LL, 0x609D70CADD635290LL, 0xB6748F69F7FD1E81LL}, {0xB6748F69F7FD1E81LL, 0xB6748F69F7FD1E81LL, 0UL, 0x807383CC47D1AFD0LL, 0x9DD952EAA29C1464LL, 0xBF9ACF2579253A34LL, 0x609D70CADD635290LL, 0xB6748F69F7FD1E81LL}, {0xB6748F69F7FD1E81LL, 0xB6748F69F7FD1E81LL, 0UL, 0x807383CC47D1AFD0LL, 0x9DD952EAA29C1464LL, 0xBF9ACF2579253A34LL, 0x609D70CADD635290LL, 0xB6748F69F7FD1E81LL}, {0xB6748F69F7FD1E81LL, 0xB6748F69F7FD1E81LL, 0UL, 0x807383CC47D1AFD0LL, 0x9DD952EAA29C1464LL, 0xBF9ACF2579253A34LL, 0x609D70CADD635290LL, 0xB6748F69F7FD1E81LL}, {0xB6748F69F7FD1E81LL, 0xB6748F69F7FD1E81LL, 0UL, 0x807383CC47D1AFD0LL, 0x9DD952EAA29C1464LL, 0xBF9ACF2579253A34LL, 0x609D70CADD635290LL, 0xB6748F69F7FD1E81LL}, {0xB6748F69F7FD1E81LL, 0xB6748F69F7FD1E81LL, 0UL, 0x807383CC47D1AFD0LL, 0x9DD952EAA29C1464LL, 0xBF9ACF2579253A34LL, 0x609D70CADD635290LL, 0xB6748F69F7FD1E81LL}, {0xB6748F69F7FD1E81LL, 0xB6748F69F7FD1E81LL, 0UL, 0x807383CC47D1AFD0LL, 0x9DD952EAA29C1464LL, 0xBF9ACF2579253A34LL, 0x609D70CADD635290LL, 0xB6748F69F7FD1E81LL}};
static int g_10 = 9L;
static int g_22 = 0L;
static int g_103 = 0x8BD3C801L;
static unsigned short g_107 = 65529UL;
static int *g_128 = &g_22;
static int **g_127 = &g_128;
static unsigned g_138 = 1UL;
static unsigned g_212 = 18446744073709551615UL;
static int *g_298 = (void*)0;
static const int *g_446[4][3] = {{&g_103, &g_22, &g_103}, {&g_103, &g_22, &g_103}, {&g_103, &g_22, &g_103}, {&g_103, &g_22, &g_103}};
static const int **g_445 = &g_446[2][0];
static const int *g_518 = &g_22;
static int *g_539 = &g_10;
static int *g_599 = &g_22;



static const unsigned char func_1(void);
static int func_2(unsigned short p_3, unsigned char p_4, char p_5, unsigned long long p_6);
static int * func_12(short p_13, short p_14);
static short func_15(short p_16, int p_17);
static short func_25(short p_26);
static int func_29(unsigned long long p_30, int * p_31, int * const p_32, long long p_33);
static int * func_37(const int ** p_38, unsigned short p_39);
static long long func_52(int p_53, int ** const p_54, long long p_55, const int * p_56, const short p_57);
static unsigned short func_60(int * p_61, const int ** p_62, short p_63, int p_64, char p_65);
static int * func_66(char p_67);
static const unsigned char func_1(void)
{
    short l_8 = 1L;
    g_10 = func_2(g_7[4][6], g_7[4][6], l_8, l_8);
    (*g_127) = func_12(g_10, func_15((safe_rshift_func_int8_t_s_s(l_8, g_7[4][6])), l_8));
    return l_8;
}







static int func_2(unsigned short p_3, unsigned char p_4, char p_5, unsigned long long p_6)
{
    int *l_9 = &g_10;
    int **l_11 = &l_9;
    (*l_11) = l_9;
    return g_7[5][5];
}







static int * func_12(short p_13, short p_14)
{
    int ***l_586 = (void*)0;
    const int *l_595 = (void*)0;
    int * const l_598 = &g_22;
    int *l_600 = (void*)0;
    const short l_625[7][2] = {{0L, 0xAFBDL}, {0L, 0xAFBDL}, {0L, 0xAFBDL}, {0L, 0xAFBDL}, {0L, 0xAFBDL}, {0L, 0xAFBDL}, {0L, 0xAFBDL}};
    int *l_632[5][4] = {{&g_103, (void*)0, &g_10, (void*)0}, {&g_103, (void*)0, &g_10, (void*)0}, {&g_103, (void*)0, &g_10, (void*)0}, {&g_103, (void*)0, &g_10, (void*)0}, {&g_103, (void*)0, &g_10, (void*)0}};
    int i, j;
    if ((&g_127 == l_586))
    {
        unsigned l_594 = 0xEF1D3952L;
        int *l_596 = (void*)0;
        const int **l_597 = &l_595;
        for (g_103 = 0; (g_103 <= 2); g_103 += 1)
        {
            const long long l_591 = (-2L);
            const int *l_603[9];
            int i;
            for (i = 0; i < 9; i++)
                l_603[i] = &g_103;
            (*l_598) = (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0UL, l_591)), (((safe_mod_func_int16_t_s_s((func_52(l_594, &g_539, g_10, l_595, func_29(p_14, l_596, l_598, p_13)) || 4294967295UL), 0xA896L)) == g_103) & g_10)));
            (*l_598) = (p_14 < g_7[7][5]);
            for (g_212 = 0; (g_212 <= 2); g_212 += 1)
            {
                int * const l_601 = &g_22;
                int **l_602 = &g_599;
                long long l_613 = 0x76DFB26F7878195ALL;
                const int *l_614 = &g_22;
                int i, j;
                (*l_602) = l_601;
                (**l_602) = (*g_518);
                for (g_107 = 0; (g_107 <= 2); g_107 += 1)
                {
                    (*g_539) = func_52((*g_539), &l_596, l_591, l_603[7], p_13);
                    for (g_22 = 0; (g_22 <= 2); g_22 += 1)
                    {
                        int l_606 = 0xC5DFC977L;
                        int * const l_612[3][7] = {{&g_103, &g_10, &g_103, &g_10, &g_103, &g_10, &g_103}, {&g_103, &g_10, &g_103, &g_10, &g_103, &g_10, &g_103}, {&g_103, &g_10, &g_103, &g_10, &g_103, &g_10, &g_103}};
                        int i, j;
                        (*g_539) = ((safe_add_func_int16_t_s_s((g_103 == (((0x545FFD5D7374AEF0LL > (l_606 == (l_586 == &g_445))) ^ g_7[4][6]) & 0x8D880740597E972ELL)), ((((safe_mod_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u((65531UL >= (p_14 || p_14)))) | 4294967287UL), (-1L))), g_107)) || l_613) | g_7[1][0]) ^ g_212))) != p_13);
                        g_446[(g_103 + 1)][g_103] = l_614;
                    }
                }
            }
        }
        (*g_445) = (*l_597);
    }
    else
    {
        int * const l_628 = &g_22;
        int **l_629 = &l_600;
        (*g_599) = (safe_sub_func_uint32_t_u_u(p_14, (*g_518)));
        (*l_629) = l_628;
    }
    (*g_539) = (+(safe_sub_func_uint8_t_u_u((*l_598), p_14)));
    (*g_127) = &g_22;
    (*g_539) = 0x220BD113L;
    return l_632[2][0];
}







static short func_15(short p_16, int p_17)
{
    unsigned long long l_27[3];
    long long l_544 = 0x69434FFD99FF9564LL;
    int *l_585 = &g_22;
    int i;
    for (i = 0; i < 3; i++)
        l_27[i] = 18446744073709551615UL;
    for (p_17 = (-22); (p_17 <= (-15)); ++p_17)
    {
        short l_527 = 4L;
        int *l_528 = &g_103;
        for (p_16 = 0; p_16 < 8; p_16 += 1)
        {
            for (g_22 = 0; g_22 < 8; g_22 += 1)
            {
                g_7[p_16][g_22] = 0xC87A9B65CAB43068LL;
            }
        }
        (*l_528) = (1UL | ((safe_mod_func_int16_t_s_s(func_25(l_27[1]), (((((((-6L) ^ p_16) && func_2(l_527, g_7[5][2], g_7[4][6], p_16)) || g_7[4][6]) | g_107) >= g_10) & p_16))) < p_16));
        if ((*l_528))
            continue;
    }
    (*g_127) = (void*)0;
    for (g_212 = (-28); (g_212 < 10); g_212++)
    {
        short l_533 = 0xF94FL;
        unsigned l_538 = 0UL;
        unsigned l_577 = 9UL;
        (*g_445) = (*g_445);
        for (g_138 = 0; (g_138 == 46); g_138 = safe_add_func_int64_t_s_s(g_138, 7))
        {
            int ** const l_546 = &g_128;
            int l_549 = 0xC397FD97L;
            (*g_445) = &p_17;
            if (l_533)
                break;
            if ((safe_add_func_uint32_t_u_u(0x58F5E8C0L, (safe_add_func_uint16_t_u_u(l_538, l_27[1])))))
            {
                unsigned short l_540 = 4UL;
                (*g_445) = g_539;
                if (((((-1L) < l_538) & p_16) ^ (~l_27[1])))
                {
                    int *l_541 = &g_10;
                    int l_547 = 9L;
                    if (p_17)
                    {
                        unsigned l_545 = 0x8BCE0C53L;
                        const int *l_548 = &g_103;
                        int *l_550 = &l_547;
                        (*l_550) = l_549;
                        p_17 = ((safe_sub_func_uint8_t_u_u(247UL, 0xB4L)) & g_7[4][6]);
                        (*l_546) = &p_17;
                    }
                    else
                    {
                        return p_17;
                    }
                    (*g_128) = (((*g_518) <= (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(g_138, 9)), (safe_mod_func_uint8_t_u_u((((**l_546) < (p_17 | (g_107 >= p_16))) > p_17), (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(0xAEC6L, (!(**l_546)))), 0x2EB55847L)), l_27[2])), (**g_127))), 0x9181DBFAL))))))) && 0xC340079977119389LL);
                }
                else
                {
                    for (l_533 = 0; (l_533 >= 7); l_533 = safe_add_func_uint8_t_u_u(l_533, 1))
                    {
                        const int **l_573[8];
                        int l_574 = 0xC90CE0CFL;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_573[i] = &g_446[0][2];
                        p_17 = ((safe_sub_func_uint32_t_u_u(g_107, func_60((*g_127), l_573[4], l_574, (safe_rshift_func_uint8_t_u_s((l_577 == (safe_add_func_uint16_t_u_u(0x32A5L, p_16))), g_107)), g_7[4][6]))) & g_7[4][6]);
                        (*g_445) = &p_17;
                    }
                    for (g_22 = 19; (g_22 <= 6); g_22 = safe_sub_func_uint8_t_u_u(g_22, 5))
                    {
                        short l_584[6][8] = {{(-1L), 0x26A8L, (-8L), 0xCC0FL, 1L, 0xCC0FL, (-8L), 0x26A8L}, {(-1L), 0x26A8L, (-8L), 0xCC0FL, 1L, 0xCC0FL, (-8L), 0x26A8L}, {(-1L), 0x26A8L, (-8L), 0xCC0FL, 1L, 0xCC0FL, (-8L), 0x26A8L}, {(-1L), 0x26A8L, (-8L), 0xCC0FL, 1L, 0xCC0FL, (-8L), 0x26A8L}, {(-1L), 0x26A8L, (-8L), 0xCC0FL, 1L, 0xCC0FL, (-8L), 0x26A8L}, {(-1L), 0x26A8L, (-8L), 0xCC0FL, 1L, 0xCC0FL, (-8L), 0x26A8L}};
                        int i, j;
                        l_584[5][0] = (safe_lshift_func_int16_t_s_u(l_27[0], g_103));
                        return l_584[5][0];
                    }
                }
                return p_17;
            }
            else
            {
                (*g_445) = l_585;
                (*l_585) = ((void*)0 == (*g_445));
            }
        }
        return l_577;
    }
    (*g_127) = &p_17;
    return g_107;
}







static short func_25(short p_26)
{
    int *l_28 = &g_22;
    (*l_28) = g_7[5][2];
    if ((*l_28))
    {
        int * const l_34 = &g_10;
        int **l_496 = &g_128;
        int l_511 = (-7L);
        (**g_127) = func_29(p_26, l_28, l_34, (*l_28));
        for (g_22 = 0; (g_22 >= 2); g_22 = safe_add_func_int32_t_s_s(g_22, 3))
        {
            int *l_491 = &g_103;
            (*g_445) = l_491;
            for (g_138 = 0; (g_138 <= 2); g_138 += 1)
            {
                int **l_495 = &g_298;
                int l_501 = 0xBEE8C91DL;
                const int **l_514[4][7][8] = {{{(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}}, {{(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}}, {{(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}}, {{(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}, {(void*)0, &g_446[2][0], &g_446[2][0], &g_446[0][1], &g_446[2][0], &g_446[2][0], &g_446[2][0], (void*)0}}};
                unsigned char l_519 = 0xAAL;
                int i, j, k;
                if ((((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((&g_127 != &g_127))), p_26)) == (l_495 == l_496)) && (safe_lshift_func_int8_t_s_u(func_29(((*l_491) && p_26), l_491, (*g_127), p_26), g_7[4][6]))))
                {
                    int **l_510 = &l_28;
                    (*l_491) = (g_7[4][6] >= l_501);
                    if (p_26)
                    {
                        int *l_502 = &g_103;
                        int i, j;
                        if ((**g_127))
                            break;
                        g_446[(g_138 + 1)][g_138] = l_502;
                    }
                    else
                    {
                        int *** const l_509 = &l_496;
                        (*l_496) = (*l_496);
                        if ((**g_445))
                            break;
                        l_511 = (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(g_10, ((safe_rshift_func_uint8_t_u_s(func_60((*g_127), &g_446[3][1], p_26, g_103, (((void*)0 != l_509) ^ ((*l_509) == l_510))), 5)) < g_22))), (**l_510)));
                    }
                }
                else
                {
                    unsigned l_517 = 0x74E8C5AAL;
                    if (((~(safe_lshift_func_uint8_t_u_u(4UL, p_26))) == g_22))
                    {
                        (*l_491) = (*l_34);
                    }
                    else
                    {
                        (*l_491) = 0L;
                        return l_517;
                    }
                }
            }
        }
        for (p_26 = 0; (p_26 > 4); ++p_26)
        {
            (*g_128) = p_26;
        }
        (*l_496) = (*g_127);
    }
    else
    {
        short l_525 = 0x5989L;
        for (g_103 = 0; (g_103 == 10); g_103++)
        {
            char l_524 = 1L;
            unsigned short l_526[4] = {9UL, 65535UL, 9UL, 65535UL};
            int i;
            (*l_28) = (l_524 | (l_525 && (1UL || ((p_26 != p_26) < (**g_445)))));
            if (l_524)
                break;
            if (l_526[1])
                continue;
        }
    }
    return g_107;
}







static int func_29(unsigned long long p_30, int * p_31, int * const p_32, long long p_33)
{
    int l_331[10] = {0L, 0xFE8AFEDDL, 0L, 0xFE8AFEDDL, 0L, 0xFE8AFEDDL, 0L, 0xFE8AFEDDL, 0L, 0xFE8AFEDDL};
    int i;
    for (p_30 = (-10); (p_30 <= 56); p_30 = safe_add_func_uint16_t_u_u(p_30, 1))
    {
        unsigned short l_332 = 0x039DL;
        int ** const l_337 = &g_298;
        int l_343[7][10][3] = {{{0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}}, {{0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}}, {{0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}}, {{0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}}, {{0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}}, {{0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}}, {{0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}, {0xAAFD065CL, 3L, 0xA7125ED1L}}};
        short l_344 = 0x0BABL;
        int i, j, k;
    }
    return (*p_32);
}







static int * func_37(const int ** p_38, unsigned short p_39)
{
    unsigned char l_347 = 0xE8L;
    const int *l_351 = &g_103;
    const int **l_350 = &l_351;
    int ** const l_378 = &g_298;
    int l_393 = 0x62215BA4L;
    unsigned l_417 = 18446744073709551615UL;
    long long l_482 = 0x69BA88B05C5E7CFCLL;
    if ((safe_mul_func_int8_t_s_s(((l_347 | (((p_39 != 0x932CFC59L) & 0x45C2L) < (safe_mod_func_int8_t_s_s((l_347 && func_2(g_138, func_60((*g_127), l_350, ((**l_350) <= 0x63F2155C72C3D71FLL), g_7[4][6], (**l_350)), p_39, g_7[0][1])), g_107)))) >= l_347), 0x48L)))
    {
        int *** const l_368 = &g_127;
        int l_415 = (-10L);
        for (g_138 = (-5); (g_138 < 49); ++g_138)
        {
            char l_357 = 0x42L;
            int * const *l_386 = &g_128;
            int * const **l_385[10][1][9] = {{{&l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386}}, {{&l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386}}, {{&l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386}}, {{&l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386}}, {{&l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386}}, {{&l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386}}, {{&l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386}}, {{&l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386}}, {{&l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386}}, {{&l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386, &l_386}}};
            int ** const l_404 = &g_128;
            int i, j, k;
        }
        for (g_212 = 0; (g_212 > 19); g_212 = safe_add_func_int8_t_s_s(g_212, 9))
        {
            (*p_38) = (*g_127);
        }
        (*p_38) = (*p_38);
    }
    else
    {
        char l_429 = 0x47L;
        int l_459 = 0L;
        int *l_475 = &g_10;
        (*g_127) = (void*)0;
    }
    l_393 = (safe_sub_func_int64_t_s_s(func_52((**g_445), &g_298, g_7[4][6], (*g_127), p_39), (func_52((safe_lshift_func_uint16_t_u_u((l_482 >= g_10), 1)), &g_298, g_7[7][4], (*p_38), g_107) <= 4294967295UL)));
    return (*g_127);
}







static long long func_52(int p_53, int ** const p_54, long long p_55, const int * p_56, const short p_57)
{
    int l_340 = 0x1197ECB7L;
    p_53 = ((+(safe_add_func_uint32_t_u_u((g_212 > l_340), (safe_mul_func_uint16_t_u_u(p_53, l_340))))) & (((void*)0 != &g_128) <= p_55));
    return l_340;
}







static unsigned short func_60(int * p_61, const int ** p_62, short p_63, int p_64, char p_65)
{
    char l_333[1][6][9] = {{{(-8L), 0xE0L, 0xF7L, (-1L), 0x7DL, (-1L), 0x2CL, 0L, 0x2CL}, {(-8L), 0xE0L, 0xF7L, (-1L), 0x7DL, (-1L), 0x2CL, 0L, 0x2CL}, {(-8L), 0xE0L, 0xF7L, (-1L), 0x7DL, (-1L), 0x2CL, 0L, 0x2CL}, {(-8L), 0xE0L, 0xF7L, (-1L), 0x7DL, (-1L), 0x2CL, 0L, 0x2CL}, {(-8L), 0xE0L, 0xF7L, (-1L), 0x7DL, (-1L), 0x2CL, 0L, 0x2CL}, {(-8L), 0xE0L, 0xF7L, (-1L), 0x7DL, (-1L), 0x2CL, 0L, 0x2CL}}};
    const int *l_334 = &g_22;
    int i, j, k;
    (*g_127) = (*g_127);
    (*g_127) = (*g_127);
    (*p_62) = (*p_62);
    return g_22;
}







static int * func_66(char p_67)
{
    int *l_79 = &g_22;
    int **l_78 = &l_79;
    int l_80[4];
    short l_135[4] = {8L, 0x3C59L, 8L, 0x3C59L};
    int l_161 = 0xB29B62C0L;
    char l_225 = 1L;
    int *l_295 = &g_22;
    int i;
    for (i = 0; i < 4; i++)
        l_80[i] = 0L;
    if ((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(func_2((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_67, (p_67 > p_67))), 0x90L)), (l_78 != &l_79), (((func_2(l_80[0], g_10, func_2(p_67, p_67, (*l_79), p_67), g_10) <= 0xADDA102F310E27A8LL) | p_67) >= p_67), (**l_78)), g_22)), (*l_79))) ^ p_67), (**l_78))))
    {
        int **l_81 = &l_79;
        int ***l_82 = &l_78;
        unsigned l_102[7][7] = {{0UL, 0xC8613E18L, 0xE4B48400L, 0xC8613E18L, 0UL, 0x4835F01DL, 4294967286UL}, {0UL, 0xC8613E18L, 0xE4B48400L, 0xC8613E18L, 0UL, 0x4835F01DL, 4294967286UL}, {0UL, 0xC8613E18L, 0xE4B48400L, 0xC8613E18L, 0UL, 0x4835F01DL, 4294967286UL}, {0UL, 0xC8613E18L, 0xE4B48400L, 0xC8613E18L, 0UL, 0x4835F01DL, 4294967286UL}, {0UL, 0xC8613E18L, 0xE4B48400L, 0xC8613E18L, 0UL, 0x4835F01DL, 4294967286UL}, {0UL, 0xC8613E18L, 0xE4B48400L, 0xC8613E18L, 0UL, 0x4835F01DL, 4294967286UL}, {0UL, 0xC8613E18L, 0xE4B48400L, 0xC8613E18L, 0UL, 0x4835F01DL, 4294967286UL}};
        int *l_168 = &g_22;
        int i, j;
        (*l_82) = l_81;
        for (p_67 = 0; (p_67 < 22); p_67++)
        {
            int ** const l_101 = &l_79;
            unsigned char l_136 = 251UL;
            unsigned l_137[10] = {4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL};
            int i;
            for (g_22 = (-28); (g_22 != 19); ++g_22)
            {
                int * const *l_94 = (void*)0;
                int * const **l_93 = &l_94;
                if (((func_2(g_10, (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(func_2(((safe_add_func_int8_t_s_s((((l_93 == (void*)0) < 65535UL) == ((safe_rshift_func_int16_t_s_u((**l_78), g_7[3][7])) < ((((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((p_67 && (**l_78)), ((void*)0 != l_101))) ^ g_7[4][6]), p_67)) > g_7[2][2]) || (**l_81)) >= g_10))), g_7[2][2])) >= (-6L)), p_67, p_67, g_7[0][2]), 0x2EE06DCFL)), 1UL)), g_22, l_102[5][1]) | (**l_81)) | (**l_81)))
                {
                    int *l_106 = &g_22;
                    int *l_143 = &g_103;
                    (**l_82) = &g_22;
                    for (g_103 = 0; (g_103 >= 21); g_103++)
                    {
                        if ((**l_101))
                            break;
                        (**l_82) = l_106;
                        g_107 = g_7[4][6];
                    }
                    for (g_107 = 0; (g_107 <= 3); g_107 += 1)
                    {
                        int i, j;
                        g_103 = (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_102[(g_107 + 1)][g_107], l_80[g_107])), (safe_mul_func_int16_t_s_s(func_2(((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0x18L, (((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_80[g_107] ^ func_2(((l_101 == g_127) > (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((g_107 == l_80[g_107]), (safe_sub_func_int32_t_s_s((p_67 > l_80[g_107]), 0xB92564D2L)))), p_67))), l_80[g_107], (**l_101), g_10)), l_135[3])), g_7[5][1])) && p_67) >= 0L))), 1)), l_136)))), 3)) || l_137[8]), g_7[4][6], (**l_101), g_138), g_7[4][6]))));
                    }
                    (*l_143) = (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((&l_106 != &g_128), 4)), (***l_82)));
                }
                else
                {
                    short l_146 = 5L;
                    int l_149[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_149[i] = 0x075E556CL;
                    for (g_138 = 0; (g_138 != 35); g_138 = safe_add_func_int8_t_s_s(g_138, 1))
                    {
                        int l_150 = 0x9C8B3FF4L;
                        if ((*g_128))
                            break;
                        l_146 = func_2((**l_101), p_67, p_67, g_22);
                        l_149[2] = (safe_mod_func_int8_t_s_s((g_7[2][6] >= 4UL), (0xC4L || ((*l_93) != (void*)0))));
                        l_150 = 0x350E5C28L;
                    }
                    (**l_82) = &l_149[2];
                    (*l_101) = (*l_81);
                    (*l_79) = (func_2(((p_67 == p_67) && g_10), (((**g_127) & p_67) & (((*l_93) != (void*)0) > func_2((*l_79), p_67, (*l_79), g_22))), g_7[4][6], (**l_101)) != (**g_127));
                }
                l_161 = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_107, 4)), (safe_rshift_func_uint16_t_u_u(((0x337B5B8CCF7814A7LL != 0xFE7F9DC645B2A3AALL) ^ (g_7[4][6] >= (safe_sub_func_uint8_t_u_u(g_22, (safe_sub_func_int64_t_s_s((+((void*)0 != &g_127)), ((void*)0 != &g_127))))))), 1))));
                (*l_101) = (*g_127);
            }
            for (g_22 = (-12); (g_22 == 5); ++g_22)
            {
                unsigned l_166 = 0x352AAD8DL;
                int *l_167 = &l_161;
                if (func_2((safe_mul_func_uint8_t_u_u(p_67, (p_67 && 0x622EL))), func_2(((((p_67 <= (**l_101)) != p_67) && 0xE8A1L) && ((g_107 ^ g_138) <= l_166)), (***l_82), p_67, g_22), g_103, g_7[4][6]))
                {
                    (*l_78) = (*g_127);
                    return l_168;
                }
                else
                {
                    (*l_167) = ((safe_mul_func_int16_t_s_s((p_67 || 0x66C7B7FCL), (*l_167))) & 0L);
                }
                if ((*l_167))
                    continue;
            }
        }
        (*l_78) = (*l_81);
        return (*g_127);
    }
    else
    {
        int *l_183 = (void*)0;
        int *l_221 = &g_10;
        int ** const *l_276 = &l_78;
        if ((0x72B2CC4BL >= (g_138 == (g_138 > (**l_78)))))
        {
            int ***l_179 = &l_78;
            int *** const l_238 = &l_78;
            int *l_242 = &g_22;
            for (g_22 = 3; (g_22 >= 0); g_22 -= 1)
            {
                int l_180 = 0xB91D3D6DL;
                short l_181[8][6] = {{0x651DL, 0xF8B7L, 0x2397L, 0xF8B7L, 0x651DL, (-10L)}, {0x651DL, 0xF8B7L, 0x2397L, 0xF8B7L, 0x651DL, (-10L)}, {0x651DL, 0xF8B7L, 0x2397L, 0xF8B7L, 0x651DL, (-10L)}, {0x651DL, 0xF8B7L, 0x2397L, 0xF8B7L, 0x651DL, (-10L)}, {0x651DL, 0xF8B7L, 0x2397L, 0xF8B7L, 0x651DL, (-10L)}, {0x651DL, 0xF8B7L, 0x2397L, 0xF8B7L, 0x651DL, (-10L)}, {0x651DL, 0xF8B7L, 0x2397L, 0xF8B7L, 0x651DL, (-10L)}, {0x651DL, 0xF8B7L, 0x2397L, 0xF8B7L, 0x651DL, (-10L)}};
                int *l_182 = &l_180;
                int i, j;
                (*l_182) = (safe_add_func_int32_t_s_s(func_2((safe_lshift_func_uint8_t_u_u(((g_138 & func_2((safe_rshift_func_uint16_t_u_u(p_67, g_103)), ((*l_79) > 0x5D27L), (safe_lshift_func_uint16_t_u_u(((void*)0 != l_179), ((void*)0 != &g_127))), l_180)) ^ p_67), 5)), g_138, p_67, l_181[1][5]), (**l_78)));
                (**l_179) = (void*)0;
                (**l_179) = (*g_127);
            }
            (**l_179) = l_183;
            if (p_67)
            {
                int l_194[3];
                unsigned long long l_207[7][6] = {{1UL, 18446744073709551615UL, 0UL, 6UL, 0xAD5033BB9946DB04LL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 6UL, 0xAD5033BB9946DB04LL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 6UL, 0xAD5033BB9946DB04LL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 6UL, 0xAD5033BB9946DB04LL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 6UL, 0xAD5033BB9946DB04LL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 6UL, 0xAD5033BB9946DB04LL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 6UL, 0xAD5033BB9946DB04LL, 18446744073709551615UL}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_194[i] = 0x3B9AFEEBL;
                for (p_67 = (-27); (p_67 > (-12)); ++p_67)
                {
                    for (g_138 = 0; (g_138 >= 23); ++g_138)
                    {
                        int *l_188 = &g_22;
                        (*g_127) = l_188;
                    }
                }
                for (g_22 = 3; (g_22 >= 0); g_22 -= 1)
                {
                    int *l_197 = &l_194[0];
                    int i;
                    (*g_127) = (*g_127);
                    (*l_197) = ((safe_add_func_int16_t_s_s((func_2((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((l_135[g_22] | l_135[g_22]))), 0UL)), g_7[3][3], l_194[2], p_67) != func_2(((safe_mul_func_uint8_t_u_u(p_67, g_7[4][6])) > p_67), l_135[g_22], l_135[g_22], p_67)), 1L)) >= p_67);
                    (*l_197) = p_67;
                    (*l_197) = func_2(g_10, (safe_mod_func_int64_t_s_s(g_10, ((safe_lshift_func_int8_t_s_u(g_7[5][1], (safe_add_func_int16_t_s_s(((void*)0 != (*g_127)), (p_67 == (((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(g_107)), ((l_207[3][4] | 0x4BBD00C7L) > p_67))) != l_194[2]) | (-1L))))))) || g_103))), (*l_197), g_10);
                }
                for (g_138 = 0; (g_138 > 48); ++g_138)
                {
                    if (p_67)
                    {
                        (*l_78) = (*l_78);
                        if ((**g_127))
                            continue;
                        if ((**g_127))
                            break;
                    }
                    else
                    {
                        char l_222 = 0L;
                        if ((*g_128))
                            break;
                        l_222 = (safe_mul_func_uint8_t_u_u((((p_67 > p_67) == func_2(g_22, g_212, g_103, g_212)) <= (safe_sub_func_uint64_t_u_u(((255UL < ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((func_2(((void*)0 == l_221), g_10, g_107, p_67) & 0x0D45AA9DL) | p_67), 2)), 4)) == g_10)) < 0UL), 18446744073709551609UL))), 0xC3L));
                        (**l_179) = (*l_78);
                    }
                    return l_221;
                }
            }
            else
            {
                unsigned l_226 = 0UL;
                int l_239 = 0L;
                for (g_22 = 14; (g_22 != (-4)); --g_22)
                {
                    (*g_127) = (void*)0;
                }
                if (l_225)
                {
                    int *l_227[8][9][2] = {{{&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}}, {{&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}}, {{&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}}, {{&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}}, {{&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}}, {{&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}}, {{&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}}, {{&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}, {&g_103, &l_161}}};
                    int i, j, k;
                    if ((!3L))
                    {
                        l_226 = p_67;
                        if (g_212)
                            goto lbl_229;
                        l_227[7][7][0] = (*g_127);
                    }
                    else
                    {
                        int l_228 = 0x239324AFL;
                        g_103 = l_228;
                        (*l_78) = (*g_127);
                    }
lbl_229:
                    (*g_127) = (*g_127);
                    for (g_138 = 0; (g_138 >= 39); g_138 = safe_add_func_int16_t_s_s(g_138, 7))
                    {
                        (*l_78) = l_183;
                        l_239 = (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_138, g_103)), (((safe_rshift_func_int16_t_s_s((func_2(p_67, g_107, p_67, (l_238 == &g_127)) == (((void*)0 != &g_127) | 6UL)), 5)) || 1L) < 7L)));
                        (**l_179) = (void*)0;
                        return (*g_127);
                    }
                    for (l_225 = 17; (l_225 <= (-8)); l_225 = safe_sub_func_uint16_t_u_u(l_225, 6))
                    {
                        l_239 = func_2(g_107, p_67, g_7[4][6], g_212);
                    }
                }
                else
                {
                    int *l_243 = &g_22;
                    (*l_78) = (*g_127);
                    l_243 = l_242;
                    (*l_242) = (+(safe_rshift_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((g_22 <= (safe_lshift_func_uint16_t_u_u(((*l_243) || (p_67 >= 65532UL)), (g_138 > (safe_sub_func_uint16_t_u_u(0xA91DL, (safe_lshift_func_int16_t_s_u((l_183 == (*g_127)), 13)))))))), ((safe_mod_func_uint32_t_u_u(0x0201380AL, (-1L))) >= (*l_242)))) <= 4294967293UL) || p_67), l_239)));
                }
            }
        }
        else
        {
            int *l_256 = &g_103;
            for (l_161 = 3; (l_161 >= 0); l_161 -= 1)
            {
                long long l_272 = (-4L);
                int l_275 = (-1L);
                int l_293 = 0L;
                for (l_225 = 3; (l_225 >= 0); l_225 -= 1)
                {
                    int *l_257 = &g_22;
                    int i;
                    l_256 = l_221;
                }
                for (p_67 = 0; (p_67 <= 3); p_67 += 1)
                {
                    int i;
                    (*g_127) = (*g_127);
                    if (l_80[l_161])
                        break;
                    if (p_67)
                        continue;
                }
                if (p_67)
                    continue;
                for (g_103 = 0; (g_103 <= 3); g_103 += 1)
                {
                    char l_292 = 0x49L;
                    int *l_294 = &l_293;
                    (*l_78) = (void*)0;
                    if (((safe_rshift_func_int16_t_s_u((g_7[4][2] && (safe_unary_minus_func_int32_t_s((0x5CC423A4L <= 0x8C7C72AEL)))), func_2(g_107, (*l_256), g_212, ((void*)0 == &g_128)))) >= (-1L)))
                    {
                        unsigned short l_291 = 0x6EA2L;
                        (*g_128) = (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((l_272 > 0x176354BEL))), (safe_rshift_func_int8_t_s_s(l_275, 5))));
                        (*g_128) = (&g_127 == l_276);
                        (*g_127) = (*g_127);
                        (*g_128) = (safe_mul_func_uint8_t_u_u(g_22, (0xE0L ^ (func_2(p_67, (safe_add_func_int8_t_s_s(l_275, (safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(func_2((*l_256), (!(((0L | (0L || ((g_10 == (safe_mul_func_int8_t_s_s((g_212 ^ l_291), p_67))) > 0x2EDE274A18556120LL))) ^ (-9L)) >= 0xCDL)), p_67, l_292), g_10)), (*g_128))) > 0UL), p_67)) || g_7[6][0]) && g_7[4][0]), l_292)))), g_107, g_10) || g_10))));
                    }
                    else
                    {
                        if (l_293)
                            break;
                        (**g_127) = (func_2(l_293, (l_294 == (*g_127)), ((p_67 > (g_10 ^ func_2((((0x78L != (p_67 && g_7[4][6])) || g_103) <= g_138), (*l_294), g_107, l_293))) & 65533UL), g_10) >= 0x7DL);
                        if ((*g_128))
                            continue;
                    }
                    for (g_212 = 0; (g_212 <= 3); g_212 += 1)
                    {
                        (**l_276) = &l_293;
                        (*g_128) = (*l_256);
                    }
                    for (g_138 = 0; (g_138 <= 3); g_138 += 1)
                    {
                        (*g_127) = (void*)0;
                        (*l_78) = l_294;
                        return (*g_127);
                    }
                }
            }
        }
        l_295 = l_183;
        for (g_103 = 0; (g_103 != (-8)); g_103 = safe_sub_func_int32_t_s_s(g_103, 3))
        {
            unsigned l_299 = 7UL;
            int *l_304 = &g_103;
            for (g_22 = 0; (g_22 <= 3); g_22 += 1)
            {
                unsigned char l_300[6] = {0x16L, 0x16L, 2UL, 0x16L, 0x16L, 2UL};
                int *l_301 = (void*)0;
                int l_320 = 0xAF9B30A4L;
                int i;
                for (g_107 = 0; (g_107 <= 3); g_107 += 1)
                {
                    int l_312 = (-5L);
                    for (p_67 = 3; (p_67 >= 0); p_67 -= 1)
                    {
                        (**l_276) = g_298;
                        l_299 = 4L;
                        if (g_107)
                            continue;
                    }
                    l_300[5] = p_67;
                    for (p_67 = 0; (p_67 <= 5); p_67 += 1)
                    {
                        (*g_127) = (*g_127);
                        return l_301;
                    }
                    if ((safe_lshift_func_int8_t_s_u(p_67, 6)))
                    {
                        (*g_127) = (void*)0;
                        (*l_78) = l_304;
                    }
                    else
                    {
                        int l_311 = 0L;
                        int *l_313 = &l_161;
                        (*l_78) = (*g_127);
                        (*l_313) = (func_2(g_7[0][0], (p_67 || p_67), p_67, g_7[4][6]) && (g_107 | ((safe_mul_func_int16_t_s_s(p_67, func_2((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((*l_304) <= 0x983931C9L), g_7[4][6])), 6)), l_311, p_67, l_312))) > p_67)));
                        (*l_78) = (*g_127);
                        l_320 = (safe_sub_func_uint16_t_u_u((*l_221), (safe_sub_func_int8_t_s_s((*l_313), (safe_rshift_func_uint8_t_u_u(p_67, g_22))))));
                    }
                }
                return l_304;
            }
        }
        l_161 = ((safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(0xFF7F3B6EE343D5BDLL, (((g_107 >= (func_2(p_67, g_10, g_103, ((~(((6UL != ((func_2(((*l_221) > g_10), (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((0x9EL != 0x61L), 4294967289UL)), g_10)), g_7[4][6], p_67) == 1L) >= g_138)) == (*l_221)) > g_22)) == (-1L))) <= 0L)) == g_7[1][3]) < g_7[4][6]))), p_67)) || p_67);
    }
    (*g_127) = (*g_127);
    return (*g_127);
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
