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



static int g_8 = (-1L);
static int g_14 = 8L;
static int g_17 = 0x40ED3C15L;
static unsigned g_76 = 4294967295UL;
static unsigned *g_75 = &g_76;
static int g_78 = 0x02D14A59L;
static int g_105 = 0xFB3486B6L;
static unsigned char g_107 = 0xE0L;
static unsigned long long g_113 = 0xB2FE49608984295ALL;
static short g_156 = (-6L);
static unsigned long long *g_166 = &g_113;
static unsigned long long **g_165 = &g_166;
static unsigned short g_210 = 0x36E4L;
static unsigned short *g_209 = &g_210;
static long long g_272 = (-6L);
static int g_278 = 0x22381DE4L;
static const unsigned long long *g_289 = &g_113;
static const unsigned long long **g_288 = &g_289;
static const unsigned long long ***g_287 = &g_288;
static unsigned char g_323 = 4UL;
static unsigned g_338 = 0x890D70B6L;
static long long **g_384 = (void*)0;
static long long ***g_383 = &g_384;
static char g_417 = 1L;
static unsigned long long *** const g_418 = &g_165;
static unsigned g_447 = 4294967295UL;
static char g_454 = (-1L);
static unsigned char g_467 = 246UL;
static unsigned short g_482 = 0xD22CL;
static unsigned short g_484 = 0UL;
static short *g_487 = (void*)0;
static short **g_486 = &g_487;
static unsigned g_506 = 1UL;
static const int *g_523 = (void*)0;
static unsigned long long **g_524 = &g_166;
static unsigned short g_615 = 65528UL;
static unsigned short g_636 = 0UL;
static int g_676 = (-6L);
static int *g_680 = &g_105;



static int func_1(void);
static int func_2(int p_3, int p_4);
static unsigned char func_5(const short p_6, char p_7);
static long long func_9(const unsigned p_10);
static short func_20(unsigned short p_21, long long p_22, short p_23);
static unsigned short func_24(long long p_25, int p_26, char p_27, int p_28, unsigned p_29);
static char func_33(short p_34, unsigned p_35, unsigned p_36, unsigned char p_37, int p_38);
static int func_60(unsigned char p_61, unsigned short p_62, long long p_63, int p_64, unsigned short p_65);
static int func_69(unsigned short p_70, unsigned * p_71, unsigned * p_72, char p_73, unsigned p_74);
static int * func_84(int * const p_85, int * p_86, unsigned * p_87);
static int func_1(void)
{
    const unsigned short l_11 = 0xE315L;
    long long ***l_390 = &g_384;
    int *l_699 = &g_8;
    int **l_700 = &l_699;
    unsigned short l_701 = 1UL;
    (*l_699) = func_2((func_5((g_8 , (func_9(l_11) <= (g_383 == ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((l_11 , 1L), (l_11 , (g_272 || ((safe_unary_minus_func_int32_t_s(0x1555576EL)) >= l_11))))) <= 0xAD130623DA9A9F9ELL), 6)) , l_390)))), l_11) || 248UL), g_636);
    (*l_700) = l_699;
    return l_701;
}







static int func_2(int p_3, int p_4)
{
    char l_642 = 0x69L;
    long long *l_650 = &g_272;
    int *l_651 = &g_17;
    int *l_679 = &g_14;
    for (g_338 = 0; (g_338 <= 50); g_338 = safe_add_func_int32_t_s_s(g_338, 4))
    {
        char l_641 = 0L;
        int *l_643 = &g_105;
        int **l_644 = (void*)0;
        int **l_645 = &l_643;
        l_642 = ((safe_lshift_func_int8_t_s_u(p_4, 2)) <= l_641);
        (*l_645) = l_643;
    }
lbl_692:
    (*l_651) = (((safe_mod_func_int16_t_s_s(0L, (safe_lshift_func_uint8_t_u_u(l_642, 2)))) , l_650) == (p_4 , (void*)0));
    for (g_278 = (-25); (g_278 < (-12)); g_278 = safe_add_func_int16_t_s_s(g_278, 7))
    {
        unsigned char *l_672 = &g_107;
        int l_674 = 0xB0482C6FL;
        int *l_693 = &g_17;
        for (g_272 = 0; (g_272 == (-19)); --g_272)
        {
            unsigned char *l_673 = &g_107;
            int *l_675 = &g_676;
            int **l_677 = (void*)0;
            int **l_678 = &l_651;
            int *l_681 = &g_78;
            (*l_651) = 0xB9F8CB36L;
            (*l_681) = (safe_sub_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s(func_20(p_4, (safe_rshift_func_int16_t_s_s(((g_680 = (l_679 = ((*l_678) = ((((*l_651) = p_4) , 1UL) , (((*l_675) = (safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0x3801L, (l_672 == (l_673 = &g_467)))), 14)), 3)), ((*g_75) & (((void*)0 != &g_484) & l_674))))) , &g_8))))) == &g_105), p_4)), l_674), (*g_209))), l_674)), l_642));
            (*l_678) = l_651;
            if (g_272)
                goto lbl_692;
        }
        l_693 = l_679;
        (*l_693) = ((g_486 = (void*)0) != (p_4 , &g_487));
    }
    for (g_8 = 0; (g_8 >= (-16)); g_8--)
    {
        int *l_697 = &g_676;
        int **l_696 = &l_697;
        int l_698 = 0x010882CCL;
        l_696 = l_696;
        l_698 = ((*l_651) , l_698);
        return (*g_680);
    }
    return (*l_679);
}







static unsigned char func_5(const short p_6, char p_7)
{
    long long *l_397 = &g_272;
    int *l_398 = &g_14;
    long long **l_401 = &l_397;
    unsigned long long ***l_413 = &g_165;
    unsigned long long ****l_412 = &l_413;
    char *l_416 = &g_417;
    unsigned long long l_419 = 0x482713B82C50AF9CLL;
    unsigned char l_434 = 0UL;
    unsigned long long l_448 = 0x43BEBD9D387A4150LL;
    unsigned long long l_616 = 0x546B4F29FB610229LL;
    unsigned char l_633 = 0xBEL;
    int **l_635 = &l_398;
    (*l_398) = (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u(18446744073709551615UL, ((safe_sub_func_int64_t_s_s((p_6 || ((*g_75) = (*g_75))), ((p_7 <= ((*l_397) = p_6)) & p_7))) == p_7))) ^ (*g_209)), 3));
    if ((((safe_rshift_func_int16_t_s_u((*l_398), 12)) < func_20((((*g_383) = (l_401 = &l_397)) != (((safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s((3L == func_33((*l_398), (safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s(func_20((*l_398), p_7, ((safe_lshift_func_int8_t_s_s((((*l_412) = &g_165) == ((safe_mod_func_uint16_t_u_u((((*l_416) = (((void*)0 == (*g_287)) | p_6)) ^ (*l_398)), p_6)) , g_418)), 1)) <= p_7)), (*l_398))), (*l_398))), (*g_75), g_272, (*l_398))), 18446744073709551615UL)), g_323)) == (*l_398)) , &l_397)), g_8, p_7)) == p_7))
    {
        int l_420 = 1L;
        int **l_421 = (void*)0;
        int **l_422 = &l_398;
        unsigned *l_489 = &g_338;
        (*l_422) = func_84(((g_76 < (((*l_397) = func_20(l_419, p_7, l_420)) > p_7)) , (void*)0), &g_8, &g_338);
        (**l_422) = (0L || 1L);
        for (g_338 = (-9); (g_338 <= 34); g_338 = safe_add_func_int16_t_s_s(g_338, 4))
        {
            const long long l_431 = (-1L);
            int l_452 = 0x856E9A28L;
            int l_462 = 0x9F9BACBCL;
            unsigned *l_490 = &g_447;
            unsigned **l_491 = &l_490;
            unsigned **l_492 = &g_75;
            for (g_417 = (-12); (g_417 <= (-15)); g_417 = safe_sub_func_int16_t_s_s(g_417, 1))
            {
                long long *l_437 = &g_272;
                int l_438 = 0x1B951BAAL;
                unsigned l_457 = 4294967291UL;
                if (((safe_sub_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((l_431 , (6UL == (((*g_75) = (safe_lshift_func_uint8_t_u_u((((((((*g_75) , l_434) & (p_6 > func_60((safe_div_func_int32_t_s_s(((l_437 != (*g_384)) >= func_60(((((**l_422) = l_438) == ((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((g_17 , 0x5B96C97FDCC1E68BLL), (**g_384))) , l_431), (-1L))), l_431)), (***g_383))) , g_447)) & 0x55L), (*g_209), (**g_384), g_113, (*g_209))), 0x7F9E045AL)), (*g_209), l_448, l_438, (*g_209)))) , 4294967295UL) , (*l_398)) | g_210) , (*l_398)), 6))) < l_448))) > l_438), (*g_166))), g_14)) ^ (***g_287)))
                {
                    unsigned *l_451 = &g_76;
                    l_452 = (!(safe_add_func_int32_t_s_s(((**l_422) = func_9(((*l_451) = (*g_75)))), l_431)));
                }
                else
                {
                    char *l_453 = &g_454;
                    short ***l_488 = &g_486;
                    (**l_422) = (0xB2847284L | (((*l_453) = g_156) & 0x8AL));
                    (**l_422) = (func_33((safe_sub_func_uint16_t_u_u(0x991FL, (((l_457 < func_60(l_452, p_7, func_24(((safe_add_func_uint64_t_u_u((**g_288), (safe_sub_func_uint8_t_u_u(p_7, 250UL)))) , (**l_422)), (l_462 = (((+(*l_398)) <= 0xFDE3L) | 0xEFL)), (**l_422), g_454, p_6), p_6, (*g_209))) | 0L) != g_323))), g_447, (*g_75), g_14, p_7) & 0x08L);
                    if ((((g_338 >= ((0xE99BC534D2820C1FLL & (((*g_75) = 0xA48ED7FBL) > 1L)) != (p_6 <= (p_6 > l_438)))) == (((safe_rshift_func_uint8_t_u_u((p_6 , ((safe_lshift_func_int8_t_s_s(g_78, g_113)) , 255UL)), 0)) > g_467) > p_7)) , p_7))
                    {
                        return p_6;
                    }
                    else
                    {
                        short *l_470 = &g_156;
                        char *l_473 = (void*)0;
                        int l_480 = 0x91BE41BAL;
                        unsigned short *l_481 = &g_482;
                        unsigned short *l_483 = &g_484;
                        int *l_485 = &l_420;
                        (*l_485) = (g_210 == (safe_div_func_int16_t_s_s(((*l_470) = 0x4E6DL), ((safe_div_func_int32_t_s_s(0x2C53F82FL, ((**l_422) = g_210))) || ((*g_75) || ((((**g_165) = (0x9A41F489L || (l_473 != (((~(safe_mod_func_int8_t_s_s((~((*l_453) = ((safe_add_func_int16_t_s_s(g_17, ((*l_483) = ((*l_481) = (safe_add_func_int64_t_s_s((l_480 = (((0x60L & g_323) | p_6) | 0x642D2665L)), 0x4D165CD4AB566C38LL)))))) | 9UL))), g_17))) <= p_7) , &g_417)))) != 0xE345E44BC8077E66LL) == g_107))))));
                    }
                    (*l_488) = g_486;
                }
                (*l_422) = l_398;
            }
            l_398 = func_84(func_84((*l_422), func_84(&g_78, &g_278, l_489), &g_447), (*l_422), ((*l_492) = ((*l_491) = l_490)));
        }
    }
    else
    {
        unsigned long long l_503 = 0UL;
        unsigned *l_504 = (void*)0;
        unsigned *l_505 = &g_506;
        unsigned short l_507 = 65532UL;
        const unsigned char l_508 = 0UL;
        const int l_538 = 0x70BC05A1L;
        int l_574 = 0x98AC883CL;
        (*l_398) = 0x398EA8F6L;
        if (func_60((((*l_398) > (safe_sub_func_int16_t_s_s((p_7 >= (*g_75)), (-1L)))) > (safe_rshift_func_int8_t_s_u((0x01C4L <= ((((func_20(((safe_add_func_uint16_t_u_u(((p_6 | (safe_add_func_int64_t_s_s(p_6, (safe_lshift_func_uint8_t_u_s(((((*l_505) = l_503) , p_6) , g_417), 0))))) , l_507), 0L)) , (*g_209)), p_6, (*l_398)) , g_467) < p_7) < l_508) || 0x1CL)), p_7))), (*l_398), (*l_398), p_7, (*g_209)))
        {
            int *l_539 = &g_17;
            const unsigned long long l_547 = 18446744073709551607UL;
            if ((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(((*l_398) , (func_20(func_9((*g_75)), p_6, p_7) && ((*g_75) , (*l_398)))), (safe_lshift_func_uint8_t_u_u(((0xDF6CL > l_507) , p_7), 7)))), 1UL)) <= 0x44D0L) , 0xDBF3D643L), p_7)), g_272)))
            {
                g_8 = g_278;
            }
            else
            {
                int l_540 = 0xDA14404AL;
                unsigned l_541 = 8UL;
                unsigned *l_557 = (void*)0;
                unsigned l_585 = 0x429E8BBBL;
                for (g_447 = 0; (g_447 != 35); g_447 = safe_add_func_uint64_t_u_u(g_447, 4))
                {
                    const int *l_522 = (void*)0;
                    if (g_447)
                    {
                        int **l_521 = &l_398;
                        (*l_521) = &g_105;
                        if (g_210)
                            continue;
                        (*l_521) = (*l_521);
                    }
                    else
                    {
                        g_523 = l_522;
                    }
                    g_524 = ((**l_412) = (*g_418));
                }
                for (l_419 = 0; (l_419 != 9); l_419++)
                {
                    unsigned **l_528 = (void*)0;
                    unsigned ***l_527 = &l_528;
                    int l_533 = 0xDBFB5375L;
                    (*l_527) = &g_75;
                }
                for (g_484 = 0; (g_484 != 57); g_484++)
                {
                    int *l_578 = &g_14;
                    int **l_586 = &l_578;
                    (*l_586) = func_84(&g_278, l_578, ((*g_75) , func_84(((((*l_398) = ((safe_lshift_func_int8_t_s_u(p_7, 4)) == (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s((*g_209), 5)) || ((*l_539) = p_6)) , g_482), 6)))) & func_60(g_417, (*g_209), l_585, p_7, (*g_209))) , &g_17), l_578, l_557)));
                    for (g_76 = 22; (g_76 <= 37); g_76++)
                    {
                        int l_589 = 0L;
                        return l_589;
                    }
                    return g_467;
                }
                g_105 = l_574;
            }
            for (g_17 = (-12); (g_17 != (-8)); ++g_17)
            {
                long long l_592 = 0xBD8FCF190EE6359CLL;
                int * const l_598 = (void*)0;
                int **l_599 = &l_398;
                int **l_600 = &l_539;
            }
        }
        else
        {
            return g_210;
        }
        (*l_398) = (safe_sub_func_int64_t_s_s((p_6 , l_538), p_7));
    }
    if ((safe_mod_func_uint8_t_u_u((*l_398), 1L)))
    {
        unsigned char l_613 = 0xD8L;
        unsigned char *l_614 = &g_467;
        int l_617 = 0x9CC62D62L;
        int *l_618 = &g_17;
        if ((((*g_209) = (safe_sub_func_int32_t_s_s(func_24((**g_384), ((*l_618) = ((((*l_614) = (p_6 >= (safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s(((((!(safe_mod_func_int32_t_s_s((((((*l_398) = l_613) <= ((func_24((g_615 = func_60(((*l_614) = l_613), p_6, (**g_384), p_7, (((*g_75) | p_6) < p_6))), l_616, g_506, l_613, p_7) ^ p_7) | p_7)) , g_278) ^ g_338), p_7))) | 0x2B60L) <= (**g_165)) , (*l_398)), l_617)), 0xCD4FB64406B3DE0CLL)))) == 255UL) , p_6)), p_6, g_76, g_482), p_7))) & 0xA9D3L))
        {
            g_523 = (void*)0;
        }
        else
        {
            int *l_619 = &g_78;
            int **l_620 = (void*)0;
            int **l_621 = (void*)0;
            int **l_622 = (void*)0;
            int **l_623 = &l_618;
            int **l_624 = (void*)0;
            int *l_626 = &g_14;
            int **l_625 = &l_626;
            unsigned short *l_631 = &g_615;
            g_523 = func_84(func_84(&g_105, l_619, l_398), ((*l_625) = ((*l_623) = l_618)), &g_447);
            (*l_398) = (((*g_75) > p_6) != (((*g_209) != func_20(((*l_631) = (safe_mod_func_int64_t_s_s(((***g_383) = (**g_384)), (safe_mod_func_uint32_t_u_u(0xA5D26FD4L, (*g_75)))))), p_7, p_6)) & 0x948EF92FL));
            (*l_623) = (*l_623);
        }
        return g_484;
    }
    else
    {
        int **l_632 = &l_398;
        unsigned **l_634 = &g_75;
        (*l_632) = l_398;
        (*l_632) = func_84((*l_632), &g_78, ((l_633 , p_7) , ((*l_634) = func_84(&g_17, &g_8, ((*l_634) = &g_447)))));
    }
    (*l_635) = &g_278;
    return (*l_398);
}







static long long func_9(const unsigned p_10)
{
    char l_40 = 1L;
    unsigned *l_337 = &g_338;
    int l_340 = 1L;
    short l_348 = 6L;
    long long *l_382 = &g_272;
    for (g_8 = 4; (g_8 < 4); g_8++)
    {
        unsigned l_30 = 0xD40A1650L;
        unsigned *l_335 = (void*)0;
        unsigned *l_336 = (void*)0;
        short *l_377 = &g_156;
        int *l_380 = &g_78;
        int *l_381 = &g_278;
        for (g_14 = (-6); (g_14 <= 14); g_14++)
        {
            int *l_321 = &g_17;
            unsigned char *l_347 = &g_107;
            for (g_17 = 0; (g_17 != (-10)); g_17 = safe_sub_func_int16_t_s_s(g_17, 1))
            {
                char l_39 = 0x8AL;
                unsigned char *l_322 = &g_323;
                unsigned *l_324 = &g_76;
                int *l_333 = (void*)0;
                int *l_334 = &g_78;
                int **l_339 = &l_333;
                (*l_334) = (func_20(func_24(l_30, ((((*l_324) = ((safe_lshift_func_uint16_t_u_u(((*g_209) = (func_33(g_8, g_14, g_17, l_39, l_40) != (((*l_322) = ((void*)0 == l_321)) ^ p_10))), 11)) , p_10)) , g_323) , g_107), l_40, g_17, l_30), p_10, l_30) > (-7L));
                (*l_339) = func_84(func_84(func_84(l_334, l_321, l_335), l_321, l_336), l_321, (((0x54563BECL >= 0L) , 0x1A16L) , l_337));
                l_340 = 0xB41CB995L;
            }
            if (((((+func_24(g_78, (p_10 > (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(func_20((*l_321), ((safe_div_func_uint8_t_u_u((0xBC9ECE6EL | p_10), ((*l_347) = (func_60(g_76, p_10, g_338, ((p_10 & (-1L)) ^ g_14), p_10) , p_10)))) , 6L), l_348), g_78)) == 0x4FA2660A1730DD10LL), 5))), p_10, (*l_321), (*l_321))) , l_30) == p_10) , 1L))
            {
                unsigned char l_351 = 1UL;
                short *l_362 = &g_156;
                (*l_321) = 0x83A5459DL;
                (*l_321) = func_24(l_30, ((safe_mod_func_int64_t_s_s(((l_340 < (((func_33(p_10, l_351, ((safe_mod_func_int32_t_s_s(((*l_321) = g_272), ((*g_75) = (l_30 , ((safe_sub_func_uint64_t_u_u(((**g_165) = (safe_mod_func_uint16_t_u_u(((((safe_mod_func_int32_t_s_s(p_10, (((safe_mod_func_uint16_t_u_u(0xBCD3L, ((*l_362) = (+(&g_287 != (void*)0))))) , 65535UL) & (*g_209)))) , l_351) | 0x03L) <= p_10), 0xFE1DL))), p_10)) ^ l_351))))) > l_340), g_338, p_10) & l_30) , g_76) , g_76)) , 1L), p_10)) || 0xDDL), l_348, g_323, p_10);
                return g_17;
            }
            else
            {
                return p_10;
            }
        }
        (*l_381) = ((*l_380) = (safe_div_func_uint8_t_u_u(p_10, (safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((p_10 <= (safe_mod_func_int64_t_s_s(((~(((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((g_105 & (((*l_377) = g_107) , ((func_60((safe_lshift_func_uint8_t_u_u(0x81L, 6)), (*g_209), l_30, l_340, p_10) || p_10) < p_10))), p_10)), l_40)) || (*g_209)) | 0x82L)) > 1L), 18446744073709551612UL))) & 0x70L), p_10)), p_10)), p_10)))));
    }
    (*g_287) = ((!(l_382 != l_382)) , (*g_287));
    return p_10;
}







static short func_20(unsigned short p_21, long long p_22, short p_23)
{
    int * const l_325 = &g_17;
    int *l_326 = (void*)0;
    long long *l_329 = &g_272;
    long long **l_328 = &l_329;
    long long ***l_327 = &l_328;
    long long ****l_330 = &l_327;
    int *l_332 = &g_17;
    int **l_331 = &l_332;
    (*l_331) = (*l_331);
    return (*l_325);
}







static unsigned short func_24(long long p_25, int p_26, char p_27, int p_28, unsigned p_29)
{
    return (*g_209);
}







static char func_33(short p_34, unsigned p_35, unsigned p_36, unsigned char p_37, int p_38)
{
    unsigned l_53 = 0x3ED423CBL;
    unsigned *l_66 = &l_53;
    unsigned l_214 = 1UL;
    int l_216 = 0L;
    unsigned l_245 = 0xAF18482CL;
    int *l_284 = &g_105;
    unsigned long long ***l_285 = &g_165;
    unsigned long long ***l_286 = &g_165;
    const unsigned long long ****l_290 = (void*)0;
    const unsigned long long ****l_291 = &g_287;
    long long *l_304 = (void*)0;
    if (((((p_34 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((**g_165) = ((safe_rshift_func_int8_t_s_u(((((*g_209) = (safe_div_func_int32_t_s_s((l_53 , (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s(3L, ((((l_216 = func_60(g_8, (((*l_66) = 1UL) , ((*g_209) = ((0UL ^ g_14) == (safe_mod_func_uint32_t_u_u(l_53, (func_69(g_8, g_75, &g_76, p_37, p_37) || l_214)))))), p_37, l_214, l_214)) & 0xF7408670L) || g_76) & p_34))), g_8)), 3))), g_17))) == p_35) == l_214), l_214)) <= 1L)), g_156)), (-1L))), 11)), g_14))) , (-5L)) | 0x77L) & p_35))
    {
        short l_217 = 0x2AEEL;
        unsigned **l_218 = &g_75;
        int *l_219 = &l_216;
        (*l_219) = ((l_217 , &p_36) != ((*l_218) = &g_76));
    }
    else
    {
        unsigned *l_220 = &l_53;
        const int *l_222 = (void*)0;
        const int **l_221 = &l_222;
        const int *l_224 = (void*)0;
        const int **l_223 = &l_224;
        long long *l_271 = &g_272;
        long long **l_270 = &l_271;
        long long ***l_273 = &l_270;
        int *l_283 = &l_216;
        (*l_223) = ((*l_221) = func_84(func_84(&l_216, &g_78, l_220), &g_17, g_75));
        for (g_107 = (-29); (g_107 < 19); g_107 = safe_add_func_int64_t_s_s(g_107, 6))
        {
            int l_227 = 0x195B5E54L;
            int *l_228 = &l_216;
            unsigned long long l_248 = 1UL;
            int l_257 = 2L;
            int *l_269 = &g_17;
            (*l_228) = ((*g_209) | ((**g_165) , l_227));
            for (l_214 = (-12); (l_214 == 51); l_214++)
            {
                short l_246 = 8L;
                long long l_247 = 0x3AA76F27FDA64624LL;
                for (g_156 = 0; (g_156 >= 11); g_156++)
                {
                    unsigned char *l_241 = (void*)0;
                    int l_242 = 1L;
                    long long *l_249 = &l_247;
                    (*l_228) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((g_210 , func_60(func_60((p_38 , (safe_sub_func_uint8_t_u_u(0x6DL, (+((safe_lshift_func_int8_t_s_u(((g_8 , l_241) == &p_37), l_242)) > ((safe_sub_func_int8_t_s_s((l_245 == ((l_246 && l_214) != g_14)), 0x33L)) || l_247)))))), p_38, g_8, l_248, (*g_209)), (*g_209), g_105, l_245, (*l_228))), 6)), (-4L)));
                    (*l_221) = ((((+18446744073709551615UL) & ((*l_249) = 0L)) != (((**g_165) = (safe_unary_minus_func_uint32_t_u(l_53))) && p_34)) , &g_17);
                    return p_35;
                }
            }
            (*l_228) = (safe_div_func_int16_t_s_s(l_53, (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_257 & (safe_unary_minus_func_int8_t_s((safe_sub_func_int32_t_s_s(0x89EFA381L, g_14))))), (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(func_60(func_60((*l_228), p_36, (func_60(g_210, p_34, ((((((safe_lshift_func_int8_t_s_s(func_60(p_34, (*g_209), g_107, p_35, (*g_209)), 3)) > g_14) , l_214) != 0L) == p_35) & p_35), (*l_222), p_34) , 0xADC8AFE7F47FA05CLL), g_156, p_35), p_34, p_35, p_36, (*g_209)), 1)), (*l_222))), g_107)))), 2))));
            (*l_223) = l_269;
        }
        (*l_273) = l_270;
        (*l_283) = (((safe_rshift_func_int8_t_s_s((g_278 = ((safe_add_func_uint16_t_u_u(((g_8 | 0x70L) ^ (!g_105)), (g_156 == (**l_221)))) <= g_210)), 0)) != ((((((safe_rshift_func_int16_t_s_u(g_76, ((((*l_66) = (safe_rshift_func_uint8_t_u_u((!((&g_156 != (void*)0) != (*g_75))), 4))) , (void*)0) != &g_210))) <= 0xF8L) , 0xA1L) != (*l_224)) | (**l_223)) && p_35)) , g_14);
    }
    l_284 = &g_14;
    if ((p_34 == func_69((*l_284), &g_76, &g_76, ((l_286 = l_285) == ((*l_291) = (((*g_209) = p_37) , g_287))), (func_69((safe_mod_func_int16_t_s_s(8L, p_37)), &g_76, &g_76, g_78, (*g_75)) ^ p_35))))
    {
        int **l_294 = &l_284;
        (*l_294) = func_84(&g_17, &p_38, &g_76);
    }
    else
    {
        int l_299 = 0x778705FFL;
        unsigned char *l_311 = (void*)0;
        unsigned char *l_312 = &g_107;
        int *l_317 = &g_17;
        p_38 = (safe_add_func_int8_t_s_s(0x2AL, ((**g_165) & 0xAB49656563EE52D5LL)));
        if ((((0x92L == (safe_rshift_func_int16_t_s_s(l_299, (safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s((l_304 == l_304), ((*l_312) = (safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(func_60(((*l_312) = p_35), ((*g_209) = ((**g_288) & g_272)), (l_299 == (safe_mod_func_int16_t_s_s((l_299 || 4294967295UL), (*l_284)))), p_35, (*l_284)), p_38)), 0xC9473A2E64CDA43ALL)), (*l_284)))))) , 4L), 0xA373L))))) != (*l_284)) == l_299))
        {
            return p_34;
        }
        else
        {
            unsigned short l_315 = 1UL;
            int * const l_316 = &g_8;
            unsigned **l_318 = &g_75;
            int *l_319 = &g_105;
            int **l_320 = &l_317;
            (*l_319) = (*l_316);
            (*l_320) = func_84(func_84(&g_17, func_84(&p_38, l_317, &g_76), (*l_318)), &p_38, &p_36);
            l_319 = ((*l_320) = &l_216);
            (*l_320) = &g_278;
        }
    }
    return g_272;
}







static int func_60(unsigned char p_61, unsigned short p_62, long long p_63, int p_64, unsigned short p_65)
{
    int *l_215 = &g_78;
    l_215 = &g_78;
    return g_156;
}







static int func_69(unsigned short p_70, unsigned * p_71, unsigned * p_72, char p_73, unsigned p_74)
{
    int *l_77 = &g_78;
    const char l_83 = (-1L);
    int * const l_88 = &g_14;
    int *l_117 = &g_78;
    int **l_116 = &l_117;
    unsigned l_200 = 0xC5E220DBL;
    (*l_77) = p_73;
    (*l_77) = (((*l_77) , ((g_8 | (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_74, 1)), l_83))) , (void*)0)) == ((*l_116) = func_84(l_88, p_72, l_77)));
    (*l_77) = g_78;
    if (g_8)
    {
        int l_129 = 0x47FC0BD7L;
        int l_141 = 0x1537C3E8L;
        int **l_183 = &l_77;
        for (g_107 = 0; (g_107 <= 4); g_107 = safe_add_func_uint32_t_u_u(g_107, 3))
        {
            (*l_116) = &g_78;
        }
        for (g_105 = 17; (g_105 <= (-16)); g_105 = safe_sub_func_uint64_t_u_u(g_105, 1))
        {
            unsigned l_135 = 0xBD359D2DL;
            unsigned l_140 = 0x30F0864FL;
            int *l_187 = &g_78;
            if (g_105)
                break;
            for (p_70 = 0; (p_70 >= 8); p_70 = safe_add_func_uint8_t_u_u(p_70, 6))
            {
                unsigned l_124 = 4294967286UL;
                unsigned char *l_130 = &g_107;
                unsigned long long *l_144 = &g_113;
                unsigned long long **l_143 = &l_144;
                unsigned short l_168 = 0x4BD3L;
                l_124 = (~(p_70 == 0xBA14L));
            }
            for (l_141 = 14; (l_141 != (-8)); l_141--)
            {
                short l_177 = (-7L);
                int *l_195 = &g_17;
            }
            for (g_113 = 0; (g_113 > 55); g_113 = safe_add_func_uint32_t_u_u(g_113, 1))
            {
                (*l_117) = 0x9B42ED19L;
            }
        }
    }
    else
    {
        int *l_203 = &g_105;
        if (p_70)
        {
            (**l_116) = (safe_sub_func_int8_t_s_s(l_200, g_14));
        }
        else
        {
            int *l_206 = &g_78;
            for (p_70 = 0; (p_70 <= 6); ++p_70)
            {
                int *l_207 = &g_17;
                l_203 = &g_8;
                for (g_76 = 0; (g_76 < 57); g_76 = safe_add_func_int16_t_s_s(g_76, 3))
                {
                    int *l_211 = &g_8;
                    l_203 = (void*)0;
                    if (p_74)
                    {
                        int *l_208 = (void*)0;
                        l_206 = &g_78;
                        l_208 = ((*l_116) = l_207);
                        (*l_77) = ((-2L) != p_74);
                        (*l_77) = (g_209 != &g_210);
                    }
                    else
                    {
                        (*l_116) = p_72;
                    }
                    (*l_116) = l_211;
                    for (g_107 = 2; (g_107 <= 46); g_107 = safe_add_func_uint16_t_u_u(g_107, 1))
                    {
                        if (g_14)
                            break;
                    }
                }
            }
        }
    }
    return p_70;
}







static int * func_84(int * const p_85, int * p_86, unsigned * p_87)
{
    const char l_91 = 6L;
    unsigned l_108 = 0x5A4AAC46L;
    for (g_76 = (-20); (g_76 <= 19); g_76 = safe_add_func_uint32_t_u_u(g_76, 3))
    {
        const unsigned long long l_92 = 0UL;
        unsigned *l_99 = &g_76;
        unsigned **l_100 = &l_99;
        int *l_103 = (void*)0;
        int *l_104 = &g_105;
        unsigned char *l_106 = &g_107;
        int **l_109 = &l_104;
        unsigned long long *l_112 = &g_113;
        (*l_109) = (((l_91 >= l_92) >= (safe_sub_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(((((*l_100) = l_99) == &g_76) == (((*l_106) = ((l_91 , p_86) != ((safe_add_func_uint8_t_u_u(l_92, ((((*l_104) = l_92) , (void*)0) != p_85))) , &g_76))) == l_91)), g_14)) < l_108) ^ l_92), 3UL))) , &g_105);
        (*l_104) = (((*p_86) <= (safe_div_func_int16_t_s_s(l_91, (((-9L) ^ g_76) & (l_108 , (((7UL <= ((*l_112) = (g_105 , g_8))) , (g_14 && l_91)) , (-1L))))))) <= g_76);
        if ((**l_109))
            continue;
        for (l_108 = 2; (l_108 != 47); l_108 = safe_add_func_int64_t_s_s(l_108, 7))
        {
            (*l_109) = &g_78;
            if (g_113)
                break;
        }
    }
    return p_86;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
