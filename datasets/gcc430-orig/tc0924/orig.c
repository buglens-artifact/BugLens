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



static volatile unsigned g_5 = 0x37186542L;
static int g_12 = 0L;
static unsigned g_112 = 4294967295UL;
static int g_140 = 0x01335C4AL;
static char g_277 = 0x81L;
static unsigned g_542 = 5UL;
static int g_676 = (-3L);
static int g_760 = 0x6898D152L;
static short g_890 = 0x632FL;
static char g_1183 = 0xD6L;
static unsigned g_1190 = 0x278D7940L;
static unsigned char g_1254 = 0x49L;
static unsigned g_1268 = 0x5E70AA55L;
static short g_1271 = (-1L);
static volatile unsigned g_1332 = 4294967295UL;
static unsigned g_1378 = 0UL;
static const volatile unsigned g_1394 = 0x000E50CEL;
static int g_1791 = 0x94B385BCL;
static unsigned short g_1807 = 0x01C5L;
static const volatile int g_1815 = 0L;
static unsigned g_1827 = 0x0A648A27L;
static short g_1828 = (-1L);



static unsigned func_1(void);
static unsigned func_8(unsigned char p_9, unsigned p_10);
static const unsigned func_13(int p_14, const int p_15, unsigned char p_16, short p_17, unsigned p_18);
static int func_19(short p_20);
static short func_23(unsigned short p_24, unsigned char p_25, const short p_26, unsigned p_27);
static unsigned short func_28(int p_29, char p_30, int p_31, unsigned short p_32, unsigned p_33);
static const short func_49(short p_50, int p_51, int p_52, unsigned p_53, int p_54);
static int func_55(int p_56, unsigned char p_57, unsigned short p_58);
static unsigned short func_59(int p_60, unsigned short p_61, unsigned p_62, unsigned p_63);
static int func_66(unsigned char p_67, int p_68, const short p_69, unsigned p_70);
static unsigned func_1(void)
{
    short l_2 = (-9L);
    int l_11 = (-7L);
    unsigned l_1256 = 1UL;
    unsigned short l_1261 = 2UL;
    short l_1262 = 0x19A8L;
    int l_1263 = 0x59798B19L;
    short l_1297 = 0x9757L;
    int l_1306 = 3L;
    int l_1307 = 0x704933D0L;
    char l_1333 = 0L;
    const unsigned l_1618 = 1UL;
    short l_1637 = 0x2056L;
    unsigned l_1663 = 0UL;
    int l_1823 = 9L;
    unsigned char l_1854 = 0x9CL;
    unsigned l_1910 = 9UL;
    unsigned char l_1915 = 3UL;
lbl_1318:
    l_1263 = (((5UL | ((((l_2 > (safe_add_func_int8_t_s_s(g_5, (safe_mul_func_uint8_t_u_u(((((((func_8(l_11, g_12) < l_1256) , func_28((safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((!0UL), (g_277 , l_1261))) <= g_760), 8UL)), g_12, l_1262, l_1261, g_140)) == l_1256) > l_1261) == 0xD3L) , g_277), g_1254))))) , g_112) , g_277) , (-1L))) ^ l_1261) || 4294967295UL);
    if (((((safe_sub_func_uint8_t_u_u((g_676 && (func_59(func_55((g_1190 , (safe_div_func_int8_t_s_s((g_140 , g_5), ((0x3D72L || 0xA392L) , l_1261)))), g_112, g_112), g_1254, g_1190, g_542) , l_2)), g_542)) < g_12) | g_1268) == g_1183))
    {
        char l_1278 = 0x72L;
        unsigned short l_1283 = 1UL;
        char l_1314 = (-1L);
        int l_1377 = 0x9A94A994L;
        const short l_1408 = 0L;
        char l_1409 = 0x46L;
        int l_1410 = 0x434A13ADL;
        unsigned l_1415 = 0x0B4182BEL;
        unsigned l_1451 = 4294967291UL;
        const int l_1454 = 1L;
        short l_1481 = 0x87C1L;
        char l_1492 = 0xC9L;
        const unsigned l_1523 = 6UL;
        unsigned short l_1599 = 0xCF61L;
        short l_1635 = 0x6EFCL;
        const unsigned short l_1674 = 1UL;
        unsigned char l_1709 = 0xF4L;
        int l_1786 = (-1L);
        if ((safe_div_func_int16_t_s_s(((g_1271 == (safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(l_1278, 5)), 14)) > (safe_div_func_uint16_t_u_u(l_1256, l_1278))) , g_140), ((l_1278 <= l_1263) , ((safe_mul_func_int8_t_s_s(6L, 0xB8L)) , l_1283))))) < g_676), l_1262)))
        {
            int l_1284 = 1L;
            unsigned short l_1331 = 2UL;
            unsigned l_1452 = 0xC174AB4DL;
            l_1284 = 0x1DFADA6CL;
            g_12 = (func_49((safe_sub_func_int32_t_s_s((!(safe_sub_func_int8_t_s_s((((-2L) | ((safe_mul_func_uint8_t_u_u(0UL, g_5)) , (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_890, 12)), (g_1183 ^ g_676))), func_59(l_1297, (safe_lshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((((g_1183 && (((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_1262, 0UL)), l_1256)) || l_1306) == 0xE8L)) > 1L) && 1L) != g_1254) || l_1307), l_1283)) > 0x1C64L), 2)), g_12, g_1190))))) >= 0UL), 0x92L))), 4294967294UL)), l_1278, g_1254, g_112, l_1284) > l_1278);
            if ((l_1278 , (func_49(((((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_1284, (((((safe_rshift_func_int8_t_s_s((g_5 , ((g_1183 <= l_1284) | g_1190)), (0x962DCD6DL != (-2L)))) < (g_1271 && 1L)) && l_1314) != g_1268) ^ 0L))), g_542)) >= 0x46L) <= g_760) || g_542), g_140, l_1284, g_1271, g_140) <= l_1278)))
            {
                int l_1317 = 1L;
                for (g_890 = 24; (g_890 < 20); g_890--)
                {
                    char l_1319 = 0x35L;
                    l_1317 = 0xF4BB8708L;
                    if (g_12)
                        goto lbl_1318;
                    g_12 = ((((func_28(l_1319, (safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_s((l_1261 , ((((((safe_mul_func_int8_t_s_s(g_12, func_23(g_1190, (((~g_5) || (l_1283 > func_23(l_1317, ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(func_59((l_1284 , (safe_mul_func_uint16_t_u_u(g_542, l_1319))), g_1183, g_1254, g_1183), 14)) != l_1284), g_12)) ^ 0xC7L), g_676, l_1317))) , g_676), l_1317, l_1284))) && g_1183) == g_277) ^ 4UL) || 0x7D174B11L) && 0xEA9D3BD1L)), l_1319)))), l_1331, l_1262, l_1317) < g_760) , l_1317) < 0xABB2277DL) <= g_760);
                    g_676 = g_1332;
                }
                l_1284 = ((l_1284 , g_676) , 0L);
            }
            else
            {
                char l_1376 = 0L;
                int l_1379 = (-7L);
                int l_1392 = (-10L);
                g_12 = (l_1333 <= ((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_1254, 4)), 0x6469L)), (g_1271 ^ 0x0B9DE675L))), (((safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((l_1263 < (65527UL >= g_542)), g_1271)), g_542)) , g_112) >= l_1262))) , l_1284));
                l_1284 = (safe_add_func_uint8_t_u_u(func_28(((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(1L, 8)), (safe_div_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((g_5 > (func_19(g_140) > (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(g_542, ((l_1331 == ((safe_lshift_func_uint16_t_u_u(g_890, l_1314)) >= (safe_div_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((!((l_1333 ^ l_1376) | g_542)), g_1268)) < 0x49L), g_1190)))) , 253UL))) , 0xB2ECL), l_1377)))), 0xC9C02F7DL)), g_542)), g_1271)), 0L)) && 0x0E4FL) | g_1378), 0xC85E50B3L)) == 0L) ^ g_1254), g_1254)) && l_1284), 0x6E99L)))) && g_140), g_12, l_1379, l_2, l_1376), l_1379));
                l_1392 = (g_1183 != (g_1378 && ((g_1190 & ((safe_mod_func_int8_t_s_s((l_1379 , (g_1332 & l_1297)), (safe_add_func_uint8_t_u_u(0x05L, l_1297)))) < (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((+((safe_rshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((-3L) || l_1377), g_676)) || l_1261), g_542)) > g_1190)), 14)), l_1376)))) , 0x3390L)));
                if ((safe_unary_minus_func_int32_t_s(l_1278)))
                {
                    if (l_1376)
                        goto lbl_1318;
                    g_760 = (g_1394 | (l_1392 > g_112));
                    g_12 = 0x11A7BB2BL;
                }
                else
                {
                    unsigned l_1405 = 1UL;
                    l_1410 = ((safe_sub_func_int16_t_s_s(0x5337L, ((+(safe_add_func_uint16_t_u_u(0xFB3BL, 1L))) & (((0x04L < (safe_div_func_int16_t_s_s(((func_66((safe_lshift_func_int8_t_s_s(g_1183, 1)), (safe_add_func_int16_t_s_s(func_8((((l_1405 != l_1283) == g_1190) < (((safe_div_func_int32_t_s_s(((((g_542 , l_1408) , 1L) | 0xDB5FF885L) || g_140), 8UL)) <= 0xE6L) == l_1284)), l_1331), 1L)), g_890, g_1254) <= g_5) && l_1409), g_890))) , l_1376) , 0x231BB4A9L)))) <= 0x22C5L);
                    for (g_1183 = 0; (g_1183 >= (-29)); g_1183--)
                    {
                        unsigned char l_1416 = 0x81L;
                        g_676 = (+(func_55(((1L != (((safe_sub_func_uint8_t_u_u(255UL, l_1415)) || l_1416) <= 0x2CD4L)) , (((safe_unary_minus_func_uint8_t_u((l_1409 != (((l_1405 ^ (g_1268 <= ((func_55(((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(g_1394, g_760)), l_1262)), g_277)) <= 0xD9L), l_1376, l_1416) || g_277) <= g_1254))) > 1L) , g_676)))) >= l_1331) && 0x956AB355L)), g_12, l_1379) , g_1394));
                        g_676 = l_1331;
                        l_1392 = (safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s((l_1283 , (safe_sub_func_int32_t_s_s(func_13((((safe_lshift_func_uint16_t_u_s(l_1405, 5)) >= (safe_mod_func_uint16_t_u_u(0xF2A5L, (safe_div_func_uint8_t_u_u((g_542 & 0x11578794L), (safe_rshift_func_int8_t_s_s((((l_1377 < ((g_12 > func_49((~(((safe_rshift_func_int16_t_s_s((~g_140), 10)) ^ (safe_div_func_uint8_t_u_u(((((((safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((l_1307 | 65532UL) <= l_1451), (-1L))), l_1416)), l_1452)) | l_1405), 0x14L)), 5)) , l_1307) > (-1L)) | 0UL) == l_1377) != g_140), g_760))) > l_1405)), g_760, l_1405, l_1416, l_1261)) < g_890)) | 0x7BA7L) ^ g_5), 6))))))) && g_890), l_1284, g_1378, l_1284, g_1271), g_890))), g_1183))));
                    }
                    l_1284 = 0x39CEB3C3L;
                    l_1307 = (l_1331 > g_1190);
                }
            }
            return g_1254;
        }
        else
        {
            const char l_1453 = 0x28L;
            if ((func_66(l_11, g_1332, l_1453, ((l_1453 & l_1453) >= l_1454)) ^ g_890))
            {
                unsigned short l_1459 = 0x6D13L;
                char l_1460 = 0xBFL;
                l_1460 = ((safe_rshift_func_int16_t_s_s(0x7755L, (safe_mul_func_uint8_t_u_u(g_12, 255UL)))) , (l_1459 , l_1377));
            }
            else
            {
                short l_1463 = 6L;
                const unsigned l_1493 = 0x5AC21F6FL;
                g_760 = ((8L >= (func_59(l_1453, l_1463, g_1394, g_1378) >= ((((g_12 <= g_890) | (safe_add_func_int32_t_s_s(g_890, g_1254))) , 1L) == g_140))) & g_1254);
                for (g_542 = 0; (g_542 > 5); ++g_542)
                {
                    unsigned l_1478 = 0xDCAD1AD3L;
                    g_760 = (((safe_div_func_int8_t_s_s((g_12 || (l_1453 , (l_1261 && g_277))), (safe_sub_func_int32_t_s_s(func_66((g_1254 ^ g_1271), (safe_div_func_uint8_t_u_u((g_1183 || (((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((l_1478 || ((safe_sub_func_int16_t_s_s(l_1453, g_112)) , l_1481)) | g_1332) , 7UL), g_1378)), 0x76L)) != g_1378) || g_1268)), l_1478)), l_1306, l_1409), l_11)))) , 0L) && l_2);
                    l_1410 = (((((~(safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((l_1451 , g_1190) == (((((safe_unary_minus_func_int16_t_s(0x15A5L)) < (safe_unary_minus_func_uint32_t_u(func_19(((safe_mod_func_uint32_t_u_u(((((func_66((l_1451 , (g_1268 || (safe_mod_func_uint32_t_u_u(l_1463, func_49(g_1271, ((-1L) && 9L), l_1463, g_112, g_1183))))), l_1453, g_5, l_1283) || 0L) & l_1492) > g_1268) , l_1408), 0x04A54F5DL)) | l_1453))))) & l_1492) & 0x8D368D43L) || l_1415)), g_1254)), (-8L)))) , l_1493) && 0xE210L) <= g_542) ^ l_1453);
                    g_12 = ((-1L) ^ (g_676 , func_28(l_1453, ((((g_1378 , 1L) == (1L && (safe_unary_minus_func_uint32_t_u(func_19(((((((safe_rshift_func_int16_t_s_u(0x31B1L, 7)) ^ 0x1709E2F6L) ^ (l_1451 == l_1451)) , 0x07L) & 0x47L) , l_2)))))) | 249UL) , g_1378), g_1254, g_1332, g_1268)));
                }
            }
        }
        l_1306 = ((l_1283 , (func_8((((!0x37A9L) == ((safe_add_func_int32_t_s_s(((!(((((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s((246UL <= l_1481), l_1408)) , ((safe_mod_func_uint8_t_u_u((func_13((safe_div_func_int8_t_s_s(0x8FL, (((safe_lshift_func_uint16_t_u_s(g_890, (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((0L & l_1256) == 0xFFL), 0x7EL)), l_1278)), g_676)), g_277)), 4)), 6)))) , 6L) ^ g_277))), l_1523, g_1183, g_12, g_12) > g_1254), g_1378)) & g_1183)) , 0UL), g_1271)), 5)) ^ (-7L)) < l_2) , g_277) || 0UL)) || 6L), g_1271)) > g_1332)) , l_1492), g_1268) , 0xC13662F1L)) || 0xC6A21504L);
        if (g_1271)
        {
            short l_1535 = 0xF65BL;
            char l_1538 = 0x84L;
            int l_1539 = (-1L);
            l_1539 = ((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((!((-4L) & (safe_div_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u(((g_1332 && ((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((func_59(l_2, (func_59((func_55((l_1283 && (l_1535 , (l_1535 ^ (safe_div_func_uint32_t_u_u(3UL, 0x30423B4AL))))), ((g_1190 > l_1261) , 0x12L), l_1535) && l_1535), g_1190, l_1535, l_1535) > g_676), g_1183, l_11) > 0xF33AAEBAL), g_760)), g_1394)) | 0xC8797019L)) == 5UL))) , g_1394), g_1271)))), g_542)), g_12)) >= l_1538);
            for (g_1378 = (-15); (g_1378 == 8); ++g_1378)
            {
                short l_1542 = 0xC21AL;
                int l_1554 = (-2L);
                if (l_1542)
                {
                    return l_1539;
                }
                else
                {
                    for (l_1333 = 0; (l_1333 > 18); ++l_1333)
                    {
                        unsigned short l_1553 = 3UL;
                        int l_1555 = 0L;
                        if (l_1454)
                            goto lbl_1318;
                        l_1554 = ((safe_div_func_uint8_t_u_u((((((!0xDFEFD6A4L) < func_49(l_1333, (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(func_23(l_1553, g_1268, g_1271, g_1268), 6UL)) , (l_1535 == g_542)), (-1L))), l_1314)), l_1553, g_1268, g_1268)) == g_12) , l_1539) == g_1183), l_1535)) >= l_1408);
                        l_1555 = l_1523;
                        g_676 = 0x7C48A6E7L;
                    }
                    l_1539 = (safe_mod_func_uint32_t_u_u(0x68A5F2E3L, (g_1378 , (+(l_1554 <= (safe_div_func_int8_t_s_s(((g_5 != func_8((g_890 | g_760), l_1542)) || ((safe_div_func_uint16_t_u_u(((((g_12 ^ g_1190) <= l_1492) > l_1554) & 1UL), 1UL)) < g_112)), (-8L))))))));
                    l_1554 = l_1261;
                    g_12 = g_12;
                }
                g_140 = l_1283;
                l_1554 = (safe_mul_func_uint16_t_u_u((!(l_1554 > 0x364AEC0AL)), (((safe_mul_func_uint16_t_u_u((func_49((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((g_676 , ((((l_1542 , (0x92966221L && (safe_unary_minus_func_uint8_t_u(((func_13(l_1538, (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((safe_lshift_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(func_13(((safe_unary_minus_func_int16_t_s(0xA138L)) | g_5), l_1554, l_1554, g_112, g_760), l_1410)) >= l_1307), g_1183)) , g_1183))), g_1271)), g_1271)), 0x04C2L)))), g_1378, g_1268, g_890) >= 8L) < 0L))))) < g_1378) , g_760) <= g_1271)), 15)) > 5L), 0L)), 0L)), 0)), g_1254, l_11, g_1190, g_1268) , g_1394), g_1254)) & 0L) , (-2L))));
                l_1554 = 9L;
            }
        }
        else
        {
            unsigned char l_1594 = 0x60L;
            int l_1653 = 0xC57C4BD6L;
            int l_1700 = 1L;
            unsigned l_1775 = 0UL;
            unsigned short l_1798 = 2UL;
            int l_1814 = 1L;
            unsigned l_1843 = 9UL;
            int l_1844 = 0x2CFF07C0L;
            if ((l_1523 >= (safe_mod_func_uint16_t_u_u((func_13(g_1268, (safe_rshift_func_int8_t_s_u((0UL != func_49(g_1332, g_112, l_1594, ((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(l_1599, g_1271)), ((safe_div_func_uint16_t_u_u((!(g_760 > 0x7152L)), 0xA38AL)) | 0x91E00602L))) | 0xCAL), g_112)), 0)), g_1190, g_1254, g_542) == 0x5D58L), g_1271))))
            {
lbl_1602:
                if (l_1278)
                    goto lbl_1318;
            }
            else
            {
                const unsigned char l_1605 = 1UL;
                if (l_1451)
                    goto lbl_1602;
                l_1306 = (safe_sub_func_uint32_t_u_u(func_13(l_1594, l_1605, (safe_add_func_uint8_t_u_u(((+((safe_lshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((!(g_5 > g_542)), (safe_add_func_int32_t_s_s(((func_49(g_277, ((safe_div_func_int16_t_s_s((((0xEDFFL >= g_1254) , g_140) > (+l_1618)), 0x4406L)) == g_277), l_1262, l_1454, l_1410) >= 255UL) && (-1L)), 0xC818E40BL)))), g_1183)) == l_1605), g_1378)) >= l_1333)) || l_1594), g_1190)), l_1605, l_11), l_1409));
            }
            if ((8UL | (-1L)))
            {
                short l_1623 = 4L;
                short l_1651 = (-3L);
                int l_1677 = 0xE0055546L;
                int l_1678 = 5L;
                if ((!(((((l_1262 & (safe_sub_func_int8_t_s_s((g_1190 != 4294967294UL), g_1254))) < ((func_66(g_1190, ((l_1523 || ((safe_add_func_int16_t_s_s(g_1378, 0x88F8L)) <= ((g_676 > l_1297) == l_1623))) >= g_760), l_1307, l_1262) ^ g_1332) <= 1L)) & (-9L)) && g_760) , 1L)))
                {
                    int l_1628 = (-8L);
                    int l_1660 = 8L;
                    if ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(func_23(g_542, l_1628, (((safe_sub_func_int8_t_s_s((func_59((0xBCL | g_1190), g_1183, l_1481, g_1394) , (((safe_mod_func_int16_t_s_s(func_49(((safe_div_func_int8_t_s_s(g_1394, g_1378)) , 7L), l_1618, l_1635, g_112, g_1271), 0x05D6L)) , 0x5C630FB0L) == l_1263)), g_542)) > (-1L)) , (-2L)), g_1268), 0x5B79CBCAL)), 7)))
                    {
                        short l_1636 = 0x0B5AL;
                        short l_1650 = 1L;
                        int l_1652 = 4L;
                        l_1636 = l_1628;
                        if (l_1377)
                            goto lbl_1654;
                        g_12 = (1L < g_140);
                        l_1628 = (g_760 , func_8(func_19(l_1262), (g_12 , ((g_1254 >= ((l_1637 , ((safe_add_func_uint32_t_u_u(l_1636, (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u(g_542, ((0xA8L && 0xF1L) || l_1306))), l_1650)), 0xD8L)) , 4UL) == 0x8D72L), g_1268)), g_1183)))) == 0xD46AL)) && g_1268)) == l_1261))));
                        l_1652 = l_1651;
                    }
                    else
                    {
lbl_1655:
                        l_1653 = (func_8(l_2, g_890) , l_1306);
lbl_1654:
                        l_1653 = 1L;
                        return g_1254;
                    }
                    if (l_1481)
                        goto lbl_1655;
                    for (g_760 = 0; (g_760 == 19); ++g_760)
                    {
                        unsigned short l_1664 = 65535UL;
                        g_12 = ((func_23(((safe_lshift_func_int16_t_s_s(func_49(((l_1628 , (~l_1651)) <= (func_55((l_1651 >= l_1660), l_1628, ((safe_mul_func_int8_t_s_s((func_55(l_1623, l_1663, g_5) ^ l_1594), g_890)) != l_1651)) , l_1664)), g_760, g_1190, l_1660, l_1623), g_890)) , 0x39FCL), g_1190, g_890, l_1651) == 3UL) || l_1333);
                        g_140 = l_11;
                    }
                    g_140 = 0xA6B46B06L;
                }
                else
                {
                    short l_1665 = 1L;
                    g_760 = l_1665;
                    return g_1378;
                }
                l_1410 = func_8((((safe_mod_func_uint8_t_u_u(g_12, (func_19(((l_1635 != ((safe_mod_func_uint32_t_u_u((l_1623 , (l_1653 >= 4294967291UL)), l_1623)) >= 1UL)) || l_1262)) ^ 4UL))) == l_1451) ^ g_1254), l_1451);
                l_1678 = (func_23(g_1183, (safe_sub_func_int32_t_s_s((l_1651 < ((((safe_div_func_int32_t_s_s(l_1653, l_1674)) & (func_13((safe_mul_func_uint8_t_u_u(g_676, ((g_1183 || func_66(g_140, g_1190, g_277, g_1183)) == g_12))), g_1271, g_1271, g_1332, l_1677) , l_1653)) <= 65535UL) != 0xF09746C5L)), 0x7A11C809L)), g_890, l_1256) != 1UL);
            }
            else
            {
                unsigned l_1727 = 8UL;
                l_1653 = (safe_mod_func_uint32_t_u_u(4294967287UL, g_1183));
                if (((((0xE891L != (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_1410, ((~(safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(246UL, 2)), g_760)), (safe_div_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(g_5)), g_140))))) ^ (safe_mul_func_int16_t_s_s(((g_1190 || ((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((~l_1377), g_1268)), l_1599)) != l_1263)) < g_112), 0xD535L))))), 2L))) ^ (-3L)) < 0xCE37CDE1L) != l_1700))
                {
                    const unsigned short l_1722 = 0x9EA1L;
                    unsigned l_1728 = 0x23A95500L;
                    short l_1746 = (-1L);
                    int l_1808 = 0xE629AB3EL;
lbl_1770:
                    l_1410 = func_49((((g_1271 < (safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_1271, (safe_rshift_func_int8_t_s_s(l_1709, (safe_sub_func_int8_t_s_s((~func_59(func_28((safe_add_func_uint8_t_u_u(g_140, ((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(l_1722, 4)), (((((l_1635 != ((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_1722, 0x32L)), (0x22L & g_676))) || l_1700)) > g_1254) > l_1700) || 4294967290UL) < 1L))), 2)) > g_277) || 3UL), 0)) > g_890))), l_1727, l_1728, g_1183, l_1728), g_12, g_1378, g_760)), l_1727)))))), l_1594)), g_1394))) , g_5) , l_1481), g_1183, g_1190, g_1190, g_1268);
                    if (g_542)
                    {
                        short l_1729 = 0xECFEL;
                        g_12 = ((l_1729 , (((safe_rshift_func_int16_t_s_u(g_140, (((-1L) && (safe_div_func_uint16_t_u_u((((+(l_1700 , (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_1254, ((((func_59(((g_1394 >= (l_1728 > ((safe_mod_func_int16_t_s_s((g_1268 > (safe_add_func_int32_t_s_s(g_1190, l_1729))), g_676)) != (-1L)))) , l_1728), g_277, g_112, l_1700) > 0x38L) < l_1728) & g_542) == l_1674))), g_676)) , l_1729) || 0xDBL), 7)), g_12)))) & g_1254) , l_1722), g_1254))) <= l_1727))) , l_1729) , g_890)) && g_1268);
                        g_760 = g_1332;
                    }
                    else
                    {
                        unsigned l_1753 = 0UL;
                        unsigned short l_1769 = 65528UL;
                        l_1746 = g_112;
                        g_760 = (g_760 < (((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_1378, ((safe_div_func_uint16_t_u_u(func_66((l_1753 <= (safe_unary_minus_func_uint16_t_u((l_1306 | func_28(((safe_mod_func_int16_t_s_s(((((safe_mod_func_int16_t_s_s(l_1722, (safe_lshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_1674, 65535UL)), 8)), (+(((safe_div_func_int32_t_s_s((func_28(g_277, l_1728, g_140, g_1271, l_1618) || 0UL), (-8L))) || l_1727) && g_542)))) ^ g_1378), g_1268)))) , g_1378) <= 0xA603D154L) ^ l_1599), 65527UL)) & l_1728), l_1769, g_5, l_1722, g_1271))))), l_1262, l_1278, g_1271), 0x60F7L)) && 4UL))), g_1254)) && l_1262) && 1UL));
                        if (l_1599)
                            goto lbl_1770;
                        l_1786 = (safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((((-1L) != (4294967286UL | l_1775)) , (safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((((0xAA6D2C5EL == (g_1271 ^ (l_1727 , g_1271))) & (safe_add_func_uint32_t_u_u(l_1333, (safe_sub_func_uint8_t_u_u((l_1727 ^ g_676), 0x2EL))))) , l_1618) | 4UL), l_11)) | g_12), l_1786)) & l_1746) < l_1256), 5))), g_1254)) != g_760), l_1722));
                    }
                    g_760 = (((0x45L && (safe_div_func_int8_t_s_s((l_1262 <= (((g_277 , g_542) | (((safe_div_func_int16_t_s_s(((g_112 && (func_66(l_1775, g_1791, (safe_div_func_int16_t_s_s((((safe_add_func_int32_t_s_s(g_140, (((safe_div_func_int8_t_s_s(((l_1594 , l_1410) , l_1594), g_1183)) && 0x943E44C3L) , g_1378))) , 0x09L) != 0xDCL), l_1409)), l_1798) >= 65526UL)) || 0x3FL), 1L)) < g_1791) >= g_1394)) , g_676)), g_1791))) || l_1415) , l_1727);
                    l_1263 = (func_28((((safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(l_1728, ((((((safe_mul_func_int16_t_s_s(g_760, ((func_59(((safe_div_func_uint32_t_u_u((l_1674 | g_277), l_1637)) , (g_1268 >= (g_1807 < (((((l_1727 || l_1728) & 0xA047E9D6L) < g_1807) != 1UL) ^ 0xA1L)))), l_1808, g_112, l_1306) && l_1808) ^ g_1394))) , l_1775) == l_1283) && (-2L)) && l_1594) ^ 0L))) < 0x9881L), l_1808)) == g_1183) > g_277), l_1700, g_1254, l_1307, g_676) | l_1798);
                }
                else
                {
                    int l_1822 = 0x602E971CL;
                    char l_1826 = 0xD0L;
                    if ((((safe_mod_func_uint16_t_u_u((func_59((((safe_unary_minus_func_uint16_t_u((safe_div_func_int32_t_s_s(l_1727, l_1814)))) > func_28(((g_1815 , (0xFDFFL && ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((l_1822 , g_1190) && (func_49((l_1637 , ((l_1823 || (safe_rshift_func_uint8_t_u_s(g_1394, l_1727))) , 0L)), l_1727, g_760, l_1823, l_1700) , g_140)) && g_1190), l_1727)) , 0UL), 0xE0L)), g_1271)) , g_890))) > 1UL), l_1775, g_1268, g_1378, l_2)) == l_1822), l_1727, l_1727, l_1454) && g_1807), g_760)) || (-1L)) <= 0xE8BBL))
                    {
                        l_1823 = l_1822;
                        g_760 = (l_1826 , g_1332);
                    }
                    else
                    {
                        g_12 = func_49(l_1409, l_1481, g_760, g_1190, g_1827);
                        g_1828 = g_542;
                        g_676 = g_1268;
                    }
                }
                for (g_676 = (-5); (g_676 <= (-25)); g_676 = safe_sub_func_uint8_t_u_u(g_676, 1))
                {
                    g_12 = l_1306;
                }
            }
            l_1844 = ((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((0UL ^ g_1827), func_55(g_1183, (l_1775 , g_676), ((safe_div_func_uint16_t_u_u((0x51L ^ g_1254), ((safe_mul_func_uint8_t_u_u(g_890, (safe_add_func_uint8_t_u_u(l_1333, 0x5AL)))) , g_1254))) ^ l_1843)))), 0L)), 0x13B3287AL)) == g_1394);
        }
    }
    else
    {
        int l_1847 = 8L;
        short l_1855 = (-9L);
        short l_1863 = 0L;
        short l_1874 = 0xEAC0L;
        int l_1894 = 0xF53CB612L;
        if (((((safe_sub_func_uint32_t_u_u(l_1847, g_1183)) && func_28(func_8(((safe_mul_func_int16_t_s_s((-9L), (safe_mul_func_uint16_t_u_u(func_59(l_1847, g_1828, (safe_mod_func_int8_t_s_s(l_1637, func_59(l_1256, g_1791, g_1828, l_2))), l_1847), g_1183)))) , 0x97L), g_1271), l_1333, g_1268, l_1847, l_1823)) < 0L) >= l_1823))
        {
            l_1847 = g_676;
            g_760 = g_1828;
            l_1847 = (l_1847 , ((g_1827 == (func_59(((l_1847 < l_1847) || l_1854), l_1847, g_890, ((g_676 || g_1815) & l_1297)) <= g_890)) != g_1254));
            g_12 = l_1855;
        }
        else
        {
            unsigned short l_1862 = 0UL;
            l_1263 = (~(0xA0L >= ((((safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(func_8(((g_1828 != (func_19(l_1862) <= (g_1807 == 0xF52EAC9EL))) , (func_19((g_1332 && func_19(l_1854))) && g_676)), l_1855), l_1855)), g_1254)), l_1863)) , 6L) ^ l_1862) <= 0L)));
        }
        g_676 = (safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((-1L), ((safe_lshift_func_uint16_t_u_u(0x0083L, 4)) ^ g_1254))), ((safe_mul_func_int8_t_s_s((0x11L > (+g_1332)), ((l_1863 >= (((((safe_mul_func_uint16_t_u_u(g_12, g_1827)) , (!0L)) , g_1827) < l_1618) , l_1874)) != l_1618))) == l_1855)));
        for (l_1333 = 0; (l_1333 >= 10); l_1333++)
        {
            short l_1891 = 1L;
            l_1263 = g_112;
            l_1847 = (((g_1791 , (safe_lshift_func_uint8_t_u_s((l_1663 || ((g_1815 & func_66(func_55(func_55((safe_add_func_int32_t_s_s(g_1807, (((safe_mod_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((l_1823 <= ((func_28((((((safe_lshift_func_uint16_t_u_s((g_1254 | (safe_mod_func_int32_t_s_s(g_1268, (safe_sub_func_uint8_t_u_u(l_1891, (safe_mul_func_int8_t_s_s((!g_277), 8L))))))), 5)) < g_676) && g_1183) != 1L) || g_12), l_1874, l_1891, g_140, l_1863) <= g_1378) < g_12)), l_1874)) != 0x91F24F43L) && g_1827), g_542)) , 1UL) | 255UL))), l_1855, l_1855), g_1271, g_542), l_1894, g_1378, g_1828)) & 65535UL)), g_890))) > 0UL) < g_1827);
            for (l_1256 = 0; (l_1256 >= 18); l_1256++)
            {
                int l_1901 = (-1L);
                g_760 = ((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((func_55((0x6CE0FEEAL ^ g_542), l_1891, (g_1268 && 0xE1EAL)) , (-3L)), g_890)), 10)) > (l_1891 , l_1901));
                g_12 = g_1190;
                g_140 = g_890;
            }
            return g_112;
        }
    }
    l_1910 = (l_1663 != func_28(g_1828, g_676, l_1663, (safe_mod_func_int32_t_s_s((g_1190 >= (safe_rshift_func_uint16_t_u_s(((l_1823 || (((safe_add_func_uint32_t_u_u(l_1297, (((safe_lshift_func_int8_t_s_s((g_140 & l_1307), g_676)) == l_1307) , g_1254))) && 251UL) >= 0UL)) > l_1618), g_1394))), 4294967295UL)), g_1828));
    l_1915 = (safe_div_func_uint16_t_u_u(((g_760 < (g_1394 < (g_1828 ^ 0xA8L))) & ((g_760 && (g_676 != func_55((((safe_lshift_func_uint16_t_u_u(((l_1854 , (l_1854 , g_542)) == l_1262), 12)) | l_1618) > g_1190), l_1618, g_140))) & 0x0E16B719L)), l_1910));
    return l_1256;
}







static unsigned func_8(unsigned char p_9, unsigned p_10)
{
    unsigned short l_45 = 0x6CADL;
    int l_1255 = (-5L);
    l_1255 = (((func_13(g_12, func_19((((p_9 || (safe_add_func_int16_t_s_s(func_23((~func_28((!((p_9 != (safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(((0x8AD64DE8L & (-5L)) && (safe_sub_func_int16_t_s_s(0x2589L, (safe_unary_minus_func_uint16_t_u(1UL))))), ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((l_45 == 0x65DD4D14L), l_45)), p_10)) | g_12))), l_45))) <= 0x949FL)), g_12, p_9, g_12, p_10)), p_9, g_12, g_542), 65533UL))) & 0x93L) , (-10L))), p_9, g_12, p_9) ^ 4294967293UL) <= p_10) , 0xA0526E40L);
    return l_1255;
}







static const unsigned func_13(int p_14, const int p_15, unsigned char p_16, short p_17, unsigned p_18)
{
    unsigned short l_777 = 65531UL;
    int l_799 = 0xFCE155D0L;
    char l_850 = 0x37L;
    short l_882 = 0L;
    short l_914 = 9L;
    int l_981 = 5L;
    int l_1012 = (-3L);
    short l_1014 = 0xCE3AL;
    int l_1066 = (-1L);
    const int l_1157 = 0x3FF33624L;
    unsigned l_1243 = 0xB29DD776L;
lbl_809:
    l_777 = p_14;
    for (g_112 = 11; (g_112 > 41); g_112 = safe_add_func_uint32_t_u_u(g_112, 3))
    {
        short l_785 = (-1L);
        int l_833 = 0xDF5E05B2L;
        unsigned char l_834 = 255UL;
        short l_911 = (-2L);
        g_12 = g_676;
        if ((safe_add_func_int16_t_s_s(l_777, (safe_rshift_func_int16_t_s_s(1L, 2)))))
        {
            unsigned char l_784 = 0x76L;
            l_785 = (((l_777 & g_112) >= p_14) || (l_777 > l_784));
        }
        else
        {
            unsigned l_790 = 0xD75BDF08L;
            int l_849 = (-9L);
            short l_972 = 0x9959L;
            if (((safe_add_func_uint32_t_u_u(g_140, (safe_add_func_uint8_t_u_u(((1UL > l_790) , 0x6AL), (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0x60L, (l_785 , 248UL))), (safe_rshift_func_uint16_t_u_s(65535UL, 11)))))))) | ((l_777 && p_16) <= p_17)))
            {
                short l_802 = 0L;
                p_14 = g_760;
                p_14 = 5L;
                p_14 = ((safe_add_func_int16_t_s_s(l_799, (((safe_rshift_func_int8_t_s_u(p_17, 2)) , g_542) >= ((l_802 ^ p_17) > ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(g_112, 2)) && (safe_sub_func_int32_t_s_s(g_676, (l_785 , ((0x7D6BE693L & 1UL) <= 0x005EL))))), 0)) <= l_785))))) , g_112);
            }
            else
            {
                unsigned l_820 = 1UL;
                int l_821 = 1L;
                if (g_676)
                    goto lbl_809;
                l_821 = (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(g_760, func_59((p_18 | ((safe_rshift_func_uint8_t_u_s(p_16, 1)) < (safe_sub_func_int32_t_s_s(0L, l_820)))), g_140, (!l_820), g_277))), 3));
                g_12 = (safe_mul_func_uint16_t_u_u(g_12, (safe_rshift_func_int16_t_s_u(g_140, (g_542 <= g_112)))));
                if (l_777)
                    continue;
            }
            g_676 = p_14;
            l_833 = ((safe_unary_minus_func_int32_t_s((g_112 < (g_760 ^ 0x1919L)))) < (safe_div_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(p_15, ((-1L) >= (safe_mul_func_int8_t_s_s((-4L), func_59(p_18, l_790, func_59((p_17 ^ g_542), p_18, p_17, p_16), p_18)))))) & l_785) <= g_12), 0xC7L)));
            if (func_59(p_15, l_834, ((safe_add_func_int16_t_s_s(((((((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(func_59(g_140, func_59((safe_mod_func_uint8_t_u_u((g_277 || l_777), (safe_mul_func_int8_t_s_s((p_14 , ((((safe_sub_func_uint32_t_u_u(0x749BF518L, (safe_sub_func_int8_t_s_s((((g_760 < func_59(func_59(func_59(g_140, p_18, g_277, l_790), g_12, g_140, l_849), l_790, p_15, l_799)) , 0xBA3CL) , l_799), l_785)))) ^ p_18) , p_14) | p_15)), p_14)))), g_140, g_542, p_17), l_849, g_140), g_760)), g_676)) || l_777) , g_676) < p_15) && 0xB3AAL) , p_14), p_14)) && l_850), g_277))
            {
                int l_853 = (-2L);
                int l_855 = 0xA62D9F0FL;
                for (l_799 = (-19); (l_799 == (-21)); l_799--)
                {
                    char l_883 = 0xE2L;
                    int l_915 = 0x344ED010L;
                    const short l_918 = 0x2FDBL;
                    int l_958 = 0x12855415L;
                    if (g_140)
                    {
                        unsigned char l_854 = 0x05L;
                        l_855 = func_59(g_277, l_853, l_854, (~0xF6A43FF2L));
                    }
                    else
                    {
                        p_14 = (p_17 && 0xB161L);
                    }
                    for (p_16 = 0; (p_16 <= 32); p_16 = safe_add_func_int16_t_s_s(p_16, 6))
                    {
                        unsigned short l_881 = 65535UL;
                        g_760 = ((safe_rshift_func_uint8_t_u_s(func_59((safe_div_func_int16_t_s_s((l_853 ^ ((safe_unary_minus_func_uint16_t_u(l_833)) == (func_59((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((func_59(p_17, p_18, g_140, ((safe_rshift_func_uint16_t_u_s((((l_834 , (safe_mod_func_int16_t_s_s(g_140, g_542))) , (safe_div_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(0UL, 1UL)) , p_14), l_881))) ^ (-7L)), l_853)) , g_277)) ^ g_112) , (-3L)) | 1UL), 1L)), p_16)), p_16)) != l_850), 1)), 0xC047L)), g_542, g_542, l_799) ^ 0x3F69EDDBL))), p_17)), p_18, l_882, g_12), g_140)) <= l_849);
                        p_14 = ((l_785 > (((p_15 > (l_883 == (-1L))) < p_18) , (((+g_676) < ((!(safe_mod_func_int32_t_s_s(((l_849 <= ((g_277 | ((g_542 || g_542) , 1L)) | 0x85A31570L)) | l_849), l_881))) , l_833)) > l_853))) & l_883);
                        g_12 = ((g_676 ^ (safe_add_func_int32_t_s_s(func_59(l_849, g_140, (0x3EL || (safe_add_func_uint16_t_u_u(l_883, p_15))), l_855), (p_14 != 0x83DD1C60L)))) , g_890);
                    }
                    if (p_14)
                    {
                        if (l_883)
                            goto lbl_809;
                        p_14 = func_59((safe_rshift_func_int16_t_s_s((!g_277), l_883)), p_18, (p_16 <= ((p_16 ^ (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((func_59(l_849, ((((((func_59((safe_mod_func_int16_t_s_s(g_890, (+(safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(g_112, p_15)), p_16)) ^ l_785), g_277)), g_760))))), g_140, p_18, l_882) || 0x9FL) != p_16) & l_799) > 0x0EEAL) > 249UL) > g_112), l_785, g_112) , 0x732CL), l_883)), l_850))) != 1L)), l_790);
                        if (l_850)
                            continue;
                        l_855 = p_14;
                    }
                    else
                    {
                        l_915 = (safe_add_func_uint16_t_u_u(func_59(g_760, ((safe_lshift_func_int16_t_s_s(func_59(g_760, g_676, p_18, l_911), l_882)) >= func_59((safe_rshift_func_uint8_t_u_u((0x95EE0DDEL > g_760), 3)), g_12, l_914, p_17)), g_12, g_890), l_853));
                        p_14 = (safe_div_func_int16_t_s_s(l_918, func_59((+p_18), g_890, p_14, ((safe_add_func_int32_t_s_s(0x23CAF97AL, p_14)) & 0xB53FL))));
                    }
                    for (l_882 = 0; (l_882 == (-5)); l_882 = safe_sub_func_uint16_t_u_u(l_882, 1))
                    {
                        int l_923 = 0L;
                        l_923 = g_277;
                        g_12 = (safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((func_59((p_15 , 0x2F45F5ACL), p_16, l_918, l_849) , (safe_mul_func_int16_t_s_s((p_17 , ((safe_rshift_func_uint16_t_u_u(l_915, g_890)) | g_12)), g_277))), p_18)), l_923)), g_277));
                        g_12 = (((safe_rshift_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((p_16 , ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((func_59(p_18, p_14, (g_140 > (!((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((!(safe_rshift_func_int16_t_s_s(((p_16 == (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(0x3EL, g_890)) , ((((p_17 , (-7L)) < 6UL) | l_882) > g_140)), 3)), 7)), p_16))) > p_14), l_958))), p_18)), p_18)), g_112)) & l_799))), g_542) >= l_799) < l_790), p_18)), 3UL)) , 0UL)), 0xFCL)) , p_16) >= g_140), p_16)) != p_14) & l_915);
                    }
                }
                l_833 = l_834;
                g_760 = (l_882 >= ((safe_sub_func_int32_t_s_s(g_890, l_849)) >= func_59(func_59(l_834, (g_542 , l_911), p_18, g_676), g_890, l_853, l_834)));
                return g_112;
            }
            else
            {
                int l_961 = 0x23FE40EDL;
                l_961 = p_16;
                p_14 = (((((((((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_14, 1)), func_59((((((p_15 < g_112) ^ (0x59L == (l_911 , ((((g_542 ^ p_18) > (func_59((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(0x10L, (safe_mul_func_int16_t_s_s(func_59(g_542, p_17, l_790, p_14), 0xC494L)))), 6)), g_542, l_961, l_972) <= 0UL)) , 0x8E96L) != l_961)))) >= l_834) == 0xCCL) | g_890), g_676, l_799, p_16))) | g_542) , 0x66L) , 0x6BB3L) != g_112) == l_834) || p_16) , g_112) && g_277);
            }
        }
        l_833 = (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((func_59(p_15, ((l_785 < (+g_760)) ^ ((((g_676 > g_140) | ((safe_mul_func_int16_t_s_s(1L, (safe_add_func_int32_t_s_s((g_12 & (g_277 , (g_542 == l_981))), g_277)))) == 0x7FL)) & 0xC8EFL) , 4294967288UL)), g_277, l_833) , 0xB8L), 0UL)), l_785));
    }
    if ((7UL != ((safe_lshift_func_int16_t_s_u(0x8F7BL, 1)) & (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((0x22B15D63L || (safe_mod_func_uint8_t_u_u(l_914, l_882))) , g_890), ((((safe_div_func_int8_t_s_s(g_12, l_850)) ^ ((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0x82L, l_882)), 13)) & g_542)) >= 0x18B7L) ^ l_777))), l_981)), (-3L))))))
    {
        char l_1013 = (-1L);
        unsigned char l_1031 = 255UL;
        l_799 = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((p_14 ^ p_16), (((((safe_div_func_uint8_t_u_u(((((~(safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(func_66((((!g_676) > (+l_914)) ^ (safe_sub_func_int8_t_s_s(p_18, l_914))), l_914, (((safe_div_func_uint32_t_u_u((1L & p_15), (-4L))) < l_1012) <= 0x714CL), l_1013), 0xEE51L)), l_850))) > 0x06C6L) != p_16) == 7UL), g_890)) , g_140) , p_18) < l_1013) || g_140))) == l_1014), 0x82L));
        l_799 = (p_16 | ((safe_mod_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((((func_19((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((g_760 , g_542), 14)), p_18))) < (p_17 , 0x0F9FL)) , (safe_sub_func_int32_t_s_s(p_16, ((safe_mul_func_int16_t_s_s(func_55((safe_lshift_func_uint16_t_u_u((249UL ^ p_15), 1)), g_890, p_17), g_542)) & g_676)))) < g_890), g_542)) , g_12), p_16)) , g_760));
        for (l_914 = 0; (l_914 >= (-7)); --l_914)
        {
            const unsigned char l_1032 = 252UL;
            p_14 = (func_55(((func_66(l_1031, p_15, l_1032, g_760) >= ((g_12 == 0x13L) | p_14)) & g_890), g_676, l_914) ^ (-2L));
        }
    }
    else
    {
        short l_1045 = 0x1C7EL;
        unsigned l_1074 = 4294967289UL;
        int l_1075 = 0L;
        char l_1125 = (-4L);
        unsigned char l_1144 = 1UL;
lbl_1234:
        for (p_14 = 10; (p_14 != 10); ++p_14)
        {
            unsigned l_1037 = 0x3AFB2E02L;
            for (g_112 = (-25); (g_112 != 6); g_112++)
            {
                int l_1038 = (-6L);
                l_1038 = l_1037;
                l_1045 = (safe_rshift_func_int8_t_s_u(l_1038, (safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(5UL, (~g_112))), 0xB8L))));
                g_12 = func_59((((g_542 < (l_1038 && (l_1045 || 0xBCB58032L))) == ((((safe_mul_func_uint8_t_u_u(g_140, p_14)) , (((l_1037 < (((((g_140 | p_18) == g_112) | g_890) > l_882) | l_1045)) != g_277) == p_16)) , (-9L)) != l_1037)) , 0x755B58B4L), p_17, p_17, g_760);
            }
            g_676 = p_15;
        }
        if ((func_66(g_277, p_17, g_890, ((safe_add_func_int32_t_s_s((p_18 < (g_277 & g_12)), (safe_mod_func_uint32_t_u_u(4294967295UL, 4294967290UL)))) && g_676)) <= 5UL))
        {
            unsigned l_1052 = 0xE5FBE018L;
            int l_1058 = 0xBA765B5DL;
            int l_1131 = 0L;
            const int l_1134 = 0x1C7C9372L;
            int l_1154 = 0x4692E2F2L;
            if (g_542)
            {
                int l_1063 = 0L;
                l_1052 = g_890;
                p_14 = (safe_mod_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(g_676)), 6L));
                l_1058 = ((safe_mod_func_int8_t_s_s(p_14, (0x7FL || 0x7CL))) , 0x2E6271C3L);
                if ((safe_div_func_uint8_t_u_u(((l_777 & (func_49(((p_16 || p_15) , ((safe_lshift_func_int8_t_s_u((func_23(p_17, (g_112 != l_1063), ((safe_rshift_func_int16_t_s_u((0xA79CAAE7L & ((~func_59((l_799 & (func_59(l_1058, g_542, g_890, p_14) >= l_1063)), g_676, l_1066, g_12)) <= 0x14L)), 9)) < 0UL), p_18) | g_890), 3)) && g_12)), g_277, p_16, l_1063, p_17) , 0xEA27L)) , 255UL), g_760)))
                {
                    return g_140;
                }
                else
                {
                    l_1075 = (((((safe_lshift_func_int8_t_s_s((((((((func_49(g_760, (func_28((safe_unary_minus_func_uint8_t_u(l_1063)), g_760, g_277, ((l_1045 < (((p_16 <= func_59((safe_rshift_func_int8_t_s_u(4L, 7)), l_914, (safe_lshift_func_int16_t_s_s(l_850, 2)), g_676)) ^ 0x61A6L) > g_760)) != 0x9B6FL), p_18) < (-1L)), g_890, l_1063, p_18) , l_1045) <= (-5L)) != p_14) , l_1074) <= g_760) & l_1063) || p_17), 3)) & 1L) >= 0xE90059FAL) || g_676) == g_542);
                    l_1075 = (safe_mul_func_uint8_t_u_u(0x49L, 0x91L));
                }
            }
            else
            {
                int l_1088 = 1L;
                unsigned char l_1141 = 0x2EL;
                unsigned l_1145 = 1UL;
                g_676 = (safe_rshift_func_uint8_t_u_u(p_14, 4));
                for (l_1075 = 0; (l_1075 < 29); l_1075 = safe_add_func_uint16_t_u_u(l_1075, 6))
                {
                    unsigned short l_1095 = 0xA15EL;
                    int l_1096 = (-10L);
                    if (g_112)
                    {
                        p_14 = p_14;
                        p_14 = (safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((p_15 & l_1088) != ((g_760 >= (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(func_23(func_59((g_277 , 0x983C84BBL), ((safe_sub_func_int8_t_s_s(g_760, g_12)) && ((((l_1075 , l_1095) || 0x4C59L) != 0xE924L) >= l_1096)), p_14, l_1052), g_112, l_1045, l_1095), 0)), g_890))) ^ 0x061DE8F4L)), g_277)), g_890)), p_18));
                    }
                    else
                    {
                        char l_1124 = 0xA4L;
                        int l_1126 = 4L;
                        p_14 = ((safe_lshift_func_uint8_t_u_s(p_14, ((safe_rshift_func_uint16_t_u_u(g_112, 6)) && (l_1096 , l_850)))) , 0x49831BE0L);
                        l_1126 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((((safe_unary_minus_func_int32_t_s((+p_14))) , ((safe_rshift_func_uint16_t_u_s(0xE28CL, 6)) & g_140)) , 0x2C42L), 15)), ((p_15 >= (safe_rshift_func_uint16_t_u_u(p_17, 9))) , (((safe_add_func_uint16_t_u_u((~0x73E7L), (safe_sub_func_int16_t_s_s((p_17 != (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((safe_rshift_func_int16_t_s_u(((((safe_lshift_func_uint8_t_u_s(((((safe_mod_func_int8_t_s_s((p_16 >= l_1058), p_17)) , g_542) || 7L) <= (-1L)), l_1088)) | l_1088) , p_16) != g_890), 15)) , l_1124) , l_1095), l_1052)), 2)) , g_542) , g_890)), p_18)))) , l_1125) ^ p_18))));
                    }
                    if (((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(l_1131, 5)), g_12)) , l_1131))
                    {
                        l_799 = (safe_add_func_uint16_t_u_u(p_18, g_12));
                        g_676 = (9UL & 0x72L);
                    }
                    else
                    {
                        return l_1134;
                    }
                }
                g_12 = ((safe_rshift_func_int16_t_s_u(l_1058, (!g_140))) , (safe_add_func_uint16_t_u_u((!func_59((l_1134 , func_28((0x18FFL != ((safe_rshift_func_uint8_t_u_s(g_676, 0)) <= (((~func_59((func_66(l_1141, (safe_sub_func_uint8_t_u_u(l_1144, func_66(p_15, l_1145, l_1045, g_890))), g_890, g_12) , g_542), g_277, p_14, l_777)) == g_890) & g_12))), g_277, l_914, g_676, p_18)), g_542, g_760, l_850)), p_18)));
            }
            g_12 = ((safe_add_func_int8_t_s_s((g_676 == (((-9L) & (p_18 , ((l_1125 >= g_760) <= (-1L)))) , (0x2BL < (-4L)))), (safe_rshift_func_uint8_t_u_s(func_59(((((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((l_1075 | l_1012) , l_1154), p_16)) <= l_1134), l_1075)) <= 0L) > g_12) || l_1075), l_1075, l_1012, l_1058), 4)))) != l_799);
            p_14 = (safe_mod_func_int8_t_s_s(p_16, l_1157));
        }
        else
        {
            int l_1172 = 0x91EE85A9L;
            g_140 = l_1066;
            l_1172 = (safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u(g_760, 3)) >= (safe_rshift_func_uint16_t_u_u((!l_1144), 7))) , func_59(g_542, ((safe_lshift_func_int8_t_s_u(g_277, l_1172)) | 0xEB14L), ((l_1172 , (((3L != (safe_rshift_func_uint16_t_u_u(g_542, l_1045))) | 0x2CBC7C7DL) | g_760)) && g_542), p_15)), 3UL)) & g_676) && g_542), 0x90L)) >= 0x31321D13L), g_676)) > l_1172), l_1172));
            l_799 = g_140;
            l_1075 = func_23(((+p_17) <= 9UL), g_112, ((l_1045 <= func_59(((safe_sub_func_int16_t_s_s(p_16, (func_59((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((+(safe_rshift_func_uint8_t_u_s(l_1144, 7))), l_1014)) == g_542), (0xFF4FL & g_277))), p_15, g_890, p_18) ^ 0x70L))) , g_1183), l_1125, g_112, l_914)) ^ g_1183), l_1172);
        }
        for (l_882 = 0; (l_882 != 12); l_882 = safe_add_func_int8_t_s_s(l_882, 7))
        {
            const char l_1189 = 0xB1L;
            for (l_799 = 17; (l_799 > (-30)); --l_799)
            {
                unsigned short l_1199 = 1UL;
                p_14 = (safe_unary_minus_func_uint16_t_u(((g_676 || (func_19((func_23(p_15, l_1125, l_1189, l_1074) && (g_1190 , (g_140 || (safe_div_func_int16_t_s_s(g_140, l_1045)))))) < (-1L))) || 0UL)));
                p_14 = (safe_rshift_func_uint16_t_u_s(p_18, (safe_add_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(((0xAACAB4BDL < g_676) > ((l_1199 ^ ((safe_div_func_uint16_t_u_u((g_1183 , (+func_55((0xDFL >= (safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((~(safe_lshift_func_int8_t_s_u(g_890, 7))), ((+((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(6UL, 0x449876B8L)), 5)), g_12)) & 6UL)) == p_14))) , g_542), 0x4FL))), l_1189, g_277))), g_1190)) && g_12)) == p_14)), 7L)) & p_15), p_14))));
                g_12 = func_66((func_55(((safe_mod_func_int32_t_s_s(g_760, ((safe_mod_func_int16_t_s_s((-2L), (safe_lshift_func_uint16_t_u_s(((~(safe_mod_func_uint16_t_u_u(g_140, g_112))) != (safe_div_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s(((~(p_15 && (safe_add_func_uint16_t_u_u(((p_16 < ((safe_mod_func_uint32_t_u_u(p_16, l_777)) , func_59(l_1045, l_1199, g_1183, l_1199))) , g_1183), 0xC4ACL)))) | 255UL), 8UL)) && 0x4EL) > g_676) == 0UL), p_14))), g_12)))) || (-1L)))) , p_14), l_1189, p_18) ^ p_16), g_1190, p_14, p_14);
            }
            for (g_12 = 23; (g_12 <= (-16)); g_12--)
            {
                if (l_1045)
                    goto lbl_1234;
            }
            p_14 = (l_1045 & ((g_12 <= (safe_rshift_func_uint16_t_u_s((0x2444L | func_55(((safe_rshift_func_int8_t_s_s(1L, ((p_17 ^ 0L) , ((l_1125 >= (+(~(safe_sub_func_int8_t_s_s((g_542 , (((safe_add_func_uint16_t_u_u((func_49(p_15, p_15, p_15, p_15, p_17) <= 0x831C4B33L), p_15)) | 65532UL) >= g_760)), 0xCEL))))) , (-1L))))) >= 0x1DC38251L), p_16, l_1014)), l_1243))) == p_16));
        }
    }
    g_140 = (((((-10L) > ((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_15, (safe_lshift_func_uint16_t_u_s(g_140, 14)))), p_15)) > ((safe_add_func_int32_t_s_s((func_59(p_15, l_850, ((l_981 , l_981) , ((safe_sub_func_int16_t_s_s(g_1254, l_850)) , 0xD3B0BF70L)), l_799) && g_542), p_15)) ^ 0x06L))) != 0x4982L) , 4294967295UL) , (-9L));
    return p_15;
}







static int func_19(short p_20)
{
    unsigned l_749 = 2UL;
    short l_767 = (-5L);
    unsigned char l_774 = 1UL;
    char l_775 = 1L;
    int l_776 = 0xD8CE4DCBL;
    g_760 = ((l_749 < func_49((l_749 , (func_66(func_59((safe_add_func_int8_t_s_s(g_542, (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(g_140, (-1L))), 4)) , (g_760 == ((p_20 , func_28((+(l_749 && p_20)), g_676, g_112, g_676, g_112)) > 0x92L))), 3)))), p_20, l_749, p_20), p_20, p_20, g_12) , p_20)), p_20, p_20, g_760, g_760)) | (-1L));
    l_776 = ((safe_add_func_int32_t_s_s(g_676, (((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(l_749, l_767)) , l_749) > (((!(safe_div_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(g_760, (safe_rshift_func_uint8_t_u_u(p_20, 4)))) , func_55(l_774, g_542, ((p_20 <= g_140) && p_20))) || 0UL), l_774))) >= g_676) , l_775)), 0xFEL)) && g_112) , l_767))) == l_775);
    return g_112;
}







static short func_23(unsigned short p_24, unsigned char p_25, const short p_26, unsigned p_27)
{
    int l_713 = 0xFC706B5FL;
    unsigned l_720 = 9UL;
    const unsigned l_723 = 0x41BA7B94L;
    int l_737 = 0x4FE706AEL;
    g_676 = (((safe_sub_func_int32_t_s_s(((func_66(l_713, ((safe_div_func_uint8_t_u_u((+(safe_lshift_func_uint16_t_u_s((0x51L != (-1L)), ((((((safe_lshift_func_uint16_t_u_u((l_713 , l_720), 10)) | g_277) ^ 6L) < p_26) & (safe_mul_func_uint8_t_u_u((l_720 | l_713), g_140))) < g_542)))), l_723)) ^ g_12), l_723, g_277) || l_713) ^ p_27), g_676)) & (-1L)) , p_24);
    g_676 = g_12;
    l_713 = g_542;
    for (g_542 = (-18); (g_542 >= 3); ++g_542)
    {
        unsigned l_732 = 0x241BB7B2L;
        int l_738 = 0x4CDB2E51L;
        l_713 = g_112;
        if (p_26)
            break;
        l_738 = (((((safe_lshift_func_int8_t_s_s(((p_26 && (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((l_732 , 0x6365L), 2)), 0))) <= (p_26 > (safe_div_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((func_66((p_24 | (l_737 != (0x40E6L >= l_737))), g_277, p_25, p_24) , (-1L)), g_277)) , p_25) < 0x7EFD4A92L), l_713)))), l_732)) < 1UL) == l_732) != 65535UL) & p_24);
        g_676 = (safe_lshift_func_uint16_t_u_s(((l_732 < ((safe_sub_func_uint8_t_u_u(p_25, (safe_sub_func_uint16_t_u_u(0x54DCL, (g_277 <= l_738))))) == 5L)) == 0x40L), (safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((p_24 >= l_713), l_738)) && 8UL) > 8UL), g_12))));
    }
    return p_26;
}







static unsigned short func_28(int p_29, char p_30, int p_31, unsigned short p_32, unsigned p_33)
{
    unsigned short l_48 = 0xED0FL;
    unsigned char l_71 = 0x54L;
    int l_702 = 0xBB535748L;
    l_702 = (safe_lshift_func_int16_t_s_s(l_48, func_49(g_12, p_31, func_55((func_59(g_12, l_48, (safe_sub_func_int32_t_s_s(func_66(l_71, (g_12 , (!(l_71 | g_12))), p_31, l_48), 0xFCDC455AL)), g_12) , 1L), l_71, p_31), g_12, l_71)));
    g_676 = ((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(l_702, (safe_add_func_uint32_t_u_u(((((func_59((g_140 , (((safe_sub_func_uint16_t_u_u(l_71, l_48)) , p_29) != (0x56L != ((1UL && (-9L)) , ((p_32 > p_29) & 0xF9012050L))))), g_140, g_542, p_33) , 1L) , 4L) && p_29) , g_112), 0xAE4E3193L)))), 10)) , g_140);
    return p_33;
}







static const short func_49(short p_50, int p_51, int p_52, unsigned p_53, int p_54)
{
    int l_504 = 8L;
    short l_509 = 0x3634L;
    const unsigned char l_541 = 250UL;
    int l_543 = 0xF9F934DAL;
    const unsigned short l_647 = 4UL;
    const char l_700 = 0x45L;
    const unsigned char l_701 = 0x0EL;
    g_140 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((~(g_140 , l_504)), p_52)) , (safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(0x2C5EL, ((l_504 || l_509) , (g_112 , (((safe_mul_func_uint16_t_u_u(g_112, func_59(g_277, p_54, l_509, l_504))) > p_51) , p_53))))) , p_50), g_12))), g_140)), 7));
    for (l_509 = 0; (l_509 == (-11)); l_509--)
    {
        unsigned l_514 = 0x4B8A7D51L;
        l_514 = l_504;
    }
    for (l_509 = 27; (l_509 <= (-19)); l_509--)
    {
        int l_527 = (-10L);
        unsigned l_540 = 0x21FAFC5DL;
        short l_567 = 0xF91CL;
        const short l_577 = 0xDE00L;
        int l_597 = (-1L);
        int l_605 = 0x67E26C15L;
        unsigned short l_615 = 0xBCAFL;
        if ((safe_lshift_func_int8_t_s_s(((g_140 ^ g_12) && (safe_lshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((l_527 , (safe_div_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u(((((l_509 && (l_504 >= ((func_59(g_140, ((safe_rshift_func_int16_t_s_s(p_52, (safe_mul_func_uint8_t_u_u(((0xF547L == g_277) || g_12), 0L)))) , l_504), l_504, l_540) && 8L) < 0xCDD7ABAEL))) & p_53) == p_51) != 1L), 1L)) , l_540) <= 65535UL) != p_54), l_504))), l_509)) < l_504), l_504)) != l_541), g_542)) , 1UL) == (-1L)), 11))), g_542)))
        {
            l_543 = l_527;
            g_140 = 0x6BB25334L;
            g_140 = p_50;
        }
        else
        {
            const unsigned short l_575 = 0UL;
            unsigned char l_576 = 0x17L;
            int l_578 = (-10L);
            l_543 = l_527;
            if (p_50)
                break;
            l_578 = (p_50 > ((safe_sub_func_int8_t_s_s(((g_140 > (safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((+((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_540, (((safe_add_func_int16_t_s_s(1L, (safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((!((func_59(((((+(safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u(((((((safe_add_func_int16_t_s_s(((1L & (l_567 || 0xC906L)) & ((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(65535UL)), (safe_rshift_func_uint16_t_u_s(l_504, 10)))) == p_51), g_140)) != 0xEB6EL)), 0x0AECL)) == l_575) , 247UL) != g_112) || 5UL) ^ 1UL), (-5L)))))) , p_51) == p_53) ^ 1UL), p_51, g_277, l_576) < 0x3721L) , l_577)) & 0xEC7C12B1L), 0x28C0L)) <= (-2L)), 0x6EL)))) ^ l_577) | 3UL))), p_51)) ^ p_51) < 8L) > 1UL)) >= g_542), l_509)), l_575)), g_542))) && p_53), p_51)) , l_541));
            l_543 = g_112;
        }
        p_52 = 0L;
        if (l_541)
        {
            unsigned l_595 = 1UL;
            for (g_277 = 0; (g_277 >= 24); g_277 = safe_add_func_uint8_t_u_u(g_277, 1))
            {
                unsigned l_583 = 0x9D6AC226L;
                unsigned char l_596 = 0x74L;
                int l_630 = 0x0E6885D0L;
                if (p_53)
                    break;
                for (p_54 = 0; (p_54 > 18); p_54 = safe_add_func_int8_t_s_s(p_54, 2))
                {
                    const unsigned short l_592 = 1UL;
                    if (((((l_583 || (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((+l_583) ^ 0UL), (func_59(((((((safe_add_func_uint8_t_u_u(g_12, l_504)) < func_66(func_59(g_277, (safe_div_func_int32_t_s_s(l_592, l_527)), ((safe_mod_func_uint32_t_u_u(func_66(l_595, g_12, g_112, p_54), p_54)) | l_595), p_53), l_583, l_592, g_542)) , l_509) != l_596) | p_53) != l_595), g_12, g_12, g_12) && l_592))) , g_112), p_53))) , 0x66ABL) & g_542) , g_140))
                    {
                        p_52 = g_542;
                    }
                    else
                    {
                        unsigned l_598 = 4294967291UL;
                        l_543 = (func_66(g_140, (l_597 , (-3L)), g_112, func_59(g_112, l_598, p_51, g_140)) , g_277);
                    }
                }
                for (l_567 = 23; (l_567 != (-9)); l_567 = safe_sub_func_int8_t_s_s(l_567, 6))
                {
                    short l_606 = 0xC1CEL;
                    if ((safe_mul_func_int8_t_s_s((g_112 , (safe_rshift_func_uint16_t_u_u(0xE31BL, 3))), 0x36L)))
                    {
                        g_140 = g_542;
                    }
                    else
                    {
                        l_605 = g_12;
                    }
                    if (((-6L) != ((l_606 & func_66(((safe_sub_func_int16_t_s_s((l_583 | l_541), (safe_add_func_uint16_t_u_u(0x3C8CL, (safe_sub_func_int8_t_s_s(0x3EL, (safe_mod_func_uint8_t_u_u((func_66(p_52, l_615, ((l_527 <= g_12) ^ p_53), l_606) <= 0x4D93953AL), g_277)))))))) , g_140), p_50, g_277, p_51)) <= g_277)))
                    {
                        g_140 = 0xA666BA44L;
                        l_597 = (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_52, 1)), l_596));
                        if (g_140)
                            break;
                    }
                    else
                    {
                        l_630 = func_66((l_504 != (safe_mul_func_uint8_t_u_u((l_583 > (((g_542 || (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((p_52 , l_595), (safe_div_func_int8_t_s_s(g_140, func_59(l_606, (func_59((safe_lshift_func_int16_t_s_s(func_59((((g_277 , (p_50 ^ l_606)) > p_50) != g_112), p_54, p_51, l_583), l_527)), p_52, g_277, g_112) , 65528UL), l_583, p_54))))), l_583))) > p_51) ^ g_112)), g_542))), l_606, p_54, g_277);
                        p_52 = p_52;
                        l_543 = (func_66(l_630, g_12, p_54, g_542) && 0xD51006F4L);
                        return p_52;
                    }
                    l_597 = p_51;
                }
                l_630 = l_595;
            }
        }
        else
        {
            unsigned l_651 = 0UL;
            int l_677 = 8L;
            for (p_52 = 0; (p_52 >= 27); p_52 = safe_add_func_uint16_t_u_u(p_52, 7))
            {
                unsigned l_641 = 0xD05109BAL;
                for (l_527 = 0; (l_527 <= (-13)); l_527--)
                {
                    short l_642 = (-1L);
                    int l_648 = (-1L);
                    unsigned short l_659 = 65533UL;
                    l_597 = (safe_sub_func_uint32_t_u_u(((g_542 || (((safe_mod_func_uint16_t_u_u(((l_615 & 65535UL) ^ g_140), g_277)) , (safe_div_func_uint16_t_u_u((p_51 <= func_55(p_52, p_52, ((((1L < p_50) , l_641) && p_54) , l_541))), l_642))) , g_12)) , l_642), 7UL));
                    l_648 = (safe_add_func_int32_t_s_s((65530UL >= func_55(l_642, func_59(p_54, ((func_66(p_52, (safe_sub_func_int8_t_s_s(g_12, p_54)), l_647, g_277) <= g_542) , g_140), g_542, l_642), g_12)), 4294967295UL));
                    for (p_53 = (-25); (p_53 != 15); ++p_53)
                    {
                        l_605 = ((p_52 < g_12) <= ((0x1BBA240EL && 1UL) || g_140));
                        g_140 = (l_651 && g_277);
                        l_677 = (safe_unary_minus_func_int8_t_s((((((safe_mul_func_int8_t_s_s(0x36L, (safe_mod_func_int16_t_s_s(0x4FC5L, g_542)))) == p_53) && (safe_lshift_func_int16_t_s_s(l_659, g_542))) == (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((5UL >= (safe_mul_func_uint16_t_u_u(0xC8BEL, (g_277 , p_51)))), 0xE8A2L)) & l_605), g_12)), g_676)) , 0L), p_52)) == 0xB1L), 6UL)), p_51)) , p_54), 0))) , g_277)));
                    }
                }
                l_677 = g_12;
                l_677 = (p_53 || 0xAB609B79L);
            }
            p_52 = p_50;
            return p_51;
        }
        if (l_540)
            break;
    }
    g_676 = ((safe_mul_func_int16_t_s_s(((-2L) < p_50), (safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_12, (safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((func_55((safe_rshift_func_uint16_t_u_u(((func_66(((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((((l_509 < l_504) , g_112) | p_50), (safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(g_277, g_542)) < g_676), 8)))), g_112)) > 65526UL), p_52, l_700, p_50) ^ g_277) && 0x3B4B3AD3L), p_51)), l_700, g_676) || l_543) && 0x621FB47DL), 8L)), g_676)), g_676)))), 3)))) , 0x6FCFCF60L);
    return l_701;
}







static int func_55(int p_56, unsigned char p_57, unsigned short p_58)
{
    char l_213 = (-9L);
    char l_220 = 3L;
    int l_221 = 0x20B9766CL;
    int l_243 = 0x1682BEE2L;
    const unsigned short l_286 = 0x27BBL;
    unsigned l_313 = 0x30E0CC0CL;
    unsigned char l_415 = 0x38L;
    int l_417 = 0L;
    char l_493 = 0x8DL;
lbl_419:
    if ((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(p_57, (((l_213 | (((((safe_lshift_func_int16_t_s_u(p_58, 8)) && l_213) , func_66((func_59((safe_div_func_uint16_t_u_u(65529UL, (safe_lshift_func_uint16_t_u_u(((((func_66(g_140, ((0x62671F2CL | p_58) , l_213), g_12, l_220) & p_58) >= g_12) & g_12) >= l_213), l_213)))), l_213, g_12, g_12) , g_140), l_213, p_58, g_12)) >= p_58) < 0UL)) < g_12) | p_56))) , l_213) & l_213), g_12)), l_220)), l_220)))
    {
lbl_329:
        l_221 = (65535UL >= 65531UL);
    }
    else
    {
        int l_228 = 0xE860B7F1L;
        int l_244 = 0L;
        unsigned char l_253 = 0xB8L;
        int l_256 = 2L;
        g_140 = g_12;
        p_56 = (safe_mul_func_uint8_t_u_u(func_59((func_59((safe_sub_func_uint16_t_u_u((((((((0xA928L ^ (g_112 || (safe_lshift_func_int16_t_s_u(((func_59(((1UL > l_228) && ((((((safe_sub_func_uint16_t_u_u(p_57, ((~func_66((safe_sub_func_int16_t_s_s(func_59(g_12, (safe_sub_func_int16_t_s_s(l_221, (safe_div_func_uint32_t_u_u((p_58 , (((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((((p_56 && g_112) , g_12) , l_228), 0)) | 0xCA01L), 0x53L)), g_12)) , (-7L)) , 0x779DA6E5L)), (-9L))))), g_140, p_56), l_228)), l_228, p_58, p_56)) , l_228))) != g_12) == l_243) || 0x37L) <= l_220) > g_12)), l_228, p_58, l_243) < p_57) & g_12), p_57)))) , l_228) != 0L) | p_56) && 0x226855CDL) , 65533UL) <= 0xAB1EL), 0x2907L)), g_12, p_57, p_58) | 0xEC9DL), p_56, p_56, g_12), l_244));
        if ((safe_mod_func_uint32_t_u_u(p_56, (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(func_66(l_244, l_213, g_112, ((~(l_244 == (safe_div_func_int16_t_s_s(l_253, ((safe_div_func_uint16_t_u_u(((func_59(g_112, l_228, (func_59(p_56, l_243, l_253, l_220) || l_243), g_12) , g_12) || g_112), 0x6713L)) , g_140))))) , l_256)), l_228)), p_56)))))
        {
            short l_265 = 3L;
            int l_266 = 1L;
            for (l_243 = (-19); (l_243 >= 3); ++l_243)
            {
                p_56 = (((((l_220 < (safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((func_59((safe_sub_func_uint16_t_u_u(p_57, l_265)), p_56, p_57, g_140) && l_265) , g_140), l_253)), g_140))) && (-3L)) , g_12) >= p_58) & (-1L));
            }
            l_266 = (p_57 && p_58);
        }
        else
        {
            unsigned l_274 = 0x475C12EEL;
            unsigned short l_289 = 0xA759L;
            g_277 = (((safe_unary_minus_func_int16_t_s(0x5608L)) == (safe_sub_func_int32_t_s_s(p_57, 0xE94D02D6L))) != (safe_div_func_uint32_t_u_u(func_66(((func_59((safe_unary_minus_func_int8_t_s((safe_unary_minus_func_int8_t_s(l_253)))), (g_140 || (l_274 , (safe_rshift_func_int8_t_s_u(p_56, (p_56 < (-1L)))))), g_12, g_112) >= g_140) || l_244), l_274, l_274, g_12), g_12)));
            g_140 = (safe_rshift_func_uint8_t_u_s((((+(p_58 && 0x60L)) ^ (((safe_mul_func_int8_t_s_s(l_243, ((safe_mul_func_uint16_t_u_u((p_58 | l_274), (safe_mod_func_int8_t_s_s(g_112, l_221)))) ^ ((g_12 || l_286) > g_140)))) >= g_140) , 0x01E4F83CL)) | p_57), p_58));
            p_56 = ((p_56 || (p_56 && l_286)) < ((safe_mul_func_uint16_t_u_u((0x2003L > l_289), 0xAF79L)) == 4294967295UL));
            p_56 = l_244;
        }
        p_56 = (g_112 >= func_59((func_59(func_59(func_59((l_228 || (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((g_12 , g_277) ^ (g_112 < (safe_mul_func_uint8_t_u_u((p_56 , g_140), ((safe_mul_func_int16_t_s_s(g_277, g_277)) != p_58))))) & l_228), 1)), l_253))), g_277, g_277, g_12), l_228, g_277, l_228), g_277, p_57, p_57) , g_140), l_221, l_213, g_140));
    }
    for (l_221 = 0; (l_221 <= (-22)); l_221 = safe_sub_func_uint16_t_u_u(l_221, 4))
    {
        unsigned char l_300 = 1UL;
        int l_314 = 0L;
        unsigned short l_354 = 0x9C01L;
        char l_366 = 0x3CL;
        l_314 = ((p_58 | (-7L)) , (func_66((l_213 , 5UL), func_59(l_300, func_66((safe_add_func_uint8_t_u_u(((l_300 == ((((safe_mod_func_uint32_t_u_u(g_277, (safe_mul_func_int8_t_s_s(((g_140 ^ (((safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(p_58, l_221)), l_300)), p_57)) && l_300) <= 0x32L)) || l_220), l_286)))) | 1L) >= l_300) >= l_313)) != g_140), g_12)), p_58, g_12, l_300), p_58, p_56), g_12, g_12) , p_56));
        p_56 = ((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((g_112 & l_243), (-1L))), (safe_lshift_func_int8_t_s_u(g_140, 1)))), (1UL == 249UL))), (safe_rshift_func_int16_t_s_u(l_220, (safe_mul_func_uint16_t_u_u((g_112 , (~l_213)), 0x7C02L)))))) && p_58);
        if (g_277)
            goto lbl_329;
        for (l_243 = 0; (l_243 != (-30)); l_243 = safe_sub_func_uint32_t_u_u(l_243, 1))
        {
            const short l_336 = 0xF245L;
            int l_352 = 7L;
            int l_372 = 8L;
            unsigned char l_400 = 0xE9L;
            short l_412 = (-1L);
            unsigned l_416 = 0UL;
            unsigned l_446 = 4294967287UL;
            unsigned short l_494 = 0UL;
            p_56 = (((safe_rshift_func_uint16_t_u_u(65535UL, (safe_rshift_func_uint8_t_u_s(((l_313 ^ (g_12 , func_66(g_12, p_57, l_336, ((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(4294967291UL, ((((safe_mul_func_uint16_t_u_u(g_140, (func_59(p_58, p_57, l_314, l_314) > p_56))) < l_313) < g_112) ^ 0xBF67AC45L))), 0x52L)) , 4294967295UL)))) != 0xB4L), 6)))) , l_313) , g_12);
            if ((g_112 < p_57))
            {
                char l_343 = 6L;
                int l_367 = 0x0916D7C7L;
                char l_401 = 0x2EL;
                int l_432 = 0xED1856F5L;
                if (l_343)
                {
                    unsigned l_353 = 1UL;
                    int l_355 = 0L;
                    l_355 = (safe_lshift_func_uint16_t_u_s(p_58, (safe_sub_func_int32_t_s_s((func_66(p_56, g_140, (func_59(p_56, ((+((4294967295UL == (-1L)) , (safe_mul_func_int8_t_s_s(((p_58 & ((safe_add_func_uint32_t_u_u(((((func_59(g_140, l_314, l_352, l_343) >= p_58) , 1L) < 0xF8L) < p_56), l_343)) < g_277)) <= l_353), g_112)))) || g_277), l_354, l_353) ^ p_56), g_12) == 249UL), p_56))));
                    if (g_12)
                        continue;
                }
                else
                {
                    unsigned l_356 = 4294967295UL;
                    int l_374 = 0x31EC1966L;
                    unsigned l_383 = 2UL;
                    if (p_56)
                    {
                        return p_57;
                    }
                    else
                    {
                        unsigned l_365 = 4294967295UL;
                        unsigned short l_373 = 65535UL;
                        if (l_352)
                            break;
                        l_356 = g_12;
                        l_367 = (safe_rshift_func_uint8_t_u_s(func_66(g_12, g_277, (safe_mod_func_uint16_t_u_u((((p_56 & (p_56 , (safe_mod_func_uint8_t_u_u((l_243 != ((func_59((safe_rshift_func_int16_t_s_u((l_343 != func_66(func_66(l_365, l_343, p_58, l_286), p_58, p_56, p_58)), 10)), g_277, l_354, p_56) > 0x3472L) < l_366)), (-1L))))) || 1L) < (-4L)), p_58)), p_58), 5));
                        l_374 = func_59(p_58, ((safe_mul_func_uint16_t_u_u(l_356, ((safe_add_func_uint32_t_u_u(((((g_112 > p_58) | (0x52F7L <= g_140)) != (((l_336 , func_59(((l_356 > (((g_112 == l_372) == 0x2F5AL) <= 0x564BAA4FL)) , g_112), l_373, p_56, l_300)) && g_277) , 0UL)) , l_243), l_372)) , 0x7981L))) , g_12), p_57, p_57);
                    }
                    l_314 = (safe_lshift_func_uint16_t_u_u(func_66(l_243, p_57, (((~g_112) < g_140) , ((safe_sub_func_int8_t_s_s(g_112, p_58)) , l_356)), (((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_58, g_140)), l_354)) < l_356) , g_140)), 15));
                    p_56 = l_383;
                }
                if (((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_313, (safe_rshift_func_uint8_t_u_s(((l_221 | (func_59(l_354, ((safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((+(-8L)) == func_59(g_277, (7UL == l_313), (func_66(((-8L) | (!(safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((g_277 , p_57) ^ l_314))), l_286)))), l_221, l_372, p_57) < l_220), g_12)), l_400)) > 65528UL), p_56)))) , l_401), l_314, g_277) != 0xB03EBF28L)) & 0xA4L), 6)))), l_221)) < p_57))
                {
                    short l_418 = 3L;
                    l_417 = (((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(0x61FA88ECL, (safe_mul_func_uint8_t_u_u((g_140 || l_313), (safe_rshift_func_uint8_t_u_s(func_59((safe_mul_func_int8_t_s_s((0x5496351CL || l_412), (((l_313 , (((safe_div_func_int8_t_s_s((p_56 , func_59((!g_140), (p_57 > l_415), g_140, p_58)), p_56)) | l_416) < g_112)) ^ l_417) != g_140))), p_58, l_418, l_372), g_12)))))), 0)) , p_58) | 4294967295UL);
                    return p_56;
                }
                else
                {
                    const unsigned l_431 = 0xDB6316A7L;
                    if (g_112)
                    {
                        unsigned l_420 = 0UL;
                        if (l_286)
                            goto lbl_419;
                        g_140 = 0L;
                        return l_420;
                    }
                    else
                    {
                        short l_433 = 1L;
                        int l_434 = (-2L);
                        l_434 = ((g_140 , func_59(func_66((((safe_mod_func_int16_t_s_s((p_58 < ((~func_66((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((((safe_lshift_func_uint16_t_u_u((g_277 , (+65530UL)), 1)) <= (l_401 < ((safe_mod_func_int32_t_s_s((l_300 ^ (l_431 > (-2L))), l_372)) != 0UL))) == 0xEAL) | l_432) , 0xD8L), 1)), 0x0CL)), p_58, l_220, p_57)) < l_416)), l_432)) ^ 4294967295UL) >= l_417), g_12, g_277, l_433), g_12, p_56, p_56)) , 1L);
                        return p_58;
                    }
                }
            }
            else
            {
                unsigned char l_445 = 1UL;
                const int l_478 = 0L;
                if ((p_56 , (safe_lshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s(func_59(func_66(l_286, ((safe_div_func_uint16_t_u_u(p_56, (safe_rshift_func_uint8_t_u_u(0x0BL, func_66(g_112, (g_112 > g_112), p_58, (((safe_div_func_int8_t_s_s(func_59(p_57, g_140, p_56, l_400), l_314)) , g_112) , g_140)))))) , p_56), p_57, p_57), p_57, p_58, g_277), l_445)) , p_57), 5))))
                {
                    l_446 = p_58;
                }
                else
                {
                    int l_449 = 0x6FBC4005L;
                    const unsigned char l_455 = 0xABL;
                    g_140 = (0x0734L >= ((+6UL) != (+p_57)));
                    for (l_300 = 18; (l_300 <= 42); l_300 = safe_add_func_int16_t_s_s(l_300, 7))
                    {
                        short l_454 = 0x3C45L;
                        int l_456 = 0x5999EC62L;
                        g_140 = (8L != 4L);
                        l_456 = (((((((func_66(((l_449 > ((0xF7L <= (safe_mod_func_int16_t_s_s(((g_140 , ((((safe_mul_func_int8_t_s_s(3L, (((p_58 && (func_66((p_56 != (func_66((((((g_140 && l_366) < g_12) < l_416) <= 0xA1491F01L) , p_58), p_56, l_449, g_277) , l_445)), g_12, p_57, l_213) >= l_454)) < l_455) <= g_277))) != 1L) < g_277) , 6UL)) , l_352), 0x37E6L))) , l_352)) || l_412), l_372, p_57, g_277) , l_454) <= p_57) != 255UL) > p_56) , p_56) , l_221) > 0x73FF6AF7L);
                    }
                    for (l_213 = 0; (l_213 == 1); l_213++)
                    {
                        int l_477 = (-3L);
                        l_314 = ((func_59(func_59((l_314 & (safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((((p_57 == (g_12 & (safe_rshift_func_int8_t_s_s((g_277 | (((l_313 ^ (safe_sub_func_int32_t_s_s(func_66(func_66((safe_mul_func_uint16_t_u_u(p_57, (safe_sub_func_uint16_t_u_u(((l_416 >= g_12) && (safe_lshift_func_uint8_t_u_u(l_243, l_477))), p_58)))), p_58, p_57, g_140), p_57, g_277, g_277), g_277))) & p_56) != l_478)), 1)))) & p_57) && l_478), 7UL)) , 0x7DBBL), 2)), 0x39L)) != g_12), l_220))), p_57, p_57, l_445), l_445, l_221, p_57) != g_12) >= l_300);
                        return l_445;
                    }
                    if (func_66(((safe_mod_func_int8_t_s_s(((((func_66((0xBF9DE1A0L > (~(l_478 > (safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((((((((g_277 != 0x6AAAL) <= (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_352, 15)), (safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u(p_57, l_455)), ((l_493 < (((((p_58 , 0x958E436BL) || g_140) && p_56) | 0xF5L) == 0x23067E34L)) < g_112)))))) , 0xC45BD6CCL) , 0xCDE2L) < p_56) & g_112) > g_277), p_56)), 0xF94DE21DL))))), p_58, p_56, g_140) , p_57) | l_494) == l_366) < p_57), 7UL)) >= p_57), l_478, l_445, g_12))
                    {
                        p_56 = g_12;
                    }
                    else
                    {
                        unsigned l_495 = 0x3C083DE8L;
                        l_495 = p_56;
                    }
                }
                for (l_412 = (-3); (l_412 <= 29); ++l_412)
                {
                    if (g_277)
                        break;
                }
            }
            l_417 = (g_277 < p_58);
        }
    }
    return l_243;
}







static unsigned short func_59(int p_60, unsigned short p_61, unsigned p_62, unsigned p_63)
{
    unsigned char l_184 = 0UL;
    int l_204 = 0L;
    l_204 = (l_184 , (safe_rshift_func_int16_t_s_u((p_63 <= (safe_unary_minus_func_uint8_t_u((safe_div_func_uint32_t_u_u(g_140, ((safe_sub_func_int16_t_s_s(((g_140 & (((+((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(((0xCBL || (g_112 && (safe_lshift_func_int8_t_s_u(g_112, ((1UL > ((((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_62, 0L)), g_112)) <= g_112), g_140)) < p_63) && p_60) >= p_62)) == g_112))))) == 3L), p_62)), 7)) | 1L)) , 65535UL) <= g_12)) , g_140), 0x889EL)) ^ g_140)))))), 7)));
    return g_140;
}







static int func_66(unsigned char p_67, int p_68, const short p_69, unsigned p_70)
{
    unsigned l_79 = 4294967295UL;
    char l_82 = 0xF5L;
    unsigned l_83 = 1UL;
    int l_84 = 9L;
    int l_93 = (-1L);
    char l_96 = 1L;
    unsigned short l_97 = 0x332CL;
    int l_111 = 0xE7EE3D98L;
lbl_172:
    l_84 = (safe_mod_func_uint32_t_u_u(g_12, ((g_12 , (g_12 ^ (safe_div_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(g_12)), l_79)) , (safe_rshift_func_uint16_t_u_s((+(!0x5C8FL)), (4294967290UL <= ((l_82 > ((p_70 & l_83) || (-3L))) , 0xE653D3A1L))))) & g_12), g_12)))) || 8UL)));
    if (((p_68 , (((p_69 , l_83) > (((safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(l_84, (l_83 , (safe_div_func_int8_t_s_s((-7L), ((l_93 && p_70) , (((safe_add_func_int8_t_s_s(0x45L, l_96)) , (-4L)) , 0xDCL))))))), 0x80DDL)) && p_67), p_70)) <= l_96) != p_67)) ^ l_97)) == g_12))
    {
        int l_110 = 0xC21D0123L;
        int l_139 = 5L;
        g_112 = (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((safe_mul_func_uint16_t_u_u(((((g_12 != ((safe_mod_func_int16_t_s_s((g_12 < (g_12 || l_84)), 65528UL)) > (l_110 & ((4294967289UL & (l_110 ^ l_110)) || l_110)))) || l_110) , 0x75L) != l_111), p_67)) != p_70) , l_111), p_69)), l_110)) , p_67), p_67)), p_67));
        g_140 = (safe_mul_func_uint8_t_u_u(((p_69 && (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u((g_12 && ((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((-2L), (l_84 > (safe_div_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(0x4CD5L, p_68)), 2)) <= (safe_rshift_func_uint16_t_u_u(l_97, 2))) & (safe_rshift_func_int8_t_s_s(l_110, 0))) || (safe_mod_func_int8_t_s_s(1L, l_96))), 1)), l_110)) | (-8L)), g_12))))), 14)) && l_139)), 5)) | 0xEBBFAC55L) , l_97), 7))) & 65535UL), p_67));
        for (l_111 = 0; (l_111 > 8); ++l_111)
        {
            const unsigned char l_153 = 1UL;
            l_139 = l_110;
            if ((safe_rshift_func_int16_t_s_u((-2L), 6)))
            {
                for (p_67 = 0; (p_67 != 13); p_67 = safe_add_func_uint32_t_u_u(p_67, 8))
                {
                    unsigned l_166 = 0xF039857AL;
                    l_93 = (safe_sub_func_uint8_t_u_u(((((safe_sub_func_int16_t_s_s(g_140, 0UL)) , (safe_mul_func_int16_t_s_s(l_153, (safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((p_70 > ((safe_add_func_int16_t_s_s(p_69, (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(g_140, (-7L))), l_139)), 1UL)))) == p_69)) ^ 0xAEC8L) > l_166), 1UL)) ^ 0UL), 10))))) > p_70) , g_12), p_69));
                }
            }
            else
            {
                int l_167 = 0x93D23E42L;
                l_167 = ((l_110 == p_69) ^ p_70);
                return g_12;
            }
        }
    }
    else
    {
        unsigned short l_173 = 0x096BL;
        for (g_112 = 0; (g_112 < 8); g_112++)
        {
            short l_180 = 0x1AF2L;
            int l_183 = 8L;
            for (l_84 = (-8); (l_84 == 12); l_84++)
            {
                if (p_67)
                    goto lbl_172;
                l_173 = 0x0A7DF4BEL;
            }
            l_93 = (p_67 && ((p_68 == (((safe_rshift_func_uint8_t_u_u(g_12, (safe_sub_func_int32_t_s_s((l_180 ^ 0xEB4CL), ((safe_mod_func_uint16_t_u_u(l_173, g_12)) == l_180))))) >= (((g_112 != l_173) , l_79) != 65533UL)) <= g_112)) >= p_68));
            l_183 = g_140;
        }
        l_84 = l_111;
        l_93 = g_112;
    }
    return l_96;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_1183, "g_1183", print_hash_value);
    transparent_crc(g_1190, "g_1190", print_hash_value);
    transparent_crc(g_1254, "g_1254", print_hash_value);
    transparent_crc(g_1268, "g_1268", print_hash_value);
    transparent_crc(g_1271, "g_1271", print_hash_value);
    transparent_crc(g_1332, "g_1332", print_hash_value);
    transparent_crc(g_1378, "g_1378", print_hash_value);
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1791, "g_1791", print_hash_value);
    transparent_crc(g_1807, "g_1807", print_hash_value);
    transparent_crc(g_1815, "g_1815", print_hash_value);
    transparent_crc(g_1827, "g_1827", print_hash_value);
    transparent_crc(g_1828, "g_1828", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
