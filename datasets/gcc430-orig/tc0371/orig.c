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
   unsigned short f0;
   int f1;
};


static const unsigned char g_12 = 255UL;
static unsigned char g_62 = 0xD1L;
static unsigned g_66 = 1UL;
static struct S0 g_67 = {0xAEC7L,0x5175D1B3L};
static unsigned char g_77 = 0UL;
static char g_82 = 0x42L;
static unsigned g_98 = 0x7037A9E2L;
static int g_108 = 0xD2C86D4CL;
static int g_110 = 1L;
static unsigned char g_111 = 252UL;
static unsigned char g_147 = 253UL;
static struct S0 g_150 = {0x9FD8L,-1L};
static int g_153 = 0xF7CCAC8DL;
static unsigned g_155 = 0xAC6A9737L;
static unsigned char g_161 = 3UL;
static unsigned char g_170 = 9UL;
static unsigned g_200 = 0xC76D5697L;
static unsigned g_205 = 4294967295UL;
static char g_240 = (-2L);
static int g_241 = 0x0C5CD07EL;
static unsigned g_242 = 0x69C13BACL;
static short g_317 = (-6L);
static int g_361 = (-1L);
static unsigned char g_364 = 0xEAL;
static unsigned char g_384 = 0xD3L;
static unsigned short g_396 = 0x3703L;
static unsigned g_425 = 0x5CBC03E0L;
static const short g_435 = (-1L);
static int g_516 = 0x79EEF4E1L;
static unsigned g_520 = 1UL;
static short g_574 = (-6L);
static unsigned char g_607 = 0x2BL;
static char g_695 = 5L;
static int g_696 = 0x1B80C791L;
static unsigned short g_697 = 65526UL;
static int g_798 = (-4L);
static int g_801 = (-5L);
static int g_803 = (-1L);
static unsigned char g_804 = 0UL;
static int g_817 = 0x91E0D076L;
static char g_819 = 0L;
static unsigned g_822 = 4294967291UL;
static struct S0 g_861 = {0x7780L,0L};
static const unsigned char g_904 = 1UL;
static short g_938 = (-6L);
static int g_1006 = 0xAB1A014BL;
static unsigned char g_1013 = 0xBAL;
static unsigned short g_1026 = 0x41F0L;
static const unsigned g_1032 = 0x2487FB9FL;
static unsigned g_1052 = 0x9AFAE8C9L;
static unsigned char g_1167 = 1UL;
static unsigned char g_1173 = 251UL;



static int func_1(void);
static struct S0 func_2(const unsigned p_3, const int p_4, short p_5, unsigned p_6);
static struct S0 func_7(const int p_8, char p_9, const unsigned p_10, const int p_11);
static char func_13(unsigned p_14, unsigned short p_15, int p_16);
static int func_17(int p_18, int p_19, short p_20);
static const unsigned short func_21(int p_22, unsigned p_23, unsigned p_24, unsigned p_25);
static unsigned char func_28(const unsigned char p_29, const int p_30);
static char func_36(const int p_37, unsigned short p_38, struct S0 p_39);
static unsigned char func_41(unsigned p_42, unsigned p_43);
static int func_53(unsigned short p_54);
static int func_1(void)
{
    unsigned char l_33 = 0x5FL;
    unsigned short l_44 = 65535UL;
    int l_45 = 2L;
    struct S0 l_99 = {0x8572L,-1L};
    int l_426 = (-1L);
    int l_1170 = 0x2BDC2B8DL;
    int l_1171 = (-9L);
    int l_1172 = 0x8A4B1CEDL;
    l_99 = func_2(((func_7((~0xA3C0BF90L), (g_12 , func_13((func_17(g_12, (((g_12 || func_21((safe_mod_func_int8_t_s_s(((l_99.f1 = func_28((((safe_rshift_func_int8_t_s_u(((l_33 , l_33) != (safe_rshift_func_int8_t_s_s(func_36(l_33, ((safe_unary_minus_func_int8_t_s((func_41(l_33, (l_45 = (((l_44 , g_12) >= g_12) > g_12))) , g_62))) != l_33), l_99), g_82))), l_33)) <= 0xB7L) , 0xACL), g_12)) , 0x7EL), 247UL)), l_99.f0, g_82, l_33)) ^ 6L) , (-9L)), g_200) , l_33), g_384, l_426)), g_200, l_99.f0) , l_426) && l_99.f0), l_44, l_44, g_574);
    g_150.f1 ^= g_1006;
    l_45 = 0xC07EF2A0L;
    g_1173++;
    return l_1172;
}







static struct S0 func_2(const unsigned p_3, const int p_4, short p_5, unsigned p_6)
{
    short l_829 = 3L;
    struct S0 l_830 = {0xA257L,-1L};
    int l_831 = 6L;
    int l_834 = 0xE685B41DL;
    short l_844 = 0xD273L;
    const unsigned l_852 = 4294967295UL;
    struct S0 l_853 = {0xB31BL,-8L};
    unsigned short l_860 = 1UL;
    const unsigned l_905 = 0xE871E28DL;
    short l_942 = 0L;
    int l_974 = 0xBE3BB083L;
    int l_1004 = (-4L);
    int l_1007 = (-4L);
    int l_1024 = (-9L);
    int l_1025 = 0x94C92092L;
    int l_1058 = 0x303FC084L;
    unsigned l_1073 = 0xAED786ECL;
    struct S0 l_1112 = {0UL,0x3B650254L};
    int l_1163 = 1L;
    g_798 = ((func_17((((g_817 , 0xA549D666L) , ((safe_add_func_int8_t_s_s((-1L), p_6)) == ((g_384 | g_798) > ((l_831 &= ((((func_21(g_822, l_829, (l_830 , g_62), l_830.f1) && g_147) <= g_520) & l_830.f1) > p_6)) & p_5)))) < g_435), l_829, p_6) != 253UL) < p_4);
    l_831 = (g_516 = l_830.f1);
    if (((l_834 = (((g_317 = l_830.f1) && (safe_lshift_func_uint8_t_u_s(l_830.f1, 1))) || ((((((((g_819 = (func_17((((p_6 >= (l_830.f1 = (p_4 || (((l_831 = p_5) < func_21(g_150.f0, g_161, (0x71F1L & ((g_317 >= l_830.f1) | l_830.f1)), l_830.f1)) & 0x00L)))) | 0xA123L) && g_110), g_697, p_4) | 0x96E2L)) , p_6) && g_425) >= p_3) && l_830.f0) >= 0UL) , 0x36A0L) != 2UL))) , l_830.f1))
    {
        return l_830;
    }
    else
    {
        struct S0 l_839 = {1UL,-4L};
        unsigned l_903 = 0x5DD5FBA7L;
        int l_973 = 0xE00236CEL;
        int l_976 = 0xBA2A9DB8L;
        unsigned short l_977 = 0xE047L;
        char l_982 = 1L;
        unsigned l_987 = 0x2F3177EFL;
        char l_1002 = (-9L);
        char l_1003 = (-1L);
        int l_1005 = 0L;
        int l_1008 = 0xB214D1D7L;
        int l_1011 = 0x440B8293L;
        int l_1012 = 0L;
        unsigned l_1029 = 0x9D286130L;
        char l_1124 = 0x84L;
        unsigned short l_1129 = 0xE94EL;
        for (g_317 = 0; (g_317 > 7); g_317++)
        {
            for (g_240 = 0; (g_240 > 2); ++g_240)
            {
                l_830 = l_839;
            }
            if (g_801)
                break;
        }
        if (((safe_rshift_func_int16_t_s_s(((65534UL & (l_839.f1 = (safe_sub_func_uint16_t_u_u(l_844, ((safe_unary_minus_func_int16_t_s(g_12)) && func_21((((((((((0xF861L && p_5) , ((g_804 ^= (safe_add_func_int16_t_s_s((((func_21((func_36((l_830.f1 |= (safe_sub_func_uint32_t_u_u(g_241, (g_82 > (safe_add_func_int8_t_s_s((l_839.f1 > (0xEF620961L <= g_696)), l_852)))))), p_5, l_853) > (-10L)), p_3, p_5, g_574) & 0L) >= 0xECF9B499L) | p_4), g_384))) , p_4)) , l_839.f0) > 0x23L) >= p_5) || 0xB6376076L) || l_839.f1) >= p_3) , g_62), l_834, g_817, g_607)))))) , p_5), 10)) && g_67.f0))
        {
            char l_856 = 1L;
            int l_857 = 0x3C100CEBL;
            g_861 = func_7(g_396, (((l_857 = ((safe_sub_func_uint16_t_u_u(g_155, p_6)) , l_856)) | 0xBFB565B3L) , (safe_lshift_func_int16_t_s_u((l_830.f1 = (l_839.f1 = (((((g_150.f0 , (func_41((p_6 = func_21(p_3, ((g_396 <= (g_150.f1 = ((l_857 ^= (g_804 || g_607)) == l_834))) ^ l_856), g_607, l_856)), l_860) < p_3)) , l_830.f0) <= (-1L)) , g_803) < g_384))), 7))), g_516, g_520);
            return l_839;
        }
        else
        {
            const unsigned short l_870 = 0x5A75L;
            const unsigned l_901 = 0x1997BFC8L;
            unsigned char l_902 = 255UL;
            char l_906 = 0x5BL;
            short l_907 = 1L;
            int l_968 = (-1L);
            struct S0 l_972 = {0x86E2L,1L};
            int l_1010 = (-1L);
            int l_1018 = 0x1FFB5C3EL;
            int l_1019 = 0x998F1688L;
            int l_1020 = 0x9AA6FEFEL;
            int l_1023 = 6L;
            unsigned l_1034 = 2UL;
            if ((p_4 , ((g_66 >= p_3) == ((((safe_sub_func_uint32_t_u_u(p_5, g_111)) <= ((safe_mod_func_int32_t_s_s(l_860, (p_5 | (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(((g_819 , l_870) < 0x6F12E969L), 0xE316L)), g_242))))) || p_5)) && g_108) && p_3))))
            {
                char l_889 = 0x1AL;
                char l_900 = 0x43L;
                int l_924 = 2L;
                if (func_53((p_3 ^ func_21(func_41((func_36((func_7(g_66, ((((safe_sub_func_uint8_t_u_u(((((g_82 < (((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((p_4 ^ (safe_sub_func_uint8_t_u_u(((((((safe_lshift_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_s((l_889 && ((safe_add_func_int32_t_s_s(l_889, (safe_add_func_uint8_t_u_u(0x8CL, l_839.f1)))) == func_28((++g_607), (safe_add_func_int32_t_s_s((g_861.f1 = (l_900 = (((((g_147 = (((safe_add_func_int32_t_s_s(l_870, 0xADB89267L)) >= p_6) < l_889)) || l_889) > p_4) != g_98) > 0x8AC7B02FL))), p_3))))), g_241)) == g_82) & g_396) , l_901) & l_902), p_4)) == 0xBAC08165L) , l_839.f1) , l_900) , g_82) == p_5), l_903))) , p_6), p_6)), p_5)), g_904)), 4)) && g_819) || l_903)) & 0L) & 0xB95FL) | g_697), 0x11L)) == l_839.f0) > l_889) != l_889), l_905, g_66) , p_4), l_889, l_853) && g_150.f0), p_3), l_901, p_4, l_901))))
                {
                    unsigned short l_908 = 0UL;
                    int l_923 = 1L;
                    struct S0 l_943 = {0UL,-8L};
                    ++l_908;
                    if ((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_3, g_822)), 7)) != (safe_sub_func_int16_t_s_s(func_28((safe_add_func_int8_t_s_s(((((g_520 = (safe_sub_func_int16_t_s_s((g_66 || (((((g_317 , ((l_923 = 0xB317E62FL) ^ func_28(l_905, p_5))) , l_905) > l_889) && 0xDDL) ^ l_924)), l_853.f0))) < g_425) != g_861.f0) , p_3), g_200)), p_6), g_574))), g_574)))
                    {
                        unsigned short l_939 = 0xAA76L;
                        l_839.f1 = ((func_53(p_3) ^ (l_923 = ((((safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_u((~g_803), 5)))) & (-2L)) && (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(g_82, 1UL)) , ((g_938 = (safe_sub_func_uint16_t_u_u(p_4, (((safe_lshift_func_int16_t_s_u(((p_5 <= (safe_sub_func_int16_t_s_s(0x73AEL, p_5))) , (-3L)), g_98)) | l_839.f1) , l_831)))) , 0x2799L)), l_939))) & p_5))) || g_520);
                    }
                    else
                    {
                        int l_957 = 0x0322000EL;
                        g_150.f1 |= (255UL | (g_205 & (l_957 = ((safe_sub_func_int32_t_s_s((l_942 < (l_943 , (safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_839.f1, ((safe_unary_minus_func_uint8_t_u(((~8UL) & (safe_add_func_uint8_t_u_u(g_861.f0, (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_3, (((~(l_943.f1 &= g_317)) ^ 0x16B1A82EL) ^ (-6L)))), 3UL))))))) == 255UL))), l_900)) >= p_4), 0x8298L)))), p_3)) & p_6))));
                        g_803 ^= ((l_831 |= (((0x7A8EL >= (safe_mod_func_uint16_t_u_u(((((((g_822 , (((l_839.f1 || 4294967295UL) == (safe_mod_func_uint8_t_u_u(((+(safe_mod_func_uint16_t_u_u((l_923 = func_28(l_889, g_150.f1)), (p_3 , (safe_add_func_int8_t_s_s((p_4 > g_574), p_3)))))) < g_161), l_906))) <= 4L)) != 65527UL) , l_957) != p_6) , 65535UL) != p_4), p_6))) != 0x9BL) , g_200)) , g_205);
                        return l_839;
                    }
                }
                else
                {
                    for (g_317 = 0; (g_317 <= (-23)); g_317 = safe_sub_func_int8_t_s_s(g_317, 1))
                    {
                        l_968 = p_3;
                    }
                }
            }
            else
            {
                unsigned l_969 = 1UL;
                int l_975 = 4L;
                l_969++;
                l_839.f1 = (l_972 , ((g_520 == 0x9F005A3BL) , (l_968 = g_67.f1)));
                --l_977;
                l_831 = (0x689A91ECL & ((l_975 = g_819) && func_13(p_4, (safe_rshift_func_int8_t_s_u((((l_982 || l_903) | g_62) & (p_5 == (l_969 != g_938))), l_942)), p_3)));
            }
            for (l_974 = (-25); (l_974 == 10); l_974++)
            {
                --l_987;
            }
            g_150 = l_972;
            if (((g_98 , p_5) , (safe_mod_func_int32_t_s_s((((g_67.f0 > (safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((p_5 &= l_1002), 1)), (g_150.f0 = ((g_861 = l_853) , (l_831 &= (l_968 = p_4)))))), 0x77F7L)) & ((((p_3 ^ (p_6 != p_3)) != g_150.f1) < g_803) == 0x1C1DE216L)) ^ p_6), 0x776108DCL)) & (-1L)), 0x8E412178L))) , 1L) > g_67.f1), 3L))))
            {
                char l_1009 = 1L;
                int l_1016 = 0x8E23A76BL;
                int l_1017 = 0L;
                int l_1021 = 0L;
                int l_1022 = 0x68A8D662L;
                ++g_1013;
                l_974 = (0x40L ^ 255UL);
                --g_1026;
                l_839 = func_7((l_1029 & func_41(p_5, ((p_6 , p_4) , g_110))), (g_425 | ((l_973 || ((safe_lshift_func_uint8_t_u_u(g_822, l_907)) , g_12)) <= p_6)), g_153, g_1032);
            }
            else
            {
                int l_1033 = 0x5405E8D7L;
                unsigned short l_1037 = 0UL;
                int l_1065 = 0xF2820B87L;
                short l_1132 = 0xD52EL;
                if ((l_1012 = ((l_834 = (-1L)) != p_4)))
                {
                    l_1005 = p_6;
                    g_861.f1 = (l_977 > l_839.f0);
                }
                else
                {
                    char l_1042 = 0x1BL;
                    l_1033 |= (p_3 > l_1018);
                    g_798 = l_1034;
                    if ((func_41((l_1005 ^= (g_361 , ((safe_lshift_func_uint16_t_u_u(g_803, l_1037)) || (((++g_67.f0) != l_844) , func_28((safe_mod_func_uint16_t_u_u((l_1042 == l_1042), (p_3 , (((safe_lshift_func_uint8_t_u_u((4294967295UL && (((p_5 == p_5) , 0L) & p_5)), p_6)) != p_4) , 0x531EL)))), p_3))))), p_6) != g_205))
                    {
                        l_1019 &= g_803;
                    }
                    else
                    {
                        l_972 = l_830;
                    }
                }
                if (p_5)
                {
                    unsigned l_1047 = 0x1B4FD063L;
                    struct S0 l_1057 = {65526UL,0x3B18B4A7L};
                    int l_1097 = 0L;
                    int l_1098 = (-4L);
                    int l_1099 = 0x3FE1B701L;
                    int l_1100 = 0x76BBB645L;
                    unsigned char l_1101 = 0UL;
                    for (l_853.f0 = 12; (l_853.f0 <= 48); l_853.f0++)
                    {
                        unsigned char l_1061 = 3UL;
                        int l_1064 = 0x7909804EL;
                        --l_1047;
                        if (p_3)
                            break;
                        g_801 = (l_1005 ^= ((l_972.f1 , (g_241 , (-5L))) , ((((safe_add_func_uint16_t_u_u((g_1052 ^= p_6), ((safe_rshift_func_int8_t_s_u((func_28((l_1033 != (((-2L) >= (((safe_rshift_func_int16_t_s_s(0x9B76L, 0)) > (((l_1024 |= p_6) , (((l_1057 = g_861) , p_6) == (-6L))) ^ p_5)) > l_1058)) && p_6)), p_6) != g_435), 1)) > 0x8899L))) != l_1010) & g_240) == 0xF44DC442L)));
                        g_801 = (0UL >= ((p_3 < g_798) > (l_1065 = ((((0x00L != 3UL) > (safe_add_func_int16_t_s_s(g_607, l_1061))) | p_4) == (((((l_1064 = ((safe_lshift_func_int8_t_s_u(g_696, l_982)) , (-7L))) <= p_3) | g_574) > g_425) >= l_1034)))));
                    }
                    for (g_822 = 0; (g_822 == 32); ++g_822)
                    {
                        unsigned l_1068 = 4294967295UL;
                        l_1068--;
                        g_67.f1 = ((safe_rshift_func_int16_t_s_s(g_695, (l_1073 ^ (((l_1057.f1 & (0xDDL <= p_3)) <= (safe_lshift_func_uint16_t_u_s((l_1005 || ((l_1025 && (safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(p_5, 0xD3077710L)), 3))) | g_803)), g_938))) & 5L)))) != g_520);
                        g_696 = l_1023;
                    }
                    for (l_1057.f0 = 21; (l_1057.f0 != 8); --l_1057.f0)
                    {
                        struct S0 l_1096 = {0x8358L,1L};
                        g_803 = ((g_804--) , (g_155 != func_41((0x1FA0L >= (l_1057.f0 == (((safe_add_func_uint16_t_u_u((((l_831 = func_13((g_520 = ((safe_mod_func_int16_t_s_s(g_150.f1, ((g_77 && func_36(((l_1018 = ((safe_mod_func_uint16_t_u_u(p_5, g_161)) & (safe_mod_func_uint32_t_u_u((++g_98), (safe_rshift_func_int8_t_s_u(0x38L, p_6)))))) != p_4), p_6, l_1096)) && 5UL))) , g_147)), p_3, g_938)) > g_153) ^ p_5), p_5)) ^ 0x60699EF3L) > p_4))), p_4)));
                    }
                    l_1101--;
                }
                else
                {
                    struct S0 l_1113 = {65532UL,9L};
                    l_1065 = (safe_sub_func_int8_t_s_s(func_41((l_942 <= ((p_6 == ((g_361 , l_1008) < (safe_mod_func_int16_t_s_s(((p_3 >= ((0x8F30EB41L < ((func_28((g_396 , 251UL), ((safe_rshift_func_int8_t_s_u(((((!(0L == 0x8630F5FCL)) > p_4) && 0x3BL) != p_5), p_4)) , g_361)) && l_1018) | l_1010)) == g_520)) ^ 65531UL), g_200)))) >= l_1037)), p_4), l_831));
                    for (l_942 = 0; (l_942 == (-9)); l_942 = safe_sub_func_uint32_t_u_u(l_942, 6))
                    {
                        l_1112 = l_839;
                        return l_1113;
                    }
                }
                l_972.f1 &= (l_973 &= (((safe_add_func_int32_t_s_s(func_13(((((((7L > (((g_153 = l_1065) < (func_28(p_3, (safe_rshift_func_int16_t_s_s((0L > g_200), p_6))) , ((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((p_6 , (1L | 0x6D7EL)), g_516)), 0UL)), p_6)) < 0UL))) == 0x94AE73DBL)) > p_5) == g_361) , 0xE9F1L) <= l_976) < l_1124), l_1005, l_942), g_520)) == 0x0289L) != 1L));
                l_1065 = (safe_lshift_func_int8_t_s_u(((((++g_520) ^ (((g_804 &= (((l_1132 = func_17(l_907, ((func_21(l_1129, l_1023, l_907, (0xD570L && (safe_add_func_int32_t_s_s((func_13(g_1052, p_5, g_801) ^ p_5), g_516)))) , 0x78AB35B3L) > l_1058), l_974)) || 9L) | 0x9A51L)) & p_4) != 5L)) , g_205) || p_3), p_6));
            }
        }
        g_861 = (l_839 = g_861);
        for (g_108 = 0; (g_108 > (-17)); --g_108)
        {
            int l_1149 = 6L;
            int l_1158 = (-1L);
            int l_1159 = 3L;
            int l_1160 = 1L;
            int l_1161 = 0L;
            int l_1162 = 0xC2AE47B5L;
            int l_1164 = 0L;
            int l_1165 = 0L;
            int l_1166 = 0x46F72876L;
            l_1149 = ((l_1012 = (0x3E14311DL != (p_3 >= (safe_mod_func_uint16_t_u_u(p_5, (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((p_4 >= 0xE4L), 7)), ((safe_lshift_func_uint16_t_u_u(p_5, 11)) , (p_5 && (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(l_1012, g_242)) == p_5), 9)), p_5))))))))))) | 2L);
            l_1012 &= (((safe_sub_func_uint32_t_u_u((l_853 , g_205), 0UL)) >= (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((l_1025 &= ((g_62 != p_6) ^ ((safe_rshift_func_uint8_t_u_s(255UL, 5)) != g_1006))) | (p_6 ^ g_904)), l_1005)) | l_1149), g_1013))) , g_200);
            --g_1167;
        }
    }
    return l_1112;
}







static struct S0 func_7(const int p_8, char p_9, const unsigned p_10, const int p_11)
{
    char l_457 = 1L;
    unsigned l_462 = 0xA3A50FD0L;
    int l_467 = 0xC7A78D93L;
    struct S0 l_488 = {0x90BDL,0xADCC1025L};
    unsigned char l_526 = 0x55L;
    unsigned short l_527 = 0xFAAFL;
    unsigned short l_562 = 65535UL;
    char l_575 = 0x91L;
    int l_665 = 0L;
    if (((l_457 = ((func_41(p_11, p_11) , p_8) <= (g_361 , 0xDBB70BC0L))) , (((~p_10) && g_155) , p_10)))
    {
        unsigned char l_463 = 0UL;
        const int l_466 = 0x70D60FB6L;
        l_467 = ((safe_mod_func_int32_t_s_s(((p_9 = func_17(g_161, p_8, func_28((0x5E6DL > (l_463 &= (safe_rshift_func_int16_t_s_s(g_67.f0, l_462)))), l_457))) <= (safe_add_func_uint32_t_u_u(l_466, g_12))), g_384)) & l_466);
        g_153 &= (g_150.f1 ^ l_462);
    }
    else
    {
        unsigned short l_472 = 65535UL;
        int l_487 = 3L;
        struct S0 l_489 = {65528UL,0x9333FC29L};
        struct S0 l_523 = {0x73D2L,0L};
        char l_569 = 0xA9L;
        unsigned l_649 = 0UL;
        struct S0 l_756 = {65533UL,0x559C813AL};
        unsigned char l_765 = 8UL;
        int l_802 = 0L;
        if ((((safe_lshift_func_int8_t_s_u(g_205, 6)) , g_425) == (safe_lshift_func_int16_t_s_s(l_472, (p_9 >= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((g_396 ^= (func_13((safe_lshift_func_int16_t_s_u(0xDF59L, p_10)), ((255UL ^ (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s((((l_487 = ((safe_rshift_func_uint16_t_u_u(func_28(l_457, ((safe_rshift_func_int16_t_s_u((l_467 = l_462), 7)) > l_472)), p_10)) , (-1L))) != 0xE537L) == l_472), 13)) | 0xA53EL), l_472))) , 0x01D7L), g_240) & g_12)) > 0x50CBL) , 1L), 1)), p_10)) & p_8))))))
        {
            unsigned char l_495 = 3UL;
            int l_519 = (-6L);
            struct S0 l_522 = {1UL,-1L};
            l_489 = l_488;
            for (l_489.f1 = 5; (l_489.f1 == 20); ++l_489.f1)
            {
                unsigned short l_494 = 0x4415L;
                int l_506 = 0x184F10F6L;
                l_506 = ((safe_mul_func_uint16_t_u_u(l_494, (!((l_487 = l_495) | func_21((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s(g_66, (safe_sub_func_uint8_t_u_u(1UL, 0xDEL)))) & 8UL), (safe_mod_func_int8_t_s_s(g_241, func_13((l_489.f1 & (l_495 > l_494)), g_98, p_11))))) < 0xCFL) < 0x7084429EL), p_11)), l_488.f0, g_147, g_82))))) <= l_488.f1);
                for (g_364 = (-27); (g_364 != 59); g_364++)
                {
                    const short l_511 = 0x0EE6L;
                    int l_521 = 0L;
                    l_521 = ((func_41(p_10, ((safe_rshift_func_int8_t_s_s(((func_36((l_519 = func_36(l_511, (((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_10, (g_317 = g_516))), 6)) != g_82) != (safe_lshift_func_int8_t_s_u((g_425 ^ l_488.f1), p_10))), g_150)), l_511, g_150) == g_435) < l_488.f0), 1)) , 0UL)) & 9UL) == g_520);
                    l_506 = (-1L);
                    l_523 = (l_522 = l_488);
                    l_488.f1 = func_41(g_161, g_364);
                }
            }
            l_526 |= ((p_10 > (safe_add_func_uint16_t_u_u((func_53(p_9) <= g_150.f0), g_241))) >= (l_495 , l_488.f0));
            l_527++;
        }
        else
        {
            int l_541 = 0xDF106D7DL;
            int l_585 = (-4L);
            int l_586 = (-1L);
            char l_602 = (-9L);
            for (g_111 = 0; (g_111 == 51); g_111 = safe_add_func_int32_t_s_s(g_111, 8))
            {
                short l_532 = 0x50F5L;
                int l_535 = (-2L);
                struct S0 l_540 = {65530UL,0x62AD116BL};
                unsigned l_589 = 7UL;
                l_532 = 0L;
                if ((safe_sub_func_uint8_t_u_u((l_535 = (l_467 = 1UL)), (p_9 != (safe_lshift_func_uint8_t_u_u(g_82, 3))))))
                {
                    for (l_523.f1 = 0; (l_523.f1 >= (-28)); l_523.f1 = safe_sub_func_uint16_t_u_u(l_523.f1, 6))
                    {
                        g_67 = g_67;
                        l_488 = l_540;
                        l_541 = g_108;
                    }
                }
                else
                {
                    struct S0 l_554 = {0x71EAL,1L};
                    unsigned short l_618 = 65535UL;
                    for (g_317 = 0; (g_317 != (-17)); --g_317)
                    {
                        short l_555 = 0x50FFL;
                        int l_576 = 0xBB0ECB0DL;
                        l_523.f1 &= (((g_62 != g_361) || (safe_mod_func_uint32_t_u_u(((func_41((safe_mod_func_int32_t_s_s(l_467, (safe_lshift_func_uint16_t_u_s(func_53(p_8), 1)))), g_150.f1) >= (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((((l_554 , l_554.f0) , l_555) == l_527), 0L)), 6))) & 246UL), g_520))) | 1L);
                        l_576 |= (l_523.f1 = (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((((p_11 , ((safe_rshift_func_int16_t_s_u(l_562, 7)) ^ (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((g_396 = l_540.f1), g_435)), (safe_sub_func_int32_t_s_s(func_41((p_9 || ((p_8 != l_569) <= (safe_mod_func_uint8_t_u_u(((l_535 = (((+func_41((safe_rshift_func_int16_t_s_u((0UL || (l_462 , p_9)), l_541)), l_532)) ^ g_110) & g_110)) && (-1L)), 3L)))), g_574), 1UL)))))) || g_240) == 0x42L) <= p_10), 0)) < l_575), p_9)));
                        if (p_10)
                            continue;
                    }
                    g_108 = (((g_82 |= (g_240 |= 0x94L)) != (safe_rshift_func_uint16_t_u_s((p_11 <= l_541), 8))) == p_9);
                    if (((func_53((l_488.f1 |= (l_540.f1 = g_200))) > g_108) && (safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((g_240 |= func_41((g_205 &= (g_200--)), p_9)), (p_10 && 1L))) >= (l_541 , l_589)), g_155)) , l_554.f1) && 0L), l_554.f0))))
                    {
                        int l_616 = 8L;
                        int l_617 = 0x2C53623DL;
                        l_554.f1 = (((safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((g_574 , g_384), (safe_add_func_uint32_t_u_u(l_585, ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((((l_602 = p_8) < (safe_add_func_uint8_t_u_u((g_364 &= (safe_add_func_int32_t_s_s(g_607, ((safe_lshift_func_int16_t_s_u(g_82, 6)) >= ((((((l_586 ^= g_62) > (safe_rshift_func_uint16_t_u_u(l_540.f1, (l_616 = ((l_487 = ((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(247UL, p_8)) >= 0xF17FL), g_205)) && l_541)) & p_10))))) != 0x33BFE98FL) <= 255UL) | p_11) >= 0x8ACE0949L))))), g_67.f0))) == p_10) == l_554.f1), g_82)), 65526UL)), 1)) < p_11))))) > p_10), l_617)) || l_618) || g_384);
                        l_616 &= 0xE1B13DF5L;
                    }
                    else
                    {
                        if (p_8)
                            break;
                    }
                    for (l_602 = 0; (l_602 == (-21)); l_602 = safe_sub_func_uint16_t_u_u(l_602, 1))
                    {
                        int l_625 = 0x80312BF4L;
                        short l_638 = 0x8775L;
                        int l_639 = 0L;
                        unsigned l_646 = 0xE72AA353L;
                        l_540.f1 = (-1L);
                        l_488.f1 &= ((g_516 = (safe_rshift_func_uint16_t_u_s(func_41(l_562, (p_11 | (((l_540.f1 = ((((-1L) < (l_639 &= (safe_mod_func_int8_t_s_s((5UL < (l_625 = g_150.f1)), (safe_rshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(p_8, (g_82 |= ((g_520 = 0x7A64AF95L) > ((safe_rshift_func_int8_t_s_u(((g_425 >= (safe_add_func_uint32_t_u_u((--g_98), (safe_sub_func_uint16_t_u_u(g_150.f0, l_638))))) != p_9), 0)) | l_602))))) & p_9), g_12)))))) != 0x43L) , 0UL)) == g_361) != 0xC09CL))), 2))) & (-1L));
                        g_150 = g_150;
                        l_639 &= (safe_sub_func_uint32_t_u_u(func_41((l_489.f1 = func_53(p_11)), (safe_rshift_func_int8_t_s_s((l_467 = ((safe_add_func_uint16_t_u_u((((((p_10 >= 0x2C44L) ^ (l_646 >= 0xA1BAD50AL)) | 255UL) < (~(safe_sub_func_uint8_t_u_u(p_10, ((l_618 ^ l_457) | p_10))))) , l_585), p_11)) , p_11)), 6))), g_150.f0));
                    }
                }
            }
            l_489.f1 = (l_586 = g_155);
            l_585 = g_67.f1;
        }
        if (func_41(((l_649 && (p_8 | (safe_add_func_uint32_t_u_u((l_488.f1 = func_28(func_17(l_487, (((safe_lshift_func_int16_t_s_s((p_8 <= (((safe_rshift_func_int8_t_s_s(0xDFL, (p_9 = (safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((g_317 |= (safe_sub_func_int32_t_s_s((l_467 = (((0x71L > (((p_10 & (p_8 > (safe_mod_func_int8_t_s_s((!g_205), 255UL)))) , l_462) || 0x312FD2C4L)) || p_10) | p_11)), 0xFF417F48L))))), g_364)) , g_364), p_9))))) < p_8) >= l_523.f1)), 9)) <= l_665) >= p_11), p_11), l_526)), l_649)))) >= g_520), g_241))
        {
            char l_666 = 0xB1L;
            int l_672 = 0x7FFD1B1BL;
            int l_686 = 3L;
            int l_687 = 0xC72EE0D2L;
            int l_690 = 1L;
            struct S0 l_707 = {65528UL,9L};
            char l_710 = 3L;
            struct S0 l_721 = {65530UL,0xCCEE2226L};
            char l_736 = 0L;
            unsigned l_743 = 0UL;
            if ((!func_17(l_666, g_205, l_666)))
            {
                short l_671 = 0xE44CL;
                struct S0 l_676 = {65534UL,0x9296549DL};
                int l_688 = 0x271B03E5L;
                int l_694 = (-1L);
                int l_717 = 0x78B5A455L;
                unsigned l_737 = 0xB901B80EL;
                if (((g_240 ^= (safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((l_672 = (func_41(p_10, l_527) | (g_200 < (p_8 >= ((l_671 |= 0xD42AL) | g_396))))), p_8)) | (l_472 | p_11)), l_462))) && l_666))
                {
                    unsigned short l_673 = 0UL;
                    int l_685 = 6L;
                    int l_689 = 2L;
                    struct S0 l_700 = {0x4E88L,0xF037F553L};
                    l_673 = p_9;
                    l_676.f1 = (safe_lshift_func_uint16_t_u_s(func_36(l_462, (g_67.f0 = 2UL), l_676), (0UL != (safe_rshift_func_uint16_t_u_u(g_77, (safe_add_func_uint8_t_u_u((g_205 , (((l_676 , (l_523.f1 = (((safe_sub_func_uint16_t_u_u((+(safe_sub_func_int16_t_s_s((l_523 , g_66), p_9))), l_673)) , g_67.f1) | p_10))) <= g_364) ^ l_569)), l_488.f1)))))));
                    if (g_200)
                    {
                        unsigned char l_691 = 0x7CL;
                        --l_691;
                    }
                    else
                    {
                        unsigned l_706 = 6UL;
                        ++g_697;
                        l_700 = g_150;
                        l_706 &= ((safe_unary_minus_func_int32_t_s(g_108)) , ((g_516 &= (((0x52E0L && (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((g_67.f1 <= (p_9 = l_666)), p_11)), (p_10 ^ func_13(l_700.f1, (g_697 = ((-1L) || (((5UL ^ 0xAE3BE9D4L) != g_396) , p_11))), p_8))))) && l_562) == g_425)) != g_574));
                    }
                }
                else
                {
                    l_694 = (l_707 , g_361);
                    g_108 |= (((safe_sub_func_int16_t_s_s((g_396 ^ l_688), ((((!p_10) & g_98) && (-8L)) >= (l_569 <= p_10)))) | l_710) && ((l_489.f1 &= g_520) >= 1UL));
                }
                if (l_575)
                {
                    char l_711 = 0L;
                    int l_712 = 0xF44E677DL;
                    l_467 = g_150.f0;
                    if ((p_9 & (func_13(l_711, (0xAF9A9E99L < l_666), (l_712 = 0x829819D5L)) , (8UL > p_9))))
                    {
                        return l_676;
                    }
                    else
                    {
                        return g_150;
                    }
                }
                else
                {
                    int l_720 = 1L;
                    unsigned short l_733 = 1UL;
                    if ((safe_rshift_func_uint8_t_u_u((g_77 = (l_686 |= (((l_707.f1 , (safe_sub_func_uint32_t_u_u(l_694, func_36((l_717 &= p_9), (l_457 & ((safe_lshift_func_uint8_t_u_u(g_697, (l_720 >= p_10))) > ((p_9 == l_720) <= l_487))), l_707)))) > 8UL) <= g_155))), l_489.f0)))
                    {
                        char l_724 = 0x84L;
                        int l_730 = (-1L);
                        g_150.f1 = (((func_36(p_8, (g_155 != p_8), l_721) <= (safe_mod_func_uint16_t_u_u(l_724, (g_317 = l_472)))) | ((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((g_98 > ((++g_520) && 1L)) >= 0x35L), (-3L))) <= l_489.f1), p_8)))) ^ 0x10L)) && 0x3890L);
                    }
                    else
                    {
                        l_688 |= p_10;
                        l_720 = (g_153 = (l_720 != 1L));
                        l_737 = func_17((g_516 >= g_241), (func_36((0xE2E6E2E2L & 0x79C398EAL), (l_733 = (l_694 = p_11)), l_676) > ((safe_rshift_func_int8_t_s_s(((((l_736 < ((g_696 , 1L) > g_396)) == p_10) || 0x8942F11EL) <= 0UL), 2)) < 0xA2L)), g_155);
                    }
                    l_488.f1 ^= p_11;
                }
            }
            else
            {
                char l_755 = 0xC4L;
                for (g_695 = 23; (g_695 != 11); g_695 = safe_sub_func_uint8_t_u_u(g_695, 8))
                {
                    unsigned char l_740 = 255UL;
                    int l_750 = 0L;
                    struct S0 l_757 = {0xB994L,0xF41671B5L};
                    l_740 ^= p_8;
                    if (((safe_lshift_func_int8_t_s_s(((l_672 = l_736) == (l_743 >= g_155)), 1)) , (g_696 &= ((safe_rshift_func_uint8_t_u_s(func_17(p_9, (l_487 = (safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_int16_t_s_u(l_489.f0, func_53(((l_740 , (l_750 ^= l_467)) || ((+(4294967292UL || (((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((0xB8L > p_9), 15)), 7L)) || l_755) , 0x71DA2BB6L))) && 1L))))) < g_150.f0) & 1L) , 251UL), l_707.f1))), l_740), 4)) | 4L))))
                    {
                        return l_756;
                    }
                    else
                    {
                        struct S0 l_758 = {0UL,1L};
                        l_758 = l_757;
                        g_67.f1 = (g_108 |= p_11);
                        if (l_757.f0)
                            break;
                        return l_707;
                    }
                }
            }
        }
        else
        {
            unsigned char l_763 = 0x58L;
            unsigned l_764 = 1UL;
            int l_784 = (-7L);
            int l_816 = 1L;
            l_765 = (((((g_516 >= ((((((g_240 = (g_82 = ((g_108 | ((p_11 > p_11) > (safe_sub_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((p_10 != l_523.f0), 8)) , 255UL) != func_41(l_763, p_10)), p_8)))) != l_764))) == 0x71L) == g_361) >= 255UL) <= 5UL) <= (-8L))) > 3L) > p_10) , 0x09L) | g_205);
            for (g_697 = 8; (g_697 <= 31); ++g_697)
            {
                const short l_780 = (-3L);
                int l_783 = 0x521F5C0AL;
                int l_795 = (-1L);
                int l_797 = 4L;
                int l_799 = 0xC13B6CC2L;
                int l_818 = 0x1846E456L;
                if (p_9)
                    break;
                for (g_242 = (-23); (g_242 >= 48); ++g_242)
                {
                    for (g_150.f1 = 0; (g_150.f1 >= 11); g_150.f1 = safe_add_func_int8_t_s_s(g_150.f1, 1))
                    {
                        g_67 = l_488;
                    }
                    l_783 = (((g_317 ^= (g_425 ^ ((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((l_489.f1 = (safe_lshift_func_uint8_t_u_s((g_607 | 0x1DA66CF6L), 0))), 13)), l_780)), (p_10 & p_11))) , ((((g_147 < (l_780 & (l_488.f1 = ((safe_mod_func_uint32_t_u_u(g_516, g_242)) >= 0x5DL)))) < p_9) , l_763) <= l_780)))) != 65532UL) , g_425);
                }
                if (func_53(((l_523.f1 = (l_784 &= l_526)) && (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((g_696 && g_574) <= ((g_111 && ((l_784 ^= (((safe_sub_func_uint8_t_u_u(l_763, (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_9, p_9)), l_487)))) > p_8) , p_11)) >= p_10)) || g_67.f0)), 5)), l_756.f0)))))
                {
                    int l_796 = 0x9710F6BFL;
                    int l_800 = 0x4B6A1025L;
                    if (g_695)
                        break;
                    --g_804;
                    g_150.f1 |= ((((safe_mod_func_uint16_t_u_u(0xA3C9L, l_796)) != (safe_sub_func_uint32_t_u_u(g_155, func_41(g_607, ((safe_mod_func_int16_t_s_s(2L, (safe_sub_func_uint8_t_u_u(func_36(g_804, p_10, l_488), p_8)))) & p_8))))) >= 0xE1L) < l_489.f0);
                }
                else
                {
                    int l_815 = 0x072C37A2L;
                    int l_820 = 0x8D71ABECL;
                    int l_821 = 4L;
                    l_815 = g_108;
                    g_803 = 1L;
                    g_822++;
                    return l_489;
                }
            }
            l_488 = l_523;
            return l_523;
        }
    }
    return g_150;
}







static char func_13(unsigned p_14, unsigned short p_15, int p_16)
{
    char l_436 = 0x5CL;
    short l_453 = 5L;
    int l_455 = 0x00E7DE10L;
    unsigned l_456 = 0xFB537554L;
    for (g_364 = 15; (g_364 >= 43); g_364++)
    {
        char l_434 = 0x85L;
        struct S0 l_437 = {0xC5BBL,1L};
        int l_438 = 0x65AE4B5DL;
        const short l_454 = 0x2380L;
        g_150.f1 = (((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((p_16 || (l_434 == (func_36(g_435, l_436, l_437) == p_15))))), (l_438 = g_435))) & 0x8291L) <= g_98);
        l_455 = (g_361 && ((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(g_62, (g_317 &= (safe_lshift_func_int8_t_s_s(p_14, (g_384 > ((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((!(safe_rshift_func_int16_t_s_u((1L == (((safe_sub_func_uint32_t_u_u(4294967295UL, (p_14 != 0L))) >= l_453) & l_437.f1)), 10))) | 0x653EL), 0)) ^ p_14), 8L)) & 0x3EL))))))) , g_155), l_454)) <= (-6L)));
        return p_15;
    }
    return l_456;
}







static int func_17(int p_18, int p_19, short p_20)
{
    unsigned char l_418 = 1UL;
    int l_421 = 1L;
    int l_424 = 0xF7E38AD0L;
    g_425 |= func_21(p_18, (((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(func_53(l_418), p_20)), l_418)) > (l_424 = ((l_421 = (safe_lshift_func_int16_t_s_u(0xC366L, 4))) <= (g_361 , (safe_add_func_uint8_t_u_u((((g_317 &= g_242) != (((((l_418 , 0UL) | l_418) != 0x81067932L) == (-6L)) <= g_108)) != 9L), p_18)))))) ^ l_418), l_418, l_418);
    return g_150.f0;
}







static const unsigned short func_21(int p_22, unsigned p_23, unsigned p_24, unsigned p_25)
{
    int l_183 = 1L;
    char l_193 = 1L;
    int l_194 = 0x6CEE14A3L;
    char l_211 = 0x2EL;
    int l_219 = 0xB326B5A9L;
    char l_339 = 0x48L;
    int l_340 = 0x149EEACDL;
    struct S0 l_386 = {65535UL,0x89EC2478L};
    struct S0 l_413 = {0x77E6L,-1L};
    if (p_22)
    {
        unsigned char l_176 = 255UL;
        const int l_177 = 8L;
        int l_178 = 0xFF6A51DAL;
        int l_192 = 1L;
        if ((0x02L >= g_77))
        {
            unsigned l_199 = 0UL;
            int l_238 = 0xFF961AB1L;
            int l_239 = 0x0E9152DCL;
            l_178 = ((p_25 , (p_24 == (safe_mod_func_int32_t_s_s(0xEF225987L, p_22)))) != func_28(p_23, ((l_176 &= 0xB0D7L) > l_177)));
            p_22 = (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(l_183, ((l_177 ^ ((l_194 = ((l_193 = ((safe_sub_func_uint16_t_u_u((((((safe_add_func_int32_t_s_s(((g_67 , p_24) ^ (safe_sub_func_int32_t_s_s(l_178, g_147))), p_25)) , func_28(g_12, (safe_mod_func_int8_t_s_s((((l_192 = (((l_192 | 5L) <= g_12) < g_147)) , g_161) , l_183), p_24)))) , 65527UL) , g_67.f0) || l_177), g_12)) | g_110)) , l_183)) < p_23)) & g_82))) ^ (-1L)), 15));
            g_153 |= ((g_67.f0 , ((safe_sub_func_uint8_t_u_u(p_24, (func_28(l_194, (p_22 ^= g_161)) <= (safe_lshift_func_int8_t_s_u(p_23, l_183))))) , l_199)) == g_82);
            if (g_200)
            {
                struct S0 l_218 = {0x77D8L,1L};
                char l_237 = (-4L);
                p_22 = l_194;
                for (g_161 = (-4); (g_161 > 52); g_161 = safe_add_func_uint16_t_u_u(g_161, 2))
                {
                    unsigned l_204 = 7UL;
                    if ((safe_unary_minus_func_uint8_t_u((((l_204 ^ (l_194 = ((g_205 ^= (-5L)) && (safe_unary_minus_func_int8_t_s(((safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(0x2B21L, l_211)) == ((l_178 = ((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(0x5AL, (safe_add_func_int8_t_s_s((l_199 , (g_66 > g_110)), func_28(l_178, g_147))))) | l_194), 12)) == p_24)) & g_110)), (-9L))) & g_153)))))) || l_178) >= 4294967295UL))))
                    {
                        g_67 = g_67;
                        l_218 = g_67;
                    }
                    else
                    {
                        unsigned l_220 = 1UL;
                        l_220++;
                        if (l_177)
                            continue;
                    }
                    if (l_218.f0)
                        continue;
                    g_67.f1 = p_24;
                }
                l_239 &= (safe_rshift_func_uint8_t_u_s(func_28(((((((safe_sub_func_uint8_t_u_u(p_22, p_24)) < ((g_155 , ((l_176 <= (safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((((safe_mod_func_uint32_t_u_u((l_218.f1 = ((+l_218.f1) < ((func_53((((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((func_41(l_199, p_25) < (l_238 = ((l_237 , 0x15C9F241L) , 0x7885L))) , g_82) , 4UL), l_192)), l_199)) , p_23) | 0xD58216C1L)) , g_98) <= p_22))), 4UL)) <= p_23) >= l_177) & 5UL), 0x77L)), g_150.f1))) , p_22)) , p_24)) && 0xD2221DAEL) != l_237) <= l_199) > p_24), l_218.f0), l_192));
                return p_23;
            }
            else
            {
                struct S0 l_250 = {6UL,0xDA43A824L};
                if ((p_22 = 5L))
                {
                    return l_211;
                }
                else
                {
                    unsigned char l_245 = 0x2EL;
                    g_242++;
                    l_245--;
                }
                for (g_111 = 0; (g_111 < 11); g_111 = safe_add_func_uint16_t_u_u(g_111, 4))
                {
                    g_150 = l_250;
                    return p_24;
                }
                g_150.f1 = g_82;
                g_67.f1 |= 7L;
            }
        }
        else
        {
            struct S0 l_254 = {0xE424L,0x502B3145L};
            for (g_153 = (-21); (g_153 == 28); g_153++)
            {
                struct S0 l_253 = {0x58F6L,1L};
                l_254 = l_253;
                p_22 &= p_24;
                return p_25;
            }
            g_153 |= (safe_lshift_func_uint8_t_u_u(l_177, (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((func_53((1L && 0L)) , (g_161 == g_150.f1)), ((~g_205) == l_183))), ((safe_rshift_func_int8_t_s_u((g_150 , l_177), 3)) ^ g_150.f0)))));
        }
    }
    else
    {
        unsigned short l_267 = 5UL;
        int l_268 = 3L;
        int l_269 = (-1L);
        unsigned short l_270 = 0x81AAL;
        struct S0 l_284 = {8UL,0x2CA0155AL};
        g_150.f1 = (safe_rshift_func_uint16_t_u_s(((func_41((p_25 = g_12), p_23) , p_22) , (((safe_add_func_int32_t_s_s(((l_268 |= (func_36((!(l_219 = func_53((0xC5L == 1L)))), (l_267 = g_12), g_150) , g_67.f1)) <= l_194), (-1L))) || g_161) != l_269)), 0));
        ++l_270;
        for (g_240 = 0; (g_240 <= 5); ++g_240)
        {
            const unsigned short l_283 = 0x995FL;
            struct S0 l_292 = {0UL,3L};
            struct S0 l_293 = {0x1730L,-5L};
            char l_297 = 6L;
            struct S0 l_318 = {0x2B36L,0x4D2F7874L};
            char l_346 = (-5L);
            struct S0 l_391 = {0x6C0DL,1L};
            char l_412 = 0x9DL;
            for (p_23 = 0; (p_23 == 7); p_23 = safe_add_func_uint32_t_u_u(p_23, 9))
            {
                unsigned char l_285 = 1UL;
                struct S0 l_291 = {65532UL,0xFC1D7FB4L};
                int l_321 = (-6L);
                int l_322 = 0x1F72A75FL;
                int l_363 = 4L;
                if (((safe_mod_func_uint16_t_u_u((g_242 | ((safe_add_func_uint32_t_u_u((0x68L & (safe_mod_func_uint8_t_u_u(((l_283 ^ func_36(func_53(g_108), l_219, l_284)) <= l_283), p_23))), p_23)) | l_285)), g_200)) , g_150.f0))
                {
                    unsigned char l_288 = 0UL;
                    struct S0 l_294 = {0xC3DBL,0x2374D4ACL};
                    p_22 = g_108;
                    l_288 = (safe_lshift_func_uint16_t_u_s(1UL, 14));
                    for (g_110 = 29; (g_110 != (-24)); g_110 = safe_sub_func_int32_t_s_s(g_110, 7))
                    {
                        l_292 = l_291;
                        l_293 = g_150;
                        l_294 = g_67;
                    }
                    for (l_268 = 0; (l_268 <= (-6)); l_268 = safe_sub_func_uint8_t_u_u(l_268, 7))
                    {
                        unsigned l_305 = 4294967295UL;
                        l_305 = (l_297 != (safe_mod_func_uint32_t_u_u((((0xF3C2A6CFL & (l_292.f0 == (safe_unary_minus_func_int8_t_s((l_285 <= p_22))))) <= 65528UL) || (safe_lshift_func_int8_t_s_s(l_193, (l_194 = (safe_lshift_func_uint8_t_u_s(248UL, func_41(g_66, g_161))))))), l_292.f0)));
                        return l_305;
                    }
                }
                else
                {
                    unsigned l_316 = 9UL;
                    for (g_67.f1 = 0; (g_67.f1 <= 1); ++g_67.f1)
                    {
                        p_22 = (l_291.f0 & g_242);
                    }
                    for (g_62 = 0; (g_62 > 7); g_62++)
                    {
                        g_317 = ((safe_add_func_int16_t_s_s(l_285, (l_284.f1 = (!((((p_22 <= p_24) , (((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((((!g_150.f0) < 0xEF7D3C1AL) != l_316) & (255UL <= 0xBFL)), p_24)) ^ 1L), 6)) && 0xD4L) , g_150.f1)) && g_241) | g_82))))) | p_24);
                        if (g_317)
                            break;
                        if (g_240)
                            continue;
                        g_108 = l_284.f0;
                    }
                    return l_293.f1;
                }
                if ((l_284.f1 = (p_24 == (l_291.f0 , l_269))))
                {
                    unsigned l_332 = 0x5D2C1E1AL;
                    int l_341 = 0x458ECA6CL;
                    l_318 = g_67;
                    if (p_24)
                        continue;
                    p_22 |= g_147;
                    for (p_22 = 0; (p_22 >= 2); p_22++)
                    {
                        unsigned char l_323 = 0x05L;
                        unsigned l_335 = 4294967295UL;
                        int l_336 = 1L;
                        ++l_323;
                        g_150.f1 = (l_346 = (0xF8506E6FL & (safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(l_332, (l_269 <= (((g_150.f1 , (l_219 = (safe_add_func_int32_t_s_s(l_335, ((l_336 = l_291.f0) , (g_67.f1 = ((((safe_lshift_func_uint8_t_u_s(((((--g_77) && (((safe_add_func_int32_t_s_s(((g_150.f0 && (((l_284.f1 && 1UL) < 0xBC0D9670L) , g_200)) | g_147), l_285)) | 0UL) | p_25)) < l_341) <= g_62), 1)) , g_67.f0) > g_82) && g_170))))))) != p_22) , 1L)))) != g_110), l_322)) == p_24), p_25))));
                        l_341 |= (safe_add_func_int8_t_s_s(p_23, (l_336 |= g_82)));
                        if (l_269)
                            break;
                    }
                }
                else
                {
                    unsigned short l_359 = 0UL;
                    int l_360 = (-1L);
                    int l_362 = 0x57E48BFFL;
                    char l_372 = 0x82L;
                    if (func_41((g_150 , (p_25 != ((l_362 &= (safe_add_func_uint16_t_u_u(((g_82 = l_284.f0) && 0x80L), ((g_147 , (safe_add_func_uint16_t_u_u((0x41A63148L || func_53((((l_292.f1 ^= (l_219 = func_36(((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((g_361 &= ((safe_sub_func_uint32_t_u_u(((l_268 = (l_360 &= func_36(((g_317 = ((p_25 , func_53((l_321 = ((((func_36(((!g_200) <= g_12), l_291.f0, l_284) , l_359) & p_22) <= 0x6DL) >= 8UL)))) == l_285)) ^ l_359), p_23, g_150))) , 4294967295UL), p_24)) < p_24)), 15)), p_24)) <= l_293.f1), l_284.f0, g_150))) != 0xB951L) > p_23))), 0xB113L))) <= p_24)))) >= 0x8FL))), p_22))
                    {
                        short l_369 = (-1L);
                        if (g_67.f0)
                            break;
                        g_364++;
                        l_362 = (safe_add_func_uint16_t_u_u(((p_22 = 2L) <= l_369), (p_25 , func_41((((((p_25 , 0xFAD2L) >= g_161) > (((l_340 = 2UL) | (g_62 & l_269)) < l_297)) && p_24) != p_24), g_150.f1))));
                        l_340 |= (safe_sub_func_int8_t_s_s(l_372, (safe_lshift_func_int8_t_s_s((g_241 < 0x9A28F82DL), p_25))));
                    }
                    else
                    {
                        g_67.f1 |= l_322;
                    }
                    l_219 = (g_200 | g_66);
                }
            }
            if (l_193)
                continue;
            if ((((safe_sub_func_uint16_t_u_u(func_53((l_219 = ((p_24 & ((g_150 = g_67) , func_36((l_293.f1 = g_161), (l_219 != (l_292.f1 = (safe_rshift_func_uint16_t_u_u(g_150.f0, 7)))), (((l_340 = (safe_sub_func_int8_t_s_s(((p_23 , ((l_284.f1 = (safe_unary_minus_func_int32_t_s(((((g_205 | (safe_add_func_int8_t_s_s((g_82 = func_53(l_194)), 0x7CL))) , 0x083A8DCCL) , g_161) == l_270)))) >= l_193)) <= g_110), p_22))) ^ g_200) , l_318)))) == p_23))), 1L)) == g_384) ^ p_23))
            {
                struct S0 l_385 = {0x1C73L,0L};
                unsigned l_403 = 0UL;
                int l_404 = (-1L);
                struct S0 l_405 = {0x03BAL,0L};
                l_386 = l_385;
                if (g_364)
                    break;
                if (g_98)
                    break;
                l_269 |= ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((func_36(((g_150 = (g_67 = l_391)) , (safe_sub_func_int32_t_s_s((((l_403 |= (p_24 , (p_22 = ((safe_sub_func_uint16_t_u_u(g_396, p_25)) < (safe_sub_func_int32_t_s_s(((l_385.f1 = (-1L)) > (safe_lshift_func_uint8_t_u_s(func_53((l_284.f1 = p_22)), ((-1L) && (l_386.f1 = (safe_mod_func_int16_t_s_s(g_108, g_161))))))), p_22)))))) , l_267) | l_404), (-1L)))), p_25, l_405) <= p_24), 5)), g_384)) , p_25);
            }
            else
            {
                for (l_270 = (-17); (l_270 == 18); l_270++)
                {
                    l_318.f1 = p_25;
                }
                for (g_67.f1 = 0; (g_67.f1 != (-13)); g_67.f1 = safe_sub_func_int16_t_s_s(g_67.f1, 1))
                {
                    l_284.f1 ^= (safe_add_func_uint8_t_u_u(p_23, l_412));
                }
                g_150 = g_150;
            }
        }
        l_284 = l_413;
    }
    l_219 ^= p_22;
    l_219 ^= g_364;
    return g_147;
}







static unsigned char func_28(const unsigned char p_29, const int p_30)
{
    struct S0 l_146 = {0xA07DL,0x373D2EF8L};
    int l_151 = 0x09C2FEE7L;
    unsigned l_158 = 0xBB04AF86L;
    int l_162 = (-5L);
    int l_168 = 0L;
    int l_169 = (-1L);
    struct S0 l_173 = {0UL,-6L};
    for (g_77 = 25; (g_77 > 23); --g_77)
    {
        short l_134 = 0x6886L;
        unsigned l_141 = 0x65A9757DL;
        int l_148 = 0x54F4E0B4L;
        struct S0 l_149 = {0xFF5AL,0x0FC2DDDAL};
        int l_152 = 0xECD3A2B2L;
        int l_154 = 0xED192008L;
        g_67.f1 = (safe_mod_func_uint32_t_u_u((l_134 || ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((l_146.f1 = (safe_sub_func_uint16_t_u_u(func_36((g_111 || (((!func_36((l_141 , ((safe_add_func_uint8_t_u_u(func_36(((safe_mod_func_int32_t_s_s((0x61C9B082L || func_36(l_141, l_134, l_146)), (l_148 = (((((((g_147 &= 0xD8L) > 0x6AL) <= l_146.f0) < p_30) == l_134) | 0x7C0CF43AL) , g_82)))) , p_30), p_29, l_149), g_66)) <= l_146.f0)), l_149.f0, l_146)) ^ 1L) < 1L)), p_30, g_150), 4UL))), p_29)) != l_149.f0), g_66)) | 0xF88D2697L)), 0x04B1A415L));
        --g_155;
        l_158 ^= (l_149.f1 = (1UL != (l_151 = (((l_146.f1 ^= g_12) && g_67.f0) < p_30))));
        g_150 = g_67;
    }
    for (g_77 = (-9); (g_77 <= 39); g_77 = safe_add_func_uint32_t_u_u(g_77, 5))
    {
        unsigned short l_163 = 0x2229L;
        int l_166 = 0x56E00778L;
        int l_167 = 0x2250544DL;
        l_162 |= ((g_161 | (l_151 = (l_146.f1 = (g_98 = 0UL)))) , g_150.f1);
        ++l_163;
        ++g_170;
    }
    g_150 = g_150;
    l_173 = (l_146 = g_67);
    return l_173.f0;
}







static char func_36(const int p_37, unsigned short p_38, struct S0 p_39)
{
    int l_102 = 0x8811FBA6L;
    struct S0 l_117 = {0x269AL,0x2DAC39F6L};
    int l_119 = 0x401A71B0L;
    int l_120 = 0xA91F7CAEL;
    int l_121 = 0x0C9FB391L;
    int l_122 = 0L;
    int l_123 = (-6L);
    int l_127 = 0xE55470A0L;
    for (g_67.f0 = (-4); (g_67.f0 == 14); g_67.f0 = safe_add_func_uint32_t_u_u(g_67.f0, 1))
    {
        int l_107 = 0x83236DA3L;
        int l_109 = 0xC5320B35L;
        int l_118 = (-5L);
        unsigned l_124 = 4294967295UL;
        if ((0x4FL > l_102))
        {
            for (g_62 = 0; (g_62 == 39); g_62++)
            {
                short l_105 = 0x089DL;
                int l_106 = 0x1537C3E8L;
                l_106 = l_105;
                return l_105;
            }
            ++g_111;
        }
        else
        {
            unsigned l_114 = 4294967295UL;
            l_114++;
            if (g_77)
                continue;
        }
        l_117 = (p_39.f0 , g_67);
        l_124++;
        g_108 ^= l_122;
    }
    l_123 = (g_108 = l_127);
    p_39.f1 = (((safe_rshift_func_uint16_t_u_u(p_37, (+9UL))) ^ (((g_67.f1 <= g_67.f0) && 0L) >= 2UL)) != 0xBD3C15F2L);
    return p_38;
}







static unsigned char func_41(unsigned p_42, unsigned p_43)
{
    int l_50 = 0x5DB0FF84L;
    unsigned short l_57 = 0xD219L;
    char l_90 = (-1L);
    unsigned char l_97 = 0x28L;
    if ((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(l_50, ((safe_add_func_uint32_t_u_u((p_43 > func_53(((safe_add_func_int32_t_s_s(l_57, (l_50 != 0x96E1L))) , (p_42 > 0x0B2B0402L)))), (p_42 , l_50))) , 0x4C53L))) <= g_82), 1)))
    {
        int l_87 = 0x20237AEEL;
        struct S0 l_88 = {4UL,-7L};
        l_50 = (0x149AL != (func_53(((safe_sub_func_uint32_t_u_u(p_42, (0UL <= (safe_rshift_func_uint8_t_u_s((l_57 == l_87), p_42))))) >= l_87)) , 65535UL));
        l_88 = l_88;
    }
    else
    {
        int l_89 = 0x5F9D9D8AL;
        l_89 = ((g_98 = (l_89 , (((0xBF95L == (--g_67.f0)) && p_43) & ((safe_rshift_func_uint8_t_u_u((g_62 || ((-1L) || (safe_add_func_uint8_t_u_u(p_43, l_97)))), (g_77 = (g_12 , l_50)))) || p_42)))) ^ g_12);
        g_67.f1 = l_89;
        l_50 = g_62;
    }
    return l_97;
}







static int func_53(unsigned short p_54)
{
    char l_60 = 0xA5L;
    int l_61 = 0x83CE7179L;
    struct S0 l_64 = {0x5102L,0x2AEAFD71L};
    unsigned l_72 = 0x41993E36L;
    int l_80 = 0x60F2F470L;
    int l_81 = 0x88285970L;
    if ((l_61 = (safe_rshift_func_int16_t_s_u((l_60 , l_60), 3))))
    {
        unsigned short l_63 = 65526UL;
        g_62 = p_54;
        l_63 |= l_60;
    }
    else
    {
        struct S0 l_65 = {0x4F61L,1L};
        l_65 = l_64;
        g_66 = g_12;
    }
    l_64 = (g_67 = l_64);
    l_80 &= (safe_lshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s((g_66 , l_72), (safe_rshift_func_int16_t_s_s((g_77 = (0x45L == (safe_mod_func_uint16_t_u_u((l_61 && 0L), l_64.f1)))), 15)))) <= (!(((((((g_67.f0++) | ((p_54 | g_66) < 2L)) < (-9L)) ^ 0xA422L) != 0x0DAEE255L) != g_66) , 0x986AL))) > 6UL), g_66));
    return l_81;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_67.f1, "g_67.f1", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_150.f1, "g_150.f1", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    transparent_crc(g_697, "g_697", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    transparent_crc(g_817, "g_817", print_hash_value);
    transparent_crc(g_819, "g_819", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_861.f0, "g_861.f0", print_hash_value);
    transparent_crc(g_861.f1, "g_861.f1", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    transparent_crc(g_938, "g_938", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1026, "g_1026", print_hash_value);
    transparent_crc(g_1032, "g_1032", print_hash_value);
    transparent_crc(g_1052, "g_1052", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    transparent_crc(g_1173, "g_1173", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
