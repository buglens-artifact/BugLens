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
   unsigned long long f0;
   char * f1;
   int f2;
   unsigned f3;
};

union U1 {
   volatile char * f0;
   const unsigned long long f1;
   const volatile char * f2;
};


static unsigned long long g_6 = 1UL;
static volatile int g_29 = 0x238E486AL;
static int g_30 = 3L;
static volatile int g_41 = 0xD64F6899L;
static const volatile int * const g_40 = &g_41;
static int g_44 = 1L;
static unsigned long long *g_55 = (void*)0;
static unsigned short g_75 = 0x1ADFL;
static int g_76 = 0x04C38DB0L;
static unsigned short g_78 = 0xB799L;
static char g_81 = (-10L);
static unsigned char g_94 = 0x8FL;
static long long g_96 = 0x159BBC08F52837B7LL;
static int *g_97 = &g_44;
static unsigned char g_103 = 0xD6L;
static long long g_111 = 0xE6801B04C643A564LL;
static union U1 g_122 = {0};
static unsigned g_132 = 4UL;
static union U0 g_134 = {0xFD11FF246F767204LL};
static int *g_139 = (void*)0;
static volatile int *g_154 = &g_41;
static union U1 g_159 = {0};
static union U1 g_161 = {0};
static char g_179 = 3L;
static short g_181 = 0x4316L;
static union U1 g_218 = {0};
static long long *g_232 = (void*)0;
static long long **g_231 = &g_232;
static union U0 g_247 = {0x7A4396262B8E9E02LL};
static unsigned g_252 = 0x6BF0284AL;
static volatile unsigned short ** const g_293 = (void*)0;
static unsigned long long *g_340 = &g_247.f0;
static union U1 g_353 = {0};
static union U1 *g_352 = &g_353;
static short g_373 = 0x5B69L;
static volatile union U0 *g_417 = (void*)0;
static volatile union U0 **g_416 = &g_417;
static volatile union U0 ***g_415 = &g_416;
static union U0 *g_432 = &g_247;
static union U0 **g_431 = &g_432;
static int *g_436 = &g_76;
static union U0 ***g_521 = &g_431;
static const union U1 g_526 = {0};
static short g_563 = (-1L);
static long long g_617 = 1L;
static unsigned long long ***g_641 = (void*)0;
static char g_644 = (-1L);
static union U1 g_648 = {0};
static const union U1 *g_647 = &g_648;
static const int g_722 = 0xE04881BBL;
static const int *g_723 = &g_134.f2;



static const char func_1(void);
static int * func_2(int p_3, union U0 p_4, int * p_5);
static union U0 func_9(unsigned p_10, short p_11, unsigned long long p_12, unsigned p_13, const unsigned long long p_14);
static unsigned func_15(union U0 p_16, unsigned char p_17, unsigned long long * p_18, char p_19);
static union U0 func_20(unsigned p_21, char p_22, unsigned long long * p_23, char * p_24);
static unsigned func_31(long long p_32, int * p_33, int * p_34);
static union U1 func_35(int * p_36, unsigned short p_37, short p_38, int * p_39);
static union U0 * func_45(int * const p_46, unsigned long long * const p_47, union U1 p_48, unsigned char p_49);
static int * func_50(unsigned long long * p_51, unsigned long long * p_52, long long p_53, union U1 p_54);
static unsigned long long * func_56(unsigned short p_57, unsigned p_58, int p_59, short p_60, short p_61);
static const char func_1(void)
{
    unsigned long long *l_7 = &g_6;
    int l_8 = 7L;
    unsigned char l_42 = 0UL;
    long long *l_138 = &g_96;
    char *l_140 = &g_81;
    unsigned long long *l_156 = &g_134.f0;
    int **l_505 = &g_436;
    long long l_519 = 0x4B78258CAC2AD382LL;
    const volatile int * const l_532 = &g_41;
    const volatile int * const *l_531 = &l_532;
    int l_535 = 0x0D649857L;
    char l_558 = 0x81L;
    long long * const *l_573 = &l_138;
    long long * const **l_572 = &l_573;
    union U1 l_656 = {0};
    unsigned char l_671 = 6UL;
    const unsigned long long *l_676 = (void*)0;
    short l_708 = (-3L);
    unsigned l_710 = 0UL;
    const int *l_718 = &l_8;
    union U0 l_740 = {9UL};
    union U1 **l_752 = &g_352;
    const long long l_757 = 0xD4107DA3ABCB84DALL;
    const short l_758 = 0x8808L;
    (*l_505) = func_2((((*l_7) = g_6) , (0xFAL == l_8)), func_9(func_15(func_20((safe_div_func_int32_t_s_s((((((safe_sub_func_int8_t_s_s(g_29, ((*l_140) = (0xC254L == ((g_30 | (g_30 , 2L)) , (func_31(((*l_138) = (func_35((((&l_8 == g_40) || 1L) , (void*)0), g_30, l_42, &l_8) , g_78)), &l_8, g_139) | l_8)))))) & 0x76L) <= l_42) < 0x379AL) >= 65527UL), l_8)), l_42, l_7, l_140), l_8, l_156, l_8), l_8, g_30, l_8, l_8), g_436);
    if ((*g_436))
    {
        char l_511 = 6L;
        int l_512 = 0x680F1915L;
        union U0 ***l_520 = &g_431;
        const union U1 *l_525 = &g_526;
        const union U1 **l_524 = &l_525;
        const union U1 *l_528 = &g_526;
        const union U1 **l_527 = &l_528;
        union U1 *l_529 = &g_218;
        union U1 **l_530 = &g_352;
        for (g_103 = 0; (g_103 > 37); ++g_103)
        {
            char l_510 = 0x76L;
            long long *l_513 = &g_111;
            union U0 l_514 = {1UL};
            (*l_505) = &g_44;
            g_154 = &g_41;
            (*l_505) = func_2((func_31(((*l_513) = ((*l_138) = (safe_div_func_int8_t_s_s(((&g_44 == ((*l_505) = &g_76)) | (((*l_140) = l_510) == l_511)), l_512)))), &g_76, &l_512) >= (l_512 | (-1L))), l_514, &g_44);
        }
        (*g_436) = (safe_lshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((**l_505), ((((*l_140) = l_519) && (**l_505)) , ((((g_521 = l_520) != (void*)0) || l_511) == ((safe_div_func_int32_t_s_s((l_8 = (((*l_527) = ((*l_524) = (void*)0)) == ((*l_530) = l_529))), (g_122 , 0x675F5DE7L))) >= g_252))))) ^ g_252), g_41));
    }
    else
    {
        l_531 = &g_40;
    }
    if ((safe_add_func_int32_t_s_s(((*l_532) == ((*g_436) = l_535)), 0x7DF1F51BL)))
    {
        union U1 l_536 = {0};
        int l_541 = (-10L);
        int **l_547 = (void*)0;
        int **l_548 = &g_97;
        long long l_553 = 0x27DFB016FB4D7685LL;
        short *l_559 = &g_181;
        unsigned char *l_560 = &l_42;
        short *l_561 = &g_373;
        short *l_562 = &g_563;
        const unsigned long long *l_674 = &g_6;
        unsigned *l_684 = &g_134.f3;
        unsigned short l_688 = 7UL;
        int l_738 = 0L;
        (*l_505) = func_2((**l_531), func_20(g_81, (**l_505), (l_536 , (g_340 = l_156)), &g_81), &g_76);
        if (((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_541 , (g_76 ^ ((safe_sub_func_int8_t_s_s(1L, (safe_lshift_func_int16_t_s_u(((((safe_unary_minus_func_int16_t_s(((*l_562) = ((*l_561) = (((((*l_560) = (((*l_559) = ((((**l_505) = ((*l_505) == ((*l_548) = &g_76))) | ((((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(l_553, 5)) , (safe_add_func_uint16_t_u_u(((*l_532) > (g_111 >= l_558)), 65527UL))), g_181)) >= 0xBEL) ^ g_96) >= (*g_139))) != l_519)) , 0x29L)) == g_111) ^ g_132) , g_103))))) & 0x36C2L) ^ 0xE5L) , g_94), 1)))) > 0xB7FC9F7460881D1CLL))), g_81)), 4)) ^ (*g_139)))
        {
            int *l_566 = &l_535;
            unsigned long long l_581 = 18446744073709551609UL;
            int l_589 = (-1L);
            unsigned char l_629 = 0xCBL;
            int *l_645 = (void*)0;
            union U0 ***l_654 = &g_431;
            for (l_541 = 0; (l_541 != 9); l_541 = safe_add_func_int8_t_s_s(l_541, 9))
            {
                char **l_576 = (void*)0;
                char **l_577 = &l_140;
                union U0 l_578 = {1UL};
                int l_579 = 0xEDEC5EBDL;
                unsigned long long *l_580 = &g_6;
                union U1 l_582 = {0};
            }
            if ((g_75 != (*l_566)))
            {
                unsigned l_594 = 1UL;
                unsigned char l_604 = 0xB0L;
                short ** const l_620 = &l_559;
                (*g_154) = (safe_lshift_func_int16_t_s_s(((((*l_560) = 0xF2L) | 0x78L) , g_373), 13));
                for (g_76 = 0; (g_76 <= 4); g_76 = safe_add_func_uint8_t_u_u(g_76, 7))
                {
                    const unsigned short l_595 = 0xEC28L;
                    unsigned *l_596 = &g_132;
                    union U0 **l_601 = &g_432;
                    int l_630 = 0xE0CDCB29L;
                    if ((((((((safe_div_func_uint8_t_u_u(g_30, (l_589 || (g_75 , (*l_566))))) > (safe_rshift_func_uint16_t_u_u(((((*l_596) = (func_31((safe_mod_func_int64_t_s_s(l_594, l_595)), &g_44, l_566) == (-8L))) >= 0xFFBCA7FBL) , 3UL), l_594))) , l_595) , 4L) <= l_594) & (*g_139)) > l_594))
                    {
                        (*l_548) = (void*)0;
                        (*g_416) = (void*)0;
                    }
                    else
                    {
                        int *l_597 = &g_76;
                        union U0 **l_600 = &g_432;
                        (*l_505) = l_597;
                        (*g_154) = (((safe_sub_func_int64_t_s_s((-1L), g_76)) , ((*l_596) = ((l_600 == l_601) < ((((*l_140) = l_595) >= ((*l_532) | func_31(((safe_add_func_uint64_t_u_u(1UL, (((*l_7) = 3UL) != l_604))) , 0x8BC3AC4F9E214D6CLL), l_597, (*l_505)))) , (*l_566))))) == g_179);
                    }
                    for (g_96 = 0; (g_96 == (-2)); g_96 = safe_sub_func_int64_t_s_s(g_96, 4))
                    {
                        unsigned l_615 = 0x6725D78AL;
                        char *l_616 = &g_179;
                        (*l_505) = l_596;
                        (**l_505) = (((*g_432) = (*g_432)) , ((*l_566) = (safe_div_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((((safe_sub_func_int64_t_s_s((((g_231 = &g_232) == (func_9(g_81, ((*l_562) = l_604), (*l_566), (func_31((l_594 != (((safe_rshift_func_int8_t_s_u(((*l_616) = (+l_615)), func_31((*l_566), &g_44, &g_44))) < l_595) == 0x7664F26FF3D3A7B8LL)), &g_44, l_566) != l_595), l_604) , &g_232)) ^ 1L), l_595)) | l_615) | l_595) || (*l_566)), (**l_505))) > 0x995CF659855A01E3LL), g_81))));
                        (*g_154) = (*g_436);
                    }
                    if (l_595)
                        continue;
                    if ((l_594 && g_617))
                    {
                        int l_623 = 0xEAC7C5ABL;
                        unsigned short *l_628 = &g_78;
                        (*g_154) = (safe_mod_func_int64_t_s_s(0x734FB01A28AB1C09LL, 0xEDB2E7EE68A2DCF4LL));
                        (*l_566) = (((**g_431) , l_620) == (void*)0);
                        l_630 = ((+((g_78 , (safe_div_func_int32_t_s_s(((l_623 != (safe_sub_func_int32_t_s_s((func_31(l_623, &g_76, &g_44) , ((safe_rshift_func_uint16_t_u_s(((((*l_628) = func_31(l_623, ((*l_548) = &g_44), &l_623)) < (*l_566)) && l_623), l_629)) >= g_111)), 0x053A24B9L))) & 1UL), 4294967291UL))) == l_623)) > 0x30F7E9CDL);
                    }
                    else
                    {
                        (*l_566) = ((*l_566) & (g_154 == (void*)0));
                    }
                }
            }
            else
            {
                unsigned l_642 = 9UL;
                unsigned short l_643 = 0xBFA0L;
                volatile int l_646 = (-1L);
                (*l_548) = (((g_159 , ((**l_531) || ((func_31(((**l_573) = (func_31(((((safe_add_func_int64_t_s_s(0x47091ED3D61BDEADLL, (*l_532))) & ((safe_lshift_func_int16_t_s_s(((((func_31((((safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((((void*)0 != g_641) | (((**l_505) = (0L ^ g_111)) <= ((*g_139) != (*l_566)))), l_642)), (**l_548))) || l_643) , 1L), l_566, &g_76) | 0UL) | (**l_548)) < (*g_97)) || (**l_505)), 8)) >= 7L)) | g_644) >= l_643), (*l_505), l_645) <= 0xAF63L)), l_645, &g_76) < l_535) ^ 0x8512F43DL))) || 0xB7L) , (void*)0);
                l_646 = (*g_40);
            }
            (*g_139) = ((*l_573) != ((*g_231) = func_56((**l_531), g_563, (**l_505), g_44, (2UL == (g_134.f2 = ((g_81 > g_78) | g_134.f2))))));
            if ((*l_532))
            {
                union U0 l_653 = {18446744073709551608UL};
                union U1 l_655 = {0};
                g_647 = &g_526;
                (**l_654) = func_45(&g_44, &g_6, l_656, g_41);
            }
            else
            {
                unsigned l_659 = 0xA498C066L;
                for (l_581 = (-16); (l_581 == 6); ++l_581)
                {
                    int *l_660 = &l_535;
                    union U1 *l_661 = &l_656;
                    union U1 **l_662 = &g_352;
                    (*l_548) = ((*l_505) = l_660);
                    (*l_662) = l_661;
                }
            }
        }
        else
        {
            int l_665 = (-1L);
            unsigned *l_672 = &g_132;
            unsigned long long *l_673 = &g_6;
            const unsigned long long **l_675 = &l_674;
            unsigned long long **l_681 = (void*)0;
            unsigned l_682 = 0UL;
            int l_695 = 0L;
            union U0 l_741 = {1UL};
            union U1 **l_751 = &g_352;
            union U1 ***l_750 = &l_751;
            (*l_505) = func_2((*g_139), func_20(g_252, (safe_lshift_func_uint16_t_u_s((l_665 , (safe_add_func_int32_t_s_s(((((*l_672) = (safe_unary_minus_func_uint8_t_u((((0x9474CA926ED7F5DFLL >= (*l_532)) ^ ((((safe_add_func_int32_t_s_s((((*l_560) = (func_31(((**l_505) = (func_31(func_31((**l_505), &g_76, ((*l_548) = (void*)0)), (*l_505), (*l_505)) || l_671)), &g_76, &g_76) | (*g_139))) >= l_665), 1L)) , 1L) == 0x533C605279D30963LL) | g_132)) || 65535UL)))) & l_665) ^ 4294967295UL), g_96))), g_30)), l_673, &g_644), &g_76);
            if ((0x340562B0E5FF07B8LL < ((*l_532) > (&g_6 != (l_676 = ((*l_675) = l_674))))))
            {
                unsigned l_679 = 0UL;
                unsigned long long **l_680 = &g_340;
                int *l_683 = &g_30;
                if ((g_179 , (((safe_add_func_int16_t_s_s((((*l_672) = (func_31(l_679, (((g_641 == g_641) , (((*l_683) = ((((*l_140) = l_665) & (l_665 >= 65527UL)) , g_134.f2)) , g_6)) , &g_44), &g_76) | (-1L))) != (**l_548)), g_252)) , g_78) > (**l_531))))
                {
                    long long l_685 = 0x5506340C20778506LL;
                    (*g_154) = ((g_111 = ((**l_573) = ((l_684 != l_532) , l_685))) > g_644);
                    for (l_685 = (-11); (l_685 == 22); l_685 = safe_add_func_uint16_t_u_u(l_685, 4))
                    {
                        (*l_505) = &g_44;
                        (*g_139) = l_665;
                    }
                }
                else
                {
                    (*l_505) = &g_44;
                    return (**l_505);
                }
            }
            else
            {
                int l_700 = (-5L);
                int *l_714 = &l_541;
                unsigned short l_724 = 4UL;
                unsigned long long **l_739 = &l_156;
                if ((&g_179 == &g_179))
                {
                    const unsigned char l_689 = 0xFBL;
                    int l_696 = (-1L);
                    (**l_548) = l_688;
                    if ((*g_40))
                    {
                        return l_689;
                    }
                    else
                    {
                        unsigned l_694 = 0x548B2BD5L;
                        (*g_139) = (*g_139);
                        l_696 = ((l_695 = ((*l_672) = ((safe_rshift_func_int8_t_s_u(((*l_140) = (safe_div_func_uint16_t_u_u(l_694, 0xBD1DL))), func_31(((*l_138) = (g_44 && (g_373 >= l_689))), l_672, &g_76))) && g_6))) <= 7UL);
                        (*l_505) = (void*)0;
                    }
                    (*l_505) = &g_44;
                }
                else
                {
                    int l_699 = 0L;
                    unsigned long long *l_715 = (void*)0;
                    int l_735 = (-1L);
                    union U1 l_736 = {0};
                    char **l_737 = (void*)0;
                    if ((safe_lshift_func_uint16_t_u_s(((g_179 & (&g_252 != (l_699 , (void*)0))) || (+((**l_573) = 0xC24AE679BF90C78ALL))), l_700)))
                    {
                        short l_705 = 3L;
                        unsigned char *l_709 = &g_94;
                        int *l_713 = &g_44;
                        unsigned short *l_716 = (void*)0;
                        unsigned short *l_717 = &l_688;
                        const int **l_719 = &l_718;
                        const int *l_721 = &g_722;
                        const int **l_720 = &l_721;
                        (*l_714) = (safe_lshift_func_uint16_t_u_s(((*l_717) = (((safe_div_func_uint8_t_u_u(((((*g_40) > 0xE953FBF8L) ^ (**l_548)) , (*l_713)), (**l_505))) > l_682) ^ (**l_505))), 14));
                        g_723 = ((*l_720) = ((*l_719) = l_718));
                        (*l_720) = &g_76;
                        (*g_97) = ((l_724 = (l_699 && ((*l_717) = 65529UL))) == 0x27L);
                    }
                    else
                    {
                        volatile int **l_725 = &g_154;
                        unsigned short l_726 = 1UL;
                        union U1 l_734 = {0};
                        (*l_725) = &g_41;
                        g_436 = &l_699;
                        (**l_725) = (l_726 & ((safe_sub_func_int8_t_s_s(l_699, (((safe_sub_func_uint32_t_u_u((((*l_714) && (safe_unary_minus_func_int64_t_s(l_665))) >= (((*l_560) = (safe_lshift_func_uint8_t_u_u((l_674 != (l_734 , func_56(((((*l_532) <= (l_735 = g_44)) < 0x9076L) , 0xDC15L), g_134.f3, (*g_97), g_44, l_699))), g_134.f2))) == l_682)), 0x30446174L)) && (**l_725)) , l_735))) & (**l_505)));
                    }
                    (*g_139) = 0x1C691B82L;
                    (*l_505) = func_2((*g_97), l_741, &l_699);
                    (*g_139) = ((*g_97) = ((*l_714) = (*g_97)));
                }
            }
            (*g_97) = ((*l_718) <= (safe_mod_func_int8_t_s_s(((**l_531) , 0x1AL), (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((((*g_647) , (safe_lshift_func_int16_t_s_u((5L != (((((((*l_750) = &g_352) != l_752) >= (safe_add_func_int8_t_s_s(func_31((**l_505), (*l_505), &g_76), (**l_505)))) ^ l_741.f3) && (**l_548)) , (*g_723))), g_722))) == g_181), l_682)), l_695)))));
        }
    }
    else
    {
        union U1 * const l_755 = &g_353;
        union U1 **l_756 = &g_352;
        (*l_756) = l_755;
        return l_757;
    }
    return l_758;
}







static int * func_2(int p_3, union U0 p_4, int * p_5)
{
    int **l_488 = &g_97;
    unsigned long long *l_503 = &g_6;
    (*l_488) = &g_44;
    for (g_75 = 0; (g_75 <= 12); g_75 = safe_add_func_int32_t_s_s(g_75, 1))
    {
        union U1 * const l_493 = (void*)0;
        int *l_496 = &g_76;
        char *l_504 = (void*)0;
        for (g_111 = 0; (g_111 <= 13); g_111 = safe_add_func_uint64_t_u_u(g_111, 8))
        {
            union U1 **l_494 = (void*)0;
            union U1 **l_495 = &g_352;
            short *l_499 = &g_181;
            int **l_502 = &g_436;
            (*l_495) = l_493;
            (*l_488) = (func_20((func_31((**l_488), l_496, &g_44) & (**l_488)), (p_4 , (((safe_lshift_func_int16_t_s_u(((*l_499) = (**l_488)), 7)) != (safe_rshift_func_uint8_t_u_u(func_31((func_31(func_31(p_4.f2, ((*l_502) = (p_4.f2 , (void*)0)), (*l_488)), &g_76, &g_76) , p_3), (*l_488), &g_44), p_4.f2))) > g_179)), l_503, l_504) , (*l_488));
            (*l_502) = &g_44;
        }
        if ((*p_5))
        {
            (*l_488) = (*l_488);
        }
        else
        {
            (*p_5) = 1L;
        }
    }
    return (*l_488);
}







static union U0 func_9(unsigned p_10, short p_11, unsigned long long p_12, unsigned p_13, const unsigned long long p_14)
{
    unsigned char l_478 = 0x58L;
    int *l_485 = &g_76;
    int **l_486 = &g_139;
    union U0 l_487 = {0x59C2AA18BF9BF29FLL};
    for (p_10 = (-25); (p_10 < 31); p_10++)
    {
        (*g_154) = l_478;
    }
    for (g_179 = (-3); (g_179 == (-2)); g_179++)
    {
        union U1 l_483 = {0};
        for (p_11 = 0; (p_11 > 28); p_11++)
        {
            volatile int **l_484 = &g_154;
            (*l_484) = &g_41;
        }
    }
    (*l_486) = l_485;
    return l_487;
}







static unsigned func_15(union U0 p_16, unsigned char p_17, unsigned long long * p_18, char p_19)
{
    int **l_157 = &g_139;
    union U1 *l_158 = &g_159;
    union U1 *l_160 = &g_161;
    union U1 **l_162 = (void*)0;
    union U1 *l_164 = &g_122;
    union U1 **l_163 = &l_164;
    char *l_171 = (void*)0;
    char *l_172 = (void*)0;
    char *l_173 = &g_81;
    char *l_178 = &g_179;
    short *l_180 = &g_181;
    unsigned char *l_182 = &g_94;
    short l_187 = 0x048CL;
    unsigned char l_197 = 8UL;
    char l_244 = 0xADL;
    unsigned char l_250 = 0xE6L;
    int *l_264 = &g_44;
    char *l_303 = (void*)0;
    unsigned short l_318 = 0x5A23L;
    unsigned long long *l_372 = &g_134.f0;
    union U0 l_471 = {0xA810966CEF06F709LL};
    (*l_157) = &g_76;
    (*l_163) = (l_160 = (l_158 = &g_122));
    if ((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((**l_157) == ((*l_173) = (p_16.f3 != g_134.f2))), p_17)), (**l_157))) , p_19), ((*l_182) = (safe_lshift_func_int8_t_s_s((p_19 == (g_41 < ((*l_180) = ((safe_add_func_int8_t_s_s(((*l_178) = ((*p_18) && p_19)), g_134.f3)) && 0xF5D4AB6F82621F02LL)))), 1))))))
    {
        int *l_188 = (void*)0;
        union U1 l_189 = {0};
        unsigned short *l_196 = &g_78;
        int l_198 = 0x2B244983L;
        (*l_157) = &g_76;
        (*g_139) = 0x55EFA8D4L;
        (*g_154) = ((((((**l_157) & (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(func_31(l_187, l_188, (l_189 , l_188)), ((*l_196) = ((safe_div_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(65535UL, g_181)) < (safe_lshift_func_uint16_t_u_s((**l_157), g_134.f3))), (*p_18))) , p_16.f2)))), l_197))) | l_198) & 0x0240E7FBL) || 255UL) & p_16.f0);
    }
    else
    {
        int *l_201 = (void*)0;
        int **l_202 = (void*)0;
        int **l_203 = &l_201;
        union U1 l_204 = {0};
        int l_205 = 1L;
        int **l_206 = &g_97;
        long long l_274 = 0x07B0C9AB25B98004LL;
        const unsigned l_292 = 0xCD8E07C2L;
        int * const l_323 = &g_44;
        const short *l_346 = &g_181;
        const short **l_345 = &l_346;
        short **l_347 = (void*)0;
        unsigned char *l_454 = &g_94;
        long long *l_467 = &l_274;
        unsigned short *l_470 = &l_318;
        if ((safe_div_func_uint64_t_u_u((((func_31(((**l_157) = (**l_157)), &g_44, ((*l_203) = l_201)) || 0UL) == (((l_204 , l_205) , ((*l_206) = (*l_157))) == (void*)0)) < p_17), (*p_18))))
        {
            int *l_207 = &g_134.f2;
            unsigned long long *l_210 = &g_134.f0;
            unsigned long long l_242 = 18446744073709551614UL;
            unsigned l_258 = 4294967287UL;
            (*l_203) = l_207;
            (*g_97) = 0L;
            if (func_31(g_181, ((safe_lshift_func_uint8_t_u_u((**l_157), 4)) , func_50(l_210, g_55, (*l_207), l_204)), g_139))
            {
                int *l_213 = &g_134.f2;
                char *l_245 = (void*)0;
                union U0 l_257 = {0x131C22BA50A0FA09LL};
                unsigned long long **l_259 = &g_55;
                long long *l_260 = (void*)0;
                long long *l_261 = (void*)0;
                long long *l_262 = &g_111;
                int *l_263 = &g_44;
                if (p_17)
                {
                    for (g_75 = 0; (g_75 > 56); g_75 = safe_add_func_int16_t_s_s(g_75, 4))
                    {
                        l_213 = (*l_203);
                    }
                }
                else
                {
                    unsigned char l_214 = 0x30L;
                    union U1 *l_217 = &g_218;
                    long long **l_234 = &g_232;
                    long long ***l_233 = &l_234;
                    unsigned short *l_243 = &g_78;
                    union U0 *l_246 = &g_247;
                    char l_248 = 0x48L;
                    unsigned *l_249 = &g_132;
                    unsigned *l_251 = &g_252;
                    (*g_154) = (p_16.f3 , ((l_214 || (safe_div_func_uint8_t_u_u((p_17 = ((((*l_213) = (((((*l_213) || ((**l_157) <= g_179)) >= (((l_217 = &g_159) != (void*)0) == (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((0L && ((safe_lshift_func_int8_t_s_u((**l_203), g_111)) && (*l_207))), 2)) > p_16.f3), 0xDAL)))) || (**l_157)) >= l_214)) | g_75) && 18446744073709551609UL)), 0x27L))) & g_30));
                    (*g_154) = p_17;
                    (*l_207) = (safe_mod_func_uint16_t_u_u((((*l_201) || (((*g_231) = func_56((*l_213), ((*l_251) = (0x0663B70AC92BCF4DLL == (((*l_249) = (p_19 ^ (((safe_rshift_func_uint8_t_u_u(((((*l_246) = func_20((g_231 != ((*l_233) = (void*)0)), ((safe_div_func_uint64_t_u_u(func_31(((((*l_243) = ((safe_add_func_int16_t_s_s((((*g_40) & (safe_unary_minus_func_int16_t_s((safe_sub_func_uint64_t_u_u((l_242 != 0xFDB359306392A377LL), (*l_213)))))) > 0x6EL), p_16.f0)) , g_81)) || p_17) || 1L), l_207, &g_76), 1UL)) , l_244), g_232, l_245)) , 0xB83AE85CDDA55863LL) > 0xA4600C22193E6AD7LL), l_248)) , p_16.f2) != l_214))) > l_250))), (*g_139), g_81, (**l_157))) == (void*)0)) , 0x2638L), (-2L)));
                    (*l_207) = ((((g_247 , (safe_mod_func_int16_t_s_s((((*l_246) = (((((g_30 , (*l_207)) || func_31((**l_203), &g_44, (g_103 , l_249))) , ((safe_sub_func_uint8_t_u_u(p_16.f2, 0xD0L)) , 18446744073709551615UL)) , 0xB74D902FL) , l_257)) , g_132), (*l_207)))) == p_16.f3) && 0xB807L) , 0x35227E04L);
                }
                (*g_154) = func_31((*l_201), ((*l_206) = (void*)0), (*l_157));
                if ((l_258 , func_31((**l_203), l_213, (*l_157))))
                {
                    int *l_265 = &g_134.f2;
                    (*l_263) = func_31((((void*)0 == &l_207) <= func_31((**l_157), ((*l_206) = l_263), &g_76)), l_207, ((*l_207) , l_265));
                }
                else
                {
                    (*l_213) = (*g_154);
                }
            }
            else
            {
                unsigned long long **l_267 = &g_55;
                unsigned long long ***l_266 = &l_267;
                unsigned long long **l_269 = &l_210;
                unsigned long long ***l_268 = &l_269;
                int l_272 = 0xE1387A81L;
                union U0 l_273 = {0xF2928FB19411915DLL};
                unsigned long long *l_275 = &g_247.f0;
                long long *l_276 = &g_111;
                (*l_268) = ((*l_266) = &g_55);
                (*l_264) = (safe_mod_func_uint64_t_u_u((~(*p_18)), func_31(((*l_276) = (l_272 || ((*l_275) = (l_273 , (p_16.f0 = (l_274 > ((*l_264) = (*g_40)))))))), &g_76, &l_272)));
            }
        }
        else
        {
            union U0 *l_278 = &g_134;
            union U0 **l_277 = &l_278;
            int *l_313 = &g_247.f2;
            char * const l_321 = &l_244;
            union U1 l_329 = {0};
            short **l_348 = &l_180;
            unsigned long long *l_376 = &g_134.f0;
            unsigned char l_392 = 0x46L;
            if (((**l_206) = 0xB230E549L))
            {
                union U0 ***l_279 = &l_277;
                short **l_280 = &l_180;
                short ***l_281 = (void*)0;
                short ***l_282 = &l_280;
                union U1 *l_285 = &g_122;
                int *l_294 = &g_44;
                (*l_279) = l_277;
                (*l_282) = l_280;
                (*g_97) = p_17;
                (*g_154) = ((5L && ((func_31((safe_rshift_func_int8_t_s_s(((l_285 != ((*l_163) = ((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_132 ^ p_17), (((*g_97) <= l_292) <= ((void*)0 == g_293)))), (((0x60L < g_179) , (*g_154)) , g_96))) , (void*)0))) , (-6L)), 6)), l_294, &g_76) & 18446744073709551614UL) || g_111)) < p_16.f0);
            }
            else
            {
                union U1 l_317 = {0};
                int l_322 = 0L;
                union U0 ** const l_382 = &l_278;
                union U0 **l_383 = (void*)0;
                union U0 ***l_384 = (void*)0;
                union U0 ***l_385 = &l_383;
                unsigned short *l_427 = (void*)0;
                unsigned short **l_426 = &l_427;
                union U1 l_435 = {0};
                if ((p_16.f2 = p_19))
                {
                    int *l_319 = &g_76;
                    short l_320 = (-3L);
                    for (g_94 = 0; (g_94 < 14); g_94++)
                    {
                        char **l_304 = &l_303;
                        unsigned l_314 = 0xCEBE0902L;
                        long long *l_315 = &l_274;
                        unsigned *l_316 = &g_134.f3;
                        int **l_324 = (void*)0;
                        int **l_325 = (void*)0;
                        int **l_326 = &l_313;
                        (*l_206) = &g_44;
                        (*l_206) = &g_44;
                        (*l_326) = ((l_322 = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((p_16 , 0UL), (+(((*l_319) = (p_19 > ((func_31(((*l_319) = (p_19 , ((*l_315) = (safe_div_func_int32_t_s_s((((*l_304) = l_303) != (((safe_add_func_uint32_t_u_u(func_31(func_31((((!(((safe_rshift_func_uint16_t_u_u(((((*l_316) = ((safe_mod_func_int64_t_s_s(((*l_315) = (safe_add_func_uint32_t_u_u(func_31(p_17, l_313, &g_76), l_314))), p_17)) , p_19)) , l_317) , p_17), g_132)) == l_318) < g_29)) ^ 0x4C9EL) >= p_19), l_319, l_319), l_319, (*l_203)), l_320)) <= 1UL) , l_321)), l_314))))), &g_44, l_316) != (-9L)) | 0x4A4447EBL))) , (*l_313))))), (*l_313)))) , l_323);
                    }
                    (*g_97) = (*l_313);
                    if ((l_322 = ((*g_97) = (*l_313))))
                    {
                        unsigned long long *l_327 = &g_247.f0;
                        int *l_328 = &g_44;
                        (*l_203) = func_50(g_232, l_327, ((g_247.f2 | (((((*l_182) = 252UL) , ((*l_319) <= p_16.f3)) && func_31((*l_319), l_328, &l_322)) || (**l_157))) , p_19), l_329);
                        (*l_206) = &g_44;
                        (*l_157) = l_313;
                    }
                    else
                    {
                        (*l_277) = &p_16;
                        (*l_313) = (+(*g_97));
                        return g_103;
                    }
                    return (*l_313);
                }
                else
                {
                    long long *l_332 = &g_111;
                    int *l_338 = &l_322;
                    short l_358 = 0x10A6L;
                    long long *l_363 = &l_274;
                    union U1 l_379 = {0};
                    for (l_250 = (-5); (l_250 != 15); l_250++)
                    {
                        if ((*g_97))
                            break;
                    }
                    if (((**l_206) = (((*l_332) = (0x93L < 0UL)) != (safe_add_func_uint8_t_u_u(p_17, 255UL)))))
                    {
                        int l_335 = 3L;
                        unsigned long long **l_339 = &g_55;
                        p_16.f2 = l_335;
                        (**l_157) = (safe_mod_func_uint32_t_u_u(func_31(func_31(((((func_31(((g_293 != g_293) , p_17), l_338, func_50(g_232, (g_340 = ((*l_339) = (void*)0)), p_19, g_161)) >= p_17) && l_322) < (*l_313)) & 8L), g_139, l_338), &l_322, l_338), 0x5A876B3CL));
                        return (*l_313);
                    }
                    else
                    {
                        unsigned long long **l_344 = &g_55;
                        unsigned long long ***l_343 = &l_344;
                        union U1 **l_349 = (void*)0;
                        union U1 **l_350 = (void*)0;
                        union U1 **l_351 = &l_158;
                        (*l_203) = (*l_157);
                        (*l_201) = (safe_mod_func_uint32_t_u_u((((((*g_340) = 18446744073709551615UL) > p_16.f3) || (0UL | ((&p_18 != ((*l_343) = &g_340)) == ((l_345 == (l_348 = l_347)) > p_16.f2)))) && (*l_338)), (*l_201)));
                        g_352 = ((*l_351) = ((*l_163) = &g_161));
                    }
                    (*l_338) = ((((*l_182) = (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((func_31(l_358, &g_44, ((*l_203) = (void*)0)) & ((safe_sub_func_int8_t_s_s((*l_323), p_17)) > ((*l_363) = ((*l_332) = ((safe_rshift_func_int8_t_s_s((((*l_180) = g_247.f0) ^ p_16.f3), (**l_157))) ^ (*l_338)))))) <= 0xB7E7L), l_322)), l_322))) == (**l_157)) || 0xC024L);
                    if ((**l_157))
                    {
                        long long ** const *l_370 = &g_231;
                        int l_371 = 0x6A065113L;
                        (*l_277) = func_45(&g_76, g_55, func_35((((*p_18) = (safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((p_16.f3 <= (*l_313)), ((*g_340) & ((((l_329 , (safe_rshift_func_int16_t_s_u(g_132, 10))) > (*g_40)) , (((*l_321) = (((*p_18) , p_18) == (void*)0)) , l_317)) , 18446744073709551610UL)))), 4))) , (void*)0), g_181, p_17, l_338), (*l_338));
                        (*l_163) = (*l_163);
                        (*l_206) = (*l_206);
                        l_338 = &g_76;
                    }
                    else
                    {
                        unsigned long long **l_377 = (void*)0;
                        unsigned long long **l_378 = &g_340;
                        (*l_203) = &g_44;
                        g_139 = func_50(((*l_378) = ((*l_313) , (void*)0)), p_18, (p_16.f2 , p_16.f3), l_379);
                        (*l_203) = (void*)0;
                    }
                }
                if ((safe_mod_func_uint8_t_u_u(((*l_182) = g_94), (((p_17 != (l_382 == ((*l_385) = l_383))) || ((p_19 <= ((((safe_div_func_int32_t_s_s((0x28338B1BL > g_96), func_31(p_19, l_313, &l_322))) < 0x7CB8L) , (void*)0) != g_340)) == 0L)) ^ 0x4D47L))))
                {
                    g_139 = &l_322;
                    return g_76;
                }
                else
                {
                    unsigned long long **l_393 = &l_372;
                    int l_411 = (-1L);
                    unsigned char **l_455 = &l_182;
                    long long *l_458 = &l_274;
                    if (func_31(l_322, l_313, &l_322))
                    {
                        short l_410 = 0x9C96L;
                        int l_414 = 1L;
                        (*g_139) = (p_16.f3 >= (**l_157));
                        (*l_206) = &g_44;
                        (*g_154) = (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((((((*g_139) = p_17) > (safe_rshift_func_int8_t_s_u((!(((safe_div_func_uint32_t_u_u((func_31((((void*)0 == l_426) < (*l_313)), &l_414, &l_414) || (((l_317 , 1UL) != p_16.f3) ^ p_16.f3)), p_17)) > 0UL) < 0x4B269A4FFE74A82DLL)), p_16.f3))) | (*l_313)) != l_411), p_17)), 0x99C365DEL));
                    }
                    else
                    {
                        unsigned l_428 = 0UL;
                        union U0 **l_437 = &g_432;
                        (*g_154) = l_428;
                        (*l_157) = l_313;
                        (*g_436) = (l_411 <= (safe_mod_func_uint64_t_u_u((((*l_385) = g_431) != (func_31(p_16.f2, ((*l_206) = (l_435 , (void*)0)), g_436) , l_437)), p_19)));
                        (*l_157) = &g_44;
                    }
                    (*g_139) = (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((!(safe_add_func_int8_t_s_s((*l_313), (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_19, ((*l_454) = (((*l_455) = (((safe_div_func_int8_t_s_s(func_31(((*l_323) >= (safe_rshift_func_uint16_t_u_s(g_76, (p_19 & 1UL)))), &g_44, l_313), 0x0EL)) >= (**l_157)) , l_454)) != &g_94)))), g_132)) & 0xA303L), 247UL))))), g_41)), 6));
                    if (func_31(((safe_add_func_uint32_t_u_u(p_17, 5UL)) , (l_411 == (0x1AD7AD6CL >= (((*l_458) = (p_17 >= func_31(l_322, l_313, &g_44))) == (*p_18))))), &g_76, &g_76))
                    {
                        l_411 = (~((*l_264) = (**l_157)));
                    }
                    else
                    {
                        (*g_436) = (func_31((&g_252 == ((*l_323) , l_264)), &g_76, &l_411) == 65533UL);
                        (*g_139) = l_411;
                        (*g_154) = ((safe_add_func_int16_t_s_s(((void*)0 != &g_103), (safe_lshift_func_int8_t_s_u((g_75 , ((*l_173) = (l_411 , ((*l_321) = func_31((((+(((g_181 || g_134.f0) < ((*l_454) = g_41)) < ((*p_18) >= 0xB3E37A239617B31BLL))) , 255UL) <= l_322), &g_76, &g_44))))), l_322)))) != p_16.f2);
                        (*g_154) = 0x58150582L;
                    }
                }
            }
        }
        (*g_436) = ((*l_323) , (safe_add_func_uint64_t_u_u(func_31((*l_323), &g_76, (*l_157)), ((((void*)0 == &g_55) && (safe_add_func_int16_t_s_s((((*l_180) = (((*l_470) = (((*l_467) = 8L) , (safe_sub_func_int32_t_s_s(((-6L) != (-1L)), 0xB212999AL)))) != (*l_264))) | g_252), p_16.f2))) < 0UL))));
        (*l_203) = (*l_157);
    }
    (*l_157) = &g_76;
    return p_19;
}







static union U0 func_20(unsigned p_21, char p_22, unsigned long long * p_23, char * p_24)
{
    unsigned l_145 = 1UL;
    unsigned *l_150 = &g_132;
    unsigned short l_151 = 0x7AE5L;
    unsigned l_152 = 0UL;
    union U1 l_153 = {0};
    union U0 l_155 = {8UL};
    g_154 = &g_41;
    return l_155;
}







static unsigned func_31(long long p_32, int * p_33, int * p_34)
{
    return p_32;
}







static union U1 func_35(int * p_36, unsigned short p_37, short p_38, int * p_39)
{
    int *l_43 = &g_44;
    union U0 l_64 = {0x80D0E101EAE88378LL};
    unsigned short *l_74 = &g_75;
    unsigned short *l_77 = &g_78;
    unsigned short **l_79 = &l_77;
    char *l_80 = &g_81;
    unsigned long long *l_82 = &l_64.f0;
    char l_83 = 1L;
    long long l_84 = 0L;
    union U1 l_86 = {0};
    union U0 *l_136 = &g_134;
    union U0 **l_135 = &l_136;
    int **l_137 = &l_43;
    (*l_43) = (*p_39);
    (*l_135) = func_45(func_50(g_55, func_56(g_44, ((safe_div_func_int32_t_s_s(((*l_43) || (l_64 , (p_38 < ((safe_lshift_func_int16_t_s_u(((((((safe_mod_func_uint64_t_u_u(((*l_82) = (safe_sub_func_uint8_t_u_u((((safe_unary_minus_func_uint16_t_u(((g_76 = ((*l_74) = g_30)) >= (l_74 != ((*l_79) = l_77))))) , (l_80 != (void*)0)) | p_37), p_38))), l_83)) <= 2L) < g_44) && 0L) , g_81) >= g_30), p_38)) != (*l_43))))), g_81)) > 255UL), (*p_39), l_84, (*l_43)), (*l_43), l_86), l_82, g_122, p_37);
    (*l_137) = (g_30 , p_36);
    return g_122;
}







static union U0 * func_45(int * const p_46, unsigned long long * const p_47, union U1 p_48, unsigned char p_49)
{
    int l_127 = 0x8D80EE50L;
    const int l_128 = (-1L);
    unsigned *l_131 = &g_132;
    union U0 *l_133 = &g_134;
    (*p_46) = ((safe_div_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u(((((void*)0 == &g_81) > (l_127 = ((l_127 && 0xE0669094389381DCLL) ^ l_127))) <= p_49), 10)) > (((((l_128 || ((*l_131) = ((safe_mod_func_uint16_t_u_u((!g_30), 0xE1B8L)) ^ 1UL))) != p_49) , g_78) && 5UL) < l_128)) , 0xDF1EL) & g_103), g_81)) == p_49);
    return l_133;
}







static int * func_50(unsigned long long * p_51, unsigned long long * p_52, long long p_53, union U1 p_54)
{
    int l_87 = 0x05992E41L;
    const char l_90 = (-1L);
    unsigned char *l_93 = &g_94;
    long long *l_95 = &g_96;
    int *l_121 = &g_44;
    if ((((l_87 | (!(l_87 ^ (safe_rshift_func_int8_t_s_u((l_87 && l_90), 5))))) , (l_87 , ((safe_add_func_uint64_t_u_u((((*l_93) = g_30) , g_94), ((*l_95) = (g_78 , p_53)))) >= p_53))) && p_53))
    {
        g_97 = &g_44;
    }
    else
    {
        unsigned char *l_102 = &g_103;
        int l_104 = 1L;
        int **l_109 = &g_97;
        long long *l_110 = &g_111;
        unsigned short *l_112 = &g_75;
        int *l_113 = &g_44;
        (*l_113) = (safe_add_func_int16_t_s_s((g_94 | 3L), ((*l_112) = ((((*l_110) = ((0x2D060950L && (safe_sub_func_int64_t_s_s(((*l_95) = g_44), (0xCCL > ((*l_102) = (g_30 >= 0x46F67A21E2C279A1LL)))))) < ((l_104 || (((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((*l_109) = &g_76) == (void*)0), p_53)), 2)) , g_75) | l_90)) >= 18446744073709551607UL))) <= l_90) & 1L))));
    }
    (*g_97) = 0xB4E22DD2L;
    if ((*g_97))
    {
        int *l_114 = &g_76;
        int **l_115 = (void*)0;
        int **l_116 = &g_97;
        (*l_116) = l_114;
    }
    else
    {
        int *l_117 = (void*)0;
        int **l_118 = &g_97;
        long long **l_119 = &l_95;
        long long ***l_120 = &l_119;
        (*l_118) = l_117;
        (*l_120) = l_119;
    }
    return l_121;
}







static unsigned long long * func_56(unsigned short p_57, unsigned p_58, int p_59, short p_60, short p_61)
{
    int *l_85 = &g_76;
    (*l_85) = 0L;
    return g_55;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_134.f2, "g_134.f2", print_hash_value);
    transparent_crc(g_134.f3, "g_134.f3", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
