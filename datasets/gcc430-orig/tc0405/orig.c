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



static int g_2 = 0x35568345L;
static int g_18 = 0x513244D5L;
static int *g_17 = &g_18;
static int g_53[7] = {0x6CEDDA56L, 0xCC545E21L, 0x6CEDDA56L, 0xCC545E21L, 0x6CEDDA56L, 0xCC545E21L, 0x6CEDDA56L};
static unsigned char g_60 = 5UL;
static int *g_79 = &g_18;
static int **g_78 = &g_79;
static int **g_80 = &g_79;
static int **g_81 = (void*)0;
static long long g_82 = 0x11A46C428827C80CLL;
static char g_98 = (-1L);
static unsigned g_100 = 0x217CF0AEL;
static short g_102 = 1L;
static unsigned short g_124 = 0xD0CCL;
static unsigned long long g_126 = 0x5EE8129AC59B5037LL;
static int g_127 = (-1L);
static unsigned long long g_157[3] = {0xB1BCEFE97C8AD55DLL, 0xB1BCEFE97C8AD55DLL, 0xB1BCEFE97C8AD55DLL};
static short *g_159 = &g_102;
static short **g_158 = &g_159;
static char g_170 = 0xE7L;
static long long g_183 = (-2L);
static unsigned char *g_224 = (void*)0;
static unsigned long long g_233 = 0xEACF7F055A45ED28LL;
static int g_235 = 0L;
static unsigned long long g_282 = 1UL;
static int g_284 = 0x598E06BFL;
static unsigned g_299[2][5] = {{0UL, 0UL, 0x4CCE56ECL, 0UL, 0UL}, {0UL, 0UL, 0x4CCE56ECL, 0UL, 0UL}};
static int ***g_306 = (void*)0;
static int ****g_305 = &g_306;
static char g_372[8][4] = {{0x9FL, (-6L), 0x13L, (-6L)}, {0x9FL, (-6L), 0x13L, (-6L)}, {0x9FL, (-6L), 0x13L, (-6L)}, {0x9FL, (-6L), 0x13L, (-6L)}, {0x9FL, (-6L), 0x13L, (-6L)}, {0x9FL, (-6L), 0x13L, (-6L)}, {0x9FL, (-6L), 0x13L, (-6L)}, {0x9FL, (-6L), 0x13L, (-6L)}};
static unsigned char g_377 = 0x0EL;
static unsigned short *g_393[3][6][9] = {{{&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}}, {{&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}}, {{&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}, {&g_124, &g_124, &g_124, &g_124, &g_124, (void*)0, &g_124, (void*)0, &g_124}}};
static unsigned short **g_392 = &g_393[0][4][2];
static short g_421 = 0xBAE1L;
static int g_518[9][10] = {{0L, 1L, 1L, 0xBC7E5D7EL, (-1L), 7L, 0x8395C168L, 5L, 0x8395C168L, 7L}, {0L, 1L, 1L, 0xBC7E5D7EL, (-1L), 7L, 0x8395C168L, 5L, 0x8395C168L, 7L}, {0L, 1L, 1L, 0xBC7E5D7EL, (-1L), 7L, 0x8395C168L, 5L, 0x8395C168L, 7L}, {0L, 1L, 1L, 0xBC7E5D7EL, (-1L), 7L, 0x8395C168L, 5L, 0x8395C168L, 7L}, {0L, 1L, 1L, 0xBC7E5D7EL, (-1L), 7L, 0x8395C168L, 5L, 0x8395C168L, 7L}, {0L, 1L, 1L, 0xBC7E5D7EL, (-1L), 7L, 0x8395C168L, 5L, 0x8395C168L, 7L}, {0L, 1L, 1L, 0xBC7E5D7EL, (-1L), 7L, 0x8395C168L, 5L, 0x8395C168L, 7L}, {0L, 1L, 1L, 0xBC7E5D7EL, (-1L), 7L, 0x8395C168L, 5L, 0x8395C168L, 7L}, {0L, 1L, 1L, 0xBC7E5D7EL, (-1L), 7L, 0x8395C168L, 5L, 0x8395C168L, 7L}};
static unsigned char *g_526 = &g_377;
static unsigned char **g_531 = (void*)0;
static unsigned char ***g_655 = (void*)0;
static char *g_695[1] = {&g_98};
static char **g_694 = &g_695[0];
static unsigned *g_701 = &g_100;
static unsigned **g_700 = &g_701;
static short g_718 = 5L;
static unsigned short g_722[10] = {0x4547L, 0x48CFL, 0x4547L, 0x48CFL, 0x4547L, 0x48CFL, 0x4547L, 0x48CFL, 0x4547L, 0x48CFL};
static int g_747 = 0x0E9CA711L;
static unsigned short g_916 = 65535UL;
static unsigned long long *g_1001[4] = {&g_282, &g_282, &g_282, &g_282};
static unsigned long long **g_1000[4][1][2] = {{{(void*)0, &g_1001[2]}}, {{(void*)0, &g_1001[2]}}, {{(void*)0, &g_1001[2]}}, {{(void*)0, &g_1001[2]}}};
static short g_1108[3] = {(-7L), (-7L), (-7L)};
static int g_1201[6][10] = {{0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L}, {0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L}, {0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L}, {0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L}, {0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L}, {0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L, 0xD1F93CC4L, 0x0D98DF8AL, 0xD1F93CC4L}};



static unsigned long long func_1(void);
static int * func_3(short p_4, int * p_5, int * p_6, int * p_7, int * p_8);
static int * func_9(short p_10, short p_11, int p_12);
static short func_13(int * p_14, char p_15, int p_16);
static unsigned short func_19(long long p_20, int * p_21, int * p_22);
static char func_31(unsigned p_32, unsigned short p_33, int * p_34);
static char func_39(unsigned short p_40, unsigned p_41, int * p_42, unsigned short p_43, long long p_44);
static unsigned short func_45(unsigned long long p_46, unsigned long long p_47, int * p_48, int * p_49);
static int func_54(unsigned p_55);
static unsigned func_64(unsigned char * p_65, char p_66, short p_67);
static unsigned long long func_1(void)
{
    long long l_50 = 0x9A2A67F6A191A83ALL;
    int *l_51 = &g_18;
    int *l_1200 = &g_1201[5][6];
    unsigned char **l_1226[3];
    unsigned long long l_1255[1];
    int i;
    for (i = 0; i < 3; i++)
        l_1226[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1255[i] = 0xF267C7DA30AA94EBLL;
    if (g_2)
    {
        char l_398 = 0x12L;
        int **l_552 = &l_51;
        (*l_552) = func_3(g_2, func_9(((*g_159) = func_13(g_17, (func_19(((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(1UL, 3)), 1UL)) , g_18), &g_18, ((*l_552) = ((safe_rshift_func_int8_t_s_s((g_18 | (safe_add_func_int8_t_s_s(func_31((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(func_39(func_45(((((((&g_18 != &g_18) >= g_18) , g_2) || 65533UL) >= l_50) , 0xD711A53FDE7504EDLL), g_18, l_51, &g_18), g_53[6], l_51, (*l_51), l_398), g_518[8][9])), g_372[5][1])), l_398, l_51), (*l_51)))), 6)) , l_51))) | 0UL), l_398)), l_50, l_50), l_1200, l_1200, l_1200);
    }
    else
    {
        char **l_1231[10] = {&g_695[0], &g_695[0], (void*)0, &g_695[0], &g_695[0], (void*)0, &g_695[0], &g_695[0], (void*)0, &g_695[0]};
        int l_1237 = 9L;
        int i;
        (*l_51) = (&g_224 == ((*l_1200) , l_1226[0]));
        for (g_377 = 11; (g_377 == 32); g_377 = safe_add_func_uint32_t_u_u(g_377, 1))
        {
            char **l_1232 = &g_695[0];
            unsigned short *l_1238 = &g_722[0];
            int l_1241 = 1L;
            int l_1246[5][5];
            int *l_1247 = &g_235;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1246[i][j] = 1L;
            }
            (*g_17) = (safe_add_func_int32_t_s_s((l_1231[5] != l_1232), (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_1237, (((*l_1238) = 0xD10AL) , (safe_div_func_uint16_t_u_u((l_1241 = 0xF26CL), ((safe_mul_func_int16_t_s_s((*l_51), l_1237)) && (safe_mod_func_uint16_t_u_u((func_19(l_1246[0][3], (*g_78), l_1247) , 65535UL), (**g_158))))))))), (*g_526)))));
        }
        for (g_127 = 0; (g_127 > 25); g_127 = safe_add_func_uint32_t_u_u(g_127, 9))
        {
            int ****l_1254 = &g_306;
            (*l_1200) = (safe_mod_func_uint8_t_u_u((((((*g_159) = (**g_158)) > (func_45(((safe_sub_func_uint8_t_u_u(((void*)0 == l_1254), 3L)) , 18446744073709551615UL), (*l_51), (*g_80), (*g_80)) , l_1237)) || (*l_51)) , (*g_526)), (*g_526)));
        }
        (*l_1200) &= (l_1255[0] |= (l_1237 > (0x0FL & (((*g_701) = (*l_51)) < (*g_17)))));
    }
    return (*l_1200);
}







static int * func_3(short p_4, int * p_5, int * p_6, int * p_7, int * p_8)
{
    unsigned char *l_1208 = (void*)0;
    unsigned char **l_1209 = &l_1208;
    int *l_1210 = (void*)0;
    char *l_1219[7];
    int l_1220[3];
    long long *l_1221[6] = {&g_82, (void*)0, &g_82, (void*)0, &g_82, (void*)0};
    int l_1222 = 0x2E8A54C0L;
    int l_1223 = 0x3BB60D36L;
    int l_1224 = (-1L);
    long long l_1225[3];
    int i;
    for (i = 0; i < 7; i++)
        l_1219[i] = &g_372[5][2];
    for (i = 0; i < 3; i++)
        l_1220[i] = 0xF9C7B258L;
    for (i = 0; i < 3; i++)
        l_1225[i] = 1L;
    (*g_78) = func_9(((safe_mul_func_uint16_t_u_u(l_1223, p_4)) >= g_1201[5][6]), p_4, (*p_6));
    return p_7;
}







static int * func_9(short p_10, short p_11, int p_12)
{
    int l_1140 = 9L;
    int l_1143 = 0x57D38BEBL;
    char **l_1164 = &g_695[0];
    unsigned *l_1170[7] = {&g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100};
    short ***l_1185 = &g_158;
    short ****l_1184 = &l_1185;
    unsigned long long **l_1197 = (void*)0;
    int *l_1199 = &g_53[6];
    int i;
    if (((*g_17) = ((safe_rshift_func_uint8_t_u_u(0x5FL, 7)) ^ 0x17L)))
    {
        int *l_1139 = &g_53[4];
        for (p_11 = 0; (p_11 != (-21)); p_11--)
        {
            return l_1139;
        }
    }
    else
    {
        return &g_235;
    }
    p_12 = (l_1140 ^ (-1L));
    for (g_170 = 0; (g_170 == 19); g_170 = safe_add_func_int8_t_s_s(g_170, 1))
    {
        int l_1155 = 0x36AE0A6BL;
        int *l_1161 = &l_1155;
        unsigned short l_1169 = 0x3B1EL;
        int l_1180 = 0x6B5BBC88L;
        int *l_1194 = (void*)0;
        l_1143 = p_12;
        for (g_100 = (-1); (g_100 > 21); g_100 = safe_add_func_uint8_t_u_u(g_100, 2))
        {
            unsigned char l_1156 = 252UL;
            int l_1163 = 0x11F0ACCCL;
            int *l_1177[10][3][8] = {{{&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}}, {{&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}}, {{&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}}, {{&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}}, {{&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}}, {{&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}}, {{&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}}, {{&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}}, {{&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}}, {{&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}, {&g_127, (void*)0, &g_518[8][9], &g_284, &g_127, (void*)0, &g_518[0][0], &g_747}}};
            int *l_1192 = (void*)0;
            int *l_1193[7] = {&g_53[6], (void*)0, &g_53[6], (void*)0, &g_53[6], (void*)0, &g_53[6]};
            int i, j, k;
            if (p_10)
                break;
        }
    }
    for (p_11 = 4; (p_11 >= (-25)); p_11 = safe_sub_func_int32_t_s_s(p_11, 8))
    {
        unsigned long long ***l_1198 = &g_1000[3][0][0];
        (*l_1198) = l_1197;
        l_1199 = l_1199;
    }
    return &g_53[6];
}







static short func_13(int * p_14, char p_15, int p_16)
{
    unsigned l_1116 = 0UL;
    unsigned char *l_1119 = &g_60;
    int *l_1134 = (void*)0;
    for (g_126 = 0; (g_126 <= 60); g_126 = safe_add_func_uint8_t_u_u(g_126, 9))
    {
        int *l_1115 = &g_53[1];
        (*l_1115) ^= (*p_14);
    }
    (*g_17) = (l_1116 = (*p_14));
    (*p_14) &= (65535UL <= ((0x310FL ^ ((safe_rshift_func_int8_t_s_u(p_15, 3)) < 1L)) , p_15));
    (*g_17) = (*g_17);
    return (*g_159);
}







static unsigned short func_19(long long p_20, int * p_21, int * p_22)
{
    int ***l_565 = &g_80;
    unsigned long long l_567 = 4UL;
    int l_642[2][9][4] = {{{(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}}, {{(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}, {(-1L), 5L, (-1L), 1L}}};
    int *l_644[10] = {&g_53[6], &g_53[6], &g_53[6], &g_53[6], &g_53[6], &g_53[6], &g_53[6], &g_53[6], &g_53[6], &g_53[6]};
    unsigned char ***l_651 = (void*)0;
    long long l_732[8][10][3] = {{{(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}}, {{(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}}, {{(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}}, {{(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}}, {{(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}}, {{(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}}, {{(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}}, {{(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}, {(-5L), 0xF41336C75F594D30LL, 0x4EAAB8FFBD8139CALL}}};
    int l_745 = 1L;
    unsigned char l_765[4][9][5] = {{{7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}}, {{7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}}, {{7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}}, {{7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}, {7UL, 0UL, 0x23L, 0xF2L, 0x12L}}};
    unsigned char *l_787[7];
    int l_866[7] = {0x664A6321L, (-6L), 0x664A6321L, (-6L), 0x664A6321L, (-6L), 0x664A6321L};
    unsigned long long l_887[6][7][2] = {{{0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}}, {{0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}}, {{0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}}, {{0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}}, {{0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}}, {{0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}, {0x4B1A8AF38D5EEC06LL, 0xF84D4569BFF62C71LL}}};
    short *l_1026 = (void*)0;
    unsigned **l_1052[6] = {&g_701, &g_701, &g_701, &g_701, &g_701, &g_701};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_787[i] = (void*)0;
    (*p_22) = 0x8B80ED6AL;
    for (p_20 = 29; (p_20 >= (-15)); --p_20)
    {
        unsigned l_561 = 1UL;
        int ***l_564 = &g_78;
        unsigned char *l_566 = (void*)0;
        unsigned long long *l_568[9];
        unsigned l_569 = 0x9181C547L;
        unsigned *l_570 = &g_100;
        short *l_579 = &g_421;
        int l_645 = 0xA84AB3B4L;
        unsigned l_676 = 0xE77BC856L;
        unsigned char l_684 = 5UL;
        int *l_712 = &l_642[0][3][0];
        int l_865 = 1L;
        int l_889 = (-2L);
        unsigned short **l_955 = &g_393[0][4][2];
        int *l_980 = &l_745;
        unsigned long long l_1019[6][6] = {{0x6AA65D19118AE780LL, 0x6AA65D19118AE780LL, 2UL, 18446744073709551615UL, 0x4B5B5AB860FF59A4LL, 18446744073709551615UL}, {0x6AA65D19118AE780LL, 0x6AA65D19118AE780LL, 2UL, 18446744073709551615UL, 0x4B5B5AB860FF59A4LL, 18446744073709551615UL}, {0x6AA65D19118AE780LL, 0x6AA65D19118AE780LL, 2UL, 18446744073709551615UL, 0x4B5B5AB860FF59A4LL, 18446744073709551615UL}, {0x6AA65D19118AE780LL, 0x6AA65D19118AE780LL, 2UL, 18446744073709551615UL, 0x4B5B5AB860FF59A4LL, 18446744073709551615UL}, {0x6AA65D19118AE780LL, 0x6AA65D19118AE780LL, 2UL, 18446744073709551615UL, 0x4B5B5AB860FF59A4LL, 18446744073709551615UL}, {0x6AA65D19118AE780LL, 0x6AA65D19118AE780LL, 2UL, 18446744073709551615UL, 0x4B5B5AB860FF59A4LL, 18446744073709551615UL}};
        short *l_1027 = &g_102;
        char l_1030 = 0x4AL;
        int l_1073 = 9L;
        int *l_1090 = &g_53[4];
        int *l_1091 = (void*)0;
        unsigned char ***l_1107 = &g_531;
        long long l_1112 = 9L;
        int i, j;
        for (i = 0; i < 9; i++)
            l_568[i] = &g_282;
        (*g_17) ^= (safe_sub_func_uint32_t_u_u(((*l_570) = (p_20 > p_20)), p_20));
    }
    return p_20;
}







static char func_31(unsigned p_32, unsigned short p_33, int * p_34)
{
    int ****l_545 = &g_306;
    for (g_170 = 0; (g_170 <= 27); g_170 = safe_add_func_uint16_t_u_u(g_170, 2))
    {
        unsigned l_548 = 0UL;
        int *l_551 = &g_235;
        (*l_551) = (l_545 != ((safe_mul_func_int8_t_s_s((~l_548), ((*g_526) &= (safe_add_func_int8_t_s_s(0L, 0x3FL))))) , l_545));
        if ((*l_551))
            continue;
    }
    return g_127;
}







static char func_39(unsigned short p_40, unsigned p_41, int * p_42, unsigned short p_43, long long p_44)
{
    int l_401[2][10] = {{0x511FBB4AL, 0x8BAE10A6L, 0x511FBB4AL, 0x8BAE10A6L, 0x511FBB4AL, 0x8BAE10A6L, 0x511FBB4AL, 0x8BAE10A6L, 0x511FBB4AL, 0x8BAE10A6L}, {0x511FBB4AL, 0x8BAE10A6L, 0x511FBB4AL, 0x8BAE10A6L, 0x511FBB4AL, 0x8BAE10A6L, 0x511FBB4AL, 0x8BAE10A6L, 0x511FBB4AL, 0x8BAE10A6L}};
    int *l_404 = &g_53[2];
    unsigned char l_440 = 1UL;
    int l_465 = 1L;
    char l_499[10][1][1] = {{{0x07L}}, {{0x07L}}, {{0x07L}}, {{0x07L}}, {{0x07L}}, {{0x07L}}, {{0x07L}}, {{0x07L}}, {{0x07L}}, {{0x07L}}};
    short **l_515 = (void*)0;
    unsigned char **l_530 = &g_224;
    int i, j, k;
    if ((((func_45(p_41, g_299[1][3], p_42, &l_401[0][7]) | 1L) != (safe_add_func_uint16_t_u_u((func_45(g_377, l_401[1][2], l_404, &l_401[0][7]) , (*l_404)), (**g_158)))) == (*l_404)))
    {
        short l_405[9] = {0x7395L, 0xD23CL, 0x7395L, 0xD23CL, 0x7395L, 0xD23CL, 0x7395L, 0xD23CL, 0x7395L};
        int l_427 = 0L;
        int *l_441 = &l_401[0][7];
        int l_486[4] = {5L, (-10L), 5L, (-10L)};
        unsigned char *l_487[9] = {&l_440, &g_377, &l_440, &g_377, &l_440, &g_377, &l_440, &g_377, &l_440};
        short **l_517 = &g_159;
        int i;
        if ((0x800EL ^ 1UL))
        {
            int *l_422[8] = {&g_235, &g_235, &g_235, &g_235, &g_235, &g_235, &g_235, &g_235};
            int i;
            (*l_404) |= (l_405[7] < p_44);
            for (g_102 = 17; (g_102 < 6); g_102 = safe_sub_func_int8_t_s_s(g_102, 3))
            {
                int *l_408 = &g_53[6];
                (*g_78) = l_408;
            }
            for (g_98 = 19; (g_98 > (-25)); g_98--)
            {
                short *l_420 = &g_421;
                g_235 ^= ((p_44 != (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u(l_405[7])), (safe_add_func_uint64_t_u_u(func_45((p_44 , ((safe_add_func_int16_t_s_s((-1L), ((*l_420) = ((*g_159) = (p_41 || (safe_rshift_func_uint8_t_u_s(((*l_404) | p_40), 6))))))) && p_41)), p_43, l_422[2], p_42), l_405[3]))))) & (*l_404));
                return l_405[7];
            }
            l_427 &= (safe_div_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(l_405[7], func_64(&g_60, g_102, (**g_158)))) > ((((-1L) || g_299[0][3]) | (func_45(p_44, g_233, p_42, p_42) || p_41)) , 0x35171614L)), l_405[7]));
        }
        else
        {
            unsigned long long *l_428 = &g_282;
            unsigned l_429 = 0UL;
            int l_480 = (-1L);
            int ****l_505 = (void*)0;
            short **l_513 = (void*)0;
            short l_527[10][2][9] = {{{0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}, {0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}}, {{0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}, {0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}}, {{0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}, {0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}}, {{0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}, {0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}}, {{0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}, {0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}}, {{0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}, {0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}}, {{0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}, {0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}}, {{0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}, {0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}}, {{0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}, {0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}}, {{0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}, {0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L, 0L, 0x8A62L}}};
            int **l_535 = &l_441;
            int i, j, k;
            (*l_404) = (p_42 == (void*)0);
            if ((((*l_428) = 0UL) ^ (l_429 > (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((*g_159), ((safe_div_func_uint8_t_u_u((((l_429 , ((safe_lshift_func_uint16_t_u_s((l_427 = l_405[7]), 2)) > (l_405[7] | (&g_157[1] == (((l_440 < (func_45(g_60, g_102, l_441, (*g_78)) == (*l_404))) , p_41) , (void*)0))))) , (*l_404)) , p_40), p_40)) || (**g_78)))), p_43)), 4)))))
            {
                long long l_450[7] = {0x1351F54939A4021FLL, 0x1351F54939A4021FLL, 0xBB7B7C7D884C1480LL, 0x1351F54939A4021FLL, 0x1351F54939A4021FLL, 0xBB7B7C7D884C1480LL, 0x1351F54939A4021FLL};
                unsigned l_466 = 0x215978BFL;
                int i;
                for (g_60 = 0; (g_60 <= 23); g_60++)
                {
                    long long l_451 = (-6L);
                    unsigned char *l_458 = &g_60;
                    int *l_464[5][8] = {{&g_18, &g_18, &l_401[1][2], &g_18, &g_18, &g_235, &g_18, &g_18}, {&g_18, &g_18, &l_401[1][2], &g_18, &g_18, &g_235, &g_18, &g_18}, {&g_18, &g_18, &l_401[1][2], &g_18, &g_18, &g_235, &g_18, &g_18}, {&g_18, &g_18, &l_401[1][2], &g_18, &g_18, &g_235, &g_18, &g_18}, {&g_18, &g_18, &l_401[1][2], &g_18, &g_18, &g_235, &g_18, &g_18}};
                    int i, j;
                }
                if ((~l_466))
                {
                    for (p_41 = 1; (p_41 <= 6); p_41 += 1)
                    {
                        unsigned *l_467 = &g_299[0][4];
                        int i;
                        (*l_441) ^= l_450[p_41];
                        (*g_80) = &l_427;
                    }
                }
                else
                {
                    int l_472 = 0L;
                    unsigned char *l_473 = &g_60;
                    (*l_404) = ((((p_40 = (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_472, 4)), l_429))) >= (((*l_473) = l_472) ^ p_44)) > func_64(&g_377, (l_466 , ((((safe_mod_func_uint8_t_u_u(0UL, (-8L))) | (((func_64(&g_377, l_429, (*l_441)) <= 0x94B103E8L) > 0L) > 0x0213L)) , (*p_42)) == (*p_42))), (*l_441))) || 3L);
                    return g_284;
                }
            }
            else
            {
                short l_502[9][3] = {{0x7BE4L, 0L, 0x3DF9L}, {0x7BE4L, 0L, 0x3DF9L}, {0x7BE4L, 0L, 0x3DF9L}, {0x7BE4L, 0L, 0x3DF9L}, {0x7BE4L, 0L, 0x3DF9L}, {0x7BE4L, 0L, 0x3DF9L}, {0x7BE4L, 0L, 0x3DF9L}, {0x7BE4L, 0L, 0x3DF9L}, {0x7BE4L, 0L, 0x3DF9L}};
                int l_508 = 0x6749C93BL;
                int *l_509[3];
                unsigned char ***l_528 = (void*)0;
                unsigned char ***l_529[1][3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_509[i] = &g_18;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_529[i][j] = (void*)0;
                }
                if ((*p_42))
                {
                    unsigned l_481 = 1UL;
                    if ((safe_lshift_func_uint16_t_u_u(p_44, (*l_441))))
                    {
                        (*l_404) &= (*p_42);
                        (*l_404) |= (&g_60 == (p_43 , (void*)0));
                        return g_421;
                    }
                    else
                    {
                        (*l_404) ^= l_429;
                        l_480 = (**g_80);
                        (*l_441) |= (*p_42);
                    }
                    (*l_404) ^= l_481;
                    (*l_441) = (**g_80);
                }
                else
                {
                    long long *l_492 = &g_183;
                    int *l_493[1];
                    unsigned char **l_524 = &l_487[2];
                    unsigned char **l_525[7][3][9] = {{{(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}}, {{(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}}, {{(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}}, {{(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}}, {{(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}}, {{(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}}, {{(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}, {(void*)0, &g_224, &g_224, &g_224, &g_224, (void*)0, &g_224, (void*)0, &g_224}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_493[i] = (void*)0;
                    if (((safe_rshift_func_uint8_t_u_s(func_45((((safe_mod_func_uint8_t_u_u(((*l_441) |= p_41), l_486[0])) ^ (p_41 , func_64(l_487[2], g_157[0], (**g_158)))) > (((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(p_40, 7)), ((*l_492) &= p_40))) == g_157[0]) , p_44)), l_429, l_493[0], &l_427), 6)) == p_44))
                    {
                        int **l_494 = &l_441;
                        (*l_494) = &l_480;
                        return p_40;
                    }
                    else
                    {
                        unsigned *l_503 = (void*)0;
                        unsigned *l_504 = &g_299[1][0];
                        int l_510 = 0x23A1A346L;
                        (*l_441) &= (l_510 = (safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(l_499[1][0][0], (safe_mul_func_uint16_t_u_u(p_41, (l_502[7][1] , func_54(((*l_504) &= 0xC097875AL))))))), ((l_505 != &g_306) == (func_45(g_372[4][1], (l_508 = (safe_div_func_uint8_t_u_u(g_18, g_372[7][1]))), l_509[2], p_42) == 1L)))));
                    }
                    for (g_284 = (-21); (g_284 == 9); ++g_284)
                    {
                        short ***l_514 = &g_158;
                        short ***l_516[4][3] = {{(void*)0, (void*)0, &l_515}, {(void*)0, (void*)0, &l_515}, {(void*)0, (void*)0, &l_515}, {(void*)0, (void*)0, &l_515}};
                        int i, j;
                        (*l_441) |= ((p_41 < (((*l_514) = l_513) == (l_517 = l_515))) != g_127);
                        if (g_518[8][9])
                            break;
                    }
                    if (((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_u(((g_126 , 4L) == func_45(p_41, ((safe_lshift_func_uint16_t_u_s((p_43 = (((*l_524) = (void*)0) != (g_526 = (g_224 = &g_377)))), 2)) ^ (func_45(p_40, ((*g_305) != (*g_305)), &l_508, (*g_78)) != p_41)), p_42, &l_486[0])), 11)))) < (*l_441)))
                    {
                        return g_183;
                    }
                    else
                    {
                        l_493[0] = p_42;
                        (*l_404) = (-9L);
                    }
                    (*l_404) = l_527[2][0][6];
                }
                g_531 = (l_530 = &g_224);
                (*l_441) = (g_299[0][3] <= g_82);
                for (g_284 = 2; (g_284 >= (-30)); g_284--)
                {
                    char l_534 = 0L;
                    return l_534;
                }
            }
            (*l_535) = (*g_80);
            p_42 = p_42;
        }
    }
    else
    {
        int *l_536 = &g_235;
        unsigned long long *l_541[2];
        int *l_542 = &l_401[1][2];
        int i;
        for (i = 0; i < 2; i++)
            l_541[i] = &g_126;
        (*g_80) = l_536;
        (*l_536) &= func_45((g_157[0] = (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((((*g_78) = l_536) != l_536), p_44)), 9))), (*l_404), &l_401[0][7], (l_542 = (void*)0));
    }
    return p_40;
}







static unsigned short func_45(unsigned long long p_46, unsigned long long p_47, int * p_48, int * p_49)
{
    int *l_52 = &g_53[6];
    int l_61 = 1L;
    int l_283 = 0x5EEC50EDL;
    unsigned char *l_323 = (void*)0;
    short *l_341 = &g_102;
    unsigned long long l_388[2][7] = {{0x1B7C50531CE2904CLL, 0x1B7C50531CE2904CLL, 1UL, 0x1B7C50531CE2904CLL, 0x1B7C50531CE2904CLL, 1UL, 0x1B7C50531CE2904CLL}, {0x1B7C50531CE2904CLL, 0x1B7C50531CE2904CLL, 1UL, 0x1B7C50531CE2904CLL, 0x1B7C50531CE2904CLL, 1UL, 0x1B7C50531CE2904CLL}};
    unsigned long long l_394 = 0x08A17AF3AFFDF95FLL;
    unsigned long long l_396 = 8UL;
    int i, j;
    l_52 = &g_18;
    for (p_47 = 2; (p_47 <= 6); p_47 += 1)
    {
        unsigned char *l_59[9] = {&g_60, &g_60, (void*)0, &g_60, &g_60, (void*)0, &g_60, &g_60, (void*)0};
        int *l_234 = &g_235;
        int l_265 = 0xEA9A851CL;
        unsigned l_275 = 0x3BE30DEAL;
        unsigned short l_326 = 0x97EFL;
        char l_336 = 5L;
        long long *l_391[9][7] = {{(void*)0, &g_183, &g_82, &g_82, &g_183, (void*)0, &g_183}, {(void*)0, &g_183, &g_82, &g_82, &g_183, (void*)0, &g_183}, {(void*)0, &g_183, &g_82, &g_82, &g_183, (void*)0, &g_183}, {(void*)0, &g_183, &g_82, &g_82, &g_183, (void*)0, &g_183}, {(void*)0, &g_183, &g_82, &g_82, &g_183, (void*)0, &g_183}, {(void*)0, &g_183, &g_82, &g_82, &g_183, (void*)0, &g_183}, {(void*)0, &g_183, &g_82, &g_82, &g_183, (void*)0, &g_183}, {(void*)0, &g_183, &g_82, &g_82, &g_183, (void*)0, &g_183}, {(void*)0, &g_183, &g_82, &g_82, &g_183, (void*)0, &g_183}};
        unsigned char l_395 = 1UL;
        unsigned *l_397 = &g_100;
        int i, j;
    }
    return p_47;
}







static int func_54(unsigned p_55)
{
    int *l_104 = &g_53[6];
    int **l_105[10][7][3] = {{{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}};
    int *l_106 = (void*)0;
    unsigned char *l_129 = &g_60;
    short l_232 = (-9L);
    int i, j, k;
    l_106 = l_104;
    for (g_98 = 2; (g_98 >= 0); g_98 -= 1)
    {
        int *l_107 = &g_53[6];
        unsigned char l_128 = 0xB3L;
        unsigned char **l_181 = &l_129;
        int l_198[9][10] = {{5L, 0x138BC535L, (-1L), (-1L), 0xDDF3FE31L, 0xCDD416DDL, 0xDC91CA63L, 0x44CB16B9L, 0x041B74B7L, 0L}, {5L, 0x138BC535L, (-1L), (-1L), 0xDDF3FE31L, 0xCDD416DDL, 0xDC91CA63L, 0x44CB16B9L, 0x041B74B7L, 0L}, {5L, 0x138BC535L, (-1L), (-1L), 0xDDF3FE31L, 0xCDD416DDL, 0xDC91CA63L, 0x44CB16B9L, 0x041B74B7L, 0L}, {5L, 0x138BC535L, (-1L), (-1L), 0xDDF3FE31L, 0xCDD416DDL, 0xDC91CA63L, 0x44CB16B9L, 0x041B74B7L, 0L}, {5L, 0x138BC535L, (-1L), (-1L), 0xDDF3FE31L, 0xCDD416DDL, 0xDC91CA63L, 0x44CB16B9L, 0x041B74B7L, 0L}, {5L, 0x138BC535L, (-1L), (-1L), 0xDDF3FE31L, 0xCDD416DDL, 0xDC91CA63L, 0x44CB16B9L, 0x041B74B7L, 0L}, {5L, 0x138BC535L, (-1L), (-1L), 0xDDF3FE31L, 0xCDD416DDL, 0xDC91CA63L, 0x44CB16B9L, 0x041B74B7L, 0L}, {5L, 0x138BC535L, (-1L), (-1L), 0xDDF3FE31L, 0xCDD416DDL, 0xDC91CA63L, 0x44CB16B9L, 0x041B74B7L, 0L}, {5L, 0x138BC535L, (-1L), (-1L), 0xDDF3FE31L, 0xCDD416DDL, 0xDC91CA63L, 0x44CB16B9L, 0x041B74B7L, 0L}};
        int i, j;
        l_107 = l_107;
        for (g_60 = 0; (g_60 <= 6); g_60 += 1)
        {
            short *l_121 = &g_102;
            unsigned short *l_122 = (void*)0;
            unsigned short *l_123 = &g_124;
            unsigned long long *l_125 = &g_126;
            unsigned short l_134 = 0x972DL;
            int l_139 = 0L;
            int *l_160[8][3][7] = {{{&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}}, {{&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}}, {{&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}}, {{&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}}, {{&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}}, {{&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}}, {{&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}}, {{&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}, {&g_18, &g_53[(g_98 + 4)], (void*)0, &g_53[5], &g_53[(g_98 + 4)], (void*)0, &g_18}}};
            int i, j, k;
            g_53[(g_98 + 4)] |= (*g_17);
            g_127 = ((*l_104) = (safe_unary_minus_func_uint64_t_u((((p_55 != ((0xF83262CCL > (safe_div_func_uint64_t_u_u(((*l_125) |= (safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s((*l_107), 0x20E0461AF4752A80LL)), ((*l_123) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((0xE7BC92A3EDA01CD8LL < (-10L)), ((safe_lshift_func_int16_t_s_s(((*l_121) = p_55), ((**g_81) > 1UL))) , g_82))), p_55)))))), g_53[(g_98 + 4)]))) || p_55)) & 1L) < g_100))));
            if (l_128)
                continue;
            (*l_104) = ((void*)0 != l_129);
            for (g_82 = 2; (g_82 >= 0); g_82 -= 1)
            {
                short **l_165 = &g_159;
                unsigned short **l_182 = (void*)0;
                int l_211[2][9] = {{0xE3615448L, 0x8762EDC8L, 0xE3EB81DFL, 0x8762EDC8L, 0xE3615448L, 0x8762EDC8L, 0xE3EB81DFL, 0x8762EDC8L, 0xE3615448L}, {0xE3615448L, 0x8762EDC8L, 0xE3EB81DFL, 0x8762EDC8L, 0xE3615448L, 0x8762EDC8L, 0xE3EB81DFL, 0x8762EDC8L, 0xE3615448L}};
                int i, j, k;
                l_139 |= (((*l_107) = (safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((l_134 != (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((g_82 , g_98) , g_102), 5)), (*l_107)))), 0UL)) <= (((((void*)0 == l_105[(g_82 + 5)][(g_82 + 2)][g_98]) != ((p_55 > 4L) <= 65527UL)) , g_53[0]) , g_102)), g_82))) & g_98);
                (*l_104) = (*l_106);
                if ((**g_81))
                    break;
                for (g_126 = 0; (g_126 <= 2); g_126 += 1)
                {
                    short l_146[5][7][7] = {{{0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}}, {{0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}}, {{0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}}, {{0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}}, {{0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}, {0x9599L, (-6L), (-6L), 0xCB58L, (-7L), 0x7933L, 0x3A3AL}}};
                    int l_155[9] = {0x847BF470L, 0x7CF68047L, 0x847BF470L, 0x7CF68047L, 0x847BF470L, 0x7CF68047L, 0x847BF470L, 0x7CF68047L, 0x847BF470L};
                    unsigned long long *l_156 = &g_157[0];
                    int i, j, k;
                    l_139 = ((*l_104) = ((g_60 <= 0x3331L) , ((((safe_sub_func_uint16_t_u_u(((*l_123) = p_55), (0x8979A2FCL && 4294967295UL))) && (!g_98)) & p_55) , 0xB7FD6875L)));
                    if ((!(safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((*l_107) >= (l_146[4][4][4] = (**g_78))), (safe_sub_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_u((((+0xF3L) || (((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((-1L), ((g_60 <= p_55) != ((*l_156) = l_155[2])))), g_127)) != (p_55 < 65535UL)) , l_155[2])) > g_124), g_82)) , g_53[5]) < g_53[6]), p_55)))), 255UL))))
                    {
                        g_158 = (void*)0;
                    }
                    else
                    {
                        short ***l_166 = (void*)0;
                        short ***l_167[3][8] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
                        int l_168[5][10] = {{0x695E7397L, 0x9A4E49BDL, (-1L), (-1L), 0x9A4E49BDL, 0x695E7397L, 0x9A4E49BDL, (-1L), (-1L), 0x9A4E49BDL}, {0x695E7397L, 0x9A4E49BDL, (-1L), (-1L), 0x9A4E49BDL, 0x695E7397L, 0x9A4E49BDL, (-1L), (-1L), 0x9A4E49BDL}, {0x695E7397L, 0x9A4E49BDL, (-1L), (-1L), 0x9A4E49BDL, 0x695E7397L, 0x9A4E49BDL, (-1L), (-1L), 0x9A4E49BDL}, {0x695E7397L, 0x9A4E49BDL, (-1L), (-1L), 0x9A4E49BDL, 0x695E7397L, 0x9A4E49BDL, (-1L), (-1L), 0x9A4E49BDL}, {0x695E7397L, 0x9A4E49BDL, (-1L), (-1L), 0x9A4E49BDL, 0x695E7397L, 0x9A4E49BDL, (-1L), (-1L), 0x9A4E49BDL}};
                        char *l_169 = &g_170;
                        int i, j;
                        l_160[0][2][6] = (g_157[2] , (p_55 , l_107));
                        (*l_104) &= (safe_add_func_uint64_t_u_u((3UL <= ((((*l_169) = (safe_rshift_func_uint8_t_u_s(g_127, ((g_158 = l_165) == (l_168[4][2] , &l_121))))) & ((safe_mod_func_uint64_t_u_u(l_168[4][2], (safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(p_55, (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(l_155[2], (p_55 ^ l_168[4][2]))) , p_55), p_55)))), 0x7BBDDACDL)))) , (-1L))) , 0x6804L)), 18446744073709551609UL));
                        l_181 = &l_129;
                    }
                    l_182 = (void*)0;
                }
                for (g_126 = 0; (g_126 <= 2); g_126 += 1)
                {
                    int *l_184[1][6][4] = {{{&g_53[(g_98 + 4)], &g_53[(g_98 + 4)], &g_18, &g_18}, {&g_53[(g_98 + 4)], &g_53[(g_98 + 4)], &g_18, &g_18}, {&g_53[(g_98 + 4)], &g_53[(g_98 + 4)], &g_18, &g_18}, {&g_53[(g_98 + 4)], &g_53[(g_98 + 4)], &g_18, &g_18}, {&g_53[(g_98 + 4)], &g_53[(g_98 + 4)], &g_18, &g_18}, {&g_53[(g_98 + 4)], &g_53[(g_98 + 4)], &g_18, &g_18}}};
                    int i, j, k;
                    for (g_100 = 0; (g_100 <= 2); g_100 += 1)
                    {
                        int i, j, k;
                        g_183 = ((*l_104) ^= p_55);
                        l_160[(g_82 + 2)][g_100][(g_82 + 2)] = l_184[0][1][0];
                        return (**g_81);
                    }
                    l_198[0][0] ^= (p_55 != ((safe_unary_minus_func_uint8_t_u(((p_55 < p_55) > ((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(g_82, ((safe_lshift_func_uint8_t_u_s(0x76L, (safe_mod_func_uint64_t_u_u(p_55, (safe_rshift_func_uint8_t_u_u(g_102, 7)))))) | ((*l_107) <= (-1L))))) != g_60), 6L)) != 0xACL)))) > 0xFD4B7166L));
                    l_211[1][7] |= (p_55 <= ((*l_106) | (((safe_add_func_int64_t_s_s(g_126, (safe_mul_func_uint16_t_u_u((g_18 | ((safe_sub_func_uint64_t_u_u(g_60, 0UL)) , (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*l_104), p_55)), ((1UL <= 0UL) == p_55))), 6)))), (*l_107))))) & 0x97L) == p_55)));
                    l_184[0][4][2] = (*g_80);
                }
            }
        }
    }
    for (g_124 = 0; (g_124 >= 43); g_124 = safe_add_func_uint16_t_u_u(g_124, 9))
    {
        int l_214 = 8L;
        unsigned char *l_231 = &g_60;
        l_214 &= p_55;
        for (g_60 = (-1); (g_60 == 19); g_60 = safe_add_func_int64_t_s_s(g_60, 4))
        {
            char l_221[2];
            unsigned char *l_222[6] = {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60};
            unsigned char **l_223[3];
            int i;
            for (i = 0; i < 2; i++)
                l_221[i] = (-2L);
            for (i = 0; i < 3; i++)
                l_223[i] = (void*)0;
            g_79 = (void*)0;
            g_233 |= ((((*l_106) > (safe_lshift_func_int16_t_s_s(((((((!0x30L) && (*l_106)) , ((safe_add_func_uint8_t_u_u(l_221[0], (((g_224 = l_222[0]) != ((safe_rshift_func_uint8_t_u_u(p_55, ((p_55 , (safe_lshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u(p_55, l_232)), l_221[1]))) , g_82))) , &g_60)) , l_214))) < p_55)) > 0UL) < (*g_17)) > l_221[0]), p_55))) | 0x1258D5DCL) || l_221[1]);
            (*l_104) = (g_100 >= l_221[0]);
        }
    }
    return p_55;
}







static unsigned func_64(unsigned char * p_65, char p_66, short p_67)
{
    int **l_74 = &g_17;
    int ***l_75 = &l_74;
    int **l_77 = (void*)0;
    int ***l_76[2][6] = {{&l_77, &l_77, &l_77, &l_77, &l_77, &l_77}, {&l_77, &l_77, &l_77, &l_77, &l_77, &l_77}};
    int i, j;
    g_81 = (g_80 = (g_78 = ((((safe_sub_func_int8_t_s_s(g_2, 0x0BL)) | 0x0EL) >= (&g_17 != ((*l_75) = l_74))) , &g_17)));
    g_82 = (**l_74);
    for (p_67 = (-26); (p_67 <= (-17)); ++p_67)
    {
        unsigned l_89 = 0x96AADB6CL;
        int ****l_92 = &l_75;
        char *l_97 = &g_98;
        unsigned *l_99 = &g_100;
        unsigned *l_101 = (void*)0;
        int l_103 = 0x865626A2L;
        for (p_66 = 0; (p_66 == 0); p_66 = safe_add_func_int8_t_s_s(p_66, 1))
        {
            l_89 = ((safe_sub_func_uint64_t_u_u(18446744073709551615UL, p_67)) | (**l_74));
            (*l_75) = &g_79;
        }
        if ((*g_17))
            break;
        l_103 = ((safe_add_func_int32_t_s_s((((*l_92) = &g_78) != (l_76[0][0] = &g_80)), (safe_lshift_func_uint8_t_u_s(((((safe_div_func_int32_t_s_s((**g_81), p_67)) ^ (((((((((*l_97) = g_53[1]) , (-1L)) , g_2) || ((g_102 |= (+((*l_99) = (((*l_97) |= (((p_66 , &g_80) != &g_81) >= 1UL)) || g_2)))) , (**l_74))) || (**l_74)) == p_66) ^ g_18) & 0xC30C3E41A7851781LL)) , g_53[6]) , (**l_74)), 7)))) <= 0x7473L);
    }
    return g_98;
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
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_157[i], "g_157[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_299[i][j], "g_299[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_372[i][j], "g_372[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_518[i][j], "g_518[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_718, "g_718", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_722[i], "g_722[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_747, "g_747", print_hash_value);
    transparent_crc(g_916, "g_916", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1108[i], "g_1108[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1201[i][j], "g_1201[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
