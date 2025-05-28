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
   short f0;
   unsigned short f1;
   char f2;
   unsigned char f3;
   short f4;
   unsigned f5;
   int f6;
};

struct S1 {
   struct S0 f0;
   const unsigned f1;
   unsigned short f2;
   short f3;
   short f4;
};


static unsigned short g_7 = 0xB7BEL;
static int g_94[6] = {0L, 0L, (-7L), 0L, 0L, (-7L)};
static unsigned short g_95 = 1UL;
static struct S0 g_100 = {-1L,0x7691L,0xF3L,1UL,7L,0x26F2DC12L,0L};
static unsigned char g_106 = 0xDFL;
static struct S0 g_127 = {0x98BFL,8UL,0xF2L,0UL,-1L,0x2C1B4120L,0xDDF05FF3L};
static struct S1 g_128 = {{0x5EAFL,65529UL,0x8EL,1UL,0x40A4L,1UL,0L},1UL,1UL,0xF8BAL,0xE113L};
static struct S0 g_301 = {0L,0xE8D1L,0x5FL,0x39L,-2L,0xB0582FCEL,-1L};
static const unsigned g_313 = 0xB3FA38C4L;
static unsigned char g_362 = 0x2AL;
static struct S1 g_460 = {{0xADA9L,65533UL,0x4DL,3UL,0xB374L,0x652061A5L,0L},0x00AEE655L,0UL,1L,0L};
static int g_468 = 0x982AC0DEL;
static unsigned g_918 = 2UL;



static int func_1(void);
static unsigned short func_2(char p_3, int p_4, unsigned short p_5, char p_6);
static unsigned func_13(int p_14, unsigned p_15, struct S1 p_16, int p_17, struct S0 p_18);
static int func_19(unsigned p_20, int p_21, unsigned p_22, unsigned p_23, unsigned p_24);
static int func_26(int p_27, unsigned char p_28, struct S1 p_29, unsigned char p_30, int p_31);
static struct S1 func_32(int p_33);
static const unsigned char func_34(unsigned p_35, unsigned short p_36, char p_37, unsigned short p_38, unsigned short p_39);
static unsigned short func_46(short p_47, struct S0 p_48, struct S1 p_49, struct S0 p_50);
static unsigned short func_55(unsigned p_56, const int p_57);
static const char func_60(unsigned short p_61, unsigned char p_62, int p_63);
static int func_1(void)
{
    char l_8 = (-3L);
    unsigned l_25 = 0x9D9E177CL;
    unsigned l_279 = 0x594F6EC2L;
    struct S0 l_470 = {-1L,0UL,0x66L,0xD2L,0x36AAL,0x67C812C6L,0x6128634EL};
    l_470.f6 = (func_2(g_7, l_8, (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((l_8 && (func_13(func_19(l_25, func_26(g_7, g_7, func_32(g_7), ((safe_unary_minus_func_uint8_t_u(((func_60((l_25 && l_25), l_8, l_279) || l_279) > l_25))) == 1L), g_128.f3), g_468, l_8, g_313), l_279, g_460, l_8, l_470) & 4294967295UL)), g_460.f1)) == g_128.f2), 8)), l_470.f4) && 0x0C73L);
    return g_128.f0.f5;
}







static unsigned short func_2(char p_3, int p_4, unsigned short p_5, char p_6)
{
    int l_864 = 1L;
    struct S1 l_867 = {{0x4199L,9UL,0xE4L,0x4EL,0x9E05L,1UL,0x99855C97L},4294967295UL,0x9B4CL,-7L,5L};
    int l_947 = 0L;
    struct S0 l_950 = {0xF4A6L,0UL,0x17L,0x41L,-1L,6UL,0x761B97B0L};
    for (g_7 = 18; (g_7 < 47); ++g_7)
    {
        unsigned short l_863[5][10] = {{65531UL, 0UL, 65531UL, 0xD4DDL, 1UL, 0xDC2DL, 65527UL, 65527UL, 0xDC2DL, 1UL}, {65531UL, 0UL, 65531UL, 0xD4DDL, 1UL, 0xDC2DL, 65527UL, 65527UL, 0xDC2DL, 1UL}, {65531UL, 0UL, 65531UL, 0xD4DDL, 1UL, 0xDC2DL, 65527UL, 65527UL, 0xDC2DL, 1UL}, {65531UL, 0UL, 65531UL, 0xD4DDL, 1UL, 0xDC2DL, 65527UL, 65527UL, 0xDC2DL, 1UL}, {65531UL, 0UL, 65531UL, 0xD4DDL, 1UL, 0xDC2DL, 65527UL, 65527UL, 0xDC2DL, 1UL}};
        struct S0 l_868 = {0x85C8L,0x9121L,1L,0xAAL,0xBBF4L,0x8205BB46L,-4L};
        unsigned char l_941 = 246UL;
        int l_944 = 1L;
        unsigned l_948 = 0xC545AC98L;
        int i, j;
        for (g_460.f4 = 5; (g_460.f4 >= 1); g_460.f4 -= 1)
        {
            int l_871 = 0x912FF72BL;
            struct S0 l_892 = {-1L,65526UL,0x50L,0xCDL,4L,0xD3E8D239L,0L};
            int i;
            for (g_127.f5 = 0; (g_127.f5 <= 5); g_127.f5 += 1)
            {
                struct S0 l_901 = {0L,0xD6BFL,0x0BL,0xCFL,0x89CAL,7UL,0xD0990BF2L};
                int i;
                g_460.f0 = g_100;
                if ((func_60((g_94[g_460.f4] & l_863[1][3]), (l_864 > (safe_sub_func_uint16_t_u_u(((func_19((((func_46(g_301.f4, g_127, l_867, l_868) < (safe_sub_func_uint32_t_u_u((+((func_19(g_106, p_6, p_3, l_871, l_871) != 6UL) != l_868.f0)), g_7))) != p_6) | p_4), p_5, l_868.f5, p_4, g_301.f5) < 0x374BL) < l_867.f1), 0UL))), l_868.f2) < p_3))
                {
                    short l_876 = 0L;
                    struct S1 l_891 = {{1L,0x3E83L,0xC8L,0xDEL,7L,1UL,-2L},0UL,0x0A91L,0xA183L,-1L};
                    if ((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((l_876 && g_94[g_460.f4]), ((safe_sub_func_uint16_t_u_u((0UL >= l_876), func_60((safe_mod_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u(p_3, 7)) == ((((l_876 >= g_127.f2) == (safe_lshift_func_uint16_t_u_s((func_60(p_4, g_128.f0.f1, g_100.f6) > p_4), p_4))) | p_4) >= 1UL)) | 0x4303L) < g_127.f3), 0x1FL)), p_4, g_301.f6))) & p_3))), g_100.f0)))
                    {
                        char l_893[2][2][2] = {{{0xB2L, 1L}, {0xB2L, 1L}}, {{0xB2L, 1L}, {0xB2L, 1L}}};
                        int i, j, k;
                        g_94[g_127.f5] = (+(safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(0x365BL, 4)), (safe_mod_func_int8_t_s_s(func_19(p_6, p_6, ((func_55(func_46(p_5, g_128.f0, l_891, l_892), p_3) <= 0UL) && 255UL), p_4, p_4), p_3)))));
                        if (l_893[0][1][0])
                            break;
                        return p_3;
                    }
                    else
                    {
                        return l_891.f4;
                    }
                }
                else
                {
                    unsigned l_900 = 4294967295UL;
                    struct S1 l_902 = {{-1L,0x7C83L,0x43L,0UL,1L,4294967295UL,0xF8BA8590L},7UL,0x2955L,0x174EL,0x2780L};
                    p_4 |= (safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((0UL >= (0x2AC0EA59L & 4294967295UL)), (func_46(l_900, l_901, l_902, l_901) <= 1UL))), l_868.f0)) | l_902.f0.f5), g_95));
                }
            }
            g_100.f6 ^= g_94[g_460.f4];
            for (l_864 = 19; (l_864 < (-6)); l_864 = safe_sub_func_uint16_t_u_u(l_864, 1))
            {
                short l_907[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_907[i] = 0x512AL;
                for (l_868.f1 = 25; (l_868.f1 < 10); l_868.f1--)
                {
                    unsigned l_917 = 1UL;
                    int l_919 = 1L;
                    l_907[1] = l_867.f0.f5;
                    if (p_3)
                    {
                        unsigned char l_910 = 255UL;
                        l_919 |= (((p_6 > g_100.f0) < (g_301.f1 & (((safe_mod_func_int16_t_s_s(p_4, func_60(g_301.f0, l_910, (g_460.f0.f1 ^ (safe_add_func_uint32_t_u_u(((((func_60((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(func_19(p_4, g_460.f0.f1, l_867.f0.f5, p_6, l_917), p_3)), g_128.f0.f3)), g_918, g_95) | l_917) && 0x8FL) < l_867.f3) != g_127.f5), (-1L))))))) < 0x742DD3B1L) || p_6))) >= 0x9929E47DL);
                    }
                    else
                    {
                        return g_128.f0.f5;
                    }
                    l_867.f0.f6 = (safe_rshift_func_uint16_t_u_u((p_3 >= func_26(p_6, p_6, g_128, ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u(((l_867.f0.f0 && (g_127.f1 & 0xCFL)) < 4294967287UL), p_3)) || 0xBBBFL), p_3)) >= g_301.f6), p_6)), p_4));
                }
                g_94[g_460.f4] |= (safe_sub_func_int32_t_s_s(func_60(p_5, g_128.f3, ((safe_rshift_func_uint8_t_u_s(g_128.f2, (safe_rshift_func_int16_t_s_s(((g_460.f4 | g_128.f3) < (p_4 && (safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((p_3 >= (g_301.f2 & (g_100.f4 || p_3))), l_867.f0.f1)) != 0xF0FAL), p_4)))), 2)))) == p_6)), g_106));
                for (p_4 = 1; (p_4 >= 0); p_4 -= 1)
                {
                    unsigned l_949 = 4294967293UL;
                    for (l_867.f3 = 0; (l_867.f3 <= 1); l_867.f3 += 1)
                    {
                        int l_940 = 0x61A5353EL;
                        int i;
                        l_940 = ((l_907[l_867.f3] == (safe_lshift_func_int8_t_s_u((p_5 & (safe_add_func_uint16_t_u_u(p_4, g_460.f0.f0))), 0))) != l_907[l_867.f3]);
                        g_100 = l_892;
                        l_941 = ((g_128.f0.f5 & g_301.f6) ^ g_301.f1);
                    }
                    l_948 ^= (9L & (safe_mod_func_int16_t_s_s(func_34(p_6, g_127.f3, (l_944 ^ ((l_868.f2 || (safe_sub_func_int32_t_s_s((func_19(l_941, p_3, l_868.f0, p_6, g_128.f0.f0) < p_3), l_944))) & g_94[1])), p_3, l_947), p_3)));
                    l_949 = g_460.f0.f0;
                }
                g_127 = g_127;
            }
        }
        l_950 = l_868;
        g_94[1] |= (safe_rshift_func_uint8_t_u_u(p_3, 3));
    }
    return p_3;
}







static unsigned func_13(int p_14, unsigned p_15, struct S1 p_16, int p_17, struct S0 p_18)
{
    unsigned l_473 = 4294967290UL;
    unsigned l_502 = 4294967286UL;
    int l_523 = (-9L);
    int l_552 = 0L;
    const int l_577 = 1L;
    unsigned l_586 = 0xB02AF407L;
    unsigned l_587 = 0UL;
    short l_644 = 1L;
    struct S0 l_660 = {-7L,0x4C53L,0L,0xF5L,0x5507L,0x6F9084B0L,-1L};
    unsigned short l_730[7] = {65535UL, 65535UL, 0x1EF5L, 65535UL, 65535UL, 0x1EF5L, 65535UL};
    unsigned l_803 = 2UL;
    struct S1 l_822 = {{1L,0xBEABL,0xF0L,255UL,1L,0x2FB053ECL,0x0130D975L},0x44726EC7L,0x6477L,0x62A4L,0L};
    int i;
    p_18.f6 ^= 1L;
lbl_758:
    for (g_127.f2 = (-25); (g_127.f2 > (-23)); g_127.f2 = safe_add_func_int8_t_s_s(g_127.f2, 2))
    {
        const unsigned short l_492 = 0xD61CL;
        struct S0 l_514 = {-9L,65532UL,1L,7UL,0xD204L,7UL,0xB3935B25L};
        unsigned l_555 = 0xA7A833E5L;
        int l_610 = 0L;
        unsigned char l_662 = 0UL;
        if (((p_16.f0.f4 & (p_16.f0.f2 <= l_473)) < g_460.f0.f2))
        {
            struct S0 l_474 = {5L,0UL,0x7EL,255UL,-1L,1UL,0x44C1E1B9L};
            const struct S0 l_477 = {-8L,0xA6EFL,0x51L,0x95L,0x60FBL,4294967292UL,0x743EF446L};
            unsigned char l_478 = 255UL;
            l_474 = p_18;
            for (l_474.f6 = 10; (l_474.f6 < (-28)); l_474.f6 = safe_sub_func_int16_t_s_s(l_474.f6, 6))
            {
                unsigned l_483 = 4294967288UL;
                int l_524 = 0x2DAFB558L;
                g_128.f0 = l_477;
                if (l_478)
                    continue;
                if ((((safe_mod_func_int8_t_s_s(((p_16.f0.f2 > ((safe_lshift_func_int8_t_s_u(l_483, (0xDFL & 0L))) < (safe_mod_func_uint32_t_u_u(p_16.f2, (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_55(((g_460.f3 == 3L) ^ (func_55(((((p_17 & l_483) ^ p_18.f6) & p_18.f0) ^ l_474.f5), l_492) && 0x61709084L)), p_16.f0.f0), 0x2981L)), 4)) | l_477.f4), 7)))))) | p_18.f2), 1UL)) ^ l_492) || g_460.f0.f3))
                {
                    for (g_460.f0.f2 = 0; (g_460.f0.f2 < 4); g_460.f0.f2 = safe_add_func_int16_t_s_s(g_460.f0.f2, 7))
                    {
                        if (g_100.f0)
                            break;
                        g_100.f6 |= p_18.f2;
                        p_18 = g_301;
                    }
                    if (p_18.f4)
                        break;
                }
                else
                {
                    unsigned char l_511[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_511[i] = 1UL;
                    g_460.f0 = g_460.f0;
                    if (((safe_sub_func_int32_t_s_s((g_313 != (((safe_unary_minus_func_int16_t_s(((safe_sub_func_int16_t_s_s(g_95, l_473)) > (safe_lshift_func_uint8_t_u_u((l_502 && (safe_sub_func_uint8_t_u_u((((l_492 >= ((p_16.f2 ^ (safe_lshift_func_int8_t_s_u(p_18.f4, 3))) || func_19(l_483, p_16.f0.f4, p_18.f3, p_16.f2, p_16.f0.f1))) | g_128.f0.f5) || g_100.f2), 0xE6L))), 0))))) & 0xE3L) && 0x523BL)), (-1L))) >= 0x03B5993BL))
                    {
                        unsigned l_507 = 0x9FCDAA92L;
                        l_507 &= p_18.f0;
                    }
                    else
                    {
                        short l_508[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_508[i] = 0L;
                        p_16.f0.f6 ^= func_60(l_473, l_508[3], g_128.f3);
                    }
                    for (p_16.f0.f0 = (-26); (p_16.f0.f0 <= 13); p_16.f0.f0 = safe_add_func_int16_t_s_s(p_16.f0.f0, 7))
                    {
                        p_18.f6 = (l_483 & g_128.f3);
                        if (l_511[0])
                            continue;
                    }
                }
                l_524 = (safe_rshift_func_int16_t_s_s((0UL != func_46(l_483, p_16.f0, g_460, l_514)), (!(((((((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((p_16.f0.f1 || func_19((safe_mod_func_int32_t_s_s(p_18.f4, (safe_lshift_func_uint16_t_u_u(g_128.f0.f4, g_94[1])))), p_16.f3, g_460.f0.f5, g_460.f0.f3, g_460.f0.f0)) != 0L), l_474.f6)), 0xC6AE3A0EL)) != g_128.f0.f2) <= g_100.f0) | p_18.f3) > 0xDAL) != l_523) && 0xAFCBL))));
            }
        }
        else
        {
            int l_547 = 0L;
            short l_548 = (-3L);
            if (((safe_lshift_func_uint16_t_u_u(p_15, 11)) || (0xF706L | p_15)))
            {
                unsigned char l_527 = 0x62L;
                int l_528 = 0x7DF7D1A1L;
                l_528 = l_527;
                g_100.f6 |= p_16.f0.f3;
            }
            else
            {
                struct S0 l_549 = {0L,1UL,2L,0UL,0x6DCFL,0x0D52E298L,0x86FE7060L};
                p_18 = g_128.f0;
                g_301.f6 |= func_46((((g_95 <= (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((((((((0x5D38L & p_16.f0.f2) & ((safe_lshift_func_uint16_t_u_u(g_460.f0.f6, (g_128.f2 >= ((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((p_15 && ((((l_523 > p_16.f4) < (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((l_514.f0 ^ 0x1CL), g_128.f0.f6)), 2)), 0))) < g_301.f5) != 0x24FCL)), l_547)), p_18.f3)), g_100.f0)) | l_548)))) ^ p_18.f4)) & g_95) || g_127.f2) >= g_100.f3) >= g_94[1]) ^ 0UL), p_18.f3)), g_128.f0.f3))) | p_18.f1) ^ 1L), l_549, g_460, p_16.f0);
            }
        }
        for (l_514.f3 = 6; (l_514.f3 < 41); l_514.f3 = safe_add_func_uint32_t_u_u(l_514.f3, 2))
        {
            char l_566 = (-1L);
            l_552 ^= (p_18.f1 & l_523);
            for (p_18.f3 = (-9); (p_18.f3 == 58); p_18.f3 = safe_add_func_int32_t_s_s(p_18.f3, 7))
            {
                l_514.f6 = func_19(l_555, (safe_mod_func_uint16_t_u_u(l_492, g_128.f0.f1)), ((safe_sub_func_uint32_t_u_u(func_19((safe_add_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u(g_128.f4, (p_18.f1 == l_566))) < g_94[1]) != (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((p_16.f3 & 0x09L), p_16.f1)) & p_18.f1), 0)) && g_468), 6UL)), g_128.f0.f4))), 0UL)) || g_128.f2), g_301.f5)), p_16.f0.f6, l_473, g_127.f3, g_301.f1), 1UL)) & 3UL), g_128.f0.f5, l_566);
            }
            for (p_14 = 24; (p_14 < (-9)); p_14 = safe_sub_func_int32_t_s_s(p_14, 3))
            {
                p_18.f6 = ((p_16.f0.f1 ^ (((g_460.f0.f2 & l_523) != (func_19(g_100.f5, l_523, g_127.f3, l_514.f6, p_16.f4) != l_502)) != l_577)) > 0xF6L);
            }
        }
        p_16.f0.f6 &= (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((g_127.f3 && l_514.f1), (func_60((safe_lshift_func_int16_t_s_s(l_577, (0UL != ((safe_rshift_func_int8_t_s_s(p_16.f0.f1, 7)) ^ p_16.f0.f4)))), func_60(g_460.f2, g_460.f0.f2, l_586), g_128.f0.f2) == g_127.f5))), g_127.f1));
        if (l_587)
        {
            struct S0 l_588 = {0x3B0EL,0x70B8L,1L,0xC4L,-1L,4294967295UL,-6L};
            p_16.f0 = l_588;
            g_128.f0 = l_514;
        }
        else
        {
            unsigned short l_609[3][1][4] = {{{65535UL, 0x17BEL, 65535UL, 0x17BEL}}, {{65535UL, 0x17BEL, 65535UL, 0x17BEL}}, {{65535UL, 0x17BEL, 65535UL, 0x17BEL}}};
            struct S1 l_659 = {{1L,0x625CL,0x1EL,0x71L,0xFBA5L,0xA85F7A4CL,0x66FEA11EL},8UL,0UL,1L,-3L};
            int i, j, k;
            if ((safe_add_func_uint16_t_u_u(func_55(((func_55(((((safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((0x96L > g_127.f0), 2UL)) != (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u(g_460.f0.f4, 0)) ^ (safe_sub_func_int8_t_s_s((l_586 && (((((p_16.f2 != (((p_18.f4 | (func_55(func_19(p_16.f1, ((safe_sub_func_int32_t_s_s((0x8B1BL && 0x53FFL), g_460.f1)) <= p_17), l_609[2][0][2], g_301.f6, g_301.f1), p_16.f3) ^ l_586)) >= 0x3978B64FL) <= l_609[2][0][2])) > p_18.f1) || p_16.f0.f4) < l_609[2][0][2]) ^ g_460.f0.f5)), p_16.f0.f1))) == 0xBCEAL), l_609[2][0][3])), p_16.f0.f0)) <= (-6L)), l_514.f2)) | g_127.f4), 4294967295UL))), 0xA4C6F501L)) ^ l_610) != 0xD3A5BDFEL) == 0x9A57L), g_128.f0.f3) & 0xDF80AA20L) | l_502), p_18.f3), (-8L))))
            {
                int l_611 = 0x3D82D33AL;
                l_611 = 0xA11D72F8L;
                for (g_128.f0.f4 = 26; (g_128.f0.f4 >= (-11)); --g_128.f0.f4)
                {
                    g_460.f0 = g_301;
                    l_514.f6 = l_611;
                }
            }
            else
            {
                unsigned short l_620 = 1UL;
                int l_638 = 0xEC9A877EL;
                const struct S0 l_643 = {-8L,0x2356L,0x83L,0UL,0x2FF2L,0x19118B52L,1L};
                unsigned l_661 = 4294967295UL;
                int l_665 = 0L;
                g_460.f0 = g_460.f0;
                for (g_460.f0.f2 = 0; (g_460.f0.f2 <= 0); g_460.f0.f2 += 1)
                {
                    char l_623 = 0xCCL;
                    struct S0 l_663 = {0x146FL,65535UL,0x7CL,1UL,-9L,4294967294UL,-3L};
                    char l_664 = 0L;
                    g_301 = l_514;
                    if ((safe_rshift_func_int8_t_s_u((((safe_mod_func_uint8_t_u_u((~(safe_sub_func_int32_t_s_s(func_19(l_514.f2, g_127.f4, l_620, p_16.f0.f1, (safe_add_func_int32_t_s_s(l_623, (g_460.f3 & p_18.f1)))), ((65535UL == (-5L)) > l_514.f3)))), p_14)) > 0x6DL) | l_609[1][0][1]), 4)))
                    {
                        unsigned char l_654[8][6][5] = {{{1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}}, {{1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}}, {{1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}}, {{1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}}, {{1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}}, {{1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}}, {{1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}}, {{1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}, {1UL, 250UL, 1UL, 0xDCL, 0x56L}}};
                        int i, j, k;
                        g_301.f6 |= func_60((safe_lshift_func_uint8_t_u_s(l_514.f0, 2)), (safe_add_func_int8_t_s_s(((0x79L >= func_55(((safe_mod_func_int8_t_s_s((p_16.f3 || (safe_sub_func_uint32_t_u_u(0x94298E24L, ((safe_add_func_uint8_t_u_u((l_620 ^ (0xE46885AEL >= (safe_rshift_func_uint8_t_u_u(((~(safe_rshift_func_uint16_t_u_s(p_18.f6, l_638))) >= (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_94[1], 15)), p_16.f0.f2))), 4)))), l_514.f1)) >= (-7L))))), 0x55L)) >= 0L), l_577)) ^ 255UL), 2L)), p_18.f3);
                        g_128.f0 = l_643;
                        l_664 ^= ((p_16.f0.f1 > (func_19((l_644 == func_19((0UL || g_95), (safe_add_func_int16_t_s_s((func_60(func_46((((((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((func_46((((safe_lshift_func_uint16_t_u_u(l_514.f5, ((safe_add_func_uint8_t_u_u(func_19(g_100.f2, l_654[1][1][3], (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(func_46(func_46(p_16.f0.f0, l_643, l_659, p_16.f0), g_127, l_659, g_127), g_460.f4)) >= l_623), p_18.f4)), l_654[5][5][3], l_587), p_18.f4)) > l_643.f6))) ^ 65535UL) <= l_659.f0.f2), p_18, p_16, l_660) || (-5L)))), l_659.f0.f4)) | l_661) || g_127.f2) & p_18.f2) ^ l_662), l_663, p_16, p_16.f0), p_18.f3, p_16.f2) ^ 0L), 0x8767L)), g_100.f3, p_16.f0.f5, g_127.f5)), g_301.f0, l_643.f1, p_16.f0.f1, p_16.f0.f1) < 4294967288UL)) > 0UL);
                        p_16.f0.f6 ^= 8L;
                    }
                    else
                    {
                        return g_128.f2;
                    }
                    for (g_468 = 0; (g_468 >= 0); g_468 -= 1)
                    {
                        int i, j, k;
                        l_665 |= (l_609[(g_468 + 2)][g_460.f0.f2][(g_468 + 1)] == p_16.f0.f2);
                    }
                }
            }
            l_514.f6 = (((func_19(p_15, p_18.f1, (safe_sub_func_uint32_t_u_u(1UL, (l_659.f0.f2 >= l_660.f5))), p_15, (((safe_lshift_func_int16_t_s_s(func_46((func_55(p_18.f3, (l_659.f0.f6 && (p_18.f4 & 3UL))) | g_460.f0.f0), l_659.f0, g_460, l_514), 5)) > g_460.f0.f6) & 0x58L)) && l_609[1][0][2]) || l_609[2][0][2]) > g_460.f0.f0);
            for (p_18.f5 = (-26); (p_18.f5 == 3); ++p_18.f5)
            {
                int l_683 = 0xB294A877L;
                l_514.f6 = (safe_lshift_func_uint16_t_u_u(((p_16.f0.f3 < (g_301.f1 < p_15)) <= (~p_16.f0.f6)), func_19(p_16.f0.f6, p_16.f2, ((((safe_lshift_func_uint8_t_u_u((((1L >= p_18.f6) > l_659.f1) && p_18.f4), l_514.f6)) | l_523) || 0xC9353BE7L) ^ g_313), p_16.f4, p_18.f1)));
                for (l_610 = 15; (l_610 == (-19)); l_610 = safe_sub_func_int8_t_s_s(l_610, 9))
                {
                    int l_680 = 3L;
                    int l_688 = 1L;
                    if ((((p_16.f0.f2 <= p_18.f2) < ((safe_sub_func_int32_t_s_s((0xDD83E569L ^ l_680), l_660.f6)) == (safe_add_func_uint16_t_u_u(l_683, ((safe_add_func_int32_t_s_s(l_514.f2, (g_460.f3 != ((((l_680 & l_680) <= (-1L)) == p_16.f0.f1) != g_100.f1)))) > g_127.f4))))) > (-5L)))
                    {
                        if (l_683)
                            break;
                        if (p_16.f3)
                            continue;
                        l_688 = (safe_sub_func_uint16_t_u_u(l_659.f0.f2, 1L));
                    }
                    else
                    {
                        g_460.f0 = g_127;
                        if (g_127.f2)
                            break;
                        p_16.f0 = g_460.f0;
                        l_659.f0.f6 &= (-4L);
                    }
                    l_514.f6 = (g_460.f0.f4 || 4294967295UL);
                }
                for (g_460.f0.f1 = 9; (g_460.f0.f1 < 55); g_460.f0.f1 = safe_add_func_uint16_t_u_u(g_460.f0.f1, 1))
                {
                    int l_696 = 0x8A31959FL;
                    int l_697[9][8][3] = {{{1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}}, {{1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}}, {{1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}}, {{1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}}, {{1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}}, {{1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}}, {{1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}}, {{1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}}, {{1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}, {1L, 0x58B19664L, 0x8EE59B8AL}}};
                    int i, j, k;
                    for (g_127.f6 = (-8); (g_127.f6 != (-9)); g_127.f6--)
                    {
                        const struct S0 l_693 = {0x76A7L,0UL,4L,254UL,7L,4294967295UL,1L};
                        g_128.f0.f6 = 0xCAC0B2F1L;
                        if (p_16.f0.f0)
                            break;
                        p_16.f0 = l_693;
                    }
                    g_301 = g_100;
                    if (g_128.f0.f1)
                    {
                        if (l_552)
                            break;
                        l_697[2][3][2] |= (safe_rshift_func_uint16_t_u_s((l_696 == (0xED4DDDD0L > (0xDE63L != g_128.f0.f5))), g_100.f4));
                        p_16.f0.f6 = 4L;
                    }
                    else
                    {
                        g_94[1] &= g_128.f0.f2;
                        if (g_128.f1)
                            continue;
                    }
                }
            }
        }
    }
    if (g_128.f0.f0)
    {
        unsigned char l_698 = 255UL;
        int l_729 = 0x4A05C657L;
        struct S0 l_813 = {0xE4FFL,7UL,0x6EL,247UL,0x6BFAL,0UL,0x0BA00332L};
        unsigned l_844[2][3][8] = {{{0x384AC232L, 4294967295UL, 1UL, 0x7E1405E4L, 1UL, 4294967295UL, 0x384AC232L, 0x90ADCA77L}, {0x384AC232L, 4294967295UL, 1UL, 0x7E1405E4L, 1UL, 4294967295UL, 0x384AC232L, 0x90ADCA77L}, {0x384AC232L, 4294967295UL, 1UL, 0x7E1405E4L, 1UL, 4294967295UL, 0x384AC232L, 0x90ADCA77L}}, {{0x384AC232L, 4294967295UL, 1UL, 0x7E1405E4L, 1UL, 4294967295UL, 0x384AC232L, 0x90ADCA77L}, {0x384AC232L, 4294967295UL, 1UL, 0x7E1405E4L, 1UL, 4294967295UL, 0x384AC232L, 0x90ADCA77L}, {0x384AC232L, 4294967295UL, 1UL, 0x7E1405E4L, 1UL, 4294967295UL, 0x384AC232L, 0x90ADCA77L}}};
        int i, j, k;
        for (g_301.f4 = 5; (g_301.f4 >= 0); g_301.f4 -= 1)
        {
            struct S0 l_728 = {0x1559L,0UL,0x2FL,0xCDL,-1L,5UL,-3L};
            short l_757 = (-1L);
            for (g_301.f5 = 0; (g_301.f5 <= 5); g_301.f5 += 1)
            {
                unsigned short l_706 = 65535UL;
                struct S0 l_727 = {0x2536L,0xE595L,1L,0xD9L,0L,4294967287UL,0xB0932710L};
                for (g_128.f0.f5 = 1; (g_128.f0.f5 <= 5); g_128.f0.f5 += 1)
                {
                    struct S0 l_699 = {0x060DL,7UL,0x7BL,1UL,-1L,4294967295UL,6L};
                    for (g_460.f0.f0 = 1; (g_460.f0.f0 <= 5); g_460.f0.f0 += 1)
                    {
                        int i;
                        l_698 |= g_94[g_460.f0.f0];
                        if (l_660.f1)
                            break;
                        p_16.f0 = l_699;
                        l_552 &= 0x5C3EC9E3L;
                    }
                    for (l_699.f4 = 0; (l_699.f4 <= 5); l_699.f4 += 1)
                    {
                        int i;
                        g_94[l_699.f4] = (safe_lshift_func_int8_t_s_s(g_94[g_301.f4], 2));
                        g_127.f6 = (safe_lshift_func_int8_t_s_u(g_460.f0.f2, 0));
                        if (p_16.f3)
                            continue;
                        l_706 = (safe_lshift_func_uint8_t_u_u(0xE1L, p_14));
                    }
                }
                for (p_16.f0.f6 = 10; (p_16.f0.f6 == 1); p_16.f0.f6 = safe_sub_func_uint16_t_u_u(p_16.f0.f6, 9))
                {
                    return g_460.f1;
                }
                if (g_106)
                    continue;
                p_18.f6 = (((safe_rshift_func_int16_t_s_s(0xD43FL, 6)) ^ ((g_460.f0.f0 || (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((!(-5L)), (safe_mod_func_uint16_t_u_u(func_34(p_18.f1, ((safe_lshift_func_int16_t_s_s(p_16.f0.f6, 14)) < (((func_46((p_16.f0.f6 < g_100.f0), l_727, g_460, l_728) ^ l_727.f3) <= l_577) >= l_728.f6)), l_729, g_460.f2, l_727.f4), l_728.f2)))), l_727.f1)), l_727.f0)), 0)) || l_728.f3), l_730[1]))) == 3L)) | 1L);
            }
            p_16.f0.f6 = (65535UL | ((safe_sub_func_int16_t_s_s(l_729, (safe_rshift_func_int8_t_s_u(((((safe_sub_func_uint8_t_u_u((g_468 > (246UL > (((safe_lshift_func_int8_t_s_s(g_127.f2, 3)) && 0x47FFL) != p_16.f0.f6))), 250UL)) > g_7) & l_660.f1) == l_728.f0), p_16.f0.f6)))) || 1UL));
            if (p_16.f0.f5)
                break;
            for (l_728.f6 = 1; (l_728.f6 <= 5); l_728.f6 += 1)
            {
                int l_741 = 0x3BCA59A6L;
                struct S0 l_778 = {0xBA3CL,0x8CE0L,1L,0UL,0x8C81L,1UL,0x89C42F83L};
                for (g_95 = 0; (g_95 <= 5); g_95 += 1)
                {
                    struct S0 l_750 = {-1L,1UL,0xBBL,6UL,0x371AL,0UL,-3L};
                    unsigned l_761 = 0xCA2ABF08L;
                    unsigned l_764[9] = {0xAD4CC27DL, 0x320C2F80L, 0xAD4CC27DL, 0x320C2F80L, 0xAD4CC27DL, 0x320C2F80L, 0xAD4CC27DL, 0x320C2F80L, 0xAD4CC27DL};
                    int i;
                    if ((safe_mod_func_uint16_t_u_u((func_60((((g_94[g_95] || l_730[(l_728.f6 + 1)]) >= l_741) | g_468), l_502, g_94[g_95]) == 250UL), 0x9CE1L)))
                    {
                        int i;
                        g_94[g_301.f4] |= p_15;
                        g_128.f0 = g_460.f0;
                    }
                    else
                    {
                        int i;
                        g_94[l_728.f6] = (safe_sub_func_uint16_t_u_u((func_19(l_741, g_94[g_95], (safe_rshift_func_uint8_t_u_s(p_18.f4, 6)), ((g_362 || (p_16.f1 || (safe_sub_func_uint16_t_u_u((g_94[1] && ((((p_16.f3 == ((g_100.f1 & (safe_sub_func_int8_t_s_s(g_127.f3, g_94[g_95]))) && 0x5225L)) >= g_460.f1) | 0UL) <= g_100.f6)), g_100.f1)))) <= 0xB46FL), p_16.f1) || p_16.f0.f2), g_460.f0.f5));
                        g_128.f0 = l_750;
                        if (g_94[l_728.f6])
                            break;
                        p_16.f0.f6 = 0x6739C31BL;
                    }
                    if (p_16.f3)
                    {
                        p_16.f0.f6 |= (safe_add_func_int32_t_s_s(0L, (l_728.f6 < ((g_460.f3 > (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_750.f5, (l_729 < p_18.f6))), l_757))) && l_750.f1))));
                        if (g_127.f3)
                            goto lbl_758;
                        l_660 = p_18;
                    }
                    else
                    {
                        struct S1 l_769 = {{0x82BDL,0xBB70L,-1L,1UL,0xFC78L,0x41D21382L,0x736595EFL},1UL,1UL,-10L,1L};
                        g_127.f6 ^= ((safe_sub_func_uint8_t_u_u(0xE4L, ((+0L) & l_761))) || ((safe_mod_func_uint8_t_u_u(l_764[8], (safe_add_func_int16_t_s_s(func_19(l_587, func_19(p_16.f3, g_128.f1, ((safe_mod_func_int8_t_s_s(p_16.f0.f2, p_16.f2)) || g_128.f4), l_741, g_128.f0.f0), g_100.f1, g_127.f2, g_128.f0.f1), g_127.f4)))) < p_15));
                        if (p_16.f0.f1)
                            break;
                        l_769.f0.f6 = func_46(g_301.f6, g_100, l_769, l_660);
                    }
                    for (g_460.f0.f0 = (-19); (g_460.f0.f0 > (-17)); g_460.f0.f0 = safe_add_func_uint16_t_u_u(g_460.f0.f0, 4))
                    {
                        g_94[1] = l_741;
                        p_18.f6 |= l_730[2];
                        l_741 &= (p_16.f4 == func_60(g_460.f0.f1, g_128.f0.f0, (~((0xDDC3L ^ ((safe_mod_func_uint32_t_u_u(((-1L) < (0x0ACCL == g_460.f0.f6)), l_660.f2)) != (safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((p_16.f0.f2 < p_16.f0.f6), 0x45L)), g_460.f0.f0)))) != 246UL))));
                    }
                }
                l_778 = p_18;
            }
        }
        if ((l_644 <= 1L))
        {
            unsigned short l_779 = 0UL;
            g_468 |= (p_16.f0.f2 == (g_460.f1 || l_779));
        }
        else
        {
            struct S1 l_812 = {{1L,65532UL,0xC1L,0x2FL,3L,0xCF067976L,-1L},0x771AEFE2L,0x7022L,0x957DL,0xFB70L};
            for (g_460.f0.f5 = 0; (g_460.f0.f5 < 30); g_460.f0.f5 = safe_add_func_int8_t_s_s(g_460.f0.f5, 8))
            {
                unsigned l_802 = 0x8AC527A8L;
                for (l_660.f6 = 0; (l_660.f6 <= 23); l_660.f6++)
                {
                    p_16.f0.f6 = l_729;
                    if (g_301.f1)
                        continue;
                }
                p_16.f0 = p_16.f0;
                l_729 = func_55((p_18.f4 < (safe_mod_func_uint8_t_u_u((((((0x9BL != g_128.f4) >= (p_16.f0.f4 & (safe_rshift_func_uint16_t_u_u(g_95, 13)))) & (safe_lshift_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((p_16.f0.f0 > ((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((-10L) > ((0UL & ((safe_sub_func_int32_t_s_s((p_18.f4 > g_460.f0.f6), l_698)) ^ p_16.f0.f6)) && 1L)), 14)), 0xDB17L)), 5L)) || l_802), g_460.f3)) & l_803)), l_802)) || 4294967293UL) & g_127.f3), 12))) | 65532UL) && p_16.f0.f5), 0x93L))), l_660.f1);
                l_729 = ((((safe_add_func_int32_t_s_s((4L && l_802), (0x74D6F881L <= (((func_60(l_729, l_660.f5, (safe_lshift_func_int16_t_s_s(p_16.f0.f6, 3))) && ((((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(p_16.f0.f3, func_46(p_16.f0.f4, l_660, l_812, l_813))), 1UL)) || p_18.f0) != 6L) == g_128.f0.f1)) == g_301.f6) != 0xA0444DAFL)))) == g_460.f0.f6) == g_460.f0.f2) == (-1L));
            }
        }
        for (p_18.f5 = 0; (p_18.f5 == 2); p_18.f5 = safe_add_func_int16_t_s_s(p_18.f5, 1))
        {
            const unsigned l_820 = 0xD6A3BA31L;
            struct S0 l_823 = {0xC2B5L,0xDD2FL,-5L,0x3AL,0xEEEDL,0UL,-6L};
            if (g_100.f0)
            {
                char l_821 = 0L;
                for (l_813.f6 = 21; (l_813.f6 == 16); --l_813.f6)
                {
                    l_821 = (safe_lshift_func_int8_t_s_s(l_820, 3));
                }
                if ((((+func_46(p_15, p_16.f0, l_822, l_823)) | (0x356EL >= ((safe_add_func_uint32_t_u_u((((func_60(g_127.f3, (((safe_mod_func_int8_t_s_s((((((0x1BL > (-1L)) || g_127.f6) != g_460.f3) <= l_823.f6) ^ 0x82L), 7L)) != g_301.f0) ^ l_823.f0), l_729) & g_460.f0.f4) > g_127.f2) && l_660.f6), l_813.f2)) || g_128.f0.f1))) ^ 1UL))
                {
                    int l_828 = 0L;
                    g_468 ^= (l_828 > (safe_lshift_func_uint16_t_u_s(0UL, (safe_mod_func_uint16_t_u_u(l_828, (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_u(func_26((safe_mod_func_int32_t_s_s(l_823.f1, ((3L || ((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((g_127.f2 != ((+(((g_100.f5 || p_16.f0.f2) || 1UL) ^ p_16.f3)) != g_127.f6)) >= p_18.f0), g_460.f0.f5)), l_823.f1)), g_301.f0)) || 7L)) && l_823.f4))), p_18.f2, l_822, p_18.f3, l_844[0][2][0]), p_14)))))))));
                    g_100 = g_460.f0;
                }
                else
                {
                    unsigned short l_845 = 65527UL;
                    const unsigned short l_846 = 0UL;
                    char l_849 = (-1L);
                    int l_850 = 0L;
                    for (g_460.f2 = 0; (g_460.f2 <= 5); g_460.f2 += 1)
                    {
                        int i;
                        l_845 |= g_94[g_460.f2];
                        return g_94[g_460.f2];
                    }
                    g_468 ^= (((func_34((l_846 && (safe_sub_func_uint8_t_u_u(((l_823.f5 >= 1UL) != (p_16.f3 && (((((0x3FL == ((g_94[3] <= (l_844[0][2][0] > func_46(l_729, p_16.f0, g_128, p_16.f0))) ^ l_813.f0)) >= l_849) || l_729) > p_16.f0.f1) | p_16.f0.f6))), l_823.f4))), p_16.f2, p_16.f0.f4, p_18.f1, g_301.f4) <= 0x0CL) < g_128.f2) >= g_460.f0.f1);
                    l_850 ^= l_660.f4;
                }
            }
            else
            {
                struct S0 l_853 = {0x0975L,0xB94AL,1L,0x2CL,2L,0x3637ABE6L,0xD8313C7DL};
                for (g_100.f1 = (-3); (g_100.f1 < 16); g_100.f1 = safe_add_func_int32_t_s_s(g_100.f1, 8))
                {
                    p_16.f0 = g_128.f0;
                    l_853 = g_460.f0;
                }
                if (l_823.f4)
                    break;
            }
        }
        for (g_128.f4 = 6; (g_128.f4 <= 7); ++g_128.f4)
        {
            short l_856 = 0L;
            if (func_60(g_460.f0.f1, l_856, g_100.f3))
            {
                for (g_301.f6 = 11; (g_301.f6 >= (-11)); g_301.f6 = safe_sub_func_uint16_t_u_u(g_301.f6, 6))
                {
                    return g_128.f0.f2;
                }
                if (g_127.f0)
                    break;
            }
            else
            {
                unsigned l_859 = 4294967295UL;
                return l_859;
            }
            if (l_822.f0.f5)
                continue;
        }
    }
    else
    {
        struct S0 l_860 = {-4L,0xDCAFL,-1L,0x66L,0x65E8L,4294967295UL,0x32A3C016L};
        p_16.f0 = l_860;
    }
    return g_460.f0.f2;
}







static int func_19(unsigned p_20, int p_21, unsigned p_22, unsigned p_23, unsigned p_24)
{
    short l_469 = 0L;
    p_21 = (l_469 && (p_20 ^ 0x7D18402DL));
    return l_469;
}







static int func_26(int p_27, unsigned char p_28, struct S1 p_29, unsigned char p_30, int p_31)
{
    char l_286[8];
    unsigned char l_300[10][8][3] = {{{0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}}, {{0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}}, {{0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}}, {{0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}}, {{0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}}, {{0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}}, {{0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}}, {{0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}}, {{0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}}, {{0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}, {0xF4L, 0x01L, 0x8CL}}};
    struct S0 l_328 = {0xB19EL,2UL,0x00L,0x2AL,0x5384L,4294967293UL,0x1FEB4B3AL};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_286[i] = 0xF6L;
    for (g_128.f0.f1 = 0; (g_128.f0.f1 <= 5); g_128.f0.f1 += 1)
    {
        int l_297 = (-7L);
        unsigned l_307 = 1UL;
        int l_310 = 8L;
        int i;
        for (g_128.f4 = 5; (g_128.f4 >= 1); g_128.f4 -= 1)
        {
            int l_285[3][4][4] = {{{0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}, {0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}, {0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}, {0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}}, {{0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}, {0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}, {0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}, {0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}}, {{0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}, {0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}, {0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}, {0xA352F5B1L, 0L, 0xA352F5B1L, 0xE1613AEFL}}};
            unsigned short l_287 = 0x9864L;
            unsigned char l_288 = 253UL;
            int i, j, k;
            for (g_100.f1 = 0; (g_100.f1 <= 5); g_100.f1 += 1)
            {
                int i;
                g_94[g_100.f1] = g_94[g_128.f4];
                return g_128.f0.f2;
            }
            l_288 &= (safe_unary_minus_func_uint32_t_u(((func_60((safe_sub_func_uint16_t_u_u(func_60((255UL && ((g_100.f3 ^ (safe_sub_func_int32_t_s_s(l_285[2][1][3], (func_60(((p_29.f4 && l_285[2][0][0]) == (g_127.f1 != p_31)), l_285[1][0][3], g_127.f2) || l_286[3])))) == g_128.f2)), l_287, g_100.f1), 0UL)), l_285[0][3][0], l_287) < g_128.f0.f3) < 0xA5L)));
        }
        g_94[g_128.f0.f1] = (safe_mod_func_int32_t_s_s(1L, (+(((safe_sub_func_int8_t_s_s(((g_94[g_128.f0.f1] & ((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(g_94[g_128.f0.f1], l_297)), ((safe_mod_func_int16_t_s_s(g_100.f2, func_60((~(p_29.f0.f2 < p_28)), p_29.f3, p_29.f3))) != l_300[3][4][1]))) ^ l_297)) > g_127.f2), 0xD6L)) != p_29.f0.f5) == g_94[1]))));
        if ((g_100.f1 >= func_46(g_128.f0.f5, g_301, p_29, p_29.f0)))
        {
            unsigned char l_306 = 1UL;
            int i;
            l_310 &= (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((g_301.f6 & func_55(l_306, g_100.f2)), g_7)) ^ (!((l_307 || l_306) & p_29.f0.f6))), (safe_sub_func_int16_t_s_s((p_29.f1 == 4UL), 1L))));
        }
        else
        {
            short l_311 = 0x3642L;
            struct S1 l_312[6][1][8] = {{{{{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}}}, {{{{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}}}, {{{{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}}}, {{{{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}}}, {{{{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}}}, {{{{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0xFB4DL,0x13ECL,0xE0L,0xC5L,0xA47BL,4294967295UL,0x8662B628L},0xBCA930C2L,1UL,0x4C6EL,0xBD32L}, {{0x5CFCL,0UL,-2L,0x64L,0x928EL,0x8292C22BL,0x96630E17L},0UL,5UL,0xF2CCL,0x17D6L}, {{0x8CB8L,0xEE07L,0x89L,0x16L,0x8A70L,4294967287UL,5L},9UL,65529UL,0xEF6BL,0x93FCL}}}};
            int i, j, k;
            g_301.f6 |= (((0xDFL || g_128.f0.f5) < ((-1L) == func_55(func_46(l_311, g_127, l_312[1][0][1], g_128.f0), (func_55(g_94[g_128.f0.f1], g_313) != 0x02CF8605L)))) >= 2UL);
            if ((safe_add_func_int32_t_s_s((((p_28 & 1L) | (safe_unary_minus_func_uint8_t_u(p_29.f0.f1))) >= (safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((p_29.f0.f1 <= 0xBF8FL) != ((safe_unary_minus_func_int16_t_s(1L)) != (safe_mod_func_int16_t_s_s(g_128.f0.f2, (safe_mod_func_int8_t_s_s(func_46(l_300[3][4][1], g_128.f0, p_29, g_301), l_312[1][0][1].f0.f1)))))), 3)), 14)) ^ 0x29L) && g_301.f2) && 1L), 4))), p_29.f0.f6)))
            {
                l_328 = g_301;
            }
            else
            {
                for (l_297 = 4; (l_297 >= 0); l_297 -= 1)
                {
                    int i;
                    g_94[g_128.f0.f1] = (0xFB614299L != 4294967293UL);
                    return g_94[l_297];
                }
            }
        }
    }
lbl_363:
    l_328.f6 = (g_301.f5 < ((p_29.f0.f0 < p_28) > (safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_mod_func_int16_t_s_s((l_328.f3 == (!((p_31 == ((l_328.f1 < (safe_lshift_func_uint16_t_u_s(((func_46(p_28, l_328, func_32(l_286[3]), p_29.f0) > p_29.f4) && 1UL), 10))) ^ p_29.f3)) == 1UL))), l_286[3])))) < l_300[3][4][1]), 0UL))));
lbl_463:
    for (g_128.f4 = 5; (g_128.f4 >= 0); g_128.f4 -= 1)
    {
        int l_336 = 0x4A80F5F4L;
        int l_337 = 7L;
        struct S1 l_446[7][3] = {{{{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}}, {{{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}}, {{{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}}, {{{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}}, {{{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}}, {{{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}}, {{{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}, {{0xD2F8L,0xAEC5L,0x84L,0UL,0xBC0DL,0x96CDBC2AL,-1L},4294967295UL,0xABA5L,3L,1L}}};
        int l_452[6] = {1L, 1L, 0L, 1L, 1L, 0L};
        int i, j;
        for (g_127.f0 = 1; (g_127.f0 <= 7); g_127.f0 += 1)
        {
            struct S1 l_348 = {{0x8B60L,0x7CA7L,0x5AL,250UL,0xF590L,1UL,0xF632B080L},4294967295UL,1UL,0x8343L,0xF57CL};
            unsigned short l_383[9][3] = {{0x4A61L, 65535UL, 1UL}, {0x4A61L, 65535UL, 1UL}, {0x4A61L, 65535UL, 1UL}, {0x4A61L, 65535UL, 1UL}, {0x4A61L, 65535UL, 1UL}, {0x4A61L, 65535UL, 1UL}, {0x4A61L, 65535UL, 1UL}, {0x4A61L, 65535UL, 1UL}, {0x4A61L, 65535UL, 1UL}};
            const char l_386 = 4L;
            int l_410 = 0x76FB60CAL;
            int l_428 = 0x8A605787L;
            int i, j;
            if (l_286[g_127.f0])
                break;
            l_337 ^= l_336;
            if ((func_55((1L ^ 5UL), (l_328.f2 ^ g_94[5])) > func_60((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_29.f1, ((((safe_mod_func_uint32_t_u_u(p_29.f0.f3, (safe_mod_func_int32_t_s_s(((((4294967286UL < (((((func_46(g_127.f6, g_301, p_29, p_29.f0) > l_328.f3) | p_28) && 0L) | l_328.f3) != l_300[8][3][2])) > 0xA58EL) > 0UL) && p_29.f0.f0), g_128.f4)))) | l_336) <= g_7) <= p_29.f0.f1))), 3)), l_286[6], l_328.f2)))
            {
                int l_361[1];
                int l_364[5][3];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_361[i] = (-1L);
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_364[i][j] = 1L;
                }
                for (g_100.f0 = 7; (g_100.f0 >= 0); g_100.f0 -= 1)
                {
                    g_94[1] = g_128.f1;
                    for (p_29.f4 = 7; (p_29.f4 >= 0); p_29.f4 -= 1)
                    {
                        int i;
                        g_94[4] = (((((+(func_46(l_286[p_29.f4], p_29.f0, l_348, g_128.f0) && 0x71ACL)) ^ p_30) & (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(func_60((~((safe_rshift_func_int16_t_s_u((func_60(l_328.f5, ((safe_mod_func_int16_t_s_s(func_60(func_60(g_128.f1, p_29.f1, g_313), g_128.f0.f0, g_128.f1), l_348.f0.f5)) >= g_301.f1), l_336) == l_361[0]), g_362)) <= p_31)), p_30, g_100.f3), g_94[1])), p_28)), g_128.f0.f0)), p_29.f4))) <= 0x85L) | 0x07L);
                        if (p_29.f0.f5)
                            goto lbl_363;
                    }
                    g_100.f6 = g_128.f0.f1;
                    l_364[4][1] = p_29.f0.f6;
                }
                if (l_336)
                    break;
                if (g_100.f0)
                    continue;
                p_29.f0 = g_100;
            }
            else
            {
                struct S1 l_367 = {{0x5DBAL,65535UL,0xCBL,0UL,-7L,0UL,0xF48B73A5L},1UL,1UL,9L,0L};
                struct S0 l_391 = {-1L,0xEBDBL,0x00L,8UL,0L,4294967295UL,-10L};
                int l_404 = 0L;
                if (((+p_29.f0.f0) <= (((safe_rshift_func_uint8_t_u_s((((func_46(p_30, l_328, l_367, g_301) & (0x88L || (safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(0x6485BB7CL, (safe_rshift_func_uint8_t_u_u(((((func_60((safe_add_func_int8_t_s_s(g_127.f2, l_348.f0.f1)), l_367.f1, g_100.f0) < g_128.f2) | g_94[5]) || 0x3A2DL) < 6UL), 2)))) < 0UL), 0xA47AF283L)))) > 0x3AL) || 0xABC1L), 0)) | l_328.f2) <= 252UL)))
                {
                    for (p_31 = 5; (p_31 >= 0); p_31 -= 1)
                    {
                        char l_378 = (-3L);
                        l_383[6][1] ^= ((g_362 > (0xC5BE1E5BL && (l_378 || (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_301.f2, l_328.f1)), 0))))) == l_286[g_127.f0]);
                        return p_29.f4;
                    }
                    l_337 = g_94[1];
                    l_336 |= (((safe_rshift_func_uint8_t_u_u((l_337 || l_386), 3)) ^ (((0x78D2L || (g_100.f1 <= ((safe_mod_func_uint16_t_u_u(4UL, p_29.f0.f6)) > func_46(g_362, l_391, p_29, p_29.f0)))) != 0L) || l_367.f0.f3)) || 251UL);
                }
                else
                {
                    int l_405[9][3] = {{(-1L), 1L, 0xF9D40536L}, {(-1L), 1L, 0xF9D40536L}, {(-1L), 1L, 0xF9D40536L}, {(-1L), 1L, 0xF9D40536L}, {(-1L), 1L, 0xF9D40536L}, {(-1L), 1L, 0xF9D40536L}, {(-1L), 1L, 0xF9D40536L}, {(-1L), 1L, 0xF9D40536L}, {(-1L), 1L, 0xF9D40536L}};
                    int i, j;
                    l_405[1][1] &= (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((1UL ^ (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_28, (safe_mod_func_uint32_t_u_u(g_362, l_367.f0.f1)))), func_60((safe_add_func_int32_t_s_s((((func_60(l_348.f0.f5, (p_29.f0.f6 || ((+g_100.f5) != (+0x6785D5D5L))), (255UL != g_128.f3)) < 2L) & 0x94C5L) ^ p_31), 0x23791C26L)), p_29.f0.f2, p_29.f0.f3)))), l_404)), 0xFC01L));
                }
                l_328.f6 ^= (p_30 & 0x2E0EE37AL);
                for (l_348.f0.f6 = 0; (l_348.f0.f6 <= 2); l_348.f0.f6 += 1)
                {
                    int i, j;
                    l_410 |= (safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(0UL, l_383[(g_128.f4 + 1)][l_348.f0.f6])), (l_383[(g_127.f0 + 1)][l_348.f0.f6] & (g_127.f3 == p_29.f0.f6))));
                    p_29.f0.f6 &= p_29.f3;
                    for (l_391.f0 = 2; (l_391.f0 >= 0); l_391.f0 -= 1)
                    {
                        int l_419[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_419[i] = 0x6E392D2BL;
                        if (g_94[(l_391.f0 + 3)])
                            break;
                        if (g_94[(l_391.f0 + 3)])
                            continue;
                        p_29.f0.f6 = func_60(((((((safe_lshift_func_int16_t_s_s(p_30, 1)) < 1L) ^ g_127.f3) & (safe_sub_func_uint8_t_u_u((func_55((safe_sub_func_uint8_t_u_u(0xFAL, p_29.f0.f6)), (safe_rshift_func_int16_t_s_u(g_301.f4, 8))) ^ 0xC2L), p_29.f3))) && 255UL) <= l_419[1]), g_127.f2, l_367.f3);
                        l_410 ^= func_46(p_29.f0.f6, p_29.f0, g_128, g_100);
                    }
                    g_301.f6 = (safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((p_29.f0.f1 == p_30), 0x77L)) ^ l_428) <= (l_336 ^ l_328.f6)), ((((((((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_s(0xEBDBL, 14)) <= 0x075C9DB5L) | (g_301.f3 || g_128.f1)) <= g_127.f2), 4)) | 1L) | 1UL) < g_100.f0) != 0x6B4E82D9L) | 3L) ^ 255UL) != l_336))) <= p_29.f0.f3), 0UL)), g_128.f0.f6));
                }
            }
            if ((safe_add_func_uint16_t_u_u((!(((safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((0x36L != (l_386 >= (g_128.f0.f5 <= (4294967293UL > (0x874AB4F3L < 0xB56BBB57L))))), (safe_sub_func_int8_t_s_s(0xA1L, (l_336 < (g_94[1] <= 8L)))))) <= p_31), l_328.f1)) ^ g_127.f0) >= l_328.f4)), g_100.f5)))
            {
                g_301 = p_29.f0;
            }
            else
            {
                struct S0 l_443[8][4] = {{{8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}}, {{8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}}, {{8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}}, {{8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}}, {{8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}}, {{8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}}, {{8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}}, {{8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}, {8L,0xFA5BL,1L,0xF2L,0x266AL,0UL,0L}}};
                int i, j;
                l_443[0][1] = g_128.f0;
            }
        }
        l_328.f6 = ((safe_sub_func_int16_t_s_s((p_29.f2 >= func_46(g_100.f1, g_301, l_446[5][2], p_29.f0)), (safe_lshift_func_int8_t_s_u((func_60(l_328.f4, func_60(g_128.f0.f1, (safe_lshift_func_uint8_t_u_s(g_301.f5, 2)), g_128.f2), p_29.f0.f0) >= l_337), 3)))) | 1L);
        for (g_128.f0.f4 = 0; (g_128.f0.f4 <= 7); g_128.f0.f4 += 1)
        {
            unsigned l_451 = 0x73DC524EL;
            for (l_328.f3 = 0; (l_328.f3 <= 7); l_328.f3 += 1)
            {
                return g_128.f0.f1;
            }
            for (g_100.f6 = 7; (g_100.f6 >= 0); g_100.f6 -= 1)
            {
                struct S0 l_459 = {0x6529L,0x741AL,-1L,0x70L,-1L,0UL,-2L};
                l_337 |= (l_451 >= func_46(((l_452[4] > (safe_add_func_uint16_t_u_u(g_127.f4, ((func_60(p_29.f1, l_451, ((safe_lshift_func_int8_t_s_u(l_328.f3, ((safe_add_func_int16_t_s_s(func_46((((g_128.f0.f6 == (4294967295UL & g_94[1])) >= g_362) > 0L), p_29.f0, p_29, l_459), g_100.f1)) != 0x9FF2L))) | 0x8D044825L)) ^ p_28) >= l_300[0][3][0])))) < p_29.f0.f5), p_29.f0, g_460, l_459));
                for (l_328.f6 = 2; (l_328.f6 <= 7); l_328.f6 += 1)
                {
                    int i;
                    g_94[4] &= (safe_lshift_func_uint8_t_u_s(0x93L, 7));
                    if (l_452[g_128.f4])
                        break;
                }
                g_301.f6 = (-1L);
                if (l_459.f1)
                    goto lbl_463;
            }
        }
    }
    l_328.f6 = ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_127.f5, 7)), 10)) ^ l_286[7]);
    return l_328.f5;
}







static struct S1 func_32(int p_33)
{
    int l_64 = 0L;
    const int l_126[1] = {0xC2273286L};
    struct S0 l_129 = {0L,65535UL,4L,0x86L,0x87C1L,0xE54454DEL,-5L};
    struct S0 l_183[3] = {{0xF798L,0x0782L,0x91L,9UL,0L,0xE9DAC5E5L,0x6FC0C68FL}, {0xF798L,0x0782L,0x91L,9UL,0L,0xE9DAC5E5L,0x6FC0C68FL}, {0xF798L,0x0782L,0x91L,9UL,0L,0xE9DAC5E5L,0x6FC0C68FL}};
    char l_200[5] = {(-5L), 0L, (-5L), 0L, (-5L)};
    struct S1 l_261 = {{-1L,0xBA66L,0x77L,6UL,0xE26FL,1UL,0xF623326BL},4294967295UL,0xE186L,-1L,-1L};
    const int l_267 = 0xEA1D27C7L;
    int i;
    if ((func_34((safe_sub_func_int32_t_s_s(p_33, g_7)), p_33, (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((func_46((safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((((p_33 & ((func_55(g_7, (safe_sub_func_int8_t_s_s(func_60(l_64, (g_7 != (safe_mod_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s((l_64 & (((((p_33 | 0x90L) | 4L) == 0xA1B6174EL) >= p_33) && g_7)), l_64)) | l_64) > g_7), l_64))), g_7), g_7))) > g_7) == 0x8CEC1B3EL)) != p_33) > l_64) > l_64) || 0xC59DL), p_33)) != l_64), l_126[0])), g_127, g_128, l_129) & p_33), 1)), 0x6BAC349CL)), g_128.f2, p_33) ^ l_129.f1))
    {
        struct S0 l_182 = {0x3E55L,0xF61EL,0xE0L,0x1DL,0x2A65L,0x022EB11DL,0xCF7767CEL};
        int l_192[10][9] = {{0x1E7CC754L, (-1L), (-1L), 0x73FBF912L, 0x598B75F5L, 0xEB76DF17L, 0xEB76DF17L, 0x598B75F5L, 0x73FBF912L}, {0x1E7CC754L, (-1L), (-1L), 0x73FBF912L, 0x598B75F5L, 0xEB76DF17L, 0xEB76DF17L, 0x598B75F5L, 0x73FBF912L}, {0x1E7CC754L, (-1L), (-1L), 0x73FBF912L, 0x598B75F5L, 0xEB76DF17L, 0xEB76DF17L, 0x598B75F5L, 0x73FBF912L}, {0x1E7CC754L, (-1L), (-1L), 0x73FBF912L, 0x598B75F5L, 0xEB76DF17L, 0xEB76DF17L, 0x598B75F5L, 0x73FBF912L}, {0x1E7CC754L, (-1L), (-1L), 0x73FBF912L, 0x598B75F5L, 0xEB76DF17L, 0xEB76DF17L, 0x598B75F5L, 0x73FBF912L}, {0x1E7CC754L, (-1L), (-1L), 0x73FBF912L, 0x598B75F5L, 0xEB76DF17L, 0xEB76DF17L, 0x598B75F5L, 0x73FBF912L}, {0x1E7CC754L, (-1L), (-1L), 0x73FBF912L, 0x598B75F5L, 0xEB76DF17L, 0xEB76DF17L, 0x598B75F5L, 0x73FBF912L}, {0x1E7CC754L, (-1L), (-1L), 0x73FBF912L, 0x598B75F5L, 0xEB76DF17L, 0xEB76DF17L, 0x598B75F5L, 0x73FBF912L}, {0x1E7CC754L, (-1L), (-1L), 0x73FBF912L, 0x598B75F5L, 0xEB76DF17L, 0xEB76DF17L, 0x598B75F5L, 0x73FBF912L}, {0x1E7CC754L, (-1L), (-1L), 0x73FBF912L, 0x598B75F5L, 0xEB76DF17L, 0xEB76DF17L, 0x598B75F5L, 0x73FBF912L}};
        int i, j;
        l_183[0] = l_182;
        l_192[2][2] &= (safe_add_func_uint32_t_u_u(((p_33 > l_129.f6) & (((6UL < func_34(l_183[0].f6, p_33, (((safe_lshift_func_uint8_t_u_s(1UL, g_127.f2)) >= ((safe_add_func_uint8_t_u_u(((-7L) | (safe_rshift_func_int8_t_s_u(l_182.f0, 3))), l_182.f6)) != p_33)) >= p_33), g_128.f0.f3, l_129.f4)) < g_128.f3) != g_128.f4)), (-1L)));
    }
    else
    {
        struct S0 l_193[3] = {{2L,1UL,9L,0x33L,-8L,0x62D5FF5CL,0x839FE8C3L}, {2L,1UL,9L,0x33L,-8L,0x62D5FF5CL,0x839FE8C3L}, {2L,1UL,9L,0x33L,-8L,0x62D5FF5CL,0x839FE8C3L}};
        char l_233[9][6][4] = {{{0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}}, {{0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}}, {{0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}}, {{0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}}, {{0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}}, {{0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}}, {{0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}}, {{0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}}, {{0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}, {0xD5L, 0x8BL, 0xBEL, 0L}}};
        int i, j, k;
lbl_273:
        g_100 = l_193[2];
        for (l_129.f1 = 0; (l_129.f1 <= 5); l_129.f1 += 1)
        {
            unsigned short l_201 = 0xB12AL;
            int i;
            g_94[l_129.f1] = ((((func_55((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(g_128.f0.f0, func_60(g_128.f0.f5, (safe_rshift_func_int16_t_s_s(p_33, 3)), (l_200[1] >= l_201)))) == func_60(p_33, g_100.f6, l_193[2].f5)) <= g_127.f2), 4)), p_33) != 0x7DL) | 0xECL) ^ 0xDFDA9B5FL) >= 0x306F493AL);
            if (((safe_lshift_func_uint16_t_u_u(((p_33 == (!((safe_lshift_func_uint16_t_u_s(0x84E3L, 14)) == 0xBAFAL))) || (safe_mod_func_int8_t_s_s((!(((safe_unary_minus_func_int16_t_s(l_201)) == (p_33 < (((~(safe_add_func_int32_t_s_s(func_60((safe_add_func_uint32_t_u_u(g_94[l_129.f1], (safe_lshift_func_uint8_t_u_s(g_128.f0.f3, 3)))), (((safe_add_func_uint32_t_u_u(l_193[2].f1, p_33)) || g_100.f3) >= l_193[2].f5), p_33), 0x0F2169EFL))) <= p_33) == 0x3BECF33FL))) || p_33)), 0x05L))), 14)) != 4294967295UL))
            {
                struct S0 l_229 = {0x387FL,8UL,9L,7UL,-1L,0x4760FD3AL,0xC41323F1L};
                if (l_64)
                {
                    unsigned l_221 = 0x397699D0L;
                    for (l_129.f0 = 0; (l_129.f0 <= 2); l_129.f0 += 1)
                    {
                        int i;
                        g_94[l_129.f1] |= (safe_sub_func_uint32_t_u_u(g_128.f0.f4, l_201));
                        l_129.f6 = (safe_rshift_func_uint8_t_u_s((0xF9L | (func_34(l_221, g_106, (0xEB2A6592L <= ((safe_rshift_func_int16_t_s_u(0xCF49L, p_33)) ^ ((safe_unary_minus_func_int16_t_s(g_7)) & ((safe_lshift_func_int8_t_s_s(g_100.f6, 7)) >= p_33)))), p_33, g_94[l_129.f1]) <= g_128.f2)), 1));
                    }
                    if ((p_33 & l_193[2].f3))
                    {
                        g_100.f6 |= (g_94[4] ^ (p_33 || (safe_rshift_func_int8_t_s_s(p_33, 0))));
                        l_229 = l_183[0];
                    }
                    else
                    {
                        l_193[2].f6 = (-10L);
                        l_183[0] = l_183[1];
                        g_94[l_129.f1] = (-1L);
                        g_94[1] ^= 1L;
                    }
                }
                else
                {
                    short l_230 = 0L;
                    g_94[0] = (~((func_55(p_33, p_33) >= (l_229.f4 >= l_230)) | (safe_rshift_func_int16_t_s_s(0xAF63L, (l_126[0] == ((((((l_193[2].f1 && g_127.f2) ^ l_229.f2) >= l_229.f1) && g_128.f0.f3) | 0x96L) | p_33))))));
                    l_229 = g_100;
                    if (g_100.f2)
                        continue;
                    g_94[0] = (l_233[7][5][1] == (l_183[0].f2 & func_46((g_128.f0.f1 | ((safe_rshift_func_int16_t_s_u(func_55(g_95, ((((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(g_128.f0.f2, ((+(p_33 && (g_128.f0.f2 <= ((g_127.f5 | (4294967291UL == g_100.f5)) == (-1L))))) | p_33))), g_128.f0.f4)) == g_127.f6) ^ p_33) | g_128.f0.f1)), 3)) != 1L)), l_229, g_128, l_193[2])));
                }
                for (g_127.f0 = 0; (g_127.f0 <= 2); g_127.f0 += 1)
                {
                    struct S1 l_250 = {{0xF185L,0x0669L,0L,8UL,-1L,4294967295UL,0x28E878EFL},4294967295UL,0x1D0DL,1L,-7L};
                    int i;
                    g_94[4] = ((p_33 > (safe_rshift_func_int16_t_s_s((0xF3C7EE49L ^ (safe_rshift_func_uint16_t_u_s((g_128.f0.f6 >= (func_55((((p_33 <= (g_100.f4 <= (safe_add_func_uint16_t_u_u(0xD4FCL, g_94[l_129.f1])))) != l_129.f3) & p_33), g_128.f0.f6) > l_183[0].f0)), g_128.f0.f0))), 6))) | 1L);
                    l_229.f6 = 0x3BF5C435L;
                    l_183[g_127.f0] = g_100;
                    g_94[1] ^= (((func_46(l_183[g_127.f0].f1, g_128.f0, l_250, g_128.f0) && (safe_rshift_func_uint8_t_u_u(l_193[2].f6, (func_46(p_33, l_229, g_128, g_127) || l_183[0].f6)))) != g_127.f2) == g_100.f6);
                }
            }
            else
            {
                for (g_127.f3 = 0; (g_127.f3 >= 40); ++g_127.f3)
                {
                    for (g_106 = 0; (g_106 <= 3); g_106 += 1)
                    {
                        l_183[0] = g_127;
                    }
                    l_193[2] = g_127;
                }
                return g_128;
            }
            if (p_33)
                continue;
        }
        l_183[0].f6 &= (func_46(((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((0x75L & (5L >= (((l_193[2].f4 ^ (p_33 == func_60(p_33, g_127.f4, (safe_rshift_func_uint16_t_u_s(l_129.f6, g_128.f0.f2))))) || l_200[1]) < l_193[2].f2))) < g_128.f4), 4294967295UL)), p_33)) >= g_100.f0), l_193[0], l_261, l_193[2]) == g_100.f2);
        for (g_127.f3 = 0; (g_127.f3 == 37); ++g_127.f3)
        {
            struct S0 l_264 = {1L,0x02CEL,1L,1UL,-2L,4294967294UL,0x057602ECL};
            unsigned l_276 = 4294967295UL;
            if (l_193[2].f6)
                break;
            l_264 = l_193[0];
            for (l_261.f0.f0 = 0; (l_261.f0.f0 > (-16)); l_261.f0.f0 = safe_sub_func_uint8_t_u_u(l_261.f0.f0, 9))
            {
                g_100.f6 = (p_33 != l_267);
                for (g_128.f0.f1 = 0; (g_128.f0.f1 >= 31); g_128.f0.f1 = safe_add_func_uint8_t_u_u(g_128.f0.f1, 5))
                {
                    struct S0 l_270 = {1L,65531UL,2L,1UL,1L,0UL,0L};
                    g_100 = l_270;
                    if (g_94[1])
                        break;
                    for (l_129.f1 = 0; (l_129.f1 >= 47); l_129.f1++)
                    {
                        if (g_100.f4)
                            goto lbl_273;
                        l_183[0] = l_270;
                        g_100 = l_264;
                    }
                    for (l_264.f6 = 0; (l_264.f6 != 23); l_264.f6 = safe_add_func_uint16_t_u_u(l_264.f6, 2))
                    {
                        short l_277 = 0x0127L;
                        g_128.f0.f6 ^= (func_60(p_33, l_276, l_277) || g_100.f5);
                        if (l_261.f2)
                            continue;
                        if (g_100.f3)
                            continue;
                        if (g_127.f4)
                            continue;
                    }
                }
            }
        }
    }
    return l_261;
}







static const unsigned char func_34(unsigned p_35, unsigned short p_36, char p_37, unsigned short p_38, unsigned short p_39)
{
    struct S0 l_131 = {0x7A27L,65535UL,1L,0x30L,0xBAA5L,0x94A51A48L,4L};
    const int l_140 = 0x22F150D1L;
    struct S1 l_158 = {{1L,0UL,0xCFL,0UL,8L,4294967295UL,0x3B81CEEBL},0x6CA5C417L,0xCEC6L,0x76A1L,0xC0C6L};
lbl_181:
    for (g_128.f0.f4 = 4; (g_128.f0.f4 >= 0); g_128.f0.f4 -= 1)
    {
        int i;
        g_94[g_128.f0.f4] = (g_94[g_128.f0.f4] & g_94[g_128.f0.f4]);
        l_131 = l_131;
        g_127.f6 = 0x34033A2AL;
    }
    g_127.f6 = (safe_add_func_int32_t_s_s((g_128.f0.f3 == ((g_127.f6 > ((safe_lshift_func_uint8_t_u_s(((p_39 && (((safe_sub_func_int8_t_s_s(p_35, (safe_lshift_func_int8_t_s_u(1L, 7)))) >= (l_140 <= (((safe_lshift_func_uint16_t_u_s((l_131.f0 != (safe_add_func_int32_t_s_s(func_55(g_127.f1, (g_95 & g_128.f2)), g_128.f0.f1))), g_128.f0.f4)) && p_36) ^ 0L))) < l_131.f5)) != p_37), p_38)) || 0UL)) != (-1L))), 0L));
    g_128.f0 = l_131;
    for (g_100.f6 = 5; (g_100.f6 >= 0); g_100.f6 -= 1)
    {
        struct S0 l_157[7] = {{1L,1UL,4L,0xE6L,-1L,7UL,-4L}, {1L,1UL,4L,0xE6L,-1L,7UL,-4L}, {0x4D3DL,65532UL,0x3FL,0UL,2L,1UL,-1L}, {1L,1UL,4L,0xE6L,-1L,7UL,-4L}, {1L,1UL,4L,0xE6L,-1L,7UL,-4L}, {0x4D3DL,65532UL,0x3FL,0UL,2L,1UL,-1L}, {1L,1UL,4L,0xE6L,-1L,7UL,-4L}};
        int l_166 = 2L;
        struct S1 l_172 = {{0x0C40L,0x8DE4L,0xD1L,255UL,1L,0x673FA2BBL,0x16182473L},0UL,0x353FL,0xD640L,0L};
        int i;
        if ((~((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(g_94[g_100.f6], ((p_35 >= g_100.f1) && g_127.f5))), 2)), (safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(l_131.f1, ((func_46(g_127.f3, l_157[5], l_158, g_100) >= 4L) && p_37))) || l_158.f0.f4), g_94[1])))), 0L)) & g_100.f0)))
        {
            const unsigned short l_159 = 0UL;
            g_128.f0 = g_127;
            g_128.f0 = g_128.f0;
            g_128.f0 = g_128.f0;
            return l_159;
        }
        else
        {
            int l_179 = (-7L);
            if (g_127.f3)
            {
                g_128.f0 = l_158.f0;
                for (g_100.f5 = 0; (g_100.f5 <= 5); g_100.f5 += 1)
                {
                    struct S0 l_173 = {0x9169L,65526UL,0L,255UL,0L,0x648319B6L,-5L};
                    int i;
                    g_94[g_100.f6] ^= (((safe_mod_func_uint16_t_u_u(g_128.f0.f5, (func_46(((2L != ((safe_lshift_func_uint8_t_u_u((g_127.f5 | (safe_sub_func_uint16_t_u_u(p_35, (g_100.f5 > g_127.f3)))), p_36)) | g_127.f3)) | (g_128.f0.f4 >= 0x33L)), g_128.f0, l_158, g_127) && 4294967295UL))) || p_36) && g_100.f4);
                    if (((7L | l_166) != ((safe_rshift_func_int8_t_s_s((g_127.f6 || ((g_94[1] == g_100.f6) <= p_37)), ((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(g_100.f3)), p_39)) <= (l_131.f1 < g_127.f6)))) | 1L)))
                    {
                        g_127 = l_157[1];
                    }
                    else
                    {
                        l_158.f0.f6 = (-1L);
                        g_94[1] &= func_46(p_36, l_131, l_172, l_173);
                    }
                }
                return p_37;
            }
            else
            {
                struct S1 l_174[9] = {{{0L,0xF6B4L,0L,0xA8L,-3L,0xCD22D570L,5L},0x71BD32C4L,0xCAE2L,6L,-6L}, {{-1L,6UL,0xFDL,247UL,0L,0xF4E470BCL,0x3450B3ECL},0x7951488DL,65533UL,-6L,4L}, {{0L,0xF6B4L,0L,0xA8L,-3L,0xCD22D570L,5L},0x71BD32C4L,0xCAE2L,6L,-6L}, {{-1L,6UL,0xFDL,247UL,0L,0xF4E470BCL,0x3450B3ECL},0x7951488DL,65533UL,-6L,4L}, {{0L,0xF6B4L,0L,0xA8L,-3L,0xCD22D570L,5L},0x71BD32C4L,0xCAE2L,6L,-6L}, {{-1L,6UL,0xFDL,247UL,0L,0xF4E470BCL,0x3450B3ECL},0x7951488DL,65533UL,-6L,4L}, {{0L,0xF6B4L,0L,0xA8L,-3L,0xCD22D570L,5L},0x71BD32C4L,0xCAE2L,6L,-6L}, {{-1L,6UL,0xFDL,247UL,0L,0xF4E470BCL,0x3450B3ECL},0x7951488DL,65533UL,-6L,4L}, {{0L,0xF6B4L,0L,0xA8L,-3L,0xCD22D570L,5L},0x71BD32C4L,0xCAE2L,6L,-6L}};
                int i;
                for (g_100.f1 = 1; (g_100.f1 <= 6); g_100.f1 += 1)
                {
                    int l_180 = (-1L);
                    int i;
                    for (l_158.f0.f6 = 2; (l_158.f0.f6 <= 6); l_158.f0.f6 += 1)
                    {
                        int i;
                        g_127.f6 &= func_46(((func_46(g_94[g_100.f6], l_157[g_100.f1], l_174[8], l_157[g_100.f1]) >= p_35) & ((safe_lshift_func_int8_t_s_u((g_95 < g_127.f3), 0)) != (1L || p_35))), l_157[g_100.f1], l_158, l_157[l_158.f0.f6]);
                        if (l_172.f4)
                            continue;
                        if (g_100.f4)
                            break;
                        g_127.f6 = ((safe_add_func_int16_t_s_s((p_35 > (func_60(g_127.f4, func_46(l_179, l_157[g_100.f1], g_128, l_158.f0), l_179) == g_128.f1)), l_179)) | l_180);
                    }
                    l_174[8].f0.f6 ^= (0x763BL <= 0xFA11L);
                    l_157[g_100.f1] = l_157[g_100.f1];
                    if (g_128.f0.f0)
                        goto lbl_181;
                }
            }
        }
    }
    return g_100.f0;
}







static unsigned short func_46(short p_47, struct S0 p_48, struct S1 p_49, struct S0 p_50)
{
    int l_130 = 0x5AB6B2BBL;
    g_128.f0.f6 ^= l_130;
    return l_130;
}







static unsigned short func_55(unsigned p_56, const int p_57)
{
    unsigned short l_96[1];
    int l_125 = 0xD213C738L;
    int i;
    for (i = 0; i < 1; i++)
        l_96[i] = 0x17EFL;
    for (p_56 = 4; (p_56 >= 12); p_56 = safe_add_func_int16_t_s_s(p_56, 3))
    {
        unsigned char l_93[9] = {1UL, 1UL, 0xCAL, 1UL, 1UL, 0xCAL, 1UL, 1UL, 0xCAL};
        int i;
        for (g_94[1] = 1; (g_94[1] <= 8); g_94[1] += 1)
        {
            int i;
            g_95 &= l_93[g_94[1]];
            l_96[0] = g_95;
        }
        if ((safe_rshift_func_uint16_t_u_s(p_56, p_57)))
        {
            struct S0 l_99 = {0x0138L,65535UL,5L,0x6CL,0x2858L,1UL,0L};
            g_100 = l_99;
        }
        else
        {
            unsigned l_105 = 0xE6343A15L;
            g_106 ^= ((0x27L > p_57) >= ((safe_sub_func_uint8_t_u_u((p_56 & ((p_56 < ((safe_rshift_func_int16_t_s_s(0x964CL, (0x5EL <= ((l_105 != (((p_57 | 250UL) | g_100.f5) >= p_57)) | p_57)))) < p_57)) != g_100.f0)), g_94[4])) & g_100.f6));
            if (l_105)
                goto lbl_122;
        }
    }
lbl_122:
    g_100.f6 |= (((safe_lshift_func_int16_t_s_u((0x23L || l_96[0]), func_60(((safe_unary_minus_func_int32_t_s((safe_mod_func_uint16_t_u_u(((((l_96[0] || g_100.f0) ^ (safe_rshift_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u(func_60(p_57, (~(safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(0x7AL, ((safe_mod_func_int32_t_s_s((!(p_57 != ((((l_96[0] | l_96[0]) > g_100.f0) != 1L) > l_96[0]))), g_94[5])) & l_96[0]))), 7UL))), p_56), l_96[0])) || 4UL) == l_96[0]) <= l_96[0]), 2))) || p_56) ^ 65531UL), l_96[0])))) == l_96[0]), p_56, l_96[0]))) && g_100.f4) != 0xBCL);
    l_125 |= (l_96[0] ^ (g_100.f5 >= (g_100.f6 >= (safe_lshift_func_uint8_t_u_u(p_56, 0)))));
    return g_100.f3;
}







static const char func_60(unsigned short p_61, unsigned char p_62, int p_63)
{
    char l_69 = (-1L);
    int l_75 = 0xD08F1B1EL;
    struct S0 l_76 = {0x1FE0L,65535UL,0L,0x11L,0xA8BFL,4294967289UL,1L};
    int l_90[10] = {0x1715C743L, 6L, 0x1715C743L, 6L, 0x1715C743L, 6L, 0x1715C743L, 6L, 0x1715C743L, 6L};
    int i;
    if (((p_63 >= (l_69 >= p_63)) && (safe_mod_func_int8_t_s_s((0x5F2AL <= ((safe_add_func_int32_t_s_s((0x3FL == p_61), l_69)) != p_61)), g_7))))
    {
        unsigned l_74 = 0x433A0315L;
        l_75 = l_74;
        l_75 = g_7;
    }
    else
    {
        struct S0 l_77 = {0x7209L,0xAA68L,0xECL,0xDFL,0x3783L,4294967291UL,0x330C13F5L};
        l_77 = l_76;
        l_77.f6 = 0x6F6B910FL;
    }
    l_90[8] ^= ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(g_7, (((0x3C4023A1L != (safe_add_func_uint32_t_u_u((l_76.f6 >= ((((safe_sub_func_int8_t_s_s(g_7, 0xCFL)) ^ (safe_add_func_uint16_t_u_u((+(safe_add_func_int16_t_s_s((-1L), l_69))), p_62))) && 0x6BC5L) && g_7)), p_62))) < l_75) || p_62))), g_7)) <= p_61);
    return l_69;
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1, "g_100.f1", print_hash_value);
    transparent_crc(g_100.f2, "g_100.f2", print_hash_value);
    transparent_crc(g_100.f3, "g_100.f3", print_hash_value);
    transparent_crc(g_100.f4, "g_100.f4", print_hash_value);
    transparent_crc(g_100.f5, "g_100.f5", print_hash_value);
    transparent_crc(g_100.f6, "g_100.f6", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_127.f2, "g_127.f2", print_hash_value);
    transparent_crc(g_127.f3, "g_127.f3", print_hash_value);
    transparent_crc(g_127.f4, "g_127.f4", print_hash_value);
    transparent_crc(g_127.f5, "g_127.f5", print_hash_value);
    transparent_crc(g_127.f6, "g_127.f6", print_hash_value);
    transparent_crc(g_128.f0.f0, "g_128.f0.f0", print_hash_value);
    transparent_crc(g_128.f0.f1, "g_128.f0.f1", print_hash_value);
    transparent_crc(g_128.f0.f2, "g_128.f0.f2", print_hash_value);
    transparent_crc(g_128.f0.f3, "g_128.f0.f3", print_hash_value);
    transparent_crc(g_128.f0.f4, "g_128.f0.f4", print_hash_value);
    transparent_crc(g_128.f0.f5, "g_128.f0.f5", print_hash_value);
    transparent_crc(g_128.f0.f6, "g_128.f0.f6", print_hash_value);
    transparent_crc(g_128.f1, "g_128.f1", print_hash_value);
    transparent_crc(g_128.f2, "g_128.f2", print_hash_value);
    transparent_crc(g_128.f3, "g_128.f3", print_hash_value);
    transparent_crc(g_128.f4, "g_128.f4", print_hash_value);
    transparent_crc(g_301.f0, "g_301.f0", print_hash_value);
    transparent_crc(g_301.f1, "g_301.f1", print_hash_value);
    transparent_crc(g_301.f2, "g_301.f2", print_hash_value);
    transparent_crc(g_301.f3, "g_301.f3", print_hash_value);
    transparent_crc(g_301.f4, "g_301.f4", print_hash_value);
    transparent_crc(g_301.f5, "g_301.f5", print_hash_value);
    transparent_crc(g_301.f6, "g_301.f6", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_460.f0.f0, "g_460.f0.f0", print_hash_value);
    transparent_crc(g_460.f0.f1, "g_460.f0.f1", print_hash_value);
    transparent_crc(g_460.f0.f2, "g_460.f0.f2", print_hash_value);
    transparent_crc(g_460.f0.f3, "g_460.f0.f3", print_hash_value);
    transparent_crc(g_460.f0.f4, "g_460.f0.f4", print_hash_value);
    transparent_crc(g_460.f0.f5, "g_460.f0.f5", print_hash_value);
    transparent_crc(g_460.f0.f6, "g_460.f0.f6", print_hash_value);
    transparent_crc(g_460.f1, "g_460.f1", print_hash_value);
    transparent_crc(g_460.f2, "g_460.f2", print_hash_value);
    transparent_crc(g_460.f3, "g_460.f3", print_hash_value);
    transparent_crc(g_460.f4, "g_460.f4", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
