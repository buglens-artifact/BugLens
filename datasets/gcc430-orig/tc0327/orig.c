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



static unsigned g_16 = 0UL;
static int g_19 = (-1L);
static unsigned short g_50 = 0UL;
static unsigned short g_57 = 0x2404L;
static int g_79 = (-1L);
static int **g_90 = (void*)0;
static int g_104 = 0xC90B22F2L;
static unsigned short g_105 = 2UL;
static unsigned g_107 = 9UL;
static char g_109 = 0x66L;
static short g_161 = 0x80A7L;
static volatile unsigned g_169 = 4294967295UL;
static volatile unsigned g_193 = 4294967294UL;
static unsigned char g_216 = 0UL;
static volatile short g_315 = 0x435BL;
static volatile char g_325 = 0x0DL;
static volatile short g_333 = 0x7CB0L;
static char g_363 = 0x73L;
static char g_380 = 0xDAL;
static int g_384 = 7L;
static volatile unsigned g_398 = 0UL;
static int g_465 = 8L;
static int *g_470 = &g_79;
static unsigned short g_506 = 0x8223L;
static unsigned short *g_505 = &g_506;
static int g_541 = (-1L);
static unsigned g_570 = 4294967290UL;
static short *g_581 = &g_161;
static short **g_580 = &g_581;
static int ***g_594 = &g_90;
static int ****g_593 = &g_594;
static char g_607 = 0x34L;
static short g_623 = 0x15B2L;
static unsigned g_636 = 0x2D127F73L;
static int g_652 = 0L;
static char g_715 = 1L;
static char g_720 = 1L;
static volatile unsigned short g_729 = 0x6F55L;
static unsigned g_844 = 0xCA2B792BL;
static volatile unsigned short g_882 = 0x0023L;
static short ***g_939 = (void*)0;
static unsigned g_967 = 0xEC0A0EC8L;
static volatile char *g_997 = (void*)0;
static volatile char **g_996 = &g_997;
static int g_1034 = 0xD0314FF9L;
static volatile char g_1057 = 6L;
static unsigned short g_1059 = 65530UL;
static unsigned char *g_1087 = (void*)0;
static unsigned char **g_1086 = &g_1087;
static char *g_1139 = &g_715;
static char **g_1138 = &g_1139;
static volatile int g_1166 = 1L;
static volatile int *g_1165 = &g_1166;
static volatile int **g_1164 = &g_1165;
static unsigned char g_1214 = 0UL;
static unsigned *g_1265 = (void*)0;
static unsigned **g_1264 = &g_1265;
static unsigned short g_1342 = 65526UL;
static volatile char g_1374 = (-5L);
static volatile int g_1396 = (-1L);
static volatile int *g_1395 = &g_1396;
static volatile int g_1457 = 0x86CA639BL;
static unsigned g_1459 = 0x51E9D316L;
static unsigned short **g_1502 = &g_505;
static unsigned short ***g_1501 = &g_1502;
static short g_1571 = 0xC862L;
static int g_1593 = 0x3FE68722L;
static unsigned char g_1599 = 1UL;
static short ****g_1611 = &g_939;
static short *****g_1610 = &g_1611;
static unsigned short g_1720 = 65535UL;



static int func_1(void);
static short func_2(unsigned short p_3, int p_4, unsigned p_5);
static unsigned short func_6(unsigned short p_7, unsigned p_8, char p_9, char p_10);
static unsigned short func_11(unsigned p_12, char p_13, unsigned p_14, unsigned short p_15);
static char func_38(char p_39, int * p_40);
static int * func_43(char p_44, int * p_45);
static int * func_46(int p_47, int * p_48);
static unsigned short * func_51(unsigned short * p_52, unsigned short * p_53, int p_54, char p_55);
static unsigned short * func_58(int * p_59, unsigned short p_60, int p_61, unsigned short * p_62);
static int * func_63(int p_64, unsigned short * p_65, unsigned short * p_66, int * p_67, int p_68);
static int func_1(void)
{
    short l_17 = 0x50DBL;
    int **l_1462 = (void*)0;
    int **l_1463 = &g_470;
    int *l_1464 = &g_19;
    unsigned l_1729 = 0xC7166F27L;
    char l_1733 = 0x14L;
    (*g_1395) = ((func_2(func_6(func_11(g_16, g_16, g_16, l_17), l_17, g_19, func_38(((*g_1139) = (safe_sub_func_uint8_t_u_u((((*l_1463) = func_43((g_16 <= ((((((*l_1463) = func_46(l_17, &g_19)) != l_1464) <= 0x2329A9E5L) > (*l_1464)) & (*l_1464))), &g_19)) == l_1464), 255UL))), &g_19)), (*l_1464), (*l_1464)) <= 1L) & (*l_1464));
    (*l_1464) = (safe_sub_func_uint8_t_u_u(l_1729, 0x58L));
    for (g_16 = 0; (g_16 <= 12); g_16 = safe_add_func_int32_t_s_s(g_16, 4))
    {
        short l_1732 = (-1L);
        (*l_1464) = l_1732;
        (*l_1464) = (*l_1464);
        (*g_1395) &= l_1732;
    }
    (*g_1395) = (((*l_1464) != (((**g_1502) = (((*l_1464) == (*l_1464)) || (-1L))) > (0L || l_1733))) > (*g_1395));
    return (*g_1165);
}







static short func_2(unsigned short p_3, int p_4, unsigned p_5)
{
    int *l_1625 = &g_79;
    int **l_1626 = (void*)0;
    int **l_1627 = &l_1625;
    int *l_1630 = &g_465;
    int *l_1631 = (void*)0;
    int *l_1632 = &g_104;
    int *l_1633 = (void*)0;
    int *l_1634 = &g_19;
    int *l_1635 = &g_104;
    int *l_1636 = &g_19;
    int *l_1637 = &g_19;
    int *l_1638 = &g_465;
    int l_1639 = (-1L);
    int *l_1640 = &g_19;
    int *l_1641 = &g_104;
    int *l_1642 = &l_1639;
    int *l_1643 = &g_465;
    int *l_1644 = &g_104;
    int *l_1645 = &g_79;
    int *l_1646 = &g_465;
    int *l_1647 = &g_104;
    int *l_1648 = &g_465;
    int *l_1649 = (void*)0;
    int *l_1650 = &g_465;
    int *l_1651 = &g_104;
    int *l_1652 = &g_465;
    int *l_1653 = &l_1639;
    int *l_1654 = &g_104;
    int l_1655 = 1L;
    int *l_1656 = &g_104;
    int *l_1657 = &g_104;
    int *l_1658 = &g_104;
    int l_1659 = 0xCE283127L;
    int *l_1660 = &g_465;
    int *l_1661 = &l_1639;
    int *l_1662 = &l_1639;
    int *l_1663 = &l_1639;
    int l_1664 = (-3L);
    int l_1665 = 0L;
    int *l_1666 = &g_19;
    int *l_1667 = &g_465;
    int l_1668 = 0x2026845BL;
    int *l_1669 = (void*)0;
    int *l_1670 = (void*)0;
    int *l_1671 = &l_1664;
    int *l_1672 = &g_465;
    int *l_1673 = &g_104;
    int *l_1674 = &l_1659;
    int *l_1675 = (void*)0;
    int *l_1676 = &g_79;
    int *l_1677 = &l_1639;
    int *l_1678 = &g_19;
    int *l_1679 = &l_1664;
    int *l_1680 = (void*)0;
    int *l_1681 = &g_79;
    int *l_1682 = &l_1659;
    int *l_1683 = &l_1668;
    int *l_1684 = &g_79;
    int *l_1685 = &g_104;
    int *l_1686 = &g_19;
    int l_1687 = 0x45EF2F1CL;
    int l_1688 = 0x63B504B4L;
    int l_1689 = 0L;
    int l_1690 = 1L;
    int *l_1691 = &l_1655;
    int *l_1692 = &g_104;
    int l_1693 = 7L;
    int *l_1694 = &g_79;
    int *l_1695 = &g_79;
    int *l_1696 = &l_1693;
    int *l_1697 = (void*)0;
    int *l_1698 = &g_465;
    int *l_1699 = &l_1665;
    int *l_1700 = &l_1688;
    int l_1701 = 0xC3A330DEL;
    int *l_1702 = &l_1664;
    int *l_1703 = &g_465;
    int l_1704 = 3L;
    int *l_1705 = (void*)0;
    int *l_1706 = &l_1693;
    int *l_1707 = &g_19;
    int l_1708 = 0x32C6EDD6L;
    int *l_1709 = (void*)0;
    int *l_1710 = &l_1688;
    int *l_1711 = (void*)0;
    int *l_1712 = &l_1693;
    int *l_1713 = (void*)0;
    int *l_1714 = &l_1659;
    int *l_1715 = &l_1693;
    int *l_1716 = (void*)0;
    int *l_1717 = &l_1693;
    int *l_1718 = &l_1690;
    int *l_1719 = &l_1690;
    unsigned *l_1725 = (void*)0;
    unsigned *l_1726 = &g_844;
    (*l_1627) = l_1625;
    (**l_1627) = ((safe_rshift_func_int8_t_s_s(p_3, 7)) < (**l_1627));
    --g_1720;
    (*l_1700) |= ((safe_add_func_uint32_t_u_u((0xC9L & p_5), 0UL)) >= (((*l_1726) = p_3) != p_5));
    return (*l_1695);
}







static unsigned short func_6(unsigned short p_7, unsigned p_8, char p_9, char p_10)
{
    int *l_1623 = (void*)0;
    int **l_1624 = &g_470;
    (*l_1624) = (l_1623 = l_1623);
    return (**g_1502);
}







static unsigned short func_11(unsigned p_12, char p_13, unsigned p_14, unsigned short p_15)
{
    int *l_18 = &g_19;
    int l_20 = 0x9D010789L;
    int *l_21 = &g_19;
    int *l_22 = &l_20;
    int *l_23 = &l_20;
    int *l_24 = (void*)0;
    int *l_25 = &l_20;
    int *l_26 = (void*)0;
    int l_27 = 2L;
    int *l_28 = &l_27;
    int *l_29 = &l_20;
    int *l_30 = &g_19;
    int *l_31 = &l_27;
    int *l_32 = &l_27;
    int *l_33 = &g_19;
    int l_34 = 0x8E55A441L;
    unsigned l_35 = 0xF8B4DFECL;
    ++l_35;
    return g_16;
}







static char func_38(char p_39, int * p_40)
{
    unsigned l_1472 = 8UL;
    short ****l_1479 = &g_939;
    unsigned char l_1480 = 0UL;
    int l_1489 = 9L;
    int l_1490 = 4L;
    unsigned *l_1491 = &g_844;
    unsigned char *l_1492 = &g_216;
    int *l_1493 = &g_79;
    int *****l_1503 = &g_593;
    int *****l_1504 = (void*)0;
    unsigned char ***l_1513 = &g_1086;
    unsigned l_1614 = 0x34F173CFL;
    short l_1622 = 1L;
    l_1472--;
    if (((*l_1493) = ((safe_mul_func_int16_t_s_s((0xFB13L >= (safe_sub_func_uint32_t_u_u((l_1479 != (void*)0), (l_1472 || l_1480)))), (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_39, 0)), ((*l_1492) = (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((l_1489 |= l_1472) || (0x3594L >= func_11(((*l_1491) |= (l_1490 != (*p_40))), l_1489, p_39, p_39))), p_39)), 0xDF21L))))))) & p_39)))
    {
        char l_1494 = 1L;
        int *l_1516 = &g_541;
        int **l_1515 = &l_1516;
        int ***l_1514 = &l_1515;
        int l_1528 = 1L;
        int *l_1617 = &g_19;
        int **l_1618 = (void*)0;
        int **l_1619 = &l_1493;
        int **l_1620 = (void*)0;
        int **l_1621 = &g_470;
        (*l_1493) = l_1494;
        for (g_1059 = (-21); (g_1059 >= 56); g_1059 = safe_add_func_int16_t_s_s(g_1059, 8))
        {
            int l_1509 = (-1L);
            int l_1549 = 7L;
            int l_1595 = 0x9475A3E0L;
            for (g_109 = 5; (g_109 <= 20); g_109 = safe_add_func_int16_t_s_s(g_109, 7))
            {
                unsigned char l_1510 = 255UL;
                int l_1522 = 0x83C1CCF0L;
                int l_1531 = 0x2F471514L;
                int *l_1603 = &l_1522;
                short *****l_1609 = (void*)0;
                (*g_1395) = ((((*p_40) < ((0xE5B2L && ((++(*l_1491)) || p_39)) == (p_39 & (g_1501 != (void*)0)))) != ((!(l_1503 == l_1504)) < g_50)) || 7L);
                if (((*l_1493) = (*g_470)))
                {
                    int ***l_1517 = &l_1515;
                    int l_1550 = 0x7F91D216L;
                    int l_1566 = 1L;
                    int l_1573 = 0L;
                    int l_1580 = 0xBBA53E8BL;
                    short l_1602 = 2L;
                    for (l_1480 = 0; (l_1480 != 57); l_1480 = safe_add_func_int8_t_s_s(l_1480, 2))
                    {
                        (*g_1395) = 1L;
                    }
                    if (func_11(((*l_1491) = (safe_mod_func_int32_t_s_s(func_11(l_1509, l_1494, l_1510, ((***g_1501)++)), (+((void*)0 != l_1513))))), l_1509, l_1510, func_11(p_39, p_39, l_1509, l_1509)))
                    {
                        int ****l_1518 = (void*)0;
                        int ****l_1519 = &l_1517;
                        int *l_1520 = (void*)0;
                        int *l_1521 = &l_1490;
                        int *l_1523 = &g_465;
                        int *l_1524 = &g_104;
                        int *l_1525 = &l_1490;
                        int *l_1526 = (void*)0;
                        int *l_1527 = (void*)0;
                        int *l_1529 = (void*)0;
                        int *l_1530 = &g_465;
                        int *l_1532 = &l_1528;
                        int *l_1533 = &l_1531;
                        int l_1534 = 0x17786690L;
                        int *l_1535 = (void*)0;
                        int *l_1536 = &g_104;
                        int *l_1537 = &l_1489;
                        int *l_1538 = &g_465;
                        int *l_1539 = &l_1522;
                        int *l_1540 = &g_465;
                        int *l_1541 = &g_465;
                        int *l_1542 = &l_1522;
                        int *l_1543 = &l_1528;
                        int *l_1544 = &g_465;
                        int *l_1545 = &l_1490;
                        int l_1546 = 1L;
                        int *l_1547 = &l_1528;
                        int *l_1548 = (void*)0;
                        int *l_1551 = &l_1549;
                        int *l_1552 = (void*)0;
                        int *l_1553 = &g_465;
                        int *l_1554 = (void*)0;
                        int *l_1555 = (void*)0;
                        int *l_1556 = &l_1528;
                        int *l_1557 = (void*)0;
                        int *l_1558 = &l_1522;
                        int *l_1559 = (void*)0;
                        int *l_1560 = &l_1522;
                        int *l_1561 = &l_1531;
                        int *l_1562 = &l_1489;
                        int l_1563 = 4L;
                        int *l_1564 = &g_465;
                        int *l_1565 = &g_79;
                        int *l_1567 = &l_1534;
                        int l_1568 = 3L;
                        int *l_1569 = &g_79;
                        int *l_1570 = &l_1490;
                        int *l_1572 = &l_1568;
                        int *l_1574 = (void*)0;
                        int *l_1575 = &g_465;
                        int *l_1576 = &l_1573;
                        int *l_1577 = &g_104;
                        int *l_1578 = &l_1550;
                        int *l_1579 = &l_1550;
                        int *l_1581 = (void*)0;
                        int *l_1582 = &l_1568;
                        int *l_1583 = &l_1489;
                        int *l_1584 = (void*)0;
                        int *l_1585 = &l_1531;
                        int *l_1586 = (void*)0;
                        int *l_1587 = &g_104;
                        int *l_1588 = (void*)0;
                        int *l_1589 = (void*)0;
                        int *l_1590 = &g_104;
                        int *l_1591 = (void*)0;
                        int *l_1592 = &g_465;
                        int *l_1594 = &l_1568;
                        int *l_1596 = &g_104;
                        int *l_1597 = &l_1566;
                        int *l_1598 = &l_1568;
                        (*g_1395) = (l_1514 == ((*l_1519) = l_1517));
                        ++g_1599;
                        if (l_1509)
                            break;
                        l_1603 = func_43(l_1602, &l_1595);
                    }
                    else
                    {
                        unsigned char l_1608 = 0x3BL;
                        short ******l_1612 = &g_1610;
                        (*l_1603) |= (safe_mod_func_uint8_t_u_u((!(safe_add_func_int8_t_s_s((-1L), (p_39 <= l_1608)))), (-1L)));
                        (*l_1603) &= ((*p_40) != (l_1609 != ((*l_1612) = g_1610)));
                        return l_1549;
                    }
                }
                else
                {
                    int l_1613 = 3L;
                    l_1603 = p_40;
                    (*g_1395) ^= l_1613;
                }
                if ((*g_470))
                    continue;
            }
            (*l_1493) = (*p_40);
            ++l_1614;
        }
        (*l_1493) ^= (*g_1395);
        (*l_1621) = ((*l_1619) = l_1617);
    }
    else
    {
        (*l_1493) |= (*g_1395);
    }
    p_40 = p_40;
    return l_1622;
}







static int * func_43(char p_44, int * p_45)
{
    int *l_1465 = &g_104;
    int l_1466 = (-1L);
    int *l_1467 = (void*)0;
    int l_1468 = 4L;
    unsigned short l_1469 = 65531UL;
    (*g_1395) |= (p_45 == (void*)0);
    l_1466 = ((*l_1465) = (*g_1395));
    l_1469++;
    return p_45;
}







static int * func_46(int p_47, int * p_48)
{
    unsigned short *l_49 = &g_50;
    unsigned short *l_56 = &g_57;
    unsigned l_73 = 4294967286UL;
    unsigned short **l_504 = &l_56;
    int l_507 = (-6L);
    unsigned char l_621 = 1UL;
    char l_625 = (-5L);
    int *l_626 = &g_104;
    int l_713 = 0xF7A9EA06L;
    char l_734 = 1L;
    short *l_765 = &g_161;
    short l_918 = (-4L);
    int l_921 = 0xD40EE0FAL;
    char l_929 = 3L;
    unsigned l_934 = 0x94EA87FBL;
    unsigned short l_986 = 65527UL;
    int *l_990 = &g_19;
    int *l_1063 = &g_104;
    int l_1073 = 0xE08B5997L;
    int *l_1100 = &l_713;
    unsigned char *l_1109 = (void*)0;
    char **l_1137 = (void*)0;
    short ***l_1178 = (void*)0;
    unsigned *l_1263 = &g_636;
    unsigned **l_1262 = &l_1263;
    unsigned char ***l_1274 = &g_1086;
    int l_1275 = 0x63D1DC20L;
    int *l_1402 = &g_465;
    int *l_1403 = (void*)0;
    int *l_1404 = (void*)0;
    int *l_1405 = &g_465;
    int *l_1406 = &l_713;
    int *l_1407 = &l_507;
    int *l_1408 = (void*)0;
    int *l_1409 = &l_713;
    int *l_1410 = &l_507;
    int *l_1411 = &g_79;
    int *l_1412 = &g_465;
    int *l_1413 = &g_104;
    int *l_1414 = &g_465;
    int *l_1415 = (void*)0;
    int *l_1416 = &l_713;
    int *l_1417 = &g_104;
    int *l_1418 = &g_79;
    int *l_1419 = (void*)0;
    int *l_1420 = &l_713;
    int *l_1421 = &l_1275;
    int *l_1422 = (void*)0;
    int *l_1423 = (void*)0;
    int *l_1424 = &g_79;
    int *l_1425 = (void*)0;
    int *l_1426 = (void*)0;
    int *l_1427 = (void*)0;
    int *l_1428 = &l_1275;
    int *l_1429 = (void*)0;
    int *l_1430 = &l_713;
    int *l_1431 = &l_1275;
    int *l_1432 = &l_1275;
    int *l_1433 = (void*)0;
    int *l_1434 = &g_104;
    int *l_1435 = (void*)0;
    int *l_1436 = &g_465;
    int *l_1437 = &l_1275;
    int *l_1438 = (void*)0;
    int *l_1439 = &l_507;
    int *l_1440 = &l_713;
    int *l_1441 = &g_104;
    int *l_1442 = &l_1275;
    int *l_1443 = (void*)0;
    int *l_1444 = &l_1275;
    int *l_1445 = &g_79;
    int *l_1446 = (void*)0;
    int *l_1447 = &g_79;
    int *l_1448 = &g_465;
    int *l_1449 = &l_1275;
    int *l_1450 = &l_713;
    int *l_1451 = (void*)0;
    int l_1452 = 0L;
    int *l_1453 = &l_1452;
    int *l_1454 = &g_104;
    int *l_1455 = &g_465;
    int *l_1456 = (void*)0;
    int *l_1458 = &g_104;
    if ((l_507 = ((!(!((*l_49) = 0x3818L))) | (((*l_504) = func_51(l_56, func_58(func_63(g_19, l_56, l_49, &g_19, (safe_sub_func_uint32_t_u_u((g_16 && ((safe_sub_func_int16_t_s_s(func_11(p_47, p_47, l_73, p_47), 1UL)) >= g_16)), g_57))), p_47, g_161, l_49), l_73, g_16)) != g_505))))
    {
        short l_530 = 1L;
        int l_554 = (-1L);
        int *l_609 = &l_554;
        unsigned *l_618 = (void*)0;
        unsigned *l_619 = (void*)0;
        unsigned *l_620 = &g_570;
        unsigned short *l_622 = &g_105;
        int l_694 = 4L;
        char l_710 = 0x8DL;
        unsigned l_770 = 0xF250989AL;
        char l_771 = 2L;
        unsigned short **l_780 = &l_56;
        short **l_856 = &g_581;
        int l_878 = 2L;
        unsigned char l_912 = 1UL;
        for (g_79 = 4; (g_79 < (-28)); g_79 = safe_sub_func_uint32_t_u_u(g_79, 9))
        {
            unsigned short l_518 = 65528UL;
            int l_523 = 0x2B217F77L;
            int l_553 = 0x5CDC29F4L;
            int ***l_604 = &g_90;
            for (l_73 = 0; (l_73 > 2); l_73 = safe_add_func_int16_t_s_s(l_73, 4))
            {
                int *l_512 = (void*)0;
                int *l_513 = &g_465;
                int *l_514 = &g_104;
                int *l_515 = &g_104;
                int *l_516 = &g_104;
                int *l_517 = &g_104;
                int l_556 = 0x7A0BE0ECL;
                int l_567 = (-10L);
                int ****l_597 = &g_594;
                ++l_518;
                for (g_107 = 0; (g_107 < 8); g_107 = safe_add_func_int8_t_s_s(g_107, 8))
                {
                    int *l_524 = &g_465;
                    int *l_525 = &g_465;
                    int *l_526 = (void*)0;
                    int *l_527 = &g_465;
                    int *l_528 = &l_507;
                    int *l_529 = (void*)0;
                    int *l_531 = &l_507;
                    int *l_532 = &g_104;
                    int *l_533 = &g_104;
                    int *l_534 = &g_465;
                    int *l_535 = &g_104;
                    int *l_536 = &g_104;
                    int *l_537 = &l_523;
                    int *l_538 = &g_104;
                    int *l_539 = &g_465;
                    int *l_540 = &g_465;
                    int *l_542 = &l_523;
                    int *l_543 = &g_104;
                    int *l_544 = &l_523;
                    int *l_545 = &g_465;
                    int *l_546 = (void*)0;
                    int *l_547 = &g_104;
                    int *l_548 = &l_507;
                    int *l_549 = &g_465;
                    int *l_550 = &l_507;
                    int *l_551 = &l_507;
                    int *l_552 = &l_507;
                    int *l_555 = &g_465;
                    int *l_557 = &l_523;
                    int *l_558 = &l_553;
                    int *l_559 = &g_104;
                    int *l_560 = (void*)0;
                    int *l_561 = (void*)0;
                    int *l_562 = (void*)0;
                    int *l_563 = &l_523;
                    int *l_564 = &g_104;
                    int *l_565 = &l_556;
                    int *l_566 = &l_523;
                    int *l_568 = &l_553;
                    int *l_569 = &g_104;
                    short *l_578 = &g_161;
                    short **l_577 = &l_578;
                    short ***l_579 = &l_577;
                    g_570++;
                    for (g_363 = (-19); (g_363 == (-13)); ++g_363)
                    {
                        int **l_575 = (void*)0;
                        int **l_576 = &l_558;
                        (*l_576) = (void*)0;
                    }
                    g_580 = ((*l_579) = l_577);
                }
                if (((*l_514) = 0xDC850656L))
                {
                    unsigned l_586 = 0x78C44A25L;
                    for (g_57 = 0; (g_57 >= 11); ++g_57)
                    {
                        int *****l_595 = &g_593;
                        int *****l_596 = (void*)0;
                        (*g_470) = (safe_mul_func_int16_t_s_s((p_47 != l_586), (~65531UL)));
                        (*g_470) = (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((-1L), (((*l_595) = g_593) != (l_597 = &g_594)))), 11)), 255UL));
                    }
                    (*g_470) = (safe_lshift_func_uint8_t_u_u(250UL, (safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(l_73, p_47)) | l_553), (((void*)0 != l_604) || (+p_47))))));
                }
                else
                {
                    for (g_109 = 0; (g_109 < (-29)); g_109 = safe_sub_func_uint32_t_u_u(g_109, 6))
                    {
                        unsigned short l_608 = 65527UL;
                        l_608 = ((*l_513) = ((*l_514) |= g_607));
                    }
                    if ((*l_517))
                        continue;
                }
            }
            return &g_19;
        }
        (*g_470) = ((safe_add_func_uint32_t_u_u(4294967293UL, func_11(p_47, func_11((safe_mul_func_uint16_t_u_u((*g_505), 65526UL)), p_47, ((*l_620) &= (safe_mul_func_int16_t_s_s(((l_507 <= (((safe_add_func_uint32_t_u_u((g_465 == p_47), (*l_609))) & l_507) | g_380)) ^ p_47), (-1L)))), p_47), (*l_609), p_47))) <= l_507);
        if ((!(((*l_609) = (*p_48)) && (*p_48))))
        {
            char l_624 = 0x86L;
            int l_671 = 0x3F4E828CL;
            int l_706 = 0L;
            l_626 = func_63(l_621, l_622, (*l_504), &l_507, (((func_11((g_623 && (func_11(g_79, l_624, l_625, (0xFDL <= l_624)) >= l_73)), g_193, p_47, (*g_505)) ^ 65535UL) || 0L) == g_465));
            for (g_107 = 0; (g_107 == 2); g_107 = safe_add_func_int32_t_s_s(g_107, 7))
            {
                unsigned short l_647 = 0x950EL;
                int l_680 = 0L;
                int l_683 = 0xF8E6AF74L;
                int l_725 = 0x598EB75EL;
                for (l_624 = 0; (l_624 >= (-14)); l_624 = safe_sub_func_uint8_t_u_u(l_624, 1))
                {
                    int l_633 = 0xD3679061L;
                    int *l_653 = &l_507;
                    int *l_654 = &g_104;
                    int *l_655 = &l_507;
                    int *l_656 = (void*)0;
                    int *l_657 = &g_104;
                    int *l_658 = (void*)0;
                    int *l_659 = &l_554;
                    int *l_660 = &g_104;
                    int *l_661 = &g_104;
                    int *l_662 = &l_507;
                    int *l_663 = (void*)0;
                    int *l_664 = &g_104;
                    int *l_665 = &g_465;
                    int *l_666 = &l_507;
                    int *l_667 = &l_554;
                    int *l_668 = &l_507;
                    int *l_669 = &g_465;
                    int *l_670 = &g_104;
                    int *l_672 = &g_104;
                    int *l_673 = &l_671;
                    int *l_674 = &g_465;
                    int *l_675 = &l_633;
                    int *l_676 = (void*)0;
                    int *l_677 = &l_507;
                    int *l_678 = &g_79;
                    int *l_679 = (void*)0;
                    int *l_681 = &l_680;
                    int *l_682 = &l_554;
                    int *l_684 = &l_683;
                    int *l_685 = &g_465;
                    int *l_686 = &l_683;
                    int *l_687 = &l_633;
                    int *l_688 = &l_680;
                    int *l_689 = &l_554;
                    int *l_690 = (void*)0;
                    int *l_691 = &l_554;
                    int *l_692 = &l_683;
                    int *l_693 = (void*)0;
                    int *l_695 = &g_465;
                    int *l_696 = (void*)0;
                    int *l_697 = &l_633;
                    int *l_698 = &l_683;
                    int *l_699 = &l_694;
                    int *l_700 = &l_554;
                    int *l_701 = &l_680;
                    int *l_702 = &g_465;
                    int *l_703 = &l_507;
                    int *l_704 = (void*)0;
                    int *l_705 = &l_680;
                    int *l_707 = &l_706;
                    int *l_708 = &g_79;
                    int *l_709 = &g_465;
                    int *l_711 = &l_507;
                    int *l_712 = &l_706;
                    int *l_714 = &l_507;
                    int *l_716 = &l_680;
                    int *l_717 = &l_706;
                    int *l_718 = &l_633;
                    int *l_719 = &l_683;
                    int l_721 = 0x0B0C2484L;
                    int *l_722 = (void*)0;
                    int *l_723 = &l_633;
                    int *l_724 = &g_465;
                    int *l_726 = &l_725;
                    int *l_727 = &l_680;
                    int *l_728 = &l_554;
                    for (g_79 = 0; (g_79 <= (-10)); g_79--)
                    {
                        int **l_640 = &l_626;
                        int ***l_639 = &l_640;
                        char *l_648 = &g_380;
                        char *l_649 = &g_109;
                        unsigned char *l_650 = (void*)0;
                        unsigned char *l_651 = &g_216;
                        (*l_626) |= l_633;
                        l_633 = (func_11(func_11(((*l_620) = ((*p_48) <= ((safe_sub_func_uint32_t_u_u(g_623, g_636)) && func_11((((*l_626) <= ((*g_505) & ((*g_594) != ((*l_639) = &p_48)))) <= ((*l_651) = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(l_647, ((*l_649) = ((*l_648) = (0xF2A9L < p_47))))), (*l_626))), 7)) > (*g_581)))), l_633, p_47, g_652)))), g_384, l_624, p_47), g_398, g_506, (*g_505)) != l_633);
                    }
                    g_729--;
                }
                for (g_506 = 0; (g_506 <= 45); g_506 = safe_add_func_uint16_t_u_u(g_506, 9))
                {
                    (*l_626) ^= 0xEF9FE435L;
                    if (l_734)
                        break;
                    if ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_u(p_47, 3)))))
                    {
                        short *l_746 = &l_530;
                        l_706 = (safe_add_func_int32_t_s_s((*l_626), ((*p_48) > ((*l_620) &= (safe_sub_func_int32_t_s_s((*l_609), (*g_470)))))));
                        (*l_626) = 0x712EF9B2L;
                        (*l_609) |= ((safe_mul_func_uint16_t_u_u((*g_505), (*g_505))) <= p_47);
                        (*l_626) = (safe_mul_func_int8_t_s_s((p_47 & ((*l_746) = ((*g_581) = (&g_109 == &g_607)))), (safe_sub_func_uint32_t_u_u(p_47, (*g_470)))));
                    }
                    else
                    {
                        (*g_470) = 7L;
                    }
                }
                for (l_647 = 0; (l_647 == 43); l_647 = safe_add_func_int16_t_s_s(l_647, 2))
                {
                    char *l_760 = (void*)0;
                    char **l_759 = &l_760;
                    short *l_764 = &g_161;
                    short **l_763 = &l_764;
                    unsigned char *l_766 = &g_216;
                    int *l_767 = (void*)0;
                    int l_768 = 0x1D6180A1L;
                    int **l_769 = &l_626;
                }
            }
            l_771 ^= (l_770 && (((*l_626) = ((*l_609) | (*l_626))) & (p_47 != (*l_609))));
            for (g_109 = 0; (g_109 != (-30)); g_109 = safe_sub_func_uint32_t_u_u(g_109, 9))
            {
                int **l_774 = &l_609;
                int **l_775 = (void*)0;
                int **l_776 = &l_626;
                (*l_776) = ((*l_774) = &p_47);
            }
        }
        else
        {
            unsigned char *l_783 = &l_621;
            unsigned char *l_784 = &g_216;
            int l_785 = (-8L);
            int *l_786 = (void*)0;
            int *l_787 = (void*)0;
            int *l_788 = &l_694;
            int *l_789 = &g_79;
            int *l_790 = &l_713;
            int *l_791 = &g_465;
            int *l_792 = (void*)0;
            int *l_793 = (void*)0;
            int *l_794 = (void*)0;
            int *l_795 = &l_785;
            int *l_796 = &g_79;
            int *l_797 = &l_713;
            int *l_798 = &g_104;
            int *l_799 = &l_507;
            int *l_800 = &g_104;
            int *l_801 = &l_507;
            int *l_802 = &l_507;
            int *l_803 = &g_79;
            int *l_804 = &g_104;
            int *l_805 = &l_554;
            int *l_806 = &l_785;
            int *l_807 = &g_79;
            int *l_808 = (void*)0;
            int *l_809 = &g_104;
            int *l_810 = &l_554;
            int *l_811 = (void*)0;
            int *l_812 = &g_465;
            int *l_813 = &l_713;
            int *l_814 = &g_465;
            int *l_815 = (void*)0;
            int *l_816 = &g_104;
            int *l_817 = &l_713;
            int *l_818 = (void*)0;
            int *l_819 = &l_694;
            int *l_820 = &l_554;
            int *l_821 = &l_554;
            int *l_822 = &l_507;
            int *l_823 = (void*)0;
            int *l_824 = &g_465;
            int *l_825 = (void*)0;
            int *l_826 = (void*)0;
            int *l_827 = &l_694;
            int *l_828 = &g_104;
            int *l_829 = &l_507;
            int *l_830 = &g_465;
            int *l_831 = &l_785;
            int *l_832 = &g_465;
            int *l_833 = &l_713;
            int *l_834 = &l_785;
            int *l_835 = &l_554;
            int *l_836 = &l_507;
            int *l_837 = &l_785;
            int *l_838 = (void*)0;
            int *l_839 = (void*)0;
            int *l_840 = &g_465;
            int *l_841 = &l_507;
            int *l_842 = &l_694;
            int *l_843 = &l_713;
            (*l_626) = (safe_unary_minus_func_uint32_t_u((func_11(((*g_581) && (safe_sub_func_int32_t_s_s((*g_470), (g_506 > 0x45L)))), (func_11(((&l_622 == l_780) ^ ((*l_609) = (*p_48))), (+(safe_rshift_func_uint8_t_u_u(1UL, ((*l_784) = ((*l_783) = (0x87C96607L & (*p_48))))))), g_16, p_47) & 1L), (*l_626), (*l_626)) | l_785)));
            g_844++;
            for (g_465 = 0; (g_465 >= (-30)); g_465--)
            {
                l_626 = &l_694;
            }
        }
        for (l_73 = 0; (l_73 >= 57); ++l_73)
        {
            char l_852 = 0x6CL;
            short ***l_857 = (void*)0;
            short ***l_858 = &g_580;
            int *l_859 = (void*)0;
            unsigned short **l_860 = (void*)0;
            unsigned short ***l_861 = &l_860;
            unsigned char *l_915 = (void*)0;
            int l_945 = 5L;
            int l_957 = 0x4D709A09L;
            char *l_995 = &g_109;
            char **l_994 = &l_995;
            int l_1038 = 1L;
            l_554 ^= (((safe_unary_minus_func_int16_t_s(l_852)) <= g_380) ^ (((*l_765) = ((safe_unary_minus_func_uint8_t_u(func_11(g_104, (((void*)0 == p_48) <= (*l_626)), ((*l_620) |= ((&l_713 != (void*)0) & (g_79 = (((safe_mod_func_uint16_t_u_u(((*g_505) ^= func_11(p_47, g_607, p_47, l_852)), l_852)) <= (-1L)) && 0x6980L)))), (*l_626)))) && p_47)) ^ 0xFF4EL));
            l_859 = (p_48 = &p_47);
            for (p_47 = 0; (p_47 < 11); p_47 = safe_add_func_int16_t_s_s(p_47, 4))
            {
                int *l_864 = &g_465;
                int *l_865 = &g_465;
                int *l_866 = (void*)0;
                int *l_867 = &l_713;
                int *l_868 = &l_694;
                int *l_869 = &l_507;
                int *l_870 = (void*)0;
                int *l_871 = (void*)0;
                int *l_872 = &l_554;
                int l_873 = 4L;
                int *l_874 = &g_465;
                int *l_875 = (void*)0;
                int *l_876 = &l_507;
                int *l_877 = &l_873;
                int *l_879 = &l_694;
                int *l_880 = &l_878;
                int *l_881 = (void*)0;
                g_882--;
            }
        }
    }
    else
    {
        unsigned *l_1064 = &g_570;
        unsigned char *l_1065 = (void*)0;
        unsigned char *l_1066 = &g_216;
        int l_1067 = (-1L);
        char *l_1068 = &g_720;
        short *l_1081 = &l_918;
        int l_1093 = 0xE43CD2D2L;
        int *****l_1106 = &g_593;
        short ***l_1112 = &g_580;
        unsigned short ***l_1149 = &l_504;
        short ***l_1179 = &g_580;
        int l_1226 = 1L;
        unsigned short l_1360 = 0x90A9L;
        if (((((p_47 ^ func_11(((*l_1064) = ((*l_1063) >= (*l_990))), (((*l_1066) = p_47) | (l_1067 > ((l_1067 & p_47) ^ ((*l_1068) = p_47)))), l_1067, (*l_626))) || l_1067) & p_47) > p_47))
        {
            unsigned char l_1090 = 3UL;
            int l_1092 = 0x8D94FDDDL;
            unsigned short *l_1094 = &g_1059;
            if (((*l_626) <= (safe_rshift_func_int8_t_s_u(l_1067, (p_47 >= ((*l_49) |= (safe_sub_func_int8_t_s_s((l_1073 | (0UL == p_47)), (!((*l_1066) |= (((*l_1064) ^= (p_47 && ((*l_626) == p_47))) | g_623)))))))))))
            {
                int *l_1076 = &g_79;
                unsigned char **l_1089 = &g_1087;
                short l_1091 = (-2L);
                for (g_216 = (-5); (g_216 > 54); g_216++)
                {
                    int **l_1077 = (void*)0;
                    int **l_1078 = &g_470;
                    unsigned char ***l_1088 = (void*)0;
                    l_1076 = &p_47;
                    (*l_1078) = (p_48 = (void*)0);
                    l_1093 ^= (((*l_1076) && ((void*)0 != l_1081)) && ((safe_sub_func_uint16_t_u_u((+func_11((l_1092 |= ((((safe_lshift_func_uint8_t_u_u(0UL, 2)) | p_47) ^ 0xEEC1B9CDL) ^ (~((((l_1089 = g_1086) != (void*)0) != ((**g_580) = ((func_11((func_11(((*l_1064) = l_1090), l_1091, p_47, (*g_505)) < 0xFE7DL), p_47, g_1059, l_1067) != (*l_1076)) && (*l_1076)))) & l_1067)))), p_47, p_47, (*g_505))), 65528UL)) <= (*l_1076)));
                }
            }
            else
            {
                char *l_1095 = &g_607;
                int **l_1096 = (void*)0;
                int **l_1097 = &l_626;
                (*l_1097) = &p_47;
                for (g_623 = 10; (g_623 >= (-14)); g_623 = safe_sub_func_uint32_t_u_u(g_623, 3))
                {
                    int *l_1101 = &l_713;
                    return &g_465;
                }
            }
            (*l_1100) &= func_11(g_363, (g_169 | (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((void*)0 == l_1106), (0x4F95L != (((*l_1094) = (*g_505)) < (*g_505))))) == (*l_626)), (safe_mul_func_uint16_t_u_u((l_1109 == (void*)0), l_1092))))), g_636, (*l_990));
        }
        else
        {
            short l_1117 = 0xB634L;
            int **l_1128 = &l_626;
            unsigned short *l_1132 = (void*)0;
            int l_1158 = (-7L);
            int *l_1168 = &l_1158;
            for (l_918 = (-19); (l_918 > 11); l_918 = safe_add_func_int8_t_s_s(l_918, 3))
            {
                int **l_1127 = &l_1063;
                unsigned short *l_1129 = (void*)0;
                int l_1135 = 0xC30B2CFCL;
                unsigned l_1144 = 4294967286UL;
                unsigned short ***l_1151 = &l_504;
                if ((&g_505 != &g_505))
                {
                    int l_1130 = 9L;
                    int l_1155 = 3L;
                    if ((((void*)0 == l_1112) | 5L))
                    {
                        char l_1118 = (-4L);
                        unsigned l_1131 = 0xC2BE25CDL;
                        int *l_1133 = &g_104;
                        unsigned short *l_1134 = &g_105;
                        (*l_1100) |= (((safe_mul_func_uint8_t_u_u(func_11(g_623, p_47, g_541, ((safe_mod_func_int8_t_s_s((l_1117 || func_11(l_1117, (+(p_47 || ((*l_990) || l_1118))), (0x2E92513AL && p_47), (*g_505))), l_1117)) > p_47)), p_47)) != 1L) || 255UL);
                        l_1135 |= ((*l_1133) = (safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_u((+(safe_mul_func_int8_t_s_s(p_47, ((**g_593) != (l_1128 = l_1127))))), 7)) == (((*l_504) = func_58(((*l_1127) = &p_47), l_1130, l_1130, l_1134)) != l_1134)) > 249UL) & l_1117) != p_47), (-5L))), p_47)));
                    }
                    else
                    {
                        short l_1136 = 0x332BL;
                        (*l_1128) = (p_48 = (void*)0);
                        (*l_1100) ^= l_1136;
                        (*l_1100) ^= (g_384 > (*g_470));
                    }
                    g_1138 = l_1137;
                    (*l_1128) = (*l_1127);
                    for (g_79 = 0; (g_79 >= (-22)); --g_79)
                    {
                        unsigned short ***l_1148 = &l_504;
                        unsigned short ****l_1147 = &l_1148;
                        unsigned short ****l_1150 = (void*)0;
                        int l_1154 = 0x2490B274L;
                        p_47 &= (*g_470);
                        if (p_47)
                            break;
                        (*l_1100) |= ((((*l_1068) = (l_1155 = ((safe_add_func_uint8_t_u_u(((((((*l_49) &= (((*l_56) ^= (func_11(p_47, l_1144, func_11(func_11((safe_add_func_uint32_t_u_u(g_465, ((((*l_1147) = (void*)0) == (l_1151 = l_1149)) < ((**g_580) || (safe_mul_func_int16_t_s_s(0x5B6CL, (*g_505))))))), ((*g_1139) = (*g_1139)), l_1154, (*l_990)), p_47, p_47, (*g_505)), p_47) <= p_47)) | p_47)) >= 0x5AA7L) < l_1130) < 1L) == (*g_581)), p_47)) || p_47))) | 0x8AL) | l_1154);
                    }
                }
                else
                {
                    unsigned l_1159 = 1UL;
                    for (g_1059 = 0; (g_1059 >= 21); g_1059++)
                    {
                        (**l_1128) = (*p_48);
                        l_1158 = ((**l_1127) = (*l_626));
                        l_1159++;
                        (*l_1128) = (*l_1128);
                    }
                    for (l_1144 = 0; (l_1144 >= 13); l_1144++)
                    {
                        volatile int ***l_1167 = &g_1164;
                        (*l_1167) = g_1164;
                    }
                    return &g_104;
                }
                return &g_104;
            }
        }
        for (l_713 = 3; (l_713 > 14); l_713 = safe_add_func_uint16_t_u_u(l_713, 5))
        {
            unsigned short l_1171 = 0xD52BL;
            short ****l_1176 = &l_1112;
            short ****l_1177 = &g_939;
            int l_1182 = 0x591D86EBL;
            int l_1183 = 0xA307D0ADL;
            unsigned short l_1238 = 1UL;
            unsigned *l_1267 = &g_570;
            int *l_1367 = (void*)0;
            unsigned l_1382 = 0x53FE9D1AL;
            l_1171++;
            (*l_626) = l_1171;
        }
        for (g_107 = 12; (g_107 != 19); ++g_107)
        {
            int *l_1400 = &l_1067;
            int **l_1401 = &l_626;
            (*l_1401) = l_1400;
        }
    }
    --g_1459;
    return &g_79;
}







static unsigned short * func_51(unsigned short * p_52, unsigned short * p_53, int p_54, char p_55)
{
    unsigned *l_459 = &g_107;
    int l_464 = (-1L);
    int l_469 = 1L;
    int *l_471 = (void*)0;
    int *l_472 = &l_464;
    int *l_473 = &g_104;
    int *l_474 = &l_469;
    int *l_475 = &g_465;
    int *l_476 = &l_469;
    int *l_477 = &g_465;
    int *l_478 = (void*)0;
    int *l_479 = (void*)0;
    int *l_480 = &g_465;
    int *l_481 = &g_79;
    int *l_482 = (void*)0;
    int *l_483 = &l_469;
    int *l_484 = (void*)0;
    int *l_485 = (void*)0;
    int *l_486 = &l_464;
    int *l_487 = &l_464;
    int *l_488 = &l_464;
    int *l_489 = &l_469;
    int *l_490 = &l_464;
    int *l_491 = &l_464;
    int l_492 = 0L;
    int *l_493 = &l_492;
    int *l_494 = &l_469;
    int *l_495 = &g_104;
    int l_496 = (-1L);
    int *l_497 = &g_79;
    int l_498 = (-4L);
    int *l_499 = &l_469;
    int *l_500 = &g_104;
    unsigned short l_501 = 0UL;
    g_470 = func_63((safe_mod_func_uint16_t_u_u(((*p_52) = (safe_add_func_int16_t_s_s((func_11(func_11((--(*l_459)), g_363, (safe_mul_func_int8_t_s_s(g_333, l_464)), g_465), p_54, l_464, ((safe_mul_func_int8_t_s_s((l_464 <= (safe_unary_minus_func_uint16_t_u((*p_52)))), g_380)) ^ 1L)) <= 1UL), g_19))), g_363)), p_53, p_52, &l_464, l_469);
    l_501++;
    return &g_57;
}







static unsigned short * func_58(int * p_59, unsigned short p_60, int p_61, unsigned short * p_62)
{
    int *l_253 = &g_79;
    int *l_254 = &g_104;
    int *l_255 = &g_104;
    int *l_256 = &g_79;
    int *l_257 = (void*)0;
    int l_258 = 1L;
    int *l_259 = &g_104;
    int *l_260 = &g_79;
    int *l_261 = &g_104;
    int *l_262 = (void*)0;
    int *l_263 = &l_258;
    int *l_264 = &g_104;
    int *l_265 = (void*)0;
    int *l_266 = &g_79;
    int *l_267 = &g_79;
    int *l_268 = &l_258;
    int *l_269 = &g_79;
    int *l_270 = &g_104;
    int *l_271 = &l_258;
    int *l_272 = &g_104;
    int *l_273 = &g_79;
    int *l_274 = &g_79;
    int *l_275 = &g_79;
    int *l_276 = &g_79;
    int *l_277 = &g_104;
    int *l_278 = &g_79;
    int *l_279 = &l_258;
    int l_280 = 0xE1858157L;
    int *l_281 = &l_280;
    int *l_282 = &g_79;
    int *l_283 = (void*)0;
    int *l_284 = &g_104;
    short l_285 = 0xD9FAL;
    int *l_286 = &g_104;
    int *l_287 = (void*)0;
    int *l_288 = &l_258;
    int *l_289 = &l_258;
    int l_290 = (-9L);
    int *l_291 = &l_280;
    int *l_292 = (void*)0;
    int *l_293 = &l_280;
    int l_294 = 0xFAC0F5FCL;
    int *l_295 = &l_290;
    int *l_296 = &g_79;
    int *l_297 = &l_258;
    int *l_298 = (void*)0;
    int *l_299 = &l_294;
    int *l_300 = &g_104;
    int *l_301 = &l_280;
    int *l_302 = &l_280;
    int *l_303 = &g_104;
    int *l_304 = &g_104;
    int *l_305 = &l_294;
    int l_306 = 0x106D9094L;
    int *l_307 = &l_280;
    int *l_308 = &l_290;
    int *l_309 = (void*)0;
    int *l_310 = &g_104;
    int *l_311 = &l_294;
    int *l_312 = (void*)0;
    int *l_313 = &g_79;
    int *l_314 = &l_280;
    int *l_316 = (void*)0;
    int *l_317 = (void*)0;
    int *l_318 = &l_258;
    int *l_319 = &g_79;
    int l_320 = 0x5187FA84L;
    int *l_321 = (void*)0;
    int *l_322 = &g_104;
    int *l_323 = &l_290;
    int l_324 = 1L;
    int *l_326 = &l_290;
    int *l_327 = &g_79;
    int *l_328 = (void*)0;
    int *l_329 = &l_324;
    int *l_330 = (void*)0;
    int l_331 = (-10L);
    int l_332 = 3L;
    int *l_334 = (void*)0;
    int *l_335 = (void*)0;
    int *l_336 = &l_258;
    int *l_337 = &l_290;
    int *l_338 = &l_306;
    int *l_339 = &l_331;
    int *l_340 = &g_79;
    int *l_341 = &l_331;
    int *l_342 = &l_290;
    int *l_343 = &l_280;
    int l_344 = 1L;
    int *l_345 = &l_332;
    int l_346 = 5L;
    int l_347 = 0xF308F853L;
    int *l_348 = (void*)0;
    int *l_349 = &l_280;
    int *l_350 = &l_306;
    int *l_351 = &l_294;
    int l_352 = 0L;
    int *l_353 = &l_347;
    int *l_354 = (void*)0;
    int *l_355 = &l_346;
    int *l_356 = &l_332;
    int *l_357 = &l_346;
    int *l_358 = &l_258;
    int *l_359 = (void*)0;
    int *l_360 = &g_104;
    int *l_361 = (void*)0;
    int *l_362 = &l_306;
    int *l_364 = (void*)0;
    int *l_365 = &l_344;
    int *l_366 = &l_346;
    int *l_367 = &l_352;
    int l_368 = 0x3E921443L;
    int *l_369 = &l_346;
    int l_370 = (-10L);
    int *l_371 = (void*)0;
    int *l_372 = &l_290;
    int *l_373 = &l_347;
    int *l_374 = &l_344;
    int *l_375 = &l_352;
    int *l_376 = (void*)0;
    int *l_377 = (void*)0;
    int *l_378 = &l_352;
    int l_379 = 0L;
    int *l_381 = &l_347;
    int *l_382 = &g_104;
    int *l_383 = &l_344;
    int *l_385 = &l_346;
    int *l_386 = &g_79;
    int *l_387 = &l_344;
    int *l_388 = &l_320;
    int *l_389 = &l_379;
    int *l_390 = &g_79;
    int l_391 = 0x65DDC268L;
    int *l_392 = &g_104;
    int *l_393 = &l_352;
    int *l_394 = &l_324;
    int *l_395 = &l_306;
    int l_396 = 0x32EEC2D1L;
    int *l_397 = &l_379;
    unsigned short l_405 = 0UL;
    int ***l_413 = &g_90;
    int ***l_418 = &g_90;
    char *l_426 = &g_109;
    char *l_428 = (void*)0;
    unsigned short *l_431 = &g_57;
    unsigned short *l_437 = &g_105;
    unsigned short *l_438 = (void*)0;
    unsigned short *l_439 = &l_405;
    unsigned *l_440 = &g_107;
    short *l_445 = &g_161;
    short *l_446 = &l_285;
    char *l_451 = &g_109;
    g_398++;
    if (((safe_lshift_func_int16_t_s_s(0xB4A3L, 12)) | (((func_11(p_61, ((g_384 <= g_19) >= (!4UL)), (l_277 != (void*)0), (g_193 & (safe_mul_func_int16_t_s_s((func_11((g_57 ^ p_61), p_60, p_61, p_60) != p_60), g_16)))) > l_405) > g_109) | 0x96L)))
    {
        unsigned *l_406 = &g_107;
        int ****l_414 = (void*)0;
        int ****l_415 = (void*)0;
        int ****l_416 = &l_413;
        int ***l_417 = &g_90;
        int ****l_419 = &l_418;
        char **l_427 = &l_426;
        (*l_256) = (func_11((++(*l_406)), (~(safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(((void*)0 != l_406), ((g_79 & (((l_417 = ((*l_416) = l_413)) != ((*l_419) = l_418)) | (safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((g_315 != (safe_rshift_func_uint8_t_u_s(p_61, (*l_269)))) <= (((*l_427) = l_426) == l_428)), (*l_304))), g_363)))) | 1UL))) != (*l_276)), (*l_267)))), g_16, g_384) != 0xF78AL);
    }
    else
    {
        for (l_370 = 0; (l_370 > 29); l_370++)
        {
            return &g_105;
        }
    }
    (*l_263) &= ((((0L || ((*l_431) = 65535UL)) & ((*l_446) = (p_61 || (safe_mul_func_int8_t_s_s((((void*)0 == l_413) == (safe_mod_func_uint32_t_u_u((*l_356), ((safe_unary_minus_func_int32_t_s(((*l_338) = (((*l_439) = ((*l_437) = 0UL)) ^ ((*l_445) = func_11(((*l_440) = (func_11(((*l_440)++), p_61, (safe_add_func_uint8_t_u_u(252UL, g_384)), g_193) >= (*p_59))), g_216, p_61, g_16)))))) || (*l_270))))), (*l_276)))))) & (-2L)) == 0UL);
    for (l_344 = 0; (l_344 == (-27)); l_344--)
    {
        char **l_452 = (void*)0;
        char **l_453 = &l_428;
        int l_454 = (-7L);
        (*l_357) &= (safe_mod_func_int8_t_s_s(1L, func_11((((p_61 < (g_193 || 0xCB5EL)) <= g_216) >= (((*l_453) = l_451) == (void*)0)), l_454, (*l_275), p_60)));
    }
    return &g_105;
}







static int * func_63(int p_64, unsigned short * p_65, unsigned short * p_66, int * p_67, int p_68)
{
    int *l_86 = &g_79;
    int **l_85 = &l_86;
    int l_141 = (-1L);
    int l_150 = 0x2BB1B770L;
    int l_166 = 0x4380E064L;
    for (p_68 = 1; (p_68 == 26); p_68 = safe_add_func_uint32_t_u_u(p_68, 7))
    {
        int *l_77 = &g_19;
        int **l_76 = &l_77;
        int *l_78 = &g_79;
        int **l_80 = (void*)0;
        int **l_81 = &l_78;
        (*l_76) = &g_19;
        (*l_78) |= 0L;
        (*l_81) = ((*l_76) = (void*)0);
    }
    if ((g_19 != (safe_unary_minus_func_int32_t_s((0xDF493AB7L > ((safe_mul_func_int8_t_s_s(9L, p_64)) && (((*l_85) = &g_19) != &p_68)))))))
    {
        short l_87 = 0x4F09L;
        int l_110 = 0xFE160045L;
        int *l_113 = &g_79;
        int l_212 = 0xC0845370L;
        int l_214 = 0x58EF410DL;
        int ***l_248 = (void*)0;
        int ***l_249 = &l_85;
        int **l_251 = &l_113;
        int ***l_250 = &l_251;
        short l_252 = 0xB22EL;
        if (((0x5DL > (((!g_57) > (l_87 > g_79)) && p_64)) >= (safe_sub_func_uint8_t_u_u(((void*)0 != g_90), g_16))))
        {
            int *l_103 = &g_104;
            int l_106 = 0xEA102A83L;
            char *l_108 = &g_109;
            int *l_116 = &l_110;
            int *l_117 = &l_106;
            int *l_118 = &l_110;
            int *l_119 = &g_104;
            int *l_120 = &l_110;
            int *l_121 = &g_79;
            int *l_122 = &l_110;
            int *l_123 = &g_79;
            int *l_124 = &g_104;
            int *l_125 = &l_110;
            int *l_126 = &g_79;
            int *l_127 = &l_110;
            int *l_128 = &g_79;
            int *l_129 = &g_79;
            int *l_130 = &l_106;
            int *l_131 = &l_106;
            int *l_132 = &l_110;
            int *l_133 = &l_110;
            int *l_134 = &g_104;
            int *l_135 = &l_110;
            int *l_136 = &l_110;
            int *l_137 = &l_110;
            int *l_138 = &g_79;
            int *l_139 = &g_104;
            int *l_140 = (void*)0;
            int *l_142 = &l_106;
            int *l_143 = &g_79;
            int *l_144 = &l_141;
            int *l_145 = &g_79;
            int *l_146 = &g_104;
            int *l_147 = (void*)0;
            int *l_148 = &g_79;
            int *l_149 = &g_104;
            int *l_151 = (void*)0;
            int *l_152 = &g_79;
            int *l_153 = &l_141;
            int *l_154 = (void*)0;
            int *l_155 = &l_150;
            int l_156 = 0x4356B17FL;
            int *l_157 = &l_150;
            int *l_158 = &g_79;
            int *l_159 = &l_141;
            int *l_160 = &g_104;
            int *l_162 = &g_104;
            int *l_163 = &l_110;
            int *l_164 = &g_79;
            int l_165 = 0x488F66F9L;
            int *l_167 = &l_110;
            int *l_168 = &l_110;
            l_110 = (((*p_65) = ((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((*l_108) = (g_107 = func_11(((safe_add_func_int32_t_s_s(func_11(g_19, (func_11((*l_86), (p_66 == (void*)0), (safe_add_func_int32_t_s_s(((*l_103) ^= (0xA337L && ((safe_sub_func_int16_t_s_s(p_68, g_57)) > ((void*)0 != &p_68)))), (*p_67))), l_87) > l_87), g_79, g_105), 0UL)) && (*l_103)), g_105, l_106, (*p_65)))), p_68)), (*p_65))), 0UL)) && (*l_103))) < l_87);
            (*l_103) = ((g_16 >= (p_68 & (p_64 > g_16))) == ((safe_mul_func_uint8_t_u_u(255UL, (((*l_85) == (p_67 = l_113)) || 0x8D8AE6FBL))) >= (safe_add_func_uint8_t_u_u((g_90 != &l_113), (*l_113)))));
            ++g_169;
            (*l_155) &= (*p_67);
        }
        else
        {
            int *l_196 = &g_104;
            int *l_197 = &l_110;
            int *l_198 = &l_141;
            int *l_199 = &l_141;
            int *l_200 = &g_79;
            int *l_201 = &l_110;
            int *l_202 = &l_166;
            int *l_203 = (void*)0;
            int *l_204 = &g_79;
            int *l_205 = &g_79;
            int *l_206 = (void*)0;
            int *l_207 = &l_141;
            int *l_208 = (void*)0;
            int *l_209 = (void*)0;
            int *l_210 = &g_79;
            int *l_211 = &l_141;
            int l_213 = 0xE053DA94L;
            int *l_215 = &l_166;
            int *l_219 = &l_166;
            int *l_220 = &l_110;
            int *l_221 = (void*)0;
            int *l_222 = &l_110;
            int *l_223 = &l_110;
            int *l_224 = &l_213;
            int *l_225 = &l_214;
            int *l_226 = &l_213;
            int *l_227 = &l_213;
            int *l_228 = (void*)0;
            int *l_229 = (void*)0;
            int *l_230 = (void*)0;
            int *l_231 = (void*)0;
            int *l_232 = (void*)0;
            int *l_233 = &l_110;
            int *l_234 = (void*)0;
            int *l_235 = &l_141;
            int *l_236 = &l_214;
            int *l_237 = &l_110;
            int *l_238 = &l_110;
            int *l_239 = (void*)0;
            unsigned l_240 = 4294967295UL;
            unsigned *l_247 = &g_107;
            for (p_64 = 0; (p_64 > 7); p_64++)
            {
                int *l_174 = &l_110;
                int *l_175 = &g_104;
                int *l_176 = (void*)0;
                int *l_177 = &g_104;
                int *l_178 = &l_110;
                int *l_179 = (void*)0;
                int *l_180 = &l_110;
                int *l_181 = &l_166;
                int *l_182 = &l_166;
                int *l_183 = &g_79;
                int *l_184 = &g_79;
                int *l_185 = (void*)0;
                int *l_186 = &l_110;
                int *l_187 = &l_166;
                int *l_188 = &l_110;
                int *l_189 = (void*)0;
                int *l_190 = &g_104;
                int *l_191 = (void*)0;
                int *l_192 = &g_104;
                --g_193;
                return l_196;
            }
            ++g_216;
            ++l_240;
            (*l_215) |= (((safe_rshift_func_int8_t_s_s((((void*)0 != &l_212) > (0x84C6L < (&p_68 != (void*)0))), (safe_mod_func_int16_t_s_s(g_216, (*l_113))))) && p_68) > func_11(((*l_247) = ((**l_85) | g_105)), p_68, p_64, g_19));
        }
        (*l_85) = &p_68;
        (*l_113) = (((g_169 >= (((*l_249) = g_90) == ((*l_250) = &p_67))) == (p_64 || ((-1L) == (*p_65)))) & l_252);
    }
    else
    {
        (*l_85) = (void*)0;
    }
    return &g_104;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_652, "g_652", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_844, "g_844", print_hash_value);
    transparent_crc(g_882, "g_882", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_1034, "g_1034", print_hash_value);
    transparent_crc(g_1057, "g_1057", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1166, "g_1166", print_hash_value);
    transparent_crc(g_1214, "g_1214", print_hash_value);
    transparent_crc(g_1342, "g_1342", print_hash_value);
    transparent_crc(g_1374, "g_1374", print_hash_value);
    transparent_crc(g_1396, "g_1396", print_hash_value);
    transparent_crc(g_1457, "g_1457", print_hash_value);
    transparent_crc(g_1459, "g_1459", print_hash_value);
    transparent_crc(g_1571, "g_1571", print_hash_value);
    transparent_crc(g_1593, "g_1593", print_hash_value);
    transparent_crc(g_1599, "g_1599", print_hash_value);
    transparent_crc(g_1720, "g_1720", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
