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
   const int f0;
   unsigned short f1;
};


static char g_5 = 0xA5L;
static int g_67 = 0x19139F48L;
static const struct S0 g_90 = {-5L,0UL};
static unsigned g_113 = 0UL;
static unsigned char g_138 = 255UL;
static int g_159 = 0x2DE19985L;
static unsigned short g_170 = 0x37E2L;
static unsigned g_172 = 0x39211FA3L;
static unsigned g_173 = 8UL;
static short g_174 = 6L;
static char g_314 = 0x18L;
static int g_408 = (-1L);
static unsigned g_592 = 0x8D9B2F9EL;
static int g_667 = 0xA290FBEEL;
static const unsigned char g_875 = 0x1DL;
static int g_970 = 1L;
static char g_1065 = 0L;
static unsigned g_1158 = 0xC1DF9775L;
static unsigned g_1236 = 0x843E58CEL;
static unsigned short g_1352 = 0x799AL;
static unsigned char g_1422 = 0UL;
static char g_1431 = 1L;
static short g_1501 = 0x128BL;
static int g_1646 = 0xE0BC135CL;
static unsigned g_1788 = 0xD585786AL;
static unsigned g_1848 = 1UL;



static const unsigned char func_1(void);
static int func_2(int p_3, const unsigned short p_4);
static const int func_15(char p_16, unsigned p_17, unsigned p_18, unsigned p_19, unsigned p_20);
static short func_31(char p_32, unsigned short p_33);
static unsigned char func_36(short p_37);
static short func_40(const unsigned char p_41, unsigned short p_42, char p_43, int p_44, short p_45);
static char func_53(unsigned char p_54, unsigned char p_55);
static char func_57(unsigned p_58, int p_59, unsigned p_60);
static short func_63(short p_64);
static int func_70(const short p_71, const short p_72, short p_73, unsigned p_74, short p_75);
static const unsigned char func_1(void)
{
    const short l_10 = 1L;
    unsigned l_1308 = 4294967291UL;
    int l_1474 = 2L;
    unsigned char l_1614 = 0xA0L;
    unsigned l_1660 = 0xE90D46BBL;
    int l_1661 = 0L;
    const unsigned l_1699 = 4294967293UL;
    unsigned char l_1721 = 0x86L;
    short l_1736 = (-10L);
    unsigned l_1829 = 0xB0B0319EL;
    int l_1910 = 0L;
    const int l_1915 = 0x46B21DAEL;
    if (func_2(g_5, (safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(l_10, (safe_div_func_int16_t_s_s(((g_5 | (safe_rshift_func_uint8_t_u_s(g_5, 1))) , (func_15(l_10, l_10, g_5, (((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((g_5 > (safe_mod_func_int8_t_s_s(1L, l_10))), 7)) & l_10), l_10)) | l_10) >= 0x06BDL), g_5) > 9L)), 0xB345L)))) > l_10), l_1308))))
    {
        int l_1457 = 0x94C27C54L;
        int l_1468 = 1L;
        int l_1487 = 0x44AC8D18L;
        const unsigned l_1518 = 4294967295UL;
        const unsigned short l_1552 = 0x5A88L;
        int l_1557 = (-8L);
        int l_1562 = 0x1F43A636L;
        short l_1565 = (-2L);
        unsigned l_1642 = 6UL;
        for (g_592 = (-16); (g_592 <= 44); g_592 = safe_add_func_int16_t_s_s(g_592, 1))
        {
            struct S0 l_1456 = {0xE0790CB5L,0x18F6L};
            int l_1473 = 0x09707BA8L;
            l_1457 = (l_1456 , g_174);
            l_1457 = (g_667 || (0x5F69C8ECL != (safe_div_func_uint16_t_u_u((g_5 || (safe_rshift_func_uint8_t_u_u(func_36(func_15(l_10, l_10, ((g_667 >= l_1456.f1) & (g_90 , g_159)), g_90.f0, g_172)), 4))), 65526UL))));
            l_1468 &= (func_31((g_667 | 0UL), (l_1457 >= (safe_rshift_func_uint8_t_u_s((g_970 , (safe_add_func_int32_t_s_s(0x1DE5B152L, g_159))), 6)))) | (-1L));
            l_1474 = (l_10 != ((((((l_10 || ((safe_lshift_func_int8_t_s_u(g_1422, ((g_90 , g_90.f1) ^ (safe_mod_func_uint32_t_u_u((l_1473 , g_1431), func_70(l_1468, g_172, g_1236, g_408, l_1456.f1)))))) | g_5)) != l_1457) , 0x086CL) & 0x97ABL) & 0xE572E3A9L) , g_159));
        }
        if ((safe_unary_minus_func_uint32_t_u(g_667)))
        {
            short l_1478 = 1L;
            int l_1509 = 0xE2B885ABL;
            int l_1550 = 0x2A1B98FAL;
            if ((l_1468 <= g_875))
            {
                unsigned l_1479 = 0xEA14E9AAL;
                unsigned short l_1486 = 6UL;
                int l_1496 = 8L;
                unsigned char l_1497 = 0UL;
                unsigned l_1498 = 0x0323CF7DL;
                l_1474 = 0x4AB2E03EL;
                if (g_159)
                {
                    int l_1488 = 0x8AEF8C28L;
                    g_970 = ((safe_mod_func_int8_t_s_s((func_70(g_1422, func_31(g_90.f0, (l_1478 != (l_1479 | (safe_sub_func_uint32_t_u_u(((l_1478 > ((safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(g_170, g_67)), 12)) || g_875)) , (1L || l_1308)), (-1L)))))), g_1431, l_1486, l_1487) | l_1468), l_1488)) <= 0x510B6D6FL);
                }
                else
                {
                    int l_1491 = 0x3DBF8E76L;
                    l_1491 ^= (l_1457 , (g_314 >= ((safe_div_func_int32_t_s_s(g_970, l_1479)) == g_159)));
                }
                g_970 &= func_31((safe_add_func_int8_t_s_s(g_1158, (g_90 , ((l_1496 < ((l_1486 && l_1497) == l_1498)) & (((safe_unary_minus_func_uint32_t_u(g_173)) > (~((2UL ^ g_173) == g_90.f1))) , 8UL))))), g_90.f0);
            }
            else
            {
                unsigned short l_1500 = 7UL;
                if (l_1468)
                {
                    short l_1506 = 0xC659L;
                    int l_1525 = 0xDD6FF8D4L;
                    l_1474 = l_1500;
                    l_1509 = ((((g_314 == l_1474) & (g_1501 || (l_1478 & (safe_add_func_int16_t_s_s(l_1500, (((((-2L) || (safe_mod_func_uint32_t_u_u(l_1506, ((safe_div_func_int32_t_s_s(g_1431, g_1501)) && g_875)))) <= 0UL) <= g_90.f0) >= 0x89FEA1C4L)))))) , g_970) , 0x5A050CA2L);
                    g_408 = (safe_rshift_func_uint16_t_u_s(((-2L) & (safe_add_func_int32_t_s_s(l_1500, ((safe_div_func_uint16_t_u_u(g_159, (safe_add_func_int32_t_s_s(g_173, g_970)))) , g_592)))), func_70(l_1518, (l_10 && (safe_div_func_int8_t_s_s(g_172, 0x78L))), l_1478, g_173, l_1457)));
                    if (((func_31(g_1431, l_1500) || (-1L)) , (safe_div_func_uint8_t_u_u(((func_15(l_1500, g_1422, l_1308, ((safe_mod_func_uint8_t_u_u(0UL, func_53(((l_1478 != (-4L)) , l_1500), g_970))) & g_1501), g_5) , 0x563F9F56L) , l_1500), 0xEFL))))
                    {
                        l_1525 ^= 0xE95CA13FL;
                    }
                    else
                    {
                        short l_1534 = 0x1169L;
                        int l_1535 = 0x13BCF6FAL;
                        l_1535 = (g_1422 < ((0x88C773E9L > g_1158) || (!((func_57((l_10 <= g_408), (g_159 , (safe_rshift_func_int16_t_s_s((0L <= (safe_lshift_func_uint8_t_u_s((!0UL), ((((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(func_36(l_1518), l_1308)) ^ g_170), g_408)) || l_1534) ^ 0x92L) || l_1308)))), 13))), g_875) <= 5L) | 4L))));
                    }
                }
                else
                {
                    l_1487 = g_1501;
                    g_67 = (safe_sub_func_int32_t_s_s((-1L), l_1478));
                    for (l_1509 = 22; (l_1509 <= (-9)); l_1509 = safe_sub_func_int32_t_s_s(l_1509, 1))
                    {
                        int l_1540 = 0xF14D32EDL;
                        l_1540 = (g_1065 || g_5);
                    }
                }
            }
            for (l_1509 = 6; (l_1509 > 21); l_1509 = safe_add_func_uint8_t_u_u(l_1509, 8))
            {
                const int l_1544 = 0xD355EFCDL;
                if (g_170)
                {
                    unsigned l_1543 = 0x139EF0CAL;
                    unsigned char l_1545 = 1UL;
                    l_1550 = ((((+(l_1543 , (func_70(l_1544, l_1544, l_1487, l_1545, (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(1UL, (((func_53(l_1478, (l_1544 , (9UL == 0x9D26L))) || g_970) | l_1544) | 1UL))), g_90.f1))) , l_1545))) >= l_1468) != l_1545) != g_5);
                    if (l_10)
                    {
                        unsigned char l_1551 = 1UL;
                        l_1474 = (func_2(l_1551, (l_1509 , l_1552)) && func_36(g_1422));
                    }
                    else
                    {
                        g_408 ^= g_138;
                    }
                    return l_1474;
                }
                else
                {
                    return g_90.f1;
                }
            }
            l_1474 = l_1478;
            return l_1550;
        }
        else
        {
            char l_1558 = 0x64L;
            int l_1559 = (-2L);
            int l_1636 = 0xAE631772L;
            g_970 = func_53(g_1352, (safe_sub_func_int8_t_s_s(g_138, g_90.f1)));
            l_1559 = (((((safe_sub_func_uint8_t_u_u(l_1474, (l_10 && g_90.f1))) | func_53(func_70(func_2((g_1352 , 0xB6B5A973L), l_1474), (l_1557 || (((l_1474 > l_10) , g_1352) <= g_875)), l_1558, g_1065, g_1501), g_875)) > g_1422) <= 0x0EF21AD9L) < 9L);
            l_1565 = (safe_mod_func_int16_t_s_s(l_1559, func_2(l_1562, (safe_div_func_int16_t_s_s(g_173, l_1308)))));
            for (l_1308 = 0; (l_1308 == 12); l_1308 = safe_add_func_int32_t_s_s(l_1308, 7))
            {
                int l_1568 = (-1L);
                char l_1608 = 0xD9L;
                unsigned l_1619 = 4294967295UL;
                unsigned l_1635 = 0x7361579DL;
                if ((((l_1568 , func_57((((l_1559 >= l_1558) , (safe_add_func_uint16_t_u_u(g_1236, 0xE3B8L))) , (safe_mod_func_int32_t_s_s(func_70((safe_sub_func_uint32_t_u_u(0x6448C27AL, (0L & (safe_rshift_func_uint16_t_u_s(0x1228L, (l_1558 > l_10)))))), l_1568, l_1308, g_592, l_1308), 8L))), g_408, g_173)) || l_1308) > l_1559))
                {
                    g_408 = ((safe_lshift_func_uint8_t_u_u(g_1422, (safe_rshift_func_uint8_t_u_s(0x54L, 0)))) , ((l_1559 & (safe_rshift_func_uint16_t_u_s((l_1474 , (safe_add_func_int32_t_s_s(((g_1158 ^ l_1568) , ((l_1559 ^ ((safe_sub_func_uint16_t_u_u((func_57(l_1568, (safe_mod_func_int16_t_s_s(g_408, l_10)), g_1065) != 0x37E761EBL), g_1158)) & l_1474)) , 0xFD64A7D0L)), g_90.f1))), l_1568))) , 0x28D46F45L));
                }
                else
                {
                    unsigned short l_1595 = 0x953AL;
                    struct S0 l_1611 = {0x8B8FE6E2L,0x4EE3L};
                    int l_1621 = 3L;
                    for (g_159 = 0; (g_159 <= (-18)); g_159--)
                    {
                        l_1559 |= ((g_90 , func_63(l_1552)) , (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_1595, (((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((g_113 , (safe_sub_func_uint8_t_u_u(func_63((safe_rshift_func_int8_t_s_s(l_1558, ((safe_lshift_func_int16_t_s_u(l_1474, ((g_170 || ((((safe_div_func_uint8_t_u_u(l_1568, g_138)) || g_314) || l_1308) == g_408)) <= 4294967288UL))) || l_1608)))), 1L))), 6)) || g_159), 2)) < 0x22D6D603L) || g_90.f0))), l_1487)));
                    }
                    if ((safe_sub_func_uint16_t_u_u(((l_1559 & ((((((l_1611 , (safe_mod_func_int16_t_s_s((-9L), (~0x3DB3L)))) >= 1UL) ^ (func_36(g_174) >= (((!((g_138 < (l_1595 && g_5)) != g_1158)) || g_970) < l_1614))) | l_1611.f1) , 0x9945L) < 0L)) != g_138), l_1487)))
                    {
                        l_1619 = ((safe_rshift_func_uint8_t_u_s(l_1558, 3)) ^ (safe_div_func_int16_t_s_s(l_1558, (+l_1608))));
                        if (g_592)
                            continue;
                        g_408 &= g_1065;
                        g_667 = 0x4346A0D4L;
                    }
                    else
                    {
                        const unsigned l_1620 = 4294967290UL;
                        l_1487 = g_170;
                        l_1621 = (g_138 | (((func_36(g_67) <= l_1474) <= (l_1620 & func_70(g_138, g_667, l_1558, g_1422, g_159))) >= l_1559));
                    }
                    if (l_1308)
                    {
                        if (l_1559)
                            break;
                    }
                    else
                    {
                        int l_1624 = 0L;
                        unsigned char l_1637 = 0x69L;
                        int l_1645 = 2L;
                        g_667 ^= (1UL > 0xA15F4843L);
                        l_1637 = (g_1422 , (func_36((((safe_mod_func_uint8_t_u_u(l_10, g_1158)) , (((g_90.f0 == ((!(g_5 , l_1624)) & ((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(249UL, 2)), ((safe_sub_func_int8_t_s_s((l_1608 , (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s((l_1614 , l_1635), l_1624)) == l_1635), 0))), 0x93L)) , l_1624))) >= l_1636))) > 246UL) , 4294967288UL)) , g_172)) > 0x6BL));
                        l_1645 |= ((func_70((func_40(g_875, (safe_div_func_uint16_t_u_u((g_1431 != g_67), (safe_div_func_int32_t_s_s(((l_1559 <= (~(l_1642 , g_170))) & 0x90C99244L), g_1158)))), (safe_div_func_uint16_t_u_u(((g_1501 , l_1308) || l_1624), 0xC02BL)), g_67, l_1637) , g_174), l_1635, g_1236, g_5, g_875) & g_90.f1) ^ 0xD40B67AFL);
                    }
                }
                return l_1559;
            }
        }
    }
    else
    {
        const unsigned l_1657 = 0UL;
        unsigned char l_1672 = 0x4CL;
        unsigned l_1687 = 0x8388FEB1L;
        int l_1689 = 0x8A1F6EFAL;
        struct S0 l_1698 = {0L,1UL};
        char l_1747 = 1L;
        unsigned short l_1787 = 0xD1C2L;
        unsigned short l_1898 = 65535UL;
        l_1474 = func_15(g_592, g_1646, l_1614, l_1474, (0xF4D9L != (safe_div_func_int32_t_s_s(0L, (safe_rshift_func_uint16_t_u_u(((g_408 , (safe_div_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((((((((((safe_mul_func_uint16_t_u_u(g_113, ((4294967295UL <= 4294967295UL) < l_1657))) > l_1474) < 0UL) <= 248UL) != 254UL) == 0xE1D2608EL) && 0xA9FBL) > 0x4CL) < g_667), 0xC2FEL)) <= g_159), g_1352))) && 4294967292UL), l_1657))))));
        l_1661 &= ((safe_add_func_int16_t_s_s((l_1474 <= l_1657), l_10)) , (l_10 || (l_1660 < (((((l_1308 >= 65535UL) ^ ((((5L <= (g_667 & g_408)) & g_159) == l_1657) | l_1657)) , l_1657) || 65535UL) <= g_1065))));
        if (l_1661)
        {
            const unsigned l_1688 = 0UL;
            int l_1702 = 0xDA242791L;
            int l_1722 = 0xD50188CFL;
            unsigned l_1748 = 4294967291UL;
            int l_1786 = 1L;
            l_1689 = (safe_sub_func_int32_t_s_s((((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((((func_70((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((l_1672 , l_1672), 5)), (~0x8EL))), ((safe_sub_func_int32_t_s_s(0x0C735E0AL, (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(0x1B56L, 6)), ((safe_sub_func_uint8_t_u_u(l_1657, 0xC9L)) != ((((safe_rshift_func_int16_t_s_u((g_90 , (l_1687 && g_1646)), l_1657)) , g_1236) || 0xB5B1DF25L) < g_1646)))), 3)), l_1688)))) , l_1672), g_970, g_172, g_408) != g_1158) | 0x2062L) && 1L) > l_1688), 0x5919L)) < g_1646), g_173)) < l_1657) || l_1308), l_1660));
            l_1689 |= (safe_mod_func_int8_t_s_s(0x67L, (safe_rshift_func_int8_t_s_s((((safe_div_func_int8_t_s_s(l_1657, (+g_90.f1))) & func_15((safe_add_func_int16_t_s_s(l_1614, l_1308)), ((func_2(g_1065, l_1474) , ((((l_1698 , g_172) >= g_170) , l_1699) ^ g_1352)) >= (-1L)), g_1422, g_1501, l_1474)) , g_138), g_90.f1))));
            for (l_1614 = 0; (l_1614 < 22); l_1614 = safe_add_func_uint16_t_u_u(l_1614, 2))
            {
                unsigned l_1720 = 0x51F0ED68L;
                l_1702 = (l_1688 != (-6L));
                for (g_1158 = 0; (g_1158 > 21); ++g_1158)
                {
                    char l_1709 = 0x38L;
                    l_1722 = ((safe_mod_func_uint32_t_u_u(((((l_1699 >= (safe_rshift_func_uint8_t_u_u((((l_1709 , g_138) == (((safe_rshift_func_int16_t_s_u((g_5 > (safe_lshift_func_int16_t_s_u(func_63(((g_90 , (safe_add_func_int8_t_s_s((-1L), ((((safe_rshift_func_int8_t_s_u(g_1236, func_63(((((safe_div_func_int8_t_s_s(g_173, (((0x48L >= 0x8BL) | 0x9CL) , g_1501))) >= 4294967294UL) , l_1709) && g_67)))) < g_5) | 0x7E8EL) & g_90.f1)))) <= 0xFCL)), 5))), 10)) && l_1720) , l_1709)) & l_1709), l_1660))) < l_1721) , 65535UL) && g_113), g_408)) , l_1614);
                }
            }
            if (((l_1308 < (((safe_lshift_func_uint16_t_u_u(65535UL, ((l_1614 & (safe_sub_func_uint16_t_u_u(func_31((l_1688 , (-1L)), l_1698.f0), (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((l_1702 > ((safe_add_func_uint16_t_u_u((0L || l_1702), g_592)) ^ l_1657)), l_1722)), l_1699)), 6))))) , g_1431))) > l_1698.f0) == 0xA8L)) == (-1L)))
            {
                int l_1735 = 7L;
                l_1736 = ((~(l_1735 <= l_1735)) && 0UL);
                for (g_174 = 0; (g_174 <= (-13)); g_174 = safe_sub_func_int16_t_s_s(g_174, 2))
                {
                    l_1689 = ((func_36(g_170) || ((((safe_mod_func_uint16_t_u_u(l_1735, func_63(((safe_add_func_uint8_t_u_u(func_63(((safe_sub_func_int16_t_s_s((g_113 ^ 0xAFD1L), g_1236)) != ((g_1236 , (l_1688 && (safe_add_func_uint32_t_u_u((g_970 | 0UL), 4294967295UL)))) | g_1646))), (-1L))) , g_1236)))) != l_1747) , 0xC56C1378L) , g_1236)) <= g_592);
                }
                g_1646 = g_970;
                g_970 = (g_1646 & ((l_1702 == l_1748) >= (safe_add_func_uint16_t_u_u(l_1698.f0, (((g_138 || g_1065) | l_1689) >= (safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((0L && 0L), 2L)), 0x3C41L)))))));
            }
            else
            {
                unsigned l_1763 = 4294967295UL;
                unsigned l_1770 = 1UL;
                unsigned l_1785 = 0x4F1B0DBBL;
                short l_1897 = 0x020EL;
                for (l_1614 = 0; (l_1614 > 14); ++l_1614)
                {
                    int l_1772 = 0x3B261657L;
                    if (l_1660)
                    {
                        return l_1702;
                    }
                    else
                    {
                        unsigned l_1771 = 4294967287UL;
                        short l_1773 = (-10L);
                        int l_1774 = 0xB3345980L;
                        if (g_173)
                            break;
                        l_1774 = (safe_rshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((g_90.f1 , (((l_1657 || l_1763) == func_2(l_1687, (((((safe_lshift_func_uint16_t_u_s(g_67, (((((((safe_add_func_uint8_t_u_u(((l_1688 != ((safe_add_func_uint16_t_u_u(func_70((0xD8CBL <= g_667), ((l_1770 < (-1L)) >= l_10), l_1771, l_1763, g_875), l_1772)) == g_1646)) && 0x3C07C5E8L), 0x4FL)) >= g_1431) || (-1L)) < g_172) , 0x6966L) & g_138) || l_1773))) > g_170) , 4294967295UL) >= 0x2C29287CL) <= l_1772))) == 0x1536263FL)), 0UL)), g_5)) && l_1688) & g_90.f1), 6));
                        g_1788 &= (((~(safe_mod_func_uint8_t_u_u(((l_1721 , l_1747) && ((((safe_sub_func_int32_t_s_s(((func_2(g_170, (((safe_sub_func_int16_t_s_s(func_63(g_1236), func_70(((g_1065 & (func_70(g_1422, (safe_lshift_func_uint8_t_u_s(0xB8L, (safe_lshift_func_uint8_t_u_u((l_1772 >= l_1687), l_1785)))), l_1786, l_1770, g_138) > g_170)) ^ g_1646), g_592, l_1771, g_970, l_1787))) ^ g_174) != (-3L))) ^ 3UL) >= g_1422), l_1722)) < g_1646) >= l_1689) || 3L)), l_1772))) , g_970) && 0L);
                    }
                    l_1772 = (safe_div_func_uint16_t_u_u(((g_90.f1 <= ((g_90 , g_90) , (l_1660 > (((g_1065 != 0UL) != g_1158) && (safe_mod_func_uint16_t_u_u(0UL, 0x30B6L)))))) > 0x7A70D592L), l_1722));
                }
                if ((safe_sub_func_uint8_t_u_u(l_1770, ((g_90 , ((g_67 <= ((l_1698.f0 , (g_875 | (safe_sub_func_uint32_t_u_u(g_1646, g_113)))) , g_970)) <= g_90.f1)) , l_1474))))
                {
                    char l_1807 = 0xD2L;
                    if (((g_1065 != g_875) >= (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(((l_1688 == ((g_592 < ((safe_mul_func_int8_t_s_s(g_1501, ((g_90 , (safe_add_func_int16_t_s_s(0x31ADL, func_2(l_1660, (l_1807 ^ 0x569E3D16L))))) > 4UL))) < g_90.f0)) >= 254UL)) || l_1747), l_1785)), g_1352))))
                    {
                        short l_1816 = (-6L);
                        g_67 = (((l_1807 || (g_170 != 1UL)) ^ ((g_90 , g_314) & (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_1422, 4)), g_5)))) , (safe_rshift_func_int8_t_s_u(l_1770, 1)));
                        l_1816 = g_314;
                        g_667 = l_1672;
                    }
                    else
                    {
                        return l_1807;
                    }
                    g_970 = ((safe_div_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((g_172 & l_1807) ^ (((safe_add_func_int32_t_s_s((g_170 || (((l_1785 && (((g_138 != ((safe_lshift_func_int16_t_s_s((0x2B73534BL && l_1785), g_172)) < (safe_sub_func_uint8_t_u_u((g_1422 ^ g_90.f0), 254UL)))) && g_1158) < g_113)) == g_1646) > l_1829)), 4UL)) && 4294967295UL) >= 0x931590E5L)), l_1763)) || 0x65L), g_592)) <= 0x72L);
                    for (l_1807 = 0; (l_1807 < 0); l_1807 = safe_add_func_uint32_t_u_u(l_1807, 6))
                    {
                        unsigned l_1832 = 0x1D92277BL;
                        int l_1839 = 0xD024716EL;
                        g_67 = 0L;
                        if (l_1832)
                            continue;
                        l_1839 = (65535UL && ((safe_lshift_func_uint16_t_u_s((((g_970 < (safe_rshift_func_uint16_t_u_s((l_1807 != g_1501), 7))) <= (g_1422 == func_57(((0xA32BL ^ g_1788) , (safe_sub_func_uint8_t_u_u(g_667, (g_174 , g_1158)))), g_592, g_1422))) , g_1158), l_1807)) | 0x28L));
                        return g_170;
                    }
                    for (g_1352 = (-25); (g_1352 > 44); g_1352 = safe_add_func_uint8_t_u_u(g_1352, 8))
                    {
                        return l_1721;
                    }
                }
                else
                {
                    unsigned l_1876 = 0xFA8C3789L;
                    const struct S0 l_1888 = {0xBA06D402L,2UL};
                    for (l_1722 = 0; (l_1722 == (-4)); l_1722--)
                    {
                        int l_1861 = 0x1F875B47L;
                        int l_1877 = (-1L);
                        g_67 ^= (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_1848, 3)), (safe_add_func_int8_t_s_s(g_1646, ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u(l_1861, (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(8L, (l_1698.f0 != ((safe_div_func_uint16_t_u_u(((0x458CBA26L | 0x4E384A28L) || 0xE5L), g_1501)) > 0xD9L)))), 0x64F6D4D1L)))) | 0xF4L) , l_1861), 1L)), g_172)), g_1422)), g_1646)) && g_159)))));
                        g_1646 = func_53((!func_31(g_314, ((((g_90 , (((g_174 > (!l_1747)) ^ 0x56ADL) , (safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(l_1770, 5)) && (safe_sub_func_uint8_t_u_u((0xD7L || (((safe_div_func_uint32_t_u_u(0UL, l_10)) , l_1672) & l_1770)), g_1646))), g_1158)))) , l_1876) & 0x5AL) | g_592))), g_875);
                        l_1877 |= (l_1308 < g_1501);
                    }
                    l_1661 &= (safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((g_875 || (func_2(l_1614, (safe_rshift_func_int8_t_s_u((g_314 , ((!((0x0A9CL > (g_170 >= 0xD0L)) || (g_172 || ((safe_div_func_uint32_t_u_u(((((g_90.f1 || (l_1888 , (-4L))) <= 0x65DA309DL) == g_314) || g_174), g_1788)) >= l_1763)))) != l_1721)), 7))) , l_1770)), g_875)), l_1888.f0));
                    l_1689 = (((l_1786 , (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_113, 4)), ((l_10 | (func_70((safe_sub_func_int16_t_s_s(g_67, ((func_70(l_1614, g_970, l_1770, (((((g_1236 && (safe_mod_func_int32_t_s_s((g_90 , g_170), g_113))) & 0x3BL) < g_159) <= 0xEB1FC008L) != g_1431), l_1897) != l_1687) , g_314))), l_1888.f0, l_1689, g_1431, l_1770) , g_314)) == l_1898)))) && g_408) ^ l_1888.f1);
                }
            }
        }
        else
        {
            int l_1901 = 0L;
            l_1689 = g_1431;
            g_408 = ((safe_div_func_uint16_t_u_u(((l_1901 ^ (!l_1747)) == g_1431), l_1689)) != l_1829);
        }
    }
    g_67 = (g_1848 > (safe_sub_func_uint8_t_u_u(g_1788, (l_1736 ^ (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(l_1829, ((l_1721 > l_1721) && ((g_1065 | (safe_lshift_func_int16_t_s_u(g_113, 0))) , ((l_1910 < l_1614) , g_67))))), 12))))));
    l_1910 = g_1788;
    g_67 = ((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(l_1736, l_10)), func_70((l_1308 , l_1915), g_174, (safe_lshift_func_uint16_t_u_s(((((((((safe_div_func_int16_t_s_s((0xE9L >= g_170), (g_174 && ((safe_add_func_uint32_t_u_u((((l_1474 && g_5) & 0x22L) , 4UL), g_90.f0)) , g_314)))) ^ g_1848) <= 4294967295UL) > g_90.f0) <= l_1736) && g_1788) , g_90.f1) | l_1661), g_90.f0)), l_1474, g_1352))) != l_1308);
    return l_1915;
}







static int func_2(int p_3, const unsigned short p_4)
{
    const short l_1309 = 0x58BFL;
    int l_1312 = 0x2FADF47BL;
    unsigned char l_1380 = 1UL;
    int l_1384 = 0x34D45425L;
    int l_1401 = 1L;
    struct S0 l_1436 = {5L,0x8786L};
    if (g_173)
    {
        unsigned l_1332 = 0x271FFE0FL;
        struct S0 l_1335 = {5L,0xFBE2L};
        int l_1415 = 0xA3D0BDE9L;
        if ((l_1309 >= (safe_div_func_uint16_t_u_u(g_1158, (((l_1312 , ((safe_rshift_func_int8_t_s_s(0x96L, 3)) < (l_1312 || (safe_lshift_func_int8_t_s_s(g_408, (safe_add_func_int8_t_s_s(g_67, ((safe_mod_func_int32_t_s_s(g_592, 0x8D3A9087L)) | 0L)))))))) ^ g_67) , g_113)))))
        {
            const char l_1325 = 3L;
            for (g_174 = 0; (g_174 < 27); g_174 = safe_add_func_uint16_t_u_u(g_174, 2))
            {
                const struct S0 l_1343 = {0x49C64BF9L,9UL};
                unsigned char l_1367 = 0x21L;
                int l_1369 = 0x6D1E446FL;
                short l_1393 = 0xDAA8L;
                g_667 = ((~((safe_lshift_func_uint8_t_u_u(g_172, (l_1325 == ((g_90.f1 | (safe_div_func_int16_t_s_s(p_4, func_36((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((func_63(((l_1332 ^ g_138) || p_3)) > g_5) >= p_4), g_667)), p_3)))))) < l_1309)))) == l_1325)) < l_1312);
                if (((safe_div_func_int32_t_s_s(((l_1335 , (l_1325 & (-1L))) < 0xB2L), g_1065)) || p_4))
                {
                    unsigned l_1368 = 0x43A18FC3L;
                    int l_1370 = 0L;
                    if (g_592)
                    {
                        unsigned l_1336 = 4294967286UL;
                        g_667 = g_875;
                        g_408 &= func_63(l_1336);
                        if (g_173)
                            break;
                    }
                    else
                    {
                        if (g_5)
                            break;
                    }
                    g_970 = (safe_mod_func_uint8_t_u_u((l_1309 <= (safe_sub_func_uint32_t_u_u(l_1335.f0, (safe_rshift_func_uint8_t_u_s((0x88C3L || (l_1343 , g_172)), (((safe_sub_func_uint8_t_u_u((((g_875 || (safe_rshift_func_int8_t_s_u(0x0EL, (safe_rshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u(1UL, (g_1352 || l_1335.f1))) > 0UL) , l_1312), 3))))) , p_4) != g_90.f1), p_3)) > g_592) , l_1325)))))), l_1343.f0));
                    if (((safe_lshift_func_uint16_t_u_u(g_1158, 11)) > (func_36(p_4) < ((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((g_90 , (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(func_70((p_4 , g_90.f1), l_1343.f1, l_1335.f0, ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(p_4, 5)) != p_3), l_1367)) , g_970), g_408), 2)), p_3))) , l_1368) == g_408), g_592)), l_1335.f0)) || g_1236))))
                    {
                        int l_1377 = 0xC24283A9L;
                        l_1369 = func_63(p_4);
                        l_1370 |= l_1368;
                        l_1377 = ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(l_1312, (p_4 || (safe_lshift_func_uint8_t_u_u(g_173, (l_1377 && (safe_mod_func_int8_t_s_s((((((((l_1380 >= (((l_1368 , func_63((((func_36(func_63(g_1236)) || p_3) , 0x0187377FL) , 0xC16DL))) || p_3) >= (-9L))) , p_4) , p_3) || g_408) < l_1377) != (-7L)) & l_1325), 0x66L)))))))) != l_1380), 6UL)) > l_1368);
                    }
                    else
                    {
                        int l_1381 = 0L;
                        g_970 = 1L;
                        l_1381 = l_1381;
                        if (g_408)
                            continue;
                        g_408 = p_3;
                    }
                    l_1312 = (safe_mod_func_uint8_t_u_u(func_36(l_1384), 0xFEL));
                }
                else
                {
                    short l_1394 = 0xE009L;
                    if ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(p_4, (-10L))), (l_1335.f1 , (p_4 | (func_70((safe_sub_func_int16_t_s_s(((253UL | ((l_1335.f0 , func_63((((safe_add_func_uint16_t_u_u(func_36(p_4), ((g_174 == 0UL) | p_3))) > p_4) , l_1393))) <= p_4)) <= l_1394), 0x9E76L)), p_3, g_1158, g_159, g_408) >= 0x4F04F6C9L))))))
                    {
                        unsigned short l_1397 = 1UL;
                        int l_1398 = 0xCF5DDA47L;
                        l_1398 = ((+1UL) , (((safe_lshift_func_uint8_t_u_s(l_1325, g_67)) > p_3) == l_1397));
                        if (p_3)
                            break;
                    }
                    else
                    {
                        g_970 |= (((0x6259C794L < (p_4 <= (0x36L <= (l_1332 & ((l_1401 > 0UL) >= 0xEF258721L))))) == (g_173 ^ (p_3 ^ p_4))) | p_4);
                    }
                    g_408 ^= p_3;
                }
            }
            return p_4;
        }
        else
        {
            unsigned l_1414 = 4294967295UL;
            const struct S0 l_1424 = {1L,0x757EL};
            if ((safe_lshift_func_uint8_t_u_u((+((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((func_31(func_40((((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(g_1236, g_592)), g_174)) >= (((g_970 , (safe_add_func_uint32_t_u_u((l_1312 , l_1414), l_1415))) , (safe_mod_func_int32_t_s_s(l_1380, (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(p_4, 0x9F08L)), g_1422))))) & 0UL)) , p_3), p_3, l_1401, g_592, g_170), g_1158) & 65535UL), g_90.f1)), 6)) == l_1414)), p_3)))
            {
                unsigned short l_1423 = 0x9228L;
                int l_1437 = (-2L);
                l_1415 = ((((l_1423 , l_1424) , g_159) != g_667) || ((((safe_add_func_int32_t_s_s(l_1335.f0, ((safe_sub_func_uint8_t_u_u(p_3, ((l_1332 , func_36(l_1335.f0)) < g_159))) || 8L))) , (-10L)) & 3UL) || l_1312));
                l_1437 |= ((g_90.f1 || l_1424.f0) >= (safe_rshift_func_int16_t_s_u((func_15(g_1431, g_1158, p_3, (p_4 != (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_5, (g_5 > (l_1436 , 0xDAL)))), g_170))), g_1065) | 0x8259L), 9)));
            }
            else
            {
                short l_1440 = 1L;
                for (g_172 = (-11); (g_172 >= 59); g_172++)
                {
                    l_1401 = 0x66A7064EL;
                    l_1440 ^= g_875;
                    return l_1309;
                }
                return g_90.f0;
            }
            g_667 = 0L;
            l_1401 ^= l_1414;
        }
    }
    else
    {
        int l_1453 = 0x807325D3L;
        l_1453 = (safe_sub_func_uint8_t_u_u(0UL, (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((func_57(p_3, (safe_lshift_func_uint16_t_u_u(func_36(g_408), 1)), ((safe_sub_func_int8_t_s_s(((safe_div_func_int8_t_s_s((g_1352 == func_70(g_1431, g_1158, l_1453, ((l_1453 >= (-1L)) >= 7UL), g_1236)), g_1431)) > (-1L)), g_5)) , 0x7E688E7FL)) | 0x5CL) , p_4), 6)), l_1453))));
        l_1453 = l_1453;
    }
    g_667 |= p_3;
    return l_1309;
}







static const int func_15(char p_16, unsigned p_17, unsigned p_18, unsigned p_19, unsigned p_20)
{
    int l_47 = (-1L);
    char l_50 = (-1L);
    const struct S0 l_807 = {0x10F6BF4AL,0x7812L};
    char l_856 = 0x6BL;
    unsigned l_901 = 1UL;
    unsigned short l_991 = 1UL;
    unsigned l_1097 = 0xCE97A0C7L;
    unsigned char l_1187 = 247UL;
    int l_1218 = 0x40B8CA46L;
    unsigned l_1237 = 0xC2B66304L;
    char l_1259 = 0x77L;
    unsigned short l_1305 = 0xC462L;
    for (p_17 = (-10); (p_17 <= 24); p_17++)
    {
        unsigned char l_46 = 0xBDL;
        int l_367 = 0L;
        unsigned l_798 = 1UL;
        int l_824 = (-10L);
        unsigned short l_848 = 0x012BL;
        struct S0 l_874 = {0xC1D34A64L,0x3C23L};
        int l_1049 = 0x12E354C1L;
        int l_1051 = 0x22D5EE79L;
        l_367 = ((safe_lshift_func_int16_t_s_s((~func_31(((safe_div_func_uint8_t_u_u(func_36((safe_div_func_int8_t_s_s((func_40(g_5, p_17, l_46, g_5, (l_47 | (((safe_rshift_func_int8_t_s_s((l_50 == (1UL < (safe_rshift_func_int8_t_s_u(0xCEL, 4)))), func_53((g_5 , 0UL), p_20))) > 0x1EL) <= l_367))) == (-1L)), g_90.f1))), l_46)) | l_47), g_90.f1)), 12)) & 0UL);
        if ((func_53(p_19, ((l_798 , ((0xC11B1386L | (func_40(((safe_sub_func_int32_t_s_s((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_50, (g_90 , (safe_rshift_func_int8_t_s_u(p_19, g_90.f1))))), ((+0x7EL) | g_170))) | l_798) && g_667), l_47)) , 0x7AL), g_592, l_50, g_113, p_20) , l_367)) && 255UL)) | p_19)) < p_16))
        {
            const int l_815 = 1L;
            short l_818 = 0x2CA0L;
            int l_857 = 0x6D92D319L;
            const unsigned char l_895 = 0xCEL;
            unsigned l_932 = 0xE369BC96L;
            unsigned l_992 = 4294967295UL;
            if (((l_46 | l_50) || (l_807 , p_16)))
            {
                unsigned l_828 = 0x2F65CB97L;
                int l_845 = (-1L);
                int l_876 = 0x774425F5L;
                if (p_17)
                {
                    unsigned short l_808 = 0x4B6AL;
                    int l_823 = 4L;
                    int l_825 = 4L;
                    l_808 ^= 0L;
                    l_825 &= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(l_815, 7)), p_20)), (func_53((safe_mod_func_uint16_t_u_u((p_16 >= func_36(l_818)), ((safe_div_func_int8_t_s_s((func_70(func_70(g_90.f0, ((safe_div_func_uint32_t_u_u((l_367 , 0x0A2A8DCFL), g_138)) != p_19), p_20, l_823, p_16), l_367, l_823, p_17, g_667) , p_20), g_173)) || g_592))), l_824) < p_17)));
                    if (p_19)
                        continue;
                }
                else
                {
                    const short l_829 = 2L;
                    short l_830 = 9L;
                    int l_831 = 0L;
                    l_831 = ((safe_mod_func_uint16_t_u_u((func_63(func_53((~g_667), l_807.f0)) && l_815), (func_70(((((((g_90.f1 > (func_70(g_592, (func_70(g_592, (((+0x6BL) | 1UL) || g_408), l_828, g_5, l_815) , l_829), l_47, l_824, l_47) < g_90.f0)) | l_807.f1) <= 4294967287UL) < g_90.f0) >= l_50) != 1UL), l_807.f0, g_592, l_830, l_46) , p_19))) , 0x01B816F2L);
                    l_845 = (((safe_div_func_uint16_t_u_u(((0UL ^ (safe_lshift_func_uint8_t_u_u(g_592, 5))) , func_31((safe_unary_minus_func_uint32_t_u(((p_18 == (safe_add_func_uint16_t_u_u((((-1L) && ((safe_sub_func_uint8_t_u_u(l_828, (func_70((safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s((-1L), (g_67 && p_18))) | p_16), p_20)), l_829, p_17, l_818, g_592) ^ p_16))) == 0x6E0DL)) >= g_173), p_18))) > 0x2BL))), p_19)), l_367)) ^ 0x3AL) < 0xC1L);
                    l_824 = (safe_rshift_func_int16_t_s_s(g_172, l_831));
                }
                if (l_848)
                {
                    char l_851 = 0x16L;
                    l_857 |= (p_20 , func_63(((((safe_add_func_uint32_t_u_u(((l_851 != (safe_add_func_uint8_t_u_u(func_53(l_807.f1, (l_818 , (p_17 <= g_5))), ((((((safe_mod_func_uint16_t_u_u((4294967293UL && (p_16 ^ l_818)), p_16)) , 4294967295UL) , g_90.f0) , l_807.f0) <= 0xBE95L) > 6L)))) , l_856), g_90.f0)) , p_16) > 5UL) , 0x7852L)));
                    l_367 = (((safe_rshift_func_int16_t_s_u((((((safe_add_func_uint16_t_u_u(func_70(p_20, l_828, ((safe_lshift_func_int16_t_s_u(((((p_16 | l_367) , 0xE2L) & (((safe_rshift_func_int8_t_s_u(0x79L, (l_848 & ((3UL || ((((l_798 == 8L) , (-1L)) != l_851) ^ 0x4BA1L)) , 1L)))) | l_856) < p_16)) | l_818), 14)) >= 0x62L), g_170, g_667), l_815)) ^ 1UL) | l_828) > l_824) <= g_667), l_798)) , l_848) < 0x15BBL);
                    l_876 |= (((p_17 > (func_40((func_40(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_18, l_807.f1)), l_50)) , ((l_367 , (0UL >= (safe_div_func_uint8_t_u_u(g_667, ((safe_rshift_func_uint16_t_u_u((((l_874 , func_70((((((~l_857) ^ 0xC8F45199L) , l_857) || g_592) < g_408), g_875, g_67, g_408, l_818)) && l_874.f0) <= l_848), 13)) & 65532UL))))) | p_16)), p_17, g_5, p_20, p_16) , g_113), g_667, l_851, l_851, g_90.f1) < l_815)) == l_845) && g_667);
                }
                else
                {
                    unsigned l_885 = 1UL;
                    unsigned l_894 = 0xC2D8317AL;
                    int l_896 = 1L;
                    if (l_848)
                        break;
                    for (g_170 = 0; (g_170 != 36); g_170++)
                    {
                        g_408 = l_798;
                        l_857 &= ((func_63((6L != (+(safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_848, ((safe_rshift_func_int8_t_s_u(0x90L, ((0L | ((func_63((g_408 < g_67)) >= p_16) != p_17)) && l_876))) < 0x56692E4CL))), l_807.f1))))) , g_408) <= l_885);
                    }
                    if (((func_36(func_53(p_20, ((safe_rshift_func_int8_t_s_s((((-10L) && l_807.f1) != (safe_sub_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(l_856, ((g_90.f0 > g_159) , (+l_894)))), 9)) <= (l_807.f1 <= (0x19L & g_174))) || l_895), p_17))), p_16)) > 4294967294UL))) , g_138) >= p_17))
                    {
                        int l_909 = 0L;
                        l_896 = (l_47 , (-1L));
                        l_857 = ((p_20 > (safe_lshift_func_int8_t_s_u((l_807.f0 < (safe_rshift_func_int16_t_s_u(((l_901 >= ((p_18 > (safe_mod_func_int16_t_s_s(func_40((l_894 == l_47), (safe_unary_minus_func_uint32_t_u((((safe_mod_func_uint16_t_u_u((func_36((~(g_174 != ((safe_lshift_func_uint8_t_u_u(0x26L, l_807.f0)) , p_16)))) & g_113), 1L)) == 0xA5L) && g_90.f1))), p_16, p_20, l_815), 0xB98AL))) != p_20)) & l_824), g_90.f0))), p_19))) , p_19);
                        l_909 = 9L;
                    }
                    else
                    {
                        char l_931 = (-6L);
                        l_932 &= (((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(l_857, func_63(g_408))), (l_894 && (safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((g_408 & ((safe_add_func_int32_t_s_s(((p_20 >= g_170) ^ ((((((safe_div_func_uint32_t_u_u(g_172, (safe_unary_minus_func_uint8_t_u(func_70((l_824 && g_5), g_170, p_19, g_90.f1, g_314))))) && l_845) , p_18) || p_20) || l_807.f1) > 0xF2L)), 4294967288UL)) < 0x2888L)), g_5)), 7))))), l_824)), l_931)) & l_815) > 0L);
                        l_47 &= (0xFB72A011L || (((l_896 == (p_18 && (((1L <= ((0xAEL <= g_159) && (safe_add_func_int16_t_s_s((l_885 > ((safe_div_func_uint32_t_u_u((((l_885 | (l_885 != 255UL)) <= 0x32L) ^ 4294967287UL), g_314)) >= p_18)), g_113)))) | 0xB8L) <= p_19))) | p_17) && 0x2D8BL));
                        l_367 = (((safe_unary_minus_func_int8_t_s((func_53(l_845, p_20) ^ 250UL))) , ((((g_173 == l_896) < (l_845 , p_19)) >= ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(g_174, l_50)) <= 0x2F673658L), l_798)) <= l_932)) <= l_932)) <= 247UL);
                        return g_174;
                    }
                }
                l_824 = (func_57((g_159 >= 0x10E8L), func_70((g_314 && l_876), l_874.f0, (safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((p_17 == ((p_19 , (safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(g_173, l_845)) >= g_67), 0x81L))) || l_807.f1)), g_67)) > p_16), g_5)), p_17, p_18), p_19) < 4294967291UL);
                if ((safe_add_func_uint8_t_u_u((func_63(p_18) <= (p_17 , ((((safe_mod_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(0x80D9L, 4L)) == (func_70(p_18, (safe_sub_func_int32_t_s_s(6L, ((safe_add_func_uint8_t_u_u(0x80L, (p_16 < l_857))) , p_17))), g_408, p_20, p_19) , 0x97A8L)) ^ 0x52L) > 1UL), 0xFB16L)) >= l_807.f1) != g_5) & 0x620C6D19L))), 0UL)))
                {
                    int l_971 = (-1L);
                    l_857 = ((8L & (safe_div_func_int32_t_s_s(l_876, l_857))) , func_31((((-1L) >= (safe_div_func_uint16_t_u_u(g_875, (func_57(g_170, g_408, ((((safe_mod_func_uint16_t_u_u(func_70((safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(p_18, 11)) , (((l_815 ^ 65533UL) >= g_875) && p_20)), p_18)), g_170, p_20, p_16, l_828), p_17)) , g_174) && g_113) ^ g_5)) && p_19)))) , g_970), g_90.f0));
                    g_408 |= 0xECB1CCDEL;
                    l_971 = g_159;
                }
                else
                {
                    unsigned char l_975 = 0xB6L;
                    if (l_874.f0)
                    {
                        short l_974 = 0x077BL;
                        g_667 = func_53((0xA3L || p_16), ((p_16 , (p_20 , g_667)) ^ ((l_807.f0 != (safe_rshift_func_uint8_t_u_u(l_974, 4))) <= g_667)));
                        g_667 = 4L;
                        l_876 = (((l_856 , func_36(((((l_975 != p_18) , l_974) != (((1L ^ ((((((-1L) > g_5) , (safe_sub_func_uint32_t_u_u(l_845, (((g_90 , 0x6FL) >= p_19) < l_845)))) != l_828) <= p_17) | p_19)) , p_20) || 0xFEL)) == l_845))) && 0L) || g_90.f1);
                    }
                    else
                    {
                        const unsigned l_990 = 0UL;
                        g_970 = ((safe_div_func_uint16_t_u_u((65531UL > g_970), (safe_div_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(l_874.f0, 3)) && ((l_975 != (func_31(g_970, (func_31(g_172, (safe_lshift_func_int8_t_s_s((+(0UL <= (((safe_add_func_uint16_t_u_u(((p_18 || (safe_mod_func_int32_t_s_s(p_19, l_975))) >= 0x85D0C7DAL), g_67)) || g_90.f1) , p_16))), l_975))) ^ g_970)) , l_798)) <= p_20)) ^ g_970), l_990)))) & g_5);
                        l_857 = g_875;
                    }
                    l_991 = g_90.f1;
                }
            }
            else
            {
                if (l_367)
                    break;
            }
            l_47 ^= (5UL != func_40(func_31(g_970, p_17), p_20, func_70(g_970, g_970, g_90.f1, l_818, l_857), g_5, p_19));
            l_857 &= (l_992 >= 5UL);
            g_970 = ((func_53(g_667, l_818) < p_19) & (((safe_sub_func_int32_t_s_s((g_667 && (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(func_70(g_592, (safe_mod_func_uint32_t_u_u(((0x61L <= (safe_sub_func_uint8_t_u_u(((~(p_19 , ((-1L) ^ g_5))) <= g_970), p_18))) , g_90.f0), g_667)), g_592, p_16, p_19), 10)), p_16))), (-1L))) || g_90.f0) , l_824));
        }
        else
        {
            char l_1013 = 0L;
            unsigned char l_1033 = 255UL;
            unsigned char l_1101 = 0x65L;
            int l_1113 = 0x9484D92AL;
            struct S0 l_1139 = {-9L,1UL};
            for (l_848 = 0; (l_848 > 1); l_848 = safe_add_func_uint16_t_u_u(l_848, 7))
            {
                const char l_1026 = 0L;
                char l_1036 = 0x20L;
                int l_1054 = 5L;
                const struct S0 l_1122 = {1L,1UL};
                l_1013 ^= ((safe_add_func_int8_t_s_s((((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(func_63(l_848), g_172)), g_592)) <= (((g_90 , l_807.f0) >= (safe_mod_func_int8_t_s_s(p_18, (((g_90 , 0x8613L) || g_173) ^ 0UL)))) <= p_20)) ^ p_16), g_5)) ^ l_798);
                if (((((safe_mod_func_int16_t_s_s(func_70((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_31((safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((l_1026 < g_174), (g_67 < (safe_lshift_func_int16_t_s_u(func_70((safe_mod_func_int32_t_s_s(l_50, (safe_add_func_uint8_t_u_u(((l_1013 >= (~(l_1033 && p_18))) ^ (safe_rshift_func_uint16_t_u_u((func_70((l_901 >= (l_874.f0 & 0L)), l_1013, l_807.f1, l_1026, p_18) > p_16), g_174))), p_18)))), g_170, l_50, l_1026, l_1036), 13))))) && p_17), 7UL)), p_16), l_1033)), 0xFDL)) || 0x31EE94DFL), p_17)), p_19, l_1033, l_47, l_1033), l_1013)) , l_1033) < g_970) && g_173))
                {
                    int l_1050 = 0L;
                    l_824 = ((((((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((func_53(p_17, ((4294967295UL ^ l_856) , 1UL)) && ((!(safe_add_func_int16_t_s_s(func_31(func_70(p_16, ((((safe_rshift_func_uint8_t_u_u((((!((safe_div_func_int16_t_s_s(l_848, ((!(safe_lshift_func_uint8_t_u_u((((((((((g_408 ^ p_19) == 0xCCL) , 0x1EE94102L) == p_16) <= 0xC303FC08L) || 0UL) , 0x7A035920L) == l_1033) >= 4294967288UL), p_17))) & l_901))) < g_90.f1)) && 0x07044FE6L) ^ l_1049), g_970)) | p_19) ^ p_17) , l_1026), g_667, p_19, g_173), g_173), l_50))) , l_798)) || 0xEA6CL), 0x145E8870L)), l_1050)) & p_20) ^ g_970) , p_16) <= 0xF575L) , p_20);
                    l_1051 &= 0L;
                    for (l_1050 = 2; (l_1050 >= (-24)); l_1050 = safe_sub_func_uint8_t_u_u(l_1050, 6))
                    {
                        l_1054 = p_20;
                        l_1054 = ((4294967286UL || 0x4F97144FL) < 0x20L);
                        g_667 |= g_159;
                    }
                }
                else
                {
                    short l_1070 = (-1L);
                    if (p_20)
                    {
                        unsigned short l_1071 = 0x6F38L;
                        char l_1072 = 0x8EL;
                        g_667 = (safe_lshift_func_uint16_t_u_s(g_667, 8));
                        l_1072 = (safe_div_func_int32_t_s_s((func_40(l_1054, l_1036, ((safe_rshift_func_int16_t_s_s((p_20 ^ l_901), (((((safe_add_func_uint8_t_u_u(g_174, 248UL)) != (g_1065 <= ((safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s(g_90.f0, func_70(g_174, g_592, l_1026, p_20, l_1070))), (-7L))) ^ l_1071))) , g_173) && 3UL) == g_172))) & p_19), g_90.f0, p_17) != l_1026), g_90.f0));
                        l_367 = (-1L);
                    }
                    else
                    {
                        if (p_18)
                            break;
                    }
                }
                if (p_19)
                {
                    unsigned short l_1075 = 65528UL;
                    int l_1076 = 0xD6C874E7L;
                    l_1075 = (safe_sub_func_int16_t_s_s(0xC8A6L, ((g_173 <= p_17) >= l_1033)));
                    l_1076 = p_17;
                }
                else
                {
                    unsigned l_1112 = 0xD7ED2AE7L;
                    int l_1140 = 1L;
                    g_408 = p_18;
                    if ((safe_sub_func_int32_t_s_s(l_1033, (func_31(l_367, (4294967295UL && (safe_mod_func_uint32_t_u_u((((!((safe_rshift_func_int8_t_s_s((l_1013 < func_63(l_856)), 0)) , 0L)) <= l_1033) >= 249UL), 0xBFC8358DL)))) > 0x1CD3L))))
                    {
                        char l_1098 = (-2L);
                        struct S0 l_1104 = {0x49ABD0C0L,65535UL};
                        unsigned l_1111 = 4294967295UL;
                        l_47 |= (safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(func_36(p_19), 0UL)) != (func_70((((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u(p_17, l_1097)), 5)), l_1098)) , (safe_add_func_int32_t_s_s(p_20, g_90.f0))) || ((p_16 ^ l_1098) <= 0x1FL)), g_174, p_18, l_1101, l_1101) & 0UL)), p_19)) || g_592), g_113));
                        l_1054 &= ((func_70(g_875, g_173, (((safe_div_func_uint8_t_u_u(((l_1104 , 0x0ECF3E99L) == ((g_970 && g_1065) || ((((g_170 != (safe_lshift_func_int16_t_s_s((g_970 && (safe_mod_func_uint32_t_u_u(l_1111, 8L))), p_18))) > p_16) & 0UL) && l_1112))), g_90.f1)) <= 0xE88AL) , l_1113), g_174, p_18) | p_20) > p_16);
                        if (l_1104.f1)
                            break;
                        g_667 = ((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(l_874.f1, (g_113 & (safe_sub_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u(3UL, l_1049)) != (l_1122 , ((func_70((safe_rshift_func_int16_t_s_u(0xCE9DL, 12)), ((safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_u(((g_90 , func_70(((safe_rshift_func_uint8_t_u_s(1UL, (g_90 , p_16))) > p_17), l_991, p_16, l_1097, p_19)) || p_16), 3)))) != l_1112), l_1101, l_901, l_1051) || l_1122.f0) != 0xB547BF2DL))) | p_20) != l_50), 0xE683L))))) <= g_314), g_172)) | 0x4CBA6C6DL);
                    }
                    else
                    {
                        int l_1130 = (-3L);
                        l_1130 ^= (l_1033 , ((g_174 && p_18) & g_408));
                        l_1140 ^= (((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(func_57((g_90.f0 , l_1026), (((safe_sub_func_int8_t_s_s((l_1122.f0 || (safe_sub_func_int32_t_s_s((l_1139 , func_70(g_174, func_36(g_1065), g_408, l_1054, g_5)), 0x2716CE1BL))), 0x6AL)) > 0xD25DL) , l_1130), p_19), g_1065)), g_592)) && p_19) >= (-4L));
                        l_47 = (g_170 , l_1140);
                    }
                }
                l_367 = (func_31((g_67 , (safe_rshift_func_int16_t_s_s((l_47 >= (((l_1101 && (0x3E14311DL <= ((safe_div_func_uint32_t_u_u(((l_807.f1 != (l_50 > p_19)) >= (-4L)), ((p_19 == p_17) && l_1036))) | g_90.f1))) && g_174) ^ g_875)), g_173))), g_1065) , 0xEF9C6C55L);
            }
        }
        l_47 = g_90.f0;
        if (g_5)
            break;
    }
    for (g_667 = 0; (g_667 <= 20); g_667 = safe_add_func_int32_t_s_s(g_667, 8))
    {
        unsigned l_1147 = 0UL;
        l_47 = (p_18 ^ l_807.f1);
        g_970 = func_36(func_57(g_67, g_90.f1, g_408));
        if (l_1147)
            break;
        g_1158 |= (l_1147 && ((g_159 ^ (g_970 || (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0xCD2BL, 12)), (func_63(p_17) , g_875))), ((safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((l_1147 & g_408), 0x4FL)), l_856)) , l_807.f1))))) <= l_856));
    }
    if ((+func_53(p_16, ((safe_div_func_uint32_t_u_u(g_90.f1, g_875)) , (safe_sub_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_s((func_53(((safe_add_func_uint32_t_u_u((((((safe_add_func_int16_t_s_s((g_67 > (safe_rshift_func_uint16_t_u_s((l_1097 , p_20), (p_20 && (0x8F50L >= (p_17 == 0x87F30E0AL)))))), p_18)) & p_18) < p_18) , l_901) || l_991), 0xBE41C8EBL)) ^ l_1097), g_875) , l_47), 13)) == 0x4BAEL) , 0x97D23D2CL) > (-5L)), l_1097))))))
    {
        char l_1175 = (-6L);
        int l_1176 = 0xD160A356L;
        l_1176 = (func_40(g_174, (safe_add_func_int32_t_s_s(g_159, (safe_rshift_func_int16_t_s_u(g_67, g_170)))), l_1175, ((g_174 | 0x0AB519EDL) || l_1175), l_1175) && 0x641E9EC8L);
    }
    else
    {
        const char l_1200 = 0x7BL;
        const int l_1201 = (-6L);
        int l_1286 = (-1L);
        g_970 = (~func_36(p_17));
        l_47 &= (safe_sub_func_uint32_t_u_u((g_170 || 0x759D2D4BL), (safe_lshift_func_int16_t_s_u((-1L), ((safe_lshift_func_uint8_t_u_s(((g_113 , g_173) <= p_18), (safe_div_func_int16_t_s_s((((0x64ABL == (safe_sub_func_uint16_t_u_u((l_807 , g_90.f1), 2UL))) , l_1187) | 0x0BL), 0x53FBL)))) ^ g_90.f0)))));
        if ((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(l_901, func_36(((safe_mod_func_uint8_t_u_u((((((safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((l_1200 > l_1187), ((((((l_1200 ^ (((func_63(l_1200) , g_138) | p_18) && (+(p_20 & l_1200)))) , (-8L)) <= l_991) && l_1201) ^ g_875) , 0x6CL))), g_172)) > l_1200) < g_174) || g_170) || g_173), 255UL)) , g_90.f0)))) && l_807.f1), p_16)), g_314)))
        {
            unsigned l_1208 = 4294967290UL;
            unsigned short l_1234 = 65528UL;
            int l_1245 = 0x05D7C112L;
            struct S0 l_1274 = {0x309A87BEL,0x032AL};
            g_667 = (safe_lshift_func_uint16_t_u_s(g_90.f1, 10));
            if ((((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((l_1187 > p_16), 0)), 4)) || func_63((l_1208 ^ (safe_sub_func_uint16_t_u_u(0x97C3L, ((func_63((l_1208 && (g_408 | g_113))) != l_1201) && g_67)))))) == g_314))
            {
                short l_1211 = (-8L);
                int l_1219 = 0xC07CE051L;
                const int l_1235 = 0x62470512L;
                unsigned l_1260 = 0x1248AEEAL;
                l_1211 = (-1L);
                l_1219 = (p_20 | (((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((g_138 >= (((g_173 , g_170) != ((safe_div_func_int16_t_s_s(g_172, (l_50 & p_17))) == ((l_1211 == (l_807.f0 || p_18)) , l_1218))) < p_18)), g_174)), l_1218)) == l_901) & 6L));
                if (((((((safe_sub_func_uint8_t_u_u((((0xCF04L & ((safe_div_func_uint16_t_u_u((+g_1158), 65535UL)) , (safe_add_func_int16_t_s_s((g_172 != ((safe_add_func_uint8_t_u_u((((+g_138) > p_17) , 5UL), (((l_1219 & l_1208) != g_667) >= p_20))) != l_1200)), 65535UL)))) , (-6L)) == l_1219), g_174)) | 0x75DBL) ^ 4294967293UL) || 254UL) , g_159) > p_18))
                {
                    int l_1240 = 0x6F026378L;
                    l_47 = (((func_31((safe_mod_func_uint32_t_u_u(func_57(g_408, g_113, (func_36(((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(g_90.f1, l_1234)) , 65526UL), (((((func_70(g_174, l_1235, g_1236, l_1201, g_592) > l_1211) , 1L) < 0x93L) == l_1200) != 0x44L))) , 0x9CC3L)) , 0x25B260BEL)), l_1200)), g_5) , g_408) && l_1237) || 0x2AAEL);
                    for (l_1219 = 0; (l_1219 > 12); l_1219 = safe_add_func_uint16_t_u_u(l_1219, 5))
                    {
                        g_408 = (((l_1240 , 4294967288UL) ^ 0xBC22AACDL) & 2UL);
                    }
                }
                else
                {
                    unsigned char l_1255 = 255UL;
                    int l_1264 = (-1L);
                    l_1245 |= (func_40((safe_add_func_uint32_t_u_u(g_172, (~(4294967295UL == g_667)))), p_18, l_1200, p_17, ((safe_lshift_func_int8_t_s_u(0x82L, 4)) | func_63(p_18))) <= p_19);
                    for (g_970 = 0; (g_970 == 12); g_970++)
                    {
                        unsigned short l_1261 = 0x6886L;
                        l_1261 = ((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s(l_1234, (safe_div_func_int32_t_s_s(func_70(l_1201, g_1158, l_1255, g_113, (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(func_70(p_17, (((g_1065 || func_36(((g_113 == p_19) && (-1L)))) , l_1235) , 0xEAD0L), l_1259, g_138, g_5))), l_1260))), p_17)))))), l_1201)) && l_1255);
                    }
                    for (l_1187 = 1; (l_1187 < 50); l_1187 = safe_add_func_int16_t_s_s(l_1187, 1))
                    {
                        const int l_1265 = 0x5C9C4202L;
                        l_1264 = l_1201;
                        l_1245 |= l_1264;
                        l_1245 = ((p_16 <= (((0x3C92L || func_36((g_174 == (-1L)))) && ((l_1265 < (+func_31(l_1234, g_172))) && l_1235)) | 0x2F69L)) | 65535UL);
                    }
                    l_1264 = ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(l_1255, 10)) >= (safe_add_func_int32_t_s_s((1UL >= func_53((p_18 | (-1L)), ((g_170 || g_174) & (((safe_sub_func_int16_t_s_s(((0x56C78814L ^ (func_63(((g_67 > 0x6B4FL) && 0x3F5DL)) , g_113)) != l_1219), 0xF79BL)) , (-3L)) <= g_174)))), g_90.f1))), g_408)) || l_1200);
                }
                g_667 = (g_875 || (l_1274 , g_875));
            }
            else
            {
                unsigned l_1277 = 0x014FB178L;
                g_408 ^= g_1158;
                l_47 = (safe_sub_func_uint16_t_u_u(65535UL, (l_1277 , (((p_16 & ((g_159 , func_31((6UL & (safe_lshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s(func_57(g_5, l_1277, g_408), 0x97ABDC0AL)) || l_1201), 2))), l_1200)) && 0x5FCA435FL)) | p_18) == 0x5BL))));
                g_970 |= l_1208;
                for (l_856 = 9; (l_856 != 16); l_856 = safe_add_func_int16_t_s_s(l_856, 9))
                {
                    g_970 = l_1201;
                    if (g_170)
                        continue;
                    if (l_1201)
                        continue;
                    if (l_1277)
                        break;
                }
            }
            for (l_1097 = 21; (l_1097 > 15); l_1097 = safe_sub_func_int16_t_s_s(l_1097, 7))
            {
                return g_1236;
            }
            return l_1097;
        }
        else
        {
            unsigned short l_1289 = 0xDCEDL;
            l_1286 = p_20;
            if (((safe_lshift_func_uint8_t_u_u(0x26L, p_18)) == ((+p_19) != g_667)))
            {
                unsigned char l_1290 = 9UL;
                l_1289 = (p_17 && p_19);
                l_1286 = (func_31(g_138, g_170) ^ ((l_1187 == (func_70(g_970, l_1289, l_1290, ((safe_div_func_int8_t_s_s((p_18 <= (l_1289 , 1UL)), 0x80L)) != 0UL), g_875) ^ 7L)) < 1UL));
            }
            else
            {
                return g_5;
            }
        }
        g_408 |= (g_138 | func_63((((0UL > ((p_18 != 0xFBL) >= p_18)) && (g_113 | (safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(((g_1158 > (+(l_1201 , ((-1L) < 0L)))) , l_1201), l_1187)), 12)), 1L)), 0x0D63L)) == 0x24L), l_856)))) && 0UL)));
    }
    l_47 ^= (l_807.f1 , (((p_17 >= l_1097) || (safe_lshift_func_int16_t_s_s(p_20, l_1305))) ^ (safe_rshift_func_uint16_t_u_u((+(p_17 != (+((0L == p_19) , p_17)))), 2))));
    return p_17;
}







static short func_31(char p_32, unsigned short p_33)
{
    short l_543 = 1L;
    const unsigned l_544 = 4294967290UL;
    const int l_593 = 0xBA9B5EA5L;
    unsigned l_619 = 0x587CBE4CL;
    const char l_621 = 0xDDL;
    unsigned l_622 = 4294967292UL;
    unsigned l_623 = 4294967295UL;
    unsigned short l_636 = 65534UL;
    int l_651 = 5L;
    struct S0 l_715 = {0x05FC5634L,0x5741L};
    g_408 = l_543;
    if (func_53(func_70(g_159, l_544, ((g_90 , (safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((l_543 & func_63(((func_70(l_543, (g_90 , l_544), l_543, func_63(p_32), p_33) < 0xBBL) , g_90.f0))), p_33)) , l_544), p_33)), 0x1B91L))) , p_33), g_5, l_543), l_544))
    {
        g_67 = l_544;
        return p_33;
    }
    else
    {
        const unsigned l_554 = 0x6192A370L;
        int l_557 = 0x5095EA4BL;
        int l_560 = 0x06428326L;
        unsigned l_576 = 4UL;
        unsigned short l_643 = 0xABEEL;
        const struct S0 l_732 = {0x34D0FD1AL,0x7069L};
        l_557 = ((safe_unary_minus_func_uint16_t_u((((0x37L & ((+((safe_rshift_func_int8_t_s_u((func_63(p_33) && 4UL), 6)) < l_554)) && p_32)) && (4294967295UL ^ g_90.f1)) == (safe_div_func_uint32_t_u_u((g_314 & g_90.f0), (-2L)))))) , g_173);
        if (l_543)
        {
            const unsigned char l_575 = 9UL;
            l_560 = (safe_mod_func_uint32_t_u_u(l_560, g_172));
            g_408 = (((((g_408 ^ (((safe_div_func_int32_t_s_s(l_557, p_32)) != 0x443D3947L) || (-1L))) , (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_5, 0)), g_113))) || (((!g_159) | (((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((func_70(g_5, l_575, l_576, l_544, g_408) != p_32), l_575)), g_138)) || 0x32D654EEL), p_32)) , 1UL), 7)) , 0L) >= g_174)) <= g_159)) && 0x715CL) , 0L);
        }
        else
        {
            const int l_585 = 1L;
            struct S0 l_598 = {5L,2UL};
            int l_635 = 0L;
            unsigned short l_762 = 65535UL;
            unsigned l_763 = 1UL;
            unsigned short l_781 = 0xF1F0L;
            if ((safe_mod_func_int32_t_s_s(((((!(g_314 | ((safe_lshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s((p_33 ^ func_70(((safe_div_func_uint8_t_u_u(p_33, g_138)) , ((p_32 <= l_543) != l_585)), ((((0x6A814C93L <= (func_63((safe_div_func_uint16_t_u_u((((safe_mul_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((l_544 <= (-9L)), g_170)), 0UL)) & p_33) || l_544), g_408))) && 0x17FAL)) != g_592) != 0xFB2CE2B2L) & 0xFE98L), l_585, g_170, p_33)), p_32)) && g_5), 2)) & p_32))) && l_593) ^ 0x6CL) <= p_32), g_170)))
            {
                l_560 &= (p_32 && g_172);
            }
            else
            {
                return g_170;
            }
            if (((func_70(g_592, l_543, (+(0xD081951CL || 0x3DBE755FL)), func_57(l_585, (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((func_36(((l_598 , g_173) ^ ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(g_159, g_67)) , p_32), 3)) & 0xF4L))) < g_138) != l_557) <= l_593), l_554)), l_554)), g_138), p_33) == g_5) & 0x6DL))
            {
                int l_620 = (-6L);
                unsigned char l_668 = 0x48L;
                unsigned short l_684 = 65535UL;
                int l_706 = (-6L);
                int l_716 = 1L;
                unsigned short l_723 = 0xC881L;
                if ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((!(g_174 > (safe_sub_func_uint32_t_u_u(l_560, l_557)))), 11)), (l_585 , 8L))))
                {
                    char l_626 = 6L;
                    int l_697 = 6L;
                    if ((((((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_544 | (safe_add_func_int32_t_s_s((-7L), g_138))), 3)), 65532UL)) | ((((func_63(l_585) > func_70((safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(p_33, 4L)) >= ((g_5 || l_619) <= l_620)), l_576)), l_621, l_622, g_138, p_33)) , g_408) && g_314) , l_623)) == 1UL) || g_173) | g_5))
                    {
                        l_635 = (l_576 == ((l_619 || (func_63(l_626) <= (safe_rshift_func_int8_t_s_s((((g_170 | l_620) ^ l_626) <= (((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(g_170, l_598.f1)) <= g_174) < 0x44105FEEL), 2)) || g_592) < 0x463EB60CL), 10)) , l_593) > l_620)), 2)))) , 0x9D00L));
                        return l_636;
                    }
                    else
                    {
                        unsigned char l_648 = 0xD1L;
                        g_67 = p_32;
                        l_560 ^= (((g_174 != 0x880CL) , (l_626 <= (safe_add_func_int16_t_s_s((p_32 > (safe_rshift_func_uint16_t_u_s(p_32, 3))), (safe_div_func_int8_t_s_s(l_643, (g_170 && (safe_add_func_uint32_t_u_u(l_576, (safe_add_func_int16_t_s_s(((g_408 , g_172) && l_557), 65534UL))))))))))) && l_620);
                        l_560 &= (p_33 < l_598.f1);
                        l_648 = g_90.f1;
                    }
                    for (l_543 = (-2); (l_543 < (-8)); l_543 = safe_sub_func_uint8_t_u_u(l_543, 1))
                    {
                        unsigned char l_652 = 0x87L;
                        g_408 &= g_592;
                        if (g_170)
                            break;
                        l_651 |= 0x53993240L;
                        l_652 = 0xC09D1BB1L;
                    }
                    if (((((((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(g_174, (safe_add_func_uint16_t_u_u(func_70(g_90.f1, (((safe_lshift_func_uint16_t_u_s(g_5, func_63(l_620))) >= (((p_33 && p_32) , l_576) != func_70(((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((g_90 , g_667) & 0UL), 0x2929L)), p_33)), l_626)) != 0x28L), g_592, g_592, l_668, p_33))) && 0x7FL), p_32, p_33, g_314), l_635)))), 7)) != p_33) , g_592) < g_592) ^ 65535UL) <= l_643))
                    {
                        unsigned l_675 = 4294967295UL;
                        l_560 &= (safe_div_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(l_557, 1)) < (safe_add_func_int16_t_s_s(func_36(p_33), l_675))) | (!g_170)), (l_576 && (g_159 , func_70(g_408, g_408, g_314, l_626, p_32)))));
                        l_697 |= (safe_add_func_uint16_t_u_u(l_675, (((safe_add_func_uint16_t_u_u((((+func_70((safe_div_func_int16_t_s_s(l_651, ((safe_lshift_func_uint8_t_u_s(l_684, g_90.f1)) , (safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((~(~p_32)), ((2UL ^ (safe_rshift_func_int16_t_s_u(p_33, 1))) , (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((func_36((p_32 && 0xFEF23A56L)) , l_675), p_33)), l_598.f0)), 4))))), l_598.f0))))), l_626, g_592, p_33, p_33)) & (-1L)) , 0x7D57L), 65535UL)) <= 0x1E29F3CAL) , 0x83ADL)));
                    }
                    else
                    {
                        l_557 = ((65535UL || (l_585 != (safe_div_func_uint8_t_u_u(p_33, g_173)))) >= (p_32 >= (((0x9D18L > func_36((0xD74DL <= (g_138 , (p_33 != g_138))))) <= 0xCEA8L) , 0x4B93L)));
                        l_560 = p_33;
                        l_651 &= ((p_32 | g_174) > func_70(g_138, l_684, (safe_mod_func_uint16_t_u_u(func_70(p_32, (g_667 || (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((p_33 < (0UL || ((l_622 ^ l_554) ^ p_32))), l_706)), p_33))), p_33, g_113, l_576), 9L)), l_598.f1, g_408));
                    }
                    l_716 |= func_63(((((safe_div_func_int8_t_s_s(p_32, (safe_div_func_uint32_t_u_u(p_33, ((g_90.f0 ^ (safe_rshift_func_uint8_t_u_u(func_57(l_706, g_113, (safe_sub_func_uint32_t_u_u(0xF457AF73L, g_592))), 0))) || (((l_715 , g_667) | 0x2938C9E1L) ^ 0x08FCL)))))) , g_90.f0) ^ l_576) , 1L));
                }
                else
                {
                    unsigned l_740 = 7UL;
                    for (l_576 = (-15); (l_576 > 37); l_576++)
                    {
                        unsigned l_737 = 4294967295UL;
                        int l_741 = 1L;
                        g_408 = ((func_36(func_53(func_57(p_33, (((safe_lshift_func_int16_t_s_s(l_723, 5)) && 0UL) , l_585), ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((p_33 , (-1L)), 6)) | g_90.f1), (safe_mod_func_uint8_t_u_u(((l_732 , ((((((safe_rshift_func_uint16_t_u_s(((g_667 , l_544) , g_408), 8)) , g_90.f0) > 5L) & 255UL) != g_592) , 0xC2L)) && g_90.f0), l_651)))), g_667)) || (-6L))), g_90.f0)) != 8L) <= p_32);
                        if (p_33)
                            break;
                        g_667 = func_63((safe_rshift_func_int16_t_s_u(func_53(g_90.f1, l_737), 7)));
                        l_741 &= (safe_sub_func_uint32_t_u_u(l_740, l_593));
                    }
                    g_667 = p_33;
                }
                if ((safe_rshift_func_int16_t_s_s(((((p_32 > (func_36(((safe_sub_func_uint16_t_u_u((((0L >= 255UL) , (((safe_sub_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((func_40((g_159 != (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(func_63((g_667 <= l_623)), ((p_33 && (safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((1UL < 255UL) , g_173), g_408)), 5)), 0x1AL))) , g_159))) || g_173), g_159)), g_408))), p_32, g_592, g_172, p_32) ^ 0x56L), 2L)) > p_32) && 3L), g_90.f0)) || g_67) , g_172)) >= p_33), 0xB67EL)) ^ g_5)) > g_667)) , l_715) , g_667) , l_723), l_598.f1)))
                {
                    return l_762;
                }
                else
                {
                    l_651 = g_170;
                }
                return l_763;
            }
            else
            {
                unsigned short l_780 = 0x5CACL;
                l_557 = p_33;
                l_560 = (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((0x813AL >= ((safe_sub_func_int16_t_s_s((func_57(p_32, g_67, p_32) <= (safe_mod_func_int8_t_s_s(l_762, ((func_70((safe_sub_func_uint32_t_u_u(8UL, (g_667 == (safe_div_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(l_763, g_90.f0)), 6)) || l_780) || g_592) < l_732.f0), g_90.f0))))), l_635, l_780, l_780, l_576) == p_33) , l_781)))), p_33)) | g_90.f0)), 0)), 8));
                l_635 = 8L;
                for (l_598.f1 = 21; (l_598.f1 != 42); l_598.f1 = safe_add_func_int32_t_s_s(l_598.f1, 2))
                {
                    unsigned l_786 = 8UL;
                    int l_791 = 0x5F78CEB4L;
                    l_791 = (safe_add_func_int16_t_s_s(func_36(l_786), ((func_70(p_33, ((func_70(g_592, g_113, (safe_add_func_int16_t_s_s(p_33, 0x9A72L)), ((safe_rshift_func_uint16_t_u_u(l_598.f1, 14)) , 4294967295UL), g_314) | 0L) & g_174), g_170, g_138, p_33) ^ 8L) && 2L)));
                }
            }
            g_667 = p_33;
        }
    }
    l_651 &= ((safe_div_func_int8_t_s_s(((l_543 , g_5) | ((((safe_rshift_func_uint8_t_u_u(((g_592 == (1L < (g_159 || l_593))) >= (((safe_div_func_int16_t_s_s(p_33, l_715.f1)) > g_172) | 0x85A2L)), p_32)) | g_138) , 1UL) != g_408)), p_32)) != 4L);
    l_651 ^= g_592;
    return l_636;
}







static unsigned char func_36(short p_37)
{
    char l_542 = (-9L);
    l_542 = p_37;
    g_67 = g_5;
    return p_37;
}







static short func_40(const unsigned char p_41, unsigned short p_42, char p_43, int p_44, short p_45)
{
    unsigned char l_384 = 8UL;
    short l_389 = 0x3294L;
    struct S0 l_424 = {3L,1UL};
    unsigned char l_472 = 0UL;
    int l_473 = (-8L);
    p_44 = (((((safe_add_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((-6L), (0x87A4L & (((g_174 , (g_138 || (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(p_44, (safe_rshift_func_uint8_t_u_s(g_138, 6)))), p_45)))) > (((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(g_314, g_90.f0)) ^ l_384), 11)) , 0x9A28L) <= p_44)) < p_41)))) , 0L) > 1L), 0xA0L)) && l_384) , l_384), 0x615FL)) == g_5) > g_67) | g_67) & g_67);
    g_67 ^= l_384;
    if (((safe_add_func_uint8_t_u_u((g_314 != (-9L)), (((func_70((func_70(func_70(l_384, ((func_63(p_41) < (safe_rshift_func_int16_t_s_s(g_174, ((p_41 , (l_384 != p_43)) & g_172)))) || 65526UL), p_42, l_384, l_384), l_384, g_90.f0, g_138, l_384) , 0L), l_384, l_384, g_172, g_170) >= l_389) == p_45) == 0xE9L))) | 3UL))
    {
        int l_390 = 1L;
        struct S0 l_405 = {0xFAE33703L,0x7B84L};
        const unsigned l_442 = 0x5E8790BDL;
        unsigned char l_443 = 1UL;
        g_408 = (l_390 ^ func_63((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u((g_90 , (safe_lshift_func_int16_t_s_u(((g_138 < (safe_lshift_func_int16_t_s_u(0x9D5DL, 4))) >= (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(65530UL, 3)), g_173))), ((((((l_405 , (l_390 ^ (safe_mod_func_int32_t_s_s(p_41, (-7L))))) < 1L) || p_43) < g_5) != g_90.f1) || 0UL)))), g_159)) == g_90.f0) < p_43) <= g_138), g_173)), l_384))));
        g_67 = (safe_sub_func_int32_t_s_s(((l_405.f1 || (g_90 , (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s((l_405.f0 || (0xD79FE6A8L == (0xD6E50475L | g_174))))) != (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((g_314 < (safe_sub_func_uint32_t_u_u((g_5 < (safe_lshift_func_uint8_t_u_u((l_424 , g_159), l_384))), g_314))), 1UL)) >= 1UL), 8))), (-3L))), 5)))) , 0x7D3A5E5FL), 0x35D3E90FL));
        for (p_44 = (-27); (p_44 < (-2)); p_44 = safe_add_func_uint16_t_u_u(p_44, 1))
        {
            short l_427 = (-4L);
            l_427 = (p_44 > l_424.f0);
        }
        l_443 ^= (safe_add_func_uint16_t_u_u(((~(safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((g_113 < (g_173 ^ (safe_add_func_uint8_t_u_u(p_44, 0x18L)))), (((0L < (((safe_lshift_func_int8_t_s_s(l_405.f0, ((((safe_rshift_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((+(((p_43 , p_42) || ((!((((+0x349501CFL) , l_384) , p_43) , p_43)) != p_42)) <= g_174)), (-1L))) , (-2L)) , l_405.f1), 10)) == p_42) , (-9L)) > l_384))) >= l_442) ^ g_5)) < l_384) & l_424.f1))), p_45))) , p_43), 7UL));
    }
    else
    {
        short l_461 = 0x5399L;
        unsigned l_462 = 0x170DBCACL;
        char l_493 = 1L;
        short l_499 = 1L;
        int l_509 = (-9L);
        unsigned char l_510 = 0xE1L;
        unsigned char l_531 = 0xAFL;
        g_408 &= ((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(func_57((l_424.f0 < p_43), (safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s(func_70(g_159, ((safe_rshift_func_uint16_t_u_u(l_424.f0, 5)) , l_389), (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(0UL, 0)), 6)), (safe_rshift_func_uint16_t_u_s(func_70(p_43, (p_43 < (safe_unary_minus_func_int32_t_s(l_461))), p_41, g_67, g_113), 11)), l_424.f0), g_113)), l_424.f0)), g_5), 255UL)), p_43)) > l_462);
        for (g_67 = 0; (g_67 <= 29); g_67++)
        {
            const char l_471 = 9L;
            int l_494 = 0x911995FFL;
            unsigned char l_508 = 6UL;
            l_473 |= (safe_lshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s(((l_462 == p_41) ^ g_5), ((g_138 ^ ((-3L) || (safe_div_func_uint8_t_u_u(((g_67 && ((l_389 && ((func_70((0x80934606L >= 0UL), l_471, p_41, l_472, p_44) , p_45) < 2L)) , l_471)) ^ p_43), g_408)))) & p_45))) && 0xE6L), 10));
            if ((safe_add_func_int32_t_s_s((!l_389), (g_67 , func_70(g_159, p_44, ((0UL <= (safe_div_func_uint32_t_u_u(p_43, l_471))) == l_461), l_462, l_462)))))
            {
                const unsigned l_492 = 4294967295UL;
                if (p_44)
                    break;
                l_494 |= (4L > (safe_mod_func_int16_t_s_s(((safe_div_func_int16_t_s_s(p_42, (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(g_159, 13)), (((p_41 , (l_462 < (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((0xDC37674FL == (((((p_45 | g_113) != (safe_add_func_int32_t_s_s((func_70((g_90 , l_492), p_41, g_174, p_43, l_492) ^ 5UL), g_90.f1))) != 0x6450083CL) == (-7L)) <= l_461)), 0xE78DL)), p_41)))) , l_493) == g_174))))) >= 8L), p_44)));
                if ((safe_mod_func_int8_t_s_s(p_41, ((p_45 , 4294967292UL) || ((p_42 , (g_159 == (func_70((l_492 <= 0UL), ((safe_lshift_func_uint16_t_u_s(((((((p_41 >= g_173) , g_67) || p_42) > l_492) != p_45) , g_5), 5)) <= 253UL), p_44, l_499, l_461) | 0x88L))) ^ p_41)))))
                {
                    p_44 = 0xD37A764BL;
                    p_44 = (-1L);
                }
                else
                {
                    g_408 = p_42;
                    if (p_41)
                        break;
                }
                g_408 = p_44;
            }
            else
            {
                p_44 |= g_172;
            }
            l_509 |= (safe_rshift_func_uint8_t_u_u((p_45 , ((p_45 ^ func_70((safe_div_func_uint32_t_u_u(func_70((l_494 > (safe_lshift_func_int8_t_s_s(l_473, 1))), l_462, l_462, ((func_70((((((safe_div_func_uint16_t_u_u(p_44, p_42)) , ((l_424 , l_494) && l_494)) == l_508) > p_43) , p_43), g_174, g_174, g_113, g_159) , p_44) < 0x8FCFL), p_41), l_389)), p_45, l_461, l_462, l_424.f0)) ^ g_67)), l_508));
            g_408 &= func_70(l_471, g_5, l_510, l_461, (safe_rshift_func_uint16_t_u_s(65530UL, 7)));
        }
        g_408 = (func_53(((+(4UL | (func_53((((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((g_5 > func_63((l_509 < (p_44 ^ func_70(g_159, g_138, g_5, ((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(l_499, ((safe_add_func_int32_t_s_s(p_42, p_45)) , p_43))), g_314)) <= 0x7DB8L), 5)), l_461)) || l_461), p_45))))), p_44)) < l_472), l_531)) <= p_44), l_493)), 2)) == g_159) > 0xC0L), g_159) == p_42))) >= p_43), g_408) | g_5);
        p_44 = ((safe_add_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(9L, (safe_mod_func_int8_t_s_s((((((g_172 , (safe_add_func_int32_t_s_s(func_57(((g_5 && l_462) < 0x2FA6L), p_41, g_67), (safe_lshift_func_int8_t_s_u(l_509, 5))))) != p_42) ^ 1L) && p_44) , l_531), l_473)))) , g_67), g_90.f0)) , 3L);
    }
    return p_43;
}







static char func_53(unsigned char p_54, unsigned char p_55)
{
    unsigned l_56 = 0xF3E4C996L;
    int l_366 = 6L;
    l_366 &= ((((p_55 , l_56) <= func_57(p_55, (!(safe_div_func_uint16_t_u_u(0xA126L, func_63(g_5)))), g_90.f0)) , ((l_56 & p_55) | g_5)) != p_55);
    return p_55;
}







static char func_57(unsigned p_58, int p_59, unsigned p_60)
{
    char l_131 = (-8L);
    short l_171 = 1L;
    unsigned l_204 = 1UL;
    struct S0 l_216 = {-2L,65535UL};
    short l_217 = 6L;
    int l_232 = 0xC750724EL;
    unsigned l_298 = 4294967295UL;
    short l_357 = 3L;
    for (g_67 = 0; (g_67 < 16); g_67 = safe_add_func_uint8_t_u_u(g_67, 8))
    {
        unsigned l_136 = 8UL;
        unsigned l_157 = 0xD1B06647L;
        int l_206 = 0x76D5697FL;
        for (p_60 = 0; (p_60 > 16); p_60 = safe_add_func_int8_t_s_s(p_60, 3))
        {
            const unsigned l_130 = 0UL;
            int l_143 = 0xDE4B234AL;
            for (p_59 = 0; (p_59 < (-23)); --p_59)
            {
                unsigned short l_137 = 0UL;
                int l_158 = 0x04AF86A2L;
                g_138 = (func_70(g_67, l_130, l_131, ((p_59 || (((((safe_div_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(l_136, (!((((func_70(g_113, p_59, l_131, p_59, g_5) | g_113) < g_5) < 65533UL) | l_137)))) ^ 2L), g_90.f1)) < 1UL) || g_5) ^ g_90.f1) , 0x8EL)) | 0x0F39A984L), g_67) | 0x73D2L);
                if (func_70((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((g_5 ^ l_143), 6)), 0xD86DL)), (~(((p_59 >= 0x0CL) < (l_137 < (((safe_add_func_int32_t_s_s(0x2C85B7FFL, 0x80FC2DDDL)) == 0UL) == l_143))) <= l_136)), g_67, p_60, g_90.f0))
                {
                    unsigned char l_152 = 0x76L;
                    g_159 = ((g_90.f0 ^ (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((p_59 > l_137) , l_152), l_131)), (g_90.f0 , (safe_sub_func_int8_t_s_s(((((((g_138 > ((safe_div_func_int8_t_s_s(p_58, ((func_70(g_90.f1, l_136, p_59, l_137, g_113) || p_58) , g_5))) && g_90.f1)) || l_157) >= g_90.f0) == p_59) || (-4L)) , l_158), p_60))))), 4))) | 0xB0B6L);
                    g_170 |= ((safe_add_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(p_59, l_131)) == (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((0L == ((g_5 , ((p_60 > (g_67 > g_5)) || 0x30L)) > g_90.f0)) != g_90.f0), p_59)), 6)) < 0xEEE4F3F7L), p_60))) , p_58), l_157)) , l_157);
                    g_172 = l_171;
                }
                else
                {
                    int l_197 = 1L;
                    int l_205 = 1L;
                    g_173 = (0x0EL == (g_113 , p_60));
                    g_174 = ((g_90.f1 != (!p_58)) , l_136);
                    l_206 = ((safe_sub_func_int16_t_s_s(((0x69E21D65L ^ (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((-8L), 12)), ((g_172 >= (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((((func_70((((-8L) != ((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((g_67 , p_60), l_197)), 11)), ((((l_197 > ((safe_lshift_func_int16_t_s_u(((func_70((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_157, 6)), l_131)), g_90.f1, l_130, g_90.f0, l_204) > g_113) > 0x62L), g_170)) ^ l_158)) & g_5) != 1UL) & g_67))), g_173)), g_172)) > p_58)) ^ g_113), p_59, g_5, g_174, p_59) < l_157) ^ g_90.f0) >= l_205) > p_59), p_59)), 0xBAL))) == g_67)))) && l_158), l_136)) != 0UL);
                }
            }
            if (p_58)
                continue;
            if (p_60)
                continue;
        }
    }
    l_217 = ((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_60, 1L)), (g_174 , ((safe_unary_minus_func_int16_t_s(p_58)) | (safe_div_func_int8_t_s_s((l_131 <= ((l_204 , p_58) < (safe_lshift_func_uint8_t_u_s((((((l_216 , g_5) >= l_216.f1) , l_216.f0) <= 0x311CE538L) < l_216.f1), g_174)))), l_204)))))) != g_90.f1);
    l_232 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s(((func_63((safe_mod_func_int32_t_s_s(p_58, g_113))) >= l_131) >= (((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(0xA1L, 1)), 13)) ^ (safe_div_func_int32_t_s_s((0xC646L | (p_60 > (5L || l_204))), 0x2381DE45L))) & l_216.f0)), p_58)) || g_173), 8)), l_131));
    if (g_138)
    {
        const unsigned char l_235 = 1UL;
        int l_236 = 7L;
        short l_243 = (-10L);
        int l_280 = 0xB302BC30L;
        if (((func_63(((safe_rshift_func_int16_t_s_u((g_170 , p_59), 15)) > p_59)) >= p_60) ^ (p_60 > (((func_70((p_60 == l_171), l_235, l_235, g_90.f0, g_173) <= 1L) & g_90.f0) , g_138))))
        {
            l_236 = 0xB1045D44L;
        }
        else
        {
            short l_244 = 0L;
            const short l_313 = 0x4A0AL;
            int l_348 = (-1L);
            l_232 = ((safe_rshift_func_uint16_t_u_s(p_59, 13)) , l_171);
            if (((safe_div_func_uint32_t_u_u((((g_67 | 0x02L) | g_159) , (safe_sub_func_int16_t_s_s((g_174 == ((((((g_172 <= 255UL) ^ p_58) ^ l_243) < (l_235 ^ l_244)) || 8UL) , 0x7E4DL)), l_236))), g_90.f0)) , 0xBE3BBB77L))
            {
                const short l_279 = 0x2C72L;
                if (((0xAE3C54FDL >= (safe_add_func_int32_t_s_s((((!p_59) > ((p_60 , (func_70(g_5, p_59, l_243, func_63(p_60), l_235) == 0xFD0F9B15L)) , 0xA0FBE669L)) != 0xC9C1L), 1UL))) || (-10L)))
                {
                    g_67 = l_244;
                }
                else
                {
                    unsigned short l_297 = 0x0AE5L;
                    g_67 = (safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((((g_159 , 8UL) || (l_244 < ((5L <= l_243) , l_235))) , func_70((l_216 , (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((g_90 , (safe_mod_func_uint16_t_u_u(((g_159 ^ 0x45L) == 0xB3CD36BCL), l_236))), l_244)), l_236)), g_67))), g_172, g_172, p_58, l_131)) <= p_59), g_172)), p_60)), 0xF1L));
                    for (g_174 = 15; (g_174 <= (-28)); g_174--)
                    {
                        l_232 = p_60;
                    }
                    l_280 |= func_63((func_63((g_173 != (safe_div_func_uint8_t_u_u((p_58 , ((p_58 , ((safe_sub_func_int32_t_s_s((func_70((safe_mod_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_236, (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(p_60, (safe_rshift_func_uint8_t_u_s(g_173, 0)))), (g_173 || ((((((!(g_159 > p_60)) <= 0x69162992L) >= (-1L)) != g_173) < l_279) , 0xB685L)))))), p_59)) <= 0xF678L) != l_244), g_170)), p_59, l_279, l_279, p_58) == l_279), l_244)) && (-9L))) , p_58)), g_67)))) , g_113));
                    l_297 = (safe_div_func_int16_t_s_s(0xCB9AL, ((safe_lshift_func_uint16_t_u_u((65528UL & func_63(((((safe_rshift_func_uint16_t_u_s((+((p_60 , (((safe_lshift_func_uint8_t_u_s((g_170 & 4UL), 2)) && (safe_sub_func_uint8_t_u_u(p_59, (safe_lshift_func_uint16_t_u_s(0xF017L, 12))))) <= (((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(func_63(p_60), g_170)), p_60)) > g_172) ^ 0x9FEBDC36L))) , p_58)), 6)) ^ 0x66L) | 8L) ^ g_90.f0))), g_159)) || 0xF9FAL)));
                }
            }
            else
            {
                l_232 |= l_280;
                return g_173;
            }
            if ((l_298 != (!g_5)))
            {
                g_314 = (((func_63(g_174) ^ ((((((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u(((((safe_div_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(l_244, (safe_add_func_uint8_t_u_u(p_59, func_70(g_172, (safe_sub_func_uint16_t_u_u(l_236, p_60)), p_60, func_70((safe_mod_func_int8_t_s_s(l_235, p_58)), g_5, p_59, g_90.f0, p_59), l_204))))) , l_244), p_59)) && l_313) && g_173) , l_217), 1)) >= l_171), p_59)) & 249UL) , 1L) < g_173) >= g_170) , p_59)) != g_172) || 0x0BL);
            }
            else
            {
                int l_325 = (-7L);
                int l_330 = 0x9EEACDF3L;
                l_280 = (safe_div_func_int32_t_s_s(g_159, (safe_lshift_func_int8_t_s_s(0xEEL, ((safe_div_func_int16_t_s_s(((((((func_63(p_59) || (0x0EDB8C9FL < (((safe_mod_func_uint16_t_u_u((l_280 || (func_63(p_59) > (safe_rshift_func_uint16_t_u_s(g_173, g_172)))), p_60)) || 0xA03B7EA7L) > 65526UL))) == 0xDDL) >= g_90.f0) | l_325) & l_298) , 0x1555L), p_60)) ^ l_244)))));
                l_330 = (safe_lshift_func_uint16_t_u_u((0x5A649198L >= (1L ^ (l_325 > g_159))), ((g_170 < p_59) , (((safe_add_func_int32_t_s_s(((l_216 , (func_63(p_59) , p_58)) != l_236), l_244)) , l_325) <= 0xDB0A4859L))));
                g_67 = (-1L);
                for (g_174 = 0; (g_174 > (-5)); g_174--)
                {
                    int l_347 = (-4L);
                    l_348 = ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((((~(safe_rshift_func_uint8_t_u_s(func_63(((249UL > 0UL) <= (g_90 , g_5))), ((safe_rshift_func_uint16_t_u_u(((!l_243) != g_5), 5)) , (safe_lshift_func_int8_t_s_s((-1L), (safe_lshift_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(p_59, 0x0AF10B1BL)) > g_174) , g_5), 1)))))))) , 0x9EF79568L) , p_60) | 0xC4197594L), 5)), l_347)) < g_314);
                    l_280 = l_330;
                }
            }
            l_348 = (safe_rshift_func_uint8_t_u_u(0xE3L, 3));
        }
        l_232 ^= ((safe_add_func_int8_t_s_s(0xABL, ((g_90 , (((((g_90.f1 , func_70((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(p_59, 4)) | p_59), 4)), func_63(p_60), (p_59 | p_59), p_60, l_243)) ^ l_235) <= l_357) & 0x384CL) && p_58)) & g_138))) >= g_90.f1);
    }
    else
    {
        for (g_170 = 0; (g_170 == 11); g_170++)
        {
            unsigned short l_360 = 0x1425L;
            int l_365 = 3L;
            if (l_360)
                break;
            l_365 |= ((safe_lshift_func_int8_t_s_u(7L, func_70(l_360, p_60, g_113, ((p_60 <= ((p_59 & ((g_314 , (2UL != (safe_lshift_func_uint16_t_u_u(p_58, 0)))) >= p_59)) == g_314)) , 0x41F731B9L), p_59))) <= p_58);
        }
    }
    return p_59;
}







static short func_63(short p_64)
{
    short l_87 = 0x8630L;
    int l_117 = 0xB0D2C86DL;
    for (p_64 = (-13); (p_64 <= (-20)); p_64 = safe_sub_func_int16_t_s_s(p_64, 6))
    {
        short l_76 = 4L;
        int l_86 = 1L;
        for (g_67 = 0; (g_67 >= (-4)); g_67 = safe_sub_func_uint8_t_u_u(g_67, 6))
        {
            unsigned char l_81 = 1UL;
            int l_88 = 0xD293E35FL;
            l_86 &= func_70((((p_64 || l_76) ^ 0xDA7DA9FCL) == l_76), g_67, (safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s((((l_81 < (((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_81 | p_64), g_5)), 0x20B8L)) < 0xB684L) < g_67)) || g_5) , l_76), p_64)), p_64)), g_5, g_67);
            l_88 = l_87;
        }
        return g_67;
    }
    if (((1UL == (((g_5 || p_64) , (-3L)) > (((!func_70(func_70(g_5, (((((!((safe_unary_minus_func_int8_t_s(0x85L)) || (l_87 <= (l_87 & p_64)))) < l_87) , p_64) || 4294967295UL) | l_87), p_64, l_87, g_5), p_64, p_64, l_87, g_5)) , g_90) , p_64))) & 2UL))
    {
        unsigned short l_97 = 0x5235L;
        int l_114 = 0L;
        if (((g_5 != 0x1B33L) || (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((0xB728L & (safe_sub_func_int8_t_s_s(g_5, (p_64 != (65527UL && p_64))))), ((g_90.f1 > l_97) > p_64))), 6))))
        {
            return g_90.f1;
        }
        else
        {
            int l_98 = (-6L);
            l_98 = (0x3713L && l_97);
            g_113 ^= (!(((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_67, g_5)), (safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(func_70(g_90.f0, l_98, g_90.f0, (((safe_sub_func_uint16_t_u_u(((p_64 , 1UL) , (g_90.f0 , (((~(safe_lshift_func_int16_t_s_u((((safe_add_func_int32_t_s_s(((g_90 , l_98) , 1L), p_64)) , (-5L)) & p_64), 2))) ^ 0x33L) && p_64))), 0x080FL)) , p_64) > g_90.f1), p_64), g_90.f1)), l_87)))) , l_87) & p_64));
            l_114 ^= l_98;
        }
    }
    else
    {
        int l_120 = 0x83F5D6BEL;
        int l_123 = (-9L);
        l_117 = (safe_mod_func_int8_t_s_s(g_90.f1, p_64));
        g_67 = (g_90.f1 < ((safe_rshift_func_uint16_t_u_s(((l_117 , ((!(func_70((func_70(p_64, func_70(l_87, (l_120 >= p_64), ((p_64 , (l_120 || ((((safe_sub_func_int8_t_s_s(p_64, p_64)) & 65535UL) != l_120) >= l_87))) , l_123), l_117, p_64), g_90.f1, p_64, p_64) || 1UL), p_64, p_64, g_90.f0, g_67) & l_123)) > p_64)) , l_120), l_120)) > 0x0014L));
        return p_64;
    }
    return p_64;
}







static int func_70(const short p_71, const short p_72, short p_73, unsigned p_74, short p_75)
{
    return g_5;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_970, "g_970", print_hash_value);
    transparent_crc(g_1065, "g_1065", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1236, "g_1236", print_hash_value);
    transparent_crc(g_1352, "g_1352", print_hash_value);
    transparent_crc(g_1422, "g_1422", print_hash_value);
    transparent_crc(g_1431, "g_1431", print_hash_value);
    transparent_crc(g_1501, "g_1501", print_hash_value);
    transparent_crc(g_1646, "g_1646", print_hash_value);
    transparent_crc(g_1788, "g_1788", print_hash_value);
    transparent_crc(g_1848, "g_1848", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
