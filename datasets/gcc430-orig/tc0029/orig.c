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
   unsigned f0;
   const short f1;
   int f2;
   unsigned char f3;
   unsigned f4;
   int f5;
   int f6;
};

struct S1 {
   unsigned char f0;
   unsigned char f1;
   int f2;
   char f3;
   char f4;
   int f5;
   unsigned f6;
   unsigned short f7;
   short f8;
};


static int g_10 = 1L;
static int g_28 = 1L;
static int g_45 = 0x47FCE3BAL;
static unsigned g_70 = 0x5258DDFAL;
static unsigned short g_81 = 65535UL;
static unsigned short g_96 = 0x6E3AL;
static unsigned char g_121 = 0x3BL;
static int g_125 = 0x3A1BBB5DL;
static short g_126 = 1L;
static struct S1 g_130 = {0x3FL,1UL,0xBA213425L,8L,-2L,-1L,4294967294UL,0x4B5AL,9L};
static struct S0 g_238 = {7UL,0x3C32L,2L,255UL,0x2D5311EAL,0x5BD36EAAL,0x4A5ECF16L};
static short g_487[9][4] = {{0xC951L, 6L, 0xC951L, 6L}, {0xC951L, 6L, 0xC951L, 6L}, {0xC951L, 6L, 0xC951L, 6L}, {0xC951L, 6L, 0xC951L, 6L}, {0xC951L, 6L, 0xC951L, 6L}, {0xC951L, 6L, 0xC951L, 6L}, {0xC951L, 6L, 0xC951L, 6L}, {0xC951L, 6L, 0xC951L, 6L}, {0xC951L, 6L, 0xC951L, 6L}};
static struct S0 g_687 = {1UL,6L,1L,0x76L,4294967290UL,-1L,0xF2A1B3A7L};
static short g_834 = 9L;
static int g_878 = 0L;
static int g_980 = (-1L);
static struct S1 g_1302 = {0x9FL,252UL,-1L,0x04L,4L,0x23F06471L,0x504CD876L,0x42E7L,1L};
static short g_1689 = 1L;
static unsigned g_1784 = 4294967295UL;
static unsigned g_1888[6] = {0x9660BC68L, 0x9660BC68L, 0x9660BC68L, 0x9660BC68L, 0x9660BC68L, 0x9660BC68L};
static unsigned short g_1925 = 65535UL;
static unsigned char g_1941 = 0x0BL;
static unsigned g_1957[9] = {0xA19AACB9L, 0x61DB5D2FL, 0xA19AACB9L, 0x61DB5D2FL, 0xA19AACB9L, 0x61DB5D2FL, 0xA19AACB9L, 0x61DB5D2FL, 0xA19AACB9L};
static struct S1 g_1998 = {6UL,0xE4L,1L,0L,-1L,1L,0x378357FCL,7UL,0x3C22L};
static int g_2005 = 0x21CA6D2FL;



static unsigned func_1(void);
static const unsigned char func_19(unsigned p_20);
static unsigned short func_31(unsigned char p_32);
static unsigned func_35(struct S1 p_36, int p_37);
static char func_41(unsigned p_42);
static char func_54(char p_55, unsigned p_56, unsigned p_57);
static struct S1 func_74(short p_75, unsigned p_76, int p_77, int p_78);
static char func_89(char p_90);
static int func_99(struct S0 p_100, int p_101);
static struct S0 func_102(struct S0 p_103, int p_104, char p_105);
static unsigned func_1(void)
{
    int l_13 = 0x9D982735L;
    int l_14[3];
    int l_1960 = 0x95E62A22L;
    int l_1961 = 9L;
    struct S1 l_1979[4] = {{0x21L,6UL,0x830CE82DL,0x11L,-1L,0x8A09E777L,0UL,0x2EAEL,0xB9A2L}, {0x21L,6UL,0x830CE82DL,0x11L,-1L,0x8A09E777L,0UL,0x2EAEL,0xB9A2L}, {0x21L,6UL,0x830CE82DL,0x11L,-1L,0x8A09E777L,0UL,0x2EAEL,0xB9A2L}, {0x21L,6UL,0x830CE82DL,0x11L,-1L,0x8A09E777L,0UL,0x2EAEL,0xB9A2L}};
    unsigned char l_2020 = 255UL;
    unsigned l_2041 = 0x3F16F5FAL;
    unsigned l_2060 = 0x241E381BL;
    char l_2061 = 1L;
    int l_2078 = 0x09DF311EL;
    short l_2083 = 0x2AF3L;
    int i;
    for (i = 0; i < 3; i++)
        l_14[i] = 0xF0CF8651L;
    if ((l_1961 = ((((safe_add_func_uint8_t_u_u((+((safe_mul_func_uint16_t_u_u(((0x1B552BF3L & ((l_1960 = ((safe_lshift_func_int16_t_s_s((g_1957[5] |= ((l_14[0] ^= (safe_mul_func_int8_t_s_s(g_10, (safe_lshift_func_uint8_t_u_u(l_13, 3))))) | (g_1784 = (!(safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_13, g_10)), func_19(g_10))))))), 2)) || (l_13 >= ((safe_rshift_func_uint16_t_u_s(g_1302.f1, l_14[1])) > g_45)))) < g_238.f1)) | 0x1BL), l_13)) == 0x0EL)), 0xD8L)) | 0x300407BDL) >= (-1L)) >= l_13)))
    {
        unsigned l_1968 = 4294967295UL;
        int l_1978 = 0xCB1C3B0FL;
        int l_1991 = 0x96F598AFL;
        for (g_28 = 0; (g_28 >= 18); ++g_28)
        {
            short l_1971 = 0xA31EL;
            l_1979[3] = func_74((safe_add_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((((!l_1968) ^ (safe_sub_func_int8_t_s_s(l_1971, 0x7FL))) || ((((safe_mod_func_uint8_t_u_u((l_14[1] = (l_1968 != l_1968)), (safe_div_func_uint32_t_u_u(g_687.f6, (g_1888[1] = (g_687.f0 = g_687.f5)))))) & (l_1978 = 0L)) > ((func_31(l_13) >= l_1961) > 0L)) && 1L)), g_687.f3)) & 65526UL) || 65535UL), l_1971)), g_121, l_1971, l_1971);
            for (g_687.f3 = (-6); (g_687.f3 == 47); g_687.f3 = safe_add_func_int16_t_s_s(g_687.f3, 8))
            {
                int l_2039 = 0L;
                for (g_130.f4 = 28; (g_130.f4 < 8); g_130.f4--)
                {
                    unsigned l_1988 = 7UL;
                    if (l_1978)
                        break;
                    for (g_238.f0 = 0; (g_238.f0 <= 2); g_238.f0 += 1)
                    {
                        int i;
                        if (l_14[g_238.f0])
                            break;
                        l_14[g_238.f0] |= (~(safe_mul_func_uint8_t_u_u(g_130.f0, g_687.f6)));
                        g_130.f2 = (safe_sub_func_uint8_t_u_u((l_1988 <= (((l_1971 == (l_14[g_238.f0] &= ((g_70 == l_1988) <= (g_130.f7 &= 1UL)))) == ((g_1888[4] = (safe_add_func_int32_t_s_s((-8L), l_1991))) & (safe_div_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_uint8_t_u_u(l_13, g_687.f2)) != g_70) >= g_1957[5]) != l_1978), g_1302.f5)) == g_687.f2) > l_1971) && g_980), g_1925)))) && l_14[g_238.f0])), 4L));
                        g_1998 = g_1302;
                    }
                    g_1998 = g_1302;
                    for (g_1302.f2 = (-28); (g_1302.f2 >= (-10)); g_1302.f2 = safe_add_func_int32_t_s_s(g_1302.f2, 7))
                    {
                        l_1979[3] = g_130;
                    }
                }
                l_1978 = 0x4C3EAFD9L;
                if (g_687.f2)
                    break;
                for (g_1302.f3 = 0; (g_1302.f3 >= (-24)); g_1302.f3 = safe_sub_func_uint32_t_u_u(g_1302.f3, 4))
                {
                    for (l_1960 = 0; (l_1960 == (-18)); --l_1960)
                    {
                        const unsigned l_2012 = 0x1893159FL;
                        int l_2017 = 8L;
                        if (g_2005)
                            break;
                        g_45 = (safe_sub_func_int8_t_s_s(g_130.f8, g_238.f0));
                        l_2017 ^= (safe_sub_func_uint8_t_u_u(l_1971, ((l_2012 | (g_1998.f0 == ((g_125 <= (safe_sub_func_int16_t_s_s((g_130.f4 == (l_1991 != (+0xA9FA333DL))), ((((g_1888[0] <= ((safe_sub_func_int16_t_s_s(l_2012, 0x0D72L)) <= 0L)) <= l_2012) == 1L) == l_2012)))) || 0x9B6242D0L))) & g_1302.f7)));
                        g_238.f6 &= (-9L);
                    }
                    for (g_1784 = 11; (g_1784 <= 23); g_1784 = safe_add_func_int16_t_s_s(g_1784, 7))
                    {
                        unsigned l_2040[5][9] = {{0xA47B40DBL, 0xA47B40DBL, 0x0D31E19FL, 0x8F4D3DC4L, 0x18328E6EL, 0x8F4D3DC4L, 0x0D31E19FL, 0xA47B40DBL, 0xA47B40DBL}, {0xA47B40DBL, 0xA47B40DBL, 0x0D31E19FL, 0x8F4D3DC4L, 0x18328E6EL, 0x8F4D3DC4L, 0x0D31E19FL, 0xA47B40DBL, 0xA47B40DBL}, {0xA47B40DBL, 0xA47B40DBL, 0x0D31E19FL, 0x8F4D3DC4L, 0x18328E6EL, 0x8F4D3DC4L, 0x0D31E19FL, 0xA47B40DBL, 0xA47B40DBL}, {0xA47B40DBL, 0xA47B40DBL, 0x0D31E19FL, 0x8F4D3DC4L, 0x18328E6EL, 0x8F4D3DC4L, 0x0D31E19FL, 0xA47B40DBL, 0xA47B40DBL}, {0xA47B40DBL, 0xA47B40DBL, 0x0D31E19FL, 0x8F4D3DC4L, 0x18328E6EL, 0x8F4D3DC4L, 0x0D31E19FL, 0xA47B40DBL, 0xA47B40DBL}};
                        int i, j;
                        l_2020 = func_31(g_1302.f0);
                        g_125 = (safe_sub_func_int32_t_s_s((g_45 |= l_1960), (((safe_add_func_uint16_t_u_u(func_31(g_1689), (safe_rshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s(((safe_div_func_int32_t_s_s((g_238.f5 ^= (l_1971 ^ (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(g_487[6][3], (safe_lshift_func_int8_t_s_s((func_31(l_1960) || ((1L | g_1302.f4) != 0xE949L)), l_2039)))), g_1957[5])), g_1998.f0)))), l_1971)) || 0x450F6D89L), g_1998.f3)) > g_238.f3), 3)))) >= 0xF8L) && l_2040[1][8])));
                        g_10 = (g_1998.f2 = l_2041);
                        l_1978 = func_31(g_125);
                    }
                }
            }
        }
        for (l_13 = 0; (l_13 == (-26)); --l_13)
        {
            g_45 = 3L;
        }
        g_1302.f2 = (l_1968 || (g_1784 & 0x7B21L));
    }
    else
    {
        g_2005 = func_41(g_1302.f4);
    }
    g_2005 &= (safe_sub_func_uint32_t_u_u((l_1979[3].f7 | (((0x5E386C78L < l_1979[3].f1) != ((func_35(g_130, (safe_lshift_func_uint16_t_u_u((g_238.f6 <= (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(0L, (g_1998.f8 <= (func_31((((((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((((g_1957[0] || (((l_2060 ^= ((safe_mod_func_int32_t_s_s((l_1961 = (safe_mul_func_uint8_t_u_u(g_1998.f0, l_1979[3].f4))), g_1784)) | 0xB886L)) | l_2041) | g_878)) ^ l_1979[3].f4) ^ g_687.f3), g_1302.f6)), g_238.f2)) && l_2020) < g_687.f3) ^ l_2061) || g_687.f3)) == l_14[0])))), g_980))), 13))) == 65533UL) || 252UL)) > g_1957[2])), 0xC5713283L));
    g_687.f5 = ((safe_div_func_int8_t_s_s(0x2CL, (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_1302.f4, g_1302.f7)), (safe_sub_func_int32_t_s_s(0x764524E5L, (safe_rshift_func_int16_t_s_u(l_1979[3].f3, ((0x00L < (l_2078 |= func_31(((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((-1L), 15)), 0x4CL)) <= (safe_add_func_uint32_t_u_u((l_1979[3].f6 && l_1979[3].f4), 0x2918075FL)))))) <= g_1302.f4))))))))) || 0x5E9FL);
    g_1998.f2 ^= func_19((((safe_rshift_func_int16_t_s_u((g_1689 = (g_1998.f8 = func_89(l_1979[3].f2))), 11)) || l_13) && (((0x1023L != (g_1784 ^ ((l_2083 = (((l_14[0] &= (safe_rshift_func_int16_t_s_s(g_1998.f5, (l_1979[3].f7 != ((l_13 || l_1961) & g_487[2][1]))))) ^ g_130.f2) && 0xF0L)) >= g_1957[5]))) && 0xAD10L) & (-1L))));
    return g_980;
}







static const unsigned char func_19(unsigned p_20)
{
    unsigned l_25 = 0UL;
    int l_34 = 0xE1597618L;
    struct S1 l_38 = {254UL,0xA1L,0xD29CC027L,0x82L,-1L,-1L,0x5CB1BEBAL,65530UL,0L};
    int l_1694[2][10][6] = {{{1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}}, {{1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}, {1L, 0x49D69DBAL, 0xCADC4F7EL, 0x49D69DBAL, 1L, 0xACDCFED4L}}};
    struct S1 l_1789 = {255UL,0x69L,5L,0L,1L,0xEA83542EL,4294967286UL,65535UL,0x9E57L};
    short l_1798 = (-7L);
    unsigned l_1842 = 0xD24B98E0L;
    struct S0 l_1849 = {4294967294UL,3L,-1L,0x06L,0xF875A732L,0L,0xD6C84EF8L};
    int l_1894 = (-9L);
    int i, j, k;
    l_1694[1][3][4] = (safe_mod_func_int8_t_s_s(((safe_add_func_int32_t_s_s((l_25 < p_20), (g_10 | ((((g_28 = (safe_rshift_func_int16_t_s_s((-1L), 2))) != ((safe_mul_func_int8_t_s_s(((l_34 ^= func_31(g_10)) == (l_38.f2 = (((func_35(l_38, ((g_10 | (l_25 | l_38.f6)) ^ g_10)) == l_38.f1) ^ l_38.f5) > g_238.f1))), g_10)) < p_20)) && g_834) & l_38.f1)))) <= 0x8F38L), 1L));
    for (g_687.f5 = 0; (g_687.f5 > (-20)); g_687.f5--)
    {
        unsigned l_1697 = 0x9A81D3A4L;
        int l_1698[7][1];
        unsigned l_1764[8];
        short l_1777[5][8][2] = {{{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}, {{9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}, {9L, 0L}}};
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_1698[i][j] = 0xFFAB56ADL;
        }
        for (i = 0; i < 8; i++)
            l_1764[i] = 0x2B5AC975L;
        g_687.f6 = l_1697;
        if (l_1694[1][3][4])
        {
            unsigned l_1701[9];
            int i;
            for (i = 0; i < 9; i++)
                l_1701[i] = 0x26608AC1L;
            for (g_1302.f3 = 0; (g_1302.f3 <= 3); g_1302.f3 += 1)
            {
                struct S1 l_1702[5][3] = {{{0UL,255UL,-9L,9L,1L,-1L,0x575F9362L,0x7071L,1L}, {5UL,255UL,0x72E1A1D9L,1L,0L,0xD0714DDAL,0UL,2UL,0x54B2L}, {1UL,0UL,0xAE23FE51L,0L,-1L,1L,1UL,0x2073L,-7L}}, {{0UL,255UL,-9L,9L,1L,-1L,0x575F9362L,0x7071L,1L}, {5UL,255UL,0x72E1A1D9L,1L,0L,0xD0714DDAL,0UL,2UL,0x54B2L}, {1UL,0UL,0xAE23FE51L,0L,-1L,1L,1UL,0x2073L,-7L}}, {{0UL,255UL,-9L,9L,1L,-1L,0x575F9362L,0x7071L,1L}, {5UL,255UL,0x72E1A1D9L,1L,0L,0xD0714DDAL,0UL,2UL,0x54B2L}, {1UL,0UL,0xAE23FE51L,0L,-1L,1L,1UL,0x2073L,-7L}}, {{0UL,255UL,-9L,9L,1L,-1L,0x575F9362L,0x7071L,1L}, {5UL,255UL,0x72E1A1D9L,1L,0L,0xD0714DDAL,0UL,2UL,0x54B2L}, {1UL,0UL,0xAE23FE51L,0L,-1L,1L,1UL,0x2073L,-7L}}, {{0UL,255UL,-9L,9L,1L,-1L,0x575F9362L,0x7071L,1L}, {5UL,255UL,0x72E1A1D9L,1L,0L,0xD0714DDAL,0UL,2UL,0x54B2L}, {1UL,0UL,0xAE23FE51L,0L,-1L,1L,1UL,0x2073L,-7L}}};
                unsigned short l_1763 = 1UL;
                int i, j;
                l_1698[0][0] = g_125;
                l_1701[8] ^= (0xCDL > func_31(((safe_sub_func_uint8_t_u_u(l_38.f7, p_20)) & 0xA75DL)));
                g_130 = l_1702[1][0];
                if ((!(safe_sub_func_int8_t_s_s((((l_1702[1][0].f0 <= (safe_mul_func_uint8_t_u_u((l_1702[1][0].f0 < ((g_130.f1 = g_238.f3) == (((safe_div_func_int32_t_s_s(func_31(l_1698[0][0]), (l_38.f2 = ((((g_834 < l_1698[0][0]) == (g_130.f2 = func_31(p_20))) >= p_20) || p_20)))) != l_1702[1][0].f1) > g_487[2][1]))), 0x04L))) | l_38.f3) != 0x0C14L), 0xACL))))
                {
                    short l_1721 = 0x3248L;
                    int l_1734 = 0x8E7DF6DBL;
                    int l_1735 = 1L;
                    int i, j;
                    l_1735 = (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0L, 3)), (safe_sub_func_int16_t_s_s((l_1702[1][0].f2 |= (1UL ^ (g_687.f4 = func_31((g_238.f3 = (((g_487[(g_1302.f3 + 3)][g_1302.f3] = l_1721) == ((safe_mod_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u((func_31(l_38.f1) >= ((safe_add_func_uint16_t_u_u(0xD408L, ((safe_lshift_func_uint16_t_u_s((p_20 != 0x2515C4FDL), (l_1734 |= l_1721))) <= g_687.f3))) < 0xFEL)), p_20)) & 0xE49651C4L), 11)), p_20)) && p_20), 6UL)) & 253UL)) == g_878)))))), g_878)))), 6)), g_28));
                    g_130.f2 = g_1302.f2;
                }
                else
                {
                    unsigned short l_1756[5] = {0x59EAL, 0x2AF6L, 0x59EAL, 0x2AF6L, 0x59EAL};
                    int l_1778 = 0x4461CE17L;
                    int i;
                    for (l_38.f0 = 0; (l_38.f0 == 46); l_38.f0 = safe_add_func_int32_t_s_s(l_38.f0, 6))
                    {
                        unsigned char l_1738 = 255UL;
                        int l_1749 = (-4L);
                        l_1738 = g_70;
                        l_1749 = ((safe_add_func_uint16_t_u_u(1UL, (safe_div_func_uint32_t_u_u(func_31((l_38.f1 == l_1701[6])), (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((l_38.f5 > p_20), func_31((0L > l_1738)))), 1)), p_20)))))) | p_20);
                        g_687.f6 &= g_1302.f3;
                    }
                    l_1756[4] = (safe_lshift_func_uint16_t_u_u(((g_1302.f0 < g_238.f5) == ((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((+g_487[5][0]), 4294967286UL)), (0xF2AF8B12L & func_31((l_1698[0][0] = 0x38L))))) >= 1UL)), l_1697));
                    if ((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((l_1698[3][0] &= (safe_mod_func_int16_t_s_s((l_1764[2] = l_1763), ((safe_div_func_int32_t_s_s(0xF2D78356L, (safe_lshift_func_int8_t_s_s(p_20, 2)))) | ((safe_rshift_func_uint8_t_u_s((l_1697 & ((safe_add_func_uint8_t_u_u(255UL, (p_20 | (l_1702[1][0].f1 ^ func_31(l_34))))) != 0xFDAD350AL)), g_96)) ^ g_687.f5))))), 0x721FL)) || 4L), g_1302.f0)))
                    {
                        unsigned short l_1779 = 0x1552L;
                        l_1779 = (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_1777[0][3][0], (g_487[2][1] & ((g_1302.f6 ^ 0UL) ^ (l_1778 = p_20))))), 0));
                        g_45 = p_20;
                        g_238.f6 = (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_1784, (safe_mul_func_uint16_t_u_u(l_1777[0][3][0], p_20)))), (safe_div_func_int16_t_s_s(p_20, (-8L)))));
                        l_1778 |= (-10L);
                    }
                    else
                    {
                        g_238.f6 &= p_20;
                        l_1789 = l_38;
                    }
                }
            }
            l_1798 = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(g_1302.f7, (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(func_31(func_31(l_1701[8])), g_1302.f8)), (-1L))))), g_1302.f7));
            l_1789.f2 = (safe_sub_func_uint8_t_u_u(l_1701[2], g_238.f6));
        }
        else
        {
            char l_1805[8] = {0x11L, 0x51L, 0x11L, 0x51L, 0x11L, 0x51L, 0x11L, 0x51L};
            const short l_1817 = (-1L);
            int l_1833 = 0x41305A36L;
            int i;
            for (g_687.f3 = 0; (g_687.f3 <= 3); g_687.f3 += 1)
            {
                char l_1812 = 0x52L;
                unsigned short l_1818 = 0UL;
                l_1818 = (safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s(l_1805[0], (safe_mul_func_int8_t_s_s(g_121, (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(func_31(g_45), 6)), ((((p_20 > l_1812) >= (((((g_1302.f1 = (g_238.f4 ^ (func_31(((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(0x2504L, p_20)), 7)) == l_1817)) ^ p_20))) ^ l_38.f6) & l_1812) | l_1812) & 0xE82BCD07L)) == 0x1EB5L) & g_1302.f6))))))) <= l_38.f0), 0L));
            }
            l_1833 = ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((l_1698[5][0] = (safe_sub_func_uint16_t_u_u(65529UL, (g_130.f7 = ((safe_add_func_int8_t_s_s(l_1789.f1, ((safe_div_func_uint16_t_u_u((((g_238.f3 > (g_121 = (l_1694[1][3][4] &= 0UL))) || (safe_sub_func_int16_t_s_s(p_20, (func_31(g_1302.f7) == (+(safe_add_func_uint8_t_u_u(p_20, (((g_130.f5 > 0x743CL) || 0x51L) | 0xBFL)))))))) > p_20), p_20)) > l_1764[2]))) ^ 0x7BL))))), p_20)), 2)) ^ l_1805[0]);
        }
    }
    l_1842 = (safe_mod_func_int8_t_s_s((+(l_34 |= func_35(l_38, (g_130.f4 <= ((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((g_834 |= g_121), ((safe_sub_func_uint16_t_u_u(g_1784, p_20)) < l_1694[0][6][3]))), (0xDB1AL != 0xAA22L))) == 0xCD1EL))))), g_28));
    if ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(4294967295UL, g_96)), l_38.f5)))
    {
        const short l_1850 = 0xBAD5L;
        int l_1851 = 0x41CE363DL;
        l_1851 = (p_20 == func_31((l_38.f2 = (safe_rshift_func_uint16_t_u_s(func_99(l_1849, p_20), l_1850)))));
        l_1849.f5 &= func_41((safe_unary_minus_func_uint16_t_u(0x8665L)));
    }
    else
    {
        const unsigned l_1855 = 0x6C24CBE2L;
        int l_1874 = 0x49E2E80EL;
        int l_1875 = 8L;
        struct S1 l_1931 = {0xCBL,2UL,-1L,0xDCL,0x0EL,0x74AF7208L,0xE8D7755FL,0x6E11L,6L};
        g_878 = p_20;
        if ((safe_sub_func_uint16_t_u_u(l_1855, (safe_rshift_func_uint16_t_u_s(func_35(func_74((g_130.f4 && (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(l_1855, 10)), (safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((((l_1789.f5 | func_31((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_1875 = ((l_1789.f2 |= ((safe_add_func_int16_t_s_s(((!(g_121 = 248UL)) == 0x67L), (l_38.f2 = (safe_lshift_func_uint16_t_u_s((l_1874 = (0x98CA52AAL > ((((-2L) != p_20) > l_1849.f3) | 0xB5L))), 1))))) == 0xCBA5L)) && 0xEE73L)), g_834)), p_20)))) ^ l_1855) < 0L) | l_1849.f1) ^ l_1849.f0), 0xC395F782L)), g_238.f6))))), g_96, p_20, l_1789.f0), p_20), 4)))))
        {
            int l_1882 = 0L;
            int l_1887 = 0xE4F6DE34L;
            short l_1899[4][4][1] = {{{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}};
            int i, j, k;
            g_1888[1] |= (safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s(0x802DL, (safe_lshift_func_int16_t_s_u(((((l_1874 = (l_1882 = 0x1FL)) <= (safe_div_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(g_28, func_99(func_102(g_238, l_1694[1][8][0], (g_130.f2 >= (g_687.f4 = (((l_1887 ^ func_31((g_130.f0 ^= l_1849.f4))) ^ l_1875) >= 0x6ECBEAA0L)))), l_1849.f5))) >= 1UL) & l_1887), p_20))) < p_20) <= l_1887), 2)))), g_81));
            g_687.f5 &= (safe_rshift_func_int8_t_s_u(l_1882, p_20));
            if ((l_38.f2 = func_35(g_130, p_20)))
            {
                for (l_1798 = 0; (l_1798 <= (-19)); --l_1798)
                {
                    return g_487[2][1];
                }
            }
            else
            {
                l_1887 = (safe_unary_minus_func_int16_t_s(g_238.f6));
            }
            l_38 = func_74(func_54(p_20, (((func_35(func_74(p_20, l_1894, (l_38.f4 || ((safe_rshift_func_uint8_t_u_u((g_687.f4 | ((0x74L > 255UL) & l_1842)), (safe_add_func_int16_t_s_s(l_38.f3, g_1784)))) | l_1789.f7)), l_1899[3][0][0]), l_1882) | g_28) || 0x27FDL) >= g_687.f2), g_687.f2), g_238.f1, p_20, g_687.f2);
        }
        else
        {
            int l_1915 = 0x2A4316FDL;
            const int l_1918 = 0x19B4FC8DL;
            if ((safe_lshift_func_int8_t_s_u(p_20, 5)))
            {
                unsigned l_1914 = 4294967290UL;
                int l_1934 = 0xC91357C9L;
                for (g_45 = 0; (g_45 < (-29)); g_45--)
                {
                    struct S0 l_1926 = {0x84CEF2A8L,0xD619L,0x557FF3B5L,6UL,0x7FBB5151L,0x38388796L,-1L};
                    l_1849.f6 = 7L;
                    if ((safe_mul_func_int8_t_s_s((g_130.f4 = p_20), (safe_mul_func_int8_t_s_s((p_20 || g_238.f4), g_1302.f4)))))
                    {
                        g_1925 &= (safe_lshift_func_int16_t_s_s((p_20 != ((safe_lshift_func_uint8_t_u_u((0x011C371AL == ((l_1915 = l_1914) >= (safe_lshift_func_uint16_t_u_u((l_1918 & (safe_rshift_func_uint16_t_u_s((!65532UL), 5))), 7)))), 0)) == (func_54(g_238.f0, (g_238.f4 = func_31((safe_lshift_func_int16_t_s_u(((1UL < ((safe_add_func_int32_t_s_s(p_20, p_20)) & g_1302.f0)) || p_20), 15)))), p_20) && 6L))), 0));
                    }
                    else
                    {
                        unsigned char l_1927[10][6][3] = {{{0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}}, {{0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}}, {{0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}}, {{0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}}, {{0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}}, {{0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}}, {{0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}}, {{0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}}, {{0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}}, {{0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}, {0UL, 1UL, 0xE0L}}};
                        int l_1930 = (-1L);
                        int i, j, k;
                        l_1875 = (func_99(l_1926, (l_1927[5][4][1] || ((0L <= g_130.f1) && (safe_add_func_uint16_t_u_u((g_1925 |= func_54(p_20, (~g_687.f2), func_31((l_1930 = g_238.f4)))), p_20))))) != 1UL);
                    }
                }
                l_1931 = g_1302;
                g_1941 &= (l_1894 = (p_20 != (safe_rshift_func_int8_t_s_u((l_1934 = (-5L)), (safe_mod_func_uint8_t_u_u((p_20 && (safe_rshift_func_uint8_t_u_u(func_35(l_1931, ((safe_lshift_func_uint8_t_u_u(0x9CL, func_41(g_687.f2))) ^ g_980)), g_1784))), g_980))))));
            }
            else
            {
                unsigned short l_1945 = 7UL;
                int l_1956 = 0L;
                for (g_130.f0 = 0; (g_130.f0 <= 8); g_130.f0 = safe_add_func_int16_t_s_s(g_130.f0, 2))
                {
                    struct S1 l_1944 = {248UL,0xD1L,1L,0xA7L,0x72L,0L,1UL,0xFED8L,0x68E6L};
                    g_1302 = l_1944;
                    l_1945 = p_20;
                    if (l_1855)
                        break;
                }
                l_1915 = (l_38.f6 ^ (p_20 == (g_687.f4 != (func_31(g_1302.f4) ^ 65535UL))));
                l_1956 &= ((g_1302.f3 > (l_1915 = (~p_20))) && func_35(func_74(g_130.f7, l_1849.f0, (l_1849.f6 |= (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(0x84L, ((safe_add_func_uint32_t_u_u(4294967295UL, l_1945)) > (g_130.f0 = (((safe_lshift_func_int16_t_s_u(0xE1B8L, 6)) != (p_20 != g_238.f2)) || l_1931.f2))))), 0UL))), l_1945), g_1888[0]));
            }
        }
    }
    return p_20;
}







static unsigned short func_31(unsigned char p_32)
{
    unsigned char l_33 = 0xA6L;
    l_33 = 9L;
    return g_10;
}







static unsigned func_35(struct S1 p_36, int p_37)
{
    short l_1465 = 0xD5CAL;
    int l_1468 = 0L;
    int l_1480 = (-7L);
    char l_1519[8][6][5] = {{{0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}}, {{0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}}, {{0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}}, {{0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}}, {{0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}}, {{0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}}, {{0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}}, {{0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}, {0xCEL, (-1L), 3L, 0L, 0x62L}}};
    struct S1 l_1538[5][3] = {{{1UL,0UL,0xACE327CEL,0x03L,0xE9L,6L,0xBE24C9C0L,0xFD36L,1L}, {1UL,1UL,0x9A35EECBL,0xF0L,0x7DL,0xB1862170L,0xF9C38618L,0x09CAL,-7L}, {0x2AL,0xEBL,0x10DF3C30L,0xE8L,0x04L,5L,4294967286UL,0x3F89L,0L}}, {{1UL,0UL,0xACE327CEL,0x03L,0xE9L,6L,0xBE24C9C0L,0xFD36L,1L}, {1UL,1UL,0x9A35EECBL,0xF0L,0x7DL,0xB1862170L,0xF9C38618L,0x09CAL,-7L}, {0x2AL,0xEBL,0x10DF3C30L,0xE8L,0x04L,5L,4294967286UL,0x3F89L,0L}}, {{1UL,0UL,0xACE327CEL,0x03L,0xE9L,6L,0xBE24C9C0L,0xFD36L,1L}, {1UL,1UL,0x9A35EECBL,0xF0L,0x7DL,0xB1862170L,0xF9C38618L,0x09CAL,-7L}, {0x2AL,0xEBL,0x10DF3C30L,0xE8L,0x04L,5L,4294967286UL,0x3F89L,0L}}, {{1UL,0UL,0xACE327CEL,0x03L,0xE9L,6L,0xBE24C9C0L,0xFD36L,1L}, {1UL,1UL,0x9A35EECBL,0xF0L,0x7DL,0xB1862170L,0xF9C38618L,0x09CAL,-7L}, {0x2AL,0xEBL,0x10DF3C30L,0xE8L,0x04L,5L,4294967286UL,0x3F89L,0L}}, {{1UL,0UL,0xACE327CEL,0x03L,0xE9L,6L,0xBE24C9C0L,0xFD36L,1L}, {1UL,1UL,0x9A35EECBL,0xF0L,0x7DL,0xB1862170L,0xF9C38618L,0x09CAL,-7L}, {0x2AL,0xEBL,0x10DF3C30L,0xE8L,0x04L,5L,4294967286UL,0x3F89L,0L}}};
    int l_1589 = (-1L);
    short l_1658[7][4][1] = {{{0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}}};
    struct S1 l_1673 = {0x08L,0x46L,0x6F4813F6L,0x68L,0xFEL,0xFCC4DA51L,1UL,0x18DCL,2L};
    struct S1 l_1693 = {0UL,250UL,-1L,0xB6L,0xC9L,4L,0x2A1B403AL,65533UL,0x409AL};
    int i, j, k;
    if (((safe_mul_func_int8_t_s_s(func_41(g_10), l_1465)) > 0L))
    {
        unsigned short l_1479 = 65535UL;
        int l_1481 = 1L;
        int l_1482 = (-8L);
        unsigned l_1496[4] = {4294967289UL, 1UL, 4294967289UL, 1UL};
        int i;
        p_37 = (safe_lshift_func_int8_t_s_u(((g_1302.f7 || (l_1468 = func_31(p_36.f6))) == 0x3526L), (safe_sub_func_int16_t_s_s((l_1482 = (p_36.f8 <= (l_1481 = (safe_add_func_uint8_t_u_u((l_1465 || ((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((g_1302.f0 = (p_36.f0 &= ((safe_add_func_uint16_t_u_u((l_1479 || (g_238.f0 >= (g_878 & 0xEEL))), l_1465)) | p_37))), l_1465)) | p_36.f2), 6)) <= l_1480)), 0xE3L))))), l_1465))));
        for (g_1302.f3 = 0; (g_1302.f3 < 8); g_1302.f3++)
        {
            unsigned l_1493 = 4294967295UL;
            int l_1509 = 0L;
            g_130 = g_130;
            g_130 = g_130;
            if (g_487[2][1])
            {
                unsigned l_1485[9] = {0x3CF890EFL, 0x3CF890EFL, 0xB0716D56L, 0x3CF890EFL, 0x3CF890EFL, 0xB0716D56L, 0x3CF890EFL, 0x3CF890EFL, 0xB0716D56L};
                int i;
                l_1485[4] |= p_36.f4;
            }
            else
            {
                unsigned short l_1487 = 0x3469L;
                int l_1488 = (-1L);
                if (p_36.f7)
                    break;
                if ((p_37 = (func_31((l_1479 | ((((p_36.f1 | (func_31(p_36.f2) | (1L < 0x36E2A02FL))) < (((safe_unary_minus_func_uint32_t_u(func_31(l_1487))) | (-5L)) <= l_1487)) != p_36.f7) | l_1488))) != g_70)))
                {
                    g_45 &= ((p_36.f5 ^ (g_130.f2 = (safe_sub_func_uint32_t_u_u(p_36.f0, ((safe_lshift_func_int8_t_s_u(g_130.f8, 7)) ^ func_31(l_1493)))))) || 0xC8A4L);
                    for (g_687.f4 = 0; (g_687.f4 <= 3); g_687.f4 += 1)
                    {
                        int i, j;
                        return g_487[g_687.f4][g_687.f4];
                    }
                    g_238.f5 = 0x069A0CAAL;
                }
                else
                {
                    for (p_36.f8 = 0; (p_36.f8 <= 22); p_36.f8 = safe_add_func_int8_t_s_s(p_36.f8, 1))
                    {
                        p_37 = p_36.f2;
                        if (l_1480)
                            continue;
                        if (p_36.f3)
                            break;
                        l_1509 |= ((l_1496[0] = 0x420CL) >= (((func_31(((l_1488 = (safe_rshift_func_int16_t_s_u((!1L), 15))) <= p_36.f7)) >= (safe_sub_func_uint8_t_u_u((~p_36.f0), (safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_36.f3, g_238.f6)), ((safe_lshift_func_int8_t_s_u(p_36.f1, g_1302.f7)) | 1L))) == p_37) < g_238.f4), g_126))))) || 1UL) <= p_36.f2));
                    }
                }
                g_130.f2 = ((safe_mul_func_int16_t_s_s(p_36.f2, func_31(l_1488))) || ((safe_sub_func_uint16_t_u_u(65535UL, 65534UL)) | g_487[2][1]));
            }
            for (g_687.f0 = 7; (g_687.f0 <= 49); ++g_687.f0)
            {
                struct S1 l_1516 = {250UL,0x56L,-1L,0x6DL,0xCEL,0xF862220FL,4294967295UL,0xD47BL,0L};
                l_1516 = g_130;
                for (l_1479 = 0; (l_1479 >= 36); l_1479++)
                {
                    p_36 = g_130;
                    l_1481 = l_1496[2];
                }
            }
        }
        l_1538[1][0] = func_74(g_130.f4, l_1519[4][0][0], (safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((p_36.f6 || (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((g_130.f3 = g_121) != (safe_div_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((l_1468 = ((0x5BL >= l_1480) <= (g_1302.f8 |= ((safe_div_func_uint32_t_u_u(g_687.f6, l_1519[2][2][1])) <= (safe_add_func_int32_t_s_s(p_36.f0, p_36.f5)))))) != 0x64L), l_1496[0])) == l_1481), l_1481))), l_1481)), 0x7299L))), g_130.f4)), 8)) || p_36.f8), g_687.f0)), g_130.f0);
    }
    else
    {
        struct S1 l_1539 = {0xD0L,0xE3L,0x50682EB4L,0xBBL,0xD2L,0x27B4CCCEL,4294967295UL,0UL,0L};
        g_1302 = l_1539;
        for (p_36.f5 = 0; (p_36.f5 <= 3); p_36.f5 += 1)
        {
            char l_1597 = 9L;
            int l_1609 = 1L;
            unsigned short l_1632[5][1][9] = {{{5UL, 0xF393L, 5UL, 0x84AFL, 65533UL, 0xCD27L, 0xD884L, 0xBB5FL, 0x957EL}}, {{5UL, 0xF393L, 5UL, 0x84AFL, 65533UL, 0xCD27L, 0xD884L, 0xBB5FL, 0x957EL}}, {{5UL, 0xF393L, 5UL, 0x84AFL, 65533UL, 0xCD27L, 0xD884L, 0xBB5FL, 0x957EL}}, {{5UL, 0xF393L, 5UL, 0x84AFL, 65533UL, 0xCD27L, 0xD884L, 0xBB5FL, 0x957EL}}, {{5UL, 0xF393L, 5UL, 0x84AFL, 65533UL, 0xCD27L, 0xD884L, 0xBB5FL, 0x957EL}}};
            int i, j, k;
            if (p_36.f6)
                break;
            if (((g_687.f0 = g_130.f4) | g_1302.f1))
            {
                g_238.f6 = 0x33C5C8D3L;
                return g_1302.f0;
            }
            else
            {
                unsigned l_1553 = 1UL;
                struct S1 l_1558 = {0x89L,0x14L,7L,0x6CL,-10L,1L,4294967295UL,1UL,0xE043L};
                if ((safe_rshift_func_int8_t_s_s(l_1538[1][0].f3, 1)))
                {
                    for (g_687.f6 = 0; (g_687.f6 <= 4); g_687.f6 += 1)
                    {
                        unsigned l_1542 = 0x6ACD499FL;
                        l_1542 = g_878;
                    }
                    if (p_36.f2)
                        break;
                    return p_36.f5;
                }
                else
                {
                    l_1468 = g_238.f0;
                }
                for (g_45 = 3; (g_45 >= 0); g_45 -= 1)
                {
                    struct S1 l_1559[6] = {{0x67L,0UL,-1L,0x4AL,0x5DL,1L,0x2C1A4B6DL,1UL,7L}, {0x67L,0UL,-1L,0x4AL,0x5DL,1L,0x2C1A4B6DL,1UL,7L}, {0x67L,0UL,-1L,0x4AL,0x5DL,1L,0x2C1A4B6DL,1UL,7L}, {0x67L,0UL,-1L,0x4AL,0x5DL,1L,0x2C1A4B6DL,1UL,7L}, {0x67L,0UL,-1L,0x4AL,0x5DL,1L,0x2C1A4B6DL,1UL,7L}, {0x67L,0UL,-1L,0x4AL,0x5DL,1L,0x2C1A4B6DL,1UL,7L}};
                    int i, j;
                    g_878 = ((g_487[g_45][g_45] < (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((l_1539.f2 |= g_487[(g_45 + 2)][p_36.f5]), 6)) < ((((((p_36.f3 = ((safe_mul_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(1L, 1)), ((l_1553 = g_487[(g_45 + 5)][p_36.f5]) >= func_31(g_130.f8)))) < (g_10 && (safe_sub_func_uint8_t_u_u(7UL, (safe_sub_func_int16_t_s_s(func_31((g_130.f1 ^= g_834)), 6UL))))))) != 0xBFL) == 1UL) || g_96) || 255UL) || g_130.f8)), l_1539.f7)), g_487[(g_45 + 5)][p_36.f5]))) == (-1L));
                    for (g_1302.f4 = 0; (g_1302.f4 <= 2); g_1302.f4 += 1)
                    {
                        int i, j, k;
                        p_37 = (l_1519[g_45][g_1302.f4][(p_36.f5 + 1)] >= (5UL | g_70));
                    }
                    for (g_834 = 3; (g_834 >= 0); g_834 -= 1)
                    {
                        int i, j, k;
                        g_238.f6 = l_1519[g_45][(g_834 + 2)][(g_45 + 1)];
                        l_1559[3] = l_1558;
                        l_1558.f2 = (0L & ((p_37 = ((p_37 < func_31((((0x818CL == (l_1480 = (safe_rshift_func_uint16_t_u_u(func_31((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((g_687.f5 != ((p_36.f3 || g_1302.f2) && (safe_add_func_int32_t_s_s(l_1558.f8, (p_36.f2 = l_1559[3].f8))))), (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_1302.f8, 10)), 0x12CEL)), p_36.f1)), g_687.f1)))), l_1558.f4)), p_37)), l_1538[1][0].f5)) < g_126), l_1519[1][0][4]))), 13)))) != p_36.f3) == g_45))) & p_36.f6)) > l_1538[1][0].f1));
                    }
                }
                l_1539.f2 |= 0x0688B630L;
            }
            for (g_238.f5 = 0; (g_238.f5 <= 3); g_238.f5 += 1)
            {
                int l_1582 = 0xEB6D72CAL;
                short l_1629 = 0x8C27L;
                int i, j;
                p_36.f2 = 0xEE037E7BL;
                g_687.f5 &= l_1582;
                l_1597 |= (+(func_31((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0UL, 1)), (safe_div_func_uint16_t_u_u(l_1589, p_36.f0)))) | (safe_unary_minus_func_uint8_t_u(p_36.f3))) >= ((safe_mul_func_uint8_t_u_u(0xC2L, (safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_1582, p_36.f8)), p_37)))) >= p_37))) > g_130.f8));
                if (((((((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((!(4L ^ ((0x9AL > (((g_487[(p_36.f5 + 4)][g_238.f5] = (safe_mul_func_uint8_t_u_u((l_1589 |= 248UL), func_31(p_36.f2)))) >= (l_1480 ^= (safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_37, (safe_add_func_uint16_t_u_u((l_1609 = func_31(g_687.f5)), g_45)))), p_36.f5)))) >= g_130.f8)) ^ 0x34L))))), p_36.f8)) == g_687.f4) > p_36.f4) < 0UL) < 0x102D9C32L) | p_36.f2))
                {
                    int l_1619 = (-3L);
                    int l_1622 = 5L;
                    p_37 |= l_1539.f6;
                    for (p_36.f1 = 0; (p_36.f1 <= 4); p_36.f1 += 1)
                    {
                        int i, j, k;
                        l_1539.f2 &= (l_1519[(g_238.f5 + 1)][(g_238.f5 + 1)][(p_36.f5 + 1)] != (~l_1519[(g_238.f5 + 1)][(g_238.f5 + 1)][(p_36.f5 + 1)]));
                        p_37 ^= (safe_mod_func_uint16_t_u_u(g_1302.f2, (l_1468 = (func_31((p_36.f0 = g_1302.f0)) | func_31(l_1597)))));
                        l_1589 &= ((g_130.f5 < ((((safe_div_func_uint32_t_u_u(((l_1619 = ((0x3FE45915L >= (safe_unary_minus_func_uint16_t_u(g_238.f0))) >= 0xCEL)) >= 0UL), 1UL)) || (((g_130.f3 ^= (safe_mul_func_int16_t_s_s(func_31(g_238.f6), 0x2693L))) > g_487[2][1]) || 0UL)) || g_81) < 4294967295UL)) <= l_1622);
                    }
                    for (l_1589 = 4; (l_1589 >= 0); l_1589 -= 1)
                    {
                        int i, j, k;
                        g_130.f2 = (p_36.f2 = l_1519[g_238.f5][l_1589][(g_238.f5 + 1)]);
                        g_130 = l_1538[1][0];
                    }
                    p_36.f2 ^= p_37;
                }
                else
                {
                    unsigned l_1633[8] = {9UL, 1UL, 9UL, 1UL, 9UL, 1UL, 9UL, 1UL};
                    int i;
                    for (p_36.f0 = 0; (p_36.f0 < 34); p_36.f0 = safe_add_func_uint16_t_u_u(p_36.f0, 6))
                    {
                        g_238.f6 |= (-1L);
                        if (g_238.f0)
                            break;
                        l_1609 |= func_31(func_31(p_36.f2));
                        p_37 &= (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(p_36.f7, l_1629)), 4UL));
                    }
                    for (l_1589 = 0; (l_1589 > (-23)); l_1589 = safe_sub_func_int16_t_s_s(l_1589, 4))
                    {
                        l_1538[1][0].f2 = l_1632[2][0][4];
                        g_125 ^= func_31((l_1633[4] = (func_31(func_31(l_1538[1][0].f3)) & 65528UL)));
                    }
                }
            }
        }
        g_1302.f2 &= l_1539.f7;
    }
    for (p_36.f3 = 0; (p_36.f3 > 2); p_36.f3 = safe_add_func_int32_t_s_s(p_36.f3, 5))
    {
        int l_1644 = 5L;
        int l_1657 = (-10L);
        struct S1 l_1672 = {1UL,6UL,1L,0x87L,-7L,0L,0UL,0xD4E9L,0xC585L};
        unsigned l_1687[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1687[i] = 0UL;
        for (g_1302.f7 = 0; (g_1302.f7 < 27); g_1302.f7 = safe_add_func_uint32_t_u_u(g_1302.f7, 8))
        {
            unsigned l_1640[4];
            int l_1643[5] = {0x1C1F915AL, 0xA8AA358DL, 0x1C1F915AL, 0xA8AA358DL, 0x1C1F915AL};
            int l_1660[9][9] = {{0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL}, {0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL}, {0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL}, {0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL}, {0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL}, {0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL}, {0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL}, {0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL}, {0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL, 0L, 0x0A8623BDL}};
            int l_1661 = 5L;
            int i, j;
            for (i = 0; i < 4; i++)
                l_1640[i] = 0x172952E3L;
            if (func_31(((safe_div_func_int32_t_s_s((l_1640[2] | g_238.f2), (((safe_div_func_int32_t_s_s((l_1643[1] & func_31((p_36.f1 |= l_1644))), (((l_1658[4][1][0] = (safe_mul_func_uint8_t_u_u(1UL, (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_1657 = (safe_mod_func_int32_t_s_s(func_31(l_1589), l_1538[1][0].f1))), 0xD522F5EFL)), p_36.f0)), 0)), (-1L)))))) != l_1538[1][0].f4) & 8UL))) >= 0xA9EEE161L) | p_36.f2))) <= g_70)))
            {
                int l_1659 = 0x50843491L;
                l_1659 ^= l_1640[1];
                g_1302.f2 &= (l_1659 == ((((l_1661 = (l_1660[7][6] = g_81)) || ((0xCC39L | func_31(g_130.f2)) >= p_36.f6)) <= ((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_1538[1][0].f1, (safe_mul_func_int8_t_s_s((func_31((l_1640[3] != (g_487[2][1] |= 0x29BAL))) <= p_36.f3), 0xD9L)))), 12)) <= 251UL)) != 0x75L));
                p_37 ^= l_1659;
                p_37 ^= (safe_sub_func_int8_t_s_s((g_687.f3 | p_36.f7), 9L));
            }
            else
            {
                g_687.f5 |= l_1657;
                for (l_1468 = 0; (l_1468 < (-14)); --l_1468)
                {
                    l_1672 = p_36;
                    l_1538[1][0].f2 ^= (g_687.f6 | func_31(p_36.f6));
                    for (l_1672.f7 = 0; (l_1672.f7 <= 2); l_1672.f7 += 1)
                    {
                        int i, j;
                        return g_487[(l_1672.f7 + 5)][l_1672.f7];
                    }
                    l_1673 = g_1302;
                }
            }
            return p_36.f2;
        }
        for (l_1672.f8 = 28; (l_1672.f8 < 6); l_1672.f8 = safe_sub_func_uint32_t_u_u(l_1672.f8, 4))
        {
            const unsigned l_1676 = 0x6E881D25L;
            unsigned l_1688 = 4294967295UL;
            g_1689 &= ((l_1672.f2 = 0xF3L) != (g_10 && (l_1676 & (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((func_31((~p_36.f1)) < (safe_lshift_func_uint8_t_u_s((0x49L && ((safe_mul_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(l_1468, 3)) < ((-8L) && func_54((((p_36.f6 == l_1468) > p_36.f2) ^ g_130.f0), l_1687[1], l_1688))) != 8L), 250UL)) | 0x66B12AB2L)), 7))), p_36.f0)), 1L)))));
        }
        l_1538[1][0].f2 = p_36.f7;
        if (p_36.f7)
        {
            struct S1 l_1692[4][7][1] = {{{{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}}, {{{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}}, {{{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}}, {{{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}, {{0x7BL,0xEEL,-6L,0L,0L,0x88F8AB72L,0xF3EF6E30L,0x3B39L,0L}}}};
            int i, j, k;
            g_238.f5 ^= (g_130.f2 &= (safe_lshift_func_uint8_t_u_u(g_1302.f8, (g_130.f1 = g_1302.f7))));
            l_1673 = (l_1692[0][0][0] = p_36);
        }
        else
        {
            l_1693 = l_1693;
        }
    }
    return l_1480;
}







static char func_41(unsigned p_42)
{
    unsigned l_71 = 0xE8D7FF0BL;
    int l_1404 = 0x6DB945DEL;
    char l_1410 = 1L;
    struct S1 l_1440 = {1UL,0UL,0xF8C6C8C7L,0L,0x14L,-2L,4294967286UL,4UL,0x8B61L};
    for (p_42 = 0; (p_42 < 15); p_42++)
    {
        unsigned short l_69[7] = {0x7052L, 0x5C40L, 0x7052L, 0x5C40L, 0x7052L, 0x5C40L, 0x7052L};
        int l_72 = 0x15EA9550L;
        int i;
        for (g_45 = 5; (g_45 > 29); g_45 = safe_add_func_int16_t_s_s(g_45, 7))
        {
            unsigned l_48[4] = {1UL, 1UL, 1UL, 1UL};
            int l_49 = (-2L);
            int l_60 = 9L;
            short l_73 = 0x3EF4L;
            int l_1400 = 0x84BE3AD0L;
            struct S1 l_1401[8] = {{0x10L,0x58L,0xEB4A3B97L,0L,1L,9L,1UL,0x8BE7L,0x01CAL}, {1UL,0UL,0x279D6382L,-1L,0x91L,-1L,1UL,65531UL,0x53BBL}, {0x10L,0x58L,0xEB4A3B97L,0L,1L,9L,1UL,0x8BE7L,0x01CAL}, {1UL,0UL,0x279D6382L,-1L,0x91L,-1L,1UL,65531UL,0x53BBL}, {0x10L,0x58L,0xEB4A3B97L,0L,1L,9L,1UL,0x8BE7L,0x01CAL}, {1UL,0UL,0x279D6382L,-1L,0x91L,-1L,1UL,65531UL,0x53BBL}, {0x10L,0x58L,0xEB4A3B97L,0L,1L,9L,1UL,0x8BE7L,0x01CAL}, {1UL,0UL,0x279D6382L,-1L,0x91L,-1L,1UL,65531UL,0x53BBL}};
            int i;
            if (l_48[2])
            {
                char l_1399 = 2L;
                l_49 = g_10;
                l_1400 ^= ((safe_mul_func_uint8_t_u_u((l_1399 = ((safe_add_func_int8_t_s_s((g_10 || func_54((+(safe_mul_func_int16_t_s_s(func_31(((l_49 = 0x8E03L) | l_48[2])), (l_60 = 65530UL)))), (safe_mul_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(p_42, (safe_mul_func_int16_t_s_s(func_31((l_72 = ((safe_lshift_func_uint8_t_u_u(((func_31((~(g_45 != (l_69[5] = 0x3C00EEBEL)))) || 0xCAL) < p_42), g_70)) == l_71))), 0xC8A5L)))) >= p_42) != g_45), l_73)), g_45)), g_238.f1)) != (-1L))), g_980)) | 65532UL);
                for (l_49 = 3; (l_49 >= 0); l_49 -= 1)
                {
                    for (g_96 = 0; (g_96 <= 3); g_96 += 1)
                    {
                        l_1401[0] = g_130;
                    }
                }
            }
            else
            {
                return g_1302.f2;
            }
        }
        l_72 = l_71;
        g_238.f5 = l_69[3];
        g_687.f6 &= (safe_mod_func_uint16_t_u_u(p_42, l_71));
    }
    l_1404 &= g_238.f2;
    l_1404 ^= p_42;
    for (g_238.f4 = 0; (g_238.f4 < 42); g_238.f4 = safe_add_func_int8_t_s_s(g_238.f4, 6))
    {
        unsigned l_1416 = 8UL;
        int l_1417 = 0xD9694255L;
        int l_1420 = 0xB0BD1C0AL;
        struct S1 l_1422 = {0x6FL,255UL,0xCC6D4A9DL,0L,0x20L,0xC8F13C5EL,0xD481E357L,65528UL,0x2BC9L};
        for (g_238.f6 = 8; (g_238.f6 == 22); g_238.f6 = safe_add_func_int32_t_s_s(g_238.f6, 6))
        {
            unsigned short l_1409 = 0xA9EEL;
            struct S1 l_1437[8][7][2] = {{{{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}}, {{{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}}, {{{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}}, {{{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}}, {{{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}}, {{{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}}, {{{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}}, {{{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}, {{0x8AL,0UL,0x600BB2DAL,0x2CL,7L,0x2553AB58L,4UL,1UL,9L}, {0x58L,252UL,-1L,-9L,0xAFL,-1L,0UL,65528UL,0x582AL}}}};
            unsigned short l_1463 = 0x5FE2L;
            int i, j, k;
            l_1410 = ((l_1409 && 0x39L) & (g_1302.f0 = (g_1302.f2 && l_1404)));
            if (((((g_1302.f5 > (safe_lshift_func_uint8_t_u_s((p_42 | (l_1420 = (g_130.f4 = (safe_unary_minus_func_uint8_t_u(((safe_mod_func_uint8_t_u_u(l_1416, (l_1416 || (-2L)))) | ((l_1417 &= 0x90258837L) == (safe_rshift_func_int16_t_s_u(p_42, (g_81 = (+g_238.f4))))))))))), 5))) || (g_130.f6 == g_70)) ^ 0x3B6F7612L) && g_1302.f0))
            {
                struct S1 l_1421 = {1UL,255UL,0x4F642CBAL,0L,0x21L,0x47C33504L,1UL,0xBB47L,0x84B5L};
                struct S1 l_1438 = {1UL,248UL,0x5547EE37L,0x05L,-1L,1L,1UL,0x9B29L,0L};
                l_1422 = l_1421;
                l_1404 = (g_125 |= ((g_1302.f3 = g_126) < (func_31((func_31(g_1302.f5) ^ (((g_130.f6 <= (safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((0xCD36L <= (((safe_mod_func_int32_t_s_s(func_31((safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(((g_1302.f8 ^ ((((l_71 < func_31((func_31((~(l_1410 ^ (safe_mod_func_int32_t_s_s(func_31((p_42 != 0x7726623FL)), g_687.f5))))) & l_71))) != l_71) && 0xFAD5L) && l_71)) > p_42), l_1421.f7)), g_45)), 2))), p_42)) || l_1409) < l_1422.f0)), g_81)), p_42))) || p_42) || (-4L)))) >= (-1L))));
                for (l_1422.f5 = 0; (l_1422.f5 <= 3); l_1422.f5 += 1)
                {
                    for (g_238.f3 = 0; (g_238.f3 <= 3); g_238.f3 += 1)
                    {
                        int i, j;
                        l_1438 = l_1437[7][5][1];
                        if (g_487[(g_238.f3 + 4)][g_238.f3])
                            break;
                    }
                }
                g_238.f5 ^= (l_1437[7][5][1].f2 = p_42);
            }
            else
            {
                struct S1 l_1439 = {0xF4L,0xF9L,0x22D9E0C9L,0x0AL,-5L,0xB57943F4L,0UL,0x0BA4L,0x38BAL};
                for (g_126 = 0; (g_126 <= 3); g_126 += 1)
                {
                    l_1440 = l_1439;
                }
                for (g_130.f8 = 0; (g_130.f8 < 6); ++g_130.f8)
                {
                    char l_1445 = 0x5DL;
                    const int l_1448 = (-1L);
                    int l_1449 = 1L;
                    if (((((g_130.f8 && (((safe_mul_func_int8_t_s_s((l_1445 = p_42), func_31(p_42))) >= g_487[4][3]) > func_31((g_1302.f0 = (safe_mod_func_int8_t_s_s(0xF6L, g_96)))))) | (l_1448 & 65529UL)) > l_1439.f8) | p_42))
                    {
                        if (g_1302.f0)
                            break;
                        l_1449 = 2L;
                    }
                    else
                    {
                        unsigned char l_1456 = 0UL;
                        int l_1464[2][2] = {{(-9L), 0L}, {(-9L), 0L}};
                        int i, j;
                        if (l_71)
                            break;
                        g_687.f5 = (safe_mod_func_int32_t_s_s((((5UL <= ((l_1440.f2 = ((safe_sub_func_uint8_t_u_u(p_42, (l_1456 <= 0UL))) < (g_687.f3 = ((+g_238.f5) ^ (safe_sub_func_uint8_t_u_u(((g_1302.f7 > (l_1463 &= (p_42 >= (safe_div_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(g_980, ((-1L) || g_121))) | g_130.f8), l_1439.f7))))) < 0x99D4L), 255UL)))))) != 0xB303L)) || 0xC488A30CL) == l_1422.f4), p_42));
                        g_1302 = g_130;
                        l_1464[1][0] = (l_1422.f2 |= p_42);
                    }
                    return g_238.f2;
                }
            }
            g_878 = l_1437[7][5][1].f1;
        }
        l_1422.f2 &= p_42;
    }
    return g_238.f6;
}







static char func_54(char p_55, unsigned p_56, unsigned p_57)
{
    const unsigned char l_86 = 0x98L;
    struct S1 l_1396 = {0x5FL,255UL,-3L,0xA9L,8L,0x9905E853L,0x1D1DF1ABL,0UL,0L};
    l_1396 = func_74(((safe_div_func_uint32_t_u_u(p_56, func_31((g_81 = 0x29L)))) < p_55), func_31(func_31(p_57)), g_70, (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0x00C1L, p_57)), l_86)));
    g_130.f2 ^= (((g_130.f3 = (+(p_55 | (safe_div_func_int32_t_s_s(g_130.f5, l_1396.f8))))) | 0x30L) && l_1396.f5);
    g_130 = l_1396;
    return l_1396.f5;
}







static struct S1 func_74(short p_75, unsigned p_76, int p_77, int p_78)
{
    unsigned l_1385 = 0x3024D41DL;
    int l_1386 = (-1L);
    struct S1 l_1395 = {255UL,0UL,3L,4L,0x0EL,0x8EEBAEBDL,1UL,0x55ACL,-1L};
    l_1386 = (safe_rshift_func_int8_t_s_s(func_89(g_70), l_1385));
    l_1386 = (safe_rshift_func_uint16_t_u_u(65533UL, (247UL >= (safe_lshift_func_uint16_t_u_u(g_121, (g_130.f7 = (safe_rshift_func_uint8_t_u_s(246UL, 7))))))));
    l_1386 = (safe_div_func_uint32_t_u_u(l_1385, g_687.f0));
    g_238.f6 &= 0xC2908E87L;
    return l_1395;
}







static char func_89(char p_90)
{
    short l_93[6];
    int l_835 = 0L;
    int l_1384 = 9L;
    int i;
    for (i = 0; i < 6; i++)
        l_93[i] = 0xEA9DL;
    g_96 = (safe_mod_func_uint32_t_u_u(l_93[2], (func_31(p_90) || (safe_lshift_func_uint16_t_u_u(1UL, 13)))));
    for (g_81 = (-28); (g_81 <= 5); g_81++)
    {
        struct S0 l_106 = {0xDDCF39A3L,0x0827L,-4L,0x56L,4294967295UL,-1L,3L};
        l_1384 ^= func_99(func_102(l_106, p_90, p_90), (func_31((g_834 ^ (0xA8L && (l_835 = g_10)))) <= (+p_90)));
        g_238.f6 = (l_106.f5 &= g_878);
    }
    g_878 = (g_238.f0 || g_130.f8);
    return g_10;
}







static int func_99(struct S0 p_100, int p_101)
{
    unsigned char l_842 = 1UL;
    int l_845 = 1L;
    unsigned short l_890 = 65529UL;
    char l_908 = 0x46L;
    struct S1 l_965 = {5UL,0x15L,-1L,9L,0x2CL,-9L,0x215B3AA4L,65535UL,1L};
    int l_977 = 0x979C3207L;
    int l_1048 = 0x1DE94F09L;
    struct S1 l_1105[1][6][7] = {{{{0xC1L,0x28L,0xA981DC48L,1L,1L,0xEFA1713FL,0x3C84CE28L,0x4D8FL,9L}, {9UL,255UL,0xC929F8BFL,-5L,0x7EL,-9L,0x79B44458L,0UL,3L}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0UL,255UL,8L,0x86L,0x66L,-1L,4294967290UL,65530UL,5L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}}, {{0xC1L,0x28L,0xA981DC48L,1L,1L,0xEFA1713FL,0x3C84CE28L,0x4D8FL,9L}, {9UL,255UL,0xC929F8BFL,-5L,0x7EL,-9L,0x79B44458L,0UL,3L}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0UL,255UL,8L,0x86L,0x66L,-1L,4294967290UL,65530UL,5L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}}, {{0xC1L,0x28L,0xA981DC48L,1L,1L,0xEFA1713FL,0x3C84CE28L,0x4D8FL,9L}, {9UL,255UL,0xC929F8BFL,-5L,0x7EL,-9L,0x79B44458L,0UL,3L}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0UL,255UL,8L,0x86L,0x66L,-1L,4294967290UL,65530UL,5L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}}, {{0xC1L,0x28L,0xA981DC48L,1L,1L,0xEFA1713FL,0x3C84CE28L,0x4D8FL,9L}, {9UL,255UL,0xC929F8BFL,-5L,0x7EL,-9L,0x79B44458L,0UL,3L}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0UL,255UL,8L,0x86L,0x66L,-1L,4294967290UL,65530UL,5L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}}, {{0xC1L,0x28L,0xA981DC48L,1L,1L,0xEFA1713FL,0x3C84CE28L,0x4D8FL,9L}, {9UL,255UL,0xC929F8BFL,-5L,0x7EL,-9L,0x79B44458L,0UL,3L}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0UL,255UL,8L,0x86L,0x66L,-1L,4294967290UL,65530UL,5L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}}, {{0xC1L,0x28L,0xA981DC48L,1L,1L,0xEFA1713FL,0x3C84CE28L,0x4D8FL,9L}, {9UL,255UL,0xC929F8BFL,-5L,0x7EL,-9L,0x79B44458L,0UL,3L}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0UL,255UL,8L,0x86L,0x66L,-1L,4294967290UL,65530UL,5L}, {0xDBL,0xF1L,1L,8L,0L,0x58659020L,0xEC5F1463L,0UL,0xBB0FL}, {0x39L,255UL,-3L,0xC6L,0L,0x1D56E6F1L,1UL,1UL,0xFF78L}}}};
    unsigned l_1176 = 4294967295UL;
    unsigned short l_1208 = 1UL;
    unsigned short l_1209 = 0xB127L;
    const char l_1311 = 0xD7L;
    char l_1377 = 0L;
    int i, j, k;
    if ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(1L, 0)), (func_31(l_842) && (safe_mul_func_uint16_t_u_u((func_31((g_130.f7 & ((p_100.f0 = (l_845 = g_687.f4)) || l_845))) <= func_31((~(g_10 ^ (p_101 || 0L))))), p_100.f1))))), l_842)))
    {
        const unsigned l_877 = 0UL;
        int l_893[1][4];
        struct S1 l_923 = {0x25L,0xE8L,0xEB277597L,-3L,-2L,0x499F69F5L,4294967295UL,1UL,1L};
        int l_1042 = 0L;
        short l_1052 = 1L;
        unsigned l_1102 = 4294967295UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_893[i][j] = 0L;
        }
        if ((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(6L, 0x7E9432A6L)) <= ((func_31(((4294967289UL | p_100.f2) < (p_100.f5 && (g_125 <= (0x8266A1DCL >= ((-8L) > (safe_rshift_func_int16_t_s_u(p_100.f6, 6)))))))) || 0xBBD30236L) ^ p_100.f0)), 65535UL)) & l_842), 0x367E81B5L)))
        {
            unsigned l_854 = 0x43B4E672L;
            struct S1 l_880 = {0x56L,0xBBL,0x66CE8A58L,0xC5L,-1L,0xCF27F27BL,0x1FE44025L,0x8452L,4L};
            unsigned l_918[2][3];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_918[i][j] = 0x2AC48DA5L;
            }
            if ((l_854 < 4294967286UL))
            {
                int l_857[8] = {0x2D8AF944L, 0x510A5C1AL, 0x2D8AF944L, 0x510A5C1AL, 0x2D8AF944L, 0x510A5C1AL, 0x2D8AF944L, 0x510A5C1AL};
                int l_858 = 0xEAA6EEBDL;
                int l_859 = 0x37E613A3L;
                int i;
                for (g_238.f5 = 3; (g_238.f5 >= 0); g_238.f5 -= 1)
                {
                    unsigned l_876 = 4294967295UL;
                    int l_885 = (-1L);
                    g_125 = (((l_857[7] ^= (safe_div_func_int32_t_s_s((g_238.f6 &= 0x07AA667FL), g_130.f7))) | ((l_858 &= 0xD98AL) >= p_100.f4)) > l_859);
                    if ((safe_add_func_int16_t_s_s(g_687.f1, func_31(((safe_div_func_int8_t_s_s((1UL >= (0L | (safe_rshift_func_int8_t_s_u(g_687.f2, 5)))), (safe_div_func_int8_t_s_s(func_31(g_687.f0), (safe_mul_func_int16_t_s_s((+(((safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u((g_687.f3 >= p_100.f5), ((safe_rshift_func_int16_t_s_s(l_876, l_877)) ^ g_878))), p_101)) != g_130.f5) > g_687.f3)), l_842)))))) != g_130.f7)))))
                    {
                        return p_100.f1;
                    }
                    else
                    {
                        struct S1 l_879 = {0x94L,6UL,-10L,0L,0xB0L,0xADD61FE9L,0x30D5330DL,0x25E6L,1L};
                        if (g_238.f6)
                            break;
                        l_880 = (l_879 = g_130);
                        if (l_842)
                            continue;
                        g_687.f6 = ((p_100.f4 <= g_130.f7) ^ (0L || (p_100.f0 & (g_487[2][1] &= l_876))));
                    }
                    l_845 &= (4294967292UL ^ ((l_880.f2 ^= l_842) == (((func_31(g_238.f3) >= ((func_31((safe_div_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(g_238.f1, (p_101 ^ (l_858 = (l_885 = l_877))))) != p_100.f0), (safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s(g_130.f7, 0x23L)), p_100.f6))))) || l_890) ^ 0UL)) == 0x159FL) | 1L)));
                    if (p_100.f4)
                        continue;
                    for (g_238.f3 = 0; (g_238.f3 <= 3); g_238.f3 += 1)
                    {
                        int l_894 = 0xEC9F051AL;
                        int i, j;
                        g_130.f2 = ((safe_add_func_int16_t_s_s(((g_487[(g_238.f5 + 4)][g_238.f5] == (g_487[(g_238.f3 + 5)][g_238.f5] || func_31(p_100.f2))) & (((l_894 = (l_893[0][2] = p_100.f5)) & ((g_238.f0 = g_687.f3) | (g_238.f6 = (safe_mul_func_uint8_t_u_u((g_130.f1 = (l_885 == l_877)), (safe_add_func_uint8_t_u_u(g_126, 0xABL))))))) || g_130.f6)), p_100.f1)) ^ 5UL);
                    }
                }
            }
            else
            {
                int l_917 = 4L;
                if ((safe_rshift_func_int8_t_s_u((g_130.f4 = (safe_sub_func_uint32_t_u_u(0x84AC0751L, g_126))), (safe_div_func_int8_t_s_s(g_130.f7, 0xA3L)))))
                {
                    unsigned l_905 = 4294967293UL;
                    if (g_687.f0)
                    {
                        g_687.f5 = (g_125 <= l_880.f2);
                    }
                    else
                    {
                        p_100.f5 = g_238.f2;
                        l_905 = l_880.f4;
                        g_238.f6 = g_687.f2;
                    }
                    if (g_834)
                    {
                        l_880 = g_130;
                        return g_687.f6;
                    }
                    else
                    {
                        g_878 = p_100.f5;
                    }
                }
                else
                {
                    for (g_238.f5 = 0; (g_238.f5 <= 0); g_238.f5 += 1)
                    {
                        p_100.f5 = (g_130.f8 > ((0xD5L != g_687.f5) == 0UL));
                        if (g_130.f8)
                            break;
                        l_893[0][2] = (safe_mul_func_uint16_t_u_u(p_100.f5, l_908));
                        l_893[0][1] = 0x512C20BEL;
                    }
                }
                for (g_238.f2 = 0; (g_238.f2 >= 21); ++g_238.f2)
                {
                    char l_924[1];
                    int l_929 = 0x79CAFB68L;
                    int l_947 = 5L;
                    struct S1 l_966 = {1UL,1UL,0x5837042FL,-4L,0x21L,0x160DE335L,4UL,65528UL,0xDEE5L};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_924[i] = (-10L);
                    if ((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((l_917 || (g_96 = 4UL)), g_238.f3)), func_31((l_918[0][1] != ((safe_lshift_func_uint16_t_u_u((p_100.f3 || (g_487[8][1] = (safe_div_func_uint32_t_u_u(func_31(l_880.f3), (0L | (p_100.f3 ^ p_100.f3)))))), 7)) & p_100.f3))))) | g_687.f6), 0x318AL)))
                    {
                        unsigned short l_932[3][9][5] = {{{2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}}, {{2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}}, {{2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}, {2UL, 0xBD10L, 65535UL, 65535UL, 0xD9A2L}}};
                        int i, j, k;
                        l_880 = l_923;
                        l_880.f2 = l_924[0];
                        g_238.f6 = ((func_31((safe_add_func_uint32_t_u_u(((l_893[0][2] = l_893[0][2]) & (3L & ((p_100.f1 < ((safe_add_func_int16_t_s_s(p_100.f3, p_100.f1)) >= g_130.f5)) < (((l_929 <= ((safe_lshift_func_int16_t_s_u(l_932[1][5][1], 15)) & (safe_rshift_func_uint8_t_u_s((l_924[0] <= 0x6FL), g_45)))) && l_923.f0) | l_929)))), p_100.f4))) < 65535UL) || 6UL);
                        g_125 |= (l_947 = (((+((((g_687.f4 = (p_100.f6 < g_878)) && g_487[2][1]) | 1L) == (safe_mod_func_uint32_t_u_u(((+(((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_81, 0UL)), (g_121 |= ((safe_lshift_func_uint8_t_u_s(254UL, (((safe_sub_func_int8_t_s_s((g_130.f1 == (safe_div_func_int8_t_s_s(func_31(l_854), l_924[0]))), 254UL)) < l_924[0]) | (-10L)))) && 0x18L)))) >= 0UL) ^ 0xFAL)) && p_101), l_842)))) < l_880.f0) != (-1L)));
                    }
                    else
                    {
                        char l_948 = (-5L);
                        if (p_100.f5)
                            break;
                        l_948 = g_834;
                        l_947 &= (safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(l_880.f6, ((safe_mod_func_uint8_t_u_u(func_31(l_880.f4), func_31(l_924[0]))) && (safe_mod_func_int32_t_s_s(((l_948 > 251UL) & (safe_lshift_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(g_238.f1, l_918[0][2])) & p_100.f1) != p_100.f2), 15))), 3UL))))) || l_918[0][2]), p_100.f1));
                        g_238.f5 = (safe_rshift_func_int16_t_s_s(func_31(func_31(func_31(p_100.f0))), g_687.f5));
                    }
                    for (g_130.f8 = (-24); (g_130.f8 >= 7); g_130.f8++)
                    {
                        l_966 = l_965;
                        if (l_965.f8)
                            break;
                        l_966 = g_130;
                    }
                }
                l_880.f2 = g_687.f0;
            }
            for (l_880.f1 = 0; (l_880.f1 != 46); l_880.f1++)
            {
                g_125 ^= (((l_893[0][3] &= g_878) & (func_31((safe_div_func_uint16_t_u_u((l_923.f2 ^= 1UL), (safe_lshift_func_int8_t_s_u(func_31(p_100.f6), 0))))) && func_31(p_100.f0))) != ((-1L) | 0x5DL));
            }
            l_880 = l_880;
        }
        else
        {
            unsigned char l_995 = 0xE1L;
            int l_1002 = 0xCCB800B7L;
            unsigned l_1007[8][3][8] = {{{4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}}, {{4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}}, {{4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}}, {{4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}}, {{4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}}, {{4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}}, {{4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}}, {{4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}, {4294967295UL, 1UL, 0xEC40B059L, 0UL, 0UL, 4294967292UL, 0x5BF62A79L, 5UL}}};
            struct S1 l_1027 = {0xF9L,1UL,0xB95833E9L,0xC3L,-1L,-7L,0xB45B80F0L,0x1CC2L,1L};
            int i, j, k;
            for (p_100.f4 = 0; (p_100.f4 == 20); p_100.f4 = safe_add_func_int32_t_s_s(p_100.f4, 8))
            {
                l_965.f2 &= (g_130.f2 ^= (0L <= 0xE6FFL));
                l_893[0][2] = (g_687.f3 <= (safe_mod_func_uint16_t_u_u(((l_845 &= g_130.f5) && l_977), func_31(g_687.f5))));
            }
            g_130.f2 = (safe_mul_func_int8_t_s_s((p_101 ^ ((l_923.f2 = p_100.f6) > p_100.f2)), ((+l_965.f6) | g_980)));
            for (l_845 = 15; (l_845 == (-5)); l_845 = safe_sub_func_int32_t_s_s(l_845, 4))
            {
                unsigned l_991 = 1UL;
                int l_1026 = 0xD6619F2EL;
                int l_1089 = 0L;
                l_965.f2 &= p_101;
                for (g_130.f8 = 0; (g_130.f8 <= 15); g_130.f8 = safe_add_func_uint8_t_u_u(g_130.f8, 1))
                {
                    int l_994 = 1L;
                    int l_1039 = 0x4C194CEEL;
                    int l_1045 = 0x2EA5E7CEL;
                    for (g_130.f0 = (-7); (g_130.f0 < 5); ++g_130.f0)
                    {
                        p_100.f5 = func_31(p_100.f0);
                        p_100.f5 = (safe_add_func_int32_t_s_s((((safe_mul_func_int16_t_s_s((-8L), l_965.f8)) && 0xB484E727L) >= 8L), l_991));
                    }
                    if ((safe_rshift_func_int8_t_s_s(((g_130.f4 &= (l_995 = (l_994 |= p_101))) >= 247UL), 7)))
                    {
                        short l_1008 = 1L;
                        int l_1017 = (-10L);
                        p_100.f5 = (((~(safe_add_func_int32_t_s_s(p_100.f6, l_994))) & p_100.f4) | (((g_130.f3 = (safe_lshift_func_uint8_t_u_u((+g_130.f0), ((((safe_add_func_uint32_t_u_u((l_1002 = func_31(p_101)), ((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((g_687.f3 | (l_1007[7][1][5] ^= (func_31(((-1L) | (0x001A9305L == 1UL))) > l_994))) < l_994), g_96)), l_995)) ^ 0xA9L))) ^ 5UL) & 0UL) < g_487[2][3])))) == 0UL) <= l_1008));
                        l_1017 |= ((safe_rshift_func_int8_t_s_s(p_100.f6, 5)) || (l_1008 && ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(l_1008, func_31((p_100.f3 ^= func_31(l_995))))), 3)), (l_994 <= (g_130.f4 ^ func_31(p_100.f6))))) == l_991)));
                        g_687.f6 = l_994;
                    }
                    else
                    {
                        struct S1 l_1018 = {0UL,0x26L,0x192E49F9L,-7L,-4L,0x45820B6EL,0xC4B86CC7L,0xDAD6L,0L};
                        l_1018 = g_130;
                        p_100.f5 = (~(safe_sub_func_int16_t_s_s(0L, (safe_sub_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u((0x11F7L == (g_125 <= p_100.f3)))) | l_923.f7), (safe_sub_func_uint8_t_u_u((g_238.f2 && func_31(l_1018.f7)), (l_1026 = ((func_31(g_130.f3) < 0x26L) ^ l_1002)))))))));
                        l_1027 = l_923;
                        l_1045 = (safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_923.f2 = (safe_rshift_func_int8_t_s_s(g_130.f5, (safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s(0xF6L, (p_100.f3 = g_238.f1))), ((l_1039 ^= 0xACL) | ((l_1002 = ((safe_div_func_int16_t_s_s((l_893[0][2] |= (l_965.f2 = l_1007[7][1][5])), (+((+(((l_1026 = 255UL) | l_1042) & 0xE4A9L)) != (safe_mul_func_uint8_t_u_u((func_31(p_100.f0) ^ 0x11977794L), (-6L))))))) <= 6L)) <= g_238.f0))))))), g_130.f3)), 9))));
                    }
                    if ((((safe_add_func_int8_t_s_s(p_100.f1, (p_100.f1 || p_101))) > l_1048) && l_994))
                    {
                        return g_81;
                    }
                    else
                    {
                        short l_1049 = 0xC0F1L;
                        unsigned char l_1057[9][2][4] = {{{8UL, 0xCDL, 249UL, 0xCDL}, {8UL, 0xCDL, 249UL, 0xCDL}}, {{8UL, 0xCDL, 249UL, 0xCDL}, {8UL, 0xCDL, 249UL, 0xCDL}}, {{8UL, 0xCDL, 249UL, 0xCDL}, {8UL, 0xCDL, 249UL, 0xCDL}}, {{8UL, 0xCDL, 249UL, 0xCDL}, {8UL, 0xCDL, 249UL, 0xCDL}}, {{8UL, 0xCDL, 249UL, 0xCDL}, {8UL, 0xCDL, 249UL, 0xCDL}}, {{8UL, 0xCDL, 249UL, 0xCDL}, {8UL, 0xCDL, 249UL, 0xCDL}}, {{8UL, 0xCDL, 249UL, 0xCDL}, {8UL, 0xCDL, 249UL, 0xCDL}}, {{8UL, 0xCDL, 249UL, 0xCDL}, {8UL, 0xCDL, 249UL, 0xCDL}}, {{8UL, 0xCDL, 249UL, 0xCDL}, {8UL, 0xCDL, 249UL, 0xCDL}}};
                        int i, j, k;
                        g_687.f6 = ((l_1049 <= (g_687.f3 = (p_100.f3 = l_923.f3))) != ((l_1002 = 9UL) && (safe_div_func_uint32_t_u_u(((l_1052 ^= func_31((func_31(g_121) < g_238.f0))) && (safe_rshift_func_int8_t_s_s(0L, ((((safe_mul_func_int8_t_s_s(l_923.f4, p_100.f5)) >= l_991) || 0x67L) || l_1057[2][0][3])))), p_100.f2))));
                        if (l_923.f2)
                            continue;
                    }
                }
                g_130.f2 = (g_238.f6 = (g_238.f5 = (+((safe_div_func_int16_t_s_s((l_923.f3 > g_126), (l_893[0][2] = func_31(l_923.f4)))) < 0x6910L))));
                for (l_923.f3 = 13; (l_923.f3 <= 18); l_923.f3 = safe_add_func_int16_t_s_s(l_923.f3, 2))
                {
                    short l_1068 = 0x917BL;
                    if (l_845)
                    {
                        unsigned l_1069 = 0xBA87D5A3L;
                        int l_1082 = 0xD981BE52L;
                        l_1026 = (p_100.f5 = p_100.f1);
                        g_130.f2 = ((l_1069 = (safe_sub_func_int16_t_s_s((g_487[7][0] = ((safe_sub_func_uint8_t_u_u(248UL, (safe_div_func_uint16_t_u_u(g_130.f6, func_31((g_130.f0 ^= (1UL && (l_1068 = g_130.f8)))))))) || p_100.f4)), (l_1026 != p_100.f3)))) > (p_100.f0 |= p_100.f2));
                        l_1082 = ((g_45 | func_31(p_100.f4)) > (p_100.f3 = (safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_100.f3, (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((+g_687.f1), 5)), (safe_sub_func_uint16_t_u_u(p_101, (safe_div_func_int16_t_s_s((0x829D0401L | ((func_31(l_1026) == 250UL) ^ g_687.f2)), g_121)))))))), 1UL))));
                        g_238.f5 = 0x2BCF22E4L;
                    }
                    else
                    {
                        return g_238.f0;
                    }
                    g_878 = (1UL <= (l_965.f2 |= func_31(((safe_mul_func_int16_t_s_s((g_130.f8 = l_1068), (((p_100.f6 <= (safe_add_func_uint8_t_u_u((0xD82DE2E2L <= ((((safe_mod_func_uint32_t_u_u(l_1026, func_31(g_96))) != l_923.f3) & (0x4967L & l_877)) && p_100.f2)), p_100.f0))) >= g_81) >= 0UL))) != l_1089))));
                    for (l_1027.f0 = 0; (l_1027.f0 <= 0); l_1027.f0 += 1)
                    {
                        int i, j;
                        if (l_893[l_1027.f0][l_1027.f0])
                            break;
                    }
                }
            }
        }
        g_238.f5 = func_31(((g_96 = ((safe_rshift_func_int16_t_s_s(l_965.f4, g_130.f7)) || (l_965.f2 &= (safe_mul_func_uint16_t_u_u(p_100.f0, g_130.f7))))) && (safe_add_func_uint32_t_u_u((((g_125 = p_100.f5) >= l_908) ^ (func_31((func_31((g_130.f1 = (p_100.f0 != g_70))) == l_893[0][2])) & 0L)), p_100.f5))));
        for (l_923.f6 = 0; (l_923.f6 <= 1); l_923.f6 = safe_add_func_uint32_t_u_u(l_923.f6, 7))
        {
            unsigned short l_1103 = 9UL;
            for (g_238.f0 = 0; (g_238.f0 < 52); g_238.f0 = safe_add_func_int16_t_s_s(g_238.f0, 7))
            {
                unsigned l_1104 = 4294967295UL;
                l_845 = g_687.f5;
                l_965.f2 = (((~l_1102) >= l_1103) && l_1104);
                l_893[0][2] ^= g_130.f0;
            }
            if (p_100.f3)
                break;
            g_878 ^= g_487[2][1];
        }
        return p_100.f6;
    }
    else
    {
        unsigned l_1106 = 0x2AD69878L;
        int l_1147 = 0x12E5CF88L;
        struct S1 l_1154 = {0xEEL,0x59L,5L,0L,0x65L,-10L,0x3376161BL,1UL,-8L};
        struct S1 l_1240 = {1UL,0xF1L,1L,0xD8L,0x9AL,0xDE2ADE22L,0xA963A4F0L,0x87E0L,0x4419L};
        const unsigned l_1275 = 0xC1FD36C9L;
        unsigned short l_1341 = 0x08F9L;
        for (l_965.f5 = 0; (l_965.f5 <= 3); l_965.f5 += 1)
        {
            unsigned l_1107 = 0x8477DEDAL;
            int l_1150 = 0x50205EF0L;
            g_687.f6 = g_238.f5;
            l_1105[0][3][1] = g_130;
            if (func_31((l_1106 == g_687.f6)))
            {
                g_687.f6 ^= (l_1107 && ((safe_div_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((l_1106 | (g_687.f2 < (0x2578L & l_1106))), (p_100.f0 = ((func_31((((65535UL != (((safe_div_func_int16_t_s_s(((g_130.f7 &= (g_487[0][2] >= g_687.f2)) == (p_100.f4 && l_1106)), 6L)) > 0xBF8FL) > g_130.f8)) <= 0x2DB0L) | g_130.f4)) & 0xDCDBL) ^ g_980)))) > p_101) < p_100.f6), g_687.f2)) <= p_100.f4));
                p_100.f5 |= l_1106;
                g_130 = g_130;
                g_130.f2 ^= (l_1107 && (p_100.f3 <= g_687.f6));
            }
            else
            {
                short l_1122[10][3][7] = {{{0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}}, {{0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}}, {{0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}}, {{0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}}, {{0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}}, {{0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}}, {{0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}}, {{0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}}, {{0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}}, {{0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}, {0xB1CEL, 0xB1CEL, 1L, 1L, 0xA362L, 1L, 0x7AABL}}};
                int l_1123[2];
                int l_1136[9] = {(-2L), 3L, (-2L), 3L, (-2L), 3L, (-2L), 3L, (-2L)};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1123[i] = 0L;
                for (p_100.f3 = 0; (p_100.f3 <= 3); p_100.f3 += 1)
                {
                    unsigned l_1140 = 0x1B113994L;
                    int i, j;
                    if ((g_487[(l_965.f5 + 4)][p_100.f3] | l_1106))
                    {
                        unsigned l_1128 = 0x59CFFB82L;
                        int l_1129 = 0L;
                        int l_1137 = 1L;
                        g_125 = (safe_add_func_uint8_t_u_u(p_100.f3, ((safe_mod_func_uint32_t_u_u(g_130.f8, func_31(((safe_add_func_int8_t_s_s(l_1122[3][0][2], (l_1123[0] = g_130.f1))) == (((safe_add_func_int32_t_s_s(l_1106, (l_1107 | func_31(((l_1136[2] = ((safe_add_func_uint32_t_u_u((l_1129 = l_1128), (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_1106, (safe_add_func_int8_t_s_s(p_100.f1, g_238.f3)))), p_100.f3)))) | p_100.f6)) > (-1L)))))) | g_487[(l_965.f5 + 4)][p_100.f3]) | l_1137))))) < 0xF8L)));
                        l_965.f2 = (safe_sub_func_int32_t_s_s(g_130.f1, func_31(func_31(g_487[(l_965.f5 + 4)][p_100.f3]))));
                        g_687.f6 |= l_1105[0][3][1].f2;
                    }
                    else
                    {
                        p_100.f5 = l_1140;
                    }
                }
                for (l_1107 = 0; (l_1107 <= 3); l_1107 += 1)
                {
                    int i, j;
                    if ((~((g_487[(l_1107 + 2)][l_1107] >= ((l_1136[2] = (p_100.f6 &= p_100.f2)) == ((safe_mul_func_uint8_t_u_u((func_31(func_31((safe_div_func_uint8_t_u_u(p_100.f0, p_100.f0)))) == (l_1123[0] = (l_1147 = ((g_487[2][1] <= ((safe_sub_func_uint8_t_u_u(((p_100.f4 = g_96) > 0xBA89500CL), l_965.f2)) > l_965.f2)) >= 6UL)))), 0L)) < 246UL))) == g_130.f1)))
                    {
                        l_1150 = (+(func_31(p_100.f5) | (safe_sub_func_uint8_t_u_u(3UL, (g_70 == (0x02F273E3L < func_31(l_1105[0][3][1].f4)))))));
                    }
                    else
                    {
                        g_125 = (p_100.f6 = (((func_31(p_100.f1) || 2L) >= (-5L)) != p_100.f3));
                    }
                }
                for (l_890 = 0; (l_890 <= 3); l_890 += 1)
                {
                    short l_1153 = 0x9D19L;
                    for (l_1107 = 0; (l_1107 <= 3); l_1107 += 1)
                    {
                        int i, j;
                        p_100.f6 &= ((safe_rshift_func_uint16_t_u_s((g_487[(l_890 + 1)][l_1107] < (g_487[(l_965.f5 + 2)][l_965.f5] >= ((0L ^ func_31((func_31(func_31((func_31(g_487[(l_965.f5 + 2)][l_965.f5]) & g_130.f6))) > ((func_31(p_100.f1) != g_487[(l_890 + 1)][l_1107]) ^ 0x934CB6CCL)))) | g_687.f5))), l_1153)) <= l_845);
                        if (g_687.f5)
                            continue;
                        if (g_238.f0)
                            break;
                        p_100.f6 |= l_1153;
                    }
                }
            }
            for (l_965.f1 = 0; (l_965.f1 <= 3); l_965.f1 += 1)
            {
                unsigned short l_1165 = 0x142EL;
                g_130 = l_1154;
                if (p_100.f6)
                    continue;
                for (g_130.f8 = 0; (g_130.f8 <= 0); g_130.f8 += 1)
                {
                    for (g_687.f0 = 0; (g_687.f0 <= 3); g_687.f0 += 1)
                    {
                        int i, j, k;
                        l_1105[g_130.f8][l_965.f5][g_687.f0] = l_1105[g_130.f8][(g_130.f8 + 3)][(l_965.f5 + 2)];
                        g_238.f5 ^= ((safe_sub_func_uint8_t_u_u(g_487[(l_965.f5 + 5)][l_965.f1], (l_1150 = (((safe_rshift_func_int8_t_s_u(g_687.f6, 3)) & p_100.f5) != ((safe_mul_func_int16_t_s_s((l_1150 && 1L), ((safe_add_func_int32_t_s_s(func_31(((safe_rshift_func_uint8_t_u_u((p_100.f3 >= p_101), p_100.f6)) == (l_1165 > g_878))), 4294967294UL)) && 0xD9606C8DL))) != g_687.f5))))) != g_130.f5);
                    }
                }
            }
        }
        if ((8UL && ((l_1147 |= (((safe_lshift_func_uint16_t_u_s((l_1154.f7 | (func_31(((safe_mod_func_int32_t_s_s(((l_1154.f7 > (safe_sub_func_int16_t_s_s((g_130.f8 = g_687.f2), 8UL))) || (safe_mul_func_uint16_t_u_u(g_687.f0, g_130.f8))), 0xBDC7A475L)) == (safe_mod_func_int8_t_s_s((0UL || 0L), g_980)))) || p_101)), p_100.f2)) | 0x969CL) == l_1176)) > l_1154.f4)))
        {
            short l_1179 = 0x7F78L;
            int l_1212 = 7L;
            struct S1 l_1242[7] = {{0UL,0UL,-2L,2L,0xDAL,0x22E2DD90L,1UL,6UL,0x2A17L}, {0UL,0UL,-2L,2L,0xDAL,0x22E2DD90L,1UL,6UL,0x2A17L}, {0UL,0UL,-2L,2L,0xDAL,0x22E2DD90L,1UL,6UL,0x2A17L}, {0UL,0UL,-2L,2L,0xDAL,0x22E2DD90L,1UL,6UL,0x2A17L}, {0UL,0UL,-2L,2L,0xDAL,0x22E2DD90L,1UL,6UL,0x2A17L}, {0UL,0UL,-2L,2L,0xDAL,0x22E2DD90L,1UL,6UL,0x2A17L}, {0UL,0UL,-2L,2L,0xDAL,0x22E2DD90L,1UL,6UL,0x2A17L}};
            int i;
            for (l_1154.f7 = (-29); (l_1154.f7 > 8); ++l_1154.f7)
            {
                char l_1188 = 0L;
                int l_1194 = 0xA06A3A3AL;
                short l_1201 = 0xFBABL;
                short l_1233 = 1L;
                if (p_100.f4)
                {
                    int l_1193[8] = {0x258FAA52L, 0x408ECCD3L, 0x258FAA52L, 0x408ECCD3L, 0x258FAA52L, 0x408ECCD3L, 0x258FAA52L, 0x408ECCD3L};
                    int i;
                    l_1194 = ((((func_31(((l_1179 != p_100.f2) ^ (~func_31((g_130.f1 = (safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_130.f2, (safe_lshift_func_uint16_t_u_s(p_101, 4)))), (safe_mul_func_uint8_t_u_u((func_31(func_31(((g_130.f3 = (l_1188 > (((safe_mod_func_int16_t_s_s((0xC6L || (safe_add_func_int16_t_s_s(p_100.f2, (p_100.f3 ^ (-3L))))), l_1154.f4)) != g_238.f0) == 0xD887B294L))) || 4L))) && p_100.f6), p_100.f5))))))))) < g_45) > g_130.f7) || g_834) || l_1193[6]);
                    if ((p_100.f6 |= (l_1209 = (safe_div_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_s((g_130.f3 ^= p_100.f0), (func_31((((+(!(0xDCL & ((l_1194 |= (l_1188 != l_1201)) ^ ((safe_add_func_uint8_t_u_u(func_31((g_121 |= (((l_1105[0][3][1].f2 = (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(func_31(l_1193[6]), g_238.f2)), 0xA3L))) & (p_100.f0 != g_687.f6)) || l_1147))), l_1208)) > p_100.f1))))) || l_1179) & 0xD9600B43L)) ^ g_238.f4))) != 0x5E2CL), 6)) <= g_687.f3), l_1154.f0)))))
                    {
                        l_1212 = ((safe_rshift_func_uint8_t_u_s(p_101, 2)) & (-5L));
                    }
                    else
                    {
                        if (g_238.f2)
                            break;
                    }
                }
                else
                {
                    unsigned l_1219 = 0xC3E7AA8AL;
                    l_1194 &= (g_126 < (safe_rshift_func_int8_t_s_u(((((l_1201 >= ((l_1219 &= (safe_add_func_int32_t_s_s((l_1212 > (g_96 = g_70)), (safe_add_func_int16_t_s_s(0L, 6UL))))) < 1L)) == func_31((0x16B6L <= g_130.f2))) | 0x08790D03L) > 1L), 4)));
                    g_125 ^= l_1201;
                }
                for (g_238.f4 = 0; (g_238.f4 <= 3); g_238.f4 += 1)
                {
                    short l_1222 = (-6L);
                    int l_1234 = 1L;
                    struct S1 l_1241 = {3UL,0x5DL,0x07996AE8L,1L,0x4CL,1L,4294967295UL,2UL,0xEFD5L};
                    p_100.f6 = (1L ^ (l_1212 = (safe_sub_func_int8_t_s_s((l_1222 = g_238.f1), (safe_lshift_func_int16_t_s_s((g_238.f1 && (p_100.f1 == g_687.f4)), ((safe_lshift_func_int16_t_s_u(func_31((p_100.f3 |= (((func_31((safe_rshift_func_uint16_t_u_u((l_1194 = l_1179), 2))) & ((safe_mod_func_int8_t_s_s(l_1179, g_130.f6)) != l_1179)) > 0x4909L) < 0x5A44L))), g_238.f1)) & g_238.f0)))))));
                    for (g_130.f6 = 0; (g_130.f6 <= 3); g_130.f6 += 1)
                    {
                        unsigned l_1239 = 0x938725C0L;
                        l_1234 &= func_31(l_1233);
                        l_1239 = (g_238.f6 = (safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((g_130.f1 & (l_965.f2 = func_31(p_100.f3))), g_238.f4)) == g_687.f2), ((l_1194 = g_687.f5) >= (func_31(p_100.f0) & (((((249UL >= l_1233) ^ 5UL) ^ p_100.f0) <= l_1154.f1) < g_70))))));
                        l_845 |= p_100.f1;
                        l_1240 = l_1154;
                    }
                    l_1241 = l_1240;
                    l_1242[3] = g_130;
                }
                g_878 = 0x772D85F0L;
                p_100.f5 |= (((safe_add_func_uint8_t_u_u((g_130.f1 = 1UL), g_238.f5)) == func_31((safe_mul_func_int8_t_s_s(l_1242[3].f6, (p_100.f0 > ((safe_lshift_func_uint16_t_u_u((func_31(p_100.f3) & (safe_mul_func_uint8_t_u_u(g_487[2][1], (g_687.f5 == func_31((safe_add_func_int32_t_s_s(((p_100.f4 ^ l_1240.f8) <= 0xC6L), l_1105[0][3][1].f7))))))), 15)) != 0x7CA062E0L)))))) && 0x12L);
            }
            if (((((g_10 | (((safe_lshift_func_int8_t_s_u(g_687.f2, p_100.f6)) | (((p_100.f5 = (g_238.f5 | l_1208)) == l_1242[3].f6) == p_100.f4)) | (safe_lshift_func_uint16_t_u_s((l_845 |= (l_1105[0][3][1].f0 >= ((safe_sub_func_uint32_t_u_u(g_70, 0xBA004056L)) ^ g_687.f1))), g_238.f0)))) <= g_121) != g_238.f6) == g_130.f5))
            {
                short l_1261 = 0xA980L;
                return l_1261;
            }
            else
            {
                unsigned l_1274 = 0x0444F7D6L;
                int l_1276 = 0x154EE808L;
                struct S1 l_1277 = {0x49L,1UL,0xEE552AF8L,0x55L,-2L,0L,0xA0865D30L,65535UL,0xA5A0L};
                if (((safe_mul_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(8L, ((p_100.f2 < (1UL > (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((p_100.f2 >= (9UL < (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(g_238.f2, (l_1274 = g_130.f0))), 0xA44DL)))), ((-5L) > 0xDF4F312CL))), 11)))) >= l_1275))) < g_130.f7), l_1276)) <= p_100.f1))
                {
                    g_130 = l_1277;
                    g_130 = g_130;
                }
                else
                {
                    const struct S1 l_1278 = {0UL,2UL,-1L,-1L,-2L,0xA586C0C3L,4294967295UL,1UL,0L};
                    struct S1 l_1279 = {1UL,0xACL,0x5A1670ABL,-1L,0x0FL,0x92F63762L,7UL,65535UL,0x57EDL};
                    l_1242[3] = l_1154;
                    l_1279 = l_1278;
                }
                return l_1242[3].f6;
            }
        }
        else
        {
            unsigned short l_1298 = 0xC23BL;
            int l_1299[2][6][10];
            char l_1303 = 1L;
            int l_1314 = 0x645CEE31L;
            struct S1 l_1316[7][6] = {{{0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}}, {{0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}}, {{0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}}, {{0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}}, {{0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}}, {{0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}}, {{0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}, {0x69L,1UL,8L,0x8DL,0x35L,0x693DD13FL,0x90171D6AL,0xBA0BL,-7L}, {253UL,255UL,0x71421115L,0x99L,0xDCL,7L,0x0B3CD116L,0xEBAFL,0x2FFBL}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 10; k++)
                        l_1299[i][j][k] = 0x6A50D328L;
                }
            }
            if ((0x5087L & (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((65530UL || (safe_add_func_int8_t_s_s((!(l_965.f2 |= (safe_add_func_int16_t_s_s((0x59L != (safe_sub_func_uint32_t_u_u(((l_1154.f1 ^ (l_1105[0][3][1].f5 < (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_965.f6 & (l_1105[0][3][1].f2 = g_125)), (((p_100.f5 > 65529UL) && g_130.f7) < p_100.f0))), 1UL)))) < p_100.f6), p_100.f6))), g_81)))), g_130.f6))), l_1298)), p_100.f1)) || (-1L)), p_100.f0)), 0xE7L))))
            {
                unsigned l_1304 = 0x8CE8EB81L;
                int l_1313 = 4L;
                unsigned char l_1315 = 0x87L;
                for (g_130.f4 = 3; (g_130.f4 >= 0); g_130.f4 -= 1)
                {
                    struct S1 l_1300 = {0x22L,0UL,0x15CD4746L,0L,0x85L,3L,4294967288UL,65531UL,0x0460L};
                    l_1299[0][1][1] = g_687.f5;
                    if (g_96)
                        continue;
                    for (g_130.f1 = 0; (g_130.f1 <= 3); g_130.f1 += 1)
                    {
                        struct S1 l_1301 = {1UL,0x69L,-1L,0x5CL,0x9CL,0xA0651BB7L,0x606FBBBFL,65535UL,0x019DL};
                        int i, j;
                        l_1300 = l_1105[0][3][1];
                        if (g_487[(g_130.f1 + 1)][g_130.f4])
                            continue;
                        g_1302 = l_1301;
                    }
                    for (l_1300.f4 = 3; (l_1300.f4 >= 0); l_1300.f4 -= 1)
                    {
                        l_1303 |= p_100.f5;
                    }
                }
                if (l_1304)
                {
                    int l_1312 = 0x038A0BB0L;
                    g_125 = p_100.f4;
                    for (g_96 = 0; (g_96 <= 0); g_96 += 1)
                    {
                        p_100.f5 |= p_100.f1;
                        if (p_100.f3)
                            break;
                    }
                    for (l_965.f2 = 0; (l_965.f2 == 12); l_965.f2 = safe_add_func_uint16_t_u_u(l_965.f2, 6))
                    {
                        g_1302 = (l_1105[0][3][1] = g_130);
                        g_238.f6 = (l_1314 |= ((func_31(l_1154.f3) >= (l_1313 = ((((g_125 < func_31((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_1311, p_100.f6)), func_31(g_238.f1))))) != p_100.f0) == l_965.f8) > l_1312))) > g_834));
                    }
                }
                else
                {
                    return l_1315;
                }
            }
            else
            {
                short l_1328 = 0L;
                g_130 = l_1316[6][4];
                for (l_1240.f3 = 0; (l_1240.f3 != (-1)); l_1240.f3 = safe_sub_func_uint8_t_u_u(l_1240.f3, 1))
                {
                    int l_1327 = (-1L);
                    if ((func_31(func_31((~g_126))) & (safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(((0x90L < 0xFBL) >= (safe_lshift_func_int16_t_s_s(p_100.f1, 5))), (g_687.f3 = ((safe_lshift_func_uint16_t_u_u(l_1327, 5)) >= (g_130.f1 <= ((((+p_100.f0) && l_965.f2) == p_100.f1) || 1L)))))) == 4294967288UL), l_977))))
                    {
                        char l_1358 = (-8L);
                        g_687.f5 |= (((l_1328 = 0xA58520A1L) ^ (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((g_878 & (p_100.f3 ^ ((l_1154.f2 = 0xE30AL) != ((~(safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s((l_1341 || g_1302.f5), (safe_rshift_func_int16_t_s_u(g_130.f4, (((+(p_100.f6 ^ (g_238.f3 = g_130.f3))) && p_100.f0) | 0xB0D0C1A0L))))) < g_130.f4), 1)), g_45)), l_1275))) ^ p_100.f1)))), 1)), 0x86A8B453L))) & g_687.f6);
                        l_1299[0][1][1] = (safe_sub_func_int32_t_s_s((g_1302.f2 > (safe_mul_func_uint16_t_u_u(65535UL, (((safe_mul_func_uint16_t_u_u(((l_845 ^= (g_687.f4 && ((safe_add_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(func_31((0x4370L & (0x161E50CDL & (safe_rshift_func_int8_t_s_u(func_31(((-9L) ^ (safe_sub_func_int32_t_s_s(g_1302.f2, g_45)))), 3))))), 0UL)) >= g_130.f1) ^ 0x85C4L), p_100.f4)) | p_100.f4))) != g_238.f4), 4UL)) & g_687.f1) && l_1358)))), l_1358));
                        l_1105[0][3][1].f2 &= (((safe_sub_func_uint16_t_u_u((l_1316[6][4].f2 = l_1328), g_687.f1)) == g_238.f4) && (g_834 & (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((l_965.f6 >= ((p_100.f4 ^ l_1328) && (safe_div_func_uint8_t_u_u(l_1358, 0xDFL)))), g_130.f5)), 2L))));
                        l_1327 = l_1240.f7;
                    }
                    else
                    {
                        unsigned short l_1369 = 65532UL;
                        int l_1372 = 0xFB53454FL;
                        p_100.f6 = (p_100.f1 & (((((safe_sub_func_int32_t_s_s(0x8D750136L, ((g_687.f4 = (l_1369 < l_1328)) | (func_31((l_845 = (g_487[1][2] != (safe_rshift_func_int16_t_s_s(func_31(p_100.f0), ((g_238.f2 <= 8L) && 0x08L)))))) < l_965.f8)))) != 0x41C490A8L) < p_100.f4) < (-4L)) < 1L));
                        if (l_1369)
                            continue;
                        l_1327 = (0xB5B7L | g_687.f3);
                        l_1372 &= l_842;
                    }
                }
            }
            p_100.f6 |= (safe_mod_func_uint16_t_u_u(func_31(g_687.f0), (~g_687.f0)));
            p_100.f5 = (p_100.f6 = (safe_div_func_uint8_t_u_u(func_31((l_1377 = (l_1147 |= (p_100.f3 ^= g_878)))), ((l_1105[0][3][1].f2 = ((((((safe_add_func_uint16_t_u_u(l_1303, (((safe_div_func_uint16_t_u_u(func_31(((g_130.f7 = func_31((((p_100.f2 >= (((((func_31(l_1316[6][4].f0) || (l_1299[0][1][0] &= p_100.f5)) ^ ((safe_sub_func_int16_t_s_s((func_31(p_100.f0) && 0x0409L), p_100.f1)) >= g_10)) && 255UL) == g_96) >= p_100.f4)) != 255UL) & l_1240.f2))) & g_687.f3)), g_687.f0)) != p_100.f4) ^ 0x52L))) != l_965.f0) >= 9L) && p_100.f0) >= 0L) < p_100.f4)) && p_100.f0))));
            l_1316[6][4] = g_130;
        }
    }
    l_965 = l_965;
    return p_100.f2;
}







static struct S0 func_102(struct S0 p_103, int p_104, char p_105)
{
    unsigned l_109 = 0x2ABDB3BFL;
    int l_114[6] = {0xAAFB9A30L, 0xAAFB9A30L, 1L, 0xAAFB9A30L, 0xAAFB9A30L, 1L};
    struct S0 l_115 = {4294967289UL,0xC608L,0x1A9DB3BFL,0x59L,0x40E1577BL,1L,0xB57BD3F6L};
    struct S1 l_129 = {3UL,0x41L,3L,-1L,0xF6L,0xD43CED54L,0xF0C89082L,0x28EFL,0x35FDL};
    unsigned l_244 = 0UL;
    unsigned l_262 = 0UL;
    short l_297 = 2L;
    unsigned l_312[8][5] = {{0x591298C8L, 0x51DCCFBEL, 1UL, 0x51DCCFBEL, 0x591298C8L}, {0x591298C8L, 0x51DCCFBEL, 1UL, 0x51DCCFBEL, 0x591298C8L}, {0x591298C8L, 0x51DCCFBEL, 1UL, 0x51DCCFBEL, 0x591298C8L}, {0x591298C8L, 0x51DCCFBEL, 1UL, 0x51DCCFBEL, 0x591298C8L}, {0x591298C8L, 0x51DCCFBEL, 1UL, 0x51DCCFBEL, 0x591298C8L}, {0x591298C8L, 0x51DCCFBEL, 1UL, 0x51DCCFBEL, 0x591298C8L}, {0x591298C8L, 0x51DCCFBEL, 1UL, 0x51DCCFBEL, 0x591298C8L}, {0x591298C8L, 0x51DCCFBEL, 1UL, 0x51DCCFBEL, 0x591298C8L}};
    struct S1 l_461 = {4UL,248UL,-4L,0xB3L,0xCDL,5L,0x300FB4A7L,0x415DL,0L};
    int l_522 = 1L;
    unsigned char l_584 = 252UL;
    unsigned char l_688[9][2];
    unsigned l_769 = 8UL;
    int l_774 = 0x9D9A152CL;
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
            l_688[i][j] = 0x25L;
    }
    if ((safe_lshift_func_int8_t_s_u(l_109, (safe_add_func_uint16_t_u_u((2L >= p_103.f3), 0x136CL)))))
    {
        unsigned l_120 = 0x06FE3A54L;
        int l_173 = 0x5D80E871L;
        struct S1 l_284 = {9UL,255UL,1L,3L,-1L,-9L,0UL,1UL,-5L};
        unsigned char l_321[5][1];
        short l_365 = 0xA40CL;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_321[i][j] = 0xCBL;
        }
        for (p_103.f0 = 16; (p_103.f0 > 28); ++p_103.f0)
        {
            l_114[1] = p_103.f5;
            return l_115;
        }
        if ((safe_sub_func_uint16_t_u_u((p_103.f3 == func_31(l_115.f6)), (g_121 = (p_103.f1 && (safe_div_func_uint8_t_u_u((l_120 |= ((g_70 || l_115.f2) == g_96)), func_31(p_104))))))))
        {
            unsigned char l_124 = 0x1EL;
            struct S1 l_131 = {0xBBL,246UL,2L,3L,4L,0xCDF61404L,0xF23FE851L,0UL,0L};
            int l_147 = 0xF795CCE4L;
            for (p_103.f3 = 0; (p_103.f3 < 52); p_103.f3++)
            {
                g_126 = (func_31(((l_124 = 4294967292UL) <= ((g_125 = p_103.f1) | l_114[3]))) >= 0x7441L);
            }
            for (l_120 = (-2); (l_120 == 43); l_120 = safe_add_func_uint16_t_u_u(l_120, 3))
            {
                g_130 = l_129;
                l_131 = l_129;
            }
            if ((p_103.f6 |= func_31((0xB2AD6262L <= (safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((l_147 &= (safe_div_func_int8_t_s_s((p_105 = (safe_div_func_int16_t_s_s((((g_121 = (p_103.f3 | ((safe_unary_minus_func_int32_t_s((g_130.f2 = (safe_rshift_func_int8_t_s_s((((l_131.f6 < func_31((((safe_lshift_func_uint16_t_u_s(func_31(((safe_mod_func_uint32_t_u_u(func_31(p_103.f3), func_31(g_130.f8))) | p_103.f3)), l_131.f4)) > g_130.f7) | g_126))) || l_131.f3) <= g_130.f7), 5))))) | l_131.f2))) < p_103.f1) ^ g_130.f6), 1L))), 0xD2L))), p_103.f4)) || g_121), 0x4093L))))))
            {
                const short l_170 = 0x768DL;
                int l_171 = 0x90D78255L;
                p_103.f6 = p_103.f0;
                for (g_130.f2 = 0; (g_130.f2 == (-3)); g_130.f2 = safe_sub_func_int8_t_s_s(g_130.f2, 4))
                {
                    int l_156[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_156[i] = 0x327EC856L;
                    for (p_103.f4 = 16; (p_103.f4 < 25); p_103.f4 = safe_add_func_int32_t_s_s(p_103.f4, 7))
                    {
                        int l_172[1][2][6] = {{{0x4E3B0AB2L, 0xC39ED3BEL, 0x4E3B0AB2L, 0xC39ED3BEL, 0x4E3B0AB2L, 0xC39ED3BEL}, {0x4E3B0AB2L, 0xC39ED3BEL, 0x4E3B0AB2L, 0xC39ED3BEL, 0x4E3B0AB2L, 0xC39ED3BEL}}};
                        int i, j, k;
                        g_125 &= ((l_173 ^= (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(l_156[0], (65535UL && ((((safe_sub_func_int8_t_s_s((g_126 | (safe_unary_minus_func_uint8_t_u((safe_mod_func_uint8_t_u_u(func_31(g_96), (~(l_171 = (p_103.f0 < ((safe_lshift_func_int8_t_s_s(g_81, (g_130.f3 |= ((((!p_103.f4) >= (((((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(l_170, p_103.f0)), 0x0D3DB076L)), 0x82L)) <= l_124) <= 0xC8L) > l_120) < l_170)) < 1L) < g_96)))) | l_129.f6))))))))), p_103.f2)) > l_172[0][1][5]) | (-1L)) <= 0x5DA7L)))) <= 1L), g_130.f1))) & g_130.f4);
                        return p_103;
                    }
                    p_103.f6 = g_130.f1;
                }
            }
            else
            {
                int l_215 = 1L;
                struct S1 l_252[10] = {{0x35L,2UL,0xA0016889L,0x95L,8L,0xB948CDD1L,4294967295UL,65534UL,0x9F13L}, {0x35L,2UL,0xA0016889L,0x95L,8L,0xB948CDD1L,4294967295UL,65534UL,0x9F13L}, {0UL,1UL,1L,0xB2L,0L,-1L,1UL,8UL,-7L}, {0x35L,2UL,0xA0016889L,0x95L,8L,0xB948CDD1L,4294967295UL,65534UL,0x9F13L}, {0x35L,2UL,0xA0016889L,0x95L,8L,0xB948CDD1L,4294967295UL,65534UL,0x9F13L}, {0UL,1UL,1L,0xB2L,0L,-1L,1UL,8UL,-7L}, {0x35L,2UL,0xA0016889L,0x95L,8L,0xB948CDD1L,4294967295UL,65534UL,0x9F13L}, {0x35L,2UL,0xA0016889L,0x95L,8L,0xB948CDD1L,4294967295UL,65534UL,0x9F13L}, {0UL,1UL,1L,0xB2L,0L,-1L,1UL,8UL,-7L}, {0x35L,2UL,0xA0016889L,0x95L,8L,0xB948CDD1L,4294967295UL,65534UL,0x9F13L}};
                unsigned l_253[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_253[i] = 9UL;
                g_130.f2 = ((g_81 > p_103.f5) < 0xEA19L);
                if (func_31(l_129.f1))
                {
                    struct S1 l_174 = {2UL,0UL,0x503D4E83L,1L,1L,1L,0UL,0UL,0xC146L};
                    unsigned short l_216 = 0x428AL;
                    l_174 = l_174;
                    for (l_129.f4 = 0; (l_129.f4 > 15); l_129.f4 = safe_add_func_uint8_t_u_u(l_129.f4, 7))
                    {
                        int l_177 = 0x7B070683L;
                        int l_188 = 0xEA050EF7L;
                        int l_235 = 0x33F974B7L;
                        p_103.f6 |= ((~(~(l_177 == (-1L)))) > (func_31((((safe_lshift_func_int8_t_s_u((l_131.f3 | (safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(l_174.f3, ((((l_188 |= ((((safe_lshift_func_int8_t_s_u(l_177, 0)) < 9UL) | (-5L)) > l_131.f1)) == (0UL <= p_103.f1)) || (-10L)) >= l_174.f5))) & p_103.f2), p_103.f0))), p_104)) != 1L) ^ 0L)) <= g_130.f0));
                        l_216 = (g_125 = ((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((p_103.f4 = l_174.f6), ((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(func_31((((g_70 = (safe_add_func_int32_t_s_s(0L, p_104))) ^ g_96) >= ((g_130.f4 && (safe_add_func_int16_t_s_s(g_81, (g_126 = (((((safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u(0UL, (safe_lshift_func_uint16_t_u_s(((((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s(func_31((safe_mod_func_uint32_t_u_u((((g_130.f1 < func_31(p_103.f0)) >= (-2L)) | 0x76285456L), l_120))), l_174.f7)), l_215)) == 4294967295UL) ^ l_124) >= l_131.f7), g_96)))) <= l_131.f4) >= g_125), p_103.f5)), l_174.f2)) != g_121) || g_81) >= p_105) < l_174.f5))))) > g_130.f8))), p_103.f2)), 0x5981L)) <= 0xE7L))), g_130.f3)) || l_215));
                        l_235 |= ((safe_lshift_func_uint8_t_u_s((l_177 ^ func_31((0xAAD2L >= ((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(l_129.f8, 5UL)), (safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(1UL, (safe_sub_func_uint16_t_u_u(((4294967295UL && (l_188 = (g_125 ^= (p_103.f6 = (safe_mod_func_uint8_t_u_u(255UL, (safe_lshift_func_uint16_t_u_u((((p_103.f5 = (safe_add_func_uint8_t_u_u(0UL, 0L))) || 0x7D1E3074L) | l_177), 13)))))))) >= 65535UL), g_130.f0)))) ^ l_131.f8), g_130.f5)))) <= g_130.f1)))), p_104)) > (-2L));
                    }
                    l_129 = g_130;
                    l_131.f2 |= l_174.f2;
                }
                else
                {
                    int l_243 = 0x557B0DF1L;
                    struct S1 l_283 = {0x88L,1UL,0xD3573083L,2L,0x72L,1L,4294967292UL,0x0CEEL,0L};
                    for (g_125 = 18; (g_125 == (-20)); g_125 = safe_sub_func_int16_t_s_s(g_125, 1))
                    {
                        return g_238;
                    }
                    g_130.f2 |= (safe_add_func_int32_t_s_s((g_238.f6 = ((safe_div_func_int16_t_s_s(g_238.f3, (l_243 & (g_130.f7 > (p_103.f6 ^= (p_103.f5 = g_70)))))) ^ (l_244 == l_243))), (g_238.f3 < (l_114[1] ^= (p_103.f4 < (g_126 = (1UL < p_104)))))));
                    if (((safe_unary_minus_func_int16_t_s(func_31((l_129.f2 = l_173)))) != ((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(p_103.f6, ((l_215 |= g_130.f2) <= (((safe_sub_func_uint32_t_u_u(0UL, p_103.f3)) && ((1L == p_104) > (l_114[1] |= func_31(g_130.f1)))) && l_173)))), g_126)) < 0xAACDL)))
                    {
                        unsigned short l_261 = 0xFE3AL;
                        g_130 = (l_131 = l_252[1]);
                        l_262 = (((l_253[0] > (((func_31(func_31((p_103.f3 = (g_130.f0 |= (0xD5AEAFD4L || (g_238.f4 |= g_130.f2)))))) > (safe_unary_minus_func_int32_t_s(func_31(((g_130.f8 = ((safe_sub_func_uint32_t_u_u(func_31((safe_lshift_func_uint16_t_u_u((g_130.f5 ^ g_238.f6), (l_252[1].f2 &= (safe_rshift_func_int8_t_s_s((g_130.f3 &= func_31(g_130.f4)), 0)))))), l_261)) > g_130.f8)) >= g_130.f6))))) >= l_252[1].f7) == g_45)) ^ l_261) < l_115.f5);
                        g_130.f2 |= (g_238.f2 == l_243);
                    }
                    else
                    {
                        unsigned l_281 = 0xCFCB9DA4L;
                        int l_282 = 0xA96F940BL;
                        g_238.f6 = (((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((g_238.f2 || (!(!(safe_sub_func_uint32_t_u_u((g_238.f4 = func_31((p_103.f3 &= (l_173 = l_243)))), (g_70 = (safe_lshift_func_uint16_t_u_s((l_252[1].f3 && (safe_add_func_uint16_t_u_u(p_103.f4, (l_282 = ((65531UL < (func_31(((g_130.f2 &= (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(((func_31((g_130.f4 == p_103.f5)) <= p_103.f0) != p_103.f2), p_103.f1)) & 0x358EDC49L) != 0L), l_252[1].f2)), g_130.f3)), p_103.f0))) & l_281)) & g_126)) != l_243))))), 5)))))))), 8)), 0xA9DEL)) != 249UL) | p_103.f6) | p_104) <= g_238.f2);
                        l_284 = l_283;
                        g_130 = l_252[1];
                    }
                }
            }
        }
        else
        {
            char l_323 = 1L;
            int l_346 = 0xCDC0A4ABL;
            struct S0 l_360[3][1] = {{{8UL,0x34E0L,0L,250UL,0xDB24A14DL,4L,0x6E63B8E6L}}, {{8UL,0x34E0L,0L,250UL,0xDB24A14DL,4L,0x6E63B8E6L}}, {{8UL,0x34E0L,0L,250UL,0xDB24A14DL,4L,0x6E63B8E6L}}};
            int i, j;
            l_297 ^= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(p_105, 0x7CL)), 4)) || (0L ^ (safe_mul_func_uint32_t_u_u(p_104, (g_238.f2 == func_31((0x37EEBF2CL | ((g_126 || (safe_rshift_func_uint16_t_u_s((!(p_105 | (8L || g_130.f6))), g_130.f3))) ^ l_173)))))))) < g_96), 12)), g_130.f0)) > p_104);
            for (g_238.f2 = 13; (g_238.f2 != (-23)); g_238.f2 = safe_sub_func_int32_t_s_s(g_238.f2, 7))
            {
                unsigned short l_322 = 0x29ACL;
                int l_355 = 0x431AA0B9L;
                p_103.f5 = g_70;
                for (l_109 = 0; (l_109 <= 5); l_109 += 1)
                {
                    struct S1 l_300[6] = {{0x32L,1UL,-1L,0L,-1L,-7L,0x4361A45CL,1UL,0L}, {0x32L,1UL,-1L,0L,-1L,-7L,0x4361A45CL,1UL,0L}, {0x32L,1UL,-1L,0L,-1L,-7L,0x4361A45CL,1UL,0L}, {0x32L,1UL,-1L,0L,-1L,-7L,0x4361A45CL,1UL,0L}, {0x32L,1UL,-1L,0L,-1L,-7L,0x4361A45CL,1UL,0L}, {0x32L,1UL,-1L,0L,-1L,-7L,0x4361A45CL,1UL,0L}};
                    int i;
                    l_129 = l_300[1];
                    p_103.f5 ^= (safe_mul_func_int8_t_s_s(0x9CL, (g_130.f4 = ((safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((((safe_unary_minus_func_uint16_t_u(l_114[l_109])) <= p_103.f3) && l_284.f6) & ((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((g_130.f3 > (p_103.f0 &= ((func_31(l_312[2][1]) != g_81) != (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(4L, l_321[0][0])), l_300[1].f7)), g_238.f3)), l_284.f7))))), g_238.f4)), l_322)) <= g_45)), 0UL)) && l_323), g_121)) | 0x1134L))));
                    if (g_10)
                    {
                        g_130.f2 ^= l_300[1].f2;
                        if (g_238.f2)
                            continue;
                    }
                    else
                    {
                        return g_238;
                    }
                    for (g_130.f5 = 0; (g_130.f5 != 24); g_130.f5 = safe_add_func_uint32_t_u_u(g_130.f5, 9))
                    {
                        p_103.f5 |= (safe_sub_func_uint16_t_u_u(g_130.f2, (safe_div_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(func_31(p_103.f0), (((0xA79CDB67L & ((((func_31((func_31((g_238.f3 = (g_130.f0 = g_130.f8))) || (l_323 != 1UL))) > g_121) == g_130.f6) & l_322) && 0UL)) == 0L) <= 0L))), 1)) == p_104), 9L)), p_103.f0)) != g_125) >= 8UL), l_284.f1))));
                        p_103.f5 ^= (p_103.f6 == (g_130.f8 = (l_284.f2 = (((safe_mul_func_uint8_t_u_u((+250UL), (safe_lshift_func_uint8_t_u_s(252UL, (safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s((l_346 |= 65531UL), 3)) | l_323) & (safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(p_103.f2, ((g_81 & g_81) == ((g_70 = (g_238.f0 = 0x727D57A6L)) >= p_103.f3)))) <= p_105), l_323))), 14)))))) == l_312[2][3]) == p_104))));
                    }
                }
                g_130 = l_284;
                if ((safe_mul_func_uint8_t_u_u(g_121, (l_284.f2 = (safe_rshift_func_uint16_t_u_u((l_355 = l_312[2][1]), 9))))))
                {
                    for (g_125 = 0; (g_125 == (-25)); g_125 = safe_sub_func_uint32_t_u_u(g_125, 7))
                    {
                        p_103.f5 = p_104;
                        l_284.f2 = 4L;
                        g_238.f6 = 1L;
                    }
                    for (p_105 = 4; (p_105 >= 0); p_105 -= 1)
                    {
                        int i, j;
                        g_130 = g_130;
                        g_130 = (l_284 = l_129);
                        g_125 = (((+(safe_add_func_uint16_t_u_u(0x19AEL, l_312[(p_105 + 1)][p_105]))) != func_31(g_130.f2)) > 0UL);
                        return l_360[1][0];
                    }
                    g_130 = l_129;
                }
                else
                {
                    int l_372 = 0L;
                    if ((l_173 = 0xB4932BB5L))
                    {
                        l_355 |= g_130.f0;
                    }
                    else
                    {
                        l_355 &= 0L;
                        if (p_103.f0)
                            continue;
                        l_115.f5 = (((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(p_104, l_365)), (safe_rshift_func_uint8_t_u_s(l_365, 7)))) & l_360[1][0].f4) < (safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(func_31(((p_103.f5 & l_322) | l_372)), (l_360[1][0].f2 ^ p_103.f4))) == g_238.f1), 3)));
                    }
                }
            }
            for (l_284.f7 = 0; (l_284.f7 > 5); l_284.f7 = safe_add_func_int32_t_s_s(l_284.f7, 6))
            {
                for (g_96 = 0; (g_96 >= 20); g_96 = safe_add_func_int16_t_s_s(g_96, 6))
                {
                    if (g_130.f6)
                        break;
                }
                l_284.f2 &= (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((((((g_130.f3 = ((g_238.f5 = 0xEE335FE2L) | l_129.f8)) > (safe_lshift_func_uint16_t_u_u(func_31((l_173 ^= (g_130.f1 &= 248UL))), 1))) && ((func_31(g_238.f2) > (-4L)) != (((~l_284.f8) & 0xA1E7A3A5L) >= l_173))) > 4L) > 1UL), p_103.f1)) > p_104), g_238.f2));
            }
        }
    }
    else
    {
        int l_383 = 6L;
        l_129.f2 ^= (l_115.f6 = g_45);
        p_103.f5 = (l_383 > g_238.f5);
    }
    for (p_104 = (-5); (p_104 <= 24); p_104++)
    {
        unsigned short l_394[7][7][2] = {{{0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}}, {{0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}}, {{0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}}, {{0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}}, {{0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}}, {{0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}}, {{0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}, {0UL, 0x2CB2L}}};
        int l_395[3][3] = {{(-2L), 0L, (-2L)}, {(-2L), 0L, (-2L)}, {(-2L), 0L, (-2L)}};
        int l_396 = 0x1BAFBD39L;
        unsigned l_415 = 0x3B20C45AL;
        unsigned short l_447 = 65535UL;
        unsigned char l_494 = 246UL;
        unsigned l_589 = 4294967295UL;
        short l_650 = 0x6941L;
        unsigned char l_736[1][3][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_736[i][j][k] = 255UL;
            }
        }
        g_238.f5 = (safe_mul_func_uint8_t_u_u((~(~(+((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((l_114[5] = p_103.f6) & (g_130.f7 = (safe_rshift_func_int8_t_s_u(func_31((p_103.f5 >= (((l_394[2][5][0] |= p_103.f1) ^ (l_129.f2 = (l_115.f4 | (p_103.f4 <= l_395[1][1])))) & ((l_396 = (l_115.f5 ^= p_103.f6)) == (func_31(l_115.f0) <= l_395[1][1]))))), 6)))), 0x1FEB0CD9L)), l_115.f3)) & g_10)))), p_103.f3));
        g_130 = g_130;
        if (func_31((0x330D613DL || (safe_div_func_int16_t_s_s(l_262, (l_396 &= (safe_lshift_func_uint16_t_u_u(0xB027L, 8))))))))
        {
            short l_414[2];
            int i;
            for (i = 0; i < 2; i++)
                l_414[i] = 1L;
            for (l_129.f4 = 0; (l_129.f4 > (-18)); l_129.f4 = safe_sub_func_uint8_t_u_u(l_129.f4, 5))
            {
                int l_418 = (-6L);
                int l_425 = (-1L);
                g_125 = (safe_div_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((safe_sub_func_int32_t_s_s(p_103.f3, (safe_div_func_uint32_t_u_u(((l_415 = l_414[0]) && func_31((g_130.f1 = (safe_rshift_func_uint8_t_u_u(0UL, 2))))), (l_394[2][5][0] || (l_418 != (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u(0xB6L, (p_103.f2 || g_121))) || g_238.f6) || g_238.f1) < g_238.f6), 6)) < g_126), g_238.f1)))))))))), 0UL)), 0x94L)) & 0xD9L), l_414[0]));
                g_238.f5 = (-1L);
                l_425 = g_130.f4;
            }
            p_103.f5 ^= (safe_unary_minus_func_int32_t_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_103.f4, (safe_rshift_func_uint16_t_u_s((((safe_unary_minus_func_int8_t_s(((l_395[1][1] = ((safe_mul_func_uint8_t_u_u((l_396 ^= (safe_sub_func_uint8_t_u_u(((((g_130.f8 || l_414[1]) >= 65534UL) && (safe_mul_func_uint16_t_u_u(p_103.f3, func_31(((func_31((((-1L) && (g_238.f0 == (g_70 = ((((p_103.f3 & (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((l_395[1][1] &= p_103.f6))), l_414[0]))) <= 0x0EL) & 7UL) & p_103.f2)))) & g_130.f5)) | p_104) >= p_105))))) <= l_312[4][4]), l_414[0]))), g_81)) || p_103.f2)) ^ 0x8F30L))) != 9L) <= p_105), 0)))), p_103.f4))));
            if (p_103.f3)
                continue;
        }
        else
        {
            g_125 ^= (safe_lshift_func_uint16_t_u_s(g_130.f7, 0));
        }
        if (((p_103.f0 && l_447) && ((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((g_81 | ((g_96 ^= ((safe_mod_func_uint32_t_u_u((func_31(p_103.f1) || (l_115.f0 | g_130.f7)), p_103.f0)) | 0xAC13DE2BL)) != p_104)), g_130.f7)) != p_105), g_125)), 1UL)) < 0L)))
        {
            return p_103;
        }
        else
        {
            struct S1 l_460 = {0x32L,0x5CL,2L,-1L,9L,0x976BAB3EL,0x4DB46A24L,0x5E80L,0xF571L};
            int l_540 = 0L;
            int l_619 = 0x19BAE856L;
            short l_647 = 1L;
            char l_699[4] = {(-4L), 0xC9L, (-4L), 0xC9L};
            int l_754 = 0x985AA045L;
            int i;
            for (l_129.f1 = 0; (l_129.f1 > 40); l_129.f1 = safe_add_func_int32_t_s_s(l_129.f1, 1))
            {
                unsigned l_464[9][10] = {{0UL, 4294967295UL, 4294967289UL, 0xAD4A5E3EL, 4294967295UL, 0x8C888C93L, 4294967295UL, 0xAD4A5E3EL, 4294967289UL, 4294967295UL}, {0UL, 4294967295UL, 4294967289UL, 0xAD4A5E3EL, 4294967295UL, 0x8C888C93L, 4294967295UL, 0xAD4A5E3EL, 4294967289UL, 4294967295UL}, {0UL, 4294967295UL, 4294967289UL, 0xAD4A5E3EL, 4294967295UL, 0x8C888C93L, 4294967295UL, 0xAD4A5E3EL, 4294967289UL, 4294967295UL}, {0UL, 4294967295UL, 4294967289UL, 0xAD4A5E3EL, 4294967295UL, 0x8C888C93L, 4294967295UL, 0xAD4A5E3EL, 4294967289UL, 4294967295UL}, {0UL, 4294967295UL, 4294967289UL, 0xAD4A5E3EL, 4294967295UL, 0x8C888C93L, 4294967295UL, 0xAD4A5E3EL, 4294967289UL, 4294967295UL}, {0UL, 4294967295UL, 4294967289UL, 0xAD4A5E3EL, 4294967295UL, 0x8C888C93L, 4294967295UL, 0xAD4A5E3EL, 4294967289UL, 4294967295UL}, {0UL, 4294967295UL, 4294967289UL, 0xAD4A5E3EL, 4294967295UL, 0x8C888C93L, 4294967295UL, 0xAD4A5E3EL, 4294967289UL, 4294967295UL}, {0UL, 4294967295UL, 4294967289UL, 0xAD4A5E3EL, 4294967295UL, 0x8C888C93L, 4294967295UL, 0xAD4A5E3EL, 4294967289UL, 4294967295UL}, {0UL, 4294967295UL, 4294967289UL, 0xAD4A5E3EL, 4294967295UL, 0x8C888C93L, 4294967295UL, 0xAD4A5E3EL, 4294967289UL, 4294967295UL}};
                int l_523 = (-8L);
                int i, j;
                for (p_103.f6 = 0; (p_103.f6 <= (-11)); p_103.f6 = safe_sub_func_int32_t_s_s(p_103.f6, 7))
                {
                    const unsigned l_486 = 0xF5D29A8CL;
                    int l_504 = (-3L);
                    for (l_129.f0 = 0; (l_129.f0 <= 4); l_129.f0 += 1)
                    {
                        unsigned l_473 = 0x2C1A5422L;
                        int l_521 = 0x4AE50C92L;
                        l_461 = l_460;
                        p_103.f5 = ((g_96 |= (safe_lshift_func_int8_t_s_s((~(g_130.f4 = func_31(l_464[4][8]))), (p_103.f6 || (func_31((l_460.f2 &= (safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(g_10, g_238.f2)) != (safe_lshift_func_uint8_t_u_s(func_31(g_125), (safe_mul_func_uint8_t_u_u(l_473, g_130.f3))))), p_103.f4)))) == p_103.f3))))) > 0x9298L);
                        g_238.f5 = ((safe_lshift_func_int16_t_s_u((+(safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_103.f4, g_96)), (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_238.f5, ((+(safe_mod_func_uint32_t_u_u(l_129.f5, g_130.f8))) != func_31(g_238.f3)))), l_486))))), 8)) ^ (g_487[2][1] == l_115.f6));
                        g_125 ^= (safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_486, l_494)), (safe_rshift_func_int8_t_s_s(g_238.f2, l_395[2][2])))) | ((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((l_504 ^= (~(safe_sub_func_int16_t_s_s(l_464[4][8], 65535UL)))))), (safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(func_31(((safe_sub_func_int16_t_s_s(g_487[4][1], (safe_rshift_func_int8_t_s_u(((~(safe_mul_func_int16_t_s_s((~(l_521 ^= ((safe_lshift_func_uint8_t_u_u((p_103.f3 ^= func_31(g_70)), p_103.f6)) ^ p_104))), g_96))) <= g_130.f4), 2)))) == l_395[1][1])), 0xE238L)), 1)), g_81)), l_395[1][0])))), l_522)) || g_130.f3)), 1UL));
                    }
                    if (l_460.f6)
                        break;
                    l_523 = 0x8F3A49FFL;
                }
                l_540 |= (func_31(l_494) || (safe_div_func_int8_t_s_s(((((safe_add_func_int16_t_s_s(p_103.f5, (0x7259E225L || (l_460.f2 ^= p_103.f2)))) && (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(4294967291UL, (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(g_238.f6, ((safe_lshift_func_uint8_t_u_s((g_130.f2 != (func_31(((p_103.f5 == p_103.f5) < 1L)) | p_103.f3)), 3)) > 1UL))) || 0UL), l_461.f3)))), g_81)), p_104))) > g_487[0][1]) != p_103.f6), g_238.f5)));
                l_461.f2 ^= (safe_add_func_uint8_t_u_u((((g_487[2][1] >= ((((0UL || ((safe_rshift_func_int16_t_s_u(0L, 4)) && 0xC4L)) || (g_70 &= (l_129.f2 = (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((g_130.f3 & (safe_add_func_int16_t_s_s(0x427BL, ((~func_31(g_238.f3)) || (func_31(l_464[4][8]) == g_130.f1))))) & g_125) ^ 0x1232L), l_395[2][1])), g_238.f3))))) && l_460.f1) != 255UL)) && p_104) != g_45), l_244));
                for (g_130.f5 = 0; (g_130.f5 <= 4); g_130.f5 += 1)
                {
                    unsigned l_565[5][9][5] = {{{4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}}, {{4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}}, {{4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}}, {{4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}}, {{4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}, {4294967295UL, 0x27BB0441L, 4294967287UL, 0x0B4FEDE3L, 0xE0A56A53L}}};
                    int l_571 = 0x446A3DD3L;
                    int i, j, k;
                    g_130.f2 |= ((safe_div_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((-8L), (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s((g_238.f2 & ((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(0UL, l_565[1][1][0])), (((((p_103.f2 <= p_103.f4) | (((!1UL) || (safe_mod_func_uint32_t_u_u(0xD313EA6CL, g_130.f8))) ^ 0x6EL)) <= l_109) >= 0UL) <= g_125))) | g_238.f5)), 0x0873L)), l_460.f5)))) || 0x87L), l_460.f3)) >= l_461.f8);
                    if (func_31(g_238.f4))
                    {
                        struct S1 l_568 = {0xDFL,9UL,4L,0L,0xF6L,0xD2B1F338L,0x80A254A6L,65535UL,0x2C6BL};
                        l_568 = l_460;
                        l_571 = (safe_mul_func_uint16_t_u_u((l_460.f2 = g_125), (g_130.f8 = l_565[0][6][4])));
                        l_460.f2 |= p_105;
                        p_103.f5 = g_130.f5;
                    }
                    else
                    {
                        unsigned l_585 = 4294967287UL;
                        l_461 = g_130;
                        l_571 = (g_45 || ((safe_add_func_uint32_t_u_u(func_31(g_238.f4), (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((~(g_130.f1 | g_130.f0)) < g_130.f4), (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(g_70, p_103.f5)) ^ l_584), g_487[2][1])), 4UL)))), p_103.f3)))) == g_238.f3));
                        l_585 = g_130.f4;
                    }
                }
            }
            p_103.f6 = (g_130.f7 && 0x59B8L);
            for (l_460.f3 = (-3); (l_460.f3 > (-2)); l_460.f3++)
            {
                unsigned l_588 = 0xC7F9F0E8L;
                struct S1 l_605 = {0x65L,0x0AL,1L,-1L,0xBAL,0xD7FC82B2L,0x5879119DL,1UL,0xF476L};
                if ((l_588 != (l_522 <= (l_589 || (safe_sub_func_int8_t_s_s(0L, ((safe_mul_func_uint16_t_u_u(p_104, (safe_mul_func_int8_t_s_s((p_105 &= (g_130.f3 && (safe_mul_func_int8_t_s_s((func_31((((safe_mul_func_int8_t_s_s((+(safe_mul_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(((0xA03B8D3CL >= ((l_129.f2 = (l_460.f2 &= func_31(((-9L) >= p_103.f4)))) != 0xEBL)) > l_584), p_103.f5)) & l_395[2][1]) < 5L), p_103.f1))), 6UL)) <= (-9L)) <= 5UL)) != g_96), p_104)))), 1L)))) ^ p_104)))))))
                {
                    unsigned l_604[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_604[i] = 0x934F18BEL;
                    if (l_604[0])
                        break;
                    g_130 = l_605;
                    g_238.f5 = func_31((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(p_105, 6)), 3)));
                }
                else
                {
                    int l_631 = 0x90EFDB01L;
                    int l_649 = 0xCB74FB2AL;
                    if (l_605.f8)
                    {
                        short l_614 = (-1L);
                        struct S1 l_632 = {255UL,249UL,0x5BC6A01FL,0xECL,1L,-9L,1UL,0x2123L,-8L};
                        p_103.f6 = 0x7F5C0F97L;
                        if (p_103.f1)
                            break;
                        g_125 ^= (safe_div_func_uint16_t_u_u((l_631 |= ((safe_rshift_func_uint16_t_u_u(func_31(l_614), 4)) | (((safe_mod_func_uint32_t_u_u((((safe_div_func_int8_t_s_s(l_619, (((safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s(0L, (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(g_238.f1, 0xC0D01EB2L)) || (safe_mod_func_uint8_t_u_u(func_31(g_487[2][1]), l_614))) || g_238.f3), (-1L))), 4UL)))))) == 0x2D2F8E53L) && 255UL))) < 0xC21F643EL) > p_103.f3), l_605.f4)) > p_104) < 0x39FB6434L))), g_70));
                        l_632 = (l_461 = l_605);
                    }
                    else
                    {
                        l_619 ^= (safe_mul_func_int8_t_s_s((l_605.f2 = g_238.f3), p_103.f6));
                    }
                    if (((safe_mul_func_uint16_t_u_u(l_631, (p_103.f4 == (((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((0L <= (safe_lshift_func_int8_t_s_u(func_31(p_103.f2), 3))), (safe_add_func_int32_t_s_s(l_394[2][5][0], ((safe_mod_func_int16_t_s_s((p_103.f0 != l_647), g_130.f7)) && g_130.f0))))), g_121)) > l_605.f2) < g_238.f4)))) && l_605.f8))
                    {
                        unsigned l_648 = 3UL;
                        l_648 = (g_238.f6 ^= g_130.f2);
                        if (l_460.f8)
                            continue;
                    }
                    else
                    {
                        l_649 &= (g_130.f2 = p_104);
                        if (l_461.f7)
                            continue;
                    }
                    if (g_238.f5)
                        break;
                    if (l_650)
                    {
                        struct S1 l_651 = {0UL,1UL,6L,0L,0xF2L,-1L,0x515E7FF9L,0x10BBL,0x2B9FL};
                        l_651 = g_130;
                        l_605.f2 = 0xE4D87977L;
                    }
                    else
                    {
                        if (g_487[2][1])
                            break;
                        p_103.f6 = ((safe_rshift_func_uint16_t_u_u(func_31((((safe_add_func_uint32_t_u_u((p_103.f0 |= ((safe_rshift_func_int8_t_s_s((~(safe_div_func_int16_t_s_s(l_460.f6, (p_103.f5 || (safe_mul_func_uint16_t_u_u(p_103.f5, p_103.f6)))))), 3)) & ((safe_mul_func_uint16_t_u_u(((l_396 = 0xCA59L) & (g_130.f8 ^= 0L)), 5L)) | ((g_130.f4 &= (g_130.f0 > l_460.f5)) <= 0xFDL)))), g_238.f3)) > p_103.f2) > 4294967295UL)), 14)) >= g_130.f5);
                    }
                }
                p_103.f6 = p_103.f5;
                if (p_104)
                {
                    int l_685 = 0x10B4E7FCL;
                    int l_686[9] = {(-9L), (-6L), (-9L), (-6L), (-9L), (-6L), (-9L), (-6L), (-9L)};
                    int i;
                    for (p_103.f6 = (-29); (p_103.f6 <= 23); p_103.f6++)
                    {
                        const unsigned short l_672 = 0x81A9L;
                        l_686[5] = (0x1EDD34CAL & ((l_605.f2 = (safe_mul_func_int8_t_s_s(p_103.f1, ((g_130.f6 >= (g_487[0][3] <= (~0x98L))) == (g_45 != (safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_672, (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u((+(safe_sub_func_int16_t_s_s((((p_103.f4 = ((safe_lshift_func_uint8_t_u_u(l_685, 7)) ^ (0xC2L && p_103.f4))) < g_487[7][3]) > 0x1C9C31D7L), g_121))), g_130.f3)), l_605.f1)), p_103.f6)), 3)))), l_685))))))) != l_605.f5));
                    }
                    return g_687;
                }
                else
                {
                    char l_706 = 0x96L;
                    int l_707 = 0xE194A55CL;
                    l_114[1] = (p_104 >= (l_688[6][1] && (-1L)));
                    g_687.f6 = g_487[2][1];
                    g_130.f2 = ((safe_lshift_func_int16_t_s_s(((g_130.f3 ^= (func_31(p_103.f1) | (safe_add_func_uint16_t_u_u(((l_706 = (4294967295UL | (safe_rshift_func_int8_t_s_u((g_130.f4 = ((safe_div_func_uint16_t_u_u((+1UL), l_650)) < ((0x0EL > (l_396 = (l_699[3] = (safe_mul_func_int8_t_s_s(0xA3L, 0L))))) < (safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(p_103.f4, g_10)), 1L)) && 1UL), g_687.f4))))), g_121)))) >= l_707), p_103.f0)))) || l_460.f5), 13)) < l_460.f0);
                }
                l_460.f2 = (!l_605.f3);
            }
            for (p_103.f2 = 0; (p_103.f2 >= 22); ++p_103.f2)
            {
                unsigned short l_712 = 0xAF82L;
                int l_717[5][2] = {{(-8L), 0xC17038CAL}, {(-8L), 0xC17038CAL}, {(-8L), 0xC17038CAL}, {(-8L), 0xC17038CAL}, {(-8L), 0xC17038CAL}};
                int l_739 = 0xEF453AE2L;
                int l_740 = 0x67041E60L;
                struct S1 l_752 = {1UL,0UL,-9L,0x8BL,-1L,0xE330EF4BL,7UL,5UL,0L};
                int i, j;
                if (((g_687.f6 == ((safe_sub_func_uint32_t_u_u(((p_105 = (l_712 = p_103.f2)) && p_103.f3), (p_103.f4 = (p_104 == ((l_460.f7 | (safe_rshift_func_int8_t_s_u((((p_103.f1 >= (~l_717[2][0])) != (g_238.f6 = (((~g_130.f4) | (safe_lshift_func_int16_t_s_s(0x4CCBL, 12))) >= l_129.f6))) < p_103.f4), l_460.f3))) == p_104))))) && 65535UL)) | p_103.f3))
                {
                    for (l_650 = 0; (l_650 == (-2)); l_650 = safe_sub_func_uint32_t_u_u(l_650, 3))
                    {
                        char l_727 = 0xDCL;
                        l_727 ^= (safe_rshift_func_uint16_t_u_u(func_31((safe_mul_func_uint8_t_u_u(g_121, (safe_unary_minus_func_uint16_t_u((l_712 > func_31(p_103.f1))))))), 8));
                    }
                }
                else
                {
                    l_740 ^= (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((l_739 |= ((safe_sub_func_uint8_t_u_u(func_31(p_103.f1), (l_736[0][2][0] |= (safe_div_func_int16_t_s_s(0xAE26L, ((l_460.f0 <= 0x32L) || (-1L))))))) <= (safe_div_func_int16_t_s_s(((l_717[3][0] >= (p_103.f4 = g_130.f4)) == 0x31L), 1UL)))), 0L)), g_130.f4));
                    if (p_103.f6)
                        continue;
                }
                if ((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((0xB01B83C3L >= (l_717[2][0] = (p_103.f4 = (safe_unary_minus_func_uint8_t_u((p_103.f3 = 0UL)))))), (safe_div_func_uint8_t_u_u((+p_103.f6), (safe_add_func_uint16_t_u_u(p_104, p_104)))))), 0x23L)))
                {
                    for (l_244 = 0; (l_244 < 39); l_244 = safe_add_func_int16_t_s_s(l_244, 8))
                    {
                        l_460 = l_752;
                    }
                }
                else
                {
                    const unsigned l_753 = 4294967289UL;
                    g_238.f6 = p_103.f3;
                    if (l_752.f3)
                    {
                        p_103.f5 = p_103.f0;
                        if (l_753)
                            continue;
                        l_754 = g_121;
                    }
                    else
                    {
                        const unsigned char l_757 = 0xCFL;
                        int l_766 = 0x8363CE0BL;
                        if (g_238.f1)
                            break;
                        l_766 ^= (safe_sub_func_int16_t_s_s(((((g_238.f1 > ((((p_103.f6 >= l_757) || ((g_130.f4 = (g_130.f3 = func_31(g_125))) ^ (g_130.f1 && func_31(((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_129.f2, l_753)), ((safe_sub_func_uint16_t_u_u((0x5CL != g_125), g_126)) >= l_129.f5))), p_103.f2)) >= p_103.f3))))) && p_103.f3) ^ g_81)) || l_753) & 1UL) <= 0x864AL), p_103.f5));
                    }
                }
                l_395[1][1] = (func_31(p_103.f4) > (((g_687.f3 ^ (p_103.f3 = p_103.f3)) || ((l_769 = (safe_rshift_func_uint8_t_u_s(func_31(l_394[2][5][0]), l_752.f4))) > g_687.f3)) == ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(func_31((((g_130.f4 = p_105) ^ p_103.f5) >= l_774)), 6)), g_130.f2)) <= p_103.f1)));
            }
        }
    }
    for (g_238.f4 = 0; (g_238.f4 <= 1); g_238.f4 += 1)
    {
        unsigned l_796[4][6] = {{0x30EA8C7BL, 0x2680FABEL, 4294967287UL, 0x2680FABEL, 0x30EA8C7BL, 1UL}, {0x30EA8C7BL, 0x2680FABEL, 4294967287UL, 0x2680FABEL, 0x30EA8C7BL, 1UL}, {0x30EA8C7BL, 0x2680FABEL, 4294967287UL, 0x2680FABEL, 0x30EA8C7BL, 1UL}, {0x30EA8C7BL, 0x2680FABEL, 4294967287UL, 0x2680FABEL, 0x30EA8C7BL, 1UL}};
        int i, j;
        l_461 = g_130;
        if (l_461.f2)
            continue;
        for (l_769 = 1; (l_769 <= 4); l_769 += 1)
        {
            int l_781 = (-2L);
            int i, j;
            g_687.f6 = g_487[l_769][g_238.f4];
            for (p_104 = 4; (p_104 >= 1); p_104 -= 1)
            {
                int l_790 = 0xB8E7DEECL;
                for (g_125 = 4; (g_125 >= 0); g_125 -= 1)
                {
                    int l_793 = 8L;
                    int i, j;
                    if (l_688[(g_125 + 3)][g_238.f4])
                    {
                        char l_786 = (-1L);
                        int i, j;
                        g_130.f2 = l_312[(g_125 + 3)][l_769];
                        p_103.f6 &= ((-4L) ^ 0UL);
                        p_103.f6 &= (safe_rshift_func_uint8_t_u_s((l_688[(l_769 + 4)][g_238.f4] = (((safe_sub_func_uint8_t_u_u(0x79L, (((((func_31((((safe_sub_func_uint16_t_u_u(2UL, (l_781 &= l_312[(g_125 + 1)][(g_238.f4 + 3)]))) != (func_31(l_312[(g_125 + 3)][l_769]) || (0xCCC0L < ((safe_lshift_func_uint8_t_u_u(g_125, g_487[l_769][g_238.f4])) || func_31((safe_div_func_int16_t_s_s(g_487[l_769][g_238.f4], l_786))))))) || 0xE9L)) > 6UL) && p_103.f3) >= p_103.f2) & 0xFBA11164L) != 0x1FB76BEFL))) && (-9L)) != g_130.f0)), p_103.f0));
                    }
                    else
                    {
                        unsigned char l_833[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_833[i] = 0x4EL;
                        g_687.f5 ^= func_31((safe_unary_minus_func_int16_t_s(((p_105 = (((((safe_mod_func_int16_t_s_s(l_790, (l_793 = (safe_mod_func_int32_t_s_s((l_790 > p_103.f3), l_781))))) | func_31((safe_rshift_func_int16_t_s_u(l_781, 14)))) || (g_130.f3 < (g_96 = ((((~func_31(l_688[(g_125 + 3)][g_238.f4])) || l_796[2][4]) && 1UL) ^ g_130.f2)))) <= g_130.f3) < l_312[3][4])) & 0xB7L))));
                        g_130.f2 = (((safe_rshift_func_int16_t_s_s(((~(g_687.f5 || (safe_lshift_func_int8_t_s_s(0x9DL, l_688[(g_125 + 3)][g_238.f4])))) != g_130.f5), (func_31(p_103.f4) <= ((((!(safe_div_func_uint16_t_u_u((0xC2C6453FL == (safe_sub_func_int32_t_s_s(p_105, ((p_104 >= p_104) > g_238.f6)))), p_104))) != 7UL) <= 1L) == 255UL)))) && g_238.f5) == p_103.f1);
                        p_103.f5 |= g_238.f2;
                        p_103.f5 = (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(g_238.f6, g_487[l_769][g_238.f4])) == (+((safe_add_func_int16_t_s_s(g_121, (g_130.f8 | ((safe_lshift_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((l_461.f2 = (safe_mul_func_int8_t_s_s((l_129.f2 = (p_105 = ((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((((func_31((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(g_238.f0, (safe_add_func_int16_t_s_s((~g_130.f4), l_793)))) ^ 0x7C61D8FDL), (g_96 = (safe_lshift_func_uint16_t_u_s(p_103.f2, p_103.f4)))))) && l_833[5]) && p_103.f1) | g_238.f6) || 0x16L), g_125)), 7)) == 0x7FL), g_487[2][1])), p_103.f3)) < 0xD1L))), l_790))) <= 0x35L), g_834)) > 0L) ^ 0xA9EFCD6BL), l_793)) || 0L)))) | p_103.f1))), 3));
                    }
                    for (l_461.f8 = 3; (l_461.f8 >= 0); l_461.f8 -= 1)
                    {
                        if (l_796[0][5])
                            break;
                        g_130 = g_130;
                    }
                }
                p_103.f5 = g_687.f0;
            }
        }
    }
    g_238.f5 = g_834;
    return p_103;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_130.f0, "g_130.f0", print_hash_value);
    transparent_crc(g_130.f1, "g_130.f1", print_hash_value);
    transparent_crc(g_130.f2, "g_130.f2", print_hash_value);
    transparent_crc(g_130.f3, "g_130.f3", print_hash_value);
    transparent_crc(g_130.f4, "g_130.f4", print_hash_value);
    transparent_crc(g_130.f5, "g_130.f5", print_hash_value);
    transparent_crc(g_130.f6, "g_130.f6", print_hash_value);
    transparent_crc(g_130.f7, "g_130.f7", print_hash_value);
    transparent_crc(g_130.f8, "g_130.f8", print_hash_value);
    transparent_crc(g_238.f0, "g_238.f0", print_hash_value);
    transparent_crc(g_238.f1, "g_238.f1", print_hash_value);
    transparent_crc(g_238.f2, "g_238.f2", print_hash_value);
    transparent_crc(g_238.f3, "g_238.f3", print_hash_value);
    transparent_crc(g_238.f4, "g_238.f4", print_hash_value);
    transparent_crc(g_238.f5, "g_238.f5", print_hash_value);
    transparent_crc(g_238.f6, "g_238.f6", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_487[i][j], "g_487[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_687.f0, "g_687.f0", print_hash_value);
    transparent_crc(g_687.f1, "g_687.f1", print_hash_value);
    transparent_crc(g_687.f2, "g_687.f2", print_hash_value);
    transparent_crc(g_687.f3, "g_687.f3", print_hash_value);
    transparent_crc(g_687.f4, "g_687.f4", print_hash_value);
    transparent_crc(g_687.f5, "g_687.f5", print_hash_value);
    transparent_crc(g_687.f6, "g_687.f6", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_980, "g_980", print_hash_value);
    transparent_crc(g_1302.f0, "g_1302.f0", print_hash_value);
    transparent_crc(g_1302.f1, "g_1302.f1", print_hash_value);
    transparent_crc(g_1302.f2, "g_1302.f2", print_hash_value);
    transparent_crc(g_1302.f3, "g_1302.f3", print_hash_value);
    transparent_crc(g_1302.f4, "g_1302.f4", print_hash_value);
    transparent_crc(g_1302.f5, "g_1302.f5", print_hash_value);
    transparent_crc(g_1302.f6, "g_1302.f6", print_hash_value);
    transparent_crc(g_1302.f7, "g_1302.f7", print_hash_value);
    transparent_crc(g_1302.f8, "g_1302.f8", print_hash_value);
    transparent_crc(g_1689, "g_1689", print_hash_value);
    transparent_crc(g_1784, "g_1784", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1888[i], "g_1888[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1925, "g_1925", print_hash_value);
    transparent_crc(g_1941, "g_1941", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1957[i], "g_1957[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1998.f0, "g_1998.f0", print_hash_value);
    transparent_crc(g_1998.f1, "g_1998.f1", print_hash_value);
    transparent_crc(g_1998.f2, "g_1998.f2", print_hash_value);
    transparent_crc(g_1998.f3, "g_1998.f3", print_hash_value);
    transparent_crc(g_1998.f4, "g_1998.f4", print_hash_value);
    transparent_crc(g_1998.f5, "g_1998.f5", print_hash_value);
    transparent_crc(g_1998.f6, "g_1998.f6", print_hash_value);
    transparent_crc(g_1998.f7, "g_1998.f7", print_hash_value);
    transparent_crc(g_1998.f8, "g_1998.f8", print_hash_value);
    transparent_crc(g_2005, "g_2005", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
