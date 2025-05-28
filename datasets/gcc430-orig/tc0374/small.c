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



static volatile unsigned g_11 = 0x8BEA1220L;
static unsigned g_12 = 0UL;
static int g_14 = 0x98F01BA0L;
static unsigned char g_72 = 0x29L;
static int **g_84 = (void*)0;
static unsigned short g_178 = 0x7FB9L;
static int *g_202 = (void*)0;
static unsigned g_272 = 1UL;
static int g_295 = 1L;
static unsigned g_330 = 0x02DEFC65L;
static int g_367 = (-1L);
static char g_381 = (-1L);
static short g_406 = 0x9CE9L;
static unsigned g_407 = 0x33E8E438L;
static unsigned char g_475 = 0x85L;
static int g_536 = 0L;
static short g_540 = 0xB619L;
static unsigned short g_544 = 65535UL;
static char g_601 = 0xD5L;
static unsigned g_604 = 0xD22055AEL;
static int g_614 = (-10L);
static unsigned g_639 = 0x968FA506L;
static char g_703 = 4L;
static unsigned g_713 = 0xD9204991L;
static unsigned short g_726 = 0x9591L;
static char g_738 = 0x7FL;
static short g_741 = (-5L);
static unsigned g_742 = 4294967291UL;
static unsigned short g_770 = 0xF1ABL;
static int * volatile g_819 = (void*)0;
static int * volatile g_820 = (void*)0;
static const int *g_824 = &g_536;
static const int ** volatile g_823 = &g_824;
static unsigned g_835 = 4UL;
static short g_915 = 0xC92BL;
static int g_917 = (-6L);
static unsigned g_920 = 4294967288UL;
static volatile char g_1018 = 0L;
static volatile unsigned g_1033 = 0x186D15CBL;
static int ** volatile g_1104 = &g_202;
static volatile unsigned g_1237 = 4294967295UL;
static int *** volatile g_1251 = (void*)0;
static const int ** volatile g_1258 = &g_824;
static volatile unsigned short g_1275 = 0UL;
static unsigned short g_1301 = 0xAF05L;
static char g_1349 = 0x19L;
static volatile unsigned char g_1380 = 1UL;
static volatile int g_1416 = 3L;
static short g_1421 = 4L;
static unsigned g_1439 = 0xCCD0722BL;
static int * const volatile * const volatile g_1459 = (void*)0;
static volatile unsigned short g_1514 = 0x7F92L;



static const int func_1(void);
static int * const func_2(int * const p_3, short p_4, unsigned p_5);
static int * const func_6(int * p_7, int p_8);
static unsigned func_15(char p_16, int p_17);
static unsigned char func_24(unsigned p_25);
static int ** func_75(unsigned char p_76, int p_77, int p_78);
static int func_81(int ** p_82, int ** p_83);
static int ** func_85(int * p_86, short p_87);
static unsigned char func_90(unsigned char p_91, unsigned char p_92, int * p_93);
static char func_94(int * p_95, int p_96, int * const * p_97, char p_98, int * p_99);
static const int func_1(void)
{
    int *l_13 = &g_14;
    int *l_773 = &g_536;
    int *l_774 = &g_14;
    unsigned l_958 = 0xF5EEDC58L;
    int **l_1260 = &g_202;
    unsigned char l_1276 = 0UL;
    int l_1299 = 0xC45199AAL;
    char l_1300 = 0xE2L;
    int l_1322 = 0xA159A851L;
    unsigned short l_1449 = 65527UL;
    char l_1485 = 0x1EL;
    (*l_1260) = func_2(func_6(((safe_sub_func_uint32_t_u_u(g_11, ((((((g_12 & ((void*)0 == l_13)) , func_15(((~(g_12 == 0x4952F341L)) , g_14), (safe_sub_func_int32_t_s_s(7L, g_14)))) , (void*)0) != (void*)0) , l_773) != l_774))) , (void*)0), g_738), l_958, g_14);
    if ((0xB901L != ((safe_sub_func_int32_t_s_s(((**l_1260) , (((safe_rshift_func_int8_t_s_s(((0x7E345903L ^ (safe_mod_func_int32_t_s_s(((((safe_sub_func_int8_t_s_s(g_536, g_917)) && g_741) , ((7UL == (safe_div_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u((~((((func_81(&l_774, &g_202) == 0x9FL) , 1UL) , g_917) && (*l_774))), (*l_13))) <= (*l_774)) && 0UL), (*l_13))) != 0x5DL), (**l_1260)))) ^ 0L)) ^ (**l_1260)), g_1275))) | 1L), (**l_1260))) <= l_1276) ^ (*g_202))), (**g_84))) > 0x8D050498L)))
    {
        int **l_1279 = &l_13;
        unsigned l_1280 = 0xB7345902L;
        unsigned char l_1283 = 255UL;
        char l_1297 = 1L;
        int l_1384 = 0xDA38F3A6L;
        int l_1392 = 0xAFFEA12CL;
        for (g_726 = 11; (g_726 <= 60); g_726 = safe_add_func_uint8_t_u_u(g_726, 9))
        {
            unsigned l_1281 = 4294967295UL;
            unsigned short l_1284 = 1UL;
            int l_1288 = 0L;
            if (func_81(l_1279, &g_202))
            {
                if (l_1280)
                    break;
            }
            else
            {
                int l_1282 = 0xD9C6C5E1L;
                if (l_1281)
                {
                    (**l_1279) = ((g_330 > l_1282) & ((((**l_1260) , l_1283) == (-1L)) , (l_1284 <= ((*l_13) | 254UL))));
                    for (g_406 = (-29); (g_406 >= (-7)); ++g_406)
                    {
                        short l_1287 = (-4L);
                        (*l_774) |= l_1287;
                        l_1288 = (**g_84);
                        if ((**g_1104))
                            continue;
                        if ((**g_1104))
                            continue;
                    }
                }
                else
                {
                    short l_1298 = 0x2B85L;
                    for (g_639 = 0; (g_639 >= 7); ++g_639)
                    {
                        (*l_13) = l_1282;
                        (*l_1260) = (*g_84);
                        (*g_84) = (*g_1104);
                    }
                    if (((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((((0x8FA8L & (((((void*)0 == &g_820) & ((**l_1279) , g_540)) , &g_823) == &g_823)) & (-8L)) ^ l_1298) <= (**g_84)), g_770)), l_1282)) != l_1299))
                    {
                        (*l_1279) = (*l_1260);
                        return l_1282;
                    }
                    else
                    {
                        return (**g_1104);
                    }
                }
                (**l_1260) = l_1282;
            }
        }
        for (g_475 = (-8); (g_475 > 40); g_475++)
        {
            const short l_1321 = (-7L);
            int * const *l_1327 = &l_774;
            int *l_1330 = &g_536;
            short l_1336 = 0xE3EAL;
            int l_1359 = 0xEC559A8BL;
            int *l_1442 = &l_1359;
            int *l_1443 = &l_1359;
            int *l_1444 = &g_614;
            int *l_1445 = &l_1359;
            int *l_1446 = &g_614;
            int *l_1447 = &g_536;
            int *l_1448 = &l_1384;
        }
    }
    else
    {
        int ***l_1452 = &g_84;
        (***l_1452) = (((g_540 != ((void*)0 != &l_13)) >= ((g_1439 >= g_1275) , (*l_773))) , ((((g_178 , (void*)0) != l_1452) , (-4L)) || 0UL));
    }
    for (g_741 = 0; (g_741 < (-4)); g_741--)
    {
        short l_1462 = 0L;
        int **l_1463 = &l_773;
        (*l_1463) = (*l_1463);
        if ((*l_773))
            break;
        (*l_1463) = ((*g_202) , ((((safe_rshift_func_int8_t_s_u(((**l_1463) , (**l_1463)), (**l_1463))) || (**l_1260)) == 0x929B6618L) , (*l_1463)));
    }
    for (g_703 = (-28); (g_703 >= (-27)); g_703++)
    {
        int *l_1468 = &l_1299;
        int *l_1469 = &g_614;
        int *l_1470 = &g_614;
        int *l_1471 = (void*)0;
        int *l_1472 = &g_536;
        int *l_1473 = &g_14;
        int *l_1474 = &l_1299;
        int l_1475 = 0x15F07962L;
        int *l_1476 = &l_1475;
        int *l_1477 = &g_536;
        int *l_1478 = &g_14;
        int *l_1479 = &g_614;
        int *l_1480 = &g_536;
        int *l_1481 = &l_1299;
        int *l_1482 = &l_1475;
        int *l_1483 = &g_14;
        int *l_1484 = &g_14;
        int *l_1486 = &g_536;
        int *l_1487 = &l_1475;
        int *l_1488 = (void*)0;
        int *l_1489 = (void*)0;
        int *l_1490 = &g_14;
        int *l_1491 = &g_536;
        int *l_1492 = &g_536;
        int *l_1493 = &g_536;
        int *l_1494 = &l_1322;
        int *l_1495 = &l_1475;
        int *l_1496 = &l_1299;
        int *l_1497 = (void*)0;
        int *l_1498 = &g_14;
        int *l_1499 = &g_536;
        int *l_1500 = &g_614;
        int *l_1501 = &g_614;
        short l_1502 = 0L;
        int *l_1503 = &g_14;
        char l_1504 = 0xB2L;
        int *l_1505 = &l_1475;
        int *l_1506 = &g_614;
        int *l_1507 = &l_1299;
        int *l_1508 = (void*)0;
        int *l_1509 = &l_1299;
        int l_1510 = 8L;
        int *l_1511 = &l_1510;
        int *l_1512 = (void*)0;
        int *l_1513 = &g_14;
        (*g_1104) = (*g_84);
        ++g_1514;
        (*l_1501) = (!((safe_lshift_func_int8_t_s_s(1L, 7)) | (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((g_1349 <= (*l_773)), 1)) || (*l_773)), g_72)), 6)), (-7L))) | (-4L)) , g_741)));
        (*l_1499) |= (*l_13);
    }
    return (*g_202);
}







static int * const func_2(int * const p_3, short p_4, unsigned p_5)
{
    int *l_959 = &g_14;
    int l_960 = 0xC9B86D0DL;
    int *l_961 = &g_14;
    int *l_962 = &l_960;
    int *l_963 = &g_14;
    int *l_964 = &g_536;
    int *l_965 = &g_536;
    int *l_966 = &g_14;
    int *l_967 = &l_960;
    int *l_968 = (void*)0;
    int *l_969 = &g_14;
    int *l_970 = &g_14;
    int *l_971 = &g_614;
    int l_972 = 0L;
    int l_973 = 1L;
    int *l_974 = &l_972;
    int *l_975 = &l_973;
    int *l_976 = &l_960;
    int *l_977 = &l_960;
    int *l_978 = (void*)0;
    int *l_979 = (void*)0;
    int *l_980 = (void*)0;
    int *l_981 = &g_614;
    int l_982 = 0L;
    int *l_983 = &g_14;
    int *l_984 = &l_973;
    int l_985 = 0x5A4168FAL;
    int *l_986 = &g_614;
    int *l_987 = &g_536;
    int *l_988 = &l_960;
    int *l_989 = &g_614;
    int *l_990 = (void*)0;
    int *l_991 = &l_960;
    int *l_992 = &g_614;
    int *l_993 = (void*)0;
    int *l_994 = &g_614;
    int *l_995 = &l_960;
    int *l_996 = (void*)0;
    int *l_997 = &g_614;
    int *l_998 = &g_14;
    int *l_999 = &g_536;
    int *l_1000 = &g_14;
    int l_1001 = 0x213FFA74L;
    int *l_1002 = (void*)0;
    int *l_1003 = &g_614;
    int l_1004 = 0x67AE3591L;
    int *l_1005 = &l_982;
    int *l_1006 = &l_972;
    int *l_1007 = &l_960;
    int *l_1008 = (void*)0;
    int *l_1009 = (void*)0;
    int *l_1010 = &l_960;
    int *l_1011 = &g_536;
    int *l_1012 = &l_973;
    int *l_1013 = &l_1004;
    int *l_1014 = &g_14;
    int *l_1015 = &l_960;
    int *l_1016 = &g_614;
    short l_1017 = 0x1369L;
    int *l_1019 = &l_1004;
    int *l_1020 = (void*)0;
    int *l_1021 = (void*)0;
    int l_1022 = (-1L);
    int l_1023 = 9L;
    int *l_1024 = &l_973;
    int *l_1025 = &g_614;
    int *l_1026 = &l_972;
    short l_1027 = 0xAEFDL;
    int l_1028 = 0L;
    int *l_1029 = &l_982;
    int *l_1030 = &g_14;
    int *l_1031 = &l_1028;
    int *l_1032 = &l_960;
    const int l_1109 = (-1L);
    int *l_1122 = &l_1022;
    g_1033--;
    if ((*l_1003))
    {
        short l_1036 = 6L;
        int l_1037 = 0x51879517L;
        int l_1038 = 0L;
        int l_1039 = (-3L);
        int l_1040 = 0x2C5AF18DL;
        int *l_1041 = &g_614;
        int *l_1042 = &l_972;
        int *l_1043 = &l_960;
        int *l_1044 = &l_1039;
        int *l_1045 = &l_1004;
        int *l_1046 = &l_1038;
        int *l_1047 = &g_536;
        int *l_1048 = (void*)0;
        int *l_1049 = &l_972;
        int *l_1050 = &l_972;
        int *l_1051 = &l_1038;
        int *l_1052 = &l_1039;
        int *l_1053 = &l_1038;
        int *l_1054 = &l_985;
        int *l_1055 = &l_1038;
        int *l_1056 = &l_972;
        int l_1057 = 0x0575F561L;
        int *l_1058 = (void*)0;
        int *l_1059 = (void*)0;
        int *l_1060 = &l_1040;
        int *l_1061 = &l_1039;
        int *l_1062 = &l_982;
        int *l_1063 = &l_972;
        int *l_1064 = &l_1022;
        int *l_1065 = &l_972;
        int l_1066 = 0L;
        int *l_1067 = &l_960;
        int *l_1068 = &l_1037;
        int *l_1069 = &l_972;
        int *l_1070 = &l_1028;
        int *l_1071 = &l_1028;
        int *l_1072 = &l_1066;
        int *l_1073 = (void*)0;
        int *l_1074 = &l_1022;
        int l_1075 = 0x4C1FF5E2L;
        int *l_1076 = &l_1004;
        int *l_1077 = &l_1023;
        int l_1078 = 0x6AAE44D1L;
        int *l_1079 = &l_972;
        int *l_1080 = &l_1039;
        int *l_1081 = (void*)0;
        int l_1082 = 0xB76F7B75L;
        int *l_1083 = &l_1066;
        int *l_1084 = &l_1078;
        int *l_1085 = (void*)0;
        int *l_1086 = &l_1004;
        int *l_1087 = (void*)0;
        int *l_1088 = &l_1078;
        int *l_1089 = &l_973;
        int *l_1090 = &l_1082;
        int *l_1091 = &l_960;
        int *l_1092 = &l_1038;
        int *l_1093 = &l_985;
        int *l_1094 = &l_1057;
        int *l_1095 = &l_1004;
        int *l_1096 = &l_1028;
        int *l_1097 = &l_960;
        int *l_1098 = &l_973;
        int *l_1099 = &l_1040;
        int *l_1100 = &l_1004;
        unsigned l_1101 = 4294967288UL;
        l_1101++;
        (*g_1104) = p_3;
    }
    else
    {
        short l_1107 = (-1L);
        int **l_1108 = &l_1013;
        (*l_1012) ^= (*p_3);
        (*l_984) &= (safe_add_func_int16_t_s_s(((0x16D4L >= l_1107) , func_15(p_4, (p_3 == (g_407 , &l_985)))), p_5));
        (*l_984) ^= (func_94(&l_985, ((((l_1109 | (**l_1108)) ^ (p_4 < ((*p_3) & (safe_add_func_uint16_t_u_u(65528UL, p_5))))) == (safe_rshift_func_int8_t_s_u((&p_3 != (void*)0), (*l_966)))) , 0xB6112C0FL), l_1108, g_178, &l_982) > p_4);
    }
    (*p_3) = (safe_unary_minus_func_int32_t_s((*p_3)));
    if ((g_604 >= 0xC6L))
    {
        int **l_1115 = &l_979;
        char l_1132 = 0x4CL;
        int l_1144 = 0x7A8E6A7AL;
        int l_1145 = (-10L);
        int l_1146 = (-1L);
        int l_1147 = 0x0A257D4CL;
        int l_1148 = (-4L);
        int l_1171 = (-2L);
        (*l_1115) = p_3;
        for (g_407 = (-17); (g_407 != 16); g_407++)
        {
            int **l_1118 = &l_986;
            int l_1141 = (-8L);
            int l_1159 = 0xE80AADEDL;
            unsigned short l_1194 = 1UL;
            (*l_1118) = p_3;
            if ((((safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_int32_t_s((func_94(l_1122, (**l_1118), ((p_3 != (*l_1115)) , &p_3), g_726, (*l_1115)) , (*p_3)))) != (**l_1115)), 14)) , p_4) , 0xC4F5BB74L))
            {
                int *l_1131 = &l_1023;
                (*l_1011) ^= (func_94(l_1131, p_4, &g_202, p_5, (*l_1115)) != (**l_1118));
            }
            else
            {
                short l_1139 = 0L;
                int l_1140 = 0xF2927388L;
                int l_1143 = 0L;
                int l_1202 = 0xC6727D1BL;
                int l_1204 = 9L;
                int l_1216 = (-1L);
                short l_1253 = (-5L);
                (*g_84) = (*l_1115);
                (*l_1030) ^= ((void*)0 == p_3);
                for (l_960 = 11; (l_960 > 1); --l_960)
                {
                    short l_1142 = 0x5326L;
                    int *l_1149 = &l_1004;
                    int *l_1150 = &l_1143;
                    int *l_1151 = &g_536;
                    int *l_1152 = &l_1004;
                    int *l_1153 = &l_982;
                    int *l_1154 = &g_14;
                    int *l_1155 = &l_972;
                    int *l_1156 = &l_1141;
                    int *l_1157 = (void*)0;
                    int *l_1158 = &l_1145;
                    int *l_1160 = &l_1001;
                    int *l_1161 = (void*)0;
                    int *l_1162 = &l_1140;
                    int *l_1163 = &l_1141;
                    int *l_1164 = (void*)0;
                    int *l_1165 = &l_1141;
                    int *l_1166 = (void*)0;
                    int *l_1167 = &l_1145;
                    int *l_1168 = &l_1140;
                    int *l_1169 = &l_972;
                    int *l_1170 = &l_1001;
                    int *l_1172 = &l_1141;
                    int *l_1173 = &l_1140;
                    int *l_1174 = &l_972;
                    int *l_1175 = &l_1004;
                    int *l_1176 = &l_1004;
                    int *l_1177 = &l_982;
                    int *l_1178 = &g_614;
                    int *l_1179 = &l_1144;
                    int *l_1180 = &g_14;
                    int *l_1181 = &l_1145;
                    int *l_1182 = &l_1023;
                    int *l_1183 = &l_1147;
                    int *l_1184 = (void*)0;
                    int *l_1185 = &l_1171;
                    int *l_1186 = &g_14;
                    int *l_1187 = &l_1148;
                    int *l_1188 = (void*)0;
                    int *l_1189 = (void*)0;
                    int *l_1190 = &l_1146;
                    int *l_1191 = &l_972;
                    int *l_1192 = &l_1146;
                    int *l_1193 = &l_1141;
                    for (g_713 = (-23); (g_713 <= 50); g_713 = safe_add_func_uint32_t_u_u(g_713, 8))
                    {
                        if ((*p_3))
                            break;
                        (*l_986) ^= (((((p_5 != 1UL) | 0x3C7CL) , g_726) < (g_406 <= (((safe_sub_func_int8_t_s_s((g_475 != g_367), l_1139)) && p_5) , g_475))) <= l_1139);
                        (*p_3) = (**g_1104);
                        (*l_1019) = (g_917 && func_81(l_1115, (p_5 , &g_202)));
                    }
                    l_1194--;
                }
                if ((safe_mod_func_uint8_t_u_u(((*p_3) && ((**l_1115) & 0x15L)), l_1140)))
                {
                    char l_1199 = 0x38L;
                    int l_1200 = 0xB771696DL;
                    int l_1201 = 0L;
                    int *l_1203 = &l_1023;
                    int *l_1205 = &l_972;
                    int *l_1206 = &l_1202;
                    int *l_1207 = &l_1171;
                    int *l_1208 = &l_1028;
                    int *l_1209 = &l_972;
                    int *l_1210 = (void*)0;
                    int *l_1211 = &l_1140;
                    int *l_1212 = (void*)0;
                    int *l_1213 = (void*)0;
                    int *l_1214 = &l_1143;
                    int *l_1215 = &l_1140;
                    int *l_1217 = &l_1144;
                    int *l_1218 = &l_1001;
                    int *l_1219 = &l_1147;
                    int *l_1220 = (void*)0;
                    int *l_1221 = &l_1141;
                    int *l_1222 = &l_1146;
                    int *l_1223 = &l_1216;
                    int *l_1224 = &l_1171;
                    int *l_1225 = &l_1202;
                    int *l_1226 = &g_14;
                    int *l_1227 = &l_1200;
                    int *l_1228 = (void*)0;
                    int *l_1229 = (void*)0;
                    int *l_1230 = (void*)0;
                    int *l_1231 = &l_985;
                    int *l_1232 = &l_1022;
                    int *l_1233 = &l_1148;
                    int *l_1234 = &l_973;
                    int l_1235 = 0L;
                    int *l_1236 = &l_1200;
                    unsigned l_1240 = 0UL;
                    unsigned l_1250 = 0x49793636L;
                    ++g_1237;
                    l_1240--;
                    for (l_1028 = 0; (l_1028 == (-17)); l_1028--)
                    {
                        int **l_1247 = &l_966;
                        int ***l_1252 = &l_1118;
                        (*l_1252) = func_85((p_4 , (*l_1118)), (((safe_sub_func_uint8_t_u_u(g_12, func_81(&g_202, l_1247))) >= ((((safe_sub_func_uint8_t_u_u(func_81(((((*g_84) != (void*)0) , l_1250) , &l_970), &g_202), (**l_1247))) == (*l_1208)) , &p_3) == &l_1222)) > (**g_1104)));
                    }
                    return p_3;
                }
                else
                {
                    (*l_997) &= l_1253;
                }
            }
            for (l_985 = 0; (l_985 < 13); l_985 = safe_add_func_uint8_t_u_u(l_985, 6))
            {
                for (g_367 = 0; (g_367 <= (-10)); g_367 = safe_sub_func_int32_t_s_s(g_367, 3))
                {
                    (*g_1258) = &l_1109;
                }
                return p_3;
            }
        }
    }
    else
    {
        int l_1259 = 0x89FB564EL;
        l_1259 ^= (g_770 , (*l_1015));
    }
    return p_3;
}







static int * const func_6(int * p_7, int p_8)
{
    int ***l_781 = &g_84;
    unsigned char l_795 = 249UL;
    int **l_808 = &g_202;
    char l_843 = 0L;
    char l_942 = 0x3FL;
    int * const l_957 = &g_14;
    (*g_84) = &p_8;
    if ((&p_7 == (void*)0))
    {
        unsigned char l_782 = 1UL;
        int *l_796 = &g_614;
        (*l_796) ^= (safe_mod_func_int32_t_s_s(0x3614B37DL, (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((p_8 >= (l_781 != &g_84)) , l_782) , (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((((***l_781) ^ (p_8 != ((((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_726, func_81(&g_202, &g_202))), g_713)) >= g_738) , l_795) , l_782))) <= 0x8F0B6BEDL) , p_8) , (***l_781)), 0xE45BL)), 3)) ^ p_8), 0x77A1L))), g_72)), 4294967295UL))));
        for (g_601 = 0; (g_601 > 8); g_601 = safe_add_func_uint8_t_u_u(g_601, 6))
        {
            if (p_8)
                break;
        }
        (*g_84) = (**l_781);
    }
    else
    {
        char l_801 = 0x20L;
        const int *l_822 = &g_536;
        int * const l_923 = &g_14;
        int *l_955 = (void*)0;
        for (g_72 = (-4); (g_72 == 58); ++g_72)
        {
            int *l_816 = (void*)0;
            int l_875 = 5L;
            int l_956 = 7L;
        }
    }
    (*g_202) |= (**g_823);
    return l_957;
}







static unsigned func_15(char p_16, int p_17)
{
    int *l_746 = &g_614;
    int *l_747 = &g_14;
    int *l_748 = (void*)0;
    int *l_749 = &g_614;
    int l_750 = (-1L);
    int *l_751 = &g_14;
    int *l_752 = &g_536;
    int *l_753 = &g_14;
    int *l_754 = &l_750;
    int *l_755 = (void*)0;
    int *l_756 = &l_750;
    int l_757 = 0xF575D46DL;
    int *l_758 = &l_757;
    int *l_759 = &g_614;
    int *l_760 = &l_750;
    int *l_761 = (void*)0;
    int *l_762 = &l_757;
    int *l_763 = &l_757;
    int *l_764 = &l_757;
    int *l_765 = &l_757;
    int *l_766 = &l_750;
    int *l_767 = (void*)0;
    int *l_768 = &l_750;
    int l_769 = 0xB4492278L;
    p_17 = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(func_24(p_16), 4)), p_16)) , 8L);
    g_770++;
    return p_17;
}







static unsigned char func_24(unsigned p_25)
{
    int *l_26 = &g_14;
    int *l_27 = (void*)0;
    int *l_28 = (void*)0;
    int *l_29 = &g_14;
    int *l_30 = &g_14;
    int *l_31 = &g_14;
    int *l_32 = &g_14;
    int *l_33 = &g_14;
    int *l_34 = &g_14;
    int *l_35 = &g_14;
    int *l_36 = &g_14;
    int *l_37 = &g_14;
    int l_38 = 0xDE6B9338L;
    int l_39 = (-1L);
    int l_40 = (-10L);
    int *l_41 = &l_39;
    int *l_42 = &g_14;
    int *l_43 = &l_38;
    int *l_44 = &l_40;
    int *l_45 = &l_38;
    int *l_46 = &g_14;
    int *l_47 = &g_14;
    int *l_48 = &l_40;
    int *l_49 = &l_40;
    int *l_50 = (void*)0;
    int *l_51 = &l_40;
    int *l_52 = &l_40;
    int *l_53 = &l_40;
    int l_54 = (-1L);
    int *l_55 = &l_38;
    int *l_56 = &l_40;
    int *l_57 = &l_54;
    int *l_58 = &l_40;
    int *l_59 = &l_40;
    int *l_60 = &l_40;
    int *l_61 = (void*)0;
    int *l_62 = &g_14;
    int *l_63 = &l_39;
    int *l_64 = &l_38;
    int *l_65 = &l_39;
    int *l_66 = &l_54;
    int *l_67 = &l_39;
    int l_68 = 6L;
    int *l_69 = &l_39;
    int *l_70 = (void*)0;
    int *l_71 = &l_38;
    char l_418 = 1L;
    unsigned char l_615 = 1UL;
    int ***l_745 = &g_84;
    g_72--;
    (*l_71) ^= g_72;
    (*l_745) = func_75(((safe_div_func_int8_t_s_s(((((p_25 , ((func_81(g_84, func_85(((((safe_add_func_int32_t_s_s(((*l_32) ^ (*l_45)), 2L)) ^ (func_90(g_12, (func_94(&l_68, (*l_42), g_84, p_25, &g_14) < 255UL), &l_40) <= 0x3AL)) < p_25) , &l_68), l_418)) || (*l_69)) != g_367)) , p_25) & 0x90L) != 65535UL), l_615)) , g_367), (*l_42), p_25);
    return p_25;
}







static int ** func_75(unsigned char p_76, int p_77, int p_78)
{
    int *l_616 = &g_614;
    int *l_617 = &g_14;
    int l_618 = 0x4FA1B566L;
    int l_619 = 0x23D68194L;
    short l_620 = 0x413BL;
    int *l_621 = &g_614;
    int *l_622 = &l_619;
    int *l_623 = &l_618;
    int l_624 = (-9L);
    int *l_625 = (void*)0;
    int *l_626 = &g_14;
    int l_627 = 0xACCE002FL;
    int *l_628 = (void*)0;
    int *l_629 = &g_14;
    int *l_630 = &l_619;
    int *l_631 = &g_614;
    int l_632 = (-1L);
    int *l_633 = &l_632;
    int l_634 = 1L;
    int *l_635 = &g_536;
    int *l_636 = &l_632;
    int *l_637 = &l_624;
    int *l_638 = &l_619;
    int **l_642 = (void*)0;
    int **l_643 = &l_628;
    int *l_644 = &l_624;
    int *l_645 = &l_632;
    int *l_646 = (void*)0;
    int *l_647 = &l_627;
    int *l_648 = (void*)0;
    int *l_649 = &g_14;
    int *l_650 = &l_618;
    int *l_651 = &l_627;
    int *l_652 = &l_632;
    int *l_653 = &g_614;
    int *l_654 = (void*)0;
    int *l_655 = (void*)0;
    int *l_656 = &l_632;
    int *l_657 = &l_624;
    int *l_658 = &g_614;
    int *l_659 = (void*)0;
    int *l_660 = &g_14;
    int *l_661 = &l_624;
    int *l_662 = &l_632;
    int *l_663 = &g_14;
    int *l_664 = &l_624;
    int *l_665 = &l_627;
    int *l_666 = &l_632;
    int *l_667 = &g_536;
    int *l_668 = &l_634;
    int *l_669 = &l_619;
    int *l_670 = &l_618;
    int *l_671 = &l_627;
    int l_672 = (-2L);
    int *l_673 = (void*)0;
    int *l_674 = &l_618;
    int *l_675 = &l_634;
    int *l_676 = (void*)0;
    int *l_677 = &g_536;
    int *l_678 = &l_634;
    int *l_679 = &g_14;
    int *l_680 = &l_634;
    int *l_681 = &l_634;
    int *l_682 = (void*)0;
    int *l_683 = &l_624;
    int l_684 = 1L;
    int *l_685 = &g_536;
    int l_686 = 0x98826D02L;
    int l_687 = 0L;
    int *l_688 = &g_536;
    int *l_689 = &l_634;
    int *l_690 = (void*)0;
    int *l_691 = &l_684;
    int *l_692 = &l_686;
    int *l_693 = &g_614;
    int *l_694 = (void*)0;
    int *l_695 = &l_634;
    int *l_696 = &l_632;
    int *l_697 = &l_619;
    int *l_698 = &l_618;
    int *l_699 = &g_614;
    int *l_700 = &g_536;
    int l_701 = 1L;
    int *l_702 = (void*)0;
    int *l_704 = (void*)0;
    int *l_705 = &g_614;
    int l_706 = 0xD2C63D11L;
    int *l_707 = &l_624;
    int *l_708 = &l_672;
    int *l_709 = &g_614;
    int l_710 = 0xFB3F48BAL;
    int l_711 = 0x42AAD9C1L;
    int *l_712 = &g_536;
    unsigned short l_725 = 0x6CEEL;
    g_639++;
    (*l_643) = &p_77;
    --g_713;
    if ((safe_mod_func_int32_t_s_s((*l_622), (safe_mod_func_int32_t_s_s(func_81(&g_202, &l_690), (**l_643))))))
    {
        int **l_720 = &l_656;
        int ***l_731 = (void*)0;
        int ***l_732 = &l_642;
        (*l_631) = ((func_81(&l_635, ((l_720 == l_720) , l_720)) && (safe_sub_func_uint32_t_u_u(((!(&g_202 != ((func_81(l_720, func_85((*l_720), (*l_647))) < p_76) , &g_202))) , (*l_652)), g_295))) , p_76);
        (*l_651) &= (l_725 , p_77);
        --g_726;
        (*l_732) = func_85((*l_720), ((1L < 0x914AL) , ((p_78 | (func_94((*l_643), p_77, func_85(&g_614, (safe_mod_func_uint16_t_u_u((~8UL), p_78))), g_178, &g_14) , g_475)) , g_407)));
    }
    else
    {
        char l_733 = (-5L);
        int l_734 = 0xAD0C9046L;
        int l_735 = 0xC40B2AE9L;
        int l_736 = 4L;
        int l_737 = 0xC1892ABDL;
        int l_739 = (-5L);
        int l_740 = 0x55E4C325L;
        ++g_742;
    }
    return &g_202;
}







static int func_81(int ** p_82, int ** p_83)
{
    return (*g_202);
}







static int ** func_85(int * p_86, short p_87)
{
    int **l_419 = &g_202;
    unsigned l_423 = 0xF1B8ECEDL;
    int l_458 = 1L;
    int l_461 = 0x354A29A4L;
    int l_464 = 0x33CF6F25L;
    int l_465 = (-4L);
    int l_471 = 0x5B026C55L;
    unsigned short l_556 = 1UL;
    (*l_419) = p_86;
    for (g_72 = (-21); (g_72 == 42); ++g_72)
    {
        unsigned char l_422 = 254UL;
        unsigned short l_441 = 65533UL;
        int ***l_495 = &g_84;
        int * const *l_551 = &g_202;
        short l_613 = 0x9AB5L;
        if (l_422)
        {
            l_423 ^= (*p_86);
            for (p_87 = 0; (p_87 >= 7); p_87 = safe_add_func_int16_t_s_s(p_87, 7))
            {
                unsigned l_426 = 4294967292UL;
                --l_426;
                return &g_202;
            }
            return l_419;
        }
        else
        {
            int *l_429 = &g_14;
            (*l_419) = l_429;
        }
        for (g_330 = 0; (g_330 > 34); g_330 = safe_add_func_int32_t_s_s(g_330, 6))
        {
            const unsigned l_445 = 8UL;
            int *l_446 = &g_14;
            int l_521 = 0x57EAFF6CL;
            int l_526 = 0x045A6EA2L;
        }
        return (*l_495);
    }
    g_614 = (*p_86);
    return &g_202;
}







static unsigned char func_90(unsigned char p_91, unsigned char p_92, int * p_93)
{
    int *l_238 = (void*)0;
    int ***l_248 = &g_84;
    int l_249 = 0x6BFB3F18L;
    int *l_346 = &l_249;
    int *l_347 = &l_249;
    int *l_348 = &l_249;
    int *l_349 = &l_249;
    int *l_350 = &l_249;
    int *l_351 = &l_249;
    int *l_352 = &l_249;
    int *l_353 = &l_249;
    int *l_354 = &l_249;
    int *l_355 = &l_249;
    int *l_356 = (void*)0;
    int *l_357 = &l_249;
    int *l_358 = &l_249;
    int *l_359 = &l_249;
    int *l_360 = &l_249;
    int *l_361 = (void*)0;
    int *l_362 = &l_249;
    int *l_363 = &l_249;
    int *l_364 = &l_249;
    int *l_365 = (void*)0;
    int *l_366 = &l_249;
    int *l_368 = (void*)0;
    int l_369 = 1L;
    int *l_370 = (void*)0;
    int *l_371 = &l_369;
    int *l_372 = &l_369;
    int *l_373 = (void*)0;
    int *l_374 = &l_369;
    int *l_375 = &l_249;
    int *l_376 = &l_249;
    int *l_377 = (void*)0;
    int *l_378 = (void*)0;
    int *l_379 = &l_369;
    int *l_380 = &l_249;
    int *l_382 = (void*)0;
    int *l_383 = (void*)0;
    int *l_384 = &l_369;
    int *l_385 = &l_249;
    int *l_386 = &l_369;
    int *l_387 = (void*)0;
    int *l_388 = &l_369;
    int l_389 = 1L;
    int l_390 = 0L;
    int *l_391 = (void*)0;
    int *l_392 = &l_389;
    int *l_393 = (void*)0;
    int *l_394 = &l_369;
    int *l_395 = &l_249;
    int *l_396 = &l_390;
    int *l_397 = &l_390;
    int *l_398 = &l_389;
    int *l_399 = (void*)0;
    int *l_400 = &l_389;
    int *l_401 = &l_389;
    int *l_402 = (void*)0;
    int *l_403 = &l_389;
    int *l_404 = &l_390;
    int *l_405 = &l_369;
    int **l_417 = &l_353;
    if ((safe_rshift_func_uint8_t_u_u(g_12, 4)))
    {
        unsigned short l_250 = 0xA900L;
        ++l_250;
        return l_250;
    }
    else
    {
        unsigned l_277 = 4294967292UL;
        int l_344 = 0x445F0763L;
        for (g_72 = (-16); (g_72 < 35); g_72 = safe_add_func_uint32_t_u_u(g_72, 1))
        {
            int **l_259 = &g_202;
            int l_267 = 0xF7500B1CL;
            if (((p_92 <= (safe_rshift_func_uint8_t_u_s((p_91 >= (0xF11B2BD4L != 0UL)), 0))) >= (l_259 != (void*)0)))
            {
                unsigned char l_260 = 0x04L;
                if (l_260)
                    break;
                return p_92;
            }
            else
            {
                int *l_261 = &l_249;
                int *l_262 = &l_249;
                int *l_263 = &l_249;
                int *l_264 = &l_249;
                int *l_265 = &l_249;
                int *l_266 = &l_249;
                int *l_268 = &l_267;
                int *l_269 = &l_249;
                int *l_270 = &l_267;
                int *l_271 = &l_267;
                (*l_259) = p_93;
                (*l_259) = p_93;
                --g_272;
            }
            (*l_259) = p_93;
            if (((safe_add_func_int16_t_s_s((l_277 ^ g_178), l_277)) , (safe_mod_func_int8_t_s_s((((((**l_259) , l_248) == (void*)0) < (g_14 , g_14)) == 0xFA29F626L), g_12))))
            {
                int *l_280 = &l_267;
                int *l_281 = &l_249;
                int *l_282 = &l_267;
                int *l_283 = &l_249;
                int *l_284 = &l_267;
                int *l_285 = &l_249;
                int *l_286 = &l_267;
                int l_287 = 1L;
                int *l_288 = &l_287;
                int *l_289 = (void*)0;
                int *l_290 = &l_287;
                int *l_291 = &l_287;
                int *l_292 = &l_287;
                int *l_293 = &l_267;
                int l_294 = 1L;
                int *l_296 = &l_294;
                int *l_297 = &l_249;
                int *l_298 = (void*)0;
                int *l_299 = &l_294;
                int *l_300 = &l_294;
                int *l_301 = &l_249;
                int *l_302 = &l_287;
                int *l_303 = &l_267;
                int *l_304 = &l_287;
                int *l_305 = &l_249;
                int *l_306 = &l_267;
                int *l_307 = &l_294;
                int *l_308 = &l_287;
                int *l_309 = &l_249;
                int *l_310 = &l_267;
                int *l_311 = &l_249;
                int *l_312 = &l_267;
                int *l_313 = &l_287;
                int *l_314 = &l_287;
                int *l_315 = &l_287;
                int *l_316 = (void*)0;
                int *l_317 = &l_267;
                int *l_318 = &l_287;
                int *l_319 = &l_249;
                int *l_320 = &l_294;
                int *l_321 = &l_287;
                int *l_322 = (void*)0;
                int *l_323 = &l_249;
                int *l_324 = &l_294;
                int *l_325 = &l_249;
                int *l_326 = &l_294;
                int *l_327 = &l_249;
                int l_328 = 1L;
                int *l_329 = (void*)0;
                g_330--;
            }
            else
            {
                short l_333 = 0x864CL;
                int * const *l_345 = &g_202;
                p_93 = p_93;
                if ((!(*p_93)))
                {
                    int *l_334 = (void*)0;
                    (*l_259) = (void*)0;
                    l_333 = (255UL >= g_272);
                    (*l_259) = l_334;
                    p_93 = p_93;
                }
                else
                {
                    int **l_343 = &g_202;
                    l_344 = (safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(((((g_178 == l_333) ^ ((safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((**l_259), g_14)) < (p_92 | ((l_343 != (p_91 , l_343)) ^ (&p_93 == (void*)0)))), (**l_259))) >= p_91)) | 1UL) == (**l_343)), 0xAAL)), p_92));
                    (*p_93) = (((func_94(p_93, g_12, l_345, ((p_91 >= 3L) > p_92), &g_14) , ((func_94(p_93, (**l_343), &g_202, p_91, p_93) && g_72) , p_91)) != 0L) , (*g_202));
                }
            }
        }
    }
    ++g_407;
    for (g_12 = 0; (g_12 == 47); ++g_12)
    {
        int l_412 = 0x62AB164AL;
        unsigned short l_413 = 0x7545L;
        int **l_416 = &l_362;
        l_413++;
        (*l_353) ^= func_94(p_93, (p_92 <= (l_413 != (*p_93))), (*l_248), g_12, p_93);
        (*l_416) = &l_412;
    }
    (*l_417) = &g_14;
    return g_14;
}







static char func_94(int * p_95, int p_96, int * const * p_97, char p_98, int * p_99)
{
    unsigned l_100 = 0x8A1D584DL;
    int *l_114 = &g_14;
    short l_131 = 0x449FL;
    int l_145 = 2L;
    l_100--;
    (*p_95) = l_100;
    if (l_100)
    {
        short l_105 = 1L;
        int *l_112 = &g_14;
        int l_166 = 0xC76AAD2AL;
        int *l_235 = &l_145;
        (*p_95) ^= (((safe_rshift_func_int8_t_s_u(0L, 7)) , g_84) == &p_95);
        if (((g_72 , (l_105 , 0x3FA8L)) != (safe_div_func_int32_t_s_s((((safe_mod_func_int32_t_s_s(l_105, ((((4294967295UL > (safe_rshift_func_uint8_t_u_s(l_105, 3))) , l_112) != l_112) ^ 0xFC49L))) , p_98) , (*l_112)), 4294967295UL))))
        {
            int **l_113 = &l_112;
            (*l_113) = l_112;
            (*p_95) = ((p_96 , l_100) ^ ((p_98 , l_114) == (*l_113)));
        }
        else
        {
            int **l_115 = &l_112;
            int l_146 = 1L;
            int l_192 = 0L;
            (*l_115) = &g_14;
            (*p_95) = (*l_114);
            if (g_72)
            {
                const unsigned l_120 = 4294967294UL;
                int * const l_134 = &g_14;
                int *l_147 = &l_146;
                int *l_148 = &l_146;
                int l_149 = 1L;
                int *l_150 = &l_149;
                int *l_151 = &l_146;
                int *l_152 = &l_146;
                int *l_153 = &l_149;
                int *l_154 = &l_146;
                int *l_155 = (void*)0;
                int *l_156 = (void*)0;
                int *l_157 = &l_146;
                int *l_158 = &l_146;
                int *l_159 = &l_149;
                int *l_160 = &l_146;
                int *l_161 = &l_146;
                int *l_162 = &l_149;
                int *l_163 = &l_149;
                int *l_164 = &l_145;
                int *l_165 = &l_145;
                int *l_167 = (void*)0;
                int *l_168 = &l_146;
                int *l_169 = &l_166;
                int *l_170 = &l_146;
                int *l_171 = &l_149;
                int *l_172 = (void*)0;
                int *l_173 = &l_145;
                int *l_174 = (void*)0;
                int *l_175 = &l_145;
                int *l_176 = &l_166;
                int *l_177 = &l_166;
                (*p_95) = ((*l_114) < ((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_120, 0x98492E76L)), p_96)) <= (((((safe_mod_func_uint8_t_u_u((*l_112), 0x90L)) > (((*l_112) , ((((((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((g_12 == ((safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(l_131, p_98)) != 0x72L), l_120)) ^ g_14)), 0x97E7L)), g_72)) <= (-8L)) & 8L) || p_96) == 0xDD0D489CL) < g_14)) , (*l_112))) ^ g_72) < 0x7CC017F0L) | g_12)));
                l_145 &= (safe_div_func_uint8_t_u_u(0x6CL, ((l_134 == (((p_99 == ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((246UL == (safe_mod_func_int8_t_s_s((p_98 <= ((((safe_mod_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((**l_115), ((p_96 | (**l_115)) >= g_14))) > (**l_115)) >= 65535UL), g_72)) < 0xE4L) == p_98) , 0x4DL)), p_98))) , (**l_115)), p_96)), 0)) , l_134)) || g_72) , p_95)) , 255UL)));
                --g_178;
                if ((((void*)0 == g_84) <= ((void*)0 == p_95)))
                {
                    (*l_175) = ((void*)0 == g_84);
                }
                else
                {
                    (*l_161) ^= (&l_149 == ((safe_add_func_int32_t_s_s((*l_112), g_72)) , (*l_115)));
                }
            }
            else
            {
                unsigned l_198 = 3UL;
                int **l_212 = &l_114;
                int l_234 = 0xF9EB425EL;
                for (l_146 = (-25); (l_146 == 28); l_146++)
                {
                    unsigned char l_201 = 1UL;
                    int **l_207 = &g_202;
                    for (l_105 = 4; (l_105 < (-22)); l_105 = safe_sub_func_int16_t_s_s(l_105, 8))
                    {
                        int *l_187 = &l_166;
                        int *l_188 = &l_145;
                        int *l_189 = &l_166;
                        int *l_190 = &l_145;
                        int *l_191 = (void*)0;
                        int *l_193 = &l_166;
                        int *l_194 = &l_145;
                        int *l_195 = (void*)0;
                        int *l_196 = &l_166;
                        int *l_197 = &l_166;
                        (*l_115) = &g_14;
                        l_198++;
                        (*p_95) ^= l_201;
                        if ((*l_188))
                            break;
                    }
                    g_202 = &g_14;
                    (*p_95) = (safe_lshift_func_uint16_t_u_u((p_98 < (((safe_rshift_func_uint16_t_u_u((l_207 == (((safe_lshift_func_int8_t_s_u((((safe_add_func_uint8_t_u_u(((p_96 , &p_99) == l_212), g_12)) & (*g_202)) < 4294967294UL), ((((*l_112) >= p_98) || (**l_115)) || 0x95L))) || (*p_99)) , &p_95)), 0)) <= g_12) == g_72)), 12));
                    for (l_192 = 0; (l_192 < (-12)); l_192 = safe_sub_func_uint16_t_u_u(l_192, 7))
                    {
                        const int *l_216 = &l_146;
                        const int ** const l_215 = &l_216;
                        const int **l_218 = &l_216;
                        const int ***l_217 = &l_218;
                        int l_227 = 0L;
                        (*l_217) = l_215;
                        (*p_95) = (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(((((**l_207) != ((&g_84 == &p_97) , (((*l_114) ^ ((*l_114) >= ((p_98 , (*l_115)) != (void*)0))) | g_72))) == (*p_95)) , g_72), l_227)) | p_96) | p_98), 15)) < g_14), (**l_212))), p_96));
                        l_234 ^= (((safe_lshift_func_int8_t_s_s(p_96, (((65529UL > (safe_div_func_uint32_t_u_u(p_96, g_14))) && (safe_sub_func_int8_t_s_s(g_72, (((*l_114) && p_96) <= 0xB6L)))) , (g_14 >= (**l_207))))) , g_12) >= (**l_207));
                    }
                }
            }
        }
        (*l_235) |= (*p_95);
    }
    else
    {
        return g_14;
    }
    return g_12;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_1018, "g_1018", print_hash_value);
    transparent_crc(g_1033, "g_1033", print_hash_value);
    transparent_crc(g_1237, "g_1237", print_hash_value);
    transparent_crc(g_1275, "g_1275", print_hash_value);
    transparent_crc(g_1301, "g_1301", print_hash_value);
    transparent_crc(g_1349, "g_1349", print_hash_value);
    transparent_crc(g_1380, "g_1380", print_hash_value);
    transparent_crc(g_1416, "g_1416", print_hash_value);
    transparent_crc(g_1421, "g_1421", print_hash_value);
    transparent_crc(g_1439, "g_1439", print_hash_value);
    transparent_crc(g_1514, "g_1514", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
