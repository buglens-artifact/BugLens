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



static volatile int g_5[7] = {0x34BF8F0AL, 0x34BF8F0AL, 0x4C8D3C89L, 0x34BF8F0AL, 0x34BF8F0AL, 0x4C8D3C89L, 0x34BF8F0AL};
static int g_51[1][9] = {{0x639E6A41L, 0x639E6A41L, (-1L), 0x639E6A41L, 0x639E6A41L, (-1L), 0x639E6A41L, 0x639E6A41L, (-1L)}};
static int *g_50 = &g_51[0][4];
static int g_166 = (-8L);
static volatile int g_310 = 0x229954B3L;
static volatile int *g_309 = &g_310;
static volatile int **g_308[8] = {&g_309, &g_309, &g_309, &g_309, &g_309, &g_309, &g_309, &g_309};
static volatile int ***g_307 = &g_308[1];
static int **g_316 = (void*)0;
static int ***g_315 = &g_316;
static volatile int g_566 = (-6L);
static int *g_739 = &g_166;
static int *g_779[5][5][5] = {{{&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}}, {{&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}}, {{&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}}, {{&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}}, {{&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}, {&g_166, &g_166, &g_166, &g_166, &g_166}}};
static unsigned char g_786 = 0x0BL;
static int g_854[3][3][2] = {{{0xB9EEABE5L, 0x8BA168CDL}, {0xB9EEABE5L, 0x8BA168CDL}, {0xB9EEABE5L, 0x8BA168CDL}}, {{0xB9EEABE5L, 0x8BA168CDL}, {0xB9EEABE5L, 0x8BA168CDL}, {0xB9EEABE5L, 0x8BA168CDL}}, {{0xB9EEABE5L, 0x8BA168CDL}, {0xB9EEABE5L, 0x8BA168CDL}, {0xB9EEABE5L, 0x8BA168CDL}}};
static unsigned long long g_927[2][5][2] = {{{0x75DFC2179EAAF657LL, 18446744073709551615UL}, {0x75DFC2179EAAF657LL, 18446744073709551615UL}, {0x75DFC2179EAAF657LL, 18446744073709551615UL}, {0x75DFC2179EAAF657LL, 18446744073709551615UL}, {0x75DFC2179EAAF657LL, 18446744073709551615UL}}, {{0x75DFC2179EAAF657LL, 18446744073709551615UL}, {0x75DFC2179EAAF657LL, 18446744073709551615UL}, {0x75DFC2179EAAF657LL, 18446744073709551615UL}, {0x75DFC2179EAAF657LL, 18446744073709551615UL}, {0x75DFC2179EAAF657LL, 18446744073709551615UL}}};
static unsigned char g_938 = 0UL;
static unsigned g_945 = 4294967293UL;
static unsigned char g_1009[4][8][3] = {{{0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}}, {{0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}}, {{0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}}, {{0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}, {0x9CL, 0xFFL, 0UL}}};
static unsigned char g_1209 = 0x6BL;
static int *g_1433 = &g_854[2][2][1];
static int *g_1566[5][8][6] = {{{&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}}, {{&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}}, {{&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}}, {{&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}}, {{&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}, {&g_166, &g_51[0][4], &g_854[2][2][1], &g_854[2][0][1], &g_854[0][0][1], (void*)0}}};
static unsigned short g_1567 = 0x785EL;
static int *g_1576 = (void*)0;
static volatile short g_1637 = 0x2C76L;
static int *g_1706 = &g_166;
static int g_1921 = 0x5F0BA61CL;
static int *g_1941 = (void*)0;
static volatile unsigned g_2030 = 0x88649AFFL;
static volatile int *g_2051[4] = {&g_566, &g_566, &g_566, &g_566};
static int *g_2133 = &g_51[0][1];
static volatile int **g_2165[8][2] = {{&g_2051[0], (void*)0}, {&g_2051[0], (void*)0}, {&g_2051[0], (void*)0}, {&g_2051[0], (void*)0}, {&g_2051[0], (void*)0}, {&g_2051[0], (void*)0}, {&g_2051[0], (void*)0}, {&g_2051[0], (void*)0}};
static int g_2219 = 0L;
static int *g_2241 = &g_854[2][2][1];
static long long g_2261 = 4L;
static unsigned g_2367 = 0x664933B0L;



static char func_1(void);
static unsigned char func_3(char p_4);
static int * func_8(int * p_9, unsigned long long p_10, unsigned short p_11);
static int * func_12(int * p_13, unsigned p_14, unsigned p_15);
static int * func_16(int * p_17, int * p_18, int * p_19, int * p_20, long long p_21);
static int * func_22(int * p_23, int p_24, int * p_25, unsigned char p_26);
static int * func_27(int * p_28, int * p_29, unsigned long long p_30, int * p_31, unsigned short p_32);
static int * func_34(unsigned long long p_35, unsigned short p_36, int p_37, int * p_38, int * p_39);
static int func_40(int * p_41, short p_42, unsigned short p_43);
static int * func_44(int * p_45, int * p_46, unsigned p_47, int * p_48, int * p_49);
static char func_1(void)
{
    char l_2 = 6L;
    int *l_1940 = &g_854[2][0][1];
    unsigned l_1942 = 1UL;
    long long l_1947 = 0x18AE20408F55CCA2LL;
    unsigned long long l_1950[6] = {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL};
    int l_1984[5] = {(-10L), 0x7EB2C06EL, (-10L), 0x7EB2C06EL, (-10L)};
    unsigned char l_1998[2];
    unsigned l_2110[5] = {0xC4FBB7F4L, 0x7F359A12L, 0xC4FBB7F4L, 0x7F359A12L, 0xC4FBB7F4L};
    unsigned l_2111[3];
    int *l_2120 = &g_51[0][5];
    int *l_2125 = &g_51[0][4];
    unsigned short l_2146 = 3UL;
    int **l_2152[1];
    int *l_2171[9][7][4] = {{{&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}}, {{&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}}, {{&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}}, {{&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}}, {{&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}}, {{&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}}, {{&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}}, {{&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}}, {{&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}, {&g_51[0][4], &g_854[2][2][1], &g_854[1][2][0], &g_854[1][0][1]}}};
    short l_2190[1];
    unsigned l_2199[6][7][3] = {{{0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}}, {{0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}}, {{0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}}, {{0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}}, {{0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}}, {{0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}, {0x4DE94C89L, 0x9A725E6FL, 0UL}}};
    int *l_2264[9];
    unsigned l_2271 = 1UL;
    unsigned l_2279 = 4294967288UL;
    unsigned l_2317 = 1UL;
    short l_2344 = 0x5CBEL;
    int *l_2348 = &g_854[2][2][1];
    unsigned l_2351 = 0xAAB44547L;
    unsigned char l_2370 = 1UL;
    int l_2411 = 0x47BBCC76L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1998[i] = 0x69L;
    for (i = 0; i < 3; i++)
        l_2111[i] = 0xCFF42703L;
    for (i = 0; i < 1; i++)
        l_2152[i] = &g_1566[0][4][3];
    for (i = 0; i < 1; i++)
        l_2190[i] = 0x0DCDL;
    for (i = 0; i < 9; i++)
        l_2264[i] = &g_854[2][1][0];
    if ((((l_2 == func_3((l_2 == g_5[4]))) , 0xA57C9E6FL) <= (func_40((((0x31BAD75FL >= ((safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s((+((safe_add_func_int8_t_s_s(func_40(l_1940, g_927[0][4][0], g_166), l_1942)) ^ g_1921)), g_1009[2][2][2])), g_1009[2][2][2])) != g_1009[2][2][2])) , (*l_1940)) , (void*)0), g_945, (*l_1940)) && 0x99EBL)))
    {
        unsigned long long l_1957[5][3][7] = {{{0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}, {0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}, {0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}}, {{0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}, {0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}, {0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}}, {{0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}, {0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}, {0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}}, {{0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}, {0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}, {0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}}, {{0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}, {0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}, {0xB189FA21B21F601BLL, 0xAF7C8C3F2A79710ALL, 0xF965EA084FF41F38LL, 0xAF7C8C3F2A79710ALL, 0xB189FA21B21F601BLL, 0xB34F5BA9AB3120A3LL, 0x089F4E948A093E48LL}}};
        int *l_1963[1][10] = {{&g_854[0][0][1], &g_854[2][2][1], &g_854[0][0][1], &g_854[2][2][1], &g_854[0][0][1], &g_854[2][2][1], &g_854[0][0][1], &g_854[2][2][1], &g_854[0][0][1], &g_854[2][2][1]}};
        int *l_2053 = &g_854[0][2][1];
        int *l_2054 = (void*)0;
        unsigned short l_2096 = 65535UL;
        unsigned long long l_2122 = 1UL;
        int *l_2124 = &g_51[0][3];
        int ***l_2136 = &g_316;
        int *l_2153 = &g_51[0][4];
        unsigned l_2159[3][3][3] = {{{0UL, 0xA4CD4942L, 18446744073709551614UL}, {0UL, 0xA4CD4942L, 18446744073709551614UL}, {0UL, 0xA4CD4942L, 18446744073709551614UL}}, {{0UL, 0xA4CD4942L, 18446744073709551614UL}, {0UL, 0xA4CD4942L, 18446744073709551614UL}, {0UL, 0xA4CD4942L, 18446744073709551614UL}}, {{0UL, 0xA4CD4942L, 18446744073709551614UL}, {0UL, 0xA4CD4942L, 18446744073709551614UL}, {0UL, 0xA4CD4942L, 18446744073709551614UL}}};
        unsigned short l_2237 = 0x39F2L;
        int i, j, k;
        if ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_310 , l_1947), (safe_mul_func_uint16_t_u_u(5UL, g_51[0][3])))), (l_1950[5] & (g_1921 , ((((g_786 <= (safe_mod_func_uint8_t_u_u(((g_51[0][0] , (((safe_mul_func_uint8_t_u_u(((-1L) | g_854[2][2][0]), g_927[0][1][1])) < g_927[1][4][0]) || 5L)) , g_854[2][2][1]), 1L))) , 6UL) , 0L) == l_1957[1][2][5]))))))
        {
            int *l_1958 = (void*)0;
            int **l_1959 = &g_1566[1][3][3];
            char l_1967 = 3L;
            unsigned l_1979 = 0x2C07E61CL;
            int *l_2067 = (void*)0;
            unsigned l_2069 = 0x676F4630L;
            int *l_2073[9] = {&g_51[0][7], (void*)0, &g_51[0][7], (void*)0, &g_51[0][7], (void*)0, &g_51[0][7], (void*)0, &g_51[0][7]};
            int *l_2123 = &g_854[2][2][1];
            int i;
lbl_2052:
            (*l_1959) = l_1958;
            if ((l_1957[1][2][5] ^ func_3(g_1921)))
            {
                int *l_1960 = &g_51[0][7];
                if (func_3(g_5[1]))
                {
                    int *l_1964 = &g_51[0][7];
                    (*l_1960) = func_3((l_1960 == (*l_1959)));
                    (*l_1959) = l_1960;
                }
                else
                {
                    return g_938;
                }
            }
            else
            {
                long long l_1974 = (-1L);
                int *l_1975 = &g_51[0][4];
                unsigned l_1978 = 18446744073709551612UL;
                int *l_1991[5][6] = {{&g_854[2][2][1], &g_51[0][4], &g_51[0][4], &g_51[0][4], &g_51[0][4], &g_51[0][4]}, {&g_854[2][2][1], &g_51[0][4], &g_51[0][4], &g_51[0][4], &g_51[0][4], &g_51[0][4]}, {&g_854[2][2][1], &g_51[0][4], &g_51[0][4], &g_51[0][4], &g_51[0][4], &g_51[0][4]}, {&g_854[2][2][1], &g_51[0][4], &g_51[0][4], &g_51[0][4], &g_51[0][4], &g_51[0][4]}, {&g_854[2][2][1], &g_51[0][4], &g_51[0][4], &g_51[0][4], &g_51[0][4], &g_51[0][4]}};
                long long l_2005 = 0x8E6F9B5142DB11BCLL;
                int i, j;
                (*l_1975) = (((((safe_rshift_func_int8_t_s_u((65535UL != g_854[0][2][1]), l_1967)) <= (safe_mod_func_int32_t_s_s((safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(((l_1974 || g_1009[2][2][2]) || l_1974), func_40(l_1975, g_786, (((safe_sub_func_int64_t_s_s(g_1567, g_166)) < g_5[3]) && g_566)))) , 8L), 18446744073709551606UL)), l_1978))) > l_1979) , g_566) || g_1567);
                if (((2UL && (((g_1009[0][1][2] , 253UL) | 9L) ^ (g_854[1][1][1] >= func_3(g_854[2][2][1])))) <= func_40(func_22((((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(func_40(l_1940, g_1209, g_1921), g_927[0][4][0])), g_854[0][1][1])) ^ (*g_739)) , (void*)0), g_938, l_1963[0][5], l_1984[1]), g_854[2][2][1], g_786)))
                {
                    (*g_1706) = ((~((-10L) || (((safe_rshift_func_int16_t_s_u(func_40(l_1940, ((&l_1963[0][9] != (*g_307)) >= ((safe_sub_func_uint8_t_u_u((((*l_1975) , (safe_mul_func_int8_t_s_s((g_854[0][0][0] , func_40(l_1991[2][5], ((safe_rshift_func_uint8_t_u_s((((((0xF2849B85L && (*g_309)) , (*l_1940)) , (void*)0) == (void*)0) < g_51[0][4]), g_1009[2][2][2])) < g_1567), g_938)), g_1567))) , g_1209), 249UL)) & g_1209)), g_1009[1][6][1]), 10)) > 1UL) , g_1209))) & 65534UL);
                    for (g_938 = 0; (g_938 <= 54); g_938++)
                    {
                        return g_166;
                    }
                    (*l_1940) = ((((!(safe_rshift_func_uint16_t_u_s(g_854[2][1][1], ((g_1009[1][4][1] , g_945) , l_1998[1])))) || (safe_mul_func_int16_t_s_s((g_1637 >= (*l_1940)), (g_1009[2][2][2] , 1L)))) || (0x9D1DL != g_566)) && 0x33L);
                }
                else
                {
                    for (g_1567 = 0; (g_1567 != 25); g_1567++)
                    {
                        return g_1009[0][1][0];
                    }
                }
                (*l_1940) = (*l_1975);
                (*g_739) = (safe_mul_func_uint8_t_u_u((l_2005 <= 0x1062L), 255UL));
            }
            if ((*l_1940))
            {
                int *l_2006[5];
                int l_2031 = 0xFA10887CL;
                int ***l_2072 = &g_316;
                unsigned l_2103 = 3UL;
                int i;
                for (i = 0; i < 5; i++)
                    l_2006[i] = &g_51[0][3];
                (*l_1959) = l_2006[1];
            }
            else
            {
                unsigned char l_2131[2][2][10] = {{{255UL, 248UL, 255UL, 248UL, 255UL, 248UL, 255UL, 248UL, 255UL, 248UL}, {255UL, 248UL, 255UL, 248UL, 255UL, 248UL, 255UL, 248UL, 255UL, 248UL}}, {{255UL, 248UL, 255UL, 248UL, 255UL, 248UL, 255UL, 248UL, 255UL, 248UL}, {255UL, 248UL, 255UL, 248UL, 255UL, 248UL, 255UL, 248UL, 255UL, 248UL}}};
                int *l_2132 = &g_51[0][5];
                int i, j, k;
                for (l_2122 = 1; (l_2122 <= 4); l_2122 += 1)
                {
                    int *l_2128 = &g_854[2][2][0];
                    int ***l_2137[7] = {&g_316, &g_316, &g_316, &g_316, &g_316, &g_316, &g_316};
                    int **l_2145 = &l_1958;
                    int i;
                    if ((((l_2128 != (*l_1959)) < (***g_307)) > (((safe_mul_func_int16_t_s_s((l_2131[1][0][8] && ((*l_2124) || ((*l_2123) , g_51[0][8]))), ((((l_2131[1][0][8] & (((void*)0 == &g_308[5]) ^ (*l_2125))) >= g_166) || g_927[0][4][0]) ^ 0x99L))) , (*l_2120)) , (*g_1706))))
                    {
                        (*l_1959) = func_27(l_1963[0][0], l_1940, ((**g_307) != (void*)0), l_2132, (g_2133 != ((safe_add_func_int32_t_s_s(((func_3((*l_2132)) , l_2136) != l_2137[2]), 0xA5C4F2F5L)) , l_2132)));
                    }
                    else
                    {
                        unsigned long long l_2142 = 3UL;
                        (*l_2128) = (safe_add_func_int8_t_s_s(g_786, g_51[0][3]));
                        (*l_2124) = (safe_add_func_uint8_t_u_u((&l_2132 != (((l_2142 , g_166) ^ (safe_lshift_func_uint8_t_u_s((l_2142 >= func_3((g_854[2][2][1] , (((*l_2053) , (*g_307)) == (void*)0)))), g_854[2][2][0]))) , l_2145)), g_1921));
                        (*g_309) = l_2146;
                    }
                    for (l_2146 = 0; (l_2146 <= 1); l_2146 += 1)
                    {
                        int i;
                        (*l_2125) = l_1998[l_2146];
                        g_779[3][0][1] = (*l_1959);
                    }
                }


                return (*l_2132);
            }
            if (l_1979)
                goto lbl_2052;
        }
        else
        {
            int *l_2149 = &g_854[0][1][0];
            char l_2158 = 0x59L;
            int *l_2182 = &g_854[2][2][1];
            int *l_2193 = &g_854[1][2][0];
            unsigned char l_2257 = 1UL;
            for (g_1567 = 0; (g_1567 <= 4); g_1567 += 1)
            {
                int i;
                (***g_307) = (l_1950[g_1567] <= l_1984[g_1567]);
                if ((*g_309))
                    continue;
            }
            if ((safe_lshift_func_int16_t_s_u(func_40(func_27(l_2149, l_1940, (safe_mul_func_int16_t_s_s(g_1009[2][2][2], (l_2152[0] == (((g_938 == g_1637) , (((*l_2124) , l_2136) == (void*)0)) , (void*)0)))), l_2153, (*l_2149)), g_1921, g_938), g_927[0][4][0])))
            {
                int **l_2162 = &g_2133;
                int **l_2189 = &l_1963[0][6];
                unsigned l_2191[3][4][6] = {{{0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}, {0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}, {0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}, {0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}}, {{0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}, {0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}, {0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}, {0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}}, {{0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}, {0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}, {0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}, {0xD96D95FFL, 0xCC302F64L, 1UL, 0xB99ADBD7L, 0xA0130922L, 0x9E9AA08BL}}};
                int i, j, k;
                if (((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((((g_51[0][6] , g_1009[0][0][2]) <= ((0x37754C0D22BE5E26LL || func_3(l_2158)) <= (*l_2153))) & (((l_2159[0][1][2] >= (safe_add_func_int8_t_s_s(g_166, (l_2162 != &l_1940)))) , g_945) , g_1009[0][3][2])) <= (-1L)), (**l_2162))), g_1567)) ^ (**l_2162)))
                {
                    unsigned long long l_2176 = 0UL;
                    int *l_2183 = &g_166;
                    unsigned char l_2192 = 0x05L;
                    int **l_2194 = &l_2171[1][6][0];
                    for (l_2 = 0; (l_2 <= 17); l_2 = safe_add_func_int16_t_s_s(l_2, 2))
                    {
                        long long l_2170 = 0xE3A1466A0411C86BLL;
                        (*l_2125) = ((g_927[0][4][0] , ((void*)0 != g_2165[2][1])) , ((*g_307) != &l_2120));
                        (*l_1940) = (g_938 , ((((((safe_mod_func_uint32_t_u_u(func_3(g_166), (g_1567 || (((((0xCDEBL && (safe_rshift_func_uint16_t_u_s(0UL, g_1209))) , g_927[1][1][1]) <= 0xFBBAL) == g_938) , g_786)))) , &g_308[1]) == (void*)0) <= g_1921) > 0L) ^ l_2170));
                        (*l_2162) = l_2171[1][6][0];

                        ;
                        return g_566;
                    }
                    if ((!((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(func_3((18446744073709551614UL ^ ((((&g_308[5] != (void*)0) >= ((((g_1921 , func_12((*l_2162), g_566, (*l_1940))) != ((g_1009[2][1][1] >= g_1209) , (void*)0)) | 1UL) > 0xB741D221L)) , g_854[2][2][1]) <= g_854[2][2][1]))), g_1009[2][2][2])) == 0xE9993CBD2EE514DALL), 255UL)) <= l_2176)))
                    {
                        unsigned l_2179 = 0x99F2ADBEL;
                        int *l_2180[2][4] = {{&g_854[0][1][0], (void*)0, &g_854[0][1][0], (void*)0}, {&g_854[0][1][0], (void*)0, &g_854[0][1][0], (void*)0}};
                        long long l_2181 = 0x6A69D1A7C047C511LL;
                        int i, j;
                        (*g_1433) = (safe_mul_func_int8_t_s_s((g_1209 <= l_2179), (l_2179 <= 0x57L)));
                        (*l_2136) = &l_1940;

                        ;
                        (**l_2136) = l_2183;

                        ;
                    }
                    else
                    {
                        unsigned l_2188 = 0xC8282892L;
                        (*g_2133) = ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((+(l_2188 >= func_40((g_1009[2][2][2] , l_2182), (g_927[0][4][0] , 0x8ECFL), ((((*l_2162) != (*l_2162)) , (((l_2189 != ((((((!l_2190[0]) >= l_2191[0][1][0]) <= g_1567) , 0x0CD2L) ^ (*l_1940)) , (void*)0)) <= (*l_2182)) <= 0xA9L)) , 0x19A8L)))), 1UL)), l_2188)) , (*g_1706));
                        (*l_2053) = (-9L);
                        (*g_1433) = l_2192;
                    }



                    ;
                    (*g_739) = func_40(l_2193, (**l_2162), ((g_51[0][2] , l_2189) != l_2194));
                }
                else
                {
                    unsigned long long l_2210 = 18446744073709551612UL;
                    (*l_2120) = (safe_mul_func_int8_t_s_s(func_40((((safe_lshift_func_uint8_t_u_s((0x4567EDCCD7B2C775LL | ((~(l_2199[1][4][2] , ((*l_2124) == (func_3(g_786) && (safe_sub_func_int8_t_s_s((((~(g_166 , (safe_mod_func_uint16_t_u_u(((!(func_3((safe_add_func_int8_t_s_s(0xCEL, (((((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_5[5], 7)), ((g_51[0][8] & (**l_2162)) , g_854[2][1][0]))) ^ (*l_2182)) == (*l_2120)) , 0xE2L) > g_927[0][4][0])))) > l_2210)) <= 1L), g_927[0][4][0])))) <= (**l_2162)) , 0x30L), l_2210)))))) ^ (*l_2149))), 6)) , (*g_2133)) , (void*)0), (*l_2193), g_854[1][0][0]), g_938));
                }



                ;
            }
            else
            {
                unsigned l_2213 = 0x820E17AFL;
                int *l_2218[10];
                unsigned long long l_2236[2];
                int *l_2263 = (void*)0;
                int i;
                for (i = 0; i < 10; i++)
                    l_2218[i] = &g_854[2][2][1];
                for (i = 0; i < 2; i++)
                    l_2236[i] = 0x11986F86244AF00ELL;
                if ((g_1567 == ((safe_add_func_uint16_t_u_u(func_3(l_2213), func_40(l_2149, g_1009[2][2][2], ((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(func_40(func_44(&g_51[0][8], ((g_1209 , func_40(l_2218[1], (*l_2053), (*l_1940))) , l_2182), g_1209, l_2193, l_2218[1]), g_2219, g_1209), g_1921)), 65530UL)) , g_854[2][2][1])))) , g_1921)))
                {
                    unsigned long long l_2220 = 0x84BAB3622FC61834LL;
                    for (g_166 = 2; (g_166 >= 0); g_166 -= 1)
                    {
                        int *l_2229 = &g_166;
                        l_2220 = (!((void*)0 == &g_308[1]));
                        if ((*g_1433))
                            break;
                        (*g_309) = (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_3((safe_mod_func_int16_t_s_s(((((*l_2193) == (l_2229 == l_2229)) || ((((-6L) <= (safe_rshift_func_uint16_t_u_u(g_1921, (safe_add_func_int16_t_s_s((~(0x48A35905L | ((safe_mod_func_int16_t_s_s(((func_3(l_2236[0]) && (((g_927[0][4][0] , l_2220) , (*l_2229)) , g_2219)) <= l_2220), g_854[2][2][1])) , l_2237))), g_945))))) || (-2L)) >= (*l_2120))) < g_1009[2][2][2]), g_1921))), (*l_2229))), (*l_2229))), g_786));
                    }
                }
                else
                {
                    short l_2252 = 0x7783L;
                    for (l_2237 = 3; (l_2237 <= 54); l_2237 = safe_add_func_int64_t_s_s(l_2237, 6))
                    {
                        int *l_2240 = &g_166;
                        l_2182 = l_2240;

                        ;
                        l_2149 = g_2241;
                        if ((*g_1433))
                            break;
                    }

                    ;
                    g_1433 = l_2218[1];
                    (*g_309) = ((*l_2193) ^ ((safe_mod_func_uint16_t_u_u((((((((*l_2149) , g_854[2][1][1]) != ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint64_t_u_u((*l_2149), (safe_lshift_func_uint8_t_u_s(g_927[0][4][0], 5)))) , g_1009[2][7][1]), 4)) != g_938)) || g_854[2][1][0]) , (*l_2053)) && g_854[0][0][1]) , g_927[0][4][0]), 9UL)) != l_2252));
                    (**g_307) = (void*)0;

                    ;
                }

                ;
                ;
                for (g_1567 = (-28); (g_1567 > 55); g_1567++)
                {
                    int *l_2255 = &g_854[0][2][0];
                    unsigned l_2260 = 18446744073709551607UL;
                    short l_2262 = 0x8E2EL;
                    for (l_2146 = 2; (l_2146 <= 7); l_2146 += 1)
                    {
                        int *l_2256 = &g_51[0][1];
                        l_2256 = l_2218[1];

                        ;
                        (*g_739) = ((l_2257 != (safe_rshift_func_uint8_t_u_u(func_3(g_1009[2][2][2]), 7))) != (func_40(func_22(func_44(l_2218[1], l_2256, (((0UL == (*l_2255)) > (~((1UL | l_2260) , g_1921))) , (*l_2256)), &g_166, l_2193), g_938, l_2255, g_2219), g_1009[2][2][2], g_1921) <= g_2219));
                    }
                    l_2218[0] = l_2182;
                    for (l_2213 = 0; (l_2213 <= 0); l_2213 += 1)
                    {
                        (*l_2120) = 0x1858CDB9L;
                        (*l_2255) = (*g_2133);
                        (*g_739) = ((*l_2193) >= g_2219);
                    }
                    l_2262 = g_2261;
                }


                l_2264[4] = l_2263;


            }

            ;


            ;
            ;

        }

        ;


        ;

    }
    else
    {
        int *l_2265[4];
        int i;
        for (i = 0; i < 4; i++)
            l_2265[i] = &g_51[0][7];
        l_2265[1] = l_2265[1];
    }

    ;


    ;

    for (g_1567 = 0; (g_1567 > 10); g_1567++)
    {
        int l_2268 = (-9L);
        int *l_2278[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
        long long l_2293 = 0x16A973241E47B0FFLL;
        int l_2300 = (-1L);
        int *l_2301 = &g_166;
        short l_2305 = 0x92A4L;
        unsigned char l_2337 = 4UL;
        int *l_2349 = &g_51[0][4];
        int ***l_2358 = &l_2152[0];
        unsigned short l_2371 = 0x95C2L;
        int l_2376 = 0x64A97274L;
        unsigned short l_2397 = 0xBF94L;
        int *l_2409 = (void*)0;
        int *l_2410 = &g_51[0][4];
        int i;
        l_2278[3] = l_2278[0];
    }
    l_2411 = (*g_1706);
    return g_2367;


}







static unsigned char func_3(char p_4)
{
    int *l_52 = &g_51[0][4];
    int l_778[5];
    int l_1738 = (-1L);
    short l_1759 = 1L;
    char l_1902 = (-1L);
    long long l_1933 = 0L;
    int i;
    for (i = 0; i < 5; i++)
        l_778[i] = 0xBC7798A3L;
    for (p_4 = 5; (p_4 > (-19)); p_4 = safe_sub_func_int64_t_s_s(p_4, 8))
    {
        int *l_33 = (void*)0;
    }
    return g_310;
}







static int * func_8(int * p_9, unsigned long long p_10, unsigned short p_11)
{
    long long l_1570[2];
    int *l_1574 = (void*)0;
    int ***l_1575[4];
    int l_1587 = (-5L);
    unsigned long long l_1588 = 18446744073709551608UL;
    int l_1646 = 1L;
    int l_1658 = 0x6091C5CEL;
    int *l_1660 = &g_51[0][4];
    int *l_1663 = &g_166;
    int *l_1675 = (void*)0;
    int ***l_1682 = &g_316;
    int *l_1685 = (void*)0;
    int **l_1730 = &g_779[1][0][4];
    int i;
    for (i = 0; i < 2; i++)
        l_1570[i] = (-1L);
    for (i = 0; i < 4; i++)
        l_1575[i] = (void*)0;
    p_9 = func_27(p_9, g_1576, p_10, p_9, g_51[0][4]);

    ;
    return p_9;


}







static int * func_12(int * p_13, unsigned p_14, unsigned p_15)
{
    int *l_933[10] = {(void*)0, &g_166, (void*)0, &g_166, (void*)0, &g_166, (void*)0, &g_166, (void*)0, &g_166};
    int **l_934 = &g_779[1][0][4];
    int *l_959 = &g_166;
    int **l_964 = (void*)0;
    int l_1056 = 0xEEF51337L;
    int *l_1099 = &g_51[0][2];
    int ***l_1187 = &g_316;
    short l_1213 = 0L;
    int l_1253 = 0L;
    unsigned long long l_1286 = 18446744073709551613UL;
    short l_1312 = 0xB09BL;
    int ***l_1313 = &g_316;
    int *l_1364 = &g_854[1][1][1];
    int *l_1388[8][4][8] = {{{&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}}, {{&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}}, {{&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}}, {{&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}}, {{&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}}, {{&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}}, {{&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}}, {{&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}, {&g_854[2][2][1], &g_854[2][2][1], &g_51[0][4], &g_854[2][2][1], (void*)0, (void*)0, &g_854[1][0][1], (void*)0}}};
    unsigned short l_1417 = 0x5FD4L;
    unsigned char l_1471 = 5UL;
    int *l_1542 = &g_51[0][4];
    int i, j, k;
lbl_993:
    (*l_934) = l_933[3];
    (*l_934) = func_27(p_13, (*l_934), (&g_316 != (void*)0), (*l_934), (func_40(&g_166, g_854[1][2][0], p_15) == 65535UL));
lbl_1387:
    if ((+(safe_sub_func_uint16_t_u_u(((p_15 | 0xC6L) > ((void*)0 == (*l_934))), p_14))))
    {
        char l_937[10][5] = {{(-1L), (-5L), (-1L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-1L), (-5L)}, {(-1L), (-5L), (-1L), (-1L), (-5L)}};
        int i, j;
        g_938 = l_937[9][2];
        (*l_934) = p_13;
    }
    else
    {
        unsigned short l_939 = 0xA467L;
        (*g_739) = l_939;
        return (*l_934);


    }
    if ((p_14 == func_40(func_22(p_13, ((safe_sub_func_uint16_t_u_u((&l_934 != &g_308[7]), g_854[2][2][1])) , ((p_13 != (void*)0) , 1L)), (*l_934), p_15), g_5[4], g_854[2][2][1])))
    {
        int *l_960[4][6] = {{(void*)0, &g_854[2][2][1], (void*)0, &g_51[0][6], &g_854[2][2][1], &g_854[2][2][1]}, {(void*)0, &g_854[2][2][1], (void*)0, &g_51[0][6], &g_854[2][2][1], &g_854[2][2][1]}, {(void*)0, &g_854[2][2][1], (void*)0, &g_51[0][6], &g_854[2][2][1], &g_854[2][2][1]}, {(void*)0, &g_854[2][2][1], (void*)0, &g_51[0][6], &g_854[2][2][1], &g_854[2][2][1]}};
        short l_987 = (-4L);
        int *l_992[4] = {(void*)0, &g_51[0][8], (void*)0, &g_51[0][8]};
        int *l_997 = &g_51[0][4];
        unsigned short l_1045 = 0x5B34L;
        unsigned short l_1112 = 1UL;
        int ***l_1117 = &g_316;
        int *l_1142 = &g_166;
        short l_1161[2];
        unsigned l_1177 = 1UL;
        unsigned char l_1309[8][7][4];
        int *l_1343 = &g_166;
        int *l_1351[8] = {&g_854[1][0][0], &l_1253, &g_854[1][0][0], &l_1253, &g_854[1][0][0], &l_1253, &g_854[1][0][0], &l_1253};
        int l_1352 = 5L;
        int *l_1368 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1161[i] = (-1L);
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 4; k++)
                    l_1309[i][j][k] = 0x32L;
            }
        }
        if ((*g_739))
        {
            unsigned char l_942[7][1][10] = {{{1UL, 0x9EL, 0x49L, 0xC5L, 0xC5L, 0x49L, 0x9EL, 1UL, 0x49L, 1UL}}, {{1UL, 0x9EL, 0x49L, 0xC5L, 0xC5L, 0x49L, 0x9EL, 1UL, 0x49L, 1UL}}, {{1UL, 0x9EL, 0x49L, 0xC5L, 0xC5L, 0x49L, 0x9EL, 1UL, 0x49L, 1UL}}, {{1UL, 0x9EL, 0x49L, 0xC5L, 0xC5L, 0x49L, 0x9EL, 1UL, 0x49L, 1UL}}, {{1UL, 0x9EL, 0x49L, 0xC5L, 0xC5L, 0x49L, 0x9EL, 1UL, 0x49L, 1UL}}, {{1UL, 0x9EL, 0x49L, 0xC5L, 0xC5L, 0x49L, 0x9EL, 1UL, 0x49L, 1UL}}, {{1UL, 0x9EL, 0x49L, 0xC5L, 0xC5L, 0x49L, 0x9EL, 1UL, 0x49L, 1UL}}};
            int *l_950 = &g_166;
            int i, j, k;
            l_960[0][2] = l_950;
            if (((((((~g_854[1][2][1]) <= (safe_add_func_int64_t_s_s(0L, func_40(p_13, ((safe_unary_minus_func_int16_t_s(0x6DC1L)) != ((((g_566 ^ 0xF758L) , ((((g_166 <= (p_14 , ((*l_950) , g_945))) >= g_51[0][3]) | p_14) && 0x570B1617L)) != 7UL) & 0x24L)), g_51[0][4])))) , 18446744073709551608UL) ^ (*l_950)) , l_964) == (void*)0))
            {
                int *l_965 = &g_166;
                return l_965;


            }
            else
            {
                (*g_739) = ((safe_sub_func_int32_t_s_s(p_15, (func_40(((safe_add_func_uint8_t_u_u(func_40(p_13, g_166, func_40(p_13, p_14, (g_5[6] != 8UL))), p_14)) , p_13), g_854[2][2][1], p_14) == 9UL))) == g_786);
                return p_13;


            }
        }
        else
        {
            int *l_976[3];
            int i;
            for (i = 0; i < 3; i++)
                l_976[i] = &g_854[2][2][0];
            (*g_50) = (safe_add_func_uint8_t_u_u(g_854[1][1][0], (safe_mul_func_uint8_t_u_u((g_566 > (0x690679D8B69A9657LL | ((safe_mod_func_uint16_t_u_u(func_40((p_14 , p_13), p_15, g_854[2][2][1]), 0xE54FL)) , p_15))), p_14))));
            l_992[2] = ((((void*)0 != &l_934) != (p_15 , (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((func_40(func_27((*l_934), p_13, g_927[0][3][0], p_13, g_927[0][2][1]), g_927[0][4][0], p_15) != 0UL), 0x59CFL)), 0x8441L)))) , l_992[1]);
            if (g_786)
                goto lbl_993;
        }
        for (l_987 = 0; (l_987 >= 0); ++l_987)
        {
            int *l_996 = &g_854[1][0][1];
            int *l_1017[1][1][5];
            int **l_1141 = &l_933[3];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_1017[i][j][k] = &g_51[0][4];
                }
            }
            (*l_934) = l_996;
        }
        for (l_987 = 0; (l_987 >= 26); l_987++)
        {
            int *l_1258 = &g_51[0][4];
            unsigned char l_1289 = 5UL;
            int **l_1306[9] = {&l_992[1], (void*)0, &l_992[1], (void*)0, &l_992[1], (void*)0, &l_992[1], (void*)0, &l_992[1]};
            int *l_1320 = (void*)0;
            int i;
        }
        if (func_40(func_22(p_13, (func_40(l_1368, ((((*g_315) != (((p_15 , &g_316) != l_1117) , (void*)0)) , func_40(p_13, (g_5[4] , p_15), (*l_1099))) == 0xECL), p_14) >= p_14), &g_166, (*l_1364)), g_1009[2][5][2], g_786))
        {
            int *l_1371 = &l_1056;
            int *l_1389 = (void*)0;
            unsigned l_1393 = 18446744073709551609UL;
            if ((*g_50))
            {
                (*l_1099) = (!(+func_40(p_13, g_51[0][4], (*l_1099))));
            }
            else
            {
                (**g_307) = (**g_307);
                if ((safe_sub_func_uint32_t_u_u(func_40(l_1371, (safe_sub_func_uint16_t_u_u((*l_1371), p_15)), (!0x4817L)), ((safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((*l_1371), p_15)) < ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(p_14, (safe_lshift_func_uint16_t_u_u((g_5[4] != 0xC6L), 5)))), g_166)) != 0xE3L)), 0x8E97L)) , 4294967290UL))))
                {
                    for (l_1312 = 3; (l_1312 >= 0); l_1312 -= 1)
                    {
                        int i;
                        l_992[l_1312] = l_992[l_1312];
                        (**g_307) = (**g_307);
                    }
                }
                else
                {
                    for (g_166 = 0; (g_166 > (-27)); --g_166)
                    {
                        long long l_1386[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1386[i] = 0L;
                        (*l_934) = (p_14 , p_13);
                        if (l_1386[1])
                            break;
                        (**g_307) = (**g_307);
                    }
                    if (g_166)
                        goto lbl_1387;
                }
                return p_13;


            }
            if (p_15)
            {
lbl_1447:
                (*l_934) = l_1388[1][2][3];
            }
            else
            {
                return l_1389;


            }

            ;


            (*l_934) = p_13;
            for (g_938 = 14; (g_938 > 27); g_938++)
            {
                int l_1392[7] = {0xF6720B70L, 0xF6720B70L, 3L, 0xF6720B70L, 0xF6720B70L, 3L, 0xF6720B70L};
                int **l_1425 = &l_1351[3];
                int i;
                for (g_166 = 0; (g_166 <= 6); g_166 += 1)
                {
                    int *l_1418 = &g_51[0][4];
                    int *l_1428 = (void*)0;
                    int l_1444 = 0x03FD48FBL;
                    int i;
                    if ((g_5[g_166] || (0x576D2182L & l_1392[4])))
                    {
                        int i;
                        if (l_1393)
                            break;
                    }
                    else
                    {
                        int l_1404 = 0x5BD45D04L;
                        (*l_1418) = ((((-1L) & g_1209) && (safe_mul_func_uint16_t_u_u(p_14, (safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((p_14 , ((safe_mul_func_int16_t_s_s(l_1404, ((((safe_mod_func_int16_t_s_s((-3L), (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(p_15, (safe_sub_func_uint16_t_u_u((g_927[1][2][0] , (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(func_40((l_1417 , l_1418), p_15, g_1009[0][5][2]), (*l_1371))), p_15))), g_854[2][2][1])))), p_14)))) != p_15) , (*g_307)) != (*g_307)))) , g_166)), 1)) , 0x71L) > g_566), l_1404)) >= g_786), p_15))))) , 0x0D42A8F5L);
                        (*l_997) = func_40(func_22(func_22(p_13, (((l_1392[3] , g_5[3]) == (safe_mul_func_int8_t_s_s(((((g_166 , ((+((p_15 | 1L) & (((safe_rshift_func_uint16_t_u_u(0UL, 11)) , (g_1009[2][2][2] == (safe_lshift_func_uint16_t_u_u(g_927[1][1][0], 12)))) , p_14))) , 0xD641BB949453E2FCLL)) == g_854[2][2][1]) , (void*)0) != l_1425), g_854[0][2][0]))) | 0x5415L), p_13, g_786), l_1404, p_13, g_1209), g_1209, g_51[0][7]);
                    }
                    if ((*g_739))
                        break;
                    for (g_945 = 0; (g_945 != 52); g_945 = safe_add_func_int8_t_s_s(g_945, 5))
                    {
                        int *l_1442 = &l_1253;
                        unsigned short l_1443 = 0xAD5CL;
                        (*l_1425) = l_1428;
                        (*g_50) = (&l_1371 != (((+(p_14 && ((*l_1371) , ((safe_mod_func_uint32_t_u_u(g_51[0][6], (*g_739))) , (g_854[2][2][1] , func_40(((g_5[3] , (&p_13 != (*g_315))) , (void*)0), g_1009[2][2][2], p_14)))))) > 4L) , (*g_307)));
                        (*l_1117) = l_1425;

                        ;
                        (*l_1371) = (g_854[2][2][1] <= ((safe_mod_func_uint16_t_u_u(func_40((**g_315), func_40(g_1433, (l_1425 == (void*)0), (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((-1L) ^ (safe_add_func_uint64_t_u_u((((g_927[0][4][0] && (((safe_mod_func_uint8_t_u_u(func_40(l_1442, (*l_997), p_14), 0x27L)) <= 9L) || g_927[1][0][0])) <= p_14) > p_14), (*l_1442)))), 0x97L)), l_1443))), l_1444), p_15)) != 0x91L));
                    }
                    for (g_786 = 0; (g_786 <= 58); g_786++)
                    {
                        unsigned l_1458[6] = {0x97CED473L, 0x97CED473L, 0x267DCD08L, 0x97CED473L, 0x97CED473L, 0x267DCD08L};
                        int i;
                        if (l_987)
                            goto lbl_1447;
                        (***g_307) = (safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((g_1009[2][2][2] >= (safe_rshift_func_uint16_t_u_u(((g_938 & (((((g_5[3] , (safe_rshift_func_int16_t_s_u(func_40((p_15 , p_13), ((*g_50) , ((((safe_add_func_uint64_t_u_u(9UL, ((void*)0 == l_1418))) , g_927[0][4][0]) , g_166) || g_938)), g_854[2][2][1]), g_310))) <= g_1209) & g_927[1][1][1]) && (-6L)) && l_1458[1])) , g_1209), 6))), (*l_1371))), g_938));
                    }
                }
                for (g_166 = 0; (g_166 < 17); g_166 = safe_add_func_uint32_t_u_u(g_166, 9))
                {
                    long long l_1465 = 0x8CBE7C8D5EA9EAE1LL;
                    (*l_997) = p_14;
                    (***g_307) = (((safe_add_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(g_5[4], 0x37L)) != p_15) && l_1465), p_14)) , ((g_854[1][2][1] <= (((0xBE1AL != (safe_lshift_func_uint8_t_u_s(p_14, g_5[4]))) != g_927[0][4][0]) < p_14)) , g_166)) | 0xB0L);
                }
            }
        }
        else
        {
            short l_1470 = 6L;
            int ***l_1478[8] = {&l_934, &l_934, (void*)0, &l_934, &l_934, (void*)0, &l_934, &l_934};
            int i;
            (*g_50) = (p_15 , ((&g_316 != (void*)0) != ((+(safe_add_func_uint32_t_u_u(0x22C3FCB7L, (***g_307)))) < (l_1470 >= (l_1471 == ((*l_997) , (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(0x0AC4L, 0)) & p_15), p_15)), g_854[2][1][1]))))))));
            (*g_309) = (((((&g_316 != l_1478[7]) >= (safe_rshift_func_uint16_t_u_s(func_40(p_13, g_1209, p_14), 4))) <= g_566) < p_15) , p_14);
        }

        ;


    }
    else
    {
        int ***l_1483 = &l_964;
        short l_1488 = 0x145AL;
        unsigned long long l_1489 = 0xB516732BC2857DCALL;
        int *l_1490 = &l_1056;
        unsigned l_1507 = 0x5D3A998EL;
        unsigned l_1565 = 18446744073709551615UL;
        p_13 = func_34((((safe_rshift_func_int16_t_s_u(g_854[2][2][1], g_166)) , (*g_50)) , (l_1483 != ((0x92L ^ (safe_mul_func_uint16_t_u_u(((func_40(((p_14 >= (((((safe_mod_func_uint32_t_u_u(func_40(&g_166, l_1488, (*l_959)), 4294967295UL)) , p_14) || p_15) , 0xB7F9FF15L) && 0x57460485L)) , (void*)0), g_938, g_927[1][4][0]) | p_14) < 0UL), p_14))) , l_1483))), (*l_1364), l_1489, l_1490, p_13);
        for (l_1488 = 0; (l_1488 >= 7); l_1488 = safe_add_func_int64_t_s_s(l_1488, 9))
        {
            unsigned short l_1506 = 3UL;
            int *l_1510 = &l_1253;
            unsigned l_1525[10];
            unsigned l_1541 = 0x30C00E40L;
            int i;
            for (i = 0; i < 10; i++)
                l_1525[i] = 0x7A0EB721L;
            for (l_1286 = (-19); (l_1286 != 48); ++l_1286)
            {
                (*l_934) = p_13;
                if (p_14)
                    break;
            }
            if (l_1489)
                goto lbl_1387;
            for (l_1286 = (-16); (l_1286 <= 14); l_1286 = safe_add_func_uint64_t_u_u(l_1286, 1))
            {
                unsigned l_1524 = 0xE5D1DEF4L;
                int l_1527 = 1L;
                unsigned short l_1540 = 65535UL;
                (***g_307) = ((((safe_sub_func_int8_t_s_s((&l_934 == &l_964), (p_15 == g_927[0][4][0]))) ^ ((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((((*g_315) == (*g_315)) > (-1L)))), 13)), (((0x4A2EA7F5E143185ALL != (p_14 , 0L)) == g_786) <= 0x55EDCC32A55BF83DLL))), (*g_309))) != 1L)) || (*l_1490)) , l_1506);
                if (l_1507)
                    continue;
            }
            (*g_739) = ((safe_add_func_int32_t_s_s(p_15, ((*l_934) != l_1510))) != ((safe_sub_func_int16_t_s_s((((*g_315) == &p_13) && ((*l_1490) >= (*l_959))), (safe_mod_func_uint16_t_u_u(p_14, func_40(p_13, g_310, l_1565))))) >= (*l_1510)));
        }
        return p_13;


    }



    return g_1566[1][3][3];



}







static int * func_16(int * p_17, int * p_18, int * p_19, int * p_20, long long p_21)
{
    int **l_787 = &g_779[1][0][4];
    int l_820 = 0x0F3F602DL;
    unsigned l_848 = 8UL;
    short l_922 = 0xD8F3L;
lbl_881:
    (*l_787) = p_18;
    for (g_786 = 2; (g_786 <= 7); g_786 += 1)
    {
        int *l_799 = &g_166;
        int i;
        (*g_309) = ((((safe_mod_func_uint8_t_u_u(g_310, (safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(p_21, (safe_mul_func_int8_t_s_s((0x87FE1054L < 0xD468A4CFL), (p_21 > ((safe_mod_func_int16_t_s_s((((*g_50) , ((g_786 && (safe_unary_minus_func_int32_t_s((*g_50)))) , func_22(l_799, (*l_799), l_799, (*l_799)))) != (void*)0), 0x3043L)) , g_51[0][4])))))) ^ (*l_799)), (*l_799))))) <= (*l_799)) != p_21) ^ g_51[0][4]);
        (*l_787) = p_17;
    }
    (*l_787) = func_22((*l_787), (g_566 , ((g_51[0][2] | ((safe_rshift_func_int8_t_s_s(g_5[4], (0xDCL | p_21))) , (safe_rshift_func_int8_t_s_u(((+(safe_add_func_uint64_t_u_u((4L && l_820), p_21))) == g_51[0][2]), 6)))) , g_5[4])), p_20, p_21);
    for (g_786 = 0; (g_786 != 51); g_786 = safe_add_func_uint16_t_u_u(g_786, 2))
    {
        int *l_824 = (void*)0;
        int *l_837 = (void*)0;
        int l_844 = 0x7272E975L;
        int *l_868 = &g_854[2][2][1];
        int *l_870 = (void*)0;
        int *l_880 = &l_844;
        int *l_904 = &g_51[0][4];
        for (p_21 = 0; (p_21 <= 0); p_21 += 1)
        {
            int *l_825 = &l_820;
            int i;
            if (g_5[(p_21 + 5)])
            {
                int *l_823 = &g_166;
                int i;
                l_823 = (void*)0;

                ;
            }
            else
            {
                char l_830 = 7L;
                int l_846 = 0x2114B732L;
                int ***l_853[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_853[i] = &g_316;
                for (l_820 = 0; (l_820 <= 0); l_820 += 1)
                {
                    int *l_842 = &l_820;
                }
                if ((((*l_787) == p_19) , 0x54C55911L))
                {
                    int l_859 = 0xA75338D6L;
                    p_19 = p_19;
                    (*l_787) = (((18446744073709551615UL == (safe_lshift_func_uint16_t_u_s(((void*)0 == p_20), (safe_mod_func_uint32_t_u_u((l_859 , ((g_5[4] > (+func_40(p_20, (((void*)0 != &l_787) , (+(-6L))), p_21))) != l_859)), p_21))))) & g_854[2][2][1]) , p_19);
                }
                else
                {
                    unsigned char l_860[6] = {0UL, 0x0EL, 0UL, 0x0EL, 0UL, 0x0EL};
                    int i;
                    l_860[4] = 0x4F1FE8A1L;
                    for (l_820 = 5; (l_820 >= 1); l_820 -= 1)
                    {
                        unsigned l_865[2][6];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_865[i][j] = 18446744073709551615UL;
                        }
                        (*l_787) = func_27(p_17, &l_844, ((safe_add_func_int16_t_s_s(0x35B5L, (safe_mod_func_int32_t_s_s(((((void*)0 == p_20) <= func_40(p_19, l_860[4], p_21)) | g_166), 4294967286UL)))) <= g_5[2]), (*l_787), l_865[1][0]);
                    }
                    (*l_787) = (void*)0;
                }
                (*l_825) = func_40(l_825, g_310, p_21);
                for (g_166 = 4; (g_166 >= 1); g_166 -= 1)
                {
                    int *l_869 = &g_166;
                    for (l_844 = 6; (l_844 >= 0); l_844 -= 1)
                    {
                        int i, j, k;
                        l_825 = func_22(p_20, p_21, l_869, g_854[2][2][1]);

                        ;
                        return l_870;


                    }
                }
            }
            (*l_787) = p_17;
        }
        for (p_21 = 0; (p_21 < (-17)); p_21 = safe_sub_func_int8_t_s_s(p_21, 4))
        {
            int *l_873 = &g_854[2][2][1];
            int ***l_928 = &g_316;
            if (func_40(p_18, (*l_873), g_566))
            {
                unsigned l_888[8][1];
                int i, j;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_888[i][j] = 0x502DAD15L;
                }
                if (l_820)
                    goto lbl_881;
                (*l_787) = l_873;
            }
            else
            {
                unsigned l_897 = 1UL;
                int *l_907 = &g_166;
                if (((safe_add_func_int64_t_s_s(g_566, (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint64_t_u_u(l_897, 0xDC1CAA45DC2F8905LL)) & (0xC7L == ((*l_787) != ((p_21 != (safe_sub_func_int64_t_s_s(p_21, (l_897 <= (func_40(l_873, (*l_880), g_786) && 1UL))))) , (void*)0)))) >= 0x0FDEC7E55D2AF3BELL), 4)) > 0xBBA76EF455800BD7LL), (*l_873))))) <= (-1L)))
                {
                    (*l_868) = func_40(p_20, ((p_21 , ((*g_739) >= (!0xB7DFBF94L))) <= (((safe_rshift_func_uint16_t_u_s((p_21 && ((p_21 ^ (l_873 == l_904)) | (safe_sub_func_uint8_t_u_u(0x07L, 0x05L)))), g_310)) , p_19) != l_907)), p_21);
                    if ((*g_739))
                        break;
                }
                else
                {
                    if (l_820)
                        goto lbl_881;
                    (***g_307) = (((g_854[2][2][1] >= ((g_854[2][2][1] | g_166) == p_21)) ^ p_21) || 0x9ADEL);
                }
            }
            (*l_873) = (*g_309);
            for (g_166 = 0; (g_166 <= 0); g_166 += 1)
            {
                int i, j, k;
                g_779[(g_166 + 3)][(g_166 + 1)][(g_166 + 4)] = g_779[(g_166 + 4)][(g_166 + 1)][(g_166 + 4)];
                if (g_51[g_166][(g_166 + 5)])
                {
                    int l_915 = 0x8BBC81FAL;
                    int *l_916[7] = {&g_166, &g_854[0][1][1], &g_166, &g_854[0][1][1], &g_166, &g_854[0][1][1], &g_166};
                    int i;
                    for (l_820 = 0; (l_820 == (-25)); --l_820)
                    {
                        int l_910 = 0x0B2E5E85L;
                        l_916[4] = func_22(func_34((l_787 == (((((*l_873) | (0L <= l_910)) != (safe_sub_func_int64_t_s_s((l_910 ^ p_21), (safe_mod_func_int32_t_s_s((0x077EL < g_786), l_915))))) <= 0x1C70CF7F63DDE6B8LL) , (*g_307))), g_786, g_854[2][2][1], &g_51[g_166][(g_166 + 5)], p_19), g_854[2][1][1], p_17, p_21);
                        (***g_307) = (p_21 , (p_21 > (~p_21)));
                        if ((*g_309))
                            break;
                        if (l_910)
                            continue;
                    }


                    for (l_848 = 0; (l_848 <= 4); l_848 += 1)
                    {
                        return l_873;


                    }
                }
                else
                {
                    int l_919 = (-10L);
                    int *l_931 = &l_820;
                    unsigned l_932 = 0xC49FCA87L;
                    (*l_873) = ((((safe_mod_func_int8_t_s_s((l_919 , (safe_lshift_func_int16_t_s_u(func_40(l_931, l_932, p_21), p_21))), (-2L))) && (*l_931)) , (*g_315)) != (*g_307));
                    for (l_919 = 0; l_919 < 3; l_919 += 1)
                    {
                        for (l_932 = 0; l_932 < 3; l_932 += 1)
                        {
                            for (g_310 = 0; g_310 < 2; g_310 += 1)
                            {
                                g_854[l_919][l_932][g_310] = 0x668A2367L;
                            }
                        }
                    }
                }
                if ((*g_739))
                    continue;
            }
        }
    }
    return (*l_787);


}







static int * func_22(int * p_23, int p_24, int * p_25, unsigned char p_26)
{
    int *l_785 = (void*)0;
    return l_785;


}







static int * func_27(int * p_28, int * p_29, unsigned long long p_30, int * p_31, unsigned short p_32)
{
    unsigned l_780 = 18446744073709551615UL;
    int *l_783 = &g_166;
    int *l_784 = &g_51[0][4];
    l_784 = l_783;

    ;
    (*g_309) = 0x7C1D5D96L;
    (*l_783) = (*g_739);
    return l_783;


}







static int * func_34(unsigned long long p_35, unsigned short p_36, int p_37, int * p_38, int * p_39)
{
    int *l_703 = &g_51[0][4];
    unsigned l_718 = 0x71C6177EL;
    int *l_753 = &g_51[0][4];
    int *l_755 = &g_166;
    char l_758[7] = {9L, 1L, 9L, 1L, 9L, 1L, 9L};
    int ***l_762 = &g_316;
    int i;
    (*g_50) = (p_36 > func_40(l_703, p_37, g_566));
    (*p_38) = (safe_lshift_func_int8_t_s_s(func_40((g_5[4] , l_703), p_37, p_35), 5));
    for (p_37 = 0; (p_37 == 9); p_37 = safe_add_func_uint32_t_u_u(p_37, 3))
    {
        int l_711[10][10] = {{(-10L), (-9L), 0xBD3EDF56L, 0xBD3EDF56L, (-9L), (-10L), 0L, 0L, (-1L), 0x35BF28E3L}, {(-10L), (-9L), 0xBD3EDF56L, 0xBD3EDF56L, (-9L), (-10L), 0L, 0L, (-1L), 0x35BF28E3L}, {(-10L), (-9L), 0xBD3EDF56L, 0xBD3EDF56L, (-9L), (-10L), 0L, 0L, (-1L), 0x35BF28E3L}, {(-10L), (-9L), 0xBD3EDF56L, 0xBD3EDF56L, (-9L), (-10L), 0L, 0L, (-1L), 0x35BF28E3L}, {(-10L), (-9L), 0xBD3EDF56L, 0xBD3EDF56L, (-9L), (-10L), 0L, 0L, (-1L), 0x35BF28E3L}, {(-10L), (-9L), 0xBD3EDF56L, 0xBD3EDF56L, (-9L), (-10L), 0L, 0L, (-1L), 0x35BF28E3L}, {(-10L), (-9L), 0xBD3EDF56L, 0xBD3EDF56L, (-9L), (-10L), 0L, 0L, (-1L), 0x35BF28E3L}, {(-10L), (-9L), 0xBD3EDF56L, 0xBD3EDF56L, (-9L), (-10L), 0L, 0L, (-1L), 0x35BF28E3L}, {(-10L), (-9L), 0xBD3EDF56L, 0xBD3EDF56L, (-9L), (-10L), 0L, 0L, (-1L), 0x35BF28E3L}, {(-10L), (-9L), 0xBD3EDF56L, 0xBD3EDF56L, (-9L), (-10L), 0L, 0L, (-1L), 0x35BF28E3L}};
        int ***l_761[2][3] = {{(void*)0, (void*)0, &g_316}, {(void*)0, (void*)0, &g_316}};
        int i, j;
    }
    p_39 = p_39;
    return p_39;


}







static int func_40(int * p_41, short p_42, unsigned short p_43)
{
    int l_702 = 0x26809BC4L;
    for (p_42 = (-23); (p_42 < (-5)); ++p_42)
    {
        int l_699 = 4L;
        for (p_43 = (-28); (p_43 > 26); p_43 = safe_add_func_uint64_t_u_u(p_43, 8))
        {
            unsigned short l_698[10] = {9UL, 9UL, 0x83B9L, 9UL, 9UL, 0x83B9L, 9UL, 9UL, 0x83B9L, 9UL};
            int i;
            l_699 = l_698[5];
            (*g_50) = (safe_rshift_func_uint8_t_u_s(g_51[0][4], 2));
        }
        return l_702;
    }
    (*g_50) = p_42;
    return l_702;
}







static int * func_44(int * p_45, int * p_46, unsigned p_47, int * p_48, int * p_49)
{
    int *l_57[3][9] = {{&g_51[0][4], (void*)0, &g_51[0][4], (void*)0, &g_51[0][4], (void*)0, &g_51[0][4], (void*)0, &g_51[0][4]}, {&g_51[0][4], (void*)0, &g_51[0][4], (void*)0, &g_51[0][4], (void*)0, &g_51[0][4], (void*)0, &g_51[0][4]}, {&g_51[0][4], (void*)0, &g_51[0][4], (void*)0, &g_51[0][4], (void*)0, &g_51[0][4], (void*)0, &g_51[0][4]}};
    unsigned l_68 = 0x22489AFFL;
    int *l_160 = &g_51[0][2];
    unsigned l_232 = 4294967295UL;
    unsigned l_348[4];
    volatile int **l_473 = &g_309;
    int l_551 = 0xDB249513L;
    unsigned long long l_554[7][1] = {{0x42F1F72CB4B90D1FLL}, {0x42F1F72CB4B90D1FLL}, {0x42F1F72CB4B90D1FLL}, {0x42F1F72CB4B90D1FLL}, {0x42F1F72CB4B90D1FLL}, {0x42F1F72CB4B90D1FLL}, {0x42F1F72CB4B90D1FLL}};
    int **l_668 = &l_160;
    int i, j;
    for (i = 0; i < 4; i++)
        l_348[i] = 18446744073709551613UL;
    if (((p_47 > (l_57[2][7] == &g_51[0][4])) & (safe_add_func_int32_t_s_s(((p_47 && (&g_51[0][1] == (p_47 , p_46))) | (safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(255UL, g_51[0][4])) ^ g_51[0][0]), p_47)) != p_47), 0x5ADFL))), g_51[0][4]))))
    {
        int l_69 = 0x8C4F412FL;
        int **l_108 = &g_50;
        int l_116 = 0xD785604AL;
        unsigned short l_255 = 65526UL;
        char l_263 = 1L;
        int *l_347[6][6] = {{&g_166, &g_51[0][4], &l_116, &g_51[0][4], &g_166, &g_51[0][4]}, {&g_166, &g_51[0][4], &l_116, &g_51[0][4], &g_166, &g_51[0][4]}, {&g_166, &g_51[0][4], &l_116, &g_51[0][4], &g_166, &g_51[0][4]}, {&g_166, &g_51[0][4], &l_116, &g_51[0][4], &g_166, &g_51[0][4]}, {&g_166, &g_51[0][4], &l_116, &g_51[0][4], &g_166, &g_51[0][4]}, {&g_166, &g_51[0][4], &l_116, &g_51[0][4], &g_166, &g_51[0][4]}};
        int **l_414 = &l_57[0][7];
        int i, j;
    }
    else
    {
        int **l_510 = &l_160;
        p_48 = p_48;
        for (l_68 = 0; (l_68 <= 3); l_68 += 1)
        {
            int l_503[4];
            int *l_504[9][2] = {{&g_51[0][5], (void*)0}, {&g_51[0][5], (void*)0}, {&g_51[0][5], (void*)0}, {&g_51[0][5], (void*)0}, {&g_51[0][5], (void*)0}, {&g_51[0][5], (void*)0}, {&g_51[0][5], (void*)0}, {&g_51[0][5], (void*)0}, {&g_51[0][5], (void*)0}};
            int *l_521 = (void*)0;
            int i, j;
            for (i = 0; i < 4; i++)
                l_503[i] = 0x11E29855L;
            (*p_46) = (g_51[0][5] , (g_166 != (0x12L < ((+g_51[0][4]) && 0xC709F55AL))));
            for (p_47 = 1; (p_47 <= 7); p_47 += 1)
            {
                int *l_505 = &g_51[0][7];
                int l_519[5][5] = {{4L, 0x30B5D0A2L, (-1L), (-1L), 0x30B5D0A2L}, {4L, 0x30B5D0A2L, (-1L), (-1L), 0x30B5D0A2L}, {4L, 0x30B5D0A2L, (-1L), (-1L), 0x30B5D0A2L}, {4L, 0x30B5D0A2L, (-1L), (-1L), 0x30B5D0A2L}, {4L, 0x30B5D0A2L, (-1L), (-1L), 0x30B5D0A2L}};
                int i, j;
                for (l_232 = 0; (l_232 <= 3); l_232 += 1)
                {
                    int l_494 = 7L;
                    int i;
                    p_49 = p_49;
                    if ((((safe_rshift_func_int8_t_s_s(((void*)0 != (*g_315)), (((l_494 | (*p_48)) | (safe_sub_func_int32_t_s_s((g_51[0][4] , (p_47 && (safe_sub_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(((0x050C66CDE4A85ADFLL && (safe_add_func_int8_t_s_s(p_47, 0x0AL))) , g_166), p_47)) < 0UL), l_503[3])))), (*p_48)))) , p_47))) > g_51[0][4]) > 9UL))
                    {
                        long long l_520 = 0x51CD1CF68ACA731DLL;
                        p_48 = p_45;


                        l_505 = l_504[1][1];
                        (*p_45) = (safe_sub_func_int64_t_s_s(0x8EA5440B150522D7LL, (safe_mul_func_int8_t_s_s(((((l_510 != ((safe_mod_func_uint16_t_u_u(g_51[0][4], (safe_mod_func_int32_t_s_s((*g_50), (*p_45))))) , (void*)0)) , (safe_mul_func_uint8_t_u_u(((p_47 | (p_47 , ((safe_add_func_uint8_t_u_u(p_47, p_47)) >= l_494))) >= 7UL), l_519[1][1]))) && l_520) < g_166), 0x59L))));
                    }
                    else
                    {
                        int i;
                        (*g_50) = 0x0FD1F793L;
                    }
                    (*l_510) = &l_519[3][4];

                    ;
                    (*l_510) = l_521;

                    ;
                }

                ;
            }
        }


        ;
        (*p_48) = (*p_45);
        for (l_68 = 0; (l_68 != 25); l_68 = safe_add_func_int64_t_s_s(l_68, 7))
        {
            return l_57[2][7];


        }
    }


    ;
    for (l_232 = 0; (l_232 != 30); l_232 = safe_add_func_uint32_t_u_u(l_232, 4))
    {
        int *l_531[10][4][1] = {{{&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}}, {{&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}}, {{&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}}, {{&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}}, {{&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}}, {{&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}}, {{&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}}, {{&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}}, {{&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}}, {{&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}, {&g_51[0][8]}}};
        unsigned l_538 = 0x9E34D9F1L;
        int ***l_539[4][5];
        volatile int *l_565 = &g_566;
        long long l_583 = 0xB7109682EE9422CDLL;
        unsigned short l_662 = 65535UL;
        int *l_667[6];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_539[i][j] = &g_316;
        }
        for (i = 0; i < 6; i++)
            l_667[i] = &g_51[0][8];
    }
    return p_46;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_51[i][j], "g_51[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_854[i][j][k], "g_854[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_927[i][j][k], "g_927[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_938, "g_938", print_hash_value);
    transparent_crc(g_945, "g_945", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1009[i][j][k], "g_1009[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1209, "g_1209", print_hash_value);
    transparent_crc(g_1567, "g_1567", print_hash_value);
    transparent_crc(g_1637, "g_1637", print_hash_value);
    transparent_crc(g_1921, "g_1921", print_hash_value);
    transparent_crc(g_2030, "g_2030", print_hash_value);
    transparent_crc(g_2219, "g_2219", print_hash_value);
    transparent_crc(g_2261, "g_2261", print_hash_value);
    transparent_crc(g_2367, "g_2367", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
