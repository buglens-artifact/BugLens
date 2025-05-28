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



static unsigned short g_2 = 0x1852L;
static unsigned char g_17 = 0xC6L;
static int g_19 = 0xFAA32F3FL;
static int g_24 = 0L;
static int g_26 = 0x14B11F38L;
static short g_27 = 0xA4C5L;
static char g_77 = (-8L);
static short g_79 = 1L;
static short g_81 = 1L;
static int *g_87 = (void*)0;
static int g_89 = 7L;
static const int g_93 = 0x6DF81F9DL;
static const int *g_95 = &g_24;
static const int **g_94 = &g_95;
static int g_236 = 0xAE813F23L;
static unsigned short g_256 = 65532UL;
static int ***g_276 = (void*)0;
static unsigned short g_298 = 65535UL;
static unsigned g_308 = 0x9E1A7EA2L;
static unsigned char g_312 = 0x77L;
static unsigned short *g_341 = &g_298;
static unsigned short ** const g_340 = &g_341;
static char *g_352 = &g_77;
static char **g_351 = &g_352;
static const char **g_353 = (void*)0;
static int * const *g_470 = (void*)0;
static int * const **g_469 = &g_470;
static int g_552 = (-1L);
static int g_600 = (-1L);
static unsigned short g_607 = 0UL;
static unsigned char g_650 = 0UL;
static unsigned char g_683 = 0x02L;
static unsigned g_688 = 0xEA618A17L;
static int g_715 = 0x7C3847FEL;
static short g_734 = 1L;
static unsigned g_762 = 0x3745E643L;
static unsigned char g_816 = 0x07L;
static unsigned char g_894 = 0x64L;
static unsigned short **g_908 = (void*)0;
static unsigned short ***g_907 = &g_908;
static int g_989 = 0x80426B1EL;
static unsigned short g_998 = 0xA5B3L;
static unsigned g_1046 = 0UL;
static char g_1095 = 0x0AL;
static char g_1097 = (-1L);
static char g_1099 = 0x7AL;
static char g_1155 = 0x00L;
static short g_1176 = 0xD008L;
static unsigned char g_1180 = 0x98L;
static int **g_1192 = (void*)0;
static unsigned char g_1233 = 0x9BL;
static char g_1358 = 0L;
static unsigned short g_1424 = 0x78FCL;
static short g_1497 = 4L;
static unsigned g_1503 = 7UL;
static int g_1507 = 0L;
static int g_1568 = 0xCDDBD754L;
static int g_1569 = (-8L);
static int g_1588 = 0x64D90E24L;
static int g_1606 = 0x9A0DE9C7L;
static unsigned g_1633 = 0x3B7C2618L;
static unsigned char *g_1642 = (void*)0;
static unsigned char **g_1641 = &g_1642;
static short g_1713 = 0x952CL;
static unsigned g_1736 = 0xA88789C9L;
static unsigned g_1918 = 4294967295UL;



static const int func_1(void);
static int * func_4(unsigned p_5);
static int * func_28(int p_29);
static int * func_30(unsigned char * p_31, const int * p_32, unsigned char p_33, unsigned char * p_34, int * p_35);
static const int * func_37(unsigned p_38, int * p_39, unsigned char * p_40, int * p_41);
static int * func_43(unsigned char * p_44, char p_45, const int p_46, int * const p_47);
static short func_51(unsigned p_52, int * p_53);
static int * func_54(int p_55);
static int func_56(unsigned char * p_57);
static unsigned short func_60(int p_61, unsigned char * p_62);
static const int func_1(void)
{
    unsigned l_3 = 0UL;
    int **l_1963 = &g_87;
    const unsigned l_1964 = 4294967295UL;
    l_3 = g_2;
    (*l_1963) = func_4(l_3);

    ;

    ;

    return l_1964;
}







static int * func_4(unsigned p_5)
{
    char l_14 = 6L;
    int *l_15 = (void*)0;
    unsigned char *l_16 = &g_17;
    int *l_18 = &g_19;
    unsigned short l_22 = 0x3013L;
    int *l_23 = &g_24;
    int *l_25 = &g_26;
    int **l_1922 = &g_87;
    int *l_1923 = &g_19;
    int *l_1924 = &g_1568;
    int *l_1925 = &g_26;
    int *l_1926 = &g_26;
    int *l_1927 = &g_1606;
    int *l_1928 = &g_26;
    int l_1929 = 0L;
    int *l_1930 = (void*)0;
    int *l_1931 = &l_1929;
    int l_1932 = 8L;
    int *l_1933 = &g_1569;
    int l_1934 = 0x40C9EA14L;
    int l_1935 = (-1L);
    int *l_1936 = &l_1934;
    int *l_1937 = &g_89;
    int *l_1938 = &g_1569;
    int *l_1939 = &l_1932;
    int *l_1940 = &g_24;
    int *l_1941 = &l_1934;
    int *l_1942 = &g_26;
    int *l_1943 = &g_1606;
    int *l_1944 = (void*)0;
    int *l_1945 = &g_24;
    int *l_1946 = &g_26;
    int *l_1947 = (void*)0;
    int *l_1948 = &l_1935;
    int *l_1949 = &l_1935;
    int *l_1950 = &l_1934;
    int *l_1951 = (void*)0;
    int *l_1952 = &l_1934;
    int *l_1953 = &g_19;
    int *l_1954 = &g_1569;
    int *l_1955 = &g_89;
    int *l_1956 = &l_1934;
    int *l_1957 = &g_19;
    int *l_1958 = &l_1935;
    int *l_1959 = &g_89;
    unsigned short l_1960 = 65529UL;
    g_27 |= ((*l_25) = ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(6UL, 4)), ((*l_23) ^= (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((l_14 || ((*l_18) = (((void*)0 != l_15) || ((*l_16) |= (!g_2))))), (safe_mod_func_uint8_t_u_u(255UL, g_2)))), l_22)) ^ ((p_5 < g_2) ^ g_2)) || p_5)))) || 1L));
    (*l_1922) = func_28(p_5);

    ;

    ;

    ++l_1960;
    return &g_19;


}







static int * func_28(int p_29)
{
    unsigned char *l_36 = &g_17;
    int l_42 = 0x58ED0BD2L;
    unsigned char *l_48 = &g_17;
    int *l_1807 = &g_1569;
    int **l_1825 = &l_1807;
    int *l_1826 = &l_42;
    int *l_1827 = &g_24;
    int *l_1828 = (void*)0;
    int *l_1829 = (void*)0;
    int *l_1830 = &g_1568;
    int *l_1831 = &g_19;
    int *l_1832 = &g_19;
    int *l_1833 = &g_1569;
    int *l_1834 = (void*)0;
    int *l_1835 = &l_42;
    int *l_1836 = &g_19;
    int *l_1837 = &g_24;
    int *l_1838 = (void*)0;
    int *l_1839 = (void*)0;
    int *l_1840 = (void*)0;
    int *l_1841 = &g_19;
    int *l_1842 = &g_1568;
    int *l_1843 = &g_24;
    int l_1844 = 0L;
    int *l_1845 = &g_89;
    int *l_1846 = &g_26;
    int *l_1847 = (void*)0;
    int *l_1848 = (void*)0;
    int *l_1849 = &g_26;
    int l_1850 = (-1L);
    int *l_1851 = &g_1568;
    int l_1852 = 0x0712C848L;
    int l_1853 = 0x62DE5FD8L;
    int *l_1854 = &g_1569;
    int *l_1855 = &g_89;
    int *l_1856 = (void*)0;
    int *l_1857 = (void*)0;
    int *l_1858 = &g_1569;
    int *l_1859 = (void*)0;
    int *l_1860 = &g_19;
    int *l_1861 = &g_19;
    int *l_1862 = (void*)0;
    int *l_1863 = &g_26;
    int *l_1864 = &l_1853;
    int l_1865 = 0xCD0F77E3L;
    int *l_1866 = &l_1852;
    int *l_1867 = (void*)0;
    int *l_1868 = &l_1852;
    int l_1869 = 1L;
    int *l_1870 = &g_1606;
    int *l_1871 = &l_1865;
    int *l_1872 = &l_1844;
    int *l_1873 = &g_26;
    int *l_1874 = &g_89;
    int l_1875 = (-7L);
    int *l_1876 = (void*)0;
    int *l_1877 = &g_26;
    int *l_1878 = &l_1865;
    int *l_1879 = &l_1850;
    int *l_1880 = &l_1852;
    int *l_1881 = &l_1869;
    int *l_1882 = &g_1606;
    int *l_1883 = &g_1569;
    int *l_1884 = &g_1568;
    int *l_1885 = &g_1568;
    int *l_1886 = &l_1852;
    int *l_1887 = &g_89;
    int *l_1888 = &g_89;
    int *l_1889 = (void*)0;
    int *l_1890 = &l_42;
    int *l_1891 = &g_26;
    int *l_1892 = (void*)0;
    int *l_1893 = &l_42;
    int *l_1894 = &l_42;
    int *l_1895 = &l_42;
    int l_1896 = 0x056855E7L;
    short l_1897 = 0x14E3L;
    int l_1898 = 0x30A3A6BDL;
    int l_1899 = 0x2000B07AL;
    int l_1900 = 0x5F5CFF77L;
    short l_1901 = 0x37CFL;
    int *l_1902 = &l_1896;
    int *l_1903 = &g_19;
    int *l_1904 = &g_19;
    int *l_1905 = (void*)0;
    int *l_1906 = &l_1875;
    int *l_1907 = &l_1850;
    int *l_1908 = &g_1568;
    int *l_1909 = &g_19;
    int *l_1910 = &g_1606;
    int *l_1911 = &g_19;
    int *l_1912 = &g_26;
    int *l_1913 = &g_1569;
    int *l_1914 = &l_1875;
    int *l_1915 = &l_1896;
    int *l_1916 = (void*)0;
    int *l_1917 = &g_89;
    int *l_1921 = &l_1898;
    l_1807 = func_30(l_36, func_37(l_42, func_43((l_48 = l_36), g_27, (safe_mod_func_int8_t_s_s((1UL & func_51(l_42, func_54(p_29))), p_29)), &l_42), (*g_1641), &l_42), l_42, l_36, l_1807);



    ;

    (*l_1825) = &l_42;

    ;
    g_1918++;
    return &g_1606;


}







static int * func_30(unsigned char * p_31, const int * p_32, unsigned char p_33, unsigned char * p_34, int * p_35)
{
    unsigned char *l_1808 = &g_1233;
    int l_1811 = (-1L);
    int *l_1812 = (void*)0;
    int *l_1813 = &g_89;
    unsigned *l_1822 = &g_1046;
    char ***l_1823 = &g_351;
    int *l_1824 = &g_26;
    p_32 = &l_1811;

    ;
    (*l_1824) = (safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((*l_1813) = (~((*p_35) = ((safe_rshift_func_uint16_t_u_s(((*g_341) = (*l_1813)), 1)) <= p_33)))), (((*l_1822) = (safe_rshift_func_uint16_t_u_s(l_1811, 13))) <= ((void*)0 == l_1823)))) >= (((-1L) & ((*p_32) <= 0x6369CF1FL)) ^ ((p_33 & 0UL) >= p_33))), l_1811));
    return p_35;


}







static const int * func_37(unsigned p_38, int * p_39, unsigned char * p_40, int * p_41)
{
    const int *l_1806 = &g_93;
    return l_1806;


}







static int * func_43(unsigned char * p_44, char p_45, const int p_46, int * const p_47)
{
    short *l_1062 = &g_79;
    unsigned short ***l_1067 = &g_908;
    int l_1069 = 0x1620E0C5L;
    const unsigned char l_1073 = 249UL;
    int l_1083 = 0L;
    int *** const *l_1104 = &g_276;
    int *** const **l_1103 = &l_1104;
    char *l_1237 = &g_1099;
    int l_1293 = 0x0DCCC845L;
    int l_1371 = 1L;
    int l_1389 = 0x469B5EE4L;
    int l_1583 = 0x6ADFA972L;
    int l_1600 = 0x47C9DF72L;
    int l_1773 = 0x94DC427FL;
    const int *l_1793 = &g_24;
    int l_1803 = 3L;
    for (g_312 = 0; (g_312 <= 32); g_312++)
    {
        short *l_1063 = &g_734;
        int *l_1064 = (void*)0;
        int *l_1065 = (void*)0;
        int *l_1066 = &g_26;
        unsigned char *l_1068 = (void*)0;
        unsigned *l_1070 = &g_1046;
        int **l_1071 = (void*)0;
        int **l_1072 = &g_87;
        (*l_1066) &= (l_1062 != l_1063);
        (*l_1072) = func_54(((&g_908 == l_1067) | ((*p_47) > ((*p_47) && (((*p_44) == ((*l_1066) = (0xB1L >= (l_1069 = g_77)))) ^ ((*p_47) >= ((*l_1070) = g_683)))))));

        ;
        if (l_1073)
            continue;
        if ((*l_1066))
            break;
    }
    if ((*p_47))
    {
        int **l_1074 = &g_87;
        unsigned *l_1088 = &g_1046;
        unsigned *l_1091 = (void*)0;
        unsigned *l_1092 = &g_688;
        char *l_1093 = (void*)0;
        char *l_1094 = &g_1095;
        char *l_1096 = &g_1097;
        char *l_1098 = &g_1099;
        int *l_1100 = &g_89;
        (*l_1074) = func_54(l_1069);

        ;
        (*l_1100) &= (safe_mod_func_uint16_t_u_u(func_60((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(((**g_340) < p_45), (safe_mod_func_int16_t_s_s(g_816, ((func_60(l_1083, &g_683) ^ ((*p_44) = g_552)) & (((*l_1098) = ((*l_1096) ^= ((*l_1094) = ((((*l_1092) = (safe_div_func_uint8_t_u_u(((((*l_1088)--) && (0x24L != (**g_351))) ^ 0L), g_298))) <= p_46) ^ g_77)))) > l_1073)))))), p_45)), p_44), p_45));

        ;
    }
    else
    {
        int ****l_1102 = (void*)0;
        int *****l_1101 = &l_1102;
        int l_1128 = (-1L);
        int l_1151 = 0x27C9C682L;
        int l_1165 = 0x62ADCFAAL;
        short l_1187 = 0x4B5CL;
        int l_1215 = (-1L);
        short l_1350 = 0xACF5L;
        unsigned short ****l_1746 = &l_1067;
        const int ***l_1762 = (void*)0;
        const int ****l_1761 = &l_1762;
        const int *****l_1760 = &l_1761;
        const int ******l_1763 = &l_1760;
        int * const ***l_1770 = &g_469;
        int * const ****l_1769 = &l_1770;
        int * const *****l_1768 = &l_1769;
        unsigned short *l_1771 = (void*)0;
        unsigned short *l_1772 = &g_256;
        int *l_1774 = &g_89;
        unsigned short l_1780 = 65527UL;
        if (((l_1101 = (void*)0) == l_1103))
        {
            int *l_1105 = &g_89;
            int *l_1106 = &g_24;
            int *l_1107 = &l_1069;
            int *l_1108 = &g_19;
            int l_1109 = 0x6082F289L;
            int *l_1110 = &g_89;
            int *l_1111 = &g_26;
            int *l_1112 = &l_1109;
            int *l_1113 = &g_24;
            int *l_1114 = &g_19;
            int *l_1115 = &g_89;
            int *l_1116 = (void*)0;
            int *l_1117 = &l_1109;
            int *l_1118 = &g_24;
            int *l_1119 = &g_24;
            int *l_1120 = &l_1069;
            int l_1121 = (-10L);
            int *l_1122 = &g_89;
            int *l_1123 = &l_1121;
            int *l_1124 = &g_89;
            int *l_1125 = (void*)0;
            int *l_1126 = &g_24;
            int *l_1127 = &g_19;
            int *l_1129 = &l_1069;
            int *l_1130 = (void*)0;
            int *l_1131 = &g_19;
            int *l_1132 = &g_19;
            int *l_1133 = (void*)0;
            int *l_1134 = &l_1121;
            int *l_1135 = &g_19;
            int *l_1136 = &g_24;
            int *l_1137 = &g_89;
            int *l_1138 = &g_24;
            int *l_1139 = &g_89;
            int *l_1140 = (void*)0;
            int *l_1141 = (void*)0;
            int *l_1142 = &l_1069;
            int *l_1143 = &g_24;
            int *l_1144 = &g_24;
            int *l_1145 = &l_1109;
            int l_1146 = (-4L);
            int *l_1147 = &l_1109;
            int *l_1148 = &g_89;
            int *l_1149 = &l_1146;
            int *l_1150 = (void*)0;
            int *l_1152 = &l_1121;
            int *l_1153 = (void*)0;
            int *l_1154 = &g_89;
            int *l_1156 = &g_89;
            int *l_1157 = (void*)0;
            int *l_1158 = &l_1069;
            int *l_1159 = &g_26;
            int *l_1160 = (void*)0;
            int *l_1161 = (void*)0;
            int *l_1162 = &l_1109;
            int *l_1163 = &l_1151;
            int *l_1164 = &g_89;
            int *l_1166 = &l_1146;
            int *l_1167 = &g_24;
            int *l_1168 = &g_19;
            int *l_1169 = &l_1069;
            int *l_1170 = &l_1151;
            int *l_1171 = &g_26;
            int *l_1172 = &l_1121;
            int *l_1173 = &l_1165;
            int *l_1174 = &l_1146;
            int *l_1175 = &g_26;
            int *l_1177 = &g_24;
            int *l_1178 = (void*)0;
            int *l_1179 = &l_1109;
            int * const * const * const * const *l_1211 = (void*)0;
            unsigned char *l_1236 = &g_1233;
            char **l_1238 = &l_1237;
            ++g_1180;
            l_1187 |= (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s(((g_1099 <= 0xB0507409L) && func_56(&g_17)), (*l_1158))), g_256));
            for (g_607 = 0; (g_607 == 59); g_607 = safe_add_func_int16_t_s_s(g_607, 7))
            {
                const unsigned l_1198 = 0x03A962D1L;
                int **l_1207 = &l_1171;
                int **l_1208 = &l_1148;
                int l_1214 = (-1L);
                int l_1216 = 0xACC3B839L;
                if (func_56(&g_312))
                {
                    (*l_1147) = (((*l_1118) == ((g_1192 = &l_1113) != (*g_469))) != g_27);

                    ;
                }
                else
                {
                    unsigned char *l_1193 = &g_312;
                    unsigned *l_1200 = (void*)0;
                    unsigned **l_1199 = &l_1200;
                    (*l_1131) = ((*l_1149) = ((*l_1107) = (((*l_1193) = ((*p_44) = (*p_44))) & (func_60((*p_47), &g_816) > 0xC5L))));
                    if ((*p_47))
                        continue;
                    if ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(l_1198, l_1198)), 1)))
                    {
                        (*l_1108) = 1L;
                    }
                    else
                    {
                        unsigned ***l_1201 = (void*)0;
                        unsigned ***l_1202 = &l_1199;
                        int *l_1203 = &l_1146;
                        (*l_1202) = l_1199;
                        if ((*g_87))
                            continue;
                        return l_1200;



                    }
                    for (g_816 = 0; (g_816 >= 21); g_816 = safe_add_func_int32_t_s_s(g_816, 2))
                    {
                        unsigned l_1206 = 0x09DB3076L;
                        if (l_1198)
                            break;
                        if (l_1206)
                            break;
                        (*l_1111) ^= (*g_87);
                    }
                }

                ;
                (*l_1208) = ((*l_1207) = &l_1109);

                ;
                ;
                for (l_1151 = 23; (l_1151 > 13); l_1151 = safe_sub_func_int32_t_s_s(l_1151, 6))
                {
                    int * const * const * const * const **l_1212 = &l_1211;
                    int *l_1213 = &g_24;
                    int l_1217 = 6L;
                    (*l_1177) |= (&l_1104 == ((*l_1212) = l_1211));
                    if ((*g_87))
                    {
                        g_95 = &p_46;

                        ;
                        return l_1213;




                    }
                    else
                    {
                        int *l_1218 = &l_1217;
                        int *l_1219 = &g_19;
                        int *l_1220 = &g_89;
                        int *l_1221 = &g_89;
                        int *l_1222 = &l_1121;
                        int *l_1223 = &l_1217;
                        int *l_1224 = (void*)0;
                        int *l_1225 = (void*)0;
                        int *l_1226 = &l_1214;
                        int *l_1227 = (void*)0;
                        int *l_1228 = &l_1217;
                        int *l_1229 = &l_1128;
                        int l_1230 = 0xA331635AL;
                        int *l_1231 = (void*)0;
                        int *l_1232 = &l_1109;
                        ++g_1233;
                    }
                    (*l_1208) = func_54(func_56(l_1236));

                    ;
                }

                ;
            }

            ;
            ;
            ;
            (*l_1175) &= (((*g_351) = (*g_351)) == ((*l_1238) = l_1237));
        }
        else
        {
            unsigned short l_1239 = 0xC6A8L;
            int l_1249 = (-3L);
            int l_1254 = 3L;
            int *l_1260 = &l_1254;
            unsigned l_1329 = 6UL;
            int l_1400 = 1L;
            int l_1401 = 0xA643DCFFL;
            int l_1539 = 1L;
            unsigned short * const *l_1643 = (void*)0;
            if (l_1239)
            {
                unsigned short l_1240 = 0x746CL;
                int *l_1241 = &l_1215;
                (*l_1241) = l_1240;
            }
            else
            {
                unsigned char l_1253 = 0x60L;
                int *l_1256 = &g_26;
                short l_1345 = 0x34D9L;
                int l_1506 = (-1L);
                int l_1602 = (-1L);
                int l_1616 = 0L;
                int l_1648 = 0xF37A85B3L;
                unsigned *l_1741 = &g_1633;
                unsigned short ** const *l_1745 = (void*)0;
                unsigned short ** const **l_1744 = &l_1745;
                int ***l_1751 = (void*)0;
                for (g_27 = 25; (g_27 >= (-9)); g_27 = safe_sub_func_int8_t_s_s(g_27, 7))
                {
                    short l_1259 = 0xEB7BL;
                    unsigned char **l_1262 = (void*)0;
                    unsigned char *l_1264 = &g_17;
                    unsigned char **l_1263 = &l_1264;
                    int l_1298 = 0xC741F419L;
                    unsigned short *l_1336 = &g_607;
                    int *l_1427 = &l_1293;
                    int l_1510 = 0xCB263C3FL;
                    int l_1533 = 0x30ED7A73L;
                    int l_1589 = 1L;
                }
                for (g_27 = 20; (g_27 != (-7)); g_27 = safe_sub_func_int32_t_s_s(g_27, 2))
                {
                    unsigned l_1638 = 0xAF3BFA72L;
                    unsigned short **l_1647 = &g_341;
                    int l_1655 = 0x7344B050L;
                    int l_1700 = 1L;
                    int l_1714 = 0L;
                    l_1638 = (((*l_1062) ^= p_46) || (((*l_1256) & (*g_352)) < 0x38D4E32DL));
                }
                l_1400 &= (safe_div_func_uint32_t_u_u(((*l_1741) = p_46), ((1L & ((l_1744 != l_1746) < (*p_44))) | (safe_div_func_int16_t_s_s(g_236, (safe_rshift_func_uint16_t_u_s(((*l_1256) <= (*l_1260)), ((*l_1062) = (*l_1260)))))))));
                (*l_1256) &= (((p_45 != ((void*)0 == &l_1067)) | (l_1751 != (*l_1104))) >= ((l_1751 != (void*)0) != (--(*p_44))));
            }
        }

        ;

        (*l_1774) |= ((safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u((((*l_1237) &= (safe_mod_func_uint16_t_u_u((**g_340), ((&l_1102 != ((*l_1763) = l_1760)) | ((*p_44) = (65535UL | ((p_45 && (((void*)0 != &p_46) || (safe_add_func_uint16_t_u_u(((*l_1772) |= ((void*)0 != l_1768)), p_46)))) == l_1773))))))) & g_607), 5)) ^ p_46) | 255UL), (**g_351))) && 2L);
        (*l_1774) &= (*p_47);
        for (l_1293 = 0; (l_1293 != 1); l_1293++)
        {
            int *l_1779 = &g_1568;
            int *l_1788 = &g_1568;
            const int **l_1805 = &g_95;
            if ((*p_47))
            {
                int *l_1777 = &l_1389;
                int *l_1778 = &l_1293;
                return l_1779;



            }
            else
            {
                int *l_1790 = &l_1389;
                unsigned char l_1796 = 7UL;
                l_1780--;
                (*l_1779) = (*l_1779);
                if ((*p_47))
                {
                    unsigned *l_1787 = &g_1736;
                    int l_1789 = 8L;
                    (*l_1774) = (l_1789 |= (safe_mod_func_uint8_t_u_u(func_51(((*l_1787) |= (safe_rshift_func_int8_t_s_u(((void*)0 != l_1062), 2))), l_1788), p_46)));


                    (*l_1774) = 0x44046E67L;
                    return l_1788;



                }
                else
                {
                    const int **l_1791 = (void*)0;
                    const int **l_1792 = &g_95;
                    l_1793 = ((*l_1792) = &p_46);

                    ;
                    ;
                    (*l_1779) = ((*l_1774) = ((safe_div_func_int16_t_s_s(l_1796, ((*l_1779) || (safe_mul_func_uint16_t_u_u(p_45, (1L < (((*l_1788) ^ p_46) && p_46))))))) <= (safe_rshift_func_uint16_t_u_u(((*p_44) ^ 0x17L), p_46))));
                }

                ;
                ;
                if ((*p_47))
                    break;
            }

            ;
            ;
            if ((*l_1779))
                continue;
            if (((safe_sub_func_int32_t_s_s((*p_47), (p_46 | ((*l_1062) = (-3L))))) ^ (l_1774 != p_47)))
            {
                (*l_1774) = ((*l_1779) |= (p_46 | l_1803));
            }
            else
            {
                const unsigned l_1804 = 0x7831A10FL;
                l_1600 ^= l_1804;
                if ((*p_47))
                    continue;
                if ((*g_95))
                    break;
            }
            (*l_1805) = &p_46;
        }

        ;
        ;
    }

    ;

    ;
    return &g_24;



}







static short func_51(unsigned p_52, int * p_53)
{
    unsigned l_259 = 0xFB87D1E3L;
    int **l_275 = &g_87;
    int ***l_274 = &l_275;
    int l_290 = (-8L);
    unsigned char *l_306 = &g_17;
    int l_360 = 0L;
    unsigned l_400 = 0x190524C4L;
    unsigned short ** const l_406 = &g_341;
    short *l_463 = &g_27;
    int l_575 = 0L;
    int l_733 = 8L;
    const int *l_1053 = (void*)0;
    int l_1059 = 0x5565A14CL;
    if ((((*p_53) = (-6L)) == p_52))
    {
        unsigned char *l_282 = &g_17;
        const int l_285 = 0xCCF6E19BL;
        int l_287 = 0L;
        int l_289 = 0x04652DBFL;
        int *l_291 = &g_89;
        int *l_292 = &g_24;
        int l_293 = 0xA15C47ABL;
        int *l_294 = &g_26;
        int *l_295 = &g_19;
        int *l_296 = &l_293;
        int l_297 = 0x2BCAE1E1L;
        unsigned short *l_301 = &g_298;
        ++l_259;
        for (p_52 = 0; (p_52 < 23); p_52 = safe_add_func_int8_t_s_s(p_52, 1))
        {
            int ****l_277 = (void*)0;
            int ****l_278 = (void*)0;
            int ****l_279 = &g_276;
            char *l_286 = (void*)0;
            char *l_288 = &g_77;
            l_289 ^= ((*p_53) = (safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((*l_288) = (l_287 = (safe_add_func_uint16_t_u_u((l_259 > (safe_rshift_func_uint8_t_u_u((l_274 != ((*l_279) = g_276)), (safe_mod_func_uint16_t_u_u((func_56(l_282) >= (p_52 && (~0x95BFAE32L))), (safe_lshift_func_uint8_t_u_u(((0xF2D6L & (g_256 & p_52)) & g_24), l_285))))))), g_236)))) && 0x77L), g_27)), p_52)), g_256)));

            ;
            (*l_275) = (void*)0;

            ;
        }
        ++g_298;
        (*l_291) = ((((*l_301)--) || 0UL) < ((*p_53) | p_52));
    }
    else
    {
        unsigned char **l_307 = &l_306;
        int *l_309 = &g_24;
        unsigned char *l_310 = (void*)0;
        unsigned char *l_311 = &g_312;
        unsigned l_337 = 1UL;
        unsigned short **l_363 = &g_341;
        short l_367 = (-8L);
        unsigned l_395 = 0xAD67A6C1L;
        if ((safe_rshift_func_uint8_t_u_u((g_308 &= func_56(((*l_307) = l_306))), ((*l_311) |= (((l_309 != (void*)0) <= (6UL == ((*l_309) != (-1L)))) != g_256)))))
        {
            unsigned l_334 = 0xF2194A6FL;
            unsigned l_357 = 0x1DD9ACFFL;
            unsigned char **l_364 = &l_310;
            if (((*p_53) = 0xF555B329L))
            {
                return (**l_275);
            }
            else
            {
                short l_316 = (-5L);
                char *l_345 = &g_77;
                char ** const l_344 = &l_345;
                unsigned *l_346 = &l_334;
                const char ***l_354 = &g_353;
                for (g_77 = 4; (g_77 > 6); ++g_77)
                {
                    int *l_315 = &g_26;
                    int *l_317 = (void*)0;
                    int *l_318 = &g_24;
                    int *l_319 = &g_24;
                    int *l_320 = &g_89;
                    int *l_321 = &g_19;
                    int *l_322 = &g_19;
                    int *l_323 = &g_26;
                    int *l_324 = &g_89;
                    int *l_325 = &g_89;
                    int *l_326 = &g_24;
                    int *l_327 = &g_26;
                    int l_328 = 0x071E4365L;
                    int *l_329 = &l_290;
                    int *l_330 = &g_24;
                    int *l_331 = &l_290;
                    int *l_332 = &g_26;
                    int *l_333 = (void*)0;
                    l_334--;
                    (*l_323) = l_337;
                    for (g_19 = 19; (g_19 >= 29); g_19 = safe_add_func_uint8_t_u_u(g_19, 4))
                    {
                        unsigned short **l_343 = &g_341;
                        unsigned short ***l_342 = &l_343;
                        (*l_342) = g_340;
                    }
                }
                (*l_309) = (*p_53);
                (*p_53) = 1L;
                (*l_309) = (((*l_346) &= (((void*)0 == l_344) | (**l_275))) < (safe_sub_func_int8_t_s_s(g_81, (safe_sub_func_int32_t_s_s((g_351 == ((*l_354) = g_353)), ((0x3C06L || (((((safe_sub_func_uint8_t_u_u(((g_17 >= (*p_53)) | p_52), 0x13L)) >= l_316) & p_52) < l_357) <= 0x54L)) == (*g_95)))))));
            }
            (*g_87) = (safe_add_func_uint8_t_u_u(((**l_307) |= g_298), ((l_360 | (safe_rshift_func_uint8_t_u_u((((void*)0 != l_363) <= (((*l_364) = &g_312) != &g_312)), 2))) | 5L)));

            ;
            (*l_275) = p_53;

            ;
        }
        else
        {
            int *l_365 = &g_24;
            int *l_366 = &g_26;
            int *l_368 = (void*)0;
            int *l_369 = (void*)0;
            int *l_370 = (void*)0;
            int *l_371 = &l_360;
            int *l_372 = &g_24;
            int *l_373 = &l_290;
            int *l_374 = (void*)0;
            int *l_375 = &g_19;
            int *l_376 = (void*)0;
            int *l_377 = &g_19;
            int *l_378 = &l_360;
            int *l_379 = &g_89;
            int *l_380 = (void*)0;
            int *l_381 = (void*)0;
            int *l_382 = (void*)0;
            int *l_383 = &g_89;
            int *l_384 = &l_290;
            int *l_385 = (void*)0;
            int *l_386 = &g_26;
            int *l_387 = &l_360;
            int l_388 = (-1L);
            int *l_389 = &g_26;
            int *l_390 = &l_290;
            int *l_391 = &g_26;
            int *l_392 = (void*)0;
            int *l_393 = (void*)0;
            int *l_394 = &l_290;
            ++l_395;
        }

        ;
        ;
        (*g_87) = (safe_rshift_func_int16_t_s_s(l_400, (safe_sub_func_uint32_t_u_u((~p_52), (g_89 ^ (-7L))))));
        if ((p_53 != (void*)0))
        {
            int l_405 = 0L;
            (**l_275) = (&l_337 == g_95);
            if ((safe_sub_func_int16_t_s_s(p_52, (l_405 < l_405))))
            {
                unsigned short ***l_407 = &l_363;
                (*l_407) = l_406;
            }
            else
            {
                g_87 = p_53;
            }
        }
        else
        {
            return p_52;
        }
        (*p_53) = func_60((*p_53), &g_312);

        ;
    }
    for (g_89 = 0; (g_89 < (-6)); --g_89)
    {
        unsigned l_417 = 0xD18F8EADL;
        char l_428 = (-4L);
        int l_488 = 8L;
        int l_567 = 0xFA6B8BF1L;
        int l_572 = 0x9B3B63D6L;
        int *l_695 = (void*)0;
        int l_752 = 0xCBD41997L;
        int l_757 = (-1L);
        char l_833 = 9L;
        int *l_912 = (void*)0;
        unsigned short l_927 = 0UL;
        for (g_26 = (-28); (g_26 >= (-13)); g_26++)
        {
            int *l_412 = &g_24;
            int *l_413 = &g_19;
            int *l_414 = &l_290;
            int *l_415 = &g_19;
            int *l_416 = &l_360;
            l_417++;
            for (l_417 = 0; (l_417 < 32); l_417 = safe_add_func_uint16_t_u_u(l_417, 4))
            {
                for (g_81 = (-19); (g_81 >= (-24)); g_81 = safe_sub_func_uint32_t_u_u(g_81, 1))
                {
                    return (*l_415);


                }
                (*l_414) = (safe_div_func_uint16_t_u_u(p_52, p_52));
            }
            if ((*l_413))
                break;
            (*l_275) = l_414;

            ;
        }


        if ((*p_53))
        {
            unsigned char *l_431 = &g_312;
            int l_432 = 0xDFD013E8L;
            (*p_53) = (safe_mod_func_int16_t_s_s(l_428, (safe_add_func_uint32_t_u_u(func_60((*g_95), l_431), (-7L)))));

            ;
            (**l_275) = 0x568F5A85L;
            (*p_53) = (l_432 || (*p_53));
            for (l_428 = 28; (l_428 != 16); l_428 = safe_sub_func_uint8_t_u_u(l_428, 3))
            {
                unsigned short l_453 = 0x7E94L;
                if (l_432)
                    break;
                for (l_259 = 0; (l_259 == 38); l_259++)
                {
                    int *l_437 = &l_432;
                    int *l_438 = &g_24;
                    int *l_439 = &l_290;
                    int *l_440 = &l_360;
                    int *l_441 = (void*)0;
                    int *l_442 = &g_19;
                    int *l_443 = &g_19;
                    int *l_444 = &g_19;
                    int *l_445 = (void*)0;
                    int *l_446 = &g_26;
                    int *l_447 = &l_432;
                    int *l_448 = (void*)0;
                    int *l_449 = (void*)0;
                    int *l_450 = (void*)0;
                    int *l_451 = &l_360;
                    int *l_452 = (void*)0;
                    l_453--;
                }
            }
        }
        else
        {
            int l_467 = 1L;
            int l_471 = 1L;
            int l_517 = 0xDB37E611L;
            int l_546 = 0xC5604E1AL;
            int l_604 = 0xF4DC4D79L;
            unsigned char *l_654 = (void*)0;
            unsigned char *l_691 = &g_650;
            int l_694 = (-8L);
            int l_735 = 0L;
            int *l_783 = &g_24;
            int *l_784 = &l_735;
            int *l_785 = (void*)0;
            int *l_786 = &l_575;
            int *l_787 = &l_546;
            int *l_788 = &l_567;
            int *l_789 = (void*)0;
            int *l_790 = (void*)0;
            int *l_791 = &l_471;
            int *l_792 = &l_290;
            int *l_793 = &l_517;
            int *l_794 = &g_26;
            int *l_795 = (void*)0;
            int *l_796 = &g_19;
            int *l_797 = (void*)0;
            int *l_798 = &l_735;
            int *l_799 = &g_26;
            int *l_800 = &l_290;
            int *l_801 = (void*)0;
            int *l_802 = &l_575;
            int *l_803 = &l_546;
            int *l_804 = &l_546;
            int *l_805 = (void*)0;
            int *l_806 = &l_290;
            int *l_807 = &g_26;
            int *l_808 = &l_752;
            int *l_809 = &l_752;
            int *l_810 = &l_735;
            int *l_811 = &g_26;
            int *l_812 = &l_757;
            int *l_813 = &l_572;
            int *l_814 = &l_604;
            int *l_815 = &l_517;
            for (g_81 = (-19); (g_81 >= (-18)); g_81 = safe_add_func_int8_t_s_s(g_81, 1))
            {
                short *l_462 = &g_79;
                short **l_464 = (void*)0;
                short **l_465 = (void*)0;
                short **l_466 = &l_463;
                int ****l_468 = &g_276;
                int l_500 = 8L;
                int l_513 = 1L;
                int l_527 = (-1L);
                int l_573 = (-3L);
                int *l_696 = &l_513;
                int *l_697 = &l_573;
                int *l_698 = &g_24;
                int *l_699 = (void*)0;
                int *l_700 = &g_26;
                int *l_701 = &g_19;
                int *l_702 = &l_527;
                int *l_703 = &l_546;
                int *l_704 = &l_546;
                int *l_705 = &l_567;
                int *l_706 = &l_488;
                int *l_707 = &l_573;
                int *l_708 = &l_567;
                int *l_709 = (void*)0;
                int *l_710 = &l_471;
                int *l_711 = &l_513;
                int *l_712 = (void*)0;
                int *l_713 = &l_360;
                int *l_714 = (void*)0;
                int *l_716 = &l_471;
                int *l_717 = (void*)0;
                int *l_718 = &g_26;
                int *l_719 = (void*)0;
                int *l_720 = &l_527;
                int *l_721 = &l_546;
                int *l_722 = &g_19;
                int *l_723 = &l_567;
                int *l_724 = (void*)0;
                int *l_725 = (void*)0;
                int *l_726 = &g_19;
                int *l_727 = &g_19;
                int *l_728 = &l_513;
                int *l_729 = &l_572;
                int *l_730 = &l_513;
                int *l_731 = &l_573;
                int *l_732 = &l_290;
                int *l_736 = &l_488;
                int *l_737 = (void*)0;
                int *l_738 = &l_604;
                int *l_739 = &l_573;
                int *l_740 = &l_567;
                int *l_741 = &l_735;
                int *l_742 = &l_575;
                int *l_743 = &l_500;
                int *l_744 = (void*)0;
                int *l_745 = &g_26;
                int *l_746 = &l_733;
                int *l_747 = (void*)0;
                int *l_748 = &l_735;
                int *l_749 = &l_517;
                int *l_750 = &l_527;
                int *l_751 = (void*)0;
                int *l_753 = &l_546;
                int *l_754 = (void*)0;
                int *l_755 = &l_546;
                int *l_756 = &l_546;
                int *l_758 = (void*)0;
                int *l_759 = &l_290;
                int *l_760 = &l_573;
                int *l_761 = &g_19;
                unsigned *l_771 = (void*)0;
            }
            if (func_60((func_60((*g_95), &g_650) ^ l_546), l_306))
            {
                unsigned short * const *l_781 = (void*)0;
                unsigned short * const **l_780 = &l_781;
                int *l_782 = &l_575;
                (*l_782) ^= (((***l_274) = g_236) ^ (((*l_780) = (void*)0) == l_406));
            }
            else
            {
                (*p_53) = l_417;
                (*l_275) = p_53;

                ;
            }

            ;
            g_816++;
        }

        ;
        for (g_607 = 0; (g_607 != 37); g_607 = safe_add_func_uint8_t_u_u(g_607, 4))
        {
            unsigned char *l_821 = &g_17;
            int l_828 = 0xF8BF9513L;
            int *l_829 = &l_360;
            int l_830 = 0L;
            int l_891 = 0x30DF48D2L;
            const int ** const *l_903 = &g_94;
            const int ** const **l_902 = &l_903;
            unsigned short **l_906 = &g_341;
            unsigned short ***l_905 = &l_906;
            if ((l_830 ^= ((*l_829) = (252UL ^ ((4294967295UL ^ (((*p_53) = func_60((*g_95), l_821)) == (p_52 | (safe_mod_func_uint32_t_u_u((p_52 || (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u(0xD5L, (l_828 < g_762))) ^ 3L), 15))), 0x8E9D4F16L))))) >= (*g_341))))))
            {
                char l_834 = 0xDAL;
                int *****l_897 = (void*)0;
                int *****l_898 = (void*)0;
                int *****l_899 = (void*)0;
                int ****l_901 = &g_276;
                int *****l_900 = &l_901;
                const int ** const ***l_904 = &l_902;
                unsigned short ****l_909 = (void*)0;
                unsigned short ****l_910 = &g_907;
                unsigned char **l_911 = &l_306;
                int l_913 = 6L;
                int l_916 = (-1L);
                for (g_24 = 0; (g_24 >= 8); ++g_24)
                {
                    int *l_835 = &l_733;
                    int *l_836 = &l_572;
                    int l_837 = (-8L);
                    int *l_838 = &g_26;
                    int *l_839 = (void*)0;
                    int *l_840 = &l_572;
                    int *l_841 = &l_572;
                    int *l_842 = (void*)0;
                    int *l_843 = &l_567;
                    int *l_844 = &l_575;
                    int *l_845 = &l_488;
                    int *l_846 = &l_733;
                    int *l_847 = (void*)0;
                    int *l_848 = &l_290;
                    int *l_849 = &l_575;
                    int *l_850 = &g_26;
                    int *l_851 = (void*)0;
                    int *l_852 = &l_733;
                    int *l_853 = &l_360;
                    int *l_854 = &l_830;
                    int *l_855 = &l_290;
                    int *l_856 = (void*)0;
                    int *l_857 = &g_26;
                    int *l_858 = &g_19;
                    int *l_859 = &l_567;
                    int *l_860 = &l_837;
                    int l_861 = 1L;
                    int *l_862 = (void*)0;
                    int *l_863 = &l_828;
                    int *l_864 = &l_828;
                    int *l_865 = &l_360;
                    int *l_866 = &g_26;
                    int *l_867 = &l_752;
                    int l_868 = 0xD4CECA91L;
                    int *l_869 = &l_837;
                    int *l_870 = &l_733;
                    int *l_871 = &g_26;
                    int *l_872 = (void*)0;
                    int *l_873 = &l_567;
                    int *l_874 = &l_752;
                    int *l_875 = &g_26;
                    int *l_876 = (void*)0;
                    int *l_877 = &l_828;
                    int *l_878 = &l_575;
                    int *l_879 = &l_861;
                    int *l_880 = &l_572;
                    int *l_881 = &l_861;
                    int *l_882 = &l_572;
                    int *l_883 = (void*)0;
                    int *l_884 = &l_290;
                    int *l_885 = &l_360;
                    int *l_886 = &l_290;
                    int *l_887 = (void*)0;
                    int *l_888 = (void*)0;
                    int *l_889 = &l_572;
                    int *l_890 = &l_572;
                    int *l_892 = &l_567;
                    int *l_893 = &l_572;
                    --g_894;
                }
                (***l_274) = (((*l_900) = (void*)0) == ((*l_904) = l_902));

                ;
                (*p_53) = (l_905 != ((*l_910) = g_907));
                if (func_60((*p_53), ((*l_911) = l_821)))
                {
                    int *l_914 = &l_757;
                    int *l_915 = &g_24;
                    int *l_917 = &l_752;
                    int *l_918 = &l_488;
                    int *l_919 = &l_290;
                    int *l_920 = &l_913;
                    int *l_921 = &l_913;
                    int *l_922 = &l_290;
                    int *l_923 = &l_828;
                    int *l_924 = &l_290;
                    int *l_925 = &l_830;
                    int *l_926 = &l_830;
                    l_912 = p_53;

                    ;
                    ++l_927;
                    (**l_274) = p_53;

                    ;
                }
                else
                {
                    if ((*p_53))
                        break;
                }

                ;
            }
            else
            {
                p_53 = ((**l_274) = p_53);

                ;
            }
            for (g_762 = 0; (g_762 > 18); g_762 = safe_add_func_uint8_t_u_u(g_762, 4))
            {
                unsigned short l_943 = 0x62FDL;
                int l_948 = 0xD8A2B8D3L;
                int l_980 = 0x5BCAAE95L;
            }
            (*l_829) ^= (safe_add_func_int32_t_s_s(((*g_87) = 0x6E4AA0FAL), g_715));
            for (g_762 = 0; (g_762 < 17); g_762 = safe_add_func_int32_t_s_s(g_762, 7))
            {
                int *l_1008 = &l_891;
                int *l_1009 = (void*)0;
                int *l_1010 = &l_488;
                int *l_1011 = &l_575;
                int *l_1012 = &l_752;
                int *l_1013 = (void*)0;
                int *l_1014 = &l_757;
                int l_1015 = 0x4BD24334L;
                int *l_1016 = (void*)0;
                int *l_1017 = (void*)0;
                int *l_1018 = &g_26;
                int *l_1019 = &l_488;
                int *l_1020 = &l_1015;
                int *l_1021 = &g_26;
                int *l_1022 = &l_572;
                int *l_1023 = &l_290;
                int *l_1024 = &l_1015;
                int *l_1025 = &l_360;
                int *l_1026 = &l_891;
                int *l_1027 = &g_19;
                int *l_1028 = &l_360;
                int *l_1029 = &l_830;
                int *l_1030 = &g_26;
                int *l_1031 = &l_752;
                int *l_1032 = &l_733;
                int *l_1033 = &l_360;
                int *l_1034 = &g_26;
                int *l_1035 = &l_757;
                int *l_1036 = &l_567;
                int *l_1037 = &l_290;
                int *l_1038 = &g_26;
                int *l_1039 = &l_757;
                int *l_1040 = &l_575;
                int *l_1041 = (void*)0;
                int *l_1042 = &l_830;
                int *l_1043 = (void*)0;
                int *l_1044 = (void*)0;
                int *l_1045 = &l_290;
                --g_1046;
                (*l_1021) = (***l_274);
            }
        }

        ;
        (*g_87) = ((safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s(0L, (g_89 || ((((void*)0 == l_1053) | (safe_sub_func_int32_t_s_s((*g_87), (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((!g_715) > ((p_52 | (((**g_340) = ((*g_352) > (8UL | 0x4612L))) > l_1059)) && 9L)))), 0x547DL))))) <= 0x427DAAF3L)))), g_24)) || p_52);
    }


    return g_894;
}







static int * func_54(int p_55)
{
    short l_125 = 3L;
    char *l_128 = &g_77;
    int l_151 = 0x39B2FD4BL;
    int l_156 = 0x1A119B85L;
    int l_173 = (-4L);
    int l_181 = 0x08C96F5FL;
    int l_205 = 3L;
    int l_209 = 0x0BB848F3L;
    int l_222 = 1L;
    int l_233 = 0x032B9FEBL;
    char l_243 = 1L;
    if (func_56(&g_17))
    {
        return &g_19;


    }
    else
    {
        short *l_122 = &g_81;
        char *l_130 = &g_77;
        char **l_129 = &l_130;
        int l_131 = 0x392DDE99L;
        short *l_132 = &g_79;
        int *l_133 = &g_89;
        int *l_134 = &g_19;
        int *l_135 = &g_19;
        int *l_136 = &g_19;
        int *l_137 = &g_19;
        int *l_138 = &g_89;
        int *l_139 = &g_89;
        int *l_140 = &g_89;
        int *l_141 = (void*)0;
        int *l_142 = &g_19;
        int *l_143 = &l_131;
        int *l_144 = &g_24;
        int *l_145 = &l_131;
        int *l_146 = (void*)0;
        int *l_147 = &g_89;
        int *l_148 = &g_89;
        int *l_149 = &g_89;
        int *l_150 = &g_19;
        int *l_152 = &g_26;
        int *l_153 = &g_26;
        int *l_154 = &l_151;
        int *l_155 = &g_89;
        int *l_157 = &g_19;
        int *l_158 = &l_151;
        int *l_159 = (void*)0;
        int *l_160 = &l_131;
        int *l_161 = (void*)0;
        int *l_162 = &g_24;
        int *l_163 = (void*)0;
        int *l_164 = (void*)0;
        int *l_165 = &l_151;
        int *l_166 = &l_156;
        int *l_167 = &l_131;
        int *l_168 = &g_24;
        int *l_169 = &g_24;
        int *l_170 = &g_24;
        int l_171 = 1L;
        int l_172 = 0x3389D4FEL;
        int *l_174 = (void*)0;
        int *l_175 = &g_89;
        int *l_176 = &g_19;
        int *l_177 = &g_19;
        int *l_178 = &l_173;
        int *l_179 = &g_26;
        int *l_180 = &l_151;
        int *l_182 = &g_89;
        int *l_183 = &g_89;
        int *l_184 = &l_156;
        int *l_185 = (void*)0;
        int *l_186 = &g_26;
        int *l_187 = &l_173;
        int *l_188 = &l_131;
        int *l_189 = &g_89;
        int *l_190 = (void*)0;
        int *l_191 = &g_24;
        int l_192 = 0xE543FC1EL;
        int *l_193 = &l_192;
        int *l_194 = &l_173;
        int *l_195 = (void*)0;
        int *l_196 = &l_151;
        int *l_197 = &l_181;
        int *l_198 = &l_173;
        int l_199 = 0x731B4BD6L;
        int *l_200 = &l_151;
        int *l_201 = &l_192;
        int *l_202 = &l_199;
        int *l_203 = &l_172;
        int *l_204 = &g_26;
        int *l_206 = (void*)0;
        int *l_207 = &g_24;
        int *l_208 = &l_131;
        int *l_210 = &l_156;
        int *l_211 = &l_192;
        int *l_212 = &l_131;
        int *l_213 = &l_171;
        int *l_214 = &l_192;
        int *l_215 = &l_209;
        int *l_216 = &l_151;
        int *l_217 = &l_131;
        int *l_218 = (void*)0;
        int *l_219 = (void*)0;
        int *l_220 = &l_131;
        int *l_221 = (void*)0;
        int *l_223 = &l_192;
        int *l_224 = &l_181;
        int *l_225 = &l_222;
        int *l_226 = &l_222;
        int *l_227 = (void*)0;
        int l_228 = 0x99DCED91L;
        int *l_229 = &l_156;
        int *l_230 = &l_181;
        int *l_231 = &l_151;
        int l_232 = (-5L);
        int *l_234 = &l_222;
        int *l_235 = &l_232;
        int *l_237 = &l_173;
        int *l_238 = &g_19;
        int *l_239 = &l_181;
        int *l_240 = &l_171;
        int *l_241 = &l_228;
        int *l_242 = &g_24;
        int *l_244 = &l_173;
        int *l_245 = (void*)0;
        int *l_246 = &g_24;
        int *l_247 = (void*)0;
        int *l_248 = &g_24;
        int *l_249 = &l_199;
        int *l_250 = &l_156;
        int *l_251 = &l_228;
        int l_252 = (-10L);
        int *l_253 = &l_199;
        int *l_254 = &l_151;
        int l_255 = 0L;
        (*l_133) ^= (g_93 < (((*l_122) = p_55) == (safe_mod_func_int16_t_s_s((0x34L && g_93), ((l_125 | (safe_mod_func_uint16_t_u_u(((l_128 != ((*l_129) = l_128)) & ((((*l_132) = l_131) & 0x9BA4L) > 0xFB7AL)), g_19))) && p_55)))));
        --g_256;
        (*l_188) = (-5L);
        (*l_193) = (*g_95);
    }

    ;
    ;
    (*g_87) = l_125;
    return &g_26;


}







static int func_56(unsigned char * p_57)
{
    unsigned l_67 = 4294967295UL;
    char *l_76 = &g_77;
    short *l_78 = &g_79;
    short *l_80 = &g_81;
    int l_82 = (-3L);
    short l_83 = 0x8855L;
    int *l_88 = &g_89;
    const int *l_92 = &g_93;
    const int **l_91 = &l_92;
    const int ***l_90 = &l_91;
    int l_100 = 0x172C66C3L;
    int * const l_119 = (void*)0;
    unsigned l_121 = 0xF345D263L;
    (*l_88) ^= (safe_rshift_func_uint16_t_u_s(func_60((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((l_67 < ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((l_82 = (((safe_div_func_int32_t_s_s(((((*l_80) = ((safe_rshift_func_int8_t_s_u(6L, (*p_57))) | ((l_67 & ((*l_78) = (((*l_76) |= (3UL < g_24)) < g_2))) != g_19))) != 65528UL) && 0x9347L), g_26)) != 1UL) < g_19)), l_67)) <= l_67), l_83)) == g_27)), 1)) ^ 0x2AA0L), 6L)), p_57), l_83));

    ;
    g_94 = ((*l_90) = (void*)0);

    ;
    ;
    for (g_17 = (-24); (g_17 == 26); ++g_17)
    {
        char l_106 = 7L;
        int **l_117 = &l_88;
        int ***l_116 = &l_117;
        int ****l_118 = &l_116;
        int **l_120 = &l_88;
    }
    return l_121;
}







static unsigned short func_60(int p_61, unsigned char * p_62)
{
    short *l_84 = (void*)0;
    int *l_85 = &g_19;
    int *l_86 = &g_26;
    (*l_86) = ((*l_85) = (g_77 < (l_84 == &g_27)));
    g_87 = &g_19;

    ;
    return p_61;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_650, "g_650", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_989, "g_989", print_hash_value);
    transparent_crc(g_998, "g_998", print_hash_value);
    transparent_crc(g_1046, "g_1046", print_hash_value);
    transparent_crc(g_1095, "g_1095", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    transparent_crc(g_1155, "g_1155", print_hash_value);
    transparent_crc(g_1176, "g_1176", print_hash_value);
    transparent_crc(g_1180, "g_1180", print_hash_value);
    transparent_crc(g_1233, "g_1233", print_hash_value);
    transparent_crc(g_1358, "g_1358", print_hash_value);
    transparent_crc(g_1424, "g_1424", print_hash_value);
    transparent_crc(g_1497, "g_1497", print_hash_value);
    transparent_crc(g_1503, "g_1503", print_hash_value);
    transparent_crc(g_1507, "g_1507", print_hash_value);
    transparent_crc(g_1568, "g_1568", print_hash_value);
    transparent_crc(g_1569, "g_1569", print_hash_value);
    transparent_crc(g_1588, "g_1588", print_hash_value);
    transparent_crc(g_1606, "g_1606", print_hash_value);
    transparent_crc(g_1633, "g_1633", print_hash_value);
    transparent_crc(g_1713, "g_1713", print_hash_value);
    transparent_crc(g_1736, "g_1736", print_hash_value);
    transparent_crc(g_1918, "g_1918", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
