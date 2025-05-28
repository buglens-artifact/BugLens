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



static int g_2 = 0xC68EC0AEL;
static unsigned short g_18 = 0x6CE4L;
static char g_34 = 0x94L;
static unsigned char g_42 = 1UL;
static short g_65 = 0x39EFL;
static char g_67 = (-8L);
static char g_70 = (-3L);
static int g_72 = 0x1AF53C8CL;
static int *g_71 = &g_72;
static short g_107 = 0x4AB7L;
static short g_108 = 0xDFA8L;
static int g_111 = 4L;
static unsigned short g_135 = 65535UL;
static unsigned short g_152 = 0x884EL;
static unsigned g_175 = 6UL;
static char g_188 = 0xB4L;
static char g_190 = 0x26L;
static char *g_189 = &g_190;
static int g_210 = 0xA2825B7CL;
static unsigned short g_215 = 4UL;
static int g_271 = (-5L);
static int g_282 = 1L;
static char g_304 = 0L;
static short g_309 = 8L;
static char g_314 = 1L;
static char g_323 = 1L;
static int g_326 = 8L;
static int g_357 = 0xEB3C188BL;
static int g_365 = (-1L);
static unsigned g_373 = 4294967291UL;
static unsigned char g_406 = 0xF9L;
static char g_430 = 0x56L;
static unsigned g_444 = 4294967295UL;
static short g_502 = 1L;
static int g_542 = 0x2CEFF6CCL;
static unsigned char g_545 = 0x35L;
static unsigned g_564 = 1UL;
static int g_637 = 6L;
static short g_642 = 0x8652L;
static short g_649 = 0xB281L;
static unsigned g_680 = 0x96117DFCL;
static unsigned char g_710 = 0x43L;
static int **g_836 = (void*)0;
static int g_971 = 0L;
static unsigned g_1099 = 1UL;
static unsigned short g_1158 = 65530UL;
static int g_1233 = (-1L);
static unsigned char g_1241 = 255UL;
static int g_1301 = (-1L);
static char g_1315 = 7L;
static unsigned g_1327 = 0x30EEC862L;
static unsigned short g_1443 = 0x2FECL;
static unsigned g_1452 = 0xDAD2A461L;
static unsigned short g_1488 = 0x3D5CL;
static short g_1529 = 1L;
static unsigned short g_1539 = 5UL;
static unsigned char *g_1558 = &g_710;
static unsigned char **g_1557 = &g_1558;
static int ***g_1577 = &g_836;



static int func_1(void);
static int func_5(unsigned p_6, char p_7, unsigned short p_8, int p_9, unsigned p_10);
static unsigned func_12(char p_13, int p_14, unsigned p_15, unsigned short p_16);
static short func_23(unsigned char p_24, short p_25);
static unsigned char func_26(unsigned short * p_27, unsigned char p_28, unsigned char p_29);
static unsigned short * func_30(char p_31);
static unsigned char func_37(unsigned p_38);
static unsigned char func_39(char * p_40);
static int * func_43(int p_44, int * p_45, short p_46, int p_47, char * p_48);
static int * func_50(unsigned p_51);
static int func_1(void)
{
    int l_383 = 0xBD047303L;
    int l_567 = 0x8A4ECF5DL;
    short *l_1510 = (void*)0;
    char **l_1551 = &g_189;
    short l_1560 = 0x2005L;
    int ***l_1578 = &g_836;
    int **l_1582 = &g_71;
    int *l_1583 = (void*)0;
    int *l_1584 = &g_111;
    for (g_2 = 1; (g_2 > (-29)); g_2--)
    {
        unsigned l_11 = 0UL;
        unsigned short *l_17 = &g_18;
        char *l_32 = (void*)0;
        char *l_33 = &g_34;
        int *l_1462 = &g_111;
        int l_1474 = 0xCDB3C74BL;
        unsigned l_1497 = 0x2708CE11L;
        unsigned char ***l_1580 = &g_1557;
        if (func_5((l_11 ^ (0UL == func_12(((*l_33) = (((*l_17) = 0xD145L) > (((g_2 < (l_11 >= (safe_mul_func_int16_t_s_s(func_23((l_567 &= func_26(func_30((((*g_189) = (((*l_33) = g_2) <= ((safe_lshift_func_uint8_t_u_u(func_37(((func_39(l_33) != g_2) < g_2)), 6)) >= 0L))) > 0x6FL)), l_383, l_383)), g_430), l_383)))) != g_282) & 1L))), l_11, g_108, l_383))), l_383, l_383, g_642, g_282))
        {
            int *l_1463 = &g_210;
            int *l_1464 = &g_971;
            int *l_1465 = &l_567;
            int *l_1466 = &g_111;
            int *l_1467 = &l_567;
            int *l_1468 = &g_72;
            int *l_1469 = &g_210;
            int *l_1470 = (void*)0;
            int *l_1471 = &g_210;
            int *l_1472 = &l_567;
            int *l_1473 = &l_383;
            int *l_1475 = &g_971;
            int *l_1476 = &g_72;
            int *l_1477 = &g_210;
            int *l_1478 = &g_971;
            int *l_1479 = &l_1474;
            int *l_1480 = &g_971;
            int *l_1481 = (void*)0;
            int *l_1482 = &l_567;
            int *l_1483 = &l_383;
            int *l_1484 = (void*)0;
            int *l_1485 = &g_111;
            int *l_1486 = &l_383;
            int *l_1487 = &l_383;
            l_1462 = &g_971;
            g_1488++;
        }
        else
        {
            for (l_383 = 23; (l_383 > 18); l_383 = safe_sub_func_uint32_t_u_u(l_383, 2))
            {
                (*l_1462) = g_1327;
            }
            if (l_383)
                break;
        }
        for (g_107 = 0; (g_107 < 16); ++g_107)
        {
            short *l_1498 = (void*)0;
            short *l_1499 = &g_309;
            int l_1500 = (-5L);
            int l_1507 = 0x684ACDAFL;
            unsigned char l_1508 = 0x0DL;
            short **l_1509 = &l_1499;
            char l_1517 = 0xE3L;
            unsigned short l_1556 = 0x4BA2L;
            int l_1566 = 0xEB6F26B6L;
            if (l_567)
                break;
            (*l_1462) = (~(-5L));
            if (((safe_add_func_uint16_t_u_u((((*l_1509) = l_1510) == &g_65), g_680)) & g_637))
            {
                unsigned *l_1515 = &g_680;
                int l_1516 = 0x5241C0F7L;
                l_1507 ^= (l_567 || 0x41L);
            }
            else
            {
                int *l_1518 = &l_383;
                int *l_1519 = &g_210;
                int *l_1520 = &l_1507;
                int *l_1521 = &l_1474;
                int *l_1522 = &g_971;
                int *l_1523 = &g_72;
                int *l_1524 = &g_971;
                int *l_1525 = &l_1507;
                int *l_1526 = &g_72;
                int *l_1527 = (void*)0;
                int *l_1528 = &l_383;
                int *l_1530 = &g_971;
                int *l_1531 = &l_1507;
                int *l_1532 = (void*)0;
                int *l_1533 = (void*)0;
                int *l_1534 = &l_1474;
                int *l_1535 = (void*)0;
                int *l_1536 = &l_1474;
                int *l_1537 = &g_210;
                int *l_1538 = (void*)0;
                unsigned *l_1548 = &g_373;
                unsigned char ***l_1559 = &g_1557;
                int ***l_1579 = &g_836;
                g_1539--;
                if ((safe_add_func_uint16_t_u_u(((*l_17) = ((*g_189) | ((safe_lshift_func_uint8_t_u_s((*l_1519), 7)) != (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_5(((l_1556 || (((*l_1559) = g_1557) == (void*)0)) ^ 0xB285L), l_1560, g_107, g_444, l_567), g_1452)), 3UL))))), g_365)))
                {
                    return l_1508;
                }
                else
                {
                    int ***l_1568 = &g_836;
                    int ****l_1567 = &l_1568;
                    int ***l_1570 = &g_836;
                    int ****l_1569 = &l_1570;
                    int *l_1571 = &g_365;
                    char ***l_1572 = &l_1551;
                    unsigned char ****l_1581 = &l_1559;
                    (*l_1536) ^= (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((*l_1524))), (safe_mul_func_int8_t_s_s((l_1566 > (((*l_1567) = (void*)0) != ((*l_1569) = &g_836))), (*g_1558)))));
                    l_1462 = func_43(((*l_1571) ^= g_215), &l_1500, (((*l_1572) = &g_189) != &g_189), (safe_sub_func_uint32_t_u_u(g_1233, ((*l_1522) = ((safe_mul_func_int16_t_s_s((g_642 = ((g_1577 == (l_1579 = l_1578)) != ((l_1580 == ((*l_1581) = l_1580)) >= (*g_1558)))), (-8L))) < (*l_1462))))), &g_1315);
                    (*l_1526) &= (g_2 > (*l_1534));
                }
            }
        }
    }
    (*l_1582) = func_50(g_444);
    (*l_1584) = g_1488;
    if ((((*g_189) & (safe_rshift_func_uint8_t_u_u((*g_1558), 1))) && (&l_1560 == &g_502)))
    {
        char l_1589 = 0xBFL;
        int *l_1591 = &g_2;
        for (g_326 = 20; (g_326 >= (-23)); g_326--)
        {
            int l_1590 = 0x8ABC3865L;
            if ((+((*l_1584) = l_1589)))
            {
                (*l_1582) = &g_210;
            }
            else
            {
                return l_1590;
            }
            (*l_1582) = l_1591;
        }
    }
    else
    {
        int l_1594 = 0x9A77A979L;
        (*l_1584) = (safe_add_func_uint16_t_u_u((g_357 == l_1594), 0L));
    }
    return (*l_1584);
}







static int func_5(unsigned p_6, char p_7, unsigned short p_8, int p_9, unsigned p_10)
{
    unsigned l_1349 = 0x1E0EE7DCL;
    char *l_1364 = &g_1315;
    int l_1380 = 1L;
    int l_1405 = 0x1EAEB9B8L;
    char **l_1454 = &g_189;
    unsigned short *l_1461 = &g_152;
    unsigned short **l_1460 = &l_1461;
    for (g_67 = 0; (g_67 < 23); ++g_67)
    {
        unsigned l_1348 = 0xDD45D0A0L;
        unsigned short *l_1360 = &g_135;
        unsigned short l_1361 = 65535UL;
        char *l_1366 = &g_1315;
        int l_1367 = 2L;
        int l_1368 = 0x8D38C5D8L;
        int l_1370 = 0xC4D5839EL;
        int **l_1446 = (void*)0;
        int **l_1447 = &g_71;
        char **l_1453 = (void*)0;
        char ***l_1455 = (void*)0;
        char ***l_1456 = (void*)0;
        char ***l_1457 = &l_1454;
        char **l_1459 = &l_1366;
        char ***l_1458 = &l_1459;
        if (l_1348)
        {
            return l_1349;
        }
        else
        {
            char ***l_1350 = (void*)0;
            char **l_1352 = &g_189;
            char ***l_1351 = &l_1352;
            char **l_1354 = &g_189;
            char ***l_1353 = &l_1354;
            (*l_1353) = ((*l_1351) = &g_189);
        }
        for (g_135 = 0; (g_135 != 25); ++g_135)
        {
            int *l_1357 = &g_210;
            int **l_1358 = (void*)0;
            int **l_1359 = &l_1357;
            unsigned short **l_1365 = &l_1360;
            int *l_1369 = &g_210;
            int *l_1371 = &l_1367;
            int *l_1372 = &l_1368;
            int *l_1373 = &g_111;
            int *l_1374 = (void*)0;
            int *l_1375 = &l_1368;
            int *l_1376 = &g_971;
            int *l_1377 = &g_72;
            int *l_1378 = &g_971;
            int *l_1379 = &l_1370;
            int l_1381 = (-1L);
            int *l_1382 = &l_1367;
            int *l_1383 = &g_72;
            int *l_1384 = (void*)0;
            int *l_1385 = &g_111;
            int *l_1386 = (void*)0;
            int *l_1387 = &g_111;
            int *l_1388 = &g_210;
            int *l_1389 = &g_111;
            int *l_1390 = &g_210;
            int *l_1391 = &l_1367;
            int *l_1392 = (void*)0;
            int l_1393 = 0x235F9EEBL;
            int l_1394 = (-10L);
            int *l_1395 = &g_111;
            int *l_1396 = &g_72;
            int *l_1397 = &l_1368;
            int *l_1398 = (void*)0;
            int *l_1399 = &l_1381;
            int *l_1400 = &l_1367;
            int *l_1401 = &g_210;
            int *l_1402 = &l_1370;
            int *l_1403 = &l_1393;
            int *l_1404 = &l_1370;
            int *l_1406 = &g_971;
            int *l_1407 = (void*)0;
            int *l_1408 = &l_1370;
            int *l_1409 = &l_1368;
            int *l_1410 = (void*)0;
            int *l_1411 = (void*)0;
            int *l_1412 = &l_1394;
            int l_1413 = 0x9B48A4B1L;
            int *l_1414 = &l_1368;
            int *l_1415 = &g_111;
            int l_1416 = 1L;
            int *l_1417 = &g_72;
            int *l_1418 = (void*)0;
            int *l_1419 = &l_1413;
            int *l_1420 = &g_210;
            int *l_1421 = (void*)0;
            int *l_1422 = &l_1394;
            int l_1423 = (-10L);
            int *l_1424 = &l_1381;
            int *l_1425 = &l_1370;
            int *l_1426 = (void*)0;
            int *l_1427 = &l_1394;
            int *l_1428 = &l_1394;
            int *l_1429 = (void*)0;
            int *l_1430 = &l_1368;
            int *l_1431 = &l_1405;
            int *l_1432 = (void*)0;
            int *l_1433 = &l_1405;
            int *l_1434 = &l_1413;
            int *l_1435 = &l_1368;
            int *l_1436 = &g_111;
            int *l_1437 = &g_210;
            int *l_1438 = &l_1393;
            int *l_1439 = &l_1405;
            int *l_1440 = &g_72;
            int *l_1441 = (void*)0;
            int l_1442 = 0x288DA9A7L;
            (*l_1359) = l_1357;
            (*l_1359) = func_43((*l_1357), (*l_1359), p_8, g_406, l_1366);
            --g_1443;
        }
        (*l_1447) = (void*)0;
        l_1380 ^= (p_8 >= (g_190 >= p_8));
    }
    return p_6;
}







static unsigned func_12(char p_13, int p_14, unsigned p_15, unsigned short p_16)
{
    unsigned l_698 = 0xD541151AL;
    int *l_708 = (void*)0;
    int l_727 = 6L;
    int l_733 = 0xE689859AL;
    int l_735 = 0xEBF1A7ECL;
    int l_768 = 0xA2CA2B3FL;
    int l_772 = 0xF8E56C43L;
    unsigned short l_819 = 1UL;
    int **l_837 = &l_708;
    short l_838 = (-9L);
    char **l_1029 = &g_189;
    int l_1299 = 0x20DF1495L;
    int l_1316 = 0xD7AFA38CL;
    int l_1323 = (-1L);
    short *l_1339 = &g_649;
    short **l_1338 = &l_1339;
    int l_1340 = (-1L);
    unsigned char *l_1341 = (void*)0;
    unsigned char *l_1342 = (void*)0;
    unsigned char *l_1343 = &g_545;
    short l_1344 = 4L;
    int *l_1345 = &g_111;
    if (((*g_71) ^= (safe_rshift_func_uint8_t_u_u(p_16, 4))))
    {
        int l_697 = 0xF0215B97L;
        unsigned char *l_704 = (void*)0;
        unsigned char **l_703 = &l_704;
        unsigned char *l_705 = &g_406;
        unsigned char *l_709 = &g_710;
        int **l_809 = &l_708;
        int ***l_808 = &l_809;
        unsigned l_818 = 0UL;
        int l_959 = 0xDA58D73FL;
        int l_982 = 0xD3171A2AL;
        int l_988 = 0xD5EA09C1L;
        int l_993 = 7L;
        int l_1011 = 0xE9E734D5L;
        char l_1106 = (-1L);
        char ***l_1255 = &l_1029;
        int *l_1256 = (void*)0;
        int *l_1257 = (void*)0;
        int *l_1258 = (void*)0;
        int *l_1259 = (void*)0;
        int *l_1260 = &g_971;
        int *l_1261 = &l_993;
        int *l_1262 = &l_768;
        int *l_1263 = &l_727;
        int *l_1264 = &l_768;
        int *l_1265 = &l_959;
        int *l_1266 = &l_959;
        int *l_1267 = &l_768;
        int *l_1268 = &l_1011;
        int *l_1269 = (void*)0;
        int *l_1270 = &l_768;
        int *l_1271 = &l_988;
        int *l_1272 = &g_971;
        int *l_1273 = &l_1011;
        int *l_1274 = &l_982;
        int *l_1275 = &g_971;
        int *l_1276 = &l_733;
        int *l_1277 = &l_982;
        int *l_1278 = &l_733;
        int *l_1279 = &l_982;
        int *l_1280 = &l_768;
        int *l_1281 = &l_993;
        int *l_1282 = &l_727;
        int *l_1283 = &l_768;
        int *l_1284 = (void*)0;
        int *l_1285 = &g_72;
        int *l_1286 = &g_971;
        int *l_1287 = &g_72;
        int *l_1288 = &l_959;
        int *l_1289 = &g_111;
        int *l_1290 = (void*)0;
        int *l_1291 = &l_768;
        int *l_1292 = &l_982;
        int *l_1293 = &l_982;
        int *l_1294 = &g_111;
        int *l_1295 = &l_727;
        int *l_1296 = &l_772;
        int *l_1297 = &l_768;
        int *l_1298 = &l_982;
        int *l_1300 = &l_697;
        int *l_1302 = (void*)0;
        int *l_1303 = &l_959;
        int *l_1304 = &l_982;
        int *l_1305 = &l_1011;
        int *l_1306 = &l_1011;
        int *l_1307 = &g_111;
        int *l_1308 = &l_1011;
        int *l_1309 = &l_697;
        int *l_1310 = &l_768;
        int *l_1311 = (void*)0;
        int *l_1312 = (void*)0;
        int *l_1313 = (void*)0;
        int *l_1314 = (void*)0;
        int *l_1317 = &l_772;
        int *l_1318 = &l_988;
        int *l_1319 = &l_1299;
        int *l_1320 = &l_733;
        int *l_1321 = (void*)0;
        int *l_1322 = &l_727;
        int *l_1324 = &g_210;
        int *l_1325 = &l_982;
        int *l_1326 = &g_971;
        (*g_71) |= (safe_mul_func_uint16_t_u_u(l_697, l_698));
        if (func_26(&g_135, ((*l_705) = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((g_545 | g_545), func_37((((*l_703) = &g_42) == l_705)))), p_16))), (safe_add_func_uint8_t_u_u(((*l_709) ^= ((void*)0 != l_708)), 0x2EL))))
        {
            unsigned short *l_717 = &g_135;
            int l_722 = 1L;
            int l_745 = 0xC7243162L;
            unsigned l_805 = 0UL;
            if (((safe_mod_func_uint8_t_u_u(4UL, (safe_lshift_func_uint8_t_u_u(func_26(func_30((safe_mod_func_uint16_t_u_u((++(*l_717)), 65535UL))), g_18, g_65), 4)))) ^ p_14))
            {
                int *l_728 = &g_210;
                int *l_729 = &g_111;
                int *l_730 = &g_72;
                int *l_731 = &g_72;
                int *l_732 = &l_697;
                int *l_734 = &g_210;
                int l_736 = 0xCEDB5623L;
                int *l_737 = &l_727;
                int *l_738 = &l_735;
                int *l_739 = &l_735;
                int *l_740 = &g_111;
                int *l_741 = &l_722;
                int *l_742 = &g_111;
                int *l_743 = &l_727;
                int *l_744 = &g_72;
                int *l_746 = (void*)0;
                int *l_747 = &l_733;
                int *l_748 = &l_722;
                int *l_749 = &l_736;
                int *l_750 = &l_735;
                int *l_751 = &l_733;
                int *l_752 = &g_111;
                int *l_753 = &l_727;
                int *l_754 = &g_210;
                int *l_755 = &g_111;
                int *l_756 = &g_210;
                int *l_757 = (void*)0;
                int *l_758 = &l_745;
                int *l_759 = &l_722;
                int *l_760 = &l_735;
                int *l_761 = &l_727;
                int *l_762 = (void*)0;
                int *l_763 = &l_745;
                int *l_764 = &g_111;
                int *l_765 = (void*)0;
                int *l_766 = &l_733;
                int *l_767 = &l_736;
                int *l_769 = (void*)0;
                int *l_770 = &l_697;
                int *l_771 = &l_727;
                int *l_773 = &l_768;
                int *l_774 = (void*)0;
                int *l_775 = &l_697;
                int *l_776 = &g_111;
                int *l_777 = &l_735;
                int *l_778 = (void*)0;
                int *l_779 = &g_210;
                int *l_780 = &l_697;
                int *l_781 = &l_736;
                int *l_782 = &g_72;
                int *l_783 = &l_722;
                int *l_784 = &l_733;
                int *l_785 = &l_745;
                int *l_786 = (void*)0;
                int *l_787 = (void*)0;
                int *l_788 = &l_768;
                int *l_789 = &l_697;
                int *l_790 = &g_111;
                int *l_791 = &l_735;
                int l_792 = 0L;
                int *l_793 = (void*)0;
                int *l_794 = &g_210;
                int *l_795 = &l_772;
                int *l_796 = &g_72;
                int *l_797 = &l_792;
                int *l_798 = &l_772;
                int *l_799 = &l_727;
                int *l_800 = &l_697;
                int *l_801 = &l_727;
                int l_802 = 9L;
                int *l_803 = &l_735;
                int *l_804 = &l_722;
                for (g_42 = 0; (g_42 >= 21); g_42++)
                {
                    int l_723 = 0x163A1735L;
                    int **l_724 = &g_71;
                    int **l_725 = (void*)0;
                    int **l_726 = &l_708;
                    if ((*g_71))
                        break;
                    l_723 = l_722;
                    (*l_726) = ((*l_724) = func_43(p_15, &g_72, (+0L), p_16, &p_13));
                }
                l_805++;
            }
            else
            {
                short *l_816 = (void*)0;
                short *l_817 = &g_65;
                int l_820 = 0L;
                int *l_821 = &l_768;
                (*l_821) ^= ((-5L) != func_26(func_30(((*g_189) = (((g_365 >= ((void*)0 == l_808)) != l_722) || ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((0xDE90L <= ((*l_817) |= p_13)), l_745)), l_818)), p_15)) >= 0xA7DFFA2BL)))), l_819, l_820));
            }
        }
        else
        {
            char *l_824 = (void*)0;
            char *l_825 = &g_34;
            int l_832 = (-3L);
            int **l_835 = (void*)0;
            int l_899 = 1L;
            int l_907 = 0L;
            int l_932 = 0xDF1392A8L;
            int l_1018 = 0xA3DCA017L;
            short *l_1165 = &g_649;
            char l_1170 = 0x34L;
            int *l_1250 = &l_988;
            int *l_1251 = &l_993;
            char ***l_1254 = (void*)0;
            if ((safe_mod_func_int8_t_s_s((p_16 < (*g_189)), ((*l_825) ^= (&p_16 != &p_16)))))
            {
                short *l_828 = (void*)0;
                short *l_829 = &g_108;
                int l_841 = 0L;
                int l_847 = 0x767AB173L;
                int l_869 = (-1L);
                int l_873 = 0x1B679BC1L;
                unsigned char l_1019 = 0x45L;
                unsigned char **l_1034 = &l_704;
                int *l_1112 = &l_988;
                int *l_1113 = (void*)0;
                int *l_1114 = &l_735;
                int *l_1115 = (void*)0;
                int *l_1116 = &l_847;
                int *l_1117 = (void*)0;
                int *l_1118 = &l_932;
                int *l_1119 = &l_932;
                int *l_1120 = &l_697;
                int *l_1121 = &l_697;
                int *l_1122 = (void*)0;
                int *l_1123 = &g_72;
                int *l_1124 = &l_982;
                int *l_1125 = (void*)0;
                int *l_1126 = &l_735;
                int *l_1127 = &g_971;
                int *l_1128 = &l_847;
                int *l_1129 = &l_982;
                int *l_1130 = (void*)0;
                int *l_1131 = &l_1018;
                int *l_1132 = &l_768;
                int *l_1133 = (void*)0;
                int *l_1134 = &l_899;
                int *l_1135 = &l_899;
                int *l_1136 = &l_727;
                int *l_1137 = &l_847;
                int *l_1138 = &l_1011;
                int *l_1139 = &l_959;
                int *l_1140 = &l_873;
                int *l_1141 = &l_982;
                int *l_1142 = &l_873;
                int *l_1143 = &l_873;
                int *l_1144 = &g_210;
                int *l_1145 = &l_772;
                int *l_1146 = &l_768;
                int *l_1147 = &g_111;
                int *l_1148 = &g_111;
                int *l_1149 = &l_735;
                int *l_1150 = &g_971;
                int *l_1151 = &g_971;
                int *l_1152 = &l_993;
                int *l_1153 = (void*)0;
                int *l_1154 = &l_959;
                int *l_1155 = (void*)0;
                int *l_1156 = &l_727;
                int *l_1157 = &g_111;
                if (((*g_71) = ((((safe_sub_func_uint32_t_u_u(5UL, (*g_71))) < ((*l_829) |= g_406)) ^ (safe_div_func_uint8_t_u_u(((((g_65 != l_832) != ((safe_div_func_uint8_t_u_u((g_430 >= (0x97L || func_26(l_829, g_542, g_210))), p_13)) || p_16)) == p_13) < (-1L)), 246UL))) | 0x6A2BL)))
                {
                    return g_175;
                }
                else
                {
                    char l_839 = (-1L);
                    int l_840 = 8L;
                    unsigned l_876 = 0x89D009ECL;
                    int l_995 = (-9L);
                    int l_1002 = 2L;
                    if (((((*l_808) = l_835) == (l_837 = (g_836 = &g_71))) ^ g_545))
                    {
                        (*l_837) = (*g_836);
                        return g_373;
                    }
                    else
                    {
                        int *l_842 = &l_733;
                        int *l_843 = (void*)0;
                        int *l_844 = (void*)0;
                        int *l_845 = &l_768;
                        int *l_846 = &l_697;
                        int *l_848 = &l_768;
                        int *l_849 = &g_111;
                        int *l_850 = &l_772;
                        int *l_851 = &l_847;
                        int *l_852 = (void*)0;
                        int *l_853 = &l_735;
                        int *l_854 = &l_735;
                        int *l_855 = &l_841;
                        int *l_856 = (void*)0;
                        int *l_857 = &l_733;
                        int *l_858 = &l_735;
                        int *l_859 = (void*)0;
                        int l_860 = 1L;
                        int *l_861 = &l_768;
                        int *l_862 = &l_768;
                        int *l_863 = &l_860;
                        int *l_864 = &l_697;
                        int *l_865 = &l_841;
                        int *l_866 = &l_841;
                        int *l_867 = (void*)0;
                        int *l_868 = (void*)0;
                        int *l_870 = &l_772;
                        int *l_871 = &l_733;
                        int *l_872 = &l_733;
                        int *l_874 = &l_727;
                        int *l_875 = &l_697;
                        int *l_879 = &l_840;
                        int *l_880 = &l_841;
                        int *l_881 = (void*)0;
                        int *l_882 = &l_697;
                        int *l_883 = &l_733;
                        int *l_884 = (void*)0;
                        int *l_885 = &g_111;
                        int *l_886 = &l_847;
                        int *l_887 = (void*)0;
                        int *l_888 = &l_768;
                        int *l_889 = (void*)0;
                        int *l_890 = (void*)0;
                        int *l_891 = &g_111;
                        int *l_892 = &g_72;
                        int *l_893 = &l_832;
                        int *l_894 = (void*)0;
                        int *l_895 = &l_832;
                        int l_896 = 0x99489F1CL;
                        int *l_897 = &g_210;
                        int *l_898 = &g_111;
                        int *l_900 = &l_832;
                        int *l_901 = &l_727;
                        int *l_902 = (void*)0;
                        int *l_903 = &l_733;
                        int *l_904 = (void*)0;
                        int *l_905 = &l_840;
                        int *l_906 = &l_869;
                        int *l_908 = &l_727;
                        int *l_909 = &l_733;
                        int *l_910 = &l_832;
                        int l_911 = (-1L);
                        int *l_912 = &l_911;
                        int *l_913 = &l_772;
                        int *l_914 = &g_210;
                        int *l_915 = (void*)0;
                        int *l_916 = &l_735;
                        int *l_917 = (void*)0;
                        int *l_918 = (void*)0;
                        int *l_919 = &l_896;
                        int *l_920 = &l_840;
                        int *l_921 = &g_72;
                        int *l_922 = (void*)0;
                        int *l_923 = &l_772;
                        int *l_924 = &l_896;
                        int *l_925 = &l_899;
                        int *l_926 = &l_873;
                        int *l_927 = (void*)0;
                        int *l_928 = &l_772;
                        int *l_929 = (void*)0;
                        int l_930 = 0L;
                        int *l_931 = &l_840;
                        int *l_933 = (void*)0;
                        int *l_934 = &l_911;
                        int *l_935 = &l_832;
                        int *l_936 = (void*)0;
                        int *l_937 = &l_907;
                        int *l_938 = &l_896;
                        int *l_939 = &l_899;
                        int *l_940 = (void*)0;
                        int *l_941 = &l_697;
                        int *l_942 = &l_860;
                        int *l_943 = &l_841;
                        int *l_944 = &g_111;
                        int *l_945 = (void*)0;
                        int *l_946 = (void*)0;
                        int *l_947 = &l_840;
                        int *l_948 = (void*)0;
                        int *l_949 = &l_768;
                        int *l_950 = &l_907;
                        int *l_951 = (void*)0;
                        int *l_952 = &l_832;
                        int *l_953 = &l_932;
                        int *l_954 = (void*)0;
                        int *l_955 = &l_860;
                        int *l_956 = &l_847;
                        int *l_957 = &l_869;
                        int *l_958 = &l_727;
                        int *l_960 = (void*)0;
                        int *l_961 = &l_768;
                        int *l_962 = &l_869;
                        int *l_963 = &g_72;
                        int *l_964 = (void*)0;
                        int *l_965 = &l_840;
                        int *l_966 = (void*)0;
                        int *l_967 = (void*)0;
                        int *l_968 = &l_907;
                        int *l_969 = &l_847;
                        int *l_970 = &l_697;
                        int *l_972 = &l_873;
                        int *l_973 = &l_832;
                        int *l_974 = &g_210;
                        int *l_975 = &l_832;
                        int *l_976 = &l_733;
                        int *l_977 = (void*)0;
                        int *l_978 = &l_727;
                        int *l_979 = &l_768;
                        int *l_980 = &g_210;
                        int *l_981 = &l_768;
                        int *l_983 = &g_111;
                        int *l_984 = (void*)0;
                        int *l_985 = &l_959;
                        int *l_986 = &l_982;
                        int *l_987 = &l_768;
                        int *l_989 = (void*)0;
                        int *l_990 = &l_982;
                        int *l_991 = &l_860;
                        int l_992 = 1L;
                        int *l_994 = &l_911;
                        int *l_996 = &g_72;
                        int *l_997 = &l_697;
                        int *l_998 = &l_841;
                        int *l_999 = &l_860;
                        int *l_1000 = &l_899;
                        int *l_1001 = &l_930;
                        int *l_1003 = (void*)0;
                        int *l_1004 = &l_772;
                        int *l_1005 = (void*)0;
                        int *l_1006 = (void*)0;
                        int *l_1007 = &l_982;
                        int *l_1008 = (void*)0;
                        int *l_1009 = &l_768;
                        int *l_1010 = (void*)0;
                        int *l_1012 = &l_932;
                        int *l_1013 = (void*)0;
                        int *l_1014 = &l_992;
                        int *l_1015 = &l_988;
                        int *l_1016 = &l_847;
                        int *l_1017 = &l_768;
                        l_838 = func_37(g_210);
                        l_876--;
                        ++l_1019;
                    }
                }
                (*l_837) = &l_869;
                for (l_698 = 0; (l_698 >= 38); l_698 = safe_add_func_uint8_t_u_u(l_698, 2))
                {
                    int *l_1024 = &l_841;
                    int l_1033 = 0x62847544L;
                    int l_1058 = 0x5BB88A62L;
                    int l_1094 = 3L;
                    unsigned short l_1107 = 0x999FL;
                    int *l_1110 = (void*)0;
                    int *l_1111 = &l_772;
                    if (((0x877840F4L & (*g_71)) >= (*g_189)))
                    {
                        unsigned l_1030 = 4294967295UL;
                        int **l_1035 = &l_1024;
                        (*g_836) = l_1024;
                        l_1033 &= (safe_add_func_int32_t_s_s((!(g_210 = (safe_sub_func_uint32_t_u_u((l_1029 != &l_825), (((*g_71) = l_847) && (g_642 || l_1030)))))), (g_190 != p_15)));
                        (*g_71) |= ((void*)0 != l_1034);
                        (*l_1035) = ((*g_836) = (*g_836));
                    }
                    else
                    {
                        int *l_1036 = &l_932;
                        int *l_1037 = &l_841;
                        int *l_1038 = (void*)0;
                        int *l_1039 = &l_982;
                        int *l_1040 = (void*)0;
                        int *l_1041 = &l_993;
                        int *l_1042 = &l_832;
                        int *l_1043 = (void*)0;
                        int *l_1044 = &l_993;
                        int *l_1045 = &l_869;
                        int *l_1046 = &l_932;
                        int *l_1047 = &l_869;
                        int *l_1048 = &g_210;
                        int *l_1049 = &g_72;
                        int *l_1050 = &l_733;
                        int *l_1051 = (void*)0;
                        int *l_1052 = &g_971;
                        int *l_1053 = (void*)0;
                        int *l_1054 = &l_768;
                        int *l_1055 = &l_907;
                        int *l_1056 = &l_1033;
                        int *l_1057 = &l_873;
                        int *l_1059 = &l_768;
                        int *l_1060 = &g_111;
                        int *l_1061 = &l_907;
                        int l_1062 = 0L;
                        int *l_1063 = &l_869;
                        int *l_1064 = &l_1062;
                        int *l_1065 = &l_727;
                        int *l_1066 = &l_1011;
                        int *l_1067 = &l_1062;
                        int *l_1068 = &l_772;
                        int *l_1069 = &l_1011;
                        int *l_1070 = &l_1018;
                        int *l_1071 = (void*)0;
                        int *l_1072 = &l_772;
                        int *l_1073 = &l_1033;
                        int *l_1074 = &l_832;
                        int *l_1075 = &l_1062;
                        int *l_1076 = (void*)0;
                        int *l_1077 = &l_993;
                        int *l_1078 = &l_847;
                        int *l_1079 = &g_111;
                        int *l_1080 = &l_733;
                        int *l_1081 = (void*)0;
                        int *l_1082 = &l_772;
                        int *l_1083 = &l_932;
                        int *l_1084 = &l_697;
                        int *l_1085 = &l_735;
                        int *l_1086 = &l_1062;
                        int *l_1087 = (void*)0;
                        int *l_1088 = &g_210;
                        int *l_1089 = &l_993;
                        int *l_1090 = &l_697;
                        int *l_1091 = &l_899;
                        int *l_1092 = &l_993;
                        int *l_1093 = &l_932;
                        int *l_1095 = &l_1018;
                        int *l_1096 = (void*)0;
                        int *l_1097 = (void*)0;
                        int *l_1098 = &l_1011;
                        g_1099++;
                    }
                    l_727 ^= (~(~(safe_rshift_func_uint16_t_u_u(l_841, (safe_mul_func_int8_t_s_s((((l_1106 = (-4L)) <= (+func_39(&p_13))) <= (-10L)), l_1107))))));
                    (*l_1111) = ((*l_1024) = (p_14 == (safe_mod_func_uint8_t_u_u(0x2FL, p_15))));
                }
                g_1158--;
            }
            else
            {
                short **l_1166 = (void*)0;
                short **l_1167 = &l_1165;
                short *l_1168 = (void*)0;
                short *l_1169 = &g_502;
                int l_1235 = 0xDB90DF77L;
                unsigned char **l_1249 = &l_705;
                (*g_71) = ((0x5073L && (!p_14)) >= (0x08E3L | ((*l_1169) = (safe_mul_func_uint8_t_u_u((((*l_1167) = l_1165) == (void*)0), g_70)))));
                (*g_71) ^= l_1170;
                for (l_993 = 20; (l_993 <= (-5)); l_993--)
                {
                    int l_1173 = (-5L);
                    int *l_1174 = &l_988;
                    int *l_1175 = &g_111;
                    int *l_1176 = &l_733;
                    int *l_1177 = (void*)0;
                    int *l_1178 = &l_959;
                    int *l_1179 = &l_772;
                    int *l_1180 = (void*)0;
                    int *l_1181 = &g_72;
                    int *l_1182 = &l_733;
                    int *l_1183 = (void*)0;
                    int *l_1184 = &l_735;
                    int *l_1185 = &l_932;
                    int *l_1186 = &l_727;
                    int *l_1187 = &l_733;
                    int *l_1188 = &l_697;
                    int *l_1189 = &l_733;
                    int *l_1190 = &l_768;
                    int *l_1191 = &g_111;
                    int *l_1192 = &l_959;
                    int *l_1193 = &l_1011;
                    int l_1194 = 0L;
                    int *l_1195 = &g_111;
                    int *l_1196 = &g_971;
                    int *l_1197 = &g_72;
                    int *l_1198 = &l_735;
                    int *l_1199 = (void*)0;
                    int *l_1200 = &l_1194;
                    int *l_1201 = &l_727;
                    int *l_1202 = &l_727;
                    int *l_1203 = (void*)0;
                    int *l_1204 = &l_988;
                    int *l_1205 = &l_982;
                    int *l_1206 = &l_768;
                    int *l_1207 = (void*)0;
                    int *l_1208 = &l_772;
                    int *l_1209 = &l_1011;
                    int *l_1210 = (void*)0;
                    int *l_1211 = &g_210;
                    int *l_1212 = &g_72;
                    int *l_1213 = &l_772;
                    int *l_1214 = &l_899;
                    int *l_1215 = &l_959;
                    int *l_1216 = &l_982;
                    int *l_1217 = &l_982;
                    int *l_1218 = &l_1011;
                    int *l_1219 = &l_733;
                    int *l_1220 = &l_1011;
                    int *l_1221 = &l_772;
                    int l_1222 = 0xD240F8B7L;
                    int *l_1223 = &l_1222;
                    int *l_1224 = &g_111;
                    int *l_1225 = (void*)0;
                    int *l_1226 = &l_1194;
                    int *l_1227 = &l_1222;
                    int *l_1228 = (void*)0;
                    int *l_1229 = &l_735;
                    int *l_1230 = &l_907;
                    int *l_1231 = &l_1011;
                    int *l_1232 = &l_768;
                    int *l_1234 = (void*)0;
                    int *l_1236 = &l_1194;
                    int *l_1237 = &l_1194;
                    int *l_1238 = &l_772;
                    int *l_1239 = &l_768;
                    int *l_1240 = (void*)0;
                    g_1241--;
                }
                for (l_899 = (-13); (l_899 == (-25)); --l_899)
                {
                    int *l_1246 = (void*)0;
                    (*l_837) = l_1246;
                    for (g_326 = (-20); (g_326 >= 17); ++g_326)
                    {
                        (*g_71) = p_14;
                    }
                    (*g_71) = (l_1249 == (void*)0);
                }
            }
            (*l_1251) ^= ((*l_1250) = 0x429C9028L);
            (*l_837) = func_43(p_16, &l_907, (p_13 && (g_1233 || (safe_add_func_int16_t_s_s((-6L), (l_1254 != l_1255))))), p_16, (*l_1029));
            l_1256 = ((*l_837) = &l_899);
        }
        g_1327--;
    }
    else
    {
        return p_14;
    }
    l_1344 |= p_13;
    (*l_1345) |= p_13;
    return g_304;
}







static short func_23(unsigned char p_24, short p_25)
{
    int *l_572 = &g_2;
    char *l_574 = (void*)0;
    int *l_575 = &g_72;
    int *l_576 = &g_72;
    int l_577 = 0L;
    int *l_578 = &g_72;
    int *l_579 = (void*)0;
    int *l_580 = (void*)0;
    int *l_581 = (void*)0;
    int *l_582 = &g_210;
    int l_583 = 0xBAFA6F5BL;
    int *l_584 = (void*)0;
    int *l_585 = (void*)0;
    int *l_586 = &g_111;
    int *l_587 = (void*)0;
    int *l_588 = &g_72;
    int *l_589 = &g_210;
    int l_590 = 0x4974D66FL;
    int *l_591 = &g_111;
    int *l_592 = &g_210;
    int *l_593 = &g_111;
    int *l_594 = &l_590;
    int *l_595 = (void*)0;
    int *l_596 = &g_111;
    int *l_597 = &l_583;
    int *l_598 = &l_583;
    int *l_599 = &l_577;
    int l_600 = 0xD83A05EEL;
    int *l_601 = &l_577;
    int l_602 = 0x5B063380L;
    int *l_603 = &l_590;
    int *l_604 = &g_111;
    int *l_605 = &l_602;
    int *l_606 = (void*)0;
    int l_607 = 0x83CD128AL;
    int *l_608 = &l_590;
    int *l_609 = &l_583;
    int *l_610 = &l_590;
    int *l_611 = &g_111;
    int *l_612 = &l_600;
    int *l_613 = (void*)0;
    int *l_614 = (void*)0;
    int *l_615 = &g_210;
    int *l_616 = &g_210;
    int *l_617 = &l_602;
    int l_618 = 6L;
    int *l_619 = &l_607;
    int *l_620 = (void*)0;
    int *l_621 = &l_618;
    int *l_622 = &l_600;
    int *l_623 = (void*)0;
    int *l_624 = &g_210;
    int *l_625 = &l_600;
    int *l_626 = (void*)0;
    int *l_627 = (void*)0;
    int *l_628 = (void*)0;
    int l_629 = 0xB459C849L;
    int *l_630 = &l_577;
    int *l_631 = (void*)0;
    int *l_632 = (void*)0;
    int *l_633 = &g_72;
    int *l_634 = &g_72;
    int *l_635 = &l_629;
    short l_636 = (-1L);
    int *l_638 = &l_629;
    int *l_639 = &l_577;
    int l_640 = 0xBAADCFEEL;
    int *l_641 = &g_210;
    int *l_643 = &l_590;
    int *l_644 = (void*)0;
    int *l_645 = &l_602;
    int *l_646 = (void*)0;
    int *l_647 = &l_629;
    int *l_648 = &l_640;
    int *l_650 = &l_629;
    int *l_651 = &l_618;
    int *l_652 = &l_600;
    int *l_653 = &l_618;
    int *l_654 = &l_618;
    int *l_655 = &l_583;
    int *l_656 = &g_210;
    int *l_657 = &l_618;
    int *l_658 = &l_600;
    int *l_659 = &g_210;
    int l_660 = (-10L);
    int *l_661 = &l_660;
    int *l_662 = &l_640;
    int *l_663 = &l_583;
    int *l_664 = &g_72;
    int *l_665 = &l_590;
    int *l_666 = &l_618;
    int *l_667 = &l_618;
    int *l_668 = &g_111;
    int *l_669 = (void*)0;
    int *l_670 = &g_111;
    int l_671 = 0x2AB5C4E9L;
    int *l_672 = &l_607;
    int *l_673 = &l_671;
    int *l_674 = &l_640;
    int l_675 = 1L;
    int *l_676 = &g_111;
    int *l_677 = &l_577;
    int *l_678 = (void*)0;
    int *l_679 = &l_577;
    char **l_684 = &g_189;
    char ***l_683 = &l_684;
    for (g_215 = 0; (g_215 == 46); g_215 = safe_add_func_uint16_t_u_u(g_215, 1))
    {
        int *l_570 = &g_111;
        int **l_571 = &g_71;
        int *l_573 = &g_72;
        (*l_571) = l_570;
        (*l_571) = (*l_571);
        (*l_571) = func_43(g_365, func_43((*l_570), l_572, (*l_572), ((*l_573) = (*g_71)), &g_314), g_70, (*g_71), l_574);
    }
    ++g_680;
    (*l_683) = &l_574;
    if ((g_107 != ((~func_39(&g_188)) >= (safe_add_func_uint16_t_u_u(((*g_71) > (safe_mul_func_uint8_t_u_u(p_25, (*g_189)))), (*l_633))))))
    {
        int **l_689 = &l_582;
        (*l_689) = &l_671;
    }
    else
    {
        unsigned short l_690 = 0x4E3FL;
        l_690++;
    }
    return p_25;
}







static unsigned char func_26(unsigned short * p_27, unsigned char p_28, unsigned char p_29)
{
    int **l_384 = &g_71;
    int ***l_385 = (void*)0;
    int ***l_386 = &l_384;
    int l_421 = 0xEDBB1F5CL;
    int l_459 = (-1L);
    char **l_499 = (void*)0;
    (*l_386) = l_384;
    for (g_111 = (-3); (g_111 == 21); ++g_111)
    {
        unsigned l_389 = 0x05CABCBAL;
        int l_391 = 9L;
        int l_404 = 0xFCE9AB82L;
        char *l_452 = &g_188;
        char *l_471 = &g_304;
        int *l_473 = &g_72;
        int l_548 = 0x584E0663L;
    }
    return (**l_384);
}







static unsigned short * func_30(char p_31)
{
    int **l_381 = (void*)0;
    int ***l_380 = &l_381;
    unsigned short *l_382 = &g_135;
    (*g_71) = (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_s((((*l_380) = &g_71) == &g_71), 2))));
    return l_382;
}







static unsigned char func_37(unsigned p_38)
{
    char l_49 = 0L;
    int *l_61 = &g_2;
    short *l_64 = &g_65;
    char *l_66 = &g_67;
    char *l_68 = (void*)0;
    char *l_69 = &g_70;
    int **l_376 = &g_71;
    (*l_376) = func_43(l_49, func_50((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(func_39(&l_49), 7)), ((*l_69) = ((*l_66) ^= (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*l_64) |= (g_2 <= ((safe_unary_minus_func_int8_t_s(((&g_2 != l_61) < ((safe_mod_func_int16_t_s_s(p_38, p_38)) != p_38)))) > (*l_61)))), (*l_61))), 5UL))))))), (*l_61), p_38, &g_190);
    (*g_71) = (*g_71);
    return g_215;
}







static unsigned char func_39(char * p_40)
{
    unsigned char l_41 = 0UL;
    g_42 = l_41;
    return g_2;
}







static int * func_43(int p_44, int * p_45, short p_46, int p_47, char * p_48)
{
    int *l_218 = &g_210;
    int *l_219 = &g_72;
    int *l_220 = &g_111;
    int *l_221 = &g_72;
    int *l_222 = &g_111;
    int *l_223 = (void*)0;
    int *l_224 = &g_72;
    int *l_225 = &g_111;
    int *l_226 = &g_72;
    int *l_227 = (void*)0;
    int *l_228 = &g_210;
    int *l_229 = &g_210;
    int *l_230 = &g_111;
    int *l_231 = &g_210;
    int *l_232 = &g_210;
    int *l_233 = (void*)0;
    int *l_234 = (void*)0;
    int *l_235 = (void*)0;
    int *l_236 = &g_210;
    int *l_237 = (void*)0;
    int *l_238 = &g_210;
    int *l_239 = (void*)0;
    int *l_240 = &g_72;
    int *l_241 = (void*)0;
    int *l_242 = &g_72;
    int *l_243 = &g_72;
    int *l_244 = &g_210;
    int *l_245 = &g_72;
    int l_246 = (-1L);
    int *l_247 = &g_72;
    int *l_248 = &g_111;
    int *l_249 = &g_111;
    int *l_250 = &g_111;
    int *l_251 = &g_210;
    int *l_252 = (void*)0;
    int *l_253 = &g_210;
    int *l_254 = &g_72;
    int *l_255 = &g_72;
    int l_256 = 0x38516734L;
    int l_257 = 0L;
    int *l_258 = &g_111;
    int l_259 = 0L;
    int *l_260 = &l_257;
    int *l_261 = (void*)0;
    int *l_262 = &l_259;
    int *l_263 = &g_210;
    int *l_264 = &g_210;
    int *l_265 = &g_210;
    int *l_266 = &l_259;
    int *l_267 = (void*)0;
    int *l_268 = &l_256;
    int *l_269 = &g_111;
    int *l_270 = &g_72;
    int *l_272 = &g_111;
    int l_273 = (-10L);
    int *l_274 = &l_246;
    int *l_275 = &g_210;
    int *l_276 = (void*)0;
    int *l_277 = (void*)0;
    int *l_278 = &l_257;
    int *l_279 = &l_256;
    int *l_280 = &g_72;
    int *l_281 = &l_246;
    int *l_283 = &l_246;
    int *l_284 = &l_273;
    int *l_285 = &l_273;
    int l_286 = 0x5596EFE9L;
    int *l_287 = &g_72;
    int l_288 = (-1L);
    int *l_289 = &g_72;
    int l_290 = 0xE5F14FE5L;
    int *l_291 = &l_257;
    int *l_292 = &l_246;
    int *l_293 = &l_273;
    int *l_294 = &l_273;
    int *l_295 = (void*)0;
    int *l_296 = &l_257;
    int l_297 = 0L;
    int *l_298 = (void*)0;
    int *l_299 = &g_210;
    int *l_300 = (void*)0;
    int *l_301 = (void*)0;
    int *l_302 = (void*)0;
    int *l_303 = &l_256;
    int l_305 = 0xAE705E6AL;
    int *l_306 = &l_273;
    int *l_307 = &g_210;
    int l_308 = (-5L);
    int l_310 = 0L;
    int *l_311 = &g_111;
    int *l_312 = &l_256;
    int *l_313 = &l_308;
    int *l_315 = &g_111;
    int *l_316 = &l_310;
    int l_317 = 1L;
    int *l_318 = &l_256;
    int *l_319 = &l_286;
    int *l_320 = &l_259;
    int *l_321 = &l_286;
    int *l_322 = &l_288;
    int *l_324 = &l_273;
    int *l_325 = &l_290;
    int *l_327 = (void*)0;
    int *l_328 = &l_305;
    int *l_329 = &l_246;
    int *l_330 = &l_308;
    int *l_331 = (void*)0;
    int *l_332 = &l_259;
    int l_333 = 0x41292671L;
    int *l_334 = &l_259;
    int *l_335 = &g_111;
    int *l_336 = &l_256;
    int *l_337 = &l_290;
    int *l_338 = &g_72;
    int l_339 = 3L;
    int *l_340 = (void*)0;
    int *l_341 = &l_257;
    int *l_342 = &l_256;
    int *l_343 = (void*)0;
    int *l_344 = &l_308;
    int *l_345 = &l_288;
    int *l_346 = &l_317;
    int *l_347 = &l_256;
    int l_348 = (-9L);
    int *l_349 = &l_308;
    int l_350 = 0x62DD0B5AL;
    int *l_351 = &l_317;
    int *l_352 = &g_72;
    int *l_353 = &l_339;
    int *l_354 = &l_273;
    int l_355 = (-6L);
    int *l_356 = &l_286;
    int *l_358 = &l_333;
    int *l_359 = &l_290;
    int *l_360 = &l_286;
    int *l_361 = &l_305;
    int *l_362 = &l_273;
    int *l_363 = (void*)0;
    int *l_364 = &l_290;
    int *l_366 = &l_256;
    int *l_367 = &l_246;
    int *l_368 = &l_355;
    int *l_369 = &l_288;
    int *l_370 = &g_210;
    int *l_371 = (void*)0;
    int *l_372 = &l_350;
    ++g_373;
    return &g_72;
}







static int * func_50(unsigned p_51)
{
    int *l_73 = &g_2;
    int **l_74 = &l_73;
    int l_75 = 8L;
    int *l_76 = &g_72;
    int *l_77 = (void*)0;
    int *l_78 = &g_72;
    int *l_79 = &g_72;
    int *l_80 = &g_72;
    int *l_81 = &g_72;
    int *l_82 = &g_72;
    int l_83 = 0x200138D7L;
    int *l_84 = &l_75;
    int *l_85 = &g_72;
    int *l_86 = (void*)0;
    int *l_87 = (void*)0;
    int *l_88 = &l_83;
    int *l_89 = &l_83;
    int *l_90 = &l_83;
    int *l_91 = &g_72;
    int *l_92 = &l_75;
    int l_93 = 0xBF646D91L;
    int *l_94 = &g_72;
    int *l_95 = &l_83;
    int l_96 = 0L;
    int l_97 = 0x53A6575EL;
    int *l_98 = (void*)0;
    int l_99 = 1L;
    int *l_100 = (void*)0;
    int *l_101 = &l_99;
    int *l_102 = &l_75;
    int *l_103 = &g_72;
    int *l_104 = &l_96;
    int *l_105 = &l_96;
    int *l_106 = &l_97;
    int *l_109 = &l_96;
    int *l_110 = &l_96;
    int *l_112 = (void*)0;
    int *l_113 = &l_93;
    int *l_114 = &l_97;
    int *l_115 = &g_111;
    int *l_116 = &g_111;
    int *l_117 = &l_75;
    int l_118 = (-1L);
    int *l_119 = &l_83;
    int *l_120 = (void*)0;
    int *l_121 = (void*)0;
    int l_122 = 0x18DE77BFL;
    int *l_123 = (void*)0;
    int *l_124 = &l_97;
    int *l_125 = &l_83;
    int *l_126 = &l_118;
    int *l_127 = (void*)0;
    int *l_128 = &l_122;
    int *l_129 = &l_75;
    int *l_130 = (void*)0;
    int l_131 = 0L;
    int l_132 = (-1L);
    int *l_133 = (void*)0;
    int *l_134 = &l_99;
    unsigned l_142 = 4294967292UL;
    unsigned short l_194 = 0xB913L;
    int *l_198 = &l_122;
    short l_209 = 0xB33BL;
    g_71 = &g_2;
    (*l_74) = l_73;
    g_135++;
    if ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(p_51, g_107)) && l_142), 7)))
    {
        unsigned char *l_145 = &g_42;
        int **l_158 = &l_133;
        int l_193 = 0xCD17E59DL;
        (*l_110) &= (safe_div_func_int8_t_s_s(((*l_88) < (--(*l_145))), (((safe_rshift_func_int16_t_s_s(g_67, 13)) > (safe_lshift_func_int16_t_s_s(g_152, g_152))) & p_51)));
        for (l_75 = 0; (l_75 > 9); l_75 = safe_add_func_int8_t_s_s(l_75, 9))
        {
            int *l_156 = &l_75;
            char *l_163 = &g_67;
            if (func_39(&g_70))
            {
                (*l_74) = &g_111;
            }
            else
            {
                int **l_155 = &l_95;
                int ***l_157 = &l_74;
                unsigned l_184 = 4294967286UL;
                unsigned char l_195 = 0UL;
                (*l_155) = ((*l_74) = (void*)0);
                (*l_74) = l_156;
                if ((((*l_157) = &g_71) == l_158))
                {
                    for (l_122 = 4; (l_122 <= 0); --l_122)
                    {
                        short *l_164 = (void*)0;
                        char **l_165 = &l_163;
                        int l_168 = 2L;
                        g_71 = &g_72;
                        (*g_71) |= ((*l_119) = (safe_lshift_func_uint16_t_u_s(g_135, func_39(l_163))));
                        (*l_105) = (l_164 == &g_65);
                        g_175 |= (p_51 | ((*l_145) = (((***l_157) ^ (((func_39(((*l_165) = (void*)0)) > (safe_mul_func_uint16_t_u_u((l_168 ^ (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((p_51 > p_51) && (safe_sub_func_uint32_t_u_u((*l_156), (g_111 == 0x77L)))), p_51)), 3))), (*l_134)))) <= p_51) <= 65535UL)) <= p_51)));
                    }
                    for (p_51 = 0; (p_51 < 36); ++p_51)
                    {
                        (**l_157) = l_156;
                        (*l_88) = p_51;
                        if ((*g_71))
                            continue;
                    }
                    for (g_72 = 0; (g_72 < 2); ++g_72)
                    {
                        char *l_185 = &g_67;
                        char *l_186 = &g_70;
                        char *l_187 = &g_188;
                        (*l_119) |= (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(p_51, 0)), p_51));
                        (*l_109) = (((*l_187) ^= ((*l_186) |= ((*l_185) |= (g_108 >= (l_184 | ((*l_74) != (void*)0)))))) & func_39(g_189));
                        (*l_115) = (safe_mul_func_int8_t_s_s(l_193, l_194));
                    }
                }
                else
                {
                    int *l_199 = (void*)0;
                    l_195--;
                    if (p_51)
                        continue;
                    (**l_157) = (void*)0;
                    return l_199;
                }
            }
            if (p_51)
                continue;
            (*l_158) = (void*)0;
        }
        (*l_158) = &g_2;
        (*l_79) |= p_51;
    }
    else
    {
        unsigned l_205 = 0x587EAAD8L;
        int l_208 = 0L;
        short l_211 = (-3L);
        int l_212 = 0x21F8CFEEL;
        int l_213 = 4L;
        int l_214 = 1L;
        for (l_142 = 27; (l_142 < 42); l_142 = safe_add_func_uint8_t_u_u(l_142, 9))
        {
            for (g_175 = 8; (g_175 < 57); g_175 = safe_add_func_int16_t_s_s(g_175, 1))
            {
                int **l_204 = &l_80;
                (*l_204) = ((*l_74) = &g_111);
            }
            (*l_74) = &g_2;
            l_205--;
        }
        g_215++;
    }
    return &g_72;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_545, "g_545", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_971, "g_971", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1233, "g_1233", print_hash_value);
    transparent_crc(g_1241, "g_1241", print_hash_value);
    transparent_crc(g_1301, "g_1301", print_hash_value);
    transparent_crc(g_1315, "g_1315", print_hash_value);
    transparent_crc(g_1327, "g_1327", print_hash_value);
    transparent_crc(g_1443, "g_1443", print_hash_value);
    transparent_crc(g_1452, "g_1452", print_hash_value);
    transparent_crc(g_1488, "g_1488", print_hash_value);
    transparent_crc(g_1529, "g_1529", print_hash_value);
    transparent_crc(g_1539, "g_1539", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
