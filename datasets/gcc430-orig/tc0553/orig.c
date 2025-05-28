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
   unsigned char f1;
   int f2;
   const int f3;
};


static short g_5 = 0x44D0L;
static unsigned short g_26 = 0x83BBL;
static int g_66 = 7L;
static int g_71 = 9L;
static unsigned g_72 = 18446744073709551615UL;
static unsigned g_82 = 0UL;
static short g_100 = 0xFE8EL;
static unsigned char g_101 = 0x23L;
static unsigned char g_102 = 0x7FL;
static char g_120 = 0x25L;
static unsigned g_130 = 1UL;
static int g_145 = 0L;
static char g_156 = 8L;
static int g_171 = 7L;
static unsigned g_174 = 2UL;
static unsigned short g_186 = 0UL;
static unsigned short g_205 = 0x6E3AL;
static unsigned char g_206 = 0x57L;
static char g_232 = 8L;
static volatile int g_237 = 0x67802F31L;
static unsigned g_288 = 0UL;
static unsigned g_316 = 18446744073709551608UL;
static int g_318 = 0x78E774DDL;
static short g_319 = 8L;
static int g_353 = 0L;
static union U0 g_418 = {0UL};
static union U0 g_468 = {1UL};
static union U0 g_480 = {0xB36D74C5L};
static unsigned g_504 = 0UL;



static union U0 func_1(void);
static short func_3(unsigned short p_4);
static char func_16(int p_17, int p_18, union U0 p_19);
static int func_20(unsigned p_21, unsigned p_22);
static unsigned func_23(unsigned short p_24);
static const unsigned func_27(int p_28, union U0 p_29, unsigned p_30);
static union U0 func_31(unsigned p_32, unsigned short p_33, unsigned p_34, int p_35);
static char func_40(int p_41, int p_42);
static int func_43(unsigned p_44);
static short func_50(char p_51, const unsigned p_52, char p_53, unsigned p_54);
static union U0 func_1(void)
{
    unsigned l_2 = 1UL;
    int l_514 = (-2L);
    int l_531 = 0x1FFBD9FDL;
    union U0 l_532 = {8UL};
    g_504 |= ((l_2 <= l_2) == (func_3((g_5 ^= 0x872FL)) & g_480.f1));
    for (g_288 = 0; (g_288 >= 56); g_288 = safe_add_func_uint16_t_u_u(g_288, 9))
    {
        unsigned l_513 = 1UL;
        int l_523 = (-4L);
        union U0 l_525 = {0x0589256AL};
        unsigned l_526 = 1UL;
        g_418.f2 ^= (l_514 = (0xB0L <= ((g_5 || (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(l_513, g_206)), 0xE7DEL))) == g_468.f0)));
        for (g_418.f0 = 25; (g_418.f0 > 31); g_418.f0++)
        {
            int l_524 = (-6L);
            l_524 = (((safe_add_func_int8_t_s_s((((l_523 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((-8L), 14)), 3))) <= 0x92E7L) ^ (l_524 | ((((g_468.f2 || (247UL & g_26)) && 1L) <= ((!((((g_5 = func_27((g_480.f3 != ((func_40(g_171, g_353) ^ 0xA32B4BB5L) | g_316)), l_525, l_525.f1)) != l_525.f0) != l_514) != 1UL)) < l_525.f2)) && g_171))), g_480.f3)) > 0x91L) && 0x56L);
            if (l_2)
                break;
        }
        g_480.f2 = (l_514 && g_174);
        g_418.f2 = func_27((l_523 |= ((0x87L < l_2) <= (l_526 != g_468.f3))), func_31(g_71, l_2, (l_514 ^= ((253UL > g_480.f2) == func_50((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s(0xD038L, 0)) ^ 8UL), g_237)), l_525.f0, l_526, g_318))), l_2), l_531);
    }
    return l_532;
}







static short func_3(unsigned short p_4)
{
    int l_6 = 0x9570A50BL;
    int l_7 = 0x01AAE4B9L;
    l_7 = l_6;
    l_7 = (((safe_lshift_func_int16_t_s_s(0xC710L, (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_5, 2)), ((safe_lshift_func_int8_t_s_u(((func_16((g_468.f2 = func_20((func_23(l_7) == 0x30DE17C3L), l_6)), p_4, g_480) >= l_6) ^ g_5), 0)) && p_4))))) || g_100) == g_480.f0);
    l_7 = 0x694883F7L;
    return g_130;
}







static char func_16(int p_17, int p_18, union U0 p_19)
{
    unsigned short l_483 = 2UL;
    int l_496 = 0x0DBD608AL;
    int l_497 = (-1L);
    g_468.f2 = (safe_rshift_func_uint16_t_u_s(p_19.f3, func_23(l_483)));
    l_497 = ((7L ^ (safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(p_17, 13)), ((((safe_add_func_uint32_t_u_u((0L ^ (((p_19.f1 |= (l_483 != l_483)) > (!(safe_lshift_func_uint16_t_u_u(l_483, p_17)))) ^ (g_319 = (0x5AE2L ^ (l_496 = (safe_lshift_func_uint8_t_u_s((g_102 = p_18), 7))))))), 4294967295UL)) == l_483) >= l_483) && p_17))) > 0L), l_483))) || 6UL);
    p_19.f2 = ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((func_20(p_19.f1, g_418.f2) || l_483), p_17)), p_18)) || (l_496 = ((safe_add_func_uint32_t_u_u(g_480.f3, g_468.f0)) > g_480.f2)));
    return p_19.f3;
}







static int func_20(unsigned p_21, unsigned p_22)
{
    const unsigned short l_459 = 0xC6D4L;
    int l_467 = 1L;
    int l_469 = (-1L);
    unsigned l_470 = 0x5B0AF15DL;
    unsigned short l_475 = 0UL;
    l_470 = ((g_205 |= (safe_mod_func_int8_t_s_s(0xD0L, 4L))) & (l_469 = func_50(g_232, l_459, (safe_sub_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(func_27(func_40((1UL || (g_100 ^ ((safe_lshift_func_uint8_t_u_u(l_459, (((g_418.f2 = (safe_rshift_func_int8_t_s_u((g_156 = ((l_467 ^= (g_353 && (p_22 = g_288))) | 2L)), p_21))) ^ g_120) == p_21))) <= l_459))), p_21), g_468, p_21))), 0xF0C3L)), l_459)));
    g_353 = ((safe_rshift_func_int16_t_s_s((l_467 = (g_171 ^ ((p_22 & ((safe_rshift_func_uint16_t_u_s(((1UL != (l_475 | (g_5 != (safe_rshift_func_int8_t_s_u(((p_22 && (p_22 | (safe_add_func_int16_t_s_s((l_469 = (l_467 & ((p_21 == 0x85L) && g_71))), 1UL)))) ^ 0xD93DL), l_459))))) == l_475), 2)) >= g_232)) & g_206))), 11)) >= l_459);
    return g_186;
}







static unsigned func_23(unsigned short p_24)
{
    char l_25 = 9L;
    int l_83 = 1L;
    int l_185 = 0x1B25924DL;
    unsigned char l_201 = 0x92L;
    short l_202 = 0x84D3L;
    unsigned short l_218 = 0x1FBBL;
    union U0 l_261 = {1UL};
    unsigned l_263 = 4294967295UL;
    const unsigned l_447 = 0UL;
    g_26 = (l_25 = (~0x6E8F5917L));
lbl_431:
    if ((((+(((func_27(g_5, func_31((safe_add_func_int32_t_s_s(p_24, l_25)), p_24, p_24, (l_25 | (l_83 = (safe_sub_func_int8_t_s_s(func_40(g_5, func_43((g_26 == g_26))), g_5))))), p_24) | p_24) && 0x50DDL) || g_102)) <= 1L) != g_5))
    {
        unsigned char l_175 = 0UL;
        int l_184 = 0L;
        unsigned short l_195 = 65533UL;
        for (g_156 = 0; (g_156 < (-12)); g_156 = safe_sub_func_uint8_t_u_u(g_156, 3))
        {
            char l_180 = 0x25L;
            int l_181 = (-1L);
            l_175 = (g_156 < (g_101 <= (g_174 = g_102)));
            g_186 = ((p_24 < (safe_mod_func_uint16_t_u_u(func_50(p_24, ((func_43((l_180 = ((safe_lshift_func_int8_t_s_u(g_5, 6)) != 1UL))) ^ (func_50(l_181, (func_50((((((safe_lshift_func_uint8_t_u_s((func_50((((l_184 ^= p_24) == p_24) >= (func_50(l_185, p_24, g_100, l_175) ^ (-7L))), g_72, p_24, l_181) & g_26), p_24)) > g_101) & 1UL) >= 0x1B6E25F4L) == l_25), g_71, p_24, l_175) < 0x5BL), p_24, g_100) < p_24)) != 0xD2B78A18L), p_24, l_25), 1UL))) != 0UL);
            for (g_82 = (-18); (g_82 < 8); g_82 = safe_add_func_int32_t_s_s(g_82, 9))
            {
                unsigned l_200 = 4294967292UL;
                l_200 = (safe_add_func_int32_t_s_s(0x320F675BL, (func_43(p_24) >= ((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s((((((((-6L) | l_195) ^ g_71) <= (p_24 & ((p_24 && (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(0x08L, 2)), 1)) >= g_26) > p_24)) ^ 0x7EL))) < g_71) || 0UL) && p_24), p_24)), 0x31C0FDE1L)) < g_120))));
            }
        }
        return l_195;
    }
    else
    {
        unsigned l_207 = 0x51268E6DL;
        int l_208 = (-7L);
        l_208 = func_27((l_201 == (65533UL && l_202)), func_31((l_207 = (l_202 ^ (safe_mod_func_int16_t_s_s(func_40(p_24, (g_206 = (g_205 = (((0L <= 1L) && l_185) == p_24)))), g_5)))), g_145, g_156, g_171), l_201);
    }
    if (p_24)
    {
        int l_215 = (-3L);
        int l_219 = (-1L);
        l_83 ^= p_24;
        l_219 ^= ((((g_206 &= (safe_sub_func_int16_t_s_s(((g_156 > (p_24 >= p_24)) > (-1L)), (safe_rshift_func_uint8_t_u_s(((func_43(((((l_185 = ((safe_lshift_func_uint16_t_u_u(g_101, 6)) ^ l_215)) != (safe_add_func_uint16_t_u_u((p_24 && (g_26 = l_215)), ((((((l_218 | 1L) ^ p_24) & l_215) >= 0x26L) && l_215) | p_24)))) && 9UL) | 0x2CAEL)) | 0x38L) | 0x654BA642L), 6))))) <= p_24) == 0x282E3601L) && p_24);
    }
    else
    {
        unsigned l_226 = 0x1DE2C0B9L;
        int l_242 = 0xD2AB77A9L;
        unsigned short l_317 = 9UL;
        int l_320 = 2L;
        int l_430 = (-7L);
        if (l_202)
        {
            unsigned short l_227 = 0xEC3DL;
            int l_230 = 1L;
            int l_231 = 0x94934B16L;
            unsigned short l_264 = 0xA6E0L;
            int l_285 = (-1L);
            unsigned short l_314 = 0x2E37L;
            g_232 = ((safe_add_func_int16_t_s_s(g_120, ((((safe_add_func_int8_t_s_s(g_66, 0xB0L)) ^ (0x45L || func_50((safe_mod_func_uint16_t_u_u(l_226, (l_227 |= g_186))), g_120, (g_156 ^= ((safe_rshift_func_int16_t_s_s(((((((l_230 = (g_174 |= (p_24 || 9L))) >= l_218) != g_72) < 1UL) || 0xDCL) > l_226), 10)) >= 0xC023DFF7L)), l_226))) && p_24) == l_231))) != 6L);
            for (g_102 = 2; (g_102 < 37); g_102++)
            {
                return p_24;
            }
            for (g_100 = 4; (g_100 != (-3)); g_100 = safe_sub_func_uint16_t_u_u(g_100, 4))
            {
                return p_24;
            }
            if (g_102)
            {
                unsigned l_262 = 0UL;
                int l_295 = 0x79BB8A7CL;
                g_237 |= 0xC020D4C6L;
                for (g_206 = 0; (g_206 != 24); g_206++)
                {
                    char l_240 = 1L;
                    int l_243 = 1L;
                    int l_260 = 0xD86B5120L;
                    if (g_102)
                    {
                        l_242 = (p_24 <= ((((l_240 = 0x36L) <= g_26) <= ((safe_unary_minus_func_int16_t_s(p_24)) <= (l_230 < p_24))) <= 0xAFL));
                        l_243 = (l_230 && (g_72 <= g_130));
                        l_242 = (safe_sub_func_uint8_t_u_u((p_24 >= (p_24 <= (((safe_add_func_uint16_t_u_u(p_24, (((p_24 || (l_83 = ((((l_243 = (safe_rshift_func_uint8_t_u_u(0x03L, 3))) <= (g_206 >= l_240)) ^ (func_27((((g_186 = (safe_add_func_uint16_t_u_u((l_260 = (safe_rshift_func_uint16_t_u_s((l_185 = p_24), (((~(safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(8L, 5)), l_226))) >= 0x594A5C46L) != g_71)))), p_24))) | l_231) == g_206), l_261, l_262) <= 0x8B5B80E2L)) != l_263))) == (-1L)) > g_205))) >= l_264) <= l_262))), 0xC7L));
                        l_242 &= (0x4AL ^ 1UL);
                    }
                    else
                    {
                        unsigned short l_283 = 0xA669L;
                        int l_284 = 0xB8A66AFEL;
                        int l_315 = 0L;
                        l_285 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((l_260 ^ (l_231 |= (safe_sub_func_int16_t_s_s((((func_40(p_24, (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(func_40(g_205, (l_230 = (((((safe_add_func_uint16_t_u_u(((g_120 & ((g_101 | g_186) >= (!(l_283 = 0x501E4ACEL)))) ^ 0x668FE129L), l_284)) | (-6L)) == 0x54C6CEB2L) & l_284) & 0x9AL))), g_100)), l_261.f0))) >= 0xB45E26B5L) != l_227) < l_264), g_145)))), l_262)) < 5L), g_237)) && g_72) | g_102), l_264)), p_24));
                        g_288 |= func_40(p_24, (safe_rshift_func_uint16_t_u_u(p_24, 10)));
                        g_316 &= ((l_295 = (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((-1L) > func_43(l_285)) && l_262), 3)), 5)), 4))) == func_50((safe_add_func_int8_t_s_s(((((safe_mod_func_uint8_t_u_u(g_206, 5UL)) >= g_145) < (safe_add_func_uint16_t_u_u(func_50((((safe_rshift_func_int16_t_s_s(func_50((safe_lshift_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u(1UL, ((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u(g_171, 0x4E715010L)) < l_240) ^ g_232) == 1L), l_262)), l_314)) | 0x71L))) >= 0L) == l_242) | p_24), 1)), l_240, g_71, l_231), p_24)) ^ g_26) ^ p_24), g_205, l_242, l_242), 65526UL))) ^ g_120), g_72)), p_24, l_315, g_232));
                    }
                    if (p_24)
                        break;
                }
            }
            else
            {
                g_318 ^= (l_317 |= g_174);
                g_319 = g_66;
            }
        }
        else
        {
            unsigned short l_321 = 0x3DCCL;
            int l_332 = 0x5D555114L;
            int l_374 = (-1L);
            l_320 = p_24;
            l_321 &= 0L;
            for (g_102 = 0; (g_102 != 46); g_102++)
            {
                short l_333 = 0xA665L;
                int l_334 = 0x47B3EE37L;
                int l_335 = (-1L);
                int l_390 = (-1L);
                l_335 &= (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_102, ((func_50(p_24, (l_333 |= (safe_add_func_int8_t_s_s(func_40(g_82, l_317), ((l_321 >= (l_242 = (l_332 = p_24))) != p_24)))), (l_185 = p_24), l_334) && p_24) > p_24))), g_102)), g_237));
                l_320 = (((func_50((65528UL <= func_40((g_171 ^= ((l_321 ^ func_43(p_24)) < (~p_24))), (p_24 < l_335))), ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(func_50(g_186, p_24, g_174, l_242), p_24)), 1)) != l_242), g_100, l_226) <= l_320) <= g_156) == 0UL);
                if (((g_319 = (safe_sub_func_uint16_t_u_u(p_24, func_43(g_101)))) ^ 4UL))
                {
                    short l_352 = 1L;
                    int l_373 = 0L;
                    int l_375 = 0xBAFBCACCL;
                    g_353 = func_50((safe_lshift_func_uint8_t_u_u((g_5 ^ g_316), (g_101 |= ((safe_sub_func_uint16_t_u_u((l_332 >= ((safe_mod_func_uint32_t_u_u(((g_232 < (65535UL | (safe_mod_func_uint8_t_u_u(p_24, g_5)))) == (p_24 > (((func_40(((safe_sub_func_int8_t_s_s((g_171 > l_352), 0x15L)) >= p_24), p_24) >= p_24) ^ l_332) != g_205))), g_26)) || l_321)), l_352)) ^ (-1L))))), l_261.f0, l_352, l_352);
                    l_334 = (((safe_unary_minus_func_uint32_t_u(0x86FAD7FBL)) == (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(l_317, l_352)), g_156))) != (safe_mod_func_int8_t_s_s((func_43(((l_261.f2 | (safe_add_func_int8_t_s_s(l_334, ((l_320 = 0xCFL) ^ (safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((0x1ABEL | ((((func_40((safe_add_func_uint32_t_u_u((p_24 < (-1L)), l_334)), l_332) >= 0xA8L) > 0xA4L) != 0xF9L) != l_242)) && 255UL) >= g_288), l_242)), 2UL)))))) >= g_353)) && g_130), l_242)));
                    g_353 = (l_320 = (l_375 = ((-10L) < ((safe_sub_func_uint8_t_u_u(0xA7L, g_186)) & ((g_205 ^ func_43(l_332)) < (g_206 == (safe_mod_func_int16_t_s_s(l_242, (l_374 = (l_373 = (-9L)))))))))));
                }
                else
                {
                    const int l_388 = 1L;
                    int l_391 = 0x46D1B895L;
                    for (l_335 = 0; (l_335 != (-11)); l_335 = safe_sub_func_uint16_t_u_u(l_335, 1))
                    {
                        char l_389 = 0x84L;
                        l_83 = func_50(func_40(g_82, func_43((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((g_319 |= func_50(l_320, (~(l_334 = l_185)), (l_390 &= func_50(g_72, l_335, (0x9B0A29E1L | ((safe_sub_func_uint32_t_u_u((l_388 || ((g_100 < (((((((g_145 >= p_24) <= p_24) && 0UL) & g_316) | g_232) > g_130) <= l_389)) ^ 1L)), g_318)) ^ p_24)), g_316)), g_26)), 8)) == l_202), l_333)), p_24)), p_24)))), l_320, p_24, p_24);
                        if (l_389)
                            break;
                    }
                    if (p_24)
                        break;
                    l_391 ^= g_319;
                }
            }
            l_242 = func_40(l_202, g_120);
        }
        l_261.f2 = (((g_26 ^= (safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(g_72, l_226)), g_66))) >= l_320) & ((l_261.f2 > (g_206 &= (safe_mod_func_int8_t_s_s((l_83 = ((safe_add_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((0x9500L < (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((l_242 = 0x60B6L) ^ (safe_rshift_func_int16_t_s_s(((g_232 || (0x0EL | p_24)) == 0UL), p_24))), 10)), 1)), 1))), 0L)) < p_24) | 0x6CC3L), l_226)) & 9UL)), g_5)))) >= l_317));
        for (g_316 = 0; (g_316 != 12); g_316 = safe_add_func_uint8_t_u_u(g_316, 7))
        {
            const short l_452 = 0x7ECFL;
            int l_455 = 1L;
            int l_456 = 0xC4A36EE1L;
            l_83 = (!(l_242 ^= g_101));
            for (g_186 = 0; (g_186 >= 26); g_186++)
            {
                short l_429 = 0x9EFCL;
                int l_445 = 0x97E4BAF0L;
                int l_449 = 0xA5F42B46L;
                g_353 = (safe_sub_func_uint16_t_u_u(func_27((func_40((p_24 == 65534UL), (l_242 <= 0xC29E1D5FL)) > p_24), g_418, func_50(l_317, (func_50((p_24 || g_353), p_24, p_24, g_186) != p_24), p_24, g_174)), g_174));
                for (l_320 = 17; (l_320 > 18); l_320++)
                {
                    unsigned char l_423 = 4UL;
                    l_423 = (safe_lshift_func_int16_t_s_s(l_201, p_24));
                    return p_24;
                }
                if (((safe_mod_func_uint8_t_u_u((l_430 |= ((+(safe_unary_minus_func_int16_t_s((0x38L != func_43(((((l_429 &= func_27(l_202, func_31(g_130, (safe_rshift_func_uint8_t_u_s(g_5, 3)), l_242, l_320), g_130)) < p_24) < p_24) == p_24)))))) < g_418.f0)), p_24)) != g_26))
                {
                    unsigned l_446 = 4294967295UL;
                    int l_448 = 2L;
                    if (g_130)
                        goto lbl_431;
                    l_448 = func_50(((safe_mod_func_uint32_t_u_u((l_185 = ((+(l_429 <= (safe_sub_func_uint32_t_u_u(4294967295UL, l_429)))) == ((g_26 = (1UL > p_24)) <= (safe_mod_func_int32_t_s_s(p_24, g_418.f0))))), ((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((l_430 = (p_24 ^ ((((+((safe_mod_func_uint32_t_u_u(g_318, 5UL)) == l_445)) ^ (-2L)) != g_72) == g_5))) < l_446) > g_71), l_447)), 4)))) || p_24))) > 0x7E33L), p_24, g_186, l_445);
                    l_449 &= l_261.f3;
                }
                else
                {
                    g_418.f2 = (safe_rshift_func_int8_t_s_u(l_452, 4));
                }
            }
            l_456 ^= (l_455 = (safe_add_func_int8_t_s_s((g_232 = 0x35L), func_40(g_316, l_452))));
        }
    }
    return g_66;
}







static const unsigned func_27(int p_28, union U0 p_29, unsigned p_30)
{
    short l_94 = (-7L);
    short l_95 = 4L;
    char l_106 = 0xD5L;
    int l_148 = 0x07FA3ACCL;
    unsigned short l_149 = 0x7460L;
    g_102 = func_43(((safe_lshift_func_int8_t_s_u(func_40((safe_sub_func_uint8_t_u_u(func_40((g_66 = (safe_rshift_func_uint8_t_u_s(g_71, 7))), ((((((l_94 || l_95) || 0x7311L) == (g_101 &= (0x50866D82L != (((safe_mod_func_int32_t_s_s(l_95, p_29.f2)) && ((safe_sub_func_uint8_t_u_u((p_29.f1 = func_50(l_94, (((g_100 < g_71) == g_82) != g_72), l_94, p_29.f1)), l_94)) | g_100)) & g_100)))) && 0xDAL) | g_100) > 0x1DL)), g_5)), p_28), 5)) ^ 0xB6E27599L));
    if ((((4294967294UL == g_101) & ((safe_lshift_func_uint8_t_u_s(func_40((g_82 ^ p_30), g_26), 7)) ^ func_50(l_95, p_29.f1, (l_106 = (safe_unary_minus_func_int16_t_s((func_50(l_94, p_29.f1, p_30, g_100) | g_5)))), l_95))) & p_28))
    {
        unsigned l_113 = 0UL;
        int l_116 = 1L;
        const char l_119 = (-3L);
        p_29.f2 = (p_30 && l_106);
        g_120 = (safe_add_func_uint16_t_u_u(g_102, (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((l_113 || ((l_94 | ((p_29.f0 ^= (l_116 = (+(safe_mod_func_uint32_t_u_u(4294967289UL, p_30))))) != (g_71 != (safe_lshift_func_uint16_t_u_u(((((g_100 && (8L & g_26)) == g_72) <= g_100) ^ (-10L)), 13))))) || l_119)) >= g_72), l_119)) || p_29.f0), l_106))));
    }
    else
    {
        unsigned l_123 = 0UL;
        int l_131 = 0xDDE94EDEL;
        char l_161 = 0x3CL;
        for (p_28 = 0; (p_28 < (-22)); p_28 = safe_sub_func_uint16_t_u_u(p_28, 2))
        {
            l_123 = 0x52B8ED34L;
            return p_29.f1;
        }
        for (g_82 = (-3); (g_82 < 47); g_82++)
        {
            int l_140 = 0L;
            int l_144 = 0x67205C45L;
            short l_168 = 1L;
            for (p_29.f1 = (-25); (p_29.f1 == 29); p_29.f1 = safe_add_func_int16_t_s_s(p_29.f1, 5))
            {
                int l_143 = 0xE1148926L;
                int l_170 = (-6L);
                l_131 = (g_130 = (safe_rshift_func_int8_t_s_u(l_123, g_82)));
                g_145 = (!((g_102 = (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(0xD7L, p_28)), (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(g_5, func_50(g_102, ((l_123 > (func_43(l_94) | (((l_140 = g_130) != (safe_rshift_func_int16_t_s_s(l_143, l_144))) | p_28))) > g_82), l_123, g_101))), p_29.f1))))) && 0xB7L));
                l_148 &= (func_50(g_82, p_30, p_30, p_30) && func_43(func_50((((((247UL ^ func_43(g_5)) ^ (safe_lshift_func_uint16_t_u_u(p_30, p_28))) | l_123) < l_143) & 0x3BC0L), g_71, p_30, g_145)));
                if ((func_43(l_149) < func_50(l_149, p_29.f1, g_101, g_71)))
                {
                    unsigned l_167 = 1UL;
                    int l_169 = 0x46FE8B5CL;
                    p_28 = ((+((safe_add_func_uint16_t_u_u(func_43(l_95), g_130)) != func_50((safe_add_func_uint8_t_u_u((g_101 &= l_123), (((l_148 = (safe_add_func_uint8_t_u_u(((l_144 == (g_156 = (~p_30))) & g_26), 0x78L))) | g_26) & g_130))), g_120, l_95, p_29.f1))) == p_30);
                    l_148 ^= (((p_28 && p_28) >= 1UL) <= ((safe_add_func_uint8_t_u_u((l_123 ^ (safe_rshift_func_int8_t_s_u((((l_161 = ((g_156 = func_43(l_140)) != (+0L))) || (p_28 != ((safe_add_func_int32_t_s_s((((func_50(p_29.f1, p_29.f1, l_143, l_95) != g_5) & 65535UL) != g_156), g_156)) && p_28))) == g_120), l_123))), (-6L))) || g_101));
                    l_169 = (l_140 != (safe_unary_minus_func_int32_t_s((safe_mod_func_uint16_t_u_u(((func_50(l_161, l_148, l_167, (l_143 == l_140)) != (p_30 || p_29.f1)) & l_168), g_156)))));
                }
                else
                {
                    g_171 = (l_170 = p_28);
                }
            }
        }
    }
    return p_28;
}







static union U0 func_31(unsigned p_32, unsigned short p_33, unsigned p_34, int p_35)
{
    int l_86 = (-9L);
    union U0 l_87 = {0x07285EBCL};
    for (g_66 = (-6); (g_66 == (-21)); g_66 = safe_sub_func_uint32_t_u_u(g_66, 5))
    {
        if (p_34)
            break;
        l_86 = p_33;
        if (p_33)
            continue;
        if (p_34)
            continue;
    }
    return l_87;
}







static char func_40(int p_41, int p_42)
{
    unsigned l_70 = 0x39352A55L;
    int l_77 = 0x1D84CB42L;
    int l_78 = 0L;
    g_71 = (((0x9DL || (safe_unary_minus_func_int32_t_s((((safe_rshift_func_int8_t_s_s(((l_70 || (p_41 == 1L)) | l_70), 6)) || p_42) > (0x8A08L < g_5))))) ^ ((p_41 > g_26) || 0UL)) & g_26);
    g_72 &= g_71;
    l_78 ^= ((p_42 && (g_26 >= p_42)) | (((safe_add_func_int32_t_s_s(((g_72 <= (g_5 | ((safe_mod_func_int32_t_s_s(((g_26 > (l_77 = g_71)) || (p_42 ^ ((0x2E7BL == p_42) >= p_41))), l_70)) >= p_42))) || 0xE1357373L), 0xC5FA6071L)) > p_41) == 0x91L));
    for (p_41 = (-18); (p_41 >= (-13)); p_41++)
    {
        unsigned l_81 = 0x85F4F6E0L;
        l_77 = (p_42 = g_26);
        l_77 = func_43(g_26);
        g_82 ^= l_81;
    }
    return p_42;
}







static int func_43(unsigned p_44)
{
    int l_49 = 0x00085869L;
    int l_61 = 0x6884ADDBL;
    g_66 = (safe_mod_func_uint32_t_u_u(((0x07L <= ((safe_lshift_func_uint8_t_u_s((l_49 = g_5), 1)) & func_50((0xC19AL < 0xE69AL), (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((p_44 ^ (g_5 & (p_44 < g_5))), (p_44 ^ g_5))), g_26)) != g_5), p_44)), l_61, p_44))) != (-7L)), 0x41C5AB2AL));
    return g_66;
}







static short func_50(char p_51, const unsigned p_52, char p_53, unsigned p_54)
{
    unsigned char l_64 = 249UL;
    int l_65 = 0xDFA23986L;
    l_65 = (safe_add_func_int16_t_s_s(g_26, (g_26 && (l_64 == p_52))));
    return l_65;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_418.f0, "g_418.f0", print_hash_value);
    transparent_crc(g_418.f1, "g_418.f1", print_hash_value);
    transparent_crc(g_418.f2, "g_418.f2", print_hash_value);
    transparent_crc(g_418.f3, "g_418.f3", print_hash_value);
    transparent_crc(g_468.f0, "g_468.f0", print_hash_value);
    transparent_crc(g_468.f1, "g_468.f1", print_hash_value);
    transparent_crc(g_468.f2, "g_468.f2", print_hash_value);
    transparent_crc(g_468.f3, "g_468.f3", print_hash_value);
    transparent_crc(g_480.f0, "g_480.f0", print_hash_value);
    transparent_crc(g_480.f1, "g_480.f1", print_hash_value);
    transparent_crc(g_480.f2, "g_480.f2", print_hash_value);
    transparent_crc(g_480.f3, "g_480.f3", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
