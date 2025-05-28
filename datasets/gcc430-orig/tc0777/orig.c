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



static long long g_4 = 1L;
static int g_20 = 0x79253A34L;
static const int *g_19 = &g_20;
static long long g_55 = (-4L);
static unsigned long long g_71 = 0x1919B17C08A59C2DLL;
static int g_85 = 0x138BF9CCL;
static unsigned char g_87 = 0xEDL;
static int *g_90 = &g_20;
static int **g_89 = &g_90;
static short g_108 = 0x9CC9L;
static int g_110 = (-3L);
static unsigned g_111 = 0UL;
static unsigned long long **g_132 = (void*)0;
static unsigned char g_163 = 0x79L;
static const int ***g_166 = (void*)0;
static unsigned g_225 = 0x672B09FDL;
static unsigned short g_275 = 9UL;
static const unsigned long long g_311 = 18446744073709551615UL;
static char g_334 = (-1L);
static long long *g_342 = &g_4;
static char g_354 = 0x2BL;
static unsigned g_370 = 1UL;
static unsigned long long g_382 = 0xC3BC8424BEAB7B60LL;
static short g_391 = 0xBCD6L;
static long long g_469 = 0x78EB271DC77971B1LL;
static unsigned g_516 = 0x95DEFAC7L;
static unsigned char *g_540 = &g_87;
static unsigned char **g_539 = &g_540;
static int * const ****g_574 = (void*)0;
static const unsigned char g_607 = 0x59L;
static long long **g_636 = &g_342;
static long long *** const g_635 = &g_636;
static unsigned short g_680 = 0x69FDL;
static short g_696 = 0xA37DL;
static unsigned char ***g_758 = &g_539;
static unsigned char ****g_757 = &g_758;
static short * const g_833 = &g_108;
static unsigned char * const *g_857 = &g_540;
static unsigned char * const * const *g_856 = &g_857;
static unsigned char * const * const **g_855 = &g_856;
static const unsigned g_875 = 3UL;
static int *g_879 = &g_85;
static int *g_892 = (void*)0;
static int g_903 = 0xB2FE3ACBL;
static const int *g_921 = &g_903;
static unsigned g_922 = 6UL;
static unsigned *g_1007 = &g_922;
static unsigned **g_1006 = &g_1007;
static unsigned long long *g_1015 = (void*)0;
static unsigned long long **g_1014 = &g_1015;
static long long ***g_1039 = (void*)0;
static unsigned *g_1055 = &g_516;
static unsigned **g_1054 = &g_1055;



static int func_1(void);
static int func_2(unsigned long long p_3);
static int * func_5(unsigned short p_6, int * p_7);
static int * func_8(int * p_9, const int * p_10, int * const p_11);
static unsigned short func_12(int p_13, const int * p_14, int p_15, int * p_16);
static const int * func_17(unsigned char p_18);
static unsigned short func_32(long long p_33, const int * p_34, unsigned p_35, int p_36, char p_37);
static int * func_39(unsigned short p_40, int p_41, char p_42, const long long p_43);
static unsigned func_46(unsigned char p_47, unsigned p_48, long long * const p_49);
static long long * func_51(long long * p_52, int * p_53);
static int func_1(void)
{
    int l_904 = 0x773D4B6CL;
    int **l_917 = &g_90;
    int *l_918 = &g_903;
    char l_919 = 1L;
    int *l_920 = &g_20;
    unsigned long long *l_923 = (void*)0;
    int l_924 = 0x58938826L;
    unsigned long long *l_925 = &g_71;
    unsigned short *l_926 = &g_275;
    short l_927 = 1L;
    unsigned *l_930 = &g_922;
    unsigned l_933 = 7UL;
    unsigned char *****l_935 = &g_757;
    int ** const **l_944 = (void*)0;
    long long **l_964 = &g_342;
    short l_965 = (-2L);
    const int *l_968 = &g_110;
    unsigned l_998 = 18446744073709551610UL;
    l_904 |= func_2(g_4);
    (*l_918) = (*g_921);
    if (((((*l_930) = (safe_sub_func_int64_t_s_s(((*l_918) && g_55), (*g_342)))) != ((*l_920) || 0x86L)) && (((****g_855) = ((+(((*g_833) >= g_354) <= (*l_920))) < g_334)) >= 0x13L)))
    {
        unsigned char *****l_934 = (void*)0;
        unsigned short l_936 = 0x0F3EL;
        int ****l_941 = (void*)0;
        int *****l_942 = (void*)0;
        int *****l_943 = &l_941;
        unsigned short *l_946 = &g_275;
        unsigned short *l_947 = &g_275;
        const int *l_948 = &g_20;
        unsigned l_949 = 0xFA689672L;
        short l_960 = 0x40FCL;
        const long long ***l_961 = (void*)0;
        const long long *l_963 = (void*)0;
        const long long **l_962 = &l_963;
        long long * const l_966 = (void*)0;
        (*l_918) = (((((l_934 == l_935) == ((*l_920) = 0x8A94F055L)) != ((**g_636) & ((*l_925) = (*l_918)))) ^ (((l_936 |= (&g_334 == &g_354)) , (((***g_856) < g_696) , l_936)) >= 4294967295UL)) ^ 0x1842B6BBL);
        (*g_892) ^= (+((*l_918) >= ((+(((&g_879 != (l_936 , (void*)0)) ^ l_936) , ((*****l_935) = (**g_539)))) != g_382)));
        (*l_918) = (4UL < l_949);
        (*l_920) &= (((-5L) | ((safe_lshift_func_int16_t_s_s((g_311 , (*g_833)), 0)) & g_391)) | g_354);
    }
    else
    {
        short l_967 = 6L;
        short l_969 = 0xD1B7L;
        char *l_970 = &g_354;
        unsigned long long *l_980 = (void*)0;
        int *l_991 = (void*)0;
        unsigned **l_1004 = (void*)0;
        long long l_1019 = 0L;
        long long ***l_1040 = (void*)0;
        int l_1041 = 0xCD7F2891L;
        unsigned l_1044 = 0x5785B4D1L;
        unsigned char *** const *l_1046 = &g_758;
        unsigned char *** const * const *l_1045 = &l_1046;
        (*l_918) = (*l_918);
        if ((((*l_918) || ((*l_970) = ((*l_920) , 1L))) != (****g_855)))
        {
            long long l_987 = 6L;
            int ***l_989 = &l_917;
            unsigned l_1001 = 8UL;
            int l_1011 = (-1L);
            unsigned l_1018 = 0x3AEF4AB9L;
            long long ***l_1037 = &l_964;
            unsigned **l_1050 = &l_930;
            unsigned l_1051 = 1UL;
            for (g_391 = 0; (g_391 != 28); g_391++)
            {
                int ***l_988 = &l_917;
                int l_990 = 0xC0C51A2EL;
                const unsigned char l_993 = 0x95L;
                unsigned ***l_1005 = &l_1004;
                unsigned ***l_1008 = (void*)0;
                unsigned **l_1009 = &g_1007;
                long long * const l_1010 = &g_55;
                long long l_1025 = (-9L);
                for (l_927 = 0; (l_927 == (-4)); l_927 = safe_sub_func_int64_t_s_s(l_927, 2))
                {
                    const unsigned long long **l_977 = (void*)0;
                    const unsigned long long *l_979 = &g_311;
                    const unsigned long long **l_978 = &l_979;
                    int l_983 = 0x4897FE5FL;
                    int l_986 = 8L;
                    (*l_920) ^= ((safe_mod_func_uint32_t_u_u(g_55, (*g_892))) | 0xADL);
                    (*g_892) ^= 1L;
                    (**l_989) = l_991;
                    if ((g_903 , (*g_892)))
                    {
                        char l_992 = (-5L);
                        return l_992;
                    }
                    else
                    {
                        if (l_993)
                            break;
                        (**l_988) = l_991;
                    }
                }
                if ((((safe_add_func_uint64_t_u_u((((**g_636) > (((((safe_lshift_func_uint16_t_u_s(l_998, 11)) ^ ((*l_970) ^= (safe_lshift_func_int16_t_s_s(l_1011, 13)))) != (**g_636)) & g_696) , (**g_636))) ^ 0x3BEF0AECL), g_311)) , 1UL) <= 0L))
                {
                    if ((*g_892))
                        break;
                    return (*g_879);
                }
                else
                {
                    unsigned long long **l_1012 = &l_980;
                    unsigned long long ***l_1013 = &l_1012;
                    int l_1026 = 1L;
                    (**l_988) = func_5(g_903, l_991);
                    (**l_917) = ((4L <= (((*l_1013) = l_1012) == g_1014)) , (((***l_988) <= (((safe_add_func_uint64_t_u_u(l_1018, l_1019)) && g_225) || (safe_add_func_uint32_t_u_u((*g_1007), (((safe_add_func_int32_t_s_s(((*l_920) |= (((safe_unary_minus_func_uint16_t_u((**l_917))) == 2L) , l_1025)), (***l_989))) , (*l_968)) != l_1026))))) <= (**g_636)));
                    (***l_988) = ((***l_989) == (***l_988));
                }
                (*l_917) = (**l_988);
                (**l_988) = ((safe_rshift_func_uint8_t_u_s(251UL, (g_334 = ((*l_970) &= g_110)))) , (void*)0);
            }
            if ((&l_919 == (void*)0))
            {
                short l_1032 = 0x9571L;
                long long ****l_1038 = (void*)0;
                unsigned char *** const * const **l_1047 = &l_1045;
                l_1041 |= (0x38C5L & (((((safe_unary_minus_func_int64_t_s((safe_add_func_uint8_t_u_u((***g_758), l_1032)))) , (safe_rshift_func_int8_t_s_s(0L, (!((&g_680 == ((safe_add_func_int8_t_s_s(l_1032, (0xFDCEL == (0x3175D6724957B2F7LL ^ (((*g_892) = ((g_1039 = l_1037) != l_1040)) || l_1032))))) , &g_275)) | g_163))))) , 0UL) , &g_275) != (void*)0));
                (*l_920) ^= (l_1032 <= (safe_sub_func_int64_t_s_s(l_1032, ((*g_1007) , ((safe_sub_func_uint8_t_u_u(((&g_1007 == l_1050) || l_1051), (**g_857))) >= l_1032)))));
                (**l_989) = func_5(l_1032, &l_1041);
                (*l_918) = (*g_892);
            }
            else
            {
                int *l_1052 = &g_903;
                l_1052 = func_5(g_87, &g_110);
            }
        }
        else
        {
            char *l_1053 = &g_334;
            int l_1056 = 0xB73BA1C1L;
            (*l_917) = (void*)0;
            l_991 = func_5(g_20, &g_20);
            return (*g_879);
        }
    }
    return (*l_920);
}







static int func_2(unsigned long long p_3)
{
    char l_25 = 0xF2L;
    int * const l_30 = (void*)0;
    int *l_31 = &g_20;
    int **l_895 = &g_892;
    unsigned short l_896 = 9UL;
    unsigned *l_900 = &g_370;
    unsigned **l_899 = &l_900;
    short *l_901 = &g_696;
    int *l_902 = &g_903;
    (*l_895) = (p_3 , func_5(p_3, func_8((func_12(g_4, func_17(g_4), (safe_rshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(l_25, (safe_add_func_uint16_t_u_u(0x1479L, (l_25 < (safe_sub_func_int8_t_s_s(((l_30 == l_30) <= g_4), 255UL))))))), 4)), l_31) , (void*)0), l_31, l_31)));
    (*l_895) = (p_3 , (*l_895));
    (*l_902) ^= (((**l_895) = ((*l_901) &= (((((**g_539) = (l_896 ^ (safe_add_func_int32_t_s_s((p_3 >= (*g_833)), (*g_892))))) , (((!g_311) || (g_516 <= ((*l_31) , (p_3 || ((((*l_899) = &g_225) != l_31) ^ 0xB8L))))) > (*g_833))) <= (*g_833)) | p_3))) <= (*g_833));
    return p_3;
}







static int * func_5(unsigned short p_6, int * p_7)
{
    char l_893 = (-1L);
    int *l_894 = &g_110;
    (*l_894) = l_893;
    (*l_894) = (*l_894);
    return l_894;
}







static int * func_8(int * p_9, const int * p_10, int * const p_11)
{
    unsigned l_641 = 1UL;
    unsigned long long *l_654 = &g_71;
    unsigned long long **l_653 = &l_654;
    const unsigned long long * const l_656 = &g_71;
    const unsigned long long * const *l_655 = &l_656;
    const unsigned short l_662 = 65535UL;
    int *l_681 = (void*)0;
    int l_691 = 0L;
    unsigned long long l_697 = 0xA4BE7DDB96E671F9LL;
    int l_700 = (-1L);
    int l_704 = 0x34D19A19L;
    unsigned char ***l_756 = &g_539;
    unsigned char ****l_755 = &l_756;
    int ***l_775 = &g_89;
    int ****l_774 = &l_775;
    long long * const l_780 = (void*)0;
    const long long l_781 = 0x8904D5FBEFFCCAD7LL;
    int *l_782 = &l_700;
    short *l_788 = (void*)0;
    short *l_789 = (void*)0;
    short *l_790 = (void*)0;
    short *l_791 = &g_696;
    short *l_792 = &g_391;
    const long long l_793 = (-1L);
    unsigned long long l_807 = 1UL;
    unsigned l_877 = 1UL;
    if ((65535UL && g_4))
    {
        unsigned short *l_642 = &g_275;
        int l_643 = 4L;
        char *l_646 = &g_354;
        int **l_649 = (void*)0;
        int **l_650 = (void*)0;
        int **l_651 = &g_90;
        (*l_651) = p_11;
    }
    else
    {
        unsigned long long l_652 = 5UL;
        const unsigned long long * const **l_657 = &l_655;
        unsigned *l_658 = (void*)0;
        unsigned *l_659 = &g_516;
        char *l_676 = &g_354;
        short *l_677 = (void*)0;
        short *l_678 = (void*)0;
        short *l_679 = &g_391;
        char l_703 = 0x52L;
        long long * const l_726 = &g_469;
        int l_740 = 0x3D56D019L;
        unsigned l_759 = 8UL;
        (*p_11) = (l_652 <= l_641);
        if (((*p_11) = (safe_rshift_func_uint8_t_u_s((l_652 != l_662), 2))))
        {
            short l_686 = 1L;
            int **l_687 = &l_681;
            unsigned short *l_690 = &g_680;
            long long l_723 = 0xD0D278E7F56782A2LL;
            unsigned l_724 = 0x91DA3A1EL;
            long long **l_765 = (void*)0;
            int *l_773 = &g_85;
            (*l_687) = p_11;
            l_691 &= (((g_71 , (((((*l_690) = (&g_225 != ((safe_sub_func_uint64_t_u_u(l_652, 0xC17C9EF93D842395LL)) , (void*)0))) , l_652) && ((**l_687) ^ 1UL)) & (((l_652 < 4L) , (**l_687)) ^ (**l_687)))) == (*l_681)) == (*l_681));
            l_681 = (void*)0;
            if (l_703)
            {
                int l_709 = (-1L);
                short l_712 = (-2L);
                p_9 = (g_90 = &l_704);
            }
            else
            {
                int l_725 = 0L;
                char *l_727 = (void*)0;
                unsigned long long *l_728 = &l_652;
                unsigned l_739 = 4294967295UL;
                int *l_764 = &g_85;
                unsigned l_766 = 0x77A43628L;
                const int **** const l_776 = &g_166;
                long long l_777 = (-1L);
                if ((safe_lshift_func_int8_t_s_s(((*l_676) |= 0x71L), ((((((*l_728) = (((**g_539) = (l_703 > l_703)) || (g_334 = (safe_sub_func_uint64_t_u_u(((*l_654) = (+g_469)), l_725))))) || l_703) ^ l_725) >= 0x21E92662L) < l_703))))
                {
                    int l_737 = 0x65BC4CB3L;
                    unsigned *l_738 = &g_370;
                    int *l_741 = &l_725;
                    (*p_11) = ((*l_741) ^= (l_740 &= (safe_mod_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_u((g_111 , ((((0L < (l_652 , 0xC15EEEA5L)) , (l_686 , (*p_10))) , (-1L)) < (**g_539))), 1)) | l_739) || l_739) > 253UL), (-3L)))));
                }
                else
                {
                    int *l_748 = &l_691;
                    const int **l_752 = &g_19;
                    (*l_687) = l_748;
                    for (g_163 = 15; (g_163 == 32); g_163++)
                    {
                        int *l_751 = &l_691;
                        (*l_687) = l_751;
                    }
                    (*p_11) = l_739;
                    (*l_752) = p_10;
                }
                (*l_687) = p_9;
                (*l_687) = l_782;
                p_9 = &l_740;
            }
        }
        else
        {
            unsigned *l_785 = &l_759;
            (*p_11) = (safe_add_func_uint32_t_u_u((((*l_782) &= (*p_11)) , 0x0CCC1CC0L), ((*l_785) ^= g_680)));
        }
    }
    (*p_11) = (g_354 > ((safe_rshift_func_uint16_t_u_u((*l_782), (((((((*l_792) ^= ((g_108 = ((*l_791) = ((*l_782) & (***g_758)))) , (g_469 , (*l_782)))) & (g_382 == (1L ^ (!0x409949C2855AEE53LL)))) ^ (*p_10)) , (-8L)) > l_793) < 0x4CDED9D4483DB49ELL))) , g_334));
    for (g_87 = 0; (g_87 < 57); ++g_87)
    {
        unsigned char *l_798 = &g_163;
        int l_809 = 0xBC23F6AAL;
        int l_835 = (-1L);
        short l_852 = 0xAE09L;
        for (g_680 = 10; (g_680 >= 54); g_680 = safe_add_func_int64_t_s_s(g_680, 5))
        {
            unsigned char l_808 = 0x32L;
            int *l_836 = (void*)0;
            if (((void*)0 != l_798))
            {
                short l_810 = 0x9471L;
                int l_853 = 6L;
                if ((safe_lshift_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((0xF233L | (safe_rshift_func_int16_t_s_u((-3L), 14))), l_807)) ^ (g_354 >= ((*l_791) = (g_225 <= l_808)))) & g_108) < l_809), (g_311 && l_810))))
                {
                    unsigned *l_813 = (void*)0;
                    unsigned *l_814 = &l_641;
                    unsigned *l_815 = &g_111;
                    int l_816 = 3L;
                    int *l_817 = &g_110;
                    unsigned l_825 = 5UL;
                    unsigned long long *l_840 = &g_71;
                    (*l_817) |= (((safe_sub_func_int32_t_s_s(((((*l_815) = ((0x4D58L >= g_111) , ((*l_814) |= ((0x2BL & ((*l_782) = (0xDC80E9AAF91349BELL & l_808))) && (*p_10))))) , l_809) == l_816), (((***g_635) = l_810) & l_810))) , l_809) != 5UL);
                    if ((*p_11))
                    {
                        unsigned short l_824 = 7UL;
                        int **l_826 = &l_782;
                        short *l_834 = (void*)0;
                        (*l_826) = p_11;
                        l_835 |= ((*l_817) != (safe_rshift_func_uint16_t_u_u((+((safe_sub_func_int32_t_s_s((*p_10), (!(safe_mod_func_uint32_t_u_u(l_809, l_809))))) <= ((g_833 != l_834) <= l_808))), 14)));
                        (*l_817) = (*p_10);
                        return l_836;
                    }
                    else
                    {
                        unsigned long long l_839 = 0x663AA398E2A333B4LL;
                        int **l_854 = &l_817;
                        (*l_817) = ((*l_782) &= ((safe_add_func_uint32_t_u_u((l_839 <= ((l_840 == (void*)0) , (safe_rshift_func_uint16_t_u_s((l_853 ^= (l_809 , ((((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((l_839 , (safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint16_t_u((g_275 ^= ((((safe_unary_minus_func_uint8_t_u((~(l_808 != ((*g_342) = ((0x82L < (****g_757)) != (-10L))))))) >= l_852) , (****g_757)) && g_680)))), l_810)), 7))))), 4)) , l_810) , (*p_10)) ^ (*l_817)))), l_839)))), g_607)) || l_839));
                        (*l_854) = p_11;
                        if ((*p_10))
                            break;
                    }
                }
                else
                {
                    unsigned char * const * const ***l_858 = &g_855;
                    (*p_11) = (((*l_782) = (l_835 > 0x0A10L)) ^ (l_853 && (((*l_858) = g_855) == &g_758)));
                }
                for (g_20 = 20; (g_20 > 17); g_20 = safe_sub_func_uint16_t_u_u(g_20, 1))
                {
                    unsigned long long l_863 = 18446744073709551610UL;
                    int l_880 = 0xD5FA3EB1L;
                    p_10 = &l_835;
                    (*l_782) = (*p_11);
                    if ((((*l_792) &= (safe_lshift_func_uint8_t_u_s((l_863 == (*g_833)), (6UL || 18446744073709551615UL)))) , 0xF65D14E6L))
                    {
                        if (l_853)
                            break;
                    }
                    else
                    {
                        const int l_870 = 7L;
                        const unsigned *l_874 = &g_875;
                        const unsigned **l_873 = &l_874;
                        char *l_876 = &g_354;
                        int **l_878 = (void*)0;
                        int l_881 = 1L;
                        l_880 &= (safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s((((***g_635) , (safe_sub_func_int64_t_s_s(l_809, (l_853 = (((p_11 != (g_879 = &g_85)) != l_870) | (*g_833)))))) , l_863), l_810)), g_382));
                        l_881 &= (g_111 < ((l_880 , (l_870 && l_853)) , (l_810 | (l_853 < l_870))));
                    }
                }
                p_10 = p_11;
                (*l_782) ^= l_853;
            }
            else
            {
                (*l_782) &= ((*g_879) , ((*p_11) = (p_11 == p_10)));
            }
            if ((*p_11))
                continue;
        }
        l_835 &= ((*p_11) = (safe_mul_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((((*l_782) = ((g_334 <= (*p_11)) != l_809)) & (safe_mod_func_int8_t_s_s(g_225, (***g_758)))), (((safe_rshift_func_uint16_t_u_s(g_85, ((((*l_792) ^= ((*g_833) <= (g_55 ^ (safe_mod_func_int8_t_s_s(l_852, l_809))))) | g_275) , (*g_833)))) != g_680) , (*g_342)))), 0L)));
    }
    return g_892;
}







static unsigned short func_12(int p_13, const int * p_14, int p_15, int * p_16)
{
    long long *l_38 = &g_4;
    int l_50 = 0L;
    long long *l_54 = &g_55;
    int *l_56 = &l_50;
    short *l_107 = &g_108;
    int *l_109 = &g_110;
    unsigned char l_112 = 1UL;
    const int **l_117 = (void*)0;
    const int **l_118 = &g_19;
    unsigned char l_119 = 2UL;
    int ** const *l_387 = &g_89;
    unsigned long long l_399 = 18446744073709551615UL;
    long long l_411 = 0xBC1D8947DD0D944DLL;
    const long long l_450 = 0x46B1DC9098E91659LL;
    unsigned short l_456 = 1UL;
    int ***l_462 = &g_89;
    int ****l_461 = &l_462;
    unsigned char l_506 = 255UL;
    unsigned char ** const * const l_575 = &g_539;
    int *l_587 = &g_110;
    long long **l_591 = &g_342;
    long long ***l_590 = &l_591;
    char *l_592 = &g_334;
    char *l_615 = &g_354;
    char l_639 = 0x13L;
    const char l_640 = (-1L);
    (*l_118) = func_17((((func_32(((*l_38) ^= (~(&p_15 != &g_20))), ((*l_118) = func_39((((((*l_54) = (g_111 |= (((((*l_109) ^= (((*l_107) |= (safe_rshift_func_int16_t_s_u((func_46(g_20, l_50, func_51(l_54, l_56)) , ((void*)0 != &g_89)), g_85))) && 0xAA41L)) == (*l_56)) & 5L) > 0x7AL))) > p_15) , g_108) < p_15), g_85, l_112, p_15)), g_85, p_13, l_119) & p_13) | g_354) ^ (-1L)));
    for (g_20 = 0; (g_20 < (-5)); g_20 = safe_sub_func_uint8_t_u_u(g_20, 1))
    {
        int ** const **l_388 = &l_387;
        int l_389 = 0xCFDACA28L;
        short *l_390 = &g_391;
        unsigned long long *l_394 = &g_71;
        unsigned short *l_395 = &g_275;
        unsigned l_398 = 1UL;
        (*l_109) = (safe_unary_minus_func_int16_t_s(((*l_390) = ((*l_107) &= (((*l_388) = l_387) == ((l_389 , (g_225 >= p_13)) , &g_89))))));
        (*l_109) = ((safe_lshift_func_uint16_t_u_s(((*l_395) = (((*l_38) = (*g_342)) >= ((*l_394) = 0UL))), ((*l_107) ^= (p_13 | (-4L))))) , (safe_sub_func_int64_t_s_s((((l_398 , l_399) || ((g_311 || (*l_56)) <= ((g_275 <= g_55) < 0x370156E42DADD9A6LL))) < 0x988EL), (*l_56))));
    }
    (*l_118) = &g_20;
    if (((*l_109) ^= (*l_56)))
    {
        unsigned *l_412 = &g_370;
        unsigned *l_413 = &g_225;
        unsigned short *l_414 = &g_275;
        int l_417 = (-4L);
        const int l_418 = 0L;
        unsigned char l_422 = 0UL;
        char *l_423 = &g_354;
        unsigned char *l_424 = &l_422;
        long long * const l_425 = &l_411;
        int l_470 = (-5L);
        (*p_16) = (safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s(((*g_342) || (safe_unary_minus_func_int8_t_s((p_13 && (safe_add_func_int32_t_s_s(((l_417 = p_15) < l_418), 0x14D2B7C5L)))))), 7)) < 0L), 2));
        (*l_56) = l_418;
        (**l_387) = func_39((p_15 >= ((p_13 <= (safe_add_func_int8_t_s_s((((safe_unary_minus_func_uint8_t_u(253UL)) ^ ((*l_56) == ((*l_107) = g_20))) <= 246UL), 0x6FL))) == (-1L))), l_418, l_418, (*g_342));
        if ((l_107 != l_107))
        {
            unsigned long long l_434 = 0x670B72B2D8758F15LL;
            long long * const l_475 = &g_55;
            int l_477 = 1L;
            unsigned short *l_507 = &l_456;
            for (g_20 = 0; (g_20 >= 27); g_20 = safe_add_func_uint64_t_u_u(g_20, 4))
            {
                g_89 = &p_16;
                if ((*g_90))
                    continue;
            }
            if ((p_13 | g_391))
            {
                unsigned char *l_437 = &l_112;
                int l_451 = 1L;
                unsigned long long *l_476 = &l_434;
                (*l_56) &= ((l_422 != (**l_118)) & (safe_sub_func_int32_t_s_s(((*g_90) & p_13), (safe_add_func_int8_t_s_s((***l_387), (safe_rshift_func_int16_t_s_u((6UL == (((*l_109) = l_434) < (safe_lshift_func_uint8_t_u_s(((*l_437) = p_13), 6)))), 15)))))));
                if ((0x3AL | (p_15 <= (g_71 = (p_15 < ((~0x1E0D66F16D85A1D1LL) & 0L))))))
                {
                    unsigned short l_457 = 65535UL;
                    for (g_55 = 0; (g_55 < (-6)); g_55 = safe_sub_func_uint64_t_u_u(g_55, 4))
                    {
                        long long * const l_458 = &g_55;
                        (*l_118) = func_39(((*l_414) = g_391), l_451, l_418, (*g_342));
                    }
                    for (g_111 = 0; (g_111 > 28); g_111++)
                    {
                        (**g_89) &= (l_451 , l_434);
                        if ((*p_14))
                            break;
                        (*l_56) = (*p_14);
                    }
                }
                else
                {
                    int *****l_463 = &l_461;
                    int *l_466 = &g_85;
                    int *l_467 = (void*)0;
                    int *l_468 = (void*)0;
                    (*l_56) |= ((***l_462) = (*****l_463));
                }
                if (((~g_354) || (safe_add_func_uint32_t_u_u(((l_451 , (void*)0) != &g_132), p_15))))
                {
                    unsigned l_478 = 0x2FC88EDFL;
                    long long **l_480 = &l_54;
                    long long ***l_479 = &l_480;
                    if (func_46(g_225, g_382, l_476))
                    {
                        g_20 = (+l_478);
                        return p_13;
                    }
                    else
                    {
                        char l_481 = 0xD9L;
                        (*l_56) ^= (-1L);
                        (*l_109) = (*p_14);
                        (*l_56) = 0x87DEB214L;
                        (*l_109) &= (((*l_476) = ((void*)0 == l_479)) == (g_163 >= ((((*l_424) = p_15) != (((g_108 == (-1L)) >= g_311) ^ g_370)) || 0xB9L)));
                    }
                    (**l_462) = (void*)0;
                }
                else
                {
                    int *l_482 = (void*)0;
                    int *l_483 = &l_470;
                    long long l_494 = (-5L);
                    (*l_109) = (((((*l_476) = (((*p_16) != l_451) | 0xECC8L)) , l_434) , (((*l_483) = g_85) , (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((func_46((((***l_462) == 1L) , 4UL), p_15, l_476) <= g_334) ^ l_494), (-1L))), 0xE7L)))) <= p_15);
                    (*l_109) &= (g_108 != 0xC66CL);
                    (*l_56) ^= (g_275 >= (((*l_107) = g_334) >= ((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_int16_t_s_s((((p_15 >= 0x26B870DFCCB5B1CFLL) , &l_477) == &l_477), ((void*)0 != &p_15))) > (*l_109)) || g_85) | 0UL), 3)) > g_55) > (*g_342)), l_477)) , p_13)));
                }
            }
            else
            {
                unsigned short l_505 = 0xF3BBL;
                (**g_89) = l_505;
                return l_505;
            }
            p_15 ^= l_418;
        }
        else
        {
            char *l_527 = &g_334;
            int l_528 = 7L;
            unsigned long long *l_529 = (void*)0;
            (***l_387) = (safe_sub_func_uint64_t_u_u(((*l_56) = ((((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((-6L), (g_516 || g_354))) && ((*l_413) = g_163)), (((p_13 , ((safe_rshift_func_uint8_t_u_u((g_87 || ((!((((((*l_412) = (safe_mod_func_int16_t_s_s((((*l_414) |= (safe_lshift_func_uint8_t_u_s((***l_387), ((safe_sub_func_int8_t_s_s(((*l_527) = ((safe_lshift_func_int16_t_s_s(p_15, 10)) ^ 18446744073709551606UL)), g_110)) || 1L)))) < 4L), (***l_387)))) || (-6L)) >= l_528) , 0x4FB3AE41L) & l_418)) | 0xE4L)), p_13)) , 0xFE0EL)) , (void*)0) == (void*)0))), g_87)) <= l_528) , (void*)0) == (void*)0)), (*g_342)));
            (*l_56) ^= ((p_13 < ((((func_32((l_418 < (1L <= (safe_add_func_int16_t_s_s(0L, (l_418 & l_418))))), &l_418, g_108, l_528, g_108) , 0UL) < p_13) == 0L) > (-1L))) | (-8L));
            (*l_118) = ((**l_387) = &p_15);
        }
    }
    else
    {
        unsigned char *l_537 = &l_112;
        unsigned char **l_536 = &l_537;
        unsigned char ***l_538 = &l_536;
        unsigned char ***l_541 = (void*)0;
        unsigned char ***l_542 = &g_539;
        unsigned char **l_544 = &l_537;
        unsigned char ***l_543 = &l_544;
        unsigned *l_551 = &g_225;
        unsigned *l_552 = &g_370;
        long long * const l_553 = &g_469;
        unsigned l_554 = 0UL;
        long long *l_585 = &g_4;
        unsigned char l_589 = 255UL;
        if ((p_13 && (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(l_554, 1)), p_15))))
        {
            char l_555 = 0x55L;
            long long *l_558 = &l_411;
            int l_565 = 0xE80F89DCL;
            int **l_566 = &l_56;
            unsigned short *l_569 = &g_275;
            l_565 &= (l_555 ^ (l_555 , ((((safe_rshift_func_int16_t_s_u((**l_118), 3)) , ((l_558 == (void*)0) ^ ((safe_mod_func_int8_t_s_s(p_15, (*l_56))) | (*g_342)))) & 8L) <= (-1L))));
            (*l_109) = ((((void*)0 != l_566) , (l_554 == (~((safe_sub_func_uint8_t_u_u((*g_540), (((*l_569) = p_15) != (safe_add_func_int32_t_s_s((**l_566), ((safe_rshift_func_int16_t_s_s(((((**l_566) > ((*p_16) ^ l_554)) , g_574) != g_574), l_554)) != (**g_539))))))) == 1UL)))) > 0UL);
            (*l_109) = ((void*)0 != l_575);
            for (l_555 = 0; (l_555 <= 6); ++l_555)
            {
                unsigned short l_584 = 0x7593L;
                long long * const l_588 = &g_4;
                for (l_399 = 0; (l_399 > 55); l_399 = safe_add_func_int16_t_s_s(l_399, 8))
                {
                    long long **l_586 = &l_38;
                    (*l_118) = func_39((((((((safe_sub_func_int16_t_s_s((((safe_add_func_uint8_t_u_u((((**l_566) ^= ((-3L) != ((*g_342) != l_589))) == 0x6D9F8009D34A1A1ELL), 0x20L)) <= p_13) <= p_13), g_85)) > 0x9A0CL) , p_15) <= p_15) >= 0x2EL) , l_590) != (void*)0), l_584, p_13, (*g_342));
                }
            }
        }
        else
        {
            unsigned char **l_601 = &l_537;
            int l_602 = 0x6A34A7A8L;
            const unsigned char ***l_603 = (void*)0;
            const unsigned char *l_606 = &g_607;
            const unsigned char **l_605 = &l_606;
            const unsigned char ***l_604 = &l_605;
            if ((((**g_539) , p_15) ^ 8UL))
            {
                for (g_110 = 0; (g_110 == 17); g_110 = safe_add_func_uint64_t_u_u(g_110, 4))
                {
                    unsigned short *l_618 = (void*)0;
                    unsigned short *l_619 = &g_275;
                    int l_620 = 1L;
                    (*p_16) = ((l_554 & ((*l_619) = p_15)) | l_602);
                    (*l_56) = (l_620 ^ (safe_add_func_uint32_t_u_u(g_469, (*p_14))));
                    if ((*p_16))
                        continue;
                    (*l_118) = ((*g_89) = &p_15);
                }
            }
            else
            {
                const unsigned short l_623 = 0x549FL;
                short *l_630 = &g_391;
                if (l_623)
                {
                    for (l_589 = 2; (l_589 > 8); l_589 = safe_add_func_int64_t_s_s(l_589, 5))
                    {
                        (**l_387) = &p_15;
                        (***l_461) = &p_15;
                        (*l_56) = (*p_16);
                    }
                }
                else
                {
                    if ((*p_14))
                    {
                        (***l_461) = &l_602;
                        (***l_462) &= 0x264A91AFL;
                    }
                    else
                    {
                        (*p_16) = (*g_19);
                    }
                    return l_602;
                }
                if ((*p_16))
                {
                    unsigned char ****l_631 = &l_543;
                    long long l_632 = 0x85415A6AFE52A5C9LL;
                    (*l_109) = (((*p_16) != (safe_sub_func_int8_t_s_s((!(safe_sub_func_uint8_t_u_u((((l_630 == (void*)0) ^ p_13) == (((((**l_590) == (void*)0) , ((*l_631) = &l_601)) != &g_539) & l_632)), 0x57L))), 9UL))) != 0L);
                    if ((*g_19))
                    {
                        (*l_56) ^= ((**g_539) == (safe_add_func_int32_t_s_s((*g_19), (p_15 > l_602))));
                    }
                    else
                    {
                        (*l_109) = (g_635 != &g_636);
                    }
                }
                else
                {
                    (*l_118) = func_17(p_15);
                }
                for (g_225 = 16; (g_225 != 16); g_225++)
                {
                    (*l_118) = func_17((*g_540));
                    if (l_602)
                        continue;
                    (**l_462) = func_39(p_15, (*p_16), l_639, ((p_13 & l_640) , (**l_118)));
                }
            }
        }
    }
    return g_111;
}







static const int * func_17(unsigned char p_18)
{
    return g_19;
}







static unsigned short func_32(long long p_33, const int * p_34, unsigned p_35, int p_36, char p_37)
{
    unsigned long long **l_124 = (void*)0;
    long long l_127 = (-1L);
    int *l_128 = &g_110;
    unsigned long long *l_129 = &g_71;
    char l_130 = 1L;
    int l_131 = (-1L);
    unsigned char *l_141 = &g_87;
    const int * const *l_143 = (void*)0;
    const int * const **l_142 = &l_143;
    char l_206 = 0x76L;
    int l_230 = (-1L);
    unsigned short *l_274 = &g_275;
    long long **l_302 = (void*)0;
    unsigned l_340 = 4294967295UL;
    long long * const l_353 = &g_55;
    unsigned l_355 = 0x385F54DCL;
    unsigned short l_368 = 0x53D4L;
    unsigned long long * const l_381 = &g_382;
    unsigned long long * const *l_380 = &l_381;
    unsigned long long * const **l_379 = &l_380;
    unsigned l_383 = 0UL;
    l_131 = (((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((((void*)0 != l_124) , ((*l_129) ^= ((*g_19) | ((*l_128) = ((safe_sub_func_int64_t_s_s((-3L), l_127)) > g_55))))) && (((*l_128) ^= (l_130 |= g_108)) || ((*g_19) ^ ((p_37 && p_35) < 8L)))) < (-1L)), 4)), p_35)) && g_108) <= p_33);
    g_132 = &l_129;
    if (((((safe_rshift_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s(((*l_128) != (((l_131 = (safe_add_func_uint64_t_u_u(((p_33 ^ ((void*)0 == &l_128)) , (p_37 < ((safe_lshift_func_int8_t_s_u(p_37, g_85)) ^ (*l_128)))), (*l_128)))) > g_71) != 0x6BL)), 0x4BC4L)) != (*l_128)) , l_141) == &g_87), 6)) , (*l_128)) , l_142) != &l_143))
    {
        unsigned short l_144 = 0x4C6CL;
        const int *l_181 = &g_20;
        int l_210 = 0x6018A576L;
        long long l_249 = 0x139D684D458F6287LL;
        unsigned l_250 = 1UL;
        unsigned char *l_260 = &g_163;
        int ***l_282 = &g_89;
        int ****l_281 = &l_282;
        unsigned char l_299 = 0x29L;
        short l_349 = 2L;
        const int **l_372 = &g_19;
        int *l_373 = &g_110;
        (*l_128) |= l_144;
        if ((*p_34))
        {
            int l_180 = 0L;
            int **l_199 = &g_90;
            int *l_212 = &l_131;
            unsigned l_229 = 0xB82CCCD2L;
            long long * const l_240 = (void*)0;
            if (((safe_sub_func_int32_t_s_s(0xE716A1B7L, ((safe_rshift_func_int16_t_s_u(g_85, 8)) || g_110))) != (safe_sub_func_int8_t_s_s((l_129 == (void*)0), ((void*)0 != &g_19)))))
            {
                int ***l_156 = &g_89;
                long long l_157 = 0x2EE972AE737D7061LL;
                int *l_186 = &g_110;
                for (g_111 = 0; (g_111 == 13); g_111 = safe_add_func_uint16_t_u_u(g_111, 8))
                {
                    int l_170 = 9L;
                    for (g_4 = 12; (g_4 < 2); --g_4)
                    {
                        return l_144;
                    }
                    (*l_128) = (*p_34);
                    if (((((safe_unary_minus_func_int8_t_s(g_108)) < ((void*)0 != l_156)) > l_157) || p_33))
                    {
                        long long l_162 = 0x874A55526D78DB7ELL;
                        int * const **l_165 = (void*)0;
                        int * const ***l_164 = &l_165;
                        const int ****l_167 = &g_166;
                        short *l_179 = &g_108;
                        if ((*p_34))
                            break;
                        l_181 = func_17((safe_rshift_func_int8_t_s_u((g_163 |= l_162), ((((*l_164) = (void*)0) == ((*l_167) = g_166)) , ((*g_19) , ((safe_add_func_int32_t_s_s((l_170 <= (l_180 &= (p_33 , (safe_rshift_func_int16_t_s_u(g_85, (((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s(((*l_179) &= p_36), g_87)) > (**g_132)), 0)) , p_35), p_35)) || p_33) > 6L)))))), g_55)) != p_36))))));
                        (*l_128) |= 0x7911D495L;
                        (*l_128) |= (*l_181);
                    }
                    else
                    {
                        return (*l_128);
                    }
                }
                if ((*p_34))
                {
                    (**l_156) = &p_36;
                    (*g_90) ^= (safe_lshift_func_uint16_t_u_s(p_33, 6));
                    for (l_157 = (-13); (l_157 > 27); l_157++)
                    {
                        long long l_189 = 0L;
                        char *l_190 = &l_130;
                        (**l_156) = l_186;
                        (*l_186) = func_46(((p_36 | (safe_sub_func_uint8_t_u_u(g_163, l_189))) != ((((*l_190) = l_189) || (safe_rshift_func_int8_t_s_u(((void*)0 == &p_34), 6))) , p_36)), p_35, &g_55);
                    }
                }
                else
                {
                    for (l_130 = 0; (l_130 != 2); l_130 = safe_add_func_uint64_t_u_u(l_130, 1))
                    {
                        int ***l_200 = &l_199;
                        short *l_201 = &g_108;
                        (*g_89) = &p_36;
                        (*l_128) &= (((safe_mod_func_uint32_t_u_u(g_20, ((safe_add_func_int16_t_s_s(g_163, (((((*l_156) = &g_90) != ((*l_200) = l_199)) && (((*l_201) ^= 0xD700L) < ((void*)0 != &g_87))) != (**g_132)))) , (**g_89)))) , (void*)0) == (void*)0);
                    }
                    (*l_128) = (*p_34);
                    (*l_128) = ((1UL & 0x5EDDL) != g_111);
                    p_34 = ((*l_199) = &p_36);
                }
            }
            else
            {
                const long long *l_208 = &g_55;
                int l_211 = 0x259D0595L;
                unsigned *l_239 = &g_111;
                (*g_89) = &p_36;
                for (g_55 = 0; (g_55 <= (-18)); --g_55)
                {
                    long long *l_207 = &g_4;
                    int l_209 = 1L;
                    p_34 = ((*l_199) = &p_36);
                    l_210 = (g_55 | p_36);
                    if (l_211)
                    {
                        (*g_89) = l_212;
                        (**g_89) = (*l_181);
                        return p_33;
                    }
                    else
                    {
                        long long l_213 = (-5L);
                        unsigned *l_224 = &g_225;
                        const int **l_231 = &l_181;
                        (*l_231) = func_17((l_213 , ((safe_add_func_int64_t_s_s(((p_37 = (((((((**g_89) | p_33) | ((((((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((0x94F7B99CL != ((*l_224) = (safe_lshift_func_uint8_t_u_s(p_35, 0)))), (safe_unary_minus_func_int8_t_s(p_35)))), p_33)) < 65535UL) >= ((((safe_mod_func_int16_t_s_s((((p_35 < 0x7A3A9A028DDFECA6LL) >= p_37) || 0xFB1311ADL), 65526UL)) ^ l_229) || (*l_181)) && (**g_132))) | l_213) , p_37) , 1UL)) <= 0x00L) & (**g_132)) <= l_213) >= g_108)) , l_230), (*l_212))) ^ g_71)));
                        (*l_231) = func_17(g_110);
                        (*g_90) = ((*p_34) <= ((*l_181) , ((+((&g_87 != &g_163) && 0xECE7D4CFF507D8C8LL)) <= p_33)));
                    }
                    return p_35;
                }
                p_34 = func_39((((void*)0 == p_34) , (safe_rshift_func_uint8_t_u_s(p_35, 3))), ((*l_212) &= (((((((safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s(p_35, g_111)))) != (*p_34)) , 0xC3L) <= g_108) < g_225) == 0UL) ^ p_35)), p_36, (**l_199));
            }
        }
        else
        {
            long long l_248 = 0L;
            int ***l_254 = &g_89;
            int ****l_253 = &l_254;
            long long *l_255 = &l_249;
            long long *l_256 = (void*)0;
            long long *l_257 = &l_248;
            unsigned l_290 = 1UL;
            int l_328 = 0xE0BEF41AL;
            char *l_333 = &l_130;
            unsigned long long ***l_335 = &l_124;
            unsigned long long **l_337 = &l_129;
            unsigned long long ***l_336 = &l_337;
            (*g_89) = func_39(p_35, (safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((l_250 > (*p_34)), (*g_19))), 0xCB20AC4CAD26139DLL)), l_248, p_35);
            if ((((g_4 |= (~((*l_257) |= (safe_sub_func_uint64_t_u_u(((void*)0 != l_253), ((*l_255) = func_46(p_33, (*l_128), &l_248))))))) || 0xF7F2E4BE7F61CDA1LL) < (safe_lshift_func_uint8_t_u_s(((p_36 , l_260) != (void*)0), p_36))))
            {
                unsigned long long l_270 = 1UL;
                unsigned long long l_271 = 0x83A3E19EA11A8359LL;
                int *l_280 = (void*)0;
                long long ***l_303 = &l_302;
                int *l_327 = &g_20;
                (*l_128) = (*p_34);
                if ((0UL && g_55))
                {
                    unsigned l_267 = 0x87EBE363L;
                    int *****l_283 = &l_253;
                    (**l_254) = func_39(((g_20 > (safe_sub_func_uint64_t_u_u(((*l_129) = 3UL), ((*l_255) = ((((g_108 == p_37) != ((*l_128) = (g_55 == (safe_rshift_func_int8_t_s_u((*l_181), 6))))) <= (safe_lshift_func_int8_t_s_u(((l_267 >= (1L != ((!(safe_rshift_func_uint8_t_u_u((p_37 , p_33), 0))) != (-10L)))) & l_270), 2))) , 0x3B67BDB8DD240B2ELL))))) < (*l_181)), l_271, g_111, p_36);
                    if ((~((*g_90) = (**g_89))))
                    {
                        char *l_276 = &l_206;
                        const unsigned *l_277 = &g_225;
                        unsigned *l_279 = (void*)0;
                        unsigned **l_278 = &l_279;
                        (*g_89) = func_39(g_110, (g_87 ^ (65527UL == (-10L))), p_37, l_271);
                        (*g_89) = func_39(p_37, ((*g_19) ^ (*p_34)), g_85, p_35);
                        (*l_128) &= (safe_add_func_int16_t_s_s(func_46((((0x3610L < 1UL) >= (((*l_276) = (l_274 == &l_144)) != ((l_277 == ((*l_278) = (void*)0)) < ((***l_254) |= 7L)))) > 0x50L), ((g_111 , 0xE8L) < g_163), &g_55), p_35));
                        (**l_254) = l_280;
                    }
                    else
                    {
                        (****l_253) = (*p_34);
                    }
                    (*l_128) = (&g_166 == ((*l_283) = l_281));
                }
                else
                {
                    int **l_301 = &g_90;
                    p_36 ^= (((*p_34) <= (safe_mod_func_uint32_t_u_u((g_4 < 0L), (((((safe_add_func_int16_t_s_s(g_85, p_35)) != (safe_sub_func_int16_t_s_s(((p_35 || g_85) < ((p_33 != (g_111 != g_20)) , p_35)), 0x73FAL))) , l_290) , 0x700FL) , 0x376D0B68L)))) > g_108);
                    for (g_4 = 14; (g_4 != (-19)); g_4 = safe_sub_func_uint8_t_u_u(g_4, 7))
                    {
                        const unsigned long long l_300 = 18446744073709551611UL;
                        p_36 |= ((*l_128) = (*p_34));
                        (*l_128) = (p_35 > (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((void*)0 != &l_142), (*p_34))) , 0xC6L), 2)), 4294967292UL)));
                        if ((*g_19))
                            continue;
                    }
                    l_301 = (void*)0;
                    l_128 = ((**l_282) = l_280);
                }
                (*l_303) = l_302;
                for (g_4 = (-24); (g_4 >= 29); g_4 = safe_add_func_int16_t_s_s(g_4, 2))
                {
                    int *l_308 = &l_210;
                    const unsigned long long *l_310 = &g_311;
                    const unsigned long long **l_309 = &l_310;
                    char *l_326 = &l_130;
                    (*l_308) = (safe_sub_func_int64_t_s_s(((*l_308) & (*p_34)), 0xC6697B58ED81734CLL));
                    l_327 = ((**l_254) = func_39((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((((((safe_lshift_func_int8_t_s_s(((((g_85 > ((*l_326) = (p_37 > (safe_lshift_func_uint16_t_u_s(g_4, ((void*)0 == (**l_282))))))) , p_37) , 0x6513L) <= p_35), p_33)) < g_4) , g_110) , 1L) & (**g_132)), p_35)), 6)), (*p_34), g_87, g_87));
                }
            }
            else
            {
                l_328 = (*p_34);
            }
            p_36 ^= (*g_19);
            if ((((safe_sub_func_uint16_t_u_u(((*l_274) = ((safe_add_func_int8_t_s_s(((*l_333) = ((g_163 |= (g_225 , 0x43L)) && 0xACL)), 6UL)) , ((g_334 = p_33) == (((*l_335) = g_132) != ((*l_336) = g_132))))), (p_35 == (((safe_sub_func_int32_t_s_s((((*l_255) = p_37) != 0x445DB1F9F6BFAA2CLL), 0x4A2E45BCL)) , 0x81BBL) & (-1L))))) > 4UL) ^ l_340))
            {
                unsigned char *l_343 = &g_163;
                unsigned char **l_344 = &l_260;
                long long * const l_345 = (void*)0;
                p_36 = (safe_unary_minus_func_uint16_t_u(((g_342 = &g_4) != ((p_37 , (&g_4 == (((((*l_344) = l_343) != &g_163) , (p_36 , 0UL)) , &p_33))) , &g_55))));
            }
            else
            {
                int l_350 = 0x916C86FDL;
                int **l_356 = (void*)0;
                int **l_357 = &l_128;
                int *l_369 = &g_110;
                const int **l_371 = (void*)0;
                (*l_357) = ((**l_254) = func_39(p_33, l_355, p_36, p_35));
                for (l_206 = 12; (l_206 <= 26); ++l_206)
                {
                    (*g_90) = 0x7D43AD27L;
                }
                p_34 = func_17(func_46(g_163, (safe_rshift_func_uint8_t_u_u((((g_354 ^ 0xBC4FL) , (((*l_333) = (p_33 <= ((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((****l_281), (safe_mod_func_uint8_t_u_u(((*p_34) , (((*l_369) = l_368) | (*p_34))), (4UL || 0x15A36F3D0493B650LL))))), (***l_282))) > (****l_253)))) >= g_370)) , 5UL), 3)), &g_4));
            }
        }
        (*l_372) = func_17(g_334);
        (*l_373) |= (*p_34);
    }
    else
    {
        int *l_376 = &g_110;
        (*l_128) |= (safe_rshift_func_uint8_t_u_u(0x99L, 6));
        l_376 = ((*g_89) = (void*)0);
        (*l_128) |= (safe_add_func_int64_t_s_s(p_33, p_35));
    }
    l_383 = ((&l_368 != (void*)0) | (((*l_379) = g_132) != (void*)0));
    return p_36;
}







static int * func_39(unsigned short p_40, int p_41, char p_42, const long long p_43)
{
    char l_113 = 0x82L;
    int l_114 = 0xB48400ECL;
    const int **l_115 = &g_19;
    int *l_116 = &l_114;
    (*l_115) = (l_113 , func_17((l_114 &= p_42)));
    return &g_20;
}







static unsigned func_46(unsigned char p_47, unsigned p_48, long long * const p_49)
{
    unsigned short l_88 = 0xFE74L;
    int l_97 = 0x73D5EAA9L;
    long long *l_103 = (void*)0;
    int l_106 = (-7L);
    for (p_47 = 0; (p_47 > 38); p_47 = safe_add_func_int32_t_s_s(p_47, 2))
    {
        int l_69 = 6L;
        unsigned long long *l_70 = &g_71;
        int *l_72 = (void*)0;
        int *l_73 = &g_20;
        (*l_73) &= (l_69 | ((*l_70) = p_48));
        for (l_69 = 0; (l_69 > 15); l_69 = safe_add_func_int64_t_s_s(l_69, 9))
        {
            unsigned char l_82 = 248UL;
            unsigned char *l_86 = &g_87;
            const int *** const l_92 = (void*)0;
            if ((((safe_add_func_int16_t_s_s(0xF7CEL, (safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(0L, (l_82 |= 0x52D8L))) > g_55), ((((safe_rshift_func_int16_t_s_u(((+((*l_73) == g_85)) , ((((*l_86) = (*l_73)) , (g_55 || p_48)) > 0L)), g_71)) , (*l_73)) , (void*)0) == l_70))))) || l_88) , (*g_19)))
            {
                if ((*g_19))
                {
                    if (p_47)
                        break;
                }
                else
                {
                    int ***l_91 = &g_89;
                    int * const *l_94 = &l_72;
                    int * const **l_93 = &l_94;
                    l_97 = ((!((&g_19 != ((*l_91) = g_89)) >= (l_92 != l_93))) , (((-1L) | ((g_85 == (safe_lshift_func_uint8_t_u_u(((*l_86) ^= 0UL), 7))) || (-6L))) , (g_85 | (**g_89))));
                }
            }
            else
            {
                int *l_98 = &l_97;
                int **l_99 = &l_72;
                unsigned long long **l_104 = &l_70;
                unsigned short *l_105 = &l_88;
                (**g_89) = (*l_73);
                (*l_99) = ((*g_89) = l_98);
                (**l_99) = (*g_19);
                l_106 |= (g_87 != ((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int8_t_s_u((p_49 != ((*l_104) = func_51(l_103, (*l_99)))), 5)) < 0x31368DE6L))) , (((*l_104) = l_103) != (((p_47 != ((*l_105) |= p_48)) != g_55) , (void*)0))));
            }
        }
        (*g_90) = (*g_19);
    }
    return g_87;
}







static long long * func_51(long long * p_52, int * p_53)
{
    int *l_57 = &g_20;
    int **l_58 = (void*)0;
    int *l_60 = &g_20;
    int **l_59 = &l_60;
    int *l_62 = &g_20;
    int **l_61 = &l_62;
    const int **l_65 = &g_19;
    long long *l_66 = &g_55;
    (*l_61) = ((*l_59) = (l_57 = l_57));
    (*l_65) = func_17((safe_add_func_int32_t_s_s((*p_53), ((void*)0 == &g_19))));
    return l_66;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_903, "g_903", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
