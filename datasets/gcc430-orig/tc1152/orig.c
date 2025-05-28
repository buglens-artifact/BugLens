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



static const unsigned char g_22 = 0x88L;
static int g_66 = 0x965DA1F7L;
static const int g_73 = (-2L);
static unsigned long long g_75 = 0x070FCBC842353725LL;
static int *g_79 = &g_66;
static int ** volatile g_78 = &g_79;
static int g_101 = 8L;
static char g_109 = 0xC4L;
static char g_110 = 0x44L;
static int * volatile g_111 = &g_101;
static int ** volatile g_113 = (void*)0;
static int ** volatile g_114 = &g_79;
static int *g_120 = &g_101;
static int ** volatile g_119 = &g_120;
static unsigned long long g_142 = 0x243A45608AF67B55LL;
static unsigned char g_146 = 1UL;
static unsigned char g_149 = 5UL;
static int g_151 = 6L;
static unsigned g_154 = 2UL;
static unsigned *g_171 = &g_154;
static unsigned **g_170 = &g_171;
static unsigned *** volatile g_169 = &g_170;
static short g_174 = 0x13A5L;
static short * const g_173 = &g_174;
static const int *g_177 = (void*)0;
static const int ** volatile g_176 = &g_177;
static unsigned g_207 = 0UL;
static unsigned short g_247 = 1UL;
static unsigned short *g_246 = &g_247;
static unsigned g_308 = 1UL;
static int g_323 = 0L;
static int g_329 = (-9L);
static short g_336 = 7L;
static int * const volatile g_347 = &g_66;
static int * volatile g_391 = &g_66;
static unsigned *g_414 = &g_308;
static unsigned **g_413 = &g_414;
static unsigned *** volatile g_412 = &g_413;
static const char *g_432 = &g_110;
static const char **g_431 = &g_432;
static const char *** volatile g_430 = &g_431;
static long long g_446 = 1L;
static int g_474 = 0L;
static long long g_492 = 0x49DA2CCC983FD836LL;
static long long g_494 = 0L;
static short *** volatile g_503 = (void*)0;
static unsigned short g_511 = 65530UL;
static int ** volatile g_546 = &g_120;
static volatile unsigned *g_557 = (void*)0;
static volatile unsigned **g_556 = &g_557;
static volatile unsigned *** volatile g_555 = &g_556;
static volatile unsigned *** volatile * const g_554 = &g_555;
static int ** volatile g_588 = &g_120;
static unsigned short * volatile *g_678 = (void*)0;
static unsigned short * volatile **g_677 = &g_678;
static int **g_747 = &g_120;
static int ***g_746 = &g_747;
static unsigned long long *** volatile g_758 = (void*)0;
static unsigned long long *g_760 = &g_142;
static unsigned long long **g_759 = &g_760;
static unsigned g_783 = 4294967288UL;
static unsigned *** volatile g_955 = (void*)0;
static unsigned g_969 = 4294967289UL;
static unsigned *** const *g_1012 = (void*)0;
static char *g_1034 = &g_109;
static char **g_1033 = &g_1034;
static char ***g_1032 = &g_1033;
static unsigned short g_1058 = 0x78D2L;
static int ** volatile g_1080 = &g_79;



static short func_1(void);
static unsigned long long func_2(int p_3, const unsigned short p_4, unsigned long long p_5, short p_6);
static unsigned short func_15(int p_16, long long p_17);
static unsigned long long func_20(const short p_21);
static short func_25(const unsigned p_26, unsigned p_27);
static unsigned func_28(short p_29);
static unsigned long long func_33(const int p_34, short p_35, unsigned p_36, long long p_37);
static unsigned func_52(int p_53, long long p_54, int p_55);
static int * func_56(unsigned p_57, unsigned short p_58, unsigned short p_59, int * p_60);
static unsigned short func_67(int * p_68);
static short func_1(void)
{
    int *l_328 = &g_329;
    short *l_334 = (void*)0;
    short *l_335 = &g_336;
    long long l_337 = 0x25F0FA4494481D4DLL;
    const short l_798 = 0xEB27L;
    unsigned l_799 = 0xDDED8137L;
    const unsigned *l_973 = &g_154;
    const unsigned * const *l_972 = &l_973;
    short l_993 = 0x9EF1L;
    unsigned **l_997 = &g_414;
    unsigned short *l_1006 = &g_511;
    unsigned short *l_1007 = &g_247;
    unsigned long long l_1027 = 0UL;
    const int * const *l_1055 = &g_177;
    const int * const **l_1054 = &l_1055;
    int l_1079 = 0xFB0BA6B0L;
    if ((func_2(((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u(((*g_246) = func_15(((((~(!(safe_lshift_func_int8_t_s_u(((func_20(g_22) >= g_73) > ((*l_328) = (safe_div_func_int8_t_s_s(0x5FL, (safe_lshift_func_int16_t_s_u(((void*)0 == g_171), 14)))))), (~g_308))))) || ((safe_lshift_func_uint8_t_u_u((~(safe_lshift_func_int16_t_s_s((*l_328), (((*l_335) = (+((*g_173) = 0xEF94L))) | 65535UL)))), g_154)) == 0L)) || l_337) | g_323), l_337)), 0xB744L)) ^ 0x030C65D66C7B957ALL), l_337)), 7)) ^ 4294967295UL), g_474)) | 1UL), l_798, g_474, l_799) | 0x84DE8D943170C07ELL))
    {
        int *l_978 = &g_66;
        unsigned long long *** const l_981 = (void*)0;
        int *l_982 = &g_151;
        (**g_746) = func_56((*l_328), (safe_mul_func_int16_t_s_s((l_972 == (void*)0), ((safe_lshift_func_uint8_t_u_s((*l_328), 5)) < 0UL))), (*l_328), l_978);
        (*l_982) = ((*l_328) = (0xE8117C4619E1C54ELL && ((*l_978) = (safe_add_func_uint64_t_u_u(((*g_760) = ((l_981 != &g_759) > ((*g_760) <= (0x69L != ((*l_978) && (*l_328)))))), ((-7L) & ((void*)0 == &g_555)))))));
    }
    else
    {
        unsigned char l_985 = 255UL;
        int l_988 = 0xE6A15D6CL;
        unsigned **l_996 = &g_414;
        int l_1008 = 0x666C9AC6L;
        char *l_1030 = &g_110;
        char **l_1029 = &l_1030;
        char ***l_1028 = &l_1029;
        unsigned *l_1065 = &g_783;
        if (((((safe_mul_func_uint8_t_u_u(0xE6L, l_985)) & ((l_988 | l_985) && (*g_760))) < l_985) == (*g_173)))
        {
            unsigned ***l_998 = &g_413;
            unsigned ***l_999 = &g_413;
            unsigned **l_1000 = (void*)0;
            unsigned long long l_1001 = 0UL;
            int *l_1009 = &g_329;
            unsigned *** const l_1011 = &g_170;
            unsigned *** const *l_1010 = &l_1011;
            char *l_1015 = &g_109;
            (*g_746) = &l_328;
            (*g_747) = func_56((safe_mod_func_int32_t_s_s((l_996 == (l_1000 = l_997)), (*l_328))), l_1001, (safe_lshift_func_int8_t_s_u(((1UL < l_1008) | (*g_171)), g_75)), l_1009);
            if (((&g_414 == l_996) == ((*l_1015) = (((((g_446 = ((g_1012 = l_1010) != &g_169)) >= g_336) > (safe_sub_func_uint16_t_u_u((*g_246), (((*l_1006) = (*g_246)) != l_988)))) != g_101) & 1L))))
            {
                return (*g_173);
            }
            else
            {
                return (*g_173);
            }
        }
        else
        {
            unsigned char l_1018 = 0x8CL;
            char *l_1019 = &g_110;
            unsigned short * const *l_1025 = &g_246;
            unsigned short * const **l_1024 = &l_1025;
            char l_1026 = 1L;
            char ****l_1031 = &l_1028;
            char ****l_1035 = &g_1032;
            int l_1051 = 0x03202AB1L;
            (*l_328) = ((((*l_1019) = (!(((safe_div_func_uint16_t_u_u(0x6DDDL, 0x8899L)) > ((*l_1006) = l_1018)) || (g_109 || 0x6BDA3BBF69285C11LL)))) < (safe_rshift_func_uint16_t_u_s(((&g_678 == l_1024) != (((l_1026 | (func_52(l_1027, g_494, (*l_328)) && l_985)) == (*g_173)) == 0xB72809A1FF4AA02CLL)), 12))) == (*l_328));
            l_988 = l_1026;
            if ((((*l_1031) = l_1028) != ((*l_1035) = g_1032)))
            {
                int l_1044 = 0xE8D355D2L;
                long long *l_1047 = (void*)0;
                long long *l_1048 = &l_337;
                (*l_328) = (*g_391);
                (*l_328) = (*l_328);
                (*l_328) = ((safe_div_func_int64_t_s_s(((*l_1048) = (safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s(l_1044, 18446744073709551607UL)), (safe_sub_func_uint16_t_u_u(0x1E5AL, l_1008)))), l_1008))), g_154)) != (*g_173));
            }
            else
            {
                unsigned l_1049 = 1UL;
                unsigned ***l_1050 = &g_170;
                (*g_111) = l_1049;
                l_1051 = ((*g_554) != l_1050);
                (**g_746) = func_56(l_1049, func_67(&l_988), l_1049, (*g_78));
                (*l_328) = (g_474 < ((*g_760) | ((safe_mod_func_int32_t_s_s(((-6L) ^ ((l_988 > (!(((void*)0 != l_1054) && (*g_246)))) & (safe_mul_func_uint8_t_u_u(((void*)0 != &g_22), l_988)))), 0x20D3495EL)) & g_1058)));
            }
            for (g_511 = 1; (g_511 != 60); ++g_511)
            {
                unsigned long long l_1076 = 0xDC4EFCF542612CB2LL;
                long long *l_1077 = (void*)0;
                long long *l_1078 = &g_446;
                l_1079 = ((*l_328) = func_2(((**g_759) ^ ((*l_1078) = ((*l_328) = ((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((l_1065 != (void*)0), (((safe_rshift_func_uint16_t_u_u((0x0684L <= (safe_lshift_func_uint16_t_u_s(0xC946L, 10))), 10)) >= (safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s(((***g_1032) & (***g_1032)), ((g_1058 = ((**l_1025) = (l_1076 != (*g_173)))) == 0UL))), l_1076))) || l_1051))), (**g_759))) ^ 1UL)))), l_1076, l_1008, (*g_173)));
                (*g_1080) = ((*g_747) = func_56((~l_985), (*g_246), l_1076, &l_988));
            }
        }
    }
    (*l_328) = (*l_328);
    for (g_101 = (-15); (g_101 < (-15)); ++g_101)
    {
        long long l_1087 = 3L;
        unsigned char l_1095 = 1UL;
        for (g_511 = 0; (g_511 != 40); g_511++)
        {
            unsigned l_1088 = 0xD226F529L;
            int l_1098 = 5L;
            l_1088 = (safe_div_func_int8_t_s_s(((**g_1033) = l_1087), (*g_432)));
            (*l_328) = ((0xBEF97FD7L != ((safe_add_func_uint32_t_u_u(l_1087, (safe_div_func_uint64_t_u_u((g_783 ^ 0L), (safe_add_func_int32_t_s_s((l_1087 ^ l_1095), (+(l_1098 == (!(~(safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((*l_328), l_1095)), 14)) || 3UL), 7)))))))))))) && (*l_328))) == 1L);
        }
    }
    return (*l_328);
}







static unsigned long long func_2(int p_3, const unsigned short p_4, unsigned long long p_5, short p_6)
{
    short l_806 = 5L;
    int l_842 = (-9L);
    int **l_847 = (void*)0;
    if ((safe_rshift_func_uint8_t_u_u((p_4 > ((((safe_sub_func_int16_t_s_s(l_806, (safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_806, l_806)), l_806)))) < 0UL) != l_806) && p_3)), 3)))
    {
        unsigned long long l_824 = 0xCB46E0A3F0968E08LL;
        int *l_851 = &l_842;
        short l_958 = 4L;
        for (g_149 = 0; (g_149 != 2); g_149 = safe_add_func_int16_t_s_s(g_149, 1))
        {
            char l_820 = 0x10L;
            long long *l_843 = &g_494;
            int **l_846 = &g_79;
            unsigned char *l_848 = (void*)0;
            unsigned char *l_849 = &g_146;
            unsigned ***l_880 = &g_170;
            unsigned ****l_879 = &l_880;
            unsigned **** const *l_878 = &l_879;
            for (g_446 = 0; (g_446 <= (-11)); --g_446)
            {
                int *l_815 = &g_66;
                int *l_816 = &g_101;
                unsigned char *l_819 = &g_146;
                long long l_825 = (-1L);
                (**g_746) = l_815;
                (*l_816) = ((*l_815) = func_28(p_6));
                if (func_28((p_5 || (safe_mod_func_uint8_t_u_u(((*l_819) = ((*g_556) != (void*)0)), 1L)))))
                {
                    char l_823 = 0L;
                    long long *l_836 = &g_494;
                    long long *l_837 = &g_492;
                    (**g_746) = func_56((l_820 = 0xDC26513FL), (safe_lshift_func_uint8_t_u_u(l_823, 5)), ((l_824 < l_825) >= ((safe_mod_func_int64_t_s_s(((*l_837) = (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(p_5, 6)), (((*l_836) = (safe_div_func_uint16_t_u_u(func_25((safe_mul_func_int16_t_s_s((g_323 != ((*l_836) = g_109)), ((void*)0 != &g_588))), p_3), 0x9153L))) != 0x29703E764E9B1D50LL)))), g_142)) <= 1UL)), l_816);
                }
                else
                {
                    for (g_207 = (-30); (g_207 == 38); g_207 = safe_add_func_int8_t_s_s(g_207, 4))
                    {
                        (*g_747) = func_56((*g_171), l_806, ((*g_246) = (*l_816)), (*g_747));
                    }
                    for (g_151 = (-28); (g_151 != 15); ++g_151)
                    {
                        (**g_746) = l_816;
                        (**g_746) = (void*)0;
                    }
                }
                return p_6;
            }
            l_842 = l_824;
            if ((((l_820 & ((*l_843) = g_75)) ^ ((*l_849) = (((+((*g_760) ^ p_6)) || (safe_mod_func_int16_t_s_s((l_820 == p_6), p_3))) | (l_846 == l_847)))) <= 2UL))
            {
                int *l_850 = &g_66;
                (**g_746) = l_850;
                (**g_746) = l_851;
                if (p_3)
                    continue;
                (*g_120) = ((((!p_6) < p_3) <= 0xA6D8DBD8L) | ((*g_760) = (((safe_mul_func_uint8_t_u_u(func_52(p_4, ((g_446 = g_149) == ((*l_843) = (safe_add_func_uint16_t_u_u((((**g_759) = (safe_mul_func_uint8_t_u_u(p_4, (((*g_246) = (safe_div_func_uint8_t_u_u((p_3 && (0x6A1C922BL | 0L)), p_5))) != 0x3C45L)))) < (*l_850)), p_4)))), p_4), (-1L))) | 0x640BL) || (***g_746))));
            }
            else
            {
                char *l_895 = (void*)0;
                char **l_894 = &l_895;
                char ***l_893 = &l_894;
                int l_900 = 0x0AA10805L;
                unsigned l_904 = 0x411542FEL;
                char l_926 = 0xFBL;
                int *l_928 = &l_900;
                for (g_110 = (-21); (g_110 != 5); g_110++)
                {
                    unsigned char l_870 = 6UL;
                    unsigned *** const * const l_911 = &l_880;
                    int *l_948 = &l_900;
                    for (g_492 = 0; (g_492 >= 29); g_492++)
                    {
                        int l_873 = 0xD0F5D205L;
                        (*l_851) = p_4;
                        (*l_851) = (safe_mod_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(0L, 7)), 1)) || l_870) < (safe_rshift_func_uint16_t_u_s(((l_873 | (+g_109)) >= p_5), 3))), p_6));
                        (*g_746) = (*g_746);
                    }
                    for (p_3 = (-4); (p_3 < 0); p_3++)
                    {
                        short l_896 = (-1L);
                        long long l_897 = 0xEBBEF02415A314FELL;
                        int *l_901 = &g_101;
                        (*g_391) = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_4, 11)), (safe_mul_func_int16_t_s_s(((((*g_760) = (((+((*g_246) = ((g_75 ^ (((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((g_109 > p_3), l_896)), p_3)) ^ 0xE7L) >= l_806)) == p_4))) > p_5) || 0x2DL)) | 0x894702FB127874EFLL) <= (-5L)), p_6))));
                        (*g_747) = func_56(func_28((((*g_759) = (*g_759)) == (void*)0)), l_897, ((safe_mul_func_uint16_t_u_u((0xF006L == (-1L)), 65535UL)) < (!(l_900 != p_6))), l_901);
                        if (l_900)
                            continue;
                    }
                    if ((safe_div_func_uint64_t_u_u(((**g_759) = ((void*)0 != (*g_677))), 0x094E45239D83C960LL)))
                    {
                        int l_912 = 0xBD0FE779L;
                        (*g_747) = (void*)0;
                        (*l_846) = func_56(l_904, ((*l_851) != ((safe_div_func_uint8_t_u_u(p_6, 0x69L)) <= l_912)), p_3, &l_842);
                    }
                    else
                    {
                        int l_919 = 0xE4AAB46CL;
                        char *l_927 = &g_109;
                        (*g_747) = func_56(p_3, (safe_add_func_int8_t_s_s(((*l_927) = (((safe_add_func_uint64_t_u_u((*g_760), (safe_mul_func_uint16_t_u_u((l_919 = l_904), ((*g_246) = p_4))))) && l_900) > ((((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((!p_4) ^ p_3), p_4)), (safe_sub_func_uint64_t_u_u(func_28(((*g_432) || p_6)), (**g_759))))) || l_926) < p_4) == 255UL))), 255UL)), (*l_851), l_928);
                        (*l_928) = p_3;
                        (*l_928) = p_6;
                        (*g_747) = func_56((*l_851), p_6, (safe_add_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(p_4, p_5)) > (safe_mod_func_uint64_t_u_u((*l_928), 1UL))), 0xF87FL)), (*g_114));
                    }
                    for (g_308 = 0; (g_308 < 3); g_308++)
                    {
                        unsigned short **l_937 = (void*)0;
                        (*g_677) = l_937;
                        (*g_546) = func_56((*g_171), ((*g_246) = (safe_div_func_int32_t_s_s(((+(*g_173)) >= (*l_851)), (safe_lshift_func_uint8_t_u_u(5UL, (((p_5 || (g_323 || l_820)) ^ (safe_div_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_div_func_int64_t_s_s(g_323, (*l_851))), 0x3CE5080BL)), (*g_760)))) ^ 0x535A52DEL)))))), p_6, l_948);
                    }
                }
            }
            (*l_851) = (func_67(l_851) & ((safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(l_824, ((safe_div_func_uint8_t_u_u((p_5 >= g_329), p_3)) || 0x89DB9304B3DD0630LL))), 2L)) > l_958));
        }
    }
    else
    {
        const int l_965 = 8L;
        int *l_968 = &g_66;
        if ((safe_add_func_int64_t_s_s((g_494 = g_75), ((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((*g_173), g_969)), (*l_968))) & (*l_968)))))
        {
            (**g_746) = l_968;
        }
        else
        {
            (**g_746) = (void*)0;
            return p_4;
        }
    }
    return (**g_759);
}







static unsigned short func_15(int p_16, long long p_17)
{
    char l_346 = (-1L);
    int l_353 = 0L;
    int l_452 = (-1L);
    unsigned ***l_483 = &g_413;
    unsigned **l_507 = &g_414;
    short *l_531 = &g_336;
    unsigned long long l_535 = 18446744073709551610UL;
    unsigned char *l_544 = &g_146;
    int *l_561 = &g_329;
    char *l_637 = &l_346;
    char **l_636 = &l_637;
    long long *l_644 = &g_446;
    unsigned **l_701 = &g_171;
    if (p_17)
    {
        unsigned short **l_340 = &g_246;
        unsigned long long l_348 = 2UL;
        short l_366 = (-2L);
        unsigned short **l_401 = &g_246;
        int l_408 = 5L;
        int *l_409 = &g_101;
        short *l_422 = &l_366;
        short **l_421 = &l_422;
        char *l_444 = &g_109;
        char **l_443 = &l_444;
        unsigned *** const l_449 = &g_413;
        int *l_484 = &l_408;
        short ***l_504 = &l_421;
        unsigned short *l_508 = (void*)0;
        unsigned short *l_509 = (void*)0;
        unsigned short *l_510 = &g_511;
        short *l_512 = &g_336;
        for (g_146 = 7; (g_146 == 52); g_146++)
        {
            char l_343 = 1L;
            int *l_344 = (void*)0;
            int *l_345 = &g_329;
            int l_351 = (-2L);
            unsigned short **l_400 = &g_246;
            char l_426 = 0x18L;
            char *l_441 = &l_343;
            char **l_440 = &l_441;
            l_340 = &g_246;
            (*g_347) = (((((*l_345) = (safe_mul_func_uint16_t_u_u(l_343, ((**l_340) = 0UL)))) ^ (*g_171)) >= g_323) != l_346);
            if (((*l_345) = 0xA5684FDDL))
            {
                const short l_369 = 0xE4A0L;
                if ((1L & p_17))
                {
                    return l_348;
                }
                else
                {
                    short l_352 = (-1L);
                    unsigned *l_354 = (void*)0;
                    unsigned long long *l_359 = &l_348;
                    int l_370 = 0x6CC08418L;
                    short *l_381 = (void*)0;
                    short *l_382 = &g_336;
                    short *l_383 = &l_352;
                    char *l_384 = &g_109;
                    for (g_101 = 14; (g_101 > 21); g_101 = safe_add_func_int8_t_s_s(g_101, 9))
                    {
                        (*l_345) = l_351;
                        (*l_345) = (p_16 == p_17);
                        if (p_17)
                            break;
                        l_353 = l_352;
                    }
                    l_370 = func_25(((*l_345) = 0x4C70344BL), (safe_mul_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(((*l_359) = g_336), (safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s(0L, (((~65534UL) & (*g_173)) & (!(safe_add_func_int64_t_s_s(l_366, p_17)))))), (safe_rshift_func_int16_t_s_s(((0x6BL | (4L > l_369)) >= l_352), p_17)))))) || p_17), g_323)));
                    (*l_345) = (safe_mod_func_int64_t_s_s((g_207 < (p_17 && ((safe_add_func_uint8_t_u_u((~p_16), p_17)) == (-10L)))), 18446744073709551614UL));
                    return l_366;
                }
            }
            else
            {
                int *l_387 = &g_66;
                int **l_388 = &g_79;
                unsigned l_389 = 1UL;
                unsigned char *l_390 = (void*)0;
                unsigned *l_399 = &g_207;
                unsigned *l_411 = &g_308;
                unsigned **l_410 = &l_411;
                int *l_456 = &g_66;
                int l_500 = 0x22E6F69BL;
                (*l_388) = (l_387 = func_56((safe_sub_func_int64_t_s_s(p_17, 0UL)), p_16, (*g_246), &l_351));
                (*l_388) = (*g_114);
                if ((~l_389))
                {
                    (*g_391) = ((*l_345) = ((void*)0 != l_390));
                }
                else
                {
                    int *l_392 = &g_101;
                    short **l_423 = &l_422;
                    (*l_388) = l_392;
                    l_353 = (safe_div_func_uint16_t_u_u((*g_246), (*g_173)));
                    if ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((*g_171) <= 0x43CEFC9DL), 7)), ((((l_399 = (void*)0) == (void*)0) ^ ((~(l_400 != l_401)) == (func_25(p_16, (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_17, (*g_173))), l_353))) != (*g_173)))) && (*l_392)))))
                    {
                        unsigned long long *l_424 = (void*)0;
                        unsigned long long *l_425 = &l_348;
                        unsigned long long l_427 = 0x03E1795524EEA1D0LL;
                        const char *l_429 = &l_346;
                        const char **l_428 = &l_429;
                        (*g_412) = l_410;
                        (*l_345) = p_16;
                        (*l_409) = ((safe_mod_func_uint32_t_u_u(0x4BBB4929L, (safe_mul_func_int8_t_s_s(p_16, l_427)))) <= p_16);
                        (*g_430) = l_428;
                    }
                    else
                    {
                        (*l_388) = (*l_388);
                        (*l_388) = (*l_388);
                    }
                    if ((safe_lshift_func_int8_t_s_s(p_17, 1)))
                    {
                        (*l_345) = p_17;
                    }
                    else
                    {
                        return (*l_392);
                    }
                }
                if ((*g_111))
                {
                    unsigned char *l_437 = &g_149;
                    char ***l_442 = &l_440;
                    long long *l_445 = &g_446;
                    int *l_457 = &g_101;
                    short **l_466 = &l_422;
                    (*l_345) = 0xDCDE8078L;
                    (*l_388) = (void*)0;
                    (*l_388) = func_56((l_346 != (safe_sub_func_int16_t_s_s(p_16, 1L))), p_17, p_17, &l_351);
                    if (func_52((((*l_445) = (safe_rshift_func_uint8_t_u_s((&g_432 == &g_432), 2))) != ((void*)0 == l_449)), (safe_div_func_uint16_t_u_u(func_67(&l_351), 0x26B4L)), l_452))
                    {
                        if ((*g_391))
                            break;
                        (*l_388) = (*g_114);
                        return (*g_246);
                    }
                    else
                    {
                        int l_453 = 7L;
                        unsigned long long *l_473 = &l_348;
                        l_457 = func_56(((((l_453 > (p_16 > (safe_rshift_func_uint16_t_u_u((p_16 >= (*g_171)), 9)))) >= ((*l_441) = func_67(((*l_388) = &l_351)))) >= (*g_246)) >= p_17), p_17, (*g_246), l_456);
                        (*l_456) = (safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((*l_457) = ((*g_171) = (safe_rshift_func_uint8_t_u_u((func_25((l_466 == &l_422), p_16) ^ ((((((g_149 != (*g_171)) & ((*l_473) = (safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(4294967295UL, ((safe_sub_func_int8_t_s_s((p_17 || p_17), p_16)) == (-9L)))), 6)))) >= l_353) ^ (*l_345)) != 0x80D6E976L) <= p_16)), 0)))), g_474)), g_474));
                        if ((*g_391))
                            break;
                    }
                }
                else
                {
                    long long l_475 = 0L;
                    int l_476 = 1L;
                    unsigned *l_482 = &g_308;
                    unsigned ** const l_481 = &l_482;
                    unsigned ** const *l_480 = &l_481;
                    unsigned ** const **l_479 = &l_480;
                    long long *l_489 = &l_475;
                    long long *l_490 = &g_446;
                    long long *l_491 = &g_492;
                    long long *l_493 = &g_494;
                    unsigned short ***l_498 = &l_401;
                    short l_499 = 0xE8AAL;
                    unsigned long long *l_501 = (void*)0;
                    unsigned long long *l_502 = &g_142;
                    if (l_475)
                        break;
                    (*l_388) = func_56(((*g_171) = (*g_171)), l_476, (*l_456), &l_476);
                    (*l_388) = func_56(p_17, (*g_246), (0xB6C4L >= (l_475 < (((*l_479) = (void*)0) != l_483))), l_484);
                    (*g_111) = (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(p_16, 6)), ((*l_502) = (((func_52((((*g_171) = l_475) || ((1L & ((*l_493) = ((*l_491) = ((*l_490) = ((*l_489) = 0x2C4E2E24A8FD97E3LL))))) | (safe_lshift_func_uint8_t_u_u(g_142, 2)))), ((*l_484) | (safe_unary_minus_func_uint32_t_u((((*l_409) && (l_400 == ((*l_498) = l_400))) ^ l_353)))), l_499) | (*l_484)) < 0UL) | l_500))));
                }
            }
        }
        (*l_409) = ((*l_484) = 0x7D5CF267L);
        (*l_504) = &l_422;
        (*l_484) = (safe_sub_func_uint16_t_u_u(((*l_510) = (((**l_340) = ((&g_414 != l_507) | func_28((*l_484)))) ^ (*g_173))), ((*l_512) = ((***l_504) = (*g_173)))));
    }
    else
    {
        int **l_521 = (void*)0;
        int **l_522 = &g_79;
        (*l_522) = func_56(((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(p_16, (safe_mul_func_uint16_t_u_u((0x91F2BCD1L <= (safe_mod_func_int8_t_s_s((**g_431), l_452))), (safe_mul_func_int8_t_s_s((g_109 | (((((p_16 & (((safe_add_func_uint32_t_u_u(p_16, l_353)) != (*g_171)) < 18446744073709551613UL)) < (-1L)) && p_16) & (*g_171)) >= 1L)), (-1L))))))), (**g_431))) | (*g_171)), (*g_246), p_16, &l_353);
    }
    for (g_101 = 29; (g_101 >= (-21)); g_101 = safe_sub_func_uint16_t_u_u(g_101, 7))
    {
        short *l_532 = &g_174;
        short **l_533 = &l_532;
        int l_534 = 0xEA9D46AFL;
        int **l_545 = &g_79;
        const unsigned *l_547 = &g_308;
        int *l_548 = (void*)0;
        int *l_549 = &l_353;
        if (l_452)
            break;
        l_534 = ((p_16 | (l_531 != ((*l_533) = l_532))) & p_16);
        (*g_546) = ((*l_545) = func_56(l_535, l_353, ((l_534 && ((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((g_207 ^ 0xEFL) <= (!(safe_mul_func_int16_t_s_s(l_452, l_346)))) != (((void*)0 != l_544) && g_492)), 0x8A6BL)) || 0x8BC8L), 6)) == (-5L))) > l_534), &l_534));
        (*l_549) = (l_547 != l_547);
    }
    for (g_174 = 0; (g_174 <= 24); ++g_174)
    {
        int *l_560 = &g_66;
        int l_582 = 0x39739993L;
        unsigned **l_598 = (void*)0;
        int *l_604 = &g_66;
        unsigned l_605 = 0xA319C682L;
        short **l_634 = &l_531;
        for (l_353 = 0; (l_353 != (-8)); --l_353)
        {
            unsigned l_568 = 0xC8DBCB41L;
            unsigned long long *l_569 = &g_142;
            char *l_583 = (void*)0;
            char *l_584 = &g_110;
            int l_585 = (-1L);
            l_561 = (l_560 = func_56(((*g_546) == &l_353), (g_554 != g_554), (safe_div_func_int32_t_s_s(((func_28(p_17) < p_17) < p_16), p_17)), l_560));
            if ((*g_347))
                break;
            l_585 = (safe_div_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((*l_569) = l_568), (0x6EA5808736BB284BLL ^ p_16))), 1)) & (((safe_rshift_func_uint8_t_u_u(((g_494 >= 0UL) == ((p_17 == (+p_17)) == ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(0x68L, ((safe_rshift_func_uint16_t_u_u(((*g_246) = (((*l_531) = (safe_lshift_func_uint16_t_u_s((((*l_584) = ((((safe_rshift_func_uint8_t_u_u(((*l_544) = l_582), 4)) != l_568) <= p_17) >= p_16)) | 0x40L), p_17))) <= (*g_173))), p_17)) ^ 18446744073709551607UL))), g_446)) <= p_17))), 2)) && 0UL) & p_16)) > 0x53166E13537D2407LL), 0xF7L));
            for (g_109 = 0; (g_109 >= 14); g_109++)
            {
                return (*g_246);
            }
        }
        if ((*g_347))
        {
            unsigned long long l_602 = 0UL;
            int l_612 = 0L;
            if (p_16)
                break;
            if (p_16)
                break;
            if (p_16)
            {
                if ((*g_111))
                    break;
                if (p_17)
                    continue;
                (*g_588) = (*g_119);
            }
            else
            {
                unsigned char l_589 = 7UL;
                unsigned **l_599 = &g_414;
                unsigned ***l_600 = &l_599;
                int *l_601 = &g_329;
                int **l_603 = &g_120;
                unsigned *l_630 = &g_207;
                unsigned ** const l_629 = &l_630;
                unsigned ** const *l_628 = &l_629;
                unsigned ** const **l_627 = &l_628;
                unsigned ***l_632 = &g_170;
                unsigned ****l_631 = &l_632;
                l_604 = ((*l_603) = func_56(p_17, l_589, (safe_sub_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(p_16, l_589)) <= (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*l_544) = (l_598 == ((*l_600) = l_599))), p_16)), (*g_432)))), ((((*l_601) = (g_109 && 0xD6L)) != l_602) ^ p_17))), l_601));
                if (l_605)
                {
                    const unsigned * const ***l_608 = (void*)0;
                    const unsigned * const *** const *l_607 = &l_608;
                    int l_611 = 0xC2078599L;
                    l_612 = (safe_unary_minus_func_int32_t_s(((p_16 <= (((*l_603) = func_56(p_17, ((*g_246) = ((void*)0 == l_607)), (safe_sub_func_int8_t_s_s((l_611 <= p_16), (l_602 ^ g_110))), &l_582)) != (void*)0)) || 0x7FL)));
                }
                else
                {
                    unsigned long long l_619 = 0x1DC410662D8ED43ALL;
                    unsigned char *l_620 = &l_589;
                    if (p_16)
                        break;
                    (*g_347) = ((((safe_add_func_uint8_t_u_u((((p_16 == (g_494 && (&g_75 != &l_535))) >= 0x3EL) < p_16), ((((*l_620) = ((*l_544) = (safe_mul_func_uint8_t_u_u(g_494, (*l_601))))) & (*l_601)) <= l_346))) & 0UL) | 1UL) | (*g_432));
                }
                (*l_601) = ((p_17 | ((((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(g_146, 0xB4L)) > ((safe_add_func_int64_t_s_s(((*g_173) && ((p_17 || (((*l_627) = &g_170) != ((*l_631) = &g_170))) < (((*g_171) = p_17) == ((*g_173) >= (*g_173))))), 7UL)) <= p_17)), 6)) == (*l_601)) < l_612) && 0xA56584C1L)) != p_16);
                (*l_603) = (*g_546);
            }
        }
        else
        {
            int **l_635 = &l_560;
            (*l_604) = func_28((*l_604));
            if (l_353)
                continue;
            (*l_635) = func_56(((*g_171) = (((*l_531) = (*g_173)) < (&l_531 == l_634))), (*g_246), p_17, (*g_588));
        }
    }
    if ((((void*)0 != l_636) | (safe_rshift_func_uint8_t_u_u(func_52(((0x1854D727L != (*g_171)) ^ (*g_173)), ((*l_644) = (safe_add_func_int32_t_s_s(p_16, (safe_lshift_func_uint16_t_u_u((*g_246), 8))))), (safe_add_func_uint32_t_u_u((p_17 != l_353), 4294967288UL))), 5))))
    {
        const unsigned **l_666 = (void*)0;
        const unsigned ** const *l_665 = &l_666;
        const unsigned ** const * const *l_664 = &l_665;
        unsigned * const ***l_670 = (void*)0;
        int l_685 = (-2L);
        int l_755 = 1L;
        short *l_773 = &g_174;
        int ***l_793 = (void*)0;
        l_561 = &l_353;
        for (g_66 = 0; (g_66 <= 11); g_66++)
        {
            short **l_651 = &l_531;
            unsigned long long *l_654 = &g_142;
            unsigned long long **l_655 = &l_654;
            int l_656 = 2L;
            unsigned **l_657 = &g_171;
            unsigned * const **l_672 = (void*)0;
            unsigned * const ***l_671 = &l_672;
            unsigned long long l_686 = 0x06652DA53EE177A9LL;
            unsigned short **l_694 = (void*)0;
            short l_707 = 1L;
            int **l_709 = &g_120;
            l_656 = ((*l_561) = ((safe_rshift_func_int16_t_s_u(func_28((*l_561)), (((*l_651) = l_531) == (void*)0))) || (safe_add_func_int64_t_s_s(((*l_644) = (&l_535 == ((*l_655) = l_654))), 18446744073709551611UL))));
            if (p_16)
                continue;
            if (p_17)
            {
                int l_658 = 0L;
                char l_659 = 6L;
                const unsigned ** const * const **l_667 = (void*)0;
                const unsigned ** const * const **l_668 = (void*)0;
                const unsigned ** const * const **l_669 = &l_664;
                char ***l_687 = &l_636;
                char **l_689 = &l_637;
                char ***l_688 = &l_689;
                int *l_698 = &l_685;
                const int l_702 = 4L;
                (*g_119) = func_56((((void*)0 == l_657) && l_658), l_659, l_659, &l_658);
                (*l_561) = (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0xACL, ((((*l_669) = l_664) == (l_671 = l_670)) && (safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((g_677 == (void*)0), ((safe_add_func_int16_t_s_s((*g_173), ((*g_246) = (((safe_mod_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((l_685 < (l_686 != (l_685 | 0x1D268B26EDA24937LL))), l_685)) ^ l_685) == 1UL), l_659)) && (*l_561)) <= g_336)))) & g_154))) < p_16), (*l_561)))))), p_16));
                (*g_119) = func_56((*g_171), (func_25((((*l_687) = &l_637) == ((*l_688) = &l_637)), ((safe_add_func_int8_t_s_s(((*l_637) = (-3L)), (((*l_507) = (void*)0) == &g_308))) <= ((((~p_16) || ((void*)0 == l_694)) == g_329) > p_16))) ^ p_17), l_685, &g_66);
                if ((safe_lshift_func_uint16_t_u_s(p_17, func_25(((l_659 && p_17) || g_22), (p_17 ^ (*l_561))))))
                {
                    int *l_697 = &l_685;
                    l_698 = l_697;
                    (*l_561) = p_16;
                }
                else
                {
                    unsigned short l_708 = 0xC47EL;
                    (*l_698) = (safe_add_func_uint32_t_u_u(((*g_555) != l_701), ((l_702 ^ (safe_sub_func_uint8_t_u_u((((**l_655) = (safe_lshift_func_uint8_t_u_s(func_28(l_707), 1))) | g_66), p_17))) >= 0xC050638CB4816DE8LL)));
                    return l_708;
                }
            }
            else
            {
                return l_686;
            }
            (*l_709) = &l_685;
        }
        for (g_492 = (-23); (g_492 < (-12)); g_492 = safe_add_func_uint16_t_u_u(g_492, 7))
        {
            long long l_723 = 1L;
            int l_724 = 0L;
            int *l_765 = &l_724;
        }
        (**g_746) = &l_755;
    }
    else
    {
        unsigned short l_797 = 9UL;
        return l_797;
    }
    return (*g_246);
}







static unsigned long long func_20(const short p_21)
{
    short l_44 = 0x21ADL;
    unsigned long long l_47 = 18446744073709551615UL;
    unsigned long long *l_83 = &g_75;
    unsigned short l_84 = 8UL;
    unsigned short l_85 = 1UL;
    unsigned l_115 = 0xB03F06E9L;
    unsigned long long l_121 = 18446744073709551611UL;
    int l_122 = 0xCEB5E7B3L;
    unsigned long long l_127 = 0x01E4A26432604E4DLL;
    int *l_165 = (void*)0;
    unsigned *l_168 = &g_154;
    unsigned **l_167 = &l_168;
    char *l_187 = &g_110;
    int *l_210 = &g_66;
    char l_222 = 1L;
    long long l_236 = (-4L);
    if ((((safe_mod_func_int16_t_s_s(func_25((func_28((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s((+0L))) < ((func_33(g_22, ((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((((*g_79) = (((*l_83) = ((l_44 <= ((safe_div_func_uint32_t_u_u(l_47, 0xCB7BE74FL)) <= (safe_mod_func_int64_t_s_s(0xE19F8C5172327932LL, (safe_mod_func_uint32_t_u_u(func_52(p_21, ((-1L) > (l_44 <= 1L)), g_22), 5UL)))))) && p_21)) & l_44)) <= 0x4BAFC8D6L), 9)) > l_84), l_84)) > p_21), g_73, l_85) <= p_21) >= 9UL)), 65535UL))) == 4294967291UL), p_21), p_21)) < l_84) < p_21))
    {
        int *l_112 = &g_66;
        (*g_114) = l_112;
    }
    else
    {
        int *l_118 = &g_66;
        (*g_119) = ((*g_78) = func_56(g_110, l_115, (safe_rshift_func_int16_t_s_s((-8L), 7)), l_118));
        l_121 = p_21;
        return g_101;
    }
    (*g_79) = ((l_115 ^ l_85) != l_47);
    if ((l_122 = p_21))
    {
        int l_123 = 7L;
        (*g_120) = l_123;
    }
    else
    {
        short l_124 = 0x622EL;
        int **l_136 = &g_79;
        long long *l_141 = (void*)0;
        unsigned char *l_145 = &g_146;
        unsigned char *l_147 = (void*)0;
        unsigned char *l_148 = &g_149;
        short *l_150 = &l_44;
        short l_152 = 1L;
        unsigned *l_153 = &g_154;
        int *l_159 = (void*)0;
        unsigned char l_189 = 1UL;
        unsigned char l_213 = 3UL;
        char l_305 = (-1L);
        (*l_136) = func_56(l_124, (safe_div_func_int64_t_s_s(l_127, (safe_div_func_int64_t_s_s((((*l_153) = (((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((void*)0 != l_136), (safe_mod_func_uint32_t_u_u((1UL < ((g_142 = (safe_mul_func_int16_t_s_s(g_110, (p_21 <= (**l_136))))) & ((safe_lshift_func_int16_t_s_u((g_151 = ((*l_150) = (func_52((((*l_148) = ((*l_145) = l_121)) == l_121), g_22, p_21) | (-1L)))), l_152)) != g_101))), (*g_79))))), (**l_136))), p_21)) || 0UL) < (**l_136))) == (**l_136)), p_21)))), g_109, (*l_136));
        for (l_85 = 0; (l_85 < 31); l_85 = safe_add_func_int64_t_s_s(l_85, 8))
        {
            unsigned l_186 = 4294967288UL;
            char **l_188 = &l_187;
            unsigned char l_190 = 1UL;
            (*l_136) = &l_122;
            if ((*g_79))
            {
                unsigned short l_160 = 0x0F12L;
                int *l_161 = &g_66;
                int *l_166 = &g_151;
                for (l_122 = (-23); (l_122 == (-19)); ++l_122)
                {
                    (*g_120) = (g_22 <= l_160);
                    l_161 = func_56(g_109, p_21, l_160, (*l_136));
                }
                if ((((l_122 < 1L) == ((l_147 != (void*)0) & l_122)) ^ g_66))
                {
                    for (l_44 = 0; (l_44 >= 19); l_44 = safe_add_func_int8_t_s_s(l_44, 4))
                    {
                        int *l_164 = &g_151;
                        l_165 = l_164;
                        (*l_164) = ((void*)0 == &g_149);
                        (*l_136) = l_166;
                        (*l_164) = func_67((*l_136));
                    }
                    (**l_136) = p_21;
                    (*g_169) = l_167;
                    (**l_136) = ((*g_120) = (safe_unary_minus_func_int64_t_s((((p_21 || (g_173 == &p_21)) ^ (p_21 && g_110)) | (***g_169)))));
                }
                else
                {
                    (*l_161) = 0L;
                }
            }
            else
            {
                const int *l_175 = &g_66;
                (*g_176) = l_175;
                (*g_120) = func_25((safe_add_func_uint32_t_u_u(0xF6E1A6A6L, (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_21, 9)), (**l_136))))), (*g_171));
            }
            (*l_136) = func_56(((safe_add_func_int32_t_s_s(((*g_120) = l_186), (((*l_188) = l_187) != l_145))) | (((*g_173) | func_28((*g_173))) == l_189)), ((!p_21) >= l_190), p_21, &l_122);
        }
        for (l_44 = (-21); (l_44 >= 14); l_44++)
        {
            unsigned long long l_197 = 0x0BF509ED19117335LL;
            int *l_214 = &g_101;
            unsigned ****l_215 = (void*)0;
            unsigned ***l_217 = &g_170;
            unsigned ****l_216 = &l_217;
            unsigned short *l_245 = (void*)0;
            unsigned short *l_248 = &g_247;
            int l_322 = 0x2518C595L;
            if ((safe_rshift_func_uint8_t_u_s(((1L <= func_28(p_21)) || func_28(p_21)), 4)))
            {
                return g_22;
            }
            else
            {
                short *l_202 = &l_124;
                int l_208 = 3L;
                unsigned short *l_209 = &l_84;
                unsigned ***l_211 = &g_170;
                unsigned ***l_212 = &l_167;
                (*l_136) = func_56(((safe_sub_func_uint16_t_u_u((l_197 > (((*l_153) = 0x8D1BEA04L) <= (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_21, 7)), ((*l_202) = ((*g_173) = p_21)))))), p_21)) != g_75), ((*l_209) = ((safe_mul_func_uint8_t_u_u(0x95L, ((*l_187) = (l_197 >= ((safe_mul_func_int16_t_s_s((l_208 = (g_207 = 4L)), 5UL)) == g_66))))) <= p_21)), g_101, l_210);
                (*l_210) = ((*g_173) && ((((*l_211) = &l_168) != ((*l_212) = &g_171)) | l_213));
                (*l_136) = l_214;
            }
        }
    }
    (*g_176) = (void*)0;
    return g_75;
}







static short func_25(const unsigned p_26, unsigned p_27)
{
    int **l_105 = &g_79;
    char *l_108 = &g_109;
    (*l_105) = (*g_78);
    (*l_105) = (void*)0;
    (*g_78) = (void*)0;
    (*g_111) = (p_26 != (safe_mod_func_uint16_t_u_u(((p_27 & g_22) <= (g_110 = ((*l_108) = p_27))), p_27)));
    return g_109;
}







static unsigned func_28(short p_29)
{
    int **l_104 = &g_79;
    (*l_104) = (void*)0;
    return p_29;
}







static unsigned long long func_33(const int p_34, short p_35, unsigned p_36, long long p_37)
{
    long long l_86 = 0x9EED1686206571F6LL;
    short l_99 = 5L;
    int *l_100 = &g_101;
    long long l_102 = 2L;
    int *l_103 = (void*)0;
    (*l_100) = func_67(func_56(l_86, (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(0L, 3)) >= p_34), g_75)), ((safe_lshift_func_int8_t_s_s(l_86, 4)) <= ((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(l_86, 2)) ^ ((safe_mod_func_uint64_t_u_u(l_99, (+func_67((*g_78))))) & p_36)), l_86)) | g_22)), l_100));
    l_100 = func_56((*l_100), p_37, l_102, (l_103 = (void*)0));
    return (*l_100);
}







static unsigned func_52(int p_53, long long p_54, int p_55)
{
    const int * const l_65 = &g_66;
    int *l_80 = &g_66;
    l_80 = func_56((g_75 = (safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u(((l_65 == l_65) | g_22), 1)) <= 1L), func_67(&p_55)))), (*l_65), (((safe_add_func_int64_t_s_s((&l_65 == g_78), 0x9665FEC6B039B7C3LL)) == p_54) && g_66), l_80);
    return p_54;
}







static int * func_56(unsigned p_57, unsigned short p_58, unsigned short p_59, int * p_60)
{
    int *l_81 = &g_66;
    int *l_82 = (void*)0;
    l_82 = l_81;
    return (*g_78);
}







static unsigned short func_67(int * p_68)
{
    const int *l_72 = &g_73;
    const int **l_71 = &l_72;
    long long l_74 = (-7L);
    (*p_68) = (safe_div_func_uint32_t_u_u((((*l_71) = p_68) == p_68), l_74));
    return (**l_71);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_783, "g_783", print_hash_value);
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_1058, "g_1058", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
