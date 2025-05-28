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


union U0 {
   unsigned char f0;
   const unsigned f1;
   short f2;
   short f3;
};


static unsigned g_23 = 0xFC1DA7BCL;
static int g_36 = 0x92E3F915L;
static int g_38 = 0x82E58099L;
static unsigned char g_58 = 0x72L;
static int g_61 = 0x236511F0L;
static short g_80 = 3L;
static int *g_84 = (void*)0;
static int ** const g_83 = &g_84;
static unsigned g_86 = 0x9D5A33B1L;
static union U0 g_94 = {0x74L};
static unsigned short g_99 = 0x0045L;
static int g_102 = 0xCBDC27B9L;
static char g_141 = (-1L);
static unsigned g_144 = 0x2219E070L;
static unsigned short g_152 = 0x1A57L;
static union U0 g_155 = {1UL};
static int g_166 = (-6L);
static short g_251 = 5L;
static int g_253 = 0xEE7814DCL;
static unsigned g_278 = 0x06CB08EFL;
static int * const **g_291 = (void*)0;
static int g_298 = (-1L);
static int g_303 = 0x340ADB00L;
static int *g_302 = &g_303;
static int *g_319 = &g_166;
static int **g_318 = &g_319;
static int * const *g_344 = (void*)0;
static int * const **g_343 = &g_344;
static unsigned g_379 = 0xC5AEE3F4L;
static unsigned g_419 = 18446744073709551614UL;
static unsigned short g_429 = 65535UL;
static char *g_505 = (void*)0;
static char **g_504 = &g_505;
static int **g_518 = &g_84;
static char g_665 = 0x9AL;
static char g_669 = 0xF8L;
static unsigned short *g_739 = &g_99;
static unsigned short **g_738 = &g_739;
static const unsigned short g_831 = 0x2B0EL;
static const unsigned short *g_830 = &g_831;
static const unsigned short **g_829 = &g_830;
static unsigned *g_883 = (void*)0;
static unsigned **g_882 = &g_883;
static int g_959 = 0L;
static unsigned *g_975 = &g_86;
static unsigned **g_974 = &g_975;
static unsigned g_1008 = 0x2D8F3436L;
static int g_1028 = 1L;



static unsigned func_1(void);
static int func_2(unsigned p_3, unsigned char p_4, unsigned p_5, int p_6);
static int func_9(union U0 p_10, unsigned p_11, union U0 p_12, short p_13);
static union U0 func_14(unsigned short p_15, short p_16);
static char func_19(int p_20);
static char func_26(unsigned p_27, union U0 p_28, short p_29, unsigned short p_30, const union U0 p_31);
static unsigned func_39(const int p_40);
static unsigned short func_41(unsigned char p_42, int * p_43);
static int * func_44(int * p_45, int p_46, union U0 p_47, int p_48);
static unsigned short func_51(const int p_52, const int * p_53, union U0 p_54, int p_55);
static unsigned func_1(void)
{
    unsigned l_34 = 0xA67F8B4DL;
    int *l_35 = &g_36;
    int *l_37 = &g_38;
    union U0 l_56 = {0x24L};
    short l_57 = (-10L);
    unsigned short *l_151 = &g_152;
    unsigned l_153 = 4294967295UL;
    unsigned char l_154 = 1UL;
    unsigned *l_310 = (void*)0;
    unsigned *l_311 = &g_86;
    char *l_312 = &g_141;
    unsigned char l_775 = 1UL;
    short l_994 = 0x2890L;
    int *l_1027 = &g_1028;
    (*l_1027) |= func_2((((safe_mod_func_int32_t_s_s(func_9((func_14((safe_lshift_func_int8_t_s_s((-9L), 0)), (4UL > func_19(((safe_mul_func_int16_t_s_s(g_23, (safe_mul_func_int8_t_s_s(0xB6L, func_26((((*l_312) = (safe_mod_func_int32_t_s_s(((*l_37) = ((*l_35) = l_34)), ((*l_311) = func_39(((func_41(g_23, func_44(((g_23 == ((((*l_151) |= (safe_mul_func_uint16_t_u_u(func_51((g_23 , (-1L)), l_35, l_56, l_57), 0x5E6FL))) ^ l_153) >= 0x43L)) , (void*)0), l_154, g_155, g_144)) & l_153) > g_144)))))) < 6UL), g_155, g_144, g_253, g_155))))) , (*l_35))))) , l_56), l_775, g_155, g_23), g_669)) || (*g_302)) >= l_994), g_155.f0, g_144, g_155.f0);

    ;

    return (**g_974);
}







static int func_2(unsigned p_3, unsigned char p_4, unsigned p_5, int p_6)
{
    int **l_997 = &g_302;
    int **l_998 = &g_84;
    int ***l_999 = &l_998;
    const int * const l_1000 = &g_166;
    char *l_1001 = &g_669;
    char *l_1002 = &g_665;
    char *l_1003 = &g_141;
    const union U0 l_1004 = {0xC8L};
    int l_1007 = 0x7967E5B2L;
    int l_1025 = (-1L);
    unsigned l_1026 = 18446744073709551615UL;
    (**l_997) = ((safe_lshift_func_uint16_t_u_u(((l_997 == ((*l_999) = l_998)) && (((void*)0 == l_1000) , func_26(p_5, g_94, (**l_997), (((*l_1003) = ((*l_1002) = ((*l_1001) = (**l_997)))) & p_3), l_1004))), p_5)) , (**l_997));
    (*g_83) = func_44(((func_41(p_6, (*l_997)) && ((safe_rshift_func_int16_t_s_s(((((((**l_997) || ((&l_997 != &l_998) <= (((*g_504) = (*g_504)) != (l_1002 = l_1002)))) , l_1007) <= p_5) == (-2L)) & g_1008), 4)) , g_669)) , (*l_997)), p_5, l_1004, (**g_318));

    ;
    if (g_61)
        goto lbl_1009;
lbl_1009:
    (*l_998) = (*g_83);
    (**l_998) = ((**l_998) ^ (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((**l_998))), (safe_add_func_int8_t_s_s(((*l_1001) = (**l_997)), ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((l_1025 = (**g_518)) | (l_1004 , func_41(p_4, (**l_999)))), (+0L))), 2)) , 0L), 5)) != g_959))))) , l_1026), g_278)), 0x9E5004CDL)));
    return p_3;
}







static int func_9(union U0 p_10, unsigned p_11, union U0 p_12, short p_13)
{
    int **l_776 = &g_319;
    int l_779 = 0x4E5BD31BL;
    short l_791 = 0x1D25L;
    unsigned char l_819 = 0xF1L;
    const unsigned short **l_850 = &g_830;
    int *l_886 = &g_303;
    union U0 l_902 = {0x65L};
    const unsigned *l_973 = &g_86;
    const unsigned **l_972 = &l_973;
    unsigned char *l_991 = &g_94.f0;
    int *l_992 = (void*)0;
    char l_993 = 0x29L;
    if ((g_102 && (0x9EL < ((p_11 ^ ((void*)0 != l_776)) , ((void*)0 == &g_505)))))
    {
        unsigned l_782 = 0x414CF798L;
        char *l_783 = &g_141;
        if (((p_11 , ((safe_div_func_int32_t_s_s((*g_84), (l_779 | ((safe_lshift_func_uint16_t_u_u((((l_782 , g_253) || 0x9F054EEFL) | ((*l_783) = 0xB4L)), p_13)) < g_102)))) && (**g_83))) , p_12.f0))
        {
            int *l_784 = &g_61;
            (*g_518) = l_784;

            ;
            (*l_784) &= p_11;
        }
        else
        {
            (*g_84) = (safe_add_func_int32_t_s_s(l_779, 0UL));
        }
    }
    else
    {
        unsigned char l_824 = 0x1DL;
        union U0 l_857 = {0xEDL};
        int **l_917 = &g_319;
        const int *l_927 = &g_303;
        char *l_939 = (void*)0;
        int l_945 = 0xA9D470ABL;
        int l_958 = 7L;
        int l_960 = 0x045835B1L;
        int l_969 = 0xD356E544L;
        unsigned *l_971 = &g_23;
        short *l_986 = &g_94.f2;
        if ((p_11 || (0UL || (p_11 , l_779))))
        {
            int l_799 = 0xC9C40A73L;
            int ***l_845 = &g_518;
            int **l_851 = (void*)0;
            unsigned short *l_895 = &g_429;
            union U0 l_911 = {247UL};
            char l_912 = 5L;
            unsigned ***l_946 = &g_882;
            if (func_41(p_10.f0, &l_779))
            {
                return p_13;
            }
            else
            {
                union U0 * const l_787 = &g_155;
                int l_788 = 0L;
                (**g_518) = (l_787 != (l_788 , &p_12));
            }
            for (g_36 = (-2); (g_36 >= 20); g_36 = safe_add_func_int8_t_s_s(g_36, 1))
            {
                const union U0 l_810 = {0x22L};
                unsigned char *l_825 = (void*)0;
                int l_856 = 7L;
                unsigned *l_879 = &g_23;
                unsigned char *l_880 = &g_58;
                if (l_791)
                    break;
                for (p_12.f3 = 0; (p_12.f3 > 2); p_12.f3 = safe_add_func_int8_t_s_s(p_12.f3, 7))
                {
                }

                                for (g_94.f3 = 0; (g_94.f3 < 4); g_94.f3 = safe_add_func_int16_t_s_s(g_94.f3, 6))
                {
                    unsigned char l_826 = 0UL;
                    const unsigned short *l_828 = &g_99;
                    const unsigned short **l_827 = &l_828;
                    int *l_852 = (void*)0;
                    int **l_853 = &g_319;
                    unsigned *l_876 = &g_23;
                    short *l_877 = &g_155.f3;
                    short *l_878 = &l_791;
                    if ((((((safe_sub_func_uint16_t_u_u(func_41((1L >= (l_819 | 0L)), ((*g_518) = func_44(func_44((*g_83), ((*g_302) &= (safe_mul_func_int8_t_s_s(((g_278 == ((&g_58 == (func_41((safe_add_func_int32_t_s_s(l_824, g_38)), (*g_518)) , l_825)) <= 0x1713L)) == l_826), p_11))), g_94, (**g_318)), p_11, g_94, p_12.f3))), (*g_739))) | p_13) , 1UL) && 4UL) >= g_298))
                    {
                        unsigned l_840 = 0x75307507L;
                        int ****l_846 = &l_845;
                        char *l_847 = (void*)0;
                        char *l_848 = (void*)0;
                        char *l_849 = &g_141;
                        (**g_518) |= ((g_665 , ((g_829 = l_827) != ((safe_div_func_uint16_t_u_u((((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_298, ((l_840 == (safe_mul_func_int16_t_s_s(p_13, ((safe_sub_func_int16_t_s_s(g_80, p_12.f2)) != ((!(((*l_846) = l_845) != (((*g_302) = ((((+(((*l_849) ^= (0x2F3E790DL & 0xCA8098E7L)) || p_12.f0)) , g_155.f0) <= 0xF5L) || 0UL)) , &g_83))) != p_12.f0))))) , g_23))), l_826)), g_419)) != l_826) == l_824), 0x5F69L)) , l_850))) >= l_810.f0);

                        ;
                        (***l_845) = (*g_302);
                        (**g_83) = l_819;
                    }
                    else
                    {
                        return p_12.f0;
                    }

                    ;
                    if (l_826)
                        break;

                    (**l_845) = ((func_26(l_824, func_14((l_851 != (func_41(p_11, l_852) , l_853)), g_152), (l_791 , p_12.f0), (**g_738), p_12) || l_819) , (*g_518));
                    (***l_845) = (safe_rshift_func_int16_t_s_u(((*l_878) = func_26(l_856, l_857, (safe_add_func_int16_t_s_s(((*l_878) &= (safe_lshift_func_int16_t_s_u((1UL >= (***l_845)), ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((((l_856 && (safe_add_func_uint32_t_u_u(p_13, ((safe_add_func_uint32_t_u_u(((*l_876) ^= (safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((((**g_318) |= (safe_add_func_uint16_t_u_u((((((void*)0 == &l_828) , g_152) , (**g_518)) || p_12.f2), p_12.f3))) , l_779), 9UL)), 0x32916C07L))), 0UL)) != (**g_829))))) != 0xEC68DE5FL) , (***l_845)) , l_856), p_13)), (**g_829))) <= p_11)))), (*g_739))), l_824, p_12)), p_12.f0));
                }

                                if (((((*g_84) = p_10.f0) > ((((((*l_880) ^= (p_12.f0 = func_41(p_10.f0, ((l_819 < (((*l_879) = 0x5F711882L) ^ (l_791 == g_152))) , &l_779)))) >= l_779) >= 0x48L) , p_10.f0) ^ 4294967295UL)) | l_857.f0))
                {
                    short l_881 = 1L;
                    if ((!((*g_739) >= ((1UL ^ l_857.f0) & l_881))))
                    {
                        unsigned ***l_884 = &g_882;
                        int *l_885 = &g_38;
                        (*l_884) = g_882;
                        (*g_302) |= ((**g_518) = 0x052512D7L);
                        (***l_845) = (*g_84);
                        l_886 = l_885;

                        ;
                    }
                    else
                    {
                        if ((*g_84))
                            break;
                    }
                }
                else
                {
                    (***l_845) |= ((*l_886) = 7L);
                    return (**g_83);
                }

                            }


            ;
            if (((65535UL | (*g_739)) >= ((((*l_895) = (safe_sub_func_uint32_t_u_u((((*g_739) & ((***l_845) = ((safe_mul_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((func_26(((*l_886) || 0x9568L), g_94, g_141, (safe_rshift_func_uint16_t_u_u((((*g_518) != (g_152 , &l_779)) , (*g_830)), p_13)), g_155) , p_13), g_278)) > g_102), l_824)) && g_23))) , 0x379CDDBCL), p_11))) , l_845) == &g_518)))
            {
                char l_899 = 0L;
                char *l_905 = &g_665;
                short *l_908 = &g_251;
                short *l_909 = &l_857.f3;
                const int *l_910 = (void*)0;
                (*g_302) = (func_51((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(l_899)), ((safe_add_func_uint32_t_u_u(l_824, (((((***l_845) , l_902) , (safe_mul_func_uint16_t_u_u((l_899 > ((((*l_905) = 0xADL) || (((p_13 , p_10.f0) , ((*l_909) = ((*l_908) |= ((safe_mod_func_int16_t_s_s((0x3EFC5278L && g_419), (*l_886))) < l_857.f0)))) != g_166)) || (*l_886))), (**g_738)))) | l_824) >= p_12.f0))) < (-9L)))), l_910, l_911, (*g_319)) == p_11);


                l_912 |= (*g_302);
            }
            else
            {
                int ***l_918 = (void*)0;
                int *l_919 = &g_253;
                char *l_926 = &g_669;
                int l_928 = 0x3B0785C3L;
                (**g_83) ^= l_824;
                (*l_886) |= ((safe_add_func_uint32_t_u_u(g_152, (p_11 >= (((*g_739) |= l_857.f0) , ((safe_add_func_int16_t_s_s(((l_776 = l_917) != (*g_343)), (func_51(((*l_919) |= 0xF3366AF1L), ((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(p_11, (safe_div_func_uint32_t_u_u((&l_912 != (l_926 = (*g_504))), g_429)))), g_155.f0)) , l_927), g_155, p_12.f0) < l_928))) , g_141))))) != 0xC935L);


                ;
                if (p_13)
                {
                    int *l_936 = &g_38;
                    (*g_302) = func_41((safe_add_func_uint16_t_u_u((**g_738), (safe_mul_func_int16_t_s_s((((safe_div_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(0x62L)), 4294967293UL)) , l_927) != l_936), (*g_739))))), &l_928);
                    for (g_86 = 0; (g_86 == 51); g_86 = safe_add_func_uint32_t_u_u(g_86, 1))
                    {
                        l_928 ^= (*l_886);
                        (*g_302) = 0x518B46AAL;
                    }
                }
                else
                {
                    unsigned short l_951 = 0xAF1AL;
                    short *l_952 = &g_94.f2;
                    unsigned l_953 = 0xE08EE8A5L;
                    l_953 &= (249UL ^ (((safe_mod_func_uint8_t_u_u((((*l_886) = (0x95F7B51EL == func_19((l_928 = (l_928 != (l_945 <= ((l_946 != &g_882) == (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((((*l_952) = ((((l_951 != (p_13 & 247UL)) , (void*)0) == &l_850) != p_13)) != g_831), 2)), p_11))))))))) , g_36), p_13)) > 0L) & p_13));

                    ;
                                        if ((func_19((((g_99 , (safe_div_func_int32_t_s_s((**g_83), (*l_886)))) | ((*g_343) == (*g_343))) <= p_12.f0)) , (safe_lshift_func_int16_t_s_s((((((func_14(l_953, p_10.f0) , (*l_886)) <= p_10.f0) , g_155) , (*l_927)) , (***l_845)), l_958))))
                    {
                        (*g_84) &= (*g_302);
                        l_928 ^= (func_39((**g_83)) == g_959);


                        return (*l_927);
                    }
                    else
                    {
                        unsigned *l_961 = &g_144;
                        (***l_845) = l_960;
                        (*g_518) = func_44((*g_518), (((*l_927) != func_41((((void*)0 != l_961) & ((*l_952) ^= l_928)), (p_10 , (*g_83)))) , 0x09D2FE86L), p_12, p_12.f0);
                        return (*l_927);
                    }
                }
                (*l_886) = p_11;
            }


        }
        else
        {
            int *l_964 = &l_779;
            union U0 l_970 = {0x02L};
            (*g_302) = (safe_add_func_int8_t_s_s((0xFFF6C8A7L || ((*l_886) <= p_13)), func_39((*g_84))));


            (*g_83) = (void*)0;

            ;
            l_886 = func_44(l_964, ((((*l_886) >= g_38) && ((((0xF7L >= (*l_964)) , (safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((func_19(l_969) , (p_11 <= ((*l_927) > (*l_886)))), g_23)) ^ 0x6FL), p_10.f0))) , g_36) , (*l_927))) , (*g_302)), l_970, p_13);


            ;
        }



        ;
        (*l_886) &= ((((*l_971) ^= p_13) , l_972) == g_974);
        (*g_83) = func_44(&l_779, ((((safe_add_func_int16_t_s_s((*l_927), ((*l_986) = (((safe_div_func_int8_t_s_s(((((((0xF6C53861L < (p_12.f0 < (!(((*l_927) ^ (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((((**g_738) = (safe_rshift_func_int8_t_s_s((*l_886), 3))) ^ 65533UL) ^ 0xB74D84F5L) > 4294967294UL) != (*l_886)), 6)), (*l_886)))) == g_141)))) ^ p_10.f0) , g_36) < p_10.f0) , &g_739) == (void*)0), p_12.f0)) , 0x0BED6334L) == 0x6B31DD40L)))) ^ 0x9487L) & p_11) <= g_251), p_10, (**g_318));

        ;
            }


    ;
    l_993 &= (safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((func_51(func_41((*l_886), (*g_83)), &l_779, l_902, (((*l_991) = (&p_12 != &p_12)) && (*l_886))) | 5L) == p_11), g_278)), p_13));


    return p_10.f0;
}







static union U0 func_14(unsigned short p_15, short p_16)
{
    int *l_762 = &g_38;
    union U0 l_763 = {0xADL};
    unsigned short * const *l_771 = (void*)0;
    unsigned short * const **l_770 = &l_771;
    const int *l_772 = (void*)0;
    const int *l_774 = &g_298;
    const int **l_773 = &l_774;
    (*g_83) = func_44(l_762, (**g_518), l_763, (((*g_302) = (safe_rshift_func_uint16_t_u_s((0x6450L < ((~(((*l_762) = (safe_div_func_int8_t_s_s(p_15, (safe_rshift_func_uint8_t_u_u(g_141, (g_58 &= p_15)))))) >= ((void*)0 == l_770))) && (*g_739))), g_669))) > 1L));

    ;
    (*l_773) = (l_772 = l_762);

    ;
    ;
    return l_763;

    }







static char func_19(int p_20)
{
    int *l_339 = &g_298;
    unsigned l_342 = 4294967295UL;
    int ***l_345 = (void*)0;
    unsigned char *l_348 = &g_58;
    int l_351 = (-2L);
    char *l_352 = &g_141;
    short l_411 = 0x5AC8L;
    int ****l_466 = &l_345;
    union U0 l_481 = {0x9FL};
    int *l_493 = &g_102;
    int *l_530 = &g_253;
    int l_536 = (-3L);
    union U0 l_594 = {0UL};
    int * const *l_596 = (void*)0;
    union U0 l_597 = {2UL};
    union U0 l_604 = {248UL};
    unsigned char l_632 = 255UL;
    unsigned l_643 = 0x3E9E45EFL;
    char l_685 = 2L;
    int l_720 = 0L;
    unsigned l_761 = 0UL;
    (*g_83) = l_339;

    ;
    if ((safe_mul_func_uint16_t_u_u(g_23, (0UL ^ ((*g_302) = (l_342 > ((((g_343 != l_345) , ((safe_add_func_uint8_t_u_u(((*l_348) = (*l_339)), (((*l_352) = func_26((safe_sub_func_uint8_t_u_u(g_86, (l_351 >= (p_20 , 0x33L)))), g_155, (*l_339), (*l_339), g_155)) == (-2L)))) & p_20)) ^ 0x96L) ^ (*l_339))))))))
    {
        int l_360 = (-1L);
        unsigned *l_378 = &g_379;
        int **l_461 = (void*)0;
        int ****l_467 = &l_345;
        unsigned char l_480 = 6UL;
        char **l_502 = (void*)0;
        const union U0 l_563 = {0xF5L};
        union U0 **l_626 = (void*)0;
        char ***l_648 = &g_504;
        int l_714 = (-4L);
        const unsigned short *l_732 = &g_429;
    }
    else
    {
        return p_20;
    }
    p_20 |= (*g_302);
    return l_761;
}







static char func_26(unsigned p_27, union U0 p_28, short p_29, unsigned short p_30, const union U0 p_31)
{
    int *l_315 = (void*)0;
    int **l_320 = &g_319;
    unsigned short *l_325 = (void*)0;
    unsigned short *l_326 = (void*)0;
    unsigned short *l_327 = (void*)0;
    unsigned short *l_328 = (void*)0;
    unsigned short *l_329 = (void*)0;
    unsigned short *l_330 = &g_152;
    int **l_337 = &g_319;
    int *l_338 = &g_61;
    (*g_302) |= (safe_lshift_func_int16_t_s_s((g_23 , 0x7479L), 12));
    l_315 = l_315;
    (*g_302) = ((safe_mul_func_uint16_t_u_u(p_29, (((l_320 = g_318) == ((safe_add_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(0x5ABDL, (((*l_330) &= 0x301DL) , g_251))) < 250UL) > (p_27 , (safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_31.f0, ((safe_div_func_int16_t_s_s(g_155.f0, 1L)) <= (*g_302)))), 1L)))), 65527UL)) , l_337)) >= p_30))) >= g_94.f0);
    (*l_338) ^= (*g_302);
    return g_166;
}







static unsigned func_39(const int p_40)
{
    int *l_255 = &g_102;
    short *l_258 = &g_251;
    char *l_260 = &g_141;
    char **l_259 = &l_260;
    short l_261 = 0xED16L;
    const int l_281 = 0xFCC2CE9AL;
    union U0 l_282 = {249UL};
    const int *l_295 = &g_253;
    const int **l_294 = &l_295;
    const int ***l_293 = &l_294;
    int l_299 = 0x49682236L;
    unsigned l_304 = 0x14168538L;
    const int *l_309 = &g_61;
    (*g_83) = l_255;

    ;
    (*g_83) = func_44((*g_83), ((((!((safe_div_func_uint32_t_u_u(0x73F2C412L, ((0L & (p_40 & ((func_41((&g_80 != l_258), (*g_83)) >= (((void*)0 == l_259) , g_166)) != l_261))) ^ p_40))) >= p_40)) , (*l_255)) , (*l_255)) , (**g_83)), g_94, p_40);

    ;
    if ((g_23 , p_40))
    {
        int *l_262 = &g_61;
        int *l_276 = &g_166;
        int **l_275 = &l_276;
        if ((**g_83))
        {
            unsigned l_265 = 8UL;
            union U0 l_268 = {0xE7L};
            int *l_269 = &g_102;
            l_269 = func_44(l_262, (((g_166 < (((safe_mul_func_int8_t_s_s(((*g_83) == (g_86 , (*g_83))), (l_265 && ((void*)0 == l_262)))) | (((*l_258) = (safe_mul_func_uint8_t_u_u(0xFEL, g_102))) > p_40)) , g_253)) & 1UL) || 65532UL), l_268, p_40);


            ;
            (*g_83) = l_255;

            ;
            l_269 = l_255;

            ;
        }
        else
        {
            int * const l_274 = (void*)0;
            int * const *l_273 = &l_274;
            int * const **l_272 = &l_273;
            unsigned *l_277 = &g_278;
            int l_279 = 0x61F00AFDL;
            const char *l_280 = &g_141;
            (*g_84) = (((((*l_277) = (((*l_272) = (g_94.f0 , (void*)0)) == (g_94.f0 , ((*l_262) , l_275)))) , &g_84) != (void*)0) ^ ((p_40 != ((l_279 , l_280) != l_280)) <= p_40));

            ;
        }
        (*l_255) = func_51(l_281, (*g_83), l_282, (6UL || (((void*)0 == l_262) , (safe_lshift_func_int8_t_s_s((func_41(p_40, l_276) | p_40), (*l_262))))));


        (*l_262) = (safe_add_func_int32_t_s_s(p_40, 4UL));
    }
    else
    {
        int * const ***l_292 = &g_291;
        const int ****l_296 = &l_293;
        int *l_297 = &g_298;
        int l_301 = 0x74A17D39L;
        (*g_83) = func_44(((safe_rshift_func_uint8_t_u_u(p_40, func_41(((safe_add_func_int32_t_s_s(((((*l_292) = g_291) != ((*l_296) = l_293)) > func_41(g_58, func_44(func_44(func_44(l_255, (l_299 ^= ((*l_297) &= ((*g_84) = ((*l_259) == &g_141)))), ((safe_unary_minus_func_int32_t_s((p_40 || (l_301 > g_278)))) , l_282), g_94.f0), g_99, g_155, p_40), p_40, l_282, g_58))), p_40)) ^ p_40), g_302))) , &l_301), l_304, l_282, g_303);
        (*g_84) = (*l_255);
    }


    l_309 = (((safe_add_func_uint16_t_u_u((*l_255), g_166)) > ((((**l_293) != (void*)0) == (func_41(g_303, &l_299) <= (((func_41(((((*l_260) = (func_41(((safe_add_func_uint16_t_u_u(p_40, ((g_152 ^ (*l_255)) != (*l_255)))) == g_61), &l_299) > (*l_255))) | g_102) >= p_40), &l_299) <= g_303) , 0L) , g_155.f0))) != 4294967295UL)) , &l_281);

    ;
    return g_152;
}







static unsigned short func_41(unsigned char p_42, int * p_43)
{
    return p_42;
}







static int * func_44(int * p_45, int p_46, union U0 p_47, int p_48)
{
    const unsigned l_156 = 0xAEB2B1B5L;
    union U0 l_157 = {9UL};
    int l_162 = 6L;
    int l_163 = 0x8EC11135L;
    int *l_164 = (void*)0;
    int *l_165 = &g_166;
    int *l_167 = &l_163;
    short *l_170 = &g_80;
    int l_171 = 0L;
    int **l_176 = &l_165;
    unsigned char *l_177 = &l_157.f0;
    int *l_201 = &l_171;
    unsigned short *l_202 = &g_152;
    unsigned short *l_203 = &g_99;
    union U0 l_204 = {1UL};
    int *l_205 = (void*)0;
    int *l_206 = &l_171;
    (*l_167) = l_163;
    if (l_163)
        goto lbl_178;
lbl_178:
    (*l_167) = (((*l_177) ^= (1UL | (safe_div_func_uint8_t_u_u(((((*l_176) = (((((((*l_170) = 0L) || ((l_171 > 0x5CL) & (g_94.f0 & (*l_167)))) ^ (safe_rshift_func_int8_t_s_u(((((safe_rshift_func_int8_t_s_s(g_155.f0, p_48)) , &l_156) != &l_156) , (-9L)), p_47.f0))) && 6UL) , g_23) , &g_166)) == &p_48) , g_94.f0), p_48)))) ^ g_61);
    if (((-1L) < (((safe_lshift_func_uint8_t_u_u(g_144, (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(p_46, ((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((*l_202) = ((((((*l_177) = p_47.f0) > p_46) <= g_166) == 4294967294UL) , g_152)), g_94.f0)) == g_155.f0), g_61)) , p_46))), p_47.f0)), 0x7EL)))) >= (*l_167)) , (*l_167))))
    {
        union U0 l_215 = {0x6FL};
        const int *l_221 = &g_61;
        int l_241 = 0x65354629L;
        short *l_252 = &g_251;
        if ((safe_lshift_func_uint16_t_u_u(1UL, ((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(((*l_167) , g_23), 1)) != 0L), (-1L))), g_102)) & 0UL))))
        {
            int l_216 = 2L;
            p_46 |= l_216;
        }
        else
        {
            int **l_222 = &g_84;
            int **l_223 = &l_167;
            int **l_224 = &g_84;
            int **l_225 = &g_84;
            int **l_226 = &g_84;
            int **l_227 = &g_84;
            int **l_228 = &g_84;
            unsigned short l_233 = 65528UL;
            union U0 l_234 = {249UL};
            short *l_250 = &g_251;
            (*l_167) |= (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((*l_221) < 0L), p_46)), p_48));
            l_241 = ((g_144 , g_23) >= ((safe_sub_func_int8_t_s_s(((((*l_177) = p_46) == g_166) & 0xBFL), (safe_sub_func_int32_t_s_s(0x9E816EFCL, ((safe_sub_func_int16_t_s_s(g_86, ((**l_223) ^ (~g_61)))) < p_47.f0))))) , g_61));
            g_102 &= (((safe_lshift_func_uint16_t_u_u((g_152 , (g_86 > ((*l_221) , ((*l_167) && ((((**l_223) = (0xAA01L >= (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((*l_170) |= g_61), ((p_47.f0 ^ g_99) != ((((safe_mod_func_uint8_t_u_u(1UL, (*l_221))) || g_144) , l_250) == l_252)))), g_94.f0)))) < 3L) < p_46))))), g_253)) <= 0x6034L) != 65532UL);
        }
        return &g_102;


    }
    else
    {
        int *l_254 = &g_61;
        (*g_83) = &p_46;

        ;
        return l_254;



    }
}







static unsigned short func_51(const int p_52, const int * p_53, union U0 p_54, int p_55)
{
    int *l_62 = &g_61;
    unsigned l_77 = 0x263070B7L;
    union U0 l_82 = {0x17L};
    unsigned short *l_98 = &g_99;
    short l_100 = 0L;
    char *l_140 = &g_141;
    const short *l_142 = (void*)0;
    if ((((+(g_23 < g_23)) <= (g_58 = 7UL)) == g_23))
    {
        char l_59 = 1L;
        int l_101 = 0x8F3E709FL;
        char *l_105 = &l_59;
        unsigned l_113 = 0x09BDD522L;
        int l_131 = 0x625CAFD9L;
        short *l_143 = &g_80;
        int *l_145 = &l_101;
        if ((p_52 ^ ((g_23 != p_52) , g_23)))
        {
            int *l_60 = &g_61;
            int **l_63 = &l_62;
            unsigned l_65 = 0x4F12CE33L;
lbl_64:
            (*l_60) = l_59;
            (*l_63) = l_62;
            if ((*l_62))
            {
                if (g_61)
                    goto lbl_64;
                (*l_63) = &g_61;
                return l_65;
            }
            else
            {
                unsigned short l_70 = 0x6A33L;
                char *l_71 = (void*)0;
                char *l_72 = &l_59;
                unsigned short *l_73 = (void*)0;
                unsigned short *l_74 = &l_70;
                unsigned char *l_81 = &g_58;
                unsigned *l_85 = &g_86;
                const unsigned l_95 = 7UL;
                (*l_60) = ((p_54.f0 > (safe_sub_func_uint8_t_u_u(g_58, ((*l_72) = (safe_rshift_func_int8_t_s_u(l_70, 6)))))) , ((((*l_74) = g_58) ^ g_58) , ((0x04L != ((*l_81) = ((g_58 && (g_80 = (((safe_rshift_func_int16_t_s_s(l_77, ((safe_mul_func_uint16_t_u_u(65535UL, l_70)) , p_55))) != g_23) | (*l_60)))) && (*l_62)))) <= g_61)));
                (**l_63) = ((*l_60) == (((-1L) <= ((*l_85) &= (l_82 , (((void*)0 == g_83) , (+l_70))))) <= (g_80 >= (~(*l_62)))));
                g_102 = (l_101 &= ((l_59 == l_70) && ((*l_60) = (0x410AL == (l_59 < (safe_mod_func_int16_t_s_s((p_52 == (safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(p_55, (safe_unary_minus_func_uint8_t_u((((~((!(g_94 , l_95)) == ((safe_sub_func_uint32_t_u_u((l_98 != (void*)0), (-1L))) > l_70))) , 0xDF81L) >= l_100))))), 0))), 0x4184L)))))));
            }
            l_101 |= ((safe_rshift_func_uint8_t_u_s((l_59 == ((*l_62) && p_52)), 5)) == p_55);
        }
        else
        {
            char *l_107 = &l_59;
            char **l_106 = &l_107;
            char *l_109 = &l_59;
            char **l_108 = &l_109;
            int l_112 = 0x12E5E4DFL;
            (*l_62) = ((((*l_106) = (l_105 = &l_59)) != ((*l_108) = &l_59)) ^ 4294967295UL);
            for (g_99 = 0; (g_99 > 57); g_99++)
            {
                short *l_122 = &g_94.f3;
                (*l_62) = ((((l_113 = l_112) , ((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((+(safe_div_func_int16_t_s_s((p_55 , ((*l_122) = p_54.f0)), (safe_sub_func_uint32_t_u_u(((p_54.f0 , p_54.f0) < ((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((!g_23), (safe_lshift_func_int8_t_s_u(0x99L, 0)))), 0x64L)) || 0x6B17L)), l_131))))) == 0xBC35819BL), (*l_62))), (-8L))), 1)) >= p_55)) <= g_80) , p_54.f0);

                            }
            l_101 = ((*l_62) != ((((((l_142 = (((l_113 > (safe_sub_func_uint32_t_u_u(p_54.f0, (safe_div_func_int8_t_s_s(p_54.f0, ((*l_109) = ((g_102 || ((safe_mul_func_uint16_t_u_u(((void*)0 == &l_109), (((safe_rshift_func_int8_t_s_s(((*l_62) , ((void*)0 == l_140)), l_112)) , (*l_62)) , 8UL))) || 65535UL)) , (-1L)))))))) || p_52) , &l_100)) == l_143) , g_80) , l_112) , g_144) <= g_144));

            ;
            l_62 = (l_145 = ((*g_83) = (*g_83)));

            ;
            ;
        }

        ;
        ;
        ;
        (*g_83) = (*g_83);
        (*g_83) = &l_101;

        ;
        (*g_84) = ((safe_mod_func_uint32_t_u_u((g_58 != g_58), g_58)) || g_80);
    }
    else
    {
        int *l_148 = (void*)0;
        const int *l_150 = &g_61;
        const int **l_149 = &l_150;
        (*g_83) = l_148;

        ;
        (*g_83) = (*g_83);
        (*l_149) = p_53;


        (*l_62) = g_58;
    }

    ;

    ;
    return p_55;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    transparent_crc(g_831, "g_831", print_hash_value);
    transparent_crc(g_959, "g_959", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1028, "g_1028", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
