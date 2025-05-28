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



static unsigned g_2 = 0UL;
static int g_4[6][1] = {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}};
static int *g_17 = &g_4[1][0];
static int **g_16 = &g_17;
static const int **g_53[9][3] = {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}};
static char g_70 = 0xAEL;
static char g_72 = 0x5DL;
static unsigned short g_74 = 0x7144L;
static int g_91 = 0x8F5B79C1L;
static int g_102 = 4L;
static unsigned char g_158 = 4UL;
static int *g_180 = (void*)0;
static const int *g_182 = (void*)0;
static const int **g_181 = &g_182;
static unsigned long long **g_199 = (void*)0;
static unsigned g_257 = 6UL;
static short g_265 = (-1L);
static int ***g_282 = &g_16;
static int ****g_281 = &g_282;
static unsigned char g_296 = 0x10L;
static unsigned char *g_317 = &g_158;
static unsigned char **g_316 = &g_317;
static unsigned char g_343 = 4UL;
static unsigned g_365[6] = {0x623BE82BL, 0x623BE82BL, 0x623BE82BL, 0x623BE82BL, 0x623BE82BL, 0x623BE82BL};
static short *g_424[9][2][9] = {{{&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}, {&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}}, {{&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}, {&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}}, {{&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}, {&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}}, {{&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}, {&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}}, {{&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}, {&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}}, {{&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}, {&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}}, {{&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}, {&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}}, {{&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}, {&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}}, {{&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}, {&g_265, (void*)0, &g_265, &g_265, (void*)0, &g_265, (void*)0, &g_265, &g_265}}};
static short *g_425 = &g_265;
static int *g_453[9] = {&g_91, (void*)0, &g_91, (void*)0, &g_91, (void*)0, &g_91, (void*)0, &g_91};
static int **g_456 = &g_17;
static short g_463 = 9L;
static long long g_464 = 0x3311D27A37914D1DLL;
static long long g_497 = 0x346C8994D7A9F401LL;
static unsigned g_644[1] = {1UL};
static unsigned long long g_683 = 0xFD6AF861F3E96C01LL;
static unsigned long long *g_682 = &g_683;
static long long *g_804 = &g_497;
static const char * const g_868 = (void*)0;
static const char * const *g_867 = &g_868;
static int *g_874 = &g_102;
static unsigned short *g_878 = &g_74;
static unsigned short **g_877 = &g_878;
static short g_879 = 0x588EL;
static int **g_902[7] = {(void*)0, &g_874, (void*)0, &g_874, (void*)0, &g_874, (void*)0};
static unsigned char *g_937 = &g_343;
static unsigned char g_947[3] = {8UL, 8UL, 8UL};
static long long g_963[8] = {(-6L), (-6L), (-6L), (-6L), (-6L), (-6L), (-6L), (-6L)};
static unsigned long long g_966 = 8UL;
static unsigned short ***g_1015 = &g_877;
static unsigned short ****g_1014[5] = {&g_1015, (void*)0, &g_1015, (void*)0, &g_1015};
static int *g_1017 = &g_4[3][0];
static unsigned short g_1123 = 65535UL;
static unsigned g_1258 = 0UL;
static unsigned short ** const **g_1273 = (void*)0;
static int ****g_1315[8] = {&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282};
static char *g_1362 = (void*)0;
static char **g_1361 = &g_1362;
static char ***g_1360 = &g_1361;
static unsigned long long g_1441 = 3UL;
static const long long g_1522 = 0xA0A8E8318A63F003LL;
static unsigned char ***g_1581 = &g_316;
static unsigned char ****g_1580 = &g_1581;
static unsigned char *****g_1579 = &g_1580;
static unsigned char ******g_1578[9][4] = {{&g_1579, &g_1579, &g_1579, &g_1579}, {&g_1579, &g_1579, &g_1579, &g_1579}, {&g_1579, &g_1579, &g_1579, &g_1579}, {&g_1579, &g_1579, &g_1579, &g_1579}, {&g_1579, &g_1579, &g_1579, &g_1579}, {&g_1579, &g_1579, &g_1579, &g_1579}, {&g_1579, &g_1579, &g_1579, &g_1579}, {&g_1579, &g_1579, &g_1579, &g_1579}, {&g_1579, &g_1579, &g_1579, &g_1579}};
static unsigned *g_1604 = (void*)0;
static const int ******g_1605 = (void*)0;
static int g_1649 = 0L;
static int *g_1732 = &g_1649;
static unsigned long long * const *g_1757 = &g_682;
static unsigned long long * const **g_1756 = &g_1757;
static int g_1773 = 0xA44FAAEFL;
static char g_1844 = 1L;
static char **g_1939 = &g_1362;



static unsigned short func_1(void);
static int ** const func_5(int p_6, int p_7, unsigned short p_8, long long p_9, int ** p_10);
static char func_13(int ** p_14, const int p_15);
static unsigned short func_18(int p_19, unsigned p_20);
static char func_21(unsigned p_22, int * p_23, char p_24, const unsigned p_25, unsigned p_26);
static int func_29(int * p_30, unsigned p_31, unsigned char p_32, unsigned p_33, unsigned char p_34);
static unsigned func_35(unsigned short p_36, long long p_37, int * p_38);
static unsigned short func_39(int * p_40, unsigned char p_41, int p_42);
static int * func_43(short p_44);
static unsigned long long func_46(int * p_47, int * p_48, const int ** p_49, char p_50, int ** p_51);
static unsigned short func_1(void)
{
    int *l_3[2];
    int **l_367 = &g_180;
    int ***l_1951 = &g_16;
    int i;
    for (i = 0; i < 2; i++)
        l_3[i] = &g_4[3][0];
    g_4[3][0] = (g_2 | 0x46L);
    (*l_1951) = func_5((safe_rshift_func_int8_t_s_u(func_13(g_16, (func_18(g_2, (func_21(g_2, (*g_16), ((safe_rshift_func_uint8_t_u_u(g_4[3][0], (0xA18461E7L || func_29((*g_16), func_35(func_39(((*l_367) = func_43(((void*)0 == &g_17))), (**g_316), (**g_16)), (*g_804), g_1017), (*g_317), g_102, (*g_317))))) < (*g_425)), g_644[0], g_464) <= (*g_317))) == 0UL)), 1)), g_1123, (**g_877), (*g_804), &l_3[0]);

    ;
    ;
    ;
    ;
    return (***g_1015);


}







static int ** const func_5(int p_6, int p_7, unsigned short p_8, long long p_9, int ** p_10)
{
    const int l_1628 = (-3L);
    unsigned l_1629[9][4] = {{0xB34E881DL, 1UL, 18446744073709551613UL, 0x9518AB59L}, {0xB34E881DL, 1UL, 18446744073709551613UL, 0x9518AB59L}, {0xB34E881DL, 1UL, 18446744073709551613UL, 0x9518AB59L}, {0xB34E881DL, 1UL, 18446744073709551613UL, 0x9518AB59L}, {0xB34E881DL, 1UL, 18446744073709551613UL, 0x9518AB59L}, {0xB34E881DL, 1UL, 18446744073709551613UL, 0x9518AB59L}, {0xB34E881DL, 1UL, 18446744073709551613UL, 0x9518AB59L}, {0xB34E881DL, 1UL, 18446744073709551613UL, 0x9518AB59L}, {0xB34E881DL, 1UL, 18446744073709551613UL, 0x9518AB59L}};
    int *l_1633 = &g_91;
    short l_1638 = 4L;
    unsigned *l_1639 = &g_644[0];
    unsigned long long **l_1672 = &g_682;
    int l_1675 = 0x48680C42L;
    int ****l_1718 = &g_282;
    char l_1731 = 2L;
    int l_1770 = (-1L);
    int *l_1788 = &g_1649;
    unsigned char **** const l_1802 = (void*)0;
    const char *l_1812[5] = {&g_70, (void*)0, &g_70, (void*)0, &g_70};
    const char **l_1811 = &l_1812[1];
    const char ***l_1810[5][3][2] = {{{&l_1811, &l_1811}, {&l_1811, &l_1811}, {&l_1811, &l_1811}}, {{&l_1811, &l_1811}, {&l_1811, &l_1811}, {&l_1811, &l_1811}}, {{&l_1811, &l_1811}, {&l_1811, &l_1811}, {&l_1811, &l_1811}}, {{&l_1811, &l_1811}, {&l_1811, &l_1811}, {&l_1811, &l_1811}}, {{&l_1811, &l_1811}, {&l_1811, &l_1811}, {&l_1811, &l_1811}}};
    const char **** const l_1809 = &l_1810[1][0][0];
    short ***l_1829[5] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    const unsigned short *l_1868 = &g_74;
    const unsigned short **l_1867 = &l_1868;
    const unsigned short ***l_1866 = &l_1867;
    const unsigned short ****l_1865 = &l_1866;
    const unsigned short ***** const l_1864 = &l_1865;
    unsigned short l_1870 = 0x9888L;
    int *l_1871 = &g_102;
    char l_1875[7][10][3] = {{{0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}}, {{0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}}, {{0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}}, {{0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}}, {{0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}}, {{0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}}, {{0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}, {0xB7L, (-6L), 0L}}};
    unsigned l_1911 = 0xFC5D0DC2L;
    unsigned long long l_1912[8][1];
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
            l_1912[i][j] = 0xC99FF017B7F6B8F1LL;
    }
    (**g_16) = (**p_10);
    if (((safe_sub_func_uint16_t_u_u((***g_1015), (*g_425))) & (((*l_1639) = ((l_1628 | l_1629[7][3]) && (safe_div_func_int64_t_s_s((((*g_682) = (safe_unary_minus_func_uint16_t_u(l_1629[0][1]))) == func_29(l_1633, p_8, ((*l_1633) | ((safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((g_365[4] != (*l_1633)), 0x24L)), p_8)) == l_1638)), (*l_1633), (***g_1581))), p_9)))) > l_1638)))
    {
        const int l_1644 = (-1L);
        int **l_1690 = &g_1017;
        short l_1704 = 0L;
        unsigned short l_1748 = 1UL;
        if ((*l_1633))
        {
            short l_1647 = 1L;
            int *l_1648 = &g_1649;
            int **** const *l_1669 = &g_1315[4];
            int **** const ** const l_1668 = &l_1669;
            int **** const ** const * const l_1667 = &l_1668;
            (*l_1648) ^= ((*g_878) <= ((func_46((*p_10), ((*g_456) = l_1633), &g_182, func_21(((safe_add_func_int32_t_s_s(((-10L) >= (safe_lshift_func_int16_t_s_s(l_1644, 6))), (safe_add_func_uint16_t_u_u((func_21((g_365[4] ^= ((*l_1633) || ((*l_1633) = (((*g_425) |= l_1647) >= ((p_6 == (*g_937)) && l_1644))))), (*p_10), l_1647, p_8, g_963[2]) >= p_9), p_6)))) && p_9), (*p_10), p_8, l_1647, l_1644), p_10) < l_1647) & p_6));

            ;
            for (g_70 = 1; (g_70 >= 29); g_70++)
            {
                unsigned short l_1652[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1652[i] = 0xA0ABL;
                (*g_181) = func_43(l_1652[1]);

                ;
                (****g_281) = ((((*g_937) = 0x60L) < ((*l_1648) >= (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((****g_1580), ((**g_877) | (safe_sub_func_int32_t_s_s(((**p_10) = l_1644), func_39(l_1639, (*l_1633), l_1644)))))), 1UL)))) <= p_9);
                (*l_1648) = 0xF6E44355L;
                return p_10;


            }
            (***g_281) = func_43((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((-1L), (safe_lshift_func_uint8_t_u_s((((void*)0 == (**g_281)) >= (***g_1015)), ((void*)0 == l_1667))))), 5)) != (safe_lshift_func_uint8_t_u_u(((l_1672 = &g_682) != (void*)0), 1))) >= (safe_add_func_uint64_t_u_u((*l_1633), p_8))), l_1675)));
            (**p_10) = (safe_rshift_func_uint16_t_u_u((l_1644 > p_7), ((-1L) != func_21(l_1644, (*g_456), ((*l_1633) = (((g_365[4] = (((*l_1633) >= ((*g_804) || (((safe_lshift_func_uint16_t_u_u(1UL, (0x5B866A85D2A6343BLL == p_8))) & p_9) > (*l_1633)))) && (*l_1648))) || (-1L)) >= 0L)), l_1644, l_1675))));
        }
        else
        {
            const int **l_1680 = &g_182;
            int **l_1681[10][1][9] = {{{(void*)0, &l_1633, &g_874, &g_17, &g_453[3], (void*)0, (void*)0, (void*)0, &g_453[0]}}, {{(void*)0, &l_1633, &g_874, &g_17, &g_453[3], (void*)0, (void*)0, (void*)0, &g_453[0]}}, {{(void*)0, &l_1633, &g_874, &g_17, &g_453[3], (void*)0, (void*)0, (void*)0, &g_453[0]}}, {{(void*)0, &l_1633, &g_874, &g_17, &g_453[3], (void*)0, (void*)0, (void*)0, &g_453[0]}}, {{(void*)0, &l_1633, &g_874, &g_17, &g_453[3], (void*)0, (void*)0, (void*)0, &g_453[0]}}, {{(void*)0, &l_1633, &g_874, &g_17, &g_453[3], (void*)0, (void*)0, (void*)0, &g_453[0]}}, {{(void*)0, &l_1633, &g_874, &g_17, &g_453[3], (void*)0, (void*)0, (void*)0, &g_453[0]}}, {{(void*)0, &l_1633, &g_874, &g_17, &g_453[3], (void*)0, (void*)0, (void*)0, &g_453[0]}}, {{(void*)0, &l_1633, &g_874, &g_17, &g_453[3], (void*)0, (void*)0, (void*)0, &g_453[0]}}, {{(void*)0, &l_1633, &g_874, &g_17, &g_453[3], (void*)0, (void*)0, (void*)0, &g_453[0]}}};
            long long *l_1739 = (void*)0;
            unsigned l_1745 = 0x95BB53B6L;
            unsigned long long l_1753 = 3UL;
            int i, j, k;
            (*g_874) &= ((func_46((*p_10), (*p_10), l_1680, p_7, l_1681[5][0][5]) & (l_1644 > p_9)) && (safe_rshift_func_uint16_t_u_s((func_35(((*g_878) = (((*g_804) = (1UL & (**p_10))) && p_9)), p_6, (*p_10)) >= (-1L)), (*l_1633))));
            (**p_10) = l_1644;
        }

        ;
        (*g_874) |= (p_8 == ((**l_1690) != (safe_sub_func_int64_t_s_s((*g_804), (safe_mod_func_uint16_t_u_u(p_6, 65529UL))))));
        (**p_10) |= 0x6309ED94L;
        return (**g_281);


    }
    else
    {
        int *l_1808 = &g_102;
        if (func_35(((**g_877) ^= p_7), (*g_804), l_1808))
        {
            (*g_874) = ((**g_16) ^= (*g_874));
        }
        else
        {
            (***g_281) = ((*p_10) = (*g_456));
        }
        if ((*g_17))
        {
            (**g_456) &= (65535UL == ((void*)0 == l_1809));
        }
        else
        {
            unsigned long long l_1824 = 0x1FFABD36C4615172LL;
            int l_1828 = 0x63B76A1FL;
            for (g_257 = (-18); (g_257 == 5); g_257++)
            {
                short l_1821 = (-8L);
                unsigned short *l_1822 = (void*)0;
                unsigned short *l_1823 = (void*)0;
                int **l_1827[8][5][6] = {{{&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}}, {{&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}}, {{&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}}, {{&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}}, {{&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}}, {{&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}}, {{&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}}, {{&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}, {&l_1633, &g_453[8], &g_453[8], &l_1808, &g_180, &l_1808}}};
                int i, j, k;
                (*l_1808) = ((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(((l_1824 = (safe_mod_func_uint16_t_u_u(65530UL, ((*g_878) = (l_1821 && ((p_8 <= (*****g_1579)) == 0xFAL)))))) < (((safe_div_func_uint32_t_u_u(p_8, (((p_8 > l_1828) >= 8UL) ^ p_8))) <= 1UL) & p_6)), 0L)), 0xF4F9C147L)) == p_9);
            }
            (*g_874) = ((**p_10) || (((void*)0 != l_1829[3]) ^ (((*l_1808) | (*l_1788)) & (***g_1581))));
        }
    }
    if ((**p_10))
    {
        short l_1845 = 3L;
        (**p_10) = (~(safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((p_6 || ((safe_sub_func_uint64_t_u_u((((*l_1633) = (((***g_281) = func_43((safe_mod_func_int64_t_s_s((*g_804), (safe_add_func_int16_t_s_s(((*l_1788) != (g_464 = 1L)), (((*g_425) = (func_35((safe_lshift_func_uint8_t_u_u((*l_1633), 5)), (*g_804), func_43((g_1844 & (p_7 < 65533UL)))) <= (*g_317))) == (*l_1788)))))))) != (*p_10))) == 0x3CL), (*g_804))) & (*g_804))), l_1845)), l_1845)) < p_9), 12)));
    }
    else
    {
        int l_1850[3][4][3] = {{{0x3B96530AL, 5L, 0x3B96530AL}, {0x3B96530AL, 5L, 0x3B96530AL}, {0x3B96530AL, 5L, 0x3B96530AL}, {0x3B96530AL, 5L, 0x3B96530AL}}, {{0x3B96530AL, 5L, 0x3B96530AL}, {0x3B96530AL, 5L, 0x3B96530AL}, {0x3B96530AL, 5L, 0x3B96530AL}, {0x3B96530AL, 5L, 0x3B96530AL}}, {{0x3B96530AL, 5L, 0x3B96530AL}, {0x3B96530AL, 5L, 0x3B96530AL}, {0x3B96530AL, 5L, 0x3B96530AL}, {0x3B96530AL, 5L, 0x3B96530AL}}};
        int l_1863[8][5] = {{(-1L), 1L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 1L, (-1L)}};
        int *l_1869[10][8] = {{&g_4[3][0], &l_1770, &g_102, &g_4[3][0], (void*)0, (void*)0, (void*)0, &g_4[3][0]}, {&g_4[3][0], &l_1770, &g_102, &g_4[3][0], (void*)0, (void*)0, (void*)0, &g_4[3][0]}, {&g_4[3][0], &l_1770, &g_102, &g_4[3][0], (void*)0, (void*)0, (void*)0, &g_4[3][0]}, {&g_4[3][0], &l_1770, &g_102, &g_4[3][0], (void*)0, (void*)0, (void*)0, &g_4[3][0]}, {&g_4[3][0], &l_1770, &g_102, &g_4[3][0], (void*)0, (void*)0, (void*)0, &g_4[3][0]}, {&g_4[3][0], &l_1770, &g_102, &g_4[3][0], (void*)0, (void*)0, (void*)0, &g_4[3][0]}, {&g_4[3][0], &l_1770, &g_102, &g_4[3][0], (void*)0, (void*)0, (void*)0, &g_4[3][0]}, {&g_4[3][0], &l_1770, &g_102, &g_4[3][0], (void*)0, (void*)0, (void*)0, &g_4[3][0]}, {&g_4[3][0], &l_1770, &g_102, &g_4[3][0], (void*)0, (void*)0, (void*)0, &g_4[3][0]}, {&g_4[3][0], &l_1770, &g_102, &g_4[3][0], (void*)0, (void*)0, (void*)0, &g_4[3][0]}};
        int i, j, k;
        p_6 &= (safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u(((func_29(func_43(func_35(l_1850[1][0][2], ((safe_rshift_func_uint16_t_u_s(((*g_878) > p_9), (****l_1718))) == (**g_16)), l_1871)), p_8, p_9, g_1649, (*****g_1579)) == 0x30L) ^ g_265), p_7)), (**p_10)));
    }
    if ((((p_6 || (safe_unary_minus_func_uint8_t_u(((*l_1633) != func_46((***l_1718), (**g_282), &g_182, (l_1875[4][3][2] ^ ((safe_unary_minus_func_int16_t_s((safe_div_func_int16_t_s_s((p_6 >= (*l_1633)), ((safe_mod_func_int16_t_s_s((*g_425), 1L)) ^ p_8))))) >= (*l_1633))), (*g_282)))))) & 0x54L) >= 0UL))
    {
        int *** const *l_1886 = (void*)0;
        int *** const **l_1885 = &l_1886;
        int *** const ***l_1884[9] = {&l_1885, &l_1885, &l_1885, &l_1885, &l_1885, &l_1885, &l_1885, &l_1885, &l_1885};
        int i;
        for (p_7 = 0; (p_7 == (-28)); p_7 = safe_sub_func_int32_t_s_s(p_7, 1))
        {
            long long l_1883 = 0x565980D7D675A579LL;
            int *l_1889[7][4][7] = {{{&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}}, {{&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}}, {{&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}}, {{&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}}, {{&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}}, {{&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}}, {{&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}, {&g_1773, &l_1675, (void*)0, (void*)0, (void*)0, &l_1675, &l_1675}}};
            int *l_1941 = &l_1770;
            int i, j, k;
            (**p_10) &= ((p_6 >= (**g_316)) && l_1883);
            if ((0x841C17A01AC47B50LL >= func_21(((*l_1639) ^= 0UL), (*p_10), l_1883, func_18((g_1773 = (((p_8 | ((*g_425) = ((void*)0 == l_1884[0]))) || (!(65535UL > ((***g_1015) = ((safe_sub_func_int8_t_s_s((****l_1718), 0x99L)) || p_8))))) & 0x6E47AB4BED403187LL)), (****l_1718)), g_1844)))
            {
                unsigned short l_1897 = 0x33ABL;
                short l_1907 = 0x2AF0L;
                int l_1909 = 0x941EB09FL;
                for (g_1649 = 0; (g_1649 > (-7)); g_1649--)
                {
                    int *l_1892 = &g_4[2][0];
                    if (func_35(func_29(l_1892, p_6, ((p_9 > ((**g_1757) = p_8)) & 6UL), p_9, ((0x6C9E1D7AL ^ (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_1897, func_35((*g_878), (****l_1718), l_1889[4][3][4]))), (**g_877)))) ^ (*g_425))), p_8, (**g_282)))
                    {
                        int *l_1906 = &g_91;
                        unsigned char *l_1908[9][10][2] = {{{(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}}, {{(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}}, {{(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}}, {{(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}}, {{(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}}, {{(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}}, {{(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}}, {{(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}}, {{(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}, {(void*)0, &g_947[1]}}};
                        char *l_1910 = &g_72;
                        int i, j, k;
                        l_1770 |= (safe_sub_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((((8UL ^ (((*l_1910) = ((l_1909 |= (safe_lshift_func_int16_t_s_s(func_29(func_43(p_7), l_1883, l_1897, func_35(func_21((*l_1871), l_1906, p_6, (p_7 != l_1907), (*l_1871)), (*g_804), l_1889[3][0][0]), (****g_1580)), p_7))) < (*l_1892))) < p_7)) <= l_1911) | p_8), 11)), (***g_1756))), 0xDFF1L));
                        (*l_1906) = l_1912[7][0];
                        (*p_10) = func_43((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(p_9, (safe_div_func_int16_t_s_s(((*g_425) = ((safe_div_func_int8_t_s_s((*l_1906), (*l_1788))) >= p_9)), (***g_1015))))), ((safe_rshift_func_uint8_t_u_s((((safe_sub_func_int64_t_s_s((!(safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((*****g_1579) = (****g_1580)), (((*l_1639) = l_1907) != (safe_add_func_uint32_t_u_u((0x338FA867L <= 0xF20AF07BL), (*l_1906)))))), p_7))), p_8)) < l_1883) != 0x39EF235915ABBE67LL), 5)) || l_1883))));
                        (****g_281) |= 0L;
                    }
                    else
                    {
                        (*g_16) = (*p_10);
                    }
                }
            }
            else
            {
                int **l_1943 = (void*)0;
                unsigned char ***l_1950 = &g_316;
                for (g_343 = (-20); (g_343 >= 49); ++g_343)
                {
                    int ** const l_1933 = &l_1788;
                    (**g_282) = func_43((*l_1788));
                    return p_10;


                }
                if ((p_7 > ((*l_1639) = p_6)))
                {
                    (*g_16) = func_43((*g_425));
                }
                else
                {
                    char **l_1938 = &g_1362;
                    if ((safe_add_func_int16_t_s_s(0xD2F5L, p_6)))
                    {
                        long long *l_1940[2][5][5] = {{{&g_963[2], &g_963[2], &g_963[3], &g_963[2], &g_963[2]}, {&g_963[2], &g_963[2], &g_963[3], &g_963[2], &g_963[2]}, {&g_963[2], &g_963[2], &g_963[3], &g_963[2], &g_963[2]}, {&g_963[2], &g_963[2], &g_963[3], &g_963[2], &g_963[2]}, {&g_963[2], &g_963[2], &g_963[3], &g_963[2], &g_963[2]}}, {{&g_963[2], &g_963[2], &g_963[3], &g_963[2], &g_963[2]}, {&g_963[2], &g_963[2], &g_963[3], &g_963[2], &g_963[2]}, {&g_963[2], &g_963[2], &g_963[3], &g_963[2], &g_963[2]}, {&g_963[2], &g_963[2], &g_963[3], &g_963[2], &g_963[2]}, {&g_963[2], &g_963[2], &g_963[3], &g_963[2], &g_963[2]}}};
                        int i, j, k;
                        l_1941 = func_43(((~(~(g_963[2] = ((*g_804) = (safe_mod_func_uint64_t_u_u((((*g_1360) == (g_1939 = l_1938)) || 0UL), (*l_1871))))))) || ((!p_6) < p_7)));

                        ;
                        (***l_1718) = func_43(p_9);
                        if ((**p_10))
                            break;
                        (****l_1718) &= 0L;
                    }
                    else
                    {
                        unsigned long long l_1942 = 0x1CE05C21E1F555E0LL;
                        l_1942 &= (**p_10);
                    }

                    ;
                    (**g_456) = ((l_1943 != (**g_281)) | ((((*l_1871) |= (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((*g_425), (**g_877))), ((void*)0 != l_1950)))) ^ ((0L < (-3L)) > p_9)) > 0x3470E2B43B2FA747LL));
                }

                ;
            }

            ;
        }
        return (**g_281);


    }
    else
    {
        (*g_181) = ((***l_1718) = (void*)0);

        ;
    }

    ;
    return p_10;


}







static char func_13(int ** p_14, const int p_15)
{
    unsigned l_1611 = 0UL;
    int l_1612[7][4][2] = {{{0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}}, {{0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}}, {{0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}}, {{0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}}, {{0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}}, {{0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}}, {{0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}, {0xB2859575L, 0x59D11AA8L}}};
    unsigned *l_1615 = &g_644[0];
    char *l_1618 = &g_70;
    char *l_1619 = &g_72;
    short **l_1623 = &g_424[8][1][5];
    short ***l_1622 = &l_1623;
    int i, j, k;
    for (g_1441 = 1; (g_1441 <= 5); g_1441 += 1)
    {
        int *****l_1607 = &g_281;
        int ******l_1606 = &l_1607;
        int *******l_1608 = &l_1606;
        int i;
        (*p_14) = func_43(((&g_365[g_1441] != (g_1604 = (void*)0)) != (g_1605 != ((*l_1608) = l_1606))));
    }
    (****g_281) = ((l_1612[1][0][1] |= (safe_sub_func_uint64_t_u_u((*g_682), l_1611))) ^ ((safe_sub_func_uint32_t_u_u(((*l_1615) |= 0xD743666BL), (safe_mod_func_uint16_t_u_u((((((((l_1618 = l_1618) == l_1619) | (((safe_rshift_func_int8_t_s_u(func_18((((*l_1622) = &g_424[8][1][5]) == (void*)0), l_1611), (*g_317))) <= p_15) > l_1611)) >= 0x9EL) | 0x6F5ADA51567486CALL) | 65532UL) | p_15), l_1611)))) != l_1611));
    return p_15;
}







static unsigned short func_18(int p_19, unsigned p_20)
{
    int l_1045 = (-6L);
    unsigned *l_1048[10] = {&g_365[4], &g_365[5], &g_365[4], &g_365[4], &g_365[5], &g_365[4], &g_365[5], &g_365[4], &g_365[4], &g_365[5]};
    int l_1049 = 0x5B87D650L;
    const unsigned short *l_1051 = &g_74;
    const unsigned short **l_1050 = &l_1051;
    unsigned short ****l_1054 = &g_1015;
    int **l_1060 = &g_1017;
    char l_1065[6] = {0xECL, 0xECL, (-6L), 0xECL, 0xECL, (-6L)};
    const unsigned long long l_1111 = 0x4F30CF47DE28E03ALL;
    unsigned long long l_1163 = 0x1BA3D0BDE947838FLL;
    char **l_1165 = (void*)0;
    char ***l_1164 = &l_1165;
    unsigned l_1172 = 0x14188632L;
    int l_1173 = 0x6C900646L;
    short *l_1174[4];
    int l_1175[10];
    unsigned char *l_1194 = (void*)0;
    int *****l_1382[9][5][5] = {{{&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}}, {{&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}}, {{&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}}, {{&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}}, {{&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}}, {{&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}}, {{&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}}, {{&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}}, {{&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}, {&g_1315[0], &g_1315[6], &g_281, &g_281, &g_281}}};
    const unsigned char *l_1404[8] = {&g_343, &g_296, &g_343, &g_296, &g_343, &g_296, &g_343, &g_296};
    const unsigned char **l_1403 = &l_1404[5];
    const unsigned char ***l_1402 = &l_1403;
    const unsigned char ****l_1401 = &l_1402;
    const unsigned char *****l_1400[3][6] = {{&l_1401, &l_1401, &l_1401, &l_1401, &l_1401, &l_1401}, {&l_1401, &l_1401, &l_1401, &l_1401, &l_1401, &l_1401}, {&l_1401, &l_1401, &l_1401, &l_1401, &l_1401, &l_1401}};
    unsigned l_1412 = 0x04BFEAF2L;
    int l_1414 = 0x1F3C32B5L;
    const int **l_1442 = &g_182;
    const long long *l_1454[2][3] = {{&g_963[5], &g_963[2], &g_963[5]}, {&g_963[5], &g_963[2], &g_963[5]}};
    const long long **l_1453 = &l_1454[1][1];
    int *l_1499 = &l_1049;
    unsigned short l_1600 = 65535UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1174[i] = &g_463;
    for (i = 0; i < 10; i++)
        l_1175[i] = 0xAD69D4DEL;
    return p_19;
}







static char func_21(unsigned p_22, int * p_23, char p_24, const unsigned p_25, unsigned p_26)
{
    char l_1025 = (-3L);
    unsigned char l_1037[2][2][6] = {{{0x02L, 0x02L, 0UL, 0x02L, 0x02L, 0UL}, {0x02L, 0x02L, 0UL, 0x02L, 0x02L, 0UL}}, {{0x02L, 0x02L, 0UL, 0x02L, 0x02L, 0UL}, {0x02L, 0x02L, 0UL, 0x02L, 0x02L, 0UL}}};
    unsigned char ***l_1044 = &g_316;
    unsigned char ****l_1043 = &l_1044;
    int i, j, k;
    for (g_265 = 0; (g_265 <= 0); g_265 += 1)
    {
        short **l_1036 = (void*)0;
        int i;
        (*g_874) ^= (safe_div_func_int64_t_s_s(g_644[g_265], (l_1025 ^ p_22)));
        for (g_296 = 0; (g_296 <= 0); g_296 += 1)
        {
            short **l_1035 = &g_425;
            short ***l_1034 = &l_1035;
            int l_1042 = 0x1C411532L;
            int i, j;
            (*g_874) &= (safe_sub_func_int32_t_s_s((l_1042 = ((*p_23) = (safe_lshift_func_int16_t_s_u(g_4[(g_296 + 2)][g_265], ((safe_sub_func_uint8_t_u_u((~(*g_937)), (g_644[g_265] && ((((*l_1034) = &g_424[2][1][1]) == l_1036) ^ (l_1037[1][1][3] <= g_644[g_265]))))) != (safe_div_func_int64_t_s_s((((safe_mod_func_uint32_t_u_u((+g_4[4][0]), 8L)) != g_644[g_265]) >= (-1L)), (*g_804)))))))), 0xF4E96883L));

            ;
        }
    }
    (*p_23) = ((void*)0 == l_1043);
    return p_26;
}







static int func_29(int * p_30, unsigned p_31, unsigned char p_32, unsigned p_33, unsigned char p_34)
{
    for (g_91 = 1; (g_91 <= 4); g_91 += 1)
    {
        unsigned long long **l_1018 = &g_682;
        unsigned long long **l_1020 = &g_682;
        int l_1022 = 1L;
        for (g_463 = 0; (g_463 <= 8); g_463 += 1)
        {
            unsigned long long ***l_1019 = &l_1018;
            unsigned long long **l_1021 = &g_682;
            int i;
            (*g_874) |= ((((*l_1019) = l_1018) == (l_1021 = l_1020)) >= (*g_937));
            if (l_1022)
                continue;
            if (l_1022)
                continue;
        }
    }
    return (*g_874);
}







static unsigned func_35(unsigned short p_36, long long p_37, int * p_38)
{
    return p_37;
}







static unsigned short func_39(int * p_40, unsigned char p_41, int p_42)
{
    unsigned short l_370 = 9UL;
    int **l_371 = (void*)0;
    int *l_373 = &g_102;
    int **l_372 = &l_373;
    const int ***l_374 = &g_53[5][0];
    unsigned long long l_375 = 6UL;
    int *****l_405 = (void*)0;
    int **l_422 = &l_373;
    int *l_426 = &g_102;
    int *l_454 = &g_4[3][0];
    int *l_455 = &g_4[3][0];
    unsigned l_533 = 0x47701B57L;
    const int **l_539 = &g_182;
    unsigned long long ***l_620 = (void*)0;
    unsigned char *l_693 = &g_296;
    int l_695 = 9L;
    unsigned short l_770 = 0x1BF1L;
    long long l_788 = 0xE025935B32DE493ALL;
    int *l_812[5] = {(void*)0, &g_91, (void*)0, &g_91, (void*)0};
    const int **l_883 = &g_182;
    unsigned short **l_898 = &g_878;
    char **l_936 = (void*)0;
    int **l_940 = (void*)0;
    long long l_973 = 0x23715DBC7D6C2CCELL;
    int *l_993 = &l_695;
    int i;
    p_40 = &p_42;

    ;
    return p_42;
}







static int * func_43(short p_44)
{
    unsigned long long l_45 = 18446744073709551610UL;
    int *l_52 = &g_4[3][0];
    int *l_55 = &g_4[3][0];
    int **l_54 = &l_55;
    const int *l_57 = &g_4[4][0];
    const int **l_56 = &l_57;
    int *l_90 = &g_91;
    int l_155 = 0x1B0195B8L;
    unsigned l_156 = 1UL;
    long long l_210 = 0x7F3F7D6CEE14A350LL;
    int ***l_234 = (void*)0;
    int ****l_233 = &l_234;
    int l_255[5][6][3] = {{{0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}}, {{0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}}, {{0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}}, {{0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}}, {{0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}, {0L, 0x7EA0FBE6L, 0xAC53C360L}}};
    unsigned char *l_295 = &g_296;
    unsigned long long *l_313 = &l_45;
    int l_315 = 0xA9F9E3E2L;
    int *l_335 = (void*)0;
    int *l_366 = &g_102;
    int i, j, k;
    return (*g_16);


}







static unsigned long long func_46(int * p_47, int * p_48, const int ** p_49, char p_50, int ** p_51)
{
    return g_4[3][0];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_365[i], "g_365[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_644[i], "g_644[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_879, "g_879", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_947[i], "g_947[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_963[i], "g_963[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_966, "g_966", print_hash_value);
    transparent_crc(g_1123, "g_1123", print_hash_value);
    transparent_crc(g_1258, "g_1258", print_hash_value);
    transparent_crc(g_1441, "g_1441", print_hash_value);
    transparent_crc(g_1522, "g_1522", print_hash_value);
    transparent_crc(g_1649, "g_1649", print_hash_value);
    transparent_crc(g_1773, "g_1773", print_hash_value);
    transparent_crc(g_1844, "g_1844", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
