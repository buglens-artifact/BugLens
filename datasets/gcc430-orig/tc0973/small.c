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



static volatile int g_2 = 0xB110C93BL;
static volatile int g_3 = 0L;
static volatile int g_4[2] = {0L, 0L};
static volatile int g_5 = 0xDF98A59CL;
static volatile int g_6 = 0x33EFC07EL;
static int g_7[4] = {1L, 0x759609C3L, 1L, 0x759609C3L};
static int g_10 = 0x49CEC79EL;
static int g_49 = (-1L);
static int g_55 = 0xECCE005AL;
static unsigned char g_74 = 255UL;
static unsigned g_76 = 18446744073709551615UL;
static int g_99[8][6] = {{0x02733942L, 0x88285970L, 0x0AB9CA24L, 0x0AB9CA24L, 0x88285970L, 0x02733942L}, {0x02733942L, 0x88285970L, 0x0AB9CA24L, 0x0AB9CA24L, 0x88285970L, 0x02733942L}, {0x02733942L, 0x88285970L, 0x0AB9CA24L, 0x0AB9CA24L, 0x88285970L, 0x02733942L}, {0x02733942L, 0x88285970L, 0x0AB9CA24L, 0x0AB9CA24L, 0x88285970L, 0x02733942L}, {0x02733942L, 0x88285970L, 0x0AB9CA24L, 0x0AB9CA24L, 0x88285970L, 0x02733942L}, {0x02733942L, 0x88285970L, 0x0AB9CA24L, 0x0AB9CA24L, 0x88285970L, 0x02733942L}, {0x02733942L, 0x88285970L, 0x0AB9CA24L, 0x0AB9CA24L, 0x88285970L, 0x02733942L}, {0x02733942L, 0x88285970L, 0x0AB9CA24L, 0x0AB9CA24L, 0x88285970L, 0x02733942L}};
static int *g_109 = &g_99[6][2];
static int g_121[4] = {(-1L), (-1L), (-1L), (-1L)};
static char g_133 = 0L;
static char g_157 = (-7L);
static volatile int g_202 = (-1L);
static volatile int *g_201 = &g_202;
static volatile int **g_200 = &g_201;
static volatile int *** const g_199 = &g_200;
static char g_205 = 1L;
static char g_207 = (-10L);
static long long g_210[2] = {0L, 0L};
static unsigned long long g_222 = 0UL;
static volatile unsigned *g_230 = (void*)0;
static volatile unsigned **g_229 = &g_230;
static unsigned short g_232 = 0xA0F3L;
static unsigned g_249 = 1UL;
static short g_269 = 0x0BC8L;
static unsigned *g_311[8] = {&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76};
static const unsigned g_354 = 0UL;
static short g_365 = 0x7D59L;
static const int g_375 = 0xE1A93BC0L;
static const int *g_383[4][4][8] = {{{&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}}, {{&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}}, {{&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}}, {{&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}, {&g_99[6][2], (void*)0, &g_7[3], (void*)0, &g_10, &g_99[6][2], &g_99[6][2], &g_49}}};
static const int **g_382[10] = {&g_383[3][3][7], &g_383[3][3][7], &g_383[2][3][4], &g_383[3][3][7], &g_383[3][3][7], &g_383[2][3][4], &g_383[3][3][7], &g_383[3][3][7], &g_383[2][3][4], &g_383[3][3][7]};
static unsigned long long *g_409 = &g_222;
static unsigned long long ** const g_408 = &g_409;
static unsigned short g_411 = 0x0DA4L;
static int *g_424 = &g_121[0];
static int **g_423 = &g_424;
static unsigned short g_445 = 65526UL;
static int ****g_493 = (void*)0;
static short g_503 = (-8L);
static unsigned long long g_532 = 0x9545CDED57221079LL;
static volatile unsigned long long g_542 = 1UL;
static volatile unsigned g_561 = 1UL;
static volatile unsigned *g_560 = &g_561;
static volatile unsigned **g_559 = &g_560;
static volatile short g_591 = 0x74E5L;
static unsigned g_594 = 0xF1E55D81L;
static const volatile int *g_636 = &g_5;
static const unsigned short g_666 = 0UL;
static volatile char ***g_698 = (void*)0;
static int *g_731 = &g_99[3][2];
static unsigned * const *g_747[8][10][3] = {{{(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}}, {{(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}}, {{(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}}, {{(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}}, {{(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}}, {{(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}}, {{(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}}, {{(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}, {(void*)0, &g_311[2], &g_311[2]}}};
static unsigned * const **g_746 = &g_747[6][4][2];
static int g_774 = 0x987AF980L;
static int * const g_773 = &g_774;
static int * const *g_772 = &g_773;
static int * const **g_771 = &g_772;
static int * const ***g_770 = &g_771;
static unsigned **g_786 = &g_311[6];
static unsigned ***g_785 = &g_786;
static unsigned ****g_784 = &g_785;
static long long *g_789[8] = {&g_210[0], (void*)0, &g_210[0], (void*)0, &g_210[0], (void*)0, &g_210[0], (void*)0};
static long long ** const g_788 = &g_789[2];
static unsigned long long g_804 = 3UL;
static const unsigned short **g_831 = (void*)0;
static const volatile int g_837 = 0xC78E2603L;
static char *g_893 = &g_205;
static char **g_892 = &g_893;
static char ***g_891 = &g_892;
static short g_897 = 0x1EE9L;
static unsigned g_944 = 0xA538AE7BL;
static int **g_993 = (void*)0;
static int ***g_992[3][9] = {{&g_993, &g_993, &g_993, &g_993, &g_993, &g_993, &g_993, &g_993, &g_993}, {&g_993, &g_993, &g_993, &g_993, &g_993, &g_993, &g_993, &g_993, &g_993}, {&g_993, &g_993, &g_993, &g_993, &g_993, &g_993, &g_993, &g_993, &g_993}};
static char g_1033 = 0x24L;
static int *g_1108 = &g_7[3];
static unsigned *g_1124 = (void*)0;
static unsigned **g_1123[1][3][5] = {{{&g_1124, &g_1124, &g_1124, &g_1124, &g_1124}, {&g_1124, &g_1124, &g_1124, &g_1124, &g_1124}, {&g_1124, &g_1124, &g_1124, &g_1124, &g_1124}}};
static unsigned ***g_1122 = &g_1123[0][0][1];
static unsigned ****g_1121[4] = {&g_1122, &g_1122, &g_1122, &g_1122};
static unsigned long long **g_1133 = &g_409;



static unsigned short func_1(void);
static int func_11(short p_12);
static int * func_15(int * p_16);
static char func_19(int * p_20, int * p_21);
static int * func_23(int * p_24, unsigned long long p_25, int * p_26);
static const unsigned short func_36(int * p_37, int * p_38, int p_39, unsigned p_40, int * p_41);
static int * func_42(const int * p_43, int p_44, int * p_45);
static int * func_46(unsigned char p_47);
static int func_58(unsigned long long p_59, const int * p_60, const int p_61, int p_62);
static unsigned char func_69(char p_70, int * p_71, int * const p_72);
static unsigned short func_1(void)
{
    unsigned l_953 = 4294967295UL;
    unsigned short l_963 = 65535UL;
    char *l_964 = &g_133;
    int *l_967[5] = {&g_49, &g_99[6][0], &g_49, &g_99[6][0], &g_49};
    int **l_991 = &l_967[1];
    int ***l_990[7][9][3] = {{{(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}}, {{(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}}, {{(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}}, {{(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}}, {{(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}}, {{(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}}, {{(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}, {(void*)0, &l_991, &l_991}}};
    int l_1057[3][5][9] = {{{0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}}, {{0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}}, {{0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}, {0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL, 0x2A16D938L, 0x4DC6566FL}}};
    short l_1107 = 1L;
    unsigned ***l_1118 = (void*)0;
    unsigned ****l_1117 = &l_1118;
    unsigned long long **l_1132 = &g_409;
    int i, j, k;
    for (g_7[3] = 0; (g_7[3] != (-26)); g_7[3]--)
    {
        unsigned l_961 = 0xC23BB810L;
        int l_965 = (-1L);
        int l_985 = 4L;
        int l_997 = 6L;
        unsigned l_1022 = 4294967287UL;
        int *l_1039 = (void*)0;
        unsigned *l_1053[5] = {&g_249, &l_1022, &g_249, &l_1022, &g_249};
        unsigned **l_1052 = &l_1053[2];
        unsigned ***l_1051[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1051[i] = &l_1052;
        for (g_10 = 0; (g_10 <= 1); g_10 += 1)
        {
            unsigned short l_952 = 0xFE1BL;
            const char *l_958[3][7] = {{&g_157, &g_157, (void*)0, &g_157, &g_157, (void*)0, &g_157}, {&g_157, &g_157, (void*)0, &g_157, &g_157, (void*)0, &g_157}, {&g_157, &g_157, (void*)0, &g_157, &g_157, (void*)0, &g_157}};
            unsigned *l_962 = &g_249;
            int **l_966[3];
            unsigned long long l_996 = 0xE39280FE3EB0C8B3LL;
            char l_1029 = 0x6BL;
            const char l_1058 = 0x15L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_966[i] = &g_731;
        }
        (**g_200) = l_961;
    }
    for (g_10 = 2; (g_10 >= 0); g_10 -= 1)
    {
        int l_1100 = (-5L);
        unsigned l_1110 = 4294967288UL;
        unsigned *l_1111 = (void*)0;
        unsigned *l_1112 = &g_249;
        unsigned ****l_1120 = &l_1118;
        unsigned *****l_1119[2];
        unsigned short *l_1125 = &l_963;
        int **l_1126 = &g_109;
        int **l_1127 = &g_1108;
        int i;
        for (i = 0; i < 2; i++)
            l_1119[i] = &l_1120;
        for (l_963 = 0; (l_963 <= 2); l_963 += 1)
        {
            unsigned l_1095 = 4294967286UL;
            int l_1096 = 0x42330919L;
            char *l_1097 = &g_205;
            for (g_222 = 0; (g_222 <= 2); g_222 += 1)
            {
                char *l_1087 = &g_205;
                int l_1090 = 0x73C92AB3L;
                int i;
                for (g_411 = 0; (g_411 <= 3); g_411 += 1)
                {
                    int *l_1084 = &g_49;
                    int i, j;
                    (***g_199) = 0xC309347BL;
                    (*l_991) = l_1084;
                    if (((**l_991) = (safe_sub_func_uint16_t_u_u((((**g_891) = l_1087) != ((safe_sub_func_int16_t_s_s(func_58((((g_121[g_411] & (0x3282AAC7L ^ ((**g_408) == (((l_1090 | ((*g_409) == (safe_mod_func_uint32_t_u_u(0xBD4B19BCL, (safe_sub_func_int8_t_s_s(((*g_409) , (((*g_731) = (*g_731)) & (**g_559))), l_1095)))))) && l_1090) < 1L)))) <= 1UL) == g_55), &l_1090, l_1095, (**g_772)), l_1096)) , l_1097)), g_1033))))
                    {
                        l_1100 = ((*g_109) = ((safe_mod_func_int16_t_s_s(l_1090, l_1090)) && ((void*)0 == (*g_788))));
                        if ((*g_201))
                            break;
                    }
                    else
                    {
                        (*g_731) = (**g_200);
                    }
                }
                return g_121[(g_10 + 1)];
            }
            for (g_157 = 0; (g_157 <= 3); g_157 += 1)
            {
                int *l_1109 = (void*)0;
                (*g_201) = (l_967[1] != (**g_771));
                for (g_532 = 0; (g_532 <= 3); g_532 += 1)
                {
                    int i, j, k;
                    return l_1057[g_10][g_157][(l_963 + 3)];
                }
                (***g_199) = ((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((func_69((safe_lshift_func_uint16_t_u_u(((+l_1100) || ((*g_409) = (l_1100 >= (l_1107 , (**l_991))))), l_1100)), g_1108, func_15(l_1109)) , 1L), g_774)), g_232)) > (*g_560));
            }
        }
    }
    g_1133 = l_1132;
    return g_354;
}







static int func_11(short p_12)
{
    int *l_22 = &g_7[3];
    char l_33 = (-3L);
    unsigned long long *l_541 = &g_532;
    int *l_609 = &g_99[3][1];
    int *l_699 = &g_49;
    short *l_702 = &g_365;
    long long l_707 = 0xCE495DFE9D8B7B39LL;
    unsigned char *l_708 = &g_74;
    int l_725 = (-7L);
    unsigned ****l_787[2][3][9] = {{{(void*)0, (void*)0, &g_785, (void*)0, &g_785, (void*)0, &g_785, &g_785, &g_785}, {(void*)0, (void*)0, &g_785, (void*)0, &g_785, (void*)0, &g_785, &g_785, &g_785}, {(void*)0, (void*)0, &g_785, (void*)0, &g_785, (void*)0, &g_785, &g_785, &g_785}}, {{(void*)0, (void*)0, &g_785, (void*)0, &g_785, (void*)0, &g_785, &g_785, &g_785}, {(void*)0, (void*)0, &g_785, (void*)0, &g_785, (void*)0, &g_785, &g_785, &g_785}, {(void*)0, (void*)0, &g_785, (void*)0, &g_785, (void*)0, &g_785, &g_785, &g_785}}};
    int l_800[10][7] = {{0x7B6C8956L, (-2L), 0x7B6C8956L, 0xE83B1F7FL, 1L, (-5L), (-10L)}, {0x7B6C8956L, (-2L), 0x7B6C8956L, 0xE83B1F7FL, 1L, (-5L), (-10L)}, {0x7B6C8956L, (-2L), 0x7B6C8956L, 0xE83B1F7FL, 1L, (-5L), (-10L)}, {0x7B6C8956L, (-2L), 0x7B6C8956L, 0xE83B1F7FL, 1L, (-5L), (-10L)}, {0x7B6C8956L, (-2L), 0x7B6C8956L, 0xE83B1F7FL, 1L, (-5L), (-10L)}, {0x7B6C8956L, (-2L), 0x7B6C8956L, 0xE83B1F7FL, 1L, (-5L), (-10L)}, {0x7B6C8956L, (-2L), 0x7B6C8956L, 0xE83B1F7FL, 1L, (-5L), (-10L)}, {0x7B6C8956L, (-2L), 0x7B6C8956L, 0xE83B1F7FL, 1L, (-5L), (-10L)}, {0x7B6C8956L, (-2L), 0x7B6C8956L, 0xE83B1F7FL, 1L, (-5L), (-10L)}, {0x7B6C8956L, (-2L), 0x7B6C8956L, 0xE83B1F7FL, 1L, (-5L), (-10L)}};
    unsigned short l_805 = 0xC081L;
    unsigned l_807 = 8UL;
    int * const ***l_860 = &g_771;
    int **l_865 = &g_424;
    int i, j, k;
    for (p_12 = 1; (p_12 >= 0); p_12 -= 1)
    {
        int *l_50 = &g_7[0];
        unsigned *l_527 = &g_249;
        unsigned char *l_528 = &g_74;
        int **l_536 = &g_109;
        int **l_537 = &l_22;
        int i;
    }
    return (*g_636);
}







static int * func_15(int * p_16)
{
    short l_534[7] = {1L, 6L, 1L, 6L, 1L, 6L, 1L};
    int *l_535[10] = {&g_7[3], &g_7[3], &g_7[0], &g_7[0], &g_7[3], &g_7[3], &g_7[3], &g_7[0], &g_7[0], &g_7[3]};
    int i;
    for (g_207 = 23; (g_207 < 8); g_207 = safe_sub_func_uint16_t_u_u(g_207, 6))
    {
        short l_531 = 0x26FDL;
        int *l_533[1];
        int i;
        for (i = 0; i < 1; i++)
            l_533[i] = &g_49;
        g_532 = l_531;
        l_534[4] = 0x92FA34F8L;
    }
    return l_535[3];


}







static char func_19(int * p_20, int * p_21)
{
    unsigned l_526 = 18446744073709551606UL;
    (**g_199) = (void*)0;

    ;
    p_21 = (void*)0;

    ;
    return l_526;
}







static int * func_23(int * p_24, unsigned long long p_25, int * p_26)
{
    unsigned char l_143 = 5UL;
    int l_144 = 0x62CF0DA5L;
    int l_154 = 0L;
    char *l_155 = &g_133;
    const int *l_162[5][4][4] = {{{&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}}, {{&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}}, {{&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}}, {{&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}}, {{&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}, {&g_55, &g_55, &g_7[1], &g_10}}};
    int l_165 = 0L;
    int *l_211 = &g_121[1];
    int **l_215 = &g_109;
    unsigned long long l_220 = 1UL;
    unsigned long long *l_221[7];
    unsigned char *l_228 = &g_74;
    unsigned short *l_231 = &g_232;
    long long *l_233[1][7][2] = {{{&g_210[1], &g_210[1]}, {&g_210[1], &g_210[1]}, {&g_210[1], &g_210[1]}, {&g_210[1], &g_210[1]}, {&g_210[1], &g_210[1]}, {&g_210[1], &g_210[1]}, {&g_210[1], &g_210[1]}}};
    const int l_360 = 1L;
    unsigned *l_464 = &g_249;
    unsigned **l_463 = &l_464;
    const unsigned l_485 = 18446744073709551615UL;
    int l_486[5][6] = {{0x450083CAL, 0xE78D3472L, 0x70B96563L, 8L, 8L, 0x70B96563L}, {0x450083CAL, 0xE78D3472L, 0x70B96563L, 8L, 8L, 0x70B96563L}, {0x450083CAL, 0xE78D3472L, 0x70B96563L, 8L, 8L, 0x70B96563L}, {0x450083CAL, 0xE78D3472L, 0x70B96563L, 8L, 8L, 0x70B96563L}, {0x450083CAL, 0xE78D3472L, 0x70B96563L, 8L, 8L, 0x70B96563L}};
    char l_489[3][4];
    int *l_521[6][1][1] = {{{&l_165}}, {{&l_165}}, {{&l_165}}, {{&l_165}}, {{&l_165}}, {{&l_165}}};
    short *l_524 = &g_269;
    int *l_525[2][1][5] = {{{&l_144, &l_144, (void*)0, &l_144, &l_144}}, {{&l_144, &l_144, (void*)0, &l_144, &l_144}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_221[i] = &g_222;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_489[i][j] = (-1L);
    }
    for (g_133 = 5; (g_133 >= 0); g_133 -= 1)
    {
        int *l_153[3][2] = {{(void*)0, &g_121[1]}, {(void*)0, &g_121[1]}, {(void*)0, &g_121[1]}};
        char *l_156 = &g_157;
        int l_163 = 0xD4091144L;
        int *l_164[8] = {&g_55, &g_55, &g_99[6][2], &g_55, &g_55, &g_99[6][2], &g_55, &g_55};
        int i, j;
        if ((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(func_69((l_144 = l_143), &l_154, &g_99[6][2]), 9L)) <= l_165), p_25)))
        {
            int l_166 = 0x7C0CF43AL;
            int *l_171 = (void*)0;
            int *l_172 = (void*)0;
            int l_173 = 0xE035C9A6L;
            unsigned char *l_174 = &l_143;
            int **l_175 = &l_164[1];
            int **l_176 = &l_171;
            (*l_176) = ((*l_175) = func_46(((*l_174) = (func_58(g_7[1], func_42(&l_144, ((l_166 = g_121[1]) , (safe_sub_func_uint32_t_u_u((((func_58(g_7[3], ((safe_lshift_func_uint16_t_u_s(p_25, g_55)) , (void*)0), (l_173 = l_166), ((p_26 != p_24) & p_25)) & (*p_26)) >= p_25) && p_25), 0x328A76B0L))), &g_7[3]), (*p_24), g_7[3]) || p_25))));

            ;
            ;
            return &g_55;


        }
        else
        {
            unsigned *l_182 = (void*)0;
            unsigned *l_184 = (void*)0;
            for (l_163 = 1; (l_163 <= 5); l_163 += 1)
            {
                unsigned short l_203 = 0x27C0L;
                for (l_165 = 5; (l_165 >= 0); l_165 -= 1)
                {
                    int i, j;
                    g_99[(l_163 + 1)][g_133] = g_99[(g_133 + 2)][g_133];
                    if (g_99[(g_133 + 2)][g_133])
                        break;
                }
                for (g_49 = 3; (g_49 >= 0); g_49 -= 1)
                {
                    int i, j;
                    if ((safe_add_func_uint32_t_u_u(g_99[g_133][g_49], g_99[g_133][(g_49 + 1)])))
                    {
                        const int **l_179 = &l_162[g_49][g_49][g_49];
                        int i, j, k;
                        (*l_179) = l_162[g_49][g_49][g_49];
                    }
                    else
                    {
                        unsigned **l_183 = &l_182;
                        char *l_204 = &g_205;
                        char *l_206[5] = {&g_133, &g_207, &g_133, &g_207, &g_133};
                        int l_208 = 0x92668A2AL;
                        int **l_209 = &l_164[7];
                        int i, j;
                        g_99[l_163][l_163] = (safe_mul_func_int16_t_s_s(0L, (((p_25 != (((*l_183) = l_182) != l_184)) >= (p_25 , (255UL | (((l_208 = ((*l_204) = (safe_rshift_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(0x2922L, (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((*l_156) = (safe_mod_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(((((safe_sub_func_int64_t_s_s(func_58(g_49, &g_7[3], g_99[g_133][(g_49 + 1)], p_25), p_25)) | (-8L)) , g_199) == (void*)0), p_25)) || l_203) && 1UL), (-1L)))), 3)), 2)))) & 0x44L) , g_133), g_55)))) | p_25) && 1UL)))) , 0x43DCL)));
                        (*l_209) = &g_99[g_133][(g_49 + 1)];
                        g_99[(g_49 + 1)][l_163] = ((0UL | 4294967291UL) , g_210[0]);
                        l_144 = ((&g_121[3] == (l_211 = &g_121[1])) & (**l_209));
                    }
                }
            }
        }
        for (g_157 = 1; (g_157 <= 5); g_157 += 1)
        {
            for (l_163 = 4; (l_163 >= 0); l_163 -= 1)
            {
                int **l_212 = &l_164[4];
                int i, j;
                (*l_212) = &g_99[g_133][l_163];
            }
            (*g_200) = (*g_200);
        }
    }
    (*l_215) = func_42(&g_10, (((safe_rshift_func_int8_t_s_s((~((*l_155) = p_25)), 6)) <= p_25) < p_25), p_24);

    ;
    if ((((0xA8C9BA8F97866B3FLL & g_49) >= ((safe_mod_func_int16_t_s_s(((**l_215) & (l_154 = (safe_mul_func_uint16_t_u_u(((l_220 < (g_222 = (p_25 , 0x62416D9B02917F3FLL))) < ((*l_231) = ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s((((*l_228) = p_25) < (0x0242F93AC7BCD1F5LL == (+(((void*)0 == g_229) ^ 0UL)))))) >= 0x9CL), 6)) , p_25), g_99[6][2])) > (**l_215)))), (**l_215))))), g_7[3])) > 0xC662BAD1L)) >= 0x2D332A9F6D975CF2LL))
    {
        unsigned char l_234 = 0xFBL;
        unsigned long long *l_243 = &l_220;
        int *l_317[5][9] = {{&g_7[0], &g_49, &g_7[0], &g_7[0], &g_7[3], (void*)0, (void*)0, &l_154, &g_55}, {&g_7[0], &g_49, &g_7[0], &g_7[0], &g_7[3], (void*)0, (void*)0, &l_154, &g_55}, {&g_7[0], &g_49, &g_7[0], &g_7[0], &g_7[3], (void*)0, (void*)0, &l_154, &g_55}, {&g_7[0], &g_49, &g_7[0], &g_7[0], &g_7[3], (void*)0, (void*)0, &l_154, &g_55}, {&g_7[0], &g_49, &g_7[0], &g_7[0], &g_7[3], (void*)0, (void*)0, &l_154, &g_55}};
        int *l_347 = (void*)0;
        int l_348 = 0xFD20CEAFL;
        int i, j;
        (*l_215) = p_26;

        ;
        (*l_215) = func_46(l_234);

        ;
        if (l_234)
        {
            return &g_99[6][2];


        }
        else
        {
            unsigned long long **l_244 = &l_221[0];
            const int l_245 = 0x9FDD9FC7L;
            unsigned *l_248 = &g_249;
            (*g_200) = (*g_200);
lbl_254:
            (*g_109) = ((void*)0 == &l_162[3][3][0]);
            (*g_109) = (((safe_mod_func_uint16_t_u_u((((g_133 , p_25) , p_26) == ((safe_mod_func_uint64_t_u_u((((safe_mod_func_uint32_t_u_u(((*l_248) = func_58((&g_222 != ((*l_244) = l_243)), p_24, l_245, (safe_mod_func_int8_t_s_s(l_234, g_99[6][2])))), (*g_109))) & l_245) , 0x3B4368622381DE45LL), (-1L))) , (void*)0)), p_25)) | l_234) != 0UL);
            for (g_205 = 0; (g_205 >= 2); g_205 = safe_add_func_uint64_t_u_u(g_205, 2))
            {
                for (l_154 = 0; (l_154 <= 1); ++l_154)
                {
                    int *l_255 = &g_10;
                    short *l_267 = (void*)0;
                    short *l_268 = &g_269;
                    int *l_272[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_272[i] = &l_144;
                    if (l_234)
                        goto lbl_254;
                }
            }
        }


        for (g_157 = (-6); (g_157 > 25); ++g_157)
        {
            unsigned l_282 = 0x2DCB3132L;
            char **l_302 = &l_155;
            int *l_342 = (void*)0;
        }
    }
    else
    {
        int *l_349 = &g_7[3];
        unsigned char *l_359 = &l_143;
        char *l_511 = &g_157;
        const char *l_512 = &l_489[1][2];
        (*g_200) = (void*)0;

        ;
        (*g_200) = (void*)0;
        for (l_144 = 0; (l_144 <= 3); l_144 += 1)
        {
            const int *l_361 = &l_154;
        }
        if (((**l_215) = (*l_349)))
        {
            unsigned l_390 = 1UL;
            int l_402 = 0L;
            int l_460 = 0x6763C7ADL;
            unsigned l_484 = 0x5C086458L;
            char **l_491 = &l_155;
            char ***l_490[5][3][4] = {{{&l_491, &l_491, &l_491, &l_491}, {&l_491, &l_491, &l_491, &l_491}, {&l_491, &l_491, &l_491, &l_491}}, {{&l_491, &l_491, &l_491, &l_491}, {&l_491, &l_491, &l_491, &l_491}, {&l_491, &l_491, &l_491, &l_491}}, {{&l_491, &l_491, &l_491, &l_491}, {&l_491, &l_491, &l_491, &l_491}, {&l_491, &l_491, &l_491, &l_491}}, {{&l_491, &l_491, &l_491, &l_491}, {&l_491, &l_491, &l_491, &l_491}, {&l_491, &l_491, &l_491, &l_491}}, {{&l_491, &l_491, &l_491, &l_491}, {&l_491, &l_491, &l_491, &l_491}, {&l_491, &l_491, &l_491, &l_491}}};
            int *l_508 = &g_55;
            int i, j, k;
            (*g_109) = ((((2L | (((*l_359) = ((g_74 = (0L < 0UL)) != 0xD1L)) == g_121[0])) || (*l_349)) , l_390) & (*p_24));
            for (g_133 = 0; (g_133 > (-30)); g_133--)
            {
                const int *l_395 = &g_7[3];
                char *l_399 = &g_207;
                const int l_412 = (-1L);
                int l_449 = 5L;
                int ***l_455[9] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                int ****l_454 = &l_455[6];
                char ***l_492 = &l_491;
                int i;
                for (l_154 = 24; (l_154 == (-25)); --l_154)
                {
                    char **l_398 = &l_155;
                    int l_403 = (-7L);
                    unsigned short *l_410 = &g_411;
                    short *l_444 = &g_269;
                    int *l_446 = (void*)0;
                    int *l_447 = &g_49;
                    int *l_448[6][9] = {{&g_10, &g_7[1], &g_99[3][3], &g_7[1], &g_10, &g_55, &g_10, &g_7[1], &g_99[3][3]}, {&g_10, &g_7[1], &g_99[3][3], &g_7[1], &g_10, &g_55, &g_10, &g_7[1], &g_99[3][3]}, {&g_10, &g_7[1], &g_99[3][3], &g_7[1], &g_10, &g_55, &g_10, &g_7[1], &g_99[3][3]}, {&g_10, &g_7[1], &g_99[3][3], &g_7[1], &g_10, &g_55, &g_10, &g_7[1], &g_99[3][3]}, {&g_10, &g_7[1], &g_99[3][3], &g_7[1], &g_10, &g_55, &g_10, &g_7[1], &g_99[3][3]}, {&g_10, &g_7[1], &g_99[3][3], &g_7[1], &g_10, &g_55, &g_10, &g_7[1], &g_99[3][3]}};
                    int i, j;
                }
                (*l_215) = (*l_215);
            }
            (*l_508) = ((+((safe_sub_func_uint32_t_u_u((g_74 || ((((-10L) == ((8UL || ((**g_408) = ((*l_349) , ((-9L) >= func_69(l_460, (p_25 , func_42(l_349, (*l_349), p_26)), &l_402))))) | 9UL)) >= (*l_349)) != 0x1FFAL)), 0x733357E4L)) ^ 0x7667E573D2036422LL)) , (*p_26));

            ;
            (*l_508) = ((**l_215) > ((l_511 = &g_157) == ((+1UL) , ((func_58((&l_349 == &l_162[4][2][1]), (*l_215), func_58((**g_408), p_26, (p_25 , 0x3FD91E4EL), p_25), p_25) , g_99[6][2]) , l_512))));
        }
        else
        {
            unsigned **l_515 = (void*)0;
            unsigned ***l_516 = &l_515;
            for (l_220 = 6; (l_220 == 5); l_220 = safe_sub_func_uint16_t_u_u(l_220, 5))
            {
                (*g_109) = (*p_24);
            }
            (*l_516) = l_515;
        }

        ;
    }

    ;

    g_55 = (g_269 , (((safe_sub_func_uint32_t_u_u((&l_360 == (((-1L) & ((*l_524) = ((g_99[3][1] = (safe_mul_func_int8_t_s_s(g_76, g_121[3]))) & func_58((**g_408), func_46((safe_add_func_uint32_t_u_u(((p_25 > 0x19B1L) <= p_25), g_503))), (*p_26), p_25)))) , p_24)), g_222)) , (-10L)) <= p_25));
    return &g_10;


}







static const unsigned short func_36(int * p_37, int * p_38, int p_39, unsigned p_40, int * p_41)
{
    char l_127 = 4L;
    int l_135[3];
    const int l_138 = 1L;
    int i;
    for (i = 0; i < 3; i++)
        l_135[i] = 0L;
    for (g_74 = (-3); (g_74 < 26); ++g_74)
    {
        const int *l_124 = &g_7[1];
        char *l_132 = &g_133;
        int *l_134 = &g_55;
        (*p_37) = func_58(p_40, l_124, (safe_lshift_func_uint16_t_u_s((l_127 <= 1L), ((((l_135[2] = (g_49 , (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, func_58((*l_124), l_124, ((*l_134) = (((*l_132) = p_40) && 0x20L)), (*l_124)))), 2)))) & l_127) || 0x1CL) == g_7[3]))), p_39);
        for (l_127 = (-14); (l_127 <= (-8)); l_127++)
        {
            if ((*g_109))
                break;
        }
    }
    return l_138;
}







static int * func_42(const int * p_43, int p_44, int * p_45)
{
    const unsigned char l_63 = 0xE1L;
    short l_100 = (-1L);
    int *l_110 = &g_55;
    int **l_111 = &g_109;
    int *l_120[5];
    int i;
    for (i = 0; i < 5; i++)
        l_120[i] = &g_121[1];
    for (g_49 = 0; (g_49 != (-18)); --g_49)
    {
        for (p_44 = (-16); (p_44 <= 26); p_44 = safe_add_func_int8_t_s_s(p_44, 1))
        {
            int *l_68 = &g_10;
            for (g_55 = 7; (g_55 > (-19)); g_55 = safe_sub_func_int16_t_s_s(g_55, 5))
            {
                unsigned char *l_73 = &g_74;
                unsigned *l_75 = &g_76;
                int *l_101 = (void*)0;
                int *l_102 = (void*)0;
                int *l_103 = (void*)0;
                int *l_104 = &g_99[2][5];
                g_109 = (func_58(p_44, &g_10, ((*l_104) = (l_63 ^ (safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s((l_68 == ((4294967288UL >= (func_69((((*l_75) = (g_7[3] == ((*l_73) = ((~(*l_68)) | p_44)))) , 1L), p_45, &g_49) != p_44)) , (void*)0)), (*p_43))), l_100)))), l_63) , &g_7[3]);

                ;
                return &g_99[2][0];


            }
        }
    }
    (*l_111) = l_110;

    ;
    (*l_111) = func_46(func_58((p_44 <= (0x34C778C533BF9523LL && (safe_mul_func_uint8_t_u_u(((((*l_110) = ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((**l_111) | g_99[6][2]), func_58((0x706CD8FDL <= (func_58((safe_mod_func_int16_t_s_s((**l_111), (p_44 & g_74))), p_45, (**l_111), p_44) , (**l_111))), p_43, (*g_109), (**l_111)))), (**l_111))) > (*p_43))) , (*l_110)) <= g_49), 0xA1L)))), (*l_111), (*p_43), g_99[3][3]));

    ;
    return (*l_111);


}







static int * func_46(unsigned char p_47)
{
    int *l_48 = &g_49;
    (*l_48) = g_10;
    return l_48;


}







static int func_58(unsigned long long p_59, const int * p_60, const int p_61, int p_62)
{
    int *l_106[9][3] = {{&g_99[6][2], &g_49, &g_55}, {&g_99[6][2], &g_49, &g_55}, {&g_99[6][2], &g_49, &g_55}, {&g_99[6][2], &g_49, &g_55}, {&g_99[6][2], &g_49, &g_55}, {&g_99[6][2], &g_49, &g_55}, {&g_99[6][2], &g_49, &g_55}, {&g_99[6][2], &g_49, &g_55}, {&g_99[6][2], &g_49, &g_55}};
    int **l_105[3];
    const int *l_108 = (void*)0;
    const int **l_107 = &l_108;
    int i, j;
    for (i = 0; i < 3; i++)
        l_105[i] = &l_106[2][1];
    p_60 = &g_7[3];

    ;
    (*l_107) = &p_61;

    ;
    (*l_107) = ((g_74 <= p_61) , &g_99[6][2]);

    ;
    return g_76;
}







static unsigned char func_69(char p_70, int * p_71, int * const p_72)
{
    int *l_78 = &g_7[3];
    int **l_77 = &l_78;
    int ***l_79 = &l_77;
    unsigned char l_84 = 0xE2L;
    int *l_98 = &g_99[6][2];
    (*l_79) = l_77;
lbl_85:
    for (g_74 = 17; (g_74 > 42); g_74 = safe_add_func_int16_t_s_s(g_74, 5))
    {
        for (g_76 = (-4); (g_76 == 16); g_76 = safe_add_func_uint64_t_u_u(g_76, 8))
        {
            l_84 = (*p_71);
            if ((*p_72))
                continue;
        }
        if (g_76)
            goto lbl_85;
    }
    (*l_98) = ((!(safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((***l_79) , g_76), (((safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((safe_mod_func_int16_t_s_s((((((***l_79) , 0x8AC37448L) == (safe_lshift_func_uint8_t_u_u((**l_77), g_7[3]))) , l_78) != (g_7[3] , &g_76)), g_10)) , (**l_79)) != &g_7[3]), g_7[2])), g_74)) , p_70) == (*l_78)))), p_70))) | (***l_79));
    return (*l_98);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_99[i][j], "g_99[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_121[i], "g_121[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_210[i], "g_210[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_666, "g_666", print_hash_value);
    transparent_crc(g_774, "g_774", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    transparent_crc(g_837, "g_837", print_hash_value);
    transparent_crc(g_897, "g_897", print_hash_value);
    transparent_crc(g_944, "g_944", print_hash_value);
    transparent_crc(g_1033, "g_1033", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
