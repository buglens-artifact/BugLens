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
   char * f0;
   const char f1;
   unsigned f2;
};

union U1 {
   char f0;
   char * const f1;
   unsigned char f2;
   int f3;
};

union U2 {
   unsigned f0;
};

union U3 {
   int f0;
   volatile unsigned f1;
};

union U4 {
   volatile char * f0;
   const unsigned char f1;
   volatile unsigned f2;
   const unsigned short f3;
   char * const f4;
};

union U5 {
   unsigned short f0;
};

union U6 {
   int f0;
   volatile char f1;
   volatile char * const f2;
};


static volatile int g_2 = (-1L);
static int g_3 = 0x0D461E3FL;
static union U3 g_7 = {-1L};
static union U3 * const g_6 = &g_7;
static int g_28 = 0xDF7B1466L;
static const char g_31 = (-3L);
static int * const *g_54 = (void*)0;
static unsigned g_65 = 4UL;
static char g_74 = 0L;
static char g_76 = 0x89L;
static short g_79 = 0x6CBCL;
static unsigned short g_80 = 0x3958L;
static unsigned char g_90 = 9UL;
static union U6 g_95 = {1L};
static union U6 *g_94 = &g_95;
static int g_116 = (-7L);
static union U1 g_135 = {0x1AL};
static union U1 *g_134 = &g_135;
static union U1 g_137 = {-6L};
static volatile union U4 g_139 = {0};
static volatile union U4 *g_138 = &g_139;
static unsigned g_152 = 0x1A10FB8DL;
static int *g_163 = &g_135.f3;
static int g_210 = 1L;
static union U5 g_214 = {65535UL};
static volatile union U0 g_232 = {0};
static volatile union U0 *g_231 = &g_232;
static union U4 g_267 = {0};
static union U1 g_298 = {-1L};
static union U2 g_302 = {4294967292UL};
static unsigned char g_329 = 1UL;
static unsigned short g_331 = 1UL;
static short g_333 = 0x67B0L;
static char g_336 = 0xC3L;
static union U4 *g_344 = &g_267;
static union U4 **g_343 = &g_344;
static union U4 ***g_342 = &g_343;
static int * const g_355 = (void*)0;
static int * const *g_354 = &g_355;
static volatile union U2 g_377 = {0x4F0EBA9AL};
static const volatile union U2 *g_376 = &g_377;
static const volatile union U2 **g_375 = &g_376;
static union U6 g_424 = {0xBA7A7D87L};
static union U3 g_452 = {0x071430AAL};
static union U3 *g_451 = &g_452;
static union U0 g_457 = {0};
static char g_468 = 0x8EL;
static union U4 *g_531 = &g_267;
static unsigned char g_548 = 0x7EL;
static short g_550 = 3L;
static volatile unsigned short *g_583 = (void*)0;
static volatile unsigned short **g_582 = &g_583;



static union U2 func_1(void);
static const int * func_9(int * p_10, const int * p_11, union U3 * p_12);
static const int * func_14(int * p_15, unsigned p_16, char p_17);
static int * func_18(union U3 * p_19);
static union U3 * func_20(int * p_21, const union U0 p_22);
static char ** func_24(int p_25, const char ** p_26);
static union U5 * func_37(int ** p_38);
static int ** func_39(union U5 * p_40);
static union U5 * func_41(union U5 * p_42, unsigned char p_43, union U1 p_44, union U3 * p_45, const unsigned p_46);
static unsigned short func_52(int * const * p_53);
static union U2 func_1(void)
{
    union U3 *l_8 = &g_7;
    int *l_13 = &g_7.f0;
    const union U0 l_23 = {0};
    int l_460 = (-7L);
    char *l_467 = &g_468;
    const int *l_581 = &g_3;
    const int **l_580 = &l_581;
    volatile unsigned short ***l_584 = &g_582;
    union U2 l_585 = {0x55B47B51L};
    for (g_3 = 11; (g_3 < 22); g_3 = safe_add_func_int16_t_s_s(g_3, 4))
    {
        l_8 = g_6;
    }
    (*l_580) = func_9(l_13, func_14(func_18(func_20(&g_3, l_23)), g_302.f0, ((*l_467) = (l_460 > ((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(g_452.f0, (+(safe_add_func_int32_t_s_s(0xE5F79DBFL, l_460))))) == l_460), l_460)) && g_424.f0)))), g_451);

    ;

    ;

    ;

    ;
    ;
    (*l_584) = g_582;
    return l_585;

    }







static const int * func_9(int * p_10, const int * p_11, union U3 * p_12)
{
    return &g_116;


}







static const int * func_14(int * p_15, unsigned p_16, char p_17)
{
    unsigned l_488 = 0UL;
    union U6 **l_492 = &g_94;
    union U6 ***l_491 = &l_492;
    int l_509 = 0x03701D3AL;
    int *l_528 = &l_509;
    if ((*p_15))
    {
        union U3 * const *l_470 = &g_451;
        union U3 * const **l_469 = &l_470;
        int l_479 = 0x94A519DDL;
        union U6 **l_490 = &g_94;
        union U6 ***l_489 = &l_490;
        unsigned l_503 = 8UL;
        union U6 *l_568 = &g_424;
        union U6 **l_567 = &l_568;
        (*l_469) = &g_6;

        ;
        (*g_343) = (**g_342);
        for (g_7.f0 = 21; (g_7.f0 == (-29)); g_7.f0 = safe_sub_func_int32_t_s_s(g_7.f0, 7))
        {
            int *l_486 = &g_452.f0;
            char *l_487 = &g_468;
            union U6 ****l_493 = &l_491;
            union U6 ***l_495 = (void*)0;
            union U6 ****l_494 = &l_495;
            unsigned l_496 = 0x5F262337L;
            (*p_15) = (safe_mul_func_uint8_t_u_u((l_488 = (!(safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(0x74FC59C9L, l_479)), (safe_mod_func_int32_t_s_s(((((*l_487) = (p_17 == (((g_377.f0 > 0x91L) > (l_486 == l_486)) <= (*l_486)))) || (*l_486)) | g_210), 4294967295UL)))))), l_479));
            (*p_15) = (l_489 != ((*l_494) = ((*l_493) = l_491)));

            ;
            if (((l_496 = 0xBD8F1845L) > (safe_div_func_uint16_t_u_u(0x021FL, (safe_div_func_int8_t_s_s((g_135.f0 >= (l_503 > l_488)), (p_17 = 0x45L)))))))
            {
                if (l_503)
                    break;
                (*p_15) = (*p_15);
            }
            else
            {
                unsigned *l_506 = (void*)0;
                unsigned *l_507 = &g_302.f0;
                int l_508 = 1L;
                if ((*p_15))
                {
                    (*p_15) = (*p_15);
                }
                else
                {
                    return &g_3;



                }
                l_509 = ((((*l_507) = (safe_mod_func_uint32_t_u_u(g_7.f1, (p_16 = p_16)))) != l_508) | ((*l_487) = l_479));
            }
            for (l_496 = 7; (l_496 != 43); l_496++)
            {
                unsigned short *l_520 = &g_80;
                unsigned short *l_525 = &g_214.f0;
                unsigned short *l_526 = &g_331;
                int *l_529 = &g_116;
                char l_532 = 1L;
                if ((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((~((((*l_487) = (safe_lshift_func_uint8_t_u_u((((0xF53ABEA1L <= (g_7.f1 & 0x55A9L)) <= (safe_add_func_int32_t_s_s((((*l_520) = 0xDE8FL) && (safe_div_func_int16_t_s_s(g_298.f0, l_479))), (safe_mul_func_uint16_t_u_u(g_452.f0, ((*l_526) = ((*l_525) = 1UL))))))) && g_302.f0), l_509))) != l_509) <= p_17)), l_479)), 0xBCL)))
                {
                    return &g_116;



                }
                else
                {
                    if (((*p_15) != (0L == 0L)))
                    {
                        return p_15;



                    }
                    else
                    {
                        int **l_527 = &g_163;
                        (*l_527) = &g_3;

                        ;
                        (*l_486) = 0x905F4BA0L;
                        (*l_527) = p_15;

                        ;
                    }

                    ;
                    g_163 = l_528;

                    ;
                }

                ;
            }
        }


        (*l_567) = ((**l_491) = (*l_492));

        ;
    }
    else
    {
        int l_571 = 1L;
        unsigned short *l_578 = &g_331;
        unsigned short *l_579 = &g_214.f0;
        (*p_15) = (safe_add_func_uint8_t_u_u(l_571, (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(func_52(&l_528), 4294967290UL)), (safe_sub_func_uint16_t_u_u(((*l_579) = ((*l_578) = (((((-5L) && p_17) == p_16) | p_16) | (((0UL || 9UL) && l_571) < p_17)))), p_17))))));

    }


    (*p_15) = (*l_528);
    return p_15;



}







static int * func_18(union U3 * p_19)
{
    short l_246 = 0xEEA4L;
    int **l_247 = &g_163;
    int ***l_248 = &l_247;
    int * const **l_249 = (void*)0;
    int * const **l_250 = (void*)0;
    int * const **l_251 = &g_54;
    int *l_252 = &g_3;
    const unsigned short *l_257 = &g_214.f0;
    const unsigned short **l_258 = (void*)0;
    const unsigned short **l_259 = &l_257;
    const unsigned short *l_260 = (void*)0;
    char *l_261 = &g_135.f0;
    union U4 * const l_266 = &g_267;
    union U4 * const *l_265 = &l_266;
    union U2 *l_301 = &g_302;
    union U5 *l_363 = &g_214;
    union U6 *l_421 = &g_95;
    union U1 l_450 = {0x84L};
    const union U0 * const l_456 = &g_457;
    (*l_252) = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_116 || 0x2D125292L), (l_246 ^ l_246))), (((*l_248) = l_247) == ((*l_251) = &g_163))));

    ;
    if ((safe_div_func_uint32_t_u_u(4UL, (((safe_rshift_func_int16_t_s_u(((g_74 != g_3) == (((*l_259) = l_257) == (void*)0)), (((void*)0 != l_260) || (*l_252)))) < ((*l_261) = (-1L))) ^ (*l_252)))))
    {
        union U6 **l_263 = &g_94;
        union U6 ***l_262 = &l_263;
        (*l_262) = &g_94;
    }
    else
    {
        unsigned short *l_264 = &g_214.f0;
        int l_284 = 5L;
        union U1 *l_296 = &g_137;
        int *l_337 = &l_284;
        const union U2 *l_379 = (void*)0;
        const union U2 **l_378 = &l_379;
        unsigned l_387 = 0x886D37CDL;
        union U5 *l_397 = &g_214;
        union U6 *l_423 = &g_424;
        union U0 **l_425 = (void*)0;
        union U1 l_453 = {7L};
        if (((&g_80 == l_264) & (*l_252)))
        {
            union U4 * const **l_268 = &l_265;
            int l_279 = (-2L);
            union U6 **l_295 = &g_94;
            union U6 ***l_294 = &l_295;
            union U2 **l_303 = (void*)0;
            if ((&g_138 != ((*l_268) = l_265)))
            {
                const int *l_269 = &g_7.f0;
                const int **l_270 = &l_269;
                unsigned *l_275 = (void*)0;
                unsigned *l_276 = &g_65;
                int l_285 = 0x32E19209L;
                volatile union U0 *l_299 = (void*)0;
                union U5 *l_300 = (void*)0;
                (*l_270) = l_269;
                if (((safe_rshift_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((**l_270), (+((*l_269) == 0UL)))) >= ((*l_276) = 4294967295UL)) != 0UL), (l_279 = ((safe_div_func_int8_t_s_s((**l_270), (l_279 ^ (safe_sub_func_int8_t_s_s(((*l_252) == (safe_lshift_func_int16_t_s_u(((l_285 = l_284) != (*l_269)), 2))), g_7.f1))))) != l_284)))) | (*l_252)))
                {
                    unsigned short l_288 = 0x7FA8L;
                    union U6 * const **l_293 = (void*)0;
                    union U1 *l_297 = &g_298;
                    if ((safe_lshift_func_uint8_t_u_u(l_288, 1)))
                    {
                        unsigned l_289 = 0x1DA8F8FDL;
                        l_289 = (**l_270);
                        return &g_3;


                    }
                    else
                    {
                        const union U0 l_290 = {0};
                        union U3 *l_292 = &g_7;
                        union U3 **l_291 = &l_292;
                        (*l_291) = func_20(&l_279, l_290);

                        ;
                        (*l_252) = (l_293 == l_294);
                    }

                    l_297 = l_296;

                    ;
                }
                else
                {
                    l_299 = &g_232;

                    ;
                    l_279 = (func_52(func_39(l_300)) ^ g_31);
                }

                ;
                (*l_270) = &g_116;

                ;
            }
            else
            {
                return &g_116;


            }

            l_301 = l_301;
            (*l_247) = &g_3;

            ;
        }
        else
        {
            int * const *l_310 = &l_252;
            unsigned char *l_321 = &g_298.f2;
            short *l_328 = &l_246;
            unsigned short *l_330 = &g_331;
            short *l_332 = &g_333;
            unsigned char *l_334 = &g_135.f2;
            char *l_335 = &g_336;
            (**l_310) = (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(0x46L, func_52(l_310))), (&g_210 == l_252))), (safe_lshift_func_int8_t_s_u(((*l_335) = (safe_add_func_uint8_t_u_u((((*l_334) = (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((*l_264) = (safe_mod_func_uint8_t_u_u(g_135.f2, ((*l_321) = 4UL)))), (safe_mul_func_uint16_t_u_u((**l_310), ((*l_332) = (safe_mul_func_uint16_t_u_u(((*l_330) = (safe_mul_func_int16_t_s_s(((g_329 = ((*l_328) = g_210)) > g_31), 65535UL))), g_152))))))), g_135.f0))) | l_284), 0UL))), l_284))));

            (*l_252) = l_284;
            l_337 = (*l_310);

            ;
        }


        ;
        if ((g_214.f0 >= (safe_sub_func_int16_t_s_s((+(safe_lshift_func_uint8_t_u_s(g_210, 3))), (g_342 != (void*)0)))))
        {
            int *l_351 = &g_7.f0;
            union U5 *l_383 = &g_214;
            int l_390 = 0x717972E5L;
            union U3 *l_394 = &g_7;
            const unsigned char *l_417 = &g_329;
            const unsigned char ** const l_416 = &l_417;
            union U6 **l_422 = (void*)0;
            (*l_247) = &l_284;

            ;
            if ((safe_rshift_func_uint16_t_u_u((*l_337), (g_79 != g_76))))
            {
                for (g_336 = 0; (g_336 != 29); ++g_336)
                {
                    for (l_284 = 0; (l_284 < (-27)); l_284--)
                    {
                        int **l_352 = &l_337;
                        (*l_352) = ((**l_248) = l_351);

                        ;
                        ;
                    }
                    (*l_252) = (*l_337);
                }

                ;
                ;
            }
            else
            {
                int * const *l_353 = &l_351;
                int * const *l_358 = &l_337;
                char l_366 = 0xA9L;
                union U2 **l_388 = (void*)0;
                union U2 **l_389 = &l_301;
                union U3 **l_391 = (void*)0;
                union U3 *l_393 = &g_7;
                union U3 **l_392 = &l_393;
                union U5 *l_420 = &g_214;
                if (((*l_337) && func_52((g_354 = (g_54 = l_353)))))
                {
                    union U2 *l_360 = &g_302;
                    for (g_333 = 0; (g_333 <= (-12)); --g_333)
                    {
                        (**l_353) = func_52(l_358);
                        (*l_337) = (safe_unary_minus_func_int16_t_s(((void*)0 != l_360)));
                    }
                }
                else
                {
                    short l_371 = 0x1152L;
                    union U1 **l_373 = &g_134;
                    union U4 **l_386 = &g_344;
                    (*g_343) = (void*)0;

                    ;
                    if ((((safe_sub_func_int32_t_s_s(func_52((g_354 = func_39(l_363))), (g_152 = (safe_mul_func_int16_t_s_s((g_329 & (g_336 && l_366)), (safe_sub_func_int16_t_s_s((**l_358), ((~g_333) != (safe_mul_func_uint16_t_u_u((l_371 > (*l_337)), g_302.f0)))))))))) >= g_302.f0) == g_95.f0))
                    {
                        int *l_372 = &l_284;
                        short *l_374 = &g_79;
                        l_337 = l_372;

                        ;
                        (*l_337) = (((*l_374) = (&g_134 != l_373)) | ((**l_353) || 9L));
                        (*l_252) = (g_375 != l_378);
                    }
                    else
                    {
                        int **l_380 = &l_252;
                        union U5 *l_384 = &g_214;
                        short *l_385 = &g_79;
                        (*g_375) = (void*)0;

                        ;
                        (*l_380) = ((**l_248) = l_351);

                        ;
                        ;
                        (*l_337) = (safe_rshift_func_uint8_t_u_s((0xC9A6L ^ ((*l_385) = func_52(((*l_251) = func_39((l_384 = (l_383 = (void*)0))))))), g_31));

                        ;

                        ;
                        ;
                        l_387 = (l_386 != (*g_342));
                    }


                    ;
                    ;
                    ;
                    ;
                    (**l_353) = (!((**l_358) = ((void*)0 != &l_301)));
                    (**l_248) = &g_3;

                    ;
                }

                ;
                ;
                ;
                ;
                ;
                ;
                ;
                l_390 = ((***l_251) = (((*l_389) = l_301) == (*g_375)));

                l_394 = ((*l_392) = p_19);
                if ((*g_163))
                {
                    unsigned l_408 = 3UL;
                    unsigned l_411 = 18446744073709551615UL;
                    unsigned char *l_412 = &g_298.f2;
                    union U4 *l_413 = &g_267;
                    union U6 *l_414 = &g_95;
                    union U6 **l_415 = &g_94;
                    const unsigned char **l_419 = &l_417;
                    const unsigned char ***l_418 = &l_419;
                    (***l_248) = (((safe_add_func_int16_t_s_s(g_331, ((-1L) > ((void*)0 == l_397)))) == (((*l_412) = (safe_div_func_uint8_t_u_u(((**l_353) = (safe_add_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(l_390, ((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(l_408, l_408)), ((safe_div_func_uint32_t_u_u(0xFED3AB3DL, g_336)) > (*l_337)))) && (*l_337)))) > l_411) && (-9L)), 0xF827L))), 0x0EL))) & (**l_358))) || 0x60F0752AL);

                    (***l_248) = ((-8L) >= (l_413 == l_413));
                    (*l_415) = l_414;
                    (*l_418) = l_416;
                }
                else
                {
                    (*l_252) = func_52(func_39(l_420));


                    (*l_247) = &g_116;

                    ;
                    (*l_337) = (*g_163);
                    return &g_116;




                }

            }

            ;
            ;
            ;
            ;
            ;
            ;
            ;
            ;
            l_423 = l_421;

            ;
            (**g_54) = ((void*)0 == l_425);

        }
        else
        {
            union U6 *l_428 = &g_95;
            int *l_433 = (void*)0;
            int l_442 = 1L;
            unsigned char l_449 = 1UL;
            union U1 l_454 = {0xF0L};
            int **l_455 = &l_433;
            const union U0 *l_459 = &g_457;
            const union U0 **l_458 = &l_459;
            for (g_90 = (-1); (g_90 < 5); ++g_90)
            {
                union U6 **l_429 = &l_423;
                union U3 *l_432 = (void*)0;
                union U3 **l_431 = &l_432;
                union U3 ***l_430 = &l_431;
                (*l_429) = l_428;

                ;
                (*l_430) = &p_19;

                ;
                (**l_248) = l_433;

                ;
            }


            ;
            (*l_337) = func_52(func_39(func_41(func_41(func_41(&g_214, (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((*l_337), l_442)), 0UL)) || (*l_337)) > (*l_337)), ((safe_add_func_int16_t_s_s(g_74, (safe_rshift_func_int16_t_s_u((0xD0L == (!(safe_lshift_func_uint8_t_u_s(l_449, 5)))), 10)))) <= g_424.f1))), 0UL)), l_450, g_451, g_80), g_333, l_453, p_19, g_95.f0), l_442, l_454, p_19, g_333)));
            (*l_455) = ((**l_248) = &l_284);

            ;
            ;
            (*l_458) = l_456;

        }


        ;
        ;
        ;
        ;

        ;
        ;
        return &g_3;



    }

    return &g_116;


}







static union U3 * func_20(int * p_21, const union U0 p_22)
{
    int *l_27 = &g_28;
    const char *l_30 = &g_31;
    const char **l_29 = &l_30;
    char *l_222 = &g_135.f0;
    char **l_221 = &l_222;
    char ***l_220 = &l_221;
    union U3 *l_241 = &g_7;
    (*p_21) = g_7.f1;
    (*l_220) = func_24(((*l_27) = g_7.f1), l_29);


    ;
    if ((*p_21))
    {
        int *l_227 = &g_116;
        union U3 *l_230 = &g_7;
        volatile union U0 **l_233 = (void*)0;
        volatile union U0 **l_234 = (void*)0;
        volatile union U0 **l_235 = &g_231;
        for (g_3 = (-2); (g_3 >= (-5)); g_3 = safe_sub_func_uint32_t_u_u(g_3, 8))
        {
            int * const **l_225 = &g_54;
            int l_226 = 0x11735A46L;
            l_226 = func_52(((*l_225) = func_39(&g_214)));

            ;
            l_227 = (void*)0;

            ;
            for (g_76 = 0; (g_76 < 0); g_76++)
            {
                return l_230;


            }
        }

        ;
        (*l_235) = g_231;

    }
    else
    {
        int *l_238 = &g_3;
        union U1 **l_240 = &g_134;
        for (g_152 = 13; (g_152 == 16); g_152++)
        {
            int **l_239 = &g_163;
            (*l_239) = l_238;

            ;
            (*l_239) = l_27;

            ;
        }


        (*l_240) = (void*)0;

        ;
    }


    return l_241;


}







static char ** func_24(int p_25, const char ** p_26)
{
    int l_34 = 0L;
    int *l_36 = &g_3;
    int **l_35 = &l_36;
    union U5 *l_47 = (void*)0;
    union U1 l_48 = {0x9EL};
    union U3 *l_49 = &g_7;
    union U5 **l_215 = &l_47;
    unsigned short *l_218 = &g_80;
    char **l_219 = (void*)0;
    l_34 = (safe_div_func_int8_t_s_s((**p_26), g_2));
    (*l_35) = &g_3;
    (*l_215) = func_37(func_39(func_41(l_47, (**l_35), l_48, l_49, g_7.f0)));

    ;

    (**l_35) = ((func_52(func_39(func_41((*l_215), (g_135.f0 <= ((*l_218) = ((safe_lshift_func_int16_t_s_u((g_7.f0 ^ ((*l_36) = (*l_36))), 10)) && p_25))), l_48, &g_7, p_25))) < g_152) ^ g_95.f0);
    return l_219;


}







static union U5 * func_37(int ** p_38)
{
    union U6 *l_205 = &g_95;
    union U6 **l_206 = &l_205;
    int l_207 = 1L;
    unsigned short *l_211 = &g_80;
    int *l_212 = &g_135.f3;
    union U5 *l_213 = &g_214;
    (*l_206) = l_205;
    l_207 = (g_7.f0 = ((*l_212) = (l_207 > ((*l_211) = (g_210 = (safe_mod_func_int8_t_s_s(l_207, 1UL)))))));

    (*p_38) = &l_207;

    ;
    return l_213;



}







static int ** func_39(union U5 * p_40)
{
    unsigned char l_188 = 255UL;
    int l_189 = 0xB7439DAFL;
    int *l_190 = &g_137.f3;
    l_189 = l_188;
    (*l_190) = 0x466E0B1FL;
    if ((((*l_190) == (*l_190)) == (*l_190)))
    {
        unsigned char *l_191 = &g_90;
        union U1 *l_192 = &g_135;
        int l_195 = 0x88C7F9DBL;
        (*l_190) = ((0xB3L >= ((*l_191) = g_28)) || ((l_192 == (void*)0) < (safe_rshift_func_int8_t_s_u((g_74 < l_195), 1))));
        return &g_163;


    }
    else
    {
        unsigned l_199 = 4294967291UL;
        int **l_203 = (void*)0;
        int *l_204 = &g_7.f0;
        for (g_28 = 0; (g_28 != 5); g_28 = safe_add_func_int16_t_s_s(g_28, 7))
        {
            char l_198 = 1L;
            union U4 *l_200 = (void*)0;
            union U4 **l_201 = &l_200;
            int **l_202 = &g_163;
            (*l_190) = (l_199 = (l_198 ^ (&g_163 == (void*)0)));
            (*l_201) = l_200;
            if (l_199)
                break;
            (*l_202) = &l_189;

            ;
        }


        l_204 = &g_116;

        ;
    }


    return &g_163;



}







static union U5 * func_41(union U5 * p_42, unsigned char p_43, union U1 p_44, union U3 * p_45, const unsigned p_46)
{
    unsigned char l_151 = 0x21L;
    short **l_164 = (void*)0;
    short *l_166 = (void*)0;
    short **l_165 = &l_166;
    short *l_167 = &g_79;
    int *l_168 = &g_3;
    int * const *l_177 = &l_168;
    unsigned *l_184 = (void*)0;
    unsigned *l_185 = &g_65;
    int *l_186 = &g_137.f3;
    union U5 *l_187 = (void*)0;
    for (g_3 = (-20); (g_3 == 29); g_3 = safe_add_func_uint16_t_u_u(g_3, 8))
    {
        int l_147 = 0xD4FF7D93L;
        short l_153 = 1L;
        int * const l_159 = &g_3;
        int * const *l_158 = &l_159;
        unsigned short *l_160 = &g_80;
        int *l_161 = &l_147;
        int **l_162 = &l_161;
        g_2 = (g_135.f3 = (((((0UL || (func_52(g_54) & g_28)) >= l_147) || ((l_151 = ((l_147 || (255UL ^ ((safe_add_func_int32_t_s_s((l_147 >= (((safe_unary_minus_func_uint32_t_u((0x23AE71BBL ^ 4294967295UL))) || g_3) || g_2)), 0x696F087CL)) | p_44.f2))) | p_44.f0)) ^ (-9L))) == g_95.f0) && g_152));

        (*l_161) = (p_44.f0 | (l_153 | ((*l_160) = (0L >= (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_44.f0, (((l_151 == p_44.f2) | ((((func_52(l_158) || func_52(g_54)) && 0xE3L) | l_151) <= (*l_159))) ^ g_31))), (*l_159)))))));
        (*l_161) = p_43;
        g_163 = ((*l_162) = &l_147);

        ;
    }
    (*l_168) = (((*l_165) = (void*)0) != l_167);
    (*l_168) = (*l_168);
    (*l_186) = (((*l_185) = (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(((**l_177) = (safe_sub_func_int32_t_s_s(p_43, func_52(l_177)))), p_43)), ((safe_lshift_func_int8_t_s_u(0xDDL, 2)) ^ (safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((p_46 > g_152), (g_95.f0 & p_44.f2))), p_44.f0))))), 9))) >= 4294967289UL);

    return l_187;


}







static unsigned short func_52(int * const * p_53)
{
    const unsigned l_55 = 0xBDEDBEC1L;
    int *l_56 = (void*)0;
    int *l_57 = &g_7.f0;
    unsigned *l_64 = &g_65;
    char *l_72 = (void*)0;
    char *l_73 = &g_74;
    char *l_75 = &g_76;
    char l_77 = 0xFFL;
    short *l_78 = &g_79;
    unsigned char *l_89 = &g_90;
    unsigned short *l_91 = &g_80;
    unsigned l_106 = 4294967295UL;
    union U6 *l_130 = (void*)0;
    union U3 *l_142 = &g_7;
    int l_144 = 0x3385642BL;
    int *l_145 = (void*)0;
    int *l_146 = &g_137.f3;
    (*l_57) = (!l_55);

    (*l_57) = (safe_add_func_int16_t_s_s(((g_28 != (g_80 = (((*l_78) = (0x6FL != ((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((*l_57) ^ (*l_57)), ((*l_64) = g_3))), 4)) & (safe_mod_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((*l_57), (*l_57))), ((*l_75) = ((*l_73) = g_2)))) > (l_77 != g_31)), 0x207B8A5FL))))) ^ (*l_57)))) == (*l_57)), 0xD4D4L));
    if ((safe_mul_func_int16_t_s_s(g_79, (((*l_91) = (((g_3 | (safe_mul_func_int8_t_s_s((*l_57), (safe_mul_func_int16_t_s_s(((0xAFL >= g_65) || (*l_57)), g_7.f1))))) != ((*l_89) = ((safe_mod_func_uint16_t_u_u((*l_57), (*l_57))) & (*l_57)))) | 0x34CEL)) ^ (*l_57)))))
    {
        unsigned short l_114 = 1UL;
        union U1 *l_136 = &g_137;
        for (g_65 = 11; (g_65 < 16); ++g_65)
        {
            union U6 **l_96 = (void*)0;
            union U6 **l_97 = (void*)0;
            union U6 **l_98 = &g_94;
            int l_101 = 0L;
            int l_113 = 0xCD282601L;
            int *l_115 = &g_116;
            (*l_98) = g_94;
            if ((((safe_add_func_int8_t_s_s((*l_57), (0xF897L | (l_101 | (safe_add_func_int16_t_s_s(l_101, (safe_sub_func_uint8_t_u_u(255UL, l_106)))))))) ^ 0x910E9FB3L) <= ((*l_115) = (safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(((0x3BD28F7DL ^ (safe_mod_func_int32_t_s_s(l_113, g_3))) == l_114), l_114)) >= l_114), 65531UL)))))
            {
                unsigned *l_127 = &l_106;
                unsigned short l_133 = 65532UL;
                if (((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((l_114 == (safe_add_func_uint32_t_u_u(((*l_127) = (safe_lshift_func_uint8_t_u_s((*l_115), 5))), (~(*l_57))))), (((safe_mod_func_int8_t_s_s((l_130 == &g_95), (safe_sub_func_int16_t_s_s((l_133 = (*l_115)), g_31)))) != l_114) != l_114))), 5)) >= (*l_57)), 0xB7L)) || l_133))
                {
                    volatile union U4 **l_140 = (void*)0;
                    volatile union U4 **l_141 = &g_138;
                    l_136 = g_134;

                    ;
                    (*l_141) = g_138;
                    (*l_57) = g_3;
                    (*l_57) = (l_142 != (void*)0);
                }
                else
                {
                    char l_143 = 0x76L;
                    (*l_115) = l_133;
                    if (l_133)
                    {
                        (*l_115) = (g_116 != g_31);
                        return l_143;
                    }
                    else
                    {
                        if (l_143)
                            break;
                    }
                }
            }
            else
            {
                (*l_57) = 0xAED54F57L;
                (*l_115) = (*l_115);
            }
            (*l_115) = ((void*)0 == l_96);
        }

        ;
    }
    else
    {
        l_144 = (*l_57);
    }
    (*l_146) = (*l_57);

    return (*l_146);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    transparent_crc(g_95.f1, "g_95.f1", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_135.f0, "g_135.f0", print_hash_value);
    transparent_crc(g_135.f2, "g_135.f2", print_hash_value);
    transparent_crc(g_137.f0, "g_137.f0", print_hash_value);
    transparent_crc(g_137.f2, "g_137.f2", print_hash_value);
    transparent_crc(g_137.f3, "g_137.f3", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_298.f0, "g_298.f0", print_hash_value);
    transparent_crc(g_298.f2, "g_298.f2", print_hash_value);
    transparent_crc(g_302.f0, "g_302.f0", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_377.f0, "g_377.f0", print_hash_value);
    transparent_crc(g_424.f0, "g_424.f0", print_hash_value);
    transparent_crc(g_424.f1, "g_424.f1", print_hash_value);
    transparent_crc(g_452.f0, "g_452.f0", print_hash_value);
    transparent_crc(g_452.f1, "g_452.f1", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
