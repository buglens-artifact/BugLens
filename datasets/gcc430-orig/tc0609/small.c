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



static const short g_2 = 0L;
static int g_5[4][3] = {{0xDB34E6D4L, 0xDB34E6D4L, 0x46DF37D4L}, {0xDB34E6D4L, 0xDB34E6D4L, 0x46DF37D4L}, {0xDB34E6D4L, 0xDB34E6D4L, 0x46DF37D4L}, {0xDB34E6D4L, 0xDB34E6D4L, 0x46DF37D4L}};
static int * volatile g_6[4] = {&g_5[3][2], &g_5[3][2], &g_5[3][2], &g_5[3][2]};
static int *g_32 = &g_5[1][0];
static int **g_31[6] = {&g_32, &g_32, &g_32, &g_32, &g_32, &g_32};
static const int g_80 = 0x1AA30D26L;
static volatile int g_84 = (-1L);
static volatile int g_85[8] = {(-3L), (-3L), (-7L), (-3L), (-3L), (-7L), (-3L), (-3L)};
static volatile int g_86[2][1][5] = {{{0x521EB7CCL, (-5L), 0x521EB7CCL, (-5L), 0x521EB7CCL}}, {{0x521EB7CCL, (-5L), 0x521EB7CCL, (-5L), 0x521EB7CCL}}};
static int g_87[9] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
static int g_92 = 9L;
static volatile int g_101 = 0xE8FFC0A9L;
static volatile int g_102 = (-1L);
static int g_103 = 0x2C7534BEL;
static int *g_109 = &g_5[3][0];
static int ** volatile g_108 = &g_109;
static unsigned char g_136[6] = {0x47L, 0x47L, 255UL, 0x47L, 0x47L, 255UL};
static unsigned short g_165 = 0UL;
static char g_167 = (-1L);
static int * const volatile ***g_171 = (void*)0;
static unsigned short g_242 = 65531UL;
static short g_257 = 0x78CBL;
static char *g_269 = (void*)0;
static char **g_268 = &g_269;
static char *** const volatile g_267 = &g_268;
static int ** volatile g_277 = &g_109;
static long long g_294[5] = {0xEB7C2CE1DBADABB3LL, 0xEB7C2CE1DBADABB3LL, 0xEB7C2CE1DBADABB3LL, 0xEB7C2CE1DBADABB3LL, 0xEB7C2CE1DBADABB3LL};
static int ** volatile g_307 = &g_109;
static unsigned long long g_322[2] = {0xC921DD54A5A2A510LL, 0xC921DD54A5A2A510LL};
static unsigned long long g_324 = 18446744073709551612UL;
static long long g_328 = 0xBF50137D2C3B5318LL;
static long long g_353[1] = {0xD051CAA546107686LL};
static int ** volatile g_367[8] = {&g_32, &g_32, &g_109, &g_32, &g_32, &g_109, &g_32, &g_32};
static int ** volatile g_368 = &g_109;
static short g_372 = 0xD2A3L;
static int * volatile g_374 = &g_87[1];
static int ** volatile g_376 = &g_109;
static int *g_394 = &g_87[4];
static int ** volatile g_393 = &g_394;
static int g_421 = 0x857F71BEL;
static int * volatile g_422 = (void*)0;
static int g_424 = 0xB3068C0FL;
static int * volatile g_423 = &g_424;
static volatile short g_447[6][10][4] = {{{(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}}, {{(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}}, {{(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}}, {{(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}}, {{(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}}, {{(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}, {(-2L), (-1L), 1L, 0L}}};
static volatile short *g_446 = &g_447[3][2][2];
static volatile short ** volatile g_445 = &g_446;
static char g_470 = 1L;
static int ** volatile g_519 = &g_109;
static int ** volatile g_534 = &g_32;
static unsigned short g_549 = 0UL;
static const int g_565 = 1L;
static const int *g_567 = (void*)0;
static const int ** volatile g_566 = &g_567;
static int g_577 = 1L;
static int *g_580 = &g_87[4];
static int g_585 = 7L;
static int g_617 = 0x511E5E6EL;
static int ***g_626 = &g_31[0];
static int ****g_625 = &g_626;
static volatile unsigned short g_634 = 7UL;
static volatile unsigned short *g_633 = &g_634;
static volatile unsigned short **g_632 = &g_633;
static volatile unsigned short *** volatile g_635 = &g_632;
static unsigned short ***g_695 = (void*)0;
static volatile unsigned char g_717 = 251UL;
static volatile unsigned char *g_716 = &g_717;
static volatile unsigned char * volatile *g_715 = &g_716;
static unsigned short g_725 = 0x0A39L;
static int g_749 = 0xFBE02569L;



static int func_1(void);
static int * const func_7(int * const * p_8, int ** p_9, char p_10, int * p_11);
static int * const * func_12(int * p_13, int p_14, int p_15);
static int func_16(unsigned p_17, long long p_18, unsigned short p_19);
static unsigned func_20(int * p_21, short p_22, int * p_23, unsigned short p_24, int ** p_25);
static int * func_26(int ** p_27, long long p_28, unsigned short p_29, unsigned p_30);
static long long func_46(unsigned short p_47);
static unsigned short func_48(unsigned p_49, unsigned short p_50, int * const * p_51, unsigned long long p_52);
static unsigned char func_60(int * p_61, int ** const * p_62);
static int * func_63(int * p_64, int ** p_65, int * p_66, unsigned char p_67);
static int func_1(void)
{
    int *l_4[7][10][3] = {{{&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}}, {{&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}}, {{&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}}, {{&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}}, {{&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}}, {{&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}}, {{&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}, {&g_5[3][0], &g_5[3][0], &g_5[3][0]}}};
    int **l_3[10] = {&l_4[0][2][2], &l_4[0][6][0], &l_4[0][2][2], &l_4[0][6][0], &l_4[0][2][2], &l_4[0][6][0], &l_4[0][2][2], &l_4[0][6][0], &l_4[0][2][2], &l_4[0][6][0]};
    int ***l_35 = (void*)0;
    int ***l_36 = &l_3[0];
    const unsigned l_37[7] = {0x56FAE7A4L, 0UL, 0x56FAE7A4L, 0UL, 0x56FAE7A4L, 0UL, 0x56FAE7A4L};
    unsigned short l_750[1];
    int * const l_754 = (void*)0;
    int * const *l_753 = &l_754;
    int * const **l_752 = &l_753;
    int **l_756 = &g_32;
    char **l_783 = &g_269;
    short **l_791[3];
    long long *l_793 = &g_353[0];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_750[i] = 0xD3A6L;
    for (i = 0; i < 3; i++)
        l_791[i] = (void*)0;
    g_6[1] = (g_2 , (void*)0);


    (*l_756) = func_7(((*l_752) = func_12(((7UL > g_5[3][0]) , &g_5[3][0]), func_16(func_20(func_26(g_31[5], ((g_5[3][0] | (safe_mul_func_int8_t_s_s(((&l_4[3][2][2] != ((*l_36) = (void*)0)) == l_37[1]), g_5[3][0]))) > g_2), g_2, g_5[2][2]), g_322[0], l_4[0][6][0], g_322[0], &g_580), l_750[0], g_80), g_80)), &l_4[2][2][2], g_565, &g_5[3][0]);

    ;
    ;
    ;
    ;
    (*g_32) = (safe_lshift_func_int16_t_s_s(0x4820L, 12));
    for (g_725 = (-23); (g_725 == 19); g_725 = safe_add_func_int64_t_s_s(g_725, 8))
    {
        unsigned long long l_785[1][1];
        int l_788[8][8] = {{0xA9E8C3A2L, 0xA9E8C3A2L, 0x3C760089L, 0x4105471AL, 0xB05A4B86L, 0x4105471AL, 0x3C760089L, 0xA9E8C3A2L}, {0xA9E8C3A2L, 0xA9E8C3A2L, 0x3C760089L, 0x4105471AL, 0xB05A4B86L, 0x4105471AL, 0x3C760089L, 0xA9E8C3A2L}, {0xA9E8C3A2L, 0xA9E8C3A2L, 0x3C760089L, 0x4105471AL, 0xB05A4B86L, 0x4105471AL, 0x3C760089L, 0xA9E8C3A2L}, {0xA9E8C3A2L, 0xA9E8C3A2L, 0x3C760089L, 0x4105471AL, 0xB05A4B86L, 0x4105471AL, 0x3C760089L, 0xA9E8C3A2L}, {0xA9E8C3A2L, 0xA9E8C3A2L, 0x3C760089L, 0x4105471AL, 0xB05A4B86L, 0x4105471AL, 0x3C760089L, 0xA9E8C3A2L}, {0xA9E8C3A2L, 0xA9E8C3A2L, 0x3C760089L, 0x4105471AL, 0xB05A4B86L, 0x4105471AL, 0x3C760089L, 0xA9E8C3A2L}, {0xA9E8C3A2L, 0xA9E8C3A2L, 0x3C760089L, 0x4105471AL, 0xB05A4B86L, 0x4105471AL, 0x3C760089L, 0xA9E8C3A2L}, {0xA9E8C3A2L, 0xA9E8C3A2L, 0x3C760089L, 0x4105471AL, 0xB05A4B86L, 0x4105471AL, 0x3C760089L, 0xA9E8C3A2L}};
        int *l_790 = (void*)0;
        char ***l_794 = &l_783;
        char ****l_795 = &l_794;
        long long *l_796 = &g_353[0];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_785[i][j] = 0x72B297F4683F8B51LL;
        }
        for (g_324 = 0; (g_324 >= 3); ++g_324)
        {
            char l_771 = 0x97L;
            int **l_789[8];
            int i;
            for (i = 0; i < 8; i++)
                l_789[i] = &g_109;
            for (g_424 = 4; (g_424 >= 5); g_424 = safe_add_func_int32_t_s_s(g_424, 5))
            {
                unsigned char *l_772 = &g_136[3];
                char ***l_784 = &g_268;
                int l_786 = 0xB49E33EEL;
                short *l_787[10] = {&g_257, (void*)0, &g_257, (void*)0, &g_257, (void*)0, &g_257, (void*)0, &g_257, (void*)0};
                short ***l_792 = &l_791[1];
                int i;
                (*g_368) = (*g_519);
                (*l_792) = l_791[0];
            }
        }
        (*g_580) = ((l_793 = l_793) != ((&g_268 != ((*l_795) = l_794)) , l_796));
    }
    return (***g_626);
}







static int * const func_7(int * const * p_8, int ** p_9, char p_10, int * p_11)
{
    int * const l_755 = &g_421;
    return l_755;


}







static int * const * func_12(int * p_13, int p_14, int p_15)
{
    return (*g_626);


}







static int func_16(unsigned p_17, long long p_18, unsigned short p_19)
{
    int *l_751 = &g_5[3][0];
    (**g_626) = l_751;

    ;
    return (*l_751);
}







static unsigned func_20(int * p_21, short p_22, int * p_23, unsigned short p_24, int ** p_25)
{
    int *l_690 = (void*)0;
    unsigned long long l_706 = 5UL;
    unsigned char *l_714 = &g_136[2];
    unsigned char ** const l_713 = &l_714;
    unsigned short * const *l_730 = (void*)0;
    int l_748 = (-7L);
    for (g_103 = 4; (g_103 >= 0); g_103 -= 1)
    {
        unsigned short ***l_694 = (void*)0;
        int l_719 = 0xCEBDC75DL;
        unsigned long long *l_745 = &g_324;
        (***g_625) = l_690;

        ;
        for (g_617 = 5; (g_617 >= 0); g_617 -= 1)
        {
            short *l_696 = &g_372;
            char ****l_699 = (void*)0;
            char ***l_701 = &g_268;
            char ****l_700 = &l_701;
            int ** const *l_711[8] = {&g_31[5], &g_31[4], &g_31[5], &g_31[4], &g_31[5], &g_31[4], &g_31[5], &g_31[4]};
            unsigned short *l_712 = &g_165;
            int i;
            if ((((*l_696) = (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s((g_136[g_617] , (l_694 == (g_695 = (void*)0))))), 4))) > (((*l_712) = (safe_sub_func_uint64_t_u_u((((*l_700) = &g_268) != ((((g_136[g_617] >= ((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_706, 6UL)), (safe_div_func_int8_t_s_s(((((((safe_div_func_uint32_t_u_u(func_60((g_136[g_617] , (*p_25)), l_711[0]), l_706)) <= 0x5D416572C90614EBLL) , g_257) | p_24) <= p_22) & g_565), g_5[1][2])))) != 0UL)) != 0x1BL) > g_167) , &g_268)), 0x61E4E69B1801E4D4LL))) , (*g_633))))
            {
                return g_2;
            }
            else
            {
                for (g_549 = 0; (g_549 <= 7); g_549 += 1)
                {
                    unsigned l_718 = 0UL;
                    for (g_577 = 0; (g_577 <= 3); g_577 += 1)
                    {
                        int i, j, k;
                        (*g_580) = 0x65026712L;
                        (*g_394) = (l_713 == g_715);
                        return g_447[g_617][(g_549 + 1)][g_577];
                    }
                    for (g_424 = 0; (g_424 <= 4); g_424 += 1)
                    {
                        (**g_626) = (*g_376);
                        (*p_25) = (*p_25);
                    }
                    if (l_718)
                        break;
                }
            }
            for (g_585 = 3; (g_585 >= 0); g_585 -= 1)
            {
                char l_726[3][1];
                unsigned short **l_731 = &l_712;
                int l_732[1];
                char **l_733[4] = {&g_269, &g_269, &g_269, &g_269};
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_726[i][j] = 0xABL;
                }
                for (i = 0; i < 1; i++)
                    l_732[i] = 0x5C97F786L;
                for (g_242 = 0; (g_242 <= 0); g_242 += 1)
                {
                    l_719 = 0xDF1C61ABL;
                }
            }
            for (g_421 = 4; (g_421 >= 0); g_421 -= 1)
            {
                (**p_25) = 0xDFB8DBD7L;
                (**g_626) = (*p_25);

                ;
                (*g_580) = l_719;
            }
        }

        ;
        if ((*g_423))
            continue;
        (*g_394) = (g_353[0] , ((p_22 || ((g_749 = (p_24 & (p_22 > ((l_748 = (safe_add_func_int64_t_s_s((-10L), ((((*l_745) = 0x9A8249A1B1CBD932LL) <= ((void*)0 == &g_328)) || ((safe_mod_func_uint8_t_u_u((p_22 || 0x82L), l_719)) ^ l_719))))) | l_719)))) & l_706)) < l_719));
    }
    (***g_625) = (*g_534);
    return g_447[3][3][0];
}







static int * func_26(int ** p_27, long long p_28, unsigned short p_29, unsigned p_30)
{
    int *l_53[7] = {(void*)0, (void*)0, &g_5[3][2], (void*)0, (void*)0, &g_5[3][2], (void*)0};
    int *l_68[1][2];
    int ** const *l_270 = (void*)0;
    unsigned char l_410 = 0x33L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_68[i][j] = &g_5[3][1];
    }
    (*g_423) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((((func_46(func_48(p_28, (l_53[6] == (*p_27)), ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(7UL, 0x40DA8F9E1C210293LL)), func_60(func_63((*p_27), p_27, l_68[0][0], p_30), l_270))), g_294[3])) , (void*)0), l_410)) >= 0L) & g_549) & p_28) >= g_5[3][0]) & g_585), g_585)), 0x8AL)), p_29)), p_28));

    ;
    ;
    ;
    return (*g_307);


}







static long long func_46(unsigned short p_47)
{
    long long *l_640 = &g_353[0];
    int l_643 = (-8L);
    unsigned l_644[7] = {4294967294UL, 4294967294UL, 0UL, 4294967294UL, 4294967294UL, 0UL, 4294967294UL};
    long long *l_645 = &g_328;
    unsigned l_654 = 0x96360996L;
    int ** const *l_655[8][6];
    unsigned char *l_658 = (void*)0;
    unsigned char **l_657 = &l_658;
    unsigned char ***l_656 = &l_657;
    short *l_659 = (void*)0;
    short *l_660 = (void*)0;
    short *l_661 = &g_372;
    short l_669 = 0x6C71L;
    long long l_670[7] = {0x82B2FB7C0F2B5ED9LL, (-1L), 0x82B2FB7C0F2B5ED9LL, (-1L), 0x82B2FB7C0F2B5ED9LL, (-1L), 0x82B2FB7C0F2B5ED9LL};
    long long l_677[1];
    long long l_689 = 2L;
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
            l_655[i][j] = &g_31[2];
    }
    for (i = 0; i < 1; i++)
        l_677[i] = 0xB535326946EF3BAELL;
    (*g_635) = g_632;
    (*g_580) = (((((g_294[2] = ((*l_640) = ((g_85[2] | (safe_lshift_func_uint16_t_u_u(p_47, 10))) || 0L))) <= (~((*l_645) = (safe_add_func_uint32_t_u_u((l_643 || g_549), l_644[5]))))) | ((((safe_mul_func_int8_t_s_s(l_643, (p_47 != func_60(((+((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((((safe_add_func_int64_t_s_s((p_47 , (-1L)), 0xBA3BFB981764BC26LL)) == p_47) , p_47) & l_654) >= l_644[2]), l_644[5])), g_585)) != p_47)) , (void*)0), l_655[0][1])))) , l_656) == &l_657) ^ 1L)) ^ 5UL) , p_47);
    (**g_626) = (*g_376);
    (*g_394) = (&l_644[5] == ((safe_mod_func_uint16_t_u_u((*g_633), ((g_294[2] , (g_565 , (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s(l_677[0], 6)) != (safe_rshift_func_uint16_t_u_u(((((safe_unary_minus_func_uint64_t_u(((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(p_47, (safe_div_func_uint8_t_u_u(g_5[3][0], ((safe_div_func_uint16_t_u_u((~8UL), l_689)) , 0x12L))))) && 6UL), 0xABL)) <= 0UL))) | 0x845CL) > g_167) > (-1L)), 9))), 4)))) , 1UL))) , (void*)0));
    return g_549;
}







static unsigned short func_48(unsigned p_49, unsigned short p_50, int * const * p_51, unsigned long long p_52)
{
    unsigned l_419 = 0UL;
    int l_427 = 0L;
    int *l_438 = &g_421;
    int l_494[6] = {(-8L), 0x6C1FDE58L, (-8L), 0x6C1FDE58L, (-8L), 0x6C1FDE58L};
    char l_552 = 0x55L;
    int ***l_579 = &g_31[4];
    const int **l_630[2][5][9] = {{{(void*)0, (void*)0, (void*)0, &g_567, (void*)0, &g_567, (void*)0, &g_567, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_567, (void*)0, &g_567, (void*)0, &g_567, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_567, (void*)0, &g_567, (void*)0, &g_567, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_567, (void*)0, &g_567, (void*)0, &g_567, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_567, (void*)0, &g_567, (void*)0, &g_567, (void*)0}}, {{(void*)0, (void*)0, (void*)0, &g_567, (void*)0, &g_567, (void*)0, &g_567, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_567, (void*)0, &g_567, (void*)0, &g_567, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_567, (void*)0, &g_567, (void*)0, &g_567, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_567, (void*)0, &g_567, (void*)0, &g_567, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_567, (void*)0, &g_567, (void*)0, &g_567, (void*)0}}};
    const int ***l_629 = &l_630[0][2][2];
    const int ****l_628 = &l_629;
    int i, j, k;
    for (g_328 = (-28); (g_328 > (-4)); g_328++)
    {
        unsigned l_430 = 4294967293UL;
        int ** const *l_440 = (void*)0;
        volatile short ** volatile l_449[6];
        int i;
        for (i = 0; i < 6; i++)
            l_449[i] = (void*)0;
        for (g_92 = 0; (g_92 >= (-19)); --g_92)
        {
            short l_425 = (-8L);
            int ** const *l_429 = &g_31[5];
            unsigned char * const *l_456 = (void*)0;
            unsigned char * const **l_455 = &l_456;
            for (p_49 = (-10); (p_49 != 11); p_49 = safe_add_func_int32_t_s_s(p_49, 9))
            {
                unsigned l_428 = 4294967295UL;
                int *l_433 = &g_92;
                int l_439 = 3L;
                int * const *l_453 = &g_32;
            }
            (*l_455) = (void*)0;
        }
        return p_49;
    }
    if ((*l_438))
    {
        unsigned long long l_475 = 0x91DF9AF5E7923DDBLL;
        int *l_477 = (void*)0;
        int l_485[5][1] = {{0x7285DC7DL}, {0x7285DC7DL}, {0x7285DC7DL}, {0x7285DC7DL}, {0x7285DC7DL}};
        int *l_487[5];
        int l_511 = 0xEFDE8491L;
        int i, j;
        for (i = 0; i < 5; i++)
            l_487[i] = &g_424;
        (*g_394) = p_50;
        for (g_421 = 0; (g_421 < (-9)); --g_421)
        {
            unsigned long long l_474 = 0x7AD08F7D0F967181LL;
            int l_483 = 0xB9B127E9L;
            int **l_495 = (void*)0;
            int **l_496 = &g_109;
            unsigned short *l_509 = (void*)0;
            unsigned short *l_510 = &g_165;
            for (g_372 = 20; (g_372 == (-28)); g_372 = safe_sub_func_int8_t_s_s(g_372, 3))
            {
                int *l_461 = &g_421;
                int * const *l_476 = &l_438;
                int **l_486 = &l_438;
                for (g_103 = 3; (g_103 >= 0); g_103 -= 1)
                {
                    unsigned short *l_462[4] = {&g_242, &g_165, &g_242, &g_165};
                    unsigned char l_463 = 0x61L;
                    char *l_468 = &g_167;
                    char *l_469 = &g_470;
                    unsigned char l_471[5][8] = {{0xECL, 0xECL, 1UL, 0xECL, 0xECL, 1UL, 0xECL, 0xECL}, {0xECL, 0xECL, 1UL, 0xECL, 0xECL, 1UL, 0xECL, 0xECL}, {0xECL, 0xECL, 1UL, 0xECL, 0xECL, 1UL, 0xECL, 0xECL}, {0xECL, 0xECL, 1UL, 0xECL, 0xECL, 1UL, 0xECL, 0xECL}, {0xECL, 0xECL, 1UL, 0xECL, 0xECL, 1UL, 0xECL, 0xECL}};
                    unsigned char *l_472 = &g_136[2];
                    unsigned char *l_473 = &l_471[2][4];
                    int ** const *l_478 = &g_31[5];
                    int *l_484[7][8] = {{(void*)0, &g_5[3][0], &g_87[4], &g_424, &g_87[4], &g_5[3][0], (void*)0, &l_483}, {(void*)0, &g_5[3][0], &g_87[4], &g_424, &g_87[4], &g_5[3][0], (void*)0, &l_483}, {(void*)0, &g_5[3][0], &g_87[4], &g_424, &g_87[4], &g_5[3][0], (void*)0, &l_483}, {(void*)0, &g_5[3][0], &g_87[4], &g_424, &g_87[4], &g_5[3][0], (void*)0, &l_483}, {(void*)0, &g_5[3][0], &g_87[4], &g_424, &g_87[4], &g_5[3][0], (void*)0, &l_483}, {(void*)0, &g_5[3][0], &g_87[4], &g_424, &g_87[4], &g_5[3][0], (void*)0, &l_483}, {(void*)0, &g_5[3][0], &g_87[4], &g_424, &g_87[4], &g_5[3][0], (void*)0, &l_483}};
                    int i, j;
                    if (((((l_475 = (p_50 = (+((l_463 = (func_60(l_461, &g_31[3]) < 0x88CBD1C8L)) <= (p_50 >= (((safe_lshift_func_uint16_t_u_u((((*l_461) >= ((((((safe_sub_func_uint8_t_u_u((~((*l_473) = (((*l_469) = ((*l_468) = p_52)) < ((*l_472) = l_471[2][1])))), p_50)) & (*l_461)) , (*l_438)) == (-7L)) ^ p_50) <= (*l_461))) >= 7L), 13)) , l_474) >= (*l_461))))))) < g_87[4]) , (*g_446)) , (*l_461)))
                    {
                        l_476 = p_51;

                        ;
                        (*g_393) = (func_60(l_477, l_478) , ((*g_277) = ((**l_478) = l_461)));

                        ;
                        ;
                        ;
                        l_483 = (((safe_div_func_uint16_t_u_u(((func_60(&l_427, &g_31[5]) >= l_474) , (((g_167 , p_49) , (safe_rshift_func_int8_t_s_u(l_474, 6))) || p_50)), l_474)) < (***l_478)) & 0x94D402D4L);
                    }
                    else
                    {
                        (**l_478) = l_477;

                        ;
                        return g_136[5];
                    }

                    ;
                    ;
                    ;
                    ;
                    if (p_49)
                        break;
                    l_483 = (l_485[4][0] = l_474);
                }

                ;
                (*l_486) = func_63(((*l_486) = &l_483), &g_32, l_487[2], g_165);
            }
            (*l_496) = func_63((*g_376), &g_32, &l_483, (safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((*l_438), func_60(&l_483, &g_31[5]))) == p_49), (safe_mul_func_int8_t_s_s(l_494[3], p_49)))));
            for (g_324 = 0; (g_324 >= 15); ++g_324)
            {
                for (l_419 = 1; (l_419 != 47); l_419++)
                {
                    (*g_374) = 1L;
                }
            }
            l_494[3] = (g_80 == ((**l_496) != (safe_mul_func_int16_t_s_s((-1L), (((g_421 ^ 0UL) >= (((safe_add_func_uint32_t_u_u((((safe_mod_func_uint64_t_u_u(p_50, g_167)) , ((*l_510) = (((safe_rshift_func_uint16_t_u_u((&g_353[0] == (void*)0), p_52)) , p_50) , g_86[0][0][3]))) <= g_136[2]), 0L)) , l_511) , (**l_496))) , (*g_446))))));
        }

        ;
        ;
        ;
        ;
        for (g_257 = 21; (g_257 < (-30)); g_257 = safe_sub_func_int64_t_s_s(g_257, 1))
        {
            for (l_419 = 9; (l_419 < 41); l_419 = safe_add_func_int64_t_s_s(l_419, 6))
            {
                unsigned short l_516 = 0x03F1L;
                int *l_517[9] = {&g_5[2][2], (void*)0, &g_5[2][2], (void*)0, &g_5[2][2], (void*)0, &g_5[2][2], (void*)0, &g_5[2][2]};
                int **l_518 = (void*)0;
                int i;
                if (l_516)
                    break;
                (*g_519) = l_517[0];

                ;
                for (g_470 = (-18); (g_470 >= 16); g_470 = safe_add_func_int16_t_s_s(g_470, 6))
                {
                    unsigned short l_522 = 0x64E3L;
                    if (l_522)
                        break;
                }
            }
        }

        ;
        for (g_257 = 0; (g_257 >= (-17)); g_257 = safe_sub_func_int32_t_s_s(g_257, 1))
        {
            int *l_525 = &g_5[3][0];
            for (g_328 = 7; (g_328 >= 0); g_328 -= 1)
            {
                int **l_526 = &g_32;
                int i;
                (*l_526) = l_525;

                ;
                if ((*g_32))
                    break;
            }
        }
    }
    else
    {
        int l_531 = 8L;
        int l_533 = 0x0DD89D09L;
        int ** const *l_544[1];
        unsigned l_559 = 0xA5EF3537L;
        int **l_561 = (void*)0;
        unsigned char l_588 = 0x7DL;
        unsigned long long l_604[1][4] = {{0x3EA97BF32AAA48F8LL, 0xA76B498909DC5050LL, 0x3EA97BF32AAA48F8LL, 0xA76B498909DC5050LL}};
        short l_605 = 0xFA04L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_544[i] = &g_31[5];
        for (g_421 = 0; (g_421 <= 3); g_421 = safe_add_func_uint8_t_u_u(g_421, 6))
        {
            unsigned l_532 = 4294967288UL;
            l_532 = ((*g_394) = (safe_add_func_int8_t_s_s(p_50, l_531)));
            if (l_532)
                continue;
            l_531 = (**g_368);
            if (l_533)
            {
                (*g_534) = (*g_307);

                ;
                return l_533;
            }
            else
            {
                (*g_394) = p_52;
                (*g_368) = (*g_519);
                (*g_394) = l_532;
            }
        }
        for (l_419 = 0; (l_419 != 37); ++l_419)
        {
            unsigned char *l_543 = (void*)0;
            short *l_550[10];
            int l_551 = 0x7CBB6A8BL;
            int *l_554[9][1][2] = {{{(void*)0, &g_87[8]}}, {{(void*)0, &g_87[8]}}, {{(void*)0, &g_87[8]}}, {{(void*)0, &g_87[8]}}, {{(void*)0, &g_87[8]}}, {{(void*)0, &g_87[8]}}, {{(void*)0, &g_87[8]}}, {{(void*)0, &g_87[8]}}, {{(void*)0, &g_87[8]}}};
            int *l_555 = &l_427;
            int ** const *l_556 = &g_31[1];
            short l_613 = 0x634FL;
            int *l_616[8][3][10] = {{{&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}}, {{&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}}, {{&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}}, {{&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}}, {{&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}}, {{&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}}, {{&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}}, {{&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}, {&l_533, &l_533, &l_533, &l_533, &l_533, (void*)0, &l_533, &l_533, (void*)0, &l_533}}};
            int *****l_627 = &g_625;
            const int *****l_631 = &l_628;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_550[i] = &g_257;
        }
    }

    ;
    ;
    ;
    ;
    return g_257;
}







static unsigned char func_60(int * p_61, int ** const * p_62)
{
    unsigned char l_290 = 0xE6L;
    short *l_347 = &g_257;
    unsigned long long l_354 = 0x0D2039C2A8EAFBACLL;
    int l_360 = 1L;
    const char *l_407 = &g_167;
    const char **l_406 = &l_407;
    const char *** const l_405 = &l_406;
    for (g_242 = (-6); (g_242 < 50); g_242++)
    {
        unsigned long long l_281 = 0x4B632DDB291FB98ALL;
        int l_305 = 0x7969E0E3L;
        const long long * const l_335 = &g_328;
        unsigned char *l_337 = &g_136[4];
        int *l_391 = &l_305;
        int **l_409 = &g_109;
    }
    return g_103;
}







static int * func_63(int * p_64, int ** p_65, int * p_66, unsigned char p_67)
{
    unsigned long long l_69 = 0x603003393D3B28C3LL;
    int *l_113[9] = {(void*)0, (void*)0, &g_103, (void*)0, (void*)0, &g_103, (void*)0, (void*)0, &g_103};
    const int *l_124 = &g_103;
    const int **l_123[3][3] = {{&l_124, &l_124, &l_124}, {&l_124, &l_124, &l_124}, {&l_124, &l_124, &l_124}};
    const int ***l_122 = &l_123[2][2];
    const int ***l_126 = &l_123[2][0];
    int **l_170 = &l_113[6];
    char l_172[1];
    unsigned char l_180[6][9][1] = {{{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}};
    long long l_187 = 0x4CCD30ACD80C3351LL;
    char **l_266 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_172[i] = 1L;
    if ((+l_69))
    {
        int *l_71[7][8][4] = {{{&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}}, {{&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}}, {{&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}}, {{&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}}, {{&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}}, {{&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}}, {{&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}, {&g_5[1][2], (void*)0, &g_5[1][0], &g_5[3][0]}}};
        int **l_70 = &l_71[6][1][0];
        int *l_83 = (void*)0;
        int *l_99 = &g_87[4];
        int i, j, k;
        (*l_70) = (*p_65);


        (*l_70) = (*p_65);
        for (l_69 = 0; (l_69 == 51); l_69++)
        {
            int l_96[2][10] = {{0x0E530E04L, 0x0045B34FL, (-1L), 0x68EBBCFAL, 0x68EBBCFAL, (-1L), 0x0045B34FL, 0x0E530E04L, (-1L), 0x0E530E04L}, {0x0E530E04L, 0x0045B34FL, (-1L), 0x68EBBCFAL, 0x68EBBCFAL, (-1L), 0x0045B34FL, 0x0E530E04L, (-1L), 0x0E530E04L}};
            int i, j;
            for (p_67 = 0; (p_67 == 39); p_67 = safe_add_func_uint32_t_u_u(p_67, 6))
            {
                const int *l_79 = &g_80;
                const int **l_78 = &l_79;
                int *l_100 = &l_96[0][9];
                if ((safe_add_func_uint64_t_u_u(p_67, (((*l_70) != ((*l_78) = (*p_65))) || (safe_rshift_func_uint16_t_u_s(p_67, (~((void*)0 != &p_65))))))))
                {
                    (*l_70) = l_83;
                }
                else
                {
                    int *l_90 = &g_87[6];
                    int *l_91 = &g_92;
                    if ((*g_32))
                        break;
                    for (g_87[4] = (-6); (g_87[4] >= 9); g_87[4]++)
                    {
                        int *l_93 = &g_92;
                        l_91 = l_90;

                        ;
                        l_93 = (*p_65);

                        ;
                    }

                    ;
                }

                ;
                for (g_92 = 0; (g_92 < (-13)); g_92 = safe_sub_func_uint8_t_u_u(g_92, 2))
                {
                    if ((((((**p_65) , (((((*l_78) != (void*)0) >= (((*p_66) <= g_86[1][0][1]) , l_96[0][9])) , ((safe_mul_func_int16_t_s_s(g_92, 0x3BC9L)) < (p_67 >= 1UL))) || p_67)) , g_86[1][0][4]) <= p_67) == 0xB0059F0AL))
                    {
                        return l_99;


                    }
                    else
                    {
                        return (*p_65);


                    }
                }
                for (g_92 = 0; (g_92 <= 3); g_92 += 1)
                {
                    for (g_103 = 0; (g_103 <= 7); g_103 += 1)
                    {
                        int i;
                        g_31[g_92] = g_31[(g_92 + 2)];
                    }
                }
            }
            (*l_99) = (l_69 == (safe_unary_minus_func_int32_t_s(0xC20F127DL)));
        }
        for (g_92 = 0; (g_92 > 14); g_92 = safe_add_func_uint64_t_u_u(g_92, 6))
        {
            int * const l_107 = &g_87[4];
            (*g_108) = l_107;

            ;
            if ((p_67 || g_80))
            {
                int *l_112 = (void*)0;
                for (p_67 = 0; (p_67 == 57); ++p_67)
                {
                    (*l_70) = l_112;
                }
                for (l_69 = 0; (l_69 <= 3); l_69 += 1)
                {
                    int i;
                    g_87[(l_69 + 4)] = (*g_32);
                    for (g_103 = 3; (g_103 >= 0); g_103 -= 1)
                    {
                        int i, j, k;
                        l_71[(g_103 + 2)][(l_69 + 4)][l_69] = l_113[6];
                        (*l_70) = (void*)0;
                    }
                }
                (*l_99) = ((p_67 == p_67) , (*g_32));
            }
            else
            {
                int l_114[3][3][1] = {{{0xDAD0BAEEL}, {0xDAD0BAEEL}, {0xDAD0BAEEL}}, {{0xDAD0BAEEL}, {0xDAD0BAEEL}, {0xDAD0BAEEL}}, {{0xDAD0BAEEL}, {0xDAD0BAEEL}, {0xDAD0BAEEL}}};
                int i, j, k;
                if (l_114[1][1][0])
                {
                    int *l_115 = &g_87[4];
                    (*l_70) = &l_114[1][1][0];


                    return l_115;


                }
                else
                {
                    const int ****l_125 = &l_122;
                    unsigned char *l_135 = &g_136[2];
                    (*l_99) = (*p_66);
                    (*l_99) = 0xB3FD2CF1L;
                    if ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((*l_135) = ((safe_add_func_int8_t_s_s(((((&g_31[5] != (l_126 = ((*l_125) = l_122))) , (((*p_64) , ((p_67 , (((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_114[1][1][0], 1)), (*l_107))) , (*l_107)) >= ((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0xE3L, ((g_2 || p_67) > 18446744073709551615UL))), 0xDE03L)) != g_87[4]))) | g_84)) , g_87[6])) && p_67) && g_92), p_67)) < p_67)) && (-4L)), g_87[4])), p_67)))
                    {
                        int l_141 = 0x434A8DDDL;
                        int l_142 = 0x56CCD6F8L;
                        l_142 = (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(((*l_99) = (*g_109)), l_141)), (****l_125)));
                    }
                    else
                    {
                        if ((***l_126))
                            break;
                    }
                    for (l_69 = (-18); (l_69 > 44); l_69++)
                    {
                        unsigned l_155 = 0xF9891189L;
                    }
                }
            }
            (*g_109) = (*p_66);
        }


    }
    else
    {
        unsigned short *l_164 = &g_165;
        char *l_166 = &g_167;
        int l_168 = 0xAB319EDEL;
        int ***l_169[7][6][4] = {{{&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}}, {{&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}}, {{&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}}, {{&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}}, {{&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}}, {{&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}}, {{&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}, {&g_31[3], (void*)0, &g_31[2], &g_31[5]}}};
        int i, j, k;
        l_172[0] = (safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((p_67 != ((g_5[3][0] > 0xD9L) <= (&g_32 != (l_170 = ((l_168 = (safe_rshift_func_uint16_t_u_u(((*l_164) = p_67), ((((p_67 , ((((*l_166) = g_103) , (*l_124)) < (g_136[5] > 0xE5L))) , g_5[3][0]) , (void*)0) != (void*)0)))) , (void*)0))))) , &l_169[1][5][1]) == g_171) ^ g_84), g_5[3][0])), (-1L)));

        ;
    }

    ;
    for (p_67 = 0; (p_67 != 25); p_67 = safe_add_func_uint32_t_u_u(p_67, 1))
    {
        int l_177 = 9L;
        int *l_186 = &l_177;
        int l_229 = 0L;
        unsigned short *l_232 = (void*)0;
        const int ***l_236 = &l_123[0][0];
    }
    return (*p_65);


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
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_85[i], "g_85[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_86[i][j][k], "g_86[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_87[i], "g_87[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_136[i], "g_136[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_294[i], "g_294[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_322[i], "g_322[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_353[i], "g_353[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_447[i][j][k], "g_447[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_717, "g_717", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
