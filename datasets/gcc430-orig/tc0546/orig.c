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



static int g_2 = 6L;
static unsigned char g_34 = 0x27L;
static int g_38 = 0x860BC23CL;
static unsigned short g_65 = 2UL;
static short g_66 = 0L;
static char g_82 = 0L;
static unsigned long long g_100 = 6UL;
static int g_104 = 0x1B98B5DBL;
static long long g_110 = 0x43E1243B3BE7B8BBLL;
static char g_200 = (-1L);
static char *g_199 = &g_200;
static char g_203 = (-4L);
static long long g_207 = 0L;
static unsigned char g_231 = 255UL;
static unsigned short *g_249 = (void*)0;
static unsigned short **g_248 = &g_249;
static unsigned short ***g_247 = &g_248;
static unsigned long long g_264 = 0xA9D545A2CE0119A8LL;
static int *g_270 = &g_2;
static int **g_269 = &g_270;
static long long g_289 = 0L;
static unsigned char *g_295 = &g_34;
static unsigned char **g_294 = &g_295;
static int *g_296 = &g_38;
static unsigned g_365 = 3UL;
static long long *g_403 = &g_207;
static unsigned short g_411 = 1UL;
static short * const *g_443 = (void*)0;
static short *g_448 = (void*)0;
static unsigned g_464 = 0x6E86E7FBL;
static unsigned *g_463 = &g_464;
static int g_490 = 0x3CFECB3FL;
static unsigned long long g_590 = 1UL;
static char g_598 = 0xA8L;
static long long g_676 = (-1L);
static unsigned *g_721 = &g_464;
static unsigned short g_724 = 65528UL;
static unsigned short * const * const g_752 = (void*)0;
static unsigned short * const * const *g_751 = &g_752;
static unsigned long long g_764 = 18446744073709551615UL;
static unsigned char g_775 = 0xFCL;
static char **g_801 = &g_199;
static char ** const *g_800 = &g_801;
static unsigned *g_817 = &g_365;
static unsigned **g_816 = &g_817;
static short g_834 = 0x1648L;
static const unsigned char g_871 = 0x19L;
static unsigned short g_934 = 1UL;
static unsigned * const *g_1183 = &g_817;
static unsigned * const **g_1182 = &g_1183;
static const int g_1227 = (-1L);
static const int *g_1310 = &g_2;
static const unsigned char g_1327 = 255UL;
static unsigned short ***g_1371 = &g_248;
static unsigned **g_1383 = (void*)0;
static unsigned ***g_1382 = &g_1383;
static unsigned char ***g_1399 = &g_294;
static int *g_1402 = &g_2;
static const int g_1560 = (-5L);
static unsigned short g_1573 = 0xD554L;



static int func_1(void);
static char func_5(long long p_6, char p_7, unsigned p_8, unsigned p_9);
static long long func_10(unsigned short p_11, unsigned char p_12);
static unsigned char func_13(const long long p_14, int p_15, short p_16, unsigned char p_17, unsigned long long p_18);
static short func_22(const char p_23);
static long long func_39(char p_40, unsigned short p_41);
static unsigned char func_47(const unsigned short p_48, unsigned p_49, unsigned long long p_50, unsigned short p_51, int * p_52);
static int func_57(unsigned long long p_58);
static int * func_67(short p_68, unsigned p_69, unsigned short p_70, short p_71, int p_72);
static char func_83(int p_84, unsigned char p_85);
static int func_1(void)
{
    short l_911 = 0xACD1L;
    long long l_912 = 0x278D059880A4EF97LL;
    long long l_913 = 0x8F8846F0A65FE6E4LL;
    unsigned short l_1143 = 0UL;
    unsigned char l_1197 = 0UL;
    int l_1211 = (-1L);
    long long l_1231 = 1L;
    unsigned **l_1232 = &g_817;
    unsigned l_1258 = 1UL;
    unsigned l_1260 = 0x919DBBD5L;
    unsigned long long l_1293 = 0UL;
    char *l_1294 = &g_203;
    unsigned l_1304 = 0x24FD34AAL;
    const int *l_1315 = &g_1227;
    unsigned char l_1358 = 7UL;
    int l_1359 = 0x9B0A2DFDL;
    char l_1369 = 2L;
    unsigned short l_1412 = 65535UL;
    int l_1474 = (-1L);
    int l_1475 = (-6L);
    long long l_1496 = 0x61739D101C8E1F36LL;
    unsigned l_1554 = 0x7C888FE3L;
    unsigned **l_1569 = &g_721;
    unsigned char l_1626 = 253UL;
    char l_1627 = (-1L);
    unsigned char * const *l_1646 = &g_295;
    char l_1650 = 0xF7L;
    char *l_1654 = &g_82;
    char *l_1655 = &l_1650;
    char *l_1656 = &g_203;
    unsigned long long *l_1667 = (void*)0;
    unsigned long long *l_1668 = &g_264;
    unsigned long long *l_1669 = &g_590;
    for (g_2 = (-30); (g_2 > 2); g_2 = safe_add_func_int16_t_s_s(g_2, 7))
    {
        const short l_19 = 0xD010L;
        unsigned char *l_32 = (void*)0;
        unsigned char *l_33 = &g_34;
        int * const l_1168 = &g_2;
        int l_1185 = 0xB0B74881L;
        unsigned **l_1235 = &g_817;
        short **l_1236 = &g_448;
        unsigned char ***l_1254 = &g_294;
        unsigned char **** const l_1253 = &l_1254;
        unsigned **l_1272 = &g_463;
        unsigned ***l_1271 = &l_1272;
    }
    for (g_598 = 0; (g_598 != (-10)); g_598--)
    {
        long long l_1286 = (-5L);
        char ***l_1308 = &g_801;
        int *l_1316 = &g_2;
        unsigned char l_1318 = 0x89L;
        unsigned l_1344 = 0xCC7EF6CFL;
        unsigned long long l_1360 = 18446744073709551609UL;
        unsigned l_1401 = 0xBE83D55AL;
        unsigned long long l_1439 = 0x59CC23955051ECC3LL;
        int l_1478 = 0x56740541L;
        unsigned short l_1494 = 0xB95BL;
        unsigned l_1518 = 0x3AC73DA6L;
        long long l_1556 = (-1L);
        for (g_231 = 10; (g_231 == 25); ++g_231)
        {
            int *l_1277 = (void*)0;
            unsigned short *l_1287 = (void*)0;
            unsigned short *l_1288 = &g_411;
            unsigned l_1301 = 0x27F1D5F3L;
            unsigned ** const *l_1384 = (void*)0;
            (*g_296) = 0xFBE65C97L;
            (*g_269) = l_1277;
            if ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((*g_199), (((((-7L) == (safe_div_func_uint8_t_u_u(l_1197, ((((*g_295) & (-3L)) > l_1260) , (safe_rshift_func_uint16_t_u_u(((*l_1288) = l_1286), 7)))))) != (safe_lshift_func_uint8_t_u_u((*g_295), 1))) , ((*g_295) = (((g_82 ^= (safe_sub_func_int32_t_s_s(l_1286, l_1197))) == l_1293) <= l_1286))) | l_1211))), 0UL)))
            {
                long long l_1295 = 0L;
                unsigned char *l_1302 = (void*)0;
                unsigned char *l_1303 = &l_1197;
                const int l_1319 = 0L;
                int * const l_1341 = &g_38;
                if (func_5((l_1294 != ((((**g_294) = l_1295) < func_83(l_1211, (safe_mod_func_uint8_t_u_u(0UL, (safe_add_func_int32_t_s_s(0x3CE9287CL, ((*g_296) = (((l_1304 = ((safe_unary_minus_func_int16_t_s((l_1295 || l_1260))) , func_83(((l_1295 && ((((*l_1303) = (!(g_775 = (l_1301 || l_1295)))) | 0xF1L) , l_1286)) , 0x42368109L), l_1295))) , 0xC5B1L) > 65535UL)))))))) , (void*)0)), l_1293, l_1286, l_1295))
                {
                    unsigned long long l_1307 = 1UL;
                    char ****l_1309 = &l_1308;
                    (*g_296) |= (((*l_1309) = ((safe_sub_func_uint64_t_u_u(9UL, (l_1307 == l_1197))) , l_1308)) != ((**g_1183) , &g_801));
                }
                else
                {
                    unsigned l_1320 = 4294967290UL;
                    short *l_1338 = &g_66;
                    if (l_1286)
                    {
                        g_1310 = &g_1227;
                    }
                    else
                    {
                        unsigned long long l_1317 = 0x50732EDAEFC50236LL;
                        unsigned long long *l_1321 = (void*)0;
                        unsigned long long *l_1322 = (void*)0;
                        const char ***l_1329 = (void*)0;
                        const char ****l_1328 = &l_1329;
                        (*g_296) |= ((((safe_rshift_func_uint16_t_u_u(0x11B8L, 11)) ^ (g_100 = ((l_1286 , ((*g_817) , func_47(l_1295, (safe_mod_func_uint8_t_u_u(((*l_1303) ^= ((**g_294) = ((l_1315 == l_1316) == (((((l_1317 != (0x44637EA1L & l_1318)) > l_1319) , (*g_199)) >= l_1317) , 0xF7L)))), (*g_199))), g_598, l_1317, l_1316))) , l_1320))) >= (*g_721)) || (-5L));
                        (*l_1316) = (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((!g_1327), 1)), (+((void*)0 == l_1328))));
                    }
                    (*l_1316) = ((safe_add_func_uint64_t_u_u(l_1320, ((safe_add_func_int32_t_s_s(func_13(l_1295, ((-6L) | ((safe_rshift_func_int8_t_s_s(((l_1295 & (*l_1316)) <= 0x0FEFL), ((g_203 | l_1320) >= (safe_lshift_func_int16_t_s_s(((*l_1338) = (&l_1211 != l_1316)), (*l_1316)))))) <= l_1319)), (*l_1315), (**g_294), g_724), (*l_1315))) , 0xD2236C9D8F1DF37FLL))) , 1L);
                    return (*l_1316);
                }
                for (g_65 = 0; (g_65 == 37); g_65 = safe_add_func_uint32_t_u_u(g_65, 1))
                {
                    (*g_269) = l_1341;
                }
            }
            else
            {
                (*g_269) = (*g_269);
            }
            for (g_100 = 23; (g_100 > 3); --g_100)
            {
                unsigned char l_1347 = 0x4FL;
                int *l_1348 = (void*)0;
                int *l_1349 = &g_490;
                unsigned char l_1370 = 3UL;
                unsigned ***l_1381 = (void*)0;
                short **l_1388 = &g_448;
                (*l_1316) &= func_57(l_1344);
            }
        }
        for (l_1286 = (-11); (l_1286 > 6); l_1286++)
        {
            unsigned l_1413 = 0x2F27C260L;
            long long *l_1440 = &g_110;
            int l_1453 = 0L;
            char l_1476 = (-1L);
            char l_1477 = 0xF3L;
            unsigned l_1513 = 0x94EAC19EL;
            int l_1521 = (-1L);
            char l_1625 = 0xBBL;
        }
    }
    (*g_1402) = (*g_1310);
    l_1474 &= ((safe_add_func_int8_t_s_s((**g_801), 0xB9L)) , ((*l_1315) | (safe_sub_func_int16_t_s_s(((*g_403) <= (safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((+((((((*l_1315) , ((-1L) || ((*l_1315) , 0xF7CF41AAL))) >= ((((*l_1669) ^= ((*l_1668) = (*l_1315))) , (*l_1315)) < (*l_1315))) >= 5L) , (*l_1315)) <= (*g_1402))), (*l_1315))), g_82)) , (*g_199)), (*l_1315)))), (*l_1315)))));
    return (*l_1315);
}







static char func_5(long long p_6, char p_7, unsigned p_8, unsigned p_9)
{
    unsigned short ***l_1146 = (void*)0;
    unsigned long long *l_1148 = &g_264;
    unsigned long long **l_1147 = &l_1148;
    int l_1153 = (-1L);
    int *l_1154 = &l_1153;
    unsigned short l_1159 = 0x1492L;
    int *l_1160 = &g_104;
    int **l_1161 = &g_270;
    unsigned char *l_1162 = &g_231;
    int l_1167 = 0L;
    (*l_1154) = (safe_mod_func_uint64_t_u_u(1UL, func_83((&g_752 == l_1146), ((((*l_1147) = &g_100) == (void*)0) && ((safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_1153, p_6)), p_6)) == 0xF2D2EB56L)))));
    g_38 = (safe_rshift_func_int8_t_s_u(0x14L, (func_83(g_34, ((safe_rshift_func_int8_t_s_s(((***g_800) = (***g_800)), (*l_1154))) , ((p_7 < ((*l_1154) = (func_83(((*l_1160) = (p_9 , (p_6 , (+((*l_1154) , l_1159))))), (**g_294)) , (*l_1154)))) == 0xC413L))) < (*g_295))));
    (*l_1161) = &l_1153;
    (*g_270) = ((*l_1154) != func_47((((void*)0 != &g_590) || (((*g_721) <= p_7) , 0x9AL)), (*g_721), l_1167, (*l_1154), (*l_1161)));
    return p_7;
}







static long long func_10(unsigned short p_11, unsigned char p_12)
{
    unsigned l_950 = 0UL;
    int l_951 = (-4L);
    const unsigned char l_954 = 1UL;
    int l_1014 = 6L;
    const long long l_1038 = 0x8F343674AC059AFBLL;
    const unsigned char *l_1041 = (void*)0;
    const unsigned char **l_1040 = &l_1041;
    const unsigned char ***l_1039 = &l_1040;
    short l_1101 = 0x5FCDL;
    if (((safe_unary_minus_func_int64_t_s((l_951 = ((safe_rshift_func_uint16_t_u_s(l_950, l_950)) , 0x1ADEAB4948849FDELL)))) , ((safe_sub_func_uint32_t_u_u(p_12, p_12)) , (p_12 != 1L))))
    {
        int *l_955 = &g_38;
        (*l_955) = (l_951 &= (p_11 , (l_954 <= l_950)));
        (*l_955) |= p_11;
        (*l_955) = (safe_sub_func_int32_t_s_s((*l_955), p_11));
    }
    else
    {
        unsigned l_958 = 0x7C439878L;
        int *l_976 = (void*)0;
        unsigned char ***l_1030 = &g_294;
        unsigned char ****l_1029 = &l_1030;
        unsigned **l_1117 = (void*)0;
        int l_1127 = 0x4DC219C4L;
        unsigned char * const *l_1132 = &g_295;
        unsigned char * const **l_1131 = &l_1132;
        short *l_1135 = &g_834;
        if (l_958)
        {
            int *l_961 = &l_951;
            for (g_590 = 0; (g_590 > 24); g_590 = safe_add_func_uint16_t_u_u(g_590, 5))
            {
                int **l_962 = &g_296;
                int l_978 = 0x45275535L;
                unsigned char ***l_1010 = &g_294;
                (*l_962) = l_961;
                for (g_66 = (-10); (g_66 >= 3); ++g_66)
                {
                    unsigned char l_975 = 0x85L;
                    const int l_984 = 0xC2C91ED0L;
                    short l_1012 = 1L;
                    (*l_962) = (void*)0;
                    if (func_57((l_954 < (safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(func_47((l_954 , ((((safe_lshift_func_uint16_t_u_u(l_958, 1)) | func_47(p_11, l_958, g_775, (+((*g_295) ^ (safe_rshift_func_int8_t_s_s(p_11, (((safe_mul_func_int8_t_s_s((((*g_403) = (-6L)) , p_11), p_12)) | (**g_294)) , (**g_801)))))), &l_951)) | g_590) && g_590)), l_975, g_411, p_12, l_976), g_411)), p_12)))))
                    {
                        int l_977 = 1L;
                        unsigned l_993 = 0x73288010L;
                        (*l_961) = func_83((((*g_721) = (((*l_961) = l_977) > l_978)) | (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u(((((l_977 , l_984) != p_12) <= (7L > l_984)) != (g_775 && ((func_57((((l_950 && p_11) >= 0x8D0CL) , p_11)) , 0x6879F1D4L) != g_590))))), p_12))), p_12);
                        (*l_962) = &g_2;
                        (*l_961) = (*g_296);
                        l_993 ^= (((safe_mul_func_int8_t_s_s(0x54L, (safe_mul_func_uint8_t_u_u((**g_294), (((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((**g_801), ((*g_721) , p_11))), ((*g_403) && (0L < (**l_962))))) , 0xED629F6CL) == 0x2ABA59FCL))))) > 1L) , 0xAF0B6CB0L);
                    }
                    else
                    {
                        unsigned short *l_1003 = &g_724;
                        unsigned ** const *l_1011 = &g_816;
                        int l_1013 = 0x3EBB1A8AL;
                        (*l_962) = &l_951;
                        l_1014 &= (safe_unary_minus_func_int64_t_s(func_47(g_411, (safe_mod_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((*l_1003) = l_975), ((p_11 >= (safe_lshift_func_uint16_t_u_u((((*g_403) = (safe_lshift_func_int16_t_s_s((((**g_294) |= (safe_sub_func_int32_t_s_s(((void*)0 == l_1010), l_954))) < func_83((l_1011 != ((((*l_961) ^ (-1L)) != l_1012) , &g_816)), p_11)), l_984))) >= 18446744073709551615UL), (*l_961)))) & l_1013))), 0xF0C6L)), p_12)) , l_1012) != 3L), (***g_800))), p_12, p_11, (*l_962))));
                        if (p_11)
                            break;
                    }
                }
            }
        }
        else
        {
            long long l_1015 = 0xD78F1EAFB138555BLL;
            int *l_1016 = &l_1014;
            l_1015 = (-4L);
            (*l_1016) ^= (p_11 > g_724);
        }
        for (g_598 = 0; (g_598 == (-5)); --g_598)
        {
            int *l_1019 = (void*)0;
            int *l_1020 = &l_951;
            unsigned long long *l_1036 = &g_264;
            unsigned *l_1037 = &l_958;
            (*l_1020) = (g_38 = l_954);
            (*l_1020) = (((*l_1037) ^= ((safe_div_func_int8_t_s_s(6L, (*g_199))) , (safe_lshift_func_int16_t_s_u(((func_57(((*l_1036) = ((safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((((*g_403) , l_1029) != ((safe_unary_minus_func_int16_t_s(g_231)) , (void*)0)), p_12)) <= ((*g_721) &= ((safe_add_func_uint64_t_u_u(p_11, (safe_rshift_func_uint16_t_u_u(p_12, 2)))) >= l_1014))), 0x78L)) || l_950))) < p_12) , p_12), 13)))) , l_1038);
        }
        l_1014 = ((void*)0 == l_1039);
        if (((-1L) < func_47((l_1014 = 65534UL), l_951, (safe_sub_func_uint64_t_u_u((l_1038 && (251UL == (safe_rshift_func_uint8_t_u_s(0x9CL, 0)))), (safe_add_func_uint8_t_u_u(0x0CL, (*g_295))))), (p_11 | 0x334F90A2L), &l_951)))
        {
            unsigned l_1052 = 0x89004754L;
            unsigned **l_1059 = &g_721;
            unsigned short *l_1060 = &g_65;
            char l_1061 = 0x18L;
            int *l_1062 = &l_951;
            int **l_1063 = &g_296;
            g_38 = 0x29189C2BL;
            (*l_1063) = (l_976 = l_1062);
            for (l_951 = 0; (l_951 == 0); l_951 = safe_add_func_uint8_t_u_u(l_951, 4))
            {
                unsigned l_1066 = 0x6DAF3A35L;
                return l_1066;
            }
            l_1014 = ((p_12 >= (((safe_add_func_int8_t_s_s(p_11, ((g_764 = ((**l_1063) |= g_590)) < (safe_div_func_int8_t_s_s(func_83((((safe_add_func_uint64_t_u_u(g_289, func_57((((*g_199) = (safe_mul_func_uint16_t_u_u(2UL, (safe_rshift_func_uint16_t_u_s((l_954 >= (p_12 <= (5UL == l_1038))), l_958))))) != 0x2DL)))) ^ p_12) || l_1038), p_12), (**g_294)))))) != 0x65L) >= l_1038)) & g_590);
        }
        else
        {
            short l_1093 = 2L;
            unsigned short ***l_1129 = (void*)0;
            int *l_1130 = &l_1127;
            unsigned char * const **l_1133 = &l_1132;
            if (p_11)
            {
                unsigned short l_1085 = 65527UL;
                int *l_1110 = &l_951;
                long long **l_1115 = &g_403;
                long long ***l_1116 = &l_1115;
                for (g_724 = (-13); (g_724 > 28); g_724 = safe_add_func_uint32_t_u_u(g_724, 7))
                {
                    unsigned l_1086 = 0x44475C06L;
                    int * const l_1102 = &l_1014;
                    l_1014 |= ((p_12 , (((((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(p_12, 0x75A3L)), p_12)) >= (l_1086 = l_1085)) , ((safe_add_func_uint64_t_u_u(g_775, (safe_mul_func_uint8_t_u_u((p_11 || (l_1086 || (-9L))), 1L)))) , (-1L))) < g_834) , p_12)) || 0x409D0E06L);
                    if ((safe_div_func_int8_t_s_s(0xCDL, (***g_800))))
                    {
                        int l_1100 = 0xD97FCEFFL;
                        int **l_1103 = &g_270;
                        unsigned char *l_1109 = &g_231;
                        (*l_1103) = l_1102;
                        (*l_1103) = l_1110;
                        if ((*g_270))
                            break;
                    }
                    else
                    {
                        int **l_1111 = (void*)0;
                        int **l_1112 = (void*)0;
                        int **l_1113 = (void*)0;
                        int **l_1114 = &l_976;
                        (*l_1114) = l_1110;
                    }
                }
                (*l_1116) = l_1115;
                (*l_1110) ^= (l_1117 == &g_817);
            }
            else
            {
                const unsigned long long l_1120 = 0xC06A2D6815278935LL;
                for (g_775 = 0; (g_775 == 28); g_775 = safe_add_func_int32_t_s_s(g_775, 7))
                {
                    int *l_1126 = &g_38;
                    int **l_1128 = &g_270;
                    l_1127 &= (!((*l_1126) = (l_1120 , func_57((safe_unary_minus_func_uint64_t_u((func_83(l_1093, (*g_295)) , ((safe_rshift_func_int16_t_s_u(1L, 2)) , (safe_lshift_func_uint8_t_u_s(0xF4L, 2))))))))));
                    (*l_1128) = (void*)0;
                    if (p_12)
                        break;
                }
            }
            if ((~((*l_1130) = (~((~((*g_721) = (((void*)0 == l_1129) >= 3UL))) >= 0xCE5AC4FFL)))))
            {
                return p_12;
            }
            else
            {
                unsigned char ***l_1134 = &g_294;
                int **l_1136 = &l_976;
                (*l_1136) = &g_38;
                for (g_289 = 0; (g_289 < (-10)); g_289--)
                {
                    char l_1141 = 1L;
                    for (g_110 = 0; (g_110 != 21); ++g_110)
                    {
                        short l_1142 = 0x97B3L;
                        (*l_1130) ^= l_1141;
                        (*l_1136) = ((l_1142 , (-1L)) , (*l_1136));
                    }
                    (*l_1130) = ((*l_976) = p_11);
                    (**l_1136) = (l_951 &= (*l_976));
                }
                (*l_976) = (*l_976);
                return p_11;
            }
        }
    }
    return p_11;
}







static unsigned char func_13(const long long p_14, int p_15, short p_16, unsigned char p_17, unsigned long long p_18)
{
    unsigned short l_916 = 65533UL;
    int *l_921 = &g_490;
    int l_922 = 1L;
    unsigned l_927 = 0x79F48632L;
    unsigned l_928 = 0xA8B294F3L;
    short *l_929 = &g_834;
    short *l_930 = (void*)0;
    short *l_931 = (void*)0;
    short *l_932 = (void*)0;
    short *l_933 = &g_66;
    unsigned l_940 = 0x037ECF4AL;
    int *l_941 = &l_922;
    int **l_942 = &l_941;
    int **l_943 = (void*)0;
    int **l_944 = (void*)0;
    int **l_945 = &g_296;
    (*g_296) = ((g_264 | ((safe_rshift_func_uint8_t_u_s(((*g_295) = (l_916 > (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(((((&g_463 != (void*)0) < (func_83(((*l_921) = l_916), ((**g_294) = func_57((((l_922 = l_916) & (safe_mul_func_uint16_t_u_u(((((*l_933) = ((*l_929) = (0x66AF104AA29D120DLL <= (((((safe_rshift_func_uint16_t_u_u(((p_14 != 0L) , l_916), l_927)) > p_16) > (***g_800)) , l_928) < 0x85C3C889L)))) , g_724) , g_934), 9L))) || l_916)))) < l_927)) , (*g_296)) != p_16), 2)) , (*g_721)), p_18)))), 5)) == l_927)) < l_927);
lbl_946:
    l_941 = &p_15;
    g_38 &= (&p_15 != ((*l_945) = ((*l_942) = &l_922)));
    if (p_16)
        goto lbl_946;
    return p_14;
}







static short func_22(const char p_23)
{
    int l_45 = 9L;
    unsigned char *l_46 = &g_34;
    int l_59 = 0x511F0B9FL;
    int *l_61 = &g_38;
    int l_779 = 0x22002BABL;
    int *l_819 = &l_59;
    unsigned l_823 = 0UL;
    unsigned long long *l_882 = &g_100;
    char l_909 = (-1L);
lbl_910:
    for (g_34 = 0; (g_34 < 50); g_34 = safe_add_func_int16_t_s_s(g_34, 7))
    {
        int *l_37 = &g_38;
        unsigned short *l_64 = &g_65;
        unsigned short l_802 = 8UL;
        (*l_37) = g_34;
        if (((p_23 < func_39((*l_37), (g_66 &= ((*l_64) ^= (safe_unary_minus_func_int8_t_s(((g_2 <= (safe_mul_func_int8_t_s_s(l_45, ((void*)0 != l_46)))) != func_47(((((safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(0x0CC74BF7L, func_57((l_59 = (*l_37))))), 0x70B1B9B964069A3ELL)) == (*l_37)) , 0UL) , p_23), g_2, g_2, g_38, l_61)))))))) ^ g_764))
        {
            int *l_765 = &g_2;
            char *l_772 = &g_598;
            unsigned char *l_773 = &g_231;
            unsigned char *l_774 = &g_775;
            int *l_776 = (void*)0;
            int *l_777 = (void*)0;
            int *l_778 = &l_59;
            g_270 = l_765;
            l_779 &= ((*l_778) = ((*l_37) , ((*l_61) = ((*g_199) < (((((safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((p_23 && ((safe_lshift_func_int8_t_s_u(((*l_772) = (-1L)), 5)) <= ((void*)0 == l_61))) , 255UL), ((*l_773) = (**g_294)))), ((((*l_774) = func_47(p_23, (*l_61), g_590, (*l_37), &l_59)) && p_23) ^ p_23))) | (*l_765)) | (*l_61)) | (*l_765)) , (*l_765))))));
        }
        else
        {
            short l_791 = 0x56C1L;
            unsigned **l_793 = (void*)0;
            int *l_794 = &g_38;
            g_296 = l_37;
            for (g_598 = 0; (g_598 == 13); g_598 = safe_add_func_int8_t_s_s(g_598, 2))
            {
                char l_788 = 0L;
                short *l_789 = (void*)0;
                short *l_790 = &g_66;
                int *l_792 = &l_59;
                int **l_795 = &l_37;
                (*l_792) &= ((*l_61) = func_83((*l_37), ((safe_mul_func_int16_t_s_s(((*g_403) || ((l_788 = (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(p_23, 6)), 1L))) || 0xDAB16DEDL)), ((*l_790) = (~(*l_37))))) , (1L | (func_83(l_788, l_791) , (*g_403))))));
                l_793 = l_793;
                (*l_795) = l_794;
            }
            for (g_82 = (-14); (g_82 >= (-17)); --g_82)
            {
                unsigned char l_799 = 0x4BL;
                int ***l_803 = &g_269;
                (*l_61) = (((((l_799 = ((*l_64) = (safe_unary_minus_func_int8_t_s((*g_199))))) || p_23) | (-1L)) | ((g_800 == (l_802 , &g_801)) , p_23)) , (&g_269 == l_803));
            }
        }
        for (g_65 = 0; (g_65 >= 18); g_65 = safe_add_func_int8_t_s_s(g_65, 2))
        {
            int *l_806 = &l_59;
            int **l_807 = &g_270;
            (*l_807) = l_806;
            for (g_775 = (-9); (g_775 <= 15); g_775 = safe_add_func_int16_t_s_s(g_775, 9))
            {
                long long l_820 = 0x8430DB922382183ALL;
                for (l_779 = 0; (l_779 < (-7)); l_779 = safe_sub_func_uint8_t_u_u(l_779, 5))
                {
                    unsigned *l_815 = (void*)0;
                    unsigned **l_814 = &l_815;
                    if (p_23)
                        break;
                    for (g_66 = 23; (g_66 >= (-30)); g_66 = safe_sub_func_uint64_t_u_u(g_66, 8))
                    {
                        unsigned ***l_818 = &l_814;
                        (*l_807) = l_37;
                        (*l_818) = (g_816 = l_814);
                        (**l_807) |= 0xA644EFAFL;
                    }
                }
                (*l_807) = l_819;
                (*l_806) &= l_820;
            }
            for (g_231 = (-10); (g_231 != 10); ++g_231)
            {
                int *l_824 = &g_38;
                int l_833 = (-1L);
                const unsigned char **l_867 = (void*)0;
                const unsigned char **l_868 = (void*)0;
                const unsigned char *l_870 = &g_871;
                const unsigned char **l_869 = &l_870;
                long long *l_883 = &g_676;
            }
            if ((*l_806))
                continue;
        }
        return g_490;
    }
    l_909 = ((*g_403) > (((((**g_294) = (safe_div_func_uint64_t_u_u(((((safe_mul_func_int16_t_s_s(p_23, ((safe_unary_minus_func_uint16_t_u((safe_div_func_int64_t_s_s(p_23, (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((***g_800) ^= func_57((((safe_div_func_uint8_t_u_u(0x73L, (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(((*l_819) & (safe_mod_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(((*l_819) , ((*l_61) || (p_23 != (safe_add_func_int64_t_s_s((p_23 || 7L), p_23))))), 1L)) ^ p_23) >= (*l_819)), p_23))), (*l_61))), 9)))) , 5UL) != (*l_61)))), 1UL)), (*g_295))))))) >= (*l_819)))) | p_23) != (*l_819)) & 0UL), (*g_403)))) && 255UL) == (*l_61)) && (*l_61)));
    if (g_34)
        goto lbl_910;
    return p_23;
}







static long long func_39(char p_40, unsigned short p_41)
{
    char *l_81 = &g_82;
    int l_86 = 1L;
    unsigned long long *l_99 = &g_100;
    int l_101 = (-10L);
    int *l_102 = (void*)0;
    int *l_103 = &g_104;
    const int l_106 = 0x5EE7416AL;
    long long *l_107 = (void*)0;
    long long *l_108 = (void*)0;
    long long *l_109 = &g_110;
    int *l_397 = &l_86;
    const short *l_427 = &g_66;
    unsigned l_442 = 0x481374B1L;
    short l_449 = 0x88A9L;
    char l_460 = 0x2BL;
    unsigned char ***l_479 = &g_294;
    unsigned char l_513 = 0x85L;
    long long l_654 = 0x49396FF2EBC5624ALL;
    unsigned short ** const *l_755 = &g_248;
    l_397 = func_67((g_66 | (safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((((safe_sub_func_int64_t_s_s((~((*l_109) &= ((((-6L) < ((safe_rshift_func_uint16_t_u_s((254UL | ((*l_81) = (-8L))), 9)) ^ func_83(((*l_103) = (l_86 = (l_86 != (safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(0x2B13L, func_57((!((l_101 = (&p_41 == ((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((((safe_mod_func_uint64_t_u_u((((safe_sub_func_uint64_t_u_u(((*l_99) = p_41), g_66)) , p_41) && g_34), l_86)) || l_86) || g_65), 1UL)), l_86)) , &p_41))) && p_41))))), g_38))))), p_40))) , 4UL) < l_106))), l_106)) < p_40) < 0x2F22L) < 0xC5L), g_34)), 251UL))), g_66, l_106, p_40, g_2);
    if ((safe_add_func_uint8_t_u_u(((*g_296) <= (*g_296)), 0xFEL)))
    {
        unsigned char l_402 = 0x83L;
        long long *l_404 = &g_289;
        unsigned char l_425 = 255UL;
        const int * const l_434 = (void*)0;
        const int * const *l_433 = &l_434;
        int *l_466 = &g_2;
        int *l_529 = &g_38;
        unsigned char ****l_556 = &l_479;
        if ((safe_lshift_func_uint8_t_u_u((l_402 == p_40), 0)))
        {
            unsigned long long *l_416 = &g_100;
            int l_418 = 0x9C979C9EL;
            short *l_426 = &g_66;
            unsigned l_450 = 18446744073709551607UL;
            int *l_469 = (void*)0;
            unsigned l_514 = 9UL;
            long long l_521 = 0x484D1A5969EDB408LL;
            short **l_522 = &l_426;
            if (((g_403 = &g_289) != l_404))
            {
                int l_417 = 0xE67180A5L;
                int *l_419 = &l_101;
                unsigned short **l_431 = &g_249;
                (*l_419) = (l_418 = (((safe_mod_func_int8_t_s_s((1UL >= (0x5EL > ((safe_mul_func_int8_t_s_s(((g_411 |= (safe_rshift_func_uint16_t_u_u(p_41, 9))) && p_41), ((((*g_296) = (safe_mul_func_int8_t_s_s((g_110 , (*g_199)), (&g_264 == l_416)))) , p_40) != 0L))) | l_417))), (*g_295))) > 0xCC248D43A7C1BF27LL) < l_417));
                l_397 = (void*)0;
                (*g_269) = &g_38;
                if ((~p_40))
                {
                    return p_40;
                }
                else
                {
                    unsigned long long l_424 = 0xCCF848ACA56E3BA6LL;
                    const short **l_428 = &l_427;
                    int ***l_432 = (void*)0;
                    const int * const **l_435 = &l_433;
                    const int * const *l_437 = &l_434;
                    const int * const **l_436 = &l_437;
                    (*g_269) = func_67(l_424, ((l_425 , l_426) == ((*l_428) = l_427)), (p_41 ^= l_424), (func_47(p_40, l_424, (safe_div_func_uint64_t_u_u(g_289, (+0UL))), p_40, &l_101) != 3L), (*g_296));
                    (*g_296) |= ((void*)0 != l_431);
                    (*g_296) |= ((g_269 = &l_419) != ((*l_436) = ((*l_435) = l_433)));
                }
            }
            else
            {
                char **l_439 = &g_199;
                char ***l_438 = &l_439;
                (*l_438) = &g_199;
            }
            if ((safe_mod_func_uint16_t_u_u(l_442, func_57((((l_418 >= (((func_57(func_83(g_200, p_40)) != (((((void*)0 != &g_104) | (!(*g_403))) && p_40) , (*g_296))) , 4UL) , 7L)) , (void*)0) != g_443)))))
            {
                unsigned l_446 = 0x435C927AL;
                short **l_447 = (void*)0;
                unsigned short l_458 = 65535UL;
                int l_485 = 0x47646F51L;
                int l_487 = 8L;
                unsigned long long *l_512 = &g_264;
                if ((l_86 & (((l_418 || (func_57(l_446) , (((g_448 = &g_66) != (void*)0) , 0UL))) , (l_446 != (((l_446 == l_449) || (*g_199)) & l_446))) , l_450)))
                {
                    char l_465 = 0xA2L;
                    int **l_470 = &l_469;
                    for (g_411 = 0; (g_411 > 55); ++g_411)
                    {
                        unsigned char ***l_453 = &g_294;
                        int l_459 = 0x297F213CL;
                        (*g_296) = func_47(l_418, p_40, (((*l_453) = &g_295) != ((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(l_458, ((*l_426) = (func_83((l_459 &= p_41), (((&g_104 != (void*)0) == l_460) < (safe_lshift_func_int16_t_s_s(func_47(((g_463 = &l_446) != &g_464), g_365, l_465, p_41, &l_418), 2)))) || p_41)))) , p_40), p_40)) , (void*)0)), l_465, l_466);
                    }
                    (*g_296) |= (safe_rshift_func_int16_t_s_s(1L, 13));
                    (*l_470) = l_469;
                }
                else
                {
                    int *l_488 = (void*)0;
                    int l_492 = (-1L);
                    for (g_464 = (-9); (g_464 != 47); g_464++)
                    {
                        unsigned char ****l_480 = (void*)0;
                        unsigned char ***l_482 = (void*)0;
                        unsigned char ****l_481 = &l_482;
                        unsigned short *l_486 = &l_458;
                        int l_489 = 0x4534EDEDL;
                        unsigned *l_491 = &l_446;
                        unsigned char *l_495 = &l_402;
                        unsigned char *l_496 = (void*)0;
                        unsigned char *l_497 = &g_231;
                        unsigned short *l_504 = &g_65;
                        unsigned char *l_505 = &l_425;
                        (*g_296) |= (safe_div_func_uint32_t_u_u(((*l_433) == (*l_433)), p_40));
                        l_492 |= (((*g_296) | func_47(p_41, ((*l_491) = (g_490 ^= (safe_mul_func_int16_t_s_s(((0x34B1L && ((*l_426) = (((safe_mul_func_uint8_t_u_u(func_47((l_479 == ((*l_481) = (void*)0)), ((((safe_div_func_uint16_t_u_u(((*l_486) &= (0x04L > (l_485 &= 0x46L))), (l_487 |= ((**g_294) | (&p_41 == (void*)0))))) <= (*l_466)) == 0x79D1E072L) , 0x444ADB2FL), p_40, p_41, l_488), p_41)) | 8L) >= (*g_403)))) & l_489), p_40)))), g_110, p_40, l_466)) , (*g_296));
                        (*g_296) = (l_489 , (l_489 , (safe_mod_func_uint8_t_u_u((+((*l_497) = ((*l_495) = (**g_294)))), (safe_div_func_int16_t_s_s(((*l_426) = (p_41 > ((p_40 , 0x16L) | ((((*g_199) != ((*l_505) = (+(safe_lshift_func_int8_t_s_u((l_485 , (~func_47(((*l_504) = (safe_rshift_func_uint16_t_u_s(p_41, p_40))), (*g_463), p_40, p_41, &l_487))), p_41))))) , p_40) | (*g_199))))), p_40))))));
                        (*g_296) = p_40;
                    }
                }
                l_485 |= (safe_div_func_int64_t_s_s(((((*g_463) | (&l_418 == &l_101)) , (*l_466)) ^ (safe_rshift_func_int16_t_s_s(p_41, (safe_div_func_int32_t_s_s(((+(l_426 == (void*)0)) > (l_512 == (func_83(p_41, l_513) , &g_264))), 0xADB0E09EL))))), l_514));
                (*g_296) ^= 1L;
            }
            else
            {
                unsigned short *l_519 = &g_411;
                int l_520 = (-1L);
                const short **l_523 = &l_427;
                short l_524 = (-1L);
                const int *l_526 = &g_38;
                const int **l_525 = &l_526;
                int *l_530 = &l_418;
                (*g_247) = (*g_247);
                if (l_86)
                    goto lbl_527;
lbl_527:
                (*l_525) = (*l_433);
                (*g_296) = (*g_296);
                if ((+((*g_295) , p_40)))
                {
                    (*g_296) = (*g_296);
                }
                else
                {
                    int *l_528 = &l_101;
                    (*l_528) = ((*g_296) ^= 1L);
                    l_530 = (l_529 = ((*l_466) , &l_86));
                }
            }
            (*l_529) = func_83((*l_466), ((safe_add_func_int32_t_s_s(func_83(g_66, func_83(g_100, p_40)), (safe_rshift_func_uint16_t_u_u(p_40, 10)))) > (safe_mul_func_uint16_t_u_u(((p_40 & func_47((g_82 >= 0x964D2EB6356CCCB2LL), p_40, g_490, (*l_529), &g_38)) == p_41), p_41))));
            for (l_418 = 0; (l_418 == 12); l_418++)
            {
                int l_543 = 0x68087413L;
                (*g_296) &= ((safe_rshift_func_int8_t_s_u((*g_199), 7)) && (l_543 ^= ((*l_426) = func_83(func_57(g_34), (safe_lshift_func_uint8_t_u_s((*g_295), 0))))));
                return (*g_403);
            }
        }
        else
        {
            unsigned char l_548 = 1UL;
            int *l_579 = (void*)0;
            for (g_411 = 0; (g_411 != 9); ++g_411)
            {
                char l_557 = 1L;
                for (g_200 = 17; (g_200 > (-5)); g_200 = safe_sub_func_uint32_t_u_u(g_200, 6))
                {
                    short *l_549 = &l_449;
                    int l_552 = 1L;
                    int l_553 = 0x1AAF0B85L;
                    (*g_269) = &l_552;
                    (*l_529) = (*g_296);
                }
                (*l_529) = (*g_296);
                if (l_557)
                    continue;
                if ((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((-1L), 6)), (((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_add_func_int32_t_s_s((((0x8661366F986CD3C3LL != (safe_div_func_uint16_t_u_u(p_40, (safe_unary_minus_func_uint64_t_u(func_47(l_548, ((255UL <= l_557) && (safe_mul_func_uint8_t_u_u((*l_466), ((safe_mod_func_uint64_t_u_u((((*g_463) = (safe_mul_func_uint16_t_u_u((+(p_41 = l_557)), l_548))) , 1UL), 0xC06B6392A8839D2CLL)) > p_40)))), g_200, (*l_466), l_466)))))) , p_40) == p_40), 0x6623097AL)) <= g_264), (-1L))), (*g_295))) , p_41) || 0xE6CA02F0E0C252F8LL))))
                {
                    if (((*l_529) = (safe_add_func_uint8_t_u_u(0xFAL, p_41))))
                    {
                        (*g_269) = (void*)0;
                    }
                    else
                    {
                        (*g_269) = l_579;
                    }
                    (*g_296) = p_41;
                }
                else
                {
                    unsigned char ***l_586 = &g_294;
                    unsigned char *l_587 = (void*)0;
                    unsigned char *l_588 = &g_231;
                    unsigned char *l_589 = &l_513;
                    int l_596 = 0xEC8B2FA2L;
                    if ((((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((*g_199), 0x77L)), p_40)), (*g_403))) | (p_40 < 0xEA7FC6860DCBF25ALL)) < ((*l_589) = ((*l_588) = (+((void*)0 == l_586))))))
                    {
                        const int *l_591 = &l_101;
                        const int **l_592 = (void*)0;
                        const int **l_593 = (void*)0;
                        const int **l_594 = (void*)0;
                        const int **l_595 = &l_591;
                        (*g_296) = g_590;
                        (*l_595) = l_591;
                        return l_596;
                    }
                    else
                    {
                        unsigned short *l_597 = &g_65;
                        g_598 = (((*l_529) = (((*l_597) = ((void*)0 == &l_81)) & 1UL)) >= p_40);
                    }
                }
            }
        }
    }
    else
    {
        short *l_599 = &l_449;
        int l_600 = 0xF9C36837L;
        unsigned short *l_611 = &g_411;
        unsigned char *l_641 = &l_513;
        int l_642 = (-5L);
        int *l_712 = (void*)0;
        char ** const l_729 = &l_81;
        (*g_269) = &l_101;
        for (g_365 = (-7); (g_365 <= 57); g_365++)
        {
            unsigned l_616 = 0x18A25159L;
        }
        (*g_269) = func_67(p_41, (*g_463), (p_40 , ((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((-9L), 6)), (*g_199))) , 0x72L) > ((~(safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((*g_296) = ((func_83(g_104, (l_600 = (safe_sub_func_int64_t_s_s(p_40, (p_41 & (-1L)))))) | 0x2483151DA48B7A7ELL) || p_40)), (-1L))), 15))) <= p_41)) <= g_100)), l_86, (**g_269));
        if ((((l_642 |= ((*l_641) |= (safe_mul_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(0x5F343B5F4A50E191LL, ((func_83(g_203, l_600) <= (safe_mod_func_int8_t_s_s(func_57((4UL == (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u(8L, (safe_mul_func_int16_t_s_s(l_600, ((*l_599) = (-1L)))))) >= (safe_sub_func_uint16_t_u_u(((*g_403) <= l_600), p_40))), p_41)))), 252UL))) > 0x4CL))) , p_40), 0L)))) ^ l_600) && (*g_403)))
        {
            int l_647 = 4L;
            unsigned short **l_659 = &g_249;
            int **l_664 = &g_270;
            unsigned *l_719 = (void*)0;
            unsigned long long l_726 = 3UL;
            unsigned char **l_742 = &g_295;
            char l_760 = (-1L);
            (*g_296) = 0x4FF98FF4L;
            if (((safe_lshift_func_int8_t_s_u((p_40 , ((safe_sub_func_uint32_t_u_u(func_57(l_647), (((*g_463) = p_41) , p_41))) | ((((*l_641) = (&l_479 == (((l_600 = ((((((((*l_81) &= (safe_lshift_func_int16_t_s_s(p_40, func_47((((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_40, 4)) && ((*l_99) ^= func_47(p_41, p_41, p_41, l_600, &l_647))), 0x67L)) & l_654) & 0xA0L), p_40, g_289, p_41, (*g_269))))) | 0x1DL) || 4294967289UL) <= l_600) == p_40) , 9L) > l_647)) , p_41) , (void*)0))) && 255UL) , l_647))), 2)) | l_642))
            {
                int *l_666 = &g_2;
                int l_678 = (-1L);
                int l_705 = 0xFB579E50L;
                int l_713 = 0L;
                unsigned **l_720 = &g_463;
                (*g_296) ^= (((*g_403) || ((*l_99) = 0xA799F58D1AD26953LL)) , (((*g_199) = (p_41 >= (*g_403))) | p_41));
                if (l_86)
                    goto lbl_711;
lbl_714:
                if ((*g_296))
                {
                    unsigned short **l_660 = &l_611;
                    unsigned short ***l_661 = &l_660;
                    int **l_665 = (void*)0;
                    if ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((*g_296) = 0x75C9B337L), (*g_463))), (((((*g_247) = (p_41 , l_659)) == ((*l_661) = l_660)) , (((&g_590 == &g_590) , (((safe_mul_func_int8_t_s_s((l_664 != l_665), (*g_199))) > p_40) | 1UL)) <= p_40)) == p_41))))
                    {
                        char l_675 = 0L;
                        unsigned *l_677 = (void*)0;
                        (*g_269) = l_666;
                        (*g_296) |= ((safe_sub_func_uint8_t_u_u(0x41L, (safe_lshift_func_uint8_t_u_s(((((l_678 ^= ((func_47(p_40, ((*g_463) = (((*g_403) & ((*g_199) <= ((l_600 = ((1UL || (safe_rshift_func_int16_t_s_s(((l_675 && 3UL) < ((**l_664) && p_41)), g_676))) < l_600)) >= 0x1A71AE4DL))) , p_41)), l_675, p_40, (*g_269)) ^ l_675) ^ 5L)) , 0x9921E7037CE398C1LL) <= l_642) || l_600), 3)))) > 18446744073709551615UL);
                        (*g_296) |= l_675;
                    }
                    else
                    {
                        int l_683 = 0x7B2D364AL;
                        int *l_688 = &l_86;
                        unsigned char *l_695 = &g_231;
                        (*l_664) = (*g_269);
                        (*l_664) = ((p_41 , (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(p_40, 3)), (*g_296)))) , l_688);
                        if (g_65)
                            goto lbl_696;
lbl_696:
                        (*g_296) = ((0xCED5L < (safe_mul_func_uint8_t_u_u((((*g_403) & (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((**l_664) = (p_40 < (!(*l_688)))), ((*l_641) = p_40))), ((func_57(g_110) , &p_40) == (((*l_695) ^= (g_411 , 0x24L)) , (void*)0))))) && 0x9032EA94L), (*g_199)))) , (*l_688));
                        (*g_296) ^= ((0x1AL == 8UL) , (safe_sub_func_uint8_t_u_u((*g_295), (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(0x89L, 2)), (safe_add_func_uint8_t_u_u((((p_40 && (l_705 > (safe_lshift_func_int16_t_s_u(func_83((g_490 = g_110), (*l_688)), (*l_688))))) != p_40) != p_40), p_41)))))));
                    }
                    (*g_269) = (*g_269);
                }
                else
                {
                    for (g_38 = 0; (g_38 == 3); g_38 = safe_add_func_uint16_t_u_u(g_38, 1))
                    {
                        int *l_710 = &l_600;
                        (*l_710) |= 1L;
                        if (p_41)
                            continue;
                        (*l_710) = p_40;
                    }
lbl_711:
                    (*l_664) = (*l_664);
                    (*g_269) = l_712;
                    l_713 = p_41;
                    if (g_200)
                        goto lbl_714;
                }
                (*g_296) |= (safe_rshift_func_uint16_t_u_u(p_41, (((void*)0 == &g_104) == ((*l_109) = (safe_rshift_func_int8_t_s_u((((*l_720) = l_719) != g_721), 1))))));
            }
            else
            {
                unsigned l_730 = 0x9895B6C0L;
                for (l_101 = 27; (l_101 != (-11)); --l_101)
                {
                    short l_725 = 0x9E21L;
                    (*g_269) = (*l_664);
                }
            }
            for (g_464 = (-17); (g_464 < 1); g_464 = safe_add_func_int64_t_s_s(g_464, 9))
            {
                short l_735 = (-10L);
                int l_743 = 0xB013C2BEL;
                char *l_748 = &l_460;
                unsigned short * const * const **l_753 = (void*)0;
                unsigned short * const * const **l_754 = &g_751;
                l_743 = ((safe_sub_func_uint16_t_u_u((((l_735 >= p_41) || 65528UL) , p_41), (safe_mod_func_int32_t_s_s((0xCF6A5772L != (((*g_721) & (safe_lshift_func_uint8_t_u_s(func_83(p_40, ((((safe_div_func_int16_t_s_s(((((((l_735 > ((*l_599) = (+(l_742 == &g_295)))) && 1UL) || 0x7D33FC8908794A52LL) || 0UL) <= (-8L)) ^ 0x36054B0B5B202AE5LL), p_40)) > p_40) | 0UL) >= l_735)), (*g_199)))) == 0UL)), l_600)))) ^ 0x625CL);
                (*g_296) |= (safe_rshift_func_uint8_t_u_u(((func_47(func_57(((&g_203 == (void*)0) , (safe_div_func_int16_t_s_s((&g_82 == l_748), func_83((safe_mul_func_int16_t_s_s(p_41, (((*l_754) = g_751) != l_755))), (safe_sub_func_uint16_t_u_u(l_743, (safe_rshift_func_uint8_t_u_u(l_760, (**g_294)))))))))), p_41, p_40, l_735, (*g_269)) || 9L) || l_760), 2));
            }
        }
        else
        {
            int *l_761 = &l_642;
            (*l_761) &= (*g_296);
            for (g_104 = 0; (g_104 > (-10)); g_104 = safe_sub_func_int32_t_s_s(g_104, 3))
            {
                (*l_761) = 0L;
            }
        }
    }
    return p_40;
}







static unsigned char func_47(const unsigned short p_48, unsigned p_49, unsigned long long p_50, unsigned short p_51, int * p_52)
{
    unsigned char l_62 = 8UL;
    int l_63 = 0x69719EFCL;
    l_63 = l_62;
    return g_2;
}







static int func_57(unsigned long long p_58)
{
    short l_60 = (-10L);
    return l_60;
}







static int * func_67(short p_68, unsigned p_69, unsigned short p_70, short p_71, int p_72)
{
    unsigned l_125 = 5UL;
    int l_130 = (-4L);
    char * const l_141 = &g_82;
    unsigned char *l_156 = &g_34;
    unsigned short * const *l_168 = (void*)0;
    unsigned short *l_170 = &g_65;
    unsigned short **l_169 = &l_170;
    char l_233 = 0xC9L;
    char l_335 = 0x3AL;
    const long long *l_353 = &g_110;
    int *l_374 = &g_2;
    const unsigned short *l_387 = &g_65;
    int *l_396 = &g_2;
lbl_358:
    for (p_70 = 0; (p_70 >= 38); ++p_70)
    {
        int l_129 = 9L;
        unsigned l_140 = 0x0625CAFDL;
        long long *l_204 = &g_110;
        int *l_244 = &g_104;
        const unsigned long long l_273 = 0x63783EF79E816EFCLL;
        short l_293 = 0L;
        for (p_71 = 0; (p_71 == 4); p_71++)
        {
            unsigned *l_126 = &l_125;
            int l_127 = (-5L);
            unsigned long long *l_128 = &g_100;
            int *l_164 = (void*)0;
            int *l_165 = &l_127;
            unsigned short *l_167 = (void*)0;
            unsigned short **l_166 = &l_167;
            unsigned short ***l_171 = &l_169;
            long long l_261 = 1L;
            if (((safe_lshift_func_int8_t_s_s((((0x83L != g_38) != (g_65 < ((g_2 != 0L) | (((safe_add_func_uint64_t_u_u((l_129 |= ((*l_128) &= func_57((safe_sub_func_uint32_t_u_u(((*l_126) = (65535UL > (g_34 > (safe_add_func_uint16_t_u_u((g_82 <= (p_71 != g_104)), l_125))))), l_127))))), g_66)) | 9L) <= p_71)))) & l_127), 6)) ^ l_130))
            {
                for (g_104 = 21; (g_104 == 15); g_104--)
                {
                    int *l_139 = &l_127;
                    for (g_65 = (-30); (g_65 == 12); g_65 = safe_add_func_int8_t_s_s(g_65, 2))
                    {
                        int *l_135 = (void*)0;
                        int *l_136 = (void*)0;
                        int *l_137 = &l_127;
                        int **l_138 = &l_136;
                        l_129 ^= ((*l_137) = p_70);
                        (*l_138) = (void*)0;
                        return &g_2;
                    }
                }
            }
            else
            {
                unsigned short l_144 = 0x4EECL;
                int *l_145 = &l_127;
                unsigned char *l_155 = &g_34;
                unsigned char **l_154 = &l_155;
                unsigned char **l_157 = &l_156;
                int *l_160 = (void*)0;
                int *l_161 = &l_130;
                (*l_145) ^= ((g_38 <= func_83((0x47L && l_140), (l_141 != ((safe_lshift_func_uint8_t_u_u(func_47(func_83(g_110, p_70), (((void*)0 != l_141) , 0x424CFB0CL), g_66, g_82, &g_38), l_144)) , l_141)))) , 0xFDE0D86AL);
                l_129 = (safe_div_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((9UL > (safe_add_func_uint64_t_u_u(p_68, (g_104 , l_130)))) < ((*l_145) >= (l_125 != (((*l_154) = (void*)0) == ((*l_157) = (p_70 , l_156)))))) | g_82), 1UL)), g_38));
                (*l_161) &= (g_38 = ((*l_145) = ((1UL & (safe_mod_func_int64_t_s_s(l_129, p_71))) >= g_34)));
            }
            (*l_165) = (safe_rshift_func_uint16_t_u_u(g_38, 0));
            l_166 = (void*)0;
        }
        l_129 |= func_57(((~(((l_125 <= (((safe_mod_func_uint32_t_u_u(g_82, (safe_mod_func_uint16_t_u_u(((((((**g_269) != (((((((-4L) <= ((g_100 = p_70) && p_72)) || (0xE2AFE41CL >= 0x56D99E69L)) || (((safe_add_func_uint8_t_u_u((g_200 & l_233), 255UL)) >= 0x0165B9B7L) && l_130)) <= g_231) != g_200) & 1L)) , 0x82L) < l_125) >= p_68) & g_203), p_69)))) != l_335) || l_125)) | 0xA5L) >= p_71)) ^ l_293));
        l_130 &= (**g_269);
    }
    if (l_130)
    {
        int *l_336 = &l_130;
        (*g_269) = l_336;
    }
    else
    {
        unsigned char l_341 = 1UL;
        int l_359 = 4L;
        unsigned long long *l_362 = &g_264;
        int l_393 = 1L;
        int l_394 = 0x5E625162L;
        for (g_231 = 2; (g_231 >= 18); g_231 = safe_add_func_uint8_t_u_u(g_231, 8))
        {
            int l_348 = 0xE9B7E83AL;
            (*g_296) &= (safe_div_func_uint8_t_u_u((l_341 == (safe_div_func_int32_t_s_s(((l_233 < (safe_add_func_uint32_t_u_u((((p_68 , (safe_add_func_int8_t_s_s(0x76L, l_348))) , &l_168) == &l_169), (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((l_353 == &g_207) != l_348), 12)), l_348))))) ^ 65535UL), 0x68EFD38AL))), (*g_199)));
            (*g_296) ^= func_83(((safe_add_func_uint32_t_u_u(l_233, ((safe_lshift_func_int16_t_s_s(l_341, g_200)) , (0xBD99D5E18301D259LL > (p_71 == 8L))))) != (g_66 < (((void*)0 == &l_170) , l_348))), (**g_294));
            if (g_34)
                goto lbl_358;
            l_359 = l_341;
        }
        if (((safe_rshift_func_uint8_t_u_u((1L & g_100), (g_104 != ((*l_362) &= g_110)))) & (((safe_sub_func_uint8_t_u_u((((*g_270) < (((p_72 <= g_2) && ((g_365 , (safe_lshift_func_int16_t_s_s((p_68 , l_130), g_38))) <= 0xDD57L)) > l_130)) || l_359), (*g_199))) >= l_335) & l_125)))
        {
            (*g_296) ^= (safe_lshift_func_uint8_t_u_s(l_359, 0));
        }
        else
        {
            int *l_377 = (void*)0;
            (*g_296) &= (safe_rshift_func_int8_t_s_u(((*l_141) ^= (p_71 > (**g_294))), (g_100 | l_359)));
            (*g_269) = &p_72;
            for (g_82 = (-1); (g_82 == (-30)); g_82 = safe_sub_func_int32_t_s_s(g_82, 8))
            {
                return l_374;
            }
            for (p_71 = 22; (p_71 <= (-5)); p_71 = safe_sub_func_uint64_t_u_u(p_71, 1))
            {
                return l_377;
            }
        }
        if ((*l_374))
        {
            unsigned short **l_378 = &g_249;
            (*g_296) = (0x8CEC19D3C9604A95LL && func_57((p_69 > (l_378 != (void*)0))));
        }
        else
        {
            unsigned char *l_392 = (void*)0;
            int l_395 = 0xA48CD2E6L;
            (*g_296) = ((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((l_359 != p_69), (l_394 &= (safe_sub_func_int8_t_s_s(0L, (l_393 = ((safe_div_func_int32_t_s_s((((void*)0 != l_387) == (g_82 , (((void*)0 == &g_104) >= (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((((p_71 <= (*l_374)) == (*l_374)) & l_359) , p_72), p_71)), 1L))))), p_69)) , 0x98L))))))), (*l_374))) , l_395);
        }
    }
    return l_396;
}







static char func_83(int p_84, unsigned char p_85)
{
    long long l_105 = 0x89A473F190218FCDLL;
    return l_105;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_724, "g_724", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    transparent_crc(g_871, "g_871", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_1227, "g_1227", print_hash_value);
    transparent_crc(g_1327, "g_1327", print_hash_value);
    transparent_crc(g_1560, "g_1560", print_hash_value);
    transparent_crc(g_1573, "g_1573", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
