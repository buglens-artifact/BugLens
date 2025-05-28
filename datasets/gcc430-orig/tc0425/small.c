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



static int g_3 = 0x720E83C7L;
static int *g_2 = &g_3;
static int *g_17 = &g_3;
static int g_75 = 0x916A8E8CL;
static char g_76 = 1L;
static int *g_77 = (void*)0;
static int g_100 = 0xDEC96EA3L;
static int **g_311 = &g_17;
static int ***g_310 = &g_311;
static unsigned g_351 = 18446744073709551607UL;
static int g_389 = 9L;
static int ** const *g_435 = &g_311;
static short g_566 = (-9L);



static unsigned func_1(void);
static int func_6(short p_7, short p_8, unsigned p_9, int ** p_10, int p_11);
static unsigned short func_12(unsigned char p_13, short p_14, unsigned p_15, int * const p_16);
static unsigned func_18(int p_19, int * p_20, unsigned short p_21, unsigned char p_22);
static int func_23(int ** p_24, int * p_25, unsigned p_26);
static int ** func_27(unsigned p_28, const unsigned short p_29, int * p_30, int * p_31, unsigned short p_32);
static char func_36(unsigned short p_37, unsigned p_38, int * const p_39, const char p_40, int p_41);
static int * func_42(unsigned short p_43);
static int func_51(unsigned p_52);
static short func_53(unsigned char p_54, unsigned char p_55, unsigned p_56);
static unsigned func_1(void)
{
    int **l_4 = &g_2;
    unsigned short l_5 = 65531UL;
    unsigned l_33 = 18446744073709551608UL;
    int **l_564 = &g_2;
    (*l_4) = g_2;
    g_566 |= ((l_5 | ((**l_4) <= g_3)) > func_6(((func_12((**l_4), ((*l_4) == g_17), func_18(func_23(func_27((**l_4), (**l_4), &g_3, &g_3, l_33), (*l_4), (**l_4)), (*l_4), g_3, (**l_4)), (*l_4)) >= 0xF9D0L) | (**l_4)), g_3, (**l_4), l_564, (**l_564)));
    (***g_435) = (**l_4);
    (*g_311) = (**g_310);
    return g_389;
}







static int func_6(short p_7, short p_8, unsigned p_9, int ** p_10, int p_11)
{
    int l_565 = 0x0E6885D0L;
    (**g_310) = (**g_310);
    return l_565;
}







static unsigned short func_12(unsigned char p_13, short p_14, unsigned p_15, int * const p_16)
{
    int ** const *l_461 = &g_311;
    int l_462 = (-4L);
    unsigned l_517 = 18446744073709551613UL;
    int l_557 = 0x9B21AE57L;
    l_462 |= func_51((l_461 == &g_311));
    for (p_13 = 0; (p_13 >= 19); p_13 = safe_add_func_int32_t_s_s(p_13, 2))
    {
        unsigned l_476 = 0xD66CE1ADL;
        int l_497 = 5L;
        int **l_502 = &g_17;
        int l_558 = 0x049E239CL;
        int *l_563 = &g_100;
        if (((0x26L != (0x370E800AL == ((safe_add_func_uint8_t_u_u((***l_461), ((((&g_311 == &g_311) != ((*l_461) != (void*)0)) == (safe_unary_minus_func_uint8_t_u(0xA9L))) < (safe_sub_func_int16_t_s_s(g_389, (***l_461)))))) <= 8UL))) | g_389))
        {
            unsigned l_474 = 0x1073F229L;
            int **l_475 = &g_77;
            char l_477 = 1L;
            char l_518 = (-10L);
            int ***l_553 = &l_502;
            int l_562 = 1L;
            for (p_15 = (-4); (p_15 < 12); p_15 = safe_add_func_uint32_t_u_u(p_15, 5))
            {
                return l_474;
            }
            (*l_475) = p_16;
            if ((func_36(p_13, (func_36((((***l_461) >= 0xF66EL) != (***l_461)), p_15, (*g_311), ((!func_18(l_476, (**l_461), p_14, (***l_461))) != (*g_17)), (***g_435)) > l_476), p_16, g_3, (*g_17)) >= 4294967295UL))
            {
                unsigned short l_491 = 65530UL;
                int l_542 = 0x08D6991EL;
                const unsigned char l_554 = 255UL;
                if (l_477)
                {
                    int *l_490 = &g_3;
                    if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(252UL, ((safe_add_func_int16_t_s_s((((+((g_75 <= ((((((safe_lshift_func_int8_t_s_u(func_18(p_13, l_490, l_476, p_15), g_76)) < p_13) ^ l_491) != (***l_461)) > 4L) >= (-8L))) | g_76)) || g_389) & p_13), g_75)) != 5L))), (-1L))), 0)), 0xCDL)))
                    {
                        unsigned char l_494 = 0x5DL;
                        int l_495 = 0L;
                        int *l_496 = &l_462;
                        l_495 ^= ((((safe_sub_func_int32_t_s_s(((void*)0 != &g_311), (l_494 != (~0x59D4L)))) > ((*l_490) == (65535UL || 0x0C20L))) < (g_3 & (**g_311))) != (*p_16));
                        g_75 = (***g_310);
                        (*l_496) ^= l_495;
                    }
                    else
                    {
                        unsigned short l_503 = 0x2331L;
                        l_497 |= l_476;
                        l_497 |= (safe_sub_func_int16_t_s_s(p_13, func_51(g_100)));
                        l_503 |= (func_51(((g_76 == 0xB1676A14L) | (safe_add_func_int16_t_s_s((((+((func_18(g_75, &l_497, (*l_490), p_15) < l_491) < (((void*)0 == l_502) && 8UL))) | p_14) & (*l_490)), 0xCA3FL)))) <= p_14);
                    }
                }
                else
                {
                    g_100 = ((safe_lshift_func_uint8_t_u_s(0x18L, 3)) <= p_13);
                }
                for (g_389 = (-29); (g_389 <= 24); ++g_389)
                {
                    unsigned l_512 = 2UL;
                    int *l_519 = (void*)0;
                    int *l_520 = &l_462;
                    unsigned char l_541 = 0UL;
                    l_512 ^= (safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((*g_17), (p_16 != (**g_435)))), 10));
                    (*l_520) = (func_18(p_14, (*l_502), (0x68L || g_100), (safe_rshift_func_int16_t_s_u(p_13, (((safe_sub_func_int8_t_s_s(((~((void*)0 != (*l_502))) && func_18((l_517 != (l_518 > 0x00E4L)), (**l_461), p_15, p_14)), p_15)) && (***g_435)) && g_351)))) || p_15);
                    if ((g_3 == (7UL != (**l_502))))
                    {
                        int **l_521 = &l_520;
                        int l_540 = 0xC0C6047CL;
                        (*l_475) = func_42(g_3);
                        (*l_521) = p_16;
                        g_75 = (((**g_311) < (p_15 <= (*g_17))) <= ((l_519 == (*g_311)) != 0x839DDAA0L));
                        l_542 = ((safe_rshift_func_uint8_t_u_s(((***g_310) & ((safe_mod_func_uint32_t_u_u(((!(safe_add_func_uint8_t_u_u(g_75, 0xF4L))) == (safe_mod_func_int8_t_s_s((0x2FE6L != (safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((((safe_add_func_int16_t_s_s(func_18((**l_475), (**g_435), func_53((0xD1L > 1UL), (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(p_13, g_75)), (***g_310))), p_13), l_540), g_351)) < 0L) < 1L), 0x5471L)) ^ g_3), g_75))), 255UL))), l_541)) > (**l_502))), 3)) || 0x06L);
                    }
                    else
                    {
                        (*l_520) = (((safe_sub_func_uint32_t_u_u(g_76, (safe_mod_func_int8_t_s_s((p_14 == (safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(func_18((**l_502), (*g_311), g_76, p_15), (((l_553 != (void*)0) && 1UL) <= 0x4A5DL))), 0xA2L)), (*l_520)))), 9UL)))) & p_15) < (***l_461));
                        (**g_310) = func_42(g_75);
                        if (l_554)
                            continue;
                        if (l_491)
                            break;
                    }
                }
                l_557 &= (+((safe_rshift_func_int8_t_s_u(0xF2L, 5)) | 1L));
            }
            else
            {
                unsigned l_561 = 4294967288UL;
                l_558 = func_51(p_15);
                l_561 = (0x5BA3D9CAL == func_51(func_51(((g_351 & g_389) < ((safe_add_func_uint8_t_u_u(0x8FL, g_3)) && (**l_502))))));
            }
            if (l_562)
                continue;
        }
        else
        {
            if ((***l_461))
                break;
        }
        (*l_563) = func_23((*g_310), (**l_461), p_14);
    }
    (**l_461) = (**l_461);
    return p_14;
}







static unsigned func_18(int p_19, int * p_20, unsigned short p_21, unsigned char p_22)
{
    int **l_460 = &g_77;
    (*l_460) = (void*)0;
    return g_351;
}







static int func_23(int ** p_24, int * p_25, unsigned p_26)
{
    unsigned short l_421 = 0x9E8FL;
    int *l_422 = &g_389;
    g_77 = func_42(g_76);
    (*l_422) = (safe_add_func_uint8_t_u_u(l_421, ((void*)0 == (*g_310))));
    if ((**p_24))
    {
        char l_423 = 1L;
        return l_423;
    }
    else
    {
        int l_436 = 1L;
        int l_453 = 0x97BC2EB3L;
        unsigned short l_459 = 0x4876L;
        for (g_351 = 0; (g_351 > 24); g_351 = safe_add_func_int8_t_s_s(g_351, 2))
        {
            char l_426 = 0x51L;
            int l_456 = (-1L);
            if (l_426)
            {
                int *l_437 = &g_389;
                int **l_452 = &g_77;
                if ((safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(g_76, g_76)), 9)) >= func_53((((safe_add_func_int32_t_s_s((g_435 == &g_311), p_26)) == g_76) > (g_76 <= l_436)), g_100, (*l_422))) && 1L) <= 3UL), (*p_25))))
                {
                    return g_3;
                }
                else
                {
                    int *l_440 = &g_389;
                    l_437 = func_42(g_3);
                    if ((func_53((((func_36(g_389, g_389, (*p_24), (0xB440L == (safe_rshift_func_uint16_t_u_s((l_440 == l_437), (*l_440)))), (*g_17)) == 0x1E1A3221L) || p_26) ^ p_26), (*l_440), g_3) != g_351))
                    {
                        unsigned l_441 = 7UL;
                        (*l_422) = (*l_440);
                        (*l_422) = l_441;
                    }
                    else
                    {
                        unsigned short l_444 = 0xABE8L;
                        (*l_422) |= (safe_mod_func_uint8_t_u_u((((-7L) & g_75) < l_444), (safe_rshift_func_uint8_t_u_s(g_100, func_53((safe_unary_minus_func_uint32_t_u(((void*)0 != (*g_435)))), (*l_437), g_351)))));
                        return g_3;
                    }
                    for (g_100 = 0; (g_100 >= 3); g_100++)
                    {
                        (*l_422) = l_436;
                        g_77 = (**g_435);
                    }
                    for (g_76 = (-10); (g_76 >= 29); g_76 = safe_add_func_int16_t_s_s(g_76, 1))
                    {
                        (*l_440) = (*l_422);
                        (*l_440) |= (**p_24);
                    }
                }
                (*l_452) = (**g_435);
                if (l_426)
                    continue;
                if ((*g_17))
                    break;
            }
            else
            {
                l_453 = func_51(g_76);
            }
            for (g_100 = 15; (g_100 < (-17)); g_100--)
            {
                l_456 &= (*g_17);
                if ((***g_310))
                    continue;
            }
            (*l_422) = (-1L);
        }
        for (p_26 = 0; (p_26 > 40); p_26 = safe_add_func_uint32_t_u_u(p_26, 4))
        {
            (*l_422) &= (func_51(p_26) > g_3);
            l_459 &= 0xFAD94F52L;
        }
    }
    return g_389;
}







static int ** func_27(unsigned p_28, const unsigned short p_29, int * p_30, int * p_31, unsigned short p_32)
{
    const unsigned char l_44 = 0x61L;
    int *l_388 = &g_389;
    unsigned l_417 = 0UL;
    int l_418 = 0xBFA53FC1L;
    (*l_388) &= ((safe_add_func_int8_t_s_s(func_36(g_3, g_3, func_42(p_32), l_44, l_44), g_351)) == 0x13L);
    for (g_100 = 0; (g_100 < 6); ++g_100)
    {
        int **l_392 = &l_388;
        (*l_392) = p_30;
        if ((((safe_add_func_uint16_t_u_u(p_28, ((((p_29 | g_100) > (((safe_sub_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(func_53((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_392 == (*g_310)), 2)), (*l_388))), p_29, (**l_392)), 0x6CL)) | 7L) <= 0xCBL), 0L)) < 1L) || 6UL)) <= g_76) | (**l_392)))) >= g_351) > g_351))
        {
            if ((*p_31))
                break;
        }
        else
        {
            unsigned short l_403 = 0xC8A7L;
            int *l_404 = (void*)0;
            int *l_405 = &g_75;
            (*l_392) = (**g_310);
            (*l_392) = p_31;
            if ((*l_388))
                continue;
            (*l_405) |= l_403;
        }
    }
    for (g_389 = 6; (g_389 < 14); g_389++)
    {
        int *l_408 = &g_100;
        int **l_409 = (void*)0;
        int **l_410 = &l_408;
        (*l_408) = func_51(g_100);
        (*l_410) = func_42((*l_388));
        l_418 = ((safe_mod_func_int32_t_s_s((((*l_388) >= (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((!g_100), l_417)), 1))) < g_351), (*l_408))) == 0x9FL);
    }
    return (*g_310);
}







static char func_36(unsigned short p_37, unsigned p_38, int * const p_39, const char p_40, int p_41)
{
    int *l_46 = &g_3;
    int **l_45 = &l_46;
    unsigned l_376 = 0x4E24A5D5L;
    short l_385 = 0x1FFFL;
    unsigned short l_386 = 65535UL;
    int *l_387 = &g_100;
    (*l_45) = func_42(g_3);
    for (p_38 = 0; (p_38 == 28); p_38++)
    {
        int **l_61 = (void*)0;
        short l_68 = 0x33E1L;
        if (((((safe_sub_func_uint8_t_u_u(((func_51(((!((func_53(g_3, (g_3 < (((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((~g_3), 10)), g_3)) != (l_61 == l_61)) | 0x8E20L)), g_3) ^ g_3) == (**l_45))) < l_68)) >= g_3) || (**l_45)), l_376)) || (***g_310)) | p_38) ^ p_38))
        {
            (*l_45) = func_42((*l_46));
        }
        else
        {
            if ((*p_39))
                break;
            (*g_310) = (*g_310);
            (*l_45) = (*g_311);
            if ((*p_39))
                continue;
        }
        for (g_75 = 0; (g_75 >= (-10)); g_75 = safe_sub_func_uint32_t_u_u(g_75, 3))
        {
            return p_41;
        }
    }
    (*l_387) = (safe_rshift_func_int8_t_s_u(((252UL || g_76) > (g_3 > (*l_46))), ((safe_rshift_func_uint16_t_u_s((((!g_76) > (safe_sub_func_int32_t_s_s(l_385, l_386))) >= (g_75 && 0x90L)), 2)) < (**l_45))));
    return p_41;
}







static int * func_42(unsigned short p_43)
{
    return &g_3;
}







static int func_51(unsigned p_52)
{
    const unsigned char l_71 = 1UL;
    int *l_98 = &g_3;
    short l_105 = 0xBA9FL;
    int l_108 = 0x25B1A94CL;
    unsigned l_139 = 0x0013D6AAL;
    unsigned short l_158 = 0xAD51L;
    int l_208 = 0x51B9DDB0L;
    int l_313 = 0L;
    int l_341 = (-8L);
    int l_367 = 1L;
    int ***l_372 = (void*)0;
    int *l_373 = (void*)0;
    int *l_374 = (void*)0;
    int **l_375 = &l_374;
    if (((p_52 != (safe_sub_func_int16_t_s_s(p_52, (l_71 | 0x977BL)))) | l_71))
    {
        int *l_74 = &g_75;
        (*l_74) = (safe_lshift_func_uint16_t_u_s(l_71, l_71));
        g_76 = (g_75 & g_3);
        if (p_52)
        {
            int ** const l_80 = &l_74;
            g_77 = &g_3;
            (*l_74) ^= ((safe_sub_func_uint32_t_u_u(l_71, (~(g_76 & (l_80 != (void*)0))))) > p_52);
        }
        else
        {
            char l_83 = (-10L);
            l_83 ^= (safe_sub_func_uint16_t_u_u(g_75, g_76));
        }
    }
    else
    {
        int *l_88 = &g_3;
        int l_116 = 0x0BF87F31L;
        int l_225 = 0x5F5214CDL;
        unsigned l_300 = 1UL;
        unsigned char l_307 = 0UL;
        char l_350 = 1L;
        int *l_364 = &g_75;
        if ((safe_lshift_func_uint8_t_u_s(func_53(l_71, p_52, ((safe_sub_func_int32_t_s_s(((l_88 != l_88) != func_53(l_71, (*l_88), (*l_88))), (+g_76))) & p_52)), 2)))
        {
            int **l_101 = &g_77;
            for (g_75 = (-2); (g_75 <= (-24)); --g_75)
            {
                int **l_91 = &g_77;
                int *l_99 = &g_100;
                (*l_91) = &g_3;
                (*l_99) ^= ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_3 < ((*l_88) < (**l_91))), ((((*l_88) & (safe_sub_func_uint32_t_u_u(l_71, (*l_88)))) != ((l_98 == l_98) != (((func_53(p_52, p_52, g_75) >= (*l_88)) && p_52) | 0xFDL))) < (*l_88)))), 0x6491L)) != 0xEF5A7FAFL);
                (*l_91) = func_42(g_75);
            }
            (*l_101) = func_42(g_75);
        }
        else
        {
            unsigned l_115 = 18446744073709551610UL;
            int *l_117 = &g_100;
            l_116 = (((safe_unary_minus_func_int16_t_s((2UL || (safe_lshift_func_int8_t_s_u(p_52, 0))))) == (l_105 == ((safe_lshift_func_int16_t_s_u(((l_108 && 0x35L) && ((!((&l_108 == (void*)0) >= ((safe_sub_func_int16_t_s_s(((((func_53(p_52, (safe_sub_func_int16_t_s_s((*l_98), g_76)), l_115) || p_52) == g_76) | g_76) ^ 0x6615L), 65535UL)) <= l_115))) && 7UL)), g_75)) > p_52))) >= g_3);
            (*l_117) |= (*l_88);
            for (l_116 = 0; (l_116 <= 28); l_116 = safe_add_func_uint8_t_u_u(l_116, 5))
            {
                int *l_128 = &g_3;
                int **l_129 = (void*)0;
                int **l_130 = &l_117;
            }
            l_116 ^= (safe_add_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u(((p_52 > func_53((safe_rshift_func_uint16_t_u_s(p_52, (&l_98 == (void*)0))), g_76, g_100)) ^ (safe_mod_func_int8_t_s_s((((&l_88 == &l_117) | p_52) == g_3), g_75))), l_139)) == (*l_98)) < (*l_117)) || g_100), 0L));
        }
        for (l_105 = 0; (l_105 <= (-12)); l_105 = safe_sub_func_int32_t_s_s(l_105, 4))
        {
            short l_174 = 0x1407L;
            int l_242 = 0L;
            int l_246 = 0x910730F0L;
            g_75 = (&l_108 != &g_75);
            for (g_76 = 0; (g_76 != (-1)); g_76--)
            {
                unsigned l_154 = 4294967291UL;
                int *l_155 = &l_116;
                (*l_155) &= (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(0xC42475AAL, p_52)), (safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((*g_17) != l_154), 2)), p_52)) > l_154), g_100))));
            }
            if ((((safe_lshift_func_int16_t_s_u(func_53(p_52, p_52, (*l_98)), (&g_3 == &g_75))) && p_52) >= ((0xA244EFACL || (*l_98)) != l_158)))
            {
                unsigned l_181 = 1UL;
                int l_182 = 1L;
                int **l_210 = &g_77;
                for (g_100 = 14; (g_100 != (-11)); g_100--)
                {
                    unsigned char l_161 = 1UL;
                    int **l_166 = &g_77;
                    (*l_166) = func_42((((l_161 || func_53(p_52, p_52, ((*l_98) < (safe_rshift_func_int16_t_s_u((p_52 && ((safe_rshift_func_int16_t_s_s((0x36D6L & (g_100 || func_53(g_75, (0L < g_75), p_52))), g_100)) > g_3)), g_3))))) | 0x08F1FC70L) >= (*l_88)));
                    for (l_108 = 0; (l_108 < 19); ++l_108)
                    {
                        unsigned l_171 = 1UL;
                        (*l_166) = &l_108;
                        l_171 = (safe_add_func_int16_t_s_s(p_52, 1L));
                        l_174 ^= ((~(func_53(g_100, (safe_lshift_func_int16_t_s_u(l_171, 11)), p_52) && p_52)) & p_52);
                    }
                }
                if ((safe_rshift_func_uint8_t_u_u(p_52, 5)))
                {
                    int *l_183 = &g_75;
                    int l_191 = (-1L);
                    l_182 = (!func_53((*l_98), (func_53(l_174, l_174, (p_52 != ((safe_rshift_func_int16_t_s_u(func_53(g_100, (safe_lshift_func_int16_t_s_u(p_52, (p_52 != (g_76 != 7UL)))), l_181), 8)) & p_52))) && (*l_98)), l_181));
                    (*l_183) = p_52;
                    for (l_181 = (-16); (l_181 < 55); l_181++)
                    {
                        int **l_186 = &l_98;
                        (*l_186) = &g_75;
                        l_191 ^= ((0x20F3L > (*l_183)) <= ((!(safe_sub_func_int32_t_s_s(func_53(g_100, ((func_53(p_52, (65530UL && ((&l_183 != (void*)0) && (safe_lshift_func_uint16_t_u_s(func_53(g_100, l_182, g_3), (*l_98))))), (*l_88)) | p_52) & l_174), g_76), p_52))) <= p_52));
                        if ((*g_17))
                            continue;
                    }
                    if (p_52)
                        continue;
                }
                else
                {
                    int **l_192 = (void*)0;
                    int **l_193 = (void*)0;
                    int **l_194 = &g_77;
                    (*l_194) = &l_116;
                    (*l_194) = &l_108;
                    (*g_77) = p_52;
                    if ((*g_2))
                        break;
                }
                for (g_100 = 0; (g_100 >= 22); g_100++)
                {
                    char l_207 = 0xE7L;
                    int *l_209 = &g_75;
                    (*l_209) = (safe_sub_func_int8_t_s_s(((l_182 | (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((func_53((safe_rshift_func_uint8_t_u_s(g_75, ((0x52FCL || (func_53((&l_88 == (void*)0), (&l_108 != (void*)0), func_53(((0xC7F8F153L < ((&g_3 != (void*)0) != 0UL)) >= l_207), l_181, g_3)) < (*l_88))) <= p_52))), l_208, l_174) >= l_207), 4)) | 0x82B3L), l_181)), (*l_98)))) & 0x37L), g_3));
                }
                (*l_210) = &g_75;
            }
            else
            {
                int l_224 = 1L;
                unsigned l_253 = 0x89657646L;
                int *l_259 = &l_116;
                int **l_260 = &l_98;
                if ((((void*)0 != &g_3) && func_53((*l_98), func_53(g_75, (((p_52 ^ func_53(p_52, p_52, g_3)) > 0UL) & g_76), p_52), g_76)))
                {
                    const unsigned char l_215 = 0x56L;
                    int l_254 = (-1L);
                    if (((p_52 || (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_215 != ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_76, 0)), ((*l_88) & (g_75 | (((((func_53(((g_75 | (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_174, l_224)), l_224))) & (-8L)), l_225, p_52) < p_52) < g_76) < 0x3305L) | 0xA0L) > g_3))))) >= g_3)), p_52)), g_3))) ^ 0x2FL))
                    {
                        int **l_226 = &l_98;
                        (*l_226) = &g_3;
                        l_225 = (safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(func_53((safe_mod_func_uint16_t_u_u(func_53(l_215, g_76, p_52), 0x03A4L)), (safe_rshift_func_int16_t_s_u(g_100, 9)), p_52), 0x99DAL)), 0x58E34EDFL));
                        if ((*g_2))
                            continue;
                    }
                    else
                    {
                        unsigned char l_237 = 0xEEL;
                        const int *l_241 = &l_225;
                        const int **l_240 = &l_241;
                        int *l_243 = &l_225;
                        l_225 &= (*g_17);
                        l_242 = ((((safe_sub_func_uint8_t_u_u((((func_53(l_224, ((!l_237) & ((*l_88) != (safe_rshift_func_uint8_t_u_u(255UL, ((l_224 || l_174) >= (&g_77 != l_240)))))), (*l_241)) == 0x4316L) ^ 0UL) < g_76), (*l_88))) & 0xB6L) > p_52) > g_100);
                        (*l_243) = (*l_241);
                        if (p_52)
                            continue;
                    }
                    for (l_116 = 0; (l_116 < 14); ++l_116)
                    {
                        l_246 &= func_53(l_242, p_52, g_100);
                    }
                    l_254 &= (~func_53((*l_98), (1L > (safe_rshift_func_int8_t_s_u(g_3, ((safe_mod_func_int32_t_s_s((g_3 > (7UL != (l_224 >= (safe_rshift_func_int16_t_s_u((p_52 | l_215), func_53(((func_53(p_52, p_52, p_52) ^ l_224) | (*l_98)), l_253, g_3)))))), 0xF444C74AL)) >= g_100)))), (*l_98)));
                }
                else
                {
                    l_246 &= (safe_rshift_func_int8_t_s_s(g_100, 6));
                    for (l_158 = 0; (l_158 <= 8); l_158 = safe_add_func_int8_t_s_s(l_158, 6))
                    {
                        return l_253;
                    }
                }
                if ((*g_2))
                    break;
                (*l_259) = (*l_98);
                (*l_260) = func_42(l_246);
            }
        }
        for (l_108 = 12; (l_108 == (-2)); l_108 = safe_sub_func_int8_t_s_s(l_108, 1))
        {
            unsigned l_263 = 4294967295UL;
            int **l_279 = &g_2;
            unsigned char l_318 = 0xE3L;
            l_263 = (g_100 <= (*l_88));
            if ((safe_lshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((p_52 < 0x20L), (((safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(0xA7L, ((*l_98) == p_52))) && (safe_rshift_func_uint16_t_u_s((!((safe_add_func_int32_t_s_s((g_75 | (*l_98)), (-10L))) != p_52)), 10))), 0x7DL)) <= (*l_98)) < g_75))) | 1UL), 6)))
            {
                return (*g_2);
            }
            else
            {
                unsigned char l_286 = 0xCBL;
                int l_289 = 0x6EF0C4D1L;
                if (l_263)
                {
                    short l_276 = (-10L);
                    int *l_283 = &l_116;
                    (*l_283) &= (l_276 == (0xA5E1L < (func_53(p_52, (*l_88), (safe_mod_func_uint16_t_u_u(((void*)0 == l_279), p_52))) & ((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int8_t_s_u((0L < p_52), p_52)) == g_3))) || p_52))));
                    if ((*l_283))
                        continue;
                    (*l_283) = (*g_17);
                }
                else
                {
                    int ***l_290 = &l_279;
                    l_289 |= (safe_add_func_int32_t_s_s(((0x9CL <= p_52) <= func_53(func_53(l_286, l_286, (safe_mod_func_uint32_t_u_u(g_75, p_52))), g_76, (0x30D5L & (**l_279)))), (*l_88)));
                    (*l_290) = (void*)0;
                }
                if ((*g_2))
                {
                    return (*g_17);
                }
                else
                {
                    int **l_291 = &g_17;
                    int l_299 = 7L;
                    l_289 = ((void*)0 != l_291);
                    for (g_100 = (-13); (g_100 > 3); ++g_100)
                    {
                        short l_296 = 0xEB17L;
                        g_75 = (safe_sub_func_int16_t_s_s(g_100, func_53((l_286 == ((!(func_53(l_296, (func_53(((void*)0 != (*l_291)), (*l_98), (*l_98)) > (safe_rshift_func_int16_t_s_u((*l_98), 11))), l_299) <= p_52)) == p_52)), g_75, g_100)));
                    }
                }
            }
            if (l_300)
            {
                unsigned short l_308 = 0xE767L;
                int *l_330 = &g_3;
                int *l_337 = &l_116;
                int * const *l_343 = &l_330;
                int * const **l_342 = &l_343;
                if (((func_53(((void*)0 != &l_98), p_52, (*l_98)) >= g_76) == (((((g_100 || (((safe_lshift_func_uint16_t_u_u(p_52, (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_307, 0UL)), g_76)))) != 1L) | p_52)) != g_100) | l_308) < 0xBAB0A817L) >= g_3)))
                {
                    int l_312 = 0x735E5396L;
                    int *l_331 = (void*)0;
                    if (p_52)
                    {
                        unsigned l_309 = 0x80BD92C1L;
                        int *l_314 = &l_116;
                        l_312 |= (l_309 & (g_310 != (void*)0));
                        l_313 &= p_52;
                        (*l_314) = 5L;
                    }
                    else
                    {
                        int **l_315 = &l_88;
                        int *l_329 = &l_116;
                        (*l_315) = &l_225;
                        (*l_315) = func_42(l_312);
                        (*l_329) |= (safe_rshift_func_int16_t_s_u(l_312, (l_318 || func_53(g_100, func_53(p_52, func_53(g_3, (safe_mod_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(((*l_88) > (safe_sub_func_int32_t_s_s((*g_17), ((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((&g_311 != (void*)0) == (-2L)), p_52)), 0x50E5L)) >= 1UL)))), l_312)) ^ p_52) < p_52), l_312)), p_52), g_76), g_75))));
                        l_331 = l_330;
                    }
                }
                else
                {
                    unsigned l_336 = 18446744073709551615UL;
                    int *l_345 = (void*)0;
                    if ((+(safe_rshift_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u(p_52, l_336)) && p_52) ^ (p_52 | ((0x45L <= (((void*)0 == l_337) & (safe_mod_func_uint32_t_u_u((&l_225 == (**g_310)), (-8L))))) == (-3L)))) == p_52), 0))))
                    {
                        int l_340 = 0x98136986L;
                        unsigned l_344 = 0xEFC62F17L;
                        l_340 &= 0xFC7B0A1CL;
                        l_344 &= (((*g_310) != (*g_310)) >= func_53(p_52, p_52, ((p_52 == l_341) ^ (g_75 <= ((void*)0 != l_342)))));
                        l_345 = (**g_310);
                        if ((*l_345))
                            break;
                    }
                    else
                    {
                        int l_347 = 9L;
                        int *l_354 = &l_313;
                        l_116 = (0xCBL && func_53((((p_52 ^ g_76) <= ((safe_unary_minus_func_uint8_t_u(0xBBL)) || func_53(p_52, (p_52 || (~l_347)), (+((((safe_mod_func_uint8_t_u_u((func_53(p_52, l_350, g_76) != 0UL), l_347)) ^ 249UL) ^ g_100) <= g_351))))) <= g_351), g_351, g_3));
                        l_313 |= func_53(p_52, func_53((safe_sub_func_int32_t_s_s(((void*)0 != (*g_310)), ((&l_225 == (void*)0) && g_76))), func_53(((g_100 ^ p_52) > g_100), p_52, g_351), p_52), g_75);
                        l_354 = &l_116;
                    }
                    l_345 = func_42(g_76);
                }
            }
            else
            {
                int *l_363 = &g_75;
                for (l_307 = (-3); (l_307 < 15); l_307++)
                {
                    for (l_341 = 0; (l_341 >= 25); l_341 = safe_add_func_uint8_t_u_u(l_341, 9))
                    {
                        unsigned char l_359 = 255UL;
                        int **l_360 = &l_98;
                        (*l_360) = func_42(l_359);
                    }
                }
                (*l_363) = (safe_lshift_func_int16_t_s_u(func_53(p_52, p_52, (*l_88)), p_52));
                if ((*l_363))
                    break;
                if ((*l_98))
                    break;
            }
        }
        (*l_364) ^= 0x37AC65E8L;
    }
    g_75 = ((safe_sub_func_uint32_t_u_u(func_53(g_100, l_367, p_52), p_52)) == (safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(p_52, (0x6167AC9DL != (l_372 != &g_311)))), 5)));
    (*l_375) = (void*)0;
    return (***g_310);
}







static short func_53(unsigned char p_54, unsigned char p_55, unsigned p_56)
{
    const int *l_65 = (void*)0;
    const int **l_64 = &l_65;
    int l_66 = 7L;
    int *l_67 = &l_66;
    l_66 = (!(safe_mod_func_int16_t_s_s(((g_3 <= (*g_2)) <= ((&g_3 == (void*)0) >= (0x87C7L != (((~g_3) != ((((((void*)0 == l_64) & g_3) ^ g_3) && p_56) && g_3)) & p_56)))), p_55)));
    (*l_67) = 0xAD1DC2CBL;
    return p_55;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
