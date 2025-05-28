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



static unsigned short g_7 = 9UL;
static unsigned long long g_12 = 18446744073709551615UL;
static unsigned char g_18 = 0x99L;
static int g_20 = 1L;
static int g_49 = (-1L);
static int *g_62 = &g_49;
static long long g_89 = 0xA232894124F91E2CLL;
static int g_100 = 0L;
static unsigned g_148 = 0UL;
static unsigned *g_147 = &g_148;
static unsigned * const *g_146 = &g_147;
static unsigned long long *g_151 = &g_12;
static unsigned long long **g_150 = &g_151;
static unsigned long long g_154 = 0xB274B4BCE18E9017LL;
static char g_185 = 0L;
static char g_218 = 1L;
static long long g_237 = (-1L);
static short g_244 = 1L;
static unsigned char *g_267 = (void*)0;
static unsigned char g_294 = 5UL;
static unsigned char g_297 = 0xB8L;
static int *g_350 = (void*)0;
static unsigned short g_357 = 0x5673L;
static char *g_374 = (void*)0;
static char **g_373 = &g_374;
static long long *g_381 = &g_89;
static long long **g_380 = &g_381;
static const int g_398 = 0xB271C1A9L;
static int g_431 = 0xDA2793B3L;
static unsigned short **g_441 = (void*)0;
static int g_527 = 0x026262A0L;
static unsigned char ** const *g_530 = (void*)0;
static const unsigned char g_534 = 3UL;
static int **g_580 = &g_350;
static int ***g_579 = &g_580;
static int g_581 = 7L;
static unsigned long long g_621 = 18446744073709551613UL;
static unsigned long long g_632 = 0UL;
static const unsigned char *g_635 = &g_294;
static char *g_661 = &g_185;



static unsigned func_1(void);
static unsigned char func_2(unsigned char p_3, short p_4, unsigned p_5, const unsigned long long p_6);
static unsigned func_25(const long long p_26, long long p_27);
static unsigned long long * func_28(unsigned char p_29, long long p_30, unsigned long long p_31, const unsigned short p_32);
static unsigned func_34(int p_35, unsigned short p_36, const unsigned char * p_37, long long p_38, char p_39);
static const unsigned char * func_40(const int * p_41, short p_42, unsigned char * p_43);
static const int * func_44(unsigned long long * p_45);
static unsigned long long * func_46(int p_47);
static int * func_51(short p_52);
static int * func_54(unsigned long long * p_55);
static unsigned func_1(void)
{
    int l_8 = (-7L);
    unsigned long long *l_11 = &g_12;
    short l_808 = 0x2B26L;
    int *l_809 = &g_49;
    unsigned l_814 = 5UL;
    unsigned l_817 = 0xD105892BL;
    unsigned char l_818 = 1UL;
    unsigned char l_835 = 0xDBL;
    unsigned ***l_842 = (void*)0;
    unsigned short *l_857 = (void*)0;
    unsigned short l_858 = 65535UL;
    short l_860 = (-1L);
    int *l_862 = &g_527;
    int *l_863 = (void*)0;
    l_808 = ((*g_62) = ((((!func_2(g_7, g_7, l_8, ((*l_11) &= (1UL <= (safe_sub_func_int64_t_s_s(((((((((g_7 && l_8) <= 0xA1654207L) & l_8) && ((g_7 | g_7) < g_7)) <= 0x6B3E713E19F23E52LL) , l_8) > 0xB3L) > l_8), g_7)))))) != l_8) ^ l_8) || (*g_62)));
    (*g_580) = l_809;
    (*g_62) = (*l_809);
    if (((safe_rshift_func_int8_t_s_u((((!(((safe_add_func_uint8_t_u_u(func_25((*g_381), l_814), ((*g_661) < (safe_lshift_func_uint16_t_u_s(l_8, 1))))) , &g_147) != (void*)0)) >= (((l_814 ^ l_817) >= l_817) & 7UL)) && 0x87L), l_818)) == l_818))
    {
        unsigned long long l_819 = 0x0FCF716F69A823B1LL;
        short *l_820 = (void*)0;
        unsigned char l_825 = 1UL;
        short *l_826 = &g_244;
        unsigned char *l_833 = (void*)0;
        unsigned char *l_834 = &l_818;
        int *l_836 = &g_581;
        unsigned * const **l_841 = &g_146;
        short l_844 = 6L;
        long long **l_855 = &g_381;
        long long ***l_856 = &l_855;
        short l_859 = 0x0F96L;
        (*g_580) = func_51((g_244 = l_819));
        (*g_62) = (safe_add_func_int16_t_s_s((*l_809), ((*l_826) = ((*l_809) >= (safe_rshift_func_uint8_t_u_u(l_825, 4))))));
        if (func_34(((*l_836) = (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(g_18, g_7)), (((*l_834) = (safe_lshift_func_int8_t_s_s((*l_809), 0))) < l_835)))), ((l_825 , func_34(((((((&g_381 == &g_381) <= (safe_rshift_func_int8_t_s_u(((func_34(g_632, ((((*g_151) != (*l_809)) , 1L) | 0xAEL), &l_835, (**g_380), (*l_809)) ^ g_218) || (*g_635)), 6))) , (*g_579)) == (void*)0) , 0x6EL) & 1L), l_825, &g_297, (*l_809), l_819)) , (*l_809)), &l_825, l_825, (*g_661)))
        {
            (*g_580) = (**g_579);
        }
        else
        {
            unsigned ****l_843 = &l_842;
            (*g_62) = (safe_mod_func_int64_t_s_s((l_841 == ((*l_843) = l_842)), l_844));
            (**g_579) = l_809;
        }
        l_860 ^= (safe_rshift_func_int8_t_s_u((*l_809), (+(((((0xD373538AL | ((void*)0 != (*g_150))) || (safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u(func_2((safe_add_func_int64_t_s_s(((*g_381) = func_2(((safe_mod_func_int8_t_s_s((*g_661), func_2(((((*l_856) = l_855) != (void*)0) & (((**g_146) | ((l_857 = l_820) == &g_357)) | l_858)), g_431, (*l_809), (**g_150)))) , 249UL), l_819, l_825, l_819)), (*l_809))), g_185, l_844, l_819), 18446744073709551612UL)), l_859))) > 0x014DL) , (*g_580)) != (**g_579)))));
    }
    else
    {
        unsigned l_861 = 0x7F570822L;
        unsigned * const **l_899 = (void*)0;
        int l_900 = 0L;
        l_863 = ((l_861 == 5UL) , ((**g_579) = l_862));
        for (g_18 = 6; (g_18 > 19); g_18++)
        {
            unsigned l_869 = 4294967295UL;
            int **l_890 = &l_809;
            for (l_858 = 0; (l_858 <= 15); l_858++)
            {
                int *l_878 = &g_581;
                unsigned long long l_889 = 0x8F14BB00DFB7ED7DLL;
                int l_891 = 4L;
                unsigned long long *l_892 = &g_621;
                (**g_579) = (**g_579);
            }
            for (l_860 = 15; (l_860 <= (-26)); l_860--)
            {
                (*g_350) = (**g_580);
                for (g_527 = 10; (g_527 > (-30)); --g_527)
                {
                    unsigned **l_898 = &g_147;
                    unsigned ***l_897 = &l_898;
                    l_900 ^= ((l_861 , l_897) != l_899);
                }
            }
        }
        (**g_579) = &l_900;
    }
    return (*l_809);
}







static unsigned char func_2(unsigned char p_3, short p_4, unsigned p_5, const unsigned long long p_6)
{
    unsigned l_33 = 0xD8131DDAL;
    const int *l_397 = &g_398;
    int *l_401 = (void*)0;
    const unsigned char *l_647 = &g_18;
    int l_648 = 0x08E4523CL;
    char *l_659 = &g_185;
    unsigned long long ***l_670 = &g_150;
    unsigned char **l_713 = (void*)0;
    unsigned char ***l_712 = &l_713;
    for (g_12 = 5; (g_12 > 17); g_12 = safe_add_func_uint32_t_u_u(g_12, 1))
    {
        unsigned char *l_17 = &g_18;
        int *l_19 = &g_20;
        int **l_453 = &g_350;
        char l_454 = 0x70L;
        unsigned char l_455 = 0x07L;
        unsigned *l_615 = &g_148;
        int l_646 = 0x7D0AADB1L;
        int l_694 = 0x4925A166L;
        unsigned **l_720 = (void*)0;
        unsigned ***l_719 = &l_720;
        int l_743 = 7L;
        unsigned l_746 = 1UL;
        char l_807 = 0x10L;
        (*l_19) = (safe_lshift_func_uint8_t_u_s(((*l_17) &= 253UL), 3));
    }
    l_648 &= (*g_62);
    return p_4;
}







static unsigned func_25(const long long p_26, long long p_27)
{
    unsigned char * const **l_594 = (void*)0;
    unsigned char * const *l_595 = (void*)0;
    int l_596 = (-8L);
    const unsigned char *l_597 = (void*)0;
    unsigned *l_600 = &g_148;
    unsigned **l_601 = &g_147;
    int *l_604 = &l_596;
    int *l_611 = &g_581;
    unsigned char l_612 = 255UL;
    unsigned short *l_613 = &g_7;
    int l_614 = 0xFBC698E2L;
    l_595 = (void*)0;
    (**g_580) = l_596;
    (***g_579) |= (((*g_381) = (safe_add_func_int8_t_s_s((((*l_601) = l_600) == ((**g_150) , l_600)), 0x47L))) == (**g_150));
    l_614 |= func_34((safe_add_func_int8_t_s_s((((((**g_579) = (l_604 = (void*)0)) == &l_596) != (func_34(func_34((l_596 , (((*g_380) == (func_34(l_596, ((*l_613) &= (safe_mod_func_int64_t_s_s(func_34(((*l_611) = (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(l_596, 3)), ((**g_150) , p_26)))), l_612, &g_297, p_26, p_27), (**g_380)))), &l_612, p_27, l_612) , &p_27)) || p_26)), l_612, &l_612, p_27, l_612), p_27, &l_612, p_27, p_27) >= p_27)) & g_357), p_26)), l_612, &l_612, l_612, p_27);
    return (*g_147);
}







static unsigned long long * func_28(unsigned char p_29, long long p_30, unsigned long long p_31, const unsigned short p_32)
{
    unsigned char l_456 = 0UL;
    int **l_457 = &g_350;
    long long ***l_458 = &g_380;
    unsigned long long l_460 = 0x29982B93790DA8EELL;
    const unsigned char *l_533 = &g_534;
    short *l_556 = (void*)0;
    unsigned ** const l_558 = &g_147;
    int *l_582 = (void*)0;
    int l_590 = 3L;
    int *l_591 = &g_100;
    long long l_592 = 7L;
    int *l_593 = &g_527;
lbl_559:
    (**l_457) = (p_32 ^ ((l_456 , (-1L)) < (l_457 != &g_350)));
    if (p_32)
    {
        long long ****l_459 = &l_458;
        unsigned char **l_461 = &g_267;
        int l_466 = (-9L);
        unsigned short l_532 = 0x0A31L;
        (**l_457) &= 0x12277E28L;
        g_62 = &g_49;
    }
    else
    {
        long long l_562 = 0x517F6B34E8296908LL;
        unsigned long long *l_565 = &g_154;
        int l_570 = 0xBD456A31L;
        long long l_577 = (-1L);
        const unsigned char ** const l_578 = &l_533;
lbl_586:
        if (g_20)
            goto lbl_559;
        for (g_100 = 0; (g_100 < (-17)); --g_100)
        {
            unsigned l_563 = 6UL;
            unsigned long long *l_564 = &l_460;
            int l_568 = 0x3F293863L;
            int *l_583 = (void*)0;
            l_563 = (l_562 = ((*g_350) = (**l_457)));
            if (((**l_457) = (-1L)))
            {
                return l_565;
            }
            else
            {
                unsigned long long l_585 = 0xBB82F7A1C2295093LL;
                for (g_431 = 12; (g_431 <= 28); g_431 = safe_add_func_uint16_t_u_u(g_431, 1))
                {
                    int *l_569 = &g_49;
                    const int *l_572 = &g_49;
                    const int **l_571 = &l_572;
                    int *l_584 = &g_431;
                    l_570 = ((*l_569) &= (l_568 = ((**l_457) <= (-1L))));
                    (*l_571) = &g_398;
                    (**l_457) ^= ((*l_569) = (p_29 , (*l_569)));
                    if (((*l_569) = ((((**l_457) , ((safe_mod_func_int8_t_s_s((((*l_572) <= ((((**l_457) & (((safe_add_func_int8_t_s_s(((~(**l_457)) <= ((*l_564) ^= l_577)), (l_570 = (p_29 = (l_562 & ((void*)0 != l_578)))))) || (**l_457)) <= p_31)) , &l_457) != g_579)) , p_31), p_31)) | (**g_146))) != p_32) , p_30)))
                    {
                        l_583 = l_582;
                        (**l_457) ^= (p_30 > (0x4FD2L & (*l_569)));
                        (***g_579) = (*l_572);
                        (**l_457) = p_31;
                    }
                    else
                    {
                        if ((**g_580))
                            break;
                        if ((**g_580))
                            break;
                        (*l_571) = l_584;
                    }
                }
                if (l_585)
                    continue;
                if (p_30)
                    goto lbl_586;
            }
        }
    }
    (*l_593) |= (((safe_add_func_int32_t_s_s(p_32, ((((safe_unary_minus_func_int32_t_s(((**l_457) , l_590))) , (*g_381)) < (&l_556 != &l_556)) > func_34(((*l_591) = p_32), p_30, &p_29, p_31, p_30)))) < 0x2E7C00A5CD8E73DALL) < l_592);
    return (*g_150);
}







static unsigned func_34(int p_35, unsigned short p_36, const unsigned char * p_37, long long p_38, char p_39)
{
    const int l_450 = 5L;
    const int l_451 = (-5L);
    int l_452 = 0L;
    for (p_38 = (-24); (p_38 < (-14)); p_38 = safe_add_func_uint32_t_u_u(p_38, 3))
    {
        int *l_434 = (void*)0;
        int *l_435 = &g_431;
        char *l_436 = &g_218;
        (*l_435) = g_185;
        (*l_435) ^= ((&p_39 != (void*)0) == (!(l_436 != (void*)0)));
        (*l_435) |= 0x0F4204DFL;
        if (g_237)
            continue;
    }
    l_452 = ((+((*p_37) <= (safe_mod_func_uint16_t_u_u((((p_36 ^ (safe_add_func_uint32_t_u_u(((void*)0 != g_441), ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((*p_37), p_38)), (safe_rshift_func_int8_t_s_s(0x92L, 0)))) & (((safe_rshift_func_int8_t_s_u(((**g_380) || (!l_450)), 5)) , (*g_381)) < 0x423C30839E805B4BLL))))) > (*g_147)) != (**g_380)), l_451)))) <= 0xE48EL);
    return (*g_147);
}







static const unsigned char * func_40(const int * p_41, short p_42, unsigned char * p_43)
{
    unsigned long long l_404 = 0UL;
    unsigned short *l_405 = &g_7;
    int *l_406 = &g_20;
    long long ***l_421 = (void*)0;
    char *l_422 = &g_185;
    unsigned long long *l_425 = (void*)0;
    unsigned long long *l_426 = &l_404;
    int *l_427 = &g_49;
    int *l_428 = (void*)0;
    int *l_429 = (void*)0;
    int *l_430 = &g_431;
    (*l_406) |= (safe_add_func_uint16_t_u_u(((*l_405) &= l_404), g_18));
    (*l_427) |= (safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((0x48366C3AL || (safe_sub_func_int8_t_s_s(((*l_422) = (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(((~(((safe_rshift_func_uint8_t_u_u((*l_406), 1)) , &p_41) == &l_406)) && p_42), 9)), 1)), (((*l_406) , &g_380) != l_421)))), (safe_add_func_uint64_t_u_u(((*l_426) ^= p_42), (**g_380)))))), (*g_151))), 0x72ABL));
    (*l_430) = ((*l_406) = ((*l_427) = p_42));
    return p_43;
}







static const int * func_44(unsigned long long * p_45)
{
    int *l_53 = (void*)0;
    int **l_164 = (void*)0;
    int **l_165 = &g_62;
    int *l_166 = &g_49;
    unsigned long long *l_238 = &g_154;
    short l_255 = 0L;
    unsigned short *l_304 = &g_7;
    unsigned **l_328 = &g_147;
    unsigned l_379 = 0xF796855FL;
lbl_351:
    (*l_165) = func_51((l_53 != (l_166 = ((*l_165) = func_54(func_46(g_49))))));
    g_49 |= ((**l_165) , (**l_165));
lbl_387:
    if ((*g_62))
    {
        int *l_219 = &g_49;
        short *l_243 = &g_244;
        char *l_254 = &g_218;
        int l_256 = 0x1852EFB7L;
        short l_273 = 0x04C5L;
        unsigned char *l_299 = (void*)0;
        l_219 = (*l_165);
        for (g_18 = 13; (g_18 != 41); g_18++)
        {
            unsigned l_232 = 18446744073709551615UL;
            unsigned long long *l_233 = &g_154;
            long long *l_234 = &g_89;
            long long *l_235 = (void*)0;
            long long *l_236 = &g_237;
            unsigned short *l_245 = &g_7;
            const int *l_246 = (void*)0;
            char *l_252 = &g_218;
            unsigned short l_283 = 0x5059L;
            g_49 = (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((((((**g_146) &= (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s(l_232, 7)) < (((*l_233) &= (*p_45)) ^ ((*l_236) = ((*l_234) = ((*l_219) ^= (*l_166)))))), 5)), 2))) , l_238) != ((*g_150) = l_238)) & 1UL), 2)), (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((*l_245) = ((((l_232 & (l_243 != &g_244)) != g_12) && 255UL) > g_18)), g_49)), g_18))));
            if ((*g_62))
            {
                l_219 = &g_49;
                return l_246;
            }
            else
            {
                char l_247 = 0L;
                char **l_253 = &l_252;
                int *l_264 = &g_20;
                long long l_289 = 0xDB586E15FCF3D8B4LL;
                unsigned char *l_316 = (void*)0;
                l_256 |= ((*g_147) , (((l_247 <= (((((l_247 || (*l_166)) != (((*l_234) = (*l_166)) || (**g_150))) >= (safe_mod_func_int16_t_s_s(((*l_219) != (((*l_236) = (g_100 & (safe_rshift_func_uint8_t_u_u((((((*l_253) = l_252) != l_254) , (void*)0) != (void*)0), 3)))) || 0UL)), (-8L)))) || l_255) != (*l_219))) , (*p_45)) < (*g_151)));
                for (g_100 = 17; (g_100 <= 26); g_100 = safe_add_func_uint64_t_u_u(g_100, 9))
                {
                    unsigned l_272 = 0x1E7D8B5BL;
                    int l_274 = 0x5B6F9CE4L;
                    unsigned char **l_310 = &l_299;
                    long long l_313 = 0x4B3009E131B14871LL;
                    int *l_317 = &l_256;
                    for (g_154 = 0; (g_154 >= 36); g_154 = safe_add_func_int64_t_s_s(g_154, 3))
                    {
                        int **l_261 = &l_219;
                        (*l_261) = ((*l_165) = &g_20);
                        (*l_261) = ((safe_lshift_func_int8_t_s_u((-1L), 6)) , ((*l_165) = l_264));
                    }
                    if ((*g_62))
                        continue;
                }
            }
            return &g_49;
        }
        (*l_165) = func_51(g_237);
    }
    else
    {
        long long *l_318 = (void*)0;
        int l_319 = (-1L);
        int l_329 = 0x3692EB2FL;
        (*l_165) = &g_20;
        l_329 |= (((l_319 |= (-1L)) , (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((*l_304) = (safe_add_func_int32_t_s_s(((l_238 == l_238) , ((l_319 , (((**l_165) <= (safe_sub_func_uint64_t_u_u((**g_150), l_319))) , l_328)) != &g_147)), 0x7CC90269L))), 0x340DL)), 247UL))) | g_49);
        for (g_237 = 0; (g_237 != 20); g_237 = safe_add_func_uint16_t_u_u(g_237, 7))
        {
            unsigned long long l_337 = 0xFED7D1725C1C1F29LL;
            const int *l_343 = &g_49;
            (*l_165) = &g_20;
            for (g_100 = (-23); (g_100 != 12); g_100 = safe_add_func_int16_t_s_s(g_100, 4))
            {
                int l_336 = 0xF999C134L;
                l_336 = ((safe_sub_func_int16_t_s_s((l_336 == (l_337 > ((void*)0 == &p_45))), g_185)) , (*l_166));
                (**l_165) = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_337, (safe_unary_minus_func_int8_t_s((~g_185))))), g_218));
                return l_343;
            }
            (*l_166) &= (*g_62);
            for (l_337 = 0; (l_337 != 20); ++l_337)
            {
                (*l_165) = &g_20;
                if ((*g_62))
                    break;
                return &g_20;
            }
        }
        for (g_148 = (-7); (g_148 != 9); g_148 = safe_add_func_int32_t_s_s(g_148, 5))
        {
            const int l_348 = 0xBF828A1BL;
            int *l_349 = &g_20;
            unsigned ***l_377 = &l_328;
            if ((*g_62))
                break;
            if (l_348)
            {
                g_350 = ((*l_165) = l_349);
                if (g_12)
                    goto lbl_351;
                (*l_165) = (*l_165);
            }
            else
            {
                int ***l_352 = &l_164;
                unsigned l_370 = 4294967293UL;
                unsigned char *l_378 = &g_297;
                long long ***l_382 = &g_380;
                long long **l_384 = &l_318;
                long long ***l_383 = &l_384;
                long long **l_386 = (void*)0;
                long long ***l_385 = &l_386;
                if ((((*l_352) = &l_349) == (((**g_146) <= (((*l_349) == g_294) != (*p_45))) , (void*)0)))
                {
                    short l_353 = 0xB6D2L;
                    unsigned short *l_356 = &g_357;
                    (*l_165) = (*l_164);
                    (***l_352) = ((l_353 || ((*l_349) , (((safe_lshift_func_uint16_t_u_u(l_353, 9)) == ((*l_356) ^= ((((**l_164) != (*g_151)) , (***l_352)) , ((*l_304) = (***l_352))))) ^ (safe_mod_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s(((((**g_150) , (void*)0) == p_45) || l_353), l_329)) == 0xC992L), 2UL))))) ^ g_237);
                    (**l_352) = (void*)0;
                }
                else
                {
                    (***l_352) = ((*l_166) = (((0xED61A26EF9ED5F9CLL != (*p_45)) , (safe_rshift_func_uint8_t_u_u((1L < (safe_lshift_func_uint8_t_u_s(((&g_297 != (void*)0) , 0xAFL), (safe_mod_func_int64_t_s_s(0L, (((safe_mod_func_int32_t_s_s((*l_349), (***l_352))) , (***l_352)) , l_370)))))), 6))) | (*l_349)));
                    return l_349;
                }
                l_319 ^= ((0x51F0A175L > (safe_sub_func_uint16_t_u_u((l_370 >= ((void*)0 == g_373)), g_297))) == (safe_lshift_func_int8_t_s_s((**l_165), 3)));
                if (l_319)
                    goto lbl_387;
                (*l_385) = ((*l_383) = ((*l_382) = (((l_377 == (void*)0) , ((l_319 , (((~((*l_378) ^= l_329)) & ((**l_165) |= l_379)) , &g_294)) != (void*)0)) , g_380)));
            }
        }
    }
    if ((*l_166))
    {
        short *l_390 = &g_244;
        (*g_62) = (g_89 || ((*l_390) |= (((*l_238) = (safe_lshift_func_uint16_t_u_u(1UL, 1))) ^ 9L)));
        for (g_237 = 0; (g_237 == 21); g_237++)
        {
            int l_395 = 0x4086D0FFL;
            (*l_165) = (*l_165);
            (*g_62) = (*g_62);
            (*g_62) ^= (safe_add_func_uint32_t_u_u(4294967295UL, l_395));
            (*l_165) = &g_20;
        }
        (*l_166) &= (*g_62);
    }
    else
    {
        int *l_396 = (void*)0;
        (*l_165) = l_396;
        (*l_165) = (*l_165);
    }
    return (*l_165);
}







static unsigned long long * func_46(int p_47)
{
    int *l_48 = &g_49;
    unsigned long long *l_50 = &g_12;
    (*l_48) ^= g_20;
    return l_50;
}







static int * func_51(short p_52)
{
    char *l_188 = &g_185;
    short l_190 = 1L;
    int l_192 = 5L;
    unsigned short *l_195 = &g_7;
    unsigned short l_200 = 65530UL;
    int l_204 = 0x0B7091F5L;
    unsigned long long *l_207 = &g_154;
    for (g_20 = 0; (g_20 == (-22)); g_20--)
    {
        int *l_169 = &g_20;
        int **l_170 = &g_62;
        char *l_184 = &g_185;
        char **l_183 = &l_184;
        char *l_187 = &g_185;
        char **l_186 = &l_187;
        unsigned short *l_189 = &g_7;
        char *l_191 = &g_185;
        (*l_170) = l_169;
        l_192 &= (g_49 != ((safe_lshift_func_int8_t_s_u((g_20 != ((*l_191) = ((((!0x62D627FB3206E961LL) == (((((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((**l_170) <= (safe_lshift_func_int8_t_s_s((~((*l_169) | ((((safe_add_func_uint32_t_u_u((((*l_189) |= ((**l_170) || (((*l_183) = (void*)0) == (l_188 = ((*l_186) = &g_185))))) > (((p_52 , (*g_151)) , p_52) , p_52)), p_52)) , (void*)0) != (void*)0) ^ 18446744073709551615UL))), 2))) , l_190), (*l_169))), p_52)) == 0x97BFFB87L) & g_49) & p_52) ^ 0xC0DBAEEB66546BCCLL)) || l_190) != g_185))), 6)) & p_52));
    }
    if ((safe_rshift_func_uint16_t_u_s(((*l_195) &= l_190), (((void*)0 != (*g_146)) ^ g_185))))
    {
        unsigned long long l_196 = 0x74F05488EF96A3AALL;
        unsigned long long *l_203 = &g_154;
        short *l_205 = (void*)0;
        short *l_206 = &l_190;
        int *l_208 = &g_49;
        (*l_208) = (&g_49 == (l_196 , func_54(((!(g_89 = p_52)) , (l_207 = ((safe_unary_minus_func_int16_t_s(((((((safe_sub_func_int16_t_s_s(g_20, (g_89 > 0x5568L))) <= ((*l_206) = (~(l_204 = (((((l_192 = (((*l_203) = (((**g_146) = l_196) == (((l_200 , (safe_add_func_int32_t_s_s((p_52 <= l_196), 0xCBC0A3B5L))) >= g_154) , l_192))) != l_190)) , g_12) || 0xE940L) <= p_52) && g_12))))) & p_52) ^ (**g_150)) >= g_18) , l_200))) , l_207))))));
    }
    else
    {
        unsigned char l_215 = 1UL;
        int l_216 = 0x26C017CAL;
        char *l_217 = &g_218;
        (*g_62) ^= (safe_rshift_func_uint16_t_u_s(l_192, 2));
        (*g_62) ^= (safe_lshift_func_int8_t_s_s(((*l_188) = g_89), (((((((l_216 |= ((safe_lshift_func_uint16_t_u_u(g_148, l_215)) , l_215)) < p_52) && 4UL) , (void*)0) != (((*l_217) |= p_52) , (void*)0)) > 0xCFL) >= 0x4EL)));
    }
    return &g_20;
}







static int * func_54(unsigned long long * p_55)
{
    int l_56 = 0x3AABDC9AL;
    unsigned long long *l_59 = &g_12;
    int l_67 = (-1L);
    short l_71 = 0xF93CL;
    char l_82 = 0xFBL;
    char l_108 = (-3L);
    unsigned char *l_123 = (void*)0;
    long long l_142 = 0x5684B0DFAB60A8A2LL;
    int l_143 = (-1L);
    unsigned long long *l_152 = &g_12;
    unsigned *l_159 = &g_148;
    char l_161 = 0x40L;
    l_56 = g_18;
    for (g_20 = 0; (g_20 >= 1); g_20++)
    {
        int l_80 = 6L;
        unsigned char *l_99 = (void*)0;
        int l_101 = 0x757A549BL;
        unsigned long long *l_153 = &g_154;
        int *l_155 = (void*)0;
        unsigned short l_156 = 1UL;
        if (((void*)0 != l_59))
        {
            int *l_61 = &g_49;
            int **l_60 = &l_61;
            g_62 = ((*l_60) = &g_20);
        }
        else
        {
            char l_65 = 0x04L;
            int *l_94 = &l_67;
            for (l_56 = 4; (l_56 > (-3)); l_56 = safe_sub_func_int32_t_s_s(l_56, 5))
            {
                unsigned l_66 = 0x8CDE333BL;
                unsigned char *l_96 = &g_18;
                const int l_134 = 7L;
                int *l_140 = &l_80;
            }
        }
        if ((*g_62))
            break;
        l_80 = (((g_150 != (void*)0) && (l_152 == (void*)0)) <= (((*l_153) = 0x3A4BFF4CCE49B202LL) & g_49));
        l_156 = 0L;
    }
    l_67 = (((safe_mod_func_int8_t_s_s(((*g_151) , ((void*)0 != l_159)), (((safe_unary_minus_func_int32_t_s(((((**g_146) = l_56) ^ (l_71 , (l_161 && (safe_rshift_func_int16_t_s_u(l_71, 14))))) & l_143))) & (g_7 >= 2L)) || l_142))) || 65530UL) , l_143);
    return &g_49;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
