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



static unsigned g_2 = 0xEB90DA11L;
static int g_35 = 0L;
static int g_39 = 0L;
static volatile unsigned g_76 = 0UL;
static volatile char g_79 = (-1L);
static unsigned g_92 = 4294967286UL;
static short g_116 = 1L;
static unsigned g_165 = 0xF1AF85E6L;
static volatile unsigned char g_173 = 255UL;
static volatile unsigned char g_183 = 6UL;
static volatile unsigned char g_239 = 0x30L;
static volatile int g_244 = 1L;
static unsigned short g_266 = 0x324BL;
static const int ** volatile g_273 = (void*)0;
static const int *g_275 = (void*)0;
static const int ** volatile g_274 = &g_275;
static unsigned g_278 = 5UL;
static char g_329 = 0L;
static unsigned short g_331 = 0UL;
static const int ** const volatile g_352 = &g_275;
static unsigned short * const *g_356 = (void*)0;
static unsigned short * const ** volatile g_355 = &g_356;
static int **g_363 = (void*)0;
static const int ** volatile g_386 = &g_275;
static unsigned g_429 = 0xBB0A9F56L;
static volatile unsigned g_452 = 4294967295UL;
static unsigned g_464 = 0x98BEAC25L;
static unsigned * volatile *g_496 = (void*)0;
static unsigned * volatile ** volatile g_497 = &g_496;
static unsigned char g_545 = 6UL;
static int * volatile g_563 = (void*)0;
static unsigned short g_569 = 0xE2CCL;
static const unsigned char g_578 = 0x97L;
static short *g_589 = &g_116;
static int ***g_632 = (void*)0;
static int ****g_631 = &g_632;
static volatile int g_664 = 0xCFA1AE78L;
static volatile int g_683 = 0L;
static short g_731 = 0xD422L;
static int g_752 = (-1L);
static short **g_814 = &g_589;
static short *** volatile g_813 = &g_814;
static volatile unsigned char g_883 = 0UL;
static unsigned char g_915 = 255UL;
static unsigned short *g_923 = &g_266;
static unsigned short ** const g_922 = &g_923;
static unsigned short ** const *g_921 = &g_922;
static unsigned short ** const * const *g_920 = &g_921;
static int *g_985 = (void*)0;
static int **g_984 = &g_985;
static short g_988 = (-1L);
static int ***g_1055 = &g_363;
static int **** const g_1054 = &g_1055;
static int **** const *g_1053 = &g_1054;
static volatile int g_1181 = 0x64F06872L;
static volatile unsigned short g_1200 = 0UL;
static const int ** const volatile g_1212 = &g_275;
static const unsigned g_1226 = 4294967286UL;
static int *** volatile g_1246 = &g_984;
static unsigned char g_1262 = 0x23L;
static volatile unsigned * volatile **g_1266 = (void*)0;
static unsigned char g_1302 = 0x19L;
static short g_1398 = 1L;
static char g_1413 = (-6L);
static unsigned * volatile ** volatile g_1429 = &g_496;
static int *g_1476 = &g_752;
static int ** volatile g_1475 = &g_1476;
static int g_1486 = 0x897A3F54L;
static int * volatile g_1497 = &g_752;
static unsigned *g_1530 = &g_165;
static unsigned **g_1529 = &g_1530;
static unsigned *** volatile g_1528 = &g_1529;
static int * volatile g_1579 = &g_39;



static unsigned func_1(void);
static short func_11(int p_12, unsigned p_13, int p_14, unsigned p_15, unsigned p_16);
static unsigned char func_17(const int p_18, const unsigned p_19, int p_20, unsigned p_21);
static unsigned func_24(int p_25, unsigned short p_26, const int p_27, char p_28);
static char func_31(unsigned char p_32, unsigned p_33, int p_34);
static short func_95(int p_96);
static int * func_98(int * const p_99);
static int * func_100(int p_101, unsigned p_102);
static int * func_103(int * p_104, unsigned short p_105, const int p_106);
static int * func_107(unsigned p_108, unsigned short p_109, int * p_110, unsigned p_111, short p_112);
static unsigned func_1(void)
{
    const unsigned short l_30 = 0x2C4DL;
    unsigned l_1263 = 0xD005FBCEL;
    const unsigned l_1264 = 4UL;
    int *l_1584 = &g_752;
    if (g_2)
    {
        unsigned short l_29 = 65535UL;
        unsigned *l_1577 = (void*)0;
        unsigned *l_1578 = &g_2;
        int l_1583 = 0x5FCC737FL;
        (*g_1579) = ((safe_add_func_uint32_t_u_u(((*l_1578) = (~((safe_mod_func_int32_t_s_s((0x565EL | ((safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s((func_11(g_2, (((((func_17((+(safe_lshift_func_uint16_t_u_u(((g_2 == (((func_24(l_29, l_29, l_30, func_31(((-1L) != g_35), g_2, l_29)) ^ l_1263) != l_30) <= l_1264)) <= 0xDEL), l_29))), l_1264, l_1263, l_1263) ^ g_752) != 1UL) && l_29) ^ (-1L)) & l_1264), l_1264, g_731, g_1262) <= 0x39ABL), 3L)), 0x8CF7002DL)) & (-7L))), l_1263)) <= 251UL))), 0xC905DA48L)) <= l_29);



        ;
        ;
        ;


        for (g_2 = 28; (g_2 != 57); g_2++)
        {
            int *l_1582 = &g_752;
            char *l_1586 = (void*)0;
            char **l_1585 = &l_1586;
            char ***l_1587 = &l_1585;
            (*l_1582) ^= (-1L);
            l_1583 = ((*l_1582) = l_29);
            (*g_1475) = l_1584;

            ;
            (*g_274) = l_1582;

            ;
        }


    }
    else
    {
        unsigned *l_1592 = (void*)0;
        int l_1593 = 0xC694B254L;
        int l_1594 = (-6L);
        const char l_1595 = 1L;
        (*g_386) = l_1584;

        ;
        (**g_1475) = func_24(((safe_add_func_uint8_t_u_u((*l_1584), (safe_mul_func_int16_t_s_s((**g_814), (**g_922))))) != ((l_1593 = (*l_1584)) < ((*l_1584) > l_1594))), (***g_921), func_17((*g_1579), l_1595, (*l_1584), g_1226), g_1398);



        ;
        ;
        ;
        if (l_1594)
        {
            return (*l_1584);
        }
        else
        {
            char l_1596 = 1L;
            (*l_1584) = l_1596;
        }
    }



    ;
    ;
    ;


    l_1584 = l_1584;
    (*l_1584) = (*l_1584);
    return (*l_1584);
}







static short func_11(int p_12, unsigned p_13, int p_14, unsigned p_15, unsigned p_16)
{
    unsigned short *l_1275 = &g_266;
    const int l_1276 = 0x2D0E5419L;
    char *l_1277 = &g_329;
    int l_1278 = (-1L);
    int l_1287 = (-10L);
    int l_1288 = 5L;
    unsigned l_1329 = 4294967295UL;
    unsigned l_1356 = 0x4C346718L;
    int *l_1384 = &g_39;
    int ***l_1390 = (void*)0;
    unsigned *l_1427 = &g_165;
    unsigned **l_1426 = &l_1427;
    unsigned char *l_1448 = &g_1302;
    unsigned char **l_1447 = &l_1448;
    char l_1460 = 0x24L;
    short l_1566 = 0L;
    short *l_1576 = &g_731;
    if ((safe_unary_minus_func_int8_t_s((l_1278 = ((*l_1277) &= (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((***g_813), (safe_div_func_int16_t_s_s((((*g_922) = l_1275) == (void*)0), func_17(p_12, l_1276, p_15, p_16))))), g_1226)))))))
    {
        int *l_1280 = (void*)0;
        int **l_1279 = &l_1280;
        int *l_1285 = &g_35;
        int *l_1286 = (void*)0;
        short *l_1293 = (void*)0;
        unsigned short **l_1307 = &l_1275;
        unsigned short ***l_1306 = &l_1307;
        unsigned short ****l_1305 = &l_1306;
        unsigned short ****l_1309 = &l_1306;
        unsigned short *****l_1308 = &l_1309;
        unsigned char *l_1310 = &g_1262;
        int l_1315 = 0xC0F22350L;
        short l_1346 = 0xD9D1L;
        int l_1372 = 0xC3CEB325L;
        (*l_1279) = &l_1278;

        ;
        p_14 = ((**g_922) | (safe_lshift_func_int16_t_s_s(1L, ((!p_12) != (g_731 && 255UL)))));
        (*l_1279) = (*l_1279);
        if ((safe_add_func_int16_t_s_s(((**g_814) = l_1276), ((safe_mod_func_uint16_t_u_u(((****g_920) = ((((((**l_1279) |= l_1287) <= (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(p_13, (safe_mul_func_int16_t_s_s(l_1288, func_31(l_1287, g_1302, (safe_mul_func_uint8_t_u_u(((*l_1310) = ((l_1305 != ((*l_1308) = &l_1306)) == l_1288)), l_1288))))))), l_1287)) <= 0x8AE2L), 0))) || 4294967290UL) == p_16) >= l_1288)), p_14)) > p_16))))
        {
            (*l_1280) = p_16;
        }
        else
        {
            unsigned char l_1316 = 0UL;
            short l_1327 = 1L;
            int l_1335 = 0x418B9ABAL;
            int l_1343 = 0L;
            int *l_1357 = &l_1278;
            const char *l_1358 = &g_329;
            for (g_35 = 0; (g_35 >= 2); g_35 = safe_add_func_int32_t_s_s(g_35, 4))
            {
                int *l_1319 = &g_39;
                unsigned *l_1320 = &g_464;
                unsigned char *l_1328 = &l_1316;
                unsigned l_1344 = 0xD5FA7A5AL;
                int l_1380 = (-1L);
                for (g_915 = 0; (g_915 > 4); ++g_915)
                {
                    l_1316--;
                }
                if (((*l_1319) = ((((*l_1328) ^= func_17(((*l_1319) &= (-9L)), ((*l_1320) &= (((*g_589) == p_16) < (+p_13))), (safe_div_func_uint16_t_u_u((((****l_1309) = (safe_lshift_func_uint8_t_u_s(g_183, p_12))) == (0L && (safe_mul_func_uint8_t_u_u(((*l_1310) = (g_1302 &= 0xD1L)), l_1327)))), 0xAC81L)), l_1278)) < l_1329) & 1L)))
                {
                    (*g_386) = &p_14;

                    ;
                }
                else
                {
                    int *l_1334 = &l_1288;
                    short *l_1338 = &g_988;
                    short *l_1345 = &l_1327;
                    unsigned char *l_1347 = (void*)0;
                    unsigned char *l_1348 = &g_1302;
                    int l_1367 = (-6L);
                    unsigned l_1381 = 0x1F5770ECL;
                    if (l_1329)
                        break;
                    if (((safe_rshift_func_int8_t_s_u((((*l_1348) |= (safe_lshift_func_uint16_t_u_s(((p_15 && l_1278) & func_17(((*l_1334) = p_15), p_16, l_1335, (safe_lshift_func_int16_t_s_s((**g_814), (((*l_1338) = (***g_813)) & (g_731 |= ((*l_1345) &= (l_1344 &= (+(l_1343 = ((++(*l_1328)) || (l_1278 & (safe_mul_func_uint8_t_u_u((*l_1319), 0x44L)))))))))))))), l_1346))) || g_464), 5)) | g_1262))
                    {
                        char l_1351 = (-1L);
                        const char **l_1359 = &l_1358;
                        int *l_1366 = &g_35;
                        (*l_1334) = (((safe_div_func_uint8_t_u_u(0xF2L, l_1351)) != p_16) || (p_14 & (safe_rshift_func_int16_t_s_s((((p_15 < (-1L)) ^ ((*l_1338) = (safe_div_func_int32_t_s_s((g_1266 == g_1266), l_1356)))) == p_12), 8))));
                        l_1357 = &l_1343;

                        ;
                        (*l_1334) |= (func_31(((*l_1310) = p_13), (l_1347 == ((*l_1359) = l_1358)), (*l_1319)) >= ((safe_add_func_uint16_t_u_u(((***g_921) = (l_1351 & (((safe_div_func_uint16_t_u_u(65535UL, (safe_mul_func_int8_t_s_s((((void*)0 == l_1366) ^ 4UL), g_915)))) >= g_731) && g_752))), 65528UL)) && (**g_814)));
                    }
                    else
                    {
                        int *l_1368 = &l_1288;
                        int *l_1369 = &l_1288;
                        int *l_1370 = &l_1287;
                        int *l_1371 = (void*)0;
                        int *l_1373 = &l_1343;
                        int *l_1374 = &g_39;
                        int *l_1375 = &l_1288;
                        int *l_1376 = &g_752;
                        int *l_1377 = &l_1278;
                        int *l_1378 = &l_1372;
                        int *l_1379 = &l_1288;
                        ++l_1381;
                        l_1384 = &p_14;

                        ;
                    }

                    ;
                    ;
                    return p_16;


                }

                ;
                for (g_545 = 0; (g_545 != 48); ++g_545)
                {
                    short l_1387 = 0x1120L;
                    if (p_14)
                        break;
                    return l_1387;


                }
            }


            return (***g_813);


        }
    }
    else
    {
        int ***l_1395 = &g_984;
        int **l_1397 = &g_985;
        int ***l_1396 = &l_1397;
        int l_1399 = 0xED750C72L;
        short **l_1424 = &g_589;
        int *l_1465 = (void*)0;
        unsigned l_1481 = 1UL;
        unsigned short l_1492 = 0xE8DFL;
        int **l_1493 = (void*)0;
        int **l_1494 = &l_1465;
        unsigned short l_1513 = 0x69C5L;
        unsigned **l_1527 = &l_1427;
        (*l_1384) ^= 0x5614F246L;
        l_1399 = (safe_div_func_uint16_t_u_u(((((void*)0 != l_1390) == (safe_rshift_func_int16_t_s_s((p_13 >= p_15), (**g_814)))) > ((((*l_1384) & func_31((safe_add_func_int16_t_s_s((((*l_1395) = (*g_1246)) == ((*l_1396) = &g_985)), p_12)), g_1398, l_1399)) > 0UL) == g_429)), p_14));
        if (p_13)
        {
            int *l_1404 = &l_1399;
            (*l_1384) = ((0UL || (safe_add_func_int16_t_s_s((255UL <= l_1399), ((*l_1275) = (*g_923))))) ^ (safe_lshift_func_int16_t_s_s((***g_813), (**g_814))));
            l_1404 = l_1404;
            (*l_1404) = (g_35 >= ((~(&p_16 == &p_16)) & p_12));
        }
        else
        {
            const unsigned **l_1425 = (void*)0;
            const int l_1449 = 0x26DBE55FL;
            unsigned char *l_1450 = &g_1262;
            unsigned char *l_1453 = &g_545;
            for (g_429 = (-2); (g_429 < 46); g_429 = safe_add_func_int32_t_s_s(g_429, 9))
            {
                unsigned *l_1407 = &g_92;
                char *l_1412 = &g_1413;
                int ****l_1416 = &l_1396;
                int l_1417 = 0xC1B52451L;
                char *l_1423 = (void*)0;
                char **l_1422 = &l_1423;
                if (((--(*l_1407)) >= func_17((*l_1384), (safe_sub_func_int8_t_s_s(((*l_1412) = ((*l_1277) = (p_14 & 0x3A8AL))), (safe_add_func_uint16_t_u_u(0x825CL, (((*l_1416) = (void*)0) != &g_984))))), l_1417, ((l_1399 == (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((*l_1422) = (void*)0) != &g_79), (***g_813))), 0x1DL))) < (-1L)))))
                {
                    (*l_1384) = 8L;
                }
                else
                {
                    unsigned ***l_1428 = &l_1426;
                    p_14 |= p_16;
                    (*l_1384) = ((void*)0 == l_1424);
                    (*l_1384) = (l_1425 == ((*l_1428) = l_1426));
                    (*g_1429) = (*g_497);
                }

                ;
                p_14 = (safe_rshift_func_uint8_t_u_s(func_95(l_1417), l_1417));
            }

            ;
            l_1399 = ((*l_1384) = ((safe_add_func_uint32_t_u_u(((((safe_unary_minus_func_uint16_t_u((0x3AL || ((p_16 < (**g_922)) == (***g_921))))) != p_15) & l_1449) && p_16), l_1449)) | 0x3390L));
            for (g_1302 = 28; (g_1302 > 55); ++g_1302)
            {
                short l_1461 = 0x0117L;
                int *l_1462 = &l_1399;
                int **l_1474 = (void*)0;
                char *l_1482 = &g_1413;
                int *l_1483 = &g_35;
                int *l_1484 = (void*)0;
                int *l_1485 = &g_1486;
                int **l_1487 = &l_1465;
                (*l_1462) ^= (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_429, func_31(((*l_1384) = g_683), g_1398, (l_1460 ^ (4L ^ (l_1461 & (0x56D1C3EBL & 4294967295UL))))))), p_12));
                for (g_165 = 12; (g_165 > 36); ++g_165)
                {
                    int *l_1472 = &g_35;
                    int *l_1473 = &l_1278;
                    l_1465 = l_1462;

                    ;
                    (*l_1473) &= (l_1449 != ((safe_rshift_func_uint16_t_u_u(func_31((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(1UL, (*l_1462))), func_31(l_1449, p_13, ((*l_1472) |= l_1449)))), g_1226, p_14), 10)) >= l_1449));
                }

                ;
                (*g_1475) = func_98(&g_39);

                ;
                (*l_1487) = func_98(&p_14);

                ;
            }

            ;
            ;
        }

        ;
        ;
        ;
        if ((safe_mod_func_uint8_t_u_u((+((p_14 >= 0x79C12CCDL) && (safe_sub_func_uint8_t_u_u(((&p_14 != ((*l_1494) = &p_14)) != p_16), 0x04L)))), p_16)))
        {
            unsigned short l_1495 = 0x356DL;
            int l_1496 = 0x78A46C1DL;
            (*l_1384) = p_16;
            l_1496 = l_1495;
        }
        else
        {
            const short l_1514 = 7L;
            unsigned short **l_1519 = &g_923;
            int l_1523 = 5L;
            int *l_1524 = &g_752;
            char l_1555 = 1L;
            (*g_1497) &= (*l_1384);
            for (p_15 = 0; (p_15 < 36); p_15++)
            {
                short l_1502 = 1L;
                char l_1512 = 0x43L;
                for (g_752 = 0; (g_752 < 18); g_752 = safe_add_func_uint8_t_u_u(g_752, 5))
                {
                    int l_1507 = 1L;
                    p_14 = (l_1502 >= ((p_13 != g_331) > 1L));
                    (*l_1384) = (safe_mul_func_uint8_t_u_u(((func_31(g_1200, ((**l_1426) = (l_1507 && (p_16 & (safe_mod_func_uint32_t_u_u((((*g_589) = 0xE20CL) == (safe_lshift_func_int8_t_s_u((p_15 > 6L), 4))), g_165))))), l_1512) < p_15) < l_1502), 0x7FL));
                }
                return p_13;
            }
            l_1513 = func_95(p_14);
            if (l_1514)
            {
                unsigned short ***l_1520 = (void*)0;
                unsigned short ***l_1521 = (void*)0;
                unsigned short ***l_1522 = &l_1519;
                (*l_1384) &= l_1514;
                l_1523 ^= (safe_rshift_func_int16_t_s_s((((p_15 && (safe_sub_func_int32_t_s_s((+(g_76 == g_578)), p_13))) | ((**g_920) != ((*l_1522) = l_1519))) ^ func_17(p_16, p_12, ((g_545 <= p_15) ^ g_2), p_16)), p_14));
                (*l_1494) = &p_14;

                ;
                l_1524 = &l_1523;

                ;
            }
            else
            {
                char l_1536 = (-10L);
                unsigned short l_1540 = 65535UL;
                int l_1544 = 0xF2E29313L;
                for (g_92 = 2; (g_92 < 3); g_92++)
                {
                    short *l_1535 = &g_731;
                    (*g_1528) = l_1527;

                    ;
                }

                ;
                for (p_16 = 0; (p_16 == 35); ++p_16)
                {
                    unsigned short l_1549 = 1UL;
                    int **l_1552 = &g_1476;
                    unsigned l_1567 = 0x1F1EAC26L;
                    l_1549--;
                    (*l_1552) = ((*l_1494) = &l_1544);

                    ;
                    ;
                    p_14 &= (p_13 > 0x5A43L);
                    for (l_1399 = 0; (l_1399 <= (-24)); --l_1399)
                    {
                        if (p_12)
                            break;
                        (**l_1494) = (l_1555 == (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((~(**l_1552)), 4)) > (~p_13)), (((safe_lshift_func_int8_t_s_u(p_13, (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_1277) = 0x0FL), (+(~(p_15 || (l_1567 = (func_31(g_464, (*l_1524), p_14) && l_1566))))))), 1L)))) | (**l_1552)) | (**l_1494)))));
                        (*l_1494) = &l_1523;

                        ;
                    }

                    ;
                }

                ;
                ;
                (*g_1476) |= p_16;
                (*l_1384) &= 0x7B16D7D4L;
            }



            ;
            ;
        }



        ;
    }


    ;
    (*l_1384) &= (p_15 | 255UL);
    return (*g_589);


}







static unsigned char func_17(const int p_18, const unsigned p_19, int p_20, unsigned p_21)
{
    unsigned ***l_1265 = (void*)0;
    int *l_1267 = &g_39;
    (*l_1267) = (l_1265 == g_1266);
    return g_1262;
}







static unsigned func_24(int p_25, unsigned short p_26, const int p_27, char p_28)
{
    int *l_97 = &g_39;
    int *l_473 = &g_39;
    int **l_472 = &l_473;
    unsigned short *l_568 = &g_569;
    unsigned short ** const l_567 = &l_568;
    unsigned short ** const *l_566 = &l_567;
    unsigned short ** const **l_570 = &l_566;
    unsigned short **l_573 = &l_568;
    unsigned short ***l_572 = &l_573;
    unsigned short ****l_571 = &l_572;
    const unsigned char *l_577 = &g_578;
    const unsigned char **l_576 = &l_577;
    unsigned char *l_579 = &g_545;
    int l_667 = (-9L);
    int l_680 = (-3L);
    int l_691 = 0L;
    int l_714 = 0x565D6A2FL;
    int l_750 = 4L;
    int l_768 = 0x94FC5A9CL;
    unsigned short l_809 = 65533UL;
    short **l_812 = &g_589;
    char l_980 = 0x71L;
    int **** const *l_1051 = (void*)0;
    int l_1146 = 0x3B379B81L;
    int l_1153 = (-6L);
    unsigned **l_1203 = (void*)0;
    unsigned *l_1206 = &g_464;
    unsigned **l_1205 = &l_1206;
    unsigned char l_1247 = 249UL;
    (*l_97) = ((func_95((l_97 != ((*l_472) = func_98(func_100(p_27, (*l_97)))))) != (safe_div_func_int32_t_s_s((((-1L) ^ (((*l_570) = l_566) != ((*l_571) = (void*)0))) & p_26), 0x890D4C23L))) & 0x20L);



    ;
    if ((safe_add_func_int16_t_s_s((((*l_576) = &g_545) != l_579), (&p_27 != (void*)0))))
    {
        unsigned short l_580 = 0x6F92L;
        return l_580;
    }
    else
    {
        short *l_587 = &g_116;
        short **l_588 = (void*)0;
        int l_607 = (-4L);
        const unsigned short * const l_617 = &g_266;
        const unsigned short * const *l_616 = &l_617;
        const unsigned short * const **l_615 = &l_616;
        const unsigned short * const ***l_614 = &l_615;
        int ****l_629 = (void*)0;
        int l_705 = (-1L);
        int l_730 = 0xDD22A97EL;
        unsigned *l_886 = &g_464;
        const int *l_892 = &l_680;
        (*l_97) = (safe_div_func_uint8_t_u_u(0x53L, ((safe_sub_func_int8_t_s_s(0x5EL, func_95(g_569))) || (safe_mul_func_uint8_t_u_u(0x1FL, ((g_589 = l_587) == (void*)0))))));
        for (p_28 = (-14); (p_28 != (-14)); p_28++)
        {
            short l_612 = (-6L);
            int l_613 = 0xCE884C05L;
            (*l_472) = (void*)0;

            ;
            for (g_39 = 0; (g_39 < 20); ++g_39)
            {
                int l_598 = 4L;
                int l_608 = 0x09605B78L;
                for (g_278 = 0; (g_278 <= 39); g_278++)
                {
                    unsigned *l_605 = (void*)0;
                    unsigned **l_604 = &l_605;
                    unsigned ***l_603 = &l_604;
                    int l_611 = 0x8F75EC2EL;
                    if ((safe_lshift_func_int8_t_s_s(p_27, (p_27 <= func_31(p_28, l_598, (p_27 == p_27))))))
                    {
                        short l_606 = 1L;
                        const int **l_609 = &g_275;
                        l_606 = (safe_add_func_uint8_t_u_u(1UL, (safe_rshift_func_int8_t_s_u(((void*)0 != l_603), 1))));
                        l_608 = l_607;
                        if (p_25)
                            continue;
                        (*l_609) = &p_27;

                        ;
                    }
                    else
                    {
                        short l_610 = 0x1D59L;
                        if (l_610)
                            break;
                        l_608 ^= (g_35 & 0xD6L);
                    }
                    l_613 = (((l_611 = (&p_28 != &p_28)) ^ func_31((&g_355 != &l_566), g_329, l_612)) <= 3L);
                    if (l_613)
                        break;
                }
                (*l_472) = (void*)0;
            }
        }


        ;
        if ((l_614 == (void*)0))
        {
            int *l_618 = &l_607;
            char *l_621 = &g_329;
            int l_639 = 5L;
            int l_726 = 0x7C1FB03AL;
            int l_760 = 0xB965B373L;
            char *l_816 = &g_329;
            (*l_472) = l_618;

            ;
            (*l_97) = (safe_mod_func_int8_t_s_s(p_25, ((*l_621) &= g_116)));
            for (g_39 = (-7); (g_39 > (-20)); g_39 = safe_sub_func_int8_t_s_s(g_39, 1))
            {
                int l_626 = 0x79BD662EL;
                int *****l_630 = (void*)0;
                unsigned *l_633 = &g_165;
                int ****l_634 = &g_632;
                int l_646 = 0L;
                int l_698 = 0L;
                int l_739 = (-7L);
                l_639 = ((**l_472) = (((safe_div_func_int8_t_s_s((((!l_626) != (safe_lshift_func_uint16_t_u_s(func_31(func_31(((*l_579) |= (*l_97)), ((*l_633) |= (((g_631 = l_629) == l_629) || p_28)), (func_31((!(((((*l_634) = &g_363) != &l_472) || (safe_rshift_func_int16_t_s_u(0x34BAL, (((safe_mul_func_int16_t_s_s((**l_472), 65527UL)) == p_26) <= p_28)))) < (*l_618))), p_26, g_239) ^ 1UL)), p_28, p_27), 11))) >= g_2), p_28)) ^ p_26) || (-1L)));

                ;
                ;
                for (g_569 = 0; (g_569 == 28); g_569 = safe_add_func_int32_t_s_s(g_569, 8))
                {
                    short l_649 = 3L;
                    int l_681 = 0xECBC03DAL;
                    int l_716 = 0x10863288L;
                    int l_738 = (-5L);
                    int l_789 = (-3L);
                    int l_801 = (-1L);
                    int l_805 = 0x604BCCBFL;
                    if (p_25)
                    {
                        int *l_642 = (void*)0;
                        int *l_643 = &l_607;
                        int *l_644 = &l_607;
                        int *l_645 = &l_639;
                        int *l_647 = (void*)0;
                        int *l_648 = &l_639;
                        int *l_650 = (void*)0;
                        int *l_651 = &l_607;
                        int *l_652 = &l_646;
                        int *l_653 = &l_646;
                        int *l_654 = (void*)0;
                        int *l_655 = (void*)0;
                        int *l_656 = &l_607;
                        int *l_657 = &l_607;
                        int *l_658 = &l_646;
                        int *l_659 = &l_607;
                        int *l_660 = (void*)0;
                        int *l_661 = &l_639;
                        int *l_662 = &l_646;
                        int *l_663 = &l_646;
                        int *l_665 = &l_607;
                        int *l_666 = &l_646;
                        int *l_668 = &l_667;
                        int *l_669 = &l_607;
                        int *l_670 = &l_639;
                        int *l_671 = &l_646;
                        int *l_672 = &l_667;
                        int *l_673 = &l_646;
                        int *l_674 = (void*)0;
                        int *l_675 = &l_639;
                        int *l_676 = &l_667;
                        int *l_677 = &l_667;
                        int *l_678 = &l_646;
                        int *l_679 = &l_607;
                        int *l_682 = (void*)0;
                        int *l_684 = &l_667;
                        int *l_685 = &l_680;
                        int *l_686 = (void*)0;
                        int *l_687 = (void*)0;
                        int *l_688 = &l_639;
                        int *l_689 = (void*)0;
                        int *l_690 = (void*)0;
                        int *l_692 = (void*)0;
                        int *l_693 = (void*)0;
                        int *l_694 = &l_691;
                        int *l_695 = &l_681;
                        int *l_696 = (void*)0;
                        int *l_697 = &l_681;
                        int *l_699 = &l_698;
                        int *l_700 = &l_639;
                        int *l_701 = (void*)0;
                        int *l_702 = &l_607;
                        int *l_703 = &l_680;
                        int l_704 = 6L;
                        int *l_706 = (void*)0;
                        int *l_707 = &l_704;
                        int *l_708 = &l_667;
                        int *l_709 = &l_681;
                        int *l_710 = (void*)0;
                        int *l_711 = &l_698;
                        int *l_712 = &l_691;
                        int *l_713 = &l_704;
                        int *l_715 = &l_714;
                        int *l_717 = &l_639;
                        int *l_718 = &l_680;
                        int *l_719 = &l_681;
                        int *l_720 = &l_691;
                        int *l_721 = &l_607;
                        int *l_722 = &l_639;
                        int *l_723 = &l_646;
                        int *l_724 = &l_680;
                        int *l_725 = &l_714;
                        int *l_727 = &l_667;
                        int *l_728 = &l_714;
                        int *l_729 = (void*)0;
                        int *l_732 = &l_705;
                        int *l_733 = &l_646;
                        int *l_734 = &l_680;
                        int *l_735 = &l_646;
                        int *l_736 = &l_714;
                        int *l_737 = &l_681;
                        int *l_740 = &l_698;
                        int *l_741 = &l_646;
                        int *l_742 = &l_646;
                        int *l_743 = &l_730;
                        int *l_744 = &l_739;
                        int *l_745 = &l_607;
                        int *l_746 = &l_730;
                        int *l_747 = &l_716;
                        int *l_748 = &l_739;
                        int *l_749 = &l_698;
                        int *l_751 = &l_705;
                        int *l_753 = &l_691;
                        int *l_754 = &l_750;
                        int *l_755 = &l_681;
                        int *l_756 = (void*)0;
                        int *l_757 = &l_680;
                        int *l_758 = &l_704;
                        int *l_759 = &l_714;
                        int *l_761 = &l_691;
                        int *l_762 = &l_680;
                        int *l_763 = &l_738;
                        int *l_764 = &l_705;
                        int *l_765 = (void*)0;
                        int *l_766 = &l_726;
                        int *l_767 = &l_680;
                        int *l_769 = &l_716;
                        int *l_770 = &l_768;
                        int *l_771 = &l_667;
                        int *l_772 = &l_680;
                        int *l_773 = &l_739;
                        int *l_774 = &l_714;
                        int *l_775 = (void*)0;
                        int *l_776 = &g_752;
                        int *l_777 = &l_646;
                        int *l_778 = &l_704;
                        int *l_779 = &l_646;
                        int *l_780 = &l_768;
                        int *l_781 = &l_698;
                        int *l_782 = &l_730;
                        int *l_783 = &l_730;
                        int *l_784 = &l_681;
                        int *l_785 = &l_750;
                        int *l_786 = (void*)0;
                        int *l_787 = &l_681;
                        int *l_788 = &l_704;
                        int *l_790 = &l_680;
                        int *l_791 = &l_760;
                        int *l_792 = &l_691;
                        int *l_793 = &g_752;
                        int l_794 = 3L;
                        int *l_795 = &l_691;
                        int *l_796 = &l_714;
                        int *l_797 = &l_794;
                        int *l_798 = &l_714;
                        int *l_799 = &l_667;
                        int *l_800 = (void*)0;
                        int *l_802 = &l_726;
                        int *l_803 = &l_768;
                        int *l_804 = &l_705;
                        int *l_806 = &l_639;
                        int *l_807 = &l_681;
                        int *l_808 = &l_691;
                        const int **l_815 = &g_275;
                        ++l_809;
                        (*g_813) = l_812;
                        (*l_815) = &p_27;

                        ;
                        (*l_763) = (-1L);
                    }
                    else
                    {
                        (*l_473) &= 0x5B072407L;
                        (*l_473) = p_28;
                    }
                }
                l_739 ^= ((**l_472) = ((((((void*)0 == l_816) || g_464) & (+(safe_lshift_func_int8_t_s_u(g_569, ((-1L) > (*l_618)))))) || 0x9367L) < (((*g_632) = (void*)0) != &l_97)));
                l_705 |= ((safe_rshift_func_uint16_t_u_u((*l_473), p_27)) != ((safe_sub_func_int8_t_s_s(func_31(p_27, (!(*l_618)), g_39), (safe_mul_func_int8_t_s_s(p_28, p_27)))) | ((&g_363 == (void*)0) & p_27)));
            }

            ;
            ;
        }
        else
        {
            unsigned char *l_828 = &g_545;
            int l_867 = 0x60849B00L;
            int l_936 = 0x8F885F79L;
            int **l_983 = (void*)0;
            if ((*l_97))
            {
                unsigned short l_827 = 65535UL;
                unsigned char *l_829 = (void*)0;
                int l_830 = 0x82BCD2E3L;
                (*l_97) &= (l_827 ^= (safe_rshift_func_uint16_t_u_s(1UL, 4)));
                (*l_97) = l_827;
                if (l_827)
                {
                    if ((((l_828 = l_579) != l_829) > g_76))
                    {
                        short l_831 = 0x990AL;
                        int *l_832 = &g_35;
                        l_830 ^= p_27;
                        l_830 ^= l_827;
                        (*l_472) = &l_830;

                        ;
                    }
                    else
                    {
                        unsigned char **l_833 = &l_828;
                        unsigned char **l_834 = &l_829;
                        (*l_97) = p_25;
                        (*l_97) &= (((*l_834) = ((*l_833) = l_828)) != (void*)0);

                        ;
                    }

                    ;
                    ;
                    for (g_545 = 0; (g_545 < 19); g_545++)
                    {
                        return p_26;


                    }
                    (*l_97) ^= (safe_lshift_func_uint8_t_u_u(g_239, p_28));
                }
                else
                {
                    for (g_569 = 0; (g_569 != 29); g_569 = safe_add_func_uint16_t_u_u(g_569, 3))
                    {
                        if ((*l_97))
                            break;
                    }
                }

                ;
                ;
            }
            else
            {
                int *l_845 = &l_705;
                int *l_846 = (void*)0;
                int *l_847 = &l_768;
                int *l_848 = &l_667;
                int *l_849 = &l_714;
                int *l_850 = &l_768;
                int *l_851 = (void*)0;
                int *l_852 = &l_705;
                int *l_853 = &l_607;
                int *l_854 = (void*)0;
                int *l_855 = &l_691;
                int *l_856 = (void*)0;
                int *l_857 = &g_39;
                int *l_858 = &l_691;
                int *l_859 = (void*)0;
                int l_860 = 0x92FD68C8L;
                int *l_861 = &l_714;
                int *l_862 = &l_860;
                int l_863 = 6L;
                int *l_864 = &l_863;
                int *l_865 = &l_667;
                int *l_866 = &l_680;
                int *l_868 = &l_680;
                int *l_869 = &l_705;
                int *l_870 = &l_730;
                int *l_871 = (void*)0;
                int *l_872 = &l_863;
                int *l_873 = &l_714;
                int *l_874 = (void*)0;
                int *l_875 = &l_863;
                int l_876 = 0x4C15BA14L;
                int *l_877 = &l_876;
                int *l_878 = &l_863;
                int *l_879 = &l_860;
                int *l_880 = &l_667;
                int *l_881 = &l_768;
                int *l_882 = &l_768;
                unsigned **l_887 = &l_886;
                int *l_891 = (void*)0;
                int **l_890 = &l_891;
                unsigned short l_969 = 0x7CC3L;
                for (l_750 = (-30); (l_750 != (-10)); ++l_750)
                {
                    unsigned short l_844 = 0x1536L;
                    l_844 |= (safe_unary_minus_func_int8_t_s(p_28));
                    (*g_352) = (void*)0;

                    ;
                }
                g_883--;
                if ((((*l_890) = &g_35) != l_473))
                {
                    return p_25;


                }
                else
                {
                    short l_908 = (-2L);
                    int l_911 = 0L;
                    unsigned char *l_914 = &g_915;
                    int l_927 = 0x15A50664L;
                    int l_928 = 0L;
                    int l_930 = 0x0461D223L;
                    int ***l_986 = (void*)0;
                    int ***l_987 = &g_984;
                    l_892 = &p_27;

                    ;
                    (*l_472) = (void*)0;

                    ;
                    if ((0xBF6EL && (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_s(1L, 2)))), 3)), ((--(*l_579)) != ((safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_908 = g_92), g_39)), ((****l_570)++))), 7)) < (l_867 = ((l_911 = g_35) | (safe_mod_func_uint8_t_u_u((((*l_914) &= (p_28 != (*l_97))) && (*l_892)), (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_28, (*l_892))), 1))))))))))))
                    {
                        unsigned short ** const * const **l_924 = &g_920;
                        unsigned short ** const ***l_925 = &l_570;
                        const int *l_926 = &l_863;
                        int l_929 = 0x3F954FDBL;
                        int *l_931 = &l_667;
                        int *l_932 = &l_930;
                        int *l_933 = &l_927;
                        int *l_934 = (void*)0;
                        int *l_935 = (void*)0;
                        int *l_937 = &l_768;
                        int *l_938 = &g_752;
                        int *l_939 = &l_929;
                        int *l_940 = (void*)0;
                        int *l_941 = &l_705;
                        int *l_942 = &l_680;
                        int *l_943 = &l_911;
                        int *l_944 = &l_705;
                        int *l_945 = &l_930;
                        int *l_946 = &l_863;
                        int *l_947 = &l_714;
                        int *l_948 = &g_39;
                        int *l_949 = &l_705;
                        int *l_950 = &l_705;
                        int *l_951 = &g_39;
                        int *l_952 = &g_39;
                        int *l_953 = &l_768;
                        int *l_954 = &l_705;
                        int *l_955 = &l_680;
                        int *l_956 = &l_714;
                        int *l_957 = &l_860;
                        int *l_958 = &l_680;
                        int *l_959 = (void*)0;
                        int *l_960 = &l_730;
                        int *l_961 = &l_929;
                        int *l_962 = &l_927;
                        int *l_963 = &l_876;
                        int *l_964 = &l_730;
                        int *l_965 = (void*)0;
                        int *l_966 = &g_752;
                        int *l_967 = (void*)0;
                        int l_968 = 7L;
                        (*l_848) ^= (l_911 < (((*l_924) = g_920) != ((*l_925) = &l_566)));
                        l_926 = &p_27;

                        ;
                        ++l_969;
                        return l_936;


                    }
                    else
                    {
                        (*l_862) = ((safe_mul_func_uint8_t_u_u((p_28 >= (safe_mod_func_uint16_t_u_u(((**l_567) = 0x7FCCL), p_27))), g_429)) >= 0xA4L);
                    }
                    (*l_868) = (((safe_rshift_func_uint16_t_u_u(((+g_173) && (safe_mul_func_uint8_t_u_u(((func_95(l_980) >= g_752) & g_2), p_28))), 8)) >= ((((~p_25) || (safe_mod_func_uint32_t_u_u((g_988 = (l_983 != ((*l_987) = g_984))), (*l_852)))) < p_27) & 0x20L)) != 0UL);
                }

                ;
                ;
                ;
            }


            ;
        }


        ;
        ;
        ;
        (*l_97) &= 0x68737DB0L;
    }



    ;
    ;
    ;
    if (func_95(g_329))
    {
        unsigned l_989 = 1UL;
        int l_992 = 0L;
        unsigned char l_1033 = 0UL;
        char *l_1040 = &g_329;
        l_989 = 0x52A7C172L;
        for (g_569 = (-18); (g_569 < 6); ++g_569)
        {
            unsigned l_993 = 1UL;
            int *l_996 = (void*)0;
            int l_997 = 0x14085F8CL;
            int *l_998 = (void*)0;
            int *l_999 = (void*)0;
            int *l_1000 = &l_691;
            int *l_1001 = &l_680;
            int *l_1002 = (void*)0;
            int *l_1003 = &l_768;
            int *l_1004 = &l_691;
            int *l_1005 = &l_997;
            int *l_1006 = &g_752;
            int l_1007 = 0x495EC229L;
            int *l_1008 = (void*)0;
            int *l_1009 = (void*)0;
            int *l_1010 = &l_691;
            int *l_1011 = &l_768;
            int *l_1012 = &l_992;
            int *l_1013 = &l_992;
            int l_1014 = 0x233D5AC1L;
            int *l_1015 = &l_768;
            int *l_1016 = &l_1014;
            int *l_1017 = &g_39;
            int *l_1018 = &l_750;
            int *l_1019 = (void*)0;
            int *l_1020 = &l_691;
            int *l_1021 = (void*)0;
            int *l_1022 = &g_39;
            int *l_1023 = &l_1014;
            int *l_1024 = &g_39;
            int *l_1025 = &l_768;
            int l_1026 = 1L;
            int *l_1027 = &g_752;
            int *l_1028 = &l_768;
            int *l_1029 = (void*)0;
            int *l_1030 = &l_992;
            int *l_1031 = (void*)0;
            int *l_1032 = (void*)0;
            (*l_97) &= l_989;
            ++l_993;
            l_1033++;
            return p_27;


        }
        (*l_97) = ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((func_31((((*l_1040) = 0L) || p_27), (*l_97), (safe_rshift_func_int16_t_s_s(((***g_813) == (*g_589)), 0))) != 0x50L), 12)), g_464)) | g_569);
    }
    else
    {
        short l_1043 = 2L;
        int l_1059 = (-10L);
        int l_1076 = 3L;
        int l_1126 = 0x6DA8D548L;
        int l_1130 = (-3L);
        int l_1192 = (-8L);
        int ****l_1243 = &g_632;
        if (l_1043)
        {
            int l_1056 = 0x97F0CCF3L;
            int l_1057 = 4L;
            int l_1082 = 0x2191CCB3L;
            int l_1093 = 1L;
            int l_1103 = (-1L);
            int l_1143 = 0L;
            int l_1158 = (-1L);
            int l_1161 = 0x93B1CDB3L;
            int l_1177 = (-1L);
            int l_1196 = 0x62B32FD3L;
            const unsigned *l_1225 = &g_1226;
            int **l_1245 = (void*)0;
            for (g_165 = 0; (g_165 == 10); g_165++)
            {
                int *****l_1050 = &g_631;
                int **** const **l_1052 = (void*)0;
                int l_1058 = 0xCF8AA51BL;
                int l_1060 = 0x0070319FL;
                int *l_1061 = &l_768;
                int *l_1062 = &g_752;
                int *l_1063 = &l_1057;
                int *l_1064 = (void*)0;
                int *l_1065 = &l_1057;
                int *l_1066 = &g_39;
                int *l_1067 = (void*)0;
                int l_1068 = 0xBFDBF610L;
                int *l_1069 = &l_750;
                int *l_1070 = &l_714;
                int *l_1071 = &l_1060;
                int *l_1072 = &l_714;
                int *l_1073 = &l_1057;
                int *l_1074 = &l_1059;
                int *l_1075 = &l_750;
                int *l_1077 = &l_1060;
                int *l_1078 = &l_680;
                int *l_1079 = &l_680;
                int *l_1080 = &l_714;
                int *l_1081 = &l_667;
                int *l_1083 = &l_1076;
                int *l_1084 = (void*)0;
                int *l_1085 = &l_1082;
                int *l_1086 = &l_1082;
                int *l_1087 = &g_39;
                int *l_1088 = &l_1082;
                int *l_1089 = &l_714;
                int *l_1090 = (void*)0;
                int *l_1091 = (void*)0;
                int *l_1092 = &l_768;
                int *l_1094 = &l_667;
                int *l_1095 = (void*)0;
                int *l_1096 = &l_1058;
                int *l_1097 = &l_750;
                int *l_1098 = &l_1093;
                int *l_1099 = &l_714;
                int *l_1100 = &l_680;
                int *l_1101 = &l_1057;
                int *l_1102 = &l_1058;
                int *l_1104 = &l_1093;
                int *l_1105 = (void*)0;
                int *l_1106 = &l_691;
                int *l_1107 = &l_1082;
                int *l_1108 = &l_1093;
                int *l_1109 = &l_1082;
                int *l_1110 = &g_39;
                short l_1111 = 0xDF26L;
                int *l_1112 = &l_1057;
                int *l_1113 = &l_1082;
                int *l_1114 = &l_1103;
                int *l_1115 = &l_1058;
                int *l_1116 = (void*)0;
                int *l_1117 = &l_691;
                int *l_1118 = &l_1076;
                int *l_1119 = &l_1057;
                int *l_1120 = &l_768;
                int *l_1121 = (void*)0;
                int *l_1122 = &l_691;
                int *l_1123 = &g_752;
                int *l_1124 = &g_39;
                int *l_1125 = &l_1059;
                int *l_1127 = (void*)0;
                int *l_1128 = &l_1058;
                int *l_1129 = &l_1059;
                int *l_1131 = &g_752;
                int *l_1132 = (void*)0;
                int l_1133 = 5L;
                int *l_1134 = &l_691;
                int *l_1135 = (void*)0;
                int *l_1136 = &l_750;
                int *l_1137 = &l_1059;
                int *l_1138 = &g_752;
                int *l_1139 = (void*)0;
                int *l_1140 = &l_750;
                int *l_1141 = (void*)0;
                int *l_1142 = &l_750;
                int *l_1144 = &g_39;
                int *l_1145 = &l_1130;
                int *l_1147 = &l_1060;
                int *l_1148 = &l_1133;
                int l_1149 = 0x5D45A675L;
                int *l_1150 = (void*)0;
                int *l_1151 = &l_691;
                int *l_1152 = &l_1103;
                int *l_1154 = &l_1057;
                int *l_1155 = &l_667;
                int *l_1156 = &l_1068;
                int *l_1157 = (void*)0;
                int *l_1159 = &l_667;
                int *l_1160 = &l_1058;
                int *l_1162 = (void*)0;
                int *l_1163 = (void*)0;
                int *l_1164 = &l_1143;
                int *l_1165 = &l_1161;
                int *l_1166 = (void*)0;
                int *l_1167 = &l_1082;
                int *l_1168 = &l_1130;
                int *l_1169 = &l_1153;
                int *l_1170 = &l_1103;
                int *l_1171 = &l_1149;
                int *l_1172 = &l_691;
                int *l_1173 = &l_1146;
                int *l_1174 = &l_1057;
                int *l_1175 = &l_1143;
                int *l_1176 = &l_1158;
                int *l_1178 = &l_1143;
                int *l_1179 = (void*)0;
                int *l_1180 = &l_1177;
                int *l_1182 = &l_1068;
                int *l_1183 = &l_1161;
                int *l_1184 = &l_714;
                int *l_1185 = &l_1133;
                int *l_1186 = &l_667;
                int *l_1187 = &l_1059;
                int *l_1188 = &l_1126;
                int *l_1189 = &l_1153;
                int *l_1190 = (void*)0;
                int *l_1191 = &l_1103;
                int *l_1193 = (void*)0;
                int l_1194 = 0x37A3F2DCL;
                int *l_1195 = &l_1177;
                int *l_1197 = &l_680;
                int *l_1198 = &l_1060;
                int l_1199 = 1L;
                unsigned ***l_1204 = &l_1203;
                if ((safe_mul_func_int16_t_s_s((((*l_579) = 6UL) ^ ((func_31(p_25, p_28, l_1043) < (safe_sub_func_uint16_t_u_u(p_28, ((**l_812) |= 0x4916L)))) & (l_1050 != (g_1053 = l_1051)))), p_25)))
                {
                    (*l_97) = l_1056;
                }
                else
                {
                    return p_28;


                }

                ;
                g_1200--;
                (*l_1125) ^= (*l_97);
                (*l_1174) |= (((*l_1204) = l_1203) == l_1205);
            }

            ;
            for (g_429 = (-3); (g_429 <= 21); g_429++)
            {
                int l_1209 = 0x4861A6FDL;
                const unsigned *l_1223 = &g_165;
                unsigned char **l_1234 = &l_579;
                int l_1242 = 4L;
            }
            (*l_97) |= l_1247;
            (*l_97) = (&g_920 != (void*)0);
        }
        else
        {
            int l_1252 = 4L;
            int l_1261 = 0x0EFC1274L;
            l_1261 = (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(l_1252, (+(p_26 & (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((+(safe_rshift_func_uint16_t_u_s((0xF247D820L && (func_95(p_26) >= p_27)), (safe_lshift_func_uint16_t_u_u(l_1252, (**g_922)))))) > (l_1252 > 4294967288UL)), p_26)), 0x26L)))))), p_28));
        }

        ;
        (*l_97) = (-5L);
    }

    ;
    return g_1262;


}







static char func_31(unsigned char p_32, unsigned p_33, int p_34)
{
    short l_36 = 0x0477L;
    int *l_37 = (void*)0;
    int *l_38 = &g_39;
    int *l_40 = &g_39;
    int l_41 = 0xD258D033L;
    int *l_42 = &l_41;
    int *l_43 = &l_41;
    int l_44 = 7L;
    int *l_45 = &l_44;
    int *l_46 = &l_44;
    int *l_47 = &g_39;
    int *l_48 = &l_44;
    int *l_49 = &g_39;
    int *l_50 = &g_39;
    int *l_51 = &g_39;
    int *l_52 = (void*)0;
    int *l_53 = &l_41;
    int *l_54 = &l_44;
    int *l_55 = &l_44;
    int *l_56 = (void*)0;
    int *l_57 = &g_39;
    int *l_58 = &g_39;
    int *l_59 = &l_41;
    int *l_60 = (void*)0;
    int l_61 = 0x4B79A97AL;
    int *l_62 = &l_44;
    int *l_63 = (void*)0;
    int *l_64 = &l_44;
    int *l_65 = &g_39;
    int l_66 = 0x0F6DAE1DL;
    int *l_67 = &l_61;
    int *l_68 = &l_61;
    int *l_69 = (void*)0;
    int *l_70 = &l_41;
    int *l_71 = &g_39;
    int *l_72 = (void*)0;
    int l_73 = 1L;
    int *l_74 = &l_44;
    int *l_75 = &l_66;
    int *l_80 = &l_66;
    int *l_81 = &g_39;
    int *l_82 = &g_39;
    int *l_83 = &l_41;
    int *l_84 = &l_61;
    int *l_85 = &l_44;
    int *l_86 = &l_44;
    int *l_87 = &g_39;
    int *l_88 = (void*)0;
    int *l_89 = &l_41;
    int *l_90 = &g_39;
    int *l_91 = &g_39;
    g_76--;
    ++g_92;
    return (*l_51);
}







static short func_95(int p_96)
{
    unsigned l_476 = 0xB1BB3E45L;
    unsigned short *l_489 = &g_331;
    short *l_490 = &g_116;
    int *l_491 = &g_39;
    int l_501 = (-1L);
    int l_546 = (-8L);
    unsigned short ***l_559 = (void*)0;
    char *l_560 = &g_329;
    unsigned l_561 = 0x079CEF78L;
    unsigned l_562 = 0xC98CFF19L;
    (*l_491) = (safe_div_func_int8_t_s_s(((func_31(p_96, l_476, (safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_476, (safe_mul_func_uint16_t_u_u(p_96, (safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((*l_490) ^= (l_476 & (g_39 < (l_489 == l_489)))) > p_96), l_476)), 1L)))))), g_2)) && l_476) <= g_79), p_96))) <= l_476) && p_96), p_96));
    for (l_476 = 0; (l_476 >= 10); ++l_476)
    {
        const char l_498 = 0xCEL;
        int l_519 = 0x218DD0C9L;
        unsigned *l_520 = &g_165;
        unsigned *l_525 = &g_278;
        int *l_533 = &l_501;
        unsigned char *l_544 = &g_545;
        for (g_165 = 0; (g_165 == 55); g_165++)
        {
            (*g_497) = g_496;
            return p_96;
        }
        if (l_498)
        {
            char *l_502 = (void*)0;
            int l_503 = 0x9F18D474L;
            int **l_506 = &l_491;
            int *l_515 = &l_501;
            (*l_506) = &l_503;

            ;
            (*l_515) ^= func_31((safe_unary_minus_func_int32_t_s((safe_div_func_uint16_t_u_u((**l_506), (((0x0BCAL >= p_96) == (safe_lshift_func_uint16_t_u_u(p_96, l_498))) ^ (safe_mul_func_int8_t_s_s(((**l_506) != (p_96 && (safe_unary_minus_func_uint8_t_u(g_239)))), g_429))))))), g_2, l_498);
            if (p_96)
                break;

        }
        else
        {
            int *l_516 = &l_501;
            l_516 = &l_501;
            if (p_96)
                continue;
        }
        (*l_533) = (safe_sub_func_int32_t_s_s(func_31(((func_31(p_96, ((*l_520)++), (+((+l_519) & ((*l_525) = (safe_mod_func_uint8_t_u_u(p_96, g_183)))))) == (!(p_96 && ((safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((p_96 == (safe_lshift_func_uint16_t_u_s((((*l_490) = (p_96 == ((safe_add_func_uint8_t_u_u(0xBFL, l_519)) ^ g_35))) ^ l_498), 14))))) || p_96), p_96)) & p_96)))) < l_498), l_498, g_35), 0x3313194CL));
        (*l_533) = func_31((safe_add_func_int16_t_s_s((((((*l_533) && 1UL) && (((*l_489) &= 0x50E8L) > (((*l_525)++) ^ func_31(((*l_544) = func_31((p_96 ^ ((safe_mul_func_uint8_t_u_u(g_173, ((*l_533) || (safe_mul_func_uint8_t_u_u(g_116, g_464))))) ^ (*l_533))), p_96, g_116)), p_96, p_96)))) ^ g_116) && l_476), l_546)), p_96, p_96);
    }


    l_501 = (((p_96 ^ ((safe_rshift_func_uint8_t_u_s(p_96, g_79)) != g_429)) && (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(1UL, p_96)) && (func_31((safe_sub_func_uint16_t_u_u(p_96, (safe_rshift_func_int8_t_s_u(((*l_560) ^= func_31((p_96 > ((l_559 != (void*)0) ^ l_546)), p_96, p_96)), 6)))), l_561, p_96) | 255UL)), 11)), l_562))) ^ p_96);
    return p_96;
}







static int * func_98(int * const p_99)
{
    unsigned short l_468 = 0xEDE1L;
    int l_469 = 0xED7519BBL;
    int *l_471 = (void*)0;
    int **l_470 = &l_471;
    (*p_99) &= l_468;
    l_469 = 4L;
    (*l_470) = &l_469;

    ;
    return &g_39;


}







static int * func_100(int p_101, unsigned p_102)
{
    char l_113 = 0xF4L;
    int *l_114 = &g_39;
    short *l_115 = &g_116;
    int **l_168 = &l_114;
    unsigned short *l_360 = &g_331;
    int ***l_364 = &g_363;
    char *l_365 = &l_113;
    int l_390 = 0x4888C0F7L;
    int l_403 = 0x66B9EE8EL;
    int l_405 = 0L;
    int l_421 = 5L;
    int *l_467 = &l_390;
    (*l_168) = func_103(((*l_168) = func_107(l_113, g_92, l_114, (1L < (*l_114)), ((*l_115) &= p_101))), p_102, g_39);



    if (((safe_lshift_func_int8_t_s_s(((*l_365) &= (((*l_360) = p_102) & (safe_mod_func_int8_t_s_s((**l_168), (0xAD67FFFDL && func_31(((&g_275 != ((*l_364) = g_363)) != 0x9BL), p_102, g_239)))))), 2)) || g_39))
    {
        int l_372 = 0xFF569DE8L;
        int *l_373 = &g_39;
        const int **l_376 = &g_275;
        const int ***l_375 = &l_376;
        const int ****l_374 = &l_375;
        unsigned char l_381 = 251UL;
        int l_384 = (-10L);
        l_384 |= (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_35, ((l_372 != ((void*)0 != l_373)) >= (((*l_374) = (void*)0) == &l_168)))), (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_381, 12)), func_31(p_102, (~(safe_add_func_uint8_t_u_u(255UL, g_76))), g_165)))));

        ;
    }
    else
    {
        const int *l_385 = &g_39;
        int l_387 = 0xE68C3BF2L;
        int l_388 = 0x4DF6C7F8L;
        int *l_389 = &l_387;
        int l_391 = 0xB84BFDF1L;
        int *l_392 = (void*)0;
        int *l_393 = (void*)0;
        int *l_394 = &l_387;
        int *l_395 = (void*)0;
        int l_396 = (-1L);
        int *l_397 = &l_388;
        int *l_398 = &l_390;
        int *l_399 = &l_388;
        int *l_400 = &l_390;
        int l_401 = (-3L);
        int *l_402 = &l_387;
        int *l_404 = &l_388;
        int *l_406 = &l_405;
        int *l_407 = &l_391;
        int *l_408 = &l_388;
        int *l_409 = &l_391;
        int *l_410 = (void*)0;
        int *l_411 = &l_387;
        int *l_412 = &l_401;
        int l_413 = 0x46E93449L;
        int l_414 = 0x7A056DCAL;
        int *l_415 = &g_39;
        int *l_416 = (void*)0;
        int l_417 = (-1L);
        int *l_418 = &l_414;
        int *l_419 = &l_396;
        int *l_420 = (void*)0;
        int *l_422 = &l_387;
        int *l_423 = &l_421;
        int *l_424 = &l_390;
        int *l_425 = &l_387;
        int *l_426 = (void*)0;
        int *l_427 = &l_414;
        int *l_428 = &l_405;
        char l_455 = 0L;
        (*g_386) = l_385;

        ;
        --g_429;
        for (l_417 = 21; (l_417 <= (-24)); l_417 = safe_sub_func_uint16_t_u_u(l_417, 7))
        {
            int *l_437 = &l_390;
            int *l_438 = &l_405;
            int *l_439 = (void*)0;
            int *l_440 = &l_405;
            int *l_441 = &l_403;
            int *l_442 = &l_387;
            int *l_443 = &l_413;
            int *l_444 = &l_414;
            int *l_445 = &l_388;
            int *l_446 = &l_413;
            int *l_447 = &l_388;
            int *l_448 = (void*)0;
            int *l_449 = &l_388;
            int *l_450 = &l_405;
            int *l_451 = &l_396;
            for (l_388 = (-7); (l_388 == 12); l_388++)
            {
                int *l_436 = &l_391;
                return &g_39;


            }
            ++g_452;
            if (l_455)
                break;
            if (p_101)
            {
                int *l_458 = &g_39;
                if ((*l_412))
                    break;
                for (l_414 = 5; (l_414 >= (-20)); l_414 = safe_sub_func_int8_t_s_s(l_414, 5))
                {
                    int *l_463 = &l_387;
                    (*g_386) = ((*l_168) = l_458);
                    for (l_387 = 0; (l_387 < 1); ++l_387)
                    {
                        short l_461 = 1L;
                        const int **l_462 = &g_275;
                        (*l_168) = &l_401;

                        ;
                        l_461 |= (p_101 < ((+0xFA91L) < g_2));
                        (*l_462) = (*g_386);
                        return &g_39;


                    }
                }
            }
            else
            {
                return &g_39;


            }
        }
        --g_464;
    }


    (*l_467) |= (*l_114);
    (*l_467) = ((*l_114) = p_101);
    return &g_39;


}







static int * func_103(int * p_104, unsigned short p_105, const int p_106)
{
    unsigned char l_169 = 255UL;
    int l_172 = 0x63D90BC2L;
    char l_191 = 0xCCL;
    short l_264 = 0L;
    unsigned l_311 = 0x20F02422L;
    unsigned l_328 = 4294967290UL;
    int l_343 = 1L;
    unsigned short * const l_354 = &g_266;
    unsigned short * const *l_353 = &l_354;
    --l_169;
    l_172 &= (*p_104);
    if ((*p_104))
    {
        int *l_176 = &g_39;
        int *l_177 = &g_39;
        int *l_178 = &l_172;
        int *l_179 = &l_172;
        int *l_180 = &g_39;
        int l_181 = 0L;
        int *l_182 = &l_181;
        unsigned *l_188 = &g_92;
        int l_257 = 0xD09B3387L;
        ++g_173;
        g_183--;
        (*l_182) &= (l_169 >= (((*l_188) = (*l_179)) < p_106));
        if ((g_39 == func_31((*l_182), (safe_div_func_uint8_t_u_u(l_169, l_191)), (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((~l_172), 5)), ((*l_179) ^ (-1L)))))))
        {
            int *l_242 = &g_39;
            int *l_243 = &l_181;
            int l_245 = 0L;
            int *l_246 = &l_172;
            int *l_247 = &l_172;
            int *l_248 = &l_245;
            int *l_249 = &l_245;
            int *l_250 = &l_245;
            int *l_251 = &l_245;
            int *l_252 = (void*)0;
            int *l_253 = &g_39;
            int *l_254 = &l_181;
            int *l_255 = &g_39;
            int *l_256 = &l_172;
            int *l_258 = &l_172;
            int *l_259 = &l_181;
            int *l_260 = &l_181;
            int *l_261 = (void*)0;
            int *l_262 = &l_172;
            int *l_263 = &g_39;
            int *l_265 = &g_39;
            for (l_169 = 5; (l_169 < 38); l_169++)
            {
                int *l_198 = &l_181;
                int *l_199 = &l_172;
                int *l_200 = (void*)0;
                int *l_201 = (void*)0;
                int *l_202 = &g_39;
                int *l_203 = &l_172;
                int *l_204 = &l_172;
                int *l_205 = &l_181;
                int *l_206 = &l_181;
                int *l_207 = &l_172;
                int *l_208 = &l_181;
                int l_209 = (-7L);
                int *l_210 = (void*)0;
                int *l_211 = &g_39;
                int *l_212 = (void*)0;
                int *l_213 = &l_172;
                int *l_214 = &l_172;
                int *l_215 = &l_209;
                int *l_216 = &l_172;
                int *l_217 = &l_172;
                int *l_218 = &l_181;
                int *l_219 = &g_39;
                int *l_220 = &l_172;
                int *l_221 = &l_181;
                int *l_222 = &l_209;
                int *l_223 = &l_181;
                int *l_224 = &l_209;
                int *l_225 = &l_172;
                int *l_226 = &l_172;
                int *l_227 = &l_181;
                int *l_228 = &l_181;
                int *l_229 = &l_172;
                int *l_230 = &g_39;
                int *l_231 = &l_172;
                int *l_232 = &l_181;
                int *l_233 = &l_181;
                int *l_234 = &l_209;
                int *l_235 = (void*)0;
                int *l_236 = &l_181;
                int *l_237 = (void*)0;
                int *l_238 = (void*)0;
                --g_239;
            }
            g_266--;
            for (l_181 = 0; (l_181 < 29); l_181 = safe_add_func_uint16_t_u_u(l_181, 9))
            {
                for (g_266 = 16; (g_266 == 18); ++g_266)
                {
                    (*g_274) = &p_106;

                    ;
                }
            }

            ;
            for (l_191 = (-8); (l_191 >= (-14)); l_191 = safe_sub_func_uint32_t_u_u(l_191, 6))
            {
                (*p_104) = ((*l_249) = (*p_104));
                g_278--;
            }
        }
        else
        {
            unsigned char l_299 = 0x69L;
            if ((*p_104))
            {
                int *l_281 = &g_39;
                int *l_282 = &l_257;
                int *l_283 = &l_181;
                int *l_284 = &g_39;
                int l_285 = (-1L);
                int *l_286 = &g_39;
                int *l_287 = (void*)0;
                int *l_288 = &l_172;
                int *l_289 = &l_257;
                int *l_290 = &l_257;
                int *l_291 = (void*)0;
                int *l_292 = &l_172;
                int *l_293 = (void*)0;
                int *l_294 = (void*)0;
                int *l_295 = &g_39;
                int *l_296 = &l_181;
                int *l_297 = &l_181;
                int *l_298 = &l_172;
                l_299++;
                for (l_285 = (-10); (l_285 >= 29); l_285 = safe_add_func_uint16_t_u_u(l_285, 4))
                {
                    (*l_281) |= (0x8EL == g_35);
                }
            }
            else
            {
                const int **l_304 = &g_275;
                (*l_304) = (*g_274);
            }
        }

        ;
    }
    else
    {
        int l_307 = (-1L);
        int *l_309 = &g_39;
        int **l_308 = &l_309;
        int l_310 = (-1L);
        short *l_320 = (void*)0;
        const int **l_357 = &g_275;
        (**l_308) ^= (safe_add_func_uint32_t_u_u(l_307, (l_308 != &l_309)));
        if ((*p_104))
        {
            unsigned short *l_323 = &g_266;
            unsigned short *l_330 = &g_331;
            short *l_332 = &l_264;
            int *l_333 = &g_39;
            --l_311;
            p_104 = func_107((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((l_320 == &g_116), 1UL)) == (p_105 <= (65530UL && ((*l_323) = (safe_lshift_func_int8_t_s_s(g_76, 3)))))), (((-1L) ^ ((*l_332) &= (((*l_330) |= (g_329 = (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((*p_104), 0x7E691350L)), l_328)))) >= 0x2FE7L))) && 0x2DL))), g_35)), (**l_308), l_333, g_165, (*l_333));
        }
        else
        {
            for (g_329 = 9; (g_329 == 5); g_329 = safe_sub_func_int16_t_s_s(g_329, 1))
            {
                unsigned *l_340 = &g_278;
                int l_348 = (-2L);
                unsigned short *l_351 = &g_331;
                (*p_104) ^= (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((*l_340)--), l_343)), p_106));
                (*l_309) = (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(8UL, g_329)), func_31(l_348, func_31(g_79, (*l_309), g_165), (safe_lshift_func_uint16_t_u_u(((*l_351) |= (p_105 ^= l_328)), 4)))));
                (*g_352) = &p_106;

                ;
                (*g_355) = l_353;

                ;
            }

            ;
            ;
            g_244 ^= (*l_309);
        }

        ;
        ;
        (*l_357) = &p_106;

        ;
    }

    ;
    ;
    return &g_39;




}







static int * func_107(unsigned p_108, unsigned short p_109, int * p_110, unsigned p_111, short p_112)
{
    int *l_117 = (void*)0;
    int *l_118 = &g_39;
    int *l_119 = &g_39;
    int *l_120 = &g_39;
    int l_121 = (-1L);
    int l_122 = 0L;
    int *l_123 = &l_122;
    int *l_124 = &l_122;
    int *l_125 = &g_39;
    int *l_126 = (void*)0;
    int *l_127 = &l_121;
    int *l_128 = &l_121;
    int *l_129 = &l_122;
    int *l_130 = &l_121;
    int *l_131 = &l_122;
    int l_132 = (-6L);
    int *l_133 = &l_122;
    int *l_134 = (void*)0;
    int *l_135 = &l_121;
    int *l_136 = &l_122;
    int *l_137 = &l_132;
    int *l_138 = &l_122;
    int l_139 = 0L;
    int *l_140 = (void*)0;
    int l_141 = 0x84746BA8L;
    int *l_142 = &l_121;
    int *l_143 = &l_121;
    int *l_144 = (void*)0;
    int *l_145 = &l_121;
    int *l_146 = &l_122;
    int *l_147 = &l_122;
    int *l_148 = &l_141;
    int l_149 = 0xD4114ABDL;
    int *l_150 = &l_149;
    int *l_151 = &l_149;
    int *l_152 = &l_139;
    int *l_153 = (void*)0;
    int *l_154 = &l_141;
    int *l_155 = &l_122;
    int *l_156 = &l_122;
    int *l_157 = &l_132;
    int *l_158 = &l_122;
    int *l_159 = &l_149;
    int l_160 = (-6L);
    int *l_161 = (void*)0;
    int *l_162 = (void*)0;
    int *l_163 = &l_149;
    int *l_164 = &l_122;
    g_165++;
    return &g_39;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_545, "g_545", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_752, "g_752", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1181, "g_1181", print_hash_value);
    transparent_crc(g_1200, "g_1200", print_hash_value);
    transparent_crc(g_1226, "g_1226", print_hash_value);
    transparent_crc(g_1262, "g_1262", print_hash_value);
    transparent_crc(g_1302, "g_1302", print_hash_value);
    transparent_crc(g_1398, "g_1398", print_hash_value);
    transparent_crc(g_1413, "g_1413", print_hash_value);
    transparent_crc(g_1486, "g_1486", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
