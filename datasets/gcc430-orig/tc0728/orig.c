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
   char * const f0;
   int f1;
};


static int g_4 = 0x8114768CL;
static int g_7 = 0x98764276L;
static char g_32 = (-7L);
static unsigned short g_81 = 0x2AC6L;
static union U0 g_93 = {0};
static const union U0 *g_125 = &g_93;
static const union U0 **g_124 = &g_125;
static int g_174 = (-1L);
static int g_231 = 0x41FD33E8L;
static int g_310 = 0xC1FC836EL;
static unsigned g_347 = 0xAEB97D69L;
static short g_419 = 3L;
static unsigned g_459 = 4294967289UL;
static int *g_498 = &g_7;
static int **g_497 = &g_498;
static int g_614 = (-4L);
static unsigned g_639 = 0x0A9B6922L;
static unsigned char g_642 = 7UL;
static int g_712 = 0x0D75D45AL;
static int *g_724 = &g_310;
static int g_849 = 0x8993D4E9L;
static char g_876 = 0xFAL;
static short g_879 = 0x01B5L;
static unsigned g_888 = 0x7C6BDDD8L;
static unsigned g_911 = 7UL;
static int g_1163 = 0x18662068L;
static unsigned short g_1206 = 65535UL;
static unsigned g_1423 = 0UL;
static const int *g_1492 = &g_174;
static unsigned short g_1638 = 65535UL;
static unsigned short g_1826 = 0xABE3L;
static int *g_2032 = &g_231;



static int func_1(void);
static int * func_8(const unsigned char p_9, short p_10, char * p_11, unsigned p_12);
static short func_13(int * p_14, int p_15, char p_16, int * p_17, char * p_18);
static int * func_19(const unsigned p_20, int p_21, char * p_22, int * p_23, char p_24);
static const unsigned func_25(char p_26, int * p_27, short p_28, short p_29, int * const p_30);
static unsigned char func_33(int p_34, const int * p_35);
static union U0 func_95(int * p_96, short p_97, int p_98, char * p_99, short p_100);
static char * func_101(unsigned p_102, int ** p_103);
static short func_108(unsigned p_109, int ** const p_110, const union U0 ** p_111, int p_112);
static const unsigned char func_138(unsigned char p_139, const union U0 * p_140, short p_141);
static int func_1(void)
{
    int l_2 = 0x1EC2DB22L;
    int *l_3 = &g_4;
    int *l_5 = (void*)0;
    int *l_6 = &g_7;
    char * const l_31 = &g_32;
    char *l_978 = &g_876;
    int *l_979 = &g_174;
    int l_1832 = 0x8A80B8D0L;
    unsigned l_1833 = 0x45300E79L;
    int **l_2033 = &l_6;
    char *l_2034 = &g_32;
    (*l_3) = l_2;
    (*l_6) |= ((l_3 != &g_4) | (9L ^ (*l_3)));
    (*l_2033) = func_8(((((*l_6) , (((func_13(func_19(func_25((l_31 != &g_32), &g_4, (65532UL != (!(func_33((*l_3), &g_4) , 0x5501L))), g_4, (*g_497)), (*l_6), l_978, l_979, (*l_979)), l_1832, l_1833, &l_1832, l_978) | g_1163) > 0x934AL) != g_876)) <= g_459) && 1L), g_1163, &g_876, g_459);

    ;

    ;

    (*l_2033) = func_8(((void*)0 != l_2034), g_642, (((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s((((!(safe_rshift_func_uint16_t_u_u((1UL < ((&g_32 != (g_174 , &g_876)) , (safe_lshift_func_uint16_t_u_s(g_32, g_459)))), 14))) >= 0xF4A1L) || g_879), (**l_2033))) & g_347), 13)) >= g_614) , l_978), g_81);
    return (*g_1492);
}







static int * func_8(const unsigned char p_9, short p_10, char * p_11, unsigned p_12)
{
    const int *l_1938 = &g_614;
    short l_1947 = 0L;
    int l_1958 = 0xB4E04685L;
    short l_2012 = 0xD09FL;
    char *l_2025 = &g_876;
    unsigned short l_2030 = 65535UL;
    for (g_310 = (-2); (g_310 == 7); g_310 = safe_add_func_uint16_t_u_u(g_310, 8))
    {
        unsigned char l_1943 = 0x5CL;
        const union U0 l_1991 = {0};
        char *l_2018 = (void*)0;
        int *l_2021 = &g_231;
        if ((*g_1492))
        {
            unsigned short l_1937 = 0UL;
            unsigned l_1946 = 4294967288UL;
            int l_1948 = 0x9461E159L;
            union U0 *l_1985 = &g_93;
            unsigned short l_2024 = 1UL;
            l_1948 = (safe_lshift_func_uint8_t_u_u(((((((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((p_9 , ((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s(g_347, 0xFF44L)), l_1943)) , g_639)), (safe_div_func_int32_t_s_s((l_1943 == 0x496D3E96L), l_1946)))), l_1947)) != 0xE4781877L) & g_81) , (-1L)) == 7L) <= 0x34L), g_876));
            for (g_614 = (-22); (g_614 == (-26)); g_614 = safe_sub_func_uint32_t_u_u(g_614, 1))
            {
                unsigned l_1978 = 4294967291UL;
                for (g_639 = 0; (g_639 == 3); ++g_639)
                {
                    int *l_1953 = &g_849;
                    int *l_1954 = &g_174;
                    int *l_1955 = &g_849;
                    int *l_1956 = (void*)0;
                    int *l_1957 = &g_7;
                    int *l_1959 = &g_4;
                    int *l_1960 = &l_1948;
                    int *l_1961 = &g_4;
                    int *l_1962 = &l_1948;
                    int l_1963 = (-1L);
                    int *l_1964 = &g_712;
                    int *l_1965 = (void*)0;
                    int *l_1966 = (void*)0;
                    int *l_1967 = &g_231;
                    int *l_1968 = (void*)0;
                    int l_1969 = 0L;
                    int *l_1970 = &l_1948;
                    int *l_1971 = &g_231;
                    int *l_1972 = &g_4;
                    int *l_1973 = &g_231;
                    int *l_1974 = &g_849;
                    int *l_1975 = (void*)0;
                    int *l_1976 = &g_174;
                    int *l_1977 = (void*)0;
                    l_1978++;
                }
                if ((safe_sub_func_int32_t_s_s(0xF218D5CDL, (safe_sub_func_uint32_t_u_u(p_12, 0xF3D854EEL)))))
                {
                    if ((0x60L ^ (safe_sub_func_uint16_t_u_u(0x8A9DL, g_1638))))
                    {
                        l_1958 &= l_1948;
                        (*g_497) = &l_1958;
                    }
                    else
                    {
                        int *l_1996 = (void*)0;
                        int *l_1997 = &g_849;
                        (*l_1997) = ((safe_unary_minus_func_int32_t_s(((safe_sub_func_int16_t_s_s(0xB524L, func_13(&l_1958, (l_1991 , (-1L)), l_1943, &l_1948, p_11))) , ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_849, 1)), p_10)) <= 0x14L)))) , 0L);
                    }
                    if (p_12)
                        continue;
                }
                else
                {
                    int *l_2002 = &l_1958;
                    int *l_2008 = &g_849;
                    (*l_2002) |= (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((((g_1423 , ((!(*p_11)) | (((p_9 , ((func_13(l_2002, (*l_1938), (*p_11), &l_1958, &g_32) , p_12) && 0xBDA7474FL)) >= g_7) == l_1943))) , p_9) & l_1946) , 0L), 5)), p_10));
                    for (g_879 = 0; (g_879 >= 28); g_879 = safe_add_func_uint16_t_u_u(g_879, 4))
                    {
                        unsigned short l_2005 = 0x86AAL;
                        int *l_2009 = &g_712;
                        --l_2005;
                        (*l_2002) &= p_9;
                        (*g_497) = l_2008;
                        return l_2009;




                    }
                    for (g_459 = (-24); (g_459 >= 59); g_459++)
                    {
                        (*g_497) = &l_1958;
                        (*l_2002) &= l_2012;
                    }
                }
            }
            l_1948 = (safe_div_func_uint8_t_u_u(((g_911 == ((safe_unary_minus_func_int16_t_s((p_10 < (p_9 >= (safe_mul_func_int16_t_s_s(((void*)0 == l_2018), (safe_lshift_func_uint16_t_u_s(func_13(l_2021, (safe_mul_func_int16_t_s_s(0xA191L, ((246UL == (*l_1938)) , g_347))), l_2024, &g_310, l_2025), 0)))))))) == g_174)) < p_10), 0x9BL));
        }
        else
        {
            (*g_497) = ((0xD9L != (safe_mul_func_int8_t_s_s(g_1826, g_849))) , &l_1958);
        }
        (*g_497) = l_2021;
    }



    l_1958 = p_12;
    for (l_1947 = 0; (l_1947 <= 19); l_1947++)
    {
        int *l_2031 = &g_712;
        if (l_2030)
            break;
        return l_2031;




    }
    return g_2032;




}







static short func_13(int * p_14, int p_15, char p_16, int * p_17, char * p_18)
{
    int l_1834 = 6L;
    int *l_1835 = &g_310;
    int *l_1836 = &g_614;
    int l_1837 = 0x79509BA3L;
    int *l_1838 = &g_7;
    int *l_1839 = &g_4;
    int *l_1840 = (void*)0;
    int *l_1841 = (void*)0;
    int *l_1842 = &g_712;
    int l_1843 = 0x74D96243L;
    int *l_1844 = &g_849;
    int *l_1845 = &g_7;
    int *l_1846 = &g_7;
    int *l_1847 = &g_231;
    int *l_1848 = &g_231;
    int *l_1849 = &g_310;
    int *l_1850 = &g_849;
    int *l_1851 = &g_174;
    int *l_1852 = &l_1843;
    int *l_1853 = &g_310;
    int l_1854 = 0x840F2CACL;
    int *l_1855 = &g_310;
    int *l_1856 = &l_1854;
    int *l_1857 = &g_310;
    int *l_1858 = &l_1843;
    int *l_1859 = &g_4;
    int *l_1860 = &l_1843;
    int *l_1861 = &g_7;
    int *l_1862 = &l_1837;
    int *l_1863 = &g_7;
    int l_1864 = (-7L);
    int l_1865 = 0x96B2C73AL;
    int *l_1866 = &g_7;
    int l_1867 = 0xA9609917L;
    int *l_1868 = &l_1854;
    int *l_1869 = (void*)0;
    int l_1870 = 0L;
    int l_1871 = 0x2B511290L;
    int *l_1872 = &g_849;
    int *l_1873 = &g_231;
    int l_1874 = (-1L);
    int *l_1875 = &g_310;
    int *l_1876 = &l_1864;
    int *l_1877 = &g_7;
    int *l_1878 = (void*)0;
    int *l_1879 = &l_1854;
    int *l_1880 = (void*)0;
    int *l_1881 = &g_231;
    int *l_1882 = &g_7;
    int l_1883 = 0xA977DABDL;
    int *l_1884 = &l_1874;
    int l_1885 = 0xC892EB93L;
    int *l_1886 = &l_1867;
    int *l_1887 = (void*)0;
    int *l_1888 = &l_1870;
    int *l_1889 = (void*)0;
    int l_1890 = 0x365135BDL;
    int *l_1891 = &l_1890;
    int *l_1892 = &l_1854;
    int l_1893 = 1L;
    int *l_1894 = &g_4;
    int l_1895 = 8L;
    int *l_1896 = &l_1870;
    int *l_1897 = (void*)0;
    int *l_1898 = &g_174;
    int *l_1899 = &l_1837;
    int *l_1900 = &l_1871;
    int *l_1901 = &g_174;
    int *l_1902 = (void*)0;
    int *l_1903 = &l_1864;
    int *l_1904 = &g_614;
    int l_1905 = 0x01DAC633L;
    int *l_1906 = &l_1843;
    int *l_1907 = &l_1870;
    int *l_1908 = &g_849;
    int *l_1909 = &l_1885;
    int *l_1910 = &l_1854;
    int *l_1911 = (void*)0;
    int *l_1912 = (void*)0;
    int *l_1913 = &l_1843;
    int l_1914 = 9L;
    int l_1915 = 0x0D91F750L;
    int *l_1916 = &l_1865;
    int *l_1917 = &l_1874;
    int l_1918 = 0x9B3C2948L;
    int *l_1919 = &l_1890;
    int *l_1920 = &g_4;
    int *l_1921 = (void*)0;
    int *l_1922 = &g_614;
    int *l_1923 = &l_1905;
    int *l_1924 = &l_1915;
    int *l_1925 = &g_712;
    unsigned l_1926 = 0x5041DBCFL;
    ++l_1926;
    (*g_497) = &l_1895;



    return (*l_1882);



}







static int * func_19(const unsigned p_20, int p_21, char * p_22, int * p_23, char p_24)
{
    unsigned char l_994 = 0x01L;
    const int *l_995 = (void*)0;
    int l_1000 = 0xF8FD4153L;
    int l_1071 = 0L;
    int l_1094 = 0xDCC53C94L;
    int l_1108 = 0L;
    int l_1152 = 0xDBC96E64L;
    int l_1178 = 0x75712F9CL;
    union U0 l_1220 = {0};
    unsigned char l_1223 = 0xECL;
    int * const **l_1224 = (void*)0;
    unsigned l_1240 = 0xD67BF3BAL;
    unsigned short l_1269 = 0UL;
    unsigned l_1323 = 0xFBA4245BL;
    union U0 *l_1338 = &l_1220;
    union U0 **l_1337 = &l_1338;
    char *l_1340 = &g_32;
    unsigned short l_1345 = 0xD1A2L;
    int **l_1346 = (void*)0;
    const union U0 **l_1431 = &g_125;
    unsigned l_1472 = 4294967295UL;
    const unsigned short l_1643 = 65535UL;
    char l_1732 = (-1L);
    int l_1751 = 0x7A924B3DL;
    int l_1773 = 0x33946932L;
    int l_1779 = (-5L);
    int l_1795 = 0x381BAF98L;
    int l_1798 = 1L;
    int *l_1831 = &g_7;
    (*g_497) = (*g_497);
    if (((((&p_24 == (g_849 , &p_24)) >= (((((safe_lshift_func_int8_t_s_u((*p_22), ((safe_mul_func_uint16_t_u_u(p_21, (6L <= (((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((((((safe_sub_func_int8_t_s_s((*p_22), (((g_174 > ((safe_mul_func_int16_t_s_s(func_33(((l_994 , (*p_22)) | l_994), l_995), g_876)) > 1UL)) != 0L) ^ 1L))) && (**g_497)) | 0x3A2AE2B1L) , &l_995) == &l_995) <= 0UL) != p_20) | p_20), p_21)), g_231)) > (-5L)) & g_911)))) , l_994))) , 0x5110L) ^ 0x8DF0L) <= l_994) ^ p_20)) , l_995) != (void*)0))
    {
        (*g_724) &= func_33(p_24, &p_21);
    }
    else
    {
        unsigned l_1010 = 0x5C6C5A72L;
        int l_1102 = 2L;
        int l_1176 = 0x102CE77BL;
        int l_1196 = 0x290B69FFL;
        int **l_1274 = (void*)0;
        union U0 *l_1276 = &l_1220;
        const union U0 **l_1286 = &g_125;
        short l_1289 = 0xBA29L;
        unsigned char l_1333 = 0UL;
        if ((*g_724))
        {
            char l_998 = 1L;
            int *l_1001 = &g_4;
            int *l_1002 = &g_712;
            int *l_1003 = (void*)0;
            int *l_1004 = &g_174;
            int *l_1005 = &l_1000;
            int *l_1006 = (void*)0;
            int *l_1007 = &g_614;
            int *l_1008 = &g_849;
            int *l_1009 = (void*)0;
            for (g_310 = (-22); (g_310 < 18); ++g_310)
            {
                int l_999 = 0x70BD6390L;
                if (l_998)
                {
                    p_23 = (*g_497);
                }
                else
                {
                    l_999 = (*p_23);
                }
            }
            l_1010++;
        }
        else
        {
            int *l_1013 = (void*)0;
            int *l_1014 = &l_1000;
            int *l_1015 = &l_1000;
            int *l_1016 = &g_7;
            int *l_1017 = &g_231;
            int *l_1018 = &g_231;
            int *l_1019 = &g_4;
            int *l_1020 = (void*)0;
            int *l_1021 = &g_310;
            int *l_1022 = &g_4;
            int *l_1023 = &g_712;
            int *l_1024 = (void*)0;
            int *l_1025 = &g_614;
            int *l_1026 = (void*)0;
            int *l_1027 = &g_174;
            int *l_1028 = &g_310;
            int *l_1029 = &g_849;
            int *l_1030 = (void*)0;
            int *l_1031 = &g_231;
            int *l_1032 = (void*)0;
            int *l_1033 = &g_231;
            int *l_1034 = &g_4;
            int *l_1035 = &g_231;
            int *l_1036 = &g_310;
            int *l_1037 = (void*)0;
            int l_1038 = 0L;
            int *l_1039 = &g_174;
            int *l_1040 = &g_849;
            int *l_1041 = &g_7;
            int *l_1042 = &g_712;
            int *l_1043 = &g_712;
            int *l_1044 = (void*)0;
            int *l_1045 = (void*)0;
            int *l_1046 = (void*)0;
            int *l_1047 = (void*)0;
            int *l_1048 = &g_310;
            int *l_1049 = &g_4;
            int *l_1050 = &g_4;
            int *l_1051 = &l_1038;
            int *l_1052 = &g_712;
            int *l_1053 = &l_1000;
            int *l_1054 = &g_174;
            int *l_1055 = &l_1000;
            int *l_1056 = &g_4;
            int *l_1057 = &g_7;
            int *l_1058 = (void*)0;
            int *l_1059 = &g_174;
            int *l_1060 = &g_4;
            int *l_1061 = &g_7;
            int *l_1062 = &g_712;
            int *l_1063 = &g_614;
            int *l_1064 = (void*)0;
            int *l_1065 = &g_231;
            int *l_1066 = &g_614;
            int *l_1067 = &g_310;
            int *l_1068 = (void*)0;
            int *l_1069 = &g_174;
            int *l_1070 = (void*)0;
            int *l_1072 = (void*)0;
            int *l_1073 = &g_174;
            int *l_1074 = &g_7;
            int *l_1075 = &g_712;
            int *l_1076 = &g_849;
            int *l_1077 = &g_174;
            int *l_1078 = &l_1000;
            int *l_1079 = &g_7;
            int *l_1080 = &l_1071;
            int *l_1081 = &g_174;
            int *l_1082 = (void*)0;
            int *l_1083 = &g_310;
            int *l_1084 = &l_1071;
            int *l_1085 = &g_614;
            int *l_1086 = (void*)0;
            int *l_1087 = &g_4;
            int *l_1088 = (void*)0;
            int *l_1089 = &g_7;
            int *l_1090 = (void*)0;
            int *l_1091 = &g_310;
            int *l_1092 = &g_174;
            int *l_1093 = (void*)0;
            int *l_1095 = (void*)0;
            int *l_1096 = (void*)0;
            int *l_1097 = &l_1000;
            int *l_1098 = &g_614;
            int *l_1099 = (void*)0;
            int *l_1100 = &l_1000;
            int *l_1101 = (void*)0;
            int *l_1103 = &g_849;
            int *l_1104 = &g_310;
            int *l_1105 = &g_849;
            int *l_1106 = &l_1102;
            int l_1107 = 0x08C2AED8L;
            int *l_1109 = &l_1107;
            int *l_1110 = &g_310;
            int *l_1111 = &g_712;
            int *l_1112 = &g_231;
            int *l_1113 = &g_231;
            int *l_1114 = &g_712;
            int *l_1115 = &l_1102;
            int *l_1116 = &g_712;
            int *l_1117 = &g_310;
            int *l_1118 = &l_1094;
            int *l_1119 = (void*)0;
            int *l_1120 = &g_174;
            int *l_1121 = &l_1071;
            int *l_1122 = &l_1108;
            int *l_1123 = &g_4;
            int *l_1124 = &g_231;
            int *l_1125 = &g_231;
            int *l_1126 = (void*)0;
            int *l_1127 = &l_1102;
            int *l_1128 = &l_1108;
            int *l_1129 = &l_1071;
            int *l_1130 = &l_1102;
            int *l_1131 = &g_174;
            int *l_1132 = &g_7;
            int *l_1133 = &g_310;
            int *l_1134 = &g_614;
            int *l_1135 = &l_1107;
            int *l_1136 = &g_7;
            int *l_1137 = &g_174;
            int *l_1138 = &l_1071;
            int *l_1139 = &l_1071;
            int *l_1140 = &g_310;
            int *l_1141 = &l_1102;
            int *l_1142 = &l_1000;
            int *l_1143 = &g_849;
            int l_1144 = 0xB9987F43L;
            int *l_1145 = (void*)0;
            int *l_1146 = &g_174;
            int *l_1147 = &l_1038;
            int *l_1148 = (void*)0;
            int l_1149 = (-2L);
            int *l_1150 = &g_712;
            int l_1151 = (-6L);
            int *l_1153 = &l_1144;
            int *l_1154 = &l_1000;
            int *l_1155 = (void*)0;
            int *l_1156 = (void*)0;
            int *l_1157 = &g_7;
            int *l_1158 = &l_1144;
            int *l_1159 = &l_1108;
            int *l_1160 = &l_1102;
            int *l_1161 = &l_1152;
            int *l_1162 = &g_849;
            int *l_1164 = (void*)0;
            int *l_1165 = (void*)0;
            int *l_1166 = &l_1071;
            int *l_1167 = &l_1151;
            int *l_1168 = &l_1151;
            int *l_1169 = &g_7;
            int *l_1170 = &l_1108;
            int *l_1171 = &g_231;
            int *l_1172 = &l_1000;
            int *l_1173 = &l_1000;
            int *l_1174 = &g_310;
            int *l_1175 = &l_1094;
            int *l_1177 = &g_174;
            int *l_1179 = &l_1151;
            int *l_1180 = &l_1152;
            int *l_1181 = &g_849;
            int *l_1182 = &l_1038;
            int *l_1183 = (void*)0;
            int *l_1184 = &l_1149;
            int *l_1185 = &l_1102;
            int *l_1186 = &g_849;
            int l_1187 = 0xA843419DL;
            int *l_1188 = &l_1144;
            int *l_1189 = &l_1107;
            int *l_1190 = &l_1094;
            int *l_1191 = &l_1176;
            int *l_1192 = &l_1102;
            int *l_1193 = &g_7;
            int *l_1194 = &g_4;
            int *l_1195 = &g_7;
            int *l_1197 = &g_712;
            int *l_1198 = (void*)0;
            int *l_1199 = (void*)0;
            int *l_1200 = &l_1176;
            int *l_1201 = (void*)0;
            int *l_1202 = (void*)0;
            int *l_1203 = &l_1152;
            int *l_1204 = &l_1000;
            int *l_1205 = &l_1107;
            g_1206--;
        }
        for (g_888 = 0; (g_888 > 7); ++g_888)
        {
            for (g_642 = 0; (g_642 <= 7); g_642++)
            {
                short l_1213 = 6L;
                (*g_724) ^= ((l_1213 ^ l_1213) != (safe_rshift_func_int16_t_s_s(0xF695L, 15)));
            }
        }
        if ((((func_25((safe_mod_func_uint32_t_u_u(g_876, func_25((*p_22), (*g_497), ((((safe_mul_func_uint8_t_u_u((l_1220 , ((*g_124) == (void*)0)), (-3L))) || (~(safe_lshift_func_int8_t_s_u(g_347, (l_1196 , l_1223))))) == 0x35L) & (-4L)), g_712, &l_1108))), &l_1102, p_24, g_419, &l_1094) , l_1224) != &g_497) , (-4L)))
        {
            int l_1236 = 1L;
            int *l_1237 = &g_7;
            for (l_994 = 27; (l_994 >= 32); l_994 = safe_add_func_int8_t_s_s(l_994, 6))
            {
                int *l_1229 = &l_1094;
                (*g_724) = ((void*)0 != (*g_124));
                if (l_1196)
                {
                    const unsigned l_1230 = 4294967295UL;
                    for (g_911 = 0; (g_911 == 28); ++g_911)
                    {
                        unsigned short l_1235 = 65530UL;
                        (*g_497) = l_1229;

                        ;
                        if (l_1230)
                            continue;
                        l_1235 = (safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u(l_1176, func_33(g_1163, (*g_497)))), l_1102));
                    }
                }
                else
                {
                    (**g_497) = l_1236;
                    (*g_498) = l_1196;
                }
            }

            ;
            (**g_497) = (*g_724);
            (*p_23) = (l_1236 > l_1236);
            (*g_497) = l_1237;

            ;
        }
        else
        {
            for (l_1196 = 0; (l_1196 <= 13); l_1196 = safe_add_func_int8_t_s_s(l_1196, 4))
            {
                (*g_498) = (-1L);
            }
        }

        ;
        ;
        if (((l_1240 , p_21) & (safe_mul_func_uint32_t_u_u(g_4, (!g_7)))))
        {
            int *l_1243 = &l_1178;
            int *l_1244 = &g_174;
            int *l_1245 = &g_614;
            int *l_1246 = &l_1152;
            int *l_1247 = (void*)0;
            int *l_1248 = &g_712;
            int *l_1249 = &l_1094;
            int *l_1250 = (void*)0;
            int *l_1251 = &l_1178;
            int *l_1252 = &l_1071;
            int *l_1253 = &l_1152;
            int l_1254 = 0xD354D19BL;
            int *l_1255 = &g_849;
            int *l_1256 = (void*)0;
            int *l_1257 = &l_1094;
            int *l_1258 = &l_1196;
            int *l_1259 = &l_1152;
            int *l_1260 = &g_231;
            int *l_1261 = &g_614;
            int *l_1262 = &l_1196;
            int *l_1263 = &l_1102;
            int *l_1264 = &g_712;
            int *l_1265 = (void*)0;
            int *l_1266 = &g_174;
            int *l_1267 = (void*)0;
            int *l_1268 = &l_1102;
            union U0 * const l_1275 = &g_93;
            char *l_1285 = &g_876;
            union U0 **l_1332 = &l_1276;
            --l_1269;
            if ((safe_add_func_uint16_t_u_u((l_1274 != (void*)0), (l_1275 != l_1276))))
            {
                union U0 *l_1287 = &l_1220;
                int l_1288 = 0x370E6A58L;
                (*l_1245) |= (func_138(((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((*l_1249) , (*p_22)), 6)) != (((((void*)0 != l_1287) >= (*g_498)) ^ p_24) > p_20)), l_1288)), l_1289)), p_21)) != p_24), &l_1220, g_1163) > (*p_22));
            }
            else
            {
                short l_1290 = 0L;
                int *l_1291 = &l_1094;
                int *l_1292 = &g_174;
                int *l_1293 = &l_1152;
                int *l_1294 = &l_1071;
                int *l_1295 = &g_174;
                int *l_1296 = &g_4;
                int *l_1297 = &g_310;
                int *l_1298 = (void*)0;
                int l_1299 = (-1L);
                int *l_1300 = (void*)0;
                int *l_1301 = (void*)0;
                int *l_1302 = &l_1196;
                int *l_1303 = &g_4;
                int *l_1304 = &g_4;
                int *l_1305 = (void*)0;
                int *l_1306 = &g_4;
                int *l_1307 = (void*)0;
                int *l_1308 = &l_1152;
                int l_1309 = 0L;
                int *l_1310 = (void*)0;
                int *l_1311 = &l_1176;
                int *l_1312 = &l_1196;
                int *l_1313 = (void*)0;
                int *l_1314 = &l_1299;
                int *l_1315 = &g_849;
                int *l_1316 = &l_1071;
                int *l_1317 = &l_1000;
                int *l_1318 = (void*)0;
                int *l_1319 = &g_614;
                int *l_1320 = &l_1176;
                int *l_1321 = &l_1094;
                int *l_1322 = &l_1196;
                --l_1323;
                (*l_1253) = (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((*p_22), 3)), ((p_20 , (safe_rshift_func_int8_t_s_s((*l_1294), (*p_22)))) || ((((void*)0 == l_1332) , 4UL) <= g_639))));
                l_1333--;
            }
        }
        else
        {
            int ***l_1336 = &l_1274;
            union U0 ***l_1339 = &l_1337;
            (*g_498) &= ((g_642 != (*p_22)) , 0xC75178C5L);
            (*l_1336) = &p_23;

            ;
            (*l_1339) = l_1337;
        }

        ;
    }

    ;
    ;
    if (((l_1340 != ((*g_125) , l_1340)) ^ 2UL))
    {
        int l_1399 = (-6L);
        int l_1403 = (-1L);
        int ***l_1426 = &g_497;
        for (l_1240 = 0; (l_1240 == 4); l_1240 = safe_add_func_uint8_t_u_u(l_1240, 8))
        {
            unsigned l_1353 = 1UL;
            int l_1354 = 5L;
            int *l_1355 = &l_1178;
            int *l_1356 = &l_1354;
            int *l_1357 = (void*)0;
            int *l_1358 = &l_1152;
            int *l_1359 = &l_1094;
            int *l_1360 = (void*)0;
            int *l_1361 = &l_1094;
            int *l_1362 = &l_1152;
            int *l_1363 = &l_1094;
            int *l_1364 = &l_1178;
            int *l_1365 = &g_849;
            int *l_1366 = (void*)0;
            int *l_1367 = &l_1152;
            int *l_1368 = &g_231;
            int *l_1369 = &l_1071;
            int *l_1370 = &g_7;
            int *l_1371 = &l_1071;
            int *l_1372 = (void*)0;
            int *l_1373 = &l_1000;
            int *l_1374 = &g_174;
            int *l_1375 = (void*)0;
            int *l_1376 = &g_4;
            int *l_1377 = &l_1071;
            int *l_1378 = &g_231;
            int *l_1379 = &l_1152;
            int *l_1380 = (void*)0;
            int *l_1381 = (void*)0;
            int l_1382 = (-1L);
            int l_1383 = (-5L);
            int *l_1384 = &g_849;
            int *l_1385 = &g_614;
            int l_1386 = 0x67CC0571L;
            int *l_1387 = (void*)0;
            int *l_1388 = &g_849;
            int *l_1389 = &l_1152;
            int *l_1390 = &l_1152;
            int *l_1391 = &g_614;
            int *l_1392 = &l_1094;
            int *l_1393 = &g_4;
            int *l_1394 = &g_310;
            int *l_1395 = (void*)0;
            int *l_1396 = (void*)0;
            int *l_1397 = &l_1108;
            int *l_1398 = &l_1152;
            int *l_1400 = &l_1382;
            int *l_1401 = &l_1383;
            int l_1402 = 0x7911295CL;
            int *l_1404 = &l_1386;
            int *l_1405 = &l_1071;
            int *l_1406 = (void*)0;
            int *l_1407 = &l_1178;
            int *l_1408 = &g_174;
            int *l_1409 = &l_1000;
            int *l_1410 = (void*)0;
            int *l_1411 = (void*)0;
            int *l_1412 = &l_1108;
            int *l_1413 = &l_1000;
            int *l_1414 = &l_1108;
            int *l_1415 = &l_1178;
            int *l_1416 = &l_1152;
            int *l_1417 = &l_1354;
            int *l_1418 = &l_1382;
            int *l_1419 = &l_1403;
            int *l_1420 = (void*)0;
            int *l_1421 = &g_174;
            int *l_1422 = &l_1382;
            l_1354 &= ((*p_22) | ((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(func_25((*p_22), (*g_497), p_20, g_419, (*g_497)), (l_1353 , g_459))), p_21)) >= g_81));

            ;
            (*g_724) = (*g_724);
            g_1423--;
        }
        (*l_1426) = &g_724;

        ;
    }
    else
    {
        char l_1432 = 0x8AL;
        int ** const l_1433 = &g_724;
        int l_1437 = 0x0393546DL;
        int l_1449 = 1L;
        char l_1484 = 0L;
        const union U0 **l_1493 = &g_125;
        unsigned l_1530 = 0xB3917C7AL;
        unsigned short l_1545 = 1UL;
        int l_1614 = 0xE6746163L;
        int l_1812 = (-1L);
        int l_1821 = 0L;
        if ((*p_23))
        {
            int *l_1434 = &l_1152;
            int l_1435 = 0xEB76B359L;
            int *l_1436 = &g_310;
            int *l_1438 = &l_1108;
            int *l_1439 = &g_310;
            int *l_1440 = &l_1152;
            int *l_1441 = (void*)0;
            int *l_1442 = &g_7;
            int *l_1443 = &g_174;
            int *l_1444 = &l_1152;
            int *l_1445 = &l_1178;
            int *l_1446 = (void*)0;
            int *l_1447 = &l_1071;
            int *l_1448 = &l_1000;
            int *l_1450 = &l_1152;
            int *l_1451 = (void*)0;
            int *l_1452 = &l_1178;
            int *l_1453 = &g_849;
            int l_1454 = 0xFFC7E41EL;
            int *l_1455 = (void*)0;
            int *l_1456 = (void*)0;
            int *l_1457 = &g_849;
            int *l_1458 = &l_1071;
            int *l_1459 = &g_4;
            int *l_1460 = &g_231;
            int *l_1461 = (void*)0;
            int *l_1462 = (void*)0;
            int *l_1463 = &g_849;
            int *l_1464 = &g_7;
            int *l_1465 = &l_1000;
            int *l_1466 = &l_1435;
            int *l_1467 = &l_1094;
            int l_1468 = 0xAAC7AD52L;
            int *l_1469 = &l_1071;
            int *l_1470 = &g_849;
            int *l_1471 = &l_1071;
            unsigned l_1485 = 0x4EF7E5DFL;
            int *l_1504 = &l_1178;
            int ***l_1523 = &l_1346;
            l_1472--;
            if ((**g_497))
            {
                unsigned l_1483 = 0x5E8A42F3L;
                (*l_1436) = (((((func_138(p_20, (*g_124), p_21) > ((safe_rshift_func_uint16_t_u_s(p_24, (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(((l_1483 & g_639) ^ p_20), ((**l_1433) < (**l_1433)))), g_1163)), l_1484)))) && g_876)) == (*l_1467)) != l_1483) , l_1485) && (*p_23));
                (*g_724) = (safe_sub_func_int8_t_s_s(l_1483, (safe_sub_func_int16_t_s_s((g_231 , l_1483), (-10L)))));
            }
            else
            {
                char l_1505 = 0x39L;
                unsigned short l_1529 = 65535UL;
                int ** const l_1546 = &l_1463;
                union U0 *l_1548 = &g_93;
                int l_1561 = 0xB3EF9D1AL;
                int l_1568 = 0x71075051L;
                int l_1571 = 1L;
                int l_1589 = 0L;
                int l_1590 = (-1L);
                int l_1607 = 0L;
                int l_1619 = 0x36FB8E6EL;
                char l_1631 = 0x6DL;
                (*g_497) = (*g_497);
                if ((safe_rshift_func_uint16_t_u_u(((func_138(p_24, (p_20 , (*l_1493)), g_347) & (safe_add_func_int8_t_s_s(g_614, (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_21, p_20)), g_712)), p_21))))) , g_4), (**l_1433))))
                {
                    unsigned short l_1506 = 65528UL;
                    l_1504 = &p_21;

                    ;
                    (*l_1436) = (*l_1459);
                    ++l_1506;
                }
                else
                {
                    char l_1526 = 0x09L;
                    union U0 * const l_1540 = (void*)0;
                    const union U0 **l_1547 = &g_125;
                    int *l_1549 = &l_1435;
                    int *l_1550 = &g_231;
                    int *l_1551 = (void*)0;
                    int *l_1552 = &l_1094;
                    int *l_1553 = &g_849;
                    int *l_1554 = &g_712;
                    int *l_1555 = &g_614;
                    int *l_1556 = (void*)0;
                    int *l_1557 = &g_614;
                    int *l_1558 = &g_310;
                    int *l_1559 = &g_849;
                    int *l_1560 = &l_1000;
                    int *l_1562 = (void*)0;
                    int *l_1563 = &l_1454;
                    int *l_1564 = (void*)0;
                    int *l_1565 = (void*)0;
                    int *l_1566 = &l_1454;
                    int *l_1567 = (void*)0;
                    int *l_1569 = &l_1435;
                    int *l_1570 = &l_1561;
                    int *l_1572 = &l_1468;
                    int *l_1573 = (void*)0;
                    int *l_1574 = &l_1571;
                    int *l_1575 = &g_712;
                    int *l_1576 = &g_849;
                    int l_1577 = 0xCA7C353EL;
                    int *l_1578 = &l_1568;
                    int *l_1579 = &g_849;
                    int *l_1580 = (void*)0;
                    int *l_1581 = &l_1178;
                    int *l_1582 = &g_174;
                    int *l_1583 = &l_1454;
                    int *l_1584 = &g_4;
                    int l_1585 = (-2L);
                    int *l_1586 = &l_1152;
                    int *l_1587 = &l_1449;
                    int *l_1588 = &g_7;
                    int *l_1591 = (void*)0;
                    int *l_1592 = &g_174;
                    int *l_1593 = (void*)0;
                    int *l_1594 = &l_1000;
                    int l_1595 = 0xDCE7D0ACL;
                    int *l_1596 = &g_310;
                    int *l_1597 = &l_1585;
                    int *l_1598 = &l_1000;
                    int *l_1599 = (void*)0;
                    int *l_1600 = (void*)0;
                    int *l_1601 = (void*)0;
                    int *l_1602 = (void*)0;
                    int *l_1603 = &l_1000;
                    int l_1604 = (-1L);
                    int *l_1605 = &g_614;
                    int *l_1606 = &g_849;
                    int *l_1608 = &l_1178;
                    int *l_1609 = &l_1435;
                    int *l_1610 = (void*)0;
                    int *l_1611 = &g_614;
                    int *l_1612 = &g_231;
                    int *l_1613 = (void*)0;
                    int *l_1615 = &l_1449;
                    int *l_1616 = (void*)0;
                    int *l_1617 = &l_1568;
                    int *l_1618 = &l_1437;
                    int *l_1620 = &g_7;
                    int *l_1621 = (void*)0;
                    int *l_1622 = &l_1568;
                    int *l_1623 = (void*)0;
                    int *l_1624 = (void*)0;
                    int *l_1625 = &g_614;
                    int *l_1626 = (void*)0;
                    int *l_1627 = &l_1152;
                    int *l_1628 = &l_1568;
                    int *l_1629 = &l_1437;
                    int *l_1630 = &g_7;
                    int *l_1632 = (void*)0;
                    int *l_1633 = &g_712;
                    int *l_1634 = &g_231;
                    int *l_1635 = (void*)0;
                    int *l_1636 = &g_231;
                    int *l_1637 = &l_1619;
                    if (((safe_mul_func_int8_t_s_s(func_33(((*l_1460) , p_20), (*g_497)), (*p_22))) , 0xC6C0FB9BL))
                    {
                        unsigned short l_1527 = 65534UL;
                        int ***l_1528 = &l_1346;
                        (*g_724) = ((((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((*p_22), (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((*p_23) | (((safe_sub_func_uint8_t_u_u((((l_1523 != ((l_1505 , (((safe_mul_func_uint16_t_u_u((g_876 != (~g_174)), l_1526)) > (~0xD615L)) , l_1527)) , l_1528)) , &g_32) == &g_32), l_1529)) , 1L) ^ g_419)), (-1L))), p_24)), l_1530)))), g_639)) , g_1206) , (*p_23)) >= (**g_497));
                    }
                    else
                    {
                        int *l_1535 = (void*)0;
                        (*l_1444) ^= (safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(((func_95(l_1535, ((safe_sub_func_int32_t_s_s((65535UL > (safe_sub_func_int32_t_s_s((*p_23), g_81))), (*p_23))) & (**l_1433)), (**l_1433), &g_876, p_24) , l_1548) == (void*)0), p_21)), g_642));
                    }
                    ++g_1638;
                    for (g_81 = 19; (g_81 < 55); g_81 = safe_add_func_uint16_t_u_u(g_81, 7))
                    {
                        return (*g_497);


                    }
                }

                ;
                (*l_1546) = &p_21;

                ;
            }

            ;
            ;
            (*l_1457) |= (*g_724);
        }
        else
        {
            unsigned short l_1646 = 0UL;
            unsigned l_1653 = 1UL;
            int *l_1654 = &g_310;
            int *l_1655 = &g_712;
            int *l_1656 = (void*)0;
            int *l_1657 = &g_712;
            int *l_1658 = &g_849;
            int *l_1659 = &g_4;
            int *l_1660 = &g_614;
            int *l_1661 = &l_1178;
            int *l_1662 = &l_1614;
            int *l_1663 = &l_1614;
            int l_1664 = 1L;
            int *l_1665 = (void*)0;
            int *l_1666 = &g_614;
            int l_1667 = 7L;
            int *l_1668 = &g_231;
            int *l_1669 = &g_712;
            int *l_1670 = (void*)0;
            int l_1671 = 9L;
            int *l_1672 = (void*)0;
            int *l_1673 = &g_614;
            int *l_1674 = &l_1071;
            int *l_1675 = &l_1671;
            int *l_1676 = &g_7;
            int *l_1677 = (void*)0;
            int *l_1678 = &l_1614;
            int *l_1679 = &l_1449;
            int *l_1680 = &g_4;
            int *l_1681 = (void*)0;
            int *l_1682 = &g_231;
            int *l_1683 = &g_4;
            int *l_1684 = &l_1449;
            int *l_1685 = &g_614;
            int *l_1686 = &g_7;
            int *l_1687 = &g_712;
            int *l_1688 = &g_614;
            int *l_1689 = (void*)0;
            int *l_1690 = &g_174;
            int *l_1691 = &l_1664;
            int *l_1692 = &g_614;
            int *l_1693 = &l_1108;
            int *l_1694 = &l_1449;
            int *l_1695 = &g_614;
            int *l_1696 = &l_1671;
            int *l_1697 = &l_1667;
            int *l_1698 = &l_1071;
            int *l_1699 = &g_712;
            int l_1700 = 0L;
            int *l_1701 = &l_1108;
            int *l_1702 = (void*)0;
            int *l_1703 = &l_1671;
            int l_1704 = (-2L);
            int *l_1705 = &l_1094;
            int *l_1706 = &l_1094;
            int *l_1707 = &g_614;
            int *l_1708 = &l_1700;
            int *l_1709 = &l_1094;
            int *l_1710 = &g_7;
            int *l_1711 = &l_1178;
            int *l_1712 = (void*)0;
            int *l_1713 = (void*)0;
            int *l_1714 = (void*)0;
            int *l_1715 = &l_1152;
            int *l_1716 = &g_849;
            int *l_1717 = (void*)0;
            int *l_1718 = &l_1178;
            int *l_1719 = &l_1108;
            int *l_1720 = &g_712;
            int l_1721 = 0xAD079DFDL;
            int *l_1722 = &l_1437;
            int *l_1723 = &g_174;
            int *l_1724 = (void*)0;
            int *l_1725 = &l_1700;
            int *l_1726 = &l_1094;
            int *l_1727 = &g_310;
            int *l_1728 = &g_231;
            int *l_1729 = &l_1000;
            int *l_1730 = &l_1178;
            int *l_1731 = &l_1178;
            int *l_1733 = &g_174;
            int *l_1734 = &l_1178;
            int *l_1735 = &l_1178;
            int *l_1736 = &g_174;
            int *l_1737 = &g_310;
            int *l_1738 = (void*)0;
            int *l_1739 = &g_174;
            int *l_1740 = &g_712;
            int *l_1741 = (void*)0;
            int *l_1742 = &l_1437;
            int *l_1743 = &l_1667;
            int *l_1744 = &l_1700;
            int *l_1745 = &g_174;
            int *l_1746 = &l_1700;
            int *l_1747 = &g_7;
            int *l_1748 = (void*)0;
            int *l_1749 = &g_712;
            int l_1750 = 3L;
            int *l_1752 = &g_174;
            int *l_1753 = &l_1449;
            int *l_1754 = &l_1704;
            int *l_1755 = &l_1108;
            int *l_1756 = &l_1614;
            int *l_1757 = &l_1664;
            int *l_1758 = &g_310;
            int *l_1759 = &l_1000;
            int *l_1760 = &l_1751;
            int *l_1761 = &l_1152;
            int l_1762 = 1L;
            int *l_1763 = &l_1762;
            int *l_1764 = &g_4;
            int *l_1765 = &l_1108;
            int l_1766 = 0x207E4BE2L;
            int *l_1767 = &g_7;
            int *l_1768 = &g_310;
            int *l_1769 = (void*)0;
            int *l_1770 = &g_7;
            int *l_1771 = &l_1071;
            int *l_1772 = &l_1178;
            int *l_1774 = &l_1750;
            int *l_1775 = &l_1108;
            int *l_1776 = &l_1750;
            int *l_1777 = &l_1773;
            int *l_1778 = &l_1664;
            int *l_1780 = &g_614;
            int *l_1781 = &l_1000;
            int *l_1782 = &l_1671;
            int *l_1783 = &l_1449;
            int *l_1784 = (void*)0;
            int *l_1785 = &l_1750;
            int *l_1786 = &l_1721;
            int *l_1787 = &g_712;
            int *l_1788 = (void*)0;
            int *l_1789 = &g_712;
            int *l_1790 = &l_1094;
            int *l_1791 = &l_1773;
            int *l_1792 = &l_1704;
            int *l_1793 = &l_1721;
            int *l_1794 = &g_7;
            int *l_1796 = &l_1094;
            int l_1797 = (-1L);
            int *l_1799 = &g_4;
            int *l_1800 = &l_1766;
            int *l_1801 = &g_310;
            int *l_1802 = &l_1000;
            int *l_1803 = &l_1797;
            int *l_1804 = (void*)0;
            int *l_1805 = &l_1671;
            int *l_1806 = &l_1094;
            int *l_1807 = &l_1614;
            int *l_1808 = &l_1795;
            int *l_1809 = &l_1667;
            int *l_1810 = &l_1108;
            int *l_1811 = &l_1071;
            int *l_1813 = &l_1795;
            int *l_1814 = &g_310;
            int *l_1815 = &l_1108;
            int *l_1816 = &l_1750;
            int *l_1817 = &l_1000;
            int *l_1818 = &l_1779;
            int *l_1819 = &l_1071;
            int *l_1820 = &l_1721;
            int *l_1822 = (void*)0;
            int *l_1823 = &l_1000;
            int *l_1824 = &l_1000;
            int *l_1825 = &g_4;
            (*g_724) = (*g_1492);
            (**g_497) = 3L;
            (**g_497) |= (l_1643 && (l_1646 == ((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(8UL, (safe_mod_func_int8_t_s_s((*p_22), (**l_1433))))) ^ p_24), 4L)) <= l_1653)));
            g_1826--;
        }
        (*g_497) = &p_21;

        ;
    }

    ;
    ;
    for (l_1472 = 0; (l_1472 == 51); ++l_1472)
    {
        (*g_724) |= (*p_23);
    }
    return l_1831;



}







static const unsigned func_25(char p_26, int * p_27, short p_28, short p_29, int * const p_30)
{
    int *l_977 = &g_174;
    (*g_497) = l_977;

    ;
    (*g_724) = (*g_498);
    return p_29;
}







static unsigned char func_33(int p_34, const int * p_35)
{
    int *l_36 = &g_7;
    int *l_37 = &g_7;
    int *l_38 = &g_4;
    int *l_39 = &g_7;
    int *l_40 = &g_4;
    int *l_41 = &g_7;
    int *l_42 = &g_7;
    int *l_43 = &g_7;
    int *l_44 = &g_4;
    int l_45 = 0x14898D08L;
    int *l_46 = &g_7;
    int *l_47 = &l_45;
    int l_48 = (-1L);
    int *l_49 = (void*)0;
    int *l_50 = &g_4;
    int *l_51 = &l_45;
    int *l_52 = &g_4;
    int *l_53 = &l_48;
    int *l_54 = &g_4;
    int *l_55 = &g_7;
    int *l_56 = &g_7;
    int *l_57 = &g_7;
    int *l_58 = &g_7;
    int *l_59 = &l_45;
    int *l_60 = &l_48;
    int *l_61 = (void*)0;
    int *l_62 = &g_4;
    int *l_63 = &l_48;
    int *l_64 = (void*)0;
    int *l_65 = &l_45;
    int *l_66 = &l_48;
    int *l_67 = &g_7;
    int *l_68 = (void*)0;
    int *l_69 = &l_45;
    int l_70 = 0x2646899DL;
    int *l_71 = &l_70;
    int *l_72 = &g_4;
    int *l_73 = (void*)0;
    int *l_74 = &l_48;
    int *l_75 = &l_48;
    int *l_76 = &l_45;
    int *l_77 = &g_4;
    unsigned l_78 = 3UL;
    union U0 *l_92 = &g_93;
    char *l_929 = &g_876;
    const union U0 **l_938 = &g_125;
    ++l_78;
    ++g_81;
    for (l_45 = 0; (l_45 <= 27); l_45 = safe_add_func_int8_t_s_s(l_45, 2))
    {
        int **l_86 = (void*)0;
        int **l_87 = (void*)0;
        int **l_88 = (void*)0;
        int **l_89 = &l_69;
        char *l_944 = (void*)0;
        (*l_89) = (void*)0;

        ;
        for (l_48 = 0; (l_48 == 18); l_48 = safe_add_func_uint8_t_u_u(l_48, 2))
        {
            union U0 **l_94 = &l_92;
            unsigned char l_122 = 0x5CL;
            int ** const l_123 = (void*)0;
            (*l_94) = l_92;
        }
        if ((**g_497))
            break;
        for (g_639 = (-8); (g_639 == 23); g_639++)
        {
            short l_976 = 3L;
            return l_976;
        }
    }

    ;
    return g_347;
}







static union U0 func_95(int * p_96, short p_97, int p_98, char * p_99, short p_100)
{
    short l_908 = 0x7138L;
    int *l_909 = &g_849;
    union U0 l_910 = {0};
    (*l_909) ^= func_138(l_908, (*g_124), (~((l_908 & ((((l_908 | (p_97 <= l_908)) >= ((g_32 , ((&g_614 == &p_98) , 0x6AL)) != 0xEFL)) , g_459) && g_7)) >= (*g_724))));
    (*g_724) = 0L;
    return l_910;


    }







static char * func_101(unsigned p_102, int ** p_103)
{
    unsigned l_891 = 4294967295UL;
    union U0 l_894 = {0};
    unsigned char l_895 = 0x39L;
    union U0 *l_899 = &g_93;
    union U0 **l_898 = &l_899;
    int ** const l_906 = &g_724;
    char *l_907 = (void*)0;
    l_891++;
    (*g_724) &= (4L & (l_894 , (g_712 > (l_895 & (((safe_rshift_func_int16_t_s_s(0x254EL, 1)) , (void*)0) == &g_125)))));

    ;
    (*g_724) |= (l_891 < (249UL || (l_898 == &l_899)));
    (**p_103) = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_891, ((((l_895 < ((void*)0 != &g_497)) , p_102) & (**l_906)) && 65527UL))), p_102));
    return l_907;


}







static short func_108(unsigned p_109, int ** const p_110, const union U0 ** p_111, int p_112)
{
    char l_130 = (-1L);
    int * const l_131 = &g_4;
    char l_132 = 0x07L;
    union U0 *l_286 = &g_93;
    int l_327 = 0xB7A4D682L;
    unsigned l_473 = 3UL;
    int l_547 = 0xADFF3299L;
    short l_709 = (-1L);
    int *l_797 = &g_614;
    int *l_798 = &l_547;
    int *l_799 = &g_712;
    int *l_800 = (void*)0;
    int *l_801 = &g_231;
    int *l_802 = &g_231;
    int *l_803 = &g_231;
    int *l_804 = &g_614;
    int *l_805 = &g_712;
    int *l_806 = &g_614;
    int *l_807 = &g_310;
    int *l_808 = &l_327;
    int l_809 = 1L;
    int l_810 = (-8L);
    int *l_811 = &g_614;
    int *l_812 = &l_810;
    int *l_813 = &g_310;
    int *l_814 = &g_712;
    int l_815 = 0L;
    int *l_816 = &l_327;
    int *l_817 = &l_327;
    int *l_818 = &g_231;
    int *l_819 = &g_712;
    int *l_820 = &l_815;
    int *l_821 = &g_231;
    int *l_822 = &l_809;
    int *l_823 = &g_712;
    int *l_824 = (void*)0;
    int *l_825 = &l_547;
    int *l_826 = (void*)0;
    int *l_827 = &g_712;
    int *l_828 = &g_712;
    int *l_829 = &g_231;
    int *l_830 = &l_547;
    int *l_831 = &g_712;
    int *l_832 = &g_614;
    int *l_833 = &l_547;
    int *l_834 = &l_810;
    int *l_835 = (void*)0;
    int *l_836 = &l_815;
    int *l_837 = &g_712;
    int *l_838 = &l_815;
    int *l_839 = &l_809;
    int *l_840 = &l_815;
    int *l_841 = &l_810;
    int *l_842 = &g_310;
    int *l_843 = &g_310;
    int *l_844 = &l_327;
    int l_845 = 0x06C6AB1EL;
    int *l_846 = &g_174;
    int *l_847 = (void*)0;
    int *l_848 = &l_327;
    int *l_850 = (void*)0;
    int *l_851 = &g_614;
    int l_852 = (-10L);
    int *l_853 = &g_614;
    int l_854 = 0x188EEAB6L;
    int *l_855 = (void*)0;
    int *l_856 = &g_174;
    int l_857 = 0x1E9CBB1EL;
    int *l_858 = &l_547;
    int *l_859 = &l_852;
    int l_860 = (-2L);
    int *l_861 = &g_174;
    int *l_862 = &g_174;
    int *l_863 = (void*)0;
    int *l_864 = &l_860;
    int *l_865 = &g_310;
    int *l_866 = &g_231;
    int *l_867 = &l_810;
    int *l_868 = &l_852;
    int *l_869 = &l_547;
    int *l_870 = &g_310;
    int l_871 = 0xC141DDEFL;
    int l_872 = 0L;
    int *l_873 = &l_845;
    int l_874 = 0x1BD4FFE3L;
    int *l_875 = &g_310;
    int *l_877 = (void*)0;
    int l_878 = 0xA6EDD080L;
    int *l_880 = &l_872;
    int *l_881 = &l_872;
    int *l_882 = &l_845;
    int *l_883 = &g_849;
    int *l_884 = &l_809;
    int *l_885 = &l_809;
    int *l_886 = &g_614;
    int *l_887 = &l_860;
    l_132 ^= (safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(l_130, 0x0253A107L)), (((void*)0 == l_131) >= 0x846FCCBBL)));
    if ((safe_unary_minus_func_int16_t_s((safe_div_func_int8_t_s_s((!(safe_rshift_func_int8_t_s_u((func_138(((g_4 , 3UL) <= ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((void*)0 != &g_32), (g_4 | ((1L | (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((*l_131) , (*l_131)), (safe_div_func_int8_t_s_s((!(safe_lshift_func_int16_t_s_s(g_81, g_32))), (*l_131))))) , p_109), g_32))) == p_109)))), 0)) >= (*l_131))), (*p_111), (*l_131)) ^ 0x6DL), 3))), (*l_131))))))
    {
        unsigned short l_278 = 0x75D9L;
        const union U0 l_282 = {0};
        char l_285 = (-3L);
        const union U0 *l_301 = (void*)0;
        int *l_481 = &g_310;
        l_278 = (safe_unary_minus_func_uint16_t_u(g_32));
        if ((((func_138((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(func_138(g_231, (*p_111), p_109))), g_4)), &g_93, (l_282 , (safe_sub_func_uint8_t_u_u(((l_278 < 0xADDEL) , g_4), p_112)))) && l_285) && p_109) || 8UL))
        {
            unsigned short l_306 = 1UL;
            int l_338 = 1L;
            int l_395 = 0xB076AB36L;
            int *l_477 = (void*)0;
            int **l_476 = &l_477;
            if (((*p_111) == l_286))
            {
                int l_297 = 6L;
                union U0 l_298 = {0};
                int *l_309 = &g_310;
                for (l_285 = 0; (l_285 <= 22); l_285 = safe_add_func_uint32_t_u_u(l_285, 4))
                {
                    short l_295 = 0x9D0CL;
                    int *l_296 = &g_174;
                    (*g_124) = ((g_4 , (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(0x4CL, p_109)) , (safe_sub_func_uint16_t_u_u(1UL, (p_109 <= ((*l_286) , ((((l_295 & ((void*)0 != l_296)) , l_297) , l_298) , 1UL)))))), (*l_296)))) , (*p_111));

                    ;
                }

                ;
                (*l_309) |= (safe_sub_func_uint32_t_u_u((func_138(g_4, (*p_111), g_7) | 0x3FAAL), 0x89D617F3L));
            }
            else
            {
                char l_311 = 0x05L;
                g_310 = 0x2B8B1C4EL;
                g_310 = l_311;
            }
            for (l_130 = 0; (l_130 != 4); l_130++)
            {
                char l_332 = 0x7AL;
                int *l_353 = (void*)0;
                int *l_354 = &g_310;
                short l_375 = (-3L);
                int l_400 = 0xC8FD6D36L;
                int l_436 = 0x6A3D8643L;
                int l_444 = 0xDE8AA639L;
                for (g_174 = 0; (g_174 == (-29)); g_174--)
                {
                    char l_333 = 0x6FL;
                    int **l_350 = (void*)0;
                    int *l_352 = &g_231;
                    int **l_351 = &l_352;
                    if (g_231)
                    {
                        int *l_316 = &g_310;
                        (*l_316) = 0xC85CD55AL;
                        (*l_316) |= g_4;
                    }
                    else
                    {
                        int *l_317 = (void*)0;
                        int *l_318 = &g_310;
                        int **l_319 = &l_318;
                        int *l_320 = (void*)0;
                        int *l_321 = &g_231;
                        int *l_322 = (void*)0;
                        int *l_323 = &g_310;
                        int *l_324 = &g_310;
                        int *l_325 = &g_231;
                        int *l_326 = &g_231;
                        int *l_328 = &l_327;
                        int *l_329 = &g_231;
                        int *l_330 = &l_327;
                        int *l_331 = &g_310;
                        int *l_334 = &l_327;
                        int *l_335 = &l_327;
                        int *l_336 = &g_310;
                        int *l_337 = (void*)0;
                        int *l_339 = &l_327;
                        int *l_340 = &l_338;
                        int *l_341 = &g_310;
                        int *l_342 = &l_338;
                        int *l_343 = &g_310;
                        int *l_344 = &g_310;
                        int *l_345 = &l_338;
                        int *l_346 = &g_310;
                        (*l_318) &= 6L;
                        (*l_319) = &g_4;

                        ;
                        ++g_347;
                    }
                    (*l_351) = &l_327;

                    ;
                }
                (*l_354) = (l_278 < (((*p_111) != (void*)0) | ((void*)0 == &g_32)));
                if (((*l_354) , ((safe_unary_minus_func_int16_t_s((&g_32 != (void*)0))) < func_138(((safe_mod_func_int8_t_s_s((*l_131), g_32)) > (+((g_347 , (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((g_231 && l_285), ((((safe_div_func_int32_t_s_s((!(l_285 <= l_338)), 0x7830CF46L)) > 0xFFL) , (-7L)) <= g_347))), p_112)), l_285))) < 1L))), (*p_111), p_112))))
                {
                    int *l_376 = (void*)0;
                    int *l_377 = (void*)0;
                    int *l_378 = &g_174;
                    int *l_379 = (void*)0;
                    int *l_380 = &g_231;
                    int *l_381 = &g_231;
                    int *l_382 = (void*)0;
                    int *l_383 = &l_338;
                    int *l_384 = &l_338;
                    int *l_385 = &l_338;
                    int *l_386 = (void*)0;
                    int *l_387 = (void*)0;
                    int *l_388 = &l_327;
                    int *l_389 = &l_327;
                    int *l_390 = &l_338;
                    int *l_391 = &g_231;
                    int *l_392 = (void*)0;
                    int *l_393 = &g_174;
                    int *l_394 = &g_231;
                    int *l_396 = &g_231;
                    int *l_397 = (void*)0;
                    int *l_398 = &l_338;
                    int *l_399 = &l_395;
                    int *l_401 = &l_338;
                    int *l_402 = &g_231;
                    int *l_403 = &l_395;
                    int *l_404 = &g_231;
                    int *l_405 = &l_400;
                    int *l_406 = &l_400;
                    int *l_407 = (void*)0;
                    int *l_408 = &l_395;
                    int *l_409 = &g_231;
                    int *l_410 = &l_327;
                    int *l_411 = &l_327;
                    int *l_412 = (void*)0;
                    int *l_413 = &g_310;
                    int *l_414 = &l_400;
                    int *l_415 = &l_395;
                    int *l_416 = &l_395;
                    int *l_417 = &l_327;
                    int *l_418 = &l_338;
                    int *l_420 = &l_327;
                    int *l_421 = &l_395;
                    int *l_422 = &l_395;
                    int *l_423 = &l_400;
                    int *l_424 = &l_400;
                    int *l_425 = &l_400;
                    int *l_426 = &l_338;
                    int *l_427 = &l_327;
                    int *l_428 = &l_400;
                    int *l_429 = &l_400;
                    int *l_430 = &l_327;
                    int *l_431 = &l_327;
                    int *l_432 = (void*)0;
                    int *l_433 = &l_338;
                    int *l_434 = (void*)0;
                    int *l_435 = &g_174;
                    int *l_437 = &l_327;
                    int *l_438 = &g_310;
                    int *l_439 = (void*)0;
                    int *l_440 = &g_174;
                    int *l_441 = &l_400;
                    int *l_442 = &l_327;
                    int *l_443 = &g_231;
                    int *l_445 = &g_231;
                    int *l_446 = &l_395;
                    int *l_447 = (void*)0;
                    int *l_448 = &l_338;
                    int *l_449 = &l_436;
                    int *l_450 = &g_310;
                    int *l_451 = &l_327;
                    int *l_452 = &l_400;
                    int *l_453 = (void*)0;
                    int *l_454 = (void*)0;
                    int *l_455 = &l_444;
                    int *l_456 = &l_400;
                    int *l_457 = &l_327;
                    int *l_458 = (void*)0;
                    for (l_285 = 0; (l_285 > 14); l_285 = safe_add_func_int8_t_s_s(l_285, 2))
                    {
                        int l_374 = (-1L);
                        l_375 = (safe_mod_func_uint32_t_u_u(0xF1AE5059L, (safe_rshift_func_int8_t_s_s(((p_112 && 0x50L) >= (safe_div_func_int32_t_s_s(g_7, l_338))), l_374))));
                        (*l_354) &= (&g_32 != &g_32);
                    }
                    g_459--;
                }
                else
                {
                    return l_306;
                }
                for (g_419 = 0; (g_419 < 10); g_419 = safe_add_func_uint32_t_u_u(g_419, 7))
                {
                    for (g_174 = (-3); (g_174 == (-24)); g_174--)
                    {
                        int *l_466 = &l_436;
                        int *l_467 = &l_444;
                        int *l_468 = &g_231;
                        int *l_469 = &l_327;
                        int *l_470 = (void*)0;
                        int *l_471 = &l_395;
                        int *l_472 = &l_444;
                        ++l_473;
                        return (*l_131);
                    }
                    if (g_4)
                        continue;
                }
            }
            (*p_111) = l_286;
            (*l_476) = &g_7;

            ;
        }
        else
        {
            return g_347;
        }

        ;
        for (p_112 = 0; (p_112 >= 23); p_112++)
        {
            unsigned l_480 = 4294967295UL;
            int **l_482 = &l_481;
            (*l_482) = ((g_419 && 0x2E97L) , (l_480 , l_481));
        }
        l_327 = ((g_310 == p_109) , g_347);
    }
    else
    {
        short l_500 = 0xB20BL;
        int *l_504 = &l_327;
        int l_569 = 0x1C421BA9L;
        int l_570 = 0x151BE30DL;
        int l_587 = 5L;
        int l_626 = 0x19053269L;
        unsigned short l_690 = 9UL;
        union U0 ** const l_710 = &l_286;
        const union U0 *l_780 = &g_93;
        for (g_81 = 0; (g_81 <= 47); ++g_81)
        {
            unsigned char l_499 = 251UL;
            union U0 **l_501 = &l_286;
            char * const l_502 = &g_32;
            int l_505 = 0x927434CFL;
            union U0 *l_514 = &g_93;
            if ((safe_mod_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u(((g_32 || ((safe_add_func_uint8_t_u_u(0xF5L, (0x103FD7DEL > ((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_109 == (safe_mul_func_int8_t_s_s((((void*)0 == g_497) > (g_459 , l_499)), ((((l_500 >= 0x73A81244L) , l_501) == l_501) , p_112)))), 0UL)), g_347)) & 0L)))) , g_32)) , g_4), l_499)) ^ p_112) && 0x9B30L), p_109)))
            {
                return p_112;


            }
            else
            {
                unsigned l_503 = 3UL;
                l_503 = (l_502 != &g_32);
                (*g_497) = (*g_497);
                (*g_497) = l_504;

                ;
            }

            ;
            l_505 |= (**g_497);
            if ((safe_lshift_func_int8_t_s_u((*l_504), 1)))
            {
                (*g_497) = ((safe_mul_func_int16_t_s_s(g_459, ((((void*)0 != p_111) != (safe_div_func_uint16_t_u_u(5UL, g_4))) ^ p_112))) , l_504);
                for (l_505 = 0; (l_505 <= 16); ++l_505)
                {
                    (*p_111) = l_514;
                }
            }
            else
            {
                int l_515 = 0L;
                int l_516 = 8L;
                l_516 |= ((-10L) < (g_32 >= (g_174 , l_515)));
                (*g_497) = (*g_497);
            }
        }

        ;
        if ((p_109 == (((*l_131) || (safe_div_func_int16_t_s_s(p_109, 65535UL))) != (*l_131))))
        {
            int l_523 = 0x5D181BC6L;
            (*l_504) ^= (safe_rshift_func_int8_t_s_s((((**p_111) , (*l_131)) <= 0xE52687A9L), 1));
            (*l_504) = (safe_lshift_func_uint8_t_u_u((l_523 > (**g_497)), 6));
        }
        else
        {
            unsigned char l_526 = 8UL;
            int l_564 = 1L;
            int l_577 = 0x6117551BL;
            int l_611 = (-1L);
            int l_689 = (-1L);
            const union U0 *l_711 = &g_93;
            (*l_504) = 0x54374190L;
            if ((g_81 >= g_347))
            {
                int l_524 = 0L;
                int l_559 = 9L;
                int l_635 = 0L;
                int *l_648 = &l_577;
                int *l_649 = &l_587;
                int *l_650 = &l_559;
                int *l_651 = (void*)0;
                int *l_652 = &l_626;
                int *l_653 = (void*)0;
                int *l_654 = &l_587;
                int *l_655 = &l_587;
                int *l_656 = &l_611;
                int *l_657 = &g_174;
                int *l_658 = &g_614;
                int *l_659 = &l_569;
                int *l_660 = &g_310;
                int *l_661 = &l_559;
                int *l_662 = &g_614;
                int *l_663 = &l_635;
                int *l_664 = &g_310;
                int *l_665 = &g_174;
                int *l_666 = &l_587;
                int *l_667 = &g_231;
                int *l_668 = &l_570;
                int *l_669 = &g_231;
                int *l_670 = &l_587;
                int *l_671 = &l_611;
                int *l_672 = &l_564;
                int *l_673 = &l_559;
                int *l_674 = (void*)0;
                int *l_675 = &l_626;
                int *l_676 = (void*)0;
                int *l_677 = &l_611;
                int *l_678 = &l_327;
                int *l_679 = &g_231;
                int *l_680 = &l_559;
                int *l_681 = &l_570;
                int *l_682 = &l_569;
                int *l_683 = &l_587;
                int *l_684 = &l_547;
                int *l_685 = &l_327;
                int *l_686 = (void*)0;
                int *l_687 = &g_174;
                int *l_688 = &l_564;
                unsigned char l_699 = 0xB5L;
                if (l_524)
                {
                    union U0 l_525 = {0};
                    int l_541 = 0xC271627FL;
                    (*l_504) = (l_525 , (((l_526 & p_109) >= 1UL) , (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(65535UL, 10)), 7))));

                    ;
                    for (g_347 = 0; (g_347 <= 31); g_347++)
                    {
                        const unsigned l_544 = 4294967295UL;
                        int *l_545 = (void*)0;
                        int l_546 = 4L;
                        l_546 &= ((((g_459 <= 0L) , 0xF1F0AA9DL) != (safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((*l_131) == l_541) , 0xDE8AL), (safe_sub_func_int8_t_s_s(0xFDL, func_138((((l_544 | ((&l_541 != (*g_497)) || 0x4FL)) & (*l_504)) , l_541), (*p_111), l_541))))), p_109)), 4294967288UL))) , (*l_131));
                    }
                }
                else
                {
                    unsigned l_548 = 0x62622B78L;
                    int l_628 = 0xB3D1204BL;
                    int l_634 = 0x211044F1L;
                    short l_645 = 0xED04L;
                    l_547 &= (**g_497);
                    (*l_504) = l_548;
                    for (g_81 = (-20); (g_81 == 43); g_81 = safe_add_func_uint8_t_u_u(g_81, 4))
                    {
                        int *l_551 = &g_231;
                        int *l_552 = &l_327;
                        int *l_553 = &l_327;
                        int *l_554 = &g_310;
                        int *l_555 = &l_547;
                        int *l_556 = &l_327;
                        int *l_557 = (void*)0;
                        int *l_558 = &g_310;
                        int *l_560 = &l_559;
                        int *l_561 = &g_310;
                        int *l_562 = (void*)0;
                        int *l_563 = &g_174;
                        int *l_565 = &g_174;
                        int *l_566 = &l_327;
                        int *l_567 = (void*)0;
                        int *l_568 = (void*)0;
                        int *l_571 = &l_327;
                        int *l_572 = &l_547;
                        int *l_573 = &l_547;
                        int *l_574 = &l_570;
                        int *l_575 = (void*)0;
                        int *l_576 = &l_559;
                        int *l_578 = &l_327;
                        int *l_579 = &l_569;
                        int *l_580 = &g_174;
                        int *l_581 = (void*)0;
                        int *l_582 = &l_547;
                        int *l_583 = &l_570;
                        int *l_584 = &l_559;
                        int *l_585 = &g_174;
                        int *l_586 = &g_231;
                        int *l_588 = &l_569;
                        int *l_589 = &g_231;
                        int *l_590 = &l_577;
                        int *l_591 = &l_564;
                        int *l_592 = &g_174;
                        int *l_593 = (void*)0;
                        int *l_594 = &g_231;
                        int *l_595 = &l_570;
                        int *l_596 = &l_547;
                        int *l_597 = &g_174;
                        int *l_598 = (void*)0;
                        int *l_599 = &l_547;
                        int *l_600 = &l_547;
                        int *l_601 = &g_310;
                        int *l_602 = &l_564;
                        int *l_603 = &l_587;
                        int *l_604 = &g_174;
                        int *l_605 = &l_577;
                        int *l_606 = &l_577;
                        int *l_607 = &g_310;
                        int *l_608 = &l_569;
                        int *l_609 = &l_559;
                        int *l_610 = &l_577;
                        int *l_612 = &g_174;
                        int *l_613 = &l_611;
                        int *l_615 = (void*)0;
                        int *l_616 = &l_611;
                        int *l_617 = &l_587;
                        int *l_618 = &g_231;
                        int *l_619 = &l_570;
                        int *l_620 = &l_570;
                        int *l_621 = (void*)0;
                        int *l_622 = (void*)0;
                        int *l_623 = &g_174;
                        int *l_624 = &l_587;
                        int *l_625 = &l_569;
                        int *l_627 = &g_614;
                        int *l_629 = &l_628;
                        int *l_630 = &g_310;
                        int *l_631 = &g_614;
                        int *l_632 = (void*)0;
                        int *l_633 = &g_614;
                        int *l_636 = &g_310;
                        int *l_637 = &l_327;
                        int *l_638 = (void*)0;
                        g_639--;
                        ++g_642;
                        l_634 = l_645;
                    }
                    for (l_577 = (-14); (l_577 <= 9); ++l_577)
                    {
                        (*l_504) &= (-7L);
                    }
                }
                l_690--;
                l_699 &= ((safe_mod_func_int32_t_s_s(func_138(g_642, l_286, ((((*l_687) <= (((safe_sub_func_int16_t_s_s((*l_504), g_347)) | p_109) ^ g_310)) <= (safe_div_func_int16_t_s_s((p_109 < (*l_504)), 0x1476L))) ^ l_611)), p_112)) ^ (*l_652));
                (*l_683) |= func_138(((0x12L != (((safe_sub_func_uint32_t_u_u((p_109 && ((*l_286) , ((func_138(((void*)0 != (*g_124)), (*p_111), g_310) , p_112) && (*l_131)))), g_310)) || g_614) , 0L)) , g_174), l_286, g_419);
            }
            else
            {
                int l_723 = 0x4A82BBE3L;
                const int *l_726 = (void*)0;
                const int * const *l_725 = &l_726;
                int l_746 = 0x4CAFE291L;
                const union U0 *l_784 = &g_93;
                if ((**g_497))
                {
                    unsigned short l_728 = 0x8A5FL;
                    unsigned l_749 = 9UL;
                    if (((*g_498) , (((**g_497) , (safe_mul_func_int8_t_s_s(((*l_131) | (safe_unary_minus_func_int16_t_s(p_109))), p_109))) | ((+((safe_mul_func_uint8_t_u_u(func_138((((((+(*l_131)) | ((func_138((safe_rshift_func_uint16_t_u_u((p_109 , 65531UL), 13)), (*p_111), l_709) , l_710) != (void*)0)) , 5UL) , 0x5170954EL) != p_112), l_711, g_712), 255UL)) < (*l_131))) , p_109))))
                    {
                        (*l_504) = ((p_109 || (safe_lshift_func_uint8_t_u_u((((g_7 && (safe_mul_func_uint8_t_u_u((((((safe_div_func_uint8_t_u_u(p_109, p_112)) > func_138((p_112 != (0xEC5EL == (((safe_lshift_func_int16_t_s_s(func_138(g_419, (*p_111), g_7), g_639)) > p_109) < 0UL))), l_711, g_7)) < l_723) >= (-1L)) == 0UL), p_112))) & g_712) ^ g_310), 3))) , (*l_504));
                        (*g_497) = g_724;

                        ;
                        return p_109;
                    }
                    else
                    {
                        const int * const **l_727 = &l_725;
                        int *l_745 = &l_689;
                        int l_747 = 0x9DF640F7L;
                        int *l_748 = &g_614;
                        (*l_727) = l_725;
                        (*g_724) = (+(((p_109 < (l_728 < l_728)) , (safe_mod_func_uint32_t_u_u((p_109 < (safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((void*)0 != p_111), p_112)) || (safe_add_func_int8_t_s_s((((safe_add_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(8UL, (((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(((**g_497) != (-6L)), p_112)), (*g_498))) | p_112) | p_112))) ^ p_109) ^ (*l_131)), (-2L))) || p_109) || g_7), p_109))), 0x935192ABL))), l_564))) == g_4));
                        (*g_497) = (*g_497);
                        l_749++;
                    }
                    (*g_724) ^= (**g_497);
                    if ((*l_504))
                    {
                        (*g_497) = (*g_497);
                        (*g_724) ^= (func_138((*l_504), (((safe_sub_func_int16_t_s_s(((g_712 & (0x4D0A62D9L & ((safe_lshift_func_uint16_t_u_s((0xAFFACCB4L < p_112), 0)) || (*l_131)))) > (*g_498)), g_459)) , p_112) , (*g_124)), p_112) && (*l_504));
                    }
                    else
                    {
                        (*g_724) &= p_109;
                        (*g_724) = (0x0CL ^ ((safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(func_138((((l_728 < (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_4, (safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((func_138(g_81, (*g_124), p_109) , (safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(func_138(g_639, (*p_111), p_109), 3L)), g_419))), g_4)), 0)))), 5))) , 0xD16A00A8L) , g_7), l_780, g_419), (*l_504))) , (void*)0) != (void*)0), p_109)), g_639)) >= 0x15L));
                        return g_639;


                    }
                }
                else
                {
                    unsigned char l_781 = 0x23L;
                    (*l_504) &= (((l_781 && func_138((func_138(((*l_131) , p_112), (*p_111), (safe_sub_func_int8_t_s_s(l_781, p_109))) , (&l_504 == (void*)0)), l_784, (*l_131))) | p_112) == (*l_131));
                    (*l_504) = (safe_mod_func_uint8_t_u_u(((+g_32) <= (safe_div_func_uint32_t_u_u(p_109, g_642))), ((safe_add_func_uint8_t_u_u(0x76L, (safe_add_func_int16_t_s_s(((*g_724) >= (safe_lshift_func_uint16_t_u_u((((*l_504) , (safe_div_func_int8_t_s_s((-1L), p_112))) <= (*l_504)), 12))), 65535UL)))) , p_112)));
                    (*l_504) ^= (0x0938L >= g_639);
                }
            }
        }
    }

    ;
    g_888--;
    (*g_497) = &l_871;

    ;
    return p_109;


}







static const unsigned char func_138(unsigned char p_139, const union U0 * p_140, short p_141)
{
    short l_158 = (-1L);
    int l_161 = 0L;
    union U0 l_162 = {0};
    int l_196 = 0x04081ECFL;
    int l_197 = 0xA052AF0DL;
    unsigned l_200 = 0x4DC89BD5L;
    unsigned l_236 = 0xCF63262DL;
    int l_259 = 1L;
    if (((safe_div_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(l_158, 0L)) > (g_7 > ((safe_sub_func_uint16_t_u_u(g_81, (l_158 , l_161))) , 2L))) > (l_162 , l_161)), p_139)) <= p_139))
    {
        const unsigned l_178 = 1UL;
        for (l_161 = 29; (l_161 <= 27); --l_161)
        {
            unsigned l_177 = 4294967290UL;
            for (l_158 = 0; (l_158 >= 18); ++l_158)
            {
                for (g_81 = (-10); (g_81 == 54); g_81 = safe_add_func_int32_t_s_s(g_81, 1))
                {
                    int *l_176 = &g_174;
                    for (g_32 = (-11); (g_32 < (-21)); --g_32)
                    {
                        int *l_171 = (void*)0;
                        int *l_172 = (void*)0;
                        int *l_173 = &g_174;
                        int **l_175 = &l_173;
                        (*l_173) ^= g_7;
                        (*l_175) = (void*)0;

                        ;
                        (*l_175) = (g_174 , l_176);

                        ;
                        (*l_176) &= l_177;
                    }
                }
            }
        }
        return l_178;
    }
    else
    {
        int *l_179 = &g_174;
        int *l_180 = (void*)0;
        int *l_181 = (void*)0;
        int *l_182 = &g_174;
        int *l_183 = &g_174;
        int *l_184 = &g_174;
        int *l_185 = &g_174;
        int *l_186 = &g_174;
        int *l_187 = &g_174;
        int *l_188 = &g_174;
        int *l_189 = &g_174;
        int *l_190 = &g_174;
        int *l_191 = (void*)0;
        int *l_192 = &g_174;
        int *l_193 = (void*)0;
        int *l_194 = &g_174;
        int *l_195 = &g_174;
        int *l_198 = &g_174;
        int *l_199 = &l_197;
        union U0 l_260 = {0};
        l_200--;
        if (((((safe_lshift_func_int8_t_s_u((p_139 , l_161), g_32)) != l_161) | (!(p_140 == (void*)0))) , g_4))
        {
            int *l_205 = (void*)0;
            int **l_206 = &l_199;
            (*l_206) = l_205;

            ;
            (*l_186) ^= 0x5516B95FL;
            return l_161;
        }
        else
        {
            union U0 l_209 = {0};
            int l_214 = 0x7F063A1AL;
            unsigned l_255 = 0xAFFB97BFL;
            const short l_276 = (-1L);
            (*l_179) |= (safe_sub_func_uint32_t_u_u((((g_4 == (((g_32 , l_209) , 0xFFL) , ((p_139 > g_4) & (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_7, 6)), 1))))) > (l_214 && (safe_div_func_int8_t_s_s((!0xD5L), p_139)))) == l_196), 0UL));

            ;
            if (g_32)
            {
                int l_228 = 0L;
                for (l_214 = 26; (l_214 > (-28)); --l_214)
                {
                    int **l_219 = &l_190;
                    (*l_219) = &l_197;

                    ;
                    (**l_219) &= g_81;
                }

                ;
                g_231 &= (safe_mod_func_int32_t_s_s((((&g_125 == &g_125) & g_4) & g_32), (+(safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((+((((((*l_192) , ((1UL != ((safe_mod_func_uint16_t_u_u((l_228 || (0x0FL >= (((((safe_rshift_func_int8_t_s_u((-1L), g_7)) , p_139) == p_139) , g_81) && 1UL))), 65529UL)) , g_174)) | 0x9B4FB0B0L)) & (*l_199)) >= p_139) <= 0L) > 1UL)), 0x49L)), (*l_185))))));
                p_140 = (((l_197 , g_174) > (safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((g_7 && p_141) | 0x4968E5E8L), (~(l_236 , (1UL | (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(p_141, p_139)), 9))))))) ^ (-3L)), 2))) , p_140);
                return g_4;
            }
            else
            {
                int *l_258 = &l_196;
                unsigned short l_268 = 0xBA14L;
                for (l_197 = (-3); (l_197 <= 26); l_197 = safe_add_func_uint32_t_u_u(l_197, 1))
                {
                    (*l_195) = ((*g_125) , (((**g_124) , (**g_124)) , p_141));
                    if ((((safe_div_func_int32_t_s_s(((*p_140) , p_141), p_141)) && g_81) <= (g_81 != g_32)))
                    {
                        const int *l_246 = (void*)0;
                        const int **l_245 = &l_246;
                        (*l_245) = (void*)0;
                    }
                    else
                    {
                        int **l_247 = (void*)0;
                        int **l_248 = &l_182;
                        (*l_248) = &g_174;
                    }
                }
                (*l_184) &= (p_139 ^ p_139);
                for (l_158 = 0; (l_158 >= 2); ++l_158)
                {
                    const int l_265 = 0xA068DC4AL;
                    g_231 |= (p_141 && (((safe_lshift_func_int8_t_s_u((l_255 != (~g_174)), ((void*)0 != &p_140))) != (safe_div_func_int8_t_s_s((g_7 == l_214), g_81))) == (l_258 != (void*)0)));
                    if (l_259)
                        break;
                    (*l_184) = (l_260 , (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_265 || (safe_mod_func_uint8_t_u_u(((l_265 , (p_141 > (((*l_188) != l_268) > 1L))) != (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((l_214 <= p_141), 1)) >= p_141), 0xD734L))), l_197))), g_4)), (*l_194))));
                    if ((safe_mod_func_uint16_t_u_u(g_231, g_231)))
                    {
                        (*l_194) = ((p_139 , 1L) , (p_139 | 0x47L));
                        l_258 = (void*)0;

                        ;
                        (*l_190) = g_174;
                        (*g_124) = (*g_124);
                    }
                    else
                    {
                        unsigned l_275 = 0UL;
                        l_275 &= (*l_183);
                    }
                }

                ;
                ;
                return l_276;
            }
        }
    }
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_879, "g_879", print_hash_value);
    transparent_crc(g_888, "g_888", print_hash_value);
    transparent_crc(g_911, "g_911", print_hash_value);
    transparent_crc(g_1163, "g_1163", print_hash_value);
    transparent_crc(g_1206, "g_1206", print_hash_value);
    transparent_crc(g_1423, "g_1423", print_hash_value);
    transparent_crc(g_1638, "g_1638", print_hash_value);
    transparent_crc(g_1826, "g_1826", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
