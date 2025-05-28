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
   const int f0;
   int f1;
   unsigned short f2;
   const long long f3;
   int f4;
};


static volatile int g_4 = 5L;
static long long g_12 = (-5L);
static char g_37 = 2L;
static union U0 g_91 = {0xBFB9E2BFL};
static volatile int g_112 = 0L;
static long long g_160 = (-1L);
static int g_171 = 9L;
static volatile long long g_291 = 0xBCD9D4EA33CA8335LL;
static int g_372 = 0x8FF04680L;
static char g_476 = (-7L);
static volatile short g_777 = 0xEF8FL;
static unsigned long long g_972 = 0xB548E82E798B147FLL;
static char g_1000 = 0xEDL;
static union U0 g_1018 = {3L};
static int g_1043 = 0x8F3CB98AL;
static volatile unsigned short g_1079 = 0x28ECL;
static int g_1082 = 0x197D56D4L;
static unsigned char g_1273 = 0xE0L;
static unsigned short g_1358 = 0x0770L;



static unsigned short func_1(void);
static int func_5(unsigned short p_6);
static unsigned short func_51(long long p_52, union U0 p_53, unsigned long long p_54, unsigned long long p_55, unsigned char p_56);
static union U0 func_57(unsigned char p_58, int p_59);
static int func_60(int p_61, union U0 p_62, unsigned char p_63, unsigned short p_64, union U0 p_65);
static unsigned long long func_76(short p_77, unsigned short p_78);
static unsigned long long func_87(union U0 p_88, unsigned p_89);
static const int func_100(const unsigned char p_101, char p_102, const unsigned p_103);
static union U0 func_121(unsigned short p_122);
static int func_123(unsigned long long p_124, unsigned p_125, unsigned p_126, unsigned p_127, int p_128);
static unsigned short func_1(void)
{
    short l_7 = 1L;
    unsigned char l_47 = 0UL;
    int l_1067 = 0x04F463EAL;
    union U0 l_1078 = {0x556E4D0AL};
    union U0 l_1090 = {0L};
    long long l_1180 = 0x56056B1AE32F5E30LL;
    unsigned l_1221 = 4294967295UL;
    const long long l_1366 = 1L;
    if ((safe_sub_func_int32_t_s_s(g_4, func_5(l_7))))
    {
        unsigned short l_49 = 0x691FL;
        int l_50 = 0L;
        int l_1074 = 1L;
        const unsigned long long l_1077 = 0x09BFEDFF84FCF67CLL;
        unsigned long long l_1087 = 0xE4AD16056078A82ELL;
        union U0 l_1092 = {0x5E660FF3L};
        union U0 l_1093 = {0L};
        unsigned char l_1132 = 0x15L;
        unsigned long long l_1166 = 0x79A2A5C281CC47DBLL;
        char l_1347 = 0L;
        for (g_12 = (-8); (g_12 == 28); ++g_12)
        {
            const int l_48 = 0xE84EBF8CL;
            union U0 l_1042 = {7L};
            l_50 |= ((-1L) || ((((((-1L) && (0x0B7228D029B4CCC4LL != g_4)) >= (((safe_div_func_uint8_t_u_u(func_5(l_7), g_12)) ^ g_12) != (safe_mod_func_int32_t_s_s((-1L), g_12)))) < l_47) < l_48) != l_49));
            l_1067 = ((func_5((((((func_5(func_51(l_50, func_57(l_48, g_4), ((g_12 >= ((((safe_lshift_func_int8_t_s_u(func_87(l_1042, ((func_87(l_1042, g_12) == l_49) <= 0x2946967205984E23LL)), l_1042.f0)) & g_1043) < 65535UL) || 0x1C5D5B8CF264539FLL)) <= 4L), l_50, l_49)) < 0x937DE89EL) >= 255UL) ^ 0x29F405AE291ECEF7LL) <= g_1043) ^ g_12)) != l_49) < 0UL);
            g_372 &= (safe_add_func_uint32_t_u_u(((!4294967294UL) == (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_49, (l_47 ^ (g_171 && (func_60(l_1074, g_91, g_12, ((((safe_rshift_func_uint16_t_u_s((0x28CB1577383BEA3FLL || l_47), l_47)) | l_1077) & (-1L)) && 0xC453L), l_1078) != g_1079))))), g_37))), l_50));
        }
        if (func_60(l_1078.f1, g_1018, l_1078.f2, (!(safe_add_func_uint8_t_u_u(g_1082, (safe_mul_func_int16_t_s_s(l_1074, (safe_lshift_func_uint16_t_u_u(l_1087, 8))))))), func_121(l_1087)))
        {
            for (l_50 = (-28); (l_50 < 17); l_50 = safe_add_func_uint8_t_u_u(l_50, 7))
            {
                g_171 ^= g_91.f2;
                return l_1078.f2;
            }
        }
        else
        {
            union U0 l_1091 = {-5L};
            const short l_1175 = 0xF028L;
            int l_1244 = (-1L);
            unsigned char l_1253 = 1UL;
lbl_1361:
            if ((func_51(g_476, l_1090, g_91.f1, g_91.f1, g_37) > func_60(((func_87(l_1091, g_1000) | 0xB3089A22E8A11942LL) >= l_1090.f1), l_1092, l_1092.f2, g_476, l_1093)))
            {
                unsigned long long l_1100 = 0UL;
                union U0 l_1135 = {2L};
                unsigned short l_1260 = 1UL;
                if ((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((-1L) <= (safe_sub_func_uint64_t_u_u(l_1100, l_1100))), (safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s((g_1043 | ((((g_91.f2 && (!((g_12 >= (l_1078.f1 < ((g_171 & ((safe_unary_minus_func_uint8_t_u(g_91.f4)) != 249UL)) | 4294967289UL))) <= 4UL))) || l_1090.f0) != l_1091.f4) >= g_160)), 0x6589L)), 18446744073709551615UL)))), l_1067)))
                {
                    unsigned l_1131 = 0x50C7779CL;
                    g_91.f1 &= g_1079;
                    for (g_91.f2 = 25; (g_91.f2 == 10); g_91.f2--)
                    {
                        unsigned long long l_1116 = 18446744073709551615UL;
                        l_1116 = ((g_1018.f2 | ((safe_mul_func_int8_t_s_s(((!g_171) >= (g_91.f2 <= l_1100)), (l_1092.f0 > (l_1100 | (func_5(g_1043) ^ (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s(g_476, (-6L))), 0)), 2))))))) || g_1079)) | l_1091.f0);
                        g_171 = ((safe_rshift_func_int8_t_s_u(g_1043, 0)) & g_12);
                        l_1091.f4 = (safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((0x4DL & (g_291 && (l_1092.f2 != g_1079))) == ((safe_lshift_func_uint16_t_u_s(g_1018.f2, (safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s((l_47 | g_1082), l_7)) | l_1067) > l_1131) <= 1L), g_1082)), g_171)))) < l_1116)) == g_37), l_1116)), 4));
                    }
                    g_4 = (func_87(l_1093, l_1132) & g_91.f2);
                    l_1091.f4 &= g_972;
                }
                else
                {
                    long long l_1149 = 0xB04CF082F36370C3LL;
lbl_1178:
                    g_171 = (!((((safe_mul_func_int16_t_s_s(g_91.f1, g_1079)) > (-1L)) && func_60(l_1091.f0, g_1018, g_4, ((l_1100 > l_1087) < (-7L)), l_1135)) & 0x78320E8730783C89LL));
                    if ((safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_1078.f4, l_1078.f4)), (((safe_lshift_func_int8_t_s_s(l_1087, 2)) <= 0x78C1C245F2C42A4BLL) && g_112))), (safe_unary_minus_func_uint16_t_u(l_1091.f2)))), ((safe_div_func_uint8_t_u_u(g_12, g_1082)) >= l_1067))))
                    {
                        unsigned l_1158 = 1UL;
                        l_1078.f1 = (func_51(g_160, l_1135, g_1018.f2, l_1149, (safe_sub_func_uint16_t_u_u(65533UL, l_1074))) <= g_1018.f2);
                        l_50 &= func_76((0x92DF4DA98AE73DFDLL <= (safe_mod_func_uint16_t_u_u(l_1135.f1, (safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u(l_1158, 3UL)), (safe_mul_func_uint8_t_u_u(g_372, l_1092.f4))))))), (l_1092.f2 && l_1158));
                    }
                    else
                    {
                        int l_1163 = (-3L);
                        volatile int l_1179 = 0x0D91F6F5L;
                        int l_1193 = 1L;
                        l_1091.f1 = (safe_mod_func_uint16_t_u_u(l_1163, (safe_rshift_func_int8_t_s_u(l_1166, (func_100(l_1091.f2, (safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(8L, 5)), l_1149)), l_1163) < (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((l_1175 & (((safe_mul_func_uint8_t_u_u((g_1082 && 0x64E74B3A930A2FEELL), g_476)) >= 0x71L) >= l_1090.f2)) > g_91.f0), l_1163)), g_91.f4)))))));
                        if (g_1082)
                            goto lbl_1178;
                        l_1179 = g_4;
                        l_1193 ^= (0xF328L > (l_1180 & (safe_mul_func_int16_t_s_s(l_1091.f0, (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(1L, g_91.f4)), (0xC395L && (~0L)))) == ((safe_lshift_func_int16_t_s_u(g_291, 7)) <= (-9L))), g_171)), g_1000))))));
                    }
                    l_1135.f1 = (safe_sub_func_int16_t_s_s(l_1091.f0, ((~(l_1135.f1 | (safe_div_func_int64_t_s_s(g_112, (safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((func_5(g_372) != (safe_sub_func_uint64_t_u_u(((0x4354L && l_1092.f2) && l_1135.f1), (l_1149 & 0x9BL)))), (-6L))), 0x5BL)))))) == g_1000)));
                }
                for (g_1018.f1 = (-29); (g_1018.f1 >= 28); g_1018.f1++)
                {
                    const unsigned long long l_1228 = 0xAB7FCBE4D2CAFC49LL;
                    for (l_1092.f4 = 0; (l_1092.f4 != 8); l_1092.f4++)
                    {
                        int l_1216 = 0L;
                        g_372 &= (safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((g_1018.f0 ^ g_1082) & ((((l_1135.f0 >= g_291) > (0x2834L <= g_1000)) == g_171) & l_1180)), (safe_sub_func_uint16_t_u_u((l_1135.f4 == g_972), g_171)))), l_1216));
                        l_1216 = (safe_mod_func_uint64_t_u_u((g_1018.f0 ^ g_777), func_87(l_1091, (((safe_add_func_int64_t_s_s(0xDF4C2DCB4940767DLL, (l_1221 ^ g_1018.f0))) && 18446744073709551615UL) < g_160))));
                        g_372 = (safe_sub_func_int64_t_s_s(0x378FC3C79F09377ALL, (l_1135.f4 > g_1000)));
                    }
                    g_91.f4 = ((safe_mul_func_uint16_t_u_u(l_1087, (((safe_mul_func_int8_t_s_s(0x31L, l_1228)) | ((l_1091.f2 ^ ((((safe_mod_func_int16_t_s_s(0xDD28L, g_1018.f0)) <= g_12) | g_112) >= g_91.f2)) != 0UL)) && 0UL))) | g_1018.f4);
                    g_4 &= (safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(9L, 0xFADC5A2B31CC15ACLL)), 2));
                    for (l_1074 = (-16); (l_1074 >= 12); l_1074 = safe_add_func_uint16_t_u_u(l_1074, 8))
                    {
                        unsigned l_1243 = 1UL;
                        l_1090.f4 |= (safe_rshift_func_int8_t_s_s(func_123(g_1018.f1, g_37, (safe_mod_func_int32_t_s_s(1L, g_476)), g_4, g_1018.f0), 5));
                        l_1244 = l_1243;
                        g_112 &= (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((-9L), l_1093.f2)) > l_1244) | (l_1228 && ((l_1078.f4 <= l_1243) | g_476))), l_1253)), 0x8235L)), g_91.f0));
                        if (l_1166)
                            goto lbl_1361;
                    }
                }
                l_1090.f4 = ((l_7 >= 65535UL) || g_1018.f4);
            }
            else
            {
                unsigned short l_1276 = 0x90AEL;
                int l_1311 = 0x05C340A4L;
                int l_1330 = 0x41FD2BCBL;
                g_1018.f1 = (-1L);
                if ((safe_rshift_func_uint8_t_u_u((0x447CL == (g_37 == (1UL & (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((4294967288UL == (safe_mul_func_int8_t_s_s(l_50, (safe_add_func_int64_t_s_s(((!(safe_rshift_func_uint16_t_u_u(((+g_291) == 1UL), ((g_1082 < l_1087) >= (-10L))))) < l_1093.f0), g_1273))))), l_1092.f2)), 6))))), 3)))
                {
                    unsigned l_1298 = 0xD250C424L;
                    for (g_1018.f4 = 18; (g_1018.f4 != (-7)); g_1018.f4 = safe_sub_func_int32_t_s_s(g_1018.f4, 3))
                    {
                        int l_1297 = 0L;
                        g_171 = g_91.f1;
                        l_1091.f4 = g_91.f0;
                        l_1276 = g_91.f2;
                        l_1298 = func_100((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_37, g_1043)), (safe_rshift_func_uint8_t_u_s((func_51((safe_div_func_int16_t_s_s(((1L >= 7L) ^ (safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(g_372, (safe_add_func_int64_t_s_s((~(safe_mul_func_uint8_t_u_u((0xB3L && (safe_mul_func_int8_t_s_s((func_87(func_121(g_476), l_1297) && 0UL), g_91.f4))), g_1018.f2))), l_1175)))) < g_1082), 5))), g_91.f1)), g_91, g_1018.f0, l_1244, l_1276) <= 0x2DB1L), 6)))), g_1018.f4, g_372);
                    }
                    l_1311 ^= func_5((safe_lshift_func_int16_t_s_u(func_76(l_1090.f2, l_1074), (safe_mod_func_int32_t_s_s(g_1273, (safe_mul_func_uint16_t_u_u((((((0x1DL ^ ((safe_sub_func_int8_t_s_s((((+4294967291UL) != ((safe_lshift_func_int16_t_s_s(g_12, ((l_1221 <= (safe_mod_func_int8_t_s_s(g_1018.f1, 0x96L))) == g_1018.f2))) & 0x2AC85CCDL)) > g_1082), 0xA1L)) & 0x186AL)) >= g_1018.f0) == l_1298) & l_1090.f0) == g_1082), 0x798FL)))))));
                    for (g_972 = 0; (g_972 >= 19); ++g_972)
                    {
                        l_1091.f4 = (safe_sub_func_int32_t_s_s(g_91.f4, (((+((safe_div_func_int16_t_s_s(l_1074, func_87(func_121((safe_rshift_func_int8_t_s_s(l_1221, 1))), (safe_rshift_func_int8_t_s_u(((g_91.f1 >= (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((g_1018.f2 != g_1018.f4), ((0x07204418E1406FDELL >= g_972) ^ 0xA8FFF5603F0E1D29LL))), 0L)), 0L)), l_1092.f4))) <= 0x32E69542L), g_12))))) > g_112)) < l_1253) & l_50)));
                        l_1330 |= (g_777 ^ (0x4CFEE0E8AC6A550FLL || l_1311));
                    }
                    if ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((func_123(g_1018.f2, l_1090.f4, l_1311, l_1298, l_1091.f2) || l_1244), (g_476 || ((safe_mod_func_int16_t_s_s(l_1298, l_1078.f1)) == 4294967295UL)))) >= l_1093.f0), 0L)))
                    {
                        g_1018.f1 = ((safe_add_func_int32_t_s_s(g_291, ((-10L) != l_1091.f1))) <= (g_91.f4 == (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((func_60(l_1092.f1, func_121(g_1043), (safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(l_1093.f1, (l_1311 && 1L))) < 0xA9L), 0xC2774FFFL)), l_1276, l_1091) != 4294967290UL), l_1347)), g_1018.f2))));
                    }
                    else
                    {
                        g_91.f4 = g_476;
                        g_1358 &= ((4294967287UL | 0L) >= ((safe_lshift_func_uint8_t_u_u((((func_76(g_1018.f1, g_1079) | g_1018.f1) || (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_112, ((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(g_91.f4, l_1253)), g_1273)) <= 0x1E523568L))), g_1273))) < g_1273), 7)) != g_1018.f4));
                    }
                }
                else
                {
                    for (g_171 = (-16); (g_171 != 22); ++g_171)
                    {
                        return l_1276;
                    }
                    g_91.f1 = g_1079;
                }
            }
            l_1091.f1 = g_1082;
            for (g_1043 = 0; (g_1043 > (-28)); g_1043 = safe_sub_func_int8_t_s_s(g_1043, 5))
            {
                if (g_1018.f4)
                    break;
                l_1090.f1 = g_972;
            }
        }
    }
    else
    {
        unsigned char l_1369 = 3UL;
        short l_1381 = 1L;
        unsigned long long l_1397 = 0x5DE2678E890A591FLL;
        int l_1398 = 0x4CF809BEL;
        g_1018.f4 = (+(((((l_1180 | (0x3D96C0C0612BD21BLL < 8UL)) | (g_1079 <= func_60(l_7, l_1090, (safe_mul_func_uint16_t_u_u((g_1082 ^ (l_1366 >= (safe_rshift_func_int16_t_s_u(g_37, 1)))), l_1078.f1)), l_1090.f0, g_91))) < l_1369) ^ l_1078.f4) == l_1221));
        for (g_160 = 0; (g_160 != (-1)); g_160 = safe_sub_func_uint32_t_u_u(g_160, 2))
        {
            unsigned l_1376 = 1UL;
            g_91.f4 &= g_291;
            g_372 |= (safe_sub_func_int64_t_s_s(((safe_div_func_int8_t_s_s(((l_1376 <= (safe_mod_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(g_171, l_1381)), g_112))) | g_1018.f2), l_1078.f2)) >= (~(safe_mul_func_uint8_t_u_u(l_1376, func_60(l_1376, g_91, l_1381, g_1358, g_1018))))), l_1376));
        }
        if (g_1018.f0)
            goto lbl_1384;
lbl_1384:
        g_4 = l_1221;
        if ((g_4 | g_972))
        {
            char l_1385 = 1L;
            const unsigned l_1396 = 18446744073709551615UL;
            l_1397 &= ((l_1385 >= (-5L)) >= (((g_777 | g_160) > (l_1067 | (safe_mul_func_uint8_t_u_u(((!(safe_div_func_uint64_t_u_u(g_1018.f4, (safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0x18L, (safe_add_func_int32_t_s_s((0xDFF1A9CD96126AFBLL || 0xA99D5F948D13F4B8LL), l_1180)))), l_1090.f4))))) != g_1018.f1), l_1396)))) >= l_1396));
            l_1398 = l_1078.f0;
        }
        else
        {
            return g_37;
        }
    }
    return g_1358;
}







static int func_5(unsigned short p_6)
{
    const unsigned char l_15 = 255UL;
    if (((safe_mul_func_int8_t_s_s((~(safe_mod_func_uint8_t_u_u(g_12, (safe_rshift_func_uint16_t_u_s((((l_15 == (safe_sub_func_int64_t_s_s((((((safe_rshift_func_uint16_t_u_s(l_15, 10)) ^ (safe_sub_func_int32_t_s_s(((safe_add_func_int64_t_s_s(g_12, g_12)) ^ 0L), (((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_6, (safe_mod_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((l_15 || p_6), l_15)), p_6)))), g_12)), g_12)) || l_15) != p_6)))) && g_12) | (-1L)) & 4294967290UL), 0x77D6446BD29A2A67LL))) & p_6) ^ p_6), 10))))), 1L)) <= l_15))
    {
        long long l_34 = (-1L);
        l_34 = p_6;
        return l_15;
    }
    else
    {
        char l_38 = 1L;
        g_37 = (safe_sub_func_uint32_t_u_u(4294967295UL, ((0xDAL > p_6) == p_6)));
        return l_38;
    }
}







static unsigned short func_51(long long p_52, union U0 p_53, unsigned long long p_54, unsigned long long p_55, unsigned char p_56)
{
    unsigned long long l_1044 = 0xA1E55E3E5CBFB8A5LL;
    short l_1063 = 0L;
    const unsigned l_1064 = 0UL;
    int l_1066 = 0L;
    if (l_1044)
    {
        unsigned long long l_1047 = 0xD84D7E49B52A1BE9LL;
        int l_1048 = 0xF15C1884L;
        l_1048 = ((~(safe_mul_func_int8_t_s_s(0xD5L, func_123(l_1047, func_123(g_91.f0, l_1044, (p_55 ^ g_112), g_1043, p_53.f2), l_1044, l_1047, p_54)))) >= l_1047);
    }
    else
    {
        unsigned l_1065 = 0x241CF249L;
        for (p_53.f1 = 6; (p_53.f1 < 27); p_53.f1++)
        {
            return g_37;
        }
        l_1066 ^= ((-7L) <= (g_777 == (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u((func_87(g_91, (safe_mul_func_int8_t_s_s(g_91.f4, (safe_sub_func_int64_t_s_s((((((((safe_mod_func_int32_t_s_s((-1L), ((safe_sub_func_int8_t_s_s(l_1044, (((0xA6L == (l_1044 >= 0L)) != 4UL) & 0xFD1FL))) && g_12))) == l_1063) ^ p_54) & l_1064) <= 0x158F79D1L) | g_171) > l_1044), g_91.f2))))) ^ l_1065), l_1064)) || 0xFEC750E855B988C1LL), 11))));
    }
    return g_372;
}







static union U0 func_57(unsigned char p_58, int p_59)
{
    union U0 l_66 = {-1L};
    unsigned short l_67 = 0xAE44L;
    const unsigned long long l_1032 = 0x0C02059FBF9E0B0CLL;
    unsigned long long l_1039 = 18446744073709551615UL;
    l_66.f4 = func_60(g_12, l_66, l_67, ((safe_sub_func_uint64_t_u_u(18446744073709551608UL, (safe_mul_func_int8_t_s_s(func_5((((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_58, 1UL)), p_58)) || ((func_76(l_66.f2, g_4) >= g_12) ^ p_58)) > 0xC3AEL)), p_58)))) >= p_58), g_1018);
    for (g_1018.f2 = (-3); (g_1018.f2 < 36); g_1018.f2 = safe_add_func_int32_t_s_s(g_1018.f2, 1))
    {
        union U0 l_1021 = {0L};
        return l_1021;
    }
    for (l_67 = 0; (l_67 != 57); ++l_67)
    {
        const unsigned l_1026 = 0x09B11D1EL;
        unsigned short l_1031 = 0xAA4BL;
        g_91.f4 = (safe_sub_func_int8_t_s_s((l_66.f4 >= (l_67 >= 4L)), ((18446744073709551606UL ^ l_1026) & ((!(((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_1031, (1UL != (l_1032 > (safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(g_91.f2, l_1031)) || l_1039), 0x46E23BEB6427FC80LL)), 5)))))), g_112)) == p_58) == p_58)) || (-1L)))));
    }
    return g_1018;
}







static int func_60(int p_61, union U0 p_62, unsigned char p_63, unsigned short p_64, union U0 p_65)
{
    return g_91.f0;
}







static unsigned long long func_76(short p_77, unsigned short p_78)
{
    const char l_79 = 0xF3L;
    int l_80 = 0L;
    const int l_104 = 0x55DD176CL;
    union U0 l_948 = {0xE10AEC7EL};
    int l_973 = (-1L);
    l_80 = l_79;
    for (g_37 = 0; (g_37 == 2); ++g_37)
    {
        union U0 l_90 = {0x5B6CC60AL};
        unsigned long long l_842 = 0xC5FFA3DF6B23A2A9LL;
        unsigned l_1001 = 4UL;
        g_4 &= (safe_lshift_func_uint8_t_u_s(p_77, 7));
        if (((safe_rshift_func_uint16_t_u_s((func_87(l_90, (g_12 > 1UL)) != func_87(g_91, ((safe_lshift_func_uint16_t_u_s(((l_80 | (safe_rshift_func_int8_t_s_s((-1L), 4))) >= ((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(func_100(l_104, (safe_rshift_func_uint8_t_u_s(((g_91.f0 || 2UL) == 0xABL), 6)), p_78), g_91.f1)), l_842)) <= p_77)), p_77)) < 0xC7L))), l_90.f0)) > p_78))
        {
            short l_847 = 0xE8F0L;
            int l_881 = 0x570B76F5L;
            int l_884 = 0xDBAB3D83L;
            l_847 = ((safe_rshift_func_uint16_t_u_u((l_104 == 0L), (!0UL))) > p_77);
            if (p_78)
            {
                unsigned long long l_856 = 0xAEE11EE539BF445DLL;
                int l_887 = (-1L);
                if (((l_80 >= func_100((g_12 > (safe_sub_func_int16_t_s_s(0x4A70L, p_77))), l_847, g_4)) ^ l_90.f4))
                {
                    int l_880 = 9L;
                    unsigned l_882 = 0xC7E05AD1L;
                    if ((((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_91.f4, l_856)), g_91.f4)), (safe_sub_func_uint16_t_u_u((0x71L >= 0xFCL), ((((safe_mul_func_uint16_t_u_u((((65535UL == g_91.f1) & (safe_mul_func_uint16_t_u_u((0x5374C387L | func_87(l_90, l_80)), g_12))) && g_91.f1), l_90.f2)) & g_171) || 0xC6E1C4F5L) > g_91.f1))))) && 9UL) & g_4))
                    {
                        short l_879 = 0xB803L;
                        l_882 |= (func_100(((safe_mod_func_uint32_t_u_u(func_123(l_80, (safe_lshift_func_uint16_t_u_s(func_123(((g_171 > (((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((0x07L < ((((l_856 >= (safe_add_func_uint32_t_u_u(l_90.f4, (safe_rshift_func_int8_t_s_s((p_77 ^ 0UL), 6))))) != (safe_rshift_func_uint16_t_u_s((g_372 >= (1L != g_4)), l_847))) != l_879) && g_4)) < l_880) < p_78), 1UL)), 6)) | 0x051F69D4EB2C08F2LL), p_78)) >= 1L) <= p_78)) != p_77), g_476, l_881, g_91.f1, l_880), g_91.f4)), l_79, l_856, g_37), p_77)) && g_91.f1), p_78, g_91.f2) > g_12);
                        g_372 = (g_12 != 0x137CL);
                        l_884 = (safe_unary_minus_func_int8_t_s(l_880));
                    }
                    else
                    {
                        short l_896 = 1L;
                        int l_899 = 0L;
                        l_887 &= (safe_mod_func_uint16_t_u_u(p_78, (g_112 || p_78)));
                        l_899 |= (((+((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(func_87(func_121(p_77), l_847), (safe_lshift_func_int16_t_s_s(((l_80 & g_91.f2) <= (((safe_div_func_int16_t_s_s(l_896, (safe_sub_func_uint64_t_u_u(l_881, g_12)))) | 0x6015D54EL) == l_896)), p_78)))), 6)) ^ 0xE66476B0L)) != (-10L)) != g_91.f4);
                        return g_12;
                    }
                    for (l_80 = 0; (l_80 <= 15); l_80 = safe_add_func_int8_t_s_s(l_80, 1))
                    {
                        l_884 = g_777;
                        if (g_291)
                            continue;
                    }
                    if (p_77)
                        continue;
                    l_90.f1 = l_847;
                }
                else
                {
                    g_171 = (((safe_div_func_uint8_t_u_u(p_78, (p_77 | g_160))) <= (safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u(g_91.f1, 3)) < ((((0xED7EL ^ ((safe_sub_func_int16_t_s_s(g_112, 0xA486L)) || g_91.f4)) > (l_90.f2 > l_104)) ^ g_476) ^ (-1L))), 0x8CE424767EDC35EELL))) != p_78);
                    for (p_78 = (-17); (p_78 >= 45); p_78 = safe_add_func_int32_t_s_s(p_78, 8))
                    {
                        unsigned char l_918 = 5UL;
                        l_918 |= (safe_lshift_func_int8_t_s_u(((((g_372 & g_476) <= (5UL || (safe_add_func_uint32_t_u_u(p_78, (safe_add_func_uint32_t_u_u(l_884, 7L)))))) | (!(l_856 <= l_79))) && g_91.f1), 3));
                    }
                    return g_777;
                }
            }
            else
            {
                g_112 |= l_90.f2;
                l_90.f1 = (func_87(g_91, g_160) || 0xD3CAB5BBBCF1BB0ALL);
                return g_476;
            }
        }
        else
        {
            char l_935 = 1L;
            union U0 l_943 = {9L};
            for (p_78 = (-28); (p_78 == 19); p_78++)
            {
                short l_931 = 0xBA64L;
                int l_938 = 0xC7D7524CL;
                for (l_80 = (-17); (l_80 > (-2)); l_80 = safe_add_func_int8_t_s_s(l_80, 8))
                {
                    char l_923 = 0L;
                    if (l_80)
                        break;
                    l_923 = g_91.f1;
                    for (g_171 = 0; (g_171 < 11); g_171++)
                    {
                        unsigned char l_928 = 7UL;
                        l_928 = (safe_add_func_uint8_t_u_u(1UL, (p_78 != p_78)));
                    }
                }
                for (l_80 = 6; (l_80 < 0); l_80--)
                {
                    union U0 l_934 = {-10L};
                    g_4 = (func_87(func_121(l_931), (safe_add_func_uint8_t_u_u(func_87(l_934, l_935), g_476))) == (p_78 == 0x01C0B374L));
                }
                l_938 = (safe_add_func_uint32_t_u_u(0x179F7E82L, p_78));
                if (p_78)
                    continue;
            }
            for (g_476 = 0; (g_476 <= 15); g_476 = safe_add_func_int8_t_s_s(g_476, 2))
            {
                return g_91.f2;
            }
            for (g_160 = 0; (g_160 != 12); g_160++)
            {
                char l_965 = 0L;
                g_372 = (((!(func_87(l_943, (safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(((g_91.f4 < func_87(l_948, (safe_div_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((l_90.f1 >= (0x2961F3D445557F44LL > 0UL)) >= (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((1L || g_476), func_87(l_948, l_943.f4))) <= p_77), 4)), g_91.f2)) || g_37) | p_77)), g_12)), p_78)) < p_77), p_78)))) >= l_965), p_77)), p_77))) != g_91.f2)) || g_160) < p_78);
                l_90.f4 = (safe_add_func_uint64_t_u_u(p_78, p_78));
                g_112 = l_935;
            }
        }
        g_972 ^= ((g_91.f2 != func_100((g_37 || ((safe_mul_func_int16_t_s_s(func_123(g_171, ((safe_sub_func_int8_t_s_s(((~65535UL) != 0x9D8AL), 0x3EL)) < g_91.f1), g_12, p_78, g_160), (-1L))) >= l_948.f0)), l_80, l_948.f2)) <= 0x8971F737L);
        if (func_100(l_79, l_973, p_78))
        {
            int l_974 = 0xA0A2D238L;
            g_91.f4 = 0xF7866216L;
            l_974 = g_91.f4;
            l_974 = (g_476 <= l_974);
        }
        else
        {
            unsigned char l_987 = 248UL;
            char l_988 = (-7L);
            int l_989 = 0x64CE0E0EL;
            l_989 |= ((safe_add_func_uint8_t_u_u(((0xFF83F153L ^ (safe_lshift_func_uint8_t_u_s(0x20L, 5))) > (safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u(func_100((safe_add_func_int64_t_s_s((((~func_100((1L | (0x9F517BC0L || g_291)), p_77, (safe_div_func_int16_t_s_s(p_77, (l_90.f1 & p_77))))) >= p_77) != p_78), g_91.f4)), g_91.f4, g_37), g_12)) != 0x0613DEB3L) & 0L), 0x6D18D07BL))), l_987)) <= l_988);
            g_1000 &= (!func_87(func_121(p_78), (p_78 & (safe_mul_func_uint16_t_u_u(((func_87(g_91, p_77) ^ ((((safe_div_func_uint8_t_u_u(((!(safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((p_77 == ((g_4 & l_987) > 0L)), g_372)), g_91.f1))) == p_78), 3L)) ^ 0L) & l_948.f4) || l_948.f0)) && g_112), p_77)))));
            if ((l_1001 && (safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_div_func_int32_t_s_s((g_91.f0 >= g_972), g_91.f2)), (safe_div_func_int16_t_s_s(g_112, func_87(g_91, ((0xC10E0CB4L <= 0x64D0D814L) & (safe_div_func_int16_t_s_s((l_948.f2 >= p_78), 0xAD4CL)))))))), 0x32L)) > p_77), p_78))))
            {
                l_989 = ((safe_rshift_func_uint16_t_u_u(g_160, 2)) != (+0UL));
            }
            else
            {
                unsigned l_1016 = 0xC75F594DL;
                int l_1017 = (-1L);
                l_1017 ^= l_1016;
            }
        }
    }
    return l_948.f4;
}







static unsigned long long func_87(union U0 p_88, unsigned p_89)
{
    return g_12;
}







static const int func_100(const unsigned char p_101, char p_102, const unsigned p_103)
{
    unsigned long long l_109 = 0x5DB0C68D18E14F04LL;
    int l_177 = 6L;
    union U0 l_207 = {0x551873B4L};
    const int l_257 = 0x4E43E4D8L;
    int l_422 = 0x6D1B6C72L;
    unsigned char l_560 = 0xE6L;
    unsigned l_618 = 0x1FEA2120L;
    unsigned short l_674 = 0x03A9L;
    const unsigned l_841 = 18446744073709551615UL;
lbl_423:
    l_177 = (((((safe_lshift_func_uint16_t_u_u(l_109, 5)) < 1UL) == (safe_sub_func_int8_t_s_s(g_12, p_103))) & g_112) == (safe_sub_func_uint16_t_u_u(g_91.f4, ((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_101, (safe_sub_func_uint8_t_u_u(func_87(func_121((g_37 != (func_87(g_91, g_91.f0) <= 0x1A78517817F253ABLL))), g_12), g_37)))), g_91.f1)) > 249UL))));
lbl_655:
    l_177 = (safe_sub_func_uint32_t_u_u(p_103, (((!0x6A65L) & ((safe_lshift_func_uint8_t_u_s((func_123(((0L && (((safe_add_func_int16_t_s_s((-1L), (g_171 != g_91.f2))) != l_177) < (!249UL))) == g_91.f2), l_109, p_101, p_103, p_101) == l_177), g_4)) == 0xBDCB58CEL)) != 0xDB12L)));
    if ((g_112 <= (safe_mul_func_int16_t_s_s(g_91.f4, p_101))))
    {
        unsigned l_190 = 0x19F56D68L;
        int l_192 = 8L;
        union U0 l_205 = {0xE22812B3L};
        short l_495 = 0x675DL;
        for (l_177 = 0; (l_177 > 18); ++l_177)
        {
            unsigned l_191 = 4294967293UL;
            short l_204 = 0x90C2L;
            l_190 = 0L;
            l_192 = l_191;
            for (l_192 = 29; (l_192 >= (-19)); l_192 = safe_sub_func_int64_t_s_s(l_192, 6))
            {
                if (p_103)
                    break;
            }
            for (l_190 = 6; (l_190 < 23); l_190 = safe_add_func_uint64_t_u_u(l_190, 4))
            {
                g_4 ^= (safe_add_func_int16_t_s_s(0x44C7L, g_160));
                for (g_171 = 0; (g_171 > 19); g_171 = safe_add_func_uint16_t_u_u(g_171, 7))
                {
                    unsigned char l_203 = 1UL;
                    for (l_191 = (-6); (l_191 != 41); l_191 = safe_add_func_int64_t_s_s(l_191, 7))
                    {
                        l_203 = p_102;
                    }
                }
                g_4 = l_204;
                if (l_109)
                {
                    g_4 = func_87(l_205, g_91.f2);
                    return l_204;
                }
                else
                {
                    volatile unsigned l_206 = 0xEA34FD0DL;
                    l_206 = g_112;
                }
            }
        }
        l_205.f1 = (~g_91.f1);
        if ((func_87(l_207, ((safe_rshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(g_91.f2, 4UL)), 7)), (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(7UL, (safe_mod_func_uint8_t_u_u((g_37 >= (+(func_87(l_205, g_112) == func_87(g_91, p_102)))), g_37)))), 0)))) == 254UL), 0)) != (-2L))) == 0x0ACD3375787EC679LL))
        {
            unsigned short l_226 = 1UL;
            g_171 = ((((~(((safe_mul_func_uint8_t_u_u(0x9EL, (((0x866D6690D2E26836LL != 0x52690A631AE8C0A6LL) ^ ((safe_mod_func_int64_t_s_s(func_87(g_91, l_226), g_4)) | 0xB1A0855924418FD7LL)) || (((p_102 ^ l_207.f4) && l_226) || l_205.f1)))) && p_102) != p_101)) > (-1L)) || g_91.f2) > g_37);
            for (l_177 = 0; (l_177 == (-2)); l_177--)
            {
                union U0 l_231 = {-8L};
                l_205.f4 = (((safe_lshift_func_uint8_t_u_u(func_87(l_231, g_91.f4), 0)) < func_87(func_121((((p_101 > (l_226 | 0x9FDDL)) & 0UL) || 0UL)), g_91.f2)) == p_102);
                if (p_102)
                    break;
                return l_226;
            }
        }
        else
        {
            unsigned l_253 = 0x6197A97AL;
            union U0 l_254 = {0xC52370E7L};
            short l_312 = 0xD8E1L;
            if (p_101)
            {
                unsigned short l_238 = 0x72AFL;
                int l_268 = 0xF6BC7391L;
                union U0 l_269 = {0x9CC71544L};
                for (l_192 = 0; (l_192 == (-15)); l_192 = safe_sub_func_uint64_t_u_u(l_192, 5))
                {
                    union U0 l_270 = {0L};
                    for (l_205.f4 = (-24); (l_205.f4 == 14); l_205.f4 = safe_add_func_uint32_t_u_u(l_205.f4, 1))
                    {
                        char l_239 = (-3L);
                        int l_244 = 0x965E8A44L;
                        l_244 = ((safe_sub_func_int64_t_s_s(p_101, ((l_238 ^ (g_4 && func_123(l_239, p_103, (65535UL > (5UL & (safe_mul_func_uint8_t_u_u((p_103 <= ((safe_sub_func_int32_t_s_s(l_205.f2, l_205.f1)) >= 0xE0L)), g_91.f4)))), p_103, l_190))) <= 0xDA6A6FC2D246E6FCLL))) > 0xC9011E99L);
                    }
                    if (((g_91.f4 >= (safe_mul_func_int16_t_s_s(g_12, (p_103 & l_205.f4)))) <= (safe_rshift_func_uint16_t_u_s(0xAF34L, l_238))))
                    {
                        g_4 &= (func_87(l_207, l_207.f2) < func_87(func_121((((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(l_253, 10)), (func_87(l_254, p_102) || (safe_mod_func_int8_t_s_s(func_123(g_91.f4, (4294967290UL & g_91.f0), g_12, l_205.f1, g_91.f2), 0xB8L))))) ^ 1L) & l_257)), g_91.f4));
                        g_171 &= l_238;
                        l_205.f4 = g_4;
                    }
                    else
                    {
                        unsigned char l_262 = 0x05L;
                        int l_266 = 0x5DDF3FE3L;
                        unsigned long long l_267 = 18446744073709551606UL;
                        l_266 = (safe_rshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(l_207.f2, g_171)) != ((((0x7A0FFE65D847C295LL ^ g_160) < (((l_262 <= g_91.f4) > (safe_lshift_func_int16_t_s_u(((safe_unary_minus_func_uint8_t_u(0xB7L)) & p_102), func_87(g_91, g_91.f4)))) >= (-1L))) > 0x22L) != p_101)), p_103));
                        l_268 = l_267;
                    }
                    l_177 |= func_123(func_87(l_269, ((l_205.f1 != (+func_87(l_270, (p_103 || p_102)))) >= (g_160 ^ (0xD5L | (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(func_87(l_207, l_270.f4), 1UL)), 6)) || 4L), 0x3F47L)))))), g_91.f4, g_160, g_171, l_269.f2);
                    l_207.f1 = p_101;
                }
                l_205.f1 &= (safe_lshift_func_int8_t_s_u(l_207.f2, 1));
                for (l_177 = 0; (l_177 == 6); l_177 = safe_add_func_int32_t_s_s(l_177, 9))
                {
                    l_207.f1 |= g_12;
                    l_205.f1 = (safe_mod_func_int64_t_s_s(l_207.f1, (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((+(safe_mod_func_int32_t_s_s(p_102, g_91.f4))) >= p_103), g_291)), (safe_rshift_func_uint8_t_u_s(255UL, 5)))), (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((g_37 >= 0x0EL), func_123(l_205.f1, l_269.f4, p_103, g_91.f2, l_207.f0))), p_101)) || l_254.f4) && g_37) <= l_207.f2), g_12)), (-1L))), 1))))));
                }
            }
            else
            {
                long long l_324 = 0x5068102F24D469CALL;
                int l_350 = 0L;
                union U0 l_353 = {-1L};
                for (l_192 = (-29); (l_192 < (-1)); l_192 = safe_add_func_int8_t_s_s(l_192, 1))
                {
                    unsigned char l_325 = 252UL;
                    int l_339 = 0x1DECC0E9L;
                    if ((safe_div_func_uint64_t_u_u((func_123(p_103, p_101, g_91.f0, func_87(func_121((safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((l_312 || (safe_sub_func_int64_t_s_s(func_123(p_101, ((g_160 || (((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(((safe_add_func_int8_t_s_s((g_37 != ((((!(l_254.f2 > ((safe_add_func_uint32_t_u_u((0xF2L < g_4), 0UL)) != l_254.f0))) & 0x230FADCD0BB8CB34LL) ^ (-3L)) > l_324)), p_102)) && 0x243430D1L))), 0UL)) != p_102) ^ g_91.f0)) == 1L), g_171, g_91.f0, l_205.f2), l_177))) != 1L), 0xCDD1039E3DCDE23ELL)), 0x55A4L))), l_192), g_91.f4) ^ p_103), l_312)))
                    {
                        l_325 = 0x97D2CA9DL;
                    }
                    else
                    {
                        unsigned char l_334 = 0x10L;
                        l_339 = (((safe_div_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((g_4 != g_91.f2) < ((safe_mul_func_int16_t_s_s(l_334, (p_101 | (safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(0L, 0x64E4L)), (g_91.f0 < (p_101 != func_123(g_91.f4, p_102, p_102, l_325, g_91.f0)))))))) > 0xD7L)), p_103)), 2)) & l_207.f0), 18446744073709551608UL)) && l_324) | l_254.f0);
                        l_207.f4 |= ((safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(0x74L, func_87(g_91, g_91.f0))), 0xA07DL)), p_102)) & g_12);
                        l_350 = ((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(p_103, 12)), ((((((!(l_325 > l_334)) || (g_160 || p_102)) < 0x92BCF94D503745B3LL) < l_254.f1) <= func_87(l_254, func_87(g_91, g_91.f4))) & g_91.f1))) & 9L) <= 0x8CL) || l_254.f0);
                        g_171 |= ((-1L) | l_207.f2);
                    }
                }
                l_254.f1 = (l_192 || (((func_87(func_121(g_112), g_12) < (safe_rshift_func_int8_t_s_s((func_87(g_91, l_205.f2) >= ((func_87(l_353, p_101) != 0x46226BA7BF066108LL) && 0x7E7CL)), 1))) == (-4L)) < 0x3EL));
            }
        }
        if (func_123(p_102, (l_109 & (safe_sub_func_int32_t_s_s(g_37, (((safe_mul_func_int8_t_s_s(l_207.f4, p_102)) == (g_4 >= (+p_101))) < func_87(l_207, p_101))))), g_12, p_101, g_91.f4))
        {
            unsigned short l_377 = 5UL;
            int l_392 = 0L;
            union U0 l_463 = {-5L};
            unsigned long long l_486 = 0xE5EA5823CA98304DLL;
            short l_522 = (-1L);
            for (l_205.f1 = 0; (l_205.f1 != 1); l_205.f1 = safe_add_func_int32_t_s_s(l_205.f1, 5))
            {
                int l_360 = (-1L);
                int l_444 = 7L;
                if (g_160)
                {
                    short l_371 = 1L;
                    unsigned l_386 = 0xBC9FF50BL;
                    l_360 |= g_160;
                    g_4 = 0xAF20001EL;
                    for (g_160 = 26; (g_160 >= (-9)); g_160--)
                    {
                        unsigned short l_389 = 1UL;
                        g_171 = (safe_sub_func_uint8_t_u_u(g_37, ((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_371, (p_103 >= g_291))), g_372)) == (safe_add_func_int32_t_s_s(p_103, (1UL <= p_103)))), 9)) > ((safe_add_func_int16_t_s_s(func_87(g_91, l_257), 0UL)) != l_377))));
                        g_4 = (safe_rshift_func_uint16_t_u_s((p_102 || (((safe_lshift_func_int16_t_s_u(p_103, 2)) && g_160) & (safe_sub_func_uint8_t_u_u(p_101, ((safe_lshift_func_uint8_t_u_u((+0x41L), l_386)) != (p_101 != func_87(l_205, (0x02A21A2BL && g_372)))))))), 1));
                        l_207.f1 = (safe_lshift_func_uint8_t_u_s(p_101, (func_87(g_91, g_291) == (((((l_389 <= ((-1L) & ((((safe_sub_func_int64_t_s_s(((((p_103 > (p_102 > g_171)) <= l_377) == (-8L)) ^ g_91.f4), p_102)) && 2L) < 0UL) & g_37))) | 0xE3L) == 4L) && l_360) == l_389))));
                        g_4 = g_91.f4;
                    }
                    l_392 = p_102;
                }
                else
                {
                    unsigned l_395 = 3UL;
                    if (func_123(g_12, (safe_mul_func_uint16_t_u_u(((p_103 <= (~func_123(l_205.f1, l_395, g_4, func_123(func_123(l_377, (safe_lshift_func_uint16_t_u_s(p_103, 10)), func_123((g_91.f0 | 0x56ECL), g_91.f2, g_372, l_207.f4, p_101), g_91.f4, g_372), p_103, g_91.f0, l_377, l_377), p_103))) & p_103), g_12)), g_91.f4, g_91.f4, g_372))
                    {
                        unsigned l_410 = 0x50456AD2L;
                        int l_421 = (-1L);
                        g_372 ^= (safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s(0x90A43986B910D2C7LL, (safe_mul_func_uint8_t_u_u(func_87(func_121((safe_add_func_int64_t_s_s(g_91.f1, (safe_rshift_func_int16_t_s_s(((((safe_div_func_uint16_t_u_u(0xD1D4L, g_171)) || p_103) ^ (l_410 < ((l_410 > (safe_rshift_func_uint16_t_u_s(((0xEEL != (l_377 && 18446744073709551614UL)) && l_360), 1))) >= g_160))) && 0x6975L), 6))))), l_360), l_257)))), 18446744073709551612UL));
                        l_421 = (safe_div_func_int16_t_s_s(func_123((safe_mod_func_uint8_t_u_u(g_91.f4, p_102)), g_91.f2, (safe_mul_func_uint8_t_u_u(((l_395 || (safe_mul_func_int16_t_s_s(g_91.f4, l_257))) >= func_87(l_207, l_205.f1)), p_102)), l_190, p_101), g_37));
                        if (l_422)
                            break;
                        if (l_205.f4)
                            goto lbl_423;
                    }
                    else
                    {
                        g_112 = l_395;
                        g_372 = (safe_rshift_func_uint8_t_u_s(p_103, (g_171 & l_377)));
                        return g_37;
                    }
                    l_360 = (1L < (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(func_87(g_91, l_207.f4), 11)), ((safe_lshift_func_int16_t_s_u(p_102, (0UL | ((-7L) && (l_360 >= func_87(g_91, p_103)))))) & (-1L)))));
                    g_112 = (safe_rshift_func_uint8_t_u_u(p_103, 5));
                }
                g_171 &= p_102;
                l_392 = (g_91.f0 != l_377);
                if (g_91.f4)
                {
                    const int l_447 = 3L;
                    l_444 &= ((g_91.f0 == 0x827CEEB1L) >= func_87(g_91, ((func_123(l_205.f1, g_91.f0, (~0xADC2F6E3L), (((+(safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(g_37, (safe_mod_func_int32_t_s_s(((((l_360 || (((-2L) < p_102) < 0x2B8EC61AF65337C0LL)) >= 0xDD09L) == l_207.f0) && p_103), p_101)))), l_377))) == p_102) != l_360), g_91.f0) >= g_12) <= p_102)));
                    for (g_372 = 22; (g_372 <= 25); ++g_372)
                    {
                        l_192 &= p_103;
                        l_392 &= (l_447 && (safe_add_func_int16_t_s_s(((+((safe_lshift_func_int8_t_s_s(0x1DL, 3)) == func_123(g_4, p_102, p_101, l_205.f4, g_372))) == 0x7F92L), p_101)));
                        g_4 |= 0xB3C04639L;
                        g_4 |= (p_103 || g_37);
                    }
                }
                else
                {
                    for (l_109 = 3; (l_109 < 4); l_109 = safe_add_func_int32_t_s_s(l_109, 3))
                    {
                        char l_464 = 0x05L;
                        int l_465 = 5L;
                        l_465 = (safe_mod_func_int32_t_s_s(p_101, ((0UL | (safe_unary_minus_func_uint8_t_u(((safe_sub_func_int8_t_s_s(0xFBL, (safe_lshift_func_int16_t_s_u(p_102, l_360)))) && p_103)))) ^ (((safe_mod_func_uint64_t_u_u((g_160 ^ func_87(l_463, l_464)), g_372)) < g_91.f1) < p_103))));
                        g_372 = (safe_div_func_uint32_t_u_u(p_103, (safe_mod_func_int32_t_s_s(p_102, func_87(g_91, p_103)))));
                        g_372 |= (g_291 > (((safe_add_func_int32_t_s_s((func_87(func_121(l_464), (safe_lshift_func_uint8_t_u_u((func_87(l_205, g_91.f2) < (0xBE1AL != g_476)), (l_207.f2 > g_12)))) | g_91.f1), p_103)) < 0UL) == g_91.f2));
                    }
                }
            }
            for (p_102 = (-22); (p_102 == 17); p_102 = safe_add_func_int16_t_s_s(p_102, 5))
            {
                const unsigned char l_479 = 0x7AL;
                union U0 l_483 = {-1L};
                long long l_537 = 0xBFC9AD38F8D4892FLL;
                if ((g_12 & p_101))
                {
                    if (l_479)
                        break;
                }
                else
                {
                    unsigned long long l_482 = 18446744073709551606UL;
                    unsigned l_505 = 0xA2F60905L;
                    if ((safe_lshift_func_uint16_t_u_s(g_291, func_123(p_101, l_109, l_482, l_205.f2, func_87(l_483, g_372)))))
                    {
                        g_112 = ((safe_add_func_uint32_t_u_u((g_91.f4 > ((g_91.f1 < l_486) >= ((safe_mod_func_uint64_t_u_u(0x30CF6C2580E91001LL, (safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u(p_102, func_123(l_205.f1, ((((func_123(p_101, g_4, (safe_div_func_int8_t_s_s((p_102 <= l_495), p_103)), p_101, l_177) | g_91.f1) >= 0UL) <= g_91.f1) || p_102), l_482, g_91.f2, g_37))), l_177)))) ^ 0x192015469C467ECALL))), 0xA97D9578L)) | g_372);
                        return p_103;
                    }
                    else
                    {
                        short l_502 = 0xA446L;
                        l_205.f1 = ((func_123(p_103, l_482, (p_101 > (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_91.f0, ((0UL == func_87(g_91, l_502)) == g_91.f0))), l_495)) < p_102), l_463.f2))), g_91.f2, l_502) || g_372) != 0xB0593DF1L);
                        l_392 = (safe_mod_func_uint16_t_u_u(l_505, g_476));
                        l_192 = 0x4A3B4D32L;
                        l_483.f1 = func_123(p_101, g_4, (l_109 ^ (safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((l_207.f1 > p_101) <= (0xA743C6E1L | (((safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u(1UL, ((((safe_add_func_uint32_t_u_u(0x0B98C031L, (safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((l_205.f4 && g_91.f1), l_392)), l_479)))) != 0x4EL) < 0UL) > p_103))) != l_207.f2) & 0x3DL), g_37)), p_103)) == l_109) && g_91.f2))), l_522)), g_171))), g_91.f1, l_190);
                    }
                    if (((g_171 <= func_87(g_91, (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((~((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((-10L), ((l_505 > ((((safe_add_func_uint8_t_u_u(((((func_87(l_207, l_190) > (safe_div_func_int16_t_s_s(l_207.f2, l_522))) != p_101) | g_91.f0) > l_537), g_291)) == 1L) >= p_103) & 0xC2L)) && 0x7B87533BB3791D0FLL))), 1)), p_102)) > l_463.f1)) | 0x11FBB4A379538BAELL), 0xC7L)), l_377)))) != l_192))
                    {
                        l_463.f4 |= (safe_add_func_uint32_t_u_u(4294967292UL, l_479));
                    }
                    else
                    {
                        unsigned char l_571 = 255UL;
                        g_372 |= ((safe_mod_func_uint32_t_u_u(4294967294UL, ((0x5FL | ((0x5DL ^ (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_103, g_112)), (0xB739507D3F3A4E2ALL | (g_91.f1 ^ (safe_lshift_func_int8_t_s_u(l_463.f0, (~(safe_sub_func_int16_t_s_s(l_377, g_171)))))))))) & 65535UL)) | l_463.f2))) != l_377);
                        g_372 &= (safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(250UL, (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(l_205.f0, (safe_div_func_int8_t_s_s(p_102, l_463.f1)))) | (l_560 || ((safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((0x912BAE1B2982E590LL < (0L && (safe_div_func_uint64_t_u_u((p_102 & (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(p_102, l_571)) >= 8UL), 14))), l_571)))), l_483.f2)), p_101)) & 8L))), 3)))), 18446744073709551610UL));
                        l_192 = (g_4 || 0L);
                        if (p_101)
                            continue;
                    }
                    l_483.f4 = (p_101 || func_87(l_463, ((func_123(l_377, p_103, l_537, (l_482 < p_102), (safe_add_func_int16_t_s_s(g_476, p_101))) || g_12) ^ g_372)));
                    g_372 &= g_291;
                }
                l_483.f1 = (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(0UL)), (!func_87(l_463, p_103))));
            }
        }
        else
        {
            long long l_590 = 0x56A0ECFCCA98710ALL;
            union U0 l_646 = {6L};
            unsigned long long l_675 = 18446744073709551609UL;
            if ((safe_unary_minus_func_uint32_t_u((((safe_div_func_uint8_t_u_u(((func_87(g_91, (safe_lshift_func_uint16_t_u_s(p_101, 5))) <= ((((-1L) && 0xD36BL) ^ 0xF45AL) >= (func_87(func_121(p_103), p_101) >= 0xEC49L))) > g_372), 0x1FL)) ^ 0xCC59E95FL) | p_102))))
            {
                unsigned long long l_586 = 18446744073709551614UL;
                unsigned l_601 = 1UL;
                if (((0UL | (l_190 == (l_586 != 0x4AL))) >= (safe_rshift_func_uint16_t_u_u(g_476, p_103))))
                {
                    char l_589 = 0xEDL;
                    l_589 = p_102;
                    l_590 = p_103;
                    g_112 = ((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((0x38L ^ func_123((safe_add_func_uint64_t_u_u((l_586 > func_87(g_91, p_103)), (safe_div_func_int64_t_s_s((g_372 != g_291), p_103)))), l_205.f1, g_160, l_590, l_205.f2)), p_103)) || l_601), l_586)), l_590)) || p_103);
                }
                else
                {
                    g_4 = (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((0xDDF826D1L < (safe_mod_func_uint8_t_u_u(0UL, (safe_div_func_uint32_t_u_u(g_37, (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(p_102, func_87(func_121((safe_mod_func_uint8_t_u_u(0xC5L, (l_590 && (g_91.f0 && g_171))))), g_91.f0))), p_101))))))) >= l_618), l_586)), 5));
                }
            }
            else
            {
                int l_623 = 0xBAFCFDFDL;
                unsigned long long l_626 = 1UL;
                g_372 = (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(l_623, 0)), (safe_sub_func_uint8_t_u_u(0xC5L, p_102))));
                l_192 = l_626;
                l_623 = (0xBF6FE707L & 0x4C3A9362L);
            }
            for (l_422 = 0; (l_422 < 3); l_422 = safe_add_func_uint16_t_u_u(l_422, 8))
            {
                char l_641 = (-3L);
                int l_651 = 1L;
                for (l_495 = (-2); (l_495 != (-7)); l_495 = safe_sub_func_int64_t_s_s(l_495, 4))
                {
                    union U0 l_631 = {-1L};
                    unsigned long long l_636 = 0x2FC5E81A065947FDLL;
                    l_192 = (p_103 || ((func_87(l_631, g_476) <= p_101) ^ ((0x28FAB63B0B475680LL & 0UL) > ((safe_mod_func_uint32_t_u_u((l_636 | 0xED87206CAD40BC08LL), p_102)) > 65535UL))));
                    for (l_631.f4 = 0; (l_631.f4 <= (-18)); --l_631.f4)
                    {
                        short l_652 = 0L;
                        l_651 = (~((0xC4DBEDE3L && (safe_div_func_int16_t_s_s(0x2716L, l_641))) >= (safe_sub_func_uint8_t_u_u((func_87(g_91, (g_160 > (func_87(l_646, l_646.f4) >= ((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((0x4038L ^ l_646.f1), p_102)), g_112)) > l_495)))) >= 0UL), 1L))));
                        g_372 |= (p_101 != l_652);
                        l_651 |= (g_476 ^ g_112);
                        l_646.f1 = g_12;
                    }
                    for (l_618 = 0; (l_618 >= 19); l_618 = safe_add_func_int16_t_s_s(l_618, 3))
                    {
                        if (l_560)
                            goto lbl_655;
                        return g_476;
                    }
                }
                l_192 = func_123(p_101, g_112, g_91.f2, (((l_590 >= g_12) < (safe_sub_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((l_192 && (safe_div_func_int64_t_s_s((-8L), (g_160 && (((safe_mul_func_int8_t_s_s((+(safe_mod_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(g_91.f0, 2)) <= l_205.f0), g_160))), g_91.f0)) && l_651) < 253UL))))), 0x8CL)) <= 3L), (-1L)))) & l_646.f2), l_207.f1);
            }
            l_192 = ((safe_add_func_uint32_t_u_u((((safe_div_func_int8_t_s_s((g_4 & l_207.f1), (func_123(g_91.f2, l_646.f0, p_102, p_102, ((safe_div_func_uint8_t_u_u(func_123((0x4DFB4A7BL <= g_37), l_207.f4, p_103, l_674, p_101), p_103)) != l_675)) ^ g_91.f2))) & p_103) && l_646.f2), 0UL)) == g_476);
            g_372 = func_87(l_205, (safe_sub_func_int16_t_s_s(func_87(g_91, (safe_rshift_func_uint8_t_u_u(0x6CL, 7))), p_102)));
        }
    }
    else
    {
        unsigned char l_697 = 248UL;
        union U0 l_700 = {-2L};
        const unsigned l_764 = 18446744073709551615UL;
        unsigned long long l_840 = 0UL;
        for (l_109 = (-12); (l_109 == 16); l_109 = safe_add_func_uint8_t_u_u(l_109, 6))
        {
            long long l_682 = 1L;
            unsigned l_753 = 0x6C03CAE9L;
            int l_784 = 0x298F7468L;
            if (((((l_682 > (g_91.f4 >= p_102)) > (18446744073709551613UL && (p_102 && p_102))) ^ (safe_add_func_uint32_t_u_u(0x140CBF2EL, (0x94L & (p_102 ^ 0x3DL))))) >= p_103))
            {
                int l_707 = (-1L);
                int l_711 = (-1L);
                if ((safe_sub_func_int16_t_s_s((4294967290UL >= (safe_unary_minus_func_int64_t_s((p_101 == (func_87(func_121(l_207.f2), (3L && g_91.f0)) && (safe_sub_func_uint32_t_u_u(((+(l_207.f1 | ((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((6L != 0x13F8A0486EC8F621LL), 0xE3ADFD4AL)) >= p_102), p_102)) || l_682))) & p_103), 8UL))))))), l_422)))
                {
                    unsigned char l_696 = 9UL;
                    int l_720 = 0x2D61F366L;
                    if ((g_91.f2 || (safe_mod_func_int32_t_s_s((l_696 && g_112), l_696))))
                    {
                        l_697 |= p_101;
                        if (l_682)
                            break;
                    }
                    else
                    {
                        const int l_710 = 0xB9B15962L;
                        g_4 &= p_101;
                        l_711 |= (safe_rshift_func_int16_t_s_s((func_87(l_700, p_101) > (!(+(safe_lshift_func_int16_t_s_u((g_160 < (safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(g_171, l_707)), (+(l_707 && (safe_add_func_int8_t_s_s((l_207.f1 != g_160), l_109))))))), l_710))))), 6));
                    }
                    l_720 = ((l_618 | ((0x47F5F3E4B189373DLL | p_101) <= p_103)) < (((~((l_700.f1 != (safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(((-1L) != (safe_add_func_uint8_t_u_u(g_91.f1, (safe_lshift_func_int8_t_s_u(g_372, g_91.f2))))), l_177)) > 0UL), 4))) == p_101)) > 0L) && 0x3871B06F6FBDC2D0LL));
                    l_720 = (safe_add_func_uint8_t_u_u(p_101, (+(safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(((((safe_mod_func_uint16_t_u_u((func_123(l_422, (safe_add_func_uint64_t_u_u(l_711, (g_291 && (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(0x5B49L, 12)), 1UL))))), (safe_mod_func_uint8_t_u_u(p_102, g_91.f0)), l_682, p_101) | g_37), p_103)) != p_103) && 0xB9L) == g_91.f4), 6)) <= p_102), 3L)))));
                }
                else
                {
                    unsigned short l_741 = 0UL;
                    l_741 = (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((0x9E34645FL > 0x6706623FL), g_4)), 6));
                    g_112 &= l_741;
                    if (p_102)
                        continue;
                }
                if (((p_102 > p_103) == g_112))
                {
                    return l_711;
                }
                else
                {
                    return p_103;
                }
            }
            else
            {
                unsigned short l_749 = 65535UL;
                int l_752 = 0x7344329DL;
                l_752 = (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u(g_37)), (-9L))), l_749)), ((l_700.f1 < p_101) >= (safe_sub_func_uint16_t_u_u((l_257 & l_682), (((g_112 != 0x9FA8FC2CL) && g_372) >= p_103))))));
                g_171 ^= 0x87B9AA23L;
            }
            if (func_87(l_207, g_476))
            {
                union U0 l_754 = {0L};
                l_753 &= l_207.f1;
                l_754.f1 = (g_91.f4 < ((((func_87(l_754, (((((safe_mul_func_int8_t_s_s(6L, (safe_unary_minus_func_int16_t_s(func_123(p_103, g_91.f0, p_103, ((safe_rshift_func_int8_t_s_u(((1UL >= (+(l_207.f2 | (!g_171)))) != 0xF5CCF9A6L), 4)) ^ g_12), p_102))))) || l_753) > p_103) && l_754.f2) <= l_754.f4)) == l_753) != l_700.f0) >= 0x70A496BDL) < g_372));
                l_754.f1 = ((g_160 | 0x75965E3FL) ^ func_87(l_754, (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u((l_764 & 2UL), 9)) & l_754.f0), g_91.f0))));
                l_700.f4 = func_87(l_207, g_91.f1);
            }
            else
            {
                unsigned l_776 = 18446744073709551615UL;
                int l_809 = 1L;
                union U0 l_826 = {1L};
                for (l_207.f4 = 0; (l_207.f4 > (-29)); l_207.f4--)
                {
                    int l_789 = 0L;
                    union U0 l_805 = {0xB1039C0EL};
                    l_700.f1 = ((func_123(p_102, (safe_lshift_func_uint8_t_u_u(0x32L, 3)), (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((+func_123(g_91.f0, (g_12 ^ ((((safe_unary_minus_func_int32_t_s(0xCA48F505L)) == (safe_mul_func_uint16_t_u_u(0x49ABL, 3L))) && (g_91.f1 != (-5L))) < g_12)), g_12, l_776, p_103)), 0)), p_102)), g_91.f0, p_101) & g_37) | g_777);
                    if ((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(g_112, (safe_div_func_int8_t_s_s(1L, p_101)))), ((func_123(func_123(((-9L) && p_103), g_476, p_102, (0x4BFCDC0BL != l_784), g_91.f2), g_476, p_103, p_103, g_37) > 65535UL) | l_422))))
                    {
                        int l_802 = (-6L);
                        l_422 = ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(0x1DL, (l_789 < 0x1FL))), 0L)) != l_776);
                        g_372 = ((+func_123(g_112, (safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(l_207.f0, g_91.f0)), l_776)) ^ (safe_rshift_func_int16_t_s_s(((g_91.f4 < p_102) && 0x4AFADEB7L), g_160))), 4)), (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(p_101, g_91.f1)), 0L)), l_802, l_802)) ^ 0xFC3DL);
                        g_112 = l_789;
                        l_422 = p_103;
                    }
                    else
                    {
                        unsigned short l_806 = 1UL;
                        l_784 = (safe_lshift_func_int8_t_s_s((func_87(l_805, ((g_171 <= g_372) < l_700.f2)) || ((g_91.f1 && l_806) == (l_789 > (0xB5C036F068E2ABDFLL == 18446744073709551614UL)))), 4));
                        if (l_753)
                            continue;
                    }
                    l_809 ^= (l_776 || (safe_mod_func_uint16_t_u_u(p_103, p_102)));
                    l_784 ^= (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_476, g_112)), ((safe_sub_func_int16_t_s_s(l_109, 0L)) && (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_102, (safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((p_103 < func_87(l_826, (p_102 != (p_102 & g_91.f4)))), p_102)), 0xDCL)))), 0x025AL)), p_103)))));
                }
                g_372 |= (safe_unary_minus_func_uint32_t_u(g_291));
            }
            l_700.f1 &= p_103;
        }
        l_422 = (7UL || ((safe_sub_func_int32_t_s_s(((g_12 < (!(((l_207.f0 >= p_103) & (!(safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_101, (safe_add_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(0x58FAL, ((safe_add_func_uint16_t_u_u(0x25AEL, (l_840 <= p_101))) >= 0xE4L))) & l_700.f2), g_91.f2)))), p_102)))) & g_91.f0))) & 0xF1L), l_700.f1)) <= l_841));
        g_112 = (-3L);
    }
    return g_171;
}







static union U0 func_121(unsigned short p_122)
{
    unsigned l_146 = 0UL;
    char l_147 = 0xF8L;
    int l_176 = 0L;
    if (g_37)
    {
        unsigned l_129 = 4294967288UL;
        l_176 &= func_123((0x26A28E28L ^ 1L), ((l_129 | (((safe_rshift_func_uint8_t_u_u((((((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((p_122 >= p_122), 0)) || p_122), (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_122, (((safe_rshift_func_int8_t_s_u(0xDEL, (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((0x4740B48CF4EDB986LL & 18446744073709551609UL) == 0x3AD1FF0DL), l_146)), l_129)))) <= 5UL) | g_37))), 2)))) & g_37) && g_91.f1) ^ p_122) && g_91.f1), g_91.f0)) > p_122) > g_91.f4)) != 0xA3BAL), g_91.f1, l_147, p_122);
    }
    else
    {
        g_171 &= (0xA15E1F53DE943933LL ^ g_91.f4);
    }
    return g_91;
}







static int func_123(unsigned long long p_124, unsigned p_125, unsigned p_126, unsigned p_127, int p_128)
{
    long long l_172 = 0xC58D0DBADF696825LL;
    int l_175 = (-10L);
    if (g_91.f0)
    {
        unsigned long long l_157 = 0xAC59B50370D8BEEFLL;
        int l_159 = 0xAFE90CC9L;
        if ((safe_lshift_func_uint16_t_u_s(0x8B81L, 3)))
        {
            short l_152 = 0x15A3L;
            int l_158 = 0x9D2E6782L;
            l_158 = (((safe_mul_func_uint8_t_u_u(l_152, (0xC7BDL || (p_126 | ((!(safe_sub_func_int16_t_s_s(p_128, (254UL ^ (safe_mod_func_uint64_t_u_u(p_128, 1L)))))) < l_152))))) >= (((1L != g_91.f0) ^ (-9L)) != 0xF258L)) < l_157);
            if (p_125)
            {
                return l_157;
            }
            else
            {
                l_159 = g_91.f1;
                g_160 = p_124;
                l_158 |= p_126;
                if (((((safe_sub_func_int16_t_s_s(g_37, (safe_mul_func_uint16_t_u_u(l_157, (p_126 >= ((-8L) < ((+0x626FL) <= 0xC0DFL))))))) >= (l_158 > (safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(func_87(g_91, l_157), 0xE113DB58L)) ^ l_152), (-10L))))) ^ p_127) || g_91.f2))
                {
                    l_158 |= 1L;
                    return g_91.f4;
                }
                else
                {
                    return p_127;
                }
            }
        }
        else
        {
            for (p_128 = 0; (p_128 == 28); p_128++)
            {
                g_171 = 3L;
            }
        }
        g_171 = l_157;
        l_172 ^= p_124;
        return l_159;
    }
    else
    {
        long long l_173 = 0x75991FC229ECF7F4LL;
        unsigned l_174 = 8UL;
        l_173 = g_12;
        l_175 = l_174;
        return g_160;
    }
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_972, "g_972", print_hash_value);
    transparent_crc(g_1000, "g_1000", print_hash_value);
    transparent_crc(g_1018.f2, "g_1018.f2", print_hash_value);
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    transparent_crc(g_1082, "g_1082", print_hash_value);
    transparent_crc(g_1273, "g_1273", print_hash_value);
    transparent_crc(g_1358, "g_1358", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
