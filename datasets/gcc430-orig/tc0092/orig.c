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
   unsigned f0;
   unsigned f1;
   signed f2 : 16;
   unsigned short f3;
   unsigned short f4;
};

struct S1 {
   signed f0 : 8;
   signed f1 : 9;
   signed f2 : 30;
   signed f3 : 23;
};


static unsigned g_10 = 0x44A75432L;
static struct S1 g_68 = {-10,-9,1210,834};
static const struct S0 g_71 = {18446744073709551615UL,6UL,-105,0UL,0UL};
static struct S1 g_97 = {-3,19,470,-1789};
static struct S0 g_128 = {0xE86AE0A1L,0UL,-235,0xB08BL,0xBAD6L};
static volatile int g_320 = 0xDD14F1A5L;
static volatile int g_321 = 0x2662F6EAL;
static unsigned g_353 = 0x8A7EA4D0L;
static struct S0 g_413 = {0xE77AF36FL,3UL,-149,0x3BACL,0x7F68L};
static int g_455 = (-5L);
static volatile unsigned short g_504 = 0xD22AL;
static int g_554 = 0xE3FEF050L;
static int g_555 = 0x4A85ADF7L;
static volatile unsigned g_556 = 0x50AC2C4CL;
static volatile int g_575 = 0x79ABB06FL;
static volatile unsigned g_576 = 0UL;
static volatile char g_668 = 0xD7L;
static unsigned g_733 = 1UL;
static short g_780 = 0x1ACFL;
static volatile unsigned g_843 = 18446744073709551615UL;
static struct S0 g_877 = {18446744073709551610UL,4294967295UL,87,0xCFB0L,1UL};
static unsigned g_905 = 1UL;
static unsigned char g_927 = 0UL;
static volatile int g_1002 = 7L;
static volatile int g_1006 = 2L;
static int g_1008 = 0x715F267CL;
static volatile unsigned g_1013 = 0UL;
static volatile int g_1054 = (-3L);



static unsigned func_1(void);
static unsigned short func_7(int p_8, unsigned char p_9);
static char func_13(unsigned p_14, short p_15, unsigned p_16, unsigned p_17);
static unsigned short func_20(const int p_21, unsigned p_22);
static unsigned char func_27(unsigned p_28, short p_29, unsigned char p_30);
static unsigned func_31(struct S0 p_32, int p_33, unsigned p_34, short p_35);
static struct S0 func_36(unsigned short p_37, int p_38, const struct S0 p_39);
static struct S1 func_40(int p_41, struct S1 p_42, short p_43, const struct S0 p_44, short p_45);
static unsigned char func_54(int p_55, unsigned p_56, const unsigned p_57, int p_58);
static unsigned short func_59(unsigned p_60, struct S0 p_61, int p_62, struct S1 p_63);
static unsigned func_1(void)
{
    unsigned l_4 = 6UL;
    struct S0 l_65 = {0xF6D77974L,0UL,-231,0UL,0x8266L};
    struct S1 l_66 = {-6,7,-19580,-424};
    unsigned l_440 = 6UL;
    unsigned char l_452 = 0UL;
    int l_1070 = 0xE205563DL;
    char l_1072 = 1L;
    unsigned char l_1073 = 0UL;
    if ((safe_div_func_int8_t_s_s(l_4, (safe_rshift_func_int16_t_s_u((func_7(g_10, (safe_div_func_uint16_t_u_u(((l_4 == func_13((safe_lshift_func_int16_t_s_u((func_20((~(safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((l_4 , ((func_27(func_31(func_36(((func_40((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((g_10 || 0xAB10L) < (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(func_54(g_10, (((func_59(((safe_unary_minus_func_int16_t_s((0xC9060546L >= l_4))) , l_4), l_65, g_10, l_66) || l_66.f0) && g_10) , l_65.f4), g_10, g_10), l_66.f3)) , g_68.f2), g_10))), g_10)), g_10)), l_66, l_4, g_71, l_65.f1) , 1L) <= 1UL), g_71.f3, g_71), l_440, g_71.f0, g_71.f1), g_71.f0, l_65.f4) && 247UL) != 0UL)), 1UL)) && 0x05E54A73L), l_452))), g_71.f3) >= l_65.f4), l_440)), g_71.f0, l_65.f1, l_65.f1)) && g_668), l_65.f3))) , g_413.f2), 1)))))
    {
        unsigned short l_1067 = 0xF731L;
        const short l_1071 = 0x6AB4L;
        l_66.f3 |= (l_65.f3 , (g_68.f1 ^ l_66.f0));
        l_1073 = ((safe_lshift_func_uint16_t_u_s(func_54((safe_lshift_func_uint16_t_u_s(((l_65 , ((g_68.f0 > func_27((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((l_1067 >= l_66.f2) | g_843), (((((g_877.f3 | g_71.f4) != (((func_54(g_128.f0, l_1070, g_10, g_128.f4) && l_1071) > 1UL) >= l_65.f3)) != l_66.f2) , 0x47DDL) , l_1071))), g_128.f1)), l_1067, g_877.f0)) > l_1067)) <= l_1072), 2)), l_1067, l_65.f3, l_440), 14)) ^ l_452);
    }
    else
    {
        g_97 = g_97;
    }
    return l_1073;
}







static unsigned short func_7(int p_8, unsigned char p_9)
{
    struct S0 l_857 = {0x98256512L,0x63123607L,108,1UL,0xD43BL};
    struct S1 l_867 = {9,18,16364,-469};
    int l_921 = 0x77CEAFDBL;
    int l_922 = 0x56CF7C15L;
    const char l_930 = 8L;
    struct S1 l_964 = {-14,10,1205,-2688};
    char l_986 = 0xB0L;
    struct S1 l_1023 = {6,-1,31204,-2342};
    if (g_321)
    {
        short l_858 = 0x615FL;
        unsigned l_860 = 0x1B137076L;
        struct S1 l_886 = {9,3,26959,-2471};
        short l_904 = 1L;
        p_8 ^= (safe_add_func_uint8_t_u_u(g_128.f4, (safe_mod_func_int8_t_s_s(0x01L, p_9))));
        for (g_128.f4 = 16; (g_128.f4 == 57); g_128.f4 = safe_add_func_uint16_t_u_u(g_128.f4, 4))
        {
            unsigned char l_859 = 2UL;
            unsigned char l_861 = 0xCFL;
            const struct S0 l_887 = {0xD2901437L,0x0CA4ECCDL,-125,0x516BL,0x7683L};
            if (g_575)
            {
                short l_852 = 0x4BD0L;
                if (l_852)
                    break;
            }
            else
            {
                int l_883 = 0x9B994B9AL;
                unsigned l_892 = 1UL;
                struct S0 l_897 = {0x798A39C6L,0x3D020B23L,38,0UL,0UL};
                l_861 &= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(((l_857 , l_858) < ((func_31(g_71, p_9, g_576, (l_859 & p_8)) || (p_9 || 65535UL)) == p_9)), l_860)), g_554));
                for (p_8 = 0; (p_8 != (-2)); p_8--)
                {
                    unsigned char l_866 = 0x0DL;
                    struct S1 l_871 = {7,-8,-16490,-1690};
                    if (l_859)
                    {
                        l_866 ^= (safe_lshift_func_uint16_t_u_u(((l_857.f4 == p_8) != (9L ^ 0UL)), 8));
                    }
                    else
                    {
                        int l_868 = 0x16083A32L;
                        struct S0 l_876 = {0xAA32E552L,4UL,-223,0xE872L,65535UL};
                        l_871 = func_40(l_858, l_867, l_868, g_71, (((safe_lshift_func_uint16_t_u_s((l_858 , 0x9997L), 1)) | p_8) == (g_413.f2 > l_858)));
                        g_68.f2 = (safe_div_func_int8_t_s_s((p_8 , p_8), (safe_lshift_func_uint16_t_u_u((g_554 , l_857.f2), p_8))));
                        g_877 = l_876;
                    }
                }
                g_877.f2 |= ((safe_add_func_int16_t_s_s((((safe_unary_minus_func_int8_t_s((((safe_div_func_int32_t_s_s((0x50B61B1DL & (func_20(((l_883 ^ ((safe_rshift_func_uint8_t_u_s((func_40(g_877.f0, l_886, p_8, l_887, ((((safe_lshift_func_uint8_t_u_u(l_883, l_886.f0)) || ((safe_sub_func_uint8_t_u_u((func_27(l_883, p_8, l_892) && p_9), l_860)) & 1UL)) > 0xD0E8FBFCL) != g_71.f0)) , l_860), g_575)) != g_128.f0)) != 0x213CE262L), l_857.f1) != 254UL)), g_413.f1)) , g_128.f2) , 0x48L))) & p_8) > l_861), 65528UL)) , l_892);
                l_886.f1 = (safe_sub_func_uint32_t_u_u((((l_857.f3 && ((l_886.f3 ^ (p_8 , (1L == ((-1L) == p_9)))) >= (g_71 , ((safe_rshift_func_uint16_t_u_u(func_59(g_668, l_897, g_877.f0, l_886), p_9)) > l_897.f3)))) && p_8) != l_883), l_858));
            }
            g_321 ^= (0x94E3L | (g_413.f3 | g_68.f1));
            g_905 = (safe_lshift_func_int16_t_s_s((((p_8 == p_9) != (((safe_sub_func_int8_t_s_s((p_8 , ((((255UL ^ ((((0x00E18C75L ^ g_128.f2) <= l_886.f2) && 0x90B98D90L) <= (safe_sub_func_uint32_t_u_u(func_20(g_68.f1, l_857.f1), l_867.f1)))) , g_554) , 0x50L) | p_9)), p_9)) , l_904) || p_8)) > 0x06F6L), 6));
        }
    }
    else
    {
        short l_908 = 0x19D4L;
        int l_911 = 0x126681D1L;
        int l_912 = 8L;
        int l_913 = 0xA7A9BA32L;
        int l_914 = (-7L);
        int l_918 = 1L;
        struct S1 l_960 = {12,-2,-21239,2233};
        struct S0 l_969 = {0UL,0xA7272E97L,-117,1UL,0UL};
        int l_978 = 0x53D64B81L;
        int l_1010 = 0x7F7885EAL;
        char l_1042 = (-3L);
        p_8 &= l_857.f1;
lbl_972:
        for (l_857.f1 = 0; (l_857.f1 <= 20); ++l_857.f1)
        {
            char l_909 = 0xA6L;
            int l_910 = (-5L);
            int l_915 = (-2L);
            int l_916 = 6L;
            int l_917 = 8L;
            int l_919 = (-3L);
            int l_920 = 0x267C5863L;
            char l_923 = 0xF4L;
            int l_924 = 0xB18C28E5L;
            int l_925 = 0xBE58A67BL;
            int l_926 = 0x7EE3B43DL;
            g_927++;
        }
        if (l_930)
        {
            unsigned char l_935 = 0xA6L;
            unsigned char l_959 = 0xDAL;
            int l_985 = 0x331B7C2BL;
            int l_987 = 0x2E9C54C5L;
            int l_988 = 0x9030952EL;
            int l_990 = (-5L);
            char l_993 = 0x8DL;
            int l_995 = 0xC340CBE8L;
            int l_997 = (-1L);
            int l_998 = 0x286A8269L;
            int l_999 = 0xE4F1FE8AL;
            int l_1000 = 0x3F6AFB0EL;
            int l_1001 = (-6L);
            int l_1003 = 0x5A599F17L;
            int l_1009 = (-4L);
            int l_1011 = 7L;
            int l_1012 = 0L;
            if (((4294967295UL > ((safe_add_func_int16_t_s_s(g_97.f3, l_911)) < ((l_913 < p_9) == (l_857.f3 && (g_905 <= l_908))))) < l_930))
            {
                short l_950 = 0x863DL;
                struct S0 l_967 = {0xF5025FEEL,0x8716EA4AL,-17,0UL,0x1D8CL};
                int l_971 = 0x0A2B42C6L;
                int l_989 = 0x3714FD05L;
                int l_991 = 0xCC3ADC78L;
                int l_992 = (-1L);
                int l_994 = (-1L);
                int l_996 = 9L;
                int l_1004 = (-1L);
                int l_1005 = (-5L);
                int l_1007 = (-3L);
                if ((((+(safe_rshift_func_int8_t_s_u((0x405B2AD9L & l_935), ((safe_div_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0xC0L, l_918)), p_8)) < (+((p_8 & g_68.f2) , ((9UL == l_935) || l_867.f1))))))) && l_935) > p_9))
                {
                    unsigned l_958 = 0xE8734E69L;
                    g_877.f2 ^= p_9;
                    for (g_927 = (-25); (g_927 != 12); g_927 = safe_add_func_int32_t_s_s(g_927, 4))
                    {
                        const unsigned l_957 = 4UL;
                        struct S1 l_961 = {-6,1,30663,2217};
                        l_959 = (((p_9 >= (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(0xF156L, (safe_mod_func_uint8_t_u_u((((l_950 , 250UL) <= ((safe_sub_func_int32_t_s_s(g_927, ((func_20(((p_8 > (safe_lshift_func_int8_t_s_s(l_914, 3))) >= (safe_sub_func_uint8_t_u_u(252UL, (!(~(func_20(l_957, l_958) | g_843)))))), l_918) & p_9) , l_957))) , g_413.f1)) | 0UL), p_9)))), l_912))) <= l_957) <= 6L);
                        l_961 = l_960;
                    }
                }
                else
                {
                    unsigned l_968 = 9UL;
                    unsigned char l_970 = 0x29L;
                    unsigned l_974 = 0x301F4780L;
                    l_971 ^= (func_20(((safe_mod_func_int32_t_s_s(g_128.f1, 0xD975504CL)) == (p_8 , (l_964 , (func_54(((!g_128.f4) && ((p_8 && (safe_rshift_func_int16_t_s_u(func_59((p_8 == (func_59(l_959, l_967, p_8, l_964) != l_968)), l_969, l_922, g_97), l_970))) , 0x8731L)), g_927, p_8, g_927) , l_935)))), p_9) , l_969.f0);
                    if (l_967.f4)
                        goto lbl_973;
                    if (g_455)
                    {
lbl_973:
                        if (l_964.f2)
                            goto lbl_972;
                        l_974++;
                        l_857 = func_36(l_857.f2, p_8, l_857);
                    }
                    else
                    {
                        short l_977 = (-7L);
                        l_977 |= p_8;
                        return l_978;
                    }
                    p_8 = ((((safe_add_func_uint32_t_u_u(0xE6B672FEL, (safe_add_func_uint16_t_u_u(((func_36((g_413.f2 < g_413.f3), l_968, l_857) , (safe_lshift_func_uint16_t_u_u((l_967 , p_8), p_9))) & l_970), 0x168CL)))) > p_8) <= l_968) >= 0xC535EFB4L);
                }
                g_413 = l_857;
                g_1013++;
                if (p_8)
                {
                    struct S0 l_1018 = {18446744073709551609UL,8UL,248,0x73F4L,0xDD08L};
                    for (l_967.f1 = 0; (l_967.f1 >= 60); ++l_967.f1)
                    {
                        return g_877.f3;
                    }
                    l_1018 = l_969;
                    return p_8;
                }
                else
                {
                    return g_68.f3;
                }
            }
            else
            {
                return g_555;
            }
        }
        else
        {
            const short l_1021 = 0x2FFDL;
            struct S1 l_1022 = {5,5,17649,-974};
            g_97.f2 |= p_9;
            if ((p_8 , func_54(func_31(g_128, g_71.f0, (0L & (g_413.f1 , (func_31(l_969, l_964.f1, func_27((g_1002 , ((safe_rshift_func_uint8_t_u_s(func_54(g_10, p_9, l_1021, p_8), 0)) <= g_927)), p_9, g_128.f0), g_71.f3) , p_8))), p_8), l_960.f2, p_9, g_71.f0)))
            {
                return g_877.f1;
            }
            else
            {
                struct S0 l_1043 = {18446744073709551607UL,6UL,-81,5UL,1UL};
                struct S0 l_1052 = {0x1C90FDECL,4294967295UL,149,1UL,0xBED4L};
                struct S1 l_1053 = {2,-13,30522,1578};
                l_1023 = l_1022;
                p_8 = (safe_mod_func_uint8_t_u_u(((g_575 || (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_9, (safe_add_func_int16_t_s_s((g_554 , func_20(g_128.f1, g_71.f1)), 0xBDACL)))), (((-5L) || p_8) | 0x521434DDL)))) != 0xD4L), l_1022.f0));
                for (l_969.f3 = 2; (l_969.f3 != 31); l_969.f3 = safe_add_func_uint32_t_u_u(l_969.f3, 8))
                {
                    unsigned l_1039 = 4294967289UL;
                    l_1043 = func_36((safe_rshift_func_int16_t_s_s((l_1023.f1 == (g_780 > (0xCC093965L != (p_9 , (safe_unary_minus_func_uint32_t_u(func_13((safe_mod_func_uint16_t_u_u(((l_1039 < (safe_lshift_func_uint16_t_u_s((func_27(l_1042, g_1013, g_71.f0) > p_8), 10))) && p_9), g_68.f2)), g_413.f2, p_9, p_8))))))), l_857.f1)), p_8, g_71);
                    if (g_97.f1)
                        break;
                    l_1022 = l_1022;
                    g_554 |= (safe_sub_func_int8_t_s_s((func_20((l_911 != ((0xCBL <= ((safe_div_func_int16_t_s_s((func_40(((g_877.f4 > g_97.f3) & func_31(((!((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s(l_1039, g_68.f1)) , (9L <= 0xCCL)) > (l_969 , l_964.f3)), l_867.f0)) , g_320)) , l_1052), p_8, p_9, g_877.f3)), l_1053, l_1053.f3, l_1043, g_413.f3) , g_1054), (-7L))) >= 0x46L)) || g_1008)), p_9) ^ g_128.f1), p_8));
                }
            }
            p_8 = (func_36((g_843 <= (l_986 && g_877.f3)), (g_97.f3 == g_71.f1), l_969) , (((((safe_mod_func_uint32_t_u_u(p_8, g_668)) <= 0xAD23L) > 0xCAL) | 0xEE80L) && 1L));
        }
        g_97 = l_960;
    }
    p_8 |= (safe_sub_func_uint16_t_u_u(5UL, l_867.f3));
    return l_867.f1;
}







static char func_13(unsigned p_14, short p_15, unsigned p_16, unsigned p_17)
{
    struct S0 l_463 = {0x6F4DAA74L,9UL,-172,9UL,65533UL};
    unsigned char l_478 = 0x94L;
    unsigned l_481 = 0x5821A03CL;
    unsigned char l_486 = 0x29L;
    int l_502 = 0xBEFF6F1FL;
    int l_503 = 0xB88C82E6L;
    unsigned char l_511 = 255UL;
    int l_572 = 0x90E2F1F0L;
    const unsigned l_590 = 7UL;
    struct S1 l_599 = {12,20,-28110,389};
    const struct S0 l_600 = {0x562A683DL,7UL,-226,0x9EDAL,1UL};
    short l_667 = 0x67ECL;
    unsigned l_669 = 0x3DEB58F4L;
    unsigned char l_691 = 1UL;
    const unsigned short l_698 = 0xE42AL;
    unsigned char l_728 = 250UL;
    unsigned short l_745 = 0UL;
    unsigned short l_806 = 0UL;
    int l_829 = (-1L);
lbl_656:
    g_128 = l_463;
    for (g_413.f4 = 6; (g_413.f4 <= 13); g_413.f4++)
    {
        short l_466 = 0xEF80L;
        struct S0 l_469 = {18446744073709551613UL,4294967295UL,129,65535UL,65529UL};
        int l_548 = 1L;
        int l_549 = 0xCD879DCAL;
        int l_550 = 0x1C9791EAL;
        struct S1 l_638 = {2,1,-3197,2868};
        g_128.f2 |= l_466;
        if ((l_463.f3 != ((safe_rshift_func_int8_t_s_u(p_15, 2)) , 0L)))
        {
            struct S0 l_479 = {18446744073709551611UL,0xF26746A2L,73,0UL,0x24D1L};
            struct S1 l_480 = {-11,-12,18550,1077};
            short l_482 = (-1L);
            unsigned l_526 = 0x35667D9DL;
            short l_545 = 0xC709L;
            if (func_59(((p_14 || g_71.f2) && g_413.f3), l_469, ((((((safe_mod_func_int16_t_s_s(func_59(func_59(g_97.f1, (((((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((g_413.f0 || ((65526UL < g_353) | (g_128.f1 < p_15))), l_469.f3)), g_353)), p_16)) != 0x1D3B27F0L) < g_413.f2) <= 0xC4L) < l_478) || 0xC31E116EL) , l_479), p_17, g_97), l_469, l_469.f1, l_480), l_463.f2)) || l_479.f0) , 0x97L) ^ (-10L)) , l_469.f4) , l_480.f2), g_97))
            {
                l_481 ^= 0x8267DA74L;
                return l_482;
            }
            else
            {
                int l_483 = (-1L);
                short l_516 = 1L;
                l_486 &= ((l_483 <= p_17) < (((safe_lshift_func_int8_t_s_s((!func_20(g_71.f0, p_17)), 2)) <= l_483) || p_16));
                for (g_128.f0 = 8; (g_128.f0 >= 29); g_128.f0++)
                {
                    short l_500 = 1L;
                    char l_501 = 0xEBL;
                    l_463.f2 ^= (safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(l_480.f3, (safe_unary_minus_func_uint8_t_u(247UL)))), ((!((p_15 > (((0xBAF7L | p_17) & func_27(((safe_div_func_int32_t_s_s(func_31(g_413, g_68.f0, l_463.f1, (func_54(g_97.f0, p_17, g_128.f2, p_14) == p_15)), 0xCE549A20L)) , l_500), l_479.f0, g_128.f1)) && g_71.f0)) ^ 0xAEA66144L)) , p_17))), l_483)), p_14));
                    if (g_71.f1)
                        break;
                    --g_504;
                }
                if ((l_503 ^ func_54(l_469.f4, p_17, (!(g_71.f4 & g_68.f0)), g_10)))
                {
                    short l_510 = (-1L);
                    l_480.f3 = func_54(p_14, ((l_483 , (g_68.f2 & 65535UL)) , func_20(g_413.f4, (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s(g_68.f2, 7)))))), func_54(p_16, p_16, g_320, l_483), p_17);
                    l_511--;
                }
                else
                {
                    unsigned short l_523 = 65535UL;
                    l_503 = (((((((((safe_lshift_func_int8_t_s_s(l_483, 4)) | l_516) , (g_97.f3 > (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(p_14, func_31(l_479, (p_15 , (safe_add_func_int8_t_s_s(func_20(l_469.f2, (((p_14 | l_466) >= g_413.f1) == l_463.f0)), p_14))), g_10, l_516))), g_10)))) != p_16) && 1UL) & 5UL) < p_16) , 0x68868C3DL) ^ g_504);
                    --l_523;
                }
                g_97 = g_68;
            }
            if (l_463.f4)
                break;
            if ((((!l_479.f2) > p_14) , g_128.f0))
            {
                short l_544 = 0xF1DFL;
                int l_547 = 8L;
                int l_552 = 0L;
                int l_553 = (-10L);
                unsigned l_589 = 0xE3084ABCL;
                l_526 = p_16;
                g_455 = (safe_rshift_func_uint8_t_u_s((p_15 || g_68.f1), 6));
                l_469.f2 ^= (0xBAL && (-1L));
                if (func_31(l_469, p_17, p_15, l_480.f0))
                {
                    short l_543 = 0xB236L;
                    int l_546 = (-1L);
                    int l_551 = 0x52EA2F4BL;
                    g_128.f2 &= (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((p_17 && func_20((safe_rshift_func_int8_t_s_u((l_469 , ((safe_sub_func_int16_t_s_s(0L, (((g_97 , (safe_div_func_int32_t_s_s(((p_14 <= ((((0L > p_14) <= (((((((safe_rshift_func_uint16_t_u_s((l_480.f3 , (safe_mod_func_int32_t_s_s((((+func_27(l_480.f2, l_543, p_17)) , g_10) ^ g_413.f2), l_543))), 7)) >= l_544) == g_71.f0) , g_320) | 4294967290UL) && p_17) && 3L)) > p_15) , 0xC2L)) != (-3L)), 4UL))) ^ 0x2712E590L) ^ g_71.f2))) , l_545)), l_463.f4)), g_71.f0)), 0xCCEC2E8CL)), g_413.f4));
                    --g_556;
                }
                else
                {
                    short l_566 = (-8L);
                    int l_571 = (-1L);
                    int l_573 = (-5L);
                    int l_574 = 0x26E882C6L;
                    for (l_466 = 0; (l_466 != (-16)); l_466 = safe_sub_func_int16_t_s_s(l_466, 5))
                    {
                        unsigned l_565 = 0x4FB7707CL;
                        int l_567 = 5L;
                        int l_568 = 0xF98FDA34L;
                        int l_569 = (-10L);
                        int l_570 = 0x697DB406L;
                        l_565 = ((safe_add_func_uint32_t_u_u(p_14, (((safe_add_func_uint32_t_u_u(g_71.f0, l_550)) <= (g_71 , (g_556 != 0x64C37C7AL))) <= (((g_128.f1 , (-8L)) <= p_17) , p_15)))) && l_549);
                        if (g_504)
                            continue;
                        ++g_576;
                        return l_566;
                    }
                    if (l_466)
                    {
                        l_572 |= (+(safe_div_func_int8_t_s_s((0L >= (0L | g_413.f3)), (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(0x22D2L, (2L >= g_455))) > (safe_sub_func_int16_t_s_s((l_463.f1 > (l_574 , l_480.f1)), l_589))), g_71.f2)), l_590)))));
                        if (p_16)
                            continue;
                        if (g_556)
                            continue;
                    }
                    else
                    {
                        l_549 = l_463.f3;
                        g_97.f0 &= (((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((func_40(g_71.f2, ((g_10 , ((safe_mod_func_int8_t_s_s(((p_15 ^ (g_413.f2 || 0x70L)) == (safe_lshift_func_int16_t_s_s((((((((g_576 <= 0UL) ^ l_574) ^ ((p_16 >= g_71.f2) == 65527UL)) , g_128.f2) || 4294967295UL) < g_68.f2) && 65526UL), 14))), 0xE8L)) ^ 0xF141L)) , l_599), l_480.f1, l_600, g_10) , g_320), l_574)), 0)) || 0x2CL) != l_463.f0);
                        g_321 = l_480.f1;
                    }
                }
            }
            else
            {
                unsigned l_601 = 0x0F91B832L;
                g_455 = g_576;
                --l_601;
            }
        }
        else
        {
            g_455 = g_455;
        }
        if (p_17)
        {
            const unsigned char l_604 = 255UL;
            int l_614 = (-8L);
            g_97.f1 = (-1L);
            if ((l_604 > p_14))
            {
                int l_605 = 9L;
                struct S1 l_608 = {-11,-3,1706,337};
                if (l_605)
                    break;
                if (l_466)
                    break;
                l_614 ^= ((safe_lshift_func_int16_t_s_u(((p_14 , (l_608 , (safe_rshift_func_uint16_t_u_s(p_14, 12)))) & (((safe_rshift_func_uint8_t_u_s(p_14, (g_71 , g_321))) <= (~(l_463.f1 && g_128.f4))) >= ((+(safe_unary_minus_func_uint16_t_u((0x11L & p_17)))) , 255UL))), l_599.f3)) <= 2L);
            }
            else
            {
                unsigned l_615 = 4294967295UL;
                l_615--;
                for (l_463.f3 = (-13); (l_463.f3 <= 49); l_463.f3++)
                {
                    for (g_413.f1 = 0; (g_413.f1 != 27); g_413.f1++)
                    {
                        g_97.f3 = ((safe_div_func_int32_t_s_s(g_68.f2, 0x3D7B39C6L)) ^ 0x7AC0E9ACL);
                    }
                }
                g_128 = (p_17 , g_413);
            }
            g_97 = func_40((safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(l_481, 6)), ((l_549 == (safe_div_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(g_413.f0, (safe_lshift_func_int8_t_s_s(g_321, ((l_466 ^ (((p_14 && l_604) > ((safe_sub_func_uint8_t_u_u((((l_604 , 253UL) && l_604) <= g_413.f3), p_17)) || p_14)) < 1L)) >= 0x1A90L))))) > p_16), p_14))) <= 248UL))) <= g_68.f2), 0xA8L)), l_638, p_15, l_463, g_413.f1);
        }
        else
        {
            int l_639 = 0xB9F0410DL;
            int l_640 = (-7L);
            int l_641 = 0x02DA0436L;
            unsigned l_642 = 18446744073709551610UL;
            l_642++;
        }
        if ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((((((-10L) > (((safe_add_func_uint32_t_u_u(func_27(g_556, (safe_div_func_uint32_t_u_u(g_97.f1, g_413.f1)), p_15), (((safe_rshift_func_int8_t_s_s(((l_503 && 1L) > (func_20(((-1L) >= p_15), p_17) >= 0UL)), 5)) > l_549) != 1L))) < p_16) >= p_16)) , p_17) || 0x09682EE9L) | 65531UL) <= p_17), 0)), g_413.f4)))
        {
            short l_655 = 0x4E39L;
            int l_665 = 0x5497174CL;
            int l_666 = 0xA3F1592AL;
            char l_674 = 0x0CL;
            g_68.f2 = 3L;
            if (l_655)
            {
                if (g_128.f4)
                    goto lbl_656;
                l_638 = g_97;
            }
            else
            {
                unsigned short l_661 = 0x5AFCL;
                struct S1 l_662 = {1,4,-29178,1760};
                struct S0 l_663 = {1UL,0x092ADA1BL,-84,0x72F0L,0x1443L};
                const unsigned l_664 = 4294967295UL;
                l_662.f0 = (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((func_54((l_655 | (func_59(l_661, l_469, l_638.f0, l_662) , ((func_31(l_663, p_17, p_15, l_655) != 0x07C7E1EDL) , l_655))), l_600.f4, l_664, p_15) == g_10), 2)) | g_97.f0), p_16));
                ++l_669;
                g_128.f2 = ((((~func_54(l_662.f2, l_661, g_575, (p_15 , (safe_add_func_int8_t_s_s(((l_674 , g_71.f3) < (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u(l_550, ((safe_div_func_uint32_t_u_u(g_68.f1, (-6L))) > g_97.f0))) == 0x82L), 5)), 8)), l_463.f4)), 0x23L))), 0x67L))))) > g_68.f0) <= g_554) , l_666);
                if (l_665)
                    break;
            }
            if (l_548)
                continue;
            return p_16;
        }
        else
        {
            unsigned short l_687 = 0x81C6L;
            int l_688 = 0x6C795F50L;
            l_688 = (g_668 == l_687);
        }
    }
lbl_775:
    l_572 = (-8L);
    for (l_511 = 0; (l_511 <= 11); l_511++)
    {
        int l_707 = 0xF15A2463L;
        struct S0 l_708 = {0UL,1UL,-29,2UL,1UL};
        struct S1 l_709 = {13,-15,-26810,-1850};
        unsigned l_756 = 0x079F269CL;
        const int l_786 = (-9L);
        const unsigned l_792 = 0xA6E7F085L;
        l_463 = func_36(l_691, func_59(p_17, l_600, ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_698, 0x0E85005EL)), 6)), (((safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((g_576 != (((((0xFC2C2052L || func_59((safe_div_func_int32_t_s_s(g_71.f2, l_707)), l_708, g_68.f2, g_68)) == 65532UL) | g_413.f3) != 0x55L) <= l_708.f1)), g_97.f3)), p_14)) | 9L) | l_708.f3))) && g_321), l_709), l_463);
        for (l_463.f0 = (-12); (l_463.f0 > 12); l_463.f0 = safe_add_func_int8_t_s_s(l_463.f0, 3))
        {
            short l_716 = 0L;
            unsigned l_725 = 1UL;
            unsigned l_746 = 18446744073709551615UL;
            int l_748 = 0xB4AE81D8L;
            struct S0 l_767 = {0xC6696383L,0xD3481FEDL,-148,65535UL,65535UL};
            struct S1 l_768 = {4,-4,-29698,1231};
            struct S1 l_783 = {14,-8,-17581,-625};
            unsigned l_787 = 1UL;
            const struct S0 l_794 = {6UL,0xCBDA8082L,195,0UL,0x1899L};
            int l_795 = 0x69E32A98L;
            if (((((safe_sub_func_int8_t_s_s(p_14, (p_15 > ((l_716 > ((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(p_15, ((safe_rshift_func_int16_t_s_u(l_478, 12)) != l_708.f1))), (safe_lshift_func_int8_t_s_s(l_707, g_668)))) , l_725)) , 0UL)))) < g_10) && l_709.f0) , p_14))
            {
                const int l_747 = 0x9EFD261EL;
                int l_758 = 6L;
                if ((g_413.f0 | (g_353 & (safe_div_func_int16_t_s_s((((((+0xC082L) , ((l_728 , (((+p_17) , (+g_71.f4)) , 0x8F1C1515L)) & (safe_lshift_func_uint8_t_u_s(g_413.f0, (g_576 < p_14))))) & l_669) <= p_17) && p_16), l_709.f0)))))
                {
                    int l_749 = (-7L);
                    int l_757 = 0x15FC6E0BL;
                    for (l_716 = 16; (l_716 == (-24)); --l_716)
                    {
                        unsigned short l_734 = 65534UL;
                        struct S0 l_735 = {0x48F1DF5EL,4294967295UL,-108,0x7821L,0x9C33L};
                        struct S1 l_740 = {9,-11,22943,-1056};
                        l_734 = g_733;
                        l_463.f2 &= (p_17 != 0xDFE4163BL);
                        g_128 = l_735;
                        l_748 = (safe_lshift_func_uint16_t_u_u(g_353, (((safe_mod_func_uint16_t_u_u(p_14, g_504)) != (l_740 , (((l_709.f2 | ((((((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_745, p_16)), ((((func_31(g_413, l_716, l_746, g_555) , 4294967294UL) != p_14) || 0UL) | 0L))) , 0xDBF1EBFCL) ^ l_747) == g_353) == g_413.f1) == g_128.f0)) & l_708.f3) , g_128.f1))) && l_708.f0)));
                    }
                    g_68.f0 = l_749;
                    for (l_572 = (-11); (l_572 != (-15)); l_572 = safe_sub_func_uint16_t_u_u(l_572, 6))
                    {
                        l_599 = l_599;
                    }
                    l_757 = (((-1L) && l_749) | ((p_15 > (safe_mod_func_uint16_t_u_u(p_17, 0x762AL))) , (safe_sub_func_int32_t_s_s((((((g_68 , (func_20(p_16, l_600.f2) , l_749)) >= g_733) & g_353) <= l_600.f3) && l_709.f2), l_756))));
                }
                else
                {
                    int l_759 = 5L;
                    l_758 &= l_725;
                    if (p_16)
                    {
                        l_759 |= (g_68.f3 , p_14);
                        return p_15;
                    }
                    else
                    {
                        l_759 &= g_504;
                    }
                    return g_97.f0;
                }
                return g_71.f0;
            }
            else
            {
                char l_764 = 0xCBL;
                l_709.f3 = ((safe_div_func_uint32_t_u_u(((((safe_mod_func_uint16_t_u_u((!(l_764 <= (safe_mod_func_uint32_t_u_u((l_746 == ((func_59(l_503, l_767, g_668, l_768) <= g_733) < (((safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u((0L > l_716), g_71.f4)), l_767.f1)) || 0L) | p_14))), g_413.f0)))), (-3L))) > g_413.f4) <= (-1L)) < g_71.f1), g_97.f3)) & l_764);
                if (l_708.f1)
                    goto lbl_775;
            }
            if ((safe_mod_func_int8_t_s_s((0UL <= (safe_add_func_uint8_t_u_u(8UL, func_27(g_413.f1, func_59(g_780, l_708, (safe_mod_func_uint32_t_u_u((((g_97.f1 ^ l_691) || (l_503 , (+l_767.f4))) < 4294967293UL), l_667)), l_783), l_709.f3)))), p_17)))
            {
                unsigned short l_793 = 0xBC55L;
                int l_798 = (-8L);
                int l_800 = 0x0D017E9BL;
                int l_805 = (-3L);
                unsigned l_825 = 0x0DA335ADL;
                if ((~(0xF470L && (l_768.f1 || ((safe_mod_func_uint16_t_u_u(p_16, g_71.f1)) , ((func_20(l_786, l_787) || p_17) < func_27((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_413.f2, p_16)), l_783.f1)), p_17, l_463.f1)))))))
                {
                    int l_799 = 0x32FBB870L;
                    int l_801 = 0x095FE467L;
                    int l_803 = (-1L);
                    if ((l_708 , (l_709.f1 , (func_27((p_14 , (((func_54(p_15, ((func_36(g_97.f1, g_780, g_413) , g_413.f3) , g_68.f3), l_792, l_768.f0) || l_691) || 2L) && (-1L))), l_767.f0, g_555) , l_793))))
                    {
                        l_767.f2 = ((p_17 | p_16) | (0UL && (((func_40(p_15, g_68, l_511, l_794, g_353) , 0xE6L) && p_16) , l_786)));
                    }
                    else
                    {
                        int l_796 = 0xB0FA6DCCL;
                        int l_797 = 0L;
                        int l_802 = 0xA41C8E87L;
                        int l_804 = 0x11307874L;
                        ++l_806;
                        g_128.f2 |= (l_803 , ((safe_sub_func_uint16_t_u_u(func_20(p_17, (!g_128.f1)), ((safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(l_463.f4, (safe_rshift_func_int8_t_s_u((func_54((safe_rshift_func_int16_t_s_u(l_805, l_804)), (safe_div_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((l_803 > p_17), l_463.f3)) < p_17) ^ g_555), p_14)), g_353, l_767.f1) && 0xFD45D956L), 1)))) , (-1L)), 1UL)), g_128.f3)) || p_14))) ^ l_825));
                    }
                }
                else
                {
                    unsigned l_830 = 0x791E6367L;
                    if (p_17)
                    {
                        unsigned char l_826 = 0x5CL;
                        return l_826;
                    }
                    else
                    {
                        int l_827 = 0L;
                        int l_828 = 0x9B959730L;
                        l_830++;
                        return p_15;
                    }
                }
                l_709.f1 = func_27(l_767.f2, ((safe_lshift_func_int16_t_s_s(func_59((safe_sub_func_int16_t_s_s(g_10, (safe_rshift_func_uint16_t_u_s(65535UL, 3)))), l_463, func_54((safe_rshift_func_uint16_t_u_u(func_54(func_27((1L >= (!(func_59(p_16, func_36(((p_14 == func_20(g_128.f2, (safe_lshift_func_int8_t_s_s(p_15, g_68.f3)))) | p_14), p_16, g_413), g_780, l_599) != p_15))), g_733, g_71.f0), l_825, g_71.f2, l_786), p_15)), l_503, l_669, g_455), l_709), g_780)) < 6UL), g_733);
                --g_843;
                if (g_128.f4)
                    continue;
            }
            else
            {
                if (g_128.f1)
                    break;
            }
        }
    }
    return g_68.f1;
}







static unsigned short func_20(const int p_21, unsigned p_22)
{
    int l_460 = 0L;
    struct S1 l_462 = {-8,13,2506,-267};
    for (g_128.f0 = 0; (g_128.f0 > 53); g_128.f0++)
    {
        const char l_461 = 0xE2L;
        l_462 = func_40(g_97.f2, g_97, p_22, g_413, (g_455 , (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((l_460 != 254UL) ^ ((g_128.f3 == (((((+g_71.f0) <= 0x7C4B87A6L) == g_413.f0) , g_413.f3) <= 0x10L)) >= g_413.f4)), l_460)) == l_461), 0x3E84B7FCL))));
    }
    return p_21;
}







static unsigned char func_27(unsigned p_28, short p_29, unsigned char p_30)
{
    unsigned char l_444 = 0xC7L;
    int l_445 = 1L;
    int l_446 = 0x1002C15DL;
    int l_447 = 0x849F49C6L;
    unsigned short l_448 = 65535UL;
    unsigned l_451 = 9UL;
    l_444 = (safe_rshift_func_int8_t_s_u(p_30, 3));
    l_448--;
    l_451 = (l_444 <= g_71.f4);
    return p_30;
}







static unsigned func_31(struct S0 p_32, int p_33, unsigned p_34, short p_35)
{
    int l_441 = (-1L);
    g_68 = g_97;
    return l_441;
}







static struct S0 func_36(unsigned short p_37, int p_38, const struct S0 p_39)
{
    const struct S1 l_86 = {2,14,14738,1226};
    const struct S0 l_98 = {0UL,4294967292UL,13,0xAB5BL,0x332FL};
    unsigned l_99 = 0UL;
    unsigned short l_129 = 0x48F7L;
    int l_142 = 0x2397AFB7L;
    struct S1 l_143 = {3,7,20858,-891};
    unsigned char l_361 = 0UL;
    const char l_362 = (-9L);
    char l_397 = 0x82L;
    unsigned char l_433 = 0UL;
lbl_235:
    if ((((p_39.f3 , ((((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(p_38, (safe_div_func_int16_t_s_s((((((func_40(((safe_lshift_func_int8_t_s_u((l_86 , (l_86.f1 ^ p_38)), ((((0x43L && (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(g_71.f1, (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(l_86.f0, func_59(l_86.f1, p_39, g_68.f2, l_86))), g_10)))) && 1UL), 0xCCF6L)), 0))) ^ 255UL) , 0xD4055D01L) > l_86.f1))) < 2UL), g_97, l_86.f0, l_98, g_71.f4) , p_39.f0) | p_39.f0) < l_98.f0) || g_71.f1) ^ l_98.f2), l_99)))), p_39.f3)) > p_37) , 0x29568EBAL) < 0x5379293EL)) | 0x6105L) <= l_86.f1))
    {
        unsigned char l_105 = 249UL;
        struct S1 l_124 = {-10,9,16187,258};
        struct S1 l_125 = {8,16,2750,1801};
        struct S0 l_126 = {0xD4A5CD31L,0xD08C10FDL,-144,0x7741L,65535UL};
        unsigned l_127 = 0xCDAE681BL;
        for (p_38 = 19; (p_38 == (-3)); p_38 = safe_sub_func_int16_t_s_s(p_38, 5))
        {
            unsigned short l_104 = 65526UL;
            for (p_37 = 0; (p_37 == 3); ++p_37)
            {
                if (p_38)
                    break;
                if (l_104)
                    break;
                l_105--;
            }
        }
        l_124.f0 = func_59(func_54((func_54((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(func_59((safe_mod_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((func_59(((((g_71.f2 >= (safe_lshift_func_int16_t_s_s(g_71.f2, (g_71.f2 , p_39.f4)))) > func_54(p_39.f3, (safe_div_func_uint32_t_u_u(0x3F915BDEL, (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(p_38, func_54(g_71.f0, g_97.f0, g_97.f2, g_97.f0))) ^ 0xF5FBL), 2)))), l_105, p_39.f4)) , l_98) , 0xAEA95DD0L), g_71, l_105, l_124) & g_71.f3), p_39.f3)) ^ p_39.f4) && 0x7DL) < l_124.f1), 0xCEL)), p_39, l_124.f2, l_125), 3)), 6)), p_37, g_71.f1, l_125.f1) ^ g_10), g_71.f0, g_71.f4, l_105), l_126, l_125.f2, l_86);
        l_127 = g_71.f3;
    }
    else
    {
        int l_141 = 0xD73F8B2FL;
        g_128 = l_98;
        g_128.f2 ^= (((l_129 && ((0x1657L != ((l_86.f3 , (((((safe_mod_func_int16_t_s_s((p_39.f4 | (safe_div_func_int8_t_s_s(p_39.f2, ((((((safe_unary_minus_func_int32_t_s((-3L))) | (safe_sub_func_int32_t_s_s(p_39.f2, (safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(0x4933L, ((g_71 , l_141) , l_141))), p_39.f0))))) , l_98.f4) < (-1L)) , p_39.f0) , 0xF3L)))), 0x6255L)) & g_97.f2) < l_142) , l_98.f4) != g_68.f3)) , l_141)) || 1UL)) <= g_71.f1) != p_39.f2);
        if (func_54(p_39.f4, p_39.f2, g_68.f2, g_128.f4))
        {
            l_143 = g_97;
        }
        else
        {
            unsigned l_148 = 0x37BB743FL;
            g_97.f3 = (p_38 && ((((5UL >= (((func_54(l_142, g_97.f2, (p_38 , (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((l_86.f3 || (l_148 , (((g_10 , l_98.f1) | 7UL) ^ 0L))) & g_128.f4) > (-7L)), p_39.f1)), p_38))), l_143.f2) & 0x460EL) ^ 1L) < p_39.f4)) & p_38) < l_86.f2) && l_148));
        }
    }
lbl_367:
    for (l_99 = 25; (l_99 <= 42); ++l_99)
    {
        int l_151 = 0x044AB526L;
        unsigned char l_162 = 249UL;
        struct S0 l_172 = {0xBE60ADCBL,0x3EBDBDEAL,-232,0x7FC5L,0x22FEL};
        int l_191 = 0xCE7F4B8DL;
        int l_216 = 8L;
        short l_256 = 0x007CL;
        const unsigned short l_350 = 65535UL;
        struct S1 l_354 = {0,-14,-11336,-740};
        if (g_68.f2)
            break;
        l_143.f1 |= l_151;
        for (g_128.f0 = (-18); (g_128.f0 == 49); g_128.f0++)
        {
            const unsigned short l_171 = 0xB529L;
            int l_200 = 0xDD0340F1L;
            struct S1 l_243 = {-2,-18,-25302,1678};
            int l_257 = 0x2F5C2C12L;
            unsigned l_268 = 18446744073709551611UL;
            char l_284 = 0xEAL;
            if (g_71.f1)
                break;
            if ((g_71.f1 ^ ((safe_div_func_int32_t_s_s((p_39.f4 | (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(func_59(((l_162 && ((l_99 == (-1L)) >= (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((p_39.f0 & g_71.f2), (0x83L & (0x2A89L == 0UL)))), p_38)), l_171)) & p_39.f3), 4)))) > g_97.f2), g_128, p_39.f1, l_86), 2)) == g_97.f0), 5))), l_171)) > p_39.f3)))
            {
                int l_181 = 0x356403DFL;
                int l_183 = 1L;
                if (((g_71.f4 && func_59(((p_39 , (g_128.f4 , g_97.f3)) , 1UL), g_128, func_54((p_37 & g_128.f0), func_59(g_97.f1, g_128, g_97.f1, g_97), g_128.f2, l_171), g_97)) , l_151))
                {
                    unsigned short l_182 = 65527UL;
                    int l_186 = 0L;
                    l_183 = (((!p_38) == ((g_97.f0 > g_128.f4) && (func_59(p_38, l_172, (l_171 && (func_54((safe_mod_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((9UL == l_181), g_128.f0)), l_182)) , 0x8DB23535L) , 1UL) ^ l_182), p_39.f0)) == g_128.f4) != 4L), l_172.f4)), p_39.f3, p_39.f2, g_71.f1) > 0UL)), g_68) && g_68.f1))) , p_39.f1);
                    l_186 ^= (safe_div_func_int32_t_s_s((-1L), g_10));
                }
                else
                {
                    unsigned l_192 = 0UL;
                    short l_199 = 0x781CL;
                    struct S1 l_224 = {3,-21,-31249,2372};
                    if ((safe_lshift_func_int16_t_s_u((p_39 , (func_54((g_128.f3 | ((safe_div_func_uint16_t_u_u(l_162, (g_10 | (func_59(l_181, p_39, l_191, g_68) && 8L)))) , g_128.f4)), g_97.f2, g_71.f2, p_39.f0) > 0UL)), 8)))
                    {
                        short l_209 = 0xB73EL;
                        unsigned short l_221 = 3UL;
                        l_192++;
                        l_183 &= ((l_171 > l_142) , ((((safe_mod_func_uint8_t_u_u((l_199 >= l_172.f0), g_68.f0)) == l_200) || (safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((p_39.f3 <= (g_128.f1 > (l_181 < l_143.f3))), g_71.f3)) , g_97.f3), (-1L)))) < 0x8DE72FA7L));
                        g_97.f3 &= (((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((p_39.f0 < (l_209 > (safe_sub_func_uint8_t_u_u(((~(safe_rshift_func_int8_t_s_s(6L, 0))) > (safe_lshift_func_int16_t_s_s(((l_216 || p_39.f2) == ((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(func_54(g_71.f1, g_128.f1, g_68.f1, l_221), 15)), l_99)) ^ p_39.f4)), p_39.f4))), g_128.f3)))), g_71.f2)), p_39.f0)) , g_128.f2) > 1UL) , p_39.f2) < l_200);
                    }
                    else
                    {
                        int l_227 = 0x3ED7A34FL;
                        struct S1 l_230 = {11,2,-14731,900};
                        g_97.f3 = (safe_add_func_int32_t_s_s(p_38, (((((((p_37 , ((l_224 , (safe_sub_func_uint8_t_u_u(((l_227 || g_68.f1) < 0UL), 0x9BL))) , ((safe_div_func_int32_t_s_s(l_200, (func_59(p_37, p_39, g_97.f2, l_230) ^ g_97.f2))) == 1L))) , l_151) ^ g_128.f0) != g_97.f3) , l_224.f3) <= l_230.f1) & 1L)));
                        l_183 = p_39.f1;
                        g_97.f0 = (~(safe_mod_func_int8_t_s_s(p_37, p_39.f3)));
                    }
                    l_142 = (65535UL < (7L ^ l_224.f1));
                }
                for (l_172.f3 = (-6); (l_172.f3 <= 19); l_172.f3 = safe_add_func_int16_t_s_s(l_172.f3, 1))
                {
                    struct S0 l_242 = {5UL,0x12AC0744L,-130,65535UL,65535UL};
                    if (l_162)
                        goto lbl_235;
                    if (p_39.f0)
                        continue;
                    l_257 &= (safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(func_59(g_97.f2, l_242, p_39.f3, l_243), 0x9F27L)) < (safe_lshift_func_uint8_t_u_s((l_98.f2 || (safe_rshift_func_uint16_t_u_u(func_54(g_71.f1, (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(p_38, (-1L))), l_172.f2)) , l_183), l_256)), 4)), l_183, p_39.f2), l_242.f2))), l_183))), 65535UL)), 8));
                    l_268 = ((safe_div_func_uint16_t_u_u(p_39.f2, (safe_lshift_func_uint16_t_u_u(l_242.f4, (0xA634L >= (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_97.f1, l_191)), (g_68 , l_242.f3)))))))) && (((safe_add_func_uint16_t_u_u(1UL, ((p_39.f1 ^ l_181) > 0x72L))) | l_98.f3) != l_191));
                }
                return p_39;
            }
            else
            {
                unsigned l_273 = 0x1BEFFD9DL;
                struct S1 l_285 = {3,20,21939,2421};
                struct S0 l_299 = {0x5FB0BF56L,0x5E30F08BL,149,0UL,65532UL};
                g_97.f2 |= (((safe_rshift_func_int16_t_s_u(func_59(((safe_lshift_func_uint16_t_u_s(((p_39.f2 < ((p_39.f4 >= p_39.f3) , (p_38 , (l_273 > func_54(((((safe_lshift_func_int16_t_s_s((p_39.f0 & (func_54(((l_143.f3 ^ (safe_lshift_func_int8_t_s_u(g_97.f3, ((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_172.f1, 7)), p_39.f2)), l_273)) > g_97.f1)))) & p_39.f0), g_10, l_273, l_273) != g_128.f1)), 0)) , g_128.f4) >= l_191) , p_39.f0), g_71.f1, l_216, g_128.f1))))) && p_39.f2), g_97.f1)) | g_68.f1), p_39, l_284, l_285), l_273)) == l_172.f0) != p_39.f1);
                if (l_143.f3)
                {
                    struct S0 l_290 = {1UL,4294967295UL,-137,0xD39FL,0xE5EFL};
                    l_243 = func_40((g_68.f0 , ((l_285.f2 || (((((g_71.f4 || (((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((l_290 , (safe_add_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(0xF7L, p_39.f4)) <= (l_290.f1 && (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((p_37 <= l_285.f1), g_97.f3)), g_128.f4)))) & 0xAFL), g_71.f0))) >= g_71.f2), 1UL)), g_71.f2)) || p_38) || g_97.f3)) > g_71.f4) , 0xA509L) == 1L) , g_128.f1)) >= 4294967286UL)), l_285, p_39.f0, p_39, l_172.f0);
                }
                else
                {
                    l_299 = g_71;
                    if (l_99)
                        continue;
                }
                if ((g_71.f1 >= (safe_sub_func_uint8_t_u_u((((!func_54(g_128.f1, ((+g_68.f2) , (safe_mod_func_uint16_t_u_u(g_97.f3, (g_97.f1 ^ (safe_add_func_int32_t_s_s(((1L <= (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(func_54((g_97.f3 > p_39.f3), p_39.f4, p_39.f0, l_171), 7)), 0xEBL)), g_71.f1)) && 0x34L), 0x46C6L))) < p_39.f2), l_285.f2)))))), l_98.f1, l_98.f3)) & l_243.f2) , 9UL), p_39.f1))))
                {
                    unsigned l_322 = 0x3BC8043FL;
                    const unsigned l_331 = 5UL;
                    for (l_284 = 0; (l_284 >= 26); l_284 = safe_add_func_int32_t_s_s(l_284, 7))
                    {
                        int l_316 = 0L;
                        int l_317 = (-6L);
                        int l_318 = 0xF821178EL;
                        int l_319 = 0x0C0448F3L;
                        l_285.f1 = l_299.f0;
                        g_97.f3 |= (g_71.f2 || 1L);
                        l_322--;
                    }
                    if (g_68.f3)
                        break;
                    g_321 ^= (func_54(l_256, (l_98.f3 < (l_322 >= ((p_39.f1 , l_285.f1) > (safe_sub_func_uint32_t_u_u((g_97.f3 == l_284), (safe_mod_func_uint32_t_u_u(p_37, g_68.f2))))))), l_331, g_68.f3) , (-7L));
                    return p_39;
                }
                else
                {
                    int l_332 = 0x78048BA4L;
                    struct S0 l_343 = {0x68FD7EE3L,0x75C545DFL,-24,1UL,0xDAB4L};
                    int l_351 = 0L;
                    struct S1 l_352 = {9,-4,-31239,-1801};
                    l_143.f1 &= l_273;
                    l_172.f2 = func_59(l_332, p_39, l_86.f2, g_97);
                    for (l_299.f0 = (-3); (l_299.f0 < 9); l_299.f0++)
                    {
                        const unsigned l_337 = 0UL;
                        struct S1 l_342 = {-6,13,-18694,1307};
                        l_191 = 0x72BA6D88L;
                        l_354 = func_40((safe_mod_func_uint16_t_u_u(func_54(p_39.f3, g_321, l_337, ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(func_59(p_39.f0, (l_342 , (l_172.f1 , l_343)), (safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((!((65530UL > ((safe_div_func_int16_t_s_s((func_54(func_59((l_243.f1 || g_71.f1), p_39, g_128.f2, l_143), p_38, l_350, l_299.f1) | p_39.f1), g_128.f4)) && p_39.f2)) ^ 0xDF54L)), l_343.f4)), g_71.f2)), g_97), p_39.f2)) , p_39.f1), (-4L))) <= g_71.f2)), l_351)), l_352, p_39.f0, g_128, g_353);
                        l_342.f3 = p_39.f3;
                    }
                    l_354.f3 = (p_39 , 0xE7DDAC24L);
                }
            }
        }
    }
    l_143.f2 ^= (!(((g_320 != ((0x01A7L == ((safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((((p_39.f4 != g_71.f2) & (func_59(l_98.f4, (g_10 , l_98), (safe_add_func_uint8_t_u_u(g_128.f0, 0x12L)), l_86) >= p_39.f0)) , l_143.f0) & l_361), 65528UL)) & (-5L)), g_128.f1)) , l_86.f2)) > l_362)) >= 0x29C8DF18L) <= g_71.f4));
    for (g_353 = 0; (g_353 == 34); g_353 = safe_add_func_int32_t_s_s(g_353, 2))
    {
        unsigned short l_378 = 0xE130L;
        int l_379 = 0x597D608EL;
        struct S0 l_412 = {3UL,9UL,-50,0UL,65535UL};
        struct S1 l_427 = {-3,5,-3920,-1526};
        unsigned short l_432 = 0xD420L;
        for (g_128.f4 = 20; (g_128.f4 > 57); g_128.f4 = safe_add_func_int32_t_s_s(g_128.f4, 1))
        {
            unsigned l_380 = 0x5F35C964L;
            int l_388 = (-8L);
            struct S0 l_398 = {0x091913B5L,4294967295UL,-19,1UL,1UL};
            int l_424 = 0x2238DBBCL;
            if (g_71.f4)
                goto lbl_367;
            for (g_128.f0 = 0; (g_128.f0 <= 11); g_128.f0 = safe_add_func_uint8_t_u_u(g_128.f0, 6))
            {
                unsigned short l_370 = 0UL;
                unsigned l_374 = 18446744073709551606UL;
                int l_414 = 3L;
                l_143.f2 = (p_38 ^ l_370);
                if ((l_370 || p_38))
                {
                    unsigned l_371 = 1UL;
                    int l_375 = 0xC12719CBL;
                    l_374 &= (l_371 && (((safe_mod_func_uint8_t_u_u(p_39.f1, (~0x9AL))) < func_59(g_128.f1, g_71, (0L | (g_321 <= p_38)), func_40(g_128.f1, l_86, p_37, p_39, p_39.f4))) || g_68.f0));
                    l_375 = g_128.f4;
                }
                else
                {
                    unsigned short l_387 = 0xD7C6L;
                    for (p_37 = 0; (p_37 <= 48); p_37++)
                    {
                        l_379 = l_378;
                        l_379 = 0x4F33D7A2L;
                        if (p_39.f2)
                            continue;
                        g_97.f0 ^= l_380;
                    }
                    l_388 = (1L ^ (g_97.f2 == ((safe_mod_func_uint32_t_u_u((7L != p_39.f0), (safe_add_func_uint16_t_u_u((func_59(((func_59((func_54((p_39.f1 , l_370), (safe_sub_func_uint32_t_u_u(p_39.f2, p_38)), (+(((g_68.f3 != g_128.f0) | 0xE7730FFBL) , 0UL)), p_37) ^ l_387), g_128, p_39.f3, g_68) >= 0x73L) & p_39.f3), g_128, l_380, g_97) || l_98.f3), 0x0D16L)))) ^ g_128.f1)));
                }
                if ((safe_sub_func_int16_t_s_s((((((safe_rshift_func_uint8_t_u_u(((-8L) == g_68.f3), func_54((safe_lshift_func_int16_t_s_s((g_71.f3 & func_54(func_54(p_39.f1, (l_388 > (func_54((((((safe_lshift_func_uint8_t_u_u((func_54((l_379 <= 0xA6BB1ACDL), p_37, p_38, g_97.f3) ^ l_99), 0)) & l_374) == l_143.f3) > 1UL) == l_86.f0), p_39.f3, p_39.f4, g_128.f1) > g_71.f0)), g_71.f0, p_39.f1), l_397, l_379, l_374)), g_68.f3)), p_39.f3, g_321, g_71.f3))) < p_39.f4) > 7UL) , 0L) == p_39.f2), 1L)))
                {
                    int l_411 = 0x4C185567L;
                    l_398 = (func_59(l_379, l_398, ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0x15L, func_59(p_39.f1, ((((safe_add_func_uint16_t_u_u((p_39.f3 & (safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s((g_128.f2 ^ (((safe_mod_func_uint32_t_u_u(0x4E1D7CEBL, (-1L))) >= (g_10 == 1L)) || 0x6714L)), 4294967294UL)) == l_143.f2), 0UL))), 0xB347L)) | p_39.f3) ^ 1UL) , p_39), l_411, g_97))), 0)) , 0xA47376F4L), g_97) , l_412);
                    g_413 = g_71;
                }
                else
                {
                    char l_423 = 0x81L;
                    l_414 = l_143.f2;
                    g_97.f1 = ((l_412.f0 || ((((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(p_39.f2, 2)) , ((p_38 , (((safe_sub_func_int32_t_s_s(g_71.f2, (l_412.f3 ^ (p_39.f1 > func_59(l_423, (p_38 , p_39), g_71.f4, g_68))))) > 1UL) || l_398.f2)) != g_97.f0)) > l_424), l_398.f0)) > g_10) , 0x57L) > p_39.f2)) | 65535UL);
                }
                return g_128;
            }
            for (g_128.f0 = (-13); (g_128.f0 < 18); g_128.f0 = safe_add_func_uint16_t_u_u(g_128.f0, 9))
            {
                unsigned short l_434 = 0x6975L;
                struct S0 l_439 = {0xD67A6BB6L,4294967289UL,0,0x8B7DL,0x9521L};
                g_97 = func_40(p_39.f4, func_40((~((g_97.f2 == p_39.f4) == g_413.f0)), l_427, (p_39.f0 , (safe_mod_func_int16_t_s_s(g_320, func_54(p_39.f1, ((safe_mod_func_int8_t_s_s(l_432, p_39.f2)) , l_86.f3), g_97.f2, l_433)))), l_412, g_68.f1), l_427.f2, p_39, p_39.f4);
                if (l_434)
                    continue;
                if ((65535UL ^ (((safe_rshift_func_int8_t_s_s(func_59(g_68.f2, p_39, g_320, l_427), p_39.f1)) >= (safe_sub_func_uint16_t_u_u((~g_97.f1), g_71.f3))) , g_97.f2)))
                {
                    return l_398;
                }
                else
                {
                    l_427.f3 = g_413.f2;
                }
                return l_439;
            }
        }
    }
    return l_98;
}







static struct S1 func_40(int p_41, struct S1 p_42, short p_43, const struct S0 p_44, short p_45)
{
    struct S0 l_76 = {0xFE450DE0L,0x5DAE8CE1L,143,0xC3DBL,0x8773L};
    struct S1 l_77 = {-10,0,-2062,-725};
    p_41 |= (safe_add_func_int32_t_s_s(p_42.f0, (((g_71.f2 & (((safe_sub_func_int8_t_s_s(p_44.f4, (+(g_68 , func_59(g_68.f1, l_76, g_71.f2, g_68))))) == p_42.f1) && (-10L))) , (-2L)) || 4294967295UL)));
    g_68 = l_77;
    l_77.f3 |= g_10;
    return l_77;
}







static unsigned char func_54(int p_55, unsigned p_56, const unsigned p_57, int p_58)
{
    short l_69 = 0x86E6L;
    int l_70 = 0L;
    l_70 = l_69;
    l_70 = 0x853D3C48L;
    return p_58;
}







static unsigned short func_59(unsigned p_60, struct S0 p_61, int p_62, struct S1 p_63)
{
    struct S0 l_67 = {18446744073709551611UL,4294967294UL,-240,0x2926L,0x8F0FL};
    p_61 = l_67;
    g_68 = g_68;
    return l_67.f1;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_68.f1, "g_68.f1", print_hash_value);
    transparent_crc(g_68.f2, "g_68.f2", print_hash_value);
    transparent_crc(g_68.f3, "g_68.f3", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_71.f2, "g_71.f2", print_hash_value);
    transparent_crc(g_71.f3, "g_71.f3", print_hash_value);
    transparent_crc(g_71.f4, "g_71.f4", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_97.f3, "g_97.f3", print_hash_value);
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_128.f3, "g_128.f3", print_hash_value);
    transparent_crc(g_128.f4, "g_128.f4", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_413.f0, "g_413.f0", print_hash_value);
    transparent_crc(g_413.f1, "g_413.f1", print_hash_value);
    transparent_crc(g_413.f2, "g_413.f2", print_hash_value);
    transparent_crc(g_413.f3, "g_413.f3", print_hash_value);
    transparent_crc(g_413.f4, "g_413.f4", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_843, "g_843", print_hash_value);
    transparent_crc(g_877.f0, "g_877.f0", print_hash_value);
    transparent_crc(g_877.f1, "g_877.f1", print_hash_value);
    transparent_crc(g_877.f2, "g_877.f2", print_hash_value);
    transparent_crc(g_877.f3, "g_877.f3", print_hash_value);
    transparent_crc(g_877.f4, "g_877.f4", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1054, "g_1054", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
