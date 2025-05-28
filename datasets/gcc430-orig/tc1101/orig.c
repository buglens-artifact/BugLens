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



static int *g_8 = (void*)0;
static unsigned g_26 = 4UL;
static int g_30 = 0x0D018D30L;
static unsigned char g_52 = 0xDCL;
static unsigned char g_59 = 0xFCL;
static unsigned char *g_58 = &g_59;
static short g_67 = (-1L);
static unsigned long long g_97 = 0x13BCE866CA241E22LL;
static int g_150 = 0xEB33E2D4L;
static int g_151 = 7L;
static int *g_153 = &g_150;
static unsigned short g_180 = 0xDC07L;
static long long g_253 = 0xBC70BF1E66949881LL;
static unsigned long long *g_279 = (void*)0;
static unsigned long long **g_278 = &g_279;
static short g_288 = 0x40BAL;
static unsigned g_355 = 0xFED1308CL;
static unsigned g_416 = 1UL;
static char g_437 = 1L;
static short g_453 = (-1L);
static char g_455 = 1L;
static long long g_531 = 1L;
static unsigned long long g_542 = 0x71EDED3D272699EALL;
static unsigned long long g_551 = 4UL;
static unsigned *g_586 = &g_416;
static unsigned **g_585 = &g_586;
static short g_702 = 0x254AL;
static unsigned g_886 = 4294967295UL;
static int *g_894 = &g_151;
static int **g_893 = &g_894;
static unsigned char **g_924 = &g_58;
static unsigned char ***g_923 = &g_924;
static unsigned char ****g_922 = &g_923;
static int g_927 = 1L;
static short g_932 = 0L;
static int *g_957 = &g_927;
static unsigned short *g_1034 = &g_180;
static long long g_1090 = 0xD049DD6B0D55B926LL;
static short g_1096 = 0x03CEL;
static int g_1100 = (-2L);
static unsigned long long g_1104 = 8UL;
static int *g_1108 = &g_151;
static long long g_1211 = (-10L);
static unsigned char g_1213 = 1UL;
static short g_1401 = 0L;
static int g_1407 = 1L;
static unsigned long long g_1408 = 0x10FF1F6FB2ED2154LL;
static int g_1480 = (-10L);
static int g_1498 = 0L;
static unsigned g_1505 = 18446744073709551615UL;
static int g_1829 = 0x55119B48L;
static long long g_1904 = 0L;
static unsigned short g_1963 = 0UL;



static unsigned char func_1(void);
static int * func_2(int * p_3, int * p_4, int * p_5, int * p_6, int * p_7);
static int * func_9(unsigned short p_10, unsigned char p_11, int p_12, int p_13);
static unsigned short func_14(unsigned char p_15, long long p_16);
static unsigned char func_17(int * p_18, int * p_19, int * p_20);
static int * func_21(int * p_22, unsigned p_23, unsigned long long p_24, unsigned char p_25);
static int func_33(int * p_34, int * p_35, int p_36, long long p_37, unsigned p_38);
static int * func_39(short p_40);
static short func_41(int * p_42, int p_43);
static int * func_45(short p_46);
static unsigned char func_1(void)
{
    int l_27 = (-9L);
    int *l_1285 = &l_27;
    char l_1741 = 1L;
    short l_1835 = (-8L);
    int *l_1840 = &g_150;
    int *l_1841 = &g_1100;
    int *l_1842 = &g_150;
    int *l_1843 = (void*)0;
    int *l_1844 = (void*)0;
    int *l_1845 = &g_30;
    int *l_1846 = (void*)0;
    int *l_1847 = (void*)0;
    int *l_1848 = &g_1407;
    int *l_1849 = (void*)0;
    int *l_1850 = &g_1407;
    int *l_1851 = &g_1407;
    int *l_1852 = &g_1100;
    int *l_1853 = &g_1829;
    int *l_1854 = &g_1100;
    int l_1855 = 6L;
    int *l_1856 = &g_151;
    int *l_1857 = (void*)0;
    int *l_1858 = &g_30;
    int *l_1859 = &l_27;
    int *l_1860 = &g_1407;
    int *l_1861 = &g_927;
    int *l_1862 = &g_1829;
    int *l_1863 = &g_1829;
    int l_1864 = (-1L);
    int *l_1865 = &g_927;
    int *l_1866 = &l_1864;
    int l_1867 = 0xF3A91DFEL;
    int *l_1868 = &g_150;
    int *l_1869 = &l_1864;
    int *l_1870 = &g_1407;
    int *l_1871 = &g_30;
    int *l_1872 = &l_1855;
    int *l_1873 = &l_1855;
    int *l_1874 = &g_151;
    int *l_1875 = &g_1407;
    int *l_1876 = &g_1829;
    int *l_1877 = &g_1100;
    int *l_1878 = &g_1100;
    int l_1879 = (-1L);
    int *l_1880 = &g_927;
    int *l_1881 = &g_30;
    int *l_1882 = &g_927;
    int *l_1883 = (void*)0;
    int *l_1884 = &l_27;
    int *l_1885 = &g_1407;
    int *l_1886 = &g_151;
    int *l_1887 = &g_30;
    int *l_1888 = &l_1864;
    int l_1889 = (-3L);
    int *l_1890 = &g_1407;
    int *l_1891 = &g_1407;
    int *l_1892 = &l_1864;
    int *l_1893 = &l_1879;
    int *l_1894 = (void*)0;
    int *l_1895 = &l_27;
    int *l_1896 = &l_27;
    int l_1897 = 0x7F0A1CD2L;
    int *l_1898 = (void*)0;
    unsigned short l_1899 = 0xBEAFL;
    int *l_1923 = &l_1897;
    int **l_1940 = &l_1891;
    long long ***l_1974 = (void*)0;
    unsigned short **l_1987 = &g_1034;
    unsigned l_1988 = 18446744073709551609UL;
    (*g_893) = func_2(g_8, func_9(func_14(func_17(g_8, func_21(g_8, g_26, g_26, l_27), l_1285), l_1741), l_1835, g_1829, g_1480), l_1285, l_1285, l_1285);
    ++l_1899;
    for (l_1899 = 0; (l_1899 > 44); ++l_1899)
    {
        char l_1905 = 1L;
        int *l_1926 = &l_1879;
        unsigned short l_1972 = 0UL;
        long long *l_1978 = &g_531;
        long long **l_1977 = &l_1978;
        long long ***l_1976 = &l_1977;
        if (((*l_1841) = g_1904))
        {
            long long l_1910 = 0x741F4B1341709DAELL;
            long long *l_1911 = &g_531;
            int *l_1927 = &l_1864;
            unsigned long long l_1937 = 0xDC09ABB2A43CBBF4LL;
            if ((func_33(&l_1855, (*g_893), l_1905, ((*l_1911) &= (safe_lshift_func_uint16_t_u_u(0xFC12L, (safe_add_func_int32_t_s_s((l_1905 ^ ((*g_1034) ^= (*l_1875))), (((((*l_1868) & (g_97 | l_1910)) >= 0L) != (-1L)) >= 0L)))))), (**g_585)) <= (*l_1870)))
            {
                unsigned l_1912 = 0UL;
                short *l_1928 = &g_1401;
                l_1912++;
                if ((*g_1108))
                    break;
                (*l_1866) = ((*l_1865) = (+((~((void*)0 == (*g_585))) == g_1505)));
                (*l_1870) = ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(((*l_1928) = (((**g_924) == (safe_rshift_func_uint16_t_u_u(func_33((*g_893), func_9(l_1912, (func_33(l_1923, func_2(func_9((l_1912 ^ 0UL), (safe_sub_func_uint16_t_u_u(0x2816L, 0x2CCDL)), l_1912, g_52), (*g_893), l_1926, l_1927, (*g_893)), (*l_1926), g_59, (*g_586)) || 1L), (**g_893), (*l_1927)), (*l_1856), (*l_1926), (**g_585)), 6))) != g_437)), 0)), (*l_1927))), (****g_922))) <= 8UL);
            }
            else
            {
                unsigned l_1931 = 0xA8FB4E56L;
                (*l_1882) |= (safe_rshift_func_uint16_t_u_s((*g_1034), 6));
                if ((*g_1108))
                    continue;
                if (l_1931)
                    break;
                for (g_67 = 0; (g_67 == 27); ++g_67)
                {
                    char l_1936 = 0L;
                    (*l_1865) = (safe_lshift_func_int16_t_s_u(l_1936, 0));
                }
            }
            if (l_1937)
                continue;
            (**g_893) = ((*l_1926) <= ((*l_1911) = g_253));
            return (****g_922);
        }
        else
        {
            int l_1938 = 2L;
            int *l_1939 = &l_1864;
            int ***l_1941 = &l_1940;
            int *l_1942 = &g_1498;
            int l_1943 = (-10L);
            unsigned char ***l_1952 = (void*)0;
            unsigned long long **l_1953 = &g_279;
            (*l_1874) = (((***g_923) ^ (*l_1926)) == (l_1938 & l_1943));
            for (l_1889 = 0; (l_1889 == (-30)); l_1889 = safe_sub_func_uint16_t_u_u(l_1889, 4))
            {
                unsigned char ***l_1951 = &g_924;
                unsigned char ****l_1950 = &l_1951;
                int *l_1957 = &l_1855;
                unsigned short *l_1961 = (void*)0;
                unsigned short *l_1962 = &g_1963;
                long long ****l_1975 = &l_1974;
            }
            if ((*l_1926))
                continue;
        }
    }
    return l_1988;
}







static int * func_2(int * p_3, int * p_4, int * p_5, int * p_6, int * p_7)
{
    unsigned long long l_1838 = 18446744073709551615UL;
    int *l_1839 = (void*)0;
    l_1839 = (*g_893);
    return (*g_893);
}







static int * func_9(unsigned short p_10, unsigned char p_11, int p_12, int p_13)
{
    unsigned l_1836 = 1UL;
    int *l_1837 = &g_150;
    (*g_957) = l_1836;
    return l_1837;
}







static unsigned short func_14(unsigned char p_15, long long p_16)
{
    int *l_1742 = &g_1100;
    unsigned char **l_1752 = &g_58;
    char l_1765 = 0L;
    int l_1778 = 0xB703DBFEL;
    int l_1793 = 0xB97A2E3FL;
    (*g_893) = l_1742;
    if (p_15)
    {
        unsigned long long *l_1745 = (void*)0;
        (**g_893) ^= (safe_add_func_uint64_t_u_u(0xD910469BB563F358LL, (((*g_278) = l_1745) != l_1745)));
    }
    else
    {
        int l_1748 = 0xE4436E0EL;
        unsigned char **l_1751 = (void*)0;
        int l_1755 = 0x1A4ADD23L;
        int **l_1756 = &l_1742;
        char l_1806 = 0xB1L;
        l_1755 ^= ((*g_894) = ((safe_mod_func_uint64_t_u_u(l_1748, (safe_rshift_func_uint16_t_u_u(((6L != (l_1751 == l_1752)) ^ 0xCC58E756229C4416LL), 10)))) || (safe_sub_func_uint8_t_u_u(p_15, p_15))));
        (*g_957) = ((void*)0 == l_1756);
        if ((((safe_add_func_uint64_t_u_u((1L > ((safe_lshift_func_uint16_t_u_u((((((((*l_1742) & ((safe_sub_func_int8_t_s_s((p_15 == (safe_lshift_func_int16_t_s_s((**l_1756), 13))), p_15)) ^ (((*l_1742) != (*l_1742)) >= (**l_1756)))) || (**l_1756)) | 0x97L) | p_15) == g_150) != (-7L)), 1)) < (-4L))), 1UL)) > 1UL) & 0x252CCE60E7CBC7ACLL))
        {
            unsigned l_1814 = 0UL;
            int *l_1830 = &g_1100;
            (*l_1742) |= 0xC81D6EA1L;
            if ((*l_1742))
            {
                int *l_1770 = &g_150;
                int *l_1771 = &g_1100;
                int *l_1772 = (void*)0;
                int *l_1773 = &l_1755;
                int *l_1774 = &l_1755;
                int *l_1775 = &g_927;
                int *l_1776 = &g_1407;
                int *l_1777 = &g_30;
                int *l_1779 = (void*)0;
                int *l_1780 = &g_30;
                int *l_1781 = &g_1407;
                int *l_1782 = (void*)0;
                int *l_1783 = &l_1748;
                int *l_1784 = &g_1100;
                int *l_1785 = &l_1748;
                int *l_1786 = &g_1407;
                int *l_1787 = &g_1100;
                int *l_1788 = &g_1100;
                int *l_1789 = &g_1480;
                int *l_1790 = &g_150;
                int *l_1791 = &l_1778;
                int *l_1792 = &l_1748;
                int *l_1794 = &l_1778;
                int *l_1795 = &l_1748;
                int *l_1796 = &g_151;
                int *l_1797 = &l_1778;
                int *l_1798 = &g_30;
                int *l_1799 = &g_1407;
                int *l_1800 = (void*)0;
                int *l_1801 = &g_150;
                int *l_1802 = &g_927;
                int *l_1803 = &g_1480;
                int *l_1804 = (void*)0;
                int *l_1805 = (void*)0;
                int *l_1807 = &l_1778;
                int *l_1808 = &l_1755;
                int *l_1809 = &l_1793;
                int *l_1810 = &g_1407;
                int *l_1811 = &g_150;
                int *l_1812 = &g_151;
                int *l_1813 = &g_927;
                l_1814++;
                for (g_927 = 0; (g_927 > (-15)); g_927--)
                {
                    (*l_1785) = (((***g_923) = (p_15 || ((*g_1034) = (*l_1777)))) <= (**l_1756));
                }
                for (g_932 = 0; (g_932 != (-27)); g_932--)
                {
                    short l_1823 = 0L;
                    for (g_1401 = 9; (g_1401 != 22); g_1401 = safe_add_func_int8_t_s_s(g_1401, 1))
                    {
                        int *l_1824 = &g_1100;
                        (*g_893) = ((*l_1756) = l_1824);
                    }
                }
            }
            else
            {
                char l_1831 = (-1L);
                (*g_957) ^= (safe_lshift_func_int16_t_s_u(((safe_add_func_int64_t_s_s((!g_1100), (-1L))) == (*l_1830)), l_1831));
            }
        }
        else
        {
            unsigned long long l_1832 = 18446744073709551608UL;
            ++l_1832;
        }
    }
    return (*g_1034);
}







static unsigned char func_17(int * p_18, int * p_19, int * p_20)
{
    long long *l_1288 = (void*)0;
    long long **l_1287 = &l_1288;
    long long ***l_1286 = &l_1287;
    char *l_1291 = &g_455;
    int *l_1292 = &g_1100;
    int l_1324 = 1L;
    int l_1472 = 1L;
    int l_1474 = 0xBE94EB11L;
    int l_1495 = 0xDE2E84E7L;
    unsigned ***l_1520 = &g_585;
    unsigned ****l_1519 = &l_1520;
    unsigned char l_1684 = 255UL;
    int *l_1689 = (void*)0;
    (*l_1286) = (void*)0;
    if ((safe_lshift_func_int8_t_s_s(((*l_1291) &= g_288), (6UL != func_33(l_1292, &g_1100, (*l_1292), (((+(safe_unary_minus_func_int32_t_s((*l_1292)))) > (g_355 != 1L)) && 0x22BBL), (*g_586))))))
    {
        unsigned char l_1301 = 254UL;
        int *l_1305 = &g_1100;
        char *l_1306 = &g_455;
        int l_1456 = 0xBEE067EBL;
        int l_1470 = 4L;
        unsigned ****l_1518 = (void*)0;
        int l_1621 = 0xE38AD1E5L;
        int l_1623 = 3L;
        int l_1675 = 3L;
        int l_1683 = (-1L);
        long long l_1690 = (-3L);
        int l_1698 = 0x1656931AL;
        char l_1699 = 0x01L;
        if ((safe_mod_func_int64_t_s_s((((g_1211 != (!(****g_922))) > (*g_586)) == (safe_unary_minus_func_uint16_t_u(((~(safe_add_func_int64_t_s_s(g_1104, ((l_1301 <= g_253) > l_1301)))) >= ((safe_mod_func_uint32_t_u_u((((*l_1292) && (safe_unary_minus_func_int64_t_s(func_33(p_20, l_1305, (*l_1305), (*l_1305), (*l_1292))))) || g_542), 4294967287UL)) != 0xCC57L))))), 0xC562E95D836F613FLL)))
        {
            unsigned l_1309 = 1UL;
            int l_1353 = 0x88B74921L;
            int l_1361 = (-6L);
            int l_1368 = 1L;
            if (((void*)0 == l_1306))
            {
                unsigned char l_1343 = 0UL;
                (*l_1305) = (safe_sub_func_int8_t_s_s(l_1309, l_1309));
                if (((*g_1108) ^= (*l_1292)))
                {
                    short l_1310 = 0L;
                    int *l_1311 = (void*)0;
                    int *l_1312 = &g_151;
                    int *l_1313 = &g_927;
                    int *l_1314 = &g_1100;
                    int *l_1315 = (void*)0;
                    int *l_1316 = &g_150;
                    int *l_1317 = &g_1100;
                    int *l_1318 = &g_30;
                    int *l_1319 = &g_150;
                    int *l_1320 = (void*)0;
                    int *l_1321 = (void*)0;
                    int *l_1322 = &g_151;
                    int *l_1323 = &g_1100;
                    int *l_1325 = &g_150;
                    int *l_1326 = (void*)0;
                    int *l_1327 = &g_1100;
                    int *l_1328 = &g_927;
                    int *l_1329 = &g_927;
                    int *l_1330 = &g_30;
                    int *l_1331 = &g_927;
                    int *l_1332 = &g_150;
                    int *l_1333 = &g_150;
                    int *l_1334 = &g_30;
                    int *l_1335 = &l_1324;
                    int *l_1336 = (void*)0;
                    int *l_1337 = &g_30;
                    int *l_1338 = &g_151;
                    int *l_1339 = &l_1324;
                    int *l_1340 = &g_150;
                    int l_1341 = 5L;
                    int *l_1342 = &g_30;
                    --l_1343;
                }
                else
                {
                    (*l_1292) = (*l_1292);
                }
            }
            else
            {
                long long ***l_1350 = &l_1287;
                int l_1413 = 0x043A956DL;
                if ((((*g_58) > (((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((*g_58), 3)), 4)) < (((*l_1292) <= (l_1309 | ((void*)0 != l_1350))) >= l_1309)) < 0xC8D11E3D50E17973LL)) == 0UL))
                {
                    for (g_453 = 0; (g_453 == 20); ++g_453)
                    {
                        int *l_1354 = &g_30;
                        int *l_1355 = &g_151;
                        int *l_1356 = &l_1353;
                        int *l_1357 = &g_927;
                        int *l_1358 = &g_30;
                        int *l_1359 = (void*)0;
                        int *l_1360 = &l_1353;
                        int *l_1362 = &g_30;
                        int *l_1363 = &g_30;
                        int *l_1364 = &g_151;
                        int *l_1365 = (void*)0;
                        int *l_1366 = &l_1361;
                        int l_1367 = (-3L);
                        int *l_1369 = &g_151;
                        int *l_1370 = &l_1353;
                        int *l_1371 = (void*)0;
                        int *l_1372 = &l_1353;
                        int *l_1373 = &g_150;
                        int *l_1374 = &l_1353;
                        int *l_1375 = &l_1368;
                        int *l_1376 = &l_1353;
                        int *l_1377 = (void*)0;
                        int *l_1378 = &l_1353;
                        int *l_1379 = &l_1353;
                        int *l_1380 = &g_30;
                        int *l_1381 = &l_1324;
                        int *l_1382 = &g_1100;
                        int *l_1383 = &g_1100;
                        int *l_1384 = &g_151;
                        int *l_1385 = &l_1361;
                        int *l_1386 = (void*)0;
                        int *l_1387 = &l_1361;
                        int *l_1388 = &l_1368;
                        int *l_1389 = &l_1353;
                        int *l_1390 = (void*)0;
                        int l_1391 = 0L;
                        int *l_1392 = &l_1368;
                        int *l_1393 = &l_1324;
                        int *l_1394 = &l_1391;
                        int *l_1395 = (void*)0;
                        int *l_1396 = &g_151;
                        int *l_1397 = &l_1324;
                        int *l_1398 = &l_1367;
                        int *l_1399 = &l_1367;
                        int l_1400 = (-1L);
                        int *l_1402 = &l_1367;
                        int *l_1403 = &l_1367;
                        int *l_1404 = &l_1400;
                        int *l_1405 = &l_1367;
                        int *l_1406 = &l_1361;
                        g_1408--;
                        if ((*p_20))
                            break;
                    }
                    for (g_886 = 0; (g_886 != 44); g_886 = safe_add_func_uint8_t_u_u(g_886, 4))
                    {
                        return (****g_922);
                    }
                }
                else
                {
                    char l_1416 = 0x78L;
                    int l_1442 = 0x3E7E6155L;
                    int l_1503 = (-1L);
                    (*g_957) &= l_1413;
                    for (g_30 = 0; (g_30 != 8); ++g_30)
                    {
                        int *l_1417 = &g_150;
                        int *l_1418 = &g_927;
                        int *l_1419 = (void*)0;
                        int *l_1420 = &g_150;
                        int *l_1421 = &g_1100;
                        int *l_1422 = &g_151;
                        int *l_1423 = &l_1324;
                        int *l_1424 = (void*)0;
                        int *l_1425 = &l_1368;
                        int *l_1426 = &l_1361;
                        int *l_1427 = (void*)0;
                        int *l_1428 = (void*)0;
                        int *l_1429 = (void*)0;
                        int l_1430 = (-1L);
                        int *l_1431 = &g_151;
                        int *l_1432 = &g_150;
                        int *l_1433 = &g_1100;
                        int *l_1434 = &l_1324;
                        int *l_1435 = &l_1361;
                        int *l_1436 = (void*)0;
                        int *l_1437 = (void*)0;
                        int *l_1438 = &l_1324;
                        int *l_1439 = (void*)0;
                        int *l_1440 = &g_150;
                        int *l_1441 = &g_1100;
                        int *l_1443 = &g_1407;
                        int *l_1444 = (void*)0;
                        int *l_1445 = &g_150;
                        int *l_1446 = &l_1324;
                        int *l_1447 = &g_1407;
                        int *l_1448 = &g_1407;
                        int *l_1449 = &l_1368;
                        int *l_1450 = &g_1100;
                        int *l_1451 = &l_1430;
                        int *l_1452 = &l_1368;
                        int *l_1453 = &l_1324;
                        int *l_1454 = &l_1430;
                        int *l_1455 = &l_1324;
                        int *l_1457 = &g_150;
                        int *l_1458 = &l_1368;
                        int *l_1459 = &l_1456;
                        int *l_1460 = &l_1361;
                        int *l_1461 = &l_1324;
                        int *l_1462 = &l_1456;
                        int *l_1463 = &l_1324;
                        int l_1464 = (-1L);
                        int *l_1465 = &g_1100;
                        int *l_1466 = (void*)0;
                        int *l_1467 = &g_927;
                        int *l_1468 = &l_1464;
                        int *l_1469 = &l_1324;
                        int *l_1471 = &l_1368;
                        int *l_1473 = &g_1407;
                        int *l_1475 = &l_1430;
                        int *l_1476 = &l_1470;
                        int *l_1477 = &l_1464;
                        int *l_1478 = &l_1472;
                        int *l_1479 = &l_1474;
                        int *l_1481 = &l_1470;
                        int *l_1482 = &l_1456;
                        int *l_1483 = (void*)0;
                        int *l_1484 = &l_1456;
                        int *l_1485 = &g_927;
                        int *l_1486 = &l_1324;
                        int *l_1487 = &g_1407;
                        int *l_1488 = &l_1353;
                        int *l_1489 = &g_927;
                        int *l_1490 = &g_150;
                        int *l_1491 = &l_1353;
                        int *l_1492 = (void*)0;
                        int *l_1493 = &l_1413;
                        int *l_1494 = &g_150;
                        int *l_1496 = (void*)0;
                        int *l_1497 = &g_150;
                        int *l_1499 = &g_1407;
                        int *l_1500 = (void*)0;
                        int *l_1501 = &g_927;
                        int *l_1502 = (void*)0;
                        int *l_1504 = (void*)0;
                        p_18 = (void*)0;
                        (*p_20) = (*l_1292);
                        g_1505++;
                        (*l_1433) = ((*l_1461) |= (g_1407 || 0L));
                    }
                    for (g_551 = 0; (g_551 >= 34); g_551 = safe_add_func_uint8_t_u_u(g_551, 3))
                    {
                        int *l_1510 = &l_1474;
                        unsigned **l_1515 = &g_586;
                        p_18 = ((*g_893) = l_1510);
                        (*p_20) &= (*g_957);
                        (*g_1108) = (safe_add_func_uint16_t_u_u(l_1442, ((safe_sub_func_int64_t_s_s((((l_1361 >= ((!((*g_1034) = l_1442)) == (((void*)0 == l_1515) ^ ((safe_rshift_func_uint16_t_u_s(((*l_1292) || (*p_20)), 10)) ^ 0xC248L)))) != (l_1518 == l_1519)) > l_1503), g_531)) <= (*l_1305))));
                    }
                }
                (*p_20) = (*l_1305);
                (*g_957) = (safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((*l_1292), (****g_922))), 3));
                (*g_893) = &l_1474;
            }
            for (g_355 = 0; (g_355 < 48); g_355 = safe_add_func_uint32_t_u_u(g_355, 9))
            {
                short l_1529 = 0xBF1CL;
                (*g_893) = p_20;
                l_1368 &= ((*g_957) = (!((*l_1305) < (((((**g_585) >= (**g_585)) != (safe_mod_func_uint64_t_u_u((9L >= (*l_1292)), (-6L)))) && (l_1529 || (((**g_893) | (*g_586)) ^ l_1529))) && l_1529))));
                for (g_52 = 24; (g_52 < 21); g_52--)
                {
                    if ((*l_1292))
                        break;
                    for (g_30 = (-26); (g_30 < 12); g_30++)
                    {
                        (*p_20) = (*p_20);
                    }
                    (*g_894) = 0xD8C8BC25L;
                    for (g_542 = (-5); (g_542 > 48); ++g_542)
                    {
                        int *l_1536 = &l_1324;
                        (*g_893) = l_1536;
                    }
                }
            }
        }
        else
        {
            char l_1538 = (-1L);
            unsigned l_1564 = 0xA3CC8445L;
            int *l_1569 = &l_1474;
            int *l_1587 = &l_1456;
            int *l_1588 = (void*)0;
            int l_1589 = 1L;
            int *l_1590 = &l_1470;
            int *l_1591 = (void*)0;
            int *l_1592 = &g_1407;
            int *l_1593 = &g_927;
            int *l_1594 = (void*)0;
            int *l_1595 = &l_1589;
            int *l_1596 = &l_1495;
            int *l_1597 = &g_1407;
            int *l_1598 = &l_1495;
            int *l_1599 = &g_30;
            int *l_1600 = &l_1495;
            int *l_1601 = &l_1472;
            int *l_1602 = &l_1589;
            int *l_1603 = &l_1472;
            int *l_1604 = &g_30;
            int *l_1605 = &g_927;
            int *l_1606 = &l_1470;
            int *l_1607 = &g_927;
            int *l_1608 = &g_1407;
            int *l_1609 = &l_1456;
            int *l_1610 = &g_1480;
            int *l_1611 = &l_1474;
            int *l_1612 = &g_151;
            int *l_1613 = (void*)0;
            int l_1614 = 0x86B435F3L;
            int *l_1615 = &l_1474;
            int *l_1616 = &l_1472;
            int *l_1617 = &g_1407;
            int *l_1618 = (void*)0;
            int *l_1619 = &l_1474;
            int *l_1620 = &g_1407;
            int *l_1622 = &g_151;
            int *l_1624 = &l_1474;
            int *l_1625 = &g_151;
            int *l_1626 = &l_1495;
            int l_1627 = 0xDEEA3232L;
            int *l_1628 = &l_1495;
            int *l_1629 = &g_30;
            int *l_1630 = &l_1474;
            int *l_1631 = &g_1100;
            int *l_1632 = &l_1456;
            int *l_1633 = &g_927;
            int *l_1634 = &l_1324;
            int *l_1635 = (void*)0;
            int *l_1636 = (void*)0;
            int *l_1637 = (void*)0;
            int *l_1638 = &g_927;
            int *l_1639 = &g_151;
            int *l_1640 = &g_1407;
            int *l_1641 = &l_1614;
            int *l_1642 = &g_151;
            int *l_1643 = &l_1627;
            int *l_1644 = (void*)0;
            int *l_1645 = &g_151;
            int *l_1646 = &g_1407;
            int *l_1647 = &l_1614;
            int *l_1648 = &l_1627;
            int *l_1649 = &l_1472;
            int *l_1650 = (void*)0;
            int *l_1651 = (void*)0;
            int *l_1652 = &l_1470;
            int *l_1653 = &l_1614;
            int *l_1654 = &l_1495;
            int *l_1655 = &l_1474;
            int *l_1656 = (void*)0;
            int *l_1657 = (void*)0;
            int *l_1658 = &g_1100;
            int *l_1659 = &l_1470;
            int *l_1660 = &g_1407;
            int *l_1661 = &g_1407;
            int *l_1662 = &l_1472;
            int *l_1663 = (void*)0;
            int *l_1664 = &g_1100;
            int *l_1665 = &l_1614;
            int *l_1666 = &l_1623;
            int *l_1667 = &g_151;
            int *l_1668 = &g_1480;
            int *l_1669 = &l_1621;
            int *l_1670 = &g_1100;
            int *l_1671 = &l_1470;
            int *l_1672 = (void*)0;
            int *l_1673 = &g_927;
            int *l_1674 = &l_1623;
            int *l_1676 = (void*)0;
            int *l_1677 = &g_1407;
            int *l_1678 = &l_1456;
            int *l_1679 = &g_151;
            int *l_1680 = (void*)0;
            int *l_1681 = &l_1470;
            int *l_1682 = &l_1627;
            unsigned ****l_1697 = &l_1520;
            unsigned l_1715 = 0x805568AEL;
            unsigned short *l_1727 = &g_180;
            unsigned l_1730 = 0x785521D5L;
            if ((*l_1292))
            {
                long long l_1537 = (-1L);
                char l_1574 = (-4L);
                if ((*g_1108))
                {
                    int *l_1539 = &l_1495;
                    int *l_1540 = &l_1456;
                    int *l_1541 = &g_1480;
                    int *l_1542 = (void*)0;
                    int *l_1543 = &l_1456;
                    int *l_1544 = &g_1100;
                    int *l_1545 = &l_1474;
                    int *l_1546 = &l_1472;
                    int *l_1547 = (void*)0;
                    int *l_1548 = &l_1456;
                    int *l_1549 = &g_30;
                    int *l_1550 = &l_1495;
                    int *l_1551 = &g_1480;
                    int *l_1552 = &l_1456;
                    int *l_1553 = &g_150;
                    int *l_1554 = (void*)0;
                    int *l_1555 = &g_1480;
                    int *l_1556 = &g_150;
                    int *l_1557 = (void*)0;
                    int *l_1558 = &l_1474;
                    int *l_1559 = (void*)0;
                    int *l_1560 = &l_1474;
                    int *l_1561 = &g_151;
                    int *l_1562 = &l_1470;
                    int *l_1563 = &l_1474;
                    ++l_1564;
                    (*l_1553) = (safe_lshift_func_int8_t_s_u(g_59, ((~func_33(l_1563, p_18, ((func_33(l_1569, ((*g_893) = p_20), (*l_1305), (g_1090 &= (g_1211 = ((safe_mod_func_int64_t_s_s(((((safe_add_func_uint16_t_u_u(0xF552L, (-5L))) >= (*l_1569)) && (*l_1569)) >= l_1574), 18446744073709551611UL)) <= (**g_585)))), (*l_1569)) | l_1574) ^ l_1537), (*l_1541), (*l_1292))) != (*l_1305))));
                }
                else
                {
                    unsigned long long l_1575 = 0x3AEBF44933A33E89LL;
                    (*p_20) ^= 0xAA16BA86L;
                    (*l_1569) &= (0x7CFDE4302FC91923LL | l_1575);
                }
            }
            else
            {
                short l_1586 = 0x4E6AL;
                (*g_957) &= ((safe_sub_func_uint32_t_u_u((*l_1569), ((((*g_1034)++) < (func_33(&l_1456, &l_1495, (((g_52 >= (-1L)) < g_1211) ^ 0x5A94A592EBEC6F1CLL), ((safe_sub_func_int64_t_s_s((*l_1305), (+((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u(18446744073709551610UL, l_1586)), (*l_1569))) ^ (***g_923))))) < (*l_1569)), (*l_1305)) <= (*l_1305))) & 4294967295UL))) ^ 0L);
            }
            ++l_1684;
            if (func_33((l_1292 = &l_1614), &l_1627, ((*l_1677) <= func_33(&l_1474, &l_1472, (*l_1305), ((((safe_add_func_int16_t_s_s(l_1324, (g_1213 != (*l_1668)))) ^ (**g_924)) ^ (*l_1622)) | g_455), (**g_585))), l_1690, (*g_586)))
            {
                (*l_1629) ^= ((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(g_288, 1)), (**g_585))) != (*l_1305));
            }
            else
            {
                short *l_1700 = &g_1096;
                int l_1701 = 0xCD01DBFEL;
                int *l_1702 = &g_1498;
                unsigned char l_1703 = 5UL;
                unsigned char *l_1704 = &l_1301;
                long long *l_1705 = &g_1211;
                unsigned *l_1711 = (void*)0;
                unsigned *l_1712 = &l_1564;
                (*l_1641) = ((safe_add_func_uint16_t_u_u((!((l_1697 != &l_1520) | (*l_1597))), l_1698)) > (((*l_1700) |= l_1699) & (((*l_1704) &= func_33(&l_1627, &g_30, ((*l_1702) = l_1701), ((0xACL | (***g_923)) ^ (****g_922)), l_1703)) || 1UL)));
                (*g_893) = &l_1701;
                for (g_97 = 0; (g_97 < 28); g_97 = safe_add_func_int64_t_s_s(g_97, 1))
                {
                    unsigned short l_1722 = 65535UL;
                    unsigned short **l_1728 = &l_1727;
                    short l_1729 = 0x7F20L;
                    (*l_1612) = (safe_add_func_uint8_t_u_u(0x66L, (safe_add_func_int8_t_s_s(l_1722, ((((*g_1034) = (*l_1601)) <= (l_1722 ^ 0UL)) ^ l_1701)))));
                    for (g_437 = (-29); (g_437 != (-20)); g_437 = safe_add_func_uint16_t_u_u(g_437, 8))
                    {
                        if ((*l_1678))
                            break;
                        (*l_1629) ^= 7L;
                    }
                    l_1729 &= ((**g_893) = ((*l_1654) |= (safe_lshift_func_uint8_t_u_u(l_1703, (l_1700 != ((*l_1728) = l_1727))))));
                    (*l_1640) = (-8L);
                }
                (*l_1654) &= (**g_893);
            }
        }
    }
    else
    {
        long long *l_1733 = &g_1090;
        int l_1734 = 0x242DFED0L;
        long long l_1735 = 0x63E61E174BBB54F7LL;
        (*g_1108) |= ((*g_1034) == g_1104);
        for (g_180 = (-22); (g_180 != 22); g_180 = safe_add_func_int16_t_s_s(g_180, 8))
        {
            int l_1738 = 0L;
            return l_1738;
        }
        (*l_1292) = (safe_lshift_func_int16_t_s_u(g_26, 14));
    }
    (*g_957) = (*g_1108);
    (*g_893) = p_19;
    return l_1684;
}







static int * func_21(int * p_22, unsigned p_23, unsigned long long p_24, unsigned char p_25)
{
    unsigned l_28 = 4294967291UL;
    int *l_29 = &g_30;
    short l_934 = 0L;
    unsigned *l_947 = (void*)0;
    unsigned *l_948 = &g_886;
    char *l_958 = &g_437;
    long long l_961 = 0x928D26F967563160LL;
    int l_976 = 0x66186E5EL;
    unsigned short *l_1031 = &g_180;
    char l_1117 = 0L;
    unsigned short *l_1273 = &g_180;
    unsigned char ***l_1283 = &g_924;
    (*l_29) = l_28;
    for (p_23 = 26; (p_23 < 45); ++p_23)
    {
        unsigned char l_44 = 251UL;
        int *l_926 = &g_927;
        unsigned char l_928 = 0x5DL;
        short *l_931 = &g_932;
    }
    if ((((safe_sub_func_uint16_t_u_u((((*g_586)++) | ((*l_948)++)), 65528UL)) & (*l_29)) || ((safe_mod_func_uint64_t_u_u((((safe_sub_func_int8_t_s_s(((*l_958) &= ((func_33((*g_893), l_947, p_24, (*l_29), (safe_lshift_func_int8_t_s_s(0x45L, 7))) || p_23) != (*l_29))), 0x55L)) | 0xEBB5C9B9L) != 0xF6L), (*l_29))) && 0x128AL)))
    {
        int **l_959 = &l_29;
        int l_960 = (-3L);
        unsigned l_966 = 0UL;
        int l_1049 = (-6L);
        int l_1082 = 1L;
        unsigned char l_1107 = 0xABL;
        int l_1118 = 0x18A7CE6AL;
        int *l_1119 = &g_1100;
        unsigned l_1232 = 0x99216EB6L;
        short *l_1270 = &g_67;
        unsigned ***l_1275 = &g_585;
        unsigned ***l_1277 = &g_585;
        if (((*g_957) ^= (func_33(func_39(g_453), ((*l_959) = p_22), l_960, l_961, p_23) > ((*l_948) = p_25))))
        {
            int *l_975 = &l_960;
            unsigned ***l_1021 = &g_585;
            short *l_1024 = &g_702;
            int l_1025 = 0x349309A7L;
            int l_1068 = (-1L);
            int l_1091 = 9L;
            for (g_453 = 0; (g_453 == 5); g_453 = safe_add_func_int32_t_s_s(g_453, 2))
            {
                unsigned l_967 = 4294967292UL;
                long long *l_968 = &g_531;
                int l_985 = 0xB3CEBEA7L;
                short *l_986 = &g_702;
                unsigned short l_1007 = 7UL;
                (*g_957) ^= (3UL <= (safe_add_func_int64_t_s_s(((((l_966 < p_24) | (0x4B30D606F1CA09A8LL ^ ((*l_968) &= l_967))) >= l_967) ^ (safe_sub_func_uint32_t_u_u((p_24 == ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(func_33(((*l_959) = l_975), &g_927, g_437, g_180, p_24), l_976)) >= p_25), p_25)) < p_23)), p_24))), l_967)));
                for (g_150 = 17; (g_150 > (-3)); g_150 = safe_sub_func_uint8_t_u_u(g_150, 3))
                {
                    (*g_893) = ((*l_959) = l_975);
                }
                if ((0xD43FL > ((*l_986) |= ((safe_sub_func_int32_t_s_s((l_985 = ((**l_959) = (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((**l_959), p_23)), 7)))), l_967)) == g_59))))
                {
                    return p_22;
                }
                else
                {
                    unsigned char l_989 = 1UL;
                    int l_1010 = 0x888EAAB7L;
                    unsigned long long **l_1016 = (void*)0;
                    if (((safe_rshift_func_uint16_t_u_u(((*l_975) && 0x13L), ((void*)0 == (**g_923)))) && (0x2EL < 0L)))
                    {
                        if (l_985)
                            break;
                        (*l_975) ^= l_967;
                        ++l_989;
                    }
                    else
                    {
                        int *l_992 = &g_927;
                        int *l_993 = (void*)0;
                        int *l_994 = &l_960;
                        int *l_995 = &g_150;
                        int *l_996 = &g_927;
                        int *l_997 = &g_30;
                        int *l_998 = &g_151;
                        int *l_999 = &l_960;
                        int *l_1000 = &l_985;
                        int *l_1001 = &l_985;
                        int *l_1002 = (void*)0;
                        int l_1003 = 0x8D2026F0L;
                        int *l_1004 = &l_976;
                        int *l_1005 = &g_30;
                        int *l_1006 = (void*)0;
                        long long l_1013 = (-7L);
                        unsigned long long *l_1014 = (void*)0;
                        unsigned long long *l_1015 = &g_97;
                        ++l_1007;
                        if ((*l_975))
                            continue;
                        (*l_975) = (l_967 <= g_288);
                    }
                    if (p_25)
                    {
                        (*g_957) = 0x1FDCCD15L;
                        l_1016 = l_1016;
                    }
                    else
                    {
                        (*g_893) = (void*)0;
                        (*g_893) = p_22;
                        if ((*l_29))
                            break;
                    }
                }
                (*l_29) = (l_985 || p_23);
            }
            if ((safe_lshift_func_uint16_t_u_u((((*g_957) != ((*l_975) = ((****g_922) < ((func_33(&l_976, l_975, ((safe_rshift_func_uint8_t_u_s(((((l_1021 = &g_585) == (void*)0) != (p_24 != (*l_975))) ^ (safe_lshift_func_int8_t_s_u(((g_288 = ((*l_1024) |= (~p_23))) > p_24), 1))), g_26)) != 65535UL), p_23, (**g_585)) <= (*g_586)) < p_24)))) & g_180), 0)))
            {
                unsigned long long l_1037 = 0UL;
                int l_1045 = (-3L);
                int *l_1109 = (void*)0;
                (*l_975) ^= p_23;
                if ((*l_975))
                {
                    unsigned short l_1026 = 0x24E3L;
                    l_1026++;
                    for (g_288 = 9; (g_288 < (-10)); g_288 = safe_sub_func_uint8_t_u_u(g_288, 9))
                    {
                        if ((*l_975))
                            break;
                    }
                    (*g_957) &= (l_1026 <= (*l_975));
                }
                else
                {
                    unsigned short *l_1032 = &g_180;
                    int l_1040 = 3L;
                    unsigned short l_1110 = 1UL;
                    if ((*g_957))
                    {
                        unsigned short **l_1033 = (void*)0;
                        int l_1036 = 0x34329B7EL;
                        int *l_1038 = &g_30;
                        int *l_1039 = &l_1036;
                        int *l_1041 = &l_1036;
                        int *l_1042 = &l_976;
                        int *l_1043 = &l_976;
                        int *l_1044 = &l_1036;
                        int *l_1046 = &l_960;
                        int *l_1047 = &l_960;
                        int *l_1048 = &l_960;
                        int *l_1050 = (void*)0;
                        int *l_1051 = &l_1025;
                        int *l_1052 = (void*)0;
                        int *l_1053 = &g_30;
                        int *l_1054 = &g_151;
                        int *l_1055 = &l_1040;
                        int *l_1056 = &l_1045;
                        int *l_1057 = &l_1045;
                        int *l_1058 = &l_1040;
                        int *l_1059 = &g_927;
                        int *l_1060 = &l_960;
                        int *l_1061 = (void*)0;
                        int *l_1062 = &g_927;
                        int *l_1063 = (void*)0;
                        int *l_1064 = (void*)0;
                        int *l_1065 = (void*)0;
                        int *l_1066 = &l_1036;
                        int *l_1067 = (void*)0;
                        int *l_1069 = &g_151;
                        int *l_1070 = (void*)0;
                        int *l_1071 = &g_150;
                        int *l_1072 = &l_1068;
                        int *l_1073 = &g_150;
                        int *l_1074 = &g_927;
                        int *l_1075 = (void*)0;
                        int *l_1076 = &g_30;
                        int *l_1077 = &l_1036;
                        int *l_1078 = &g_151;
                        int *l_1079 = &l_1025;
                        int *l_1080 = &g_927;
                        int *l_1081 = (void*)0;
                        int *l_1083 = &g_151;
                        int *l_1084 = (void*)0;
                        int *l_1085 = &g_151;
                        int *l_1086 = &l_1025;
                        int *l_1087 = &g_151;
                        int *l_1088 = (void*)0;
                        int *l_1089 = (void*)0;
                        int *l_1092 = &l_1082;
                        int *l_1093 = &l_960;
                        int *l_1094 = (void*)0;
                        int *l_1095 = &l_1082;
                        int *l_1097 = &l_1068;
                        int *l_1098 = &l_1049;
                        int *l_1099 = &l_1040;
                        int *l_1101 = &l_1068;
                        int l_1102 = 0xA925B99AL;
                        int *l_1103 = (void*)0;
                        l_1037 &= (((*g_957) ^= func_33(&l_1025, p_22, ((l_1031 == (g_1034 = l_1032)) ^ (((safe_unary_minus_func_int32_t_s((*l_975))) || 0UL) & p_25)), (7L == g_67), l_1036)) ^ 5L);
                        (*l_959) = p_22;
                        --g_1104;
                        (*l_975) = (func_33(&l_1068, p_22, func_33(&l_1036, p_22, p_23, p_25, p_23), g_355, l_1040) & 0x0398L);
                    }
                    else
                    {
                        long long l_1111 = 0x98D79AFDD8D385ABLL;
                        (*g_893) = ((*l_959) = (*l_959));
                        (*l_959) = &l_1040;
                        (*l_959) = (*g_893);
                    }
                }
            }
            else
            {
                int *l_1112 = &l_1091;
                unsigned long long *l_1113 = &g_551;
                int **l_1116 = &g_1108;
                (*l_959) = (void*)0;
                (*g_893) = p_22;
                (*g_957) |= (*l_975);
            }
            (*g_1108) = l_1118;
            return l_1119;
        }
        else
        {
            if ((*g_957))
            {
                (*g_893) = &g_1100;
                for (g_453 = 0; (g_453 >= (-7)); g_453 = safe_sub_func_int64_t_s_s(g_453, 8))
                {
                    return p_22;
                }
            }
            else
            {
                (*l_959) = &l_976;
                for (g_1100 = 13; (g_1100 >= 24); g_1100 = safe_add_func_uint16_t_u_u(g_1100, 6))
                {
                    p_22 = p_22;
                }
                for (g_1104 = 11; (g_1104 == 6); g_1104--)
                {
                    return p_22;
                }
            }
            (*g_893) = p_22;
        }
        (*g_1108) = (p_23 == g_927);
        for (p_24 = 0; (p_24 == 20); ++p_24)
        {
            unsigned short l_1135 = 3UL;
            int l_1155 = 0x3BF38E63L;
            int l_1185 = 0x54697B94L;
            int l_1191 = (-5L);
            short *l_1271 = &g_288;
            unsigned short **l_1274 = &g_1034;
            unsigned ****l_1276 = &l_1275;
            unsigned long long *l_1278 = &g_542;
            for (g_416 = 9; (g_416 >= 45); g_416 = safe_add_func_int8_t_s_s(g_416, 3))
            {
                short *l_1134 = &g_932;
                int l_1189 = 0x8159E9B6L;
                int *l_1237 = &l_1185;
                int *l_1238 = &l_1082;
                int *l_1239 = &l_976;
                int *l_1240 = &g_927;
                int *l_1241 = &g_30;
                int *l_1242 = &g_151;
                int *l_1243 = &l_976;
                int *l_1244 = (void*)0;
                int *l_1245 = &l_1191;
                int *l_1246 = &l_1049;
                int *l_1247 = &g_1100;
                int *l_1248 = (void*)0;
                int *l_1249 = &l_1189;
                int *l_1250 = (void*)0;
                int *l_1251 = &l_1082;
                int *l_1252 = &g_1100;
                int *l_1253 = (void*)0;
                int *l_1254 = &l_1082;
                int *l_1255 = &g_927;
                int *l_1256 = &l_960;
                int *l_1257 = &l_960;
                int *l_1258 = &g_151;
                int *l_1259 = &g_927;
                int *l_1260 = &l_1191;
                int *l_1261 = &g_30;
                int *l_1262 = &l_976;
                int *l_1263 = &l_1049;
                int *l_1264 = &l_1191;
                unsigned l_1265 = 4294967289UL;
                if ((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((*l_1134) = (p_24 && 0x03B73723CC8F09D5LL)), 1)), ((*g_1034) |= (--l_1135)))))
                {
                    char l_1140 = (-6L);
                    int l_1174 = 0L;
                    int l_1178 = (-10L);
                    int l_1208 = (-3L);
                    int l_1209 = 0x3568338DL;
                    for (g_1096 = 7; (g_1096 >= 10); g_1096++)
                    {
                        int *l_1141 = &g_151;
                        int *l_1142 = &l_976;
                        int *l_1143 = &g_30;
                        int *l_1144 = &l_1082;
                        int *l_1145 = &l_976;
                        int *l_1146 = &g_1100;
                        int *l_1147 = &l_976;
                        int *l_1148 = &l_1049;
                        int *l_1149 = &g_927;
                        int *l_1150 = &l_976;
                        int *l_1151 = &l_976;
                        int l_1152 = 0xA055F57CL;
                        int *l_1153 = &l_1082;
                        int *l_1154 = &g_30;
                        int *l_1156 = &l_1152;
                        int *l_1157 = &g_927;
                        int *l_1158 = &l_1049;
                        int *l_1159 = (void*)0;
                        int *l_1160 = (void*)0;
                        int *l_1161 = &g_30;
                        int *l_1162 = &l_1155;
                        int *l_1163 = &l_1082;
                        int *l_1164 = &l_1049;
                        int *l_1165 = &g_1100;
                        int *l_1166 = (void*)0;
                        int *l_1167 = &l_1082;
                        int *l_1168 = &l_1082;
                        int *l_1169 = &g_1100;
                        int *l_1170 = &l_1049;
                        int *l_1171 = &l_1049;
                        int *l_1172 = &g_927;
                        int *l_1173 = &l_1082;
                        int *l_1175 = &l_1152;
                        int *l_1176 = &g_150;
                        int *l_1177 = (void*)0;
                        int *l_1179 = &l_1082;
                        int *l_1180 = (void*)0;
                        int *l_1181 = &g_151;
                        int *l_1182 = &g_927;
                        int *l_1183 = &g_150;
                        int *l_1184 = &g_927;
                        int *l_1186 = (void*)0;
                        int *l_1187 = &g_927;
                        int *l_1188 = &g_1100;
                        int *l_1190 = &l_960;
                        int *l_1192 = &g_1100;
                        int l_1193 = 0x1C59E287L;
                        int *l_1194 = &l_1193;
                        int *l_1195 = &l_1189;
                        int *l_1196 = &l_1185;
                        int *l_1197 = &l_1189;
                        int *l_1198 = &l_960;
                        int *l_1199 = &g_1100;
                        int *l_1200 = &l_1193;
                        int *l_1201 = &g_927;
                        int *l_1202 = &l_1178;
                        int *l_1203 = &l_1174;
                        int *l_1204 = &l_960;
                        int *l_1205 = &g_30;
                        int *l_1206 = &l_1193;
                        int *l_1207 = &l_1185;
                        int *l_1210 = &l_1185;
                        int *l_1212 = (void*)0;
                        (*g_1108) = (p_24 ^ (p_25 & 0x0BD67B30L));
                        ++g_1213;
                    }
                    (*g_957) = l_1178;
                    if (p_24)
                        break;
                }
                else
                {
                    int *l_1216 = &g_1100;
                    int *l_1217 = &l_1189;
                    int *l_1218 = &g_150;
                    int *l_1219 = &l_960;
                    int *l_1220 = &l_1155;
                    int *l_1221 = &g_150;
                    int *l_1222 = &g_150;
                    int *l_1223 = &g_30;
                    int *l_1224 = &g_927;
                    int *l_1225 = &l_1189;
                    int *l_1226 = &l_976;
                    int *l_1227 = &l_1191;
                    int *l_1228 = &g_927;
                    int *l_1229 = &l_960;
                    int *l_1230 = &l_1082;
                    int *l_1231 = &l_976;
                    l_1232--;
                    (*l_1216) &= (safe_mod_func_uint32_t_u_u((!p_23), p_23));
                }
                (*g_893) = (*g_893);
                if ((*g_1108))
                    continue;
                ++l_1265;
            }
            (*g_893) = (*g_893);
            (*g_1108) = (0x66L ^ (((((safe_lshift_func_uint16_t_u_u((l_1270 == l_1271), p_23)) ^ ((*l_1271) = ((safe_unary_minus_func_uint16_t_u((l_1273 != ((*l_1274) = &g_180)))) | ((*l_1278) = (((*l_1276) = l_1275) != l_1277))))) ^ 0x7699L) && p_23) && (*l_1119)));
        }
        (*l_1119) = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((*g_1034), 9)), ((l_1283 == (*g_922)) == p_24)));
    }
    else
    {
        unsigned l_1284 = 0x9002AC9FL;
        (*g_1108) &= l_1284;
    }
    return p_22;
}







static int func_33(int * p_34, int * p_35, int p_36, long long p_37, unsigned p_38)
{
    int l_933 = 8L;
    (*p_34) = (-1L);
    return l_933;
}







static int * func_39(short p_40)
{
    unsigned l_569 = 0x92E09EF8L;
    long long *l_573 = &g_253;
    unsigned char *l_577 = &g_59;
    int l_614 = 6L;
    int l_615 = 0x41B10988L;
    unsigned short l_641 = 0xF902L;
    unsigned **l_682 = &g_586;
    unsigned char **l_688 = &l_577;
    unsigned char ***l_687 = &l_688;
    unsigned short l_767 = 9UL;
    unsigned long long l_769 = 0xCEABCEE8DF8503DELL;
    if (l_569)
    {
        long long **l_570 = (void*)0;
        long long *l_572 = &g_253;
        long long **l_571 = &l_572;
        int l_580 = 1L;
        unsigned l_582 = 18446744073709551615UL;
        int l_594 = (-1L);
        int *l_648 = &g_151;
        unsigned char **l_684 = &l_577;
        unsigned char ***l_683 = &l_684;
        int l_750 = 1L;
        unsigned l_778 = 0x5FBF8F3BL;
        int *l_780 = (void*)0;
        int *l_781 = &l_580;
        unsigned long long *l_784 = &g_542;
        if (((*g_153) = ((l_573 = ((*l_571) = &g_253)) == &g_253)))
        {
            long long l_574 = (-4L);
            unsigned long long **l_593 = &g_279;
            int l_627 = 0L;
            unsigned long long *l_671 = &g_551;
            unsigned short *l_672 = &g_180;
            int *l_673 = &l_594;
            unsigned long long l_676 = 18446744073709551615UL;
            unsigned l_681 = 0UL;
            int l_742 = 0x3A4387AFL;
            unsigned long long l_756 = 18446744073709551609UL;
            l_574 &= p_40;
            if (((safe_sub_func_int64_t_s_s(((**l_571) ^= l_569), ((void*)0 != l_573))) >= ((l_577 != (void*)0) >= 0x5737L)))
            {
                unsigned long long l_610 = 0UL;
                int l_623 = 0x805390F6L;
                for (g_150 = 11; (g_150 != 1); --g_150)
                {
                    int *l_581 = &l_580;
                    unsigned **l_587 = (void*)0;
                    unsigned ***l_588 = &g_585;
                    (*l_581) = l_580;
                    (*l_581) ^= l_582;
                    (*l_581) = (safe_sub_func_uint8_t_u_u((((p_40 >= 0UL) < (p_40 | p_40)) <= p_40), ((p_40 != l_582) ^ l_582)));
                    (*l_588) = (l_587 = g_585);
                }
                (*g_153) = (safe_lshift_func_uint8_t_u_u(l_574, l_569));
                if (((safe_sub_func_uint16_t_u_u(((l_593 == (void*)0) || p_40), (g_453 > p_40))) < g_67))
                {
                    int *l_595 = &l_594;
                    int *l_596 = &l_580;
                    int *l_597 = &g_151;
                    int *l_598 = &l_594;
                    int *l_599 = &g_151;
                    int *l_600 = &l_580;
                    int *l_601 = &l_594;
                    int *l_602 = &g_151;
                    int *l_603 = &l_594;
                    int *l_604 = &l_580;
                    int *l_605 = (void*)0;
                    int *l_606 = &g_30;
                    int *l_607 = &g_150;
                    int *l_608 = &l_594;
                    int *l_609 = (void*)0;
                    int *l_613 = &g_150;
                    int *l_616 = &g_30;
                    int *l_617 = &l_614;
                    int *l_618 = (void*)0;
                    int *l_619 = &l_615;
                    int *l_620 = &l_614;
                    int *l_621 = &g_151;
                    int *l_622 = &g_30;
                    int *l_624 = (void*)0;
                    int *l_625 = &g_151;
                    int *l_626 = &l_623;
                    int *l_628 = &l_594;
                    int *l_629 = &l_580;
                    int *l_630 = &g_150;
                    int *l_631 = &g_150;
                    int *l_632 = &g_30;
                    int *l_633 = &l_614;
                    int *l_634 = &l_580;
                    int *l_635 = &l_627;
                    int *l_636 = &l_614;
                    int *l_637 = &l_627;
                    int *l_638 = (void*)0;
                    int *l_639 = &g_150;
                    int *l_640 = (void*)0;
                    (*g_153) &= l_594;
                    ++l_610;
                    ++l_641;
                    return &g_150;
                }
                else
                {
                    long long ***l_644 = (void*)0;
                    long long ***l_645 = &l_571;
                    (*l_645) = &l_572;
                }
            }
            else
            {
                unsigned l_660 = 5UL;
                (*g_153) |= (-6L);
                for (g_551 = 0; (g_551 == 47); ++g_551)
                {
                    int *l_649 = &g_151;
                    int *l_650 = &l_627;
                    int *l_651 = (void*)0;
                    int *l_652 = &l_615;
                    int *l_653 = &l_614;
                    int *l_654 = &g_150;
                    int *l_655 = &g_151;
                    int *l_656 = (void*)0;
                    int *l_657 = &l_614;
                    int *l_658 = &l_627;
                    int *l_659 = &l_614;
                    l_648 = &g_151;
                    --l_660;
                    g_153 = &l_594;
                    if (p_40)
                        break;
                }
            }
            (*l_673) |= (safe_rshift_func_uint16_t_u_s(((*l_672) = ((-1L) || ((0L != (((*g_586) = (safe_lshift_func_uint8_t_u_s((*g_58), (safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(l_574, ((*g_58) <= (((*l_671) = 0xE29E462A4FBE48F8LL) >= (l_627 && ((((((!(0x68L <= (*l_648))) > g_531) ^ 18446744073709551606UL) & (-1L)) == l_615) && 0x9288L)))))) < 4294967289UL), 0xAAL))))) ^ l_614)) > 1UL))), p_40));
            if (((((safe_add_func_uint8_t_u_u(((*l_648) = ((p_40 ^ p_40) > l_681)), g_52)) != 0x6A790F04L) > 0x4DL) < p_40))
            {
                (*g_153) &= ((void*)0 == l_682);
                (*l_673) = 0xA2BE1988L;
            }
            else
            {
                unsigned char ***l_685 = &l_684;
                int l_710 = 0x3FEC4F62L;
                if ((*l_648))
                {
                    unsigned char ****l_686 = &l_683;
                    unsigned l_692 = 4294967292UL;
                    int *l_713 = &g_151;
                    int l_716 = 9L;
                    long long **l_761 = (void*)0;
                    if ((+(((*l_648) != ((((*l_686) = l_685) == l_687) <= ((safe_add_func_int8_t_s_s(g_52, l_641)) != (0x61C34D0A55AF744ELL != ((((p_40 != (safe_unary_minus_func_int64_t_s((0x87F7L < (g_288 = l_692))))) ^ (-7L)) & p_40) == 0x8D75L))))) <= l_615)))
                    {
                        unsigned short l_699 = 0x6F72L;
                        int **l_703 = &l_673;
                        char *l_714 = (void*)0;
                        char *l_715 = &g_455;
                        (*g_153) = (*g_153);
                        (*l_703) = (void*)0;
                        l_716 |= (g_30 && ((**l_684) = (safe_add_func_uint8_t_u_u((*l_648), p_40))));
                    }
                    else
                    {
                        int *l_717 = (void*)0;
                        int *l_718 = &l_614;
                        int *l_719 = (void*)0;
                        int *l_720 = &l_627;
                        int *l_721 = &l_594;
                        int *l_722 = &l_710;
                        int *l_723 = &l_615;
                        int *l_724 = &l_627;
                        int *l_725 = (void*)0;
                        int *l_726 = &g_151;
                        int *l_727 = &g_30;
                        int *l_728 = &l_614;
                        int *l_729 = &l_594;
                        int *l_730 = &l_627;
                        int *l_731 = &l_614;
                        int *l_732 = &l_614;
                        int *l_733 = &l_614;
                        int *l_734 = &l_710;
                        int *l_735 = &g_151;
                        int *l_736 = &g_150;
                        int *l_737 = &l_710;
                        int *l_738 = &l_594;
                        int *l_739 = &l_716;
                        int *l_740 = &l_614;
                        int *l_741 = &l_710;
                        int *l_743 = (void*)0;
                        int *l_744 = &l_742;
                        int *l_745 = &g_151;
                        int *l_746 = &l_710;
                        int *l_747 = (void*)0;
                        int *l_748 = &l_742;
                        int *l_749 = &l_614;
                        int *l_751 = (void*)0;
                        int *l_752 = &l_716;
                        int *l_753 = &l_627;
                        int *l_754 = (void*)0;
                        int *l_755 = &l_614;
                        unsigned *l_764 = (void*)0;
                        unsigned *l_765 = &g_26;
                        ++l_756;
                        (*l_728) = ((void*)0 == &g_288);
                        (*g_153) = (((((+(safe_add_func_uint32_t_u_u((g_455 >= (*l_713)), ((*l_744) = l_710)))) | (**g_585)) <= ((l_710 <= ((void*)0 != l_761)) == ((*l_648) ^ ((*l_765) &= (safe_add_func_int16_t_s_s((g_180 == 0xEC9EL), 0x7BEBL)))))) ^ (*l_740)) < 0xA4L);
                    }
                    return &g_151;
                }
                else
                {
                    unsigned char l_766 = 0x25L;
                    int l_768 = 1L;
                    l_768 &= ((1L > l_766) > ((~(((((l_615 | (*g_58)) >= 0L) == l_710) == ((*g_153) < l_767)) ^ 0xFBL)) && (*l_673)));
                }
                l_769 ^= (-10L);
                return &g_151;
            }
        }
        else
        {
            unsigned long long *l_770 = &g_551;
            (*g_153) &= (((*l_770) &= l_769) > ((safe_lshift_func_uint8_t_u_s((+p_40), 5)) & p_40));
        }
        (*l_781) ^= ((safe_add_func_int64_t_s_s((safe_unary_minus_func_int32_t_s(((0x50102660F8441D93LL >= (((0xA444L & ((!(safe_sub_func_uint16_t_u_u(l_615, (l_614 = g_702)))) && l_778)) > (safe_unary_minus_func_uint32_t_u((((**l_682) = l_767) < (p_40 != (*l_648)))))) || (*g_153))) != (*l_648)))), g_26)) > 0xDA6919E9L);
        if ((safe_add_func_int16_t_s_s((l_615 != (l_615 > ((*g_58) = ((((*g_58) & (*g_58)) && ((void*)0 != &g_253)) <= (p_40 ^ p_40))))), ((*l_781) = (((*l_784) = (g_30 & g_355)) == g_180)))))
        {
            return &g_151;
        }
        else
        {
            int **l_785 = &l_648;
            (*l_781) ^= (*g_153);
            (*l_781) &= ((*g_153) &= l_767);
            (*l_785) = &l_594;
        }
        (*l_781) = ((*g_153) = (l_569 | (safe_mod_func_int64_t_s_s(0x3AC9E366A0CD230ELL, p_40))));
    }
    else
    {
        unsigned l_788 = 0x353CE2C3L;
        char *l_793 = &g_455;
        int l_815 = 0x631B1B4AL;
        int l_816 = (-5L);
        int l_827 = 0x6AD622B2L;
        int l_839 = (-1L);
        int l_877 = 0x075C8E10L;
        int *l_903 = &l_614;
        unsigned char *****l_925 = &g_922;
        if ((g_97 != (l_641 <= (g_542 && (((p_40 & l_788) < ((**g_585) == (l_614 = (safe_sub_func_int32_t_s_s(l_788, ((safe_lshift_func_int8_t_s_u(((*l_793) ^= g_702), (*g_58))) ^ p_40)))))) == l_788)))))
        {
            int l_807 = 1L;
            int l_812 = 1L;
            for (g_437 = 0; (g_437 <= (-21)); g_437 = safe_sub_func_uint64_t_u_u(g_437, 8))
            {
                unsigned long long *l_804 = &g_542;
                unsigned short *l_813 = &g_180;
                int l_814 = 0L;
                int l_828 = (-1L);
                int **l_892 = &g_8;
            }
            for (l_788 = (-20); (l_788 != 12); ++l_788)
            {
                l_614 &= (safe_sub_func_uint8_t_u_u((*g_58), (+0x5EL)));
                for (l_807 = 0; (l_807 >= 20); l_807 = safe_add_func_uint16_t_u_u(l_807, 1))
                {
                    unsigned long long *l_910 = &l_769;
                    (*g_893) = &l_877;
                    (**g_893) = (0UL ^ ((void*)0 != l_910));
                    (*g_894) = (p_40 | l_769);
                }
            }
        }
        else
        {
            (*l_903) ^= ((safe_sub_func_int32_t_s_s(p_40, (safe_sub_func_uint8_t_u_u((*g_58), p_40)))) == p_40);
            for (g_67 = 0; (g_67 == 5); ++g_67)
            {
                short l_921 = (-4L);
                l_615 = ((*g_153) = ((p_40 ^ ((--(*l_577)) && 1UL)) != (safe_rshift_func_int16_t_s_u(l_921, 0))));
            }
        }
        l_614 ^= ((((*l_925) = g_922) != &g_923) >= ((*l_688) != (*l_688)));
    }
    return &g_30;
}







static short func_41(int * p_42, int p_43)
{
    unsigned char *l_51 = &g_52;
    int l_57 = 4L;
    unsigned char *l_60 = &g_59;
    unsigned char **l_61 = &g_58;
    unsigned char *l_62 = (void*)0;
    unsigned char *l_63 = (void*)0;
    unsigned char *l_64 = (void*)0;
    unsigned char *l_65 = &g_59;
    short *l_66 = &g_67;
    int **l_566 = (void*)0;
    int **l_567 = &g_153;
    int *l_568 = &l_57;
    (*l_567) = func_45(((*l_66) = (safe_mod_func_int16_t_s_s((p_43 <= (p_43 <= ((*l_51) = (+p_43)))), (safe_add_func_uint16_t_u_u((65535UL || (safe_mod_func_uint8_t_u_u(l_57, (g_30 | ((*l_65) = (l_51 != ((*l_61) = (l_60 = g_58)))))))), (~((g_26 >= l_57) != p_43))))))));
    (*p_42) ^= (p_43 && p_43);
    (*p_42) = (*p_42);
    (*l_568) &= (*g_153);
    return p_43;
}







static int * func_45(short p_46)
{
    unsigned l_72 = 0x6EE3E4F6L;
    int *l_73 = &g_30;
    unsigned l_146 = 4294967294UL;
    int l_156 = 1L;
    unsigned long long l_186 = 0xF93E04930E3A4418LL;
    int **l_194 = &l_73;
    int l_212 = 6L;
    int l_311 = 0xF0AB7DFDL;
    int l_330 = (-1L);
    int *l_559 = &l_156;
    int **l_560 = &g_153;
    for (g_67 = 0; (g_67 >= (-20)); g_67 = safe_sub_func_uint64_t_u_u(g_67, 3))
    {
        int *l_71 = &g_30;
        int **l_70 = &l_71;
        int **l_74 = &l_73;
        int *l_76 = &g_30;
        int **l_75 = &l_76;
        (*l_70) = &g_30;
        (**l_70) = (!((l_72 < (p_46 || (((*l_70) == ((*l_75) = ((*l_74) = l_73))) > ((void*)0 == &p_46)))) != (safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((0xFB38A83A56CF6D70LL <= g_67) < l_72) <= p_46), 0xEB1ED309061E9426LL)), (*g_58)))));
        (*l_71) &= p_46;
        (*l_75) = (void*)0;
    }
    if ((safe_unary_minus_func_int64_t_s(p_46)))
    {
        unsigned long long l_130 = 0x1C31E92403636CD8LL;
        int *l_136 = &g_30;
        int *l_183 = &g_30;
        int **l_184 = &l_73;
        int *l_185 = (void*)0;
        for (g_26 = 28; (g_26 >= 7); g_26 = safe_sub_func_uint16_t_u_u(g_26, 3))
        {
            int *l_91 = (void*)0;
            unsigned char *l_106 = &g_59;
            unsigned short l_114 = 65528UL;
            int *l_118 = &g_30;
            int *l_154 = &g_150;
            int *l_155 = &g_150;
            int *l_157 = &g_150;
            int *l_158 = &g_30;
            int *l_159 = &l_156;
            int *l_160 = &g_151;
            int *l_161 = (void*)0;
            int *l_162 = &g_30;
            int *l_163 = &g_151;
            int *l_164 = (void*)0;
            int *l_165 = &l_156;
            int *l_166 = &g_30;
            int *l_167 = &g_150;
            int *l_168 = &l_156;
            int *l_169 = &g_151;
            int *l_170 = (void*)0;
            int *l_171 = &l_156;
            int *l_172 = &g_30;
            int *l_173 = (void*)0;
            int *l_174 = (void*)0;
            int *l_175 = (void*)0;
            int *l_176 = &g_150;
            int *l_177 = &g_151;
            int *l_178 = &g_30;
            int *l_179 = &l_156;
            for (l_72 = 0; (l_72 == 44); l_72++)
            {
                unsigned l_95 = 4294967286UL;
                int l_96 = 0xCDE216D7L;
                short *l_109 = &g_67;
                int *l_110 = &g_30;
                unsigned long long *l_111 = &g_97;
                unsigned char **l_116 = &g_58;
                unsigned char ***l_115 = &l_116;
                int *l_117 = &l_96;
                for (g_67 = 0; (g_67 >= 15); ++g_67)
                {
                    for (g_30 = 1; (g_30 >= 7); g_30 = safe_add_func_int32_t_s_s(g_30, 8))
                    {
                        int *l_90 = &g_30;
                        unsigned char **l_93 = (void*)0;
                        unsigned char ***l_92 = &l_93;
                        int **l_94 = &l_73;
                        l_91 = l_90;
                        (*l_92) = &g_58;
                        (*l_94) = (void*)0;
                        l_96 |= l_95;
                    }
                }
                (*l_110) &= ((g_59 == (0x2937BBCEC63F78CALL == (!g_97))) >= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_46, (safe_add_func_int32_t_s_s(((((*l_109) ^= (((safe_sub_func_int64_t_s_s(((void*)0 == l_106), p_46)) ^ (safe_lshift_func_uint16_t_u_u(g_59, g_52))) >= (*g_58))) <= g_97) == l_72), p_46)))), 14)));
                (*l_110) = ((--(*l_111)) >= l_114);
                (*l_117) &= ((*l_110) = (&g_58 != ((*l_115) = &g_58)));
            }
            (*l_118) = p_46;
            for (p_46 = 8; (p_46 != 16); ++p_46)
            {
                unsigned char l_147 = 5UL;
                for (g_97 = (-15); (g_97 >= 54); g_97++)
                {
                    unsigned short l_127 = 0UL;
                    unsigned char **l_131 = &l_106;
                    unsigned char ***l_132 = &l_131;
                    for (g_52 = 10; (g_52 > 48); g_52 = safe_add_func_uint16_t_u_u(g_52, 1))
                    {
                        (*l_118) = (!(safe_sub_func_int8_t_s_s(l_127, ((safe_rshift_func_uint8_t_u_s((*g_58), p_46)) < l_130))));
                        if (p_46)
                            continue;
                    }
                    (*l_132) = l_131;
                    if ((safe_add_func_uint32_t_u_u(g_30, p_46)))
                    {
                        int **l_135 = &l_118;
                        l_136 = ((*l_135) = &g_30);
                        (*l_135) = (*l_135);
                    }
                    else
                    {
                        unsigned *l_143 = &l_72;
                        int **l_152 = (void*)0;
                        (*l_118) = (g_26 >= (safe_rshift_func_uint16_t_u_s(p_46, 6)));
                        (*l_118) = (g_52 || (!((g_67 < ((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((*l_136), (((*l_143)--) && ((l_146 && g_30) != l_147)))) <= 0x3265E09581AD2EC9LL), (safe_add_func_uint64_t_u_u((g_150 > ((g_151 |= g_150) || g_26)), g_150)))) == g_97)) == (*l_118))));
                        g_153 = l_118;
                    }
                }
                (*l_136) = p_46;
            }
            g_180++;
        }
        (*l_184) = l_183;
        ++l_186;
    }
    else
    {
        unsigned l_191 = 0UL;
        int **l_196 = (void*)0;
        int ***l_195 = &l_196;
        int l_208 = 1L;
        int l_219 = 0x076CEBAFL;
        int *l_294 = &l_208;
        long long l_301 = 0x450B37558CCBDE43LL;
        int l_339 = 1L;
        int l_349 = (-2L);
        (*g_153) ^= ((*l_73) = (safe_add_func_uint8_t_u_u(((l_191 != 0x3DL) && 1L), ((((&g_67 == (void*)0) >= (l_191 >= (*l_73))) || l_191) != (safe_sub_func_int8_t_s_s((*l_73), (*g_58)))))));
        if (((l_194 != ((*l_195) = &l_73)) || (***l_195)))
        {
            int *l_199 = &g_30;
            int l_206 = 0xB339EC43L;
            unsigned l_273 = 7UL;
            unsigned long long *l_277 = (void*)0;
            unsigned long long **l_276 = &l_277;
            int *l_302 = &g_30;
            int *l_303 = &l_156;
            int *l_304 = &g_150;
            int *l_305 = &l_156;
            int *l_306 = (void*)0;
            int *l_307 = &l_206;
            int *l_308 = (void*)0;
            int *l_309 = &l_206;
            int *l_310 = &g_151;
            int *l_312 = (void*)0;
            int *l_313 = &g_30;
            int *l_314 = &l_219;
            int *l_315 = &l_156;
            int *l_316 = &l_219;
            int *l_317 = &l_219;
            int *l_318 = &g_151;
            int *l_319 = &g_150;
            int *l_320 = &l_208;
            int *l_321 = &g_150;
            int *l_322 = &l_219;
            int *l_323 = &l_208;
            int *l_324 = &l_156;
            int *l_325 = &g_30;
            int *l_326 = &l_206;
            int *l_327 = &g_151;
            int *l_328 = &g_151;
            int *l_329 = &l_311;
            int *l_331 = &l_212;
            int *l_332 = &g_30;
            int *l_333 = (void*)0;
            int *l_334 = &g_30;
            int *l_335 = &l_212;
            int *l_336 = &g_150;
            int *l_337 = &g_30;
            int *l_338 = (void*)0;
            int *l_340 = &l_156;
            int *l_341 = &g_150;
            int *l_342 = &l_330;
            int *l_343 = &l_206;
            int *l_344 = &l_330;
            int *l_345 = (void*)0;
            int *l_346 = &g_151;
            int *l_347 = &l_330;
            int *l_348 = &l_311;
            int *l_350 = &l_156;
            int *l_351 = &g_30;
            int *l_352 = &l_330;
            int *l_353 = &l_206;
            int *l_354 = &g_30;
            for (g_26 = 10; (g_26 >= 5); g_26 = safe_sub_func_uint16_t_u_u(g_26, 8))
            {
                unsigned char l_220 = 249UL;
                long long *l_252 = &g_253;
                int *l_259 = &l_212;
                int *l_260 = (void*)0;
                int *l_261 = (void*)0;
                int *l_262 = &l_212;
                int *l_263 = &g_30;
                int *l_264 = &l_208;
                int *l_265 = &l_208;
                int *l_266 = &g_151;
                int *l_267 = &g_151;
                int *l_268 = &l_206;
                int l_269 = (-1L);
                int l_270 = 0L;
                int *l_271 = &l_270;
                int *l_272 = &g_30;
                if (p_46)
                {
                    int *l_202 = &l_156;
                    int *l_203 = &l_156;
                    int *l_204 = &g_151;
                    int *l_205 = (void*)0;
                    int *l_207 = (void*)0;
                    int *l_209 = &g_151;
                    int *l_210 = &g_30;
                    int *l_211 = &l_206;
                    int *l_213 = &l_208;
                    int *l_214 = &g_30;
                    int *l_215 = &l_212;
                    int *l_216 = &g_30;
                    int *l_217 = &l_212;
                    int *l_218 = &g_150;
                    (*l_196) = l_199;
                    (*l_199) = (safe_rshift_func_int16_t_s_s(g_97, 3));
                    l_220--;
                }
                else
                {
                    unsigned l_245 = 0xA4222F61L;
                    l_199 = (*l_196);
                    if (p_46)
                    {
                        (*l_196) = (**l_195);
                    }
                    else
                    {
                        int *l_223 = &g_151;
                        int *l_224 = &g_30;
                        int *l_225 = &l_212;
                        int *l_226 = (void*)0;
                        int *l_227 = (void*)0;
                        int *l_228 = &l_156;
                        int *l_229 = &l_208;
                        int *l_230 = &l_208;
                        int *l_231 = (void*)0;
                        int *l_232 = &l_206;
                        int *l_233 = &g_150;
                        int *l_234 = (void*)0;
                        int *l_235 = &l_156;
                        int *l_236 = &l_206;
                        int *l_237 = &g_150;
                        int *l_238 = &l_206;
                        int *l_239 = &l_156;
                        int *l_240 = &l_219;
                        int *l_241 = &l_212;
                        int *l_242 = &l_156;
                        int *l_243 = &g_30;
                        int *l_244 = (void*)0;
                        l_245++;
                        return &g_30;
                    }
                }
                (*g_153) &= ((safe_lshift_func_int8_t_s_u((!(safe_add_func_uint64_t_u_u((((p_46 <= (((*l_252) = 3L) & ((**l_196) &= (+(p_46 >= ((safe_unary_minus_func_uint16_t_u(0x2793L)) >= (safe_rshift_func_int8_t_s_s(p_46, 4)))))))) | 0L) <= (*g_58)), g_151))), 2)) == ((safe_lshift_func_uint8_t_u_u(p_46, p_46)) < g_180));
                l_273--;
                if (((**l_196) ^ (!(9L < ((*l_272) & g_59)))))
                {
                    g_278 = l_276;
                }
                else
                {
                    return &g_151;
                }
            }
            (*g_153) = (*g_153);
            for (l_206 = 24; (l_206 != 12); --l_206)
            {
                int *l_295 = &l_156;
                for (l_186 = 0; (l_186 >= 46); l_186++)
                {
                    char l_289 = 0x43L;
                    for (g_59 = 0; (g_59 <= 3); g_59 = safe_add_func_uint8_t_u_u(g_59, 7))
                    {
                        g_288 |= ((safe_sub_func_uint32_t_u_u((g_97 >= p_46), (*l_199))) != (p_46 < g_67));
                    }
                    (*l_194) = &l_206;
                    (*l_194) = (void*)0;
                }
            }
            --g_355;
        }
        else
        {
            int *l_361 = &g_151;
            unsigned char *l_366 = (void*)0;
            unsigned char *l_367 = &g_52;
            unsigned long long *l_378 = &g_97;
            unsigned *l_379 = &l_72;
            long long *l_380 = &l_301;
            int l_410 = 0xC38ADFB7L;
            int l_469 = 1L;
            int l_486 = 0x8D3ECBD2L;
            for (p_46 = 0; (p_46 >= (-21)); p_46 = safe_sub_func_int32_t_s_s(p_46, 1))
            {
                int *l_360 = &l_330;
                (*l_196) = l_360;
                return l_361;
            }
            if ((((*l_380) = ((safe_rshift_func_uint8_t_u_s((*g_58), (safe_add_func_int8_t_s_s(((void*)0 == &l_186), (++(*l_367)))))) == ((safe_mod_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((*l_73), 65535UL)) == p_46), (safe_rshift_func_uint16_t_u_s((l_378 == &l_186), 9)))) && ((*l_379) = ((+(*l_361)) <= 1UL))) >= (*l_73)), 0xCB6EL)) ^ (-5L)))) > p_46))
            {
                int *l_381 = (void*)0;
                (*l_195) = (void*)0;
                (*l_194) = (void*)0;
                l_381 = &g_151;
            }
            else
            {
                unsigned long long l_438 = 18446744073709551613UL;
                int *l_439 = &g_151;
                unsigned *l_461 = (void*)0;
                int l_467 = 8L;
                int l_477 = 0L;
                unsigned l_545 = 0xCC2C1256L;
                long long l_550 = 0x1410D91D209C864BLL;
                for (g_59 = 15; (g_59 <= 55); ++g_59)
                {
                    int *l_384 = (void*)0;
                    int *l_385 = &l_219;
                    int *l_386 = (void*)0;
                    int *l_387 = &l_212;
                    int *l_388 = &g_151;
                    int *l_389 = &l_156;
                    int *l_390 = &l_311;
                    int *l_391 = &l_339;
                    int *l_392 = &l_311;
                    int *l_393 = (void*)0;
                    int *l_394 = &g_30;
                    int *l_395 = &l_212;
                    int *l_396 = &g_151;
                    int *l_397 = &l_311;
                    int *l_398 = &l_349;
                    int *l_399 = &l_208;
                    int *l_400 = &l_311;
                    int *l_401 = &l_330;
                    int *l_402 = &g_150;
                    int *l_403 = (void*)0;
                    int *l_404 = (void*)0;
                    int *l_405 = &l_219;
                    int *l_406 = &l_349;
                    int *l_407 = &l_212;
                    int *l_408 = (void*)0;
                    int *l_409 = &l_208;
                    int *l_411 = &l_349;
                    int *l_412 = &l_339;
                    int *l_413 = (void*)0;
                    int *l_414 = &l_330;
                    int *l_415 = &l_330;
                    unsigned long long *l_430 = &l_186;
                    unsigned long long **l_429 = &l_430;
                    unsigned long long **l_431 = (void*)0;
                    unsigned long long *l_433 = &l_186;
                    unsigned long long **l_432 = &l_433;
                    char *l_436 = &g_437;
                    (*l_361) = ((*l_294) >= g_180);
                    if ((*l_361))
                        continue;
                    g_416++;
                    if (((safe_mod_func_int32_t_s_s((((safe_add_func_uint64_t_u_u(((*l_378) = g_26), (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((void*)0 == &g_52), 7)) < (*g_153)), (((*l_432) = ((*l_429) = ((*g_278) = (void*)0))) == (void*)0))) && p_46), p_46)))) < (safe_rshift_func_int8_t_s_u(((*l_436) = g_416), 6))) ^ (**l_194)), l_438)) > 0x68L))
                    {
                        return &g_150;
                    }
                    else
                    {
                        return l_439;
                    }
                }
                for (g_437 = 0; (g_437 >= 11); g_437 = safe_add_func_uint32_t_u_u(g_437, 1))
                {
                    unsigned l_460 = 4294967295UL;
                    unsigned **l_462 = &l_461;
                    int *l_463 = &l_339;
                    char *l_464 = &g_455;
                    for (g_67 = 22; (g_67 >= 6); g_67 = safe_sub_func_uint16_t_u_u(g_67, 4))
                    {
                        short *l_452 = &g_453;
                        char *l_454 = &g_455;
                        (*l_194) = &g_151;
                        (*l_294) ^= (~(0xAEA97A0ADC2B5266LL && (safe_sub_func_int8_t_s_s(p_46, ((*l_454) = ((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_151, (~(p_46 > ((safe_sub_func_uint32_t_u_u(((*l_379) &= 0UL), (**l_194))) & 7UL))))), (~((g_288 = 0xAB2CL) != ((*l_452) = 0xA204L))))) ^ g_30) == (*l_439)) > (-4L)))))));
                    }
                    (*l_361) = ((((p_46 > (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(((*l_294) != l_460), 3)) != (*l_439)), ((*g_58) != ((*l_464) = ((&g_416 != ((*l_462) = l_461)) >= (((((*l_194) = l_463) != l_463) < (*g_153)) > 0x5B741154D9B2C9C7LL))))))) != 0x8A60L) < (*l_463)) & (-4L));
                    if (p_46)
                        continue;
                }
                if ((*l_73))
                {
                    unsigned char l_465 = 0x59L;
                    int l_466 = 0L;
                    long long l_548 = 0x2A4950D67AFB20A8LL;
                    int l_549 = (-1L);
                    (*l_196) = (**l_195);
                    if (l_465)
                    {
                        (*l_196) = &g_151;
                        l_466 = (p_46 >= (p_46 < ((**l_194) &= (*g_153))));
                    }
                    else
                    {
                        int *l_468 = &l_349;
                        int *l_470 = &g_150;
                        int *l_471 = &l_208;
                        int *l_472 = (void*)0;
                        int *l_473 = &l_156;
                        int *l_474 = (void*)0;
                        int *l_475 = &g_151;
                        int *l_476 = &l_219;
                        int *l_478 = &l_311;
                        int *l_479 = &l_212;
                        int *l_480 = &l_156;
                        int *l_481 = &l_469;
                        int *l_482 = &l_208;
                        int *l_483 = (void*)0;
                        int *l_484 = &l_467;
                        int *l_485 = &g_30;
                        int *l_487 = &l_349;
                        int *l_488 = &l_219;
                        unsigned l_489 = 0xA516FDD7L;
                        int *l_492 = &g_150;
                        int *l_493 = &g_30;
                        int *l_494 = (void*)0;
                        int *l_495 = &l_311;
                        int *l_496 = &l_156;
                        int *l_497 = (void*)0;
                        int *l_498 = &l_466;
                        int *l_499 = &l_208;
                        int *l_500 = &l_212;
                        int *l_501 = &l_339;
                        int *l_502 = &l_156;
                        int *l_503 = &l_477;
                        int *l_504 = (void*)0;
                        int *l_505 = (void*)0;
                        int *l_506 = &l_349;
                        int *l_507 = &l_469;
                        int *l_508 = &l_330;
                        int *l_509 = (void*)0;
                        int *l_510 = &l_469;
                        int *l_511 = &g_150;
                        int *l_512 = &l_466;
                        int *l_513 = &l_469;
                        int *l_514 = &g_150;
                        int *l_515 = &l_330;
                        int *l_516 = &g_151;
                        int *l_517 = (void*)0;
                        int *l_518 = &l_339;
                        int *l_519 = &l_466;
                        int *l_520 = &l_410;
                        int *l_521 = (void*)0;
                        int *l_522 = (void*)0;
                        int *l_523 = (void*)0;
                        int *l_524 = &l_208;
                        int *l_525 = &l_410;
                        int *l_526 = &l_467;
                        int *l_527 = &l_219;
                        int *l_528 = &l_208;
                        int *l_529 = (void*)0;
                        int *l_530 = (void*)0;
                        int *l_532 = &l_349;
                        int *l_533 = &l_466;
                        int *l_534 = (void*)0;
                        int *l_535 = &l_466;
                        int *l_536 = &l_219;
                        int *l_537 = &l_410;
                        int *l_538 = (void*)0;
                        int *l_539 = &l_208;
                        int *l_540 = (void*)0;
                        int *l_541 = &l_330;
                        ++l_489;
                        g_542++;
                        l_545--;
                        g_551--;
                    }
                }
                else
                {
                    (*l_439) ^= ((249UL > (*g_58)) >= g_453);
                }
            }
        }
        if ((p_46 | (p_46 ^ (safe_rshift_func_int8_t_s_u(g_551, 2)))))
        {
            unsigned short l_556 = 1UL;
            --l_556;
            (*l_194) = l_559;
        }
        else
        {
            (*l_294) |= p_46;
            (*l_559) = (*g_153);
        }
    }
    (*l_560) = ((*l_194) = &g_150);
    (*l_559) = ((safe_unary_minus_func_uint64_t_u((g_59 && (safe_add_func_int8_t_s_s(1L, (0L >= (*l_559))))))) || (safe_mod_func_int32_t_s_s(((*g_153) = 0x65395D11L), p_46)));
    return &g_30;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_551, "g_551", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_886, "g_886", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_932, "g_932", print_hash_value);
    transparent_crc(g_1090, "g_1090", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    transparent_crc(g_1100, "g_1100", print_hash_value);
    transparent_crc(g_1104, "g_1104", print_hash_value);
    transparent_crc(g_1211, "g_1211", print_hash_value);
    transparent_crc(g_1213, "g_1213", print_hash_value);
    transparent_crc(g_1401, "g_1401", print_hash_value);
    transparent_crc(g_1407, "g_1407", print_hash_value);
    transparent_crc(g_1408, "g_1408", print_hash_value);
    transparent_crc(g_1480, "g_1480", print_hash_value);
    transparent_crc(g_1498, "g_1498", print_hash_value);
    transparent_crc(g_1505, "g_1505", print_hash_value);
    transparent_crc(g_1829, "g_1829", print_hash_value);
    transparent_crc(g_1904, "g_1904", print_hash_value);
    transparent_crc(g_1963, "g_1963", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
