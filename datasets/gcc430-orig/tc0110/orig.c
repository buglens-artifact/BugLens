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



static short g_10 = 0x7555L;
static char g_16 = (-1L);
static int g_17 = (-1L);
static int g_47 = (-8L);
static unsigned g_70 = 0xA4575F7FL;
static int g_84 = 2L;
static int g_88 = 1L;
static int g_104 = 0x39D13348L;
static short g_129 = (-1L);
static char g_141 = 0xB2L;
static unsigned g_169 = 0xE731193FL;
static volatile unsigned char g_197 = 0xFAL;
static int g_202 = 0xCA922C56L;
static int g_296 = 0L;
static volatile unsigned short g_306 = 65534UL;
static volatile int g_330 = 0xBF3BD94EL;
static volatile int *g_329 = &g_330;
static volatile int **g_328 = &g_329;
static char g_347 = 0xC5L;
static int g_367 = (-1L);
static short g_377 = 9L;
static int g_519 = (-7L);
static unsigned g_530 = 4294967295UL;
static unsigned char g_576 = 0x3FL;
static char g_637 = 0x0BL;
static char g_659 = (-9L);
static unsigned g_789 = 4294967292UL;
static unsigned g_862 = 0UL;
static int g_1074 = 1L;
static volatile int g_1093 = 1L;
static unsigned char g_1099 = 0x18L;
static unsigned g_1261 = 4294967292UL;
static volatile unsigned g_1357 = 0UL;
static unsigned short g_1490 = 0x79CAL;
static int *g_1582 = &g_88;
static int ** const g_1581 = &g_1582;
static int ** const *g_1580 = &g_1581;
static const unsigned g_1674 = 0UL;
static unsigned g_1711 = 0xC8A045E3L;
static unsigned char g_1904 = 0x99L;
static volatile char g_1969 = 8L;
static volatile int g_2038 = 0L;
static volatile unsigned g_2049 = 0x1EC3339AL;
static const int *g_2113 = &g_84;



static unsigned char func_1(void);
static const int func_2(unsigned p_3, unsigned char p_4, unsigned p_5, char p_6, unsigned short p_7);
static unsigned char func_14(int p_15);
static int * func_22(int p_23, int p_24, short p_25);
static unsigned char func_32(unsigned p_33, const short p_34, unsigned p_35, int * p_36, unsigned short p_37);
static short func_42(int * p_43);
static int * func_50(unsigned char p_51, short p_52, unsigned p_53);
static unsigned short func_60(int p_61, unsigned p_62, int * p_63);
static int func_64(unsigned p_65, unsigned p_66, int * p_67, unsigned p_68);
static unsigned short func_77(const int * p_78);
static unsigned char func_1(void)
{
    unsigned char l_11 = 255UL;
    int *l_2382 = &g_84;
    (*l_2382) = func_2((safe_rshift_func_int8_t_s_s(g_10, 7)), l_11, g_10, (safe_rshift_func_uint8_t_u_s(func_14(g_10), 1)), g_10);
    return (*l_2382);
}







static const int func_2(unsigned p_3, unsigned char p_4, unsigned p_5, char p_6, unsigned short p_7)
{
    unsigned short l_1575 = 0xE6B9L;
    int **l_1614 = &g_1582;
    int ***l_1613 = &l_1614;
    int l_1629 = 1L;
    int *l_1678 = &g_367;
    int l_1784 = 1L;
    int l_1793 = 4L;
    int l_1817 = (-2L);
    unsigned l_1820 = 0xE5E3AB1EL;
    int l_1823 = 0x5AAF89DAL;
    int l_1833 = 9L;
    int l_1839 = 9L;
    int l_1847 = (-2L);
    int l_1903 = 1L;
    int l_2132 = (-1L);
    unsigned char l_2328 = 248UL;
    char l_2373 = 0xE7L;
    g_17 = g_16;
    for (p_3 = 0; (p_3 >= 33); p_3 = safe_add_func_uint32_t_u_u(p_3, 2))
    {
        unsigned char l_27 = 0xB0L;
        int *l_1570 = &g_202;
        int *l_1571 = &g_47;
        int *l_1572 = &g_47;
        int *l_1573 = &g_367;
        int *l_1574 = &g_367;
        int l_1630 = 0x837CAC3EL;
        int l_1643 = 0L;
        unsigned l_1647 = 7UL;
        unsigned short l_1658 = 0x2C09L;
        unsigned l_1693 = 0x0CBF75DBL;
        for (g_17 = (-14); (g_17 >= 5); g_17 = safe_add_func_uint16_t_u_u(g_17, 2))
        {
            unsigned short l_26 = 0xA53FL;
            int **l_1566 = (void*)0;
            int **l_1567 = (void*)0;
            int *l_1569 = &g_47;
            int **l_1568 = &l_1569;
        }
        l_1575++;
        (*l_1571) = (safe_div_func_uint32_t_u_u(func_32(p_4, (p_5 > (g_1580 != (void*)0)), l_1575, func_50((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(5UL, ((((p_6 <= p_7) & 0x01A1L) & l_1575) <= g_84))), g_377)), p_6, p_3), p_4), p_6));
        if ((safe_rshift_func_int16_t_s_u(p_5, g_330)))
        {
            (*l_1572) &= (*g_1582);
        }
        else
        {
            unsigned l_1597 = 4294967291UL;
            int l_1642 = 0x52E0C5CFL;
            unsigned short l_1695 = 0x528BL;
            int **l_1700 = (void*)0;
            int l_1712 = 1L;
            if ((safe_add_func_uint16_t_u_u(l_1597, ((safe_sub_func_uint8_t_u_u((p_7 || l_1597), g_197)) ^ ((*g_1582) <= (safe_mod_func_int32_t_s_s((*g_1582), p_5)))))))
            {
                int *l_1606 = &g_84;
                for (g_17 = (-6); (g_17 == (-29)); g_17 = safe_sub_func_uint32_t_u_u(g_17, 7))
                {
                }
            }
            else
            {
                return (*l_1574);
            }
            for (l_27 = 4; (l_27 != 13); l_27 = safe_add_func_int16_t_s_s(l_27, 1))
            {
                int **l_1619 = (void*)0;
                int ***l_1689 = &l_1619;
                unsigned l_1694 = 0UL;
            }
            (**g_328) |= (*g_1582);
            for (l_1630 = 14; (l_1630 < 5); l_1630 = safe_sub_func_uint8_t_u_u(l_1630, 5))
            {
                unsigned l_1723 = 1UL;
                const int *l_1726 = &g_17;
                int l_1750 = 7L;
            }
        }
    }
    for (g_576 = 26; (g_576 < 35); g_576 = safe_add_func_uint32_t_u_u(g_576, 8))
    {
        int *l_1769 = &g_367;
        int *l_1770 = &l_1629;
        int *l_1771 = &g_84;
        int *l_1772 = &g_1074;
        int *l_1773 = &g_88;
        int *l_1774 = &g_84;
        int *l_1775 = (void*)0;
        int *l_1776 = &g_1074;
        int *l_1777 = &g_47;
        int l_1778 = 0x9AF5E276L;
        int *l_1779 = &l_1778;
        int *l_1780 = (void*)0;
        int *l_1781 = &g_84;
        int *l_1782 = &g_47;
        int l_1783 = (-8L);
        int *l_1785 = &g_367;
        int *l_1786 = &g_202;
        int *l_1787 = &l_1784;
        int *l_1788 = (void*)0;
        int *l_1789 = &g_1074;
        int *l_1790 = &l_1784;
        int *l_1791 = (void*)0;
        int *l_1792 = &g_88;
        int *l_1794 = &g_104;
        int *l_1795 = &l_1783;
        int *l_1796 = (void*)0;
        int *l_1797 = &g_367;
        int *l_1798 = &g_104;
        int *l_1799 = &l_1784;
        int *l_1800 = (void*)0;
        int *l_1801 = &l_1784;
        int *l_1802 = &g_17;
        int *l_1803 = &g_88;
        int *l_1804 = &g_84;
        int l_1805 = 0x81B79C7CL;
        int *l_1806 = &l_1783;
        int *l_1807 = &g_17;
        int *l_1808 = &g_202;
        int *l_1809 = &g_17;
        int *l_1810 = &l_1805;
        int l_1811 = 0x98D428CFL;
        int *l_1812 = &g_84;
        int *l_1813 = &l_1629;
        int *l_1814 = &g_47;
        int *l_1815 = &l_1805;
        int *l_1816 = &g_47;
        int *l_1818 = &l_1811;
        int *l_1819 = &l_1805;
        int *l_1824 = &g_1074;
        int *l_1825 = &g_202;
        int *l_1826 = (void*)0;
        int *l_1827 = &g_84;
        int *l_1828 = &g_17;
        int *l_1829 = &g_1074;
        int *l_1830 = (void*)0;
        int *l_1831 = &l_1817;
        int *l_1832 = &g_88;
        int *l_1834 = &l_1817;
        int *l_1835 = &g_202;
        int *l_1836 = &l_1778;
        int *l_1837 = &l_1793;
        int *l_1838 = &l_1833;
        int l_1840 = 0x1A70D0CEL;
        int l_1841 = 0L;
        int *l_1842 = &g_1074;
        int *l_1843 = &l_1817;
        int *l_1844 = &l_1840;
        int *l_1845 = (void*)0;
        int *l_1846 = &l_1793;
        int *l_1848 = &g_1074;
        int l_1849 = 0L;
        int *l_1850 = &g_47;
        int *l_1851 = &l_1793;
        int l_1852 = 1L;
        int *l_1853 = (void*)0;
        int *l_1854 = &l_1783;
        int *l_1855 = &g_104;
        int *l_1856 = &g_202;
        int *l_1857 = &l_1784;
        int *l_1858 = &l_1784;
        int *l_1859 = &l_1783;
        int *l_1860 = (void*)0;
        int *l_1861 = &l_1784;
        int l_1862 = 0xECDCD614L;
        int *l_1863 = (void*)0;
        int *l_1864 = &g_202;
        int *l_1865 = (void*)0;
        int *l_1866 = &l_1840;
        int *l_1867 = &g_84;
        int *l_1868 = &l_1862;
        int *l_1869 = (void*)0;
        int *l_1870 = &l_1839;
        int l_1871 = 0x65C65652L;
        int *l_1872 = &g_367;
        int *l_1873 = &l_1778;
        int *l_1874 = &l_1811;
        int *l_1875 = &g_47;
        int *l_1876 = &l_1841;
        int *l_1877 = &g_88;
        int *l_1878 = (void*)0;
        int *l_1879 = &l_1783;
        int *l_1880 = &l_1784;
        int *l_1881 = &l_1852;
        int *l_1882 = &l_1784;
        int *l_1883 = &g_17;
        int *l_1884 = &l_1784;
        int *l_1885 = (void*)0;
        int *l_1886 = &g_1074;
        int *l_1887 = &l_1841;
        int l_1888 = 0L;
        int *l_1889 = &l_1871;
        int *l_1890 = &l_1817;
        int *l_1891 = &l_1778;
        int *l_1892 = &l_1823;
        int *l_1893 = &g_104;
        int *l_1894 = &l_1805;
        int *l_1895 = &l_1833;
        int *l_1896 = (void*)0;
        int l_1897 = (-1L);
        int *l_1898 = &g_84;
        int *l_1899 = &g_367;
        int *l_1900 = &g_88;
        int *l_1901 = &l_1849;
        int *l_1902 = &l_1849;
        (**g_1580) = l_1769;
        ++l_1820;
        g_1904--;
    }
    if ((safe_lshift_func_int8_t_s_u((**l_1614), ((void*)0 != (*g_1580)))))
    {
        char l_1918 = 0xD1L;
        int l_1919 = (-2L);
        int l_1929 = 0x1A2604E5L;
        int l_1944 = (-1L);
        int ** const l_2081 = &g_1582;
        unsigned l_2090 = 9UL;
        int ***l_2141 = &l_1614;
        unsigned short l_2213 = 0x8062L;
        int l_2282 = 1L;
        int l_2286 = 2L;
        int l_2296 = 0xF3755F7EL;
        if (func_42((*g_1581)))
        {
            int * const l_1911 = &g_88;
            int *l_1912 = &l_1833;
            int *l_1920 = &l_1847;
            int *l_1921 = &l_1793;
            int *l_1922 = &l_1833;
            int *l_1923 = &l_1847;
            int *l_1924 = &g_84;
            int *l_1925 = &l_1784;
            int *l_1926 = &l_1847;
            int *l_1927 = (void*)0;
            int *l_1928 = &l_1919;
            int *l_1930 = &l_1847;
            int *l_1931 = &l_1847;
            int *l_1932 = &g_17;
            int *l_1933 = &l_1929;
            int *l_1934 = &g_47;
            int *l_1935 = &l_1817;
            int *l_1936 = &l_1847;
            int *l_1937 = &l_1817;
            int *l_1938 = &g_367;
            int *l_1939 = &l_1833;
            int *l_1940 = (void*)0;
            int *l_1941 = &l_1929;
            int *l_1942 = (void*)0;
            int *l_1943 = &l_1784;
            int *l_1945 = &g_17;
            int *l_1946 = &g_88;
            int *l_1947 = &g_367;
            int *l_1948 = &l_1817;
            int *l_1949 = &l_1793;
            int *l_1950 = &l_1817;
            int *l_1951 = &l_1903;
            int *l_1952 = (void*)0;
            int *l_1953 = &l_1629;
            int *l_1954 = (void*)0;
            int l_1955 = 8L;
            int l_1956 = 0L;
            int l_1957 = 0x0EF408D1L;
            int *l_1958 = &l_1847;
            int *l_1959 = &l_1793;
            int *l_1960 = (void*)0;
            int *l_1961 = &l_1944;
            int *l_1962 = &l_1847;
            int *l_1963 = &l_1956;
            int *l_1964 = &g_17;
            int *l_1965 = &l_1957;
            int *l_1966 = &g_1074;
            int *l_1967 = &g_84;
            int *l_1968 = &l_1957;
            int *l_1970 = &g_47;
            int *l_1971 = &l_1817;
            int *l_1972 = &l_1793;
            int *l_1973 = &l_1793;
            int *l_1974 = (void*)0;
            int *l_1975 = (void*)0;
            int *l_1976 = (void*)0;
            int *l_1977 = &g_17;
            int *l_1978 = &l_1929;
            int *l_1979 = (void*)0;
            int *l_1980 = (void*)0;
            int *l_1981 = (void*)0;
            int *l_1982 = &g_104;
            int *l_1983 = &l_1929;
            int *l_1984 = &l_1793;
            int *l_1985 = &g_88;
            int *l_1986 = &g_88;
            int *l_1987 = &l_1929;
            int *l_1988 = &g_88;
            int *l_1989 = (void*)0;
            int *l_1990 = &g_84;
            int *l_1991 = &g_47;
            int l_1992 = 1L;
            int *l_1993 = (void*)0;
            int *l_1994 = (void*)0;
            int *l_1995 = &l_1629;
            int *l_1996 = &l_1629;
            int *l_1997 = (void*)0;
            int *l_1998 = &g_202;
            int *l_1999 = &g_47;
            int *l_2000 = &g_17;
            int *l_2001 = (void*)0;
            int *l_2002 = (void*)0;
            int *l_2003 = &l_1833;
            int *l_2004 = &g_367;
            int *l_2005 = &g_104;
            int *l_2006 = &l_1919;
            int *l_2007 = &g_367;
            int *l_2008 = &l_1817;
            int *l_2009 = (void*)0;
            int *l_2010 = &l_1956;
            int *l_2011 = (void*)0;
            int *l_2012 = &l_1957;
            int *l_2013 = (void*)0;
            int *l_2014 = (void*)0;
            int *l_2015 = &g_1074;
            int *l_2016 = &l_1955;
            int *l_2017 = &g_202;
            int *l_2018 = (void*)0;
            int *l_2019 = &l_1833;
            int *l_2020 = &l_1956;
            int *l_2021 = &l_1784;
            int *l_2022 = &l_1847;
            int *l_2023 = &l_1957;
            int *l_2024 = &l_1944;
            int *l_2025 = &l_1919;
            int *l_2026 = &l_1629;
            int *l_2027 = &l_1929;
            int *l_2028 = &l_1903;
            int l_2029 = (-1L);
            int *l_2030 = &g_17;
            int *l_2031 = &l_1919;
            int *l_2032 = &g_88;
            int *l_2033 = &g_17;
            int *l_2034 = &g_84;
            int *l_2035 = &g_104;
            int *l_2036 = &l_1784;
            int l_2037 = (-5L);
            int *l_2039 = (void*)0;
            int *l_2040 = &l_1784;
            int *l_2041 = (void*)0;
            int *l_2042 = &l_1817;
            int *l_2043 = (void*)0;
            int *l_2044 = (void*)0;
            int *l_2045 = &l_1929;
            int *l_2046 = &l_1817;
            int *l_2047 = (void*)0;
            int *l_2048 = &g_47;
            (**l_1614) = p_5;
            for (l_1817 = 22; (l_1817 >= (-25)); l_1817--)
            {
                int * const **l_1917 = (void*)0;
                l_1912 = l_1911;
                (*g_1582) ^= 0xBD6CC27DL;
                (**g_328) = (safe_sub_func_int16_t_s_s((((safe_add_func_int8_t_s_s((l_1917 == (void*)0), g_296)) <= p_4) || (&l_1911 != (*l_1613))), l_1918));
            }
            (*l_1678) = (*l_1911);
            ++g_2049;
        }
        else
        {
            unsigned l_2060 = 0x52BB8205L;
            const int *l_2066 = &l_1784;
            int ***l_2074 = &l_1614;
            if ((safe_mod_func_uint8_t_u_u(g_530, ((*g_329) && (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((p_7 & (p_3 || (7UL <= l_1919))) || (~0x85L)), 1)), 15)) || (l_1918 & func_77((*g_1581)))) != p_5)))))
            {
                const unsigned short l_2061 = 0x150AL;
                for (g_1074 = (-2); (g_1074 >= (-5)); g_1074--)
                {
                    (**g_1580) = func_50(p_4, l_2060, (l_2061 | ((-5L) < ((((safe_add_func_int16_t_s_s(((0UL | 0xA26E484EL) > (*l_1678)), (l_2060 <= (-1L)))) <= l_2061) < (**g_328)) != p_3))));
                    for (g_202 = 19; (g_202 == (-8)); g_202 = safe_sub_func_uint8_t_u_u(g_202, 5))
                    {
                        const int **l_2067 = &l_2066;
                        (*l_2067) = l_2066;
                    }
                }
            }
            else
            {
                int ***l_2073 = &l_1614;
                for (g_347 = 0; (g_347 > (-29)); g_347 = safe_sub_func_int32_t_s_s(g_347, 4))
                {
                    unsigned char l_2070 = 9UL;
                    (*l_1678) &= p_5;
                }
            }
            (**l_2074) = func_50((3L && (l_2074 != (void*)0)), ((safe_div_func_uint16_t_u_u(p_4, g_88)) & ((**g_1580) == (**l_2074))), ((safe_lshift_func_uint16_t_u_s((((p_7 != (-1L)) != l_1918) != 4294967295UL), l_1918)) == 0x3FL));
            (**l_1613) = func_22((safe_add_func_uint8_t_u_u(((((l_2081 == (*l_1613)) == (((0x0B7B2F82L >= func_32((safe_mod_func_uint8_t_u_u(((p_4 <= (safe_add_func_uint16_t_u_u((p_7 != (safe_mod_func_uint16_t_u_u((g_530 != (safe_sub_func_int32_t_s_s(0L, (0x5CL <= 0xB7L)))), p_4))), 0x2E54L))) ^ 0xB4L), (-1L))), g_1969, p_3, (*l_2081), p_6)) ^ 0x3E63L) || (*l_1678))) | p_6) == p_4), 0x9FL)), p_5, p_3);
        }
        if (l_2090)
        {
            (*l_2081) = (*l_2081);
        }
        else
        {
            char l_2095 = 1L;
            unsigned char l_2096 = 5UL;
            int l_2104 = 0x50E775E4L;
            int * const *l_2140 = &l_1678;
            int * const **l_2139 = &l_2140;
            for (g_70 = 0; (g_70 < 9); g_70 = safe_add_func_uint16_t_u_u(g_70, 7))
            {
                if ((safe_rshift_func_int16_t_s_u((-9L), g_47)))
                {
                    (*l_2081) = (*l_2081);
                }
                else
                {
                    return p_3;
                }
                ++l_2096;
            }
            for (l_1847 = (-14); (l_1847 >= (-17)); l_1847 = safe_sub_func_int8_t_s_s(l_1847, 2))
            {
                short l_2101 = (-1L);
                char l_2120 = 0L;
            }
        }
        (**l_1613) = (**l_2141);
        if ((((**l_2081) || (***l_2141)) > (safe_add_func_int32_t_s_s(func_14(func_14((safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((&l_1614 != &l_2081) & ((p_6 != 0L) ^ (**l_1614))), ((0x040A83FEL < p_4) | (*g_2113)))), 0x60L)))), p_6))))
        {
            int l_2150 = 0x4301535CL;
            int l_2155 = 0x3B6E06D3L;
            int l_2156 = 0xDA48272DL;
            int l_2160 = 4L;
            (**g_1581) = l_2150;
            if (((*g_1580) != (*l_1613)))
            {
                (***g_1580) = (safe_add_func_int16_t_s_s((g_1711 > ((*g_1580) != (void*)0)), (safe_lshift_func_int8_t_s_u(l_2150, 1))));
                (***g_1580) = (*g_1582);
                (**g_1580) = (*g_1581);
            }
            else
            {
                int *l_2157 = &l_1839;
                int *l_2158 = &l_1793;
                int *l_2159 = &l_1903;
                int *l_2161 = &g_88;
                int *l_2162 = &g_84;
                int l_2163 = 0x9F62754EL;
                int *l_2164 = &l_1784;
                int *l_2165 = &l_2156;
                int *l_2166 = &g_17;
                int *l_2167 = &l_1847;
                int *l_2168 = &g_47;
                int *l_2169 = &l_1823;
                int *l_2170 = (void*)0;
                int *l_2171 = &l_1903;
                int *l_2172 = &g_84;
                int *l_2173 = &l_1929;
                int *l_2174 = &l_1784;
                int *l_2175 = &l_2163;
                int *l_2176 = &l_1944;
                int *l_2177 = &l_1817;
                int *l_2178 = &g_47;
                int *l_2179 = &g_84;
                int *l_2180 = &l_1833;
                int *l_2181 = (void*)0;
                int *l_2182 = &l_1944;
                int *l_2183 = &g_104;
                int *l_2184 = &g_47;
                int *l_2185 = (void*)0;
                int *l_2186 = &l_1784;
                int *l_2187 = (void*)0;
                int *l_2188 = &g_88;
                int *l_2189 = (void*)0;
                int *l_2190 = &g_202;
                int *l_2191 = &l_1903;
                int *l_2192 = &g_1074;
                int *l_2193 = &l_1839;
                int *l_2194 = (void*)0;
                int *l_2195 = &l_1944;
                int *l_2196 = (void*)0;
                int *l_2197 = &g_104;
                int *l_2198 = &g_88;
                int *l_2199 = &l_1929;
                int *l_2200 = &l_1793;
                int *l_2201 = &l_1784;
                int *l_2202 = &l_2132;
                int *l_2203 = (void*)0;
                int *l_2204 = (void*)0;
                int *l_2205 = &g_88;
                int *l_2206 = &g_88;
                int *l_2207 = &g_84;
                int *l_2208 = &g_202;
                int *l_2209 = &l_1793;
                int *l_2210 = (void*)0;
                int *l_2211 = &l_1823;
                int *l_2212 = (void*)0;
                --l_2213;
            }
        }
        else
        {
            int *l_2216 = &l_1929;
            int *l_2217 = (void*)0;
            int *l_2218 = &l_1929;
            int *l_2219 = (void*)0;
            int *l_2220 = &l_1784;
            int *l_2221 = &l_1903;
            int *l_2222 = &l_1903;
            int *l_2223 = &g_367;
            int *l_2224 = &g_84;
            int *l_2225 = &l_1833;
            int *l_2226 = (void*)0;
            int *l_2227 = (void*)0;
            int *l_2228 = (void*)0;
            int *l_2229 = &l_1919;
            int *l_2230 = &l_1817;
            int *l_2231 = &l_1823;
            int *l_2232 = &g_84;
            int *l_2233 = &g_84;
            int *l_2234 = (void*)0;
            int *l_2235 = &l_1784;
            int *l_2236 = &l_1629;
            int *l_2237 = &g_104;
            int *l_2238 = &l_1784;
            int *l_2239 = (void*)0;
            int *l_2240 = &l_1903;
            int *l_2241 = (void*)0;
            int *l_2242 = &l_1817;
            int *l_2243 = &l_2132;
            int *l_2244 = &g_17;
            int *l_2245 = &g_88;
            int *l_2246 = &l_2132;
            int *l_2247 = &g_17;
            int *l_2248 = (void*)0;
            int *l_2249 = &l_1944;
            int *l_2250 = (void*)0;
            int *l_2251 = (void*)0;
            int *l_2252 = &l_1629;
            int *l_2253 = &l_1793;
            int *l_2254 = &l_1817;
            int *l_2255 = &l_1847;
            int *l_2256 = &g_367;
            int *l_2257 = &g_202;
            int *l_2258 = &l_1833;
            int *l_2259 = &g_104;
            int *l_2260 = &l_2132;
            int *l_2261 = &l_1817;
            int *l_2262 = &l_2132;
            int *l_2263 = &g_84;
            int *l_2264 = &l_1847;
            int *l_2265 = &l_1929;
            int *l_2266 = &g_17;
            int *l_2267 = &l_1784;
            int *l_2268 = &l_1839;
            int *l_2269 = (void*)0;
            int *l_2270 = &g_104;
            int *l_2271 = &g_367;
            int *l_2272 = &g_202;
            int *l_2273 = &l_1839;
            int *l_2274 = &g_202;
            int *l_2275 = (void*)0;
            int *l_2276 = &g_88;
            int *l_2277 = &l_1839;
            int *l_2278 = (void*)0;
            int *l_2279 = (void*)0;
            int *l_2280 = &l_1839;
            int *l_2281 = &l_1784;
            int *l_2283 = &l_1793;
            int *l_2284 = (void*)0;
            int *l_2285 = (void*)0;
            int *l_2287 = (void*)0;
            int *l_2288 = (void*)0;
            int *l_2289 = &g_84;
            int *l_2290 = &l_1847;
            int *l_2291 = &g_17;
            int l_2292 = 0x8EF945E3L;
            int *l_2293 = &l_1919;
            int *l_2294 = &l_1629;
            int *l_2295 = &l_1793;
            int *l_2297 = &g_202;
            int *l_2298 = &l_1784;
            int *l_2299 = &l_1919;
            int *l_2300 = (void*)0;
            unsigned short l_2301 = 1UL;
            unsigned l_2315 = 3UL;
            const unsigned short l_2357 = 1UL;
            (***l_1613) = (((*l_1678) > p_6) != ((**l_2081) != 1UL));
            l_2301--;
            for (g_10 = (-14); (g_10 >= 1); g_10++)
            {
                int l_2310 = 0xABE62A68L;
                int *l_2329 = &l_2296;
                for (g_141 = 0; (g_141 <= (-23)); g_141--)
                {
                    int ***l_2318 = &l_1614;
                    (*l_2230) |= (safe_rshift_func_uint8_t_u_u((0xD8L < func_14(((l_2310 == (safe_rshift_func_uint8_t_u_s((!(safe_sub_func_uint8_t_u_u((g_47 ^ p_4), (65534UL & l_2315)))), (safe_lshift_func_int8_t_s_u((l_2310 || g_862), p_4))))) != (***l_1613)))), g_519));
                    (*l_2318) = (*g_1580);
                }
                if (p_6)
                    break;
                if (((safe_add_func_uint8_t_u_u(func_64(((***l_2141) >= (g_659 != (((((safe_rshift_func_uint8_t_u_s(func_14((*g_1582)), (safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(g_862, l_2310)) > (*l_1678)) < p_6), 4)))))) < ((*g_2113) <= p_5)) <= p_6) ^ p_4) | (*l_2224)))), l_2328, l_2329, g_169), (*l_1678))) >= g_296))
                {
                    int l_2330 = 1L;
                    if (p_6)
                        break;
                    l_2330 |= 0x03585D76L;
                }
                else
                {
                    unsigned char l_2344 = 0x46L;
                    for (l_2292 = 7; (l_2292 == 7); ++l_2292)
                    {
                        int l_2335 = 8L;
                        (*l_2221) |= ((p_5 ^ p_6) | ((safe_rshift_func_int16_t_s_s(l_2335, 1)) ^ ((g_84 || (safe_sub_func_uint8_t_u_u(p_5, (**l_1614)))) == func_14(((***l_2141) == (0L && func_14(p_7)))))));
                        (*l_2257) ^= ((void*)0 == (**l_2141));
                        (***l_1613) &= (((safe_mod_func_uint8_t_u_u((g_1969 == p_4), (g_1074 & (g_1490 && ((safe_div_func_uint8_t_u_u(0UL, l_2335)) > (safe_div_func_int16_t_s_s((g_519 > (*l_2329)), p_7))))))) >= l_2344) | p_4);
                        (*l_2218) ^= (((0L < p_5) <= (safe_add_func_int32_t_s_s(func_14((*g_1582)), ((safe_mod_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u(g_306, 15)) >= g_530) ^ (safe_add_func_int8_t_s_s(1L, (((void*)0 == &l_2223) == p_4)))), p_4)) == 8UL)))) & (**l_1614));
                    }
                    for (g_84 = 18; (g_84 >= 21); g_84 = safe_add_func_uint32_t_u_u(g_84, 3))
                    {
                        (*l_2256) = ((-1L) || (***l_1613));
                        (*l_2237) &= func_14(p_3);
                        (*l_2294) |= (p_5 <= (safe_mod_func_int8_t_s_s(g_10, p_5)));
                        return l_2357;
                    }
                }
            }
            (*l_2232) ^= (safe_sub_func_uint8_t_u_u(((*l_2081) != (*g_328)), (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((**l_2141) == (void*)0), (safe_sub_func_int8_t_s_s((g_1093 >= p_7), 1UL)))), ((-1L) <= ((**l_2081) | p_4))))));
        }
    }
    else
    {
        unsigned short l_2368 = 65535UL;
        (**g_1581) = ((0xA932L < (safe_lshift_func_int8_t_s_u((!l_2368), (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((p_7 == 0xCAB0L) || (l_2368 <= g_129)), 5)), p_4))))) != p_4);
        (**l_1613) = func_50(((g_296 || p_5) < (***l_1613)), l_2368, (safe_mod_func_uint16_t_u_u(((**l_1613) != (*g_328)), ((((((safe_rshift_func_int8_t_s_s((-1L), ((-3L) == (safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(g_17, (*l_1678))), l_2368))))) || g_1490) && g_169) <= 0L) != 0xDE7CA368L) | p_6))));
    }
    return (*g_2113);
}







static unsigned char func_14(int p_15)
{
    g_16 = g_10;
    return p_15;
}







static int * func_22(int p_23, int p_24, short p_25)
{
    short l_1549 = 5L;
    unsigned char l_1552 = 255UL;
    int ***l_1559 = (void*)0;
    const int l_1564 = (-8L);
    int *l_1565 = &g_104;
    (**g_328) ^= l_1549;
    p_24 = ((((((((safe_div_func_int8_t_s_s(g_862, g_1093)) | (l_1552 > (((~(safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_70, (safe_add_func_uint8_t_u_u((l_1549 < (2UL <= (&g_328 != l_1559))), ((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(func_14(g_576), p_23)) < l_1549), 0xF81C155FL)) == p_25))))), g_367))) <= p_23) || g_129))) != 0x83L) != l_1549) == g_169) | l_1564) & p_23) >= p_24);
    (*g_328) = (void*)0;
    return l_1565;
}







static unsigned char func_32(unsigned p_33, const short p_34, unsigned p_35, int * p_36, unsigned short p_37)
{
    int *l_44 = &g_17;
    const int *l_1368 = &g_88;
    short l_1536 = 8L;
    const unsigned l_1547 = 4294967295UL;
    int l_1548 = 0x511A1793L;
    for (p_37 = (-12); (p_37 < 19); p_37 = safe_add_func_uint8_t_u_u(p_37, 3))
    {
        int ** const l_1360 = &l_44;
        int l_1375 = (-7L);
    }
    l_1548 &= (((safe_rshift_func_uint8_t_u_u(p_34, 6)) < (func_42(l_44) != g_1261)) < ((safe_add_func_int16_t_s_s(((&p_36 == &g_329) ^ (*l_44)), ((((((g_637 | ((*l_44) & p_35)) | 0x9CC4B922L) == g_576) > g_530) < l_1547) | 0x76F7L))) || g_367));
    return g_169;
}







static short func_42(int * p_43)
{
    int l_54 = 1L;
    int *l_359 = &g_104;
    int ** const l_358 = &l_359;
    const unsigned l_381 = 0xC3C14CB0L;
    unsigned char l_384 = 0UL;
    int l_415 = 0x839DCD77L;
    int l_429 = (-1L);
    int l_494 = (-9L);
    int l_496 = 0x7C3AA316L;
    int l_521 = 0L;
    int l_569 = 0L;
    unsigned l_1140 = 3UL;
    unsigned l_1164 = 0x2227AB92L;
    for (g_10 = 0; (g_10 > (-4)); g_10 = safe_sub_func_int16_t_s_s(g_10, 2))
    {
        const unsigned l_362 = 4294967286UL;
        short l_402 = 7L;
        short l_409 = (-10L);
        int l_445 = (-1L);
        int l_472 = 9L;
        int l_586 = (-7L);
        unsigned short l_667 = 3UL;
        unsigned l_871 = 0xB870A253L;
        int l_1059 = 0x48449C6FL;
        int l_1071 = (-5L);
        const int **l_1145 = (void*)0;
        for (g_47 = 0; (g_47 == (-9)); g_47--)
        {
            int *l_353 = &g_84;
            int **l_352 = &l_353;
            int l_411 = 0x2523ACF0L;
            int l_440 = 0x2B4994ACL;
            unsigned l_583 = 1UL;
            int **l_587 = &l_353;
            int l_754 = 0x9C1A3CEEL;
            int l_761 = (-8L);
            (*l_352) = func_50(l_54, g_47, (safe_rshift_func_uint8_t_u_u(0x1CL, 7)));
            for (g_202 = 0; (g_202 > 6); ++g_202)
            {
                (*l_352) = p_43;
                (**g_328) = (~(0xF2CBL | (&p_43 != (void*)0)));
            }
        }
    }
    if ((**l_358))
    {
        return g_104;
    }
    else
    {
        unsigned l_1172 = 0x40F3624FL;
        int l_1225 = 0x4286AC16L;
        unsigned l_1317 = 0x0DF1E9CBL;
        int l_1326 = 0x1DDB39A8L;
        int l_1344 = 0xC2DD38DEL;
        for (g_84 = 0; (g_84 >= 6); ++g_84)
        {
            unsigned l_1169 = 4294967289UL;
            unsigned char l_1177 = 6UL;
            int l_1269 = (-3L);
            unsigned short l_1270 = 0x2393L;
            int *l_1287 = &g_367;
            int *l_1288 = &g_88;
            int *l_1289 = &l_415;
            int *l_1290 = (void*)0;
            int *l_1291 = &l_429;
            int *l_1292 = &l_494;
            int *l_1293 = &l_496;
            int *l_1294 = &l_1225;
            int *l_1295 = &l_521;
            int *l_1296 = &l_415;
            int *l_1297 = &g_47;
            int *l_1298 = &g_202;
            int *l_1299 = (void*)0;
            int *l_1300 = &l_429;
            int *l_1301 = &l_1269;
            int *l_1302 = &g_47;
            int *l_1303 = (void*)0;
            int *l_1304 = &l_496;
            int *l_1305 = &g_367;
            int *l_1306 = (void*)0;
            short l_1307 = 0x8AEFL;
            int *l_1308 = &g_202;
            int *l_1309 = (void*)0;
            int *l_1310 = &l_415;
            int *l_1311 = &g_1074;
            int *l_1312 = (void*)0;
            int *l_1313 = (void*)0;
            int *l_1314 = (void*)0;
            int *l_1315 = &g_1074;
            int *l_1316 = (void*)0;
            int *l_1320 = &l_1225;
            int *l_1321 = &g_47;
            int *l_1322 = &l_1225;
            int *l_1323 = &g_47;
            int *l_1324 = (void*)0;
            int *l_1325 = &l_415;
            int *l_1327 = &l_429;
            int *l_1328 = &g_367;
            int *l_1329 = &l_496;
            int *l_1330 = &l_429;
            int *l_1331 = (void*)0;
            int *l_1332 = &l_1225;
            int *l_1333 = (void*)0;
            int *l_1334 = &l_521;
            int *l_1335 = &l_1269;
            int *l_1336 = &g_88;
            int *l_1337 = &l_521;
            int *l_1338 = &l_1326;
            int *l_1339 = (void*)0;
            int *l_1340 = &l_494;
            int *l_1341 = &l_1269;
            int *l_1342 = &g_367;
            int *l_1343 = &l_521;
            int *l_1345 = &l_494;
            int *l_1346 = &g_47;
            int *l_1347 = &l_494;
            int *l_1348 = &l_1326;
            int *l_1349 = &l_415;
            int *l_1350 = &g_1074;
            int *l_1351 = (void*)0;
            int *l_1352 = &g_47;
            int *l_1353 = &l_496;
            int *l_1354 = &l_496;
            int *l_1355 = (void*)0;
            int l_1356 = 5L;
        }
        return g_367;
    }
}







static int * func_50(unsigned char p_51, short p_52, unsigned p_53)
{
    int *l_69 = &g_17;
    for (p_52 = 0; (p_52 <= (-9)); p_52 = safe_sub_func_uint32_t_u_u(p_52, 9))
    {
        int *l_59 = &g_17;
        return l_59;
    }
    if ((func_60((func_64(p_51, g_47, l_69, ((void*)0 == l_69)) > ((*l_69) <= (*l_69))), p_51, l_69) <= (*l_69)))
    {
        int l_349 = 0xEB1A2BFFL;
        (**g_328) &= l_349;
    }
    else
    {
        int * const l_350 = (void*)0;
        int **l_351 = &l_69;
        (*g_329) = p_53;
        (*l_351) = l_350;
        return l_69;
    }
    return &g_47;
}







static unsigned short func_60(int p_61, unsigned p_62, int * p_63)
{
    short l_319 = 0L;
    int *l_323 = &g_17;
    int **l_332 = &l_323;
    int *l_348 = &g_17;
    if (g_296)
    {
        int **l_309 = (void*)0;
        int *l_311 = &g_202;
        int **l_310 = &l_311;
        unsigned l_316 = 0x59954026L;
        int *l_320 = &g_202;
        (*l_310) = &g_17;
        (*l_320) = (safe_rshift_func_uint8_t_u_u(g_70, (+(safe_lshift_func_int16_t_s_u(l_316, ((0x1F07L ^ (0x71D37E9AL < (((safe_sub_func_uint32_t_u_u(p_62, (*l_311))) & (l_319 | (p_62 > (-1L)))) >= g_306))) < 4L))))));
        (*l_320) = (-3L);
        (**g_328) = ((func_77(p_63) > 0x19L) ^ (safe_add_func_int16_t_s_s((((*l_310) != l_323) == (safe_add_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((0UL <= (g_328 == &g_329)) || (g_202 < p_62)), (*l_323))) == p_62), (*l_320)))), g_129)));
    }
    else
    {
        int **l_331 = &l_323;
        (*l_331) = p_63;
        (*l_331) = l_323;
        (**g_328) &= (*p_63);
        (**g_328) = (*p_63);
    }
    (*l_332) = p_63;
    g_347 |= (0L && (safe_sub_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(5L, g_17)) ^ (0xFFDDL < (safe_add_func_uint8_t_u_u(0x01L, (safe_add_func_uint8_t_u_u(func_64((((((safe_add_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((*p_63), (*p_63))) || (safe_add_func_int8_t_s_s((((*l_323) & (**l_332)) != (*l_323)), g_197))), 0x5CBBL)) || 0x5AC2ACB6L) & p_62) <= p_61) > (**l_332)), g_104, &g_47, (**l_332)), 8UL)))))), p_61)));
    p_63 = l_348;
    return g_197;
}







static int func_64(unsigned p_65, unsigned p_66, int * p_67, unsigned p_68)
{
    const int *l_79 = &g_47;
    int l_200 = 0L;
    int *l_201 = &g_202;
    int **l_203 = &l_201;
    int *l_204 = &g_202;
    int *l_205 = &g_84;
    int *l_206 = &g_104;
    int *l_207 = &g_84;
    int *l_208 = (void*)0;
    int *l_209 = (void*)0;
    int *l_210 = &g_104;
    int *l_211 = (void*)0;
    int *l_212 = &g_88;
    int *l_213 = &g_88;
    int *l_214 = &g_202;
    int *l_215 = &g_84;
    int l_216 = 0x48970CE4L;
    int *l_217 = &g_202;
    int *l_218 = &l_216;
    int l_219 = (-1L);
    int *l_220 = &g_84;
    int *l_221 = &g_202;
    int *l_222 = &l_219;
    int l_223 = 0xE0413CF2L;
    int *l_224 = &l_200;
    int *l_225 = &g_84;
    int *l_226 = &g_202;
    int *l_227 = &g_84;
    int *l_228 = (void*)0;
    int *l_229 = (void*)0;
    int l_230 = 0L;
    int *l_231 = &l_230;
    int *l_232 = &l_216;
    int *l_233 = &l_216;
    int *l_234 = &l_200;
    int *l_235 = &g_104;
    int *l_236 = &l_223;
    int *l_237 = &g_84;
    int *l_238 = &g_88;
    int l_239 = (-1L);
    int *l_240 = &l_216;
    int *l_241 = (void*)0;
    int *l_242 = &l_219;
    int *l_243 = &g_202;
    int *l_244 = &g_84;
    int *l_245 = &g_88;
    int l_246 = 0xDE484D60L;
    int *l_247 = &g_104;
    int l_248 = (-3L);
    int l_249 = 0xEB154EA4L;
    int *l_250 = &l_239;
    int *l_251 = &l_216;
    int *l_252 = &g_202;
    int *l_253 = &g_104;
    int l_254 = (-4L);
    int l_255 = 6L;
    int l_256 = 0xBE2A38A8L;
    int l_257 = 4L;
    int *l_258 = (void*)0;
    int *l_259 = (void*)0;
    int *l_260 = &l_239;
    int *l_261 = &l_249;
    int *l_262 = &l_246;
    int *l_263 = &l_200;
    int *l_264 = &l_256;
    int *l_265 = &l_216;
    int *l_266 = (void*)0;
    int *l_267 = &l_216;
    int *l_268 = &l_249;
    int *l_269 = (void*)0;
    int *l_270 = &l_219;
    int *l_271 = &l_254;
    int *l_272 = &g_104;
    int *l_273 = &l_223;
    int *l_274 = &g_88;
    int *l_275 = &l_239;
    int *l_276 = &l_248;
    int *l_277 = &l_246;
    int *l_278 = &l_200;
    int *l_279 = (void*)0;
    int *l_280 = &l_248;
    int *l_281 = &l_248;
    int *l_282 = (void*)0;
    int *l_283 = &l_216;
    int *l_284 = &l_256;
    int *l_285 = &g_88;
    int l_286 = 1L;
    int *l_287 = (void*)0;
    int *l_288 = &l_256;
    int *l_289 = &l_246;
    int l_290 = (-3L);
    int l_291 = (-9L);
    int *l_292 = &l_255;
    int *l_293 = &l_257;
    int l_294 = (-6L);
    int *l_295 = &l_223;
    int l_297 = 0x3ACC10BFL;
    int l_298 = 0xC86F730CL;
    int *l_299 = &l_246;
    int *l_300 = (void*)0;
    int *l_301 = (void*)0;
    int *l_302 = &l_290;
    int l_303 = (-1L);
    int l_304 = 8L;
    int *l_305 = &l_216;
    g_70 = g_16;
    (*l_201) |= ((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s((func_77(l_79) == (!((0xF43A563CL > g_141) & (((g_10 & (~(*p_67))) < p_66) > ((((((*l_79) <= (&l_79 != &p_67)) < p_66) | p_65) <= p_65) > 1L))))), (*l_79))), 0xE0L)), p_66)) ^ l_200);
    (*l_203) = p_67;
    --g_306;
    return g_169;
}







static unsigned short func_77(const int * p_78)
{
    int *l_80 = (void*)0;
    const int l_94 = 7L;
    int l_105 = (-3L);
    int l_127 = (-1L);
    int l_128 = 0x0A6C5FA6L;
    int l_159 = 0xCF9C76A8L;
    int l_167 = 5L;
    l_80 = &g_47;
    for (g_70 = 7; (g_70 == 20); g_70++)
    {
        int *l_83 = &g_84;
        int **l_85 = &l_83;
        int l_147 = 1L;
        int l_161 = 0xC054819EL;
        const int *l_172 = &l_127;
        (*l_83) = (-2L);
        (*l_85) = &g_17;
        for (g_84 = (-25); (g_84 == 23); g_84 = safe_add_func_uint8_t_u_u(g_84, 6))
        {
            unsigned char l_93 = 0UL;
            int *l_102 = (void*)0;
            int *l_106 = (void*)0;
            int *l_107 = &g_104;
            int *l_108 = (void*)0;
            int *l_109 = &g_88;
            int *l_110 = &g_88;
            int *l_111 = &l_105;
            int *l_112 = (void*)0;
            int *l_113 = &g_104;
            int *l_114 = &g_104;
            int *l_115 = &g_88;
            int *l_116 = &g_104;
            int l_117 = 1L;
            int *l_118 = (void*)0;
            int *l_119 = (void*)0;
            int *l_120 = (void*)0;
            int *l_121 = &g_88;
            int *l_122 = (void*)0;
            int *l_123 = &g_104;
            int l_124 = 1L;
            int *l_125 = &l_124;
            int *l_126 = (void*)0;
            int *l_130 = &l_124;
            int *l_131 = &l_128;
            int *l_132 = &g_88;
            int *l_133 = &l_105;
            int *l_134 = (void*)0;
            int *l_135 = (void*)0;
            int *l_136 = &l_124;
            int *l_137 = &l_127;
            int *l_138 = &g_88;
            int l_139 = 0xAD35785FL;
            int *l_140 = &g_104;
            int *l_142 = &l_105;
            int *l_143 = (void*)0;
            int *l_144 = &l_128;
            int *l_145 = &l_127;
            int *l_146 = &l_105;
            int *l_148 = (void*)0;
            int *l_149 = &l_147;
            int *l_150 = (void*)0;
            int *l_151 = &l_128;
            int *l_152 = &l_128;
            int *l_153 = &g_88;
            int *l_154 = (void*)0;
            int *l_155 = (void*)0;
            int *l_156 = &l_147;
            int *l_157 = (void*)0;
            int l_158 = 0L;
            int *l_160 = &l_105;
            int *l_162 = (void*)0;
            int *l_163 = (void*)0;
            int *l_164 = &g_104;
            int *l_165 = (void*)0;
            int *l_166 = (void*)0;
            int *l_168 = &l_147;
            const int **l_173 = &l_172;
            for (g_88 = 0; (g_88 >= (-25)); g_88 = safe_sub_func_uint16_t_u_u(g_88, 8))
            {
                unsigned l_95 = 4294967295UL;
                int *l_103 = &g_104;
                if ((*p_78))
                    break;
                l_95 = (safe_div_func_uint32_t_u_u((l_93 < l_94), (*l_80)));
                (*l_103) = ((((**l_85) != (!(safe_rshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(g_84, (l_93 && ((void*)0 != &p_78)))) > ((((-1L) ^ (safe_div_func_int8_t_s_s(l_95, l_93))) != (l_102 != l_102)) == l_93)), l_95)))) ^ g_84) > 0L);
                if (g_84)
                    continue;
            }
            g_169++;
            l_172 = p_78;
            (*l_173) = p_78;
        }
        for (g_104 = 0; (g_104 != 2); g_104 = safe_add_func_int32_t_s_s(g_104, 1))
        {
            int *l_176 = &l_147;
            int *l_177 = &l_161;
            int *l_178 = &l_105;
            int *l_179 = &l_127;
            int *l_180 = &l_128;
            int *l_181 = (void*)0;
            int *l_182 = &l_128;
            int *l_183 = &l_167;
            int *l_184 = &l_105;
            int *l_185 = &l_128;
            int *l_186 = (void*)0;
            int *l_187 = &l_128;
            int *l_188 = &l_161;
            int *l_189 = &l_105;
            int *l_190 = &l_127;
            int *l_191 = &g_88;
            int *l_192 = &l_128;
            int *l_193 = &l_127;
            int *l_194 = &l_128;
            int *l_195 = (void*)0;
            int *l_196 = &l_167;
            --g_197;
        }
    }
    return g_141;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_659, "g_659", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1093, "g_1093", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    transparent_crc(g_1261, "g_1261", print_hash_value);
    transparent_crc(g_1357, "g_1357", print_hash_value);
    transparent_crc(g_1490, "g_1490", print_hash_value);
    transparent_crc(g_1674, "g_1674", print_hash_value);
    transparent_crc(g_1711, "g_1711", print_hash_value);
    transparent_crc(g_1904, "g_1904", print_hash_value);
    transparent_crc(g_1969, "g_1969", print_hash_value);
    transparent_crc(g_2038, "g_2038", print_hash_value);
    transparent_crc(g_2049, "g_2049", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
