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



static volatile char g_18 = 0L;
static char g_33 = 4L;
static unsigned char g_35 = 0x9FL;
static volatile int g_47 = 0x5AD33D2AL;
static volatile int *g_46 = &g_47;
static volatile int g_49 = (-1L);
static int g_51 = 0x95848308L;
static unsigned g_69 = 0xACD6BCE8L;
static int g_78 = 0L;
static int g_102 = 0xA90D2634L;
static char g_121 = 0L;
static short g_165 = 0x4160L;
static int g_175 = 1L;
static char g_176 = (-4L);
static unsigned g_177 = 0UL;
static char g_180 = (-1L);
static int g_181 = 1L;
static short g_211 = (-1L);
static short g_232 = 5L;
static short g_243 = 0x37C8L;
static int g_248 = 0xDFCD61A1L;
static char g_272 = 0L;
static short g_274 = (-3L);
static unsigned g_275 = 4294967295UL;
static char g_292 = 0x4BL;
static char g_293 = 0x5DL;
static unsigned g_294 = 0xAB493279L;
static unsigned short g_308 = 5UL;
static int g_346 = 5L;
static int g_372 = (-1L);
static unsigned g_375 = 0x667C271DL;
static unsigned g_428 = 0xA1A75236L;
static const int g_467 = (-1L);
static const unsigned char *g_554 = (void*)0;
static const unsigned char **g_553 = &g_554;
static unsigned ** volatile *g_587 = (void*)0;
static int *g_601 = (void*)0;
static unsigned g_732 = 0x2BA41123L;
static short *g_741 = &g_243;
static short **g_740 = &g_741;
static char g_787 = (-6L);
static char g_794 = 0L;
static unsigned char g_813 = 0xD9L;
static unsigned char g_907 = 0x21L;
static unsigned char g_1098 = 0xE8L;
static unsigned short g_1138 = 0xBBCAL;
static unsigned char g_1167 = 0x85L;
static unsigned g_1180 = 4294967289UL;
static unsigned short *g_1199 = &g_1138;
static char g_1329 = 0L;
static char g_1331 = 4L;
static unsigned g_1348 = 4294967288UL;
static int g_1359 = (-1L);
static unsigned g_1549 = 0x1DDB16BDL;
static volatile unsigned short g_1705 = 0x0D49L;



static unsigned short func_1(void);
static const unsigned char func_4(int p_5, const char p_6, unsigned p_7, unsigned p_8, int p_9);
static const int func_19(const char p_20, char p_21, const int p_22, short p_23, unsigned char p_24);
static unsigned short func_27(int p_28, unsigned p_29, unsigned p_30, int p_31, int p_32);
static unsigned func_36(unsigned char * p_37);
static unsigned char * func_38(const int p_39, unsigned char * p_40, int p_41);
static unsigned char * func_43(char p_44, unsigned p_45);
static const int func_52(unsigned p_53, unsigned short p_54);
static unsigned short func_55(short p_56, unsigned char * p_57, char p_58, unsigned char * p_59, int p_60);
static unsigned char * func_61(unsigned char * p_62, unsigned char p_63, unsigned char * p_64, char p_65, unsigned p_66);
static unsigned short func_1(void)
{
    int l_10 = 5L;
    int l_17 = 0L;
    unsigned char *l_34 = &g_35;
    unsigned short *l_1554 = &g_308;
    unsigned char l_1555 = 0x21L;
    int l_1631 = 0xEC6AE309L;
    int l_1639 = 0xFFC5FB32L;
    int l_1661 = 2L;
    int l_1663 = (-1L);
    char l_1728 = (-1L);
    l_10 = (((safe_rshift_func_uint8_t_u_s(func_4(l_10, l_10, (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((((safe_add_func_int8_t_s_s((((l_17 = l_10) , g_18) != ((func_19((safe_div_func_uint16_t_u_u(((*l_1554) = func_27((((l_10 , (l_10 , g_33)) <= ((*l_34) |= ((l_10 <= (0x34L | l_10)) <= l_10))) >= l_10), g_33, g_33, g_33, l_10)), g_274)), g_211, g_372, l_10, l_1555) & (-1L)) && 0x26L)), 255UL)) > l_10) <= 0x273EFB6EL) < g_794), g_211)), l_10)), g_176, l_10), 5)) || 1L) >= 0L);


    ;
    for (g_272 = 0; (g_272 < (-12)); g_272 = safe_sub_func_int32_t_s_s(g_272, 1))
    {
        int *l_1560 = &g_346;
        int *l_1561 = &l_10;
        int *l_1562 = (void*)0;
        int *l_1563 = &g_248;
        int *l_1564 = &g_78;
        int *l_1565 = (void*)0;
        int *l_1566 = &g_1359;
        int l_1567 = (-9L);
        int *l_1568 = &l_1567;
        int *l_1569 = (void*)0;
        int *l_1570 = &g_51;
        int *l_1571 = (void*)0;
        int *l_1572 = &g_248;
        int *l_1573 = &g_346;
        int *l_1574 = (void*)0;
        int *l_1575 = (void*)0;
        int *l_1576 = &g_181;
        int l_1577 = (-1L);
        int *l_1578 = &l_1567;
        int *l_1579 = &l_17;
        int *l_1580 = &g_175;
        int *l_1581 = &g_78;
        int *l_1582 = (void*)0;
        int *l_1583 = &g_175;
        int *l_1584 = &l_10;
        int *l_1585 = &l_10;
        int *l_1586 = &l_17;
        int *l_1587 = &g_346;
        int *l_1588 = &l_10;
        int *l_1589 = &g_1359;
        int *l_1590 = &l_1577;
        int *l_1591 = &l_17;
        int *l_1592 = &g_248;
        int *l_1593 = &l_17;
        int *l_1594 = &l_10;
        int *l_1595 = &g_181;
        int *l_1596 = (void*)0;
        int *l_1597 = (void*)0;
        int *l_1598 = (void*)0;
        int *l_1599 = &g_78;
        int l_1600 = 0xA4774F23L;
        int *l_1601 = &l_10;
        int *l_1602 = &l_10;
        int *l_1603 = &g_248;
        int *l_1604 = &l_17;
        int l_1605 = 0x85B3E4F3L;
        int *l_1606 = &l_1577;
        int *l_1607 = &l_17;
        int *l_1608 = &g_346;
        int *l_1609 = &g_346;
        int *l_1610 = &l_1600;
        int *l_1611 = &g_78;
        int *l_1612 = &l_1567;
        int *l_1613 = &g_78;
        int *l_1614 = (void*)0;
        int *l_1615 = &l_17;
        int *l_1616 = (void*)0;
        int *l_1617 = &l_1605;
        int *l_1618 = &l_17;
        int *l_1619 = &g_181;
        int *l_1620 = (void*)0;
        int *l_1621 = &g_248;
        int *l_1622 = &g_181;
        int *l_1623 = &l_17;
        int *l_1624 = &g_175;
        int *l_1625 = &l_1577;
        int *l_1626 = &g_78;
        int *l_1627 = &g_181;
        int l_1628 = 0x4B269CAAL;
        int *l_1629 = (void*)0;
        int *l_1630 = &l_10;
        int *l_1632 = &l_1631;
        int *l_1633 = &g_346;
        int *l_1634 = (void*)0;
        int *l_1635 = &g_51;
        int l_1636 = (-3L);
        int *l_1637 = (void*)0;
        int *l_1638 = &g_78;
        int *l_1640 = &l_1600;
        int *l_1641 = &g_346;
        int *l_1642 = &g_248;
        int *l_1643 = &l_1600;
        int *l_1644 = &g_1359;
        int *l_1645 = &l_1631;
        int *l_1646 = &g_346;
        int *l_1647 = (void*)0;
        int *l_1648 = (void*)0;
        int *l_1649 = &g_51;
        int *l_1650 = &g_181;
        int *l_1651 = &g_1359;
        int *l_1652 = &l_1577;
        int *l_1653 = &l_10;
        int *l_1654 = (void*)0;
        int *l_1655 = &l_17;
        int *l_1656 = &l_1567;
        int *l_1657 = &l_1636;
        int *l_1658 = &l_1600;
        int *l_1659 = (void*)0;
        int *l_1660 = &l_1631;
        int *l_1662 = &l_17;
        int l_1664 = 0xD8BF136DL;
        int *l_1665 = &l_10;
        int *l_1666 = &l_1600;
        int *l_1667 = &l_1600;
        int *l_1668 = &g_175;
        int *l_1669 = (void*)0;
        int *l_1670 = (void*)0;
        int *l_1671 = &l_1567;
        int *l_1672 = &g_248;
        int *l_1673 = &g_78;
        int *l_1674 = &l_1639;
        int *l_1675 = &l_1577;
        int *l_1676 = &g_51;
        int *l_1677 = &l_17;
        int *l_1678 = (void*)0;
        int *l_1679 = &l_1577;
        int *l_1680 = &l_1628;
        int *l_1681 = (void*)0;
        int *l_1682 = &l_1577;
        int *l_1683 = &g_346;
        int *l_1684 = (void*)0;
        int *l_1685 = &l_1567;
        int *l_1686 = &g_248;
        int *l_1687 = &l_1636;
        int *l_1688 = &l_17;
        int *l_1689 = (void*)0;
        int *l_1690 = (void*)0;
        int *l_1691 = &l_17;
        int *l_1692 = &g_346;
        int *l_1693 = (void*)0;
        int *l_1694 = (void*)0;
        int *l_1695 = &l_1605;
        int *l_1696 = &l_1631;
        int *l_1697 = &l_1663;
        int *l_1698 = &l_17;
        int *l_1699 = (void*)0;
        int *l_1700 = &g_175;
        int *l_1701 = (void*)0;
        int *l_1702 = (void*)0;
        int *l_1703 = &g_175;
        int *l_1704 = &l_1664;
        int **l_1708 = (void*)0;
        int **l_1709 = &l_1561;
        --g_1705;
        (*l_1709) = &g_346;

        ;
        (*l_1564) &= (*g_46);
    }
    for (g_1348 = 24; (g_1348 != 46); g_1348++)
    {
        int l_1714 = 0x54765E7BL;
        char *l_1719 = &g_176;
        char l_1722 = 0xCEL;
        unsigned *l_1723 = &g_294;
        int *l_1727 = &g_248;
        (*g_46) = (safe_div_func_uint16_t_u_u(((func_4(l_1714, l_1714, (l_17 | (l_1639 , (+func_55((safe_rshift_func_uint16_t_u_u((!(safe_mod_func_int32_t_s_s(((g_346 = ((*l_1727) = (func_52(((((((l_1714 , ((void*)0 == l_1719)) >= ((((safe_add_func_uint16_t_u_u((((((((*l_1723) = l_1722) , (((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(func_19(g_102, l_1714, g_308, (**g_740), l_1639))), 0xA7D5B531L)) >= 0xAFL) || 4294967295UL)) == l_1722) , g_47) ^ l_1722) <= 0x3AAAF654L), (*g_1199))) <= 1UL) > g_1138) || 0L)) != 0x3CL) >= 0xDF5A6AE1L) , g_428) ^ 1L), (*g_1199)) != (**g_740)))) , l_1631), g_1098))), (*g_1199))), l_1719, g_372, &l_1555, g_175)))), g_1167, g_272) == g_1359) >= l_1728), g_787));
    }
    return (*g_1199);
}







static const unsigned char func_4(int p_5, const char p_6, unsigned p_7, unsigned p_8, int p_9)
{
    const unsigned char l_1557 = 0xF0L;
    (*g_46) ^= 0xAF0ADDA8L;
    return l_1557;
}







static const int func_19(const char p_20, char p_21, const int p_22, short p_23, unsigned char p_24)
{
    const unsigned l_1556 = 4294967288UL;
    return l_1556;
}







static unsigned short func_27(int p_28, unsigned p_29, unsigned p_30, int p_31, int p_32)
{
    const short l_42 = 1L;
    int *l_1358 = &g_1359;
    int l_1379 = 0L;
    int l_1384 = 0x732030F1L;
    unsigned l_1390 = 1UL;
    char *l_1399 = &g_33;
    int *l_1400 = &l_1384;
    char l_1405 = 0xACL;
    int *l_1406 = &g_51;
    int *l_1407 = &g_1359;
    int *l_1408 = &g_175;
    int *l_1409 = &l_1379;
    int *l_1410 = &g_51;
    int *l_1411 = (void*)0;
    int *l_1412 = &g_78;
    int *l_1413 = (void*)0;
    int *l_1414 = &g_175;
    int *l_1415 = &g_175;
    int *l_1416 = &g_248;
    int *l_1417 = &g_51;
    int *l_1418 = &g_175;
    int *l_1419 = &g_248;
    int *l_1420 = &g_248;
    int *l_1421 = &g_78;
    int *l_1422 = &l_1384;
    int *l_1423 = &l_1384;
    int *l_1424 = &g_175;
    int *l_1425 = &g_181;
    int *l_1426 = (void*)0;
    int *l_1427 = &g_181;
    int *l_1428 = &g_51;
    int *l_1429 = &g_51;
    int *l_1430 = &g_248;
    int *l_1431 = &g_51;
    int *l_1432 = &g_175;
    int l_1433 = (-1L);
    int *l_1434 = &l_1384;
    int *l_1435 = &g_51;
    int *l_1436 = (void*)0;
    int *l_1437 = &l_1433;
    int *l_1438 = &l_1384;
    int *l_1439 = &g_51;
    int *l_1440 = &l_1384;
    int *l_1441 = &g_51;
    int *l_1442 = &g_346;
    int *l_1443 = &g_1359;
    int *l_1444 = &l_1384;
    int *l_1445 = &g_248;
    int l_1446 = (-9L);
    int *l_1447 = &l_1379;
    int *l_1448 = (void*)0;
    int *l_1449 = &g_248;
    int *l_1450 = &l_1446;
    int l_1451 = 0x3B3B2938L;
    int l_1452 = 0x45D71162L;
    int *l_1453 = &g_181;
    int *l_1454 = &g_78;
    int *l_1455 = &g_51;
    int *l_1456 = &g_346;
    int *l_1457 = (void*)0;
    int *l_1458 = &g_248;
    int *l_1459 = (void*)0;
    int *l_1460 = &l_1446;
    int *l_1461 = &l_1446;
    int *l_1462 = &g_78;
    int *l_1463 = &g_248;
    int *l_1464 = (void*)0;
    int *l_1465 = &g_175;
    int *l_1466 = (void*)0;
    int l_1467 = 1L;
    int *l_1468 = &g_175;
    int l_1469 = 0x72917C42L;
    int *l_1470 = &l_1384;
    int *l_1471 = &l_1384;
    int *l_1472 = &g_51;
    int *l_1473 = (void*)0;
    int *l_1474 = &g_78;
    int l_1475 = 0x77792218L;
    int *l_1476 = &l_1475;
    int *l_1477 = &l_1467;
    int *l_1478 = (void*)0;
    int l_1479 = 0xD1850953L;
    int *l_1480 = (void*)0;
    int *l_1481 = &g_1359;
    int *l_1482 = (void*)0;
    int *l_1483 = &g_248;
    int *l_1484 = &g_1359;
    int *l_1485 = (void*)0;
    int *l_1486 = &l_1446;
    int *l_1487 = &g_181;
    int *l_1488 = &l_1433;
    int *l_1489 = &l_1479;
    int *l_1490 = &g_78;
    int *l_1491 = (void*)0;
    int *l_1492 = &l_1475;
    int *l_1493 = &l_1452;
    int *l_1494 = (void*)0;
    int l_1495 = 0x3B1D79D4L;
    int *l_1496 = &l_1384;
    int *l_1497 = &g_175;
    int *l_1498 = &g_181;
    int *l_1499 = &g_78;
    int *l_1500 = &g_78;
    int *l_1501 = &l_1446;
    int *l_1502 = &g_78;
    int *l_1503 = &l_1446;
    int *l_1504 = &l_1475;
    int l_1505 = 1L;
    int *l_1506 = &l_1505;
    int *l_1507 = &l_1451;
    int *l_1508 = (void*)0;
    int *l_1509 = (void*)0;
    int *l_1510 = &l_1469;
    int *l_1511 = &l_1446;
    int *l_1512 = (void*)0;
    int l_1513 = 0L;
    int *l_1514 = &l_1433;
    int *l_1515 = (void*)0;
    int *l_1516 = &g_248;
    int *l_1517 = &l_1452;
    int *l_1518 = (void*)0;
    int *l_1519 = &g_78;
    int *l_1520 = &l_1479;
    int *l_1521 = &g_346;
    int *l_1522 = &l_1469;
    int *l_1523 = &l_1379;
    int *l_1524 = (void*)0;
    int l_1525 = (-5L);
    int l_1526 = (-3L);
    int *l_1527 = &l_1475;
    int *l_1528 = &g_346;
    int *l_1529 = &l_1479;
    int *l_1530 = &l_1475;
    int *l_1531 = &l_1475;
    int *l_1532 = (void*)0;
    int *l_1533 = &l_1469;
    int *l_1534 = (void*)0;
    int *l_1535 = &l_1495;
    int *l_1536 = &l_1446;
    int *l_1537 = &l_1451;
    int *l_1538 = &l_1379;
    int *l_1539 = &g_181;
    int *l_1540 = &l_1513;
    int *l_1541 = (void*)0;
    int l_1542 = 0x0593DDB0L;
    int *l_1543 = &l_1526;
    int *l_1544 = (void*)0;
    int *l_1545 = &l_1526;
    int *l_1546 = &l_1384;
    int *l_1547 = &l_1542;
    int *l_1548 = &l_1446;
    int **l_1552 = (void*)0;
    int **l_1553 = &l_1436;
    if (((+func_36(func_38(l_42, func_43(p_32, g_33), g_274))) < (safe_rshift_func_int16_t_s_u((((safe_unary_minus_func_uint8_t_u(((safe_sub_func_int32_t_s_s(func_52(g_1329, (func_52((l_1358 != &p_32), (*l_1358)) , g_1329)), 4294967294UL)) , 1UL))) || g_794) < p_30), p_32))))
    {
        int *l_1360 = &g_181;
        int *l_1361 = &g_181;
        int *l_1362 = (void*)0;
        int *l_1363 = &g_346;
        int *l_1364 = &g_51;
        int *l_1365 = &g_181;
        int *l_1366 = (void*)0;
        int *l_1367 = (void*)0;
        int *l_1368 = (void*)0;
        int *l_1369 = &g_346;
        int *l_1370 = (void*)0;
        int *l_1371 = &g_78;
        int *l_1372 = &g_346;
        int *l_1373 = &g_175;
        int *l_1374 = &g_181;
        int l_1375 = 0x848FAAC3L;
        int l_1376 = 0x081EBDE1L;
        int *l_1377 = (void*)0;
        int *l_1378 = (void*)0;
        int *l_1380 = &g_78;
        int *l_1381 = &g_248;
        int *l_1382 = &g_78;
        int *l_1383 = &l_1379;
        int *l_1385 = (void*)0;
        int *l_1386 = &l_1376;
        int *l_1387 = &l_1384;
        int *l_1388 = &g_51;
        int *l_1389 = (void*)0;
        char *l_1394 = &g_121;
        char **l_1393 = &l_1394;
        l_1390++;
        (*l_1372) &= (*l_1371);
        (*l_1382) ^= ((-5L) && (((*l_1365) |= (*l_1358)) && ((p_31 ^= (((*l_1393) = &g_293) == (void*)0)) , p_31)));

        ;
    }
    else
    {
        int **l_1395 = &l_1358;
        int *l_1396 = &g_248;
        (*l_1395) = (void*)0;

        ;
        (*l_1396) &= (0x877AC846L >= 0x5FC5F523L);
    }


    ;
    ;
    g_78 &= ((p_32 > (safe_mod_func_int32_t_s_s(((*l_1400) ^= (l_1399 == (p_29 , l_1399))), (safe_add_func_uint8_t_u_u(9UL, (((void*)0 != &l_1399) <= (-4L))))))) || (l_1405 = (safe_sub_func_uint32_t_u_u(func_55((**g_740), &g_1098, g_35, l_1399, g_1098), g_176))));
    g_1549++;
    (*l_1553) = &l_1479;

    ;
    return p_28;
}







static unsigned func_36(unsigned char * p_37)
{
    char l_1203 = (-1L);
    int l_1231 = 0x99443554L;
    int l_1250 = 0x776DBFCCL;
    unsigned l_1267 = 0UL;
    int *l_1270 = (void*)0;
    int l_1339 = (-6L);
    if ((safe_rshift_func_int16_t_s_s(((l_1203 , l_1203) == (g_274 && l_1203)), 9)))
    {
        unsigned l_1206 = 0xC40B07FDL;
        int l_1241 = 0L;
        int l_1247 = 0L;
        unsigned l_1256 = 0UL;
        for (g_293 = (-11); (g_293 > (-22)); g_293 = safe_sub_func_int8_t_s_s(g_293, 3))
        {
            char l_1217 = 0L;
            unsigned *l_1226 = &g_1180;
            int l_1227 = (-7L);
            int *l_1228 = &g_181;
            int *l_1229 = &g_51;
            int *l_1230 = &l_1227;
            int *l_1232 = &g_175;
            int *l_1233 = &g_181;
            int *l_1234 = &l_1231;
            int *l_1235 = (void*)0;
            int *l_1236 = &l_1227;
            int *l_1237 = &l_1231;
            int *l_1238 = &g_175;
            int *l_1239 = &l_1231;
            int *l_1240 = &g_346;
            int *l_1242 = (void*)0;
            int *l_1243 = (void*)0;
            int *l_1244 = &g_51;
            int *l_1245 = &g_248;
            int *l_1246 = (void*)0;
            int *l_1248 = &l_1241;
            int *l_1249 = &g_346;
            int *l_1251 = &l_1227;
            int *l_1252 = &g_78;
            int *l_1253 = &l_1231;
            int *l_1254 = &l_1247;
            int *l_1255 = &g_78;
            unsigned char *l_1262 = &g_35;
            unsigned char **l_1261 = &l_1262;
            int **l_1268 = &l_1246;
            (*l_1228) = func_55(func_52(l_1206, ((g_907 |= ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(0L, ((*g_741) |= l_1203))) <= func_52((func_52(l_1203, l_1206) > (safe_rshift_func_uint16_t_u_u(l_1217, ((*g_1199)--)))), (safe_div_func_uint32_t_u_u(((*l_1226) = (safe_sub_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((0xE02B43D6L || (((l_1217 , l_1217) , 0x6899E298L) ^ l_1217)) == 1L), g_165)) , l_1206), l_1203))), 0x08011CB0L)))), 0xE7L)), 1)), 255UL)) & l_1217)) && l_1227)), &g_1098, g_272, p_37, l_1227);
            ++l_1256;
            (*l_1229) = (l_1250 , ((safe_lshift_func_uint8_t_u_s(((func_55(l_1206, &g_35, g_274, ((*l_1261) = (void*)0), (safe_mod_func_uint8_t_u_u((l_1250 <= (&g_740 != ((safe_rshift_func_int16_t_s_u(((*l_1255) , (((l_1256 , g_813) , (*g_741)) & l_1206)), 0)) , &g_740))), l_1267))) < l_1247) < 1UL), (*l_1228))) , g_732));

            ;
            (*l_1268) = (void*)0;
        }
    }
    else
    {
        int **l_1269 = (void*)0;
        int *l_1271 = &g_346;
        int l_1272 = 0xD64B4F9EL;
        int *l_1273 = (void*)0;
        int *l_1274 = &l_1272;
        int *l_1275 = &l_1272;
        int *l_1276 = &g_181;
        int *l_1277 = &g_51;
        int *l_1278 = &l_1231;
        int l_1279 = (-1L);
        int *l_1280 = &g_181;
        int *l_1281 = &l_1272;
        int *l_1282 = &g_181;
        int *l_1283 = (void*)0;
        int l_1284 = 0x12D3FC5FL;
        int *l_1285 = &l_1231;
        int *l_1286 = (void*)0;
        int *l_1287 = &g_181;
        int *l_1288 = &l_1272;
        int *l_1289 = &l_1279;
        int l_1290 = 0xD780AAABL;
        int *l_1291 = &l_1279;
        int *l_1292 = &g_346;
        int *l_1293 = &l_1279;
        int *l_1294 = (void*)0;
        int *l_1295 = &l_1284;
        int *l_1296 = (void*)0;
        int *l_1297 = &g_346;
        int *l_1298 = &l_1250;
        int *l_1299 = &g_78;
        int *l_1300 = &g_78;
        int *l_1301 = &l_1290;
        int *l_1302 = (void*)0;
        int *l_1303 = &g_181;
        int *l_1304 = &g_78;
        int *l_1305 = (void*)0;
        int *l_1306 = (void*)0;
        int *l_1307 = &l_1290;
        int *l_1308 = &l_1284;
        int *l_1309 = &g_346;
        int *l_1310 = &g_51;
        int *l_1311 = &l_1272;
        int *l_1312 = (void*)0;
        int *l_1313 = &g_175;
        int *l_1314 = &l_1290;
        int *l_1315 = &l_1290;
        int *l_1316 = &l_1279;
        int *l_1317 = &l_1231;
        int *l_1318 = &g_51;
        int *l_1319 = &g_346;
        int *l_1320 = &g_51;
        int *l_1321 = &l_1290;
        int *l_1322 = (void*)0;
        int *l_1323 = &g_346;
        int *l_1324 = &g_78;
        int *l_1325 = &g_248;
        int *l_1326 = &g_181;
        int *l_1327 = &g_248;
        int *l_1328 = &l_1284;
        int *l_1330 = &g_346;
        int *l_1332 = &g_51;
        int *l_1333 = &g_175;
        int *l_1334 = &l_1250;
        int *l_1335 = &l_1284;
        int *l_1336 = &g_346;
        int *l_1337 = &g_346;
        int l_1338 = 0x9AA3AF16L;
        int *l_1340 = (void*)0;
        int *l_1341 = &g_78;
        int *l_1342 = &g_181;
        int *l_1343 = (void*)0;
        int *l_1344 = &l_1284;
        int *l_1345 = &g_181;
        int *l_1346 = &l_1231;
        int *l_1347 = &g_181;
        l_1270 = &g_78;

        ;
        g_1348--;
        for (l_1279 = (-23); (l_1279 >= (-30)); --l_1279)
        {
            return g_1167;
        }
    }

    ;
    return g_180;
}







static unsigned char * func_38(const int p_39, unsigned char * p_40, int p_41)
{
    char l_1183 = 0x2FL;
    int *l_1184 = (void*)0;
    int *l_1185 = &g_181;
    int l_1186 = 0L;
    unsigned *l_1193 = (void*)0;
    unsigned *l_1194 = &g_1180;
    int l_1195 = 0xFDF43325L;
    unsigned short * const l_1198 = &g_308;
    unsigned char *l_1200 = (void*)0;
    (*l_1185) ^= (((*p_40) > (safe_div_func_int16_t_s_s(l_1183, 0xD3B4L))) ^ g_232);
    (*l_1185) = (((l_1186 , (safe_mod_func_int32_t_s_s(3L, ((*l_1194) = ((*p_40) | (safe_mod_func_int16_t_s_s((**g_740), (safe_rshift_func_uint16_t_u_s((p_39 | 0xCBE6E71BL), 14))))))))) == l_1195) , (safe_div_func_int8_t_s_s((l_1198 == (g_1199 = &g_308)), 255UL)));

    ;
    return l_1200;


}







static unsigned char * func_43(char p_44, unsigned p_45)
{
    volatile int *l_48 = &g_49;
    int *l_50 = &g_51;
    unsigned char *l_67 = &g_35;
    unsigned *l_68 = &g_69;
    l_48 = g_46;

    ;
    (*l_50) |= (-2L);
    g_1180 ^= (0xA1EE3199L > func_52(g_33, func_55((*l_50), func_61(l_67, (*l_50), l_67, g_35, ((*l_68) = (((g_35 <= (*l_50)) < g_51) > (*l_50)))), g_33, l_67, (*l_50))));


    return l_67;


}







static const int func_52(unsigned p_53, unsigned short p_54)
{
    int *l_1178 = &g_346;
    unsigned l_1179 = 7UL;
    l_1178 = l_1178;
    l_1179 |= 0xAFE907BDL;
    return p_53;
}







static unsigned short func_55(short p_56, unsigned char * p_57, char p_58, unsigned char * p_59, int p_60)
{
    unsigned short *l_1174 = &g_308;
    int *l_1177 = &g_51;
    (*l_1177) = ((g_180 & (safe_add_func_int16_t_s_s((**g_740), ((++(*l_1174)) | 0xF671L)))) ^ (**g_740));
    return (*l_1177);
}







static unsigned char * func_61(unsigned char * p_62, unsigned char p_63, unsigned char * p_64, char p_65, unsigned p_66)
{
    unsigned l_72 = 4294967295UL;
    int l_109 = (-8L);
    char l_126 = 0x8DL;
    int l_139 = 0x3F04BF7AL;
    int l_153 = (-1L);
    int l_173 = 3L;
    short *l_324 = &g_165;
    unsigned char *l_341 = (void*)0;
    int l_363 = 0xF4FC1ADAL;
    unsigned **l_529 = (void*)0;
    unsigned ***l_528 = &l_529;
    short l_560 = (-2L);
    int *l_761 = &l_139;
    const unsigned char ** const *l_940 = &g_553;
    unsigned char l_1140 = 255UL;
    if (p_63)
    {
        short l_122 = (-8L);
        int l_167 = 0x2BEB9285L;
        int l_182 = 0L;
        unsigned char l_255 = 249UL;
        unsigned *l_259 = (void*)0;
        unsigned **l_258 = &l_259;
        int l_269 = 0x79527C19L;
        int l_270 = 1L;
        int l_273 = 0x7E6BEB08L;
        int *l_297 = &l_182;
        unsigned char l_378 = 0x63L;
        unsigned l_531 = 0UL;
        unsigned char **l_584 = &l_341;
        unsigned char ***l_583 = &l_584;
        int l_591 = (-7L);
        short **l_736 = (void*)0;
        short ***l_735 = &l_736;
        unsigned l_752 = 1UL;
        for (p_63 = 0; (p_63 >= 56); p_63 = safe_add_func_int16_t_s_s(p_63, 9))
        {
            int l_150 = 0x1C32FD8CL;
            int l_166 = 0L;
            int l_171 = 0x0048F203L;
            int l_343 = 1L;
            const int *l_345 = &l_182;
            const int **l_344 = &l_345;
            int *l_381 = (void*)0;
            int *l_382 = &l_269;
            int *l_383 = &l_182;
            int *l_384 = &l_109;
            int *l_385 = &g_175;
            int *l_386 = (void*)0;
            int *l_387 = &l_171;
            int *l_388 = &g_175;
            int *l_389 = &l_273;
            int *l_390 = &l_139;
            int *l_391 = &g_175;
            int *l_392 = &l_363;
            int *l_393 = (void*)0;
            int *l_394 = (void*)0;
            int *l_395 = &l_109;
            int *l_396 = &l_166;
            int *l_397 = (void*)0;
            int *l_398 = &l_171;
            int *l_399 = &g_175;
            int *l_400 = &g_78;
            int *l_401 = &l_166;
            int *l_402 = &l_363;
            int *l_403 = &l_109;
            int *l_404 = &l_166;
            int *l_405 = &l_182;
            int *l_406 = &l_343;
            int *l_407 = &l_343;
            int *l_408 = &g_181;
            int *l_409 = (void*)0;
            int *l_410 = (void*)0;
            int *l_411 = (void*)0;
            int *l_412 = &l_270;
            int *l_413 = &l_363;
            int *l_414 = &l_171;
            int *l_415 = &l_363;
            int *l_416 = &g_346;
            int *l_417 = &l_109;
            int *l_418 = &g_175;
            int *l_419 = &l_153;
            int *l_420 = &l_273;
            int *l_421 = &l_182;
            int *l_422 = &l_182;
            int *l_423 = &g_181;
            int *l_424 = (void*)0;
            int *l_425 = &g_346;
            int *l_426 = &l_139;
            int *l_427 = &l_182;
            if (l_72)
            {
                int *l_74 = &g_51;
                int **l_73 = &l_74;
                int l_86 = (-1L);
                int l_103 = 0x4382FD97L;
                int l_115 = (-9L);
                unsigned l_183 = 4294967295UL;
                (*l_73) = (void*)0;

                ;
                if (g_69)
                    continue;
                for (g_35 = 0; (g_35 < 51); g_35 = safe_add_func_int32_t_s_s(g_35, 2))
                {
                    int *l_77 = &g_78;
                    int *l_79 = &g_78;
                    int *l_80 = &g_78;
                    int *l_81 = &g_78;
                    int *l_82 = &g_78;
                    int *l_83 = &g_78;
                    int *l_84 = &g_78;
                    int *l_85 = (void*)0;
                    int *l_87 = &g_78;
                    int *l_88 = &g_78;
                    int *l_89 = &g_78;
                    int *l_90 = (void*)0;
                    int *l_91 = &l_86;
                    int *l_92 = (void*)0;
                    int *l_93 = &g_78;
                    int *l_94 = &g_78;
                    int *l_95 = &l_86;
                    int *l_96 = &g_78;
                    int *l_97 = &g_78;
                    int *l_98 = &g_78;
                    int *l_99 = &g_78;
                    int *l_100 = &l_86;
                    int *l_101 = &g_78;
                    int *l_104 = (void*)0;
                    int *l_105 = &l_103;
                    int *l_106 = &l_103;
                    int *l_107 = &l_86;
                    int *l_108 = &l_86;
                    int *l_110 = &l_103;
                    int *l_111 = &g_78;
                    int *l_112 = &g_78;
                    int *l_113 = &l_109;
                    int *l_114 = &g_78;
                    int *l_116 = &l_109;
                    int *l_117 = &l_109;
                    int *l_118 = &l_103;
                    int *l_119 = &l_86;
                    int *l_120 = &g_78;
                    int l_123 = 1L;
                    int *l_124 = &l_86;
                    int *l_125 = (void*)0;
                    int *l_127 = (void*)0;
                    int *l_128 = &l_109;
                    int *l_129 = &l_115;
                    int *l_130 = (void*)0;
                    int *l_131 = &l_86;
                    int *l_132 = &l_123;
                    int *l_133 = (void*)0;
                    int *l_134 = (void*)0;
                    int *l_135 = &l_103;
                    int *l_136 = &l_115;
                    int *l_137 = &l_115;
                    int *l_138 = &l_103;
                    int *l_140 = &l_115;
                    int *l_141 = &l_139;
                    int *l_142 = &l_139;
                    int *l_143 = &l_115;
                    int *l_144 = &l_123;
                    int *l_145 = &l_86;
                    int *l_146 = &l_115;
                    int l_147 = 0x97B5C16BL;
                    int *l_148 = (void*)0;
                    int *l_149 = &l_139;
                    int *l_151 = (void*)0;
                    int *l_152 = &l_115;
                    int *l_154 = (void*)0;
                    int *l_155 = &l_139;
                    int *l_156 = &l_139;
                    int *l_157 = &l_115;
                    int *l_158 = &l_103;
                    int *l_159 = (void*)0;
                    unsigned l_160 = 0xA3C451EDL;
                    --l_160;
                    for (l_123 = 0; (l_123 != 28); l_123 = safe_add_func_int16_t_s_s(l_123, 1))
                    {
                        unsigned l_168 = 0xDC0F60EFL;
                        int l_172 = 0L;
                        int l_174 = 0xEB36BD20L;
                        if (p_65)
                            break;
                        l_168--;
                        --g_177;
                    }
                    ++l_183;
                }
            }
            else
            {
                int *l_186 = &l_153;
                int *l_187 = (void*)0;
                int *l_188 = &l_167;
                int l_189 = 0L;
                int *l_190 = &g_175;
                int *l_191 = (void*)0;
                int *l_192 = &g_78;
                int *l_193 = &l_167;
                int *l_194 = (void*)0;
                int *l_195 = &l_182;
                int *l_196 = &l_109;
                int *l_197 = (void*)0;
                int *l_198 = &g_175;
                int *l_199 = &g_175;
                int *l_200 = &l_166;
                int *l_201 = &l_109;
                int *l_202 = &g_175;
                int *l_203 = &g_78;
                int *l_204 = &g_181;
                int *l_205 = &l_189;
                int *l_206 = &g_175;
                int *l_207 = &l_139;
                int *l_208 = &g_181;
                int *l_209 = &g_78;
                int *l_210 = &g_181;
                int *l_212 = (void*)0;
                int *l_213 = &g_175;
                int *l_214 = &l_167;
                int l_215 = 0L;
                int *l_216 = (void*)0;
                int *l_217 = &l_215;
                int *l_218 = &g_78;
                int *l_219 = &l_171;
                int *l_220 = &l_139;
                int *l_221 = (void*)0;
                int *l_222 = &l_166;
                int *l_223 = &l_167;
                int *l_224 = &l_171;
                int *l_225 = &l_139;
                int *l_226 = &l_215;
                int *l_227 = (void*)0;
                int *l_228 = &g_175;
                int *l_229 = &l_153;
                int *l_230 = &l_167;
                int *l_231 = &l_182;
                int *l_233 = &l_189;
                int *l_234 = &l_139;
                int *l_235 = &l_171;
                int *l_236 = &l_153;
                int *l_237 = &l_139;
                int *l_238 = &l_166;
                int *l_239 = (void*)0;
                int *l_240 = &g_78;
                int *l_241 = &l_182;
                int *l_242 = &g_175;
                int *l_244 = (void*)0;
                int *l_245 = &l_215;
                int *l_246 = &l_166;
                int *l_247 = &l_109;
                int *l_249 = (void*)0;
                int l_250 = (-8L);
                int *l_251 = &l_215;
                int *l_252 = (void*)0;
                int *l_253 = &l_215;
                int *l_254 = &g_248;
                unsigned ***l_260 = &l_258;
                unsigned short l_316 = 65526UL;
                short **l_335 = &l_324;
                ++l_255;
                if (g_35)
                    continue;
                (*l_260) = l_258;
                if ((l_150 , p_66))
                {
                    int l_267 = 0L;
                    int l_268 = 9L;
                    for (l_255 = 0; (l_255 <= 9); l_255 = safe_add_func_int16_t_s_s(l_255, 4))
                    {
                        int **l_263 = &l_244;
                        (*l_198) = g_180;
                        if ((*l_217))
                            continue;
                        (*l_263) = &l_250;

                        ;
                    }

                    ;
                    (*l_225) = g_211;
                    if (g_69)
                    {
                        char l_266 = (-9L);
                        int l_271 = (-2L);
                        int **l_278 = &l_218;
                        l_266 &= (safe_add_func_uint8_t_u_u(g_78, g_248));
                        g_275++;
                        (*l_278) = &g_78;
                        (*l_278) = (*l_278);
                    }
                    else
                    {
                        short *l_283 = &g_165;
                        short *l_284 = (void*)0;
                        short *l_285 = &g_243;
                        const int l_290 = 0x5442C49EL;
                        unsigned *l_291 = &l_72;
                        (*l_218) = (((*l_241) = (((0xB777FD19L & (safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((*l_283) ^= g_232), g_181)), ((*l_285) = g_69)))) || (*l_231)) || ((*l_198) = (((l_109 &= 0x80L) , g_181) || ((((((*l_291) = ((safe_lshift_func_uint8_t_u_u((*p_62), (safe_lshift_func_uint16_t_u_u(((g_102 = (l_290 > 4UL)) , g_121), p_63)))) >= p_65)) == g_272) != g_165) < g_35) > l_139))))) || p_66);
                        if (p_65)
                            break;
                        ++g_294;
                        l_297 = &g_51;

                        ;
                    }
                }
                else
                {
                    char *l_306 = (void*)0;
                    unsigned short *l_307 = &g_308;
                    int l_311 = 0x8C3D5F11L;
                    int l_315 = 0x9FCEEBA0L;
                    int *l_333 = &l_167;
                    unsigned char **l_342 = &l_341;
                    for (g_243 = 15; (g_243 > (-14)); g_243 = safe_sub_func_uint16_t_u_u(g_243, 5))
                    {
                        int **l_300 = (void*)0;
                        int **l_301 = &l_236;
                        l_187 = &l_167;

                        ;
                        l_214 = &g_248;

                        ;
                        (*l_301) = &l_166;

                        ;
                    }

                    ;
                    ;
                    ;
                    if ((p_63 <= ((((safe_sub_func_int16_t_s_s(((g_121 &= (safe_mod_func_int32_t_s_s(((*l_193) > p_63), p_63))) | ((--(*l_307)) >= g_180)), p_63)) , ((l_311 || (safe_sub_func_int8_t_s_s((p_65 = g_33), ((g_121 || 65532UL) && l_109)))) != (*l_297))) , (void*)0) != &g_165)))
                    {
                        int l_314 = 0xEA90673AL;
                        (*l_219) = (((2L ^ g_272) , (void*)0) == l_260);
                        l_316--;
                    }
                    else
                    {
                        char l_325 = 0x0CL;
                        unsigned short *l_326 = &l_316;
                        unsigned short *l_327 = (void*)0;
                        unsigned short *l_328 = (void*)0;
                        int *l_329 = &l_315;
                        int **l_330 = &l_214;
                        (*l_254) &= (g_180 >= (safe_div_func_int16_t_s_s((((((safe_sub_func_int32_t_s_s(((((g_35 ^ ((l_109 || ((((*l_196) |= (safe_unary_minus_func_uint16_t_u(((((*l_307) ^= g_175) , l_324) == (((*l_326) = l_325) , l_307))))) < p_66) < g_51)) > (*p_64))) , g_46) == g_46) & p_65), 6L)) || g_180) | (*p_62)) != 0UL) , 0x72C4L), 0xD1ECL)));
                        (*l_330) = l_329;

                        ;
                    }

                    ;
                    if (p_65)
                    {
                        int **l_331 = &l_222;
                        int **l_332 = &l_244;
                        (*l_332) = ((*l_331) = &g_175);

                        ;
                        ;
                        (*l_223) = ((l_333 != &l_269) , l_126);
                    }
                    else
                    {
                        int **l_334 = &l_231;
                        short **l_336 = (void*)0;
                        (*l_334) = &l_311;

                        ;
                        l_336 = l_335;

                        ;
                    }

                    ;
                    ;
                    ;
                    if (((g_346 ^= ((p_63 , l_166) != ((*l_333) = ((*l_192) = ((((safe_div_func_uint32_t_u_u(g_293, ((p_65 = (safe_rshift_func_uint16_t_u_u((((*l_342) = ((*l_297) , l_341)) == &l_255), ((((*l_307) = (g_180 ^ 0x1AL)) < 0x412DL) && l_343)))) ^ g_275))) , &g_46) != l_344) & p_66))))) ^ p_63))
                    {
                        return &g_35;


                    }
                    else
                    {
                        short l_349 = 0L;
                        int *l_350 = (void*)0;
                        int *l_351 = &l_250;
                        int *l_352 = &l_109;
                        int *l_353 = (void*)0;
                        int *l_354 = (void*)0;
                        int *l_355 = &l_269;
                        int *l_356 = &l_189;
                        int *l_357 = &l_343;
                        int *l_358 = &l_189;
                        int *l_359 = &g_175;
                        int *l_360 = &g_181;
                        int *l_361 = &l_109;
                        int *l_362 = &g_346;
                        int *l_364 = (void*)0;
                        int *l_365 = (void*)0;
                        int *l_366 = &g_175;
                        int *l_367 = (void*)0;
                        int *l_368 = (void*)0;
                        int *l_369 = &l_250;
                        int *l_370 = &l_269;
                        int *l_371 = &l_215;
                        int *l_373 = &l_363;
                        int *l_374 = (void*)0;
                        (*l_229) = (safe_rshift_func_int16_t_s_s(p_66, (1L < 0xC765FF43L)));
                        if (g_69)
                            continue;
                        g_375++;
                    }
                }

                ;

                ;

                ;
                ;
            }
            l_378++;
            ++g_428;
            for (l_126 = (-7); (l_126 <= (-13)); l_126 = safe_sub_func_uint8_t_u_u(l_126, 7))
            {
                char *l_439 = &g_292;
                unsigned char *l_440 = &l_255;
                char l_445 = (-1L);
                int l_461 = 0xF927BDF2L;
                (*l_396) = (safe_lshift_func_uint16_t_u_u(((g_180 , g_372) > ((safe_sub_func_uint32_t_u_u(g_274, (g_428 != (((*l_440) |= ((--(*p_64)) >= ((*l_439) = (*l_383)))) ^ (safe_mod_func_int8_t_s_s((-1L), ((*l_420) ^ ((void*)0 == &l_378)))))))) <= 0x84F7E7FAL)), l_445));
                for (g_232 = 0; (g_232 < 28); g_232 = safe_add_func_uint16_t_u_u(g_232, 4))
                {
                    unsigned l_450 = 4294967288UL;
                    unsigned l_462 = 1UL;
                    for (l_445 = 12; (l_445 <= (-23)); --l_445)
                    {
                        unsigned char l_459 = 0UL;
                        int l_460 = 1L;
                        (*l_427) ^= l_450;
                        g_78 = (g_175 <= (((g_177 & (p_65 && ((*l_389) = ((*l_408) |= (safe_sub_func_int16_t_s_s(((g_35 , (safe_sub_func_int16_t_s_s(p_63, 0UL))) , (safe_add_func_uint16_t_u_u(((((p_66 , l_126) < (*p_64)) , l_459) < g_35), 65534UL))), p_65)))))) < (*p_64)) == p_63));
                        l_462++;
                    }
                }
                (*l_401) &= 1L;
            }
        }

        ;
        if (p_63)
        {
            const int *l_466 = &g_467;
            const int **l_465 = &l_466;
            const int *l_469 = (void*)0;
            const int **l_468 = &l_469;
            int l_511 = 0x586D9411L;
            unsigned l_524 = 0UL;
            short **l_535 = &l_324;
            unsigned short l_549 = 0x81E8L;
            const int l_556 = 1L;
            unsigned short l_568 = 0x7110L;
            unsigned short *l_577 = &l_568;
            char *l_578 = &g_121;
            unsigned char ****l_585 = &l_583;
            unsigned char *l_586 = &l_378;
            int *l_588 = &l_269;
            int l_697 = 0x9688306BL;
            int l_729 = (-6L);
            (*l_468) = ((*l_465) = &l_273);

            ;
            ;
            if ((((l_153 , (((*p_64) & (((g_176 != ((g_275 ^ (*l_297)) , p_66)) || (safe_lshift_func_uint8_t_u_s((**l_465), g_181))) || (*p_64))) && p_65)) , 3UL) & (*l_297)))
            {
                int *l_472 = &l_269;
                int *l_473 = &g_248;
                int *l_474 = (void*)0;
                int *l_475 = &l_270;
                int *l_476 = &l_270;
                int *l_477 = &g_175;
                int *l_478 = (void*)0;
                int *l_479 = (void*)0;
                int *l_480 = (void*)0;
                int *l_481 = &l_109;
                int *l_482 = &l_273;
                int *l_483 = &g_346;
                int *l_484 = &g_248;
                int *l_485 = &l_270;
                int *l_486 = &g_175;
                int *l_487 = &l_167;
                int *l_488 = &l_167;
                int *l_489 = (void*)0;
                int *l_490 = &g_175;
                int *l_491 = &l_363;
                int *l_492 = &l_167;
                int *l_493 = (void*)0;
                int *l_494 = &l_167;
                int *l_495 = &l_273;
                int *l_496 = (void*)0;
                int *l_497 = &l_153;
                int *l_498 = &g_78;
                int *l_499 = (void*)0;
                int *l_500 = &g_175;
                int *l_501 = &l_109;
                int *l_502 = &l_139;
                int *l_503 = &l_269;
                int *l_504 = (void*)0;
                int *l_505 = &l_109;
                int *l_506 = (void*)0;
                int *l_507 = &g_78;
                int *l_508 = &g_78;
                int *l_509 = &g_181;
                int *l_510 = &g_248;
                int *l_512 = &l_270;
                int *l_513 = &g_78;
                int *l_514 = &g_248;
                int *l_515 = &l_270;
                int *l_516 = &l_109;
                int *l_517 = &l_511;
                unsigned short l_518 = 65528UL;
                --l_518;
            }
            else
            {
                unsigned short l_521 = 1UL;
                int *l_532 = &l_363;
                unsigned **l_539 = &l_259;
                unsigned char **l_540 = &l_341;
                short *l_564 = &g_274;
                short **l_563 = &l_564;
                int *l_567 = &g_78;
                unsigned char *l_569 = &l_255;
                short *l_570 = &g_232;
                l_363 = (~l_521);
                g_181 ^= ((*l_532) |= (((((safe_mod_func_uint32_t_u_u(l_524, 0x1265B9D3L)) , (safe_unary_minus_func_int16_t_s((((safe_mod_func_int8_t_s_s((*l_297), (((void*)0 == l_528) ^ (**l_465)))) > (((((safe_unary_minus_func_int8_t_s(3L)) , ((l_521 != (*l_297)) , p_65)) <= l_72) == p_63) && l_521)) , (*l_297))))) , g_428) || l_531) || p_65));
                for (g_308 = (-10); (g_308 != 49); g_308 = safe_add_func_uint32_t_u_u(g_308, 5))
                {
                    short ***l_536 = &l_535;
                    (*l_536) = l_535;
                    for (g_69 = (-27); (g_69 != 20); g_69 = safe_add_func_int8_t_s_s(g_69, 7))
                    {
                        int l_541 = 0x12EFA34EL;
                        unsigned short *l_542 = &l_521;
                        int *l_543 = (void*)0;
                        int *l_544 = &g_175;
                        int *l_545 = &l_269;
                        int *l_546 = &g_181;
                        int *l_547 = &l_109;
                        int *l_548 = &g_181;
                        int l_552 = (-6L);
                        const unsigned char ***l_555 = &g_553;
                        unsigned ***l_559 = &l_539;
                        g_78 |= ((((*l_528) = l_539) == (void*)0) == (((*l_532) | 0xD2738DFAL) != ((*l_542) ^= (l_541 = ((((l_173 == ((&p_64 == l_540) < p_66)) != g_243) > 0x47D9L) , g_293)))));

                        ;
                        l_549++;
                        g_78 &= (((*l_545) |= (*l_297)) != (((l_552 <= (((*l_555) = g_553) != &p_62)) , l_556) | (safe_add_func_uint16_t_u_u(((g_232 >= (-9L)) , 0x0052L), ((*l_324) = (l_559 == &l_258))))));
                        (*l_547) = (*l_532);
                    }
                    if (g_78)
                        continue;
                }

                ;
                (*l_532) = (((*l_570) &= (l_560 || (safe_lshift_func_int8_t_s_u(p_65, ((&l_122 == ((*l_563) = ((*l_535) = &l_560))) & (l_109 ^= (safe_add_func_uint8_t_u_u((*p_64), ((*l_569) |= (p_63 & (((!((*l_567) |= (l_139 = (*l_532)))) , (l_568 , (-1L))) != 0UL))))))))))) > 0xD345L);

                ;
                ;
            }

            ;
            ;
            (*l_588) = (safe_mod_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(((0x9FL ^ ((l_109 = ((safe_lshift_func_uint8_t_u_s((*p_62), 0)) && ((((g_180 = ((*l_578) |= (((*l_577) = (p_66 | (p_63 || p_65))) > p_66))) , ((g_35 = ((safe_mod_func_uint8_t_u_u((l_153 &= (*p_64)), (((0xC6L == ((*l_586) = (safe_rshift_func_uint8_t_u_u(((((((*l_585) = ((!((void*)0 == &l_297)) , l_583)) == (void*)0) ^ (*l_297)) , (-1L)) >= g_35), (*p_64))))) , p_63) & p_66))) | (*l_297))) > p_63)) < (*l_469)) , p_66))) , (*l_297))) == 0xF38BL), g_274)) , &l_529) != g_587), 0xE96CL));
            if (((*l_469) , 0xACDF0841L))
            {
                unsigned short l_592 = 0x2EFFL;
                unsigned *l_593 = &g_428;
                unsigned *l_594 = &l_72;
                unsigned *l_595 = &l_531;
                int l_602 = 0x92E545F2L;
                int l_650 = 0L;
                int *l_657 = &g_175;
                int *l_658 = &l_139;
                int *l_659 = (void*)0;
                int *l_660 = &g_346;
                int *l_661 = &g_248;
                int *l_662 = &l_650;
                int *l_663 = &l_273;
                int *l_664 = &l_363;
                int *l_665 = &l_273;
                int *l_666 = &l_167;
                int *l_667 = (void*)0;
                int *l_668 = (void*)0;
                int *l_669 = &g_181;
                int *l_670 = &g_78;
                int *l_671 = (void*)0;
                int *l_672 = &l_153;
                int *l_673 = &g_175;
                int *l_674 = &g_248;
                int *l_675 = (void*)0;
                int *l_676 = (void*)0;
                int *l_677 = &l_511;
                int *l_678 = (void*)0;
                int *l_679 = &l_153;
                int *l_680 = &l_273;
                int *l_681 = &l_650;
                int *l_682 = &l_650;
                int *l_683 = &g_181;
                int *l_684 = &l_511;
                int *l_685 = &l_269;
                int *l_686 = &l_511;
                int *l_687 = &l_591;
                int *l_688 = &l_270;
                int *l_689 = &l_270;
                int *l_690 = (void*)0;
                int *l_691 = &l_511;
                int *l_692 = &l_167;
                int *l_693 = &l_591;
                int *l_694 = &l_591;
                int *l_695 = &l_139;
                int *l_696 = &l_602;
                int *l_698 = &l_591;
                int *l_699 = &l_591;
                int *l_700 = &l_273;
                int *l_701 = &l_273;
                int *l_702 = &g_248;
                int *l_703 = &g_175;
                int *l_704 = &l_182;
                int *l_705 = (void*)0;
                int *l_706 = &l_153;
                int *l_707 = &l_273;
                int *l_708 = &l_650;
                int *l_709 = &l_591;
                int *l_710 = &l_182;
                int *l_711 = (void*)0;
                int *l_712 = &l_167;
                int *l_713 = &l_182;
                int *l_714 = &l_270;
                int *l_715 = &l_153;
                int *l_716 = &l_273;
                int *l_717 = &l_153;
                int *l_718 = &l_109;
                int *l_719 = &l_182;
                int *l_720 = &l_139;
                int *l_721 = &l_273;
                int *l_722 = &l_269;
                int *l_723 = &g_346;
                int *l_724 = &l_697;
                int *l_725 = &l_109;
                int *l_726 = &l_511;
                int *l_727 = &l_139;
                int *l_728 = (void*)0;
                int *l_730 = (void*)0;
                int *l_731 = (void*)0;
                if ((((*l_595) &= ((*l_594) = (g_175 < ((*l_593) = ((safe_add_func_uint8_t_u_u((&l_269 == (void*)0), (((((void*)0 == &l_122) | g_375) == ((l_591 , (*l_297)) >= l_592)) & 0xAF22L))) == 4294967287UL))))) , p_66))
                {
                    for (p_63 = 0; (p_63 != 12); p_63 = safe_add_func_int32_t_s_s(p_63, 6))
                    {
                        return &g_35;


                    }
                }
                else
                {
                    unsigned char l_654 = 0xBBL;
                    for (g_272 = 2; (g_272 != (-29)); g_272--)
                    {
                        int **l_600 = &l_588;
                        int *l_603 = &l_602;
                        int *l_604 = (void*)0;
                        int l_605 = (-1L);
                        int *l_606 = &l_269;
                        int *l_607 = &l_363;
                        int *l_608 = &l_139;
                        int *l_609 = (void*)0;
                        int *l_610 = (void*)0;
                        int *l_611 = &l_605;
                        int *l_612 = (void*)0;
                        int *l_613 = (void*)0;
                        int *l_614 = &l_269;
                        int *l_615 = (void*)0;
                        int *l_616 = &g_78;
                        int *l_617 = &l_273;
                        int *l_618 = &l_270;
                        int *l_619 = &g_346;
                        int *l_620 = &l_139;
                        int *l_621 = &g_175;
                        int *l_622 = &l_182;
                        int *l_623 = &l_511;
                        int *l_624 = &l_273;
                        int *l_625 = &l_270;
                        int *l_626 = &g_181;
                        int *l_627 = &l_591;
                        int *l_628 = &l_167;
                        int *l_629 = &g_78;
                        int *l_630 = &g_181;
                        int *l_631 = &g_346;
                        int *l_632 = &l_270;
                        int *l_633 = (void*)0;
                        int *l_634 = (void*)0;
                        int *l_635 = (void*)0;
                        int *l_636 = (void*)0;
                        int *l_637 = &l_363;
                        int *l_638 = (void*)0;
                        int *l_639 = (void*)0;
                        int *l_640 = &l_167;
                        int *l_641 = &l_182;
                        int *l_642 = &l_269;
                        int *l_643 = &l_270;
                        int *l_644 = &l_591;
                        int *l_645 = &l_109;
                        int *l_646 = (void*)0;
                        int *l_647 = &l_273;
                        int *l_648 = &g_346;
                        int *l_649 = &g_346;
                        int *l_651 = &l_109;
                        int *l_652 = (void*)0;
                        int *l_653 = &l_273;
                        (*l_468) = &g_467;

                        ;
                        g_601 = ((*l_600) = &l_139);

                        ;
                        ;
                        l_654--;
                        if (p_63)
                            break;
                    }

                    ;
                    ;
                    ;
                }

                ;
                ;
                ;
                ++g_732;
                g_78 ^= (*l_663);
            }
            else
            {
                unsigned char l_737 = 0UL;
                int l_753 = 1L;
                char l_755 = 9L;
                int l_810 = (-2L);
                if ((l_735 != &l_736))
                {
                    unsigned char l_738 = 247UL;
                    short **l_739 = (void*)0;
                    unsigned *l_751 = &g_732;
                    if ((65534UL < (((*l_588) = l_173) , (*l_297))))
                    {
                        int *l_744 = (void*)0;
                        int *l_745 = &l_270;
                        (*l_588) = p_65;
                        (*l_588) = (l_738 = l_737);
                        (*l_745) = ((*l_588) = (((((**l_535) = (g_177 == 4294967295UL)) , (((*l_735) = l_739) != g_740)) > (p_66 & (~l_737))) ^ (safe_rshift_func_int8_t_s_s(l_737, g_176))));
                    }
                    else
                    {
                        (*l_588) &= p_63;
                    }
                    for (l_737 = 0; (l_737 != 4); ++l_737)
                    {
                        int **l_748 = &l_297;
                        (*l_468) = ((*l_748) = &g_248);

                        ;
                        ;
                    }

                    ;
                    ;
                    (*l_588) = (safe_add_func_int16_t_s_s((((**l_535) = (((*l_751) = p_66) , (**g_740))) , (l_752 < (*l_588))), p_65));
                    if ((l_753 = (*l_588)))
                    {
                        int *l_754 = &l_270;
                        l_363 = g_102;
                        (*l_468) = &l_139;

                        ;
                        (*l_754) = ((*l_588) = p_66);
                    }
                    else
                    {
                        unsigned *l_760 = &l_524;
                        (*l_588) = ((l_755 ^ ((*l_760) = ((*g_741) < (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((l_738 || (*p_64)), 5)), 0))))) || l_738);
                        (*l_465) = &g_78;

                        ;
                        (*l_468) = l_761;

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    int *l_762 = &l_109;
                    int *l_763 = &g_346;
                    int *l_764 = &l_139;
                    int *l_765 = &l_269;
                    int *l_766 = &l_729;
                    int *l_767 = &g_78;
                    int *l_768 = &l_511;
                    int *l_769 = &l_729;
                    int *l_770 = &l_269;
                    int l_771 = (-9L);
                    int *l_772 = &g_181;
                    int *l_773 = &l_139;
                    int *l_774 = &g_175;
                    int *l_775 = &l_153;
                    int *l_776 = &l_771;
                    int *l_777 = &l_511;
                    int *l_778 = &l_511;
                    int *l_779 = &l_753;
                    int *l_780 = &l_729;
                    int *l_781 = &l_729;
                    int *l_782 = &l_270;
                    int *l_783 = (void*)0;
                    int *l_784 = &l_729;
                    int *l_785 = &l_182;
                    int *l_786 = &l_153;
                    int *l_788 = &l_273;
                    int *l_789 = (void*)0;
                    int *l_790 = &l_771;
                    int *l_791 = &l_363;
                    int *l_792 = &g_181;
                    int *l_793 = &l_729;
                    int *l_795 = &l_270;
                    int *l_796 = &g_248;
                    int *l_797 = &l_109;
                    int *l_798 = &l_269;
                    int *l_799 = &l_363;
                    int *l_800 = (void*)0;
                    int *l_801 = &l_167;
                    int *l_802 = (void*)0;
                    int *l_803 = &l_270;
                    int *l_804 = &l_697;
                    int *l_805 = &l_753;
                    int *l_806 = &l_269;
                    int *l_807 = &l_273;
                    int *l_808 = &l_269;
                    int *l_809 = &g_346;
                    int *l_811 = &l_729;
                    int *l_812 = &l_273;
                    g_813++;
                }

                ;
                ;
                ;
                g_601 = &g_51;

                ;
                (*l_465) = &l_153;

                ;
            }

            ;
            ;
            ;
            ;
            ;
        }
        else
        {
            char l_816 = (-1L);
            unsigned char ***l_817 = &l_584;
            unsigned char ****l_818 = &l_583;
            unsigned *l_831 = &g_177;
            unsigned char l_843 = 0xF7L;
            (*l_761) = (l_816 || (((*l_818) = l_817) != (p_63 , &g_553)));
            for (l_167 = 0; (l_167 == 24); l_167++)
            {
                unsigned char l_842 = 254UL;
                for (p_65 = (-27); (p_65 != 24); ++p_65)
                {
                    unsigned *l_832 = &g_375;
                    int l_840 = 0L;
                    int l_847 = 0x820E3012L;
                    const int *l_849 = &g_248;
                    const int **l_848 = &l_849;
                    for (g_293 = 0; (g_293 >= (-27)); g_293 = safe_sub_func_uint16_t_u_u(g_293, 9))
                    {
                        unsigned char l_825 = 0x29L;
                        short **l_826 = &g_741;
                        unsigned **l_833 = &l_832;
                        unsigned *l_834 = (void*)0;
                        unsigned *l_835 = (void*)0;
                        unsigned *l_836 = &l_531;
                        unsigned short *l_837 = &g_308;
                        char *l_841 = &g_292;
                        unsigned *l_844 = (void*)0;
                        unsigned *l_845 = (void*)0;
                        unsigned *l_846 = &g_428;
                        if (l_825)
                            break;
                        l_847 ^= (((*p_64) , (((*l_846) = (((void*)0 != l_826) > ((safe_add_func_int8_t_s_s(1L, (((((safe_rshift_func_uint8_t_u_u(((((*l_841) ^= (((*l_836) = (((*l_258) = l_831) != ((*l_833) = l_832))) , (+((((((*l_837)--) , (l_840 , (g_372 > p_66))) , 0x8CA1691FL) , 0x2A56A766L) & 7UL)))) , l_842) != g_165), 2)) , 0xFBBCL) ^ (**g_740)) != 0xDFL) & 0x51B8BC6BL))) & l_843))) | (*l_297))) && g_428);

                        ;
                    }
                    (*l_848) = &g_467;

                    ;
                    g_248 = (g_293 , p_66);
                }
            }

            ;
        }

        ;
        ;
        ;
        ;
        ;
        for (g_102 = 0; (g_102 >= 2); g_102 = safe_add_func_uint8_t_u_u(g_102, 4))
        {
            int *l_852 = (void*)0;
            int *l_853 = &l_273;
            int *l_854 = &l_153;
            int *l_855 = &l_273;
            int *l_856 = &l_109;
            int *l_857 = &l_269;
            int *l_858 = (void*)0;
            int *l_859 = &l_269;
            int *l_860 = &g_248;
            int *l_861 = &g_175;
            int *l_862 = (void*)0;
            int *l_863 = &g_181;
            int *l_864 = &g_181;
            int *l_865 = &l_153;
            int *l_866 = &l_270;
            int *l_867 = &g_346;
            int *l_868 = &l_153;
            int *l_869 = &l_167;
            int *l_870 = (void*)0;
            int *l_871 = &l_269;
            int *l_872 = &l_273;
            int *l_873 = &l_270;
            int *l_874 = &l_363;
            int *l_875 = (void*)0;
            int l_876 = 0xF21586D9L;
            int *l_877 = &l_269;
            int *l_878 = &l_139;
            int *l_879 = &g_175;
            int *l_880 = (void*)0;
            int *l_881 = &l_167;
            int *l_882 = &g_175;
            int *l_883 = &g_346;
            int l_884 = 0x67C416ACL;
            int *l_885 = (void*)0;
            int *l_886 = &l_270;
            int *l_887 = &g_346;
            int l_888 = (-10L);
            int *l_889 = &g_175;
            int *l_890 = &l_884;
            int *l_891 = &l_888;
            int *l_892 = &l_153;
            int *l_893 = &g_181;
            int *l_894 = &l_884;
            int *l_895 = &l_109;
            int *l_896 = (void*)0;
            int *l_897 = &l_269;
            int *l_898 = &g_346;
            int *l_899 = &l_139;
            int *l_900 = &l_182;
            int *l_901 = &l_109;
            int *l_902 = &l_876;
            int *l_903 = &l_876;
            int *l_904 = &l_591;
            int *l_905 = &l_167;
            int *l_906 = &l_109;
            ++g_907;
            if (p_63)
                break;
        }
        if (p_66)
        {
            int **l_910 = &l_297;
            int **l_911 = &g_601;
            int *l_912 = (void*)0;
            int *l_913 = &l_182;
            int *l_914 = &l_182;
            int *l_915 = &l_591;
            int *l_916 = &g_78;
            int *l_917 = (void*)0;
            int *l_918 = &g_175;
            int *l_919 = &l_273;
            int *l_920 = &l_270;
            int *l_921 = &g_248;
            int l_922 = (-1L);
            int *l_923 = &l_922;
            int *l_924 = &l_273;
            int *l_925 = (void*)0;
            int *l_926 = (void*)0;
            int l_927 = (-5L);
            int *l_928 = &l_139;
            int *l_929 = &l_182;
            int *l_930 = &g_175;
            int *l_931 = &g_346;
            int *l_932 = &l_922;
            int *l_933 = &l_273;
            int *l_934 = &l_167;
            unsigned l_935 = 0x4E95A566L;
            (*l_911) = ((*l_910) = &l_139);

            ;
            ;
            l_935++;
            (*l_914) = ((*l_761) = (((((*l_933) &= (*g_601)) ^ (safe_rshift_func_int8_t_s_u(p_65, (*l_930)))) , (((g_428 = (!(*l_297))) >= ((void*)0 == l_940)) || (safe_sub_func_uint16_t_u_u((((((&g_553 != (void*)0) && (*g_601)) , 0xD629L) > (-8L)) | (**g_740)), 0x43ADL)))) <= (*g_741)));
        }
        else
        {
            return &g_813;



        }

        ;
        ;
    }
    else
    {
        int l_945 = 0x5B7E7C52L;
        int l_965 = 1L;
        int *l_966 = &g_175;
        for (g_293 = 0; (g_293 < 13); ++g_293)
        {
            int *l_946 = &g_175;
            unsigned short **l_962 = (void*)0;
            unsigned short *l_964 = &g_308;
            unsigned short **l_963 = &l_964;
            short **l_978 = &g_741;
            char *l_986 = &g_33;
            int l_1014 = 0x648BA44CL;
            int l_1068 = 0x85546D36L;
            int *l_1170 = &g_175;
            if (p_65)
                break;
            (*l_946) |= ((((*l_324) = ((*g_741) ^= 0x0C9AL)) != l_945) == (*l_761));
            if (((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_65, ((+(**g_740)) >= (safe_rshift_func_uint8_t_u_u((~(safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((7UL | (p_66 , ((((safe_sub_func_int32_t_s_s((g_346 , (*l_946)), (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s((l_965 = (((*l_963) = &g_308) == l_324)), 0)) || ((p_65 , (*l_761)) != 0x356DL)), 5)))) ^ (-6L)) , 0x3279L) == (**g_740)))))), 5))), (*p_64)))))), p_66)) , 0xF5167262L))
            {
                int **l_967 = &g_601;
                (*l_967) = l_966;

                ;
                (*l_966) = (*g_601);
                (*l_966) = (safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((g_243 , ((safe_rshift_func_int8_t_s_u(g_813, 7)) >= ((-1L) >= (l_978 != (void*)0)))), ((p_63 ^ (g_180 , (safe_add_func_uint8_t_u_u((*l_946), (**l_967))))) && (**g_740)))), p_66)) || (*l_761)) >= (**l_967)) , (*l_946)), g_35)), p_66));
            }
            else
            {
                int l_987 = 0x3755C66EL;
                char *l_997 = &g_293;
                int l_1016 = 0xBEE27721L;
                int l_1069 = (-8L);
                (*l_761) &= (safe_mod_func_uint8_t_u_u((*p_62), ((safe_unary_minus_func_uint16_t_u((*l_946))) & ((0x95L < (*p_64)) <= ((p_66++) , p_66)))));
                if (((l_986 != &p_65) || 0x2630B4D2L))
                {
                    l_987 |= ((*l_761) ^ (*l_966));
                    return &g_813;


                }
                else
                {
                    unsigned l_990 = 0x07B2AE9CL;
                    int l_1027 = 0xE60CDF75L;
                    int l_1029 = (-6L);
                    int l_1032 = (-8L);
                    int l_1071 = (-1L);
                    int l_1079 = 0xF98F8624L;
                    if (p_66)
                    {
                        unsigned *l_993 = &g_294;
                        int l_996 = (-9L);
                        g_346 &= (safe_rshift_func_uint8_t_u_u(l_990, ((*p_64) = ((safe_add_func_int8_t_s_s(((--(*l_993)) , (l_996 < ((void*)0 != l_997))), (((*g_741) |= (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((*l_966) || (safe_add_func_int8_t_s_s(((+0xA9L) | (*l_946)), 249UL))), (*l_761))), 2))) <= 0xC1ECL))) <= p_65))));
                    }
                    else
                    {
                        int *l_1004 = &g_175;
                        int *l_1005 = &l_363;
                        int *l_1006 = &g_181;
                        int *l_1007 = &l_139;
                        int *l_1008 = &l_109;
                        int *l_1009 = (void*)0;
                        int *l_1010 = &l_153;
                        int *l_1011 = &l_109;
                        int *l_1012 = &g_175;
                        int *l_1013 = &l_153;
                        int *l_1015 = &l_109;
                        int *l_1017 = &g_78;
                        int *l_1018 = (void*)0;
                        int *l_1019 = (void*)0;
                        int *l_1020 = &g_346;
                        int *l_1021 = &l_139;
                        int *l_1022 = &l_109;
                        int *l_1023 = &l_153;
                        int *l_1024 = &g_78;
                        int *l_1025 = &l_139;
                        int *l_1026 = &g_181;
                        int *l_1028 = &l_153;
                        int *l_1030 = &l_363;
                        int *l_1031 = &l_965;
                        int *l_1033 = &l_109;
                        int *l_1034 = &l_153;
                        int *l_1035 = &l_363;
                        int *l_1036 = &l_987;
                        int *l_1037 = &l_1027;
                        int *l_1038 = &l_153;
                        int l_1039 = 1L;
                        int *l_1040 = &l_109;
                        int *l_1041 = &l_139;
                        int *l_1042 = (void*)0;
                        int *l_1043 = &l_139;
                        int *l_1044 = &g_248;
                        int *l_1045 = (void*)0;
                        int *l_1046 = &l_109;
                        int *l_1047 = &l_1014;
                        int l_1048 = 0x002904F1L;
                        int *l_1049 = &g_78;
                        int *l_1050 = (void*)0;
                        int *l_1051 = (void*)0;
                        int *l_1052 = &g_346;
                        int *l_1053 = &l_1014;
                        int *l_1054 = (void*)0;
                        int *l_1055 = (void*)0;
                        int *l_1056 = &l_153;
                        int l_1057 = 0L;
                        int *l_1058 = &l_139;
                        int *l_1059 = &g_78;
                        int *l_1060 = &g_175;
                        int *l_1061 = &l_1032;
                        int *l_1062 = &l_987;
                        int *l_1063 = &g_175;
                        int *l_1064 = &l_1039;
                        int *l_1065 = &g_248;
                        int *l_1066 = (void*)0;
                        int *l_1067 = &g_346;
                        int *l_1070 = &l_1027;
                        int *l_1072 = (void*)0;
                        int *l_1073 = (void*)0;
                        int *l_1074 = &g_248;
                        int *l_1075 = &l_109;
                        int *l_1076 = &g_78;
                        int *l_1077 = &l_1016;
                        int *l_1078 = &l_139;
                        int *l_1080 = &l_1071;
                        int *l_1081 = &l_1068;
                        int *l_1082 = &l_153;
                        int *l_1083 = &g_346;
                        int *l_1084 = &l_1057;
                        int *l_1085 = &l_987;
                        int *l_1086 = (void*)0;
                        int *l_1087 = &l_1027;
                        int *l_1088 = (void*)0;
                        int *l_1089 = (void*)0;
                        int *l_1090 = &l_965;
                        int *l_1091 = &l_965;
                        int *l_1092 = (void*)0;
                        int *l_1093 = &l_1032;
                        int *l_1094 = (void*)0;
                        int *l_1095 = &l_153;
                        int *l_1096 = &l_1039;
                        int *l_1097 = (void*)0;
                        g_1098++;
                    }
                }
                if ((*l_946))
                    continue;
            }
            for (g_294 = 0; (g_294 > 36); g_294++)
            {
                char *l_1107 = &g_121;
                (*l_761) &= (*l_946);
                if (((safe_div_func_uint8_t_u_u((!((*p_64)++)), ((*l_1107) = (*l_966)))) || (safe_rshift_func_uint8_t_u_u(((*p_64) < p_66), (*l_946)))))
                {
                    int **l_1120 = &l_946;
                    (*l_761) = (((((*l_761) <= ((*l_946) = (*l_966))) , (safe_rshift_func_int16_t_s_u(p_66, 13))) , ((void*)0 == (*l_963))) && 0x05E7L);
                    for (l_139 = 9; (l_139 >= 12); l_139 = safe_add_func_int16_t_s_s(l_139, 2))
                    {
                        unsigned l_1114 = 1UL;
                        int *l_1115 = &l_109;
                        (*l_1115) |= ((*l_966) = l_1114);
                        g_78 ^= (safe_lshift_func_int8_t_s_s((((--(*p_64)) , 65535UL) && (**g_740)), p_66));
                    }
                    (*l_1120) = &l_109;

                    ;
                    return &g_813;


                }
                else
                {
                    unsigned l_1123 = 4294967295UL;
                    unsigned short *l_1136 = (void*)0;
                    unsigned short *l_1137 = &g_1138;
                    int l_1139 = 5L;
                    int **l_1141 = &l_966;
                    int l_1157 = (-6L);
                    (*l_1141) = (l_946 = ((g_51 < ((((*l_324) = (((-8L) && (l_1139 = (safe_mod_func_int32_t_s_s(((((l_1123 |= ((*l_966) = (*l_946))) == (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_964) = (safe_rshift_func_uint16_t_u_s(p_66, 10))), g_813)), (safe_add_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((((*l_1137) = (*l_761)) <= (p_66 || (l_1139 , p_66))) | l_1140), p_63)) <= 0UL), (*p_64))) , 0xC8AFED7BL) <= 0L), (**g_740)))))) , l_1139) , p_65), p_66)))) , (-1L))) , l_1139) == p_66)) , &g_78));

                    ;
                    ;
                    for (g_69 = 28; (g_69 < 37); g_69++)
                    {
                        int *l_1144 = &g_248;
                        int *l_1145 = &g_78;
                        int *l_1146 = &g_181;
                        int l_1147 = (-1L);
                        int *l_1148 = &g_175;
                        int *l_1149 = &l_363;
                        int l_1150 = 0x586AD7AAL;
                        int *l_1151 = &l_1014;
                        int *l_1152 = &l_965;
                        int *l_1153 = &g_248;
                        int *l_1154 = (void*)0;
                        int *l_1155 = &g_78;
                        int *l_1156 = (void*)0;
                        int *l_1158 = &g_181;
                        int *l_1159 = (void*)0;
                        int *l_1160 = &g_78;
                        int *l_1161 = &g_181;
                        int *l_1162 = &l_109;
                        int *l_1163 = (void*)0;
                        int *l_1164 = &l_139;
                        int *l_1165 = &l_1157;
                        int *l_1166 = &g_181;
                        int **l_1171 = &g_601;
                        g_1167--;
                        (*l_1171) = ((*l_1141) = l_1170);

                        ;
                        ;
                    }

                    ;
                }

                ;
            }

            ;
        }

        ;
        ;
    }

    ;

    ;
    (*l_761) &= 0x39037653L;
    return &g_1167;



}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_787, "g_787", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_907, "g_907", print_hash_value);
    transparent_crc(g_1098, "g_1098", print_hash_value);
    transparent_crc(g_1138, "g_1138", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    transparent_crc(g_1180, "g_1180", print_hash_value);
    transparent_crc(g_1329, "g_1329", print_hash_value);
    transparent_crc(g_1331, "g_1331", print_hash_value);
    transparent_crc(g_1348, "g_1348", print_hash_value);
    transparent_crc(g_1359, "g_1359", print_hash_value);
    transparent_crc(g_1549, "g_1549", print_hash_value);
    transparent_crc(g_1705, "g_1705", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
