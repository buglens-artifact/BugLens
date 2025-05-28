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



static unsigned long long g_24 = 18446744073709551606UL;
static int g_28 = 8L;
static int g_31 = (-5L);
static unsigned short g_50 = 0x4184L;
static unsigned char g_128 = 254UL;
static int *g_140 = (void*)0;
static int **g_139 = &g_140;
static int g_146 = 0L;
static unsigned short g_177 = 0x0BEBL;
static long long g_195 = 0L;
static unsigned char g_198 = 0x78L;
static unsigned short g_244 = 65530UL;
static int g_310 = 0xD4D48139L;
static int *g_309 = &g_310;
static unsigned char g_466 = 7UL;
static unsigned short g_613 = 1UL;
static char g_711 = 0x22L;
static char g_712 = 2L;
static long long g_713 = 0xF9B41F01BC57F522LL;
static char g_759 = 0x69L;
static long long g_820 = 0x53F2D9F185F209F8LL;
static unsigned long long g_826 = 9UL;
static char g_864 = 0xCBL;
static int g_873 = (-1L);
static unsigned char g_876 = 0UL;
static unsigned char g_937 = 2UL;
static unsigned g_996 = 18446744073709551610UL;
static unsigned g_1063 = 0x7E1442F0L;
static char g_1186 = 0L;
static int g_1216 = (-4L);
static unsigned g_1220 = 0x831AB813L;
static unsigned char g_1225 = 0x1FL;
static short g_1417 = 0L;
static int g_1438 = 0xFE61DC2DL;
static short g_1457 = (-8L);
static unsigned g_1459 = 1UL;
static unsigned g_1514 = 2UL;
static unsigned char g_1575 = 0x70L;
static const int *g_1594 = &g_873;
static const int **g_1593 = &g_1594;
static unsigned long long g_1619 = 0xBB5D13E12D32EDF6LL;
static int g_1636 = (-2L);



static unsigned long long func_1(void);
static long long func_9(int p_10, unsigned short p_11, const short p_12, unsigned p_13);
static unsigned char func_20(short p_21, unsigned long long p_22, unsigned short p_23);
static unsigned char func_71(int p_72, int p_73, const int p_74, unsigned short p_75);
static int func_78(long long p_79, int p_80, unsigned p_81);
static int * func_94(int * p_95, int * p_96, unsigned long long p_97, int * const p_98, int * p_99);
static int * const func_101(const int * p_102, int * p_103, int * p_104, short p_105, int * p_106);
static int * func_107(int * p_108, int * p_109, unsigned long long p_110, unsigned p_111, long long p_112);
static int * func_113(long long p_114, const unsigned long long p_115, int * p_116, const int * p_117);
static int ** func_131(const int ** p_132, int * p_133, int ** p_134, int ** p_135, int * p_136);
static unsigned long long func_1(void)
{
    unsigned char l_4 = 246UL;
    char l_1634 = 0x87L;
    int *l_1635 = &g_1636;
    int *l_1637 = &g_28;
    char l_1638 = (-3L);
    (*l_1635) ^= (((((safe_mul_func_int16_t_s_s(l_4, ((safe_add_func_uint64_t_u_u((~(safe_mod_func_int32_t_s_s(l_4, 1UL))), ((func_9((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((+l_4), 8)) <= (safe_lshift_func_uint8_t_u_s(func_20(g_24, (1L >= g_24), g_24), 7))), l_1634)), l_1634, l_1634, g_759) < l_1634) && l_1634))) != g_937))) | l_4) | g_466) | l_1634) & l_4);




    (*l_1637) |= (*l_1635);
    return l_1638;
}







static long long func_9(int p_10, unsigned short p_11, const short p_12, unsigned p_13)
{
    return g_310;
}







static unsigned char func_20(short p_21, unsigned long long p_22, unsigned short p_23)
{
    int l_36 = 1L;
    int l_40 = 0x51C8B9BAL;
    int l_45 = 0xCD17CD95L;
    int l_49 = (-1L);
    int l_1622 = 0x45659A78L;
    unsigned l_1625 = 18446744073709551615UL;
    unsigned l_1628 = 1UL;
    const int **l_1631 = (void*)0;
    unsigned char l_1632 = 0x13L;
    int *l_1633 = (void*)0;
    for (p_21 = 0; (p_21 > 16); p_21++)
    {
        int *l_27 = &g_28;
        int *l_29 = &g_28;
        int *l_30 = &g_28;
        int l_32 = 0x49968CB6L;
        int l_33 = 0xE0CD9796L;
        int l_34 = (-9L);
        int l_35 = 7L;
        int *l_37 = &g_28;
        int *l_38 = (void*)0;
        int *l_39 = &l_35;
        int *l_41 = &l_33;
        int l_42 = 4L;
        int *l_43 = (void*)0;
        int *l_44 = &l_42;
        int *l_46 = &l_32;
        int *l_47 = (void*)0;
        int *l_48 = (void*)0;
        g_50++;
        if (l_45)
            continue;
    }
    (*g_309) ^= (0L & (safe_rshift_func_uint16_t_u_s((p_21 ^ 4294967286UL), 10)));
    l_36 &= (func_71(p_23, (safe_mul_func_int8_t_s_s((l_1631 == l_1631), ((p_23 <= ((0x7F00FDDDL != (g_1514 && p_23)) | 255UL)) != ((((((((-5L) || l_45) || 0UL) > p_22) & g_1459) | 0x9B02L) && 1UL) >= l_1632)))), p_22, p_22) == 0x53L);




    g_28 ^= (*g_1594);
    return p_23;
}







static unsigned char func_71(int p_72, int p_73, const int p_74, unsigned short p_75)
{
    int * const l_90 = &g_28;
    unsigned char l_91 = 0UL;
    int *l_1581 = &g_873;
    int **l_1595 = &g_309;
    int l_1610 = (-6L);
    (*l_1581) ^= func_78(p_72, (safe_add_func_uint8_t_u_u(((((((((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((p_73 ^ (((0xB8L != (((((p_74 != (&p_74 != l_90)) & (*l_90)) & (l_90 != (void*)0)) || (*l_90)) != g_24)) == (*l_90)) & 0xD53575542ED5AEC2LL)), p_73)), 2L)) > 0x35667B22L) | (*l_90)) != l_91) != g_50) != g_28) && g_31) ^ (*l_90)), p_75)), g_28);




    (*l_1581) = p_73;
    if (p_72)
    {
        unsigned l_1583 = 18446744073709551608UL;
        int ***l_1588 = &g_139;
        unsigned l_1589 = 0xCBF09055L;
        (*l_90) = (0x62ACFAC9L | p_72);
        (*l_90) ^= (*l_1581);
        (*l_1581) = l_1589;
    }
    else
    {
        const int *l_1591 = &g_28;
        const int **l_1590 = &l_1591;
        int *l_1592 = &g_146;
        const int ***l_1596 = &l_1590;
        int l_1602 = 0L;
        int l_1617 = (-5L);
        (*l_1596) = &g_1594;

        ;
        for (g_28 = 0; (g_28 >= (-4)); g_28 = safe_sub_func_int64_t_s_s(g_28, 7))
        {
            int *l_1599 = &g_873;
            int *l_1600 = &g_146;
            int *l_1601 = &g_873;
            int *l_1603 = &l_1602;
            int *l_1604 = &g_873;
            int *l_1605 = (void*)0;
            int *l_1606 = (void*)0;
            int *l_1607 = &g_873;
            int *l_1608 = &g_146;
            int *l_1609 = &g_146;
            int *l_1611 = &g_873;
            int *l_1612 = &g_310;
            int l_1613 = 0L;
            int *l_1614 = (void*)0;
            int *l_1615 = (void*)0;
            int *l_1616 = &g_146;
            int *l_1618 = &g_146;
            ++g_1619;
        }
        (*l_1592) = (*l_1581);
    }
    (*l_1581) = (*g_1594);
    return (*l_1581);
}







static int func_78(long long p_79, int p_80, unsigned p_81)
{
    int *l_100 = &g_28;
    short l_118 = 0x1CD9L;
    int l_1015 = 1L;
    int l_1036 = 0xA4BB95EEL;
    int l_1047 = 0xCF7F6954L;
    int l_1060 = (-3L);
    char l_1257 = 0xD4L;
    int *l_1272 = &l_1036;
    unsigned l_1355 = 0x27697482L;
    int ** const *l_1580 = &g_139;
    for (p_80 = (-18); (p_80 <= 2); p_80 = safe_add_func_int8_t_s_s(p_80, 1))
    {
        int *l_121 = &g_28;
        int **l_1000 = &g_309;
        const unsigned short l_1001 = 0xA6B6L;
        const int *l_1006 = &g_146;
        const int **l_1005 = &l_1006;
        int l_1125 = 9L;
        int l_1126 = 0xA7763E78L;
        int l_1134 = 6L;
        (*l_1000) = func_94(l_100, &g_28, p_81, func_101(l_100, &g_28, l_100, g_28, func_107(func_113(l_118, (safe_add_func_int64_t_s_s(0x2F6A78CD4FCE62B0LL, (*l_100))), l_121, &g_28), &g_28, (*l_121), (*l_121), (*l_100))), g_309);

        ;
        (*g_139) = &p_80;

        ;
        if ((l_1001 && p_79))
        {
            const int *l_1003 = &g_873;
            const int **l_1002 = &l_1003;
            int *l_1004 = (void*)0;
            const int ***l_1007 = &l_1002;
            (*l_1007) = l_1005;

            ;
            (*l_1005) = (void*)0;

            ;
            for (g_310 = (-18); (g_310 != 7); g_310 = safe_add_func_uint8_t_u_u(g_310, 9))
            {
                (**l_1000) &= 0x5BAF991DL;
            }
        }
        else
        {
            (*l_1005) = l_100;

            ;
            for (g_713 = 12; (g_713 >= (-25)); --g_713)
            {
                char l_1012 = 0xEFL;
                return l_1012;


            }
            (**l_1000) = 0L;
            for (g_820 = 0; (g_820 > (-29)); --g_820)
            {
                if ((**g_139))
                    break;
            }
        }

        ;
        if (((p_80 && ((((*l_100) != l_1015) ^ p_81) >= (0xC6D11BDBL || (safe_lshift_func_uint8_t_u_u(((g_820 ^ ((safe_sub_func_int32_t_s_s(p_79, (*g_140))) <= ((!g_996) && 0xADL))) < p_79), g_28))))) & p_80))
        {
            (**l_1000) = (*l_100);
            return p_79;


        }
        else
        {
            int l_1035 = (-1L);
            int l_1191 = 0x96D9A729L;
            int l_1201 = 0x4945EC7FL;
            int l_1215 = 0x87A1FB1AL;
            unsigned l_1238 = 0x02683885L;
            if ((~(*g_309)))
            {
                (*l_100) ^= ((void*)0 == &l_1000);
            }
            else
            {
                unsigned l_1030 = 0x922345BAL;
                for (g_128 = 0; (g_128 <= 1); g_128 = safe_add_func_uint8_t_u_u(g_128, 7))
                {
                    return p_80;


                }
                (**l_1000) = ((&g_139 == (void*)0) > (((safe_lshift_func_uint16_t_u_u(g_996, (g_711 && ((safe_sub_func_int16_t_s_s(g_310, (g_128 <= (safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((*l_100) > (((((g_50 == (1UL != 2L)) ^ (**l_1000)) || g_195) | 0x26A0L) || l_1030)), p_81)), g_24))))) <= p_80)))) == 0x1F0B6CC65B58A57ALL) ^ 4L));
                (*g_139) = (*g_139);
            }
            if (((safe_lshift_func_uint16_t_u_s(p_81, ((safe_lshift_func_uint8_t_u_s(p_80, (((g_146 ^ (1L && ((p_81 && ((*l_100) == l_1035)) <= ((g_198 && p_81) & g_996)))) || 4294967295UL) ^ p_79))) ^ g_713))) < g_198))
            {
                int *l_1037 = &g_310;
                int *l_1038 = &l_1036;
                int *l_1039 = &g_873;
                int l_1040 = 0xF3751F69L;
                int *l_1041 = &g_873;
                int *l_1042 = &g_146;
                int *l_1043 = &g_310;
                int l_1044 = 6L;
                int *l_1045 = (void*)0;
                int *l_1046 = &g_28;
                int *l_1048 = (void*)0;
                int *l_1049 = (void*)0;
                int *l_1050 = &g_310;
                int *l_1051 = (void*)0;
                int *l_1052 = (void*)0;
                int *l_1053 = &l_1035;
                int *l_1054 = (void*)0;
                int *l_1055 = &l_1036;
                int *l_1056 = &l_1035;
                int *l_1057 = &l_1047;
                int *l_1058 = &g_146;
                int *l_1059 = (void*)0;
                int *l_1061 = &g_310;
                int *l_1062 = (void*)0;
                ++g_1063;
                (*l_1050) = (((safe_add_func_int64_t_s_s(p_80, g_876)) & g_712) | p_80);
                (*l_1000) = &p_80;

                ;
                (*l_100) ^= (safe_rshift_func_uint16_t_u_u(g_177, 7));
            }
            else
            {
                char l_1078 = 1L;
                short l_1079 = 0xFBD5L;
                int l_1084 = 9L;
                int l_1145 = 7L;
                long long l_1149 = 0xB562CEDB97325D1DLL;
                int l_1193 = 1L;
                int l_1223 = 0xE3F2F550L;
                int l_1224 = 1L;
                if ((*g_309))
                {
                    int *l_1080 = (void*)0;
                    int *l_1081 = (void*)0;
                    int *l_1082 = &g_873;
                    int *l_1083 = &l_1036;
                    int *l_1085 = &l_1047;
                    int *l_1086 = &l_1084;
                    int *l_1087 = &l_1036;
                    int *l_1088 = &l_1036;
                    int *l_1089 = (void*)0;
                    int *l_1090 = (void*)0;
                    int *l_1091 = &g_146;
                    int *l_1092 = (void*)0;
                    int *l_1093 = &l_1084;
                    int *l_1094 = &g_146;
                    int *l_1095 = &g_146;
                    int *l_1096 = &l_1047;
                    int *l_1097 = &l_1035;
                    int *l_1098 = &l_1036;
                    int *l_1099 = (void*)0;
                    int *l_1100 = &l_1047;
                    int *l_1101 = &l_1084;
                    int *l_1102 = &l_1084;
                    int *l_1103 = &g_873;
                    int *l_1104 = &l_1060;
                    int *l_1105 = (void*)0;
                    int *l_1106 = (void*)0;
                    int *l_1107 = &g_310;
                    int *l_1108 = &g_146;
                    int *l_1109 = &g_310;
                    int *l_1110 = &g_310;
                    int *l_1111 = &l_1036;
                    int *l_1112 = (void*)0;
                    int *l_1113 = &g_28;
                    int *l_1114 = &g_28;
                    int *l_1115 = &g_310;
                    int *l_1116 = (void*)0;
                    int *l_1117 = &g_310;
                    int *l_1118 = &l_1036;
                    int *l_1119 = &l_1084;
                    int *l_1120 = &l_1060;
                    int *l_1121 = &l_1084;
                    int *l_1122 = &l_1035;
                    int *l_1123 = &l_1047;
                    int *l_1124 = &l_1047;
                    int *l_1127 = &g_873;
                    int *l_1128 = &l_1084;
                    int *l_1129 = &l_1036;
                    int *l_1130 = (void*)0;
                    int *l_1131 = &l_1060;
                    int *l_1132 = &g_28;
                    int *l_1133 = &l_1125;
                    int *l_1135 = (void*)0;
                    int l_1136 = 0L;
                    int *l_1137 = &g_28;
                    int *l_1138 = &l_1134;
                    int l_1139 = 0x5C8E0338L;
                    int *l_1140 = &l_1125;
                    int *l_1141 = &l_1035;
                    int *l_1142 = &g_28;
                    int *l_1143 = (void*)0;
                    int *l_1144 = &g_873;
                    int *l_1146 = &g_28;
                    int *l_1147 = (void*)0;
                    int *l_1148 = (void*)0;
                    int *l_1150 = &l_1084;
                    int *l_1151 = &l_1136;
                    int *l_1152 = &l_1125;
                    int *l_1153 = &g_873;
                    int *l_1154 = &g_873;
                    int *l_1155 = &l_1060;
                    int *l_1156 = &l_1126;
                    int *l_1157 = &l_1084;
                    int *l_1158 = &l_1126;
                    int *l_1159 = &l_1060;
                    int *l_1160 = &l_1047;
                    int *l_1161 = (void*)0;
                    int *l_1162 = &l_1126;
                    int *l_1163 = &l_1145;
                    int *l_1164 = &g_873;
                    int *l_1165 = &g_146;
                    int *l_1166 = (void*)0;
                    int *l_1167 = &l_1126;
                    int *l_1168 = (void*)0;
                    int *l_1169 = (void*)0;
                    int *l_1170 = (void*)0;
                    int *l_1171 = &l_1125;
                    int *l_1172 = &l_1060;
                    int *l_1173 = (void*)0;
                    int *l_1174 = &l_1136;
                    int *l_1175 = &g_310;
                    int *l_1176 = &l_1084;
                    int *l_1177 = &l_1125;
                    int *l_1178 = &l_1036;
                    int *l_1179 = (void*)0;
                    int *l_1180 = &l_1145;
                    int l_1181 = 1L;
                    int *l_1182 = &l_1060;
                    int *l_1183 = &l_1060;
                    int *l_1184 = &g_873;
                    int *l_1185 = &l_1125;
                    int *l_1187 = (void*)0;
                    int *l_1188 = (void*)0;
                    int *l_1189 = &g_28;
                    int *l_1190 = &g_873;
                    int *l_1192 = &l_1181;
                    int *l_1194 = &g_146;
                    int *l_1195 = &l_1060;
                    int *l_1196 = &l_1036;
                    int *l_1197 = &l_1193;
                    int *l_1198 = (void*)0;
                    int l_1199 = (-1L);
                    int *l_1200 = &l_1084;
                    int *l_1202 = &l_1036;
                    int *l_1203 = &l_1181;
                    int *l_1204 = &l_1145;
                    int *l_1205 = &g_310;
                    int *l_1206 = &l_1035;
                    int *l_1207 = &l_1035;
                    int *l_1208 = &l_1199;
                    int *l_1209 = &l_1193;
                    int l_1210 = 0L;
                    int *l_1211 = (void*)0;
                    int *l_1212 = &l_1193;
                    int *l_1213 = &l_1136;
                    int *l_1214 = (void*)0;
                    int *l_1217 = &l_1199;
                    int *l_1218 = &l_1145;
                    int *l_1219 = &l_1181;
                    (*g_309) ^= (((((+g_820) || (g_759 || (-10L))) <= (((g_128 | (g_31 && ((p_79 > (safe_sub_func_uint16_t_u_u(g_24, ((safe_lshift_func_uint8_t_u_s(g_937, (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint64_t_u_u((((2L || l_1078) >= 0xFACA11EA38D8AB38LL) | p_79), 0x31221698A5A4341DLL)) < l_1035), p_80)))) < (-5L))))) > 4UL))) < l_1079) ^ 1UL)) || p_79) & g_711);
                    --g_1220;
                    (*l_1159) |= p_80;
                    ++g_1225;
                }
                else
                {
                    int *l_1228 = &l_1134;
                    (*l_1228) |= ((!g_864) && (l_1228 != &l_1047));
                    (*l_121) = (((safe_sub_func_int16_t_s_s(g_146, (safe_mod_func_uint64_t_u_u(((*l_100) > ((safe_unary_minus_func_uint16_t_u(p_81)) | ((safe_add_func_uint8_t_u_u(((!(g_177 == g_195)) || p_79), 0x0AL)) <= (*l_100)))), p_81)))) && (*l_121)) ^ p_80);
                    (*g_139) = &p_80;
                    (*l_1228) = (g_198 <= (safe_mod_func_int16_t_s_s(p_81, ((0xB67EA3C2L < (*g_140)) | 0L))));
                }
            }

            ;
            (*g_139) = (*g_139);
        }

        ;
    }

    ;
    ;
    if (((void*)0 == &l_1060))
    {
        int *** const l_1243 = &g_139;
        int l_1254 = (-1L);
        long long l_1289 = (-3L);
        int l_1340 = 0x1E8A1C88L;
        int l_1341 = 0x49700F24L;
        int l_1343 = 7L;
        int l_1351 = 0x22BFF708L;
        (*l_100) &= 5L;
lbl_1275:
        if ((*l_100))
        {
            long long l_1258 = 0x32F01FC305958FFBLL;
            int l_1259 = 0x02FA5955L;
            l_1259 ^= (((((safe_lshift_func_int16_t_s_s((((void*)0 != l_1243) > ((safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(p_80, 8)), (((void*)0 != &g_139) && (*l_100)))), (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_1254, ((((safe_mul_func_int16_t_s_s(g_820, ((void*)0 != &p_80))) > 0x4494L) | l_1257) > p_81))), g_711)))) && p_80)), g_820)) | (*l_100)) >= l_1258) < l_1254) > g_996);
            (*l_100) ^= ((p_81 < (~(p_80 | ((safe_rshift_func_uint16_t_u_s(g_826, ((((void*)0 == &g_139) | (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((void*)0 != &g_140), 4)), 0L))) & (((safe_lshift_func_int16_t_s_u(p_79, 7)) == 0xF4C2A76D3C0F813ALL) | p_79)))) >= p_79)))) > l_1258);
            for (g_244 = (-3); (g_244 != 44); g_244++)
            {
                return p_81;



            }
            for (l_118 = (-21); (l_118 == 3); ++l_118)
            {
                int **l_1273 = (void*)0;
                int **l_1274 = &g_309;
                (*l_1274) = func_113((p_80 < 65535UL), g_1225, l_1272, (*g_139));

                ;
                if (g_876)
                    goto lbl_1275;
            }
        }
        else
        {
            (*l_100) &= 0x66948C57L;
            if (g_128)
                goto lbl_1275;
        }
        if ((&l_1272 == &l_1272))
        {
            for (g_28 = 0; (g_28 < 12); ++g_28)
            {
                char l_1278 = 2L;
                (*l_1272) = (((void*)0 != (*g_139)) > l_1278);
                (*l_1272) |= 0x46E4225CL;
                (*g_139) = (**l_1243);
                for (l_1257 = 0; (l_1257 <= (-21)); l_1257--)
                {
                    int *l_1281 = &g_146;
                    if (p_79)
                        break;
                    (**l_1243) = l_1281;

                    ;
                }
            }

            ;
lbl_1302:
            if (((-1L) >= (g_28 && (g_826 ^ ((4294967294UL & ((safe_rshift_func_int8_t_s_s((g_937 && (safe_unary_minus_func_int64_t_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(p_80, 14)), p_80))))), (5UL < 4294967295UL))) > p_80)) < l_1289)))))
            {
                (*g_139) = (*g_139);
                (*l_100) = (g_1216 ^ (-4L));
                p_80 = ((((safe_mul_func_uint8_t_u_u(p_80, (safe_lshift_func_int16_t_s_u(g_177, 13)))) != (safe_add_func_int32_t_s_s(p_79, p_79))) || ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_876, p_79)), g_876)) < 0x22EE9A27L)) | (safe_add_func_int16_t_s_s(g_1063, (*l_1272))));
                if (g_31)
                    goto lbl_1302;
            }
            else
            {
                return p_80;



            }
            (*g_139) = (**l_1243);
lbl_1533:
            (*l_1243) = &g_140;
        }
        else
        {
            int *l_1303 = (void*)0;
            int *l_1304 = &g_310;
            int *l_1305 = &g_146;
            int *l_1306 = &g_28;
            int *l_1307 = &g_310;
            int *l_1308 = &g_28;
            int *l_1309 = &l_1060;
            int *l_1310 = &l_1036;
            int l_1311 = 0xBCB9BBD4L;
            int *l_1312 = &g_146;
            int *l_1313 = &l_1036;
            int *l_1314 = &g_873;
            int *l_1315 = (void*)0;
            int *l_1316 = &l_1036;
            int *l_1317 = (void*)0;
            int *l_1318 = (void*)0;
            int *l_1319 = &l_1060;
            int *l_1320 = &g_146;
            int *l_1321 = &l_1060;
            int *l_1322 = &l_1060;
            int *l_1323 = &l_1254;
            int *l_1324 = &l_1254;
            int *l_1325 = &l_1254;
            int *l_1326 = &l_1036;
            int *l_1327 = &l_1036;
            int *l_1328 = (void*)0;
            int *l_1329 = (void*)0;
            int *l_1330 = (void*)0;
            int *l_1331 = &g_873;
            int *l_1332 = &g_146;
            int *l_1333 = &g_873;
            int *l_1334 = &g_310;
            int *l_1335 = &g_310;
            int *l_1336 = &g_146;
            int l_1337 = 0x9E05AFECL;
            int *l_1338 = &l_1047;
            int *l_1339 = &g_146;
            int *l_1342 = &l_1341;
            int l_1344 = 0x1ECC7FC3L;
            int *l_1345 = &l_1341;
            int *l_1346 = &l_1337;
            int *l_1347 = &g_146;
            int l_1348 = 0L;
            int *l_1349 = &g_146;
            int *l_1350 = &l_1341;
            int l_1352 = 2L;
            int *l_1353 = &g_146;
            int *l_1354 = (void*)0;
            (*g_139) = &p_80;

            ;
            ++l_1355;
        }

        ;
        if (l_1289)
        {
            const unsigned long long l_1358 = 0UL;
            (*l_1272) ^= l_1358;
            p_80 |= p_79;
        }
        else
        {
            int l_1367 = 6L;
            int l_1433 = 0x610F5ECBL;
            int l_1511 = (-1L);
            int l_1573 = 8L;
            if ((0xF81AL < (safe_rshift_func_int16_t_s_u(((safe_sub_func_int64_t_s_s(g_864, p_81)) == (+(safe_sub_func_uint64_t_u_u(g_50, 0xC9EDD3E8E74008EELL)))), 8))))
            {
                char l_1386 = 0xA0L;
                for (g_146 = 0; (g_146 <= 23); g_146 = safe_add_func_uint64_t_u_u(g_146, 1))
                {
                    int *l_1368 = &l_1367;
                    int *l_1369 = &l_1254;
                    int *l_1370 = &l_1036;
                    int *l_1371 = (void*)0;
                    int *l_1372 = (void*)0;
                    int *l_1373 = &g_310;
                    int *l_1374 = &l_1351;
                    int *l_1375 = &l_1351;
                    int *l_1376 = &l_1047;
                    int *l_1377 = (void*)0;
                    int *l_1378 = (void*)0;
                    int *l_1379 = (void*)0;
                    int *l_1380 = &l_1343;
                    int *l_1381 = &l_1254;
                    int *l_1382 = &l_1343;
                    int *l_1383 = &g_873;
                    int *l_1384 = &l_1367;
                    int *l_1385 = &l_1036;
                    int *l_1387 = &l_1341;
                    int *l_1388 = &l_1367;
                    int *l_1389 = &l_1351;
                    int *l_1390 = (void*)0;
                    int *l_1391 = &l_1060;
                    int *l_1392 = (void*)0;
                    int *l_1393 = &l_1254;
                    int *l_1394 = &l_1036;
                    int *l_1395 = (void*)0;
                    int *l_1396 = &g_873;
                    int *l_1397 = &l_1047;
                    int *l_1398 = &g_28;
                    int *l_1399 = &l_1254;
                    int l_1400 = 0xAC76473DL;
                    int *l_1401 = &l_1400;
                    int l_1402 = 0x9DBA3567L;
                    int l_1403 = 0x03319D50L;
                    int *l_1404 = &l_1047;
                    int *l_1405 = (void*)0;
                    int *l_1406 = &l_1367;
                    int *l_1407 = &l_1047;
                    int *l_1408 = (void*)0;
                    int *l_1409 = &g_873;
                    int *l_1410 = (void*)0;
                    int *l_1411 = &l_1341;
                    int *l_1412 = (void*)0;
                    int *l_1413 = (void*)0;
                    int *l_1414 = &l_1403;
                    int *l_1415 = &l_1340;
                    int *l_1416 = (void*)0;
                    int *l_1418 = &l_1367;
                    int *l_1419 = &l_1400;
                    int *l_1420 = &l_1351;
                    int *l_1421 = (void*)0;
                    int *l_1422 = &l_1403;
                    int *l_1423 = &l_1341;
                    int *l_1424 = &l_1340;
                    int *l_1425 = &g_28;
                    int *l_1426 = &l_1403;
                    int *l_1427 = &g_873;
                    int *l_1428 = &l_1340;
                    int *l_1429 = (void*)0;
                    int *l_1430 = &l_1367;
                    int *l_1431 = &l_1340;
                    int *l_1432 = &l_1060;
                    int *l_1434 = (void*)0;
                    int *l_1435 = &g_28;
                    int *l_1436 = &l_1340;
                    int *l_1437 = &l_1367;
                    int *l_1439 = &g_28;
                    int *l_1440 = &g_28;
                    int *l_1441 = (void*)0;
                    int *l_1442 = &l_1343;
                    int *l_1443 = &g_28;
                    int *l_1444 = (void*)0;
                    int *l_1445 = &l_1433;
                    int *l_1446 = &l_1047;
                    int *l_1447 = &l_1036;
                    int *l_1448 = &g_310;
                    int *l_1449 = (void*)0;
                    int *l_1450 = &l_1433;
                    int *l_1451 = &l_1036;
                    int *l_1452 = &l_1400;
                    int *l_1453 = &l_1433;
                    int *l_1454 = &l_1341;
                    int *l_1455 = &l_1060;
                    int *l_1456 = &g_28;
                    int l_1458 = 0x2C5EFB3CL;
                    g_1459++;
                    for (l_1403 = 0; (l_1403 < 17); l_1403 = safe_add_func_int32_t_s_s(l_1403, 8))
                    {
                        unsigned short l_1473 = 0xE2B5L;
                        (*l_1415) = (safe_mul_func_uint16_t_u_u(g_1220, (safe_sub_func_int64_t_s_s(l_1367, ((((*l_100) > (safe_unary_minus_func_int32_t_s(((safe_add_func_uint64_t_u_u(((*l_100) && g_820), ((safe_add_func_int8_t_s_s(g_244, ((*l_100) != ((~l_1386) && l_1473)))) | (-7L)))) <= g_864)))) ^ g_864) > p_80)))));
                        (*l_1243) = &l_1416;

                        ;
                        return l_1386;




                    }
                }
            }
            else
            {
                int *l_1474 = &l_1341;
                int *l_1475 = &g_873;
                int *l_1476 = &l_1433;
                int *l_1477 = (void*)0;
                int *l_1478 = &g_310;
                int *l_1479 = (void*)0;
                int *l_1480 = (void*)0;
                int *l_1481 = (void*)0;
                int *l_1482 = (void*)0;
                int *l_1483 = (void*)0;
                int *l_1484 = &g_28;
                int *l_1485 = &l_1340;
                int *l_1486 = &g_146;
                int *l_1487 = &g_310;
                int *l_1488 = &l_1341;
                int *l_1489 = (void*)0;
                int *l_1490 = &l_1351;
                int *l_1491 = &g_873;
                int *l_1492 = &g_146;
                int *l_1493 = &l_1047;
                int *l_1494 = &l_1036;
                int *l_1495 = &l_1351;
                int *l_1496 = &l_1351;
                int *l_1497 = (void*)0;
                int *l_1498 = (void*)0;
                int *l_1499 = &g_28;
                int l_1500 = 0L;
                int *l_1501 = &l_1367;
                int *l_1502 = &l_1340;
                int *l_1503 = &l_1367;
                int *l_1504 = &l_1036;
                int *l_1505 = &l_1060;
                int *l_1506 = &l_1060;
                int *l_1507 = &l_1367;
                int l_1508 = 9L;
                int *l_1509 = &g_873;
                int *l_1510 = &l_1340;
                int *l_1512 = (void*)0;
                int *l_1513 = &g_28;
                ++g_1514;
                for (g_244 = 0; (g_244 >= 51); g_244++)
                {
                    (*l_1484) = p_79;
                    return l_1433;



                }
                for (l_1351 = 7; (l_1351 > (-14)); l_1351 = safe_sub_func_uint32_t_u_u(l_1351, 8))
                {
                    unsigned long long l_1521 = 5UL;
                    int l_1525 = 0x44787D49L;
                    int l_1560 = 0xD12D6AC4L;
                    int l_1564 = (-1L);
                    l_1521++;
                    if (l_1511)
                    {
                        char l_1524 = 0x56L;
                        int *l_1526 = &l_1036;
                        int *l_1527 = &l_1341;
                        int *l_1528 = &l_1367;
                        int *l_1529 = &l_1060;
                        unsigned l_1530 = 0x42396CFFL;
                        int *l_1534 = &l_1343;
                        int *l_1535 = &l_1340;
                        int *l_1536 = &g_28;
                        int *l_1537 = &l_1433;
                        int *l_1538 = &l_1340;
                        int *l_1539 = &l_1340;
                        int *l_1540 = &l_1036;
                        int *l_1541 = &l_1525;
                        int *l_1542 = &l_1500;
                        int *l_1543 = (void*)0;
                        int *l_1544 = (void*)0;
                        int *l_1545 = &l_1433;
                        int *l_1546 = &l_1433;
                        int *l_1547 = &l_1036;
                        int *l_1548 = (void*)0;
                        int *l_1549 = &l_1525;
                        int *l_1550 = &l_1036;
                        int *l_1551 = (void*)0;
                        int *l_1552 = &g_310;
                        int *l_1553 = &l_1254;
                        int *l_1554 = &l_1343;
                        int *l_1555 = &l_1500;
                        int *l_1556 = &l_1525;
                        int *l_1557 = (void*)0;
                        int *l_1558 = &l_1367;
                        int *l_1559 = &g_28;
                        int *l_1561 = &g_28;
                        int *l_1562 = (void*)0;
                        int *l_1563 = &g_873;
                        int *l_1565 = &l_1500;
                        int *l_1566 = &l_1060;
                        int *l_1567 = &g_28;
                        int *l_1568 = &l_1341;
                        int *l_1569 = &l_1343;
                        int *l_1570 = (void*)0;
                        int *l_1571 = &l_1367;
                        int *l_1572 = &l_1500;
                        int *l_1574 = &g_146;
                        l_1530++;
                        (*l_1527) |= (0x47910536L | (g_24 != ((p_81 || 0UL) >= 0x186EL)));
                        if (g_310)
                            goto lbl_1533;
                        g_1575++;
                    }
                    else
                    {
                        return l_1367;



                    }
                    (*l_100) = (safe_mul_func_int8_t_s_s(0xD1L, (l_1580 != &g_139)));
                    (**l_1580) = (**l_1580);
                }
            }
        }
    }
    else
    {
        return p_80;



    }

    ;
    ;
    return p_79;



}







static int * func_94(int * p_95, int * p_96, unsigned long long p_97, int * const p_98, int * p_99)
{
    short l_319 = 0x5C72L;
    const int *l_323 = &g_310;
    int *l_365 = &g_310;
    char l_374 = 0xDEL;
    int ***l_408 = &g_139;
    int l_422 = 7L;
    int l_428 = 0x8F4E3D52L;
    int l_461 = 0xFB42CD97L;
    int l_463 = (-3L);
    int l_781 = 0xB26B450AL;
    int *l_944 = &g_28;
    (*p_96) = (((1UL & (0x4CL == ((safe_lshift_func_int8_t_s_s(g_198, (safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((g_310 == p_97), ((safe_lshift_func_uint8_t_u_u(l_319, 4)) && g_244))), 3)))) | (safe_sub_func_int32_t_s_s(((*g_139) != (void*)0), (*g_309)))))) != g_146) <= 1UL);
    return p_96;


}







static int * const func_101(const int * p_102, int * p_103, int * p_104, short p_105, int * p_106)
{
    int l_308 = 0x9E8B4D24L;
    for (g_128 = 0; (g_128 >= 27); ++g_128)
    {
        int l_307 = 7L;
        (*p_103) = (0x4EL | (l_307 < 0x7939L));
    }
    l_308 = l_308;
    return p_104;


}







static int * func_107(int * p_108, int * p_109, unsigned long long p_110, unsigned p_111, long long p_112)
{
    const unsigned l_302 = 0x8FCEB201L;
    int *l_303 = (void*)0;
    int *l_304 = &g_146;
    (*l_304) &= l_302;
    return p_109;


}







static int * func_113(long long p_114, const unsigned long long p_115, int * p_116, const int * p_117)
{
    int *l_122 = &g_28;
    int l_123 = 0xB36276A2L;
    int l_126 = 7L;
    if (g_31)
    {
        return l_122;


    }
    else
    {
        int *l_124 = (void*)0;
        int *l_125 = &l_123;
        int *l_127 = (void*)0;
        const int *l_138 = (void*)0;
        const int **l_137 = &l_138;
        int ***l_297 = &g_139;
        --g_128;
        (*l_297) = func_131(l_137, p_116, &p_116, g_139, p_116);


        ;
        for (g_146 = 0; (g_146 < (-25)); g_146 = safe_sub_func_int16_t_s_s(g_146, 4))
        {
            (*l_125) |= (safe_sub_func_uint16_t_u_u((p_114 != g_31), (g_177 < (((void*)0 == &p_116) == (&g_140 == &p_117)))));
            if ((*l_122))
                continue;
        }
    }


    ;
    return p_116;


}







static int ** func_131(const int ** p_132, int * p_133, int ** p_134, int ** p_135, int * p_136)
{
    unsigned l_141 = 0xF5451114L;
    int l_153 = (-5L);
    int *l_154 = (void*)0;
    unsigned char l_294 = 255UL;
    if ((((*g_139) == (*p_134)) || l_141))
    {
        unsigned short l_144 = 65535UL;
        int *l_145 = &g_146;
        int l_196 = 0xA54BB3B6L;
        short l_258 = 0x0E5EL;
        int l_259 = 0L;
        (*l_145) = (safe_rshift_func_int16_t_s_u((l_144 >= g_50), 3));
        for (l_141 = 0; (l_141 > 38); l_141++)
        {
            int * const * const l_169 = &g_140;
            int *l_180 = &l_153;
            int ***l_207 = (void*)0;
            int ***l_208 = &g_139;
            unsigned char l_230 = 0UL;
        }
        (*l_145) = (*l_145);
        if ((1UL || (*l_145)))
        {
            unsigned char l_255 = 0x34L;
            int ***l_262 = &g_139;
            int **l_263 = &l_145;
            (*l_145) = (((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_255 < g_195), (*l_145))), 0x4414L)), (+(((safe_rshift_func_int8_t_s_s(g_128, 7)) <= l_258) & l_259)))) & ((safe_rshift_func_int8_t_s_u(g_128, l_255)) <= g_128)), l_255)) && (**p_134)) == (-1L));
            (*l_262) = &g_140;

            ;
            return (*l_262);


        }
        else
        {
            const long long l_264 = (-1L);
            l_153 = ((l_264 && ((safe_mod_func_uint32_t_u_u(l_264, ((safe_lshift_func_int16_t_s_u((~(!((safe_unary_minus_func_uint8_t_u(l_264)) | 0UL))), 0)) & (-8L)))) != l_264)) == (safe_unary_minus_func_uint64_t_u(((((-8L) > (0x30D9EEDEL <= (safe_sub_func_int64_t_s_s((g_198 || (*l_145)), (*l_145))))) | 8L) & (*l_145)))));
        }
    }
    else
    {
        int *l_275 = &l_153;
        int *l_276 = &g_146;
        int *l_277 = &g_146;
        int *l_278 = (void*)0;
        int *l_279 = &l_153;
        int *l_280 = &l_153;
        int *l_281 = &l_153;
        int *l_282 = &g_146;
        int *l_283 = &l_153;
        int *l_284 = &g_146;
        int *l_285 = &l_153;
        int l_286 = 1L;
        int *l_287 = &g_146;
        int *l_288 = &g_146;
        int *l_289 = &l_286;
        int *l_290 = &l_153;
        int *l_291 = &g_146;
        int *l_292 = &l_286;
        int *l_293 = (void*)0;
        (*l_275) = (safe_sub_func_int8_t_s_s((((void*)0 == &g_140) ^ g_198), g_198));
        --l_294;
        (*g_139) = (*g_139);
    }
    (*p_134) = (*p_135);


    l_153 &= (*p_136);
    return &g_140;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_873, "g_873", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_996, "g_996", print_hash_value);
    transparent_crc(g_1063, "g_1063", print_hash_value);
    transparent_crc(g_1186, "g_1186", print_hash_value);
    transparent_crc(g_1216, "g_1216", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1225, "g_1225", print_hash_value);
    transparent_crc(g_1417, "g_1417", print_hash_value);
    transparent_crc(g_1438, "g_1438", print_hash_value);
    transparent_crc(g_1457, "g_1457", print_hash_value);
    transparent_crc(g_1459, "g_1459", print_hash_value);
    transparent_crc(g_1514, "g_1514", print_hash_value);
    transparent_crc(g_1575, "g_1575", print_hash_value);
    transparent_crc(g_1619, "g_1619", print_hash_value);
    transparent_crc(g_1636, "g_1636", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
