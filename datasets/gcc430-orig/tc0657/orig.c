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



static unsigned short g_2 = 65535UL;
static int g_16 = (-6L);
static unsigned g_32 = 0xEC58F553L;
static int g_57 = 0xF39F3C5AL;
static int * const g_56 = &g_57;
static int * const *g_55 = &g_56;
static char g_67 = 0xD8L;
static short g_69 = (-1L);
static unsigned char g_75 = 254UL;
static unsigned short g_92 = 0x6627L;
static unsigned short g_109 = 0x9916L;
static unsigned short *g_114 = &g_92;
static unsigned short **g_113 = &g_114;
static unsigned short ***g_112 = &g_113;
static unsigned char *g_118 = &g_75;
static int g_138 = 0x112DD267L;
static int *g_144 = &g_57;
static int **g_143 = &g_144;
static const int *g_189 = &g_57;
static const char g_205 = 0xE9L;
static unsigned g_231 = 9UL;
static char g_254 = 0x8FL;
static unsigned char g_256 = 1UL;
static unsigned g_279 = 0x91684916L;
static unsigned char **g_283 = &g_118;
static char *g_291 = (void*)0;
static char **g_290 = &g_291;
static unsigned char g_329 = 0x7CL;
static unsigned g_366 = 0UL;
static unsigned *g_411 = (void*)0;
static unsigned **g_410 = &g_411;
static int g_435 = 1L;
static unsigned short g_470 = 0x21D9L;
static unsigned g_504 = 1UL;
static int *g_524 = (void*)0;
static int **g_523 = &g_524;
static short *g_601 = &g_69;
static short **g_600 = &g_601;
static unsigned g_677 = 0x720F91E9L;
static char g_690 = (-1L);
static unsigned g_691 = 1UL;
static const int *g_704 = &g_57;
static const unsigned g_732 = 4294967288UL;
static short **g_879 = &g_601;
static short ***g_878 = &g_879;
static unsigned char g_884 = 0x91L;
static const int *g_896 = &g_138;
static const int **g_895 = &g_896;
static unsigned g_943 = 1UL;
static const int g_961 = 0x45B2D42AL;
static char ***g_966 = &g_290;



static unsigned func_1(void);
static unsigned char func_3(unsigned p_4, unsigned short p_5, const char p_6, const unsigned p_7, unsigned p_8);
static char func_12(unsigned short p_13);
static unsigned char func_17(int p_18);
static int func_19(unsigned p_20, unsigned char p_21, int p_22, unsigned short p_23);
static char func_28(short p_29, unsigned char p_30, int * const p_31);
static int * const func_35(char p_36, int p_37);
static int * func_38(int * p_39, int * p_40, unsigned p_41, int ** p_42);
static int * func_43(unsigned p_44, const int * p_45);
static char func_46(int ** p_47, int * const * p_48, int p_49, int ** p_50, int * p_51);
static unsigned func_1(void)
{
    int l_9 = 0x888999D9L;
    int l_10 = 8L;
    int *l_11 = &l_10;
    int l_14 = (-7L);
    int **l_957 = &g_524;
    int ***l_958 = (void*)0;
    int ***l_959 = &l_957;
    const unsigned short l_960 = 0x94F1L;
    unsigned char ***l_976 = &g_283;
    (**g_55) = (g_2 == (0xB1L ^ func_3((l_9 = 0x2BBEF7D6L), ((((*l_11) = (!l_10)) == (func_12(l_14) > (safe_lshift_func_uint16_t_u_s((((*l_959) = l_957) == &g_524), 5)))) | (**g_283)), l_960, g_961, g_109)));
    (*l_976) = &g_118;
    (**g_143) = (*g_704);
    return g_205;
}







static unsigned char func_3(unsigned p_4, unsigned short p_5, const char p_6, const unsigned p_7, unsigned p_8)
{
    int ***l_962 = &g_523;
    int ***l_964 = &g_523;
    int ****l_963 = &l_964;
    char ***l_965 = (void*)0;
    int **l_974 = (void*)0;
    int **l_975 = &g_144;
    (*g_144) = func_12(((l_962 == ((*l_963) = (void*)0)) & (0x23BBL < (((g_966 = l_965) == (void*)0) || (safe_lshift_func_uint8_t_u_u(0x22L, (safe_unary_minus_func_uint8_t_u(0UL))))))));
    for (g_231 = 0; (g_231 > 40); g_231 = safe_add_func_int32_t_s_s(g_231, 1))
    {
        const int *l_972 = &g_57;
        const int **l_973 = &g_189;
        (*l_973) = l_972;
        if ((*g_704))
            break;
        return (*g_118);
    }
    (*l_975) = (*g_55);
    (*g_143) = (*l_975);
    return p_6;
}







static char func_12(unsigned short p_13)
{
    int *l_15 = &g_16;
    int *l_34 = &g_16;
    int **l_33 = &l_34;
    int **l_885 = &g_524;
    int ***l_909 = &l_33;
    int ****l_908 = &l_909;
    unsigned short * const l_939 = &g_109;
    unsigned l_940 = 0x96843F34L;
    int l_941 = 0L;
    unsigned l_954 = 4294967287UL;
    (*l_15) = (-6L);
    return (*l_15);
}







static unsigned char func_17(int p_18)
{
    int *l_881 = &g_435;
    unsigned short ****l_882 = &g_112;
    int **l_883 = (void*)0;
    (*g_143) = &p_18;
    return g_884;
}







static int func_19(unsigned p_20, unsigned char p_21, int p_22, unsigned short p_23)
{
    int *l_880 = &g_435;
    (*g_143) = l_880;
    return (*g_144);
}







static char func_28(short p_29, unsigned char p_30, int * const p_31)
{
    char l_867 = (-6L);
    int l_872 = 0L;
    int *l_873 = &l_872;
    (*g_143) = p_31;
    l_872 = ((*g_56) = (((l_867 >= ((*g_601) = (l_867 || p_30))) > ((safe_mod_func_int8_t_s_s((-1L), (safe_rshift_func_uint8_t_u_s(p_30, 4)))) | (*g_114))) != (*g_118)));
    l_873 = p_31;
    (*g_143) = &l_872;
    return l_872;
}







static int * const func_35(char p_36, int p_37)
{
    int **l_52 = (void*)0;
    int * const *l_53 = (void*)0;
    int * const **l_54 = (void*)0;
    int **l_58 = (void*)0;
    int **l_59 = (void*)0;
    int *l_61 = &g_57;
    int **l_60 = &l_61;
    char *l_66 = &g_67;
    short *l_68 = &g_69;
    unsigned char *l_74 = &g_75;
    const int *l_76 = &g_57;
    int **l_735 = (void*)0;
    int **l_736 = &g_144;
    int *l_753 = &g_16;
    unsigned short **l_777 = (void*)0;
    int * const *l_803 = (void*)0;
    unsigned ***l_806 = &g_410;
    (*l_736) = ((*l_60) = func_38(func_43((((*l_68) = ((~0xC2L) | ((*l_66) = func_46(l_52, (g_55 = l_53), p_36, l_52, ((*l_60) = &g_16))))) > ((((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((+g_32), ((*l_74) = (0x1A76A447L | p_36)))), 0x32L)) >= (-1L)) < 0L) & (-5L))), l_76), &g_16, g_2, g_143));
lbl_770:
    (*g_143) = (void*)0;
    for (p_36 = 0; (p_36 != 29); p_36 = safe_add_func_uint32_t_u_u(p_36, 9))
    {
        int * const *l_739 = &g_56;
        int **l_740 = &g_144;
        unsigned *l_741 = &g_366;
        unsigned char ** const l_785 = &g_118;
        int *l_786 = (void*)0;
        int l_791 = 7L;
        int * const *l_824 = &g_144;
        unsigned short l_846 = 0x5162L;
        if (func_46(&l_61, l_739, p_37, l_740, (*g_143)))
        {
            unsigned char l_760 = 0UL;
            int * const l_771 = &g_435;
            if (p_37)
            {
                unsigned l_746 = 0x88B5D86FL;
                unsigned *l_751 = &g_279;
                int l_765 = 0L;
                int **l_766 = &g_144;
                if (((((safe_sub_func_int16_t_s_s(p_36, (0x5AF64DB0L || ((safe_sub_func_uint32_t_u_u((l_746 >= ((*g_114) = (safe_lshift_func_int8_t_s_s(p_37, 6)))), p_37)) <= (safe_div_func_uint32_t_u_u(((*l_751) = ((**l_739) = ((*l_741) = p_37))), p_36)))))) < p_37) < p_37) != p_36))
                {
                    int **l_768 = &l_61;
                    if (p_36)
                    {
                        unsigned char l_752 = 0x8CL;
                        (**l_739) = ((func_46(&g_144, &g_56, (**l_739), &g_144, (*g_143)) <= (*g_114)) == ((*l_751) = (l_752 > p_36)));
                        (*l_740) = l_753;
                        if (p_36)
                            break;
                        if (p_36)
                            continue;
                    }
                    else
                    {
                        int * const *l_767 = (void*)0;
                        int *l_769 = &g_435;
                        l_760 = (!(((safe_rshift_func_uint8_t_u_u(p_37, 3)) > (safe_mod_func_uint16_t_u_u(65529UL, (~(safe_rshift_func_uint8_t_u_s(((!p_37) == ((*g_56) | 0xAB0AC08BL)), 4)))))) != (**l_739)));
                        l_769 = (*g_143);
                        if (g_254)
                            goto lbl_770;
                        (*l_736) = (*l_766);
                    }
                }
                else
                {
                    return l_771;
                }
                (**l_739) = (*g_189);
            }
            else
            {
                int *l_772 = &g_435;
                (*g_143) = l_772;
            }
        }
        else
        {
            if (g_2)
                goto lbl_770;
        }
        for (g_75 = 7; (g_75 < 18); g_75 = safe_add_func_int8_t_s_s(g_75, 9))
        {
            int **l_783 = &g_144;
            unsigned short l_784 = 2UL;
            int l_825 = (-2L);
            unsigned short l_860 = 0x8499L;
            if (((**l_739) = 1L))
            {
                unsigned l_775 = 4294967295UL;
                unsigned short **l_776 = &g_114;
                unsigned short ***l_778 = (void*)0;
                unsigned short ***l_779 = &l_777;
                int **l_782 = &l_753;
                l_775 = p_37;
                if (((p_37 == (((*g_112) = l_776) != ((*l_779) = l_777))) && ((safe_mod_func_uint8_t_u_u((func_46(l_782, l_739, g_231, l_783, (*g_143)) && 254UL), 0xC0L)) == l_784)))
                {
                    unsigned short l_787 = 0xD816L;
                    if (g_366)
                        goto lbl_770;
                    l_787 = func_46(&g_144, &g_144, (l_785 == (void*)0), l_783, l_786);
                }
                else
                {
                    (*g_56) = 0x9421FF47L;
                    (*l_736) = (*g_143);
                    (*l_60) = (*l_783);
                }
                if (p_36)
                    continue;
            }
            else
            {
                int * const l_788 = &g_57;
                return l_788;
            }
            for (g_92 = 6; (g_92 == 16); g_92 = safe_add_func_int32_t_s_s(g_92, 1))
            {
                (*g_56) = (p_36 == 0x9AA004C3L);
            }
            (**l_739) = (p_37 & func_46(&g_144, &l_61, l_791, l_783, ((*l_60) = (*g_143))));
            for (g_677 = (-1); (g_677 == 16); g_677 = safe_add_func_uint16_t_u_u(g_677, 8))
            {
                int ***l_796 = &l_740;
                unsigned * const l_839 = &g_366;
                int **l_844 = &l_61;
                short ***l_851 = (void*)0;
                int **l_859 = &l_753;
                unsigned short *l_865 = &l_860;
                unsigned short *l_866 = &l_846;
                if ((safe_sub_func_int16_t_s_s(func_46(((*l_796) = (void*)0), &g_56, (safe_sub_func_int16_t_s_s((*g_601), (((safe_add_func_uint32_t_u_u(p_36, (safe_sub_func_uint32_t_u_u(p_36, p_37)))) & p_37) ^ (func_46(&g_144, l_803, p_36, &l_61, (*l_783)) & 0x2AL)))), &l_786, l_741), (*g_601))))
                {
                    for (g_67 = (-20); (g_67 < (-30)); g_67--)
                    {
                        short l_807 = 0L;
                        l_807 = ((void*)0 == l_806);
                        if (p_36)
                            continue;
                    }
                    for (g_138 = (-9); (g_138 < (-12)); g_138 = safe_sub_func_int32_t_s_s(g_138, 1))
                    {
                        unsigned l_810 = 4294967291UL;
                        (*g_143) = (*l_739);
                        l_810 = ((*g_56) = ((void*)0 == &g_411));
                        if (p_37)
                            continue;
                    }
                }
                else
                {
                    int *l_811 = &g_16;
                    (*l_783) = l_811;
                    (*g_143) = (*g_143);
                    for (g_691 = 29; (g_691 >= 30); g_691 = safe_add_func_int8_t_s_s(g_691, 6))
                    {
                        (*l_60) = (*g_143);
                        (**l_739) = 0x38AF6222L;
                        (**l_739) = (+0xC344CCDDL);
                        return (*g_143);
                    }
                    if ((func_46(&g_144, &l_786, (**l_739), &l_811, (*g_143)) ^ ((*l_741) = (safe_lshift_func_uint16_t_u_s((*l_811), 0)))))
                    {
                        int *l_816 = (void*)0;
                        (*g_143) = l_816;
                        return (*l_783);
                    }
                    else
                    {
                        (*g_56) = (safe_rshift_func_uint8_t_u_u(((-10L) ^ ((*g_189) <= p_37)), (**l_783)));
                    }
                }
                for (g_691 = (-5); (g_691 <= 2); g_691 = safe_add_func_uint16_t_u_u(g_691, 9))
                {
                    int **l_823 = &l_753;
                    unsigned short *l_828 = &g_470;
                    int l_852 = (-1L);
                    for (g_67 = (-9); (g_67 != (-21)); g_67 = safe_sub_func_uint8_t_u_u(g_67, 3))
                    {
                        (*g_143) = (*l_783);
                        if ((**l_739))
                            break;
                        g_704 = ((*l_736) = (*l_783));
                    }
                    (*g_56) = func_46(l_823, l_824, (p_37 = ((**g_113) < ((p_36 && l_825) == (safe_div_func_uint16_t_u_u(((*l_828) = p_36), (-4L)))))), &l_786, (*g_143));
                    for (g_279 = 0; (g_279 < 47); g_279++)
                    {
                        char l_837 = 0x25L;
                        char l_838 = 2L;
                        (**l_739) = ((-5L) != (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u((p_37 || (safe_add_func_int16_t_s_s((p_36 & ((**g_113) && (*l_753))), (1UL && (func_46((*l_796), l_783, l_837, &g_144, (*g_143)) >= 0xFAL))))), (*g_118))) & p_36), l_838)));
                        (*l_60) = (*g_143);
                    }
                    if (((((**l_806) = l_786) != l_839) & func_46(&g_144, &g_144, (safe_div_func_int32_t_s_s((*g_189), func_46(l_783, l_823, (safe_sub_func_int32_t_s_s((255UL > (**g_283)), p_36)), (*l_796), (*l_823)))), l_844, (*g_143))))
                    {
                        int **l_845 = &g_144;
                        (*l_845) = (*l_739);
                        (*l_60) = (*g_143);
                        l_846 = (**l_783);
                    }
                    else
                    {
                        (*g_56) = ((l_825 && (safe_add_func_int8_t_s_s(func_46(&l_786, &g_144, (safe_add_func_uint32_t_u_u((l_851 == &g_600), p_37)), &g_144, (*g_143)), (**g_283)))) | (**l_823));
                        if (p_37)
                            continue;
                        l_852 = p_36;
                    }
                }
                (**l_739) = (safe_lshift_func_uint16_t_u_s(((*l_866) = (((*l_865) = ((**g_113) = (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((func_46(l_859, l_783, p_36, &l_786, (*l_783)) & (l_860 >= (safe_mod_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((**l_859), ((**g_283) == (**g_283)))) > p_37) != (**l_859)), p_37)))), 2)) < p_36), (**g_113))))) == p_36)), 10));
            }
        }
    }
    (*g_56) = (p_36 > p_36);
    return (*l_736);
}







static int * func_38(int * p_39, int * p_40, unsigned p_41, int ** p_42)
{
    unsigned short **l_457 = (void*)0;
    int l_458 = 0xB358915AL;
    int **l_463 = &g_144;
    unsigned l_474 = 0xC07887B8L;
    unsigned char l_529 = 6UL;
    short *l_591 = &g_69;
    int l_616 = 0xA78EF364L;
    char **l_675 = &g_291;
    int **l_676 = &g_144;
    int l_694 = 0xBB8A0154L;
    char l_713 = 0x8CL;
    const int *l_733 = &l_694;
    const int **l_734 = &g_704;
    if ((((((*g_112) = l_457) != (void*)0) ^ ((~(*p_40)) == (*g_56))) ^ l_458))
    {
        int l_459 = 0x353B18B0L;
        const int *l_460 = &l_458;
        short l_482 = 0xCE6EL;
        short l_503 = (-6L);
        unsigned char l_515 = 0xC8L;
        int l_520 = 0x97C4DA7DL;
        int **l_531 = &g_144;
        unsigned short **** const l_558 = (void*)0;
        char l_559 = 6L;
        int **l_565 = &g_144;
        int l_617 = 0xC9E96CAAL;
        int ***l_665 = &l_531;
        int ***l_666 = &l_463;
        int ***l_667 = &g_143;
        if (l_459)
        {
lbl_545:
            l_460 = (void*)0;
        }
        else
        {
            int **l_465 = &g_144;
            unsigned char l_494 = 4UL;
            char **l_525 = &g_291;
            unsigned char * const *l_542 = &g_118;
            int l_543 = 0x8C486AF5L;
            int * const *l_638 = (void*)0;
            char **l_650 = &g_291;
            if (l_458)
            {
                unsigned short *** const *l_471 = &g_112;
                int l_479 = 0x48190C90L;
                for (g_366 = 0; (g_366 != 38); ++g_366)
                {
                    int * const *l_464 = &g_144;
                    int **l_466 = &g_144;
                    int *l_469 = (void*)0;
                    int **l_468 = &l_469;
                    int ***l_467 = &l_468;
                    int l_499 = 0xA4ABCE9DL;
                    g_470 = func_46(l_463, l_464, func_46(l_465, l_463, g_254, l_466, ((*g_143) = &l_459)), ((*l_467) = &p_39), &g_57);
                    (*g_143) = &l_479;
                    (*l_463) = (*p_42);
                    for (g_75 = 15; (g_75 == 3); g_75--)
                    {
                        unsigned char *l_483 = &g_256;
                        unsigned char *l_484 = &g_329;
                        int l_491 = 1L;
                        unsigned *l_502 = &l_474;
                        (**g_143) = (((*l_484) = ((*l_483) = l_482)) == (safe_add_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((**g_283) > (((l_491 == ((0x51F510D6L <= (((((**l_466) ^ (!(l_491 & ((*l_460) <= p_41)))) <= ((**l_463) == g_32)) | p_41) ^ p_41)) < p_41)) ^ (*l_460)) >= l_494)), 0x2AA8L)), (-8L))) || 3L) || l_479), (*g_56))));
                        if ((*g_56))
                            continue;
                        g_504 = ((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(l_499, (l_479 = ((*l_502) = (+(safe_sub_func_int8_t_s_s(0x53L, (*l_460)))))))), 2)) && ((p_41 & l_503) > (**g_283)));
                        (*l_468) = ((*g_143) = (*g_143));
                    }
                }
                (*g_56) = (safe_lshift_func_uint8_t_u_u(1UL, 2));
            }
            else
            {
                unsigned short l_513 = 65527UL;
                int **l_521 = &g_144;
                int * const *l_575 = &g_56;
                unsigned short l_611 = 0xD498L;
                unsigned short l_618 = 0x803EL;
                unsigned *l_637 = &l_474;
                char *l_641 = &g_254;
                int ***l_642 = &l_531;
                int * const *l_643 = &g_56;
                unsigned char l_644 = 255UL;
                int **l_645 = (void*)0;
                int *l_646 = &l_543;
                if (((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_513, 6L)), 2)), (*p_40))) || p_41))
                {
                    int l_514 = (-1L);
                    int **l_516 = &g_144;
                    char *l_519 = &g_67;
                    unsigned ***l_530 = &g_410;
                    (*g_56) = (l_514 != (3L & func_46(&g_144, l_463, l_515, l_516, (*p_42))));
                    (*l_516) = (*g_143);
                    (*g_56) = (-7L);
                    if ((safe_add_func_int8_t_s_s(((*l_519) = 1L), l_520)))
                    {
                        int * const *l_522 = &g_56;
                        char ***l_526 = &l_525;
                        (**l_522) = func_46(l_521, l_522, (((((void*)0 == g_523) && (&l_519 != ((*l_526) = l_525))) ^ ((**g_283) = (safe_add_func_uint8_t_u_u((l_529 || (((void*)0 != l_530) || (*g_118))), 0x77L)))) && 255UL), l_531, (*l_465));
                        (**l_522) = (-1L);
                    }
                    else
                    {
                        unsigned char l_532 = 0x78L;
                        (*l_463) = (*l_521);
                    }
                    if (g_254)
                        goto lbl_634;
                }
                else
                {
                    const unsigned l_537 = 1UL;
                    int l_544 = (-4L);
                    for (g_279 = (-9); (g_279 >= 49); g_279 = safe_add_func_int32_t_s_s(g_279, 8))
                    {
                        if ((*g_189))
                            break;
                    }
                    l_544 = (((l_543 = (safe_mod_func_uint16_t_u_u(l_537, (safe_add_func_uint8_t_u_u(((*p_40) > (safe_add_func_int8_t_s_s((&g_118 == l_542), (l_537 && func_46(&p_39, &g_144, ((*g_189) && func_46(l_465, &g_56, g_32, &g_144, (*g_143))), &g_144, (*g_143)))))), 0x28L))))) <= g_256) > l_537);
                    if (g_16)
                        goto lbl_545;
                }
                for (l_520 = 0; (l_520 == 9); l_520 = safe_add_func_int16_t_s_s(l_520, 6))
                {
                    int * const **l_560 = (void*)0;
                    int * const **l_561 = (void*)0;
                    int * const **l_562 = &g_55;
                    int * const *l_564 = &g_56;
                    int * const **l_563 = &l_564;
                    int **l_574 = &g_144;
                    int **l_576 = &g_144;
                    if ((((*p_40) > (safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0UL, ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((void*)0 != l_558), l_559)), 3)) | p_41))), 3)), 0x71C2EA10L))) >= func_46(l_521, ((*l_563) = ((*l_562) = (void*)0)), p_41, l_565, (*l_531))))
                    {
                        short *l_568 = &g_69;
                        short *l_569 = &l_482;
                        short *l_577 = &l_503;
                        int *l_578 = &g_138;
                        const char *l_581 = &g_67;
                        const char **l_580 = &l_581;
                        const char ***l_579 = &l_580;
                        (*l_565) = (*p_42);
                        (*l_579) = (void*)0;
                        (*p_42) = (*g_143);
                        (*l_463) = (*l_521);
                    }
                    else
                    {
                        int **l_582 = &g_144;
                        unsigned char *l_592 = &g_329;
                        int l_593 = 0xFE50AA98L;
                        (**l_575) = ((func_46(&g_144, ((*l_562) = &g_56), g_57, l_582, (*p_42)) != p_41) <= (safe_mod_func_int8_t_s_s((+(((*l_592) = ((*g_118) = ((+((safe_div_func_uint8_t_u_u(p_41, (safe_rshift_func_uint16_t_u_s(((((*l_591) = (safe_rshift_func_uint16_t_u_s(((*g_114) = ((l_591 == (void*)0) == 0xE04DL)), g_75))) > 0x1CC7L) ^ (-5L)), p_41)))) > p_41)) == 0xA1D5L))) && p_41)), l_593)));
                        if ((**g_55))
                            continue;
                        (*l_576) = (*l_575);
                        (**g_143) = (**l_463);
                    }
                    (*g_143) = (*l_565);
                    (*g_56) = ((((l_616 = (func_46(l_521, &g_56, p_41, &g_144, (*g_143)) | (safe_add_func_uint8_t_u_u(p_41, ((*g_189) > (safe_sub_func_int16_t_s_s(0xCB63L, p_41))))))) & l_617) | p_41) > l_618);
                }
                if ((safe_lshift_func_uint8_t_u_u(252UL, ((*g_118) = ((void*)0 != (*l_575))))))
                {
                    short l_630 = (-4L);
                    for (p_41 = (-7); (p_41 > 27); p_41 = safe_add_func_uint8_t_u_u(p_41, 8))
                    {
                        short ***l_625 = &g_600;
                        char *l_626 = (void*)0;
                        char *l_627 = &g_67;
                        int *l_631 = &l_458;
                        (*l_631) = (safe_sub_func_int8_t_s_s(((*l_627) = (&g_601 == ((*l_625) = &l_591))), ((l_630 < l_630) >= ((*g_56) = (0L <= (0x459B07DBL & ((void*)0 == (*l_465))))))));
                    }
                }
                else
                {
                    for (l_617 = 0; (l_617 < 19); l_617++)
                    {
                        return (*l_465);
                    }
                    (*g_143) = (void*)0;
lbl_634:
                    (*l_565) = (*g_143);
                    if (((**l_575) = (safe_div_func_uint32_t_u_u(((*l_637) = p_41), (p_41 & (65526UL > func_46(&g_144, (l_638 = &p_40), ((*l_646) = (((*l_641) = (safe_rshift_func_uint16_t_u_s(p_41, 6))) > func_46(((*l_642) = l_531), l_643, ((((l_644 | 0x0FF4L) == p_41) <= l_616) <= (-1L)), l_645, (*l_463)))), &g_144, (*g_143))))))))
                    {
                        int *l_649 = &l_520;
                        int l_651 = 0x3E8B38B7L;
                        int **l_656 = (void*)0;
                        (*g_56) = ((safe_add_func_uint16_t_u_u(func_46(&p_39, &g_144, ((*l_649) = ((*l_646) = (*l_460))), l_463, (*p_42)), ((void*)0 == l_650))) & l_651);
                        (*g_56) = (-1L);
                        (**l_643) = (((*g_601) ^ ((safe_div_func_int32_t_s_s((l_651 || p_41), ((func_46(l_656, &g_56, ((*l_649) = (!(((**l_643) | ((safe_add_func_uint16_t_u_u((*g_114), ((void*)0 == l_525))) != p_41)) <= p_41))), &g_144, (*p_42)) == (**g_283)) | (*g_601)))) == 0xF7L)) | (*g_118));
                    }
                    else
                    {
                        (**l_643) = (*p_40);
                        (**l_642) = (*l_463);
                    }
                }
                (**l_575) = (*p_40);
            }
        }
        (*g_56) = (safe_add_func_uint16_t_u_u(0x11BFL, (safe_lshift_func_uint8_t_u_s(((((*g_56) != p_41) != (safe_lshift_func_uint16_t_u_s(0x8732L, (((p_41 <= func_46(((*l_666) = (l_565 = ((*l_665) = &g_144))), &g_56, p_41, ((*l_667) = &g_144), &g_16)) < 4294967291UL) ^ (**g_283))))) > (*p_40)), 6))));
    }
    else
    {
        int *l_668 = &g_57;
        char **l_673 = &g_291;
        int ***l_711 = &l_463;
        short **l_721 = &g_601;
        int **l_730 = (void*)0;
        (*p_42) = l_668;
        (**p_42) = (**g_143);
        for (g_231 = 0; (g_231 != 51); g_231 = safe_add_func_int32_t_s_s(g_231, 8))
        {
            int l_680 = 0xDBB41DC9L;
            int **l_728 = &l_668;
            int l_729 = 0x37C4C76BL;
        }
    }
    (*l_734) = l_733;
    return p_40;
}







static int * func_43(unsigned p_44, const int * p_45)
{
    int *l_78 = &g_16;
    int **l_77 = &l_78;
    short *l_81 = &g_69;
    int * const **l_86 = &g_55;
    char *l_87 = (void*)0;
    char *l_88 = (void*)0;
    char *l_89 = (void*)0;
    char *l_90 = &g_67;
    unsigned short *l_91 = &g_92;
    int *l_93 = &g_16;
    unsigned l_188 = 0x06A3B5EBL;
    int l_330 = (-2L);
    int * const l_348 = &l_330;
    unsigned short *l_447 = &g_92;
lbl_201:
    (*l_77) = (void*)0;
    if ((p_44 || ((*l_91) = (((p_44 <= ((*l_81) = (safe_rshift_func_uint8_t_u_s(g_69, 0)))) != (p_44 & (+(safe_mod_func_uint16_t_u_u(0UL, p_44))))) > (((*l_90) = (safe_lshift_func_uint8_t_u_u(((*g_56) != func_46(&l_78, ((*l_86) = &l_78), g_2, &l_78, (*l_77))), g_16))) != g_57)))))
    {
        unsigned short ***l_115 = &g_113;
        int **l_125 = &l_93;
        int l_128 = 0x52899D3DL;
        int **l_135 = (void*)0;
        int * const **l_161 = &g_55;
        const char *l_202 = &g_67;
        short *l_212 = &g_69;
        int *l_217 = &g_16;
        const char **l_289 = &l_202;
        int l_292 = 0x3C2E1771L;
        int *l_316 = &l_292;
        int *l_374 = &g_57;
        int l_380 = 0x88E31144L;
        unsigned ***l_412 = (void*)0;
        unsigned ***l_413 = &g_410;
        (*l_77) = l_93;
        if (((*g_56) = 0L))
        {
            unsigned short **l_95 = &l_91;
            unsigned short ***l_94 = &l_95;
            unsigned short *l_108 = &g_109;
            (*l_94) = &l_91;
            (*g_56) = (((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0UL, g_92)), 0UL)) < 0x9CE7L), ((safe_mod_func_uint16_t_u_u(p_44, ((*l_108) = g_92))) & 0UL))), 5)) < (safe_lshift_func_int16_t_s_u(((+((g_112 == l_115) != (*p_45))) == p_44), 8))) > 1UL);
        }
        else
        {
            unsigned char *l_119 = (void*)0;
            unsigned char **l_120 = &l_119;
            int ***l_126 = &l_125;
            int **l_127 = &l_93;
            int l_148 = 0xC377822EL;
            char l_170 = 1L;
            int **l_183 = &l_78;
            int * const *l_186 = (void*)0;
            if (((~(safe_mod_func_int8_t_s_s(((g_118 = &g_75) == ((*l_120) = l_119)), (safe_div_func_uint32_t_u_u(g_57, g_92))))) && (((safe_sub_func_int8_t_s_s(func_46(((*l_126) = l_125), &g_56, p_44, l_127, (*l_77)), l_128)) || p_44) ^ (**l_127))))
            {
                int ***l_136 = &l_127;
                int *l_137 = &g_138;
                int **l_139 = &l_93;
                (*g_56) = (((safe_lshift_func_int8_t_s_s((**l_125), 2)) | (&g_67 == (void*)0)) > (+(+((*l_81) = ((*g_118) <= ((~(safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_44, 3)), func_46(((*l_136) = l_135), (*l_126), ((*l_137) = p_44), l_139, (*l_139))))) & 0x30L))))));
            }
            else
            {
                int **l_142 = (void*)0;
                short *l_147 = (void*)0;
                l_148 = (~((**g_143) = (+((safe_lshift_func_int8_t_s_u((func_46(l_142, l_135, p_44, g_143, (**l_126)) < (((g_75 <= (safe_sub_func_uint16_t_u_u((((**l_127) | ((!(l_147 == (void*)0)) >= (*p_45))) != (**l_77)), 0xE93FL))) <= 4294967294UL) || g_32)), 5)) | (*p_45)))));
                (**g_143) = (**g_143);
                return (*g_143);
            }
            if ((*p_45))
            {
                (*l_125) = (*g_143);
                return (*g_143);
            }
            else
            {
                int **l_157 = &l_78;
                char l_164 = 0x50L;
                int **l_187 = &g_144;
                for (l_148 = 0; (l_148 == (-12)); l_148 = safe_sub_func_int32_t_s_s(l_148, 9))
                {
                    int **l_158 = (void*)0;
                    unsigned l_168 = 4294967290UL;
                    unsigned short *l_171 = (void*)0;
                    if ((safe_div_func_uint8_t_u_u((((*l_90) = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((0xE529FE0DL >= ((func_46(l_157, &g_144, (((((((*g_118) = p_44) & (g_118 == (void*)0)) || func_46(&g_144, (*l_126), p_44, l_158, (**l_126))) != p_44) || 0x5A7B369AL) >= p_44), &g_144, (*g_143)) ^ (*p_45)) ^ 255UL)) & (**l_157)), (**l_157))), 4))) >= p_44), 1L)))
                    {
                        int *l_159 = &g_138;
                        int **l_160 = &l_78;
                        (*g_144) = func_46((*l_126), &g_56, ((*l_159) = 0xEDDA491FL), (l_77 = l_160), (*g_143));
                        (*l_77) = (*g_143);
                        (*g_144) = ((l_161 = &g_55) != (void*)0);
                        return (*g_143);
                    }
                    else
                    {
                        const int **l_165 = (void*)0;
                        const int *l_167 = &l_148;
                        const int **l_166 = &l_167;
                        (**g_143) = (safe_mod_func_int32_t_s_s((*p_45), (l_164 | 0x3E9EL)));
                        (*l_125) = (*g_143);
                        (*l_166) = p_45;
                        if ((*p_45))
                            continue;
                    }
                    if ((**g_143))
                        continue;
                    if (l_168)
                    {
                        int *l_169 = &l_128;
                        unsigned short **l_172 = &l_171;
                        unsigned *l_182 = &l_168;
                        int * const *l_185 = (void*)0;
                        int * const **l_184 = &l_185;
                        (*l_77) = l_169;
                        if (l_170)
                            continue;
                        (*g_144) = ((*g_113) != ((*l_172) = l_171));
                        (**l_183) = ((safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s(((safe_sub_func_uint16_t_u_u((0xA35AL ^ (((((((*l_93) = (*g_144)) & (safe_add_func_uint32_t_u_u(((*l_182) = g_75), p_44))) || (func_46(l_183, (l_186 = ((*l_184) = ((*l_161) = &g_56))), (g_138 = p_44), l_187, (*g_143)) > g_109)) > (*l_169)) > 0x9DF61D7EL) == l_188)), 0x2F4EL)) || 0UL))) >= 1UL), p_44)) | (*l_78));
                    }
                    else
                    {
                        g_189 = p_45;
                    }
                    if ((*g_144))
                    {
                        (*l_93) = (*p_45);
                        return (*g_143);
                    }
                    else
                    {
                        const int **l_190 = &g_189;
                        (*l_190) = p_45;
                    }
                }
            }
            (*l_183) = (*l_183);
        }
        if (((*g_56) = (*g_56)))
        {
            int ***l_193 = &l_125;
            int * const *l_198 = &l_93;
            int *l_199 = &l_128;
            int * const *l_211 = &g_56;
            unsigned short ***l_228 = &g_113;
            short *l_272 = &g_69;
            int **l_296 = &l_93;
            int **l_312 = &l_199;
            if ((((*l_90) = (safe_rshift_func_int8_t_s_u(func_46(((*l_193) = &g_144), (*l_161), (p_44 < (safe_div_func_uint8_t_u_u((((*g_56) | (p_44 == g_109)) & (*g_144)), (safe_mod_func_int32_t_s_s(func_46(&g_144, l_198, (**l_198), &g_144, (*g_143)), 0x48A961F3L))))), l_135, (*g_143)), (**l_198)))) != 0x72L))
            {
                const int **l_200 = &g_189;
                l_199 = (*l_198);
                (*l_200) = p_45;
            }
            else
            {
                const char *l_204 = &g_205;
                const char **l_203 = &l_204;
                int **l_210 = &l_93;
                short *l_213 = &g_69;
                short **l_214 = &l_213;
                if (l_188)
                    goto lbl_201;
                (*l_199) = ((*g_56) = (((l_202 != ((*l_203) = l_90)) || (safe_div_func_uint8_t_u_u(p_44, (safe_add_func_int16_t_s_s((p_44 || func_46(l_210, l_211, ((((l_81 = l_212) == ((*l_214) = l_213)) < (((*l_90) = (safe_div_func_int32_t_s_s((*p_45), (*p_45)))) ^ p_44)) ^ g_75), &g_144, (*l_77))), (**g_113)))))) || g_2));
            }
            (*l_77) = l_217;
            if ((((**l_125) != g_138) >= (*g_144)))
            {
                int **l_225 = (void*)0;
                unsigned l_241 = 0xC482C0EEL;
                int *l_269 = &l_128;
                unsigned char **l_280 = &g_118;
                const int **l_293 = &g_189;
                for (g_67 = (-16); (g_67 <= 28); g_67++)
                {
                    unsigned short ****l_229 = &l_115;
                    unsigned short ****l_230 = &g_112;
                    int l_240 = (-1L);
                    int l_263 = 0xE5BDD16FL;
                    for (g_57 = 23; (g_57 == (-9)); g_57--)
                    {
                        const int **l_222 = &g_189;
                        (*l_222) = p_45;
                    }
                }
                (*l_293) = p_45;
                (*g_56) = (safe_rshift_func_uint16_t_u_s(((func_46(l_296, &g_144, ((*l_269) = (((**l_211) <= (*l_78)) && g_32)), &g_144, (*l_77)) && (l_199 != (void*)0)) & (*l_217)), p_44));
                (*g_144) = (g_57 && 0xC935B343L);
            }
            else
            {
                int *l_298 = &l_292;
                char **l_324 = &l_87;
                const int **l_331 = &g_189;
                if ((*g_189))
                {
                    int * const *l_297 = &g_144;
                    int **l_314 = &l_93;
                    const int **l_317 = &g_189;
                    if ((func_46(((*l_193) = &g_144), l_297, p_44, &g_144, l_298) ^ (safe_div_func_int16_t_s_s((p_44 | (**l_297)), g_205))))
                    {
                        int **l_311 = &l_78;
                        int *l_313 = &g_138;
                        int *l_315 = &l_128;
                        (*l_315) = (safe_sub_func_uint8_t_u_u(0x1DL, (safe_mod_func_uint16_t_u_u((g_67 > (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((func_46(&l_217, &g_56, func_46(&l_217, &l_298, ((*l_313) = ((*p_45) >= func_46(l_311, ((*l_161) = (*l_161)), g_205, l_312, (*g_143)))), &g_144, (*l_311)), l_314, l_315) & 0x84L), 0)), p_44)) && (*g_189)), (*l_298)))), 0xB13EL))));
                        (*g_56) = func_46(&l_298, &g_144, p_44, &l_298, l_316);
                        (*l_298) = 0L;
                        return (*g_143);
                    }
                    else
                    {
                        (**g_143) = (-10L);
                        (**g_143) = (*g_56);
                        (**g_143) = (*g_56);
                        (*l_298) = (*l_298);
                    }
                    (*l_317) = p_45;
                }
                else
                {
                    (*l_125) = (**l_193);
                    (*l_312) = (*g_143);
                }
                l_330 = (g_329 = (safe_sub_func_int8_t_s_s(((((safe_div_func_uint16_t_u_u(1UL, (*g_114))) && (safe_sub_func_uint32_t_u_u(((*g_290) == ((*l_324) = l_89)), (safe_sub_func_int32_t_s_s(((*g_144) = ((*l_316) = (*g_144))), (**l_77)))))) ^ g_67) != ((safe_rshift_func_uint16_t_u_u((***g_112), (***g_112))) <= (**g_283))), (-1L))));
                (*l_331) = p_45;
            }
            (*g_56) = ((*l_86) != (*l_86));
        }
        else
        {
            short l_334 = 8L;
            int * const *l_336 = &l_93;
            short **l_351 = &l_212;
            int **l_377 = &l_316;
            for (g_67 = (-19); (g_67 <= 7); ++g_67)
            {
                int **l_335 = &g_144;
                int l_343 = (-4L);
                const int *l_350 = (void*)0;
                char * const l_363 = (void*)0;
                const unsigned char l_368 = 0x3BL;
                (*g_56) = (*g_189);
            }
            (*l_377) = (*l_377);
        }
        (*l_413) = g_410;
    }
    else
    {
        int *l_425 = (void*)0;
        int l_426 = 0x60737BC0L;
        const unsigned l_443 = 1UL;
        for (g_67 = 0; (g_67 > 10); g_67 = safe_add_func_uint32_t_u_u(g_67, 8))
        {
            g_189 = p_45;
        }
        (**g_143) = (*l_93);
        for (g_279 = 26; (g_279 == 9); g_279 = safe_sub_func_uint32_t_u_u(g_279, 1))
        {
            int *l_422 = &g_16;
            int **l_431 = &l_422;
            for (p_44 = (-1); (p_44 == 30); p_44 = safe_add_func_uint32_t_u_u(p_44, 1))
            {
                (*l_77) = ((*g_143) = (void*)0);
                (*l_77) = ((*g_143) = (void*)0);
            }
            if ((0xB8L ^ 0x52L))
            {
                for (g_57 = 0; (g_57 == (-18)); g_57--)
                {
                    if ((*p_45))
                        break;
                    return (*g_143);
                }
                if ((*g_189))
                    continue;
                return l_422;
            }
            else
            {
                int * const l_434 = &g_435;
                int * const *l_433 = &l_434;
                int **l_442 = &l_93;
                unsigned short *l_448 = &g_109;
                unsigned ***l_449 = &g_410;
                for (l_330 = 0; (l_330 >= 11); l_330 = safe_add_func_uint32_t_u_u(l_330, 2))
                {
                    return l_422;
                }
                (*g_143) = l_425;
                (*g_56) = (*p_45);
                if (l_426)
                {
                    int **l_432 = &l_78;
                    if (((*l_348) = (((**g_113) = 0x07C8L) ^ (((*g_410) == &l_188) < ((*l_90) = (safe_lshift_func_uint8_t_u_u((p_45 == &g_138), (*g_118))))))))
                    {
                        unsigned l_429 = 0xFD3BF148L;
                        const int **l_430 = &g_189;
                        int *l_440 = (void*)0;
                        int *l_441 = &g_138;
                        l_429 = l_426;
                        (*l_430) = p_45;
                        (*g_56) = (*p_45);
                        (*l_348) = (((g_231 && g_231) && (((func_46(l_431, &l_422, func_46(l_432, (l_433 = l_432), ((*l_441) = ((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((((*l_434) <= ((**g_283) = ((((**l_430) != (255UL && (*g_118))) >= 0xF9694329L) != 0x28EAL))) == g_231) <= p_44), 1UL)) >= p_44), g_231)) >= p_44)), l_442, (*g_143)), &l_422, l_441) > 0x79L) >= p_44) && (**g_113))) | l_443);
                    }
                    else
                    {
                        (*g_143) = (*l_77);
                    }
                    for (l_426 = 0; (l_426 != (-22)); l_426--)
                    {
                        int **l_446 = &l_425;
                        (*l_434) = (p_44 && (*l_93));
                        (*g_56) = (((void*)0 == &g_283) ^ (p_44 <= (**g_283)));
                        (*l_446) = (*l_433);
                        (*l_348) = (*p_45);
                    }
                    if ((l_447 != ((**g_112) = l_448)))
                    {
                        int *l_450 = &l_426;
                        (*g_56) = (((l_449 != (void*)0) | (*g_118)) < (((*g_283) != (*g_283)) || p_44));
                        return (*g_143);
                    }
                    else
                    {
                        (*l_348) = ((*g_56) = ((5L > (**g_113)) >= g_16));
                    }
                    (*l_77) = (void*)0;
                }
                else
                {
                    const int *l_452 = &g_16;
                    int **l_454 = &l_422;
                    (*l_434) = (*p_45);
                    if ((*p_45))
                    {
                        if ((*p_45))
                            break;
                    }
                    else
                    {
                        int *l_451 = &g_57;
                        const int **l_453 = &g_189;
                        (*l_431) = l_451;
                        (*l_453) = l_452;
                    }
                    (*l_454) = (*l_433);
                    for (p_44 = 21; (p_44 < 33); p_44 = safe_add_func_int16_t_s_s(p_44, 7))
                    {
                        p_45 = p_45;
                    }
                }
            }
        }
    }
    return (*g_143);
}







static char func_46(int ** p_47, int * const * p_48, int p_49, int ** p_50, int * p_51)
{
    int l_62 = 0xA9711F64L;
    int l_63 = 0x80735653L;
    int *l_65 = &g_16;
    int **l_64 = &l_65;
    l_63 = l_62;
    (*l_64) = &l_63;
    return g_32;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
