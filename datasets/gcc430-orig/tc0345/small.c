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



static unsigned char g_5 = 0xD8L;
static unsigned short g_16 = 0xFA14L;
static volatile unsigned short g_31 = 0xDE9AL;
static volatile unsigned short *g_30 = &g_31;
static unsigned short g_45 = 4UL;
static volatile int g_69 = (-1L);
static volatile int *g_68 = &g_69;
static int g_73 = 0x0D30663BL;
static int *g_74 = &g_73;
static unsigned short *g_90 = (void*)0;
static unsigned short **g_89 = &g_90;
static int g_95 = (-8L);
static int g_96 = 0xD4FCE62BL;
static int g_99 = 1L;
static unsigned short g_115 = 0x5D99L;
static const unsigned short g_118 = 65535UL;
static char g_143 = (-1L);
static int g_165 = 1L;
static unsigned g_168 = 0x03A3F672L;
static unsigned char g_221 = 255UL;
static char g_334 = 0xB4L;
static unsigned char g_335 = 0x64L;
static char g_341 = 0xB4L;
static unsigned short g_415 = 0x0407L;
static volatile short g_470 = 0x3127L;
static volatile short *g_469 = &g_470;
static volatile short **g_468 = &g_469;
static const int g_481 = (-9L);
static int g_486 = 0x0ADE143DL;
static int * const *g_501 = (void*)0;
static unsigned g_585 = 9UL;
static short g_662 = 0L;
static char g_663 = 0x68L;
static unsigned short g_694 = 0x1B60L;
static char g_714 = 0x2AL;
static char g_715 = 0x1AL;
static unsigned g_716 = 4294967295UL;
static int g_780 = 0x80D69E3DL;
static unsigned char g_786 = 1UL;
static unsigned char g_905 = 0x48L;
static char g_1035 = 0x1EL;
static unsigned short g_1044 = 0x29A3L;
static int g_1055 = 5L;
static char * const g_1093 = &g_714;
static char * const * const g_1092 = &g_1093;
static unsigned g_1187 = 0x25F4D6A5L;
static short g_1196 = 0L;
static short *g_1195 = &g_1196;
static short * const *g_1194 = &g_1195;
static short * const **g_1193 = &g_1194;
static unsigned g_1302 = 0x9808F268L;
static volatile unsigned *g_1375 = (void*)0;
static volatile unsigned **g_1374 = &g_1375;
static short g_1555 = 0xC6B1L;
static volatile char g_1608 = (-1L);
static char g_1659 = 0xF4L;
static int g_1662 = 0x9A789677L;
static volatile unsigned g_1716 = 4294967287UL;
static char *g_1722 = (void*)0;
static char **g_1721 = &g_1722;
static char g_1850 = 0x44L;
static unsigned g_1871 = 0xC0CE26CBL;
static int *g_1880 = (void*)0;
static char ***g_1922 = &g_1721;



static unsigned short func_1(void);
static const int func_2(const unsigned p_3, unsigned short p_4);
static char func_8(unsigned short p_9, int p_10, unsigned short p_11, unsigned p_12, unsigned p_13);
static unsigned func_21(unsigned short * p_22, int p_23, unsigned short * p_24, unsigned short * p_25, int p_26);
static unsigned short * func_27(unsigned p_28, char p_29);
static unsigned short func_38(int p_39, unsigned short * p_40, char p_41);
static unsigned short * func_42(unsigned short * p_43);
static int * const func_47(unsigned short * p_48, int * p_49, unsigned p_50, int p_51);
static unsigned short * func_52(unsigned p_53, unsigned short p_54);
static unsigned short func_55(short p_56, unsigned p_57, unsigned short ** p_58, char p_59, int * const p_60);
static unsigned short func_1(void)
{
    int l_14 = 0x9869EC42L;
    unsigned short *l_15 = &g_16;
    short l_19 = 1L;
    char l_20 = (-5L);
    char ****l_1921 = (void*)0;
    char *l_1926 = &g_1850;
    char ** const l_1925 = &l_1926;
    char ** const *l_1924 = &l_1925;
    char ** const **l_1923 = &l_1924;
    unsigned *l_1927 = &g_1187;
    int **l_1928 = &g_74;
    (*g_68) = func_2((g_5 , (safe_lshift_func_int8_t_s_s(func_8((l_14 , ((*l_15) ^= g_5)), ((g_5 , (safe_rshift_func_int16_t_s_u(0xE966L, l_19))) == ((l_20 > (func_21(func_27(((void*)0 == g_30), g_5), l_20, l_15, g_1195, l_20) | g_1035)) || l_19)), g_5, g_481, l_19), l_14))), g_1555);

    ;
    ;

    (*l_1928) = func_47(l_15, &g_96, ((*l_1927) = (l_20 ^ ((g_1922 = &g_1721) != ((*l_1923) = &g_1721)))), l_19);

    ;
    ;
    return (*g_30);
}







static const int func_2(const unsigned p_3, unsigned short p_4)
{
    const char l_1920 = 0x84L;
    for (g_1187 = 0; (g_1187 > 6); g_1187 = safe_add_func_int16_t_s_s(g_1187, 2))
    {
        int *l_1917 = (void*)0;
        int **l_1918 = &g_1880;
        int **l_1919 = &l_1917;
        g_1880 = l_1917;
        (*l_1919) = ((*l_1918) = l_1917);
        (*l_1919) = (*l_1919);
    }
    return l_1920;
}







static char func_8(unsigned short p_9, int p_10, unsigned short p_11, unsigned p_12, unsigned p_13)
{
    int l_1884 = 6L;
    unsigned short *l_1885 = (void*)0;
    const unsigned char l_1886 = 4UL;
    short l_1887 = 1L;
    unsigned *l_1910 = (void*)0;
    unsigned **l_1909 = &l_1910;
    unsigned ***l_1908 = &l_1909;
    int l_1912 = 0x01440100L;
    (*g_68) = l_1884;
    if (((l_1887 < 0x126BL) < ((0x7B6DL || p_10) & l_1886)))
    {
        short **l_1893 = &g_1195;
        short ***l_1892 = &l_1893;
        short ****l_1894 = &l_1892;
        int l_1895 = 0x188833B6L;
        unsigned short **l_1896 = &l_1885;
        unsigned short * const l_1899 = (void*)0;
        unsigned short * const *l_1898 = &l_1899;
        unsigned short * const **l_1897 = &l_1898;
        int *l_1904 = &g_486;
        (*g_68) = (safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((((*l_1894) = l_1892) == (void*)0), ((l_1895 && (((l_1895 , l_1896) != ((*l_1897) = l_1896)) || (p_10 , (((safe_add_func_uint32_t_u_u(0xA243C3E4L, ((*l_1904) = (safe_mul_func_int16_t_s_s((-1L), p_12))))) & 8L) , (-1L))))) || 6L))), 8));

        ;
    }
    else
    {
        unsigned **l_1906 = (void*)0;
        unsigned ***l_1905 = &l_1906;
        unsigned ****l_1907 = &l_1905;
        int l_1911 = 0xFF468B4DL;
        (*g_68) &= ((**g_1092) & ((p_13 , ((*l_1907) = l_1905)) == l_1908));
        (*g_68) = (((l_1886 & ((l_1912 ^= func_38(l_1911, &g_415, ((*g_1093) = (**g_1092)))) ^ (safe_mul_func_int16_t_s_s(((&l_1908 != &l_1905) , (p_12 > ((7UL | p_9) , p_11))), p_13)))) == g_335) & (-1L));
    }
    return (*g_1093);
}







static unsigned func_21(unsigned short * p_22, int p_23, unsigned short * p_24, unsigned short * p_25, int p_26)
{
    int **l_1881 = &g_1880;
    int l_1882 = 0x3FB0F820L;
    int *l_1883 = &g_780;
    (*l_1881) = (void*)0;
    (*g_68) = p_23;
    (*l_1883) ^= func_38((p_23 < 0x8E803AAFL), (*g_89), l_1882);

    ;

    return p_26;
}







static unsigned short * func_27(unsigned p_28, char p_29)
{
    unsigned char l_37 = 252UL;
    char *l_1663 = (void*)0;
    int l_1686 = 1L;
    const char *l_1737 = &g_143;
    const char **l_1736 = &l_1737;
    unsigned short *l_1764 = &g_694;
    int l_1833 = 1L;
    unsigned *l_1870 = &g_1871;
    int *l_1874 = &g_1662;
    unsigned char l_1877 = 0UL;
    int **l_1878 = &l_1874;
    int **l_1879 = &g_74;
    for (p_29 = 0; (p_29 == (-26)); --p_29)
    {
        unsigned char l_36 = 0xCBL;
        int l_1664 = 0x4B89D4D0L;
        int l_1681 = 0x9028881BL;
        unsigned short **l_1751 = &g_90;
        unsigned l_1778 = 0x5C5BA4B7L;
        int l_1818 = 3L;
        int l_1823 = 2L;
        if (g_31)
            break;
        for (p_28 = 0; (p_28 <= 36); p_28 = safe_add_func_int16_t_s_s(p_28, 6))
        {
            unsigned l_1660 = 1UL;
            int l_1683 = (-1L);
            unsigned *l_1733 = &g_585;
            unsigned ** const l_1732 = &l_1733;
            int * const l_1739 = &g_95;
            int * const l_1754 = &g_780;
            int *l_1758 = &g_96;
            unsigned char *l_1765 = &g_335;
            int **l_1770 = (void*)0;
            int **l_1773 = &g_74;
        }
        return l_1764;


    }
    (*l_1878) = (g_1850 , func_47(func_42(((*g_89) = l_1764)), &g_1055, ((*l_1870) = l_37), (((*l_1874) = (safe_rshift_func_uint8_t_u_u(p_29, 6))) <= (safe_lshift_func_uint16_t_u_s(((p_29 > p_29) ^ l_1877), 9)))));

    ;
    ;
    g_1880 = ((*l_1879) = ((*l_1878) = (*l_1878)));

    ;
    return l_1764;


}







static unsigned short func_38(int p_39, unsigned short * p_40, char p_41)
{
    const unsigned char l_1509 = 0xFDL;
    int l_1549 = (-1L);
    unsigned char l_1576 = 0x83L;
    int l_1636 = (-6L);
    unsigned short ***l_1653 = (void*)0;
    unsigned short ***l_1654 = (void*)0;
    unsigned short ***l_1655 = &g_89;
    for (g_334 = 0; (g_334 > (-10)); g_334 = safe_sub_func_uint8_t_u_u(g_334, 5))
    {
        unsigned short l_1556 = 65528UL;
        unsigned short *l_1561 = &g_694;
        int l_1566 = 6L;
        int l_1584 = 0L;
        int l_1593 = 0x62ACFAC9L;
        int l_1602 = 0xF91040F8L;
        int l_1642 = 0x16FE54D0L;
        for (g_1196 = (-22); (g_1196 >= (-7)); g_1196++)
        {
            int **l_1506 = &g_74;
            int *l_1508 = &g_99;
            int **l_1507 = &l_1508;
            (*l_1507) = ((*l_1506) = &g_99);

            ;
            (*l_1508) = (**l_1506);
            return p_39;
        }
        if ((l_1509 != l_1509))
        {
            unsigned l_1552 = 0x1DEE7699L;
            if (p_41)
            {
                int *l_1510 = &g_95;
                int *l_1511 = &g_73;
                int *l_1512 = &g_95;
                int *l_1513 = (void*)0;
                int *l_1514 = &g_780;
                int *l_1515 = &g_780;
                int *l_1516 = &g_96;
                int *l_1517 = (void*)0;
                int *l_1518 = &g_486;
                int *l_1519 = &g_99;
                int *l_1520 = &g_73;
                int *l_1521 = (void*)0;
                int *l_1522 = &g_95;
                int *l_1523 = &g_780;
                int *l_1524 = &g_73;
                int *l_1525 = &g_95;
                int *l_1526 = &g_486;
                int *l_1527 = &g_780;
                int *l_1528 = &g_96;
                int *l_1529 = &g_95;
                int *l_1530 = (void*)0;
                int *l_1531 = &g_95;
                int *l_1532 = (void*)0;
                int *l_1533 = &g_96;
                int *l_1534 = &g_486;
                int *l_1535 = &g_99;
                int *l_1536 = &g_486;
                int *l_1537 = &g_1055;
                int *l_1538 = &g_95;
                int *l_1539 = &g_73;
                int *l_1540 = &g_95;
                int *l_1541 = &g_73;
                int *l_1542 = (void*)0;
                int *l_1543 = &g_96;
                int *l_1544 = &g_95;
                int *l_1545 = &g_1055;
                int *l_1546 = &g_95;
                int *l_1547 = (void*)0;
                int *l_1548 = &g_95;
                int l_1550 = 0xCA601B1EL;
                int l_1551 = 0L;
                (*g_68) ^= p_41;
                ++l_1552;
            }
            else
            {
                if (g_1555)
                    break;
            }
            if (p_41)
                continue;
        }
        else
        {
            l_1549 = l_1556;
        }
        if (((safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(0x91BFL, ((((void*)0 == p_40) < ((*l_1561) &= l_1556)) && l_1549))) , l_1556), l_1556)) , (~(((safe_mod_func_int16_t_s_s(0xC3FCL, p_39)) <= g_118) , (-8L)))))
        {
            int l_1574 = 6L;
            unsigned l_1575 = 9UL;
            (*g_1193) = (*g_1193);
            for (p_39 = 8; (p_39 == 10); p_39 = safe_add_func_int8_t_s_s(p_39, 6))
            {
                char l_1567 = 0x8EL;
                (*g_68) = ((l_1566 = p_39) , (p_39 > (!((((***g_1193) , p_39) , (l_1567 , ((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(1L, ((*g_1093) ^= (((safe_mul_func_uint8_t_u_u((l_1574 , (g_143 , l_1575)), 0x80L)) > l_1556) < 0x2A735ED7L)))), p_41)) == p_41))) , (-6L)))));
            }
            return l_1576;
        }
        else
        {
            char l_1577 = 0x52L;
            int *l_1578 = &l_1566;
            int *l_1579 = &g_780;
            int *l_1580 = &g_95;
            int *l_1581 = &l_1566;
            int *l_1582 = &g_96;
            int *l_1583 = (void*)0;
            int *l_1585 = (void*)0;
            int *l_1586 = (void*)0;
            int *l_1587 = &g_95;
            int *l_1588 = &l_1549;
            int *l_1589 = &g_95;
            int *l_1590 = &l_1566;
            int *l_1591 = &g_96;
            int *l_1592 = &g_73;
            int *l_1594 = &g_99;
            int *l_1595 = &g_95;
            int *l_1596 = &g_99;
            int *l_1597 = &g_96;
            int *l_1598 = (void*)0;
            int *l_1599 = &g_99;
            int *l_1600 = &g_95;
            int *l_1601 = &g_73;
            int *l_1603 = &g_96;
            int *l_1604 = &g_95;
            int *l_1605 = &l_1584;
            int *l_1606 = &l_1584;
            int l_1607 = 0x685B5FBAL;
            int *l_1609 = &l_1566;
            int *l_1610 = &g_780;
            int *l_1611 = &g_780;
            int *l_1612 = &l_1566;
            int *l_1613 = &l_1607;
            int *l_1614 = (void*)0;
            int *l_1615 = (void*)0;
            int *l_1616 = &g_96;
            int *l_1617 = (void*)0;
            int l_1618 = 1L;
            int *l_1619 = &g_486;
            int *l_1620 = (void*)0;
            int *l_1621 = &l_1618;
            int *l_1622 = &g_1055;
            int *l_1623 = &g_780;
            int *l_1624 = (void*)0;
            int *l_1625 = &g_99;
            int *l_1626 = (void*)0;
            int *l_1627 = &g_486;
            int l_1628 = (-10L);
            int *l_1629 = &g_73;
            int *l_1630 = &g_96;
            int *l_1631 = &l_1584;
            int *l_1632 = (void*)0;
            int *l_1633 = &g_99;
            int *l_1634 = (void*)0;
            int *l_1635 = (void*)0;
            int *l_1637 = (void*)0;
            int *l_1638 = &g_486;
            int *l_1639 = (void*)0;
            int *l_1640 = &l_1549;
            int *l_1641 = &g_96;
            int *l_1643 = &g_486;
            int *l_1644 = &l_1566;
            int *l_1645 = &l_1566;
            int *l_1646 = &l_1584;
            int l_1647 = 0x76FA897EL;
            int *l_1648 = (void*)0;
            int *l_1649 = &l_1584;
            unsigned l_1650 = 2UL;
            ++l_1650;
            return l_1549;
        }
    }
    (*l_1655) = &p_40;

    ;
    return l_1576;


}







static unsigned short * func_42(unsigned short * p_43)
{
    unsigned char l_70 = 0x25L;
    unsigned short **l_71 = (void*)0;
    int * const l_72 = &g_73;
    unsigned short *l_78 = (void*)0;
    int *l_1078 = &g_486;
    short * const ***l_1197 = &g_1193;
    char l_1210 = 0xD7L;
    int * const l_1214 = (void*)0;
    unsigned l_1254 = 4294967295UL;
    short l_1286 = 0x96A0L;
    unsigned char l_1308 = 0xB8L;
    short l_1350 = (-1L);
    int l_1416 = 0xE0D257C2L;
    int l_1456 = 8L;
    unsigned l_1487 = 0x699BAB91L;
    unsigned char l_1497 = 0xC9L;
    unsigned short l_1498 = 0xD9C3L;
    unsigned short l_1500 = 0x966FL;
    l_1078 = func_47(func_52(g_45, ((*l_72) = func_55(((((g_45 && ((0x4356E3F0L ^ (g_5 , ((safe_unary_minus_func_int8_t_s((-2L))) ^ (((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((-8L), g_5)), 3)), ((((void*)0 != g_68) , l_70) , g_5))) | g_45) > l_70)))) >= 0xB3B6L)) , (void*)0) != (void*)0) != g_5), l_70, l_71, g_5, l_72))), l_1078, g_694, (*l_1078));

    ;
    if (((g_662 = g_905) > (((((*l_1197) = g_1193) == (void*)0) , ((safe_rshift_func_int16_t_s_u((-1L), 5)) , ((*l_72) || (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((((*l_72) == (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((*l_72), 1L)) != 0x74F66A71L), (*p_43)))) , g_45), 0)) | (*g_1195)), (*l_72))), (*p_43)))))) > g_905)))
    {
        char l_1213 = 0xEFL;
        unsigned short **l_1235 = (void*)0;
        int * const l_1236 = (void*)0;
        int *l_1240 = &g_486;
        char l_1271 = (-1L);
        int l_1291 = 1L;
        if ((~((((((((l_1210 || (g_486 ^= ((((**g_1092) , ((****l_1197) &= (safe_mod_func_uint8_t_u_u((*l_72), l_1213)))) < (l_1213 < ((l_1213 , (*l_72)) ^ 6UL))) == ((func_55((*l_72), l_1213, &g_90, (**g_1092), l_1214) , (*l_72)) >= l_1213)))) || (*l_72)) , l_1213) < 1L) , &l_70) == &l_70) ^ l_1213) < l_1213)))
        {
            short **l_1224 = (void*)0;
            short ***l_1223 = &l_1224;
            short ****l_1222 = &l_1223;
            short *****l_1221 = &l_1222;
            const int l_1232 = (-3L);
            int l_1233 = 1L;
            unsigned char *l_1234 = &g_221;
            unsigned l_1237 = 4294967295UL;
            int *l_1238 = &g_95;
            (*l_1238) |= (safe_mod_func_int8_t_s_s(func_55(((((safe_div_func_int8_t_s_s((((((safe_div_func_int16_t_s_s((**g_1194), ((&g_1193 == ((*l_1221) = (void*)0)) ^ ((*g_1093) > (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s(((*l_72) > (safe_add_func_uint16_t_u_u(0UL, ((*p_43)--)))))), ((*l_1234) = (g_1035 && (l_1233 = ((p_43 == (void*)0) > l_1232)))))))))) ^ (-1L)) , (*l_72)) , 0x6883DBAAL) <= l_1232), (*g_1093))) || l_1213) , (-1L)) >= (*g_1093)), l_1232, l_1235, l_1232, l_1236), l_1237));

            ;
            return l_78;


        }
        else
        {
            unsigned short *l_1239 = &g_115;
            int l_1249 = (-1L);
            unsigned *l_1255 = &g_585;
            int **l_1256 = &l_1078;
            (*l_1256) = func_47(l_1239, l_1240, ((*l_1255) &= (g_716 & ((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((**g_1092) = (*g_1093)), l_1249)), (*l_1240))) , (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u(func_55(((**g_1194) = ((g_415 | ((+(((((((func_55((*l_1240), g_73, &g_90, (*g_1093), &l_1249) , l_1254) == 0UL) && (*l_72)) , 255UL) && 0x0AL) , (*g_1195)) > l_1249)) ^ g_45)) > 0xC7L)), l_1249, &g_90, l_1249, l_72), 4294967288UL)), (*l_72)))), 65535UL)), l_1249)) ^ l_1249))), g_1055);
        }
        for (g_715 = 13; (g_715 >= (-4)); --g_715)
        {
            int l_1262 = 1L;
            unsigned short ***l_1263 = (void*)0;
            unsigned short ***l_1264 = &l_71;
            int l_1265 = 0x69A160DEL;
            int **l_1311 = &g_74;
            (*l_1240) ^= (safe_unary_minus_func_uint16_t_u(func_55((g_168 , (((safe_sub_func_int32_t_s_s(func_55(((*g_1195) = 0xC918L), l_1262, ((*l_1264) = &p_43), (l_1265 |= ((*g_1093) = (((*g_74) |= (&g_68 == &g_74)) | 0xE2F5A59EL))), &g_96), g_115)) != (*p_43)) & 0x66L)), g_662, &g_90, l_1210, l_1214)));

            ;
            ;
            for (g_1044 = 0; (g_1044 == 31); g_1044++)
            {
                short l_1268 = 0x432FL;
                l_1265 = (-1L);
                (*l_72) = (*g_74);
                if (l_1268)
                    continue;
            }
            for (g_335 = (-6); (g_335 > 40); ++g_335)
            {
                unsigned l_1275 = 4294967295UL;
                int l_1278 = 0x8EEFBF95L;
                l_1271 = ((*g_74) = (*l_72));
                for (g_45 = 0; (g_45 <= 13); g_45 = safe_add_func_uint32_t_u_u(g_45, 8))
                {
                    int l_1274 = 0L;
                    int *l_1279 = &g_1055;
                    int *l_1280 = &g_95;
                    int *l_1281 = &g_73;
                    int *l_1282 = &g_780;
                    int *l_1283 = (void*)0;
                    int *l_1284 = &g_73;
                    int *l_1285 = &g_780;
                    int *l_1287 = &g_486;
                    int *l_1288 = &g_99;
                    int *l_1289 = &g_1055;
                    int *l_1290 = &g_99;
                    int *l_1292 = &g_1055;
                    int *l_1293 = &g_1055;
                    int *l_1294 = &g_486;
                    int *l_1295 = (void*)0;
                    int *l_1296 = &g_486;
                    int *l_1297 = &l_1278;
                    int *l_1298 = &g_99;
                    int *l_1299 = &g_486;
                    int *l_1300 = (void*)0;
                    int *l_1301 = &g_99;
                    int *l_1305 = &l_1278;
                    int *l_1306 = &l_1278;
                    int *l_1307 = &g_780;
                    --l_1275;
                    ++g_1302;
                    ++l_1308;
                }
            }
            (*l_1311) = &l_1291;

            ;
        }

        ;
        ;
    }
    else
    {
        int **l_1312 = &g_74;
        unsigned *l_1333 = &g_168;
        unsigned short **l_1368 = (void*)0;
        int l_1425 = 0x316E2030L;
        int l_1435 = 0x62C5EFB3L;
        int l_1451 = 0L;
        if (((void*)0 == l_1312))
        {
            char * const *l_1314 = (void*)0;
            char * const **l_1313 = &l_1314;
            int * const l_1315 = &g_95;
            int **l_1316 = (void*)0;
            int **l_1317 = (void*)0;
            unsigned *l_1320 = &g_716;
            unsigned short **l_1322 = &l_78;
            short **l_1329 = &g_1195;
            short *** const l_1328 = &l_1329;
            short *** const *l_1327 = &l_1328;
            unsigned l_1330 = 0xF6F96BE8L;
            int l_1340 = 0x8C3DEF8BL;
            int **l_1372 = (void*)0;
            int **l_1373 = &g_74;
            (*l_1313) = &g_1093;

            ;
            g_74 = l_1315;

            ;
            if ((safe_div_func_uint32_t_u_u(((*l_1320) = g_5), g_341)))
            {
                int l_1321 = (-4L);
                char *l_1331 = &g_334;
                char *l_1332 = &g_663;
                (*l_72) ^= (func_55(l_1321, ((*l_1320) = ((**g_1092) | (*g_1093))), l_1322, ((*l_1332) = ((**l_1312) || (((*l_1331) = (safe_mod_func_uint32_t_u_u(((l_1327 != l_1197) , ((**l_1312) != ((((l_1321 , (*g_1193)) == (*g_1193)) , 4294967292UL) , 0xD7AFL))), l_1330))) <= (**l_1312)))), &g_780) ^ l_1321);

                ;
            }
            else
            {
                unsigned char *l_1334 = &l_70;
                int l_1335 = 1L;
                unsigned short **l_1366 = &l_78;
                (*g_74) ^= (((*l_1334) = (((void*)0 == l_1333) < 1UL)) != (!l_1335));
                if (((*g_74) = ((0x6528F24AL || (g_415 <= (safe_lshift_func_int16_t_s_u(l_1335, ((safe_lshift_func_uint16_t_u_s((6UL > 0xED9BL), 4)) | 0xC393B1B0L))))) && l_1340)))
                {
                    char *l_1342 = &l_1210;
                    int l_1347 = (-1L);
                    char *l_1353 = &g_715;
                    int l_1367 = 0x0B78B93DL;
                    unsigned char *l_1369 = &g_786;
                    (**l_1312) = ((safe_unary_minus_func_uint32_t_u(((((g_334 & ((((*l_1353) |= (((((*g_1093) = ((*l_1342) &= (**g_1092))) | (safe_lshift_func_int8_t_s_u((l_1335 != (safe_lshift_func_int16_t_s_u(((l_1335 , (l_1347 , (safe_lshift_func_uint16_t_u_s(l_1350, 12)))) == (**g_1194)), ((++(*p_43)) < ((*g_74) || (*l_72)))))), 6))) >= (*l_72)) & g_73)) , (**l_1312)) , 0UL)) , (**g_1092)) < 0xB8L) & l_1335))) || 0L);
                    (*l_72) ^= (0x54L <= (safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(g_115, (**l_1312))), 65535UL)));
                    (*l_1315) = (safe_mod_func_uint8_t_u_u(((*l_1369) = (((*l_1334) ^= g_168) != func_55((*l_1315), (safe_sub_func_uint16_t_u_u((*p_43), (safe_div_func_int32_t_s_s(((((safe_div_func_uint8_t_u_u(func_55(((***l_1328) = (**l_1312)), l_1347, l_1366, ((*g_1093) , ((((**l_1312) >= (l_1367 = 0x4008L)) <= (*l_1315)) ^ 1L)), &l_1347), 0x7BL)) != (**g_1092)) && (*l_1315)) < (*l_1315)), l_1347)))), l_1368, l_1335, l_72))), (**g_1092)));

                    ;
                    (*g_74) = ((-1L) > 0L);
                }
                else
                {
                    unsigned short *l_1370 = &g_1044;
                    int **l_1371 = &l_1078;
                    (*l_1371) = func_47(l_1370, (*l_1312), l_1335, g_143);

                    ;
                }

                ;
                return (*g_89);


            }

            ;
            (*l_1373) = l_1214;

            ;
        }
        else
        {
            unsigned char l_1381 = 0UL;
            int l_1385 = (-1L);
            int l_1467 = (-4L);
            int l_1479 = 0L;
            (*l_72) = 0x128A1D75L;
            if (((void*)0 == g_1374))
            {
                (*g_74) = ((**l_1312) ^ (safe_mod_func_uint8_t_u_u(g_780, g_662)));
                if ((safe_sub_func_int32_t_s_s(0x1DDA2753L, (((void*)0 != (*g_89)) && (~0x414865DDL)))))
                {
                    int **l_1380 = &g_74;
                    (*l_1380) = l_1214;

                    ;
                }
                else
                {
                    return (*g_89);


                }

                ;
            }
            else
            {
                int *l_1384 = &g_486;
                int *l_1386 = &g_486;
                int *l_1387 = &g_95;
                int *l_1388 = &g_780;
                int *l_1389 = &g_486;
                int *l_1390 = (void*)0;
                int *l_1391 = (void*)0;
                int *l_1392 = (void*)0;
                int *l_1393 = &g_99;
                int *l_1394 = &g_95;
                int *l_1395 = &g_99;
                int *l_1396 = &g_780;
                int *l_1397 = &g_96;
                int *l_1398 = &g_486;
                int *l_1399 = &g_95;
                int *l_1400 = &g_99;
                int *l_1401 = &g_99;
                int *l_1402 = &g_780;
                int *l_1403 = &g_96;
                int *l_1404 = &g_1055;
                int *l_1405 = &g_73;
                int *l_1406 = &g_780;
                int *l_1407 = &g_95;
                int *l_1408 = &g_73;
                int *l_1409 = (void*)0;
                int *l_1410 = &g_95;
                int *l_1411 = &g_780;
                int *l_1412 = (void*)0;
                int *l_1413 = &g_486;
                int *l_1414 = (void*)0;
                int *l_1415 = &g_780;
                int *l_1417 = &g_99;
                int *l_1418 = &l_1385;
                int *l_1419 = &g_780;
                int *l_1420 = &g_73;
                int *l_1421 = &g_99;
                int *l_1422 = (void*)0;
                int *l_1423 = &g_486;
                int *l_1424 = &g_99;
                int *l_1426 = (void*)0;
                int *l_1427 = &g_1055;
                int *l_1428 = &g_99;
                int *l_1429 = &g_95;
                int *l_1430 = &g_1055;
                int *l_1431 = &g_73;
                int *l_1432 = (void*)0;
                int *l_1433 = &g_73;
                int *l_1434 = &l_1416;
                int *l_1436 = &l_1435;
                int *l_1437 = &g_96;
                int *l_1438 = &g_780;
                int *l_1439 = &l_1435;
                int *l_1440 = (void*)0;
                int *l_1441 = &g_1055;
                int l_1442 = 0x6A75B489L;
                int *l_1443 = &l_1416;
                int l_1444 = 0x3E285B1CL;
                int *l_1445 = &l_1444;
                int *l_1446 = &l_1425;
                int *l_1447 = &l_1416;
                int *l_1448 = &g_1055;
                int *l_1449 = &l_1425;
                int *l_1450 = &l_1416;
                int *l_1452 = &g_1055;
                int *l_1453 = (void*)0;
                int *l_1454 = &l_1444;
                int *l_1455 = (void*)0;
                int *l_1457 = &l_1416;
                int *l_1458 = &g_780;
                int *l_1459 = (void*)0;
                int *l_1460 = &l_1425;
                int *l_1461 = &g_96;
                int *l_1462 = (void*)0;
                int *l_1463 = (void*)0;
                int *l_1464 = &g_95;
                int *l_1465 = &g_73;
                int *l_1466 = &l_1435;
                int *l_1468 = (void*)0;
                int *l_1469 = &l_1425;
                int *l_1470 = &l_1444;
                int *l_1471 = (void*)0;
                int *l_1472 = &g_1055;
                int *l_1473 = &l_1467;
                int *l_1474 = &l_1435;
                int *l_1475 = &l_1451;
                int *l_1476 = (void*)0;
                int *l_1477 = &g_1055;
                int *l_1478 = &g_96;
                int *l_1480 = &l_1425;
                int *l_1481 = &g_780;
                int l_1482 = 0xC70D5C0FL;
                int *l_1483 = &l_1385;
                int l_1484 = (-1L);
                int *l_1485 = (void*)0;
                int *l_1486 = &g_99;
                ++l_1381;
                --l_1487;
                for (g_165 = 28; (g_165 >= 22); g_165 = safe_sub_func_int32_t_s_s(g_165, 5))
                {
                    int l_1494 = 4L;
                    int **l_1499 = &l_1405;
                    (*l_1499) = func_47((*g_89), (((!(safe_mul_func_uint8_t_u_u(((**g_1092) && (**l_1312)), (l_1494 = ((*g_74) & l_1385))))) , (*g_74)) , &g_486), g_786, ((safe_add_func_uint16_t_u_u((*p_43), l_1497)) > l_1498));

                    ;
                    return (*g_89);


                }
            }

            ;
        }

        ;
        g_73 = l_1500;
        return (*g_89);


    }

    ;

    return p_43;


}







static int * const func_47(unsigned short * p_48, int * p_49, unsigned p_50, int p_51)
{
    unsigned short l_1079 = 0xB5BDL;
    unsigned *l_1084 = &g_716;
    char *l_1087 = &g_663;
    char *l_1089 = &g_341;
    char **l_1088 = &l_1089;
    unsigned short **l_1090 = &g_90;
    char l_1091 = 0x3DL;
    int l_1094 = 0x6CDFF76FL;
    int *l_1095 = (void*)0;
    int *l_1096 = &g_780;
    int *l_1097 = (void*)0;
    int *l_1098 = &g_1055;
    int *l_1099 = &g_95;
    int l_1100 = 1L;
    int *l_1101 = &g_95;
    int *l_1102 = &l_1094;
    int *l_1103 = (void*)0;
    int *l_1104 = &g_1055;
    int l_1105 = 0L;
    int *l_1106 = &g_96;
    int *l_1107 = (void*)0;
    int *l_1108 = (void*)0;
    int *l_1109 = &g_780;
    int *l_1110 = &l_1105;
    int *l_1111 = &g_95;
    int *l_1112 = &g_1055;
    int *l_1113 = &l_1094;
    int *l_1114 = (void*)0;
    int *l_1115 = &g_780;
    int *l_1116 = &l_1100;
    int *l_1117 = &g_780;
    int *l_1118 = &g_95;
    int l_1119 = 0x4FCBA549L;
    int *l_1120 = &g_95;
    int *l_1121 = (void*)0;
    int *l_1122 = &g_486;
    int *l_1123 = &l_1105;
    int *l_1124 = (void*)0;
    int *l_1125 = (void*)0;
    int *l_1126 = &l_1100;
    int *l_1127 = &l_1105;
    int *l_1128 = (void*)0;
    int *l_1129 = &g_99;
    int *l_1130 = &g_486;
    int *l_1131 = &l_1094;
    int *l_1132 = &g_95;
    int *l_1133 = &g_95;
    int *l_1134 = &g_99;
    int *l_1135 = &g_95;
    int *l_1136 = &l_1119;
    int *l_1137 = &g_780;
    int l_1138 = 0xEFF2DB52L;
    int *l_1139 = (void*)0;
    int *l_1140 = &g_96;
    int *l_1141 = &g_486;
    int *l_1142 = &l_1100;
    int *l_1143 = (void*)0;
    int *l_1144 = &l_1105;
    int *l_1145 = &g_1055;
    int *l_1146 = &l_1138;
    int *l_1147 = &g_486;
    int *l_1148 = (void*)0;
    int *l_1149 = &l_1100;
    int *l_1150 = &g_96;
    int *l_1151 = &g_99;
    int *l_1152 = &g_99;
    int *l_1153 = (void*)0;
    int l_1154 = 0L;
    int *l_1155 = (void*)0;
    int *l_1156 = (void*)0;
    int *l_1157 = &g_99;
    int *l_1158 = &g_96;
    int *l_1159 = &l_1138;
    int *l_1160 = &l_1100;
    int l_1161 = (-3L);
    int *l_1162 = &l_1161;
    int *l_1163 = &g_99;
    int *l_1164 = &g_486;
    int *l_1165 = &g_99;
    int *l_1166 = &l_1105;
    int *l_1167 = &l_1154;
    int *l_1168 = &g_73;
    int *l_1169 = (void*)0;
    int *l_1170 = &g_95;
    int *l_1171 = (void*)0;
    int *l_1172 = (void*)0;
    int *l_1173 = &l_1094;
    int *l_1174 = &g_1055;
    int *l_1175 = (void*)0;
    int *l_1176 = &l_1100;
    int *l_1177 = &g_95;
    int *l_1178 = &l_1154;
    int *l_1179 = (void*)0;
    int *l_1180 = &l_1094;
    int *l_1181 = (void*)0;
    int *l_1182 = &g_1055;
    int *l_1183 = &g_73;
    int *l_1184 = &l_1154;
    int *l_1185 = &l_1161;
    int *l_1186 = &l_1105;
    int * const l_1190 = (void*)0;
    l_1094 = ((*p_49) = (l_1079 , (((func_55((safe_rshift_func_int8_t_s_s(l_1079, 5)), (safe_rshift_func_int16_t_s_s((((*l_1084)--) != (!(-4L))), (((((g_486 , l_1087) != (l_1079 , ((*l_1088) = l_1087))) , &g_469) != (void*)0) == 4294967295UL))), l_1090, g_341, &g_95) > l_1091) , (void*)0) != g_1092)));

    ;
    ;
    --g_1187;
    return l_1190;


}







static unsigned short * func_52(unsigned p_53, unsigned short p_54)
{
    short l_81 = 3L;
    short *l_86 = &l_81;
    int l_88 = 0L;
    unsigned short **l_91 = &g_90;
    int *l_92 = (void*)0;
    int *l_93 = (void*)0;
    int *l_94 = &g_95;
    int *l_97 = (void*)0;
    int *l_98 = &g_99;
    int l_100 = 0x7548BA02L;
    char *l_149 = (void*)0;
    unsigned l_173 = 4294967295UL;
    unsigned short **l_234 = (void*)0;
    int l_321 = 0x5622B19BL;
    unsigned char l_426 = 0xECL;
    char l_453 = 0x80L;
    unsigned l_483 = 0x73E263C9L;
    short l_624 = 0xA0CDL;
    int l_713 = (-8L);
    unsigned short l_803 = 65535UL;
    unsigned *l_917 = (void*)0;
    unsigned **l_916 = &l_917;
    unsigned ***l_915 = &l_916;
    int ***l_920 = (void*)0;
    const int l_936 = 0xCFCD5D4EL;
    int l_1031 = 0x5CB2507AL;
    int l_1038 = 0L;
    (*l_94) = ((*l_98) &= (func_55((((((safe_sub_func_int16_t_s_s((l_81 , ((((*l_94) |= (safe_lshift_func_int16_t_s_s((((func_55(p_53, func_55(((g_73 , func_55((safe_sub_func_int16_t_s_s((((*l_86) = 0xDBBFL) <= (safe_unary_minus_func_int8_t_s((l_88 | (l_88 != l_88))))), (((((l_88 , (g_45 , 0xD363L)) ^ p_54) && p_53) & 0x73B0L) <= 0x891DL))), l_88, g_89, p_53, &l_88)) | 0xCFE89070L), p_53, l_91, l_88, &g_73), l_91, g_5, &l_88) != p_54) , 0x10DAL) > 0x8BA6L), g_5))) ^ g_73) & p_53)), g_5)) && (*l_94)) && p_54) , 0x9E91L) , g_73), g_96, &g_90, g_5, &g_96) | 0L));
    if ((((l_100 = (*g_74)) & 0xC032BE65L) != ((p_53 < (safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0xB93870AFL, g_96)), 2))))) || g_5)))
    {
        short l_119 = 0xD838L;
        int l_241 = 0L;
        int **l_277 = &l_92;
        int l_332 = 0x7A4094C6L;
        unsigned short **l_424 = &g_90;
        int l_506 = 0xF4DB6B39L;
        unsigned char l_926 = 1UL;
        int *l_958 = &g_73;
        int *l_959 = &g_780;
        int *l_960 = (void*)0;
        int *l_961 = &l_506;
        int *l_962 = &l_88;
        int *l_963 = &g_486;
        int *l_964 = (void*)0;
        int *l_965 = &g_95;
        int l_966 = (-1L);
        int *l_967 = &l_321;
        int *l_968 = (void*)0;
        int *l_969 = &g_486;
        int *l_970 = (void*)0;
        int *l_971 = &g_780;
        int *l_972 = &l_713;
        int *l_973 = &g_73;
        int *l_974 = &l_966;
        int *l_975 = (void*)0;
        int *l_976 = &l_506;
        int *l_977 = &l_713;
        int *l_978 = (void*)0;
        int *l_979 = &l_713;
        int *l_980 = &l_332;
        int *l_981 = &l_713;
        int *l_982 = &l_321;
        int *l_983 = &g_95;
        int *l_984 = &l_713;
        int *l_985 = &l_88;
        int *l_986 = &l_966;
        int *l_987 = &g_95;
        int *l_988 = &g_96;
        int *l_989 = &l_966;
        int *l_990 = (void*)0;
        int *l_991 = &l_506;
        int *l_992 = (void*)0;
        int *l_993 = (void*)0;
        int *l_994 = &l_88;
        int *l_995 = &l_713;
        int *l_996 = (void*)0;
        int *l_997 = &l_966;
        int *l_998 = &l_966;
        int *l_999 = &l_332;
        int *l_1000 = &l_332;
        int *l_1001 = &l_713;
        int *l_1002 = (void*)0;
        int *l_1003 = &g_95;
        int *l_1004 = &g_95;
        int *l_1005 = &l_713;
        int *l_1006 = (void*)0;
        int *l_1007 = &g_780;
        int *l_1008 = &g_99;
        int *l_1009 = &g_99;
        int *l_1010 = &l_88;
        int *l_1011 = &l_321;
        int l_1012 = (-3L);
        int *l_1013 = &g_486;
        int *l_1014 = &l_1012;
        int *l_1015 = &g_486;
        int *l_1016 = (void*)0;
        int *l_1017 = (void*)0;
        int *l_1018 = (void*)0;
        int *l_1019 = &g_486;
        int *l_1020 = &l_332;
        int *l_1021 = &g_99;
        int *l_1022 = &l_332;
        int *l_1023 = &l_321;
        int *l_1024 = &l_966;
        int *l_1025 = &l_321;
        int *l_1026 = &g_73;
        int *l_1027 = &g_95;
        int *l_1028 = &l_1012;
        int *l_1029 = &g_99;
        int *l_1030 = &g_99;
        int *l_1032 = &l_506;
        int *l_1033 = &l_332;
        int *l_1034 = &g_780;
        int *l_1036 = (void*)0;
        int *l_1037 = &l_332;
        int *l_1039 = (void*)0;
        int *l_1040 = &l_321;
        int *l_1041 = &l_88;
        int l_1042 = 0xB12B92A4L;
        int *l_1043 = (void*)0;
        char l_1051 = 0x1EL;
        unsigned *l_1064 = &l_483;
        unsigned short ****l_1067 = (void*)0;
        unsigned short ***l_1069 = &l_424;
        unsigned short ****l_1068 = &l_1069;
        int l_1070 = 0x712C53F2L;
        if ((*g_74))
        {
            int l_108 = 0x511143DCL;
            unsigned short * const **l_111 = (void*)0;
            unsigned short * const l_114 = &g_115;
            unsigned short * const *l_113 = &l_114;
            unsigned short * const **l_112 = &l_113;
            int **l_120 = (void*)0;
            int **l_121 = (void*)0;
            int *l_122 = &l_108;
            l_122 = (((safe_div_func_int16_t_s_s(((l_108 , ((0x1239L && ((safe_rshift_func_uint16_t_u_s(l_108, g_99)) | g_5)) , (g_89 = &g_90))) != ((*l_112) = (void*)0)), ((*l_86) = (((func_55((safe_div_func_int16_t_s_s((func_55((g_118 || 4294967295UL), l_119, &g_90, g_95, &l_108) > p_53), 0x3B26L)), (*l_98), &g_90, g_45, &g_95) , 8UL) , 0x3FCB6E43L) || p_53)))) == 0UL) , &g_96);

            ;
            ;
        }
        else
        {
            short l_125 = 0L;
            char *l_142 = &g_143;
            int *l_144 = &g_96;
            unsigned short **l_166 = (void*)0;
            unsigned short l_262 = 0xEFA1L;
            const int l_283 = 0x2951BB2AL;
            int l_284 = (-1L);
            int l_330 = 0xA508459DL;
            int l_574 = 0x7DF8C571L;
            unsigned **l_740 = (void*)0;
            const int *l_924 = &g_481;
            const int **l_923 = &l_924;
            const int *** const l_922 = &l_923;
            if (((*l_144) ^= (safe_sub_func_uint16_t_u_u(l_125, (((safe_mul_func_int16_t_s_s((g_115 >= ((safe_add_func_int8_t_s_s(((*l_142) = ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(l_125, p_53)), 5)) > ((((safe_mul_func_uint8_t_u_u(l_119, (((+l_125) ^ g_73) , g_95))) | (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((g_99 <= g_95), p_53)), 0x50L)), (*l_94)))) && l_125) || 0x01L))), g_45)) || 0x261CAE20L)), 1UL)) ^ (*g_74)) , p_54)))))
            {
                char *l_147 = &g_143;
                char **l_148 = &l_147;
                short *l_150 = &l_125;
                unsigned short *l_151 = (void*)0;
                unsigned short *l_152 = &g_115;
                int l_155 = 0xA5A11BA0L;
                unsigned *l_164 = (void*)0;
                unsigned *l_167 = &g_168;
                unsigned l_215 = 0x443474DDL;
                int l_218 = 0x142755BCL;
                int l_305 = (-5L);
                unsigned l_350 = 0x56E7B681L;
                unsigned l_440 = 0UL;
                (*l_94) ^= (g_73 < func_55(p_53, ((*l_167) = ((safe_mod_func_uint16_t_u_u(((*l_152) &= ((((*l_148) = l_147) != (l_149 = l_149)) == ((*l_150) = ((*l_86) ^= g_5)))), (*l_98))) || (safe_mul_func_uint8_t_u_u((((g_143 ^= func_55(l_155, (func_55(p_53, (g_165 = ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((--(*l_152)), 14)), func_55((safe_mod_func_uint8_t_u_u(((((*l_144) == 0UL) , &g_90) != &g_90), 0x16L)), g_45, &g_90, p_53, &l_100))) , 0x7596E128L)), l_166, l_155, l_144) || 0UL), &g_90, g_5, &l_155)) & 0x99L) && 0xA0L), p_53)))), &g_90, g_99, &l_100));
                for (g_99 = (-14); (g_99 <= 6); ++g_99)
                {
                    int *l_171 = (void*)0;
                    int **l_172 = &l_97;
                    int l_204 = 0x94D60890L;
                    int l_219 = 0x690FF0A8L;
                    int l_220 = (-1L);
                    (*l_172) = l_171;
                    if ((p_54 != (p_53 > l_173)))
                    {
                        return (*l_91);


                    }
                    else
                    {
                        int *l_174 = (void*)0;
                        int *l_175 = &g_73;
                        int *l_176 = &l_88;
                        int *l_177 = &l_155;
                        int *l_178 = &g_73;
                        int *l_179 = &g_73;
                        int *l_180 = &l_100;
                        int *l_181 = &l_155;
                        int *l_182 = &l_155;
                        int *l_183 = &g_73;
                        int *l_184 = &g_73;
                        int *l_185 = &g_96;
                        int *l_186 = &l_100;
                        int *l_187 = (void*)0;
                        int *l_188 = &l_155;
                        int *l_189 = (void*)0;
                        int *l_190 = &g_95;
                        int l_191 = 0x9F33108CL;
                        int *l_192 = &g_96;
                        int *l_193 = (void*)0;
                        int *l_194 = &l_88;
                        int *l_195 = &l_191;
                        int *l_196 = &g_95;
                        int *l_197 = &l_100;
                        int *l_198 = (void*)0;
                        int *l_199 = &l_191;
                        int *l_200 = &l_155;
                        int *l_201 = (void*)0;
                        int *l_202 = &l_100;
                        int *l_203 = (void*)0;
                        int *l_205 = &l_155;
                        int *l_206 = &l_88;
                        int *l_207 = &l_88;
                        int *l_208 = (void*)0;
                        int *l_209 = &g_95;
                        int l_210 = (-1L);
                        int *l_211 = &l_210;
                        int *l_212 = (void*)0;
                        int *l_213 = &g_95;
                        int *l_214 = &l_155;
                        l_215--;
                        (*l_199) = 1L;
                        (*g_74) = (*g_74);
                        g_221--;
                    }
                    for (g_115 = (-27); (g_115 == 3); g_115 = safe_add_func_int32_t_s_s(g_115, 8))
                    {
                        return (*g_89);


                    }
                    (*g_74) = (*g_74);
                }
                if (func_55(g_5, (*l_144), (p_53 , &g_90), ((((*l_150) |= (safe_mul_func_uint8_t_u_u(func_55(((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((*l_142) &= (*l_94)), (safe_add_func_int32_t_s_s((*l_94), ((((void*)0 != l_234) , (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(l_241, 3)) && l_119), g_165)), 10))) <= p_54))))), 7)) > g_45), g_168, &g_90, p_54, &l_155), g_5))) & p_53) > g_73), &g_73))
                {
                    unsigned short *l_242 = &g_45;
                    int l_259 = 3L;
                    int l_260 = 0x066E75ACL;
                    if (((void*)0 == l_97))
                    {
                        return l_242;


                    }
                    else
                    {
                        unsigned char l_252 = 7UL;
                        unsigned char *l_261 = &l_252;
                        short *l_265 = &l_119;
                        int * const l_266 = &l_218;
                        int **l_276 = &l_144;
                        int ***l_275 = &l_276;
                        int ***l_278 = &l_277;
                        (*l_94) = ((((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(g_45)), (((safe_lshift_func_int16_t_s_u(g_99, (((*l_261) = (safe_mod_func_uint32_t_u_u((4294967287UL == ((safe_mul_func_int8_t_s_s((((+((*g_74) >= ((*l_144) = l_252))) != (*g_74)) > (!((*l_152) = (++p_54)))), ((g_99 < (((safe_lshift_func_int8_t_s_s(((((p_53 < (safe_mul_func_uint8_t_u_u(p_53, l_259))) || p_53) , 4L) , (-1L)), 0)) == p_53) , p_53)) != l_252))) , l_260)), p_53))) < p_53))) | 0xD6L) , g_115))) & 250UL) && (-1L)) <= l_262);
                        (*l_144) = l_252;
                        (*l_98) = ((*l_94) = func_55(((*l_265) = ((*l_86) = (safe_rshift_func_int16_t_s_u(((*g_74) , ((*l_150) = 0L)), 4)))), g_99, &g_90, p_53, l_266));
                        (*g_74) = ((((*l_261) = (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(g_143, p_54)), (safe_sub_func_uint8_t_u_u((0x1DL <= (safe_div_func_int32_t_s_s(l_260, (((((((*l_275) = (void*)0) != ((*l_278) = l_277)) <= (*g_74)) > 65535UL) , ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((*l_144) > l_283), g_99)), 1L)) >= (*l_144))) , p_54)))), g_118))))) < p_54) > g_5);

                        ;
                    }
                }
                else
                {
                    int *l_285 = &g_96;
                    int *l_286 = &g_95;
                    int *l_287 = &g_99;
                    int *l_288 = &l_88;
                    int *l_289 = &l_155;
                    int *l_290 = &l_284;
                    int *l_291 = &l_88;
                    int *l_292 = (void*)0;
                    int *l_293 = &g_95;
                    int *l_294 = &l_155;
                    int *l_295 = &g_99;
                    int *l_296 = &g_96;
                    int *l_297 = &l_155;
                    int *l_298 = &l_88;
                    int *l_299 = (void*)0;
                    int *l_300 = (void*)0;
                    int *l_301 = &g_73;
                    int *l_302 = &g_73;
                    int *l_303 = &g_95;
                    int *l_304 = &l_100;
                    int *l_306 = &g_73;
                    int *l_307 = (void*)0;
                    int *l_308 = &g_73;
                    int *l_309 = &l_88;
                    int *l_310 = &g_95;
                    int *l_311 = &l_284;
                    int *l_312 = &l_88;
                    int *l_313 = &l_155;
                    int *l_314 = &g_95;
                    int *l_315 = &l_284;
                    int *l_316 = &g_95;
                    int *l_317 = &g_73;
                    int *l_318 = &l_100;
                    int *l_319 = &g_96;
                    int *l_320 = &l_100;
                    int *l_322 = (void*)0;
                    int *l_323 = &l_218;
                    int *l_324 = &g_95;
                    int *l_325 = &g_96;
                    int *l_326 = (void*)0;
                    int *l_327 = &l_284;
                    int *l_328 = &g_73;
                    int *l_329 = (void*)0;
                    int *l_331 = &g_99;
                    int *l_333 = (void*)0;
                    --g_335;
                    (*l_323) = (((-2L) || 0x70C91F96L) , (!((*l_290) = ((safe_add_func_int32_t_s_s(((*l_310) = (p_54 | 253UL)), g_143)) >= 0x33L))));
                }
                if (p_53)
                {
                    unsigned *l_340 = (void*)0;
                    int l_342 = 0xF8D4590AL;
                    (*l_98) &= (+(*g_74));
                    (*l_144) = (*g_74);
                    (*g_74) ^= (((g_341 &= (p_53 = g_143)) , p_53) | l_342);
                    (*l_98) ^= l_305;
                }
                else
                {
                    int l_347 = (-1L);
                    int l_356 = 9L;
                    unsigned short **l_425 = &l_151;
                    if (((safe_mul_func_uint8_t_u_u(((0xC64479F0L <= (safe_sub_func_int16_t_s_s(((*l_150) = 0xBD15L), ((*l_152) = l_347)))) , (safe_add_func_int32_t_s_s(p_53, (*g_74)))), (l_305 <= (l_305 < (-6L))))) , l_350))
                    {
                        int *l_351 = &l_155;
                        int *l_352 = (void*)0;
                        int *l_353 = (void*)0;
                        int *l_354 = &l_330;
                        int *l_355 = &l_284;
                        int *l_357 = &l_332;
                        int *l_358 = &l_100;
                        int *l_359 = &g_96;
                        int *l_360 = &l_305;
                        int *l_361 = &l_332;
                        int *l_362 = (void*)0;
                        int *l_363 = &l_321;
                        int *l_364 = &g_95;
                        int *l_365 = &l_305;
                        int *l_366 = &g_96;
                        int *l_367 = (void*)0;
                        int *l_368 = &g_73;
                        int *l_369 = &l_305;
                        int *l_370 = &l_155;
                        int *l_371 = (void*)0;
                        int *l_372 = (void*)0;
                        int *l_373 = &l_284;
                        int *l_374 = &l_100;
                        int *l_375 = &l_155;
                        int *l_376 = &l_218;
                        int *l_377 = &l_88;
                        int *l_378 = (void*)0;
                        int *l_379 = &l_88;
                        int *l_380 = &g_73;
                        int *l_381 = &l_330;
                        int *l_382 = &l_305;
                        int *l_383 = &l_356;
                        int *l_384 = (void*)0;
                        int *l_385 = &l_330;
                        int *l_386 = &l_332;
                        int *l_387 = &l_321;
                        int *l_388 = &l_218;
                        int *l_389 = &l_330;
                        int *l_390 = &g_95;
                        int *l_391 = &g_73;
                        int *l_392 = &l_330;
                        int *l_393 = &l_356;
                        int *l_394 = (void*)0;
                        int *l_395 = &g_99;
                        int *l_396 = &l_218;
                        int *l_397 = &g_73;
                        int *l_398 = &g_96;
                        int *l_399 = (void*)0;
                        int *l_400 = &l_332;
                        int *l_401 = &g_95;
                        int *l_402 = &l_155;
                        int *l_403 = (void*)0;
                        int *l_404 = &l_218;
                        int *l_405 = &l_321;
                        int *l_406 = (void*)0;
                        int *l_407 = &l_321;
                        int *l_408 = &l_88;
                        int *l_409 = &l_88;
                        int *l_410 = (void*)0;
                        int *l_411 = (void*)0;
                        int *l_412 = &g_95;
                        int *l_413 = (void*)0;
                        int *l_414 = &l_88;
                        unsigned short **l_422 = &l_152;
                        unsigned short ***l_423 = (void*)0;
                        --g_415;
                        (*l_380) |= func_55((safe_mul_func_int8_t_s_s(1L, (safe_mod_func_uint32_t_u_u(((*l_167) = ((l_347 , p_54) != g_143)), ((l_347 == p_54) || p_53))))), l_347, (l_425 = (l_424 = l_422)), (*l_144), (*l_277));

                        ;
                        ;
                        (*l_405) = (((+g_99) != (((*g_89) != (*l_424)) & (l_426 ^ p_54))) < (safe_div_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(p_53, (*l_144))) > g_334), 0x87L)));
                        (*l_414) = p_53;
                    }
                    else
                    {
                        unsigned l_435 = 0xFFE04C18L;
                        int l_441 = 9L;
                        (*l_144) ^= func_55(g_415, l_155, &g_90, p_53, &g_95);
                        g_73 |= (safe_mul_func_uint16_t_u_u(p_54, ((*l_150) |= func_55(((safe_add_func_int32_t_s_s((p_53 > (((l_435 = 7L) , (safe_div_func_uint8_t_u_u(func_55(p_54, (*l_144), &g_90, ((*l_94) = (safe_mul_func_uint8_t_u_u(g_99, func_55(l_356, func_55(g_335, p_53, l_424, (*l_144), &l_330), l_425, p_53, &l_330)))), &g_96), 1UL))) == g_99)), l_440)) < p_53), g_165, l_424, l_441, &g_99))));
                        (*l_94) |= ((*l_144) = p_53);
                        (*g_74) = ((*l_98) = (safe_div_func_int16_t_s_s(0x813BL, l_441)));
                    }

                    ;
                    ;
                }

                ;
            }
            else
            {
                short **l_444 = &l_86;
                int l_461 = 0x1FFB33DBL;
                unsigned l_471 = 0x2BA02E1FL;
                unsigned l_482 = 0xA89D96C7L;
                (*l_98) &= (*g_74);
                if ((g_30 != ((*l_444) = &l_125)))
                {
                    for (l_125 = 0; (l_125 >= 7); l_125++)
                    {
                        return (*g_89);


                    }
                    (*l_277) = &g_95;

                    ;
                }
                else
                {
                    unsigned short l_459 = 0x6D68L;
                    unsigned char *l_460 = &g_335;
                    int l_462 = 0x8BDBB942L;
                    (*l_94) = (safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((*l_144) >= ((*l_98) , 0x00L)) || (p_53 == (l_462 |= (((safe_div_func_int32_t_s_s((((l_453 < ((*l_460) = ((safe_sub_func_uint32_t_u_u(p_54, p_53)) > (g_95 && ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((0x68742A9AL != 1UL))), l_459)) , g_99))))) , 0x02L) != g_221), 0xDC97C7E4L)) <= l_461) || g_415)))), p_53)) >= 0x04L), p_53));
                    for (g_115 = 27; (g_115 == 3); g_115 = safe_sub_func_uint32_t_u_u(g_115, 1))
                    {
                        short ***l_467 = &l_444;
                        unsigned *l_472 = &g_168;
                        const int *l_480 = &g_481;
                        const int **l_479 = &l_480;
                        unsigned short *l_484 = (void*)0;
                        unsigned short *l_485 = &l_262;
                        (*l_277) = (g_5 , &l_330);

                        ;
                        if ((*l_144))
                            break;
                        if ((*g_74))
                            break;
                        (*l_144) = (((((safe_mul_func_uint16_t_u_u(((*l_485) &= (func_55(((((*l_467) = &l_86) == g_468) | ((((((l_471 , ((void*)0 != l_472)) & (func_55(((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((5UL == (((*l_277) = &l_461) == ((*l_479) = (((*l_98) = ((*l_144) = (safe_mod_func_int16_t_s_s((((void*)0 != (*g_89)) , 0xD974L), p_54)))) , &g_99)))), l_482)) , g_481), 0x5EL)) , g_341), g_45, &g_90, g_415, &g_95) , 1L)) < g_95) & p_54) >= g_165) == g_415)), g_335, l_424, l_483, &g_73) < l_461)), p_53)) >= p_54) && p_54) != g_486) > l_471);

                        ;
                        ;
                    }

                    ;
                    (*l_277) = &l_462;

                    ;
                }

                ;

            }

            ;


            for (g_115 = 0; (g_115 == 60); g_115++)
            {
                int ***l_502 = &l_277;
                unsigned *l_503 = (void*)0;
                unsigned *l_504 = &g_168;
                unsigned short **l_505 = &g_90;
                int l_567 = 0x195F4897L;
                int l_654 = 0x359A6308L;
                char l_686 = 6L;
                int l_857 = (-7L);
                const unsigned short * const l_945 = &g_45;
                const unsigned short * const *l_944 = &l_945;
                const unsigned short * const **l_943 = &l_944;
                unsigned l_949 = 0UL;
            }
        }




        ++g_1044;
        (*l_1024) = p_53;
        (*l_1007) ^= ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_1051 ^ (safe_unary_minus_func_int32_t_s((-1L)))), 2L)), (safe_rshift_func_int16_t_s_s((*l_1015), 9)))) , func_55(g_1055, (~(((safe_lshift_func_uint8_t_u_u(g_905, 1)) < ((safe_add_func_int16_t_s_s((((*l_1064) = (safe_sub_func_int32_t_s_s(func_55((safe_div_func_int8_t_s_s((((p_54 = p_53) ^ (((*l_1068) = ((++(*l_1064)) , &l_424)) != &g_89)) >= p_53), (*l_1027))), l_1070, &g_90, p_53, &l_1031), 0xE43FBA17L))) || p_54), 0xFDE3L)) , 1L)) && (*g_74))), &g_90, p_53, &g_96));
    }
    else
    {
        short l_1071 = (-1L);
        unsigned *** const l_1076 = &l_916;
        int l_1077 = 0x7C880DA6L;
        l_1077 &= (p_53 == ((l_1071 , (((((l_1071 , 8L) , ((safe_add_func_int32_t_s_s(p_53, p_54)) , ((safe_mul_func_int16_t_s_s((((*g_74) && ((func_55((g_905 > ((-2L) >= 0x23L)), g_905, l_91, l_1071, &g_95) , (*g_74)) & (*l_98))) >= 0x10L), p_54)) , l_1071))) , l_1071) , &l_916) == l_1076)) == 0x75CBC7E1L));
    }



    return (*g_89);


}







static unsigned short func_55(short p_56, unsigned p_57, unsigned short ** p_58, char p_59, int * const p_60)
{
    int **l_75 = (void*)0;
    int *l_77 = &g_73;
    int **l_76 = &l_77;
    (*l_76) = (g_74 = &g_73);

    ;
    return g_45;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_716, "g_716", print_hash_value);
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1044, "g_1044", print_hash_value);
    transparent_crc(g_1055, "g_1055", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    transparent_crc(g_1196, "g_1196", print_hash_value);
    transparent_crc(g_1302, "g_1302", print_hash_value);
    transparent_crc(g_1555, "g_1555", print_hash_value);
    transparent_crc(g_1608, "g_1608", print_hash_value);
    transparent_crc(g_1659, "g_1659", print_hash_value);
    transparent_crc(g_1662, "g_1662", print_hash_value);
    transparent_crc(g_1716, "g_1716", print_hash_value);
    transparent_crc(g_1850, "g_1850", print_hash_value);
    transparent_crc(g_1871, "g_1871", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
