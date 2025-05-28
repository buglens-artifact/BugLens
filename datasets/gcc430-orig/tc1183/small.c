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



static char g_7 = 0x0EL;
static unsigned short g_25 = 0x7CCCL;
static int g_27 = 1L;
static short g_103 = 9L;
static volatile char g_104 = 0x0BL;
static volatile unsigned g_106 = 0x07DFDCBCL;
static unsigned g_111 = 0x1DE2FC23L;
static volatile unsigned short g_115 = 1UL;
static volatile char g_119 = (-1L);
static unsigned g_120 = 0x39D3FD5BL;
static int *g_125 = &g_27;
static int g_171 = 1L;
static int g_180 = 1L;
static const unsigned g_205 = 0x319BF676L;
static const unsigned g_207 = 0x31537F14L;
static const unsigned *g_206 = &g_207;
static int g_273 = 0x0F0C8DF0L;
static unsigned g_297 = 4294967295UL;
static unsigned g_301 = 4294967292UL;
static int g_358 = 0x9CABAC1BL;
static unsigned short g_364 = 8UL;
static short g_474 = 1L;
static unsigned g_482 = 1UL;
static unsigned short *g_486 = (void*)0;
static unsigned short **g_485 = &g_486;
static int g_499 = 2L;
static unsigned g_509 = 4294967294UL;
static int *g_530 = &g_27;
static int g_580 = (-1L);
static const unsigned short ***g_598 = (void*)0;
static unsigned char g_637 = 0x17L;
static const char g_649 = 0x8DL;
static const int g_669 = 0x68612AF7L;
static char *g_684 = &g_7;
static char **g_683 = &g_684;
static int *g_721 = (void*)0;
static short g_728 = 0x202BL;
static char g_771 = 1L;
static volatile unsigned char g_826 = 0x05L;
static const unsigned short g_926 = 0x5F5BL;
static const unsigned short g_1055 = 65535UL;
static volatile unsigned g_1074 = 4294967291UL;
static unsigned short g_1096 = 65535UL;
static short g_1127 = (-1L);
static unsigned char g_1132 = 0xEEL;
static volatile char *g_1186 = &g_104;
static unsigned short g_1187 = 0UL;
static volatile unsigned *g_1192 = (void*)0;
static volatile unsigned **g_1191 = &g_1192;
static volatile unsigned ** const *g_1190 = &g_1191;
static int g_1293 = 0xF9090AD4L;
static volatile char g_1317 = 6L;
static volatile unsigned g_1333 = 0x5CCF3A8BL;
static unsigned char g_1371 = 1UL;
static volatile char g_1505 = 0x5AL;
static unsigned g_1507 = 0x7858C43BL;
static volatile unsigned g_1514 = 0UL;
static const unsigned char g_1529 = 0xBCL;
static int g_1547 = (-1L);
static int * const g_1593 = (void*)0;
static int * const *g_1592 = &g_1593;
static short g_1595 = 9L;
static short g_1669 = 0L;
static int g_1677 = (-4L);
static unsigned g_1681 = 4294967294UL;
static unsigned *g_1704 = &g_482;
static unsigned **g_1703 = &g_1704;
static volatile int g_1717 = 9L;
static volatile int *g_1716 = &g_1717;
static volatile int **g_1715 = &g_1716;
static volatile int ***g_1714 = &g_1715;
static volatile unsigned g_1804 = 0x2BFE0152L;



static int func_1(void);
static int func_2(unsigned char p_3, char p_4, unsigned short p_5, unsigned short p_6);
static char func_8(unsigned p_9, unsigned short p_10, unsigned char p_11);
static const unsigned func_14(unsigned p_15, short p_16, char p_17);
static char func_19(int p_20, short p_21);
static int func_128(int * p_129);
static int * func_130(unsigned p_131, unsigned p_132, unsigned short * p_133, unsigned p_134);
static unsigned char func_141(unsigned p_142, int p_143, const unsigned short * const p_144, int p_145);
static short func_148(unsigned p_149, int p_150);
static unsigned short * func_151(unsigned p_152, unsigned short * p_153, const int p_154, int * p_155, char p_156);
static int func_1(void)
{
    int l_18 = (-5L);
    unsigned short *l_24 = &g_25;
    char *l_1518 = &g_771;
    int *l_1602 = (void*)0;
    int *l_1603 = &g_171;
    short l_1604 = 0x3E76L;
    int *l_1605 = &g_27;
    int l_1606 = 1L;
    int *l_1607 = (void*)0;
    int *l_1608 = &g_273;
    int *l_1609 = &g_499;
    int *l_1610 = (void*)0;
    int *l_1611 = (void*)0;
    int *l_1612 = &g_180;
    int *l_1613 = &g_580;
    int *l_1614 = &g_27;
    int *l_1615 = &g_171;
    int *l_1616 = (void*)0;
    int *l_1617 = &g_27;
    int *l_1618 = &l_1606;
    int *l_1619 = &g_580;
    int *l_1620 = (void*)0;
    int *l_1621 = &g_580;
    int *l_1622 = (void*)0;
    int *l_1623 = &g_273;
    int *l_1624 = (void*)0;
    int *l_1625 = &g_27;
    int *l_1626 = &l_1606;
    int *l_1627 = &g_27;
    int *l_1628 = (void*)0;
    int *l_1629 = (void*)0;
    int *l_1630 = &g_499;
    int *l_1631 = &g_180;
    char l_1632 = 0x01L;
    int *l_1633 = &g_27;
    int *l_1634 = (void*)0;
    int *l_1635 = (void*)0;
    int *l_1636 = &g_580;
    int l_1637 = (-9L);
    int *l_1638 = (void*)0;
    int *l_1639 = &g_180;
    int *l_1640 = &l_1606;
    int *l_1641 = &g_27;
    int *l_1642 = &g_180;
    int *l_1643 = &g_27;
    int *l_1644 = &g_273;
    int *l_1645 = &g_499;
    int *l_1646 = &l_1606;
    int *l_1647 = &g_273;
    int *l_1648 = &l_1637;
    int l_1649 = (-1L);
    int *l_1650 = &l_1606;
    int *l_1651 = &g_27;
    int *l_1652 = &g_1293;
    int *l_1653 = (void*)0;
    int *l_1654 = &g_273;
    int *l_1655 = (void*)0;
    int *l_1656 = &g_499;
    int *l_1657 = &g_499;
    int *l_1658 = &g_1293;
    int l_1659 = 0x345F12CAL;
    int *l_1660 = &g_27;
    int *l_1661 = (void*)0;
    int *l_1662 = &g_180;
    int *l_1663 = &g_580;
    int *l_1664 = (void*)0;
    int *l_1665 = &l_1649;
    int l_1666 = 0xEE97CD00L;
    int *l_1667 = &g_180;
    int *l_1668 = &g_580;
    int *l_1670 = &g_171;
    int *l_1671 = &g_499;
    int *l_1672 = &l_1637;
    int *l_1673 = &l_1666;
    int *l_1674 = &g_273;
    int *l_1675 = &g_171;
    int *l_1676 = &g_273;
    int *l_1678 = &g_1677;
    int *l_1679 = &g_580;
    int *l_1680 = &g_27;
    unsigned char l_1688 = 0x52L;
    unsigned l_1689 = 3UL;
    unsigned l_1692 = 1UL;
    unsigned char l_1700 = 249UL;
    unsigned char l_1707 = 0x0AL;
    short **l_1755 = (void*)0;
    int l_1821 = 0L;
    int *l_1824 = &l_1821;
    int **l_1823 = &l_1824;
    short l_1858 = (-1L);
    unsigned char *l_1870 = (void*)0;
    unsigned char l_1895 = 1UL;
    unsigned l_1901 = 4294967292UL;
    (*l_1603) = func_2(g_7, ((*l_1518) = func_8((safe_mod_func_uint32_t_u_u(func_14(((l_18 <= ((*l_1518) = func_19((safe_sub_func_uint16_t_u_u(((*l_24) = 0x45FEL), (g_7 == g_7))), g_7))) , 4294967292UL), (l_18 < 0L), l_18), 0xE0F150A3L)), l_18, l_18)), g_1547, l_18);
    ++g_1681;
    (*l_1644) = ((*l_1633) = (*g_721));
    if ((0x7AL | ((safe_lshift_func_int16_t_s_s(((*g_684) , (safe_sub_func_uint16_t_u_u(g_1127, (*l_1643)))), g_474)) , 0x47L)))
    {
        unsigned l_1693 = 1UL;
        l_1693--;
    }
    else
    {
        unsigned char *l_1698 = &g_1132;
        int l_1699 = 0xB6E00CE5L;
        unsigned ***l_1705 = &g_1703;
        short *l_1706 = (void*)0;
        unsigned char l_1757 = 0x2CL;
        int **l_1794 = (void*)0;
        int ***l_1793 = &l_1794;
        unsigned l_1800 = 1UL;
        int l_1802 = 1L;
        unsigned *l_1907 = &g_1507;
        if ((((*l_1650) && (((safe_lshift_func_int8_t_s_u((-5L), ((*l_1698) = g_1127))) , (l_1699 <= (l_1707 &= (((l_1700 , 0x59L) , (0xFC19BB1EL && (*g_206))) & (((((safe_sub_func_int16_t_s_s(((((*l_1705) = g_1703) == (*g_1190)) == l_1699), g_1595)) != g_364) ^ (*l_1679)) , l_1699) >= l_1699))))) & l_1699)) || (*l_1676)))
        {
            int **l_1719 = &l_1671;
            int ***l_1718 = &l_1719;
            char l_1749 = 4L;
            int l_1775 = 0xC2CF3A29L;
            unsigned **l_1799 = (void*)0;
            int l_1819 = (-1L);
            int * const *l_1825 = &g_1593;
lbl_1756:
            (*l_1671) = (g_207 >= ((*g_1186) , 0xBB9CL));
            for (l_18 = 0; (l_18 != 6); l_18++)
            {
                unsigned l_1734 = 1UL;
                int l_1752 = 8L;
                char l_1784 = (-6L);
                unsigned char *l_1785 = &l_1688;
                if ((safe_rshift_func_uint8_t_u_u((g_509 < (**g_683)), g_728)))
                {
                    unsigned l_1729 = 1UL;
                    unsigned char *l_1735 = &g_1371;
                    (*g_1716) = (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((0x4CL || (++(*l_1698))), 15)), (l_1729 , ((((((*l_1626) = (*g_721)) > ((((*l_1735) = (safe_add_func_uint16_t_u_u(65535UL, func_2(((func_19((g_1333 , 0x01F2D1E6L), g_301) && ((safe_mod_func_uint8_t_u_u(0UL, 1L)) ^ (*g_206))) , g_207), l_1734, (*l_1680), l_1729)))) , g_637) != l_1729)) || (***l_1718)) && l_1734) <= (*g_206))))), 4294967295UL));
                    (*l_1654) = ((*l_1652) | (*l_1673));
                }
                else
                {
                    unsigned l_1744 = 0UL;
                    unsigned short *l_1750 = &g_1096;
                    unsigned short *l_1751 = &g_364;
                    if ((*l_1656))
                        break;
                    l_1752 &= ((safe_rshift_func_uint16_t_u_s((l_1744 | 0x9CL), 6)) == (*g_684));
                    if ((((&g_485 != &g_485) , (safe_sub_func_uint8_t_u_u((&l_1706 == (l_1734 , l_1755)), (((*l_1751) |= (((0x7FACE9EFL && 0x3D3A1018L) && (-1L)) ^ l_1699)) > g_1317)))) != l_1744))
                    {
                        if (l_1707)
                            goto lbl_1756;
                        (*l_1673) ^= ((*l_1603) = (***l_1718));
                    }
                    else
                    {
                        unsigned l_1760 = 0x1B04EB18L;
                        char *l_1773 = &l_1749;
                        short l_1774 = 0xB4A9L;
                        l_1757++;
                        (*l_1656) = ((l_1760 && ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((*l_1518) |= 0xEBL), (safe_add_func_int32_t_s_s(((*l_1617) , (((l_1760 || (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(0x6AL, l_1752)) <= (*l_1660)) > g_1293), 2)) , 0L), (*l_1663)))) > g_103) , 0xBD265FB5L)), 0xFE40F9F9L)))), l_1752)) < 65533UL)) ^ 1UL);
                        if (l_1775)
                            continue;
                    }
                }
                (*l_1619) = (safe_lshift_func_uint16_t_u_s(l_1752, ((((**g_1703) , (void*)0) != &g_1703) | (safe_sub_func_uint8_t_u_u(((*l_1785) |= ((--(*l_1698)) ^ (+(0xEAL || (9L && g_111))))), (*l_1651))))));
                (**l_1718) = &l_1659;
                if ((*l_1641))
                    continue;
            }
            for (g_1547 = (-30); (g_1547 >= (-9)); ++g_1547)
            {
                unsigned char l_1795 = 0x6FL;
                int l_1798 = (-1L);
                int l_1801 = 1L;
                int l_1803 = 8L;
                int l_1840 = 1L;
                (**g_1714) = (func_19(((((safe_unary_minus_func_int32_t_s((-6L))) != (((((*g_1704) ^= ((safe_add_func_uint32_t_u_u((func_8((safe_rshift_func_uint16_t_u_u(((void*)0 != l_1793), ((*l_24) &= (((*l_1698) = ((l_1795 , ((safe_lshift_func_int16_t_s_s((-1L), 0)) != 2L)) < (0xB5E50F3EL <= (((g_580 == (*l_1625)) & 247UL) < g_926)))) ^ (**l_1719))))), g_1055, l_1798) == 0xC45C3E34L), 0x8BC5A254L)) != (*g_1716))) , (*g_1190)) == l_1799) || l_1757)) , 0x83CD07BCL) & l_1800), l_1757) , (**g_1714));
                g_1804++;
                (*l_1636) = (*g_1716);
                if ((*g_721))
                {
                    short *l_1816 = &g_1595;
                    unsigned short l_1820 = 0UL;
                    (***g_1714) = (safe_sub_func_int16_t_s_s(g_580, (((-7L) > ((void*)0 != &g_485)) , (+((0x3CL >= (safe_unary_minus_func_uint16_t_u((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((func_2((safe_lshift_func_int16_t_s_s((*l_1619), ((*l_1816) = (g_474 ^= l_1699)))), ((**g_683) |= (*l_1672)), ((((safe_add_func_uint8_t_u_u((l_1795 || (*g_1186)), l_1819)) , (***g_1714)) ^ l_1820) < g_728), l_1820) ^ l_1757) >= 0xF481L), l_1803)), 1UL)) , g_103) < 0xBEL)))) & l_1821)))));
                }
                else
                {
                    unsigned l_1822 = 0UL;
                    unsigned *l_1833 = &g_1507;
                    (***l_1718) |= l_1822;
                    if (l_1822)
                        continue;
                    (*l_1619) |= ((g_1595 >= 0x99ADL) & ((*l_1672) ^ (((*l_1793) = l_1823) != l_1825)));
                    (*l_1658) = (safe_sub_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s(l_1803, (safe_unary_minus_func_int32_t_s(((*l_1641) = (**g_1715)))))) <= ((**l_1719) |= ((*g_684) == (((*l_1647) = ((*l_1668) |= (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_1840 | g_358), l_1803)), g_1127)))) | l_1795)))) & (*l_1675)) != g_1127), g_1529));
                }
            }
        }
        else
        {
            unsigned l_1853 = 0x0E4CF243L;
            unsigned char *l_1866 = &l_1688;
            int l_1897 = 0x912CE8A2L;
            int l_1898 = 0xF57912AFL;
            int l_1899 = (-3L);
            int l_1900 = 0L;
            int **l_1904 = &l_1648;
            for (g_171 = 0; (g_171 == (-2)); g_171--)
            {
                unsigned l_1849 = 0UL;
                unsigned l_1850 = 0xB1CF67D9L;
                if ((safe_lshift_func_uint8_t_u_u((((l_1757 >= ((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((func_19((**g_1715), l_1849) >= func_2(g_301, (**g_683), l_1850, (*l_1633))), (*g_721))), 0x18L)) && g_1074)) && 0xD1L) , g_301), l_1757)))
                {
                    for (g_27 = (-18); (g_27 > 10); g_27 = safe_add_func_int16_t_s_s(g_27, 7))
                    {
                        (**g_1714) = (**g_1714);
                    }
                    if ((*l_1647))
                        break;
                }
                else
                {
                    (*l_1660) ^= l_1850;
                }
                if ((*g_1716))
                    continue;
            }
            if (l_1853)
            {
                char l_1859 = 0x36L;
                unsigned char **l_1867 = (void*)0;
                unsigned char **l_1868 = (void*)0;
                unsigned char **l_1869 = (void*)0;
                short *l_1871 = &g_474;
                short *l_1872 = &g_1669;
                (*g_1715) = (**g_1714);
            }
            else
            {
                int **l_1894 = &l_1824;
                int l_1896 = (-5L);
                (*l_1667) = 0x4BD9BF3BL;
                (*l_1675) = (&g_486 != &l_24);
                (*l_1662) ^= (safe_lshift_func_uint16_t_u_u((0x9F15414EL < (l_1853 , func_8((*g_206), (*l_1680), (*l_1657)))), g_111));
            }
            ++l_1901;
            (*l_1904) = &l_1606;
        }
        (*l_1675) |= ((safe_add_func_int32_t_s_s(0xDAFF8F35L, ((*l_1631) , (++(*l_1907))))) | g_499);
    }
    return (***g_1714);
}







static int func_2(unsigned char p_3, char p_4, unsigned short p_5, unsigned short p_6)
{
    unsigned char l_1550 = 0UL;
    unsigned char **l_1553 = (void*)0;
    unsigned char *l_1555 = &g_637;
    unsigned char **l_1554 = &l_1555;
    unsigned short *l_1556 = (void*)0;
    int **l_1562 = &g_530;
    int l_1573 = 0x8921C41CL;
    int l_1589 = 0x0318C270L;
    unsigned char l_1590 = 0x4CL;
    unsigned *l_1596 = &g_301;
    int *l_1601 = (void*)0;
    if ((safe_add_func_uint8_t_u_u(((l_1550 > (p_3 = ((safe_rshift_func_int16_t_s_u((~(p_6 , p_6)), (!(p_5 |= (((*l_1554) = &p_3) == &p_3))))) , g_180))) || (((((p_3 < 6L) , (l_1550 & (*g_206))) >= 0xA1CCL) , l_1550) || p_4)), p_6)))
    {
        unsigned *l_1559 = &g_120;
        int l_1567 = 0x4225CC02L;
        unsigned short *l_1570 = &g_1187;
        int l_1571 = 1L;
        int l_1572 = 0xE6EF1E14L;
        l_1573 = (*g_721);
        return p_5;
    }
    else
    {
        unsigned l_1578 = 0UL;
        unsigned *l_1587 = &g_297;
        unsigned l_1588 = 0xAC998944L;
        int l_1591 = 7L;
        int * const **l_1594 = &g_1592;
        l_1591 = (((safe_rshift_func_int16_t_s_u(((p_6 , l_1589) != l_1578), p_4)) , l_1588) < l_1590);
        (*l_1594) = g_1592;
    }
    (*l_1562) = ((l_1550 | g_926) , l_1601);
    return p_6;
}







static char func_8(unsigned p_9, unsigned short p_10, unsigned char p_11)
{
    int l_1530 = 0L;
    int *l_1531 = &g_171;
    int **l_1544 = &g_721;
    int **l_1545 = (void*)0;
    int **l_1546 = &l_1531;
    (*l_1531) = l_1530;
    (*l_1546) = ((*l_1544) = l_1531);
    return p_11;
}







static const unsigned func_14(unsigned p_15, short p_16, char p_17)
{
    unsigned short l_1519 = 0xB6F7L;
    const unsigned l_1522 = 0x583566EBL;
    const char l_1523 = 1L;
    int l_1524 = (-2L);
    int **l_1525 = (void*)0;
    int **l_1526 = (void*)0;
    int **l_1527 = &g_125;
    int **l_1528 = &g_721;
    l_1524 &= (l_1519 , (((void*)0 != (*g_1191)) && ((func_141(p_17, g_106, (g_474 , (*g_485)), l_1519) , 0xCC14BFC3L) , 4294967295UL)));
    g_530 = ((*l_1528) = ((*l_1527) = &l_1524));
    return g_1529;
}







static char func_19(int p_20, short p_21)
{
    int *l_26 = &g_27;
    int *l_28 = &g_27;
    int *l_29 = &g_27;
    int *l_30 = &g_27;
    int *l_31 = &g_27;
    int *l_32 = &g_27;
    int *l_33 = &g_27;
    int *l_34 = (void*)0;
    int l_35 = 3L;
    int *l_36 = &g_27;
    int *l_37 = (void*)0;
    int *l_38 = &l_35;
    int *l_39 = &g_27;
    int *l_40 = &l_35;
    int *l_41 = &g_27;
    int *l_42 = &l_35;
    int *l_43 = &g_27;
    int *l_44 = &l_35;
    int *l_45 = &l_35;
    int *l_46 = &l_35;
    int *l_47 = &g_27;
    int *l_48 = (void*)0;
    int l_49 = 0L;
    int *l_50 = &l_35;
    int *l_51 = &l_35;
    int *l_52 = (void*)0;
    int *l_53 = &g_27;
    int *l_54 = &g_27;
    int l_55 = 0L;
    int *l_56 = (void*)0;
    int l_57 = 4L;
    int *l_58 = &l_35;
    int l_59 = 0xF3BD791FL;
    int *l_60 = (void*)0;
    int *l_61 = &l_57;
    int l_62 = 0x5E04A276L;
    int l_63 = 0x074F0E4FL;
    int *l_64 = &l_59;
    int *l_65 = (void*)0;
    int l_66 = 0xA75015E0L;
    int *l_67 = &l_57;
    int *l_68 = &l_63;
    int *l_69 = &l_66;
    int *l_70 = &l_66;
    int *l_71 = (void*)0;
    int *l_72 = &l_62;
    int l_73 = 0L;
    int l_74 = 0L;
    int *l_75 = &l_35;
    int *l_76 = &l_66;
    int *l_77 = &l_35;
    int *l_78 = &g_27;
    int *l_79 = (void*)0;
    int *l_80 = (void*)0;
    int l_81 = 0x3C7D7575L;
    int *l_82 = &g_27;
    int *l_83 = &l_62;
    unsigned short l_84 = 65535UL;
    int *l_87 = &l_81;
    int *l_88 = &l_63;
    int *l_89 = &l_62;
    int *l_90 = &l_57;
    int *l_91 = (void*)0;
    int *l_92 = (void*)0;
    int *l_93 = &l_59;
    int *l_94 = &l_63;
    int *l_95 = &l_63;
    int *l_96 = &l_57;
    int *l_97 = (void*)0;
    int *l_98 = &l_66;
    int *l_99 = &l_81;
    int *l_100 = &l_74;
    int *l_101 = (void*)0;
    int *l_102 = &l_57;
    int *l_105 = &l_74;
    unsigned *l_109 = (void*)0;
    unsigned *l_110 = &g_111;
    short l_114 = 0x6FF7L;
    int **l_1517 = &l_89;
    l_84++;
    g_106--;
    if (((++(*l_110)) | ((void*)0 == l_99)))
    {
        int l_118 = 1L;
        ++g_115;
        g_120--;
    }
    else
    {
        short l_706 = 0x1247L;
        for (l_62 = (-14); (l_62 == (-23)); l_62 = safe_sub_func_int32_t_s_s(l_62, 3))
        {
            short l_163 = 0xBCFAL;
            g_125 = &g_27;
            for (l_73 = 0; (l_73 != 12); l_73 = safe_add_func_uint8_t_u_u(l_73, 4))
            {
                int l_159 = 3L;
            }
        }
    }
    (*l_1517) = (void*)0;
    return p_21;
}







static int func_128(int * p_129)
{
    unsigned l_1025 = 1UL;
    short *l_1030 = &g_474;
    unsigned l_1031 = 0UL;
    int l_1038 = 0x54FA28D6L;
    const unsigned short *l_1054 = &g_1055;
    short l_1081 = 0L;
    unsigned l_1095 = 4294967287UL;
    unsigned short l_1109 = 0x5446L;
    int l_1279 = 0x943659E9L;
    int l_1307 = 0x0083135DL;
    int *l_1377 = &g_180;
    int *l_1378 = (void*)0;
    int *l_1379 = &g_27;
    int *l_1380 = &g_27;
    int *l_1381 = (void*)0;
    int *l_1382 = &g_580;
    int *l_1383 = (void*)0;
    int *l_1384 = &g_499;
    int *l_1385 = &g_180;
    int l_1386 = (-4L);
    int *l_1387 = &l_1307;
    int *l_1388 = &g_273;
    int *l_1389 = &l_1386;
    int *l_1390 = &g_273;
    int *l_1391 = &l_1307;
    int l_1392 = 0xC014F17DL;
    int *l_1393 = &g_180;
    int *l_1394 = (void*)0;
    int *l_1395 = &g_180;
    int l_1396 = 1L;
    int *l_1397 = &l_1392;
    int *l_1398 = (void*)0;
    int *l_1399 = &l_1386;
    int *l_1400 = &l_1386;
    int l_1401 = 8L;
    int *l_1402 = &l_1392;
    int *l_1403 = &l_1396;
    int *l_1404 = &g_580;
    int *l_1405 = &g_27;
    int *l_1406 = (void*)0;
    int *l_1407 = (void*)0;
    int *l_1408 = &g_171;
    int *l_1409 = &g_1293;
    int *l_1410 = &g_273;
    int *l_1411 = &l_1307;
    int *l_1412 = &l_1307;
    int *l_1413 = &l_1279;
    int *l_1414 = &l_1386;
    int *l_1415 = &g_180;
    int *l_1416 = &l_1279;
    int *l_1417 = &l_1401;
    int *l_1418 = &g_1293;
    int *l_1419 = &g_580;
    int *l_1420 = &l_1386;
    int *l_1421 = (void*)0;
    int *l_1422 = &g_171;
    int *l_1423 = &g_171;
    int *l_1424 = &g_273;
    int *l_1425 = &l_1396;
    int l_1426 = 0x6BAC59E3L;
    int *l_1427 = &g_273;
    int l_1428 = 0L;
    int *l_1429 = &l_1386;
    int *l_1430 = &l_1279;
    int l_1431 = 0x0014B66FL;
    int *l_1432 = &l_1392;
    int *l_1433 = &l_1396;
    int *l_1434 = &l_1426;
    int *l_1435 = (void*)0;
    int *l_1436 = &l_1307;
    int *l_1437 = &l_1307;
    int *l_1438 = (void*)0;
    int *l_1439 = &g_499;
    int *l_1440 = &l_1392;
    int *l_1441 = &l_1386;
    int *l_1442 = &g_1293;
    int l_1443 = 3L;
    int *l_1444 = &l_1431;
    int *l_1445 = (void*)0;
    int *l_1446 = &l_1401;
    int *l_1447 = &l_1431;
    int l_1448 = 0x7006BB48L;
    int *l_1449 = &g_27;
    int *l_1450 = &l_1401;
    int *l_1451 = &l_1279;
    int *l_1452 = &l_1038;
    int *l_1453 = (void*)0;
    int l_1454 = 0x0C8DE610L;
    int *l_1455 = &l_1038;
    int *l_1456 = &g_1293;
    int *l_1457 = &l_1392;
    int *l_1458 = &l_1401;
    int l_1459 = 1L;
    int *l_1460 = &l_1459;
    int *l_1461 = &g_171;
    int *l_1462 = &g_273;
    int *l_1463 = &l_1401;
    int *l_1464 = &l_1307;
    int *l_1465 = &g_580;
    int l_1466 = 0xD50696E6L;
    int *l_1467 = &l_1454;
    int *l_1468 = &l_1466;
    int *l_1469 = &l_1426;
    int *l_1470 = &l_1454;
    int *l_1471 = &l_1392;
    int *l_1472 = &l_1392;
    int *l_1473 = (void*)0;
    int *l_1474 = &l_1396;
    int *l_1475 = &l_1038;
    int *l_1476 = &l_1454;
    int *l_1477 = &g_499;
    int *l_1478 = (void*)0;
    int *l_1479 = &g_171;
    int *l_1480 = &l_1386;
    int *l_1481 = &g_171;
    int *l_1482 = &l_1443;
    int *l_1483 = &l_1401;
    int *l_1484 = &l_1401;
    int l_1485 = 8L;
    int *l_1486 = &g_171;
    int *l_1487 = &g_499;
    int l_1488 = 0xCEE46AA6L;
    int *l_1489 = (void*)0;
    int *l_1490 = (void*)0;
    int *l_1491 = &l_1401;
    int *l_1492 = (void*)0;
    int *l_1493 = &g_580;
    int *l_1494 = &l_1488;
    int *l_1495 = &l_1038;
    int *l_1496 = (void*)0;
    int *l_1497 = &g_499;
    int *l_1498 = &l_1488;
    int *l_1499 = (void*)0;
    int *l_1500 = &l_1443;
    int *l_1501 = &g_1293;
    int *l_1502 = &l_1466;
    int *l_1503 = &g_580;
    int l_1504 = (-1L);
    int *l_1506 = &g_1293;
    if ((*p_129))
    {
        int *l_1008 = &g_180;
        int *l_1009 = &g_171;
        int *l_1010 = &g_27;
        int *l_1011 = &g_171;
        int *l_1012 = &g_27;
        int *l_1013 = &g_171;
        int l_1014 = (-1L);
        int *l_1015 = &g_171;
        int *l_1016 = (void*)0;
        int *l_1017 = &g_499;
        int *l_1018 = &g_27;
        int *l_1019 = &g_171;
        int *l_1020 = &l_1014;
        int *l_1021 = &g_27;
        int *l_1022 = &g_580;
        int l_1023 = (-1L);
        int *l_1024 = &g_273;
        unsigned *l_1032 = (void*)0;
        unsigned *l_1033 = (void*)0;
        unsigned *l_1034 = &g_111;
        char *l_1035 = (void*)0;
        char *l_1036 = (void*)0;
        char *l_1037 = &g_771;
        unsigned *l_1039 = (void*)0;
        unsigned *l_1040 = (void*)0;
        unsigned *l_1041 = &g_509;
        unsigned short *l_1042 = (void*)0;
        short **l_1043 = (void*)0;
        short **l_1044 = &l_1030;
        char l_1045 = 0xB6L;
        unsigned short *l_1046 = &g_25;
        l_1025--;
        (*p_129) = (safe_add_func_uint16_t_u_u(((*l_1046) = ((+3UL) , (((*l_1041) = (((*l_1037) = ((*l_1018) = ((((*l_1024) , (void*)0) != l_1030) || ((*l_1034) = func_148(l_1031, (*p_129)))))) | (l_1038 |= (**g_683)))) , l_1038))), 0UL));
    }
    else
    {
        short l_1047 = 0x1EC5L;
        int *l_1048 = &g_358;
        int l_1051 = 0x3D55CD58L;
        char *l_1052 = &g_771;
        const unsigned short **l_1053 = (void*)0;
        short l_1090 = 0L;
        int l_1225 = 1L;
        int l_1313 = 1L;
        int l_1330 = 7L;
        if ((~(l_1038 > (-1L))))
        {
            unsigned *l_1056 = &g_509;
            int l_1068 = 0x3FA40F80L;
            unsigned l_1094 = 0x088349CAL;
            unsigned short ** const *l_1151 = (void*)0;
            char *l_1185 = &g_771;
            int l_1331 = 0x07EC47FBL;
            int **l_1374 = &g_721;
            if ((((*l_1056) = (g_115 | (*g_684))) ^ (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_1051, 13)), (**g_683)))))
            {
                int *l_1063 = &g_273;
                int *l_1064 = &l_1051;
                int *l_1065 = &g_273;
                int *l_1066 = &l_1038;
                int *l_1067 = &g_273;
                int *l_1069 = &l_1068;
                int l_1070 = 0x262B8416L;
                int *l_1071 = (void*)0;
                int *l_1072 = &g_499;
                int *l_1073 = &l_1038;
                const unsigned short * const l_1093 = &g_364;
                for (l_1051 = (-19); (l_1051 != 6); l_1051 = safe_add_func_int32_t_s_s(l_1051, 4))
                {
                    return (*g_530);
                }
                --g_1074;
                (*l_1067) = ((void*)0 == &l_1052);
                l_1094 = (*g_530);
            }
            else
            {
                short l_1097 = 1L;
                int l_1098 = 1L;
                const unsigned short * const l_1108 = (void*)0;
                int l_1113 = 1L;
                char **l_1120 = (void*)0;
                unsigned char *l_1152 = (void*)0;
                unsigned l_1168 = 0x94DDCBCCL;
                char l_1172 = 8L;
                int *l_1175 = (void*)0;
                int **l_1339 = &g_125;
                int *l_1340 = &l_1225;
                int *l_1341 = &g_180;
                int *l_1342 = (void*)0;
                int *l_1343 = &g_499;
                int *l_1344 = &g_499;
                int *l_1345 = &l_1051;
                int *l_1346 = (void*)0;
                int *l_1347 = &l_1098;
                int *l_1348 = &l_1113;
                int *l_1349 = (void*)0;
                int *l_1350 = (void*)0;
                int *l_1351 = &l_1330;
                int *l_1352 = &l_1331;
                int *l_1353 = &g_499;
                int *l_1354 = &g_273;
                int *l_1355 = &l_1307;
                int *l_1356 = &l_1113;
                int *l_1357 = &g_273;
                int *l_1358 = &g_27;
                int *l_1359 = (void*)0;
                int *l_1360 = &g_180;
                int *l_1361 = (void*)0;
                int *l_1362 = &g_499;
                int *l_1363 = &l_1307;
                int *l_1364 = (void*)0;
                int *l_1365 = &g_171;
                int *l_1366 = &l_1068;
                int *l_1367 = &g_580;
                int *l_1368 = &l_1331;
                int *l_1369 = &g_180;
                int *l_1370 = &g_27;
                if ((*p_129))
                {
                    int l_1107 = 1L;
                    unsigned char *l_1121 = &g_637;
                    const unsigned short * const l_1126 = &g_1055;
                    short **l_1146 = &l_1030;
                    unsigned short ***l_1149 = &g_485;
                    short l_1155 = 5L;
                    if (((void*)0 == &l_1053))
                    {
lbl_1100:
                        (*p_129) = (((*p_129) > (l_1095 < (l_1097 = g_1096))) & ((*l_1052) = (l_1098 ^ 4294967288UL)));
                    }
                    else
                    {
                        int *l_1099 = &g_580;
                        unsigned short l_1112 = 0xB116L;
                        (*l_1099) &= (*g_530);
                        if (l_1025)
                            goto lbl_1100;
                        (*l_1099) = (safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(l_1097, l_1068)) || (*l_1099)), l_1094)) > l_1081), 0xC5L));
                    }
                    if (((func_148(g_358, (safe_mod_func_uint32_t_u_u(l_1094, ((safe_mod_func_int16_t_s_s((l_1107 ^ (!((((safe_add_func_uint8_t_u_u(((((*l_1121) = (l_1120 == &g_684)) & (safe_add_func_uint16_t_u_u(l_1107, l_1094))) ^ l_1095), ((safe_lshift_func_uint8_t_u_s((g_1127 ^= (l_1107 , l_1068)), (**g_683))) , g_1055))) ^ l_1031) , l_1107) == 0x0614L))), g_509)) , 0x4CA2301EL)))) , l_1094) ^ 0x60L))
                    {
                        unsigned short *l_1135 = (void*)0;
                        unsigned short *l_1136 = (void*)0;
                        unsigned short *l_1137 = &g_25;
                        const int l_1145 = (-1L);
                        (*g_530) = (((((l_1098 < (((*l_1121) ^= (((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((*g_684), 4)), (-8L))) != l_1051) , 250UL)) , 2UL)) ^ l_1107) == (**g_683)) , l_1068) != 0x0F36L);
                        return (*g_530);
                    }
                    else
                    {
                        unsigned short ****l_1150 = &l_1149;
                        unsigned char **l_1153 = &l_1121;
                        unsigned short *l_1154 = &g_364;
                        int **l_1156 = &g_530;
                        const char l_1167 = 0x4CL;
                        unsigned * const l_1171 = (void*)0;
                        unsigned * const *l_1170 = &l_1171;
                        unsigned * const **l_1169 = &l_1170;
                        (*l_1156) = &g_180;
                        (*p_129) &= (*g_530);
                        (*l_1169) = (((safe_mod_func_int16_t_s_s((((*l_1154) = (safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((((l_1107 == ((safe_rshift_func_int8_t_s_u((**l_1156), 0)) & l_1107)) , &g_474) != (void*)0), l_1168)) , (**l_1156)), 1UL)), 5))) , l_1094), 0xB82CL)) > l_1095) , (void*)0);
                        l_1172 |= (*g_530);
                    }
                }
                else
                {
                    const char l_1178 = (-5L);
                    unsigned short *l_1193 = &g_1096;
                    for (g_358 = (-4); (g_358 > (-10)); --g_358)
                    {
                        l_1175 = p_129;
                        (*g_530) ^= l_1095;
                        if ((*p_129))
                            continue;
                    }
                    l_1068 = (l_1090 && (((*p_129) ^ (l_1109 , (((*g_206) | ((safe_sub_func_uint8_t_u_u(0UL, 0xF8L)) ^ (((((g_1190 == &g_1191) != ((*l_1193) = l_1081)) < 6UL) != l_1094) != l_1094))) > 0x3A6C6CBEL))) || l_1090));
                }
                for (g_171 = 0; (g_171 < (-22)); g_171--)
                {
                    short l_1198 = 0x6424L;
                    const char *l_1219 = &g_771;
                    const char **l_1218 = &l_1219;
                    int l_1241 = 0xDB2676D2L;
                    int l_1255 = 0xEC80D5AFL;
                    int l_1271 = (-1L);
                    int l_1277 = 0xAE58BEDAL;
                    int l_1298 = 0x7336E9F5L;
                    for (g_482 = 13; (g_482 > 16); g_482++)
                    {
                        return l_1047;
                    }
                    if ((*g_530))
                        break;
                    if (l_1109)
                        break;
                    if ((((void*)0 == &l_1108) < (l_1051 = l_1198)))
                    {
                        int *l_1199 = &g_580;
                        int **l_1200 = &g_721;
                        unsigned char *l_1201 = &g_1132;
                        const char ***l_1220 = &l_1218;
                        unsigned short **l_1226 = (void*)0;
                        int *l_1227 = &g_180;
                        unsigned *l_1228 = (void*)0;
                        unsigned *l_1229 = &l_1025;
                        (*l_1200) = l_1199;
                        (*g_530) = l_1025;
                        l_1068 = ((++(*l_1201)) && (safe_lshift_func_uint8_t_u_s(((*l_1199) == (((*l_1229) = (((*l_1056) = (safe_rshift_func_int16_t_s_u((((*l_1048) = g_1096) , l_1198), 0))) || (((safe_lshift_func_uint16_t_u_u((((l_1038 = (safe_sub_func_uint8_t_u_u(l_1068, ((safe_sub_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_1051, (*g_206))), 0)) , ((*l_1220) = l_1218)) != (((*l_1227) = (((((safe_sub_func_uint16_t_u_u((l_1225 &= (safe_mod_func_uint32_t_u_u(((*l_1056) = l_1051), ((*p_129) = (*p_129))))), l_1090)) , (void*)0) != l_1226) == 0x2908L) < g_1127)) , l_1120)) == l_1047), l_1094)) , l_1025)))) >= l_1047) & l_1047), 5)) == (*g_206)) && 0xCC3EL))) >= l_1198)), (*g_684))));
                    }
                    else
                    {
                        unsigned l_1230 = 0x0AC199CFL;
                        int *l_1231 = (void*)0;
                        int *l_1232 = &l_1225;
                        int *l_1233 = (void*)0;
                        int *l_1234 = (void*)0;
                        int *l_1235 = &l_1038;
                        int *l_1236 = &g_27;
                        int *l_1237 = &l_1225;
                        int *l_1238 = &l_1113;
                        int *l_1239 = (void*)0;
                        int *l_1240 = &l_1113;
                        int *l_1242 = &l_1051;
                        int *l_1243 = &l_1241;
                        int *l_1244 = (void*)0;
                        int *l_1245 = &g_580;
                        int *l_1246 = (void*)0;
                        int *l_1247 = &l_1098;
                        int *l_1248 = (void*)0;
                        int *l_1249 = &l_1051;
                        int *l_1250 = &g_499;
                        int *l_1251 = &g_180;
                        int *l_1252 = &l_1241;
                        int *l_1253 = (void*)0;
                        int *l_1254 = &g_27;
                        int *l_1256 = &l_1241;
                        int *l_1257 = &l_1241;
                        int *l_1258 = &l_1225;
                        int *l_1259 = &l_1255;
                        int *l_1260 = &l_1113;
                        int *l_1261 = &l_1225;
                        int *l_1262 = &g_273;
                        int *l_1263 = &g_273;
                        int *l_1264 = &l_1051;
                        int l_1265 = (-8L);
                        int *l_1266 = &l_1265;
                        int *l_1267 = &l_1068;
                        int *l_1268 = (void*)0;
                        int *l_1269 = (void*)0;
                        int *l_1270 = &l_1225;
                        int *l_1272 = (void*)0;
                        int *l_1273 = &l_1068;
                        int *l_1274 = &l_1068;
                        int *l_1275 = (void*)0;
                        int *l_1276 = (void*)0;
                        int *l_1278 = &l_1255;
                        int *l_1280 = &g_180;
                        int *l_1281 = &l_1265;
                        int *l_1282 = &g_499;
                        int *l_1283 = &g_580;
                        int *l_1284 = &g_27;
                        int *l_1285 = &l_1098;
                        int *l_1286 = &g_273;
                        int *l_1287 = &l_1038;
                        int *l_1288 = &l_1255;
                        int *l_1289 = &l_1068;
                        int *l_1290 = &l_1113;
                        int *l_1291 = &l_1265;
                        int *l_1292 = &l_1098;
                        int *l_1294 = &l_1265;
                        int l_1295 = 7L;
                        int *l_1296 = &l_1098;
                        int *l_1297 = &l_1277;
                        int *l_1299 = &l_1051;
                        int *l_1300 = &l_1068;
                        int *l_1301 = (void*)0;
                        int *l_1302 = (void*)0;
                        int *l_1303 = &l_1068;
                        int *l_1304 = &l_1225;
                        int *l_1305 = &l_1255;
                        int *l_1306 = &g_273;
                        int *l_1308 = &l_1225;
                        int *l_1309 = (void*)0;
                        int *l_1310 = (void*)0;
                        int *l_1311 = &l_1298;
                        int *l_1312 = &l_1241;
                        int *l_1314 = &l_1051;
                        int *l_1315 = &l_1307;
                        int *l_1316 = &g_580;
                        int *l_1318 = &l_1307;
                        int *l_1319 = &l_1225;
                        int *l_1320 = (void*)0;
                        int *l_1321 = (void*)0;
                        int *l_1322 = &l_1051;
                        int *l_1323 = &l_1313;
                        int *l_1324 = (void*)0;
                        int *l_1325 = &l_1068;
                        int *l_1326 = &l_1255;
                        int *l_1327 = &l_1298;
                        int *l_1328 = &l_1241;
                        int *l_1329 = &l_1051;
                        int *l_1332 = &l_1307;
                        (*l_1232) = ((*g_530) = l_1230);
                        g_1333++;
                        (*l_1270) = (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u(g_1333)), 0));
                    }
                }
                (*l_1339) = &g_273;
                --g_1371;
            }
            (*l_1374) = p_129;
        }
        else
        {
            const int *l_1375 = &g_669;
            const int **l_1376 = &l_1375;
            (*l_1376) = l_1375;
        }
    }
    g_1507++;
    return (*p_129);
}







static int * func_130(unsigned p_131, unsigned p_132, unsigned short * p_133, unsigned p_134)
{
    unsigned char *l_727 = &g_637;
    int l_729 = 0x46ADCBB8L;
    int **l_736 = &g_530;
    short *l_737 = &g_103;
    unsigned l_738 = 0x4BDA9353L;
    const unsigned short * const l_743 = (void*)0;
    unsigned *l_758 = &g_111;
    int l_760 = 0L;
    int l_825 = 6L;
    int l_832 = 1L;
    int l_906 = 0L;
    unsigned short l_921 = 3UL;
    unsigned short ***l_934 = &g_485;
    unsigned l_977 = 2UL;
    if ((safe_add_func_uint8_t_u_u((g_728 ^= ((*l_727) = g_27)), (l_729 > 0x64B8D93FL))))
    {
        for (g_358 = 0; (g_358 > 24); ++g_358)
        {
            l_729 &= p_132;
        }
    }
    else
    {
        unsigned short l_734 = 0xB1D0L;
        int **l_735 = &g_721;
        l_729 = func_141(p_134, (((+((((*g_206) , ((((*g_206) == p_134) != (safe_add_func_int32_t_s_s((&g_474 == p_133), (*g_206)))) == (g_669 | (((l_734 && (**g_683)) , (void*)0) == l_735)))) ^ g_728) <= 0x6A438522L)) , (*g_206)) , g_649), (*g_485), (*g_530));
        (*l_735) = &l_729;
        (*g_530) &= l_729;
    }
    (*l_736) = &g_499;
    if (((p_134 ^ (((*l_737) = p_132) != 0x92D7L)) , l_738))
    {
        int *l_739 = &g_273;
        short l_742 = 1L;
        (*l_739) &= (**l_736);
        for (p_131 = 0; (p_131 != 37); p_131 = safe_add_func_uint8_t_u_u(p_131, 2))
        {
            unsigned l_746 = 2UL;
            (**l_736) = (func_141(p_134, (l_737 == (l_742 , (void*)0)), l_743, (safe_add_func_uint16_t_u_u((*p_133), (*p_133)))) || ((l_746 >= (*l_739)) , p_134));
        }
        (*g_530) ^= (safe_lshift_func_int16_t_s_u(p_131, (*p_133)));
    }
    else
    {
        short l_753 = 0xA765L;
        unsigned *l_756 = &g_111;
        unsigned **l_757 = (void*)0;
        const unsigned short * const l_759 = &g_25;
        unsigned short *l_761 = (void*)0;
        int *l_764 = &g_27;
        unsigned short ***l_767 = &g_485;
        int *l_768 = (void*)0;
        int *l_769 = &g_358;
        char *l_770 = &g_771;
        int l_795 = 0x0932EC39L;
        int l_798 = 0x2C04C6FCL;
        int l_860 = 0x2296FF63L;
        int l_868 = 9L;
        int l_876 = (-3L);
        int l_887 = 0xBE0AD75FL;
        int l_904 = (-1L);
        int l_905 = 0x65DD9C75L;
        const unsigned short * const l_914 = &g_364;
        unsigned l_922 = 0x25E5F0BFL;
        int *l_985 = &l_760;
        unsigned char l_1002 = 0xE7L;
        unsigned l_1007 = 6UL;
        (*g_530) &= (safe_mod_func_int32_t_s_s(5L, (((*g_485) != (l_761 = p_133)) , p_132)));
    }
    return (*l_736);
}







static unsigned char func_141(unsigned p_142, int p_143, const unsigned short * const p_144, int p_145)
{
    int l_707 = (-1L);
    if (p_142)
    {
        return p_145;
    }
    else
    {
        int l_719 = 0xAD0AA76AL;
        if ((g_103 , p_145))
        {
            unsigned *l_718 = &g_482;
            int l_720 = (-10L);
            int **l_722 = &g_125;
            (*g_530) ^= l_707;
            (*g_530) &= ((((safe_rshift_func_uint16_t_u_u(0x2949L, l_707)) <= l_707) | 0xEB15BB33L) ^ g_120);
            (*l_722) = g_721;
            if ((*g_530))
            {
                (*l_722) = &g_180;
            }
            else
            {
                unsigned l_723 = 1UL;
                l_723 = 0x6B92F2ECL;
            }
        }
        else
        {
            int **l_724 = &g_125;
            (*l_724) = &l_719;
        }
    }
    return p_143;
}







static short func_148(unsigned p_149, int p_150)
{
    int **l_178 = &g_125;
    unsigned l_179 = 0x0F127D3BL;
    unsigned *l_183 = &g_111;
    int l_239 = (-8L);
    int l_248 = (-4L);
    int l_291 = (-9L);
    unsigned char l_304 = 7UL;
    unsigned l_587 = 1UL;
    unsigned short ***l_595 = &g_485;
    const unsigned short **l_597 = (void*)0;
    const unsigned short ***l_596 = &l_597;
    char * const l_660 = &g_7;
    char * const *l_659 = &l_660;
    int **l_687 = &g_125;
    int *l_691 = &l_239;
    int *l_692 = &g_273;
    int *l_693 = (void*)0;
    int *l_694 = &g_171;
    int *l_695 = &g_171;
    int *l_696 = &g_499;
    int l_697 = 0xC00E36DEL;
    int *l_698 = &g_580;
    int *l_699 = &l_248;
    int *l_700 = (void*)0;
    int *l_701 = &g_27;
    int *l_702 = &l_291;
    unsigned l_703 = 4294967288UL;
    (*l_178) = &p_150;
    (*l_178) = &g_27;
    if ((l_179 == (g_180 | (((safe_lshift_func_uint8_t_u_s(p_150, (((*l_183) = g_25) == p_150))) , p_149) >= p_149))))
    {
        int l_186 = 0x26B2C3BFL;
        int l_189 = (-1L);
        unsigned char l_194 = 0x21L;
        int l_226 = (-10L);
        int l_267 = (-7L);
        unsigned *l_308 = &g_301;
        int l_347 = 1L;
        int *l_517 = &g_273;
        (*g_125) = ((void*)0 != &g_25);
        (*g_125) = (**l_178);
        for (g_171 = (-21); (g_171 > (-29)); --g_171)
        {
            int *l_187 = &g_180;
            int *l_188 = &g_180;
            int *l_190 = &g_27;
            int *l_191 = &g_180;
            int *l_192 = &l_189;
            int *l_193 = &g_180;
            int l_331 = 0xA1AEF994L;
            int l_448 = (-6L);
            int l_454 = 1L;
            l_194++;
            if ((!0x70B72F39L))
            {
                const unsigned *l_204 = &g_205;
                const unsigned **l_203 = &l_204;
                const unsigned *l_209 = &g_207;
                const unsigned **l_208 = &l_209;
                int ***l_214 = &l_178;
                unsigned char *l_217 = (void*)0;
                unsigned char *l_218 = (void*)0;
                unsigned char *l_219 = &l_194;
                int l_256 = 0xEC79C0CFL;
                int l_268 = 5L;
                if ((((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((*l_208) = (g_206 = ((*l_203) = &g_111))) == (void*)0), (((((((*l_219) |= (safe_mod_func_uint16_t_u_u(1UL, ((safe_mod_func_uint16_t_u_u(((**l_178) , ((((*l_214) = l_178) != ((+(8L | ((p_149 < l_179) && ((((safe_mod_func_int32_t_s_s((*g_125), g_103)) < p_150) , 0xB27BL) >= p_150)))) , (void*)0)) | 0x6250L)), (*l_192))) || (*g_125))))) > 4L) & l_179) >= g_111) , (**l_178)) > g_7))), 0x48341D41L)), 3L)) < p_150) != 9UL))
                {
                    char l_300 = 0xB4L;
                    unsigned short l_309 = 0x92B9L;
                    unsigned short *l_310 = &l_309;
                    if (p_149)
                    {
                        int *l_220 = &g_27;
                        int *l_221 = &l_189;
                        int *l_222 = &g_27;
                        int *l_223 = &l_189;
                        int *l_224 = &l_189;
                        int *l_225 = (void*)0;
                        int *l_227 = &l_189;
                        int *l_228 = &g_27;
                        int *l_229 = &l_189;
                        int *l_230 = &l_226;
                        int *l_231 = &g_27;
                        int *l_232 = (void*)0;
                        int *l_233 = &g_27;
                        int *l_234 = &l_226;
                        int *l_235 = (void*)0;
                        int *l_236 = &g_27;
                        int *l_237 = &g_27;
                        int *l_238 = (void*)0;
                        int *l_240 = &l_226;
                        int *l_241 = &l_239;
                        int *l_242 = &g_180;
                        int *l_243 = &g_27;
                        int *l_244 = &l_189;
                        int *l_245 = &l_226;
                        int *l_246 = &l_226;
                        int *l_247 = (void*)0;
                        int *l_249 = &g_27;
                        int *l_250 = &l_239;
                        int *l_251 = (void*)0;
                        int *l_252 = (void*)0;
                        int *l_253 = &g_27;
                        int *l_254 = &l_226;
                        int *l_255 = &l_239;
                        int *l_257 = &l_256;
                        int *l_258 = &g_180;
                        int *l_259 = &l_256;
                        int *l_260 = &l_248;
                        int *l_261 = &l_256;
                        int *l_262 = (void*)0;
                        int l_263 = 0x93019E49L;
                        int *l_264 = &l_248;
                        int *l_265 = &g_27;
                        int *l_266 = &g_180;
                        int *l_269 = &l_189;
                        int *l_270 = &l_256;
                        int *l_271 = &g_180;
                        int *l_272 = (void*)0;
                        int *l_274 = &l_248;
                        int *l_275 = (void*)0;
                        int *l_276 = (void*)0;
                        int *l_277 = &l_268;
                        int *l_278 = &g_273;
                        int *l_279 = &g_273;
                        int *l_280 = &l_239;
                        int *l_281 = &g_27;
                        int *l_282 = &l_256;
                        int *l_283 = &l_256;
                        int *l_284 = &l_263;
                        int *l_285 = &l_189;
                        int *l_286 = &l_268;
                        int l_287 = 0L;
                        int *l_288 = &g_27;
                        int *l_289 = (void*)0;
                        int *l_290 = (void*)0;
                        int *l_292 = &l_248;
                        int *l_293 = &l_291;
                        int *l_294 = &l_226;
                        int *l_295 = &l_239;
                        int *l_296 = &l_256;
                        char *l_307 = &l_300;
                        --g_297;
                        --g_301;
                        (*l_283) = (((*l_183) = l_304) == ((safe_rshift_func_int8_t_s_u(((*l_307) ^= (p_149 & 0x781183D2L)), 2)) > ((((**l_178) = ((void*)0 != &l_187)) , l_308) == l_183)));
                    }
                    else
                    {
                        return g_207;
                    }
                    (*l_178) = &p_150;
                    (*l_188) = (((*l_310) = l_309) ^ l_300);
                    (*l_192) |= (***l_214);
                }
                else
                {
                    short l_338 = 0x7F52L;
                    int l_346 = 0L;
                    int l_356 = 0x49003B35L;
                    int l_359 = 1L;
                    int *l_367 = (void*)0;
                    int *l_368 = (void*)0;
                    int *l_369 = (void*)0;
                    int *l_370 = &l_356;
                    int *l_371 = &l_267;
                    int *l_372 = (void*)0;
                    int *l_373 = &l_359;
                    int *l_374 = &l_256;
                    int *l_375 = &l_248;
                    int *l_376 = (void*)0;
                    int *l_377 = &l_189;
                    int *l_378 = &l_331;
                    int *l_379 = &l_256;
                    int *l_380 = &l_248;
                    int *l_381 = &l_359;
                    int *l_382 = &l_267;
                    int *l_383 = &g_273;
                    int *l_384 = &l_268;
                    int *l_385 = &g_180;
                    int *l_386 = &l_248;
                    int *l_387 = (void*)0;
                    int *l_388 = &l_239;
                    int *l_389 = &l_226;
                    int *l_390 = &l_331;
                    int *l_391 = &l_267;
                    int *l_392 = &l_189;
                    int *l_393 = &l_356;
                    int *l_394 = &l_331;
                    int *l_395 = (void*)0;
                    int *l_396 = (void*)0;
                    int *l_397 = &l_331;
                    int *l_398 = (void*)0;
                    int *l_399 = &l_256;
                    int *l_400 = &l_189;
                    int *l_401 = &l_356;
                    int *l_402 = &g_273;
                    int *l_403 = &l_268;
                    int *l_404 = &l_256;
                    int *l_405 = &l_331;
                    int *l_406 = &l_267;
                    int *l_407 = &l_356;
                    int *l_408 = (void*)0;
                    int *l_409 = (void*)0;
                    int *l_410 = (void*)0;
                    int *l_411 = (void*)0;
                    int *l_412 = (void*)0;
                    int *l_413 = &l_356;
                    int *l_414 = &l_239;
                    int *l_415 = (void*)0;
                    int *l_416 = (void*)0;
                    int *l_417 = &l_226;
                    int *l_418 = (void*)0;
                    int *l_419 = &g_27;
                    int *l_420 = &l_189;
                    int *l_421 = &l_267;
                    int *l_422 = &l_256;
                    int *l_423 = &l_268;
                    int *l_424 = &l_239;
                    int *l_425 = &l_248;
                    int *l_426 = (void*)0;
                    int *l_427 = &l_267;
                    int *l_428 = &l_256;
                    int *l_429 = &l_248;
                    int *l_430 = &g_180;
                    int *l_431 = &l_189;
                    int *l_432 = &l_291;
                    int *l_433 = &l_291;
                    int *l_434 = &l_356;
                    int *l_435 = &l_331;
                    int *l_436 = &l_291;
                    int *l_437 = (void*)0;
                    int *l_438 = &l_356;
                    int *l_439 = (void*)0;
                    int *l_440 = (void*)0;
                    int *l_441 = &l_189;
                    int *l_442 = &g_273;
                    int *l_443 = &l_248;
                    int *l_444 = &l_359;
                    int *l_445 = &l_267;
                    int *l_446 = &l_256;
                    int *l_447 = (void*)0;
                    int *l_449 = &g_273;
                    int *l_450 = &l_267;
                    int *l_451 = &l_268;
                    int *l_452 = &l_267;
                    int *l_453 = &l_267;
                    int *l_455 = &g_273;
                    int *l_456 = &l_226;
                    int *l_457 = &g_273;
                    int *l_458 = &l_448;
                    int *l_459 = &l_267;
                    int *l_460 = &g_273;
                    int *l_461 = (void*)0;
                    int *l_462 = (void*)0;
                    int *l_463 = &l_226;
                    int *l_464 = &l_248;
                    int *l_465 = (void*)0;
                    int *l_466 = &g_180;
                    int *l_467 = &g_27;
                    int *l_468 = &l_248;
                    int *l_469 = &l_268;
                    int *l_470 = &l_454;
                    int *l_471 = &g_180;
                    int *l_472 = (void*)0;
                    int *l_473 = &l_256;
                    int *l_475 = &l_189;
                    int *l_476 = &l_454;
                    int *l_477 = (void*)0;
                    int *l_478 = &l_356;
                    int *l_479 = &g_27;
                    int *l_480 = &l_454;
                    int *l_481 = (void*)0;
                    for (g_103 = 0; (g_103 != (-21)); g_103 = safe_sub_func_uint8_t_u_u(g_103, 7))
                    {
                        int *l_313 = &l_248;
                        int *l_314 = &l_239;
                        int *l_315 = &l_239;
                        int *l_316 = &l_239;
                        int *l_317 = &l_248;
                        int *l_318 = &l_268;
                        int *l_319 = &g_180;
                        int *l_320 = &l_248;
                        int *l_321 = &l_267;
                        int *l_322 = (void*)0;
                        int *l_323 = &l_256;
                        int *l_324 = &l_267;
                        int *l_325 = &g_180;
                        int *l_326 = &l_189;
                        int *l_327 = &g_273;
                        int *l_328 = &g_273;
                        int *l_329 = &l_239;
                        int *l_330 = &g_27;
                        int *l_332 = &l_226;
                        int *l_333 = &l_267;
                        int *l_334 = &l_226;
                        int *l_335 = &g_27;
                        int *l_336 = &g_273;
                        int *l_337 = &g_27;
                        int *l_339 = &l_331;
                        int *l_340 = &l_291;
                        int l_341 = 0xD5DE68A0L;
                        int *l_342 = &l_267;
                        int *l_343 = (void*)0;
                        int *l_344 = (void*)0;
                        int *l_345 = &l_256;
                        int *l_348 = &l_239;
                        int *l_349 = &l_256;
                        int *l_350 = &g_180;
                        int *l_351 = (void*)0;
                        int *l_352 = &l_341;
                        int *l_353 = &l_267;
                        int *l_354 = (void*)0;
                        int *l_355 = &l_267;
                        int *l_357 = (void*)0;
                        int *l_360 = &g_273;
                        int *l_361 = &l_267;
                        int *l_362 = (void*)0;
                        int *l_363 = &l_341;
                        if ((*g_125))
                            break;
                        g_364++;
                    }
                    --g_482;
                }
                if (l_267)
                {
                    unsigned char l_512 = 0xD6L;
                    if ((l_186 < 0x7DE4DC80L))
                    {
                        (*l_190) = ((*l_187) = (*g_125));
                        if ((*g_125))
                            break;
                        (*l_188) |= ((***l_214) != ((***l_214) != p_150));
                    }
                    else
                    {
                        unsigned short ***l_487 = &g_485;
                        (*l_487) = g_485;
                    }
                    if (p_150)
                    {
                        (**l_214) = (*l_178);
                        return p_150;
                    }
                    else
                    {
                        int *l_488 = &l_256;
                        int *l_489 = &l_267;
                        int *l_490 = &g_180;
                        int *l_491 = (void*)0;
                        int *l_492 = &l_189;
                        int *l_493 = &g_180;
                        int *l_494 = (void*)0;
                        int *l_495 = &l_454;
                        int *l_496 = &l_256;
                        int *l_497 = (void*)0;
                        int *l_498 = &l_256;
                        int l_500 = 0x3443E91BL;
                        int *l_501 = &l_189;
                        int *l_502 = (void*)0;
                        int *l_503 = &g_27;
                        int *l_504 = &l_248;
                        int *l_505 = &l_267;
                        int *l_506 = (void*)0;
                        int l_507 = 0xE8B652B0L;
                        int *l_508 = &l_239;
                        ++g_509;
                        --l_512;
                        return p_150;
                    }
                }
                else
                {
                    for (g_499 = (-2); (g_499 < 18); g_499 = safe_add_func_int32_t_s_s(g_499, 1))
                    {
                        return g_120;
                    }
                    return g_474;
                }
            }
            else
            {
                short l_537 = 0x2F97L;
                int **l_538 = &l_190;
                (*l_178) = &g_499;
                l_517 = &p_150;
                if ((247UL == (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((p_149 == ((safe_rshift_func_uint16_t_u_s((*l_517), 6)) && (((*l_191) >= (**l_178)) == (*g_125)))) <= (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_273, (0UL ^ 0x4594A1EEL))), 1L))) ^ (*l_517)), (*g_206))), 6))))
                {
                    (*l_188) &= (-1L);
                }
                else
                {
                    int l_533 = 0xA9256F54L;
                    unsigned short *l_534 = &g_25;
                    g_530 = ((*l_178) = &g_171);
                    (*l_178) = &g_180;
                    if (((((safe_sub_func_uint32_t_u_u(((*l_517) ^= p_149), (((g_364 = ((*l_534) = l_533)) & ((((*l_188) = g_482) < (safe_mod_func_uint16_t_u_u(65535UL, l_537))) ^ l_533)) || ((**l_178) && 0x33L)))) , l_538) != (void*)0) ^ p_149))
                    {
                        short l_539 = (-7L);
                        int *l_540 = (void*)0;
                        int *l_541 = &l_248;
                        int *l_542 = &l_239;
                        int *l_543 = &l_291;
                        int *l_544 = &l_454;
                        int *l_545 = &g_27;
                        int *l_546 = &l_248;
                        int *l_547 = (void*)0;
                        int *l_548 = (void*)0;
                        int *l_549 = &g_273;
                        int *l_550 = &l_267;
                        int *l_551 = (void*)0;
                        int *l_552 = &l_248;
                        int *l_553 = (void*)0;
                        int *l_554 = &g_180;
                        int *l_555 = &l_189;
                        int *l_556 = &g_499;
                        int *l_557 = &l_454;
                        int *l_558 = &l_267;
                        int *l_559 = (void*)0;
                        int *l_560 = &g_499;
                        int *l_561 = &g_499;
                        int *l_562 = &g_273;
                        int *l_563 = (void*)0;
                        int *l_564 = (void*)0;
                        int *l_565 = &l_448;
                        int *l_566 = &l_331;
                        int *l_567 = &l_331;
                        int *l_568 = &g_499;
                        int *l_569 = &l_331;
                        int *l_570 = &l_239;
                        int *l_571 = &l_239;
                        int *l_572 = &g_273;
                        int *l_573 = &g_273;
                        int *l_574 = &l_226;
                        int *l_575 = &g_273;
                        int *l_576 = (void*)0;
                        int *l_577 = &l_226;
                        int *l_578 = &l_189;
                        int *l_579 = &l_267;
                        int *l_581 = &l_248;
                        int *l_582 = (void*)0;
                        int *l_583 = &g_180;
                        int *l_584 = &l_454;
                        int *l_585 = &l_448;
                        int *l_586 = &g_580;
                        --l_587;
                        g_125 = &p_150;
                        if ((*g_125))
                            continue;
                    }
                    else
                    {
                        char l_590 = 0x76L;
                        return l_590;
                    }
                }
            }
            return g_364;
        }
        for (p_150 = (-23); (p_150 == (-24)); --p_150)
        {
            (*g_530) &= (*l_517);
        }
    }
    else
    {
        unsigned short l_601 = 8UL;
        char *l_633 = &g_7;
        unsigned char l_641 = 248UL;
        unsigned short l_644 = 0UL;
        int l_656 = 0x61EB1585L;
        int l_663 = 0x8F02643BL;
        int l_690 = 3L;
lbl_664:
        (*g_530) ^= (safe_rshift_func_int16_t_s_u((l_595 == (g_598 = l_596)), (safe_sub_func_int16_t_s_s(p_149, l_601))));
        p_150 = ((~0xD981C66FL) >= p_150);
        if ((safe_unary_minus_func_uint16_t_u(65533UL)))
        {
            unsigned l_603 = 4294967295UL;
            int l_606 = (-9L);
            char *l_623 = (void*)0;
            unsigned *l_685 = &g_301;
            l_603--;
            if ((*g_125))
            {
                unsigned *l_625 = &g_482;
                int l_630 = 0xF4994B00L;
                char **l_634 = &l_633;
                if ((((l_606 = ((**l_178) = (-1L))) == p_150) != (l_603 ^ ((((((6UL | (p_149 && (safe_lshift_func_int16_t_s_u((p_149 || (!p_149)), 0)))) && ((safe_add_func_uint8_t_u_u((p_149 != 0xF4L), 0x34L)) != 0x9841C212L)) || g_499) || 0xAD4FCD9EL) && g_482) > l_601))))
                {
                    for (l_304 = 0; (l_304 >= 18); l_304++)
                    {
                        (**l_178) = (*g_530);
                    }
                }
                else
                {
                    int l_624 = 0x87969E0EL;
                    for (p_149 = 0; (p_149 <= 60); ++p_149)
                    {
                        (*g_530) = p_150;
                        (*g_125) = (*g_530);
                        l_606 &= 0xA1A9EC34L;
                    }
                    (*g_530) &= (l_601 <= ((g_171 != g_171) , (((((p_149 , (((safe_lshift_func_uint16_t_u_u(p_150, 12)) <= p_150) , (((safe_sub_func_int16_t_s_s(g_205, 0xE85CL)) , (safe_sub_func_uint16_t_u_u(((l_623 != (void*)0) > 6UL), (-4L)))) >= 0x9391L))) , (void*)0) == (void*)0) == l_624) != g_482)));
                }
                (**l_178) = (p_150 || ((--(*l_625)) , (g_637 = (((safe_mod_func_int8_t_s_s((l_630 == (l_606 > (!(safe_sub_func_int32_t_s_s((~1L), (((((*l_634) = l_633) == (void*)0) ^ (((((p_149 && ((safe_mod_func_int8_t_s_s(((*g_530) && (l_601 == (-1L))), g_205)) ^ 65535UL)) , p_150) <= (-7L)) != p_150) <= l_630)) & l_601)))))), g_474)) && l_603) ^ (-1L)))));
                if ((p_149 & ((0x3157L && (**l_178)) , p_149)))
                {
                    unsigned short l_640 = 65535UL;
                    (*g_530) = (safe_rshift_func_uint16_t_u_u(l_640, 3));
                }
                else
                {
                    (*l_178) = (p_149 , &g_273);
                }
                (*g_530) = ((p_149 || l_641) < ((p_150 >= (*g_530)) == (p_149 <= g_301)));
            }
            else
            {
                short *l_645 = (void*)0;
                short *l_646 = &g_474;
                const char *l_648 = &g_649;
                const char **l_647 = &l_648;
                char **l_650 = &l_633;
                int l_651 = 0xD051CAA5L;
                unsigned short *l_661 = (void*)0;
                unsigned short *l_662 = &l_601;
                (**l_178) &= (safe_add_func_uint8_t_u_u(l_644, (((*l_646) &= (p_150 >= 1UL)) | ((((+((l_644 | l_606) , l_644)) , (((*l_647) = l_623) == ((*l_650) = &g_7))) | (g_273 < 0x06D6L)) & l_651))));
                if ((l_663 ^= ((**l_178) = ((((*l_662) = ((0x03L ^ p_149) >= (~((p_149 , (((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_149, p_150)), 0x39CEL)) || (l_656 = l_651)) != (safe_add_func_int32_t_s_s((((*g_206) , &l_633) == l_659), l_651)))) & p_150)))) >= 0x5340L) >= 0x888121A7L))))
                {
                    unsigned char l_672 = 0UL;
                    if (g_482)
                        goto lbl_664;
                    for (g_364 = 0; (g_364 > 48); g_364 = safe_add_func_uint8_t_u_u(g_364, 9))
                    {
                        const int *l_668 = &g_669;
                        const int **l_667 = &l_668;
                        const int *l_671 = (void*)0;
                        const int **l_670 = &l_671;
                        (*l_670) = ((*l_667) = &l_656);
                        (**l_178) &= l_601;
                        (*g_125) &= (g_301 == l_672);
                    }
                    (*l_178) = &p_150;
                    return g_474;
                }
                else
                {
                    int *l_673 = &g_580;
                    short *l_680 = &g_103;
                    (*l_178) = &p_150;
                    (*l_178) = ((**l_178) , l_673);
                    (*g_530) = (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((((l_663 = (safe_lshift_func_int8_t_s_u((**l_178), 0))) , g_637) , (*l_673)), (-1L))), ((((((((((((-3L) & (((*l_680) ^= ((*l_646) = p_150)) >= 0L)) && (safe_rshift_func_int8_t_s_u(g_180, 4))) , g_683) == &l_623) , &g_205) != l_685) & l_601) , p_150) == (*l_673)) , l_603) , p_150)));
                }
                (*g_530) = p_149;
            }
            return p_149;
        }
        else
        {
            int *l_689 = &l_248;
            if ((*g_125))
            {
                unsigned short *l_686 = &g_25;
                int ***l_688 = &l_687;
                (*g_125) = (l_686 != ((*g_485) = func_151((g_509 |= (((*l_688) = (p_149 , l_687)) == (void*)0)), (*g_485), g_637, &l_656, ((void*)0 != l_688))));
            }
            else
            {
                (*l_687) = l_689;
            }
        }
        l_690 ^= (*g_125);
    }
    ++l_703;
    return g_297;
}







static unsigned short * func_151(unsigned p_152, unsigned short * p_153, const int p_154, int * p_155, char p_156)
{
    int *l_166 = &g_27;
    int **l_177 = &l_166;
    for (g_103 = (-11); (g_103 == 18); g_103 = safe_add_func_int8_t_s_s(g_103, 5))
    {
        unsigned l_169 = 4294967295UL;
        int *l_174 = (void*)0;
        if ((*p_155))
        {
            l_166 = &g_27;
        }
        else
        {
            int *l_172 = &g_27;
            int **l_173 = &l_172;
            for (p_156 = (-12); (p_156 <= (-14)); p_156 = safe_sub_func_uint16_t_u_u(p_156, 4))
            {
                int *l_170 = &g_171;
                (*l_170) |= ((*g_125) = l_169);
            }
            if ((*g_125))
                break;
            l_174 = ((*l_173) = l_172);
            g_171 &= (safe_lshift_func_int8_t_s_u((*l_174), 3));
        }
    }
    (*l_177) = (void*)0;
    return &g_25;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_771, "g_771", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_926, "g_926", print_hash_value);
    transparent_crc(g_1055, "g_1055", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    transparent_crc(g_1127, "g_1127", print_hash_value);
    transparent_crc(g_1132, "g_1132", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    transparent_crc(g_1293, "g_1293", print_hash_value);
    transparent_crc(g_1317, "g_1317", print_hash_value);
    transparent_crc(g_1333, "g_1333", print_hash_value);
    transparent_crc(g_1371, "g_1371", print_hash_value);
    transparent_crc(g_1505, "g_1505", print_hash_value);
    transparent_crc(g_1507, "g_1507", print_hash_value);
    transparent_crc(g_1514, "g_1514", print_hash_value);
    transparent_crc(g_1529, "g_1529", print_hash_value);
    transparent_crc(g_1547, "g_1547", print_hash_value);
    transparent_crc(g_1595, "g_1595", print_hash_value);
    transparent_crc(g_1669, "g_1669", print_hash_value);
    transparent_crc(g_1677, "g_1677", print_hash_value);
    transparent_crc(g_1681, "g_1681", print_hash_value);
    transparent_crc(g_1717, "g_1717", print_hash_value);
    transparent_crc(g_1804, "g_1804", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
