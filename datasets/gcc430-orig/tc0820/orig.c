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



static long long g_12 = 0x2D8CB4C23AFC3718LL;
static int g_32 = 3L;
static int *g_31 = &g_32;
static unsigned char g_57 = 1UL;
static long long g_75 = 0x0DB1262954F618E1LL;
static int g_84 = (-1L);
static char g_98 = 0x6BL;
static char g_100 = (-4L);
static unsigned g_102 = 4294967295UL;
static unsigned char *g_113 = &g_57;
static unsigned char **g_112 = &g_113;
static unsigned char g_116 = 0UL;
static unsigned short g_146 = 0x5BE9L;
static int g_258 = (-6L);
static int *g_257 = &g_258;
static char g_267 = (-1L);
static char *g_282 = &g_267;
static char **g_281 = &g_282;
static unsigned char g_309 = 247UL;
static short g_328 = 0xC397L;
static int g_331 = (-1L);
static unsigned *g_351 = &g_102;
static unsigned **g_350 = &g_351;
static unsigned ***g_349 = &g_350;
static unsigned long long g_354 = 0x8687C02BD18D6AC7LL;
static unsigned short *g_410 = (void*)0;
static unsigned short * const *g_409 = &g_410;
static unsigned short **g_436 = &g_410;
static long long g_437 = (-7L);
static int *g_497 = &g_32;
static unsigned char g_507 = 249UL;
static unsigned g_534 = 0UL;
static int **g_554 = (void*)0;
static unsigned short g_578 = 1UL;
static unsigned long long **g_628 = (void*)0;
static const int *g_725 = &g_258;
static unsigned g_736 = 0xF3DC3030L;
static unsigned g_739 = 1UL;



static const unsigned func_1(void);
static int * func_2(int * const p_3, char p_4, const char p_5, int p_6);
static int * func_7(unsigned p_8, int * p_9, unsigned char p_10, const long long p_11);
static int * func_13(unsigned p_14, int * p_15);
static char func_27(int * p_28, int * p_29, char p_30);
static int * const func_33(unsigned p_34, int p_35, unsigned p_36);
static int * func_37(const unsigned p_38);
static short func_44(int * p_45);
static unsigned char func_52(char p_53, const unsigned p_54, unsigned char p_55);
static unsigned char ** func_58(int p_59, int * p_60, unsigned short p_61, int p_62);
static const unsigned func_1(void)
{
    long long l_20 = 6L;
    unsigned char l_256 = 255UL;
    int **l_332 = &g_31;
    char l_341 = 0x44L;
    unsigned *l_348 = (void*)0;
    unsigned ** const l_347 = &l_348;
    unsigned ** const *l_346 = &l_347;
    int **l_352 = &g_257;
    unsigned long long *l_353 = &g_354;
    unsigned l_355 = 1UL;
    unsigned ***l_459 = &g_350;
    const unsigned **l_468 = (void*)0;
    const unsigned ***l_467 = &l_468;
    char l_486 = 0xE9L;
    long long l_546 = (-4L);
    int *l_553 = &g_32;
    long long l_634 = 1L;
    char **l_647 = &g_282;
    unsigned short l_675 = 65535UL;
    long long l_709 = (-1L);
    int l_764 = 0x50EA56B2L;
    (*l_332) = func_2(func_7(g_12, func_13((safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s(l_20, ((((((safe_lshift_func_int8_t_s_u((l_20 && g_12), 2)) > (safe_add_func_uint32_t_u_u(l_20, l_20))) <= (g_12 > ((safe_lshift_func_uint8_t_u_s((func_27(g_31, &g_32, l_20) <= l_256), 0)) == l_256))) <= g_12) && 0UL) || (*g_31)))), g_12)), g_257), g_267, l_20), l_256, (*g_282), g_12);
    if ((safe_lshift_func_uint8_t_u_s((g_309 ^= (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s(func_52((l_341 & (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((~(**l_332)), (l_346 != g_349))), ((**l_332) == ((*l_353) = (0xD1L != func_44(((*l_352) = (*l_332))))))))), (*g_351), (*g_113)), (*g_282))) | 18446744073709551615UL), 0xB99910E70EACC278LL)), (**g_281)))), l_355)))
    {
        for (g_331 = (-9); (g_331 < (-18)); g_331 = safe_sub_func_int32_t_s_s(g_331, 5))
        {
            return g_84;
        }
    }
    else
    {
        long long l_358 = 0x3C1983C54A67A932LL;
        int *l_359 = &g_331;
        short l_387 = (-9L);
        int l_392 = 0xE215F752L;
        int *l_422 = &l_392;
        unsigned short **l_435 = &g_410;
        int l_440 = 0xAC65E84AL;
        int *l_462 = &g_84;
        const unsigned char l_485 = 0xC1L;
        char l_508 = 0xF4L;
        unsigned long long l_510 = 0x1AFE3AFF35FAD94FLL;
        unsigned long long l_518 = 0UL;
        int l_604 = 0x7073CF48L;
        unsigned long long **l_627 = &l_353;
        int *l_665 = &g_84;
        if (((**l_352) = func_44(l_359)))
        {
            unsigned **l_389 = &l_348;
            unsigned short l_395 = 0x8E61L;
            int ***l_402 = &l_332;
            unsigned long long * const l_425 = (void*)0;
            unsigned long long *l_426 = &g_354;
            unsigned long long **l_427 = &l_353;
            char *l_432 = (void*)0;
            char *l_433 = (void*)0;
            char *l_434 = &g_100;
            unsigned char **l_506 = &g_113;
            int *l_513 = &g_258;
            long long l_620 = (-1L);
            if ((safe_sub_func_int16_t_s_s(g_309, g_354)))
            {
                long long *l_371 = &l_358;
                int l_382 = 3L;
                int *l_388 = &g_258;
                (*l_352) = &g_331;
                (*l_359) = (*g_257);
                for (g_84 = 29; (g_84 != 16); --g_84)
                {
                    long long l_372 = 0x752C867FCCA2A0E6LL;
                    int l_383 = 0L;
                    char l_384 = 0L;
                    unsigned * const *l_390 = (void*)0;
                    unsigned * const **l_391 = &l_390;
                    for (g_98 = 0; (g_98 <= (-13)); g_98 = safe_sub_func_int32_t_s_s(g_98, 6))
                    {
                        int **l_368 = &l_359;
                        unsigned short *l_377 = (void*)0;
                        char *l_385 = &g_100;
                        char *l_386 = &l_341;
                        l_382 = ((safe_div_func_uint8_t_u_u((func_44((*l_368)) || (**g_350)), (**g_112))) < (*l_359));
                        if ((**l_368))
                            break;
                        (*l_352) = (l_388 = l_359);
                        g_31 = &g_258;
                    }
                    (*l_352) = (void*)0;
                    (*l_388) = ((l_389 == ((*l_391) = l_390)) < ((0x2072D21EL < g_309) ^ (func_44(((*l_332) = &g_84)) <= (*g_113))));
                    (*l_388) &= (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((**g_112), (*g_113))), 0xC7L));
                }
            }
            else
            {
                unsigned short l_404 = 0x0E89L;
                (*l_359) = (**l_352);
                for (g_12 = (-15); (g_12 == (-10)); g_12 = safe_add_func_int8_t_s_s(g_12, 8))
                {
                    unsigned l_412 = 0xC921EBF9L;
                    unsigned short *l_421 = &l_404;
                }
                (*l_332) = l_422;
            }
            l_440 ^= ((**g_281) <= ((((safe_add_func_int64_t_s_s((l_425 != ((*l_427) = l_426)), ((((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((*l_434) = (*l_359)), (*l_422))) == (&g_410 == (g_436 = l_435))), g_437)) == (safe_add_func_int32_t_s_s(2L, (*l_422)))) <= (*l_422)) ^ (**g_350)))) <= (*g_113)) < (*l_422)) >= (**g_350)));
            if ((*l_422))
            {
                int *l_454 = (void*)0;
                unsigned ** const *l_458 = &l_389;
                unsigned char ** const l_505 = &g_113;
                unsigned long long **l_519 = &l_426;
                int *l_541 = (void*)0;
                short *l_547 = &l_387;
                unsigned short *l_548 = &g_146;
                unsigned short *l_549 = &l_395;
                for (g_57 = 0; (g_57 > 39); g_57 = safe_add_func_int8_t_s_s(g_57, 5))
                {
                    unsigned short l_447 = 0x200CL;
                    int *l_455 = &g_84;
                    unsigned char *l_460 = &g_309;
                    long long *l_461 = &l_20;
                    g_257 = &g_258;
                    (*l_359) = ((((*l_353) = ((*l_359) >= ((((*l_455) = (((***g_349) | 0xFF80C6C1L) & (*l_422))) >= ((safe_div_func_uint64_t_u_u((l_458 != l_459), ((*l_461) = (((*l_460) = ((((g_354 | g_146) & (func_44(&g_32) | g_102)) <= (**g_112)) != (*l_359))) | (**g_281))))) & 1UL)) != 0xEAL))) ^ 0x36E81D26D1495F05LL) == g_267);
                    (**l_352) = (((4294967289UL && func_44(l_462)) >= ((*l_455) ^= ((*g_257) != ((((safe_add_func_int8_t_s_s(0x4DL, (safe_mod_func_int64_t_s_s((l_458 == l_467), g_100)))) ^ (safe_unary_minus_func_uint64_t_u((!(*l_422))))) > 0L) & (*g_351))))) | 4294967295UL);
                }
                for (g_267 = 0; (g_267 >= (-15)); g_267 = safe_sub_func_uint64_t_u_u(g_267, 4))
                {
                    long long l_487 = 9L;
                    const long long l_498 = 0x6F7960FBA03F3446LL;
                    (*l_359) = 0x0501E52DL;
                    if (((*l_422) = (safe_rshift_func_int8_t_s_s((*l_359), 2))))
                    {
                        int l_484 = 7L;
                        (*l_422) ^= ((~g_354) ^ (((((g_75 == (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(func_44(((**l_402) = &g_258)), g_267)), 5))) | (safe_sub_func_uint32_t_u_u(((l_484 = ((*g_113) == (+(*g_113)))) ^ (l_485 == func_44(&g_331))), 1L))) & g_100) ^ l_486) == (*l_359)));
                    }
                    else
                    {
                        char l_488 = 0xB8L;
                        (*l_359) |= l_487;
                        if (l_488)
                            break;
                        (*l_462) |= 0L;
                    }
                    if ((*l_422))
                    {
                        return g_32;
                    }
                    else
                    {
                        unsigned char l_499 = 0x7DL;
                        short *l_504 = &g_328;
                        (*l_359) = (~(0x1FL & ((~l_395) ^ ((void*)0 == (*l_435)))));
                        l_499 = ((*l_422) = ((4294967295UL > (((*l_434) = (((*l_359) = g_267) == (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((**g_281), ((((safe_sub_func_uint8_t_u_u(l_487, (**g_112))) <= (l_498 | l_498)) && (*g_497)) || 0x3B594DDF7CE69660LL))), (*l_422))))) == (**g_281))) <= 0x216A5DE5303EFB8DLL));
                        (*l_422) &= ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((**g_281), (((*l_359) >= (func_44(&l_392) & ((+(0x95CBL && g_84)) | 0xF4L))) ^ 0L))), 8)) <= ((*l_504) = (-1L)));
                    }
                }
                if ((*l_359))
                {
                    unsigned char l_509 = 0x04L;
                    int *l_520 = &g_258;
                    unsigned *l_533 = &g_534;
                    int *l_536 = &g_84;
                    g_497 = &g_331;
                    g_257 = func_33((safe_mul_func_uint8_t_u_u(((**g_112) = (*g_113)), (g_309 &= ((&l_440 == &g_84) != func_44(((**l_402) = l_513)))))), (safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(l_518, (l_519 != (void*)0))), 0xE9BCD2CE6293F266LL)), g_258);
                    (*l_332) = func_7((**g_350), (g_497 = l_520), (safe_add_func_uint16_t_u_u(func_44(&g_32), (safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((**l_332) | (safe_mul_func_int8_t_s_s((**g_281), (safe_add_func_uint16_t_u_u((g_146 = (((*l_434) = (**l_352)) && (safe_rshift_func_uint16_t_u_u((((*l_533) = (***g_349)) ^ ((*l_359) = ((safe_unary_minus_func_uint16_t_u(func_44(l_536))) || (*g_31)))), (*l_520))))), 0x2E8EL))))), g_84)), (**l_352))))), g_98);
                    for (l_341 = 5; (l_341 < (-4)); l_341 = safe_sub_func_uint64_t_u_u(l_341, 9))
                    {
                        long long *l_543 = &l_20;
                        (*l_422) &= (((safe_lshift_func_uint16_t_u_s((&g_258 == l_541), 7)) < (((*l_536) = (*l_513)) > (safe_unary_minus_func_int64_t_s(((*l_543) = (g_267 >= func_44((*l_332)))))))) <= (+(g_98 || (*l_513))));
                        (*g_257) = (((*l_513) = (g_267 && 18446744073709551612UL)) == (*g_282));
                        (*g_31) = (*l_536);
                    }
                }
                else
                {
                    (*l_352) = (void*)0;
                    (**l_402) = (void*)0;
                }
                (*l_513) = (((*l_547) = ((safe_rshift_func_int8_t_s_s(((*g_282) = (*g_282)), l_546)) > (*g_113))) == ((*l_549) = ((*l_548) &= g_116)));
            }
            else
            {
                unsigned char l_576 = 0xBEL;
                int *l_606 = &g_32;
                long long l_639 = (-7L);
                for (l_20 = (-9); (l_20 <= 14); ++l_20)
                {
                    int *l_552 = &g_258;
                    g_497 = l_552;
                    g_31 = l_553;
                    g_554 = &g_497;
                }
                for (g_146 = 0; (g_146 <= 52); ++g_146)
                {
                    unsigned short *l_559 = &l_395;
                    const char *l_566 = &g_100;
                    int *l_575 = &g_331;
                    unsigned short *l_577 = &g_578;
                    int *l_588 = &g_331;
                    (*l_575) = (safe_add_func_uint16_t_u_u((((*l_559) = 65535UL) != (safe_div_func_uint8_t_u_u((18446744073709551615UL >= (safe_add_func_int64_t_s_s(g_102, (safe_sub_func_int64_t_s_s(g_309, ((void*)0 != l_566)))))), (*l_513)))), (safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((g_328 = ((~(safe_add_func_uint16_t_u_u(((*l_577) &= (((!g_328) & (safe_sub_func_uint64_t_u_u(func_44(l_575), l_576))) & 0x10644A09L)), l_576))) ^ g_534)), g_116)), (-1L)))));
                    for (g_258 = 22; (g_258 != 8); g_258 = safe_sub_func_int64_t_s_s(g_258, 6))
                    {
                        unsigned l_583 = 0xC3194414L;
                        int **l_589 = (void*)0;
                        int **l_590 = &g_31;
                        (*l_553) = ((*l_359) = (safe_lshift_func_uint16_t_u_u((*l_359), 3)));
                        (*l_575) = l_583;
                        (*l_590) = func_33(((safe_mul_func_int16_t_s_s(((func_44(&g_32) <= ((**g_112) = (*l_575))) | 0x5BD41BEC5B46A778LL), g_102)) || (**g_112)), l_583, l_583);
                    }
                    (*l_513) = (*g_497);
                }
                if ((*l_513))
                {
                    int l_605 = (-1L);
                    int *l_653 = &g_331;
                    for (g_437 = 0; (g_437 >= (-18)); g_437--)
                    {
                        char l_595 = (-1L);
                        (*l_553) |= (safe_lshift_func_int16_t_s_u(g_267, 10));
                        if (l_595)
                            break;
                    }
                    if (((~g_12) || func_52(((**g_281) | ((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((*l_513) = ((*l_434) = l_604)), func_44(((**l_402) = &g_331)))), l_605)), func_44(l_606))) > func_44(&g_32))), l_605, (*l_553))))
                    {
                        unsigned long long l_613 = 0UL;
                        short *l_618 = &l_387;
                        unsigned char *l_619 = &l_576;
                        (**l_402) = (*l_352);
                    }
                    else
                    {
                        (*l_462) = (*l_359);
                    }
                    for (l_508 = 0; (l_508 >= 5); ++l_508)
                    {
                        unsigned long long ***l_629 = (void*)0;
                        unsigned long long ***l_630 = &g_628;
                        unsigned long long ***l_631 = &l_427;
                        int l_640 = 0x36022DEEL;
                        long long *l_648 = (void*)0;
                        short *l_649 = &g_328;
                        short *l_650 = &l_387;
                        unsigned *l_651 = &g_534;
                        unsigned *l_652 = &l_355;
                        int *l_654 = (void*)0;
                        l_640 = ((safe_rshift_func_int8_t_s_u(0xA9L, 4)) <= ((safe_sub_func_int16_t_s_s((l_627 == ((*l_631) = ((*l_630) = g_628))), g_102)) || (safe_div_func_int64_t_s_s((l_634 & 0x0762L), (g_12 |= (((safe_lshift_func_uint16_t_u_s(((-1L) && (safe_mul_func_int8_t_s_s(l_639, 6L))), (*l_462))) && l_605) && 0x4AL))))));
                        (*l_631) = (void*)0;
                        (*l_606) &= l_605;
                        l_654 = l_606;
                    }
                    for (g_578 = 0; (g_578 != 1); g_578++)
                    {
                        (*l_352) = ((**l_402) = &l_605);
                        (*g_31) = (*l_513);
                    }
                }
                else
                {
                    const char * const l_657 = &g_100;
                    (*l_402) = &l_606;
                    (*l_513) ^= ((*l_606) ^ ((*g_281) == l_657));
                }
            }
        }
        else
        {
            const char l_658 = 6L;
            unsigned *l_664 = &l_355;
            long long *l_666 = &l_20;
            const unsigned l_669 = 1UL;
            (*l_352) = &g_84;
            (**l_352) &= ((*l_553) = (g_534 == (g_75 = (l_658 <= ((*l_666) = (0xDBB254B6L > (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(l_658)), (***g_349)))))))));
            (*l_422) = (safe_rshift_func_uint8_t_u_s(0UL, (l_669 & ((***g_349) = (&g_328 != (void*)0)))));
        }
        (*g_497) = (((((*l_359) & (***g_349)) == (*g_113)) | g_258) >= (**g_350));
        (*l_462) = (*l_359);
    }
    if ((*g_497))
    {
        unsigned ****l_672 = &g_349;
        unsigned long long *l_684 = &g_354;
        unsigned short **l_685 = &g_410;
        int l_686 = (-7L);
        long long l_699 = 0xD9F2B86BA0B29B6BLL;
        unsigned char *l_716 = &g_507;
        int l_748 = 0x1E636582L;
        unsigned char ***l_758 = &g_112;
        unsigned short *l_765 = &g_146;
        if ((safe_mul_func_uint8_t_u_u(((&g_350 == ((*l_672) = &g_350)) >= (safe_rshift_func_uint16_t_u_u(l_675, (g_267 ^ (safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((*l_553) ^ (*l_553)), (safe_mul_func_uint16_t_u_u(((l_353 != l_684) && (((((&g_410 == l_685) ^ 6UL) <= l_686) || l_686) & 9L)), l_686)))), l_686)), l_686)))))), (**g_281))))
        {
            int *l_689 = &g_84;
            unsigned short l_690 = 0x0889L;
            (*g_497) = (safe_mul_func_uint16_t_u_u((l_690 | (safe_lshift_func_int16_t_s_u(0x97A3L, 3))), l_686));
            return g_328;
        }
        else
        {
            unsigned l_693 = 18446744073709551608UL;
            int *l_704 = (void*)0;
            const int *l_724 = &l_686;
            unsigned **l_756 = &l_348;
            unsigned short l_757 = 0x244AL;
            l_693 |= (*g_497);
            (*l_553) = 0x08D37018L;
            if (l_693)
            {
                unsigned char *l_694 = &g_309;
                int *l_705 = &g_331;
                (*l_352) = l_705;
            }
            else
            {
                unsigned char *l_712 = &g_309;
                const long long l_717 = 0L;
                unsigned long long * const l_718 = &g_354;
                int *l_741 = &l_686;
                for (g_354 = (-27); (g_354 > 47); g_354 = safe_add_func_int64_t_s_s(g_354, 5))
                {
                    unsigned long long l_708 = 0UL;
                    unsigned char *l_714 = &g_116;
                    unsigned char **l_713 = &l_714;
                    long long *l_715 = &l_699;
                    int *l_719 = &l_686;
                    if (((l_708 && g_146) & 65535UL))
                    {
                        g_257 = &g_258;
                        if (l_717)
                            continue;
                    }
                    else
                    {
                        unsigned l_720 = 6UL;
                        int *l_723 = &g_331;
                        l_723 = l_719;
                        g_725 = l_724;
                        g_31 = ((*l_352) = l_704);
                    }
                    if (((void*)0 != l_712))
                    {
                        int **l_726 = &g_497;
                        unsigned short *l_728 = &g_146;
                        unsigned short **l_727 = &l_728;
                        unsigned short *l_729 = (void*)0;
                        unsigned long long ***l_733 = (void*)0;
                        unsigned long long ****l_732 = &l_733;
                        unsigned *l_734 = &g_534;
                        unsigned *l_735 = &g_736;
                        unsigned *l_737 = (void*)0;
                        unsigned *l_738 = &g_739;
                        unsigned l_740 = 18446744073709551615UL;
                        (*l_726) = ((*l_352) = (*l_352));
                        (*l_726) = l_704;
                        if (l_717)
                            continue;
                    }
                    else
                    {
                        (*l_352) = l_741;
                    }
                    if (l_686)
                    {
                        int l_746 = 0x8D5FD070L;
                        unsigned char *l_747 = &l_256;
                        unsigned long long l_749 = 0x08620D3A23C850F3LL;
                        const int **l_750 = &l_724;
                        (*l_553) = (safe_sub_func_int32_t_s_s((1L && (*g_725)), l_748));
                        (*l_719) = l_749;
                        (*l_750) = l_724;
                    }
                    else
                    {
                        int * const l_751 = &g_258;
                        (*l_719) ^= func_44((l_704 = l_704));
                        (*l_553) &= (safe_mul_func_int16_t_s_s(l_699, ((void*)0 == l_756)));
                        (*l_719) |= l_699;
                        (*l_719) |= (0x21L == l_699);
                    }
                    if (l_757)
                        continue;
                }
            }
        }
        g_258 ^= (((**g_281) = (((*l_758) = &l_716) == (void*)0)) && (l_686 ^ g_116));
        l_686 ^= (safe_sub_func_uint16_t_u_u(((*l_765) &= (((g_578 &= (((0x71E4AD6FE03D9AABLL || (g_331 != 0UL)) && ((***l_758) |= (*g_113))) && l_748)) || l_748) == (*g_113))), g_534));
    }
    else
    {
        (*g_497) |= ((void*)0 == &g_350);
    }
    (*l_352) = &l_764;
    return g_146;
}







static int * func_2(int * const p_3, char p_4, const char p_5, int p_6)
{
    const long long l_283 = 0xB48E6F06CA2D36F8LL;
    unsigned *l_287 = &g_102;
    unsigned **l_286 = &l_287;
    unsigned char *l_308 = &g_309;
    int l_310 = (-1L);
    int *l_313 = &l_310;
    short *l_327 = &g_328;
    long long *l_329 = &g_75;
    int *l_330 = &g_331;
    if ((0xB6CD6B3CL ^ l_283))
    {
        unsigned ***l_288 = &l_286;
        unsigned **l_290 = &l_287;
        unsigned ***l_289 = &l_290;
        unsigned short *l_293 = &g_146;
        unsigned char **l_305 = (void*)0;
        const unsigned char l_311 = 0xBEL;
        (*p_3) &= ((safe_mul_func_uint16_t_u_u((((*l_288) = l_286) != ((*l_289) = &l_287)), g_32)) <= (((*l_293) = (1L | (0xE31AL > func_44(&g_84)))) | p_5));
        g_32 &= ((*p_3) = (safe_add_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((*p_3))), g_102)));
    }
    else
    {
        int **l_312 = &g_31;
        unsigned l_314 = 0UL;
        (*l_312) = (void*)0;
        l_313 = &p_6;
        (*g_257) = ((*l_313) = (l_314 ^ (safe_mul_func_uint8_t_u_u((*l_313), (safe_rshift_func_uint16_t_u_u(p_4, 5))))));
    }
    (*l_330) ^= ((safe_lshift_func_uint8_t_u_u((*l_313), 7)) | (safe_add_func_uint64_t_u_u(g_84, (safe_lshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((*l_327) = (-7L)), ((void*)0 == l_329))) >= (func_44(&l_310) != ((*g_257) = (*p_3)))), func_44(&l_310))))));
    p_6 &= (*p_3);
    return &g_84;
}







static int * func_7(unsigned p_8, int * p_9, unsigned char p_10, const long long p_11)
{
    int **l_268 = (void*)0;
    int l_269 = 0xCDC61828L;
    long long l_270 = 0x25A4709E0763305BLL;
    char *l_278 = (void*)0;
    l_269 |= ((*g_257) = ((9L != 3L) | (&p_9 != l_268)));
    if (l_270)
    {
        int *l_271 = &g_84;
        int ***l_272 = &l_268;
        (*l_271) = (*p_9);
        (*l_272) = &p_9;
        (**l_272) = (**l_272);
        (**l_272) = &g_258;
    }
    else
    {
        int **l_273 = (void*)0;
        int **l_274 = &g_31;
        (*l_274) = &g_32;
        (*g_31) ^= (*p_9);
        if ((*p_9))
        {
            g_257 = &g_32;
            (*l_274) = p_9;
        }
        else
        {
            (*p_9) = 0xC7A7D73AL;
        }
        (*l_274) = p_9;
    }
    (*p_9) = (safe_sub_func_uint16_t_u_u(0x5608L, ((2UL && (safe_unary_minus_func_int16_t_s(((l_278 == (void*)0) <= (g_57 ^ ((func_44(p_9) | 1L) != g_75)))))) | 0x0FADFD20L)));
    return &g_258;
}







static int * func_13(unsigned p_14, int * p_15)
{
    short l_259 = 3L;
    int l_260 = 0x7AE399DEL;
    int *l_266 = &g_258;
    (*g_31) &= (*p_15);
    (*p_15) = l_259;
    l_260 &= (*p_15);
    for (l_259 = 0; (l_259 > (-16)); l_259 = safe_sub_func_uint64_t_u_u(l_259, 2))
    {
        int **l_263 = (void*)0;
        int **l_264 = &g_31;
        const int l_265 = 0x558545B0L;
        (*l_264) = (void*)0;
        (*g_257) = (*p_15);
        l_260 &= l_265;
    }
    return l_266;
}







static char func_27(int * p_28, int * p_29, char p_30)
{
    int **l_247 = &g_31;
    int **l_248 = (void*)0;
    int **l_249 = (void*)0;
    int **l_255 = &g_31;
    (*l_255) = func_33(((p_29 = (p_28 = func_37((&g_32 == (void*)0)))) != (void*)0), g_12, p_30);
    return (**l_247);
}







static int * const func_33(unsigned p_34, int p_35, unsigned p_36)
{
    unsigned long long l_253 = 18446744073709551615UL;
    int *l_254 = &g_32;
    for (g_116 = 0; (g_116 == 29); g_116 = safe_add_func_uint16_t_u_u(g_116, 3))
    {
        int *l_252 = &g_84;
        p_35 = ((*l_252) = (3UL | (-3L)));
        if (l_253)
            continue;
    }
    (*l_254) = func_44(l_254);
    return l_254;
}







static int * func_37(const unsigned p_38)
{
    unsigned l_43 = 0x5CA2589DL;
    int *l_46 = (void*)0;
    unsigned char l_134 = 0x96L;
    const unsigned l_193 = 0x75BFFDC4L;
    unsigned *l_226 = &g_102;
    unsigned **l_225 = &l_226;
    int *l_245 = &g_32;
    int l_246 = (-10L);
    if ((safe_mul_func_uint8_t_u_u(((((*g_31) = 0xB236728AL) ^ (safe_mul_func_int16_t_s_s(l_43, 1L))) ^ func_44(l_46)), p_38)))
    {
        int *l_49 = &g_32;
        return l_49;
    }
    else
    {
        unsigned char *l_56 = &g_57;
        unsigned char *l_115 = &g_116;
        int l_117 = 0xEB95E994L;
        unsigned l_183 = 0UL;
        unsigned long long l_210 = 0UL;
        unsigned short *l_221 = (void*)0;
        if ((safe_mul_func_uint8_t_u_u(((*l_115) ^= func_52(g_32, g_32, ((*l_56) = g_12))), (func_44(l_46) | (g_12 != l_117)))))
        {
            unsigned l_156 = 18446744073709551615UL;
            char *l_181 = &g_100;
            char * const *l_180 = &l_181;
            const unsigned char l_205 = 0x32L;
            int *l_208 = &g_84;
            unsigned short *l_220 = &g_146;
            unsigned char **l_228 = &l_56;
            unsigned char **l_229 = &g_113;
            for (g_116 = (-4); (g_116 >= 2); ++g_116)
            {
                unsigned char l_124 = 0xAFL;
                int * const l_144 = &g_32;
                if ((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(p_38, 12)), (18446744073709551615UL & 4L))))
                {
                    if (l_124)
                    {
                        return &g_84;
                    }
                    else
                    {
                        return &g_32;
                    }
                }
                else
                {
                    int *l_125 = &g_84;
                    (*l_125) = p_38;
                }
                for (g_57 = (-25); (g_57 < 15); g_57 = safe_add_func_uint64_t_u_u(g_57, 2))
                {
                    int *l_143 = &g_32;
                    unsigned short *l_145 = &g_146;
                    int *l_169 = &l_117;
                    if (((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(4L, (safe_sub_func_uint16_t_u_u(l_134, (((**g_112) || ((void*)0 == &g_31)) & ((*l_144) = ((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(((*l_145) = (l_143 == l_144)), g_84)) ^ l_117), 10)), 0x4FE417BD45ED7233LL)) != p_38), 1)) == g_32))))))), p_38)) & 0xFAL))
                    {
                        unsigned short **l_149 = &l_145;
                        unsigned short *l_150 = &g_146;
                        l_117 = (((*l_150) = (safe_add_func_int32_t_s_s(((!(((*l_149) = l_145) == &g_146)) || func_44(&g_32)), 0x0211DA04L))) && (safe_div_func_uint16_t_u_u(g_116, ((*l_150) &= p_38))));
                    }
                    else
                    {
                        int **l_153 = &g_31;
                        (*l_153) = l_46;
                        return &g_32;
                    }
                    (*l_169) |= (p_38 == (safe_rshift_func_uint16_t_u_u(((!(l_156 = 0x2DL)) < (safe_rshift_func_uint8_t_u_s((((p_38 < ((*l_143) = (0x5CD9L && (safe_div_func_int64_t_s_s(p_38, ((safe_mod_func_int8_t_s_s(7L, (*g_113))) || 0xABF03985L)))))) >= (((safe_add_func_int8_t_s_s((safe_div_func_int64_t_s_s((((p_38 == 0x7C731693D23E4240LL) >= g_146) > p_38), p_38)), p_38)) > p_38) >= p_38)) > g_102), 5))), 10)));
                }
            }
            if (p_38)
            {
                int *l_192 = (void*)0;
                for (g_75 = 0; (g_75 == (-9)); --g_75)
                {
                    int l_184 = 0x803FA2AEL;
                    if (l_134)
                    {
                        int *l_172 = (void*)0;
                        int *l_173 = &g_32;
                        unsigned *l_182 = &g_102;
                        g_84 = 0x6C8E410DL;
                        (*l_173) &= g_12;
                        l_184 = ((p_38 || (safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s((0x2E1AF327L && (*l_173)), (p_38 <= ((*l_182) = (safe_sub_func_int8_t_s_s((((p_38 | ((void*)0 == l_180)) && ((func_44(l_46) != p_38) | p_38)) | p_38), 0x9FL)))))), g_32))) != l_183);
                    }
                    else
                    {
                        int * const l_185 = &g_32;
                        int **l_186 = &l_46;
                        g_31 = l_185;
                        (*l_185) &= 0x83B512B1L;
                        (*l_186) = &g_84;
                    }
                }
                for (g_84 = 0; (g_84 >= 6); g_84 = safe_add_func_int32_t_s_s(g_84, 3))
                {
                    int **l_189 = &l_46;
                    (*l_189) = &g_84;
                    if (((*l_180) != (*l_180)))
                    {
                        int **l_190 = &g_31;
                        (*l_189) = &g_84;
                        (*l_190) = ((*l_189) = &l_117);
                    }
                    else
                    {
                        unsigned l_191 = 0xE7742FE6L;
                        l_191 |= 0x6C900858L;
                        (*l_189) = l_46;
                        (*l_189) = l_192;
                        if (l_117)
                            continue;
                    }
                    g_32 = l_193;
                }
            }
            else
            {
                long long l_194 = 0x1E374D1AA54D7137LL;
                int l_202 = 0x944318FBL;
                unsigned *l_212 = &l_183;
                unsigned **l_211 = &l_212;
                char l_224 = 0xF4L;
                unsigned ***l_227 = &l_211;
                int *l_230 = (void*)0;
                if (l_194)
                {
                    const unsigned long long l_197 = 0UL;
                    int **l_209 = &l_46;
                    for (g_116 = 0; (g_116 < 38); ++g_116)
                    {
                        unsigned l_206 = 0x0BAFAB71L;
                        int *l_207 = &g_32;
                        (*l_207) ^= (g_102 < l_206);
                        if (p_38)
                            break;
                        if (l_205)
                            continue;
                    }
                    (*l_209) = l_208;
                }
                else
                {
                    char l_214 = 9L;
                    if (l_210)
                    {
                        unsigned ***l_213 = &l_211;
                        (*l_213) = l_211;
                    }
                    else
                    {
                        l_214 = g_100;
                    }
                    for (l_210 = (-3); (l_210 < 28); l_210 = safe_add_func_uint32_t_u_u(l_210, 7))
                    {
                        unsigned l_217 = 0x63165C84L;
                        if (l_210)
                            break;
                        if (l_217)
                            break;
                        (*l_208) |= (0x56BBA839L < ((safe_lshift_func_int8_t_s_s(func_44(l_46), 0)) || p_38));
                    }
                    (*l_208) &= (l_220 != l_221);
                    if ((safe_unary_minus_func_uint64_t_u(p_38)))
                    {
                        int *l_223 = &l_202;
                        l_223 = (void*)0;
                    }
                    else
                    {
                        g_84 = l_224;
                    }
                }
                l_202 = ((*l_208) = ((&l_212 == ((*l_227) = l_225)) ^ ((l_228 = &g_113) != l_229)));
                l_117 &= (g_57 ^ (!p_38));
            }
            (*l_208) |= (safe_add_func_int8_t_s_s(g_98, (safe_unary_minus_func_int16_t_s(p_38))));
            (*l_208) |= (safe_mod_func_int64_t_s_s(p_38, g_32));
        }
        else
        {
            int *l_236 = &g_32;
            (*l_236) = 0x9B80324DL;
            for (g_146 = 17; (g_146 < 35); ++g_146)
            {
                char l_243 = 0xA0L;
                int **l_244 = &l_46;
                for (g_100 = 0; (g_100 <= (-17)); g_100--)
                {
                    for (g_98 = 0; (g_98 < (-21)); --g_98)
                    {
                        (*l_236) ^= 0x9C52FCFAL;
                        (*l_236) ^= (1UL || ((*g_113) = p_38));
                    }
                    l_117 = (((*g_113) = ((*l_115) &= l_243)) >= ((void*)0 != &l_236));
                }
                (*l_244) = &l_117;
                if ((**l_244))
                    break;
                (*l_236) = ((*l_46) = func_44((*l_244)));
            }
        }
    }
    l_246 ^= ((*l_245) ^= 0xE5C4715AL);
    return &g_32;
}







static short func_44(int * p_45)
{
    int *l_48 = (void*)0;
    int **l_47 = &l_48;
    (*l_47) = (void*)0;
    return g_12;
}







static unsigned char func_52(char p_53, const unsigned p_54, unsigned char p_55)
{
    int *l_63 = &g_32;
    long long *l_73 = (void*)0;
    long long *l_74 = &g_75;
    unsigned l_78 = 0xD6736FA7L;
    unsigned char **l_114 = &g_113;
    l_114 = func_58((*g_31), l_63, (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(0x87B7L)), p_53)), (safe_lshift_func_int16_t_s_s(((*l_63) != ((*l_74) = ((&g_31 == (void*)0) >= 0x4DAD24015E1B460DLL))), 10)))), (safe_rshift_func_int16_t_s_s(((p_53 || l_78) || g_12), 9)));
    return (*l_63);
}







static unsigned char ** func_58(int p_59, int * p_60, unsigned short p_61, int p_62)
{
    int **l_79 = (void*)0;
    int **l_80 = (void*)0;
    int **l_81 = &g_31;
    int *l_82 = (void*)0;
    int *l_83 = &g_84;
    unsigned char *l_92 = &g_57;
    unsigned char **l_91 = &l_92;
    unsigned char *l_93 = (void*)0;
    unsigned char **l_94 = &l_93;
    unsigned char *l_96 = &g_57;
    unsigned char **l_95 = &l_96;
    char *l_97 = &g_98;
    char *l_99 = &g_100;
    long long *l_101 = &g_75;
    char **l_103 = &l_97;
    (*l_81) = (p_60 = &g_32);
    (*l_83) |= (*p_60);
    g_102 &= ((*l_83) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(func_44(&g_32), 4)), ((**l_81) = ((65532UL && ((((*l_99) |= ((*l_97) = (safe_rshift_func_uint8_t_u_u(g_75, ((((*l_91) = &g_57) != ((*l_95) = ((*l_94) = l_93))) < (g_84 | g_57)))))) >= (l_101 != &g_12)) | 4294967286UL)) >= g_32)))));
    if ((((*l_103) = l_99) != (void*)0))
    {
        unsigned l_104 = 0xADC49480L;
        (**l_81) = (3L < l_104);
        (*l_83) |= ((-1L) >= (safe_add_func_int32_t_s_s((-1L), (l_104 | (safe_div_func_uint8_t_u_u(g_57, (((*g_31) < g_12) || g_75)))))));
        (*p_60) = ((&g_31 != &p_60) & (0xCD49L != func_44(&p_59)));
        g_31 = &p_59;
    }
    else
    {
        int l_109 = (-1L);
        (*l_83) ^= ((**l_81) = (func_44(&g_32) & (l_109 >= p_61)));
        for (g_32 = 0; (g_32 < 12); g_32 = safe_add_func_uint64_t_u_u(g_32, 8))
        {
            return g_112;
        }
    }
    return &g_113;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
