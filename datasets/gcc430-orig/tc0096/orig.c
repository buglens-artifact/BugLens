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
   unsigned f0;
   volatile char * f1;
   char f2;
   char * f3;
};


static int g_3 = 0x3099CFE0L;
static long long g_13 = (-3L);
static char g_15 = (-6L);
static char *g_14 = &g_15;
static unsigned long long g_32 = 0x6F93BD5DE1FC6578LL;
static int g_52 = (-1L);
static unsigned long long g_62 = 0xCB2EC6F0D4A7C769LL;
static unsigned char g_75 = 0x27L;
static volatile long long g_78 = 0x35309F33D48A24E2LL;
static volatile long long * const g_77 = &g_78;
static long long g_80 = 1L;
static unsigned short g_101 = 0x174EL;
static char g_112 = (-1L);
static int g_115 = 0xF0E761D3L;
static long long *g_129 = &g_80;
static long long **g_128 = &g_129;
static volatile int g_144 = 0x38BD6013L;
static volatile int *g_143 = &g_144;
static volatile int **g_142 = &g_143;
static unsigned short *g_184 = &g_101;
static unsigned short **g_183 = &g_184;
static const int g_190 = 3L;
static int *g_194 = &g_52;
static unsigned g_213 = 0x5E0D3EF5L;
static unsigned g_222 = 0x4784E495L;
static volatile union U0 g_224 = {0x30FBAA50L};
static volatile union U0 *g_223 = &g_224;
static short g_265 = 0x8DBCL;
static union U0 g_282 = {0x6079C38AL};
static union U0 *g_292 = &g_282;
static union U0 **g_291 = &g_292;
static unsigned short g_317 = 65535UL;
static short g_332 = 5L;
static int *g_342 = &g_52;
static int g_367 = 1L;
static unsigned char g_370 = 0x56L;
static unsigned char g_372 = 0x93L;
static const unsigned long long *g_382 = &g_62;
static const unsigned long long * const *g_381 = &g_382;
static const long long g_427 = 0xF784C0FB6D2DAACFLL;
static long long g_481 = (-10L);
static char g_511 = 1L;
static int g_533 = 0x278D9F81L;
static int g_593 = (-5L);



static unsigned func_1(void);
static int * const func_4(long long p_5, char * p_6, unsigned p_7, char * p_8, int p_9);
static unsigned func_16(char * p_17, int p_18, unsigned char p_19, int p_20, char * p_21);
static char * func_22(short p_23, char * p_24, unsigned short p_25);
static unsigned short func_26(int p_27, char * p_28);
static long long func_33(int * p_34);
static int * func_35(unsigned long long * p_36, long long * p_37, long long * const p_38, short p_39);
static long long * func_40(unsigned p_41, unsigned long long p_42, short p_43, short p_44);
static int * func_53(const int * p_54, char * p_55, unsigned long long * p_56, long long * const p_57);
static long long * const func_63(unsigned p_64, int * const * p_65, unsigned short p_66, union U0 p_67, const unsigned short p_68);
static unsigned func_1(void)
{
    int *l_2 = &g_3;
    long long *l_10 = (void*)0;
    long long *l_11 = (void*)0;
    long long *l_12 = &g_13;
    unsigned long long *l_31 = &g_32;
    int l_456 = (-1L);
    char *l_521 = &g_112;
    int **l_599 = &l_2;
    (*l_2) &= 0x94964A53L;
    (*l_599) = func_4(((*l_12) = (~((void*)0 != &g_3))), g_14, func_16(func_22((func_26((safe_sub_func_uint16_t_u_u((((*l_31) ^= g_3) != (g_80 = func_33(func_35(l_10, ((*g_128) = func_40(g_3, (*l_2), g_15, (*l_2))), l_10, (*l_2))))), g_367)), &g_112) & g_112), &g_112, l_456), l_456, g_511, g_190, l_521), &g_112, l_456);

    ;
    ;

    ;

    ;
    (*l_599) = (*l_599);
    (**l_599) ^= (-5L);
    return g_112;
}







static int * const func_4(long long p_5, char * p_6, unsigned p_7, char * p_8, int p_9)
{
    int *l_567 = &g_367;
    char *l_591 = (void*)0;
    int **l_598 = &g_194;
    for (g_213 = 0; (g_213 <= 59); g_213 = safe_add_func_int32_t_s_s(g_213, 2))
    {
        (*g_142) = (*g_142);
    }
    for (g_13 = 0; (g_13 >= 26); g_13 = safe_add_func_uint8_t_u_u(g_13, 7))
    {
        short l_564 = 0xC1BFL;
        if (l_564)
            break;
    }
    for (g_15 = 0; (g_15 != (-26)); g_15 = safe_sub_func_int8_t_s_s(g_15, 2))
    {
        int l_570 = 0L;
        unsigned char *l_573 = &g_75;
        unsigned char *l_574 = &g_370;
        long long *l_589 = &g_481;
        int l_592 = 1L;
        unsigned short ***l_594 = &g_183;
        l_567 = &p_9;

        ;
        if ((((safe_rshift_func_uint8_t_u_u(0UL, 0)) == l_570) >= (safe_mul_func_int8_t_s_s((!l_570), ((*l_574) = ((*l_573) = l_570))))))
        {
            int * const l_575 = &g_367;
            int **l_576 = (void*)0;
            int **l_577 = &g_194;
            long long *l_588 = &g_481;
            char *l_590 = &g_15;
            unsigned short ***l_595 = &g_183;
            unsigned short ****l_596 = &l_595;
            (*l_577) = l_575;

            ;
            l_592 &= (safe_div_func_int16_t_s_s(((l_570 || (*g_129)) ^ (~(((*l_567) & (p_5 > (((**g_183) = (p_9 >= ((~(safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x3E822A53L, (((~((*l_588) = func_26(func_16(func_22((((*l_567) && (l_588 == (l_589 = &p_5))) != 65535UL), &g_112, (**g_183)), p_7, l_570, p_5, l_590), l_591))) != 3UL) == 4294967291UL))), (*g_14)))) == l_570))) > p_9))) <= (*g_382)))), l_570));


            ;
            l_592 ^= (g_593 > (l_594 != ((*l_596) = l_595)));
        }
        else
        {
            unsigned short l_597 = 0UL;
            (*g_342) = l_597;
        }

        ;
    }

    ;
    (*l_598) = &p_9;

    ;
    return &g_593;



}







static unsigned func_16(char * p_17, int p_18, unsigned char p_19, int p_20, char * p_21)
{
    int **l_522 = (void*)0;
    int **l_523 = (void*)0;
    int **l_524 = (void*)0;
    unsigned *l_525 = &g_213;
    const int l_530 = 0xB27D5859L;
    long long *l_537 = &g_80;
    char *l_538 = &g_282.f2;
    short *l_554 = &g_332;
    volatile int *l_559 = &g_144;
    g_194 = &p_18;

    ;
    if ((p_18 <= ((*l_525) = p_18)))
    {
        const short l_534 = 0xD13EL;
        p_18 = ((safe_sub_func_uint8_t_u_u(g_32, (safe_add_func_uint16_t_u_u(((((g_481 == 8UL) ^ (l_530 > 0xC5D5DF71L)) <= (safe_add_func_uint8_t_u_u(func_26(p_18, &g_15), (((g_481 <= g_190) ^ g_533) ^ l_534)))) || 0UL), 0x5E85L)))) > 0xCA8EL);
        return p_20;


    }
    else
    {
        unsigned long long l_535 = 1UL;
        long long *l_536 = &g_80;
        char *l_547 = (void*)0;
        unsigned long long *l_548 = (void*)0;
        unsigned long long *l_549 = (void*)0;
        unsigned long long *l_550 = &g_32;
        int l_551 = 0xC1AF508FL;
        (*g_342) = (1UL & func_26((l_535 == ((l_536 == l_537) >= p_18)), l_538));
        l_551 &= (safe_mod_func_int32_t_s_s(0x7F034A10L, func_26((safe_mul_func_int16_t_s_s(p_20, (l_535 ^ (safe_rshift_func_uint8_t_u_u(g_317, ((l_535 || func_26(g_80, func_22(p_18, l_538, func_26((((*l_525) = ((safe_rshift_func_int8_t_s_s((((*l_550) = func_26(p_18, l_547)) ^ l_535), (*p_21))) > p_19)) <= p_18), &g_15)))) | p_20)))))), l_538)));
        (*g_194) = (0UL < (((((-4L) != (((l_554 == (void*)0) < (safe_lshift_func_uint8_t_u_s(p_20, l_535))) == ((l_551 = ((-1L) >= (7UL != g_15))) | l_535))) == l_535) && (*g_129)) >= g_282.f2));
        for (g_372 = (-7); (g_372 < 30); ++g_372)
        {
            l_559 = (*g_142);
        }

        ;
    }

    ;
    return g_101;


}







static char * func_22(short p_23, char * p_24, unsigned short p_25)
{
    unsigned long long l_464 = 0x8D6E3BB352B36915LL;
    unsigned long long ***l_475 = (void*)0;
    long long *l_513 = &g_481;
    int *l_519 = &g_115;
    volatile int *l_520 = (void*)0;
    for (p_25 = (-4); (p_25 == 12); p_25 = safe_add_func_int64_t_s_s(p_25, 1))
    {
        long long ***l_463 = &g_128;
        unsigned char *l_467 = (void*)0;
        int l_468 = 8L;
        int l_469 = 0xC45B127DL;
        int l_492 = 0x58DE3D58L;
        if (((*g_77) & ((safe_rshift_func_uint8_t_u_s((4294967295UL > (0xE9L != 0xAFL)), 3)) >= (safe_mul_func_int8_t_s_s(((l_463 != (void*)0) <= (l_464 && ((l_468 = (safe_mod_func_uint16_t_u_u((func_26(p_25, &g_112) && p_23), (*g_184)))) >= l_469))), p_25)))))
        {
            long long l_470 = (-2L);
            unsigned char l_506 = 0x14L;
            int *l_514 = &g_367;
            const int **l_516 = (void*)0;
            const int *l_518 = &g_190;
            const int **l_517 = &l_518;
            (*g_194) = (l_470 &= (*g_342));
            if (p_23)
            {
                long long *l_491 = (void*)0;
                for (g_3 = (-15); (g_3 != 29); g_3 = safe_add_func_int8_t_s_s(g_3, 6))
                {
                    const unsigned long long **l_477 = &g_382;
                    const unsigned long long ***l_476 = &l_477;
                    const int l_490 = 1L;
                    int *l_493 = &g_52;
                    for (g_115 = 0; (g_115 <= 16); g_115 = safe_add_func_uint32_t_u_u(g_115, 1))
                    {
                        int *l_478 = &g_52;
                        unsigned long long *l_489 = &g_32;
                        unsigned long long **l_488 = &l_489;
                        (*l_478) = ((l_475 == l_476) <= p_25);
                        (*l_478) = 0L;
                        (*g_142) = (*g_142);
                    }
                    (*l_493) = l_492;
                }
                (*g_142) = (void*)0;

                ;
                (*g_342) = (((safe_mod_func_uint64_t_u_u((*g_382), func_26(g_317, p_24))) > l_468) & 65535UL);
            }
            else
            {
                int l_496 = 0x0669BB4CL;
                unsigned *l_499 = (void*)0;
                unsigned *l_500 = &g_282.f0;
                unsigned char *l_505 = &g_75;
                char *l_510 = &g_511;
                unsigned long long *l_512 = &l_464;
                int **l_515 = &l_514;
                l_496 = p_25;
                (*g_142) = (*g_142);
                (*g_142) = (*g_142);
                (*l_515) = l_514;
            }
            (*g_142) = (*g_142);
            g_342 = l_519;

            ;
        }
        else
        {
            l_520 = (*g_142);
            (*g_194) ^= l_469;
        }
    }

    ;
    (*l_519) &= p_23;
    return p_24;


}







static unsigned short func_26(int p_27, char * p_28)
{
    (*g_342) = p_27;
    return p_27;
}







static long long func_33(int * p_34)
{
    unsigned short l_288 = 1UL;
    union U0 *l_290 = (void*)0;
    union U0 **l_289 = &l_290;
    unsigned char *l_293 = &g_75;
    unsigned long long ***l_301 = (void*)0;
    const unsigned long long l_304 = 18446744073709551615UL;
    int *l_336 = &g_115;
    short l_448 = 0x51D6L;
    unsigned long long *l_451 = &g_62;
    if ((((safe_rshift_func_uint16_t_u_u(((**g_183) = (((*g_14) = (((*p_34) > g_15) < l_288)) && ((((&g_223 == (l_289 = (g_291 = l_289))) < g_265) & l_288) == l_288))), (((((*l_293) &= l_288) & l_288) > g_190) == (-1L)))) == 0x0DL) < g_52))
    {
        (*g_142) = (void*)0;

        ;
    }
    else
    {
        const unsigned l_294 = 9UL;
        short l_327 = 5L;
        char l_330 = 0x54L;
        long long * const l_334 = (void*)0;
        unsigned l_358 = 0x1DB39C2CL;
        unsigned char *l_376 = &g_75;
        int * const *l_383 = &g_194;
        long long * const l_395 = &g_80;
        long long l_433 = 0L;
        (*g_194) = l_294;
        if (((-1L) ^ l_288))
        {
            unsigned long long **l_300 = (void*)0;
            unsigned long long ***l_299 = &l_300;
            unsigned *l_305 = &g_213;
            int l_306 = (-5L);
            int l_312 = (-1L);
            (*p_34) = (0L | ((*l_305) &= (safe_add_func_uint16_t_u_u(((!((0x169658B3L & (safe_div_func_int16_t_s_s(g_101, (**g_183)))) != ((*g_128) == (void*)0))) ^ (l_299 == l_301)), (safe_div_func_uint8_t_u_u(l_304, l_288))))));
            if (l_306)
            {
                int **l_307 = &g_194;
                unsigned short *l_315 = &l_288;
                unsigned short *l_316 = &g_317;
                long long *l_333 = &g_80;
                (*l_307) = p_34;
                (**l_307) &= (((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_294, 0)), l_312)) == (*g_184)) >= (0x0487F1438CF6DA36LL || (safe_mod_func_uint16_t_u_u(((*l_315) &= 0xDBDFL), ((*l_316) ^= l_312)))));
                if ((l_304 <= 0x50B3EC07951488D5LL))
                {
                    short *l_322 = &g_265;
                    short *l_331 = &g_332;
                    int l_335 = 0x050AACBAL;
                    (*l_307) = func_35(func_40(l_312, g_144, ((*l_331) ^= ((((*p_34) = (safe_mod_func_uint8_t_u_u(0xBBL, g_112))) <= ((safe_add_func_uint16_t_u_u(((*l_316) &= (((*l_322) = l_288) && ((*g_14) > (safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((l_327 || (safe_lshift_func_uint16_t_u_s(((**g_183) = l_304), 14))), 0xD7L)), l_304))))), l_330)) ^ l_330)) != l_294)), l_306), l_333, l_334, l_335);
                    (*l_307) = l_336;

                    ;
                    (**l_307) |= (safe_mod_func_uint16_t_u_u(0xFD5CL, l_335));
                    (**l_307) = 0L;
                }
                else
                {
                    (**l_307) = ((*l_336) ^= (*p_34));
                    return (*g_129);


                }

                ;
                (*g_142) = (*g_142);
            }
            else
            {
                int **l_339 = &l_336;
                int **l_340 = (void*)0;
                int **l_341 = &g_194;
                g_342 = ((*l_341) = ((*l_339) = &g_3));

                ;
                ;
                ;
            }

            ;
            ;
            ;
            (*g_143) |= 0xFC96928DL;
        }
        else
        {
            union U0 **l_349 = (void*)0;
            unsigned short *l_357 = &g_101;
            int l_359 = (-9L);
            long long *l_362 = (void*)0;
            int **l_386 = (void*)0;
            int ***l_385 = &l_386;
            unsigned short l_435 = 0x767CL;
            unsigned short l_439 = 0xC82EL;
            for (l_327 = 0; (l_327 < (-20)); --l_327)
            {
                short *l_350 = &g_332;
                int l_356 = (-1L);
                long long *l_363 = (void*)0;
                char *l_378 = &l_330;
                union U0 l_384 = {4294967288UL};
                int ***l_388 = &l_386;
                unsigned char l_399 = 0xC0L;
            }
        }

        ;
        ;
        ;
    }

    ;
    ;
    ;
    ;
    ;
    for (g_372 = 0; (g_372 < 52); ++g_372)
    {
        return (*l_336);


    }
    (*p_34) = (((*l_336) ^ ((*l_451) = (*l_336))) | (safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((g_222 = (*l_336)), (0x179DL == g_144))), (*l_336))));
    (*g_291) = (*l_289);

    ;
    return (*g_77);


}







static int * func_35(unsigned long long * p_36, long long * p_37, long long * const p_38, short p_39)
{
    unsigned short **l_285 = &g_184;
    (**g_142) = (0xCE99L == 65527UL);
    g_183 = l_285;
    return &g_52;


}







static long long * func_40(unsigned p_41, unsigned long long p_42, short p_43, short p_44)
{
    long long l_47 = 0xC2F5A260DF39281CLL;
    const int *l_58 = &g_52;
    char *l_60 = (void*)0;
    unsigned long long *l_61 = &g_62;
    char l_258 = (-1L);
    unsigned short **l_263 = &g_184;
    union U0 *l_284 = &g_282;
    for (p_43 = 0; (p_43 > (-1)); --p_43)
    {
        unsigned l_48 = 3UL;
        int * const *l_69 = (void*)0;
        const int **l_247 = (void*)0;
        const int **l_248 = &l_58;
        l_48 &= l_47;
    }
    if (p_41)
    {
        int l_253 = 0x952AE489L;
        int l_278 = 0xCB596987L;
        for (g_75 = (-9); (g_75 >= 30); ++g_75)
        {
            unsigned *l_256 = (void*)0;
            unsigned *l_257 = &g_222;
            int l_268 = 0x4EA24D4EL;
            const int **l_280 = (void*)0;
            if (((safe_mul_func_uint16_t_u_u((l_253 | (((safe_add_func_int32_t_s_s(l_253, (*g_143))) && 0x47L) | ((*l_257) = 0x987CFA79L))), l_258)) != ((*l_58) <= l_253)))
            {
                short *l_264 = &g_265;
                int l_269 = 0x75D6FB8AL;
                (**g_142) ^= (safe_sub_func_uint16_t_u_u(((((*l_264) = (safe_mul_func_uint16_t_u_u((l_253 > (&g_184 != l_263)), g_112))) < ((0xCD35E6B1BB55F120LL && l_253) ^ ((safe_mul_func_uint16_t_u_u(((l_269 = l_268) <= l_253), (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(p_44, 6)), 0UL)))) & p_44))) > (*l_58)), 0L));
            }
            else
            {
                (*g_143) |= p_42;
            }
            for (l_268 = 0; (l_268 > (-25)); l_268 = safe_sub_func_uint64_t_u_u(l_268, 9))
            {
                int *l_276 = (void*)0;
                int *l_277 = &g_115;
                int **l_279 = &g_194;
            }
            l_58 = l_58;
        }
        (*g_194) = 1L;
        (**g_142) |= 0x3958A3B0L;
    }
    else
    {
        union U0 *l_281 = &g_282;
        union U0 **l_283 = &l_281;
        (*l_283) = l_281;
        (*l_283) = l_284;
    }
    (*g_194) |= (*g_143);
    return (*g_128);


}







static int * func_53(const int * p_54, char * p_55, unsigned long long * p_56, long long * const p_57)
{
    unsigned short l_176 = 65535UL;
    int l_202 = (-2L);
    long long l_236 = (-6L);
    const char *l_241 = &g_112;
    (*g_142) = (*g_142);
    if ((*p_54))
    {
        int *l_177 = &g_115;
        unsigned short **l_185 = (void*)0;
        int l_187 = 0x838C22D3L;
        int **l_231 = &g_194;
        for (g_101 = (-27); (g_101 == 38); ++g_101)
        {
            int *l_193 = (void*)0;
            const unsigned *l_220 = (void*)0;
            volatile union U0 *l_225 = &g_224;
            if (l_176)
            {
                int **l_178 = &l_177;
                const int *l_189 = &g_190;
                const int **l_188 = &l_189;
                const int *l_192 = &g_115;
                const int **l_191 = &l_192;
                (*l_178) = l_177;
                for (g_62 = 0; (g_62 <= 18); ++g_62)
                {
                    char l_186 = 8L;
                    for (g_52 = 0; (g_52 > (-28)); g_52 = safe_sub_func_uint16_t_u_u(g_52, 1))
                    {
                        l_185 = g_183;

                        ;
                    }
                    l_187 = ((((*l_178) = (*l_178)) != p_54) == (+l_186));
                    if ((**l_178))
                        continue;
                }
                (*l_191) = ((*l_188) = &l_187);

                ;
                ;
                (*l_191) = p_54;

                ;
            }
            else
            {
                g_194 = l_193;

                ;
                return &g_115;


            }
            for (g_15 = 0; (g_15 < (-13)); g_15--)
            {
                char l_199 = (-6L);
                int l_205 = 0xA6677A2EL;
                unsigned *l_212 = &g_213;
                unsigned *l_221 = &g_222;
                (**g_142) &= (safe_rshift_func_int16_t_s_s(l_199, ((safe_add_func_uint16_t_u_u((l_202 = 0x3C1EL), ((g_190 <= l_199) < (safe_sub_func_uint8_t_u_u(g_75, l_199))))) || (*l_177))));
                l_205 &= (**g_142);
                (*l_177) = (safe_rshift_func_int16_t_s_s((+(safe_lshift_func_uint16_t_u_s(l_202, (safe_sub_func_uint32_t_u_u(((*l_212) &= g_75), (((*l_221) = ((safe_add_func_int64_t_s_s((((*g_143) & (9UL ^ 0x39L)) | (*l_177)), (*g_129))) >= ((safe_add_func_int16_t_s_s(g_52, (safe_mod_func_uint64_t_u_u(((l_220 == (void*)0) < 0xC9A882A5L), g_52)))) ^ (*g_14)))) | (*g_194))))))), 13));
            }
            l_225 = g_223;
            (*g_194) ^= (g_80 & 0x1D501A0CL);
        }

        ;
        if (((*l_177) = ((*g_194) &= (*l_177))))
        {
            int *l_226 = &g_115;
            int **l_227 = &l_177;
            (*l_227) = l_226;
            return &g_3;


        }
        else
        {
            unsigned l_228 = 0xC08D5A12L;
            (*g_194) = l_228;
            (*g_143) = (*g_143);
            (*l_177) |= ((*g_194) = (safe_rshift_func_uint16_t_u_u(l_228, 4)));
        }
        (*l_231) = &l_187;

        ;
    }
    else
    {
        for (g_101 = 0; (g_101 < 49); g_101 = safe_add_func_uint64_t_u_u(g_101, 1))
        {
            if ((*g_194))
                break;
        }
    }


    (**g_142) = ((**g_128) ^ (l_236 == g_115));
    (*g_143) = ((((g_101 && (l_202 = ((*g_184) = (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((void*)0 != l_241), 0)), ((*g_14) ^= ((g_213 = (g_213 || l_236)) || (**g_142)))))))) < 0x566EL) | ((((*p_56) = ((void*)0 != &g_183)) > (*p_57)) && l_236)) | l_236);
    return &g_52;


}







static long long * const func_63(unsigned p_64, int * const * p_65, unsigned short p_66, union U0 p_67, const unsigned short p_68)
{
    int *l_76 = &g_52;
    long long *l_79 = &g_80;
    int l_170 = 1L;
    (*l_76) = g_75;
    if (g_62)
    {
        long long **l_81 = &l_79;
        int l_82 = 0x64544A95L;
        unsigned l_113 = 1UL;
        unsigned short *l_123 = (void*)0;
        unsigned short **l_122 = &l_123;
        int **l_125 = (void*)0;
        int *l_126 = &g_115;
        int **l_127 = &l_76;
        if (((g_77 == ((*l_81) = l_79)) > (((l_82 | (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_82, (p_68 && ((*l_76) == (*l_76))))), (safe_rshift_func_int16_t_s_u(g_75, 15))))) || (safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((((*l_76) | l_82) == (*l_76)) & g_80), (-1L))), g_78))) < p_67.f2)))
        {
            unsigned char *l_95 = &g_75;
            unsigned short *l_100 = &g_101;
            const int l_104 = 0xA298B236L;
            char *l_111 = &g_112;
            int *l_114 = &g_115;
            unsigned long long *l_118 = &g_62;
            unsigned long long **l_117 = &l_118;
            unsigned long long ***l_116 = &l_117;
            int **l_119 = &l_76;
            (*l_114) |= (safe_mod_func_uint8_t_u_u(((*l_95) |= p_67.f2), (safe_lshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s(((*l_100) = (g_62 <= 0xE8DA534CL)), 7)) > ((safe_add_func_uint16_t_u_u(l_82, (l_104 | ((safe_sub_func_int32_t_s_s(0x73BB8476L, (((((((*l_111) = (safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(p_66, (((*g_14) ^= (!(255UL && p_67.f2))) || (*l_76)))), l_104))) || (*g_14)) && (-9L)) > 0x40F8590C99E8488ELL) ^ g_62) <= 5L))) != l_82)))) != 1L)) ^ p_67.f2), l_113))));
            (*l_116) = (void*)0;

            ;
            (*l_76) = g_62;
            (*l_119) = l_76;
        }
        else
        {
            for (g_115 = 0; (g_115 == (-16)); g_115--)
            {
                unsigned short ***l_124 = &l_122;
                (*l_124) = l_122;
            }
        }
        (*l_127) = (l_126 = l_76);

        ;
    }
    else
    {
        long long ***l_130 = &g_128;
        long long ***l_131 = (void*)0;
        long long **l_133 = (void*)0;
        long long ***l_132 = &l_133;
        long long **l_135 = &g_129;
        long long ***l_134 = &l_135;
        int **l_136 = &l_76;
        (*l_76) ^= ((((*l_132) = ((*l_130) = g_128)) != ((*l_134) = &g_129)) & ((void*)0 == &g_115));

        ;
        (*l_136) = l_76;
        (*l_76) = (&p_68 != &p_68);
        (**l_136) = 8L;
    }
    for (g_62 = 24; (g_62 >= 8); g_62--)
    {
        const int * const *l_141 = (void*)0;
        (*g_143) &= ((1UL == (safe_lshift_func_int16_t_s_s(((g_62 != (p_66 || ((l_141 == g_142) || (safe_sub_func_uint8_t_u_u(((*l_76) & (safe_lshift_func_int8_t_s_u(((p_67.f0 | p_66) ^ (((*l_76) == 18446744073709551615UL) != p_68)), p_64))), (*g_14)))))) & p_66), 12))) <= g_15);
        (*l_76) &= (*g_143);
    }
    for (g_80 = 0; (g_80 <= (-26)); g_80 = safe_sub_func_int16_t_s_s(g_80, 3))
    {
        int **l_153 = &l_76;
        int ***l_154 = (void*)0;
        int ***l_155 = &l_153;
        unsigned short *l_158 = &g_101;
        int l_165 = 0L;
    }
    return l_79;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_224.f0, "g_224.f0", print_hash_value);
    transparent_crc(g_224.f2, "g_224.f2", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_282.f0, "g_282.f0", print_hash_value);
    transparent_crc(g_282.f2, "g_282.f2", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
