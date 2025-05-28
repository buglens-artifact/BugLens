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



static int g_3[7] = {0L, 7L, 0L, 7L, 0L, 7L, 0L};
static int g_7 = 0L;
static int g_42 = 0L;
static int *g_41 = &g_42;
static int *g_43[7] = {&g_3[4], &g_3[4], &g_42, &g_3[4], &g_3[4], &g_42, &g_3[4]};
static unsigned short g_57 = 0x324EL;
static unsigned short g_60 = 6UL;
static long long g_82 = (-4L);
static unsigned long long g_84[4] = {0xD3DF28D60A67ACB2LL, 0xD3DF28D60A67ACB2LL, 0xD3DF28D60A67ACB2LL, 0xD3DF28D60A67ACB2LL};
static volatile int g_89 = 0x6CEEB8BFL;
static int *g_96 = &g_42;
static short g_113[1][10] = {{0xE96CL, (-2L), 0xB4C5L, 0xB4C5L, (-2L), 0xE96CL, (-2L), 0xB4C5L, 0xB4C5L, (-2L)}};
static volatile unsigned short g_118 = 2UL;
static volatile unsigned short *g_117 = &g_118;
static volatile unsigned short **g_116[1][5] = {{&g_117, &g_117, &g_117, &g_117, &g_117}};
static const int ***g_151 = (void*)0;
static int g_163[5] = {1L, 1L, 1L, 1L, 1L};
static unsigned g_176 = 0xF6A2C2B7L;
static unsigned short g_182 = 1UL;
static int **g_216 = &g_43[1];
static unsigned short *g_244 = (void*)0;
static unsigned short ** const g_243 = &g_244;
static unsigned short ** const *g_242 = &g_243;
static int *g_249 = &g_7;
static volatile unsigned short g_258 = 0UL;
static const int *g_261[10] = {&g_7, (void*)0, (void*)0, (void*)0, (void*)0, &g_7, (void*)0, (void*)0, (void*)0, (void*)0};
static const int ** volatile g_260 = &g_261[1];
static int g_314[2][3] = {{(-1L), (-1L), 0x175C9F7CL}, {(-1L), (-1L), 0x175C9F7CL}};
static const int ** volatile g_333 = &g_261[1];
static long long *g_339 = &g_82;
static long long **g_338[10] = {&g_339, (void*)0, &g_339, (void*)0, &g_339, (void*)0, &g_339, (void*)0, &g_339, (void*)0};
static long long *** volatile g_337[2][2][7] = {{{&g_338[1], &g_338[1], &g_338[9], (void*)0, &g_338[9], &g_338[1], &g_338[1]}, {&g_338[1], &g_338[1], &g_338[9], (void*)0, &g_338[9], &g_338[1], &g_338[1]}}, {{&g_338[1], &g_338[1], &g_338[9], (void*)0, &g_338[9], &g_338[1], &g_338[1]}, {&g_338[1], &g_338[1], &g_338[9], (void*)0, &g_338[9], &g_338[1], &g_338[1]}}};
static long long *** volatile g_340 = &g_338[9];
static unsigned g_344 = 0UL;
static char g_347 = (-2L);
static int * volatile g_355 = &g_163[3];
static int * volatile g_412[5][4][8] = {{{&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}}, {{&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}}, {{&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}}, {{&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}}, {{&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}, {&g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42, &g_3[5], &g_42}}};
static unsigned *g_432[2] = {&g_176, &g_176};
static unsigned **g_431 = &g_432[1];
static unsigned char g_449 = 0xE7L;
static unsigned char g_451 = 0xCCL;
static long long g_469 = 0x851E1FC5E4F88298LL;
static int ** volatile g_500 = &g_249;
static const char *g_507 = (void*)0;
static const char **g_506[8] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static const char *** volatile g_505 = &g_506[3];
static unsigned short **g_521[9] = {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244};
static unsigned short *** volatile g_520 = &g_521[0];
static const int *g_532 = &g_42;
static const int **g_531[4] = {&g_532, (void*)0, &g_532, (void*)0};
static int *g_545[6][2][7] = {{{(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}, {(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}}, {{(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}, {(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}}, {{(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}, {(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}}, {{(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}, {(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}}, {{(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}, {(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}}, {{(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}, {(void*)0, (void*)0, &g_314[1][0], &g_314[0][2], (void*)0, &g_314[0][2], &g_314[1][0]}}};
static int **g_544 = &g_545[1][0][4];
static int ** const g_547 = &g_249;
static const long long *g_552 = &g_82;
static const long long **g_551 = &g_552;
static char g_628 = 0xFFL;
static unsigned short g_629[9] = {1UL, 1UL, 6UL, 1UL, 1UL, 6UL, 1UL, 1UL, 6UL};
static int **g_717 = &g_43[5];
static unsigned short *** volatile g_721 = (void*)0;
static int * const *g_726 = &g_545[1][0][6];
static int * const * const *g_725 = &g_726;
static int g_731 = 0xA974C2ABL;
static unsigned g_738 = 18446744073709551611UL;
static unsigned long long *g_750 = &g_84[0];
static unsigned long long ** volatile g_749 = &g_750;
static unsigned long long **g_751 = &g_750;
static int *g_763 = (void*)0;
static short * volatile g_837 = (void*)0;
static short * volatile *g_836[8][2][6] = {{{&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}, {&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}}, {{&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}, {&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}}, {{&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}, {&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}}, {{&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}, {&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}}, {{&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}, {&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}}, {{&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}, {&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}}, {{&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}, {&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}}, {{&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}, {&g_837, &g_837, &g_837, (void*)0, &g_837, (void*)0}}};
static unsigned long long g_849 = 0UL;
static unsigned char **g_866 = (void*)0;
static unsigned char *** volatile g_865[2] = {&g_866, &g_866};
static char *g_891[2] = {&g_347, &g_347};
static const int ** volatile g_909[5] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static const int ** const volatile g_974 = (void*)0;
static short *g_1059 = (void*)0;
static short **g_1058 = &g_1059;
static short g_1067 = (-1L);
static int g_1077 = 0x7B12DCBAL;
static short g_1102 = 0x2309L;
static unsigned * const *g_1107 = &g_432[1];
static unsigned * const ** const g_1106[5] = {&g_1107, &g_1107, &g_1107, &g_1107, &g_1107};
static unsigned * const ** const *g_1105[6][8] = {{(void*)0, &g_1106[0], &g_1106[0], (void*)0, &g_1106[0], &g_1106[0], &g_1106[0], &g_1106[0]}, {(void*)0, &g_1106[0], &g_1106[0], (void*)0, &g_1106[0], &g_1106[0], &g_1106[0], &g_1106[0]}, {(void*)0, &g_1106[0], &g_1106[0], (void*)0, &g_1106[0], &g_1106[0], &g_1106[0], &g_1106[0]}, {(void*)0, &g_1106[0], &g_1106[0], (void*)0, &g_1106[0], &g_1106[0], &g_1106[0], &g_1106[0]}, {(void*)0, &g_1106[0], &g_1106[0], (void*)0, &g_1106[0], &g_1106[0], &g_1106[0], &g_1106[0]}, {(void*)0, &g_1106[0], &g_1106[0], (void*)0, &g_1106[0], &g_1106[0], &g_1106[0], &g_1106[0]}};
static unsigned ****g_1110 = (void*)0;
static int *** volatile g_1111 = (void*)0;



static short func_1(void);
static int * func_8(int p_9, int * p_10);
static int func_14(int ** p_15, int p_16, const int p_17, int * const p_18);
static int ** func_19(unsigned p_20);
static int func_23(unsigned p_24, short p_25, int p_26, unsigned short p_27, const int ** p_28);
static int func_29(int ** p_30, int ** p_31);
static int ** func_34(int * p_35, long long p_36);
static int * func_37(int ** p_38);
static int * func_44(int * p_45, int p_46, int ** const p_47);
static int * func_48(int p_49, int * p_50, int p_51);
static short func_1(void)
{
    const int *l_2 = &g_3[5];
    const int **l_4 = &l_2;
    int *l_5 = &g_3[5];
    int *l_6 = &g_7;
    (*l_4) = l_2;
    (*l_6) = ((*l_5) = g_3[4]);
    (*g_547) = func_8((*l_6), l_5);
    return (**l_4);
}







static int * func_8(int p_9, int * p_10)
{
    int l_13 = 0x8E64E6DCL;
    char *l_892[9][8][3] = {{{&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}}, {{&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}}, {{&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}}, {{&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}}, {{&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}}, {{&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}}, {{&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}}, {{&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}}, {{&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}, {&g_628, &g_628, &g_628}}};
    unsigned ***l_894 = &g_431;
    unsigned long long l_907 = 0xE9718E89E3FF68A2LL;
    unsigned short l_908 = 0UL;
    int *l_943 = (void*)0;
    const int **l_1030 = (void*)0;
    long long **l_1040[8][5][4] = {{{&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}}, {{&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}, {&g_339, &g_339, &g_339, &g_339}}};
    int l_1057 = (-3L);
    unsigned l_1068[10][4][6] = {{{0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}}, {{0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}}, {{0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}}, {{0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}}, {{0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}}, {{0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}}, {{0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}}, {{0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}}, {{0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}}, {{0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}, {0x5C1718C4L, 18446744073709551615UL, 2UL, 6UL, 0x8B2D6CE2L, 18446744073709551610UL}}};
    int i, j, k;
    (*p_10) = (safe_mul_func_int16_t_s_s(g_3[5], l_13));
    for (g_7 = 0; (g_7 <= 6); g_7 += 1)
    {
        int *l_511 = &g_163[4];
        int i;
    }
    for (g_344 = 0; (g_344 <= 9); g_344 += 1)
    {
        int l_905[6] = {0x77DB9FEBL, 0x77DB9FEBL, 0x648843ACL, 0x77DB9FEBL, 0x77DB9FEBL, 0x648843ACL};
        unsigned long long *l_919 = (void*)0;
        int l_972 = 0xE775FCFAL;
        const short l_979 = (-4L);
        long long l_986 = 0xADB060BCA394A664LL;
        const int *** const *l_991 = &g_151;
        unsigned char ***l_1007 = (void*)0;
        const int **l_1011 = (void*)0;
        int i;
        for (g_60 = 0; (g_60 <= 9); g_60 += 1)
        {
            long long *l_880 = &g_469;
            int l_906 = (-1L);
            unsigned char *l_946 = &g_451;
            unsigned char **l_945 = &l_946;
            int i;
        }
        for (g_469 = 0; (g_469 <= 0); g_469 += 1)
        {
            unsigned l_992 = 0xF042D64CL;
            unsigned char ***l_1005[5][9][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
            const int **l_1056 = &g_261[1];
            long long *l_1094 = &g_82;
            long long *l_1095 = (void*)0;
            int *l_1113 = &g_42;
            int i, j, k;
            (*p_10) = (safe_mul_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u((l_991 != &g_151), ((***l_894) = l_992))) > (safe_mod_func_uint32_t_u_u((p_9 == p_9), (safe_add_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(5L, (*g_339))) ^ 0x3DL), l_992))))) <= (*p_10)), l_992));
            for (l_972 = 0; (l_972 >= 0); l_972 -= 1)
            {
                long long l_1027 = 0x57D8C3656B3B2EC5LL;
                unsigned long long l_1028 = 18446744073709551615UL;
                const int **l_1029 = (void*)0;
                int l_1041 = 0x2F60BC14L;
                unsigned l_1069 = 7UL;
                int **l_1076[8][8] = {{&g_545[1][0][4], &g_545[4][0][2], &g_545[1][1][5], &g_545[1][0][4], &g_545[4][1][3], &g_545[1][0][4], &g_545[1][0][4], &g_545[4][1][3]}, {&g_545[1][0][4], &g_545[4][0][2], &g_545[1][1][5], &g_545[1][0][4], &g_545[4][1][3], &g_545[1][0][4], &g_545[1][0][4], &g_545[4][1][3]}, {&g_545[1][0][4], &g_545[4][0][2], &g_545[1][1][5], &g_545[1][0][4], &g_545[4][1][3], &g_545[1][0][4], &g_545[1][0][4], &g_545[4][1][3]}, {&g_545[1][0][4], &g_545[4][0][2], &g_545[1][1][5], &g_545[1][0][4], &g_545[4][1][3], &g_545[1][0][4], &g_545[1][0][4], &g_545[4][1][3]}, {&g_545[1][0][4], &g_545[4][0][2], &g_545[1][1][5], &g_545[1][0][4], &g_545[4][1][3], &g_545[1][0][4], &g_545[1][0][4], &g_545[4][1][3]}, {&g_545[1][0][4], &g_545[4][0][2], &g_545[1][1][5], &g_545[1][0][4], &g_545[4][1][3], &g_545[1][0][4], &g_545[1][0][4], &g_545[4][1][3]}, {&g_545[1][0][4], &g_545[4][0][2], &g_545[1][1][5], &g_545[1][0][4], &g_545[4][1][3], &g_545[1][0][4], &g_545[1][0][4], &g_545[4][1][3]}, {&g_545[1][0][4], &g_545[4][0][2], &g_545[1][1][5], &g_545[1][0][4], &g_545[4][1][3], &g_545[1][0][4], &g_545[1][0][4], &g_545[4][1][3]}};
                const unsigned l_1086 = 18446744073709551615UL;
                unsigned char l_1090 = 253UL;
                int l_1101 = 1L;
                int i, j;
                if (((safe_lshift_func_uint8_t_u_s(0x43L, 0)) & 4UL))
                {
                    unsigned char ****l_1006[10] = {&l_1005[1][4][0], &l_1005[1][4][0], &l_1005[2][7][0], &l_1005[2][7][0], &l_1005[1][4][0], &l_1005[1][4][0], &l_1005[1][4][0], &l_1005[2][7][0], &l_1005[2][7][0], &l_1005[1][4][0]};
                    int l_1010 = 0xB0D0533DL;
                    short *l_1012 = &g_113[0][8];
                    int **l_1017[5][2][7] = {{{&g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4]}, {&g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4]}}, {{&g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4]}, {&g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4]}}, {{&g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4]}, {&g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4]}}, {{&g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4]}, {&g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4]}}, {{&g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4]}, {&g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4], &g_545[5][0][3], &g_545[1][0][4]}}};
                    int l_1032 = 0x94C37160L;
                    int i, j, k;
                    if ((safe_add_func_uint16_t_u_u(1UL, (safe_lshift_func_int16_t_s_s((&g_866 != (l_1007 = l_1005[1][4][0])), ((*l_1012) = (safe_mul_func_uint8_t_u_u((p_9 == func_23((**g_431), p_9, l_1010, p_9, l_1011)), 9L))))))))
                    {
                        unsigned l_1024 = 7UL;
                        const int **l_1031 = &g_261[1];
                        (*l_1031) = func_48((safe_mul_func_int8_t_s_s(func_23(((safe_rshift_func_int16_t_s_s(((*g_725) != l_1017[0][0][1]), 10)) < func_23(l_1010, (safe_mod_func_uint8_t_u_u((((*g_339) = (safe_mul_func_uint16_t_u_u((func_23((safe_rshift_func_uint16_t_u_s(p_9, ((l_1024 != 1L) ^ func_23((safe_mod_func_uint8_t_u_u(l_1010, p_9)), (p_9 == l_1027), l_1010, l_1028, &g_261[4])))), l_1027, p_9, l_1024, l_1029) ^ 0x64L), l_1010))) | 7UL), 0x01L)), p_9, p_9, l_1030)), p_9, l_992, l_1010, l_1031), l_1032)), (*g_547), l_992);
                        return (*g_216);
                    }
                    else
                    {
                        int *l_1033 = &g_7;
                        (*g_216) = l_1033;
                        (*g_547) = p_10;
                    }
                }
                else
                {
                    return (*g_500);
                }
                if (((7UL && ((0x861CL == ((safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s((*p_10), (safe_lshift_func_int8_t_s_u((l_1041 = (l_1040[4][4][2] != (*g_340))), 2)))), (safe_lshift_func_uint8_t_u_u(p_9, 1)))) < (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((~p_9), l_992)), (*p_10))))) != p_9)) < (*g_552)))
                {
                    int l_1054 = 1L;
                    for (l_1041 = 0; (l_1041 >= 0); l_1041 -= 1)
                    {
                        short *l_1055 = &g_113[0][2];
                        (*g_96) = (*g_355);
                        (*g_547) = func_48(func_23((**g_431), (safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(0x4212L, (safe_mul_func_uint8_t_u_u(l_1054, l_1054)))), p_9)), (p_9 != ((*l_1055) = l_1054)), p_9, l_1056), p_10, l_1054);
                        return p_10;
                    }
                }
                else
                {
                    short **l_1063 = &g_1059;
                    (*l_1056) = (*g_333);
                    if (l_1057)
                    {
                        (**g_547) = (*p_10);
                        (*g_216) = p_10;
                    }
                    else
                    {
                        short ***l_1060 = &g_1058;
                        short **l_1062 = &g_1059;
                        short ***l_1061[6] = {&l_1062, &l_1062, (void*)0, &l_1062, &l_1062, (void*)0};
                        int i;
                        l_1063 = ((*l_1060) = g_1058);
                    }
                }
                if ((*p_10))
                {
                    short *l_1064 = &g_113[0][6];
                    short *l_1065 = (void*)0;
                    short *l_1066 = &g_1067;
                    unsigned l_1070[5][4] = {{0xB98E00A0L, 4294967287UL, 0UL, 0xEB7369C3L}, {0xB98E00A0L, 4294967287UL, 0UL, 0xEB7369C3L}, {0xB98E00A0L, 4294967287UL, 0UL, 0xEB7369C3L}, {0xB98E00A0L, 4294967287UL, 0UL, 0xEB7369C3L}, {0xB98E00A0L, 4294967287UL, 0UL, 0xEB7369C3L}};
                    long long *l_1072 = (void*)0;
                    unsigned *l_1087 = &l_1070[2][1];
                    int l_1088[7] = {0L, 0x6504AB2DL, 0L, 0x6504AB2DL, 0L, 0x6504AB2DL, 0L};
                    const int **l_1089 = &g_261[1];
                    int i, j;
                    if (func_23((((&g_431 == &g_431) && func_23(p_9, ((*l_1066) = ((*l_1064) = p_9)), (6L > ((p_9 != p_9) && (l_905[0] = p_9))), (l_1068[4][0][0] <= l_1069), l_1030)) < p_9), p_9, p_9, l_1070[2][1], l_1011))
                    {
                        unsigned char l_1071 = 0x0BL;
                        long long *l_1073 = (void*)0;
                        (*g_41) = l_1071;
                        (*g_41) = (&l_1027 != (l_1073 = l_1072));
                        (*p_10) = (*p_10);
                        (*p_10) = (**g_547);
                    }
                    else
                    {
                        (*p_10) = (-3L);
                    }
                    (*g_41) = ((safe_rshift_func_int8_t_s_s(((!(l_1076[5][1] == l_1076[5][2])) == ((func_23(p_9, ((*l_1064) = func_23(((*l_1087) = func_23((g_1077 <= (safe_sub_func_uint32_t_u_u(((**g_431) = ((((safe_sub_func_uint32_t_u_u((l_905[0] = (((*p_10) = (*p_10)) || ((p_9 || (safe_mod_func_int32_t_s_s((p_9 || l_1070[1][3]), (((+(safe_mul_func_int8_t_s_s(p_9, l_1086))) <= 0x15A415F71E702B00LL) || l_1070[2][1])))) && (**g_751)))), 0L)) < 0L) > l_1069) < (**g_431))), p_9))), p_9, p_9, p_9, l_1056)), l_1088[5], p_9, p_9, l_1089)), p_9, l_1088[0], l_1030) && p_9) <= p_9)), l_1090)) > 2L);
                    (*l_1056) = p_10;
                }
                else
                {
                    long long *l_1093 = &g_469;
                    int l_1100 = 0x2EB758F7L;
                    if ((safe_mul_func_uint16_t_u_u(((((l_1094 = l_1093) != (l_1095 = l_1095)) < (safe_mul_func_uint16_t_u_u(65531UL, ((((func_23((**g_431), ((*p_10) || 7UL), p_9, (safe_rshift_func_uint8_t_u_u(l_1100, 1)), l_1030) ^ 0UL) == 0x71E4L) <= l_1100) && l_1101)))) < g_1102), 0xB00DL)))
                    {
                        if ((*p_10))
                            break;
                        if (l_1100)
                            break;
                        (*g_717) = p_10;
                    }
                    else
                    {
                        unsigned ****l_1109 = (void*)0;
                        unsigned *****l_1108[9][3] = {{&l_1109, &l_1109, &l_1109}, {&l_1109, &l_1109, &l_1109}, {&l_1109, &l_1109, &l_1109}, {&l_1109, &l_1109, &l_1109}, {&l_1109, &l_1109, &l_1109}, {&l_1109, &l_1109, &l_1109}, {&l_1109, &l_1109, &l_1109}, {&l_1109, &l_1109, &l_1109}, {&l_1109, &l_1109, &l_1109}};
                        int ***l_1112 = &g_216;
                        int i, j;
                        (*g_41) = (safe_rshift_func_int16_t_s_s(((g_1105[4][0] = g_1105[0][7]) != (g_1110 = (void*)0)), 15));
                        (*g_249) = l_1100;
                        (*l_1112) = &g_43[6];
                    }
                    return l_1113;
                }
            }
        }
    }
    return (*g_500);
}







static int func_14(int ** p_15, int p_16, const int p_17, int * const p_18)
{
    long long l_512 = (-1L);
    int l_513 = 0x4A885673L;
    const int **l_518[1][3];
    unsigned short **l_519[4][7][9] = {{{&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}}, {{&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}}, {{&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}}, {{&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}, {&g_244, &g_244, &g_244, &g_244, &g_244, &g_244, &g_244, (void*)0, &g_244}}};
    int *l_523 = &g_314[1][0];
    int **l_524 = &l_523;
    long long **l_527 = (void*)0;
    int **l_530 = &g_43[5];
    int **l_543 = &l_523;
    int ***l_590 = &l_530;
    int ****l_589 = &l_590;
    short l_612 = 4L;
    int * const l_730 = &g_731;
    int * const * const l_729 = &l_730;
    int * const * const *l_728 = &l_729;
    unsigned short l_739 = 65535UL;
    int l_741 = (-3L);
    unsigned short l_784[4];
    int **l_807 = (void*)0;
    unsigned char *l_820 = &g_451;
    int ** const *l_839 = &l_524;
    char *l_854 = (void*)0;
    char **l_853 = &l_854;
    long long l_874 = 0x4109EA7F3ACDD88DLL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_518[i][j] = &g_261[7];
    }
    for (i = 0; i < 4; i++)
        l_784[i] = 65531UL;
    (*g_355) = (((l_512 >= (l_513 = 7L)) <= ((~(safe_lshift_func_int8_t_s_s(p_17, 3))) | ((safe_mul_func_uint16_t_u_u(func_23(l_512, p_16, g_347, l_512, l_518[0][0]), 0x339BL)) < 4294967295UL))) | g_344);
    (*g_520) = l_519[2][5][1];
    if (func_23(p_17, (safe_unary_minus_func_int8_t_s((((*l_524) = l_523) != p_18))), (safe_rshift_func_uint8_t_u_u((0xE5EF1B0BL ^ (l_513 = p_17)), ((void*)0 == l_527))), (((((safe_lshift_func_int16_t_s_u(func_29(l_530, l_530), 5)) == p_16) & p_17) == 0x300BC3FFL) ^ p_16), g_531[2]))
    {
        unsigned short l_535 = 0xE870L;
        unsigned short l_558 = 0x32E5L;
        int **l_620 = &g_96;
        int ****l_625 = &l_590;
        const int **l_644 = &g_261[1];
        const char ***l_752 = &g_506[3];
        char ***l_758 = (void*)0;
        long long *l_770 = &g_469;
        int l_811[6][3][1] = {{{0xC31CB75FL}, {0xC31CB75FL}, {0xC31CB75FL}}, {{0xC31CB75FL}, {0xC31CB75FL}, {0xC31CB75FL}}, {{0xC31CB75FL}, {0xC31CB75FL}, {0xC31CB75FL}}, {{0xC31CB75FL}, {0xC31CB75FL}, {0xC31CB75FL}}, {{0xC31CB75FL}, {0xC31CB75FL}, {0xC31CB75FL}}, {{0xC31CB75FL}, {0xC31CB75FL}, {0xC31CB75FL}}};
        int *l_812 = &g_42;
        int i, j, k;
        if ((p_16 ^ (safe_mod_func_int64_t_s_s(p_17, l_535))))
        {
            int ***l_540 = &l_524;
            int **l_542 = &l_523;
            int ***l_541[3];
            int l_546 = 0x76055A26L;
            int ***l_562[4];
            const int *l_636 = &g_3[3];
            unsigned short **l_657 = &g_244;
            int *l_671[2];
            unsigned **l_707 = &g_432[1];
            short l_710 = (-7L);
            int i;
            for (i = 0; i < 3; i++)
                l_541[i] = &l_542;
            for (i = 0; i < 4; i++)
                l_562[i] = &g_216;
            for (i = 0; i < 2; i++)
                l_671[i] = &g_3[4];
            if (((p_17 ^ p_17) <= ((*p_18) = ((((*g_117) < p_17) > (p_16 & ((((void*)0 != &g_507) && ((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((((*l_540) = (void*)0) != (g_544 = (l_543 = &l_523))), l_546)), 4)) == l_535)) != 0xFBL))) >= l_546))))
            {
                const long long ***l_553 = &g_551;
                int l_569 = 3L;
                int l_613[10][10] = {{(-1L), 1L, 0xB8927070L, (-5L), (-1L), 1L, 0xD7E968BDL, 1L, (-1L), (-5L)}, {(-1L), 1L, 0xB8927070L, (-5L), (-1L), 1L, 0xD7E968BDL, 1L, (-1L), (-5L)}, {(-1L), 1L, 0xB8927070L, (-5L), (-1L), 1L, 0xD7E968BDL, 1L, (-1L), (-5L)}, {(-1L), 1L, 0xB8927070L, (-5L), (-1L), 1L, 0xD7E968BDL, 1L, (-1L), (-5L)}, {(-1L), 1L, 0xB8927070L, (-5L), (-1L), 1L, 0xD7E968BDL, 1L, (-1L), (-5L)}, {(-1L), 1L, 0xB8927070L, (-5L), (-1L), 1L, 0xD7E968BDL, 1L, (-1L), (-5L)}, {(-1L), 1L, 0xB8927070L, (-5L), (-1L), 1L, 0xD7E968BDL, 1L, (-1L), (-5L)}, {(-1L), 1L, 0xB8927070L, (-5L), (-1L), 1L, 0xD7E968BDL, 1L, (-1L), (-5L)}, {(-1L), 1L, 0xB8927070L, (-5L), (-1L), 1L, 0xD7E968BDL, 1L, (-1L), (-5L)}, {(-1L), 1L, 0xB8927070L, (-5L), (-1L), 1L, 0xD7E968BDL, 1L, (-1L), (-5L)}};
                int i, j;
                (*g_216) = func_44(&l_546, (*g_96), g_547);
                if ((safe_rshift_func_int16_t_s_s((p_17 && p_16), 15)))
                {
                    (*g_96) = 1L;
                }
                else
                {
                    if ((**g_547))
                    {
                        short l_550 = 0L;
                        (*g_96) = 1L;
                        (*g_96) = l_550;
                    }
                    else
                    {
                        (*g_216) = &p_16;
                    }
                }
                if ((((*l_553) = g_551) != (void*)0))
                {
                    unsigned l_565 = 0xFD21A4CAL;
                    const int **l_567 = &g_261[3];
                    (*p_18) = l_546;
                    for (g_344 = 2; (g_344 <= 50); g_344 = safe_add_func_int64_t_s_s(g_344, 5))
                    {
                        int l_559 = 0xB7CACB87L;
                        int ***l_561 = &l_530;
                        int ****l_560[2][5][6] = {{{&l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561}}, {{&l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561}, {&l_561, &l_561, &l_561, &l_561, &l_561, &l_561}}};
                        const int **l_566 = &g_532;
                        long long *l_568[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_568[i] = &l_512;
                        if ((*p_18))
                            break;
                        if (l_535)
                            continue;
                        (*g_96) = (((l_569 = (safe_lshift_func_int8_t_s_u(func_23(l_558, (l_559 < ((l_562[3] = (void*)0) == &g_500)), ((**l_543) = (safe_rshift_func_uint16_t_u_u(func_23(p_16, l_565, (p_17 | g_3[5]), ((p_16 == p_17) < 0x5056EDA0BCEA6BDFLL), l_566), p_16))), l_535, l_567), 6))) | 0x7EC99DCA76DB4B22LL) > p_17);
                        (*p_18) = (~(*p_18));
                    }
                    for (g_182 = (-7); (g_182 > 40); ++g_182)
                    {
                        (*l_530) = &p_16;
                    }
                }
                else
                {
                    int *l_580[6];
                    const int **l_610 = &g_261[1];
                    char *l_626 = &g_347;
                    char *l_627 = &g_628;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_580[i] = &g_7;
                    for (g_469 = 1; (g_469 > 10); g_469 = safe_add_func_int32_t_s_s(g_469, 2))
                    {
                        (*l_530) = (*g_500);
                    }
                    if (((func_29(func_34(&p_16, p_16), &g_43[2]) >= p_16) | p_17))
                    {
                        int *l_576 = &g_163[4];
                        unsigned char * const l_577 = &g_449;
                        short *l_609 = &g_113[0][7];
                        (*g_216) = l_580[4];
                        (*p_18) = 1L;
                        (*g_547) = l_580[4];
                        (*g_96) = ((*p_18) = func_23((g_176 > (((*l_577) = p_17) >= ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(0L, ((safe_sub_func_uint8_t_u_u(((g_314[1][0] == (safe_rshift_func_uint16_t_u_s(l_569, ((*l_609) = (safe_rshift_func_int8_t_s_u((((*g_96) = l_535) == ((safe_rshift_func_uint16_t_u_u((p_17 && p_17), func_23((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((*p_18), 1L)), p_17)), 6)), g_344, l_558, (*g_117), l_518[0][0]))) || 0x9DL)), p_17)))))) || 4294967290UL), l_569)) & 1UL))) <= 0xB2L), p_16)) <= l_535))), g_314[0][1], p_16, p_16, l_610));
                    }
                    else
                    {
                        unsigned char *l_611 = &g_451;
                        (*g_96) = (((*l_611) = g_163[4]) < l_612);
                    }
                    (*p_18) = ((p_17 ^ ((l_613[1][9] = (l_569 = (0x382D94B9B784A397LL >= l_569))) & (safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s((g_629[4] = ((*l_627) = ((*l_626) = (0x1BC54444L ^ (safe_add_func_uint8_t_u_u(func_23(((func_29((*l_590), l_620) || (safe_lshift_func_int16_t_s_s((0x31EF4FA5L >= (((&g_151 != l_625) | g_113[0][2]) < g_176)), g_163[3]))) <= 0xB267DF6A797A282BLL), p_17, p_16, p_17, &g_532), 5L)))))), g_82)) | p_17), 0xA6L)))) <= 0xE8L);
                    return (*g_249);
                }
            }
            else
            {
                int l_630 = 0x3779FCEFL;
                char *l_631 = &g_628;
                int l_667 = 0xF6561F06L;
                if (((((l_630 & func_29(func_34((*g_500), l_630), &g_43[5])) >= (**l_620)) & (((*l_631) = (((g_57 ^ (18446744073709551613UL > p_16)) | p_16) == p_16)) || g_57)) || (*p_18)))
                {
                    int l_635 = 1L;
                    int l_643 = 0x831448ADL;
                    for (l_535 = (-13); (l_535 > 16); l_535 = safe_add_func_int32_t_s_s(l_535, 1))
                    {
                        short l_634 = (-4L);
                        (**l_620) = (l_635 = l_634);
                        l_636 = &p_17;
                        (***l_625) = (*l_620);
                    }
                    for (g_60 = 0; (g_60 <= 3); g_60 += 1)
                    {
                        if (l_630)
                            break;
                        (*g_355) = (safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((((p_17 && l_635) == 0x3DL) & p_17), (**l_620))), func_23(l_635, (1L == (safe_mod_func_uint8_t_u_u(g_629[4], p_16))), l_643, l_630, l_644)));
                    }
                    for (g_42 = 0; (g_42 != 23); ++g_42)
                    {
                        long long *l_649 = (void*)0;
                        long long *l_650 = &g_82;
                        int l_664[4];
                        short *l_665 = &g_113[0][2];
                        const int **l_666 = (void*)0;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_664[i] = (-5L);
                        l_667 = (((((*l_650) = (safe_lshift_func_uint8_t_u_s(g_84[3], 2))) ^ func_23((safe_sub_func_int8_t_s_s(6L, (safe_sub_func_int64_t_s_s((((func_23(((safe_mul_func_uint8_t_u_u(g_182, (l_635 = func_23(((*g_242) == l_657), ((*l_665) = ((func_23(p_16, (safe_add_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(g_7, (safe_sub_func_uint64_t_u_u(p_17, (l_664[2] & 0x8BC6CC6FL))))) && p_16), 0xE0A6A4F6L)), l_630, p_16, &g_261[1]) == l_643) | 4UL)), p_16, p_17, l_666)))) && 18446744073709551615UL), p_16, (*l_636), p_16, l_666) < 7UL) & g_176) <= p_16), p_17)))), p_17, p_16, l_643, l_518[0][0])) != 0L) < 1UL);
                        (*l_644) = &p_16;
                        (**l_590) = &l_667;
                    }
                }
                else
                {
                    long long l_670 = (-6L);
                    for (l_535 = 3; (l_535 <= 8); l_535 += 1)
                    {
                        int i;
                        (**l_590) = ((*g_547) = (*g_547));
                        l_670 = ((*p_18) = ((**l_620) = (safe_lshift_func_int16_t_s_s(g_451, 0))));
                        (**l_620) = 0xA8F2E2FDL;
                    }
                }
                l_671[1] = func_48(l_630, (*g_547), ((-1L) | (~g_314[1][0])));
            }
            (***l_625) = (*g_547);
            for (g_82 = 0; (g_82 >= 0); g_82 -= 1)
            {
                int l_676 = (-1L);
                short l_677 = 0x2A56L;
                int *l_692 = &g_3[2];
                unsigned short l_704 = 0x3079L;
                l_636 = &p_17;
                (*g_96) = func_23((l_676 = ((l_625 != (void*)0) != ((+(safe_add_func_uint64_t_u_u(g_163[4], 0x9541CE125232E3D8LL))) || (g_628 <= (((safe_mul_func_uint16_t_u_u(p_17, 0L)) & g_314[0][0]) & 0xE4501AFED7A314B9LL))))), (*l_636), l_677, p_17, &l_636);
                for (l_676 = 3; (l_676 >= 0); l_676 -= 1)
                {
                    int l_689 = 1L;
                    int i;
                    (*g_547) = (void*)0;
                    for (g_449 = 0; (g_449 <= 1); g_449 += 1)
                    {
                        int *l_686 = &g_3[1];
                        long long *l_687 = &l_512;
                        long long *l_688 = &g_469;
                        int i, j;
                        (*g_260) = &p_17;
                        (*l_620) = l_686;
                    }
                    for (l_612 = 0; (l_612 >= 0); l_612 -= 1)
                    {
                        unsigned l_690 = 0UL;
                        return l_690;
                    }
                }
                for (g_451 = 0; (g_451 <= 0); g_451 += 1)
                {
                    long long l_691 = 0x28D1DE7BAE5CA81DLL;
                    int i, j;
                    (*l_620) = func_48((0x4C37086B6CDD6606LL && (l_691 = 0UL)), l_692, g_113[g_82][(g_82 + 6)]);
                    if ((*l_692))
                        continue;
                    for (g_176 = 0; (g_176 <= 0); g_176 += 1)
                    {
                        int i, j;
                        (*p_18) = (**l_620);
                        return (*g_355);
                    }
                    for (l_535 = 0; (l_535 <= 0); l_535 += 1)
                    {
                        int l_693 = 0x7B98FD63L;
                        short *l_697 = &g_113[0][3];
                        short **l_696 = &l_697;
                        int i, j;
                        (*g_547) = &p_16;
                        (**l_620) = ((*g_249) = l_693);
                        (**g_500) = (func_23((((safe_sub_func_int64_t_s_s((((*l_696) = &g_113[0][1]) == (void*)0), 18446744073709551615UL)) | (0UL | ((safe_mod_func_int64_t_s_s((l_693 = l_691), g_113[g_82][(g_82 + 6)])) && ((safe_sub_func_int8_t_s_s(((*g_431) != (void*)0), (safe_rshift_func_int8_t_s_u(p_16, p_17)))) & l_704)))) & p_16), g_629[7], p_17, p_16, &l_636) || 0x31434912L);
                    }
                }
                for (l_558 = 0; (l_558 <= 0); l_558 += 1)
                {
                    for (l_546 = 0; (l_546 >= 0); l_546 -= 1)
                    {
                        unsigned * const *l_705 = &g_432[1];
                        unsigned * const **l_706 = &l_705;
                        (*l_706) = l_705;
                        l_710 = (((l_707 == (void*)0) || ((safe_mod_func_int64_t_s_s(0x836165D9F298A2E4LL, p_17)) >= (0xB20EL <= p_17))) & (func_23(p_17, g_60, (*l_636), p_16, &l_636) == p_16));
                    }
                }
            }
        }
        else
        {
            char l_740 = 0xCBL;
            char *l_756 = &g_347;
            char **l_755 = &l_756;
            char ***l_754 = &l_755;
            int l_761[2][4] = {{3L, 0x589609ABL, 3L, 0x589609ABL}, {3L, 0x589609ABL, 3L, 0x589609ABL}};
            int *l_762 = (void*)0;
            int i, j;
            if ((g_314[1][2] > ((safe_rshift_func_int16_t_s_u(((((**l_620) != (g_628 ^ p_16)) <= (safe_mod_func_int64_t_s_s((((*g_431) = (*g_431)) == (void*)0), p_17))) | g_3[3]), p_16)) > p_16)))
            {
                short l_718 = 0xA888L;
                unsigned short **l_719 = &g_244;
                unsigned short ***l_720 = (void*)0;
                unsigned short ***l_722 = &g_521[0];
                (*p_18) = (safe_rshift_func_uint16_t_u_u(0UL, l_718));
                (*l_722) = l_719;
                (*p_18) = ((*g_355) ^ 4294967295UL);
                for (g_57 = 4; (g_57 <= 36); ++g_57)
                {
                    int * const * const **l_727[9];
                    char *l_732 = &g_347;
                    long long *l_733 = &l_512;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_727[i] = &g_725;
                    for (l_535 = 0; (l_535 <= 0); l_535 += 1)
                    {
                        (*p_18) = l_718;
                    }
                    (*p_18) = ((**l_620) = ((l_728 = g_725) == &l_543));
                    (**l_620) = ((*g_532) || ((0x8A89706D55BC43DDLL ^ ((*l_733) = (l_732 == (void*)0))) && (safe_mul_func_uint8_t_u_u((l_740 = (~func_23((p_17 != 0x01C4739CL), (safe_mod_func_uint32_t_u_u(((**g_431) = g_738), (*g_532))), l_739, (*g_117), l_518[0][1]))), l_741))));
                }
            }
            else
            {
                int *l_742 = &g_163[4];
                const char ****l_753[7][6] = {{&l_752, &l_752, (void*)0, &l_752, &l_752, (void*)0}, {&l_752, &l_752, (void*)0, &l_752, &l_752, (void*)0}, {&l_752, &l_752, (void*)0, &l_752, &l_752, (void*)0}, {&l_752, &l_752, (void*)0, &l_752, &l_752, (void*)0}, {&l_752, &l_752, (void*)0, &l_752, &l_752, (void*)0}, {&l_752, &l_752, (void*)0, &l_752, &l_752, (void*)0}, {&l_752, &l_752, (void*)0, &l_752, &l_752, (void*)0}};
                char ****l_757[10][1][2] = {{{&l_754, &l_754}}, {{&l_754, &l_754}}, {{&l_754, &l_754}}, {{&l_754, &l_754}}, {{&l_754, &l_754}}, {{&l_754, &l_754}}, {{&l_754, &l_754}}, {{&l_754, &l_754}}, {{&l_754, &l_754}}, {{&l_754, &l_754}}};
                unsigned *l_759 = (void*)0;
                unsigned *l_760[6] = {&g_344, &g_344, &g_344, &g_344, &g_344, &g_344};
                int i, j, k;
                (*g_216) = (*l_620);
                (*g_500) = l_742;
                (*l_620) = g_763;
            }
            (*g_717) = (void*)0;
            (*p_18) = l_740;
            (**l_590) = &l_761[1][2];
        }
        if (func_23(((**g_751) < 0x1A189288F65257FBLL), (safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((*l_770) = func_23(p_17, g_347, ((**l_543) = p_17), (safe_mod_func_int8_t_s_s(0x6DL, g_82)), l_644)), 0L)), 0UL)), p_17, p_16, l_518[0][0]))
        {
            char *l_773 = &g_347;
            int l_774 = 1L;
            if ((safe_lshift_func_int8_t_s_s(((*l_773) = p_16), 3)))
            {
                return l_774;
            }
            else
            {
                (*l_644) = (void*)0;
                (**l_590) = &l_774;
            }
            return (*p_18);
        }
        else
        {
            long long *l_775[3];
            int l_796 = (-1L);
            int i;
            for (i = 0; i < 3; i++)
                l_775[i] = (void*)0;
            (*l_530) = (*g_547);
            if (((void*)0 == l_775[0]))
            {
                unsigned char l_780 = 0x95L;
                (*p_18) = (*p_18);
                (*p_18) = (safe_lshift_func_int8_t_s_u(0x36L, (safe_mod_func_uint32_t_u_u(((-1L) > (l_780 = 1L)), (**g_431)))));
            }
            else
            {
                int l_781[9] = {0xB7A1332CL, 0xB7A1332CL, 0x3F5DF5D3L, 0xB7A1332CL, 0xB7A1332CL, 0x3F5DF5D3L, 0xB7A1332CL, 0xB7A1332CL, 0x3F5DF5D3L};
                int **l_798 = &g_43[5];
                int i;
                if (l_781[7])
                {
                    int l_785[1][2];
                    unsigned char *l_797 = &g_451;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_785[i][j] = 0x9BFC3A2CL;
                    }
                    (***l_625) = (*g_500);
                    if ((safe_add_func_int8_t_s_s((((0xFF870451B406BC7DLL >= ((0xE5051D4A5CF9CA61LL < (p_16 == l_784[0])) < (+((*l_797) = (p_17 == (l_785[0][0] != (0xD34C59B1L || (safe_sub_func_uint32_t_u_u(0UL, ((((((((((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(p_16, p_16)), 6)), l_785[0][0])), p_16)) == p_17) || (**g_551)) && l_781[4]) && p_16) && l_785[0][0]) && 1UL) >= g_738) & l_796) ^ (*p_18))))))))))) > (*g_532)) <= p_17), p_17)))
                    {
                        (*l_644) = ((*l_530) = (*g_500));
                        (*p_18) = (*p_18);
                        (**l_590) = &p_16;
                    }
                    else
                    {
                        int *l_799 = &g_3[5];
                        (*p_18) = l_785[0][0];
                        (*g_547) = (*g_547);
                        (*l_620) = l_799;
                        (*l_799) = (safe_lshift_func_uint16_t_u_u(p_16, 14));
                    }
                    for (g_42 = 0; (g_42 <= (-10)); g_42--)
                    {
                        unsigned long long l_808[9][8][3] = {{{0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}}, {{0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}}, {{0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}}, {{0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}}, {{0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}}, {{0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}}, {{0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}}, {{0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}}, {{0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}, {0xBFBC263B7E6E56BELL, 0xBFBC263B7E6E56BELL, 0x38F85E357E70174CLL}}};
                        unsigned l_809 = 0x89A43077L;
                        const int l_810 = (-1L);
                        int i, j, k;
                        (*p_18) = (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(l_809)), 1));
                        if (l_810)
                            break;
                    }
                }
                else
                {
                    for (g_42 = 0; (g_42 <= 0); g_42 += 1)
                    {
                        p_16 = (l_811[2][2][0] = ((*p_18) = (*p_18)));
                    }
                }
                (***l_625) = (*g_547);
            }
            (**l_590) = l_812;
        }
        for (g_176 = (-11); (g_176 != 15); g_176++)
        {
            unsigned char *l_816 = &g_451;
            unsigned char **l_815 = &l_816;
            unsigned char **l_817 = (void*)0;
            unsigned char *l_819 = &g_451;
            unsigned char **l_818 = &l_819;
            int l_823 = 0x1C7C31D7L;
            short *l_824 = &l_612;
            char *l_831[4][10][6] = {{{&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}}, {{&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}}, {{&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}}, {{&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}, {&g_347, &g_628, &g_628, &g_347, &g_628, &g_628}}};
            const int **l_834[2];
            unsigned *l_835 = &g_344;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_834[i] = &g_261[1];
            (*l_812) = (((*l_818) = ((*l_815) = (void*)0)) != l_820);
            (*p_18) = func_23((safe_rshift_func_int16_t_s_u(func_23(func_23(((*l_835) = func_23(l_823, ((*l_824) = g_258), (safe_mul_func_uint8_t_u_u(1UL, (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_823 <= (p_16 <= (g_628 = l_823))), (safe_mul_func_int16_t_s_s(g_60, l_823)))), (((*l_770) = p_16) < 0L))))), p_17, l_834[1])), p_16, p_16, p_16, &g_532), g_82, p_16, p_17, l_834[1]), 11)), p_17, p_17, (*l_812), l_518[0][1]);
            for (g_738 = 0; (g_738 <= 3); g_738 += 1)
            {
                short * volatile *l_838 = &g_837;
                int i;
                for (g_182 = 0; (g_182 <= 3); g_182 += 1)
                {
                    int i;
                    return l_784[g_738];
                }
                l_838 = g_836[0][0][5];
                return l_784[g_738];
            }
        }
    }
    else
    {
        char l_840 = (-1L);
        int l_846[10][2][5] = {{{(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}, {(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}}, {{(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}, {(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}}, {{(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}, {(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}}, {{(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}, {(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}}, {{(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}, {(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}}, {{(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}, {(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}}, {{(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}, {(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}}, {{(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}, {(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}}, {{(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}, {(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}}, {{(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}, {(-1L), (-1L), 0x4B2F0E7FL, 0x4B2F0E7FL, (-1L)}}};
        unsigned l_864 = 0x6EB17A82L;
        unsigned char **l_867 = &l_820;
        int *l_873 = &l_741;
        int i, j, k;
        (***l_589) = (void*)0;
        if ((l_839 == (void*)0))
        {
            long long l_845 = 0x7E82508DA541F25FLL;
            char *l_852 = &g_347;
            char **l_851[8] = {&l_852, &l_852, &l_852, &l_852, &l_852, &l_852, &l_852, &l_852};
            unsigned short **l_857 = &g_244;
            short *l_862 = &l_612;
            int i;
            (***l_589) = &p_16;
            (*p_18) = 1L;
            for (l_739 = 0; (l_739 <= 8); l_739 += 1)
            {
                const int **l_848 = &g_261[1];
                int l_850 = 1L;
                short *l_863 = &g_113[0][2];
                for (g_731 = 0; (g_731 <= 8); g_731 += 1)
                {
                    return l_840;
                }
                for (l_612 = 6; (l_612 >= 0); l_612 -= 1)
                {
                    short *l_847 = &g_113[0][2];
                    if ((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((func_23((**g_431), ((*l_847) = ((l_845 <= (l_846[8][1][4] = p_17)) > p_17)), p_17, p_17, l_848) < (g_849 = (*g_96))), 0UL)), p_17)))
                    {
                        return (**g_500);
                    }
                    else
                    {
                        (*g_547) = (*g_500);
                        return l_845;
                    }
                }
                (*g_96) = ((l_850 = p_16) | (l_851[0] != l_853));
                for (g_628 = 3; (g_628 <= 8); g_628 += 1)
                {
                    int *l_868[3][1][6] = {{{&l_741, &g_7, (void*)0, &g_7, &l_741, &g_7}}, {{&l_741, &g_7, (void*)0, &g_7, &l_741, &g_7}}, {{&l_741, &g_7, (void*)0, &g_7, &l_741, &g_7}}};
                    char **l_871 = &l_854;
                    int i, j, k;
                    (*g_96) = (safe_rshift_func_int16_t_s_s((((l_857 == l_857) & (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(0xF3L, 6)), (p_17 <= p_16)))) > func_23((l_862 == l_863), (0x12060DE5L & (*p_18)), p_16, p_17, &g_261[9])), l_864));
                    l_867 = &l_820;
                    (*l_590) = (void*)0;
                    (*l_848) = &p_17;
                    for (g_42 = 0; (g_42 <= 8); g_42 += 1)
                    {
                        unsigned l_869 = 0x57000142L;
                        int *l_870 = &g_3[4];
                        char ***l_872 = &l_851[0];
                        if ((*p_18))
                            break;
                        (*g_216) = &l_846[8][1][4];
                        l_873 = func_48((*g_355), l_870, (&g_507 != ((*l_872) = l_871)));
                    }
                }
            }
        }
        else
        {
            (*l_873) = ((*g_750) & (**g_749));
            (*g_260) = &p_17;
        }
    }
    return l_874;
}







static int ** func_19(unsigned p_20)
{
    unsigned **l_346 = (void*)0;
    int l_426 = 0x46E6E1D1L;
    const int *l_428[9][4] = {{&l_426, &l_426, (void*)0, (void*)0}, {&l_426, &l_426, (void*)0, (void*)0}, {&l_426, &l_426, (void*)0, (void*)0}, {&l_426, &l_426, (void*)0, (void*)0}, {&l_426, &l_426, (void*)0, (void*)0}, {&l_426, &l_426, (void*)0, (void*)0}, {&l_426, &l_426, (void*)0, (void*)0}, {&l_426, &l_426, (void*)0, (void*)0}, {&l_426, &l_426, (void*)0, (void*)0}};
    const int **l_427 = &l_428[1][3];
    const char *l_443[8][3][2] = {{{&g_347, &g_347}, {&g_347, &g_347}, {&g_347, &g_347}}, {{&g_347, &g_347}, {&g_347, &g_347}, {&g_347, &g_347}}, {{&g_347, &g_347}, {&g_347, &g_347}, {&g_347, &g_347}}, {{&g_347, &g_347}, {&g_347, &g_347}, {&g_347, &g_347}}, {{&g_347, &g_347}, {&g_347, &g_347}, {&g_347, &g_347}}, {{&g_347, &g_347}, {&g_347, &g_347}, {&g_347, &g_347}}, {{&g_347, &g_347}, {&g_347, &g_347}, {&g_347, &g_347}}, {{&g_347, &g_347}, {&g_347, &g_347}, {&g_347, &g_347}}};
    int **l_455 = (void*)0;
    int l_459 = 7L;
    long long l_498[3][1][9] = {{{0xBBE48B8C142B475DLL, (-3L), 0xAF4D6524E635E381LL, (-3L), 0xBBE48B8C142B475DLL, 2L, 0xBBE48B8C142B475DLL, (-3L), 0xAF4D6524E635E381LL}}, {{0xBBE48B8C142B475DLL, (-3L), 0xAF4D6524E635E381LL, (-3L), 0xBBE48B8C142B475DLL, 2L, 0xBBE48B8C142B475DLL, (-3L), 0xAF4D6524E635E381LL}}, {{0xBBE48B8C142B475DLL, (-3L), 0xAF4D6524E635E381LL, (-3L), 0xBBE48B8C142B475DLL, 2L, 0xBBE48B8C142B475DLL, (-3L), 0xAF4D6524E635E381LL}}};
    int l_501[4] = {0x68BF88FFL, (-6L), 0x68BF88FFL, (-6L)};
    const char ***l_504 = (void*)0;
    int **l_508[3][7][5] = {{{&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}}, {{&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}}, {{&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}, {&g_249, &g_249, (void*)0, &g_96, &g_249}}};
    int i, j, k;
    for (p_20 = (-15); (p_20 != 41); p_20 = safe_add_func_uint8_t_u_u(p_20, 2))
    {
        int *l_33 = &g_3[5];
        int **l_32 = &l_33;
        unsigned *l_343 = &g_344;
        unsigned **l_342 = &l_343;
        unsigned ***l_345 = (void*)0;
        int *l_424 = (void*)0;
        int *l_425 = &g_314[0][1];
        char *l_444 = &g_347;
        const int **l_453 = &g_261[1];
        int * const l_463 = (void*)0;
        unsigned long long l_471 = 18446744073709551615UL;
        int **l_499[9][4] = {{&g_43[3], (void*)0, (void*)0, &g_43[4]}, {&g_43[3], (void*)0, (void*)0, &g_43[4]}, {&g_43[3], (void*)0, (void*)0, &g_43[4]}, {&g_43[3], (void*)0, (void*)0, &g_43[4]}, {&g_43[3], (void*)0, (void*)0, &g_43[4]}, {&g_43[3], (void*)0, (void*)0, &g_43[4]}, {&g_43[3], (void*)0, (void*)0, &g_43[4]}, {&g_43[3], (void*)0, (void*)0, &g_43[4]}, {&g_43[3], (void*)0, (void*)0, &g_43[4]}};
        const int ***l_502 = &l_453;
        const int ***l_503 = &l_427;
        int i, j;
    }
    (*l_427) = (*g_333);
    (*g_260) = (*l_427);
    (*g_505) = &l_443[7][1][0];
    return l_508[2][4][4];
}







static int func_23(unsigned p_24, short p_25, int p_26, unsigned short p_27, const int ** p_28)
{
    unsigned ***l_433 = &g_431;
    unsigned **l_434 = &g_432[1];
    unsigned ***l_435 = &l_434;
    int l_436 = 1L;
    (*g_355) = (safe_mul_func_uint8_t_u_u((((*l_433) = g_431) == ((*l_435) = l_434)), l_436));
    return l_436;
}







static int func_29(int ** p_30, int ** p_31)
{
    unsigned l_350 = 0x5E761DEEL;
    long long l_351 = (-1L);
    int l_414 = 0xA9A04E8FL;
    if (((l_350 | l_351) < 0x4AAAAE3DEFE9BEB2LL))
    {
        unsigned char l_369 = 3UL;
        const int l_373[10] = {(-6L), (-6L), (-6L), (-6L), (-6L), (-6L), (-6L), (-6L), (-6L), (-6L)};
        int l_394 = 8L;
        char *l_396 = &g_347;
        unsigned long long *l_409[7];
        unsigned *l_410 = &g_176;
        unsigned short l_411 = 1UL;
        int *l_413[2][1];
        int i, j;
        for (i = 0; i < 7; i++)
            l_409[i] = &g_84[3];
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_413[i][j] = &g_163[3];
        }
        for (g_182 = 0; (g_182 <= 1); g_182 += 1)
        {
            short l_354 = 7L;
            int *l_395 = &l_394;
            int i;
            for (g_344 = 0; (g_344 <= 9); g_344 += 1)
            {
                short *l_356 = &g_113[0][2];
                int *l_370 = &g_163[4];
                long long *l_387[10][9] = {{&g_82, (void*)0, &g_82, &l_351, &l_351, &l_351, &g_82, &g_82, &g_82}, {&g_82, (void*)0, &g_82, &l_351, &l_351, &l_351, &g_82, &g_82, &g_82}, {&g_82, (void*)0, &g_82, &l_351, &l_351, &l_351, &g_82, &g_82, &g_82}, {&g_82, (void*)0, &g_82, &l_351, &l_351, &l_351, &g_82, &g_82, &g_82}, {&g_82, (void*)0, &g_82, &l_351, &l_351, &l_351, &g_82, &g_82, &g_82}, {&g_82, (void*)0, &g_82, &l_351, &l_351, &l_351, &g_82, &g_82, &g_82}, {&g_82, (void*)0, &g_82, &l_351, &l_351, &l_351, &g_82, &g_82, &g_82}, {&g_82, (void*)0, &g_82, &l_351, &l_351, &l_351, &g_82, &g_82, &g_82}, {&g_82, (void*)0, &g_82, &l_351, &l_351, &l_351, &g_82, &g_82, &g_82}, {&g_82, (void*)0, &g_82, &l_351, &l_351, &l_351, &g_82, &g_82, &g_82}};
                short **l_393 = &l_356;
                int i, j;
                (*g_355) = (safe_add_func_int8_t_s_s((g_314[g_182][g_182] & g_314[g_182][g_182]), (l_354 >= l_354)));
                (*l_370) = ((((*l_356) = (-4L)) != 65529UL) < (((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((g_314[g_182][g_182] != (g_7 == g_3[5])) < (((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u(g_314[g_182][g_182], 8)) || (safe_sub_func_int64_t_s_s(l_354, 0x1261F334AA78AA9ELL))), (safe_mod_func_int32_t_s_s(0x388D5597L, g_82)))) <= l_369) | g_176)), 14)) > l_354), l_369)) < g_314[g_182][g_182]) && l_354));
                g_261[(g_182 + 4)] = ((*p_31) = (void*)0);
                if ((g_113[0][2] >= (safe_add_func_uint64_t_u_u((l_373[8] ^ l_373[8]), (l_354 && ((safe_lshift_func_uint8_t_u_u((g_7 > (safe_sub_func_uint64_t_u_u(l_354, 0x66621561983AEE0BLL))), 6)) && (*l_370)))))))
                {
                    long long **l_388 = &g_339;
                    char *l_389 = (void*)0;
                    char *l_390 = &g_347;
                    (*l_370) = ((safe_sub_func_int8_t_s_s((l_369 == (safe_mod_func_int8_t_s_s(((*l_390) = ((((g_84[0] > (safe_rshift_func_int16_t_s_u(l_354, l_373[8]))) != (safe_unary_minus_func_int16_t_s(0xC407L))) == (safe_sub_func_uint64_t_u_u(18446744073709551615UL, (0xCAE517FEL == (l_387[7][5] == ((*l_388) = l_387[6][7])))))) <= g_182)), g_113[0][1]))), 0x78L)) == 0xBA58FB5BL);
                    for (g_176 = 0; (g_176 <= 1); g_176 += 1)
                    {
                        short **l_391[10] = {&l_356, &l_356, &l_356, &l_356, &l_356, &l_356, &l_356, &l_356, &l_356, &l_356};
                        short ***l_392[9][9][1] = {{{&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}}, {{&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}}, {{&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}}, {{&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}}, {{&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}}, {{&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}}, {{&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}}, {{&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}}, {{&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}, {&l_391[8]}}};
                        int i, j, k;
                        l_393 = l_391[0];
                    }
                    if (l_350)
                        continue;
                }
                else
                {
                    return l_350;
                }
            }
            l_394 = (*g_249);
            g_261[(g_182 + 6)] = l_395;
            for (g_176 = 0; (g_176 <= 9); g_176 += 1)
            {
                int i, j;
                if (g_314[g_182][g_182])
                    break;
            }
        }
        l_414 = (+(((((*l_396) = l_351) != ((((*l_410) = (l_350 < (+(((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(l_350, (safe_mod_func_uint8_t_u_u(0x73L, g_118)))) == l_369), (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((0UL < l_394), (l_409[1] != (void*)0))) & 0x4CL), 6)))), l_351)) & l_373[7]) && g_344)))) ^ l_373[3]) | l_411)) < 0x2C2CA27FL) == l_373[8]));
    }
    else
    {
        int l_419 = 0x6C1F4568L;
        int l_420 = 1L;
        for (l_414 = 23; (l_414 == 15); l_414 = safe_sub_func_int64_t_s_s(l_414, 4))
        {
            int * const l_417 = &l_414;
            int **l_418 = &g_41;
            (*l_418) = l_417;
            l_420 = l_419;
            for (g_344 = 0; (g_344 >= 35); g_344 = safe_add_func_int32_t_s_s(g_344, 8))
            {
                int *l_423 = &g_7;
                if (l_350)
                    break;
                (*p_30) = l_423;
                (*p_30) = &l_414;
            }
        }
    }
    return l_351;
}







static int ** func_34(int * p_35, long long p_36)
{
    unsigned l_348 = 0x501E2DEDL;
    int **l_349 = &g_43[5];
    l_348 = ((~0xFCL) >= (p_35 == (void*)0));
    return l_349;
}







static int * func_37(int ** p_38)
{
    int *l_40 = &g_7;
    int **l_39[4][2] = {{&l_40, &l_40}, {&l_40, &l_40}, {&l_40, &l_40}, {&l_40, &l_40}};
    unsigned short *l_56 = &g_57;
    unsigned short *l_59[6][6][6] = {{{&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}}, {{&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}}, {{&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}}, {{&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}}, {{&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}}, {{&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}, {&g_60, &g_60, &g_60, &g_60, &g_60, &g_60}}};
    unsigned short **l_58 = &l_59[4][4][1];
    unsigned l_61 = 18446744073709551615UL;
    long long l_62 = 0x27405EF11EAE5249LL;
    int *l_63 = &g_7;
    short l_78 = 0L;
    long long *l_79 = (void*)0;
    long long *l_80 = &l_62;
    long long *l_81[10][1] = {{&g_82}, {&g_82}, {&g_82}, {&g_82}, {&g_82}, {&g_82}, {&g_82}, {&g_82}, {&g_82}, {&g_82}};
    char l_83 = 1L;
    long long l_85 = (-1L);
    unsigned long long l_86 = 18446744073709551610UL;
    unsigned long long l_110 = 1UL;
    unsigned long long l_111 = 3UL;
    int l_124 = 0x663DAEB9L;
    int *l_127 = &g_42;
    char l_160 = 1L;
    int **l_214 = &g_43[5];
    unsigned l_272 = 4294967292UL;
    unsigned long long *l_277 = &g_84[0];
    const int *l_287 = &g_163[2];
    unsigned l_299[9][7] = {{0x487F4E43L, 0x080FBE33L, 0x52BB4E62L, 0x080FBE33L, 0x487F4E43L, 1UL, 0x487F4E43L}, {0x487F4E43L, 0x080FBE33L, 0x52BB4E62L, 0x080FBE33L, 0x487F4E43L, 1UL, 0x487F4E43L}, {0x487F4E43L, 0x080FBE33L, 0x52BB4E62L, 0x080FBE33L, 0x487F4E43L, 1UL, 0x487F4E43L}, {0x487F4E43L, 0x080FBE33L, 0x52BB4E62L, 0x080FBE33L, 0x487F4E43L, 1UL, 0x487F4E43L}, {0x487F4E43L, 0x080FBE33L, 0x52BB4E62L, 0x080FBE33L, 0x487F4E43L, 1UL, 0x487F4E43L}, {0x487F4E43L, 0x080FBE33L, 0x52BB4E62L, 0x080FBE33L, 0x487F4E43L, 1UL, 0x487F4E43L}, {0x487F4E43L, 0x080FBE33L, 0x52BB4E62L, 0x080FBE33L, 0x487F4E43L, 1UL, 0x487F4E43L}, {0x487F4E43L, 0x080FBE33L, 0x52BB4E62L, 0x080FBE33L, 0x487F4E43L, 1UL, 0x487F4E43L}, {0x487F4E43L, 0x080FBE33L, 0x52BB4E62L, 0x080FBE33L, 0x487F4E43L, 1UL, 0x487F4E43L}};
    unsigned *l_306 = &g_176;
    int *l_341 = &g_42;
    int i, j, k;
    g_43[5] = (g_41 = ((*p_38) = (void*)0));
    g_41 = ((*p_38) = func_44(func_48(((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_42, (((((((*l_56) = g_7) <= g_7) & (*l_40)) >= g_3[2]) ^ g_7) != (l_61 = (((*l_58) = (void*)0) != l_56))))), l_62)) || 0xA4L) < 5UL) == g_7), l_63, (*l_40)), (*l_40), &g_41));
    if ((l_86 = (l_85 = (((*l_63) <= (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint64_t_u_u(g_7, (g_82 = (l_83 = ((*l_80) = (safe_mul_func_uint8_t_u_u(((*l_63) <= (l_78 && 0x5C6936EEL)), g_60))))))) ^ (*l_40)) < (g_84[0] = (g_57 | ((*l_40) | (*l_63))))) <= 0x7EL), 3)), 1UL))) ^ (*l_63)))))
    {
        short l_87 = (-1L);
        int l_88 = 0xB0A344D2L;
        int *l_95 = &l_88;
        int l_121 = 0x3EADD13DL;
        unsigned short * const *l_126 = &l_59[4][4][1];
        unsigned short * const **l_125[5][10][3] = {{{(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}}, {{(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}}, {{(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}}, {{(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}}, {{(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}, {(void*)0, &l_126, &l_126}}};
        char l_131 = 0x3CL;
        char l_141 = 0xFEL;
        int ** const l_152 = &l_40;
        unsigned long long *l_159 = &g_84[0];
        long long l_168 = 0x95CB6CCD2445B51BLL;
        const unsigned l_169 = 0x9603CDA8L;
        const unsigned char l_178[7][3] = {{0x74L, 0UL, 0x52L}, {0x74L, 0UL, 0x52L}, {0x74L, 0UL, 0x52L}, {0x74L, 0UL, 0x52L}, {0x74L, 0UL, 0x52L}, {0x74L, 0UL, 0x52L}, {0x74L, 0UL, 0x52L}};
        unsigned *l_181 = &g_176;
        unsigned char l_198 = 0x7FL;
        unsigned short *l_220[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_220[i] = &g_182;
        l_88 = l_87;
        if (l_87)
        {
            unsigned long long *l_90 = &g_84[0];
            unsigned long long *l_91[1];
            int l_92 = 0L;
            int ** const l_129 = &g_43[1];
            int i;
            for (i = 0; i < 1; i++)
                l_91[i] = &l_86;
            l_88 = 0x841242F1L;
            if (((l_92 = ((*l_90) = (g_57 > g_89))) > 0UL))
            {
                int l_97[1][9] = {{0xDA2E4179L, 3L, 0xDA2E4179L, 3L, 0xDA2E4179L, 3L, 0xDA2E4179L, 3L, 0xDA2E4179L}};
                int i, j;
                for (l_85 = 0; (l_85 < (-13)); l_85--)
                {
                    g_96 = (l_95 = (g_41 = (g_43[6] = (*p_38))));
                    l_97[0][7] = (*l_63);
                }
                (*p_38) = (*p_38);
                (*p_38) = &g_7;
            }
            else
            {
                unsigned l_102 = 0x548F5A9FL;
                int l_112 = 0xEBABB07CL;
                for (g_42 = 0; (g_42 > (-30)); --g_42)
                {
                    unsigned long long l_105 = 0x3A74A005E798639DLL;
                    if ((safe_lshift_func_uint8_t_u_s((g_57 > g_42), 4)))
                    {
                        (*p_38) = &g_42;
                        (*p_38) = (void*)0;
                    }
                    else
                    {
                        (*l_95) = 0L;
                        (*l_95) = ((l_105 < g_113[0][2]) < 65535UL);
                        (*l_95) = 0L;
                    }
                    (*p_38) = &g_3[6];
                    for (l_62 = (-6); (l_62 < 21); l_62++)
                    {
                        volatile unsigned short ***l_119 = (void*)0;
                        volatile unsigned short ***l_120[9][7][2] = {{{&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}}, {{&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}}, {{&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}}, {{&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}}, {{&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}}, {{&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}}, {{&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}}, {{&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}}, {{&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}, {&g_116[0][2], &g_116[0][2]}}};
                        int i, j, k;
                        (*l_95) = (**p_38);
                        l_112 = l_105;
                        g_116[0][2] = g_116[0][2];
                    }
                    (*l_95) = (((l_92 || (l_121 == l_105)) | (safe_add_func_int16_t_s_s(g_113[0][2], 9UL))) ^ (((*l_80) = l_124) <= (&g_116[0][3] == l_125[0][5][2])));
                }
            }
            if (l_92)
            {
                short l_128 = 0L;
                int ** const l_130 = &l_40;
                (*l_130) = func_44((g_43[5] = func_44(l_127, l_128, l_129)), g_60, l_130);
            }
            else
            {
                g_96 = (*p_38);
            }
        }
        else
        {
            unsigned l_134[1];
            int i;
            for (i = 0; i < 1; i++)
                l_134[i] = 0x1F13F598L;
            (*l_127) = (l_134[0] != (!(p_38 == &l_63)));
            (*g_96) = 0xD9DE8EE4L;
            for (l_88 = 0; (l_88 <= 5); l_88 += 1)
            {
                unsigned long long l_139 = 0UL;
                int ***l_140 = &l_39[0][0];
                int l_145 = 0xE37A9842L;
                (*g_96) = (*l_95);
                (*p_38) = func_44(func_44(&g_7, (safe_add_func_uint8_t_u_u(g_60, ((safe_mod_func_int64_t_s_s((-1L), g_113[0][2])) <= (*l_95)))), p_38), l_139, ((*l_140) = &g_96));
                for (l_61 = 0; (l_61 <= 1); l_61 += 1)
                {
                    for (l_87 = 5; (l_87 >= 1); l_87 -= 1)
                    {
                        (*p_38) = (g_43[5] = func_44(func_44((*p_38), l_141, p_38), (*g_96), &g_43[2]));
                        (*p_38) = &g_42;
                        if ((*g_96))
                            break;
                        (*p_38) = (*p_38);
                    }
                    for (l_62 = 1; (l_62 >= 0); l_62 -= 1)
                    {
                        return (*p_38);
                    }
                }
                for (l_139 = 0; (l_139 <= 5); l_139 += 1)
                {
                    unsigned char l_142 = 1UL;
                    (*p_38) = (void*)0;
                    if (l_134[0])
                        break;
                    if (l_134[0])
                        continue;
                    for (l_111 = 0; (l_111 <= 5); l_111 += 1)
                    {
                        unsigned char l_146[1][2];
                        const int ***l_149 = (void*)0;
                        const int ****l_150[2][9] = {{&l_149, &l_149, &l_149, &l_149, &l_149, &l_149, &l_149, &l_149, &l_149}, {&l_149, &l_149, &l_149, &l_149, &l_149, &l_149, &l_149, &l_149, &l_149}};
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_146[i][j] = 0xC4L;
                        }
                        (*p_38) = func_44(func_48(l_142, func_48((*l_95), &g_42, (safe_mul_func_int16_t_s_s(l_145, l_146[0][1]))), (safe_sub_func_int8_t_s_s(g_42, ((g_151 = l_149) == &p_38)))), l_134[0], l_152);
                    }
                }
            }
        }
        if (((*l_127) = (((*l_56) = (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((((*l_159) = (**l_152)) ^ l_160) >= g_60), (safe_mod_func_uint16_t_u_u((*g_117), g_3[5])))), (((9L && (g_163[4] = g_57)) == (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((**l_152), l_168)), 0x5048L))) & g_113[0][2]))), (**l_152)))) != 0xF937L)))
        {
            g_41 = (*p_38);
            (*l_127) = l_169;
            (*p_38) = &g_42;
        }
        else
        {
            char l_172[8][8][4] = {{{0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}}, {{0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}}, {{0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}}, {{0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}}, {{0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}}, {{0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}}, {{0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}}, {{0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}, {0xC0L, 0xEBL, 0x0AL, 0xF6L}}};
            int l_177 = 0xCCC9F170L;
            int i, j, k;
            for (l_141 = 6; (l_141 > 27); ++l_141)
            {
                unsigned l_173[3];
                short *l_174 = &g_113[0][2];
                unsigned *l_175[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_173[i] = 0xCE7AADA5L;
                for (i = 0; i < 3; i++)
                    l_175[i] = &g_176;
                (*l_127) = (((((l_172[7][7][1] | ((l_173[1] | ((*l_174) = 0xD7FDL)) > ((*l_159) = ((l_177 = ((**l_152) != g_7)) != (~(g_176 = (1UL & ((g_42 || l_173[2]) | (*l_63))))))))) && 6UL) != 255UL) >= 0x2CL) && 0L);
                l_177 = (((*l_63) != g_82) | l_172[7][7][1]);
                (*l_127) = l_173[1];
            }
            return (*p_38);
        }
        if ((((*g_117) == g_163[4]) & (l_178[0][2] ^ ((*l_159) = (safe_mod_func_uint32_t_u_u((g_182 = ((*l_181) = (**l_152))), ((*l_127) = (**p_38))))))))
        {
            short *l_191 = &l_78;
            int l_192 = 0xECFE2554L;
            char *l_195 = &l_160;
            l_192 = ((*l_127) = (safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((*l_191) = (0x6AL | (safe_rshift_func_uint8_t_u_u(0UL, (0x3830032AL != ((g_113[0][2] <= g_113[0][2]) | 4294967289UL)))))), 0UL)), 0xAA7BE89E88DAE93ELL)), 0x4DD28137L)));
            (**p_38) = (((&l_58 == &g_116[0][0]) < ((*l_195) = (((*l_63) | (safe_sub_func_uint16_t_u_u(0UL, (l_192 || (**l_152))))) || g_113[0][8]))) >= g_57);
            for (l_141 = 6; (l_141 >= 0); l_141 -= 1)
            {
                int i;
                return g_43[l_141];
            }
        }
        else
        {
            unsigned short l_199 = 0UL;
            int ***l_215 = &l_39[0][1];
            unsigned long long l_217 = 0x152840A79FEFAF0FLL;
            int l_221 = (-10L);
            for (g_42 = 0; (g_42 == 17); ++g_42)
            {
                (*l_152) = (*l_152);
                return (*p_38);
            }
            if ((((*l_181) = (**l_152)) ^ l_198))
            {
                char l_200 = 0x66L;
                l_200 = ((**p_38) = (l_199 & 65535UL));
                (*l_127) = (**p_38);
            }
            else
            {
                short l_207 = 0x44E7L;
                if ((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((*l_40), 12)), 0xA8L)), (l_207 != (safe_lshift_func_int16_t_s_s(((**p_38) & 2L), 15))))))
                {
                    for (g_182 = 0; g_182 < 5; g_182 += 1)
                    {
                        g_163[g_182] = 0x11E98489L;
                    }
                }
                else
                {
                    (**p_38) = (**p_38);
                    (*l_127) = (**p_38);
                    (*l_152) = (*p_38);
                    for (l_62 = (-15); (l_62 > 8); l_62++)
                    {
                        (*l_152) = (*p_38);
                        return &g_163[4];
                    }
                }
                return &g_163[4];
            }
            (**p_38) = (safe_add_func_uint64_t_u_u((g_84[0] = g_89), (((g_216 = ((*l_215) = l_214)) == &g_96) && l_217)));
            for (l_85 = 0; (l_85 <= 2); l_85 += 1)
            {
                unsigned short l_218 = 0x984FL;
                unsigned short *l_219 = &g_182;
                int ** const l_224 = &l_127;
            }
        }
    }
    else
    {
        const int *l_259 = (void*)0;
        char *l_270 = &l_83;
        int l_271 = 0xA85B843CL;
        unsigned *l_273 = &g_176;
        char *l_274 = &l_160;
        unsigned long long *l_275[1][7][9] = {{{&l_86, &l_111, &g_84[3], &l_111, &l_86, (void*)0, (void*)0, &l_111, (void*)0}, {&l_86, &l_111, &g_84[3], &l_111, &l_86, (void*)0, (void*)0, &l_111, (void*)0}, {&l_86, &l_111, &g_84[3], &l_111, &l_86, (void*)0, (void*)0, &l_111, (void*)0}, {&l_86, &l_111, &g_84[3], &l_111, &l_86, (void*)0, (void*)0, &l_111, (void*)0}, {&l_86, &l_111, &g_84[3], &l_111, &l_86, (void*)0, (void*)0, &l_111, (void*)0}, {&l_86, &l_111, &g_84[3], &l_111, &l_86, (void*)0, (void*)0, &l_111, (void*)0}, {&l_86, &l_111, &g_84[3], &l_111, &l_86, (void*)0, (void*)0, &l_111, (void*)0}}};
        unsigned long long **l_276[7][10][3] = {{{&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}}, {{&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}}, {{&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}}, {{&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}}, {{&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}}, {{&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}}, {{&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}, {&l_275[0][5][8], &l_275[0][5][8], (void*)0}}};
        long long l_281 = 0L;
        int **l_304 = &g_41;
        int i, j, k;
        (*g_260) = l_259;
        l_271 = (((safe_mul_func_int8_t_s_s(((*l_274) = ((safe_mul_func_uint8_t_u_u(g_60, ((*l_270) = (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((*l_127), g_163[3])), 3))))) & (((g_182 | ((void*)0 != &l_40)) | l_271) < ((*l_273) = l_272)))), g_3[6])) == (*l_40)) && (*l_127));
        if (((l_277 = l_275[0][5][8]) == &g_84[2]))
        {
            int *l_282 = &g_3[5];
            for (g_60 = 2; (g_60 <= 6); g_60 += 1)
            {
                (*l_127) = 0x60DCA2FCL;
                for (g_57 = 0; (g_57 <= 6); g_57 += 1)
                {
                    int i;
                    (*p_38) = g_43[g_60];
                    for (g_176 = 0; (g_176 <= 6); g_176 += 1)
                    {
                        int *l_278 = &g_163[4];
                        int i;
                        l_278 = ((*p_38) = ((*g_216) = g_43[g_176]));
                        return g_43[g_57];
                    }
                    (*p_38) = g_43[g_57];
                }
                for (l_62 = 0; (l_62 > 13); l_62 = safe_add_func_int32_t_s_s(l_62, 6))
                {
                    (*g_96) = (!l_281);
                    (*g_260) = ((*p_38) = l_282);
                    for (l_272 = 7; (l_272 < 34); ++l_272)
                    {
                        unsigned l_285 = 0x2AA90955L;
                        int *l_286[6][8] = {{&g_3[5], &g_7, &g_3[5], &g_163[2], &g_163[4], &g_163[4], &l_124, &l_124}, {&g_3[5], &g_7, &g_3[5], &g_163[2], &g_163[4], &g_163[4], &l_124, &l_124}, {&g_3[5], &g_7, &g_3[5], &g_163[2], &g_163[4], &g_163[4], &l_124, &l_124}, {&g_3[5], &g_7, &g_3[5], &g_163[2], &g_163[4], &g_163[4], &l_124, &l_124}, {&g_3[5], &g_7, &g_3[5], &g_163[2], &g_163[4], &g_163[4], &l_124, &l_124}, {&g_3[5], &g_7, &g_3[5], &g_163[2], &g_163[4], &g_163[4], &l_124, &l_124}};
                        const int *l_288 = &l_124;
                        int i, j;
                        (*l_127) = (**p_38);
                        l_288 = l_287;
                        return (*g_216);
                    }
                }
            }
        }
        else
        {
            short l_302 = 0x7026L;
            int ***l_303 = &l_214;
            for (l_78 = (-19); (l_78 <= (-10)); l_78++)
            {
                long long l_291 = 0x9633A9F3C6267CA6LL;
                unsigned **l_292 = (void*)0;
                for (l_61 = 1; (l_61 <= 5); l_61 += 1)
                {
                    char *l_297 = &l_83;
                    (*g_96) = l_291;
                    l_292 = l_292;
                    if ((safe_rshift_func_int8_t_s_s(((*l_274) = g_82), (safe_rshift_func_uint16_t_u_u((l_297 != l_270), l_291)))))
                    {
                        (*g_216) = (void*)0;
                    }
                    else
                    {
                        (*g_260) = ((*p_38) = ((*g_216) = (void*)0));
                        (*p_38) = (*g_216);
                    }
                    for (l_86 = 0; (l_86 <= 5); l_86 += 1)
                    {
                        const int **l_298 = &g_261[9];
                        (*l_298) = (*g_260);
                        (*p_38) = &l_271;
                        l_299[4][5] = ((*g_96) = (*g_96));
                    }
                }
            }
            (*g_96) = (!(65529UL != ((safe_mod_func_uint16_t_u_u(l_281, l_302)) | 0x21A4L)));
            (*g_216) = func_44((*p_38), (*l_127), (l_304 = ((*l_303) = p_38)));
        }
        (*l_127) = (*g_96);
    }
    for (g_60 = 0; (g_60 <= 3); g_60 += 1)
    {
        unsigned **l_305 = (void*)0;
        unsigned long long *l_313 = (void*)0;
        unsigned short *** const l_315 = &l_58;
        unsigned l_325 = 4294967295UL;
        int l_326[10] = {0x35D85DF3L, 0x7064778DL, 0x35D85DF3L, 0x7064778DL, 0x35D85DF3L, 0x7064778DL, 0x35D85DF3L, 0x7064778DL, 0x35D85DF3L, 0x7064778DL};
        long long **l_336 = &l_79;
        int i;
        (*l_127) = (&g_176 == (l_306 = &l_272));
        (*l_127) = g_84[g_60];
        (*l_127) = (((safe_lshift_func_int8_t_s_u((*l_287), 4)) ^ (safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(g_84[g_60], (((*l_127) != (*l_287)) > g_84[g_60]))), (g_314[1][0] = (!g_84[g_60]))))) || g_89);
        for (g_57 = 0; (g_57 <= 0); g_57 += 1)
        {
            unsigned char l_329 = 255UL;
            long long l_334[1][1][4];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_334[i][j][k] = 0x66C01BCC7D3ECF2BLL;
                }
            }
            for (g_42 = 0; (g_42 <= 1); g_42 += 1)
            {
                unsigned short * const l_320 = &g_57;
                int l_327 = 0xB5135A25L;
                for (l_111 = 0; (l_111 <= 1); l_111 += 1)
                {
                    const unsigned short *l_321 = &g_182;
                    int l_324 = 0L;
                    int i, j;
                    (*p_38) = (void*)0;
                    if ((&g_116[0][2] != l_315))
                    {
                        int i, j;
                        l_326[0] = ((g_84[g_60] <= (safe_sub_func_int8_t_s_s((((g_82 == ((safe_mod_func_uint32_t_u_u(((*l_306) = (g_176 = (l_320 == l_321))), (*g_249))) && g_314[0][0])) && ((void*)0 == p_38)) && (safe_add_func_uint16_t_u_u(l_324, 4L))), l_325))) | g_182);
                        (*g_216) = &l_326[0];
                    }
                    else
                    {
                        const int **l_328 = &g_261[8];
                        int l_330 = 1L;
                        (*l_328) = (*g_260);
                        l_326[4] = ((((*l_40) || l_329) != (l_330 = g_118)) < g_113[0][2]);
                        if ((*l_127))
                            break;
                        (*g_216) = (*p_38);
                    }
                    (*l_214) = (*p_38);
                }
            }
            (*g_333) = (*g_260);
            for (g_82 = 0; (g_82 >= 0); g_82 -= 1)
            {
                unsigned char l_335 = 0xD7L;
                (*p_38) = &l_326[7];
                (**p_38) = l_334[0][0][1];
                l_335 = (g_3[5] && (&g_176 != (void*)0));
                (*g_340) = l_336;
            }
        }
    }
    return l_341;
}







static int * func_44(int * p_45, int p_46, int ** const p_47)
{
    short l_66 = 0xC489L;
    int l_69[9][5] = {{0x3ECB10B3L, 5L, (-1L), 1L, (-10L)}, {0x3ECB10B3L, 5L, (-1L), 1L, (-10L)}, {0x3ECB10B3L, 5L, (-1L), 1L, (-10L)}, {0x3ECB10B3L, 5L, (-1L), 1L, (-10L)}, {0x3ECB10B3L, 5L, (-1L), 1L, (-10L)}, {0x3ECB10B3L, 5L, (-1L), 1L, (-10L)}, {0x3ECB10B3L, 5L, (-1L), 1L, (-10L)}, {0x3ECB10B3L, 5L, (-1L), 1L, (-10L)}, {0x3ECB10B3L, 5L, (-1L), 1L, (-10L)}};
    int i, j;
    l_69[7][4] = (((g_3[1] != l_66) & 0xC1E2A2D6201886A6LL) == (safe_add_func_uint64_t_u_u(g_7, g_57)));
    return (*p_47);
}







static int * func_48(int p_49, int * p_50, int p_51)
{
    unsigned l_64 = 0xDF97EF3AL;
    int l_65 = 0x713999EAL;
    l_65 = (l_64 = (*p_50));
    return &g_3[5];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_113[i][j], "g_113[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_163[i], "g_163[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_314[i][j], "g_314[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_629[i], "g_629[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_1067, "g_1067", print_hash_value);
    transparent_crc(g_1077, "g_1077", print_hash_value);
    transparent_crc(g_1102, "g_1102", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
