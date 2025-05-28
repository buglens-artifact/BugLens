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



static volatile int g_2 = (-10L);
static int g_3 = 0xE2DB58E4L;
static int g_6 = (-1L);
static volatile int g_9 = 0xEA122098L;
static int g_10 = (-3L);
static int g_60 = 0x764457C1L;
static short g_97 = 0L;
static char g_100 = 0L;
static unsigned char g_105 = 0UL;
static unsigned short g_118 = 0x757FL;
static unsigned char g_119 = 255UL;
static int g_147 = 0x0E8EEE9DL;
static int g_180 = 0x970B5AE5L;
static short g_195 = (-6L);
static unsigned g_197 = 0x4286F750L;
static unsigned g_228 = 0xB8E4AF28L;
static unsigned char g_229 = 3UL;
static int g_247 = 5L;
static unsigned char g_259 = 0x75L;
static unsigned g_260 = 0x14DCBCBFL;
static const char g_325 = 0xF2L;
static int g_327 = 0x57419008L;
static unsigned short g_362 = 0x8BEBL;
static char g_430 = (-3L);
static unsigned short g_508 = 0x0B2AL;
static unsigned char g_511 = 1UL;
static unsigned short g_562 = 0x499EL;
static int g_573 = 1L;
static unsigned g_724 = 0x50B0CA8CL;
static unsigned char g_726 = 0xEAL;
static volatile int g_743 = 0xF9900A5EL;
static short g_760 = 0x5534L;
static short g_785 = 0x5A5AL;
static int g_959 = 0x8E3C36F0L;
static volatile unsigned g_982 = 0x2A25E73AL;
static unsigned g_1043 = 0x4FB60BDAL;
static char g_1075 = 0x63L;
static int g_1158 = (-1L);
static int g_1186 = (-7L);
static short g_1231 = 0x9763L;
static unsigned g_1249 = 0x3C0EC2BAL;



static int func_1(void);
static int func_13(int p_14);
static unsigned func_17(int p_18);
static short func_21(const int p_22, unsigned short p_23, const int p_24, int p_25);
static short func_33(unsigned p_34, short p_35, const short p_36, unsigned char p_37, unsigned p_38);
static unsigned func_39(const int p_40, unsigned p_41);
static unsigned char func_44(int p_45, unsigned char p_46, int p_47, unsigned p_48, int p_49);
static int func_63(int p_64, unsigned p_65, char p_66, unsigned p_67, unsigned p_68);
static unsigned func_74(unsigned char p_75, unsigned char p_76, short p_77);
static unsigned func_79(unsigned short p_80, short p_81, int p_82);
static int func_1(void)
{
    short l_515 = 1L;
    unsigned short l_518 = 65530UL;
    int l_958 = 9L;
    char l_1085 = 0xAFL;
    unsigned l_1176 = 1UL;
    short l_1208 = 0xEFB9L;
    int l_1209 = 0xADEBF4BEL;
    char l_1210 = 3L;
    unsigned l_1216 = 0UL;
    int l_1217 = 1L;
    unsigned short l_1240 = 0x9670L;
    const unsigned char l_1263 = 0xA6L;
    for (g_3 = 0; (g_3 == (-1)); g_3--)
    {
        unsigned l_1086 = 1UL;
        short l_1087 = (-6L);
        int l_1126 = 1L;
        int l_1157 = 0xFB4F89C3L;
        unsigned l_1213 = 3UL;
        for (g_6 = 28; (g_6 != (-25)); g_6 = safe_sub_func_int32_t_s_s(g_6, 9))
        {
            short l_514 = (-8L);
            unsigned char l_1093 = 0x3FL;
            int l_1122 = 1L;
            int l_1125 = 0x3C6D5848L;
            unsigned char l_1138 = 1UL;
            unsigned short l_1177 = 0xDF58L;
            if (g_6)
                break;
            for (g_10 = 0; (g_10 != (-6)); g_10 = safe_sub_func_int32_t_s_s(g_10, 4))
            {
                unsigned l_519 = 0x90EEE9ADL;
                int l_1084 = (-6L);
                int l_1159 = (-1L);
                unsigned short l_1175 = 65535UL;
                g_1075 ^= func_13((g_959 ^= (((l_958 = ((safe_add_func_uint32_t_u_u(((((func_17(((safe_sub_func_int16_t_s_s(func_21(g_10, g_10, g_10, g_2), (safe_div_func_uint8_t_u_u(((l_514 , (g_197 >= l_515)) != ((safe_lshift_func_int16_t_s_s(func_44(l_515, l_515, l_518, l_518, l_519), 12)) == g_325)), 0x21L)))) , g_180)) >= g_197) <= 0xC45EED89L) , l_514) < 0xB76EL), 0xE1794E10L)) > g_6)) ^ 1UL) > g_6)));
                if (func_63(g_724, (safe_rshift_func_uint16_t_u_s((((l_1087 ^= func_33(func_79(((safe_rshift_func_int8_t_s_u((l_518 & (-2L)), 2)) , 0xADEFL), g_247, ((safe_rshift_func_int8_t_s_s(l_514, (0xE9L >= (l_519 & func_44((l_1084 = (g_180 = (safe_add_func_uint16_t_u_u(0UL, g_760)))), g_100, g_228, l_1085, l_515))))) == l_514)), l_958, g_60, g_743, l_1086)) == l_514) & 0UL), l_519)), l_519, l_514, g_229))
                {
                    unsigned short l_1094 = 65533UL;
                    int l_1139 = (-3L);
                    for (g_430 = 13; (g_430 == (-12)); g_430 = safe_sub_func_uint8_t_u_u(g_430, 1))
                    {
                        unsigned short l_1092 = 65535UL;
                        l_958 = (safe_rshift_func_uint8_t_u_u(l_1092, 4));
                        l_958 ^= l_1093;
                        l_958 = ((g_430 > (((g_785 ^ ((func_74((l_1094 , (func_44(g_100, g_760, g_573, l_1092, (safe_lshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s(g_562, (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((((g_6 , 1L) | 0x5D70L) | l_1087) == g_430), l_1086)), 0xF887L)), 13)), l_1092)))) != 0L), g_247))) | 0UL)), g_118, g_982) < g_3) , 5L)) < l_1092) >= 0xBCL)) < l_1093);
                    }
                    if (l_958)
                        continue;
                    for (g_180 = 22; (g_180 != (-9)); g_180 = safe_sub_func_int16_t_s_s(g_180, 1))
                    {
                        unsigned l_1113 = 8UL;
                        int l_1137 = 0xB5838CA8L;
                        g_147 = (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(l_1113, (func_79((safe_lshift_func_uint16_t_u_u(g_229, 12)), (~(!(safe_sub_func_int16_t_s_s(l_1113, g_362)))), ((g_195 = g_573) & (l_1126 ^= (safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s((g_785 = 0L), func_79(l_514, ((func_79((g_508 = (l_1122 |= g_982)), (g_97 |= (safe_div_func_int16_t_s_s((l_1125 = 6L), 1UL))), g_119) , l_1113) , 1L), l_1113))), g_511))))) <= 5UL))) ^ 0x51FA59BBL), 15));
                        g_147 = (safe_sub_func_uint16_t_u_u(((l_1122 = g_228) >= ((g_10 , ((safe_add_func_uint32_t_u_u(g_228, (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(g_97, (l_1126 , (safe_rshift_func_int8_t_s_s((l_1137 = g_119), ((l_515 > (l_1138 ^ (l_1139 = (g_247 = (l_1125 = ((g_430 ^ g_959) != 0x6BL)))))) == 0x08BFFEA6L)))))), 2)))) , 255UL)) | 255UL)), (-1L)));
                    }
                    if (g_1075)
                        break;
                }
                else
                {
                    char l_1146 = 0L;
                    unsigned l_1185 = 4294967288UL;
                    g_60 ^= (safe_add_func_uint16_t_u_u((l_515 != ((g_260 = (safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_1146, (l_958 |= (g_259 >= (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(g_508, g_573)), (l_1159 = (safe_lshift_func_int16_t_s_u((g_743 == (safe_lshift_func_uint16_t_u_s((func_44(((((safe_lshift_func_int16_t_s_s((g_247 ^ 65532UL), l_1125)) , g_180) || (-6L)) | g_362), g_105, l_1122, g_508, l_1126) != l_1157), 8))), g_1158))))))))), 255UL))) | l_1126)), 65532UL));
                    if ((safe_rshift_func_int8_t_s_s(1L, (((g_229 = l_1086) || (safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_508, ((func_74((safe_lshift_func_int8_t_s_u((func_79(l_1159, ((safe_sub_func_uint32_t_u_u((g_105 == 247UL), (l_1146 & ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s(0xCDL)), 1)) | l_1175)))) > l_1093), g_508) || l_1159), l_1176)), l_1087, l_1177) , g_97) , 9UL))), g_573)) , l_958), 4L))) , g_229))))
                    {
                        return l_515;
                    }
                    else
                    {
                        short l_1184 = (-9L);
                        int l_1187 = 1L;
                        g_959 = (((l_1126 ^= (safe_rshift_func_int8_t_s_u((-8L), 2))) <= l_1146) >= ((l_1138 != (safe_add_func_uint32_t_u_u((g_1186 = (((l_519 , ((l_1157 = (((l_958 = g_743) <= (g_260 = (((-9L) >= (safe_div_func_uint8_t_u_u(l_1138, 0x84L))) , l_1184))) > l_1146)) && l_1185)) == 1L) , g_959)), g_785))) , 5UL));
                        l_1187 = 0x5A97F174L;
                    }
                }
                l_1126 = (g_1158 = (0xF795D7B2L > (((((safe_lshift_func_uint8_t_u_s(func_33(((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_1175, 0)), 0x8AC7L)) == (((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((g_785 = (safe_rshift_func_int8_t_s_s(7L, ((l_1125 = (l_1209 |= (g_100 | (safe_add_func_uint32_t_u_u((l_1122 &= (g_260 ^= (safe_div_func_uint16_t_u_u(func_63((l_958 , g_118), (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((g_60 > 4294967287UL), 2)), 0xC83BL)), g_1043, l_1208, l_1159), l_1175)))), g_229))))) >= l_958)))), 7)) , l_1210), 65535UL)) & l_1175) , g_3)), l_1085, g_10, l_515, g_430), l_1086)) , g_743) && l_1175) , g_197) , g_430)));
            }
        }
        g_247 = (safe_sub_func_uint8_t_u_u(((l_1213 < 9UL) , (g_573 && l_1086)), func_39(l_1213, (((((l_958 = ((g_229 > (((g_259 = (g_100 != (safe_div_func_uint16_t_u_u((l_1216 = g_2), l_515)))) | l_1085) <= l_1217)) != 0x36DB56B8L)) ^ l_1087) | l_1217) || l_1157) || 65535UL))));
    }
    for (l_958 = 0; (l_958 >= 7); ++l_958)
    {
        const unsigned short l_1224 = 0x83C4L;
        int l_1227 = (-1L);
        char l_1228 = (-1L);
        int l_1232 = 0x5CDDB3ECL;
        l_1228 = (safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(((l_1224 < (safe_mod_func_int32_t_s_s((((l_1224 , func_74(g_959, (l_1227 = 1UL), (l_1224 && g_760))) < func_44(g_60, g_10, g_1186, l_518, l_1210)) > g_197), g_1158))) , g_327), 0x8CL)), g_1186));
        l_1209 = 0L;
        if ((+((((((l_1227 ^ func_44(l_518, func_33((g_100 >= func_63((((l_1232 = (safe_sub_func_int8_t_s_s((l_1228 , ((g_260 |= (l_1176 , g_982)) & ((((g_1231 && (g_10 |= ((l_1216 , ((((0xD04F5C2DL < g_760) ^ l_1228) && 0x10141A9EL) < 0x5B56L)) == l_1227))) | g_229) > 3UL) , l_1224))), (-1L)))) || g_228) | l_1228), g_195, l_1228, l_1216, l_1208)), g_511, l_1224, g_228, g_118), g_197, g_1186, l_1227)) && l_1208) , l_1228) < l_1085) || 0L) || g_362)))
        {
            unsigned l_1235 = 5UL;
            if (((safe_rshift_func_uint8_t_u_s((g_3 != g_785), (g_1231 , l_1235))) , l_1224))
            {
                g_743 = (safe_rshift_func_uint16_t_u_u(l_1235, g_1158));
                l_1240 = (safe_lshift_func_int8_t_s_u((l_1232 = l_1232), 7));
                return g_325;
            }
            else
            {
                unsigned l_1245 = 0x47C82810L;
                int l_1246 = 0x65463586L;
                g_743 = ((safe_sub_func_int8_t_s_s(g_105, ((g_959 = (-1L)) >= (l_1246 = func_44(((-8L) == g_229), l_1224, (safe_sub_func_uint8_t_u_u((l_1235 > l_1245), l_1228)), g_147, g_10))))) | 0x19L);
            }
            g_6 = (g_247 = ((-3L) || (safe_rshift_func_uint8_t_u_s((g_229 , g_1249), (l_1235 , (safe_rshift_func_int8_t_s_s((l_1228 > (safe_div_func_uint8_t_u_u((l_1232 < (((safe_add_func_int16_t_s_s(func_44((func_63(g_260, (255UL | (l_1209 &= l_1235)), l_1224, g_6, g_10) != g_100), g_3, g_97, g_959, g_511), g_959)) , 0L) || g_259)), 253UL))), 6)))))));
            return g_259;
        }
        else
        {
            return g_147;
        }
    }
    g_247 = (safe_unary_minus_func_int8_t_s(g_259));
    for (g_327 = 0; (g_327 != (-18)); g_327--)
    {
        g_959 = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s(0x26L, 1)) >= l_1263), g_118));
    }
    return l_1209;
}







static int func_13(int p_14)
{
    int l_960 = 0xA0DD3615L;
    int l_969 = 0x116C8158L;
    int l_983 = 0xE23D8C0DL;
    int l_984 = (-1L);
    int l_989 = 0L;
    int l_1001 = 0xAA64D807L;
    int l_1005 = 0x9CC38CB9L;
    short l_1015 = 0x4050L;
    short l_1027 = 0xE2D8L;
    short l_1033 = 8L;
lbl_1044:
    l_960 = 0xC8624CADL;
    if (((safe_lshift_func_int16_t_s_u((l_989 = (g_195 &= ((safe_mod_func_int8_t_s_s(g_3, (safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((l_969 |= g_228), ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((l_983 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((g_511 |= ((safe_mod_func_int8_t_s_s(g_6, g_260)) && 0xCD3F2074L)) & g_982), 0)), 15))) & (g_726 = (l_984 = l_960))), 4)), (func_79((safe_lshift_func_uint8_t_u_u(func_44(((p_14 , (safe_add_func_uint8_t_u_u((0x46L | p_14), g_229))) < l_960), l_960, g_197, g_785, g_508), 4)), g_3, p_14) ^ p_14))), g_760)) >= 0x892AL))), g_325)))) ^ l_960))), p_14)) , l_983))
    {
        g_573 = 0x83ABF2C8L;
        g_959 &= ((g_197 ^ p_14) | (l_983 = func_17(g_982)));
    }
    else
    {
        int l_992 = 1L;
        int l_1004 = 0xE868D3E9L;
        l_1005 = ((safe_lshift_func_int16_t_s_s(((p_14 = l_992) == (safe_add_func_uint16_t_u_u((l_969 ^= (((0xC0E7A52FL > l_992) != l_992) != ((safe_add_func_int32_t_s_s(((l_1004 = (g_260 ^= func_63((safe_mod_func_uint8_t_u_u((l_1001 = (safe_rshift_func_uint16_t_u_s(g_785, 8))), (safe_lshift_func_uint16_t_u_s(l_983, 7)))), g_430, g_511, l_984, l_992))) ^ 0xB937A48BL), l_989)) >= l_992))), l_992))), 10)) || l_1004);
    }
    for (g_118 = 0; (g_118 > 33); g_118++)
    {
        const unsigned l_1022 = 0x7A794A6FL;
        int l_1028 = 1L;
        g_959 = (safe_unary_minus_func_uint16_t_u(((safe_rshift_func_uint8_t_u_s(func_44((+g_508), (~((l_1028 = (0x34L > func_44((safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(l_1015, (l_1027 = (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(0UL, p_14)) > ((func_44((safe_mod_func_int8_t_s_s(l_1022, l_1022)), (safe_add_func_uint8_t_u_u((g_430 < (0L == 0x5D86L)), p_14)), g_327, l_1022, p_14) > 0L) , p_14)), g_10))))) , 0x816500C4L), g_229)), p_14, l_1022, l_989, g_743))) != 1L)), l_1022, l_1022, p_14), 4)) , l_960)));
        p_14 = ((g_97 <= (g_229 = p_14)) && g_785);
        for (g_197 = 25; (g_197 >= 35); g_197 = safe_add_func_uint32_t_u_u(g_197, 3))
        {
            if (g_760)
            {
                short l_1042 = 0xD577L;
                g_60 = func_44(((((safe_lshift_func_uint8_t_u_u((g_2 >= p_14), 7)) >= l_1033) >= (safe_mod_func_uint16_t_u_u(l_1022, (0x933B2242L || (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((g_119 = g_105), l_1042)), l_983)), l_1042)))))) , l_1022), p_14, l_983, l_1042, p_14);
                l_1001 |= g_1043;
            }
            else
            {
                if (g_97)
                    goto lbl_1044;
                g_573 |= p_14;
                p_14 = (g_1043 , 0x5A63DEA4L);
            }
        }
        for (g_247 = (-27); (g_247 <= (-17)); g_247++)
        {
            char l_1049 = (-4L);
            int l_1074 = 0x35E753CBL;
            l_1028 = p_14;
            if (func_44((safe_add_func_uint32_t_u_u((p_14 > l_1049), (p_14 >= (g_743 , (l_1028 , (-1L)))))), (safe_lshift_func_uint8_t_u_u((0xA4L >= (g_119 = p_14)), ((((l_1049 , p_14) ^ g_511) < g_362) != 0x80L))), g_97, g_180, l_1049))
            {
                unsigned l_1060 = 0UL;
                unsigned short l_1065 = 0x5DCFL;
                for (g_508 = (-17); (g_508 <= 59); g_508 = safe_add_func_uint16_t_u_u(g_508, 1))
                {
                    g_2 |= (safe_add_func_uint32_t_u_u((l_1027 & (g_327 , l_983)), g_562));
                    p_14 = (((g_562 = (p_14 <= g_197)) & (func_63(((safe_sub_func_uint16_t_u_u(6UL, 8UL)) ^ l_1015), g_982, ((safe_mod_func_int32_t_s_s(l_1060, g_726)) || ((((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(g_60, 0x08L)), 0x389A3572L)) | g_180) , p_14) , g_97)), g_511, g_228) | (-1L))) | 9L);
                }
                g_2 = (func_63((p_14 ^= (-1L)), l_1065, (g_430 , (l_1022 == ((l_1074 = ((safe_div_func_int16_t_s_s((((g_573 || ((safe_sub_func_int8_t_s_s(func_44((safe_rshift_func_int8_t_s_s((g_197 > g_785), (l_1022 && (func_63(((((func_63(func_63(((func_44((safe_mod_func_uint16_t_u_u(l_983, (-9L))), l_1060, l_1049, l_1065, l_1060) | 255UL) , l_1060), l_1065, l_1049, l_1022, g_10), l_1022, g_10, l_1015, l_1005) >= 0L) , g_1043) >= g_60) <= l_983), g_228, l_1060, l_984, g_325) == l_1049)))), g_511, g_1043, g_508, l_989), l_1049)) , l_1049)) || 1L) ^ l_1028), l_1060)) < 0x05L)) == l_1028))), l_1049, l_1049) < 0x5DD096F0L);
                return l_983;
            }
            else
            {
                if (l_983)
                    goto lbl_1044;
            }
        }
    }
    return l_989;
}







static unsigned func_17(int p_18)
{
    unsigned char l_520 = 255UL;
    unsigned char l_532 = 0xB1L;
    int l_560 = (-7L);
    int l_577 = 0xEF9D7A78L;
    unsigned l_601 = 0x24F858CAL;
    unsigned l_678 = 5UL;
    unsigned l_781 = 0x16B8F758L;
    unsigned short l_793 = 65535UL;
    unsigned l_957 = 6UL;
lbl_786:
    l_520 = p_18;
lbl_623:
    for (g_118 = 0; (g_118 == 2); g_118 = safe_add_func_int32_t_s_s(g_118, 5))
    {
        int l_531 = (-1L);
        int l_537 = 0x4C902AD9L;
        int l_542 = 2L;
        int l_543 = (-1L);
        short l_594 = (-5L);
        p_18 = (((safe_mod_func_int8_t_s_s((l_531 = (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((l_531 || l_532), 6)), p_18)), l_531))), (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((g_362 , (l_537 = g_10)), ((((safe_mod_func_uint32_t_u_u(l_532, (safe_add_func_uint8_t_u_u(((l_542 ^= 0x77L) | (p_18 , g_147)), l_543)))) && g_327) != l_543) & 1L))), p_18)))) < l_520) != l_543);
        g_247 |= p_18;
        if (((((0xCDL < g_180) <= l_543) , (((l_543 = ((safe_mod_func_int8_t_s_s(p_18, (safe_add_func_int16_t_s_s(func_44(p_18, p_18, (p_18 > 0x3E7E7E8FL), (safe_lshift_func_uint16_t_u_u(func_63(((g_119 = 255UL) ^ g_97), l_532, l_542, l_542, p_18), 11)), g_195), 65535UL)))) || 0x69L)) && p_18) > l_531)) ^ 0xBD2C92B1L))
        {
            unsigned l_559 = 1UL;
            for (g_147 = 11; (g_147 < 22); g_147 = safe_add_func_uint8_t_u_u(g_147, 1))
            {
                return p_18;
            }
            for (g_508 = 0; (g_508 != 41); g_508 = safe_add_func_uint8_t_u_u(g_508, 2))
            {
                unsigned l_561 = 0xBA082979L;
                p_18 = (g_247 = func_63((safe_mod_func_int32_t_s_s((g_562 |= (func_44(((((((func_63(g_100, p_18, (((safe_unary_minus_func_int32_t_s(((p_18 > ((safe_sub_func_uint16_t_u_u((l_559 , ((((g_2 <= func_44(func_44((g_327 &= g_180), (l_560 = p_18), l_520, g_228, g_228), g_325, l_520, l_532, g_511)) >= 4294967295UL) || p_18) >= g_362)), 3UL)) >= p_18)) & l_531))) ^ l_559) | p_18), g_247, l_537) ^ l_520) == p_18) , g_6) == p_18) > g_325) , g_60), g_60, l_561, l_559, l_559) | g_260)), 0x5C437C3FL)), l_561, l_520, l_532, g_118));
                for (g_100 = (-19); (g_100 <= 10); g_100 = safe_add_func_int16_t_s_s(g_100, 4))
                {
                    unsigned l_569 = 4294967294UL;
                    int l_570 = 0x11F8EAE9L;
                    const int l_574 = 6L;
                    l_542 ^= (safe_sub_func_int16_t_s_s(0x6664L, ((safe_add_func_uint32_t_u_u((((((((g_6 & (func_63(l_559, (l_569 = l_559), ((g_60 && ((l_561 ^ g_147) >= (l_570 = 9UL))) ^ (safe_lshift_func_uint16_t_u_u(g_573, 5))), p_18, l_561) , 1UL)) == 0xF5L) < p_18) != l_574) != l_561) , l_559) == l_574), p_18)) <= 0x66L)));
                    for (l_560 = 0; (l_560 < (-8)); l_560--)
                    {
                        unsigned l_580 = 1UL;
                        l_531 = (!(-2L));
                        l_577 ^= p_18;
                        g_247 = (func_63(g_197, (l_574 <= (p_18 , (p_18 | p_18))), ((((+((-1L) ^ (l_570 = (safe_mod_func_uint32_t_u_u((l_560 >= p_18), (l_580 = l_543)))))) > g_2) ^ 8UL) && (-3L)), p_18, g_195) < p_18);
                        if (p_18)
                            continue;
                    }
                }
            }
        }
        else
        {
            char l_581 = (-10L);
            p_18 &= l_581;
            for (g_247 = 0; (g_247 != 26); ++g_247)
            {
                return g_119;
            }
            for (g_100 = 0; (g_100 == (-16)); --g_100)
            {
                int l_591 = (-9L);
                for (l_520 = 0; (l_520 == 55); ++l_520)
                {
                    char l_590 = 1L;
                    unsigned l_592 = 0x4C5E75C3L;
                    int l_593 = 0xE81ABB1AL;
                    p_18 = ((l_593 = (g_105 > (((p_18 || ((safe_div_func_uint16_t_u_u(((250UL && (255UL ^ (func_63((g_180 , p_18), l_590, (l_543 || (l_591 &= l_590)), l_520, g_6) && p_18))) == 0x6FL), 2L)) | 0xC842L)) >= l_592) && 0x776579A3L))) , l_581);
                    if (p_18)
                        continue;
                    l_594 = g_60;
                }
                g_573 = (safe_div_func_int16_t_s_s(((((p_18 , (((l_581 & p_18) > l_532) , ((safe_mod_func_uint32_t_u_u(g_430, ((((l_591 == p_18) ^ 0x7079L) <= (((safe_div_func_int32_t_s_s((p_18 <= p_18), 0x5BBF1EC9L)) == g_6) ^ 65535UL)) , l_532))) != (-1L)))) > 65535UL) , 0x05B7L) & 65531UL), g_2));
            }
            l_601 = g_10;
        }
    }
    if (((safe_add_func_int16_t_s_s(((((l_577 = p_18) , p_18) , (g_6 ^ (l_560 = g_229))) || (l_560 = ((g_3 | func_21(p_18, l_520, l_601, l_532)) | 4294967295UL))), 0xBFAFL)) , 5L))
    {
        unsigned short l_606 = 65528UL;
        int l_617 = 1L;
        short l_652 = 0xFE10L;
lbl_679:
        l_617 |= (g_6 > (((safe_div_func_int8_t_s_s(l_606, ((safe_add_func_uint8_t_u_u(func_79(p_18, ((p_18 | l_532) , (4L | 0x5B65L)), (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((g_511 <= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_105, 1)), l_520)) , g_100)), (-1L))), p_18))), p_18)) || p_18))) & l_606) > p_18));
        for (g_573 = 25; (g_573 >= 18); g_573 = safe_sub_func_uint8_t_u_u(g_573, 1))
        {
            short l_620 = 3L;
            int l_645 = 9L;
            short l_715 = 0L;
            short l_765 = 0x707DL;
            if (l_620)
            {
                int l_632 = 1L;
                int l_647 = 0xA0AAC9F0L;
                for (g_118 = 0; (g_118 == 25); ++g_118)
                {
                    unsigned l_646 = 0x1CF57CA8L;
                    int l_655 = (-8L);
                    if (l_606)
                        goto lbl_623;
                    for (g_147 = 0; (g_147 >= 20); g_147 = safe_add_func_int8_t_s_s(g_147, 4))
                    {
                        int l_633 = 0x1882A872L;
                        if (g_147)
                            break;
                        p_18 = ((p_18 < (g_562 >= 0xAAL)) , ((((((l_560 && func_63(g_259, ((-1L) <= (safe_add_func_uint8_t_u_u(l_620, (safe_lshift_func_uint8_t_u_s(l_632, 0))))), p_18, p_18, p_18)) || g_60) > l_633) || p_18) < 4UL) >= p_18));
                        if (g_430)
                            break;
                    }
                    if ((safe_mod_func_int16_t_s_s((((l_647 = (((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_uint16_t_u_u((func_63(g_180, (safe_div_func_uint8_t_u_u((g_97 >= (0xCD396364L & (safe_add_func_int32_t_s_s(func_44((l_645 = p_18), g_195, l_646, g_118, p_18), 0x9C7D2671L)))), l_620)), l_620, l_620, p_18) , g_247), 5)) , 0x8E06CC97L))), p_18)) , l_617) | 6L)) >= g_511) ^ 0x0C88L), l_606)))
                    {
                        if (p_18)
                            break;
                        p_18 = (g_247 &= (safe_sub_func_uint16_t_u_u(p_18, (safe_div_func_int32_t_s_s((~((g_100 ^= (l_655 ^= (func_63(g_327, (p_18 ^ ((func_44(l_652, g_10, p_18, (g_260 = ((+((l_632 || l_645) && (safe_add_func_int16_t_s_s(8L, l_632)))) , 0x52E2FDFCL)), p_18) == 0xD380D2B9L) & g_327)), g_259, l_601, l_532) | p_18))) ^ l_647)), p_18)))));
                    }
                    else
                    {
                        char l_660 = 0x34L;
                        p_18 = func_63(g_2, p_18, l_617, ((l_645 = ((g_260 = (l_647 &= (((safe_rshift_func_uint8_t_u_s(l_632, (p_18 ^ (l_655 = (g_60 > g_3))))) == (safe_div_func_uint32_t_u_u(g_228, (+((((l_660 = (1L > g_119)) >= l_560) >= p_18) , 0x9BAE57EAL))))) , 0xE10849B5L))) , g_362)) , g_229), l_646);
                    }
                }
            }
            else
            {
                unsigned l_675 = 3UL;
                int l_693 = 0xC02552CBL;
                char l_784 = 0x11L;
                p_18 = func_79((((g_511 > (-10L)) <= ((((l_617 = func_74(((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((l_577 = func_39((l_645 = l_617), (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(g_105, ((g_6 , ((g_229 >= g_60) != (func_44(((252UL && (((p_18 , g_229) <= 0x1F04L) < g_573)) , 1L), l_652, g_6, p_18, p_18) < 1L))) || p_18))) == l_620), (-1L))), l_577)))) ^ p_18), l_675)), 1L)), p_18)) | p_18), p_18, p_18)) | g_573) , 4294967287UL) , g_228)) ^ l_532), p_18, g_362);
                if ((g_10 , (l_678 = ((0x7388E632L <= (l_645 &= (g_260 = (safe_sub_func_int32_t_s_s(g_247, 0x58D1E928L))))) == g_6))))
                {
                    p_18 ^= g_511;
                    if (g_562)
                        goto lbl_679;
                }
                else
                {
                    unsigned char l_692 = 0x52L;
                    int l_783 = 1L;
                    if ((((safe_sub_func_uint32_t_u_u(g_260, p_18)) < (func_79(l_678, (safe_lshift_func_uint8_t_u_s((l_693 = (((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((g_325 != func_63(p_18, g_105, (g_430 |= (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((g_229 = 0x0FL), ((l_617 = (func_44(l_645, l_675, p_18, p_18, g_362) == 0x0AL)) , l_606))), g_105))), l_606, l_675)), p_18)) != 65533UL) && p_18), l_692)) && g_3) , g_327)), g_100)), p_18) != p_18)) ^ p_18))
                    {
                        char l_698 = (-10L);
                        int l_716 = 0xCF744543L;
                        int l_725 = 0x6C98964DL;
                        p_18 = (((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((l_577 | (l_675 , p_18)), 7)) == ((-5L) < l_698)), (((((0x8CDEL < ((safe_sub_func_int32_t_s_s(0L, (g_260 = (safe_sub_func_int8_t_s_s(((((0xC3L && p_18) , l_693) < g_430) != l_698), p_18))))) <= p_18)) == 0x36A1L) && p_18) , 2L) < g_10))) >= g_9) & p_18);
                        p_18 = (((((safe_mod_func_int32_t_s_s((l_698 | ((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(l_698, 5)), (safe_lshift_func_int8_t_s_u(l_645, 5)))) < 0UL)), p_18)) && (((((l_620 || ((g_247 < (g_430 = ((safe_sub_func_int16_t_s_s(func_79((g_562 = 65535UL), g_118, l_606), g_147)) > l_698))) <= g_3)) | l_715) || 0x156CL) == p_18) || l_716)) , 0xABL) | 0x17L) | 0x6D65A179L);
                        g_147 = (((g_195 == g_228) != ((safe_div_func_uint8_t_u_u(p_18, (-8L))) , ((g_325 , (safe_unary_minus_func_uint16_t_u(((g_562 <= ((((g_726 &= (g_97 &= (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(l_716, ((1L >= (((g_724 &= (g_247 = l_520)) >= g_430) == p_18)) == l_725))), 1)))) || (-1L)) , (-6L)) , l_606)) , p_18)))) , p_18))) && g_327);
                        l_560 = 1L;
                    }
                    else
                    {
                        short l_756 = (-1L);
                        unsigned l_757 = 0xEBB54981L;
                        p_18 = g_430;
                        p_18 &= 0x36CB2221L;
                        l_693 |= ((safe_sub_func_int32_t_s_s(p_18, (((l_617 |= g_6) || ((safe_rshift_func_uint8_t_u_s(1UL, 2)) && func_79(g_97, l_620, (g_247 |= (l_645 |= 7L))))) , (l_617 = (safe_sub_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(0x080A56D6L, p_18)) || 0x6D7DL), p_18)))))) < g_195);
                        l_757 = (l_645 = ((l_520 == ((safe_lshift_func_uint8_t_u_u((l_617 = ((func_21((g_60 = ((g_260 |= (safe_lshift_func_int16_t_s_u((g_97 = 9L), 1))) > (safe_lshift_func_uint8_t_u_u(p_18, 5)))), ((safe_add_func_int32_t_s_s((+(l_693 = (l_617 | ((((g_743 , g_511) , (((l_692 || (((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((0x08EAA474L <= (safe_div_func_uint16_t_u_u(func_44((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((((func_63(g_3, p_18, l_756, g_147, g_10) , 1L) > 5UL) , (-8L)), 1UL)) ^ l_692), 0x9FL)), p_18)), g_726, l_675, g_562, l_645), 0xEC49L))), 65530UL)), 0x24L)) ^ l_692) | g_724)) <= p_18) == l_675)) != 0x6BC07B5DL) <= (-1L))))), l_692)) | (-2L)), p_18, l_756) , (-1L)) || g_511)), 6)) | 9UL)) , g_511));
                    }
                    l_693 = (func_74(g_724, (func_79(l_692, (g_195 = ((p_18 & l_620) > p_18)), (l_617 = (l_692 > (((g_100 = p_18) == (safe_add_func_uint16_t_u_u(5UL, ((func_44(l_620, g_743, g_760, g_260, l_652) , 0xEAL) > 0x1CL)))) , l_675)))) , l_715), l_601) != l_692);
                    p_18 = p_18;
                    if (g_2)
                    {
                        return l_532;
                    }
                    else
                    {
                        unsigned l_780 = 4294967291UL;
                        int l_782 = (-1L);
                        g_2 = ((safe_lshift_func_uint8_t_u_s(g_100, (safe_add_func_uint16_t_u_u(g_195, (l_765 & (0L <= ((g_785 = (safe_lshift_func_uint8_t_u_s(func_63((safe_lshift_func_int16_t_s_s(func_63(l_692, ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((((safe_mod_func_uint8_t_u_u(func_44((l_675 || ((safe_rshift_func_uint16_t_u_u(((l_783 ^= func_44((l_782 = func_63(l_780, (g_260 = 4294967287UL), (g_430 = func_44(g_60, l_781, l_617, p_18, g_10)), p_18, g_724)), g_508, p_18, g_760, g_10)) < 0UL), 9)) != l_780)), g_724, p_18, l_675, l_693), 255UL)) <= g_362) <= p_18) , p_18), l_577)), 1L)) >= 0xE745L), g_228, g_60, p_18), 7)), l_601, l_784, g_100, p_18), g_573))) > g_726))))))) >= 0x95L);
                    }
                }
            }
        }
        if (g_430)
            goto lbl_786;
    }
    else
    {
        char l_792 = 1L;
        volatile int l_799 = 0L;
        unsigned short l_817 = 65531UL;
        int l_820 = (-1L);
        char l_865 = 0xD0L;
        char l_882 = 0xABL;
        short l_905 = 0xB9BBL;
        unsigned l_938 = 0x96F8FB49L;
        for (g_97 = 0; (g_97 > (-3)); --g_97)
        {
            char l_791 = 0x8FL;
            unsigned l_866 = 0xC6D17B30L;
            short l_867 = 0x83BCL;
            int l_884 = 1L;
            if ((safe_sub_func_int16_t_s_s((func_63(l_791, (func_44(l_792, g_362, ((((l_793 >= p_18) | p_18) , (safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_791, func_44(g_562, g_724, g_260, l_601, l_791))), 0xA28EL))) == g_118), l_532, p_18) != l_792), l_791, l_792, l_791) & p_18), p_18)))
            {
                unsigned l_798 = 6UL;
                l_798 = l_577;
                l_799 = g_2;
                l_799 = (l_820 = (safe_rshift_func_uint16_t_u_s((func_44(((p_18 && (l_791 ^ l_601)) , (g_327 = (!(safe_div_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((safe_add_func_int32_t_s_s((g_60 = l_798), ((g_259 && (((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((p_18 , ((safe_sub_func_uint16_t_u_u(((l_798 & l_817) , ((safe_lshift_func_uint8_t_u_s(((0x612C987DL <= g_743) <= p_18), l_791)) ^ l_798)), p_18)) && l_791)), l_791)), 0UL)) > 0L), 5)), 2)) , g_118) | 1UL)) , l_601))))), l_798))))), g_724, g_197, g_97, l_560) >= (-1L)), 2)));
            }
            else
            {
                int l_823 = 0L;
                unsigned l_836 = 9UL;
                int l_837 = 0x761592D0L;
                short l_868 = 0xC252L;
                unsigned short l_879 = 0xCABBL;
                l_837 |= (safe_add_func_uint32_t_u_u(func_44((l_817 == ((l_823 , (safe_rshift_func_uint16_t_u_u(p_18, ((((safe_lshift_func_uint16_t_u_u(1UL, 3)) >= 0xBBL) , ((l_820 = g_100) < (safe_div_func_uint32_t_u_u(((+((l_836 = (0xF3A63208L & ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(l_792, l_799)), 1)), 4)) , p_18))) , 0xD6L)) == 5UL), l_823)))) != 4294967294UL)))) == g_511)), g_760, l_823, p_18, g_97), p_18));
                if ((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((l_867 = ((safe_mod_func_uint32_t_u_u((l_791 > ((safe_lshift_func_int8_t_s_u(l_560, (safe_add_func_int8_t_s_s(p_18, func_44(((g_147 ^ (safe_mod_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(g_195, ((l_820 ^= (((safe_unary_minus_func_uint8_t_u(p_18)) ^ ((safe_add_func_uint8_t_u_u((l_837 = (safe_sub_func_int32_t_s_s(((((func_63((safe_mod_func_uint16_t_u_u(p_18, (safe_rshift_func_uint16_t_u_u((func_63(g_327, l_577, l_791, g_105, g_260) & l_823), l_837)))), g_195, g_3, g_760, g_118) ^ 0UL) >= g_325) && (-9L)) <= g_3), 4294967290UL))), 0x5CL)) | 0x67525974L)) == p_18)) < l_823))) <= 4294967295UL) <= 0xCCL), l_836))) >= l_560), l_865, g_118, g_60, g_724))))) == l_866)), g_197)) , l_560)), p_18)), p_18)))
                {
                    if (g_197)
                        goto lbl_786;
                    if (l_868)
                        break;
                }
                else
                {
                    for (l_792 = (-9); (l_792 >= 27); ++l_792)
                    {
                        unsigned l_883 = 0x47ED16ABL;
                        g_247 = ((l_817 , 0x4E138595L) | (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((((safe_rshift_func_uint16_t_u_s(p_18, 3)) <= (g_147 , l_865)) == (((l_560 ^= (safe_add_func_uint32_t_u_u(((((func_44(((l_884 = ((l_879 = g_2) < (((g_105 = func_44(p_18, p_18, (safe_sub_func_int16_t_s_s((g_3 != 1L), p_18)), g_247, l_882)) , g_362) , l_883))) , l_678), p_18, p_18, p_18, g_195) , g_247) & 1L) , p_18) , 0x929B6618L), g_6))) == p_18) , g_119)) ^ 4L) ^ p_18), 0L)), 0UL)));
                    }
                    for (g_180 = 20; (g_180 == 23); g_180 = safe_add_func_int32_t_s_s(g_180, 6))
                    {
                        g_573 = (+l_884);
                    }
                    l_837 ^= p_18;
                }
            }
        }
        for (l_820 = (-14); (l_820 <= (-20)); --l_820)
        {
            unsigned l_902 = 0UL;
            unsigned l_914 = 4294967295UL;
            int l_915 = 3L;
            if (g_260)
            {
                short l_901 = 0x9CEDL;
                g_147 = l_865;
                l_902 = (((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((l_560 = ((g_260 ^= (0x3CL && (g_147 != l_678))) || (safe_mod_func_int8_t_s_s(g_247, (safe_lshift_func_int16_t_s_u(g_6, p_18)))))), (safe_sub_func_uint32_t_u_u((p_18 | (g_325 != (((g_60 = l_781) | p_18) && g_105))), p_18)))), g_105)) | g_259) ^ l_901);
            }
            else
            {
                int l_912 = 0xD3ABB86CL;
                const int l_913 = 1L;
                l_915 = ((safe_div_func_int16_t_s_s(l_905, 0x29A5L)) == func_33(p_18, l_902, (g_760 = 0xABA6L), g_228, (((safe_lshift_func_int8_t_s_u((p_18 , (((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(func_33(((func_33(l_678, l_912, l_678, g_508, p_18) && 4294967295UL) > g_197), p_18, l_913, l_913, g_3), p_18)), l_914)) ^ l_792) != g_562)), l_914)) < 247UL) , p_18)));
                for (l_882 = 0; (l_882 >= (-25)); l_882--)
                {
                    unsigned l_939 = 1UL;
                    if (g_197)
                        goto lbl_623;
                    if (((safe_mod_func_uint8_t_u_u((g_60 < p_18), ((safe_sub_func_uint8_t_u_u(0xFFL, ((l_793 ^ (l_577 &= ((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((l_560 = func_44(((l_915 = (safe_lshift_func_uint16_t_u_s(p_18, 4))) , (safe_div_func_int8_t_s_s((g_195 <= (safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(p_18, 7)) == func_63((((safe_rshift_func_uint16_t_u_s(g_105, 9)) , 0x0AL) ^ 1L), l_938, g_118, p_18, l_914)), p_18))), l_914))), l_914, g_511, l_939, l_939)), p_18)), 5)) >= l_781), g_6)) , l_912))) , l_913))) , p_18))) < l_912))
                    {
                        return l_938;
                    }
                    else
                    {
                        p_18 = g_97;
                        if (g_508)
                            continue;
                    }
                }
                g_2 = (-1L);
                g_743 = g_9;
            }
        }
        l_799 = (safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((1UL != (l_577 = p_18)) , 4UL), ((((safe_lshift_func_uint16_t_u_u(l_938, 7)) , ((safe_rshift_func_uint8_t_u_s((l_820 = (l_799 != (0xC7FBL < ((safe_rshift_func_uint8_t_u_u((((p_18 >= (l_560 = (((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(p_18, 0)) && (l_792 , p_18)), 0x05L)) > 1UL), 4)) | 0xA59AL) ^ p_18))) <= 7UL) >= g_247), 7)) != 0x798A0633L)))), 0)) == l_520)) == g_147) || p_18))), g_247));
        return p_18;
    }
    p_18 = (safe_unary_minus_func_uint32_t_u(g_562));
    return l_957;
}







static short func_21(const int p_22, unsigned short p_23, const int p_24, int p_25)
{
    const char l_28 = 0x87L;
    int l_509 = (-2L);
    int l_510 = 0xA36EAC91L;
    g_511 ^= (safe_sub_func_uint8_t_u_u((l_510 = ((l_28 < ((p_23 = ((((((safe_rshift_func_int8_t_s_s((3L < 1L), 6)) < (safe_rshift_func_int16_t_s_u((l_509 = ((((((9UL | ((((func_33(func_39((p_25 = (4294967295UL < g_10)), (((safe_div_func_uint8_t_u_u(((func_44((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((g_9 & l_28), (safe_lshift_func_int16_t_s_s(5L, p_22)))), 0x5E39L)) | 247UL) ^ l_28), l_28, l_28, p_23, g_3) <= 1UL) > p_23), 0x93L)) >= p_24) || p_24)), l_28, p_24, g_6, p_22) & l_28) ^ l_28) == g_10) != p_24)) == g_3) , l_28) > 65535UL) & g_10) < p_24)), 14))) == g_325) & p_24) >= p_24) || 0x94C2L)) & 0xF2E2L)) < l_28)), g_10));
    g_2 = 0xF1A81D6DL;
    return l_509;
}







static short func_33(unsigned p_34, short p_35, const short p_36, unsigned char p_37, unsigned p_38)
{
    int l_321 = 0xA9CBD28EL;
    int l_322 = 0xF8BC75F3L;
    int l_323 = 0x065BEF18L;
    int l_324 = (-4L);
    int l_326 = 0L;
    char l_328 = 0x3CL;
    int l_329 = 1L;
    int l_350 = 0L;
    unsigned l_378 = 1UL;
    int l_401 = 0xE62D59CFL;
    unsigned char l_424 = 248UL;
    short l_488 = 0xD44AL;
    int l_493 = 1L;
    l_329 &= (safe_mod_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((g_327 = ((!((safe_lshift_func_uint8_t_u_s((((((safe_mod_func_uint16_t_u_u((g_118 |= ((((safe_mod_func_int16_t_s_s((p_38 , p_37), (((((!((g_247 & ((((l_324 &= (p_38 , (p_38 >= ((safe_lshift_func_uint16_t_u_u(((g_97 |= l_321) & (p_35 <= (((g_195 = func_63((func_44(g_60, (l_323 &= (((func_44((l_322 |= (g_105 , l_321)), g_119, g_60, g_6, p_38) | p_36) && p_38) < 2L)), l_321, p_38, p_35) >= 0x30764D26L), l_321, g_197, g_119, p_34)) , 9UL) <= 255UL))), l_321)) != p_34)))) & l_321) >= 9L) >= g_228)) , g_325)) < g_260) == l_326) && g_247) & 0x653FL))) < 0x76D6L) && g_9) < 8L)), p_36)) ^ 65527UL) , l_324) , p_34) || g_118), 4)) != (-1L))) <= 0xFD3FL)), g_247)) , l_323) ^ g_197), l_328));
    for (g_97 = 0; (g_97 == 15); g_97 = safe_add_func_uint8_t_u_u(g_97, 4))
    {
        unsigned l_349 = 1UL;
        int l_363 = 8L;
        int l_379 = 0x0BBB4315L;
        int l_387 = 2L;
        int l_402 = 6L;
        unsigned l_448 = 0x184D98A4L;
        const unsigned char l_477 = 6UL;
        if (l_324)
        {
            int l_342 = 0xD58444DEL;
            int l_351 = 0xF7D34659L;
            l_351 = ((0x17L >= (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(g_118, p_38)), ((((safe_mod_func_uint16_t_u_u((l_342 & (safe_sub_func_int16_t_s_s(p_37, 8L))), (p_37 || ((((safe_mod_func_int32_t_s_s(l_342, (0xDB03L | 1UL))) == l_349) & (-8L)) > l_350)))) || (-1L)) & g_147) < 254UL))), 0xB3F48D6CL)), l_324))) && p_34);
        }
        else
        {
            unsigned l_364 = 0xC128384AL;
            int l_365 = (-2L);
            l_365 |= ((p_35 = (g_195 ^= (g_197 , (l_322 = 0xE79EL)))) ^ (l_324 != func_44((safe_add_func_int32_t_s_s(func_44(p_38, l_349, (g_147 = (l_363 = (safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((g_100 > ((safe_add_func_uint32_t_u_u((p_34 ^= (g_260 &= g_2)), 8UL)) > 0x4B76L)) >= 0xF9A5C36CL), (-1L))), p_37)) > p_36), g_362)))), l_364, g_6), (-10L))), g_60, g_362, p_36, l_364)));
            l_324 |= ((g_259 = (p_37 = (((safe_add_func_int32_t_s_s((l_365 &= (safe_rshift_func_uint16_t_u_s((g_118 = ((safe_add_func_int16_t_s_s(g_197, (+((-3L) != ((((safe_div_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(p_36, (safe_rshift_func_int16_t_s_u((g_195 = p_38), 3)))) , g_195) ^ (((func_44((0L < ((0xE81E2D41L & 1L) | g_2)), g_118, g_97, p_36, g_180) != l_329) , p_35) > 0x875A6592L)), 0x35C8L)) , g_60) , l_378) , p_37))))) , l_379)), 1))), 0xA1F7A9B4L)) & p_35) > 5UL))) , 0L);
            l_365 = ((safe_add_func_uint16_t_u_u(0xD218L, (l_363 = (safe_unary_minus_func_int32_t_s(p_34))))) != (l_349 != (((func_44(p_36, ((g_3 & (safe_add_func_int16_t_s_s(((g_229 < (safe_sub_func_uint32_t_u_u(((-1L) ^ ((0UL || (l_326 &= (l_379 >= 3L))) == l_321)), 0xDB8E88A2L))) , g_10), (-5L)))) < g_118), p_35, g_197, l_387) > l_379) > 0xD039L) <= g_260)));
            l_326 = (((l_379 < (g_105 < func_44((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((g_260 = func_63(p_35, func_44((safe_div_func_int16_t_s_s(l_328, ((safe_unary_minus_func_uint8_t_u(l_326)) && (g_197 | 0x53F7L)))), p_38, (((safe_div_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u(p_37, 0x6CL)) <= 0x2D40L) != p_38), g_228)) || l_378) != 0UL), l_364, l_387), g_10, l_401, g_247)), l_324)), 2L)), g_325, g_6, l_364, l_402))) && g_195) > 1UL);
        }
        if ((250UL | 0x90L))
        {
            unsigned char l_429 = 0xC9L;
            int l_444 = 9L;
            int l_447 = 0L;
            for (l_324 = 28; (l_324 == (-12)); l_324 = safe_sub_func_uint16_t_u_u(l_324, 5))
            {
                char l_420 = 0x72L;
                int l_431 = 0x407BED13L;
                l_322 = (safe_mod_func_int16_t_s_s(p_37, (safe_lshift_func_int8_t_s_u(g_197, 4))));
                for (l_323 = 0; (l_323 == 27); l_323 = safe_add_func_uint8_t_u_u(l_323, 1))
                {
                    int l_417 = 0xC8B267BAL;
                    for (g_362 = 14; (g_362 == 44); g_362++)
                    {
                        int l_421 = 0xCE40597FL;
                        g_147 = ((0x19L <= (9L & p_35)) == (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((l_420 = func_44((p_37 ^ l_417), g_325, p_37, func_63((safe_div_func_int32_t_s_s((l_417 <= g_105), p_35)), g_118, l_324, g_260, g_118), g_100)) != l_421) < l_402) ^ p_38), g_260)), (-10L))));
                        g_430 ^= ((safe_sub_func_int8_t_s_s(l_424, g_6)) || (safe_add_func_uint16_t_u_u((((g_3 != 0x9C19L) && ((p_34 < (safe_add_func_uint16_t_u_u(func_44((g_327 &= 4L), p_37, l_429, (((((g_100 , g_6) <= 1UL) , 65535UL) | 0xBD0BL) , p_34), g_325), l_421))) >= 1L)) , 0UL), g_2)));
                    }
                    if (p_38)
                    {
                        l_431 = (-1L);
                        return p_36;
                    }
                    else
                    {
                        g_60 = (g_147 = (safe_rshift_func_uint16_t_u_u(g_118, (((l_417 ^= 0xBBL) , g_119) , 0xD144L))));
                    }
                    l_417 ^= g_147;
                    l_417 ^= 0xCD752512L;
                }
                if (g_2)
                    continue;
            }
            g_2 = (((safe_unary_minus_func_int8_t_s((safe_mod_func_int16_t_s_s(((l_387 |= g_10) >= (safe_unary_minus_func_uint8_t_u((((g_327 & ((safe_rshift_func_int8_t_s_s((g_260 == func_63(g_3, (l_329 = (safe_sub_func_uint8_t_u_u(p_36, (g_430 = (l_444 ^= ((safe_add_func_int16_t_s_s(p_34, p_35)) , p_38)))))), ((safe_mod_func_int16_t_s_s(p_38, 0xD017L)) , g_195), g_259, p_36)), 3)) >= l_429)) , l_447) && 0x9AFF7FA8L)))), g_118)))) > 247UL) <= 0xC5L);
            if (l_448)
                break;
        }
        else
        {
            int l_461 = 0x63EBDE44L;
            int l_462 = 0xD725249AL;
            int l_479 = 0x16583EE6L;
            l_462 = (((safe_div_func_int32_t_s_s((g_60 < (g_9 <= (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s(g_10, g_327)) >= ((safe_mod_func_int32_t_s_s((0x5625L & func_44(l_329, (g_10 < ((func_44(p_36, l_461, l_424, g_3, p_34) == 0xABD1L) ^ 65535UL)), p_36, l_379, l_349)), p_38)) != 0x79L)) , g_6), 0xDDL)), l_401)), 9)))), p_34)) | l_324) != 0xEA8F5173L);
            for (l_462 = 0; (l_462 <= 28); ++l_462)
            {
                unsigned char l_478 = 0xABL;
                g_2 = (l_402 || func_44(p_36, ((p_35 , (safe_lshift_func_uint16_t_u_s((p_34 <= (safe_div_func_uint32_t_u_u((g_260 < ((p_35 &= g_105) ^ (l_479 = (safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((!((safe_mod_func_int8_t_s_s((l_478 = (safe_sub_func_int16_t_s_s(l_477, 0x2783L))), (g_118 || 0UL))) >= p_36)) <= g_10), g_247)) , l_478), p_37))))), 4294967287UL))), p_37))) > 4UL), p_36, g_9, p_38));
            }
            l_363 &= (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_247, ((l_462 |= l_448) <= ((((((p_38 , (g_260 ^= func_63(p_37, ((((func_63((g_60 = func_44(g_229, g_247, func_44(((safe_sub_func_uint32_t_u_u(p_35, ((safe_div_func_uint32_t_u_u((p_35 , g_259), p_34)) ^ g_197))) >= l_329), p_37, l_461, p_36, l_488), p_38, l_379)), l_479, g_362, g_180, g_259) < g_229) , l_322) , 65531UL) < p_38), l_448, g_228, l_323))) == 0x470DD217L) >= 0x7294CD86L) && p_37) ^ 0xFD22FCBBL) , l_488)))), 0x08L));
            l_462 = (safe_rshift_func_uint8_t_u_s(((!(g_100 = g_259)) >= ((l_479 = l_493) < (l_402 || (safe_rshift_func_uint16_t_u_u(8UL, (safe_mod_func_int32_t_s_s((g_260 , func_44(g_9, (safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((((g_229 >= (safe_add_func_int16_t_s_s(0x0D90L, ((g_247 = ((safe_mod_func_int16_t_s_s(g_180, 9UL)) , p_35)) & g_228)))) <= p_38) & l_448) <= 0xC4L), p_36)), g_118)), g_10, g_195, g_10)), g_362))))))), g_195));
        }
        g_9 = g_105;
    }
    g_508 &= (((250UL != func_79(func_63((l_322 < (((p_34 | 0x4EDEL) <= (p_35 ^= l_323)) | (~9UL))), g_247, (l_321 >= (safe_mod_func_int32_t_s_s((0x64L ^ 0xA4L), 0xBB2FA915L))), g_147, l_401), l_401, g_147)) == p_34) , p_35);
    return p_34;
}







static unsigned func_39(const int p_40, unsigned p_41)
{
    char l_73 = 0xF5L;
    int l_277 = 0xFB475F57L;
    int l_278 = 0x48AB5514L;
    for (p_41 = (-21); (p_41 > 34); p_41 = safe_add_func_int16_t_s_s(p_41, 9))
    {
        unsigned l_85 = 0xAD19DDA5L;
        int l_86 = (-2L);
        int l_127 = 8L;
        int l_302 = (-1L);
        for (g_60 = 0; (g_60 <= 0); ++g_60)
        {
            unsigned l_78 = 4294967295UL;
            int l_126 = 0xD8B0AA5FL;
            l_302 = func_44(func_63((l_278 = ((safe_mod_func_int32_t_s_s((p_41 != (((((safe_add_func_uint16_t_u_u((l_127 = (l_277 = (!((l_73 = 4294967294UL) || (func_74((func_44(g_9, func_44(l_78, g_60, p_40, (l_126 = func_79((((safe_rshift_func_uint8_t_u_s(g_6, (func_44((l_86 |= (((g_60 && l_85) , 0x2BBF3AF7L) > g_6)), l_78, g_6, l_85, l_78) | g_3))) && l_78) != 1L), p_41, g_60)), p_40), g_6, l_73, p_41) , l_73), l_127, g_10) , p_41))))), p_40)) <= g_10) & p_40) <= g_10) >= 0x3CL)), p_41)) > 0x862EAF81L)), l_78, p_41, l_78, l_78), l_78, l_85, p_40, l_85);
        }
    }
    g_147 = l_278;
    for (p_41 = 19; (p_41 >= 45); p_41 = safe_add_func_uint16_t_u_u(p_41, 1))
    {
        short l_305 = 0x814DL;
        g_60 &= l_305;
    }
    for (g_260 = 0; (g_260 >= 12); ++g_260)
    {
        unsigned l_308 = 0x4C999407L;
        l_308 |= p_41;
    }
    return g_247;
}







static unsigned char func_44(int p_45, unsigned char p_46, int p_47, unsigned p_48, int p_49)
{
    for (p_47 = (-9); (p_47 != 3); p_47++)
    {
        return g_6;
    }
    return g_10;
}







static int func_63(int p_64, unsigned p_65, char p_66, unsigned p_67, unsigned p_68)
{
    const int l_283 = 1L;
    g_9 = (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_283, (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((func_44((safe_rshift_func_uint16_t_u_s((g_195 == (safe_lshift_func_uint8_t_u_u(255UL, 3))), (((safe_add_func_int16_t_s_s(((1UL ^ (g_259 = (((((safe_rshift_func_int16_t_s_u(((p_67 = func_44((g_180 = (safe_mod_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(4UL, (p_66 , g_119))) | (safe_div_func_uint8_t_u_u((g_259 > l_283), p_67))), l_283))), g_9, p_66, p_67, g_147)) && g_2), 11)) , l_283) | l_283) < 0x5FL) , g_195))) || 4294967295UL), g_3)) >= l_283) == l_283))), p_66, p_65, p_64, p_65) ^ g_3), g_105)), p_65)))), g_195));
    return g_195;
}







static unsigned func_74(unsigned char p_75, unsigned char p_76, short p_77)
{
    unsigned char l_128 = 0x14L;
    unsigned short l_133 = 0xF837L;
    int l_138 = 0xCAAAA389L;
    short l_139 = 0xDF0DL;
    int l_148 = (-8L);
    const unsigned l_188 = 0xF76BB762L;
    int l_267 = 0x29FCB4D8L;
    int l_276 = 0x86F34C10L;
lbl_152:
    l_128 = 0x5085D525L;
    if ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(g_118, func_44((func_44(l_128, l_133, (p_75 || ((safe_mod_func_uint8_t_u_u(p_75, l_128)) > ((l_133 == ((safe_lshift_func_uint16_t_u_u((l_138 |= g_119), (0UL == l_139))) || 4294967295UL)) , g_100))), g_118, g_100) ^ 0UL), g_9, g_6, g_105, p_76))), p_76)))
    {
        unsigned char l_140 = 0x6CL;
        int l_149 = 0x0A24D0A3L;
        l_140 = g_10;
        g_9 = p_76;
        l_149 = (p_76 > ((func_79(((safe_rshift_func_int16_t_s_u(l_140, 10)) , (((safe_mod_func_int32_t_s_s(p_77, g_2)) && (safe_add_func_int8_t_s_s((g_100 = l_138), l_140))) & (g_97 &= ((l_148 ^= (g_147 &= 0UL)) , g_3)))), func_44(p_75, l_138, p_77, g_118, l_133), l_138) , g_147) >= p_76));
    }
    else
    {
        char l_154 = (-1L);
        unsigned char l_196 = 0UL;
        int l_266 = 0xF0E14FAFL;
        for (p_76 = 26; (p_76 > 42); p_76++)
        {
            if (l_139)
                goto lbl_152;
            l_154 = (l_138 = func_79((((1UL < (safe_unary_minus_func_int16_t_s(g_9))) >= l_138) || p_77), func_44(p_75, p_75, p_75, g_10, l_139), g_118));
        }
        for (l_133 = (-26); (l_133 > 32); ++l_133)
        {
            unsigned l_159 = 4294967287UL;
            unsigned short l_181 = 65535UL;
            int l_211 = 0L;
            l_159 = (g_147 = ((safe_lshift_func_uint16_t_u_u(0xB780L, g_118)) && g_60));
            for (g_100 = (-1); (g_100 == 9); ++g_100)
            {
                unsigned short l_162 = 3UL;
                int l_261 = 0x432ADD22L;
                if ((func_44(p_75, g_100, (0xF3L <= (func_44((!l_133), (l_162 < ((safe_div_func_uint16_t_u_u((g_97 <= ((l_162 > ((safe_div_func_uint16_t_u_u(0UL, p_75)) > 0xF1L)) <= p_76)), 0x7265L)) != l_148)), p_76, l_162, p_76) <= g_9)), p_75, p_76) | g_10))
                {
                    unsigned short l_179 = 0x4882L;
                    l_148 = ((safe_lshift_func_uint8_t_u_u((g_105 ^= ((~(safe_rshift_func_uint16_t_u_s((((safe_div_func_uint32_t_u_u(func_44(p_75, ((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((!p_77), func_44(p_77, g_6, l_179, func_44((p_75 , (g_180 = (p_75 < 6UL))), l_154, p_75, l_154, p_77), p_76))), p_76)), l_148)) & l_162), g_2, g_100, l_159), p_77)) , g_119) | 1UL), 5))) , l_181)), 7)) <= l_179);
                    g_2 = (g_147 = p_76);
                }
                else
                {
                    unsigned l_198 = 3UL;
                    int l_210 = (-10L);
                    unsigned l_246 = 0xE7CADE12L;
                    if (((safe_lshift_func_int16_t_s_u(func_44(g_105, ((9UL >= ((g_97 = 5L) <= (safe_add_func_uint16_t_u_u(((+((((l_196 |= ((g_195 ^= ((l_138 = (!((safe_lshift_func_uint8_t_u_s(l_188, p_75)) , ((+(p_77 = (!p_75))) >= (!(g_9 >= g_119)))))) , ((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((l_181 , g_180), 65535UL)) && p_75), g_10)) ^ l_181), l_154)) , l_159))) < g_100)) <= g_118) , l_133) == g_197)) < g_119), g_118)))) ^ g_100), l_162, g_10, g_10), l_198)) > l_162))
                    {
                        unsigned char l_203 = 0UL;
                        int l_218 = (-1L);
                        const int l_223 = 0xBA4DF932L;
                        l_211 ^= ((((safe_rshift_func_int8_t_s_s(g_118, p_75)) , g_105) >= (safe_rshift_func_uint16_t_u_s(func_44((p_77 & 0xEAL), (g_119 ^= (l_203 = l_198)), g_3, (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((l_210 |= 1UL) <= g_6), 7)) != g_147), 8)) || g_97), p_76)), l_128), 12))) != 0xE7EEL);
                        g_228 &= (safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((0xBF0B67F1L == func_44(g_195, ((l_218 = 1L) , (safe_sub_func_uint32_t_u_u(((((((safe_lshift_func_uint16_t_u_s(g_9, l_223)) == (safe_div_func_uint8_t_u_u(func_44((safe_add_func_uint8_t_u_u((p_76 = p_76), 0x88L)), (func_44(l_162, p_77, p_75, g_100, g_147) > l_154), g_147, l_154, g_6), l_138))) < g_118) < 0L) , 9UL) ^ p_77), 0x9FF8E19EL))), p_75, g_105, l_210)), p_75)), l_154)), l_188));
                        g_229 = g_147;
                    }
                    else
                    {
                        g_2 = g_197;
                        g_2 &= (0x4BL & g_118);
                    }
                    l_211 = (p_77 == ((4294967291UL == ((safe_add_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(p_77, 12)) == (0x5D35L <= ((l_154 ^ ((g_147 == p_75) <= func_44(l_211, g_197, g_3, l_154, p_76))) , p_75))) && (-10L)), 1L)) < 0xF6L)) ^ g_6));
                    g_9 = (safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(3L, (l_211 = ((+((0L & (safe_lshift_func_int8_t_s_u(p_76, 4))) || p_75)) , (l_196 > (safe_rshift_func_int8_t_s_s((func_44(func_44(l_198, (((func_44(func_44(p_77, g_10, l_159, l_148, l_154), l_246, p_76, g_10, g_2) || l_196) <= g_247) , p_76), l_159, g_180, p_76), p_76, g_100, g_3, p_77) , l_148), l_181))))))) | 8L), g_100)) < l_159), g_118));
                    l_261 = func_44(l_159, (((p_77 = ((l_154 ^ (safe_unary_minus_func_int16_t_s((safe_div_func_uint8_t_u_u(((((g_3 != ((g_105 = (g_119 = 0x9DL)) | ((safe_sub_func_int8_t_s_s((g_10 == (g_260 = ((func_44((safe_sub_func_int32_t_s_s((l_138 &= (safe_sub_func_uint32_t_u_u(l_181, (5UL > ((g_259 = (((((safe_rshift_func_int16_t_s_u(p_76, 8)) ^ 255UL) != g_229) <= g_2) , l_210)) | p_76))))), g_60)), g_100, p_76, p_75, l_210) >= 0x44A4612FL) | g_260))), 8UL)) > 65535UL))) , g_100) > (-2L)) >= g_60), l_133))))) , 0x4866L)) , 4294967288UL) , g_119), p_76, g_197, g_229);
                }
                l_266 &= ((((g_10 , (g_247 ^ (l_154 <= (safe_mod_func_uint16_t_u_u(0x3E6DL, g_3))))) > (l_261 = (((safe_add_func_int16_t_s_s(g_260, ((p_77 | g_60) , g_147))) || p_76) < 0xE4FFL))) , 0x8D4BL) <= g_6);
            }
            return g_97;
        }
    }
    if (l_267)
    {
        const short l_270 = 0x5388L;
        g_2 = ((safe_sub_func_uint32_t_u_u(((((((-1L) <= 1L) < g_97) , (l_139 < l_270)) < func_44(((l_270 , 0x0C9CL) , g_10), l_139, p_76, g_147, g_118)) , p_77), g_197)) >= g_259);
    }
    else
    {
        unsigned short l_271 = 65527UL;
        g_9 = (l_271 = 1L);
        g_2 &= (((0xD9L && ((!(func_79((l_138 = g_105), p_76, (g_147 = (safe_lshift_func_uint8_t_u_u((g_229 = ((0x9D2FL | ((((safe_div_func_int32_t_s_s(l_148, g_105)) , g_228) && g_105) && (g_260 & l_276))) ^ g_229)), 6)))) <= 1L)) && l_128)) >= g_247) < l_271);
    }
    return l_139;
}







static unsigned func_79(unsigned short p_80, short p_81, int p_82)
{
    int l_87 = 0x48012CFBL;
    int l_111 = 0x0913F082L;
    int l_112 = (-1L);
    int l_113 = 0x8ECCAC47L;
    p_82 ^= (g_60 > l_87);
    if (p_81)
    {
        g_97 = ((safe_rshift_func_uint8_t_u_s((p_81 & g_10), (~(l_87 >= (safe_div_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u(0x733A7AA5L, (safe_unary_minus_func_uint16_t_u((g_6 && ((safe_div_func_int8_t_s_s(g_3, (p_80 || g_60))) , (-1L))))))) != g_10) || g_10), l_87)))))) < (-5L));
    }
    else
    {
        int l_102 = 0x58A24A77L;
        int l_106 = (-4L);
        int l_107 = 1L;
        int l_108 = 0x80110037L;
        g_105 = func_44(g_10, func_44((g_100 = ((safe_lshift_func_int8_t_s_s(0x0BL, 5)) < l_87)), p_81, (((safe_unary_minus_func_uint8_t_u(((p_80 | func_44(g_60, l_87, l_102, (safe_sub_func_int8_t_s_s((func_44(l_87, l_87, l_87, l_87, p_82) != 0L), g_97)), l_87)) ^ g_3))) , l_87) != g_3), p_81, l_102), l_102, l_102, p_81);
        if (((0x3EL < (((g_97 , (l_113 |= ((l_112 |= (((l_106 = (~l_87)) | ((l_108 = l_107) , func_44(l_87, p_82, (((l_111 = func_44((safe_rshift_func_uint16_t_u_s((g_10 || p_81), g_6)), l_107, p_80, g_6, p_81)) , p_80) , 0x3BAA24DDL), p_80, p_80))) ^ p_82)) || 1L))) , 0xCA17L) != l_87)) & g_100))
        {
            int l_114 = 0x56850E27L;
            l_114 = g_3;
            p_82 = g_97;
            g_118 |= (safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_u((g_60 == 0x836713F9L), 12))));
            g_119 = g_118;
        }
        else
        {
            unsigned l_124 = 0UL;
            int l_125 = 1L;
            l_125 = (safe_rshift_func_int8_t_s_s((p_82 , (((safe_lshift_func_int16_t_s_u(p_81, (g_118 &= 0x5B29L))) & g_119) & ((l_112 ^= g_60) >= (l_124 = g_6)))), 4));
        }
    }
    p_82 = g_118;
    return g_60;
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
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_724, "g_724", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_959, "g_959", print_hash_value);
    transparent_crc(g_982, "g_982", print_hash_value);
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1075, "g_1075", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1186, "g_1186", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    transparent_crc(g_1249, "g_1249", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
