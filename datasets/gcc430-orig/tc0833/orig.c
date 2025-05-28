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



static const unsigned g_9 = 1UL;
static unsigned g_27 = 4294967295UL;
static const volatile char g_95 = 1L;
static char g_96 = 0L;
static unsigned g_123 = 4294967295UL;
static int g_125 = (-10L);
static int g_146 = 0xAAE7D9ADL;
static unsigned char g_157 = 1UL;
static const char g_164 = 0L;
static unsigned short g_170 = 65535UL;
static unsigned g_176 = 4294967292UL;
static int g_205 = 0xB63D32DCL;
static const unsigned g_216 = 0x8D138890L;
static unsigned g_362 = 0xC8EBB682L;
static unsigned g_466 = 0UL;
static unsigned g_509 = 0x9A9F97B6L;
static volatile short g_795 = 1L;
static int g_872 = 0x2F61F2F1L;
static int g_977 = 0x80832C4DL;



static unsigned short func_1(void);
static char func_3(unsigned p_4, unsigned p_5);
static unsigned func_6(unsigned short p_7, const char p_8);
static int func_10(unsigned p_11, unsigned p_12, short p_13, unsigned p_14, unsigned char p_15);
static unsigned char func_22(unsigned p_23, int p_24);
static unsigned func_45(short p_46);
static char func_47(unsigned p_48, unsigned short p_49, char p_50, unsigned p_51);
static const unsigned char func_61(const char p_62, char p_63, char p_64, int p_65);
static unsigned short func_67(unsigned p_68, int p_69, const short p_70);
static short func_71(short p_72, unsigned char p_73, unsigned short p_74);
static unsigned short func_1(void)
{
    unsigned char l_2 = 1UL;
    int l_820 = 1L;
    short l_837 = 0xF4C8L;
    char l_851 = (-3L);
    unsigned short l_863 = 1UL;
    int l_992 = 1L;
    char l_995 = 0x75L;
    int l_1009 = 4L;
    unsigned l_1067 = 1UL;
lbl_1010:
    l_820 = (l_2 < func_3(func_6(l_2, g_9), l_2));
    if (((safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s(g_164, ((safe_unary_minus_func_int16_t_s(l_2)) == (safe_lshift_func_int8_t_s_u(l_820, g_157))))) >= (g_509 ^ (safe_mod_func_uint8_t_u_u(g_362, 246UL)))) & g_205), g_9)) ^ 0x9209L))
    {
        int l_832 = 0xF2F51752L;
        int l_852 = (-1L);
        int l_1030 = 0x1EEC65F8L;
        char l_1051 = 1L;
        unsigned l_1052 = 3UL;
        if (((+(safe_lshift_func_uint8_t_u_s(0UL, 1))) ^ func_71(l_832, ((((g_9 != g_509) == l_832) < (((safe_sub_func_uint16_t_u_u(func_3(g_795, (safe_mod_func_int32_t_s_s(func_3(g_362, g_9), 0x1AF050ADL))), g_125)) & g_125) == l_832)) | l_837), g_27)))
        {
            int l_850 = 0x27331975L;
            l_852 = (safe_add_func_int16_t_s_s((65535UL == (func_67(g_205, l_820, g_509) == (((0xF98CL && (((((((((+l_2) >= (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(g_164, g_216)) != (-4L)), 0xF6809E45L)), 0x63L)), g_164))) > l_837) >= l_850) & g_27) <= l_851) || g_466) < 0x589205E0L) > g_362)) != 0xC505L) > g_509))), l_832));
            g_205 = (safe_mod_func_uint32_t_u_u(l_850, g_205));
            g_872 = (safe_add_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s(0x9416L, func_22(((0L | (!(safe_lshift_func_int8_t_s_u((g_164 <= (safe_mul_func_uint8_t_u_u(l_851, l_863))), 0)))) || (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(func_3(l_851, (safe_sub_func_int16_t_s_s((~(safe_mul_func_int8_t_s_s(0x19L, (g_27 < l_820)))), 0xCAA9L))), l_837)), 0xB0L))), g_95))) <= l_852) > l_820), g_9));
        }
        else
        {
            int l_873 = 6L;
            int l_874 = 0x34CF4244L;
            const int l_978 = 6L;
            if (l_863)
            {
                unsigned char l_877 = 0x91L;
                int l_878 = 1L;
                unsigned l_879 = 4UL;
                l_820 = ((g_466 != func_47(l_873, g_95, (0xBD9EB345L < (l_874 ^ (safe_rshift_func_uint16_t_u_s((g_872 < 247UL), (g_362 < (l_877 != g_146)))))), g_216)) ^ g_509);
                l_878 = l_877;
                if ((((func_22((g_362 == (65530UL != (l_879 > (l_852 > g_164)))), func_47((func_71((safe_add_func_uint16_t_u_u((0xF75AC3A2L < func_61(l_863, l_878, l_878, g_146)), 0x6A82L)), g_466, l_820) || l_832), g_216, g_216, g_9)) <= l_878) | g_9) < l_878))
                {
                    int l_891 = 0x7CDA09E4L;
                    unsigned l_897 = 0x85D4AC49L;
                    g_872 = (l_873 ^ 1UL);
                    l_820 = 0xA85723A6L;
                    l_874 = (safe_mod_func_int32_t_s_s((0L && ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((func_3(func_10((l_891 & (0L | (safe_mul_func_uint16_t_u_u(((-1L) && g_466), (l_837 && (safe_add_func_int8_t_s_s(0x03L, (safe_unary_minus_func_uint16_t_u(l_852))))))))), l_863, l_891, l_897, g_872), l_820) && 0x77CBL), l_863)), g_216)), l_832)))) == g_27)), l_878));
                }
                else
                {
                    unsigned l_910 = 0UL;
                    l_878 = ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(func_6(l_851, l_877), (g_9 || 0x27L))), (safe_rshift_func_int8_t_s_s(l_832, 3)))) > (safe_lshift_func_int8_t_s_u(l_877, (safe_mul_func_uint8_t_u_u(g_164, (safe_lshift_func_int8_t_s_s(g_9, l_910)))))));
                }
                for (l_2 = 0; (l_2 != 15); ++l_2)
                {
                    for (l_852 = (-7); (l_852 < (-5)); l_852++)
                    {
                        l_878 = (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_205, 0xAE0E9BC0L)), (0x1125F944L >= g_176)));
                        if (g_170)
                            continue;
                    }
                    if (l_878)
                        break;
                }
            }
            else
            {
                unsigned char l_919 = 0x62L;
                int l_929 = (-1L);
                l_874 = (l_919 > (safe_sub_func_uint8_t_u_u(g_509, g_362)));
                if (((65535UL >= l_919) && g_170))
                {
                    unsigned l_927 = 0xE4393D16L;
                    int l_938 = 0x9CEE985EL;
                    if (l_919)
                    {
                        const unsigned l_928 = 4294967295UL;
                        g_205 = g_95;
                        if (l_863)
                            goto lbl_922;
lbl_922:
                        g_872 = g_27;
                        l_873 = l_919;
                        l_873 = ((~(func_67((safe_mod_func_int8_t_s_s(l_2, (((0L ^ (safe_lshift_func_uint16_t_u_s(func_22(l_851, l_927), l_928))) & g_216) || l_929))), l_852, l_2) && g_27)) == 7L);
                    }
                    else
                    {
                        char l_952 = (-4L);
                        g_872 = (l_927 | l_863);
                        l_820 = (safe_mul_func_uint16_t_u_u(0x424CL, (safe_mod_func_uint16_t_u_u(0UL, func_67((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_872 || ((g_9 ^ g_123) & g_96)), (((l_873 & 0L) | l_832) | 0x3E8DL))), l_938)), g_125, g_157)))));
                        l_952 = func_61((safe_unary_minus_func_int16_t_s(((((~((safe_lshift_func_int8_t_s_u(l_929, 4)) || l_929)) ^ (g_125 != (((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_929, (safe_mul_func_uint16_t_u_u(0x30A0L, ((((0xC63943FBL != (((4UL >= (((l_837 != (safe_add_func_int32_t_s_s(l_863, 0xABE4BC39L))) == 0x4123L) <= 9UL)) == g_123) || g_123)) || g_872) & g_164) == l_929))))), g_362)), l_874)) >= l_927) > 1UL))) == l_873) >= 0L))), g_205, g_170, l_851);
                    }
                    l_820 = 0xBD553DD7L;
                    l_852 = l_873;
                    l_874 = (l_832 ^ g_9);
                }
                else
                {
                    const short l_953 = 6L;
                    int l_962 = 0L;
                    if (l_852)
                    {
                        g_205 = l_953;
                    }
                    else
                    {
                        l_852 = (((safe_lshift_func_uint16_t_u_u((1UL < g_9), ((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(func_71(l_851, ((g_872 < func_45(((safe_sub_func_int16_t_s_s((func_22(l_929, g_95) ^ (0L | g_27)), l_919)) && l_863))) > l_863), g_9), l_953)) && g_96), l_832)) < g_9))) == g_9) == l_873);
                        return g_146;
                    }
                    g_872 = ((l_962 == ((0x578B5D4CL < g_205) > g_125)) == (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((-2L), (1L && 0x3CL))), ((!((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((+g_509), (l_962 <= l_832))), 0xA9A2601AL)) && 1L)) > 3L))));
                    l_820 = (g_362 != ((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(g_95, (((safe_lshift_func_int16_t_s_u((~func_3(g_509, g_27)), 12)) <= l_953) < (0xFE4FL == l_837)))), 4)) < 0x22L) > g_977) < l_978));
                }
            }
            return g_9;
        }
        for (l_820 = 0; (l_820 < (-17)); l_820 = safe_sub_func_int32_t_s_s(l_820, 1))
        {
            unsigned l_983 = 4294967294UL;
            char l_999 = 0x94L;
            int l_1000 = (-4L);
            if (func_10(g_27, g_146, g_795, (safe_lshift_func_int16_t_s_u(g_977, func_3(l_832, l_851))), g_9))
            {
                short l_984 = 0x521AL;
                g_205 = 0L;
                g_872 = (l_983 & ((0x5CCCFF9DL == (func_6(l_984, l_832) >= (safe_unary_minus_func_int32_t_s(l_852)))) & ((safe_lshift_func_uint8_t_u_s(0x76L, 6)) != (l_984 && (safe_rshift_func_uint16_t_u_u(((0xD5L <= g_9) < l_852), g_27))))));
            }
            else
            {
                unsigned char l_998 = 0x87L;
                l_999 = (((((safe_add_func_int16_t_s_s(l_992, (l_851 || (safe_sub_func_int16_t_s_s((l_995 ^ (safe_sub_func_uint16_t_u_u((l_820 != (g_27 != func_6(g_96, g_216))), g_164))), 65532UL))))) < g_164) | l_851) & 0xEA1613ABL) & l_998);
                l_1000 = l_820;
                if (g_125)
                {
                    unsigned short l_1008 = 0xBF7DL;
                    int l_1019 = 0x0CE234B1L;
                    g_872 = g_466;
                    for (l_832 = 28; (l_832 >= (-4)); l_832 = safe_sub_func_uint16_t_u_u(l_832, 6))
                    {
                        unsigned l_1007 = 8UL;
                        l_992 = func_10((((safe_lshift_func_int16_t_s_u(l_992, 3)) < (safe_add_func_int32_t_s_s(0L, (+l_1007)))) | g_170), l_983, g_362, l_1008, (l_820 ^ l_1009));
                        if (l_2)
                            goto lbl_1010;
                        l_1000 = g_872;
                    }
                    l_1019 = (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_176, (g_164 != func_3(l_1008, (safe_lshift_func_uint16_t_u_s(((l_998 > g_157) == func_3(l_995, (g_170 != func_3(g_205, (safe_rshift_func_int8_t_s_u(l_852, l_1008)))))), 8)))))), g_146));
                }
                else
                {
                    for (l_992 = 1; (l_992 > (-3)); l_992 = safe_sub_func_int8_t_s_s(l_992, 4))
                    {
                        l_852 = g_164;
                        l_852 = ((g_205 <= l_832) < g_795);
                    }
                }
                l_1000 = (-1L);
            }
            l_852 = func_45((safe_mod_func_uint16_t_u_u(func_61(l_983, (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(g_125, l_1030)) <= ((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(0UL)), 2)) | ((func_3(l_1030, g_123) ^ 255UL) && (~0xB0L)))), g_509)), 0x8BL)), g_509, l_1009), l_992)));
        }
        for (g_170 = 0; (g_170 == 37); g_170 = safe_add_func_int8_t_s_s(g_170, 5))
        {
            short l_1050 = 0x1A43L;
            l_992 = ((((safe_rshift_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u((g_362 <= ((l_995 | func_3(l_852, ((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((g_170 < ((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(l_851, ((safe_sub_func_int8_t_s_s(l_1050, (~g_872))) && l_1051))) < (l_852 && g_96)), g_216)) < l_1052)) == g_27), 1UL)) != l_1050), 0x07L)) < 0UL))) < l_1050)), l_1050)) != g_466) & g_977) & l_1050), 6)) >= g_157) < g_96) || g_795);
            if (g_216)
                break;
        }
        l_1030 = (safe_rshift_func_int8_t_s_s((((g_123 > (g_362 < 1L)) > (+((g_123 || (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_466, (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_176 >= (safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(0xB9EFL, (((g_872 & func_3(g_123, g_205)) || 0xF22BL) && l_1067))) | g_125), g_146))), l_1052)), l_852)))), 3L))) ^ 0xC7F6L))) & 3UL), l_1052));
    }
    else
    {
        return g_872;
    }
    return l_995;
}







static char func_3(unsigned p_4, unsigned p_5)
{
    unsigned l_816 = 0x886898D1L;
    int l_817 = 1L;
    l_817 = (safe_add_func_int32_t_s_s(g_27, l_816));
    g_205 = (l_817 && l_816);
    l_817 = (safe_rshift_func_uint16_t_u_s(4UL, p_4));
    return p_5;
}







static unsigned func_6(unsigned short p_7, const char p_8)
{
    short l_682 = 0x1C8BL;
    int l_813 = 0x1EABBE97L;
    l_813 = func_10(p_8, ((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(0xA715L, g_9)), func_22(p_8, g_9))), (-1L))) && 0xD752EB17L) == l_682) <= g_27), g_164, g_216, g_27);
    return p_7;
}







static int func_10(unsigned p_11, unsigned p_12, short p_13, unsigned p_14, unsigned char p_15)
{
    unsigned l_683 = 1UL;
    int l_684 = (-4L);
    int l_732 = 0x9BEE21A9L;
    int l_733 = (-1L);
    int l_787 = 0xB7B21E63L;
    unsigned short l_790 = 0xA23CL;
    l_684 = l_683;
    if ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(func_47(p_14, (((0xADEC1893L < (func_61(((safe_rshift_func_uint8_t_u_u(g_125, 0)) < p_13), l_684, g_216, (7L == (65535UL == (~l_684)))) || 1L)) == 0x4EF253B3L) && 0x07D2L), g_466, p_12), g_466)), l_684)) >= g_27) | 0x4D8AFF95L), 6UL)) ^ 5UL) <= p_11), 12)), l_684)))
    {
        unsigned l_697 = 4294967295UL;
        int l_698 = 0x1C1FEE51L;
        l_698 = l_697;
        l_698 = (4UL && 0x5EBDB019L);
        l_684 = (safe_mul_func_int16_t_s_s(g_125, l_684));
    }
    else
    {
        const char l_703 = 0L;
        unsigned l_708 = 0x7B4B49A3L;
        int l_713 = 0x93A670A7L;
        g_205 = p_14;
        l_684 = ((safe_sub_func_int32_t_s_s(func_61(l_703, (65535UL <= (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(l_708, (safe_mul_func_uint16_t_u_u(l_708, (0xFBC7L | func_61(l_708, g_27, ((safe_rshift_func_int8_t_s_s((!(0xEAL | func_22(l_684, g_176))), 3)) ^ p_14), p_13)))))), g_216))), g_27, l_708), 7L)) && 0xB3C2D44EL);
        l_713 = 8L;
    }
lbl_812:
    if (p_12)
    {
        unsigned short l_731 = 1UL;
        int l_753 = 0x6BDAE4E3L;
        for (p_15 = (-19); (p_15 > 60); p_15 = safe_add_func_uint8_t_u_u(p_15, 8))
        {
            int l_722 = 0x6AD6A9A4L;
            const unsigned char l_734 = 1UL;
            unsigned short l_735 = 0x7BE1L;
            l_732 = (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(248UL, ((func_22((safe_mul_func_uint16_t_u_u((l_722 & (((((g_509 == (safe_rshift_func_uint16_t_u_s((func_67(l_683, (safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(p_12, 0xBEE1D771L)) >= (safe_mul_func_uint8_t_u_u(func_71(p_11, l_731, (func_47(l_732, p_11, l_733, l_733) || l_731)), (-4L)))) ^ p_13), p_12)), l_734) != g_9), 14))) <= 0x89746B82L) || l_684) || g_205) == g_509)), 0xF2DAL)), l_735) | g_216) >= 1UL))), p_15));
            l_684 = (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_14 != func_22(p_12, g_27)), g_27)), 3));
        }
        for (g_157 = (-30); (g_157 < 42); g_157 = safe_add_func_uint16_t_u_u(g_157, 1))
        {
            unsigned l_764 = 7UL;
            unsigned l_769 = 0xA1BF31DBL;
            l_753 = ((g_95 != (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(g_125, (safe_rshift_func_uint16_t_u_s(l_731, ((0x21714613L == g_27) ^ ((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((p_12 != p_12))), g_125)), g_466)) >= g_216)))))), 3))) ^ 1UL);
            g_205 = ((safe_mod_func_int16_t_s_s(p_14, (safe_sub_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((p_13 != ((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_15, l_764)), g_157)) >= g_125)), (safe_lshift_func_int8_t_s_u(g_205, 3)))) > (g_157 == (!(safe_mul_func_uint16_t_u_u(0x3E09L, l_769))))), g_176)))) >= l_764);
            l_732 = l_731;
            l_753 = l_683;
            if (g_157)
                goto lbl_812;
        }
        l_753 = (func_47(((!l_684) < (safe_mod_func_int16_t_s_s(((!(safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(p_13, 3)), 7))) && p_14), (safe_sub_func_int8_t_s_s(g_176, 0UL))))), p_13, l_753, p_15) && 0xAABAL);
    }
    else
    {
        unsigned l_783 = 0x476A2968L;
        int l_784 = 7L;
        for (p_14 = 13; (p_14 <= 4); --p_14)
        {
            unsigned char l_780 = 255UL;
            int l_810 = 1L;
            l_780 = g_123;
            for (g_146 = 6; (g_146 == (-10)); g_146--)
            {
                char l_798 = 0xC9L;
                int l_811 = 0xE41A30C3L;
                l_732 = g_125;
                if (l_783)
                    break;
                l_784 = g_216;
                for (g_125 = 6; (g_125 < 2); --g_125)
                {
                    unsigned short l_801 = 0x5633L;
                    l_684 = (+(0x930FL || (((l_787 <= p_13) <= (safe_add_func_uint16_t_u_u((0x925DL == (l_790 || ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((+g_795), 0)), (safe_rshift_func_int8_t_s_s(l_780, 7)))) == p_12))), p_14))) && l_798)));
                    for (l_798 = 0; (l_798 >= 0); l_798++)
                    {
                        short l_804 = 0x60F0L;
                        l_801 = p_15;
                        l_804 = ((safe_mul_func_uint16_t_u_u(g_27, l_801)) && (l_798 < p_14));
                    }
                    for (l_733 = 10; (l_733 == 26); l_733 = safe_add_func_uint8_t_u_u(l_733, 5))
                    {
                        g_205 = (0L & ((~(p_13 & ((safe_unary_minus_func_int32_t_s(0x140D1BA2L)) | g_95))) ^ ((safe_sub_func_int16_t_s_s(g_176, 1UL)) ^ 0x1FL)));
                        l_810 = p_14;
                        l_811 = (l_801 >= g_95);
                    }
                    if (p_13)
                    {
                        g_205 = g_164;
                        l_784 = l_783;
                    }
                    else
                    {
                        l_784 = l_810;
                        if (g_205)
                            break;
                        if (l_810)
                            continue;
                        l_732 = (l_783 | g_95);
                    }
                }
            }
        }
    }
    l_732 = g_216;
    return g_27;
}







static unsigned char func_22(unsigned p_23, int p_24)
{
    const unsigned l_39 = 0x65DD4D14L;
    int l_40 = 0x3253674FL;
    short l_553 = (-1L);
    int l_564 = (-5L);
    char l_681 = (-2L);
    for (p_23 = 0; (p_23 >= 34); ++p_23)
    {
        unsigned char l_34 = 255UL;
        unsigned l_554 = 0xDBCB720EL;
        if (g_27)
            break;
        l_40 = (0xB82CL == (((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((0x5524L > g_9), p_24)), (!(((g_9 >= (safe_mod_func_uint32_t_u_u(0x0E81DE98L, 1L))) | l_34) && (((((safe_rshift_func_uint16_t_u_u((((g_9 < g_9) | 0UL) != 0L), l_39)) >= 0x808ADC70L) > g_27) || p_23) < 0xF61949F0L))))) <= p_23) < l_39));
        l_40 = ((p_24 ^ ((((p_24 | l_40) | p_24) & (((p_23 > (((safe_sub_func_int32_t_s_s((p_23 == (safe_mod_func_uint32_t_u_u(func_45(p_24), (safe_add_func_int32_t_s_s(g_9, 1L))))), 6UL)) > p_24) >= l_553)) && l_553) || l_34)) != l_34)) <= 0x5C13L);
        if (l_554)
            break;
    }
    l_40 = ((safe_add_func_int8_t_s_s(g_27, (safe_unary_minus_func_uint32_t_u(0x11073F22L)))) || (safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(l_40, (g_27 <= ((-4L) & (safe_rshift_func_uint16_t_u_u(((((~((l_564 & l_40) >= l_553)) != (((l_40 <= p_24) & (-1L)) == 5UL)) ^ g_157) == 0x948D2B12L), 2)))))) == 0x237AL), (-2L))));
    if (func_61(p_23, (safe_add_func_uint8_t_u_u((+l_553), (g_9 != (((safe_mod_func_int16_t_s_s(p_23, l_40)) < (((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(g_95)), 4)) || (p_23 >= (safe_mod_func_uint32_t_u_u(l_564, ((((func_71((65535UL > 0xABF5L), g_170, p_23) && l_564) | p_24) <= p_23) || l_40))))) & p_24)) <= l_40)))), g_509, g_164))
    {
        short l_600 = 0L;
        int l_630 = (-1L);
        if (l_564)
        {
            int l_574 = 0xBF633C73L;
            l_40 = func_45(func_71(l_574, func_71(p_23, (0UL || (safe_lshift_func_int8_t_s_s(g_170, 1))), l_39), l_574));
            for (g_466 = 0; (g_466 != 5); g_466 = safe_add_func_uint8_t_u_u(g_466, 8))
            {
                for (p_23 = 12; (p_23 <= 49); p_23 = safe_add_func_int8_t_s_s(p_23, 4))
                {
                    int l_599 = 0x8C80EB57L;
                    p_24 = (((~(safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u(g_157, 5)) || (g_123 & (g_95 && (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(g_146, p_24)), (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((-10L), (g_157 >= (((safe_sub_func_int16_t_s_s((+g_509), (safe_lshift_func_uint8_t_u_u((g_170 | g_146), 0)))) <= p_23) == l_574)))), g_9)))), l_599))))), 2))) <= p_23) & p_23);
                    p_24 = (((l_600 >= ((func_67(l_600, l_599, g_362) <= g_164) != ((0xE5E31981L > (safe_add_func_uint32_t_u_u((!(safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((8UL ^ ((safe_rshift_func_uint16_t_u_u((+(g_216 < 5L)), g_466)) == l_574)), g_362)), 4L)), p_24))), l_553))) < l_574))) || p_24) >= 0x6E970AECL);
                }
                g_205 = (safe_lshift_func_uint16_t_u_s(p_23, p_24));
                return g_125;
            }
        }
        else
        {
            const unsigned short l_615 = 0x47D3L;
            for (g_466 = 14; (g_466 <= 4); --g_466)
            {
                return l_600;
            }
            g_205 = l_615;
            return g_95;
        }
        for (p_24 = 0; (p_24 >= 9); ++p_24)
        {
            unsigned short l_628 = 0x0499L;
            unsigned char l_629 = 0UL;
            int l_648 = 0xF0EF0762L;
            if ((8L | (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((l_600 && (((safe_rshift_func_uint8_t_u_u(func_47(p_24, (func_61((safe_lshift_func_int16_t_s_u(func_67(l_39, p_23, (((l_600 & (safe_rshift_func_uint8_t_u_u(p_24, g_27))) <= func_45((p_23 == p_23))) == l_628)), 0)), l_600, l_629, g_466) | p_23), g_27, g_164), p_23)) || g_27) == 0xABC87A6DL)), 7)), p_24))))
            {
                int l_633 = 1L;
                l_630 = func_47(l_553, l_40, g_95, l_564);
                if (g_466)
                    continue;
                if (((p_24 < g_123) != (p_23 | 0xDCL)))
                {
                    unsigned char l_640 = 0UL;
                    for (p_23 = (-24); (p_23 >= 57); p_23 = safe_add_func_uint8_t_u_u(p_23, 2))
                    {
                        const unsigned l_641 = 9UL;
                        l_630 = (l_633 == func_67(((((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((p_23 > ((g_362 ^ (g_164 & l_630)) <= (g_362 >= l_628))), l_628)), (safe_lshift_func_int16_t_s_s(0xC604L, l_640)))) < 0x04L) & p_23) >= (-8L)), l_630, l_641));
                        g_205 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_39, 6)), l_640));
                        g_205 = (-9L);
                        if (p_23)
                            break;
                    }
                    l_648 = func_71((safe_mul_func_uint16_t_u_u(((0x400AL | (l_40 <= p_24)) & p_23), func_45(g_125))), l_640, g_27);
                }
                else
                {
                    unsigned l_649 = 0x8270F5A9L;
                    unsigned short l_654 = 1UL;
                    l_654 = ((func_45(((l_649 <= 65535UL) >= (((safe_rshift_func_int8_t_s_s(l_39, 1)) & 0xA5D3L) != (g_216 | (safe_sub_func_uint16_t_u_u((l_649 || l_648), func_71(g_146, ((0UL || 5L) != 4294967289UL), p_23))))))) >= l_633) > l_633);
                    if (l_633)
                        break;
                    l_40 = (!((9L | (safe_sub_func_int16_t_s_s(func_61((((((+((0x91L || 0xA3L) == (safe_lshift_func_int16_t_s_s(g_146, 6)))) != p_23) != (safe_lshift_func_uint8_t_u_s(255UL, (0xC13FL | p_24)))) >= 0L) & g_95), g_125, p_23, l_40), 0x9637L))) && g_96));
                }
            }
            else
            {
                char l_661 = 0L;
                return l_661;
            }
        }
        for (g_205 = 9; (g_205 < (-23)); g_205 = safe_sub_func_uint8_t_u_u(g_205, 8))
        {
            unsigned char l_673 = 1UL;
            for (g_170 = 7; (g_170 < 33); g_170 = safe_add_func_uint8_t_u_u(g_170, 7))
            {
                unsigned char l_666 = 2UL;
                l_40 = ((l_630 < l_666) | g_146);
            }
            p_24 = (safe_mul_func_uint16_t_u_u(g_125, (safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_630 ^ l_630), g_362)), l_673))));
            if (p_24)
                continue;
        }
    }
    else
    {
        return g_205;
    }
    for (p_24 = 0; (p_24 >= (-1)); p_24 = safe_sub_func_uint32_t_u_u(p_24, 6))
    {
        const unsigned l_680 = 0x2728530DL;
        l_564 = (safe_mod_func_int16_t_s_s(func_45(l_553), (safe_sub_func_uint16_t_u_u((g_216 || (g_466 < l_553)), l_680))));
    }
    return l_681;
}







static unsigned func_45(short p_46)
{
    short l_54 = 0x9FC2L;
    unsigned l_293 = 4294967295UL;
    int l_297 = 0L;
    unsigned l_300 = 0x4ECCA75CL;
    int l_469 = (-8L);
    unsigned l_513 = 1UL;
    unsigned short l_523 = 0x51F5L;
    int l_528 = 0x68F2FC80L;
    const unsigned l_538 = 1UL;
    unsigned l_548 = 0xFA73329EL;
lbl_500:
    if (((func_47((safe_add_func_int8_t_s_s(l_54, ((-1L) > 0x71EBL))), p_46, g_9, l_54) >= 4L) == (g_9 <= g_164)))
    {
        int l_294 = 0x77706920L;
        int l_349 = 6L;
        if (func_47(p_46, l_54, ((safe_sub_func_int16_t_s_s(((func_71((+(safe_lshift_func_uint16_t_u_s(p_46, l_293))), g_170, l_294) < l_294) < 246UL), 4L)) >= g_27), g_216))
        {
            unsigned l_299 = 6UL;
            unsigned char l_325 = 255UL;
            int l_346 = 7L;
lbl_309:
            for (g_170 = 0; (g_170 < 6); g_170++)
            {
                unsigned l_298 = 0x9794761DL;
                g_205 = g_27;
                l_297 = g_96;
                l_298 = p_46;
            }
            if ((l_299 > g_125))
            {
                unsigned l_314 = 0x9619D596L;
                l_297 = func_67(l_300, (p_46 > 1UL), func_47((safe_rshift_func_int16_t_s_u(g_216, (((safe_rshift_func_int8_t_s_u(l_297, 5)) < (l_54 > 1UL)) & (safe_sub_func_uint32_t_u_u(l_54, (safe_mul_func_uint8_t_u_u(func_67((g_164 >= g_164), g_164, p_46), l_297))))))), g_9, p_46, p_46));
                if (l_294)
                    goto lbl_309;
                l_325 = (((safe_lshift_func_uint16_t_u_u(p_46, (safe_mul_func_int8_t_s_s((func_47(g_176, l_314, (0x47C0L != (safe_mod_func_int16_t_s_s(g_125, (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(g_170, g_9)) | ((safe_mul_func_int8_t_s_s(g_9, (safe_sub_func_int8_t_s_s(p_46, p_46)))) && 0xE1A5L)), 7))))), g_216) ^ p_46), g_9)))) && (-1L)) < l_299);
            }
            else
            {
                unsigned l_326 = 4294967291UL;
                int l_333 = 0x67AA4D16L;
                if (func_71(p_46, g_95, g_96))
                {
                    l_326 = (!g_123);
                }
                else
                {
                    unsigned char l_336 = 0x7CL;
                    for (g_176 = 0; (g_176 < 35); g_176 = safe_add_func_int8_t_s_s(g_176, 8))
                    {
                        char l_337 = 0x52L;
                        l_297 = l_294;
                        l_333 = (safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(0L, l_297)), g_96));
                        l_337 = (~((l_294 < (0x6EF0L < (l_333 <= 0x7B30L))) == ((safe_mul_func_int8_t_s_s(g_123, l_336)) < g_176)));
                    }
                    l_346 = ((0x88L & (p_46 < ((0x1CC2L >= (safe_lshift_func_int8_t_s_u(p_46, (safe_rshift_func_uint8_t_u_u(((((g_216 | (safe_add_func_int16_t_s_s(p_46, (func_47((((safe_sub_func_uint8_t_u_u(0xE9L, (l_326 < (p_46 ^ l_336)))) != g_170) | 0xE714C154L), g_125, g_146, p_46) | g_216)))) | g_164) | p_46) == g_27), 2))))) | l_325))) ^ g_164);
                    return l_336;
                }
            }
            l_297 = g_170;
        }
        else
        {
            return l_294;
        }
        for (l_54 = 0; (l_54 <= (-24)); --l_54)
        {
            int l_350 = 0x9894FE7AL;
            int l_376 = 0x9E4B0AF9L;
            l_349 = g_205;
            l_350 = 0x161BFE24L;
            if ((((safe_mul_func_uint16_t_u_u(func_71((l_294 < p_46), p_46, g_123), 0UL)) & (safe_mul_func_int16_t_s_s(0x4295L, g_164))) <= p_46))
            {
                for (g_205 = 25; (g_205 >= 7); g_205 = safe_sub_func_uint16_t_u_u(g_205, 8))
                {
                    g_362 = (safe_rshift_func_int16_t_s_s(g_170, ((-3L) > (((((!(~4294967291UL)) > (~(p_46 == (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(((((p_46 != p_46) > (l_294 && 0xE040L)) || 8L) > p_46))), p_46))))) != g_123) == 65535UL) < p_46))));
                }
                g_205 = 0xE65646ECL;
            }
            else
            {
                unsigned l_375 = 0xC2072D21L;
                int l_377 = (-5L);
                g_205 = l_349;
                l_376 = ((((safe_lshift_func_int8_t_s_s(g_362, g_125)) ^ ((safe_mod_func_uint32_t_u_u(((l_349 < (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0xA4L, (safe_add_func_int32_t_s_s(l_54, g_176)))), 10)), (g_95 & p_46)))) ^ l_375), 5L)) >= l_294)) > p_46) || p_46);
                l_377 = p_46;
            }
        }
        g_205 = g_125;
    }
    else
    {
        unsigned l_382 = 0UL;
        int l_384 = (-1L);
        char l_412 = 6L;
        short l_433 = (-1L);
        for (g_157 = (-24); (g_157 <= 14); g_157 = safe_add_func_int32_t_s_s(g_157, 3))
        {
            unsigned short l_383 = 1UL;
            l_384 = ((p_46 < (safe_lshift_func_uint16_t_u_u(l_382, 4))) && l_383);
            g_205 = ((safe_lshift_func_uint16_t_u_u(l_382, (l_384 || l_54))) && (g_176 > (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(1UL, g_146)), 5)) || (safe_mod_func_uint8_t_u_u(l_293, (safe_mul_func_int8_t_s_s(((g_216 && ((p_46 && g_170) <= g_205)) <= p_46), 255UL))))), 0x4B754639L))));
            if (g_362)
                break;
        }
        g_205 = (safe_sub_func_uint16_t_u_u(g_95, p_46));
        g_205 = ((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u(g_146, p_46)))) | (safe_sub_func_int32_t_s_s(p_46, (((safe_rshift_func_int16_t_s_s(l_293, g_157)) != 0UL) <= g_176)))), 0UL)) | g_170);
        if ((safe_mod_func_uint16_t_u_u(((((l_293 == g_27) <= (safe_add_func_uint16_t_u_u((func_67(p_46, g_170, g_123) && func_71(l_412, (!(((safe_sub_func_int8_t_s_s(p_46, (l_54 <= l_412))) || p_46) >= 249UL)), g_9)), g_362))) != 1L) <= 0xFEL), p_46)))
        {
            unsigned l_417 = 4294967287UL;
            int l_424 = 0L;
            l_384 = (!g_205);
            l_424 = ((p_46 <= (safe_mul_func_int8_t_s_s(p_46, (0L ^ l_417)))) >= ((0xEC0D1825L || (safe_mod_func_uint32_t_u_u(p_46, p_46))) & (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((1UL < 0x496351C9L), p_46)), l_417))));
            l_297 = ((g_176 ^ 4UL) & p_46);
            l_384 = g_170;
        }
        else
        {
            const unsigned short l_448 = 0xA11CL;
            int l_451 = 1L;
            int l_482 = 0xB04146A1L;
            l_297 = func_61(((safe_add_func_int32_t_s_s(g_176, p_46)) || (g_362 >= l_382)), g_95, g_205, g_205);
            for (l_412 = 7; (l_412 <= 3); l_412 = safe_sub_func_int16_t_s_s(l_412, 2))
            {
                int l_434 = 0xA4F6752EL;
                unsigned l_449 = 0x617FC8DCL;
                if (((safe_add_func_uint16_t_u_u((func_47((safe_sub_func_int16_t_s_s(g_362, 1L)), l_412, l_433, (0x68L < g_123)) < 0x6167AC9DL), ((p_46 != l_434) < 1L))) || p_46))
                {
                    return p_46;
                }
                else
                {
                    unsigned char l_450 = 255UL;
                    l_451 = ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_s(p_46, l_434)))) & func_71((p_46 || (safe_mul_func_uint16_t_u_u(func_71(func_67(p_46, func_71((safe_sub_func_int8_t_s_s(func_61(p_46, (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((p_46 > (-6L)), l_293)), (l_384 < 0xCCCFL))) != l_448), p_46)), g_96, l_384), l_433)), l_434, p_46), l_300), l_449, p_46), 0xDAECL))), l_450, l_412));
                    l_384 = (p_46 ^ (((l_450 <= (((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_216, (safe_mod_func_int32_t_s_s((~(safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(p_46, (l_449 || (safe_mul_func_int8_t_s_s(((0x54A3L ^ g_164) < (g_170 > (safe_sub_func_int32_t_s_s(p_46, 1L)))), p_46))))) != p_46), g_216))), l_450)))), g_466)) <= l_293) > l_384)) ^ 0x829FL) == 0x23L));
                }
                g_205 = g_125;
                l_451 = (g_123 >= (p_46 >= (((((l_433 == (safe_add_func_int8_t_s_s((l_384 ^ ((p_46 || l_469) || (g_466 != (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((0x48L != (safe_lshift_func_int8_t_s_s((0x80L | p_46), p_46))), 2UL)), 7))))), 0x96L))) ^ g_123) > 0L) & g_95) == g_362)));
            }
            g_205 = 5L;
            for (p_46 = 11; (p_46 < 22); p_46++)
            {
                l_482 = (safe_mod_func_uint8_t_u_u(248UL, (safe_rshift_func_uint16_t_u_u(l_300, 5))));
            }
        }
    }
    for (g_362 = 0; (g_362 != 57); ++g_362)
    {
        short l_499 = 0x18E8L;
        for (g_170 = 7; (g_170 <= 20); g_170 = safe_add_func_int8_t_s_s(g_170, 9))
        {
            unsigned l_498 = 0x8FC6E82AL;
            for (g_146 = 0; (g_146 != 22); ++g_146)
            {
                unsigned l_497 = 0x462C373FL;
                l_499 = ((safe_rshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((!((safe_lshift_func_uint8_t_u_u((p_46 <= p_46), 0)) ^ p_46)), (safe_rshift_func_int8_t_s_s(p_46, g_164)))) >= g_170), l_497)) && (p_46 > l_498));
                if (l_497)
                    break;
            }
            if (p_46)
                continue;
            if (g_157)
                goto lbl_500;
        }
        l_297 = 0xBF1562FCL;
    }
    for (l_469 = 0; (l_469 > 4); l_469 = safe_add_func_uint16_t_u_u(l_469, 1))
    {
        unsigned char l_510 = 0x03L;
        g_509 = (func_71((safe_sub_func_int32_t_s_s((func_47(g_123, g_466, (((safe_unary_minus_func_uint16_t_u(p_46)) < l_469) != (l_293 || g_362)), l_297) >= (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u(g_216)), 3))), g_164)), p_46, g_362) ^ g_216);
        if (l_510)
            break;
        g_205 = ((((safe_sub_func_uint16_t_u_u(g_157, (g_146 & (((g_125 > 0x5303L) && l_513) != 0UL)))) != (safe_rshift_func_int16_t_s_s(0x727DL, (safe_mul_func_int16_t_s_s(0xA7DBL, 0x21B0L))))) && p_46) >= 0x39L);
    }
    if (((-5L) != ((l_293 & ((safe_unary_minus_func_int16_t_s(p_46)) & p_46)) < (safe_sub_func_uint16_t_u_u(func_61((safe_sub_func_int32_t_s_s(g_164, g_216)), l_297, p_46, l_523), g_27)))))
    {
        unsigned char l_524 = 249UL;
        int l_525 = 1L;
        l_524 = (-3L);
        l_528 = (g_9 == (func_47(g_509, l_524, (l_525 >= g_509), p_46) | (safe_add_func_int32_t_s_s((p_46 != (g_216 != p_46)), l_297))));
    }
    else
    {
        int l_531 = 7L;
        int l_543 = 0x35583CA0L;
        for (l_523 = (-17); (l_523 > 2); l_523 = safe_add_func_int8_t_s_s(l_523, 5))
        {
            g_205 = l_531;
        }
        l_543 = (p_46 == (safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(1L, (safe_sub_func_uint32_t_u_u(l_538, l_531)))) >= (safe_mul_func_uint16_t_u_u((p_46 ^ l_531), (l_54 || (safe_lshift_func_uint8_t_u_s(p_46, (l_523 <= l_469))))))), l_293)));
        for (l_300 = (-9); (l_300 == 11); l_300 = safe_add_func_int8_t_s_s(l_300, 3))
        {
            short l_549 = 0L;
            int l_550 = 6L;
            l_543 = (safe_lshift_func_int16_t_s_s(((p_46 > p_46) || ((l_548 > g_509) | 0L)), g_362));
            l_550 = (l_549 || p_46);
        }
        g_205 = p_46;
    }
    return l_469;
}







static char func_47(unsigned p_48, unsigned short p_49, char p_50, unsigned p_51)
{
    const unsigned char l_66 = 0UL;
    short l_280 = 0L;
    int l_288 = 0x34BDB0E7L;
    for (p_50 = 0; (p_50 < (-18)); --p_50)
    {
        int l_258 = 0L;
        int l_277 = 0xFADFD20BL;
        for (p_48 = 23; (p_48 < 16); p_48--)
        {
            unsigned l_77 = 0x7745DDB3L;
            int l_261 = 1L;
            if ((p_48 | ((((safe_sub_func_uint16_t_u_u(0x6B06L, (0x93EB104BL & p_48))) | (func_61(l_66, (g_27 != func_67(g_27, l_66, func_71(((safe_mod_func_uint16_t_u_u(l_66, g_27)) || (-7L)), l_66, l_77))), p_51, p_50) || l_77)) >= (-1L)) > g_9)))
            {
                g_205 = g_216;
                l_258 = 0xDA1B10BFL;
            }
            else
            {
                l_261 = (p_50 != (safe_sub_func_uint16_t_u_u(g_164, g_176)));
            }
        }
        for (l_258 = 13; (l_258 != 12); l_258 = safe_sub_func_uint32_t_u_u(l_258, 2))
        {
            unsigned short l_270 = 0x6337L;
            l_277 = ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((l_258 ^ (safe_mul_func_int8_t_s_s((p_48 < l_270), 2UL))) >= 1UL), (((+(safe_lshift_func_int8_t_s_u((!l_258), 1))) <= func_61(l_66, p_49, (safe_mul_func_uint16_t_u_u((~(safe_rshift_func_int16_t_s_s(l_66, 5))), l_258)), p_48)) | p_51))), 0x20BEL)) ^ g_216);
        }
    }
    for (p_48 = 0; (p_48 > 9); p_48++)
    {
        int l_287 = 0xB49015C6L;
        l_288 = func_61(func_71(func_61(l_66, l_280, (safe_mul_func_uint8_t_u_u(0xA2L, (p_50 != ((safe_sub_func_int16_t_s_s(g_146, g_125)) ^ (safe_mul_func_uint8_t_u_u(255UL, (p_51 ^ (0x4BL || 0x4FL)))))))), l_66), g_27, l_66), g_164, g_9, l_287);
    }
    return g_164;
}







static const unsigned char func_61(const char p_62, char p_63, char p_64, int p_65)
{
    int l_250 = (-1L);
    int l_257 = 4L;
    l_257 = ((((l_250 | func_67(l_250, (g_95 ^ (safe_lshift_func_uint8_t_u_s(p_62, 5))), p_63)) != 0xDF53L) > (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_250, (l_250 || g_164))), 0x8BL))) <= p_65);
    l_257 = 0L;
    return l_257;
}







static unsigned short func_67(unsigned p_68, int p_69, const short p_70)
{
    unsigned char l_243 = 255UL;
    int l_246 = 0xDECD568AL;
    const unsigned char l_248 = 254UL;
    short l_249 = 0x5CD9L;
    l_246 = (((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((l_243 || (safe_sub_func_uint16_t_u_u(func_71(l_243, ((1UL < (g_125 != g_164)) != p_69), l_243), p_69))) && 0UL), 0xC290L)) <= l_243), 12)), 5)) >= p_68) && l_243) ^ l_243) < p_68);
    if (g_125)
        goto lbl_247;
lbl_247:
    l_246 = 0xB2F7ADD7L;
    l_246 = p_69;
    l_249 = (((l_246 < (g_95 | p_69)) > (g_123 || 8L)) == (l_248 < g_9));
    return g_146;
}







static short func_71(short p_72, unsigned char p_73, unsigned short p_74)
{
    unsigned char l_80 = 0x00L;
    int l_81 = (-1L);
    int l_88 = 0xB8A2E7C9L;
    unsigned l_194 = 0UL;
    short l_197 = 1L;
    int l_236 = 5L;
    l_88 = ((((~g_9) && ((p_72 >= (g_9 && 0xCAF8BA45L)) == (safe_add_func_int32_t_s_s(((l_80 < l_81) >= (safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_9, l_81)), 0x8016L)) >= p_74), p_72))), 0x3C6DDDD8L)))) <= l_81) <= p_73);
    if ((safe_sub_func_int16_t_s_s(1L, (((safe_lshift_func_uint8_t_u_u(g_27, 6)) <= g_9) >= (safe_lshift_func_uint16_t_u_u(g_95, 7))))))
    {
        unsigned short l_97 = 0x9C2BL;
        short l_116 = 0x70DBL;
        int l_127 = (-1L);
        g_96 = g_27;
        l_97 = g_9;
        if ((((g_9 && (((safe_sub_func_uint8_t_u_u(g_27, (safe_add_func_uint16_t_u_u(0x947DL, (l_97 == p_72))))) ^ l_80) && (safe_mod_func_uint8_t_u_u((0x2CL != ((safe_mul_func_uint8_t_u_u(g_95, 0x16L)) | 0x7DL)), p_74)))) < p_73) != l_88))
        {
            short l_117 = (-1L);
            l_88 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((0x3691L || (~(safe_mul_func_uint8_t_u_u((0x00L >= ((5UL < ((p_72 > (g_95 && (((safe_lshift_func_uint16_t_u_u((l_80 == 0xA278L), 11)) | (safe_rshift_func_uint8_t_u_u(g_27, l_116))) != g_9))) > (-1L))) && l_117)), 251UL)))) == 255UL) == 0L), p_72)), l_80));
            for (l_116 = (-9); (l_116 > 6); ++l_116)
            {
                int l_122 = 1L;
                for (p_73 = (-8); (p_73 < 2); p_73++)
                {
                    short l_124 = 0L;
                    g_123 = l_122;
                    return l_124;
                }
            }
            g_125 = g_27;
            l_127 = (safe_unary_minus_func_uint32_t_u((0x31L > l_117)));
        }
        else
        {
            int l_128 = (-9L);
            const unsigned short l_131 = 0xDEA9L;
            l_88 = l_128;
            l_88 = l_81;
            l_128 = (safe_mod_func_uint16_t_u_u(0xD051L, g_27));
            l_88 = l_131;
        }
    }
    else
    {
        unsigned short l_134 = 0UL;
        int l_139 = 0x24CF1313L;
        unsigned short l_165 = 65535UL;
        l_139 = (p_72 < ((safe_mod_func_uint32_t_u_u(l_81, l_134)) == (safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s(g_96, l_134)) != g_27), l_134))));
        if (g_9)
            goto lbl_158;
        g_146 = ((safe_lshift_func_uint16_t_u_u(g_95, ((0L & l_88) <= (safe_sub_func_int16_t_s_s(p_73, (l_80 & (safe_mul_func_uint16_t_u_u(l_80, p_72)))))))) == l_88);
        if (p_73)
        {
lbl_158:
            for (l_80 = 0; (l_80 <= 45); ++l_80)
            {
                char l_151 = (-6L);
                char l_154 = 7L;
                g_157 = ((safe_rshift_func_int8_t_s_u((((l_151 && p_73) == (+l_151)) >= (p_73 && (0x3471AF26L | (((safe_sub_func_uint32_t_u_u(g_9, l_154)) ^ l_151) != (!(safe_lshift_func_int8_t_s_u(g_95, l_134))))))), 3)) || g_95);
            }
            return p_74;
        }
        else
        {
            unsigned l_163 = 1UL;
            unsigned char l_179 = 1UL;
            int l_180 = 9L;
            if ((safe_rshift_func_uint16_t_u_s((g_146 <= (safe_sub_func_int16_t_s_s((l_163 != g_164), (l_81 || (l_165 != 0x0803L))))), ((((p_74 | (g_95 == g_96)) | p_74) != g_164) <= g_146))))
            {
                short l_169 = 0x1B32L;
                char l_173 = 4L;
                g_170 = (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(p_73)), l_169));
                l_139 = g_146;
                l_173 = (((g_95 ^ (l_169 & (l_169 || (safe_rshift_func_uint8_t_u_u(p_72, g_164))))) == p_74) == g_96);
            }
            else
            {
                g_176 = (safe_sub_func_int16_t_s_s((0L < 1UL), g_27));
                l_180 = ((((0x1FL || 1UL) != ((p_73 || (safe_add_func_uint8_t_u_u(g_95, l_163))) <= l_163)) == 0x8AL) == l_179);
            }
            if (((((((((0x1CL >= (l_88 || (((l_180 == (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(1L)) < (safe_lshift_func_uint8_t_u_u(l_81, (safe_add_func_uint8_t_u_u(g_170, (0x4EA1F162L || (-5L))))))), (safe_add_func_int32_t_s_s(l_179, l_194)))) == 0xA839L) < p_73), 8)), l_194)) > (-7L)) == g_96)) ^ g_95) && p_73))) <= g_123) == 0xF3L) | (-8L)) & p_73) | 0L) || g_170) == g_9))
            {
                l_180 = (g_27 && (p_74 != p_72));
            }
            else
            {
                l_197 = (g_125 < (safe_mod_func_uint16_t_u_u(g_96, p_74)));
            }
        }
    }
    for (l_81 = 17; (l_81 < 4); --l_81)
    {
        short l_204 = 0x928BL;
        int l_221 = 0x435A66D9L;
        for (l_197 = (-12); (l_197 > (-22)); l_197 = safe_sub_func_uint32_t_u_u(l_197, 3))
        {
            char l_217 = 1L;
            g_205 = (safe_mul_func_int16_t_s_s(p_72, (+l_204)));
            if (g_164)
                continue;
            for (g_146 = (-5); (g_146 <= (-5)); g_146 = safe_add_func_int32_t_s_s(g_146, 2))
            {
                unsigned short l_220 = 0xC5D9L;
                l_221 = ((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((!(safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((+0xA95CL), (g_216 <= (g_176 == g_164)))), p_73))), l_217)), 255UL)) | (safe_rshift_func_int16_t_s_s(l_220, g_27)));
                for (g_157 = (-19); (g_157 <= 17); g_157 = safe_add_func_uint32_t_u_u(g_157, 8))
                {
                    if (g_146)
                        break;
                }
            }
            for (g_123 = 0; (g_123 > 7); g_123 = safe_add_func_int8_t_s_s(g_123, 3))
            {
                l_88 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_9, 6)), 0));
            }
        }
        return l_197;
    }
    l_88 = (safe_lshift_func_int8_t_s_u(0L, (safe_add_func_uint32_t_u_u(p_74, (((l_88 >= (-1L)) <= p_74) < (+(safe_add_func_uint16_t_u_u(p_72, g_125))))))));
    return l_236;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_977, "g_977", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
