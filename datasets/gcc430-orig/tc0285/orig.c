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


union U0 {
   unsigned f0;
   int f1;
   int f2;
   short f3;
   short f4;
};


static char g_8 = 4L;
static char g_21 = 4L;
static int g_35 = 1L;
static int g_38 = 0xD7BA9668L;
static short g_41 = 0xE19FL;
static unsigned short g_89 = 0x5DA4L;
static int g_96 = 0L;
static union U0 g_97 = {4294967294UL};
static short g_111 = (-1L);
static unsigned short g_114 = 0x17A6L;
static int g_115 = 0xB26C3A74L;
static unsigned char g_142 = 255UL;
static unsigned char *g_152 = &g_142;
static unsigned char **g_151 = &g_152;
static unsigned g_237 = 4294967288UL;
static unsigned short *g_250 = &g_89;
static short g_310 = (-1L);
static short g_319 = (-8L);
static unsigned g_327 = 4294967292UL;
static short *g_443 = (void*)0;
static short **g_442 = &g_443;
static short ***g_441 = &g_442;
static char g_449 = 0x90L;
static char g_451 = 0x8DL;
static unsigned char g_528 = 0x62L;
static unsigned short g_649 = 65530UL;
static char g_741 = 5L;
static short g_763 = 1L;
static unsigned g_792 = 4294967295UL;
static int g_813 = 0x441DBD2FL;
static int g_814 = 0xD1FA6C8DL;
static unsigned char g_815 = 0x37L;
static int g_822 = 0x3AF68633L;
static unsigned g_823 = 1UL;
static short g_891 = 1L;
static unsigned g_896 = 0x581F8AE6L;
static char g_1040 = 0x17L;
static unsigned char g_1054 = 0x7FL;
static int *g_1092 = (void*)0;
static int **g_1091 = &g_1092;
static char g_1208 = 0xD7L;
static unsigned g_1221 = 4294967295UL;
static short g_1306 = (-1L);
static unsigned g_1313 = 5UL;
static int g_1318 = 0x3F9D9CB6L;
static char g_1368 = 0L;
static unsigned g_1369 = 1UL;
static unsigned g_1452 = 1UL;
static int g_1540 = 0x9AE47CD1L;
static unsigned short g_1542 = 0x5247L;
static char **g_1548 = (void*)0;
static unsigned char g_1551 = 0xBEL;
static unsigned char g_1715 = 0x21L;



static unsigned char func_1(void);
static unsigned func_22(char * p_23, unsigned short p_24, short p_25, unsigned char p_26);
static char * func_27(char * p_28, char * p_29, unsigned p_30);
static char * func_31(unsigned short p_32);
static unsigned func_42(char * p_43, char p_44, char * p_45);
static char func_46(char * p_47, unsigned char p_48, char * p_49, unsigned char p_50, char * p_51);
static short func_57(char * p_58, char * p_59, char p_60);
static char * func_61(union U0 p_62);
static union U0 func_63(char * p_64, char * p_65);
static char * func_66(unsigned short p_67, unsigned short p_68);
static unsigned char func_1(void)
{
    char l_11 = 0xBCL;
    char *l_20 = &g_21;
    int l_1502 = (-2L);
    unsigned char l_1599 = 0x97L;
    unsigned l_1621 = 0x1A792E92L;
    int l_1669 = 0x1FBD90A1L;
    int l_1673 = 1L;
    int l_1698 = 0xFF9812D9L;
    int l_1706 = 1L;
    if ((((safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_8, ((safe_mul_func_int16_t_s_s(l_11, ((((safe_lshift_func_uint8_t_u_s((((safe_unary_minus_func_uint8_t_u((((safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((!(((((g_8 > l_11) && ((*l_20) = (safe_unary_minus_func_int32_t_s(l_11)))) == ((func_22(func_27(func_31(g_8), &l_11, g_8), l_11, g_89, g_319) >= l_11) > l_11)) & 0x8F3DL) || (*g_250))), (-10L))), 2)) >= 0xBC878C7DL) > g_1318))) == g_310) | g_813), g_1306)) < l_11) == 0x9BL) || l_11))) != 0L))), 0x4A50L)), 0UL)) < g_822) || (*g_250)))
    {
        unsigned short l_1498 = 5UL;
        int *l_1499 = (void*)0;
        int *l_1500 = &g_35;
        int **l_1501 = &l_1500;
        int l_1586 = 0xC2B1F291L;
        (*l_1500) = l_1498;
        (*l_1501) = l_1500;
        l_1502 |= (*l_1500);
        if ((*l_1500))
        {
            return (*g_152);
        }
        else
        {
            unsigned l_1516 = 0x6229F5C1L;
            int l_1532 = 0x52CCF4A3L;
            int l_1545 = (-3L);
            int l_1552 = 0x6D6B3E64L;
            int *l_1553 = &g_1540;
            int *l_1554 = &g_115;
            int *l_1555 = &g_1540;
            int *l_1556 = &l_1502;
            int *l_1557 = &g_96;
            int *l_1558 = (void*)0;
            int *l_1559 = &g_814;
            int *l_1560 = &g_96;
            int *l_1561 = &g_814;
            int *l_1562 = (void*)0;
            int *l_1563 = &g_1540;
            int *l_1564 = &g_1540;
            int *l_1565 = &g_814;
            int *l_1566 = (void*)0;
            int *l_1567 = &g_814;
            int *l_1568 = &l_1532;
            int *l_1569 = (void*)0;
            int *l_1570 = (void*)0;
            int *l_1571 = &g_38;
            int *l_1572 = &g_38;
            int *l_1573 = &l_1532;
            int *l_1574 = (void*)0;
            int *l_1575 = &g_1540;
            int *l_1576 = &g_35;
            int *l_1577 = &g_115;
            int *l_1578 = &l_1532;
            short l_1579 = 0xA87EL;
            int *l_1580 = &g_35;
            int *l_1581 = (void*)0;
            int *l_1582 = &g_35;
            int *l_1583 = &l_1502;
            int *l_1584 = &l_1502;
            int *l_1585 = &g_38;
            int *l_1587 = &g_814;
            int *l_1588 = &l_1502;
            int *l_1589 = &l_1502;
            int *l_1590 = &g_38;
            int *l_1591 = &l_1502;
            int *l_1592 = &g_1540;
            int *l_1593 = &g_35;
            int *l_1594 = &l_1502;
            int *l_1595 = &g_814;
            int *l_1596 = &g_115;
            int *l_1597 = &g_814;
            int *l_1598 = &l_1532;
            int *l_1602 = &g_35;
            int *l_1603 = &g_38;
            int *l_1604 = &l_1532;
            int *l_1605 = (void*)0;
            int *l_1606 = &g_814;
            int *l_1607 = (void*)0;
            int *l_1608 = (void*)0;
            int *l_1609 = (void*)0;
            int *l_1610 = (void*)0;
            int *l_1611 = &g_38;
            int *l_1612 = &l_1532;
            int *l_1613 = (void*)0;
            int *l_1614 = (void*)0;
            int *l_1615 = (void*)0;
            int *l_1616 = &l_1502;
            int *l_1617 = &g_814;
            int *l_1618 = (void*)0;
            int *l_1619 = &g_35;
            int *l_1620 = (void*)0;
            if ((*l_1500))
            {
                unsigned short l_1505 = 1UL;
                (*l_1501) = &g_96;
                for (g_814 = 0; (g_814 > 13); g_814 = safe_add_func_uint16_t_u_u(g_814, 1))
                {
                    int *l_1506 = (void*)0;
                    int *l_1507 = (void*)0;
                    int *l_1508 = &l_1502;
                    int *l_1509 = (void*)0;
                    int *l_1510 = &g_35;
                    int *l_1511 = &g_35;
                    int *l_1512 = (void*)0;
                    int *l_1513 = &g_115;
                    int *l_1514 = (void*)0;
                    int *l_1515 = (void*)0;
                    int *l_1519 = &l_1502;
                    int *l_1520 = &g_96;
                    int *l_1521 = (void*)0;
                    int *l_1522 = &g_38;
                    int *l_1523 = &g_96;
                    int *l_1524 = &l_1502;
                    int *l_1525 = &g_115;
                    int *l_1526 = &g_96;
                    int *l_1527 = &g_115;
                    int *l_1528 = &g_38;
                    int *l_1529 = &g_115;
                    int *l_1530 = &g_35;
                    int *l_1531 = &g_115;
                    int *l_1533 = &l_1502;
                    int *l_1534 = &g_38;
                    int *l_1535 = &g_35;
                    int *l_1536 = &g_38;
                    int *l_1537 = &g_38;
                    int *l_1538 = &g_38;
                    int *l_1539 = (void*)0;
                    int *l_1541 = &l_1502;
                    (*l_1508) = ((*l_1500) = func_42(func_31(l_11), (g_1368 | l_1505), &g_451));
                    l_1516++;
                    g_1542--;
                    l_1545 = l_1516;
                }
            }
            else
            {
                char **l_1550 = (void*)0;
                char ***l_1549 = &l_1550;
                (*l_1500) = (safe_rshift_func_uint16_t_u_s((~(l_11 > (g_1548 != ((*l_1549) = &l_20)))), g_1551));
                l_1502 |= (l_1516 | l_1552);
            }
            ++l_1599;
            ++l_1621;
        }
    }
    else
    {
        int *l_1624 = (void*)0;
        int *l_1625 = (void*)0;
        int *l_1626 = &g_814;
        int *l_1627 = &g_1540;
        int *l_1628 = &g_96;
        int *l_1629 = &g_814;
        int *l_1630 = &l_1502;
        int *l_1631 = &g_115;
        int *l_1632 = &g_35;
        int *l_1633 = &g_35;
        int *l_1634 = &l_1502;
        int *l_1635 = (void*)0;
        int *l_1636 = &l_1502;
        int *l_1637 = &g_96;
        int *l_1638 = (void*)0;
        int *l_1639 = &g_96;
        int *l_1640 = &l_1502;
        int *l_1641 = &g_1540;
        int *l_1642 = &g_115;
        int *l_1643 = &g_96;
        int *l_1644 = (void*)0;
        int *l_1645 = &g_814;
        int *l_1646 = &l_1502;
        int *l_1647 = &g_38;
        int *l_1648 = &g_38;
        int *l_1649 = &g_1540;
        int *l_1650 = &l_1502;
        int *l_1651 = &g_38;
        int *l_1652 = &g_1540;
        int *l_1653 = (void*)0;
        int *l_1654 = (void*)0;
        int *l_1655 = &l_1502;
        int *l_1656 = &g_96;
        int *l_1657 = &g_96;
        int *l_1658 = (void*)0;
        int *l_1659 = &g_38;
        int l_1660 = 0x539BA59BL;
        int *l_1661 = &g_814;
        int *l_1662 = &g_814;
        int *l_1663 = &l_1502;
        int l_1664 = 1L;
        int *l_1665 = &g_115;
        int *l_1666 = (void*)0;
        int *l_1667 = &g_814;
        int *l_1668 = &g_1540;
        int *l_1670 = &l_1502;
        int *l_1671 = &l_1502;
        int *l_1672 = &g_115;
        int *l_1674 = &g_96;
        int *l_1675 = &g_115;
        int *l_1676 = &g_38;
        int *l_1677 = &g_115;
        int *l_1678 = (void*)0;
        int *l_1679 = &g_115;
        int *l_1680 = &g_38;
        int *l_1681 = (void*)0;
        int *l_1682 = (void*)0;
        int *l_1683 = &g_115;
        int *l_1684 = &l_1673;
        int *l_1685 = &g_38;
        int *l_1686 = &l_1669;
        int *l_1687 = &l_1660;
        int *l_1688 = &g_1540;
        int *l_1689 = (void*)0;
        int *l_1690 = &l_1673;
        int *l_1691 = &l_1502;
        int *l_1692 = (void*)0;
        int *l_1693 = &l_1660;
        int *l_1694 = &g_814;
        int *l_1695 = &g_814;
        int *l_1696 = &l_1669;
        int *l_1697 = &l_1664;
        int *l_1699 = &l_1669;
        int *l_1700 = &g_115;
        int *l_1701 = &l_1669;
        int *l_1702 = &g_1540;
        int *l_1703 = &g_1540;
        int *l_1704 = &g_814;
        int *l_1705 = &l_1664;
        int *l_1707 = (void*)0;
        int *l_1708 = &g_115;
        int *l_1709 = &g_1540;
        int *l_1710 = (void*)0;
        int *l_1711 = &l_1706;
        int *l_1712 = &l_1669;
        int *l_1713 = &l_1706;
        int *l_1714 = &g_96;
        char *l_1718 = &g_8;
        g_1715--;
lbl_1719:
        (*l_1688) |= (*l_1667);
        (*l_1630) ^= (0x17C7L <= (func_42(l_1718, ((func_42(&l_11, (0x6F728AD4L && (((*g_152) ^ (-7L)) <= (*l_1657))), &l_11) | g_1318) ^ (*l_1713)), l_1718) || (*l_1683)));
        if (g_1318)
            goto lbl_1719;
    }
    return (*g_152);
}







static unsigned func_22(char * p_23, unsigned short p_24, short p_25, unsigned char p_26)
{
    unsigned char l_434 = 255UL;
    union U0 l_435 = {4294967293UL};
    union U0 *l_436 = &l_435;
    short ***l_444 = &g_442;
    unsigned short l_447 = 65531UL;
    char *l_448 = &g_449;
    char *l_450 = &g_451;
    int l_472 = 0x2E4D6ACBL;
    int l_487 = 1L;
    int l_734 = 0x825F2834L;
    int l_772 = 6L;
    char **l_899 = &l_450;
    short l_930 = (-1L);
    int l_1012 = 7L;
    int l_1022 = 0x895B4131L;
    int l_1045 = (-1L);
    int **l_1093 = &g_1092;
    int *l_1226 = (void*)0;
    unsigned char l_1336 = 253UL;
    unsigned char **l_1455 = &g_152;
    int l_1497 = (-9L);
    if (((safe_mul_func_uint16_t_u_u((l_434 | (-2L)), (func_42(func_61(((*l_436) = l_435)), ((*l_450) ^= ((*l_448) = (safe_div_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((g_441 != l_444), 3)) == (**g_151)), (safe_add_func_int16_t_s_s(0xEC71L, (p_25 = l_447))))))), l_450) >= (*p_23)))) || l_435.f0))
    {
        int l_460 = 1L;
        int l_520 = (-1L);
        char *l_535 = &g_8;
        char l_551 = 0xD7L;
        short **l_640 = &g_443;
        int l_760 = 0x16BA2059L;
        int l_764 = 0x1875BBB6L;
        int l_780 = (-5L);
        int l_789 = 0L;
        unsigned short l_819 = 65535UL;
        for (l_435.f2 = 0; (l_435.f2 > (-11)); l_435.f2--)
        {
            unsigned short l_463 = 65535UL;
            int l_493 = 0xD9914FC0L;
            int l_501 = 0xBF83E070L;
            int *l_555 = &l_493;
            int l_636 = 0x280A0174L;
            int l_729 = 0x69B365FFL;
            char l_745 = 0x61L;
            short l_773 = (-1L);
            int l_784 = (-3L);
            char *l_809 = &l_745;
            for (g_449 = (-19); (g_449 == 0); g_449++)
            {
                char l_469 = 0xDDL;
                int *l_531 = &g_115;
                for (p_25 = 0; (p_25 != (-2)); p_25 = safe_sub_func_uint16_t_u_u(p_25, 5))
                {
                    unsigned short *l_462 = (void*)0;
                    int l_476 = 0x184226F6L;
                    int l_485 = 0xD8DE423DL;
                    int l_510 = 0L;
                    int l_526 = 0x14E06629L;
                    int **l_532 = &l_531;
                    if ((0L ^ (0x2D2D8D6AL > (safe_lshift_func_uint16_t_u_s(func_42(func_31((*g_250)), ((*l_450) = l_460), &g_449), 12)))))
                    {
                        int *l_461 = &g_115;
                        (*l_461) ^= g_327;
                    }
                    else
                    {
                        int *l_464 = &g_96;
                        int *l_465 = &l_460;
                        int *l_466 = &l_460;
                        int *l_467 = &g_115;
                        int *l_468 = &l_460;
                        int *l_470 = &g_38;
                        int l_471 = 0x36E89E0BL;
                        int *l_473 = &g_96;
                        int *l_474 = &g_96;
                        int *l_475 = &g_96;
                        int *l_477 = &g_115;
                        int *l_478 = &l_460;
                        int *l_479 = &l_471;
                        int *l_480 = &l_460;
                        int *l_481 = (void*)0;
                        int *l_482 = &l_460;
                        int *l_483 = &l_472;
                        int *l_484 = &g_38;
                        int *l_486 = &g_115;
                        int *l_488 = &l_485;
                        int *l_489 = &l_487;
                        int *l_490 = &g_38;
                        int *l_491 = (void*)0;
                        int *l_492 = (void*)0;
                        int *l_494 = (void*)0;
                        int *l_495 = &g_96;
                        int *l_496 = &g_35;
                        int *l_497 = &l_471;
                        int *l_498 = &l_472;
                        int *l_499 = &l_472;
                        int *l_500 = (void*)0;
                        int *l_502 = &l_501;
                        int *l_503 = &l_493;
                        int *l_504 = (void*)0;
                        int *l_505 = (void*)0;
                        int *l_506 = &l_472;
                        int *l_507 = &g_38;
                        int *l_508 = &l_476;
                        int *l_509 = &l_501;
                        int *l_511 = &g_96;
                        int *l_512 = &l_501;
                        int *l_513 = &g_35;
                        int *l_514 = &g_115;
                        int *l_515 = &l_460;
                        int *l_516 = (void*)0;
                        int *l_517 = (void*)0;
                        int *l_518 = &l_485;
                        int *l_519 = &g_38;
                        int *l_521 = &l_460;
                        int *l_522 = &l_487;
                        int *l_523 = (void*)0;
                        int *l_524 = &l_476;
                        int l_525 = (-5L);
                        int *l_527 = &l_460;
                        g_96 = (((*g_250) = (&g_114 != l_462)) <= (l_463 &= (!(g_111 > p_24))));
                        g_528--;
                        (*l_467) = (-7L);
                        if (p_24)
                            continue;
                    }
                    (*l_532) = l_531;
                    if (p_26)
                        break;
                    (*l_532) = &l_501;
                }
            }
            if ((safe_lshift_func_int16_t_s_s(func_57(l_535, l_535, l_493), l_493)))
            {
                char *l_539 = (void*)0;
                int l_602 = 0x309F253FL;
                unsigned l_637 = 4294967295UL;
                if (p_26)
                {
                    int **l_536 = (void*)0;
                    int *l_538 = &l_460;
                    int **l_537 = &l_538;
                    (*l_537) = &g_38;
                    if (func_57(l_539, l_535, g_97.f3))
                    {
                        if (p_25)
                            break;
                        (*l_538) ^= g_96;
                        (*l_538) = p_25;
                    }
                    else
                    {
                        char *l_548 = (void*)0;
                        unsigned short *l_552 = (void*)0;
                        unsigned short *l_553 = &g_114;
                        short *l_554 = &g_97.f3;
                        g_115 ^= (safe_sub_func_int16_t_s_s(((*l_554) |= (safe_lshift_func_uint8_t_u_s(248UL, (safe_mod_func_uint16_t_u_u(((*l_553) = ((*g_250) = (((safe_add_func_uint32_t_u_u(g_38, (((g_310 | func_42(l_548, g_237, &g_449)) != p_26) != ((g_111 = ((safe_div_func_uint16_t_u_u(0xC520L, 0xF5A8L)) < l_435.f4)) & 0L)))) == l_551) <= 253UL))), l_520))))), 65532UL));
                        l_555 = &l_487;
                    }
                }
                else
                {
                    int *l_556 = &g_38;
                    int *l_557 = &g_35;
                    int *l_558 = &g_38;
                    int *l_559 = &g_96;
                    int *l_560 = &g_38;
                    int *l_561 = &l_501;
                    int *l_562 = &l_487;
                    int *l_563 = &g_38;
                    int *l_564 = (void*)0;
                    int *l_565 = (void*)0;
                    int l_566 = (-1L);
                    int *l_567 = &l_501;
                    int *l_568 = &l_460;
                    int *l_569 = &g_115;
                    int *l_570 = &l_493;
                    int *l_571 = (void*)0;
                    int *l_572 = &l_566;
                    int *l_573 = &l_520;
                    int *l_574 = &l_460;
                    int *l_575 = &l_520;
                    int *l_576 = &g_115;
                    int *l_577 = &g_35;
                    int *l_578 = &l_493;
                    int *l_579 = &l_487;
                    int *l_580 = (void*)0;
                    int *l_581 = &g_96;
                    int *l_582 = &l_566;
                    int *l_583 = &g_115;
                    int *l_584 = &g_35;
                    int *l_585 = &l_520;
                    int *l_586 = &l_520;
                    int *l_587 = &l_501;
                    int *l_588 = (void*)0;
                    int *l_589 = &g_96;
                    int *l_590 = &l_487;
                    int *l_591 = &l_520;
                    int *l_592 = &l_460;
                    int l_593 = 0xE3DCF11FL;
                    int *l_594 = &l_520;
                    int *l_595 = &l_593;
                    int *l_596 = &l_593;
                    int l_597 = 0L;
                    int *l_598 = &l_593;
                    int *l_599 = &l_501;
                    int *l_600 = (void*)0;
                    int *l_601 = &l_460;
                    int *l_603 = &l_520;
                    int *l_604 = &l_593;
                    int *l_605 = &g_38;
                    int *l_606 = &l_597;
                    int *l_607 = &g_35;
                    int *l_608 = &g_115;
                    int *l_609 = &g_35;
                    int *l_610 = (void*)0;
                    int *l_611 = &l_487;
                    int *l_612 = &l_487;
                    int *l_613 = &g_96;
                    int l_614 = 2L;
                    int *l_615 = &g_35;
                    int *l_616 = &g_96;
                    int *l_617 = &l_472;
                    int *l_618 = &g_115;
                    int *l_619 = &l_493;
                    int *l_620 = &l_472;
                    int *l_621 = &l_501;
                    int *l_622 = &l_520;
                    int *l_623 = &l_472;
                    int *l_624 = (void*)0;
                    int *l_625 = &l_520;
                    int *l_626 = &l_472;
                    int *l_627 = (void*)0;
                    int *l_628 = &g_38;
                    int *l_629 = &l_602;
                    int *l_630 = &l_593;
                    int *l_631 = &l_487;
                    int *l_632 = &l_602;
                    int *l_633 = &l_520;
                    int *l_634 = &g_96;
                    int *l_635 = &l_566;
                    unsigned char l_642 = 0xFCL;
                    union U0 *l_654 = (void*)0;
                    l_637--;
                    if (((*l_612) = (l_640 != (void*)0)))
                    {
                        int **l_641 = &l_613;
                        (*l_641) = &g_38;
                        ++l_642;
                        if ((*l_555))
                            break;
                        if (l_460)
                            continue;
                    }
                    else
                    {
                        char l_647 = 0x14L;
                        int l_648 = 0x6F257D21L;
                        (*l_574) = (g_327 < (--(**g_151)));
                        g_649++;
                        if (g_449)
                            break;
                    }
                    for (l_487 = 0; (l_487 != 22); l_487++)
                    {
                        l_654 = &g_97;
                        if (g_649)
                            continue;
                    }
                }
                if (g_96)
                    break;
            }
            else
            {
                char *l_657 = &g_8;
                union U0 *l_660 = &g_97;
                union U0 **l_661 = &l_436;
                int *l_662 = &g_115;
                int *l_663 = (void*)0;
                int *l_664 = (void*)0;
                int *l_665 = (void*)0;
                int *l_666 = (void*)0;
                unsigned char **l_669 = &g_152;
                unsigned *l_672 = &g_237;
                g_35 = ((*l_662) = (safe_sub_func_int16_t_s_s((p_26 ^ p_25), (func_57(l_448, l_657, (*p_23)) > ((*l_555) = (safe_sub_func_int16_t_s_s((((*l_661) = l_660) != &g_97), (!func_42(&g_451, g_327, l_657)))))))));
                (*l_555) = ((*l_662) = (g_96 |= (safe_add_func_uint16_t_u_u(l_435.f4, (l_435.f2 ^ ((((*l_672) = (((((void*)0 == l_669) < (-3L)) && (p_25 = (safe_mul_func_uint8_t_u_u(func_42(l_657, (*p_23), &g_451), (*g_152))))) | p_24)) & 0xF3749C9AL) <= p_26))))));
                if (p_26)
                    continue;
            }
            for (g_97.f4 = 0; (g_97.f4 >= 25); ++g_97.f4)
            {
                int *l_675 = &g_115;
                int *l_676 = &l_487;
                int *l_677 = &g_96;
                int *l_678 = &g_115;
                int *l_679 = &g_35;
                int *l_680 = &l_493;
                int *l_681 = (void*)0;
                int *l_682 = &g_35;
                int *l_683 = &l_501;
                int *l_684 = &g_115;
                int *l_685 = &l_472;
                int *l_686 = &l_501;
                int *l_687 = (void*)0;
                int *l_688 = &l_520;
                int *l_689 = &g_96;
                int *l_690 = &l_636;
                int *l_691 = (void*)0;
                int *l_692 = &l_460;
                int *l_693 = &l_520;
                int *l_694 = &l_501;
                int *l_695 = (void*)0;
                int *l_696 = &l_487;
                int *l_697 = &g_115;
                int *l_698 = (void*)0;
                int *l_699 = (void*)0;
                int *l_700 = &l_472;
                int *l_701 = &l_520;
                int *l_702 = &l_487;
                int *l_703 = &l_493;
                int *l_704 = (void*)0;
                int *l_705 = &l_493;
                int *l_706 = (void*)0;
                int *l_707 = &l_472;
                int *l_708 = &l_487;
                int *l_709 = &l_460;
                int *l_710 = &g_115;
                int *l_711 = &g_38;
                int *l_712 = &l_487;
                int *l_713 = &l_472;
                int *l_714 = &l_636;
                int *l_715 = &g_35;
                int *l_716 = &l_472;
                int *l_717 = &l_636;
                int *l_718 = &g_96;
                int *l_719 = &l_501;
                int l_720 = 0x5B24819AL;
                int *l_721 = &l_493;
                int *l_722 = &l_636;
                int *l_723 = &l_487;
                int *l_724 = &g_96;
                int *l_725 = &l_520;
                int *l_726 = &l_493;
                int *l_727 = &g_38;
                int *l_728 = &l_472;
                int *l_730 = &g_96;
                int *l_731 = &l_493;
                int *l_732 = (void*)0;
                int *l_733 = (void*)0;
                int *l_735 = &l_472;
                int *l_736 = &l_520;
                int *l_737 = &l_472;
                int *l_738 = &l_520;
                int *l_739 = &g_96;
                int *l_740 = &g_35;
                int *l_742 = &l_636;
                int *l_743 = (void*)0;
                int *l_744 = &g_35;
                int *l_746 = &l_636;
                int *l_747 = (void*)0;
                int *l_748 = (void*)0;
                int *l_749 = &l_460;
                int *l_750 = &l_487;
                int *l_751 = &l_460;
                int *l_752 = &l_472;
                int *l_753 = &g_96;
                int *l_754 = &l_734;
                int *l_755 = &g_38;
                int *l_756 = &l_493;
                int *l_757 = &l_487;
                int *l_758 = &l_720;
                int *l_759 = &l_729;
                int *l_761 = &l_520;
                int *l_762 = (void*)0;
                int *l_765 = &g_38;
                int l_766 = 0x83E6B98AL;
                int *l_767 = &l_760;
                int *l_768 = (void*)0;
                int *l_769 = &l_520;
                int *l_770 = &g_38;
                int *l_771 = &l_636;
                int *l_774 = &g_38;
                int *l_775 = (void*)0;
                int *l_776 = &g_38;
                int *l_777 = &l_460;
                int *l_778 = (void*)0;
                int *l_779 = &l_501;
                int *l_781 = (void*)0;
                int *l_782 = (void*)0;
                int *l_783 = &g_35;
                int *l_785 = &l_636;
                int *l_786 = &g_115;
                int *l_787 = (void*)0;
                int *l_788 = &l_472;
                int *l_790 = (void*)0;
                int *l_791 = &l_784;
                short *l_808 = &g_310;
                g_792--;
                (*l_788) |= ((*l_753) = l_780);
                if (g_792)
                {
                    int l_795 = 0x656A41E0L;
                    int **l_801 = &l_712;
                    if (((l_795 > (*g_250)) >= (*l_682)))
                    {
                        int **l_796 = &l_759;
                        (*l_796) = &l_772;
                        (*l_796) = (void*)0;
                        if (l_795)
                            break;
                    }
                    else
                    {
                        char *l_799 = &g_451;
                        char **l_800 = &l_535;
                        (*l_717) = ((l_734 <= p_25) != (g_111 >= (safe_mul_func_int16_t_s_s(0x39C3L, func_57(((*l_800) = l_799), p_23, g_142)))));
                    }
                    l_520 = p_26;
                    (*l_801) = &l_729;
                }
                else
                {
                    short l_810 = 0x30E9L;
                    int l_811 = 0L;
                    int l_812 = 6L;
                    if ((l_472 |= ((safe_mul_func_uint16_t_u_u(((*g_250) = (safe_sub_func_int16_t_s_s(func_42(&l_551, ((*l_448) &= (safe_mul_func_int16_t_s_s((((*l_640) = (*g_442)) != (l_808 = &p_25)), (*g_250)))), l_809), ((p_26 || p_24) && (*g_152))))), p_26)) || (**g_151))))
                    {
                        int **l_818 = &l_717;
                        ++g_815;
                        (*l_818) = &l_811;
                        (*l_758) = (-4L);
                        return l_819;
                    }
                    else
                    {
                        (*l_677) = func_57(func_66(func_42(func_66(p_26, (*g_250)), (*p_23), p_23), (*g_250)), p_23, (*p_23));
                    }
                    for (g_96 = (-16); (g_96 == 25); g_96 = safe_add_func_uint16_t_u_u(g_96, 2))
                    {
                        ++g_823;
                    }
                    for (g_792 = 7; (g_792 == 60); g_792 = safe_add_func_int16_t_s_s(g_792, 1))
                    {
                        return g_97.f4;
                    }
                    g_38 = g_97.f3;
                }
            }
        }
        return l_434;
    }
    else
    {
        unsigned short l_828 = 0x7091L;
        int *l_829 = &l_734;
        int *l_830 = &l_487;
        int *l_831 = &l_734;
        int *l_832 = &l_487;
        int *l_833 = &l_487;
        int *l_834 = &g_35;
        int *l_835 = (void*)0;
        int *l_836 = &l_772;
        int *l_837 = &g_115;
        int *l_838 = &l_472;
        int *l_839 = &l_772;
        int *l_840 = &g_96;
        int *l_841 = &l_772;
        int *l_842 = &l_772;
        int *l_843 = &l_734;
        int *l_844 = &l_472;
        int *l_845 = &l_472;
        int *l_846 = &g_814;
        int *l_847 = (void*)0;
        int *l_848 = &g_96;
        int *l_849 = (void*)0;
        int *l_850 = &g_115;
        int *l_851 = &g_115;
        int *l_852 = &g_814;
        int *l_853 = &l_734;
        int *l_854 = (void*)0;
        int l_855 = 9L;
        int l_856 = 1L;
        int *l_857 = &g_115;
        int *l_858 = &g_115;
        int *l_859 = &g_38;
        int *l_860 = &l_772;
        int *l_861 = (void*)0;
        int *l_862 = &l_772;
        int *l_863 = &l_855;
        int *l_864 = &l_487;
        int l_865 = 0x5873B9A3L;
        int l_866 = 0x7B36C433L;
        int *l_867 = &l_472;
        int *l_868 = &l_772;
        int *l_869 = &l_472;
        int *l_870 = &g_814;
        int *l_871 = &l_772;
        int *l_872 = &l_772;
        int *l_873 = &l_472;
        int *l_874 = &g_814;
        int *l_875 = &g_38;
        int *l_876 = &l_487;
        int *l_877 = (void*)0;
        int l_878 = 0x9DDDB834L;
        int *l_879 = &l_772;
        int *l_880 = (void*)0;
        int *l_881 = &l_772;
        int *l_882 = &l_734;
        int *l_883 = &l_878;
        int *l_884 = (void*)0;
        int *l_885 = (void*)0;
        int *l_886 = &l_487;
        int *l_887 = &l_865;
        int *l_888 = &l_865;
        int *l_889 = &g_38;
        int *l_890 = &l_856;
        int *l_892 = &l_878;
        int *l_893 = &g_96;
        int l_894 = 0x790BB88BL;
        int *l_895 = &l_855;
        l_734 = (l_828 == l_435.f2);
        (*l_829) = (&g_114 == (void*)0);
        (*l_829) = (g_115 ^= p_25);
        ++g_896;
    }
    if (((l_472 = l_435.f3) ^ func_46(((*l_899) = p_23), l_447, l_448, (**g_151), &g_741)))
    {
        int *l_900 = &l_487;
        short **l_913 = &g_443;
        char *l_914 = &g_451;
        int l_934 = 0x32C85529L;
        int l_1013 = (-9L);
        int l_1020 = 0x164675EDL;
        int l_1029 = (-1L);
        int l_1030 = 0x5BDBCF2AL;
        int l_1049 = 2L;
        unsigned short **l_1340 = &g_250;
        int l_1430 = (-5L);
        unsigned l_1490 = 1UL;
        if (((*l_900) ^= g_35))
        {
            int *l_903 = &g_115;
            int **l_904 = (void*)0;
            int **l_905 = &l_900;
            char *l_910 = &g_449;
            int l_917 = 0L;
            int l_1036 = (-1L);
            unsigned char l_1072 = 0UL;
            int l_1124 = (-8L);
            short **l_1225 = &g_443;
            (*l_903) &= (safe_div_func_int16_t_s_s((*l_900), (*g_250)));
            (*l_905) = l_903;
            if (((((safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(func_42(l_910, (**l_905), &g_451), ((0xC453166EL == (safe_div_func_int8_t_s_s((0xDFL | (((void*)0 == l_913) <= func_46(p_23, (*l_900), l_914, p_26, p_23))), g_319))) <= 2UL))) & (**g_151)), p_24)) != (-1L)) <= (*l_900)) ^ p_24))
            {
                int *l_915 = &g_115;
                int *l_916 = &l_734;
                int *l_918 = (void*)0;
                int *l_919 = &g_38;
                int *l_920 = &l_917;
                int *l_921 = (void*)0;
                int *l_922 = (void*)0;
                int *l_923 = &g_115;
                int *l_924 = &g_38;
                int *l_925 = &l_487;
                int *l_926 = &l_472;
                int *l_927 = &l_472;
                int *l_928 = &l_772;
                int *l_929 = (void*)0;
                int *l_931 = &g_115;
                int *l_932 = &g_35;
                int *l_933 = &l_734;
                int *l_935 = &g_38;
                int *l_936 = &l_772;
                int *l_937 = (void*)0;
                int *l_938 = &g_35;
                int *l_939 = &g_96;
                int *l_940 = &l_487;
                int *l_941 = &l_734;
                int *l_942 = &l_934;
                int *l_943 = &l_472;
                int *l_944 = &l_917;
                int *l_945 = &l_472;
                int *l_946 = (void*)0;
                int *l_947 = &l_734;
                int l_948 = 0xF6600F9EL;
                int *l_949 = (void*)0;
                int *l_950 = &l_734;
                int *l_951 = &l_934;
                int *l_952 = &l_772;
                int *l_953 = &l_948;
                int *l_954 = &l_734;
                int *l_955 = &g_35;
                int *l_956 = &g_115;
                int *l_957 = &g_38;
                int *l_958 = (void*)0;
                int *l_959 = (void*)0;
                int l_960 = 0L;
                int *l_961 = (void*)0;
                int *l_962 = &g_115;
                int *l_963 = &l_960;
                int *l_964 = (void*)0;
                int *l_965 = (void*)0;
                int *l_966 = &l_960;
                int *l_967 = &g_115;
                int *l_968 = &g_96;
                int *l_969 = &l_917;
                int *l_970 = &l_772;
                int *l_971 = &l_917;
                int *l_972 = (void*)0;
                int *l_973 = &l_917;
                int *l_974 = (void*)0;
                int *l_975 = (void*)0;
                int *l_976 = &g_38;
                int *l_977 = &l_960;
                int *l_978 = &g_814;
                int *l_979 = (void*)0;
                int *l_980 = &l_772;
                int *l_981 = &l_960;
                int *l_982 = &l_487;
                int *l_983 = &g_814;
                int *l_984 = &g_96;
                int *l_985 = &g_35;
                int *l_986 = &g_96;
                int *l_987 = &g_96;
                int *l_988 = (void*)0;
                int *l_989 = &l_472;
                int *l_990 = &l_960;
                int *l_991 = &l_472;
                int *l_992 = (void*)0;
                int *l_993 = &g_96;
                int *l_994 = &l_734;
                int *l_995 = &l_734;
                int *l_996 = &l_948;
                int *l_997 = &g_35;
                int *l_998 = &l_734;
                int *l_999 = &g_38;
                int *l_1000 = &g_96;
                int *l_1001 = &l_734;
                int *l_1002 = (void*)0;
                int *l_1003 = &g_814;
                int *l_1004 = &l_772;
                int *l_1005 = &g_115;
                int *l_1006 = &g_38;
                int *l_1007 = (void*)0;
                int *l_1008 = &g_96;
                int *l_1009 = (void*)0;
                int *l_1010 = (void*)0;
                int *l_1011 = &g_38;
                int *l_1014 = &l_472;
                int *l_1015 = &l_948;
                int *l_1016 = &l_1013;
                int *l_1017 = (void*)0;
                int *l_1018 = &l_960;
                int *l_1019 = &l_948;
                int *l_1021 = &l_917;
                int *l_1023 = &l_1012;
                int *l_1024 = &l_1020;
                int *l_1025 = &l_948;
                int *l_1026 = &g_814;
                int *l_1027 = &l_1013;
                int *l_1028 = &l_472;
                int *l_1031 = &l_734;
                int *l_1032 = &l_960;
                int *l_1033 = &l_1030;
                int *l_1034 = (void*)0;
                int *l_1035 = (void*)0;
                int *l_1037 = &l_934;
                int *l_1038 = &l_1022;
                int *l_1039 = &l_487;
                int *l_1041 = &g_115;
                int *l_1042 = &l_487;
                int *l_1043 = (void*)0;
                int *l_1044 = &l_1036;
                int l_1046 = 0x54F513D5L;
                int *l_1047 = &l_734;
                int *l_1048 = &l_487;
                int *l_1050 = &g_115;
                int *l_1051 = (void*)0;
                int *l_1052 = &l_472;
                int *l_1053 = &l_1036;
                (*l_905) = &g_35;
                g_1054--;
                if ((safe_rshift_func_uint16_t_u_s((*g_250), 14)))
                {
                    for (g_763 = (-17); (g_763 >= (-11)); g_763 = safe_add_func_int32_t_s_s(g_763, 4))
                    {
                        int l_1061 = (-7L);
                        return l_1061;
                    }
                    (*l_905) = &g_115;
                    if (g_823)
                    {
                        unsigned short *l_1064 = &g_649;
                        char *l_1065 = &g_449;
                        int *l_1068 = &l_1049;
                        (*l_1008) = (((*l_1015) = ((func_42(l_1065, (safe_mod_func_int32_t_s_s((+0x8C12E898L), g_741)), p_23) & g_96) && p_25)) >= g_891);
                        g_115 = ((*l_933) = ((*l_968) = g_814));
                        (*l_905) = l_1068;
                    }
                    else
                    {
                        (*l_905) = &l_1046;
                        (*l_905) = &l_960;
                    }
                    for (g_114 = 0; (g_114 >= 7); g_114++)
                    {
                        if (l_1012)
                            break;
                    }
                }
                else
                {
                    short l_1071 = 0x30D7L;
                    unsigned char l_1075 = 0x97L;
                    int l_1087 = 9L;
                    short *l_1088 = &l_435.f3;
                    l_1072++;
                    if (g_451)
                        goto lbl_1076;
lbl_1076:
                    (*l_990) = l_1075;
                    (*l_1011) &= (((*l_914) = (0x1819L || 0xECFAL)) > (((*l_1088) &= (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((*l_903), 10)) ^ func_57(p_23, l_914, g_1040)), (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((*l_903), ((*l_900) = func_42(((*l_899) = func_66((*l_900), (*g_250))), l_447, p_23)))) && 8UL) || l_1071), l_1087)), g_763))))) != (*g_250)));
                    (*l_905) = (void*)0;
                }
            }
            else
            {
                unsigned char l_1094 = 255UL;
                int l_1117 = 0x767DE443L;
                (**l_905) = (safe_mul_func_uint8_t_u_u(((g_1091 = &l_900) != l_1093), (*g_152)));
                if (l_1094)
                {
                    unsigned l_1143 = 4UL;
                    int *l_1148 = &l_734;
                    int *l_1149 = &l_1030;
                    int *l_1150 = &l_1013;
                    int *l_1151 = &l_934;
                    int *l_1152 = (void*)0;
                    int *l_1153 = &l_1013;
                    int *l_1154 = &g_96;
                    int *l_1155 = &l_1020;
                    int *l_1156 = &l_917;
                    int *l_1157 = &g_35;
                    int *l_1158 = &l_934;
                    int *l_1159 = &l_772;
                    int *l_1160 = &g_814;
                    int *l_1161 = &l_734;
                    int *l_1162 = &l_472;
                    int *l_1163 = &l_917;
                    int *l_1164 = &g_38;
                    int *l_1165 = &l_772;
                    int *l_1166 = &l_1012;
                    int *l_1167 = (void*)0;
                    int *l_1168 = &l_1117;
                    int *l_1169 = &l_1013;
                    int *l_1170 = (void*)0;
                    int *l_1171 = &l_1030;
                    int *l_1172 = &l_1013;
                    int l_1173 = 1L;
                    int *l_1174 = (void*)0;
                    int *l_1175 = &l_917;
                    int *l_1176 = &l_487;
                    int *l_1177 = (void*)0;
                    int *l_1178 = (void*)0;
                    int *l_1179 = &l_1117;
                    int l_1180 = 0xA711987FL;
                    int *l_1181 = &l_1012;
                    int *l_1182 = &l_934;
                    int *l_1183 = (void*)0;
                    int *l_1184 = &l_734;
                    int *l_1185 = &l_1013;
                    int *l_1186 = &l_487;
                    int *l_1187 = &l_1012;
                    int *l_1188 = &g_115;
                    int *l_1189 = &l_487;
                    int *l_1190 = &l_1045;
                    int *l_1191 = (void*)0;
                    int *l_1192 = &l_1022;
                    int *l_1193 = &g_38;
                    int *l_1194 = &l_472;
                    int *l_1195 = (void*)0;
                    int *l_1196 = &l_1022;
                    int *l_1197 = &l_934;
                    int *l_1198 = &l_917;
                    int *l_1199 = &l_1020;
                    int *l_1200 = &l_1180;
                    int *l_1201 = &l_1045;
                    int *l_1202 = &l_1045;
                    int *l_1203 = &l_1117;
                    int *l_1204 = &l_1036;
                    int *l_1205 = &l_1036;
                    int *l_1206 = (void*)0;
                    int *l_1207 = &l_1045;
                    int *l_1209 = &l_1049;
                    int *l_1210 = &l_934;
                    int *l_1211 = &g_96;
                    int *l_1212 = &l_772;
                    int *l_1213 = (void*)0;
                    int *l_1214 = &g_115;
                    int *l_1215 = &l_1036;
                    int *l_1216 = &g_38;
                    int *l_1217 = &l_934;
                    int *l_1218 = &g_115;
                    int *l_1219 = &l_487;
                    int *l_1220 = &l_1013;
                    for (p_24 = 0; (p_24 < 3); p_24 = safe_add_func_uint32_t_u_u(p_24, 3))
                    {
                        int *l_1097 = &g_38;
                        int *l_1098 = &g_814;
                        int *l_1099 = (void*)0;
                        int *l_1100 = &g_115;
                        int *l_1101 = &l_772;
                        int *l_1102 = &g_96;
                        int *l_1103 = &l_487;
                        int l_1104 = 0x50DDE701L;
                        int *l_1105 = &l_1022;
                        int *l_1106 = &l_772;
                        int *l_1107 = &l_1029;
                        int *l_1108 = (void*)0;
                        int l_1109 = 8L;
                        int *l_1110 = &l_1104;
                        int *l_1111 = &l_772;
                        int *l_1112 = &l_1109;
                        int *l_1113 = &l_772;
                        int *l_1114 = &l_1022;
                        int *l_1115 = &l_472;
                        int *l_1116 = &l_1012;
                        int *l_1118 = &l_1013;
                        int *l_1119 = &g_38;
                        int *l_1120 = &g_35;
                        int *l_1121 = &l_487;
                        int *l_1122 = &g_96;
                        int *l_1123 = &l_934;
                        int *l_1125 = &g_814;
                        int *l_1126 = (void*)0;
                        int *l_1127 = (void*)0;
                        int *l_1128 = &g_35;
                        int *l_1129 = &l_1124;
                        int *l_1130 = &l_1117;
                        int *l_1131 = (void*)0;
                        int *l_1132 = &l_1109;
                        int *l_1133 = &g_115;
                        int *l_1134 = &g_35;
                        int *l_1135 = (void*)0;
                        int *l_1136 = &l_1022;
                        int *l_1137 = &l_1012;
                        int *l_1138 = &l_1020;
                        int *l_1139 = &l_1022;
                        int *l_1140 = (void*)0;
                        int *l_1141 = &l_1045;
                        int *l_1142 = &l_487;
                        ++l_1143;
                        (*l_1138) = (-1L);
                        (*g_1091) = (void*)0;
                    }
                    for (l_435.f2 = 0; (l_435.f2 == 29); ++l_435.f2)
                    {
                        (*l_903) &= p_24;
                        (*l_903) ^= p_25;
                    }
                    --g_1221;
                }
                else
                {
                    union U0 **l_1224 = &l_436;
                    int l_1234 = 0L;
                    char l_1235 = 0xA4L;
                    int *l_1236 = &g_38;
                    int *l_1237 = &g_38;
                    int *l_1238 = &l_917;
                    int *l_1239 = &l_1012;
                    int *l_1240 = &l_734;
                    int *l_1241 = &g_115;
                    int *l_1242 = &l_734;
                    int *l_1243 = (void*)0;
                    int *l_1244 = (void*)0;
                    int *l_1245 = &l_772;
                    int *l_1246 = &l_1124;
                    int *l_1247 = (void*)0;
                    int *l_1248 = &l_1036;
                    int *l_1249 = &l_1030;
                    int *l_1250 = (void*)0;
                    int *l_1251 = (void*)0;
                    int *l_1252 = &l_472;
                    int *l_1253 = &g_115;
                    int *l_1254 = &l_1124;
                    int *l_1255 = &l_1022;
                    int *l_1256 = &l_734;
                    int *l_1257 = &l_487;
                    int *l_1258 = (void*)0;
                    int *l_1259 = &g_96;
                    int *l_1260 = &l_917;
                    int *l_1261 = &l_1234;
                    int *l_1262 = &l_1036;
                    int l_1263 = (-1L);
                    int *l_1264 = &g_38;
                    int *l_1265 = &g_38;
                    int *l_1266 = &g_35;
                    int *l_1267 = (void*)0;
                    int *l_1268 = &l_772;
                    int *l_1269 = &l_917;
                    int *l_1270 = &g_814;
                    int l_1271 = 0x344F2888L;
                    int *l_1272 = &l_1030;
                    int *l_1273 = &l_1012;
                    int *l_1274 = &l_1012;
                    int *l_1275 = &l_1013;
                    int *l_1276 = &l_934;
                    int *l_1277 = &g_96;
                    int *l_1278 = &l_1049;
                    int *l_1279 = &l_734;
                    int *l_1280 = &l_1036;
                    int *l_1281 = &l_1013;
                    int *l_1282 = &l_472;
                    int *l_1283 = &l_1020;
                    int *l_1284 = (void*)0;
                    int *l_1285 = &l_1020;
                    int *l_1286 = (void*)0;
                    int *l_1287 = &l_487;
                    int *l_1288 = &l_1117;
                    int *l_1289 = &l_1030;
                    int *l_1290 = &l_1045;
                    int *l_1291 = &l_1012;
                    int *l_1292 = &l_1012;
                    int *l_1293 = (void*)0;
                    int *l_1294 = (void*)0;
                    int *l_1295 = &l_734;
                    int *l_1296 = &l_1263;
                    int *l_1297 = &g_115;
                    int *l_1298 = &l_1030;
                    int *l_1299 = &l_734;
                    int *l_1300 = &l_1020;
                    int *l_1301 = (void*)0;
                    int *l_1302 = &l_1234;
                    int *l_1303 = &l_1271;
                    int *l_1304 = &l_1124;
                    int l_1305 = 0x3B4ACA49L;
                    int *l_1307 = &g_814;
                    int *l_1308 = &l_1022;
                    int *l_1309 = &l_772;
                    int *l_1310 = &l_917;
                    int *l_1311 = (void*)0;
                    int *l_1312 = &l_1013;
                    (*l_1224) = &g_97;
                    if (((**g_1091) = (((*l_444) = l_1225) == (void*)0)))
                    {
                        (*g_1091) = (*l_905);
                        (*l_905) = l_1226;
                    }
                    else
                    {
                        unsigned short *l_1227 = (void*)0;
                        unsigned short *l_1228 = &g_649;
                        int l_1229 = 1L;
                        (**g_1091) = ((p_26 ^ (0x8BL == (**g_151))) ^ (((*l_1228) |= (*g_250)) | (+(l_1229 ^= 65528UL))));
                        (**l_905) = 0x81098B15L;
                        (**l_905) = ((*g_152) > (**g_151));
                    }
                    for (g_815 = 0; (g_815 < 37); g_815 = safe_add_func_uint8_t_u_u(g_815, 1))
                    {
                        l_1117 = (safe_div_func_int16_t_s_s(8L, (0x2F6EL || 0x603BL)));
                    }
                    --g_1313;
                }
            }
            (*l_903) = func_42(&g_451, (safe_mul_func_int8_t_s_s(func_57(&g_1208, l_910, g_1040), (g_1318 | (safe_mul_func_int16_t_s_s(func_42(&g_1040, (*p_23), &g_449), 8UL))))), &g_1208);
        }
        else
        {
            unsigned char *l_1323 = &g_1054;
            int l_1330 = 0x3ED66B08L;
            int **l_1335 = &l_1226;
            int l_1337 = (-1L);
            unsigned short **l_1338 = &g_250;
            unsigned short ***l_1339 = &l_1338;
            int l_1434 = 0L;
            int l_1438 = 0x53277423L;
            int l_1443 = 0L;
            union U0 *l_1462 = &l_435;
            int *l_1464 = &l_1020;
            int *l_1465 = &l_772;
            int *l_1466 = &g_38;
            int *l_1467 = &l_1013;
            int *l_1468 = &l_1443;
            int *l_1469 = (void*)0;
            int *l_1470 = &g_96;
            int *l_1471 = &l_1029;
            int *l_1472 = &g_38;
            int *l_1473 = &g_35;
            int *l_1474 = &l_934;
            int *l_1475 = &l_1020;
            int *l_1476 = &l_734;
            int *l_1477 = &l_1022;
            int *l_1478 = &l_472;
            int *l_1479 = &l_772;
            int *l_1480 = &l_734;
            int *l_1481 = &g_96;
            int *l_1482 = &l_1049;
            int *l_1483 = &l_1337;
            int *l_1484 = &l_1030;
            int *l_1485 = &l_1029;
            int *l_1486 = &g_115;
            int *l_1487 = &g_115;
            int *l_1488 = &l_487;
            int *l_1489 = &l_487;
            l_1337 |= ((p_25 = (((*l_1323) = (--(**g_151))) & (*l_900))) > (+func_42(func_66((safe_div_func_uint8_t_u_u((--p_26), (*l_900))), p_24), ((*l_914) = (safe_add_func_int8_t_s_s(l_1330, (safe_rshift_func_int16_t_s_s(func_57((*l_899), func_66((*g_250), (0x6B7442E0L && (safe_div_func_uint32_t_u_u(func_46(func_66((((((void*)0 == l_1335) & p_24) & (*p_23)) & (-8L)), (*g_250)), p_24, p_23, p_24, l_914), l_1336)))), (*p_23)), p_24))))), p_23)));
            if ((((*l_1339) = l_1338) != l_1340))
            {
                char l_1343 = 0xE7L;
                int *l_1360 = &g_814;
                int l_1407 = 1L;
                unsigned char ***l_1456 = &g_151;
                int *l_1460 = &l_1030;
                if (g_38)
                {
                    unsigned *l_1344 = &g_1313;
                    char ***l_1345 = &l_899;
                    int l_1356 = 0xEF57CB46L;
                    char *l_1371 = &g_741;
                    g_96 = 0x0751B961L;
                    if ((safe_lshift_func_uint16_t_u_s((((*l_1344) = l_1343) != (((void*)0 != l_1345) <= ((((**g_151) ^ (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((p_26--) || (func_57(&g_1208, &g_451, (*p_23)) > 1UL)) | (-1L)), p_25)), l_1356)) == p_25) & p_24), 2)), 0x6BL))) >= (*g_250)) == l_1356))), p_25)))
                    {
                        (*l_900) |= (safe_rshift_func_uint16_t_u_u((*g_250), 14));
lbl_1359:
                        l_1356 = l_772;
                    }
                    else
                    {
                        char *l_1361 = &l_1343;
                        int l_1370 = 0x8BB1949FL;
                        if (p_25)
                            goto lbl_1359;
                        (*l_1335) = ((*g_1091) = l_1360);
                        (**g_1091) = (&g_741 == ((*l_899) = l_1361));
                        (*l_900) &= func_42(&g_741, (safe_rshift_func_int8_t_s_s(func_57(l_914, &g_449, ((*l_450) = (safe_add_func_uint8_t_u_u(func_46(func_66(func_46(&g_451, ((**g_151) = func_46(p_23, p_26, &g_8, (safe_rshift_func_uint16_t_u_u(g_1368, (1L == g_1369))), (*l_899))), (*l_899), (**l_1093), &g_1368), (*g_250)), p_25, (*l_899), l_1370, p_23), g_1306)))), 7)), l_1371);
                    }
                }
                else
                {
                    int *l_1372 = &l_1049;
                    int l_1373 = 1L;
                    int *l_1374 = &l_1045;
                    int *l_1375 = &l_772;
                    int *l_1376 = (void*)0;
                    int l_1377 = (-1L);
                    int *l_1378 = (void*)0;
                    int *l_1379 = &l_934;
                    int *l_1380 = &g_96;
                    int *l_1381 = &g_38;
                    int *l_1382 = &l_1029;
                    int *l_1383 = &l_1045;
                    int *l_1384 = &l_1045;
                    int *l_1385 = &l_1029;
                    int *l_1386 = (void*)0;
                    int *l_1387 = &l_1337;
                    int *l_1388 = (void*)0;
                    int *l_1389 = (void*)0;
                    int *l_1390 = (void*)0;
                    int *l_1391 = &g_115;
                    int *l_1392 = &l_1013;
                    int *l_1393 = (void*)0;
                    int *l_1394 = (void*)0;
                    int *l_1395 = &l_1022;
                    int *l_1396 = &l_1013;
                    int *l_1397 = &l_1377;
                    int l_1398 = 2L;
                    int *l_1399 = &l_1020;
                    int *l_1400 = &l_1012;
                    int *l_1401 = &l_1337;
                    int *l_1402 = (void*)0;
                    int *l_1403 = &l_487;
                    int *l_1404 = &l_772;
                    int *l_1405 = &g_35;
                    int *l_1406 = &l_1330;
                    int *l_1408 = &l_1330;
                    int *l_1409 = &l_734;
                    int *l_1410 = &l_1022;
                    int *l_1411 = &g_814;
                    int *l_1412 = &l_1020;
                    int *l_1413 = (void*)0;
                    int *l_1414 = (void*)0;
                    int l_1415 = 0xBC1A3F1DL;
                    int *l_1416 = &l_1407;
                    int *l_1417 = &l_1407;
                    int *l_1418 = &l_1030;
                    int *l_1419 = &g_115;
                    int *l_1420 = &l_1045;
                    int *l_1421 = &l_1330;
                    int *l_1422 = &g_96;
                    int *l_1423 = &l_1049;
                    int *l_1424 = &g_115;
                    int *l_1425 = (void*)0;
                    int *l_1426 = &l_1049;
                    int *l_1427 = &l_1337;
                    int *l_1428 = (void*)0;
                    int *l_1429 = &l_772;
                    int *l_1431 = &l_1012;
                    int *l_1432 = &l_772;
                    int *l_1433 = &l_487;
                    int *l_1435 = &l_772;
                    int l_1436 = 0x53FD18D0L;
                    int *l_1437 = &g_814;
                    int *l_1439 = &g_814;
                    int *l_1440 = &l_1049;
                    int *l_1441 = &g_814;
                    int *l_1442 = &l_1377;
                    int *l_1444 = &l_1434;
                    int *l_1445 = &g_115;
                    int *l_1446 = &l_1020;
                    int *l_1447 = &l_1436;
                    int *l_1448 = &l_1398;
                    int *l_1449 = &l_487;
                    int *l_1450 = &l_934;
                    int *l_1451 = &l_1438;
                    (*l_1360) &= (+func_46(l_1323, (*g_152), p_23, (*g_152), &l_1343));
                    (*g_441) = (*g_441);
                    l_900 = (*g_1091);
                    g_1452++;
                }
                (*l_1360) ^= ((&l_1323 != ((*l_1456) = l_1455)) > (p_24 == (0x0A8E5D2AL && (((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((g_96 <= func_46(p_23, ((void*)0 != &p_26), ((*l_899) = l_914), p_25, p_23)))), p_24)) & 246UL) < (*g_250)))));
                (*l_1460) = ((*l_1360) = 0xA3F17FDCL);
                (*l_1460) = ((*l_1360) = ((safe_unary_minus_func_int32_t_s(p_26)) <= g_1054));
            }
            else
            {
                union U0 **l_1463 = &l_436;
                (*l_1463) = l_1462;
            }
            --l_1490;
        }
    }
    else
    {
        union U0 **l_1493 = &l_436;
        (*l_1493) = &g_97;
        for (l_772 = 5; (l_772 == (-24)); l_772 = safe_sub_func_uint8_t_u_u(l_772, 5))
        {
            int *l_1496 = &l_1022;
            (*l_1496) |= p_26;
            return p_25;
        }
    }
    return l_1497;
}







static char * func_27(char * p_28, char * p_29, unsigned p_30)
{
    unsigned char **l_247 = &g_152;
    unsigned char ***l_248 = &g_151;
    unsigned short *l_249 = &g_114;
    int l_251 = (-8L);
    int l_269 = 0xD08F565DL;
    int l_288 = 0x774A439AL;
    int l_290 = 0x4DEBD41BL;
    int l_303 = 0x1D65AF2BL;
    int l_324 = 0x50D5A8CBL;
    int l_325 = 1L;
    int *l_339 = &g_96;
    int **l_338 = &l_339;
    int *l_340 = &g_115;
    int *l_341 = &g_96;
    int *l_342 = &g_35;
    int *l_343 = &l_324;
    int *l_344 = &l_325;
    int *l_345 = &l_303;
    int *l_346 = &l_288;
    int *l_347 = (void*)0;
    int *l_348 = &g_35;
    int *l_349 = &l_325;
    int *l_350 = &l_288;
    int *l_351 = &g_115;
    int *l_352 = &l_269;
    int *l_353 = &l_251;
    int *l_354 = &g_96;
    int *l_355 = &l_288;
    int *l_356 = &l_324;
    int *l_357 = &l_288;
    int *l_358 = &l_288;
    int *l_359 = &l_288;
    int *l_360 = (void*)0;
    int *l_361 = &g_38;
    int *l_362 = (void*)0;
    int *l_363 = &g_115;
    int *l_364 = &l_269;
    int *l_365 = &l_324;
    int *l_366 = &l_325;
    int *l_367 = &l_303;
    int l_368 = 0xED94E991L;
    int *l_369 = &l_288;
    int l_370 = 0x62526AD9L;
    int *l_371 = &l_290;
    int *l_372 = &g_35;
    int l_373 = (-1L);
    int *l_374 = &l_269;
    int *l_375 = (void*)0;
    int *l_376 = &g_115;
    int *l_377 = &l_368;
    int *l_378 = &g_38;
    int *l_379 = &l_325;
    int *l_380 = &g_96;
    int *l_381 = &l_251;
    int *l_382 = &l_290;
    int *l_383 = (void*)0;
    int *l_384 = &g_115;
    int *l_385 = &l_251;
    int *l_386 = &l_288;
    int *l_387 = &l_370;
    int *l_388 = &l_370;
    int *l_389 = &l_290;
    unsigned short l_390 = 1UL;
    char *l_396 = &g_8;
    union U0 *l_419 = (void*)0;
    (*l_248) = l_247;
lbl_398:
    if ((l_249 == (g_250 = &g_89)))
    {
        unsigned l_258 = 0x3E1DE84EL;
        int l_274 = 0x38DE027BL;
        int l_282 = 0x08E421BCL;
        int l_285 = 0xAD84171FL;
        int l_287 = 0L;
        int l_302 = 0xFB0DACC5L;
        int *l_334 = &g_35;
        l_251 = ((p_30 > (l_251 <= 0xBBL)) && p_30);
        g_115 |= (g_96 = ((safe_rshift_func_uint8_t_u_s((*g_152), (*p_29))) != (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_251, (l_258 == ((~l_258) > ((*g_250) <= (g_97.f1 ^ l_251)))))), p_30)) == 0x0C9AL) || g_114)));
        for (g_38 = 0; (g_38 < 2); g_38 = safe_add_func_int16_t_s_s(g_38, 3))
        {
            int *l_262 = &l_251;
            int **l_261 = &l_262;
            int *l_263 = &g_96;
            int *l_264 = &l_251;
            int *l_265 = &l_251;
            int *l_266 = &l_251;
            int *l_267 = &g_35;
            int *l_268 = &g_35;
            int *l_270 = &g_96;
            int *l_271 = &g_96;
            int l_272 = 1L;
            int *l_273 = &g_35;
            int *l_275 = &g_35;
            int *l_276 = &g_96;
            int *l_277 = &l_274;
            int *l_278 = (void*)0;
            int *l_279 = (void*)0;
            int *l_280 = &l_269;
            int *l_281 = &g_96;
            int *l_283 = (void*)0;
            int *l_284 = (void*)0;
            int *l_286 = &l_251;
            int *l_289 = (void*)0;
            int *l_291 = (void*)0;
            int *l_292 = &l_282;
            int *l_293 = &l_288;
            int *l_294 = &l_288;
            int *l_295 = &g_115;
            int *l_296 = &g_96;
            int *l_297 = (void*)0;
            int *l_298 = &l_274;
            int *l_299 = &g_96;
            int *l_300 = &g_115;
            int *l_301 = &l_287;
            int *l_304 = &g_35;
            int *l_305 = &l_290;
            int *l_306 = (void*)0;
            int *l_307 = &l_288;
            int *l_308 = &l_302;
            int *l_309 = &l_302;
            int *l_311 = &l_282;
            int *l_312 = (void*)0;
            int *l_313 = &g_96;
            int *l_314 = &l_269;
            int *l_315 = (void*)0;
            int *l_316 = &l_287;
            int *l_317 = (void*)0;
            int *l_318 = &l_251;
            int l_320 = 0x46795E05L;
            int *l_321 = &g_115;
            int *l_322 = &l_303;
            int *l_323 = &l_287;
            int *l_326 = &l_287;
            (*l_261) = &g_115;
            g_327++;
            (*l_265) = (~((safe_add_func_int16_t_s_s(g_96, g_97.f3)) >= 1UL));
            l_324 &= (l_251 = (p_30 ^ (safe_add_func_uint16_t_u_u(0xA72AL, (*g_250)))));
        }
        (*l_334) |= l_324;
    }
    else
    {
        int *l_337 = &l_251;
        (*l_337) |= ((safe_lshift_func_int16_t_s_s(p_30, 6)) | func_42(p_28, l_303, p_29));
        l_338 = (void*)0;
    }
    --l_390;
    if ((safe_unary_minus_func_int32_t_s((*l_376))))
    {
        char *l_397 = &g_8;
        int *l_399 = &l_303;
        (*l_349) = func_42(&g_8, ((safe_add_func_uint8_t_u_u(p_30, func_57(&g_8, p_28, (*l_365)))) <= func_46(l_396, p_30, func_66((*l_361), (*l_376)), (*l_359), l_397)), &g_8);
        if (g_115)
            goto lbl_398;
        l_399 = (void*)0;
    }
    else
    {
        union U0 l_400 = {0x52D3AD35L};
        char *l_401 = &g_8;
        int *l_417 = &l_325;
        if (func_57(func_61(l_400), l_401, g_319))
        {
            unsigned char *l_412 = &g_142;
            unsigned char **l_411 = &l_412;
            (*l_376) &= ((*l_357) = (safe_div_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((**l_248) = (*g_151)) == l_401), 8)), g_319)) <= (((*l_411) = &g_142) != p_28)))) != func_42(p_28, ((safe_lshift_func_int16_t_s_u((g_41 ^ 0x4CF2CA30L), l_400.f3)) == l_400.f2), &g_8)), g_237)));
        }
        else
        {
            int *l_415 = &l_269;
            int **l_416 = &l_362;
            int **l_418 = &l_349;
            short **l_430 = (void*)0;
            (*l_418) = (l_417 = ((*l_416) = l_415));
            l_419 = l_419;
            for (g_97.f2 = (-12); (g_97.f2 >= 17); g_97.f2++)
            {
                g_35 ^= ((65534UL < (g_96 | ((**g_151) = (**g_151)))) > g_115);
            }
            for (g_114 = 14; (g_114 > 8); g_114--)
            {
                int *l_424 = (void*)0;
                int l_426 = 0x0493C289L;
                unsigned l_427 = 4294967288UL;
                short ***l_431 = &l_430;
            }
        }
        return &g_8;
    }
    return l_396;
}







static char * func_31(unsigned short p_32)
{
    int l_55 = 0x16D0046BL;
    char *l_145 = (void*)0;
    int l_165 = 0xEA2BDD4AL;
    unsigned char **l_246 = &g_152;
    for (p_32 = 0; (p_32 <= 34); p_32++)
    {
        char *l_52 = &g_8;
        short l_146 = (-10L);
        unsigned char **l_162 = &g_152;
        unsigned char ***l_163 = (void*)0;
        unsigned char ***l_164 = &l_162;
        int l_188 = 1L;
        int l_202 = (-3L);
        int l_203 = (-1L);
        for (g_35 = (-19); (g_35 < 3); g_35 = safe_add_func_uint8_t_u_u(g_35, 1))
        {
            char *l_56 = &g_8;
            int l_123 = 0xF437236CL;
            char *l_126 = &g_8;
            int *l_131 = &l_123;
            unsigned char *l_141 = &g_142;
            int *l_147 = &g_115;
            for (g_38 = 0; (g_38 == (-4)); g_38 = safe_sub_func_int8_t_s_s(g_38, 1))
            {
                char *l_118 = &g_8;
                char **l_117 = &l_118;
                short *l_124 = (void*)0;
                short *l_125 = &g_97.f3;
                int *l_127 = (void*)0;
                int *l_128 = (void*)0;
                int *l_129 = &g_115;
            }
            (*l_131) |= (safe_unary_minus_func_uint32_t_u(0xC395B56AL));
            (*l_147) &= ((func_42(l_52, (p_32 || (safe_rshift_func_uint16_t_u_s((!((safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s((safe_mod_func_uint32_t_u_u(g_38, l_55)))) & (*l_131)), 1)) & (safe_sub_func_uint8_t_u_u(((*l_141)--), (*l_131))))), ((func_57(l_145, l_145, p_32) != p_32) > l_146)))), &g_8) == g_38) < 0UL);
            for (g_97.f3 = 8; (g_97.f3 != (-3)); g_97.f3--)
            {
                int **l_150 = &l_147;
                unsigned char ***l_153 = &g_151;
                (*l_150) = &g_96;
                (*l_153) = g_151;
                (*l_147) &= ((*l_153) == (*l_153));
                (**l_150) = p_32;
            }
        }
        l_165 = (safe_rshift_func_uint16_t_u_s((l_146 || (safe_rshift_func_uint8_t_u_u((--(**g_151)), (g_96 == (&g_152 != ((*l_164) = l_162)))))), 7));
        for (g_97.f0 = 26; (g_97.f0 <= 53); g_97.f0 = safe_add_func_int32_t_s_s(g_97.f0, 4))
        {
            unsigned l_168 = 6UL;
            int *l_171 = &g_96;
            int *l_172 = &g_38;
            int *l_173 = &g_96;
            int *l_174 = &g_96;
            int *l_175 = &g_96;
            int *l_176 = &g_115;
            int *l_177 = &g_96;
            int *l_178 = &l_165;
            int *l_179 = &l_165;
            int *l_180 = &l_165;
            int *l_181 = &g_96;
            int *l_182 = (void*)0;
            int *l_183 = &g_96;
            int *l_184 = &g_38;
            int *l_185 = (void*)0;
            int *l_186 = &g_115;
            int *l_187 = &g_96;
            int *l_189 = &g_38;
            int *l_190 = (void*)0;
            int *l_191 = &g_35;
            int *l_192 = &g_38;
            int *l_193 = &g_35;
            int *l_194 = &g_35;
            int *l_195 = &g_115;
            int *l_196 = &l_165;
            int *l_197 = &g_96;
            int *l_198 = &g_38;
            int *l_199 = &g_38;
            int *l_200 = &g_38;
            int *l_201 = &g_38;
            int *l_204 = (void*)0;
            int *l_205 = &g_35;
            int *l_206 = (void*)0;
            int *l_207 = &l_203;
            int *l_208 = &g_115;
            int *l_209 = &l_203;
            int *l_210 = &g_35;
            int *l_211 = &g_35;
            int *l_212 = &g_38;
            int *l_213 = &g_115;
            int *l_214 = &l_188;
            int *l_215 = &g_35;
            int *l_216 = &g_96;
            int *l_217 = &l_202;
            int *l_218 = (void*)0;
            int *l_219 = &g_115;
            int *l_220 = &l_202;
            int *l_221 = &g_38;
            int *l_222 = &g_38;
            int *l_223 = (void*)0;
            int *l_224 = &g_38;
            int *l_225 = &l_165;
            int *l_226 = &g_115;
            int *l_227 = &g_115;
            int *l_228 = (void*)0;
            int *l_229 = &l_188;
            int *l_230 = (void*)0;
            int *l_231 = (void*)0;
            int *l_232 = &g_35;
            int *l_233 = &l_165;
            int *l_234 = (void*)0;
            int *l_235 = &g_35;
            int *l_236 = &l_188;
            char **l_244 = &l_145;
            l_168++;
            g_237--;
            for (l_146 = 4; (l_146 == (-18)); --l_146)
            {
                char **l_242 = &l_52;
                char ***l_243 = &l_242;
                int **l_245 = (void*)0;
                g_35 = ((*l_229) |= ((*l_216) |= (~(((*l_243) = l_242) != l_244))));
                l_186 = &g_96;
            }
        }
        l_246 = l_246;
    }
    return l_145;
}







static unsigned func_42(char * p_43, char p_44, char * p_45)
{
    return p_44;
}







static char func_46(char * p_47, unsigned char p_48, char * p_49, unsigned char p_50, char * p_51)
{
    return (*p_49);
}







static short func_57(char * p_58, char * p_59, char p_60)
{
    unsigned char l_119 = 0UL;
    unsigned l_120 = 0UL;
    l_119 = g_97.f4;
    if (l_120)
    {
        int *l_121 = &g_35;
        int **l_122 = &l_121;
        (*l_122) = l_121;
        g_96 = p_60;
        return p_60;
    }
    else
    {
        return p_60;
    }
}







static char * func_61(union U0 p_62)
{
    unsigned short *l_106 = &g_89;
    unsigned short **l_107 = &l_106;
    int l_108 = 0xB71DEE15L;
    short *l_109 = &g_97.f4;
    short *l_110 = &g_111;
    int *l_113 = &g_96;
    int l_116 = 0xC9969097L;
    l_116 = (g_115 = (g_114 ^= ((*l_113) = (safe_mod_func_int16_t_s_s(((*l_110) = ((*l_109) = (p_62.f4 & (safe_mul_func_uint16_t_u_u(p_62.f0, (safe_lshift_func_uint16_t_u_s(0x13E7L, (p_62.f3 != (safe_mul_func_uint16_t_u_u(p_62.f3, (l_108 |= (((*l_107) = l_106) == &g_89)))))))))))), (safe_unary_minus_func_uint32_t_u(g_38)))))));
    return &g_8;
}







static union U0 func_63(char * p_64, char * p_65)
{
    short l_71 = (-3L);
    unsigned short *l_88 = &g_89;
    char *l_91 = &g_8;
    char **l_90 = &l_91;
    char *l_93 = (void*)0;
    char **l_92 = &l_93;
    char *l_94 = &g_8;
    int *l_95 = &g_96;
    (*l_95) = ((safe_add_func_uint8_t_u_u(0UL, l_71)) & (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((((*l_92) = ((*l_90) = func_66((l_71 && (((0x42L | (*p_65)) && ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((g_8 > (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(l_71, 2)), 1L))), ((*l_88) = (safe_add_func_uint32_t_u_u(l_71, 1L))))), l_71)) > 0x71F67B26L)) == g_35)), g_38))) == l_94) | l_71), l_71)), 6)));
    return g_97;
}







static char * func_66(unsigned short p_67, unsigned short p_68)
{
    return &g_8;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97.f3, "g_97.f3", print_hash_value);
    transparent_crc(g_97.f4, "g_97.f4", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_815, "g_815", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_896, "g_896", print_hash_value);
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1054, "g_1054", print_hash_value);
    transparent_crc(g_1208, "g_1208", print_hash_value);
    transparent_crc(g_1221, "g_1221", print_hash_value);
    transparent_crc(g_1306, "g_1306", print_hash_value);
    transparent_crc(g_1313, "g_1313", print_hash_value);
    transparent_crc(g_1318, "g_1318", print_hash_value);
    transparent_crc(g_1368, "g_1368", print_hash_value);
    transparent_crc(g_1369, "g_1369", print_hash_value);
    transparent_crc(g_1452, "g_1452", print_hash_value);
    transparent_crc(g_1540, "g_1540", print_hash_value);
    transparent_crc(g_1542, "g_1542", print_hash_value);
    transparent_crc(g_1551, "g_1551", print_hash_value);
    transparent_crc(g_1715, "g_1715", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
