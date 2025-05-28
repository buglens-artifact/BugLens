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



static unsigned short g_5 = 1UL;
static unsigned g_94 = 4294967293UL;
static int g_101 = 0x08B304F1L;
static int g_189 = 0x32703BF9L;
static unsigned g_282 = 3UL;
static int g_313 = 0xD7113E70L;
static char g_453 = (-3L);
static unsigned g_473 = 0x40C2ECAAL;
static unsigned g_512 = 1UL;
static unsigned short g_573 = 0UL;
static unsigned g_627 = 0x29FCE235L;
static short g_699 = (-1L);
static int g_704 = 4L;
static unsigned g_705 = 4294967295UL;
static unsigned g_789 = 1UL;
static unsigned short g_890 = 65535UL;
static char g_905 = 0x75L;
static const unsigned short g_967 = 0x524CL;
static unsigned char g_988 = 1UL;
static short g_1069 = 7L;
static int g_1074 = 0x5CD01DBFL;
static const unsigned g_1260 = 0xE7AC1285L;
static const short g_1677 = (-2L);
static unsigned g_1722 = 4294967287UL;
static int g_1883 = 0x8F8F70DFL;
static char g_1922 = 6L;
static unsigned g_2034 = 4294967295UL;
static char g_2038 = 1L;
static unsigned char g_2236 = 0xB6L;
static int g_2268 = 0x722C91BCL;
static unsigned short g_2331 = 6UL;
static char g_2378 = (-9L);
static char g_2429 = 0xC9L;
static unsigned short g_2432 = 65535UL;
static unsigned g_2450 = 0x864C4779L;
static unsigned g_2460 = 0x68FE2E2CL;
static int g_2479 = 8L;
static unsigned char g_2484 = 2UL;
static int g_2577 = 0x56652312L;
static unsigned short g_2597 = 0x4001L;



static int func_1(void);
static char func_10(unsigned p_11);
static unsigned short func_14(unsigned p_15, int p_16, short p_17, short p_18);
static unsigned char func_19(const char p_20, short p_21, short p_22, unsigned p_23);
static const unsigned char func_24(char p_25, unsigned p_26);
static short func_27(unsigned p_28, int p_29, char p_30, short p_31, unsigned char p_32);
static const short func_33(unsigned p_34, char p_35, unsigned char p_36, unsigned p_37);
static const unsigned char func_38(unsigned p_39);
static char func_42(int p_43, int p_44, char p_45);
static unsigned short func_46(unsigned short p_47, const unsigned p_48, short p_49, char p_50);
static int func_1(void)
{
    const unsigned short l_4 = 0xE9D0L;
    int l_2004 = 1L;
    unsigned l_2011 = 4294967295UL;
    unsigned l_2020 = 0x4589E3E1L;
    unsigned short l_2037 = 0xE7FBL;
    short l_2063 = 0x74FBL;
    short l_2073 = 0xE47AL;
    char l_2097 = (-6L);
    unsigned char l_2146 = 3UL;
    short l_2173 = 0xAAF2L;
    unsigned l_2235 = 0xE01AD6B9L;
    short l_2330 = (-1L);
    int l_2461 = 0xFDBF3190L;
    char l_2491 = 0xC4L;
    unsigned l_2640 = 0x326EFAD6L;
    const int l_2663 = 0x2CEA73BBL;
    unsigned l_2677 = 0x29B080DDL;
    unsigned char l_2713 = 1UL;
    unsigned l_2767 = 1UL;
    const int l_2770 = (-1L);
lbl_2287:
    l_2004 = (safe_sub_func_uint32_t_u_u((l_4 < (g_5 > (6L == (safe_add_func_uint32_t_u_u((g_5 | g_5), 0xD020BD2AL))))), (0x677BL > (safe_add_func_uint16_t_u_u((func_10(((((safe_div_func_uint16_t_u_u(func_14(g_5, g_5, g_5, l_4), l_4)) == g_705) || g_512) ^ g_5)) == g_1922), 0xDE69L)))));
    if (((safe_lshift_func_int8_t_s_u((g_988 <= (((safe_lshift_func_uint8_t_u_s((l_2011 , (g_1069 , (((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_2011, ((safe_sub_func_uint16_t_u_u((func_19(func_38(g_1074), g_967, g_890, l_2004) <= g_573), g_573)) ^ 0xD513C777L))), g_189)) ^ l_2011), l_2004)) & l_2020) == 1L))), g_1722)) <= g_705) > 0x7765E267L)), g_473)) , (-9L)))
    {
        int l_2021 = 0x00ABC8FCL;
        unsigned l_2050 = 1UL;
        l_2004 = l_2021;
        g_2038 = ((0x6DA42AEFL | (safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(g_1883, (safe_lshift_func_int8_t_s_u(func_19((+(!((safe_add_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s(func_46((safe_add_func_int8_t_s_s((g_1260 <= g_1922), ((((g_1722 >= ((g_2034 >= ((0x5BL && func_42(g_5, (safe_add_func_int16_t_s_s(0L, g_512)), g_905)) >= g_1260)) != 1UL)) , g_94) | l_2011) , (-3L)))), l_2011, l_2021, l_2021), g_1722)) || 7L) , 0UL), g_453)) || l_2021))), l_2021, l_2037, g_189), g_282)))) ^ 0x3232L), g_789))) <= l_2021);
        g_101 = l_2021;
        for (g_282 = 0; (g_282 == 23); ++g_282)
        {
            char l_2047 = 3L;
            int l_2051 = 0x342CDAA3L;
            l_2051 = ((((safe_lshift_func_uint8_t_u_u((((((0x9BL | (l_2021 , (safe_rshift_func_int8_t_s_s(g_1922, (+(safe_div_func_int8_t_s_s((l_2047 != (safe_rshift_func_int8_t_s_u(l_2047, ((~(func_33(func_42(g_905, g_988, ((g_967 , ((-1L) && l_2020)) , g_1883)), l_2011, g_1069, g_967) && l_2047)) != (-2L))))), 0x20L))))))) < l_2011) ^ (-6L)) , 0xE0B84A2DL) || g_1069), 5)) | l_2050) < 0x40ECE444L) && g_2034);
            l_2004 = g_1677;
            l_2051 = g_313;
            l_2021 = l_2020;
        }
    }
    else
    {
        int l_2056 = 0x38F6F2CBL;
        const unsigned char l_2057 = 0xFEL;
        int l_2072 = 4L;
        short l_2110 = 0x9E12L;
        unsigned l_2144 = 4294967289UL;
        const int l_2145 = 1L;
        short l_2171 = 0xE431L;
        char l_2191 = 0x20L;
        char l_2215 = 0x5AL;
        unsigned l_2412 = 0xD4C2141DL;
        short l_2473 = 0L;
        unsigned l_2548 = 0xFC5B4457L;
        int l_2578 = (-4L);
        unsigned l_2594 = 4294967286UL;
        int l_2595 = (-1L);
        char l_2659 = (-10L);
        unsigned char l_2709 = 0x18L;
        short l_2742 = 0xD9BCL;
        unsigned l_2759 = 0UL;
        if ((safe_rshift_func_int8_t_s_s(l_2011, g_704)))
        {
            int l_2062 = 0L;
            int l_2087 = 0x5A00FD2FL;
            unsigned l_2113 = 0x838A8F2AL;
            const unsigned l_2121 = 0UL;
            char l_2147 = 0xA7L;
            unsigned l_2192 = 4294967287UL;
            g_704 = (safe_add_func_uint32_t_u_u(func_46(l_2056, l_2057, (l_2056 | (g_1260 , ((((l_4 , (g_1069 , (0xF7AFL <= ((safe_sub_func_uint32_t_u_u(l_2057, l_2011)) <= g_5)))) & g_988) <= g_282) >= l_2062))), l_2063), l_2020));
lbl_2148:
            l_2072 = ((safe_mod_func_uint8_t_u_u(4UL, (safe_rshift_func_int16_t_s_u(g_573, 4)))) , (func_14((l_2020 > (0xB75A8FD4L & ((l_2063 | l_2057) , ((safe_lshift_func_uint8_t_u_s(l_2062, ((((g_1922 >= l_2063) != 0x4472L) >= g_988) >= l_2057))) <= l_2056)))), g_890, g_5, g_189) != g_905));
            if ((((l_2073 == l_2057) , (safe_lshift_func_int8_t_s_u(6L, (65535UL ^ ((1UL == (((safe_mod_func_int32_t_s_s((l_2056 & (~((safe_unary_minus_func_uint8_t_u(l_2073)) , ((safe_div_func_uint32_t_u_u(func_46(((safe_lshift_func_int16_t_s_s(func_27(((l_2062 > (((safe_sub_func_int8_t_s_s(func_33(l_2062, l_2057, g_699, l_2056), l_2037)) < l_2057) >= l_2072)) , l_2062), g_1074, g_94, l_2062, g_988), 0)) , 0xBB0CL), l_2072, g_905, g_988), 6L)) , g_2038)))), 4294967295UL)) , l_2072) , l_2063)) || l_2062))))) || g_473))
            {
                int l_2098 = 1L;
                int l_2118 = 0xAEFD2254L;
                l_2087 = ((g_2038 == 0x86CF7479L) <= (safe_rshift_func_uint8_t_u_u(l_2037, g_94)));
                if (g_282)
                {
                    int l_2088 = (-9L);
                    if (((func_46(((((l_2088 , l_2062) == g_313) ^ ((safe_div_func_uint32_t_u_u(g_282, 1UL)) ^ l_2057)) && ((g_704 , (((safe_rshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((~((safe_div_func_int16_t_s_s(((func_19(g_94, l_2073, g_101, l_2063) ^ 0xF4309881L) , 0L), g_573)) , 0xCCFEA567L)) , 0xD7L), (-10L))) | l_2088), g_573)) && 0x2CA2L) < l_2087)) > l_2097)), l_2062, l_2098, g_1722) >= l_2073) == l_2056))
                    {
                        int l_2103 = 1L;
                        l_2004 = ((safe_sub_func_int16_t_s_s(func_10((safe_mod_func_int32_t_s_s(7L, l_2103))), (65535UL && (((safe_mod_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(l_2098, (safe_add_func_int32_t_s_s(l_2110, l_2011)))) >= (safe_mod_func_int8_t_s_s((l_2110 <= l_2113), l_2103))), l_2110)) <= g_473) < l_2072)))) < 0xECCC9099L);
                    }
                    else
                    {
                        unsigned char l_2117 = 6UL;
                        g_704 = 6L;
                        if (g_1677)
                            goto lbl_2116;
lbl_2116:
                        l_2004 = ((safe_lshift_func_uint16_t_u_u(0x0645L, 11)) <= l_2087);
                        l_2117 = l_2072;
                        return l_2117;
                    }
                }
                else
                {
                    return g_512;
                }
                l_2118 = 1L;
                l_2147 = ((safe_mod_func_int16_t_s_s(l_2121, func_46(((g_1069 <= (safe_lshift_func_int8_t_s_u((func_38((+((safe_add_func_uint32_t_u_u(g_1069, ((l_2110 >= l_2121) && ((safe_rshift_func_uint16_t_u_s(func_38(func_19(g_5, (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((g_5 , (((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(func_33(func_46(func_46(func_19(g_313, (+(safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(g_2038, l_2144)), g_473)), 1L)), l_2057))), l_2098, g_313), g_282, g_967, l_4), l_2145, g_189, g_1069), g_1074, g_5, g_905), l_2056)) == l_2118), 0)) | 8L) != 0L)) > 0x12L) < (-5L)), l_2118)), g_1722)), l_2098, g_282)), 9)) | l_2037)))) < 0x0D0D2A97L))) && 0x89L), g_1922))) || l_2144), l_2118, l_2146, g_1922))) == g_1069);
            }
            else
            {
                unsigned l_2153 = 4294967295UL;
                int l_2193 = 0x05811AB7L;
                if (g_2034)
                {
                    int l_2172 = (-7L);
                    int l_2174 = 0x99C26828L;
                    if (l_2063)
                        goto lbl_2148;
                    l_2174 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((l_2153 && (safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s(g_5, 6)) <= (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(func_19(((((l_2153 , ((0xABL < func_38(l_2147)) > g_1074)) || ((((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((((((((((safe_mod_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(l_2056, ((safe_add_func_uint32_t_u_u(l_2113, l_2087)) == g_1069))) == l_2153) <= 0x3B8F6C48L), 0x2AL)) && 0x2DL) || 4294967287UL) , l_2171) <= l_2056) , g_1722) && g_101) <= l_2056) ^ 0x75L) <= 0x2BAFL))), l_2172)) , g_473) == l_2153) != 0x7150L)) | g_512) | g_1722), g_705, l_2110, g_988), 2)), l_2173))) , 0x32L), 3UL))), 7)), l_2153));
                }
                else
                {
                    unsigned l_2175 = 1UL;
                    l_2175 = 0xD4BED46BL;
                    g_101 = (safe_lshift_func_int16_t_s_u(l_2113, 12));
                }
                if (((safe_div_func_int32_t_s_s((-10L), ((~g_967) && (((safe_lshift_func_uint8_t_u_s((g_1883 > (safe_rshift_func_int16_t_s_s(func_19(g_1260, l_2113, (g_789 != func_38(l_2144)), l_2147), 11))), g_1883)) , l_2146) >= g_453)))) == g_573))
                {
                    int l_2190 = 0xEBE603BDL;
                    l_2193 = ((safe_mod_func_int16_t_s_s(((((((safe_lshift_func_uint8_t_u_u((func_42(((g_627 == (g_2038 < l_2144)) & ((((!(func_46(((((safe_sub_func_int8_t_s_s(l_2153, l_2190)) || (func_33((0x86L >= g_5), l_2190, g_313, g_2034) >= l_2153)) && l_2073) , 2UL), g_282, g_789, g_988) > 0UL)) , l_2145) , l_2191) != l_2192)), l_2011, g_1677) | g_890), l_2121)) >= g_1677) < l_2190) , l_2063) , l_2190) < g_282), l_2153)) >= (-1L));
                    g_704 = g_1069;
                    return l_2110;
                }
                else
                {
                    short l_2196 = 0x045BL;
                    l_2196 = (safe_div_func_uint16_t_u_u(l_2057, l_2193));
                    l_2193 = func_38(((safe_add_func_int16_t_s_s(l_2147, (g_453 > (((safe_rshift_func_uint8_t_u_s((l_2196 | (-3L)), 7)) >= (g_2038 , ((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((((((-2L) > g_704) >= (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((65534UL > (g_512 , 65527UL)), g_1677)) || l_2196), 13))) , g_2034) < g_705) , 0xE694L), l_2193)), 10)) ^ l_2097))) , l_2196)))) , 0x458A8485L));
                }
                l_2072 = g_573;
            }
            if ((l_2173 && l_2062))
            {
                if (l_2087)
                {
                    unsigned l_2211 = 1UL;
                    const char l_2217 = 0xDDL;
                    for (l_2073 = (-25); (l_2073 >= (-22)); l_2073 = safe_add_func_uint32_t_u_u(l_2073, 1))
                    {
                        short l_2214 = (-1L);
                        const int l_2216 = 9L;
                        const unsigned char l_2218 = 0xD5L;
                        l_2214 = (l_2211 || (g_890 != (l_2121 < (safe_div_func_uint32_t_u_u(4294967288UL, g_473)))));
                        g_704 = ((l_2215 || (g_1883 && (l_2211 , (((l_2216 , g_282) | (g_2034 & (((g_512 >= (l_2217 ^ l_2214)) == g_705) , l_2218))) < g_890)))) , 0x8652DB26L);
                    }
                }
                else
                {
                    for (g_1883 = 1; (g_1883 != 2); g_1883++)
                    {
                        if (g_94)
                            break;
                    }
                }
            }
            else
            {
                l_2004 = g_453;
                l_2004 = ((((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((g_282 , ((+g_967) | ((!((safe_mod_func_int32_t_s_s(((safe_div_func_int8_t_s_s(g_699, (g_705 , (safe_lshift_func_uint8_t_u_u(248UL, 0))))) , (safe_rshift_func_uint8_t_u_u(((g_890 < func_42(l_2121, g_699, l_2147)) == g_704), 4))), 0x4935B511L)) > l_2020)) == 0L))), l_2235)), (-1L))), g_704)) & g_2236) | g_282) , l_2171);
            }
        }
        else
        {
            int l_2244 = 1L;
            unsigned short l_2255 = 65535UL;
            int l_2303 = 0x36F35BADL;
            short l_2333 = 0x88BEL;
            char l_2342 = 0xD1L;
            int l_2441 = 0xE5F7B361L;
            short l_2449 = 1L;
            short l_2498 = (-6L);
            short l_2526 = 0xE155L;
            if (g_573)
            {
                int l_2256 = 0L;
                short l_2292 = 0L;
                unsigned l_2305 = 4294967287UL;
                for (g_473 = (-24); (g_473 != 30); g_473 = safe_add_func_uint8_t_u_u(g_473, 5))
                {
                    unsigned l_2254 = 0x14DF17EDL;
                    char l_2283 = (-1L);
                    unsigned l_2314 = 1UL;
                    if (l_2057)
                    {
                        short l_2253 = 1L;
                        g_704 = ((((safe_div_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((((((safe_unary_minus_func_int32_t_s((l_2244 == (((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s((0xD8L <= ((l_2011 | ((0x88CDL ^ g_704) ^ g_453)) || (safe_add_func_uint8_t_u_u(0UL, l_2253)))), l_2253)), l_2244)), g_988)) && 0xE1A80228L) | l_2254)))) ^ 0x2D56L) != l_2255) , 1L) <= 0UL), g_189)) , g_512), 1L)) <= l_2253) <= g_189) | l_2256);
                        g_704 = g_2236;
                    }
                    else
                    {
                        int l_2259 = (-1L);
                        l_2259 = ((g_1074 != func_19(g_967, (func_46(g_1069, (safe_add_func_int16_t_s_s((func_46(l_2259, l_2037, (((safe_add_func_uint32_t_u_u(0xF5E48BD3L, (((g_313 > ((safe_div_func_uint8_t_u_u((g_2236 || (((safe_sub_func_uint16_t_u_u(l_2191, g_1722)) | 255UL) != l_2259)), 0x2FL)) && 65526UL)) & g_512) ^ l_2057))) || l_2255) && g_1922), l_2259) && (-7L)), l_4)), l_2254, g_189) == l_2255), g_1922, l_2254)) | g_453);
                        l_2259 = ((g_1883 <= (safe_rshift_func_uint16_t_u_s(g_1883, (g_2268 , (((g_101 >= (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint16_t_u_u(0x5617L, l_2244))))) && g_1074) , l_2256))))) ^ l_2256);
                        if (l_2259)
                            continue;
                    }
                    for (g_2236 = (-17); (g_2236 == 39); g_2236 = safe_add_func_int8_t_s_s(g_2236, 3))
                    {
                        int l_2278 = 0x3C21F62DL;
                        int l_2286 = 0xD66242D5L;
                        l_2072 = (safe_rshift_func_uint8_t_u_u((l_2173 , (((g_704 , ((((safe_sub_func_int16_t_s_s(g_2268, g_704)) , l_2278) , (safe_div_func_int16_t_s_s(l_2020, (((((func_24((((g_699 , ((safe_sub_func_uint32_t_u_u(0x35FD097FL, (g_94 != 0xBDL))) , l_2283)) || l_2173) , g_1883), g_473) , g_1722) > g_2236) | g_2034) | g_2236) | l_4)))) ^ l_2254)) <= g_705) & l_2278)), g_2034));
                        l_2286 = (safe_sub_func_uint8_t_u_u(g_1722, g_512));
                        if (l_2144)
                            goto lbl_2287;
                    }
                    for (g_94 = 0; (g_94 != 48); g_94 = safe_add_func_uint32_t_u_u(g_94, 5))
                    {
                        unsigned char l_2304 = 0UL;
                        g_704 = (safe_rshift_func_int8_t_s_u(l_2292, (g_1883 && (~(safe_lshift_func_int16_t_s_s((l_2255 <= (safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_704, ((g_313 < (-4L)) | (func_33((((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((g_705 == (g_2034 < (((l_2283 , l_2303) <= 0xF055E318L) , g_573))), 7)) < l_2145), l_2146)) , 0x38B1BA9FL) , l_2244), g_967, l_2304, g_2034) , l_2305)))), 0x56L))), 7))))));
                    }
                    if (l_2292)
                    {
                        short l_2315 = 0x6C46L;
                        l_2004 = (-8L);
                        g_704 = (~((g_573 || (safe_add_func_uint16_t_u_u(((g_627 < (!((((((safe_rshift_func_uint16_t_u_s((g_890 == (((0x25L < l_2283) , (0x2BL & ((safe_lshift_func_uint8_t_u_u(((((l_2215 < g_473) >= (((func_38(((l_2314 && l_2146) == l_2315)) && 0xA7046FB1L) , 1L) , g_789)) || l_2292) | (-1L)), g_988)) != (-1L)))) != l_2244)), l_2011)) , l_2255) > l_2303) & g_2236) , g_5) ^ l_2004))) && l_2244), g_2038))) < l_2292));
                        if (g_453)
                            goto lbl_2287;
                    }
                    else
                    {
                        unsigned l_2332 = 0x98389891L;
                        g_704 = (safe_lshift_func_uint8_t_u_s(((((l_2254 , (safe_add_func_uint8_t_u_u(248UL, (((g_905 , (func_42(g_2034, (((safe_sub_func_uint16_t_u_u(((((((0x8DL < (safe_lshift_func_uint8_t_u_s(((((!((safe_rshift_func_uint16_t_u_u((func_33(g_905, func_33(g_573, ((safe_lshift_func_int16_t_s_u((func_46(l_2255, ((safe_add_func_int32_t_s_s(((l_2330 & g_5) > 0xE2L), 1UL)) || (-4L)), l_2254, g_2331) & g_967), 0)) == g_1883), l_2305, g_453), g_573, g_789) , g_1722), l_2056)) & 0xFE5CC629L)) & 0x0F22L) , l_2292) , 8UL), 7))) ^ g_890) || l_2332) , (-2L)) , 5L) | g_704), 0L)) & 0xB6L) , l_2215), l_2256) , g_1074)) , g_453) && 0x68E9L)))) || g_1922) & 0x9A9079E7L) & l_2191), g_1260));
                    }
                }
                g_101 = 0x7DCA0572L;
                l_2333 = (-4L);
            }
            else
            {
                char l_2354 = 0L;
                int l_2370 = (-1L);
                char l_2377 = 0x41L;
                unsigned l_2395 = 0UL;
                if (l_2144)
                {
                    char l_2338 = 0x29L;
                    int l_2355 = 1L;
                    if ((safe_div_func_int8_t_s_s(g_573, ((((0x1ED3L & (((((safe_lshift_func_uint8_t_u_u(l_2004, ((((((((func_38(func_33(l_2338, g_2236, g_282, g_94)) || 65528UL) <= g_704) != l_2072) > g_573) < l_2338) >= g_1069) >= g_5) ^ g_1260))) | g_453) <= g_699) >= 0L) , l_2244)) , l_2004) ^ g_573) & 0x43L))))
                    {
                        unsigned l_2341 = 0x50174BE9L;
                        g_101 = ((safe_add_func_int32_t_s_s(0x85B1D310L, l_2341)) & (g_313 || 0x90BFAB35L));
                        return l_2342;
                    }
                    else
                    {
                        const char l_2347 = 0xD5L;
                        l_2355 = (safe_div_func_uint32_t_u_u(g_1922, func_14(g_2034, (safe_div_func_uint8_t_u_u(g_1922, ((func_27(func_14((0UL & (l_2347 <= (7UL >= (safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s((1UL >= l_2354), g_313)), l_2338)), g_453))))), g_2034, g_1069, g_705), g_705, l_2338, g_1922, l_2338) || g_967) & l_2347))), l_2338, l_2110)));
                        l_2072 = g_1922;
                        l_2370 = (safe_add_func_int32_t_s_s(l_2020, ((safe_lshift_func_uint16_t_u_s(func_33((func_14(g_1260, g_890, l_2347, (0xC0L != (safe_rshift_func_int8_t_s_s(0L, 0)))) , (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u(g_2038, 4294967292UL)) && g_2236) || 1L), l_2338)), g_573)), l_2255))), g_1260, g_1922, l_2347), g_1883)) && g_573)));
                        return l_2037;
                    }
                }
                else
                {
                    unsigned char l_2396 = 0x9BL;
                    int l_2400 = 0x27433FC0L;
                    g_704 = (((safe_rshift_func_int16_t_s_u(0L, 14)) || (g_705 || (g_101 || (-9L)))) , (safe_add_func_uint8_t_u_u(func_46(l_2370, (((safe_sub_func_int32_t_s_s(l_2146, ((-1L) == g_282))) && (l_2377 || l_2303)) , 4294967295UL), g_1074, g_890), g_189)));
                    g_2378 = g_1722;
                    if ((safe_mod_func_int8_t_s_s(l_2342, l_4)))
                    {
                        unsigned l_2385 = 4294967295UL;
                        l_2370 = (safe_add_func_int32_t_s_s((0x2CL <= (0UL != l_2385)), (((0x3FL != l_2073) == func_14(((safe_sub_func_uint8_t_u_u(g_789, (safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((l_2342 , g_2038), ((safe_unary_minus_func_int8_t_s((safe_div_func_uint8_t_u_u((g_1074 & g_789), 1L)))) , 0xEE86L))) >= l_2333), 7)))) && g_2331), l_2395, g_704, l_2396)) , l_2057)));
                    }
                    else
                    {
                        unsigned char l_2397 = 0xB2L;
                        l_2397 = l_2395;
                        l_2400 = ((safe_lshift_func_int8_t_s_s((func_42(((func_10(g_189) | 1UL) , 0x353779C8L), g_1922, (l_2397 , g_473)) && g_905), 4)) == g_905);
                    }
                }
                g_704 = (g_2038 < (func_33(g_705, ((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((0x356BC7A7L ^ g_704), l_2303)) | (safe_div_func_uint16_t_u_u(((((+g_1883) && (l_2354 ^ (safe_rshift_func_int8_t_s_u(l_2146, func_46(l_2412, l_2011, l_2244, g_2378))))) != g_789) >= g_2236), g_2268))), g_1722)))), l_2004)) && l_2303), g_1722, l_2303) < 0x7B3C0B4BL));
            }
            if ((safe_add_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((g_2268 , ((((l_2235 && (safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(l_2303, ((func_46(g_1722, ((func_27((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((func_14((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(1UL, (((0x33L || (-1L)) > (((l_2333 > g_1883) || l_2244) || 0UL)) & l_2063))), 1)), l_2255, g_2038, l_2004) & g_1922), 1L)), g_1677)), g_705, g_967, g_2331, g_905) >= l_2342) > g_2378), l_2303, g_967) & g_2429) , g_573))) , g_1074), 0xF3DCL))) | l_2244) , g_1722) ^ 1UL)), l_2303)) < l_2173) == l_2191), l_2244)))
            {
                return l_2056;
            }
            else
            {
                unsigned l_2442 = 4UL;
                int l_2474 = 0x4EAA1D5BL;
                for (g_1922 = 11; (g_1922 == 27); g_1922++)
                {
                    unsigned l_2443 = 0x9C36EB49L;
                    int l_2444 = 0x2DE057CFL;
                    if (g_2432)
                    {
                        l_2443 = (safe_div_func_uint16_t_u_u(1UL, (safe_div_func_uint16_t_u_u(2UL, (safe_sub_func_uint16_t_u_u((0x6D85L || 0x11AAL), (l_2173 , func_33((g_2432 , l_2144), ((func_14(l_2191, ((safe_lshift_func_int16_t_s_u(0L, l_2441)) < g_2034), l_2441, l_4) || 0x6DL) != l_2442), g_5, l_2171))))))));
                        l_2444 = g_2331;
                    }
                    else
                    {
                        unsigned short l_2459 = 0xC9F6L;
                        g_2450 = (safe_div_func_uint8_t_u_u((g_2331 < ((safe_add_func_uint32_t_u_u(func_14(g_453, g_101, (l_2449 == 0x281BE4A8L), g_1074), g_905)) & g_1722)), g_2432));
                        l_2461 = (~((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((((+g_627) , ((safe_div_func_uint16_t_u_u(0x3232L, 1L)) ^ (0x038E8AC3L != func_46(g_2268, g_704, g_2429, (((safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(4294967293UL)) & ((l_2459 && g_313) || 1UL)), l_2444)) | l_2144) == l_2444))))) >= g_282))), g_2460)) < 0UL));
                        l_2474 = func_10(((safe_div_func_uint16_t_u_u(65535UL, l_2442)) > ((func_33(l_2459, (((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(g_2429, (0x4AL && l_2442))), g_313)))), 9)) & (((((((func_46((safe_lshift_func_int8_t_s_u(func_19(func_46((~g_1677), func_33(l_2011, g_282, g_2038, g_2331), g_2460, g_699), g_988, g_967, l_2244), g_699)), l_2056, l_2442, l_2459) ^ 2UL) && g_2331) < (-10L)) ^ g_1260) , g_2450) > 65527UL) , l_2303)) ^ 6L), l_2473, l_2444) != g_2429) > g_1260)));
                        if (l_4)
                            break;
                    }
                    g_2479 = ((safe_rshift_func_int8_t_s_u(((+l_2444) , g_1069), ((6L || (((0x582A2F81L <= ((l_2474 , g_890) ^ (safe_lshift_func_uint8_t_u_s(((~g_2479) > ((((safe_rshift_func_uint16_t_u_s((((safe_add_func_int16_t_s_s(0x52FEL, l_2110)) ^ 0x7FF03CA6L) , 0x82DDL), g_967)) | l_2443) , 4294967294UL) , g_2034)), 1)))) == 0xB873L) >= g_512)) & g_1883))) && g_905);
                }
                l_2461 = (g_2484 > l_2144);
            }
            if ((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_2038, func_46(l_2004, ((func_27(g_282, l_2235, l_2011, func_33((safe_div_func_int8_t_s_s((-1L), g_2450)), l_2491, g_789, g_2331), l_2171) | (-5L)) != (-5L)), g_2331, g_967))), (-1L))))
            {
                l_2004 = (safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((0UL < (safe_mod_func_int8_t_s_s(l_2342, l_2498))) < l_4), 0xAAL)), l_2056));
                g_704 = (l_2255 >= 0xF6ECL);
                l_2072 = (safe_lshift_func_uint16_t_u_s(65532UL, 11));
                g_704 = l_2333;
            }
            else
            {
                short l_2503 = 1L;
                int l_2527 = 0x288FC92FL;
                l_2072 = func_42((l_2491 , (safe_lshift_func_int8_t_s_u(g_627, 7))), (g_282 , g_967), l_2503);
                for (g_94 = 0; (g_94 == 53); g_94 = safe_add_func_int8_t_s_s(g_94, 7))
                {
                    unsigned l_2515 = 1UL;
                    for (g_2479 = 21; (g_2479 < 24); g_2479++)
                    {
                        int l_2512 = 1L;
                        l_2072 = func_33(g_705, l_2473, func_33((((((safe_div_func_uint32_t_u_u(g_905, ((((safe_add_func_int16_t_s_s((((l_2512 & g_1677) < func_33(((safe_rshift_func_int16_t_s_s((g_1074 , (-1L)), 10)) < ((-5L) <= (g_189 && 0x3A87L))), l_2215, g_1883, l_2515)) & l_2171), l_2515)) & g_2331) & g_705) && l_2498))) < 1L) && 0x0E2B83C8L) >= l_2145) , 0x936D08CEL), g_2034, l_2515, l_2512), l_2449);
                        g_704 = l_2057;
                    }
                }
                l_2004 = 0L;
                l_2527 = func_42(l_2503, (((safe_mod_func_uint32_t_u_u(l_2056, (((((((-10L) <= (safe_rshift_func_uint8_t_u_u(l_2171, 4))) , (safe_sub_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((((-1L) && ((0xA0C49780L < ((safe_lshift_func_uint8_t_u_s(((l_2503 <= 0xCE43AFDFL) == (g_2432 , g_890)), 7)) , 7UL)) >= l_2503)) | 0x11L), l_2097)) , 0x0B409924L), (-10L)))) || g_627) & l_2072) , l_2526) | l_2461))) ^ l_2473) >= 4294967293UL), l_2342);
            }
        }
        for (g_1722 = 6; (g_1722 == 55); g_1722 = safe_add_func_int16_t_s_s(g_1722, 7))
        {
            int l_2552 = 1L;
            short l_2644 = 1L;
            unsigned char l_2652 = 0x6DL;
            const unsigned l_2735 = 4294967290UL;
            if (func_33(g_627, g_1922, g_313, l_2491))
            {
                unsigned l_2541 = 0xFCD760E6L;
                const unsigned char l_2563 = 0x23L;
                unsigned short l_2596 = 65531UL;
                if ((func_38(g_2331) < (l_2056 == ((safe_add_func_uint32_t_u_u((0x1FL <= (safe_mod_func_int32_t_s_s((g_1074 , (g_988 & ((safe_rshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((!(safe_unary_minus_func_uint32_t_u((((!((safe_rshift_func_uint16_t_u_u(l_2004, ((4294967286UL && g_2331) , 0x4334L))) & l_2541)) , g_1677) > g_704)))), 3UL)) , 65534UL), 15)) >= 0xC6L))), l_2037))), 0x3D2B2048L)) && l_2541))))
                {
                    const unsigned l_2549 = 6UL;
                    g_2479 = ((((((246UL != ((+func_27(g_704, (l_2541 && ((safe_lshift_func_uint8_t_u_s((func_27((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_2548, l_2549)), (safe_sub_func_uint16_t_u_u(g_2432, 65531UL)))), l_2412, ((g_890 , l_2063) | g_453), l_2004, g_453) , 0x1EL), g_905)) , l_2191)), l_2541, g_890, g_2331)) != 1L)) , g_1260) == l_2552) & g_2034) , g_1260) , 0xED687D6EL);
                    for (l_2056 = (-21); (l_2056 <= 26); l_2056++)
                    {
                        int l_2576 = 0xB174D49FL;
                        g_2479 = (-1L);
                        l_2004 = (g_573 > (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((((safe_sub_func_int32_t_s_s((l_2563 , 0L), ((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_2473, ((func_33(l_2549, (g_313 || (safe_lshift_func_uint16_t_u_u((func_19(l_2235, (safe_rshift_func_uint16_t_u_s(((((l_2552 ^ (((safe_div_func_int32_t_s_s(0x30D23835L, g_2479)) ^ g_1922) >= g_1922)) != g_699) , g_2484) < 0xAF94C6ABL), g_282)), g_1074, g_627) & l_2576), 11))), g_699, g_573) > g_2331) >= l_2549))), 1)) ^ g_699))) != g_2331) , (-4L)) > g_453), 0xF4ECAE4BL)), 0x56L)), l_2063)));
                    }
                }
                else
                {
                    unsigned l_2583 = 0x0F1C5B08L;
                    int l_2584 = 0xBE1203D0L;
                    unsigned l_2641 = 4294967295UL;
                    g_2577 = l_2171;
                    l_2584 = (((((g_2268 <= l_2552) , func_24(l_2552, l_2578)) == g_2331) , (safe_add_func_int32_t_s_s(0x25AB4417L, ((safe_div_func_uint32_t_u_u((g_2450 < (l_2330 , l_2583)), g_189)) > g_988)))) < g_2236);
                    if (func_38((l_2563 | g_627)))
                    {
                        g_2597 = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_94, ((safe_mod_func_uint16_t_u_u(func_19((safe_unary_minus_func_int32_t_s(func_33(((((g_2484 > l_2594) < (255UL <= 0xAEL)) , (l_2541 & l_2583)) || (g_313 <= l_2595)), g_2034, l_2596, g_573))), g_627, g_282, g_573), l_2552)) ^ l_2552))), 13));
                        l_2072 = (safe_sub_func_uint16_t_u_u((func_38(g_2034) > (safe_sub_func_int32_t_s_s(((+l_2552) ^ ((((safe_rshift_func_uint8_t_u_u((7UL != (safe_lshift_func_uint16_t_u_s(g_2479, 7))), 6)) ^ ((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((g_988 && ((safe_rshift_func_uint8_t_u_u(0UL, 1)) > g_453)) | (3UL || 4294967295UL)), g_1677)), 1L)) , 0xAC6AL)) , l_2473) , g_2429)), g_967))), 0xFEA4L));
                        return g_2378;
                    }
                    else
                    {
                        unsigned l_2623 = 4294967295UL;
                        g_704 = (safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s((l_2584 , 0x0BL), (safe_rshift_func_int8_t_s_u(((g_988 , (safe_mod_func_int16_t_s_s(l_2552, ((safe_sub_func_uint8_t_u_u((g_627 > (safe_unary_minus_func_int16_t_s(0x4812L))), 0x1FL)) ^ l_2623)))) ^ (l_2552 , g_2236)), 5)))), g_1260));
                        l_2072 = func_27((safe_lshift_func_int8_t_s_s((((!(0x70E63E7FL ^ (safe_sub_func_uint8_t_u_u(func_38((l_2552 == ((safe_lshift_func_uint16_t_u_s((0x15125C96L ^ (l_2596 , (l_2583 == ((g_699 <= (safe_div_func_int32_t_s_s((((safe_mod_func_int32_t_s_s(func_19((g_94 , g_512), (((((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s(func_33((g_988 , l_2640), l_2552, l_2623, g_94), l_2020)) || 1UL), 3)) >= l_2583) && 0xCEL) && g_1922) < g_5), g_905, l_2011), g_282)) & (-7L)) <= 0L), l_2330))) < 0L)))), 0)) , 65535UL))), l_2563)))) && l_2552) , l_2552), 4)), g_2268, g_890, g_2378, g_705);
                    }
                    return l_2641;
                }
            }
            else
            {
                unsigned l_2651 = 4294967289UL;
                int l_2699 = 0x93ACDC06L;
                if ((((!((safe_mod_func_uint32_t_u_u((l_2644 == 0xB60BL), (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(l_2110, g_2331)), (safe_add_func_int8_t_s_s(0L, l_2651)))))) <= (func_27(l_2652, g_967, g_2038, l_2651, l_2191) || 0xA3306AC0L))) && 0xC4L) <= l_2330))
                {
                    unsigned l_2666 = 0xD3F13B24L;
                    for (g_704 = 17; (g_704 < 29); g_704 = safe_add_func_uint32_t_u_u(g_704, 6))
                    {
                        if (g_2577)
                            break;
                    }
                    for (g_2479 = 0; (g_2479 != 28); g_2479++)
                    {
                        int l_2662 = 0x0E58014DL;
                        g_704 = ((func_42(l_4, (safe_div_func_uint16_t_u_u(l_2659, (((((safe_add_func_uint32_t_u_u(0UL, (l_2662 , (g_627 , l_2663)))) , (safe_add_func_uint16_t_u_u(func_27(((l_2461 ^ (func_27(l_2666, (l_2652 && 0x3C54L), g_905, l_2652, g_2597) ^ 4294967294UL)) || l_2666), l_2651, l_2578, g_2236, g_2450), 0xFACCL))) & (-1L)) | l_2552) & 4L))), g_573) && g_2429) , (-1L));
                        g_2577 = g_453;
                        g_704 = l_2666;
                        g_2577 = (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_2473, l_2651)), (((l_2215 || ((safe_add_func_uint8_t_u_u(((-1L) | (safe_mod_func_int8_t_s_s(l_2191, 0xB6L))), (+255UL))) >= ((-2L) ^ l_2677))) , l_2663) <= l_2173)));
                    }
                    if (g_2450)
                    {
                        return l_2552;
                    }
                    else
                    {
                        int l_2697 = 4L;
                        unsigned l_2698 = 0xBD634338L;
                        l_2699 = (((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(func_10((safe_rshift_func_int16_t_s_s(g_2268, ((g_2378 <= (safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_u(0xF5CCL, 0))))) , 0xC9CDL)))), (~((l_2651 == (((safe_mod_func_int16_t_s_s(0x06ECL, (safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((g_2460 == (!(((l_2594 || l_2651) != l_2697) , g_2484))), 0xE1L)), 6)) <= 0x14F8L) , g_2268), g_2450)), 65531UL)))) , g_2597) < 0L)) & l_2698)))), g_2597)) && l_2651) >= l_2057);
                        g_2577 = g_1260;
                    }
                }
                else
                {
                    if (g_5)
                        break;
                }
            }
            g_2479 = (((l_2063 , (0x19L ^ 246UL)) | (safe_lshift_func_uint16_t_u_s((g_988 , ((func_33(l_2644, g_473, ((1UL | g_2597) , func_46(g_1260, l_2004, l_2548, l_2073)), l_2677) == g_2331) == g_1069)), 5))) | l_2578);
            for (l_2594 = 13; (l_2594 < 17); l_2594 = safe_add_func_int8_t_s_s(l_2594, 2))
            {
                unsigned l_2706 = 0x7B961B02L;
                int l_2734 = 1L;
                int l_2785 = 1L;
                l_2004 = (safe_rshift_func_int16_t_s_u(l_2706, g_2460));
                if ((65527UL || (safe_sub_func_uint32_t_u_u((((g_2268 > (l_2709 != (((safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_s(l_2056, (g_2450 , ((func_33(l_2706, g_890, l_2706, (l_2706 & l_2706)) || l_2191) > l_2011)))))) | 0x4AC8L) , g_101))) != g_2236) , l_2552), 4294967288UL))))
                {
                    unsigned l_2720 = 0x8D7443B6L;
                    l_2461 = (((g_890 >= 1UL) != (0x4093L || (!l_2706))) == func_19(l_2644, (l_2713 ^ 5UL), (safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(func_33(((safe_rshift_func_uint16_t_u_s(func_42(g_282, l_2720, g_967), l_2595)) < 0L), g_1677, l_2720, g_699), l_2145)), 2UL)), l_2235));
                }
                else
                {
                    unsigned char l_2733 = 255UL;
                    g_2479 = ((safe_add_func_int8_t_s_s(g_967, (((l_2706 ^ 0xA65931E2L) <= g_905) && g_94))) | (safe_rshift_func_int8_t_s_u(g_704, 2)));
                    l_2072 = ((l_2552 != (safe_mod_func_uint8_t_u_u(g_5, (~((((~(func_27(g_101, g_512, (g_573 , ((!(~(safe_mod_func_uint16_t_u_u(((-7L) >= (safe_lshift_func_uint16_t_u_s(g_2577, l_2552))), ((safe_lshift_func_uint8_t_u_u(l_2706, g_473)) || l_2146))))) , l_2733)), g_2450, l_2734) | l_2734)) && l_2735) , 6UL) <= g_988))))) > g_967);
                    if ((g_2378 | (safe_rshift_func_uint8_t_u_s(0x69L, 7))))
                    {
                        int l_2757 = (-7L);
                        unsigned l_2758 = 1UL;
                        g_2479 = g_2450;
                        g_2577 = (g_2597 && (safe_add_func_uint16_t_u_u(g_2460, l_2733)));
                        g_2577 = (safe_sub_func_int32_t_s_s(((func_24(l_2742, (safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(l_2056, (l_2412 , ((g_890 != (g_189 > (((0x3159L & (safe_div_func_int16_t_s_s((((safe_mod_func_int32_t_s_s(((((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_2733 != (safe_lshift_func_int16_t_s_u((g_1922 == (0x75L <= l_2757)), g_573))), l_2733)), 0xF680L)) & l_2072) , g_2479) <= g_627), 0xDC8CB626L)) , 0xE0L) ^ g_1069), 1L))) , l_2735) & 4294967293UL))) , l_2734)))), 1L))) , 0x9DL) == l_2758), l_2759));
                        g_101 = (((g_2432 || g_967) > (-9L)) | g_890);
                    }
                    else
                    {
                        char l_2762 = 0x9FL;
                        l_2552 = (safe_mod_func_uint16_t_u_u((l_2491 | (l_2762 >= (safe_div_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u((l_2767 , 65535UL), 0x255DL)) >= (((((safe_rshift_func_int16_t_s_s(((l_2552 < g_905) , l_2770), 15)) , (0xC2A4L | 0L)) >= g_2268) & g_988) | g_101)) || l_2709), g_1677)))), 0xA13AL));
                    }
                    g_2577 = g_313;
                }
                l_2785 = (safe_add_func_int8_t_s_s((func_14(g_1922, (((safe_sub_func_uint8_t_u_u(func_10((l_2644 | (((g_2479 | (+g_2378)) , g_789) <= (safe_add_func_uint16_t_u_u(func_27((((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((l_2073 & (g_2460 < (g_2378 >= (safe_lshift_func_int8_t_s_u(g_282, g_2268))))) ^ 1L), 6UL)), 10)) , l_2644) > g_2268), g_789, l_2663, g_2450, g_699), l_2173))))), g_1260)) && 0x0BL) || g_2479), l_2578, g_967) < 1UL), g_473));
                l_2785 = (safe_rshift_func_int8_t_s_s(g_94, 3));
            }
        }
        l_2072 = (safe_add_func_uint32_t_u_u(g_573, func_46(l_2770, l_2056, l_2146, (safe_mod_func_int32_t_s_s((((((((func_19((safe_sub_func_int8_t_s_s(((0xA337A70DL || 0x771FA591L) > (g_2577 ^ l_2004)), (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(func_33(g_2378, g_704, l_2072, l_4), 0x531BA182L)), g_1260)))), l_2709, l_2330, g_2331) <= 0xB7E7L) , 0x2419L) != 1UL) ^ 0x6CB8EF78L) <= l_2770) , g_94) ^ 0x13A3L), g_2038)))));
    }
    return g_705;
}







static char func_10(unsigned p_11)
{
    int l_1848 = 1L;
    unsigned l_1868 = 0x84CE7D0BL;
    short l_1904 = 0x8A66L;
    int l_1905 = 0x52967EB8L;
lbl_1978:
    if (l_1848)
    {
        unsigned l_1849 = 1UL;
        const unsigned short l_1871 = 0x1E80L;
        int l_1890 = 0xC31AB49AL;
        unsigned l_1892 = 0x61BFB286L;
        l_1849 = (0x40E84A73L == p_11);
        if ((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((0x800B26AEL <= ((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s(l_1848, g_1677)) < ((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(g_988, (g_5 > func_42(l_1848, (safe_lshift_func_uint8_t_u_u(p_11, (safe_lshift_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(l_1849, (1UL > 1UL))) > (-1L)) , g_473), l_1849)))), p_11)))) , p_11), g_189)) <= 0xCC23CF65L)), 3)) && p_11)), 1L)), l_1849)))
        {
            const unsigned l_1882 = 0xAACF4FDCL;
            g_704 = (l_1868 | (((((-1L) ^ 1UL) >= g_988) ^ (safe_div_func_int32_t_s_s(func_46(l_1849, l_1871, (g_573 || g_573), (((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(p_11, p_11)), p_11)) & g_101) , p_11)), p_11))) , 249UL));
            l_1848 = ((+g_967) & (safe_lshift_func_uint16_t_u_s((func_19(p_11, ((safe_lshift_func_int16_t_s_s(g_473, 8)) | p_11), ((((~(6L <= ((((safe_add_func_uint16_t_u_u(func_42(g_512, p_11, func_33(((l_1849 || ((((l_1882 > (-6L)) ^ 4294967289UL) , l_1848) ^ 1L)) < g_1883), g_189, l_1868, p_11)), g_1074)) , 0x27A2F1B7L) , 3L) || 0xB9F8B068L))) , p_11) == 0x06L) , 0x466EL), p_11) && p_11), 0)));
        }
        else
        {
            unsigned l_1886 = 0xB29A2838L;
            int l_1887 = 0xDB59B386L;
lbl_1891:
            l_1887 = ((safe_mod_func_uint16_t_u_u(p_11, g_890)) == (((l_1886 , 0xB31DBBA8L) <= l_1886) || 251UL));
            for (g_789 = (-15); (g_789 == 22); ++g_789)
            {
                l_1890 = g_1677;
                if (g_1677)
                    goto lbl_1891;
            }
        }
        l_1848 = l_1892;
    }
    else
    {
        short l_1897 = 0xE12BL;
        g_704 = (((0L | (safe_rshift_func_uint16_t_u_s(((((safe_add_func_int16_t_s_s(((l_1897 > (safe_rshift_func_int16_t_s_u((0x3A15869BL == (((safe_lshift_func_uint8_t_u_u((p_11 == (+(p_11 && ((func_46((g_1883 , 0x4D22L), p_11, (safe_mod_func_uint32_t_u_u(((p_11 ^ 0x79DAL) , 5UL), l_1868)), p_11) ^ p_11) ^ l_1868)))), 5)) | l_1904) <= g_890)), 0))) != g_905), l_1905)) && p_11) == l_1848) || 0x705AL), l_1905))) && g_453) | 0UL);
        g_101 = p_11;
        g_101 = ((l_1868 & (255UL > 0x49L)) == g_5);
    }
    for (p_11 = (-9); (p_11 < 46); p_11 = safe_add_func_uint32_t_u_u(p_11, 5))
    {
        int l_1936 = 0L;
        unsigned l_1960 = 4294967295UL;
        if (g_313)
        {
            unsigned short l_1923 = 65535UL;
            g_704 = (((((((safe_add_func_int32_t_s_s(func_46((safe_mod_func_int8_t_s_s(0x79L, (safe_mod_func_uint16_t_u_u((~g_573), p_11)))), g_101, (safe_rshift_func_int8_t_s_u((p_11 || (l_1868 || (((safe_rshift_func_int8_t_s_u((~(safe_sub_func_uint16_t_u_u((p_11 ^ ((safe_add_func_uint32_t_u_u(g_1922, (g_627 ^ 0UL))) | 1UL)), p_11))), 1)) <= l_1923) , p_11))), p_11)), p_11), 0x92F53044L)) , 0UL) && p_11) , 4294967295UL) , 0UL) && p_11) == g_967);
        }
        else
        {
            unsigned l_1935 = 4294967295UL;
            int l_1937 = 0x25AD6A06L;
            l_1937 = (g_699 <= ((0x8703254EL && (p_11 > (((((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(g_1074, ((safe_unary_minus_func_int32_t_s((((0L > func_19(p_11, (((safe_div_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s(p_11, (g_512 == g_573))) , l_1935) < l_1936), 255UL)) , g_1677), 65535UL)) != 65535UL) > 0xD2543EE7L), p_11, p_11)) >= 2UL) || (-5L)))) , 0x00L))), 3)) | l_1905) < 4294967292UL) , 0x3CACL) != p_11) & p_11) ^ 0x3101L))) ^ l_1904));
            if (func_14(g_1069, l_1936, g_627, ((((0L & g_705) ^ ((((((((safe_mod_func_int8_t_s_s(l_1936, (safe_lshift_func_uint8_t_u_u(g_1260, 1)))) || ((safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((3L > (safe_add_func_uint16_t_u_u((l_1937 ^ g_905), p_11))) || l_1848), p_11)) && 0x0CL), g_1069)) & (-1L))) == g_189) ^ 0x1BL) == p_11) , (-6L)) >= p_11) | p_11)) >= 0x6106L) & l_1905)))
            {
                unsigned char l_1972 = 0x47L;
                char l_1973 = 0x4DL;
                g_101 = 0x66991E1BL;
                for (g_512 = 25; (g_512 > 4); g_512--)
                {
                    l_1848 = g_573;
                }
                for (g_1883 = 25; (g_1883 != 17); g_1883 = safe_sub_func_uint8_t_u_u(g_1883, 8))
                {
                    unsigned short l_1961 = 1UL;
                    l_1961 = (safe_add_func_uint32_t_u_u((l_1936 >= (g_705 > (safe_sub_func_uint16_t_u_u(((((((p_11 && (g_189 <= 0x45L)) | 0xE6FEL) > (p_11 | (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(g_967, ((g_313 || (-2L)) & l_1936))), l_1936)))) && p_11) ^ p_11) ^ p_11), (-10L))))), l_1960));
                    l_1973 = (safe_div_func_int8_t_s_s((g_282 & func_33(g_705, (safe_rshift_func_int8_t_s_u((8L | (g_627 != (((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_11, (((p_11 <= (safe_lshift_func_uint8_t_u_u((!4UL), p_11))) ^ (((4L && 1L) >= (-6L)) & g_1074)) || 0x5DL))), l_1972)) <= g_704) < 0xB60612C9L))), 7)), l_1961, g_627)), 1L));
                    return g_1677;
                }
            }
            else
            {
                for (l_1937 = (-2); (l_1937 <= 20); ++l_1937)
                {
                    char l_1990 = 0xD8L;
                    int l_1992 = 0xA968D9B9L;
                    for (g_988 = 11; (g_988 < 27); ++g_988)
                    {
                        unsigned l_1985 = 0x83AECA0EL;
                        unsigned l_1991 = 0x8309FB91L;
                        g_101 = p_11;
                        if (l_1848)
                            goto lbl_1978;
                        g_101 = (safe_lshift_func_uint16_t_u_s(((0xBBL > l_1905) == (((safe_div_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((l_1985 , (safe_div_func_int32_t_s_s((l_1985 <= (248UL >= 255UL)), ((safe_div_func_uint16_t_u_u((g_699 & ((1L || (((l_1990 >= g_988) & g_94) >= g_967)) || 246UL)), g_1074)) | l_1990)))), l_1991)) , p_11), g_5)) , p_11) , 1UL)), p_11));
                        l_1992 = g_94;
                    }
                }
            }
            g_101 = p_11;
            if (l_1935)
            {
                unsigned l_2003 = 0x1AEBA680L;
                l_1905 = func_33(g_473, g_1722, ((((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((l_1905 && p_11), ((safe_div_func_uint8_t_u_u(((g_473 >= ((1UL >= (g_1922 ^ p_11)) < ((safe_mod_func_uint8_t_u_u((g_789 <= g_905), l_2003)) >= p_11))) <= g_890), l_1960)) | p_11))), p_11)) && l_1936) , g_967) && l_1936), p_11);
                return g_705;
            }
            else
            {
                return g_512;
            }
        }
    }
    return g_512;
}







static unsigned short func_14(unsigned p_15, int p_16, short p_17, short p_18)
{
    int l_51 = 1L;
    unsigned short l_420 = 0x74CEL;
    short l_421 = (-1L);
    unsigned l_1820 = 7UL;
    p_16 = ((func_19(g_5, ((func_24(p_18, (g_5 , (((func_27((func_33((g_5 != (((func_38(((func_42(((func_46(p_17, g_5, l_51, (safe_rshift_func_uint8_t_u_u(g_5, ((0x60L & g_5) <= g_5)))) || g_101) && (-1L)), g_189, l_51) || l_51) >= 0L)) && l_420) | 0UL) || p_18)), l_421, p_15, g_189) , g_5), l_420, l_420, g_5, p_15) > 0xCEA9L) || g_704) , g_473))) || 0xD6L) >= 1L), l_1820, l_420) & 0xC1L) & p_18);
    p_16 = g_5;
    return g_704;
}







static unsigned char func_19(const char p_20, short p_21, short p_22, unsigned p_23)
{
    unsigned l_1821 = 2UL;
    unsigned char l_1828 = 0xD4L;
    int l_1837 = (-4L);
    const unsigned l_1844 = 4294967295UL;
    g_704 = (((l_1821 > 0xADA6L) , (safe_add_func_int8_t_s_s(p_23, ((safe_add_func_uint32_t_u_u((249UL & ((safe_div_func_uint8_t_u_u(l_1828, (l_1821 ^ (~0L)))) , ((safe_lshift_func_int16_t_s_s(l_1821, 10)) == (safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((func_33(g_699, g_1722, l_1828, g_1677) > 0x34L), 1UL)), l_1821))))), 0L)) < l_1837)))) | 0xE7L);
    for (g_512 = 0; (g_512 > 28); ++g_512)
    {
        unsigned char l_1845 = 255UL;
        for (p_21 = 0; (p_21 < (-16)); p_21--)
        {
            return g_282;
        }
        g_704 = ((g_5 | func_33(g_189, (((safe_div_func_int32_t_s_s((p_23 , ((((+l_1844) ^ ((((l_1821 > 65534UL) || (l_1845 < (g_453 | (safe_rshift_func_uint16_t_u_s((+((p_20 != p_20) && p_23)), l_1821))))) != g_5) == g_5)) < l_1844) , (-5L))), 9L)) | l_1844) <= 0xBC1F029DL), l_1845, l_1844)) & g_890);
    }
    return p_20;
}







static const unsigned char func_24(char p_25, unsigned p_26)
{
    const unsigned short l_711 = 0xA2E8L;
    unsigned l_722 = 0xD19D0CDDL;
    short l_723 = 0x0031L;
    unsigned l_764 = 4294967289UL;
    unsigned l_774 = 0xBB103985L;
    char l_796 = 0x8EL;
    int l_838 = 1L;
    unsigned l_889 = 0x93FDF620L;
    unsigned l_910 = 0x73A06C0DL;
    char l_940 = 0L;
    char l_958 = 0x47L;
    int l_1226 = 0x00E0F9A6L;
    const unsigned char l_1237 = 255UL;
    unsigned char l_1261 = 252UL;
    char l_1485 = (-4L);
    unsigned l_1511 = 0x3D6C913FL;
    int l_1616 = 1L;
    unsigned l_1692 = 0xC1F3105EL;
    int l_1695 = (-1L);
    const char l_1739 = 0x00L;
    unsigned short l_1740 = 65533UL;
    unsigned short l_1810 = 0x8CC6L;
lbl_798:
    g_704 = (p_26 , (((p_26 & (((func_42((g_705 , (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint8_t_u(l_711)), (l_711 > (((safe_sub_func_int16_t_s_s((func_33(p_25, (p_25 , (((safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(func_33(((((l_711 || (((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((func_33((l_711 , g_189), p_26, g_573, g_473) < g_5) != g_5), l_722)) < 2L), p_25)) >= p_26) ^ g_189)) , 0x0C793F05L) != l_722) , g_704), p_25, l_711, g_5), 6)) , p_25), g_627)) == g_313) ^ 0L)), p_25, l_722) <= p_26), g_5)) , 65535UL) || g_313)))), 12)) == 0xB027L) , g_512)), g_704, l_711) <= p_25) | l_711) || g_313)) && l_723) & (-8L)));
lbl_942:
    for (g_512 = 0; (g_512 == 49); g_512 = safe_add_func_int16_t_s_s(g_512, 1))
    {
        const char l_737 = (-1L);
        const short l_752 = 8L;
        int l_753 = 0x56AC0362L;
        short l_817 = (-5L);
        l_753 = (safe_sub_func_uint16_t_u_u((g_573 , (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((((((safe_sub_func_uint8_t_u_u(((g_627 , (~(safe_unary_minus_func_uint16_t_u((1UL <= l_737))))) && (~(safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((g_699 || (((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_737 > (safe_add_func_uint8_t_u_u(0x88L, l_752))), l_752)), g_704)) && 0L) && l_722)) ^ g_573) <= (-8L)) , (-7L)), 5)), 65529UL)) <= l_722) | 8L) != g_282), g_189)), 7)))), 0x7BL)) == g_473) <= l_711) | g_573) < 0x7F44L) != g_627) > p_25), g_94)), p_25)), 248UL))), g_101));
        for (g_627 = (-11); (g_627 >= 22); ++g_627)
        {
            short l_765 = 0xD6BAL;
            const unsigned short l_788 = 0x1763L;
            int l_797 = 0L;
            const int l_814 = (-1L);
            int l_850 = 0x3B5434D4L;
            if (p_26)
            {
                const short l_818 = 0x8238L;
                if (((safe_mul_func_uint8_t_u_u(0x7FL, 0UL)) & (((safe_rshift_func_uint8_t_u_s((func_33(l_752, ((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(l_737, func_38(l_722))), 5)) < ((((((g_705 , g_473) | l_752) , 0UL) ^ p_26) , l_764) >= 255UL)), g_5, g_189) < g_573), l_765)) , p_25) , g_5)))
                {
                    const unsigned l_783 = 0x232DBBB2L;
                    l_753 = (safe_rshift_func_uint8_t_u_s((g_313 <= ((safe_add_func_int16_t_s_s((p_26 , (safe_rshift_func_uint16_t_u_u(func_33(p_25, p_26, g_282, (safe_add_func_int16_t_s_s(p_26, ((1UL <= func_33(g_94, (0x8FL < g_704), l_774, g_282)) >= 250UL)))), 14))), g_453)) != g_699)), 5));
                    if (p_26)
                        continue;
                    g_789 = (safe_add_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((l_783 != ((g_699 , (((safe_rshift_func_uint8_t_u_s((func_33(p_26, l_737, l_765, (((safe_lshift_func_int8_t_s_u((((((l_783 & p_26) & l_753) & p_26) , g_705) >= l_788), g_282)) , 0xC4L) != 250UL)) < p_25), 7)) & p_26) > 1UL)) < l_783)) == 4294967295UL), l_711)), 0x6A90L)) | l_783) >= g_573), g_453));
                }
                else
                {
                    unsigned l_822 = 4294967295UL;
                    int l_825 = 0L;
                    if (func_42(l_774, p_25, (((!(g_189 , ((safe_mod_func_int32_t_s_s(func_42(p_26, (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((g_627 ^ g_453), func_42(p_26, p_26, ((func_33((0xF4C48109L == p_26), g_512, g_573, l_788) < l_765) & l_711)))), 0x3CC8L)), l_752), l_711)) ^ 4294967295UL))) < l_796) <= p_25)))
                    {
                        if (l_753)
                            break;
                        l_797 = 0L;
                    }
                    else
                    {
                        const char l_803 = (-1L);
                        int l_819 = 0x38E1BC56L;
                        if (g_573)
                            goto lbl_798;
                        g_101 = ((g_573 == ((((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_26, (0xFBF7L ^ l_796))), g_573)) ^ l_774) <= l_803) , (safe_sub_func_uint16_t_u_u(g_189, (g_94 && g_5))))) , g_189);
                        l_819 = ((0xF5L < ((p_25 <= (safe_div_func_int8_t_s_s((l_764 > ((safe_lshift_func_int16_t_s_s((((~(safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(65535UL, g_453)), (func_46(l_803, l_814, ((safe_lshift_func_int8_t_s_s(p_26, 5)) , l_817), p_25) > p_26)))) == 6L) ^ 0xEC486238L), 0)) , l_818)), g_705))) & p_25)) || g_704);
                        l_825 = (safe_lshift_func_int16_t_s_s(l_822, (safe_add_func_int8_t_s_s(g_627, l_822))));
                    }
                    if (g_5)
                        continue;
                }
                l_797 = func_38((safe_div_func_int16_t_s_s(l_818, ((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0xA0L, (safe_lshift_func_uint8_t_u_u(l_737, l_818)))), (safe_rshift_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u(g_473, p_25)) , (p_26 <= l_765)) & (g_705 > 0L)) == l_788), l_797)))) || p_26))));
            }
            else
            {
                const unsigned l_843 = 0xFD5780B1L;
                l_838 = 0x338DB1F7L;
                if (func_38(((+(safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((g_699 > (func_46(p_26, l_843, func_38((((l_752 <= (((g_5 && 4294967295UL) && (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(l_843, (safe_add_func_uint32_t_u_u(p_25, g_5)))) , p_26), l_764))) > 8L)) | 0UL) & l_843)), p_25) >= p_25)), g_512)), 0x8EAEC340L))) != l_850)))
                {
                    g_101 = (safe_add_func_uint16_t_u_u(((!(g_453 , 0UL)) , (0x18L >= g_5)), (((safe_mod_func_int8_t_s_s((g_313 == (((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((p_26 && ((safe_rshift_func_uint16_t_u_s(((g_282 || (g_189 < (p_26 >= l_711))) , 0x4556L), 15)) , p_26)), (-1L))), 7)), p_26)) | 2UL) , 65535UL)), 0x1DL)) != 0L) & g_627)));
                }
                else
                {
                    unsigned short l_869 = 0x41B8L;
                    l_753 = ((safe_sub_func_uint16_t_u_u(l_711, l_752)) <= ((l_723 != ((safe_div_func_int16_t_s_s(g_573, (l_869 , (safe_unary_minus_func_uint8_t_u(((safe_sub_func_int16_t_s_s(((l_752 & ((l_843 , (safe_div_func_uint16_t_u_u(0xA6A0L, 1UL))) < p_26)) , p_26), p_25)) , 255UL)))))) == 1L)) < 0L));
                    g_890 = (safe_add_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(g_512, (((l_737 & 0x3D68L) | g_705) && (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(func_46((l_753 < l_843), g_627, (((safe_sub_func_int16_t_s_s(((((p_25 > p_26) && 0xC41DL) == g_705) , g_512), p_25)) < g_313) , (-8L)), p_26), l_889)), g_282)) ^ p_25) && p_26) && p_25) , g_512), l_838)), g_573))))) > g_573) , p_25), p_25));
                }
            }
            l_753 = (func_42(l_765, ((safe_rshift_func_uint8_t_u_s((((l_788 <= ((safe_lshift_func_uint8_t_u_u(((~l_711) & p_26), 0)) > 0xAB58L)) >= p_25) >= (safe_lshift_func_uint16_t_u_s((((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(g_627, (safe_sub_func_int8_t_s_s(0x18L, p_26)))), g_905)), p_25)) | 0xB685L) >= 4294967287UL), 12))), p_26)) != l_753), p_26) >= 4294967295UL);
        }
        l_753 = l_753;
    }
    if (((safe_div_func_int16_t_s_s(((g_101 <= ((g_699 , ((((safe_div_func_uint8_t_u_u(l_910, (((((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(p_26, 6)) , ((safe_lshift_func_int8_t_s_u(g_5, 0)) || g_282)) < (safe_sub_func_uint16_t_u_u((p_26 | (l_722 , (0xDD5AL & 0x1D1CL))), g_890))), 0xA74513B7L)) & 0UL) <= 0x96F211CFL) , l_774) , l_764))) >= g_512) != 0xAEF2F016L) == 0x82L)) && 0xAC23745CL)) < p_25), l_796)) >= l_711))
    {
        int l_941 = 0xDAAC7C30L;
        unsigned l_966 = 4UL;
        const unsigned short l_968 = 0x5173L;
        int l_1035 = (-5L);
        const unsigned l_1061 = 4294967295UL;
        unsigned l_1070 = 0xE0DB626FL;
        const int l_1107 = 0xC8814AF0L;
        short l_1134 = 0L;
        unsigned l_1137 = 0xAAD04AC5L;
        short l_1191 = (-1L);
        for (g_704 = 0; (g_704 != 27); g_704 = safe_add_func_int8_t_s_s(g_704, 2))
        {
            unsigned l_939 = 0xE41AF88BL;
            if (l_796)
                break;
            if (l_910)
                goto lbl_959;
            l_941 = (safe_sub_func_int8_t_s_s(g_5, (safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(p_25, (g_890 ^ (((((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((p_25 | (func_33(l_939, p_26, g_699, l_939) , 0xA8A0L)) != 0xD6L), g_627)), l_939)) >= 0xADF5L), (-9L))) , 65535UL) > l_910) <= l_939) != p_25)))) && g_282), g_512)) && 0x399AB53BL) > l_940), l_940)), g_5))));
            if (l_838)
                goto lbl_942;
        }
lbl_959:
        g_704 = (func_46((safe_mod_func_uint16_t_u_u(func_46(((+0x3AEA4A73L) , (((((safe_add_func_uint16_t_u_u((l_940 || (safe_lshift_func_uint8_t_u_u(((p_25 < (g_573 == (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((255UL & ((safe_unary_minus_func_int16_t_s((((l_941 == (safe_add_func_uint16_t_u_u((((-1L) && l_838) || ((-1L) == g_905)), l_958))) , (-3L)) ^ 0xCBL))) <= 248UL)), g_101)), 0)))) && p_25), p_25))), 0x77A3L)) , (-4L)) && g_573) , p_26) & l_941)), p_26, l_889, g_705), p_25)), p_25, g_704, g_313) || l_796);
        l_941 = (-1L);
        if ((0x04C5A915L >= ((safe_add_func_int8_t_s_s(g_282, g_313)) >= (safe_sub_func_uint8_t_u_u(((+func_46(((!p_25) , (safe_mod_func_uint32_t_u_u((1L != (((((func_46(func_33(g_512, ((p_25 ^ 0x66D421C0L) < (((p_26 != l_940) > 0L) >= 0x29F0L)), g_313, p_25), g_704, l_966, g_573) && 0xFDD8E5CAL) | l_910) == g_789) && 0xC0L) || g_967)), p_26))), l_968, g_5, g_699)) , l_958), 1L)))))
        {
            unsigned l_971 = 4294967295UL;
            unsigned l_1002 = 0xBC26A47CL;
            unsigned short l_1037 = 1UL;
            for (g_573 = (-12); (g_573 != 18); g_573++)
            {
                const unsigned short l_974 = 7UL;
                unsigned short l_987 = 65535UL;
                int l_989 = (-4L);
                unsigned l_1014 = 0xEF95189CL;
                int l_1034 = 0L;
                int l_1036 = (-6L);
                l_971 = l_966;
                for (l_838 = (-10); (l_838 >= 16); l_838 = safe_add_func_int16_t_s_s(l_838, 3))
                {
                    return l_974;
                }
                l_989 = (func_27((func_27(((safe_add_func_int16_t_s_s(p_25, (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((0UL >= g_94), p_25)), (((safe_add_func_uint32_t_u_u(((((safe_sub_func_int16_t_s_s(func_33(((func_33(l_966, g_704, (l_987 != 0x6029CF28L), g_573) == 0xCAL) != g_967), l_968, l_838, g_473), (-3L))) , g_789) , g_453) & l_711), 3UL)) || l_971) <= 1UL))), l_966)))) , g_453), g_573, g_699, p_26, l_971) , 3UL), g_988, l_987, g_705, g_988) >= l_968);
                for (l_774 = (-24); (l_774 <= 23); l_774 = safe_add_func_uint32_t_u_u(l_774, 2))
                {
                    short l_996 = (-3L);
                    int l_1044 = 0xC35ACC18L;
                    for (l_987 = (-15); (l_987 >= 59); l_987 = safe_add_func_int8_t_s_s(l_987, 9))
                    {
                        int l_1001 = 0x44D68AD3L;
                        int l_1005 = (-1L);
                        g_704 = (safe_div_func_uint32_t_u_u((l_996 || (((func_33(l_974, (g_627 != l_722), g_704, ((((safe_div_func_uint32_t_u_u(((((p_26 , p_25) , (p_25 != ((safe_sub_func_uint16_t_u_u(((p_25 > p_25) > l_1001), (-1L))) , g_94))) | g_905) | 0x4D7FA12EL), p_25)) < l_966) != l_1001) , l_1002)) | g_313) | p_25) , l_910)), l_1001));
                        if (g_101)
                            goto lbl_798;
                        l_1005 = func_46(l_764, (p_26 , ((safe_mod_func_int16_t_s_s(0x0F7CL, g_967)) || ((((func_42((func_42(p_26, g_512, ((g_699 < 0x1E356FA0L) , ((p_26 <= p_25) < l_1001))) & 4294967295UL), g_789, g_282) == 0x51EDL) > l_996) || l_764) & p_25))), g_512, p_25);
                    }
                    l_838 = 0xC9CDE8B2L;
                    l_838 = g_282;
                    if ((func_33(p_26, p_25, (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u(func_33(l_1002, (p_26 & l_1002), g_189, ((safe_rshift_func_int16_t_s_s(((-1L) > (p_25 && ((p_26 ^ p_25) || p_25))), 2)) || p_26)), g_453)) & p_25) ^ 0x902FL) && g_967), p_26)) , l_1014), g_705)), g_573) , g_890))
                    {
                        unsigned l_1021 = 0xE0ACDED5L;
                        l_989 = (l_764 != (((((safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((l_1021 != ((((l_996 , (func_46(g_890, p_26, (((0x56L || func_33(p_25, func_46(g_627, g_473, p_26, p_25), g_453, g_573)) && g_473) && p_26), p_25) & p_25)) | p_26) >= p_26) <= p_26)), 3)), (-1L))), g_282)) || g_189) <= g_5) >= g_704) < 0x23BEL));
                        g_704 = (safe_mod_func_int8_t_s_s(func_27(((safe_sub_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((((p_26 & ((p_25 > (p_26 && 0x55L)) & g_313)) > (safe_mod_func_uint16_t_u_u((p_25 < ((safe_lshift_func_int16_t_s_s(((+((safe_lshift_func_uint8_t_u_s(((p_25 | (((((l_1002 ^ g_705) > l_968) , l_711) , l_1034) <= p_26)) >= g_313), 5)) , l_1002)) & g_905), 14)) > l_1035)), g_453))) <= 1UL) || l_968), g_704)) || p_25) > 0UL), l_1036)) != l_987), l_1037, g_699, p_26, p_26), l_1021));
                    }
                    else
                    {
                        const short l_1042 = (-1L);
                        l_1044 = (safe_div_func_int8_t_s_s((((func_42(func_27(g_282, p_26, (safe_rshift_func_uint8_t_u_s(l_1042, 2)), ((p_25 , (func_33(((safe_unary_minus_func_int8_t_s(g_282)) , g_573), g_282, g_699, (p_26 >= g_789)) , 0xEBL)) <= 246UL), l_723), g_705, g_905) > p_25) ^ l_1042) ^ g_705), l_971));
                    }
                }
            }
        }
        else
        {
            unsigned l_1045 = 4294967289UL;
            int l_1071 = 0x82F9DF87L;
            unsigned l_1102 = 0xCB13D788L;
            int l_1164 = 0xFC30AEC9L;
            if (g_94)
            {
                const char l_1046 = 0L;
                unsigned char l_1049 = 0UL;
                unsigned short l_1062 = 0xDFA5L;
                short l_1063 = 0xCB18L;
                if ((l_1045 , (l_1046 | ((p_26 != ((((safe_rshift_func_uint8_t_u_u((p_26 ^ l_1035), ((func_27(l_1049, ((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(((p_25 > g_5) < (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s(l_1061, g_189)))), g_789))), g_967)) == l_1045) >= p_26), p_26)), g_905)) || 0xDEAAFA59L), p_26, l_1045, l_966) ^ l_1046) , l_1062))) | l_1035) || l_1061) | 6L)) || 253UL))))
                {
                    unsigned short l_1075 = 0x079FL;
                    if ((g_189 != l_1063))
                    {
                        const short l_1068 = 6L;
                        l_941 = l_1049;
                        g_704 = p_25;
                        l_1070 = ((((safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(0L, ((((0x3EEEL < g_699) != 0x58L) >= 255UL) , 0UL))) >= l_1068), (~l_1045))) | func_46((p_26 & p_26), p_26, p_26, g_1069)) >= p_25) < p_25);
                    }
                    else
                    {
                        g_101 = 7L;
                    }
                    l_1071 = (-1L);
                    g_704 = func_27(l_1071, ((l_1071 != (safe_div_func_int8_t_s_s(((l_1071 | l_774) ^ (g_988 , (((((p_25 & ((((-1L) >= (func_42(g_1074, l_1045, l_1075) , l_1045)) , 0x99L) == l_1075)) < l_1045) && p_26) <= (-1L)) , l_723))), p_26))) & l_1063), l_1071, p_26, g_789);
                }
                else
                {
                    int l_1089 = 0x8ADB1C45L;
                    for (p_26 = 0; (p_26 > 35); p_26++)
                    {
                        unsigned l_1086 = 0xF6577300L;
                        g_704 = ((safe_rshift_func_int8_t_s_u(0x00L, l_1062)) < (((((safe_mul_func_int32_t_s_s(l_940, (((safe_add_func_int8_t_s_s((l_722 & (p_25 && (safe_add_func_uint32_t_u_u(0x48856279L, (l_1086 , (safe_rshift_func_int16_t_s_s((((g_94 & ((g_94 > 65535UL) , 0L)) | l_1035) != l_1086), l_1089))))))), g_988)) , p_25) >= g_705))) ^ g_512) , l_796) , 7L) < l_966));
                        l_1071 = l_1089;
                        if (p_25)
                            continue;
                        if (l_941)
                            goto lbl_1103;
                    }
lbl_1103:
                    l_838 = func_38(((p_26 < p_25) > (((((safe_rshift_func_uint8_t_u_u(g_453, func_33((((((((g_1074 ^ ((safe_sub_func_uint32_t_u_u(p_26, (((((safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u(l_1045, l_711)), l_723)) && (safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((((+l_796) , g_573) & p_25), p_26)) , 6L), 2))) || p_25) || 0xA37CL) | l_796))) , l_1035)) | g_704) != l_711) != l_966) < p_26) & p_25) , l_1045), p_26, p_26, l_1102))) >= l_1035) >= g_282) <= 2UL) > 9L)));
                    g_101 = g_988;
                }
            }
            else
            {
                unsigned l_1104 = 6UL;
                int l_1138 = 7L;
                unsigned char l_1190 = 1UL;
                if (func_33(p_26, p_25, (65529UL != p_25), l_1104))
                {
                    unsigned char l_1116 = 246UL;
                    for (l_1104 = 0; (l_1104 <= 31); l_1104 = safe_add_func_uint32_t_u_u(l_1104, 8))
                    {
                        return l_1107;
                    }
                    for (g_1074 = (-25); (g_1074 <= 26); ++g_1074)
                    {
                        return g_453;
                    }
                    g_704 = (g_5 >= ((safe_rshift_func_uint8_t_u_u((func_33(g_189, g_905, (safe_mod_func_uint8_t_u_u(((((safe_mod_func_int8_t_s_s(0x49L, (g_282 | func_46(((func_33(l_1116, l_1104, (((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_1104, g_967)), l_1107)), (-1L))) == l_958) >= 1UL), g_1074) , p_25) , 1UL), g_789, l_1071, p_26)))) , 1UL) & l_1045) <= l_1045), g_313)), l_1116) <= l_774), 6)) || 65528UL));
                }
                else
                {
                    unsigned l_1133 = 1UL;
                    unsigned l_1165 = 0xB37B892CL;
                    unsigned short l_1189 = 0x8052L;
                    l_838 = ((p_26 > g_453) > (safe_add_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s(l_1104, 0)) == (safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_282, ((safe_rshift_func_int8_t_s_s(((((func_33(func_46(l_711, g_573, l_1133, (g_5 , (0x697FL != 0xDA23L))), p_25, g_5, g_5) <= 8UL) | 0UL) || p_26) > g_573), 4)) & l_1071))), l_1134))) == g_705) , g_967), l_722)));
                    if ((g_789 & l_940))
                    {
                        char l_1153 = 0x89L;
                        l_1138 = (((safe_mod_func_uint32_t_u_u((g_453 , (0x66ECBCFDL > (g_473 || g_453))), l_1137)) && 0x533BL) >= 0xD435L);
                        l_1153 = ((safe_lshift_func_uint16_t_u_u(((p_26 | (safe_div_func_uint32_t_u_u(func_33((p_25 , (((((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(p_25, 5)), ((safe_div_func_uint16_t_u_u(func_42((+p_25), g_473, p_26), (safe_lshift_func_int8_t_s_u((g_282 , (safe_mod_func_int8_t_s_s(p_25, l_940))), 3)))) , 0x91L))) == 0x1745E570L) , 0x8EL) , 0UL) <= (-1L))), l_1071, p_26, p_25), g_1074))) <= p_26), 1)) && 0xD3L);
                        g_101 = g_573;
                        l_1138 = (((+(((l_764 == (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_25, ((!((safe_add_func_uint32_t_u_u(((((p_26 >= g_573) , ((((g_453 >= func_46(p_26, g_699, p_26, l_1164)) || 0x15L) ^ 1L) >= g_473)) > 0x7AL) , 4294967292UL), g_512)) && l_1134)) == 0xE7C808C6L))), (-4L))), g_473)), 4))) < 0xCFL) | 1L)) | 0xEFE40089L) >= p_25);
                    }
                    else
                    {
                        l_1138 = (p_25 && l_1133);
                        l_1138 = ((g_1069 != g_453) == 4294967295UL);
                    }
                    l_1165 = 0x5E42B8D6L;
                    for (l_1164 = (-15); (l_1164 < 1); l_1164 = safe_add_func_int8_t_s_s(l_1164, 8))
                    {
                        char l_1176 = 0x75L;
                        l_1035 = func_27(func_42(l_1104, ((safe_mod_func_int8_t_s_s(p_25, p_26)) , (g_789 != (g_890 > (safe_lshift_func_uint16_t_u_u((l_1138 >= (func_42((g_905 < (~(safe_mod_func_int32_t_s_s((g_573 == ((~(((l_1071 & 0xE2799539L) ^ g_453) , 0x5681DAF5L)) && l_1133)), g_453)))), p_26, p_26) == g_5)), 12))))), l_1133), g_512, g_5, p_26, l_1176);
                        g_704 = ((func_46(func_46(l_764, (safe_mod_func_int8_t_s_s(((((((l_910 || l_1071) , p_26) >= (safe_mod_func_int16_t_s_s(func_33(func_27(((((((func_27(((!p_25) | (safe_lshift_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(func_33((safe_sub_func_uint32_t_u_u(((((safe_sub_func_uint32_t_u_u((l_1189 , (p_26 ^ (g_1069 || g_101))), l_1190)) || g_5) && p_25) != p_25), p_26)), p_26, p_26, p_25), g_313)) < 0xF4L) != 4294967289UL), p_25))), l_1133, p_26, l_1133, l_1176) > g_967) && l_1176) > 0xC0L) == l_1102) && 252UL) > l_940), g_473, l_1176, l_1061, l_1104), p_26, p_25, p_26), g_967))) > 0x9BEAL) && p_26) , p_25), l_1191)), g_1069, g_988), p_25, p_25, g_705) , (-9L)) , g_705);
                        g_704 = ((safe_mod_func_uint32_t_u_u((247UL == g_282), g_890)) > ((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(func_46(g_473, (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((-3L), 7)), (safe_lshift_func_int16_t_s_u(((g_627 && ((safe_rshift_func_int16_t_s_s((p_25 && p_25), ((safe_rshift_func_int16_t_s_u(0xBCFDL, 11)) || g_473))) , 0UL)) >= 0UL), g_5)))), p_25, l_796), p_25)) & 0x4FL), 0x4BFCL)) , g_313), p_26)), 11)) || l_1176) < (-1L)), p_26)) ^ 65529UL));
                        g_101 = (!(l_1191 ^ 0x24L));
                    }
                }
                l_941 = (safe_div_func_int8_t_s_s((-1L), p_25));
                for (l_910 = 0; (l_910 == 31); ++l_910)
                {
                    return p_26;
                }
                if ((g_573 == (safe_mod_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(0x0AD6L, func_27(p_26, (!l_1226), g_282, p_25, l_1102))), g_573)) != l_1138), g_473)) >= g_890) > 0x71F5L), 65529UL))))
                {
                    l_1226 = (safe_lshift_func_int16_t_s_u(((((((l_1137 < g_988) , p_25) >= (func_46((p_26 | g_189), (safe_add_func_uint32_t_u_u((((l_1071 , p_26) , func_42((safe_lshift_func_uint16_t_u_u((((((((g_512 < (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(l_1070, l_796)) && g_967), 2))) || g_313) , (-4L)) != g_627) >= 0xAEL) < g_705) , 0UL), g_905)), p_26, p_25)) || 9UL), p_25)), p_25, g_1069) , 0xA3ACL)) < l_1191) > 6UL) < (-6L)), 14));
                    return l_1237;
                }
                else
                {
                    int l_1248 = 0x21C2FB19L;
                    int l_1262 = (-1L);
                    l_1248 = (safe_rshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(g_988, (g_988 ^ ((-1L) ^ 0UL)))) & (func_38(p_26) != (safe_sub_func_uint32_t_u_u(l_1071, ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(l_1190, 1)), 2)) < l_1164))))) < (-2L)), 4));
                    if (l_1035)
                    {
                        unsigned char l_1253 = 3UL;
                        int l_1264 = 0x70E0DFA2L;
                        g_704 = p_25;
                        l_1262 = func_38((!(((((safe_add_func_int8_t_s_s(((p_26 != (safe_mod_func_uint32_t_u_u(func_27((func_46(p_26, g_704, ((p_26 > (l_1253 , ((l_1248 | (safe_sub_func_int16_t_s_s(8L, (safe_add_func_int32_t_s_s(g_512, ((func_46((safe_add_func_int8_t_s_s(g_1260, 0x5EL)), l_1104, g_905, l_889) || g_189) & 0UL)))))) & (-8L)))) && 0L), g_1069) >= g_967), l_940, p_26, p_25, p_26), 4294967295UL))) < l_1261), l_1261)) & g_1069) > (-9L)) < 0x4956L) , p_26)));
                        l_1264 = (((safe_unary_minus_func_int32_t_s((g_282 | 0xAC3EL))) <= 0x8B21557CL) && g_512);
                    }
                    else
                    {
                        unsigned short l_1273 = 0UL;
                        l_1071 = g_1074;
                        l_941 = ((p_25 < (((safe_sub_func_uint8_t_u_u(g_789, func_33(g_1074, g_627, g_1074, (((func_33(((-1L) <= (((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((p_26 , ((g_905 , (safe_add_func_int32_t_s_s(((0x04L || (-8L)) ^ l_1164), g_94))) < 0x8231L)) == g_705), g_1074)), l_1273)) == g_473) != p_25)), l_1045, g_512, l_940) , 0xDFL) || g_453) > l_1035)))) || l_1226) && 0x88B8337EL)) ^ 2L);
                        l_1071 = (p_26 == (-1L));
                    }
                }
            }
        }
    }
    else
    {
        int l_1274 = 0x78BF7B70L;
        unsigned l_1319 = 0x82102169L;
        int l_1323 = 0x3B859D5FL;
        unsigned short l_1469 = 0xE491L;
        int l_1570 = 0x5FD26009L;
        unsigned l_1571 = 0xF5A8746EL;
        unsigned l_1697 = 2UL;
        int l_1702 = 0xF9790B7AL;
        short l_1786 = 9L;
lbl_1696:
        if (l_1274)
        {
            short l_1283 = (-5L);
            int l_1298 = 0x1ADED02DL;
            int l_1326 = 0xA8E903BAL;
            short l_1474 = (-1L);
            l_1283 = ((((((safe_mod_func_uint32_t_u_u((0x10ABL | ((safe_rshift_func_int8_t_s_u((g_5 , g_1074), 7)) == (0xE4L > (g_453 > ((((0xBDF3L || l_711) >= (g_101 , (safe_rshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u((!g_988), 0x8F5DL)) & l_889), 5)))) & (-1L)) , 0x46L))))), 0x526D36A3L)) >= g_453) != p_26) , l_1274) ^ 0x3ADFL) >= 254UL);
            if ((safe_add_func_int32_t_s_s(p_25, (safe_mod_func_uint16_t_u_u(func_33(((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(func_46((safe_lshift_func_int16_t_s_s(l_1283, 4)), g_573, (safe_sub_func_int32_t_s_s((l_1274 | (g_1260 || (g_705 & ((safe_add_func_uint8_t_u_u(func_27(func_33(l_1298, g_705, ((safe_add_func_int8_t_s_s(p_26, 0x66L)) ^ 0x624AL), l_722), p_25, g_573, g_189, g_453), p_26)) > 0UL)))), 0L)), g_789), l_1283)), l_1298)) | 0xC6L), p_25, p_25, p_26), p_26)))))
            {
                short l_1311 = 0xDD2BL;
                unsigned short l_1312 = 9UL;
                unsigned short l_1322 = 65528UL;
                int l_1340 = 0x3038178BL;
                int l_1372 = 0xC3D3A1BFL;
                unsigned short l_1419 = 0UL;
                unsigned l_1447 = 0UL;
                short l_1448 = 0x6279L;
                const unsigned l_1453 = 0xB7A88BEBL;
                if (((((g_705 , (((safe_rshift_func_uint16_t_u_u(g_189, 11)) , ((((((((safe_mod_func_uint8_t_u_u(1UL, g_705)) >= ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(0x56270C0FL, (safe_div_func_int32_t_s_s(func_38(p_25), p_26)))), 6)) > (((p_26 , g_189) , g_1074) && g_699))) , g_890) <= l_1311) < g_189) ^ p_26) , g_512) ^ p_25)) != l_1312)) | p_25) ^ p_25) < l_1312))
                {
                    unsigned l_1334 = 0xB194120CL;
                    l_1323 = ((safe_lshift_func_int16_t_s_u(func_38(((((safe_div_func_int8_t_s_s((l_1283 | (safe_mod_func_int32_t_s_s(3L, (func_38(l_1319) , func_42(g_101, g_313, (p_26 == (((p_25 & ((safe_add_func_uint16_t_u_u(l_1319, l_1311)) != 0x7CL)) <= p_25) , l_1311))))))), 248UL)) >= 0L) < l_1312) , 0x8B7D82E3L)), l_1322)) & p_25);
                    for (l_1298 = (-8); (l_1298 > 10); l_1298 = safe_add_func_uint16_t_u_u(l_1298, 9))
                    {
                        unsigned l_1333 = 4294967291UL;
                        l_1326 = (func_38(p_25) , 3L);
                        g_704 = (func_27(((l_1323 & (safe_add_func_int16_t_s_s((g_988 && ((p_26 , g_101) | p_25)), g_890))) > (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((~p_26) && (p_25 || l_1226)), p_26)), g_1074))), l_764, p_25, l_1333, p_25) <= l_1334);
                        return g_5;
                    }
                }
                else
                {
                    int l_1339 = 1L;
                    int l_1353 = 0L;
                    char l_1373 = 0xFAL;
                    unsigned char l_1389 = 0UL;
                    if (((g_705 || (safe_div_func_int16_t_s_s(g_890, 0x274FL))) , (0L > ((safe_lshift_func_int16_t_s_u(l_1339, l_1340)) > (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_div_func_int16_t_s_s((l_1339 , p_26), p_25)) | 0x9CF3156FL), g_94)), p_25)) < p_26), 1UL))))))
                    {
                        l_1298 = p_26;
                        l_1323 = (((0x23FA80C5L != g_905) < (safe_sub_func_uint16_t_u_u(g_699, (((((((safe_rshift_func_uint16_t_u_u(p_26, 3)) != func_33(p_26, p_26, l_1353, l_910)) & l_1322) ^ l_1339) < g_5) < 0x51L) <= 4UL)))) ^ p_25);
                    }
                    else
                    {
                        l_1323 = func_46(l_1319, ((((g_988 || (((((((safe_mod_func_uint8_t_u_u(l_1283, (1UL && p_25))) == ((l_1319 <= (g_627 >= ((((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(l_1261, func_46(g_282, g_905, l_940, g_189))), 0xBE610E66L)) <= p_25) , p_25) != 0x3AF93979L))) && 0x7E28L)) || p_25) | g_705) & 0x8CL) ^ 0xCBC6F445L) ^ p_26)) < p_26) >= 0xC5B9L) , 0x65E90B11L), p_25, p_26);
                    }
                    if ((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((g_1069 != g_890), g_573)), func_27(l_1274, g_94, g_473, l_1298, g_1074))), g_890)))
                    {
                        l_1372 = ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((l_1283 | func_42((((0x8D92L <= (253UL | p_26)) > l_1340) | g_189), g_890, ((((p_26 , (safe_div_func_uint16_t_u_u((func_38(g_627) > g_573), 0xFAACL))) != 0xE756L) != p_26) == g_473))), 4)), l_889)) , 0xA86AC9C3L);
                        g_101 = 7L;
                        if (l_1298)
                            goto lbl_1438;
                    }
                    else
                    {
                        unsigned l_1376 = 8UL;
                        int l_1381 = (-9L);
                        l_1372 = l_1339;
                        l_1381 = (l_1373 <= (safe_rshift_func_int8_t_s_s((p_25 != (l_1376 >= (func_33((((safe_div_func_uint32_t_u_u(g_1260, 4294967295UL)) == ((func_33(p_25, l_1261, g_789, (safe_sub_func_uint32_t_u_u(g_627, l_1274))) | g_573) , p_25)) , g_627), l_1261, g_967, g_189) >= l_1298))), 6)));
                        g_704 = (safe_add_func_uint8_t_u_u(l_1372, (((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((safe_add_func_int32_t_s_s(l_1389, (safe_div_func_int16_t_s_s(p_25, ((safe_sub_func_uint32_t_u_u(((l_1322 >= 0x65L) , 4294967295UL), g_573)) , (p_25 , g_967)))))) , g_1074))), l_1373)) , l_723) & g_1069)));
                    }
                    l_1372 = (~((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_1326, (safe_add_func_uint16_t_u_u(l_722, (g_94 , (safe_add_func_uint8_t_u_u(255UL, ((g_282 | (func_46((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((p_26 , 8UL), g_905)), (safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(g_905, 0xE3ABL)), 12)))), l_1339, g_705, g_967) , 5UL)) | (-7L))))))))), 4)) , 0x78189869L));
                    for (l_722 = (-24); (l_722 != 38); l_722 = safe_add_func_uint16_t_u_u(l_722, 1))
                    {
                        int l_1412 = 1L;
                        short l_1426 = (-1L);
                        l_1412 = p_26;
                        if (g_1260)
                            continue;
                        l_1326 = func_46(l_1283, func_27(((((safe_add_func_uint32_t_u_u(((p_25 && p_26) > l_1389), (p_25 , ((((g_94 , (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((g_453 < (l_1274 ^ l_1419)), 7)), 0x22C2L))) > l_1412) == g_189) < g_101)))) | p_25) || 0UL) >= l_796), g_967, p_25, p_25, l_1298), g_573, p_26);
                        g_704 = (3L ^ (safe_add_func_int8_t_s_s(((l_1373 ^ (safe_add_func_int8_t_s_s(g_473, (safe_add_func_uint16_t_u_u(p_26, l_1426))))) <= (g_282 ^ l_1339)), (l_1311 && func_46((((safe_lshift_func_int8_t_s_u(((!g_699) <= 0x2369CB65L), g_627)) <= g_627) || 1L), p_25, l_1326, l_1326)))));
                    }
                }
lbl_1450:
                l_1323 = p_26;
                if (((safe_lshift_func_uint8_t_u_u((g_189 , l_1298), 7)) & (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(g_905, 3)) | (safe_unary_minus_func_uint16_t_u((g_1074 , func_42((l_1323 >= (p_26 >= (safe_lshift_func_int16_t_s_u((0xDA6EL == ((+g_627) ^ (((9UL != l_1274) | 8UL) ^ 0xD94CB942L))), 15)))), l_1319, p_26))))), 0x79L))))
                {
                    l_1323 = l_1311;
lbl_1438:
                    l_1226 = g_988;
                    if ((func_33(p_25, p_26, p_25, l_1323) ^ (safe_sub_func_int8_t_s_s(g_573, (9L <= ((-1L) != p_26))))))
                    {
                        return p_25;
                    }
                    else
                    {
                        unsigned l_1449 = 4294967288UL;
                        l_1447 = ((safe_add_func_int16_t_s_s(func_38(g_313), g_453)) >= ((safe_lshift_func_int16_t_s_s(g_512, ((p_25 >= p_25) ^ g_1074))) != (safe_sub_func_int16_t_s_s(g_967, p_25))));
                        l_1449 = l_1448;
                        if (l_1298)
                            goto lbl_1450;
                        l_1326 = (((g_101 != (g_1069 , (1L < ((((safe_div_func_uint8_t_u_u(255UL, l_1453)) & ((l_1326 <= (-1L)) == ((p_26 && g_905) , l_1312))) , p_25) ^ 0x602BL)))) <= g_905) , g_282);
                    }
                }
                else
                {
                    unsigned char l_1465 = 0x98L;
                    int l_1471 = 0x02897837L;
                    for (l_722 = 0; (l_722 < 49); l_722++)
                    {
                        unsigned l_1466 = 0x371837E5L;
                        int l_1470 = 0xD0DCD701L;
                        l_1326 = ((p_25 == (p_26 >= (p_26 , 0L))) < (safe_rshift_func_uint16_t_u_s(((g_313 <= 0x973C6EC6L) != (safe_div_func_int16_t_s_s(0x811BL, (safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s(l_1465)), 15)) < p_25), l_1322))))), 15)));
                        g_704 = (l_1261 <= (((l_1466 <= (func_33((0x31L == func_38(((+((0UL && 0x2ACCL) | ((safe_mod_func_int32_t_s_s((g_699 || (g_789 , 0x6C71B955L)), func_33(l_1469, p_25, g_627, l_1319))) , p_26))) != 0xFA24L))), l_1326, l_1470, l_838) <= 1UL)) == g_988) != l_1319));
                        if (l_1298)
                            continue;
                        l_1471 = g_699;
                    }
                }
            }
            else
            {
                unsigned l_1475 = 0x8C1938C2L;
                int l_1484 = 1L;
                l_1323 = 1L;
                for (l_1283 = 11; (l_1283 == 14); ++l_1283)
                {
                    unsigned l_1480 = 4294967290UL;
                    char l_1481 = 0x55L;
                    g_101 = l_1474;
                    l_1323 = ((!(g_94 == ((p_25 & p_26) < func_33(func_33((l_1475 , ((g_967 , (safe_sub_func_int8_t_s_s(5L, (safe_lshift_func_int8_t_s_s((0x62L > (g_313 && g_313)), l_1298))))) | l_1237)), l_1475, l_1480, l_1326), g_1074, l_1481, p_26)))) , p_25);
                    l_1484 = func_27(g_1260, ((0UL & p_26) != g_573), (safe_lshift_func_uint8_t_u_s((((p_26 , (-10L)) >= ((l_1475 <= (+1L)) , (p_25 > 0xD8ACL))) , p_25), 0)), p_26, g_5);
                }
            }
            g_704 = l_1485;
        }
        else
        {
            int l_1488 = 1L;
            unsigned short l_1498 = 0x6E00L;
            short l_1508 = (-1L);
            unsigned l_1603 = 0UL;
            unsigned char l_1627 = 255UL;
            unsigned l_1653 = 5UL;
            int l_1654 = (-3L);
            if ((safe_div_func_uint32_t_u_u(func_27(l_1488, g_704, p_26, (g_704 == (safe_sub_func_uint8_t_u_u(func_42(l_1274, (((g_1074 || g_189) , (safe_mod_func_int32_t_s_s(((+(safe_div_func_uint32_t_u_u(8UL, (safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_int16_t_s((l_1488 , l_1488))) < 0L), 7))))) ^ p_25), g_473))) , p_25), l_1469), l_1319))), g_573), l_1498)))
            {
                unsigned l_1512 = 4294967287UL;
                short l_1561 = (-1L);
                if ((((safe_add_func_int8_t_s_s(l_722, ((!(safe_sub_func_int32_t_s_s(g_988, 0xD13DE9E2L))) & p_25))) < ((safe_unary_minus_func_int8_t_s(g_282)) > 0x1DL)) > (l_722 == g_101)))
                {
                    g_704 = ((func_27(g_789, ((0x2AF5L | ((((safe_add_func_int8_t_s_s(l_1508, ((l_1498 <= (safe_mod_func_int32_t_s_s(l_838, ((p_26 , (((p_26 < 0UL) < l_1511) | l_1512)) & 4294967295UL)))) == g_988))) | p_25) <= 0x68L) , p_25)) < (-7L)), g_699, p_26, p_25) , p_26) | g_967);
                }
                else
                {
                    int l_1517 = (-5L);
                    l_1226 = func_27((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(p_26, 3)) && g_282), l_1517)), ((func_46((0UL > 0x3262CE1AL), l_1469, l_1512, (0x0F95C603L && (0UL <= g_988))) , g_573) ^ g_573), p_25, g_967, g_5);
                    l_1323 = (safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((g_699 <= g_1260) | (((safe_rshift_func_int16_t_s_s(p_25, func_42(g_453, g_890, g_101))) || ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((((l_910 , (p_26 <= p_25)) != 0UL) , g_282), 13)), 3)) ^ g_1069)) , l_774)) > g_627), p_25)), g_1260));
                    g_101 = ((safe_lshift_func_int16_t_s_s((g_890 >= g_905), g_512)) <= g_453);
                    if (((((+((~(((safe_sub_func_int8_t_s_s(func_42((safe_rshift_func_int8_t_s_s((func_42(g_282, ((((((safe_add_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(0x59E4B06DL, (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(func_42(((safe_sub_func_uint32_t_u_u((0xD90EL & p_26), 1UL)) , g_473), (l_1488 & ((l_1469 & p_26) , l_1498)), g_189), 4294967293UL)), 0xCC0BL)))) , g_512), g_189)) , g_282) , p_25) , 2UL) , 0x83BA1552L) , g_967), g_699) >= g_1260), l_1469)), l_1512, l_1508), p_26)) != g_573) , g_1074)) , p_25)) | 0x88L) | l_838) | l_1498))
                    {
                        return p_25;
                    }
                    else
                    {
                        int l_1558 = 0xB6CB324BL;
                        g_101 = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((-4L), (~(~(p_25 != (!g_1069)))))), ((((g_627 , (safe_add_func_uint32_t_u_u(0xF1F3733EL, ((g_101 & (safe_sub_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((l_1274 || g_704), p_26)) ^ 0xC9L), (-10L)))) == 65535UL)))) || g_1260) & p_25) , l_1512))), l_1558)), 1UL));
                        l_1558 = (func_46((safe_mod_func_int16_t_s_s(0x1799L, 0x016FL)), (l_1561 | 0x44L), ((((safe_mod_func_uint16_t_u_u(p_25, g_1260)) , func_42((l_1488 , ((((safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_uint16_t_u_u(p_25, g_699)) <= g_5) != l_722) <= l_1561), p_26)) & l_1508) ^ 0UL) , (-2L))), g_705, l_1570)) == p_25) != 0xA479L), l_1571) || l_1512);
                    }
                    if (g_94)
                        goto lbl_1678;
                }
                return l_1469;
            }
            else
            {
                unsigned l_1576 = 3UL;
lbl_1599:
                if (p_26)
                {
                    int l_1583 = 0xF3394236L;
                    g_704 = func_33((l_838 , (((((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((l_1576 & ((p_26 && (!l_889)) , 1UL)) > (((safe_rshift_func_int8_t_s_u(g_699, (((safe_rshift_func_uint16_t_u_u((+0x1DD4L), 7)) != ((safe_rshift_func_uint16_t_u_s((~g_512), 14)) || p_26)) == p_26))) | l_1498) && g_988)), p_25)), 1)) && (-3L)) , p_26) != l_1583) , g_1069)), l_1261, p_26, l_774);
                    return l_1469;
                }
                else
                {
                    l_1323 = ((p_26 >= ((safe_unary_minus_func_uint8_t_u(9UL)) & l_1274)) >= (p_26 <= (safe_add_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(l_1498, 0xBDL)) && (safe_add_func_int32_t_s_s((((((((safe_rshift_func_int8_t_s_u(0x27L, 2)) <= func_27(g_101, g_988, l_1576, g_1260, l_711)) != l_1576) ^ l_796) , (-1L)) < p_26) != 0x08CCL), l_1323))), 250UL))));
                    g_101 = l_1576;
                }
                for (p_25 = (-9); (p_25 > 15); p_25 = safe_add_func_uint32_t_u_u(p_25, 7))
                {
                    for (l_722 = 0; (l_722 > 27); ++l_722)
                    {
                        unsigned l_1602 = 0xC39252C1L;
                        if (l_711)
                            goto lbl_1599;
                        g_704 = (p_25 && (safe_add_func_uint32_t_u_u(p_25, (3UL > 0x490DL))));
                        if (g_94)
                            continue;
                        l_1226 = l_1602;
                    }
                    if (l_796)
                        continue;
                    g_704 = ((0x0FD0B5DDL || (p_25 | g_1260)) , (((0x74L == l_1603) | ((((((!(l_1576 && (func_33(p_26, (l_1485 >= (safe_add_func_int16_t_s_s(p_25, p_26))), g_189, p_26) || g_5))) , p_25) < l_1576) <= 0xB9A44D80L) > 0x4C20L) && g_473)) , p_26));
                    g_704 = ((1L != g_789) != (safe_mul_func_int32_t_s_s(0L, 0L)));
                }
            }
lbl_1678:
            for (l_723 = 27; (l_723 <= (-24)); l_723 = safe_sub_func_int32_t_s_s(l_723, 3))
            {
                unsigned short l_1619 = 65535UL;
                g_704 = (func_33(p_25, (((safe_sub_func_int32_t_s_s((l_1469 != 0x53L), (((((safe_div_func_uint8_t_u_u((func_33(((safe_div_func_uint32_t_u_u((+(func_33((g_313 >= p_25), l_1616, (g_988 , l_1603), (safe_sub_func_int8_t_s_s((func_33(g_789, p_26, p_26, p_25) < g_1074), g_5))) ^ g_189)), p_26)) ^ g_5), p_25, g_573, p_25) , p_25), 1L)) , 255UL) , g_705) <= l_1323) | l_1619))) ^ 0xBEL) < l_1498), p_25, g_453) > p_25);
                g_704 = ((g_189 == (l_1485 > (func_33((+(p_25 , func_38(((p_25 > ((safe_lshift_func_uint16_t_u_s((((p_26 <= (g_189 == ((safe_add_func_int32_t_s_s((func_33(((func_33((safe_unary_minus_func_int8_t_s((g_789 | g_988))), g_789, l_1469, p_26) , g_1069) | g_699), p_25, l_1619, l_889) >= p_25), l_1488)) , l_1498))) & g_94) , g_789), 11)) != 7L)) >= l_1571)))), l_1627, p_26, p_26) > 0xF1L))) , 0x0B8D8438L);
                for (g_94 = (-10); (g_94 == 16); g_94++)
                {
                    unsigned l_1632 = 4294967295UL;
                    l_1654 = (((safe_sub_func_int8_t_s_s(l_1632, g_282)) , (safe_sub_func_uint8_t_u_u((((func_33((safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((g_5 , (g_101 >= ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((!l_1619), (safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((+(safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(0L, (0x8DL && l_1653))), p_26)) != l_774), l_1627))) && l_1571), g_282)), p_26)))), 6)) & l_1274))) > l_1274), 1UL)) && g_627), 0xD4L)), p_25, l_1571, p_25) & p_25) <= 0x40L) < g_967), l_1619))) & l_1632);
                    for (l_1508 = 0; (l_1508 == (-21)); l_1508--)
                    {
                        l_1323 = ((g_789 | (safe_lshift_func_uint16_t_u_s(0xC359L, 0))) < 0xC3AE1745L);
                        if (g_512)
                            goto lbl_1678;
                    }
                    if (g_453)
                        goto lbl_1696;
                    l_1226 = (safe_mod_func_int8_t_s_s((-1L), (-4L)));
                }
                l_1654 = ((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_1570, (safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((((safe_add_func_uint16_t_u_u(((+(l_1274 & (g_101 >= (safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(p_26, g_1677)), p_25))))) == 0x56L), g_473)) && l_722) & g_627) , p_25), 2)) < 4294967295UL), l_1485)), 5)))), p_26)) || g_988);
            }
            for (l_838 = 0; (l_838 < (-25)); --l_838)
            {
                int l_1681 = 0x7A56D317L;
                int l_1682 = 0xF6BED274L;
                if (l_1681)
                    break;
                l_1226 = (g_453 <= 0UL);
                g_101 = 0xD1ABB766L;
                l_1681 = (g_453 , func_42((l_1682 > (safe_unary_minus_func_int8_t_s((safe_mod_func_uint8_t_u_u(g_573, ((safe_lshift_func_uint16_t_u_s((func_27(l_1498, ((safe_mod_func_uint8_t_u_u(l_1627, l_1570)) , g_282), p_26, g_1260, g_512) <= 0x80A8L), 14)) || 0x2063L)))))), p_25, l_1319));
            }
            l_1226 = ((((((safe_add_func_int8_t_s_s((-6L), (g_1677 > l_1488))) < func_46((+l_1692), p_25, ((((safe_lshift_func_int16_t_s_s(g_1677, 12)) < (0xBF41L != l_1488)) >= l_1695) , 0x20C3L), p_25)) < g_789) != (-1L)) || 246UL) != l_1226);
        }
        if ((l_1697 != p_26))
        {
            unsigned l_1721 = 4294967295UL;
            int l_1763 = (-7L);
            for (g_1069 = (-20); (g_1069 != 26); g_1069 = safe_add_func_uint32_t_u_u(g_1069, 2))
            {
                if (p_25)
                    break;
                g_101 = (safe_rshift_func_uint8_t_u_s(p_25, 7));
            }
            if (l_1702)
            {
                unsigned l_1714 = 1UL;
                int l_1742 = 3L;
                unsigned short l_1749 = 0x327AL;
                unsigned l_1760 = 6UL;
                if ((safe_mod_func_int16_t_s_s((((safe_unary_minus_func_int16_t_s(((0UL >= (((safe_add_func_uint16_t_u_u(((func_46(g_573, (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(func_33(((p_25 >= (g_1677 != ((((l_1714 && (0x2FL | (((safe_add_func_int32_t_s_s(l_889, (safe_sub_func_uint8_t_u_u((g_512 == (((safe_rshift_func_uint16_t_u_s(l_940, p_26)) < g_704) < g_705)), 255UL)))) != g_1074) == g_988))) ^ p_25) , 4294967295UL) && p_26))) , l_1721), l_1570, p_25, l_1721), 246UL)) ^ p_25), 5)) >= g_1074), g_704)), l_1319, p_26) | g_453) < 1L), 0x91CBL)) < l_1319) < l_1721)) < 0x730686FBL))) & g_1722) & l_1721), p_26)))
                {
                    char l_1741 = 0xB3L;
                    l_1742 = ((l_764 < ((((((((-5L) == g_988) | func_33((65535UL >= (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((+(g_988 == (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((p_25 > (0L == (func_46(((((p_26 | func_27(((safe_add_func_uint32_t_u_u((0xF2L >= 0xB4L), 0x6DEB68A8L)) , g_967), p_25, p_26, l_1721, g_789)) | l_1274) == 0x81L) , l_1714), g_1260, g_988, l_1714) > l_1739))) && l_1714), p_25)), 15)))) < (-8L)), 0x0CL)), l_1714)), l_1740)) , 8UL) <= l_1741), g_573)), 0x953421ACL))), l_1714, p_26, g_1260)) || l_1714) , l_1697) , 0x40C6L) < 65527UL) ^ 0xD81CL)) != l_1741);
                }
                else
                {
                    int l_1761 = 1L;
                    int l_1762 = 0xC4101B96L;
                    if (p_25)
                    {
                        l_1762 = (((0x9342L ^ ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s(p_26, l_1749)), (((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(func_46((p_25 , (safe_div_func_uint32_t_u_u(l_1749, (-1L)))), l_796, p_26, (safe_mod_func_uint16_t_u_u((((g_967 >= p_25) || 0x63L) == 0x6690AAEAL), 0x9A49L))), 9)), 0)), 0x8DEC588DL)) | 0UL) | l_1760))), l_1692)) , p_26)) , 1L) > l_1761);
                        l_1323 = (-1L);
                        l_1763 = p_25;
                        l_1616 = (safe_div_func_int8_t_s_s(((((safe_unary_minus_func_int16_t_s(((l_1761 | ((0x0FABAE31L == func_27(p_26, l_1749, g_1069, l_1721, (g_704 > (safe_sub_func_int32_t_s_s(p_26, (l_1761 < g_890)))))) > p_26)) == l_1762))) , g_1722) <= 1UL) >= g_1260), p_25));
                    }
                    else
                    {
                        const unsigned char l_1785 = 255UL;
                        l_1786 = ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(1L, 5)), (g_101 != (safe_rshift_func_int16_t_s_u(p_25, 1))))) > ((0xDB31L ^ (safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((g_699 < 6L) >= l_1761) != ((((((+g_890) & ((safe_div_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u((l_1785 != l_1760), 6)) <= g_313) | g_512), l_1763)) & g_473)) | l_1721) , 255UL) < 1L) , 1UL)), 0xB8B8L)), p_26))) | 0L));
                    }
                }
                for (l_1226 = (-9); (l_1226 >= (-18)); l_1226 = safe_sub_func_int8_t_s_s(l_1226, 7))
                {
                    g_704 = 0xB045046DL;
                }
            }
            else
            {
                unsigned l_1806 = 4294967289UL;
                g_101 = 8L;
                l_1323 = 7L;
                if ((safe_add_func_uint8_t_u_u(p_26, ((safe_add_func_int16_t_s_s(g_627, (0x1846L && (safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((((g_988 >= (safe_rshift_func_int16_t_s_u((!7L), l_722))) & (func_42(func_38(g_94), p_25, l_1571) == 65526UL)) >= g_967))), g_789))))) ^ p_25))))
                {
                    int l_1807 = (-7L);
                    l_1226 = (func_33(p_26, p_26, (p_25 >= p_26), l_1261) , ((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((+(((safe_mod_func_int32_t_s_s(l_1226, g_453)) != (l_1323 , l_1721)) , 9L)) <= l_1511), g_1722)), 3)) , 0xE789F620L));
                    for (g_988 = 0; (g_988 == 49); g_988 = safe_add_func_uint8_t_u_u(g_988, 8))
                    {
                        if (g_101)
                            break;
                        l_1763 = func_38(p_25);
                        l_1323 = p_25;
                        l_1806 = g_988;
                    }
                    l_1807 = ((0x4BD0C5C3L & l_1739) || (-10L));
                    l_1763 = p_25;
                }
                else
                {
                    l_1763 = l_1763;
                }
            }
            for (g_704 = 0; (g_704 > 10); g_704++)
            {
                if (l_711)
                    break;
                l_1810 = func_38(g_789);
            }
            for (g_94 = 0; (g_94 <= 5); g_94 = safe_add_func_uint32_t_u_u(g_94, 6))
            {
                const unsigned short l_1813 = 0xC989L;
                l_1616 = 0L;
                l_1323 = l_1813;
                if (p_25)
                    continue;
            }
        }
        else
        {
            g_101 = g_453;
        }
        l_1323 = g_1074;
        g_704 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(p_26, l_1697)), ((safe_sub_func_uint8_t_u_u(l_1261, p_25)) ^ (g_789 && (l_1319 , l_1786)))));
    }
    return g_1074;
}







static short func_27(unsigned p_28, int p_29, char p_30, short p_31, unsigned char p_32)
{
    short l_474 = 0x0198L;
    unsigned l_475 = 4294967295UL;
    int l_476 = 1L;
    char l_477 = 0xECL;
    int l_530 = (-7L);
    unsigned short l_693 = 0xE901L;
lbl_529:
    for (g_94 = 13; (g_94 <= 17); g_94 = safe_add_func_uint8_t_u_u(g_94, 1))
    {
        int l_454 = (-10L);
        l_454 = (safe_sub_func_int16_t_s_s(0L, g_453));
        l_477 = (safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(l_454, ((((l_454 != 0x1AL) != ((((safe_div_func_uint16_t_u_u((((p_28 | (safe_rshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((((0x816B9793L | 0xA3F60B66L) >= func_33((safe_lshift_func_int8_t_s_u((func_33(func_33((safe_lshift_func_uint8_t_u_u(255UL, 7)), g_313, (safe_sub_func_int16_t_s_s(0L, 0x2D60L)), g_473), p_28, l_474, l_454) ^ l_454), l_475)), g_94, p_31, l_454)) <= 65532UL), l_476)) || g_189), g_313)) ^ p_28) <= 0x1FL), 14))) || p_28) > g_282), 4UL)) > p_32) > p_28) , g_282)) == l_454) || 0xBF05E449L))) > g_189), l_454));
    }
    for (l_475 = 13; (l_475 > 14); l_475++)
    {
        unsigned short l_480 = 65535UL;
        int l_481 = 0xDA22FC5AL;
        short l_511 = 0x01C1L;
        unsigned l_604 = 4294967295UL;
        unsigned char l_630 = 0x16L;
        unsigned short l_694 = 0x2499L;
        l_481 = l_480;
        l_481 = (safe_unary_minus_func_uint32_t_u(func_42(l_475, func_42(l_477, (p_32 <= ((p_31 < ((safe_rshift_func_int8_t_s_s((l_475 & l_481), 6)) >= func_33((p_32 <= (safe_add_func_uint16_t_u_u((((func_38(((0xEAL && (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(p_29, (-1L))), g_313))) , 0UL)) , 4294967295UL) < p_30) == 4294967295UL), g_5))), g_453, p_30, p_30))) , g_473)), l_481), g_189)));
        if ((0xD7DCA90DL | (l_480 && g_313)))
        {
            int l_508 = 0L;
            for (p_31 = 0; (p_31 != (-25)); p_31--)
            {
                unsigned short l_499 = 0x7D98L;
                int l_500 = (-5L);
                for (g_453 = 11; (g_453 >= (-5)); --g_453)
                {
                    int l_495 = 0x0A107BABL;
                    unsigned short l_498 = 0xB46AL;
                    if (p_28)
                        break;
                    if (l_495)
                        break;
                    l_500 = (safe_add_func_uint8_t_u_u((g_5 > 1UL), ((func_38(g_313) > (~l_498)) , l_499)));
                }
                for (p_28 = 0; (p_28 != 10); ++p_28)
                {
                    unsigned short l_505 = 0x01B4L;
                    int l_515 = 0x2C9CC66DL;
                    if ((safe_lshift_func_uint8_t_u_s(0xF1L, l_505)))
                    {
                        char l_528 = 0x5BL;
                        g_512 = (p_32 && (p_29 == (safe_sub_func_int32_t_s_s(((-8L) ^ (l_508 , (safe_rshift_func_int16_t_s_s(func_38((l_511 == (g_453 == ((func_33(p_32, l_508, l_474, p_29) , 0x34C2L) == 0x050FL)))), 4)))), p_32))));
                        l_515 = (safe_add_func_uint16_t_u_u(0x0BEDL, p_28));
                        g_101 = p_30;
                        l_528 = ((safe_sub_func_uint32_t_u_u(func_46(func_33(l_508, l_474, (safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_512, 4294967286UL)), func_42(g_101, p_28, l_511))) && ((~(safe_rshift_func_int8_t_s_u(((((safe_add_func_uint8_t_u_u(g_189, g_189)) | l_500) & 4294967289UL) != (-1L)), 2))) , 0x3962BB8BL)), p_30)), l_515), g_5, p_30, g_453), 0x778A3A3BL)) <= l_508);
                    }
                    else
                    {
                        if (g_453)
                            goto lbl_529;
                        return g_101;
                    }
                }
            }
        }
        else
        {
            char l_567 = 0xEEL;
            int l_585 = 0L;
            l_530 = l_481;
            if ((safe_lshift_func_int16_t_s_u((-4L), (func_46(((safe_div_func_int16_t_s_s(((65535UL == (((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(func_46(((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_29, 5)), (safe_rshift_func_uint16_t_u_u(g_101, 0)))) , (((safe_mod_func_int8_t_s_s(p_30, g_5)) && (safe_mod_func_int8_t_s_s(((!(g_5 , 1L)) && (l_480 >= g_313)), g_473))) & 0L)), l_476, g_101, p_31), 1UL)), g_313)) < 4294967295UL) > g_189)) && 0UL), g_189)) , p_28), p_31, g_5, l_475) ^ l_474))))
            {
                unsigned short l_565 = 0x51A0L;
                int l_578 = (-6L);
                int l_588 = 0x98B80AD4L;
                if (g_512)
                {
                    const unsigned l_562 = 0x586771EEL;
                    unsigned l_566 = 0xE719C7A6L;
                    l_566 = ((((((safe_div_func_int8_t_s_s(g_313, (safe_rshift_func_uint16_t_u_s(p_32, 10)))) && ((safe_unary_minus_func_uint32_t_u(g_5)) <= ((safe_mod_func_uint8_t_u_u(0x6BL, g_313)) & (safe_div_func_uint16_t_u_u(((((((+(safe_lshift_func_int8_t_s_s((func_46(p_28, l_562, (safe_sub_func_uint32_t_u_u(p_31, ((l_565 <= 0xD2D6L) > p_31))), g_94) , (-1L)), p_32))) , l_480) , g_512) & g_282) | g_512) > g_473), g_5))))) > 3UL) <= p_32) <= g_313) , l_562);
                    if (l_476)
                        continue;
                    return l_567;
                }
                else
                {
                    int l_570 = 0x959697A2L;
                    l_530 = ((safe_div_func_uint16_t_u_u(l_570, ((func_46(p_28, l_474, p_30, g_94) & (safe_sub_func_uint16_t_u_u((1L | g_473), (((g_573 && 0UL) <= 0x58E3B4E6L) | 0x5DF5L)))) , l_570))) ^ g_512);
                    l_585 = ((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0L, func_33(((p_31 , l_578) , (safe_add_func_int16_t_s_s(p_29, (safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(l_474, ((func_46(g_101, g_573, l_570, l_578) , g_313) , p_32))), l_480))))), p_32, g_473, g_313))), 5UL)) <= 0xA7L);
                    l_588 = ((0x2D97L != (p_28 | func_33(g_313, (safe_lshift_func_int8_t_s_u(0x98L, l_585)), (g_473 && 0xE783L), l_585))) | 0xB599L);
                }
                l_588 = (0x36L <= 0x5BL);
                if (g_94)
                    continue;
                for (g_189 = 16; (g_189 != (-2)); g_189 = safe_sub_func_uint32_t_u_u(g_189, 7))
                {
                    g_101 = (!8L);
                    return g_512;
                }
            }
            else
            {
                g_101 = l_481;
            }
            if (l_585)
                break;
            if ((safe_rshift_func_int8_t_s_s(p_31, (p_29 == p_31))))
            {
                unsigned short l_593 = 2UL;
                l_585 = p_28;
                if (l_593)
                    continue;
                if (g_573)
                    goto lbl_700;
            }
            else
            {
                return g_101;
            }
        }
        if ((p_28 >= (safe_lshift_func_int16_t_s_u(p_31, (safe_div_func_uint16_t_u_u(0xA92DL, g_189))))))
        {
            for (l_530 = 0; (l_530 != (-9)); --l_530)
            {
                if (p_29)
                {
                    return p_28;
                }
                else
                {
                    return g_282;
                }
            }
            return l_511;
        }
        else
        {
            char l_609 = 0x62L;
            int l_610 = (-1L);
            l_610 = ((safe_add_func_int8_t_s_s(((!func_42(((((safe_div_func_int16_t_s_s((((+func_42((((((l_530 > ((8UL || (l_604 >= (((-3L) && ((g_512 || (-1L)) | ((((g_512 & l_481) > (((((safe_add_func_uint16_t_u_u((0L >= l_609), 0L)) ^ p_28) , g_512) == p_31) >= 0x2C7D3644L)) >= g_282) >= 0x5FE6D747L))) > 0x351EE579L))) <= l_475)) && p_28) & 0x8BL) , 4294967295UL) , 0xF60EE6D7L), p_28, g_453)) , 0x0C2DL) | l_477), g_512)) & l_609) || l_475) , g_94), g_573, g_512)) >= p_30), 0x2BL)) > 4294967295UL);
            for (l_480 = (-19); (l_480 == 34); ++l_480)
            {
                short l_621 = 0xDF63L;
                const unsigned l_626 = 0x8B5A059EL;
                int l_631 = (-8L);
                unsigned short l_692 = 0x228FL;
                if ((safe_lshift_func_uint8_t_u_s(p_32, (func_46(((safe_mod_func_uint8_t_u_u((((((((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(p_29, p_30)), func_33(l_621, (((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_609, l_480)), ((func_38(g_453) <= (l_626 || p_29)) , 4L))) == g_573) == g_453), p_31, p_31))) & 2L) <= 0x3A52L) && l_626) & l_604) , p_31) , p_32), g_512)) , p_30), p_28, g_473, g_573) >= g_627))))
                {
                    char l_632 = 0x8DL;
                    l_630 = ((safe_div_func_uint16_t_u_u(0xF346L, 0x0EB6L)) || l_626);
                    l_631 = l_530;
                    l_632 = p_28;
                }
                else
                {
                    unsigned l_637 = 4294967295UL;
                    int l_642 = 0x2EA006A9L;
                    unsigned short l_657 = 8UL;
                    l_642 = ((safe_rshift_func_uint16_t_u_u(func_33(p_28, (safe_sub_func_uint8_t_u_u(p_28, (p_30 == 253UL))), func_38(l_637), (l_610 , (p_29 | ((safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(0L, (-9L))) || 5UL), g_5)) < g_512)))), p_30)) && p_28);
                    l_657 = (+((0x586FL == (((((safe_sub_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((func_38(p_32) || (((l_609 | (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(g_94, func_33((5UL == (safe_mod_func_uint32_t_u_u((0xD8L > (p_32 ^ (safe_rshift_func_uint8_t_u_s(((((safe_sub_func_uint32_t_u_u((l_480 , p_28), 1UL)) ^ p_31) ^ l_637) > p_32), 5)))), p_29))), g_453, g_94, l_511))), p_30))) || g_5) ^ p_30)), 0x28F8L)) <= p_32), l_637)) == l_637) & 0x1C6B96EBL) < l_610) || 1UL)) >= l_511));
                    if (func_38((((-8L) | g_282) , l_481)))
                    {
                        int l_668 = (-3L);
                        l_530 = ((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(p_29, (((safe_sub_func_uint32_t_u_u(g_473, p_30)) >= (((g_453 || ((((safe_mod_func_uint8_t_u_u(g_573, l_604)) != func_33((safe_rshift_func_int16_t_s_u(p_31, 11)), l_474, g_313, l_474)) ^ g_94) || l_604)) != 0x97L) != g_473)) | g_473))), l_668)) != g_573);
                        if (p_29)
                            goto lbl_529;
                        g_101 = p_28;
                    }
                    else
                    {
                        unsigned short l_679 = 0UL;
                        l_631 = p_30;
                        l_631 = ((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((l_642 <= (p_32 ^ (~(safe_sub_func_int8_t_s_s(func_42(g_473, p_32, func_38((p_29 , ((((safe_add_func_int16_t_s_s(p_32, 5UL)) < g_453) >= ((safe_sub_func_uint32_t_u_u(func_42(l_609, p_28, l_679), (-3L))) ^ l_477)) | l_637)))), p_28))))) , g_189), 0x95L)), 4294967290UL)) , p_32);
                    }
                    l_694 = (((((l_481 ^ 0xE5EF7C44L) || (l_476 , ((l_530 & (((g_313 && l_609) , (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(func_42((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(l_480, l_621)) ^ func_42(g_453, g_473, p_29)) | l_610), l_626)), 7)), g_189, p_31), p_31)) | l_692) != l_610), g_512)), 7))) != 0xDA57L)) || p_31))) , l_474) != l_693) <= (-1L));
                }
                l_481 = ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(func_33(func_38(g_573), p_28, ((1UL || (l_610 , g_473)) & g_453), ((-5L) != (g_473 == 6L))), 0xFCL)), 5)) != 0x54L);
                if (g_94)
                    continue;
            }
        }
    }
lbl_700:
    g_699 = g_627;
    l_530 = (safe_mod_func_int8_t_s_s((((g_473 <= ((safe_unary_minus_func_uint32_t_u(((((p_28 ^ (l_693 == (((g_704 | l_474) & 0L) != 0UL))) & 65535UL) > (func_33(g_704, l_476, g_101, l_475) , g_705)) < (-1L)))) == 0xB664EFAFL)) != p_28) <= 0xB0C7E112L), p_28));
    return p_31;
}







static const short func_33(unsigned p_34, char p_35, unsigned char p_36, unsigned p_37)
{
    char l_438 = (-8L);
    int l_444 = (-1L);
    if ((0x7480L | g_189))
    {
        int l_442 = 1L;
        for (p_37 = (-28); (p_37 >= 29); p_37 = safe_add_func_uint32_t_u_u(p_37, 1))
        {
            unsigned char l_439 = 0xE6L;
            int l_443 = 8L;
            l_443 = (((((safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((0x0DL || (((safe_sub_func_uint16_t_u_u((!(!(g_282 > 0x13L))), (safe_add_func_uint32_t_u_u((l_438 && (l_439 & (safe_div_func_uint32_t_u_u(g_94, p_34)))), ((l_442 || p_36) != g_313))))) , l_442) & p_37)), p_37)), p_35)) , l_438) & p_34) <= 0x81672197L), 4)) || l_442) | p_36), (-1L))), 0)) ^ p_35) && g_313) , 5UL) & g_189);
            return l_438;
        }
        l_444 = 0xA81C1450L;
    }
    else
    {
        g_101 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0x2D0EL, l_444)), g_101));
    }
    return l_444;
}







static const unsigned char func_38(unsigned p_39)
{
    unsigned short l_416 = 0x2EABL;
    const unsigned short l_419 = 0UL;
    for (g_282 = 0; (g_282 >= 2); g_282++)
    {
        unsigned char l_415 = 7UL;
        int l_417 = 0L;
        int l_418 = 1L;
        l_418 = func_42(func_46((safe_sub_func_int32_t_s_s(func_42((((safe_sub_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((func_42(g_189, (0x984F8AD5L || (safe_add_func_uint8_t_u_u(l_415, g_101))), (l_415 && (p_39 >= g_313))) , g_94), 1)) & l_415), 6)) || g_101) ^ g_5), 0UL)) , p_39) , g_101), g_282, p_39), p_39)), l_415, p_39, l_416), l_417, l_416);
        if (g_101)
            continue;
    }
    return l_419;
}







static char func_42(int p_43, int p_44, char p_45)
{
    unsigned l_255 = 6UL;
    int l_262 = 1L;
    unsigned l_338 = 1UL;
    unsigned char l_383 = 255UL;
lbl_396:
    if (((((p_45 , 0x8ADFB77FL) , l_255) || (p_44 == (safe_mod_func_uint8_t_u_u((func_46((safe_lshift_func_int8_t_s_u(g_101, p_43)), g_101, l_255, p_44) & l_255), g_189)))) , l_255))
    {
        l_262 = (safe_lshift_func_uint8_t_u_s(1UL, 4));
    }
    else
    {
        const int l_283 = 0xB447F4B4L;
        int l_355 = 0xF25ED7F0L;
        unsigned l_382 = 4294967291UL;
        l_262 = (safe_lshift_func_int8_t_s_s(p_45, 2));
        for (p_44 = (-4); (p_44 == (-5)); p_44 = safe_sub_func_int8_t_s_s(p_44, 9))
        {
            short l_267 = 1L;
            int l_284 = 0xB9957DAAL;
            unsigned short l_352 = 0xF58DL;
            l_284 = (l_267 <= (((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((p_44 , func_46((safe_mod_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((p_44 & ((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(0L, 0x4E1FB2BDL)), ((safe_add_func_uint32_t_u_u((248UL & g_282), ((p_43 ^ p_44) , p_43))) , g_101))) , 0x2B52L)), g_5)) ^ l_267), (-2L))), l_283, g_101, l_283)) & g_189), p_43)), 8)) , 0xF723L) , 252UL));
            for (l_255 = 0; (l_255 < 58); l_255 = safe_add_func_int32_t_s_s(l_255, 8))
            {
                unsigned l_306 = 1UL;
                l_262 = l_283;
                p_43 = ((!p_45) == (func_46(p_45, (0x1BL && ((((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(func_46(p_44, (func_46((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(7UL, 1L)) ^ (((safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(0x41L)), ((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((l_255 , l_306) , 0UL), g_282)), 0x5AF161C1L)) , (-1L)))) > p_43) || g_189)), 65531UL)), p_43)), g_101, l_267, p_45) , p_45), g_189, p_44), g_189)), 3)) && l_267) >= p_45) == (-9L))), g_282, g_189) != 0x174007D9L));
                p_43 = (safe_add_func_uint32_t_u_u(l_283, (safe_rshift_func_int8_t_s_s(l_306, 7))));
            }
            if (l_255)
            {
                g_313 = ((p_43 || ((g_101 && ((3L & (g_189 == p_44)) < (0xA2ACE542L && (((safe_lshift_func_uint16_t_u_u(((l_262 >= (0L ^ (func_46(p_44, g_282, g_282, p_44) , 0L))) & g_282), p_43)) || p_43) && 0xE36482B0L)))) >= l_283)) && g_101);
            }
            else
            {
                char l_341 = 0x9AL;
                const unsigned l_351 = 4294967286UL;
                if ((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_43, func_46((((safe_div_func_uint16_t_u_u(65532UL, (0x9AAD8E4EL || 1L))) == g_101) != (safe_sub_func_uint8_t_u_u(p_45, p_45))), g_101, ((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(7L, 6L)), g_189)) , 0x6F42L), l_262))), p_43)), 0x69L)))
                {
                    const unsigned short l_335 = 8UL;
                    for (l_267 = 11; (l_267 >= 18); ++l_267)
                    {
                        const unsigned l_332 = 9UL;
                        l_338 = ((safe_lshift_func_int8_t_s_u(l_332, func_46(((p_43 ^ (func_46(g_282, (safe_mod_func_int32_t_s_s(func_46(g_5, l_335, g_282, (((safe_sub_func_int8_t_s_s(p_43, p_44)) ^ 0x5EL) , l_255)), g_313)), g_313, g_313) == 251UL)) , g_189), g_282, g_282, p_44))) && l_332);
                        l_341 = (p_44 , (safe_div_func_int32_t_s_s(0L, g_313)));
                    }
                    if (l_335)
                        goto lbl_396;
                }
                else
                {
                    char l_353 = 0x7EL;
                    int l_354 = 1L;
                    for (g_313 = (-19); (g_313 != 15); g_313++)
                    {
                        unsigned short l_346 = 0xC915L;
                        l_354 = (safe_sub_func_int32_t_s_s(l_346, func_46((((l_338 , (((safe_add_func_uint32_t_u_u(0xBD838E30L, (safe_add_func_int8_t_s_s(0L, func_46(l_284, p_44, (func_46(g_282, g_189, func_46(g_94, l_351, p_45, l_352), l_353) || 0x89C20EA0L), p_44))))) , p_44) ^ p_45)) <= 0xCEA6L) & 0xEAL), p_45, g_189, g_313)));
                        l_355 = l_283;
                        l_262 = 7L;
                    }
                    if ((safe_add_func_int32_t_s_s(((func_46(((safe_add_func_int16_t_s_s(g_189, (-6L))) <= ((((((safe_div_func_int8_t_s_s(g_282, p_45)) , (((((((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((((safe_lshift_func_int8_t_s_u(g_282, g_282)) < (safe_div_func_uint32_t_u_u((g_5 <= ((((((p_43 && (safe_unary_minus_func_uint32_t_u((((safe_lshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s(g_189, l_262)) == g_282), 1)) >= g_313) || p_43)))) & g_282) | g_101) , l_355) > g_101) ^ l_355)), g_5))) , g_313) , g_313) == p_43), p_43)), l_283)) >= l_283) ^ g_282) > p_45) > p_44) | 0x0CL) > l_341)) , 0x972CL) >= g_101) , 0xD6L) > l_283)), l_353, l_355, p_43) >= 2UL) < l_354), l_255)))
                    {
                        p_43 = (l_262 < 0xA734AD22L);
                    }
                    else
                    {
                        l_284 = ((func_46(l_338, g_189, p_44, (safe_unary_minus_func_int32_t_s(func_46((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_338, p_44)), g_189)), (0x99FDA0DBL && (safe_div_func_int8_t_s_s((p_43 , l_267), l_354))), l_338, l_382)))) >= 5L) > p_43);
                    }
                }
            }
            if (g_313)
                continue;
        }
        p_43 = ((!l_383) , ((g_5 && ((safe_div_func_uint16_t_u_u(p_44, (safe_lshift_func_int8_t_s_u(func_46((func_46(((safe_mod_func_uint8_t_u_u((l_255 , 255UL), (safe_lshift_func_int16_t_s_u(((g_101 , (safe_add_func_uint8_t_u_u(l_382, ((safe_add_func_uint32_t_u_u(p_43, (0x65A1F3C9L || 0x61F99BEEL))) ^ (-6L))))) & l_338), 11)))) | g_101), p_44, l_255, p_45) ^ l_355), g_313, p_44, p_43), l_283)))) == g_313)) , p_44));
    }
    g_101 = ((p_43 && (safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(0x7FB7L, g_94)), (p_43 >= ((safe_div_func_uint16_t_u_u(l_338, g_94)) >= (p_45 != (((g_189 <= l_338) == p_44) , l_255))))))) != g_189);
    p_43 = 0L;
    return g_5;
}







static unsigned short func_46(unsigned short p_47, const unsigned p_48, short p_49, char p_50)
{
    int l_59 = (-1L);
    int l_95 = (-2L);
    char l_124 = 0x42L;
    char l_233 = 0xE5L;
    unsigned l_249 = 0x759DE1FDL;
    short l_250 = 0xEE62L;
    if ((p_49 == (g_5 <= g_5)))
    {
        unsigned l_64 = 8UL;
        int l_71 = 0xDF47B588L;
        short l_72 = 0xBD85L;
        unsigned char l_73 = 251UL;
        if (p_48)
        {
            return g_5;
        }
        else
        {
            unsigned l_54 = 1UL;
            int l_99 = (-3L);
            int l_100 = 4L;
            char l_106 = 0x40L;
            l_73 = (l_54 > (((g_5 != g_5) && (safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((l_59 || ((safe_mod_func_int16_t_s_s(g_5, g_5)) , ((+(safe_div_func_uint16_t_u_u((l_64 , (safe_add_func_int16_t_s_s(0x915FL, (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_5, l_64)), g_5))))), l_71))) || l_72))), g_5)) , 0x7AB81002L), p_48))) > l_54));
            if (g_5)
            {
                unsigned l_82 = 0x3BA2937BL;
                for (l_72 = 0; (l_72 >= (-5)); l_72 = safe_sub_func_int8_t_s_s(l_72, 1))
                {
                    unsigned short l_93 = 1UL;
                    g_94 = (0x718BL & ((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((((safe_div_func_int16_t_s_s(l_82, ((p_49 && (g_5 , (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0x41L, ((safe_add_func_int32_t_s_s((0L <= (safe_sub_func_int8_t_s_s(0xFDL, (((safe_mod_func_uint8_t_u_u(g_5, l_59)) || p_48) == g_5)))), g_5)) && l_54))), l_93)))) , p_48))) <= g_5) , p_47), 0x8DE3L)), p_48)) || p_48));
                    l_95 = 1L;
                }
            }
            else
            {
                unsigned l_96 = 0UL;
                int l_107 = 0xF84CD17FL;
                l_100 = (((((p_48 != (p_48 || g_5)) == (7UL && g_5)) <= (((0x54L ^ ((l_96 != (safe_add_func_int32_t_s_s(((((-1L) && l_72) , g_5) ^ 0UL), l_99))) != l_96)) <= (-1L)) > 0x6770660DL)) , p_50) , g_5);
                if (g_5)
                {
                    g_101 = (g_94 <= (g_94 || l_96));
                    l_100 = ((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((l_59 , ((0xDB4AL <= ((((g_5 , l_96) && g_94) || p_49) | g_5)) ^ l_100)) < g_94), g_101)), 13)) ^ l_95);
                    l_107 = (p_50 > l_106);
                }
                else
                {
                    unsigned short l_110 = 1UL;
                    int l_113 = 4L;
                    for (l_95 = (-25); (l_95 != 17); l_95++)
                    {
                        l_110 = g_94;
                    }
                    if (l_96)
                    {
                        g_101 = (safe_mod_func_int8_t_s_s(g_94, g_94));
                        l_95 = 0xF7977D32L;
                    }
                    else
                    {
                        l_113 = p_49;
                    }
                    g_101 = ((((((safe_add_func_uint32_t_u_u(l_113, 0x06DC7391L)) <= (g_101 != ((safe_add_func_int8_t_s_s((p_47 == (safe_add_func_uint16_t_u_u((((248UL >= l_72) >= p_48) | (safe_rshift_func_uint16_t_u_u(0x7583L, 0))), (safe_lshift_func_int8_t_s_u(0xA6L, 3))))), l_110)) & 0x225CL))) >= 0x7457L) != 1L) ^ l_113) == l_124);
                    g_101 = (((safe_div_func_int32_t_s_s(((!(g_94 < p_50)) > l_71), l_107)) , ((((safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_99, ((p_47 >= (safe_sub_func_uint8_t_u_u((p_48 >= (g_94 < g_101)), 0L))) || l_110))), 0)) || g_101) ^ p_47) ^ l_107)) | 0x64ADL);
                }
                return g_101;
            }
            l_71 = (((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((((safe_add_func_uint8_t_u_u(((p_49 , ((g_101 && ((safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((-2L) & (1UL < (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(l_124, (safe_div_func_int32_t_s_s((~(-10L)), p_50)))), p_50)), 0L)), g_101)))), l_72)) > 0x30L), l_100)) != p_48), g_94)) == 65535UL)) < l_100)) < p_47), g_94)) == l_71) > g_94))), l_59)), p_50)) || p_48) <= 0x7036DBD5L);
        }
        for (l_72 = 0; (l_72 < (-27)); l_72 = safe_sub_func_uint8_t_u_u(l_72, 4))
        {
            int l_162 = 0xADBBA814L;
            unsigned l_165 = 0UL;
            l_165 = (((l_162 <= ((((g_101 || g_94) , ((g_5 ^ p_49) == (l_162 != p_50))) >= (g_5 & ((((safe_add_func_uint16_t_u_u((((0x35DD9051L > 0xA8B2A03DL) & g_94) || g_5), l_64)) , p_50) , g_94) != p_49))) != l_162)) , g_101) ^ (-4L));
        }
        l_71 = p_47;
        l_95 = g_5;
    }
    else
    {
        unsigned l_170 = 1UL;
        int l_179 = 0x0598F6BBL;
        l_179 = (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((l_170 > (g_94 != (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_5, (g_5 != ((l_170 , (!g_5)) != p_48)))), ((safe_sub_func_int32_t_s_s((((l_170 != (safe_rshift_func_int8_t_s_u(p_50, g_94))) < p_50) <= 0xFB85L), l_170)) ^ 0x3E7E8807L))))), 13)), 3)) , 0xF842L) , (-7L));
        g_101 = (l_124 >= l_59);
        for (g_94 = 0; (g_94 > 27); g_94 = safe_add_func_int16_t_s_s(g_94, 6))
        {
            unsigned short l_198 = 65530UL;
            int l_220 = 0x60FE60D9L;
            for (p_49 = 0; (p_49 != 17); p_49 = safe_add_func_uint32_t_u_u(p_49, 6))
            {
                short l_201 = 4L;
                unsigned short l_248 = 0UL;
                if ((l_59 >= p_50))
                {
                    unsigned l_188 = 0x3724E75DL;
                    int l_197 = 0L;
                    l_179 = (((safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(g_101, ((l_188 || (g_189 | ((((65528UL || (p_49 > (((g_189 , ((((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_49, 0)), p_49)) , ((0xFA4EC0DFL && 4294967292UL) <= 0xA9F1L)) <= l_188) , p_49)) <= l_124) >= 0xA9E9L))) <= p_49) >= l_188) & 0xEC77L))) && l_179))) || l_188), 0x8A685A1DL)) & 1UL) | l_188);
                    if (p_47)
                        break;
                    for (l_179 = 0; (l_179 != (-6)); l_179 = safe_sub_func_int32_t_s_s(l_179, 5))
                    {
                        int l_196 = 0x756BAA74L;
                        l_196 = g_5;
                        l_197 = (~9L);
                    }
                    if (l_188)
                    {
                        l_95 = l_198;
                        l_197 = (((p_49 >= l_201) < ((p_47 | (safe_div_func_int8_t_s_s((+(p_48 > (l_201 | (safe_sub_func_int16_t_s_s(p_48, (safe_lshift_func_int8_t_s_u(p_48, p_48))))))), (safe_rshift_func_int16_t_s_u(g_5, l_188))))) != 3UL)) && 65535UL);
                    }
                    else
                    {
                        if (p_48)
                            break;
                        l_179 = (g_189 ^ (((-7L) && (g_94 > (g_94 | l_59))) , 0x7550L));
                    }
                }
                else
                {
                    int l_216 = 0L;
                    for (p_50 = 3; (p_50 > 24); ++p_50)
                    {
                        l_220 = (safe_rshift_func_int8_t_s_s(l_95, (safe_add_func_int16_t_s_s(l_216, (safe_sub_func_uint32_t_u_u(4294967295UL, (safe_unary_minus_func_uint32_t_u(g_5))))))));
                    }
                }
                l_220 = (0x5E86A8CAL & (((safe_add_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((~(safe_rshift_func_uint16_t_u_s(p_47, 2))), p_47)) || (-1L)) , ((safe_div_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u(((l_233 , (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((((p_47 , ((safe_div_func_int8_t_s_s(g_94, (safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((((5UL > p_49) && g_189) > 0x0FF4D6F5L) == g_5), l_201)), g_101)))) & l_248)) , l_220) >= g_189) , 1UL), l_170)) , l_249), g_94)) < l_249) >= 0xC1L), l_198)) , l_95), p_48))) & l_220), g_94)) < l_95) >= (-1L)), l_170)) == g_101), g_189)) , p_48)), 0x49334CCFL)) , l_201) & l_250));
            }
            l_95 = (l_179 && (((l_198 | 0x0DCB8892L) ^ (safe_rshift_func_int16_t_s_u(0x816CL, (((g_94 <= p_49) <= (safe_add_func_int16_t_s_s((2UL > 0x6AE03A9DL), 0xDEF9L))) > p_49)))) & g_5));
        }
        g_101 = 1L;
    }
    return g_189;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1069, "g_1069", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1260, "g_1260", print_hash_value);
    transparent_crc(g_1677, "g_1677", print_hash_value);
    transparent_crc(g_1722, "g_1722", print_hash_value);
    transparent_crc(g_1883, "g_1883", print_hash_value);
    transparent_crc(g_1922, "g_1922", print_hash_value);
    transparent_crc(g_2034, "g_2034", print_hash_value);
    transparent_crc(g_2038, "g_2038", print_hash_value);
    transparent_crc(g_2236, "g_2236", print_hash_value);
    transparent_crc(g_2268, "g_2268", print_hash_value);
    transparent_crc(g_2331, "g_2331", print_hash_value);
    transparent_crc(g_2378, "g_2378", print_hash_value);
    transparent_crc(g_2429, "g_2429", print_hash_value);
    transparent_crc(g_2432, "g_2432", print_hash_value);
    transparent_crc(g_2450, "g_2450", print_hash_value);
    transparent_crc(g_2460, "g_2460", print_hash_value);
    transparent_crc(g_2479, "g_2479", print_hash_value);
    transparent_crc(g_2484, "g_2484", print_hash_value);
    transparent_crc(g_2577, "g_2577", print_hash_value);
    transparent_crc(g_2597, "g_2597", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
