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



static long long g_17 = 0x5751CFD1F2E96673LL;
static unsigned long long g_35 = 1UL;
static int g_48 = 0x5F1BB130L;
static int g_62 = 0x56E3F0E2L;
static int *g_63 = &g_62;
static int g_78 = (-1L);
static int g_81 = (-8L);
static unsigned char g_85 = 0xB2L;
static const int *g_96 = (void*)0;
static unsigned short g_114 = 65529UL;
static unsigned g_116 = 0x0AF1AAC2L;
static char g_120 = 0x2EL;
static unsigned long long *g_176 = &g_35;
static short g_187 = 0xB9F3L;
static short *g_186 = &g_187;
static long long g_200 = 0x954584B11E5EC640LL;
static unsigned long long g_213 = 0x61F60A75A90C89A7LL;
static long long g_230 = 0L;
static int g_233 = (-1L);
static unsigned short g_268 = 0xD41CL;
static unsigned char g_285 = 0x3FL;
static short g_317 = 0xF389L;
static unsigned long long g_320 = 0xE549275E4F8D4590LL;
static char g_338 = 1L;
static long long *g_347 = &g_17;
static long long **g_346 = &g_347;
static long long ***g_345 = &g_346;
static long long ****g_344 = &g_345;
static long long ** const *g_581 = &g_346;
static long long ** const **g_580 = &g_581;
static long long ** const ***g_579 = &g_580;
static const unsigned long long *g_596 = &g_213;
static const unsigned long long **g_595 = &g_596;
static const unsigned long long *** const g_594 = &g_595;
static volatile unsigned g_626 = 0x42B9A9A6L;
static short **g_646 = &g_186;
static short ***g_645 = &g_646;
static short ****g_644 = &g_645;
static unsigned long long *g_660 = &g_320;
static unsigned long long *g_703 = &g_213;
static const long long g_712 = 0x81B984EC3739E111LL;
static const long long * const * const *g_720 = (void*)0;
static const long long * const * const **g_719 = &g_720;
static short * const ****g_737 = (void*)0;
static unsigned long long g_759 = 18446744073709551611UL;
static int **g_817 = &g_63;
static volatile unsigned g_853 = 0x2520063BL;
static volatile unsigned *g_852 = &g_853;
static volatile unsigned * const *g_851 = &g_852;
static long long *****g_858 = &g_344;
static long long *****g_860 = (void*)0;
static const int g_880 = 0x7314D967L;
static const int *g_879 = &g_880;
static int g_883 = 0x07E671BEL;
static unsigned short g_885 = 0x05F6L;
static unsigned short g_927 = 65535UL;
static unsigned long long g_986 = 18446744073709551609UL;
static int *g_987 = &g_233;



static unsigned long long func_1(void);
static int func_2(char p_3);
static long long func_7(int p_8);
static int func_9(const short p_10, unsigned short p_11, unsigned short p_12);
static int func_15(unsigned p_16);
static const unsigned short func_31(unsigned long long p_32);
static int func_40(unsigned char p_41, unsigned long long * p_42, short p_43, int p_44);
static unsigned char func_45(const short p_46);
static unsigned long long * func_49(int * p_50, unsigned long long * p_51);
static int * func_52(short p_53, unsigned long long * p_54);
static unsigned long long func_1(void)
{
    unsigned short l_6 = 0UL;
    const int **l_881 = &g_879;
    int *l_882 = &g_883;
    unsigned short *l_884 = &g_885;
    short l_886 = 2L;
    int l_888 = 0xB67EA3C2L;
    int **l_988 = (void*)0;
    int **l_989 = &g_63;
    g_986 |= (func_2((0xBCL < (safe_mod_func_int64_t_s_s(l_6, func_7((l_888 = func_9((safe_add_func_uint8_t_u_u((func_15(g_17) < (safe_sub_func_int8_t_s_s(l_6, ((safe_mul_func_int16_t_s_s(l_6, (safe_sub_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(((*l_884) = (safe_mod_func_int16_t_s_s((((g_759 , 0xB4C58D0CL) , ((*l_881) = g_879)) != l_882), 0x4D1BL))), 0L)) != 0x320AEC6F41DDD280LL), 0xD86AF9B8DF395CAFLL)))) & l_886)))), 0xFBL)), l_886, g_759))))))) < 0x465A0BDEL);
    (*l_989) = g_987;
    return (***g_594);
}







static int func_2(char p_3)
{
    int *l_943 = &g_81;
    long long **l_953 = &g_347;
    int *l_960 = (void*)0;
    unsigned short l_961 = 0UL;
    unsigned *l_962 = &g_116;
    short *l_963 = &g_317;
    const long long *l_970 = &g_712;
    const long long **l_969 = &l_970;
    const long long ***l_968 = &l_969;
    const long long ****l_967 = &l_968;
    const long long *****l_966 = &l_967;
    const long long ******l_965 = &l_966;
    const long long *******l_964 = &l_965;
    unsigned long long l_982 = 9UL;
    (*l_943) = 0x5F35CBCFL;
    l_943 = l_943;
    if ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(func_45((*l_943)), ((****g_644) = (safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s(((func_9(((*l_963) ^= (((*l_962) = (func_9((safe_lshift_func_uint8_t_u_u((*l_943), (l_953 == ((safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((0xBD063E818AA37B67LL < 0x1AA612774E43D7AFLL), ((((*g_879) , (l_960 == (void*)0)) | (****g_644)) < 1UL))), 0)) < p_3) | l_961), (*l_943))) , (void*)0)))), (*l_943), g_285) , 1UL)) , 0x8567L)), g_17, g_213) , l_964) == &l_965))) >= p_3), 255UL))))) , p_3), 0x0AD5FDD3L)))
    {
        int **l_971 = &g_63;
        int *l_974 = (void*)0;
        unsigned char *l_977 = &g_85;
        unsigned long long *l_980 = &g_213;
        unsigned long long **l_981 = &g_176;
        int l_983 = 0x700F24EBL;
        (*l_971) = (void*)0;
        (*l_943) = ((l_983 ^= (((safe_rshift_func_int8_t_s_u((1UL ^ ((((void*)0 == l_974) & (((safe_lshift_func_uint8_t_u_s(((*l_977) |= p_3), 4)) , (func_45((p_3 ^ (safe_lshift_func_int16_t_s_u(func_31((((*g_347) |= ((*l_943) , p_3)) >= p_3)), 1)))) || 65535UL)) , p_3)) == p_3)), g_853)) >= p_3) == p_3)) && 0xE94C8989E315B89BLL);
        for (p_3 = 0; (p_3 <= 5); ++p_3)
        {
            (*l_971) = l_960;
        }
        return (*l_943);
    }
    else
    {
        return (*l_943);
    }
}







static long long func_7(int p_8)
{
    int *l_889 = &g_78;
    int **l_890 = (void*)0;
    int **l_891 = &g_63;
    unsigned l_924 = 0x94CDB9D8L;
    short l_926 = 0x5958L;
    long long **** const *l_935 = (void*)0;
    long long **** const **l_934 = &l_935;
    unsigned char *l_938 = &g_285;
    unsigned char **l_939 = &l_938;
    unsigned char * const l_940 = &g_285;
    int l_941 = 0xEEEE03CBL;
    unsigned char l_942 = 1UL;
    (*l_891) = l_889;
    for (g_320 = 3; (g_320 <= 47); g_320++)
    {
        unsigned long long ** const *l_896 = (void*)0;
        char *l_900 = (void*)0;
        int l_923 = 1L;
        int l_928 = 0xFA2077D1L;
        const long long l_931 = 0xEE5EBDF24184DE06LL;
        for (g_120 = 0; (g_120 > 8); ++g_120)
        {
            unsigned char *l_897 = &g_285;
            char *l_902 = &g_120;
            char **l_901 = &l_902;
            int l_925 = 0xD7CD2C43L;
            long long ******l_933 = &g_860;
            long long *******l_932 = &l_933;
            l_928 &= ((g_927 = (((-7L) || (((*l_897) = (l_896 == (void*)0)) || (((safe_lshift_func_int8_t_s_s(((l_900 != ((*l_901) = (void*)0)) ^ 3UL), (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(func_45(((func_9(p_8, (l_926 &= (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(0x9E84L, (((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(((**g_646) &= (safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(l_923, (**g_595))), l_923))), l_924)), p_8)) > p_8) <= 4294967289UL))), p_8)), l_925))), (*l_889)) || (*l_889)) , 0x2DF0L)), 0xFAL)), g_233)), (-1L))))) ^ (-3L)) , l_925))) | (*g_63))) >= p_8);
            (**l_891) &= (safe_mul_func_uint8_t_u_u((((func_9(func_45(l_931), (l_925 , g_17), p_8) , (*g_344)) == (void*)0) && (((((*l_932) = &g_858) != l_934) | l_931) && p_8)), 255UL));
        }
    }
    p_8 |= (l_941 &= func_31((safe_sub_func_int8_t_s_s((((*l_939) = l_938) != l_940), ((*l_940) ^= (((*l_889) != (0x9BF8680DL | (**l_891))) != 0xD132EA18L))))));
    return l_942;
}







static int func_9(const short p_10, unsigned short p_11, unsigned short p_12)
{
    unsigned l_887 = 4294967295UL;
    return l_887;
}







static int func_15(unsigned p_16)
{
    unsigned short l_273 = 0xE18AL;
    int l_281 = 0xC89E3CC8L;
    short l_351 = (-1L);
    int *l_379 = &g_233;
    const unsigned short l_402 = 0UL;
    short * const *l_403 = &g_186;
    int *l_406 = &g_81;
    int **l_407 = &l_379;
    short **l_408 = &g_186;
    short **l_410 = &g_186;
    short ***l_409 = &l_410;
    long long l_465 = 0xC9904DF4DB6B3961LL;
    long long * const ** const **l_558 = (void*)0;
    long long ** const ***l_583 = &g_580;
    const unsigned long long l_588 = 4UL;
    long long ****l_640 = &g_345;
    unsigned l_692 = 0x131163BDL;
    unsigned long long *l_696 = &g_320;
    const long long *l_711 = &g_712;
    const long long **l_710 = &l_711;
    const long long ***l_709 = &l_710;
    const long long ****l_708 = &l_709;
    unsigned l_753 = 1UL;
    short *****l_821 = &g_644;
    for (g_17 = 0; (g_17 != (-4)); g_17 = safe_sub_func_int32_t_s_s(g_17, 2))
    {
        unsigned short l_237 = 0x57CCL;
        int l_239 = (-4L);
        unsigned char *l_352 = &g_285;
        unsigned long long *l_385 = &g_213;
        int l_389 = 0xDCD832BEL;
        for (p_16 = 13; (p_16 <= 28); p_16++)
        {
            const int l_33 = 0xE0CD9796L;
            int l_236 = 1L;
            long long *l_252 = &g_200;
            long long **l_251 = &l_252;
            long long ***l_250 = &l_251;
        }
        for (g_285 = 0; (g_285 == 14); ++g_285)
        {
            int l_361 = 0xEEC6CABBL;
            unsigned long long *l_404 = (void*)0;
            l_281 &= (*g_63);
            if ((l_351 & ((void*)0 == l_352)))
            {
                unsigned char l_368 = 0xC7L;
                short **l_374 = &g_186;
                int **l_386 = &l_379;
                for (g_320 = (-9); (g_320 > 11); g_320++)
                {
                    unsigned short *l_367 = &l_237;
                    unsigned short **l_366 = &l_367;
                    char *l_369 = &g_120;
                    short *l_370 = (void*)0;
                    short *l_371 = &l_351;
                    char *l_372 = &g_338;
                    int *l_373 = &l_281;
                    (*l_373) &= (((((*l_372) = (safe_mod_func_uint16_t_u_u(p_16, ((*l_371) = (safe_add_func_int16_t_s_s(((*g_186) = (safe_sub_func_int64_t_s_s((p_16 > ((l_361 |= p_16) , (((*l_369) = (+(func_31((safe_div_func_uint32_t_u_u(((5UL <= g_268) >= g_338), p_16))) >= (safe_add_func_int16_t_s_s((((*l_366) = &g_268) != (void*)0), l_368))))) == 0xEDL))), p_16))), p_16)))))) , l_368) , l_273) , 0xD013F6FBL);
                    if (l_281)
                        continue;
                }
                if (((void*)0 == l_374))
                {
                    int **l_376 = (void*)0;
                    int ***l_375 = &l_376;
                    int **l_378 = &g_63;
                    int ***l_377 = &l_378;
                    (*l_377) = ((*l_375) = &g_63);
                    l_379 = &g_62;
                }
                else
                {
                    unsigned long long * const *l_380 = &g_176;
                    unsigned long long * const **l_381 = &l_380;
                    unsigned long long * const *l_383 = &g_176;
                    unsigned long long * const **l_382 = &l_383;
                    int **l_384 = &g_63;
                    (*l_382) = ((*l_381) = l_380);
                    (*l_384) = &l_281;
                }
                (*l_386) = func_52(p_16, l_385);
            }
            else
            {
                unsigned *l_399 = &g_116;
                int *l_400 = (void*)0;
                int l_401 = 1L;
                if ((((safe_lshift_func_int16_t_s_s(((~func_45((*g_186))) >= (((l_389 |= p_16) & (g_233 , ((*l_385) = (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(g_338, ((l_401 = ((safe_unary_minus_func_int8_t_s(((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((((l_361 |= g_116) | (p_16 || 0x237EL)) , ((*l_399) = 0x7A44D734L)) < p_16) ^ g_320), g_317)), (*g_63))) == p_16))) != g_85)) , g_268))) & (*g_186)), 8))))) , 0x3065EFAEL)), 10)) , l_402) == p_16))
                {
                    if (l_389)
                    {
                        l_389 ^= (func_45(p_16) & 18446744073709551609UL);
                    }
                    else
                    {
                        return p_16;
                    }
                }
                else
                {
                    int **l_405 = &g_63;
                    (*l_405) = &g_78;
                }
                if (p_16)
                    break;
            }
        }
        (*l_379) = (p_16 < 7L);
    }
    (*l_407) = l_406;
    if ((l_408 == ((*l_409) = &g_186)))
    {
        unsigned l_421 = 0xFE3639EFL;
        unsigned char *l_422 = &g_85;
        int l_423 = 0xA02E1FFBL;
        char *l_424 = &g_120;
        char l_439 = 0x79L;
        long long ***l_479 = &g_346;
        unsigned long long *l_564 = &g_320;
        long long ** const ****l_582 = (void*)0;
        if (((((*l_422) = (safe_div_func_uint32_t_u_u((((*g_176) = (*l_406)) <= (***g_345)), (safe_mul_func_int16_t_s_s(p_16, (+(l_421 ^= ((***l_409) = (safe_sub_func_uint8_t_u_u(func_45((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(g_268, 7)), 9))), (**l_407))))))))))) | ((*l_424) |= (l_423 , g_116))) ^ ((****g_344) , (**l_407))))
        {
            unsigned short l_427 = 65535UL;
            char l_432 = (-1L);
            int l_433 = (-8L);
            unsigned l_434 = 1UL;
            unsigned long long *l_435 = &g_35;
            int l_436 = 0x45664DC4L;
            l_436 ^= ((l_423 & (func_40((safe_mul_func_int8_t_s_s((l_427 , ((~p_16) && 1UL)), (safe_mul_func_int8_t_s_s(g_285, ((((~(safe_lshift_func_int8_t_s_u((l_433 = l_432), 5))) ^ (l_434 , (((void*)0 != l_406) , 0xAD93C50DL))) , l_427) && l_421))))), l_435, (*g_186), g_200) | 0x2B8CC00561AD3514LL)) != 0x3EL);
        }
        else
        {
            long long l_444 = 0x28F465AA627CF50BLL;
            int *l_454 = &g_48;
            int l_525 = 0xE1749142L;
            long long * const **l_530 = (void*)0;
            long long ** const *l_546 = (void*)0;
            long long ** const **l_545 = &l_546;
            if ((safe_rshift_func_int16_t_s_s((l_439 &= ((*g_186) = (*g_186))), ((((safe_lshift_func_uint8_t_u_u(((l_423 <= l_444) ^ ((0UL >= 0x85948F3D50A5C854LL) == ((safe_mod_func_uint64_t_u_u(p_16, ((safe_sub_func_int32_t_s_s(func_45(l_444), p_16)) || 0L))) <= 0UL))), g_62)) <= l_421) , (void*)0) != (void*)0))))
            {
                int *l_458 = &g_78;
                long long ** const ***l_547 = (void*)0;
                long long ** const ***l_548 = &l_545;
                long long * const l_563 = (void*)0;
                long long * const *l_562 = &l_563;
                long long * const ** const l_561 = &l_562;
                long long * const ** const *l_560 = &l_561;
                long long * const ** const **l_559 = &l_560;
                (**l_407) = (p_16 , l_444);
                if ((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s(g_285)), (g_320 <= ((*l_424) = 6L)))))
                {
                    int *l_455 = &g_62;
                    unsigned l_492 = 0xE607DF8CL;
                    unsigned short *l_501 = &l_273;
                    for (g_17 = (-17); (g_17 == (-7)); g_17++)
                    {
                        l_455 = l_454;
                    }
                    for (g_230 = 0; (g_230 >= (-3)); g_230 = safe_sub_func_int16_t_s_s(g_230, 7))
                    {
                        const int l_476 = 0x5B1A384FL;
                        unsigned short *l_477 = &g_268;
                        long long ***l_478 = &g_346;
                        unsigned char *l_480 = &g_285;
                        int l_481 = 4L;
                        int l_490 = (-7L);
                        unsigned char l_491 = 0x30L;
                        (*l_407) = l_458;
                        (*g_63) = ((((*l_424) = func_45(((g_17 , (safe_div_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((9UL >= (l_481 = (0x7BE0L == (safe_rshift_func_int16_t_s_u((((**g_346) = (((&g_63 == (l_465 , &g_96)) || 0x4CL) , (safe_mul_func_uint8_t_u_u(((*l_480) = (((!(safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((((*l_422) = func_45(((safe_mul_func_uint16_t_u_u(((*l_477) = (safe_mul_func_int8_t_s_s((p_16 && l_476), g_338))), (*g_186))) , 0x6DF5L))) < g_62) , p_16), 0L)), 11))) , l_478) != l_479)), p_16)))) <= 0xE45F63D8A5B50741LL), g_78))))), g_81)) , p_16) || g_187), p_16))) & 7L))) , p_16) , (*l_454));
                        (*l_379) = (l_476 < (safe_lshift_func_int16_t_s_u(((*g_63) >= (((*g_176) < (***g_345)) || (safe_div_func_int32_t_s_s((*l_454), ((safe_div_func_int8_t_s_s((!((g_85 , p_16) == (((((*g_176) , l_490) <= 0x1FFF403BL) , p_16) >= 0xF0D8E3BEL))), 0x86L)) , (*l_454)))))), l_491)));
                        (*l_458) |= (0xFE7A2C516A158D93LL > l_492);
                    }
                    if ((((*g_176) = ((safe_mul_func_int16_t_s_s(0xD75AL, (g_114 = g_116))) < (safe_sub_func_uint8_t_u_u(0xBCL, g_17)))) < (safe_sub_func_uint64_t_u_u(18446744073709551609UL, ((safe_mod_func_uint32_t_u_u((((((*l_501) = g_62) & ((safe_add_func_int16_t_s_s((*g_186), (*l_454))) , (safe_div_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((*l_454), g_268)) && g_120), (*g_186))))) <= 0x9B7DB8FEL) == 0x3AL), g_116)) && (*g_186))))))
                    {
                        int l_524 = (-1L);
                        const int **l_527 = &g_96;
                        const int ***l_526 = &l_527;
                        l_525 |= func_45((safe_rshift_func_int16_t_s_s((l_423 != (((*l_454) & p_16) == ((*l_379) > ((safe_div_func_uint64_t_u_u(((*g_176) = (0x54L | ((*l_454) != ((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_add_func_int64_t_s_s((**g_346), (safe_sub_func_uint8_t_u_u(l_524, (((*l_422) = 0x4AL) , p_16))))) | g_35), g_268)), 0xC1L)), 0xCDF3L)) , 0x57089537L)))), p_16)) < l_421)))), l_439)));
                        (*l_406) |= func_45((*l_455));
                        l_524 = (((*l_526) = &g_96) == (void*)0);
                    }
                    else
                    {
                        (*l_458) = ((*l_406) |= (*g_63));
                        (*l_379) = (((safe_rshift_func_uint16_t_u_u(((func_31(((void*)0 == l_530)) , 8L) & (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_16, p_16)), (p_16 == (+(safe_lshift_func_int16_t_s_s(((p_16 , p_16) < 251UL), g_317)))))) <= g_268), g_17)) == p_16) > 0UL), g_317)), g_338))), 1)) < g_268) && g_338);
                    }
                }
                else
                {
                    (*l_379) ^= p_16;
                }
                (**l_407) &= (safe_sub_func_int16_t_s_s(((((*l_454) = (((**l_479) = (**g_345)) == (*l_562))) >= p_16) & l_421), 65535UL));
            }
            else
            {
                (*l_406) &= (*g_63);
            }
            l_423 &= ((safe_lshift_func_uint16_t_u_s(((**g_345) != &l_465), ((*g_186) = p_16))) | (((((safe_div_func_int64_t_s_s(((l_421 | (*l_406)) | func_45(p_16)), (safe_mod_func_uint16_t_u_u(g_285, (p_16 , p_16))))) || g_230) == g_233) , 9UL) == 0UL));
        }
        (*l_406) ^= p_16;
        l_281 = (safe_div_func_int8_t_s_s(((*l_424) = (safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(((*l_406) = ((~((l_583 = g_579) != l_558)) , (safe_div_func_uint64_t_u_u((p_16 , ((((((***g_581) = ((((**l_410) &= ((safe_rshift_func_uint16_t_u_u((((void*)0 == &l_439) , func_45((p_16 != p_16))), g_230)) != g_85)) && 65535UL) , 4L)) || (*g_176)) , (void*)0) == (*l_583)) , 9UL)), 0xB195B141FB62C209LL)))), p_16)) || (*l_406)), 5UL))), l_439));
        return p_16;
    }
    else
    {
        short ***l_589 = &l_408;
        short ****l_590 = &l_589;
        unsigned long long **l_592 = &g_176;
        unsigned long long ***l_591 = &l_592;
        unsigned short *l_601 = (void*)0;
        int l_648 = 0xFB2CD882L;
        int l_666 = 3L;
        unsigned char l_800 = 0UL;
        unsigned l_811 = 2UL;
        const unsigned long long l_843 = 0xF2AC13BB4F471843LL;
        int ***l_844 = &l_407;
        if ((((*l_590) = l_589) == &l_403))
        {
            unsigned long long ****l_593 = &l_591;
            unsigned short **l_602 = &l_601;
            unsigned short *l_604 = (void*)0;
            unsigned short **l_603 = &l_604;
            int l_605 = 9L;
            unsigned char *l_606 = &g_85;
            long long **** const l_625 = &g_345;
            char l_680 = 8L;
            int *l_691 = &g_48;
            unsigned l_757 = 4294967295UL;
            (**l_407) |= (((*l_606) |= (((((*l_593) = l_591) == g_594) && 18446744073709551607UL) , (((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((g_317 = ((***l_589) = ((((*l_602) = l_601) == ((*l_603) = &g_114)) ^ l_605))), p_16)), (~p_16))) != (***g_594)) || p_16))) != g_230);
            (*g_63) &= (safe_add_func_uint32_t_u_u((((*l_379) || p_16) , 4294967292UL), l_605));
            if ((safe_rshift_func_int16_t_s_u((*g_186), (&l_588 == &l_588))))
            {
                unsigned l_627 = 6UL;
                const int *l_649 = &l_281;
                const long long ** const **l_685 = (void*)0;
                unsigned long long l_686 = 18446744073709551615UL;
                (*g_63) = ((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((g_120 = (safe_mul_func_uint16_t_u_u((((((***l_590) = (***l_590)) != (void*)0) < (((*g_63) && (((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u(0xDAL, (((+(func_45(((void*)0 == &l_379)) , g_200)) == (((p_16 == p_16) <= 0x6E0DEAD5L) >= 4294967295UL)) >= p_16))), p_16)) , (void*)0) != l_625)) < p_16)) <= g_114), p_16))), l_605)), g_626)) , l_627);
                if ((((~g_35) && (p_16 >= ((****g_580) > (*l_406)))) , (*g_63)))
                {
                    (*l_407) = (void*)0;
                    (**l_625) = (**g_344);
                }
                else
                {
                    const unsigned char l_641 = 9UL;
                    short *****l_647 = &g_644;
                    for (g_48 = 0; (g_48 != (-22)); --g_48)
                    {
                        short * const **l_642 = &l_403;
                        int *l_643 = &l_605;
                        (*l_643) &= (((((*g_63) |= (safe_div_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((***g_594), ((safe_lshift_func_int8_t_s_s(p_16, 3)) , p_16))) , (safe_mod_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(((1L == ((void*)0 == l_640)) , 0x6C04FA03D0943A29LL), (((!(l_641 && (l_642 == (void*)0))) | g_268) && g_116))) , 9UL), g_200))), (**l_407)))) && 0x38C9CCBEL) && g_48) && p_16);
                        if ((*g_63))
                            continue;
                    }
                    (**l_407) = (((***g_345) |= (!(((*l_647) = g_644) != &g_645))) | l_648);
                    (*l_406) ^= 3L;
                }
                if ((((**g_644) != (*l_409)) ^ func_31((*g_176))))
                {
                    const int **l_650 = &g_96;
                    (*l_406) |= p_16;
                    (*l_650) = l_649;
                    (*l_407) = &l_605;
                    (*l_650) = l_649;
                }
                else
                {
                    for (p_16 = 25; (p_16 == 11); p_16--)
                    {
                        unsigned long long *l_659 = &g_320;
                        long long *l_665 = &g_200;
                        unsigned l_667 = 0x9C54C6B4L;
                        unsigned *l_668 = (void*)0;
                        unsigned *l_669 = (void*)0;
                        unsigned *l_670 = &g_116;
                        int *l_671 = (void*)0;
                        l_671 = func_52(((safe_sub_func_int16_t_s_s((p_16 , (((((*l_670) |= (((safe_lshift_func_uint16_t_u_u(g_17, (!((*l_604) = ((safe_sub_func_uint64_t_u_u((*g_176), ((0x5040A48B00B665A4LL < ((l_593 != (((l_659 != (g_660 = l_659)) == ((safe_div_func_int32_t_s_s(((*l_406) = ((*g_347) == ((*l_665) ^= (l_648 = (p_16 ^ p_16))))), l_666)) <= 0UL)) , (void*)0)) == p_16)) >= g_187))) , l_667))))) , (*l_649)) | 7L)) , (***g_345)) && (***g_581)) ^ g_320)), 0x6CD8L)) != (*l_649)), &g_35);
                    }
                    for (g_317 = 0; (g_317 > (-20)); g_317--)
                    {
                        char *l_687 = &g_338;
                        int l_688 = 0xF6516F19L;
                        l_605 ^= ((safe_add_func_uint32_t_u_u(((*g_581) != (*g_345)), (safe_add_func_int8_t_s_s(((*l_687) &= (safe_mod_func_int64_t_s_s(((****g_580) = (func_45((l_680 &= (l_625 == (*g_579)))) , 0x29B9632C4CCF3455LL)), (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((+((((l_685 == (((4294967293UL | (((*l_606) = (p_16 >= (*l_649))) ^ p_16)) <= 1L) , (*g_579))) || l_686) , p_16) > 0xA88AL)) , (-9L)), l_666)), g_268))))), 9L)))) ^ (**g_646));
                        if (l_688)
                            break;
                    }
                }
            }
            else
            {
                const int l_694 = 1L;
                unsigned long long *l_695 = &g_213;
                const long long ****l_706 = (void*)0;
                const long long *****l_707 = (void*)0;
                const long long * const * const ***l_721 = (void*)0;
                const long long * const * const ***l_722 = (void*)0;
                const long long * const * const ***l_723 = &g_719;
                short l_724 = (-5L);
                short * const ***l_736 = (void*)0;
                short * const ****l_735 = &l_736;
                int l_761 = 0x7EC26A09L;
                int *l_762 = &g_78;
                unsigned long long *l_768 = (void*)0;
                for (p_16 = 0; (p_16 == 51); ++p_16)
                {
                    l_691 = (void*)0;
                }
                if (l_692)
                {
                    int *l_693 = &g_81;
                    int *l_697 = (void*)0;
                    int *l_698 = &l_281;
                    (*l_407) = ((p_16 == (-1L)) , l_693);
                    (*l_698) &= func_40((!((**g_594) != &l_588)), l_696, (**g_646), g_120);
                }
                else
                {
                    for (p_16 = 26; (p_16 <= 37); p_16 = safe_add_func_int32_t_s_s(p_16, 6))
                    {
                        return (*g_63);
                    }
                    (*l_379) = (-10L);
                }
                (**l_407) &= 0L;
                if ((safe_lshift_func_uint16_t_u_u(((&l_588 == g_703) && (((safe_mod_func_uint64_t_u_u((*g_703), (g_81 && (((l_708 = l_706) != ((*l_723) = ((safe_add_func_int16_t_s_s(p_16, ((safe_mul_func_uint8_t_u_u(l_694, (safe_add_func_uint32_t_u_u(0x97F7234BL, (0L == (*g_660)))))) , p_16))) , g_719))) , p_16)))) || 1L) > (****g_644))), l_724)))
                {
                    char *l_732 = &l_680;
                    const int l_755 = 3L;
                    unsigned long long *l_758 = &g_759;
                    if ((safe_add_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint16_t_u_s(p_16, ((*g_186) && (+((0xB91768309D5EF3E9LL || (*l_406)) <= (safe_mul_func_int8_t_s_s(((*l_732) = g_62), (p_16 && (****g_644))))))))))), (safe_add_func_int64_t_s_s(0x51F8D1690FBF8F8DLL, ((g_737 = l_735) == &g_644))))))
                    {
                        int *l_748 = &l_605;
                        unsigned *l_756 = &g_116;
                        int l_760 = 0x07CDE952L;
                        l_761 &= ((g_17 == 0x13F7DEC0L) < func_40(p_16, func_49(func_52(((***l_589) = (safe_rshift_func_uint8_t_u_u((func_40(((*l_606) = (((safe_lshift_func_int16_t_s_u((((*l_756) = ((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(func_31((func_45(((((((((*l_748) |= ((*l_379) = ((***g_581) , 0x68FDC3AAL))) , ((((safe_rshift_func_int16_t_s_s(p_16, 14)) <= (!(safe_lshift_func_uint8_t_u_s(l_753, (g_35 , (((safe_unary_minus_func_uint32_t_u(g_230)) <= 255UL) , 0x51L)))))) == p_16) , 0x16L)) || p_16) || 0x25E58B13FA39DF22LL) , 0xADCB4B2E83BECEC8LL) ^ 18446744073709551609UL) == 0x1DE5444AL)) <= 1L)), 2)) < l_755), p_16)), g_712)) == p_16)) != 0xBE4EBF25L), l_694)) == 0UL) , g_114)), &g_320, l_757, l_724) ^ 0xF979B8C5C63B05E1LL), p_16))), g_660), l_758), l_755, l_760));
                        l_762 = (void*)0;
                    }
                    else
                    {
                        long long l_765 = (-8L);
                        (*l_407) = &l_666;
                        (*l_762) = (safe_add_func_int8_t_s_s((l_765 && l_755), g_712));
                    }
                    for (g_35 = 29; (g_35 < 27); --g_35)
                    {
                        if (l_666)
                            break;
                        (*l_407) = &g_62;
                        (*l_407) = func_52((****g_644), &g_759);
                    }
                }
                else
                {
                    long long l_771 = 1L;
                    const int **l_786 = &g_96;
                    (*l_407) = func_52((****g_644), &g_759);
                    if ((((*g_176) = (l_648 = (((**l_407) = (*l_379)) ^ (-1L)))) , (*g_63)))
                    {
                        return (*g_63);
                    }
                    else
                    {
                        const int *l_785 = (void*)0;
                        const int **l_784 = &l_785;
                        (*l_784) = (g_96 = &l_648);
                    }
                    (*l_786) = &l_694;
                }
            }
            for (p_16 = 0; (p_16 != 8); ++p_16)
            {
                unsigned long long *l_801 = (void*)0;
                int l_802 = 0L;
                int ***l_816 = (void*)0;
                if (p_16)
                {
                    unsigned *l_799 = &l_757;
                    (*l_407) = &l_605;
                    if (l_802)
                        continue;
                }
                else
                {
                    long long *l_814 = (void*)0;
                    int *l_815 = &g_48;
                    (*l_406) = (safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((func_45(l_666) | p_16) == p_16) , p_16), p_16)), ((((safe_mul_func_uint16_t_u_u((0xA2L || p_16), g_62)) | p_16) & 0xF67F8F1EB24045AELL) & 0x990372B97C1C27BELL))), 4));
                    if (l_811)
                        break;
                    for (l_273 = 0; (l_273 > 50); l_273++)
                    {
                        (*l_407) = (*l_407);
                        (*l_406) = ((*g_347) , ((void*)0 == l_814));
                        (*l_407) = l_815;
                    }
                }
                g_817 = (void*)0;
            }
        }
        else
        {
            short *****l_820 = &l_590;
            int *l_823 = &g_78;
            int ***l_846 = &g_817;
            long long *****l_859 = &g_344;
            const unsigned long long *l_867 = (void*)0;
            for (l_692 = 0; (l_692 <= 20); l_692++)
            {
                unsigned short l_822 = 0xF230L;
                int l_829 = 0L;
                l_823 = (((((*l_379) = (func_40((*l_379), (*l_592), p_16, (l_822 ^= (&g_644 != (l_821 = l_820)))) || g_759)) && 0L) , (****g_580)) , (void*)0);
                for (l_800 = (-24); (l_800 != 32); l_800++)
                {
                    unsigned l_832 = 18446744073709551615UL;
                    int ****l_845 = &l_844;
                    int ****l_847 = &l_846;
                    int *l_848 = &l_281;
                    for (g_230 = (-17); (g_230 != (-7)); g_230 = safe_add_func_uint16_t_u_u(g_230, 2))
                    {
                        unsigned char l_828 = 5UL;
                        l_829 ^= (((*l_379) = l_828) <= (0x9F9FB25FL > 1UL));
                    }
                    if ((**l_407))
                        continue;
                    (*l_848) |= (safe_add_func_uint16_t_u_u(l_832, (g_114 > (((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((l_829 = (((safe_sub_func_uint16_t_u_u(g_187, func_45((((l_648 = (safe_sub_func_uint32_t_u_u(p_16, ((l_843 >= (~(0x78D221E71201CA87LL <= 0x3EACA42A7C3C1662LL))) || (((*l_845) = l_844) == ((*l_847) = l_846)))))) < 65535UL) , 1L)))) || g_317) <= (****g_344))), l_811)) == g_320), g_62)), (**l_407))) , &g_595) != &g_595))));
                }
                return p_16;
            }
            for (g_120 = 0; (g_120 == (-2)); --g_120)
            {
                long long *****l_855 = &l_640;
                long long ******l_854 = &l_855;
                long long *****l_857 = &l_640;
                long long ******l_856 = &l_857;
                unsigned *l_861 = &l_811;
                int *l_862 = &l_281;
                unsigned *l_868 = (void*)0;
                (*l_862) &= (((((void*)0 != g_851) >= 0x4C0E3D8CL) , (func_45((***g_645)) < ((((*l_861) = ((***l_844) ^ (((((g_858 = ((*l_856) = ((*l_854) = &g_344))) != (g_860 = l_859)) == (g_35 > g_233)) || (***l_846)) , (*g_347)))) , (-8L)) , p_16))) & 1L);
                (*g_817) = (**l_844);
                (**l_846) = (((safe_add_func_uint16_t_u_u(p_16, ((*g_852) != ((*l_823) &= ((0UL < ((***l_846) <= (0x2D5D224AL != (((safe_div_func_int64_t_s_s(p_16, (*g_703))) , (*g_817)) == (((((l_867 == (void*)0) || p_16) , 0xC8L) & 255UL) , (*g_817)))))) <= (***l_844)))))) , (*l_823)) , (*l_407));
            }
            return (**l_407);
        }
    }
    return p_16;
}







static const unsigned short func_31(unsigned long long p_32)
{
    unsigned long long *l_37 = (void*)0;
    unsigned long long **l_36 = &l_37;
    int l_57 = 5L;
    const long long l_234 = 0x3D49D56FFF882CA4LL;
    l_36 = (void*)0;
    for (p_32 = (-20); (p_32 <= 30); p_32 = safe_add_func_int32_t_s_s(p_32, 2))
    {
        const int l_231 = 1L;
        int *l_232 = &g_233;
        if (g_17)
            break;
        (*l_232) ^= (p_32 > (func_40(func_45(g_35), func_49(func_52(((safe_lshift_func_uint16_t_u_u(g_35, l_57)) || (safe_mod_func_int8_t_s_s((-5L), 0x34L))), &g_35), &g_35), l_57, g_35) > l_231));
    }
    return l_234;
}







static int func_40(unsigned char p_41, unsigned long long * p_42, short p_43, int p_44)
{
    short l_159 = 7L;
    unsigned *l_160 = &g_116;
    int *l_163 = &g_81;
    short *l_164 = (void*)0;
    short *l_165 = &l_159;
    unsigned long long *l_175 = &g_35;
    int l_190 = (-6L);
    unsigned long long *l_211 = (void*)0;
    unsigned long long *l_212 = &g_213;
    short *l_226 = &g_187;
    short *l_227 = &g_187;
    long long *l_228 = (void*)0;
    long long *l_229 = &g_230;
    if ((((((*l_165) = ((0x75AD7167286844AALL != (safe_lshift_func_int8_t_s_s(((-2L) && (g_48 , g_120)), (((*l_163) = (safe_mod_func_uint16_t_u_u((((((((*l_160) = ((l_159 != p_44) > g_48)) == (safe_add_func_int32_t_s_s(((g_114 > g_35) , p_41), l_159))) ^ g_120) , (void*)0) != p_42) , 0UL), l_159))) & 4294967287UL)))) ^ 0x6871L)) , (*l_163)) >= 0x8DL) >= 0x0CCAC7596E128E9CLL))
    {
        unsigned **l_166 = &l_160;
        l_166 = &l_160;
    }
    else
    {
        char l_169 = 0xFDL;
        char *l_170 = &l_169;
        short **l_188 = &l_165;
        unsigned short l_189 = 1UL;
        int **l_191 = (void*)0;
        int **l_192 = (void*)0;
        int **l_193 = &g_63;
        if (((safe_mod_func_uint8_t_u_u(p_43, 9L)) != ((*l_170) = l_169)))
        {
            unsigned long long *l_171 = &g_35;
            char * const l_172 = &g_120;
            int **l_173 = (void*)0;
            int **l_174 = &l_163;
            (*l_163) = (l_171 == (g_176 = l_175));
        }
        else
        {
            int **l_179 = &g_63;
            for (p_44 = 1; (p_44 > 3); ++p_44)
            {
                return (*l_163);
            }
            (*l_179) = func_52(g_120, &g_35);
            (*g_63) &= (safe_sub_func_int32_t_s_s(((*l_163) = p_43), (-1L)));
            (**l_179) ^= 1L;
        }
        l_190 |= (safe_lshift_func_uint16_t_u_s(((0xB32BA0D44C9C871BLL >= 0x9BD2BB8632A4309CLL) != ((safe_div_func_uint16_t_u_u(((&p_43 == ((*l_188) = g_186)) , func_45((*l_163))), l_189)) < (l_189 >= (65527UL && p_44)))), 12));
        (*l_163) = func_45((*g_186));
        (*l_193) = &l_190;
    }
    for (g_81 = 0; (g_81 < 14); g_81++)
    {
        int *l_196 = &g_78;
        int **l_197 = (void*)0;
        int **l_198 = &l_196;
        (*l_198) = l_196;
    }
    if ((*l_163))
    {
        return p_43;
    }
    else
    {
        long long *l_199 = &g_200;
        int l_205 = 0xFF0A8A3EL;
        int *l_208 = (void*)0;
        l_208 = func_52((((p_43 >= ((((*l_199) = (!5L)) , &g_114) != (void*)0)) && (safe_div_func_int32_t_s_s(((void*)0 != &p_43), g_85))) , (((*l_163) = ((safe_mod_func_uint16_t_u_u(l_205, (safe_lshift_func_int16_t_s_u(func_45((*g_186)), 5)))) && (*l_163))) , 0x05F4L)), p_42);
    }
    (*g_63) |= (safe_sub_func_uint64_t_u_u(((*l_212) &= ((*p_42) = 0xC4C324AB99CF72C5LL)), func_45((g_17 , ((~(g_81 ^ ((g_176 == p_42) == ((*l_229) &= (~((func_45(((*l_227) = (safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(p_44, (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((!(safe_mod_func_uint16_t_u_u(func_45(((*l_226) = ((*l_163) ^ (p_43 , ((safe_div_func_uint8_t_u_u((*l_163), g_78)) < g_200))))), 0x5C66L))), p_41)), p_44)))), p_44)))) < g_85) , p_43)))))) | p_43)))));
    return (*g_63);
}







static unsigned char func_45(const short p_46)
{
    int *l_47 = &g_48;
    (*l_47) = p_46;
    return (*l_47);
}







static unsigned long long * func_49(int * p_50, unsigned long long * p_51)
{
    int l_146 = 0L;
    unsigned short *l_152 = &g_114;
    int *l_153 = &g_78;
    unsigned long long *l_154 = &g_35;
    (*p_50) = (l_146 , (*p_50));
    for (g_120 = (-3); (g_120 >= 10); g_120++)
    {
        int **l_149 = &g_63;
        (*p_50) &= (&g_63 != l_149);
    }
    (*l_153) &= ((*g_63) = (((safe_lshift_func_int8_t_s_s(l_146, 2)) , l_152) == l_152));
    g_63 = &l_146;
    return l_154;
}







static int * func_52(short p_53, unsigned long long * p_54)
{
    long long l_60 = (-5L);
    int *l_61 = &g_62;
    int l_75 = (-8L);
    unsigned char l_109 = 0x3CL;
    long long *l_122 = &l_60;
    long long **l_121 = &l_122;
    if (((g_17 , ((*l_61) = (l_60 < (*p_54)))) , ((9UL == (&g_62 != (g_63 = l_61))) <= (*l_61))))
    {
        int *l_64 = &g_62;
        int *l_76 = (void*)0;
        int *l_77 = &g_78;
        int **l_79 = &l_61;
        int *l_80 = &g_81;
        (*l_80) &= (l_64 == ((*l_79) = ((g_62 , (safe_rshift_func_uint16_t_u_s(g_17, (safe_div_func_int32_t_s_s(((*l_77) = (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_53, p_53)), (((*l_61) = (*g_63)) > (safe_add_func_int8_t_s_s(((!(g_35 & ((g_17 , ((((18446744073709551615UL | g_35) && g_17) , l_75) , 8L)) , 4294967295UL))) && p_53), 0xDEL)))))), g_17))))) , (void*)0)));
        if ((p_53 || (g_35 ^ 0x62A9717E5ED53545LL)))
        {
            unsigned long long l_82 = 1UL;
            unsigned char *l_83 = (void*)0;
            unsigned char *l_84 = &g_85;
            int *l_86 = &g_62;
            (*l_77) ^= (((*l_79) = &g_62) == (((((*l_64) ^= 1L) , (p_53 == 8UL)) , ((*l_84) ^= l_82)) , (void*)0));
            (*l_79) = l_86;
            return l_61;
        }
        else
        {
            const int *l_87 = &g_78;
            const int **l_88 = (void*)0;
            const int **l_89 = &l_87;
            int l_105 = 0x4FCE62B0L;
            char *l_118 = (void*)0;
            char *l_119 = &g_120;
            (*l_89) = l_87;
            (*l_79) = &g_62;
            for (p_53 = 0; (p_53 <= (-25)); p_53 = safe_sub_func_uint64_t_u_u(p_53, 4))
            {
                long long *l_108 = (void*)0;
                long long *l_110 = &l_60;
                unsigned short *l_113 = &g_114;
                unsigned *l_115 = &g_116;
                int l_117 = 5L;
                if ((*l_61))
                    break;
                for (g_81 = 1; (g_81 > (-26)); g_81 = safe_sub_func_int8_t_s_s(g_81, 4))
                {
                    (*l_61) = (~((safe_mod_func_uint32_t_u_u(g_35, (*l_61))) , 0x4114487FL));
                }
                g_96 = (*l_89);
                (*l_61) = ((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((*l_61) == ((((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((0L == l_105), ((g_78 >= (((*l_115) = (safe_sub_func_int8_t_s_s((((*l_110) = (l_109 |= (**l_89))) && (*p_54)), (g_81 , (((**l_89) || (((*l_113) &= (g_35 > (*l_61))) < 0L)) , 0x14L))))) , 1L)) == (-1L)))), 0xD92DD8B1B829F48DLL)) , 0x90L) , (*l_80)) , p_53)), (**l_79))), 1UL)) && l_117);
            }
            (*g_63) |= (((*l_119) = (*l_87)) , (!(~(-1L))));
        }
        (*l_77) = (*l_61);
    }
    else
    {
        long long ***l_123 = &l_121;
        int l_126 = 0x69F5ED80L;
        (*l_123) = l_121;
        if (p_53)
        {
            int l_127 = 9L;
            int *l_128 = (void*)0;
            int *l_129 = &g_78;
            (*l_129) |= ((*g_63) = ((g_35 , ((p_53 == (*l_61)) > p_53)) < (0xB8A93D2DL ^ ((*l_61) ^ (safe_sub_func_int32_t_s_s((l_126 , (4294967288UL >= l_127)), 0xFCB6E431L))))));
            (*l_129) = (~p_53);
        }
        else
        {
            int **l_143 = (void*)0;
            int **l_144 = &l_61;
            int **l_145 = &g_63;
            for (g_114 = 0; (g_114 <= 20); g_114++)
            {
                for (l_75 = 0; (l_75 < (-17)); l_75--)
                {
                    unsigned char l_136 = 0x77L;
                    long long * const *l_140 = &l_122;
                    long long * const **l_139 = &l_140;
                    unsigned *l_141 = &g_116;
                    int *l_142 = &g_81;
                    (*g_63) &= (safe_sub_func_int64_t_s_s(p_53, 3L));
                    if ((*g_63))
                        break;
                    (*l_142) |= (l_136 & (safe_add_func_uint32_t_u_u(p_53, ((*l_141) = (((l_139 == &l_121) | ((*l_61) > l_136)) < 0xB375AFA80DD4D5FFLL)))));
                }
            }
            (*l_145) = ((*l_144) = l_61);
        }
    }
    return l_61;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_853, "g_853", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_885, "g_885", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_986, "g_986", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
