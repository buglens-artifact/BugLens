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



static unsigned g_16 = 4294967295UL;
static int g_18 = (-9L);
static char g_56 = 1L;
static int g_85 = 0L;
static int *g_170 = &g_85;
static int **g_169 = &g_170;
static unsigned g_279 = 1UL;
static unsigned char g_319 = 0UL;
static int g_432 = 0x6BFBB46BL;
static int *g_502 = &g_18;
static int g_504 = 0x05E1196BL;
static int g_532 = 0xC1205B04L;
static unsigned short g_573 = 0x9226L;
static int g_604 = (-1L);
static char g_619 = 0xC2L;
static unsigned long long g_670 = 18446744073709551615UL;
static unsigned char g_696 = 0xA6L;
static int g_810 = 0x7785E725L;



static int func_1(void);
static int func_2(unsigned p_3, unsigned short p_4, long long p_5);
static long long func_11(long long p_12, unsigned short p_13, int p_14, unsigned short p_15);
static int func_21(int p_22);
static unsigned func_25(int * p_26, int * p_27);
static int * func_29(int p_30, short p_31, int * p_32, unsigned char p_33, int * p_34);
static int func_51(unsigned short p_52, int * p_53, int p_54);
static int * func_63(int p_64, int * p_65, int * p_66, unsigned long long p_67, unsigned char p_68);
static int * func_70(short p_71, int * p_72, unsigned char p_73, int * p_74, int * p_75);
static int * func_76(int p_77, int * p_78, int * p_79, long long p_80, long long p_81);
static int func_1(void)
{
    unsigned char l_8 = 0xA2L;
    unsigned short l_669 = 0xC722L;
    int *l_809 = &g_810;
    (*l_809) &= func_2((safe_mod_func_uint8_t_u_u(l_8, ((((safe_mod_func_uint8_t_u_u((func_11(g_16, g_16, (g_16 > g_16), g_16) > ((void*)0 == &g_502)), g_532)) & l_8) && 0x4699L) , l_669))), l_8, g_670);


    (*g_502) = (~(((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(g_18, 0)) , 0x9F6DL), 6)) >= 0xF5L) , 0xDD6F88F6L));
    return g_85;
}







static int func_2(unsigned p_3, unsigned short p_4, long long p_5)
{
    long long l_671 = 5L;
    int **l_684 = &g_170;
    int *l_807 = &g_532;
    int *l_808 = &g_604;
    if (((l_671 , ((p_5 == (&g_170 == &g_502)) , (l_671 && (4UL & (g_85 && ((safe_rshift_func_uint16_t_u_s(0x7F2EL, func_11(((safe_mod_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(((((-1L) && g_504) < l_671) < (-1L)), l_671)) <= (**g_169)), p_3)) , g_532), p_5, (*g_170), l_671))) || p_3)))))) == l_671))
    {
        int *l_678 = &g_504;
        int l_683 = 0x1B84E4BFL;
        int ***l_685 = &g_169;
        l_683 &= ((l_678 != (void*)0) && (((0x34L == (((safe_mod_func_uint16_t_u_u((g_573 > g_619), ((g_279 & ((0UL ^ p_3) , (safe_lshift_func_int16_t_s_s(g_56, 14)))) | g_619))) != (*l_678)) & g_18)) , 0L) > (*l_678)));
        (*l_685) = l_684;
        (**l_685) = ((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((*l_678), (**l_684))) | ((func_51((**l_684), (*g_169), (safe_sub_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s((((0x4C36ACD1L || ((*l_685) != (void*)0)) , ((((p_4 <= p_3) && (**g_169)) , 0x4AL) , l_684)) != (void*)0), p_3)) >= (*l_678)) , &g_170) == (*l_685)), 1UL))) , g_319) <= (*l_678))), g_696)), 0x470FL)) , (**l_685));
        return (*g_502);
    }
    else
    {
        int **l_701 = &g_502;
        unsigned short l_797 = 0UL;
        (**l_684) |= (safe_lshift_func_uint16_t_u_u((~((~0x35C32B37EF48A286LL) | 0x05623DA49DF42F14LL)), 7));
        for (g_573 = (-26); (g_573 > 51); g_573 = safe_add_func_uint64_t_u_u(g_573, 9))
        {
            short l_706 = 0x4A72L;
            int **l_707 = &g_502;
            int l_765 = (-3L);
            int l_766 = 0x8AE41656L;
            if ((g_279 , (p_5 > (l_701 == (((((**l_684) || p_3) && func_11(g_18, (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(0x32ACL, 0)) <= g_532), (p_5 , l_706))), p_5, g_573)) ^ p_5) , l_707)))))
            {
                int *l_753 = &g_432;
                int ***l_781 = &l_684;
                for (g_619 = (-25); (g_619 != (-4)); ++g_619)
                {
                    long long l_739 = (-3L);
                    for (g_56 = 0; (g_56 >= (-28)); g_56 = safe_sub_func_int8_t_s_s(g_56, 6))
                    {
                        int l_722 = 1L;
                        (**g_169) ^= (p_3 && (((safe_sub_func_uint64_t_u_u(g_619, ((((((&l_707 != ((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(p_3, 6)) , ((g_604 , (safe_sub_func_uint32_t_u_u(0xB2CC1D59L, (&g_502 != &g_502)))) >= (safe_sub_func_int32_t_s_s(9L, 0x1A14F558L)))), g_696)) , &l_707)) , l_722) || l_722) , 3L) == g_532) ^ g_18))) | p_3) && 0x72L));
                        if (p_4)
                            break;
                        if ((**l_701))
                            break;
                    }
                    for (l_671 = 21; (l_671 < (-6)); --l_671)
                    {
                        long long l_740 = 0xD72D8F0A214A7CD7LL;
                        int *l_754 = &g_532;
                    }
                    (**l_701) = (((g_532 & (safe_add_func_uint64_t_u_u(18446744073709551615UL, ((safe_add_func_uint8_t_u_u((((void*)0 != l_707) ^ (func_21(p_5) <= (safe_lshift_func_int16_t_s_s(p_3, 7)))), (safe_add_func_int64_t_s_s(g_279, g_670)))) , 1L)))) > p_3) & p_5);
                    l_766 |= ((safe_sub_func_uint16_t_u_u(func_11(g_18, (**l_684), p_3, l_765), g_319)) >= g_619);
                }
                if ((*g_170))
                {
                    int **l_773 = &g_170;
                    for (g_619 = 0; (g_619 <= 10); g_619 = safe_add_func_uint8_t_u_u(g_619, 8))
                    {
                        (**l_707) = ((0x56L && (*l_753)) == func_21(((g_432 && p_3) <= ((~p_5) , (**l_701)))));
                    }
                    if ((((((p_5 > (((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(g_319, func_21((func_51((((void*)0 != l_773) , g_16), (*l_684), (**g_169)) , (g_319 , g_532))))), g_604)) > p_3) < (*l_753))) , p_3) & g_696) , (-1L)) ^ g_670))
                    {
                        unsigned l_774 = 0x9D77466CL;
                        (**l_701) &= 0x7A631D21L;
                        (**g_169) = l_774;
                    }
                    else
                    {
                        (**l_707) = (**g_169);
                    }
                }
                else
                {
                    int l_779 = 0x1D12825BL;
                    short l_783 = 1L;
                    int *l_789 = &g_604;
                    for (g_319 = 0; (g_319 != 49); g_319 = safe_add_func_int16_t_s_s(g_319, 7))
                    {
                        int **l_780 = &l_753;
                        int l_782 = 1L;
                        l_782 &= (0x6527L == (((func_51((((safe_mod_func_int8_t_s_s(0L, (+func_21(l_779)))) != ((void*)0 == l_780)) > 0x169B0644L), ((l_781 != &l_780) , (*l_780)), l_779) , &g_502) != (void*)0) <= p_4));
                        (*g_169) = (*g_169);
                        return (**l_701);
                    }
                    if (l_783)
                        break;
                    if ((safe_add_func_uint32_t_u_u(g_504, (**g_169))))
                    {
                        unsigned char l_786 = 0x3AL;
                        (***l_781) = (p_3 > 1UL);
                    }
                    else
                    {
                        long long l_792 = 2L;
                        (**g_169) = (((250UL >= (g_532 > (safe_lshift_func_int8_t_s_s(p_4, ((p_5 | func_51(g_85, l_789, (**l_701))) ^ ((safe_sub_func_int64_t_s_s((~(g_432 < 1UL)), l_792)) >= p_5)))))) | g_670) > (**l_701));
                        (*l_753) = (*l_789);
                        if (l_792)
                            break;
                    }
                }
            }
            else
            {
                (**l_701) |= (**g_169);
                (*g_502) = func_11(func_51((safe_rshift_func_uint16_t_u_s(((void*)0 == &g_169), (((**l_701) & (0x205EL & (((g_532 & (g_532 != 0xF8082EDAA3D38841LL)) < (safe_lshift_func_int8_t_s_s(g_696, 7))) != g_432))) != 18446744073709551613UL))), (*l_684), (**g_169)), (**l_684), l_797, g_85);
                if (p_5)
                    continue;
            }
            return (**l_684);
        }
        for (g_504 = 25; (g_504 == (-20)); --g_504)
        {
            return (**l_684);
        }
    }
    (*l_808) ^= ((l_684 == ((safe_add_func_uint8_t_u_u(((void*)0 == l_684), (safe_unary_minus_func_int16_t_s(p_5)))) , &g_502)) >= (((safe_add_func_uint8_t_u_u((func_51((safe_lshift_func_int16_t_s_s((((**l_684) , (p_5 != func_25((*l_684), (*l_684)))) && l_671), 11)), l_807, p_4) != (-2L)), 0x6CL)) <= p_3) == p_3));


    return (*l_807);
}







static long long func_11(long long p_12, unsigned short p_13, int p_14, unsigned short p_15)
{
    int *l_17 = &g_18;
    int *l_615 = &g_604;
    char l_664 = 0x02L;
    (*l_17) ^= ((!8L) == (0xF9D44C039ECF4A41LL ^ 0x7C1D6B3BFA32A17DLL));
    for (p_13 = 0; (p_13 <= 34); p_13++)
    {
        int *l_603 = &g_604;
        int *l_616 = &g_504;
        int *l_650 = &g_504;
        (*l_603) &= func_21(g_16);
        (*l_616) ^= (((*l_17) ^ (*l_17)) , (p_13 >= (safe_sub_func_uint32_t_u_u((*l_17), (~((g_604 ^ ((safe_lshift_func_int8_t_s_s(0x6BL, 2)) < g_85)) , (((((((safe_rshift_func_uint16_t_u_s((func_51(g_319, (((((((safe_sub_func_int32_t_s_s(((*l_603) & (*l_603)), p_13)) & 0x03L) && g_279) , 0xE2L) || (*l_603)) , (-4L)) , l_615), (*g_502)) > (*l_603)), 8)) , 0x6EBBA72BL) && 0L) & (*l_603)) , &l_603) != &l_603) >= g_16)))))));
        for (g_279 = (-9); (g_279 < 3); g_279++)
        {
            int **l_626 = &l_17;
            (*g_502) = ((func_21(func_21(g_619)) >= (safe_rshift_func_uint8_t_u_s(g_432, 6))) ^ g_573);
        }
    }
    for (p_14 = (-24); (p_14 != (-1)); p_14 = safe_add_func_uint64_t_u_u(p_14, 6))
    {
        return p_15;
    }
    return (*l_615);
}







static int func_21(int p_22)
{
    int *l_28 = &g_18;
    char l_533 = (-1L);
    unsigned char l_543 = 2UL;
    int l_546 = (-1L);
    int l_550 = 5L;
    char l_555 = 0xE1L;
    for (g_18 = 0; (g_18 > (-22)); g_18--)
    {
        int *l_39 = &g_18;
        int *l_530 = (void*)0;
        int *l_531 = &g_532;
    }
    if (((g_56 , p_22) >= (safe_lshift_func_uint16_t_u_s(0xB4EFL, 1))))
    {
        int l_538 = 0xFFFA6E6CL;
        int **l_547 = &l_28;
        (**l_547) = ((l_538 != ((((((safe_mod_func_int32_t_s_s(l_538, 0x6809A43DL)) , 0xADD422439332AC86LL) > l_538) && 4294967289UL) < g_432) >= (safe_mod_func_int16_t_s_s((((((l_543 | ((((safe_sub_func_uint8_t_u_u(func_51((((g_432 == 1UL) | p_22) && 0xAC47FA953C15AD43LL), &l_538, l_546), 1UL)) || 4L) == l_538) , l_538)) | g_18) | (*g_502)) , l_547) != l_547), 7L)))) ^ g_532);
        (*l_28) = ((((**l_547) , ((((*l_28) || ((((**l_547) ^ 0x32328A2B727805BFLL) , ((p_22 ^ (*l_28)) , ((void*)0 == (*l_547)))) >= (func_51((*l_28), (*g_169), p_22) >= 4294967290UL))) ^ g_532) , l_28)) == (void*)0) <= g_432);
        for (l_543 = 12; (l_543 > 56); ++l_543)
        {
            (*g_170) = p_22;
        }
        (*g_502) = (**l_547);
    }
    else
    {
        return p_22;
    }
    l_550 = p_22;
    for (g_16 = 0; (g_16 > 27); ++g_16)
    {
        long long l_556 = (-9L);
        int *l_562 = &g_504;
        for (l_550 = 15; (l_550 == (-14)); l_550 = safe_sub_func_uint64_t_u_u(l_550, 6))
        {
            unsigned l_561 = 4294967294UL;
            int *l_571 = &g_504;
            if (((((l_555 ^ ((void*)0 != (*g_169))) < l_556) ^ ((safe_sub_func_int32_t_s_s(p_22, ((func_51(((((0x694BL & ((safe_add_func_uint16_t_u_u((((g_319 & ((((((*l_28) >= g_532) < 0xAAB86DE7L) >= p_22) , g_85) , 0x28L)) || l_561) > l_561), (*l_28))) >= p_22)) , (*l_28)) < (*l_28)) , 0xFBB3L), (*g_169), p_22) & 4L) & g_279))) || g_532)) , (**g_169)))
            {
                (*g_169) = l_562;

                ;
                (**g_169) = 0x454DEB50L;
            }
            else
            {
                int l_572 = 0x3FD51B06L;
                unsigned short l_596 = 0x842CL;
                int **l_598 = &l_562;
                if ((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_s(0x4EL, g_432)) || (((safe_add_func_uint16_t_u_u((func_51(((p_22 , g_85) , (p_22 , ((((safe_sub_func_uint8_t_u_u(((~func_51(p_22, (*g_169), p_22)) == l_561), p_22)) >= 0x6EF9A9332873FE5BLL) | p_22) <= g_532))), l_571, (**g_169)) && p_22), 1UL)) , l_572) & p_22)) == g_573), 7)))
                {
                    unsigned char l_580 = 0UL;
                    int *l_581 = &l_550;
                    (*g_502) = ((!(l_572 < (((65532UL < ((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u(l_580, ((l_581 != l_562) != g_532))) && (safe_add_func_uint8_t_u_u((*l_28), (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(func_51(func_51((safe_sub_func_uint16_t_u_u(((void*)0 != &l_581), (*l_562))), (*g_169), p_22), &l_572, (*g_502)), p_22)) || (**g_169)), 6))))) | g_18), p_22)), (-1L))) && 4294967295UL)) && 2UL) || (*g_502)))) == (-1L));
                    (**g_169) = (safe_sub_func_uint64_t_u_u(((((&g_170 != &l_581) , (func_51((safe_add_func_uint8_t_u_u(0x7DL, (&g_502 == (void*)0))), (*g_169), ((((((-5L) < g_56) , (*g_170)) , g_432) & p_22) || g_18)) > p_22)) & p_22) && l_572), g_573));
                }
                else
                {
                    if (p_22)
                    {
                        int l_597 = 0x444D7756L;
                        (**g_169) = (**g_169);
                        (*g_169) = (*g_169);
                        (*l_28) &= (p_22 || (l_596 , (((p_22 < (*l_571)) == l_597) >= 0xADCEL)));
                        (*g_170) = ((void*)0 == l_598);
                    }
                    else
                    {
                        return (*l_562);
                    }
                }
            }
            (*g_502) = p_22;
        }
        if (((*g_170) , (safe_sub_func_int16_t_s_s(((*l_562) , ((safe_sub_func_int16_t_s_s(g_532, func_51((((void*)0 != (*g_169)) , 0UL), (*g_169), (*g_502)))) , 0x7839L)), (*l_562)))))
        {
            return (**g_169);
        }
        else
        {
            return p_22;
        }
    }
    return p_22;
}







static unsigned func_25(int * p_26, int * p_27)
{
    int l_107 = 0x3921C45DL;
    int *l_109 = (void*)0;
    int **l_108 = &l_109;
    int l_212 = 0xE90A0130L;
    int *l_287 = &g_18;
    unsigned char l_339 = 251UL;
    unsigned long long l_359 = 0x10F74F535F54270CLL;
    unsigned short l_430 = 1UL;
    unsigned short l_466 = 65535UL;
    (*l_108) = &g_18;

    ;
    (*p_27) |= (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((**l_108), 9UL)), (safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(func_51(g_56, (*l_108), ((g_18 ^ (((((**l_108) , 1L) , (*l_108)) == (*l_108)) <= (*l_109))) | (**l_108))), (**l_108))), 4)))), 15)), (**l_108)));
    if ((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(g_16, g_85)), ((((safe_sub_func_uint64_t_u_u((**l_108), g_18)) & 65530UL) || (4L < (**l_108))) >= (((&g_18 != &g_18) && (**l_108)) ^ (**l_108))))), g_85)))
    {
        unsigned l_130 = 0xBE49ECA5L;
        unsigned long long l_134 = 18446744073709551606UL;
        int *l_168 = &g_18;
        int *l_180 = &g_85;
        short l_187 = 0xE479L;
        int l_191 = 6L;
        long long l_195 = 0x82F14A8FFE7CC681LL;
        int l_196 = (-1L);
        unsigned l_235 = 0x7A3E45E3L;
        if (l_130)
        {
            (*p_27) ^= 0x954D451FL;
            (*l_108) = p_26;

            ;
        }
        else
        {
            unsigned short l_131 = 0UL;
            int l_135 = 0x4FB9E1B5L;
            int *l_222 = &l_196;
            l_131 &= g_16;
            if (g_56)
            {
                unsigned l_143 = 1UL;
                int *l_155 = &g_85;
                char l_189 = 0xD5L;
                int l_190 = 7L;
                if (func_51(func_51(g_85, p_26, (l_131 >= ((safe_add_func_int16_t_s_s(l_134, g_56)) & l_131))), &g_18, l_135))
                {
                    int *l_142 = &l_135;
                    for (l_134 = (-16); (l_134 == 49); l_134 = safe_add_func_int64_t_s_s(l_134, 2))
                    {
                        unsigned long long l_144 = 0xE95A61D411996AC1LL;
                        (*p_27) = 0xD21B86E8L;
                        g_85 = (((*p_26) != (safe_sub_func_int32_t_s_s(g_85, ((safe_lshift_func_uint8_t_u_s((g_16 != ((((**l_108) && ((func_51(g_16, &g_18, (*p_26)) , func_51(l_130, l_142, l_143)) < (*l_142))) & g_16) > 1UL)), g_16)) > 0x77B54E5BA6927BAFLL)))) , l_144);
                    }
                    (*l_108) = l_142;

                    ;
                    (*p_27) |= l_135;
                }
                else
                {
                    char l_163 = 0L;
                    int **l_171 = &g_170;
                    (*l_155) = (safe_unary_minus_func_uint8_t_u((safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(l_130, (*l_155))), ((void*)0 != &p_27)))));
                    if ((g_16 && ((safe_lshift_func_int8_t_s_s((&p_26 != ((l_163 && (&p_27 == (((((func_51((safe_add_func_uint32_t_u_u((func_51(l_131, (((*l_155) , (*l_155)) , &g_85), (*p_26)) <= l_135), 0x774B4912L)), &l_135, g_85) | (**l_108)) , (*p_26)) > 0x17D6ECEDL) <= 0xF1L) , g_169))) , l_171)), 1)) != 0UL)))
                    {
                        int l_188 = 0x48985155L;
                        (**l_171) = (safe_sub_func_uint16_t_u_u(0xB99FL, 1L));
                        (*l_108) = ((0x25L > (safe_mod_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((((((safe_rshift_func_uint16_t_u_u(((((**l_171) , (-1L)) <= (**g_169)) != (**l_171)), 8)) >= 1L) != 0xDB7845B2E7BA114ALL) > g_56) , (*g_170)), g_18)) ^ 18446744073709551615UL) || g_56) >= 0x65L), (*l_180)))) , p_27);

                        ;
                        (*g_169) = func_76(l_188, ((func_51((**l_171), (*g_169), ((*l_171) == (void*)0)) && ((g_16 && func_51(l_189, (*g_169), (**g_169))) , (*l_180))) , (void*)0), (*l_171), g_18, l_190);

                        ;
                        return l_191;
                    }
                    else
                    {
                        int *l_194 = &g_85;
                        (**l_171) ^= (safe_rshift_func_int16_t_s_u(g_18, 13));
                        (*l_108) = (void*)0;

                        ;
                        l_135 ^= (((func_51(g_18, l_194, ((*l_194) , l_195)) && l_196) ^ (safe_rshift_func_int8_t_s_u((((**l_171) < (((**l_171) >= ((g_85 , 0x0683FD95L) <= (*g_170))) & 1UL)) & (**l_171)), g_85))) , (*g_170));
                        (*l_155) = ((~g_18) , ((*l_155) , ((safe_lshift_func_int16_t_s_s(l_131, ((((*g_169) != (void*)0) , ((((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(g_56, (*l_194))), ((*p_27) & g_85))) , (void*)0) == (void*)0) | (-10L))) < 0x9208D764150C39DALL))) <= 0x66L)));
                    }

                    ;
                    for (l_190 = 0; (l_190 == 27); l_190++)
                    {
                        int *l_209 = &g_85;
                        l_209 = (void*)0;

                        ;
                    }
                }

                ;
                l_212 ^= (((0x5B3A7F25L >= 0x038DD451L) != ((g_16 < (g_18 , (func_51(g_18, func_29((p_27 != (void*)0), (safe_rshift_func_uint8_t_u_u(g_56, 6)), p_26, (*l_155), &l_191), (*l_168)) != 0x9BD45106L))) | 0x08L)) && l_135);
            }
            else
            {
                unsigned char l_221 = 0x4BL;
                if ((func_51(g_16, (*g_169), (*g_170)) <= 0x784CA328L))
                {
                    p_26 = (*g_169);

                    ;
                }
                else
                {
                    p_26 = (*g_169);

                    ;
                }

                ;
                (*g_169) = func_29((*g_170), (g_56 , ((safe_sub_func_int64_t_s_s(l_131, ((safe_rshift_func_uint16_t_u_s(((*l_109) , (**l_108)), 12)) , (((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((**l_108) , l_131), func_51(g_18, (*g_169), (**g_169)))) ^ l_221), 1L)) ^ g_85) , g_16)))) <= l_221)), p_26, l_135, &l_191);

                ;
            }

            ;
            (*g_169) = l_222;

            ;
        }


        ;
        for (g_85 = (-28); (g_85 > (-21)); g_85 = safe_add_func_int16_t_s_s(g_85, 7))
        {
            unsigned char l_231 = 0xF9L;
            int *l_236 = &l_212;
            for (l_130 = (-21); (l_130 < 18); l_130++)
            {
                int *l_227 = &l_191;
                int l_228 = 0L;
                unsigned long long l_234 = 0UL;
                (*l_227) &= (*g_170);
                l_235 ^= ((l_228 > (!(safe_rshift_func_uint8_t_u_u((*l_168), l_231)))) & func_51((*l_168), p_27, (safe_rshift_func_int16_t_s_s((*l_227), ((l_234 , g_56) < ((*p_27) | 4294967289UL))))));
                return g_56;


            }
            (*l_236) |= (*g_170);
            (*l_236) = (*p_27);
            for (l_196 = (-8); (l_196 != (-4)); ++l_196)
            {
                (*l_236) = (*l_236);
            }
        }
        for (l_195 = (-4); (l_195 > 19); ++l_195)
        {
            int l_266 = 1L;
            unsigned l_272 = 0x8BAF473BL;
            for (l_191 = (-26); (l_191 <= (-5)); ++l_191)
            {
                char l_249 = 0L;
                int *l_267 = &g_18;
                if ((safe_add_func_int8_t_s_s((-1L), ((safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(l_249, (-9L))) < (safe_unary_minus_func_uint32_t_u((!l_249)))), g_16)) , (0x7F159341L && g_16)))))
                {
                    unsigned char l_265 = 0x4DL;
                    for (l_187 = (-20); (l_187 < (-25)); l_187 = safe_sub_func_int8_t_s_s(l_187, 5))
                    {
                        (*l_108) = p_27;

                        ;
                        (*g_170) = (**g_169);
                    }
                    l_266 = (func_51((func_51(((((*l_168) == (safe_add_func_int64_t_s_s(func_51((safe_lshift_func_uint8_t_u_u(0xE8L, 2)), &l_191, (safe_rshift_func_uint16_t_u_s(0UL, (0UL & (safe_lshift_func_uint8_t_u_u(((((l_249 ^ func_51((g_16 & (safe_mod_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u((+l_265), (((l_265 <= l_249) , g_56) | (*l_180)))) & l_266), 0x64603C1CL))), &l_191, l_265)) , l_267) == (void*)0) < (*l_267)), g_16)))))), g_18))) >= l_266) , l_265), p_27, (*p_27)) < (-9L)), (*g_169), (**g_169)) >= (*l_267));
                    (*l_180) = (func_51(l_265, func_29((*p_26), g_18, (*g_169), (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((g_85 , ((l_272 == (l_266 <= ((void*)0 == (*g_169)))) || (*l_267))), 13)), l_272)), p_26), (*l_267)) , (*l_267));
                }
                else
                {
                    for (l_187 = 0; (l_187 < (-14)); l_187--)
                    {
                        (*g_169) = (*g_169);
                        return (*l_180);


                    }
                }
                for (l_187 = 27; (l_187 < (-12)); l_187--)
                {
                    (*g_169) = (void*)0;

                    ;
                    return g_56;
                }
            }
        }
    }
    else
    {
        unsigned l_277 = 0x202512B0L;
        int *l_278 = &l_212;
        unsigned l_327 = 0UL;
        unsigned short l_358 = 0xADD1L;
        unsigned short l_360 = 0xA7F8L;
        int *l_465 = &g_85;
        unsigned short l_480 = 0x96ACL;
        if (((((func_51((*l_109), p_26, (*p_26)) ^ (*l_278)) > g_279) ^ 0xB4DCL) | 0xF21BL))
        {
            int l_280 = (-2L);
            int l_320 = (-1L);
            unsigned short l_321 = 1UL;
            (**g_169) = 0xA28F9CFBL;
            if ((g_56 >= l_280))
            {
                int **l_315 = &g_170;
                for (g_85 = 0; (g_85 > (-7)); g_85 = safe_sub_func_int32_t_s_s(g_85, 1))
                {
                    (*l_278) = (safe_sub_func_uint64_t_u_u((g_18 , func_51((*l_278), p_27, (*l_278))), (*l_109)));
                }
                if ((((((safe_rshift_func_uint16_t_u_u(g_18, 6)) <= (&g_170 == &g_170)) > (g_16 == ((func_51(g_85, l_287, (*g_170)) & (safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0x1797L, 0x443CL)), l_280))) >= 2L))) , g_16) && (*l_278)))
                {
                    long long l_316 = 0xA34EF21C7FAE4A8FLL;
                    for (g_16 = 5; (g_16 >= 37); g_16 = safe_add_func_int16_t_s_s(g_16, 6))
                    {
                        long long l_311 = (-3L);
                        unsigned long long l_312 = 0x5E3340633E0AACB8LL;
                        (*g_169) = p_26;
                        (*p_27) = (safe_mod_func_int16_t_s_s((((((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(0x6F6AL, 2)) && (((safe_unary_minus_func_int64_t_s(((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((((((safe_sub_func_int32_t_s_s(0x5F0F074AL, g_56)) & (safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(l_311, g_279)) >= (l_312 | g_279)), (safe_add_func_uint32_t_u_u((*l_287), ((void*)0 == l_315)))))) & (*l_278)) != 0L) & 0xCAL) ^ 0xD46BA36EL), l_311)), 0x33F771F1L)) | g_16) >= l_312) >= (*l_278)))) >= g_56) ^ (*l_278))), 5L)) , (**l_315)) > l_280) || 0x6EL) >= g_56), l_316));
                    }

                    ;
                    (*l_278) |= (**g_169);
                    (*l_278) = ((*l_315) == (*g_169));
                }
                else
                {
                    (*g_170) = func_51((*l_109), (*g_169), (*g_170));
                    (*l_108) = (*g_169);

                    ;
                    (*g_169) = &l_280;

                    ;
                }

                ;
                ;
            }
            else
            {
                (*p_27) = 0xDB92E8EBL;
            }

            ;
            ;
            if ((*p_26))
            {
                int l_317 = 0x65BA5026L;
                int *l_318 = &l_212;
                (*l_278) = (l_280 && func_51(l_317, l_318, (g_319 != func_51((g_56 ^ l_320), (*g_169), l_321))));
                for (l_317 = (-18); (l_317 <= (-22)); l_317 = safe_sub_func_uint64_t_u_u(l_317, 1))
                {
                    (*g_169) = (*g_169);
                    (*g_169) = &l_280;

                    ;
                    (**g_169) = (**g_169);
                }
                p_27 = (void*)0;

                ;
            }
            else
            {
                char l_324 = 6L;
                unsigned long long l_328 = 0xFC80D1E5C2C58BBALL;
                unsigned long long l_338 = 0xB6B1B6B8CC406B18LL;
                (*p_27) = (*g_170);
                (*l_278) |= (0xF860L > (((l_324 > ((void*)0 == &p_27)) ^ ((g_18 <= g_319) <= (safe_rshift_func_int8_t_s_u(l_324, func_51((g_85 && ((l_324 <= l_327) , (-6L))), &l_280, (*p_27)))))) && l_320));
                (*p_27) ^= ((void*)0 != p_26);
                if ((l_328 ^ (l_328 , l_321)))
                {
                    (*g_169) = (*l_108);

                    ;
                }
                else
                {
                    char l_333 = 0xBEL;
                    int *l_365 = &l_280;
                    l_339 = ((*l_278) != (safe_add_func_int64_t_s_s(((g_279 != 2L) && (safe_sub_func_int8_t_s_s((l_333 || l_328), (safe_rshift_func_uint8_t_u_s(((((((((*g_170) , l_321) , ((*l_278) != (((safe_rshift_func_int8_t_s_s((((+(*l_278)) || l_321) < 0xEFL), 0)) != g_279) && l_320))) < (*l_287)) != (*l_287)) < g_319) == l_328) > l_280), l_338))))), g_85)));
                    (*l_108) = func_29(((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(g_18, (*p_27))), 2)), (g_18 , ((+(((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(0xD1L, l_324)), (safe_sub_func_int16_t_s_s((func_51((func_51((safe_sub_func_int8_t_s_s(((*g_169) != (void*)0), (7UL && l_320))), p_26, (*g_170)) , (*l_278)), (*g_169), (*p_26)) >= (-7L)), l_358)))) >= (*l_278)), l_333)), l_328)) ^ (*l_278)) ^ (-1L))) , g_56)))) , (**g_169)), g_319, p_27, l_328, (*g_169));

                    ;
                    (*p_27) = func_51(l_359, func_29(l_360, l_333, p_26, (safe_sub_func_uint64_t_u_u((*l_278), func_51(l_338, (*l_108), (safe_rshift_func_uint16_t_u_s(0UL, 5))))), l_365), g_16);
                    for (l_358 = 14; (l_358 == 4); --l_358)
                    {
                        (*l_108) = p_27;
                    }

                    ;
                }
            }

            ;
        }
        else
        {
            short l_370 = 0x31AAL;
            for (l_358 = (-5); (l_358 == 21); l_358 = safe_add_func_int16_t_s_s(l_358, 9))
            {
                return l_370;
            }
            (*l_108) = func_29((1L & (safe_add_func_uint32_t_u_u((*l_287), (18446744073709551615UL && (0x7FB2L < l_370))))), l_370, (*g_169), g_56, (*l_108));

            ;
            (*g_169) = (*g_169);
            (*l_109) = ((*g_169) == (((**l_108) , g_85) , p_26));
        }

        ;
        ;

        for (l_360 = 7; (l_360 < 8); l_360 = safe_add_func_uint16_t_u_u(l_360, 6))
        {
            long long l_389 = 0L;
            int **l_401 = &g_170;
            for (l_358 = 0; (l_358 != 5); l_358 = safe_add_func_int64_t_s_s(l_358, 2))
            {
                int l_390 = 0x454CC3FDL;
                int *l_391 = &l_212;
                (*g_169) = &g_85;

                ;
            }
            for (l_359 = 12; (l_359 < 11); l_359 = safe_sub_func_uint64_t_u_u(l_359, 4))
            {
                int **l_441 = &l_287;
                int l_442 = 0x4F77BF78L;
                l_442 = ((safe_add_func_uint8_t_u_u((l_389 , (*l_278)), (*l_109))) || (((((**l_108) , (**l_108)) , (((l_278 == ((&g_170 != (void*)0) , (g_56 , p_26))) , l_441) != (void*)0)) , g_56) , 0xBB673A61L));
                (*g_169) = &g_18;

                ;
                (*l_441) = (void*)0;

                ;
            }
            if ((*p_26))
                continue;
        }

        ;
        if ((func_51((**l_108), &g_18, ((safe_lshift_func_uint8_t_u_s((*l_109), 2)) || (!(((((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((&l_109 != &g_170) , (safe_add_func_uint16_t_u_u((g_16 , (safe_rshift_func_int8_t_s_s((+(safe_sub_func_uint64_t_u_u(g_279, func_51(((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((&g_170 == &g_170), (*l_278))), 3)) != (*l_278)), p_26, (*l_278))))), 6))), (*l_278)))), 1)), (*l_109))) == g_432) , (*l_278)) != g_279) != 0x8B65L)))) < (*l_278)))
        {
            unsigned l_459 = 0x0EFA7A59L;
            if ((65528UL && func_51(l_459, &g_432, (*p_26))))
            {
                (*l_108) = p_27;

                ;
            }
            else
            {
                int l_462 = 0L;
                for (l_430 = (-16); (l_430 < 38); l_430 = safe_add_func_int32_t_s_s(l_430, 7))
                {
                    return l_462;
                }
                (*g_169) = func_29(func_51(l_459, func_76((((*l_108) != (void*)0) <= 0xEDL), &l_462, (func_51((safe_sub_func_uint32_t_u_u(((*l_278) , (*l_278)), 7L)), l_278, (**l_108)) , l_465), l_459, g_16), l_466), l_459, p_26, (*l_278), p_26);

                ;
            }

            ;
        }
        else
        {
            int **l_479 = &l_465;
            int **l_503 = &l_278;
            if (((g_18 > (-10L)) , ((safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(g_432, (((safe_sub_func_int8_t_s_s(g_56, (safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_16, (((((*l_465) >= (safe_mod_func_uint64_t_u_u(((void*)0 == l_479), (g_319 , (*l_465))))) >= g_56) < g_279) <= l_480))), (**l_108))))) >= 0x7E6DFCEBFE9D7F42LL) == (**l_479)))) | (**l_479)), 1)) || (**l_479))))
            {
                long long l_487 = 0L;
                unsigned short l_491 = 0xCC68L;
                int l_518 = 0x912E2F74L;
                if ((*p_26))
                {
                    int *l_490 = &g_18;
                    for (g_279 = (-10); (g_279 < 32); g_279 = safe_add_func_uint8_t_u_u(g_279, 4))
                    {
                        (*l_465) &= (0L > 0x241BL);
                    }
                    for (l_277 = 0; (l_277 >= 5); l_277 = safe_add_func_int16_t_s_s(l_277, 5))
                    {
                        char l_505 = 0x30L;
                        (*l_278) |= (((safe_mod_func_uint64_t_u_u((*l_109), l_487)) , func_51(((safe_add_func_int16_t_s_s((**l_479), (**l_479))) == g_56), l_490, l_491)) ^ g_279);
                        (*l_278) ^= (((((~(!(safe_lshift_func_int8_t_s_s(g_56, 0)))) | ((safe_mod_func_uint8_t_u_u((((((safe_sub_func_uint32_t_u_u((0xADCC15319E6048ACLL >= (**l_479)), g_432)) & (*l_490)) ^ (((((safe_rshift_func_int8_t_s_u((((safe_mod_func_uint16_t_u_u((((p_27 != g_502) && (&g_502 != (((l_487 , &p_27) != (void*)0) , l_503))) ^ g_279), (*l_490))) , g_85) > (*l_490)), (*l_490))) == g_504) , (*l_490)) && l_505) <= (*l_490))) && 255UL) , (*l_465)), l_505)) , (**l_108))) , g_432) , 4UL) , (**l_479));
                        (*g_169) = p_26;

                        ;
                        (*l_465) = (safe_sub_func_uint8_t_u_u(((g_279 | (safe_mod_func_int64_t_s_s(((*g_170) & (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((**l_503), (safe_sub_func_uint64_t_u_u(g_56, ((*l_465) | 0xEC590E7AL))))), ((((void*)0 != l_278) , ((((safe_add_func_uint8_t_u_u(255UL, l_505)) || (**l_503)) , g_16) , 18446744073709551615UL)) && 2L)))), 1L))) | (**l_108)), 9L));
                    }
                    (**l_503) &= (g_432 & (0xB55EL || l_518));
                }
                else
                {
                    int l_519 = 0x149B7CE3L;
                    (*l_278) |= l_519;
                    (*l_465) = (safe_lshift_func_int16_t_s_s((0xBDL && (&p_26 != (l_487 , &g_502))), l_487));
                    (*l_465) = 0x1944EAD3L;
                }
            }
            else
            {
                char l_528 = 0x51L;
                int *l_529 = &g_504;
                (*l_108) = p_27;

                ;
                (**l_479) = (((void*)0 != &p_27) , func_51((**l_503), ((safe_add_func_int32_t_s_s((*p_26), (((safe_mod_func_uint16_t_u_u((((((-1L) != g_319) && (safe_lshift_func_uint16_t_u_s(((((*p_26) , (0xC15EL && g_85)) >= g_504) && 0x55L), l_528))) , g_432) >= 1L), l_528)) , (void*)0) != &g_502))) , l_529), (*p_26)));
                (*l_108) = (*l_108);
            }

            ;
        }

        ;
        (*l_465) = (*p_26);
    }

    ;


    ;
    g_432 &= (*p_26);
    return g_85;
}







static int * func_29(int p_30, short p_31, int * p_32, unsigned char p_33, int * p_34)
{
    long long l_50 = (-1L);
    unsigned short l_55 = 1UL;
    int l_58 = 0xA7DFAE38L;
    unsigned short l_59 = 65535UL;
    unsigned long long l_82 = 0UL;
    int *l_104 = &g_18;
    int **l_103 = &l_104;
    if ((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((~((((((249UL > (((~0UL) , (safe_sub_func_int8_t_s_s(((((((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u(7L, 1)) || (0x0F4FL || (((p_33 <= (254UL <= l_50)) < (func_51(l_50, &g_18, l_55) > 0xD407B094L)) , p_30))) , g_16) , 0UL), 9)) <= l_58) ^ l_58) | g_16) < l_50) || p_33), g_16))) > l_50)) == 0x48L) , (-4L)) & l_59) > (*p_32)) & (-10L))), 0)), 4294967292UL)))
    {
        unsigned char l_60 = 0x8EL;
        int *l_61 = (void*)0;
        int l_62 = 3L;
        l_62 ^= l_60;
    }
    else
    {
        int l_69 = (-8L);
        int *l_101 = (void*)0;
        int *l_102 = &g_85;
        p_32 = func_63(l_69, &l_69, func_70((p_33 , g_56), &l_69, g_18, func_76((*p_32), &g_18, &l_69, l_82, p_30), &g_18), g_18, p_31);

        ;
        (*l_102) ^= l_69;
    }


    (*l_103) = &g_85;

    ;
    return &g_85;


}







static int func_51(unsigned short p_52, int * p_53, int p_54)
{
    unsigned l_57 = 0UL;
    g_56 |= (*p_53);
    return l_57;
}







static int * func_63(int p_64, int * p_65, int * p_66, unsigned long long p_67, unsigned char p_68)
{
    short l_94 = 0xD429L;
    int *l_96 = &g_18;
    l_96 = func_76(l_94, &g_85, l_96, g_18, g_18);

    ;
    for (g_56 = 0; (g_56 < 1); ++g_56)
    {
        int *l_99 = &g_85;
        int **l_100 = &l_96;
        (*p_65) |= (*l_96);
        (*l_100) = l_99;
    }
    (*p_66) ^= (*p_65);
    return p_65;


}







static int * func_70(short p_71, int * p_72, unsigned char p_73, int * p_74, int * p_75)
{
    int l_93 = 1L;
    (*p_74) = (((safe_sub_func_uint8_t_u_u(((((func_51(g_18, func_76((safe_unary_minus_func_uint8_t_u((0x6063L >= (safe_rshift_func_uint8_t_u_s(p_71, func_51(g_18, func_76(func_51(((safe_rshift_func_int8_t_s_u(p_71, 3)) && g_85), p_74, (*p_75)), p_75, p_75, l_93, p_71), g_16)))))), p_72, &g_18, p_73, g_18), l_93) || 0x88L) , l_93) , l_93) || l_93), p_73)) , g_16) && g_56);
    return p_74;


}







static int * func_76(int p_77, int * p_78, int * p_79, long long p_80, long long p_81)
{
    char l_83 = 0x41L;
    int *l_84 = &g_85;
    (*l_84) = l_83;
    return &g_85;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    transparent_crc(g_810, "g_810", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
