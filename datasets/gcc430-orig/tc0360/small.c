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



static volatile short g_2 = 1L;
static int g_4 = 0x136951ADL;
static int *g_6 = (void*)0;
static int *g_21 = &g_4;
static int ** const g_20 = &g_21;
static unsigned g_51 = 18446744073709551615UL;
static unsigned short g_78 = 65535UL;
static unsigned char g_87 = 1UL;
static int g_92 = 0xA623B0D7L;
static int g_99 = 0x3015DB4CL;
static unsigned char g_103 = 0x89L;
static short g_109 = (-1L);
static int g_111 = (-8L);
static long long g_148 = 0x568BFC0376B33B0CLL;
static char g_159 = 3L;
static short g_166 = 0x058FL;
static unsigned g_167 = 8UL;
static volatile char g_171 = (-1L);
static volatile char * const g_170 = &g_171;
static volatile char * const *g_169 = &g_170;
static const int *g_176 = &g_4;
static const int **g_175 = &g_176;
static unsigned long long g_191 = 2UL;
static int * const *g_200 = (void*)0;
static int * const **g_199 = &g_200;
static char *g_211 = &g_159;
static char **g_210 = &g_211;
static long long g_221 = (-7L);
static const int g_238 = 5L;
static const int g_240 = 0L;
static int *g_246 = &g_92;
static unsigned g_266 = 0x7DA01E1DL;
static volatile short *g_313 = (void*)0;
static volatile short ** const g_312 = &g_313;
static unsigned long long *g_374 = &g_191;
static unsigned long long **g_373 = &g_374;
static unsigned long long ***g_372 = &g_373;
static unsigned long long ***g_376 = (void*)0;
static unsigned long long g_445 = 0x5433034EC3051B70LL;
static char g_447 = (-1L);
static unsigned g_475 = 4294967292UL;
static volatile unsigned short g_478 = 0x34B7L;
static unsigned long long g_512 = 0x571C0BE7F1C5C8A5LL;
static volatile unsigned g_536 = 0x4C4400A9L;
static volatile unsigned *g_535 = &g_536;
static volatile unsigned **g_534 = &g_535;
static int g_614 = (-2L);
static short g_660 = 0L;
static int g_661 = 5L;
static short *g_678 = (void*)0;
static short * const *g_677 = &g_678;
static long long g_700 = 0L;
static int **g_748 = &g_246;



static long long func_1(void);
static const unsigned func_7(int p_8);
static int * func_15(int ** const p_16, long long p_17, int ** const p_18, int ** p_19);
static int * func_27(int * const ** p_28, int *** p_29);
static int * const ** func_30(int * const * p_31, int p_32);
static int ** func_33(int * p_34, int * const p_35, int ** p_36);
static int * const func_37(char p_38, unsigned p_39, long long p_40, int * const * p_41, const int ** p_42);
static long long func_45(unsigned p_46, long long p_47, unsigned p_48, unsigned p_49);
static long long func_55(int p_56, int p_57, short p_58);
static const char func_63(unsigned * p_64, const unsigned p_65, unsigned long long p_66);
static long long func_1(void)
{
    int *l_3 = &g_4;
    int **l_5 = &l_3;
    int * const l_9 = &g_4;
    int l_795 = 0x005C1C02L;
    (*l_5) = (g_2 , l_3);
    l_795 = ((*l_9) = (((g_6 = ((*l_5) = (*l_5))) != ((&g_4 != (func_7((g_4 , (0xF5047C4DL > ((void*)0 == l_9)))) , l_9)) , l_9)) ^ g_221));
    return g_478;
}







static const unsigned func_7(int p_8)
{
    int l_14 = 6L;
    int **l_26 = &g_21;
    unsigned char l_751 = 0x9CL;
    unsigned *l_756 = (void*)0;
    unsigned short *l_761 = &g_78;
    long long *l_762 = &g_221;
    char l_763 = 0L;
    unsigned *l_764 = &g_167;
    char l_774 = (-2L);
    int * const *l_780 = (void*)0;
    unsigned short **l_782 = &l_761;
    for (g_4 = 0; (g_4 != 15); g_4 = safe_add_func_uint32_t_u_u(g_4, 2))
    {
        int ** const l_22 = (void*)0;
        for (p_8 = 29; (p_8 >= 26); p_8 = safe_sub_func_uint16_t_u_u(p_8, 2))
        {
            int ***l_23 = (void*)0;
            int **l_25 = (void*)0;
            int ***l_24 = &l_25;
        }
        if (p_8)
            break;
    }
    (*g_20) = (*l_26);
    for (g_167 = 0; (g_167 >= 59); g_167 = safe_add_func_int8_t_s_s(g_167, 2))
    {
        (*l_26) = &p_8;
    }
    for (g_166 = 0; (g_166 > 0); g_166 = safe_add_func_int16_t_s_s(g_166, 8))
    {
        unsigned char *l_771 = (void*)0;
        unsigned char *l_772 = &g_87;
        int l_773 = (-1L);
        unsigned short *l_775 = &g_78;
        int **l_781 = &g_246;
        unsigned **l_789 = &l_756;
        unsigned ***l_790 = &l_789;
        (*g_21) = ((safe_lshift_func_uint8_t_u_u(((*l_772) = (~5UL)), 2)) | ((l_773 , ((l_774 == (l_775 != (void*)0)) >= p_8)) , p_8));
        if ((((**g_534) >= (safe_div_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u(18446744073709551611UL, (l_780 == ((!((g_512 | (**l_26)) | l_773)) , l_781)))) == g_4), (**l_26)))) == 0x21C7L))
        {
            if (p_8)
                break;
        }
        else
        {
            l_782 = &l_775;
        }
        (**g_20) = ((+p_8) , ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0x05L, ((**l_26) >= (safe_mul_func_uint16_t_u_u((p_8 ^ ((*l_772) = (((*l_790) = l_789) != &l_756))), ((*l_761) = ((((*g_211) = (l_773 != (func_45(((((*l_761) = (l_773 & ((*g_211) = (safe_mod_func_uint32_t_u_u(((p_8 && g_238) , p_8), p_8))))) , l_773) , (**l_26)), p_8, g_238, (**l_26)) ^ g_4))) , (void*)0) != (void*)0))))))), 0xC675CD24L)) ^ 1UL));
        for (g_191 = 6; (g_191 == 58); ++g_191)
        {
            (**g_20) = 1L;
        }
    }
    return g_614;
}







static int * func_15(int ** const p_16, long long p_17, int ** const p_18, int ** p_19)
{
    unsigned *l_50 = &g_51;
    int l_52 = (-4L);
    char *l_153 = (void*)0;
    int l_154 = 2L;
    unsigned char l_157 = 252UL;
    int * const *l_174 = &g_21;
    int **l_177 = &g_21;
    unsigned short *l_737 = &g_78;
    short **l_738 = &g_678;
    unsigned short l_743 = 0x1EF5L;
    short l_744 = (-1L);
    short *l_745 = (void*)0;
    short *l_746 = &g_166;
    int ** const l_747 = &g_246;
    (*g_175) = func_27(func_30(func_33((*p_16), func_37(g_2, ((safe_sub_func_uint16_t_u_u((((func_45(((*l_50) = g_4), l_52, ((((safe_div_func_int64_t_s_s(func_55((*g_21), (*g_21), (((((l_154 = ((safe_add_func_int16_t_s_s((!g_4), (1UL > (safe_add_func_int8_t_s_s(func_63(g_21, l_52, g_4), 6L))))) || 0x6A709CE9L)) <= g_4) && l_154) , 18446744073709551615UL) < l_52)), l_157)) & l_52) | l_52) ^ g_4), l_157) , 1L) > 3L) , 0x7574L), g_159)) == 1L), g_4, l_174, g_175), l_177), p_17), &l_177);
    g_748 = (((*l_737) = (4294967291UL <= ((*g_20) == (*l_174)))) , ((((l_738 = l_738) != (((*l_746) = ((!((safe_sub_func_int32_t_s_s(l_52, ((((p_17 == (safe_add_func_int32_t_s_s((p_17 | p_17), l_157))) >= 0x3E23L) > 65529UL) , l_744))) <= p_17)) != (-3L))) , &l_745)) ^ g_111) , l_747));
    return (*p_19);
}







static int * func_27(int * const ** p_28, int *** p_29)
{
    const short l_201 = (-1L);
    int *l_202 = &g_99;
    char *l_203 = &g_159;
    char **l_212 = &l_203;
    const int **l_282 = &g_176;
    unsigned long long ***l_375 = &g_373;
    const int l_414 = (-6L);
    const unsigned short l_459 = 0x497DL;
    long long l_504 = 0xF5871EF909DA0BEALL;
    unsigned short l_506 = 0x6F57L;
    int * const l_613 = &g_614;
    int * const *l_612 = &l_613;
    unsigned long long l_615 = 0UL;
    unsigned l_639 = 0x80BCB61FL;
    int **l_736 = &l_202;
lbl_270:
    (*l_202) = l_201;
    if ((((*l_203) = 5L) != (&l_202 != (*g_199))))
    {
        unsigned long long l_206 = 18446744073709551611UL;
        int *l_244 = &g_92;
        int l_267 = 0x07224A2DL;
        int l_283 = 0x7CFD0987L;
        unsigned short l_322 = 0x4C6DL;
        unsigned char l_354 = 0x86L;
        int *l_363 = (void*)0;
        const int *l_387 = &l_283;
        unsigned long long ***l_419 = &g_373;
        unsigned **l_420 = (void*)0;
        unsigned *l_422 = &g_51;
        unsigned **l_421 = &l_422;
        int l_423 = 0x1B0B3959L;
        unsigned *l_424 = &g_266;
        short l_520 = 1L;
        for (g_51 = 2; (g_51 >= 33); ++g_51)
        {
            long long l_216 = (-1L);
            if ((*l_202))
                break;
            (*l_202) = l_206;
            if ((**g_20))
                break;
            for (g_166 = (-8); (g_166 <= 15); g_166++)
            {
                short l_209 = 0L;
                long long *l_213 = &g_148;
                (*l_202) = func_55((*l_202), (func_45(l_209, ((*l_213) = ((l_212 = g_210) == (void*)0)), (*l_202), g_171) || (safe_add_func_uint64_t_u_u((((g_148 = (*l_202)) & (l_206 > (***p_29))) == (*l_202)), l_206))), l_216);
            }
        }
        if (func_45((safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((*l_202), g_51)), ((*l_202) <= g_221))), l_206, g_109, (*l_202)))
        {
            unsigned long long l_230 = 0UL;
            long long *l_231 = &g_221;
            short *l_232 = (void*)0;
            short *l_233 = &g_166;
            const int *l_236 = &g_99;
            const char *l_256 = &g_159;
            int l_291 = 0xFA29A9D7L;
            unsigned long long *l_302 = (void*)0;
            long long l_334 = (-1L);
            int l_369 = 2L;
            unsigned long long ****l_377 = &l_375;
            short l_386 = (-5L);
            int l_416 = 1L;
            if ((((safe_div_func_uint32_t_u_u(0xACA34AA7L, l_206)) == ((((*g_199) = (*p_29)) != (void*)0) ^ (((safe_mod_func_uint32_t_u_u(func_45((safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(g_109, func_55(l_206, func_55(l_230, l_206, ((*l_233) = ((((*l_231) = (g_92 >= l_206)) >= g_99) > 1UL))), g_2))), g_111)), l_206, l_201, l_230), 4294967295UL)) , 1L) != l_206))) , (-7L)))
            {
                const int *l_237 = &g_238;
                int l_252 = (-9L);
                int l_253 = 0L;
                unsigned long long l_260 = 6UL;
                unsigned long long l_263 = 0x08DB1603EDA3869ALL;
                int * const *l_268 = &l_202;
                for (g_111 = 0; (g_111 >= (-1)); g_111--)
                {
                    const int *l_239 = &g_240;
                    int *l_245 = (void*)0;
                    int l_254 = 0xD358E9FEL;
                    unsigned *l_264 = &g_167;
                    unsigned *l_265 = &g_266;
                    int **l_269 = &g_21;
                    if ((*l_202))
                    {
                        const int **l_241 = &l_236;
                        int l_249 = 4L;
                        (*l_241) = (l_239 = (l_237 = ((*g_175) = l_236)));
                        (*g_175) = l_236;
                        l_254 = (((((((*l_231) = (-1L)) <= (((g_78 = (safe_rshift_func_int8_t_s_s((*g_170), l_206))) , (l_244 == (g_246 = l_245))) , (safe_lshift_func_int16_t_s_u(g_92, 3)))) || l_249) >= (((safe_add_func_int32_t_s_s((l_252 = ((*l_202) = (***g_199))), (func_45(g_87, g_4, l_206, g_92) >= l_201))) > 0x8107E6F1L) , g_240)) | l_253) || (*l_237));
                        if ((***p_28))
                            continue;
                    }
                    else
                    {
                        char *l_255 = &g_159;
                        (*l_202) = (((((void*)0 != l_255) ^ ((*g_210) != l_256)) , func_55((safe_unary_minus_func_int16_t_s(((*l_239) != (safe_lshift_func_int16_t_s_u((g_240 , (((void*)0 == &l_256) < 0L)), 8))))), l_260, (*l_236))) > g_51);
                    }
                    (*l_269) = (**p_28);
                    if (g_92)
                        goto lbl_270;
                }
                for (g_87 = 0; (g_87 != 56); g_87++)
                {
                    unsigned l_281 = 0x24E66764L;
                    for (g_51 = 0; (g_51 == 27); g_51++)
                    {
                        int **l_275 = &g_21;
                        unsigned long long *l_276 = &l_263;
                        (*l_202) = (***p_29);
                        (*l_275) = (**p_28);
                        (**l_268) = (***g_199);
                        (*l_275) = (*g_20);
                    }
                    l_283 = ((l_202 == l_236) > (*l_202));
                }
                for (l_206 = 12; (l_206 <= 8); --l_206)
                {
                    if ((***p_28))
                    {
                        short l_287 = 9L;
                        l_287 = (safe_unary_minus_func_int32_t_s((***p_29)));
                        (**l_268) = (***p_29);
                        (*g_20) = (*g_20);
                        return (**p_29);
                    }
                    else
                    {
                        char l_288 = 0xE6L;
                        l_288 = (***p_28);
                        if ((**g_200))
                            continue;
                        if ((***p_28))
                            break;
                    }
                    l_283 = ((0L > (**l_268)) > 0x46L);
                }
            }
            else
            {
                unsigned char l_297 = 251UL;
                unsigned long long *l_300 = &l_206;
                unsigned long long **l_301 = &l_300;
                unsigned long long *l_304 = (void*)0;
                unsigned long long **l_303 = &l_304;
                int * const *l_324 = &l_202;
                int *l_353 = (void*)0;
                (*l_202) = (***p_28);
                for (g_191 = 0; (g_191 != 46); ++g_191)
                {
                    if ((l_291 = l_206))
                    {
                        short * const *l_293 = &l_232;
                        short * const **l_292 = &l_293;
                        (*l_292) = (void*)0;
                        return (*g_20);
                    }
                    else
                    {
                        int **l_294 = &l_202;
                        if (l_201)
                            goto lbl_270;
                        (*l_202) = (-10L);
                        (*l_294) = (**p_28);
                        return (*g_20);
                    }
                }
                if ((((*g_170) , ((safe_div_func_uint64_t_u_u(func_45(l_297, (18446744073709551615UL > (*l_202)), (safe_rshift_func_int16_t_s_u((*l_236), 2)), l_297), 8L)) , (((*l_303) = (l_302 = ((*l_301) = l_300))) == (void*)0))) , l_267))
                {
                    short **l_307 = (void*)0;
                    const int l_308 = 0x8DCBE901L;
                    unsigned l_320 = 18446744073709551609UL;
                    const char l_323 = (-1L);
                    char l_356 = 0x76L;
                    int *l_359 = (void*)0;
                    if ((((((*l_212) == (void*)0) != l_297) <= (*l_202)) ^ ((((((*l_203) = (((((safe_mod_func_int64_t_s_s((((((!((((g_111 , &g_109) == (l_233 = &g_109)) , g_191) <= (((4294967294UL == (*l_202)) , 7UL) , 2L))) & l_267) <= (***p_28)) < g_167) <= (*l_202)), l_308)) | l_297) | (*l_236)) >= l_267) , 0x51L)) , 18446744073709551607UL) >= (*l_236)) <= (**g_169)) != 0x19L)))
                    {
                        short l_311 = 0x7CE2L;
                        unsigned *l_321 = &g_266;
                        const int **l_325 = &l_236;
                        unsigned l_330 = 18446744073709551615UL;
                        (**p_29) = (void*)0;
                        (*g_20) = func_37((~(~(((func_45(((l_307 != ((((safe_sub_func_uint16_t_u_u((*l_236), g_148)) != l_311) != ((**l_301) = (*l_202))) , g_312)) , (safe_mod_func_int32_t_s_s(((*l_202) = (((((*l_321) = func_55(((*p_28) == (g_171 , func_33((((*l_300) = (safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((*l_202) ^ g_111), l_320)), 0xCFB443967D9A33A0LL))) , l_202), (**g_199), &g_21))), l_311, (*l_236))) & 1UL) || 1UL) >= 7UL)), l_311))), g_111, g_78, l_322) ^ g_191) <= g_87) < l_323))), g_87, l_230, l_324, l_325);
                        l_330 = ((safe_rshift_func_int16_t_s_u((*l_236), (65528UL >= (p_28 != (void*)0)))) <= ((((safe_div_func_uint8_t_u_u(g_166, 4UL)) != ((**g_210) = func_45((*l_236), g_78, l_323, g_266))) < (*l_202)) ^ g_51));
                        (***p_28) = (*l_236);
                    }
                    else
                    {
                        const unsigned l_333 = 0UL;
                        int **l_351 = (void*)0;
                        int **l_352 = &l_244;
                        unsigned *l_355 = &g_167;
                        (**l_324) = func_55((+(safe_add_func_uint32_t_u_u((1UL == l_267), l_333))), (((*g_211) = ((func_45(l_334, (safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((*l_233) = (~l_323)) | ((*l_202) = ((safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u((65529UL || (safe_add_func_int32_t_s_s(((((*l_355) = (safe_mod_func_int32_t_s_s(((((safe_sub_func_int16_t_s_s(((*l_202) , (+(((*l_231) = ((func_45((((((*l_352) = l_202) != ((7UL == l_308) , l_353)) , 0x9FL) , 0x3C3B6587L), (*l_236), l_333, g_238) , &g_211) != &l_203)) ^ l_333))), 0x319BL)) , l_283) , 2UL) != l_354), (*l_202)))) > g_240) , 0xD9FE412EL), (*l_202)))), (-9L))), 65535UL)) < g_2), 4)) , (-3L)))), g_159)), 0x5A45L)), l_333, g_159) & l_356) , (**g_169))) <= 0xA9L), g_4);
                    }
                    for (l_297 = 0; (l_297 < 19); ++l_297)
                    {
                        l_359 = (**p_28);
                        return (*g_20);
                    }
                    for (g_166 = (-29); (g_166 <= (-28)); g_166++)
                    {
                        unsigned long long ***l_362 = &l_301;
                        (**l_324) = (***p_28);
                        (*l_362) = (void*)0;
                        (*g_175) = (*g_20);
                    }
                }
                else
                {
                    int *l_367 = (void*)0;
                    int *l_368 = &l_291;
                    l_363 = ((*g_20) = (*g_20));
                    for (l_322 = (-20); (l_322 < 9); l_322++)
                    {
                        int *l_366 = &l_283;
                        return (*g_20);
                    }
                    l_369 = ((*l_368) = ((**l_324) = (0xCE98FE0EL > 0xB9FB36EDL)));
                }
                for (g_103 = 17; (g_103 > 20); g_103 = safe_add_func_uint8_t_u_u(g_103, 5))
                {
                    (*g_175) = ((**p_29) = (void*)0);
                }
            }
            l_387 = (*l_282);
            if ((*l_236))
            {
                int **l_390 = &g_21;
                (*l_202) = ((void*)0 != &g_167);
                (*l_390) = ((g_99 = (safe_rshift_func_int16_t_s_s(0x2733L, 9))) , (**g_199));
            }
            else
            {
                unsigned char l_399 = 0x66L;
                for (g_166 = 16; (g_166 < (-1)); g_166--)
                {
                    unsigned l_415 = 0xBCCEDB56L;
                    int **l_417 = &l_363;
                    for (l_283 = (-3); (l_283 < 3); ++l_283)
                    {
                        char l_402 = 0xA8L;
                        short *l_403 = (void*)0;
                        short *l_404 = (void*)0;
                        short *l_405 = &g_109;
                        unsigned short *l_412 = (void*)0;
                        unsigned short *l_413 = &g_78;
                        (*l_202) = (((((safe_lshift_func_int8_t_s_u((1UL | ((safe_sub_func_int64_t_s_s(l_399, ((*g_374) = ((**g_169) || 0L)))) && (func_55(((safe_lshift_func_int8_t_s_s(0L, 1)) , l_399), (((*l_405) = l_402) > (safe_div_func_int16_t_s_s(l_402, (((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((((*l_413) = 0xCAF1L) , l_402), l_414)), 7)) >= l_415) ^ 65535UL)))), l_399) == 0x56L))), g_92)) && g_111) , l_402) < l_416) | 247UL);
                    }
                    (*l_417) = func_37(l_415, g_238, g_103, (*g_199), &l_236);
                }
            }
            l_291 = 0x6DFAE1C6L;
        }
        else
        {
            int *l_418 = &g_4;
            (*l_282) = (*l_282);
            return l_418;
        }
        if (((l_419 != (l_375 = &g_373)) < (((*l_424) = g_148) == (-1L))))
        {
            int l_436 = 0xA3D9CF59L;
            int l_476 = 1L;
            int * const *l_479 = (void*)0;
            const int l_505 = 0xFA79A000L;
            char l_507 = 0L;
            unsigned short l_509 = 4UL;
            unsigned short l_526 = 0x3680L;
            const int **l_533 = &g_176;
            for (g_166 = 0; (g_166 >= 22); g_166++)
            {
                short l_448 = 0x0A92L;
                int l_466 = 4L;
                int l_467 = 0x3D9B70BCL;
                long long *l_468 = &g_221;
                const int ***l_521 = &l_282;
                unsigned short l_522 = 0xE935L;
                int l_531 = 0x49C35A51L;
            }
        }
        else
        {
            unsigned long long ***l_539 = &g_373;
            long long *l_540 = &g_221;
            int l_541 = 0L;
            unsigned short *l_546 = &l_506;
            g_534 = g_534;
            (*l_282) = (**p_29);
            (*l_202) = ((safe_add_func_uint32_t_u_u(((l_322 | 7UL) >= ((*l_540) = (((*l_202) , l_539) != &g_373))), (((((***l_375) = l_541) || 0UL) && ((*l_202) ^ (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((((*l_546) = 1UL) == g_447), l_541)), 0x44DC1553L)))) > l_541))) , l_322);
        }
    }
    else
    {
        int l_547 = 0x8062EB30L;
        const int *l_549 = &l_414;
        const int **l_548 = &l_549;
        int **l_550 = &g_21;
        unsigned *l_610 = (void*)0;
        short *l_656 = (void*)0;
        short ** const l_655 = &l_656;
        unsigned l_719 = 4294967290UL;
        const int *l_735 = &g_661;
        (*l_550) = func_37((*g_211), l_547, g_2, func_33((**p_29), (*g_20), &g_21), l_548);
        for (l_547 = 0; (l_547 > 26); l_547++)
        {
            long long l_553 = 0L;
            short **l_563 = (void*)0;
            int **l_611 = (void*)0;
            unsigned char *l_632 = &g_87;
            long long l_634 = 0L;
            const int *l_641 = &g_99;
        }
    }
    (*l_736) = (*l_612);
    return (*g_20);
}







static int * const ** func_30(int * const * p_31, int p_32)
{
    int *l_181 = &g_99;
    unsigned char l_195 = 1UL;
    const int **l_196 = (void*)0;
    int * const *l_198 = (void*)0;
    int * const **l_197 = &l_198;
    (*l_181) = 0x8C813946L;
    for (p_32 = 0; (p_32 < 3); p_32 = safe_add_func_int32_t_s_s(p_32, 4))
    {
        unsigned long long *l_190 = &g_191;
        const int l_192 = 0xBC8B4DF1L;
        int ***l_193 = (void*)0;
        const int **l_194 = &g_176;
        (*l_181) = 0x18209F72L;
        (*g_175) = (void*)0;
        (*l_194) = l_181;
    }
    (*g_20) = (*g_20);
    return g_199;
}







static int ** func_33(int * p_34, int * const p_35, int ** p_36)
{
    int *l_178 = &g_4;
    (*g_20) = l_178;
    for (g_51 = (-28); (g_51 == 23); ++g_51)
    {
        (*g_175) = (void*)0;
        if ((*g_21))
            break;
        (*g_175) = (*g_175);
    }
    return &g_21;
}







static int * const func_37(char p_38, unsigned p_39, long long p_40, int * const * p_41, const int ** p_42)
{
    g_99 = (**p_42);
    return (*p_41);
}







static long long func_45(unsigned p_46, long long p_47, unsigned p_48, unsigned p_49)
{
    char *l_158 = &g_159;
    long long l_162 = 0x38516734CF679B51LL;
    unsigned *l_163 = (void*)0;
    unsigned *l_164 = &g_51;
    short *l_165 = &g_166;
    int l_168 = (-1L);
    short l_172 = 0x7265L;
    int *l_173 = (void*)0;
    l_168 = (((((void*)0 == l_158) , ((safe_rshift_func_uint16_t_u_s(g_159, p_46)) , (void*)0)) != g_169) , l_172);
    return l_168;
}







static long long func_55(int p_56, int p_57, short p_58)
{
    int *l_155 = &g_4;
    int *l_156 = &g_99;
    l_155 = l_155;
    (*l_156) = (*l_155);
    return g_109;
}







static const char func_63(unsigned * p_64, const unsigned p_65, unsigned long long p_66)
{
    int *l_67 = &g_4;
    int **l_68 = (void*)0;
    int **l_69 = &l_67;
    unsigned long long l_93 = 0x669D599618DE77BFLL;
    int l_101 = (-9L);
    unsigned long long l_115 = 0x2C0441A9D29CCA17LL;
    int l_121 = 0xB32335DCL;
    unsigned l_128 = 6UL;
    unsigned l_139 = 4294967287UL;
    char l_146 = 0xADL;
    (*l_69) = l_67;
    if ((~((g_78 = ((((p_66 || ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(g_4, g_4)), (safe_sub_func_int8_t_s_s(p_66, g_4)))) <= ((safe_add_func_int32_t_s_s(p_65, ((*l_69) != (*l_69)))) < (*l_67)))) | p_66) < g_4) <= p_65)) == g_4)))
    {
        unsigned char *l_85 = (void*)0;
        unsigned char *l_86 = &g_87;
        int l_88 = 0xA74AB722L;
        int ***l_89 = (void*)0;
        int *l_90 = (void*)0;
        int *l_91 = &g_92;
        l_93 = (((safe_sub_func_uint64_t_u_u(18446744073709551614UL, p_66)) ^ (safe_sub_func_uint16_t_u_u(6UL, (-2L)))) || (safe_add_func_uint32_t_u_u((((*l_86) = g_4) >= ((((*l_91) = ((l_88 , l_89) == l_89)) , (((g_92 , p_66) == g_4) == g_78)) < p_66)), 3L)));
        (*l_69) = &l_88;
        for (g_87 = 0; (g_87 == 58); g_87 = safe_add_func_int8_t_s_s(g_87, 1))
        {
            int *l_96 = &l_88;
            l_96 = (*g_20);
        }
        (**l_69) = (-1L);
    }
    else
    {
        int *l_97 = (void*)0;
        int *l_98 = &g_99;
        unsigned char *l_100 = &g_87;
        unsigned char *l_102 = &g_103;
        (*l_98) = p_66;
        if ((((((*l_100) = (*l_67)) != (((p_65 , (((l_100 != (void*)0) <= p_66) == 1UL)) >= (*l_67)) & ((g_4 == (((*l_102) = ((((!((!(**l_69)) || g_78)) <= (**l_69)) && p_66) > l_101)) == g_99)) <= 0x05L))) && 0x03BE979EL) , (*g_21)))
        {
            const int l_104 = 5L;
            short *l_107 = (void*)0;
            short *l_108 = &g_109;
            char *l_110 = (void*)0;
            (*l_98) = (p_65 , l_104);
            if ((safe_sub_func_int16_t_s_s(((l_104 , (**g_20)) != (((0xF2L == (g_111 = (((*l_108) = l_104) , 1L))) <= 1L) >= g_87)), (((g_103 , g_87) != p_65) > l_104))))
            {
                int l_112 = 0xF8FA6607L;
                int *l_116 = (void*)0;
                (*l_98) = ((**l_69) , (l_112 | (((*l_100) = (safe_rshift_func_uint16_t_u_u(65528UL, p_66))) > l_115)));
                (*l_98) = (((((-6L) == g_78) | l_112) , p_64) != (l_116 = (void*)0));
                (*l_69) = (void*)0;
                (*l_98) = (*l_98);
            }
            else
            {
                g_99 = (g_111 > ((safe_rshift_func_int16_t_s_u((!g_78), 4)) , (safe_lshift_func_int8_t_s_u((p_66 >= l_121), 5))));
            }
        }
        else
        {
            char l_129 = 0x47L;
            int * const l_134 = &l_101;
            for (p_66 = 0; (p_66 > 56); ++p_66)
            {
                unsigned char l_124 = 0UL;
                (*l_98) = (**g_20);
                if ((l_124 = ((*l_98) = (*l_98))))
                {
                    int *l_127 = &l_101;
                    for (g_99 = 0; (g_99 == (-16)); g_99--)
                    {
                        (*l_69) = (l_127 = p_64);
                        (*l_69) = (void*)0;
                        if (l_128)
                            continue;
                        if ((**g_20))
                            continue;
                    }
                    l_129 = 0xCE2C80CFL;
                }
                else
                {
                    int *l_132 = &g_4;
                    for (g_87 = (-16); (g_87 != 6); ++g_87)
                    {
                        int *l_133 = &l_101;
                        int **l_135 = &l_133;
                        l_133 = l_132;
                        (*l_69) = p_64;
                        (*l_135) = l_134;
                        if (p_66)
                            continue;
                    }
                    if (p_65)
                        continue;
                }
                return g_111;
            }
            for (l_115 = 0; (l_115 < 15); l_115++)
            {
                (*l_134) = (p_65 | 0xB6D6L);
                l_139 = (safe_unary_minus_func_uint64_t_u(g_99));
            }
        }
    }
    g_148 = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((g_92 , (p_66 == (safe_rshift_func_uint16_t_u_s(l_146, 4)))) , 0x6666F452L), 0xA9111430L)), (g_111 , (safe_unary_minus_func_uint16_t_u((+(0x90676B532C91DF68LL < g_92)))))));
    if ((*g_21))
    {
        return p_65;
    }
    else
    {
        int *l_151 = &l_101;
        char **l_152 = (void*)0;
        for (g_148 = (-2); (g_148 == (-23)); g_148 = safe_sub_func_uint64_t_u_u(g_148, 8))
        {
            (*l_69) = (l_151 = p_64);
            l_152 = (void*)0;
        }
        (*l_69) = p_64;
    }
    return p_66;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_700, "g_700", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
