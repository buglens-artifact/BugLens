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



static const char g_4 = (-7L);
static long long g_29 = (-3L);
static int g_50 = 0x214356E3L;
static int *g_73 = (void*)0;
static int **g_72 = &g_73;
static unsigned g_75 = 0x11C1B015L;
static unsigned short g_79 = 0xDE15L;
static short g_114 = (-3L);
static unsigned long long g_117 = 0UL;
static int g_121 = 0x0988C8CFL;
static short g_124 = (-10L);
static int ***g_127 = &g_72;
static int *g_130 = &g_50;
static int **g_129 = &g_130;
static int ***g_128 = &g_129;
static short g_132 = 0xDB05L;
static char g_133 = (-6L);
static unsigned g_149 = 0xFEC6B6B0L;
static long long g_158 = 0L;
static const short *g_161 = &g_132;
static long long g_242 = 0x86FE4CD9D4D48139LL;
static unsigned long long g_279 = 0x68137329BCD8D3F1LL;
static unsigned long long *g_278 = &g_279;
static unsigned long long **g_277 = &g_278;
static unsigned char g_290 = 255UL;
static int g_321 = 5L;
static unsigned g_367 = 1UL;
static unsigned char g_386 = 4UL;
static int g_417 = 9L;



static unsigned func_1(void);
static char func_5(int p_6, short p_7);
static unsigned func_8(unsigned long long p_9, int p_10, unsigned char p_11);
static unsigned func_16(const unsigned char p_17, const unsigned char p_18);
static long long func_24(unsigned short p_25, char p_26, int p_27, short p_28);
static int func_33(short p_34, unsigned char p_35, short p_36, unsigned char p_37);
static int * func_40(const int * p_41, char p_42, int * p_43, int p_44, const int * const p_45);
static const int * func_46(int * p_47, int p_48);
static unsigned char func_51(int p_52);
static unsigned char func_53(int * const p_54);
static unsigned func_1(void)
{
    unsigned short l_19 = 0xDBD0L;
    unsigned l_30 = 0x0424B969L;
    short *l_307 = &g_124;
    short *l_308 = &g_132;
    long long l_380 = 0x197297D7F472F36CLL;
    unsigned *l_405 = &g_149;
    unsigned *l_406 = &g_75;
    int l_407 = 1L;
    int *l_527 = &l_407;
    unsigned long long l_528 = 0x36322041FA79749ALL;
    unsigned long long * const * const l_529 = &g_278;
    unsigned long long * const *l_531 = (void*)0;
    unsigned long long * const **l_530 = &l_531;
    l_528 = ((*l_527) = (safe_add_func_int8_t_s_s(((g_4 , (func_5((((((func_8((((l_407 = ((((safe_sub_func_uint64_t_u_u(((((*l_406) = (g_4 & (safe_mod_func_uint32_t_u_u(((*l_405) = func_16(g_4, (l_19 , (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((+(func_24(g_29, (((((g_4 >= (l_30 = g_29)) ^ (((*l_308) = ((*l_307) = (((((safe_div_func_int32_t_s_s(func_33((safe_sub_func_uint16_t_u_u(((0x300CA3C47AA29676LL == 0xABF0A644184EB300LL) , g_4), l_19)), g_29, l_19, l_19), g_149)) < g_279) && 0x75L) != g_279) <= l_19))) , 1UL)) > g_4) && g_50) , l_30), l_19, l_19) & 1UL)), 6L)) >= l_380), 7))))), l_380)))) || 4294967295UL) == g_4), g_242)) | g_4) != l_19) , l_407)) , l_407) , 0x074864215C9A3945LL), l_19, g_242) , (**g_277)) >= g_4) || l_380) , g_279) , 8L), l_19) <= 0x01L)) <= (-1L)), 9UL)));
    (*l_530) = l_529;
    return g_367;
}







static char func_5(int p_6, short p_7)
{
    const unsigned char l_524 = 1UL;
    int l_525 = (-6L);
    int *l_526 = &g_121;
    l_525 = (safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(l_524, 15)), (*g_278)));
    (*l_526) = p_6;
    return g_75;
}







static unsigned func_8(unsigned long long p_9, int p_10, unsigned char p_11)
{
    char l_408 = 0x0AL;
    int *l_413 = &g_321;
    short *l_416 = &g_124;
    unsigned *l_418 = &g_149;
    int *l_419 = &g_50;
    int *l_420 = &g_50;
    unsigned long long **l_425 = (void*)0;
    int l_497 = 8L;
    int l_500 = 0L;
    int l_501 = (-1L);
    if (((*l_419) = (l_408 == (l_408 , (safe_lshift_func_uint8_t_u_u(((0UL || func_53(func_40(((l_408 ^ ((*l_418) = (func_16((safe_lshift_func_int8_t_s_u(((p_10 , func_16(((l_413 == ((p_10 < func_16(((!p_10) >= (safe_add_func_int64_t_s_s((((*l_416) = (*g_161)) && p_9), g_417))), g_75)) , &g_321)) , l_408), p_9)) ^ l_408), g_114)), p_10) , g_242))) , (void*)0), g_158, l_413, p_11, l_413))) , 1UL), g_367))))))
    {
        unsigned ***l_421 = (void*)0;
        const int l_433 = 0L;
        int * const l_450 = (void*)0;
        (*g_129) = l_420;
        (**g_128) = (**g_127);
        if (((l_421 != l_421) & (*l_420)))
        {
            int *l_422 = &g_121;
            (*g_72) = &p_10;
            for (g_132 = 10; (g_132 != 10); g_132 = safe_add_func_int64_t_s_s(g_132, 8))
            {
                unsigned long long ***l_426 = &l_425;
                unsigned short *l_436 = &g_79;
                char *l_437 = &g_133;
                (*l_426) = l_425;
                (**g_72) = 2L;
                (***g_127) = ((safe_mod_func_uint8_t_u_u((&g_367 != l_422), (((*l_437) = ((safe_lshift_func_int8_t_s_s((*l_419), l_433)) && ((((g_75 , ((safe_lshift_func_uint16_t_u_s(((*l_436) = (p_9 <= p_11)), 7)) != (~g_386))) > l_433) , (*g_277)) != (void*)0))) & 0xF4L))) | (**g_72));
            }
        }
        else
        {
            int l_444 = 0x21F2D102L;
            long long * const l_451 = &g_242;
            short * const l_454 = &g_124;
            for (g_321 = (-7); (g_321 >= (-1)); g_321 = safe_add_func_int32_t_s_s(g_321, 5))
            {
                for (p_11 = 27; (p_11 == 43); p_11 = safe_add_func_int64_t_s_s(p_11, 1))
                {
                    for (g_417 = 0; (g_417 >= (-30)); g_417 = safe_sub_func_int8_t_s_s(g_417, 5))
                    {
                        (*l_419) = l_444;
                        return g_114;
                    }
                }
                (*l_420) = (*l_420);
            }
            if (((safe_div_func_uint16_t_u_u(((safe_unary_minus_func_uint8_t_u((safe_div_func_uint64_t_u_u(0x6457AF999BD8367ELL, ((0xB409539DL == (&g_278 != &g_278)) & ((*l_419) = (p_10 , (*l_419)))))))) <= ((void*)0 != l_451)), l_444)) , (*l_419)))
            {
                const int *l_452 = &l_444;
                const int **l_453 = &l_452;
                (*l_453) = l_452;
            }
            else
            {
                unsigned short *l_460 = &g_79;
                int l_461 = 0x18161534L;
                char *l_462 = &l_408;
                p_10 = ((((*l_462) = ((((&g_114 != l_454) != ((!(((p_9 > (safe_lshift_func_uint16_t_u_s((func_51(l_433) != (g_117 , (*l_419))), 13))) > ((*l_460) = ((((((*l_416) = (safe_unary_minus_func_int64_t_s(p_11))) , (void*)0) == &g_277) >= 0L) , 1UL))) && l_444)) & g_114)) <= l_461) == 0L)) | 0x5FL) >= 6UL);
                if (p_9)
                {
                    return p_10;
                }
                else
                {
                    p_10 = func_51(l_461);
                    (**g_128) = (**g_127);
                }
            }
            (**g_127) = (void*)0;
        }
    }
    else
    {
        const unsigned l_470 = 0xD0187A29L;
        const int * const l_476 = &g_121;
        unsigned long long **l_518 = &g_278;
        for (g_75 = 21; (g_75 >= 10); g_75 = safe_sub_func_uint64_t_u_u(g_75, 6))
        {
            unsigned short *l_469 = &g_79;
            int *l_473 = &g_121;
            char *l_519 = &g_133;
            (*g_129) = ((safe_add_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(g_242, ((*l_419) = (p_10 , ((*l_469) = ((*g_278) >= 0x3F55E92D356A5883LL)))))) == p_10) & 1L), (*g_161))) , &p_10);
            if (l_470)
            {
                (**g_128) = func_40(((safe_div_func_int32_t_s_s((p_9 >= ((void*)0 == &p_11)), (g_386 & 0x94DB9DBF062F77F1LL))) , &p_10), g_279, l_473, (safe_div_func_uint16_t_u_u(func_51((*l_419)), p_11)), l_476);
                if ((*l_420))
                    break;
                if ((*l_473))
                    break;
            }
            else
            {
                unsigned short l_479 = 1UL;
                int l_481 = (-9L);
                for (g_132 = (-15); (g_132 < (-6)); g_132 = safe_add_func_uint64_t_u_u(g_132, 1))
                {
                    char l_480 = (-1L);
                    if (((*l_419) = 0xAF55E327L))
                    {
                        if (p_11)
                            break;
                        (*l_419) = 4L;
                    }
                    else
                    {
                        if ((*l_420))
                            break;
                        if (l_479)
                            break;
                        (*g_129) = (*g_72);
                        (*l_420) = (l_481 = (l_480 = func_51((*l_420))));
                    }
                    (**g_127) = (**g_128);
                }
                for (g_29 = (-1); (g_29 != (-30)); --g_29)
                {
                    int l_484 = 0L;
                    l_484 = (*l_473);
                    (*l_420) = ((g_4 <= l_481) >= p_10);
                    for (l_479 = 10; (l_479 != 40); ++l_479)
                    {
                        unsigned char *l_514 = &g_386;
                        long long *l_515 = (void*)0;
                        long long *l_516 = (void*)0;
                        long long *l_517 = &g_242;
                        (*l_473) = ((l_484 | 6L) < (safe_add_func_int16_t_s_s(((func_51(l_484) && (safe_mod_func_uint16_t_u_u((*l_473), (func_51((safe_mod_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((6UL ^ (((safe_sub_func_uint64_t_u_u(l_497, (((safe_mod_func_uint32_t_u_u((*l_476), p_11)) , l_500) & 0xC3E753BEL))) , p_9) != l_479)) ^ l_501), p_9)), 0x6A641470D5558EC3LL))) , 1UL)))) | l_484), p_11)));
                        (**g_128) = (((((safe_lshift_func_int8_t_s_u((*l_473), 2)) >= g_124) || ((((*l_517) = (safe_sub_func_uint16_t_u_u((safe_div_func_int64_t_s_s(g_149, (safe_sub_func_uint16_t_u_u((func_51(p_9) >= 0x6CBC40B6L), (!p_10))))), ((safe_add_func_uint8_t_u_u(g_417, (safe_mod_func_uint8_t_u_u(((*l_514) = p_10), g_124)))) < 0x57F52205L)))) == (*g_278)) | 9UL)) | p_9) , &p_10);
                        l_425 = l_518;
                        (*l_473) = p_10;
                    }
                }
            }
            (**g_128) = func_40(&l_501, ((*l_519) = g_50), l_473, (func_51(((void*)0 == (*g_128))) , 0L), &p_10);
        }
    }
    return p_11;
}







static unsigned func_16(const unsigned char p_17, const unsigned char p_18)
{
    char *l_381 = &g_133;
    int *l_382 = &g_50;
    unsigned char *l_383 = &g_290;
    unsigned char *l_384 = (void*)0;
    unsigned char *l_385 = &g_386;
    int *l_388 = (void*)0;
    int **l_387 = &l_388;
    int ***l_389 = &l_387;
    int **l_391 = &l_388;
    int ***l_390 = &l_391;
    int l_392 = 1L;
    (*l_382) = func_51(((*l_382) = (((*l_381) = g_290) ^ (&g_242 != &g_242))));
    l_392 = ((0x76L | ((*l_385) = ((*l_382) = (~(g_158 , ((*l_383) = func_51((l_382 == l_382)))))))) != (((*l_390) = ((*l_389) = l_387)) != (void*)0));
    (*l_382) = func_53(((+((1UL >= (((safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s(((g_4 | p_17) & (*l_382)), (safe_add_func_uint8_t_u_u(0xF4L, p_17)))), ((p_17 , (safe_mod_func_int16_t_s_s((((((**g_277) = (p_17 & (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0xAB962ED9L, p_17)), p_17)))) && 1UL) & (*l_382)) ^ g_75), (*l_382)))) && p_17))) < (*l_382)) & 0xAD05FFB8L)) | (*l_382))) , &l_392));
    return p_18;
}







static long long func_24(unsigned short p_25, char p_26, int p_27, short p_28)
{
    long long l_309 = 0xE6EC5EEC6CABB0AELL;
    unsigned *l_318 = &g_75;
    unsigned **l_317 = &l_318;
    unsigned ***l_316 = &l_317;
    int * const l_323 = &g_121;
    unsigned l_324 = 0x2BE48C0DL;
    unsigned long long **l_340 = &g_278;
    unsigned short l_360 = 0x2E1FL;
    if (((p_26 <= l_309) == (((***g_128) = p_26) & ((((safe_lshift_func_uint8_t_u_s(p_28, (p_26 > ((((*g_161) <= (safe_lshift_func_uint8_t_u_u((g_242 , (((safe_mod_func_int32_t_s_s(p_28, (l_309 || l_309))) <= l_309) == l_309)), 3))) , l_316) == &l_317)))) , (-1L)) || p_28) < 0x77L))))
    {
        int *l_319 = &g_50;
        int *l_320 = &g_321;
        (*g_129) = l_319;
        (**g_128) = l_318;
        (*l_319) = (*g_130);
    }
    else
    {
        int l_322 = (-6L);
        int *l_359 = (void*)0;
        if ((((g_114 = ((**g_277) ^ (**g_277))) , 0x97B45DCA988B8C5FLL) & p_27))
        {
            return g_132;
        }
        else
        {
            unsigned short l_333 = 0x5AF6L;
            unsigned long long ***l_341 = &g_277;
            unsigned short *l_348 = (void*)0;
            unsigned short *l_349 = (void*)0;
            char *l_350 = &g_133;
            int **l_351 = (void*)0;
            int *l_353 = &g_321;
            int **l_352 = &l_353;
            (*l_323) = ((p_26 , (((*g_278) = l_333) , &g_321)) == ((*l_352) = func_40((**g_128), ((*l_350) = (((((((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(g_75, ((((*l_341) = l_340) == l_340) , (*l_323)))), ((g_79 = (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((((p_28 && l_322) && p_28) ^ g_75), g_79)) , 18446744073709551615UL), p_27)), 6))) && p_27))), g_117)) && p_27) ^ p_26) <= p_27) , 0UL) & 0xBEL) == 0xE6L)), &l_322, l_322, (**g_128))));
            for (g_321 = 8; (g_321 == (-8)); g_321 = safe_sub_func_int64_t_s_s(g_321, 1))
            {
                int *l_358 = &g_121;
                for (g_50 = 0; (g_50 <= 4); g_50++)
                {
                    l_359 = l_358;
                    (*l_359) = l_360;
                }
            }
            for (g_124 = (-23); (g_124 < (-6)); g_124 = safe_add_func_uint64_t_u_u(g_124, 6))
            {
                unsigned char *l_365 = &g_290;
                unsigned *l_366 = &g_367;
                unsigned short *l_374 = &l_360;
                (**g_128) = &l_322;
                if ((((safe_mod_func_uint8_t_u_u(((!g_132) & (***g_128)), (((*l_366) = (((*l_365) = ((void*)0 != (*l_340))) && g_242)) , (safe_rshift_func_uint16_t_u_s((~((g_279 & (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s(((*l_374) = ((((((*l_323) >= g_79) <= (*l_323)) , p_28) == 0x3186L) == 0x8F8A62B8CC00561ALL)), p_27)) != 0L) | p_25), 15))) , g_158)), l_333))))) , p_25) ^ 0x746FCF0B019C79EDLL))
                {
                    (*l_323) = (***g_128);
                }
                else
                {
                    long long l_377 = 0xEB7BC3CB085948F3LL;
                    (*l_341) = &g_278;
                    (**g_129) = (***g_128);
                    (***g_128) = (safe_sub_func_uint8_t_u_u((l_333 ^ ((*g_130) != g_121)), l_377));
                    if ((***g_128))
                        continue;
                }
                (**g_128) = l_353;
            }
        }
    }
    for (g_133 = 0; (g_133 == 20); g_133 = safe_add_func_uint8_t_u_u(g_133, 6))
    {
        (*l_323) = p_26;
    }
    return p_28;
}







static int func_33(short p_34, unsigned char p_35, short p_36, unsigned char p_37)
{
    int *l_49 = &g_50;
    const unsigned char l_288 = 0UL;
    unsigned char *l_289 = &g_290;
    char l_291 = 0L;
    unsigned long long l_292 = 0x202CF8D8C5060459LL;
    unsigned char l_293 = 255UL;
    (*g_129) = func_40(func_46(l_49, g_29), (((g_277 == ((!(safe_mod_func_uint32_t_u_u((((((0xECB08BCFL || p_36) , (((safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(l_288, (!(~(+(((*l_289) = p_35) || 0L)))))), 0x685B2B27AC2C4E39LL)), p_36)) && 0xD3L) ^ l_291)) ^ l_292) < 0x29L) >= p_36), 0x6349930DL))) , (void*)0)) >= 1L) ^ p_37), l_49, l_293, l_49);
    l_49 = (*g_129);
    return p_35;
}







static int * func_40(const int * p_41, char p_42, int * p_43, int p_44, const int * const p_45)
{
    unsigned short l_298 = 0x4A4BL;
    unsigned *l_299 = &g_75;
    const int l_302 = 1L;
    const int **l_303 = (void*)0;
    const int *l_305 = &g_50;
    const int **l_304 = &l_305;
    int *l_306 = &g_121;
    for (g_124 = 0; (g_124 > 6); g_124 = safe_add_func_uint64_t_u_u(g_124, 5))
    {
        (**g_128) = &p_44;
    }
    (*p_43) = (safe_sub_func_int16_t_s_s(((l_298 , ((l_299 != ((p_44 & 9UL) , &g_149)) | (safe_add_func_int8_t_s_s(g_79, l_302)))) > l_298), p_42));
    (*l_304) = &l_302;
    return l_306;
}







static const int * func_46(int * p_47, int p_48)
{
    int * const l_55 = &g_50;
    int *l_57 = &g_50;
    int **l_56 = &l_57;
    unsigned *l_98 = &g_75;
    unsigned ** const l_97 = &l_98;
    unsigned char l_99 = 9UL;
    unsigned short l_137 = 65527UL;
    const int *l_181 = &g_50;
    const int **l_180 = &l_181;
    unsigned short l_241 = 0x9528L;
    char l_249 = 0xF6L;
    long long *l_265 = &g_158;
    if ((func_51(((p_48 != g_29) , ((func_53(((*l_56) = l_55)) > (*l_55)) , (*l_57)))) ^ g_50))
    {
        unsigned l_118 = 0xE18DB56EL;
        unsigned l_140 = 1UL;
        unsigned l_152 = 5UL;
        int * const l_153 = (void*)0;
        long long l_222 = 0x2908B59E8C66258ELL;
        const int *l_276 = &g_121;
        (**l_56) = (safe_add_func_uint32_t_u_u(p_48, ((**l_97) = (l_97 == &l_98))));
        if (l_99)
        {
            const short l_110 = 1L;
            short *l_113 = &g_114;
            int * const l_116 = &g_50;
            unsigned short *l_119 = &g_79;
            int *l_120 = &g_121;
            short *l_122 = (void*)0;
            short *l_123 = &g_124;
            int ***l_125 = (void*)0;
            int l_126 = 0x12148021L;
            short *l_131 = &g_132;
            short l_170 = 9L;
            unsigned long long *l_203 = &g_117;
            if ((((g_133 = (safe_add_func_int32_t_s_s(((((((*l_131) = (safe_sub_func_int32_t_s_s((*p_47), (((g_127 = ((((safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((!p_48), ((((safe_lshift_func_int16_t_s_s((((**l_97) = func_51((~(*p_47)))) , (((((((*l_123) = ((l_110 > (((*l_120) = (safe_rshift_func_int16_t_s_s(((*l_113) = (**l_56)), ((((*l_119) = (((((safe_unary_minus_func_int32_t_s(func_53(l_116))) , (g_117 = (*l_116))) > l_118) , (**l_56)) < g_29)) != 0L) ^ g_50)))) , 1L)) >= p_48)) , &l_98) != &l_98) , l_125) != &l_56) , l_126)), 14)) && g_114) ^ 0xF469F5ED801979D5LL) && g_117))), g_29)) , g_75) || p_48) , &g_72)) != g_128) != (*l_116))))) , g_124) ^ g_4) , &g_75) == (void*)0), p_48))) != (**l_56)) <= g_4))
            {
                unsigned l_136 = 6UL;
                int l_165 = 0xF86E789AL;
                const int *l_175 = &g_121;
                (**g_128) = p_47;
                if (((safe_rshift_func_int16_t_s_u(((*l_113) = (((l_136 != l_137) == (0xCBL > 0L)) <= (safe_div_func_int16_t_s_s(((*l_131) = p_48), g_133)))), (((g_4 ^ p_48) <= (l_140 || 0x12EDF4FAD4083004LL)) && p_48))) & l_118))
                {
                    unsigned l_162 = 0x979BA1A3L;
                    for (l_137 = 27; (l_137 > 52); l_137++)
                    {
                        long long *l_156 = (void*)0;
                        long long *l_157 = &g_158;
                        unsigned long long *l_163 = &g_117;
                        const int l_164 = 0xEAA03808L;
                        (*l_116) = ((safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(g_50, 1L)) || ((void*)0 == &g_79)), (safe_div_func_uint64_t_u_u(func_51(g_149), (safe_rshift_func_uint8_t_u_u(((0x38L && g_124) && l_152), 0)))))) | p_48);
                        p_47 = (((*l_157) = (p_48 > (safe_add_func_int64_t_s_s(3L, 0x5BE42EE2B1DE1D06LL)))) , ((safe_rshift_func_int8_t_s_u(l_136, (*l_116))) , p_47));
                        l_165 = ((p_48 , ((((**l_56) ^ func_53((l_136 , (((((((*l_120) | (((*l_163) = ((((l_162 = ((void*)0 != g_161)) & func_51(func_53((*l_56)))) <= p_48) , l_162)) & p_48)) < g_158) || 4294967295UL) , l_164) ^ (*g_161)) , p_47)))) != l_164) >= p_48)) , (*g_130));
                        (**g_128) = ((**g_127) = p_47);
                    }
                    if ((((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*p_47), (0xD9A8E3B28269CF34LL > ((l_162 < (p_48 != l_152)) < 0xE8E1B626L)))), ((l_170 <= (*l_57)) | (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(p_48, p_48)), 9))))) >= p_48) , (*p_47)))
                    {
                        (*l_57) = (*g_130);
                        (*g_72) = (*g_72);
                        (*p_47) = (*p_47);
                    }
                    else
                    {
                        return l_175;
                    }
                }
                else
                {
                    for (g_117 = 0; (g_117 == 11); g_117++)
                    {
                        (*g_72) = (**g_128);
                        if ((*p_47))
                            continue;
                        (*l_120) = (func_53(p_47) && p_48);
                        (*g_72) = p_47;
                    }
                }
                (**g_128) = (void*)0;
            }
            else
            {
                const int *l_179 = (void*)0;
                const int ** const l_178 = &l_179;
                l_180 = l_178;
            }
            for (l_126 = (-7); (l_126 < (-6)); l_126++)
            {
                char l_196 = (-1L);
                const int *l_207 = &g_50;
                for (l_140 = 0; (l_140 != 23); l_140 = safe_add_func_uint64_t_u_u(l_140, 6))
                {
                    return (**g_128);
                }
                (*l_120) = (*l_55);
                for (g_75 = (-10); (g_75 <= 57); g_75++)
                {
                    unsigned *l_190 = &g_75;
                    int l_191 = (-6L);
                    int l_194 = (-1L);
                    int *l_195 = &g_50;
                    unsigned **l_198 = &l_98;
                    unsigned *** const l_197 = &l_198;
                    long long l_210 = (-2L);
                    if (((((func_51((safe_div_func_int32_t_s_s((l_190 == ((l_191 = (p_48 , g_132)) , p_47)), (*l_55)))) == (safe_rshift_func_int16_t_s_s((*g_161), 4))) == l_194) == g_121) & p_48))
                    {
                        (*l_56) = p_47;
                        (*g_72) = (void*)0;
                        (*l_57) = (*p_47);
                        l_195 = (*g_129);
                    }
                    else
                    {
                        (*p_47) = 7L;
                        (*l_120) = (*p_47);
                    }
                    if (l_196)
                    {
                        unsigned long long *l_204 = &g_117;
                        unsigned long long **l_205 = &l_204;
                        unsigned l_206 = 0x017EA376L;
                        (*l_120) = (((void*)0 == l_197) , (safe_mul_func_uint16_t_u_u(6UL, (((*g_127) = &p_47) == (l_56 = (((g_117 = (p_48 < ((*p_47) = (safe_rshift_func_int16_t_s_s(((l_203 != ((*l_205) = l_204)) != (*p_47)), 7))))) || l_206) , &p_47))))));
                        return l_207;
                    }
                    else
                    {
                        (*l_55) = (*p_47);
                        if ((*p_47))
                            break;
                        (*l_116) = (safe_rshift_func_uint16_t_u_s((g_133 < g_124), (*g_161)));
                        if ((*l_120))
                            continue;
                    }
                    (*l_56) = p_47;
                    (**g_128) = (func_51((+func_51(((l_210 != ((void*)0 == p_47)) ^ func_51((*l_207)))))) , (*g_129));
                }
            }
        }
        else
        {
            const unsigned short l_215 = 0xC012L;
            char *l_223 = (void*)0;
            char *l_224 = &g_133;
            const int *l_274 = (void*)0;
            unsigned long long l_275 = 2UL;
            (*g_72) = (**g_128);
            (*g_130) = ((**l_180) > (((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(l_215, (l_215 <= func_51((g_121 < p_48))))) && (safe_lshift_func_int8_t_s_s(((*l_224) = (((*l_98) = g_133) >= (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_48, (p_48 , l_222))), 0xB896L)))), l_215))), (*l_57))) >= (*p_47)) < 1UL));
            if ((*l_55))
            {
                char l_233 = (-1L);
                unsigned l_250 = 4294967295UL;
                unsigned short *l_268 = &l_241;
                int *l_271 = &g_121;
                if ((*p_47))
                {
                    unsigned char l_243 = 0xC8L;
                    short *l_244 = (void*)0;
                    short *l_245 = &g_132;
                    char *l_246 = (void*)0;
                    char *l_247 = (void*)0;
                    char *l_248 = &l_233;
                    unsigned l_263 = 0x19B8F03CL;
                    (***g_128) = func_51((**g_72));
                    if (((*l_55) < ((safe_rshift_func_int8_t_s_s((p_48 , (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((((*l_248) = (((*l_245) = ((((*p_47) < ((safe_add_func_uint16_t_u_u((func_51(((g_133 & l_215) && (l_233 = 0xE11BCF49901D41C1LL))) && ((safe_unary_minus_func_int16_t_s(((g_133 = func_51((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(l_241, func_51((((((0L | (**l_56)) || p_48) , 0L) , p_48) > 1UL)))), (*l_55))), g_124)))) != g_79))) ^ p_48)), 0x9E8BL)) != g_242)) <= l_243) != p_48)) != (*l_57))) , 0x71L) != (*l_55)), 7)) >= 0x7E84L), l_249))), g_50)) , l_250)))
                    {
                        return p_47;
                    }
                    else
                    {
                        unsigned l_257 = 18446744073709551615UL;
                        const short l_262 = (-3L);
                        int *l_264 = &g_121;
                        (*l_264) = (safe_add_func_int16_t_s_s((((*l_57) = (!0x3D7B9707L)) ^ 0xD539769AL), (safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((func_51(l_257) >= (safe_mod_func_int64_t_s_s(((((safe_rshift_func_int8_t_s_s(p_48, p_48)) < l_262) , (l_263 == (+g_132))) && l_257), p_48))), g_29)), g_158))));
                        (***g_127) = (l_265 != &g_29);
                    }
                    if ((safe_mul_func_uint32_t_u_u(g_124, (l_268 == (void*)0))))
                    {
                        (*p_47) = (((+g_117) != l_263) != (safe_lshift_func_uint8_t_u_s(g_114, 1)));
                    }
                    else
                    {
                        (*g_72) = ((*p_47) , p_47);
                        (*l_56) = l_271;
                        (**l_56) = ((*l_55) = func_53((**g_128)));
                    }
                }
                else
                {
                    for (g_133 = 0; (g_133 < (-29)); g_133--)
                    {
                        (*g_129) = ((**g_127) = (*g_129));
                    }
                    return l_274;
                }
                (*l_271) = ((**g_72) = (*p_47));
            }
            else
            {
                (*p_47) = (l_275 == ((void*)0 != &p_47));
            }
        }
        return l_276;
    }
    else
    {
        p_47 = p_47;
        (*g_72) = ((*g_129) = (void*)0);
    }
    (*p_47) = (**l_180);
    (*l_57) = (*l_57);
    return p_47;
}







static unsigned char func_51(int p_52)
{
    int **l_87 = &g_73;
    int ***l_88 = &g_72;
    const int *l_90 = (void*)0;
    const int **l_89 = &l_90;
    const int ***l_91 = &l_89;
    unsigned *l_93 = &g_75;
    unsigned **l_92 = &l_93;
    unsigned ***l_94 = &l_92;
    (*l_88) = l_87;
    (*l_94) = (p_52 , ((((((*l_91) = l_89) != &g_73) , (*l_91)) == ((*l_88) = (*l_88))) , l_92));
    return g_75;
}







static unsigned char func_53(int * const p_54)
{
    int l_67 = 0xD05B3B6AL;
    unsigned *l_74 = &g_75;
    unsigned short l_76 = 65535UL;
    char l_80 = 7L;
    int l_81 = 0xD89F82A4L;
    l_81 = (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((4294967291UL == (safe_rshift_func_int8_t_s_u(l_67, (((((*l_74) = ((safe_rshift_func_uint8_t_u_s(l_67, (g_50 <= (g_72 != (void*)0)))) < (*p_54))) > (l_76 , (safe_sub_func_int8_t_s_s((g_79 = l_76), l_80)))) || (-4L)) || l_67)))), 0x548FL)), g_4)))), l_76));
    (*g_72) = (*g_72);
    for (l_76 = 0; (l_76 != 19); l_76 = safe_add_func_uint8_t_u_u(l_76, 9))
    {
        int *l_86 = &l_81;
        for (l_81 = 0; (l_81 >= (-21)); l_81--)
        {
            return l_81;
        }
        l_86 = (*g_72);
    }
    return g_50;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
