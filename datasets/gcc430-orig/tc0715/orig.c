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



static const volatile char g_2 = (-1L);
static char g_10 = 0x2FL;
static unsigned g_83[6][2][2] = {{{0UL,1UL},{1UL,0UL}},{{1UL,1UL},{0UL,1UL}},{{1UL,0UL},{1UL,1UL}},{{0UL,1UL},{1UL,0UL}},{{1UL,1UL},{0UL,1UL}},{{1UL,0UL},{1UL,1UL}}};
static int g_84 = 1L;
static unsigned char g_122 = 255UL;
static unsigned g_141 = 1UL;
static char g_154[2][8][3] = {{{(-4L),(-4L),(-4L)},{(-1L),0xA9L,0xA9L},{(-4L),0xD2L,1L},{(-1L),1L,(-1L)},{(-4L),(-4L),1L},{0x61L,0x61L,0xA9L},{1L,(-4L),(-4L)},{0xA9L,0x2FL,(-1L)}},{{(-4L),1L,(-4L)},{1L,0x61L,(-1L)},{0xD2L,0xD2L,(-4L)},{0xA9L,0x61L,0x61L},{(-4L),1L,1L},{0xA9L,0x2FL,0xA9L},{0xD2L,(-4L),1L},{1L,1L,0x61L}}};
static int g_171[2][4][8] = {{{0xAA7402C0L,(-3L),0x0153984BL,0xDF7C8C0EL,0x84205C74L,0x84205C74L,0xDF7C8C0EL,0x0153984BL},{0xC42DECD2L,0xC42DECD2L,9L,(-6L),0x43701647L,(-3L),0x8829C22DL,0x18A909A0L},{0xA19ADB30L,0x49CD76D8L,0x84205C74L,(-3L),4L,0L,0L,0x18A909A0L},{0x49CD76D8L,0x0153984BL,9L,(-6L),0xAA7402C0L,(-6L),9L,0x0153984BL}},{{0x8AE7450BL,9L,0xAA7402C0L,0xDF7C8C0EL,0L,0xB46863D7L,0x0153984BL,0L},{0L,0x84205C74L,0x18A909A0L,9L,0x8AE7450BL,0x7558CCBDL,0x0153984BL,0x43701647L},{9L,9L,0xAA7402C0L,0xB46863D7L,0xB46863D7L,0xAA7402C0L,9L,9L},{0xB46863D7L,0xAA7402C0L,9L,9L,0xC42DECD2L,0xDF7C8C0EL,0L,0xA19ADB30L}}};
static int g_504 = 3L;
static unsigned short g_542 = 0x5547L;
static unsigned short g_618[8] = {0x3754L,0x3754L,0x3754L,0x3754L,0x3754L,0x3754L,0x3754L,0x3754L};
static int g_710 = 0x0729D914L;
static short g_760 = 0L;
static unsigned g_815[3] = {3UL,3UL,3UL};
static const unsigned short g_864 = 0x823DL;
static volatile int g_1022 = 0xCFD1783DL;



static unsigned short func_1(void);
static unsigned short func_5(unsigned short p_6, unsigned short p_7, unsigned p_8, unsigned short p_9);
static char func_11(char p_12, int p_13, unsigned char p_14);
static int func_19(short p_20);
static short func_24(char p_25);
static unsigned func_33(unsigned short p_34, short p_35);
static char func_44(char p_45, int p_46, int p_47, unsigned char p_48, short p_49);
static char func_64(int p_65);
static short func_72(unsigned p_73, short p_74, char p_75);
static const unsigned char func_78(unsigned p_79, const unsigned short p_80, unsigned p_81);
static unsigned short func_1(void)
{
    const unsigned short l_15 = 0UL;
    int l_817 = 0L;
    int l_843 = 0L;
    char l_1017 = (-3L);
    unsigned l_1037 = 0xFAD4FB06L;
    if (g_2)
    {
        short l_18 = 0x6F08L;
        unsigned char l_816 = 254UL;
        l_817 = (safe_add_func_uint16_t_u_u(func_5(g_2, (g_10 == func_11(g_10, (l_15 & (safe_add_func_int16_t_s_s(g_10, l_18))), ((func_19((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(func_24(((g_10 && ((g_10 < l_15) && l_15)) | l_15)))), 5))) & g_618[4]) & 0L))), l_816, g_760), l_15));
    }
    else
    {
        int l_818 = 0x3FB6E455L;
        unsigned char l_880 = 0xCFL;
        unsigned l_911 = 0x5A80924FL;
        int l_942 = 0x9F4B9AC5L;
        unsigned l_1016 = 0UL;
        unsigned l_1030 = 4294967295UL;
        if (g_84)
        {
            unsigned char l_833 = 255UL;
            int l_865 = 0x62BC9A74L;
            unsigned short l_906 = 9UL;
            unsigned char l_920 = 253UL;
            l_818 = (l_818 < (~(g_83[0][1][0] && (safe_unary_minus_func_int32_t_s(((safe_unary_minus_func_int16_t_s(func_78(g_618[2], func_64((safe_add_func_uint8_t_u_u(g_171[0][2][1], 5L))), l_15))) > ((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_817 != 0x82C04628L), l_833)), 6)), 1L)), g_2)) <= 0x2132L), g_504)) == g_760)))))));
            for (l_817 = 0; (l_817 > 10); ++l_817)
            {
                int l_841[4] = {0L,0L,0L,0L};
                int l_847[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_847[i] = 0L;
                if (func_44((func_78(l_817, (~g_83[4][0][1]), l_817) || g_710), (~l_833), (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((g_618[4] == (safe_sub_func_uint8_t_u_u((l_818 | ((l_841[2] > g_815[0]) != 1UL)), 251UL))))), l_833)), g_710, l_817))
                {
                    return g_618[4];
                }
                else
                {
                    char l_842 = 0x79L;
                    l_843 = l_842;
                    for (g_710 = 0; (g_710 != (-6)); g_710--)
                    {
                        int l_846 = 0xCC26F8F4L;
                        g_171[0][1][3] = g_141;
                        l_843 = l_846;
                        g_171[0][1][3] = (-1L);
                        l_847[0] = g_154[1][3][1];
                    }
                    l_865 = (l_833 < ((0x800CL | l_842) | (5UL < (safe_add_func_uint32_t_u_u((((((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((0L || (safe_sub_func_int16_t_s_s((func_11((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((0x65F43948L <= g_84) && ((((safe_lshift_func_int16_t_s_s(g_122, 12)) < (((safe_lshift_func_int8_t_s_u(g_2, g_864)) | 0x2BL) < g_864)) | l_833) >= g_864)), 3)), (-1L))), l_833, g_864) && g_710), g_815[1]))) >= g_542), 0x1EL)), 5)) <= g_141) ^ 0x320BL) ^ l_841[0]) & (-9L)), g_618[1])))));
                    l_865 = (safe_add_func_uint8_t_u_u(l_841[2], func_64(g_84)));
                }
            }
            l_817 = l_818;
            for (g_710 = 9; (g_710 > 23); g_710 = safe_add_func_int8_t_s_s(g_710, 5))
            {
                int l_879[3];
                const unsigned char l_925 = 1UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_879[i] = 0xE520F500L;
                for (g_10 = 0; (g_10 >= 20); g_10++)
                {
                    unsigned char l_878[8][2] = {{2UL,0UL},{0x90L,0UL},{2UL,0UL},{0x90L,0UL},{2UL,0UL},{0x90L,0UL},{2UL,0UL},{0x90L,0UL}};
                    int i, j;
                    for (l_865 = 1; (l_865 >= 0); l_865 -= 1)
                    {
                        char l_881 = 0xD1L;
                        g_171[0][1][3] = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((0x752FL | g_83[4][1][0]) == (g_141 >= (l_878[7][1] == g_154[1][3][1]))) == (l_879[1] || ((((func_5(l_880, (0L != (0x7AL && l_878[4][0])), l_15, l_878[0][0]) > 0xF27FL) ^ 1UL) > g_10) < l_879[0]))), l_865)), 4));
                        return l_881;
                    }
                }
                for (l_865 = (-27); (l_865 >= 4); ++l_865)
                {
                    g_171[0][0][5] = 0x5CAFA434L;
                    l_879[1] = l_818;
                    g_171[0][1][3] = g_171[1][3][6];
                }
                for (g_10 = 0; (g_10 <= 7); g_10 += 1)
                {
                    int l_915 = 0x64B79A8CL;
                    int i;
                    if (((((safe_rshift_func_int16_t_s_s(((0xEA11L == ((safe_add_func_uint16_t_u_u(((g_618[g_10] >= func_24(l_818)) <= 65535UL), (253UL < (safe_add_func_uint16_t_u_u((l_818 >= 65535UL), ((0L | g_710) >= g_710)))))) | l_879[2])) >= 0x74L), 13)) > 0x28A15A92L) != l_865) == 0xF7L))
                    {
                        unsigned short l_905 = 0xCCFDL;
                        g_171[1][3][5] = (l_818 & ((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((g_864 == ((g_864 && ((safe_unary_minus_func_int16_t_s((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((l_865 & ((g_618[2] || (g_83[0][0][0] != g_710)) ^ g_864)) || (g_710 ^ g_618[4])), 1)), 1)), g_864)))) == l_905)) != g_141)), l_865)), g_2)) && 3L) < l_906) ^ 0xE1L), g_141)), l_817)) | 0xBA147613L));
                        l_915 = ((safe_mod_func_int16_t_s_s((g_154[1][3][1] <= g_84), l_833)) == (safe_mod_func_int16_t_s_s(l_817, ((l_911 <= (1UL <= (safe_unary_minus_func_int8_t_s((!(safe_lshift_func_uint8_t_u_s(255UL, 1))))))) | func_24((g_864 && 1L))))));
                        l_817 = l_905;
                    }
                    else
                    {
                        unsigned l_921[6] = {0x87487D11L,0x87487D11L,0x87487D11L,0x87487D11L,0x87487D11L,0x87487D11L};
                        short l_924 = (-5L);
                        int l_926 = 0x4D88DB9FL;
                        int i;
                        l_865 = (safe_mul_func_int32_t_s_s(l_817, (g_815[0] != (safe_mod_func_int8_t_s_s((l_920 & ((g_618[g_10] > (func_44(l_921[3], g_618[g_10], l_906, (safe_sub_func_uint16_t_u_u(func_5(l_880, (l_817 && l_15), l_924, g_154[1][3][1]), g_618[6])), g_760) <= g_618[g_10])) ^ g_760)), l_879[2])))));
                        g_171[0][1][1] = g_83[4][1][0];
                        l_926 = (((g_10 < (!((l_865 == l_879[1]) || g_2))) | 1UL) | l_925);
                        g_171[1][0][4] = func_24(l_911);
                    }
                    l_865 = (((g_171[0][1][3] >= (safe_sub_func_uint16_t_u_u(g_618[1], (0x98492C1BL > g_815[1])))) & (l_817 ^ (safe_mod_func_int32_t_s_s(g_815[0], func_5(l_865, ((g_710 | 0x3357L) || 0x7D6C50A9L), l_920, l_843))))) ^ l_833);
                    for (l_818 = 2; (l_818 <= 7); l_818 += 1)
                    {
                        unsigned l_935 = 4294967291UL;
                        l_879[0] = ((safe_mod_func_uint32_t_u_u(l_879[1], g_618[g_10])) > (g_171[0][1][3] || (0xFC89L && (safe_mod_func_uint32_t_u_u(((g_83[5][0][0] | g_83[4][1][0]) && g_10), l_915)))));
                        g_171[0][1][3] = (func_11((g_154[1][0][2] >= (l_843 || (0x5582L >= 0x2EF4L))), g_504, g_760) ^ l_935);
                        return g_10;
                    }
                }
            }
        }
        else
        {
            short l_936 = 1L;
            int l_953 = 0L;
            unsigned char l_986 = 248UL;
            const int l_993 = 0xAE79B95CL;
            int l_1002[5][5][7] = {{{4L,(-1L),(-6L),0xA025FC30L,0x60F55119L,0x60F55119L,0xA025FC30L},{1L,0L,1L,0x48DECC0FL,0xA025FC30L,4L,0x16919EB1L},{(-6L),(-1L),4L,0x48DECC0FL,4L,(-1L),(-6L)},{(-1L),(-1L),0x16919EB1L,0xA025FC30L,2L,4L,2L},{(-1L),2L,2L,(-1L),1L,0x60F55119L,0x48DECC0FL}},{{(-6L),0x60F55119L,0x16919EB1L,1L,1L,0x16919EB1L,0x60F55119L},{1L,(-6L),4L,(-1L),2L,0x48DECC0FL,0x48DECC0FL},{4L,(-6L),1L,(-6L),4L,(-1L),2L},{0x16919EB1L,0x60F55119L,(-6L),(-1L),0xA025FC30L,(-1L),(-6L)},{2L,(-1L),1L,4L,0L,(-1L),0x60F55119L}},{{0x60F55119L,0x16919EB1L,1L,1L,0x16919EB1L,0x60F55119L,(-6L)},{0xA025FC30L,1L,2L,(-6L),0L,0L,(-6L)},{4L,0x48DECC0FL,4L,(-1L),(-6L),0xA025FC30L,0x60F55119L},{2L,1L,0xA025FC30L,(-1L),0xA025FC30L,1L,2L},{1L,0x16919EB1L,0x60F55119L,(-6L),(-1L),0xA025FC30L,(-1L)}},{{1L,(-1L),(-1L),1L,4L,0L,(-1L)},{2L,0L,0x60F55119L,4L,4L,0x60F55119L,0L},{4L,2L,0xA025FC30L,0x16919EB1L,(-1L),(-1L),(-1L)},{0xA025FC30L,2L,4L,2L,0xA025FC30L,0x16919EB1L,(-1L)},{0x60F55119L,0L,2L,0x16919EB1L,(-6L),0x16919EB1L,2L}},{{(-1L),(-1L),1L,4L,0L,(-1L),0x60F55119L},{0x60F55119L,0x16919EB1L,1L,1L,0x16919EB1L,0x60F55119L,(-6L)},{0xA025FC30L,1L,2L,(-6L),0L,4L,0x60F55119L},{(-1L),0xA025FC30L,(-1L),(-6L),0x60F55119L,0x16919EB1L,1L},{0L,2L,0x16919EB1L,(-6L),0x16919EB1L,2L,0L}}};
            int i, j, k;
            if (l_818)
            {
                unsigned short l_939 = 2UL;
                int l_945[7][6][6] = {{{0L,0x6BBC37FBL,1L,(-2L),0xF19B9183L,0x88108860L},{0xB74E64BAL,0x8ADB1C45L,0x69488562L,0x8ADB1C45L,0xB74E64BAL,7L},{4L,0xF19B9183L,(-1L),0x69488562L,7L,0L},{1L,0x1BCA20DBL,0xA0A04495L,0xF19B9183L,0x6BBC37FBL,0L},{0x8CCFB5BEL,7L,(-1L),0L,0x80AD13A3L,7L},{0x6BBC37FBL,0x73D6D29CL,0x69488562L,0L,0xB5B13797L,0x88108860L}},{{0x88108860L,0x1509CDB8L,1L,0x793F9CBDL,2L,0x8ADB1C45L},{0x16607242L,(-1L),0L,(-1L),0x82823468L,0xB74E64BAL},{0x63E61E17L,0x8CCFB5BEL,1L,0x08EC05C3L,1L,1L},{0x1509CDB8L,0L,0L,0x1509CDB8L,(-1L),0x73D6D29CL},{0x8ADB1C45L,0xB5B13797L,0x1BCA20DBL,0x0562E378L,0xCCD31268L,0x7AB7ACCCL},{0x73D6D29CL,0x88108860L,0xB624523EL,2L,0xCCD31268L,0x69488562L}},{{0x5A36E9A0L,0xB5B13797L,7L,1L,(-1L),3L},{0xB22B43FDL,2L,0xB22B43FDL,0x63E61E17L,0L,0x793F9CBDL},{0L,7L,0L,0x73D6D29CL,0x1BCA20DBL,0x69488562L},{0x16607242L,0x7AB7ACCCL,(-6L),3L,0x1509CDB8L,7L},{0xA0A04495L,0x7DA3DC4BL,0x82823468L,0x16607242L,0xE55E17F2L,0x16607242L},{1L,0L,1L,0xCCD31268L,0x88108860L,0x7AB7ACCCL}},{{0x0562E378L,0x73D6D29CL,0x61922BDDL,(-1L),0xB74E64BAL,0x48832A3CL},{0x8ADB1C45L,0L,0L,(-1L),0x82823468L,0xCCD31268L},{0x0562E378L,0x5A36E9A0L,0x8CCFB5BEL,0xCCD31268L,0xB5B13797L,(-6L)},{1L,1L,0x793F9CBDL,0x16607242L,0x5A36E9A0L,0L},{0xA0A04495L,0xB74E64BAL,0xF19B9183L,3L,7L,0xB624523EL},{0x16607242L,3L,4L,0x73D6D29CL,(-1L),0x1509CDB8L}},{{0L,0xA0A04495L,(-1L),0x63E61E17L,0x63E61E17L,(-1L)},{(-2L),(-2L),(-1L),0L,0x6BBC37FBL,0x1BCA20DBL},{0xB22B43FDL,1L,0xB74E64BAL,0x1509CDB8L,1L,(-1L)},{0L,0xB22B43FDL,0xB74E64BAL,0L,(-2L),0x1BCA20DBL},{1L,0L,(-1L),0x7DA3DC4BL,0L,(-1L)},{0x7DA3DC4BL,0x48832A3CL,1L,0x73D6D29CL,0x16607242L,0L}},{{3L,0L,0x82823468L,0L,0x80AD13A3L,0x73D6D29CL},{0x80AD13A3L,0xA0A04495L,2L,0xE55E17F2L,0x8ADB1C45L,0x08EC05C3L},{2L,0x8CCFB5BEL,0xB5B13797L,0xB74E64BAL,0xB5B13797L,0x8CCFB5BEL},{0xCCD31268L,(-6L),0x80AD13A3L,(-2L),0x08EC05C3L,0x16607242L},{0x88108860L,0x7AB7ACCCL,0x6BBC37FBL,0x1509CDB8L,0x793F9CBDL,3L},{0L,0x7AB7ACCCL,7L,1L,0x08EC05C3L,0x0562E378L}},{{0x1BCA20DBL,(-6L),0xB74E64BAL,0x793F9CBDL,0xB5B13797L,4L},{(-6L),0x8CCFB5BEL,0xF19B9183L,0x48832A3CL,0x8ADB1C45L,0x88108860L},{(-2L),0xA0A04495L,0x8CCFB5BEL,1L,0x80AD13A3L,0L},{0xF19B9183L,0L,0x48832A3CL,0x1BCA20DBL,0x16607242L,0xB5B13797L},{3L,0x48832A3CL,0x7DA3DC4BL,0x7DA3DC4BL,0x48832A3CL,3L},{1L,0x08EC05C3L,1L,0x8CCFB5BEL,0x63E61E17L,1L}}};
                int i, j, k;
                l_817 = (0x36A9097DL || (g_504 | l_936));
                for (l_911 = 10; (l_911 >= 29); l_911++)
                {
                    unsigned char l_948[7][9] = {{0x78L,255UL,0x78L,0x78L,255UL,0x78L,0x78L,255UL,0x78L},{0x78L,255UL,0x78L,0x78L,255UL,0x78L,0x78L,255UL,0x78L},{0x13L,0x78L,0x13L,0x13L,0x78L,0x13L,0x13L,0x78L,0x13L},{0x13L,0x78L,0x13L,0x13L,0x78L,0x13L,0x13L,0x78L,0x13L},{0x13L,0x78L,0x13L,0x13L,0x78L,0x13L,0x13L,0x78L,0x13L},{0x13L,0x78L,0x13L,0x13L,0x78L,0x13L,0x13L,0x78L,0x13L},{0x13L,0x78L,0x13L,0x13L,0x78L,0x13L,0x13L,0x78L,0x13L}};
                    int i, j;
                    if (g_815[2])
                        break;
                    l_945[4][2][2] = ((l_939 || (254UL ^ (safe_rshift_func_uint16_t_u_s((~((l_880 ^ g_154[1][3][1]) <= l_942)), 9)))) && ((1UL ^ ((-8L) >= 0L)) | (safe_add_func_int16_t_s_s((((l_15 < g_864) | (-3L)) >= g_2), 0x2BCFL))));
                    for (l_942 = 12; (l_942 != (-2)); --l_942)
                    {
                        g_171[0][1][3] = (g_2 <= l_942);
                        g_171[0][1][3] = l_948[1][7];
                        g_171[0][1][3] = ((safe_lshift_func_int16_t_s_s(l_880, 11)) & (g_710 || l_945[6][5][2]));
                    }
                    for (g_10 = 14; (g_10 < 14); g_10 = safe_add_func_uint8_t_u_u(g_10, 9))
                    {
                        return g_154[1][1][2];
                    }
                }
                for (g_710 = 0; g_710 < 3; g_710 += 1)
                {
                    g_815[g_710] = 2UL;
                }
                l_953 = g_83[3][1][0];
            }
            else
            {
                g_171[0][1][4] = g_710;
            }
            for (g_710 = 0; (g_710 <= 20); g_710 = safe_add_func_int8_t_s_s(g_710, 7))
            {
                int l_971 = 0x82A87D25L;
                unsigned l_984 = 0x65290186L;
                for (g_504 = (-28); (g_504 == (-22)); g_504 = safe_add_func_int32_t_s_s(g_504, 2))
                {
                    char l_962[1][10][5] = {{{0x5CL,(-9L),1L,1L,(-9L)},{(-1L),(-4L),1L,0x74L,0x74L},{0x37L,0L,0x37L,1L,0x8FL},{7L,8L,0x74L,8L,7L},{0x37L,0x5CL,0L,(-9L),0L},{(-1L),(-1L),0x74L,7L,0xAAL},{0x5CL,0x37L,0x37L,0x5CL,0L},{8L,7L,1L,1L,7L},{0L,0x37L,1L,0x8FL,0x8FL},{(-4L),(-1L),(-4L),1L,0x74L}}};
                    unsigned short l_985 = 0x8DA2L;
                    int i, j, k;
                    l_971 = (g_2 || (func_44(func_64((safe_sub_func_uint8_t_u_u((!(((safe_sub_func_int32_t_s_s(l_962[0][9][3], ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((((g_171[0][3][7] ^ ((l_953 >= (g_141 == ((0x52CFL && (safe_sub_func_uint8_t_u_u((func_72(l_971, (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(0x4203L, 0xDDC3L)), g_504)), 5)) > l_911), g_864)), g_760)), 0x06L)), g_710) <= l_984), g_710))) & (-10L)))) != 1L)) || l_962[0][1][4]) & l_984), l_936)) == l_985), 12)) & l_986))) && l_985) | 0L)), g_618[4]))), l_986, l_942, l_843, l_817) & 0x66L));
                    g_171[0][1][3] = g_2;
                    if (g_710)
                        continue;
                    if (g_618[3])
                        break;
                }
                l_818 = 0x46989BF5L;
                l_942 = (((g_542 <= (l_936 >= ((g_618[4] < g_760) ^ (g_760 && (0x31A8A9FCL ^ ((l_971 || (safe_rshift_func_uint16_t_u_s((+((((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_84, ((0x97L < g_618[4]) && (-3L)))), l_880)) && g_122) || l_953) != g_122)), 2))) & 0x19126B17L)))))) ^ g_171[0][1][3]) && l_993);
            }
            for (l_953 = 29; (l_953 >= (-7)); l_953--)
            {
                unsigned l_1007 = 4294967295UL;
                char l_1015 = 0x23L;
                int l_1034 = 0x7F323778L;
                for (g_542 = 0; (g_542 <= 1); g_542 += 1)
                {
                    char l_1010[10][10][2] = {{{0x8DL,0x87L},{7L,7L},{0L,0x62L},{7L,0x25L},{0x87L,0x87L},{0x42L,0x18L},{0x8DL,0x25L},{0x75L,(-7L)},{0L,0x75L},{0x62L,0x87L}},{{0x62L,0x75L},{0L,(-7L)},{0x75L,0x25L},{0x8DL,0x18L},{0x42L,0x87L},{0x87L,0x25L},{7L,0x62L},{0L,7L},{7L,0x87L},{(-7L),0L}},{{0L,7L},{0L,0x25L},{0x18L,0x8DL},{0x42L,0x8DL},{0x18L,0x25L},{0L,7L},{0L,0L},{(-7L),0x87L},{7L,7L},{0L,0x62L}},{{7L,0x25L},{0x87L,0x87L},{0x42L,0x18L},{0x8DL,0x25L},{0x75L,(-7L)},{0L,0x75L},{0x62L,0x87L},{0x62L,0x75L},{0L,(-7L)},{0x75L,0x25L}},{{0x8DL,0x18L},{0x42L,0x87L},{0x87L,0x25L},{7L,0x62L},{0L,7L},{7L,0x87L},{(-7L),0L},{0L,7L},{(-1L),(-1L)},{0x87L,0L}},{{0x0BL,0L},{0x87L,(-1L)},{(-1L),0L},{0x61L,(-1L)},{0x42L,1L},{0L,(-5L)},{0x61L,0x0CL},{(-5L),(-1L)},{0x25L,0x25L},{0x0BL,0x87L}},{{0L,(-1L)},{0x59L,0x42L},{0x61L,0x59L},{0x0CL,1L},{0x0CL,0x59L},{0x61L,0x42L},{0x59L,(-1L)},{0L,0x87L},{0x0BL,0x25L},{0x25L,(-1L)}},{{(-5L),0x0CL},{0x61L,(-5L)},{0L,1L},{0x42L,(-1L)},{0x61L,0L},{(-1L),(-1L)},{0x87L,0L},{0x0BL,0L},{0x87L,(-1L)},{(-1L),0L}},{{0x61L,(-1L)},{0x42L,1L},{0L,(-5L)},{0x61L,0x0CL},{(-5L),(-1L)},{0x25L,0x25L},{0x0BL,0x87L},{0L,(-1L)},{0x59L,0x42L},{0x61L,0x59L}},{{0x0CL,1L},{0x0CL,0x59L},{0x61L,0x42L},{0x59L,(-1L)},{0L,0x87L},{0x0BL,0x0CL},{0x0CL,(-1L)},{0L,(-1L)},{(-3L),0L},{(-5L),0x61L}}};
                    int i, j, k;
                    l_818 = 0x80FEA0A1L;
                    for (g_84 = 0; (g_84 <= 2); g_84 += 1)
                    {
                        int i, j, k;
                        l_1002[4][0][1] = ((g_154[g_542][(g_84 + 1)][(g_542 + 1)] != 0x4BBBBA5DL) < (0x55L < (0x4A88442EL > (safe_sub_func_int32_t_s_s((g_815[g_84] & (safe_rshift_func_int16_t_s_s((0x23L ^ func_24(g_815[g_84])), (safe_sub_func_uint32_t_u_u(6UL, g_171[0][1][3]))))), l_818)))));
                        g_171[0][1][7] = (safe_mod_func_int32_t_s_s(l_911, (safe_lshift_func_uint8_t_u_u(func_5(((func_5(l_1007, (func_5((((safe_rshift_func_uint16_t_u_u(l_1010[2][2][0], 3)) | 0x6AB0L) > (l_986 | ((g_154[g_542][(g_84 + 1)][(g_542 + 1)] == (safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((g_171[0][2][4] >= (((g_154[g_542][(g_84 + 1)][(g_542 + 1)] && l_1002[0][4][1]) != l_993) <= g_864)), l_1015)), l_1016))) && g_710))), l_911, l_1010[5][0][1], l_1017) != l_1010[1][4][1]), l_1017, g_618[4]) && g_83[1][1][0]) != g_815[g_84]), l_993, l_1010[1][4][1], g_2), 0))));
                    }
                }
                for (l_911 = 0; (l_911 >= 47); l_911 = safe_add_func_uint8_t_u_u(l_911, 6))
                {
                    unsigned l_1025 = 0x36A0513DL;
                    if ((safe_add_func_int32_t_s_s(g_1022, (safe_mod_func_int8_t_s_s(((l_1025 & (func_72(func_44(g_618[4], (((safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((l_1025 ^ func_64(func_33(g_171[1][2][0], func_78(l_817, g_84, l_1016)))), l_1030)) < g_618[4]), g_815[2])) > 0xF6F1L) || l_953), l_15, g_10, g_10), l_880, g_618[1]) < g_618[5])) != (-10L)), l_1016)))))
                    {
                        l_818 = func_19(g_710);
                    }
                    else
                    {
                        unsigned short l_1031 = 0x1CBBL;
                        g_171[0][1][3] = (((248UL != func_19(l_993)) != l_953) >= (((l_1031 == g_10) < (safe_lshift_func_uint8_t_u_s(0x8CL, (l_936 == g_10)))) >= 0xD6L));
                    }
                    g_171[0][1][3] = (l_1017 > (-1L));
                    l_1034 = (g_154[1][2][1] < (-1L));
                    for (l_1025 = 0; (l_1025 <= 13); l_1025++)
                    {
                        g_171[0][1][3] = g_83[4][1][0];
                        if (g_122)
                            break;
                        return g_154[1][3][1];
                    }
                }
            }
            return g_83[5][0][0];
        }
    }
    g_171[1][2][2] = l_1037;
    return g_618[4];
}







static unsigned short func_5(unsigned short p_6, unsigned short p_7, unsigned p_8, unsigned short p_9)
{
    return g_83[4][1][0];
}







static char func_11(char p_12, int p_13, unsigned char p_14)
{
    unsigned l_812 = 0x26C16DA6L;
    char l_813 = 0x0CL;
    int l_814 = 7L;
    g_171[0][3][6] = ((safe_mod_func_uint16_t_u_u(g_122, func_72(((safe_sub_func_uint8_t_u_u((((func_72(g_10, l_812, p_14) & func_24((func_24(l_812) ^ (0L || g_171[0][1][3])))) < p_13) ^ l_812), l_813)) && (-1L)), g_154[1][3][2], p_13))) && g_542);
    l_814 = 9L;
    g_171[0][0][0] = l_814;
    return g_815[1];
}







static int func_19(short p_20)
{
    const unsigned char l_30 = 248UL;
    int l_56 = 2L;
    int l_790 = 0L;
    unsigned char l_807[5] = {3UL,3UL,3UL,3UL,3UL};
    int i;
    if ((safe_mod_func_int8_t_s_s(((g_10 > l_30) & 0x7758B39DL), 0x57L)))
    {
        const char l_31 = (-4L);
        int l_32 = 6L;
        l_32 = (0x4EL > (l_31 > l_31));
    }
    else
    {
        return g_10;
    }
    if (((((((func_33(p_20, (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(65535UL, 4)) == (safe_rshift_func_int8_t_s_s(func_44(((safe_rshift_func_int8_t_s_u(((g_10 | ((((safe_sub_func_uint32_t_u_u(func_24(g_10), (safe_rshift_func_int16_t_s_s(p_20, 6)))) & (((9L < ((-7L) >= func_24(((((g_10 ^ l_56) & g_10) > g_10) || 0x83A56CF6L)))) | l_56) & p_20)) || g_10) || l_30)) & 0xB1EDL), p_20)) < 248UL), g_10, g_10, g_10, l_56), 4))), 1)), 0UL))) ^ (-10L)) ^ l_30) <= l_56) ^ g_618[1]) == l_30) <= 65535UL))
    {
        l_790 = (-9L);
    }
    else
    {
        g_171[0][1][3] = func_33((g_618[4] >= func_24(l_30)), (+((-7L) | p_20)));
        l_790 = (!(-9L));
    }
    l_807[0] = (g_618[3] != (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_154[1][3][1], g_141)), (safe_add_func_int32_t_s_s(7L, func_78((0x46L && (-6L)), (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(p_20, (safe_lshift_func_uint16_t_u_u((p_20 != 0x63DF4435L), g_710)))), 4)) | p_20) < 1L), l_56))))) >= g_710), l_790)) >= 5L), 5)));
    return p_20;
}







static short func_24(char p_25)
{
    short l_26 = 0x12A8L;
    int l_27 = (-1L);
    l_27 = l_26;
    return l_26;
}







static unsigned func_33(unsigned short p_34, short p_35)
{
    int l_285 = (-1L);
    unsigned char l_286 = 9UL;
    char l_339 = (-6L);
    short l_576 = (-1L);
    char l_665 = 9L;
    short l_695[8][8] = {{0x7DAEL,0x7DAEL,0L,0x101AL,0xEF20L,0x2414L,1L,0x2414L},{0xB5CBL,0x6020L,0x101AL,0x6020L,0xB5CBL,0xFDE4L,0x7DAEL,0x2414L},{0x6020L,0xEF20L,1L,0x101AL,0x101AL,1L,0xEF20L,0x6020L},{0L,0xFDE4L,1L,(-1L),0x7DAEL,0xB5CBL,0x7DAEL,(-1L)},{0x101AL,1L,0x101AL,0x2414L,(-1L),0xB5CBL,1L,1L},{1L,0xFDE4L,0L,0L,0xFDE4L,1L,(-1L),0x7DAEL},{1L,0xEF20L,0x6020L,0xFDE4L,(-1L),0xFDE4L,0x6020L,0xEF20L},{0x101AL,0x6020L,0xB5CBL,0xFDE4L,0x7DAEL,0x2414L,0x2414L,0x7DAEL}};
    unsigned char l_703 = 0UL;
    unsigned l_765[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    int i, j;
    if ((safe_lshift_func_uint8_t_u_u(func_44(func_24(g_154[1][3][1]), l_285, func_24((l_286 | (((~p_34) & (0x89E9D286L ^ (safe_lshift_func_int8_t_s_s(p_35, 2)))) | g_84))), g_84, g_171[0][1][3]), 4)))
    {
        char l_290 = (-1L);
        int l_425 = 0x9F0B17DDL;
        short l_525 = (-1L);
        unsigned l_555 = 1UL;
        int l_590 = (-2L);
        int l_645[7] = {5L,0xF5166529L,5L,5L,0xF5166529L,5L,5L};
        int i;
        for (p_35 = 1; (p_35 >= 0); p_35 -= 1)
        {
            int l_289 = (-1L);
            char l_309[8][8] = {{(-6L),(-10L),(-5L),4L,0x33L,0x33L,(-5L),0x08L},{(-6L),(-6L),(-6L),0x65L,0xD9L,0x33L,0x08L,(-1L)},{0x33L,0L,(-6L),0xD9L,(-5L),(-1L),4L,(-1L)},{0L,0x65L,0x94L,0x65L,0L,0L,(-6L),0x08L},{0x94L,0x11L,0xE1L,(-5L),0x12L,0xD9L,(-5L),0x65L},{(-5L),(-6L),0xE1L,0xF9L,0xF9L,0xE1L,(-6L),(-5L)},{0x12L,0x33L,0x94L,0x08L,(-6L),0x11L,4L,0xE1L},{0xD9L,(-5L),(-6L),0L,0x08L,0x11L,0x08L,0L}};
            int l_347 = (-2L);
            unsigned l_371 = 0xCC4634F6L;
            const int l_603[8] = {9L,9L,9L,9L,9L,9L,9L,9L};
            char l_634 = 4L;
            int i, j;
            for (l_286 = 0; (l_286 <= 1); l_286 += 1)
            {
                int l_295 = 0x94D3F08EL;
                l_289 = 0L;
                l_289 = l_290;
                g_171[1][3][6] = (safe_add_func_int8_t_s_s((+(safe_add_func_int32_t_s_s(l_295, g_154[1][3][1]))), p_34));
                for (l_295 = 1; (l_295 >= 0); l_295 -= 1)
                {
                    int l_296[6][7][6] = {{{(-6L),8L,0x70ACDFBEL,1L,1L,0x70ACDFBEL},{0x0A85100DL,0x0A85100DL,0xB29B314FL,1L,8L,3L},{(-6L),0xB29B314FL,0xC0F58D22L,3L,0xC0F58D22L,0xB29B314FL},{1L,(-6L),0xC0F58D22L,0L,0x0A85100DL,3L},{0x70ACDFBEL,0L,0xB29B314FL,0xB29B314FL,0L,0xB29B314FL},{(-6L),3L,0xB29B314FL,0x70ACDFBEL,0xDB38FF28L,0L},{0L,8L,0x0A85100DL,8L,0L,3L}},{{0L,(-6L),8L,0x70ACDFBEL,1L,1L},{(-6L),0xDB38FF28L,0xDB38FF28L,(-6L),0x0A85100DL,1L},{0xB29B314FL,1L,8L,3L,0x70ACDFBEL,3L},{0x0A85100DL,0xC0F58D22L,0x0A85100DL,1L,0x70ACDFBEL,0L},{8L,1L,0xB29B314FL,0x0A85100DL,0x0A85100DL,0xB29B314FL},{0xDB38FF28L,0xDB38FF28L,(-6L),0x0A85100DL,1L,1L},{8L,(-6L),0L,1L,0L,(-6L)}},{{0x0A85100DL,8L,0L,3L,0xDB38FF28L,1L},{0xB29B314FL,3L,(-6L),(-6L),3L,0xB29B314FL},{(-6L),3L,0xB29B314FL,0x70ACDFBEL,0xDB38FF28L,0L},{0L,8L,0x0A85100DL,8L,0L,3L},{0L,(-6L),8L,0x70ACDFBEL,1L,1L},{(-6L),0xDB38FF28L,0xDB38FF28L,(-6L),0x0A85100DL,1L},{0xB29B314FL,1L,8L,3L,8L,0xB29B314FL}},{{0L,1L,0L,(-6L),8L,0x70ACDFBEL},{0xDB38FF28L,0xC0F58D22L,1L,0L,0L,1L},{3L,3L,0x0A85100DL,0L,0xC0F58D22L,(-6L)},{0xDB38FF28L,0x0A85100DL,0x70ACDFBEL,(-6L),0x70ACDFBEL,0x0A85100DL},{0L,0xDB38FF28L,0x70ACDFBEL,0xB29B314FL,3L,(-6L)},{1L,0xB29B314FL,0x0A85100DL,0x0A85100DL,0xB29B314FL,1L},{0x0A85100DL,0xB29B314FL,1L,8L,3L,0x70ACDFBEL}},{{0x70ACDFBEL,0xDB38FF28L,0L,0xDB38FF28L,0x70ACDFBEL,0xB29B314FL},{0x70ACDFBEL,0x0A85100DL,0xDB38FF28L,8L,0xC0F58D22L,0xC0F58D22L},{0x0A85100DL,3L,3L,0x0A85100DL,0L,0xC0F58D22L},{1L,0xC0F58D22L,0xDB38FF28L,0xB29B314FL,8L,0xB29B314FL},{0L,1L,0L,(-6L),8L,0x70ACDFBEL},{0xDB38FF28L,0xC0F58D22L,1L,0L,0L,1L},{3L,3L,0x0A85100DL,0L,0xC0F58D22L,(-6L)}},{{0xDB38FF28L,0x0A85100DL,0x70ACDFBEL,(-6L),0x70ACDFBEL,0x0A85100DL},{0L,0xDB38FF28L,0x70ACDFBEL,0xB29B314FL,1L,8L},{0x0A85100DL,(-6L),0xDB38FF28L,0xDB38FF28L,(-6L),0x0A85100DL},{0xDB38FF28L,(-6L),0x0A85100DL,1L,1L,0xB29B314FL},{0xB29B314FL,0xC0F58D22L,3L,0xC0F58D22L,0xB29B314FL,(-6L)},{0xB29B314FL,0xDB38FF28L,0xC0F58D22L,1L,0L,0L},{0xDB38FF28L,1L,1L,0xDB38FF28L,3L,0L}}};
                    int l_344 = 0x66312792L;
                    int i, j, k;
                    l_296[1][0][3] = (+0x32A4950DL);
                    if ((g_171[l_295][(l_295 + 1)][(l_295 + 3)] >= ((safe_rshift_func_uint8_t_u_s(g_141, 5)) ^ (safe_lshift_func_uint16_t_u_u(func_72(func_78(((g_171[0][1][3] ^ (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((func_78((safe_mod_func_int32_t_s_s(func_24(g_83[3][1][1]), g_122)), g_154[1][5][2], ((func_24(g_10) || l_296[1][0][3]) | l_309[1][7])) || p_34), p_34)), l_295)), 4294967295UL))) < 0x759CL), l_290, g_122), g_122, g_141), g_122)))))
                    {
                        g_171[0][1][3] = ((0x6972L && (func_78(((safe_lshift_func_int8_t_s_u(0x3AL, 5)) == 1L), g_154[1][3][1], g_83[2][0][0]) ^ (safe_add_func_int8_t_s_s((func_24((safe_add_func_int32_t_s_s((l_286 | (safe_sub_func_uint16_t_u_u((((0x19B2L > func_24(func_24((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(g_141, 0x906AL)), p_35)), 1)), p_35))))) < l_290) <= 0x91L), g_122))), p_34))) && l_286), (-5L))))) | g_171[0][1][3]);
                    }
                    else
                    {
                        int l_328 = (-1L);
                        l_328 = (g_84 & (safe_rshift_func_int8_t_s_s(g_83[0][1][1], p_35)));
                        g_171[0][1][3] = p_34;
                        if (l_309[2][6])
                            break;
                    }
                    for (p_34 = 0; (p_34 <= 1); p_34 += 1)
                    {
                        g_171[0][1][3] = (safe_add_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(0x842BL, ((((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((l_339 != (((+0x88L) | (0x4142L || ((safe_mod_func_int16_t_s_s(func_64((safe_rshift_func_int16_t_s_u(l_295, 10))), 1UL)) & (p_34 | g_10)))) != (-1L))), g_10)) && g_154[1][3][1]), 4)) && (-4L)) ^ l_339) < 0L))), 7)) <= g_10) && g_83[1][0][1]), p_34));
                    }
                    g_171[1][0][3] = func_72(func_72(l_344, (func_44((safe_rshift_func_uint16_t_u_s(func_72((~l_290), p_34, (!(((p_34 != (0xA5L == l_347)) >= ((safe_sub_func_uint16_t_u_u((l_289 & g_84), p_34)) < g_171[0][1][3])) == l_295))), 0)), p_34, p_35, g_154[1][3][1], l_290) <= g_10), g_10), l_295, l_285);
                }
            }
            if (p_34)
            {
                unsigned char l_363[2];
                unsigned l_364[5][6][2] = {{{0x76B11A29L,0x8E2FBED1L},{0x8F93DBE3L,0x8E2FBED1L},{0x76B11A29L,0x8F93DBE3L},{4294967293UL,4294967293UL},{4294967293UL,0x8F93DBE3L},{0x76B11A29L,0x8E2FBED1L}},{{0x8F93DBE3L,0x8E2FBED1L},{0x76B11A29L,0x8F93DBE3L},{4294967293UL,4294967293UL},{4294967293UL,0x8F93DBE3L},{0x76B11A29L,0x8E2FBED1L},{0x8F93DBE3L,0x8E2FBED1L}},{{0x76B11A29L,0x8F93DBE3L},{4294967293UL,4294967293UL},{4294967293UL,0x8F93DBE3L},{0x76B11A29L,0x8E2FBED1L},{0x8F93DBE3L,0x8E2FBED1L},{0x76B11A29L,0x8F93DBE3L}},{{4294967293UL,4294967293UL},{4294967293UL,0x8F93DBE3L},{0x76B11A29L,0x8E2FBED1L},{0x8F93DBE3L,0x8E2FBED1L},{0x76B11A29L,0x8F93DBE3L},{4294967293UL,4294967293UL}},{{4294967293UL,0x8F93DBE3L},{0x76B11A29L,0x8E2FBED1L},{0x8F93DBE3L,0x8E2FBED1L},{0x76B11A29L,0x8F93DBE3L},{4294967293UL,4294967293UL},{4294967293UL,0x8F93DBE3L}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_363[i] = 255UL;
                for (p_34 = 0; (p_34 <= 1); p_34 += 1)
                {
                    int l_362 = (-1L);
                    for (l_290 = 1; (l_290 >= 0); l_290 -= 1)
                    {
                        if (l_290)
                            break;
                        return l_286;
                    }
                    for (g_141 = 0; (g_141 <= 1); g_141 += 1)
                    {
                        l_285 = func_24((0x31L > (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((p_35 > (-1L)), (p_34 && (g_154[1][1][1] <= p_34)))), func_78(l_289, ((safe_add_func_uint8_t_u_u(func_72((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(((!0x38CD7117L) || (((((safe_mod_func_int8_t_s_s((p_34 < g_10), p_34)) && g_141) <= g_83[4][1][1]) || g_83[4][1][1]) && p_35)), l_362)) ^ l_285) == l_289), l_362)), l_362, g_10), p_34)) & g_122), l_363[0])))));
                        return l_364[4][4][1];
                    }
                    for (l_286 = 0; (l_286 <= 1); l_286 += 1)
                    {
                        int l_374 = (-1L);
                        g_171[0][1][3] = g_10;
                        l_371 = (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(6L, (safe_rshift_func_int16_t_s_s(g_84, 2)))), l_364[2][3][1]));
                        l_374 = (safe_lshift_func_int16_t_s_u(p_34, 7));
                    }
                }
                for (g_84 = 1; (g_84 >= 0); g_84 -= 1)
                {
                    int l_389 = 0xE99E25D6L;
                    int l_433 = 0x67ACE969L;
                    l_289 = (((safe_mod_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(p_35, p_35)) >= func_24(((safe_sub_func_uint32_t_u_u(((((g_84 || (safe_add_func_uint16_t_u_u(0x2D0EL, p_34))) | g_171[1][0][5]) <= g_83[4][1][0]) > p_35), ((safe_mod_func_int8_t_s_s(l_364[4][3][0], l_347)) != g_141))) == l_364[4][4][1]))) < l_290), p_34)) && 1L) <= 0x4B25L);
                    for (l_347 = 1; (l_347 >= 0); l_347 -= 1)
                    {
                        int l_393 = 6L;
                        if (l_286)
                            break;
                        g_171[0][1][3] = (p_34 < ((safe_add_func_int16_t_s_s(func_24(((g_83[2][0][0] < (-1L)) & func_24(g_10))), (safe_rshift_func_int8_t_s_s(l_389, 2)))) | ((safe_unary_minus_func_int16_t_s((-7L))) == (safe_add_func_uint32_t_u_u(l_393, 0xCB7DFA9EL)))));
                    }
                    for (l_289 = 0; (l_289 <= 1); l_289 += 1)
                    {
                        unsigned l_398 = 8UL;
                        unsigned l_405 = 0x76F72BF0L;
                        g_171[0][1][7] = ((((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(((func_24(l_290) && 255UL) && l_398), g_154[1][3][1])) > g_141), (safe_add_func_int32_t_s_s(l_290, (safe_rshift_func_int8_t_s_u((((65531UL <= (safe_sub_func_uint8_t_u_u(((!253UL) < 0xB8L), 0xE7L))) ^ 1UL) > 0xD1L), 2)))))) < l_347) >= g_171[0][1][3]) && l_290);
                        g_171[0][1][0] = l_405;
                    }
                    for (l_289 = 1; (l_289 >= 0); l_289 -= 1)
                    {
                        int l_406 = 0xF3DA22FCL;
                        if (g_171[0][1][5])
                            break;
                        g_171[0][2][4] = ((p_35 | l_406) ^ (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_10, func_24(p_35))), 15)) > (safe_lshift_func_int8_t_s_s(g_83[0][1][1], p_35))), l_290)));
                        l_425 = (((l_290 || ((safe_sub_func_int32_t_s_s((func_24(((safe_add_func_int32_t_s_s(l_290, 0x62D3EC66L)) & g_10)) != (g_154[1][5][1] >= (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(func_24(g_10), (safe_lshift_func_int16_t_s_u(p_34, p_35)))), l_364[4][4][1])))), p_35)) & 1L)) <= g_83[4][1][0]) < (-7L));
                    }
                    for (l_286 = 0; (l_286 <= 1); l_286 += 1)
                    {
                        char l_426 = 0x5DL;
                        l_433 = (+((l_426 && func_24(g_83[4][1][0])) & ((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((l_364[4][4][1] ^ 1UL), l_347)), (safe_lshift_func_uint16_t_u_u(p_35, 15)))) | func_24(g_141))));
                        l_289 = ((safe_mod_func_uint16_t_u_u(func_24(p_35), (safe_add_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_141, (0x3F70L > ((safe_rshift_func_uint16_t_u_u((func_24(g_171[0][1][3]) < ((p_34 < 0xCA00C95AL) >= 7L)), 13)) <= l_425)))), p_35)), l_286)) | p_35) ^ l_347), 0L)))) < 9L);
                        g_171[1][0][3] = ((((+(((safe_rshift_func_int16_t_s_s(g_10, (safe_rshift_func_int8_t_s_u(func_24(l_425), func_24(p_35))))) != (safe_add_func_uint16_t_u_u((((p_35 || (func_24(((0xE0CCL && ((((((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((p_35 && l_426) || g_171[1][2][0]), 0)), g_84)) != 2L) >= l_347) <= g_141) | l_371) >= 0x25F4L)) & l_433)) || l_364[4][4][1])) <= p_34) < g_84), 8L))) != p_35)) < 0xB4L) ^ g_171[1][2][4]) <= p_35);
                    }
                }
            }
            else
            {
                unsigned char l_462 = 246UL;
                g_171[1][3][3] = ((func_64(((g_10 ^ g_83[4][1][0]) ^ (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(g_83[5][0][1], ((((0x0147E3C7L && ((safe_sub_func_int16_t_s_s(((p_35 < l_309[1][2]) & 1L), ((((l_462 == 248UL) > 0x9CCDL) >= 0xE5L) < 0x27L))) <= l_425)) >= 0L) & (-7L)) != 0x2780EB62L))), 1)))) < 0xE991L) ^ g_10);
                for (l_425 = 0; (l_425 <= 1); l_425 += 1)
                {
                    int l_478[7][9][4] = {{{0x3B4E6785L,6L,1L,5L},{(-4L),0xA318637CL,0xAAC522FAL,(-4L)},{(-6L),5L,1L,(-6L)},{0xD7588A92L,0L,(-1L),0x50E99EE5L},{0L,0xA318637CL,0xA318637CL,0L},{1L,(-4L),0x7807A14AL,0xD8002CDCL},{4L,0x9B6654BDL,(-1L),0xD7588A92L},{0xC095C3B0L,0x750183FAL,(-1L),0xD7588A92L},{(-6L),0x9B6654BDL,(-6L),0xD8002CDCL}},{{0x50E99EE5L,(-4L),(-1L),0L},{(-4L),0xA318637CL,0xD8002CDCL,0x50E99EE5L},{(-6L),0L,(-6L),(-6L)},{0x9B6654BDL,5L,(-1L),(-4L)},{5L,0xA318637CL,0x750183FAL,5L},{1L,0x50E99EE5L,0x750183FAL,0xD8002CDCL},{5L,0xD7588A92L,(-1L),0x9B6654BDL},{0x9B6654BDL,0x750183FAL,(-6L),0xC095C3B0L},{(-6L),0xC095C3B0L,0xD8002CDCL,0xD8002CDCL}},{{(-4L),(-4L),(-1L),4L},{0x50E99EE5L,0xA318637CL,(-6L),(-4L)},{(-6L),4L,(-1L),(-6L)},{0xC095C3B0L,4L,(-1L),(-4L)},{4L,0xA318637CL,0x7807A14AL,4L},{1L,(-4L),0xA318637CL,0xD8002CDCL},{0L,0xC095C3B0L,0x3B4E6785L,5L},{0L,(-6L),(-6L),4L},{0xD8002CDCL,0L,0x750183FAL,0x7807A14AL}},{{0xD7588A92L,0x9B6654BDL,6L,(-4L)},{0xD7588A92L,(-1L),0x750183FAL,0xC095C3B0L},{0xD8002CDCL,(-4L),(-6L),0xA318637CL},{0L,0x50E99EE5L,0x3B4E6785L,0x9B6654BDL},{0x50E99EE5L,(-1L),(-1L),0x50E99EE5L},{(-6L),0xD7588A92L,1L,0x7807A14AL},{(-4L),4L,0x3B4E6785L,0L},{5L,(-6L),0xAAC522FAL,0L},{0xD8002CDCL,4L,0xA318637CL,0x7807A14AL}},{{0x9B6654BDL,0xD7588A92L,6L,0x50E99EE5L},{0xC095C3B0L,(-1L),0x7807A14AL,0x9B6654BDL},{0xD8002CDCL,0x50E99EE5L,0xD8002CDCL,0xA318637CL},{4L,(-4L),0x3B4E6785L,0xC095C3B0L},{(-4L),(-1L),(-6L),(-4L)},{(-6L),0x9B6654BDL,(-6L),0x7807A14AL},{(-4L),0L,0x3B4E6785L,4L},{4L,(-6L),0xD8002CDCL,5L},{0xD8002CDCL,5L,0x7807A14AL,0x7807A14AL}},{{0xC095C3B0L,0xC095C3B0L,6L,(-4L)},{0x9B6654BDL,(-1L),0xA318637CL,0xD7588A92L},{0xD8002CDCL,(-4L),0xAAC522FAL,0xA318637CL},{5L,(-4L),(-4L),(-6L)},{0xA318637CL,0xD9433F04L,(-1L),0xA318637CL},{6L,(-1L),0xD9433F04L,0x044B4ABCL},{0x7807A14AL,0xAAC522FAL,(-4L),0xAAC522FAL},{0xD8002CDCL,(-1L),6L,(-6L)},{0x3B4E6785L,0xD8002CDCL,(-7L),0x044B4ABCL}},{{(-6L),1L,0x50E99EE5L,0x750183FAL},{(-6L),0xD9433F04L,(-7L),(-1L)},{0x3B4E6785L,0x750183FAL,6L,0xA7236598L},{0xD8002CDCL,0x7807A14AL,(-4L),1L},{0x7807A14AL,0xD9433F04L,0xD9433F04L,0x7807A14AL},{6L,(-6L),(-1L),0x044B4ABCL},{0xA318637CL,(-6L),(-4L),0xD8002CDCL},{0xAAC522FAL,(-1L),1L,0xD8002CDCL},{0x3B4E6785L,(-6L),0xA7236598L,0x044B4ABCL}}};
                    int i, j, k;
                    l_285 = p_34;
                    l_285 = (p_34 | (safe_lshift_func_int16_t_s_s(p_34, p_35)));
                    l_478[5][5][0] = (safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u((5UL <= g_10), (l_371 && (p_35 < (safe_sub_func_uint16_t_u_u(func_64((safe_sub_func_int32_t_s_s(((((g_84 && l_309[2][5]) && p_34) != (((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s(5L)), (safe_unary_minus_func_int32_t_s((-8L))))) && p_35) & 0x9E36L)) == p_34), 4294967295UL))), p_35)))))) && g_154[1][3][1]), p_35)) != 2L)));
                    for (l_339 = 0; (l_339 <= 1); l_339 += 1)
                    {
                        int l_497[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                        int i;
                        g_171[0][1][3] = ((((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(p_35, (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_154[1][3][1], 0xA38B84AEL)), (safe_lshift_func_int16_t_s_u(((p_35 != ((safe_lshift_func_uint16_t_u_u((4294967295UL > func_72(g_171[0][1][3], (safe_rshift_func_int16_t_s_u(p_34, 6)), ((func_78(p_34, ((safe_rshift_func_int16_t_s_s(1L, 5)) && l_339), l_497[2]) & g_171[0][1][3]) | 1L))), 9)) | p_35)) != l_478[5][5][0]), 9)))))) != 0xCFL), 0xC6L)), 0x5BC8L)) && l_462) | p_34) ^ g_141);
                    }
                }
            }
            if ((safe_rshift_func_int8_t_s_u(l_347, func_44(p_34, (g_83[2][1][1] >= ((0x1ACFF5C6L == ((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(g_504, (safe_rshift_func_uint8_t_u_u((((func_24(l_289) == (p_34 < ((p_34 | l_309[1][7]) & 0UL))) != g_141) > 1UL), p_35)))) != 0UL), 0x6E8E74EFL)) && g_84)) <= l_347)), g_84, g_83[1][0][1], l_425))))
            {
                int l_518 = 0L;
                if ((safe_sub_func_int8_t_s_s(func_24(p_34), 0x5DL)))
                {
                    l_289 = ((g_84 || (((safe_lshift_func_uint8_t_u_u((1L > ((safe_unary_minus_func_int32_t_s(((((safe_sub_func_uint16_t_u_u(l_289, ((((func_72(g_154[0][4][1], (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((0xCEF2L ^ (g_84 == (l_518 > func_24(((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((((safe_sub_func_int8_t_s_s(func_24(g_154[0][3][1]), 0xF5L)) < p_34) == l_525) | p_34), 7)), p_34)) >= l_518))))), 0x6D82L)), 0x4DL)), p_34) > g_122) | g_154[1][3][1]) < 8L) < p_35))) & 0x7E14L) & p_35) || g_10))) != l_371)), p_34)) > g_171[0][1][3]) == g_10)) != p_34);
                    l_289 = p_35;
                }
                else
                {
                    for (l_347 = 0; (l_347 <= 1); l_347 += 1)
                    {
                        return l_286;
                    }
                    for (g_84 = 0; (g_84 <= 1); g_84 += 1)
                    {
                        g_171[0][0][6] = p_34;
                        g_171[1][3][0] = ((safe_sub_func_uint16_t_u_u((p_34 | (safe_rshift_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_s(0UL, (((safe_lshift_func_uint8_t_u_u(func_24(l_518), 6)) | g_83[4][1][0]) >= g_154[1][3][1]))) || (func_24(g_154[1][3][1]) != p_34)) && l_290) >= 0x9E50L) != p_34), g_10))), g_10)) < g_84);
                    }
                    g_171[0][1][3] = (func_78((safe_lshift_func_int8_t_s_u(((g_122 & (safe_lshift_func_uint16_t_u_s(((g_171[1][3][1] != g_84) ^ (p_35 || 0x0FL)), 3))) != (((p_34 & ((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_371, g_154[1][1][1])), 14)) | l_518)) || l_290) || p_34)), g_83[4][1][0])), g_171[1][1][1], g_171[1][2][3]) == 0x6071C26FL);
                    g_542 = 0x0EE48A1EL;
                }
                l_518 = (safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(l_289, (g_171[0][1][3] < l_309[1][7]))) & ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(g_10, l_286)), 8)) < (l_290 <= (safe_add_func_uint16_t_u_u((0x8CC4L && (safe_mod_func_uint16_t_u_u(func_24(l_555), p_35))), 0x44E1L))))), g_83[2][0][0]));
                l_285 = l_518;
                if (func_64((safe_add_func_int32_t_s_s(((-7L) == ((safe_lshift_func_int8_t_s_s((l_525 == (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(g_154[0][0][0])), func_72(l_518, (safe_rshift_func_uint16_t_u_s(g_154[1][3][1], ((p_35 ^ (((func_78((l_309[5][1] & (65526UL <= 0x30D6L)), l_371, g_171[0][0][5]) & p_35) >= p_35) == g_122)) != 1L))), p_35)))), p_34)) != g_542)), g_171[0][1][3]))))
                {
                    return g_171[0][1][3];
                }
                else
                {
                    unsigned l_567[7][3][4] = {{{1UL,1UL,0x44288043L,4294967292UL},{0UL,4294967295UL,4294967295UL,4UL},{4294967295UL,4UL,0xA658A7EAL,4294967295UL}},{{1UL,4UL,6UL,4UL},{4UL,4294967295UL,4UL,4294967292UL},{0x315F5FEFL,1UL,0xA658A7EAL,4UL}},{{0UL,0x6A81C7F7L,0UL,4UL},{0x6A81C7F7L,4UL,4UL,0x6A81C7F7L},{4294967295UL,4294967292UL,0x315F5FEFL,4UL}},{{4294967292UL,4UL,0x30FCB617L,1UL},{0UL,4294967295UL,4UL,1UL},{4294967295UL,4UL,4294967295UL,4UL}},{{0x6A81C7F7L,4294967292UL,6UL,0x6A81C7F7L},{0UL,4UL,0x315F5FEFL,4294967292UL},{4UL,4UL,0x315F5FEFL,0x315F5FEFL}},{{0UL,0UL,6UL,1UL},{0x6A81C7F7L,0xA658A7EAL,4294967295UL,4294967292UL},{4294967295UL,4294967292UL,4UL,4294967295UL}},{{0UL,4294967292UL,0x30FCB617L,4294967292UL},{4294967292UL,0xA658A7EAL,0x315F5FEFL,1UL},{4294967295UL,0UL,4UL,0x315F5FEFL}}};
                    int l_577 = 0x2FE57461L;
                    int i, j, k;
                    if (g_154[1][3][1])
                        break;
                    l_577 = (safe_sub_func_uint8_t_u_u(func_72((((func_72(l_567[2][2][0], ((-1L) > p_34), (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((g_83[4][1][0] <= g_141) <= (safe_add_func_uint32_t_u_u((func_24((p_35 > (((248UL ^ ((safe_sub_func_uint16_t_u_u(l_339, (p_35 == l_285))) >= p_35)) <= g_154[1][3][1]) <= l_290))) < g_122), l_285))), 65531UL)), 14))) & l_576) || p_35) != g_154[1][3][1]), g_504, p_34), p_34));
                    if (l_285)
                        break;
                }
            }
            else
            {
                unsigned short l_602[6] = {0UL,0UL,8UL,0UL,0UL,8UL};
                int i;
                g_171[1][2][2] = (l_555 & p_35);
                if (l_525)
                    continue;
                for (l_339 = 0; (l_339 <= 1); l_339 += 1)
                {
                    short l_585 = (-1L);
                    l_590 = (safe_mod_func_int16_t_s_s(l_347, func_78(l_285, ((func_44((safe_mod_func_uint8_t_u_u(func_24(((func_44(((safe_unary_minus_func_int32_t_s((p_35 != ((safe_mod_func_uint16_t_u_u((((l_585 != (safe_rshift_func_int16_t_s_s(1L, 14))) < p_35) <= (safe_sub_func_int32_t_s_s(0xB968F138L, 0x728ED00CL))), 0xF888L)) == p_35)))) && 0x49D877F1L), p_34, g_171[1][1][3], g_504, g_83[4][1][0]) ^ 0x1AL) < p_35)), 0x6DL)), g_504, g_542, g_10, l_290) >= p_34) ^ g_10), g_542)));
                    for (l_289 = 0; (l_289 <= 1); l_289 += 1)
                    {
                        const short l_601 = (-2L);
                        g_171[0][1][3] = (g_542 != func_78(func_78(((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((p_34 & (l_339 || (func_72((9L || (((safe_sub_func_uint32_t_u_u(g_84, 4294967295UL)) == l_585) | l_601)), p_35, l_585) < 0x9EL))), p_34)), g_10)), l_602[1])), 6)) | 0x2065L), l_603[4], g_171[1][3][5]), p_35, p_35));
                    }
                }
            }
            for (l_525 = 0; (l_525 <= 1); l_525 += 1)
            {
                int l_632 = 0x777CFBB9L;
                unsigned l_633 = 0x8820BE52L;
                int l_653[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_653[i] = 0L;
                if (g_154[0][4][2])
                {
                    int l_617[8] = {0L,0L,(-5L),0L,0L,(-5L),0L,0L};
                    int i;
                    for (g_542 = 0; (g_542 <= 1); g_542 += 1)
                    {
                        int l_604 = (-1L);
                        l_604 = l_590;
                        l_289 = (safe_rshift_func_uint16_t_u_s(0xD565L, 14));
                    }
                    if (((safe_add_func_int16_t_s_s((g_122 == (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((func_72((func_78(l_590, (((safe_rshift_func_int8_t_s_s((func_78(g_154[0][1][0], g_84, g_171[0][1][3]) | ((g_10 >= (((safe_mod_func_uint8_t_u_u(p_34, (-1L))) < g_542) && 0xAA956C41L)) | g_10)), 3)) == p_35) && p_34), l_603[4]) <= p_35), l_617[4], g_154[1][3][1]) <= g_618[4]), 0)), 0x907DFEA5L))), (-6L))) ^ g_141))
                    {
                        l_617[2] = (!p_34);
                    }
                    else
                    {
                        int l_619 = (-1L);
                        short l_640[10][9][2] = {{{(-8L),0x08A9L},{0x08A9L,(-8L)},{(-1L),4L},{(-1L),(-8L)},{0x08A9L,0x08A9L},{(-8L),(-1L)},{4L,(-1L)},{(-8L),0x08A9L},{0x08A9L,(-8L)}},{{(-1L),4L},{(-1L),(-8L)},{0x08A9L,0x08A9L},{(-8L),4L},{0L,4L},{0x77C3L,(-1L)},{(-1L),0x77C3L},{4L,0L},{4L,0x77C3L}},{{(-1L),(-1L)},{0x77C3L,4L},{0L,4L},{0x77C3L,(-1L)},{(-1L),0x77C3L},{4L,0L},{4L,0x77C3L},{(-1L),(-1L)},{0x77C3L,4L}},{{0L,4L},{0x77C3L,(-1L)},{(-1L),0x77C3L},{4L,0L},{4L,0x77C3L},{(-1L),(-1L)},{0x77C3L,4L},{0L,4L},{0x77C3L,(-1L)}},{{(-1L),0x77C3L},{4L,0L},{4L,0x77C3L},{(-1L),(-1L)},{0x77C3L,4L},{0L,4L},{0x77C3L,(-1L)},{(-1L),0x77C3L},{4L,0L}},{{4L,0x77C3L},{(-1L),(-1L)},{0x77C3L,4L},{0L,4L},{0x77C3L,(-1L)},{(-1L),0x77C3L},{4L,0L},{4L,0x77C3L},{(-1L),(-1L)}},{{0x77C3L,4L},{0L,4L},{0x77C3L,(-1L)},{(-1L),0x77C3L},{4L,0L},{4L,0x77C3L},{(-1L),0L},{4L,(-8L)},{0x77C3L,(-8L)}},{{4L,0L},{0L,4L},{(-8L),0x77C3L},{(-8L),4L},{0L,0L},{4L,(-8L)},{0x77C3L,(-8L)},{4L,0L},{0L,4L}},{{(-8L),0x77C3L},{(-8L),4L},{0L,0L},{4L,(-8L)},{0x77C3L,(-8L)},{4L,0L},{0L,4L},{(-8L),0x77C3L},{(-8L),4L}},{{0L,0L},{4L,(-8L)},{0x77C3L,(-8L)},{4L,0L},{0L,4L},{(-8L),0x77C3L},{(-8L),4L},{0L,0L},{4L,(-8L)}}};
                        int i, j, k;
                        g_171[0][1][3] = (((l_619 < func_78((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((((safe_mod_func_uint32_t_u_u((((l_290 <= p_35) <= (safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((((g_171[0][1][3] > ((func_24(l_632) < l_633) != l_634)) ^ (((0x07DCL < l_290) <= g_171[0][1][3]) || g_504)) ^ g_122), 7UL)) | l_285), l_617[4])), (-7L)))) >= l_619), p_34)) && l_603[4]) && l_290) & g_84) == p_35), g_83[2][0][0])), 0xCD8FL)), g_618[5], l_285)) > g_171[0][1][3]) <= (-2L));
                        if (g_504)
                            break;
                        g_171[0][1][2] = (g_83[4][1][0] >= (((safe_lshift_func_int16_t_s_s((p_35 > (l_576 || ((g_83[4][1][0] >= 0x6EL) <= func_24(g_154[1][3][1])))), (safe_unary_minus_func_uint8_t_u((0xD6L && (((safe_mod_func_int16_t_s_s(g_141, p_34)) ^ 0xDDF9F801L) >= l_285)))))) >= g_83[2][1][0]) == l_640[2][3][1]));
                    }
                    l_425 = func_44(func_44(g_83[4][1][0], g_154[1][3][1], p_34, g_618[4], (g_618[5] < l_617[7])), l_632, (safe_rshift_func_int8_t_s_u((0x1428L && p_34), l_633)), g_542, l_617[4]);
                }
                else
                {
                    l_285 = p_35;
                    l_289 = g_10;
                }
                for (l_576 = 0; (l_576 <= 1); l_576 += 1)
                {
                    const unsigned short l_649 = 4UL;
                    for (l_371 = 0; (l_371 <= 1); l_371 += 1)
                    {
                        unsigned l_648 = 0xBEBB0D3AL;
                        int l_650 = 0x3AC6E935L;
                        l_285 = (-1L);
                        l_650 = (safe_lshift_func_uint16_t_u_u(((0UL <= l_632) ^ ((((l_645[2] ^ l_309[1][7]) && ((((p_35 & p_35) <= ((safe_rshift_func_int8_t_s_s((func_78(p_35, l_371, l_309[0][0]) < l_590), l_648)) == g_171[0][1][3])) ^ g_504) < l_649)) > p_35) > 249UL)), 15));
                        if (p_35)
                            continue;
                    }
                    l_289 = func_44((!l_632), l_555, l_632, l_632, (safe_lshift_func_uint16_t_u_u(p_35, 9)));
                    for (l_425 = 0; (l_425 <= 1); l_425 += 1)
                    {
                        g_171[0][1][3] = g_542;
                    }
                    return l_653[1];
                }
                return g_542;
            }
        }
        for (l_525 = 0; (l_525 <= 1); l_525 += 1)
        {
            int l_655 = 0L;
            l_285 = (-1L);
            for (g_504 = 0; (g_504 <= 1); g_504 += 1)
            {
                int l_654 = 0xA7884DC0L;
                unsigned l_657[1][7][3] = {{{0x9A929906L,0UL,0x9A929906L},{4294967289UL,4294967289UL,4294967289UL},{0x9A929906L,0UL,0x9A929906L},{4294967289UL,4294967289UL,4294967289UL},{0x9A929906L,0UL,0x9A929906L},{4294967289UL,4294967289UL,4294967289UL},{0x9A929906L,0UL,0x9A929906L}}};
                int i, j, k;
                l_654 = p_35;
                l_425 = ((l_655 != (safe_unary_minus_func_int16_t_s(1L))) & 0xE4L);
                for (l_286 = 0; (l_286 <= 1); l_286 += 1)
                {
                    int i, j, k;
                    g_171[l_525][g_504][(g_504 + 1)] = g_83[(l_525 + 4)][l_525][g_504];
                }
                for (l_555 = 0; (l_555 <= 1); l_555 += 1)
                {
                    int i, j, k;
                    g_171[l_555][g_504][(l_525 + 3)] = l_657[0][1][1];
                    for (l_286 = 0; (l_286 != 52); ++l_286)
                    {
                        unsigned char l_664 = 255UL;
                        g_171[1][2][6] = ((safe_add_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((g_154[1][3][0] < (65528UL | l_664)), (-1L))) ^ ((g_154[1][3][1] | p_35) <= func_24((p_35 < p_34)))), l_665)) && 8L);
                        return l_655;
                    }
                }
            }
        }
    }
    else
    {
        short l_683 = 0x092BL;
        int l_723 = 0x2188AB48L;
        char l_754 = 0x96L;
        for (g_122 = (-25); (g_122 < 30); ++g_122)
        {
            unsigned l_672 = 1UL;
            g_171[0][3][4] = g_154[1][3][1];
            if (g_618[4])
                break;
            l_285 = (safe_lshift_func_int16_t_s_u(((g_618[4] >= g_618[4]) == 0x6C93L), (safe_lshift_func_uint8_t_u_u(l_672, g_171[0][2][3]))));
        }
        for (l_285 = 9; (l_285 == 23); l_285 = safe_add_func_int8_t_s_s(l_285, 4))
        {
            char l_690[7];
            int l_696 = 0xC340BD43L;
            int i;
            for (i = 0; i < 7; i++)
                l_690[i] = 4L;
            for (l_576 = 0; (l_576 <= 13); ++l_576)
            {
                unsigned l_682 = 1UL;
                unsigned char l_699 = 0xB8L;
                if (func_44(func_24(((((((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((safe_mod_func_int16_t_s_s(g_618[6], (func_44(g_10, p_35, l_576, func_72(g_542, ((!p_35) || p_35), (((65535UL ^ (0L != l_576)) || 0UL) >= 0xE546L)), l_682) && 4UL))))), 1)) | p_35) >= g_542) < 0x9B6BL) && l_683) | 0UL)), p_34, l_576, p_35, p_34))
                {
                    int l_697 = (-1L);
                    int l_700 = (-6L);
                    for (g_141 = 0; (g_141 <= 7); g_141 += 1)
                    {
                        int i;
                        l_696 = ((g_618[g_141] ^ (safe_add_func_int8_t_s_s(p_35, (safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(l_690[6], ((((((safe_lshift_func_uint8_t_u_s(((g_154[1][3][1] <= (1UL | (g_83[4][1][1] ^ p_35))) | p_35), 7)) >= (~(safe_lshift_func_uint8_t_u_s(l_695[6][0], l_690[0])))) >= g_154[0][6][2]) | l_682) & l_695[6][0]) || g_504))), g_122))))) >= (-4L));
                        return l_697;
                    }
                    if (l_690[6])
                    {
                        g_171[0][1][3] = (safe_unary_minus_func_int32_t_s(g_504));
                        return l_699;
                    }
                    else
                    {
                        l_700 = func_64(l_697);
                    }
                }
                else
                {
                    return g_10;
                }
            }
            l_703 = ((safe_add_func_uint8_t_u_u(l_683, g_154[1][3][1])) > func_24(g_504));
        }
        for (l_683 = 0; (l_683 == (-15)); l_683 = safe_sub_func_int8_t_s_s(l_683, 6))
        {
            unsigned l_714[5];
            int i;
            for (i = 0; i < 5; i++)
                l_714[i] = 0x4412E4CFL;
            for (g_504 = 0; (g_504 != (-5)); g_504 = safe_sub_func_int32_t_s_s(g_504, 4))
            {
                int l_711 = 0xD79D0745L;
                for (l_576 = (-9); (l_576 < 29); l_576 = safe_add_func_int8_t_s_s(l_576, 6))
                {
                    l_285 = 9L;
                }
                g_710 = l_703;
                if (g_542)
                {
                    int l_717 = 0x5C0DE3B9L;
                    for (l_665 = 0; (l_665 <= 7); l_665 += 1)
                    {
                        int i, j;
                        return l_695[l_665][l_665];
                    }
                    l_711 = p_34;
                    if ((safe_add_func_int32_t_s_s(p_35, l_683)))
                    {
                        if (l_714[1])
                            break;
                        return p_35;
                    }
                    else
                    {
                        int l_722 = (-5L);
                        g_171[1][0][0] = g_171[0][2][3];
                        g_171[0][0][3] = g_83[2][0][1];
                        if (p_35)
                            break;
                        l_723 = ((safe_lshift_func_uint8_t_u_s((0x341BL && 0L), 2)) && func_44(p_35, l_711, l_717, p_34, ((safe_rshift_func_int8_t_s_u(func_24(l_714[4]), (func_78(((safe_mod_func_int32_t_s_s((g_84 == l_722), g_10)) ^ p_35), g_618[7], p_35) > l_711))) == 1L)));
                    }
                    if ((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((func_64((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((0x27L != p_34), (((safe_sub_func_int32_t_s_s(((p_35 < (safe_mod_func_int32_t_s_s((-1L), (0x9774L | l_717)))) <= (safe_unary_minus_func_int8_t_s(l_665))), ((((func_44(g_141, ((safe_sub_func_uint32_t_u_u(p_35, 0xB766F5F7L)) > l_714[3]), g_83[4][0][0], g_84, l_695[6][0]) != l_711) || g_710) && g_710) <= p_34))) != 1L) ^ p_34))), g_542)) >= l_714[1]), l_714[1])), l_665))) | (-10L)), 12)), (-8L))), 65531UL)))
                    {
                        return p_35;
                    }
                    else
                    {
                        char l_747 = 0x5DL;
                        int l_755 = 3L;
                        l_755 = (p_34 != (safe_lshift_func_uint8_t_u_s(l_723, ((((-2L) | l_747) >= p_34) >= (g_504 < (safe_rshift_func_uint16_t_u_s(func_78((safe_mod_func_int16_t_s_s(((0x5FL && (p_35 < ((safe_add_func_uint32_t_u_u(l_717, g_618[4])) < 0x2EL))) & p_35), p_34)), g_122, l_711), l_754)))))));
                        if (l_717)
                            continue;
                    }
                }
                else
                {
                    g_171[0][1][3] = (safe_add_func_int32_t_s_s((g_618[7] <= p_34), func_44(g_122, ((safe_mod_func_int32_t_s_s((g_83[3][1][0] ^ p_34), p_35)) <= ((g_83[3][1][1] & (p_35 | (p_34 ^ 0xFD2848D8L))) || g_83[1][1][1])), g_141, g_154[1][1][2], g_83[5][0][1])));
                    if (p_35)
                        continue;
                    if (g_84)
                        break;
                    for (g_84 = 0; (g_84 <= 1); g_84 += 1)
                    {
                        int i, j, k;
                        g_171[1][1][4] = ((g_154[g_84][(g_84 + 6)][g_84] >= p_34) && p_35);
                        if (g_171[0][1][3])
                            continue;
                        return g_760;
                    }
                }
            }
        }
    }
    for (l_703 = 0; (l_703 > 18); l_703 = safe_add_func_int32_t_s_s(l_703, 9))
    {
        char l_774 = (-2L);
        int l_777 = (-1L);
        l_777 = (safe_rshift_func_uint8_t_u_u((l_765[1] < p_34), (((((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_765[4], (safe_sub_func_int8_t_s_s((0x91B65B6DL < (safe_rshift_func_int8_t_s_u((+l_774), g_618[6]))), (g_83[4][1][0] && ((((((safe_rshift_func_uint16_t_u_u(func_72((p_35 <= g_618[0]), g_171[0][1][3], g_154[0][6][0]), 13)) ^ g_154[1][3][1]) < p_34) <= 0x4921L) ^ p_34) || 0L)))))), 2)) == p_34) | p_34) && l_774) | l_695[5][2])));
    }
    l_285 = (safe_add_func_int32_t_s_s(func_64(p_34), func_24(((safe_mod_func_int32_t_s_s((p_34 < (func_24(g_618[4]) < p_35)), (func_24((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((1L <= p_34), l_665)), p_35)), l_765[2]))) || g_542))) || p_34))));
    l_285 = ((((safe_lshift_func_int16_t_s_u(l_285, 12)) < (!func_64(((l_695[4][6] ^ func_64(g_504)) | func_24(l_665))))) <= func_24(((l_576 > p_34) > p_34))) < p_34);
    return g_122;
}







static char func_44(char p_45, int p_46, int p_47, unsigned char p_48, short p_49)
{
    unsigned l_59 = 0x9BD85DD7L;
    int l_271 = 0xA9AE306DL;
    l_271 = ((safe_add_func_int32_t_s_s((p_46 <= p_45), (0x93L && (l_59 == (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_10, ((func_24(func_64(g_10)) < g_10) <= p_49))), g_10)))))) && 5L);
    for (p_49 = 0; (p_49 <= (-8)); p_49 = safe_sub_func_int8_t_s_s(p_49, 1))
    {
        int l_274 = 0x5E1A6DCFL;
        p_46 = g_122;
        return l_274;
    }
    l_271 = g_141;
    g_171[0][1][3] = (p_49 <= ((6L != (safe_sub_func_int8_t_s_s(g_141, (func_78((g_122 | (7UL || (safe_rshift_func_uint8_t_u_u((p_48 >= (safe_add_func_int16_t_s_s((-7L), (safe_mod_func_int32_t_s_s(p_46, (l_59 && g_10)))))), 4)))), l_59, p_46) || g_10)))) < 0x345CL));
    return p_49;
}







static char func_64(int p_65)
{
    char l_68 = (-3L);
    int l_69 = 1L;
    int l_129 = 0xE8599F0AL;
    short l_202 = 1L;
    unsigned char l_264 = 0xAEL;
    l_69 = (func_24(g_10) > ((safe_rshift_func_int8_t_s_s(0x0CL, 6)) <= l_68));
    if ((((safe_sub_func_uint32_t_u_u((((+func_72((g_10 != (func_24(func_24(l_68)) >= ((l_69 == ((((((safe_lshift_func_int16_t_s_s((((g_10 < ((func_24(func_24(l_69)) != 0x28L) < p_65)) != l_68) >= l_69), p_65)) && (-6L)) ^ 0x229AL) & p_65) & g_10) && g_10)) || l_69))), g_10, g_10)) & 0xC463L) && p_65), 0UL)) ^ l_68) | 1L))
    {
        unsigned l_106 = 0xBB7457E6L;
        int l_155 = 0x3724E75DL;
        unsigned l_168 = 1UL;
        if ((((func_24(p_65) > g_83[4][1][0]) ^ 4294967294UL) & ((p_65 || g_84) ^ 0xB3L)))
        {
            short l_105 = (-1L);
            unsigned l_109 = 4UL;
            int l_118[8][2] = {{0x7C4FD0C6L,1L},{1L,0x7C4FD0C6L},{1L,1L},{0x7C4FD0C6L,1L},{1L,0x7C4FD0C6L},{1L,1L},{0x7C4FD0C6L,1L},{1L,0x0AE80B3DL}};
            unsigned l_167 = 0xAAF734E6L;
            unsigned char l_217 = 0x07L;
            int i, j;
            p_65 = ((g_83[2][0][0] || ((safe_add_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s(g_10, 3)) | p_65) != (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((1UL < ((g_10 & l_105) | func_78((((l_69 != l_106) != (func_72((safe_add_func_int8_t_s_s((g_83[4][1][0] <= p_65), p_65)), g_84, l_106) | 0x84333342L)) <= 0L), g_10, l_105))), p_65)) != l_69), l_69))), g_10)) ^ p_65)) > g_10);
            p_65 = l_109;
            for (l_68 = 0; (l_68 == 13); l_68 = safe_add_func_int16_t_s_s(l_68, 8))
            {
                unsigned l_119 = 0xA5F1CA18L;
                int l_169 = 0xBA36B31EL;
                for (l_69 = 24; (l_69 == 21); --l_69)
                {
                    unsigned char l_116 = 0x84L;
                    short l_117 = 0x4C6CL;
                    char l_132 = 0x78L;
                    l_118[4][1] = (func_78(func_78((((g_10 == func_24(((safe_mod_func_int16_t_s_s(0L, ((((0xEDL | 255UL) <= l_116) ^ ((~g_10) < l_116)) & g_83[0][0][0]))) == l_117))) | 0x3437DEDCL) == g_10), g_83[4][1][0], g_10), p_65, g_10) || 0x79L);
                    g_122 = (l_119 != (func_24(p_65) && ((p_65 ^ (p_65 || ((safe_add_func_uint8_t_u_u(0x3CL, func_72(l_118[3][0], (p_65 | l_68), p_65))) != p_65))) == 0x5282L)));
                    for (l_117 = 1; (l_117 >= 0); l_117 -= 1)
                    {
                        int i, j;
                        l_118[(l_117 + 4)][l_117] = func_24(l_118[(l_117 + 6)][l_117]);
                        l_118[l_117][l_117] = p_65;
                        l_129 = (p_65 < (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_65, 7)), (safe_lshift_func_int8_t_s_s(g_83[1][1][1], func_24(p_65))))));
                        l_129 = (safe_add_func_int16_t_s_s((p_65 == (4294967293UL <= (p_65 <= (g_83[2][1][1] <= (+func_24(p_65)))))), (-1L)));
                    }
                    p_65 = func_72(func_24(g_84), ((l_106 < p_65) && ((g_122 >= (-2L)) < (l_132 && (0xCD3D8531L > ((0x125DDC99L < 8L) < g_84))))), p_65);
                }
                l_118[1][0] = (p_65 ^ (safe_mod_func_int16_t_s_s(func_24((safe_sub_func_uint32_t_u_u((p_65 != (safe_rshift_func_uint8_t_u_s(0x7DL, func_24(l_105)))), g_83[4][1][0]))), l_119)));
                if (g_83[5][1][1])
                {
                    g_141 = (safe_lshift_func_uint16_t_u_u((p_65 == 0UL), p_65));
                    for (g_84 = 0; (g_84 > 9); g_84 = safe_add_func_int8_t_s_s(g_84, 2))
                    {
                        if (g_83[4][1][0])
                            break;
                        return g_141;
                    }
                    if (p_65)
                        continue;
                }
                else
                {
                    if (p_65)
                        break;
                    g_154[1][3][1] = (0x373B84CAL >= (((g_83[4][1][0] < p_65) | (safe_sub_func_int8_t_s_s((func_24(g_122) | 0L), (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((p_65 <= ((l_68 & func_24((safe_lshift_func_int16_t_s_u(p_65, p_65)))) != 249UL)), p_65)), 0x1BL))))) && p_65));
                }
                for (p_65 = 0; (p_65 <= 1); p_65 += 1)
                {
                    const unsigned char l_170 = 255UL;
                    l_155 = p_65;
                    for (l_109 = 0; (l_109 <= 1); l_109 += 1)
                    {
                        int l_158 = 1L;
                        l_169 = ((safe_add_func_uint16_t_u_u(l_158, g_83[4][1][0])) != (safe_mod_func_uint16_t_u_u(((((((p_65 < g_10) <= (~(safe_lshift_func_int8_t_s_s(p_65, 3)))) <= ((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_10, l_167)), (0x35L | func_24(l_168)))) || p_65)) && l_119) == 0x9FB6E159L) != 0xC77CL), 0x7663L)));
                        if (l_170)
                            continue;
                        l_158 = g_154[1][3][1];
                        return l_129;
                    }
                }
            }
            for (l_105 = 0; (l_105 <= 1); l_105 += 1)
            {
                unsigned l_177 = 1UL;
                unsigned char l_190 = 0x89L;
                g_171[0][1][3] = g_10;
                if (g_83[1][1][0])
                {
                    for (l_109 = 0; (l_109 <= 1); l_109 += 1)
                    {
                        int l_172 = 1L;
                        int i, j;
                        l_172 = l_118[(l_109 + 5)][l_109];
                    }
                }
                else
                {
                    for (g_84 = 1; (g_84 >= 0); g_84 -= 1)
                    {
                        int i, j;
                        return l_118[(g_84 + 5)][g_84];
                    }
                }
                p_65 = l_69;
                for (l_68 = 0; (l_68 <= 1); l_68 += 1)
                {
                    if ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((l_177 | ((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(0x2CL, func_24((l_68 < (g_83[4][1][0] | (((((safe_mod_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(func_24((p_65 > ((0x1CL == p_65) ^ ((safe_lshift_func_uint8_t_u_s(l_190, 0)) > l_168)))), 10)) && p_65), g_122)) > 0xE5E2L) < 0UL), (-3L))) & 65535UL) ^ g_154[1][0][2]) | 0xF2AE6F9CL) || 0x9FL)))))), p_65)) & 8L)) ^ 0x380DC62AL) > 1UL), 2)), p_65)))
                    {
                        g_171[0][2][5] = l_155;
                        p_65 = p_65;
                        if (g_171[0][1][3])
                            continue;
                    }
                    else
                    {
                        int l_199 = 0xB672675DL;
                        l_199 = (safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((l_155 ^ (safe_rshift_func_uint16_t_u_s(g_154[1][3][1], (g_171[0][1][3] || l_199)))) > (safe_rshift_func_uint8_t_u_s(0x9AL, 3))), 1)), 5)) ^ 7L), (l_202 != (65535UL & 0x0877L))));
                        g_171[0][1][3] = ((((safe_sub_func_uint8_t_u_u(l_106, l_177)) != g_83[3][0][0]) || (((func_72((((safe_lshift_func_int8_t_s_u(l_199, (((((safe_rshift_func_uint8_t_u_s(g_171[0][1][3], func_24(g_83[4][1][0]))) <= p_65) > (safe_add_func_uint8_t_u_u((func_24(g_171[1][3][5]) <= p_65), g_154[1][3][1]))) == 7L) || p_65))) ^ p_65) & g_84), p_65, l_177) || 0x3143DF59L) != p_65) && 0x01L)) <= g_122);
                        if (p_65)
                            break;
                    }
                    for (l_106 = 0; (l_106 <= 1); l_106 += 1)
                    {
                        int l_216 = 1L;
                        p_65 = 6L;
                        g_171[0][3][7] = (((safe_unary_minus_func_uint32_t_u(0xA801E87EL)) < (p_65 != func_72((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(p_65, 5)), (func_78(l_216, p_65, func_24(l_129)) & g_122))), l_217, g_171[0][1][3]))) | p_65);
                        return p_65;
                    }
                }
            }
        }
        else
        {
            unsigned short l_220[9][1] = {{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}};
            int i, j;
            l_220[6][0] = ((safe_sub_func_uint32_t_u_u(((9UL <= g_154[1][3][1]) && p_65), 0xB8CE4A9CL)) <= p_65);
            g_171[1][2][4] = (((safe_mod_func_uint8_t_u_u(((p_65 & (safe_sub_func_uint16_t_u_u(p_65, (safe_sub_func_uint8_t_u_u(p_65, (((g_84 == (l_168 >= ((((l_220[6][0] < (safe_mod_func_int32_t_s_s(((p_65 < (safe_lshift_func_uint8_t_u_u(g_122, (((((safe_rshift_func_int8_t_s_s(g_141, l_68)) <= p_65) && l_129) <= 0x2425L) < g_154[1][3][1])))) < l_106), 0x23797499L))) == g_84) <= 0x6EL) == l_155))) & 0xADAC5A14L) | 3L)))))) >= 8UL), l_129)) < l_68) > g_154[1][3][1]);
        }
        for (l_168 = 29; (l_168 < 59); l_168 = safe_add_func_uint32_t_u_u(l_168, 6))
        {
            if ((safe_sub_func_int8_t_s_s(g_83[4][1][0], (-2L))))
            {
                unsigned l_245 = 0x2C71F8D7L;
                for (l_106 = 0; l_106 < 2; l_106 += 1)
                {
                    for (l_129 = 0; l_129 < 8; l_129 += 1)
                    {
                        for (l_202 = 0; l_202 < 3; l_202 += 1)
                        {
                            g_154[l_106][l_129][l_202] = 1L;
                        }
                    }
                }
                g_171[1][1][3] = (safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((1UL || func_72(((l_69 && (l_155 < (safe_mod_func_uint8_t_u_u(((g_83[4][1][0] < p_65) > (safe_rshift_func_int8_t_s_u((l_245 || (safe_sub_func_int8_t_s_s(p_65, (g_171[0][1][3] > (safe_add_func_uint8_t_u_u((g_122 > p_65), g_10)))))), l_155))), 0x80L)))) != p_65), g_154[0][0][2], g_83[4][1][0])), g_154[1][3][1])), 1));
            }
            else
            {
                return p_65;
            }
        }
        p_65 = (safe_sub_func_uint32_t_u_u(4294967293UL, (((((((l_168 | l_69) != ((safe_add_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((l_129 < (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_10, l_168)), 3)), g_83[4][1][0])), (func_24(p_65) != p_65)))), l_264)) >= l_68), p_65)) || p_65)) != 0x9F01L) ^ g_10) & g_83[1][1][0]) & p_65) != l_264)));
        return g_83[2][1][0];
    }
    else
    {
        const int l_266 = 1L;
        g_171[0][1][3] = (((func_72(g_83[3][1][0], l_264, (safe_unary_minus_func_uint32_t_u(g_154[1][3][1]))) | l_266) != (g_171[0][1][3] >= ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_68, p_65)), g_171[0][1][3])) ^ l_129))) != l_266);
    }
    return p_65;
}







static short func_72(unsigned p_73, short p_74, char p_75)
{
    unsigned char l_82 = 0x77L;
    int l_96 = 2L;
    l_96 = ((g_10 > ((func_78(p_74, p_73, l_82) >= (safe_sub_func_int8_t_s_s(0xF2L, l_82))) != l_82)) > g_10);
    l_96 = 1L;
    return g_83[1][1][0];
}







static const unsigned char func_78(unsigned p_79, const unsigned short p_80, unsigned p_81)
{
    unsigned char l_91 = 0x6BL;
    int l_92 = 1L;
    int l_93 = 0xC553FEA9L;
    g_83[4][1][0] = func_24(p_79);
    g_84 = (p_80 & 0x06E2L);
    l_93 = ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_10, 6)), 6)) < ((((func_24(l_91) > g_83[4][1][0]) >= l_91) || (g_84 | (((g_83[0][1][1] != l_92) & (1L == 0L)) || p_80))) < g_84)), l_91)) || g_10);
    return l_92;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_83[i][j][k], "g_83[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_154[i][j][k], "g_154[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_171[i][j][k], "g_171[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_618[i], "g_618[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_815[i], "g_815[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_1022, "g_1022", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
