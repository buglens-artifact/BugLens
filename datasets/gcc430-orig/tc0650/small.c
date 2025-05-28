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


struct S0 {
   const unsigned f0 : 12;
   volatile unsigned long long f1;
   signed f2 : 3;
   const unsigned f3 : 27;
   unsigned f4 : 22;
   unsigned f5 : 12;
   const signed f6 : 31;
   const unsigned f7 : 29;
   const unsigned f8 : 24;
};

struct S1 {
   unsigned char f0;
   const unsigned f1 : 25;
   volatile int f2;
   char f3;
   const long long f4;
};


static long long g_18 = 0xB57A67D926128F3BLL;
static int g_66 = 0x1160DD4FL;
static unsigned char g_92 = 0x28L;
static int g_94 = 5L;
static int *g_96 = &g_66;
static char g_101 = 5L;
static unsigned short g_121 = 0x6A0DL;
static int g_125 = 0xAAEF5864L;
static volatile int g_137 = (-6L);
static volatile int *g_136 = &g_137;
static volatile int **g_135 = &g_136;
static volatile int ***g_134 = &g_135;
static volatile struct S0 g_139 = {3,0xE283F91D89D7571DLL,-1,4841,1336,16,31913,23014,2254};
static volatile struct S0 *g_138 = &g_139;
static volatile struct S0 g_141 = {1,5UL,-1,9206,1975,36,-24504,4584,13};
static unsigned long long g_151 = 4UL;
static unsigned long long g_154 = 18446744073709551615UL;
static int g_159 = 0xC3D6C756L;
static unsigned long long g_190 = 0x75BE8B728ABA7F53LL;
static unsigned g_204 = 0xC18EFF22L;
static unsigned char *g_210 = (void*)0;
static unsigned g_228 = 0xD69DC89BL;
static unsigned char g_231 = 0UL;
static unsigned short g_235 = 0xFDF9L;
static const volatile int g_254 = 0x4CDD5964L;
static int * const *g_260 = &g_96;
static int * const **g_259 = &g_260;
static struct S1 g_299 = {0xCAL,1748,0x6F4952A9L,0xC2L,0xAD8E3870AA0E9867LL};
static const int g_323 = 4L;
static struct S1 g_329 = {246UL,649,0x98373BB4L,-1L,9L};
static struct S1 *g_328 = &g_329;
static const unsigned char g_443 = 0xB9L;
static struct S1 **g_446 = (void*)0;
static unsigned long long *g_451 = &g_154;
static unsigned long long **g_450 = &g_451;
static unsigned short g_475 = 0xD415L;
static short g_495 = 0xFF60L;
static int g_502 = 0x4460A150L;
static unsigned long long g_513 = 0x74708B7C6C937C42LL;
static long long g_521 = (-1L);
static char g_536 = 0xE9L;
static unsigned char g_582 = 0UL;
static unsigned g_635 = 0UL;
static int *g_659 = &g_94;
static int *g_661 = &g_94;
static volatile int g_680 = 9L;
static volatile int *** const *g_700 = (void*)0;
static volatile int *** const **g_699 = &g_700;
static struct S0 g_731 = {19,0x9CE26886137561F9LL,-1,11149,514,56,-13982,7412,1357};
static volatile unsigned long long **g_820 = (void*)0;
static volatile unsigned long long *** const g_819 = &g_820;
static volatile unsigned long long *** const *g_818 = &g_819;
static unsigned char g_866 = 0x79L;
static unsigned g_926 = 0x3A2A2D49L;
static struct S0 *g_931 = &g_731;
static struct S0 **g_930 = &g_931;
static unsigned long long ***g_945 = &g_450;
static struct S1 g_950 = {248UL,2289,5L,0xA0L,0xAD988B54577E0D34LL};
static char g_986 = 0L;
static short g_1030 = 4L;
static short g_1036 = (-8L);
static const short **g_1083 = (void*)0;
static struct S1 g_1090 = {1UL,5622,0xBD3292FCL,0x75L,0x90FE8E7DECBB31AALL};
static const struct S1 *g_1105 = &g_329;
static const struct S1 **g_1104 = &g_1105;
static const struct S1 ***g_1103 = &g_1104;
static int ** const *g_1128 = (void*)0;
static int ** const **g_1127 = &g_1128;
static const int *g_1180 = &g_159;
static volatile unsigned long long g_1181 = 18446744073709551612UL;
static char *g_1199 = &g_329.f3;
static const volatile unsigned g_1251 = 0xCCF0C13EL;
static struct S0 g_1253 = {14,0x1AE07ECA770175A4LL,-1,9698,86,39,-26901,3914,2003};
static unsigned long long g_1330 = 7UL;
static unsigned char * const * const *g_1340 = (void*)0;
static char g_1454 = 0xBAL;
static int g_1461 = 1L;
static struct S0 g_1470 = {36,0UL,-0,932,1594,33,-13103,15289,2378};



static struct S0 func_1(void);
static unsigned long long func_4(long long p_5, short p_6, unsigned p_7, unsigned p_8);
static long long func_9(long long p_10, long long p_11, unsigned p_12, long long p_13, long long p_14);
static long long func_15(unsigned long long p_16, unsigned short p_17);
static unsigned short func_28(const int p_29);
static unsigned char func_32(long long p_33, unsigned p_34, unsigned char p_35, short p_36, char p_37);
static unsigned short func_41(const unsigned char p_42, int p_43, int p_44, const long long p_45, unsigned short p_46);
static unsigned func_47(int p_48, unsigned p_49, unsigned short p_50, unsigned p_51);
static unsigned long long func_70(int * p_71, unsigned short p_72, unsigned char p_73, const int p_74, short p_75);
static int * func_76(unsigned p_77, const int p_78, unsigned char p_79);
static struct S0 func_1(void)
{
    int l_21 = 0L;
    unsigned char *l_860 = &g_329.f0;
    unsigned char *l_865 = &g_866;
    unsigned long long l_867 = 0UL;
    int *l_1458 = (void*)0;
    int *l_1459 = (void*)0;
    int *l_1460 = &g_1461;
    int **l_1468 = (void*)0;
    int **l_1469 = &l_1460;
    (*l_1460) ^= ((safe_sub_func_uint64_t_u_u(func_4(func_9(func_15(g_18, (safe_lshift_func_int16_t_s_s((~((l_21 | (safe_lshift_func_uint8_t_u_s((!(!0x82L)), (safe_sub_func_int16_t_s_s((((g_18 & (safe_add_func_uint32_t_u_u((func_28(g_18) >= (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((*l_860) = g_299.f4), ((*l_865) = ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(l_21, 0)), 3)) ^ (((g_190 > l_21) <= l_21) & 0xE909L))))), 13)) < g_731.f4), l_21)) < l_21), l_21)), g_329.f4))), g_299.f0))) < g_731.f4) || g_513), l_21))))) <= l_867)), g_299.f0))), g_521, l_867, g_536, g_521), l_867, l_867, l_21), l_867)) != l_21);


    ;
    ;
    ;

    ;
    (*g_136) ^= ((*l_1460) || (*l_1460));
    (*l_1469) = l_1458;

    ;
    return g_1470;
}







static unsigned long long func_4(long long p_5, short p_6, unsigned p_7, unsigned p_8)
{
    unsigned char l_1192 = 0x44L;
    long long *l_1197 = (void*)0;
    long long *l_1198 = &g_521;
    char *l_1200 = &g_986;
    char **l_1201 = &l_1200;
    int l_1202 = 7L;
    const unsigned long long l_1203 = 0xFCE61409E25A14B5LL;
    struct S0 **l_1241 = &g_931;
    unsigned *l_1265 = (void*)0;
    int **l_1326 = (void*)0;
    struct S1 ** const l_1348 = &g_328;
    short *l_1434 = &g_1030;
    short **l_1433 = &l_1434;
    short ***l_1432 = &l_1433;
    int l_1453 = 8L;
    short l_1455 = 0x4EF9L;
    (**g_135) = l_1192;
lbl_1368:
    for (g_92 = 0; (g_92 >= 7); ++g_92)
    {
        for (p_7 = 22; (p_7 <= 13); p_7--)
        {
            return (**g_450);
        }
    }
    if (((((l_1202 &= func_47(l_1192, func_9(l_1192, ((*l_1198) = 0xE4A5199B7ADA9F35LL), p_6, g_329.f4, (g_18 = (((g_1199 = &g_986) == ((*l_1201) = l_1200)) >= (0xB45FL | func_28(p_6))))), g_299.f0, l_1192)) ^ p_8) >= l_1203) | l_1203))
    {
        long long l_1207 = 0x9A447F70DAA21C26LL;
        int * const **l_1230 = &g_260;
        struct S0 **l_1243 = &g_931;
        int l_1254 = 0L;
        int l_1319 = 3L;
        const short *l_1322 = &g_1036;
        const short **l_1321 = &l_1322;
        const unsigned char *l_1344 = &g_582;
        const unsigned char **l_1343 = &l_1344;
        const unsigned char ***l_1342 = &l_1343;
        unsigned long long l_1350 = 0xD012F502FCD9DAA3LL;
        int ***l_1371 = (void*)0;
        int ***l_1372 = (void*)0;
        int ***l_1373 = &l_1326;
        int *l_1374 = (void*)0;
        if ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(p_8)), (func_28(p_7) <= l_1207))))
        {
            short l_1210 = (-6L);
            int **l_1229 = &g_96;
            int ***l_1228 = &l_1229;
            int l_1244 = 0x848A98D6L;
            unsigned char *l_1256 = &g_866;
            unsigned l_1307 = 0x8461F85DL;
            unsigned long long **l_1327 = (void*)0;
lbl_1369:
            if ((safe_sub_func_int16_t_s_s(l_1210, (l_1207 || ((**g_450) ^ func_15((safe_add_func_int16_t_s_s(func_32((((void*)0 == &g_210) | 1L), p_6, p_6, (0x8536L & l_1207), l_1210), 1UL)), l_1210))))))
            {
                short l_1245 = 6L;
                int l_1246 = (-7L);
                int l_1247 = 0x62E20941L;
                struct S1 ****l_1250 = (void*)0;
                struct S0 *l_1252 = &g_1253;
                short l_1260 = (-10L);
                unsigned long long l_1295 = 0x0D7E6B666C490521LL;
                int *l_1312 = &l_1202;
                const short **l_1323 = &l_1322;
                const short l_1339 = 0x3D71L;
                if ((!((***g_259) = p_7)))
                {
                    long long l_1215 = (-1L);
                    char l_1222 = 1L;
                    long long *l_1225 = &l_1215;
                    long long *l_1226 = (void*)0;
                    long long *l_1227 = (void*)0;
                    int * const ***l_1231 = &l_1230;
                    unsigned *l_1233 = (void*)0;
                    unsigned **l_1232 = &l_1233;
                    int *l_1234 = &g_502;
                    (**g_260) |= (safe_mod_func_uint16_t_u_u(p_7, l_1215));
                    (***g_134) = (-1L);
                    if ((safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((((*l_1234) &= (((*l_1232) = func_76(l_1222, ((safe_sub_func_uint64_t_u_u(l_1207, (p_5 = ((*l_1225) &= ((*l_1198) = 5L))))) ^ ((l_1228 != ((*l_1231) = l_1230)) && 0x2BL)), p_6)) != (void*)0)) ^ 1L), 0UL)), 4294967289UL)), p_8)))
                    {
                        int **l_1235 = (void*)0;
                        int **l_1236 = &g_96;
                        const struct S0 *l_1240 = &g_731;
                        const struct S0 **l_1239 = &l_1240;
                        struct S0 ***l_1242 = (void*)0;
                        (*l_1236) = (**g_259);
                        l_1202 ^= (*g_96);
                        l_1247 &= (l_1246 |= (safe_rshift_func_int8_t_s_u(((~p_7) || ((*l_1225) = func_32(((((l_1239 = l_1239) != (l_1243 = l_1241)) != func_32((l_1244 & 1UL), g_299.f0, p_8, ((void*)0 == (*l_1232)), l_1202)) > p_5), p_8, p_8, g_635, l_1203))), l_1245)));
                    }
                    else
                    {
                        char l_1255 = 0x86L;
                        unsigned char *l_1257 = &g_866;
                        (***l_1228) = ((***l_1228) < ((safe_mod_func_uint64_t_u_u((l_1250 != (void*)0), g_1251)) <= (((void*)0 != l_1252) < ((l_1254 = p_7) >= l_1255))));
                        (***g_134) |= (((l_1256 != l_1257) != (*l_1234)) || (***l_1230));
                    }

                    ;
                    if ((safe_lshift_func_uint8_t_u_s(l_1260, (safe_lshift_func_uint8_t_u_s(0x1BL, ((safe_sub_func_uint32_t_u_u((l_1233 != l_1265), (safe_add_func_int16_t_s_s((p_7 > (safe_rshift_func_int8_t_s_s(p_8, 5))), g_101)))) != (safe_sub_func_int32_t_s_s((****l_1231), (((***g_134) < 3L) ^ 0x04C0682CL)))))))))
                    {
                        int *l_1272 = &l_1246;
                        unsigned long long *l_1293 = &g_513;
                        short *l_1294 = &g_495;
                        unsigned l_1296 = 0xA5C65B66L;
                        int *l_1297 = &l_1244;
                        (**l_1228) = l_1272;

                        ;
                        l_1234 = ((**l_1228) = func_76(p_6, (*g_96), (p_5 ^ (*g_1199))));

                        ;
                        ;
                        (*g_136) = (*g_1180);
                        (*l_1297) &= (safe_rshift_func_uint8_t_u_s((func_32((func_28(((((*l_1256) = (safe_rshift_func_int16_t_s_s(((func_32(p_5, g_502, ((((*l_1198) = ((safe_sub_func_int16_t_s_s(((*l_1294) = func_47(((safe_sub_func_int64_t_s_s((***l_1230), ((*l_1293) &= ((**g_450) = ((safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint16_t_u_u(((*g_1199) < (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((***g_134) && 0xF730C17FL), 4)), (safe_rshift_func_uint16_t_u_u((g_1253.f2 <= (***l_1230)), 6))))), (safe_add_func_uint32_t_u_u(p_7, p_8)))) ^ 5L) <= p_6) < (*g_1199)), 3)) <= (-1L)))))) >= 0x8143L), p_7, g_101, (***l_1228))), g_329.f3)) || 0x54L)) < p_6) ^ p_6), l_1295, (*g_1199)) >= g_1253.f5) >= 0xFAL), (*l_1272)))) && p_6) > g_1253.f2)) || 7L), l_1260, g_329.f0, l_1295, (*g_1199)) == l_1296), 1));
                    }
                    else
                    {
                        unsigned short *l_1304 = &g_121;
                        (*l_1229) = func_76((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((((*l_1304) = (safe_rshift_func_int8_t_s_u(p_6, 6))) < (safe_rshift_func_uint8_t_u_u(p_7, (l_1307 || (&g_94 != (void*)0))))), (safe_mod_func_int8_t_s_s(((*g_451) == p_6), (safe_add_func_int16_t_s_s(1L, (4294967295UL < 0xCF70D577L))))))), 7)), l_1203, p_8);
                        if (g_582)
                            goto lbl_1369;
                        (*l_1229) = l_1312;

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    short *l_1313 = &l_1260;
                    const int **l_1314 = &g_1180;
                    const int *l_1316 = &g_323;
                    const int **l_1315 = &l_1316;
                    const int *l_1318 = (void*)0;
                    const int **l_1317 = &l_1318;
                    (*l_1317) = ((*l_1315) = ((*l_1314) = func_76((((*l_1313) = p_8) > 0xD9A9L), (***l_1230), (g_329.f0 = ((*l_1256) &= (***l_1230))))));

                    ;
                    ;
                    ;
                    if (func_32(p_6, (p_5 < p_8), (((***l_1230) = 0x1DL) && p_5), (*l_1312), l_1319))
                    {
                        const unsigned char l_1320 = 0UL;
                        (**l_1228) = (void*)0;

                        ;
                        (**g_135) = (***g_134);
                        (*l_1312) = 0x0958A843L;
                        (*l_1314) = &l_1247;

                        ;
                    }
                    else
                    {
                        (*g_136) = 0xACDD2570L;
                    }

                    ;
                    ;
                }

                ;
                ;
                if ((l_1254 = (0xFEL != l_1192)))
                {
                    unsigned char * const * const **l_1341 = &g_1340;
                    int l_1345 = 0x32F889CBL;
                    char l_1346 = 4L;
lbl_1347:
                    (**g_135) = p_8;
                    (**g_135) = (safe_add_func_int32_t_s_s((g_1330 || (safe_mul_func_uint16_t_u_u(func_15((safe_mul_func_uint8_t_u_u((1L <= (safe_mod_func_int32_t_s_s(0L, 0x6D702BFEL))), (l_1202 || (safe_mod_func_uint16_t_u_u(l_1339, g_190))))), (((*l_1341) = g_1340) != l_1342)), l_1345))), l_1346));
                    if (g_66)
                        goto lbl_1347;
                }
                else
                {
                    unsigned char l_1349 = 0x18L;
                    l_1349 = ((void*)0 != l_1348);
                }
                (*l_1312) = l_1350;
            }
            else
            {
                for (g_582 = 23; (g_582 > 49); g_582 = safe_add_func_int16_t_s_s(g_582, 6))
                {
                    unsigned l_1362 = 18446744073709551610UL;
                    for (l_1202 = 0; (l_1202 > 20); ++l_1202)
                    {
                        short *l_1359 = &g_1036;
                        int l_1360 = 0x4318C572L;
                        unsigned *l_1361 = &g_635;
                        int *l_1367 = &g_502;
                        (*l_1367) |= (((safe_lshift_func_int16_t_s_s(((*l_1359) = (safe_sub_func_uint8_t_u_u(0x24L, p_5))), 0)) >= l_1192) != func_70(func_76(g_1251, func_47(l_1360, ((*l_1361) = 0x864E1A0AL), l_1362, (safe_mul_func_uint16_t_u_u(p_8, (safe_mod_func_uint16_t_u_u(p_5, g_582))))), l_1362), p_7, p_7, p_7, l_1360));
                        if (g_521)
                            goto lbl_1368;
                    }
                    (**l_1229) ^= 0xA4A781A6L;
                    return (***g_945);
                }
                (**l_1229) = (*g_1180);
            }

            ;

            l_1254 = p_5;
        }
        else
        {
            struct S1 *l_1370 = (void*)0;
            (*g_1104) = l_1370;

            ;
        }

        ;
        ;

        (*l_1373) = l_1326;
        l_1374 = (**l_1230);

        ;
    }
    else
    {
        const int l_1375 = 0x51049BF4L;
        unsigned long long l_1381 = 3UL;
        int l_1419 = 0x83149A6EL;
        int **l_1437 = &g_96;
        unsigned char *l_1445 = &g_231;
        unsigned short *l_1446 = &g_475;
        int *l_1456 = &l_1453;
        int l_1457 = 0x68F4B80EL;
        if (((l_1203 <= g_731.f8) > l_1375))
        {
            return p_5;
        }
        else
        {
            unsigned long long l_1378 = 0xD82742FF1DD5B4D0LL;
            int l_1382 = 0x8AEBD41DL;
            int l_1383 = 0L;
            int l_1384 = 0x65BAF9B7L;
            struct S1 ***l_1388 = &g_446;
            struct S1 ****l_1387 = &l_1388;
            const unsigned *l_1391 = &g_635;
            unsigned l_1398 = 0UL;
            unsigned l_1406 = 0x22F3B06CL;
            int l_1413 = 0L;
            short *l_1430 = &g_1036;
            short **l_1429 = &l_1430;
            short ***l_1428 = &l_1429;
            (***g_134) = (safe_lshift_func_uint16_t_u_u(65528UL, (l_1384 |= (l_1383 &= ((((l_1378 = 0UL) | (safe_mod_func_uint64_t_u_u(p_7, func_9(l_1381, g_1253.f4, l_1375, p_8, l_1382)))) && (-1L)) >= g_731.f5)))));
            if (((safe_add_func_int32_t_s_s((((&g_446 != ((*l_1387) = (void*)0)) & ((safe_add_func_int8_t_s_s((l_1391 == &g_635), p_6)) ^ (safe_sub_func_uint8_t_u_u(p_7, p_7)))) > func_15((safe_sub_func_uint16_t_u_u((+(((safe_sub_func_int16_t_s_s(func_47(l_1375, (l_1398 & p_7), l_1375, g_1090.f4), 4UL)) > p_8) & 1UL)), g_1251)), l_1381)), (-1L))) ^ 0UL))
            {
                unsigned l_1411 = 1UL;
                unsigned short *l_1412 = &g_121;
                int l_1414 = 0L;
                int **l_1420 = &g_96;
                l_1414 |= func_47((safe_mod_func_uint32_t_u_u(0xE8C3D036L, (safe_unary_minus_func_int8_t_s((((**l_1201) = (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((l_1406 <= func_70(func_76((((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((1L | func_15(l_1411, ((*l_1412) &= ((((void*)0 != &g_254) || (((void*)0 != l_1265) ^ p_5)) < 3L)))) >= p_6), g_1253.f2)), (*g_1199))) ^ g_66) != p_7), (***g_259), g_731.f4), p_8, l_1411, l_1192, g_190)) > 1L), l_1192)) == l_1192), l_1378))) & 0xCBL))))), g_513, l_1411, l_1413);
                (**g_135) = ((safe_lshift_func_int16_t_s_s(p_7, (l_1419 = func_15(l_1411, (safe_lshift_func_int8_t_s_u(func_9((l_1202 && 3UL), p_5, (p_5 | l_1378), l_1381, p_6), l_1381)))))) < l_1203);
                (*l_1420) = &l_1202;

                ;
            }
            else
            {
                const int *l_1425 = (void*)0;
                short ****l_1431 = &l_1428;
                (***g_259) ^= (safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((void*)0 == l_1425), g_582)) != (l_1382 |= (0UL == (0xCCL && (((*l_1431) = l_1428) == l_1432))))), (safe_sub_func_int32_t_s_s(p_8, g_443))));
            }

            ;
            ;
        }

        ;
        (*l_1437) = &l_1202;

        ;
        l_1457 = ((*l_1456) &= func_15(((**g_450) = (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_u(((*g_1199) = func_41(p_6, l_1202, (l_1419 = ((0L ^ ((safe_sub_func_uint8_t_u_u(l_1192, p_8)) > (*g_1199))) & p_5)), p_7, l_1202)), l_1192)))), p_8))), l_1455));

        ;
    }

    ;
    ;

    ;
    return p_8;


}







static long long func_9(long long p_10, long long p_11, unsigned p_12, long long p_13, long long p_14)
{
    struct S1 *l_954 = (void*)0;
    int l_973 = 0L;
    int l_1020 = 6L;
    const unsigned long long l_1076 = 18446744073709551615UL;
    int ***l_1077 = (void*)0;
    unsigned char **l_1080 = &g_210;
    unsigned long long **l_1149 = &g_451;
    short ** const *l_1182 = (void*)0;
    long long *l_1187 = &g_521;
    for (g_66 = 0; (g_66 <= (-10)); g_66 = safe_sub_func_int16_t_s_s(g_66, 5))
    {
        struct S1 **l_955 = (void*)0;
        struct S1 **l_956 = &g_328;
        int l_962 = 1L;
        (*l_956) = l_954;

        ;
        for (g_866 = 0; (g_866 >= 2); g_866++)
        {
            char l_961 = 1L;
            for (g_635 = 0; (g_635 < 60); g_635 = safe_add_func_int32_t_s_s(g_635, 8))
            {
                unsigned l_969 = 0x61C9941DL;
                int *l_970 = (void*)0;
                int l_971 = 1L;
                int *l_972 = (void*)0;
                struct S1 ***l_976 = &l_956;
                l_973 ^= (l_971 ^= ((((**g_450) = (l_962 = (((l_961 || (p_11 ^ 0x65D782CBL)) != (g_950.f2 <= (-1L))) && 0UL))) == 0L) && ((safe_sub_func_uint8_t_u_u((g_521 > ((func_15(((**g_450) &= (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_10, (-1L))), p_13))), p_11) & p_12) ^ l_961)), 0x47L)) <= l_969)));
                for (l_961 = (-10); (l_961 != (-15)); l_961--)
                {
                    (***g_134) = (p_10 < p_10);
                }
                (**g_135) = l_961;
                (*l_976) = &l_954;

                ;
            }
        }

        ;
    }
    return p_10;
}







static long long func_15(unsigned long long p_16, unsigned short p_17)
{
    int l_870 = 0xF1AA9032L;
    int ***l_871 = (void*)0;
    int *l_872 = (void*)0;
    int l_873 = 0x174E1EFDL;
    int **l_874 = &g_96;
    struct S0 *l_897 = &g_731;
    const unsigned l_924 = 0UL;
    struct S1 *l_949 = &g_950;
    return g_141.f7;
}







static unsigned short func_28(const int p_29)
{
    unsigned char l_38 = 0xD2L;
    int l_64 = (-1L);
    int *l_65 = &g_66;
    unsigned short *l_474 = &g_475;
    unsigned l_849 = 0x5BDC27FBL;
    (*l_65) = (safe_mod_func_uint8_t_u_u(func_32(p_29, p_29, l_38, (safe_mul_func_int16_t_s_s(g_18, ((*l_474) ^= func_41((g_18 == func_47(p_29, (p_29 < (((*l_65) = ((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0x132F4BB0L, (((safe_lshift_func_int8_t_s_u(((l_38 > g_18) != g_18), 5)) == g_18) ^ 0x32C2674DL))), 0)), g_18)) > 0x9FF40B36L), 6)), l_38)) && g_18) && 0xA1EDE5A1AE281B1DLL) & l_64)) <= p_29)), g_18, p_29)), g_18, g_18, g_18, g_18)))), p_29), l_849));

    ;
    (*g_96) = (*g_96);
    return g_731.f1;
}







static unsigned char func_32(long long p_33, unsigned p_34, unsigned char p_35, short p_36, char p_37)
{
    int *l_478 = &g_66;
    unsigned *l_479 = &g_228;
    unsigned l_482 = 1UL;
    struct S1 *l_483 = &g_299;
    short *l_499 = &g_495;
    int * const l_501 = &g_502;
    int * const *l_500 = &l_501;
    long long l_576 = 0L;
    short l_585 = 0x5F76L;
    char l_586 = 0xC8L;
    int *l_587 = (void*)0;
    int *l_588 = &g_159;
    int **l_589 = (void*)0;
    int **l_590 = &l_478;
    unsigned l_603 = 1UL;
    int *l_660 = &g_94;
    unsigned long long l_761 = 0x062E5DA5D3A0E3ADLL;
    unsigned char l_808 = 247UL;
    unsigned long long ** const *l_817 = &g_450;
    unsigned long long ** const **l_816 = &l_817;
    const unsigned short l_841 = 1UL;
    if ((+(safe_sub_func_uint32_t_u_u((l_478 == (g_96 = &g_125)), ((*l_479) = g_299.f3)))))
    {
        char *l_480 = &g_329.f3;
        int l_481 = 1L;
        struct S1 *l_484 = &g_299;
        const int ****l_542 = (void*)0;
        int ***l_545 = (void*)0;
        int ****l_544 = &l_545;
        l_482 = ((g_101 = ((*l_480) = 0L)) & l_481);
        l_483 = l_483;
    }
    else
    {
        (*l_478) &= (safe_mul_func_int8_t_s_s(g_92, g_125));
    }

    ;
    (*l_590) = func_76(p_33, ((*l_588) ^= (p_35 ^ (func_47(((!(func_47(p_37, (safe_add_func_uint64_t_u_u(18446744073709551613UL, (**g_450))), (**l_500), g_582) && ((**g_260) &= ((safe_add_func_int32_t_s_s((*l_501), (*g_136))) >= l_585)))) | l_586), g_204, p_34, g_502) ^ g_231))), p_33);

    ;
    (**l_500) = (safe_unary_minus_func_int32_t_s(((((*l_499) ^= (**l_500)) > ((g_582 &= (*l_478)) | 5L)) == p_37)));
    for (g_151 = 13; (g_151 >= 57); g_151 = safe_add_func_int16_t_s_s(g_151, 9))
    {
        int l_596 = 0xFAC736F4L;
        int l_604 = 0xF66DD1DAL;
        unsigned long long *l_605 = (void*)0;
        int l_606 = 0x828C489FL;
        int ** const *l_655 = &l_590;
        int ** const **l_654 = &l_655;
        int ** const ***l_653 = &l_654;
        struct S1 *l_666 = &g_299;
        int *l_760 = (void*)0;
        int ***l_779 = (void*)0;
    }
    return p_36;
}







static unsigned short func_41(const unsigned char p_42, int p_43, int p_44, const long long p_45, unsigned short p_46)
{
    short l_145 = 1L;
    int l_157 = 0L;
    long long l_174 = 0xD7E73FBCBB49EDB2LL;
    char l_189 = 0xD8L;
    const long long l_191 = 0x3CBDCB88E3999123LL;
    const unsigned l_192 = 0x6A2F1C6AL;
    int *l_211 = &g_159;
    unsigned *l_226 = &g_204;
    unsigned *l_227 = &g_228;
    unsigned char *l_229 = &g_92;
    unsigned char *l_230 = &g_231;
    const char l_232 = 0x3EL;
    unsigned short l_233 = 6UL;
    unsigned short *l_234 = &g_235;
    unsigned long long *l_289 = &g_151;
    unsigned long long l_291 = 0x8EEF4AF958129354LL;
    unsigned long long l_382 = 0UL;
    const unsigned l_425 = 0x86035EBBL;
    int l_433 = 0x15EBB02EL;
    unsigned char l_447 = 5UL;
    struct S1 *l_471 = &g_329;
    for (p_43 = (-17); (p_43 != (-5)); ++p_43)
    {
        unsigned long long l_163 = 0x19E5FB73896F98B6LL;
        unsigned char *l_175 = &g_92;
        for (g_66 = (-2); (g_66 == (-25)); --g_66)
        {
            volatile struct S0 *l_140 = &g_141;
            int *l_156 = &g_125;
            int *l_158 = &g_159;
            if (p_42)
            {
                if ((safe_lshift_func_uint16_t_u_u(65530UL, 13)))
                {
                    int *l_132 = &g_125;
                    int **l_133 = &g_96;
                    (*l_132) &= p_46;
                    (*l_133) = &g_125;

                    ;
                    (**g_135) = ((void*)0 != g_134);
                    (*g_135) = (**g_134);
                }
                else
                {
                    if (p_44)
                        break;
                }
            }
            else
            {
                unsigned char l_142 = 0x32L;
                unsigned long long *l_150 = &g_151;
                unsigned long long *l_152 = (void*)0;
                unsigned long long *l_153 = &g_154;
                int l_155 = 1L;
                l_140 = g_138;

                ;
                l_155 |= (g_139.f8 ^ (l_142 >= ((safe_lshift_func_uint16_t_u_s(g_92, (((l_145 ^ p_46) & g_125) >= (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((*l_150) ^= g_101) <= (~((*l_153) = p_46))), l_142)), 0x10B7L))))) || p_43)));
            }

            ;
            (**g_135) = ((*l_158) ^= ((l_157 |= (0xB7619C58L | ((*l_156) |= p_44))) == g_139.f1));
        }


        if (func_47(((*g_96) = ((((safe_unary_minus_func_int16_t_s(0L)) >= func_70(&l_157, g_139.f7, (safe_add_func_int8_t_s_s(l_163, ((*l_175) |= (((safe_add_func_uint16_t_u_u(p_43, ((p_45 || (p_43 >= (safe_add_func_int8_t_s_s((l_174 ^= (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((l_157 |= ((((safe_mod_func_uint8_t_u_u(0xBAL, 255UL)) | 0x09L) | 1UL) == 18446744073709551615UL)), g_121)), l_163))), g_125)))) & 18446744073709551613UL))) && 0x4E3CA85FL) == g_66)))), p_44, p_46)) > g_66) | l_145)), g_154, p_42, g_154))
        {
            int **l_180 = &g_96;
            (*l_180) = func_76(((safe_mod_func_uint8_t_u_u(func_70(func_76(p_45, ((g_139.f3 ^ ((0x442EL ^ (safe_add_func_uint16_t_u_u(func_47((func_70(((*l_180) = &p_44), g_18, (safe_mul_func_int16_t_s_s(p_45, (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(1UL, (safe_sub_func_uint64_t_u_u((0xD494L ^ (p_45 >= p_42)), l_163)))), g_18)))), l_157, l_189) != p_46), g_18, l_163, l_163), g_18))) && l_163)) == l_145), p_42), g_190, p_43, l_191, g_151), 3L)) || p_46), l_192, p_46);
            if ((safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s(func_47(l_174, p_45, (((*l_175) = p_46) || p_44), (**l_180)), (l_174 && (g_139.f6 && ((!(~(0xF30B2769L >= g_139.f4))) | p_45))))), p_42)))
            {
                unsigned long long *l_201 = &g_154;
                unsigned *l_202 = (void*)0;
                unsigned *l_203 = &g_204;
                unsigned long long l_205 = 9UL;
                (*g_96) |= (((**g_135) != ((*l_203) = (safe_lshift_func_int16_t_s_u(((-1L) < p_42), (safe_add_func_uint8_t_u_u(1UL, (p_43 >= ((*l_201) = (0x5502811D3E0DDAC5LL != 0x1FDE09C777C127BBLL))))))))) | (l_163 < (p_46 ^= l_205)));
                (*g_135) = (**g_134);
            }
            else
            {
                unsigned char **l_209 = (void*)0;
                for (l_189 = 8; (l_189 >= (-9)); l_189 = safe_sub_func_uint16_t_u_u(l_189, 9))
                {
                    int *l_208 = &g_125;
                    p_44 &= ((*l_208) = ((*g_96) = ((&l_180 != (void*)0) < g_139.f2)));
                    return l_192;
                }
                (***g_134) = ((**l_180) = ((g_210 = l_175) == &p_42));

                ;
                p_44 |= 1L;
            }
        }
        else
        {
            (*g_135) = (*g_135);
            (***g_134) = p_44;
            return l_174;
        }

        ;
        return l_163;
    }
    (*l_211) ^= ((*g_96) = (**g_135));
    if ((((*l_234) ^= ((safe_add_func_int16_t_s_s(p_43, 65535UL)) <= (safe_add_func_uint64_t_u_u(func_70(func_76(((safe_add_func_uint16_t_u_u((!(safe_lshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(((*l_230) ^= ((*l_229) |= (((*l_211) = p_44) != ((*l_227) = ((*l_226) = (safe_lshift_func_uint8_t_u_s(g_139.f5, g_121))))))), ((void*)0 == &p_42))) ^ g_101), p_42)), p_43))), 7L)) & 0L), p_43, l_192), p_45, l_192, l_232, l_233), g_154)))) || 1UL))
    {
        short l_238 = 0xB9DDL;
        int l_239 = 8L;
        unsigned *l_361 = &g_228;
        const int *l_372 = (void*)0;
        const int **l_371 = &l_372;
        const int *l_374 = &g_323;
        const int **l_373 = &l_374;
        l_239 = (safe_mod_func_int8_t_s_s((g_101 &= g_94), l_238));
        for (g_235 = 0; (g_235 < 13); g_235 = safe_add_func_uint32_t_u_u(g_235, 8))
        {
            unsigned long long l_256 = 0UL;
            int * const ***l_261 = &g_259;
            int **l_263 = (void*)0;
            int *** const l_262 = &l_263;
            struct S1 *l_298 = &g_299;
            unsigned *l_362 = &g_228;
            for (l_174 = 13; (l_174 >= (-3)); l_174 = safe_sub_func_int16_t_s_s(l_174, 7))
            {
                (***g_134) = ((p_46 ^ g_92) == (safe_sub_func_int64_t_s_s(p_44, g_141.f5)));
                if ((**g_135))
                    continue;
                (***g_134) ^= p_44;
            }
            (*l_211) = func_70(&p_44, (safe_lshift_func_int16_t_s_s((*l_211), 3)), (safe_sub_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u(l_238, (safe_sub_func_uint8_t_u_u(g_254, (((safe_unary_minus_func_int64_t_s(g_125)) > (l_256 ^ (*l_211))) | ((safe_mod_func_uint16_t_u_u(4UL, g_154)) == g_235)))))) <= p_45), 0x44F0F885C304239ELL)), l_239, g_159);
            if ((((*l_261) = g_259) != l_262))
            {
                const int *l_272 = &l_157;
                for (g_66 = 0; (g_66 >= 0); ++g_66)
                {
                    int l_269 = 0x22B181F6L;
                    (*g_135) = (**g_134);
                    for (g_159 = 0; (g_159 <= 5); g_159++)
                    {
                        int *l_268 = &l_239;
                        (***g_134) = ((*l_268) = p_43);
                        (*l_268) ^= p_42;
                        return l_269;
                    }
                    for (l_145 = (-11); (l_145 <= (-8)); l_145 = safe_add_func_int64_t_s_s(l_145, 8))
                    {
                        const int **l_273 = &l_272;
                        (*l_273) = l_272;
                        (***g_134) = (safe_sub_func_uint8_t_u_u(0xD0L, (g_204 == ((*l_230) &= (g_139.f3 == ((l_269 | g_92) != ((p_45 >= p_46) > (+((p_42 == p_43) & 0xD77CBA12L)))))))));
                    }
                    l_239 = l_269;
                }
            }
            else
            {
                unsigned char l_284 = 0xCBL;
                int l_290 = 9L;
                int ***l_325 = &l_263;
                int ****l_324 = &l_325;
                struct S1 *l_327 = (void*)0;
                unsigned l_330 = 1UL;
                long long *l_369 = (void*)0;
                long long *l_370 = &l_174;
                if ((((safe_lshift_func_int8_t_s_u(((0xA307C161L <= (safe_rshift_func_uint8_t_u_u((g_139.f7 || (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((void*)0 != &g_151), ((func_47((**g_135), (((l_284 | (safe_rshift_func_int8_t_s_u(((p_43 != (safe_mul_func_uint16_t_u_u((l_289 == (void*)0), 0xD92FL))) & 18446744073709551610UL), 6))) | p_43) && (****l_261)), l_290, g_235) || g_141.f1) | p_43))), p_43))), 1))) >= 2UL), 0)) == g_18) && g_139.f5))
                {
                    int l_292 = 0x4F4C75CBL;
                    if (((*l_211) = func_70(func_76(func_47((g_141.f6 > g_121), p_42, p_45, l_291), p_43, l_239), p_45, l_292, g_235, l_290)))
                    {
                        (*g_96) = (***g_259);
                    }
                    else
                    {
                        unsigned l_297 = 4294967294UL;
                        struct S1 **l_300 = (void*)0;
                        struct S1 **l_301 = &l_298;
                        (****l_261) = ((255UL != (p_42 & l_238)) < (l_292 &= (safe_sub_func_int32_t_s_s(0x389C257DL, (!(safe_mod_func_uint64_t_u_u(l_297, g_66)))))));
                        (*l_301) = l_298;
                    }
                    if (p_44)
                        break;
                    p_44 ^= p_46;
                }
                else
                {
                    const unsigned char *l_315 = &l_284;
                    const unsigned char ** const l_314 = &l_315;
                    int l_316 = 1L;
                    int l_317 = 0x1C10D48CL;
                    int *l_331 = (void*)0;
                    if ((safe_mul_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((p_46 == (((((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(p_43, ((p_43 | ((void*)0 != &p_43)) <= g_139.f2))), ((*g_96) = (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((l_316 = ((*l_230) = ((*l_229) = ((1UL == l_238) <= ((l_314 != &g_210) <= g_121))))), l_290)), g_125))))) <= g_154) < l_317) || p_44) | g_299.f3)), p_45)) != p_44), p_46)))
                    {
                        unsigned char l_320 = 0xA6L;
                        const int *l_322 = &g_323;
                        const int **l_321 = &l_322;
                        int *****l_326 = &l_324;
                        long long *l_334 = &l_174;
                        const short l_343 = (-3L);
                        unsigned short *l_344 = &l_233;
                        l_331 = func_76(g_137, (l_330 ^= func_70(func_76((*l_211), ((safe_mul_func_int16_t_s_s(l_320, g_154)) != ((((*l_321) = &g_159) == &l_157) || (+((*l_230) = (&l_262 == ((*l_326) = l_324)))))), ((l_327 == g_328) && g_228)), g_329.f1, p_46, l_317, g_154)), p_45);

                        ;
                        ;
                        (****l_261) |= (l_238 | ((*l_334) = ((safe_rshift_func_uint8_t_u_u(((*l_230) = p_43), p_42)) <= g_299.f2)));
                        if (p_46)
                            continue;
                        (***g_134) = ((***g_134) ^ ((((safe_rshift_func_int16_t_s_u(g_66, p_43)) | g_204) && 0x25L) || func_47(l_238, p_46, ((*l_344) |= func_47(((***g_259) = (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((5UL <= (safe_add_func_int64_t_s_s(((((*l_334) &= l_238) <= g_329.f1) & l_343), 18446744073709551615UL))) ^ g_154), g_323)), 0))), g_204, l_238, (*l_322))), p_44)));
                    }
                    else
                    {
                        (*g_136) |= ((*l_211) < (safe_lshift_func_int16_t_s_u(g_299.f4, 9)));
                        (**g_135) &= (***g_259);
                    }

                    ;
                    if ((0x53062A9CC61E1678LL >= 0x761AD2B9B8245335LL))
                    {
                        (*l_211) = p_42;
                        (*g_136) &= ((***g_259) = ((l_239 = (((void*)0 != &g_259) | 7L)) & (safe_rshift_func_int8_t_s_s(p_46, g_231))));
                        if ((**g_135))
                            break;
                    }
                    else
                    {
                        struct S1 **l_351 = &l_327;
                        const int l_358 = 0xD315BEF1L;
                        (**g_135) = 0x007F4A1FL;
                        (*l_211) = ((safe_rshift_func_int8_t_s_s(((void*)0 == l_351), 6)) | func_47(p_45, (safe_sub_func_uint64_t_u_u(0x71DFE0E36B671416LL, ((void*)0 == (**g_259)))), (p_46 = func_70(&g_159, p_46, (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(1UL, g_231)), g_141.f1)), l_358, p_43)), g_299.f1));
                    }
                    (*l_211) = (***g_134);
                }
                (***g_134) = ((safe_rshift_func_uint8_t_u_u((l_361 != l_362), 7)) <= ((((p_44 = p_43) >= 3UL) || (((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((p_46 != (safe_mul_func_uint8_t_u_u(0xD0L, ((((!l_239) || (((g_299.f1 <= ((*l_370) |= (p_45 & g_101))) ^ p_42) < g_299.f0)) > 0xF5DEL) == p_43)))) == 0x55CEL), 4294967295UL)) == l_239), g_190)) > p_42) < 0xAA03L)) > p_43));
                return g_94;
            }
        }
        (*l_373) = ((*l_371) = &p_43);

        ;
        ;
    }
    else
    {
        short l_383 = (-1L);
        char l_384 = (-3L);
        int *l_407 = &g_159;
        unsigned long long l_422 = 9UL;
        unsigned char *l_444 = &g_329.f0;
        for (l_233 = 0; (l_233 <= 37); l_233 = safe_add_func_int16_t_s_s(l_233, 4))
        {
            unsigned char l_379 = 6UL;
            long long *l_385 = &l_174;
            int **l_408 = &g_96;
            unsigned char *l_445 = (void*)0;
            struct S1 *l_469 = &g_299;
            if (((*l_211) = (safe_add_func_int32_t_s_s(func_47(l_379, (g_204 < ((safe_rshift_func_uint16_t_u_u(((p_42 & (((l_382 & l_383) <= (((*l_385) = l_384) | (safe_mod_func_uint32_t_u_u(g_141.f5, (((*l_289) = ((safe_rshift_func_uint16_t_u_s(1UL, 7)) || g_101)) || 18446744073709551612UL))))) > p_42)) == p_46), 10)) != 8L)), l_379, p_43), p_46))))
            {
                unsigned char l_398 = 0x1BL;
                p_44 ^= (safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u(l_398, ((p_45 == (safe_rshift_func_int8_t_s_u(0xFAL, 0))) ^ (0UL == (0xF664L ^ (((safe_sub_func_int8_t_s_s((((*l_385) ^= 0x4021CE862B212A1BLL) >= p_43), (safe_lshift_func_int8_t_s_u(g_139.f4, 7)))) < p_43) && p_43)))))), g_66)), p_46)), p_45));
            }
            else
            {
                (***g_134) = (safe_sub_func_int64_t_s_s(7L, 0xFBDE79FB1DFDDE1CLL));
            }
        }
    }

    ;
    (*g_96) = (**g_135);
    return (*l_211);
}







static unsigned func_47(int p_48, unsigned p_49, unsigned short p_50, unsigned p_51)
{
    int l_67 = 0L;
    int **l_104 = &g_96;
    int *l_123 = &g_66;
    int *l_124 = &g_125;
    (*l_123) = (l_67 != (safe_mod_func_uint64_t_u_u(func_70(&g_66, l_67, ((((*l_104) = func_76(p_49, (p_48 < (safe_mul_func_uint16_t_u_u((&g_66 == (void*)0), p_48))), l_67)) == &p_48) && 8L), g_18, p_48), p_48)));

    ;
    (*l_124) &= ((*l_123) < (((-3L) <= (&g_92 != &g_92)) < (&g_121 != &g_121)));
    return g_101;
}







static unsigned long long func_70(int * p_71, unsigned short p_72, unsigned char p_73, const int p_74, short p_75)
{
    int l_109 = 0x9644A59AL;
    (*p_71) &= 0xEA11AD51L;
    for (g_92 = 24; (g_92 <= 18); g_92 = safe_sub_func_int32_t_s_s(g_92, 9))
    {
        int **l_110 = (void*)0;
        int ***l_111 = &l_110;
        char *l_112 = &g_101;
        unsigned short *l_119 = (void*)0;
        unsigned short *l_120 = &g_121;
        int l_122 = 0xCDB5163BL;
        l_122 ^= ((8UL >= (safe_add_func_uint64_t_u_u(l_109, (((((*l_111) = l_110) != (void*)0) != ((((*l_112) = p_74) | p_75) >= p_74)) != (safe_add_func_uint16_t_u_u(((*l_120) = (safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(g_92, p_74)) > g_66), p_74))), p_74)))))) == g_94);
    }
    return g_66;
}







static int * func_76(unsigned p_77, const int p_78, unsigned char p_79)
{
    char *l_100 = &g_101;
    int l_102 = (-2L);
    int **l_103 = &g_96;
    for (p_79 = 29; (p_79 >= 27); --p_79)
    {
        int l_84 = 0x4B57DC51L;
        int *l_86 = &g_66;
        int **l_85 = &l_86;
        if (l_84)
            break;
        (*l_85) = (void*)0;

        ;
        if (p_78)
        {
            const int *l_88 = &g_66;
            const int **l_87 = &l_88;
            unsigned char *l_91 = &g_92;
            int *l_93 = (void*)0;
            int l_95 = 0x680AE02FL;
            (*l_87) = &p_78;

            ;
            g_94 ^= (g_66 < (safe_add_func_int8_t_s_s(g_18, ((*l_91) |= 0x6AL))));
            l_95 = ((g_94 <= 1UL) & 3UL);
        }
        else
        {
            g_96 = &g_66;

            ;
            if (p_79)
                continue;
        }
        (*l_85) = (*l_85);
    }
    (*g_96) = (safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_s((((((*l_100) = g_94) == (5L == l_102)) ^ g_18) > l_102), 1))));
    (*g_96) |= (-8L);
    (*l_103) = &g_66;

    ;
    return (*l_103);


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_139.f1, "g_139.f1", print_hash_value);
    transparent_crc(g_139.f2, "g_139.f2", print_hash_value);
    transparent_crc(g_139.f3, "g_139.f3", print_hash_value);
    transparent_crc(g_139.f4, "g_139.f4", print_hash_value);
    transparent_crc(g_139.f5, "g_139.f5", print_hash_value);
    transparent_crc(g_139.f6, "g_139.f6", print_hash_value);
    transparent_crc(g_139.f7, "g_139.f7", print_hash_value);
    transparent_crc(g_139.f8, "g_139.f8", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_141.f1, "g_141.f1", print_hash_value);
    transparent_crc(g_141.f2, "g_141.f2", print_hash_value);
    transparent_crc(g_141.f3, "g_141.f3", print_hash_value);
    transparent_crc(g_141.f4, "g_141.f4", print_hash_value);
    transparent_crc(g_141.f5, "g_141.f5", print_hash_value);
    transparent_crc(g_141.f6, "g_141.f6", print_hash_value);
    transparent_crc(g_141.f7, "g_141.f7", print_hash_value);
    transparent_crc(g_141.f8, "g_141.f8", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_299.f0, "g_299.f0", print_hash_value);
    transparent_crc(g_299.f1, "g_299.f1", print_hash_value);
    transparent_crc(g_299.f2, "g_299.f2", print_hash_value);
    transparent_crc(g_299.f3, "g_299.f3", print_hash_value);
    transparent_crc(g_299.f4, "g_299.f4", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_329.f0, "g_329.f0", print_hash_value);
    transparent_crc(g_329.f1, "g_329.f1", print_hash_value);
    transparent_crc(g_329.f2, "g_329.f2", print_hash_value);
    transparent_crc(g_329.f3, "g_329.f3", print_hash_value);
    transparent_crc(g_329.f4, "g_329.f4", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_731.f0, "g_731.f0", print_hash_value);
    transparent_crc(g_731.f1, "g_731.f1", print_hash_value);
    transparent_crc(g_731.f2, "g_731.f2", print_hash_value);
    transparent_crc(g_731.f3, "g_731.f3", print_hash_value);
    transparent_crc(g_731.f4, "g_731.f4", print_hash_value);
    transparent_crc(g_731.f5, "g_731.f5", print_hash_value);
    transparent_crc(g_731.f6, "g_731.f6", print_hash_value);
    transparent_crc(g_731.f7, "g_731.f7", print_hash_value);
    transparent_crc(g_731.f8, "g_731.f8", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    transparent_crc(g_926, "g_926", print_hash_value);
    transparent_crc(g_950.f0, "g_950.f0", print_hash_value);
    transparent_crc(g_950.f1, "g_950.f1", print_hash_value);
    transparent_crc(g_950.f2, "g_950.f2", print_hash_value);
    transparent_crc(g_950.f3, "g_950.f3", print_hash_value);
    transparent_crc(g_950.f4, "g_950.f4", print_hash_value);
    transparent_crc(g_986, "g_986", print_hash_value);
    transparent_crc(g_1030, "g_1030", print_hash_value);
    transparent_crc(g_1036, "g_1036", print_hash_value);
    transparent_crc(g_1090.f0, "g_1090.f0", print_hash_value);
    transparent_crc(g_1090.f1, "g_1090.f1", print_hash_value);
    transparent_crc(g_1090.f2, "g_1090.f2", print_hash_value);
    transparent_crc(g_1090.f3, "g_1090.f3", print_hash_value);
    transparent_crc(g_1090.f4, "g_1090.f4", print_hash_value);
    transparent_crc(g_1181, "g_1181", print_hash_value);
    transparent_crc(g_1251, "g_1251", print_hash_value);
    transparent_crc(g_1253.f0, "g_1253.f0", print_hash_value);
    transparent_crc(g_1253.f1, "g_1253.f1", print_hash_value);
    transparent_crc(g_1253.f2, "g_1253.f2", print_hash_value);
    transparent_crc(g_1253.f3, "g_1253.f3", print_hash_value);
    transparent_crc(g_1253.f4, "g_1253.f4", print_hash_value);
    transparent_crc(g_1253.f5, "g_1253.f5", print_hash_value);
    transparent_crc(g_1253.f6, "g_1253.f6", print_hash_value);
    transparent_crc(g_1253.f7, "g_1253.f7", print_hash_value);
    transparent_crc(g_1253.f8, "g_1253.f8", print_hash_value);
    transparent_crc(g_1330, "g_1330", print_hash_value);
    transparent_crc(g_1454, "g_1454", print_hash_value);
    transparent_crc(g_1461, "g_1461", print_hash_value);
    transparent_crc(g_1470.f0, "g_1470.f0", print_hash_value);
    transparent_crc(g_1470.f1, "g_1470.f1", print_hash_value);
    transparent_crc(g_1470.f2, "g_1470.f2", print_hash_value);
    transparent_crc(g_1470.f3, "g_1470.f3", print_hash_value);
    transparent_crc(g_1470.f4, "g_1470.f4", print_hash_value);
    transparent_crc(g_1470.f5, "g_1470.f5", print_hash_value);
    transparent_crc(g_1470.f6, "g_1470.f6", print_hash_value);
    transparent_crc(g_1470.f7, "g_1470.f7", print_hash_value);
    transparent_crc(g_1470.f8, "g_1470.f8", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
