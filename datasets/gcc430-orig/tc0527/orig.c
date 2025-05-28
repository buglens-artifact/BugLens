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



static int g_13 = (-1L);
static unsigned short g_67 = 6UL;
static unsigned g_75 = 0xB2A8F302L;
static char g_102 = (-4L);
static int g_103 = (-1L);
static unsigned short g_113 = 0x899AL;
static unsigned g_133 = 0x4B6F1E52L;
static unsigned g_134 = 1UL;
static int g_135 = 0xE60D347FL;
static int g_142 = 0xF35A7B36L;
static unsigned g_145 = 0x491F1F15L;
static unsigned char g_146 = 0xAAL;
static int g_201 = 0x5B775008L;
static int g_242 = 0xF3E89965L;
static int g_300 = 1L;
static unsigned g_388 = 0xC97D4F73L;
static unsigned g_389 = 4294967295UL;
static unsigned g_405 = 0x0760AC32L;
static short g_406 = 0xE127L;
static int g_416 = 0xCE634954L;
static char g_426 = 0xA3L;
static unsigned short g_526 = 9UL;
static char g_557 = 0x13L;
static unsigned g_564 = 9UL;
static char g_618 = 0x53L;
static unsigned short g_647 = 0x56BBL;
static unsigned g_662 = 4294967293UL;
static unsigned g_663 = 4UL;
static int g_695 = (-6L);
static char g_724 = 0x20L;
static unsigned g_750 = 4294967286UL;
static unsigned char g_806 = 0x08L;
static unsigned short g_825 = 0xB852L;
static char g_889 = 0xF8L;
static unsigned g_1140 = 0xE4FCFB31L;
static unsigned g_1178 = 0xF9EAEFCFL;
static unsigned char g_1196 = 255UL;
static unsigned short g_1201 = 65535UL;
static char g_1240 = 0L;
static short g_1265 = 1L;
static unsigned char g_1275 = 0x12L;



static short func_1(void);
static unsigned func_3(short p_4);
static short func_5(int p_6, unsigned p_7, unsigned char p_8);
static int func_9(int p_10, unsigned short p_11);
static int func_15(char p_16, const short p_17, const char p_18, short p_19, unsigned p_20);
static unsigned func_21(int p_22, unsigned short p_23, const unsigned short p_24, short p_25, unsigned short p_26);
static unsigned short func_29(const unsigned short p_30, unsigned char p_31, unsigned p_32, int p_33);
static const unsigned short func_34(unsigned char p_35, unsigned p_36);
static char func_43(char p_44);
static short func_53(short p_54, char p_55, int p_56);
static short func_1(void)
{
    unsigned short l_2 = 0x96DDL;
    int l_12 = 0x779C63C4L;
    int l_14 = (-1L);
    unsigned l_1239 = 0x1826ED3DL;
    unsigned char l_1241 = 249UL;
    int l_1276 = (-1L);
    l_2 = 0L;
    l_1276 = (l_2 == (func_3((((func_5((func_9((l_12 |= l_2), (l_14 = g_13)) | (g_1240 = (0L || (safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(0xB2A8L, 15)), ((g_526 & g_526) || ((safe_rshift_func_int16_t_s_u(g_13, l_2)) >= 0x06L)))) == 0x4FB97BADL), l_1239))))), l_1239, l_1241) >= l_2) != g_526) & l_1241)) < 0xC33A78F8L));
    return g_750;
}







static unsigned func_3(short p_4)
{
    short l_1255 = (-9L);
    int l_1258 = 0x3A77780EL;
    char l_1268 = 4L;
    l_1258 = (((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((~0x5922L), 3)), ((~p_4) || (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(p_4, (p_4 < p_4))), (safe_rshift_func_uint8_t_u_s((l_1255 = 0xF8L), g_1140)))), ((safe_sub_func_uint32_t_u_u(p_4, func_34(p_4, l_1258))) == g_1201)))))) >= p_4) && l_1255);
    g_142 |= g_389;
    l_1258 = (l_1258 || (func_5(func_43((safe_lshift_func_uint8_t_u_u(g_662, 3))), p_4, (0xB226L >= (((0L >= (safe_add_func_int16_t_s_s((g_1265 = (0x5FC346DEL >= l_1255)), ((g_724 ^= l_1255) || g_1178)))) & g_389) != g_13))) != 0L));
    if (g_389)
    {
        g_695 |= (safe_rshift_func_uint8_t_u_s(p_4, 2));
        return l_1268;
    }
    else
    {
        int l_1271 = 0L;
        int l_1272 = 0x0FA23606L;
        l_1258 = (0x001C4666L >= (((+(safe_mod_func_uint16_t_u_u((g_1201 = func_29(g_889, (1UL && (l_1272 &= (!(l_1271 != (-9L))))), (func_15(l_1271, g_300, ((safe_rshift_func_uint8_t_u_s((0xF3F950CBL >= (g_750 = p_4)), 2)) || p_4), l_1271, g_1275) <= g_557), l_1271)), g_564))) & g_113) || 0xFB636101L));
    }
    return p_4;
}







static short func_5(int p_6, unsigned p_7, unsigned char p_8)
{
    unsigned l_1242 = 0x3F89658EL;
    l_1242 &= (~g_647);
    return g_647;
}







static int func_9(int p_10, unsigned short p_11)
{
    unsigned l_828 = 0x190CFD69L;
    int l_829 = 0xB9513CF6L;
    int l_841 = 2L;
    unsigned char l_842 = 0x11L;
    unsigned short l_860 = 0xB265L;
    unsigned char l_876 = 3UL;
    unsigned short l_877 = 65527UL;
    unsigned char l_879 = 0x78L;
    unsigned char l_941 = 0UL;
    int l_1088 = (-1L);
    int l_1089 = 9L;
    int l_1090 = (-1L);
    char l_1123 = 0x04L;
    int l_1225 = 0L;
    int l_1228 = 0x082CC509L;
    p_10 &= p_11;
    if (func_15(((l_828 = func_21((p_10 &= (-1L)), g_13, g_13, g_13, (safe_rshift_func_int8_t_s_s(g_13, 7)))) != ((p_11 | l_829) >= l_829)), l_829, l_829, g_526, p_11))
    {
        int l_832 = 0x63CCE0A8L;
        g_142 = (g_13 < l_829);
        g_695 = 1L;
        l_841 |= (safe_mod_func_int8_t_s_s((l_832 & ((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((l_829 && (func_21(l_832, p_11, g_647, (safe_sub_func_uint8_t_u_u((p_10 & func_53(l_828, g_242, (g_201 = (safe_lshift_func_uint16_t_u_u((g_103 <= g_103), 15))))), 0x67L)), g_416) <= p_11)), p_11)), l_832)) != p_11)), g_526));
        l_841 &= func_34(g_201, l_842);
    }
    else
    {
        unsigned l_849 = 4294967294UL;
        int l_861 = (-1L);
        unsigned l_878 = 4294967295UL;
        unsigned l_880 = 0x51A2FE0BL;
        unsigned char l_908 = 2UL;
        short l_915 = 2L;
        unsigned short l_926 = 65530UL;
        unsigned l_946 = 0x3F346028L;
        g_142 |= ((safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(p_11, ((safe_rshift_func_int8_t_s_s(p_10, 7)) || (65530UL || g_825)))) | (-1L)), 1L)) ^ l_849);
        for (g_405 = (-2); (g_405 < 49); ++g_405)
        {
            g_695 |= (p_10 = g_806);
            if (g_405)
                break;
        }
        if (func_53((safe_mod_func_int16_t_s_s(((l_829 ^= ((func_34((!(+(safe_add_func_uint32_t_u_u(0x646DB687L, ((safe_add_func_uint8_t_u_u(((p_10 = (p_11 & func_21(p_11, (safe_sub_func_uint32_t_u_u((l_861 = l_860), (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(g_526, (+p_11))) || (safe_rshift_func_uint8_t_u_s(((((((g_145 > (safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((p_11 && ((g_146 = l_876) < 0x4EL)) && g_133), l_849)), l_841)) & l_877), g_750))) && p_11) == p_10) || l_849) ^ 0UL) < 65531UL), g_102))), 4)) ^ l_849), l_849)))), p_10, l_878, p_10))) | 0x837D9F0AL), g_13)) >= 0xAF010CA2L))))), g_13) && l_879) <= l_849)) & p_11), p_11)), g_13, l_880))
        {
            return g_242;
        }
        else
        {
            unsigned char l_892 = 6UL;
            for (l_828 = 0; (l_828 > 6); l_828 = safe_add_func_uint32_t_u_u(l_828, 8))
            {
                int l_891 = (-1L);
                unsigned l_900 = 4294967295UL;
                p_10 = l_861;
                for (g_242 = 0; (g_242 >= 0); g_242++)
                {
                    unsigned l_890 = 0x2DC9A835L;
                    int l_907 = 0L;
                    if ((safe_mod_func_int32_t_s_s((l_890 = (safe_lshift_func_int16_t_s_u(g_889, 0))), l_891)))
                    {
                        p_10 ^= ((-3L) && g_724);
                    }
                    else
                    {
                        g_142 &= (7UL || ((l_892 ^ (+(l_861 = (safe_unary_minus_func_int32_t_s((5L && ((p_10 && (+(safe_add_func_int32_t_s_s((p_11 & p_11), (g_133 = (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((((g_564 &= (((p_11 < func_15(p_10, l_890, g_806, g_405, p_10)) != l_828) ^ g_647)) || g_67) && g_695), l_900)) || 0x16A16715L), p_10))))))) >= g_647))))))) < p_11));
                        if (g_662)
                            break;
                        l_891 ^= (safe_mod_func_int16_t_s_s(l_892, p_10));
                    }
                    for (g_145 = 0; (g_145 == 4); g_145 = safe_add_func_int16_t_s_s(g_145, 3))
                    {
                        g_135 ^= (safe_sub_func_uint32_t_u_u(g_663, (p_10 ^ (0x24L ^ g_663))));
                        l_891 |= (l_907 &= 0x47BB124EL);
                    }
                    p_10 = 0xE83005E7L;
                    g_142 ^= l_908;
                }
            }
            for (g_75 = 0; (g_75 > 23); g_75 = safe_add_func_int32_t_s_s(g_75, 8))
            {
                g_135 = (safe_mod_func_uint16_t_u_u(p_11, (safe_sub_func_int16_t_s_s((l_915 || ((safe_lshift_func_uint8_t_u_u((g_416 | (l_841 = func_29(p_10, (safe_rshift_func_int8_t_s_s(l_908, 3)), l_892, ((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_860, ((((3UL < (l_849 == g_135)) == 0x8FE34F42L) || g_242) >= g_102))), 0xF750L)), 0x1FL)) <= l_926)))), 5)) == g_724)), p_11))));
                return p_10;
            }
            p_10 = (l_861 = (safe_rshift_func_int16_t_s_s(l_876, func_34(p_11, (safe_mod_func_int8_t_s_s(l_828, g_416))))));
        }
        for (g_146 = 0; (g_146 >= 38); g_146 = safe_add_func_int8_t_s_s(g_146, 1))
        {
            unsigned short l_942 = 5UL;
            for (g_647 = (-5); (g_647 > 44); g_647 = safe_add_func_uint16_t_u_u(g_647, 9))
            {
                short l_943 = 4L;
                int l_944 = 0x669F1C80L;
                int l_945 = (-1L);
                g_695 = ((g_806 < (func_29(l_908, func_29(((safe_sub_func_uint16_t_u_u((g_662 | (((safe_rshift_func_uint16_t_u_s(((l_861 = (safe_mod_func_uint16_t_u_u((((l_943 = (~(0xA677L <= ((((0xEFL | (l_941 = p_11)) >= (g_750 <= (1UL && (+7UL)))) >= 0x81L) ^ l_942)))) == 1L) || 0xF8L), g_300))) != l_944), l_841)) >= 0xD4L) >= p_11)), l_944)) ^ l_944), l_945, l_926, l_860), p_10, g_103) >= g_889)) <= l_946);
                for (g_242 = (-30); (g_242 < 1); ++g_242)
                {
                    return g_889;
                }
            }
            for (g_416 = 13; (g_416 == 4); g_416 = safe_sub_func_uint32_t_u_u(g_416, 2))
            {
                unsigned l_961 = 4294967295UL;
                for (g_695 = 0; (g_695 >= 10); g_695 = safe_add_func_uint16_t_u_u(g_695, 4))
                {
                    for (l_841 = (-4); (l_841 >= 5); ++l_841)
                    {
                        l_861 &= g_389;
                        g_242 = p_10;
                        p_10 = 0x6A1E9830L;
                    }
                }
                l_829 = (g_416 == func_29((p_11 &= g_135), p_10, l_941, (safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(p_10, func_29((safe_sub_func_int32_t_s_s(((((g_557 = l_961) && ((g_618 || (~(((g_750 > func_29(g_242, l_946, l_926, l_880)) || 1UL) ^ p_10))) <= 1L)) | 0xDCD8A244L) != p_10), 5L)), p_10, p_10, p_10))), p_10))));
            }
        }
    }
    if ((g_135 = (safe_sub_func_int8_t_s_s(l_842, p_11))))
    {
        unsigned char l_975 = 248UL;
        int l_1020 = 0x18394490L;
        const short l_1031 = 1L;
        int l_1042 = 0L;
        int l_1043 = 0x58023BE1L;
        int l_1044 = 7L;
        const unsigned l_1045 = 4294967289UL;
        if (g_389)
        {
            const int l_980 = 0xB9195064L;
            int l_1011 = (-1L);
            int l_1012 = 0L;
            for (g_142 = (-21); (g_142 <= (-22)); g_142--)
            {
                char l_968 = 0x9BL;
                for (g_201 = 3; (g_201 == (-19)); g_201--)
                {
                    if (g_416)
                        break;
                    g_135 = (g_242 = l_968);
                }
                g_135 = (safe_add_func_uint8_t_u_u((p_11 > (safe_lshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(((+((-1L) <= l_975)) > ((safe_rshift_func_int8_t_s_u((((safe_add_func_uint16_t_u_u((l_828 == ((4294967292UL == func_29(l_980, (safe_add_func_int16_t_s_s(g_618, (safe_add_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((l_879 > ((l_879 <= g_142) <= g_146)), g_806)) > l_975), 8L)))), g_557, l_975)) < 6UL)), g_405)) & l_968) && p_11), 4)) == g_146)), (-3L))) > g_388) ^ 0x1325L), l_968))), 0xB6L));
                g_135 = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(l_879, 4)) >= ((p_10 || (safe_mod_func_int32_t_s_s(((~0x28L) > l_841), (safe_rshift_func_uint8_t_u_s((((((safe_unary_minus_func_int16_t_s((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((l_829 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((l_980 >= (safe_mod_func_int16_t_s_s(((l_1012 = ((l_968 == ((((l_1011 = (p_10 < (func_29(p_10, (safe_rshift_func_int8_t_s_s((l_975 & 255UL), p_10)), g_102, p_10) || g_113))) <= g_663) ^ 0xB5D5L) ^ g_146)) && l_1011)) > p_10), p_10))), g_825)), 12))) || p_10) == 0x4DL), p_10)), p_11)), l_980)))))) || 65529UL) < l_968) >= p_11) & 0x2E73AD13L), p_11))))) > g_102)), 1L));
                for (l_860 = (-8); (l_860 == 13); l_860++)
                {
                    for (g_695 = 0; (g_695 < (-9)); g_695--)
                    {
                        int l_1019 = 0x52E73BDCL;
                        g_135 = (safe_sub_func_int8_t_s_s(p_10, (3UL > (g_825 == p_10))));
                        if (p_11)
                            break;
                        l_1020 = func_29(g_647, l_1019, g_135, p_10);
                    }
                    if (p_11)
                        continue;
                }
            }
            if (l_841)
            {
                char l_1021 = 0x49L;
                l_1020 = (l_1021 > (g_145 || ((safe_mod_func_int8_t_s_s(((-10L) >= (l_829 = l_1012)), l_879)) || (safe_add_func_int8_t_s_s(6L, (safe_rshift_func_int8_t_s_s(0xACL, l_1020)))))));
                p_10 = p_11;
                p_10 = l_980;
            }
            else
            {
                unsigned l_1028 = 0UL;
                l_1028 |= p_10;
            }
            g_142 = ((-1L) > ((safe_rshift_func_int16_t_s_s((+func_29(l_1031, p_11, g_389, l_1020)), 12)) != (((safe_add_func_int8_t_s_s(func_15((safe_mod_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(1UL, ((l_1044 = (l_1011 <= (safe_sub_func_int16_t_s_s((l_1043 = (l_1042 = p_11)), (-1L))))) > g_557))), p_11)) >= l_1045) ^ 3L), 0x06E9L)), l_828, p_10, p_11, l_1011), p_11)) != g_142) >= 0xBFA7L)));
        }
        else
        {
            short l_1046 = (-1L);
            g_695 = l_1046;
        }
        if ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((g_889 |= (func_34(g_142, p_11) >= l_1031)), (l_828 >= l_975))), (250UL == p_10))))
        {
            p_10 = g_75;
        }
        else
        {
            short l_1051 = 1L;
            int l_1052 = 0L;
            l_1051 = p_10;
            l_1052 = g_663;
            p_10 = (p_10 == (((l_1045 | (safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(g_416, 2)) & (((((l_1052 = (g_242 >= p_11)) != ((l_1042 = g_695) > (safe_lshift_func_uint16_t_u_s(g_564, 3)))) && l_1051) == (g_557 = (((safe_mod_func_int8_t_s_s(((g_146 = (0x14L < 7UL)) ^ l_975), 0xBFL)) == 0x2E8EB8C4L) ^ 65530UL))) == l_1044)), p_10)), p_10))) && p_11) != 252UL));
            l_841 = (((0xC91999B5L & (248UL & 0xFDL)) | ((l_1020 = (((p_11 > (safe_sub_func_uint8_t_u_u((g_13 >= ((p_10 = func_21(p_10, ((l_1052 ^= (g_695 = 5L)) < (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((0UL <= (safe_mod_func_uint8_t_u_u(0xA6L, 0x38L))), g_13)) || p_11), l_1051)) ^ p_10), 0x3D38L))), g_889, p_11, g_618)) & 1UL)), g_526))) == g_526) == 0x06L)) | p_11)) == 0xDF76FACDL);
        }
        p_10 = func_15(func_29((l_829 |= p_11), g_724, l_876, (p_10 ^ l_877)), l_879, g_133, l_941, p_11);
        l_1090 |= ((l_841 >= ((p_11 && ((0x8379L <= 0UL) >= 0x274146E4L)) < (safe_sub_func_int8_t_s_s(p_11, (safe_mod_func_int8_t_s_s((g_426 = (safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((l_1089 = (safe_rshift_func_int16_t_s_u(((l_1088 = (l_1042 &= (l_829 ^= ((safe_mod_func_int16_t_s_s(l_876, (safe_mod_func_uint16_t_u_u((func_15((safe_unary_minus_func_uint32_t_u(g_806)), (func_43(l_860) <= 0xD447L), p_11, l_876, p_10) < p_10), 2UL)))) < l_879)))) ^ g_806), g_557))), p_10)) || p_11), g_564))), l_1044)))))) == l_879);
    }
    else
    {
        int l_1104 = 1L;
        short l_1122 = 1L;
        unsigned l_1141 = 0x485C629BL;
        short l_1164 = 0x5F4EL;
        char l_1166 = (-6L);
        int l_1200 = 0L;
        const unsigned char l_1222 = 1UL;
        for (g_113 = 7; (g_113 <= 51); g_113++)
        {
            unsigned l_1101 = 0x22D29975L;
            int l_1128 = (-10L);
            int l_1142 = (-1L);
            if (((g_113 | (safe_sub_func_uint16_t_u_u((0xEFL & (safe_rshift_func_uint16_t_u_s((~(((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_10, p_11)), (0x56CE0154L > (l_1101 > l_1088)))) > l_1101) == (func_29((safe_sub_func_int32_t_s_s(l_1101, g_564)), l_941, p_10, l_1104) && p_11))), 8))), p_11))) >= p_10))
            {
                unsigned char l_1115 = 0xA6L;
                int l_1129 = 0L;
                int l_1139 = (-1L);
                g_135 = func_15((safe_mod_func_int8_t_s_s((0UL > (safe_add_func_int16_t_s_s(0x0E0DL, (safe_lshift_func_uint8_t_u_u(0xD5L, (safe_add_func_uint8_t_u_u(func_15(p_11, (safe_lshift_func_int16_t_s_u(l_1101, 15)), (l_1115 <= g_133), func_29((safe_mod_func_uint32_t_u_u(p_11, ((safe_lshift_func_int16_t_s_u((+(safe_lshift_func_uint8_t_u_s((l_1122 <= l_1122), g_103))), g_405)) & p_10))), p_10, l_1122, g_564), g_133), 0xC0L))))))), p_10)), g_201, g_133, l_1101, l_1123);
                for (l_1090 = (-12); (l_1090 >= (-19)); l_1090 = safe_sub_func_uint16_t_u_u(l_1090, 2))
                {
                    const unsigned short l_1138 = 4UL;
                    if (func_15((g_618 = (~0x97L)), p_11, (l_1089 = (safe_add_func_int8_t_s_s((l_1129 = l_1128), 248UL))), (l_829 = (safe_add_func_uint32_t_u_u((g_662 & (((g_1140 = ((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_1139 = (safe_add_func_int8_t_s_s(func_29(l_1138, g_663, p_10, p_10), 0UL))), 0xB8L)), l_1138)) > 0x66L)) > p_11) | l_1128)), g_889))), g_201))
                    {
                        l_1141 = g_426;
                        if (p_11)
                            break;
                        g_135 &= l_1142;
                    }
                    else
                    {
                        g_142 |= ((-1L) != 65534UL);
                        return p_10;
                    }
                    p_10 = p_10;
                }
                return p_10;
            }
            else
            {
                unsigned short l_1145 = 65535UL;
                int l_1165 = 0x5BDCE7D5L;
                int l_1167 = 0xA335AED5L;
                g_142 = ((!(safe_rshift_func_int8_t_s_u((l_1167 = (!(l_1088 = (g_695 >= (l_1145 != (((0x61L == (safe_add_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((((((safe_mod_func_uint8_t_u_u(l_1145, (safe_add_func_uint16_t_u_u(((l_1141 != ((l_1145 & (l_1128 = ((g_806 > (safe_mod_func_uint8_t_u_u(((l_1165 = (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((((l_879 >= (func_29(l_1122, g_416, p_11, g_103) != 0xE3L)) > l_1145) ^ l_1090), 4294967289UL)), l_1164))) ^ p_11), (-7L)))) < g_389))) > 248UL)) != g_102), g_145)))) > l_1142) > p_10) >= l_1145) || p_10) == 0x1A3CL), p_11)), 1)), l_1166)) || g_75), p_10))) >= l_828) > 255UL)))))), 2))) && 0x39L);
                if (l_1142)
                    continue;
            }
        }
        for (l_876 = 22; (l_876 != 23); l_876 = safe_add_func_int16_t_s_s(l_876, 8))
        {
            for (g_102 = 16; (g_102 > 10); g_102 = safe_sub_func_int16_t_s_s(g_102, 6))
            {
                g_242 = (g_135 = (safe_rshift_func_uint8_t_u_u(1UL, 6)));
            }
        }
        if ((g_142 = (safe_add_func_int32_t_s_s((p_10 | (g_113 &= ((!p_11) & g_406))), (safe_lshift_func_int16_t_s_u((l_841 = l_876), ((l_829 &= 0x058EBC3AL) >= ((((+(p_11 > (((g_1178 ^= 0L) > (safe_rshift_func_int16_t_s_u((p_11 | ((safe_rshift_func_int16_t_s_s((p_11 > 0x5F2BL), g_426)) && 0xB5L)), 3))) < g_426))) != p_10) < g_142) ^ 0x42D095DAL))))))))
        {
            return g_724;
        }
        else
        {
            unsigned l_1194 = 1UL;
            int l_1195 = 1L;
            for (g_242 = 0; (g_242 >= 4); ++g_242)
            {
                int l_1185 = 0x719D5C18L;
                int l_1198 = (-1L);
                int l_1199 = 0x566C807AL;
                char l_1202 = 0x8DL;
                g_135 = (+g_13);
                l_1185 = p_10;
                for (g_662 = 0; (g_662 != 12); g_662 = safe_add_func_uint32_t_u_u(g_662, 2))
                {
                    unsigned short l_1197 = 9UL;
                    if (func_29(p_11, p_10, (func_15(func_29((l_1200 = (l_1199 = (l_1198 = ((safe_lshift_func_uint16_t_u_s((func_29(((~((func_15(l_1141, (g_1196 &= (((g_406 = ((((func_29((g_825 = (safe_lshift_func_int16_t_s_s(0x8D90L, (g_201 <= (func_29(g_564, l_1141, (g_750 ^= 4294967295UL), (l_1194 ^= (safe_rshift_func_int16_t_s_s(((~(g_825 != g_242)) & g_557), 3)))) < 0x405D60ABL))))), p_10, g_242, l_1195) >= g_806) <= g_134) <= g_389) == 0x2AL)) > l_1195) ^ 0x5BL)), p_11, l_1195, p_11) && 255UL) < l_1185)) & g_426), g_389, g_67, g_647) <= 65531UL), l_1197)) ^ p_11)))), p_11, g_133, g_389), g_113, p_10, g_103, g_1201) != 0x1057L), l_1197))
                    {
                        int l_1221 = (-2L);
                        g_135 &= (l_1202 && (0x057B36A5L || (l_1221 = ((safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((g_647 = (p_11 = l_1198)), func_15((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(func_15(((safe_lshift_func_uint16_t_u_u(func_15((safe_sub_func_uint8_t_u_u((g_388 == ((((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(l_1090, (l_1199 = (1UL || (g_663 = (safe_mod_func_uint32_t_u_u(0x0EA2AB0DL, func_29((g_242 || (l_1199 | 0xAC305F21L)), g_146, l_1197, g_145)))))))), l_1104)) <= l_1197) > l_1221) >= g_142)), g_146)), p_10, l_1222, l_1221, g_406), g_134)) <= p_10), g_201, g_1140, p_10, l_842), 6)), l_1202)), l_1141, l_828, p_10, p_10))) | 0UL), 0xF8L)) && 0x01A4L))));
                        l_1225 = (l_1200 = (safe_mod_func_uint16_t_u_u(g_1196, p_11)));
                    }
                    else
                    {
                        if (g_526)
                            break;
                        if (g_103)
                            continue;
                    }
                }
            }
            g_695 = (safe_rshift_func_uint8_t_u_u(l_1195, p_10));
        }
        l_1200 = (p_10 ^= l_1104);
    }
    g_695 = l_1228;
    return p_11;
}







static int func_15(char p_16, const short p_17, const char p_18, short p_19, unsigned p_20)
{
    g_695 |= g_724;
    return p_20;
}







static unsigned func_21(int p_22, unsigned short p_23, const unsigned short p_24, short p_25, unsigned short p_26)
{
    char l_824 = 0xEFL;
    int l_826 = (-8L);
    char l_827 = (-10L);
    p_22 = (func_29(func_34(p_22, (p_25 & 5UL)), ((l_826 = (1L && (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((g_825 = (((g_526 >= (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((+1L), ((0xCBC6L < 0x924BL) > 1UL))), g_13))) == l_824) && 0x4C54A92AL)), p_25)), p_23)))) == 0L), l_827, p_26) < l_824);
    return g_103;
}







static unsigned short func_29(const unsigned short p_30, unsigned char p_31, unsigned p_32, int p_33)
{
    return g_142;
}







static const unsigned short func_34(unsigned char p_35, unsigned p_36)
{
    char l_409 = 0x2EL;
    unsigned short l_414 = 65527UL;
    int l_415 = (-3L);
    int l_419 = 9L;
    int l_420 = 1L;
    short l_423 = 0xF0E6L;
    int l_470 = 0x27F65B8DL;
    unsigned l_529 = 0x595FBE27L;
    const unsigned l_788 = 1UL;
    int l_810 = 0x0B44B1B4L;
    short l_815 = 0L;
    if ((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0x36L, 6)), func_43(g_13))) != p_36), ((safe_unary_minus_func_uint8_t_u((l_409 && (safe_lshift_func_int16_t_s_s(((g_416 = (safe_add_func_uint32_t_u_u((l_415 = l_414), l_414))) < l_409), (l_420 = (l_419 = (safe_lshift_func_uint16_t_u_u(l_414, 15))))))))) ^ g_389))))
    {
        unsigned short l_429 = 0x8D6CL;
        int l_430 = 0xA4F2D4D6L;
        unsigned short l_453 = 0xEE65L;
        short l_469 = (-6L);
        int l_532 = (-3L);
        unsigned l_578 = 1UL;
        int l_597 = 0xB02DF14BL;
        unsigned short l_601 = 0x5C99L;
        char l_646 = (-1L);
        unsigned l_682 = 4294967288UL;
        const int l_729 = 0x56D245B6L;
        char l_809 = (-3L);
        if ((func_43((l_415 = (l_430 = (safe_add_func_uint16_t_u_u((l_423 != (g_146 = p_36)), ((safe_add_func_uint16_t_u_u(p_36, ((p_35 | p_35) == (((g_426 = l_414) > (safe_rshift_func_int8_t_s_u(l_429, 5))) < (p_35 || l_429))))) > g_406)))))) == g_13))
        {
            char l_450 = 4L;
            int l_452 = (-5L);
            l_430 = p_36;
            for (g_388 = 0; (g_388 != 13); ++g_388)
            {
                for (l_429 = 0; (l_429 > 28); l_429++)
                {
                    short l_451 = 0xDE9FL;
                    for (p_35 = 0; (p_35 < 34); p_35 = safe_add_func_uint8_t_u_u(p_35, 4))
                    {
                        l_452 &= (safe_add_func_uint16_t_u_u(0x7702L, ((safe_unary_minus_func_int16_t_s(func_53((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0L, (((func_53((p_35 && p_35), (~(((p_36 && ((safe_lshift_func_uint8_t_u_u((0xD4L || ((((g_426 ^ 65526UL) ^ (safe_mod_func_int32_t_s_s((l_450 || p_35), p_36))) ^ l_451) || p_36)), p_35)) & l_451)) | g_67) ^ p_36)), p_35) ^ 0x3CL) > g_406) && g_201))), 0xDEL)), p_36)), l_451, p_36))) > l_450)));
                        l_453 = 8L;
                        l_420 = l_453;
                    }
                }
            }
            g_142 = (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((l_450 || 1UL) ^ g_201), 8)) | 0xB6FB1F02L), 255UL));
            l_419 ^= (g_133 ^ (+((safe_unary_minus_func_int32_t_s(((l_420 < g_242) & ((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((l_423 > p_36), ((safe_rshift_func_int16_t_s_u(g_133, (+(((l_415 || (((safe_add_func_uint32_t_u_u(p_36, (l_430 = (((safe_mod_func_uint16_t_u_u(l_414, p_35)) || g_201) && g_146)))) & p_35) < 0x71L)) && g_300) > 0x1D79L)))) || g_135))), 0x5743L)) || 0xAF1AFB8CL)))) == p_35)));
        }
        else
        {
            l_419 &= (l_469 & (((((g_133 = (g_113 <= l_469)) > l_470) >= p_36) == 0xE5L) == p_35));
        }
        l_430 = g_242;
        for (p_35 = 10; (p_35 != 56); ++p_35)
        {
            const char l_475 = 0xD0L;
            int l_484 = 0x522DBA9DL;
            unsigned l_501 = 0x7F81C17BL;
            if (((safe_rshift_func_uint8_t_u_u(func_43((l_475 || g_133)), g_13)) ^ (p_36 < g_426)))
            {
                for (l_409 = (-11); (l_409 <= 7); ++l_409)
                {
                    return g_145;
                }
            }
            else
            {
                unsigned l_491 = 0x2451EDD1L;
                int l_492 = 0xC0F30DADL;
                g_242 = (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((g_103 == (l_484 ^= (safe_lshift_func_uint8_t_u_s((g_300 || (g_67 != p_36)), 4)))) >= 0xB5F7L), (safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(g_134, ((((g_75 = ((((safe_sub_func_int32_t_s_s((0x5AL && l_475), (-9L))) || 0UL) != p_36) && (-7L))) | l_491) != g_135) & g_145))) & l_475), 4)))), l_420));
                l_492 = p_35;
                l_430 |= 0xAF85F3CFL;
                g_142 = p_36;
            }
            if (l_430)
                break;
            for (l_423 = 17; (l_423 < (-30)); l_423 = safe_sub_func_uint16_t_u_u(l_423, 8))
            {
                unsigned l_509 = 0UL;
                int l_519 = 1L;
                for (g_388 = 15; (g_388 > 25); g_388++)
                {
                    if ((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(p_36, p_35)), ((l_415 = (func_53(l_501, (l_419 &= 1L), l_429) <= (p_36 | (g_426 < 65535UL)))) ^ g_416))))
                    {
                        int l_504 = 1L;
                        g_242 = (safe_mod_func_uint32_t_u_u((((l_504 = (-10L)) || 0x10A9L) || ((p_35 >= (p_35 <= (((safe_lshift_func_int16_t_s_s(g_75, 4)) | l_475) <= 0L))) != l_453)), (-1L)));
                        l_415 = 3L;
                    }
                    else
                    {
                        char l_510 = 9L;
                        g_135 = p_35;
                        l_509 |= p_36;
                        l_510 ^= g_242;
                    }
                    l_484 = (l_430 = (safe_add_func_uint16_t_u_u(p_36, 0x0AC4L)));
                    l_430 = func_53((~(func_53(((safe_mod_func_int16_t_s_s((g_406 = (~g_67)), l_509)) < (safe_lshift_func_int8_t_s_s(l_409, (safe_sub_func_uint32_t_u_u((g_300 | (((l_509 & p_36) <= 0UL) > g_113)), (((g_388 == 0x63L) > p_36) == g_113)))))), g_67, l_484) >= 0x5527L)), g_388, p_36);
                }
                g_135 &= (l_519 = g_389);
                l_484 = (safe_sub_func_int8_t_s_s(2L, (safe_sub_func_uint32_t_u_u(((g_146 = 0xEDL) != (g_406 || g_426)), g_388))));
            }
        }
        if ((~(safe_add_func_int16_t_s_s(((l_429 && (l_430 = g_526)) || (g_416 ^ 0xD4L)), func_43((safe_add_func_int32_t_s_s(((g_406 = l_529) ^ (l_532 = (safe_lshift_func_uint16_t_u_s(4UL, 15)))), (((g_146 = p_35) ^ p_35) || 0x0DL))))))))
        {
            char l_548 = 2L;
            l_532 &= g_103;
            for (l_415 = 9; (l_415 < 29); l_415 = safe_add_func_int16_t_s_s(l_415, 2))
            {
                unsigned l_550 = 0x6A020E8AL;
                g_135 = (safe_mod_func_int32_t_s_s(p_36, g_406));
                for (p_36 = 0; (p_36 >= 22); p_36 = safe_add_func_int16_t_s_s(p_36, 9))
                {
                    int l_545 = 2L;
                    char l_549 = 0x71L;
                    g_142 = ((0x2CDDL <= 0xF62AL) > (g_113 = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(0xAFL, ((safe_lshift_func_uint8_t_u_u((p_35 | (-7L)), (l_545 = 248UL))) && g_103))), (-1L)))));
                    for (g_300 = 0; (g_300 <= 2); g_300 = safe_add_func_int16_t_s_s(g_300, 2))
                    {
                        l_548 = g_300;
                    }
                    l_550 = (0x9399E39DL >= (p_36 || l_549));
                }
                g_242 = g_67;
                g_142 = (p_36 & (g_134 | (safe_sub_func_uint32_t_u_u((65531UL <= g_135), p_35))));
            }
        }
        else
        {
            unsigned l_595 = 0x28103AB7L;
            int l_659 = (-1L);
            int l_677 = 0L;
            unsigned l_678 = 6UL;
            int l_679 = 0x7E8873B0L;
            short l_697 = 0xC0E1L;
            unsigned l_807 = 0xEBFFAFC4L;
            int l_808 = 0x98E987EFL;
            l_430 = (((func_53((safe_add_func_int32_t_s_s((func_43(l_423) | (l_532 = ((((l_419 = p_35) || (g_416 == (+7L))) != (safe_lshift_func_int16_t_s_s((65530UL ^ (1UL & (p_36 != ((((g_557 = p_36) < p_36) & p_35) <= l_532)))), l_470))) & 2L))), g_426)), p_36, g_526) || 0x9C2A4E8AL) | 1L) >= g_13);
            l_420 = (safe_add_func_uint16_t_u_u(0UL, (l_430 | g_75)));
            if ((safe_lshift_func_int16_t_s_s(g_146, 12)))
            {
                unsigned l_569 = 4294967295UL;
                int l_598 = 6L;
                l_420 |= (func_53(func_43(p_36), (l_569 ^= ((0x793DL <= 0x1B61L) & ((~((safe_sub_func_int32_t_s_s((g_564 ^= (l_419 &= g_389)), g_426)) > (l_469 > ((safe_add_func_uint8_t_u_u((g_416 | (safe_mod_func_uint8_t_u_u(((-8L) <= p_36), (-1L)))), g_426)) <= 0x1508L)))) != 0UL))), p_36) || p_36);
                if ((g_242 = (safe_sub_func_int16_t_s_s(p_36, g_133))))
                {
                    for (g_135 = 0; (g_135 < 20); g_135++)
                    {
                        int l_596 = 0x197C6EF2L;
                        l_598 = (((safe_sub_func_int16_t_s_s(p_36, (~((safe_rshift_func_uint8_t_u_s(g_67, l_578)) ^ (l_597 ^= (((safe_rshift_func_uint16_t_u_s(0x9D82L, 8)) >= (safe_rshift_func_uint16_t_u_u(((g_242 = g_102) != ((safe_rshift_func_uint16_t_u_s((l_532 & (safe_add_func_uint16_t_u_u(((g_557 = (l_595 = (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_133, ((p_36 != l_430) == g_67))), p_35)), p_35)), p_35)))) ^ p_35), l_596))), g_564)) == 0xDE0E863DL)), g_389))) == 1L)))))) ^ p_36) <= l_569);
                        g_242 &= g_13;
                    }
                    l_598 = func_43((((safe_mod_func_uint32_t_u_u(l_601, ((0x0CL == (((l_532 |= p_35) & ((g_135 ^ g_133) ^ l_569)) & g_416)) ^ (safe_sub_func_int8_t_s_s(0xD3L, (l_430 = g_133)))))) <= g_133) || g_242));
                    g_135 = l_597;
                }
                else
                {
                    return g_75;
                }
            }
            else
            {
                return p_36;
            }
            if (l_601)
            {
                const unsigned l_610 = 0x1E5A4428L;
                int l_619 = 1L;
                int l_664 = 0x4BA9E946L;
                if (func_43(p_36))
                {
                    unsigned char l_615 = 0xCDL;
                    g_142 &= p_35;
                    g_618 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(func_43(p_36), (l_610 | (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((~l_615) & p_36), g_416)) ^ ((safe_sub_func_uint8_t_u_u(((p_35 && l_532) <= g_426), 0L)) & 4294967291UL)), 5))))) >= 0x4E3347DFL), l_453)), p_36));
                    g_135 |= (l_619 = 0x98D81E27L);
                    l_419 &= 0xD1C280BEL;
                }
                else
                {
                    int l_633 = (-1L);
                    for (l_419 = 0; (l_419 <= (-9)); --l_419)
                    {
                        short l_632 = 0xFF40L;
                        l_633 = (safe_add_func_uint32_t_u_u((g_405 > (safe_lshift_func_uint8_t_u_u(255UL, p_36))), func_53((0x16L == l_414), (safe_add_func_uint16_t_u_u((((l_632 |= ((g_146 = (safe_add_func_int32_t_s_s(l_595, (l_619 == p_35)))) | ((safe_mod_func_int16_t_s_s(p_36, p_36)) <= l_453))) ^ 65535UL) | g_201), 1L)), p_36)));
                        l_619 = (((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_610, (safe_mod_func_uint32_t_u_u((g_647 |= ((1UL ^ (((g_75 | ((p_35 > g_389) || (safe_add_func_int16_t_s_s((l_646 ^= (((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(l_595, g_242)), (0x4B74L < ((-10L) >= g_133)))) | g_426) ^ p_36)), p_35)))) && g_113) | l_610)) < g_564)), p_36)))), g_103)) ^ g_75) <= p_35);
                        return p_35;
                    }
                    for (l_423 = 20; (l_423 <= (-10)); --l_423)
                    {
                        int l_656 = 7L;
                        l_664 = (l_619 &= ((safe_rshift_func_uint16_t_u_u((p_36 & (g_426 |= ((p_36 <= (func_53(((~(safe_rshift_func_uint16_t_u_s(func_53(p_36, p_35, l_656), 0))) | (safe_rshift_func_uint16_t_u_u(((l_659 &= l_656) || (safe_mod_func_uint16_t_u_u((p_35 ^ (g_663 = (g_662 = (-5L)))), 0xCFBAL))), 4))), g_557, p_35) <= g_416)) | 0L))), g_416)) || p_36));
                        g_135 = p_35;
                        l_415 = l_595;
                    }
                }
                for (l_529 = (-1); (l_529 == 49); l_529 = safe_add_func_int16_t_s_s(l_529, 2))
                {
                    unsigned char l_669 = 0UL;
                    unsigned char l_676 = 1UL;
                    l_430 ^= 0x64910465L;
                    l_679 &= (l_678 |= (func_43((l_677 = ((((p_36 >= ((safe_lshift_func_int16_t_s_s(4L, l_669)) & p_36)) | (((safe_rshift_func_int8_t_s_u((l_659 = ((safe_sub_func_int32_t_s_s((p_36 <= ((l_664 = p_36) && (safe_add_func_int32_t_s_s(0x19016231L, (func_53(l_423, ((((0xE8L >= l_619) && g_201) < 0xE9B2C0ABL) != 6UL), p_36) ^ l_610))))), p_35)) & 1UL)), g_389)) ^ p_36) | g_405)) > l_676) && 4294967295UL))) | g_647));
                    l_597 = (g_242 = ((safe_add_func_uint8_t_u_u(l_682, p_36)) >= g_145));
                }
            }
            else
            {
                int l_696 = (-1L);
                int l_700 = 0xCDA68971L;
                unsigned char l_730 = 0UL;
                int l_751 = 1L;
                if (((safe_lshift_func_int8_t_s_u(func_43(l_659), 6)) ^ (safe_mod_func_uint32_t_u_u((l_470 >= g_663), (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((l_420 ^= p_35), 7)) != 0xB9FB2664L), (((l_419 >= (g_695 = p_36)) | l_696) >= l_678))) & g_564), l_697)), l_677))))))
                {
                    g_695 = g_647;
                    l_597 = (safe_add_func_uint8_t_u_u(g_663, (0x2D62B9C8L | (l_700 |= p_36))));
                    for (g_389 = 0; (g_389 < 23); g_389++)
                    {
                        if (l_415)
                            break;
                        return g_113;
                    }
                    l_700 |= func_43(p_35);
                }
                else
                {
                    return g_242;
                }
                if (g_416)
                {
                    char l_703 = 0xAEL;
                    int l_725 = 0x7802AC4AL;
                    g_142 &= (0L <= p_36);
                    l_703 = p_36;
                    l_415 = (safe_rshift_func_uint8_t_u_u((g_389 > (((safe_lshift_func_int16_t_s_s((0L > l_678), 12)) == (safe_mod_func_uint8_t_u_u((l_696 <= (g_406 = p_35)), 0xC4L))) | (l_532 = 0x0147081EL))), 1));
                    if (((((g_406 != (g_67 <= p_35)) >= ((l_677 |= (-1L)) < (l_659 &= ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((p_35 && (((safe_lshift_func_int8_t_s_s(g_426, 7)) != (255UL < ((g_146 = (g_406 & (safe_sub_func_int16_t_s_s((g_724 = l_429), 7UL)))) != p_36))) > l_409)), 0)), p_35)), p_35)), g_663)) <= g_526)))) | 5UL) > 65531UL))
                    {
                        unsigned char l_728 = 0xA6L;
                        l_725 = l_679;
                        g_695 &= ((((l_682 ^ (safe_sub_func_uint8_t_u_u(p_35, 0L))) | (l_728 = (+(l_532 ^= func_43(p_36))))) | (l_729 > g_13)) & l_659);
                        l_679 = l_730;
                    }
                    else
                    {
                        int l_731 = 0x82C8ED13L;
                        int l_743 = 0L;
                        unsigned l_756 = 2UL;
                        l_731 &= p_35;
                        l_430 = (safe_unary_minus_func_uint8_t_u(((safe_mod_func_uint8_t_u_u(func_53((safe_lshift_func_int16_t_s_u((g_406 |= (0x9CE5L >= ((((p_35 < p_36) > (safe_add_func_int8_t_s_s(g_113, (((safe_sub_func_int8_t_s_s((l_751 = ((((l_743 = g_695) ^ ((safe_add_func_int8_t_s_s((p_36 & (safe_mod_func_int32_t_s_s((l_700 = (l_532 <= (safe_lshift_func_int8_t_s_s(g_103, 5)))), l_532))), g_389)) > p_35)) > g_750) != g_557)), p_36)) > l_429) != g_134)))) ^ l_725) ^ 0L))), g_724)), l_696, g_242), 255UL)) || l_731)));
                        g_135 &= (l_420 = ((safe_mod_func_uint32_t_u_u(g_145, (safe_add_func_uint8_t_u_u(((l_415 = ((((l_756 | g_564) == g_750) | (p_36 <= (safe_rshift_func_uint8_t_u_u((p_36 == ((0xCC2107BEL <= (safe_rshift_func_int8_t_s_s(p_35, p_35))) >= g_662)), 0)))) >= p_35)) > p_35), 0x34L)))) == g_663));
                    }
                }
                else
                {
                    short l_784 = 0x470EL;
                    l_677 |= (l_679 = 0x73EFF802L);
                    if (((safe_lshift_func_int8_t_s_u(p_36, 0)) || (safe_add_func_int8_t_s_s(((func_53(func_53((g_406 = g_618), (safe_rshift_func_uint8_t_u_u(g_300, 2)), g_134), p_36, g_750) > 0xF30EL) > g_750), 1UL))))
                    {
                        l_415 = 0L;
                        l_700 = 0xDB8C20ACL;
                    }
                    else
                    {
                        unsigned l_767 = 0UL;
                        char l_774 = 4L;
                        l_767 = g_103;
                        g_695 &= func_43(g_102);
                        l_597 = func_53(l_767, ((safe_add_func_uint8_t_u_u(p_36, func_43((((((safe_lshift_func_int8_t_s_u(l_532, (safe_rshift_func_int8_t_s_u(((((((g_133 & 0xBE025326L) > p_35) <= p_35) & g_647) < p_35) >= (-3L)), 5)))) && 0x72L) & p_36) && p_35) <= 246UL)))) < l_767), p_36);
                        l_751 = (((func_53(g_564, (((((func_43(g_75) <= g_557) | (l_730 != p_36)) > (((4294967291UL ^ (((l_774 |= (g_750 != (((!((0x29L & g_416) | 0x64L)) || l_469) == p_35))) ^ 0xC910F1B8L) >= l_414)) == p_35) >= l_420)) >= 1L) ^ 0L), l_469) | 0xEACCD51DL) == l_659) == g_662);
                    }
                    if (p_36)
                    {
                        unsigned char l_775 = 1UL;
                        l_415 = ((l_784 &= (0x25C7L >= (((g_146 ^= 0xB0L) | l_775) != ((g_663 & g_133) ^ (0L < (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(5UL, (l_682 >= ((g_750 &= (p_35 != (-3L))) <= g_142)))), 0L)), 0)) && p_35) & g_75), 2))))))) || (-8L));
                        l_700 = (g_663 == (safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s(l_788, 0)))));
                    }
                    else
                    {
                        unsigned char l_789 = 0x77L;
                        int l_800 = 0x839A395DL;
                        l_700 = 0L;
                        g_242 = (0x36CFL >= ((l_789 = l_700) != (g_426 = (safe_add_func_int8_t_s_s((p_35 != (safe_lshift_func_int16_t_s_s(((l_784 != g_67) >= ((safe_lshift_func_int16_t_s_u(p_35, 2)) < (l_729 | p_36))), 11))), (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(p_35, l_800)), l_788)))))));
                        l_700 = p_36;
                    }
                }
                l_597 = func_53(p_36, (safe_add_func_uint32_t_u_u(((g_526 || p_36) || (safe_add_func_int16_t_s_s(g_557, (l_700 = ((((l_808 = ((func_43((safe_unary_minus_func_uint16_t_u(((((l_419 = ((g_806 = ((func_53(l_700, l_751, l_696) || p_35) ^ p_36)) & l_807)) < g_750) >= l_700) == l_730)))) ^ l_414) < p_35)) >= p_35) && p_35) < g_526))))), l_751)), l_809);
            }
        }
    }
    else
    {
        l_810 = p_35;
    }
    g_695 = (((g_389 >= p_35) || (((safe_mod_func_uint8_t_u_u(l_419, (-3L))) != ((safe_rshift_func_uint16_t_u_u((l_529 & 4L), func_53((((p_35 ^= l_409) < func_43(p_36)) | p_36), g_557, l_529))) & g_416)) > g_647)) || l_815);
    l_419 = l_810;
    l_415 = (-10L);
    return p_36;
}







static char func_43(char p_44)
{
    int l_66 = (-1L);
    int l_305 = 0L;
    unsigned short l_345 = 0x3F61L;
    unsigned l_362 = 0x8A185862L;
    int l_407 = 0x5DF68B05L;
    for (p_44 = 0; (p_44 >= (-4)); --p_44)
    {
        int l_68 = (-2L);
        const unsigned short l_309 = 0x99E6L;
        if ((safe_rshift_func_uint16_t_u_u(g_13, ((~(safe_unary_minus_func_uint8_t_u(p_44))) <= (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s(func_53(((safe_add_func_uint8_t_u_u(((4294967295UL ^ (safe_sub_func_uint16_t_u_u(p_44, ((((safe_unary_minus_func_int16_t_s((safe_unary_minus_func_uint16_t_u(3UL)))) & ((safe_unary_minus_func_uint16_t_u((safe_sub_func_int16_t_s_s(l_66, ((g_67 = (p_44 == p_44)) || g_13))))) | g_13)) | g_13) != 0x3CC1L)))) < l_68), (-1L))) ^ 0xCE85L), p_44, l_66))), 3))))))
        {
            unsigned l_308 = 0UL;
            int l_310 = 0x3BA547C4L;
            int l_355 = 7L;
            g_142 = p_44;
            if (p_44)
                break;
            if (((l_68 ^ g_146) >= (l_305 = ((247UL < p_44) == 0x22L))))
            {
                int l_320 = 0x24ED3E9AL;
                l_310 = ((p_44 == (-1L)) || (func_53(p_44, (p_44 == ((((l_308 = (l_305 = func_53(g_103, g_201, g_300))) == l_309) | 0xF9F1L) <= 0x6DL)), l_310) < g_13));
                for (g_103 = 0; (g_103 != (-29)); --g_103)
                {
                    unsigned char l_319 = 9UL;
                    int l_323 = (-5L);
                    l_323 = (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((1UL && (g_67 < (safe_rshift_func_int8_t_s_u(p_44, 5)))), (l_320 ^= l_319))), (l_319 & (p_44 > (safe_sub_func_int16_t_s_s(g_67, (+((l_310 ^ g_102) >= p_44))))))));
                    g_142 = p_44;
                    l_305 &= (((g_135 &= (safe_rshift_func_int8_t_s_s(g_145, 0))) || (l_309 > 9L)) != p_44);
                }
                if (g_113)
                    continue;
            }
            else
            {
                int l_334 = 0x37C15CB5L;
                int l_364 = 1L;
                if (p_44)
                    break;
                if ((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(l_310, g_13)) < (p_44 > (safe_lshift_func_int16_t_s_u(func_53(g_242, ((g_146 ^= ((safe_mod_func_uint8_t_u_u((l_334 ^ (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((g_75 != (safe_add_func_int8_t_s_s((((safe_add_func_int32_t_s_s((1L > l_308), (safe_mod_func_uint16_t_u_u((0x0FCE14DBL | l_345), l_334)))) > 1UL) > l_310), p_44))), 0x4FA59629L)), p_44))), l_308)) == (-1L))) != g_102), l_66), 11)))), l_309)))
                {
                    int l_354 = 0L;
                    for (g_103 = 26; (g_103 > (-1)); g_103 = safe_sub_func_uint32_t_u_u(g_103, 5))
                    {
                        g_142 |= (l_305 &= g_75);
                        g_142 = (l_310 |= g_142);
                    }
                    l_355 ^= (!(((0xCB51DA38L || ((safe_add_func_uint16_t_u_u(p_44, (func_53((safe_add_func_uint8_t_u_u(p_44, 0x10L)), (safe_add_func_uint8_t_u_u(func_53(l_310, func_53(l_334, l_354, l_310), g_13), 0x6DL)), p_44) <= 0UL))) >= p_44)) && 2L) != g_13));
                }
                else
                {
                    unsigned char l_363 = 0x02L;
                    int l_365 = 0L;
                    l_365 = ((-1L) ^ ((l_364 &= (l_363 = (p_44 | func_53((p_44 == g_145), (0x746FDB34L == ((0L != l_334) == (((safe_add_func_uint16_t_u_u(((g_133 = p_44) && g_133), p_44)) & 0xD6L) > l_362))), g_300)))) ^ g_13));
                    if (g_135)
                        break;
                    g_142 = ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(65526UL, 14)), (safe_rshift_func_int8_t_s_u(g_67, (safe_add_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((l_68 = p_44), (safe_add_func_uint8_t_u_u(p_44, (g_388 |= (l_334 = (safe_mod_func_uint8_t_u_u((l_363 & l_363), (safe_sub_func_int32_t_s_s((255UL || ((safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((g_102 > p_44) || l_363) || l_334), 1L)), 0xE1FDL)) == g_102)), g_75)))))))))), g_113)) & g_201), g_135)))))) < 6L);
                }
                l_305 = ((l_364 = g_389) >= g_113);
            }
            l_305 = 1L;
        }
        else
        {
            unsigned l_390 = 0x536371DDL;
            l_390 ^= p_44;
        }
        l_407 = (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((p_44 ^ (safe_add_func_int32_t_s_s((g_300 & l_68), (l_305 = (((safe_rshift_func_uint8_t_u_s(g_103, (g_406 ^= ((0xD3L & (safe_rshift_func_uint8_t_u_u((((g_102 = p_44) >= l_68) <= 4294967294UL), 4))) != (((safe_rshift_func_int16_t_s_s((g_405 = ((safe_lshift_func_int16_t_s_s(((((l_68 < 4L) <= 0UL) <= p_44) & 0x89D6F418L), 7)) >= p_44)), g_142)) <= l_309) && g_242))))) == p_44) == p_44))))), g_103)), 3L));
    }
    return p_44;
}







static short func_53(short p_54, char p_55, int p_56)
{
    short l_69 = 1L;
    int l_74 = 0L;
    int l_88 = 1L;
    unsigned l_96 = 4294967293UL;
    int l_297 = (-7L);
    if (l_69)
    {
        unsigned l_78 = 7UL;
        int l_83 = 0x020C2888L;
        int l_84 = (-7L);
        const unsigned l_101 = 4294967295UL;
        unsigned l_172 = 2UL;
        unsigned short l_179 = 1UL;
        char l_181 = 0L;
        unsigned short l_301 = 0x7B80L;
        if ((safe_sub_func_int8_t_s_s(l_69, (l_74 = ((0UL == p_56) < (g_67 && (safe_sub_func_int16_t_s_s(g_13, g_13))))))))
        {
            unsigned l_85 = 3UL;
            short l_180 = 0xA01DL;
            short l_241 = 1L;
            int l_245 = (-8L);
            g_75 = (-10L);
            l_74 = ((g_67 & (((safe_lshift_func_int8_t_s_u(g_75, 1)) == l_78) <= (-1L))) < (((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_83 = l_69), (l_84 = 0xE1L))), l_85)) > p_56) > (~l_74)));
            if ((safe_sub_func_int16_t_s_s(g_75, (l_88 = (l_74 = g_67)))))
            {
                return p_54;
            }
            else
            {
                char l_93 = 1L;
                unsigned l_157 = 4294967291UL;
                int l_158 = 0x7602C2F6L;
                if (((((safe_sub_func_uint16_t_u_u(l_78, ((safe_sub_func_int32_t_s_s((g_13 && l_93), (safe_rshift_func_int16_t_s_s((0x2359L & l_96), 13)))) <= g_75))) && (safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_93 || g_13), g_67)), 1))) < l_101) <= 0xA6L))
                {
                    int l_108 = 1L;
                    g_102 = g_13;
                    g_103 = g_67;
                    if (g_75)
                    {
                        return l_78;
                    }
                    else
                    {
                        short l_124 = 0L;
                        l_84 = (0x40302764L && (safe_add_func_uint8_t_u_u((g_113 = ((safe_add_func_int32_t_s_s((l_74 = g_75), l_108)) || (safe_sub_func_uint8_t_u_u(((p_56 & 2UL) && 8L), (g_67 && (safe_mod_func_int16_t_s_s(((0x4177E56DL && p_55) ^ 1UL), 1L))))))), g_13)));
                        l_124 ^= ((g_13 <= (l_85 >= (g_75 && ((0UL > g_75) <= p_54)))) < ((safe_add_func_uint32_t_u_u((((((l_88 |= ((safe_sub_func_uint32_t_u_u((l_83 &= (p_54 <= p_56)), (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((g_103 | 0x8FL) < 0xBCB13712L) & l_69), l_101)), g_67)), 3)))) != 7UL)) | (-1L)) != p_56) <= p_56) && 0x60CBL), 0xC85E55DFL)) <= l_101));
                        g_135 = ((((g_134 = (((safe_rshift_func_uint16_t_u_s(g_13, 13)) & ((-6L) != (((safe_rshift_func_int16_t_s_u((g_133 ^= (safe_sub_func_uint16_t_u_u(0x2462L, (safe_rshift_func_int16_t_s_u(0x6612L, g_103))))), g_75)) == (g_67 = p_54)) >= (5L >= 0xC0DA3939L)))) || 0x0EL)) >= 0xDDL) && (-7L)) & p_55);
                        g_135 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(0x8730L, (g_142 &= p_54))), (((0xBB75L & (safe_add_func_uint32_t_u_u(l_93, g_134))) >= (p_56 >= ((g_145 = g_134) == (g_103 ^ ((l_93 & p_55) & g_13))))) >= l_93))), 0x10F0L));
                    }
                }
                else
                {
                    char l_151 = 0x10L;
                    short l_156 = (-1L);
                    int l_167 = 8L;
                    g_142 = (g_146 != 1L);
                    for (l_84 = 0; (l_84 <= 9); l_84 = safe_add_func_int8_t_s_s(l_84, 2))
                    {
                        l_83 = l_69;
                        g_142 = (safe_rshift_func_uint16_t_u_s(g_103, 0));
                        return l_151;
                    }
                    if ((p_56 && ((safe_mod_func_int8_t_s_s((g_102 <= 0x7A5B985AL), (safe_rshift_func_int8_t_s_s(g_102, 7)))) ^ (g_145 || (l_156 < 0xAF8AA5B3L)))))
                    {
                        return l_157;
                    }
                    else
                    {
                        g_135 = g_135;
                        l_158 = p_54;
                        g_142 = l_158;
                        g_135 = g_113;
                    }
                    l_167 &= (safe_lshift_func_int16_t_s_s(l_84, (safe_add_func_uint32_t_u_u((l_83 > p_56), (l_74 &= ((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0L, l_84)), g_102)) & 255UL))))));
                }
                g_142 = (p_55 | (l_69 & ((p_55 > (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((g_146 = (p_55 || (l_172 < (((safe_rshift_func_uint16_t_u_s(1UL, 12)) | p_55) && ((safe_sub_func_int32_t_s_s(g_113, (((((((l_179 ^= (safe_lshift_func_uint16_t_u_s(4UL, 1))) > p_55) < l_180) || g_103) < 0x045AL) <= g_146) || l_180))) & g_13))))), 0x99L)), p_54))) <= l_181)));
            }
            if (p_55)
            {
                short l_190 = (-5L);
                int l_229 = (-1L);
                g_142 ^= (safe_rshift_func_int16_t_s_s(p_56, 10));
                for (l_96 = 3; (l_96 >= 26); l_96++)
                {
                    char l_188 = 0x6FL;
                    int l_189 = 2L;
                    g_201 |= (p_55 != (safe_add_func_uint32_t_u_u(l_188, (l_88 = (l_74 ^= (g_135 < (((l_190 = (255UL ^ (l_189 = 0x3CL))) || (safe_rshift_func_int16_t_s_s(p_55, ((((l_190 != (safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((l_189 &= (0x6EB52EEBL < (safe_lshift_func_int16_t_s_u(0x2175L, 4)))) || g_135) != g_13), 0x1A2211D2L)), 1UL)) < g_113), 0xC7BFA83AL))) != g_134) || g_133) > l_69)))) & g_142)))))));
                    g_142 &= p_54;
                    g_142 = l_88;
                }
                for (g_134 = 21; (g_134 < 52); g_134++)
                {
                    unsigned char l_210 = 0x7AL;
                    int l_223 = (-4L);
                    short l_240 = 4L;
                    g_135 = ((p_55 > ((safe_add_func_int16_t_s_s(g_142, l_69)) ^ (safe_sub_func_int16_t_s_s(4L, (safe_add_func_int16_t_s_s((0x4822L & l_190), ((((+(g_135 >= ((g_133 = (l_74 = l_210)) < g_146))) && p_54) & p_55) < g_113))))))) && g_145);
                    g_135 = (g_103 || g_142);
                    if ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((9UL | (((safe_lshift_func_uint8_t_u_u(g_67, 3)) != 4UL) == 0UL)), (p_56 >= p_55))), (((safe_rshift_func_uint8_t_u_s((0x9BL | (p_56 <= (0xE7L >= g_113))), 5)) == 0xCBL) == p_55))))
                    {
                        g_135 = (~(l_223 ^= ((safe_rshift_func_uint8_t_u_s(1UL, 0)) && (g_146 = p_54))));
                        if (l_101)
                            continue;
                    }
                    else
                    {
                        g_142 ^= l_179;
                        g_142 = l_223;
                        g_142 = (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(l_83)), (safe_rshift_func_int16_t_s_s((l_229 = p_56), (((safe_sub_func_uint32_t_u_u((g_133 | (((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(g_134, 0)), (+g_67))) & l_84) > l_172)), (((safe_lshift_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u(0x36L, (p_55 &= (~(p_54 | p_56))))) == l_240) == 0UL) || l_190), l_241)) >= p_54) <= g_242))) > (-1L)) <= l_172)))));
                        g_135 &= 0L;
                    }
                    g_142 = (0x1CL == 0x2EL);
                }
                l_84 = (safe_add_func_int32_t_s_s((-2L), (g_201 < (((l_245 &= ((0x16L >= g_13) < 0x2E1AL)) || ((g_135 ^ g_67) & (((l_180 != (safe_mod_func_uint8_t_u_u(l_101, p_55))) != 250UL) == p_55))) != 0xD2L))));
            }
            else
            {
                g_242 = (l_179 || (l_88 = (safe_sub_func_int8_t_s_s(g_67, g_133))));
                l_74 = (safe_add_func_uint32_t_u_u(p_55, p_55));
            }
        }
        else
        {
            unsigned char l_256 = 253UL;
            int l_257 = 0x4CAE8D20L;
            int l_258 = 1L;
            g_242 = (((g_135 &= (safe_add_func_uint32_t_u_u(p_54, p_54))) == ((((g_102 && 4294967290UL) && (safe_mod_func_uint32_t_u_u(l_88, g_102))) >= p_56) & (l_181 || ((g_75 = p_55) || g_133)))) & l_256);
            l_258 &= (l_257 = ((l_256 & 4294967291UL) <= l_172));
        }
        for (g_67 = 20; (g_67 >= 47); g_67 = safe_add_func_uint16_t_u_u(g_67, 3))
        {
            char l_261 = 1L;
            int l_262 = 0x2232ECD0L;
            l_261 = (l_181 != l_101);
            l_88 = ((l_262 |= p_55) <= (0x8FA5L >= ((l_84 ^= (safe_lshift_func_uint8_t_u_u((g_146 = p_56), 0))) > (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_u(1UL, (safe_add_func_uint8_t_u_u(p_54, 0x0AL)))))))));
            l_88 = l_261;
            if (l_261)
                continue;
        }
        for (g_113 = 3; (g_113 != 46); ++g_113)
        {
            short l_286 = 0L;
            l_88 = (safe_sub_func_int16_t_s_s((l_84 = p_54), (safe_lshift_func_uint8_t_u_s(g_201, (((((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((+p_54) < (safe_sub_func_uint8_t_u_u(g_201, (-1L)))), (safe_sub_func_int32_t_s_s(g_201, 0x56DCD957L)))), g_75)) > ((safe_sub_func_uint16_t_u_u(l_286, 1L)) < l_286)) | 4294967288UL) || l_286) && l_88)))));
            l_301 = (safe_sub_func_int8_t_s_s(g_134, (g_146 = (safe_add_func_int32_t_s_s(l_286, ((safe_lshift_func_int8_t_s_u(g_145, (safe_rshift_func_int16_t_s_s((g_300 = ((((l_297 = ((safe_sub_func_int8_t_s_s(p_54, l_286)) & l_74)) | g_133) & 0xB9E970FDL) >= ((safe_sub_func_uint16_t_u_u(7UL, g_133)) == p_55))), 6)))) == g_67))))));
        }
    }
    else
    {
        unsigned short l_302 = 5UL;
        g_242 = l_302;
    }
    for (g_300 = 0; (g_300 >= 23); g_300 = safe_add_func_int16_t_s_s(g_300, 6))
    {
        return p_56;
    }
    return g_67;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_724, "g_724", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_825, "g_825", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_1140, "g_1140", print_hash_value);
    transparent_crc(g_1178, "g_1178", print_hash_value);
    transparent_crc(g_1196, "g_1196", print_hash_value);
    transparent_crc(g_1201, "g_1201", print_hash_value);
    transparent_crc(g_1240, "g_1240", print_hash_value);
    transparent_crc(g_1265, "g_1265", print_hash_value);
    transparent_crc(g_1275, "g_1275", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
