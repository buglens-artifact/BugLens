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



static unsigned char g_7 = 1UL;
static int g_85 = 0x7D512630L;
static int g_92 = (-7L);
static short g_94 = 0xF190L;
static char g_96 = (-1L);
static char g_105 = 0L;
static char g_122 = 0x5AL;
static short g_134 = 0L;
static char g_147 = 0L;
static int g_161 = 0xB9A5162BL;
static short g_465 = 0x79D1L;
static volatile unsigned char g_695 = 0xF1L;
static unsigned g_872 = 2UL;
static unsigned short g_1094 = 65534UL;
static unsigned short g_1121 = 1UL;
static unsigned g_1181 = 0xBCD1D0F9L;
static unsigned g_1220 = 0x3AFF8ED4L;
static unsigned short g_1282 = 0UL;
static short g_1336 = 9L;
static unsigned g_1388 = 0x31F29500L;
static unsigned g_1416 = 4294967290UL;



static int func_1(void);
static const int func_2(unsigned char p_3, int p_4, short p_5, short p_6);
static unsigned short func_9(unsigned p_10, unsigned short p_11);
static unsigned short func_14(unsigned p_15, unsigned char p_16, int p_17, unsigned p_18);
static char func_19(unsigned char p_20, unsigned char p_21, int p_22, short p_23);
static unsigned char func_24(int p_25, unsigned char p_26, int p_27, short p_28);
static int func_29(unsigned char p_30, unsigned p_31);
static const unsigned char func_36(unsigned p_37, const int p_38, unsigned char p_39, const short p_40, char p_41);
static int func_53(int p_54, const unsigned short p_55, unsigned p_56, unsigned short p_57, char p_58);
static unsigned short func_59(unsigned char p_60);
static int func_1(void)
{
    unsigned l_8 = 4294967292UL;
    char l_95 = (-4L);
    int l_908 = 1L;
    unsigned char l_911 = 248UL;
    unsigned char l_918 = 255UL;
    unsigned l_1008 = 4294967295UL;
    int l_1067 = 0x3473EB7AL;
    const int l_1074 = (-1L);
    int l_1149 = (-6L);
    int l_1198 = 0x5D4A5E8FL;
    unsigned short l_1213 = 0x7BBAL;
    const int l_1216 = (-4L);
    unsigned short l_1242 = 0x9197L;
    short l_1268 = 0x5F94L;
    unsigned short l_1290 = 0UL;
    unsigned l_1357 = 0xC3A1EF8AL;
    unsigned l_1393 = 0xF4CD15AAL;
    short l_1412 = 0xD22EL;
    short l_1425 = 0x4535L;
    l_908 = ((func_2(g_7, g_7, (((l_8 >= l_8) & func_9((safe_lshift_func_uint16_t_u_u(func_14((+(func_19(func_24(g_7, l_8, func_29(((safe_add_func_uint32_t_u_u((0x2AL != (+((~((safe_add_func_uint8_t_u_u(func_36(g_7, l_8, l_8, g_7, g_7), l_95)) < l_8)) || g_92))), g_96)) || l_95), l_95), l_95), l_95, l_8, l_8) && l_95)), l_8, g_7, g_96), 14)), l_95)) || g_134), g_96) != g_872) != g_7);
    l_908 = func_29((((safe_lshift_func_uint16_t_u_s(65527UL, l_911)) & (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_96, ((safe_add_func_uint32_t_u_u(((!l_8) != l_908), 0x30D3FD2BL)) != (+(func_14(func_29(g_872, g_7), l_918, g_695, l_908) || g_147))))), 0xA44CL))) < 4294967291UL), l_8);
    for (g_465 = 0; (g_465 != 27); g_465 = safe_add_func_uint32_t_u_u(g_465, 4))
    {
        int l_921 = 0x16173EFCL;
        unsigned l_1041 = 1UL;
        unsigned short l_1096 = 0UL;
        unsigned short l_1102 = 0xB4F2L;
        unsigned l_1163 = 3UL;
        unsigned l_1187 = 0UL;
        if (l_8)
            break;
        l_921 = (-2L);
        if ((safe_mul_func_uint8_t_u_u(0UL, 1L)))
        {
            short l_937 = (-6L);
            unsigned short l_950 = 1UL;
            unsigned l_955 = 0xF0AFC71EL;
            unsigned char l_962 = 0xDBL;
            unsigned short l_966 = 1UL;
            int l_1052 = (-2L);
            unsigned l_1058 = 0x9FE0FA4DL;
            unsigned char l_1068 = 0xDDL;
            for (l_908 = (-8); (l_908 == (-27)); --l_908)
            {
                return g_85;
            }
            if ((((((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_7, g_7)), ((safe_mod_func_int32_t_s_s(((((g_872 <= g_695) || ((0xF377CEADL | (safe_unary_minus_func_uint16_t_u((g_161 || (g_85 | (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(0xCDL, l_921)), 0UL))))))) || 0L)) || l_937) || g_85), g_105)) && l_937))) & g_96) >= l_8) || l_95) > l_95))
            {
                unsigned short l_938 = 65531UL;
                int l_951 = 0L;
                unsigned l_956 = 0xCDEA4AABL;
                g_161 = g_872;
                if (func_14(func_14(g_105, (l_938 >= (safe_lshift_func_int16_t_s_u(g_7, 0))), (g_161 < ((l_937 & g_92) > (g_96 ^ (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_8, (safe_lshift_func_int8_t_s_s(l_908, 4)))), 0x5BL))))), l_938), l_921, l_938, g_695))
                {
                    unsigned short l_947 = 0UL;
                    int l_952 = 0xE5E2E617L;
                    l_947 = (-7L);
                    for (g_122 = (-4); (g_122 < (-2)); ++g_122)
                    {
                        l_908 = func_53(func_19(g_161, l_950, g_7, l_938), ((((g_105 ^ func_24(g_872, g_105, l_951, l_950)) & 0xF043L) || l_921) & g_872), l_921, g_147, l_921);
                        l_952 = l_950;
                        l_921 = (-10L);
                    }
                    for (g_147 = (-8); (g_147 < (-27)); g_147 = safe_sub_func_uint8_t_u_u(g_147, 4))
                    {
                        l_951 = l_952;
                        l_921 = g_134;
                        if (g_134)
                            continue;
                    }
                    g_161 = g_695;
                }
                else
                {
                    int l_959 = (-1L);
                    l_955 = l_951;
                    l_921 = func_14(g_85, l_956, func_53(g_122, l_955, (safe_add_func_int32_t_s_s(l_938, func_24((l_950 != (g_134 && l_959)), (safe_sub_func_int8_t_s_s(func_24((~l_918), g_872, g_161, l_956), 246UL)), g_134, l_937))), g_872, g_85), g_134);
                    if (g_105)
                        continue;
                }
                g_161 = l_918;
            }
            else
            {
                unsigned l_965 = 0x163E08EEL;
                unsigned short l_971 = 0UL;
                int l_973 = 0L;
                l_908 = l_921;
                l_921 = (l_921 | l_962);
                if ((+(+((safe_add_func_int8_t_s_s((l_921 > ((l_8 ^ l_965) & g_94)), func_19(func_24(l_955, (l_965 > (l_937 || l_965)), func_24((((0x52B07B2EL == g_122) | 0x89L) | g_695), l_908, g_465, l_966), g_161), l_921, l_908, g_161))) & g_7))))
                {
                    char l_972 = (-1L);
                    l_973 = (safe_add_func_int32_t_s_s((g_94 <= ((func_19(func_59((l_921 && ((g_85 <= ((0UL < l_918) <= g_695)) ^ l_921))), l_971, l_972, l_95) == 0x9A76L) >= l_950)), g_134));
                    g_161 = g_147;
                    if (((l_95 > (l_973 || 4294967295UL)) && ((~(safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(255UL, ((safe_mul_func_uint8_t_u_u((0UL <= g_96), l_921)) > (0x535D5C0FL & (g_94 && g_872))))), 3))) > g_7)))
                    {
                        int l_989 = 0x4A12C313L;
                        l_989 = func_36(((safe_rshift_func_uint8_t_u_s(7UL, func_19(g_122, g_85, (g_85 || (((((((func_24(g_96, (safe_unary_minus_func_uint8_t_u(((safe_lshift_func_uint16_t_u_u(l_972, 15)) || (safe_mod_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(func_24(l_921, l_971, ((l_911 == g_122) == g_147), l_972), 0x54L)) && 0x3B85A56DL) == (-1L)), g_134))))), g_96, l_989) <= 0x67L) == 0UL) | l_972) & 0x194AL) | g_695) | l_989) || l_972)), g_872))) != g_96), g_105, g_122, g_94, g_94);
                        l_908 = ((g_85 != (0xDA19226FL && 4294967289UL)) < (func_24(l_95, (l_989 != l_971), (+(safe_mod_func_uint32_t_u_u((func_24(g_872, (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(func_53(g_161, l_972, l_95, g_105, l_8), l_972)), g_147)), 14)) ^ l_965), g_122)), 4294967295UL)), l_989, g_134) ^ l_921), 0x039BCF65L))), g_94) & g_105));
                        g_161 = ((safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(g_94, 1)) <= g_147), (safe_mod_func_int16_t_s_s((g_105 > func_53(l_937, g_96, g_134, l_908, g_96)), g_695)))) && l_1008);
                    }
                    else
                    {
                        unsigned short l_1009 = 0xFE02L;
                        return l_1009;
                    }
                    l_921 = (safe_mul_func_uint16_t_u_u(func_19(l_937, l_971, (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((l_937 < g_872), (((safe_sub_func_int32_t_s_s((-1L), (l_921 < g_872))) == (func_59(l_937) & l_955)) > l_921))) == g_105), (-9L))), l_972), l_908));
                }
                else
                {
                    int l_1034 = (-1L);
                    short l_1044 = (-1L);
                    unsigned short l_1053 = 0x929EL;
                    int l_1057 = 1L;
                    l_908 = (g_122 && ((safe_mul_func_int16_t_s_s((func_14(((safe_lshift_func_int8_t_s_u(l_911, (+(safe_mod_func_int8_t_s_s(func_59((l_950 < func_36((l_973 != ((1UL & l_921) != ((safe_rshift_func_uint8_t_u_u(g_7, 6)) >= func_14((((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((l_950 > g_695), g_465)), l_921)), l_1034)) >= g_134) && (-1L)), g_7, g_7, l_966)))), l_950, g_7, l_8, l_921))), 252UL))))) | l_966), g_96, g_872, l_971) == l_95), g_872)) < l_1034));
                    g_161 = (safe_sub_func_uint32_t_u_u(4294967291UL, g_161));
                    if (l_1034)
                        break;
                    if ((g_92 ^ (safe_add_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(func_59((safe_unary_minus_func_int8_t_s(l_1041))))), func_24((safe_rshift_func_uint8_t_u_u((func_24(l_1044, l_1041, g_872, l_921) | (((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((0xDDL & g_465))), 1UL)) || g_92) & g_161)), 5)), g_92, g_7, g_161)))))
                    {
                        g_161 = g_695;
                        l_1052 = func_19(l_1034, (((((((safe_sub_func_uint8_t_u_u((65535UL >= 0x0D1EL), l_921)) & g_161) != g_105) ^ (safe_lshift_func_uint16_t_u_s(g_94, 0))) >= 0UL) <= g_94) ^ g_105), l_937, l_962);
                        if (l_1053)
                            continue;
                    }
                    else
                    {
                        int l_1056 = 0x38AE2620L;
                        l_973 = g_134;
                        g_161 = 0x351D4155L;
                        l_1057 = func_14((safe_sub_func_uint8_t_u_u(func_59(l_937), (+(func_24(l_1056, l_965, func_24(g_872, g_92, g_92, g_161), g_134) && 8L)))), g_96, g_872, g_96);
                        l_1057 = l_1056;
                    }
                }
                l_1052 = ((((+0x462D6442L) || l_1058) < (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((func_19(l_955, g_122, l_971, g_122) & (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((func_24((!(g_147 | (g_134 != l_1067))), g_105, l_955, l_971) <= 4294967295UL), l_1068)), g_94))), g_872)), 15))) != g_147);
            }
            l_1052 = ((l_921 & 0UL) && (safe_sub_func_int8_t_s_s(g_147, g_105)));
        }
        else
        {
            short l_1077 = 0xEAC4L;
            char l_1146 = 0xD6L;
            int l_1186 = 8L;
            for (l_921 = 0; (l_921 <= (-24)); l_921 = safe_sub_func_uint32_t_u_u(l_921, 1))
            {
                short l_1088 = 0x8FC0L;
                int l_1131 = (-2L);
                if (((9L < (safe_unary_minus_func_int32_t_s(func_36(g_465, l_1074, g_134, g_465, l_921)))) || (0x45F3L || g_147)))
                {
                    unsigned char l_1080 = 0xE0L;
                    int l_1089 = 0x5D234F17L;
                    l_1089 = (safe_mod_func_int16_t_s_s(0x6B4BL, func_19(l_1077, g_122, (((((safe_mod_func_int8_t_s_s(1L, ((+(g_85 & l_1080)) || (safe_mul_func_uint8_t_u_u(g_147, (safe_rshift_func_uint16_t_u_s(((func_19(l_8, ((safe_unary_minus_func_uint32_t_u((!(safe_mul_func_int8_t_s_s(g_96, l_908))))) < g_134), g_92, l_1088) & g_872) <= (-1L)), 2))))))) < l_1088) ^ 0xD6FBL) ^ l_1077) != g_96), g_122)));
                }
                else
                {
                    unsigned l_1097 = 0x4210D43BL;
                    unsigned char l_1110 = 0xC7L;
                    int l_1122 = 0xB63EC34CL;
                    if (g_7)
                        break;
                    if ((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((((func_36(l_1088, l_1008, g_122, l_1041, l_1077) >= g_147) && 1UL) || l_921) <= g_1094), g_1094)), 0x41A37CC4L)))
                    {
                        short l_1095 = 0L;
                        if (g_161)
                            break;
                        l_908 = (-1L);
                        l_1096 = ((l_1095 && g_85) < l_921);
                        l_908 = l_1097;
                    }
                    else
                    {
                        unsigned l_1103 = 4294967295UL;
                        if (l_8)
                            break;
                        g_161 = (g_134 & (((((safe_mul_func_uint8_t_u_u(func_24(g_96, (safe_lshift_func_int16_t_s_s(l_1097, 2)), (g_122 >= g_85), (!(0x98L != ((l_1041 == (((((((l_1097 & l_1102) <= g_122) == 0x6DCBL) & g_147) == g_122) <= g_465) & g_872)) > g_1094)))), l_1097)) < l_911) > l_1103) | g_161) <= 0xF4L));
                        g_161 = l_1088;
                        if (l_908)
                            continue;
                    }
                    l_1122 = (func_36((g_96 || (1L <= (-1L))), (safe_rshift_func_int8_t_s_u(func_53(l_911, (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(l_1110, (safe_rshift_func_uint8_t_u_u(g_695, ((safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((((safe_add_func_uint16_t_u_u(l_1074, l_1077)) ^ (safe_mul_func_int8_t_s_s(l_1097, g_465))) <= g_1121), g_134)) | 0xCC58BF5FL), l_1088)) & 1L))))) | l_921), 0)), l_911, g_85, g_161), 6)), g_122, g_161, l_1077) != 0xDE780DA3L);
                    for (g_94 = 0; (g_94 < 3); ++g_94)
                    {
                        unsigned char l_1152 = 254UL;
                        l_1131 = (func_53(func_53(g_465, l_1088, func_59((g_94 >= (((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_92, (safe_lshift_func_uint16_t_u_s(1UL, 6)))), 7)) == 0xD2L) || (l_1088 >= (-9L))))), g_7, l_921), l_1097, g_872, l_1102, g_1094) ^ g_94);
                        g_161 = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s(func_24(g_465, (l_1041 < ((g_1094 | (g_105 && l_921)) == l_1110)), l_8, g_161), 7)) & g_122), g_1121));
                        g_161 = (safe_add_func_uint16_t_u_u(l_1097, (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u(((65533UL <= (((safe_add_func_uint32_t_u_u(g_94, ((l_1146 >= ((4294967290UL == ((safe_add_func_uint8_t_u_u((l_1149 || func_24(g_94, l_1097, (safe_add_func_int32_t_s_s(((l_1149 || l_1096) == l_1146), g_161)), l_1077)), l_1131)) != 0x404AL)) == g_872)) && 0xDAB9L))) && l_1152) < l_1122)) & g_96), 4)) & l_911), g_85)), 7))));
                        g_161 = 1L;
                    }
                }
                g_161 = g_465;
            }
            g_161 = l_1102;
            if ((func_14(l_8, (safe_sub_func_int16_t_s_s(l_8, (~((((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0xF4EEL, ((safe_rshift_func_int8_t_s_s(((l_95 | (g_695 ^ (g_1121 < func_29(l_1077, l_1163)))) | g_7), l_1096)) >= g_1094))), 65535UL)), g_1094)) && (-3L)) & l_1077) > g_465)))), g_465, l_908) | g_465))
            {
                short l_1180 = 1L;
                l_921 = (((safe_lshift_func_uint8_t_u_u(l_1146, (safe_add_func_int32_t_s_s(((func_24(g_695, (safe_rshift_func_uint16_t_u_s(((((((-10L) != (safe_mod_func_int32_t_s_s((g_96 == 0x1FL), 1UL))) >= (safe_sub_func_uint8_t_u_u((g_1121 == ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(func_29(g_92, l_1163), l_1180)), 0x65L)) && g_1181)), 255UL))) & 0x6683CE7AL) != l_1077) || (-9L)), l_918)), l_1180, l_1077) | g_1121) >= 0UL), 0x3C0C2418L)))) & g_465) & l_1077);
            }
            else
            {
                g_161 = (0xE78AL != g_134);
                if (l_1074)
                {
                    for (l_1067 = 0; (l_1067 == 0); l_1067 = safe_add_func_int16_t_s_s(l_1067, 6))
                    {
                        return g_1181;
                    }
                }
                else
                {
                    l_1186 = ((safe_lshift_func_int16_t_s_s(g_872, 9)) > func_59(g_105));
                }
                l_1186 = func_59(l_1186);
            }
            l_1187 = func_29(l_1146, g_96);
        }
    }
    if (l_8)
    {
        unsigned l_1196 = 4294967295UL;
        unsigned l_1197 = 6UL;
        unsigned l_1219 = 4294967292UL;
        char l_1231 = (-10L);
        char l_1240 = 0x3FL;
        unsigned l_1243 = 0x7AC10058L;
        int l_1244 = 0x21B23B2EL;
        short l_1270 = (-5L);
        int l_1414 = 0xFD6E6938L;
        unsigned l_1415 = 0UL;
        l_908 = (func_29(g_92, (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((l_1067 && (safe_add_func_uint16_t_u_u(l_1149, ((247UL && 0x76L) | ((g_94 || (safe_mod_func_uint32_t_u_u((g_85 <= 4UL), func_24(func_24((0x96C9L < (-9L)), l_918, g_134, l_1196), g_1181, l_1197, l_1196)))) == l_1198))))), g_872)), 0xCC4DF7D9L))) & g_1121);
        l_1149 = l_1197;
        if ((((safe_lshift_func_int16_t_s_s(g_872, 8)) & (safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(g_96, 2)) > func_2((((((safe_add_func_uint32_t_u_u(func_29(l_1213, g_134), l_1196)) < (safe_rshift_func_uint8_t_u_s(l_1216, 2))) ^ ((safe_lshift_func_int8_t_s_u(g_872, 5)) | ((l_1219 < l_1196) >= l_1197))) & l_95) == g_1220), g_1121, l_918, l_1196)), g_1094)), g_96)), g_96)), 15))) == g_7))
        {
            short l_1234 = 0xD54FL;
            int l_1291 = (-2L);
            int l_1306 = 0x9F503AB1L;
            unsigned l_1346 = 0UL;
            int l_1358 = (-1L);
            int l_1375 = 0x9B502868L;
            for (g_465 = 0; (g_465 != 26); g_465++)
            {
                unsigned char l_1241 = 0xB5L;
                short l_1269 = (-8L);
                int l_1292 = (-4L);
                short l_1305 = 1L;
                char l_1356 = 2L;
                if (g_96)
                    break;
                for (l_1067 = 21; (l_1067 != 9); l_1067--)
                {
                    unsigned l_1237 = 0x56803B4EL;
                    if (g_1220)
                        break;
                    l_1243 = (((safe_mul_func_int8_t_s_s(g_92, (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(l_1196, l_1231)) <= (+(safe_lshift_func_int8_t_s_s(func_59(l_1234), 2)))), (safe_mod_func_int16_t_s_s((l_1237 ^ (l_1234 <= (((((safe_sub_func_int16_t_s_s((func_24(((l_1240 > (0x37L && 0L)) < 0xB7AE6A7BL), g_94, l_1237, g_105) ^ l_1237), 0UL)) > l_1241) <= l_1240) && (-4L)) > 0xF3D0B042L))), l_1237)))) & l_1242) == g_465))) & l_1234) | l_1237);
                }
                l_1244 = g_1181;
                for (g_1121 = 0; (g_1121 < 29); g_1121 = safe_add_func_uint32_t_u_u(g_1121, 5))
                {
                    int l_1253 = 0xA36C0E0EL;
                    short l_1288 = 0xF6BFL;
                    char l_1289 = 9L;
                    int l_1343 = (-1L);
                    if ((((func_53((g_94 != (!(safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((g_1181 & (safe_mul_func_int16_t_s_s(l_1253, (safe_lshift_func_uint16_t_u_u(0x17B7L, (safe_unary_minus_func_int8_t_s(l_1253))))))), 7)), (safe_rshift_func_int8_t_s_s(g_96, 1)))))), (g_85 == l_1241), g_1094, g_96, l_1241) >= (-5L)) | g_122) != l_1253))
                    {
                        unsigned l_1281 = 4294967295UL;
                        l_1270 = (safe_rshift_func_uint16_t_u_s((0x9562L & g_1094), ((safe_sub_func_int32_t_s_s(g_1094, (safe_unary_minus_func_uint16_t_u((((safe_sub_func_uint8_t_u_u(func_14(((safe_mul_func_uint8_t_u_u(func_53(func_19(l_1253, g_1220, l_1253, l_1268), ((g_465 & (-1L)) ^ g_1181), l_1253, l_95, g_1220), l_1269)) && g_1094), g_1220, g_122, l_1241), g_465)) > g_465) && 0x2978L))))) ^ l_1234)));
                        g_1282 = func_29(((l_918 < ((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(l_1234, g_465)), func_36(l_1219, (safe_add_func_uint16_t_u_u((g_1121 <= ((safe_lshift_func_int8_t_s_s((-1L), (l_1269 ^ ((safe_lshift_func_uint16_t_u_s(((0x70L != (0xB1L <= g_1181)) > 0xFC68L), g_1181)) & 0x9E26341AL)))) >= l_1281)), g_695)), l_1281, l_1253, g_1220))) < 0x13L)) == (-10L)), g_1121);
                        g_161 = func_59(((func_24(l_1234, (g_85 != 0xA719058AL), func_53(((func_53(g_1121, l_1234, g_695, ((((safe_unary_minus_func_int8_t_s((-1L))) >= (((safe_add_func_uint8_t_u_u(((((safe_add_func_uint16_t_u_u((((g_105 | func_53(g_7, g_465, g_105, l_1269, l_1288)) && l_1288) & l_1234), 0xD5F3L)) != 1L) ^ l_1241) ^ g_134), g_85)) >= 0UL) == l_1289)) && 0xDD1B4236L) || l_1290), g_7) > l_1198) && g_96), l_1234, l_1197, l_95, l_1234), g_122) != g_1121) >= l_1291));
                    }
                    else
                    {
                        l_1292 = 0x17EBC061L;
                    }
                    l_1306 = ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((g_161 && (0xB9523B84L <= func_14((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(6UL, ((safe_lshift_func_int8_t_s_u(((-10L) != (255UL != g_134)), (l_1253 == 0x4D6EL))) != ((((safe_mod_func_int32_t_s_s(l_1197, g_134)) || g_134) != 0L) | l_1234)))), g_1121)), g_122, l_1292, l_1305))), g_96)) <= g_1121), 0x23144637L)) && 0x70C7L);
                    l_1244 = ((((g_147 >= (safe_mul_func_int16_t_s_s(l_1306, g_7))) <= l_911) & g_134) == func_19((0xDDL > (g_1094 <= (safe_sub_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(((0x53L == (g_161 > g_96)) != 0x10L), l_1270)), l_1305)) | 0x1AL) || g_1282), g_134)))), g_96, g_1282, l_1241));
                    if (g_695)
                    {
                        char l_1335 = 9L;
                        l_908 = (safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(g_147, (g_1220 & g_1121))), 6));
                        l_1244 = (~(g_465 != func_59(((safe_sub_func_int16_t_s_s((g_134 | (safe_rshift_func_int8_t_s_u((l_1291 < (safe_sub_func_uint16_t_u_u((g_85 != (0x36C9L == (0L >= (g_147 == (safe_mul_func_uint16_t_u_u(0x8344L, g_105)))))), g_134))), 5))), 2UL)) <= g_1121))));
                        g_1336 = ((safe_sub_func_uint32_t_u_u((0x091F0CC7L > (func_14((safe_mod_func_uint8_t_u_u((l_918 && ((safe_rshift_func_int8_t_s_s(l_1231, l_1335)) ^ 0xA6L)), l_1335)), (g_94 || g_105), l_1234, l_1288) >= 2L)), l_1269)) == g_465);
                    }
                    else
                    {
                        short l_1359 = (-10L);
                        int l_1360 = 0L;
                        g_161 = (safe_mul_func_uint8_t_u_u(g_122, 1UL));
                        l_1360 = ((((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((g_1121 & (l_1343 && 0L)) & l_1269) && (safe_mod_func_int32_t_s_s((l_1346 > func_53(((safe_sub_func_uint32_t_u_u((g_465 > (safe_add_func_uint8_t_u_u(g_161, (safe_lshift_func_uint16_t_u_s(g_1282, 10))))), func_24((safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_u(((8UL == 0x47D24909L) >= 0xD7L), g_134)))), g_872, g_96, l_1356))) && 0x75L), l_1290, l_1357, g_1220, l_1358)), 0x38698AFAL))), l_1359)), l_1291)) <= 0x1791L) | 0x7BL) > g_85);
                        g_161 = ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s(g_1121, (7UL ^ (safe_lshift_func_uint8_t_u_u(g_85, (~(l_1269 < (l_1288 <= ((safe_add_func_int8_t_s_s(g_695, ((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u(((g_1220 == (0x22F2L < ((safe_sub_func_int8_t_s_s(l_1067, 255UL)) >= 4294967290UL))) ^ 0xFCFA6089L), l_1375)) && g_1121), 4)) && 255UL))) ^ g_122))))))))) || 4294967287UL), 1)) && l_1359);
                    }
                }
            }
            l_1149 = l_1346;
        }
        else
        {
            int l_1413 = 0x08838774L;
            l_908 = ((safe_sub_func_int32_t_s_s(0x137B4099L, 4294967291UL)) > (g_465 == (l_1219 & (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(0x811DL, 1)), 10)), 1)), 9)))));
            g_1416 = (safe_sub_func_uint8_t_u_u(g_1388, (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_1393 < l_1244), (safe_mod_func_uint32_t_u_u(func_14(g_1121, (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_19((safe_mul_func_uint16_t_u_u((255UL >= func_2(func_19((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_1094 ^ 0UL), (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((l_1412 > (0xCE98809CL ^ g_7)) | 0x9278L), 1)), l_1244)))), l_1413)), l_1243, g_872, l_1270), l_1414, g_7, l_1243)), g_1094)), g_1282, l_1243, l_1290), l_1219)), l_1415)), l_1413)), g_7, g_872), l_1415)))), l_8))));
            l_1413 = func_2(l_1243, (g_105 > g_105), l_1413, g_122);
        }
    }
    else
    {
        unsigned char l_1426 = 0UL;
        int l_1427 = 8L;
        l_1427 = ((safe_add_func_int8_t_s_s(l_908, (safe_lshift_func_uint8_t_u_u(0x41L, (((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_1425, 1)), g_1181)) && g_465) < (g_695 != l_918)))))) | (func_19(g_134, (g_1220 < l_1426), g_7, l_1426) == l_1426));
        l_1427 = func_53(g_7, (func_59((l_1427 | (65535UL | g_1094))) >= (g_1336 > ((g_1388 <= ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(g_1181, 0xB4L)) >= l_1426), 2)), g_1121)) | 0xED6B1C46L)) && g_872))), g_872, l_1074, l_1427);
        l_1149 = g_695;
    }
    return g_1416;
}







static const int func_2(unsigned char p_3, int p_4, short p_5, short p_6)
{
    int l_775 = 0xEA2697D5L;
    short l_790 = 0x9052L;
    unsigned char l_791 = 0xDBL;
    short l_840 = 7L;
    const unsigned short l_873 = 0UL;
    int l_874 = (-4L);
    unsigned l_879 = 0x14633C68L;
    char l_907 = 0x28L;
    l_775 = g_92;
    for (g_85 = 0; (g_85 > 29); g_85 = safe_add_func_int32_t_s_s(g_85, 8))
    {
        unsigned short l_778 = 0xD92FL;
        int l_779 = 0xBE4A1445L;
        l_779 = (l_778 > g_695);
        if (p_5)
            break;
    }
    if ((safe_rshift_func_uint8_t_u_u(func_29((safe_mod_func_int32_t_s_s(g_96, l_775)), (((3L == (0xCBL >= (+l_775))) & func_14((7L < (0xEEL | (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((((+3UL) & (((safe_add_func_int32_t_s_s(((0x12L != g_85) || g_92), 1L)) >= l_775) != p_4)) || 4UL) >= 0x57A60D1DL), 2)), p_3)))), p_5, g_94, g_96)) == g_695)), 1)))
    {
        unsigned short l_798 = 2UL;
        l_790 = 5L;
        l_775 = l_791;
        if (g_465)
        {
            int l_823 = 0x8C4ADD30L;
            for (l_791 = 0; (l_791 >= 22); l_791 = safe_add_func_int8_t_s_s(l_791, 9))
            {
                unsigned l_807 = 0xEA026054L;
                l_798 = (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(0x5EL, (func_59(g_94) & l_791))), 5L));
                l_775 = (safe_mul_func_uint8_t_u_u((l_790 | (p_6 != (safe_lshift_func_int8_t_s_u(g_122, 7)))), p_4));
                for (p_4 = 0; (p_4 <= (-30)); p_4 = safe_sub_func_uint16_t_u_u(p_4, 1))
                {
                    int l_808 = (-5L);
                    for (p_5 = (-26); (p_5 >= 7); p_5 = safe_add_func_int8_t_s_s(p_5, 9))
                    {
                        g_161 = l_807;
                        l_808 = l_798;
                    }
                    if ((safe_sub_func_int32_t_s_s(g_147, g_147)))
                    {
                        short l_813 = 0L;
                        int l_814 = 0L;
                        int l_815 = 0xFE10FCA6L;
                        int l_816 = (-8L);
                        l_815 = func_9(p_6, func_29(func_29((safe_mul_func_uint8_t_u_u(((l_807 > l_798) >= 0xF0F3L), func_19(g_92, ((p_4 < ((0xABL < p_5) | (!1L))) ^ l_813), g_161, l_808))), l_814), g_465));
                        l_815 = ((((+func_36(l_807, p_5, l_816, (safe_rshift_func_uint16_t_u_s((~g_695), 3)), g_465)) > 0xDA43L) <= (safe_rshift_func_uint16_t_u_s(l_807, 7))) >= (safe_mul_func_uint8_t_u_u(l_823, g_147)));
                        g_161 = 0x502F10B9L;
                    }
                    else
                    {
                        g_161 = g_96;
                    }
                }
                l_775 = (((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(func_9(g_7, g_105), ((safe_mod_func_int32_t_s_s(p_5, (safe_add_func_uint8_t_u_u(g_7, func_24(p_4, (0x7A94L != ((safe_lshift_func_uint8_t_u_u(p_3, (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(g_96, 7)), p_5)), p_6)))) != g_7)), g_7, g_96))))) <= p_3))), (-1L))) <= g_7) & 2L);
            }
            l_775 = ((0xF7L ^ (p_6 != l_791)) ^ g_122);
            l_823 = g_85;
            l_840 = g_94;
        }
        else
        {
            return l_798;
        }
        l_775 = func_9(g_465, (g_161 && (255UL == (p_4 >= p_6))));
    }
    else
    {
        const unsigned short l_847 = 65535UL;
        int l_905 = 0x73CF955EL;
        int l_906 = 0xBD3C5D39L;
        if (((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_94, l_840)), ((g_695 & p_4) > ((safe_lshift_func_uint8_t_u_s(((l_791 < (((+l_775) < l_847) < p_4)) != (safe_sub_func_uint16_t_u_u(p_6, l_847))), g_161)) && 0xA7L)))) >= l_847))
        {
            char l_855 = 1L;
            l_775 = (safe_unary_minus_func_int8_t_s(g_96));
            g_161 = ((func_53((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_4, (l_855 ^ ((safe_add_func_uint16_t_u_u((g_161 < (safe_mul_func_uint16_t_u_u(p_5, (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_7, (safe_mod_func_uint8_t_u_u(g_161, ((247UL ^ (safe_lshift_func_uint8_t_u_s((l_855 && (((((((func_53((g_161 > 1L), g_161, p_6, p_5, g_122) & 0x24L) | 0x88L) < g_872) < 0xF3B2034EL) || g_872) | l_775) || l_855)), 2))) && p_4))))), l_840)), (-5L))), 6))))), l_855)) && l_847)))), 0L)), l_873, g_105, l_790, l_874) || 0x823189E0L) || g_122);
        }
        else
        {
            int l_880 = 0xF51CEFB5L;
            unsigned l_900 = 4294967295UL;
            l_880 = (safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((-8L), l_879)), func_9((0L >= (0x069BL != (6L & g_92))), p_4)));
            if (g_872)
            {
                l_775 = (-10L);
            }
            else
            {
                unsigned short l_883 = 0x7819L;
                if (((((safe_sub_func_int32_t_s_s(((g_465 || func_24((0xE5FAL > func_19(p_3, p_4, (g_134 | 0xE0L), l_883)), l_775, g_465, g_122)) || 1L), p_5)) <= l_883) && g_7) && g_147))
                {
                    l_775 = g_465;
                    return g_105;
                }
                else
                {
                    g_161 = l_879;
                }
                l_880 = ((g_122 > l_883) | (safe_mod_func_int16_t_s_s(p_5, l_880)));
            }
            l_906 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((p_4 & ((safe_sub_func_uint8_t_u_u(g_465, g_85)) || (safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((g_7 < (l_847 ^ l_900)), (safe_rshift_func_int8_t_s_s(0x8CL, 6)))) == p_3), (((safe_mul_func_uint8_t_u_u(p_4, l_873)) > p_3) || p_3))) != l_880), l_840)))), g_872)) == p_5), l_905)), l_900));
        }
    }
    l_775 = (l_907 & p_3);
    return g_7;
}







static unsigned short func_9(unsigned p_10, unsigned short p_11)
{
    int l_437 = 5L;
    int l_484 = 1L;
    short l_495 = (-4L);
    unsigned l_535 = 0x0C207D0DL;
    unsigned l_690 = 4294967295UL;
    unsigned l_723 = 1UL;
    g_161 = 0L;
    if ((l_437 ^ ((safe_lshift_func_uint16_t_u_u(func_24((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(g_85)), g_7)), p_11, l_437, l_437), 2)) & l_437)))
    {
        unsigned char l_445 = 0x64L;
        int l_446 = (-6L);
        l_446 = ((safe_mod_func_int32_t_s_s(g_92, l_445)) ^ (g_85 > p_11));
    }
    else
    {
        int l_459 = 0xE237DB7FL;
        g_161 = (safe_mod_func_uint32_t_u_u(2UL, p_11));
        g_465 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((func_19((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(l_437, (l_437 || g_134))) || ((func_59(g_105) | l_459) >= (safe_add_func_int32_t_s_s(p_10, g_92)))) || (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(g_92)), g_147))), g_122)), p_10)), p_11, l_459, l_437) <= 0xD4L), 1L)), p_10));
        l_459 = l_459;
    }
    for (p_11 = 0; (p_11 == 49); p_11++)
    {
        unsigned l_483 = 0x9188F1EDL;
        unsigned char l_485 = 3UL;
        int l_503 = (-5L);
        short l_607 = 5L;
        unsigned short l_644 = 0x8AE3L;
        g_161 = p_10;
        if ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(0x33L, 6)), l_437)))
        {
            short l_474 = (-7L);
            unsigned char l_527 = 249UL;
            int l_536 = 0x3BD81846L;
            l_485 = ((safe_add_func_int8_t_s_s(((l_474 | p_11) || (0xA4L > func_29(l_474, (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((0xB4327BCBL && (((safe_add_func_int16_t_s_s((p_10 > (safe_lshift_func_uint16_t_u_s(((g_147 < (~(func_24(l_437, ((l_437 && 65527UL) ^ g_7), l_483, l_483) == 1L))) ^ (-10L)), p_10))), 4L)) ^ 1UL) < l_474)), g_94)), 0x9092L))))), l_483)) && l_484);
            g_161 = (p_10 && 4294967295UL);
            if ((safe_add_func_int16_t_s_s(l_483, (-6L))))
            {
                if (p_11)
                    break;
            }
            else
            {
                unsigned short l_526 = 0x81D8L;
                for (l_474 = 26; (l_474 >= 9); --l_474)
                {
                    int l_494 = 2L;
                    for (g_122 = 0; (g_122 <= (-17)); --g_122)
                    {
                        g_161 = ((0xF7L | g_105) | (((safe_mul_func_int16_t_s_s(0xBA1CL, (p_11 & (l_474 > ((0UL > func_36(p_10, (((func_24(g_94, p_10, l_494, g_134) > (-1L)) && l_437) | g_85), g_105, l_474, g_122)) & l_495))))) <= g_96) || g_92));
                        l_494 = (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s((g_134 > (p_11 > ((0x8A7F073DL < (-8L)) & p_10))), 5)) ^ (safe_unary_minus_func_uint8_t_u(0xC7L))), 10));
                    }
                    return g_147;
                }
                if (g_85)
                {
                    int l_506 = (-4L);
                    int l_528 = (-5L);
                    for (l_483 = (-26); (l_483 >= 30); l_483 = safe_add_func_uint8_t_u_u(l_483, 1))
                    {
                        return p_10;
                    }
                    l_503 = p_10;
                    for (l_495 = (-25); (l_495 == (-17)); l_495 = safe_add_func_uint16_t_u_u(l_495, 8))
                    {
                        int l_513 = 0x698077F8L;
                        l_506 = (g_134 <= 0x1DE466E0L);
                        l_528 = (safe_mod_func_uint8_t_u_u((((((!l_506) ^ (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_513, ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(func_36(func_14(l_506, l_506, p_11, ((p_10 == (((p_10 || ((-7L) || (func_29(g_161, p_11) & 0x3615L))) > 0L) < g_96)) ^ 0x66BE14C3L)), g_7, p_10, g_7, g_465), p_10)), g_96)) <= l_526), g_96)) != g_96) > p_11), l_474)) >= l_483), p_10)), 0xD513DE39L)) >= l_485))), 0xC2L))) && l_527) >= l_506) != l_513), l_506));
                    }
                    l_536 = (!func_53((safe_rshift_func_int16_t_s_s(((0x98CFL < g_465) < p_10), l_506)), func_29(((safe_add_func_int32_t_s_s((-2L), (p_11 & g_96))) && (safe_mod_func_uint16_t_u_u(0xE1ACL, 0xB060L))), g_96), l_535, p_10, g_7));
                }
                else
                {
                    short l_542 = 1L;
                    l_536 = (safe_unary_minus_func_int32_t_s((~(safe_rshift_func_int16_t_s_s(l_536, 3)))));
                    l_542 = func_14(l_536, ((safe_mul_func_int16_t_s_s(0x426AL, p_10)) == p_11), g_96, g_161);
                }
                g_161 = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((0xC1AAL ^ (((0x088DFA95L > (safe_add_func_int8_t_s_s(((l_536 >= ((p_11 <= (p_11 != (safe_lshift_func_int8_t_s_s(((func_24((safe_lshift_func_int8_t_s_s((g_94 < (l_535 == (0xB4A6L > l_474))), 5)), g_122, p_10, p_11) ^ 0x13D0L) | 0x26L), l_536)))) & 0xCC36L)) & 0UL), 0x29L))) && g_105) == (-3L))) >= p_10), l_536)), g_161));
                if (p_10)
                {
                    int l_555 = 0x7EEA5A3FL;
                    return l_555;
                }
                else
                {
                    unsigned l_558 = 0x8661366FL;
                    for (g_92 = 0; (g_92 != 0); g_92++)
                    {
                        l_536 = 0xE64FEF94L;
                        l_558 = g_92;
                    }
                }
            }
        }
        else
        {
            unsigned char l_561 = 0x91L;
            int l_635 = 0x14C24229L;
            unsigned short l_665 = 0UL;
            unsigned l_684 = 0xD2DCEEB9L;
            char l_749 = 0L;
            const unsigned char l_772 = 0x23L;
            if (func_24(g_7, (~(safe_sub_func_int16_t_s_s(func_36(l_561, p_10, p_10, ((safe_mul_func_int8_t_s_s(1L, g_94)) && (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_437, 15)), 6)) & g_465), (safe_add_func_int32_t_s_s(0L, l_561))))), g_7), 0x839DL))), g_161, g_134))
            {
                int l_589 = (-4L);
                short l_631 = 0x3878L;
                for (l_535 = 0; (l_535 != 19); l_535 = safe_add_func_uint16_t_u_u(l_535, 1))
                {
                    int l_574 = 0x36FD1B1DL;
                    int l_586 = (-1L);
                    l_437 = p_10;
                    if (l_574)
                    {
                        l_437 = (~(0x4E6CL || (((safe_rshift_func_uint16_t_u_u(p_10, l_437)) & ((safe_unary_minus_func_uint8_t_u(0x3DL)) ^ (safe_sub_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((p_10 | (safe_lshift_func_int16_t_s_s(((g_161 && 0x2E128A9AL) || ((safe_mod_func_uint32_t_u_u(l_574, g_105)) > g_161)), g_105))), g_96)) || 0L), g_105)))) <= g_465)));
                    }
                    else
                    {
                        l_586 = p_11;
                    }
                    g_161 = func_59(g_465);
                }
                l_503 = p_11;
                if ((safe_mod_func_uint32_t_u_u(l_589, p_10)))
                {
                    unsigned char l_606 = 0x41L;
                    g_161 = (p_10 && g_85);
                    g_161 = g_122;
                    g_161 = ((safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(p_11, (g_105 && (safe_add_func_uint8_t_u_u((l_437 | 0x49L), (safe_rshift_func_uint16_t_u_u((0xDAL || 0L), 11))))))), ((safe_add_func_int16_t_s_s((func_59(l_535) > ((((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((l_561 != p_10), l_606)), g_105)) < l_606) && p_11) < p_11)), p_10)) >= 0xE1B93B7FL))) > l_606), 4294967295UL)) & l_607);
                    l_589 = (safe_mul_func_uint16_t_u_u(((((0x7AL ^ (((p_10 <= (-1L)) | l_606) <= l_589)) || func_19(p_10, ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((l_483 < ((safe_mul_func_int16_t_s_s(p_10, func_29(p_11, p_11))) != (-1L))), g_465)) || 1UL), g_7)) & p_11), g_96)) >= g_465), g_96, g_7)) | l_589) ^ g_465), 1L));
                }
                else
                {
                    short l_632 = 1L;
                    int l_634 = 0x3372BFDEL;
                    if ((g_92 & (0L || (safe_sub_func_uint8_t_u_u(p_10, l_561)))))
                    {
                        int l_624 = 0x6BFBCC89L;
                        char l_633 = (-3L);
                        g_161 = p_10;
                        l_589 = (249UL & (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s((l_624 >= ((safe_add_func_uint16_t_u_u(1UL, (((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((l_631 > func_14(p_10, l_607, l_535, func_53(l_632, p_11, l_632, p_11, g_96))), l_633)), l_624)) == l_633) > l_634))) && p_10)), 3)) > g_96), p_11)));
                        l_635 = (g_96 && ((p_11 >= g_94) ^ p_11));
                    }
                    else
                    {
                        l_503 = (g_105 != 0x29L);
                        g_161 = l_632;
                    }
                }
                l_503 = (0x7ED4L == (p_10 ^ (safe_sub_func_uint8_t_u_u((0x4AF2L && (l_561 || ((safe_lshift_func_uint8_t_u_s(l_635, 4)) | func_36((p_10 & ((safe_add_func_int8_t_s_s(l_484, (safe_sub_func_int32_t_s_s(g_122, g_85)))) >= p_11)), p_11, l_535, g_96, g_147)))), 2UL))));
            }
            else
            {
                int l_649 = 0xF4C153FCL;
                l_635 = (l_644 && p_10);
                l_635 = ((safe_lshift_func_uint8_t_u_s(0x84L, (((l_644 > func_53((safe_sub_func_uint16_t_u_u((0x9EL == (l_607 | g_94)), l_484)), g_161, func_53(l_649, g_85, g_96, p_11, l_503), g_7, g_147)) > (-1L)) <= p_10))) & g_94);
                for (l_495 = 0; (l_495 > (-1)); l_495 = safe_sub_func_int16_t_s_s(l_495, 1))
                {
                    int l_658 = 0x6950D331L;
                    l_649 = ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(func_19(l_535, (l_658 == (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((p_11 >= g_105) ^ (((g_122 || (safe_mod_func_int16_t_s_s(g_105, l_658))) || (((-1L) || p_11) && l_649)) && 0UL)), 0)), 0xB3L))), g_465, l_437), p_10)) & l_437) | 0x9970L), p_10)), g_96)) | l_658);
                    g_161 = (g_105 >= (l_607 | g_85));
                    g_161 = (((p_11 || (p_10 | ((l_665 | 65527UL) >= g_96))) || p_11) || (safe_mod_func_int8_t_s_s((g_105 || (g_85 == p_10)), 0xFDL)));
                }
            }
            if ((0UL && ((l_644 != (safe_mod_func_int8_t_s_s(func_14(l_635, (g_465 && (g_161 | (((g_105 != (p_10 & l_437)) >= (p_10 >= l_495)) && g_465))), g_96, g_147), 0xB5L))) > 4294967295UL)))
            {
                int l_685 = 0x19921E70L;
                const unsigned char l_700 = 0xF8L;
                unsigned char l_720 = 250UL;
                if (func_59(p_11))
                {
                    unsigned l_701 = 0x51C94A1EL;
                    l_503 = func_14((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(g_7, 4)) >= (((l_535 || ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(g_85, 15)), 13)) <= g_465)) >= ((safe_rshift_func_int8_t_s_s(func_24(l_495, g_96, l_684, p_10), 1)) != p_11)) != 7UL)), g_134)), l_437)), l_684, l_485, p_11);
                    g_161 = (l_685 && (p_10 | g_96));
                    l_437 = g_94;
                    if ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(func_59((l_690 == ((((safe_sub_func_uint32_t_u_u(0x636930A4L, (safe_mod_func_int16_t_s_s((p_11 == ((g_695 >= g_96) < p_11)), l_484)))) ^ 5L) >= 1L) && 3L))), 1)), g_147)))
                    {
                        int l_708 = 0L;
                        l_437 = ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(g_695, l_700)), l_701)) & (safe_lshift_func_uint16_t_u_u((((p_11 | (safe_mod_func_int32_t_s_s(0x47DF14EFL, (safe_lshift_func_int8_t_s_s(((g_465 == 0x89L) > func_36(l_708, func_59((safe_sub_func_uint32_t_u_u(0xD936B6F4L, 0UL))), p_10, p_11, l_708)), 2))))) && l_701) == g_105), l_708)));
                        g_161 = p_11;
                    }
                    else
                    {
                        char l_711 = 0x32L;
                        l_711 = func_59(l_644);
                        g_161 = (l_635 <= (((safe_sub_func_uint32_t_u_u(p_11, g_7)) < (g_161 & ((p_11 | func_59((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(p_10, g_94)), g_7)), g_147)))) != g_7))) & g_94));
                        l_635 = (~l_720);
                    }
                }
                else
                {
                    unsigned short l_743 = 0x5703L;
                    int l_748 = 0xF420BCD4L;
                    g_161 = g_161;
                    for (g_134 = 0; (g_134 >= (-23)); --g_134)
                    {
                        return l_723;
                    }
                    l_635 = p_11;
                    if (p_10)
                    {
                        unsigned l_734 = 0x4DDACAA3L;
                        int l_735 = (-1L);
                        int l_742 = 0xB414C5F0L;
                        g_161 = ((safe_mod_func_int32_t_s_s(func_53(((g_161 ^ p_11) & g_105), (safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((p_10 & (safe_add_func_uint16_t_u_u((g_94 < (g_161 < 0x48DEL)), (safe_mod_func_uint16_t_u_u(65528UL, g_96))))), 1UL)) && l_700), 0x19L)), l_700, p_11, l_734), 0xCBF1A2ABL)) ^ 1L);
                        l_735 = g_465;
                        g_161 = (1UL < (6UL > (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((~0x837F34C5L), (safe_mul_func_uint16_t_u_u((l_742 < ((p_11 == l_684) ^ p_11)), l_743)))), (safe_add_func_uint8_t_u_u(l_743, g_122))))));
                        l_735 = ((g_134 == func_19(g_161, l_483, g_92, p_10)) < l_742);
                    }
                    else
                    {
                        l_437 = g_465;
                        l_748 = (safe_sub_func_uint16_t_u_u(p_11, (g_147 != l_561)));
                    }
                }
            }
            else
            {
                char l_756 = 3L;
                g_161 = ((p_10 <= l_749) ^ 0x6F92L);
                g_161 = 0x068E441FL;
                for (l_495 = 0; (l_495 >= 17); ++l_495)
                {
                    unsigned l_771 = 4294967295UL;
                    int l_773 = 0L;
                    g_161 = (safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_756, (safe_mul_func_int8_t_s_s(g_94, p_10)))), ((g_134 < l_485) || (!(0L == (safe_add_func_int32_t_s_s(g_161, func_53(l_635, (safe_mod_func_uint16_t_u_u(p_11, p_11)), l_749, p_10, g_92))))))));
                    l_773 = func_36(g_465, func_24(l_756, (!(safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_635, 9L)), (safe_add_func_uint32_t_u_u(((1UL || (safe_add_func_uint16_t_u_u((p_11 || 0x4F1EF0CFL), l_771))) >= (0x09835704L >= (-1L))), l_756))))), g_695, l_607), l_756, l_772, l_756);
                }
            }
        }
        if (p_11)
            continue;
        l_503 = (1L ^ func_29((0L && (safe_unary_minus_func_uint8_t_u(((g_94 || p_11) && l_485)))), g_92));
    }
    return l_437;
}







static unsigned short func_14(unsigned p_15, unsigned char p_16, int p_17, unsigned p_18)
{
    unsigned l_225 = 0x3C2DD450L;
    unsigned char l_232 = 0x96L;
    int l_233 = 0L;
    unsigned l_374 = 4294967286UL;
    unsigned short l_411 = 0x6659L;
    unsigned short l_434 = 1UL;
    int l_435 = 1L;
    int l_436 = (-1L);
    l_233 = ((+g_96) != ((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_225 ^ (safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(p_17, ((safe_mod_func_uint8_t_u_u(func_36((g_122 || func_36(g_134, p_18, g_94, func_59(l_225), l_225)), p_15, l_225, p_16, p_15), p_15)) ^ l_225))) <= g_134), g_105))), l_232)), 255UL)) > l_232));
    for (g_85 = 0; (g_85 > (-10)); --g_85)
    {
        unsigned l_240 = 7UL;
        short l_256 = (-4L);
        char l_282 = (-5L);
        int l_284 = 1L;
        short l_340 = 0L;
        const char l_391 = 0L;
        l_240 = func_24((safe_lshift_func_int8_t_s_u(l_225, (0x31770691L & (safe_rshift_func_uint16_t_u_s(l_233, p_15))))), p_16, (1L || (g_134 & p_17)), p_18);
        if (g_85)
        {
            unsigned char l_247 = 0UL;
            for (l_233 = (-21); (l_233 > (-9)); ++l_233)
            {
                unsigned l_253 = 8UL;
                int l_257 = 0x8872D5F3L;
                int l_263 = 6L;
                g_161 = (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(func_24(l_240, p_16, l_247, p_18), ((func_53(p_18, p_17, (~l_247), ((l_240 & g_85) && 0x7843L), p_18) & l_232) < 0x12L))), 1));
                g_161 = ((0x4A5BL != g_96) >= (safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_u(((l_253 < l_253) || g_7), 4)))) & l_225), (func_24(((252UL >= ((safe_lshift_func_int8_t_s_u(g_92, (l_256 ^ g_122))) <= p_15)) | 0x1CL), g_134, p_17, l_257) < g_96))));
                for (l_225 = 0; (l_225 >= 35); l_225 = safe_add_func_uint32_t_u_u(l_225, 4))
                {
                    g_161 = ((safe_lshift_func_int16_t_s_u(p_15, 7)) || (3L & (safe_unary_minus_func_uint32_t_u(p_17))));
                    l_263 = 0L;
                }
            }
        }
        else
        {
            unsigned char l_283 = 0UL;
            const unsigned l_293 = 0xAA24B6D0L;
            int l_373 = 1L;
            l_233 = p_18;
            g_161 = (safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u(g_7, (safe_add_func_uint32_t_u_u(p_18, ((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(p_17)), p_18)) & (func_24((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(func_24(((safe_add_func_uint16_t_u_u(l_240, (0x5E7AL > 1UL))) && (safe_mod_func_int16_t_s_s(func_24(p_17, l_225, l_233, g_147), p_15))), p_17, p_18, l_282))), p_17)), l_283)) < p_18) >= p_16), l_284, l_232, p_15) != p_15)))))) > 0x85L) != p_16), p_16));
            l_233 = func_53(((func_53((p_17 > 0xE0L), l_232, (safe_add_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((1UL >= (safe_mod_func_uint8_t_u_u(0xDAL, ((safe_mod_func_int16_t_s_s(func_53((g_105 && ((g_105 || 5L) > func_24(p_17, p_18, p_17, p_17))), g_92, p_18, g_92, p_17), g_147)) ^ l_293)))), 65535UL)) & l_283) <= 0xACBDC583L), g_134)), p_17, l_284) || 255UL) && l_293), p_16, l_282, l_283, p_17);
            if (g_134)
            {
                short l_294 = 0x7FA1L;
                l_284 = (((p_17 && l_233) <= (p_15 == func_53((((l_294 != 0x3C508AB7L) < (((safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(g_147, l_283)), g_94)) < 0x1C3956D9L) | 0UL)) & l_293), p_18, l_294, l_293, p_15))) == 0x686C5DACL);
                g_161 = (g_134 <= (safe_mul_func_uint8_t_u_u(func_24(p_17, (p_18 & p_16), p_16, l_283), p_17)));
                for (p_16 = (-27); (p_16 == 20); p_16 = safe_add_func_int16_t_s_s(p_16, 2))
                {
                    short l_309 = (-4L);
                    g_161 = ((g_161 & (-1L)) && (safe_add_func_uint8_t_u_u((g_161 | (safe_sub_func_uint16_t_u_u(p_15, (0xF631L || (safe_mod_func_int32_t_s_s(g_94, g_161)))))), ((g_85 | func_53(l_294, g_96, g_134, l_309, l_294)) > p_17))));
                }
            }
            else
            {
                unsigned l_314 = 0x82502EBBL;
                unsigned l_317 = 4294967287UL;
                int l_378 = 0L;
                if (func_53(g_161, g_92, (0xA5CDL | 0x9F4EL), l_233, (safe_lshift_func_int16_t_s_s(func_24((l_225 & p_15), p_15, ((((safe_sub_func_int8_t_s_s(p_18, 2UL)) | l_233) ^ p_17) >= l_314), p_17), 10))))
                {
                    const unsigned l_318 = 0UL;
                    for (p_18 = 0; (p_18 < 23); p_18 = safe_add_func_int8_t_s_s(p_18, 2))
                    {
                        return l_317;
                    }
                    g_161 = l_318;
                }
                else
                {
                    char l_339 = (-5L);
                    char l_343 = 0x0CL;
                    int l_370 = 0xF160161AL;
                    l_233 = g_96;
                    g_161 = (safe_add_func_int8_t_s_s(((func_24(func_53(g_134, l_317, (safe_lshift_func_int16_t_s_u((func_53((((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(p_18, 4)), p_17)) | (g_96 >= func_53(l_225, (+func_24((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((g_161 >= (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0x1FL, ((safe_add_func_int32_t_s_s(p_17, l_339)) ^ l_339))), l_339))), p_15)), p_17)), p_17, l_340, g_94)), g_147, p_15, p_15))) | l_284), l_317, p_15, g_105, g_134) == l_293), 1)), l_240, l_339), l_293, p_17, p_16) > 4UL) > 0UL), p_18));
                    if (func_53(g_105, l_339, p_16, ((safe_mul_func_int8_t_s_s(g_161, func_53(p_18, p_18, l_225, g_161, l_339))) | l_293), l_343))
                    {
                        unsigned l_344 = 0x9C5ACBA4L;
                        const char l_357 = 0xEFL;
                        l_344 = l_282;
                        g_161 = (p_15 && (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u(func_53(func_24(l_344, (func_24(p_17, l_240, (safe_sub_func_int32_t_s_s(p_16, ((!g_7) | ((safe_rshift_func_int16_t_s_s((g_122 | l_240), 9)) <= 0x9EL)))), p_16) ^ l_233), p_17, p_17), l_357, p_18, p_18, p_18), p_15)) == p_15) < l_233) | g_134), g_161)) ^ p_18), p_16)), p_17)));
                        l_370 = ((safe_lshift_func_uint16_t_u_u(p_15, 15)) && ((((safe_lshift_func_int16_t_s_s((0xF3L < (safe_mod_func_int32_t_s_s((p_15 & l_240), 0x4F3567AFL))), 7)) != 0xDF6277E4L) | (func_24(g_92, (safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(l_317, l_232)), g_92)) > g_161), 0x66F19170L)), p_18, p_15) ^ p_17)) == p_17));
                    }
                    else
                    {
                        unsigned l_375 = 0xAB3DE0F6L;
                        l_373 = (safe_mod_func_uint8_t_u_u(g_122, p_18));
                        l_378 = func_53((func_24(l_340, p_16, (l_374 & l_375), l_314) | p_16), p_17, (safe_mod_func_int32_t_s_s(func_24(g_147, l_340, l_233, g_85), 3L)), p_16, g_7);
                    }
                }
                if (g_7)
                {
                    g_161 = p_18;
                    g_161 = (safe_mod_func_int16_t_s_s(l_233, l_232));
                    for (p_15 = (-24); (p_15 != 43); p_15++)
                    {
                        if (p_15)
                            break;
                        l_284 = (+0x6057AC41L);
                    }
                }
                else
                {
                    unsigned short l_392 = 65535UL;
                    l_378 = func_24(((p_15 ^ ((safe_mul_func_int8_t_s_s(p_15, 2L)) | p_15)) | (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0x59C9L, ((func_53((0x05E4L != ((g_122 || 1L) > (+255UL))), l_391, l_392, l_232, l_317) & g_134) != g_96))), 4)), 0x87F33174L))), g_85, l_378, l_225);
                    l_373 = (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(g_96, (func_53(l_373, (l_378 && 0x816A94E2L), l_314, p_15, l_314) && 0x4ED6L))), g_161));
                }
            }
        }
        l_233 = ((safe_add_func_uint32_t_u_u(0x0254D38CL, ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(p_16, (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((func_24(g_96, l_232, p_18, (l_411 == p_18)) != ((func_53(g_122, p_18, g_147, l_284, l_233) <= g_105) != 0x82A2L)) != p_15), 0x908AAC0FL)), 0x3FE3L)))) >= 0xFD56L), l_233)), g_134)), g_85)) || l_233))) != g_7);
        if (g_96)
            continue;
    }
    l_233 = (safe_rshift_func_uint8_t_u_s(((func_29(l_233, (safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s(g_7, ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(func_36((7L <= (safe_unary_minus_func_uint8_t_u((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(((safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((((safe_rshift_func_uint16_t_u_u(func_36(p_16, g_105, l_225, ((0x315E37E8L || ((g_85 ^ p_16) == l_434)) == 4294967290UL), l_434), p_18)) <= l_233) == l_411) || p_15) > 0x97F2L), l_435)) == 0x96L), p_17)) ^ 0x66L))), 2))))), p_16, l_435, l_225, g_96), 2)), l_225)) || g_161))) & l_436) & l_436), l_374)), p_18))) | 0xE8F0L) != 0x7A2C82EAL), 4));
    g_161 = (-1L);
    return g_147;
}







static char func_19(unsigned char p_20, unsigned char p_21, int p_22, short p_23)
{
    unsigned char l_203 = 1UL;
    int l_211 = 0L;
    int l_212 = 0xC720A73DL;
    for (p_22 = 5; (p_22 != (-28)); p_22 = safe_sub_func_uint32_t_u_u(p_22, 1))
    {
        int l_206 = (-1L);
        l_203 = p_21;
        l_212 = ((0x1823L ^ (safe_mod_func_int16_t_s_s(((p_20 | (5UL && func_53(((l_206 & (safe_lshift_func_uint8_t_u_s(func_59(p_23), g_96))) && (safe_sub_func_uint8_t_u_u((((!l_211) > g_94) >= g_94), g_147))), p_21, g_147, g_105, g_7))) || l_203), p_22))) <= l_206);
    }
    g_161 = (0xA9D5L ^ (p_22 != (((safe_sub_func_int8_t_s_s(0xFBL, ((((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(1L, (p_22 >= (0xC1L < 0x78L)))), ((safe_add_func_uint16_t_u_u(l_211, p_23)) || l_211))) ^ g_96) & g_96) & p_22))) >= 1UL) > 0x43L)));
    return g_94;
}







static unsigned char func_24(int p_25, unsigned char p_26, int p_27, short p_28)
{
    unsigned l_200 = 1UL;
    return l_200;
}







static int func_29(unsigned char p_30, unsigned p_31)
{
    int l_101 = 8L;
    int l_146 = (-1L);
    unsigned char l_181 = 8UL;
    int l_188 = (-1L);
    if ((safe_rshift_func_int8_t_s_s(g_85, 6)))
    {
        short l_121 = 0x96F1L;
        short l_180 = (-1L);
        int l_182 = 0xE1F83D26L;
        for (g_94 = 16; (g_94 <= (-7)); g_94--)
        {
            unsigned short l_120 = 0x38A8L;
            int l_142 = 0L;
            unsigned short l_155 = 65535UL;
            char l_158 = 3L;
            l_101 = g_7;
            for (g_85 = 0; (g_85 < (-19)); --g_85)
            {
                unsigned short l_104 = 0xE8B9L;
                g_105 = l_104;
            }
            if ((g_92 > (safe_mul_func_int16_t_s_s(0xFCBDL, g_94))))
            {
                unsigned l_127 = 7UL;
                const short l_140 = 0xEF1CL;
                unsigned l_141 = 0x4A057597L;
                int l_157 = 1L;
                g_122 = ((+(safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((((p_30 & (0x7BL <= func_53(g_94, p_31, (safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((-9L), ((safe_add_func_uint8_t_u_u(g_96, func_59(func_59(p_30)))) < 1L))), (-7L))), 0xF7832F57L)), l_120, p_31))) >= 0x3B7FL) == p_31), l_121)), 7))) < p_30);
                if ((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((-1L) < ((0x3CL >= (g_122 < (0L && l_127))) == (0x00D659E5L ^ (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((g_94 | l_127) || (safe_lshift_func_int16_t_s_u(p_30, l_121))), 0x0A7CL)), l_121))))), p_30)) >= l_127), p_30)))
                {
                    const short l_137 = 0x9169L;
                    g_134 = (!p_30);
                    l_142 = (safe_mul_func_int8_t_s_s(l_121, ((((2L < (l_137 != g_85)) | func_53(((p_30 > (p_30 & (l_137 & p_31))) && func_53(func_53(func_53((safe_mod_func_uint16_t_u_u(l_127, p_30)), g_96, l_137, l_127, p_30), l_140, g_7, l_140, l_121), l_140, g_7, l_141, l_137)), l_137, p_30, g_96, g_122)) || l_121) && g_94)));
                }
                else
                {
                    int l_154 = 0xEC8A6940L;
                    const unsigned char l_156 = 0xA5L;
                    int l_169 = 0x446D23EEL;
                    for (g_134 = 11; (g_134 < (-2)); g_134--)
                    {
                        short l_145 = 0xFA89L;
                        l_146 = l_145;
                        g_147 = (g_105 > g_92);
                        l_157 = func_53((safe_add_func_uint8_t_u_u((g_134 > (func_53((safe_lshift_func_uint8_t_u_s(p_30, func_53((g_85 ^ p_30), l_101, g_85, (p_31 <= (safe_mul_func_uint16_t_u_u(g_85, func_53(p_31, p_31, l_154, g_94, g_134)))), l_155))), l_156, p_30, l_156, l_140) < 0x71FEL)), g_122)), p_30, l_101, p_30, g_147);
                    }
                    l_158 = (l_101 ^ (0x883CL || g_122));
                    for (g_92 = 0; (g_92 != 4); ++g_92)
                    {
                        g_161 = g_134;
                        l_169 = (safe_sub_func_uint16_t_u_u(func_59((l_101 != (p_30 != (safe_sub_func_uint8_t_u_u((0x1342L == (((g_122 < 0x8A34L) || (safe_unary_minus_func_int8_t_s(((safe_lshift_func_int8_t_s_u((0x55L == (((-10L) & p_30) > (!(((0x0BD04037L | (-6L)) == g_122) || g_134)))), 7)) > 0xCD55L)))) >= l_154)), g_85))))), g_94));
                        l_157 = (safe_rshift_func_uint16_t_u_s(p_31, 15));
                    }
                    g_161 = (((((p_31 || ((safe_lshift_func_int16_t_s_u(p_31, 11)) < (((safe_mul_func_uint16_t_u_u(p_30, (((l_156 ^ l_101) ^ ((safe_mul_func_uint8_t_u_u((l_158 <= (safe_mod_func_int8_t_s_s((((((l_157 != 0xA3L) == (+((((((0UL | l_180) < g_7) >= l_180) != l_140) < g_122) > l_181))) || 0x05F1L) > p_31) != g_122), g_161))), p_31)) < 0xC5L)) ^ g_94))) ^ g_122) && l_121))) >= l_154) && l_121) || p_30) == l_180);
                }
                l_182 = (~(p_30 <= 1UL));
                l_182 = g_96;
            }
            else
            {
                unsigned short l_183 = 0x6B67L;
                l_182 = (-1L);
                if (l_183)
                    continue;
            }
        }
    }
    else
    {
        char l_199 = 6L;
        g_161 = (safe_add_func_uint16_t_u_u(0x4550L, (safe_add_func_int8_t_s_s(l_188, (((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(2UL, g_96)), (((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(l_146, (safe_sub_func_int16_t_s_s(func_53(l_199, g_7, p_31, l_199, l_199), g_94)))) <= l_188), (-5L))) > l_188) <= l_199))) || (-8L)) <= l_101)))));
    }
    return g_105;
}







static const unsigned char func_36(unsigned p_37, const int p_38, unsigned char p_39, const short p_40, char p_41)
{
    unsigned short l_46 = 1UL;
    g_94 = (safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_40, l_46)), ((((!(safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_46 ^ (((safe_mul_func_uint16_t_u_u(((p_38 <= func_53(g_7, l_46, l_46, func_59(l_46), p_41)) >= 1UL), p_38)) >= g_7) <= l_46)), 8)), 5))) > 0x27C3L) ^ l_46) > l_46)));
    return g_85;
}







static int func_53(int p_54, const unsigned short p_55, unsigned p_56, unsigned short p_57, char p_58)
{
    short l_93 = 0L;
    g_92 = p_58;
    return l_93;
}







static unsigned short func_59(unsigned char p_60)
{
    unsigned char l_69 = 0x25L;
    int l_72 = 0xA332E525L;
    unsigned short l_78 = 6UL;
    short l_87 = 0x01E8L;
    int l_91 = (-1L);
    if ((safe_lshift_func_uint8_t_u_s(((g_7 ^ (((safe_mod_func_uint8_t_u_u((p_60 && (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((l_69 | (safe_sub_func_int8_t_s_s(1L, (p_60 || (!(l_72 || l_69)))))) <= p_60), 1)) == (safe_unary_minus_func_uint16_t_u(((g_7 < g_7) || 255UL)))), l_72))), 0x4FL)) >= 0xCDF4L) | p_60)) == g_7), 0)))
    {
        int l_86 = 0x4A474477L;
        g_85 = ((safe_rshift_func_uint8_t_u_s((l_78 && ((g_7 < (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(g_7, ((0x14L && 255UL) && (l_72 > (l_78 > 0L))))), 1))) >= p_60)), p_60)) | g_7);
        l_86 = l_72;
    }
    else
    {
        unsigned l_90 = 0xA337B27FL;
        l_87 = (l_78 < (0x5F80954CL & (~0x19D5A33BL)));
        l_91 = ((safe_lshift_func_uint8_t_u_u((l_90 > g_85), 7)) > 0xD1D4L);
    }
    return p_60;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_1094, "g_1094", print_hash_value);
    transparent_crc(g_1121, "g_1121", print_hash_value);
    transparent_crc(g_1181, "g_1181", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1282, "g_1282", print_hash_value);
    transparent_crc(g_1336, "g_1336", print_hash_value);
    transparent_crc(g_1388, "g_1388", print_hash_value);
    transparent_crc(g_1416, "g_1416", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
