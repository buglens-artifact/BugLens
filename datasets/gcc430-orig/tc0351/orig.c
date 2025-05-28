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



static unsigned g_20 = 4UL;
static unsigned g_37 = 4294967295UL;
static int g_42 = (-1L);
static int g_43 = 7L;
static int g_44 = 0x268DD2ACL;
static unsigned g_45 = 0xBECC33BAL;
static unsigned g_62 = 9UL;
static unsigned char g_70 = 0UL;
static char g_120 = 9L;
static char g_131 = 0xB8L;
static unsigned g_132 = 0xDB4DB8DDL;
static int g_133 = (-7L);
static unsigned char g_172 = 255UL;
static unsigned g_180 = 4294967295UL;
static int g_187 = 1L;
static unsigned g_248 = 4294967295UL;
static unsigned g_414 = 4294967295UL;
static int g_521 = 0xC6AE55DCL;
static char g_523 = (-1L);
static int g_528 = (-3L);
static char g_530 = (-1L);
static short g_532 = 0x4CA7L;
static unsigned char g_533 = 6UL;
static unsigned short g_539 = 65527UL;
static int g_544 = 0x819490D0L;
static unsigned g_546 = 0xC021D15DL;



static int func_1(void);
static int func_2(char p_3, unsigned p_4, char p_5, int p_6);
static char func_12(char p_13, char p_14, unsigned p_15);
static short func_16(unsigned p_17);
static int func_33(int p_34);
static unsigned char func_77(unsigned short p_78);
static unsigned short func_79(int p_80, unsigned short p_81, short p_82, char p_83, unsigned short p_84);
static unsigned short func_104(unsigned char p_105, unsigned char p_106);
static char func_116(unsigned short p_117);
static unsigned short func_118(int p_119);
static int func_1(void)
{
    short l_7 = (-4L);
    int l_30 = 0L;
    short l_560 = 0xE590L;
    int l_693 = (-3L);
    int l_716 = 0xC9ED490BL;
    l_693 = func_2(l_7, (safe_sub_func_uint16_t_u_u(0x97F0L, ((safe_rshift_func_int8_t_s_s(func_12(l_7, l_7, ((func_16(((safe_rshift_func_uint8_t_u_s(0x45L, g_20)) < (safe_mod_func_uint32_t_u_u((((!(((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u(g_20)) > l_7), l_7)), l_7)), 65529UL)) < g_20) == g_20)) || l_7) == l_7), l_30)))) && g_20) >= 2L)), l_7)) ^ g_544))), l_560, g_521);
    for (g_528 = 0; (g_528 < 16); g_528 = safe_add_func_uint16_t_u_u(g_528, 6))
    {
        l_693 |= g_539;
        l_693 = g_62;
        for (g_70 = 24; (g_70 > 2); g_70 = safe_sub_func_uint8_t_u_u(g_70, 5))
        {
            unsigned short l_706 = 0xD532L;
            l_706 = (safe_mul_func_int16_t_s_s(0x5B3DL, (safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(g_133, (safe_lshift_func_int16_t_s_u(func_33(l_560), l_30)))), l_7))));
        }
    }
    l_716 ^= ((g_539 ^ (((safe_sub_func_uint16_t_u_u((((!(safe_rshift_func_int8_t_s_u(l_7, 0))) > l_560) && (safe_lshift_func_uint8_t_u_u((g_530 > g_248), 3))), l_693)) <= (safe_unary_minus_func_uint8_t_u(0x0FL))) && l_7)) >= (+(safe_lshift_func_uint8_t_u_s(g_521, l_30))));
    g_521 &= (func_77(l_693) ^ g_532);
    return l_693;
}







static int func_2(char p_3, unsigned p_4, char p_5, int p_6)
{
    unsigned short l_567 = 0x39E9L;
    int l_630 = 2L;
    p_6 = (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_4, (safe_lshift_func_uint16_t_u_s(p_3, 12)))), g_528));
    if ((g_532 == p_4))
    {
        short l_568 = 1L;
        g_521 = func_12(l_567, l_568, g_521);
    }
    else
    {
        short l_571 = 0xDB19L;
        short l_689 = (-2L);
        short l_690 = 0x28F0L;
        for (g_532 = 0; (g_532 == 23); g_532++)
        {
            int l_586 = 0x1954BABEL;
            unsigned l_612 = 0x29D06C8AL;
            short l_617 = 6L;
            g_521 = l_571;
            g_187 = (!p_6);
            for (g_414 = 0; (g_414 == 36); ++g_414)
            {
                g_521 = (safe_rshift_func_int8_t_s_u((g_172 != ((((l_571 ^ (safe_lshift_func_uint8_t_u_u((l_567 <= (p_6 & (((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(p_6, (safe_mod_func_int16_t_s_s((((g_539 <= (g_42 >= func_79(l_571, (safe_lshift_func_uint8_t_u_u(g_414, l_571)), p_5, l_571, p_6))) < g_414) ^ p_6), l_586)))), 0xB7D9L)) ^ l_571) >= g_133))), 1))) | p_5) > 0x2A074DE6L) && 1L)), 4));
            }
            for (g_132 = 0; (g_132 <= 46); g_132++)
            {
                short l_593 = (-2L);
                for (g_539 = 10; (g_539 <= 27); g_539++)
                {
                    int l_598 = 0xB893B69AL;
                    l_593 = (safe_sub_func_int32_t_s_s(l_567, ((-1L) != p_3)));
                    if ((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((l_598 > (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_533, ((safe_sub_func_int32_t_s_s((l_593 != (+((-8L) || (g_544 & l_571)))), g_44)) ^ ((safe_mod_func_uint8_t_u_u(p_4, 0x4BL)) <= l_586)))), 0x6CL)), p_5))), g_132)), l_567)))
                    {
                        return g_521;
                    }
                    else
                    {
                        unsigned l_628 = 0x39CB523DL;
                        int l_629 = 0xA63EBDE4L;
                        p_6 = g_528;
                        p_6 |= (safe_mod_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((8UL != (((l_586 || (l_612 ^ ((safe_lshift_func_int16_t_s_u(l_586, (safe_div_func_uint16_t_u_u(l_617, ((((func_79(((+(safe_div_func_int32_t_s_s((((((safe_mod_func_int8_t_s_s((+((safe_lshift_func_int16_t_s_u(g_523, 3)) || (safe_div_func_int16_t_s_s(0L, (safe_add_func_int16_t_s_s(func_33(l_628), p_5)))))), 0x89L)) <= l_598) >= (-8L)) || 0x86D6L) <= l_567), 4294967295UL))) < p_3), p_5, g_187, g_131, l_567) & g_544) >= 0x6A0F35D9L) == 5L) || 0x35EFL))))) >= l_629))) || (-1L)) != 0x6EC1892AL)))), 0x1924L));
                        g_521 = l_598;
                    }
                    if (g_42)
                        break;
                    l_630 = p_5;
                }
                g_187 = 0x914D1047L;
                if ((((safe_rshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s((!(-1L)), g_180)) | l_586), ((0L && (safe_sub_func_int8_t_s_s((0xF2B3L > (safe_add_func_uint8_t_u_u(0xDCL, (((safe_lshift_func_int8_t_s_s(g_532, (safe_lshift_func_int16_t_s_s(g_530, 14)))) == l_571) && p_5)))), p_5))) < 0xAEL))) >= g_43) != 0UL))
                {
                    short l_654 = (-1L);
                    p_6 = (((g_132 | (safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u(((((safe_add_func_int16_t_s_s((((((0x192EL <= (safe_unary_minus_func_int16_t_s((l_654 != func_77((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(func_79(func_79((l_593 && g_120), l_654, l_630, (((safe_mul_func_uint8_t_u_u(func_77((l_630 || (safe_rshift_func_int8_t_s_s(func_77(l_617), p_5)))), 0xC8L)) || 0x662D2B78L) < 9UL), g_20), g_530, g_133, p_5, l_654), (-1L))), 0xD0EEL))))))) && l_571) ^ p_5) <= g_521) || p_3), g_42)) <= g_180) || p_3) | g_414), g_521)) != g_248) && p_5) == p_4), p_6)), p_3)), 4L))) & p_3) ^ l_571);
                    g_521 = (safe_div_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((g_180 & ((0xF5L >= (g_528 && (safe_div_func_uint32_t_u_u(4294967295UL, 0xEEAB81F2L)))) & l_571)), (safe_lshift_func_uint8_t_u_s(((((l_593 && (l_630 || (((g_523 >= g_180) || p_4) | p_3))) || (-4L)) <= 253UL) ^ l_630), l_612)))) < p_3), p_5));
                    g_187 = p_4;
                }
                else
                {
                    unsigned char l_671 = 0x3BL;
                    p_6 = (((func_77(g_43) & ((g_37 != p_6) == 0x2FL)) <= ((g_248 != (l_671 >= (safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_44, g_532)), g_131)), p_3)) ^ g_180), 10)))), p_5)))) != (-7L))) <= p_5);
                    l_586 = 0x3A72A4CAL;
                }
            }
        }
        p_6 = g_120;
        g_521 |= ((l_567 ^ (safe_div_func_uint16_t_u_u((func_79(g_172, (safe_add_func_uint16_t_u_u((((0x10L ^ ((safe_div_func_uint32_t_u_u(l_567, ((g_523 ^ p_6) & ((!g_70) <= g_70)))) | (((l_689 & g_43) < 0x7AC6L) & g_546))) <= l_690) > l_567), 0x16B9L)), p_6, g_172, p_6) & g_530), l_630))) == p_4);
    }
    for (l_567 = 6; (l_567 <= 32); l_567 = safe_add_func_uint16_t_u_u(l_567, 8))
    {
        p_6 = p_4;
    }
    p_6 = (0xB6C1C540L || (((p_3 == (-1L)) != 65534UL) && (l_567 == 0UL)));
    return g_133;
}







static char func_12(char p_13, char p_14, unsigned p_15)
{
    unsigned char l_467 = 1UL;
    char l_476 = 0xD6L;
    short l_493 = 1L;
    int l_518 = 0xF2A40A62L;
    int l_520 = 0L;
    int l_527 = (-8L);
    if ((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(6L, ((l_467 < p_15) > g_133))), (((safe_sub_func_int16_t_s_s(g_70, ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_476, func_77((p_14 | func_77(p_14))))), 4)), 3)) || 0xA0L))) != 9UL) != 0xF6L))))
    {
        char l_477 = (-1L);
        return l_477;
    }
    else
    {
        int l_489 = 0xDB2856A7L;
        int l_506 = 0xEF30CB72L;
        int l_531 = 0xD6FDEC3DL;
        if ((p_15 > p_14))
        {
            unsigned l_484 = 0UL;
            int l_517 = (-4L);
            int l_525 = 0xB5F15D33L;
            if (((g_180 != (g_131 & (safe_lshift_func_uint8_t_u_s((((safe_mul_func_int16_t_s_s(func_79(g_133, g_248, g_42, ((safe_mod_func_int16_t_s_s(0x2325L, l_484)) < g_133), (safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((g_131 ^ g_20), 8UL)), 11))), p_15)) | l_489) > 0xA5L), 0)))) >= l_484))
            {
                int l_490 = 0L;
                int l_519 = 0xC29A087FL;
                int l_522 = (-1L);
                int l_524 = 0L;
                int l_526 = 0x506459D8L;
                int l_529 = 0x29DB8E88L;
                l_490 = l_476;
                l_506 = ((safe_sub_func_int32_t_s_s(5L, ((l_484 != ((l_493 || ((func_16((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((p_14 || (safe_mul_func_int8_t_s_s(6L, (safe_mul_func_uint16_t_u_u((0x8B87L > p_15), (safe_sub_func_int32_t_s_s((g_248 && ((func_118((func_116((safe_sub_func_int32_t_s_s(g_414, 7L))) ^ 0xE5L)) ^ l_493) ^ 0x9DL)), g_70))))))), 0x9CL)), p_14))) >= g_131) > p_13)) != l_490)) ^ 0x5C2AL))) == g_131);
                l_506 |= (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((!(safe_add_func_int32_t_s_s((-1L), ((func_118(p_13) < func_79(g_62, (+0xA659L), g_414, p_15, (((safe_mul_func_uint16_t_u_u((l_490 <= (g_172 > p_13)), 0L)) < p_15) >= p_14))) > l_467)))), 0xDB21E731L)), l_484)) ^ 0x50596581L) < 1L);
                for (g_44 = 0; (g_44 <= 6); g_44++)
                {
                    l_517 = (0x055AL & (-1L));
                    ++g_533;
                    l_525 = l_526;
                }
            }
            else
            {
                char l_536 = 7L;
                int l_537 = (-9L);
                int l_538 = 5L;
                --g_539;
            }
        }
        else
        {
            int l_542 = 0L;
            int l_543 = (-1L);
            int l_545 = 0xB3D7AD81L;
            --g_546;
        }
    }
    l_518 &= ((0xE002FB37L >= g_132) >= (safe_lshift_func_uint8_t_u_s(g_172, func_77(g_533))));
    if (l_467)
    {
        unsigned l_553 = 3UL;
        int l_558 = 0x6FB5C3FBL;
        for (p_13 = 0; (p_13 < (-6)); --p_13)
        {
            ++l_553;
            if (p_14)
                continue;
        }
        l_558 = (l_476 & (safe_mul_func_uint8_t_u_u(p_13, l_467)));
    }
    else
    {
        int l_559 = (-4L);
        l_559 = (0x5E62D59CL == (g_180 && (func_116((+p_15)) == l_559)));
    }
    return p_15;
}







static short func_16(unsigned p_17)
{
    char l_85 = 0L;
    int l_462 = 0L;
    for (p_17 = 0; (p_17 > 20); p_17++)
    {
        unsigned short l_63 = 65535UL;
        l_63 = func_33(g_20);
        return p_17;
    }
    for (g_45 = 0; (g_45 <= 55); ++g_45)
    {
        int l_69 = 0xCDCEC458L;
        if (g_43)
            break;
        g_70 = (safe_add_func_uint16_t_u_u(65528UL, (safe_unary_minus_func_uint8_t_u((l_69 > g_37)))));
    }
    l_462 = (safe_rshift_func_uint8_t_u_s(func_33((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s((p_17 > g_70), 10)) == ((((g_43 > func_77(func_79(l_85, (safe_lshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s((0UL & (l_85 >= (l_85 >= l_85))), (safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(func_104(func_33((5UL < p_17)), g_43), 2UL)), 6)), 0xAD9EL)), g_44)), l_85)))), g_44)), p_17)) || l_85), g_43)), p_17, g_44, g_43))) && g_180) > 0x4AL) <= 65535UL)), l_85))), g_43));
    return p_17;
}







static int func_33(int p_34)
{
    int l_40 = 0x83E731E7L;
    int l_41 = 0x7935DB5AL;
    int l_60 = 0xE8D2CA8EL;
    char l_61 = 0L;
    for (g_20 = 3; (g_20 == 54); g_20++)
    {
        --g_37;
        return p_34;
    }
    g_45--;
    p_34 ^= g_42;
    g_62 = (l_41 > (0x494FB389L && (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(p_34, p_34)) >= (p_34 <= (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s(0L, ((g_44 <= ((safe_mod_func_uint32_t_u_u(g_45, 0x18AD385EL)) < p_34)) > l_60))) | 4294967295UL) == 0UL), 0xBA6DAD3FL)), l_61)))), 1))));
    return l_41;
}







static unsigned char func_77(unsigned short p_78)
{
    unsigned l_461 = 0x00AAE8DFL;
    g_187 = p_78;
    return l_461;
}







static unsigned short func_79(int p_80, unsigned short p_81, short p_82, char p_83, unsigned short p_84)
{
    unsigned char l_455 = 1UL;
    int l_460 = 0xA6FD3F7AL;
    l_460 = (safe_div_func_uint16_t_u_u(func_33(((g_42 == (!((func_33(g_62) || (safe_sub_func_int16_t_s_s(func_33((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_414 & (func_33(l_455) != ((safe_sub_func_int16_t_s_s(l_455, (safe_add_func_int16_t_s_s(l_455, ((p_80 == 65526UL) == p_83))))) && g_172))), p_84)), l_455))), 0xAA8CL))) && g_42))) >= 0x1FL)), p_80));
    return g_187;
}







static unsigned short func_104(unsigned char p_105, unsigned char p_106)
{
    unsigned l_111 = 4294967294UL;
    short l_442 = 0x7015L;
    for (g_42 = 0; (g_42 > 21); g_42 = safe_add_func_uint16_t_u_u(g_42, 6))
    {
        int l_443 = 0x24941D30L;
        int l_444 = 0xF278F495L;
        l_444 = (safe_lshift_func_uint16_t_u_s(func_33((func_33(l_111) >= (~((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(func_116((+func_118(g_42))), ((!(safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((1L < (0xDC435AD9L != l_111)))), ((safe_mod_func_uint32_t_u_u((((((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(l_442, 0xE7B1CDF3L)), l_443)) > 0xAE0A9D3AL) < g_70) || g_70) >= (-8L)), g_70)) >= l_443))), p_106))) == g_70))), 0)) | p_106)))), 14));
    }
    return l_111;
}







static char func_116(unsigned short p_117)
{
    char l_140 = 0x55L;
    int l_145 = 0xD42751BAL;
    unsigned l_289 = 4294967295UL;
    int l_330 = 0xEE6F4B5CL;
    unsigned short l_334 = 0xFD1BL;
    unsigned char l_335 = 5UL;
    char l_412 = 1L;
    g_133 = p_117;
    if ((safe_rshift_func_int8_t_s_s((0x7DL != (safe_mod_func_uint8_t_u_u(7UL, (safe_mod_func_int8_t_s_s(l_140, ((((func_118(g_132) || (!(safe_sub_func_int16_t_s_s((((0UL < (+(~((l_140 != (~func_118(g_70))) | 0x80L)))) == 0x00L) & l_140), g_131)))) ^ l_140) & 0x00E5L) || 0x8EBBL)))))), p_117)))
    {
        unsigned l_156 = 0x7B0EADF1L;
        int l_159 = 0xD0B757F9L;
        unsigned l_216 = 4294967295UL;
        short l_219 = 0xB911L;
        for (g_120 = 0; (g_120 == 16); g_120 = safe_add_func_int16_t_s_s(g_120, 3))
        {
            l_145 = 0L;
        }
        l_159 = ((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(0xC007EE71L, (!g_42))), g_42)), (0x12L < ((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_117, func_118(l_156))), (g_42 && (safe_sub_func_int16_t_s_s(p_117, p_117))))) || l_156)))) >= g_133);
        for (g_120 = 15; (g_120 == (-11)); g_120 = safe_sub_func_uint8_t_u_u(g_120, 1))
        {
            short l_162 = 0xD2A6L;
            int l_179 = 0x720D768DL;
            short l_188 = 0x0A76L;
            l_162 = (0x8BL != 0L);
            l_145 = (l_162 || (safe_sub_func_int16_t_s_s((g_131 & (~g_133)), ((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s(g_131, (safe_sub_func_uint16_t_u_u(g_44, 0x9F99L)))) || (safe_unary_minus_func_uint16_t_u(g_172))), 0)) > (!(!(safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_44, l_162)), g_172))))))));
            l_179 = (safe_mod_func_int32_t_s_s((+(p_117 ^ (0xFAL == g_44))), 0x750E480CL));
            if (g_172)
            {
                if (g_70)
                    break;
                g_180 ^= 0x67C9850CL;
            }
            else
            {
                int l_191 = 0x63A393D4L;
                g_187 = (((l_162 && (safe_rshift_func_int8_t_s_u((l_179 <= (safe_sub_func_uint16_t_u_u(((((p_117 & (safe_lshift_func_int16_t_s_s(g_187, (g_133 != (l_188 < (safe_add_func_uint16_t_u_u(p_117, l_191))))))) != ((p_117 || (-5L)) && p_117)) == p_117) <= p_117), 0x2B30L))), p_117))) ^ p_117) | g_70);
                for (g_172 = (-29); (g_172 < 13); g_172++)
                {
                    l_179 = (((safe_lshift_func_int8_t_s_s(p_117, g_70)) <= (0x02BCF3F1L == (p_117 | g_133))) >= ((safe_rshift_func_int8_t_s_s(p_117, 2)) & (((3UL < (l_145 ^ (safe_sub_func_uint32_t_u_u(0x8358C8BFL, g_70)))) && g_172) ^ g_131)));
                }
                l_219 ^= (safe_div_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((6UL && (safe_lshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(l_191, (safe_add_func_uint16_t_u_u(p_117, ((+(0x7C95AB78L <= g_120)) != ((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_117, l_188)), l_216)) > (safe_add_func_uint32_t_u_u(g_70, (-7L))))))))) > g_133), p_117))), 247UL)), l_191)) & p_117), g_132));
            }
        }
    }
    else
    {
        int l_220 = 0x9A7709DEL;
        unsigned l_227 = 0x11467248L;
        int l_266 = 1L;
        int l_271 = 0xC58FC3BAL;
        int l_333 = 1L;
        l_220 |= (p_117 > 0x5A9E6D61L);
        l_220 = ((~((p_117 < (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((g_172 && 4UL), 6)), 0))) < (g_132 && 0xE263B0CCL))) != g_131);
        l_220 |= (g_120 & p_117);
        if (l_220)
        {
            int l_235 = 6L;
            for (l_140 = 0; (l_140 > 20); l_140 = safe_add_func_int32_t_s_s(l_140, 8))
            {
                char l_234 = (-3L);
                int l_249 = 1L;
                l_235 = (((func_118(l_227) != (safe_mul_func_uint16_t_u_u(l_145, g_133))) && ((((p_117 == ((safe_mul_func_uint16_t_u_u(1UL, (func_118((safe_lshift_func_int16_t_s_s(((p_117 ^ g_187) | g_132), g_172))) < g_42))) || l_234)) ^ 0x8AL) == 0xACBD30B6L) ^ (-8L))) == 0x1F12L);
                g_248 ^= ((safe_mul_func_uint8_t_u_u(p_117, (p_117 > (((p_117 || (safe_lshift_func_int16_t_s_s(p_117, p_117))) || ((safe_lshift_func_uint8_t_u_s((0x89L <= (l_234 && g_180)), 1)) == (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(((((func_118(g_132) & g_187) || l_235) && l_234) >= (-10L)), p_117)), 1)), 3)))) | l_145)))) > (-10L));
                l_249 = g_133;
                if (g_131)
                    continue;
            }
            l_220 = func_118(func_118((safe_add_func_int8_t_s_s((g_132 < (safe_rshift_func_uint8_t_u_s(247UL, g_44))), (l_235 < 1UL)))));
        }
        else
        {
            unsigned l_268 = 0UL;
            int l_286 = 0x0EE7B767L;
            unsigned l_299 = 0x2A351025L;
            int l_377 = 1L;
            int l_399 = (-9L);
            unsigned char l_427 = 0x2BL;
            if ((g_180 != (-1L)))
            {
                int l_254 = 0xF7500B1CL;
                l_254 ^= p_117;
                return l_254;
            }
            else
            {
                unsigned l_255 = 0x4A5956B6L;
                int l_267 = 0x381F490EL;
                char l_306 = 8L;
                l_255 |= l_140;
                l_267 = ((l_145 < 0x2FL) | func_118(((safe_div_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((p_117 != (safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_266, func_118(g_133))), g_187))), g_44)) <= (p_117 != (-7L))), g_131)) && (-6L))));
                l_286 = (l_268 != (safe_div_func_int8_t_s_s(l_271, (safe_lshift_func_int8_t_s_s((((1UL < (safe_div_func_int8_t_s_s(((-1L) <= ((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0UL, (safe_div_func_int16_t_s_s((4294967295UL != ((safe_div_func_uint16_t_u_u((p_117 || (((l_255 != g_44) ^ g_43) != l_140)), 65529UL)) < 4294967293UL)), 0x889FL)))), 0xB1BDL)), 0)) == l_267)), 2UL))) == l_255) | 9L), p_117)))));
                if (func_118(((safe_add_func_uint8_t_u_u(l_289, (safe_unary_minus_func_int8_t_s(p_117)))) <= func_118((safe_mul_func_uint16_t_u_u((((((p_117 != p_117) != (((safe_div_func_uint32_t_u_u(1UL, (+(safe_add_func_int8_t_s_s(p_117, (safe_sub_func_int16_t_s_s(l_286, func_118(p_117)))))))) || g_42) < 0UL)) && g_132) >= (-1L)) || l_255), 0x30B2L))))))
                {
                    int l_311 = 0x892DC4D5L;
                    l_299 = (-1L);
                    l_220 |= (0UL | ((((safe_mul_func_int8_t_s_s((p_117 > ((safe_rshift_func_int16_t_s_s((0xE82E7F02L == (safe_sub_func_int32_t_s_s(l_306, (0x17L > (safe_div_func_int32_t_s_s(func_118((0x54DEL && (safe_lshift_func_uint16_t_u_s(l_311, ((safe_lshift_func_int8_t_s_s((+(safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(l_311, (((safe_sub_func_int16_t_s_s(g_172, p_117)) < 4294967287UL) ^ p_117))) > (-1L)), l_311))), g_120)) < g_43))))), g_70)))))), g_187)) <= g_248)), 255UL)) > p_117) & p_117) >= g_172));
                }
                else
                {
                    return g_42;
                }
            }
            for (g_172 = 0; (g_172 != 51); ++g_172)
            {
                int l_347 = (-6L);
                unsigned l_356 = 0x342388C2L;
                l_286 = (safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((+(((safe_mod_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(l_330, (safe_sub_func_int16_t_s_s(((l_333 != (+((l_227 ^ l_334) || (p_117 & (l_335 || g_42))))) || ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0xA5E9E908L, p_117)), 5)) && 0xDAL)), l_299)))) & 0x6DDDL) <= g_187), (-1L))) <= p_117) <= g_180)), 0x16D7211CL)), p_117));
                for (l_145 = 28; (l_145 <= 20); l_145 = safe_sub_func_int32_t_s_s(l_145, 8))
                {
                    unsigned char l_344 = 0x8DL;
                    l_344 = (g_132 > (((safe_mod_func_int32_t_s_s((0x44A4L <= 65529UL), (g_120 & 0x4DL))) < g_42) && g_180));
                    l_220 = g_248;
                }
                if ((safe_mul_func_uint16_t_u_u(func_118((l_286 != func_118(l_271))), l_347)))
                {
                    for (g_187 = 1; (g_187 > (-27)); g_187 = safe_sub_func_uint32_t_u_u(g_187, 3))
                    {
                        return l_335;
                    }
                }
                else
                {
                    short l_378 = (-1L);
                    unsigned l_384 = 1UL;
                    int l_400 = 0x15EC3500L;
                    l_347 = func_118((safe_mod_func_uint8_t_u_u(l_347, (l_266 & (safe_add_func_int32_t_s_s((-1L), g_187))))));
                    if ((safe_mod_func_uint16_t_u_u(0x0B19L, p_117)))
                    {
                        l_356 = func_118(((func_118(l_299) < 1UL) <= (g_133 < 0xB166L)));
                        l_286 = g_187;
                        l_378 &= (safe_sub_func_uint32_t_u_u(((((safe_mod_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_117, p_117)), p_117)), 7)) >= func_118((safe_sub_func_uint32_t_u_u(((p_117 >= func_118((safe_sub_func_uint8_t_u_u(0x53L, func_118(g_172))))) | ((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(l_333, l_289)), p_117)) != 0UL)), 0xD313F7A6L)))) ^ p_117) || p_117), l_377)) || 0xF4L) <= 0x0A3A8EB3L) >= p_117), l_347));
                    }
                    else
                    {
                        g_187 = ((-9L) > (g_70 < (func_118(((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(((safe_add_func_int16_t_s_s(((l_384 < (l_330 || 0x29F12BCDL)) ^ ((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(l_378, ((-1L) & ((g_42 & (safe_add_func_uint16_t_u_u(l_384, l_335))) && g_70)))), p_117)) | l_333)), p_117)) & g_132))), g_42)) <= g_44)) & l_378)));
                    }
                    l_400 &= (+((((l_330 & ((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_117, l_268)), (g_42 == l_378))) < (+g_44))) > (safe_rshift_func_uint8_t_u_s(0x13L, 2))) > l_347) < ((safe_lshift_func_int16_t_s_s((g_187 & l_399), 11)) ^ 1L)));
                }
                for (l_271 = 0; (l_271 < 26); l_271 = safe_add_func_int16_t_s_s(l_271, 8))
                {
                    g_187 ^= (safe_mul_func_uint8_t_u_u((g_248 != p_117), (g_44 || p_117)));
                }
            }
            if (p_117)
            {
                int l_411 = 1L;
                int l_413 = (-1L);
                l_399 = (safe_add_func_int8_t_s_s((g_248 == (safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_uint8_t_u_s((l_334 < func_118(l_289)), 2)) | 1L) ^ p_117) && l_411), ((0x762DL <= p_117) != l_412)))), l_333));
                g_414++;
                l_413 &= (0L <= (l_286 == g_180));
            }
            else
            {
                int l_428 = 1L;
                l_428 = (safe_mod_func_uint16_t_u_u((9L | (p_117 && (safe_mod_func_int8_t_s_s(func_118((safe_sub_func_uint8_t_u_u(0xD2L, (g_414 || (safe_lshift_func_int16_t_s_s((0x4C999407L != p_117), ((g_42 || l_299) | (safe_mod_func_int32_t_s_s(p_117, 0x464915B4L))))))))), l_427)))), 0x648BL));
            }
        }
    }
    return l_334;
}







static unsigned short func_118(int p_119)
{
    int l_123 = 1L;
    g_120 = (0UL != p_119);
    g_132 |= ((-7L) == (safe_mul_func_uint8_t_u_u(l_123, (safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s(0x60L, (safe_add_func_uint32_t_u_u((g_42 ^ ((65535UL ^ ((safe_add_func_uint32_t_u_u(((((!0xC413L) >= (0L == (g_42 ^ g_70))) == l_123) || g_120), g_131)) && 0x6DL)) ^ g_120)), 4294967288UL)))))))));
    return p_119;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_523, "g_523", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_546, "g_546", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
