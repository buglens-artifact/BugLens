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



static volatile int g_15 = 0x46CDEAD9L;
static long long g_23 = 0x41720348F4A8FE24LL;
static int g_73 = 0xA513E67DL;
static short g_88 = 0xD34EL;
static unsigned g_116 = 0xF2A7570BL;
static int *g_131 = &g_73;
static int **g_130 = &g_131;
static int g_239 = 0xC6EEA383L;
static int g_252 = 0xA1731C75L;
static int g_266 = 0xDCFA39C7L;
static int g_515 = 0xE76F8FF9L;
static int **g_530 = &g_131;
static short g_667 = 0xA173L;
static char g_676 = 0xD1L;
static int g_719 = 8L;
static unsigned g_729 = 0xFBF480E9L;
static long long g_791 = 7L;
static int g_806 = 1L;
static unsigned long long g_818 = 1UL;
static unsigned g_913 = 18446744073709551606UL;
static int *g_1009 = (void*)0;
static volatile unsigned g_1184 = 4294967295UL;



static unsigned short func_1(void);
static int func_2(unsigned long long p_3);
static unsigned long long func_4(unsigned p_5, int p_6, char p_7, unsigned char p_8, int p_9);
static unsigned long long func_12(int p_13);
static const char func_21(unsigned p_22);
static unsigned func_28(unsigned p_29, const int p_30, unsigned short p_31, unsigned short p_32);
static int func_36(unsigned char p_37);
static unsigned char func_38(unsigned char p_39, long long p_40);
static int func_48(unsigned p_49, const char p_50, unsigned p_51, int p_52);
static unsigned func_53(unsigned p_54, char p_55, const char p_56, unsigned long long p_57, unsigned p_58);
static unsigned short func_1(void)
{
    unsigned l_14 = 0UL;
    unsigned l_1012 = 7UL;
    int l_1224 = 3L;
    l_1224 = func_2(func_4(((safe_sub_func_int64_t_s_s(0x23ED15DE05DAE5A6LL, func_12(l_14))) == l_14), ((((g_1009 == (void*)0) <= (safe_lshift_func_int16_t_s_s((((g_676 && (0xE9E7L && g_676)) || l_1012) , g_667), g_676))) || g_913) | 18446744073709551615UL), l_14, g_791, l_14));
    return g_15;
}







static int func_2(unsigned long long p_3)
{
    unsigned l_1059 = 0x374415BAL;
    int *l_1064 = (void*)0;
    int l_1073 = 1L;
    int l_1109 = (-1L);
    int ***l_1157 = &g_530;
    unsigned char l_1201 = 255UL;
    for (g_252 = 0; (g_252 <= (-4)); g_252 = safe_sub_func_int16_t_s_s(g_252, 9))
    {
        const unsigned short l_1072 = 65532UL;
        int *l_1076 = &g_515;
        unsigned l_1092 = 4294967292UL;
        int ***l_1094 = &g_530;
        int l_1122 = 1L;
        int *l_1129 = &l_1122;
        int *l_1137 = &l_1073;
        unsigned long long l_1166 = 0x8617FA8FAFE0BCE0LL;
        unsigned l_1175 = 18446744073709551615UL;
        if ((safe_div_func_int8_t_s_s(0xC0L, l_1059)))
        {
            char l_1067 = 0L;
            int *l_1093 = &g_719;
            unsigned l_1112 = 0x7B3C8853L;
            l_1073 ^= (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((void*)0 != l_1064), p_3)), (safe_mod_func_int8_t_s_s(((l_1067 != (safe_add_func_uint64_t_u_u(func_21(g_23), ((safe_add_func_int16_t_s_s(l_1072, (p_3 >= (((~((l_1072 , l_1067) < l_1067)) != l_1067) == p_3)))) == 0x32408675L)))) < 0x28L), 1L))));
            for (g_667 = 0; (g_667 <= 13); g_667 = safe_add_func_int8_t_s_s(g_667, 1))
            {
                int l_1077 = 0x03B46D73L;
                int *l_1080 = &g_515;
                unsigned long long l_1090 = 8UL;
                l_1076 = &g_806;
                if (l_1077)
                {
                    const unsigned long long l_1091 = 0x58178E8FD2372F8FLL;
                    if (p_3)
                    {
                        int l_1079 = (-8L);
                        l_1073 = (((p_3 ^ (safe_unary_minus_func_uint16_t_u(func_21((((p_3 || l_1079) || p_3) >= p_3))))) ^ (p_3 && (((func_21(p_3) || 0xC7071272L) , p_3) < 0xD7043955L))) , p_3);
                        (*g_530) = l_1080;
                    }
                    else
                    {
                        int *l_1081 = (void*)0;
                        (*g_130) = l_1081;
                        (*l_1080) = p_3;
                        (*l_1076) = (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(1L, ((safe_mul_func_uint8_t_u_u(g_116, ((g_266 || g_667) != ((void*)0 == l_1081)))) , p_3))), (func_21((0x35L != p_3)) | g_266)));
                        (*l_1076) = (((((p_3 , ((0x83L >= (-6L)) & 0UL)) ^ ((func_53((*l_1080), (safe_mul_func_uint8_t_u_u((g_266 <= (g_23 , 1UL)), l_1067)), p_3, g_719, p_3) && l_1090) || p_3)) || g_73) != 1L) , 0x23BCB199L);
                    }
                    if (l_1091)
                        continue;
                }
                else
                {
                    unsigned l_1108 = 0xFD4A9191L;
                    (*l_1093) &= ((((l_1092 ^ (((l_1093 == l_1093) >= (((void*)0 == l_1094) | (safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((*l_1076), (safe_div_func_int8_t_s_s((((((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_s(((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((func_21((*l_1076)) , (((0x40ED594E8FA42B4DLL != g_729) , g_73) , l_1108)), g_23)), g_23)) && 0x686CL), 8)))) , &l_1073) == &g_515) ^ 0xE7D0CF5D8637A689LL) < g_15), 0x91L)))), p_3)))) != 0x884AEAE8821DE3CELL)) , p_3) ^ g_729) == l_1109);
                    if ((((void*)0 == &g_130) <= ((safe_add_func_uint8_t_u_u((l_1112 , 0x29L), (&g_130 == (void*)0))) ^ (safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(p_3, 2)), l_1073)))))
                    {
                        (*l_1093) = (p_3 & g_116);
                        return (*l_1080);
                    }
                    else
                    {
                        (**l_1094) = l_1080;
                    }
                    (**g_130) = l_1108;
                }
            }
        }
        else
        {
            int l_1121 = (-10L);
            (*l_1076) &= (((safe_mod_func_int32_t_s_s((l_1109 , ((safe_div_func_int8_t_s_s((0xF86DL == (g_676 && (((0xE338L != ((p_3 ^ func_53(((void*)0 == &l_1073), p_3, p_3, p_3, p_3)) , p_3)) == 0x1D56L) && 0xB8741A48L))), l_1121)) , p_3)), l_1122)) > g_239) | g_913);
        }
        (*l_1129) |= (g_719 , (((safe_lshift_func_uint8_t_u_s(g_266, (safe_mul_func_int16_t_s_s(func_53(p_3, g_676, p_3, func_53(g_818, (((safe_mod_func_uint64_t_u_u(((*l_1076) & func_53(p_3, g_719, (*l_1076), (*l_1076), p_3)), p_3)) | p_3) < (*l_1076)), g_15, p_3, p_3), p_3), 0xECC8L)))) ^ p_3) || 246UL));
        for (p_3 = (-18); (p_3 <= 37); ++p_3)
        {
            const int * const l_1132 = &g_806;
            const int *l_1134 = &g_719;
            const int **l_1133 = &l_1134;
            unsigned short l_1205 = 0UL;
            int *l_1217 = &g_806;
            (*l_1133) = l_1132;
            if ((*l_1134))
            {
                return (*l_1076);
            }
            else
            {
                int *l_1141 = &g_806;
                for (g_515 = (-1); (g_515 >= 10); g_515++)
                {
                    int *l_1138 = &g_515;
                    if ((((((void*)0 == &l_1132) , &g_15) != (g_73 , l_1137)) == func_21((**l_1133))))
                    {
                        (*l_1137) = (*l_1132);
                    }
                    else
                    {
                        l_1138 = l_1138;
                        l_1073 = p_3;
                        (**l_1094) = (void*)0;
                        if (p_3)
                            continue;
                    }
                    (*l_1137) &= (safe_mul_func_uint8_t_u_u(p_3, (*l_1132)));
                    (*l_1137) ^= ((&l_1064 == &l_1064) | 0x90CBC6C15A958567LL);
                }
                (*g_530) = l_1141;
            }
            if (p_3)
            {
                int *l_1142 = (void*)0;
                int ***l_1188 = &g_130;
                if ((**g_530))
                {
                    char l_1147 = 0x2BL;
                    int l_1148 = 9L;
                    (*g_530) = l_1142;
                    l_1148 = (0xA9AD2AFBL && ((((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((g_719 , func_53(g_116, g_515, ((void*)0 == &l_1073), g_239, g_239)) | g_239), g_791)), l_1147)) > g_818) ^ p_3) , p_3));
                }
                else
                {
                    const int *l_1150 = (void*)0;
                    (*g_530) = (**l_1094);
                    if (func_21(p_3))
                    {
                        l_1073 = 0xA52537CBL;
                    }
                    else
                    {
                        const int *l_1149 = &g_806;
                        (*g_131) = (**g_130);
                        (*l_1129) &= p_3;
                        (**l_1094) = &l_1073;
                        l_1149 = (*l_1133);
                    }
                    (*l_1133) = l_1150;
                }
                for (l_1059 = (-7); (l_1059 < 39); l_1059++)
                {
                    unsigned short l_1172 = 1UL;
                    int *l_1204 = &g_515;
                    int *l_1206 = &l_1122;
                    (*l_1137) ^= (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((void*)0 != l_1157), 4)), 4));
                    for (l_1122 = (-5); (l_1122 < (-1)); l_1122 = safe_add_func_uint8_t_u_u(l_1122, 2))
                    {
                        unsigned char l_1167 = 0xF5L;
                        if (p_3)
                            break;
                        (*l_1137) ^= (safe_lshift_func_int8_t_s_s(0xD9L, (((safe_mul_func_int16_t_s_s(func_21(g_667), 0xF2DEL)) > (g_15 ^ (((safe_add_func_int32_t_s_s(l_1166, func_21(l_1167))) || (safe_mod_func_int64_t_s_s(5L, g_73))) || p_3))) != 1L)));
                        (*l_1137) = (safe_div_func_int32_t_s_s(l_1172, 0x354574B7L));
                    }
                    if (((((((safe_add_func_uint32_t_u_u(g_239, l_1175)) < ((safe_rshift_func_int8_t_s_s(((((g_791 , &g_130) != (void*)0) < (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((g_1184 | p_3), (safe_mod_func_uint8_t_u_u((((func_53(p_3, func_53(g_729, p_3, g_676, p_3, g_239), g_667, p_3, l_1172) , p_3) != l_1172) >= 5UL), (-1L))))), 0xA833AC28F252B409LL))) , 3L), 5)) , g_1184)) , g_252) <= p_3) , g_676) || (*l_1137)))
                    {
                        unsigned char l_1187 = 255UL;
                        (*l_1076) = (((0x2B91L != ((void*)0 == &g_131)) || ((l_1187 , &g_530) == l_1188)) & (safe_mod_func_uint8_t_u_u(1UL, (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((*l_1137), (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((*l_1129), p_3)), 10)))) | p_3), g_515)) | p_3), l_1201)))));
                        (*l_1137) = (safe_div_func_int64_t_s_s(func_21((0x4E70D6A0L | p_3)), (1UL | (l_1187 , (g_676 , (((*g_530) == l_1204) , (l_1205 || l_1187)))))));
                        (*l_1133) = (**l_1094);
                        (*l_1129) |= p_3;
                    }
                    else
                    {
                        (**l_1094) = l_1206;
                        (**l_1157) = (**l_1094);
                    }
                    return p_3;
                }
            }
            else
            {
                (**l_1094) = (void*)0;
            }
            for (g_719 = 0; (g_719 != 18); g_719 = safe_add_func_int64_t_s_s(g_719, 6))
            {
                int ***l_1211 = &g_530;
                if (p_3)
                    break;
                for (l_1092 = (-7); (l_1092 > 31); ++l_1092)
                {
                    (*l_1076) &= ((((void*)0 == l_1211) < g_667) ^ (safe_rshift_func_int16_t_s_s((+(-3L)), 3)));
                    for (g_729 = 0; (g_729 >= 6); g_729 = safe_add_func_int64_t_s_s(g_729, 4))
                    {
                        unsigned char l_1216 = 255UL;
                        l_1216 = 0x07AE5872L;
                    }
                    (**l_1094) = l_1217;
                }
            }
        }
        for (l_1122 = (-2); (l_1122 != 28); l_1122 = safe_add_func_uint64_t_u_u(l_1122, 4))
        {
            int *l_1220 = (void*)0;
            int ***l_1223 = &g_130;
            (*g_530) = l_1220;
            (*l_1137) &= ((safe_rshift_func_uint8_t_u_u((!(((((((65532UL < (&g_1009 == (p_3 , (*l_1157)))) & p_3) , (void*)0) != (**l_1094)) | (func_53(g_1184, p_3, p_3, p_3, g_515) , p_3)) , l_1157) == l_1223)), 7)) < p_3);
        }
    }
    (*g_530) = &l_1073;
    (*g_130) = (*g_530);
    return p_3;
}







static unsigned long long func_4(unsigned p_5, int p_6, char p_7, unsigned char p_8, int p_9)
{
    const unsigned l_1013 = 0x59A5A08BL;
    int l_1044 = (-3L);
    if (l_1013)
    {
        int l_1020 = 0xA3FCC3B6L;
        int l_1043 = 1L;
        int *l_1045 = (void*)0;
        int *l_1046 = &g_252;
        if (((safe_div_func_int64_t_s_s(g_252, (safe_mul_func_int16_t_s_s((l_1013 | ((4294967291UL && ((&g_1009 == &g_131) , (p_8 < func_21(p_7)))) < ((safe_add_func_int8_t_s_s(0xD3L, p_9)) , g_252))), (-1L))))) & 7L))
        {
            long long l_1023 = 0x3C5832B6F395C99CLL;
            l_1020 ^= p_8;
            if (l_1013)
            {
                int *l_1021 = &g_252;
                (*g_130) = l_1021;
            }
            else
            {
                int *l_1022 = &g_719;
                int l_1027 = 0xC72BB0B2L;
lbl_1024:
                (*g_130) = l_1022;
                (*g_530) = ((((p_5 < (0xA9CEC17FL < ((-1L) > func_36((*l_1022))))) ^ (~((~g_676) <= ((func_21((*l_1022)) , p_8) , p_6)))) <= l_1023) , (*g_130));
                if (l_1013)
                    goto lbl_1024;
                (**g_130) = (safe_mul_func_int8_t_s_s(g_23, p_6));
            }
        }
        else
        {
            char l_1034 = 0xE6L;
            int *l_1035 = &g_806;
            (*g_130) = (l_1034 , l_1035);
            (*g_530) = (*g_130);
            (*l_1035) = ((func_28(l_1020, (safe_unary_minus_func_uint16_t_u((g_667 | (*g_131)))), p_8, (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((((safe_div_func_int64_t_s_s((p_8 | p_8), (((((g_252 & 0xAE0FABAAL) < (~g_913)) >= 65535UL) , p_8) , 8UL))) , p_6) >= l_1043) | (**g_530)), g_252)), l_1020))) , (void*)0) != (void*)0);
        }
        l_1044 = p_5;
        (*l_1046) &= (!0xB27AC84BL);
    }
    else
    {
        return l_1013;
    }
    if (((safe_rshift_func_uint8_t_u_u(l_1013, (g_73 , func_21(p_9)))) && g_667))
    {
        (*g_530) = &p_6;
    }
    else
    {
        unsigned short l_1053 = 0UL;
        int *l_1054 = &l_1044;
        (*g_130) = ((safe_lshift_func_int8_t_s_u(((void*)0 != (*g_530)), 3)) , (*g_530));
        (*l_1054) |= ((p_6 > (p_5 ^ p_8)) , p_9);
    }
    return g_719;
}







static unsigned long long func_12(int p_13)
{
    int l_27 = 0L;
    long long l_33 = (-6L);
    int **l_741 = (void*)0;
    unsigned short l_754 = 65535UL;
    int ***l_763 = &g_130;
    unsigned short l_907 = 65535UL;
    unsigned l_960 = 0x878B1A00L;
    unsigned l_998 = 0xA7804B3AL;
    if (g_15)
    {
        unsigned long long l_20 = 0x93D0B5486B6FEB9ELL;
        int *l_756 = &g_515;
        unsigned long long l_786 = 0x0FFED0FBFFAA09F3LL;
        int l_869 = 0x25B94A38L;
        int ***l_977 = (void*)0;
        char l_989 = 0x4AL;
lbl_984:
        if ((g_15 >= (safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(0L, ((l_20 || func_21((g_23 , (safe_lshift_func_uint8_t_u_s((((((safe_unary_minus_func_uint32_t_u(g_23)) != l_27) & 0L) < ((func_28(l_20, l_27, g_23, l_33) , l_20) != l_27)) != 1UL), g_719))))) > 0xD5DC6C65L))), p_13))))
        {
            unsigned l_737 = 0x1F991CD4L;
            int l_757 = 0x8F9A63BBL;
            l_27 &= 0xE566EECFL;
            (*g_530) = &l_27;
            if ((func_38(l_737, g_15) && 0xBF5AL))
            {
                return g_73;
            }
            else
            {
                long long l_744 = 0L;
                int l_758 = 0x8835D3EBL;
                for (g_515 = 0; (g_515 > 14); g_515++)
                {
                    int ** const l_740 = &g_131;
                    l_741 = l_740;
                    for (g_23 = (-8); (g_23 != (-15)); --g_23)
                    {
                        int *l_749 = &g_515;
                        int *l_755 = &g_719;
                        l_744 = p_13;
                        (*l_755) &= (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((l_749 != (*g_530)) && l_744), func_53(((safe_div_func_uint8_t_u_u((func_21(l_737) ^ (0x16657AB7L | g_252)), p_13)) <= ((func_53(((safe_sub_func_uint8_t_u_u(p_13, l_744)) & 1UL), l_737, g_729, g_667, l_754) , l_20) > l_744)), p_13, p_13, p_13, p_13))), 0x3A94L));
                        (*g_130) = l_756;
                        l_757 = p_13;
                    }
                }
                (*l_756) = p_13;
                l_758 = l_744;
                for (g_73 = 7; (g_73 == (-26)); --g_73)
                {
                    (*g_530) = l_756;
                }
            }
        }
        else
        {
            int * const *l_762 = &g_131;
            int * const **l_761 = &l_762;
            const long long l_787 = (-1L);
            int l_788 = (-1L);
            int *l_809 = &g_266;
            int **l_917 = &g_131;
            unsigned char l_936 = 0x85L;
            if ((l_761 != l_763))
            {
                unsigned long long l_764 = 0x1DB0C38BC804EEE1LL;
                l_764 = 0x134D8EFCL;
            }
            else
            {
                char l_778 = 0xFDL;
                if ((safe_div_func_int8_t_s_s(((*l_763) == (void*)0), (safe_mul_func_uint8_t_u_u(4UL, (g_252 >= (!p_13)))))))
                {
                    return g_88;
                }
                else
                {
                    int l_775 = 0x92A35AB8L;
                    l_775 |= (safe_lshift_func_uint8_t_u_s(((~(g_515 < g_252)) >= (safe_add_func_uint8_t_u_u((*l_756), (*l_756)))), 5));
                }
                if (((safe_sub_func_uint8_t_u_u(((l_778 < (safe_unary_minus_func_int16_t_s(((safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s(func_53((safe_rshift_func_int8_t_s_s(l_778, 6)), ((*l_756) , (*l_756)), l_787, (*l_756), l_778), (*l_756))), g_266)) == p_13)))) == 0xB5E62A9A975A2704LL), p_13)) , l_788))
                {
                    for (l_33 = 0; (l_33 > 7); l_33 = safe_add_func_uint32_t_u_u(l_33, 1))
                    {
                        (*g_530) = l_756;
                    }
                }
                else
                {
                    short l_805 = (-7L);
                    int *l_810 = (void*)0;
                    if (g_791)
                    {
                        unsigned l_796 = 0xFA332E3CL;
                        int *l_799 = (void*)0;
                        int *l_800 = &l_27;
                        (*l_800) ^= (safe_mod_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((g_23 , p_13), (safe_mod_func_int32_t_s_s(p_13, (*l_756))))), g_252));
                    }
                    else
                    {
                        (*l_756) ^= (p_13 <= ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(0xB057L, g_676)), 3UL)) , l_805));
                        (*l_756) |= ((*g_530) == (void*)0);
                        g_806 = (*l_756);
                        (*l_756) = (g_676 > l_805);
                    }
                    for (g_239 = 0; (g_239 < 6); g_239 = safe_add_func_int32_t_s_s(g_239, 1))
                    {
                        int l_811 = (-1L);
                        l_809 = (**l_763);
                        (*g_530) = l_810;
                        l_811 |= (g_266 , 0xF47795A8L);
                        if (p_13)
                            continue;
                    }
                    l_809 = (void*)0;
                    (*l_756) = (p_13 > (((void*)0 != &g_130) == (((safe_unary_minus_func_uint16_t_u((*l_756))) , &l_810) == (((*l_756) , p_13) , &g_131))));
                }
                (*l_756) = (-1L);
            }
            if (((safe_mul_func_int16_t_s_s((g_252 , (~((p_13 > g_73) , p_13))), (0x79DBB3CD7EF4BCA8LL >= (safe_sub_func_int8_t_s_s(p_13, 255UL))))) != p_13))
            {
                int *l_817 = &g_73;
                l_817 = (**l_763);
                l_809 = l_817;
                (*l_756) = func_53(g_818, (safe_mul_func_uint16_t_u_u((g_266 || (safe_add_func_uint64_t_u_u(p_13, (safe_lshift_func_uint16_t_u_s(((&g_131 == (((safe_add_func_int32_t_s_s(p_13, p_13)) && g_266) , &g_131)) ^ ((+(+(safe_rshift_func_uint16_t_u_s(((~(safe_unary_minus_func_int8_t_s((safe_mul_func_int8_t_s_s((*l_756), g_791))))) & p_13), p_13)))) > g_806)), g_729))))), 0xF598L)), (*l_756), g_729, g_729);
            }
            else
            {
                unsigned long long l_844 = 1UL;
                int **l_890 = &l_809;
                short l_908 = 0x3A02L;
                (*l_756) = 0x4BA1C056L;
                if (((safe_sub_func_int8_t_s_s((0xBE6962EDL && (safe_rshift_func_uint16_t_u_s(g_239, (((**l_761) != ((g_88 != (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(((l_844 | 0xC27BL) , (safe_mod_func_uint64_t_u_u((p_13 < (((p_13 , (*l_761)) != (void*)0) < p_13)), 18446744073709551609UL))), p_13)) != g_252), 5)), p_13))) , (*l_762))) | g_791)))), 0x28L)) , p_13))
                {
                    const int * const l_872 = &g_73;
                    int l_909 = 1L;
                    (*g_130) = (void*)0;
                    l_869 |= (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_13 , g_729), (safe_sub_func_int16_t_s_s(func_36(g_791), (safe_sub_func_int64_t_s_s(((((safe_add_func_uint32_t_u_u((((func_53((safe_mul_func_int8_t_s_s(((0x0C47L > (safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((+(l_844 , p_13)), 0xA78FL)), (safe_lshift_func_int8_t_s_u(g_116, g_239)))), l_844))) <= g_729), 0x84L)), p_13, p_13, g_73, p_13) , g_116) > 0x8F90C294L) , p_13), p_13)) == p_13) < g_818) < g_266), 0xA62475DE2C97F813LL)))))), 1L)), (-3L)));
                    if (((((safe_mul_func_int8_t_s_s((-1L), ((**l_761) == l_872))) >= p_13) , ((safe_sub_func_int64_t_s_s((func_53((*l_756), (safe_add_func_int64_t_s_s(1L, ((safe_div_func_uint8_t_u_u(0xF8L, (safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((*l_756), ((p_13 , (void*)0) != &g_131))) == g_116), p_13)))) == 1L))), g_88, g_818, p_13) != g_116), 0UL)) , l_844)) , (*l_872)))
                    {
                        return (*l_756);
                    }
                    else
                    {
                        short l_900 = 0x7A84L;
                        l_909 &= (p_13 < (safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_s(((((void*)0 != l_890) , (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(((safe_div_func_int16_t_s_s((~(l_900 & g_73)), (safe_add_func_uint32_t_u_u(((void*)0 != &g_530), p_13)))) & func_21(((((safe_mod_func_uint64_t_u_u(((((safe_sub_func_uint64_t_u_u((l_900 > l_907), g_239)) > g_806) <= p_13) , g_73), 8L)) | p_13) != p_13) >= 2UL))))), p_13)) , 253UL), p_13)) == (*l_756)), (*l_872)))) , 0UL), l_908)))) == 0x0CL), p_13)), 8UL)));
                    }
                }
                else
                {
                    const unsigned long long l_910 = 0xDC2BFAF3D919E510LL;
                    const int *l_915 = &g_252;
                    const int **l_914 = &l_915;
                    const int ***l_916 = &l_914;
                    (*l_916) = (((l_910 , (~p_13)) || (p_13 == (safe_div_func_uint8_t_u_u(g_266, g_913)))) , l_914);
                    (*l_890) = (*l_890);
                    (**l_916) = (*g_130);
                }
            }
            (*l_917) = (*l_762);
            if (p_13)
            {
                int *l_931 = &g_719;
                int l_946 = (-1L);
                int l_967 = 0x4DBC012FL;
lbl_937:
                (*l_756) = (p_13 != ((safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(func_21(p_13), p_13)) ^ 0xD26AL), p_13)) && ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(func_53((0xB6250BCF7A4DA83ALL ^ (((safe_unary_minus_func_uint32_t_u((g_116 == (1UL ^ g_676)))) != g_791) & 0xA5L)), (*l_756), p_13, g_729, g_818), 4)), 2)) , p_13)));
                (*l_917) = ((safe_sub_func_uint16_t_u_u(0xBAD7L, 0xD4A4L)) , l_931);
                if (((void*)0 != (*l_763)))
                {
                    (**l_763) = &l_869;
                    (*g_530) = (*g_530);
                    if (p_13)
                    {
                        (*g_130) = (*g_530);
                        (**g_130) |= (*l_756);
                        (**l_763) = (void*)0;
                    }
                    else
                    {
                        if (l_33)
                            goto lbl_937;
                        (*l_931) &= (((safe_mul_func_uint8_t_u_u(g_818, (g_239 ^ p_13))) && (safe_mod_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(p_13, g_88)) , 0UL) , 0x9D9AL), (~(g_116 && (**l_762)))))) , (-1L));
                    }
                }
                else
                {
                    int l_948 = 1L;
                    for (g_719 = 0; (g_719 > 22); g_719 = safe_add_func_int16_t_s_s(g_719, 1))
                    {
                        const int ***l_947 = (void*)0;
                        (*l_756) = (((((l_946 , 0x7B7CB0B3A061F833LL) , l_947) != (void*)0) && g_23) | (p_13 ^ (((l_948 | ((safe_unary_minus_func_int64_t_s((g_88 , (**l_917)))) != (**l_762))) , 18446744073709551613UL) , 0xD3EDL)));
                        (*l_756) = (((18446744073709551608UL & (((p_13 , (p_13 , (void*)0)) == &l_762) == ((((safe_div_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((((((safe_mul_func_int8_t_s_s((((void*)0 == &l_931) < 1L), g_116)) < g_88) >= l_960) , p_13) | g_239), g_252)) >= l_948), 0x4BL)) | g_239) == (-8L)) >= 1UL))) , g_515) , p_13);
                        l_967 = ((((g_913 , 0x6990A10DE509E069LL) > (p_13 < ((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_13, (((*l_763) != &l_931) != (*l_756)))), (safe_sub_func_int16_t_s_s((*l_931), (((4294967295UL ^ p_13) && 0x1EB54E6E36AFB494LL) > g_676))))) ^ 0x539DC0F7L))) == p_13) || (*g_131));
                    }
                    (**l_762) |= p_13;
                }
                (*l_931) = (*l_756);
            }
            else
            {
                short l_974 = 5L;
                g_806 |= ((0UL < (((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((-9L) >= 1L), 7)), 2UL)) ^ (g_252 < (safe_add_func_int16_t_s_s(((g_515 , g_913) == func_21(p_13)), (*l_756))))) && l_974)) , 8L);
            }
        }
        (**l_763) = &l_869;
        if (((p_13 & ((((safe_mul_func_uint8_t_u_u((!251UL), (&l_741 != l_977))) , 1L) == (safe_mod_func_uint16_t_u_u(p_13, (*l_756)))) || p_13)) ^ 0xCF5F2D52L))
        {
            return p_13;
        }
        else
        {
            int *l_990 = (void*)0;
            int *l_991 = (void*)0;
            int *l_992 = &g_806;
            if (g_239)
                goto lbl_984;
            (*l_992) ^= ((((safe_mod_func_uint16_t_u_u((g_23 != (*l_756)), (safe_div_func_uint64_t_u_u(l_989, 1UL)))) , (***l_763)) , ((l_990 != (void*)0) , (p_13 < g_791))) , p_13);
        }
        for (l_869 = (-15); (l_869 == 11); l_869 = safe_add_func_int16_t_s_s(l_869, 3))
        {
            (*l_756) ^= (0x5FL <= 0xA8L);
            (*g_130) = (*g_530);
        }
    }
    else
    {
        int **l_995 = (void*)0;
        int l_1003 = 1L;
        (***l_763) &= (l_995 == &g_131);
        (*g_131) = func_21((g_719 & ((safe_lshift_func_int8_t_s_s(p_13, 2)) >= g_15)));
        (*g_131) = ((safe_lshift_func_uint8_t_u_s(p_13, p_13)) != 0x9722A4EA115B9153LL);
        (**g_530) = p_13;
    }
    return g_676;
}







static const char func_21(unsigned p_22)
{
    return g_88;
}







static unsigned func_28(unsigned p_29, const int p_30, unsigned short p_31, unsigned short p_32)
{
    int l_41 = 0x58163090L;
    int *l_736 = &g_515;
    (*l_736) = ((safe_mod_func_uint8_t_u_u(((func_36(func_38(g_23, l_41)) && p_32) > 0UL), (-8L))) == g_667);
    return p_30;
}







static int func_36(unsigned char p_37)
{
    int *l_695 = &g_515;
    int l_702 = (-1L);
    (*l_695) &= (safe_mod_func_uint64_t_u_u(0x57566FCE3EFDEC61LL, 18446744073709551614UL));
    (*l_695) &= (&g_131 == (void*)0);
    for (g_252 = 0; (g_252 >= (-18)); --g_252)
    {
        int **l_703 = &l_695;
        unsigned l_715 = 9UL;
        unsigned short l_716 = 0xF20BL;
        int *l_721 = (void*)0;
        int *l_722 = &g_266;
        short l_730 = (-9L);
    }
    return (*l_695);
}







static unsigned char func_38(unsigned char p_39, long long p_40)
{
    unsigned l_42 = 18446744073709551613UL;
    unsigned long long l_47 = 18446744073709551615UL;
    int *l_391 = &g_252;
    short l_422 = 1L;
    int * const *l_557 = (void*)0;
    int * const ** const l_556 = &l_557;
    int **l_558 = &l_391;
    char l_574 = 0L;
    unsigned l_681 = 4294967286UL;
    (*l_391) = (p_39 | (!((p_40 , (l_42 != (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((l_47 <= 1UL) != (func_48((((+func_53(((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((0x1EAA473ECFB861A7LL > (-1L)), (safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_23, l_47)), p_40)))), 255UL)), 6)) > g_23) > 6UL) , p_40), l_42, l_47, l_47, p_39)) && 0x1B63E3B6L) != l_47), l_42, l_42, g_23) || l_47)), p_40)), 0L)))) || (-1L))));
    (*l_391) = ((l_391 == (void*)0) < g_88);
    if ((safe_lshift_func_uint16_t_u_u((l_391 == ((safe_mul_func_uint8_t_u_u((p_40 | (safe_mod_func_int16_t_s_s(p_39, (safe_add_func_uint8_t_u_u(func_53((safe_div_func_int64_t_s_s(g_88, (((+((0x275233384A0247FCLL | (safe_lshift_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(g_239, p_40)) > ((safe_rshift_func_int16_t_s_s(0x2A15L, (+(safe_sub_func_int32_t_s_s(p_40, p_39))))) , (*l_391))), 6))) >= 0L)) < p_40) ^ p_40))), (*l_391), g_116, g_239, p_40), p_40))))), p_39)) , (*g_130))), 9)))
    {
        char l_436 = (-1L);
        char l_482 = 9L;
        int *l_498 = &g_252;
        l_422 = ((*l_391) , (-6L));
        for (l_47 = 0; (l_47 < 53); l_47 = safe_add_func_uint32_t_u_u(l_47, 4))
        {
            int l_429 = 0xCD04C9E6L;
            int *l_432 = &g_266;
            for (g_266 = 0; (g_266 == 20); g_266++)
            {
                const unsigned short l_435 = 0x5ADFL;
                (*l_391) = (((safe_mod_func_uint16_t_u_u((g_73 , 0x9BDEL), (0x35BDAD22L | (l_429 & (safe_add_func_int64_t_s_s(p_39, ((g_73 != (l_432 == (void*)0)) | (g_239 , p_40)))))))) == 0xC764DC5228ABC2B3LL) <= 4294967295UL);
                (*g_130) = (void*)0;
                (*l_391) &= (safe_div_func_int32_t_s_s((*l_432), p_39));
                if (l_435)
                    continue;
            }
        }
        if (l_436)
        {
            short l_445 = 0x47B5L;
            for (l_436 = 0; (l_436 >= 24); l_436 = safe_add_func_uint64_t_u_u(l_436, 9))
            {
                unsigned l_446 = 18446744073709551609UL;
                int *l_447 = &g_73;
                if (l_445)
                {
                    int *l_448 = (void*)0;
                    (*g_130) = l_447;
                    (*g_130) = l_448;
                }
                else
                {
                    (*l_447) ^= p_40;
                }
            }
        }
        else
        {
            int l_457 = (-1L);
            (*l_391) = (g_23 >= ((safe_lshift_func_uint8_t_u_u(func_53(((((void*)0 == l_391) , ((safe_lshift_func_uint16_t_u_u(g_23, (((l_436 && ((safe_sub_func_int32_t_s_s(p_39, (safe_mul_func_uint8_t_u_u((g_252 , ((!func_53((!9UL), l_457, g_23, p_40, l_436)) == 0x256CL)), p_40)))) , (*l_391))) | 4L) < 1L))) == l_457)) < p_40), p_39, g_116, g_23, (*l_391)), g_266)) != g_266));
            if (p_40)
            {
                short l_458 = (-1L);
                (*l_391) = ((l_458 <= ((safe_unary_minus_func_uint64_t_u(l_458)) || (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_458 | (-5L)), 7)), ((~(safe_mod_func_int8_t_s_s(0x4CL, (*l_391)))) , ((safe_mul_func_int8_t_s_s(p_40, (0x922381BD11908866LL > ((safe_add_func_int32_t_s_s((((safe_div_func_uint8_t_u_u(p_39, p_40)) , p_40) && 0xB1L), p_39)) , 18446744073709551608UL)))) <= l_458)))))) , (-3L));
                (*l_391) ^= ((-8L) != ((((safe_unary_minus_func_uint8_t_u(p_39)) != l_458) <= g_88) , 0xE0L));
                (*l_391) = (*l_391);
            }
            else
            {
                unsigned long long l_492 = 0x914C09D5D710E138LL;
                for (l_482 = (-15); (l_482 == 22); l_482 = safe_add_func_uint8_t_u_u(l_482, 8))
                {
                    int **l_485 = &l_391;
                    if (((((p_39 , l_485) != &g_131) <= g_23) > (p_39 , ((*l_391) >= (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((l_457 , (safe_div_func_int64_t_s_s(((g_23 != g_88) , l_492), g_73))) , 0xA506L), 4)), g_252))))))
                    {
                        (**l_485) ^= 0x595C2A0DL;
                        return p_40;
                    }
                    else
                    {
                        int *l_497 = &g_266;
                        if (p_39)
                            break;
                        (*l_497) &= (safe_mul_func_int8_t_s_s((0xE3L ^ (safe_sub_func_uint64_t_u_u((p_39 || p_40), (l_492 & l_457)))), (g_252 == 0UL)));
                        return g_252;
                    }
                }
            }
        }
        (*g_130) = l_498;
    }
    else
    {
        int **l_503 = &l_391;
        short l_527 = 1L;
        for (g_266 = 0; (g_266 != (-15)); g_266--)
        {
            unsigned short l_508 = 0x1C40L;
            int l_520 = 0L;
            int * const *l_534 = &l_391;
            const int *l_547 = (void*)0;
            const int **l_546 = &l_547;
            for (g_116 = 14; (g_116 == 4); g_116 = safe_sub_func_uint8_t_u_u(g_116, 9))
            {
                int ***l_504 = (void*)0;
                int ***l_505 = &l_503;
                (*l_505) = l_503;
                for (l_422 = (-16); (l_422 <= 7); ++l_422)
                {
                    (*g_130) = (*l_503);
                    return l_508;
                }
                if ((p_39 != (safe_sub_func_int8_t_s_s(((~0xB3L) < (func_53((p_39 , (0x8797L > (((safe_div_func_uint16_t_u_u(0xDC1BL, ((func_53((&g_130 != &l_503), p_40, p_39, g_116, p_40) | 0x268D50859C0967E4LL) , g_116))) || 0xA6L) >= (*l_391)))), p_39, p_40, g_88, l_508) <= g_239)), (-3L)))))
                {
                    int *l_513 = (void*)0;
                    int *l_514 = &g_515;
                    (*l_514) |= (((g_252 ^ func_53(((+func_53(func_53(g_88, p_39, (**l_503), p_39, ((1L == g_116) || ((p_40 , ((((p_39 <= p_39) , g_239) ^ 0x796FAB55B46ABAB9LL) || g_23)) > (**l_503)))), g_88, l_508, g_252, (*l_391))) == g_266), p_40, g_239, g_116, p_40)) , g_252) < p_39);
                    return p_40;
                }
                else
                {
                    unsigned l_533 = 18446744073709551615UL;
                    l_520 ^= (safe_lshift_func_int8_t_s_u(((0xB7FC35FCL == (g_73 | (g_239 != (((((***l_505) || p_39) || g_73) , g_252) ^ (((~0x086A9AADA13A7113LL) > p_39) & p_40))))) , g_266), p_39));
                    if ((safe_sub_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((((p_39 & (*l_391)) < func_53((l_527 != (p_39 , ((p_39 > ((safe_add_func_uint8_t_u_u(((p_40 , l_503) != g_530), ((safe_lshift_func_int8_t_s_s(p_40, 2)) , 0xB4L))) , (**l_503))) | p_39))), l_533, p_40, p_39, g_116)) > (*l_391)), 0x5465B901C5379315LL)) != g_88), (*l_391))) , 0xBA5BB6677C5DAA34LL), g_88)))
                    {
                        return p_39;
                    }
                    else
                    {
                        int *l_537 = &g_252;
                        int l_542 = 0x0A5DBACFL;
                        (*l_503) = (**l_505);
                        (**l_503) = ((p_39 , l_534) == ((safe_div_func_int8_t_s_s(((((&g_131 == l_503) , (((void*)0 == l_537) || ((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((p_40 , p_40), func_53((l_542 | g_88), p_39, p_40, p_39, g_252))), 6)) | g_23))) , 0xB6C98046L) , p_39), (**l_503))) , l_534));
                        if (p_40)
                            continue;
                    }
                    (*g_530) = (**l_505);
                }
            }
            for (g_252 = 0; (g_252 < (-26)); g_252 = safe_sub_func_uint8_t_u_u(g_252, 4))
            {
                short l_545 = 1L;
                int **l_548 = &l_391;
                int *l_549 = &l_520;
                int l_559 = 0x0EEBCFCBL;
                l_545 = 0x70C58DDCL;
                (*l_549) &= (((g_23 > p_39) <= func_53((*l_391), g_23, ((((l_546 == (g_73 , l_548)) | 0x6BL) ^ ((**l_503) != 248UL)) || 3L), p_39, g_266)) , p_39);
                l_559 |= func_53(p_39, ((g_515 & (((0xF0L & ((safe_mul_func_int16_t_s_s((func_53(p_40, ((g_23 , (safe_rshift_func_uint16_t_u_u(1UL, ((((safe_sub_func_int64_t_s_s((l_556 != (((l_558 == (*l_556)) ^ g_88) , &g_130)), g_116)) != (*l_549)) == g_266) & 0x901FL)))) != g_23), g_73, (**l_503), g_73) , g_239), g_88)) , g_88)) & 1L) != 18446744073709551608UL)) , (-7L)), (**l_534), (**l_503), p_40);
            }
        }
        (*l_503) = (*l_503);
    }
    for (g_73 = 22; (g_73 > 21); g_73 = safe_sub_func_int8_t_s_s(g_73, 6))
    {
        int l_573 = 0x543435C7L;
        int * const *l_579 = &l_391;
        unsigned l_620 = 0x31EB9630L;
    }
    return g_88;
}







static int func_48(unsigned p_49, const char p_50, unsigned p_51, int p_52)
{
    const unsigned char l_79 = 0x53L;
    int *l_86 = &g_73;
    short l_87 = 0x1C8BL;
    unsigned char l_97 = 0UL;
    int * const *l_163 = &g_131;
    char l_171 = 0xB2L;
    unsigned char l_182 = 247UL;
    long long l_190 = 0x24A0073B97F15FC2LL;
    unsigned l_279 = 7UL;
    const int **l_297 = (void*)0;
    int l_337 = 0L;
    const int *l_362 = &g_73;
    char l_363 = (-1L);
lbl_121:
    g_88 ^= ((l_79 == (safe_div_func_int8_t_s_s((func_53((g_23 || (+((safe_add_func_int64_t_s_s((-1L), g_73)) != ((g_73 , l_86) != (void*)0)))), (3L > (!l_87)), g_23, g_73, g_73) , g_23), 0xE3L))) , 0xBB239257L);
    if (p_52)
    {
        long long l_98 = 0x94B84B6C92F0D9F0LL;
        short l_132 = (-6L);
        int *l_133 = (void*)0;
        unsigned long long l_167 = 1UL;
        (*l_86) = ((safe_mul_func_uint16_t_u_u(5UL, (((*l_86) || 0x28L) == (safe_div_func_int16_t_s_s(0xC885L, ((+0L) && g_88)))))) >= 0L);
        if ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(250UL, ((*l_86) , l_97))) == (*l_86)), (l_98 && (l_98 && g_88)))))
        {
            int *l_99 = (void*)0;
            unsigned char l_152 = 0x44L;
            if ((l_99 == (((safe_div_func_int64_t_s_s(((!p_49) | g_23), (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(((*l_86) ^ p_52), 1)), 7)) != ((((safe_add_func_uint16_t_u_u(g_88, g_88)) , p_52) , g_88) , (-1L))), l_98)))) , (*l_86)) , l_99)))
            {
                long long l_110 = 0x766912E21EF5C255LL;
                unsigned long long l_111 = 0xC27A4A205A567ADBLL;
                (*l_86) = (+l_110);
                g_116 &= func_53(g_73, l_111, ((p_49 , g_88) , g_23), ((safe_add_func_uint64_t_u_u(1UL, (p_50 <= ((safe_mod_func_int32_t_s_s((((*l_86) , 0xDABD6516L) || g_73), g_88)) ^ 0xA26BL)))) | g_88), g_88);
                (*l_86) = (*l_86);
                for (g_116 = 0; (g_116 < 26); g_116++)
                {
                    int **l_119 = &l_99;
                    (*l_119) = &g_73;
                    (**l_119) = (*l_99);
                }
            }
            else
            {
                long long l_120 = 0x19D2B54446D15494LL;
                (*l_86) = l_120;
            }
            if (l_97)
                goto lbl_121;
            (*l_86) &= (0x4F8EFC5DL <= l_98);
            for (l_97 = 8; (l_97 != 38); l_97 = safe_add_func_int16_t_s_s(l_97, 5))
            {
                int *l_124 = &g_73;
                int **l_125 = &l_86;
                short l_160 = 0L;
                char l_180 = 1L;
                int l_213 = 0xF6C0B2D7L;
                (*l_125) = l_124;
            }
        }
        else
        {
            (*g_130) = (void*)0;
            (*l_86) = 0x083EB55CL;
            (*l_86) = 1L;
        }
        if (l_98)
        {
            unsigned char l_226 = 0xB5L;
            int *l_227 = (void*)0;
            (*g_130) = (*g_130);
            (*l_86) = ((p_50 , l_226) <= (l_227 == (void*)0));
        }
        else
        {
            short l_234 = 9L;
            int ***l_242 = &g_130;
            int *l_253 = &g_73;
            (*l_86) = func_53((safe_sub_func_int16_t_s_s((!(g_73 | (safe_sub_func_uint8_t_u_u(0xA8L, (safe_div_func_uint8_t_u_u(p_49, l_234)))))), 0x2894L)), ((*l_86) & (-1L)), (safe_mod_func_int8_t_s_s(p_52, (safe_add_func_uint8_t_u_u(((g_73 < g_239) < 0x5C9A8529L), l_234)))), p_50, g_23);
            for (l_97 = 0; (l_97 < 16); l_97 = safe_add_func_int64_t_s_s(l_97, 2))
            {
                int ***l_243 = &g_130;
                short l_250 = 0x0C40L;
                int *l_251 = &g_252;
                int *l_254 = &g_73;
                (*l_251) ^= (g_23 && ((((l_242 != (g_239 , l_243)) != p_52) < g_23) >= (safe_mod_func_uint32_t_u_u(func_53(g_23, (safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(p_51, (((void*)0 == &l_163) , 6UL))), 7)), g_116, g_116, l_250), g_116))));
                (*l_251) &= (0xF6L < p_52);
                l_253 = (*g_130);
                (*g_130) = l_254;
            }
            (**l_242) = (*g_130);
        }
    }
    else
    {
        int *l_260 = (void*)0;
        int ***l_298 = &g_130;
lbl_318:
        for (l_182 = 5; (l_182 > 12); ++l_182)
        {
            int **l_257 = &l_86;
            int *l_263 = &g_252;
            (*l_86) = p_50;
            (*l_257) = (*l_163);
            (*l_263) &= func_53(((safe_mul_func_int16_t_s_s((**l_257), ((**g_130) > g_23))) >= (**l_257)), g_73, ((l_260 != (*g_130)) , (g_73 != (safe_add_func_uint32_t_u_u((*l_86), 0x78DD2CD6L)))), g_116, p_49);
        }
        if (p_49)
        {
            unsigned l_269 = 0xE94A6969L;
            int **l_301 = &l_260;
            int *l_317 = &g_266;
            for (p_49 = 16; (p_49 == 41); ++p_49)
            {
                char l_278 = 0x30L;
                int *l_288 = &g_252;
                g_266 &= p_51;
                (*g_131) = (((safe_sub_func_uint64_t_u_u(0xA6420E7F856730D7LL, l_269)) < func_53((**l_163), ((safe_mod_func_uint16_t_u_u((g_88 && ((safe_add_func_uint64_t_u_u(((l_269 , 1UL) > (safe_mul_func_int8_t_s_s((p_52 > (p_50 && (safe_div_func_uint64_t_u_u((((((g_73 , l_269) == (*l_86)) == (*l_86)) != p_50) , g_88), g_116)))), g_266))), l_278)) ^ l_279)), g_88)) , p_51), l_269, (*l_86), g_116)) <= g_116);
                (*l_288) ^= ((safe_add_func_int8_t_s_s(0xB8L, (g_23 & 0xD8EFL))) , ((safe_lshift_func_uint16_t_u_s((((p_50 != ((safe_mul_func_int16_t_s_s(p_50, g_73)) , (p_52 || (safe_sub_func_uint64_t_u_u(18446744073709551615UL, l_278))))) & p_49) & 0L), g_266)) != 4294967295UL));
            }
            for (p_49 = 19; (p_49 <= 22); p_49++)
            {
                int **l_291 = &g_131;
                unsigned l_309 = 7UL;
            }
            for (l_87 = 0; (l_87 < (-26)); l_87 = safe_sub_func_int16_t_s_s(l_87, 8))
            {
                (*g_130) = l_317;
                (*l_317) = (*g_131);
                return (*g_131);
            }
        }
        else
        {
            if (g_266)
                goto lbl_318;
        }
        for (l_190 = 18; (l_190 > (-10)); l_190 = safe_sub_func_uint8_t_u_u(l_190, 9))
        {
            if (((g_23 , (**l_163)) & g_23))
            {
                (**l_163) |= p_49;
            }
            else
            {
                for (g_239 = 23; (g_239 <= 19); g_239 = safe_sub_func_uint64_t_u_u(g_239, 1))
                {
                    (*l_86) = p_51;
                    (*g_130) = (*g_130);
                }
                return p_52;
            }
            l_337 |= func_53(p_50, (~g_73), p_50, ((0x1526L && (safe_sub_func_int64_t_s_s(p_49, p_51))) , (safe_rshift_func_int16_t_s_u(((***l_298) < (safe_add_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(g_116, (safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((g_73 | (**l_163)), p_49)), g_252)) == 0x50L), p_52)))) > (-6L)), g_73))), p_49))), g_266);
        }
        for (g_266 = (-9); (g_266 >= (-11)); --g_266)
        {
            unsigned l_347 = 0xB7A6E9C0L;
            if ((**g_130))
                break;
            (*l_86) = (safe_rshift_func_int16_t_s_u((((g_116 >= (safe_unary_minus_func_uint8_t_u((g_88 || ((0x3882DB7AC10FEC88LL == (safe_mul_func_uint8_t_u_u(g_252, ((g_116 > g_88) < (((safe_rshift_func_uint8_t_u_s((&g_131 == ((g_116 | p_50) , (void*)0)), l_347)) , g_23) && p_49))))) > 18446744073709551608UL))))) , g_252) , 0xD8E3L), 12));
        }
    }
    if ((p_49 <= (((safe_lshift_func_uint16_t_u_u(0x2534L, 5)) | func_53((p_52 , (safe_add_func_uint8_t_u_u(p_50, func_53(p_51, ((((safe_mod_func_uint64_t_u_u(p_51, (safe_mod_func_uint32_t_u_u((((((~(((1L ^ (((safe_mod_func_uint8_t_u_u(p_52, (func_53((((((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(p_52, 0xE6F3L)) && g_252), 65535UL)) , (*l_163)) != l_362) , g_252) , p_50), p_52, (*l_86), p_52, p_50) , 0x96L))) && p_49) <= p_51)) | 0x4AL) ^ g_266)) > p_51) , p_50) ^ p_49) & 0x42E82D893DD203B5LL), g_239)))) ^ (-1L)) > p_52) != l_363), p_52, g_88, p_51)))), p_49, p_51, g_252, g_252)) | 0x927EDBBFL)))
    {
        int *l_366 = &g_252;
        long long l_370 = 0x5693799B5AA44495LL;
        for (g_252 = 0; (g_252 <= 25); g_252 = safe_add_func_uint64_t_u_u(g_252, 2))
        {
            unsigned l_367 = 0x5F9A831CL;
            int l_379 = 0x408FA734L;
            (*g_130) = l_366;
            (*g_130) = (*g_130);
            if ((*l_362))
                break;
            l_379 = (((l_367 < (safe_add_func_uint32_t_u_u((0x8CE2EFB70481B8D0LL != ((*l_86) && ((func_53(l_370, (safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((p_52 <= (*l_86)) >= p_50), 1L)), (safe_add_func_uint8_t_u_u((*l_366), 1L)))), 0x138A96B6L)), p_51, g_23, p_50) , g_266) && p_50))), 0x58C2DD40L))) > g_88) || 255UL);
        }
    }
    else
    {
        return p_50;
    }
    for (g_266 = 0; (g_266 == (-13)); g_266--)
    {
        int l_390 = 0x43CEBE81L;
        for (l_279 = 6; (l_279 < 17); l_279 = safe_add_func_uint64_t_u_u(l_279, 4))
        {
            if (p_52)
                break;
        }
        (*l_86) = (((g_73 != (((safe_lshift_func_int16_t_s_s((3L > p_49), 6)) | 0x22L) , p_49)) || (0UL != (safe_lshift_func_uint8_t_u_s((0UL <= l_390), 7)))) ^ ((65530UL < p_51) < 0UL));
        if (p_49)
            continue;
    }
    return p_49;
}







static unsigned func_53(unsigned p_54, char p_55, const char p_56, unsigned long long p_57, unsigned p_58)
{
    long long l_71 = 0xBDD1892F88B3176ALL;
    int *l_72 = &g_73;
    int l_76 = 0x4CA00AF4L;
    (*l_72) = ((safe_lshift_func_int16_t_s_u((6L <= 65527UL), 8)) >= l_71);
    (*l_72) = (((*l_72) || (((((((*l_72) < ((-6L) < (p_55 || g_23))) ^ p_57) < (p_56 != ((((g_23 ^ (((l_72 != (void*)0) , g_23) , l_76)) , (void*)0) != &l_76) == (*l_72)))) > 0x4AL) , g_23) <= p_54)) , 0L);
    (*l_72) = (safe_sub_func_int32_t_s_s((*l_72), (*l_72)));
    (*l_72) = 0L;
    return (*l_72);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_913, "g_913", print_hash_value);
    transparent_crc(g_1184, "g_1184", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
