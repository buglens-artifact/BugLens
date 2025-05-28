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



static int g_5 = 5L;
static int g_59 = (-2L);
static int * volatile g_58 = &g_59;
static int * volatile g_63 = (void*)0;
static int g_76 = 0x83361826L;
static int * volatile g_75 = &g_76;
static int * volatile g_91 = &g_76;
static int g_110 = 0xA925521BL;
static int * volatile g_115 = &g_59;
static int * volatile g_120 = &g_110;
static volatile unsigned g_243 = 0xA696F640L;
static volatile unsigned g_570 = 1UL;
static short g_726 = 1L;
static volatile unsigned char g_739 = 0x96L;
static volatile unsigned g_920 = 4294967293UL;
static int *g_1001 = &g_110;
static volatile int g_1177 = 0xFC89A1FAL;
static short g_1180 = 0x3F73L;
static volatile int g_1191 = 0xE55EDE5FL;
static volatile int g_1214 = 2L;
static volatile unsigned g_1245 = 0UL;
static volatile unsigned char g_1369 = 0x2CL;
static volatile int g_1388 = 0x1F27884BL;
static volatile int * volatile g_1387 = &g_1388;
static volatile int * volatile * volatile g_1386 = &g_1387;
static volatile int * volatile * volatile *g_1385 = &g_1386;
static int ** volatile g_1433 = &g_1001;
static int ** volatile g_1434 = &g_1001;
static volatile unsigned short g_1660 = 0UL;
static int * volatile g_1664 = &g_110;
static volatile unsigned g_1945 = 0x840E3108L;
static int ** volatile g_1963 = &g_1001;
static int **g_1971 = (void*)0;
static int *** volatile g_1970 = &g_1971;
static unsigned g_1981 = 0x5CE88D1EL;
static int ** volatile g_1999 = &g_1001;
static short g_2003 = 0x9F7EL;



static unsigned func_1(void);
static int * func_2(char p_3, unsigned short p_4);
static unsigned short func_6(short p_7, unsigned short p_8, unsigned p_9, unsigned p_10, unsigned char p_11);
static int func_13(int * p_14, char p_15);
static int * func_17(int * p_18, unsigned p_19);
static int func_25(int * p_26, int * p_27);
static int * func_28(short p_29, unsigned short p_30, int * p_31, int * p_32);
static unsigned char func_35(int p_36, int p_37, unsigned char p_38, unsigned char p_39);
static unsigned char func_45(int * p_46, int * p_47);
static int * func_48(char p_49, unsigned p_50, unsigned char p_51, int * p_52);
static unsigned func_1(void)
{
    char l_12 = 0xA7L;
    int **l_2002 = &g_1001;
    (*l_2002) = func_2(g_5, func_6(g_5, l_12, g_5, g_5, g_5));
    return g_2003;
}







static int * func_2(char p_3, unsigned short p_4)
{
    int *l_2000 = &g_5;
    int *l_2001 = &g_5;
    (*l_2000) = func_35(g_1177, func_25(&g_59, &g_5), g_59, func_25(l_2000, &g_59));
    (*l_2000) = 0L;
    return l_2001;
}







static unsigned short func_6(short p_7, unsigned short p_8, unsigned p_9, unsigned p_10, unsigned char p_11)
{
    int *l_16 = &g_5;
    int l_1718 = 1L;
    int l_1894 = 0xBD3EA1F8L;
    int l_1897 = 0x3BD0E6F7L;
    int l_1994 = 0x151D8A29L;
    (*g_1664) = func_13(l_16, (*l_16));
    for (g_110 = 0; (g_110 < 11); g_110 = safe_add_func_int16_t_s_s(g_110, 8))
    {
        unsigned short l_1669 = 7UL;
        int **l_1673 = (void*)0;
        int l_1725 = 0x13B649EBL;
        int *l_1986 = &g_5;
        for (p_7 = (-24); (p_7 >= 17); p_7 = safe_add_func_uint32_t_u_u(p_7, 1))
        {
            int *l_1672 = &g_110;
            --l_1669;
            (*g_115) ^= func_25(l_1672, l_16);
            return g_920;
        }
        if (((g_1369 <= (&l_16 != l_1673)) || (g_1180 && 0xF0E91533L)))
        {
            int *l_1679 = &g_76;
            int l_1686 = 0L;
            int l_1899 = 1L;
            int *l_1957 = &l_1894;
            for (l_1669 = (-10); (l_1669 >= 12); l_1669 = safe_add_func_uint8_t_u_u(l_1669, 8))
            {
                int l_1762 = 0xB4637A17L;
                int l_1771 = 0xDA8CDEF5L;
                char l_1954 = 9L;
            }
        }
        else
        {
            unsigned short l_1966 = 0xEF63L;
            int **l_1969 = (void*)0;
            l_1966++;
            (*g_1970) = l_1969;
            for (l_1966 = (-12); (l_1966 <= 33); l_1966 = safe_add_func_int8_t_s_s(l_1966, 1))
            {
                return g_1191;
            }
        }
    }
    (***g_1385) = p_8;
    l_16 = &l_1894;
    return p_11;
}







static int func_13(int * p_14, char p_15)
{
    int l_20 = 0xBDF7CD95L;
    int *l_1435 = &g_59;
    int *l_1436 = &g_76;
    int *l_1437 = &l_20;
    int *l_1438 = &g_110;
    int *l_1439 = &g_110;
    int *l_1440 = &l_20;
    int *l_1441 = &g_110;
    int *l_1442 = (void*)0;
    int *l_1443 = &g_59;
    int *l_1444 = &l_20;
    int *l_1445 = (void*)0;
    int *l_1446 = &g_110;
    int *l_1447 = &g_76;
    int *l_1448 = (void*)0;
    int *l_1449 = &g_76;
    int *l_1450 = &g_110;
    int *l_1451 = (void*)0;
    int *l_1452 = &g_59;
    int *l_1453 = &g_59;
    int *l_1454 = &g_110;
    int *l_1455 = &g_59;
    int *l_1456 = &g_76;
    int *l_1457 = &g_76;
    int *l_1458 = &g_76;
    int *l_1459 = &g_59;
    int *l_1460 = (void*)0;
    int *l_1461 = (void*)0;
    int *l_1462 = &l_20;
    int *l_1463 = (void*)0;
    int *l_1464 = &g_76;
    int *l_1465 = &g_59;
    int *l_1466 = &g_76;
    int *l_1467 = &g_110;
    int *l_1468 = &l_20;
    int *l_1469 = &g_76;
    int *l_1470 = (void*)0;
    int *l_1471 = &l_20;
    int *l_1472 = &l_20;
    int l_1473 = 1L;
    int l_1474 = 1L;
    int *l_1475 = &l_1474;
    int *l_1476 = &g_59;
    int *l_1477 = &l_20;
    int *l_1478 = (void*)0;
    int *l_1479 = &l_1474;
    int *l_1480 = &l_20;
    int *l_1481 = &l_20;
    int *l_1482 = &g_59;
    int *l_1483 = &l_1473;
    int *l_1484 = (void*)0;
    int l_1485 = (-1L);
    int *l_1486 = (void*)0;
    int *l_1487 = &l_1474;
    int *l_1488 = &l_1473;
    int *l_1489 = (void*)0;
    int *l_1490 = &l_1474;
    int l_1491 = (-2L);
    int *l_1492 = &g_76;
    int *l_1493 = &g_59;
    int *l_1494 = &l_1485;
    int *l_1495 = &l_1474;
    int *l_1496 = &g_59;
    int *l_1497 = &l_1474;
    int l_1498 = 0xFB41EDC2L;
    int *l_1499 = &l_1491;
    int *l_1500 = (void*)0;
    int *l_1501 = &l_1473;
    int *l_1502 = &l_1485;
    int *l_1503 = &l_1491;
    int *l_1504 = &g_76;
    int *l_1505 = &l_1498;
    int *l_1506 = &g_59;
    int *l_1507 = &l_20;
    int *l_1508 = &g_110;
    int *l_1509 = &l_1491;
    int *l_1510 = &l_1485;
    int *l_1511 = &l_1473;
    int *l_1512 = (void*)0;
    int *l_1513 = &g_59;
    int *l_1514 = &l_1473;
    int *l_1515 = &l_1473;
    int l_1516 = 1L;
    int *l_1517 = &l_1516;
    int *l_1518 = &l_20;
    int l_1519 = 6L;
    int l_1520 = 9L;
    int *l_1521 = &l_1473;
    int l_1522 = 0x02E5AA8AL;
    int *l_1523 = &l_1516;
    int *l_1524 = &g_76;
    int *l_1525 = &l_1485;
    int *l_1526 = (void*)0;
    int *l_1527 = &g_110;
    int *l_1528 = (void*)0;
    int *l_1529 = &g_76;
    int *l_1530 = (void*)0;
    int *l_1531 = &l_1491;
    int *l_1532 = (void*)0;
    int *l_1533 = &l_1519;
    int l_1534 = (-5L);
    int *l_1535 = (void*)0;
    int *l_1536 = &l_1520;
    int *l_1537 = &l_1473;
    int *l_1538 = &l_1473;
    int l_1539 = 1L;
    int l_1540 = 0xD43B185DL;
    int *l_1541 = (void*)0;
    int *l_1542 = &l_20;
    int *l_1543 = &l_1520;
    int l_1544 = 0xABEB62E2L;
    int *l_1545 = &l_1522;
    int *l_1546 = &l_1522;
    int *l_1547 = (void*)0;
    int *l_1548 = &l_1485;
    int *l_1549 = (void*)0;
    int *l_1550 = &l_1544;
    int *l_1551 = &l_1544;
    int *l_1552 = &l_1519;
    int *l_1553 = &l_1540;
    int l_1554 = 0x86D3AFC4L;
    int l_1555 = 0x1826F55AL;
    int *l_1556 = &l_1474;
    int *l_1557 = (void*)0;
    int *l_1558 = &g_110;
    int *l_1559 = &l_1520;
    int *l_1560 = &l_1555;
    int *l_1561 = &l_1485;
    int l_1562 = 0x3D30D1E0L;
    int *l_1563 = &l_1562;
    int *l_1564 = &l_20;
    int *l_1565 = &l_1534;
    int *l_1566 = (void*)0;
    int l_1567 = 0xCB516D88L;
    int l_1568 = 1L;
    int *l_1569 = (void*)0;
    int *l_1570 = &l_1473;
    int *l_1571 = &l_1562;
    int *l_1572 = (void*)0;
    int *l_1573 = &l_1568;
    int *l_1574 = &l_20;
    int l_1575 = (-2L);
    int *l_1576 = &l_1568;
    int l_1577 = 0x5B25C877L;
    int *l_1578 = &l_1567;
    int *l_1579 = &l_1519;
    int *l_1580 = &g_76;
    int *l_1581 = &l_1540;
    int *l_1582 = &l_1519;
    int *l_1583 = &g_76;
    int *l_1584 = &l_1562;
    int *l_1585 = (void*)0;
    int *l_1586 = &g_76;
    int *l_1587 = &l_20;
    int *l_1588 = &l_1577;
    int *l_1589 = (void*)0;
    int l_1590 = 0x29C5AD8DL;
    int *l_1591 = &l_1485;
    int l_1592 = 0x07F08B5CL;
    int *l_1593 = &l_1485;
    int *l_1594 = (void*)0;
    int l_1595 = 0x7AAE5834L;
    int *l_1596 = (void*)0;
    int l_1597 = (-1L);
    int *l_1598 = (void*)0;
    int *l_1599 = &l_1516;
    int *l_1600 = (void*)0;
    int *l_1601 = (void*)0;
    int *l_1602 = &l_1498;
    char l_1603 = (-1L);
    int *l_1604 = &l_1568;
    int *l_1605 = &l_1567;
    int *l_1606 = &l_1567;
    int *l_1607 = &l_1554;
    int *l_1608 = &l_1592;
    int l_1609 = 0x43CEB0FCL;
    int *l_1610 = &l_1539;
    int *l_1611 = (void*)0;
    int *l_1612 = &l_1592;
    int l_1613 = 0xFED19D1AL;
    int *l_1614 = &l_1555;
    short l_1615 = (-8L);
    int l_1616 = 0x4D0C36B6L;
    int *l_1617 = (void*)0;
    int *l_1618 = (void*)0;
    int l_1619 = 0xC3E22D79L;
    int *l_1620 = &l_20;
    int l_1621 = 0xA05CB121L;
    int *l_1622 = &l_1577;
    int *l_1623 = &l_20;
    int *l_1624 = &l_1498;
    int *l_1625 = (void*)0;
    int *l_1626 = &l_1498;
    int *l_1627 = &l_1485;
    int *l_1628 = &l_1567;
    int *l_1629 = &l_1568;
    int *l_1630 = &l_1568;
    int *l_1631 = &l_1474;
    int *l_1632 = (void*)0;
    int *l_1633 = &g_59;
    int *l_1634 = &l_1609;
    int *l_1635 = &l_1540;
    int *l_1636 = &l_1567;
    int *l_1637 = &l_20;
    int *l_1638 = &l_1544;
    int *l_1639 = &l_1595;
    int *l_1640 = &l_1539;
    int l_1641 = 1L;
    int *l_1642 = &g_59;
    int *l_1643 = &g_59;
    int l_1644 = 2L;
    int l_1645 = 0x1A52B5AFL;
    int *l_1646 = (void*)0;
    int l_1647 = 0x4A5625F8L;
    int *l_1648 = &l_1534;
    int l_1649 = (-1L);
    int *l_1650 = &l_1616;
    int *l_1651 = &l_1641;
    int l_1652 = 7L;
    int l_1653 = 0x42870F1CL;
    int *l_1654 = &l_1653;
    int *l_1655 = &l_1555;
    int *l_1656 = &l_1473;
    int *l_1657 = (void*)0;
    int *l_1658 = &l_1485;
    int *l_1659 = &l_1516;
    unsigned char l_1663 = 0x98L;
    (*g_1434) = func_17(&g_5, l_20);
    (**g_1385) = (*g_1386);
    ++g_1660;
    return l_1663;
}







static int * func_17(int * p_18, unsigned p_19)
{
    unsigned short l_40 = 0x4CE3L;
    int *l_302 = (void*)0;
    char l_1432 = (-5L);
    (***g_1385) = (safe_mod_func_uint32_t_u_u((0x6FL && g_5), (((p_18 != (void*)0) == (safe_mod_func_int32_t_s_s(func_25(func_28((safe_lshift_func_uint8_t_u_u(g_5, func_35(l_40, (7UL == ((safe_sub_func_int8_t_s_s(0x8BL, (safe_lshift_func_int8_t_s_u((func_45(&g_5, &g_5) && g_76), l_40)))) && g_59)), p_19, p_19))), g_5, p_18, l_302), &g_5), l_40))) & l_1432)));
    (*g_1433) = l_302;
    return l_302;
}







static int func_25(int * p_26, int * p_27)
{
    int *l_1407 = &g_110;
    int *l_1408 = (void*)0;
    int *l_1409 = &g_76;
    int *l_1410 = &g_59;
    int *l_1411 = &g_110;
    int *l_1412 = &g_110;
    int *l_1413 = &g_76;
    int *l_1414 = &g_76;
    int *l_1415 = &g_110;
    int *l_1416 = (void*)0;
    int *l_1417 = &g_59;
    int *l_1418 = &g_76;
    int *l_1419 = &g_110;
    int *l_1420 = &g_76;
    int l_1421 = 0x5D61D811L;
    int *l_1422 = &g_76;
    int *l_1423 = &g_76;
    int *l_1424 = (void*)0;
    int *l_1425 = &g_59;
    int l_1426 = 0xC44D8147L;
    int l_1427 = 1L;
    int *l_1428 = &g_110;
    unsigned l_1429 = 0x1B45632CL;
    --l_1429;
    return (*p_27);
}







static int * func_28(short p_29, unsigned short p_30, int * p_31, int * p_32)
{
    unsigned l_306 = 0UL;
    int *l_308 = &g_59;
    int **l_307 = &l_308;
    int l_379 = 0L;
    int l_544 = 0L;
    int l_620 = (-5L);
    int l_657 = (-1L);
    int l_662 = 0xAD2AFDE5L;
    int l_697 = 0xA84310BBL;
    int **l_742 = &l_308;
    unsigned char l_948 = 0x7BL;
    int l_1196 = 0x8DC48BAFL;
    int l_1243 = (-1L);
    if ((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(l_306)), (!p_30))))
    {
        unsigned short l_326 = 0xDD9FL;
        int l_335 = 0xF08772C4L;
        int l_371 = (-1L);
        int l_382 = 0x01579889L;
        int l_392 = 4L;
        int l_394 = (-8L);
        int l_622 = 0x72109CD2L;
        int l_655 = 0xDF1A2457L;
        int l_722 = 0x70128878L;
        int l_730 = 0x31944FE8L;
        int *l_756 = &l_620;
        int *l_933 = &l_730;
        unsigned l_942 = 0UL;
        if ((&g_75 != l_307))
        {
            short l_323 = 0x5FC7L;
            int *l_420 = &g_5;
            short l_428 = 0x4E7CL;
            int l_499 = (-1L);
            int l_501 = 0x188DA372L;
            int l_612 = 1L;
            int l_658 = 0xE0E75A0FL;
            int l_660 = 0x8DAA797CL;
            int l_664 = 0x12C148FAL;
            int l_667 = 0x55AB99A0L;
            int l_682 = 0x967E32B0L;
            int l_688 = 1L;
            int l_713 = 0L;
            unsigned short l_736 = 0xED51L;
            if ((safe_rshift_func_int16_t_s_u(0x02B8L, (safe_lshift_func_int16_t_s_u(0L, p_29)))))
            {
                unsigned l_425 = 0x014ADF54L;
                int l_471 = 0xCE9E399FL;
                int l_500 = 6L;
                int l_549 = 0x90412A0FL;
                int *l_573 = &g_59;
                int *l_574 = &g_59;
                int *l_575 = (void*)0;
                int *l_576 = &g_110;
                int *l_577 = (void*)0;
                int *l_578 = &l_394;
                int *l_579 = &l_471;
                int *l_580 = &l_379;
                int *l_581 = &l_549;
                int *l_582 = &l_394;
                int *l_583 = &g_76;
                int *l_584 = &l_471;
                int *l_585 = &l_500;
                int *l_586 = &l_392;
                int *l_587 = &l_500;
                int *l_588 = &g_110;
                int *l_589 = &l_501;
                int *l_590 = (void*)0;
                int *l_591 = (void*)0;
                int *l_592 = (void*)0;
                int *l_593 = &l_544;
                int *l_594 = (void*)0;
                int *l_595 = &l_471;
                int *l_596 = &g_76;
                int *l_597 = &l_382;
                int *l_598 = &l_501;
                int *l_599 = (void*)0;
                int *l_600 = &l_499;
                int *l_601 = &l_379;
                int *l_602 = &l_471;
                int *l_603 = &g_59;
                int *l_604 = &l_371;
                int *l_605 = &l_471;
                int *l_606 = &l_501;
                int *l_607 = &l_499;
                int *l_608 = (void*)0;
                int *l_609 = &g_110;
                int *l_610 = &l_544;
                int *l_611 = &l_471;
                int *l_613 = &l_499;
                int *l_614 = &l_335;
                int *l_615 = &l_612;
                int *l_616 = &l_549;
                int *l_617 = &l_392;
                int *l_618 = &l_500;
                int *l_619 = &l_392;
                int *l_621 = (void*)0;
                int *l_623 = &l_392;
                int *l_624 = &l_622;
                int *l_625 = &l_549;
                int *l_626 = &l_620;
                int *l_627 = &l_394;
                int *l_628 = &l_379;
                int *l_629 = &l_620;
                int *l_630 = (void*)0;
                int *l_631 = &l_394;
                int *l_632 = &l_549;
                int *l_633 = &g_59;
                int *l_634 = &l_379;
                int *l_635 = (void*)0;
                int *l_636 = &l_392;
                int *l_637 = (void*)0;
                int *l_638 = &l_382;
                int *l_639 = &l_549;
                int *l_640 = &l_471;
                int *l_641 = &l_382;
                int *l_642 = &l_382;
                int *l_643 = (void*)0;
                int *l_644 = (void*)0;
                int *l_645 = &l_620;
                int *l_646 = &l_622;
                int *l_647 = &l_394;
                int *l_648 = &l_499;
                int *l_649 = &l_471;
                int *l_650 = (void*)0;
                int *l_651 = &l_379;
                int *l_652 = &l_499;
                int *l_653 = &g_76;
                int *l_654 = &l_499;
                int *l_656 = (void*)0;
                int *l_659 = &l_382;
                int *l_661 = &l_371;
                int *l_663 = (void*)0;
                int *l_665 = &l_335;
                int *l_666 = &l_662;
                int *l_668 = &l_660;
                int *l_669 = &l_371;
                int *l_670 = &l_501;
                int *l_671 = &l_662;
                int *l_672 = (void*)0;
                int *l_673 = &l_612;
                int *l_674 = &l_371;
                int l_675 = 0xB4985C6CL;
                int *l_676 = &l_335;
                int *l_677 = &l_675;
                int *l_678 = (void*)0;
                int *l_679 = (void*)0;
                int *l_680 = &l_500;
                int *l_681 = &l_394;
                int *l_683 = &g_59;
                int *l_684 = &l_549;
                int *l_685 = &l_658;
                int *l_686 = (void*)0;
                int *l_687 = (void*)0;
                int *l_689 = (void*)0;
                int *l_690 = (void*)0;
                int *l_691 = &g_110;
                int *l_692 = (void*)0;
                int *l_693 = (void*)0;
                int *l_694 = (void*)0;
                int *l_695 = &l_382;
                int *l_696 = (void*)0;
                int *l_698 = (void*)0;
                int *l_699 = &l_660;
                int *l_700 = (void*)0;
                int *l_701 = &l_675;
                int *l_702 = &g_76;
                int *l_703 = (void*)0;
                int *l_704 = &l_622;
                int l_705 = 0x09C8A946L;
                int *l_706 = &l_500;
                int *l_707 = &l_682;
                int *l_708 = &l_549;
                int *l_709 = (void*)0;
                int *l_710 = &l_501;
                int *l_711 = (void*)0;
                int *l_712 = &l_501;
                int *l_714 = &l_499;
                int *l_715 = &l_382;
                int *l_716 = &l_544;
                int *l_717 = &l_658;
                int *l_718 = (void*)0;
                int *l_719 = (void*)0;
                int *l_720 = &g_76;
                int *l_721 = (void*)0;
                int *l_723 = &l_392;
                int *l_724 = &l_471;
                int *l_725 = (void*)0;
                int *l_727 = &g_59;
                int *l_728 = (void*)0;
                int *l_729 = &l_394;
                int *l_731 = &l_660;
                int *l_732 = (void*)0;
                int *l_733 = &l_335;
                int *l_734 = &l_500;
                int *l_735 = &l_664;
                for (p_30 = 0; (p_30 != 14); p_30 = safe_add_func_int8_t_s_s(p_30, 6))
                {
                    char l_327 = 0x31L;
                    int l_334 = 0xEDF3864CL;
                    char l_366 = 0xD4L;
                    int l_389 = 0x8F92758EL;
                    int l_405 = 0x5A5D139EL;
                    unsigned l_409 = 0xB77AA8E5L;
                    int *l_429 = &l_371;
                    int *l_430 = (void*)0;
                    int *l_431 = &g_59;
                    int *l_432 = &l_392;
                    int *l_433 = (void*)0;
                    int *l_434 = &g_59;
                    int *l_435 = &l_335;
                    int *l_436 = &l_405;
                    int *l_437 = &l_405;
                    int *l_438 = &l_382;
                    int *l_439 = &l_371;
                    int *l_440 = &l_371;
                    int *l_441 = &l_334;
                    int *l_442 = &g_110;
                    int *l_443 = &l_389;
                    int *l_444 = (void*)0;
                    int *l_445 = &g_110;
                    int *l_446 = &l_335;
                    int *l_447 = &l_371;
                    int *l_448 = &l_382;
                    int *l_449 = (void*)0;
                    int *l_450 = (void*)0;
                    int *l_451 = &g_76;
                    int *l_452 = &l_379;
                    int *l_453 = (void*)0;
                    int *l_454 = &g_110;
                    int *l_455 = (void*)0;
                    int *l_456 = &l_335;
                    int *l_457 = &l_382;
                    int *l_458 = &l_371;
                    int *l_459 = &l_389;
                    int *l_460 = &l_394;
                    int *l_461 = &l_394;
                    int *l_462 = &l_371;
                    int *l_463 = &l_335;
                    int *l_464 = &l_379;
                    int *l_465 = &l_335;
                    int *l_466 = &g_59;
                    int *l_467 = &g_59;
                    int *l_468 = &l_389;
                    int *l_469 = &l_334;
                    int *l_470 = &l_394;
                    int *l_472 = &l_371;
                    int *l_473 = &l_334;
                    int *l_474 = &l_335;
                    int *l_475 = &l_392;
                    int *l_476 = &l_379;
                    int *l_477 = &g_110;
                    int *l_478 = &l_371;
                    int *l_479 = &g_110;
                    int *l_480 = (void*)0;
                    int *l_481 = &g_76;
                    int *l_482 = &l_379;
                    int *l_483 = &l_382;
                    int *l_484 = &g_76;
                    int *l_485 = &l_371;
                    int *l_486 = &l_392;
                    int *l_487 = (void*)0;
                    int l_488 = 0xEFD341B8L;
                    int *l_489 = &l_471;
                    int *l_490 = &g_59;
                    int *l_491 = &l_471;
                    int *l_492 = &l_334;
                    int *l_493 = &l_389;
                    int *l_494 = &l_334;
                    int *l_495 = (void*)0;
                    int *l_496 = &g_59;
                    int *l_497 = &g_59;
                    int *l_498 = &l_394;
                    int *l_502 = &l_499;
                    int *l_503 = &l_499;
                    int *l_504 = &g_110;
                    int *l_505 = &l_334;
                    int *l_506 = &l_335;
                    int *l_507 = &l_335;
                    int *l_508 = &l_488;
                    int *l_509 = (void*)0;
                    int *l_510 = (void*)0;
                    int *l_511 = &l_379;
                    int *l_512 = (void*)0;
                    int *l_513 = &l_371;
                    int *l_514 = &l_488;
                    int *l_515 = &l_471;
                    int *l_516 = &l_500;
                    int *l_517 = &l_500;
                    int *l_518 = &l_394;
                    int *l_519 = (void*)0;
                    int *l_520 = &l_335;
                    int *l_521 = (void*)0;
                    int *l_522 = &l_379;
                    int *l_523 = &l_394;
                    int *l_524 = &l_501;
                    int *l_525 = (void*)0;
                    int *l_526 = &l_382;
                    int *l_527 = &l_379;
                    int *l_528 = (void*)0;
                    int *l_529 = &g_76;
                    int *l_530 = &l_382;
                    int *l_531 = (void*)0;
                    int *l_532 = &l_382;
                    int *l_533 = &l_382;
                    int *l_534 = &l_379;
                    int *l_535 = &l_501;
                    int *l_536 = &l_501;
                    int *l_537 = &g_110;
                    int *l_538 = &l_488;
                    int *l_539 = &g_59;
                    int *l_540 = &l_392;
                    int *l_541 = &l_371;
                    int *l_542 = &l_379;
                    int *l_543 = &g_59;
                    int *l_545 = &l_335;
                    int *l_546 = &l_371;
                    int *l_547 = &l_394;
                    int *l_548 = &l_382;
                    int *l_550 = &g_110;
                    int *l_551 = (void*)0;
                    int *l_552 = &l_405;
                    int *l_553 = &l_499;
                    int *l_554 = &g_59;
                    int *l_555 = &l_335;
                    int *l_556 = &g_110;
                    int *l_557 = &g_76;
                    int *l_558 = &g_110;
                    int *l_559 = &l_488;
                    int *l_560 = &l_499;
                    int *l_561 = &l_405;
                    int l_562 = 0L;
                    int *l_563 = (void*)0;
                    int *l_564 = &l_379;
                    int *l_565 = &l_335;
                    int *l_566 = &g_110;
                    int *l_567 = &l_382;
                    int *l_568 = &l_382;
                    int *l_569 = &l_335;
                }
                l_736++;
                (*l_307) = p_32;
                g_739++;
            }
            else
            {
                int *l_743 = &l_658;
                unsigned l_751 = 0xC6B085F6L;
                int l_837 = 0L;
                int l_852 = 0xF1388ADDL;
                int l_871 = 0x646EDA6CL;
                int l_897 = 0x3906665DL;
                l_742 = &l_420;
                (*l_307) = l_743;
                if (((void*)0 != (*l_742)))
                {
                    int l_750 = 0L;
                    int *l_752 = &l_382;
                    (*l_742) = l_752;
                    return &g_76;
                }
                else
                {
                    int *l_755 = &g_59;
                    int l_776 = 9L;
                    int l_803 = 0x65B70BB0L;
                    int l_819 = 0x27C63D06L;
                    int l_868 = 0x6CF897E8L;
                    int l_883 = 0x3A9EEF86L;
                    for (g_76 = 0; (g_76 <= 3); g_76 = safe_add_func_int32_t_s_s(g_76, 4))
                    {
                        int *l_757 = &g_59;
                        int *l_758 = &l_371;
                        int *l_759 = (void*)0;
                        int *l_760 = &l_379;
                        int *l_761 = (void*)0;
                        int *l_762 = &l_662;
                        int *l_763 = &l_682;
                        int *l_764 = &g_110;
                        int *l_765 = (void*)0;
                        int l_766 = 0x3B8ECFAEL;
                        int *l_767 = &l_501;
                        int *l_768 = &l_660;
                        int *l_769 = &l_667;
                        int *l_770 = (void*)0;
                        int *l_771 = &l_612;
                        int *l_772 = &l_688;
                        int *l_773 = &l_688;
                        int *l_774 = (void*)0;
                        int *l_775 = &l_662;
                        int *l_777 = (void*)0;
                        int *l_778 = &l_697;
                        int *l_779 = &l_612;
                        int *l_780 = &l_501;
                        int *l_781 = &l_688;
                        int *l_782 = &l_688;
                        int *l_783 = &g_110;
                        int *l_784 = &l_371;
                        int *l_785 = &l_713;
                        int *l_786 = &l_730;
                        int *l_787 = (void*)0;
                        int *l_788 = &l_662;
                        int *l_789 = &l_662;
                        int *l_790 = &l_660;
                        int *l_791 = &l_382;
                        int *l_792 = &l_658;
                        int *l_793 = &l_382;
                        int *l_794 = &l_776;
                        int *l_795 = &l_776;
                        int *l_796 = (void*)0;
                        int *l_797 = &l_713;
                        int *l_798 = (void*)0;
                        int *l_799 = &l_658;
                        int *l_800 = &l_658;
                        int *l_801 = (void*)0;
                        int *l_802 = &l_379;
                        int *l_804 = &l_776;
                        int *l_805 = &l_612;
                        int *l_806 = &l_662;
                        int *l_807 = &l_722;
                        int *l_808 = &l_382;
                        int *l_809 = (void*)0;
                        int *l_810 = (void*)0;
                        int *l_811 = &l_544;
                        int *l_812 = &l_722;
                        int *l_813 = (void*)0;
                        int *l_814 = &l_667;
                        int *l_815 = &l_499;
                        int *l_816 = &l_382;
                        int *l_817 = &l_697;
                        int *l_818 = &l_544;
                        int *l_820 = &g_59;
                        int *l_821 = (void*)0;
                        int *l_822 = &l_730;
                        int *l_823 = &l_657;
                        int *l_824 = &l_682;
                        int *l_825 = &l_688;
                        int *l_826 = (void*)0;
                        int *l_827 = &l_766;
                        int *l_828 = &l_662;
                        int *l_829 = (void*)0;
                        int *l_830 = &l_688;
                        int *l_831 = &l_612;
                        int *l_832 = &l_501;
                        int *l_833 = &l_620;
                        int *l_834 = &l_662;
                        int *l_835 = &l_335;
                        int *l_836 = &l_657;
                        int *l_838 = &l_371;
                        int *l_839 = (void*)0;
                        int *l_840 = &l_379;
                        int *l_841 = &l_662;
                        int *l_842 = &l_622;
                        int *l_843 = &l_501;
                        int *l_844 = &l_335;
                        int *l_845 = &l_730;
                        int *l_846 = &l_392;
                        int *l_847 = &l_713;
                        int *l_848 = &l_394;
                        int *l_849 = &l_382;
                        int *l_850 = (void*)0;
                        int *l_851 = &l_803;
                        int *l_853 = &l_837;
                        int *l_854 = (void*)0;
                        int *l_855 = &l_660;
                        int *l_856 = &l_612;
                        int *l_857 = &l_544;
                        int *l_858 = &g_110;
                        int *l_859 = (void*)0;
                        int *l_860 = &l_379;
                        int *l_861 = (void*)0;
                        int *l_862 = &l_392;
                        int *l_863 = (void*)0;
                        int *l_864 = &l_682;
                        int *l_865 = &l_730;
                        int *l_866 = &l_657;
                        int *l_867 = &l_664;
                        int *l_869 = (void*)0;
                        int *l_870 = &l_622;
                        int *l_872 = &l_682;
                        int l_873 = (-2L);
                        int *l_874 = &l_544;
                        int *l_875 = (void*)0;
                        int *l_876 = &l_622;
                        int *l_877 = &l_713;
                        int *l_878 = &l_682;
                        int *l_879 = &l_868;
                        int *l_880 = &l_501;
                        int *l_881 = &l_335;
                        int *l_882 = &l_394;
                        int *l_884 = &l_664;
                        int *l_885 = &l_657;
                        int *l_886 = (void*)0;
                        int *l_887 = &l_392;
                        int *l_888 = &l_612;
                        int *l_889 = &l_776;
                        int *l_890 = &l_499;
                        int *l_891 = &l_612;
                        int *l_892 = (void*)0;
                        int *l_893 = &l_657;
                        int *l_894 = (void*)0;
                        int *l_895 = &l_873;
                        int *l_896 = (void*)0;
                        int *l_898 = &l_622;
                        int *l_899 = &l_730;
                        int *l_900 = &l_852;
                        int *l_901 = &l_837;
                        int *l_902 = &l_655;
                        int *l_903 = &l_803;
                        int *l_904 = &l_501;
                        int *l_905 = &l_371;
                        int *l_906 = &l_819;
                        int *l_907 = (void*)0;
                        int *l_908 = &l_883;
                        int *l_909 = &l_655;
                        int *l_910 = &l_335;
                        int *l_911 = &l_871;
                        int *l_912 = &l_657;
                        int *l_913 = (void*)0;
                        int *l_914 = &l_697;
                        int *l_915 = &l_713;
                        int *l_916 = &l_667;
                        int *l_917 = &l_837;
                        int *l_918 = &l_868;
                        int *l_919 = &l_655;
                        l_756 = l_755;
                        g_920--;
                        (*l_781) ^= (*g_91);
                    }
                    (*l_756) = (*g_91);
                    (*l_743) |= (safe_rshift_func_int8_t_s_s(1L, (*l_420)));
                }
            }
            p_32 = &g_76;
        }
        else
        {
            (*l_756) = (*p_31);
            (*l_307) = p_31;
        }
        (*l_933) ^= ((func_35((safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(g_5, ((-4L) != p_29))) || (safe_lshift_func_int16_t_s_s(g_243, (0x6C6FL < 0L)))), 1UL)), g_5, g_76, p_30) <= g_59) && 0xFFB6L);
        (*l_933) |= (safe_add_func_uint32_t_u_u((p_30 || ((g_920 >= p_30) | (*l_756))), 0x844E8F02L));
        for (p_29 = (-3); (p_29 < (-8)); --p_29)
        {
            l_942++;
        }
    }
    else
    {
        unsigned short l_953 = 0xAAE3L;
        int l_1025 = 9L;
        int l_1065 = 0x5BE2C7D1L;
        int l_1333 = 0L;
        int l_1361 = 0x06082E5AL;
        int ***l_1384 = &l_742;
        unsigned short l_1402 = 65535UL;
        volatile int * volatile l_1403 = &g_1388;
        (*l_307) = (void*)0;
        for (l_697 = 0; (l_697 == (-3)); l_697--)
        {
            char l_974 = 7L;
            int *l_991 = (void*)0;
            unsigned short l_998 = 65535UL;
            int l_1032 = (-6L);
            int l_1036 = 0x1337592DL;
            int l_1045 = 0x0F516726L;
            int l_1075 = 0x41D5E5CDL;
            int l_1128 = 0xDF0FF67CL;
            if ((*p_31))
                break;
            if ((*g_58))
            {
                int *l_947 = (void*)0;
                g_120 = l_947;
                if (l_948)
                    continue;
            }
            else
            {
                unsigned l_971 = 4294967295UL;
                int *l_987 = &g_59;
                int l_1031 = (-7L);
                int l_1139 = (-1L);
                int l_1158 = 0xC6D8E6DCL;
                int l_1168 = (-3L);
                int *l_1391 = &l_662;
                if ((*g_91))
                {
                    int *l_949 = &l_657;
                    int *l_950 = &l_662;
                    int *l_951 = &l_379;
                    int *l_952 = &l_379;
                    --l_953;
                    for (g_110 = 0; (g_110 == (-10)); g_110--)
                    {
                        unsigned l_975 = 0xDE051273L;
                        (*g_115) = (safe_mul_func_uint16_t_u_u(func_35((safe_sub_func_uint16_t_u_u((p_29 && (((safe_sub_func_int8_t_s_s(func_35(g_5, (&p_31 != &g_63), (safe_lshift_func_uint16_t_u_s(func_35((safe_sub_func_uint8_t_u_u((g_76 ^ p_29), (((!(safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u(l_971)) < 0UL), 4))) >= ((safe_sub_func_uint32_t_u_u(p_30, g_570)) & l_971)) ^ g_726))), g_110, (*l_952), l_971), l_974)), g_726), (*l_950))) != p_30) >= l_975)), 0x81A8L)), p_29, g_110, g_110), 0xD9A8L));
                        (*l_952) = (safe_unary_minus_func_uint32_t_u(func_35((~func_35(g_726, (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(g_726, 2)), (l_974 >= func_35((l_974 > 0x41L), p_29, g_739, ((!(l_974 < l_974)) > l_975))))), l_971)), 0x20L)), p_29, l_953)), (*l_949), g_59, p_29)));
                        (*l_949) ^= 0xD9CB2624L;
                    }
                }
                else
                {
                    for (l_379 = 24; (l_379 > 1); l_379--)
                    {
                        g_63 = l_987;
                    }
                    return l_987;
                }
                for (g_110 = (-21); (g_110 >= 3); ++g_110)
                {
                    char l_990 = 0x3CL;
                    (*g_115) |= l_990;
                    l_991 = &g_5;
                    return &g_110;
                }
                if (((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(((0UL || (safe_mod_func_int8_t_s_s(3L, l_953))) <= l_998), ((&l_742 == (void*)0) && (safe_lshift_func_int8_t_s_u((&g_115 == (void*)0), p_29))))) & p_30) >= 0x6C786DFCL), p_29)) && 0xFB7BL))
                {
                    int l_1004 = 0xD7EC30F2L;
                    int l_1088 = 0x5EA6A1BBL;
                    int l_1143 = 0x90C2D0CDL;
                    int l_1229 = 0x15D419C1L;
                    if ((*g_115))
                        break;
                    for (g_59 = 23; (g_59 > 16); g_59 = safe_sub_func_uint8_t_u_u(g_59, 2))
                    {
                        (*l_307) = p_32;
                        (*l_742) = p_32;
                        l_1025 &= (l_1004 > (safe_div_func_uint32_t_u_u(g_570, (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((~(safe_rshift_func_int8_t_s_u(1L, 1))), (safe_sub_func_int16_t_s_s(g_59, (l_953 || ((((((void*)0 == &g_110) <= (-1L)) | (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((p_32 == p_32), l_1004)), 1)), l_953)), p_29)) != 0x3A990184L), 15))) < g_110) == l_998)))))), p_29)))));
                    }
                    if ((((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(func_35((+(g_570 > g_726)), (safe_unary_minus_func_uint8_t_u(((void*)0 != p_32))), g_59, (((0x09FBL & ((*g_1001) ^ (-2L))) ^ (*p_31)) & p_29)), l_1031)), g_726)) && g_739) & l_1025) < 0x7ECAF9E6L) <= 0x7046F687L))
                    {
                        int *l_1033 = (void*)0;
                        int *l_1034 = &l_544;
                        int *l_1035 = &g_59;
                        int *l_1037 = &l_662;
                        int *l_1038 = (void*)0;
                        int *l_1039 = &l_1025;
                        int *l_1040 = (void*)0;
                        int *l_1041 = (void*)0;
                        int *l_1042 = (void*)0;
                        int *l_1043 = &l_544;
                        int *l_1044 = (void*)0;
                        int *l_1046 = &l_1032;
                        int *l_1047 = (void*)0;
                        int *l_1048 = &l_379;
                        int *l_1049 = &l_1025;
                        int *l_1050 = &l_657;
                        int *l_1051 = &l_1032;
                        int *l_1052 = &l_620;
                        int *l_1053 = &l_1045;
                        int *l_1054 = &l_1025;
                        int *l_1055 = &l_544;
                        int *l_1056 = &l_544;
                        int l_1057 = 8L;
                        int *l_1058 = (void*)0;
                        int *l_1059 = &g_59;
                        int *l_1060 = &l_657;
                        int *l_1061 = &l_620;
                        int *l_1062 = &g_110;
                        int *l_1063 = &l_662;
                        int *l_1064 = &l_544;
                        int *l_1066 = (void*)0;
                        int *l_1067 = (void*)0;
                        int *l_1068 = &l_662;
                        int *l_1069 = &l_1032;
                        int *l_1070 = &g_59;
                        int *l_1071 = (void*)0;
                        int *l_1072 = &l_379;
                        int *l_1073 = &l_620;
                        int *l_1074 = &l_1032;
                        int *l_1076 = &l_1025;
                        int *l_1077 = &l_1075;
                        int *l_1078 = (void*)0;
                        int *l_1079 = &g_110;
                        int *l_1080 = &l_1025;
                        int *l_1081 = &l_657;
                        int *l_1082 = &l_1065;
                        int *l_1083 = &l_379;
                        int *l_1084 = &l_379;
                        int *l_1085 = &g_76;
                        int *l_1086 = (void*)0;
                        int *l_1087 = (void*)0;
                        int *l_1089 = &l_1025;
                        int *l_1090 = &l_1065;
                        int *l_1091 = &l_1088;
                        int *l_1092 = &g_59;
                        int *l_1093 = &l_1032;
                        int *l_1094 = &l_544;
                        int *l_1095 = &l_620;
                        int *l_1096 = &l_1032;
                        int *l_1097 = (void*)0;
                        int *l_1098 = (void*)0;
                        int *l_1099 = &l_1075;
                        int *l_1100 = (void*)0;
                        int *l_1101 = &l_1088;
                        int *l_1102 = (void*)0;
                        int *l_1103 = &g_110;
                        int *l_1104 = (void*)0;
                        int *l_1105 = &l_544;
                        int *l_1106 = &l_620;
                        int *l_1107 = &l_1045;
                        int *l_1108 = &l_379;
                        int *l_1109 = &l_1065;
                        int *l_1110 = &l_544;
                        int *l_1111 = &l_1045;
                        int *l_1112 = &l_1075;
                        int *l_1113 = &g_76;
                        int *l_1114 = &g_59;
                        int *l_1115 = &l_1065;
                        int *l_1116 = &g_76;
                        int *l_1117 = &l_620;
                        int *l_1118 = &l_1025;
                        int *l_1119 = &l_1032;
                        int *l_1120 = &l_1088;
                        int *l_1121 = &g_59;
                        int *l_1122 = &g_76;
                        int *l_1123 = &l_1075;
                        int *l_1124 = (void*)0;
                        int *l_1125 = &l_1045;
                        int *l_1126 = &l_544;
                        int *l_1127 = &g_110;
                        int *l_1129 = (void*)0;
                        int *l_1130 = &l_1045;
                        int *l_1131 = &l_620;
                        int *l_1132 = &l_1045;
                        int *l_1133 = &l_379;
                        int *l_1134 = (void*)0;
                        int *l_1135 = (void*)0;
                        int *l_1136 = &l_1065;
                        int *l_1137 = (void*)0;
                        int *l_1138 = &l_544;
                        int *l_1140 = &g_110;
                        int *l_1141 = &l_1139;
                        int *l_1142 = &l_1032;
                        int *l_1144 = &l_657;
                        int *l_1145 = &l_662;
                        int *l_1146 = (void*)0;
                        int *l_1147 = &l_1143;
                        int *l_1148 = &l_620;
                        int *l_1149 = &l_1075;
                        int *l_1150 = (void*)0;
                        int *l_1151 = (void*)0;
                        int *l_1152 = &g_76;
                        int *l_1153 = &l_1025;
                        int *l_1154 = &l_620;
                        int *l_1155 = &l_1139;
                        int *l_1156 = &l_1139;
                        int *l_1157 = (void*)0;
                        int *l_1159 = &l_1088;
                        int *l_1160 = &g_59;
                        int *l_1161 = &g_76;
                        int *l_1162 = &l_1143;
                        int *l_1163 = &l_1128;
                        int *l_1164 = (void*)0;
                        int *l_1165 = (void*)0;
                        int *l_1166 = &l_1139;
                        int *l_1167 = &l_1045;
                        int *l_1169 = &l_620;
                        int *l_1170 = &l_1128;
                        int *l_1171 = &l_620;
                        int *l_1172 = &l_1158;
                        int *l_1173 = &g_110;
                        int *l_1174 = &l_1128;
                        int *l_1175 = &l_544;
                        int *l_1176 = &l_1139;
                        int *l_1178 = &l_1139;
                        int *l_1179 = &l_1032;
                        int *l_1181 = &l_379;
                        int *l_1182 = (void*)0;
                        int l_1183 = 0L;
                        int *l_1184 = &l_1168;
                        int *l_1185 = &g_110;
                        int *l_1186 = &l_657;
                        int *l_1187 = &l_544;
                        int *l_1188 = &l_1088;
                        int *l_1189 = &l_657;
                        int *l_1190 = &l_1158;
                        int *l_1192 = &l_1128;
                        int *l_1193 = &g_59;
                        int *l_1194 = &g_76;
                        int *l_1195 = &l_1025;
                        int l_1197 = (-8L);
                        int *l_1198 = &l_544;
                        int *l_1199 = &l_1139;
                        int l_1200 = 2L;
                        int *l_1201 = &l_1197;
                        int *l_1202 = &l_620;
                        int *l_1203 = (void*)0;
                        int *l_1204 = &l_1158;
                        int *l_1205 = (void*)0;
                        int *l_1206 = &l_1197;
                        int *l_1207 = (void*)0;
                        int *l_1208 = &l_1045;
                        int *l_1209 = &l_1200;
                        int *l_1210 = (void*)0;
                        int *l_1211 = &l_657;
                        int *l_1212 = &l_1143;
                        int *l_1213 = (void*)0;
                        int *l_1215 = (void*)0;
                        int *l_1216 = (void*)0;
                        int *l_1217 = &l_1025;
                        int *l_1218 = &l_1075;
                        int *l_1219 = &l_1128;
                        int *l_1220 = &g_59;
                        int *l_1221 = &l_1045;
                        int *l_1222 = &l_379;
                        int *l_1223 = &l_1196;
                        int *l_1224 = (void*)0;
                        int *l_1225 = &l_1032;
                        int *l_1226 = &l_1183;
                        int *l_1227 = &l_1183;
                        int *l_1228 = &l_1075;
                        int *l_1230 = &l_620;
                        int *l_1231 = &l_1057;
                        int *l_1232 = &l_379;
                        int *l_1233 = &l_1143;
                        int *l_1234 = (void*)0;
                        int *l_1235 = &g_110;
                        int *l_1236 = &l_657;
                        int *l_1237 = &l_1229;
                        int *l_1238 = &l_1200;
                        int *l_1239 = &l_1036;
                        int *l_1240 = (void*)0;
                        int *l_1241 = (void*)0;
                        int *l_1242 = &g_59;
                        int *l_1244 = &l_1045;
                        (*g_1001) = (*p_31);
                        ++g_1245;
                    }
                    else
                    {
                        unsigned l_1248 = 0UL;
                        (*g_1001) = (*g_91);
                        if (l_1248)
                            continue;
                    }
                }
                else
                {
                    unsigned l_1253 = 0xDADB4494L;
                    int l_1308 = 0xEC4463A0L;
                    int l_1331 = 6L;
                    for (l_971 = 10; (l_971 >= 6); l_971 = safe_sub_func_int32_t_s_s(l_971, 7))
                    {
                        int *l_1251 = &l_1168;
                        int *l_1252 = &l_1128;
                        int *l_1256 = &l_1158;
                        int *l_1257 = &l_662;
                        int *l_1258 = &l_1032;
                        int *l_1259 = &l_379;
                        int *l_1260 = &l_1158;
                        int *l_1261 = &l_1139;
                        int *l_1262 = &l_379;
                        int *l_1263 = &g_110;
                        int *l_1264 = &l_620;
                        int *l_1265 = (void*)0;
                        int *l_1266 = (void*)0;
                        int *l_1267 = &l_1032;
                        int *l_1268 = &l_544;
                        int *l_1269 = &l_1158;
                        int *l_1270 = &l_1045;
                        int *l_1271 = &l_1045;
                        int *l_1272 = &l_1075;
                        int *l_1273 = &l_544;
                        int *l_1274 = &l_657;
                        int *l_1275 = &l_1032;
                        int *l_1276 = &l_1075;
                        int *l_1277 = &l_620;
                        int *l_1278 = &l_1045;
                        int *l_1279 = &l_544;
                        int *l_1280 = (void*)0;
                        int *l_1281 = &l_1045;
                        int *l_1282 = &l_1196;
                        int *l_1283 = (void*)0;
                        int *l_1284 = &l_1158;
                        int *l_1285 = &l_1075;
                        int *l_1286 = &l_1036;
                        int *l_1287 = &l_657;
                        int *l_1288 = &l_1032;
                        int *l_1289 = &l_1036;
                        int *l_1290 = &g_59;
                        int *l_1291 = (void*)0;
                        int *l_1292 = (void*)0;
                        int *l_1293 = &l_662;
                        int *l_1294 = &l_544;
                        int *l_1295 = &l_1032;
                        int *l_1296 = &l_657;
                        int *l_1297 = &l_1243;
                        int *l_1298 = &l_1032;
                        int *l_1299 = &l_657;
                        int *l_1300 = (void*)0;
                        int *l_1301 = &l_1168;
                        int *l_1302 = &l_1045;
                        int *l_1303 = (void*)0;
                        int *l_1304 = (void*)0;
                        int *l_1305 = &l_1065;
                        int *l_1306 = &l_544;
                        int *l_1307 = &g_110;
                        int *l_1309 = &l_544;
                        int *l_1310 = &l_1045;
                        int *l_1311 = &l_1128;
                        int *l_1312 = &g_110;
                        int *l_1313 = (void*)0;
                        int *l_1314 = &l_1243;
                        int l_1315 = 0x680592ADL;
                        int *l_1316 = &l_1308;
                        int *l_1317 = &l_544;
                        int *l_1318 = &l_1032;
                        int *l_1319 = &l_1315;
                        int *l_1320 = &l_620;
                        int *l_1321 = &l_1128;
                        int *l_1322 = &l_1139;
                        int *l_1323 = &l_1139;
                        int *l_1324 = &l_1196;
                        int *l_1325 = &l_657;
                        int *l_1326 = (void*)0;
                        int *l_1327 = &l_620;
                        int l_1328 = 1L;
                        int *l_1329 = &g_59;
                        int *l_1330 = &l_1128;
                        int *l_1332 = &l_1075;
                        int *l_1334 = (void*)0;
                        int *l_1335 = &l_1315;
                        int *l_1336 = &l_657;
                        int *l_1337 = (void*)0;
                        int *l_1338 = &l_1045;
                        int *l_1339 = &l_1128;
                        int *l_1340 = &l_1025;
                        int *l_1341 = &l_1331;
                        int *l_1342 = &l_1328;
                        int *l_1343 = &l_1158;
                        int *l_1344 = &l_1315;
                        int *l_1345 = (void*)0;
                        int *l_1346 = (void*)0;
                        int *l_1347 = &l_1308;
                        int *l_1348 = (void*)0;
                        int *l_1349 = &l_1158;
                        int *l_1350 = &l_1075;
                        int *l_1351 = (void*)0;
                        int *l_1352 = &l_544;
                        int *l_1353 = &l_1196;
                        int *l_1354 = &l_1065;
                        int *l_1355 = &l_620;
                        int *l_1356 = &l_1065;
                        int *l_1357 = (void*)0;
                        int *l_1358 = &l_1308;
                        int *l_1359 = &l_1158;
                        int *l_1360 = (void*)0;
                        int *l_1362 = (void*)0;
                        int *l_1363 = &l_1045;
                        int *l_1364 = &l_1025;
                        int *l_1365 = &g_110;
                        int *l_1366 = &l_1315;
                        int *l_1367 = &l_1045;
                        int *l_1368 = &l_1168;
                        l_1253--;
                        (*l_307) = (void*)0;
                        g_1369++;
                    }
                    return p_32;
                }
                (*l_1391) |= (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((*g_115), (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(p_30, 8)) != ((safe_lshift_func_int8_t_s_u(p_30, (l_1384 == g_1385))) || (safe_add_func_uint16_t_u_u((((p_31 != (void*)0) & (p_29 < (!l_998))) < 0x4251L), g_110)))), 0x778CL)))), 2)), 2UL));
            }
        }
        l_1403 = (*g_1386);
        return &g_5;
    }
    for (l_657 = 0; (l_657 > 5); l_657 = safe_add_func_int16_t_s_s(l_657, 9))
    {
        int *l_1406 = &l_379;
        return p_32;
    }
    (*g_1001) = ((*g_1385) == &p_31);
    return p_32;
}







static unsigned char func_35(int p_36, int p_37, unsigned char p_38, unsigned char p_39)
{
    int * volatile **l_266 = (void*)0;
    int * volatile *l_268 = (void*)0;
    int * volatile **l_267 = &l_268;
    int *l_269 = &g_59;
    int *l_272 = &g_59;
    int *l_273 = (void*)0;
    int *l_274 = &g_110;
    int *l_275 = &g_110;
    int *l_276 = &g_110;
    int *l_277 = &g_59;
    int *l_278 = (void*)0;
    int *l_279 = (void*)0;
    int *l_280 = &g_110;
    int *l_281 = (void*)0;
    int l_282 = 0x490677AAL;
    int *l_283 = &g_110;
    int l_284 = 0x0A23445CL;
    int l_285 = 0L;
    int *l_286 = &l_285;
    int *l_287 = &g_110;
    int *l_288 = (void*)0;
    int *l_289 = &l_285;
    int *l_290 = &l_282;
    int *l_291 = (void*)0;
    int l_292 = 0x0E6345F6L;
    int l_293 = 5L;
    int *l_294 = &g_110;
    int *l_295 = &l_284;
    int *l_296 = (void*)0;
    int *l_297 = &l_293;
    int *l_298 = &l_282;
    unsigned char l_299 = 0x8CL;
    (*l_267) = &g_75;
    (**l_267) = (**l_267);
    (***l_267) = ((((void*)0 != (*l_267)) | p_36) || (*g_91));
    l_299--;
    return g_76;
}







static unsigned char func_45(int * p_46, int * p_47)
{
    char l_53 = 0xB2L;
    unsigned l_54 = 0x2AFDDF34L;
    int *l_55 = &g_5;
    int **l_121 = &l_55;
    int *l_124 = &g_59;
    int *l_125 = &g_76;
    int *l_126 = &g_110;
    int *l_127 = (void*)0;
    int *l_128 = (void*)0;
    int *l_129 = (void*)0;
    int *l_130 = &g_59;
    int *l_131 = &g_59;
    int *l_132 = &g_76;
    int *l_133 = &g_59;
    int *l_134 = &g_59;
    int *l_135 = &g_76;
    int l_136 = 0x7375A68AL;
    int l_137 = 1L;
    int *l_138 = &g_76;
    int *l_139 = &l_137;
    int l_140 = 0xD1089186L;
    int *l_141 = &g_59;
    int *l_142 = &g_59;
    int *l_143 = &l_140;
    int *l_144 = &l_140;
    int *l_145 = &l_137;
    int *l_146 = (void*)0;
    int *l_147 = &l_137;
    int *l_148 = (void*)0;
    int *l_149 = &l_136;
    int *l_150 = &l_137;
    int *l_151 = &g_110;
    int *l_152 = &g_76;
    int *l_153 = &g_59;
    int *l_154 = &l_137;
    int *l_155 = (void*)0;
    int *l_156 = &g_59;
    int *l_157 = &g_110;
    int *l_158 = &l_136;
    int *l_159 = &l_136;
    int *l_160 = (void*)0;
    int *l_161 = &l_136;
    int l_162 = 0xF845CBE7L;
    int *l_163 = (void*)0;
    int l_164 = 9L;
    int l_165 = 0x94E20030L;
    int *l_166 = &l_136;
    int *l_167 = &l_164;
    int *l_168 = &l_137;
    int *l_169 = (void*)0;
    int *l_170 = &l_162;
    int *l_171 = &l_137;
    int *l_172 = (void*)0;
    int *l_173 = &g_110;
    int *l_174 = (void*)0;
    int *l_175 = &l_140;
    int l_176 = 0xEA4B618FL;
    int l_177 = 0x7A3E983FL;
    int *l_178 = &l_165;
    int *l_179 = (void*)0;
    int *l_180 = &l_137;
    int *l_181 = &l_136;
    int *l_182 = &l_176;
    int *l_183 = (void*)0;
    int *l_184 = &g_59;
    int *l_185 = &l_164;
    int *l_186 = &l_177;
    int *l_187 = &l_137;
    int *l_188 = &l_137;
    int *l_189 = &l_164;
    int *l_190 = (void*)0;
    int *l_191 = &l_176;
    int *l_192 = (void*)0;
    int *l_193 = (void*)0;
    int *l_194 = &l_137;
    int *l_195 = &l_164;
    int *l_196 = &l_177;
    int *l_197 = &l_177;
    int l_198 = 0L;
    int *l_199 = (void*)0;
    int *l_200 = &l_162;
    int *l_201 = (void*)0;
    int *l_202 = &l_176;
    int *l_203 = &g_110;
    int *l_204 = &l_164;
    int *l_205 = &l_164;
    int *l_206 = &g_76;
    int *l_207 = &l_165;
    int *l_208 = &g_110;
    int *l_209 = &g_59;
    int *l_210 = (void*)0;
    int *l_211 = &l_164;
    int *l_212 = &l_198;
    int *l_213 = &l_164;
    int l_214 = (-10L);
    int *l_215 = (void*)0;
    int *l_216 = (void*)0;
    int *l_217 = &l_164;
    int *l_218 = &l_162;
    int *l_219 = &l_165;
    int *l_220 = &l_136;
    int *l_221 = &l_162;
    int *l_222 = &l_140;
    int *l_223 = &l_140;
    int *l_224 = &l_198;
    int *l_225 = &g_110;
    int *l_226 = &l_164;
    int l_227 = 0x5C821C9BL;
    int *l_228 = &l_177;
    int *l_229 = (void*)0;
    int *l_230 = (void*)0;
    int *l_231 = (void*)0;
    int l_232 = (-1L);
    int l_233 = 0x86F9374BL;
    int *l_234 = &l_165;
    int *l_235 = (void*)0;
    int *l_236 = &l_165;
    int *l_237 = &l_176;
    int *l_238 = &l_162;
    int *l_239 = (void*)0;
    int l_240 = (-1L);
    int *l_241 = (void*)0;
    int *l_242 = &l_177;
    unsigned char l_260 = 0x13L;
    (*l_121) = func_48(l_53, l_53, l_54, l_55);
    for (g_110 = (-13); (g_110 <= (-17)); g_110--)
    {
        g_120 = (*l_121);
    }
    g_243++;
    if ((safe_rshift_func_int8_t_s_s((*l_200), 1)))
    {
        unsigned l_252 = 4294967292UL;
        (*l_182) = (safe_mod_func_uint32_t_u_u(((void*)0 == &p_46), (safe_lshift_func_uint8_t_u_s((~l_252), (((safe_mul_func_int8_t_s_s(g_5, (*l_218))) == l_252) != (safe_div_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_u((l_252 && (l_260 ^ g_5)), 0)))), (*l_185))))))));
        (*l_121) = p_47;
    }
    else
    {
        short l_265 = 1L;
        p_46 = p_46;
        (*l_170) &= ((safe_div_func_int16_t_s_s(0xB15EL, (safe_mul_func_uint16_t_u_u(l_265, 4UL)))) || l_265);
    }
    return g_243;
}







static int * func_48(char p_49, unsigned p_50, unsigned char p_51, int * p_52)
{
    unsigned l_103 = 4294967295UL;
    int *l_112 = &g_5;
    int **l_111 = &l_112;
    for (p_49 = 0; (p_49 < 27); p_49++)
    {
        (*g_58) = (g_5 > (p_52 == &g_5));
    }
    for (p_49 = 22; (p_49 < (-19)); p_49 = safe_sub_func_int16_t_s_s(p_49, 4))
    {
        unsigned char l_62 = 7UL;
        int *l_64 = &g_59;
        (*l_64) |= l_62;
        (*g_75) ^= ((g_59 <= g_59) < (0x76L >= (safe_lshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((void*)0 != &g_5), 12)), g_59)) != (0xEFC518F8L | (safe_sub_func_uint8_t_u_u((((void*)0 == &g_5) && p_50), g_59)))), g_5)) >= (*l_64)), g_59))));
        if ((!1L))
        {
            unsigned short l_77 = 0x58C9L;
            (*l_64) |= (+(*g_75));
            l_77 |= (p_51 | g_5);
        }
        else
        {
            char l_80 = 0x32L;
            int l_90 = 0x473CB3F0L;
            if (((safe_mul_func_uint16_t_u_u(g_76, l_80)) || ((l_80 && (safe_rshift_func_int16_t_s_s((((((safe_mod_func_int8_t_s_s(p_50, ((safe_div_func_int8_t_s_s((-2L), (g_59 & l_80))) | ((l_80 | g_59) >= p_50)))) < g_5) == g_59) < 4UL) < g_76), 14))) >= l_80)))
            {
                unsigned short l_87 = 1UL;
                (*l_64) = (*g_75);
                (*l_64) &= (l_87 >= (&g_59 != (void*)0));
                for (g_59 = 8; (g_59 < 5); g_59 = safe_sub_func_int16_t_s_s(g_59, 3))
                {
                    (*g_91) = l_90;
                    for (g_76 = 0; (g_76 < 11); g_76++)
                    {
                        int **l_94 = (void*)0;
                        int **l_95 = &l_64;
                        (*l_95) = &g_5;
                    }
                }
            }
            else
            {
                unsigned char l_100 = 0x51L;
                (*g_75) = (safe_div_func_uint32_t_u_u(p_50, (((1L <= (safe_add_func_int8_t_s_s((*l_64), l_100))) && (safe_mod_func_uint8_t_u_u((l_103 != (0x451EDC62L < l_90)), g_59))) & g_76)));
            }
            g_110 ^= (((safe_div_func_uint32_t_u_u((((*g_58) <= ((g_76 > ((safe_div_func_int16_t_s_s(l_90, 0x615EL)) == (g_59 | (g_59 != ((void*)0 != &p_52))))) || l_90)) <= 0xC681E8B0L), (*p_52))) >= 0L) > p_49);
            (*g_115) |= (((void*)0 == l_111) & ((safe_mod_func_uint8_t_u_u(p_51, l_80)) < g_76));
        }
    }
    (*l_111) = (*l_111);
    (*g_120) = ((safe_lshift_func_uint8_t_u_u((*l_112), 7)) != (safe_mod_func_uint8_t_u_u(g_5, p_51)));
    return &g_5;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_1177, "g_1177", print_hash_value);
    transparent_crc(g_1180, "g_1180", print_hash_value);
    transparent_crc(g_1191, "g_1191", print_hash_value);
    transparent_crc(g_1214, "g_1214", print_hash_value);
    transparent_crc(g_1245, "g_1245", print_hash_value);
    transparent_crc(g_1369, "g_1369", print_hash_value);
    transparent_crc(g_1388, "g_1388", print_hash_value);
    transparent_crc(g_1660, "g_1660", print_hash_value);
    transparent_crc(g_1945, "g_1945", print_hash_value);
    transparent_crc(g_1981, "g_1981", print_hash_value);
    transparent_crc(g_2003, "g_2003", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
