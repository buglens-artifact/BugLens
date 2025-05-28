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



static const unsigned char g_12 = 0x31L;
static int g_26 = 0xA1650187L;
static int ***g_73 = (void*)0;
static int *g_78 = (void*)0;
static int **g_77 = &g_78;
static unsigned g_97 = 0x1B866267L;
static int g_109 = 1L;
static int g_132 = 0xA37A7FFAL;
static unsigned char g_169 = 255UL;
static int g_233 = 0L;
static unsigned g_253 = 4294967295UL;
static unsigned g_262 = 1UL;
static const int *g_267 = &g_26;
static unsigned *g_269 = &g_97;
static unsigned **g_268 = &g_269;
static char g_319 = 0L;
static char g_328 = 0xA8L;
static unsigned char g_354 = 4UL;
static short g_376 = 1L;
static short *g_375 = &g_376;
static char g_386 = (-1L);
static unsigned g_461 = 4294967291UL;
static unsigned g_524 = 1UL;
static int g_560 = 0L;
static unsigned g_562 = 0UL;
static char g_638 = 5L;
static int g_641 = 0x939865C9L;
static unsigned g_649 = 4294967295UL;
static unsigned short g_657 = 0x60F4L;
static int g_658 = 0x6450083CL;
static int g_762 = (-6L);
static unsigned short g_787 = 0xD50CL;
static unsigned short g_946 = 0UL;
static unsigned char g_1056 = 250UL;
static int g_1136 = 0x735DFEE4L;
static unsigned char g_1146 = 0UL;
static unsigned char *g_1161 = &g_1146;
static unsigned char **g_1160 = &g_1161;
static int *g_1164 = &g_762;
static short g_1231 = 6L;
static int ****g_1259 = (void*)0;
static short g_1377 = 0L;
static short g_1391 = 4L;
static char g_1394 = 0xD3L;
static unsigned g_1441 = 1UL;
static unsigned char g_1595 = 0xAEL;
static unsigned g_1604 = 0xD363106EL;
static short g_1777 = 0L;
static unsigned short g_1788 = 0xEFAEL;
static unsigned g_1850 = 0x373CF97BL;
static int g_1878 = 0x18ABA0CCL;
static unsigned *g_1957 = &g_461;
static unsigned **g_1956 = &g_1957;
static char *g_1966 = &g_638;
static const unsigned char *g_1995 = &g_169;
static const unsigned char **g_1994 = &g_1995;
static char g_2095 = 0x92L;
static short g_2100 = 0xEAD0L;
static int g_2115 = 0L;
static int g_2120 = 3L;
static int g_2127 = 0x608801E2L;
static unsigned char g_2128 = 0UL;
static int g_2154 = (-1L);



static unsigned short func_1(void);
static unsigned short func_4(short p_5, unsigned p_6, int p_7, int p_8);
static unsigned short func_9(const int p_10, short p_11);
static int * func_14(int p_15, int * p_16);
static int func_20(int * p_21, unsigned short p_22, unsigned short p_23, char p_24);
static short func_35(short p_36);
static int * func_37(int * p_38);
static int * func_39(int * p_40);
static int * func_41(int * p_42);
static int func_43(int * p_44, unsigned p_45, short p_46, char p_47, unsigned p_48);
static unsigned short func_1(void)
{
    unsigned short l_13 = 65526UL;
    unsigned short *l_2151 = &g_1788;
    int l_2152 = 1L;
    int *l_2153 = &g_2154;
    (*l_2153) = ((safe_rshift_func_int16_t_s_u((func_4((((*l_2151) ^= func_9(g_12, l_13)) , ((**g_1994) , (l_2152 &= l_13))), (l_13 , ((((*l_2153) = l_13) < g_253) , (*l_2153))), l_13, (*g_1164)) != g_2095), 7)) & 255UL);

    ;

    ;
    (**g_77) = 0x6F256514L;
    return g_109;
}







static unsigned short func_4(short p_5, unsigned p_6, int p_7, int p_8)
{
    char l_2158 = 0xB9L;
    for (g_97 = (-9); (g_97 == 4); g_97 = safe_add_func_uint32_t_u_u(g_97, 8))
    {
        int l_2157 = 1L;
        l_2157 = ((**g_77) = (*g_78));
        if ((*g_78))
            continue;
        return p_8;
    }
    (**g_77) = (-1L);
    (*g_78) = (*g_267);
    return l_2158;
}







static unsigned short func_9(const int p_10, short p_11)
{
    int *l_25 = &g_26;
    int **l_1061 = (void*)0;
    int **l_1062 = &g_78;
    int **l_1063 = &g_78;
    int **l_1064 = &g_78;
    int **l_1065 = &g_78;
    int **l_1066 = &g_78;
    int **l_1067 = &g_78;
    int **l_1068 = &g_78;
    int **l_1069 = &g_78;
    int **l_1070 = &g_78;
    int *l_1071 = &g_560;
    int **l_1448 = &g_78;
    int **l_1449 = &g_78;
    int **l_1450 = &l_1071;
    int *l_1451 = (void*)0;
    short l_1853 = 0x465BL;
    unsigned short *l_1854 = &g_657;
    unsigned short *l_1855 = &g_787;
    short l_2148 = 0x87A9L;
    (*l_1449) = func_14(((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s(func_20((((((l_25 != l_25) == 0x40L) == (((((*l_1855) = ((*l_1854) = (((g_12 , (safe_mul_func_int16_t_s_s((255UL <= (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(func_35(((((((**g_1160) &= (((*l_1450) = func_37((l_1071 = func_39(func_41(l_25))))) != l_1451)) , p_11) & p_10) <= 0x03L) & g_1136)), 12)) ^ g_1604), p_10)) , p_11) && p_11), 7))), l_1853))) != p_10) ^ 6L))) && p_10) , p_11) > p_10)) <= 0xADECL) , (*l_1070)), g_560, p_10, p_11))) | p_11), p_11)) ^ l_2148), &g_641);

    ;
    ;

    ;
    (**l_1062) ^= (safe_rshift_func_uint16_t_u_s(0x5F9FL, (*g_375)));
    return p_11;
}







static int * func_14(int p_15, int * p_16)
{
    (*g_78) |= ((**g_1160) == (*g_1966));
    return (*g_77);


}







static int func_20(int * p_21, unsigned short p_22, unsigned short p_23, char p_24)
{
    int *l_1856 = &g_560;
    char l_1857 = (-1L);
    unsigned short l_1881 = 0xB922L;
    unsigned l_1882 = 0x11D3215DL;
    int ** const l_1885 = &g_1164;
    char *l_1886 = &g_328;
    unsigned char ***l_1923 = &g_1160;
    unsigned char **l_1927 = &g_1161;
    unsigned char ***l_1926 = &l_1927;
    unsigned **l_1955 = (void*)0;
    int l_1997 = 0x14FCA8F5L;
    int l_2049 = 0xED113840L;
    int l_2055 = 0xAB659EC2L;
    int l_2058 = 0x8F3D0566L;
    int l_2059 = 0L;
    int l_2074 = 0xE4531732L;
    int l_2078 = 0x32233205L;
    int l_2089 = 0xDB702A1EL;
    int l_2099 = 2L;
    unsigned l_2142 = 4294967295UL;
    unsigned char l_2145 = 0xD0L;
    (**g_77) = (*g_78);
    if ((p_22 <= (((func_43(l_1856, (l_1857 <= (safe_lshift_func_int16_t_s_u((*g_375), p_24))), (((((safe_lshift_func_int16_t_s_u(0xFDD2L, func_35((1L && ((safe_mul_func_int8_t_s_s(((*l_1856) != (*l_1856)), (*g_1161))) || (*l_1856)))))) , (*p_21)) > (*p_21)) >= p_24) <= (*g_375)), (*l_1856), g_1231) == p_22) <= (*g_375)) | p_23)))
    {
        return (*p_21);
    }
    else
    {
        unsigned short l_1864 = 0x7B94L;
        int l_1873 = 0x604D52E6L;
        unsigned char *l_1874 = &g_169;
        unsigned short *l_1877 = &g_787;
        l_1864 |= func_35(p_24);
        (*p_21) = ((**g_1160) , (safe_lshift_func_uint8_t_u_s(((((p_22--) || p_24) , (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((func_35(((*g_375) = (((0x60L | ((*l_1856) , (**g_1160))) <= (*p_21)) & (l_1873 = (++(*l_1874)))))) == ((*l_1877) |= (*l_1856))), g_658)), g_1878))) > p_24), 6)));
        for (g_1394 = 4; (g_1394 == 7); g_1394 = safe_add_func_uint32_t_u_u(g_1394, 5))
        {
            if (l_1881)
                break;
            l_1882 |= (*p_21);
            (*g_77) = p_21;
        }
    }
    if (((**g_77) |= (((*l_1886) = ((void*)0 != l_1885)) >= (p_24 == (((*l_1856) >= ((p_24 | g_1056) , 0xB41C91EAL)) ^ (safe_mod_func_uint8_t_u_u((*l_1856), func_43(l_1856, g_524, (*l_1856), p_24, g_524))))))))
    {
        unsigned char ***l_1925 = &g_1160;
        int l_1931 = 1L;
        const unsigned *l_1940 = &g_649;
        int l_1941 = 0x90B7C212L;
        unsigned short l_1950 = 65528UL;
        unsigned l_1960 = 0x0F877B00L;
        for (g_649 = (-8); (g_649 != 8); g_649++)
        {
            for (g_1878 = 0; (g_1878 != 4); g_1878 = safe_add_func_int16_t_s_s(g_1878, 7))
            {
                int **l_1905 = &g_1164;
                int ***l_1904 = &l_1905;
                int ****l_1903 = &l_1904;
                int l_1928 = 0xD579ED49L;
                int l_1933 = 0x57A63F9DL;
                unsigned *l_1939 = &g_649;
                unsigned **l_1938 = &l_1939;
                unsigned short *l_1944 = (void*)0;
                unsigned short *l_1945 = &g_657;
                char *l_1965 = &g_328;
                for (g_562 = 0; (g_562 >= 19); g_562 = safe_add_func_uint32_t_u_u(g_562, 1))
                {
                    const int *l_1910 = &g_560;
                    unsigned char ****l_1924 = &l_1923;
                    short *l_1929 = (void*)0;
                    short *l_1930 = (void*)0;
                    unsigned short *l_1932 = &g_657;
                    (*p_21) = (((*l_1932) &= (safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((g_1377 = (l_1928 = (+((+(((safe_mul_func_uint8_t_u_u((g_1595 |= ((((**g_1160)++) >= (g_1259 == l_1903)) != (248UL | (safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((*g_375) = (((l_1910 != ((safe_rshift_func_int16_t_s_u(((((safe_div_func_uint32_t_u_u((!((*g_269) ^= (+(((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((*l_1886) = func_35((*g_375))), 2)), (safe_lshift_func_uint8_t_u_s((((*l_1924) = l_1923) != (l_1926 = l_1925)), (((*l_1856) ^ (*p_21)) || g_1391))))), p_23)) , (void*)0) == (void*)0)))), p_23)) == (*p_21)) , g_97) | g_169), 6)) , (void*)0)) < p_23) , (*g_375))), (-9L))), (*p_21)))))), p_24)) , (*g_78)) , p_23)) && l_1928)))) <= 5L), g_787)) ^ (*l_1910)), l_1931))) > l_1933);

                    ;
                }
                (*g_78) ^= (safe_sub_func_int16_t_s_s(0xD23BL, (((safe_rshift_func_int16_t_s_s(((((*l_1938) = (void*)0) != l_1940) && l_1941), 13)) , (safe_mul_func_uint16_t_u_u(((p_24 || (*g_375)) , ((*l_1945)--)), (5L < (safe_rshift_func_int16_t_s_s(l_1950, l_1933)))))) , (-6L))));

                ;
                (*g_78) = ((((((((g_1966 = ((safe_sub_func_uint32_t_u_u(((g_638 & ((***l_1926) |= p_23)) != (safe_div_func_uint32_t_u_u((**g_268), l_1933))), (((*g_375) = (l_1955 == (g_1956 = &l_1939))) & (safe_mul_func_uint8_t_u_u((!((l_1960 || (safe_sub_func_int32_t_s_s((~(safe_rshift_func_int16_t_s_s(p_24, ((p_24 | 4L) <= p_22)))), (*g_269)))) ^ 0x503CA0E6L)), l_1960))))) , l_1965)) == (void*)0) == g_1056) | l_1933) | 65535UL) , (*p_21)) , 248UL) | p_22);

                ;
                ;
            }
            (*g_77) = p_21;
            (*g_77) = func_37((*g_77));
        }

        ;

        ;
    }
    else
    {
        short l_1976 = (-1L);
        unsigned char **l_1993 = (void*)0;
        int *l_1998 = &g_26;
        int *l_1999 = &g_641;
        int *l_2000 = (void*)0;
        int *l_2001 = &g_560;
        int *l_2002 = &l_1997;
        int *l_2003 = &g_560;
        int *l_2004 = &g_641;
        int *l_2005 = &g_658;
        int *l_2006 = &g_658;
        int *l_2007 = &g_560;
        int *l_2008 = (void*)0;
        int *l_2009 = &g_560;
        int l_2010 = 0x6A7D5215L;
        int *l_2011 = &g_26;
        int *l_2012 = &g_560;
        int *l_2013 = &g_560;
        int *l_2014 = &g_641;
        int *l_2015 = &l_1997;
        int l_2016 = 0x3117553CL;
        int *l_2017 = &g_641;
        int *l_2018 = (void*)0;
        int *l_2019 = (void*)0;
        int *l_2020 = &l_2010;
        int *l_2021 = &g_109;
        int *l_2022 = &l_1997;
        int *l_2023 = (void*)0;
        int *l_2024 = &g_641;
        int *l_2025 = &l_2016;
        int *l_2026 = &g_658;
        int *l_2027 = &g_26;
        int *l_2028 = &g_560;
        int *l_2029 = (void*)0;
        int *l_2030 = &l_2016;
        int *l_2031 = (void*)0;
        int *l_2032 = &g_658;
        int *l_2033 = &g_26;
        int *l_2034 = &g_641;
        int *l_2035 = &l_1997;
        int *l_2036 = &g_641;
        int l_2037 = (-5L);
        int *l_2038 = &g_641;
        int *l_2039 = &l_2010;
        int *l_2040 = &g_109;
        int *l_2041 = &l_2010;
        int l_2042 = 0xDED843E5L;
        int *l_2043 = &l_2010;
        int *l_2044 = &l_1997;
        int *l_2045 = &g_109;
        int *l_2046 = (void*)0;
        int *l_2047 = &g_641;
        int *l_2048 = &g_560;
        int *l_2050 = &g_641;
        int *l_2051 = &l_2010;
        int *l_2052 = &g_658;
        int *l_2053 = (void*)0;
        int *l_2054 = &g_641;
        int *l_2056 = &l_2055;
        int *l_2057 = &l_2010;
        int *l_2060 = (void*)0;
        int *l_2061 = &g_658;
        int l_2062 = 1L;
        int *l_2063 = &l_2062;
        int *l_2064 = &l_1997;
        int l_2065 = (-4L);
        int *l_2066 = &l_2062;
        int l_2067 = 0L;
        int *l_2068 = (void*)0;
        int l_2069 = 0xFE569C4AL;
        int *l_2070 = &l_2069;
        int *l_2071 = &l_2062;
        int *l_2072 = (void*)0;
        int *l_2073 = &l_2062;
        int *l_2075 = &g_109;
        int *l_2076 = (void*)0;
        int *l_2077 = &l_2049;
        int *l_2079 = (void*)0;
        int *l_2080 = &l_2055;
        int *l_2081 = &l_2078;
        int *l_2082 = &l_2069;
        int l_2083 = 0x60CD66FFL;
        int *l_2084 = &l_2069;
        int *l_2085 = &l_1997;
        int *l_2086 = (void*)0;
        int *l_2087 = &l_2037;
        int *l_2088 = &g_658;
        int *l_2090 = &l_2042;
        int *l_2091 = &l_1997;
        int *l_2092 = &l_2067;
        int *l_2093 = &l_2074;
        int *l_2094 = &g_26;
        int *l_2096 = (void*)0;
        int *l_2097 = &l_2049;
        int *l_2098 = &l_1997;
        int l_2101 = 0x0587779DL;
        int *l_2102 = &l_2089;
        int *l_2103 = &l_2078;
        int l_2104 = 0x248AEEA2L;
        int *l_2105 = &l_2059;
        int *l_2106 = &l_2069;
        int *l_2107 = (void*)0;
        int *l_2108 = &l_2010;
        int *l_2109 = &l_2089;
        int *l_2110 = &g_26;
        int *l_2111 = &l_2078;
        int *l_2112 = &l_2101;
        int *l_2113 = (void*)0;
        int *l_2114 = (void*)0;
        int l_2116 = 0x998028CEL;
        int l_2117 = 0xFD5F88C5L;
        int *l_2118 = &l_2042;
        int *l_2119 = &g_109;
        int *l_2121 = &l_2049;
        int *l_2122 = (void*)0;
        int *l_2123 = &l_2037;
        int *l_2124 = (void*)0;
        int l_2125 = 0L;
        int *l_2126 = &l_2074;
        for (g_658 = (-28); (g_658 != 6); ++g_658)
        {
            unsigned short l_1971 = 6UL;
            short *l_1977 = &g_376;
            int *l_1979 = &g_26;
            const unsigned char ***l_1996 = &g_1994;
            if ((safe_sub_func_int32_t_s_s(((*l_1856) = l_1971), (**g_77))))
            {
                short **l_1978 = &l_1977;
                for (l_1971 = 0; (l_1971 != 51); l_1971++)
                {
                    (*g_77) = (*g_77);
                    (**g_77) &= (&p_21 == &l_1856);
                    for (g_1377 = (-5); (g_1377 > (-22)); --g_1377)
                    {
                        return l_1976;
                    }
                }
                (*g_78) ^= ((*g_1966) < (((*l_1978) = l_1977) == &g_1391));
                return (*p_21);
            }
            else
            {
                int *l_1980 = &g_641;
                (*g_77) = func_37(l_1979);

                ;
                (*g_77) = (*g_77);
                (*g_77) = l_1980;

                ;
            }

            ;
            (*g_77) = p_21;

            ;
            (**g_77) ^= ((*l_1856) = ((((((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((-1L), l_1976)) | ((0xEAC9CF61L <= (*l_1856)) & (safe_div_func_uint8_t_u_u((p_24 | (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_1993 != ((*l_1996) = g_1994)), (*g_375))), p_23))), 251UL)))), p_23)) < (*g_1995)), 1L)) , (*l_1979)) , l_1996) != &g_1160) != 0x75C8L) & (*l_1979)));
        }
        ++g_2128;
        for (l_1882 = 0; (l_1882 > 58); l_1882++)
        {
            int l_2143 = 0x14092004L;
            for (l_1857 = 18; (l_1857 != (-26)); l_1857 = safe_sub_func_uint16_t_u_u(l_1857, 4))
            {
                unsigned l_2141 = 7UL;
                (*g_77) = p_21;
                (*l_2043) = (((**g_1956) |= ((g_524 , (((*g_1161) ^= (((*g_375) = (safe_lshift_func_uint16_t_u_u((func_35(((250UL <= (((safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_2141, 0xD69AL)), p_22)) && ((p_23 , l_2142) && (p_24 != (0x47FFL && p_24)))) ^ 0xB53141B1L)) >= 0UL)) ^ l_2143), g_1391))) >= 0x32ABL)) & (*g_1966))) >= 0L)) , 1L);
                if ((func_43(p_21, p_22, p_22, (*g_1966), (((*l_2094) = (((func_35(func_43(func_39(func_37(&l_2143)), l_2141, (*g_375), (*g_1966), p_23)) == 0x7790L) == 5UL) < g_2095)) , p_24)) , (*p_21)))
                {
                    short l_2144 = (-2L);
                    if (((*l_1856) ^= ((l_2144 ^= 0L) > p_22)))
                    {
                        (*p_21) = 0x19860E15L;
                    }
                    else
                    {
                        (*l_2043) = 2L;
                        if ((*p_21))
                            break;
                    }
                    (*l_2093) = func_35(((*l_1856) = (*g_375)));
                    ++l_2145;
                    if ((*p_21))
                        break;
                }
                else
                {
                    return (**g_77);
                }
            }
        }
    }

    ;

    ;
    return (*l_1856);
}







static short func_35(short p_36)
{
    int *l_1452 = &g_109;
    char *l_1455 = (void*)0;
    char *l_1456 = &g_328;
    int l_1457 = (-3L);
    unsigned l_1464 = 0x62290ED8L;
    int l_1474 = 1L;
    const int l_1486 = 5L;
    unsigned *l_1514 = &g_461;
    unsigned l_1515 = 1UL;
    int l_1520 = (-1L);
    int l_1578 = 0x46D165E1L;
    int l_1584 = 0x83B5F94EL;
    const int **l_1598 = &g_267;
    short l_1622 = 0L;
    int l_1761 = 1L;
    int l_1782 = 0xD032778FL;
    (*g_77) = l_1452;

    ;
    return (*g_375);
}







static int * func_37(int * p_38)
{
    short l_1079 = 0xBDC1L;
    unsigned *l_1081 = &g_253;
    int l_1106 = 0x105008FCL;
    int l_1113 = 8L;
    unsigned char *l_1159 = &g_169;
    unsigned char **l_1158 = &l_1159;
    int *l_1177 = &l_1113;
    int l_1179 = 0xA2BB6377L;
    int ***l_1242 = (void*)0;
    const short l_1272 = 0x50BBL;
    int *l_1277 = &g_560;
    int *l_1278 = &g_26;
    int *l_1279 = &l_1113;
    int *l_1280 = (void*)0;
    int *l_1281 = (void*)0;
    int *l_1282 = (void*)0;
    int *l_1283 = &g_109;
    int *l_1284 = (void*)0;
    int *l_1285 = &g_641;
    int *l_1286 = &l_1113;
    int *l_1287 = &g_26;
    int *l_1288 = &g_658;
    int l_1289 = 0x98F61A71L;
    int *l_1290 = &g_109;
    int *l_1291 = &l_1113;
    int *l_1292 = &l_1113;
    int *l_1293 = &g_26;
    int *l_1294 = &l_1289;
    int *l_1295 = &l_1106;
    int *l_1296 = &l_1289;
    int *l_1297 = &g_109;
    int *l_1298 = &g_658;
    int *l_1299 = &l_1106;
    int *l_1300 = &l_1106;
    int *l_1301 = &g_641;
    int *l_1302 = &g_641;
    int *l_1303 = &g_109;
    int *l_1304 = (void*)0;
    int *l_1305 = &g_560;
    int *l_1306 = (void*)0;
    int *l_1307 = &g_658;
    int *l_1308 = &l_1289;
    int *l_1309 = &g_109;
    int *l_1310 = &g_26;
    int l_1311 = 0xE3BEF620L;
    int *l_1312 = &g_109;
    int *l_1313 = (void*)0;
    int *l_1314 = &l_1289;
    int *l_1315 = &l_1289;
    int *l_1316 = &g_560;
    int *l_1317 = &g_26;
    int *l_1318 = &g_109;
    int *l_1319 = &g_658;
    int *l_1320 = &l_1106;
    int *l_1321 = (void*)0;
    int l_1322 = 0x2CFF2CBEL;
    int *l_1323 = &l_1311;
    int *l_1324 = &l_1106;
    int l_1325 = 0x095ECB76L;
    int *l_1326 = &g_26;
    int *l_1327 = &l_1106;
    int *l_1328 = &l_1311;
    int *l_1329 = (void*)0;
    int *l_1330 = &l_1311;
    int *l_1331 = &l_1311;
    int l_1332 = 9L;
    int *l_1333 = (void*)0;
    int *l_1334 = &l_1322;
    int *l_1335 = (void*)0;
    int *l_1336 = &l_1106;
    int *l_1337 = &l_1325;
    int *l_1338 = &l_1322;
    int *l_1339 = &g_560;
    int *l_1340 = &l_1332;
    int *l_1341 = &l_1113;
    int *l_1342 = &g_658;
    int *l_1343 = (void*)0;
    int l_1344 = 7L;
    int *l_1345 = &g_109;
    int *l_1346 = (void*)0;
    int l_1347 = 0xCEB9FBFBL;
    int *l_1348 = &l_1325;
    int *l_1349 = &g_641;
    int l_1350 = (-1L);
    int *l_1351 = &g_109;
    int *l_1352 = (void*)0;
    int l_1353 = (-5L);
    int *l_1354 = &g_109;
    int *l_1355 = &g_109;
    int *l_1356 = &l_1353;
    int *l_1357 = &l_1106;
    int *l_1358 = &l_1350;
    int *l_1359 = &g_560;
    int *l_1360 = (void*)0;
    int *l_1361 = (void*)0;
    int *l_1362 = (void*)0;
    int *l_1363 = &g_641;
    int *l_1364 = &l_1113;
    int *l_1365 = &l_1347;
    int *l_1366 = &l_1353;
    int *l_1367 = &g_641;
    int *l_1368 = &l_1353;
    int *l_1369 = &l_1347;
    int *l_1370 = &g_658;
    int *l_1371 = &l_1347;
    int *l_1372 = &l_1332;
    int l_1373 = 8L;
    int *l_1374 = &g_658;
    int *l_1375 = &l_1311;
    int *l_1376 = &l_1373;
    int *l_1378 = &l_1106;
    int *l_1379 = &l_1347;
    int *l_1380 = &l_1322;
    int l_1381 = (-1L);
    int *l_1382 = (void*)0;
    int *l_1383 = &g_109;
    int *l_1384 = &l_1106;
    int *l_1385 = &l_1344;
    int *l_1386 = &l_1350;
    int *l_1387 = &g_641;
    int *l_1388 = &l_1325;
    int *l_1389 = &l_1344;
    int *l_1390 = (void*)0;
    int *l_1392 = &l_1344;
    int *l_1393 = (void*)0;
    int *l_1395 = &l_1113;
    int *l_1396 = &l_1311;
    int *l_1397 = &g_658;
    int *l_1398 = &l_1311;
    int *l_1399 = &g_26;
    int *l_1400 = &l_1381;
    int *l_1401 = (void*)0;
    int *l_1402 = (void*)0;
    int *l_1403 = &g_658;
    int *l_1404 = &l_1373;
    int *l_1405 = (void*)0;
    int *l_1406 = &l_1332;
    int l_1407 = 0x05A75E2EL;
    int *l_1408 = &g_560;
    int l_1409 = 0xCE316027L;
    int *l_1410 = &l_1353;
    int *l_1411 = &l_1373;
    int *l_1412 = &l_1311;
    int *l_1413 = &l_1113;
    int l_1414 = 0x0482D33CL;
    int *l_1415 = &g_658;
    int *l_1416 = (void*)0;
    int *l_1417 = &l_1344;
    int *l_1418 = &l_1347;
    int *l_1419 = (void*)0;
    int *l_1420 = (void*)0;
    int *l_1421 = &l_1409;
    int *l_1422 = &l_1322;
    int *l_1423 = &l_1311;
    int *l_1424 = &l_1414;
    int *l_1425 = (void*)0;
    int l_1426 = 8L;
    int *l_1427 = &l_1350;
    int *l_1428 = &l_1106;
    int l_1429 = (-5L);
    int *l_1430 = &l_1106;
    int *l_1431 = &l_1426;
    int *l_1432 = (void*)0;
    int *l_1433 = &l_1381;
    int *l_1434 = (void*)0;
    int *l_1435 = &l_1347;
    int *l_1436 = &l_1353;
    int *l_1437 = &g_109;
    int l_1438 = 1L;
    int *l_1439 = &l_1350;
    int *l_1440 = (void*)0;
    int l_1444 = 1L;
    unsigned char l_1445 = 0x37L;
    for (g_132 = 0; (g_132 < (-15)); g_132 = safe_sub_func_uint8_t_u_u(g_132, 1))
    {
        unsigned char l_1076 = 0xEAL;
        int l_1092 = 0x2CCB98A1L;
        int l_1093 = 0x2144C835L;
        int l_1099 = 0x2D00F62DL;
        char *l_1184 = &g_638;
        int *l_1227 = &l_1113;
        int l_1234 = 0x29DCA6EBL;
        int **l_1236 = &g_1164;
        int ***l_1235 = &l_1236;
        int ****l_1237 = (void*)0;
        int ****l_1238 = &l_1235;
        int ***l_1240 = &l_1236;
        int ****l_1239 = &l_1240;
        int ***l_1241 = (void*)0;
        unsigned short *l_1271 = &g_787;
        int *l_1273 = (void*)0;
        int *l_1274 = &l_1099;
    }
    (*g_77) = &l_1113;

    ;
    g_1441--;
    --l_1445;
    return p_38;



}







static int * func_39(int * p_40)
{
    return p_40;


}







static int * func_41(int * p_42)
{
    short l_51 = 0xA325L;
    unsigned char l_56 = 1UL;
    int *l_406 = &g_26;
    int l_409 = 0x183CB46DL;
    int l_427 = 4L;
    char l_431 = 0L;
    int l_449 = 3L;
    int l_721 = 0xA886B4C2L;
    int l_751 = 0x8362AD11L;
    int l_765 = 0xF8D316E8L;
    unsigned l_874 = 0UL;
    int ***l_894 = &g_77;
    char l_998 = 1L;
    if (func_43(&g_26, (safe_add_func_uint8_t_u_u(g_12, (l_51 == (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_12, l_56)), (l_51 >= l_51)))))), g_26, g_12, g_12))
    {
        short l_405 = 0xAC3DL;
        int l_432 = (-4L);
        unsigned l_464 = 0x8ECA6CABL;
        int l_470 = 0x827B6874L;
        int l_474 = 1L;
        int l_513 = 0x2C64FC77L;
        int l_521 = 0x989D3A3CL;
        short l_553 = 3L;
        int *l_567 = &g_109;
        unsigned char *l_571 = (void*)0;
        unsigned char *l_572 = (void*)0;
        unsigned char *l_573 = (void*)0;
        unsigned char *l_574 = &g_354;
        if (func_43((l_405 , p_42), l_405, l_51, l_405, func_43(l_406, l_405, ((safe_rshift_func_uint8_t_u_s(g_354, 0)) , ((*g_375) = func_43(l_406, g_262, (*l_406), g_253, l_405))), l_405, l_405)))
        {
            int *l_410 = &g_109;
            int *l_411 = (void*)0;
            int *l_412 = &g_109;
            int *l_413 = &l_409;
            int *l_414 = &g_109;
            int *l_415 = &g_26;
            int *l_416 = &l_409;
            int *l_417 = &g_26;
            int *l_418 = &g_26;
            int *l_419 = (void*)0;
            int *l_420 = &l_409;
            int *l_421 = &g_26;
            int *l_422 = &g_26;
            int *l_423 = &g_109;
            int *l_424 = &l_409;
            int *l_425 = &g_109;
            int *l_426 = &l_409;
            int *l_428 = &l_409;
            int *l_429 = &g_26;
            int *l_430 = (void*)0;
            int *l_433 = &l_432;
            int *l_434 = &l_427;
            int *l_435 = &g_26;
            int *l_436 = (void*)0;
            int l_437 = 0x6F45A59EL;
            int *l_438 = &g_109;
            int *l_439 = (void*)0;
            int *l_440 = &l_427;
            int *l_441 = &l_427;
            int *l_442 = &g_109;
            int *l_443 = (void*)0;
            int *l_444 = &l_432;
            int *l_445 = (void*)0;
            int *l_446 = &l_427;
            int *l_447 = &l_409;
            int *l_448 = &g_26;
            int *l_450 = &l_432;
            int l_451 = 0x7A4A607FL;
            int *l_452 = &l_409;
            int *l_453 = &l_449;
            int *l_454 = &l_451;
            int *l_455 = (void*)0;
            int *l_456 = &l_449;
            int *l_457 = &l_427;
            int *l_458 = &l_427;
            int *l_459 = &l_451;
            int *l_460 = &l_427;
            ++g_461;
            ++l_464;
            (*l_424) &= (*l_406);
        }
        else
        {
            int *l_467 = &l_432;
            int *l_468 = (void*)0;
            int *l_469 = (void*)0;
            int *l_471 = &l_427;
            int *l_472 = &g_109;
            int *l_473 = &l_432;
            int *l_475 = &g_109;
            int *l_476 = &l_432;
            int *l_477 = (void*)0;
            int *l_478 = &l_470;
            int *l_479 = &l_409;
            int *l_480 = &l_432;
            int *l_481 = &l_432;
            int *l_482 = &l_449;
            int *l_483 = &l_432;
            int *l_484 = (void*)0;
            int *l_485 = &g_26;
            int *l_486 = &l_432;
            int *l_487 = &l_449;
            int *l_488 = (void*)0;
            int *l_489 = (void*)0;
            int *l_490 = &g_109;
            int *l_491 = &g_26;
            int *l_492 = (void*)0;
            int *l_493 = (void*)0;
            int *l_494 = (void*)0;
            int *l_495 = &l_449;
            int *l_496 = &l_409;
            int *l_497 = &l_409;
            int l_498 = 0L;
            int *l_499 = &l_432;
            int *l_500 = &g_26;
            int *l_501 = &l_498;
            int *l_502 = (void*)0;
            int *l_503 = (void*)0;
            int *l_504 = (void*)0;
            int *l_505 = (void*)0;
            int *l_506 = &l_427;
            int l_507 = 8L;
            int *l_508 = &l_449;
            int *l_509 = (void*)0;
            int *l_510 = &l_470;
            int *l_511 = &l_507;
            int *l_512 = &l_449;
            int *l_514 = &l_513;
            int *l_515 = &l_470;
            int *l_516 = &l_498;
            int *l_517 = &l_409;
            int *l_518 = &l_409;
            char l_519 = 0xD9L;
            int *l_520 = &l_470;
            int *l_522 = &l_498;
            int *l_523 = &l_513;
lbl_568:
            g_524++;
            for (g_97 = 0; (g_97 > 55); g_97++)
            {
                unsigned char l_530 = 0UL;
                char *l_541 = &g_319;
                unsigned *l_542 = (void*)0;
                unsigned *l_543 = &l_464;
                int l_552 = 0x217DB600L;
                (*l_512) |= (((*g_269) <= (*l_480)) == ((safe_unary_minus_func_uint8_t_u(l_530)) , (func_43(((*g_77) = (*g_77)), ((safe_lshift_func_int16_t_s_s((*g_375), l_464)) || func_43(p_42, ((*l_543) = (((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((*l_541) = (safe_div_func_int32_t_s_s(func_43((((*g_375) = (((((safe_rshift_func_uint16_t_u_s(l_530, 5)) <= g_354) >= (*g_375)) >= (*l_406)) ^ 1L)) , (void*)0), g_26, (*l_406), l_405, l_530), 0x6C97FDCCL))), 0xE1L)), 0x5AL)) , 65535UL) , (*l_522))), (*l_520), l_530, (*l_499))), l_530, l_530, l_470) , l_405)));
                if ((((*p_42) = (*g_267)) != ((*g_375) | (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(0L, l_464)), ((*l_541) ^= l_432))))))
                {
                    p_42 = p_42;
                    (*l_495) &= (safe_rshift_func_int16_t_s_s((((((*l_406) , 0x0E753FC6L) , ((*l_406) = ((((((*l_406) && (*l_510)) & ((((safe_mod_func_uint8_t_u_u((*l_483), 0x85L)) < (l_552 = ((((g_386 == (((void*)0 == g_375) || l_530)) , (-4L)) || l_530) != (-1L)))) >= g_109) & (*p_42))) , l_553) || 0L) , 0xD032L))) , g_319) ^ l_470), l_405));
                }
                else
                {
                    unsigned char *l_558 = &l_56;
                    int l_559 = 4L;
                    int *l_561 = &g_109;
                    (*l_479) ^= ((safe_add_func_uint16_t_u_u(func_43(p_42, g_169, func_43((*g_77), (safe_mod_func_int8_t_s_s(((((*l_558) = (4294967288UL ^ l_530)) > (g_524 , g_97)) , (*l_406)), l_474)), (*g_375), g_524, l_559), g_386, l_530), 0xE99BL)) , (*g_267));
                    g_562++;
                    p_42 = &l_470;

                    ;
                    (*l_499) = ((**g_268) ^ (65535UL == 65533UL));
                }
                l_567 = (*g_77);

                ;
                if (l_474)
                    goto lbl_568;
            }
            (*l_500) |= (-1L);
            (*l_479) = ((*l_522) |= 0L);
        }

        ;
        ;
        (*p_42) = ((*p_42) , (*p_42));
        if (func_43(&l_470, ((safe_div_func_int16_t_s_s(((0x37L <= (!(*l_406))) == ((*l_574) = g_560)), (*g_375))) , (safe_mod_func_uint32_t_u_u(((((-4L) == ((*l_574) |= (g_169 , g_109))) , &l_431) != &l_431), (*g_269)))), (*l_406), g_169, (*l_406)))
        {
            int *l_577 = &g_109;
            char *l_579 = &g_386;
            char l_584 = 0xC0L;
            (*g_77) = l_577;

            ;
            if (((((0xCDF9D4AEL != (safe_unary_minus_func_uint16_t_u((((((*l_579) = g_169) != (((*g_269) &= ((((((*g_375) = (!0xCEFCL)) & ((safe_rshift_func_uint8_t_u_u(g_233, ((((safe_sub_func_int16_t_s_s((((*l_577) , (-1L)) || (!0x6FL)), 1L)) & 0x96AAL) | (*p_42)) | l_584))) & (*p_42))) >= 0x89L) , 0L) ^ (*l_577))) , 0x4CL)) , (*g_375)) >= (*l_406))))) , (*g_269)) , (*l_406)) , (**g_77)))
            {
                return l_577;


            }
            else
            {
                return l_577;


            }
        }
        else
        {
            int *l_585 = &l_470;
            (*l_585) |= (*l_406);
            (*g_77) = (((*g_269) ^ func_43(p_42, (*l_406), (((*g_375) = (*g_375)) | 0x2BF1L), (0xE16A5420L & (*l_585)), g_12)) , &l_449);

            ;
            (*g_78) |= 0x1CC538B9L;
            (*g_77) = l_585;

            ;
        }

        ;
    }
    else
    {
        char l_600 = 0xFFL;
        short l_615 = (-7L);
        int l_618 = 2L;
        int l_670 = 0x30755544L;
        unsigned short *l_672 = (void*)0;
        int l_734 = 0x233DAA16L;
        int l_747 = 0xF685AF22L;
        int l_966 = (-1L);
        for (g_233 = (-29); (g_233 > 2); g_233++)
        {
            unsigned l_612 = 7UL;
            for (g_132 = (-12); (g_132 < 14); g_132 = safe_add_func_uint32_t_u_u(g_132, 6))
            {
                char l_595 = 0xB5L;
                short *l_603 = &l_51;
                int * const l_605 = &g_132;
                int * const *l_604 = &l_605;
                int * const **l_606 = &l_604;
                (*l_406) = ((((*l_603) |= ((*g_375) = (safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s((*l_406), (safe_unary_minus_func_uint8_t_u(l_595)))), (safe_add_func_int16_t_s_s(0x185BL, (g_233 || ((**g_268) , (((safe_add_func_int8_t_s_s(l_595, l_600)) , (safe_mod_func_int16_t_s_s((l_595 & g_253), l_600))) && 0x8FL))))))))) & 65530UL) , (*p_42));
                (*l_606) = l_604;
            }
            for (l_427 = 0; (l_427 <= (-15)); l_427 = safe_sub_func_uint16_t_u_u(l_427, 4))
            {
                unsigned l_611 = 0xA3EAAFCCL;
                for (l_409 = 1; (l_409 <= (-26)); l_409 = safe_sub_func_int32_t_s_s(l_409, 4))
                {
                    if (l_611)
                        break;
                    (*p_42) = (*l_406);
                    l_612 = ((*l_406) = l_600);
                    (*g_77) = p_42;

                    ;
                }
            }
        }

        ;
        if ((((((safe_mul_func_int8_t_s_s(l_600, 0x10L)) & l_615) <= ((*g_269) = l_600)) , l_600) <= func_43((*g_77), (l_618 = (safe_sub_func_int8_t_s_s((func_43(p_42, l_600, (*g_375), g_262, (*l_406)) ^ l_615), 0x6EL))), (*g_375), l_409, l_431)))
        {
            int *l_619 = &l_427;
            int *l_620 = (void*)0;
            int *l_621 = &g_560;
            int *l_622 = &l_427;
            int *l_623 = &g_26;
            int *l_624 = (void*)0;
            int *l_625 = (void*)0;
            int l_626 = 0x222B4EF8L;
            int *l_627 = (void*)0;
            int *l_628 = &g_560;
            int l_629 = 0xEAA9D32CL;
            int *l_630 = &l_427;
            int *l_631 = &l_626;
            int *l_632 = &g_560;
            int *l_633 = &g_26;
            int *l_634 = (void*)0;
            int *l_635 = (void*)0;
            int *l_636 = (void*)0;
            int l_637 = 7L;
            int l_639 = 1L;
            int *l_640 = &g_560;
            int *l_642 = &g_26;
            int *l_643 = &l_449;
            int *l_644 = &g_109;
            int *l_645 = &g_641;
            int *l_646 = &g_109;
            int *l_647 = &g_641;
            int *l_648 = &l_618;
            unsigned short *l_656 = &g_657;
            g_649++;
            (*l_630) &= (*g_267);
            p_42 = (func_43(p_42, (*l_406), (*g_375), (l_618 || (g_658 = ((!(((safe_div_func_uint8_t_u_u(l_618, (safe_mul_func_uint16_t_u_u(((*l_656) = (*l_406)), g_649)))) != (*p_42)) , (*g_269))) | (*p_42)))), g_461) , (void*)0);

            ;
        }
        else
        {
            unsigned *l_659 = &g_649;
            int l_660 = 2L;
            char *l_667 = &l_600;
            unsigned short *l_668 = (void*)0;
            unsigned short *l_669 = &g_657;
            char *l_671 = &g_328;
            int l_723 = 6L;
            int l_760 = 0L;
            int **l_890 = &g_78;
            unsigned char l_988 = 0xCBL;
            (*p_42) = ((((((*l_671) = (((*l_659) ^= g_26) , ((l_660 >= ((safe_div_func_int16_t_s_s((g_109 == ((*l_669) = (safe_sub_func_int32_t_s_s((((0xBBL ^ (+1UL)) , l_618) , (*g_267)), ((l_618 > ((safe_div_func_int8_t_s_s((((*l_667) = l_660) != 9L), 6L)) <= l_660)) || 0x4AL))))), l_670)) , (*l_406))) , 0xDBL))) , l_668) != l_672) , (*l_406)) < 0x0141L);
            if (func_43(&l_618, (safe_mul_func_int8_t_s_s((g_262 , func_43((p_42 = p_42), (0x7FEBL <= l_660), ((*g_375) || (l_672 == l_669)), g_26, g_376)), l_660)), l_670, g_328, l_660))
            {
                char l_677 = 0xF1L;
                int l_715 = 0xDF4CA21FL;
                int l_729 = (-1L);
                int l_735 = 0L;
                int l_741 = 0x31DDCFD4L;
                int l_794 = 0x16012391L;
                p_42 = &l_670;

                ;
                if ((safe_add_func_int8_t_s_s(9L, ((*p_42) != l_677))))
                {
                    int *l_678 = &g_26;
                    int *l_679 = &g_560;
                    int *l_680 = &g_26;
                    int *l_681 = &g_658;
                    int *l_682 = (void*)0;
                    int *l_683 = &l_670;
                    int *l_684 = &l_670;
                    int *l_685 = &g_109;
                    int *l_686 = &l_670;
                    int *l_687 = (void*)0;
                    int *l_688 = &g_560;
                    int *l_689 = &g_560;
                    int *l_690 = (void*)0;
                    int *l_691 = &l_670;
                    int *l_692 = &g_109;
                    int *l_693 = (void*)0;
                    int *l_694 = &l_409;
                    int *l_695 = &g_26;
                    int *l_696 = &g_641;
                    int *l_697 = (void*)0;
                    int *l_698 = &g_26;
                    int *l_699 = &g_109;
                    int *l_700 = &g_658;
                    int *l_701 = &g_641;
                    int *l_702 = (void*)0;
                    int *l_703 = (void*)0;
                    int *l_704 = (void*)0;
                    int *l_705 = &l_427;
                    int *l_706 = &l_670;
                    int *l_707 = &g_560;
                    int *l_708 = &l_409;
                    int *l_709 = &l_427;
                    int *l_710 = &g_26;
                    int *l_711 = &g_109;
                    int *l_712 = &l_660;
                    int *l_713 = &l_618;
                    int *l_714 = &g_26;
                    int *l_716 = &l_670;
                    int *l_717 = (void*)0;
                    int *l_718 = &g_560;
                    int *l_719 = &g_641;
                    int *l_720 = &g_560;
                    int *l_722 = &l_670;
                    int *l_724 = &l_618;
                    int *l_725 = &g_641;
                    int *l_726 = &g_560;
                    int *l_727 = &l_723;
                    int *l_728 = (void*)0;
                    int *l_730 = &g_658;
                    int *l_731 = &l_723;
                    int *l_732 = (void*)0;
                    int *l_733 = &l_721;
                    int *l_736 = &l_735;
                    int *l_737 = &l_409;
                    int *l_738 = &l_735;
                    int *l_739 = &l_449;
                    int *l_740 = &l_618;
                    int *l_742 = (void*)0;
                    int *l_743 = &l_427;
                    int *l_744 = (void*)0;
                    int *l_745 = &g_560;
                    int *l_746 = &l_449;
                    int *l_748 = (void*)0;
                    int *l_749 = &l_670;
                    int *l_750 = &l_427;
                    int *l_752 = &l_618;
                    int *l_753 = &g_26;
                    int *l_754 = &g_560;
                    int *l_755 = &l_735;
                    int *l_756 = (void*)0;
                    int *l_757 = &l_409;
                    int *l_758 = (void*)0;
                    int l_759 = 0x37DB2F1FL;
                    int *l_761 = &l_721;
                    int *l_763 = &l_751;
                    int *l_764 = &l_721;
                    int l_766 = (-1L);
                    int *l_767 = (void*)0;
                    int *l_768 = &g_641;
                    int *l_769 = &l_741;
                    int *l_770 = &l_760;
                    int *l_771 = &l_729;
                    int *l_772 = &l_765;
                    int *l_773 = (void*)0;
                    int *l_774 = &g_26;
                    int *l_775 = &l_723;
                    int *l_776 = &l_759;
                    int *l_777 = &l_751;
                    int l_778 = 0x8F7C3800L;
                    int *l_779 = &l_735;
                    int *l_780 = &l_734;
                    int *l_781 = &l_747;
                    int *l_782 = (void*)0;
                    int *l_783 = &l_660;
                    int *l_784 = (void*)0;
                    int l_785 = 0x9AA1CA35L;
                    int *l_786 = &l_409;
                    ++g_787;
                }
                else
                {
                    int l_809 = 1L;
                    int l_867 = 0xE85252CCL;
                    int *l_877 = &l_765;
                    if (((safe_rshift_func_int8_t_s_u(l_600, (((-1L) > (((*l_659) = (safe_add_func_int8_t_s_s((+g_657), (l_794 > (safe_sub_func_int16_t_s_s((func_43((*g_77), (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(l_677, ((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_26 && (safe_mod_func_uint32_t_u_u((((l_660 , ((safe_div_func_int16_t_s_s(func_43(p_42, g_253, l_735, g_132, g_253), 0x8658L)) , 65531UL)) > 65529UL) < 0UL), 6L))), (*p_42))), 0)) , (*l_406)))) != g_657), l_723)), (*g_375), l_809, l_729) > l_809), l_600)))))) , l_670)) <= l_660))) , 0x5E9DA915L))
                    {
                        int *l_810 = &l_449;
                        int *l_811 = &l_409;
                        int *l_812 = &l_735;
                        int *l_813 = &l_618;
                        int *l_814 = &l_809;
                        int *l_815 = &g_109;
                        int *l_816 = &g_658;
                        int l_817 = 0L;
                        int *l_818 = &l_723;
                        int *l_819 = (void*)0;
                        int *l_820 = &g_109;
                        int *l_821 = &l_734;
                        int *l_822 = &l_794;
                        int *l_823 = &l_794;
                        int *l_824 = &l_817;
                        int *l_825 = &l_809;
                        int *l_826 = &l_735;
                        int *l_827 = (void*)0;
                        int *l_828 = &l_449;
                        int *l_829 = &l_765;
                        int *l_830 = (void*)0;
                        int *l_831 = (void*)0;
                        int *l_832 = &g_560;
                        int *l_833 = &g_560;
                        int *l_834 = (void*)0;
                        int *l_835 = &l_741;
                        int *l_836 = &l_723;
                        int *l_837 = &l_734;
                        int *l_838 = &g_109;
                        int *l_839 = (void*)0;
                        int *l_840 = (void*)0;
                        int *l_841 = &l_751;
                        int *l_842 = (void*)0;
                        int *l_843 = &l_660;
                        int *l_844 = &l_765;
                        int *l_845 = &g_560;
                        int *l_846 = (void*)0;
                        int *l_847 = (void*)0;
                        int *l_848 = &l_817;
                        int *l_849 = (void*)0;
                        int *l_850 = &g_109;
                        int *l_851 = &l_409;
                        int *l_852 = &g_658;
                        int *l_853 = &l_723;
                        int *l_854 = &l_729;
                        int *l_855 = (void*)0;
                        int *l_856 = &l_618;
                        int *l_857 = &l_734;
                        int *l_858 = &g_26;
                        int *l_859 = &l_760;
                        int *l_860 = &g_26;
                        int *l_861 = &g_26;
                        int *l_862 = &l_747;
                        int *l_863 = &l_817;
                        int *l_864 = &l_747;
                        int *l_865 = (void*)0;
                        int *l_866 = &l_747;
                        int *l_868 = &g_560;
                        int *l_869 = &g_560;
                        int *l_870 = &l_760;
                        int *l_871 = &l_747;
                        int *l_872 = &l_760;
                        int *l_873 = &l_809;
                        --l_874;
                        l_877 = ((*g_77) = (*g_77));

                        ;
                        return (*g_77);


                    }
                    else
                    {
                        unsigned char l_891 = 246UL;
                        unsigned char *l_892 = (void*)0;
                        unsigned char *l_893 = &l_56;
                        int *l_895 = &g_109;
                        int *l_896 = &l_734;
                        int *l_897 = &l_723;
                        int *l_898 = &g_560;
                        int *l_899 = &g_560;
                        int *l_900 = &l_734;
                        int *l_901 = &g_641;
                        int *l_902 = (void*)0;
                        int *l_903 = (void*)0;
                        int *l_904 = &l_809;
                        int *l_905 = &l_741;
                        int *l_906 = &l_747;
                        int *l_907 = &l_765;
                        int *l_908 = &l_721;
                        int *l_909 = &l_809;
                        int *l_910 = &g_641;
                        int *l_911 = &l_735;
                        int *l_912 = &l_734;
                        int *l_913 = &l_427;
                        int *l_914 = &g_560;
                        int *l_915 = &l_670;
                        int *l_916 = &l_794;
                        int *l_917 = (void*)0;
                        int *l_918 = (void*)0;
                        int *l_919 = &g_641;
                        int *l_920 = &l_760;
                        int *l_921 = &l_765;
                        int *l_922 = &l_660;
                        int *l_923 = &l_618;
                        int *l_924 = &l_723;
                        int *l_925 = &g_560;
                        int *l_926 = (void*)0;
                        int *l_927 = &g_658;
                        int *l_928 = &g_658;
                        int *l_929 = &l_427;
                        int *l_930 = &l_751;
                        int *l_931 = &l_449;
                        int *l_932 = &l_747;
                        int *l_933 = &l_660;
                        int *l_934 = &l_427;
                        int *l_935 = &l_867;
                        int *l_936 = (void*)0;
                        int *l_937 = &l_734;
                        int *l_938 = &l_723;
                        int *l_939 = &g_26;
                        int *l_940 = &l_729;
                        int *l_941 = (void*)0;
                        int *l_942 = (void*)0;
                        int *l_943 = (void*)0;
                        int *l_944 = &l_409;
                        int *l_945 = &l_751;
                        (*l_877) &= ((safe_rshift_func_uint8_t_u_u((g_132 && ((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((!(*p_42)), l_615)), 1)) && (((*l_893) = (safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((l_890 == &p_42), ((*l_671) = ((*g_375) , (((**g_268) , ((g_560 <= (l_891 < (*g_375))) ^ l_747)) || g_253))))) <= (*l_406)) >= 4294967295UL), l_891))) < 0x08L))), g_641)) | (*g_267));
                        (*l_406) = (l_894 == ((4UL && (*p_42)) , &l_890));
                        ++g_946;
                    }
                    (**l_894) = &l_670;

                    ;
                    (*g_78) |= 0x5F493DF0L;
                    (*l_406) = (*p_42);
                }

                ;
            }
            else
            {
                char l_953 = 0xF0L;
                int l_981 = 1L;
                if ((safe_lshift_func_int8_t_s_u(((*p_42) == (safe_add_func_uint16_t_u_u(l_953, (((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((*g_269), ((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(l_953, 9)) || (*l_406)), (g_262 | (((safe_add_func_uint32_t_u_u((p_42 == ((safe_rshift_func_int16_t_s_s(l_723, 0)) , p_42)), l_600)) , 0xEFFEL) || l_615)))) >= l_618))), 1UL)) || l_966) < 247UL)))), 5)))
                {
                    int *l_967 = (void*)0;
                    int *l_968 = &l_660;
                    int *l_969 = &l_734;
                    int *l_970 = &l_751;
                    int *l_971 = &l_427;
                    int *l_972 = &g_641;
                    int *l_973 = &l_721;
                    int *l_974 = &l_409;
                    int *l_975 = &l_449;
                    int *l_976 = &l_427;
                    int *l_977 = (void*)0;
                    int *l_978 = &l_409;
                    int *l_979 = (void*)0;
                    int *l_980 = &l_409;
                    int *l_982 = &g_26;
                    int *l_983 = &l_427;
                    int *l_984 = &l_721;
                    int *l_985 = &g_560;
                    int *l_986 = &l_427;
                    int *l_987 = &l_427;
                    l_760 ^= ((*p_42) |= l_953);
                    ++l_988;
                    (*g_77) = (void*)0;

                    ;
                }
                else
                {
                    for (l_670 = 23; (l_670 == 18); l_670--)
                    {
                        return (*l_890);


                    }
                }
            }

            ;
            ;
            for (g_461 = 0; (g_461 < 47); g_461 = safe_add_func_uint32_t_u_u(g_461, 6))
            {
                unsigned char l_995 = 0xA4L;
                int *l_999 = (void*)0;
                int l_1000 = 0xC8E51708L;
                int *l_1001 = &l_760;
                int *l_1002 = &l_751;
                int *l_1003 = (void*)0;
                int *l_1004 = (void*)0;
                int *l_1005 = (void*)0;
                int *l_1006 = &l_618;
                int *l_1007 = &l_721;
                int *l_1008 = &l_723;
                int *l_1009 = &l_427;
                int *l_1010 = (void*)0;
                int *l_1011 = (void*)0;
                int *l_1012 = &l_734;
                int *l_1013 = &l_618;
                int *l_1014 = &g_109;
                int *l_1015 = (void*)0;
                int *l_1016 = &g_641;
                int *l_1017 = (void*)0;
                int *l_1018 = &l_747;
                int *l_1019 = &l_409;
                int *l_1020 = &l_723;
                int *l_1021 = &l_747;
                int *l_1022 = &l_765;
                int *l_1023 = &l_751;
                int *l_1024 = &l_670;
                int *l_1025 = &l_427;
                int *l_1026 = (void*)0;
                int *l_1027 = &l_734;
                int l_1028 = 0xD7A8A2FFL;
                int *l_1029 = &l_1028;
                int *l_1030 = &l_721;
                int *l_1031 = &l_765;
                int *l_1032 = &l_449;
                int *l_1033 = (void*)0;
                int *l_1034 = &l_747;
                int *l_1035 = &g_109;
                int l_1036 = 0x8A7C93FDL;
                int *l_1037 = (void*)0;
                int *l_1038 = &l_1000;
                int *l_1039 = &l_734;
                int *l_1040 = (void*)0;
                int *l_1041 = &g_560;
                int l_1042 = 0L;
                int *l_1043 = &l_747;
                int *l_1044 = &l_747;
                int *l_1045 = (void*)0;
                int *l_1046 = &l_1042;
                int *l_1047 = &l_1036;
                int *l_1048 = &l_618;
                int *l_1049 = &l_723;
                int *l_1050 = &l_751;
                int *l_1051 = &g_658;
                int *l_1052 = &l_449;
                int *l_1053 = (void*)0;
                int *l_1054 = &l_723;
                int *l_1055 = &l_747;
                l_999 = (p_42 = ((*g_77) = (func_43((l_995 , p_42), (l_734 , ((*l_659) ^= ((safe_mod_func_uint32_t_u_u(((g_638 == (0UL >= 4UL)) ^ ((*l_406) ^ g_376)), l_995)) >= 0xB47FFD1BL))), (*g_375), g_762, l_998) , (*l_890))));

                ;
                --g_1056;
                (*g_77) = (void*)0;

                ;
                for (l_998 = 0; (l_998 > (-29)); --l_998)
                {
                    (*l_890) = (*l_890);
                }
            }

            ;
        }

        ;
        ;
    }



    return &g_560;


}







static int func_43(int * p_44, unsigned p_45, short p_46, char p_47, unsigned p_48)
{
    int *l_65 = &g_26;
    int *l_69 = &g_26;
    int **l_68 = &l_69;
    int ***l_70 = (void*)0;
    int **l_72 = &l_65;
    int ***l_71 = &l_72;
    int l_149 = 0x6605BB6FL;
    int l_231 = 0x2C6A0115L;
    int l_235 = 0x7783C7BDL;
    int l_239 = 0xC62DB5C1L;
    int l_245 = 0x60E50EEEL;
    unsigned l_347 = 1UL;
    g_26 = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((0x33L && (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((l_65 != &g_26) && ((safe_sub_func_int8_t_s_s((l_65 != ((*l_68) = &g_26)), 255UL)) >= (((*l_71) = &l_65) == &p_44))), (&l_68 == g_73))) , 252UL), 0L))), 14)) , 0UL), g_12));
    for (p_47 = 0; (p_47 != (-22)); p_47--)
    {
        unsigned short l_76 = 65535UL;
        if (l_76)
            break;
    }
    (**l_68) = (1UL < ((void*)0 != g_77));
    for (p_45 = 24; (p_45 >= 50); p_45++)
    {
        int *l_110 = (void*)0;
        int l_297 = 0x975BA9DFL;
        char *l_342 = &g_328;
    }
    return (*g_267);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_787, "g_787", print_hash_value);
    transparent_crc(g_946, "g_946", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1146, "g_1146", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    transparent_crc(g_1377, "g_1377", print_hash_value);
    transparent_crc(g_1391, "g_1391", print_hash_value);
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1441, "g_1441", print_hash_value);
    transparent_crc(g_1595, "g_1595", print_hash_value);
    transparent_crc(g_1604, "g_1604", print_hash_value);
    transparent_crc(g_1777, "g_1777", print_hash_value);
    transparent_crc(g_1788, "g_1788", print_hash_value);
    transparent_crc(g_1850, "g_1850", print_hash_value);
    transparent_crc(g_1878, "g_1878", print_hash_value);
    transparent_crc(g_2095, "g_2095", print_hash_value);
    transparent_crc(g_2100, "g_2100", print_hash_value);
    transparent_crc(g_2115, "g_2115", print_hash_value);
    transparent_crc(g_2120, "g_2120", print_hash_value);
    transparent_crc(g_2127, "g_2127", print_hash_value);
    transparent_crc(g_2128, "g_2128", print_hash_value);
    transparent_crc(g_2154, "g_2154", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
